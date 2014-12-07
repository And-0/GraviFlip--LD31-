package;


import flixel.effects.particles.FlxEmitter;
import flixel.effects.particles.FlxParticle;
import flixel.FlxG;
import flixel.FlxSprite;
import flixel.FlxState;
import flixel.text.FlxText;
import flixel.ui.FlxButton;
import flixel.util.FlxColor;
import flixel.util.FlxMath;
using flixel.util.FlxSpriteUtil;

/**
 * A FlxState which can be used for the game's menu.
 */
class MenuState extends FlxState
{
	private var _btnPlay:GBButton;
	private var _btnMusic:GBButton;
	private var _btnSound:GBButton;
	private var _txtTitle:FlxText;
	private var _logo:FlxSprite;
	static public var music:Bool = true;
	static public var sound:Bool = true;
	
	private var _starEmitter:FlxEmitter;
	private var _star:FlxParticle;
	
	private var _txtCredit:FlxText;
	
	/**
	 * Function that is called up when to state is created to set it up. 
	 */
	override public function create():Void
	{
		super.create();
		bgColor = 0xff204631;
		
		//Create emitter
		_starEmitter = new FlxEmitter(FlxG.width / 2, FlxG.height / 2, 60);
		for (i in 0...60) 
		{
			_star = new FlxParticle();
			_star.makeGraphic(2, 2, 0xffd7e894);
			_starEmitter.add(_star);
		}
		
		add(_starEmitter);
		_starEmitter.start(false, 3,0.05);
		
		//Create Logo
		_logo = new FlxSprite(0, 0);
		_logo.loadGraphic(AssetPaths.logo__png, false, 144, 64);
		_logo.screenCenter();
		_logo.y -= _logo.height / 2;
		add(_logo);
		
		//Create Buttons
		_btnPlay = new GBButton(0, 0, "PLAY", onClickPlay);
		_btnPlay.screenCenter();
		_btnPlay.y = _logo.y + _logo.height + 16;
		add(_btnPlay);
		
		_btnSound = new GBButton(0, 0, "SFX: ON", toggleSound);
		_btnSound.screenCenter();
		_btnSound.y = _btnPlay.y + _btnPlay.height + 3;
		
		_btnMusic = new GBButton(0, 0, "MUSIC: ON", toggleMusic);
		_btnMusic.screenCenter();
		_btnMusic.y = _btnSound.y +_btnSound.height + 3;
		
		_btnSound.label.text = (MenuState.sound) ? "SFX: ON" : "SFX: OFF";
		_btnMusic.label.text = (MenuState.music) ? "MUSIC: ON" : "MUSIC: OFF";
		
		add(_btnSound);
		add(_btnMusic);
		
		
		
		//Create credit line
		_txtCredit = new FlxText(FlxG.width/2, FlxG.height - 18, 0, "CREATED BY OHSAT GAMES FOR LD31, 2014");
		_txtCredit.setFormat(AssetPaths.CoasterBoy__ttf, 8, 0xffd7e894);
		_txtCredit.x -= _txtCredit.width / 2;
		add(_txtCredit);
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
	}	
	
	private function onClickPlay():Void {
		FlxG.switchState(new PlayState());
	}
	
	private function toggleMusic():Void {
		MenuState.music = !MenuState.music;
		_btnMusic.label.text = (MenuState.music) ? "MUSIC: ON" : "MUSIC: OFF";
	}
	
	private function toggleSound():Void {
		MenuState.sound = !MenuState.sound;
		_btnSound.label.text = (MenuState.sound) ? "SFX: ON" : "SFX: OFF";
	}
}