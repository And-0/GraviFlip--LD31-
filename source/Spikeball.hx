package ;

import flixel.FlxSprite;

/**
 * ...
 * @author ...
 */
class Spikeball extends FlxSprite
{

	private var _flipped:Bool = false;
	private var _gravity:Float = 600;
	
	public function new(X:Float = 0, Y:Float = 0, OnFloor = true ) 
	{
		super(X, Y);
		loadGraphic(AssetPaths.spikeball__png, false, 32, 32);
		
		_gravity = (OnFloor) ? _gravity : -_gravity;
		acceleration.y = _gravity;
	}
	
	public function flipGravity():Void {
		_gravity *= -1;
		acceleration.y = _gravity;
		_flipped = !_flipped;
	}
	
}