#include <hxcpp.h>

#ifndef INCLUDED_AssetPaths
#include <AssetPaths.h>
#endif

Void AssetPaths_obj::__construct()
{
	return null();
}

//AssetPaths_obj::~AssetPaths_obj() { }

Dynamic AssetPaths_obj::__CreateEmpty() { return  new AssetPaths_obj; }
hx::ObjectPtr< AssetPaths_obj > AssetPaths_obj::__new()
{  hx::ObjectPtr< AssetPaths_obj > result = new AssetPaths_obj();
	result->__construct();
	return result;}

Dynamic AssetPaths_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< AssetPaths_obj > result = new AssetPaths_obj();
	result->__construct();
	return result;}

::String AssetPaths_obj::CoasterBoy__ttf;

::String AssetPaths_obj::CoasterBoy__ttf__hash;

::String AssetPaths_obj::data_goes_here__txt;

::String AssetPaths_obj::arrows__png;

::String AssetPaths_obj::bg__png;

::String AssetPaths_obj::btngraphic__png;

::String AssetPaths_obj::btngraphic__png__pyxel;

::String AssetPaths_obj::enemy__png;

::String AssetPaths_obj::hardenemy _ Copy__png;

::String AssetPaths_obj::hardenemy__png;

::String AssetPaths_obj::images_go_here__txt;

::String AssetPaths_obj::logo__png;

::String AssetPaths_obj::ohlogo _ Copy__png;

::String AssetPaths_obj::ohlogo__png;

::String AssetPaths_obj::player__png;

::String AssetPaths_obj::space__png;

::String AssetPaths_obj::space2__png;

::String AssetPaths_obj::spikeball__png;

::String AssetPaths_obj::spikeball__pyxel;

::String AssetPaths_obj::subwindow__png;

::String AssetPaths_obj::wall__png;

::String AssetPaths_obj::music_goes_here__txt;

::String AssetPaths_obj::music__mp3;

::String AssetPaths_obj::music__ogg;

::String AssetPaths_obj::music__wav;

::String AssetPaths_obj::bounce__wav;

::String AssetPaths_obj::hit__wav;

::String AssetPaths_obj::sounds_go_here__txt;

::String AssetPaths_obj::startup__wav;


AssetPaths_obj::AssetPaths_obj()
{
}

Dynamic AssetPaths_obj::__Field(const ::String &inName,bool inCallProp)
{
	return super::__Field(inName,inCallProp);
}

Dynamic AssetPaths_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void AssetPaths_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("CoasterBoy__ttf"),
	HX_CSTRING("CoasterBoy__ttf__hash"),
	HX_CSTRING("data_goes_here__txt"),
	HX_CSTRING("arrows__png"),
	HX_CSTRING("bg__png"),
	HX_CSTRING("btngraphic__png"),
	HX_CSTRING("btngraphic__png__pyxel"),
	HX_CSTRING("enemy__png"),
	HX_CSTRING("hardenemy _ Copy__png"),
	HX_CSTRING("hardenemy__png"),
	HX_CSTRING("images_go_here__txt"),
	HX_CSTRING("logo__png"),
	HX_CSTRING("ohlogo _ Copy__png"),
	HX_CSTRING("ohlogo__png"),
	HX_CSTRING("player__png"),
	HX_CSTRING("space__png"),
	HX_CSTRING("space2__png"),
	HX_CSTRING("spikeball__png"),
	HX_CSTRING("spikeball__pyxel"),
	HX_CSTRING("subwindow__png"),
	HX_CSTRING("wall__png"),
	HX_CSTRING("music_goes_here__txt"),
	HX_CSTRING("music__mp3"),
	HX_CSTRING("music__ogg"),
	HX_CSTRING("music__wav"),
	HX_CSTRING("bounce__wav"),
	HX_CSTRING("hit__wav"),
	HX_CSTRING("sounds_go_here__txt"),
	HX_CSTRING("startup__wav"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AssetPaths_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::CoasterBoy__ttf,"CoasterBoy__ttf");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::CoasterBoy__ttf__hash,"CoasterBoy__ttf__hash");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::data_goes_here__txt,"data_goes_here__txt");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::arrows__png,"arrows__png");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::bg__png,"bg__png");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::btngraphic__png,"btngraphic__png");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::btngraphic__png__pyxel,"btngraphic__png__pyxel");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::enemy__png,"enemy__png");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::hardenemy _ Copy__png,"hardenemy _ Copy__png");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::hardenemy__png,"hardenemy__png");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::images_go_here__txt,"images_go_here__txt");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::logo__png,"logo__png");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::ohlogo _ Copy__png,"ohlogo _ Copy__png");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::ohlogo__png,"ohlogo__png");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::player__png,"player__png");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::space__png,"space__png");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::space2__png,"space2__png");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::spikeball__png,"spikeball__png");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::spikeball__pyxel,"spikeball__pyxel");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::subwindow__png,"subwindow__png");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::wall__png,"wall__png");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::music_goes_here__txt,"music_goes_here__txt");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::music__mp3,"music__mp3");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::music__ogg,"music__ogg");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::music__wav,"music__wav");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::bounce__wav,"bounce__wav");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::hit__wav,"hit__wav");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::sounds_go_here__txt,"sounds_go_here__txt");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::startup__wav,"startup__wav");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::CoasterBoy__ttf,"CoasterBoy__ttf");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::CoasterBoy__ttf__hash,"CoasterBoy__ttf__hash");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::data_goes_here__txt,"data_goes_here__txt");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::arrows__png,"arrows__png");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::bg__png,"bg__png");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::btngraphic__png,"btngraphic__png");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::btngraphic__png__pyxel,"btngraphic__png__pyxel");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::enemy__png,"enemy__png");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::hardenemy _ Copy__png,"hardenemy _ Copy__png");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::hardenemy__png,"hardenemy__png");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::images_go_here__txt,"images_go_here__txt");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::logo__png,"logo__png");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::ohlogo _ Copy__png,"ohlogo _ Copy__png");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::ohlogo__png,"ohlogo__png");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::player__png,"player__png");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::space__png,"space__png");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::space2__png,"space2__png");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::spikeball__png,"spikeball__png");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::spikeball__pyxel,"spikeball__pyxel");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::subwindow__png,"subwindow__png");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::wall__png,"wall__png");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::music_goes_here__txt,"music_goes_here__txt");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::music__mp3,"music__mp3");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::music__ogg,"music__ogg");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::music__wav,"music__wav");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::bounce__wav,"bounce__wav");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::hit__wav,"hit__wav");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::sounds_go_here__txt,"sounds_go_here__txt");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::startup__wav,"startup__wav");
};

