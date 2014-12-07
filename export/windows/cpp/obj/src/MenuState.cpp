#include <hxcpp.h>

#ifndef INCLUDED_GBButton
#include <GBButton.h>
#endif
#ifndef INCLUDED_MenuState
#include <MenuState.h>
#endif
#ifndef INCLUDED_PlayState
#include <PlayState.h>
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
#ifndef INCLUDED_flixel_effects_particles_FlxEmitter
#include <flixel/effects/particles/FlxEmitter.h>
#endif
#ifndef INCLUDED_flixel_effects_particles_FlxParticle
#include <flixel/effects/particles/FlxParticle.h>
#endif
#ifndef INCLUDED_flixel_effects_particles_FlxTypedEmitter
#include <flixel/effects/particles/FlxTypedEmitter.h>
#endif
#ifndef INCLUDED_flixel_group_FlxGroup
#include <flixel/group/FlxGroup.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxBasic
#include <flixel/interfaces/IFlxBasic.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxParticle
#include <flixel/interfaces/IFlxParticle.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxSprite
#include <flixel/interfaces/IFlxSprite.h>
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

Void MenuState_obj::__construct(Dynamic MaxSize)
{
HX_STACK_FRAME("MenuState","new",0xe563b1c4,"MenuState.new","MenuState.hx",18,0xdfbcb22c)
HX_STACK_THIS(this)
HX_STACK_ARG(MaxSize,"MaxSize")
{
	HX_STACK_LINE(18)
	super::__construct(MaxSize);
}
;
	return null();
}

//MenuState_obj::~MenuState_obj() { }

Dynamic MenuState_obj::__CreateEmpty() { return  new MenuState_obj; }
hx::ObjectPtr< MenuState_obj > MenuState_obj::__new(Dynamic MaxSize)
{  hx::ObjectPtr< MenuState_obj > result = new MenuState_obj();
	result->__construct(MaxSize);
	return result;}

Dynamic MenuState_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< MenuState_obj > result = new MenuState_obj();
	result->__construct(inArgs[0]);
	return result;}

