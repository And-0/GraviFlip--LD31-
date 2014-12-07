package;

import flixel.addons.display.FlxBackdrop;
import flixel.FlxG;
import flixel.FlxObject;
import flixel.FlxSprite;
import flixel.FlxState;
import flixel.group.FlxTypedGroup;
import flixel.system.FlxSound;
import flixel.text.FlxText;
import flixel.tweens.FlxTween;
import flixel.ui.FlxButton;
import flixel.util.FlxColor;
import flixel.util.FlxMath;
import flixel.util.FlxRandom;
import flixel.util.FlxStringUtil;

using flixel.util.FlxSpriteUtil;

/**
 * A FlxState which can be used for the actual gameplay.
 */
class PlayState extends FlxState
{
	/**
	 * Function that is called up when to state is created to set it up. 
	 */
	
	//CONSTANTS 
	public static var TILESIZE:Int = 16;
	
	//Game-wide variables
	public static var level:Int = 1;
	public static var gravityFlipped:Bool = false;
	public static var gravityFactor:Int = 1;//Helper variable to invert vertical movement (better than "if gravityFlipped ? 1 : -1"
	
	//Score / HUD
	private var _txtScore:FlxText;
	private var _scoreValue:Int = 0;
	
	//Room
	private var _sprBackground:FlxSprite;
	private var _space:FlxBackdrop;
	private var _space2:FlxBackdrop;
	private var _floor:FlxSprite;
	private var _ceiling:FlxSprite;
	private var _wallLeft:FlxSprite;
	private var _wallRight:FlxSprite;
	private var _grpRoom:FlxTypedGroup<FlxSprite>;
	private var _grpFloorCeiling:FlxTypedGroup <FlxSprite>;
	private var _grpWalls:FlxTypedGroup<FlxSprite>;
	private var _arrows:FlxSprite;
	
	private var _grpEnemy:FlxTypedGroup<Enemy>;
	private var _grpSpikeball:FlxTypedGroup<Spikeball>;
	
	private var _player:Player;
	public var comboFactor:Int = 1;
	 
	//Sounds
	private var _musicOn:Bool;
	private var _soundOn:Bool;
	private var _sndBounce:FlxSound;
	private var _sndHit:FlxSound;
	private var _sndMusic:FlxSound;
	
	//Tutorial
	private var _isTutorial:Bool;
	private var _txtTutorial:FlxText;
	private var _window:FlxSprite;
	private var _tutStep:Int = 1;
	private var _txtPressN:FlxText;
	 
	public function new(?loadTutorial:Bool=true):Void {
			super();
			//Do we load the tutorial?
			_isTutorial = loadTutorial;
			
	}
	
