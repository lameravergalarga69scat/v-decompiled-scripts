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
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	float fLocal_28 = 0f;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	int iLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	float fLocal_62 = 0f;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	struct<3> Local_94[32];
	var uLocal_95 = 0;
	struct<349> Local_96 = { 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 1069547520, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	struct<12> Local_100 = { 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	fLocal_23 = 80f;
	fLocal_24 = 140f;
	fLocal_25 = 180f;
	fLocal_28 = 0f;
	fLocal_32 = -0.0375f;
	fLocal_33 = 0.17f;
	iLocal_36 = 3;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_62 = ((0.05f + 0.275f) - 0.01f);
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_526(ScriptParam_100);
	}
	else
	{
		func_495(0);
	}
	while (true)
	{
		__LIB_0__::func_933();
		if (__LIB_0__::func_959())
		{
			func_495(0);
		}
		if (func_480())
		{
			func_495(0);
		}
		func_2();
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			__LIB_0__::func_467();
		}
	}
}

void func_2()//Position - 0xD7
{
	if (!func_479(6))
	{
		func_478();
		func_477();
		func_476();
		func_472();
		func_471();
	}
	func_468();
	func_466();
	func_462();
	func_459();
	if (func_479(0))
	{
		func_410();
	}
	else if (func_479(1))
	{
		if (!__LIB_4__::func_533())
		{
			func_402();
			func_385();
		}
		else
		{
			func_384(1);
			func_383(7);
		}
	}
	else if (func_479(2))
	{
		func_376();
	}
	else if (func_479(3))
	{
		func_368();
	}
	else if (func_479(4))
	{
		func_367();
		func_366();
		func_364();
		func_363();
		func_362();
		func_361();
		func_360();
		func_352();
		func_348();
		func_332();
		func_330();
		func_287();
		func_286();
		func_270();
		func_376();
		func_267();
		if (func_260(0))
		{
			func_259();
			return;
		}
		func_255();
		func_249();
		func_237(0);
		func_221();
		func_212();
		func_204();
		func_182();
		func_175();
		func_173();
		func_99();
		func_84();
		func_82();
		func_81();
	}
	else if (func_479(5))
	{
		func_33();
	}
	else if (func_479(7))
	{
		func_26();
	}
	if (!func_479(4) && !func_479(6))
	{
		func_20();
	}
	func_5();
	func_4();
	func_3();
}

void func_3()//Position - 0x22F
{
	Local_96.f_45++;
	if (Local_96.f_45 >= 32)
	{
		Local_96.f_45 = 0;
	}
}

void func_4()//Position - 0x24F
{
	if (Local_96.f_45 != -1)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_94[Local_96.f_45 /*3*/].f_2))
		{
			if (Global_1911933[PLAYER::PLAYER_ID() /*260*/].f_60[Local_96.f_45] != NETWORK::NET_TO_OBJ(Local_94[Local_96.f_45 /*3*/].f_2))
			{
				Global_1911933[PLAYER::PLAYER_ID() /*260*/].f_60[Local_96.f_45] = NETWORK::NET_TO_OBJ(Local_94[Local_96.f_45 /*3*/].f_2);
			}
		}
	}
}

void func_5()//Position - 0x2B5
{
	int iVar0;
	iVar0 = PLAYER::INT_TO_PLAYERINDEX(Local_96.f_45);
	if (PLAYER::PLAYER_ID() != iVar0)
	{
		if (__LIB_0__::func_156(iVar0, 1, 1))
		{
			if (__LIB_0__::func_121(__LIB_1__::func_777()))
			{
				if (BitTest(Local_96.f_7, Local_96.f_45))
				{
					if (!NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar0) && !NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT_ON_SCRIPT(iVar0, "AM_MP_DRONE", 0))
					{
						MISC::CLEAR_BIT(&(Local_96.f_7), Local_96.f_45);
					}
				}
				if (func_14(iVar0, 0))
				{
					if (!BitTest(Local_96.f_7, Local_96.f_45) && func_9(iVar0))
					{
						func_7(iVar0, 1);
						NETWORK::SET_NETWORK_ID_ALWAYS_EXISTS_FOR_PLAYER(Local_96.f_159, iVar0, true);
						MISC::SET_BIT(&(Local_96.f_7), Local_96.f_45);
					}
				}
				else if ((SYSTEM::VDIST2(__LIB_0__::func_85(iVar0), Local_96.f_150) > 504100f && !func_479(1)) && !func_479(3))
				{
					if (BitTest(Local_96.f_7, Local_96.f_45))
					{
						func_7(iVar0, 0);
						NETWORK::SET_NETWORK_ID_ALWAYS_EXISTS_FOR_PLAYER(Local_96.f_159, iVar0, false);
						MISC::CLEAR_BIT(&(Local_96.f_7), Local_96.f_45);
						MISC::CLEAR_BIT(&(Local_96.f_8), Local_96.f_45);
					}
				}
			}
			else if (func_14(iVar0, 1) && func_9(iVar0))
			{
				if (!BitTest(Local_96.f_8, Local_96.f_45))
				{
					func_7(iVar0, 1);
					MISC::SET_BIT(&(Local_96.f_8), Local_96.f_45);
				}
			}
			else if (BitTest(Local_96.f_8, Local_96.f_45))
			{
				func_7(iVar0, 0);
				MISC::CLEAR_BIT(&(Local_96.f_8), Local_96.f_45);
				MISC::CLEAR_BIT(&(Local_96.f_7), Local_96.f_45);
			}
		}
	}
}

void func_7(int iParam0, int iParam1)//Position - 0x438
{
	struct<3> Var0;
	int iVar1;
	Var0.f_0 = -922462511;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = iParam1;
	iVar1 = __LIB_0__::func_950(iParam0);
	if (!iVar1 == 0)
	{
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 3, iVar1);
	}
}

int func_9(int iParam0)//Position - 0x48A
{
	if (__LIB_1__::func_511(iParam0, 1, 1))
	{
		return 0;
	}
	if (__LIB_0__::func_890(iParam0))
	{
		return 0;
	}
	if (__LIB_1__::func_510(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_14(int iParam0, bool bParam1)//Position - 0x593
{
	struct<3> Var0;
	if (__LIB_1__::func_511(iParam0, 1, 1))
	{
		return 0;
	}
	if (__LIB_0__::func_890(iParam0))
	{
		return 0;
	}
	if (__LIB_1__::func_510(iParam0))
	{
		return 0;
	}
	Var0 = { __LIB_0__::func_85(iParam0) };
	if (bParam1)
	{
		if (func_16())
		{
			if (__LIB_0__::func_121(__LIB_3__::func_908()))
			{
				if (SYSTEM::VDIST2(Var0, ENTITY::GET_ENTITY_COORDS(__LIB_3__::func_908(), true)) < 490000f)
				{
					return 1;
				}
			}
		}
	}
	else if (SYSTEM::VDIST2(Var0, Local_96.f_150) < 490000f)
	{
		return 1;
	}
	return 0;
}

bool func_16()//Position - 0x666
{
	return BitTest(Global_1958711.f_2, 8);
}

void func_20()//Position - 0x712
{
	int iVar0;
	if (Local_96.f_156)
	{
		if (__LIB_0__::func_864(&(Local_96.f_249)))
		{
			if (func_24())
			{
				iVar0 = Global_262145.f_25339 /* Tunable: 1682810056 */;
			}
			else
			{
				iVar0 = Global_262145.f_24692 /* Tunable: BB_TERRORBYTE_DRONE_SHOCK_COOLDOWN_TIME */;
			}
			if (__LIB_0__::func_937(&(Local_96.f_249), iVar0, 0))
			{
				__LIB_0__::func_794(&(Local_96.f_249));
				Local_96.f_18 = 100;
				MISC::CLEAR_BIT(&(Local_96.f_5), 4);
				MISC::CLEAR_BIT(&(Local_96.f_5), 3);
				MISC::CLEAR_BIT(&(Local_96.f_5), 24);
				Local_96.f_156 = 0;
			}
		}
	}
}

bool func_24()//Position - 0x835
{
	return BitTest(Global_1958711.f_2, 2);
}

void func_26()//Position - 0x851
{
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_96.f_159))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_96.f_159))
		{
			if (!func_27())
			{
				func_495(1);
			}
			else
			{
				func_495(0);
			}
		}
		else
		{
			NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_96.f_159);
		}
	}
	else if (!func_27())
	{
		func_495(1);
	}
	else
	{
		func_495(0);
	}
}

int func_27()//Position - 0x8A8
{
	if (func_32())
	{
		return 1;
	}
	if (__LIB_12__::func_637())
	{
		return 1;
	}
	if (func_30() && __LIB_2__::func_573(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	return 0;
}

bool func_30()//Position - 0xDAD
{
	return BitTest(Global_1958711.f_2, 5);
}

bool func_32()//Position - 0xDCC
{
	return BitTest(Global_1958711, 16);
}

void func_33()//Position - 0xDDB
{
	int iVar0;
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
	HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 199 /*INPUT_FRONTEND_PAUSE*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 200 /*INPUT_FRONTEND_PAUSE_ALTERNATE*/, true);
	__LIB_10__::func_564();
	__LIB_0__::func_646();
	__LIB_1__::func_33(1);
	if (!BitTest(Local_96.f_5, 1))
	{
		if (!func_41() && !__LIB_6__::func_196())
		{
			if ((__LIB_32__::func_306() || func_24()) || func_38())
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
			}
		}
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_96.f_159))
		{
			ENTITY::SET_ENTITY_HAS_GRAVITY(NETWORK::NET_TO_OBJ(Local_96.f_159), true);
		}
		if (AUDIO::HAS_SOUND_FINISHED(Local_96.f_34))
		{
			Local_96.f_34 = AUDIO::GET_SOUND_ID();
			AUDIO::PLAY_SOUND_FRONTEND(Local_96.f_34, "HUD_Static_Loop", Local_96.f_157, true);
		}
		if (!__LIB_18__::func_749())
		{
			PAD::SET_CONTROL_SHAKE(0 /*PLAYER_CONTROL*/, 300, 100);
			GRAPHICS::SET_TIMECYCLE_MODIFIER(func_36());
			MISC::SET_BIT(&(Local_96.f_6), 0);
		}
		MISC::SET_BIT(&(Local_96.f_5), 1);
	}
	else if (!__LIB_0__::func_864(&(Local_96.f_245)))
	{
		__LIB_0__::func_795(&(Local_96.f_245), 0, 0);
	}
	else
	{
		iVar0 = 1000;
		if (func_35())
		{
			iVar0 = 500;
		}
		else if (func_16() && __LIB_3__::func_909())
		{
			iVar0 = 150;
		}
		if (__LIB_0__::func_937(&(Local_96.f_245), iVar0, 0) || __LIB_18__::func_749())
		{
			if (Local_96.f_38 == -1)
			{
				if (AUDIO::HAS_SOUND_FINISHED(Local_96.f_38))
				{
					Local_96.f_38 = AUDIO::GET_SOUND_ID();
					AUDIO::PLAY_SOUND_FRONTEND(Local_96.f_38, "HUD_Disconnect", Local_96.f_157, true);
				}
			}
			func_384(1);
			func_383(7);
		}
	}
}

bool func_35()//Position - 0xF5B
{
	return BitTest(Global_1958711.f_2, 4);
}

char* func_36()//Position - 0xF6B
{
	if (func_16())
	{
		return "MissileOutOfRange";
	}
	return "RemixDrone";
}

bool func_38()//Position - 0xF92
{
	return BitTest(Global_1958711.f_2, 3);
}

int func_41()//Position - 0xFBD
{
	if ((__LIB_0__::func_891(PLAYER::PLAYER_ID(), 0) && Global_1581350 == 1) && func_42())
	{
		return 1;
	}
	return 0;
}

int func_42()//Position - 0xFEA
{
	char* sVar0;
	if ((Global_1581350 != -1 || Global_1581356 != -1) || Global_1581359 != -1)
	{
		sVar0 = "anim@scripted@submarine@ig28_submarine_turret_control@male@";
		if (__LIB_1__::func_365(PLAYER::PLAYER_PED_ID()))
		{
			sVar0 = "anim@scripted@submarine@ig28_submarine_turret_control@heeled@";
		}
		if ((((((((ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "enter", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "enter_left", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "exit", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "exit_left", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), sVar0, "enter_left", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), sVar0, "enter", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), sVar0, "exit", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), sVar0, "exit_left", 3)) || __LIB_6__::func_572(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_GO_STRAIGHT_TO_COORD")))
		{
			return 0;
		}
		if (((((((((!ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "base", 3) && !ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "computer_enter", 3)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "computer_exit", 3)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "COMPUTER_idle", 3)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "COMPUTER_idle_control", 3)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "COMPUTER_enter_control", 3)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), sVar0, "base", 3)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), sVar0, "idle_a", 3)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), sVar0, "idle_b", 3)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), sVar0, "idle_c", 3))
		{
			return 0;
		}
		if (__LIB_12__::func_395())
		{
			return 0;
		}
	}
	return 1;
}

void func_81()//Position - 0x2418
{
	if (func_30())
	{
		if (__LIB_12__::func_637())
		{
			if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
			{
				PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 124, true);
			}
		}
	}
}

void func_82()//Position - 0x2444
{
	char* sVar0;
	if (!func_83())
	{
		return;
	}
	sVar0 = "scr_xs_props";
	STREAMING::REQUEST_NAMED_PTFX_ASSET(sVar0);
	if (STREAMING::HAS_NAMED_PTFX_ASSET_LOADED(sVar0))
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_96.f_159))
		{
			if (!GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(Local_96.f_174[PLAYER::PLAYER_ID()]))
			{
				GRAPHICS::USE_PARTICLE_FX_ASSET(sVar0);
				if (func_35())
				{
					Local_96.f_174[PLAYER::PLAYER_ID()] = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_xs_guided_missile_trail", NETWORK::NET_TO_OBJ(Local_96.f_159), 0f, 0f, 0f, 0f, 0f, 0f, 1f, false, false, false);
				}
				else
				{
					Local_96.f_174[PLAYER::PLAYER_ID()] = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_xs_guided_missile_trail", NETWORK::NET_TO_OBJ(Local_96.f_159), 0f, 0.25f, 0f, 0f, 0f, 0f, 3f, false, false, false);
				}
			}
		}
	}
}

int func_83()//Position - 0x24E9
{
	if (func_35())
	{
		return 1;
	}
	if (func_16())
	{
		return 1;
	}
	return 0;
}

void func_84()//Position - 0x2508
{
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_96.f_159))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Local_96.f_161))
		{
			STREAMING::REQUEST_MODEL(func_98());
			if (STREAMING::HAS_MODEL_LOADED(func_98()))
			{
				if (!BitTest(Local_96.f_5, 6))
				{
					if (__LIB_2__::func_852(NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(false, 0) + 1, 0, 1))
					{
						NETWORK::RESERVE_NETWORK_MISSION_PEDS(NETWORK::GET_NUM_CREATED_MISSION_PEDS(false) + 1);
						MISC::SET_BIT(&(Local_96.f_5), 6);
					}
				}
				else if (NETWORK::CAN_REGISTER_MISSION_PEDS(1))
				{
					Local_96.f_161 = PED::CREATE_PED(26, func_98(), Local_96.f_150, ENTITY::GET_ENTITY_HEADING(NETWORK::NET_TO_OBJ(Local_96.f_159)), false, false);
					ENTITY::SET_ENTITY_INVINCIBLE(Local_96.f_161, true);
					ENTITY::SET_ENTITY_VISIBLE(Local_96.f_161, false, false);
					ENTITY::SET_ENTITY_HAS_GRAVITY(Local_96.f_161, false);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_96.f_161, true);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_98());
					PED::SET_PED_CONFIG_FLAG(Local_96.f_161, 118, false);
					PED::SET_PED_CONFIG_FLAG(Local_96.f_161, 108, true);
					PED::SET_PED_CONFIG_FLAG(Local_96.f_161, 208, true);
					ENTITY::SET_ENTITY_PROOFS(Local_96.f_161, true, true, true, true, true, false, false, false);
					ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_96.f_161, NETWORK::NET_TO_OBJ(Local_96.f_159), -1, 0f, 0f, -0.25f, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
					ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(Local_96.f_161, false, false);
					Global_1958711.f_23 = Local_96.f_161;
				}
			}
		}
		else if (__LIB_0__::func_121(Local_96.f_161))
		{
			if (ENTITY::IS_ENTITY_VISIBLE(Local_96.f_161))
			{
				ENTITY::SET_ENTITY_VISIBLE(Local_96.f_161, false, false);
			}
			if (!__LIB_0__::func_428(PLAYER::PLAYER_ID()) && !__LIB_33__::func_708(PLAYER::PLAYER_ID()))
			{
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
				{
					__LIB_25__::func_516(Global_1837205);
				}
			}
			else if ((Global_1958711.f_4 == -1 || Global_1958711.f_4 == 0) || Global_1958711.f_4 == Global_1837194)
			{
				__LIB_25__::func_516(Global_1837205);
			}
			if (PED::GET_PED_RELATIONSHIP_GROUP_DEFAULT_HASH(Local_96.f_161) != __LIB_25__::func_517())
			{
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_96.f_161, __LIB_25__::func_517());
			}
			if (!ENTITY::IS_ENTITY_ATTACHED(Local_96.f_161))
			{
				ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_96.f_161, NETWORK::NET_TO_OBJ(Local_96.f_159), -1, 0f, 0f, -0.25f, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
				ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(Local_96.f_161, false, false);
			}
		}
	}
}

int func_98()//Position - 0x2A19
{
	return joaat("G_M_M_ChiGoon_01");
}

void func_99()//Position - 0x2A26
{
	if (__LIB_32__::func_307())
	{
		return;
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_96.f_159) && !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_OBJ(Local_96.f_159), false))
	{
		if (CAM::DOES_CAM_EXIST(Local_96.f_169) && CAM::IS_CAM_RENDERING(Local_96.f_169))
		{
			if (!func_83())
			{
				func_163();
				func_131();
			}
			else
			{
				func_112();
				func_102();
			}
			RECORDING::REPLAY_DISABLE_CAMERA_MOVEMENT_THIS_FRAME();
			__LIB_0__::func_876(1);
			__LIB_1__::func_10(2);
		}
	}
}

void func_102()//Position - 0x2AB6
{
	int iVar0;
	if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Local_96.f_170))
	{
		if (func_16())
		{
			Local_96.f_170 = func_111();
		}
		else
		{
			Local_96.f_170 = func_110();
		}
		return;
	}
	iVar0 = __LIB_1__::func_777();
	if (iVar0 < 0 || !__LIB_0__::func_121(iVar0))
	{
		return;
	}
	if (func_16())
	{
		func_106();
	}
	__LIB_40__::func_938(Local_96.f_170, 0);
	__LIB_40__::func_937(Local_96.f_170, 3, 3, 3);
	__LIB_40__::func_936(Local_96.f_170, 0f, 0f, 0f, 0f, (ENTITY::GET_ENTITY_HEADING(iVar0) + 180f));
	GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(1);
	GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(Local_96.f_170, 255, 255, 255, 0, 0);
}

void func_106()//Position - 0x2BCA
{
	int iVar0;
	float fVar1;
	iVar0 = 1;
	if (func_16())
	{
		iVar0 = 10;
	}
	fVar1 = Local_96.f_120;
	if (fVar1 >= (func_109() - IntToFloat((50 * iVar0))))
	{
		if (AUDIO::HAS_SOUND_FINISHED(Local_96.f_37))
		{
			Local_96.f_37 = AUDIO::GET_SOUND_ID();
			AUDIO::PLAY_SOUND_FRONTEND(Local_96.f_37, "Out_Of_Bounds_Alarm_Loop", Local_96.f_157, true);
		}
		if (fVar1 >= (func_109() - IntToFloat((50 * iVar0))) && fVar1 < (func_109() - IntToFloat((45 * iVar0))))
		{
			func_108("SET_WARNING_IS_VISIBLE", 1);
			func_107(0.1f);
		}
		else if (fVar1 >= (func_109() - IntToFloat((45 * iVar0))) && fVar1 < (func_109() - IntToFloat((40 * iVar0))))
		{
			func_108("SET_WARNING_IS_VISIBLE", 1);
			func_107(0.2f);
		}
		else if (fVar1 >= (func_109() - IntToFloat((40 * iVar0))) && fVar1 < (func_109() - IntToFloat((35 * iVar0))))
		{
			func_108("SET_WARNING_IS_VISIBLE", 1);
			func_107(0.3f);
		}
		else if (fVar1 >= (func_109() - IntToFloat((35 * iVar0))) && fVar1 < (func_109() - IntToFloat((30 * iVar0))))
		{
			func_108("SET_WARNING_IS_VISIBLE", 1);
			func_107(0.4f);
		}
		else if (fVar1 >= (func_109() - IntToFloat((30 * iVar0))) && fVar1 < (func_109() - IntToFloat((25 * iVar0))))
		{
			func_108("SET_WARNING_IS_VISIBLE", 1);
			func_107(0.5f);
		}
		else if (fVar1 >= (func_109() - IntToFloat((25 * iVar0))) && fVar1 < (func_109() - IntToFloat((20 * iVar0))))
		{
			func_108("SET_WARNING_IS_VISIBLE", 1);
			func_107(0.6f);
		}
		else if (fVar1 >= (func_109() - IntToFloat((20 * iVar0))) && fVar1 < (func_109() - IntToFloat((15 * iVar0))))
		{
			func_108("SET_WARNING_IS_VISIBLE", 1);
			func_107(0.7f);
		}
		else if (fVar1 >= (func_109() - IntToFloat((15 * iVar0))) && fVar1 < (func_109() - IntToFloat((10 * iVar0))))
		{
			func_108("SET_WARNING_IS_VISIBLE", 1);
			func_107(0.8f);
		}
		else if (fVar1 >= (func_109() - IntToFloat((10 * iVar0))) && fVar1 < (func_109() - IntToFloat((5 * iVar0))))
		{
			func_108("SET_WARNING_IS_VISIBLE", 1);
			func_107(0.9f);
		}
		else if (fVar1 >= (func_109() - IntToFloat((5 * iVar0))) && fVar1 < func_109())
		{
			func_108("SET_WARNING_IS_VISIBLE", 1);
			func_107(1f);
		}
	}
	else
	{
		func_108("SET_WARNING_IS_VISIBLE", 0);
		if (!AUDIO::HAS_SOUND_FINISHED(Local_96.f_37))
		{
			AUDIO::STOP_SOUND(Local_96.f_37);
			AUDIO::RELEASE_SOUND_ID(Local_96.f_37);
			Local_96.f_37 = -1;
		}
	}
}

void func_107(float fParam0)//Position - 0x2E72
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Local_96.f_170, "SET_WARNING_FLASH_RATE");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fParam0);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_108(char* sParam0, bool bParam1)//Position - 0x2E91
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Local_96.f_170, sParam0);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bParam1);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

float func_109()//Position - 0x2EAE
{
	if (Global_1958711.f_8 == 0f)
	{
		return Global_262145.f_24700 /* Tunable: BB_TERRORBYTE_DRONE_DISTANCE_LIMIT */;
	}
	return Global_1958711.f_8;
}

int func_110()//Position - 0x2ED4
{
	char* sVar0;
	sVar0 = "";
	switch (Global_4718592.f_162543)
	{
		case 1:
			sVar0 = "ARENA_GUN_CAM_APOCALYPSE";
			break;
		case 2:
			sVar0 = "ARENA_GUN_CAM_SCIFI";
			break;
		case 3:
			sVar0 = "ARENA_GUN_CAM_CONSUMER";
			break;
		default:
			sVar0 = "INVALID_THEME";
			break;
	}
	return GRAPHICS::REQUEST_SCALEFORM_MOVIE(sVar0);
}

int func_111()//Position - 0x2F2D
{
	char* sVar0;
	sVar0 = "SUBMARINE_MISSILES";
	return GRAPHICS::REQUEST_SCALEFORM_MOVIE(sVar0);
}

void func_112()//Position - 0x2F41
{
	if (func_16())
	{
		if (!func_130())
		{
			return;
		}
	}
	if (!BitTest(Local_96.f_5, 16))
	{
		if (__LIB_3__::func_67(0, -1, 0))
		{
			__LIB_3__::func_564(-1);
			__LIB_6__::func_170(20, "DRONE_SPACE" /* GXT: / */, -1);
			__LIB_6__::func_170(21, "DRONE_POSITION" /* GXT: Move */, -1);
			if (func_35())
			{
				if (!PAD::IS_USING_KEYBOARD_AND_MOUSE(0 /*PLAYER_CONTROL*/))
				{
					__LIB_1__::func_792(208, "DRONE_SPEEDU" /* GXT: Speed Up */, -1, 0);
					__LIB_1__::func_792(207, "DRONE_SLOWD" /* GXT: Slow Down */, -1, 0);
				}
				else
				{
					__LIB_1__::func_792(209, "DRONE_SPEEDU" /* GXT: Speed Up */, -1, 0);
					__LIB_1__::func_792(210, "DRONE_SLOWD" /* GXT: Slow Down */, -1, 0);
				}
			}
			__LIB_1__::func_792(75, "MOVE_DRONE_RE" /* GXT: Exit */, -1, 0);
			MISC::SET_BIT(&(Local_96.f_5), 16);
		}
	}
	else
	{
		__LIB_3__::func_129(0, -1, 0, 1, 0, 0, 1, 1, 0);
	}
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(0 /*PLAYER_CONTROL*/))
	{
		if (!BitTest(Local_96.f_5, 17))
		{
			MISC::SET_BIT(&(Local_96.f_5), 17);
			MISC::CLEAR_BIT(&(Local_96.f_5), 16);
		}
	}
	else if (BitTest(Local_96.f_5, 17))
	{
		MISC::CLEAR_BIT(&(Local_96.f_5), 17);
		MISC::CLEAR_BIT(&(Local_96.f_5), 16);
	}
}

bool func_130()//Position - 0x3BB7
{
	return BitTest(Local_96.f_6, 6);
}

void func_131()//Position - 0x3BC5
{
	if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Local_96.f_170))
	{
		Local_96.f_170 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("DRONE_CAM");
		return;
	}
	if ((func_38() || __LIB_0__::func_94()) || func_162(0))
	{
		func_108("SET_DETONATE_METER_IS_VISIBLE", 0);
	}
	else
	{
		func_108("SET_DETONATE_METER_IS_VISIBLE", 1);
	}
	if ((func_38() || __LIB_0__::func_94()) || func_24())
	{
		func_108("SET_SHOCK_METER_IS_VISIBLE", 0);
	}
	else
	{
		func_108("SET_SHOCK_METER_IS_VISIBLE", 1);
	}
	if (func_24())
	{
		func_108("SET_EMP_METER_IS_VISIBLE", 1);
	}
	else
	{
		func_108("SET_EMP_METER_IS_VISIBLE", 0);
	}
	if (!func_38() && !__LIB_0__::func_94())
	{
		func_108("SET_RETICLE_IS_VISIBLE", 1);
	}
	else
	{
		func_108("SET_RETICLE_IS_VISIBLE", 0);
	}
	func_108("SET_HEADING_METER_IS_VISIBLE", 1);
	func_108("SET_ZOOM_METER_IS_VISIBLE", 1);
	if (((!func_38() && !__LIB_0__::func_94()) && !func_24()) && func_161())
	{
		func_108("SET_BOOST_METER_IS_VISIBLE", 1);
	}
	else
	{
		func_108("SET_BOOST_METER_IS_VISIBLE", 0);
	}
	if (func_160())
	{
		func_108("SET_TRANQUILIZE_METER_IS_VISIBLE", 1);
	}
	else
	{
		func_108("SET_TRANQUILIZE_METER_IS_VISIBLE", 0);
	}
	func_108("SET_MISSILE_METER_IS_VISIBLE", 0);
	func_108("SET_BOTTOM_LEFT_CORNER_IS_VISIBLE", 0);
	if (__LIB_0__::func_492(PLAYER::PLAYER_ID()) == 240)
	{
		if (Local_96.f_120 >= (func_109() - 50f) || Local_96.f_121 >= IntToFloat((Global_262145.f_24699 /* Tunable: BB_TERRORBYTE_DRONE_HEIGHT_LIMIT */ - 50)))
		{
			func_108("SET_SOUND_WAVE_IS_VISIBLE", 0);
			func_157();
			if (BitTest(Local_96.f_5, 13))
			{
				MISC::CLEAR_BIT(&(Local_96.f_5), 13);
			}
		}
		else
		{
			func_153(func_154());
			if (!BitTest(Local_96.f_5, 13))
			{
				func_108("SET_SOUND_WAVE_IS_VISIBLE", 1);
				MISC::SET_BIT(&(Local_96.f_5), 13);
			}
		}
	}
	else
	{
		func_108("SET_SOUND_WAVE_IS_VISIBLE", 0);
		func_157();
	}
	func_108("SET_INFO_LIST_IS_VISIBLE", 0);
	if (!func_38() && !__LIB_0__::func_94())
	{
		if (!func_24())
		{
			func_152(Local_96.f_18);
		}
		else
		{
			func_151(Local_96.f_18);
		}
		if (!func_162(0))
		{
			func_150(Local_96.f_19);
		}
	}
	if (func_160())
	{
		func_149(Local_96.f_24);
	}
	if (func_161())
	{
		func_148(Local_96.f_20);
	}
	func_147(0, "DRONE_ZOOM_1" /* GXT: x1 */);
	func_147(1, "");
	func_147(2, "DRONE_ZOOM_2" /* GXT: x2 */);
	func_147(3, "");
	func_147(4, "DRONE_ZOOM_3" /* GXT: x4 */);
	func_145();
	func_143();
	func_141();
	func_140(SYSTEM::ROUND((ENTITY::GET_ENTITY_HEADING(NETWORK::NET_TO_OBJ(Local_96.f_159)) + 180f)));
	if (__LIB_0__::func_492(PLAYER::PLAYER_ID()) == 240)
	{
		func_139(func_154());
	}
	if (func_138())
	{
		func_133();
	}
	else if (func_24() || func_38())
	{
		func_132();
	}
	else if (__LIB_12__::func_637())
	{
		func_106();
	}
	GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(1);
	GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(Local_96.f_170, 255, 255, 255, 0, 0);
}

void func_132()//Position - 0x3EA6
{
	if (Local_96.f_150.f_2 >= (func_109() - 20f))
	{
		if (AUDIO::HAS_SOUND_FINISHED(Local_96.f_37))
		{
			Local_96.f_37 = AUDIO::GET_SOUND_ID();
			AUDIO::PLAY_SOUND_FRONTEND(Local_96.f_37, "Out_Of_Bounds_Alarm_Loop", Local_96.f_157, true);
		}
		if (Local_96.f_150.f_2 >= (func_109() - 20f) && Local_96.f_150.f_2 < (func_109() - 16f))
		{
			func_108("SET_WARNING_IS_VISIBLE", 1);
			func_107(0.1f);
		}
		else if (Local_96.f_150.f_2 >= (func_109() - 16f) && Local_96.f_150.f_2 < (func_109() - 13f))
		{
			func_108("SET_WARNING_IS_VISIBLE", 1);
			func_107(0.2f);
		}
		else if (Local_96.f_150.f_2 >= (func_109() - 13f) && Local_96.f_150.f_2 < (func_109() - 10f))
		{
			func_108("SET_WARNING_IS_VISIBLE", 1);
			func_107(0.3f);
		}
		else if (Local_96.f_150.f_2 >= (func_109() - 10f) && Local_96.f_150.f_2 < (func_109() - 8f))
		{
			func_108("SET_WARNING_IS_VISIBLE", 1);
			func_107(0.4f);
		}
		else if (Local_96.f_150.f_2 >= (func_109() - 8f) && Local_96.f_150.f_2 < (func_109() - 6f))
		{
			func_108("SET_WARNING_IS_VISIBLE", 1);
			func_107(0.5f);
		}
		else if (Local_96.f_150.f_2 >= (func_109() - 6f) && Local_96.f_150.f_2 < (func_109() - 4f))
		{
			func_108("SET_WARNING_IS_VISIBLE", 1);
			func_107(0.6f);
		}
		else if (Local_96.f_150.f_2 >= (func_109() - 4f) && Local_96.f_150.f_2 < (func_109() - 3f))
		{
			func_108("SET_WARNING_IS_VISIBLE", 1);
			func_107(0.7f);
		}
		else if (Local_96.f_150.f_2 >= (func_109() - 3f) && Local_96.f_150.f_2 < (func_109() - 2f))
		{
			func_108("SET_WARNING_IS_VISIBLE", 1);
			func_107(0.8f);
		}
		else if (Local_96.f_150.f_2 >= (func_109() - 2f) && Local_96.f_150.f_2 < (func_109() - 1f))
		{
			func_108("SET_WARNING_IS_VISIBLE", 1);
			func_107(0.9f);
		}
		else if (Local_96.f_150.f_2 >= (func_109() - 1f) && Local_96.f_150.f_2 < func_109())
		{
			func_108("SET_WARNING_IS_VISIBLE", 1);
			func_107(1f);
		}
	}
	else
	{
		func_108("SET_WARNING_IS_VISIBLE", 0);
		if (!AUDIO::HAS_SOUND_FINISHED(Local_96.f_37))
		{
			AUDIO::STOP_SOUND(Local_96.f_37);
			AUDIO::RELEASE_SOUND_ID(Local_96.f_37);
			Local_96.f_37 = -1;
		}
	}
}

