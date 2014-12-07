#ifndef INCLUDED_Spikeball
#define INCLUDED_Spikeball

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <flixel/FlxSprite.h>
HX_DECLARE_CLASS0(Spikeball)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxDestroyable)


class HXCPP_CLASS_ATTRIBUTES  Spikeball_obj : public ::flixel::FlxSprite_obj{
	public:
		typedef ::flixel::FlxSprite_obj super;
		typedef Spikeball_obj OBJ_;
		Spikeball_obj();
		Void __construct(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,hx::Null< bool >  __o_OnFloor);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Spikeball_obj > __new(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,hx::Null< bool >  __o_OnFloor);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Spikeball_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("Spikeball"); }

		bool _flipped;
		Float _gravity;
		virtual Void flipGravity( );
		Dynamic flipGravity_dyn();

};


#endif /* INCLUDED_Spikeball */ 