	override public function create():Void
	{
		super.create();
		FlxG.log.add("Starting Playstate");
		
		
		
		//Load sounds
		_musicOn = MenuState.music;
		_soundOn = MenuState.sound;
		_sndBounce = FlxG.sound.load(AssetPaths.bounce__wav,0.2);
		_sndHit = FlxG.sound.load(AssetPaths.hit__wav,0.2);
		
		if (_musicOn) {
			#if flash
			_sndMusic = FlxG.sound.load(AssetPaths.music__wav, 1, true);
			#else
			_sndMusic = FlxG.sound.load(AssetPaths.music__ogg,1,true);
			#end
			_sndMusic.play();
			
		}
		
		//Set up space backdrop
		_space = new FlxBackdrop(AssetPaths.space__png, 1, 1, true, true);
		_space.x = PlayState.TILESIZE;
		_space.y = PlayState.TILESIZE;
		_space.velocity.x = -2;
		_space.velocity.y = 1;
		
		_space2 = new FlxBackdrop(AssetPaths.space2__png, 1, 1, true, true);
		_space2.x = PlayState.TILESIZE;
		_space2.y = PlayState.TILESIZE;
		_space2.velocity.x = -10;
		_space2.velocity.y = 2;
		
		//Create room
		_sprBackground = new FlxSprite(0, 0);
		_sprBackground.loadGraphic(AssetPaths.bg__png, false, 320, 288);
		
		_floor = new FlxSprite(0, FlxG.height - PlayState.TILESIZE*2);
		_floor.makeGraphic(FlxG.width, PlayState.TILESIZE, FlxColor.TRANSPARENT);
		
		_ceiling = new FlxSprite(0, PlayState.TILESIZE);
		_ceiling.makeGraphic(FlxG.width, PlayState.TILESIZE, FlxColor.TRANSPARENT);
		
		_wallLeft = new FlxSprite(0, 0);
		_wallLeft.loadGraphic(AssetPaths.wall__png, false, 16, 288);
		
		_wallRight = new FlxSprite(FlxG.width - PlayState.TILESIZE, 0);
		_wallRight.loadGraphic(AssetPaths.wall__png, false, 16, 288);
		_wallRight.flipX = true;
		
		_grpRoom = new FlxTypedGroup<FlxSprite>();
		_grpFloorCeiling = new FlxTypedGroup<FlxSprite>();
		_grpWalls = new FlxTypedGroup<FlxSprite>();
		
		_grpRoom.add(_wallLeft);
		_grpRoom.add(_wallRight);
		_grpRoom.add(_floor);
		_grpRoom.add(_ceiling);
		
		_grpFloorCeiling.add(_floor);
		_grpFloorCeiling.add(_ceiling);
		_grpWalls.add(_wallLeft);
		_grpWalls.add(_wallRight);
		
		_grpRoom.setAll("immovable", true);
		
		//Add arrows
		_arrows = new FlxSprite(268, 146);
		_arrows.loadGraphic(AssetPaths.arrows__png, true, 32, 16);
		//Definitely an ugly way to do this:
		_arrows.animation.add("noflip", [0], 1, false);
		_arrows.animation.add("flip", [1], 1, false);
		
		
		//Create score display
		_scoreValue = 0;
		_txtScore = new FlxText(9*TILESIZE,4*TILESIZE, 0, "0", 8);
		_txtScore.setFormat(AssetPaths.CoasterBoy__ttf, 8, 0xffd7e894, "center");
		_txtScore.y -= 5;
		updateScoreDisplay();
		
		
		
		//Create player
		_player = new Player(0, 0);
		_player.screenCenter();
		
		//Init Tutorial
		if (_isTutorial) {
			_txtTutorial = new FlxText(0, 0, 0, "WELCOME! PRESS\n\nENTER TO SKIP THE\n\nTUTORIAL.", 8);//Text is a hacky way of getting the formating the way I want
			_txtTutorial.setFormat(AssetPaths.CoasterBoy__ttf, 8, 0xffd7e894, "left");
			_txtTutorial.screenCenter();
			_txtTutorial.y -= 16;
			_txtTutorial.x = Math.floor(_txtTutorial.x);
			_txtTutorial.y = Math.floor(_txtTutorial.y);
			_txtTutorial.text = "WELCOME! PRESS\n\nENTER TO SKIP THE\n\nTUTORIAL AT ANY\n\nTIME!";
			_txtPressN = new FlxText(0, 0, 0, "PRESS N TO\n\nCONTINUE", 8);
			_txtPressN.setFormat(AssetPaths.CoasterBoy__ttf, 8, 0xffd7e894, "left");
			_txtPressN.screenCenter();
			_txtPressN.y += 30;
			//_txtPressN.x -= Math.floor(_txtPressN.width / 2);
			

			_window = new FlxSprite(0, 0, AssetPaths.subwindow__png);
			_window.screenCenter();
			
			_grpEnemy = new FlxTypedGroup<Enemy>();
			_grpSpikeball = new FlxTypedGroup<Spikeball>();
			
			add(_sprBackground);
			add(_window);
			add(_grpFloorCeiling);
			add (_txtTutorial);
			add(_txtPressN);
			add(_arrows);
			add(_player);
			add(_grpSpikeball);
			add(_grpEnemy);
			add(_grpWalls);
			add(_txtScore);
			
			
			
			
			
			
			return;
		}
		
		//Create spikeball
		_grpSpikeball = new FlxTypedGroup<Spikeball>();
		var sb:Spikeball = new Spikeball(64, 96,false);
		_grpSpikeball.add(sb);
		var sb2:Spikeball = new Spikeball(FlxG.width-96, 96,false);
		_grpSpikeball.add(sb2);
		
		//Create enemies
		_grpEnemy = new FlxTypedGroup<Enemy>();
		var e1:Enemy = new Enemy(0, 0, true, true, false);
		var e2:Enemy = new Enemy(0, 0, true, false, true);
		var e3:Enemy = new Enemy(0, 0, false, false, true);
	
		_grpEnemy.add(e1);
		_grpEnemy.add(e2);
		_grpEnemy.add(e3);
		
		
		
		
		
		//Add objects
		add(_space);
		add(_space2);
		add(_sprBackground);
		add(_grpFloorCeiling);
		add(_arrows);
		add(_txtScore);
		add(_player);
		add(_grpEnemy);
		add(_grpSpikeball);
		add(_grpWalls);
		
	}
	