void func_133()//Position - 0x4155
{
	if (Local_96.f_120 >= (func_109() - 50f) || Local_96.f_121 >= IntToFloat((Global_262145.f_24699 /* Tunable: BB_TERRORBYTE_DRONE_HEIGHT_LIMIT */ - 50)))
	{
		func_134();
		if (AUDIO::HAS_SOUND_FINISHED(Local_96.f_37))
		{
			Local_96.f_37 = AUDIO::GET_SOUND_ID();
			AUDIO::PLAY_SOUND_FRONTEND(Local_96.f_37, "Out_Of_Bounds_Alarm_Loop", Local_96.f_157, true);
		}
		if ((Local_96.f_120 >= (func_109() - 50f) && Local_96.f_120 < (func_109() - 45f)) || (Local_96.f_121 >= IntToFloat((Global_262145.f_24699 /* Tunable: BB_TERRORBYTE_DRONE_HEIGHT_LIMIT */ - 50)) && Local_96.f_121 < IntToFloat((Global_262145.f_24699 /* Tunable: BB_TERRORBYTE_DRONE_HEIGHT_LIMIT */ - 45))))
		{
			func_108("SET_WARNING_IS_VISIBLE", 1);
			func_107(0.1f);
		}
		else if ((Local_96.f_120 >= (func_109() - 45f) && Local_96.f_120 < (func_109() - 40f)) || (Local_96.f_121 >= IntToFloat((Global_262145.f_24699 /* Tunable: BB_TERRORBYTE_DRONE_HEIGHT_LIMIT */ - 45)) && Local_96.f_121 < IntToFloat((Global_262145.f_24699 /* Tunable: BB_TERRORBYTE_DRONE_HEIGHT_LIMIT */ - 40))))
		{
			func_108("SET_WARNING_IS_VISIBLE", 1);
			func_107(0.2f);
		}
		else if ((Local_96.f_120 >= (func_109() - 40f) && Local_96.f_120 < (func_109() - 35f)) || (Local_96.f_121 >= IntToFloat((Global_262145.f_24699 /* Tunable: BB_TERRORBYTE_DRONE_HEIGHT_LIMIT */ - 40)) && Local_96.f_121 < IntToFloat((Global_262145.f_24699 /* Tunable: BB_TERRORBYTE_DRONE_HEIGHT_LIMIT */ - 35))))
		{
			func_108("SET_WARNING_IS_VISIBLE", 1);
			func_107(0.3f);
		}
		else if ((Local_96.f_120 >= (func_109() - 35f) && Local_96.f_120 < (func_109() - 30f)) || (Local_96.f_121 >= IntToFloat((Global_262145.f_24699 /* Tunable: BB_TERRORBYTE_DRONE_HEIGHT_LIMIT */ - 35)) && Local_96.f_121 < IntToFloat((Global_262145.f_24699 /* Tunable: BB_TERRORBYTE_DRONE_HEIGHT_LIMIT */ - 30))))
		{
			func_108("SET_WARNING_IS_VISIBLE", 1);
			func_107(0.4f);
		}
		else if ((Local_96.f_120 >= (func_109() - 30f) && Local_96.f_120 < (func_109() - 25f)) || (Local_96.f_121 >= IntToFloat((Global_262145.f_24699 /* Tunable: BB_TERRORBYTE_DRONE_HEIGHT_LIMIT */ - 30)) && Local_96.f_121 < IntToFloat((Global_262145.f_24699 /* Tunable: BB_TERRORBYTE_DRONE_HEIGHT_LIMIT */ - 25))))
		{
			func_108("SET_WARNING_IS_VISIBLE", 1);
			func_107(0.5f);
		}
		else if ((Local_96.f_120 >= (func_109() - 25f) && Local_96.f_120 < (func_109() - 20f)) || (Local_96.f_121 >= IntToFloat((Global_262145.f_24699 /* Tunable: BB_TERRORBYTE_DRONE_HEIGHT_LIMIT */ - 25)) && Local_96.f_121 < IntToFloat((Global_262145.f_24699 /* Tunable: BB_TERRORBYTE_DRONE_HEIGHT_LIMIT */ - 20))))
		{
			func_108("SET_WARNING_IS_VISIBLE", 1);
			func_107(0.6f);
		}
		else if ((Local_96.f_120 >= (func_109() - 20f) && Local_96.f_120 < (func_109() - 15f)) || (Local_96.f_121 >= IntToFloat((Global_262145.f_24699 /* Tunable: BB_TERRORBYTE_DRONE_HEIGHT_LIMIT */ - 20)) && Local_96.f_121 < IntToFloat((Global_262145.f_24699 /* Tunable: BB_TERRORBYTE_DRONE_HEIGHT_LIMIT */ - 15))))
		{
			func_108("SET_WARNING_IS_VISIBLE", 1);
			func_107(0.7f);
		}
		else if ((Local_96.f_120 >= (func_109() - 15f) && Local_96.f_120 < (func_109() - 10f)) || (Local_96.f_121 >= IntToFloat((Global_262145.f_24699 /* Tunable: BB_TERRORBYTE_DRONE_HEIGHT_LIMIT */ - 15)) && Local_96.f_121 < IntToFloat((Global_262145.f_24699 /* Tunable: BB_TERRORBYTE_DRONE_HEIGHT_LIMIT */ - 10))))
		{
			func_108("SET_WARNING_IS_VISIBLE", 1);
			func_107(0.8f);
		}
		else if ((Local_96.f_120 >= (func_109() - 10f) && Local_96.f_120 < (func_109() - 5f)) || (Local_96.f_121 >= IntToFloat((Global_262145.f_24699 /* Tunable: BB_TERRORBYTE_DRONE_HEIGHT_LIMIT */ - 10)) && Local_96.f_121 < IntToFloat((Global_262145.f_24699 /* Tunable: BB_TERRORBYTE_DRONE_HEIGHT_LIMIT */ - 5))))
		{
			func_108("SET_WARNING_IS_VISIBLE", 1);
			func_107(0.9f);
		}
		else if ((Local_96.f_120 >= (func_109() - 5f) && Local_96.f_120 < func_109()) || (Local_96.f_121 >= IntToFloat((Global_262145.f_24699 /* Tunable: BB_TERRORBYTE_DRONE_HEIGHT_LIMIT */ - 5)) && Local_96.f_121 < IntToFloat(Global_262145.f_24699 /* Tunable: BB_TERRORBYTE_DRONE_HEIGHT_LIMIT */)))
		{
			func_108("SET_WARNING_IS_VISIBLE", 1);
			func_107(1f);
		}
	}
	else
	{
		func_108("SET_WARNING_IS_VISIBLE", 0);
		if (!AUDIO::HAS_SOUND_FINISHED(Local_96.f_37))
		{
			AUDIO::STOP_SOUND(Local_96.f_37);
			AUDIO::RELEASE_SOUND_ID(Local_96.f_37);
			Local_96.f_37 = -1;
		}
	}
}

void func_134()//Position - 0x45BC
{
	int iVar0;
	if (CAM::IS_SCREEN_FADED_IN() && !BitTest(Global_1946250.f_3, 15))
	{
		if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
		{
			iVar0 = __LIB_0__::func_253(22045, -1);
			if (iVar0 < 4)
			{
				__LIB_0__::func_151("HACK_DRONE_DIS" /* GXT: The Drone is losing connection. It must remain in proximity to the Terrorbyte in order to receive a signal. If you fly it too far the Drone will be deactivated. */, -1);
				iVar0++;
				__LIB_1__::func_379(22045, iVar0, -1);
				MISC::SET_BIT(&(Global_1946250.f_3), 15);
			}
		}
	}
}

bool func_138()//Position - 0x4672
{
	return BitTest(Global_1958711.f_2, 1);
}

void func_139(float fParam0)//Position - 0x4682
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Local_96.f_170, "ATTENUATE_SOUND_WAVE");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fParam0);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_140(int iParam0)//Position - 0x46A1
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Local_96.f_170, "SET_HEADING");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam0);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_141()//Position - 0x46C0
{
	if (func_24())
	{
		if (BitTest(Local_96.f_5, 11) && !Local_96.f_156)
		{
			func_142(1);
		}
		else
		{
			func_142(0);
		}
	}
	else if (BitTest(Local_96.f_5, 11) || BitTest(Local_96.f_5, 23))
	{
		func_142(1);
	}
	else
	{
		func_142(0);
	}
}

void func_142(bool bParam0)//Position - 0x4717
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Local_96.f_170, "SET_RETICLE_ON_TARGET");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bParam0);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_143()//Position - 0x4736
{
	if (BitTest(Local_96.f_5, 4) || (BitTest(Local_96.f_5, 3) && func_24()))
	{
		if (Local_96.f_18 == 100)
		{
			func_144(1);
		}
		else if (Local_96.f_18 != 0 && Local_96.f_18 != 100)
		{
			func_144(2);
		}
	}
	else
	{
		func_144(0);
	}
}

void func_144(int iParam0)//Position - 0x478F
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Local_96.f_170, "SET_RETICLE_STATE");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam0);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_145()//Position - 0x47AE
{
	switch (Local_96.f_25)
	{
		case 0:
			func_146(0);
			break;
		case 1:
			func_146(2);
			break;
		case 2:
			func_146(4);
			break;
	}
}

void func_146(int iParam0)//Position - 0x47E9
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Local_96.f_170, "SET_ZOOM");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam0);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_147(int iParam0, char* sParam1)//Position - 0x4808
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Local_96.f_170, "SET_ZOOM_LABEL");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam0);
	__LIB_0__::func_610(sParam1);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_148(int iParam0)//Position - 0x482D
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Local_96.f_170, "SET_BOOST_PERCENTAGE");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam0);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_149(int iParam0)//Position - 0x484C
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Local_96.f_170, "SET_TRANQUILIZE_PERCENTAGE");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam0);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_150(int iParam0)//Position - 0x486B
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Local_96.f_170, "SET_DETONATE_PERCENTAGE");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam0);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_151(int iParam0)//Position - 0x488A
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Local_96.f_170, "SET_EMP_PERCENTAGE");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam0);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_152(int iParam0)//Position - 0x48A9
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Local_96.f_170, "SET_SHOCK_PERCENTAGE");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam0);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_153(float fParam0)//Position - 0x48C8
{
	if (AUDIO::HAS_SOUND_FINISHED(Local_96.f_44))
	{
		Local_96.f_44 = AUDIO::GET_SOUND_ID();
		AUDIO::PLAY_SOUND_FRONTEND(Local_96.f_44, "Scanner_Loop", "DLC_BTL_Target_Pursuit_Sounds", true);
		AUDIO::SET_VARIABLE_ON_SOUND(Local_96.f_44, "signalstrength", fParam0);
	}
	else
	{
		AUDIO::SET_VARIABLE_ON_SOUND(Local_96.f_44, "signalstrength", fParam0);
	}
}

float func_154()//Position - 0x4913
{
	float fVar0;
	if (__LIB_0__::func_492(PLAYER::PLAYER_ID()) == 240)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_96.f_159) && !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_OBJ(Local_96.f_159), false))
		{
			fVar0 = __LIB_0__::func_724(NETWORK::NET_TO_OBJ(Local_96.f_159), func_156(), 1);
			if (fVar0 >= 200f)
			{
				return 0f;
			}
			else if (fVar0 >= 180f && fVar0 < 200f)
			{
				return 0.1f;
			}
			else if (fVar0 >= 160f && fVar0 < 180f)
			{
				return 0.2f;
			}
			else if (fVar0 >= 140f && fVar0 < 160f)
			{
				return 0.3f;
			}
			else if (fVar0 >= 120f && fVar0 < 140f)
			{
				return 0.4f;
			}
			else if (fVar0 >= 100f && fVar0 < 120f)
			{
				return 0.5f;
			}
			else if (fVar0 >= 80f && fVar0 < 100f)
			{
				return 0.6f;
			}
			else if (fVar0 >= 60f && fVar0 < 80f)
			{
				return 0.7f;
			}
			else if (fVar0 >= 40f && fVar0 < 60f)
			{
				return 0.8f;
			}
			else if (fVar0 >= 20f && fVar0 < 40f)
			{
				return 0.9f;
			}
			else if (fVar0 <= 20f)
			{
				return 1f;
			}
		}
	}
	return 0f;
}

Vector3 func_156()//Position - 0x4AF0
{
	if (__LIB_0__::func_492(PLAYER::PLAYER_ID()) == 240)
	{
		return Global_1963983;
	}
	return 0f, 0f, 0f;
}

void func_157()//Position - 0x4B14
{
	if (!AUDIO::HAS_SOUND_FINISHED(Local_96.f_44))
	{
		AUDIO::STOP_SOUND(Local_96.f_44);
		AUDIO::RELEASE_SOUND_ID(Local_96.f_44);
		Local_96.f_44 = -1;
	}
}

bool func_160()//Position - 0x4B9B
{
	return BitTest(Global_1958711.f_2, 6);
}

int func_161()//Position - 0x4BAB
{
	if (func_160())
	{
		if (INTERIOR::IS_VALID_INTERIOR(Global_1958711.f_24))
		{
			return 0;
		}
	}
	return 1;
}

int func_162(bool bParam0)//Position - 0x4BCC
{
	if (func_138())
	{
		if (bParam0)
		{
			if (BitTest(Local_96.f_5, 4))
			{
				return 1;
			}
		}
	}
	if (func_160())
	{
		return 1;
	}
	return 0;
}

void func_163()//Position - 0x4BF9
{
	int iVar0;
	int iVar1;
	if (__LIB_0__::func_94())
	{
		return;
	}
	if (!BitTest(Local_96.f_5, 16))
	{
		if (__LIB_3__::func_67(0, -1, 0))
		{
			__LIB_3__::func_564(-1);
			__LIB_6__::func_170(21, "DRONE_MOVE" /* GXT: Turn */, -1);
			__LIB_6__::func_170(20, "DRONE_POSITION" /* GXT: Move */, -1);
			if (!PAD::IS_USING_KEYBOARD_AND_MOUSE(0 /*PLAYER_CONTROL*/))
			{
				__LIB_1__::func_792(210, "CELL_284" /* GXT: Zoom */, -1, 0);
				if ((!func_38() && !func_24()) && func_161())
				{
					__LIB_1__::func_792(209, "BOOST_DRONE_E" /* GXT: Boost */, -1, 0);
				}
				__LIB_1__::func_792(208, "MOVE_DRONE_UP" /* GXT: Move Up */, -1, 0);
				__LIB_1__::func_792(207, "MOVE_DRONE_DO" /* GXT: Move Down */, -1, 0);
			}
			else
			{
				__LIB_6__::func_170(29, "CELL_284" /* GXT: Zoom */, -1);
				if ((!func_38() && !func_24()) && func_161())
				{
					__LIB_1__::func_792(203, "BOOST_DRONE_E" /* GXT: Boost */, -1, 0);
				}
				__LIB_1__::func_792(209, "MOVE_DRONE_UP" /* GXT: Move Up */, -1, 0);
				__LIB_1__::func_792(210, "MOVE_DRONE_DO" /* GXT: Move Down */, -1, 0);
			}
			if (!func_38())
			{
				iVar0 = 206;
				if (PAD::IS_USING_KEYBOARD_AND_MOUSE(0 /*PLAYER_CONTROL*/))
				{
					iVar0 = 237;
				}
				if (func_24())
				{
					__LIB_1__::func_792(iVar0, "MOVE_DRONE_EM" /* GXT: EMP */, -1, 0);
				}
				else
				{
					__LIB_1__::func_792(iVar0, "MOVE_DRONE_ST" /* GXT: Shock */, -1, 0);
				}
				iVar1 = 205;
				if (PAD::IS_USING_KEYBOARD_AND_MOUSE(0 /*PLAYER_CONTROL*/))
				{
					iVar1 = 238;
				}
				if (!func_162(0))
				{
					__LIB_1__::func_792(iVar1, "MOVE_DRONE_EX" /* GXT: Detonate */, -1, 0);
				}
				else if (func_170())
				{
					__LIB_1__::func_792(iVar1, "MOVE_DRONE_TRG" /* GXT: Tranquilizer Gun */, -1, 0);
				}
			}
			if (!func_24())
			{
				if ((((__LIB_0__::func_104(0) || __LIB_0__::func_104(1)) || __LIB_10__::func_565()) || RECORDING::IS_REPLAY_RECORDING()) || func_164(PLAYER::PLAYER_ID()))
				{
				}
				else
				{
					__LIB_1__::func_792(201, "DRONE_PHOTO" /* GXT: Photo Mode */, -1, 0);
				}
			}
			__LIB_1__::func_792(80, "MOVE_DRONE_RE" /* GXT: Exit */, -1, 0);
			MISC::SET_BIT(&(Local_96.f_5), 16);
		}
	}
	else
	{
		__LIB_3__::func_129(0, -1, 0, 1, 0, 0, 1, 1, 0);
	}
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(0 /*PLAYER_CONTROL*/))
	{
		if (!BitTest(Local_96.f_5, 17))
		{
			MISC::SET_BIT(&(Local_96.f_5), 17);
			MISC::CLEAR_BIT(&(Local_96.f_5), 16);
		}
	}
	else if (BitTest(Local_96.f_5, 17))
	{
		MISC::CLEAR_BIT(&(Local_96.f_5), 17);
		MISC::CLEAR_BIT(&(Local_96.f_5), 16);
	}
}

int func_164(int iParam0)//Position - 0x4E0B
{
	if (__LIB_6__::func_553(__LIB_0__::func_492(iParam0)))
	{
		if (__LIB_0__::func_797() != __LIB_0__::func_162())
		{
			if (__LIB_1__::func_730() == __LIB_0__::func_797())
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_170()//Position - 0x4EBD
{
	if (func_171() <= 0)
	{
		return 0;
	}
	if (func_160())
	{
		return 1;
	}
	return 0;
}

int func_171()//Position - 0x4EDD
{
	return Global_1958711.f_6;
}

void func_173()//Position - 0x4EF9
{
	int iVar0;
	if (!func_174())
	{
		return;
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_96.f_159) && !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_OBJ(Local_96.f_159), false))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_96.f_159))
		{
			if ((CAM::DOES_CAM_EXIST(Local_96.f_169) && CAM::IS_CAM_RENDERING(Local_96.f_169)) && !__LIB_0__::func_94())
			{
				iVar0 = 80;
				if (func_83())
				{
					iVar0 = 75;
				}
				if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, iVar0) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, iVar0))
				{
					if (!BitTest(Local_96.f_5, 7))
					{
						MISC::SET_BIT(&(Local_96.f_5), 7);
					}
				}
			}
		}
	}
}

int func_174()//Position - 0x4F90
{
	if (func_16())
	{
		if (!func_130())
		{
			return 0;
		}
	}
	return 1;
}

void func_175()//Position - 0x4FAC
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	if ((__LIB_32__::func_364() || !func_164(PLAYER::PLAYER_ID())) || !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	iVar0 = func_180(1);
	__LIB_0__::func_799(iVar0);
	iVar1 = func_180(0);
	iVar2 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(Local_96.f_141, 2f, iVar1, false, false, false);
	if (ENTITY::DOES_ENTITY_EXIST(iVar2) && iVar2 != Local_96.f_162)
	{
		if (WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(iVar2, joaat("WEAPON_STUNGUN"), 0) || ENTITY::GET_ENTITY_HEALTH(iVar2) == 999)
		{
			if (!BitTest(Local_96.f_5, 26))
			{
				func_178(__LIB_0__::func_797(), 1, 1, 0);
				MISC::SET_BIT(&(Local_96.f_5), 26);
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_96.f_162))
	{
		if (WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(Local_96.f_162, joaat("WEAPON_STUNGUN"), 0) || ENTITY::GET_ENTITY_HEALTH(Local_96.f_162) == 999)
		{
			if (!BitTest(Local_96.f_5, 26))
			{
				func_178(__LIB_0__::func_797(), 1, 1, 0);
				MISC::SET_BIT(&(Local_96.f_5), 26);
			}
		}
	}
	if (BitTest(Local_96.f_5, 26))
	{
		iVar3 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(Local_96.f_141, 2f, iVar0, false, false, false);
		if (ENTITY::DOES_ENTITY_EXIST(iVar3))
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_96.f_162))
			{
				ENTITY::SET_ENTITY_VISIBLE(Local_96.f_162, false, false);
			}
			if (ENTITY::DOES_ENTITY_EXIST(iVar2))
			{
				ENTITY::SET_ENTITY_VISIBLE(iVar2, false, false);
			}
			__LIB_36__::func_458(1);
		}
	}
}

void func_178(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x5133
{
	struct<5> Var0;
	int iVar1;
	Var0.f_0 = -1987280249;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = iParam1;
	Var0.f_3 = iParam2;
	Var0.f_4 = iParam3;
	iVar1 = 0;
	if (iParam0 != __LIB_0__::func_162())
	{
		MISC::SET_BIT(&iVar1, iParam0);
	}
	if (!iVar1 == 0)
	{
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 5, iVar1);
	}
}

int func_180(bool bParam0)//Position - 0x51A3
{
	if (!bParam0)
	{
		if (Global_1958711.f_19 != 0)
		{
			return Global_1958711.f_19;
		}
		else
		{
			return joaat("ba_prop_battle_secpanel");
		}
	}
	else
	{
		return joaat("ba_prop_battle_secpanel_dam");
	}
	return 0;
}

void func_182()//Position - 0x51EA
{
	int iVar0;
	int iVar1;
	int iVar2;
	if ((BitTest(Local_96.f_5, 1) || func_193()) || __LIB_32__::func_308())
	{
		Local_96.f_18 = 0;
		Local_96.f_19 = 0;
		if (!BitTest(Local_96.f_5, 10))
		{
			MISC::SET_BIT(&(Local_96.f_5), 10);
		}
		return;
	}
	if (!__LIB_32__::func_308())
	{
		if (BitTest(Local_96.f_5, 10))
		{
			Local_96.f_18 = 100;
			MISC::CLEAR_BIT(&(Local_96.f_5), 10);
		}
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_96.f_159) && !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_OBJ(Local_96.f_159), false))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_96.f_159))
		{
			if ((CAM::DOES_CAM_EXIST(Local_96.f_169) && CAM::IS_CAM_RENDERING(Local_96.f_169)) && !BitTest(Local_96.f_5, 2))
			{
				if ((!BitTest(Local_96.f_5, 4) && !BitTest(Local_96.f_5, 3)) && !Local_96.f_156)
				{
					iVar0 = 206;
					if (PAD::IS_USING_KEYBOARD_AND_MOUSE(0 /*PLAYER_CONTROL*/))
					{
						iVar0 = 237;
					}
					if ((((PAD::IS_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, iVar0) || PAD::IS_DISABLED_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, iVar0)) && !BitTest(Local_96.f_5, 5)) && !BitTest(Local_96.f_5, 24)) && !__LIB_0__::func_94())
					{
						MISC::SET_BIT(&(Local_96.f_5), 24);
						if (BitTest(Local_96.f_5, 11) || BitTest(Local_96.f_5, 23))
						{
							Local_96.f_27++;
						}
					}
					if (func_24())
					{
						func_189();
					}
					else
					{
						func_188();
					}
				}
				else if (__LIB_0__::func_864(&(Local_96.f_249)))
				{
					if (func_24())
					{
						iVar1 = Global_262145.f_25339 /* Tunable: 1682810056 */;
					}
					else
					{
						iVar1 = Global_262145.f_24692 /* Tunable: BB_TERRORBYTE_DRONE_SHOCK_COOLDOWN_TIME */;
					}
					if (__LIB_0__::func_937(&(Local_96.f_249), iVar1, 0))
					{
						__LIB_0__::func_794(&(Local_96.f_249));
						Local_96.f_18 = 100;
						if (Local_96.f_32 != -1)
						{
							AUDIO::STOP_SOUND(Local_96.f_32);
							AUDIO::RELEASE_SOUND_ID(Local_96.f_32);
							Local_96.f_32 = -1;
						}
						if (AUDIO::HAS_SOUND_FINISHED(Local_96.f_35))
						{
							AUDIO::STOP_SOUND(Local_96.f_35);
							AUDIO::RELEASE_SOUND_ID(Local_96.f_35);
							Local_96.f_35 = -1;
						}
						MISC::CLEAR_BIT(&(Local_96.f_5), 4);
						MISC::CLEAR_BIT(&(Local_96.f_5), 3);
						MISC::CLEAR_BIT(&(Local_96.f_5), 24);
						Local_96.f_156 = 0;
					}
					else
					{
						iVar2 = (100 * MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Local_96.f_249)));
						Local_96.f_18 = (iVar2 / iVar1);
						if (!func_24())
						{
							if (AUDIO::HAS_SOUND_FINISHED(Local_96.f_32))
							{
								Local_96.f_32 = AUDIO::GET_SOUND_ID();
								AUDIO::PLAY_SOUND_FRONTEND(Local_96.f_32, "HUD_Shock_Recharge", Local_96.f_157, true);
								AUDIO::SET_VARIABLE_ON_SOUND(Local_96.f_32, "Time", (IntToFloat(iVar1) / 1000f));
							}
						}
					}
				}
				func_186();
				func_183();
			}
		}
		else
		{
			NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_96.f_159);
		}
	}
}

void func_183()//Position - 0x5461
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	struct<3> Var5;
	int iVar6;
	if (func_170())
	{
		if (PAD::IS_USING_KEYBOARD_AND_MOUSE(0 /*PLAYER_CONTROL*/))
		{
			iVar0 = 238;
		}
		else
		{
			iVar0 = 205;
		}
		if (!BitTest(Local_96.f_6, 5))
		{
			if (!BitTest(Local_96.f_6, 4))
			{
				if (PAD::IS_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, iVar0) || PAD::IS_DISABLED_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, iVar0))
				{
					MISC::SET_BIT(&(Local_96.f_6), 4);
				}
			}
			else if (Local_96.f_13 == 1)
			{
				if (Local_96.f_244 == 2)
				{
					Var1 = { CAM::GET_FINAL_RENDERED_CAM_COORD() };
					Var2 = { CAM::GET_FINAL_RENDERED_CAM_ROT(2) };
					Var3 = { (-SYSTEM::SIN(Var2.f_2) * SYSTEM::COS(Var2.f_0)), (SYSTEM::COS(Var2.f_2) * SYSTEM::COS(Var2.f_0)), SYSTEM::SIN(Var2.f_0) };
					Var4 = { 10f, 10f, 10f };
					Var5 = { Var1 + Var3 * Var4 };
					iVar6 = Global_262145.f_24693 /* Tunable: BB_TERRORBYTE_DRONE_SHOCK_DAMAGE_PLAYERS */;
					if (BitTest(Local_96.f_5, 23))
					{
						iVar6 = Global_262145.f_24694 /* Tunable: BB_TERRORBYTE_DRONE_SHOCK_DAMAGE_PEDS */;
					}
					MISC::SHOOT_SINGLE_BULLET_BETWEEN_COORDS_IGNORE_ENTITY_NEW(Local_96.f_150 + Vector(0f, 0f, 0f), Var5, iVar6, true, joaat("WEAPON_TRANQUILIZER"), PLAYER::PLAYER_PED_ID(), true, true, -1f, NETWORK::NET_TO_OBJ(Local_96.f_159), false, false, 0, true, 0, 0, 0);
					Local_96.f_24 = 100;
					PAD::SET_CONTROL_SHAKE(0 /*PLAYER_CONTROL*/, 300, SYSTEM::ROUND((150f * Local_96.f_131)));
					if (AUDIO::HAS_SOUND_FINISHED(Local_96.f_81))
					{
						Local_96.f_81 = AUDIO::GET_SOUND_ID();
						AUDIO::PLAY_SOUND_FROM_ENTITY(Local_96.f_81, "Remote_Perspective_Fire", NETWORK::NET_TO_OBJ(Local_96.f_159), "DLC_H3_Drone_Tranq_Weapon_Sounds", true, 0);
					}
					AUDIO::PLAY_SOUND_FRONTEND(-1, "Pilot_Perspective_Fire", "DLC_H3_Drone_Tranq_Weapon_Sounds", true);
					if (BitTest(Local_96.f_5, 11) || BitTest(Local_96.f_5, 23))
					{
						Local_96.f_29++;
					}
					__LIB_25__::func_419((func_171() - 1));
					if (func_171() <= 0)
					{
						Local_96.f_24 = 0;
						MISC::CLEAR_BIT(&(Local_96.f_5), 16);
					}
					MISC::SET_BIT(&(Local_96.f_6), 5);
					__LIB_0__::func_795(&(Local_96.f_257), 0, 0);
				}
			}
		}
		else
		{
			func_184();
		}
	}
}

void func_184()//Position - 0x5633
{
	int iVar0;
	int iVar1;
	if (func_171() > 0)
	{
		if (__LIB_0__::func_864(&(Local_96.f_257)))
		{
			iVar0 = Global_262145.f_24692 /* Tunable: BB_TERRORBYTE_DRONE_SHOCK_COOLDOWN_TIME */;
			if (__LIB_0__::func_937(&(Local_96.f_257), iVar0, 0))
			{
				MISC::CLEAR_BIT(&(Local_96.f_6), 5);
				MISC::CLEAR_BIT(&(Local_96.f_6), 4);
				__LIB_0__::func_794(&(Local_96.f_257));
				Local_96.f_24 = 100;
				if (AUDIO::HAS_SOUND_FINISHED(Local_96.f_35))
				{
					AUDIO::STOP_SOUND(Local_96.f_35);
					AUDIO::RELEASE_SOUND_ID(Local_96.f_35);
					Local_96.f_35 = -1;
				}
			}
			else
			{
				iVar1 = (100 * MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Local_96.f_257)));
				Local_96.f_24 = (iVar1 / iVar0);
			}
		}
	}
}

void func_186()//Position - 0x56E5
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	Local_96.f_348.f_2 = 2;
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(0 /*PLAYER_CONTROL*/))
	{
		Local_96.f_348.f_3 = 238;
	}
	else
	{
		Local_96.f_348.f_3 = 205;
	}
	iVar0 = Global_262145.f_24695 /* Tunable: BB_TERRORBYTE_DRONE_DETONATE_TIME */;
	if (!BitTest(Local_96.f_5, 31))
	{
		Local_96.f_22 = 100;
	}
	if (func_24())
	{
		iVar0 = (iVar0 / 2);
		if (BitTest(Local_96.f_6, 1))
		{
			Local_96.f_21 = ((Local_96.f_23 * (Global_262145.f_24695 /* Tunable: BB_TERRORBYTE_DRONE_DETONATE_TIME */ / 2)) / 100);
			Local_96.f_21 = ((Global_262145.f_24695 /* Tunable: BB_TERRORBYTE_DRONE_DETONATE_TIME */ / 2) - Local_96.f_21);
			MISC::CLEAR_BIT(&(Local_96.f_6), 1);
		}
		if (BitTest(Local_96.f_5, 31))
		{
			iVar0 = Local_96.f_21;
		}
	}
	else
	{
		Local_96.f_22 = 100;
	}
	if (!func_162(1))
	{
		if (!__LIB_0__::func_94() && __LIB_5__::func_120(&(Local_96.f_348), 1, iVar0))
		{
			if (AUDIO::HAS_SOUND_FINISHED(Local_96.f_36))
			{
				Local_96.f_36 = AUDIO::GET_SOUND_ID();
				AUDIO::PLAY_SOUND_FROM_ENTITY(Local_96.f_36, "Destroyed", NETWORK::NET_TO_OBJ(Local_96.f_159), Local_96.f_157, true, 0);
			}
			HUD::THEFEED_SHOW();
			iVar1 = 0;
			if (func_24())
			{
				iVar1 = 69;
			}
			FIRE::ADD_OWNED_EXPLOSION(PLAYER::PLAYER_PED_ID(), Local_96.f_150, iVar1, 0.5f, true, false, 1f);
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) < 1)
			{
				PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, false);
				PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
			}
			PAD::SET_CONTROL_SHAKE(0 /*PLAYER_CONTROL*/, 300, SYSTEM::ROUND((200f * Local_96.f_131)));
			MISC::SET_BIT(&(Local_96.f_5), 2);
		}
	}
	if (__LIB_0__::func_864(&(Local_96.f_348)))
	{
		PAD::SET_CONTROL_SHAKE(0 /*PLAYER_CONTROL*/, 300, 20);
		if (!BitTest(Local_96.f_5, 5))
		{
			MISC::SET_BIT(&(Local_96.f_5), 5);
		}
		__LIB_0__::func_794(&(Local_96.f_273));
		if (!__LIB_0__::func_937(&(Local_96.f_348), iVar0, 0))
		{
			iVar2 = (Local_96.f_22 * MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Local_96.f_348)));
			if (!func_24())
			{
				Local_96.f_19 = (iVar2 / iVar0);
			}
			else if (!BitTest(Local_96.f_5, 31))
			{
				Local_96.f_19 = (iVar2 / iVar0);
			}
			else
			{
				Local_96.f_19 = (Local_96.f_23 + (iVar2 / iVar0));
			}
			if (AUDIO::HAS_SOUND_FINISHED(Local_96.f_33))
			{
				Local_96.f_33 = AUDIO::GET_SOUND_ID();
				AUDIO::PLAY_SOUND_FRONTEND(Local_96.f_33, "HUD_Detonate_Charge", Local_96.f_157, true);
			}
		}
	}
	else if (BitTest(Local_96.f_5, 5))
	{
		MISC::CLEAR_BIT(&(Local_96.f_5), 5);
		if (!func_24())
		{
			Local_96.f_19 = 0;
		}
		else
		{
			MISC::SET_BIT(&(Local_96.f_5), 31);
			Local_96.f_22 = (100 - Local_96.f_19);
			Local_96.f_21 = (iVar0 - MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Local_96.f_348)));
			Local_96.f_23 = Local_96.f_19;
			__LIB_0__::func_794(&(Local_96.f_273));
		}
		if (Local_96.f_33 != -1)
		{
			AUDIO::STOP_SOUND(Local_96.f_33);
			AUDIO::RELEASE_SOUND_ID(Local_96.f_33);
			Local_96.f_33 = -1;
		}
	}
	else if (func_24())
	{
		if (Local_96.f_19 > 0)
		{
			if (Local_96.f_19 <= 2)
			{
				Local_96.f_19 = 0;
			}
			if (!__LIB_0__::func_864(&(Local_96.f_273)))
			{
				__LIB_0__::func_795(&(Local_96.f_273), 0, 0);
			}
			else
			{
				iVar3 = Global_262145.f_24695 /* Tunable: BB_TERRORBYTE_DRONE_DETONATE_TIME */;
				if (!__LIB_0__::func_937(&(Local_96.f_273), iVar3, 0))
				{
					fVar4 = ((100f - IntToFloat(Local_96.f_22)) / SYSTEM::TO_FLOAT((iVar3 / MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Local_96.f_273)))));
					Local_96.f_19 = (Local_96.f_19 - SYSTEM::ROUND(fVar4));
					Local_96.f_23 = Local_96.f_19;
					Local_96.f_22 = (100 - Local_96.f_19);
					MISC::SET_BIT(&(Local_96.f_6), 1);
				}
				else
				{
					Local_96.f_19 = 0;
				}
			}
		}
		else
		{
			__LIB_0__::func_794(&(Local_96.f_348));
			MISC::CLEAR_BIT(&(Local_96.f_5), 31);
			MISC::CLEAR_BIT(&(Local_96.f_6), 1);
		}
	}
}

