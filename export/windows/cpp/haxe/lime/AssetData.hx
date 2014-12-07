package lime;


import lime.utils.Assets;


class AssetData {

	private static var initialized:Bool = false;
	
	public static var library = new #if haxe3 Map <String, #else Hash <#end LibraryType> ();
	public static var path = new #if haxe3 Map <String, #else Hash <#end String> ();
	public static var type = new #if haxe3 Map <String, #else Hash <#end AssetType> ();	
	
	public static function initialize():Void {
		
		if (!initialized) {
			
			path.set ("assets/CoasterBoy.ttf", "assets/CoasterBoy.ttf");
			type.set ("assets/CoasterBoy.ttf", Reflect.field (AssetType, "font".toUpperCase ()));
			path.set ("assets/data/data-goes-here.txt", "assets/data/data-goes-here.txt");
			type.set ("assets/data/data-goes-here.txt", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/images/arrows.png", "assets/images/arrows.png");
			type.set ("assets/images/arrows.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/bg.png", "assets/images/bg.png");
			type.set ("assets/images/bg.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/btngraphic.png", "assets/images/btngraphic.png");
			type.set ("assets/images/btngraphic.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/btngraphic.png.pyxel", "assets/images/btngraphic.png.pyxel");
			type.set ("assets/images/btngraphic.png.pyxel", Reflect.field (AssetType, "binary".toUpperCase ()));
			path.set ("assets/images/enemy.png", "assets/images/enemy.png");
			type.set ("assets/images/enemy.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/hardenemy - Copy.png", "assets/images/hardenemy - Copy.png");
			type.set ("assets/images/hardenemy - Copy.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/hardenemy.png", "assets/images/hardenemy.png");
			type.set ("assets/images/hardenemy.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/images-go-here.txt", "assets/images/images-go-here.txt");
			type.set ("assets/images/images-go-here.txt", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/images/logo.png", "assets/images/logo.png");
			type.set ("assets/images/logo.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/ohlogo - Copy.png", "assets/images/ohlogo - Copy.png");
			type.set ("assets/images/ohlogo - Copy.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/ohlogo.png", "assets/images/ohlogo.png");
			type.set ("assets/images/ohlogo.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/player.png", "assets/images/player.png");
			type.set ("assets/images/player.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/space.png", "assets/images/space.png");
			type.set ("assets/images/space.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/space2.png", "assets/images/space2.png");
			type.set ("assets/images/space2.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/spikeball.png", "assets/images/spikeball.png");
			type.set ("assets/images/spikeball.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/spikeball.pyxel", "assets/images/spikeball.pyxel");
			type.set ("assets/images/spikeball.pyxel", Reflect.field (AssetType, "binary".toUpperCase ()));
			path.set ("assets/images/subwindow.png", "assets/images/subwindow.png");
			type.set ("assets/images/subwindow.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/wall.png", "assets/images/wall.png");
			type.set ("assets/images/wall.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/music/music-goes-here.txt", "assets/music/music-goes-here.txt");
			type.set ("assets/music/music-goes-here.txt", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/music/music.mp3", "assets/music/music.mp3");
			type.set ("assets/music/music.mp3", Reflect.field (AssetType, "music".toUpperCase ()));
			path.set ("assets/music/music.ogg", "assets/music/music.ogg");
			type.set ("assets/music/music.ogg", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("assets/music/music.wav", "assets/music/music.wav");
			type.set ("assets/music/music.wav", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("assets/sounds/bounce.wav", "assets/sounds/bounce.wav");
			type.set ("assets/sounds/bounce.wav", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("assets/sounds/hit.wav", "assets/sounds/hit.wav");
			type.set ("assets/sounds/hit.wav", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("assets/sounds/sounds-go-here.txt", "assets/sounds/sounds-go-here.txt");
			type.set ("assets/sounds/sounds-go-here.txt", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/sounds/startup.wav", "assets/sounds/startup.wav");
			type.set ("assets/sounds/startup.wav", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("assets/sounds/beep.ogg", "assets/sounds/beep.ogg");
			type.set ("assets/sounds/beep.ogg", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("assets/sounds/flixel.ogg", "assets/sounds/flixel.ogg");
			type.set ("assets/sounds/flixel.ogg", Reflect.field (AssetType, "sound".toUpperCase ()));
			
			
			initialized = true;
			
		} //!initialized
		
	} //initialize
	
	
} //AssetData
