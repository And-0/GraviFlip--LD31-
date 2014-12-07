#include <hxcpp.h>

#ifndef INCLUDED_Enemy
#include <Enemy.h>
#endif
#ifndef INCLUDED_IMap
#include <IMap.h>
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
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxAnimationController
#include <flixel/animation/FlxAnimationController.h>
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
#ifndef INCLUDED_flixel_interfaces_IFlxPooled
#include <flixel/interfaces/IFlxPooled.h>
#endif
#ifndef INCLUDED_flixel_text_FlxText
#include <flixel/text/FlxText.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif

Void Enemy_obj::__construct(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,hx::Null< bool >  __o_OnFloor,Dynamic __o_FromLeft,Dynamic __o_Sticky)
{
HX_STACK_FRAME("Enemy","new",0x35d4571a,"Enemy.new","Enemy.hx",14,0xbda88996)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_X,"X")
HX_STACK_ARG(__o_Y,"Y")
HX_STACK_ARG(__o_OnFloor,"OnFloor")
HX_STACK_ARG(__o_FromLeft,"FromLeft")
HX_STACK_ARG(__o_Sticky,"Sticky")
Float X = __o_X.Default(0);
Float Y = __o_Y.Default(0);
bool OnFloor = __o_OnFloor.Default(true);
Dynamic FromLeft = __o_FromLeft.Default(true);
Dynamic Sticky = __o_Sticky.Default(false);
{
	HX_STACK_LINE(24)
	this->pointValue = (int)10;
	HX_STACK_LINE(22)
	this->onFloor = false;
	HX_STACK_LINE(21)
	this->_gravity = (int)500;
	HX_STACK_LINE(20)
	this->_speed = (int)32;
	HX_STACK_LINE(19)
	this->_flipped = false;
	HX_STACK_LINE(30)
	super::__construct(X,Y,null());
	HX_STACK_LINE(31)
	this->_sticky = Sticky;
	HX_STACK_LINE(32)
	this->_fromLeft = FromLeft;
	HX_STACK_LINE(33)
	this->onFloor = OnFloor;
	HX_STACK_LINE(34)
	this->_flipped = !(this->onFloor);
	HX_STACK_LINE(36)
	if ((!(this->_sticky))){
		HX_STACK_LINE(36)
		this->pointValue = (int)20;
	}
	else{
		HX_STACK_LINE(36)
		this->pointValue = this->pointValue;
	}
	HX_STACK_LINE(39)
	if ((this->_sticky)){
		HX_STACK_LINE(40)
		this->loadGraphic(HX_CSTRING("assets/images/enemy.png"),true,(int)32,(int)18,null(),null());
	}
	else{
		HX_STACK_LINE(43)
		this->loadGraphic(HX_CSTRING("assets/images/hardenemy.png"),true,(int)32,(int)22,null(),null());
	}
	struct _Function_1_1{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Enemy.hx",47,0xbda88996)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("x") , false,false);
				__result->Add(HX_CSTRING("y") , false,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(47)
	this->_facingFlip->set((int)1,_Function_1_1::Block());
	struct _Function_1_2{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Enemy.hx",48,0xbda88996)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("x") , true,false);
				__result->Add(HX_CSTRING("y") , false,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(48)
	this->_facingFlip->set((int)16,_Function_1_2::Block());
	HX_STACK_LINE(49)
	this->animation->add(HX_CSTRING("walk"),Array_obj< int >::__new().Add((int)0).Add((int)1),(int)10,true);
	HX_STACK_LINE(50)
	this->set_facing((  ((this->_fromLeft)) ? int((int)16) : int((int)1) ));
	HX_STACK_LINE(51)
	this->set_flipY(this->_flipped);
	HX_STACK_LINE(54)
	if ((this->_sticky)){
		HX_STACK_LINE(55)
		this->setSize((int)28,(int)18);
		HX_STACK_LINE(56)
		this->offset->set_x((int)2);
	}
	else{
		HX_STACK_LINE(59)
		this->setSize((int)24,(int)22);
		HX_STACK_LINE(60)
		this->offset->set_x((int)4);
	}
	HX_STACK_LINE(64)
	this->set_x((  ((this->_fromLeft)) ? Float((int)0) : Float((::flixel::FlxG_obj::width - ::PlayState_obj::TILESIZE)) ));
	HX_STACK_LINE(65)
	Float _g1;		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(65)
	if ((this->onFloor)){
		HX_STACK_LINE(65)
		Float _g = this->get_height();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(65)
		_g1 = ((::flixel::FlxG_obj::height - (::PlayState_obj::TILESIZE * (int)2)) - _g);
	}
	else{
		HX_STACK_LINE(65)
		_g1 = (::PlayState_obj::TILESIZE * (int)2);
	}
	HX_STACK_LINE(65)
	this->set_y(_g1);
	HX_STACK_LINE(70)
	if (((bool(!(this->_sticky)) && bool(this->onFloor)))){
		HX_STACK_LINE(70)
		this->_gravity = this->_gravity;
	}
	else{
		HX_STACK_LINE(70)
		this->_gravity = -(this->_gravity);
	}
	HX_STACK_LINE(71)
	this->acceleration->set_y((  ((!(this->_sticky))) ? Float(this->_gravity) : Float((int)0) ));
	HX_STACK_LINE(76)
	this->velocity->set_x((  ((this->_fromLeft)) ? Float(this->_speed) : Float(-(this->_speed)) ));
	HX_STACK_LINE(77)
	this->animation->play(HX_CSTRING("walk"),null(),null());
}
;
	return null();
}

//Enemy_obj::~Enemy_obj() { }

Dynamic Enemy_obj::__CreateEmpty() { return  new Enemy_obj; }
hx::ObjectPtr< Enemy_obj > Enemy_obj::__new(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,hx::Null< bool >  __o_OnFloor,Dynamic __o_FromLeft,Dynamic __o_Sticky)
{  hx::ObjectPtr< Enemy_obj > result = new Enemy_obj();
	result->__construct(__o_X,__o_Y,__o_OnFloor,__o_FromLeft,__o_Sticky);
	return result;}

Dynamic Enemy_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Enemy_obj > result = new Enemy_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return result;}

Void Enemy_obj::update( ){
{
		HX_STACK_FRAME("Enemy","update",0xcf0e6f8f,"Enemy.update","Enemy.hx",80,0xbda88996)
		HX_STACK_THIS(this)
		HX_STACK_LINE(82)
		this->super::update();
		struct _Function_1_1{
			inline static bool Block( hx::ObjectPtr< ::Enemy_obj > __this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Enemy.hx",84,0xbda88996)
				{
					HX_STACK_LINE(84)
					Float _g = __this->get_width();		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(84)
					Float _g1 = ((::flixel::FlxG_obj::width - ::PlayState_obj::TILESIZE) - _g);		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(84)
					Float _g2 = (_g1 - (int)1);		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(84)
					return (__this->x > _g2);
				}
				return null();
			}
		};
		HX_STACK_LINE(84)
		if (((  ((!(((  (((this->velocity->x > (int)0))) ? bool(_Function_1_1::Block(this)) : bool(false) ))))) ? bool((bool((this->velocity->x < (int)0)) && bool((this->x < (::PlayState_obj::TILESIZE + (int)1))))) : bool(true) ))){
			HX_STACK_LINE(85)
			{
				HX_STACK_LINE(85)
				::flixel::util::FlxPoint _g = this->velocity;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(85)
				_g->set_x((_g->x * (int)-1));
			}
			HX_STACK_LINE(86)
			this->set_facing((  (((this->facing == (int)1))) ? int((int)16) : int((int)1) ));
			HX_STACK_LINE(87)
			this->set_flipY(this->_flipped);
		}
		HX_STACK_LINE(91)
		{
			HX_STACK_LINE(91)
			int _g = this->facing;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(91)
			switch( (int)(_g)){
				case (int)1: case (int)16: {
					HX_STACK_LINE(93)
					this->animation->play(HX_CSTRING("walk"),null(),null());
				}
				;break;
			}
		}
	}
return null();
}


Void Enemy_obj::flipGravity( ){
{
		HX_STACK_FRAME("Enemy","flipGravity",0x9e4cb3db,"Enemy.flipGravity","Enemy.hx",98,0xbda88996)
		HX_STACK_THIS(this)
		HX_STACK_LINE(99)
		if ((this->_sticky)){
			HX_STACK_LINE(100)
			return null();
		}
		HX_STACK_LINE(102)
		hx::MultEq(this->_gravity,(int)-1);
		HX_STACK_LINE(103)
		this->acceleration->set_y(this->_gravity);
		HX_STACK_LINE(104)
		this->_flipped = !(this->_flipped);
		HX_STACK_LINE(105)
		this->set_flipY(!(this->flipY));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Enemy_obj,flipGravity,(void))


Enemy_obj::Enemy_obj()
{
}

void Enemy_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Enemy);
	HX_MARK_MEMBER_NAME(_sticky,"_sticky");
	HX_MARK_MEMBER_NAME(_fromLeft,"_fromLeft");
	HX_MARK_MEMBER_NAME(_flipped,"_flipped");
	HX_MARK_MEMBER_NAME(_speed,"_speed");
	HX_MARK_MEMBER_NAME(_gravity,"_gravity");
	HX_MARK_MEMBER_NAME(onFloor,"onFloor");
	HX_MARK_MEMBER_NAME(pointValue,"pointValue");
	HX_MARK_MEMBER_NAME(_txtScore,"_txtScore");
	::flixel::FlxSprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Enemy_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_sticky,"_sticky");
	HX_VISIT_MEMBER_NAME(_fromLeft,"_fromLeft");
	HX_VISIT_MEMBER_NAME(_flipped,"_flipped");
	HX_VISIT_MEMBER_NAME(_speed,"_speed");
	HX_VISIT_MEMBER_NAME(_gravity,"_gravity");
	HX_VISIT_MEMBER_NAME(onFloor,"onFloor");
	HX_VISIT_MEMBER_NAME(pointValue,"pointValue");
	HX_VISIT_MEMBER_NAME(_txtScore,"_txtScore");
	::flixel::FlxSprite_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Enemy_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_speed") ) { return _speed; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_sticky") ) { return _sticky; }
		if (HX_FIELD_EQ(inName,"onFloor") ) { return onFloor; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_flipped") ) { return _flipped; }
		if (HX_FIELD_EQ(inName,"_gravity") ) { return _gravity; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_fromLeft") ) { return _fromLeft; }
		if (HX_FIELD_EQ(inName,"_txtScore") ) { return _txtScore; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"pointValue") ) { return pointValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"flipGravity") ) { return flipGravity_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Enemy_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_speed") ) { _speed=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_sticky") ) { _sticky=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onFloor") ) { onFloor=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_flipped") ) { _flipped=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_gravity") ) { _gravity=inValue.Cast< Float >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_fromLeft") ) { _fromLeft=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_txtScore") ) { _txtScore=inValue.Cast< ::flixel::text::FlxText >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"pointValue") ) { pointValue=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Enemy_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_sticky"));
	outFields->push(HX_CSTRING("_fromLeft"));
	outFields->push(HX_CSTRING("_flipped"));
	outFields->push(HX_CSTRING("_speed"));
	outFields->push(HX_CSTRING("_gravity"));
	outFields->push(HX_CSTRING("onFloor"));
	outFields->push(HX_CSTRING("pointValue"));
	outFields->push(HX_CSTRING("_txtScore"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(Enemy_obj,_sticky),HX_CSTRING("_sticky")},
	{hx::fsBool,(int)offsetof(Enemy_obj,_fromLeft),HX_CSTRING("_fromLeft")},
	{hx::fsBool,(int)offsetof(Enemy_obj,_flipped),HX_CSTRING("_flipped")},
	{hx::fsFloat,(int)offsetof(Enemy_obj,_speed),HX_CSTRING("_speed")},
	{hx::fsFloat,(int)offsetof(Enemy_obj,_gravity),HX_CSTRING("_gravity")},
	{hx::fsBool,(int)offsetof(Enemy_obj,onFloor),HX_CSTRING("onFloor")},
	{hx::fsInt,(int)offsetof(Enemy_obj,pointValue),HX_CSTRING("pointValue")},
	{hx::fsObject /*::flixel::text::FlxText*/ ,(int)offsetof(Enemy_obj,_txtScore),HX_CSTRING("_txtScore")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_sticky"),
	HX_CSTRING("_fromLeft"),
	HX_CSTRING("_flipped"),
	HX_CSTRING("_speed"),
	HX_CSTRING("_gravity"),
	HX_CSTRING("onFloor"),
	HX_CSTRING("pointValue"),
	HX_CSTRING("_txtScore"),
	HX_CSTRING("update"),
	HX_CSTRING("flipGravity"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Enemy_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Enemy_obj::__mClass,"__mClass");
};

#endif

Class Enemy_obj::__mClass;

void Enemy_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("Enemy"), hx::TCanCast< Enemy_obj> ,sStaticFields,sMemberFields,
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

void Enemy_obj::__boot()
{
}