void func_188()//Position - 0x5AAD
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	int iVar5;
	if (BitTest(Local_96.f_5, 24))
	{
		if (Local_96.f_13 == 1)
		{
			if (Local_96.f_244 == 2)
			{
				Var0 = { CAM::GET_FINAL_RENDERED_CAM_COORD() };
				Var1 = { CAM::GET_FINAL_RENDERED_CAM_ROT(2) };
				Var2 = { (-SYSTEM::SIN(Var1.f_2) * SYSTEM::COS(Var1.f_0)), (SYSTEM::COS(Var1.f_2) * SYSTEM::COS(Var1.f_0)), SYSTEM::SIN(Var1.f_0) };
				Var3 = { 10f, 10f, 10f };
				Var4 = { Var0 + Var2 * Var3 };
				iVar5 = Global_262145.f_24693 /* Tunable: BB_TERRORBYTE_DRONE_SHOCK_DAMAGE_PLAYERS */;
				if (BitTest(Local_96.f_5, 23))
				{
					iVar5 = Global_262145.f_24694 /* Tunable: BB_TERRORBYTE_DRONE_SHOCK_DAMAGE_PEDS */;
				}
				if (func_160())
				{
					iVar5 = 1;
				}
				MISC::SHOOT_SINGLE_BULLET_BETWEEN_COORDS_IGNORE_ENTITY_NEW(Local_96.f_150 + Vector(0f, 0f, 0f), Var4, iVar5, true, joaat("WEAPON_STUNGUN"), PLAYER::PLAYER_PED_ID(), true, true, -1f, NETWORK::NET_TO_OBJ(Local_96.f_159), false, false, 0, true, 0, 0, 0);
				Local_96.f_18 = 100;
				Local_96.f_19 = 0;
				PAD::SET_CONTROL_SHAKE(0 /*PLAYER_CONTROL*/, 300, SYSTEM::ROUND((150f * Local_96.f_131)));
				if (AUDIO::HAS_SOUND_FINISHED(Local_96.f_35))
				{
					Local_96.f_35 = AUDIO::GET_SOUND_ID();
					AUDIO::PLAY_SOUND_FROM_ENTITY(Local_96.f_35, "Shock_Fire", NETWORK::NET_TO_OBJ(Local_96.f_159), Local_96.f_157, true, 0);
				}
				if (Local_96.f_33 != -1)
				{
					AUDIO::STOP_SOUND(Local_96.f_33);
					AUDIO::RELEASE_SOUND_ID(Local_96.f_33);
					Local_96.f_33 = -1;
				}
				MISC::SET_BIT(&(Local_96.f_5), 4);
				__LIB_0__::func_795(&(Local_96.f_249), 0, 0);
			}
		}
	}
}

void func_189()//Position - 0x5C0C
{
	if ((BitTest(Local_96.f_5, 24) && !BitTest(Local_96.f_5, 3)) && !Local_96.f_156)
	{
		if (STREAMING::HAS_NAMED_PTFX_ASSET_LOADED("scr_xs_dr"))
		{
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_96.f_159))
			{
				GRAPHICS::USE_PARTICLE_FX_ASSET("scr_xs_dr");
				GRAPHICS::START_NETWORKED_PARTICLE_FX_NON_LOOPED_ON_ENTITY("scr_xs_dr_emp", NETWORK::NET_TO_OBJ(Local_96.f_159), 0f, -0.5f, 0f, 0f, 0f, 0f, 3f, false, false, false);
			}
		}
		Local_96.f_18 = 100;
		PAD::SET_CONTROL_SHAKE(0 /*PLAYER_CONTROL*/, 300, SYSTEM::ROUND((150f * Local_96.f_131)));
		if (AUDIO::HAS_SOUND_FINISHED(Local_96.f_35))
		{
			Local_96.f_35 = AUDIO::GET_SOUND_ID();
			AUDIO::PLAY_SOUND_FROM_ENTITY(Local_96.f_35, "Shock_Fire", NETWORK::NET_TO_OBJ(Local_96.f_159), Local_96.f_157, true, 0);
		}
		if (Local_96.f_33 != -1)
		{
			AUDIO::STOP_SOUND(Local_96.f_33);
			AUDIO::RELEASE_SOUND_ID(Local_96.f_33);
			Local_96.f_33 = -1;
		}
		func_190(ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_OBJ(Local_96.f_159), true), 0);
		MISC::SET_BIT(&(Local_96.f_5), 3);
		Local_96.f_156 = 1;
		__LIB_0__::func_795(&(Local_96.f_249), 0, 0);
	}
}

void func_190(struct<3> Param0, bool bParam1)//Position - 0x5D04
{
	struct<6> Var0;
	Var0.f_0 = -1427892428;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = { Param0 };
	Var0.f_5 = bParam1;
	if (!bParam1)
	{
		if (!__LIB_0__::func_943(1, 1) == 0)
		{
			SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 6, __LIB_0__::func_943(1, 1));
		}
	}
	else if (Global_1958711.f_21 != __LIB_0__::func_162())
	{
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 6, __LIB_0__::func_950(Global_1958711.f_21));
	}
}

int func_193()//Position - 0x5DE7
{
	if ((NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_96.f_159) && ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_OBJ(Local_96.f_159), false)) && !BitTest(Local_96.f_5, 2))
	{
		return 1;
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_96.f_159))
	{
		if (func_164(PLAYER::PLAYER_ID()) && BitTest(Global_2813821, 0))
		{
		}
		else if (func_203())
		{
			if (ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(NETWORK::NET_TO_OBJ(Local_96.f_159)) || ENTITY::GET_LAST_MATERIAL_HIT_BY_ENTITY(NETWORK::NET_TO_OBJ(Local_96.f_159)) != 0)
			{
				Local_96.f_26 = 1;
				return 1;
			}
		}
	}
	if (BitTest(Local_96.f_5, 2))
	{
		Local_96.f_26 = 4;
		return 1;
	}
	if (BitTest(Local_96.f_5, 9))
	{
		Local_96.f_26 = 1;
		return 1;
	}
	if (BitTest(Local_96.f_5, 7))
	{
		Local_96.f_26 = 0;
		return 1;
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_96.f_159))
	{
		if (ENTITY::IS_ENTITY_IN_WATER(NETWORK::NET_TO_OBJ(Local_96.f_159)) || __LIB_2__::func_826(NETWORK::NET_TO_ENT(Local_96.f_159), 0))
		{
			if (BitTest(Local_96.f_5, 29))
			{
				Local_96.f_26 = 3;
				return 1;
			}
		}
	}
	if (__LIB_1__::func_548(PLAYER::PLAYER_ID()))
	{
		Local_96.f_26 = 0;
		return 1;
	}
	if (func_138())
	{
		if (Global_1853193 != __LIB_0__::func_162())
		{
			if (__LIB_1__::func_637(Global_1853193))
			{
				Local_96.f_26 = 0;
				return 1;
			}
		}
	}
	if (func_199())
	{
		Local_96.f_26 = 1;
		return 1;
	}
	if (__LIB_9__::func_366(PLAYER::PLAYER_ID()))
	{
		Local_96.f_26 = 0;
		return 1;
	}
	if (func_197())
	{
		Local_96.f_26 = 0;
		return 1;
	}
	if (__LIB_6__::func_181())
	{
		Local_96.f_26 = 0;
		return 1;
	}
	if (func_32())
	{
		Local_96.f_26 = 0;
		return 1;
	}
	if (__LIB_18__::func_749())
	{
		Local_96.f_26 = 0;
		return 1;
	}
	if (__LIB_12__::func_637())
	{
		if (PED::IS_PED_DEAD_OR_DYING(PLAYER::PLAYER_PED_ID(), true))
		{
			Local_96.f_26 = 6;
			return 1;
		}
		if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_HURT(PLAYER::PLAYER_PED_ID()))
		{
			Local_96.f_26 = 6;
			return 1;
		}
		if (__LIB_0__::func_724(PLAYER::PLAYER_PED_ID(), Local_96.f_153, 1) > 2f)
		{
			Local_96.f_26 = 7;
			return 1;
		}
	}
	if (func_195())
	{
		return 1;
	}
	if (func_16())
	{
		if (__LIB_3__::func_909())
		{
			return 1;
		}
		if (__LIB_0__::func_1("AIRDEF_WARN" /* GXT: You are entering protected air space. If you remain you will be shot. */))
		{
			if (__LIB_0__::func_937(&(Local_96.f_346), 2000, 0))
			{
				return 1;
			}
		}
		else
		{
			__LIB_0__::func_794(&(Local_96.f_346));
		}
	}
	return 0;
}

int func_195()//Position - 0x603F
{
	struct<3> Var0;
	struct<3> Var1;
	Var0 = { -90000f, -90000f, -1600f };
	Var1 = { 90000f, 90000f, 2600f };
	if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_96.f_159))
	{
		return 0;
	}
	if (!ENTITY::IS_ENTITY_IN_AREA(NETWORK::NET_TO_OBJ(Local_96.f_159), Var0, Var1, false, true, 0))
	{
		return 1;
	}
	return 0;
}

bool func_197()//Position - 0x60A9
{
	return BitTest(Global_1958711, 9);
}

int func_199()//Position - 0x60DD
{
	struct<3> Var0;
	if (Local_96.f_17 == joaat("v_faceoffice"))
	{
		if (__LIB_0__::func_121(NETWORK::NET_TO_OBJ(Local_96.f_159)))
		{
			if (INTERIOR::GET_ROOM_KEY_FROM_ENTITY(NETWORK::NET_TO_OBJ(Local_96.f_159)) == joaat("GtaMloRoom001"))
			{
				Var0 = { ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_OBJ(Local_96.f_159), true) };
				if (Var0.f_2 >= 47f)
				{
					return 1;
				}
			}
		}
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_96.f_159))
	{
		if (__LIB_0__::func_121(NETWORK::NET_TO_OBJ(Local_96.f_159)))
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(NETWORK::NET_TO_OBJ(Local_96.f_159), -1071.2579f, -242.54842f, 48.021328f, -1069.456f, -245.9234f, 43.879833f, 3f, false, true, 0))
			{
				return 1;
			}
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(NETWORK::NET_TO_OBJ(Local_96.f_159), 2494.398f, -276.2f, -69.09f, 2494.3423f, -277.48242f, -67.987564f, 0.7f, false, true, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_203()//Position - 0x626A
{
	return BitTest(Global_1958711, 15);
}

void func_204()//Position - 0x6279
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	struct<3> Var5;
	int iVar6;
	var uVar7;
	struct<3> Var8;
	int iVar9;
	bool bVar10;
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_96.f_159) && !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_OBJ(Local_96.f_159), false))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_96.f_159))
		{
			Var0 = { Local_96.f_150 };
			switch (Local_96.f_13)
			{
				case 0:
					Var1 = { CAM::GET_FINAL_RENDERED_CAM_COORD() };
					Var2 = { CAM::GET_FINAL_RENDERED_CAM_ROT(2) };
					Var3 = { (-SYSTEM::SIN(Var2.f_2) * SYSTEM::COS(Var2.f_0)), (SYSTEM::COS(Var2.f_2) * SYSTEM::COS(Var2.f_0)), SYSTEM::SIN(Var2.f_0) };
					Var4 = { 10f, 10f, 10f };
					if (func_24())
					{
						Var4 = { Global_262145.f_25340 /* Tunable: 936176424 */, Global_262145.f_25340 /* Tunable: 936176424 */, Global_262145.f_25340 /* Tunable: 936176424 */ };
					}
					Var5 = { Var1 + Var3 * Var4 };
					Var0 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Local_96.f_150, ENTITY::GET_ENTITY_HEADING(NETWORK::NET_TO_OBJ(Local_96.f_159)), 0f, -0.1f, 0f) };
					Local_96.f_167 = SHAPETEST::START_SHAPE_TEST_LOS_PROBE(Var0, Var5, 123, NETWORK::NET_TO_OBJ(Local_96.f_159), 7);
					if (Local_96.f_167 != 0)
					{
						Local_96.f_13 = 1;
					}
					break;
				case 1:
					Local_96.f_244 = SHAPETEST::GET_SHAPE_TEST_RESULT(Local_96.f_167, &iVar6, &Var8, &uVar7, &iVar9);
					if (Local_96.f_244 == 2)
					{
						if (iVar6 == 0)
						{
							Local_96.f_14 = 1;
							Var8 = { 0f, 0f, 0f };
							if (BitTest(Local_96.f_5, 11) && !func_24())
							{
								MISC::CLEAR_BIT(&(Local_96.f_5), 11);
							}
							if (BitTest(Local_96.f_5, 23))
							{
								MISC::CLEAR_BIT(&(Local_96.f_5), 23);
							}
							func_211();
						}
						else
						{
							Local_96.f_14 = 2;
							if (ENTITY::DOES_ENTITY_EXIST(iVar9))
							{
								if (ENTITY::IS_ENTITY_A_PED(iVar9))
								{
									if (!ENTITY::IS_ENTITY_DEAD(iVar9, false))
									{
										if (PED::IS_PED_A_PLAYER(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar9)))
										{
											if (__LIB_0__::func_941(PLAYER::PLAYER_ID(), NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar9))))
											{
												bVar10 = true;
											}
										}
										else
										{
											if (!BitTest(Local_96.f_5, 23))
											{
												MISC::SET_BIT(&(Local_96.f_5), 23);
												if (BitTest(Local_96.f_5, 11) && !func_24())
												{
													MISC::CLEAR_BIT(&(Local_96.f_5), 11);
												}
											}
											if (!__LIB_0__::func_428(PLAYER::PLAYER_ID()) && !__LIB_33__::func_708(PLAYER::PLAYER_ID()))
											{
												if ((func_208(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar9)) || func_207(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar9))) || func_206(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar9)))
												{
													__LIB_25__::func_516(Global_1837205);
													__LIB_0__::func_627(&(Local_96.f_259), 0, 0);
												}
												else
												{
													func_211();
												}
											}
										}
										if ((((!BitTest(Local_96.f_5, 11) && !bVar10) && __LIB_0__::func_121(Global_1958711.f_23)) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(Global_1958711.f_23, iVar9, 511)) && (PED::IS_PED_A_PLAYER(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar9)) && PLAYER::PLAYER_PED_ID() != ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar9)))
										{
											MISC::SET_BIT(&(Local_96.f_5), 11);
											if (BitTest(Local_96.f_5, 23))
											{
												MISC::CLEAR_BIT(&(Local_96.f_5), 23);
											}
										}
									}
								}
								else
								{
									if (!func_24())
									{
										if (BitTest(Local_96.f_5, 11))
										{
											MISC::CLEAR_BIT(&(Local_96.f_5), 11);
										}
									}
									if (BitTest(Local_96.f_5, 23))
									{
										MISC::CLEAR_BIT(&(Local_96.f_5), 23);
									}
									func_211();
								}
							}
							else
							{
								func_211();
							}
							Local_96.f_167 = 0;
							Local_96.f_13 = 0;
						}
					}
					else if (Local_96.f_244 == 0)
					{
						Local_96.f_13 = 0;
					}
					break;
			}
		}
		else
		{
			NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_96.f_159);
		}
	}
}

int func_206(int iParam0)//Position - 0x65F0
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (PED::GET_PED_RELATIONSHIP_GROUP_DEFAULT_HASH(iParam0) == joaat("SECURITY_GUARD"))
		{
			return 1;
		}
	}
	return 0;
}

int func_207(int iParam0)//Position - 0x6614
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if ((((((((((((PED::GET_PED_TYPE(iParam0) == 7 || PED::GET_PED_TYPE(iParam0) == 8) || PED::GET_PED_TYPE(iParam0) == 9) || PED::GET_PED_TYPE(iParam0) == 10) || PED::GET_PED_TYPE(iParam0) == 11) || PED::GET_PED_TYPE(iParam0) == 12) || PED::GET_PED_TYPE(iParam0) == 13) || PED::GET_PED_TYPE(iParam0) == 14) || PED::GET_PED_TYPE(iParam0) == 15) || PED::GET_PED_TYPE(iParam0) == 16) || PED::GET_PED_TYPE(iParam0) == 17) || PED::GET_PED_TYPE(iParam0) == 18) || PED::GET_PED_TYPE(iParam0) == 19)
		{
			return 1;
		}
	}
	return 0;
}

int func_208(int iParam0)//Position - 0x66E9
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if ((((PED::GET_PED_TYPE(iParam0) == 6 || PED::GET_PED_TYPE(iParam0) == 29) || PED::GET_PED_TYPE(iParam0) == 27) || PED::GET_PED_RELATIONSHIP_GROUP_DEFAULT_HASH(iParam0) == joaat("ARMY")) || PED::GET_PED_RELATIONSHIP_GROUP_DEFAULT_HASH(iParam0) == joaat("COP"))
		{
			return 1;
		}
	}
	return 0;
}

void func_211()//Position - 0x679A
{
	if (__LIB_0__::func_864(&(Local_96.f_259)))
	{
		if (__LIB_0__::func_937(&(Local_96.f_259), 60000, 0))
		{
			__LIB_0__::func_794(&(Local_96.f_259));
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) <= 0)
			{
				__LIB_25__::func_516(Global_1837194);
			}
		}
	}
}

void func_212()//Position - 0x67DC
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	float fVar5;
	struct<3> Var6;
	struct<3> Var7;
	int iVar8;
	var uVar9;
	struct<3> Var10;
	int iVar11;
	int iVar12;
	int iVar13;
	if (((func_35() || func_24()) || func_38()) || func_16())
	{
		if (!BitTest(Local_96.f_5, 29))
		{
			return;
		}
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_96.f_159) && !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_OBJ(Local_96.f_159), false))
	{
		if (NETWORK::IS_ENTITY_IN_GHOST_COLLISION(NETWORK::NET_TO_OBJ(Local_96.f_159)))
		{
			return;
		}
		if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_96.f_159))
		{
			switch (Local_96.f_11)
			{
				case 0:
					if ((func_24() || func_38()) || func_35())
					{
						fVar5 = 0.3f;
					}
					else if (func_16())
					{
						fVar5 = 0.65f;
					}
					else
					{
						fVar5 = (__LIB_2__::func_760(Local_96.f_240) * 1.5f);
					}
					if (func_83())
					{
						Var6 = { Local_96.f_150 };
						Var1 = { CAM::GET_FINAL_RENDERED_CAM_COORD() };
						Var2 = { CAM::GET_FINAL_RENDERED_CAM_ROT(2) };
						Var3 = { (-SYSTEM::SIN(Var2.f_2) * SYSTEM::COS(Var2.f_0)), (SYSTEM::COS(Var2.f_2) * SYSTEM::COS(Var2.f_0)), SYSTEM::SIN(Var2.f_0) };
						Var4 = { 0.9f, 0.9f, 0.9f };
						if (func_16())
						{
							Var4 = { 1.9f, 1.9f, 1.9f };
						}
						Var7 = { Var1 + Var3 * Var4 };
					}
					else
					{
						Var6 = { Local_96.f_150 };
						Var7 = { Local_96.f_150 };
					}
					Local_96.f_166 = SHAPETEST::START_SHAPE_TEST_CAPSULE(Var6, Var7, fVar5, 511, NETWORK::NET_TO_OBJ(Local_96.f_159), 4);
					if (Local_96.f_166 != 0)
					{
						Local_96.f_11 = 1;
					}
					break;
				case 1:
					iVar12 = SHAPETEST::GET_SHAPE_TEST_RESULT(Local_96.f_166, &iVar8, &Var10, &uVar9, &iVar11);
					if (iVar12 == 2)
					{
						if (iVar8 == 0)
						{
							Local_96.f_12 = 1;
							Var10 = { 0f, 0f, 0f };
						}
						else
						{
							if (ENTITY::DOES_ENTITY_EXIST(iVar11))
							{
								if (ENTITY::IS_ENTITY_A_VEHICLE(iVar11))
								{
									if (!ENTITY::IS_ENTITY_DEAD(iVar11, false) && ENTITY::GET_ENTITY_MODEL(iVar11) != Local_96.f_240)
									{
										if (ENTITY::GET_ENTITY_SPEED(iVar11) > 0.5f || func_213(ENTITY::GET_ENTITY_MODEL(iVar11)))
										{
											if (!BitTest(Local_96.f_5, 9))
											{
												MISC::SET_BIT(&(Local_96.f_5), 9);
											}
										}
									}
								}
								else if (ENTITY::IS_ENTITY_A_PED(iVar11))
								{
									if (!ENTITY::IS_ENTITY_DEAD(iVar11, false))
									{
										if (!PED::IS_PED_A_PLAYER(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar11)))
										{
											if (Local_96.f_28 == 0)
											{
												iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
												if (iVar0 == 0)
												{
													iVar13 = 85;
												}
												else if (iVar0 == 1)
												{
													iVar13 = 90;
												}
												else
												{
													iVar13 = 79;
												}
												Local_96.f_28 = EVENT::ADD_SHOCKING_EVENT_AT_POSITION(iVar13, Local_96.f_150, 5000f);
												__LIB_0__::func_627(&(Local_96.f_265), 0, 0);
											}
										}
									}
								}
							}
							Local_96.f_12 = 2;
							PAD::SET_CONTROL_SHAKE(0 /*PLAYER_CONTROL*/, 300, 50);
							Local_96.f_166 = 0;
							Local_96.f_11 = 0;
						}
					}
					else if (iVar12 == 0)
					{
						Local_96.f_11 = 0;
					}
					break;
			}
			if (Local_96.f_28 != 0)
			{
				if (__LIB_0__::func_864(&(Local_96.f_265)))
				{
					if (__LIB_0__::func_937(&(Local_96.f_265), 5000, 0))
					{
						EVENT::REMOVE_SHOCKING_EVENT(Local_96.f_28);
						__LIB_0__::func_794(&(Local_96.f_265));
						Local_96.f_28 = 0;
					}
				}
			}
		}
		else
		{
			NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_96.f_159);
		}
	}
}

int func_213(int iParam0)//Position - 0x6AEE
{
	switch (iParam0)
	{
		case joaat("chernobog"):
		case joaat("dune4"):
		case joaat("dune5"):
		case joaat("skylift"):
		case joaat("taco"):
			return 1;
			break;
	}
	if (__LIB_0__::func_176(iParam0, 1))
	{
		return 1;
	}
	if (VEHICLE::IS_THIS_MODEL_A_HELI(iParam0) || VEHICLE::IS_THIS_MODEL_A_PLANE(iParam0))
	{
		return 1;
	}
	return 0;
}

void func_221()//Position - 0x7324
{
	int iVar0;
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_96.f_159))
	{
		if (__LIB_0__::func_121(NETWORK::NET_TO_OBJ(Local_96.f_159)))
		{
			iVar0 = func_224(NETWORK::NET_TO_OBJ(Local_96.f_159));
			if (iVar0 != -1)
			{
				if (!__LIB_3__::func_479(&(Global_1835502.f_389), iVar0) && !__LIB_3__::func_479(&(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_535), iVar0))
				{
					__LIB_21__::func_651(1);
				}
			}
		}
	}
}

int func_224(int iParam0)//Position - 0x73EC
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		iVar0 = __LIB_20__::func_86(iParam0);
		if (iVar0 != -1)
		{
			return iVar0;
		}
		iVar1 = INTERIOR::GET_INTERIOR_FROM_ENTITY(iParam0);
		if (iVar1 != 0)
		{
			iVar2 = 0;
			while (iVar2 < 43)
			{
				iVar3 = iVar2;
				__LIB_10__::func_346(iVar3);
				if (Global_1951109[iVar2] == iVar1)
				{
					return iVar3;
				}
				iVar2++;
			}
		}
	}
	return -1;
}

void func_237(int iParam0)//Position - 0x7F74
{
	int iVar0;
	int iVar1;
	if (func_35())
	{
		return;
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_96.f_159))
	{
		if (CAM::DOES_CAM_EXIST(Local_96.f_169) && CAM::IS_CAM_ACTIVE(Local_96.f_169))
		{
			if (CAM::IS_CAM_RENDERING(Local_96.f_169) || iParam0)
			{
				if (!__LIB_0__::func_94())
				{
					__LIB_1__::func_33(0);
				}
				__LIB_11__::func_966(1);
				if ((!__LIB_32__::func_304() || BitTest(Local_96.f_5, 1)) || func_193())
				{
					HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
				}
				else
				{
					HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
					HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
					HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
					__LIB_10__::func_564();
					__LIB_2__::func_57(1);
					iVar0 = INTERIOR::GET_INTERIOR_FROM_ENTITY(NETWORK::NET_TO_ENT(Local_96.f_159));
					if (INTERIOR::IS_VALID_INTERIOR(iVar0))
					{
						Global_1958711.f_24 = iVar0;
						if (!BitTest(Local_96.f_5, 8))
						{
							Local_96.f_123 = __LIB_0__::func_503(INTERIOR::GET_INTERIOR_HEADING(iVar0));
							INTERIOR::GET_INTERIOR_LOCATION_AND_NAMEHASH(iVar0, &(Local_96.f_147), &(Local_96.f_17));
							MISC::SET_BIT(&(Local_96.f_5), 8);
						}
						iVar1 = 0;
						if (func_243(Local_96.f_150.f_2, 43f, 48.7f))
						{
							iVar1 = 1;
						}
						if (Global_1958711.f_9 == -1f)
						{
							HUD::SET_RADAR_ZOOM_PRECISE(1f);
						}
						else
						{
							HUD::SET_RADAR_ZOOM_PRECISE(Global_1958711.f_9);
						}
						if ((!func_164(PLAYER::PLAYER_ID()) && !__LIB_2__::func_821(PLAYER::PLAYER_ID())) && !func_16())
						{
							if (!__LIB_12__::func_393())
							{
								__LIB_10__::func_199(1);
							}
						}
						if (!func_16())
						{
							HUD::SET_BIGMAP_ACTIVE(false, false);
						}
						HUD::SET_RADAR_AS_INTERIOR_THIS_FRAME(Local_96.f_17, Local_96.f_147, Local_96.f_147.f_1, SYSTEM::FLOOR(Local_96.f_123), iVar1);
					}
					else
					{
						Local_96.f_17 = -1;
						if (Global_1958711.f_9 == -1f)
						{
							HUD::SET_RADAR_ZOOM_PRECISE(0f);
						}
						else
						{
							HUD::SET_RADAR_ZOOM_PRECISE(Global_1958711.f_9);
						}
						if (!__LIB_12__::func_393() && !func_16())
						{
							__LIB_10__::func_199(1);
						}
						if (!func_16())
						{
							HUD::SET_BIGMAP_ACTIVE(false, false);
						}
						Global_1958711.f_24 = -1;
						if (BitTest(Local_96.f_5, 8))
						{
							MISC::CLEAR_BIT(&(Local_96.f_5), 8);
						}
					}
				}
			}
		}
	}
}

int func_243(float fParam0, float fParam1, float fParam2)//Position - 0x81D8
{
	if (fParam0 >= fParam1 && fParam0 < fParam2)
	{
		return 1;
	}
	return 0;
}