	/**
	 * Function that is called when this state is destroyed - you might want to 
	 * consider setting all objects this state uses to null to help garbage collection.
	 */
	override public function destroy():Void
	{
		super.destroy();
	}

	/**
	 * Function that is called once every frame.
	 */
	override public function update():Void
	{
		super.update();
		
		if(_isTutorial){
			if ( FlxG.keys.justPressed.N) {
				nextTutStep();
			}
			else if (FlxG.keys.justPressed.ENTER) {
				FlxG.switchState(new PlayState(false));
			}
		}
		
		//Handle collisions
		//FlxG.collide(_player, _grpRoom);
		if (FlxG.collide(_player, _grpFloorCeiling)) {
			resetComboFactor();
			_player.setOnFloor();
		}
		FlxG.collide(_grpWalls,_player);
		FlxG.collide(_grpEnemy, _grpFloorCeiling);
		FlxG.collide(_grpFloorCeiling, _grpSpikeball);
		FlxG.overlap(_player, _grpEnemy, onOverlap);
		FlxG.overlap(_player, _grpSpikeball,killPlayer );
		
		//Flip gravity
		if (FlxG.keys.justPressed.SPACE) {
			flipGravity();
		}
		
		
	}	
	
	public function flipGravity():Void { FlxG.log.add(_player.x+" "+_player.y);
		PlayState.gravityFlipped = !PlayState.gravityFlipped;
		PlayState.gravityFactor = PlayState.gravityFlipped ? -1 : 1;
		if (PlayState.gravityFlipped) {
			_arrows.animation.play("flip");
		}
		else {
			_arrows.animation.play("noflip");
		}
		_player.flipGravity();
		_grpSpikeball.callAll("flipGravity");
		_grpEnemy.callAll("flipGravity");
		
	}
	
	public function onOverlap(p:FlxObject, e:FlxObject):Void {
		
		//Play sound
		
		
		//Cast so we have access to Player's functions
		var pl:Player = cast(p, Player);
		var en:Enemy = cast(e, Enemy);
		FlxG.log.add(pl.y+" : "+(en.y+en.height)); 
		//If player lands on top of enemy, kill it. Otherwise...
		
		//This is a horrible way to do what I'm trying to do.
		if (( pl.x >= en.x-en.width && pl.x <= en.x+en.width )) { 
			if ( Math.abs(pl.velocity.y) >= 50 && ( (pl.y+pl.height < en.getMidpoint().y) || (pl.getMidpoint().y > en.y+en.height) ) )   {
				if(_soundOn){
					_sndBounce.play();
				}
				pl.bounce();
				e.kill();
				showScoreGet(en, comboFactor);
				addToScore(en.pointValue*comboFactor);
				comboFactor += 1;
				comboFactor = (comboFactor > 10) ? 10 : comboFactor;
				addEnemy(1);
			}
			else {
				killPlayer();
			}
		}
		//...destroy the player
		
		
	}
	
