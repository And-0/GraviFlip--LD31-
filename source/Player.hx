package ;

import flixel.FlxG;
import flixel.FlxObject;
import flixel.FlxSprite;
import flixel.util.FlxColor;

/**
 * ...
 * @author ...
 */
class Player extends FlxSprite
{
	
	private var _speed:Float = 96;
	public var flipped:Bool = false;
	private var _gravity:Float = 600;
	public var grounded:Bool = false;

	public function new(X:Float=0, Y:Float=0) 
	{
		super(X, Y);
		loadGraphic(AssetPaths.player__png, true, 32, 32);
		
		//Init animations
		animation.add("idle", [0, 1], 3, true);
		animation.add("jump", [2, 3], 5, true);
		animation.add("walk", [4, 5], 5, true);
		
		//Adjust hitbox
		setSize(20, 32);
		offset.x = 6;
		
		//Set gravity
		acceleration.y = _gravity;
		drag.y = 0;
	}
	
	override public function update():Void {
		super.update();
		
		//Controls
		velocity.x = 0;
		
		if (FlxG.keys.anyPressed(["LEFT","A"])) {
			velocity.x = -_speed;
		}
		else if (FlxG.keys.anyPressed(["RIGHT","D"])) {
			velocity.x = _speed;
		}
		
		//Update animations
		if(velocity.x != 0){
			if (velocity.x > 0) {
				flipX = false;
			}
			else {
				flipX = true;
			}
			animation.play("walk");
		}
		else {
			animation.play("idle");
		}
		
		
	}
	
	public function flipGravity():Void {
		flipped = !flipped;
		_gravity *= -1;
		acceleration.y = _gravity;
		flipY = !flipY;
	}
	
	public function bounce():Void {
		velocity.y = (flipped) ? 96 : -96;
	}
	
	public function setOnFloor():Void {
		velocity.y = 0;
	}
	
}