void func_249()//Position - 0x8283
{
	float fVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	bool bVar7;
	bool bVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	struct<3> Var14;
	struct<3> Var15;
	float fVar16;
	struct<3> Var17;
	float fVar18;
	float fVar19;
	float fVar20;
	float fVar21;
	struct<3> Var22;
	struct<3> Var23;
	float fVar24;
	float fVar25;
	var uVar26;
	var uVar27;
	struct<3> Var28;
	if ((BitTest(Local_96.f_5, 1) || func_193()) || func_83())
	{
		return;
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_96.f_159) && !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_OBJ(Local_96.f_159), false))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_96.f_159))
		{
			fVar0 = 40f;
			fVar1 = 19f;
			fVar2 = 14f;
			iVar3 = 1;
			fVar4 = ENTITY::GET_ENTITY_ROLL(NETWORK::NET_TO_OBJ(Local_96.f_159));
			fVar5 = ENTITY::GET_ENTITY_PITCH(NETWORK::NET_TO_OBJ(Local_96.f_159));
			if (func_30())
			{
				fVar1 = 10f;
			}
			fVar6 = (30f * SYSTEM::TIMESTEP());
			func_254();
			PAD::ALLOW_ALTERNATIVE_SCRIPT_CONTROLS_LAYOUT(2 /*FRONTEND_CONTROL*/);
			__LIB_0__::func_341(&(Local_96[0]), &(Local_96[1]), &(Local_96[2]), &(Local_96[3]), 0, 0);
			if (PAD::IS_USING_KEYBOARD_AND_MOUSE(0 /*PLAYER_CONTROL*/))
			{
				iVar3 = 5;
				Local_96[2] = (Local_96[2] * iVar3);
				Local_96[3] = (Local_96[3] * iVar3);
			}
			if (PAD::IS_LOOK_INVERTED())
			{
				Local_96[3] = (Local_96[3] * -1);
			}
			if (__LIB_0__::func_937(&(Local_96.f_277), 750, 0))
			{
				if (!PAD::IS_USING_KEYBOARD_AND_MOUSE(0 /*PLAYER_CONTROL*/))
				{
					bVar7 = PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 210 /*INPUT_FRONTEND_RS*/);
				}
				else
				{
					bVar7 = (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 241 /*INPUT_CURSOR_SCROLL_UP*/) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 242 /*INPUT_CURSOR_SCROLL_DOWN*/));
					if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 241 /*INPUT_CURSOR_SCROLL_UP*/))
					{
						bVar8 = true;
					}
				}
				if (bVar7)
				{
					__LIB_0__::func_627(&(Local_96.f_277), 0, 0);
				}
			}
			if (bVar7 && !func_252())
			{
				if (!PAD::IS_USING_KEYBOARD_AND_MOUSE(0 /*PLAYER_CONTROL*/))
				{
					Local_96.f_25++;
				}
				else if (bVar8)
				{
					Local_96.f_25 = (Local_96.f_25 - 1);
				}
				else
				{
					Local_96.f_25++;
				}
				if (AUDIO::HAS_SOUND_FINISHED(Local_96.f_39))
				{
					Local_96.f_39 = AUDIO::GET_SOUND_ID();
					AUDIO::PLAY_SOUND_FRONTEND(Local_96.f_39, "HUD_Zoom_Change", Local_96.f_157, true);
				}
				if (Local_96.f_25 > 2)
				{
					Local_96.f_25 = 0;
				}
				else if (Local_96.f_25 < 0)
				{
					Local_96.f_25 = 2;
				}
			}
			else if (AUDIO::HAS_SOUND_FINISHED(Local_96.f_39))
			{
				AUDIO::STOP_SOUND(Local_96.f_39);
				AUDIO::RELEASE_SOUND_ID(Local_96.f_39);
				Local_96.f_39 = -1;
			}
			Local_96.f_128 = (Local_96.f_128 + (((Local_96.f_126 - Local_96.f_128) * 0.06f) * fVar6));
			CAM::SET_CAM_FOV(Local_96.f_169, Local_96.f_128);
			if (Local_96[2] != 0 || Local_96[3] != 0)
			{
				if (Local_96[2] != 0)
				{
					fVar9 = (1f / (127f / IntToFloat(Local_96[2])));
				}
				else
				{
					fVar9 = 0f;
				}
				if (Local_96[3] != 0)
				{
					fVar10 = (1f / (127f / IntToFloat(Local_96[3])));
				}
				else
				{
					fVar10 = 0f;
				}
				Var14 = { ENTITY::GET_ENTITY_ROTATION(NETWORK::NET_TO_OBJ(Local_96.f_159), 2) };
				fVar11 = (((fVar10 * 0.05f) * fVar6) * Local_96.f_130);
				fVar12 = -(((fVar9 * 0.05f) * fVar6) * Local_96.f_130);
				if ((fVar4 != 0f || Local_96[0] != 0) && !__LIB_0__::func_94())
				{
					if (Local_96[0] != 0)
					{
						fVar16 = (1f / (127f / IntToFloat(Local_96[0])));
						fVar13 = -(((fVar16 * 0.05f) * fVar6) * (fVar0 - 25f));
					}
					else
					{
						if (fVar4 > 0.1f || fVar4 < -0.1f)
						{
							if (fVar4 > 0f)
							{
								fVar16 = -1f;
							}
							else
							{
								fVar16 = 1f;
							}
						}
						if (Var14.f_1 != 0f)
						{
							if (Var14.f_1 < 1.5f && Var14.f_1 > 0f)
							{
								fVar16 = 0.001f;
							}
							else if (Var14.f_1 > -1.5f && Var14.f_1 < 0f)
							{
								fVar16 = -0.001f;
							}
						}
						else
						{
							fVar16 = 0f;
						}
						fVar13 = -(((fVar16 * 0.05f) * fVar6) * (fVar0 - 25f));
					}
				}
				else
				{
					fVar13 = 0f;
				}
				Var15 = { Vector(fVar12, fVar13, fVar11) + Var14 };
				if (fVar4 != 0f)
				{
					if (Local_96[0] == 0)
					{
						if (Var15.f_1 > fVar1)
						{
							Var15.f_1 = fVar1;
						}
						else if (Var15.f_1 < -fVar1)
						{
							Var15.f_1 = -fVar1;
						}
					}
					else if (Var15.f_1 > fVar1)
					{
						Var15.f_1 = fVar1;
					}
					else if (Var15.f_1 < -fVar1)
					{
						Var15.f_1 = -fVar1;
					}
				}
				if (Var15.f_0 > fVar2)
				{
					Var15.f_0 = fVar2;
				}
				else if (Var15.f_0 < -fVar2)
				{
					Var15.f_0 = -fVar2;
				}
				if (!BitTest(Local_96.f_5, 12))
				{
					MISC::SET_BIT(&(Local_96.f_5), 12);
				}
				ENTITY::SET_ENTITY_ROTATION(NETWORK::NET_TO_OBJ(Local_96.f_159), Vector(0f, 0f, 0f) + Vector(Var15.f_2, Var15.f_1, Var15.f_0), 2, true);
			}
			else if (((Local_96[0] != 0 || Local_96[1] != 0) && !func_252()) && !__LIB_0__::func_94())
			{
				Var17 = { ENTITY::GET_ENTITY_ROTATION(NETWORK::NET_TO_OBJ(Local_96.f_159), 2) };
				if (func_252())
				{
					if (func_251())
					{
						fVar19 = -1f;
						Local_96.f_129 = fVar19;
					}
				}
				else
				{
					if (Local_96[0] != 0)
					{
						fVar18 = (1f / (127f / IntToFloat(Local_96[0])));
						Local_96.f_129 = fVar18;
					}
					else
					{
						fVar18 = 0f;
					}
					if (Local_96[1] != 0)
					{
						fVar19 = (1f / (127f / IntToFloat(Local_96[1])));
						Local_96.f_129 = fVar18;
					}
					else
					{
						fVar19 = 0f;
					}
				}
				fVar20 = -(((fVar19 * 0.05f) * fVar6) * fVar0);
				fVar21 = -(((fVar18 * 0.05f) * fVar6) * fVar0);
				if (fVar4 != 0f)
				{
					if ((Local_96[0] == 0 && !__LIB_0__::func_94()) || func_252())
					{
						if (fVar4 > 1f || fVar4 < -1f)
						{
							if (fVar4 > 0f)
							{
								fVar18 = -1f;
							}
							else
							{
								fVar18 = 1f;
							}
						}
						if (Var17.f_1 < 1.5f && Var17.f_1 > 0f)
						{
							fVar18 = 0.001f;
						}
						else if (Var17.f_1 > -1.5f && Var17.f_1 < 0f)
						{
							fVar18 = -0.001f;
						}
						fVar21 = -(((fVar18 * 0.05f) * fVar6) * (fVar0 - 25f));
					}
				}
				Var22 = { Vector(0f, fVar21, fVar20) + Var17 };
				if (Var22.f_1 > fVar1)
				{
					Var22.f_1 = fVar1;
				}
				else if (Var22.f_1 < -fVar1)
				{
					Var22.f_1 = -fVar1;
				}
				if (Var22.f_0 > fVar2)
				{
					Var22.f_0 = fVar2;
				}
				else if (Var22.f_0 < -fVar2)
				{
					Var22.f_0 = -fVar2;
				}
				if (BitTest(Local_96.f_5, 12))
				{
					MISC::CLEAR_BIT(&(Local_96.f_5), 12);
				}
				ENTITY::SET_ENTITY_ROTATION(NETWORK::NET_TO_OBJ(Local_96.f_159), Vector(0f, 0f, 0f) + Vector(Var17.f_2, Var22.f_1, Var22.f_0), 2, true);
			}
			else if (!func_251() && !func_252())
			{
				Local_96.f_129 = 0f;
				Var23 = { ENTITY::GET_ENTITY_ROTATION(NETWORK::NET_TO_OBJ(Local_96.f_159), 2) };
				if (fVar4 != 0f || fVar5 != 0f)
				{
					if (Var23.f_1 != 0f)
					{
						if (Var23.f_1 < 0f)
						{
							fVar24 = -1f;
						}
						else
						{
							fVar24 = 1f;
						}
					}
					else
					{
						fVar24 = 0f;
					}
					if (fVar5 != 0f)
					{
						if (Var23.f_0 < 0f)
						{
							fVar25 = -1f;
						}
						else
						{
							fVar25 = 1f;
						}
					}
					else
					{
						fVar25 = 0f;
					}
					if (Var23.f_1 != 0f)
					{
						if (Var23.f_1 < 1.5f && Var23.f_1 > 0f)
						{
							fVar24 = 0.001f;
						}
						else if (Var23.f_1 > -1.5f && Var23.f_1 < 0f)
						{
							fVar24 = -0.001f;
						}
					}
					else
					{
						fVar24 = 0f;
					}
					if (Var23.f_0 != 0f)
					{
						if (Var23.f_0 < 1.5f && Var23.f_0 > 0f)
						{
							fVar25 = 0.001f;
						}
						else if (Var23.f_0 > -1.5f && Var23.f_0 < 0f)
						{
							fVar25 = -0.001f;
						}
					}
					else
					{
						fVar25 = 0f;
					}
					uVar26 = __LIB_3__::func_555(-(((fVar25 * 0.05f) * fVar6) * (fVar0 - 25f)));
					uVar27 = __LIB_3__::func_555(-(((fVar24 * 0.05f) * fVar6) * (fVar0 - 25f)));
					Var28 = { Vector(0f, uVar27, uVar26) + Var23 };
					if (BitTest(Local_96.f_5, 12))
					{
						Var28.f_0 = Var23.f_0;
					}
					ENTITY::SET_ENTITY_ROTATION(NETWORK::NET_TO_OBJ(Local_96.f_159), Vector(0f, 0f, 0f) + Vector(Var23.f_2, Var28.f_1, Var28.f_0), 2, true);
				}
			}
		}
		else
		{
			NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_96.f_159);
		}
	}
}

bool func_251()//Position - 0x8A6F
{
	return BitTest(Local_96.f_5, 22);
}

bool func_252()//Position - 0x8A7E
{
	return BitTest(Local_96.f_5, 21);
}

void func_254()//Position - 0x8B91
{
	if (func_138())
	{
		switch (Local_96.f_25)
		{
			case 0:
				Local_96.f_127 = 90f;
				Local_96.f_126 = 90f;
				break;
			case 1:
				Local_96.f_127 = 75f;
				Local_96.f_126 = 75f;
				break;
			case 2:
				Local_96.f_127 = 45f;
				Local_96.f_126 = 45f;
				break;
		}
	}
	else
	{
		switch (Local_96.f_25)
		{
			case 0:
				Local_96.f_127 = 90f;
				Local_96.f_126 = 90f;
				break;
			case 1:
				Local_96.f_127 = 80f;
				Local_96.f_126 = 80f;
				break;
			case 2:
				Local_96.f_127 = 70f;
				Local_96.f_126 = 70f;
				break;
			}
	}
}

void func_255()//Position - 0x8C57
{
	int iVar0;
	int iVar1;
	if (__LIB_0__::func_891(PLAYER::PLAYER_ID(), 0))
	{
		iVar0 = func_180(0);
		Local_96.f_141 = { func_258(&Local_96) };
		if (!ENTITY::DOES_ENTITY_EXIST(Local_96.f_162))
		{
			if (!__LIB_0__::func_86(Local_96.f_141))
			{
				if (__LIB_0__::func_799(iVar0))
				{
					Local_96.f_162 = OBJECT::CREATE_OBJECT(iVar0, Local_96.f_141, false, false, true);
					ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_96.f_162, Local_96.f_141, false, false, true);
					ENTITY::SET_ENTITY_COLLISION(Local_96.f_162, true, false);
					ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_96.f_162, true, 1);
					ENTITY::SET_ENTITY_RECORDS_COLLISIONS(Local_96.f_162, true);
					ENTITY::SET_ENTITY_HEADING(Local_96.f_162, func_256());
					ENTITY::FREEZE_ENTITY_POSITION(Local_96.f_162, true);
					ENTITY::SET_ENTITY_VISIBLE(Local_96.f_162, false, false);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
				}
			}
		}
		else
		{
			iVar1 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(Local_96.f_141, 2f, iVar0, false, false, false);
			if (ENTITY::DOES_ENTITY_EXIST(iVar1) && iVar1 != Local_96.f_162)
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar1))
				{
					ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(iVar1, false, false);
					ENTITY::FREEZE_ENTITY_POSITION(iVar1, true);
					ENTITY::SET_ENTITY_VISIBLE(iVar1, true, false);
				}
				else
				{
					NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(iVar1);
				}
			}
		}
	}
	else
	{
		Local_96.f_141 = { func_258(&Local_96) };
	}
}

float func_256()//Position - 0x8D6A
{
	if (Global_1958711.f_7 != 0f)
	{
		return Global_1958711.f_7;
	}
	return 0f;
}

Vector3 func_258(var uParam0)//Position - 0x8DB1
{
	if (!__LIB_0__::func_86(Global_1958711.f_10))
	{
		return Global_1958711.f_10;
	}
	else
	{
		return uParam0->f_141;
	}
	return 0f, 0f, 0f;
}

void func_259()//Position - 0x8DE3
{
	if (Local_96.f_33 != -1)
	{
		AUDIO::STOP_SOUND(Local_96.f_33);
		AUDIO::RELEASE_SOUND_ID(Local_96.f_33);
		Local_96.f_33 = -1;
	}
}

int func_260(bool bParam0)//Position - 0x8E08
{
	if (HUD::IS_PAUSE_MENU_ACTIVE() || NETWORK::IS_COMMERCE_STORE_OPEN())
	{
		return 1;
	}
	if (NETWORK::NETWORK_TEXT_CHAT_IS_TYPING())
	{
		return 1;
	}
	if (__LIB_32__::func_307())
	{
		return 1;
	}
	if (__LIB_0__::func_457(PLAYER::PLAYER_ID()) && !__LIB_1__::func_11())
	{
		return 1;
	}
	if (func_164(PLAYER::PLAYER_ID()))
	{
		if (BitTest(Global_2813821, 0))
		{
			return 1;
		}
	}
	if (Global_1931426 || Global_1574964)
	{
		__LIB_21__::func_277(1);
		return 1;
	}
	if (((__LIB_2__::func_65(0) || __LIB_0__::func_104(1)) || __LIB_10__::func_565()) && !bParam0)
	{
		__LIB_1__::func_33(0);
		__LIB_10__::func_564();
		func_99();
		return 1;
	}
	return 0;
}

void func_267()//Position - 0x90A1
{
	float fVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	int iVar6;
	float fVar7;
	int iVar8;
	int iVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	float fVar14;
	struct<3> Var15;
	struct<3> Var16;
	float fVar17;
	struct<3> Var18;
	float fVar19;
	float fVar20;
	float fVar21;
	float fVar22;
	struct<3> Var23;
	struct<3> Var24;
	float fVar25;
	float fVar26;
	var uVar27;
	var uVar28;
	struct<3> Var29;
	var uVar30;
	if (!func_83() || func_193())
	{
		return;
	}
	if (func_35() && func_260(0))
	{
		return;
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_96.f_159) && !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_OBJ(Local_96.f_159), false))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_96.f_159))
		{
			fVar0 = 40f;
			fVar1 = 30f;
			fVar2 = 30f;
			iVar3 = 1;
			fVar4 = ENTITY::GET_ENTITY_ROLL(NETWORK::NET_TO_OBJ(Local_96.f_159));
			fVar5 = ENTITY::GET_ENTITY_PITCH(NETWORK::NET_TO_OBJ(Local_96.f_159));
			iVar6 = 1;
			if (func_16())
			{
				if (func_260(1))
				{
					iVar6 = 0;
				}
			}
			else if (func_260(0))
			{
				iVar6 = 0;
			}
			if (func_16())
			{
				if (!func_130())
				{
					iVar6 = 0;
				}
				fVar2 = 80f;
			}
			fVar7 = (30f * MISC::GET_FRAME_TIME());
			func_254();
			PAD::ALLOW_ALTERNATIVE_SCRIPT_CONTROLS_LAYOUT(2 /*FRONTEND_CONTROL*/);
			__LIB_0__::func_341(&(Local_96[0]), &(Local_96[1]), &(Local_96[2]), &(Local_96[3]), 0, 0);
			if (PAD::IS_USING_KEYBOARD_AND_MOUSE(0 /*PLAYER_CONTROL*/))
			{
				iVar3 = 2;
				if (func_16())
				{
					iVar3 = 3;
				}
				Local_96[2] = (Local_96[2] * iVar3);
				Local_96[3] = (Local_96[3] * iVar3);
			}
			if (PAD::IS_LOOK_INVERTED())
			{
				Local_96[3] = (Local_96[3] * -1);
				Local_96[1] = (Local_96[1] * -1);
			}
			if (Local_96[3] != 0 && Local_96[2] != 0)
			{
				iVar8 = __LIB_1__::func_723(MISC::ABSI(Local_96[3]), MISC::ABSI(Local_96[2]));
				Local_96.f_129 = (1f / (127f / IntToFloat(iVar8)));
			}
			else if (Local_96[1] != 0 && Local_96[0] != 0)
			{
				iVar9 = __LIB_1__::func_723(MISC::ABSI(Local_96[1]), MISC::ABSI(Local_96[0]));
				Local_96.f_129 = (1f / (127f / IntToFloat(iVar9)));
			}
			else if (Local_96[3] != 0)
			{
				Local_96.f_129 = (1f / (127f / IntToFloat(Local_96[3])));
			}
			else if (Local_96[2] != 0)
			{
				Local_96.f_129 = (1f / (127f / IntToFloat(Local_96[2])));
			}
			else if (Local_96[1] != 0)
			{
				Local_96.f_129 = (1f / (127f / IntToFloat(Local_96[1])));
			}
			else if (Local_96[0] != 0)
			{
				Local_96.f_129 = (1f / (127f / IntToFloat(Local_96[0])));
			}
			else
			{
				Local_96.f_129 = 0f;
			}
			if (iVar6 && ((Local_96[2] != 0 || Local_96[3] != 0) || (Local_96[0] != 0 || Local_96[1] != 0)))
			{
				if (Local_96[2] != 0)
				{
					fVar10 = (1f / (127f / IntToFloat(Local_96[2])));
				}
				else if (Local_96[0] != 0)
				{
					fVar10 = (1f / (127f / IntToFloat(Local_96[0])));
				}
				else
				{
					fVar10 = 0f;
				}
				if (Local_96[3] != 0)
				{
					fVar11 = (1f / (127f / IntToFloat(Local_96[3])));
				}
				else if (Local_96[1] != 0)
				{
					fVar11 = (1f / (127f / IntToFloat(Local_96[1])));
				}
				else
				{
					fVar11 = 0f;
				}
				Var15 = { ENTITY::GET_ENTITY_ROTATION(NETWORK::NET_TO_OBJ(Local_96.f_159), 2) };
				fVar12 = (((fVar11 * 0.05f) * fVar7) * Local_96.f_130);
				fVar13 = -(((fVar10 * 0.05f) * fVar7) * Local_96.f_130);
				if ((fVar4 != 0f || Local_96[2] != 0) || Local_96[0] != 0)
				{
					if (Local_96[2] != 0)
					{
						fVar17 = (1f / (127f / IntToFloat(Local_96[2])));
						fVar14 = -(((fVar17 * 0.05f) * fVar7) * (fVar0 - 25f));
					}
					else if (Local_96[0] != 0)
					{
						fVar17 = (1f / (127f / IntToFloat(Local_96[0])));
						fVar14 = -(((fVar17 * 0.05f) * fVar7) * (fVar0 - 25f));
					}
					else
					{
						if (fVar4 > 0.1f || fVar4 < -0.1f)
						{
							if (fVar4 > 0f)
							{
								fVar17 = -1f;
							}
							else
							{
								fVar17 = 1f;
							}
						}
						if (Var15.f_1 != 0f)
						{
							if (Var15.f_1 < 2f && Var15.f_1 > 0f)
							{
								fVar17 = 0.0001f;
							}
							else if (Var15.f_1 > -2f && Var15.f_1 < 0f)
							{
								fVar17 = -0.0001f;
							}
						}
						else
						{
							fVar17 = 0f;
						}
						fVar14 = -(((fVar17 * 0.05f) * fVar7) * (fVar0 - 25f));
					}
				}
				else
				{
					fVar14 = 0f;
				}
				Var16 = { Vector(fVar13, fVar14, fVar12) + Var15 };
				if (fVar4 != 0f)
				{
					if (Local_96[2] == 0 && Local_96[0] == 0)
					{
						if (Var16.f_1 > fVar1)
						{
							Var16.f_1 = fVar1;
						}
						else if (Var16.f_1 < -fVar1)
						{
							Var16.f_1 = -fVar1;
						}
					}
					else if (Var16.f_1 > fVar1)
					{
						Var16.f_1 = fVar1;
					}
					else if (Var16.f_1 < -fVar1)
					{
						Var16.f_1 = -fVar1;
					}
				}
				if (Var16.f_0 > fVar2)
				{
					Var16.f_0 = fVar2;
				}
				else if (Var16.f_0 < -fVar2)
				{
					Var16.f_0 = -fVar2;
				}
				if (!BitTest(Local_96.f_5, 12))
				{
					MISC::SET_BIT(&(Local_96.f_5), 12);
				}
				ENTITY::SET_ENTITY_ROTATION(NETWORK::NET_TO_OBJ(Local_96.f_159), Vector(0f, 0f, 0f) + Vector(Var16.f_2, Var16.f_1, Var16.f_0), 2, true);
			}
			else if (iVar6 && (((Local_96[2] != 0 || Local_96[3] != 0) || Local_96[0] != 0) || Local_96[1] != 0))
			{
				Var18 = { ENTITY::GET_ENTITY_ROTATION(NETWORK::NET_TO_OBJ(Local_96.f_159), 2) };
				if (func_252())
				{
					if (func_251())
					{
						fVar20 = -1f;
					}
				}
				else
				{
					if (Local_96[2] != 0)
					{
						fVar19 = (1f / (127f / IntToFloat(Local_96[2])));
					}
					else if (Local_96[0] != 0)
					{
						fVar19 = (1f / (127f / IntToFloat(Local_96[0])));
					}
					else
					{
						fVar19 = 0f;
					}
					if (Local_96[3] != 0)
					{
						fVar20 = (1f / (127f / IntToFloat(Local_96[3])));
					}
					else if (Local_96[1] != 0)
					{
						fVar20 = (1f / (127f / IntToFloat(Local_96[1])));
					}
					else
					{
						fVar20 = 0f;
					}
				}
				fVar21 = -(((fVar20 * 0.05f) * fVar7) * fVar0);
				fVar22 = -(((fVar19 * 0.05f) * fVar7) * fVar0);
				if (fVar4 != 0f)
				{
					if (Local_96[2] == 0 && Local_96[0] == 0)
					{
						if (fVar4 > 1f || fVar4 < -1f)
						{
							if (fVar4 > 0f)
							{
								fVar19 = -1f;
							}
							else
							{
								fVar19 = 1f;
							}
						}
						if (Var18.f_1 < 2f && Var18.f_1 > 0f)
						{
							fVar19 = 0.0001f;
						}
						else if (Var18.f_1 > -2f && Var18.f_1 < 0f)
						{
							fVar19 = -0.0001f;
						}
						fVar22 = -(((fVar19 * 0.05f) * fVar7) * (fVar0 - 25f));
					}
				}
				Var23 = { Vector(0f, fVar22, fVar21) + Var18 };
				if (Var23.f_1 > fVar1)
				{
					Var23.f_1 = fVar1;
				}
				else if (Var23.f_1 < -fVar1)
				{
					Var23.f_1 = -fVar1;
				}
				if (Var23.f_0 > fVar2)
				{
					Var23.f_0 = fVar2;
				}
				else if (Var23.f_0 < -fVar2)
				{
					Var23.f_0 = -fVar2;
				}
				if (BitTest(Local_96.f_5, 12))
				{
					MISC::CLEAR_BIT(&(Local_96.f_5), 12);
				}
				ENTITY::SET_ENTITY_ROTATION(NETWORK::NET_TO_OBJ(Local_96.f_159), Vector(0f, 0f, 0f) + Vector(Var18.f_2, Var23.f_1, Var23.f_0), 2, true);
			}
			else
			{
				Var24 = { ENTITY::GET_ENTITY_ROTATION(NETWORK::NET_TO_OBJ(Local_96.f_159), 2) };
				if (fVar4 != 0f || fVar5 != 0f)
				{
					if (Var24.f_1 != 0f)
					{
						if (Var24.f_1 < 0f)
						{
							fVar25 = -1f;
						}
						else
						{
							fVar25 = 1f;
						}
					}
					else
					{
						fVar25 = 0f;
					}
					if (fVar5 != 0f)
					{
						if (Var24.f_0 < 0f)
						{
							fVar26 = -1f;
						}
						else
						{
							fVar26 = 1f;
						}
					}
					else
					{
						fVar26 = 0f;
					}
					if (Var24.f_1 != 0f)
					{
						if (Var24.f_1 < 2f && Var24.f_1 > 0f)
						{
							fVar25 = 0.0001f;
						}
						else if (Var24.f_1 > -2f && Var24.f_1 < 0f)
						{
							fVar25 = -0.0001f;
						}
					}
					else
					{
						fVar25 = 0f;
					}
					if (Var24.f_0 != 0f)
					{
						if (Var24.f_0 < 2f && Var24.f_0 > 0f)
						{
							fVar26 = 0.0001f;
						}
						else if (Var24.f_0 > -2f && Var24.f_0 < 0f)
						{
							fVar26 = -0.0001f;
						}
					}
					else
					{
						fVar26 = 0f;
					}
					uVar27 = __LIB_3__::func_555(-(((fVar26 * 0.05f) * fVar7) * (fVar0 - 25f)));
					uVar28 = __LIB_3__::func_555(-(((fVar25 * 0.05f) * fVar7) * (fVar0 - 25f)));
					Var29 = { Vector(0f, uVar28, uVar27) + Var24 };
					if (BitTest(Local_96.f_5, 12))
					{
						Var29.f_0 = Var24.f_0;
					}
					uVar30 = Var24.f_2;
					if (func_16())
					{
						if (!func_130())
						{
							uVar30 = Local_96.f_116;
							Var29.f_1 = 0f;
						}
					}
					ENTITY::SET_ENTITY_ROTATION(NETWORK::NET_TO_OBJ(Local_96.f_159), Vector(0f, 0f, 0f) + Vector(uVar30, Var29.f_1, Var29.f_0), 2, true);
					if (func_16())
					{
						if (MISC::ABSF(fVar4) < 2.5f && MISC::ABSF(fVar5) < 2.5f)
						{
							func_268(1);
						}
					}
				}
				else if (func_16())
				{
					func_268(1);
				}
			}
		}
		else
		{
			NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_96.f_159);
		}
	}
}

void func_268(bool bParam0)//Position - 0x9977
{
	if (!bParam0)
	{
		if (BitTest(Local_96.f_6, 6))
		{
			MISC::CLEAR_BIT(&(Local_96.f_6), 6);
		}
	}
	else if (!BitTest(Local_96.f_6, 6))
	{
		MISC::SET_BIT(&(Local_96.f_6), 6);
	}
}

void func_270()//Position - 0x99C3
{
	float fVar0;
	float fVar1;
	float fVar2;
	if (func_35())
	{
		return;
	}
	if (__LIB_32__::func_304())
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_96.f_159))
		{
			if (!HUD::DOES_BLIP_EXIST(Local_96.f_171))
			{
				Local_96.f_171 = __LIB_0__::func_488(Local_96.f_150, 0);
				HUD::SET_BLIP_SPRITE(Local_96.f_171, func_284());
				if (func_30() && !HUD::DOES_BLIP_EXIST(Local_96.f_172))
				{
					Local_96.f_172 = __LIB_0__::func_639(PLAYER::PLAYER_PED_ID(), 0, 0);
					HUD::SET_BLIP_SPRITE(Local_96.f_172, 6);
					HUD::SHOW_HEIGHT_ON_BLIP(Local_96.f_172, false);
					HUD::SET_BLIP_SCALE(Local_96.f_172, 0.7f);
					HUD::SET_BLIP_PRIORITY(Local_96.f_172, (13 - 1));
					if (__LIB_1__::func_368(PLAYER::PLAYER_ID()) != -1)
					{
						__LIB_2__::func_53(&(Local_96.f_172), __LIB_1__::func_357(__LIB_1__::func_368(PLAYER::PLAYER_ID())));
					}
					else
					{
						__LIB_2__::func_53(&(Local_96.f_172), __LIB_15__::func_288());
					}
					HUD::SET_BLIP_HIDDEN_ON_LEGEND(Local_96.f_172, true);
				}
			}
			else
			{
				fVar0 = __LIB_28__::func_361(Local_96.f_124);
				fVar1 = Local_96.f_150;
				fVar2 = Local_96.f_150.f_1;
				HUD::SET_BLIP_DISPLAY(Local_96.f_171, 2);
				HUD::SET_BLIP_COORDS(Local_96.f_171, Local_96.f_150);
				if (((func_24() || func_38()) && HUD::IS_PAUSE_MENU_ACTIVE()) && NETWORK::NETWORK_IS_ACTIVITY_SESSION())
				{
					if (!HUD::IS_PAUSEMAP_IN_INTERIOR_MODE())
					{
						fVar1 = -323.1f;
						fVar2 = -1970.9f;
						HUD::SET_BLIP_COORDS(Local_96.f_171, fVar1, fVar2, 0f);
						HUD::SET_FAKE_PAUSEMAP_PLAYER_POSITION_THIS_FRAME(fVar1, fVar2);
						HUD::HIDE_MINIMAP_INTERIOR_MAP_THIS_FRAME();
					}
				}
				HUD::LOCK_MINIMAP_POSITION(fVar1, fVar2);
				HUD::SET_BLIP_ROTATION(Local_96.f_171, SYSTEM::ROUND(fVar0));
				HUD::SET_BLIP_SCALE(Local_96.f_171, 1f);
				HUD::SET_BLIP_PRIORITY(Local_96.f_171, 9);
				HUD::LOCK_MINIMAP_ANGLE(SYSTEM::ROUND(fVar0));
				if (HUD::DOES_BLIP_EXIST(Local_96.f_172))
				{
					HUD::SET_BLIP_ROTATION(Local_96.f_172, __LIB_27__::func_518(PLAYER::PLAYER_PED_ID()));
				}
			}
		}
	}
}

int func_284()//Position - 0xA077
{
	if (func_16())
	{
		return 548;
	}
	return 627;
}

void func_286()//Position - 0xA0BB
{
	if (func_35())
	{
		if (Local_96.f_150.f_2 >= (func_109() - 20f))
		{
			if (AUDIO::HAS_SOUND_FINISHED(Local_96.f_37))
			{
				Local_96.f_37 = AUDIO::GET_SOUND_ID();
				AUDIO::PLAY_SOUND_FRONTEND(Local_96.f_37, "Out_Of_Bounds_Alarm_Loop", Local_96.f_157, true);
			}
		}
		else if (!AUDIO::HAS_SOUND_FINISHED(Local_96.f_37))
		{
			AUDIO::STOP_SOUND(Local_96.f_37);
			AUDIO::RELEASE_SOUND_ID(Local_96.f_37);
			Local_96.f_37 = -1;
		}
	}
}

void func_287()//Position - 0xA126
{
	if (((func_38() || func_138()) || func_30()) || func_160())
	{
		switch (Local_96.f_242)
		{
			case 0:
				func_310();
				break;
			case 1:
				func_297();
				break;
			case 2:
				func_295();
				break;
			case 3:
				func_288();
				break;
			}
	}
}

void func_288()//Position - 0xA190
{
	__LIB_0__::func_366(1);
	if (!__LIB_0__::func_833())
	{
		CAM::DO_SCREEN_FADE_IN(500);
	}
	__LIB_33__::func_207(0);
	__LIB_33__::func_206(0);
	func_289(0);
}

void func_289(int iParam0)//Position - 0xA1BB
{
	if (Local_96.f_242 != iParam0)
	{
		Local_96.f_242 = iParam0;
	}
}

void func_295()//Position - 0xA265
{
	if (__LIB_13__::func_86() || HUD::IS_PAUSE_MENU_ACTIVE())
	{
		__LIB_0__::func_366(1);
		func_296(0);
		MISC::CLEAR_BIT(&(Local_96.f_5), 16);
		func_289(3);
	}
}

void func_296(bool bParam0)//Position - 0xA297
{
	if (bParam0)
	{
		if (!__LIB_0__::func_94())
		{
			MISC::SET_BIT(&Global_1958711, 19);
		}
	}
	else if (__LIB_0__::func_94())
	{
		MISC::CLEAR_BIT(&Global_1958711, 19);
	}
}

void func_297()//Position - 0xA2CA
{
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		if (__LIB_0__::func_937(&(Local_96.f_267), 3000, 0))
		{
			if (__LIB_3__::func_100())
			{
				if (BitTest(Global_4541229, 2) || __LIB_0__::func_937(&(Local_96.f_271), 8000, 0))
				{
					if (!BitTest(Global_4541229, 2))
					{
					}
					CAM::DO_SCREEN_FADE_IN(500);
					__LIB_1__::func_376(PLAYER::PLAYER_ID(), 1, 0, 0);
					__LIB_0__::func_794(&(Local_96.f_267));
					__LIB_0__::func_794(&(Local_96.f_271));
					func_289(2);
				}
			}
			else if (__LIB_0__::func_937(&(Local_96.f_271), 15000, 0))
			{
				__LIB_0__::func_794(&(Local_96.f_267));
				__LIB_0__::func_794(&(Local_96.f_271));
				__LIB_0__::func_366(1);
				func_296(0);
				MISC::CLEAR_BIT(&(Local_96.f_5), 16);
				func_289(3);
			}
		}
	}
}

void func_310()//Position - 0xAA8F
{
	if (func_329())
	{
		if (PAD::IS_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/) || PAD::IS_DISABLED_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/))
		{
			if (!__LIB_3__::func_100())
			{
				if (CAM::IS_SCREEN_FADED_IN())
				{
					func_296(1);
					__LIB_3__::func_564(-1);
					__LIB_1__::func_376(PLAYER::PLAYER_ID(), 0, 512, 0);
					CAM::DO_SCREEN_FADE_OUT(500);
					__LIB_1__::func_895(1, -1);
					__LIB_19__::func_571(3, 1, 1, 0);
					__LIB_0__::func_795(&(Local_96.f_267), 0, 0);
					__LIB_0__::func_795(&(Local_96.f_271), 0, 0);
					func_289(1);
				}
			}
		}
	}
}

int func_329()//Position - 0xB807
{
	if (__LIB_0__::func_94())
	{
		return 0;
	}
	if (HUD::IS_PAUSE_MENU_ACTIVE())
	{
		return 0;
	}
	if ((__LIB_0__::func_104(0) || __LIB_10__::func_565()) || RECORDING::IS_REPLAY_RECORDING())
	{
		__LIB_0__::func_794(&(Local_96.f_275));
		__LIB_0__::func_795(&(Local_96.f_275), 0, 0);
		MISC::CLEAR_BIT(&(Local_96.f_5), 16);
		func_99();
		return 0;
	}
	else if (__LIB_0__::func_864(&(Local_96.f_275)))
	{
		if (!__LIB_0__::func_937(&(Local_96.f_275), 2000, 0))
		{
			return 0;
		}
		else
		{
			MISC::CLEAR_BIT(&(Local_96.f_5), 16);
			__LIB_0__::func_794(&(Local_96.f_275));
		}
	}
	if (func_164(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	return 1;
}

void func_330()//Position - 0xB8B1
{
	if (func_331())
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_96.f_159) && !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_OBJ(Local_96.f_159), false))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_96.f_159))
			{
				if (!BitTest(Local_96.f_5, 25))
				{
					ENTITY::FREEZE_ENTITY_POSITION(NETWORK::NET_TO_OBJ(Local_96.f_159), true);
					MISC::SET_BIT(&(Local_96.f_5), 25);
				}
			}
			else
			{
				NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_96.f_159);
			}
		}
	}
	else if (BitTest(Local_96.f_5, 25))
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_96.f_159) && !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_OBJ(Local_96.f_159), false))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_96.f_159))
			{
				ENTITY::FREEZE_ENTITY_POSITION(NETWORK::NET_TO_OBJ(Local_96.f_159), false);
				MISC::CLEAR_BIT(&(Local_96.f_5), 25);
			}
			else
			{
				NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_96.f_159);
			}
		}
	}
}

