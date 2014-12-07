#include <hxcpp.h>

#ifndef INCLUDED_LogoState
#include <LogoState.h>
#endif
#ifndef INCLUDED_MenuState
#include <MenuState.h>
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
#ifndef INCLUDED_flixel_group_FlxGroup
#include <flixel/group/FlxGroup.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_system_FlxSound
#include <flixel/system/FlxSound.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_SoundFrontEnd
#include <flixel/system/frontEnds/SoundFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxTween
#include <flixel/tweens/FlxTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_misc_VarTween
#include <flixel/tweens/misc/VarTween.h>
#endif
#ifndef INCLUDED_flixel_util_FlxTimer
#include <flixel/util/FlxTimer.h>
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

Void LogoState_obj::__construct(Dynamic MaxSize)
{
HX_STACK_FRAME("LogoState","new",0x2949be78,"LogoState.new","LogoState.hx",14,0x72fbb7f8)
HX_STACK_THIS(this)
HX_STACK_ARG(MaxSize,"MaxSize")
{
	HX_STACK_LINE(14)
	super::__construct(MaxSize);
}
;
	return null();
}

//LogoState_obj::~LogoState_obj() { }

Dynamic LogoState_obj::__CreateEmpty() { return  new LogoState_obj; }
hx::ObjectPtr< LogoState_obj > LogoState_obj::__new(Dynamic MaxSize)
{  hx::ObjectPtr< LogoState_obj > result = new LogoState_obj();
	result->__construct(MaxSize);
	return result;}

Dynamic LogoState_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< LogoState_obj > result = new LogoState_obj();
	result->__construct(inArgs[0]);
	return result;}

