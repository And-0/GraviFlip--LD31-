#include <hxcpp.h>

#ifndef INCLUDED_Enemy
#include <Enemy.h>
#endif
#ifndef INCLUDED_MenuState
#include <MenuState.h>
#endif
#ifndef INCLUDED_PlayState
#include <PlayState.h>
#endif
#ifndef INCLUDED_Player
#include <Player.h>
#endif
#ifndef INCLUDED_Spikeball
#include <Spikeball.h>
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
#ifndef INCLUDED_flixel_addons_display_FlxBackdrop
#include <flixel/addons/display/FlxBackdrop.h>
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
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyList
#include <flixel/input/keyboard/FlxKeyList.h>
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
#ifndef INCLUDED_flixel_system_FlxSound
#include <flixel/system/FlxSound.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_SoundFrontEnd
#include <flixel/system/frontEnds/SoundFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_text_FlxText
#include <flixel/text/FlxText.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxTween
#include <flixel/tweens/FlxTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_misc_VarTween
#include <flixel/tweens/misc/VarTween.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_FlxRandom
#include <flixel/util/FlxRandom.h>
#endif
#ifndef INCLUDED_flixel_util_FlxSpriteUtil
#include <flixel/util/FlxSpriteUtil.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
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

Void PlayState_obj::__construct(Dynamic __o_loadTutorial)
{
HX_STACK_FRAME("PlayState","new",0xf8bf96cf,"PlayState.new","PlayState.hx",23,0xb30d7781)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_loadTutorial,"loadTutorial")
Dynamic loadTutorial = __o_loadTutorial.Default(true);
{
	HX_STACK_LINE(71)
	this->_tutStep = (int)1;
	HX_STACK_LINE(58)
	this->comboFactor = (int)1;
	HX_STACK_LINE(39)
	this->_scoreValue = (int)0;
	HX_STACK_LINE(75)
	super::__construct(null());
	HX_STACK_LINE(77)
	this->_isTutorial = loadTutorial;
}
;
	return null();
}

//PlayState_obj::~PlayState_obj() { }

Dynamic PlayState_obj::__CreateEmpty() { return  new PlayState_obj; }
hx::ObjectPtr< PlayState_obj > PlayState_obj::__new(Dynamic __o_loadTutorial)
{  hx::ObjectPtr< PlayState_obj > result = new PlayState_obj();
	result->__construct(__o_loadTutorial);
	return result;}

Dynamic PlayState_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< PlayState_obj > result = new PlayState_obj();
	result->__construct(inArgs[0]);
	return result;}