int func_331()//Position - 0xB970
{
	if (func_164(PLAYER::PLAYER_ID()))
	{
		if (BitTest(Global_2813821, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_332()//Position - 0xB991
{
	int iVar0;
	if (func_83())
	{
		Global_1958711.f_1 = 0;
	}
	if (func_339() || func_193())
	{
		if (!__LIB_0__::func_864(&(Local_96.f_247)))
		{
			__LIB_0__::func_795(&(Local_96.f_247), 0, 0);
		}
		else if (__LIB_0__::func_937(&(Local_96.f_247), Global_1958711.f_1, 0) || func_193())
		{
			__LIB_0__::func_794(&(Local_96.f_245));
			if (func_83())
			{
				if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
				{
					FIRE::ADD_OWNED_EXPLOSION(PLAYER::PLAYER_PED_ID(), func_338(), func_337(), func_336(), true, false, 1f);
				}
				else
				{
					FIRE::ADD_EXPLOSION(func_338(), func_337(), func_336(), true, false, 1f, false);
				}
				PAD::SET_CONTROL_SHAKE(0 /*PLAYER_CONTROL*/, 300, SYSTEM::ROUND((200f * Local_96.f_131)));
				NETWORK::SET_NETWORK_ID_CAN_MIGRATE(Local_96.f_159, true);
				STREAMING::CLEAR_FOCUS();
				iVar0 = NETWORK::NET_TO_OBJ(Local_96.f_159);
				OBJECT::DELETE_OBJECT(&iVar0);
				MISC::SET_BIT(&(Local_96.f_6), 2);
			}
			if (__LIB_12__::func_637())
			{
				func_335(1);
				if (Local_96.f_26 == 0)
				{
					func_333(6, 0, 0);
				}
				else
				{
					func_333(5, 0, 0);
				}
			}
			func_384(1);
			func_383(5);
		}
	}
	else if (__LIB_0__::func_864(&(Local_96.f_247)))
	{
		__LIB_0__::func_627(&(Local_96.f_247), 0, 0);
	}
}

void func_333(int iParam0, bool bParam1, bool bParam2)//Position - 0xBAC0
{
	char cVar0[64];
	int iVar1;
	float fVar2;
	float fVar3;
	StringCopy(&cVar0, func_334(iParam0), 64);
	iVar1 = 5;
	if (bParam1)
	{
		iVar1 = 69;
	}
	fVar2 = 8f;
	fVar3 = -8f;
	Local_96.f_79 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(Local_96.f_153, 0f, 0f, Local_96.f_118, 2, bParam2, bParam1, 1f, 0f, 1f);
	NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), Local_96.f_79, Local_96.f_158, &cVar0, fVar2, fVar3, iVar1, 0, 1000f, 0);
	if (iParam0 == 0)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_96.f_159))
		{
			StringConCat(&cVar0, "_DRONE", 64);
			NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_ENT(Local_96.f_159), Local_96.f_79, Local_96.f_158, &cVar0, fVar2, fVar3, 8);
		}
	}
	StringCopy(&cVar0, func_334(iParam0), 64);
	StringConCat(&cVar0, "_PHONE", 64);
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_96.f_160))
	{
		ENTITY::PLAY_ENTITY_ANIM(NETWORK::NET_TO_ENT(Local_96.f_160), &cVar0, Local_96.f_158, fVar2, bParam1, bParam2, false, 0f, 0);
		ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(NETWORK::NET_TO_ENT(Local_96.f_160));
	}
	NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_96.f_79);
}

char* func_334(int iParam0)//Position - 0xBBB1
{
	switch (iParam0)
	{
		case 0:
			return "ENTER";
		case 1:
			return "BASE";
		case 2:
			return "USE_01";
		case 3:
			return "USE_02";
		case 4:
			return "USE_03";
		case 5:
			return "FAIL";
		case 6:
			return "EXIT";
		default:
	}
	return "";
}

void func_335(bool bParam0)//Position - 0xBC1F
{
	int iVar0;
	iVar0 = NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(iVar0);
	if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iVar0))
	{
		PED::DETACH_SYNCHRONIZED_SCENE(iVar0);
		NETWORK::NETWORK_STOP_SYNCHRONISED_SCENE(iVar0);
		iVar0 = -1;
	}
	else if (bParam0)
	{
		if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
		{
			TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
		}
	}
}

float func_336()//Position - 0xBC62
{
	if (func_16())
	{
		return 1f;
	}
	return 0.5f;
}

int func_337()//Position - 0xBC7A
{
	if (func_16())
	{
		return 81;
	}
	return 72;
}

Vector3 func_338()//Position - 0xBC90
{
	if (func_16())
	{
		return CAM::GET_CAM_COORD(Local_96.f_169);
	}
	return Local_96.f_150;
}

int func_339()//Position - 0xBCB0
{
	if ((NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_96.f_159) && ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_OBJ(Local_96.f_159), false)) && !BitTest(Local_96.f_5, 2))
	{
		return 1;
	}
	if (Local_96.f_12 == 2)
	{
		Local_96.f_26 = 1;
		return 1;
	}
	if (BitTest(Local_96.f_5, 1))
	{
		return 1;
	}
	if (func_347())
	{
		Local_96.f_26 = 5;
		return 1;
	}
	if (func_138() && func_341())
	{
		Local_96.f_26 = 5;
		return 1;
	}
	if (__LIB_12__::func_637() || func_16())
	{
		if (func_341())
		{
			Local_96.f_26 = 5;
			return 1;
		}
	}
	if (BitTest(Local_96.f_5, 2))
	{
		Local_96.f_26 = 4;
		return 1;
	}
	if (__LIB_32__::func_362())
	{
		if (!__LIB_0__::func_864(&(Local_96.f_255)))
		{
			__LIB_0__::func_795(&(Local_96.f_255), 0, 0);
		}
		else if (__LIB_0__::func_937(&(Local_96.f_255), 3000, 0))
		{
			Local_96.f_26 = 0;
			return 1;
		}
	}
	if (BitTest(Local_96.f_5, 7))
	{
		Local_96.f_26 = 0;
		return 1;
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_96.f_159))
	{
		if (ENTITY::IS_ENTITY_IN_WATER(NETWORK::NET_TO_OBJ(Local_96.f_159)) || __LIB_2__::func_826(NETWORK::NET_TO_ENT(Local_96.f_159), 0))
		{
			if (BitTest(Local_96.f_5, 29))
			{
				Local_96.f_26 = 3;
				return 1;
			}
		}
	}
	if (!func_138() && !func_340())
	{
		if (Local_96.f_150.f_2 >= func_109())
		{
			Local_96.f_26 = 5;
			return 1;
		}
	}
	return 0;
}

bool func_340()//Position - 0xBE13
{
	return BitTest(Global_1958711.f_2, 0);
}

int func_341()//Position - 0xBE23
{
	struct<3> Var0;
	int iVar1;
	if (func_346())
	{
		return 0;
	}
	if (__LIB_0__::func_156(PLAYER::PLAYER_ID(), 1, 1))
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_96.f_159) && !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_OBJ(Local_96.f_159), false))
		{
			if (func_138())
			{
				if (ENTITY::DOES_ENTITY_EXIST(__LIB_4__::func_281()) && !ENTITY::IS_ENTITY_DEAD(__LIB_4__::func_281(), false))
				{
					Var0 = { ENTITY::GET_ENTITY_COORDS(__LIB_4__::func_281(), true) };
				}
			}
			else if (func_30())
			{
				if (!__LIB_12__::func_637())
				{
					iVar1 = __LIB_4__::func_937(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_9);
					switch (iVar1)
					{
						case 128:
							Var0 = { -245.64f, 6210.96f, 35.94f };
							break;
						case 129:
							Var0 = { 1695.88f, 4783.87f, 47.02f };
							break;
						case 130:
							Var0 = { -115.15f, -1771.65f, 38.86f };
							break;
						case 131:
							Var0 = { -600.96f, 280.47f, 87.04f };
							break;
						case 132:
							Var0 = { -1269.72f, -304.09f, 40f };
							break;
						case 133:
							Var0 = { 758.46f, -814.57f, 30.3f };
							break;
					}
				}
				else
				{
					Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
				}
			}
			else if (func_16())
			{
				if (__LIB_0__::func_121(__LIB_3__::func_908()))
				{
					Var0 = { ENTITY::GET_ENTITY_COORDS(__LIB_3__::func_908(), true) };
				}
			}
			else
			{
				Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
			}
			if (__LIB_0__::func_121(NETWORK::NET_TO_OBJ(Local_96.f_159)))
			{
				Local_96.f_120 = __LIB_0__::func_724(NETWORK::NET_TO_OBJ(Local_96.f_159), Var0, 1);
				if (Local_96.f_120 > func_109())
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

bool func_346()//Position - 0xC0CD
{
	return BitTest(Global_1958711, 6);
}

int func_347()//Position - 0xC0DB
{
	float fVar0;
	int iVar1;
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_96.f_159) && !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_OBJ(Local_96.f_159), false))
	{
		iVar1 = Global_262145.f_24699 /* Tunable: BB_TERRORBYTE_DRONE_HEIGHT_LIMIT */;
		if (func_16())
		{
			iVar1 *= 10;
		}
		if (MISC::GET_GROUND_Z_FOR_3D_COORD(Local_96.f_150, &fVar0, true, false))
		{
			Local_96.f_121 = (Local_96.f_150.f_2 - fVar0);
			if (Local_96.f_121 > IntToFloat(iVar1))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_348()//Position - 0xC145
{
	struct<3> Var0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	if (!func_83())
	{
		return;
	}
	if ((NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_96.f_159) && !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_OBJ(Local_96.f_159), false)) && CAM::DOES_CAM_EXIST(Local_96.f_169))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_96.f_159))
		{
			if (BitTest(Local_96.f_5, 1) || func_193())
			{
				return;
			}
			Var0 = { __LIB_0__::func_79(func_350()) };
			bVar3 = false;
			bVar4 = true;
			iVar5 = 0;
			if (func_16())
			{
				bVar3 = true;
				bVar4 = false;
				iVar5 = 0;
			}
			if (func_35())
			{
				if (!PAD::IS_USING_KEYBOARD_AND_MOUSE(0 /*PLAYER_CONTROL*/))
				{
					if (PAD::GET_CONTROL_UNBOUND_NORMAL(2 /*FRONTEND_CONTROL*/, 208 /*INPUT_FRONTEND_RT*/) != 0f)
					{
						iVar1 = 1;
					}
					if (PAD::GET_CONTROL_UNBOUND_NORMAL(2 /*FRONTEND_CONTROL*/, 207 /*INPUT_FRONTEND_LT*/) != 0f)
					{
						iVar2 = 1;
					}
				}
				else
				{
					if (PAD::GET_CONTROL_UNBOUND_NORMAL(2 /*FRONTEND_CONTROL*/, 209 /*INPUT_FRONTEND_LS*/) != 0f)
					{
						iVar1 = 1;
					}
					if (PAD::GET_CONTROL_UNBOUND_NORMAL(2 /*FRONTEND_CONTROL*/, 210 /*INPUT_FRONTEND_RS*/) != 0f)
					{
						iVar2 = 1;
					}
				}
			}
			if (iVar1 && !func_260(bVar3))
			{
				Local_96.f_119 = 140f;
			}
			else if (iVar2 && !func_260(bVar3))
			{
				Local_96.f_119 = 60f;
			}
			else if (!func_16())
			{
				Local_96.f_119 = 100f;
			}
			ENTITY::APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(NETWORK::NET_TO_OBJ(Local_96.f_159), iVar5, Var0 * Vector(-Local_96.f_119, -Local_96.f_119, -Local_96.f_119), false, true, bVar4, false);
		}
		else
		{
			NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_96.f_159);
		}
	}
}

Vector3 func_350()//Position - 0xC2CC
{
	struct<3> Var0;
	Var0 = { 0f, 1f, 0f };
	func_351(&Var0);
	return Var0;
}

void func_351(var uParam0)//Position - 0xC2E5
{
	float fVar0;
	float fVar1;
	struct<3> Var2;
	fVar0 = SYSTEM::COS(0f);
	fVar1 = SYSTEM::SIN(0f);
	Var2.f_0 = *uParam0;
	Var2.f_1 = ((fVar0 * uParam0->f_1) - (fVar1 * uParam0->f_2));
	Var2.f_2 = ((fVar1 * uParam0->f_1) + (fVar0 * uParam0->f_2));
	*uParam0 = { Var2 };
	fVar0 = SYSTEM::COS(0f);
	fVar1 = SYSTEM::SIN(0f);
	Var2.f_0 = ((fVar0 * *uParam0) + (fVar1 * uParam0->f_2));
	Var2.f_1 = uParam0->f_1;
	Var2.f_2 = ((fVar0 * uParam0->f_2) - (fVar1 * *uParam0));
	*uParam0 = { Var2 };
	fVar0 = SYSTEM::COS(0f);
	fVar1 = SYSTEM::SIN(0f);
	Var2.f_0 = ((fVar0 * *uParam0) - (fVar1 * uParam0->f_1));
	Var2.f_1 = ((fVar1 * *uParam0) + (fVar0 * uParam0->f_1));
	Var2.f_2 = uParam0->f_2;
	*uParam0 = { Var2 };
}

void func_352()//Position - 0xC3AE
{
	float fVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	float fVar4;
	struct<3> Var5;
	struct<3> Var6;
	struct<3> Var7;
	float fVar8;
	float fVar9;
	int iVar10;
	int iVar11;
	float fVar12;
	float fVar13;
	float fVar14;
	struct<3> Var15;
	float fVar16;
	float fVar17;
	float fVar18;
	float fVar19;
	float fVar20;
	float fVar21;
	float fVar22;
	float fVar23;
	struct<3> Var24;
	float fVar25;
	float fVar26;
	float fVar27;
	float fVar28;
	if (func_83())
	{
		return;
	}
	if ((NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_96.f_159) && !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_OBJ(Local_96.f_159), false)) && CAM::DOES_CAM_EXIST(Local_96.f_169))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_96.f_159))
		{
			fVar0 = 0f;
			if (!func_38() && !func_24())
			{
				if (!func_252())
				{
					if (__LIB_0__::func_864(&(Local_96.f_253)))
					{
						iVar1 = Global_262145.f_24697 /* Tunable: BB_TERRORBYTE_DRONE_BOOST_RECHARGE_TIME */;
						if (func_24())
						{
							iVar1 = (iVar1 / 3);
						}
						if (!__LIB_0__::func_937(&(Local_96.f_253), iVar1, 0))
						{
							iVar2 = (100 * MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Local_96.f_253)));
							Local_96.f_20 = (iVar2 / iVar1);
						}
						else
						{
							if (__LIB_0__::func_121(Local_96.f_161))
							{
								ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_96.f_161, NETWORK::NET_TO_OBJ(Local_96.f_159), -1, 0f, 0f, -0.25f, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
							}
							Local_96.f_20 = 100;
							__LIB_0__::func_794(&(Local_96.f_253));
							if (!AUDIO::HAS_SOUND_FINISHED(Local_96.f_43))
							{
								AUDIO::STOP_SOUND(Local_96.f_43);
								AUDIO::RELEASE_SOUND_ID(Local_96.f_43);
								Local_96.f_43 = -1;
							}
						}
					}
					if (!PAD::IS_USING_KEYBOARD_AND_MOUSE(0 /*PLAYER_CONTROL*/))
					{
						bVar3 = PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 209 /*INPUT_FRONTEND_LS*/);
					}
					else
					{
						bVar3 = PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 203 /*INPUT_FRONTEND_X*/);
					}
					if ((((bVar3 && Local_96.f_20 == 100) && !func_260(0)) && !__LIB_0__::func_94()) && func_161())
					{
						fVar0 = 120f;
						if (func_24())
						{
							fVar0 = 110f;
						}
						else if (func_30())
						{
							fVar0 = 49f;
						}
						if (IntToFloat(Local_96[1]) != 0f)
						{
							func_359(1);
						}
						else
						{
							func_359(0);
						}
						GRAPHICS::ANIMPOSTFX_PLAY("RaceTurbo", 0, false);
						__LIB_0__::func_795(&(Local_96.f_251), 0, 0);
						func_358(1);
						if (AUDIO::HAS_SOUND_FINISHED(Local_96.f_42))
						{
							Local_96.f_42 = AUDIO::GET_SOUND_ID();
							AUDIO::PLAY_SOUND_FRONTEND(Local_96.f_42, "HUD_Boost_Loop", Local_96.f_157, true);
						}
					}
				}
				else
				{
					fVar0 = 120f;
					if (func_24())
					{
						fVar0 = 115f;
					}
					else if (func_30())
					{
						fVar0 = 49f;
					}
					if (CAM::DOES_CAM_EXIST(Local_96.f_169))
					{
						if (!CAM::IS_CAM_SHAKING(Local_96.f_169))
						{
							CAM::SHAKE_CAM(Local_96.f_169, "DRONE_BOOST_SHAKE", 1f);
							CAM::SET_CAM_SHAKE_AMPLITUDE(Local_96.f_169, 0.15f);
						}
					}
					if (__LIB_0__::func_864(&(Local_96.f_251)))
					{
						if (__LIB_0__::func_937(&(Local_96.f_251), Global_262145.f_24696 /* Tunable: BB_TERRORBYTE_DRONE_BOOST_TIME */, 0))
						{
							Local_96.f_20 = 0;
							func_359(0);
							func_358(0);
							__LIB_0__::func_794(&(Local_96.f_253));
							__LIB_0__::func_795(&(Local_96.f_253), 0, 0);
							CAM::STOP_CAM_SHAKING(Local_96.f_169, true);
							PAD::STOP_CONTROL_SHAKE(0 /*PLAYER_CONTROL*/);
							GRAPHICS::ANIMPOSTFX_STOP("RaceTurbo");
							__LIB_0__::func_794(&(Local_96.f_251));
							if (!AUDIO::HAS_SOUND_FINISHED(Local_96.f_42))
							{
								AUDIO::STOP_SOUND(Local_96.f_42);
								AUDIO::RELEASE_SOUND_ID(Local_96.f_42);
								Local_96.f_42 = -1;
							}
							if (AUDIO::HAS_SOUND_FINISHED(Local_96.f_43))
							{
								Local_96.f_43 = AUDIO::GET_SOUND_ID();
								AUDIO::PLAY_SOUND_FRONTEND(Local_96.f_43, "HUD_Boost_Recharge_Loop", Local_96.f_157, true);
							}
						}
						else
						{
							fVar4 = (100f / (SYSTEM::TO_FLOAT(Global_262145.f_24696 /* Tunable: BB_TERRORBYTE_DRONE_BOOST_TIME */) / IntToFloat(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Local_96.f_251))));
							Local_96.f_20 = (100 - SYSTEM::ROUND(fVar4));
							PAD::SET_CONTROL_SHAKE(0 /*PLAYER_CONTROL*/, Global_262145.f_24696 /* Tunable: BB_TERRORBYTE_DRONE_BOOST_TIME */, SYSTEM::ROUND((255f * Local_96.f_131)));
						}
					}
				}
			}
			Var5 = { Local_96.f_150 };
			if (BitTest(Local_96.f_5, 1) || func_193())
			{
				return;
			}
			Var6 = { __LIB_0__::func_79(func_350()) };
			Var7 = { __LIB_0__::func_79(__LIB_18__::func_961(func_350())) };
			MISC::GET_GROUND_Z_FOR_3D_COORD(Var5, &fVar8, true, false);
			if (!func_356())
			{
				if (Local_96.f_10 == 2 || (Var5.f_2 - fVar8) < 2f)
				{
					fVar9 = 24f;
					if (Local_96[1] != 0)
					{
						PAD::DISABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 207 /*INPUT_FRONTEND_LT*/, true);
					}
					if (PAD::GET_CONTROL_UNBOUND_NORMAL(2 /*FRONTEND_CONTROL*/, 207 /*INPUT_FRONTEND_LT*/) != 0f || Local_96[1] != 0)
					{
						if ((Var5.f_2 - fVar8) < 0.5f || PAD::GET_CONTROL_UNBOUND_NORMAL(2 /*FRONTEND_CONTROL*/, 207 /*INPUT_FRONTEND_LT*/) != 0f)
						{
							fVar9 = 24f;
						}
						else
						{
							fVar9 = 10f;
						}
					}
					else
					{
						fVar9 = 3f;
					}
					ENTITY::APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(NETWORK::NET_TO_OBJ(Local_96.f_159), 0, 0f, 0f, fVar9, false, true, true, false);
				}
			}
			if (PAD::IS_USING_KEYBOARD_AND_MOUSE(0 /*PLAYER_CONTROL*/))
			{
				if (Local_96[2] >= 127)
				{
					Local_96[2] = 127;
				}
				else if (Local_96[2] <= -127)
				{
					Local_96[2] = -127;
				}
				if (Local_96[0] >= 127)
				{
					Local_96[0] = 127;
				}
				else if (Local_96[0] <= -127)
				{
					Local_96[0] = -127;
				}
			}
			if (!PAD::IS_USING_KEYBOARD_AND_MOUSE(0 /*PLAYER_CONTROL*/))
			{
				if (PAD::GET_CONTROL_UNBOUND_NORMAL(2 /*FRONTEND_CONTROL*/, 208 /*INPUT_FRONTEND_RT*/) != 0f)
				{
					iVar10 = 1;
				}
				if (PAD::GET_CONTROL_UNBOUND_NORMAL(2 /*FRONTEND_CONTROL*/, 207 /*INPUT_FRONTEND_LT*/) != 0f)
				{
					iVar11 = 1;
				}
			}
			else
			{
				if (PAD::GET_CONTROL_UNBOUND_NORMAL(2 /*FRONTEND_CONTROL*/, 209 /*INPUT_FRONTEND_LS*/) != 0f)
				{
					iVar10 = 1;
				}
				if (PAD::GET_CONTROL_UNBOUND_NORMAL(2 /*FRONTEND_CONTROL*/, 210 /*INPUT_FRONTEND_RS*/) != 0f)
				{
					iVar11 = 1;
				}
			}
			if (((iVar10 && func_355()) && !__LIB_0__::func_94()) || (func_252() && !func_251()))
			{
				fVar14 = Local_96.f_119;
				if (func_160())
				{
					fVar14 = 5f;
				}
				if (func_38() || func_24())
				{
					fVar13 = 10f;
				}
				if (func_252() && !func_251())
				{
					if (!PAD::IS_USING_KEYBOARD_AND_MOUSE(0 /*PLAYER_CONTROL*/))
					{
						fVar12 = ((fVar14 + fVar0) / (1f / PAD::GET_CONTROL_UNBOUND_NORMAL(2 /*FRONTEND_CONTROL*/, 208 /*INPUT_FRONTEND_RT*/)));
					}
					else
					{
						fVar12 = ((fVar14 + fVar0) / (1f / PAD::GET_CONTROL_UNBOUND_NORMAL(2 /*FRONTEND_CONTROL*/, 209 /*INPUT_FRONTEND_LS*/)));
					}
				}
				else if (!PAD::IS_USING_KEYBOARD_AND_MOUSE(0 /*PLAYER_CONTROL*/))
				{
					fVar12 = ((fVar14 + fVar13) / (1f / PAD::GET_CONTROL_UNBOUND_NORMAL(2 /*FRONTEND_CONTROL*/, 208 /*INPUT_FRONTEND_RT*/)));
				}
				else
				{
					fVar12 = ((fVar14 + fVar13) / (1f / PAD::GET_CONTROL_UNBOUND_NORMAL(2 /*FRONTEND_CONTROL*/, 209 /*INPUT_FRONTEND_LS*/)));
				}
				Var15 = { Var7 * Vector(fVar12, fVar12, fVar12) };
				if (Var15.f_2 > 149f)
				{
					Var15.f_2 = 149f;
				}
				ENTITY::APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(NETWORK::NET_TO_OBJ(Local_96.f_159), 0, Var15, false, true, true, false);
			}
			else if (((iVar11 && !__LIB_0__::func_94()) && func_355()) && !func_260(0))
			{
				if (func_38() || func_24())
				{
					fVar17 = 10f;
				}
				if (!PAD::IS_USING_KEYBOARD_AND_MOUSE(0 /*PLAYER_CONTROL*/))
				{
					fVar16 = ((Local_96.f_119 + fVar17) / (1f / PAD::GET_CONTROL_UNBOUND_NORMAL(2 /*FRONTEND_CONTROL*/, 207 /*INPUT_FRONTEND_LT*/)));
				}
				else
				{
					fVar16 = ((Local_96.f_119 + fVar17) / (1f / PAD::GET_CONTROL_UNBOUND_NORMAL(2 /*FRONTEND_CONTROL*/, 210 /*INPUT_FRONTEND_RS*/)));
				}
				ENTITY::APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(NETWORK::NET_TO_OBJ(Local_96.f_159), 0, Var7 * Vector(-fVar16, -fVar16, -fVar16), false, true, true, false);
			}
			if (((Local_96[1] > 0 && !func_252()) && !func_260(0)) && !__LIB_0__::func_94())
			{
				fVar20 = func_354();
				fVar18 = (Local_96.f_119 / (127f / IntToFloat(Local_96[1])));
				fVar19 = (fVar20 / (127f / IntToFloat(Local_96[1])));
				ENTITY::APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(NETWORK::NET_TO_OBJ(Local_96.f_159), 0, Var6 * Vector(fVar18, fVar18, fVar18), false, true, true, false);
				ENTITY::APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(NETWORK::NET_TO_OBJ(Local_96.f_159), 0, 0f, 0f, fVar19, false, true, true, false);
			}
			else if ((((Local_96[1] < 0 && !func_252()) && !func_260(0)) && !__LIB_0__::func_94()) || (func_252() && func_251()))
			{
				if (func_252() && func_251())
				{
					fVar23 = 50f;
					if (func_24())
					{
						fVar21 = (Local_96.f_119 / -1f);
					}
					else
					{
						fVar21 = ((Local_96.f_119 + fVar0) / -1f);
					}
					fVar22 = (fVar23 / -1f);
				}
				else
				{
					fVar23 = func_354();
					if (func_24())
					{
						fVar21 = (Local_96.f_119 / (127f / IntToFloat(Local_96[1])));
					}
					else
					{
						fVar21 = ((Local_96.f_119 + fVar0) / (127f / IntToFloat(Local_96[1])));
					}
					fVar22 = (fVar23 / (127f / IntToFloat(Local_96[1])));
				}
				if (func_24())
				{
					if (!func_251())
					{
						ENTITY::APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(NETWORK::NET_TO_OBJ(Local_96.f_159), 0, 0f, 0f, -fVar22, false, true, true, false);
						ENTITY::APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(NETWORK::NET_TO_OBJ(Local_96.f_159), 0, Var6 * Vector(fVar21, fVar21, fVar21), false, true, true, false);
					}
					else
					{
						ENTITY::APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(NETWORK::NET_TO_OBJ(Local_96.f_159), 0, 0f, 0f, 41f, false, true, true, false);
						ENTITY::APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(NETWORK::NET_TO_OBJ(Local_96.f_159), 0, 0f, -149f, 0f, false, true, true, false);
					}
				}
				else
				{
					ENTITY::APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(NETWORK::NET_TO_OBJ(Local_96.f_159), 0, 0f, 0f, -fVar22, false, true, true, false);
					ENTITY::APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(NETWORK::NET_TO_OBJ(Local_96.f_159), 0, Var6 * Vector(fVar21, fVar21, fVar21), false, true, true, false);
				}
			}
			Var24 = { __LIB_0__::func_835(Var6, Var7) };
			if ((!func_252() && !func_260(0)) && !__LIB_0__::func_94())
			{
				if (Local_96[0] > 0)
				{
					fVar25 = -(Local_96.f_119 / (127f / IntToFloat(Local_96[0])));
					fVar26 = (8f / (127f / IntToFloat(Local_96[0])));
					ENTITY::APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(NETWORK::NET_TO_OBJ(Local_96.f_159), 0, Var24 * Vector(fVar25, fVar25, fVar25), false, true, true, false);
					ENTITY::APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(NETWORK::NET_TO_OBJ(Local_96.f_159), 0, 0f, 0f, fVar26, false, true, true, false);
				}
				else if (Local_96[0] < 0)
				{
					fVar27 = -(Local_96.f_119 / (127f / IntToFloat(Local_96[0])));
					fVar28 = (8f / (127f / IntToFloat(Local_96[0])));
					ENTITY::APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(NETWORK::NET_TO_OBJ(Local_96.f_159), 0, Var24 * Vector(fVar27, fVar27, fVar27), false, true, true, false);
					ENTITY::APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(NETWORK::NET_TO_OBJ(Local_96.f_159), 0, 0f, 0f, -fVar28, false, true, true, false);
				}
			}
		}
		else
		{
			NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_96.f_159);
		}
	}
}

float func_354()//Position - 0xCCF9
{
	if (func_24() || func_38())
	{
		return 40f;
	}
	else if (func_30())
	{
		return 30f;
	}
	else if (func_160())
	{
		return 2.5f;
	}
	return 6.4f;
}

int func_355()//Position - 0xCD43
{
	if (func_260(0))
	{
		return 0;
	}
	if (func_252() && !func_251())
	{
		return 0;
	}
	return 1;
}

bool func_356()//Position - 0xCD6D
{
	return BitTest(Global_1958711, 2);
}

void func_358(bool bParam0)//Position - 0xCDB2
{
	if (bParam0)
	{
		if (!BitTest(Local_96.f_5, 21))
		{
			MISC::SET_BIT(&(Local_96.f_5), 21);
		}
	}
	else if (BitTest(Local_96.f_5, 21))
	{
		MISC::CLEAR_BIT(&(Local_96.f_5), 21);
	}
}

void func_359(bool bParam0)//Position - 0xCDEB
{
	if (bParam0)
	{
		if (!BitTest(Local_96.f_5, 22))
		{
			MISC::SET_BIT(&(Local_96.f_5), 22);
		}
	}
	else if (BitTest(Local_96.f_5, 22))
	{
		MISC::CLEAR_BIT(&(Local_96.f_5), 22);
	}
}

void func_360()//Position - 0xCE24
{
	float fVar0;
	float fVar1;
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_96.f_159))
	{
		if (!ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_VEH(Local_96.f_159), false))
		{
			if ((func_24() || func_38()) || func_35())
			{
				fVar0 = -323.1f;
				fVar1 = -1970.9f;
			}
			else
			{
				fVar0 = Local_96.f_150;
				fVar1 = Local_96.f_150.f_1;
			}
			HUD::SET_FAKE_PAUSEMAP_PLAYER_POSITION_THIS_FRAME(fVar0, fVar1);
			HUD::SET_FAKE_GPS_PLAYER_POSITION_THIS_FRAME(fVar0, fVar1, 0);
			if (!INTERIOR::IS_VALID_INTERIOR(Global_1958711.f_24) && !func_35())
			{
				if (!BitTest(Local_96.f_5, 8))
				{
					HUD::HIDE_MINIMAP_INTERIOR_MAP_THIS_FRAME();
				}
				HUD::SET_RADAR_AS_EXTERIOR_THIS_FRAME();
			}
		}
	}
}

void func_361()//Position - 0xCEBE
{
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_96.f_159))
	{
		if (AUDIO::HAS_SOUND_FINISHED(Local_96.f_41) && Local_96.f_41 == -1)
		{
			Local_96.f_41 = AUDIO::GET_SOUND_ID();
			AUDIO::PLAY_SOUND_FRONTEND(Local_96.f_41, "HUD_Loop", Local_96.f_157, true);
		}
	}
}

void func_362()//Position - 0xCF00
{
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_96.f_159))
	{
		if (AUDIO::HAS_SOUND_FINISHED(Local_96.f_31))
		{
			Local_96.f_31 = AUDIO::GET_SOUND_ID();
			AUDIO::PLAY_SOUND_FROM_ENTITY(Local_96.f_31, "Flight_Loop", NETWORK::NET_TO_OBJ(Local_96.f_159), Local_96.f_157, false, 0);
			AUDIO::SET_VARIABLE_ON_SOUND(Local_96.f_31, "DroneRotationalSpeed", Local_96.f_129);
		}
		else
		{
			AUDIO::SET_VARIABLE_ON_SOUND(Local_96.f_31, "DroneRotationalSpeed", Local_96.f_129);
		}
		if (AUDIO::HAS_SOUND_FINISHED(Local_96.f_40))
		{
			AUDIO::RELEASE_SOUND_ID(Local_96.f_40);
			Local_96.f_40 = -1;
		}
	}
}

void func_363()//Position - 0xCF7B
{
	if (__LIB_0__::func_156(PLAYER::PLAYER_ID(), 1, 1))
	{
		PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 450, true);
	}
}

void func_364()//Position - 0xCF9C
{
	int iVar0;
	if (func_24())
	{
		iVar0 = PLAYER::INT_TO_PLAYERINDEX(Local_96.f_45);
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_96.f_159) && __LIB_0__::func_156(iVar0, 1, 1))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::GET_PLAYER_PED(iVar0), false))
			{
				if (__LIB_0__::func_687(NETWORK::NET_TO_OBJ(Local_96.f_159), PLAYER::GET_PLAYER_PED(iVar0), Global_262145.f_25340 /* Tunable: 936176424 */, 1))
				{
					if (!__LIB_0__::func_941(PLAYER::PLAYER_ID(), iVar0))
					{
						if (PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) != PLAYER::GET_PLAYER_TEAM(iVar0) || PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1)
						{
							MISC::SET_BIT(&(Local_96.f_5), 11);
							return;
						}
					}
				}
			}
		}
		MISC::CLEAR_BIT(&(Local_96.f_5), 11);
	}
}

void func_366()//Position - 0xD061
{
	int iVar0;
	if (((func_35() || func_24()) || func_38()) || func_16())
	{
		iVar0 = 1000;
		if (func_24() || func_38())
		{
			iVar0 = 7000;
		}
		else if (func_16())
		{
			iVar0 = 1100;
		}
		if (!BitTest(Local_96.f_5, 29))
		{
			if (CAM::DOES_CAM_EXIST(Local_96.f_169) && CAM::IS_CAM_RENDERING(Local_96.f_169))
			{
				if (__LIB_0__::func_121(__LIB_1__::func_777()))
				{
					if (__LIB_0__::func_937(&(Local_96.f_269), iVar0, 0))
					{
						ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(__LIB_1__::func_777(), true, false);
						ENTITY::SET_ENTITY_COLLISION(__LIB_1__::func_777(), true, false);
						MISC::SET_BIT(&(Local_96.f_5), 29);
					}
				}
			}
		}
	}
}