	private function addToScore(toAdd:Int):Void {
		_scoreValue += toAdd;
		updateScoreDisplay();
	}
	
	private function updateScoreDisplay():Void {
		_txtScore.text = Std.string(_scoreValue);
	}
	
	private function showScoreGet(enemy:Enemy,?comboFactor:Int = 1):Void {
		var txt:FlxText = new FlxText(enemy.x,enemy.y, 0, Std.string(enemy.pointValue*comboFactor), 8);
		txt.setFormat("assets/CoasterBoy.ttf", 8, 0xff204631, "center");
		FlxTween.tween(txt, { y: enemy.y - 20*PlayState.gravityFactor }, 0.8, { complete: function(Tween:FlxTween) { txt.destroy(); } } );
		add(txt);
	}
	
	private function addEnemy(?num:Int = 1):Void {
		if (_isTutorial) return;
		if(level <= 50){
			level++;
		}
		for (i in 0...num) {
			var enemy:Enemy = new Enemy(0, 0, FlxRandom.chanceRoll(), FlxRandom.chanceRoll(), FlxRandom.chanceRoll(100 - level));
			_grpEnemy.add(enemy);
		}
		
	}
	
	private function resetComboFactor():Void {
		comboFactor = 1;
	}
	
	private function endGame():Void {
		openSubState(new SubEnd(_scoreValue));
	}
	
	private function killPlayer(?p:FlxObject, ?e:FlxObject):Void {
		if(_soundOn){
			_sndHit.play();
		}
		if (_musicOn) {
			_sndMusic.stop();
		}
		_player.destroy();
		endGame();
	}
	
	private function nextTutStep():Void {
		_tutStep++;
		switch(_tutStep) {
			case 2: {
				_txtTutorial.text = "LEFT AND RIGHT\n\nOR A AND D\n\nTO MOVE!";
			}
			case 3: {
				_txtTutorial.text = "PRESS SPACE TO\n\n FLIP GRAVITY!";
			}
			case 4: {
				_txtTutorial.text = "LAND ON THE\n\nENEMY!";
			
				var e:Enemy = new Enemy(0, 0, true, true, true);
				_grpEnemy.add(e);
			}
			case 5: {
				_txtTutorial.text = "THESE ENEMIES\n\nARE AFFECTED\n\nBY GRAVITY!";
			
				var e:Enemy = new Enemy(0, 0, true, true, false);
				_grpEnemy.add(e);
				
			}
			case 6: {
				_txtTutorial.text = "WATCH OUT FOR\n\nTHE SPIKES WHEN\n\nFLIPPING!";
				var sb:Spikeball = new Spikeball(64, 128,false);
				_grpSpikeball.add(sb);
				var sb2:Spikeball = new Spikeball(FlxG.width-96, 128,false);
				_grpSpikeball.add(sb2);
				
			}
			case 7: {
				_txtTutorial.text = "KILL MULTIPLE\n\nENEMIES IN ONE GO\n\nFOR A COMBO!";
				
				var e1:Enemy = new Enemy(0, 32, false, true, true);//32 is a hack since enemies weren't positioned correctly for some reason
				var e2:Enemy = new Enemy(0, 32, false, false, true);
				
				_grpEnemy.add(e1);
				_grpEnemy.add(e2);
			}
			case 8: {
				_txtTutorial.text = "THE LONGER THE\n\nCOMBO THE MORE\n\nPOINTS YOU GET\n\nFOR EACH ENEMY!";
			}
			case 9: {
				_txtTutorial.text = "TOUCHING THE\n\nFLOOR OR\n\nCEILING WILL\n\nEND THE COMBO!";
			}
			case 10: {
				_txtPressN.destroy();
				_txtTutorial.text = "PRESS ENTER TO\n\nBEGIN!\n\n\n\nGET THAT HIGH\n\nSCORE!";
			}
			
		}
		
	}
}