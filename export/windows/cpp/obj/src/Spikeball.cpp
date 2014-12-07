#include <hxcpp.h>

#ifndef INCLUDED_Spikeball
#include <Spikeball.h>
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
#ifndef INCLUDED_flixel_interfaces_IFlxPooled
#include <flixel/interfaces/IFlxPooled.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
#endif

Void Spikeball_obj::__construct(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,hx::Null< bool >  __o_OnFloor)
{
HX_STACK_FRAME("Spikeball","new",0xf8401a17,"Spikeball.new","Spikeball.hx",9,0x775af539)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_X,"X")
HX_STACK_ARG(__o_Y,"Y")
HX_STACK_ARG(__o_OnFloor,"OnFloor")
Float X = __o_X.Default(0);
Float Y = __o_Y.Default(0);
bool OnFloor = __o_OnFloor.Default(true);
{
	HX_STACK_LINE(13)
	this->_gravity = (int)600;
	HX_STACK_LINE(12)
	this->_flipped = false;
	HX_STACK_LINE(17)
	super::__construct(X,Y,null());
	HX_STACK_LINE(18)
	this->loadGraphic(HX_CSTRING("assets/images/spikeball.png"),false,(int)32,(int)32,null(),null());
	HX_STACK_LINE(20)
	if ((OnFloor)){
		HX_STACK_LINE(20)
		this->_gravity = this->_gravity;
	}
	else{
		HX_STACK_LINE(20)
		this->_gravity = -(this->_gravity);
	}
	HX_STACK_LINE(21)
	this->acceleration->set_y(this->_gravity);
}
;
	return null();
}

//Spikeball_obj::~Spikeball_obj() { }

Dynamic Spikeball_obj::__CreateEmpty() { return  new Spikeball_obj; }
hx::ObjectPtr< Spikeball_obj > Spikeball_obj::__new(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,hx::Null< bool >  __o_OnFloor)
{  hx::ObjectPtr< Spikeball_obj > result = new Spikeball_obj();
	result->__construct(__o_X,__o_Y,__o_OnFloor);
	return result;}

Dynamic Spikeball_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Spikeball_obj > result = new Spikeball_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

Void Spikeball_obj::flipGravity( ){
{
		HX_STACK_FRAME("Spikeball","flipGravity",0xaddf3bd8,"Spikeball.flipGravity","Spikeball.hx",24,0x775af539)
		HX_STACK_THIS(this)
		HX_STACK_LINE(25)
		hx::MultEq(this->_gravity,(int)-1);
		HX_STACK_LINE(26)
		this->acceleration->set_y(this->_gravity);
		HX_STACK_LINE(27)
		this->_flipped = !(this->_flipped);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Spikeball_obj,flipGravity,(void))


Spikeball_obj::Spikeball_obj()
{
}

Dynamic Spikeball_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"_flipped") ) { return _flipped; }
		if (HX_FIELD_EQ(inName,"_gravity") ) { return _gravity; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"flipGravity") ) { return flipGravity_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Spikeball_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"_flipped") ) { _flipped=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_gravity") ) { _gravity=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Spikeball_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_flipped"));
	outFields->push(HX_CSTRING("_gravity"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(Spikeball_obj,_flipped),HX_CSTRING("_flipped")},
	{hx::fsFloat,(int)offsetof(Spikeball_obj,_gravity),HX_CSTRING("_gravity")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_flipped"),
	HX_CSTRING("_gravity"),
	HX_CSTRING("flipGravity"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Spikeball_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Spikeball_obj::__mClass,"__mClass");
};

#endif

Class Spikeball_obj::__mClass;

void Spikeball_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("Spikeball"), hx::TCanCast< Spikeball_obj> ,sStaticFields,sMemberFields,
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

void Spikeball_obj::__boot()
{
}

