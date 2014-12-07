#include <hxcpp.h>

#ifndef INCLUDED_Player
#include <Player.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxAnimationController
#include <flixel/animation/FlxAnimationController.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyboard
#include <flixel/input/keyboard/FlxKeyboard.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxInput
#include <flixel/interfaces/IFlxInput.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxPooled
#include <flixel/interfaces/IFlxPooled.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
#endif

Void Player_obj::__construct(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y)
{
HX_STACK_FRAME("Player","new",0x8d5554f3,"Player.new","Player.hx",12,0xa27fc9dd)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_X,"X")
HX_STACK_ARG(__o_Y,"Y")
Float X = __o_X.Default(0);
Float Y = __o_Y.Default(0);
{
	HX_STACK_LINE(18)
	this->grounded = false;
	HX_STACK_LINE(17)
	this->_gravity = (int)600;
	HX_STACK_LINE(16)
	this->flipped = false;
	HX_STACK_LINE(15)
	this->_speed = (int)96;
	HX_STACK_LINE(22)
	super::__construct(X,Y,null());
	HX_STACK_LINE(23)
	this->loadGraphic(HX_CSTRING("assets/images/player.png"),true,(int)32,(int)32,null(),null());
	HX_STACK_LINE(26)
	this->animation->add(HX_CSTRING("idle"),Array_obj< int >::__new().Add((int)0).Add((int)1),(int)3,true);
	HX_STACK_LINE(27)
	this->animation->add(HX_CSTRING("jump"),Array_obj< int >::__new().Add((int)2).Add((int)3),(int)5,true);
	HX_STACK_LINE(28)
	this->animation->add(HX_CSTRING("walk"),Array_obj< int >::__new().Add((int)4).Add((int)5),(int)5,true);
	HX_STACK_LINE(31)
	this->setSize((int)20,(int)32);
	HX_STACK_LINE(32)
	this->offset->set_x((int)6);
	HX_STACK_LINE(35)
	this->acceleration->set_y(this->_gravity);
	HX_STACK_LINE(36)
	this->drag->set_y((int)0);
}
;
	return null();
}

//Player_obj::~Player_obj() { }

Dynamic Player_obj::__CreateEmpty() { return  new Player_obj; }
hx::ObjectPtr< Player_obj > Player_obj::__new(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y)
{  hx::ObjectPtr< Player_obj > result = new Player_obj();
	result->__construct(__o_X,__o_Y);
	return result;}

Dynamic Player_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Player_obj > result = new Player_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

Void Player_obj::update( ){
{
		HX_STACK_FRAME("Player","update",0xf1f8df56,"Player.update","Player.hx",39,0xa27fc9dd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(40)
		this->super::update();
		HX_STACK_LINE(43)
		this->velocity->set_x((int)0);
		HX_STACK_LINE(45)
		if ((::flixel::FlxG_obj::keys->checkKeyStatus(Array_obj< ::String >::__new().Add(HX_CSTRING("LEFT")).Add(HX_CSTRING("A")),(int)1))){
			HX_STACK_LINE(46)
			this->velocity->set_x(-(this->_speed));
		}
		else{
			HX_STACK_LINE(48)
			if ((::flixel::FlxG_obj::keys->checkKeyStatus(Array_obj< ::String >::__new().Add(HX_CSTRING("RIGHT")).Add(HX_CSTRING("D")),(int)1))){
				HX_STACK_LINE(49)
				this->velocity->set_x(this->_speed);
			}
		}
		HX_STACK_LINE(53)
		if (((this->velocity->x != (int)0))){
			HX_STACK_LINE(54)
			if (((this->velocity->x > (int)0))){
				HX_STACK_LINE(55)
				this->set_flipX(false);
			}
			else{
				HX_STACK_LINE(58)
				this->set_flipX(true);
			}
			HX_STACK_LINE(60)
			this->animation->play(HX_CSTRING("walk"),null(),null());
		}
		else{
			HX_STACK_LINE(63)
			this->animation->play(HX_CSTRING("idle"),null(),null());
		}
	}
return null();
}


Void Player_obj::flipGravity( ){
{
		HX_STACK_FRAME("Player","flipGravity",0xd934b2b4,"Player.flipGravity","Player.hx",69,0xa27fc9dd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(70)
		this->flipped = !(this->flipped);
		HX_STACK_LINE(71)
		hx::MultEq(this->_gravity,(int)-1);
		HX_STACK_LINE(72)
		this->acceleration->set_y(this->_gravity);
		HX_STACK_LINE(73)
		this->set_flipY(!(this->flipY));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Player_obj,flipGravity,(void))

Void Player_obj::bounce( ){
{
		HX_STACK_FRAME("Player","bounce",0xd110ded5,"Player.bounce","Player.hx",77,0xa27fc9dd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(77)
		this->velocity->set_y((  ((this->flipped)) ? Float((int)96) : Float((int)-96) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Player_obj,bounce,(void))

Void Player_obj::setOnFloor( ){
{
		HX_STACK_FRAME("Player","setOnFloor",0x4ba21878,"Player.setOnFloor","Player.hx",81,0xa27fc9dd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(81)
		this->velocity->set_y((int)0);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Player_obj,setOnFloor,(void))


Player_obj::Player_obj()
{
}

Dynamic Player_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_speed") ) { return _speed; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"bounce") ) { return bounce_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"flipped") ) { return flipped; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_gravity") ) { return _gravity; }
		if (HX_FIELD_EQ(inName,"grounded") ) { return grounded; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"setOnFloor") ) { return setOnFloor_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"flipGravity") ) { return flipGravity_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Player_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_speed") ) { _speed=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"flipped") ) { flipped=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_gravity") ) { _gravity=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"grounded") ) { grounded=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Player_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_speed"));
	outFields->push(HX_CSTRING("flipped"));
	outFields->push(HX_CSTRING("_gravity"));
	outFields->push(HX_CSTRING("grounded"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(Player_obj,_speed),HX_CSTRING("_speed")},
	{hx::fsBool,(int)offsetof(Player_obj,flipped),HX_CSTRING("flipped")},
	{hx::fsFloat,(int)offsetof(Player_obj,_gravity),HX_CSTRING("_gravity")},
	{hx::fsBool,(int)offsetof(Player_obj,grounded),HX_CSTRING("grounded")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_speed"),
	HX_CSTRING("flipped"),
	HX_CSTRING("_gravity"),
	HX_CSTRING("grounded"),
	HX_CSTRING("update"),
	HX_CSTRING("flipGravity"),
	HX_CSTRING("bounce"),
	HX_CSTRING("setOnFloor"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Player_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Player_obj::__mClass,"__mClass");
};

#endif

Class Player_obj::__mClass;

void Player_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("Player"), hx::TCanCast< Player_obj> ,sStaticFields,sMemberFields,
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

void Player_obj::__boot()
{
}