Void LogoState_obj::create( ){
{
		HX_STACK_FRAME("LogoState","create",0xfadf57e4,"LogoState.create","LogoState.hx",23,0x72fbb7f8)
		HX_STACK_THIS(this)
		HX_STACK_LINE(24)
		this->super::create();
		HX_STACK_LINE(25)
		this->set_bgColor((int)-2627436);
		HX_STACK_LINE(27)
		::flixel::system::FlxSound _g = ::flixel::FlxG_obj::sound->load(HX_CSTRING("assets/sounds/startup.wav"),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(27)
		this->_sndStart = _g;
		HX_STACK_LINE(30)
		::flixel::util::FlxTimer _g1 = ::flixel::util::FlxTimer_obj::__new(1.5,this->startGame_dyn(),null());		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(30)
		this->_tDelay = _g1;
		HX_STACK_LINE(31)
		this->_tDelay->active = false;
		HX_STACK_LINE(33)
		::flixel::FlxSprite _g2 = ::flixel::FlxSprite_obj::__new((int)0,(int)0,null());		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(33)
		this->_ohlogo = _g2;
		HX_STACK_LINE(34)
		this->_ohlogo->loadGraphic(HX_CSTRING("assets/images/ohlogo.png"),false,(int)240,(int)273,null(),null());
		HX_STACK_LINE(35)
		this->_ohlogo->setGraphicSize((int)180,(int)0);
		HX_STACK_LINE(36)
		Float _g3 = this->_ohlogo->get_width();		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(36)
		Float _g4 = (Float(_g3) / Float((int)2));		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(36)
		Float _g5 = ((Float(::flixel::FlxG_obj::width) / Float((int)2)) - _g4);		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(36)
		this->_ohlogo->set_x(_g5);
		HX_STACK_LINE(37)
		this->_ohlogo->set_y(::flixel::FlxG_obj::height);
		HX_STACK_LINE(38)
		this->add(this->_ohlogo);
		HX_STACK_LINE(40)
		Float _g6 = this->_ohlogo->get_height();		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(40)
		Float _g7 = (Float(_g6) / Float((int)2));		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(40)
		Float _g8 = ((Float(::flixel::FlxG_obj::height) / Float((int)2)) - _g7);		HX_STACK_VAR(_g8,"_g8");
		struct _Function_1_1{
			inline static Dynamic Block( Float &_g8){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","LogoState.hx",40,0x72fbb7f8)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("y") , _g8,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(40)
		Dynamic _g9 = _Function_1_1::Block(_g8);		HX_STACK_VAR(_g9,"_g9");
		struct _Function_1_2{
			inline static Dynamic Block( hx::ObjectPtr< ::LogoState_obj > __this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","LogoState.hx",40,0x72fbb7f8)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("complete") , __this->playSound_dyn(),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(40)
		::flixel::tweens::misc::VarTween _g10 = ::flixel::tweens::FlxTween_obj::tween(this->_ohlogo,_g9,(int)3,_Function_1_2::Block(this));		HX_STACK_VAR(_g10,"_g10");
		HX_STACK_LINE(40)
		this->_twOhlogo = _g10;
	}
return null();
}


Void LogoState_obj::playSound( ::flixel::tweens::FlxTween t){
{
		HX_STACK_FRAME("LogoState","playSound",0x4ad04a53,"LogoState.playSound","LogoState.hx",45,0x72fbb7f8)
		HX_STACK_THIS(this)
		HX_STACK_ARG(t,"t")
		HX_STACK_LINE(46)
		this->_sndStart->play(null());
		HX_STACK_LINE(47)
		this->_tDelay->active = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(LogoState_obj,playSound,(void))

Void LogoState_obj::startGame( ::flixel::util::FlxTimer t){
{
		HX_STACK_FRAME("LogoState","startGame",0xa671fd8c,"LogoState.startGame","LogoState.hx",51,0x72fbb7f8)
		HX_STACK_THIS(this)
		HX_STACK_ARG(t,"t")
		HX_STACK_LINE(51)
		::flixel::FlxState State = ::MenuState_obj::__new(null());		HX_STACK_VAR(State,"State");
		HX_STACK_LINE(51)
		::flixel::FlxG_obj::game->_requestedState = State;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(LogoState_obj,startGame,(void))


LogoState_obj::LogoState_obj()
{
}

void LogoState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(LogoState);
	HX_MARK_MEMBER_NAME(_ohlogo,"_ohlogo");
	HX_MARK_MEMBER_NAME(_twOhlogo,"_twOhlogo");
	HX_MARK_MEMBER_NAME(_sndStart,"_sndStart");
	HX_MARK_MEMBER_NAME(_tDelay,"_tDelay");
	::flixel::FlxState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void LogoState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_ohlogo,"_ohlogo");
	HX_VISIT_MEMBER_NAME(_twOhlogo,"_twOhlogo");
	HX_VISIT_MEMBER_NAME(_sndStart,"_sndStart");
	HX_VISIT_MEMBER_NAME(_tDelay,"_tDelay");
	::flixel::FlxState_obj::__Visit(HX_VISIT_ARG);
}

Dynamic LogoState_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_ohlogo") ) { return _ohlogo; }
		if (HX_FIELD_EQ(inName,"_tDelay") ) { return _tDelay; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_twOhlogo") ) { return _twOhlogo; }
		if (HX_FIELD_EQ(inName,"_sndStart") ) { return _sndStart; }
		if (HX_FIELD_EQ(inName,"playSound") ) { return playSound_dyn(); }
		if (HX_FIELD_EQ(inName,"startGame") ) { return startGame_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic LogoState_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"_ohlogo") ) { _ohlogo=inValue.Cast< ::flixel::FlxSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_tDelay") ) { _tDelay=inValue.Cast< ::flixel::util::FlxTimer >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_twOhlogo") ) { _twOhlogo=inValue.Cast< ::flixel::tweens::FlxTween >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_sndStart") ) { _sndStart=inValue.Cast< ::flixel::system::FlxSound >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void LogoState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_ohlogo"));
	outFields->push(HX_CSTRING("_twOhlogo"));
	outFields->push(HX_CSTRING("_sndStart"));
	outFields->push(HX_CSTRING("_tDelay"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::FlxSprite*/ ,(int)offsetof(LogoState_obj,_ohlogo),HX_CSTRING("_ohlogo")},
	{hx::fsObject /*::flixel::tweens::FlxTween*/ ,(int)offsetof(LogoState_obj,_twOhlogo),HX_CSTRING("_twOhlogo")},
	{hx::fsObject /*::flixel::system::FlxSound*/ ,(int)offsetof(LogoState_obj,_sndStart),HX_CSTRING("_sndStart")},
	{hx::fsObject /*::flixel::util::FlxTimer*/ ,(int)offsetof(LogoState_obj,_tDelay),HX_CSTRING("_tDelay")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_ohlogo"),
	HX_CSTRING("_twOhlogo"),
	HX_CSTRING("_sndStart"),
	HX_CSTRING("_tDelay"),
	HX_CSTRING("create"),
	HX_CSTRING("playSound"),
	HX_CSTRING("startGame"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(LogoState_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(LogoState_obj::__mClass,"__mClass");
};

#endif

Class LogoState_obj::__mClass;

void LogoState_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("LogoState"), hx::TCanCast< LogoState_obj> ,sStaticFields,sMemberFields,
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

void LogoState_obj::__boot()
{
}

