#include <hxcpp.h>

#ifndef INCLUDED_GBButton
#include <GBButton.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_text_FlxText
#include <flixel/text/FlxText.h>
#endif
#ifndef INCLUDED_flixel_ui_FlxButton
#include <flixel/ui/FlxButton.h>
#endif
#ifndef INCLUDED_flixel_ui_FlxTypedButton
#include <flixel/ui/FlxTypedButton.h>
#endif

Void GBButton_obj::__construct(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,::String Text,Dynamic OnClick)
{
HX_STACK_FRAME("GBButton","new",0x09f8f5df,"GBButton.new","GBButton.hx",13,0x42a0aa71)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_X,"X")
HX_STACK_ARG(__o_Y,"Y")
HX_STACK_ARG(Text,"Text")
HX_STACK_ARG(OnClick,"OnClick")
Float X = __o_X.Default(0);
Float Y = __o_Y.Default(0);
{
	HX_STACK_LINE(14)
	super::__construct(X,Y,Text,OnClick);
	HX_STACK_LINE(15)
	this->loadGraphic(HX_CSTRING("assets/images/btngraphic.png"),false,(int)64,(int)20,null(),null());
	HX_STACK_LINE(16)
	this->label->__Field(HX_CSTRING("set_color"),true)((int)-14662095);
}
;
	return null();
}

//GBButton_obj::~GBButton_obj() { }

Dynamic GBButton_obj::__CreateEmpty() { return  new GBButton_obj; }
hx::ObjectPtr< GBButton_obj > GBButton_obj::__new(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,::String Text,Dynamic OnClick)
{  hx::ObjectPtr< GBButton_obj > result = new GBButton_obj();
	result->__construct(__o_X,__o_Y,Text,OnClick);
	return result;}

Dynamic GBButton_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< GBButton_obj > result = new GBButton_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return result;}


GBButton_obj::GBButton_obj()
{
}

Dynamic GBButton_obj::__Field(const ::String &inName,bool inCallProp)
{
	return super::__Field(inName,inCallProp);
}

Dynamic GBButton_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void GBButton_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GBButton_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GBButton_obj::__mClass,"__mClass");
};

#endif

Class GBButton_obj::__mClass;

void GBButton_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("GBButton"), hx::TCanCast< GBButton_obj> ,sStaticFields,sMemberFields,
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

void GBButton_obj::__boot()
{
}

