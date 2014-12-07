package ;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.FlxSubState;
import flixel.text.FlxText;
import flixel.ui.FlxButton;
import flixel.util.FlxColor;
using flixel.util.FlxSpriteUtil;
/**
 * ...
 * @author ...
 */
class SubEnd extends FlxSubState
{

	private var _btnRetry:GBButton;
	private var _window:FlxSprite;
	private var _txtScore:FlxText;
	
	public function new(score:Int) 
	{
		super(FlxColor.TRANSPARENT);
		_window = new FlxSprite(0, 0);
		_window.loadGraphic(AssetPaths.subwindow__png, false, 128, 96);
		_window.screenCenter();
		
		//Create text
		_txtScore = new FlxText(0, 0, 0, "YOUR SCORE: \n\n" + Std.string(score), 8);
		_txtScore.setFormat(AssetPaths.CoasterBoy__ttf, 8, 0xffd7e894, "center");
		_txtScore.screenCenter();
		_txtScore.y -= 20;
		
		//Create custom button
		_btnRetry = new GBButton(0, 0, "Retry", onClickRetry);
		_btnRetry.screenCenter();
		_btnRetry.y += 4;
		
		
		//Add objects
		add(_window);
		add(_txtScore);
		add(_btnRetry);
	}
	
	private function onClickRetry():Void {
		FlxG.switchState(new MenuState());
	}
	
}