Void MenuState_obj::create( ){
{
		HX_STACK_FRAME("MenuState","create",0xe57b7c18,"MenuState.create","MenuState.hx",37,0xdfbcb22c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(38)
		this->super::create();
		HX_STACK_LINE(39)
		this->set_bgColor((int)-14662095);
		HX_STACK_LINE(42)
		::flixel::effects::particles::FlxEmitter _g = ::flixel::effects::particles::FlxEmitter_obj::__new((Float(::flixel::FlxG_obj::width) / Float((int)2)),(Float(::flixel::FlxG_obj::height) / Float((int)2)),(int)60);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(42)
		this->_starEmitter = _g;
		HX_STACK_LINE(43)
		{
			HX_STACK_LINE(43)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(43)
			while((true)){
				HX_STACK_LINE(43)
				if ((!(((_g1 < (int)60))))){
					HX_STACK_LINE(43)
					break;
				}
				HX_STACK_LINE(43)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(45)
				::flixel::effects::particles::FlxParticle _g11 = ::flixel::effects::particles::FlxParticle_obj::__new();		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(45)
				this->_star = _g11;
				HX_STACK_LINE(46)
				this->_star->makeGraphic((int)2,(int)2,(int)-2627436,null(),null());
				HX_STACK_LINE(47)
				this->_starEmitter->add(this->_star);
			}
		}
		HX_STACK_LINE(50)
		this->add(this->_starEmitter);
		HX_STACK_LINE(51)
		this->_starEmitter->start(false,(int)3,0.05,null(),null());
		HX_STACK_LINE(54)
		::flixel::FlxSprite _g2 = ::flixel::FlxSprite_obj::__new((int)0,(int)0,null());		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(54)
		this->_logo = _g2;
		HX_STACK_LINE(55)
		this->_logo->loadGraphic(HX_CSTRING("assets/images/logo.png"),false,(int)144,(int)64,null(),null());
		HX_STACK_LINE(56)
		::flixel::util::FlxSpriteUtil_obj::screenCenter(this->_logo,null(),null());
		HX_STACK_LINE(57)
		{
			HX_STACK_LINE(57)
			::flixel::FlxSprite _g1 = this->_logo;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(57)
			Float _g3 = this->_logo->get_height();		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(57)
			Float _g4 = (Float(_g3) / Float((int)2));		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(57)
			Float _g5 = (_g1->y - _g4);		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(57)
			_g1->set_y(_g5);
		}
		HX_STACK_LINE(58)
		this->add(this->_logo);
		HX_STACK_LINE(61)
		::GBButton _g6 = ::GBButton_obj::__new((int)0,(int)0,HX_CSTRING("PLAY"),this->onClickPlay_dyn());		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(61)
		this->_btnPlay = _g6;
		HX_STACK_LINE(62)
		::flixel::util::FlxSpriteUtil_obj::screenCenter(this->_btnPlay,null(),null());
		HX_STACK_LINE(63)
		Float _g7 = this->_logo->get_height();		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(63)
		Float _g8 = (this->_logo->y + _g7);		HX_STACK_VAR(_g8,"_g8");
		HX_STACK_LINE(63)
		Float _g9 = (_g8 + (int)16);		HX_STACK_VAR(_g9,"_g9");
		HX_STACK_LINE(63)
		this->_btnPlay->set_y(_g9);
		HX_STACK_LINE(64)
		this->add(this->_btnPlay);
		HX_STACK_LINE(66)
		::GBButton _g10 = ::GBButton_obj::__new((int)0,(int)0,HX_CSTRING("SFX: ON"),this->toggleSound_dyn());		HX_STACK_VAR(_g10,"_g10");
		HX_STACK_LINE(66)
		this->_btnSound = _g10;
		HX_STACK_LINE(67)
		::flixel::util::FlxSpriteUtil_obj::screenCenter(this->_btnSound,null(),null());
		HX_STACK_LINE(68)
		Float _g11 = this->_btnPlay->get_height();		HX_STACK_VAR(_g11,"_g11");
		HX_STACK_LINE(68)
		Float _g12 = (this->_btnPlay->y + _g11);		HX_STACK_VAR(_g12,"_g12");
		HX_STACK_LINE(68)
		Float _g13 = (_g12 + (int)3);		HX_STACK_VAR(_g13,"_g13");
		HX_STACK_LINE(68)
		this->_btnSound->set_y(_g13);
		HX_STACK_LINE(70)
		::GBButton _g14 = ::GBButton_obj::__new((int)0,(int)0,HX_CSTRING("MUSIC: ON"),this->toggleMusic_dyn());		HX_STACK_VAR(_g14,"_g14");
		HX_STACK_LINE(70)
		this->_btnMusic = _g14;
		HX_STACK_LINE(71)
		::flixel::util::FlxSpriteUtil_obj::screenCenter(this->_btnMusic,null(),null());
		HX_STACK_LINE(72)
		Float _g15 = this->_btnSound->get_height();		HX_STACK_VAR(_g15,"_g15");
		HX_STACK_LINE(72)
		Float _g16 = (this->_btnSound->y + _g15);		HX_STACK_VAR(_g16,"_g16");
		HX_STACK_LINE(72)
		Float _g17 = (_g16 + (int)3);		HX_STACK_VAR(_g17,"_g17");
		HX_STACK_LINE(72)
		this->_btnMusic->set_y(_g17);
		HX_STACK_LINE(74)
		this->_btnSound->label->__Field(HX_CSTRING("set_text"),true)((  ((::MenuState_obj::sound)) ? ::String(HX_CSTRING("SFX: ON")) : ::String(HX_CSTRING("SFX: OFF")) ));
		HX_STACK_LINE(75)
		this->_btnMusic->label->__Field(HX_CSTRING("set_text"),true)((  ((::MenuState_obj::music)) ? ::String(HX_CSTRING("MUSIC: ON")) : ::String(HX_CSTRING("MUSIC: OFF")) ));
		HX_STACK_LINE(77)
		this->add(this->_btnSound);
		HX_STACK_LINE(78)
		this->add(this->_btnMusic);
		HX_STACK_LINE(83)
		::flixel::text::FlxText _g18 = ::flixel::text::FlxText_obj::__new((Float(::flixel::FlxG_obj::width) / Float((int)2)),(::flixel::FlxG_obj::height - (int)18),(int)0,HX_CSTRING("CREATED BY OHSAT GAMES FOR LD31, 2014"),null(),null());		HX_STACK_VAR(_g18,"_g18");
		HX_STACK_LINE(83)
		this->_txtCredit = _g18;
		HX_STACK_LINE(84)
		this->_txtCredit->setFormat(HX_CSTRING("assets/CoasterBoy.ttf"),(int)8,(int)-2627436,null(),null(),null(),null());
		HX_STACK_LINE(85)
		{
			HX_STACK_LINE(85)
			::flixel::text::FlxText _g1 = this->_txtCredit;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(85)
			Float _g19 = this->_txtCredit->get_width();		HX_STACK_VAR(_g19,"_g19");
			HX_STACK_LINE(85)
			Float _g20 = (Float(_g19) / Float((int)2));		HX_STACK_VAR(_g20,"_g20");
			HX_STACK_LINE(85)
			Float _g21 = (_g1->x - _g20);		HX_STACK_VAR(_g21,"_g21");
			HX_STACK_LINE(85)
			_g1->set_x(_g21);
		}
		HX_STACK_LINE(86)
		this->add(this->_txtCredit);
	}
return null();
}


Void MenuState_obj::destroy( ){
{
		HX_STACK_FRAME("MenuState","destroy",0xf9ac905e,"MenuState.destroy","MenuState.hx",95,0xdfbcb22c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(95)
		this->super::destroy();
	}
return null();
}


Void MenuState_obj::update( ){
{
		HX_STACK_FRAME("MenuState","update",0xf0719b25,"MenuState.update","MenuState.hx",103,0xdfbcb22c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(103)
		this->super::update();
	}
return null();
}


Void MenuState_obj::onClickPlay( ){
{
		HX_STACK_FRAME("MenuState","onClickPlay",0xeb4262a1,"MenuState.onClickPlay","MenuState.hx",107,0xdfbcb22c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(107)
		::flixel::FlxState State = ::PlayState_obj::__new(null());		HX_STACK_VAR(State,"State");
		HX_STACK_LINE(107)
		::flixel::FlxG_obj::game->_requestedState = State;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(MenuState_obj,onClickPlay,(void))

Void MenuState_obj::toggleMusic( ){
{
		HX_STACK_FRAME("MenuState","toggleMusic",0xd7c76dd5,"MenuState.toggleMusic","MenuState.hx",110,0xdfbcb22c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(111)
		::MenuState_obj::music = !(::MenuState_obj::music);
		HX_STACK_LINE(112)
		this->_btnMusic->label->__Field(HX_CSTRING("set_text"),true)((  ((::MenuState_obj::music)) ? ::String(HX_CSTRING("MUSIC: ON")) : ::String(HX_CSTRING("MUSIC: OFF")) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(MenuState_obj,toggleMusic,(void))

Void MenuState_obj::toggleSound( ){
{
		HX_STACK_FRAME("MenuState","toggleSound",0x483929ff,"MenuState.toggleSound","MenuState.hx",115,0xdfbcb22c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(116)
		::MenuState_obj::sound = !(::MenuState_obj::sound);
		HX_STACK_LINE(117)
		this->_btnSound->label->__Field(HX_CSTRING("set_text"),true)((  ((::MenuState_obj::sound)) ? ::String(HX_CSTRING("SFX: ON")) : ::String(HX_CSTRING("SFX: OFF")) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(MenuState_obj,toggleSound,(void))

bool MenuState_obj::music;

bool MenuState_obj::sound;


MenuState_obj::MenuState_obj()
{
}

void MenuState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MenuState);
	HX_MARK_MEMBER_NAME(_btnPlay,"_btnPlay");
	HX_MARK_MEMBER_NAME(_btnMusic,"_btnMusic");
	HX_MARK_MEMBER_NAME(_btnSound,"_btnSound");
	HX_MARK_MEMBER_NAME(_txtTitle,"_txtTitle");
	HX_MARK_MEMBER_NAME(_logo,"_logo");
	HX_MARK_MEMBER_NAME(_starEmitter,"_starEmitter");
	HX_MARK_MEMBER_NAME(_star,"_star");
	HX_MARK_MEMBER_NAME(_txtCredit,"_txtCredit");
	::flixel::FlxState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void MenuState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_btnPlay,"_btnPlay");
	HX_VISIT_MEMBER_NAME(_btnMusic,"_btnMusic");
	HX_VISIT_MEMBER_NAME(_btnSound,"_btnSound");
	HX_VISIT_MEMBER_NAME(_txtTitle,"_txtTitle");
	HX_VISIT_MEMBER_NAME(_logo,"_logo");
	HX_VISIT_MEMBER_NAME(_starEmitter,"_starEmitter");
	HX_VISIT_MEMBER_NAME(_star,"_star");
	HX_VISIT_MEMBER_NAME(_txtCredit,"_txtCredit");
	::flixel::FlxState_obj::__Visit(HX_VISIT_ARG);
}

Dynamic MenuState_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"music") ) { return music; }
		if (HX_FIELD_EQ(inName,"sound") ) { return sound; }
		if (HX_FIELD_EQ(inName,"_logo") ) { return _logo; }
		if (HX_FIELD_EQ(inName,"_star") ) { return _star; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_btnPlay") ) { return _btnPlay; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_btnMusic") ) { return _btnMusic; }
		if (HX_FIELD_EQ(inName,"_btnSound") ) { return _btnSound; }
		if (HX_FIELD_EQ(inName,"_txtTitle") ) { return _txtTitle; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_txtCredit") ) { return _txtCredit; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"onClickPlay") ) { return onClickPlay_dyn(); }
		if (HX_FIELD_EQ(inName,"toggleMusic") ) { return toggleMusic_dyn(); }
		if (HX_FIELD_EQ(inName,"toggleSound") ) { return toggleSound_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_starEmitter") ) { return _starEmitter; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic MenuState_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"music") ) { music=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"sound") ) { sound=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_logo") ) { _logo=inValue.Cast< ::flixel::FlxSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_star") ) { _star=inValue.Cast< ::flixel::effects::particles::FlxParticle >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_btnPlay") ) { _btnPlay=inValue.Cast< ::GBButton >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_btnMusic") ) { _btnMusic=inValue.Cast< ::GBButton >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_btnSound") ) { _btnSound=inValue.Cast< ::GBButton >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_txtTitle") ) { _txtTitle=inValue.Cast< ::flixel::text::FlxText >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_txtCredit") ) { _txtCredit=inValue.Cast< ::flixel::text::FlxText >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_starEmitter") ) { _starEmitter=inValue.Cast< ::flixel::effects::particles::FlxEmitter >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void MenuState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_btnPlay"));
	outFields->push(HX_CSTRING("_btnMusic"));
	outFields->push(HX_CSTRING("_btnSound"));
	outFields->push(HX_CSTRING("_txtTitle"));
	outFields->push(HX_CSTRING("_logo"));
	outFields->push(HX_CSTRING("_starEmitter"));
	outFields->push(HX_CSTRING("_star"));
	outFields->push(HX_CSTRING("_txtCredit"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("music"),
	HX_CSTRING("sound"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::GBButton*/ ,(int)offsetof(MenuState_obj,_btnPlay),HX_CSTRING("_btnPlay")},
	{hx::fsObject /*::GBButton*/ ,(int)offsetof(MenuState_obj,_btnMusic),HX_CSTRING("_btnMusic")},
	{hx::fsObject /*::GBButton*/ ,(int)offsetof(MenuState_obj,_btnSound),HX_CSTRING("_btnSound")},
	{hx::fsObject /*::flixel::text::FlxText*/ ,(int)offsetof(MenuState_obj,_txtTitle),HX_CSTRING("_txtTitle")},
	{hx::fsObject /*::flixel::FlxSprite*/ ,(int)offsetof(MenuState_obj,_logo),HX_CSTRING("_logo")},
	{hx::fsObject /*::flixel::effects::particles::FlxEmitter*/ ,(int)offsetof(MenuState_obj,_starEmitter),HX_CSTRING("_starEmitter")},
	{hx::fsObject /*::flixel::effects::particles::FlxParticle*/ ,(int)offsetof(MenuState_obj,_star),HX_CSTRING("_star")},
	{hx::fsObject /*::flixel::text::FlxText*/ ,(int)offsetof(MenuState_obj,_txtCredit),HX_CSTRING("_txtCredit")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_btnPlay"),
	HX_CSTRING("_btnMusic"),
	HX_CSTRING("_btnSound"),
	HX_CSTRING("_txtTitle"),
	HX_CSTRING("_logo"),
	HX_CSTRING("_starEmitter"),
	HX_CSTRING("_star"),
	HX_CSTRING("_txtCredit"),
	HX_CSTRING("create"),
	HX_CSTRING("destroy"),
	HX_CSTRING("update"),
	HX_CSTRING("onClickPlay"),
	HX_CSTRING("toggleMusic"),
	HX_CSTRING("toggleSound"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MenuState_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(MenuState_obj::music,"music");
	HX_MARK_MEMBER_NAME(MenuState_obj::sound,"sound");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MenuState_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(MenuState_obj::music,"music");
	HX_VISIT_MEMBER_NAME(MenuState_obj::sound,"sound");
};

#endif

Class MenuState_obj::__mClass;

void MenuState_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("MenuState"), hx::TCanCast< MenuState_obj> ,sStaticFields,sMemberFields,
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

void MenuState_obj::__boot()
{
	music= true;
	sound= true;
}