void func_367()//Position - 0xD113
{
	if (!func_16() || PLAYER::PLAYER_ID() == __LIB_0__::func_162())
	{
		return;
	}
	if (__LIB_0__::func_937(&(Local_96.f_281[PLAYER::PLAYER_ID() /*2*/]), 2500, 0))
	{
		if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(Local_96.f_207[PLAYER::PLAYER_ID()]))
		{
			GRAPHICS::STOP_PARTICLE_FX_LOOPED(Local_96.f_207[PLAYER::PLAYER_ID()], false);
		}
		__LIB_0__::func_794(&(Local_96.f_281[PLAYER::PLAYER_ID() /*2*/]));
	}
}

void func_368()//Position - 0xD17A
{
	char* sVar0;
	char* sVar1;
	int iVar2;
	sVar0 = "scr_ih_sub";
	STREAMING::REQUEST_NAMED_PTFX_ASSET(sVar0);
	if (STREAMING::HAS_NAMED_PTFX_ASSET_LOADED(sVar0))
	{
		if (__LIB_0__::func_121(__LIB_3__::func_908()) && PLAYER::PLAYER_ID() != __LIB_0__::func_162())
		{
			if (!GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(Local_96.f_207[PLAYER::PLAYER_ID()]))
			{
				GRAPHICS::USE_PARTICLE_FX_ASSET(sVar0);
				sVar1 = func_375(PLAYER::PLAYER_ID());
				iVar2 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(__LIB_3__::func_908(), sVar1);
				Local_96.f_207[PLAYER::PLAYER_ID()] = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY_BONE("scr_ih_sub_missile_launch", __LIB_3__::func_908(), func_374(PLAYER::PLAYER_ID()), 0f, 0f, 0f, iVar2, 5f, false, false, false);
			}
			else
			{
				__LIB_0__::func_795(&(Local_96.f_281[PLAYER::PLAYER_ID() /*2*/]), 0, 0);
			}
			if (__LIB_0__::func_864(&(Local_96.f_281[PLAYER::PLAYER_ID() /*2*/])))
			{
				if (__LIB_0__::func_937(&(Local_96.f_281[PLAYER::PLAYER_ID() /*2*/]), 1000, 0))
				{
					GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(Local_96.f_207[PLAYER::PLAYER_ID()], "flame", 0.15f, false);
					func_370();
					func_267();
					func_348();
					if (!ENTITY::IS_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_96.f_159)))
					{
						ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_96.f_159), true, false);
					}
					func_369();
					if (AUDIO::HAS_SOUND_FINISHED(Local_96.f_40))
					{
						Local_96.f_40 = AUDIO::GET_SOUND_ID();
						AUDIO::PLAY_SOUND_FRONTEND(Local_96.f_40, "HUD_Startup", Local_96.f_157, true);
					}
					func_270();
					func_102();
					func_237(1);
					GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
					GRAPHICS::SET_TIMECYCLE_MODIFIER("IslandPeriscope");
					CAM::RENDER_SCRIPT_CAMS(true, false, 0, true, true, 0);
					Local_96.f_173 = NETWORK::GET_NETWORK_TIME();
					ENTITY::SET_ENTITY_INVINCIBLE(NETWORK::NET_TO_OBJ(Local_96.f_159), false);
					func_383(4);
				}
			}
		}
		else
		{
			func_384(1);
			func_383(7);
		}
	}
}

void func_369()//Position - 0xD2F5
{
	if (func_138() || __LIB_12__::func_637())
	{
		if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("DLC_BTL_Hacker_Drone_HUD_Scene"))
		{
			AUDIO::START_AUDIO_SCENE("DLC_BTL_Hacker_Drone_HUD_Scene");
		}
	}
	else if (func_24())
	{
		if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("DLC_Arena_Battle_Drone_HUD_Scene"))
		{
			AUDIO::START_AUDIO_SCENE("DLC_Arena_Battle_Drone_HUD_Scene");
		}
	}
	else if (func_38())
	{
		if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("DLC_Arena_Spectator_Drone_HUD_Scene"))
		{
			AUDIO::START_AUDIO_SCENE("DLC_Arena_Spectator_Drone_HUD_Scene");
		}
	}
	else if (func_35())
	{
		if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("dlc_aw_arena_piloted_missile_scene"))
		{
			AUDIO::START_AUDIO_SCENE("dlc_aw_arena_piloted_missile_scene");
		}
	}
	else if (func_16())
	{
		if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("dlc_hei4_submarine_guided_missile_Scene"))
		{
			AUDIO::START_AUDIO_SCENE("dlc_hei4_submarine_guided_missile_Scene");
		}
	}
}

void func_370()//Position - 0xD39F
{
	int iVar0;
	char* sVar1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	struct<3> Var5;
	sVar1 = func_375(PLAYER::PLAYER_ID());
	if (Global_1581359 == 1)
	{
		iVar0 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(__LIB_3__::func_908(), sVar1);
		Var2 = { ENTITY::GET_ENTITY_BONE_POSTION(__LIB_3__::func_908(), iVar0) };
		Local_96.f_144 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Var2, ENTITY::GET_ENTITY_HEADING(__LIB_3__::func_908()), 0f, 0f, -2.6f) };
	}
	else if (Global_1581359 == 2)
	{
		iVar0 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(__LIB_3__::func_908(), sVar1);
		Var2 = { ENTITY::GET_ENTITY_BONE_POSTION(__LIB_3__::func_908(), iVar0) };
		Local_96.f_144 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Var2, ENTITY::GET_ENTITY_HEADING(__LIB_3__::func_908()), 0f, 0f, -2.6f) };
	}
	Var3 = { ENTITY::GET_ENTITY_ROTATION(__LIB_3__::func_908(), 2) };
	ENTITY::SET_ENTITY_COORDS(NETWORK::NET_TO_OBJ(Local_96.f_159), Local_96.f_144, true, false, false, true);
	__LIB_22__::func_190(Local_96.f_144, (Var3.f_0 + 90f), 180f, 0f);
	Var4 = { ENTITY::GET_ENTITY_COORDS(__LIB_3__::func_908(), true) };
	Var5 = { 0f, 0f, 0f };
	Local_96.f_116 = __LIB_0__::func_932(Var5, Var4);
	ENTITY::SET_ENTITY_HEADING(NETWORK::NET_TO_OBJ(Local_96.f_159), Local_96.f_116);
	ENTITY::SET_ENTITY_ROTATION(NETWORK::NET_TO_OBJ(Local_96.f_159), (Var3.f_0 - 90f), 0f, Local_96.f_116, 2, true);
	if (AUDIO::HAS_SOUND_FINISHED(Local_96.f_115))
	{
		Local_96.f_115 = AUDIO::GET_SOUND_ID();
		AUDIO::PLAY_SOUND_FROM_ENTITY(Local_96.f_115, "Missile_Launch", NETWORK::NET_TO_OBJ(Local_96.f_159), Local_96.f_157, true, 0);
	}
}

Vector3 func_374(int iParam0)//Position - 0xD593
{
	if (Local_96.f_82[iParam0] > 4)
	{
		return 0f, 0f, 1.5f;
	}
	return 0f, 0f, 1.5f;
}

char* func_375(int iParam0)//Position - 0xD5B8
{
	if (iParam0 == __LIB_0__::func_162())
	{
		return "";
	}
	switch (Local_96.f_82[iParam0])
	{
		case 1:
			return "sub_hatch1";
		case 2:
			return "sub_hatch2";
		case 3:
			return "sub_hatch3";
		case 4:
			return "sub_hatch4";
		case 5:
			return "sub_hatch5";
		case 6:
			return "sub_hatch6";
		case 7:
			return "sub_hatch7";
		case 8:
			return "sub_hatch8";
		default:
	}
	return "sub_hatch4";
}

void func_376()//Position - 0xD649
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (__LIB_6__::func_522() || !__LIB_12__::func_637())
	{
		return;
	}
	switch (Local_96.f_80)
	{
		case 0:
			if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_96.f_160))
			{
				iVar0 = joaat("ch_prop_ch_phone_ing_01a");
				if (__LIB_0__::func_799(iVar0))
				{
					if (__LIB_2__::func_852(NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(false, 1) + 1, 0, 1))
					{
						if (!BitTest(Local_96.f_6, 3))
						{
							NETWORK::RESERVE_LOCAL_NETWORK_MISSION_OBJECTS(NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(false, 1) + 1);
							MISC::SET_BIT(&(Local_96.f_6), 3);
						}
						if (NETWORK::CAN_REGISTER_MISSION_OBJECTS(1))
						{
							if (__LIB_1__::func_671(&(Local_96.f_160), iVar0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 0, 1, 1, 0, 0, 0, 1))
							{
								NETWORK::SET_NETWORK_ID_ALWAYS_EXISTS_FOR_PLAYER(Local_96.f_160, PLAYER::PLAYER_ID(), true);
								iVar1 = PED::GET_PED_BONE_INDEX(PLAYER::PLAYER_PED_ID(), 28422);
								ENTITY::ATTACH_ENTITY_TO_ENTITY(NETWORK::NET_TO_OBJ(Local_96.f_160), PLAYER::PLAYER_PED_ID(), iVar1, 0f, 0f, 0f, 0f, 0f, 0f, true, true, false, false, 2, true, 0);
								STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
							}
						}
					}
				}
			}
			else
			{
				Local_96.f_80 = 1;
			}
			break;
		case 1:
			if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_GO_STRAIGHT_TO_COORD")) != 0 && TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_GO_STRAIGHT_TO_COORD")) != 1)
			{
				func_333(0, 0, 0);
				Local_96.f_80 = 2;
			}
			break;
		case 2:
			if (func_380(0, "CREATE"))
			{
				func_362();
				if (__LIB_0__::func_953(Local_96.f_160))
				{
					if (!ENTITY::IS_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_96.f_160)))
					{
						ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_96.f_160), true, false);
					}
				}
				if (__LIB_0__::func_953(Local_96.f_159))
				{
					if (!ENTITY::IS_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_96.f_159)))
					{
						ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_96.f_159), true, false);
						ENTITY::SET_ENTITY_VISIBLE(Local_96.f_163, false, false);
					}
				}
			}
			if (func_377(1))
			{
				ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_96.f_163, NETWORK::NET_TO_OBJ(Local_96.f_159), -1, 0f, 0f, -0.8f, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
				ENTITY::SET_ENTITY_VISIBLE(Local_96.f_163, false, false);
				ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(NETWORK::NET_TO_ENT(Local_96.f_159));
				OBJECT::PLAY_OBJECT_AUTO_START_ANIM(NETWORK::NET_TO_OBJ(Local_96.f_159));
				func_270();
				func_131();
				func_237(1);
				func_249();
				func_352();
				func_369();
				if (AUDIO::HAS_SOUND_FINISHED(Local_96.f_40))
				{
					Local_96.f_40 = AUDIO::GET_SOUND_ID();
					AUDIO::PLAY_SOUND_FRONTEND(Local_96.f_40, "HUD_Startup", Local_96.f_157, true);
				}
				CAM::RENDER_SCRIPT_CAMS(true, false, 0, true, true, 0);
				Local_96.f_173 = NETWORK::GET_NETWORK_TIME();
				func_383(4);
				func_333(1, 1, 0);
				Local_96.f_80 = 3;
			}
			break;
		case 3:
			if (func_377(0))
			{
				iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
				switch (iVar2)
				{
					case 0:
						func_333(2, 0, 0);
						Local_96.f_243 = 2;
						break;
					case 1:
						func_333(3, 0, 0);
						Local_96.f_243 = 3;
						break;
					case 2:
						func_333(4, 0, 0);
						Local_96.f_243 = 4;
						break;
				}
				Local_96.f_80 = 4;
			}
			break;
		case 4:
			if (func_377(0))
			{
				func_333(1, 1, 0);
				Local_96.f_80 = 3;
			}
			break;
	}
}

int func_377(bool bParam0)//Position - 0xD910
{
	int iVar0;
	float fVar1;
	int iVar2;
	iVar0 = PLAYER::PLAYER_PED_ID();
	if (__LIB_0__::func_121(iVar0))
	{
		fVar1 = __LIB_31__::func_322();
		iVar2 = NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(Local_96.f_79);
		if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iVar2) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iVar2) >= fVar1)
		{
			if (bParam0)
			{
				func_335(0);
			}
			return 1;
		}
	}
	return 0;
}

int func_380(int iParam0, char* sParam1)//Position - 0xD98C
{
	int iVar0;
	iVar0 = NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(Local_96.f_79);
	if (iVar0 != -1)
	{
		if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iVar0))
		{
			if ((ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), MISC::GET_HASH_KEY(sParam1)) || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_OBJ(Local_96.f_160), MISC::GET_HASH_KEY(sParam1))) || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_OBJ(Local_96.f_159), MISC::GET_HASH_KEY(sParam1)))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_383(int iParam0)//Position - 0xDAA7
{
	if (Local_96.f_241 != iParam0)
	{
		Local_96.f_241 = iParam0;
	}
}

void func_384(bool bParam0)//Position - 0xDABE
{
	if (bParam0)
	{
		if (!__LIB_6__::func_522())
		{
			MISC::SET_BIT(&Global_1958711, 13);
		}
	}
	else if (__LIB_6__::func_522())
	{
		MISC::CLEAR_BIT(&Global_1958711, 13);
	}
}

void func_385()//Position - 0xDAF1
{
	struct<3> Var0;
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_96.f_159))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_96.f_159))
		{
			if (!CAM::DOES_CAM_EXIST(Local_96.f_169) && BitTest(Local_96.f_5, 0))
			{
				if (func_396())
				{
					if (func_340())
					{
						__LIB_1__::func_376(PLAYER::PLAYER_ID(), 0, 33280, 0);
					}
					else if (!func_35())
					{
						__LIB_1__::func_376(PLAYER::PLAYER_ID(), 0, 512, 0);
					}
					if (!__LIB_32__::func_311())
					{
						HUD::THEFEED_HIDE();
					}
					else
					{
						HUD::THEFEED_SHOW();
					}
					Local_96.f_169 = CAM::CREATE_CAMERA(joaat("DEFAULT_SCRIPTED_CAMERA"), true);
					CAM::SET_CAM_FOV(Local_96.f_169, Local_96.f_125);
					CAM::SET_CAM_NEAR_CLIP(Local_96.f_169, 0.01f);
					CAM::SET_CAM_NEAR_DOF(Local_96.f_169, 0.01f);
					GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
					if (func_35())
					{
						GRAPHICS::SET_TIMECYCLE_MODIFIER("eyeinthesky");
					}
					Var0 = { func_394() };
					CAM::HARD_ATTACH_CAM_TO_ENTITY(Local_96.f_169, NETWORK::NET_TO_OBJ(Local_96.f_159), 0f, 0f, 180f, Var0, true);
					if (func_35())
					{
						CAM::SET_CAM_ROT(Local_96.f_169, func_393() - Vector(0f, -180f, 180f), 2);
					}
					PED::SET_POP_CONTROL_SPHERE_THIS_FRAME(Local_96.f_150, 75f, 75f);
					STREAMING::SET_FOCUS_POS_AND_VEL(Local_96.f_150, CAM::GET_CAM_ROT(Local_96.f_169, 2));
					if (!func_16())
					{
						ENTITY::SET_ENTITY_INVINCIBLE(NETWORK::NET_TO_OBJ(Local_96.f_159), false);
					}
					if (!func_340())
					{
						if (STREAMING::IS_NEW_LOAD_SCENE_LOADED())
						{
							STREAMING::NEW_LOAD_SCENE_STOP();
						}
					}
					if (!__LIB_12__::func_637() && !func_16())
					{
						func_369();
						if (AUDIO::HAS_SOUND_FINISHED(Local_96.f_40))
						{
							Local_96.f_40 = AUDIO::GET_SOUND_ID();
							AUDIO::PLAY_SOUND_FRONTEND(Local_96.f_40, "HUD_Startup", Local_96.f_157, true);
						}
						func_270();
						if (func_83())
						{
							func_102();
						}
						else
						{
							func_131();
						}
						func_237(1);
						func_249();
						func_352();
						CAM::RENDER_SCRIPT_CAMS(true, false, 0, true, true, 0);
						Local_96.f_173 = NETWORK::GET_NETWORK_TIME();
					}
					func_390(1);
					func_389(1);
					__LIB_1__::func_28(158);
					MISC::SET_BIT(&(Local_94[PLAYER::PLAYER_ID() /*3*/]), 0);
					if (!__LIB_12__::func_637() && !func_16())
					{
						func_383(4);
					}
					else if (func_16())
					{
						func_383(3);
					}
					else
					{
						Local_96.f_153 = { __LIB_0__::func_85(PLAYER::PLAYER_ID()) };
						MISC::GET_GROUND_Z_FOR_3D_COORD(Local_96.f_153, &(Local_96.f_153.f_2), false, false);
						Local_96.f_118 = ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID());
						__LIB_3__::func_636();
						Local_96.f_153 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Local_96.f_153, Local_96.f_118, -0.0695723f, 0.177497f, 0f) };
						func_383(2);
					}
				}
				else if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
				}
			}
			else
			{
				if (CAM::DOES_CAM_EXIST(Local_96.f_169))
				{
				}
				if (!BitTest(Local_96.f_5, 0))
				{
				}
			}
		}
		else
		{
			NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_96.f_159);
		}
	}
}

void func_389(bool bParam0)//Position - 0xDE47
{
	if (bParam0)
	{
		if (!BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_348, 26))
		{
			MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_348), 26);
		}
	}
	else if (BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_348, 26))
	{
		MISC::CLEAR_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_348), 26);
	}
}

void func_390(bool bParam0)//Position - 0xDEB4
{
	if (bParam0)
	{
		if (!__LIB_0__::func_93())
		{
			MISC::SET_BIT(&Global_1958711, 5);
		}
	}
	else
	{
		if (__LIB_0__::func_93())
		{
			MISC::CLEAR_BIT(&Global_1958711, 5);
		}
		func_391(0);
	}
}

void func_391(bool bParam0)//Position - 0xDEEA
{
	if (bParam0)
	{
		if (!__LIB_6__::func_180())
		{
			MISC::SET_BIT(&Global_1958711, 12);
		}
	}
	else if (__LIB_6__::func_180())
	{
		MISC::CLEAR_BIT(&Global_1958711, 12);
	}
}

Vector3 func_393()//Position - 0xDF2C
{
	return Global_1958711.f_16;
}

Vector3 func_394()//Position - 0xDF3C
{
	if (func_24() || func_38())
	{
		return 0f, -0.099f, -0.02f;
	}
	else if (func_35())
	{
		return 0f, -0.9f, 0f;
	}
	else if (func_30() || func_160())
	{
		return 0f, -0.038f, -0.006f;
	}
	else if (func_16())
	{
		return 0f, -5.48f, 0f;
	}
	return 0f, -0.038f, -0.004f;
}

int func_396()//Position - 0xDFC7
{
	if (__LIB_32__::func_306() && !func_41())
	{
		return 1;
	}
	if (func_400())
	{
		return 1;
	}
	if (__LIB_0__::func_114())
	{
		return 1;
	}
	if (func_41() && __LIB_33__::func_135())
	{
		return 1;
	}
	if (func_397() && __LIB_33__::func_135())
	{
		return 1;
	}
	if (!__LIB_0__::func_891(PLAYER::PLAYER_ID(), 0) && !__LIB_0__::func_833())
	{
		return 1;
	}
	return 0;
}

int func_397()//Position - 0xE03E
{
	if (__LIB_2__::func_905(PLAYER::PLAYER_ID()) && func_42())
	{
		if (Global_1581359 == 2 || Global_1581359 == 1)
		{
			return 1;
		}
	}
	return 0;
}

int func_400()//Position - 0xE0FF
{
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		return 0;
	}
	if (func_41() || func_401())
	{
		return 0;
	}
	if (__LIB_0__::func_114())
	{
		return 0;
	}
	return 1;
}

int func_401()//Position - 0xE138
{
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1421.5931f, -3011.17f, -80.24994f, -1423.1421f, -3012.2954f, -77.74994f, 2f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1419.463f, -3009.1448f, -80.49994f, -1420.6843f, -3010.617f, -77.99994f, 2f, false, true, 0))
	{
		return 1;
	}
	return 0;
}

void func_402()//Position - 0xE1A2
{
	int iVar0;
	struct<3> Var1;
	bool bVar2;
	float fVar3;
	iVar0 = joaat("blazer5");
	if (__LIB_0__::func_799(Local_96.f_240) && __LIB_0__::func_799(iVar0))
	{
		if (!BitTest(Local_96.f_5, 0))
		{
			if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_96.f_159))
			{
				if (!func_340())
				{
					if (func_138())
					{
						if (__LIB_0__::func_121(__LIB_4__::func_281()))
						{
							Var1 = { ENTITY::GET_ENTITY_COORDS(__LIB_4__::func_281(), true) };
						}
					}
					else
					{
						Var1 = { Local_96.f_138 };
					}
					if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
					{
						__LIB_1__::func_376(PLAYER::PLAYER_ID(), 0, 512, 0);
					}
					if (!BitTest(Local_96.f_5, 18))
					{
						if (STREAMING::NEW_LOAD_SCENE_START_SPHERE(Var1, 100f, 1))
						{
							MISC::SET_BIT(&(Local_96.f_5), 18);
						}
					}
					else if (STREAMING::IS_NEW_LOAD_SCENE_LOADED())
					{
						if (!BitTest(Local_96.f_5, 19))
						{
							if (func_408())
							{
								if (func_405())
								{
									MISC::SET_BIT(&(Local_96.f_5), 19);
								}
							}
							else
							{
								if (!__LIB_0__::func_86(func_404()))
								{
									Local_96.f_138 = { func_404() };
								}
								MISC::SET_BIT(&(Local_96.f_5), 19);
								if (func_16())
								{
									Local_96.f_138.f_2 = (Local_96.f_138.f_2 + 1000f);
								}
							}
						}
					}
				}
				if (BitTest(Local_96.f_5, 19) || func_340())
				{
					if (!BitTest(Local_96.f_5, 20))
					{
						Local_96.f_163 = VEHICLE::CREATE_VEHICLE(iVar0, Local_96.f_138, 0f, false, false, false);
						ENTITY::SET_ENTITY_INVINCIBLE(Local_96.f_163, true);
						ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_96.f_163, Local_96.f_138, false, false, true);
						ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(Local_96.f_163, false, false);
						ENTITY::SET_ENTITY_VISIBLE(Local_96.f_163, false, false);
						MISC::SET_BIT(&(Local_96.f_5), 20);
					}
					else if (__LIB_2__::func_852(NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(false, 1) + 1, 0, 1))
					{
						if (!BitTest(Local_96.f_5, 30))
						{
							NETWORK::RESERVE_LOCAL_NETWORK_MISSION_OBJECTS(NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(false, 1) + 1);
							MISC::SET_BIT(&(Local_96.f_5), 30);
						}
						if (NETWORK::CAN_REGISTER_MISSION_OBJECTS(1))
						{
							bVar2 = func_403();
							if (__LIB_12__::func_637())
							{
								Local_96.f_153 = { __LIB_0__::func_85(PLAYER::PLAYER_ID()) };
								MISC::GET_GROUND_Z_FOR_3D_COORD(Local_96.f_153, &(Local_96.f_153.f_2), false, false);
								Local_96.f_138 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION(Local_96.f_158, "ENTER", Local_96.f_153, ENTITY::GET_ENTITY_ROTATION(PLAYER::PLAYER_PED_ID(), 2), 0f, 2) };
							}
							if (__LIB_1__::func_671(&(Local_96.f_159), Local_96.f_240, Local_96.f_138, 0, 1, 1, 1, 1, 0, bVar2))
							{
								Global_1958711.f_20 = NETWORK::NET_TO_OBJ(Local_96.f_159);
								ENTITY::SET_ENTITY_INVINCIBLE(NETWORK::NET_TO_OBJ(Local_96.f_159), true);
								if (func_138())
								{
									if (__LIB_0__::func_121(__LIB_4__::func_281()))
									{
										ENTITY::SET_ENTITY_ROTATION(__LIB_1__::func_777(), ENTITY::GET_ENTITY_ROTATION(__LIB_4__::func_281(), 2), 2, true);
										fVar3 = (ENTITY::GET_ENTITY_HEADING(__LIB_4__::func_281()) + 180f);
									}
								}
								Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_421 = { Local_96.f_138 };
								Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_424 = fVar3;
								Local_94[PLAYER::PLAYER_ID() /*3*/].f_2 = Local_96.f_159;
								NETWORK::SET_NETWORK_ID_ALWAYS_EXISTS_FOR_PLAYER(Local_96.f_159, PLAYER::PLAYER_ID(), true);
								INTERIOR::FORCE_ACTIVATING_TRACKING_ON_ENTITY(NETWORK::NET_TO_ENT(Local_96.f_159), 1);
								ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(NETWORK::NET_TO_ENT(Local_96.f_159), true, 1);
								ENTITY::SET_ENTITY_COORDS_NO_OFFSET(__LIB_1__::func_777(), Local_96.f_138, false, false, true);
								ENTITY::SET_ENTITY_HEADING(__LIB_1__::func_777(), fVar3);
								NETWORK::SET_ENTITY_GHOSTED_FOR_GHOST_PLAYERS(__LIB_1__::func_777(), true);
								if (!__LIB_0__::func_86(func_393()))
								{
									ENTITY::SET_ENTITY_ROTATION(__LIB_1__::func_777(), func_393(), 2, true);
								}
								if (func_35() || func_16())
								{
									ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(__LIB_1__::func_777(), false, false);
								}
								NETWORK::NETWORK_USE_HIGH_PRECISION_BLENDING(Local_96.f_159, true);
								if (func_164(PLAYER::PLAYER_ID()))
								{
									ENTITY::SET_ENTITY_HEALTH(__LIB_1__::func_777(), Global_262145.f_24698 /* Tunable: BB_TERRORBYTE_DRONE_HEALTH */ * 5, 0);
								}
								else if (func_16())
								{
									ENTITY::SET_ENTITY_HEALTH(__LIB_1__::func_777(), 1, 0);
									NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(Local_96.f_159, true);
									ENTITY::SET_ENTITY_LOD_DIST(NETWORK::NET_TO_ENT(Local_96.f_159), 700);
								}
								else
								{
									ENTITY::SET_ENTITY_HEALTH(__LIB_1__::func_777(), Global_262145.f_24698 /* Tunable: BB_TERRORBYTE_DRONE_HEALTH */, 0);
								}
								NETWORK::SET_NETWORK_ID_CAN_MIGRATE(Local_96.f_159, false);
								ENTITY::SET_ENTITY_RECORDS_COLLISIONS(NETWORK::NET_TO_ENT(Local_96.f_159), true);
								PED::SET_POP_CONTROL_SPHERE_THIS_FRAME(Local_96.f_138, 100f, 200f);
								STREAMING::SET_FOCUS_POS_AND_VEL(ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_ENT(Local_96.f_159), true), ENTITY::GET_ENTITY_ROTATION(NETWORK::NET_TO_ENT(Local_96.f_159), 2));
								STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_96.f_240);
								STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
							}
						}
					}
				}
			}
			else
			{
				ENTITY::SET_ENTITY_HAS_GRAVITY(NETWORK::NET_TO_OBJ(Local_96.f_159), false);
				if (__LIB_0__::func_121(Local_96.f_163))
				{
					if (__LIB_0__::func_121(NETWORK::NET_TO_ENT(Local_96.f_159)))
					{
						ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_96.f_163, NETWORK::NET_TO_OBJ(Local_96.f_159), -1, 0f, 0f, -0.8f, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
						MISC::SET_BIT(&(Local_96.f_5), 0);
					}
				}
			}
		}
	}
}

int func_403()//Position - 0xE5F2
{
	if (__LIB_12__::func_637())
	{
		return 1;
	}
	if (func_16())
	{
		return 1;
	}
	return 0;
}

Vector3 func_404()//Position - 0xE611
{
	return Global_1958711.f_13;
}

int func_405()//Position - 0xE621
{
	if (Local_96.f_16 == 0)
	{
		if (!BitTest(Local_96.f_5, 14))
		{
			if ((!func_164(PLAYER::PLAYER_ID()) && func_138()) && __LIB_0__::func_121(__LIB_4__::func_281()))
			{
				Local_96.f_138 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(ENTITY::GET_ENTITY_COORDS(__LIB_4__::func_281(), true), ENTITY::GET_ENTITY_HEADING(__LIB_4__::func_281()), -0.7f, 1.6f, 4f) };
				MISC::SET_BIT(&(Local_96.f_5), 14);
			}
			else
			{
				if (func_138() && __LIB_0__::func_121(__LIB_4__::func_281()))
				{
					Local_96.f_138 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(ENTITY::GET_ENTITY_COORDS(__LIB_4__::func_281(), true), ENTITY::GET_ENTITY_HEADING(__LIB_4__::func_281()), -0.7f, 1.6f, 4f) };
				}
				Local_96.f_138 = MISC::GET_RANDOM_FLOAT_IN_RANGE((Local_96.f_138 - 1.5f), (Local_96.f_138 + 1.5f));
				Local_96.f_138.f_1 = MISC::GET_RANDOM_FLOAT_IN_RANGE((Local_96.f_138.f_1 - 1.5f), (Local_96.f_138.f_1 + 1.5f));
				Local_96.f_138.f_2 = MISC::GET_RANDOM_FLOAT_IN_RANGE((Local_96.f_138.f_2 + 0.5f), (Local_96.f_138.f_2 + 1.5f));
				if (!func_407(Local_96.f_138))
				{
					MISC::SET_BIT(&(Local_96.f_5), 14);
				}
			}
		}
		else if (BitTest(Local_96.f_5, 15))
		{
			Local_96.f_138 = MISC::GET_RANDOM_FLOAT_IN_RANGE((Local_96.f_138 - 1.5f), (Local_96.f_138 + 1.5f));
			Local_96.f_138.f_1 = MISC::GET_RANDOM_FLOAT_IN_RANGE((Local_96.f_138.f_1 - 1.5f), (Local_96.f_138.f_1 + 1.5f));
			Local_96.f_138.f_2 = MISC::GET_RANDOM_FLOAT_IN_RANGE((Local_96.f_138.f_2 + 0.5f), (Local_96.f_138.f_2 + 1.5f));
			if (!func_407(Local_96.f_138))
			{
				MISC::CLEAR_BIT(&(Local_96.f_5), 15);
			}
		}
		func_406(Local_96.f_138);
	}
	else if (Local_96.f_16 == 1 && !func_407(Local_96.f_138))
	{
		return 1;
	}
	else
	{
		Local_96.f_16 = 0;
		MISC::SET_BIT(&(Local_96.f_5), 15);
	}
	return 0;
}

void func_406(struct<3> Param0)//Position - 0xE805
{
	int iVar0;
	float fVar1;
	int iVar2;
	var uVar3;
	struct<3> Var4;
	var uVar5;
	int iVar6;
	switch (Local_96.f_15)
	{
		case 0:
			if (func_138())
			{
				if (__LIB_0__::func_121(__LIB_4__::func_281()))
				{
					iVar0 = __LIB_4__::func_281();
				}
			}
			if (func_24() || func_38())
			{
				fVar1 = __LIB_2__::func_760(Local_96.f_240);
			}
			else
			{
				fVar1 = (__LIB_2__::func_760(Local_96.f_240) * 11f);
			}
			Local_96.f_168 = SHAPETEST::START_SHAPE_TEST_CAPSULE(Param0, Param0, fVar1, 511, iVar0, 4);
			if (Local_96.f_168 != 0)
			{
				Local_96.f_15 = 1;
			}
			break;
		case 1:
			iVar6 = SHAPETEST::GET_SHAPE_TEST_RESULT(Local_96.f_168, &iVar2, &Var4, &uVar3, &uVar5);
			if (iVar6 == 2)
			{
				if (iVar2 == 0)
				{
					Local_96.f_16 = 1;
					Var4 = { 0f, 0f, 0f };
				}
				else
				{
					Local_96.f_16 = 2;
					Local_96.f_168 = 0;
					Local_96.f_15 = 0;
				}
			}
			else if (iVar6 == 0)
			{
				Local_96.f_15 = 0;
			}
			break;
	}
}

int func_407(struct<3> Param0)//Position - 0xE8DD
{
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, -1036.2699f, -228.70403f, 53.76435f, -1096.765f, -258.69f, 35.778076f, 20f, false, true))
	{
		return 1;
	}
	return 0;
}

int func_408()//Position - 0xE91A
{
	if (func_138())
	{
		return 1;
	}
	if (func_30() && !__LIB_12__::func_637())
	{
		return 1;
	}
	return 0;
}

