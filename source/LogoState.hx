package ;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.FlxState;
import flixel.system.FlxSound;
import flixel.tweens.FlxTween;
import flixel.util.FlxTimer;

/**
 * ...
 * @author ...
 */
class LogoState extends FlxState
{
	
	private var _ohlogo:FlxSprite;
	private var _twOhlogo:FlxTween;
	private var _sndStart:FlxSound;
	private var _tDelay:FlxTimer;

	override public function create() 
	{
		super.create();
		bgColor = 0xffD7E894;
		
		_sndStart = FlxG.sound.load(AssetPaths.startup__wav);
		//_sndStart.onComplete = function():Void { FlxG.switchState(new MenuState()); }
		
		_tDelay = new FlxTimer(1.5, startGame);
		_tDelay.active = false;
		
		_ohlogo = new FlxSprite(0, 0);
		_ohlogo.loadGraphic(AssetPaths.ohlogo__png, false, 240, 273);
		_ohlogo.setGraphicSize(180, 0);
		_ohlogo.x = FlxG.width / 2 - _ohlogo.width / 2;
		_ohlogo.y = FlxG.height;
		add(_ohlogo);
		
		_twOhlogo = FlxTween.tween(_ohlogo, { y:FlxG.height / 2 - _ohlogo.height / 2 }, 3, { complete: playSound } );
		
		
	}
	
	private function playSound(t:FlxTween):Void {
		_sndStart.play();
		_tDelay.active = true;
	}
	
	private function startGame(?t:FlxTimer):Void {
		FlxG.switchState(new MenuState());
	}
	
}