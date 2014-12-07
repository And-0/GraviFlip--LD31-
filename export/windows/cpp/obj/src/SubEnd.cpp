#include <hxcpp.h>

#ifndef INCLUDED_GBButton
#include <GBButton.h>
#endif
#ifndef INCLUDED_MenuState
#include <MenuState.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_SubEnd
#include <SubEnd.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxGame
#include <flixel/FlxGame.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_FlxSubState
#include <flixel/FlxSubState.h>
#endif
#ifndef INCLUDED_flixel_group_FlxGroup
#include <flixel/group/FlxGroup.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
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
#ifndef INCLUDED_flixel_util_FlxSpriteUtil
#include <flixel/util/FlxSpriteUtil.h>
#endif
#ifndef INCLUDED_openfl__v2_display_DisplayObject
#include <openfl/_v2/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl__v2_display_DisplayObjectContainer
#include <openfl/_v2/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl__v2_display_IBitmapDrawable
#include <openfl/_v2/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__v2_display_InteractiveObject
#include <openfl/_v2/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl__v2_display_Sprite
#include <openfl/_v2/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl__v2_events_EventDispatcher
#include <openfl/_v2/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__v2_events_IEventDispatcher
#include <openfl/_v2/events/IEventDispatcher.h>
#endif

Void SubEnd_obj::__construct(int score)
{
HX_STACK_FRAME("SubEnd","new",0x8921e0cd,"SubEnd.new","SubEnd.hx",22,0xa27af743)
HX_STACK_THIS(this)
HX_STACK_ARG(score,"score")
{
	HX_STACK_LINE(23)
	super::__construct((int)0);
	HX_STACK_LINE(24)
	::flixel::FlxSprite _g = ::flixel::FlxSprite_obj::__new((int)0,(int)0,null());		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(24)
	this->_window = _g;
	HX_STACK_LINE(25)
	this->_window->loadGraphic(HX_CSTRING("assets/images/subwindow.png"),false,(int)128,(int)96,null(),null());
	HX_STACK_LINE(26)
	::flixel::util::FlxSpriteUtil_obj::screenCenter(this->_window,null(),null());
	HX_STACK_LINE(29)
	::String _g1 = ::Std_obj::string(score);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(29)
	::String _g2 = (HX_CSTRING("YOUR SCORE: \n\n") + _g1);		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(29)
	::flixel::text::FlxText _g3 = ::flixel::text::FlxText_obj::__new((int)0,(int)0,(int)0,_g2,(int)8,null());		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(29)
	this->_txtScore = _g3;
	HX_STACK_LINE(30)
	this->_txtScore->setFormat(HX_CSTRING("assets/CoasterBoy.ttf"),(int)8,(int)-2627436,HX_CSTRING("center"),null(),null(),null());
	HX_STACK_LINE(31)
	::flixel::util::FlxSpriteUtil_obj::screenCenter(this->_txtScore,null(),null());
	HX_STACK_LINE(32)
	{
		HX_STACK_LINE(32)
		::flixel::text::FlxText _g4 = this->_txtScore;		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(32)
		_g4->set_y((_g4->y - (int)20));
	}
	HX_STACK_LINE(35)
	::GBButton _g4 = ::GBButton_obj::__new((int)0,(int)0,HX_CSTRING("Retry"),this->onClickRetry_dyn());		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(35)
	this->_btnRetry = _g4;
	HX_STACK_LINE(36)
	::flixel::util::FlxSpriteUtil_obj::screenCenter(this->_btnRetry,null(),null());
	HX_STACK_LINE(37)
	{
		HX_STACK_LINE(37)
		::GBButton _g5 = this->_btnRetry;		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(37)
		_g5->set_y((_g5->y + (int)4));
	}
	HX_STACK_LINE(41)
	this->add(this->_window);
	HX_STACK_LINE(42)
	this->add(this->_txtScore);
	HX_STACK_LINE(43)
	this->add(this->_btnRetry);
}
;
	return null();
}

//SubEnd_obj::~SubEnd_obj() { }

Dynamic SubEnd_obj::__CreateEmpty() { return  new SubEnd_obj; }
hx::ObjectPtr< SubEnd_obj > SubEnd_obj::__new(int score)
{  hx::ObjectPtr< SubEnd_obj > result = new SubEnd_obj();
	result->__construct(score);
	return result;}

Dynamic SubEnd_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< SubEnd_obj > result = new SubEnd_obj();
	result->__construct(inArgs[0]);
	return result;}

Void SubEnd_obj::onClickRetry( ){
{
		HX_STACK_FRAME("SubEnd","onClickRetry",0x743121f2,"SubEnd.onClickRetry","SubEnd.hx",47,0xa27af743)
		HX_STACK_THIS(this)
		HX_STACK_LINE(47)
		::flixel::FlxState State = ::MenuState_obj::__new(null());		HX_STACK_VAR(State,"State");
		HX_STACK_LINE(47)
		::flixel::FlxG_obj::game->_requestedState = State;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(SubEnd_obj,onClickRetry,(void))


SubEnd_obj::SubEnd_obj()
{
}

void SubEnd_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SubEnd);
	HX_MARK_MEMBER_NAME(_btnRetry,"_btnRetry");
	HX_MARK_MEMBER_NAME(_window,"_window");
	HX_MARK_MEMBER_NAME(_txtScore,"_txtScore");
	::flixel::FlxSubState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void SubEnd_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_btnRetry,"_btnRetry");
	HX_VISIT_MEMBER_NAME(_window,"_window");
	HX_VISIT_MEMBER_NAME(_txtScore,"_txtScore");
	::flixel::FlxSubState_obj::__Visit(HX_VISIT_ARG);
}

Dynamic SubEnd_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"_window") ) { return _window; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_btnRetry") ) { return _btnRetry; }
		if (HX_FIELD_EQ(inName,"_txtScore") ) { return _txtScore; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"onClickRetry") ) { return onClickRetry_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic SubEnd_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"_window") ) { _window=inValue.Cast< ::flixel::FlxSprite >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_btnRetry") ) { _btnRetry=inValue.Cast< ::GBButton >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_txtScore") ) { _txtScore=inValue.Cast< ::flixel::text::FlxText >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void SubEnd_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_btnRetry"));
	outFields->push(HX_CSTRING("_window"));
	outFields->push(HX_CSTRING("_txtScore"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::GBButton*/ ,(int)offsetof(SubEnd_obj,_btnRetry),HX_CSTRING("_btnRetry")},
	{hx::fsObject /*::flixel::FlxSprite*/ ,(int)offsetof(SubEnd_obj,_window),HX_CSTRING("_window")},
	{hx::fsObject /*::flixel::text::FlxText*/ ,(int)offsetof(SubEnd_obj,_txtScore),HX_CSTRING("_txtScore")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_btnRetry"),
	HX_CSTRING("_window"),
	HX_CSTRING("_txtScore"),
	HX_CSTRING("onClickRetry"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SubEnd_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SubEnd_obj::__mClass,"__mClass");
};

#endif

Class SubEnd_obj::__mClass;

void SubEnd_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("SubEnd"), hx::TCanCast< SubEnd_obj> ,sStaticFields,sMemberFields,
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

void SubEnd_obj::__boot()
{
}

