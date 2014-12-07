package ;

import flixel.ui.FlxButton;

/**
 * ...
 * @author ...
 */
class GBButton extends FlxButton
{

	public function new(X:Float=0, Y:Float=0, ?Text:String, ?OnClick:Void->Void) 
	{
		super(X, Y, Text, OnClick);
		loadGraphic(AssetPaths.btngraphic__png, false,64, 20);
		this.label.color = 0xff204631;
	}
	
}