#ifndef INCLUDED_GBButton
#define INCLUDED_GBButton

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <flixel/ui/FlxButton.h>
HX_DECLARE_CLASS0(GBButton)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,ui,FlxButton)
HX_DECLARE_CLASS2(flixel,ui,FlxTypedButton)


class HXCPP_CLASS_ATTRIBUTES  GBButton_obj : public ::flixel::ui::FlxButton_obj{
	public:
		typedef ::flixel::ui::FlxButton_obj super;
		typedef GBButton_obj OBJ_;
		GBButton_obj();
		Void __construct(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,::String Text,Dynamic OnClick);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< GBButton_obj > __new(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,::String Text,Dynamic OnClick);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~GBButton_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("GBButton"); }

};


#endif /* INCLUDED_GBButton */ 
