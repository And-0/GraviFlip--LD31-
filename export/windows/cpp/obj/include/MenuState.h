#ifndef INCLUDED_MenuState
#define INCLUDED_MenuState

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <flixel/FlxState.h>
HX_DECLARE_CLASS0(GBButton)
HX_DECLARE_CLASS0(MenuState)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS1(flixel,FlxState)
HX_DECLARE_CLASS3(flixel,effects,particles,FlxEmitter)
HX_DECLARE_CLASS3(flixel,effects,particles,FlxParticle)
HX_DECLARE_CLASS3(flixel,effects,particles,FlxTypedEmitter)
HX_DECLARE_CLASS2(flixel,group,FlxGroup)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxBasic)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxParticle)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxSprite)
HX_DECLARE_CLASS2(flixel,text,FlxText)
HX_DECLARE_CLASS2(flixel,ui,FlxButton)
HX_DECLARE_CLASS2(flixel,ui,FlxTypedButton)


class HXCPP_CLASS_ATTRIBUTES  MenuState_obj : public ::flixel::FlxState_obj{
	public:
		typedef ::flixel::FlxState_obj super;
		typedef MenuState_obj OBJ_;
		MenuState_obj();
		Void __construct(Dynamic MaxSize);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< MenuState_obj > __new(Dynamic MaxSize);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~MenuState_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("MenuState"); }

		::GBButton _btnPlay;
		::GBButton _btnMusic;
		::GBButton _btnSound;
		::flixel::text::FlxText _txtTitle;
		::flixel::FlxSprite _logo;
		::flixel::effects::particles::FlxEmitter _starEmitter;
		::flixel::effects::particles::FlxParticle _star;
		::flixel::text::FlxText _txtCredit;
		virtual Void create( );

		virtual Void destroy( );

		virtual Void update( );

		virtual Void onClickPlay( );
		Dynamic onClickPlay_dyn();

		virtual Void toggleMusic( );
		Dynamic toggleMusic_dyn();

		virtual Void toggleSound( );
		Dynamic toggleSound_dyn();

		static bool music;
		static bool sound;
};


#endif /* INCLUDED_MenuState */ 
