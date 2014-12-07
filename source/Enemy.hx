package ;

import flixel.FlxG;
import flixel.FlxObject;
import flixel.FlxSprite;
import flixel.text.FlxText;
import flixel.tweens.FlxTween;
import flixel.util.FlxColor;

/**
 * ...
 * @author ...
 */
class Enemy extends FlxSprite
{
	
	private var _sticky:Bool;
	private var _fromLeft:Bool;
	private var _flipped:Bool = false;
	private var _speed:Float = 32;
	private var _gravity:Float = 500;
	public var onFloor:Bool = false;
	
	public var pointValue:Int = 10;
	private var _txtScore:FlxText;
	

	public function new(X:Float=0, Y:Float=0, OnFloor:Bool = true, ?FromLeft:Bool = true, ?Sticky:Bool = false) 
	{
		super(X, Y);
		_sticky = Sticky;
		_fromLeft = FromLeft;
		onFloor = OnFloor;
		_flipped = !onFloor;
		
		pointValue = (!_sticky) ? 20 : pointValue;
		
		//Load graphics
		if (_sticky) {
			loadGraphic(AssetPaths.enemy__png, true, 32, 18);
		}
		else{
			loadGraphic(AssetPaths.hardenemy__png, true, 32, 22);
		}
		
		//Init animations
		setFacingFlip(FlxObject.LEFT, false, false);
		setFacingFlip(FlxObject.RIGHT, true, false);
		animation.add("walk", [0, 1], 10, true);
		facing = (_fromLeft) ? FlxObject.RIGHT : FlxObject.LEFT;
		flipY = _flipped;
		
		//Adjust hitbox
		if(_sticky){
			setSize(28, 18);
			offset.x = 2;
		}
		else {
			setSize(24, 22);
			offset.x = 4;
		}
		
		//Set position
		this.x = (_fromLeft) ? 0 : FlxG.width-PlayState.TILESIZE;
		this.y = (onFloor) ? FlxG.height - PlayState.TILESIZE * 2 - height : PlayState.TILESIZE*2;
		
		
		
		//Set gravity if applicable
		_gravity = (!_sticky && onFloor) ? _gravity : -_gravity;
		acceleration.y = (!_sticky) ? _gravity : 0;
		
		
		
		//Start movement and animation
		velocity.x = (_fromLeft) ? _speed : -_speed;
		animation.play("walk");
	}
	
	override public function update():Void {
		
		super.update();
		//Turn around when hitting a wall
		if ( (velocity.x > 0 && this.x > FlxG.width - PlayState.TILESIZE-this.width-1) || (velocity.x < 0 && this.x < PlayState.TILESIZE+1) ){
			velocity.x *= -1;
			facing = (facing == FlxObject.LEFT) ? FlxObject.RIGHT : FlxObject.LEFT;
			flipY = _flipped;
		}
		
		//Handle animations
		switch(facing) {
			case FlxObject.LEFT, FlxObject.RIGHT:
				animation.play("walk");
		}
		
	}
	
	public function flipGravity():Void {
		if (_sticky) {
			return;
		}
		_gravity *= -1;
		acceleration.y = _gravity;
		_flipped = !_flipped;
		flipY = !flipY;
	}
	
	
}