void func_410()//Position - 0xE95F
{
	if (__LIB_0__::func_156(PLAYER::PLAYER_ID(), 1, 1))
	{
		Local_96.f_141 = { func_258(&Local_96) };
		if (!__LIB_0__::func_86(func_404()))
		{
			Local_96.f_138 = { func_404() };
		}
		else
		{
			Local_96.f_138 = { __LIB_0__::func_85(PLAYER::PLAYER_ID()) };
			Local_96.f_138 = { Local_96.f_138, Local_96.f_138.f_1, (Local_96.f_138.f_2 + 1.5f) };
		}
		if (__LIB_0__::func_891(PLAYER::PLAYER_ID(), 0))
		{
			func_458(1);
		}
		if (__LIB_0__::func_891(PLAYER::PLAYER_ID(), 0))
		{
			func_455();
		}
		else if (((__LIB_13__::func_604(PLAYER::PLAYER_ID()) == 2 || __LIB_13__::func_604(PLAYER::PLAYER_ID()) == 1) && !BitTest(Global_1965531, 6)) && !BitTest(Global_1965532, 0))
		{
			if (BitTest(Global_2788035, 0))
			{
				__LIB_40__::func_939(1);
				func_444(0, 0);
				func_443();
				func_391(1);
				func_383(1);
			}
		}
		else if ((__LIB_6__::func_196() && func_439()) && !BitTest(Global_1965531, 6))
		{
			func_426();
		}
		else if (BitTest(Global_1965531, 6) && BitTest(Global_1965532, 0))
		{
			func_444(0, 0);
			func_391(1);
			func_383(1);
		}
		else if (func_16())
		{
			func_412();
		}
		else if (__LIB_12__::func_637() && !__LIB_12__::func_641())
		{
			HUD::CLEAR_HELP(true);
			__LIB_0__::func_151("PIM_DRONAMOS" /* GXT: You are not in a safe place to launch the Nano Drone. */, -1);
			__LIB_1__::func_376(PLAYER::PLAYER_ID(), 1, 0, 0);
			func_383(7);
		}
		else if (__LIB_0__::func_86(Local_96.f_135))
		{
			Local_96.f_156 = 0;
			func_391(1);
			func_383(1);
		}
	}
}

void func_412()//Position - 0xEAF6
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var2;
	if ((func_397() && !func_425()) && !func_416())
	{
		if (PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/) || PAD::IS_DISABLED_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/))
		{
			if (Global_1581359 == 1)
			{
				Local_96.f_82[PLAYER::PLAYER_ID()] = MISC::GET_RANDOM_INT_IN_RANGE(1, 5);
			}
			else
			{
				Local_96.f_82[PLAYER::PLAYER_ID()] = MISC::GET_RANDOM_INT_IN_RANGE(5, 9);
			}
			if (Global_1581359 == 1)
			{
				iVar0 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(__LIB_3__::func_908(), func_375(PLAYER::PLAYER_ID()));
				Var1 = { ENTITY::GET_ENTITY_BONE_POSTION(__LIB_3__::func_908(), iVar0) };
				Local_96.f_144 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Var1, ENTITY::GET_ENTITY_HEADING(__LIB_3__::func_908()), 0f, 0f, -2.6f) };
			}
			else if (Global_1581359 == 2)
			{
				iVar0 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(__LIB_3__::func_908(), func_375(PLAYER::PLAYER_ID()));
				Var1 = { ENTITY::GET_ENTITY_BONE_POSTION(__LIB_3__::func_908(), iVar0) };
				Local_96.f_144 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Var1, ENTITY::GET_ENTITY_HEADING(__LIB_3__::func_908()), 0f, 0f, -2.6f) };
			}
			Var2 = { ENTITY::GET_ENTITY_ROTATION(__LIB_3__::func_908(), 2) };
			__LIB_22__::func_190(Local_96.f_144, (Var2.f_0 + 90f), 180f, Var2.f_2);
			func_391(1);
			func_415(Local_96.f_82[PLAYER::PLAYER_ID()]);
			func_383(1);
			__LIB_12__::func_291();
			__LIB_12__::func_298();
			HUD::CLEAR_HELP(true);
		}
	}
	else if (!__LIB_0__::func_121(__LIB_3__::func_908()))
	{
	}
	if (func_425())
	{
		if (__LIB_0__::func_1("MP_SUBSEAT_2" /* GXT: Press ~INPUT_CELLPHONE_SELECT~ to launch a guided missile. ~n~Press ~INPUT_CONTEXT~ to stand up. */))
		{
			HUD::CLEAR_HELP(true);
		}
	}
}

void func_415(var uParam0)//Position - 0xEC8E
{
	struct<3> Var0;
	int iVar1;
	Var0.f_0 = -1007374530;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = uParam0;
	iVar1 = __LIB_0__::func_943(0, 1);
	if (iVar1 != 0)
	{
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 3, iVar1);
	}
}

int func_416()//Position - 0xECC6
{
	struct<3> Var0;
	int iVar1;
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1420.915f, -3009.1323f, -79.99994f, -1421.9803f, -3009.1213f, -77.74994f, 1f, false, true, 0))
	{
		return 1;
	}
	if (__LIB_0__::func_193())
	{
		return 1;
	}
	if (__LIB_1__::func_512())
	{
		return 1;
	}
	if (HUD::IS_PAUSE_MENU_ACTIVE())
	{
		return 1;
	}
	if (__LIB_0__::func_833())
	{
		return 1;
	}
	if (__LIB_0__::func_891(PLAYER::PLAYER_ID(), 0))
	{
		if (__LIB_1__::func_637(Global_1853193))
		{
			return 1;
		}
	}
	if (func_138())
	{
		if (func_422())
		{
			if (__LIB_6__::func_554())
			{
				return 1;
			}
			if (BitTest(Local_96.f_5, 28))
			{
				return 1;
			}
		}
	}
	if (func_16())
	{
		if ((__LIB_6__::func_529() && Global_1581359 == 1) || (__LIB_6__::func_526() && Global_1581359 == 2))
		{
			return 1;
		}
		if (BitTest(Local_96.f_5, 28))
		{
			return 1;
		}
		if (!__LIB_0__::func_121(__LIB_3__::func_908()))
		{
			return 1;
		}
		Var0 = { ENTITY::GET_ENTITY_COORDS(__LIB_3__::func_908(), true) };
		if (Var0.f_2 <= -3f)
		{
			return 1;
		}
		iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(__LIB_3__::func_908(), -1, false);
		if (__LIB_0__::func_121(iVar1))
		{
			if (PED::IS_PED_A_PLAYER(iVar1))
			{
				if (__LIB_9__::func_366(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1)))
				{
					return 1;
				}
			}
		}
	}
	if (__LIB_9__::func_366(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	if (__LIB_0__::func_77(0))
	{
		return 1;
	}
	if (__LIB_3__::func_100())
	{
		return 1;
	}
	if (func_138())
	{
		if (__LIB_32__::func_306())
		{
			if (__LIB_0__::func_156(PLAYER::PLAYER_ID(), 1, 1))
			{
				if (__LIB_0__::func_724(PLAYER::PLAYER_PED_ID(), -1422.1885f, -3015.9255f, -80.1554f, 1) < 1.5f)
				{
					return 1;
				}
				if (__LIB_10__::func_746())
				{
					return 1;
				}
			}
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true) || __LIB_3__::func_684(PLAYER::PLAYER_PED_ID(), 1))
			{
				return 1;
			}
		}
	}
	if (__LIB_6__::func_181())
	{
		return 1;
	}
	if (Global_262145.f_24708 /* Tunable: -1148048700 */)
	{
		return 1;
	}
	if (BitTest(Local_96.f_5, 27))
	{
		return 1;
	}
	if (__LIB_0__::func_891(PLAYER::PLAYER_ID(), 0))
	{
		if (__LIB_0__::func_121(__LIB_4__::func_281()))
		{
			if ((ENTITY::IS_ENTITY_IN_ANGLED_AREA(__LIB_4__::func_281(), -136.16142f, 4617.176f, 124.513405f, -490.30576f, 4924.749f, 159.06767f, 19.5f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(__LIB_4__::func_281(), 908.465f, 34.857258f, 79.354294f, 926.41394f, 64.377426f, 87.99218f, 19f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(__LIB_4__::func_281(), 946.8937f, -6.119501f, 77.90774f, 962.0698f, -5.454865f, 88.65581f, 10.75f, false, true, 0))
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	if (Global_1581354)
	{
		return 1;
	}
	if (Global_2789737)
	{
		return 1;
	}
	if (Global_2789734)
	{
		return 1;
	}
	return 0;
}

int func_422()//Position - 0xF144
{
	if (func_164(PLAYER::PLAYER_ID()) && Global_1958711.f_5 == -1)
	{
		return 0;
	}
	return 1;
}

int func_425()//Position - 0xF198
{
	char* sVar0;
	sVar0 = "anim@scripted@submarine@ig28_submarine_turret_control@male@";
	if (__LIB_1__::func_365(PLAYER::PLAYER_PED_ID()))
	{
		sVar0 = "anim@scripted@submarine@ig28_submarine_turret_control@heeled@";
	}
	if ((((((((ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "enter", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "enter_left", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "exit", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "exit_left", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), sVar0, "enter_left", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), sVar0, "enter", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), sVar0, "exit", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), sVar0, "exit_left", 3)) || __LIB_6__::func_572(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_GO_STRAIGHT_TO_COORD")))
	{
		return 1;
	}
	return 0;
}

void func_426()//Position - 0xF270
{
	struct<3> Var0;
	int iVar1;
	if (!func_416())
	{
		if ((((((__LIB_13__::func_593() || __LIB_6__::func_211()) && !Global_1931426) && func_439()) && !BitTest(Global_2787913, 6)) && Global_1574965) && !(__LIB_13__::func_593() && Global_262145.f_26632 /* Tunable: -542627307 */))
		{
			if ((((((PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 224 /*INPUT_SCRIPT_RLEFT*/) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 224 /*INPUT_SCRIPT_RLEFT*/)) && !PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 223 /*INPUT_SCRIPT_RDOWN*/)) && !PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 223 /*INPUT_SCRIPT_RDOWN*/)) && !PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 235 /*INPUT_SCRIPT_PAD_RIGHT*/)) && !PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 235 /*INPUT_SCRIPT_PAD_RIGHT*/)) && !PAD::IS_DISABLED_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 19 /*INPUT_CHARACTER_WHEEL*/))
			{
				if (MONEY::NETWORK_CAN_SPEND_MONEY(Global_262145.f_26634 /* Tunable: -76677190 */, false, false, true, -1, 0) || BitTest(Global_2787913, 2))
				{
					MISC::SET_BIT(&Global_2787913, 0);
					func_444(0, 0);
					func_391(1);
					func_383(1);
					func_433();
					__LIB_33__::func_257(73, -1);
					__LIB_13__::func_602();
					Var0 = { func_427() };
					__LIB_22__::func_190(Var0, 0f, 0f, 0f);
					if (__LIB_13__::func_593())
					{
						AUDIO::PLAY_SOUND_FROM_ENTITY(iVar1, "Select_Spec_Drone", PLAYER::PLAYER_PED_ID(), "DLC_AW_Spectator_Tablet_Sounds", true, 0);
					}
				}
				else if (!BitTest(Global_2787913, 4))
				{
					MISC::SET_BIT(&Global_2787913, 4);
				}
			}
		}
	}
}

Vector3 func_427()//Position - 0xF3B2
{
	float fVar0;
	float fVar1;
	float fVar2;
	struct<3> Var3;
	fVar0 = 0f;
	fVar1 = 6f;
	fVar2 = 6f;
	Var3 = { 2800f, -3800.2f, 170f };
	if ((Global_4718592.f_162543.f_1 == 3 || Global_4718592.f_162543.f_1 == 3) || Global_4718592.f_162543.f_1 == 3)
	{
		Var3.f_1 = -3860f;
	}
	fVar1 = (fVar1 * IntToFloat(NETWORK::PARTICIPANT_ID_TO_INT()));
	fVar2 = (fVar2 * IntToFloat((NETWORK::PARTICIPANT_ID_TO_INT() / 8)));
	fVar1 = (fVar1 - (8f * fVar2));
	return OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Var3, fVar0, fVar1, fVar2, 0f);
}

void func_433()//Position - 0xF53F
{
	__LIB_13__::func_546(1, 7985);
}

int func_439()//Position - 0xF613
{
	int iVar0;
	int iVar1;
	if (__LIB_0__::func_625() && !__LIB_0__::func_274())
	{
		return 1;
	}
	iVar0 = PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID());
	if (iVar0 >= 4 || iVar0 < 0)
	{
		iVar0 = 0;
	}
	iVar1 = Global_1058069.f_14[iVar0];
	if (iVar1 < 17)
	{
		if ((((BitTest(Global_4718592.f_658[iVar0 /*22957*/].f_7929[iVar1], 23) && BitTest(Global_4718592.f_658[iVar0 /*22957*/].f_7929[iVar1], 24)) && BitTest(Global_4718592.f_658[iVar0 /*22957*/].f_7929[iVar1], 25)) && BitTest(Global_4718592.f_658[iVar0 /*22957*/].f_7929[iVar1], 26)) && BitTest(Global_4718592.f_32, 16))
		{
			return 1;
		}
	}
	if (!BitTest(Global_4718592.f_32, 16))
	{
		return 1;
	}
	else if (__LIB_6__::func_211() || __LIB_1__::func_201(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	return 0;
}

void func_443()//Position - 0xF766
{
	MISC::CLEAR_BIT(&Global_2788035, 0);
}

void func_444(bool bParam0, bool bParam1)//Position - 0xF777
{
	int iVar0;
	int iVar1;
	Local_96.f_119 = Global_262145.f_24701 /* Tunable: BB_TERRORBYTE_DRONE_FORWARD_SPEED */;
	Local_96.f_130 = 40f;
	if (func_38() || func_24())
	{
		Local_96.f_119 = (Local_96.f_119 * 4.5f);
	}
	else if (func_35())
	{
		Local_96.f_119 = 100f;
		Local_96.f_130 = 26f;
	}
	else if (func_30())
	{
		Local_96.f_119 = 100f;
		Local_96.f_130 = 70f;
	}
	else if (func_160())
	{
		Local_96.f_119 = 10f;
		Local_96.f_130 = 35f;
	}
	else if (func_16())
	{
		Local_96.f_119 = 149f;
		Local_96.f_130 = 16f;
	}
	if (func_38())
	{
		Local_96.f_240 = joaat("xs_prop_arena_drone_01");
	}
	else if (func_24())
	{
		Local_96.f_240 = joaat("xs_prop_arena_drone_02");
	}
	else if (func_35())
	{
		Local_96.f_240 = joaat("xs_prop_arena_airmissile_01a");
		func_451(1);
	}
	else if (func_30())
	{
		if (!__LIB_12__::func_637())
		{
			iVar0 = __LIB_5__::func_38(PLAYER::PLAYER_ID());
			switch (iVar0)
			{
				case 37:
					Local_96.f_240 = joaat("ch_prop_arcade_drone_01d");
					break;
				case 38:
					Local_96.f_240 = joaat("ch_prop_arcade_drone_01a");
					break;
				case 39:
					Local_96.f_240 = joaat("ch_prop_arcade_drone_01c");
					break;
				case 40:
					Local_96.f_240 = joaat("ch_prop_arcade_drone_01b");
					break;
			}
		}
		else
		{
			Local_96.f_240 = joaat("ch_prop_casino_drone_01a");
		}
	}
	else if (func_160())
	{
		Local_96.f_240 = joaat("ch_prop_casino_drone_01a");
	}
	else if (func_16())
	{
		Local_96.f_240 = joaat("h4_prop_h4_airmissile_01a");
		func_451(1);
	}
	else
	{
		Local_96.f_240 = joaat("ba_prop_battle_drone_quad");
	}
	if (bParam1)
	{
		Local_96.f_138 = { Local_96.f_144 };
	}
	Global_1958711.f_1 = 1500;
	func_449();
	__LIB_36__::func_442(1);
	func_447(1);
	if (func_38() || func_83())
	{
		__LIB_36__::func_446(1);
	}
	else if (func_24())
	{
		__LIB_36__::func_446(0);
	}
	if (__LIB_12__::func_637())
	{
		Local_96.f_158 = "ANIM_HEIST@HS3F@IG4_DRONE@MALE@";
		STREAMING::REQUEST_ANIM_DICT(Local_96.f_158);
	}
	if (func_24())
	{
		STREAMING::REQUEST_NAMED_PTFX_ASSET("scr_xs_dr");
	}
	if (__LIB_12__::func_637())
	{
		func_445(Global_262145.f_28780 /* Tunable: 126404605 */);
	}
	else if (func_30() && !__LIB_12__::func_637())
	{
		func_445(Global_262145.f_28781 /* Tunable: 107757763 */);
	}
	else if (func_16())
	{
		func_445(SYSTEM::TO_FLOAT(Global_262145.f_30176 /* Tunable: IH_SUBMARINE_MISSILES_DISTANCE */));
		iVar1 = 0;
		while (iVar1 <= 31)
		{
			Local_96.f_46[iVar1] = -1;
			iVar1++;
		}
	}
	else if (!func_138() && !func_340())
	{
		func_445(200f);
	}
	__LIB_25__::func_516(Global_1837194);
	if (bParam0)
	{
	}
}

void func_445(float fParam0)//Position - 0xFA0F
{
	if (Global_1958711.f_8 != fParam0)
	{
		Global_1958711.f_8 = fParam0;
	}
}

void func_447(bool bParam0)//Position - 0xFA5E
{
	if (bParam0)
	{
		if (!func_356())
		{
			MISC::SET_BIT(&Global_1958711, 2);
		}
	}
	else if (func_356())
	{
		MISC::CLEAR_BIT(&Global_1958711, 2);
	}
}

void func_449()//Position - 0xFAC0
{
	if (!Local_96.f_156)
	{
		Local_96.f_18 = 100;
	}
	if (func_160())
	{
		Local_96.f_24 = 100;
	}
	Local_96.f_19 = 0;
	Local_96.f_20 = 100;
	Local_96.f_125 = 90f;
	Local_96.f_128 = 90f;
	if (!func_83())
	{
		Local_96.f_170 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("DRONE_CAM");
	}
	else if (func_16())
	{
		Local_96.f_170 = func_111();
	}
	else
	{
		Local_96.f_170 = func_110();
	}
	if (func_38())
	{
		Local_96.f_157 = "DLC_Arena_Drone_Sounds";
	}
	else if (func_24())
	{
		Local_96.f_157 = "DLC_Arena_Battle_Drone_Sounds";
	}
	else if (func_35())
	{
		Local_96.f_157 = "DLC_Arena_Piloted_Missile_Sounds";
	}
	else if (func_16())
	{
		Local_96.f_157 = "DLC_H4_Piloted_Missile_Sounds";
	}
	else
	{
		Local_96.f_157 = "DLC_BTL_Drone_Sounds";
	}
}

void func_451(bool bParam0)//Position - 0xFBA4
{
	if (bParam0)
	{
		if (!func_203())
		{
			MISC::SET_BIT(&Global_1958711, 15);
		}
	}
	else if (func_203())
	{
		MISC::CLEAR_BIT(&Global_1958711, 15);
	}
}

void func_455()//Position - 0xFC87
{
	if (!func_416())
	{
		if (func_41())
		{
			if (func_400())
			{
				if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() && !HUD::IS_HELP_MESSAGE_ON_SCREEN())
				{
					__LIB_0__::func_190("DRONE_TRIG" /* GXT: Press ~INPUT_CONTEXT~ to launch a drone. */);
				}
			}
			else if (__LIB_0__::func_1("DRONE_TRIG" /* GXT: Press ~INPUT_CONTEXT~ to launch a drone. */))
			{
				HUD::CLEAR_HELP(true);
			}
			if (func_41() || __LIB_0__::func_114())
			{
				if (PAD::IS_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 176 /*INPUT_CELLPHONE_SELECT*/) || PAD::IS_DISABLED_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 176 /*INPUT_CELLPHONE_SELECT*/))
				{
					func_391(1);
					func_383(1);
					HUD::CLEAR_HELP(true);
				}
			}
			else if (__LIB_0__::func_1("DRONE_TRIG" /* GXT: Press ~INPUT_CONTEXT~ to launch a drone. */))
			{
				if ((PAD::IS_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 51 /*INPUT_CONTEXT*/) || PAD::IS_DISABLED_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 51 /*INPUT_CONTEXT*/)) || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					Local_96.f_156 = 0;
					func_391(1);
					func_383(1);
					HUD::CLEAR_HELP(true);
				}
			}
		}
		else if ((__LIB_32__::func_306() && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1420.6843f, -3010.617f, -77.99994f, -1423.1421f, -3012.2954f, -77.74994f, 2f, false, true, 0)) && func_400())
		{
			if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() && !HUD::IS_HELP_MESSAGE_ON_SCREEN())
			{
				__LIB_0__::func_190("DRONE_TRIG" /* GXT: Press ~INPUT_CONTEXT~ to launch a drone. */);
			}
			if (__LIB_0__::func_1("DRONE_TRIG" /* GXT: Press ~INPUT_CONTEXT~ to launch a drone. */))
			{
				if (PAD::IS_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 51 /*INPUT_CONTEXT*/) || PAD::IS_DISABLED_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 51 /*INPUT_CONTEXT*/))
				{
					Local_96.f_156 = 0;
					func_391(1);
					func_383(1);
					HUD::CLEAR_HELP(true);
				}
			}
		}
		else if (__LIB_0__::func_1("DRONE_TRIG" /* GXT: Press ~INPUT_CONTEXT~ to launch a drone. */))
		{
			HUD::CLEAR_HELP(true);
		}
		if (__LIB_32__::func_314() || func_41())
		{
			if (__LIB_0__::func_1("DRONE_TRIG" /* GXT: Press ~INPUT_CONTEXT~ to launch a drone. */))
			{
				HUD::CLEAR_HELP(true);
			}
		}
	}
	else if (__LIB_0__::func_1("DRONE_TRIG" /* GXT: Press ~INPUT_CONTEXT~ to launch a drone. */))
	{
		HUD::CLEAR_HELP(true);
	}
}

void func_458(bool bParam0)//Position - 0xFEF6
{
	if (bParam0)
	{
		if (!BitTest(Global_1958711.f_2, 1))
		{
			Global_1958711.f_2 = 0;
			MISC::SET_BIT(&(Global_1958711.f_2), 1);
		}
	}
	else if (BitTest(Global_1958711.f_2, 1))
	{
		MISC::CLEAR_BIT(&(Global_1958711.f_2), 1);
	}
}

void func_459()//Position - 0xFF3A
{
	char* sVar0;
	if (Local_96.f_45 == -1)
	{
		return;
	}
	if (!func_461(Local_96.f_45) && !func_460(Local_96.f_45))
	{
		return;
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_94[Local_96.f_45 /*3*/].f_2))
	{
		sVar0 = "scr_xs_props";
		STREAMING::REQUEST_NAMED_PTFX_ASSET(sVar0);
		if (STREAMING::HAS_NAMED_PTFX_ASSET_LOADED(sVar0))
		{
			if (!GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(Local_96.f_174[Local_96.f_45]))
			{
				GRAPHICS::USE_PARTICLE_FX_ASSET(sVar0);
				if (func_461(Local_96.f_45))
				{
					Local_96.f_174[Local_96.f_45] = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_xs_guided_missile_trail", NETWORK::NET_TO_OBJ(Local_94[Local_96.f_45 /*3*/].f_2), 0f, 0f, 0f, 0f, 0f, 0f, 1f, false, false, false);
				}
				else
				{
					Local_96.f_174[Local_96.f_45] = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_xs_guided_missile_trail", NETWORK::NET_TO_OBJ(Local_94[Local_96.f_45 /*3*/].f_2), 0f, 0.25f, 0f, 0f, 0f, 0f, 3f, false, false, false);
				}
			}
		}
	}
	else if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(Local_96.f_174[Local_96.f_45]))
	{
		GRAPHICS::STOP_PARTICLE_FX_LOOPED(Local_96.f_174[Local_96.f_45], false);
	}
}

int func_460(int iParam0)//Position - 0x10036
{
	if (iParam0 != __LIB_0__::func_162())
	{
		if (Local_94[iParam0 /*3*/].f_1 == 8)
		{
			return 1;
		}
	}
	return 0;
}

int func_461(int iParam0)//Position - 0x10059
{
	if (iParam0 != __LIB_0__::func_162())
	{
		if (Local_94[iParam0 /*3*/].f_1 == 4)
		{
			return 1;
		}
	}
	return 0;
}

void func_462()//Position - 0x1007B
{
	if (!func_479(6) && !__LIB_3__::func_925())
	{
		return;
	}
	if (Local_96.f_45 != -1)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_94[Local_96.f_45 /*3*/].f_2) && __LIB_0__::func_121(NETWORK::NET_TO_OBJ(Local_94[Local_96.f_45 /*3*/].f_2)))
		{
			if (func_464(Local_96.f_45))
			{
				Local_96.f_157 = "DLC_Arena_Drone_Sounds";
			}
			else if (func_463(Local_96.f_45))
			{
				Local_96.f_157 = "DLC_Arena_Battle_Drone_Sounds";
			}
			else if (func_461(Local_96.f_45))
			{
				Local_96.f_157 = "DLC_Arena_Piloted_Missile_Sounds";
			}
			else if (func_460(Local_96.f_45))
			{
				Local_96.f_157 = "DLC_H4_Piloted_Missile_Sounds";
			}
			else
			{
				Local_96.f_157 = "DLC_BTL_Drone_Sounds";
			}
			if (Local_96.f_46[Local_96.f_45] == -1)
			{
				Local_96.f_46[Local_96.f_45] = AUDIO::GET_SOUND_ID();
				AUDIO::PLAY_SOUND_FROM_ENTITY(Local_96.f_46[Local_96.f_45], "Flight_Loop", NETWORK::NET_TO_OBJ(Local_94[Local_96.f_45 /*3*/].f_2), Local_96.f_157, false, 0);
				AUDIO::SET_VARIABLE_ON_SOUND(Local_96.f_46[Local_96.f_45], "DroneRotationalSpeed", 1f);
			}
			else
			{
				AUDIO::SET_VARIABLE_ON_SOUND(Local_96.f_46[Local_96.f_45], "DroneRotationalSpeed", 1f);
			}
		}
		else if (Local_96.f_46[Local_96.f_45] != -1)
		{
			AUDIO::STOP_SOUND(Local_96.f_46[Local_96.f_45]);
			AUDIO::RELEASE_SOUND_ID(Local_96.f_46[Local_96.f_45]);
			Local_96.f_46[Local_96.f_45] = -1;
		}
	}
}

int func_463(int iParam0)//Position - 0x101CC
{
	if (iParam0 != __LIB_0__::func_162())
	{
		if (Local_94[iParam0 /*3*/].f_1 == 2)
		{
			return 1;
		}
	}
	return 0;
}

int func_464(int iParam0)//Position - 0x101EE
{
	if (iParam0 != __LIB_0__::func_162())
	{
		if (Local_94[iParam0 /*3*/].f_1 == 3)
		{
			return 1;
		}
	}
	return 0;
}

void func_466()//Position - 0x10221
{
	int iVar0;
	int iVar1;
	char* sVar2;
	char* sVar3;
	int iVar4;
	if (Local_96.f_45 == -1)
	{
		return;
	}
	iVar0 = Local_96.f_45;
	if (!__LIB_0__::func_156(iVar0, 1, 1))
	{
		return;
	}
	if (!func_479(6) && !__LIB_3__::func_925())
	{
		return;
	}
	if (BitTest(Local_96.f_117, Local_96.f_45))
	{
		iVar1 = __LIB_10__::func_570(Global_2689235[Local_96.f_45 /*453*/].f_318.f_9);
		if (!__LIB_0__::func_121(iVar1))
		{
			return;
		}
		sVar2 = "scr_ih_sub";
		STREAMING::REQUEST_NAMED_PTFX_ASSET(sVar2);
		if (STREAMING::HAS_NAMED_PTFX_ASSET_LOADED(sVar2))
		{
			if (!GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(Local_96.f_207[iVar0]))
			{
				GRAPHICS::USE_PARTICLE_FX_ASSET(sVar2);
				sVar3 = func_375(iVar0);
				iVar4 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar1, sVar3);
				Local_96.f_207[iVar0] = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY_BONE("scr_ih_sub_missile_launch", iVar1, func_374(iVar0), 0f, 0f, 0f, iVar4, 5f, false, false, false);
			}
			else if (!__LIB_0__::func_864(&(Local_96.f_281[iVar0 /*2*/])))
			{
				__LIB_0__::func_795(&(Local_96.f_281[iVar0 /*2*/]), 0, 0);
				GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(Local_96.f_207[iVar0], "flame", 0.15f, false);
			}
			if (__LIB_0__::func_864(&(Local_96.f_281[iVar0 /*2*/])))
			{
				if (__LIB_0__::func_937(&(Local_96.f_281[iVar0 /*2*/]), 3000, 0))
				{
					if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(Local_96.f_207[iVar0]))
					{
						GRAPHICS::STOP_PARTICLE_FX_LOOPED(Local_96.f_207[iVar0], false);
					}
					__LIB_0__::func_794(&(Local_96.f_281[iVar0 /*2*/]));
					MISC::CLEAR_BIT(&(Local_96.f_117), Local_96.f_45);
				}
				else if (__LIB_0__::func_937(&(Local_96.f_281[iVar0 /*2*/]), 2000, 0))
				{
					GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(Local_96.f_207[iVar0], "flame", 0f, false);
				}
			}
		}
	}
}

void func_468()//Position - 0x103D3
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = 0;
	while (iVar0 < SCRIPT::GET_NUMBER_OF_EVENTS(1))
	{
		iVar1 = SCRIPT::GET_EVENT_AT_INDEX(1, iVar0);
		switch (iVar1)
		{
			case 186:
				if (!func_479(6))
				{
					func_470(iVar0);
				}
				break;
			case 174:
				SCRIPT::GET_EVENT_DATA(1, iVar0, &iVar2, 2);
				switch (iVar2)
				{
					case -1007374530:
						if (Global_1663509.f_839)
						{
							return;
						}
						func_469(iVar0);
						break;
				}
				break;
		}
		iVar0++;
	}
}

void func_469(int iParam0)//Position - 0x10450
{
	struct<3> Var0;
	if (!func_479(6) && !__LIB_3__::func_925())
	{
		return;
	}
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 3))
	{
		if (Var0.f_1 != __LIB_0__::func_162())
		{
			Local_96.f_82[Var0.f_1] = Var0.f_2;
			MISC::SET_BIT(&(Local_96.f_117), Var0.f_1);
		}
	}
}

void func_470(int iParam0)//Position - 0x104A3
{
	struct<2> Var0;
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_96.f_159))
	{
		if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 13))
		{
			if (ENTITY::DOES_ENTITY_EXIST(Var0.f_0) && NETWORK::NET_TO_ENT(Local_96.f_159) == Var0.f_0)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Var0.f_1))
				{
					if (ENTITY::IS_ENTITY_A_PED(Var0.f_1))
					{
						if (PED::IS_PED_A_PLAYER(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0.f_1)) && PLAYER::PLAYER_PED_ID() != ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0.f_1))
						{
							Local_96.f_26 = 2;
						}
					}
				}
			}
		}
	}
}

void func_471()//Position - 0x10519
{
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_96.f_159))
	{
		if (!ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_VEH(Local_96.f_159), false))
		{
			Local_96.f_150 = { ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(Local_96.f_159), true) };
			Local_96.f_124 = ENTITY::GET_ENTITY_HEADING(NETWORK::NET_TO_VEH(Local_96.f_159));
			if (!__LIB_0__::func_864(&(Local_96.f_261)))
			{
				__LIB_0__::func_795(&(Local_96.f_261), 0, 0);
			}
			else if (__LIB_0__::func_937(&(Local_96.f_261), 1000, 0))
			{
				if (!__LIB_0__::func_78(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_421, Local_96.f_150, 0))
				{
					Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_421 = { Local_96.f_150 };
				}
				if (Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_424 != ENTITY::GET_ENTITY_HEADING(NETWORK::NET_TO_VEH(Local_96.f_159)))
				{
					Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_424 = ENTITY::GET_ENTITY_HEADING(NETWORK::NET_TO_VEH(Local_96.f_159));
				}
				__LIB_0__::func_794(&(Local_96.f_261));
			}
		}
	}
	if (__LIB_0__::func_121(Local_96.f_163))
	{
		if (ENTITY::IS_ENTITY_VISIBLE(Local_96.f_163))
		{
			ENTITY::SET_ENTITY_VISIBLE(Local_96.f_163, false, false);
		}
	}
	if (__LIB_0__::func_121(Local_96.f_161))
	{
		if (ENTITY::IS_ENTITY_VISIBLE(Local_96.f_161))
		{
			ENTITY::SET_ENTITY_VISIBLE(Local_96.f_161, false, false);
		}
	}
}