#endif

Class AssetPaths_obj::__mClass;

void AssetPaths_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("AssetPaths"), hx::TCanCast< AssetPaths_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatics
#endif
#ifdef HXCPP_SCRIPTABLE
    , sMemberStorageInfo
#endif
);
}

void AssetPaths_obj::__boot()
{
	CoasterBoy__ttf= HX_CSTRING("assets/CoasterBoy.ttf");
	CoasterBoy__ttf__hash= HX_CSTRING("assets/CoasterBoy.ttf.hash");
	data_goes_here__txt= HX_CSTRING("assets/data/data-goes-here.txt");
	arrows__png= HX_CSTRING("assets/images/arrows.png");
	bg__png= HX_CSTRING("assets/images/bg.png");
	btngraphic__png= HX_CSTRING("assets/images/btngraphic.png");
	btngraphic__png__pyxel= HX_CSTRING("assets/images/btngraphic.png.pyxel");
	enemy__png= HX_CSTRING("assets/images/enemy.png");
	hardenemy _ Copy__png= HX_CSTRING("assets/images/hardenemy - Copy.png");
	hardenemy__png= HX_CSTRING("assets/images/hardenemy.png");
	images_go_here__txt= HX_CSTRING("assets/images/images-go-here.txt");
	logo__png= HX_CSTRING("assets/images/logo.png");
	ohlogo _ Copy__png= HX_CSTRING("assets/images/ohlogo - Copy.png");
	ohlogo__png= HX_CSTRING("assets/images/ohlogo.png");
	player__png= HX_CSTRING("assets/images/player.png");
	space__png= HX_CSTRING("assets/images/space.png");
	space2__png= HX_CSTRING("assets/images/space2.png");
	spikeball__png= HX_CSTRING("assets/images/spikeball.png");
	spikeball__pyxel= HX_CSTRING("assets/images/spikeball.pyxel");
	subwindow__png= HX_CSTRING("assets/images/subwindow.png");
	wall__png= HX_CSTRING("assets/images/wall.png");
	music_goes_here__txt= HX_CSTRING("assets/music/music-goes-here.txt");
	music__mp3= HX_CSTRING("assets/music/music.mp3");
	music__ogg= HX_CSTRING("assets/music/music.ogg");
	music__wav= HX_CSTRING("assets/music/music.wav");
	bounce__wav= HX_CSTRING("assets/sounds/bounce.wav");
	hit__wav= HX_CSTRING("assets/sounds/hit.wav");
	sounds_go_here__txt= HX_CSTRING("assets/sounds/sounds-go-here.txt");
	startup__wav= HX_CSTRING("assets/sounds/startup.wav");
}

