#ifndef INCLUDED_PlayState
#define INCLUDED_PlayState

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <flixel/FlxState.h>
HX_DECLARE_CLASS0(Enemy)
HX_DECLARE_CLASS0(PlayState)
HX_DECLARE_CLASS0(Player)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS1(flixel,FlxState)
HX_DECLARE_CLASS3(flixel,addons,display,FlxBackdrop)
HX_DECLARE_CLASS2(flixel,group,FlxGroup)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,system,FlxSound)
HX_DECLARE_CLASS2(flixel,text,FlxText)


class HXCPP_CLASS_ATTRIBUTES  PlayState_obj : public ::flixel::FlxState_obj{
	public:
		typedef ::flixel::FlxState_obj super;
		typedef PlayState_obj OBJ_;
		PlayState_obj();
		Void __construct(Dynamic __o_loadTutorial);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< PlayState_obj > __new(Dynamic __o_loadTutorial);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~PlayState_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("PlayState"); }

		::flixel::text::FlxText _txtScore;
		int _scoreValue;
		::flixel::FlxSprite _sprBackground;
		::flixel::addons::display::FlxBackdrop _space;
		::flixel::addons::display::FlxBackdrop _space2;
		::flixel::FlxSprite _floor;
		::flixel::FlxSprite _ceiling;
		::flixel::FlxSprite _wallLeft;
		::flixel::FlxSprite _wallRight;
		::flixel::group::FlxTypedGroup _grpRoom;
		::flixel::group::FlxTypedGroup _grpFloorCeiling;
		::flixel::group::FlxTypedGroup _grpWalls;
		::flixel::FlxSprite _arrows;
		::flixel::group::FlxTypedGroup _grpEnemy;
		::flixel::group::FlxTypedGroup _grpSpikeball;
		::Player _player;
		int comboFactor;
		bool _musicOn;
		bool _soundOn;
		::flixel::system::FlxSound _sndBounce;
		::flixel::system::FlxSound _sndHit;
		::flixel::system::FlxSound _sndMusic;
		bool _isTutorial;
		::flixel::text::FlxText _txtTutorial;
		::flixel::FlxSprite _window;
		int _tutStep;
		::flixel::text::FlxText _txtPressN;
		virtual Void create( );

		virtual Void destroy( );

		virtual Void update( );

		virtual Void flipGravity( );
		Dynamic flipGravity_dyn();

		virtual Void onOverlap( ::flixel::FlxObject p,::flixel::FlxObject e);
		Dynamic onOverlap_dyn();

		virtual Void addToScore( int toAdd);
		Dynamic addToScore_dyn();

		virtual Void updateScoreDisplay( );
		Dynamic updateScoreDisplay_dyn();

		virtual Void showScoreGet( ::Enemy enemy,Dynamic comboFactor);
		Dynamic showScoreGet_dyn();

		virtual Void addEnemy( Dynamic num);
		Dynamic addEnemy_dyn();

		virtual Void resetComboFactor( );
		Dynamic resetComboFactor_dyn();

		virtual Void endGame( );
		Dynamic endGame_dyn();

		virtual Void killPlayer( ::flixel::FlxObject p,::flixel::FlxObject e);
		Dynamic killPlayer_dyn();

		virtual Void nextTutStep( );
		Dynamic nextTutStep_dyn();

		static int TILESIZE;
		static int level;
		static bool gravityFlipped;
		static int gravityFactor;
};


#endif /* INCLUDED_PlayState */ 