Void PlayState_obj::create( ){
{
		HX_STACK_FRAME("PlayState","create",0x82220fed,"PlayState.create","PlayState.hx",82,0xb30d7781)
		HX_STACK_THIS(this)
		HX_STACK_LINE(83)
		this->super::create();
		HX_STACK_LINE(89)
		this->_musicOn = ::MenuState_obj::music;
		HX_STACK_LINE(90)
		this->_soundOn = ::MenuState_obj::sound;
		HX_STACK_LINE(91)
		::flixel::system::FlxSound _g = ::flixel::FlxG_obj::sound->load(HX_CSTRING("assets/sounds/bounce.wav"),0.2,null(),null(),null(),null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(91)
		this->_sndBounce = _g;
		HX_STACK_LINE(92)
		::flixel::system::FlxSound _g1 = ::flixel::FlxG_obj::sound->load(HX_CSTRING("assets/sounds/hit.wav"),0.2,null(),null(),null(),null(),null());		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(92)
		this->_sndHit = _g1;
		HX_STACK_LINE(94)
		if ((this->_musicOn)){
			HX_STACK_LINE(98)
			::flixel::system::FlxSound _g2 = ::flixel::FlxG_obj::sound->load(HX_CSTRING("assets/music/music.ogg"),(int)1,true,null(),null(),null(),null());		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(98)
			this->_sndMusic = _g2;
			HX_STACK_LINE(100)
			this->_sndMusic->play(null());
		}
		HX_STACK_LINE(105)
		::flixel::addons::display::FlxBackdrop _g3 = ::flixel::addons::display::FlxBackdrop_obj::__new(HX_CSTRING("assets/images/space.png"),(int)1,(int)1,true,true);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(105)
		this->_space = _g3;
		HX_STACK_LINE(106)
		this->_space->set_x(::PlayState_obj::TILESIZE);
		HX_STACK_LINE(107)
		this->_space->set_y(::PlayState_obj::TILESIZE);
		HX_STACK_LINE(108)
		this->_space->velocity->set_x((int)-2);
		HX_STACK_LINE(109)
		this->_space->velocity->set_y((int)1);
		HX_STACK_LINE(111)
		::flixel::addons::display::FlxBackdrop _g4 = ::flixel::addons::display::FlxBackdrop_obj::__new(HX_CSTRING("assets/images/space2.png"),(int)1,(int)1,true,true);		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(111)
		this->_space2 = _g4;
		HX_STACK_LINE(112)
		this->_space2->set_x(::PlayState_obj::TILESIZE);
		HX_STACK_LINE(113)
		this->_space2->set_y(::PlayState_obj::TILESIZE);
		HX_STACK_LINE(114)
		this->_space2->velocity->set_x((int)-10);
		HX_STACK_LINE(115)
		this->_space2->velocity->set_y((int)2);
		HX_STACK_LINE(118)
		::flixel::FlxSprite _g5 = ::flixel::FlxSprite_obj::__new((int)0,(int)0,null());		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(118)
		this->_sprBackground = _g5;
		HX_STACK_LINE(119)
		this->_sprBackground->loadGraphic(HX_CSTRING("assets/images/bg.png"),false,(int)320,(int)288,null(),null());
		HX_STACK_LINE(121)
		::flixel::FlxSprite _g6 = ::flixel::FlxSprite_obj::__new((int)0,(::flixel::FlxG_obj::height - (::PlayState_obj::TILESIZE * (int)2)),null());		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(121)
		this->_floor = _g6;
		HX_STACK_LINE(122)
		this->_floor->makeGraphic(::flixel::FlxG_obj::width,::PlayState_obj::TILESIZE,(int)0,null(),null());
		HX_STACK_LINE(124)
		::flixel::FlxSprite _g7 = ::flixel::FlxSprite_obj::__new((int)0,::PlayState_obj::TILESIZE,null());		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(124)
		this->_ceiling = _g7;
		HX_STACK_LINE(125)
		this->_ceiling->makeGraphic(::flixel::FlxG_obj::width,::PlayState_obj::TILESIZE,(int)0,null(),null());
		HX_STACK_LINE(127)
		::flixel::FlxSprite _g8 = ::flixel::FlxSprite_obj::__new((int)0,(int)0,null());		HX_STACK_VAR(_g8,"_g8");
		HX_STACK_LINE(127)
		this->_wallLeft = _g8;
		HX_STACK_LINE(128)
		this->_wallLeft->loadGraphic(HX_CSTRING("assets/images/wall.png"),false,(int)16,(int)288,null(),null());
		HX_STACK_LINE(130)
		::flixel::FlxSprite _g9 = ::flixel::FlxSprite_obj::__new((::flixel::FlxG_obj::width - ::PlayState_obj::TILESIZE),(int)0,null());		HX_STACK_VAR(_g9,"_g9");
		HX_STACK_LINE(130)
		this->_wallRight = _g9;
		HX_STACK_LINE(131)
		this->_wallRight->loadGraphic(HX_CSTRING("assets/images/wall.png"),false,(int)16,(int)288,null(),null());
		HX_STACK_LINE(132)
		this->_wallRight->set_flipX(true);
		HX_STACK_LINE(134)
		::flixel::group::FlxTypedGroup _g10 = ::flixel::group::FlxTypedGroup_obj::__new(null());		HX_STACK_VAR(_g10,"_g10");
		HX_STACK_LINE(134)
		this->_grpRoom = _g10;
		HX_STACK_LINE(135)
		::flixel::group::FlxTypedGroup _g11 = ::flixel::group::FlxTypedGroup_obj::__new(null());		HX_STACK_VAR(_g11,"_g11");
		HX_STACK_LINE(135)
		this->_grpFloorCeiling = _g11;
		HX_STACK_LINE(136)
		::flixel::group::FlxTypedGroup _g12 = ::flixel::group::FlxTypedGroup_obj::__new(null());		HX_STACK_VAR(_g12,"_g12");
		HX_STACK_LINE(136)
		this->_grpWalls = _g12;
		HX_STACK_LINE(138)
		this->_grpRoom->add(this->_wallLeft);
		HX_STACK_LINE(139)
		this->_grpRoom->add(this->_wallRight);
		HX_STACK_LINE(140)
		this->_grpRoom->add(this->_floor);
		HX_STACK_LINE(141)
		this->_grpRoom->add(this->_ceiling);
		HX_STACK_LINE(143)
		this->_grpFloorCeiling->add(this->_floor);
		HX_STACK_LINE(144)
		this->_grpFloorCeiling->add(this->_ceiling);
		HX_STACK_LINE(145)
		this->_grpWalls->add(this->_wallLeft);
		HX_STACK_LINE(146)
		this->_grpWalls->add(this->_wallRight);
		HX_STACK_LINE(148)
		this->_grpRoom->setAll(HX_CSTRING("immovable"),true,null());
		HX_STACK_LINE(151)
		::flixel::FlxSprite _g13 = ::flixel::FlxSprite_obj::__new((int)268,(int)146,null());		HX_STACK_VAR(_g13,"_g13");
		HX_STACK_LINE(151)
		this->_arrows = _g13;
		HX_STACK_LINE(152)
		this->_arrows->loadGraphic(HX_CSTRING("assets/images/arrows.png"),true,(int)32,(int)16,null(),null());
		HX_STACK_LINE(154)
		this->_arrows->animation->add(HX_CSTRING("noflip"),Array_obj< int >::__new().Add((int)0),(int)1,false);
		HX_STACK_LINE(155)
		this->_arrows->animation->add(HX_CSTRING("flip"),Array_obj< int >::__new().Add((int)1),(int)1,false);
		HX_STACK_LINE(159)
		this->_scoreValue = (int)0;
		HX_STACK_LINE(160)
		::flixel::text::FlxText _g14 = ::flixel::text::FlxText_obj::__new(((int)9 * ::PlayState_obj::TILESIZE),((int)4 * ::PlayState_obj::TILESIZE),(int)0,HX_CSTRING("0"),(int)8,null());		HX_STACK_VAR(_g14,"_g14");
		HX_STACK_LINE(160)
		this->_txtScore = _g14;
		HX_STACK_LINE(161)
		this->_txtScore->setFormat(HX_CSTRING("assets/CoasterBoy.ttf"),(int)8,(int)-2627436,HX_CSTRING("center"),null(),null(),null());
		HX_STACK_LINE(162)
		{
			HX_STACK_LINE(162)
			::flixel::text::FlxText _g2 = this->_txtScore;		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(162)
			_g2->set_y((_g2->y - (int)5));
		}
		HX_STACK_LINE(163)
		this->updateScoreDisplay();
		HX_STACK_LINE(168)
		::Player _g15 = ::Player_obj::__new((int)0,(int)0);		HX_STACK_VAR(_g15,"_g15");
		HX_STACK_LINE(168)
		this->_player = _g15;
		HX_STACK_LINE(169)
		::flixel::util::FlxSpriteUtil_obj::screenCenter(this->_player,null(),null());
		HX_STACK_LINE(172)
		if ((this->_isTutorial)){
			HX_STACK_LINE(173)
			::flixel::text::FlxText _g16 = ::flixel::text::FlxText_obj::__new((int)0,(int)0,(int)0,HX_CSTRING("WELCOME! PRESS\n\nENTER TO SKIP THE\n\nTUTORIAL."),(int)8,null());		HX_STACK_VAR(_g16,"_g16");
			HX_STACK_LINE(173)
			this->_txtTutorial = _g16;
			HX_STACK_LINE(174)
			this->_txtTutorial->setFormat(HX_CSTRING("assets/CoasterBoy.ttf"),(int)8,(int)-2627436,HX_CSTRING("left"),null(),null(),null());
			HX_STACK_LINE(175)
			::flixel::util::FlxSpriteUtil_obj::screenCenter(this->_txtTutorial,null(),null());
			HX_STACK_LINE(176)
			{
				HX_STACK_LINE(176)
				::flixel::text::FlxText _g2 = this->_txtTutorial;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(176)
				_g2->set_y((_g2->y - (int)16));
			}
			HX_STACK_LINE(177)
			int _g17 = ::Math_obj::floor(this->_txtTutorial->x);		HX_STACK_VAR(_g17,"_g17");
			HX_STACK_LINE(177)
			this->_txtTutorial->set_x(_g17);
			HX_STACK_LINE(178)
			int _g18 = ::Math_obj::floor(this->_txtTutorial->y);		HX_STACK_VAR(_g18,"_g18");
			HX_STACK_LINE(178)
			this->_txtTutorial->set_y(_g18);
			HX_STACK_LINE(179)
			this->_txtTutorial->set_text(HX_CSTRING("WELCOME! PRESS\n\nENTER TO SKIP THE\n\nTUTORIAL AT ANY\n\nTIME."));
			HX_STACK_LINE(180)
			::flixel::text::FlxText _g19 = ::flixel::text::FlxText_obj::__new((int)0,(int)0,(int)0,HX_CSTRING("PRESS N TO\n\nCONTINUE"),(int)8,null());		HX_STACK_VAR(_g19,"_g19");
			HX_STACK_LINE(180)
			this->_txtPressN = _g19;
			HX_STACK_LINE(181)
			this->_txtPressN->setFormat(HX_CSTRING("assets/CoasterBoy.ttf"),(int)8,(int)-2627436,HX_CSTRING("left"),null(),null(),null());
			HX_STACK_LINE(182)
			::flixel::util::FlxSpriteUtil_obj::screenCenter(this->_txtPressN,null(),null());
			HX_STACK_LINE(183)
			{
				HX_STACK_LINE(183)
				::flixel::text::FlxText _g2 = this->_txtPressN;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(183)
				_g2->set_y((_g2->y + (int)30));
			}
			HX_STACK_LINE(187)
			::flixel::FlxSprite _g20 = ::flixel::FlxSprite_obj::__new((int)0,(int)0,HX_CSTRING("assets/images/subwindow.png"));		HX_STACK_VAR(_g20,"_g20");
			HX_STACK_LINE(187)
			this->_window = _g20;
			HX_STACK_LINE(188)
			::flixel::util::FlxSpriteUtil_obj::screenCenter(this->_window,null(),null());
			HX_STACK_LINE(190)
			::flixel::group::FlxTypedGroup _g21 = ::flixel::group::FlxTypedGroup_obj::__new(null());		HX_STACK_VAR(_g21,"_g21");
			HX_STACK_LINE(190)
			this->_grpEnemy = _g21;
			HX_STACK_LINE(191)
			::flixel::group::FlxTypedGroup _g22 = ::flixel::group::FlxTypedGroup_obj::__new(null());		HX_STACK_VAR(_g22,"_g22");
			HX_STACK_LINE(191)
			this->_grpSpikeball = _g22;
			HX_STACK_LINE(193)
			this->add(this->_sprBackground);
			HX_STACK_LINE(194)
			this->add(this->_window);
			HX_STACK_LINE(195)
			this->add(this->_grpFloorCeiling);
			HX_STACK_LINE(196)
			this->add(this->_txtTutorial);
			HX_STACK_LINE(197)
			this->add(this->_txtPressN);
			HX_STACK_LINE(198)
			this->add(this->_arrows);
			HX_STACK_LINE(199)
			this->add(this->_player);
			HX_STACK_LINE(200)
			this->add(this->_grpSpikeball);
			HX_STACK_LINE(201)
			this->add(this->_grpEnemy);
			HX_STACK_LINE(202)
			this->add(this->_grpWalls);
			HX_STACK_LINE(203)
			this->add(this->_txtScore);
			HX_STACK_LINE(210)
			return null();
		}
		HX_STACK_LINE(214)
		::flixel::group::FlxTypedGroup _g23 = ::flixel::group::FlxTypedGroup_obj::__new(null());		HX_STACK_VAR(_g23,"_g23");
		HX_STACK_LINE(214)
		this->_grpSpikeball = _g23;
		HX_STACK_LINE(215)
		::Spikeball sb = ::Spikeball_obj::__new((int)64,(int)96,false);		HX_STACK_VAR(sb,"sb");
		HX_STACK_LINE(216)
		this->_grpSpikeball->add(sb);
		HX_STACK_LINE(217)
		::Spikeball sb2 = ::Spikeball_obj::__new((::flixel::FlxG_obj::width - (int)96),(int)96,false);		HX_STACK_VAR(sb2,"sb2");
		HX_STACK_LINE(218)
		this->_grpSpikeball->add(sb2);
		HX_STACK_LINE(221)
		::flixel::group::FlxTypedGroup _g24 = ::flixel::group::FlxTypedGroup_obj::__new(null());		HX_STACK_VAR(_g24,"_g24");
		HX_STACK_LINE(221)
		this->_grpEnemy = _g24;
		HX_STACK_LINE(222)
		::Enemy e1 = ::Enemy_obj::__new((int)0,(int)0,true,true,false);		HX_STACK_VAR(e1,"e1");
		HX_STACK_LINE(223)
		::Enemy e2 = ::Enemy_obj::__new((int)0,(int)0,true,false,true);		HX_STACK_VAR(e2,"e2");
		HX_STACK_LINE(224)
		::Enemy e3 = ::Enemy_obj::__new((int)0,(int)0,false,false,true);		HX_STACK_VAR(e3,"e3");
		HX_STACK_LINE(226)
		this->_grpEnemy->add(e1);
		HX_STACK_LINE(227)
		this->_grpEnemy->add(e2);
		HX_STACK_LINE(228)
		this->_grpEnemy->add(e3);
		HX_STACK_LINE(235)
		this->add(this->_space);
		HX_STACK_LINE(236)
		this->add(this->_space2);
		HX_STACK_LINE(237)
		this->add(this->_sprBackground);
		HX_STACK_LINE(238)
		this->add(this->_grpFloorCeiling);
		HX_STACK_LINE(239)
		this->add(this->_arrows);
		HX_STACK_LINE(240)
		this->add(this->_txtScore);
		HX_STACK_LINE(241)
		this->add(this->_player);
		HX_STACK_LINE(242)
		this->add(this->_grpEnemy);
		HX_STACK_LINE(243)
		this->add(this->_grpSpikeball);
		HX_STACK_LINE(244)
		this->add(this->_grpWalls);
	}
return null();
}


Void PlayState_obj::destroy( ){
{
		HX_STACK_FRAME("PlayState","destroy",0x6ec756e9,"PlayState.destroy","PlayState.hx",254,0xb30d7781)
		HX_STACK_THIS(this)
		HX_STACK_LINE(254)
		this->super::destroy();
	}
return null();
}


Void PlayState_obj::update( ){
{
		HX_STACK_FRAME("PlayState","update",0x8d182efa,"PlayState.update","PlayState.hx",261,0xb30d7781)
		HX_STACK_THIS(this)
		HX_STACK_LINE(262)
		this->super::update();
		HX_STACK_LINE(264)
		if ((this->_isTutorial)){
			HX_STACK_LINE(265)
			if ((::flixel::FlxG_obj::keys->checkStatus((int)78,::flixel::FlxG_obj::keys->justPressed->checkStatus))){
				HX_STACK_LINE(266)
				this->nextTutStep();
			}
			else{
				HX_STACK_LINE(268)
				if ((::flixel::FlxG_obj::keys->checkStatus((int)13,::flixel::FlxG_obj::keys->justPressed->checkStatus))){
					HX_STACK_LINE(269)
					::flixel::FlxState State = ::PlayState_obj::__new(false);		HX_STACK_VAR(State,"State");
					HX_STACK_LINE(269)
					::flixel::FlxG_obj::game->_requestedState = State;
				}
			}
		}
		HX_STACK_LINE(275)
		if ((::flixel::FlxG_obj::overlap(this->_player,this->_grpFloorCeiling,null(),::flixel::FlxObject_obj::separate_dyn()))){
			HX_STACK_LINE(276)
			this->resetComboFactor();
			HX_STACK_LINE(277)
			this->_player->setOnFloor();
		}
		HX_STACK_LINE(279)
		::flixel::FlxG_obj::overlap(this->_grpWalls,this->_player,null(),::flixel::FlxObject_obj::separate_dyn());
		HX_STACK_LINE(280)
		::flixel::FlxG_obj::overlap(this->_grpEnemy,this->_grpFloorCeiling,null(),::flixel::FlxObject_obj::separate_dyn());
		HX_STACK_LINE(281)
		::flixel::FlxG_obj::overlap(this->_grpFloorCeiling,this->_grpSpikeball,null(),::flixel::FlxObject_obj::separate_dyn());
		HX_STACK_LINE(282)
		::flixel::FlxG_obj::overlap(this->_player,this->_grpEnemy,this->onOverlap_dyn(),null());
		HX_STACK_LINE(283)
		::flixel::FlxG_obj::overlap(this->_player,this->_grpSpikeball,this->killPlayer_dyn(),null());
		HX_STACK_LINE(286)
		if ((::flixel::FlxG_obj::keys->checkStatus((int)32,::flixel::FlxG_obj::keys->justPressed->checkStatus))){
			HX_STACK_LINE(287)
			this->flipGravity();
		}
	}
return null();
}


Void PlayState_obj::flipGravity( ){
{
		HX_STACK_FRAME("PlayState","flipGravity",0x51be3090,"PlayState.flipGravity","PlayState.hx",293,0xb30d7781)
		HX_STACK_THIS(this)
		HX_STACK_LINE(294)
		::PlayState_obj::gravityFlipped = !(::PlayState_obj::gravityFlipped);
		HX_STACK_LINE(295)
		if ((::PlayState_obj::gravityFlipped)){
			HX_STACK_LINE(295)
			::PlayState_obj::gravityFactor = (int)-1;
		}
		else{
			HX_STACK_LINE(295)
			::PlayState_obj::gravityFactor = (int)1;
		}
		HX_STACK_LINE(296)
		if ((::PlayState_obj::gravityFlipped)){
			HX_STACK_LINE(297)
			this->_arrows->animation->play(HX_CSTRING("flip"),null(),null());
		}
		else{
			HX_STACK_LINE(300)
			this->_arrows->animation->play(HX_CSTRING("noflip"),null(),null());
		}
		HX_STACK_LINE(302)
		this->_player->flipGravity();
		HX_STACK_LINE(303)
		this->_grpSpikeball->callAll(HX_CSTRING("flipGravity"),null(),null());
		HX_STACK_LINE(304)
		this->_grpEnemy->callAll(HX_CSTRING("flipGravity"),null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(PlayState_obj,flipGravity,(void))

Void PlayState_obj::onOverlap( ::flixel::FlxObject p,::flixel::FlxObject e){
{
		HX_STACK_FRAME("PlayState","onOverlap",0xbd0dbfd7,"PlayState.onOverlap","PlayState.hx",308,0xb30d7781)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p,"p")
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(314)
		::Player pl;		HX_STACK_VAR(pl,"pl");
		HX_STACK_LINE(314)
		pl = hx::TCast< Player >::cast(p);
		HX_STACK_LINE(315)
		::Enemy en;		HX_STACK_VAR(en,"en");
		HX_STACK_LINE(315)
		en = hx::TCast< Enemy >::cast(e);
		HX_STACK_LINE(316)
		{
			HX_STACK_LINE(316)
			Float _g = en->get_height();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(316)
			Float _g1 = (en->y + _g);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(316)
			Dynamic Data = ((pl->y + HX_CSTRING(" : ")) + _g1);		HX_STACK_VAR(Data,"Data");
			HX_STACK_LINE(316)
			Dynamic();
		}
		HX_STACK_LINE(320)
		Float _g2 = en->get_width();		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(320)
		Float _g3 = (en->x - _g2);		HX_STACK_VAR(_g3,"_g3");
		struct _Function_1_1{
			inline static bool Block( ::Player &pl,::Enemy &en){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","PlayState.hx",320,0xb30d7781)
				{
					HX_STACK_LINE(320)
					Float _g4 = en->get_width();		HX_STACK_VAR(_g4,"_g4");
					HX_STACK_LINE(320)
					Float _g5 = (en->x + _g4);		HX_STACK_VAR(_g5,"_g5");
					HX_STACK_LINE(320)
					return (pl->x <= _g5);
				}
				return null();
			}
		};
		HX_STACK_LINE(320)
		if (((  (((pl->x >= _g3))) ? bool(_Function_1_1::Block(pl,en)) : bool(false) ))){
			HX_STACK_LINE(321)
			Float _g6 = ::Math_obj::abs(pl->velocity->y);		HX_STACK_VAR(_g6,"_g6");
			struct _Function_2_1{
				inline static bool Block( ::Player &pl,::Enemy &en){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","PlayState.hx",321,0xb30d7781)
					{
						HX_STACK_LINE(321)
						Float _g7 = pl->get_height();		HX_STACK_VAR(_g7,"_g7");
						HX_STACK_LINE(321)
						Float _g8 = (pl->y + _g7);		HX_STACK_VAR(_g8,"_g8");
						struct _Function_3_1{
							inline static bool Block( ::Player &pl,::Enemy &en){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","PlayState.hx",321,0xb30d7781)
								{
									HX_STACK_LINE(321)
									Float _g9 = en->get_height();		HX_STACK_VAR(_g9,"_g9");
									HX_STACK_LINE(321)
									Float _g10 = (en->y + _g9);		HX_STACK_VAR(_g10,"_g10");
									HX_STACK_LINE(321)
									return (pl->getMidpoint(null())->y > _g10);
								}
								return null();
							}
						};
						HX_STACK_LINE(321)
						return (  ((!(((_g8 < en->getMidpoint(null())->y))))) ? bool(_Function_3_1::Block(pl,en)) : bool(true) );
					}
					return null();
				}
			};
			HX_STACK_LINE(321)
			if (((  (((_g6 >= (int)50))) ? bool(_Function_2_1::Block(pl,en)) : bool(false) ))){
				HX_STACK_LINE(322)
				if ((this->_soundOn)){
					HX_STACK_LINE(323)
					this->_sndBounce->play(null());
				}
				HX_STACK_LINE(325)
				pl->bounce();
				HX_STACK_LINE(326)
				e->kill();
				HX_STACK_LINE(327)
				this->showScoreGet(en,this->comboFactor);
				HX_STACK_LINE(328)
				this->addToScore((en->pointValue * this->comboFactor));
				HX_STACK_LINE(329)
				hx::AddEq(this->comboFactor,(int)1);
				HX_STACK_LINE(330)
				if (((this->comboFactor > (int)10))){
					HX_STACK_LINE(330)
					this->comboFactor = (int)10;
				}
				else{
					HX_STACK_LINE(330)
					this->comboFactor = this->comboFactor;
				}
				HX_STACK_LINE(331)
				this->addEnemy((int)1);
			}
			else{
				HX_STACK_LINE(334)
				this->killPlayer(null(),null());
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(PlayState_obj,onOverlap,(void))

Void PlayState_obj::addToScore( int toAdd){
{
		HX_STACK_FRAME("PlayState","addToScore",0x39006127,"PlayState.addToScore","PlayState.hx",342,0xb30d7781)
		HX_STACK_THIS(this)
		HX_STACK_ARG(toAdd,"toAdd")
		HX_STACK_LINE(343)
		hx::AddEq(this->_scoreValue,toAdd);
		HX_STACK_LINE(344)
		this->updateScoreDisplay();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(PlayState_obj,addToScore,(void))

Void PlayState_obj::updateScoreDisplay( ){
{
		HX_STACK_FRAME("PlayState","updateScoreDisplay",0x1600d72a,"PlayState.updateScoreDisplay","PlayState.hx",347,0xb30d7781)
		HX_STACK_THIS(this)
		HX_STACK_LINE(348)
		::String _g = ::Std_obj::string(this->_scoreValue);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(348)
		this->_txtScore->set_text(_g);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(PlayState_obj,updateScoreDisplay,(void))

Void PlayState_obj::showScoreGet( ::Enemy enemy,Dynamic __o_comboFactor){
Dynamic comboFactor = __o_comboFactor.Default(1);
	HX_STACK_FRAME("PlayState","showScoreGet",0x557cee32,"PlayState.showScoreGet","PlayState.hx",351,0xb30d7781)
	HX_STACK_THIS(this)
	HX_STACK_ARG(enemy,"enemy")
	HX_STACK_ARG(comboFactor,"comboFactor")
{
		HX_STACK_LINE(352)
		::String _g = ::Std_obj::string((enemy->pointValue * comboFactor));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(352)
		Array< ::Dynamic > txt = Array_obj< ::Dynamic >::__new().Add(::flixel::text::FlxText_obj::__new(enemy->x,enemy->y,(int)0,_g,(int)8,null()));		HX_STACK_VAR(txt,"txt");
		HX_STACK_LINE(353)
		txt->__get((int)0).StaticCast< ::flixel::text::FlxText >()->setFormat(HX_CSTRING("assets/CoasterBoy.ttf"),(int)8,(int)-14662095,HX_CSTRING("center"),null(),null(),null());
		struct _Function_1_1{
			inline static Dynamic Block( ::Enemy &enemy){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","PlayState.hx",354,0xb30d7781)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("y") , (enemy->y - ((int)20 * ::PlayState_obj::gravityFactor)),false);
					return __result;
				}
				return null();
			}
		};
		struct _Function_1_2{
			inline static Dynamic Block( Array< ::Dynamic > &txt){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","PlayState.hx",354,0xb30d7781)
				{
					hx::Anon __result = hx::Anon_obj::Create();

					HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,Array< ::Dynamic >,txt)
					Void run(::flixel::tweens::FlxTween Tween){
						HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","PlayState.hx",354,0xb30d7781)
						HX_STACK_ARG(Tween,"Tween")
						{
							HX_STACK_LINE(354)
							txt->__get((int)0).StaticCast< ::flixel::text::FlxText >()->destroy();
						}
						return null();
					}
					HX_END_LOCAL_FUNC1((void))

					__result->Add(HX_CSTRING("complete") ,  Dynamic(new _Function_2_1(txt)),true);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(354)
		::flixel::tweens::FlxTween_obj::tween(txt->__get((int)0).StaticCast< ::flixel::text::FlxText >(),_Function_1_1::Block(enemy),0.8,_Function_1_2::Block(txt));
		HX_STACK_LINE(355)
		this->add(txt->__get((int)0).StaticCast< ::flixel::text::FlxText >());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(PlayState_obj,showScoreGet,(void))

Void PlayState_obj::addEnemy( Dynamic __o_num){
Dynamic num = __o_num.Default(1);
	HX_STACK_FRAME("PlayState","addEnemy",0x989bbf98,"PlayState.addEnemy","PlayState.hx",358,0xb30d7781)
	HX_STACK_THIS(this)
	HX_STACK_ARG(num,"num")
{
		HX_STACK_LINE(359)
		if ((this->_isTutorial)){
			HX_STACK_LINE(359)
			return null();
		}
		HX_STACK_LINE(360)
		{
			HX_STACK_LINE(360)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(360)
			while((true)){
				HX_STACK_LINE(360)
				if ((!(((_g < num))))){
					HX_STACK_LINE(360)
					break;
				}
				HX_STACK_LINE(360)
				int i = (_g)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(361)
				bool _g1;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(361)
				{
					HX_STACK_LINE(361)
					Float Chance = (int)50;		HX_STACK_VAR(Chance,"Chance");
					HX_STACK_LINE(361)
					Float _g2 = ::flixel::util::FlxRandom_obj::floatRanged((int)0,(int)100,null());		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(361)
					_g1 = (_g2 < Chance);
				}
				HX_STACK_LINE(361)
				bool _g3;		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(361)
				{
					HX_STACK_LINE(361)
					Float Chance = (int)50;		HX_STACK_VAR(Chance,"Chance");
					HX_STACK_LINE(361)
					Float _g2 = ::flixel::util::FlxRandom_obj::floatRanged((int)0,(int)100,null());		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(361)
					_g3 = (_g2 < Chance);
				}
				HX_STACK_LINE(361)
				Float _g4 = ::flixel::util::FlxRandom_obj::floatRanged((int)0,(int)100,null());		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(361)
				bool _g5 = (_g4 < ((int)100 - (::PlayState_obj::level * (int)5)));		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(361)
				::Enemy enemy = ::Enemy_obj::__new((int)0,(int)0,_g1,_g3,_g5);		HX_STACK_VAR(enemy,"enemy");
				HX_STACK_LINE(362)
				this->_grpEnemy->add(enemy);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(PlayState_obj,addEnemy,(void))

Void PlayState_obj::resetComboFactor( ){
{
		HX_STACK_FRAME("PlayState","resetComboFactor",0x87a5965f,"PlayState.resetComboFactor","PlayState.hx",368,0xb30d7781)
		HX_STACK_THIS(this)
		HX_STACK_LINE(368)
		this->comboFactor = (int)1;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(PlayState_obj,resetComboFactor,(void))

Void PlayState_obj::endGame( ){
{
		HX_STACK_FRAME("PlayState","endGame",0x70c4d75c,"PlayState.endGame","PlayState.hx",372,0xb30d7781)
		HX_STACK_THIS(this)
		HX_STACK_LINE(372)
		::flixel::FlxSubState SubState = ::SubEnd_obj::__new(this->_scoreValue);		HX_STACK_VAR(SubState,"SubState");
		HX_STACK_LINE(372)
		this->_requestSubStateReset = true;
		HX_STACK_LINE(372)
		this->_requestedSubState = SubState;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(PlayState_obj,endGame,(void))

Void PlayState_obj::killPlayer( ::flixel::FlxObject p,::flixel::FlxObject e){
{
		HX_STACK_FRAME("PlayState","killPlayer",0x88e03f10,"PlayState.killPlayer","PlayState.hx",375,0xb30d7781)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p,"p")
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(376)
		if ((this->_soundOn)){
			HX_STACK_LINE(377)
			this->_sndHit->play(null());
		}
		HX_STACK_LINE(379)
		if ((this->_musicOn)){
			HX_STACK_LINE(380)
			::flixel::system::FlxSound _this = this->_sndMusic;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(380)
			_this->cleanup(_this->autoDestroy,true,true);
			HX_STACK_LINE(380)
			_this;
		}
		HX_STACK_LINE(382)
		this->_player->destroy();
		HX_STACK_LINE(383)
		this->endGame();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(PlayState_obj,killPlayer,(void))

Void PlayState_obj::nextTutStep( ){
{
		HX_STACK_FRAME("PlayState","nextTutStep",0x80c3297b,"PlayState.nextTutStep","PlayState.hx",386,0xb30d7781)
		HX_STACK_THIS(this)
		HX_STACK_LINE(387)
		(this->_tutStep)++;
		HX_STACK_LINE(388)
		{
			HX_STACK_LINE(388)
			int _g = this->_tutStep;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(388)
			switch( (int)(_g)){
				case (int)2: {
					HX_STACK_LINE(390)
					this->_txtTutorial->set_text(HX_CSTRING("LEFT AND RIGHT\n\nOR A AND D\n\nTO MOVE!"));
				}
				;break;
				case (int)3: {
					HX_STACK_LINE(393)
					this->_txtTutorial->set_text(HX_CSTRING("PRESS SPACE TO\n\n FLIP GRAVITY!"));
				}
				;break;
				case (int)4: {
					HX_STACK_LINE(396)
					this->_txtTutorial->set_text(HX_CSTRING("LAND ON THE\n\nENEMY!"));
					HX_STACK_LINE(398)
					::Enemy e = ::Enemy_obj::__new((int)0,(int)0,true,true,true);		HX_STACK_VAR(e,"e");
					HX_STACK_LINE(399)
					this->_grpEnemy->add(e);
				}
				;break;
				case (int)5: {
					HX_STACK_LINE(402)
					this->_txtTutorial->set_text(HX_CSTRING("THESE ENEMIES\n\nARE AFFECTED\n\nBY GRAVITY!"));
					HX_STACK_LINE(404)
					::Enemy e = ::Enemy_obj::__new((int)0,(int)0,true,true,false);		HX_STACK_VAR(e,"e");
					HX_STACK_LINE(405)
					this->_grpEnemy->add(e);
				}
				;break;
				case (int)6: {
					HX_STACK_LINE(409)
					this->_txtTutorial->set_text(HX_CSTRING("WATCH OUT FOR\n\nTHE SPIKES WHEN\n\nFLIPPING!"));
					HX_STACK_LINE(410)
					::Spikeball sb = ::Spikeball_obj::__new((int)64,(int)128,false);		HX_STACK_VAR(sb,"sb");
					HX_STACK_LINE(411)
					this->_grpSpikeball->add(sb);
					HX_STACK_LINE(412)
					::Spikeball sb2 = ::Spikeball_obj::__new((::flixel::FlxG_obj::width - (int)96),(int)128,false);		HX_STACK_VAR(sb2,"sb2");
					HX_STACK_LINE(413)
					this->_grpSpikeball->add(sb2);
				}
				;break;
				case (int)7: {
					HX_STACK_LINE(417)
					this->_txtTutorial->set_text(HX_CSTRING("KILL MULTIPLE\n\nENEMIES IN ONE GO\n\nFOR A COMBO!"));
					HX_STACK_LINE(419)
					::Enemy e1 = ::Enemy_obj::__new((int)0,(int)32,false,true,true);		HX_STACK_VAR(e1,"e1");
					HX_STACK_LINE(420)
					::Enemy e2 = ::Enemy_obj::__new((int)0,(int)32,false,false,true);		HX_STACK_VAR(e2,"e2");
					HX_STACK_LINE(422)
					this->_grpEnemy->add(e1);
					HX_STACK_LINE(423)
					this->_grpEnemy->add(e2);
				}
				;break;
				case (int)8: {
					HX_STACK_LINE(426)
					this->_txtTutorial->set_text(HX_CSTRING("THE LONGER THE\n\nCOMBO THE MORE\n\nPOINTS YOU GET\n\nFOR EACH ENEMY!"));
				}
				;break;
				case (int)9: {
					HX_STACK_LINE(429)
					this->_txtTutorial->set_text(HX_CSTRING("TOUCHING THE\n\nFLOOR OR\n\nCEILING WILL\n\nEND THE COMBO!"));
				}
				;break;
				case (int)10: {
					HX_STACK_LINE(432)
					this->_txtPressN->destroy();
					HX_STACK_LINE(433)
					this->_txtTutorial->set_text(HX_CSTRING("PRESS ENTER TO\n\nBEGIN!\n\n\n\nGET THAT HIGH\n\nSCORE!"));
				}
				;break;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(PlayState_obj,nextTutStep,(void))

int PlayState_obj::TILESIZE;

int PlayState_obj::level;

bool PlayState_obj::gravityFlipped;

int PlayState_obj::gravityFactor;


PlayState_obj::PlayState_obj()
{
}

void PlayState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PlayState);
	HX_MARK_MEMBER_NAME(_txtScore,"_txtScore");
	HX_MARK_MEMBER_NAME(_scoreValue,"_scoreValue");
	HX_MARK_MEMBER_NAME(_sprBackground,"_sprBackground");
	HX_MARK_MEMBER_NAME(_space,"_space");
	HX_MARK_MEMBER_NAME(_space2,"_space2");
	HX_MARK_MEMBER_NAME(_floor,"_floor");
	HX_MARK_MEMBER_NAME(_ceiling,"_ceiling");
	HX_MARK_MEMBER_NAME(_wallLeft,"_wallLeft");
	HX_MARK_MEMBER_NAME(_wallRight,"_wallRight");
	HX_MARK_MEMBER_NAME(_grpRoom,"_grpRoom");
	HX_MARK_MEMBER_NAME(_grpFloorCeiling,"_grpFloorCeiling");
	HX_MARK_MEMBER_NAME(_grpWalls,"_grpWalls");
	HX_MARK_MEMBER_NAME(_arrows,"_arrows");
	HX_MARK_MEMBER_NAME(_grpEnemy,"_grpEnemy");
	HX_MARK_MEMBER_NAME(_grpSpikeball,"_grpSpikeball");
	HX_MARK_MEMBER_NAME(_player,"_player");
	HX_MARK_MEMBER_NAME(comboFactor,"comboFactor");
	HX_MARK_MEMBER_NAME(_musicOn,"_musicOn");
	HX_MARK_MEMBER_NAME(_soundOn,"_soundOn");
	HX_MARK_MEMBER_NAME(_sndBounce,"_sndBounce");
	HX_MARK_MEMBER_NAME(_sndHit,"_sndHit");
	HX_MARK_MEMBER_NAME(_sndMusic,"_sndMusic");
	HX_MARK_MEMBER_NAME(_isTutorial,"_isTutorial");
	HX_MARK_MEMBER_NAME(_txtTutorial,"_txtTutorial");
	HX_MARK_MEMBER_NAME(_window,"_window");
	HX_MARK_MEMBER_NAME(_tutStep,"_tutStep");
	HX_MARK_MEMBER_NAME(_txtPressN,"_txtPressN");
	::flixel::FlxState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void PlayState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_txtScore,"_txtScore");
	HX_VISIT_MEMBER_NAME(_scoreValue,"_scoreValue");
	HX_VISIT_MEMBER_NAME(_sprBackground,"_sprBackground");
	HX_VISIT_MEMBER_NAME(_space,"_space");
	HX_VISIT_MEMBER_NAME(_space2,"_space2");
	HX_VISIT_MEMBER_NAME(_floor,"_floor");
	HX_VISIT_MEMBER_NAME(_ceiling,"_ceiling");
	HX_VISIT_MEMBER_NAME(_wallLeft,"_wallLeft");
	HX_VISIT_MEMBER_NAME(_wallRight,"_wallRight");
	HX_VISIT_MEMBER_NAME(_grpRoom,"_grpRoom");
	HX_VISIT_MEMBER_NAME(_grpFloorCeiling,"_grpFloorCeiling");
	HX_VISIT_MEMBER_NAME(_grpWalls,"_grpWalls");
	HX_VISIT_MEMBER_NAME(_arrows,"_arrows");
	HX_VISIT_MEMBER_NAME(_grpEnemy,"_grpEnemy");
	HX_VISIT_MEMBER_NAME(_grpSpikeball,"_grpSpikeball");
	HX_VISIT_MEMBER_NAME(_player,"_player");
	HX_VISIT_MEMBER_NAME(comboFactor,"comboFactor");
	HX_VISIT_MEMBER_NAME(_musicOn,"_musicOn");
	HX_VISIT_MEMBER_NAME(_soundOn,"_soundOn");
	HX_VISIT_MEMBER_NAME(_sndBounce,"_sndBounce");
	HX_VISIT_MEMBER_NAME(_sndHit,"_sndHit");
	HX_VISIT_MEMBER_NAME(_sndMusic,"_sndMusic");
	HX_VISIT_MEMBER_NAME(_isTutorial,"_isTutorial");
	HX_VISIT_MEMBER_NAME(_txtTutorial,"_txtTutorial");
	HX_VISIT_MEMBER_NAME(_window,"_window");
	HX_VISIT_MEMBER_NAME(_tutStep,"_tutStep");
	HX_VISIT_MEMBER_NAME(_txtPressN,"_txtPressN");
	::flixel::FlxState_obj::__Visit(HX_VISIT_ARG);
}

Dynamic PlayState_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"level") ) { return level; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_space") ) { return _space; }
		if (HX_FIELD_EQ(inName,"_floor") ) { return _floor; }
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_space2") ) { return _space2; }
		if (HX_FIELD_EQ(inName,"_arrows") ) { return _arrows; }
		if (HX_FIELD_EQ(inName,"_player") ) { return _player; }
		if (HX_FIELD_EQ(inName,"_sndHit") ) { return _sndHit; }
		if (HX_FIELD_EQ(inName,"_window") ) { return _window; }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"endGame") ) { return endGame_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"TILESIZE") ) { return TILESIZE; }
		if (HX_FIELD_EQ(inName,"_ceiling") ) { return _ceiling; }
		if (HX_FIELD_EQ(inName,"_grpRoom") ) { return _grpRoom; }
		if (HX_FIELD_EQ(inName,"_musicOn") ) { return _musicOn; }
		if (HX_FIELD_EQ(inName,"_soundOn") ) { return _soundOn; }
		if (HX_FIELD_EQ(inName,"_tutStep") ) { return _tutStep; }
		if (HX_FIELD_EQ(inName,"addEnemy") ) { return addEnemy_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_txtScore") ) { return _txtScore; }
		if (HX_FIELD_EQ(inName,"_wallLeft") ) { return _wallLeft; }
		if (HX_FIELD_EQ(inName,"_grpWalls") ) { return _grpWalls; }
		if (HX_FIELD_EQ(inName,"_grpEnemy") ) { return _grpEnemy; }
		if (HX_FIELD_EQ(inName,"_sndMusic") ) { return _sndMusic; }
		if (HX_FIELD_EQ(inName,"onOverlap") ) { return onOverlap_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_wallRight") ) { return _wallRight; }
		if (HX_FIELD_EQ(inName,"_sndBounce") ) { return _sndBounce; }
		if (HX_FIELD_EQ(inName,"_txtPressN") ) { return _txtPressN; }
		if (HX_FIELD_EQ(inName,"addToScore") ) { return addToScore_dyn(); }
		if (HX_FIELD_EQ(inName,"killPlayer") ) { return killPlayer_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_scoreValue") ) { return _scoreValue; }
		if (HX_FIELD_EQ(inName,"comboFactor") ) { return comboFactor; }
		if (HX_FIELD_EQ(inName,"_isTutorial") ) { return _isTutorial; }
		if (HX_FIELD_EQ(inName,"flipGravity") ) { return flipGravity_dyn(); }
		if (HX_FIELD_EQ(inName,"nextTutStep") ) { return nextTutStep_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_txtTutorial") ) { return _txtTutorial; }
		if (HX_FIELD_EQ(inName,"showScoreGet") ) { return showScoreGet_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"gravityFactor") ) { return gravityFactor; }
		if (HX_FIELD_EQ(inName,"_grpSpikeball") ) { return _grpSpikeball; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"gravityFlipped") ) { return gravityFlipped; }
		if (HX_FIELD_EQ(inName,"_sprBackground") ) { return _sprBackground; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_grpFloorCeiling") ) { return _grpFloorCeiling; }
		if (HX_FIELD_EQ(inName,"resetComboFactor") ) { return resetComboFactor_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"updateScoreDisplay") ) { return updateScoreDisplay_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic PlayState_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"level") ) { level=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_space") ) { _space=inValue.Cast< ::flixel::addons::display::FlxBackdrop >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_floor") ) { _floor=inValue.Cast< ::flixel::FlxSprite >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_space2") ) { _space2=inValue.Cast< ::flixel::addons::display::FlxBackdrop >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_arrows") ) { _arrows=inValue.Cast< ::flixel::FlxSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_player") ) { _player=inValue.Cast< ::Player >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_sndHit") ) { _sndHit=inValue.Cast< ::flixel::system::FlxSound >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_window") ) { _window=inValue.Cast< ::flixel::FlxSprite >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"TILESIZE") ) { TILESIZE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ceiling") ) { _ceiling=inValue.Cast< ::flixel::FlxSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_grpRoom") ) { _grpRoom=inValue.Cast< ::flixel::group::FlxTypedGroup >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_musicOn") ) { _musicOn=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_soundOn") ) { _soundOn=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_tutStep") ) { _tutStep=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_txtScore") ) { _txtScore=inValue.Cast< ::flixel::text::FlxText >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_wallLeft") ) { _wallLeft=inValue.Cast< ::flixel::FlxSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_grpWalls") ) { _grpWalls=inValue.Cast< ::flixel::group::FlxTypedGroup >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_grpEnemy") ) { _grpEnemy=inValue.Cast< ::flixel::group::FlxTypedGroup >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_sndMusic") ) { _sndMusic=inValue.Cast< ::flixel::system::FlxSound >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_wallRight") ) { _wallRight=inValue.Cast< ::flixel::FlxSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_sndBounce") ) { _sndBounce=inValue.Cast< ::flixel::system::FlxSound >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_txtPressN") ) { _txtPressN=inValue.Cast< ::flixel::text::FlxText >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_scoreValue") ) { _scoreValue=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"comboFactor") ) { comboFactor=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_isTutorial") ) { _isTutorial=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_txtTutorial") ) { _txtTutorial=inValue.Cast< ::flixel::text::FlxText >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"gravityFactor") ) { gravityFactor=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_grpSpikeball") ) { _grpSpikeball=inValue.Cast< ::flixel::group::FlxTypedGroup >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"gravityFlipped") ) { gravityFlipped=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_sprBackground") ) { _sprBackground=inValue.Cast< ::flixel::FlxSprite >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_grpFloorCeiling") ) { _grpFloorCeiling=inValue.Cast< ::flixel::group::FlxTypedGroup >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void PlayState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_txtScore"));
	outFields->push(HX_CSTRING("_scoreValue"));
	outFields->push(HX_CSTRING("_sprBackground"));
	outFields->push(HX_CSTRING("_space"));
	outFields->push(HX_CSTRING("_space2"));
	outFields->push(HX_CSTRING("_floor"));
	outFields->push(HX_CSTRING("_ceiling"));
	outFields->push(HX_CSTRING("_wallLeft"));
	outFields->push(HX_CSTRING("_wallRight"));
	outFields->push(HX_CSTRING("_grpRoom"));
	outFields->push(HX_CSTRING("_grpFloorCeiling"));
	outFields->push(HX_CSTRING("_grpWalls"));
	outFields->push(HX_CSTRING("_arrows"));
	outFields->push(HX_CSTRING("_grpEnemy"));
	outFields->push(HX_CSTRING("_grpSpikeball"));
	outFields->push(HX_CSTRING("_player"));
	outFields->push(HX_CSTRING("comboFactor"));
	outFields->push(HX_CSTRING("_musicOn"));
	outFields->push(HX_CSTRING("_soundOn"));
	outFields->push(HX_CSTRING("_sndBounce"));
	outFields->push(HX_CSTRING("_sndHit"));
	outFields->push(HX_CSTRING("_sndMusic"));
	outFields->push(HX_CSTRING("_isTutorial"));
	outFields->push(HX_CSTRING("_txtTutorial"));
	outFields->push(HX_CSTRING("_window"));
	outFields->push(HX_CSTRING("_tutStep"));
	outFields->push(HX_CSTRING("_txtPressN"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("TILESIZE"),
	HX_CSTRING("level"),
	HX_CSTRING("gravityFlipped"),
	HX_CSTRING("gravityFactor"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::text::FlxText*/ ,(int)offsetof(PlayState_obj,_txtScore),HX_CSTRING("_txtScore")},
	{hx::fsInt,(int)offsetof(PlayState_obj,_scoreValue),HX_CSTRING("_scoreValue")},
	{hx::fsObject /*::flixel::FlxSprite*/ ,(int)offsetof(PlayState_obj,_sprBackground),HX_CSTRING("_sprBackground")},
	{hx::fsObject /*::flixel::addons::display::FlxBackdrop*/ ,(int)offsetof(PlayState_obj,_space),HX_CSTRING("_space")},
	{hx::fsObject /*::flixel::addons::display::FlxBackdrop*/ ,(int)offsetof(PlayState_obj,_space2),HX_CSTRING("_space2")},
	{hx::fsObject /*::flixel::FlxSprite*/ ,(int)offsetof(PlayState_obj,_floor),HX_CSTRING("_floor")},
	{hx::fsObject /*::flixel::FlxSprite*/ ,(int)offsetof(PlayState_obj,_ceiling),HX_CSTRING("_ceiling")},
	{hx::fsObject /*::flixel::FlxSprite*/ ,(int)offsetof(PlayState_obj,_wallLeft),HX_CSTRING("_wallLeft")},
	{hx::fsObject /*::flixel::FlxSprite*/ ,(int)offsetof(PlayState_obj,_wallRight),HX_CSTRING("_wallRight")},
	{hx::fsObject /*::flixel::group::FlxTypedGroup*/ ,(int)offsetof(PlayState_obj,_grpRoom),HX_CSTRING("_grpRoom")},
	{hx::fsObject /*::flixel::group::FlxTypedGroup*/ ,(int)offsetof(PlayState_obj,_grpFloorCeiling),HX_CSTRING("_grpFloorCeiling")},
	{hx::fsObject /*::flixel::group::FlxTypedGroup*/ ,(int)offsetof(PlayState_obj,_grpWalls),HX_CSTRING("_grpWalls")},
	{hx::fsObject /*::flixel::FlxSprite*/ ,(int)offsetof(PlayState_obj,_arrows),HX_CSTRING("_arrows")},
	{hx::fsObject /*::flixel::group::FlxTypedGroup*/ ,(int)offsetof(PlayState_obj,_grpEnemy),HX_CSTRING("_grpEnemy")},
	{hx::fsObject /*::flixel::group::FlxTypedGroup*/ ,(int)offsetof(PlayState_obj,_grpSpikeball),HX_CSTRING("_grpSpikeball")},
	{hx::fsObject /*::Player*/ ,(int)offsetof(PlayState_obj,_player),HX_CSTRING("_player")},
	{hx::fsInt,(int)offsetof(PlayState_obj,comboFactor),HX_CSTRING("comboFactor")},
	{hx::fsBool,(int)offsetof(PlayState_obj,_musicOn),HX_CSTRING("_musicOn")},
	{hx::fsBool,(int)offsetof(PlayState_obj,_soundOn),HX_CSTRING("_soundOn")},
	{hx::fsObject /*::flixel::system::FlxSound*/ ,(int)offsetof(PlayState_obj,_sndBounce),HX_CSTRING("_sndBounce")},
	{hx::fsObject /*::flixel::system::FlxSound*/ ,(int)offsetof(PlayState_obj,_sndHit),HX_CSTRING("_sndHit")},
	{hx::fsObject /*::flixel::system::FlxSound*/ ,(int)offsetof(PlayState_obj,_sndMusic),HX_CSTRING("_sndMusic")},
	{hx::fsBool,(int)offsetof(PlayState_obj,_isTutorial),HX_CSTRING("_isTutorial")},
	{hx::fsObject /*::flixel::text::FlxText*/ ,(int)offsetof(PlayState_obj,_txtTutorial),HX_CSTRING("_txtTutorial")},
	{hx::fsObject /*::flixel::FlxSprite*/ ,(int)offsetof(PlayState_obj,_window),HX_CSTRING("_window")},
	{hx::fsInt,(int)offsetof(PlayState_obj,_tutStep),HX_CSTRING("_tutStep")},
	{hx::fsObject /*::flixel::text::FlxText*/ ,(int)offsetof(PlayState_obj,_txtPressN),HX_CSTRING("_txtPressN")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_txtScore"),
	HX_CSTRING("_scoreValue"),
	HX_CSTRING("_sprBackground"),
	HX_CSTRING("_space"),
	HX_CSTRING("_space2"),
	HX_CSTRING("_floor"),
	HX_CSTRING("_ceiling"),
	HX_CSTRING("_wallLeft"),
	HX_CSTRING("_wallRight"),
	HX_CSTRING("_grpRoom"),
	HX_CSTRING("_grpFloorCeiling"),
	HX_CSTRING("_grpWalls"),
	HX_CSTRING("_arrows"),
	HX_CSTRING("_grpEnemy"),
	HX_CSTRING("_grpSpikeball"),
	HX_CSTRING("_player"),
	HX_CSTRING("comboFactor"),
	HX_CSTRING("_musicOn"),
	HX_CSTRING("_soundOn"),
	HX_CSTRING("_sndBounce"),
	HX_CSTRING("_sndHit"),
	HX_CSTRING("_sndMusic"),
	HX_CSTRING("_isTutorial"),
	HX_CSTRING("_txtTutorial"),
	HX_CSTRING("_window"),
	HX_CSTRING("_tutStep"),
	HX_CSTRING("_txtPressN"),
	HX_CSTRING("create"),
	HX_CSTRING("destroy"),
	HX_CSTRING("update"),
	HX_CSTRING("flipGravity"),
	HX_CSTRING("onOverlap"),
	HX_CSTRING("addToScore"),
	HX_CSTRING("updateScoreDisplay"),
	HX_CSTRING("showScoreGet"),
	HX_CSTRING("addEnemy"),
	HX_CSTRING("resetComboFactor"),
	HX_CSTRING("endGame"),
	HX_CSTRING("killPlayer"),
	HX_CSTRING("nextTutStep"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PlayState_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(PlayState_obj::TILESIZE,"TILESIZE");
	HX_MARK_MEMBER_NAME(PlayState_obj::level,"level");
	HX_MARK_MEMBER_NAME(PlayState_obj::gravityFlipped,"gravityFlipped");
	HX_MARK_MEMBER_NAME(PlayState_obj::gravityFactor,"gravityFactor");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PlayState_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(PlayState_obj::TILESIZE,"TILESIZE");
	HX_VISIT_MEMBER_NAME(PlayState_obj::level,"level");
	HX_VISIT_MEMBER_NAME(PlayState_obj::gravityFlipped,"gravityFlipped");
	HX_VISIT_MEMBER_NAME(PlayState_obj::gravityFactor,"gravityFactor");
};

#endif

Class PlayState_obj::__mClass;

void PlayState_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("PlayState"), hx::TCanCast< PlayState_obj> ,sStaticFields,sMemberFields,
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

void PlayState_obj::__boot()
{
	TILESIZE= (int)16;
	level= (int)1;
	gravityFlipped= false;
	gravityFactor= (int)1;
}

