#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	int iLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	float fLocal_14 = 0f;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	int iLocal_17 = 0;
	char* sLocal_18 = NULL;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	float fLocal_21 = 0f;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	int iLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 1176255488;
	var uScriptParam_4 = 1;
	var uScriptParam_5 = -1;
	var uScriptParam_6 = -1;
#endregion
void __EntryFunction__()//Position - 0x0
{
	iLocal_2 = 1;
	iLocal_3 = 134;
	iLocal_4 = 134;
	iLocal_5 = 1;
	iLocal_6 = 1;
	iLocal_7 = 1;
	iLocal_8 = 134;
	iLocal_9 = 1;
	iLocal_10 = 12;
	iLocal_11 = 12;
	fLocal_14 = 0.001f;
	iLocal_17 = -1;
	sLocal_18 = "NULL";
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_35 = 3;
	func_43(&uScriptParam_44);
	while (true)
	{
		__LIB_0__::func_671();
		if (__LIB_25__::func_6())
		{
		}
		else
		{
			func_14();
		}
	}
	func_1();
}

void func_1()//Position - 0x85
{
	func_3(&uLocal_37);
	__LIB_0__::func_199();
}

void func_3(var uParam0)//Position - 0xA3
{
	struct<7> Var0;
	__LIB_7__::func_279(0, 1, 1, 0, 0, 0, 0);
	if (CAM::DOES_CAM_EXIST(uParam0->f_6))
	{
		CAM::DESTROY_CAM(uParam0->f_6, false);
	}
	PED::CLEAR_FACIAL_IDLE_ANIM_OVERRIDE(PLAYER::PLAYER_PED_ID());
	*uParam0 = { Var0 };
}

void func_14()//Position - 0x399
{
	if (func_15(&uLocal_37))
	{
		func_1();
	}
}

int func_15(var uParam0)//Position - 0x3AE
{
	HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
	HUD::THEFEED_HIDE_THIS_FRAME();
	__LIB_7__::func_167(1);
	HUD::DISABLE_FRONTEND_THIS_FRAME();
	__LIB_8__::func_611(0);
	if (HUD::IS_PAUSE_MENU_ACTIVE())
	{
		HUD::SET_PAUSE_MENU_ACTIVE(false);
	}
	switch (__LIB_0__::func_348(uParam0))
	{
		case 0:
			func_18(uParam0);
			break;
		case 1:
			func_16(uParam0);
			break;
		case 2:
			return 1;
	}
	return 0;
}

void func_16(var uParam0)//Position - 0x40C
{
	int iVar0;
	iVar0 = NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(uParam0->f_5);
	if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iVar0) >= 0.9f)
	{
		NETWORK::NETWORK_STOP_SYNCHRONISED_SCENE(uParam0->f_5);
		CAM::RENDER_SCRIPT_CAMS(false, true, 3000, true, false, 0);
		PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 2000, 0f, true, false);
		__LIB_1__::func_0(uParam0, 2);
	}
}

void func_18(var uParam0)//Position - 0x464
{
	char* sVar0;
	sVar0 = func_20();
	STREAMING::REQUEST_ANIM_DICT(sVar0);
	if (!STREAMING::HAS_ANIM_DICT_LOADED(sVar0))
	{
		return;
	}
	CAM::DO_SCREEN_FADE_IN(800);
	__LIB_1__::func_0(uParam0, 1);
	func_19(uParam0);
}

void func_19(var uParam0)//Position - 0x499
{
	char* sVar0;
	sVar0 = func_20();
	uParam0->f_5 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(uParam0->f_1, 0f, 0f, uParam0->f_4, 2, false, false, 1f, 0f, 1f);
	NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), uParam0->f_5, sVar0, "action", 1000f, -1.5f, 0, 0, 1000f, 0);
	NETWORK::NETWORK_START_SYNCHRONISED_SCENE(uParam0->f_5);
	PED::SET_FACIAL_IDLE_ANIM_OVERRIDE(PLAYER::PLAYER_PED_ID(), "HS4F_IG25_BEACH", 0);
	PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), false, false);
	uParam0->f_6 = CAM::CREATE_CAMERA(joaat("DEFAULT_ANIMATED_CAMERA"), true);
	CAM::PLAY_CAM_ANIM(uParam0->f_6, "action_camera", sVar0, uParam0->f_1, 0f, 0f, uParam0->f_4, false, 2);
	CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
	STREAMING::REMOVE_ANIM_DICT(sVar0);
}

char* func_20()//Position - 0x545
{
	if (__LIB_6__::func_925())
	{
		return "ANIM@SCRIPTED@HEIST@IG25_BEACH@HEELED@";
	}
	return "ANIM@SCRIPTED@HEIST@IG25_BEACH@MALE@";
}

void func_43(var uParam0)//Position - 0x91B
{
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(32, false, -1);
	func_44(&uLocal_37, *uParam0, uParam0->f_3);
}

void func_44(var uParam0, struct<3> Param1, var uParam2)//Position - 0x939
{
	func_46(uParam0, Param1);
	__LIB_0__::func_983(uParam0, uParam2);
	__LIB_7__::func_279(1, 1, 1, 0, 0, 0, 0);
	ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Param1, true, false, false, true);
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		STREAMING::LOAD_ALL_OBJECTS_NOW();
	}
}

void func_46(var uParam0, struct<3> Param1)//Position - 0x987
{
	uParam0->f_1 = { Param1 };
}