void func_472()//Position - 0x10641
{
	if (func_479(4))
	{
		if ((((func_138() || func_24()) || func_38()) || (func_30() && !__LIB_12__::func_637())) || func_16())
		{
			if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
			{
				__LIB_1__::func_376(PLAYER::PLAYER_ID(), 1, 0, 0);
			}
		}
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 37 /*INPUT_SELECT_WEAPON*/, false);
		if (func_16())
		{
			__LIB_0__::func_189();
		}
		if (!func_35())
		{
			__LIB_7__::func_282();
			PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 19 /*INPUT_CHARACTER_WHEEL*/, true);
			PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 166 /*INPUT_SELECT_CHARACTER_MICHAEL*/, true);
			PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 167 /*INPUT_SELECT_CHARACTER_FRANKLIN*/, true);
			PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 168 /*INPUT_SELECT_CHARACTER_TREVOR*/, true);
			PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 169 /*INPUT_SELECT_CHARACTER_MULTIPLAYER*/, true);
			PAD::ENABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 218 /*INPUT_SCRIPT_LEFT_AXIS_X*/, true);
			PAD::ENABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 219 /*INPUT_SCRIPT_LEFT_AXIS_Y*/, true);
			PAD::ENABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 220 /*INPUT_SCRIPT_RIGHT_AXIS_X*/, true);
			PAD::ENABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 221 /*INPUT_SCRIPT_RIGHT_AXIS_Y*/, true);
			PAD::ENABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 205 /*INPUT_FRONTEND_LB*/, true);
			PAD::ENABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 206 /*INPUT_FRONTEND_RB*/, true);
			PAD::ENABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 207 /*INPUT_FRONTEND_LT*/, true);
			PAD::ENABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 208 /*INPUT_FRONTEND_RT*/, true);
			PAD::ENABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 209 /*INPUT_FRONTEND_LS*/, true);
			PAD::ENABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 210 /*INPUT_FRONTEND_RS*/, true);
			PAD::ENABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/, true);
			PAD::ENABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 51 /*INPUT_CONTEXT*/, true);
			PAD::ENABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 190 /*INPUT_FRONTEND_RIGHT*/, true);
			PAD::ENABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 189 /*INPUT_FRONTEND_LEFT*/, true);
			PAD::ENABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 188 /*INPUT_FRONTEND_UP*/, true);
			PAD::ENABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 187 /*INPUT_FRONTEND_DOWN*/, true);
			PAD::ENABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/, true);
			PAD::ENABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 199 /*INPUT_FRONTEND_PAUSE*/, true);
			PAD::ENABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 200 /*INPUT_FRONTEND_PAUSE_ALTERNATE*/, true);
			if (func_16())
			{
				PAD::ENABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 20 /*INPUT_MULTIPLAYER_INFO*/, true);
			}
			if (PAD::IS_USING_KEYBOARD_AND_MOUSE(0 /*PLAYER_CONTROL*/))
			{
				PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 238 /*INPUT_CURSOR_CANCEL*/, true);
				PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 237 /*INPUT_CURSOR_ACCEPT*/, true);
				PAD::ENABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 235 /*INPUT_SCRIPT_PAD_RIGHT*/, true);
				PAD::ENABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 234 /*INPUT_SCRIPT_PAD_LEFT*/, true);
				PAD::ENABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 1 /*INPUT_LOOK_LR*/, true);
				PAD::ENABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 174 /*INPUT_CELLPHONE_LEFT*/, true);
				PAD::ENABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 175 /*INPUT_CELLPHONE_RIGHT*/, true);
				PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 174 /*INPUT_CELLPHONE_LEFT*/, true);
				PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 175 /*INPUT_CELLPHONE_RIGHT*/, true);
				PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 245 /*INPUT_MP_TEXT_CHAT_ALL*/, true);
				PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 246 /*INPUT_MP_TEXT_CHAT_TEAM*/, true);
				PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 247 /*INPUT_MP_TEXT_CHAT_FRIENDS*/, true);
				PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 248 /*INPUT_MP_TEXT_CHAT_CREW*/, true);
			}
			if (HUD::IS_PAUSE_MENU_ACTIVE())
			{
				PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/, true);
				PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/, true);
				PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 188 /*INPUT_FRONTEND_UP*/, true);
				PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 187 /*INPUT_FRONTEND_DOWN*/, true);
				PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 189 /*INPUT_FRONTEND_LEFT*/, true);
				PAD::ENABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 195 /*INPUT_FRONTEND_AXIS_X*/, true);
				PAD::ENABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 196 /*INPUT_FRONTEND_AXIS_Y*/, true);
				PAD::ENABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 198 /*INPUT_FRONTEND_RIGHT_AXIS_Y*/, true);
				PAD::ENABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 197 /*INPUT_FRONTEND_RIGHT_AXIS_X*/, true);
				PAD::ENABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 217 /*INPUT_FRONTEND_SELECT*/, true);
			}
		}
	}
}

void func_476()//Position - 0x10893
{
	if (BitTest(Local_96.f_5, 28))
	{
		if (!__LIB_0__::func_864(&(Local_96.f_263)))
		{
			__LIB_0__::func_795(&(Local_96.f_263), 0, 0);
		}
		else if (__LIB_0__::func_937(&(Local_96.f_263), 5000, 0))
		{
			MISC::CLEAR_BIT(&(Local_96.f_5), 28);
			__LIB_0__::func_794(&(Local_96.f_263));
		}
	}
}

void func_477()//Position - 0x108E3
{
	int iVar0;
	if (BitTest(Local_96.f_5, 27))
	{
		if (Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_9 != __LIB_0__::func_162())
		{
			iVar0 = Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_9;
		}
		else if (Global_1853193 != __LIB_0__::func_162())
		{
			iVar0 = Global_1853193;
		}
		else if (__LIB_1__::func_30(PLAYER::PLAYER_ID(), 0))
		{
			if (__LIB_0__::func_797() != __LIB_0__::func_162())
			{
				iVar0 = __LIB_0__::func_797();
			}
		}
		if (iVar0 != __LIB_0__::func_162())
		{
			if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
			{
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					func_178(iVar0, 0, 1, 0);
					MISC::CLEAR_BIT(&(Local_96.f_5), 27);
				}
			}
		}
	}
}

void func_478()//Position - 0x10987
{
	struct<3> Var0;
	if (func_138())
	{
		if (func_479(1))
		{
			if (__LIB_0__::func_121(__LIB_4__::func_281()))
			{
				Var0 = { ENTITY::GET_ENTITY_COORDS(__LIB_4__::func_281(), true) };
				PED::SET_POP_CONTROL_SPHERE_THIS_FRAME(Var0, 200f, 200f);
				PED::SET_SCENARIO_PEDS_SPAWN_IN_SPHERE_AREA(Local_96.f_150, 60f, 30);
			}
		}
	}
	if (func_479(1) || func_479(4))
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_96.f_159))
		{
			if (CAM::DOES_CAM_EXIST(Local_96.f_169) && CAM::IS_CAM_RENDERING(Local_96.f_169))
			{
				if (func_479(4))
				{
					if (!__LIB_0__::func_86(Local_96.f_150))
					{
						PED::SET_POP_CONTROL_SPHERE_THIS_FRAME(Local_96.f_150, 60f, 200f);
						INTERIOR::ACTIVATE_INTERIOR_GROUPS_USING_CAMERA();
						STREAMING::SET_FOCUS_POS_AND_VEL(Local_96.f_150, ENTITY::GET_ENTITY_VELOCITY(NETWORK::NET_TO_OBJ(Local_96.f_159)));
						if ((MISC::GET_FRAME_COUNT() % 120) == 0)
						{
							PED::SET_SCENARIO_PEDS_SPAWN_IN_SPHERE_AREA(Local_96.f_150, 60f, 30);
						}
					}
				}
			}
		}
	}
}

bool func_479(int iParam0)//Position - 0x10A6F
{
	return Local_96.f_241 == iParam0;
}

int func_480()//Position - 0x10A7E
{
	if (__LIB_5__::func_98())
	{
		return 1;
	}
	if (!__LIB_0__::func_893())
	{
		return 1;
	}
	if (PLAYER::PLAYER_ID() != __LIB_0__::func_162())
	{
		if (!func_484())
		{
			if (__LIB_0__::func_457(PLAYER::PLAYER_ID()) && !__LIB_1__::func_11())
			{
				return 1;
			}
		}
	}
	if (__LIB_1__::func_548(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	if (__LIB_1__::func_510(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	if (func_484())
	{
		if (func_483())
		{
			return 1;
		}
		if (__LIB_1__::func_511(PLAYER::PLAYER_ID(), 1, 1))
		{
			return 1;
		}
		if (__LIB_6__::func_196())
		{
			return 1;
		}
		if (!func_482() && !func_481())
		{
			if (__LIB_0__::func_937(&(Local_96.f_279), 10000, 0))
			{
				return 1;
			}
		}
		else
		{
			__LIB_0__::func_794(&(Local_96.f_279));
		}
	}
	return 0;
}

int func_481()//Position - 0x10B48
{
	if (Global_1958711.f_22 != __LIB_0__::func_162())
	{
		if (Global_2689235[Global_1958711.f_22 /*453*/].f_318.f_9 != __LIB_0__::func_162())
		{
			if (__LIB_0__::func_121(Global_1963860[Global_2689235[Global_1958711.f_22 /*453*/].f_318.f_9]))
			{
				if (__LIB_0__::func_156(PLAYER::PLAYER_ID(), 1, 1))
				{
					if (SYSTEM::VDIST2(__LIB_0__::func_85(PLAYER::PLAYER_ID()), ENTITY::GET_ENTITY_COORDS(Global_1963860[Global_2689235[Global_1958711.f_22 /*453*/].f_318.f_9], true)) < 490000f)
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_482()//Position - 0x10BD9
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			if (BitTest(Local_94[iVar0 /*3*/], 0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_483()//Position - 0x10C13
{
	return BitTest(Global_1958711, 22);
}

bool func_484()//Position - 0x10C22
{
	return BitTest(Global_1958711.f_2, 9);
}

void func_495(bool bParam0)//Position - 0x10D75
{
	if (!func_484())
	{
		func_502(bParam0);
	}
	else
	{
		func_496();
	}
}

void func_496()//Position - 0x10D92
{
	Global_1958711.f_22 = __LIB_0__::func_162();
	__LIB_0__::func_794(&(Local_96.f_279));
	__LIB_27__::func_384(0);
	__LIB_27__::func_383(0);
	__LIB_27__::func_382(0);
	func_498(0);
	__LIB_0__::func_202();
}

void func_498(bool bParam0)//Position - 0x10DD1
{
	if (bParam0)
	{
		if (!BitTest(Global_1958711.f_2, 9))
		{
			Global_1958711.f_2 = 0;
			MISC::SET_BIT(&(Global_1958711.f_2), 9);
		}
	}
	else if (BitTest(Global_1958711.f_2, 9))
	{
		MISC::CLEAR_BIT(&(Global_1958711.f_2), 9);
	}
}

void func_502(bool bParam0)//Position - 0x10EF8
{
	int iVar0;
	struct<8> Var1;
	var uVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	struct<8> Var6;
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_96.f_159))
	{
		NETWORK::SET_NETWORK_ID_CAN_MIGRATE(Local_96.f_159, true);
		if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_96.f_159))
		{
			if (!BitTest(Local_96.f_6, 2))
			{
				if (func_83())
				{
					if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
					{
						FIRE::ADD_OWNED_EXPLOSION(PLAYER::PLAYER_PED_ID(), func_338(), func_337(), func_336(), true, false, 1f);
					}
					else
					{
						FIRE::ADD_EXPLOSION(func_338(), func_337(), func_336(), true, false, 1f, false);
					}
					PAD::SET_CONTROL_SHAKE(0 /*PLAYER_CONTROL*/, 300, SYSTEM::ROUND((200f * Local_96.f_131)));
					MISC::SET_BIT(&(Local_96.f_6), 2);
				}
			}
			STREAMING::CLEAR_FOCUS();
			iVar0 = NETWORK::NET_TO_OBJ(Local_96.f_159);
			NETWORK::NETWORK_FADE_OUT_ENTITY(iVar0, false, true);
			OBJECT::DELETE_OBJECT(&iVar0);
		}
		else
		{
			NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_96.f_159);
			return;
		}
	}
	if (func_30() && !__LIB_12__::func_637())
	{
		Var1 = -1;
		Var1.f_6 = 1073741824;
		Var1.f_7 = -1073741824;
		Var1.f_3 = 0;
		Var1.f_4 = 0;
		__LIB_5__::func_39(&Var1, 11);
	}
	if (__LIB_0__::func_1("DRONE_TRIG" /* GXT: Press ~INPUT_CONTEXT~ to launch a drone. */))
	{
		HUD::CLEAR_HELP(true);
	}
	if (__LIB_0__::func_121(Local_96.f_161))
	{
		uVar2 = Local_96.f_161;
		PED::DELETE_PED(&uVar2);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_96.f_162))
	{
		OBJECT::DELETE_OBJECT(&(Local_96.f_162));
	}
	if (HUD::DOES_BLIP_EXIST(Local_96.f_171))
	{
		HUD::REMOVE_BLIP(&(Local_96.f_171));
	}
	if (HUD::DOES_BLIP_EXIST(Local_96.f_172))
	{
		HUD::REMOVE_BLIP(&(Local_96.f_172));
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_96.f_163))
	{
		VEHICLE::DELETE_VEHICLE(&(Local_96.f_163));
	}
	HUD::THEFEED_SHOW();
	HUD::UNLOCK_MINIMAP_ANGLE();
	HUD::UNLOCK_MINIMAP_POSITION();
	HUD::SET_RADAR_ZOOM_PRECISE(0f);
	if (__LIB_12__::func_393())
	{
		__LIB_10__::func_199(0);
	}
	func_522();
	__LIB_1__::func_895(1, -1);
	func_521();
	if (__LIB_12__::func_637())
	{
		func_335(0);
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_96.f_160))
	{
		iVar3 = NETWORK::NET_TO_OBJ(Local_96.f_160);
		OBJECT::DELETE_OBJECT(&iVar3);
	}
	if (!bParam0)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(Local_96.f_158))
		{
			STREAMING::REMOVE_ANIM_DICT(Local_96.f_158);
		}
		__LIB_29__::func_826(0);
	}
	__LIB_11__::func_966(0);
	if (func_519() && (!__LIB_0__::func_457(PLAYER::PLAYER_ID()) || __LIB_1__::func_11()))
	{
		__LIB_1__::func_376(PLAYER::PLAYER_ID(), 1, 0, 0);
		ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
	}
	Local_96.f_120 = 0f;
	Local_96.f_121 = 0f;
	Local_96.f_12 = 0;
	Local_96.f_14 = 0;
	Local_96.f_10 = 0;
	Local_96.f_16 = 0;
	__LIB_0__::func_794(&(Local_96.f_245));
	__LIB_0__::func_794(&(Local_96.f_247));
	if (!Local_96.f_156)
	{
		__LIB_0__::func_794(&(Local_96.f_249));
	}
	__LIB_0__::func_794(&(Local_96.f_253));
	__LIB_0__::func_794(&(Local_96.f_251));
	__LIB_0__::func_794(&(Local_96.f_255));
	__LIB_0__::func_794(&(Local_96.f_259));
	__LIB_0__::func_794(&(Local_96.f_265));
	__LIB_0__::func_794(&(Local_96.f_263));
	__LIB_0__::func_794(&(Local_96.f_261));
	__LIB_0__::func_794(&(Local_96.f_267));
	__LIB_0__::func_794(&(Local_96.f_269));
	__LIB_0__::func_794(&(Local_96.f_271));
	__LIB_0__::func_794(&(Local_96.f_275));
	__LIB_0__::func_794(&(Local_96.f_277));
	__LIB_0__::func_794(&(Local_96.f_257));
	__LIB_0__::func_794(&(Local_96.f_346));
	if (PLAYER::PLAYER_ID() != __LIB_0__::func_162())
	{
		__LIB_0__::func_794(&(Local_96.f_281[PLAYER::PLAYER_ID() /*2*/]));
	}
	Local_96.f_28 = 0;
	Local_96.f_5 = 0;
	Local_96.f_6 = 0;
	Global_1958711.f_4 = -1;
	__LIB_32__::func_312(-1f);
	func_445(0f);
	__LIB_2__::func_57(0);
	__LIB_36__::func_442(0);
	__LIB_5__::func_167(0);
	__LIB_36__::func_446(0);
	__LIB_21__::func_651(0);
	__LIB_36__::func_447(0);
	__LIB_36__::func_458(0);
	func_515(0);
	func_514(0);
	func_513(0);
	__LIB_0__::func_366(1);
	__LIB_33__::func_207(0);
	__LIB_33__::func_206(0);
	func_296(0);
	func_451(0);
	__LIB_22__::func_190(0f, 0f, 0f, 0f, 0f, 0f);
	__LIB_36__::func_443();
	Global_1958711.f_24 = -1;
	MISC::CLEAR_BIT(&Global_2787913, 0);
	MISC::CLEAR_BIT(&Global_1965532, 0);
	func_383(0);
	if (!func_511(0))
	{
		func_288();
	}
	if (__LIB_0__::func_93())
	{
		func_108("SET_WARNING_IS_VISIBLE", 0);
		if (func_138() || func_16())
		{
			if (Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_9 != __LIB_0__::func_162() && NETWORK::NETWORK_IS_PLAYER_ACTIVE(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_9))
			{
				iVar4 = Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_9;
			}
			else if ((func_138() && Global_1853193 != __LIB_0__::func_162()) && NETWORK::NETWORK_IS_PLAYER_ACTIVE(Global_1853193))
			{
				iVar4 = Global_1853193;
			}
			else if ((func_16() && Global_1853194 != __LIB_0__::func_162()) && NETWORK::NETWORK_IS_PLAYER_ACTIVE(Global_1853194))
			{
				iVar4 = Global_1853194;
			}
			else if (__LIB_1__::func_30(PLAYER::PLAYER_ID(), 0))
			{
				if (__LIB_0__::func_797() != __LIB_0__::func_162() && NETWORK::NETWORK_IS_PLAYER_ACTIVE(__LIB_0__::func_797()))
				{
					iVar4 = __LIB_0__::func_797();
				}
			}
			if (iVar4 != __LIB_0__::func_162())
			{
				if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar4) && NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (func_138())
					{
						func_178(iVar4, 0, 1, 0);
					}
					else if (func_16())
					{
						func_178(iVar4, 0, 8, Global_1581359);
					}
					MISC::SET_BIT(&(Local_96.f_5), 28);
				}
				else
				{
					MISC::SET_BIT(&(Local_96.f_5), 27);
				}
			}
			else
			{
				MISC::SET_BIT(&(Local_96.f_5), 27);
			}
		}
		else if (func_30() || func_160())
		{
			__LIB_0__::func_794(&Global_1958657);
			__LIB_12__::func_777(300000);
			__LIB_12__::func_778(1);
			MISC::SET_BIT(&(Local_96.f_5), 28);
		}
		func_390(0);
		func_389(0);
		MISC::CLEAR_BIT(&(Local_94[PLAYER::PLAYER_ID() /*3*/]), 0);
		iVar5 = MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Local_96.f_173));
		if (func_30() || func_160())
		{
			Var6.f_7 = Global_786547;
			Var6.f_1 = Global_786547.f_1;
			if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
			{
				Var6.f_0 = Global_4718592.f_116524;
			}
			else
			{
				Var6.f_0 = __LIB_2__::func_839(PLAYER::PLAYER_ID());
			}
			Var6.f_6 = 1;
			Var6.f_4 = Local_96.f_27;
			Var6.f_5 = Local_96.f_29;
			Var6.f_3 = iVar5;
			Var6.f_2 = Local_96.f_26;
			STATS::PLAYSTATS_HEIST3_DRONE(&Var6);
		}
		else
		{
			STATS::PLAYSTATS_DRONE_USAGE(iVar5, Local_96.f_26, Local_96.f_27);
		}
		if (func_16())
		{
			func_505(2, __LIB_12__::func_292());
		}
	}
	func_504();
	func_391(0);
	__LIB_21__::func_277(0);
	__LIB_25__::func_419(0);
	GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&(Local_96.f_170));
	if (func_180(1) != 0)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_180(1));
	}
	if (func_180(0) != 0)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_180(0));
	}
	func_384(0);
	__LIB_1__::func_895(1, -1);
	Local_96.f_26 = 0;
	Local_96.f_27 = 0;
	Local_96.f_29 = 0;
	EVENT::REMOVE_SHOCKING_EVENT(Local_96.f_28);
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(Local_96.f_174[PLAYER::PLAYER_ID()]))
	{
		GRAPHICS::STOP_PARTICLE_FX_LOOPED(Local_96.f_174[PLAYER::PLAYER_ID()], false);
	}
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(Local_96.f_207[PLAYER::PLAYER_ID()]))
	{
		GRAPHICS::STOP_PARTICLE_FX_LOOPED(Local_96.f_207[PLAYER::PLAYER_ID()], false);
	}
	if (!bParam0)
	{
		if (!func_164(PLAYER::PLAYER_ID()))
		{
			__LIB_32__::func_363(0f, 0f, 0f, 0f);
		}
		Global_1958711.f_2 = 0;
		__LIB_0__::func_202();
	}
	else
	{
		func_444(0, 1);
	}
}

void func_504()//Position - 0x115C4
{
	int iVar0;
	if (!AUDIO::HAS_SOUND_FINISHED(Local_96.f_41))
	{
		AUDIO::STOP_SOUND(Local_96.f_41);
		AUDIO::RELEASE_SOUND_ID(Local_96.f_41);
		Local_96.f_41 = -1;
	}
	if (!AUDIO::HAS_SOUND_FINISHED(Local_96.f_30))
	{
		AUDIO::STOP_SOUND(Local_96.f_30);
		AUDIO::RELEASE_SOUND_ID(Local_96.f_30);
		Local_96.f_30 = -1;
	}
	if (!AUDIO::HAS_SOUND_FINISHED(Local_96.f_31))
	{
		AUDIO::STOP_SOUND(Local_96.f_31);
		AUDIO::RELEASE_SOUND_ID(Local_96.f_31);
		Local_96.f_31 = -1;
	}
	if (!AUDIO::HAS_SOUND_FINISHED(Local_96.f_32))
	{
		AUDIO::STOP_SOUND(Local_96.f_32);
		AUDIO::RELEASE_SOUND_ID(Local_96.f_32);
		Local_96.f_32 = -1;
	}
	if (!AUDIO::HAS_SOUND_FINISHED(Local_96.f_33))
	{
		AUDIO::STOP_SOUND(Local_96.f_33);
		AUDIO::RELEASE_SOUND_ID(Local_96.f_33);
		Local_96.f_33 = -1;
	}
	if (!AUDIO::HAS_SOUND_FINISHED(Local_96.f_34))
	{
		AUDIO::STOP_SOUND(Local_96.f_34);
		AUDIO::RELEASE_SOUND_ID(Local_96.f_34);
		Local_96.f_34 = -1;
	}
	if (!AUDIO::HAS_SOUND_FINISHED(Local_96.f_40))
	{
		AUDIO::STOP_SOUND(Local_96.f_40);
		AUDIO::RELEASE_SOUND_ID(Local_96.f_40);
		Local_96.f_40 = -1;
	}
	if (!AUDIO::HAS_SOUND_FINISHED(Local_96.f_39))
	{
		AUDIO::STOP_SOUND(Local_96.f_39);
		AUDIO::RELEASE_SOUND_ID(Local_96.f_39);
		Local_96.f_39 = -1;
	}
	if (!AUDIO::HAS_SOUND_FINISHED(Local_96.f_38))
	{
		AUDIO::STOP_SOUND(Local_96.f_38);
		AUDIO::RELEASE_SOUND_ID(Local_96.f_38);
		Local_96.f_38 = -1;
	}
	if (!AUDIO::HAS_SOUND_FINISHED(Local_96.f_37))
	{
		AUDIO::STOP_SOUND(Local_96.f_37);
		AUDIO::RELEASE_SOUND_ID(Local_96.f_37);
		Local_96.f_37 = -1;
	}
	if (!AUDIO::HAS_SOUND_FINISHED(Local_96.f_36))
	{
		AUDIO::STOP_SOUND(Local_96.f_36);
		AUDIO::RELEASE_SOUND_ID(Local_96.f_36);
		Local_96.f_36 = -1;
	}
	if (!AUDIO::HAS_SOUND_FINISHED(Local_96.f_35))
	{
		AUDIO::STOP_SOUND(Local_96.f_35);
		AUDIO::RELEASE_SOUND_ID(Local_96.f_35);
		Local_96.f_35 = -1;
	}
	if (!AUDIO::HAS_SOUND_FINISHED(Local_96.f_42))
	{
		AUDIO::STOP_SOUND(Local_96.f_42);
		AUDIO::RELEASE_SOUND_ID(Local_96.f_42);
		Local_96.f_42 = -1;
	}
	if (!AUDIO::HAS_SOUND_FINISHED(Local_96.f_43))
	{
		AUDIO::STOP_SOUND(Local_96.f_43);
		AUDIO::RELEASE_SOUND_ID(Local_96.f_43);
		Local_96.f_43 = -1;
	}
	if (!AUDIO::HAS_SOUND_FINISHED(Local_96.f_81))
	{
		AUDIO::STOP_SOUND(Local_96.f_81);
		AUDIO::RELEASE_SOUND_ID(Local_96.f_81);
		Local_96.f_81 = -1;
	}
	if (!AUDIO::HAS_SOUND_FINISHED(Local_96.f_115))
	{
		AUDIO::STOP_SOUND(Local_96.f_115);
		AUDIO::RELEASE_SOUND_ID(Local_96.f_115);
		Local_96.f_115 = -1;
	}
	if (func_484())
	{
		iVar0 = 0;
		while (iVar0 <= 31)
		{
			if (Local_96.f_46[iVar0] != -1)
			{
				AUDIO::STOP_SOUND(Local_96.f_46[iVar0]);
				AUDIO::RELEASE_SOUND_ID(Local_96.f_46[iVar0]);
				Local_96.f_46[iVar0] = -1;
			}
			iVar0++;
		}
	}
	func_157();
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("DLC_BTL_Hacker_Drone_HUD_Scene"))
	{
		AUDIO::STOP_AUDIO_SCENE("DLC_BTL_Hacker_Drone_HUD_Scene");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("dlc_aw_arena_piloted_missile_scene"))
	{
		AUDIO::STOP_AUDIO_SCENE("dlc_aw_arena_piloted_missile_scene");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("DLC_Arena_Battle_Drone_HUD_Scene"))
	{
		AUDIO::STOP_AUDIO_SCENE("DLC_Arena_Battle_Drone_HUD_Scene");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("DLC_Arena_Spectator_Drone_HUD_Scene"))
	{
		AUDIO::STOP_AUDIO_SCENE("DLC_Arena_Spectator_Drone_HUD_Scene");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("dlc_hei4_submarine_guided_missile_Scene"))
	{
		AUDIO::STOP_AUDIO_SCENE("dlc_hei4_submarine_guided_missile_Scene");
	}
}

void func_505(int iParam0, int iParam1)//Position - 0x11886
{
	if (Global_2815059.f_337 > 0 || Global_2815059.f_337.f_1 > 0)
	{
		STATS::PLAYSTATS_SUB_WEAP(iParam0, iParam1, Global_2815059.f_337, Global_2815059.f_337.f_1);
	}
	__LIB_12__::func_291();
}

bool func_511(int iParam0)//Position - 0x119A0
{
	return Local_96.f_242 == iParam0;
}

void func_513(bool bParam0)//Position - 0x119C7
{
	if (bParam0)
	{
		if (__LIB_0__::func_93())
		{
			if (!BitTest(Global_1958711, 16))
			{
				MISC::SET_BIT(&Global_1958711, 16);
			}
		}
	}
	else if (BitTest(Global_1958711, 16))
	{
		MISC::CLEAR_BIT(&Global_1958711, 16);
	}
}

void func_514(bool bParam0)//Position - 0x11A0A
{
	if (bParam0)
	{
		if (!__LIB_5__::func_98())
		{
			MISC::SET_BIT(&Global_1958711, 6);
		}
	}
	else if (__LIB_5__::func_98())
	{
		MISC::CLEAR_BIT(&Global_1958711, 6);
	}
}

void func_515(bool bParam0)//Position - 0x11A3B
{
	if (bParam0)
	{
		if (!BitTest(Global_1958711, 3))
		{
			MISC::SET_BIT(&Global_1958711, 3);
		}
	}
	else if (BitTest(Global_1958711, 3))
	{
		MISC::CLEAR_BIT(&Global_1958711, 3);
	}
}

int func_519()//Position - 0x11B01
{
	if (!__LIB_0__::func_893())
	{
		return 0;
	}
	if (__LIB_0__::func_890(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (!__LIB_0__::func_93())
	{
		return 0;
	}
	if (func_83())
	{
		return 0;
	}
	return 1;
}

void func_521()//Position - 0x11B6F
{
	if (CAM::DOES_CAM_EXIST(Local_96.f_169))
	{
		CAM::DESTROY_CAM(Local_96.f_169, false);
		CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
		if (!__LIB_18__::func_749() || BitTest(Local_96.f_6, 0))
		{
			GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
		}
	}
}

void func_522()//Position - 0x11BAF
{
	if (CAM::DOES_CAM_EXIST(Local_96.f_169))
	{
		if (__LIB_0__::func_334(PLAYER::PLAYER_ID()))
		{
			__LIB_9__::func_548(0);
		}
	}
}

void func_526(struct<9> Param0, var uParam1, var uParam2, var uParam3)//Position - 0x11D85
{
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(32, false, Param0.f_0);
	__LIB_0__::func_895(0, -1, 0);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&uLocal_95, 1, 0);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_94, 97, 0);
	if (!__LIB_0__::func_934())
	{
		func_495(0);
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (!func_484())
		{
			Local_96.f_135 = { Param0.f_2 };
			switch (Param0.f_1)
			{
				case 1:
					if (ENTITY::DOES_ENTITY_EXIST(__LIB_4__::func_281()) && !ENTITY::IS_ENTITY_DEAD(__LIB_4__::func_281(), false))
					{
						Local_96.f_144 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(ENTITY::GET_ENTITY_COORDS(__LIB_4__::func_281(), true), ENTITY::GET_ENTITY_HEADING(__LIB_4__::func_281()), 0f, 1.6f, 2.9f) };
						Local_96.f_138 = { Local_96.f_144 };
					}
					func_458(1);
					Local_94[PLAYER::PLAYER_ID() /*3*/].f_1 = 1;
					Global_1911933[PLAYER::PLAYER_ID() /*260*/].f_93 = 1;
					break;
				case 2:
					__LIB_21__::func_677(1);
					Local_96.f_144 = { Param0.f_5 };
					Local_94[PLAYER::PLAYER_ID() /*3*/].f_1 = 2;
					Global_1911933[PLAYER::PLAYER_ID() /*260*/].f_93 = 2;
					break;
				case 3:
					__LIB_10__::func_571(1);
					Local_96.f_144 = { Param0.f_5 };
					Local_94[PLAYER::PLAYER_ID() /*3*/].f_1 = 3;
					Global_1911933[PLAYER::PLAYER_ID() /*260*/].f_93 = 3;
					break;
				case 4:
					__LIB_40__::func_939(1);
					Local_96.f_144 = { Param0.f_5 };
					Local_94[PLAYER::PLAYER_ID() /*3*/].f_1 = 4;
					Global_1911933[PLAYER::PLAYER_ID() /*260*/].f_93 = 4;
					break;
				case 5:
					func_531(1);
					Local_96.f_144 = { Param0.f_5 };
					Local_94[PLAYER::PLAYER_ID() /*3*/].f_1 = 5;
					Global_1911933[PLAYER::PLAYER_ID() /*260*/].f_93 = 5;
					break;
				case 6:
					func_530(1);
					Local_96.f_144 = { Param0.f_5 };
					Local_94[PLAYER::PLAYER_ID() /*3*/].f_1 = 6;
					Global_1911933[PLAYER::PLAYER_ID() /*260*/].f_93 = 6;
					break;
				case 8:
					func_529(1);
					Local_96.f_144 = { Param0.f_5 };
					Local_94[PLAYER::PLAYER_ID() /*3*/].f_1 = 8;
					Global_1911933[PLAYER::PLAYER_ID() /*260*/].f_93 = 8;
					break;
				case 9:
					func_498(1);
					Local_94[PLAYER::PLAYER_ID() /*3*/].f_1 = 9;
					Global_1911933[PLAYER::PLAYER_ID() /*260*/].f_93 = 9;
					break;
				default:
					func_528(1);
					Local_96.f_144 = { Param0.f_5 };
					break;
			}
			Local_96.f_141 = { Param0.f_8 };
			if (__LIB_0__::func_86(func_404()))
			{
				__LIB_22__::func_190(Local_96.f_144, 0f, 0f, 0f);
			}
		}
	}
	else
	{
		func_495(0);
	}
	if (!func_484())
	{
		func_444(1, 1);
	}
	else
	{
		func_527();
	}
}

void func_527()//Position - 0x12008
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		Local_96.f_46[iVar0] = -1;
		iVar0++;
	}
	func_383(6);
}

void func_528(bool bParam0)//Position - 0x12031
{
	if (bParam0)
	{
		if (!BitTest(Global_1958711.f_2, 0))
		{
			Global_1958711.f_2 = 0;
			MISC::SET_BIT(&(Global_1958711.f_2), 0);
		}
	}
	else if (BitTest(Global_1958711.f_2, 0))
	{
		MISC::CLEAR_BIT(&(Global_1958711.f_2), 0);
	}
}

void func_529(bool bParam0)//Position - 0x12075
{
	if (bParam0)
	{
		if (!BitTest(Global_1958711.f_2, 8))
		{
			Global_1958711.f_2 = 0;
			MISC::SET_BIT(&(Global_1958711.f_2), 8);
		}
	}
	else if (BitTest(Global_1958711.f_2, 8))
	{
		MISC::CLEAR_BIT(&(Global_1958711.f_2), 8);
	}
}

void func_530(bool bParam0)//Position - 0x120BD
{
	if (bParam0)
	{
		if (!BitTest(Global_1958711.f_2, 6))
		{
			Global_1958711.f_2 = 0;
			MISC::SET_BIT(&(Global_1958711.f_2), 6);
		}
	}
	else if (BitTest(Global_1958711.f_2, 6))
	{
		MISC::CLEAR_BIT(&(Global_1958711.f_2), 6);
	}
}

void func_531(bool bParam0)//Position - 0x12101
{
	if (bParam0)
	{
		if (!BitTest(Global_1958711.f_2, 5))
		{
			Global_1958711.f_2 = 0;
			MISC::SET_BIT(&(Global_1958711.f_2), 5);
		}
	}
	else if (BitTest(Global_1958711.f_2, 5))
	{
		MISC::CLEAR_BIT(&(Global_1958711.f_2), 5);
	}
}

