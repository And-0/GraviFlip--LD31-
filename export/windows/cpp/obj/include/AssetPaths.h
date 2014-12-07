#ifndef INCLUDED_AssetPaths
#define INCLUDED_AssetPaths

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(AssetPaths)


class HXCPP_CLASS_ATTRIBUTES  AssetPaths_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef AssetPaths_obj OBJ_;
		AssetPaths_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< AssetPaths_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~AssetPaths_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("AssetPaths"); }

		static ::String CoasterBoy__ttf;
		static ::String CoasterBoy__ttf__hash;
		static ::String data_goes_here__txt;
		static ::String arrows__png;
		static ::String bg__png;
		static ::String btngraphic__png;
		static ::String btngraphic__png__pyxel;
		static ::String enemy__png;
		static ::String hardenemy _ Copy__png;
		static ::String hardenemy__png;
		static ::String images_go_here__txt;
		static ::String logo__png;
		static ::String ohlogo _ Copy__png;
		static ::String ohlogo__png;
		static ::String player__png;
		static ::String space__png;
		static ::String space2__png;
		static ::String spikeball__png;
		static ::String spikeball__pyxel;
		static ::String subwindow__png;
		static ::String wall__png;
		static ::String music_goes_here__txt;
		static ::String music__mp3;
		static ::String music__ogg;
		static ::String music__wav;
		static ::String bounce__wav;
		static ::String hit__wav;
		static ::String sounds_go_here__txt;
		static ::String startup__wav;
};


#endif /* INCLUDED_AssetPaths */ 
