#ifndef INCLUDED_SubEnd
#define INCLUDED_SubEnd

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <flixel/FlxSubState.h>
HX_DECLARE_CLASS0(GBButton)
HX_DECLARE_CLASS0(SubEnd)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS1(flixel,FlxState)
HX_DECLARE_CLASS1(flixel,FlxSubState)
HX_DECLARE_CLASS2(flixel,group,FlxGroup)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,text,FlxText)
HX_DECLARE_CLASS2(flixel,ui,FlxButton)
HX_DECLARE_CLASS2(flixel,ui,FlxTypedButton)


class HXCPP_CLASS_ATTRIBUTES  SubEnd_obj : public ::flixel::FlxSubState_obj{
	public:
		typedef ::flixel::FlxSubState_obj super;
		typedef SubEnd_obj OBJ_;
		SubEnd_obj();
		Void __construct(int score);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< SubEnd_obj > __new(int score);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~SubEnd_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("SubEnd"); }

		::GBButton _btnRetry;
		::flixel::FlxSprite _window;
		::flixel::text::FlxText _txtScore;
		virtual Void onClickRetry( );
		Dynamic onClickRetry_dyn();

};


#endif /* INCLUDED_SubEnd */ 
