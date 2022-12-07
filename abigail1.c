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
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	char* sLocal_20 = NULL;
	float fLocal_21 = 0f;
	struct<3> Local_22 = { 0, 0, 0 } ;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	float fLocal_28 = 0f;
	float fLocal_29 = 0f;
	float fLocal_30 = 0f;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	int iLocal_33 = 0;
	int iLocal_34 = 0;
	var uLocal_35 = 10;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
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
	var uLocal_62 = 0;
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
	struct<3> Local_78 = { 0, 0, 0 } ;
	struct<3> Local_79 = { 0, 0, 0 } ;
	var uLocal_80 = 0;
	char* sLocal_81 = NULL;
	struct<61> Local_82 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int* iLocal_83 = NULL;
	int iLocal_84 = 0;
	int iLocal_85 = 0;
	int iLocal_86 = 0;
	int iLocal_87 = 0;
	int iLocal_88 = 0;
	int iLocal_89 = 0;
	struct<61> Local_90 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	sLocal_20 = "NULL";
	fLocal_21 = 0f;
	fLocal_23 = -0.0375f;
	fLocal_24 = 0.17f;
	fLocal_28 = 80f;
	fLocal_29 = 140f;
	fLocal_30 = 180f;
	iLocal_33 = 3;
	Local_78 = { -1593.813f, 5221.2354f, 1.94482f };
	Local_79 = { -1603.9861f, 5243.6235f, 4.940323f };
	uLocal_80 = __LIB_0__::func_94(16);
	sLocal_81 = "rcmabigail";
	Local_82 = { ScriptParam_90 };
	func_366(&Local_82);
	MISC::SET_MISSION_FLAG(true);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(19))
	{
		__LIB_0__::func_135("Force cleanup [TERMINATING]");
		func_346(1);
		func_332();
	}
	__LIB_10__::func_729(&iLocal_83, &(Local_82.f_28[0]));
	while (true)
	{
		SYSTEM::WAIT(0);
		RECORDING::REPLAY_CHECK_FOR_EVENT_THIS_FRAME("SF_DAS", 0);
		func_315(Local_82.f_9, 0, 0, 0, 0, 0);
		func_1();
	}
}

void func_1()//Position - 0xF6
{
	switch (iLocal_87)
	{
		case 0:
			__LIB_24__::func_930();
			if (__LIB_0__::func_121(iLocal_83))
			{
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_83, "rcmabigail", "loop_talk", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_83, "rcmabigail", "loop_look", 3))
				{
					TASK::TASK_PLAY_ANIM(iLocal_83, "rcmabigail", "loop_2_cs", 8f, -8f, -1, 2, 0f, false, false, false);
					CUTSCENE::REMOVE_CUTSCENE();
					func_305(1);
					CUTSCENE::REQUEST_CUTSCENE_WITH_PLAYBACK_LIST("ABIGAIL_MCS_1_CONCAT", 2, 8);
					iLocal_87 = 1;
				}
				else
				{
					func_304("ABIGAIL_MCS_1_CONCAT", 1);
					iLocal_87 = 2;
				}
			}
			break;
		case 1:
			func_302();
			if ((__LIB_0__::func_121(iLocal_83) && ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_83, "rcmabigail", "loop_2_cs", 3)) && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_83, "rcmabigail", "loop_2_cs") > 0.99f)
			{
				iLocal_87++;
			}
			break;
		case 2:
			func_302();
			if (__LIB_18__::func_170(1, 1093140480, 0))
			{
				if (__LIB_0__::func_121(iLocal_83))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_83, "ABIGAIL", 0, 0, 0);
				}
				func_292();
				CUTSCENE::START_CUTSCENE(2048);
				RECORDING::REPLAY_START_EVENT(4);
				iLocal_87++;
			}
			break;
		case 3:
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				func_285(-1608.1659f, 5246.844f, 1.97751f, -1604.4207f, 5238.246f, 4.996789f, 6f, -1596.4615f, 5232.455f, 2.9794f, 25.5125f, 1, 1, 1, 0, 0);
				__LIB_0__::func_76(-1596.4615f, 5232.455f, 2.9794f, 25.5125f, 0, 145);
				func_234(-1604.668f, 5239.1f, 3.01f, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
				MISC::CLEAR_AREA_OF_VEHICLES(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 100f, false, false, false, false, false, false, 0);
				__LIB_0__::func_84(500, 0);
				STREAMING::REMOVE_ANIM_DICT("rcmabigail");
				func_230(58, 1);
				__LIB_0__::func_74(58);
				iLocal_85 = 1;
				if (!STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
				{
					STREAMING::NEW_LOAD_SCENE_START(-1606.2491f, 5273.9644f, 5.199186f, -1.633685f, 0f, -175.27481f, 300f, 0);
				}
				iLocal_87++;
			}
			break;
		case 4:
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(false))
				{
					iLocal_84 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", true);
					CAM::SET_CAM_PARAMS(iLocal_84, -1606.2491f, 5273.9644f, 5.199186f, -1.633685f, 0f, -175.27481f, 30.166092f, 0, 1, 1, 2);
					CAM::SET_CAM_PARAMS(iLocal_84, -1605.6807f, 5274.014f, 3.870102f, -2.089875f, 0f, -178.06396f, 30.166092f, 10000, 1, 1, 2);
					CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
					CAM::SHAKE_CAM(iLocal_84, "HAND_SHAKE", 0.3f);
				}
				if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()) && CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Michael", 0))
				{
					RECORDING::REPLAY_STOP_EVENT();
					TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(PLAYER::PLAYER_PED_ID(), -1606.5344f, 5253.9814f, 2.9994f, 1f, 20000, 0.25f, 0, 40000f);
					TASK::TASK_LOOK_AT_COORD(PLAYER::PLAYER_PED_ID(), -1602.62f, 5260.37f, 1.41f, -1, 0, 2);
				}
				if (__LIB_0__::func_121(iLocal_83) && CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Abigail", 0))
				{
					TASK::CLEAR_PED_TASKS(iLocal_83);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_83, -1581.5586f, 5198.0137f, 3.0091f, 1f, 20000, 0.25f, 0, 40000f);
				}
			}
			else
			{
				iLocal_86 = MISC::GET_GAME_TIMER() + 10000;
				iLocal_87++;
			}
			break;
		case 5:
			if ((iLocal_89 == 0 && CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() == 4) && MISC::GET_GAME_TIMER() > (iLocal_86 - 300))
			{
				GRAPHICS::ANIMPOSTFX_PLAY("CamPushInNeutral", 0, false);
				AUDIO::PLAY_SOUND_FRONTEND(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", true);
				iLocal_89 = 1;
			}
			if (__LIB_6__::func_841(1000) || MISC::GET_GAME_TIMER() > iLocal_86)
			{
				if (__LIB_0__::func_1("DIVING_HELP" /* GXT: A Dinghy is now available at the Marina property to search for the missing submarine pieces. */))
				{
					HUD::CLEAR_HELP(true);
				}
				CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
				CAM::DESTROY_ALL_CAMS(false);
				func_215(1, 1, 1, 1);
				__LIB_10__::func_700(&Local_82, 0, 1);
				__LIB_0__::func_0(&iLocal_83);
				if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
				{
					TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
					TASK::TASK_LOOK_AT_COORD(PLAYER::PLAYER_PED_ID(), -1602.62f, 5260.37f, 1.41f, 5000, 0, 2);
				}
				func_3();
			}
			else if (!__LIB_0__::func_1("DIVING_HELP" /* GXT: A Dinghy is now available at the Marina property to search for the missing submarine pieces. */))
			{
				__LIB_0__::func_187("DIVING_HELP" /* GXT: A Dinghy is now available at the Marina property to search for the missing submarine pieces. */);
			}
			break;
	}
}

void func_3()//Position - 0x526
{
	func_204(16, 0, 1);
	if (!iLocal_85)
	{
		func_230(58, 1);
		__LIB_0__::func_74(58);
		iLocal_85 = 1;
	}
	__LIB_0__::func_0(109, 1);
	func_332();
}

void func_7(int iParam0, int iParam1, int iParam2)//Position - 0x6FE
{
	bool bVar0;
	if (iParam0 < 0)
	{
	}
	if (iParam0 == 321 || iParam0 > 321)
	{
	}
	else
	{
		__LIB_0__::func_521((891 + iParam0), 1, -1);
	}
	bVar0 = true;
	if (Global_113386.f_10194[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_113386.f_10194[iParam0 /*12*/].f_6 == 11 || Global_113386.f_10194[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_113386.f_10194[iParam0 /*12*/].f_5 = 1;
		Global_113386.f_10194[iParam0 /*12*/].f_10 = iParam1;
		Global_113386.f_10194[iParam0 /*12*/].f_11 = iParam2;
		if (iParam0 == 287)
		{
			STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("NUM_HIDDEN_PACKAGES_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("NUM_HIDDEN_PACKAGES_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("NUM_HIDDEN_PACKAGES_3"), 50, 0);
		}
	}
	if (bVar0)
	{
		__LIB_0__::func_1();
	}
}

void func_18()//Position - 0xE07
{
	Global_100441 = 13;
	Global_100441.f_1 = -1;
	Global_100441.f_2 = 0;
	Global_100441.f_30 = 0f;
	MISC::CLEAR_BIT(&(Global_100441.f_20), 25);
	Global_100475 = 0;
	__LIB_0__::func_6(0);
	__LIB_0__::func_11();
	__LIB_0__::func_5();
	Global_100441.f_18 = -1;
	Global_100441.f_19 = -1;
}

void func_25(var uParam0)//Position - 0x1488
{
	__LIB_0__::func_10(&(uParam0->f_12));
	*uParam0 = { 0f, 0f, 0f };
	uParam0->f_3 = { 0f, 0f, 0f };
	uParam0->f_6 = 0f;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
}

void func_30()//Position - 0x1673
{
	StringCopy(&Global_103942, "", 32);
	__LIB_0__::func_8(&Global_103950);
}

void func_32()//Position - 0x1709
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	iVar0 = 0;
	while (iVar0 <= 8)
	{
		iVar1 = Global_97810[iVar0];
		if (ENTITY::DOES_ENTITY_EXIST(iVar1) && !PED::IS_PED_INJURED(iVar1))
		{
			iVar3 = __LIB_18__::func_168(iVar1);
			iVar2 = -99;
			switch (iVar3)
			{
				case 0:
					iVar2 = 112;
					break;
				case 1:
					iVar2 = 158;
					break;
				case 2:
					iVar2 = 154;
					break;
			}
			if (iVar2 != -99)
			{
				if (func_150(iVar1, 14, iVar2))
				{
					__LIB_0__::func_14(iVar1, 14, iVar2);
				}
				if (Global_113386.f_2363.f_539[iVar3 /*65*/].f_39[2] == iVar2)
				{
					Global_113386.f_2363.f_539[iVar3 /*65*/].f_39[2] = -1;
				}
			}
		}
		iVar0++;
	}
}

void func_37(int iParam0, int iParam1, int iParam2)//Position - 0x225D
{
	int iVar0;
	int iVar1;
	if (iParam0 == joaat("Player_Zero"))
	{
		iVar0 = 5;
	}
	else if (iParam0 == joaat("Player_One"))
	{
		iVar0 = 2;
	}
	else if (iParam0 == joaat("Player_Two"))
	{
		iVar0 = 4;
	}
	if (func_39(iParam0, 12, iVar0))
	{
		if (__LIB_0__::func_18(iParam0, iParam1, iParam2))
		{
			iVar1 = __LIB_0__::func_16(iParam0);
			if (iParam1 == 3)
			{
				Global_113386.f_2363.f_539.f_196[iVar1] = iParam2;
			}
			else if (iParam1 == 4)
			{
				Global_113386.f_2363.f_539.f_200[iVar1] = iParam2;
			}
		}
	}
}

bool func_39(int iParam0, int iParam1, int iParam2)//Position - 0x23C5
{
	Global_78130[1 /*14*/] = { func_85(iParam0, iParam1, iParam2, -1) };
	return BitTest(Global_78130[1 /*14*/].f_6, 2);
}

int func_40(int iParam0, int iParam1, int iParam2, int iParam3, var uParam4, var uParam5)//Position - 0x23ED
{
	var uVar0;
	int iVar1;
	if ((*uParam4)[iParam2] == iParam3)
	{
		return 1;
	}
	if (((*uParam4)[iParam2] == -99 && iParam2 != 14) && iParam2 != 13)
	{
		return 1;
	}
	if (iParam2 == 13 || (iParam2 == 14 && (*uParam4)[13] == 31))
	{
		if ((((((((iParam3 == 0 || iParam3 == 1) || iParam3 == 2) || iParam3 == 3) || iParam3 == 4) || iParam3 == 5) || iParam3 == 6) || iParam3 == 7) || iParam3 == 8)
		{
			return 1;
		}
	}
	if (iParam3 == -99 || uParam5->f_1 == -1)
	{
		return 1;
	}
	if (iParam2 == 14)
	{
		uVar0 = { func_78(iParam0, (*uParam4)[13]) };
		iVar1 = 0;
		while (iVar1 <= 8)
		{
			if (uVar0[iVar1] == iParam3)
			{
				return 1;
			}
			iVar1++;
		}
	}
	if (__LIB_0__::func_21(iParam0, iParam2, iParam3))
	{
		return 1;
	}
	if (iParam0 == joaat("Player_Zero"))
	{
		if (func_64(iParam0, iParam2, iParam3, -1))
		{
			if ((((((iParam1 == 1 || iParam1 == 2) || iParam1 == 10) || iParam1 == 11) || iParam1 == 12) || iParam1 == 18) || iParam1 == 50)
			{
				return 0;
			}
			return 1;
		}
		else if (__LIB_0__::func_26(iParam0, iParam2, iParam3, -1))
		{
			if (((((((((iParam1 == 1 || iParam1 == 2) || iParam1 == 4) || iParam1 == 5) || iParam1 == 10) || iParam1 == 11) || iParam1 == 12) || iParam1 == 14) || iParam1 == 18) || iParam1 == 50)
			{
				return 0;
			}
			if (iParam2 == 8)
			{
				if ((*uParam4)[8] != 0)
				{
					return 0;
				}
			}
			else if (iParam2 == 9)
			{
				if ((*uParam4)[9] != 0)
				{
					return 0;
				}
			}
			return 1;
		}
		else if (__LIB_0__::func_25(iParam0, iParam2, iParam3, -1))
		{
			if (((((((((iParam1 == 1 || iParam1 == 2) || iParam1 == 4) || iParam1 == 5) || iParam1 == 10) || iParam1 == 11) || iParam1 == 12) || iParam1 == 14) || iParam1 == 18) || iParam1 == 50)
			{
				return 0;
			}
			return 1;
		}
	}
	else if (iParam0 == joaat("Player_One"))
	{
		if (func_64(iParam0, iParam2, iParam3, -1))
		{
			if ((iParam1 == 3 || iParam1 == 5) || iParam1 == 7)
			{
				return 0;
			}
			return 1;
		}
		else if (__LIB_0__::func_26(iParam0, iParam2, iParam3, -1))
		{
			if ((((iParam1 == 3 || iParam1 == 5) || iParam1 == 7) || iParam1 == 8) || iParam1 == 21)
			{
				if (iParam2 == 8)
				{
					if (iParam3 == 9)
					{
						if (iParam1 == 8 || iParam1 == 21)
						{
							return 1;
						}
					}
					else
					{
						return 0;
					}
				}
				else
				{
					return 0;
				}
			}
			if (iParam2 == 8)
			{
				if ((*uParam4)[8] != 26)
				{
					return 0;
				}
			}
			else if (iParam2 == 9)
			{
				if ((*uParam4)[9] != 0)
				{
					return 0;
				}
				if (((iParam1 == 43 || iParam1 == 44) || iParam1 == 45) || iParam1 == 46)
				{
					if (iParam3 >= 5 && iParam3 <= 10)
					{
						return 0;
					}
				}
			}
			else if (iParam2 == 14)
			{
				if (((iParam1 == 43 || iParam1 == 44) || iParam1 == 45) || iParam1 == 46)
				{
					if (iParam3 >= 26 && iParam3 <= 39)
					{
						return 0;
					}
				}
			}
			return 1;
		}
		else if (__LIB_0__::func_25(iParam0, iParam2, iParam3, -1))
		{
			if (((((iParam1 == 3 || iParam1 == 3) || iParam1 == 5) || iParam1 == 7) || iParam1 == 8) || iParam1 == 21)
			{
				return 0;
			}
			return 1;
		}
		else if (iParam2 == 14)
		{
			if (iParam3 >= 159 && iParam3 <= 174)
			{
				return 1;
			}
		}
	}
	else if (iParam0 == joaat("Player_Two"))
	{
		if (iParam1 == 2)
		{
			if (iParam2 == 14 && iParam3 == 0)
			{
				return 1;
			}
		}
		if (func_64(iParam0, iParam2, iParam3, -1))
		{
			if (((((iParam1 == 1 || iParam1 == 2) || iParam1 == 6) || iParam1 == 8) || iParam1 == 45) || iParam1 == 12)
			{
				return 0;
			}
			return 1;
		}
		else if (__LIB_0__::func_26(iParam0, iParam2, iParam3, -1))
		{
			if (((((((iParam1 == 1 || iParam1 == 2) || iParam1 == 3) || iParam1 == 6) || iParam1 == 8) || iParam1 == 11) || iParam1 == 45) || iParam1 == 12)
			{
				return 0;
			}
			if (iParam2 == 8)
			{
				if ((*uParam4)[8] != 15)
				{
					return 0;
				}
			}
			else if (iParam2 == 9)
			{
				if ((*uParam4)[9] != 0)
				{
					return 0;
				}
			}
			return 1;
		}
		else if (__LIB_0__::func_25(iParam0, iParam2, iParam3, -1))
		{
			if ((((((iParam1 == 1 || iParam1 == 2) || iParam1 == 3) || iParam1 == 6) || iParam1 == 8) || iParam1 == 11) || iParam1 == 12)
			{
				return 0;
			}
			return 1;
		}
	}
	return 0;
}

int func_43(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x2B2B
{
	int iVar0;
	*iParam3 = -99;
	switch (iParam0)
	{
		case joaat("Player_Zero"):
			switch (iParam1)
			{
				case 8:
					if (iParam2 == 7 || iParam2 == 23)
					{
						*iParam3 = 1;
					}
					break;
				case 9:
					if (iParam2 == 8 || (iParam2 >= 9 && iParam2 <= 14))
					{
						*iParam3 = 1;
					}
					break;
				case 10:
					if (iParam2 >= 44 && iParam2 <= 47)
					{
						*iParam3 = 1;
					}
					break;
				case 14:
					if ((((((iParam2 >= 31 && iParam2 <= 32) || (iParam2 >= 33 && iParam2 <= 34)) || (iParam2 >= 35 && iParam2 <= 36)) || iParam2 == 37) || (iParam2 >= 40 && iParam2 <= 41)) || iParam2 == 46)
					{
						*iParam3 = 1;
					}
					break;
			}
			break;
		case joaat("Player_One"):
			switch (iParam1)
			{
				case 2:
					if (iParam2 == 20)
					{
						*iParam3 = 20;
					}
					break;
				case 8:
					if (iParam2 == 4)
					{
						*iParam3 = 19;
					}
					break;
				case 9:
					if (iParam2 >= 5 && iParam2 <= 10)
					{
						*iParam3 = 19;
					}
					break;
				case 10:
					if (iParam2 >= 47 && iParam2 <= 50)
					{
						*iParam3 = 19;
					}
					break;
				case 14:
					if (((((iParam2 >= 26 && iParam2 <= 27) || (iParam2 >= 28 && iParam2 <= 29)) || (iParam2 >= 30 && iParam2 <= 31)) || iParam2 == 32) || (iParam2 >= 35 && iParam2 <= 36))
					{
						*iParam3 = 19;
					}
					break;
			}
			break;
		case joaat("Player_Two"):
			switch (iParam1)
			{
				case 8:
					if (iParam2 == 7)
					{
						*iParam3 = 2;
					}
					break;
				case 9:
					if ((iParam2 >= 9 && iParam2 <= 14) || (iParam2 >= 15 && iParam2 <= 16))
					{
						*iParam3 = 2;
					}
					break;
				case 10:
					if (iParam2 >= 29 && iParam2 <= 32)
					{
						*iParam3 = 2;
					}
					break;
				case 14:
					if ((((((iParam2 >= 47 && iParam2 <= 48) || (iParam2 >= 49 && iParam2 <= 50)) || (iParam2 >= 51 && iParam2 <= 52)) || iParam2 == 53) || (iParam2 >= 56 && iParam2 <= 57)) || iParam2 == 62)
					{
						*iParam3 = 2;
					}
					break;
			}
			break;
	}
	if (*iParam3 != -99)
	{
		iVar0 = __LIB_0__::func_16(iParam0);
		Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 = iParam2;
		Global_113386.f_2363.f_539[iVar0 /*65*/].f_61 = iParam1;
		return 1;
	}
	return 0;
}

int func_50(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x42BD
{
	int iVar0;
	*iParam3 = -99;
	switch (iParam0)
	{
		case joaat("Player_Zero"):
			switch (iParam1)
			{
				case 10:
					if (iParam2 >= 44 && iParam2 <= 47)
					{
						*iParam3 = 0;
					}
					break;
				case 14:
					if (((((((iParam2 >= 31 && iParam2 <= 32) || (iParam2 >= 33 && iParam2 <= 34)) || (iParam2 >= 35 && iParam2 <= 36)) || iParam2 == 37) || (iParam2 >= 38 && iParam2 <= 39)) || (iParam2 >= 40 && iParam2 <= 41)) || (iParam2 >= 42 && iParam2 <= 44))
					{
						*iParam3 = 0;
					}
					break;
			}
			break;
		case joaat("Player_One"):
			switch (iParam1)
			{
				case 10:
					if (iParam2 >= 47 && iParam2 <= 50)
					{
						*iParam3 = 0;
					}
					break;
				case 14:
					if (((((iParam2 >= 26 && iParam2 <= 27) || (iParam2 >= 28 && iParam2 <= 29)) || (iParam2 >= 30 && iParam2 <= 31)) || iParam2 == 32) || (iParam2 >= 35 && iParam2 <= 36))
					{
						*iParam3 = 0;
					}
					break;
			}
			break;
		case joaat("Player_Two"):
			switch (iParam1)
			{
				case 9:
					if (iParam2 >= 15 && iParam2 <= 16)
					{
						*iParam3 = 0;
					}
					break;
				case 10:
					if (iParam2 >= 29 && iParam2 <= 32)
					{
						*iParam3 = 0;
					}
					break;
				case 14:
					if (((((((iParam2 >= 47 && iParam2 <= 48) || (iParam2 >= 49 && iParam2 <= 50)) || (iParam2 >= 51 && iParam2 <= 52)) || iParam2 == 53) || (iParam2 >= 54 && iParam2 <= 55)) || (iParam2 >= 56 && iParam2 <= 57)) || (iParam2 >= 58 && iParam2 <= 60))
					{
						*iParam3 = 0;
					}
					break;
			}
			break;
	}
	if (*iParam3 != -99)
	{
		iVar0 = __LIB_0__::func_16(iParam0);
		Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 = iParam2;
		Global_113386.f_2363.f_539[iVar0 /*65*/].f_64 = iParam1;
		return 1;
	}
	return 0;
}

int func_53(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x4736
{
	switch (iParam0)
	{
		case joaat("MP_M_Freemode_01"):
			switch (iParam1)
			{
				case 14:
					if (iParam3 == -1)
					{
						iParam3 = func_54(iParam0, iParam2, 14, 3);
					}
					if ((iParam2 >= 131 && iParam2 <= 154) || (iParam2 >= 327 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("HELMET"), 1)))
					{
						return 1;
					}
					break;
			}
			break;
		case joaat("MP_F_Freemode_01"):
			switch (iParam1)
			{
				case 14:
					if (iParam3 == -1)
					{
						iParam3 = func_54(iParam0, iParam2, 14, 4);
					}
					if ((iParam2 >= 131 && iParam2 <= 154) || (iParam2 >= 327 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("HELMET"), 1)))
					{
						return 1;
					}
					break;
			}
			break;
	}
	return 0;
}

int func_54(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x4804
{
	struct<2> Var0;
	int iVar1;
	int iVar2;
	struct<2> Var3;
	int iVar4;
	int iVar5;
	if (iParam2 == 12)
	{
	}
	else if (iParam2 == 13)
	{
	}
	else if (iParam2 == 14)
	{
		FILES::INIT_SHOP_PED_PROP(&Var0);
		iVar1 = (iParam1 - __LIB_0__::func_23(iParam0));
		if (iVar1 < 0)
		{
			return -1;
		}
		iVar2 = FILES::SETUP_SHOP_PED_APPAREL_QUERY_TU(iParam3, 10, -1, true, -1, -1);
		if (iVar2 <= iVar1)
		{
			return -1;
		}
		FILES::GET_SHOP_PED_QUERY_PROP(iVar1, &Var0);
		return Var0.f_1;
	}
	else
	{
		FILES::INIT_SHOP_PED_COMPONENT(&Var3);
		iVar4 = (iParam1 - __LIB_0__::func_25(iParam0, __LIB_0__::func_33(iParam2)));
		if (iVar4 < 0)
		{
			return -1;
		}
		if ((iParam0 == Global_78252.f_26[iParam2] && iParam1 == Global_78252[iParam2]) && Global_78252.f_13[iParam2] != 0)
		{
			return Global_78252.f_13[iParam2];
		}
		iVar5 = FILES::SETUP_SHOP_PED_APPAREL_QUERY_TU(iParam3, 10, -1, false, -1, __LIB_0__::func_33(iParam2));
		if (iVar5 <= iVar4)
		{
			return -1;
		}
		FILES::GET_SHOP_PED_QUERY_COMPONENT(iVar4, &Var3);
		Global_78252.f_13[iParam2] = Var3.f_1;
		Global_78252[iParam2] = iParam1;
		Global_78252.f_26[iParam2] = iParam0;
		return Var3.f_1;
	}
	return -1;
}

int func_57(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x4D26
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	if (iParam1 == -1)
	{
		return __LIB_0__::func_29(iParam3);
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	iVar1 = FILES::GET_HASH_NAME_FOR_PROP(iParam0, iParam3, iParam1, iParam2);
	if (iVar1 != -1 && iVar1 != 0)
	{
		if (iVar0 == joaat("MP_M_Freemode_01"))
		{
			return func_59(ENTITY::GET_ENTITY_MODEL(iParam0), iVar1, 14, 3);
		}
		else if (iVar0 == joaat("MP_F_Freemode_01"))
		{
			return func_59(ENTITY::GET_ENTITY_MODEL(iParam0), iVar1, 14, 4);
		}
	}
	iVar2 = PED::GET_NUMBER_OF_PED_PROP_DRAWABLE_VARIATIONS(iParam0, iParam3);
	iVar4 = 0;
	while (iVar4 <= (iVar2 - 1))
	{
		iVar6 = PED::GET_NUMBER_OF_PED_PROP_TEXTURE_VARIATIONS(iParam0, iParam3, iVar4);
		if (iVar4 != iParam1)
		{
			iVar3 = (iVar3 + iVar6);
		}
		else
		{
			iVar5 = 0;
			while (iVar5 <= (iVar6 - 1))
			{
				if (iVar4 == iParam1 && iVar5 == iParam2)
				{
					iVar3 = (iVar3 + __LIB_0__::func_24(iParam0, iParam3));
					return iVar3;
				}
				else
				{
					iVar3++;
				}
				iVar5++;
			}
		}
		iVar4++;
	}
	return __LIB_0__::func_29(iParam3);
}

int func_59(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x4F60
{
	struct<2> Var0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	if (iParam2 == 12)
	{
		iVar2 = FILES::SETUP_SHOP_PED_OUTFIT_QUERY(iParam3, false);
		iVar1 = 0;
		while (iVar1 < iVar2)
		{
			FILES::GET_SHOP_PED_QUERY_OUTFIT(iVar1, &Var0);
			if (Var0.f_1 == iParam1)
			{
				return (__LIB_0__::func_28(iParam0) + iVar1);
			}
			iVar1++;
		}
	}
	else if (iParam2 == 13)
	{
	}
	else if (iParam2 == 14)
	{
		FILES::SETUP_SHOP_PED_APPAREL_QUERY_TU(iParam3, 10, -1, true, -1, -1);
		iVar3 = FILES::GET_SHOP_PED_QUERY_PROP_INDEX(iParam1);
		if (iVar3 != -1)
		{
			return (__LIB_0__::func_23(iParam0) + iVar3);
		}
	}
	else
	{
		FILES::SETUP_SHOP_PED_APPAREL_QUERY_TU(iParam3, 10, -1, false, -1, __LIB_0__::func_33(iParam2));
		iVar4 = FILES::GET_SHOP_PED_QUERY_COMPONENT_INDEX(iParam1);
		if (iVar4 != -1)
		{
			return (__LIB_0__::func_25(iParam0, __LIB_0__::func_33(iParam2)) + iVar4);
		}
	}
	return -99;
}

int func_64(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x57A2
{
	switch (iParam0)
	{
		case joaat("Player_Zero"):
			if (iParam1 == 14)
			{
				if ((((((((iParam2 == 58 || iParam2 == 61) || (iParam2 >= 62 && iParam2 <= 69)) || (iParam2 >= 70 && iParam2 <= 79)) || (iParam2 >= 80 && iParam2 <= 89)) || iParam2 == 90) || (iParam2 >= 91 && iParam2 <= 102)) || (iParam2 >= 103 && iParam2 <= 110)) || iParam2 == 111)
				{
					return 1;
				}
			}
			break;
		case joaat("Player_One"):
			if (iParam1 == 14)
			{
				if (((((((((((iParam2 >= 83 && iParam2 <= 92) || iParam2 == 93) || iParam2 == 94) || (iParam2 >= 95 && iParam2 <= 101)) || (iParam2 >= 102 && iParam2 <= 111)) || (iParam2 >= 112 && iParam2 <= 121)) || (iParam2 >= 122 && iParam2 <= 131)) || (iParam2 >= 132 && iParam2 <= 139)) || (iParam2 >= 140 && iParam2 <= 149)) || (iParam2 >= 150 && iParam2 <= 156)) || iParam2 == 157)
				{
					return 1;
				}
			}
			break;
		case joaat("Player_Two"):
			if (iParam1 == 14)
			{
				if (((((((((iParam2 == 89 || (iParam2 >= 90 && iParam2 <= 99)) || (iParam2 >= 100 && iParam2 <= 109)) || iParam2 == 111) || iParam2 == 112) || (iParam2 >= 113 && iParam2 <= 122)) || (iParam2 >= 123 && iParam2 <= 132)) || (iParam2 >= 133 && iParam2 <= 142)) || (iParam2 >= 143 && iParam2 <= 152)) || iParam2 == 153)
				{
					return 1;
				}
			}
			break;
		case joaat("MP_M_Freemode_01"):
			if (iParam1 == 14)
			{
				if (iParam2 >= 155 && iParam2 <= 318)
				{
					return 1;
				}
				else if (iParam2 >= 327)
				{
					if (iParam3 == -1)
					{
						iParam3 = func_54(iParam0, iParam2, 14, 3);
					}
					return FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("GLASSES"), 1);
				}
			}
			break;
		case joaat("MP_F_Freemode_01"):
			if (iParam1 == 14)
			{
				if (iParam2 >= 155 && iParam2 <= 318)
				{
					return 1;
				}
				else if (iParam2 >= 327)
				{
					if (iParam3 == -1)
					{
						iParam3 = func_54(iParam0, iParam2, 14, 4);
					}
					return FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("GLASSES"), 1);
				}
			}
			break;
	}
	return 0;
}

int func_66(int iParam0, int iParam1)//Position - 0x5ADB
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (((iParam1 == 12 || iParam1 == 13) || iParam1 == 14) || PED::IS_PED_INJURED(iParam0))
	{
		return -99;
	}
	iVar0 = __LIB_0__::func_33(iParam1);
	iVar1 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, iVar0);
	iVar2 = PED::GET_PED_TEXTURE_VARIATION(iParam0, iVar0);
	return __LIB_0__::func_28(iParam0, iVar1, iVar2, iParam1);
}

int func_76(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x9167
{
	int iVar0;
	iVar0 = __LIB_0__::func_16(iParam1);
	if (Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 != -99)
	{
		if (!func_150(iParam0, Global_113386.f_2363.f_539[iVar0 /*65*/].f_61, Global_113386.f_2363.f_539[iVar0 /*65*/].f_60) || iParam3 == 1)
		{
			*iParam2 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_59;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 = -99;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_61 = 2;
			return 1;
		}
	}
	return 0;
}

struct<10> func_78(int iParam0, int iParam1)//Position - 0x92AD
{
	int iVar0;
	struct<10> Var1;
	Var1 = 9;
	iVar0 = 0;
	while (iVar0 <= 8)
	{
		Var1[iVar0] = -99;
		iVar0++;
	}
	switch (iParam0)
	{
		case joaat("Player_Zero"):
			switch (iParam1)
			{
				case 31:
					__LIB_0__::func_30(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 0:
					__LIB_0__::func_30(&Var1, 10, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 1:
					__LIB_0__::func_30(&Var1, 19, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 2:
					__LIB_0__::func_30(&Var1, 14, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 3:
					__LIB_0__::func_30(&Var1, 18, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 4:
					__LIB_0__::func_30(&Var1, 0, 59, 112, 3, 4, 5, 6, 7, 8);
					break;
				case 5:
					__LIB_0__::func_30(&Var1, 0, 60, 112, 3, 4, 5, 6, 7, 8);
					break;
				case 6:
					__LIB_0__::func_30(&Var1, 15, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 7:
					__LIB_0__::func_30(&Var1, 0, 60, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 8:
					__LIB_0__::func_30(&Var1, 55, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 9:
					__LIB_0__::func_30(&Var1, 0, 1, 112, 3, 4, 5, 6, 7, 8);
					break;
				default:
					func_79(&Var1, iParam0, iParam1, 10);
					break;
			}
			break;
		case joaat("Player_One"):
			switch (iParam1)
			{
				case 31:
					__LIB_0__::func_30(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 0:
					__LIB_0__::func_30(&Var1, 10, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 1:
					__LIB_0__::func_30(&Var1, 0, 82, 158, 3, 4, 5, 6, 7, 8);
					break;
				case 2:
					__LIB_0__::func_30(&Var1, 0, 1, 158, 3, 4, 5, 6, 7, 8);
					break;
				case 3:
					__LIB_0__::func_30(&Var1, 15, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 4:
					__LIB_0__::func_30(&Var1, 41, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 5:
					__LIB_0__::func_30(&Var1, 40, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 6:
					__LIB_0__::func_30(&Var1, 41, 95, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 7:
					__LIB_0__::func_30(&Var1, 0, 95, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 8:
					__LIB_0__::func_30(&Var1, 69, 95, 2, 3, 4, 5, 6, 7, 8);
					break;
				default:
					func_79(&Var1, iParam0, iParam1, 9);
					break;
			}
			break;
		case joaat("Player_Two"):
			switch (iParam1)
			{
				case 31:
					__LIB_0__::func_30(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 0:
					__LIB_0__::func_30(&Var1, 11, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 1:
					__LIB_0__::func_30(&Var1, 17, 90, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 2:
					__LIB_0__::func_30(&Var1, 15, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 3:
					__LIB_0__::func_30(&Var1, 0, 88, 154, 3, 4, 5, 6, 7, 8);
					break;
				case 4:
					__LIB_0__::func_30(&Var1, 0, 1, 154, 3, 4, 5, 6, 7, 8);
					break;
				case 5:
					__LIB_0__::func_30(&Var1, 16, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 6:
					__LIB_0__::func_30(&Var1, 36, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 7:
					__LIB_0__::func_30(&Var1, 0, 123, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 8:
					__LIB_0__::func_30(&Var1, 69, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				default:
					func_79(&Var1, iParam0, iParam1, 9);
					break;
			}
			break;
		case joaat("MP_M_Freemode_01"):
			switch (iParam1)
			{
				case 31:
					__LIB_0__::func_30(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 0:
					__LIB_0__::func_30(&Var1, 129, 167, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 1:
					__LIB_0__::func_30(&Var1, 90, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 2:
					__LIB_0__::func_30(&Var1, 23, 251, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 3:
					__LIB_0__::func_30(&Var1, 36, 262, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 4:
					__LIB_0__::func_30(&Var1, 88, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 5:
					__LIB_0__::func_30(&Var1, 125, 175, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 6:
					__LIB_0__::func_30(&Var1, 35, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 7:
					__LIB_0__::func_30(&Var1, 44, 208, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 8:
					__LIB_0__::func_30(&Var1, 52, 189, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 9:
					__LIB_0__::func_30(&Var1, 0, 261, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 10:
					__LIB_0__::func_30(&Var1, 0, 243, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 11:
					__LIB_0__::func_30(&Var1, 0, 243, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 12:
					__LIB_0__::func_30(&Var1, 0, 212, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 13:
					__LIB_0__::func_30(&Var1, 64, 291, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 14:
					__LIB_0__::func_30(&Var1, 61, 207, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 15:
					__LIB_0__::func_30(&Var1, 0, 291, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 16:
					__LIB_0__::func_30(&Var1, 0, 208, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 17:
					__LIB_0__::func_30(&Var1, 0, 229, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 18:
					__LIB_0__::func_30(&Var1, 36, 249, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 19:
					__LIB_0__::func_30(&Var1, 0, 259, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 20:
					__LIB_0__::func_30(&Var1, 0, 174, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 21:
					__LIB_0__::func_30(&Var1, 35, 180, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 22:
					__LIB_0__::func_30(&Var1, 36, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 23:
					__LIB_0__::func_30(&Var1, 0, 259, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 24:
					__LIB_0__::func_30(&Var1, 35, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				default:
					func_79(&Var1, iParam0, iParam1, 25);
					break;
			}
			break;
		case joaat("MP_F_Freemode_01"):
			switch (iParam1)
			{
				case 31:
					__LIB_0__::func_30(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 0:
					__LIB_0__::func_30(&Var1, 35, 233, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 1:
					__LIB_0__::func_30(&Var1, 36, 178, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 2:
					__LIB_0__::func_30(&Var1, 53, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 3:
					__LIB_0__::func_30(&Var1, 38, 170, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 4:
					__LIB_0__::func_30(&Var1, 37, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 5:
					__LIB_0__::func_30(&Var1, 113, 203, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 6:
					__LIB_0__::func_30(&Var1, 114, 183, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 7:
					__LIB_0__::func_30(&Var1, 0, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 8:
					__LIB_0__::func_30(&Var1, 0, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 9:
					__LIB_0__::func_30(&Var1, 0, 199, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 10:
					__LIB_0__::func_30(&Var1, 0, 182, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 11:
					__LIB_0__::func_30(&Var1, 0, 233, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 12:
					__LIB_0__::func_30(&Var1, 107, 167, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 13:
					__LIB_0__::func_30(&Var1, 109, 170, 2, 3, 4, 5, 323, 7, 8);
					break;
				case 14:
					__LIB_0__::func_30(&Var1, 119, 237, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 15:
					__LIB_0__::func_30(&Var1, 0, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 16:
					__LIB_0__::func_30(&Var1, 114, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 17:
					__LIB_0__::func_30(&Var1, 35, 268, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 18:
					__LIB_0__::func_30(&Var1, 0, 266, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 19:
					__LIB_0__::func_30(&Var1, 42, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 20:
					__LIB_0__::func_30(&Var1, 76, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 21:
					__LIB_0__::func_30(&Var1, 39, 235, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 22:
					__LIB_0__::func_30(&Var1, 41, 183, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 23:
					__LIB_0__::func_30(&Var1, 111, 194, 2, 3, 4, 5, 6, 7, 8);
					break;
				default:
					func_79(&Var1, iParam0, iParam1, 25);
					break;
			}
			break;
	}
	return Var1;
}

void func_79(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x9BDC
{
	int iVar0;
	struct<4> Var1;
	struct<3> Var2;
	int iVar3;
	if (iParam2 != 0 && iParam2 != -99)
	{
		(*iParam0)[0] = 0;
		(*iParam0)[1] = 1;
		(*iParam0)[2] = 2;
		(*iParam0)[3] = 3;
		(*iParam0)[4] = 4;
		(*iParam0)[5] = 5;
		(*iParam0)[6] = 6;
		(*iParam0)[7] = 7;
		(*iParam0)[8] = 8;
		iVar0 = 0;
		if (iParam1 == joaat("Player_Zero"))
		{
			iVar0 = 0;
		}
		else if (iParam1 == joaat("Player_One"))
		{
			iVar0 = 1;
		}
		else if (iParam1 == joaat("Player_Two"))
		{
			iVar0 = 2;
		}
		else if (iParam1 == joaat("MP_M_Freemode_01"))
		{
			iVar0 = 3;
		}
		else if (iParam1 == joaat("MP_F_Freemode_01"))
		{
			iVar0 = 4;
		}
		FILES::GET_SHOP_PED_OUTFIT(iParam2, &Var1);
		if (!FILES::IS_CONTENT_ITEM_LOCKED(Var1.f_0))
		{
			iVar3 = 0;
			while (iVar3 < Var1.f_3)
			{
				if (FILES::GET_SHOP_PED_OUTFIT_PROP_VARIANT(Var1.f_1, iVar3, &Var2) && Var2.f_2 != -1)
				{
					if ((Var2.f_0 != 0 && Var2.f_0 != -1) && Var2.f_0 != joaat("0"))
					{
						(*iParam0)[Var2.f_2] = func_59(iParam1, Var2.f_0, 14, iVar0);
					}
					else if (Var2.f_1 != -1)
					{
						(*iParam0)[Var2.f_2] = Var2.f_1;
					}
				}
				iVar3++;
			}
		}
	}
}

struct<14> func_85(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0xBEA1
{
	__LIB_0__::func_41();
	if (iParam0 == joaat("Player_Zero"))
	{
		func_131(iParam1, iParam2);
	}
	else if (iParam0 == joaat("Player_One"))
	{
		func_112(iParam1, iParam2);
	}
	else if (iParam0 == joaat("Player_Two"))
	{
		func_86(iParam1, iParam2);
	}
	return Global_78130[0 /*14*/];
}

void func_86(int iParam0, int iParam1)//Position - 0xBEF3
{
	switch (iParam0)
	{
		case 0:
			func_111(iParam1);
			break;
		case 2:
			func_110(iParam1);
			break;
		case 3:
			func_107(iParam1);
			break;
		case 4:
			func_106(iParam1);
			break;
		case 6:
			func_105(iParam1);
			break;
		case 5:
			func_104(iParam1);
			break;
		case 8:
			func_103(iParam1);
			break;
		case 9:
			func_102(iParam1);
			break;
		case 10:
			__LIB_0__::func_40(iParam1);
			break;
		case 1:
			__LIB_0__::func_39(iParam1);
			break;
		case 7:
			func_99(iParam1);
			break;
		case 11:
			__LIB_0__::func_38(iParam1);
			break;
		case 12:
			__LIB_0__::func_37(iParam1);
			break;
		case 13:
			__LIB_0__::func_36(iParam1);
			break;
		case 14:
			__LIB_0__::func_34(iParam1);
			break;
	}
}

void func_88(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)//Position - 0xD21E
{
	var uVar0;
	int iVar1;
	uParam0->f_6 = 0;
	*uParam0 = iParam9;
	uParam0->f_1 = (iParam2 % 32);
	uParam0->f_2 = (iParam2 / 32);
	uParam0->f_3 = iParam4;
	uParam0->f_4 = iParam5;
	uParam0->f_7 = iParam6;
	StringCopy(&(uParam0->f_8), sParam3, 16);
	uParam0->f_13 = iParam8;
	uParam0->f_12 = __LIB_0__::func_40(iParam8);
	if ((uParam0->f_2 >= 10 && uParam0->f_5 >= 0) && uParam0->f_5 < 3)
	{
		if (!bParam10)
		{
		}
		uParam0->f_2 = 0;
	}
	if (MISC::GET_HASH_KEY(sParam3) != MISC::GET_HASH_KEY("NO_LABEL"))
	{
	}
	if (bParam7)
	{
		MISC::SET_BIT(&(uParam0->f_6), 3);
	}
	if (bParam10)
	{
		MISC::SET_BIT(&(uParam0->f_6), 0);
		if (uParam0->f_5 >= 0 && uParam0->f_5 < 3)
		{
			MISC::SET_BIT(&(uParam0->f_6), 5);
		}
		MISC::SET_BIT(&(uParam0->f_6), 1);
		MISC::SET_BIT(&(uParam0->f_6), 2);
		MISC::SET_BIT(&(uParam0->f_6), 6);
		if (__LIB_0__::func_39(14))
		{
			return;
		}
		if (iParam1 == 1)
		{
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("REBREATHER"), 0))
			{
				MISC::SET_BIT(&(uParam0->f_6), 7);
			}
		}
		if (iParam1 == 12)
		{
			if (!__LIB_6__::func_778(Global_2883588, 1, 1, 1, -1))
			{
				MISC::CLEAR_BIT(&(uParam0->f_6), 2);
			}
			if (!__LIB_6__::func_778(Global_2883588, 2, 1, 1, -1))
			{
				MISC::SET_BIT(&(uParam0->f_6), 4);
			}
		}
		else if (iParam1 == 13)
		{
		}
		else if (iParam1 == 14)
		{
			if (!__LIB_6__::func_778(Global_2883588, 1, 1, 1, -1))
			{
				MISC::CLEAR_BIT(&(uParam0->f_6), 2);
			}
			if (!__LIB_6__::func_778(Global_2883588, 2, 1, 1, -1))
			{
				MISC::SET_BIT(&(uParam0->f_6), 4);
			}
		}
		else
		{
			if (!__LIB_6__::func_778(Global_2883588, 1, 1, 1, -1))
			{
				MISC::CLEAR_BIT(&(uParam0->f_6), 2);
			}
			if (!__LIB_6__::func_778(Global_2883588, 2, 1, 1, -1))
			{
				MISC::SET_BIT(&(uParam0->f_6), 4);
			}
		}
		if (FILES::IS_CONTENT_ITEM_LOCKED(Global_2883589))
		{
			MISC::CLEAR_BIT(&(uParam0->f_6), 1);
			MISC::CLEAR_BIT(&(uParam0->f_6), 0);
		}
	}
	else if (uParam0->f_5 >= 0 && uParam0->f_5 < 3)
	{
		MISC::SET_BIT(&(uParam0->f_6), 0);
		MISC::SET_BIT(&(uParam0->f_6), 5);
		if (__LIB_0__::func_31(iParam1, uParam0->f_5, uParam0->f_2, 0, uParam0->f_1, 0, 0))
		{
			MISC::SET_BIT(&(uParam0->f_6), 1);
		}
		if (__LIB_0__::func_31(iParam1, uParam0->f_5, uParam0->f_2, 1, uParam0->f_1, 0, 0))
		{
			MISC::SET_BIT(&(uParam0->f_6), 2);
		}
		if (!__LIB_0__::func_31(iParam1, uParam0->f_5, uParam0->f_2, 2, uParam0->f_1, 0, 0))
		{
			MISC::SET_BIT(&(uParam0->f_6), 4);
		}
	}
	else
	{
		MISC::SET_BIT(&(uParam0->f_6), 0);
		if ((((((((((iParam1 == 11 || iParam1 == 4) || iParam1 == 6) || iParam1 == 1) || iParam1 == 14) || iParam1 == 2) || iParam1 == 8) || iParam1 == 9) || iParam1 == 10) || iParam1 == 7) || iParam1 == 12)
		{
			if (__LIB_0__::func_39(14))
			{
				return;
			}
			uVar0 = __LIB_0__::func_534(__LIB_0__::func_35(iParam1, uParam0->f_2), Global_78127, 0);
			if (BitTest(uVar0, uParam0->f_1))
			{
				MISC::SET_BIT(&(uParam0->f_6), 1);
			}
			uVar0 = __LIB_0__::func_534(__LIB_0__::func_37(iParam1, uParam0->f_2), Global_78127, 0);
			if (BitTest(uVar0, uParam0->f_1))
			{
				MISC::SET_BIT(&(uParam0->f_6), 2);
			}
			if (__LIB_0__::func_36(iParam1, uParam0->f_2, &iVar1))
			{
				uVar0 = __LIB_0__::func_534(iVar1, Global_78127, 0);
				if (!BitTest(uVar0, uParam0->f_1))
				{
					MISC::SET_BIT(&(uParam0->f_6), 4);
				}
			}
		}
		else
		{
			MISC::SET_BIT(&(uParam0->f_6), 1);
			MISC::SET_BIT(&(uParam0->f_6), 2);
		}
	}
	if (iParam1 == 14)
	{
		if (iParam4 == -1)
		{
			MISC::SET_BIT(&(uParam0->f_6), 1);
			MISC::SET_BIT(&(uParam0->f_6), 2);
		}
	}
}

void func_95(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0xE2DE
{
	int iVar0;
	int iVar1;
	struct<8> Var2;
	int iVar3;
	int iVar4;
	struct<10> Var5;
	int iVar6;
	int iVar7;
	int iVar8;
	struct<10> Var9;
	int iVar10;
	int iVar11;
	iVar0 = (iParam1 - iParam2);
	iVar0 = iVar0;
	if (iVar0 < 0)
	{
		return;
	}
	iVar1 = Global_78130[0 /*14*/].f_5;
	if (iParam0 == 12)
	{
		iVar3 = (iParam1 - iParam2);
		if (iVar3 >= 0)
		{
			iVar4 = FILES::SETUP_SHOP_PED_OUTFIT_QUERY(iVar1, false);
			if (iVar4 > iVar3)
			{
				FILES::GET_SHOP_PED_QUERY_OUTFIT(iVar3, &Var2);
				Global_2883588 = Var2.f_1;
				Global_2883589 = Var2.f_0;
				func_88(&(Global_78130[0 /*14*/]), iParam0, iParam1, &(Var2.f_7), 0, 0, Var2.f_2, 0, -1, 2, 1);
				return;
			}
		}
	}
	else if (iParam0 == 13)
	{
		func_88(&(Global_78130[0 /*14*/]), iParam0, iParam1, "NO_LABEL", 0, 0, 0, 1, -1, 2, 1);
	}
	else if (iParam0 == 14)
	{
		FILES::INIT_SHOP_PED_PROP(&Var5);
		iVar7 = (iParam1 - iParam2);
		if (iVar7 >= 0)
		{
			iVar8 = FILES::SETUP_SHOP_PED_APPAREL_QUERY_TU(iVar1, 10, -1, true, -1, -1);
			if (iVar8 > iVar7)
			{
				FILES::GET_SHOP_PED_QUERY_PROP(iVar7, &Var5);
				if (Var5.f_6 == 0)
				{
					iVar6 = 9;
				}
				else if (Var5.f_6 == 1)
				{
					iVar6 = 10;
				}
				else if (Var5.f_6 == 2)
				{
					iVar6 = 2;
				}
				else if (Var5.f_6 == 3)
				{
					iVar6 = 3;
				}
				else if (Var5.f_6 == 4)
				{
					iVar6 = 4;
				}
				else if (Var5.f_6 == 5)
				{
					iVar6 = 5;
				}
				else if (Var5.f_6 == 6)
				{
					iVar6 = 6;
				}
				else if (Var5.f_6 == 7)
				{
					iVar6 = 7;
				}
				else if (Var5.f_6 == 8)
				{
					iVar6 = 8;
				}
				else
				{
					iVar6 = -1;
				}
				Global_2883588 = Var5.f_1;
				Global_2883589 = Var5.f_0;
				func_88(&(Global_78130[0 /*14*/]), iParam0, iParam1, &(Var5.f_9), Var5.f_3, Var5.f_4, Var5.f_5, FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Var5.f_1, joaat("OUTFIT_ONLY"), 0), iVar6, 2, Var5.f_1 != 0);
				return;
			}
		}
	}
	else
	{
		FILES::INIT_SHOP_PED_COMPONENT(&Var9);
		if (iParam3 != -1 && Global_78300)
		{
			FILES::GET_SHOP_PED_COMPONENT(iParam3, &Var9);
			Global_2883588 = Var9.f_1;
			Global_2883589 = Var9.f_0;
			func_88(&(Global_78130[0 /*14*/]), iParam0, iParam1, &(Var9.f_9), Var9.f_3, Var9.f_4, Var9.f_5, FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Var9.f_1, joaat("OUTFIT_ONLY"), 0), -1, 2, Var9.f_1 != 0);
			return;
		}
		iVar10 = (iParam1 - iParam2);
		if (iVar10 >= 0)
		{
			iVar11 = FILES::SETUP_SHOP_PED_APPAREL_QUERY_TU(iVar1, 10, -1, false, -1, __LIB_0__::func_33(iParam0));
			if (iVar11 > iVar10)
			{
				FILES::GET_SHOP_PED_QUERY_COMPONENT(iVar10, &Var9);
				Global_2883588 = Var9.f_1;
				Global_2883589 = Var9.f_0;
				func_88(&(Global_78130[0 /*14*/]), iParam0, iParam1, &(Var9.f_9), Var9.f_3, Var9.f_4, Var9.f_5, FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Var9.f_1, joaat("OUTFIT_ONLY"), 0), -1, 2, Var9.f_1 != 0);
				return;
			}
		}
	}
}

void func_99(int iParam0)//Position - 0xEC32
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 7;
	Global_78130[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		default:
			func_95(iVar7, iParam0, 1, -1);
			return;
			break;
	}
	func_88(&(Global_78130[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_102(int iParam0)//Position - 0xF0CE
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 9;
	Global_78130[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 1;
			break;
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 2;
			break;
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 3;
			break;
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			break;
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 9:
			StringCopy(&Var2, "SPEC2_P0_08_0" /* GXT: Red Wrestler Mask */, 16);
			iVar3 = 6;
			iVar4 = 0;
			iVar1 = 125;
			break;
		case 10:
			StringCopy(&Var2, "SPEC2_P0_08_1" /* GXT: Green Wrestler Mask */, 16);
			iVar3 = 6;
			iVar4 = 1;
			iVar1 = 150;
			break;
		case 11:
			StringCopy(&Var2, "SPEC2_P0_08_2" /* GXT: Patriot Wrestler Mask */, 16);
			iVar3 = 6;
			iVar4 = 2;
			iVar1 = 175;
			break;
		case 12:
			StringCopy(&Var2, "SPEC2_P0_08_3" /* GXT: Domino Wrestler Mask */, 16);
			iVar3 = 6;
			iVar4 = 3;
			iVar1 = 85;
			break;
		case 13:
			StringCopy(&Var2, "SPEC2_P0_08_4" /* GXT: Gray Wrestler Mask */, 16);
			iVar3 = 6;
			iVar4 = 4;
			iVar1 = 150;
			break;
		case 14:
			StringCopy(&Var2, "SPEC2_P0_08_5" /* GXT: Phoenix Wrestler Mask */, 16);
			iVar3 = 6;
			iVar4 = 5;
			iVar1 = 175;
			break;
		case 15:
			StringCopy(&Var2, "PROPS_P1_H8_0" /* GXT: Green Monster Mask */, 16);
			iVar3 = 7;
			iVar4 = 0;
			iVar1 = 270;
			break;
		case 16:
			StringCopy(&Var2, "PROPS_P1_H8_1" /* GXT: Red Monster Mask */, 16);
			iVar3 = 7;
			iVar4 = 1;
			iVar1 = 270;
			break;
		default:
			func_95(iVar7, iParam0, 17, -1);
			return;
			break;
	}
	func_88(&(Global_78130[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_103(int iParam0)//Position - 0xF2D6
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 8;
	Global_78130[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "SPEC_P2_0_0" /* GXT: Black Digital Watch */, 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		case 1:
			StringCopy(&Var2, "SPEC_P2_0_1" /* GXT: White Digital Watch */, 16);
			iVar3 = 0;
			iVar4 = 1;
			break;
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 0;
			break;
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 13;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 14;
			iVar4 = 0;
			break;
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 15;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 16;
			iVar4 = 0;
			bVar0 = true;
			break;
		default:
			func_95(iVar7, iParam0, 18, -1);
			return;
			break;
	}
	func_88(&(Global_78130[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_104(int iParam0)//Position - 0xF4F6
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 5;
	Global_78130[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 1;
			bVar0 = true;
			break;
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			break;
		default:
			func_95(iVar7, iParam0, 7, -1);
			return;
			break;
	}
	func_88(&(Global_78130[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_105(int iParam0)//Position - 0xF5FF
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 6;
	Global_78130[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "FEET_P2_0_0" /* GXT: Black Chukka Boots */, 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		case 1:
			StringCopy(&Var2, "FEET_P2_0_1" /* GXT: Snakeskin Chukka Boots */, 16);
			iVar3 = 0;
			iVar4 = 1;
			iVar1 = 22;
			break;
		case 2:
			StringCopy(&Var2, "FEET_P2_0_2" /* GXT: Gray Chukka Boots */, 16);
			iVar3 = 0;
			iVar4 = 2;
			iVar1 = 45;
			break;
		case 3:
			StringCopy(&Var2, "FEET_P2_0_3" /* GXT: Brown Chukka Boots */, 16);
			iVar3 = 0;
			iVar4 = 3;
			iVar1 = 65;
			break;
		case 4:
			StringCopy(&Var2, "FEET_P2_0_4" /* GXT: Crocodile Skin Boots */, 16);
			iVar3 = 0;
			iVar4 = 4;
			iVar1 = 58;
			break;
		case 5:
			StringCopy(&Var2, "FEET_P2_0_5" /* GXT: Cowboy Boots */, 16);
			iVar3 = 0;
			iVar4 = 5;
			iVar1 = 72;
			break;
		case 6:
			StringCopy(&Var2, "FEET_P2_0_6" /* GXT: Yellow Reptile Skin Boots */, 16);
			iVar3 = 0;
			iVar4 = 6;
			iVar1 = 68;
			break;
		case 7:
			StringCopy(&Var2, "FEET_P2_0_7" /* GXT: Reptile Skin Boots */, 16);
			iVar3 = 0;
			iVar4 = 7;
			iVar1 = 60;
			break;
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 12:
			StringCopy(&Var2, "FEET_P2_5_0" /* GXT: Work Boots */, 16);
			iVar3 = 5;
			iVar4 = 0;
			break;
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 15:
			StringCopy(&Var2, "FEET_P2_8_0" /* GXT: Dressy Shoes */, 16);
			iVar3 = 8;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 16:
			StringCopy(&Var2, "FEET_P2_9_0" /* GXT: Black Leather Loafers */, 16);
			iVar3 = 9;
			iVar4 = 0;
			break;
		case 17:
			StringCopy(&Var2, "FEET_P2_9_1" /* GXT: Gray Leather Loafers */, 16);
			iVar3 = 9;
			iVar4 = 1;
			iVar1 = 680;
			break;
		case 18:
			StringCopy(&Var2, "FEET_P2_9_2" /* GXT: Cream Leather Loafers */, 16);
			iVar3 = 9;
			iVar4 = 2;
			iVar1 = 650;
			break;
		case 19:
			StringCopy(&Var2, "FEET_P2_9_3" /* GXT: Brown Leather Loafers */, 16);
			iVar3 = 9;
			iVar4 = 3;
			iVar1 = 670;
			break;
		case 20:
			StringCopy(&Var2, "FEET_P2_9_4" /* GXT: White Leather Loafers */, 16);
			iVar3 = 9;
			iVar4 = 4;
			iVar1 = 700;
			break;
		case 21:
			StringCopy(&Var2, "FEET_P2_9_5" /* GXT: Russet Leather Loafers */, 16);
			iVar3 = 9;
			iVar4 = 5;
			iVar1 = 680;
			break;
		case 22:
			StringCopy(&Var2, "FEET_P2_9_6" /* GXT: White Snakeskin Loafers */, 16);
			iVar3 = 9;
			iVar4 = 6;
			iVar1 = 720;
			break;
		case 23:
			StringCopy(&Var2, "FEET_P2_9_7" /* GXT: Rattlesnake Loafers */, 16);
			iVar3 = 9;
			iVar4 = 7;
			iVar1 = 740;
			break;
		case 24:
			StringCopy(&Var2, "FEET_P2_9_8" /* GXT: Brown Snakeskin Loafers */, 16);
			iVar3 = 9;
			iVar4 = 8;
			iVar1 = 760;
			break;
		case 25:
			StringCopy(&Var2, "FEET_P2_9_9" /* GXT: Zebra Two-Tone Loafers */, 16);
			iVar3 = 9;
			iVar4 = 9;
			iVar1 = 780;
			break;
		case 26:
			StringCopy(&Var2, "FEET_P2_9_10" /* GXT: Pale Reptile Loafers */, 16);
			iVar3 = 9;
			iVar4 = 10;
			iVar1 = 750;
			break;
		case 27:
			StringCopy(&Var2, "FEET_P2_9_11" /* GXT: Tan Alligator Loafers */, 16);
			iVar3 = 9;
			iVar4 = 11;
			iVar1 = 700;
			break;
		case 28:
			StringCopy(&Var2, "FEET_P2_10_0" /* GXT: Chestnut Boots */, 16);
			iVar3 = 10;
			iVar4 = 0;
			break;
		case 29:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 30:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 13;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 32:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 14;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 33:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 15;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 34:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 16;
			iVar4 = 0;
			break;
		case 35:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 17;
			iVar4 = 0;
			break;
		case 36:
			StringCopy(&Var2, "FEET_P2_18_0" /* GXT: All Black Oxfords */, 16);
			iVar3 = 18;
			iVar4 = 0;
			iVar1 = 790;
			break;
		case 37:
			StringCopy(&Var2, "FEET_P2_18_1" /* GXT: Chocolate Oxfords */, 16);
			iVar3 = 18;
			iVar4 = 1;
			iVar1 = 750;
			break;
		case 38:
			StringCopy(&Var2, "FEET_P2_18_2" /* GXT: Chestnut Oxfords */, 16);
			iVar3 = 18;
			iVar4 = 2;
			iVar1 = 860;
			break;
		case 39:
			StringCopy(&Var2, "FEET_P2_18_3" /* GXT: Tan Oxfords */, 16);
			iVar3 = 18;
			iVar4 = 3;
			iVar1 = 750;
			break;
		case 40:
			StringCopy(&Var2, "FEET_P2_18_4" /* GXT: White Oxfords */, 16);
			iVar3 = 18;
			iVar4 = 4;
			iVar1 = 790;
			break;
		case 41:
			StringCopy(&Var2, "FEET_P2_18_5" /* GXT: Ash Oxfords */, 16);
			iVar3 = 18;
			iVar4 = 5;
			iVar1 = 840;
			break;
		case 42:
			StringCopy(&Var2, "FEET_P2_18_6" /* GXT: Gray Two-Tone Oxfords */, 16);
			iVar3 = 18;
			iVar4 = 6;
			iVar1 = 820;
			break;
		case 43:
			StringCopy(&Var2, "FEET_P2_18_7" /* GXT: Beige Oxfords */, 16);
			iVar3 = 18;
			iVar4 = 7;
			iVar1 = 800;
			break;
		case 44:
			StringCopy(&Var2, "FEET_P2_18_8" /* GXT: Topaz Oxfords */, 16);
			iVar3 = 18;
			iVar4 = 8;
			iVar1 = 850;
			break;
		case 45:
			StringCopy(&Var2, "FEET_P2_18_9" /* GXT: Black Oxfords */, 16);
			iVar3 = 18;
			iVar4 = 9;
			iVar1 = 870;
			break;
		case 46:
			StringCopy(&Var2, "FEET_P2_18_10" /* GXT: Lime Oxfords */, 16);
			iVar3 = 18;
			iVar4 = 10;
			iVar1 = 720;
			break;
		case 47:
			StringCopy(&Var2, "FEET_P2_18_11" /* GXT: Hawthorn Oxfords */, 16);
			iVar3 = 18;
			iVar4 = 11;
			iVar1 = 740;
			break;
		case 48:
			StringCopy(&Var2, "FEET_P2_18_12" /* GXT: Coffee Oxfords */, 16);
			iVar3 = 18;
			iVar4 = 12;
			iVar1 = 800;
			break;
		case 49:
			StringCopy(&Var2, "FEET_P2_18_13" /* GXT: Gray Oxfords */, 16);
			iVar3 = 18;
			iVar4 = 13;
			iVar1 = 750;
			break;
		case 50:
			StringCopy(&Var2, "FEET_P2_18_14" /* GXT: Cream Oxfords */, 16);
			iVar3 = 18;
			iVar4 = 14;
			iVar1 = 770;
			break;
		case 51:
			StringCopy(&Var2, "FEET_P2_18_15" /* GXT: Navy Oxfords */, 16);
			iVar3 = 18;
			iVar4 = 15;
			iVar1 = 860;
			break;
		case 52:
			StringCopy(&Var2, "FEET_P2_19_0" /* GXT: Black Slip-Ons */, 16);
			iVar3 = 19;
			iVar4 = 0;
			iVar1 = 850;
			break;
		case 53:
			StringCopy(&Var2, "FEET_P2_19_1" /* GXT: Red Slip-Ons */, 16);
			iVar3 = 19;
			iVar4 = 1;
			iVar1 = 800;
			break;
		case 54:
			StringCopy(&Var2, "FEET_P2_19_2" /* GXT: Brown Slip-Ons */, 16);
			iVar3 = 19;
			iVar4 = 2;
			iVar1 = 780;
			break;
		case 55:
			StringCopy(&Var2, "FEET_P2_19_3" /* GXT: Green Stripe Slip-Ons */, 16);
			iVar3 = 19;
			iVar4 = 3;
			iVar1 = 890;
			break;
		case 56:
			StringCopy(&Var2, "FEET_P2_19_4" /* GXT: Green Slip-Ons */, 16);
			iVar3 = 19;
			iVar4 = 4;
			iVar1 = 820;
			break;
		case 57:
			StringCopy(&Var2, "FEET_P2_19_5" /* GXT: Copper Slip-Ons */, 16);
			iVar3 = 19;
			iVar4 = 5;
			iVar1 = 840;
			break;
		case 58:
			StringCopy(&Var2, "FEET_P2_19_6" /* GXT: Copper Two-Tone Slip-Ons */, 16);
			iVar3 = 19;
			iVar4 = 6;
			iVar1 = 870;
			break;
		case 59:
			StringCopy(&Var2, "FEET_P2_19_7" /* GXT: Navy Slip-Ons */, 16);
			iVar3 = 19;
			iVar4 = 7;
			iVar1 = 930;
			break;
		case 60:
			StringCopy(&Var2, "FEET_P2_19_8" /* GXT: Blue Slip-Ons */, 16);
			iVar3 = 19;
			iVar4 = 8;
			iVar1 = 880;
			break;
		case 61:
			StringCopy(&Var2, "FEET_P2_19_9" /* GXT: Beige Slip-Ons */, 16);
			iVar3 = 19;
			iVar4 = 9;
			iVar1 = 900;
			break;
		case 62:
			StringCopy(&Var2, "FEET_P2_19_10" /* GXT: White Slip-Ons */, 16);
			iVar3 = 19;
			iVar4 = 10;
			iVar1 = 920;
			break;
		case 63:
			StringCopy(&Var2, "FEET_P2_19_11" /* GXT: Tan Slip-Ons */, 16);
			iVar3 = 19;
			iVar4 = 11;
			iVar1 = 970;
			break;
		case 64:
			StringCopy(&Var2, "FEET_P2_19_12" /* GXT: Black Snakeskin Slip-Ons */, 16);
			iVar3 = 19;
			iVar4 = 12;
			iVar1 = 990;
			break;
		case 65:
			StringCopy(&Var2, "FEET_P2_19_13" /* GXT: Two-Tone Slip-Ons */, 16);
			iVar3 = 19;
			iVar4 = 13;
			iVar1 = 960;
			break;
		case 66:
			StringCopy(&Var2, "FEET_P2_19_14" /* GXT: Brown Snakeskin Slip-Ons */, 16);
			iVar3 = 19;
			iVar4 = 14;
			iVar1 = 980;
			break;
		case 67:
			StringCopy(&Var2, "FEET_P2_19_15" /* GXT: Gray Slip-Ons */, 16);
			iVar3 = 19;
			iVar4 = 15;
			iVar1 = 950;
			break;
		case 68:
			StringCopy(&Var2, "FEET_P2_20_0" /* GXT: Brown Wingtips */, 16);
			iVar3 = 20;
			iVar4 = 0;
			iVar1 = 110;
			break;
		case 69:
			StringCopy(&Var2, "FEET_P2_20_1" /* GXT: Navy Wingtips */, 16);
			iVar3 = 20;
			iVar4 = 1;
			iVar1 = 115;
			break;
		case 70:
			StringCopy(&Var2, "FEET_P2_20_2" /* GXT: Coffee Wingtips */, 16);
			iVar3 = 20;
			iVar4 = 2;
			iVar1 = 120;
			break;
		case 71:
			StringCopy(&Var2, "FEET_P2_20_3" /* GXT: Burgundy Wingtips */, 16);
			iVar3 = 20;
			iVar4 = 3;
			iVar1 = 110;
			break;
		case 72:
			StringCopy(&Var2, "FEET_P2_20_4" /* GXT: Blue Wingtips */, 16);
			iVar3 = 20;
			iVar4 = 4;
			iVar1 = 125;
			break;
		case 73:
			StringCopy(&Var2, "FEET_P2_20_5" /* GXT: Woodland Camo Wingtips */, 16);
			iVar3 = 20;
			iVar4 = 5;
			iVar1 = 128;
			break;
		case 74:
			StringCopy(&Var2, "FEET_P2_20_6" /* GXT: Black Wingtips */, 16);
			iVar3 = 20;
			iVar4 = 6;
			iVar1 = 135;
			break;
		case 75:
			StringCopy(&Var2, "FEET_P2_20_7" /* GXT: Tan Wingtips */, 16);
			iVar3 = 20;
			iVar4 = 7;
			iVar1 = 130;
			break;
		case 76:
			StringCopy(&Var2, "FEET_P2_20_8" /* GXT: Purple Wingtips */, 16);
			iVar3 = 20;
			iVar4 = 8;
			iVar1 = 145;
			break;
		case 77:
			StringCopy(&Var2, "FEET_P2_20_9" /* GXT: Brown Wingtips */, 16);
			iVar3 = 20;
			iVar4 = 9;
			iVar1 = 110;
			break;
		case 78:
			StringCopy(&Var2, "FEET_P2_20_10" /* GXT: Chocolate Wingtips */, 16);
			iVar3 = 20;
			iVar4 = 10;
			iVar1 = 120;
			break;
		case 79:
			StringCopy(&Var2, "FEET_P2_20_11" /* GXT: Green Wingtips */, 16);
			iVar3 = 20;
			iVar4 = 11;
			iVar1 = 150;
			break;
		case 80:
			StringCopy(&Var2, "FEET_P2_20_12" /* GXT: Ash Wingtips */, 16);
			iVar3 = 20;
			iVar4 = 12;
			iVar1 = 125;
			break;
		case 81:
			StringCopy(&Var2, "FEET_P2_20_13" /* GXT: Olive Wingtips */, 16);
			iVar3 = 20;
			iVar4 = 13;
			iVar1 = 120;
			break;
		case 82:
			StringCopy(&Var2, "FEET_P2_20_14" /* GXT: Two-Tone Wingtips */, 16);
			iVar3 = 20;
			iVar4 = 14;
			iVar1 = 130;
			break;
		case 83:
			StringCopy(&Var2, "FEET_P2_20_15" /* GXT: Yellow Wingtips */, 16);
			iVar3 = 20;
			iVar4 = 15;
			iVar1 = 110;
			break;
		default:
			func_95(iVar7, iParam0, 84, -1);
			return;
			break;
	}
	func_88(&(Global_78130[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_106(int iParam0)//Position - 0xFF91
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 4;
	Global_78130[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "LEGS_P2_0_0" /* GXT: Blue Jeans */, 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		case 1:
			StringCopy(&Var2, "LEGS_P2_0_1" /* GXT: Dirty Blue Jeans */, 16);
			iVar3 = 0;
			iVar4 = 1;
			iVar1 = 95;
			break;
		case 2:
			StringCopy(&Var2, "LEGS_P2_0_2" /* GXT: Navy Jeans */, 16);
			iVar3 = 0;
			iVar4 = 2;
			iVar1 = 129;
			break;
		case 3:
			StringCopy(&Var2, "LEGS_P2_0_3" /* GXT: Faded Jeans */, 16);
			iVar3 = 0;
			iVar4 = 3;
			iVar1 = 115;
			break;
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 1;
			bVar0 = true;
			break;
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 2;
			bVar0 = true;
			break;
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 3;
			bVar0 = true;
			break;
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 4;
			bVar0 = true;
			break;
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 18:
			StringCopy(&Var2, "LEGS_P2_11_0" /* GXT: Black Golf Pants */, 16);
			iVar3 = 11;
			iVar4 = 0;
			break;
		case 19:
			StringCopy(&Var2, "LEGS_P2_11_1" /* GXT: Russet Plaid Golf Pants */, 16);
			iVar3 = 11;
			iVar4 = 1;
			iVar1 = 750;
			break;
		case 20:
			StringCopy(&Var2, "LEGS_P2_11_2" /* GXT: White Golf Pants */, 16);
			iVar3 = 11;
			iVar4 = 2;
			iVar1 = 650;
			break;
		case 21:
			StringCopy(&Var2, "LEGS_P2_11_3" /* GXT: Maroon Golf Pants */, 16);
			iVar3 = 11;
			iVar4 = 3;
			iVar1 = 850;
			break;
		case 22:
			StringCopy(&Var2, "LEGS_P2_11_4" /* GXT: Lobster Golf Pants */, 16);
			iVar3 = 11;
			iVar4 = 4;
			iVar1 = 850;
			break;
		case 23:
			StringCopy(&Var2, "LEGS_P2_11_5" /* GXT: Stone Plaid Golf Pants */, 16);
			iVar3 = 11;
			iVar4 = 5;
			iVar1 = 750;
			break;
		case 24:
			StringCopy(&Var2, "LEGS_P2_11_6" /* GXT: Pink Plaid Golf Pants */, 16);
			iVar3 = 11;
			iVar4 = 6;
			iVar1 = 690;
			break;
		case 25:
			StringCopy(&Var2, "LEGS_P2_11_7" /* GXT: Mint Plaid Golf Pants */, 16);
			iVar3 = 11;
			iVar4 = 7;
			iVar1 = 820;
			break;
		case 26:
			StringCopy(&Var2, "LEGS_P2_11_8" /* GXT: Brown Plaid Golf Pants */, 16);
			iVar3 = 11;
			iVar4 = 8;
			iVar1 = 650;
			break;
		case 27:
			StringCopy(&Var2, "LEGS_P2_11_9" /* GXT: Pale Blue Plaid Golf Pants */, 16);
			iVar3 = 11;
			iVar4 = 9;
			iVar1 = 690;
			break;
		case 28:
			StringCopy(&Var2, "LEGS_P2_11_10" /* GXT: Beige Plaid Golf Pants */, 16);
			iVar3 = 11;
			iVar4 = 10;
			iVar1 = 690;
			break;
		case 29:
			StringCopy(&Var2, "LEGS_P2_11_11" /* GXT: Aqua Plaid Golf Pants */, 16);
			iVar3 = 11;
			iVar4 = 11;
			iVar1 = 820;
			break;
		case 30:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 13;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 32:
			StringCopy(&Var2, "LEGS_P2_14_0" /* GXT: Black Cargo Pants */, 16);
			iVar3 = 14;
			iVar4 = 0;
			break;
		case 33:
			StringCopy(&Var2, "LEGS_P2_15_0" /* GXT: White Shorts */, 16);
			iVar3 = 15;
			iVar4 = 0;
			break;
		case 34:
			StringCopy(&Var2, "LEGS_P2_16_0" /* GXT: Pink Sweatpants */, 16);
			iVar3 = 16;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 35:
			StringCopy(&Var2, "LEGS_P2_17_0" /* GXT: Brown Work Pants */, 16);
			iVar3 = 17;
			iVar4 = 0;
			iVar1 = 58;
			break;
		case 36:
			StringCopy(&Var2, "LEGS_P2_17_1" /* GXT: Charcoal Work Pants */, 16);
			iVar3 = 17;
			iVar4 = 1;
			iVar1 = 68;
			break;
		case 37:
			StringCopy(&Var2, "LEGS_P2_17_2" /* GXT: Gray Work Pants */, 16);
			iVar3 = 17;
			iVar4 = 2;
			iVar1 = 65;
			break;
		case 38:
			StringCopy(&Var2, "LEGS_P2_17_3" /* GXT: Tan Work Pants */, 16);
			iVar3 = 17;
			iVar4 = 3;
			iVar1 = 60;
			break;
		case 39:
			StringCopy(&Var2, "LEGS_P2_17_4" /* GXT: Blue Work Pants */, 16);
			iVar3 = 17;
			iVar4 = 4;
			iVar1 = 65;
			break;
		case 40:
			StringCopy(&Var2, "LEGS_P2_17_5" /* GXT: Ash Work Pants */, 16);
			iVar3 = 17;
			iVar4 = 5;
			iVar1 = 63;
			break;
		case 41:
			StringCopy(&Var2, "LEGS_P2_17_6" /* GXT: White Work Pants */, 16);
			iVar3 = 17;
			iVar4 = 6;
			iVar1 = 60;
			break;
		case 42:
			StringCopy(&Var2, "LEGS_P2_17_7" /* GXT: Beige Work Pants */, 16);
			iVar3 = 17;
			iVar4 = 7;
			iVar1 = 58;
			break;
		case 43:
			StringCopy(&Var2, "LEGS_P2_18_0" /* GXT: Tan Cargo Pants */, 16);
			iVar3 = 18;
			iVar4 = 0;
			break;
		case 44:
			StringCopy(&Var2, "LEGS_P2_18_1" /* GXT: Cream Cargo Pants */, 16);
			iVar3 = 18;
			iVar4 = 1;
			break;
		case 45:
			StringCopy(&Var2, "LEGS_P2_18_2" /* GXT: Silver Cargo Pants */, 16);
			iVar3 = 18;
			iVar4 = 2;
			iVar1 = 99;
			break;
		case 46:
			StringCopy(&Var2, "LEGS_P2_18_3" /* GXT: Gray Cargo Pants */, 16);
			iVar3 = 18;
			iVar4 = 3;
			iVar1 = 105;
			break;
		case 47:
			StringCopy(&Var2, "LEGS_P2_18_4" /* GXT: Charcoal Cargo Pants */, 16);
			iVar3 = 18;
			iVar4 = 4;
			iVar1 = 110;
			break;
		case 48:
			StringCopy(&Var2, "LEGS_P2_18_5" /* GXT: Green Cargo Pants */, 16);
			iVar3 = 18;
			iVar4 = 5;
			iVar1 = 110;
			break;
		case 49:
			StringCopy(&Var2, "LEGS_P2_18_6" /* GXT: White Cargo Pants */, 16);
			iVar3 = 18;
			iVar4 = 6;
			iVar1 = 99;
			break;
		case 50:
			StringCopy(&Var2, "LEGS_P2_18_7" /* GXT: Urban Camo Cargo Pants */, 16);
			iVar3 = 18;
			iVar4 = 7;
			iVar1 = 110;
			break;
		case 51:
			StringCopy(&Var2, "LEGS_P2_18_8" /* GXT: Desert Camo Cargo Pants */, 16);
			iVar3 = 18;
			iVar4 = 8;
			iVar1 = 110;
			break;
		case 52:
			StringCopy(&Var2, "LEGS_P2_18_9" /* GXT: Field Camo Cargo Pants */, 16);
			iVar3 = 18;
			iVar4 = 9;
			iVar1 = 105;
			break;
		case 53:
			StringCopy(&Var2, "LEGS_P2_18_10" /* GXT: Forest Camo Cargo Pants */, 16);
			iVar3 = 18;
			iVar4 = 10;
			iVar1 = 105;
			break;
		case 54:
			StringCopy(&Var2, "LEGS_P2_19_0" /* GXT: Black Shorts */, 16);
			iVar3 = 19;
			iVar4 = 0;
			iVar1 = 15;
			break;
		case 55:
			StringCopy(&Var2, "LEGS_P2_19_1" /* GXT: Pale Blue Shorts */, 16);
			iVar3 = 19;
			iVar4 = 1;
			iVar1 = 15;
			break;
		case 56:
			StringCopy(&Var2, "LEGS_P2_19_2" /* GXT: Orange Shorts */, 16);
			iVar3 = 19;
			iVar4 = 2;
			iVar1 = 15;
			break;
		case 57:
			StringCopy(&Var2, "LEGS_P2_19_3" /* GXT: Blue Shorts */, 16);
			iVar3 = 19;
			iVar4 = 3;
			iVar1 = 15;
			break;
		case 58:
			StringCopy(&Var2, "LEGS_P2_19_4" /* GXT: Slate Shorts */, 16);
			iVar3 = 19;
			iVar4 = 4;
			iVar1 = 15;
			break;
		case 59:
			StringCopy(&Var2, "LEGS_P2_19_5" /* GXT: Green Shorts */, 16);
			iVar3 = 19;
			iVar4 = 5;
			iVar1 = 15;
			break;
		case 60:
			StringCopy(&Var2, "LEGS_P2_19_6" /* GXT: Crimson Shorts */, 16);
			iVar3 = 19;
			iVar4 = 6;
			iVar1 = 15;
			break;
		case 61:
			StringCopy(&Var2, "LEGS_P2_19_7" /* GXT: Pale Blue Stripe Shorts */, 16);
			iVar3 = 19;
			iVar4 = 7;
			iVar1 = 15;
			break;
		case 62:
			StringCopy(&Var2, "LEGS_P2_20_0" /* GXT: Gray Pants */, 16);
			iVar3 = 20;
			iVar4 = 0;
			iVar1 = 600;
			break;
		case 63:
			StringCopy(&Var2, "LEGS_P2_20_1" /* GXT: Khaki Pants */, 16);
			iVar3 = 20;
			iVar4 = 1;
			iVar1 = 600;
			break;
		case 64:
			StringCopy(&Var2, "LEGS_P2_20_2" /* GXT: Charcoal Pants */, 16);
			iVar3 = 20;
			iVar4 = 2;
			iVar1 = 600;
			break;
		case 65:
			StringCopy(&Var2, "LEGS_P2_20_3" /* GXT: Cream Pants */, 16);
			iVar3 = 20;
			iVar4 = 3;
			iVar1 = 600;
			break;
		case 66:
			StringCopy(&Var2, "LEGS_P2_20_4" /* GXT: Stone Pants */, 16);
			iVar3 = 20;
			iVar4 = 4;
			iVar1 = 600;
			break;
		case 67:
			StringCopy(&Var2, "LEGS_P2_20_5" /* GXT: Black Pants */, 16);
			iVar3 = 20;
			iVar4 = 5;
			iVar1 = 600;
			break;
		case 68:
			StringCopy(&Var2, "LEGS_P2_20_6" /* GXT: Ash Pants */, 16);
			iVar3 = 20;
			iVar4 = 6;
			iVar1 = 600;
			break;
		case 69:
			StringCopy(&Var2, "LEGS_P2_20_7" /* GXT: Beige Pants */, 16);
			iVar3 = 20;
			iVar4 = 7;
			iVar1 = 600;
			break;
		case 70:
			StringCopy(&Var2, "LEGS_P2_20_8" /* GXT: Brown Pants */, 16);
			iVar3 = 20;
			iVar4 = 8;
			iVar1 = 600;
			break;
		case 71:
			StringCopy(&Var2, "LEGS_P2_21_0" /* GXT: Beige Cheap Pants */, 16);
			iVar3 = 21;
			iVar4 = 0;
			iVar1 = 80;
			break;
		case 72:
			StringCopy(&Var2, "LEGS_P2_21_1" /* GXT: Blue Cheap Pants */, 16);
			iVar3 = 21;
			iVar4 = 1;
			iVar1 = 80;
			break;
		case 73:
			StringCopy(&Var2, "LEGS_P2_21_2" /* GXT: Brown Plaid Cheap Pants */, 16);
			iVar3 = 21;
			iVar4 = 2;
			iVar1 = 80;
			break;
		case 74:
			StringCopy(&Var2, "LEGS_P2_21_3" /* GXT: Burgundy Cheap Pants */, 16);
			iVar3 = 21;
			iVar4 = 3;
			iVar1 = 80;
			break;
		case 75:
			StringCopy(&Var2, "LEGS_P2_21_4" /* GXT: Murky Plaid Cheap Pants */, 16);
			iVar3 = 21;
			iVar4 = 4;
			iVar1 = 80;
			break;
		case 76:
			StringCopy(&Var2, "LEGS_P2_21_5" /* GXT: Mint Plaid Cheap Pants */, 16);
			iVar3 = 21;
			iVar4 = 5;
			iVar1 = 80;
			break;
		case 77:
			StringCopy(&Var2, "LEGS_P2_21_6" /* GXT: Green Plaid Cheap Pants */, 16);
			iVar3 = 21;
			iVar4 = 6;
			iVar1 = 80;
			break;
		case 78:
			StringCopy(&Var2, "LEGS_P2_21_7" /* GXT: Blue-Gray Cheap Pants */, 16);
			iVar3 = 21;
			iVar4 = 7;
			iVar1 = 80;
			break;
		case 79:
			StringCopy(&Var2, "LEGS_P2_21_8" /* GXT: Caramel Cheap Pants */, 16);
			iVar3 = 21;
			iVar4 = 8;
			iVar1 = 80;
			break;
		case 80:
			StringCopy(&Var2, "LEGS_P2_21_9" /* GXT: Mocha Cheap Pants */, 16);
			iVar3 = 21;
			iVar4 = 9;
			iVar1 = 80;
			break;
		case 81:
			StringCopy(&Var2, "LEGS_P2_22_0" /* GXT: White Briefs */, 16);
			iVar3 = 22;
			iVar4 = 0;
			break;
		case 82:
			StringCopy(&Var2, "LEGS_P2_22_1" /* GXT: Green Briefs */, 16);
			iVar3 = 22;
			iVar4 = 1;
			iVar1 = 12;
			break;
		case 83:
			StringCopy(&Var2, "LEGS_P2_22_2" /* GXT: Gray Briefs */, 16);
			iVar3 = 22;
			iVar4 = 2;
			iVar1 = 12;
			break;
		case 84:
			StringCopy(&Var2, "LEGS_P2_22_3" /* GXT: Leopardskin Briefs */, 16);
			iVar3 = 22;
			iVar4 = 3;
			iVar1 = 22;
			break;
		case 85:
			StringCopy(&Var2, "LEGS_P2_22_4" /* GXT: Impotent Rage Briefs */, 16);
			iVar3 = 22;
			iVar4 = 4;
			iVar1 = 18;
			break;
		case 86:
			StringCopy(&Var2, "LEGS_P2_22_5" /* GXT: Pink Leopardskin Briefs */, 16);
			iVar3 = 22;
			iVar4 = 5;
			iVar1 = 20;
			break;
		case 87:
			StringCopy(&Var2, "LEGS_P2_22_6" /* GXT: Space Monkey Briefs 1 */, 16);
			iVar3 = 22;
			iVar4 = 6;
			iVar1 = 30;
			break;
		case 88:
			StringCopy(&Var2, "LEGS_P2_22_7" /* GXT: Space Monkey Briefs 2 */, 16);
			iVar3 = 22;
			iVar4 = 7;
			iVar1 = 30;
			break;
		case 89:
			StringCopy(&Var2, "LEGS_P2_22_8" /* GXT: Space Monkey Briefs 3 */, 16);
			iVar3 = 22;
			iVar4 = 8;
			iVar1 = 30;
			break;
		case 90:
			StringCopy(&Var2, "LEGS_P2_22_9" /* GXT: Space Monkey Briefs 4 */, 16);
			iVar3 = 22;
			iVar4 = 9;
			iVar1 = 30;
			break;
		case 91:
			StringCopy(&Var2, "LEGS_P2_23_0" /* GXT: Sweatpants */, 16);
			iVar3 = 23;
			iVar4 = 0;
			break;
		case 92:
			StringCopy(&Var2, "LEGS_P2_24_0" /* GXT: Brown Tuxedo Pants */, 16);
			iVar3 = 24;
			iVar4 = 0;
			break;
		case 93:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 25;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 94:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 26;
			iVar4 = 0;
			break;
		case 95:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 26;
			iVar4 = 1;
			break;
		case 96:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 26;
			iVar4 = 2;
			break;
		case 97:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 26;
			iVar4 = 3;
			break;
		case 98:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 26;
			iVar4 = 4;
			break;
		case 99:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 26;
			iVar4 = 5;
			break;
		case 100:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 26;
			iVar4 = 6;
			break;
		case 101:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 26;
			iVar4 = 7;
			break;
		case 102:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 26;
			iVar4 = 8;
			break;
		case 103:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 26;
			iVar4 = 9;
			break;
		default:
			func_95(iVar7, iParam0, 104, -1);
			return;
			break;
	}
	func_88(&(Global_78130[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_107(int iParam0)//Position - 0x10B31
{
	if (iParam0 < 136)
	{
		func_109(iParam0);
	}
	else
	{
		func_108(iParam0);
	}
	if (Global_78130[0 /*14*/].f_2 == -1)
	{
		func_95(3, iParam0, 242, -1);
	}
}

void func_108(int iParam0)//Position - 0x10B66
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 3;
	Global_78130[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 136:
			StringCopy(&Var2, "TORSO_P2_21_0" /* GXT: Peyton Blue Blouson */, 16);
			iVar3 = 21;
			iVar4 = 0;
			iVar1 = 32;
			break;
		case 137:
			StringCopy(&Var2, "TORSO_P2_21_1" /* GXT: Overlooked Red Blouson */, 16);
			iVar3 = 21;
			iVar4 = 1;
			iVar1 = 39;
			break;
		case 138:
			StringCopy(&Var2, "TORSO_P2_21_2" /* GXT: Natural Blouson */, 16);
			iVar3 = 21;
			iVar4 = 2;
			iVar1 = 40;
			break;
		case 139:
			StringCopy(&Var2, "TORSO_P2_21_3" /* GXT: Sky Blue Blouson */, 16);
			iVar3 = 21;
			iVar4 = 3;
			iVar1 = 42;
			break;
		case 140:
			StringCopy(&Var2, "TORSO_P2_21_4" /* GXT: Deep Green Blouson */, 16);
			iVar3 = 21;
			iVar4 = 4;
			iVar1 = 45;
			break;
		case 141:
			StringCopy(&Var2, "TORSO_P2_21_5" /* GXT: Champagne Driver Blouson */, 16);
			iVar3 = 21;
			iVar4 = 5;
			iVar1 = 48;
			break;
		case 142:
			StringCopy(&Var2, "TORSO_P2_21_6" /* GXT: Snakeskin Blouson */, 16);
			iVar3 = 21;
			iVar4 = 6;
			iVar1 = 52;
			break;
		case 143:
			StringCopy(&Var2, "TORSO_P2_21_7" /* GXT: Desert Brown Blouson */, 16);
			iVar3 = 21;
			iVar4 = 7;
			iVar1 = 55;
			break;
		case 144:
			StringCopy(&Var2, "TORSO_P2_22_0" /* GXT: Black Striped Leather Jacket */, 16);
			iVar3 = 22;
			iVar4 = 0;
			iVar1 = 390;
			break;
		case 145:
			StringCopy(&Var2, "TORSO_P2_22_1" /* GXT: Black Leather Jacket */, 16);
			iVar3 = 22;
			iVar4 = 1;
			iVar1 = 390;
			break;
		case 146:
			StringCopy(&Var2, "TORSO_P2_22_2" /* GXT: Chestnut Leather Jacket */, 16);
			iVar3 = 22;
			iVar4 = 2;
			iVar1 = 560;
			break;
		case 147:
			StringCopy(&Var2, "TORSO_P2_22_3" /* GXT: Red Leather Jacket */, 16);
			iVar3 = 22;
			iVar4 = 3;
			iVar1 = 390;
			break;
		case 148:
			StringCopy(&Var2, "TORSO_P2_22_4" /* GXT: White Leather Jacket */, 16);
			iVar3 = 22;
			iVar4 = 4;
			iVar1 = 390;
			break;
		case 149:
			StringCopy(&Var2, "TORSO_P2_22_5" /* GXT: Blue Leather Jacket */, 16);
			iVar3 = 22;
			iVar4 = 5;
			iVar1 = 390;
			break;
		case 150:
			StringCopy(&Var2, "TORSO_P2_22_6" /* GXT: Lonewolf Leather Jacket */, 16);
			iVar3 = 22;
			iVar4 = 6;
			iVar1 = 560;
			break;
		case 151:
			StringCopy(&Var2, "TORSO_P2_22_7" /* GXT: Brown Leather Jacket */, 16);
			iVar3 = 22;
			iVar4 = 7;
			iVar1 = 390;
			break;
		case 152:
			StringCopy(&Var2, "TORSO_P2_22_8" /* GXT: Gray Striped Leather Jacket */, 16);
			iVar3 = 22;
			iVar4 = 8;
			iVar1 = 390;
			break;
		case 153:
			StringCopy(&Var2, "TORSO_P2_22_9" /* GXT: Gray Banded Leather Jacket */, 16);
			iVar3 = 22;
			iVar4 = 9;
			iVar1 = 390;
			break;
		case 154:
			StringCopy(&Var2, "TORSO_P2_22_10" /* GXT: Russet Leather Jacket */, 16);
			iVar3 = 22;
			iVar4 = 10;
			iVar1 = 390;
			break;
		case 155:
			StringCopy(&Var2, "TORSO_P2_22_11" /* GXT: Brown Suede Jacket */, 16);
			iVar3 = 22;
			iVar4 = 11;
			iVar1 = 3950;
			break;
		case 156:
			StringCopy(&Var2, "TORSO_P2_23_0" /* GXT: Brown Shooting Vest */, 16);
			iVar3 = 23;
			iVar4 = 0;
			iVar1 = 150;
			break;
		case 157:
			StringCopy(&Var2, "TORSO_P2_23_1" /* GXT: Woodland Shooting Vest */, 16);
			iVar3 = 23;
			iVar4 = 1;
			break;
		case 158:
			StringCopy(&Var2, "TORSO_P2_23_2" /* GXT: Taupe Shooting Vest */, 16);
			iVar3 = 23;
			iVar4 = 2;
			iVar1 = 150;
			break;
		case 159:
			StringCopy(&Var2, "TORSO_P2_23_3" /* GXT: Brown Woven Shooting Vest */, 16);
			iVar3 = 23;
			iVar4 = 3;
			iVar1 = 150;
			break;
		case 160:
			StringCopy(&Var2, "TORSO_P2_23_4" /* GXT: Field Shooting Vest */, 16);
			iVar3 = 23;
			iVar4 = 4;
			iVar1 = 160;
			break;
		case 161:
			StringCopy(&Var2, "TORSO_P2_23_5" /* GXT: Forest Shooting Vest */, 16);
			iVar3 = 23;
			iVar4 = 5;
			break;
		case 162:
			StringCopy(&Var2, "TORSO_P2_24_0" /* GXT: Yellow Tank Top */, 16);
			iVar3 = 24;
			iVar4 = 0;
			iVar1 = 19;
			break;
		case 163:
			StringCopy(&Var2, "TORSO_P2_24_1" /* GXT: Blue Birds Tank Top */, 16);
			iVar3 = 24;
			iVar4 = 1;
			iVar1 = 20;
			break;
		case 164:
			StringCopy(&Var2, "TORSO_P2_24_2" /* GXT: Orange Pattern Tank Top */, 16);
			iVar3 = 24;
			iVar4 = 2;
			iVar1 = 19;
			break;
		case 165:
			StringCopy(&Var2, "TORSO_P2_24_3" /* GXT: Blue Stars Tank Top */, 16);
			iVar3 = 24;
			iVar4 = 3;
			iVar1 = 22;
			break;
		case 166:
			StringCopy(&Var2, "TORSO_P2_24_4" /* GXT: Aqua Pattern Tank Top */, 16);
			iVar3 = 24;
			iVar4 = 4;
			iVar1 = 20;
			break;
		case 167:
			StringCopy(&Var2, "TORSO_P2_24_5" /* GXT: Degenatron Tank Top */, 16);
			iVar3 = 24;
			iVar4 = 5;
			iVar1 = 28;
			break;
		case 168:
			StringCopy(&Var2, "TORSO_P2_24_6" /* GXT: Taco Libre Tank Top */, 16);
			iVar3 = 24;
			iVar4 = 6;
			iVar1 = 28;
			break;
		case 169:
			StringCopy(&Var2, "TORSO_P2_24_7" /* GXT: Pussycat Tank Top */, 16);
			iVar3 = 24;
			iVar4 = 7;
			iVar1 = 25;
			break;
		case 170:
			StringCopy(&Var2, "TORSO_P2_24_8" /* GXT: Lemon Pattern Tank Top */, 16);
			iVar3 = 24;
			iVar4 = 8;
			iVar1 = 22;
			break;
		case 171:
			StringCopy(&Var2, "TORSO_P2_24_9" /* GXT: Charcoal Tank Top */, 16);
			iVar3 = 24;
			iVar4 = 9;
			iVar1 = 19;
			break;
		case 172:
			StringCopy(&Var2, "TORSO_P2_24_10" /* GXT: Off-White Tank Top */, 16);
			iVar3 = 24;
			iVar4 = 10;
			iVar1 = 22;
			break;
		case 173:
			StringCopy(&Var2, "TORSO_P2_24_11" /* GXT: Banded Tank Top */, 16);
			iVar3 = 24;
			iVar4 = 11;
			iVar1 = 19;
			break;
		case 174:
			StringCopy(&Var2, "TORSO_P2_24_12" /* GXT: Orange Tank Top */, 16);
			iVar3 = 24;
			iVar4 = 12;
			iVar1 = 20;
			break;
		case 175:
			StringCopy(&Var2, "TORSO_P2_24_13" /* GXT: Camo Tank Top */, 16);
			iVar3 = 24;
			iVar4 = 13;
			iVar1 = 25;
			break;
		case 176:
			StringCopy(&Var2, "TORSO_P2_24_14" /* GXT: Indigo Tank Top */, 16);
			iVar3 = 24;
			iVar4 = 14;
			iVar1 = 20;
			break;
		case 177:
			StringCopy(&Var2, "TORSO_P2_24_15" /* GXT: Liberty Cocks Tank Top */, 16);
			iVar3 = 24;
			iVar4 = 15;
			iVar1 = 28;
			break;
		case 178:
			StringCopy(&Var2, "TORSO_P2_25_0" /* GXT: Blue Two-Tone Shirt */, 16);
			iVar3 = 25;
			iVar4 = 0;
			iVar1 = 35;
			break;
		case 179:
			StringCopy(&Var2, "TORSO_P2_25_1" /* GXT: Circles Shirt */, 16);
			iVar3 = 25;
			iVar4 = 1;
			iVar1 = 40;
			break;
		case 180:
			StringCopy(&Var2, "TORSO_P2_25_2" /* GXT: Gray Two-Tone Shirt */, 16);
			iVar3 = 25;
			iVar4 = 2;
			iVar1 = 45;
			break;
		case 181:
			StringCopy(&Var2, "TORSO_P2_25_3" /* GXT: Mustard Shirt */, 16);
			iVar3 = 25;
			iVar4 = 3;
			iVar1 = 45;
			break;
		case 182:
			StringCopy(&Var2, "TORSO_P2_25_4" /* GXT: Blue Checkered Shirt */, 16);
			iVar3 = 25;
			iVar4 = 4;
			iVar1 = 49;
			break;
		case 183:
			StringCopy(&Var2, "TORSO_P2_25_5" /* GXT: Floral Shirt */, 16);
			iVar3 = 25;
			iVar4 = 5;
			iVar1 = 820;
			break;
		case 184:
			StringCopy(&Var2, "TORSO_P2_25_6" /* GXT: Beige Shirt */, 16);
			iVar3 = 25;
			iVar4 = 6;
			iVar1 = 790;
			break;
		case 185:
			StringCopy(&Var2, "TORSO_P2_25_7" /* GXT: Lavender Shirt */, 16);
			iVar3 = 25;
			iVar4 = 7;
			iVar1 = 820;
			break;
		case 186:
			StringCopy(&Var2, "TORSO_P2_25_8" /* GXT: Black Shirt */, 16);
			iVar3 = 25;
			iVar4 = 8;
			iVar1 = 929;
			break;
		case 187:
			StringCopy(&Var2, "TORSO_P2_25_9" /* GXT: Monogrammed Shirt */, 16);
			iVar3 = 25;
			iVar4 = 9;
			iVar1 = 40;
			break;
		case 188:
			StringCopy(&Var2, "TORSO_P2_25_10" /* GXT: Paisley Shirt */, 16);
			iVar3 = 25;
			iVar4 = 10;
			iVar1 = 850;
			break;
		case 189:
			StringCopy(&Var2, "TORSO_P2_25_11" /* GXT: Camel Shirt */, 16);
			iVar3 = 25;
			iVar4 = 11;
			iVar1 = 790;
			break;
		case 190:
			StringCopy(&Var2, "TORSO_P2_26_0" /* GXT: Beige Tight Jacket */, 16);
			iVar3 = 26;
			iVar4 = 0;
			break;
		case 191:
			StringCopy(&Var2, "TORSO_P2_26_1" /* GXT: Blue Tight Jacket */, 16);
			iVar3 = 26;
			iVar4 = 1;
			break;
		case 192:
			StringCopy(&Var2, "TORSO_P2_26_2" /* GXT: Brown Plaid Tight Jacket */, 16);
			iVar3 = 26;
			iVar4 = 2;
			break;
		case 193:
			StringCopy(&Var2, "TORSO_P2_26_3" /* GXT: Burgundy Tight Jacket */, 16);
			iVar3 = 26;
			iVar4 = 3;
			break;
		case 194:
			StringCopy(&Var2, "TORSO_P2_26_4" /* GXT: Murky Plaid Tight Jacket */, 16);
			iVar3 = 26;
			iVar4 = 4;
			break;
		case 195:
			StringCopy(&Var2, "TORSO_P2_26_5" /* GXT: Mint Plaid Tight Jacket */, 16);
			iVar3 = 26;
			iVar4 = 5;
			break;
		case 196:
			StringCopy(&Var2, "TORSO_P2_26_6" /* GXT: Green Plaid Tight Jacket */, 16);
			iVar3 = 26;
			iVar4 = 6;
			break;
		case 197:
			StringCopy(&Var2, "TORSO_P2_26_7" /* GXT: Blue-Gray Tight Jacket */, 16);
			iVar3 = 26;
			iVar4 = 7;
			break;
		case 198:
			StringCopy(&Var2, "TORSO_P2_26_8" /* GXT: Caramel Tight Jacket */, 16);
			iVar3 = 26;
			iVar4 = 8;
			break;
		case 199:
			StringCopy(&Var2, "TORSO_P2_26_9" /* GXT: Mocha Tight Jacket */, 16);
			iVar3 = 26;
			iVar4 = 9;
			break;
		case 200:
			StringCopy(&Var2, "TORSO_P2_27_0" /* GXT: Gray Jacket */, 16);
			iVar3 = 27;
			iVar4 = 0;
			iVar1 = 2200;
			break;
		case 201:
			StringCopy(&Var2, "TORSO_P2_27_1" /* GXT: Oatmeal Jacket */, 16);
			iVar3 = 27;
			iVar4 = 1;
			iVar1 = 2500;
			break;
		case 202:
			StringCopy(&Var2, "TORSO_P2_27_2" /* GXT: Charcoal Jacket */, 16);
			iVar3 = 27;
			iVar4 = 2;
			iVar1 = 2500;
			break;
		case 203:
			StringCopy(&Var2, "TORSO_P2_27_3" /* GXT: Off-White Jacket */, 16);
			iVar3 = 27;
			iVar4 = 3;
			iVar1 = 2200;
			break;
		case 204:
			StringCopy(&Var2, "TORSO_P2_27_4" /* GXT: Cream Jacket */, 16);
			iVar3 = 27;
			iVar4 = 4;
			iVar1 = 2500;
			break;
		case 205:
			StringCopy(&Var2, "TORSO_P2_27_5" /* GXT: Black Jacket */, 16);
			iVar3 = 27;
			iVar4 = 5;
			iVar1 = 2500;
			break;
		case 206:
			StringCopy(&Var2, "TORSO_P2_27_6" /* GXT: Ash Jacket */, 16);
			iVar3 = 27;
			iVar4 = 6;
			iVar1 = 2200;
			break;
		case 207:
			StringCopy(&Var2, "TORSO_P2_28_0" /* GXT: Dark Gray Sweater */, 16);
			iVar3 = 28;
			iVar4 = 0;
			iVar1 = 1100;
			break;
		case 208:
			StringCopy(&Var2, "TORSO_P2_28_1" /* GXT: Pale Gray Sweater */, 16);
			iVar3 = 28;
			iVar4 = 1;
			iVar1 = 1200;
			break;
		case 209:
			StringCopy(&Var2, "TORSO_P2_28_2" /* GXT: Taupe Sweater */, 16);
			iVar3 = 28;
			iVar4 = 2;
			iVar1 = 1220;
			break;
		case 210:
			StringCopy(&Var2, "TORSO_P2_28_3" /* GXT: Pale Blue Sweater */, 16);
			iVar3 = 28;
			iVar4 = 3;
			iVar1 = 1250;
			break;
		case 211:
			StringCopy(&Var2, "TORSO_P2_28_4" /* GXT: Tangerine Sweater */, 16);
			iVar3 = 28;
			iVar4 = 4;
			iVar1 = 1300;
			break;
		case 212:
			StringCopy(&Var2, "TORSO_P2_28_5" /* GXT: Quarry Brown Sweater */, 16);
			iVar3 = 28;
			iVar4 = 5;
			iVar1 = 1360;
			break;
		case 213:
			StringCopy(&Var2, "TORSO_P2_28_6" /* GXT: Dark Chevrons Sweater */, 16);
			iVar3 = 28;
			iVar4 = 6;
			iVar1 = 35;
			break;
		case 214:
			StringCopy(&Var2, "TORSO_P2_28_7" /* GXT: Zingy Chevrons Sweater */, 16);
			iVar3 = 28;
			iVar4 = 7;
			iVar1 = 38;
			break;
		case 215:
			StringCopy(&Var2, "TORSO_P2_28_8" /* GXT: Rainbow Field Sweater */, 16);
			iVar3 = 28;
			iVar4 = 8;
			iVar1 = 40;
			break;
		case 216:
			StringCopy(&Var2, "TORSO_P2_28_9" /* GXT: Dark Field Sweater */, 16);
			iVar3 = 28;
			iVar4 = 9;
			iVar1 = 42;
			break;
		case 217:
			StringCopy(&Var2, "TORSO_P2_28_10" /* GXT: Animal Strip Sweater */, 16);
			iVar3 = 28;
			iVar4 = 10;
			iVar1 = 50;
			break;
		case 218:
			StringCopy(&Var2, "TORSO_P2_28_11" /* GXT: Bill Brown Sweater */, 16);
			iVar3 = 28;
			iVar4 = 11;
			iVar1 = 45;
			break;
		case 219:
			StringCopy(&Var2, "TORSO_P2_28_12" /* GXT: Mint Argyle Sweater */, 16);
			iVar3 = 28;
			iVar4 = 12;
			iVar1 = 45;
			break;
		case 220:
			StringCopy(&Var2, "TORSO_P2_28_13" /* GXT: Gray Argyle Sweater */, 16);
			iVar3 = 28;
			iVar4 = 13;
			iVar1 = 44;
			break;
		case 221:
			StringCopy(&Var2, "TORSO_P2_28_14" /* GXT: Grape Eighties Sweater */, 16);
			iVar3 = 28;
			iVar4 = 14;
			iVar1 = 46;
			break;
		case 222:
			StringCopy(&Var2, "TORSO_P2_28_15" /* GXT: Geometric Eighties Sweater */, 16);
			iVar3 = 28;
			iVar4 = 15;
			iVar1 = 52;
			break;
		case 223:
			StringCopy(&Var2, "TORSO_P2_29_0" /* GXT: Black Jacket */, 16);
			iVar3 = 29;
			iVar4 = 0;
			iVar1 = 3200;
			break;
		case 224:
			StringCopy(&Var2, "TORSO_P2_29_1" /* GXT: All Black Jacket */, 16);
			iVar3 = 29;
			iVar4 = 1;
			iVar1 = 3200;
			break;
		case 225:
			StringCopy(&Var2, "TORSO_P2_29_2" /* GXT: White Jacket */, 16);
			iVar3 = 29;
			iVar4 = 2;
			iVar1 = 2550;
			break;
		case 226:
			StringCopy(&Var2, "TORSO_P2_29_3" /* GXT: Cream Jacket */, 16);
			iVar3 = 29;
			iVar4 = 3;
			iVar1 = 2750;
			break;
		case 227:
			StringCopy(&Var2, "TORSO_P2_29_4" /* GXT: Oatmeal Jacket */, 16);
			iVar3 = 29;
			iVar4 = 4;
			iVar1 = 2590;
			break;
		case 228:
			StringCopy(&Var2, "TORSO_P2_29_5" /* GXT: Blue-Gray Jacket */, 16);
			iVar3 = 29;
			iVar4 = 5;
			iVar1 = 2750;
			break;
		case 229:
			StringCopy(&Var2, "TORSO_P2_29_6" /* GXT: Beige Jacket */, 16);
			iVar3 = 29;
			iVar4 = 6;
			iVar1 = 2550;
			break;
		case 230:
			StringCopy(&Var2, "TORSO_P2_29_7" /* GXT: Off-White Jacket */, 16);
			iVar3 = 29;
			iVar4 = 7;
			iVar1 = 2590;
			break;
		case 231:
			StringCopy(&Var2, "TORSO_P2_29_8" /* GXT: Gray Suit Jacket */, 16);
			iVar3 = 29;
			iVar4 = 8;
			iVar1 = 2720;
			break;
		case 232:
			StringCopy(&Var2, "TORSO_P2_29_9" /* GXT: Ash Suit Jacket */, 16);
			iVar3 = 29;
			iVar4 = 9;
			iVar1 = 2750;
			break;
		case 233:
			StringCopy(&Var2, "TORSO_P2_30_0" /* GXT: Gray Blazer */, 16);
			iVar3 = 30;
			iVar4 = 0;
			iVar1 = 3250;
			break;
		case 234:
			StringCopy(&Var2, "TORSO_P2_30_1" /* GXT: Beige Blazer */, 16);
			iVar3 = 30;
			iVar4 = 1;
			iVar1 = 2950;
			break;
		case 235:
			StringCopy(&Var2, "TORSO_P2_30_2" /* GXT: Black Blazer */, 16);
			iVar3 = 30;
			iVar4 = 2;
			iVar1 = 3100;
			break;
		case 236:
			StringCopy(&Var2, "TORSO_P2_30_3" /* GXT: Brown Blazer */, 16);
			iVar3 = 30;
			iVar4 = 3;
			iVar1 = 3150;
			break;
		case 237:
			StringCopy(&Var2, "TORSO_P2_30_4" /* GXT: Navy Blazer */, 16);
			iVar3 = 30;
			iVar4 = 4;
			iVar1 = 3240;
			break;
		case 238:
			StringCopy(&Var2, "TORSO_P2_30_5" /* GXT: Navy Pinstripe Blazer */, 16);
			iVar3 = 30;
			iVar4 = 5;
			iVar1 = 3350;
			break;
		case 239:
			StringCopy(&Var2, "TORSO_P2_30_6" /* GXT: Blue-Gray Pinstripe Blazer */, 16);
			iVar3 = 30;
			iVar4 = 6;
			iVar1 = 3400;
			break;
		case 240:
			StringCopy(&Var2, "TORSO_P2_30_7" /* GXT: Brown Pinstripe Blazer */, 16);
			iVar3 = 30;
			iVar4 = 7;
			iVar1 = 3280;
			break;
		case 241:
			StringCopy(&Var2, "TORSO_P2_31_0" /* GXT: Tuxedo Jacket */, 16);
			iVar3 = 31;
			iVar4 = 0;
			break;
		default:
			return;
			break;
	}
	func_88(&(Global_78130[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_109(int iParam0)//Position - 0x1176A
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 3;
	Global_78130[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "TORSO_P2_0_0" /* GXT: White T-Shirt */, 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		case 1:
			StringCopy(&Var2, "TORSO_P2_0_1" /* GXT: Yellow T-Shirt */, 16);
			iVar3 = 0;
			iVar4 = 1;
			iVar1 = 25;
			break;
		case 2:
			StringCopy(&Var2, "TORSO_P2_0_2" /* GXT: Dusche Gold T-Shirt */, 16);
			iVar3 = 0;
			iVar4 = 2;
			break;
		case 3:
			StringCopy(&Var2, "TORSO_P2_0_3" /* GXT: Charcoal T-Shirt */, 16);
			iVar3 = 0;
			iVar4 = 3;
			iVar1 = 15;
			break;
		case 4:
			StringCopy(&Var2, "TORSO_P2_0_4" /* GXT: Cerveza Barracho T-Shirt */, 16);
			iVar3 = 0;
			iVar4 = 4;
			iVar1 = 25;
			break;
		case 5:
			StringCopy(&Var2, "TORSO_P2_0_5" /* GXT: Liberty City Wrath T-Shirt */, 16);
			iVar3 = 0;
			iVar4 = 5;
			iVar1 = 25;
			break;
		case 6:
			StringCopy(&Var2, "TORSO_P2_0_6" /* GXT: Pump & Run T-Shirt */, 16);
			iVar3 = 0;
			iVar4 = 6;
			iVar1 = 22;
			break;
		case 7:
			StringCopy(&Var2, "TORSO_P2_0_7" /* GXT: Atomic T-Shirt */, 16);
			iVar3 = 0;
			iVar4 = 7;
			iVar1 = 22;
			break;
		case 8:
			StringCopy(&Var2, "TORSO_P2_0_8" /* GXT: LS Nuclear Power T-Shirt */, 16);
			iVar3 = 0;
			iVar4 = 8;
			iVar1 = 20;
			break;
		case 9:
			StringCopy(&Var2, "TORSO_P2_0_9" /* GXT: Zancudo T-Shirt */, 16);
			iVar3 = 0;
			iVar4 = 9;
			iVar1 = 20;
			break;
		case 10:
			StringCopy(&Var2, "TORSO_P2_0_10" /* GXT: West Coast Classics T-Shirt */, 16);
			iVar3 = 0;
			iVar4 = 10;
			iVar1 = 24;
			break;
		case 11:
			StringCopy(&Var2, "TORSO_P2_0_11" /* GXT: BC Talk Radio T-Shirt */, 16);
			iVar3 = 0;
			iVar4 = 11;
			iVar1 = 26;
			break;
		case 12:
			StringCopy(&Var2, "TORSO_P2_0_12" /* GXT: Animal Ark T-Shirt */, 16);
			iVar3 = 0;
			iVar4 = 12;
			iVar1 = 28;
			break;
		case 13:
			StringCopy(&Var2, "TORSO_P2_0_13" /* GXT: Rimmers T-Shirt */, 16);
			iVar3 = 0;
			iVar4 = 13;
			iVar1 = 29;
			break;
		case 14:
			StringCopy(&Var2, "TORSO_P2_0_14" /* GXT: Paperclips T-Shirt */, 16);
			iVar3 = 0;
			iVar4 = 14;
			iVar1 = 22;
			break;
		case 15:
			StringCopy(&Var2, "TORSO_P2_0_15" /* GXT: Pop's Pills T-Shirt */, 16);
			iVar3 = 0;
			iVar4 = 15;
			iVar1 = 20;
			break;
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 18:
			StringCopy(&Var2, "TORSO_P2_3_0" /* GXT: Los Santos Tank Top */, 16);
			iVar3 = 3;
			iVar4 = 0;
			iVar1 = 35;
			break;
		case 19:
			StringCopy(&Var2, "TORSO_P2_3_1" /* GXT: Del Perro Pier Tank Top */, 16);
			iVar3 = 3;
			iVar4 = 1;
			iVar1 = 22;
			break;
		case 20:
			StringCopy(&Var2, "TORSO_P2_3_2" /* GXT: San Andreas Tank Top */, 16);
			iVar3 = 3;
			iVar4 = 2;
			iVar1 = 25;
			break;
		case 21:
			StringCopy(&Var2, "TORSO_P2_3_3" /* GXT: Love Fist Tank Top */, 16);
			iVar3 = 3;
			iVar4 = 3;
			iVar1 = 38;
			break;
		case 22:
			StringCopy(&Var2, "TORSO_P2_3_4" /* GXT: Space Monkey Tank Top 1 */, 16);
			iVar3 = 3;
			iVar4 = 4;
			iVar1 = 40;
			break;
		case 23:
			StringCopy(&Var2, "TORSO_P2_3_5" /* GXT: Space Monkey Tank Top 2 */, 16);
			iVar3 = 3;
			iVar4 = 5;
			iVar1 = 40;
			break;
		case 24:
			StringCopy(&Var2, "TORSO_P2_3_6" /* GXT: Space Monkey Tank Top 3 */, 16);
			iVar3 = 3;
			iVar4 = 6;
			iVar1 = 40;
			break;
		case 25:
			StringCopy(&Var2, "TORSO_P2_3_7" /* GXT: Space Monkey Tank Top 4 */, 16);
			iVar3 = 3;
			iVar4 = 7;
			iVar1 = 40;
			break;
		case 26:
			StringCopy(&Var2, "TORSO_P2_3_8" /* GXT: Space Monkey Tank Top 5 */, 16);
			iVar3 = 3;
			iVar4 = 8;
			iVar1 = 40;
			break;
		case 27:
			StringCopy(&Var2, "TORSO_P2_4_0" /* GXT: Rearwall Black Down Jacket */, 16);
			iVar3 = 4;
			iVar4 = 0;
			break;
		case 28:
			StringCopy(&Var2, "TORSO_P2_4_1" /* GXT: Crevis Green Down Jacket */, 16);
			iVar3 = 4;
			iVar4 = 1;
			iVar1 = 500;
			break;
		case 29:
			StringCopy(&Var2, "TORSO_P2_4_2" /* GXT: Rearwall Fluoro Down Jacket */, 16);
			iVar3 = 4;
			iVar4 = 2;
			iVar1 = 560;
			break;
		case 30:
			StringCopy(&Var2, "TORSO_P2_4_3" /* GXT: Rearwall Coffee Down Jacket */, 16);
			iVar3 = 4;
			iVar4 = 3;
			iVar1 = 600;
			break;
		case 31:
			StringCopy(&Var2, "TORSO_P2_4_4tu" /* GXT: Crevis Yellow Down Jacket */, 16);
			iVar3 = 4;
			iVar4 = 4;
			iVar1 = 650;
			break;
		case 32:
			StringCopy(&Var2, "TORSO_P2_4_5tu" /* GXT: Eris Yellow Down Jacket */, 16);
			iVar3 = 4;
			iVar4 = 5;
			iVar1 = 500;
			break;
		case 33:
			StringCopy(&Var2, "TORSO_P2_4_6tu" /* GXT: Crevis Red Down Jacket */, 16);
			iVar3 = 4;
			iVar4 = 6;
			iVar1 = 560;
			break;
		case 34:
			StringCopy(&Var2, "TORSO_P2_4_7" /* GXT: Rearwall Red Down Jacket */, 16);
			iVar3 = 4;
			iVar4 = 7;
			iVar1 = 500;
			break;
		case 35:
			StringCopy(&Var2, "TORSO_P2_4_8" /* GXT: Crevis Blue Down Jacket */, 16);
			iVar3 = 4;
			iVar4 = 8;
			iVar1 = 650;
			break;
		case 36:
			StringCopy(&Var2, "TORSO_P2_4_9" /* GXT: Eris Gray Down Jacket */, 16);
			iVar3 = 4;
			iVar4 = 9;
			iVar1 = 540;
			break;
		case 37:
			StringCopy(&Var2, "TORSO_P2_4_10" /* GXT: Eris Red Down Jacket */, 16);
			iVar3 = 4;
			iVar4 = 10;
			iVar1 = 690;
			break;
		case 38:
			StringCopy(&Var2, "TORSO_P2_4_11" /* GXT: Eris Olive Down Jacket */, 16);
			iVar3 = 4;
			iVar4 = 11;
			iVar1 = 560;
			break;
		case 39:
			StringCopy(&Var2, "TORSO_P2_4_12" /* GXT: Eris Aqua Down Jacket */, 16);
			iVar3 = 4;
			iVar4 = 12;
			iVar1 = 590;
			break;
		case 40:
			StringCopy(&Var2, "TORSO_P2_4_13" /* GXT: Eris Blue Down Jacket */, 16);
			iVar3 = 4;
			iVar4 = 13;
			iVar1 = 690;
			break;
		case 41:
			StringCopy(&Var2, "TORSO_P2_4_14" /* GXT: Crevis Gray Down Jacket */, 16);
			iVar3 = 4;
			iVar4 = 14;
			iVar1 = 540;
			break;
		case 42:
			StringCopy(&Var2, "TORSO_P2_4_15" /* GXT: Eris Tan Down Jacket */, 16);
			iVar3 = 4;
			iVar4 = 15;
			iVar1 = 500;
			break;
		case 43:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 44:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 1;
			bVar0 = true;
			break;
		case 45:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 2;
			bVar0 = true;
			break;
		case 46:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 3;
			bVar0 = true;
			break;
		case 47:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 4;
			bVar0 = true;
			break;
		case 48:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 5;
			bVar0 = true;
			break;
		case 49:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 50:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 51:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 52:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 53:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 54:
			StringCopy(&Var2, "TORSO_P2_11_0" /* GXT: Red Floral Polo Shirt */, 16);
			iVar3 = 11;
			iVar4 = 0;
			break;
		case 55:
			StringCopy(&Var2, "TORSO_P2_11_1" /* GXT: Amethyst Polo Shirt */, 16);
			iVar3 = 11;
			iVar4 = 1;
			break;
		case 56:
			StringCopy(&Var2, "TORSO_P2_11_2" /* GXT: Turquoise Striped Polo Shirt */, 16);
			iVar3 = 11;
			iVar4 = 2;
			iVar1 = 25;
			break;
		case 57:
			StringCopy(&Var2, "TORSO_P2_11_3" /* GXT: Pink Striped Polo Shirt */, 16);
			iVar3 = 11;
			iVar4 = 3;
			iVar1 = 27;
			break;
		case 58:
			StringCopy(&Var2, "TORSO_P2_11_4" /* GXT: Mustard Polo Shirt */, 16);
			iVar3 = 11;
			iVar4 = 4;
			iVar1 = 22;
			break;
		case 59:
			StringCopy(&Var2, "TORSO_P2_11_5" /* GXT: Orange Polo Shirt */, 16);
			iVar3 = 11;
			iVar4 = 5;
			iVar1 = 350;
			break;
		case 60:
			StringCopy(&Var2, "TORSO_P2_11_6" /* GXT: Topaz Striped Polo Shirt */, 16);
			iVar3 = 11;
			iVar4 = 6;
			iVar1 = 27;
			break;
		case 61:
			StringCopy(&Var2, "TORSO_P2_11_7" /* GXT: Mint Polo Shirt */, 16);
			iVar3 = 11;
			iVar4 = 7;
			iVar1 = 370;
			break;
		case 62:
			StringCopy(&Var2, "TORSO_P2_11_8" /* GXT: Navy Striped Polo Shirt */, 16);
			iVar3 = 11;
			iVar4 = 8;
			iVar1 = 25;
			break;
		case 63:
			StringCopy(&Var2, "TORSO_P2_11_9" /* GXT: Green Striped Polo Shirt */, 16);
			iVar3 = 11;
			iVar4 = 9;
			iVar1 = 22;
			break;
		case 64:
			StringCopy(&Var2, "TORSO_P2_11_10" /* GXT: Turquoise Two-Tone Polo Shirt */, 16);
			iVar3 = 11;
			iVar4 = 10;
			iVar1 = 25;
			break;
		case 65:
			StringCopy(&Var2, "TORSO_P2_11_11" /* GXT: Brown Polo Shirt */, 16);
			iVar3 = 11;
			iVar4 = 11;
			break;
		case 66:
			StringCopy(&Var2, "TORSO_P2_11_12" /* GXT: Pink Polo Shirt */, 16);
			iVar3 = 11;
			iVar4 = 12;
			iVar1 = 22;
			break;
		case 67:
			StringCopy(&Var2, "TORSO_P2_11_13" /* GXT: Green Polo Shirt */, 16);
			iVar3 = 11;
			iVar4 = 13;
			iVar1 = 27;
			break;
		case 68:
			StringCopy(&Var2, "TORSO_P2_11_14" /* GXT: Aqua Polo Shirt */, 16);
			iVar3 = 11;
			iVar4 = 14;
			iVar1 = 25;
			break;
		case 69:
			StringCopy(&Var2, "TORSO_P2_11_15" /* GXT: Brown Striped Polo Shirt */, 16);
			iVar3 = 11;
			iVar4 = 15;
			iVar1 = 27;
			break;
		case 70:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 0;
			bVar0 = true;
			iVar6 = 1;
			break;
		case 71:
			StringCopy(&Var2, "TORSO_P2_13_0" /* GXT: Mint Floral Dress */, 16);
			iVar3 = 13;
			iVar4 = 0;
			break;
		case 72:
			StringCopy(&Var2, "TORSO_P2_13_1" /* GXT: Pink Dress */, 16);
			iVar3 = 13;
			iVar4 = 1;
			iVar1 = 39;
			break;
		case 73:
			StringCopy(&Var2, "TORSO_P2_13_2" /* GXT: White Floral Dress */, 16);
			iVar3 = 13;
			iVar4 = 2;
			iVar1 = 42;
			break;
		case 74:
			StringCopy(&Var2, "TORSO_P2_13_3" /* GXT: Purple Zebra Dress */, 16);
			iVar3 = 13;
			iVar4 = 3;
			iVar1 = 49;
			break;
		case 75:
			StringCopy(&Var2, "TORSO_P2_13_4" /* GXT: Cream Dress */, 16);
			iVar3 = 13;
			iVar4 = 4;
			iVar1 = 35;
			break;
		case 76:
			StringCopy(&Var2, "TORSO_P2_13_5" /* GXT: Space Monkey Dress 1 */, 16);
			iVar3 = 13;
			iVar4 = 5;
			iVar1 = 50;
			break;
		case 77:
			StringCopy(&Var2, "TORSO_P2_13_6" /* GXT: Space Monkey Dress 2 */, 16);
			iVar3 = 13;
			iVar4 = 6;
			iVar1 = 50;
			break;
		case 78:
			StringCopy(&Var2, "TORSO_P2_13_7" /* GXT: Space Monkey Dress 3 */, 16);
			iVar3 = 13;
			iVar4 = 7;
			iVar1 = 50;
			break;
		case 79:
			StringCopy(&Var2, "TORSO_P2_14_0" /* GXT: Black Hoodie */, 16);
			iVar3 = 14;
			iVar4 = 0;
			break;
		case 80:
			StringCopy(&Var2, "TORSO_P2_14_1" /* GXT: Silver Hoodie */, 16);
			iVar3 = 14;
			iVar4 = 1;
			iVar1 = 88;
			break;
		case 81:
			StringCopy(&Var2, "TORSO_P2_14_2" /* GXT: Ammu-Nation Camo Hoodie */, 16);
			iVar3 = 14;
			iVar4 = 2;
			iVar1 = 60;
			break;
		case 82:
			StringCopy(&Var2, "TORSO_P2_14_3" /* GXT: LSGC Urban Hoodie */, 16);
			iVar3 = 14;
			iVar4 = 3;
			iVar1 = 80;
			break;
		case 83:
			StringCopy(&Var2, "TORSO_P2_14_4" /* GXT: LSGC Gray Hoodie */, 16);
			iVar3 = 14;
			iVar4 = 4;
			iVar1 = 70;
			break;
		case 84:
			StringCopy(&Var2, "TORSO_P2_14_5" /* GXT: Ammu-Nation A Hoodie */, 16);
			iVar3 = 14;
			iVar4 = 5;
			iVar1 = 80;
			break;
		case 85:
			StringCopy(&Var2, "TORSO_P2_14_6" /* GXT: Blauser Hoodie */, 16);
			iVar3 = 14;
			iVar4 = 6;
			iVar1 = 70;
			break;
		case 86:
			StringCopy(&Var2, "TORSO_P2_14_7" /* GXT: LSGC Forest Hoodie */, 16);
			iVar3 = 14;
			iVar4 = 7;
			iVar1 = 90;
			break;
		case 87:
			StringCopy(&Var2, "TORSO_P2_14_8" /* GXT: Penetrators Hoodie */, 16);
			iVar3 = 14;
			iVar4 = 8;
			iVar1 = 95;
			break;
		case 88:
			StringCopy(&Var2, "TORSO_P2_14_9" /* GXT: Crevis Fluorescent Hoodie */, 16);
			iVar3 = 14;
			iVar4 = 9;
			iVar1 = 105;
			break;
		case 89:
			StringCopy(&Var2, "TORSO_P2_14_10" /* GXT: Blue Hoodie */, 16);
			iVar3 = 14;
			iVar4 = 10;
			iVar1 = 95;
			break;
		case 90:
			StringCopy(&Var2, "TORSO_P2_14_11" /* GXT: Green Hoodie */, 16);
			iVar3 = 14;
			iVar4 = 11;
			iVar1 = 110;
			break;
		case 91:
			StringCopy(&Var2, "TORSO_P2_14_12" /* GXT: LS Jardineros Hoodie */, 16);
			iVar3 = 14;
			iVar4 = 12;
			iVar1 = 98;
			break;
		case 92:
			StringCopy(&Var2, "TORSO_P2_14_13" /* GXT: Ash 18 Hoodie */, 16);
			iVar3 = 14;
			iVar4 = 13;
			iVar1 = 88;
			break;
		case 93:
			StringCopy(&Var2, "TORSO_P2_14_14" /* GXT: Red Mist XI Hoodie */, 16);
			iVar3 = 14;
			iVar4 = 14;
			iVar1 = 98;
			break;
		case 94:
			StringCopy(&Var2, "TORSO_P2_14_15" /* GXT: Eris Charcoal Hoodie */, 16);
			iVar3 = 14;
			iVar4 = 15;
			iVar1 = 110;
			break;
		case 95:
			StringCopy(&Var2, "TORSO_P2_15_0" /* GXT: Tennis Shirt */, 16);
			iVar3 = 15;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 96:
			StringCopy(&Var2, "TORSO_P2_16_0" /* GXT: Bare Chest */, 16);
			iVar3 = 16;
			iVar4 = 0;
			break;
		case 97:
			StringCopy(&Var2, "TORSO_P2_17_0" /* GXT: Pink Jacket */, 16);
			iVar3 = 17;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 98:
			StringCopy(&Var2, "TORSO_P2_18_0" /* GXT: Blue Denim Jacket */, 16);
			iVar3 = 18;
			iVar4 = 0;
			break;
		case 99:
			StringCopy(&Var2, "TORSO_P2_18_1" /* GXT: Black Denim Jacket */, 16);
			iVar3 = 18;
			iVar4 = 1;
			iVar1 = 520;
			break;
		case 100:
			StringCopy(&Var2, "TORSO_P2_18_2" /* GXT: Gray Denim Jacket */, 16);
			iVar3 = 18;
			iVar4 = 2;
			iVar1 = 490;
			break;
		case 101:
			StringCopy(&Var2, "TORSO_P2_18_3" /* GXT: Brown Denim Jacket */, 16);
			iVar3 = 18;
			iVar4 = 3;
			iVar1 = 450;
			break;
		case 102:
			StringCopy(&Var2, "TORSO_P2_18_4" /* GXT: Faded Denim Jacket */, 16);
			iVar3 = 18;
			iVar4 = 4;
			iVar1 = 420;
			break;
		case 103:
			StringCopy(&Var2, "TORSO_P2_18_5" /* GXT: Ash Denim Jacket */, 16);
			iVar3 = 18;
			iVar4 = 5;
			iVar1 = 420;
			break;
		case 104:
			StringCopy(&Var2, "TORSO_P2_19_0" /* GXT: Denim Shirt */, 16);
			iVar3 = 19;
			iVar4 = 0;
			iVar1 = 85;
			break;
		case 105:
			StringCopy(&Var2, "TORSO_P2_19_1" /* GXT: Faded Denim Shirt */, 16);
			iVar3 = 19;
			iVar4 = 1;
			iVar1 = 85;
			break;
		case 106:
			StringCopy(&Var2, "TORSO_P2_19_2" /* GXT: Black Shirt */, 16);
			iVar3 = 19;
			iVar4 = 2;
			iVar1 = 75;
			break;
		case 107:
			StringCopy(&Var2, "TORSO_P2_19_3" /* GXT: Gray Check Shirt */, 16);
			iVar3 = 19;
			iVar4 = 3;
			iVar1 = 68;
			break;
		case 108:
			StringCopy(&Var2, "TORSO_P2_19_4" /* GXT: Brown Check Shirt */, 16);
			iVar3 = 19;
			iVar4 = 4;
			iVar1 = 68;
			break;
		case 109:
			StringCopy(&Var2, "TORSO_P2_19_5" /* GXT: Red Check Shirt */, 16);
			iVar3 = 19;
			iVar4 = 5;
			iVar1 = 78;
			break;
		case 110:
			StringCopy(&Var2, "TORSO_P2_19_6" /* GXT: Brown Shirt */, 16);
			iVar3 = 19;
			iVar4 = 6;
			iVar1 = 85;
			break;
		case 111:
			StringCopy(&Var2, "TORSO_P2_19_7" /* GXT: Khaki Shirt */, 16);
			iVar3 = 19;
			iVar4 = 7;
			iVar1 = 68;
			break;
		case 112:
			StringCopy(&Var2, "TORSO_P2_19_8" /* GXT: Red Plaid Shirt */, 16);
			iVar3 = 19;
			iVar4 = 8;
			iVar1 = 75;
			break;
		case 113:
			StringCopy(&Var2, "TORSO_P2_19_9" /* GXT: Brown Plaid Shirt */, 16);
			iVar3 = 19;
			iVar4 = 9;
			iVar1 = 75;
			break;
		case 114:
			StringCopy(&Var2, "TORSO_P2_19_10" /* GXT: Green Check Shirt */, 16);
			iVar3 = 19;
			iVar4 = 10;
			iVar1 = 78;
			break;
		case 115:
			StringCopy(&Var2, "TORSO_P2_19_11" /* GXT: Maroon Check Shirt */, 16);
			iVar3 = 19;
			iVar4 = 11;
			iVar1 = 75;
			break;
		case 116:
			StringCopy(&Var2, "TORSO_P2_19_12" /* GXT: Gray Shirt */, 16);
			iVar3 = 19;
			iVar4 = 12;
			iVar1 = 75;
			break;
		case 117:
			StringCopy(&Var2, "TORSO_P2_19_13" /* GXT: Blue Check Shirt */, 16);
			iVar3 = 19;
			iVar4 = 13;
			iVar1 = 75;
			break;
		case 118:
			StringCopy(&Var2, "TORSO_P2_19_14" /* GXT: Blue Two-Tone Shirt */, 16);
			iVar3 = 19;
			iVar4 = 14;
			iVar1 = 78;
			break;
		case 119:
			StringCopy(&Var2, "TORSO_P2_19_15" /* GXT: Navy Shirt */, 16);
			iVar3 = 19;
			iVar4 = 15;
			iVar1 = 78;
			break;
		case 120:
			StringCopy(&Var2, "TORSO_P2_20_0" /* GXT: Burgundy Bowling Shirt */, 16);
			iVar3 = 20;
			iVar4 = 0;
			iVar1 = 40;
			break;
		case 121:
			StringCopy(&Var2, "TORSO_P2_20_1" /* GXT: Purple Bowling Shirt */, 16);
			iVar3 = 20;
			iVar4 = 1;
			iVar1 = 32;
			break;
		case 122:
			StringCopy(&Var2, "TORSO_P2_20_2" /* GXT: Crimson Bowling Shirt */, 16);
			iVar3 = 20;
			iVar4 = 2;
			iVar1 = 32;
			break;
		case 123:
			StringCopy(&Var2, "TORSO_P2_20_3" /* GXT: Tan Bowling Shirt */, 16);
			iVar3 = 20;
			iVar4 = 3;
			iVar1 = 32;
			break;
		case 124:
			StringCopy(&Var2, "TORSO_P2_20_4" /* GXT: Flames Bowling Shirt */, 16);
			iVar3 = 20;
			iVar4 = 4;
			break;
		case 125:
			StringCopy(&Var2, "TORSO_P2_20_5" /* GXT: Skull Bowling Shirt */, 16);
			iVar3 = 20;
			iVar4 = 5;
			iVar1 = 38;
			break;
		case 126:
			StringCopy(&Var2, "TORSO_P2_20_6" /* GXT: Pale Blue Bowling Shirt */, 16);
			iVar3 = 20;
			iVar4 = 6;
			iVar1 = 35;
			break;
		case 127:
			StringCopy(&Var2, "TORSO_P2_20_7" /* GXT: Scarab Bowling Shirt */, 16);
			iVar3 = 20;
			iVar4 = 7;
			iVar1 = 38;
			break;
		case 128:
			StringCopy(&Var2, "TORSO_P2_20_8" /* GXT: Cream Bowling Shirt */, 16);
			iVar3 = 20;
			iVar4 = 8;
			iVar1 = 29;
			break;
		case 129:
			StringCopy(&Var2, "TORSO_P2_20_9" /* GXT: Cube Bowling Shirt */, 16);
			iVar3 = 20;
			iVar4 = 9;
			iVar1 = 32;
			break;
		case 130:
			StringCopy(&Var2, "TORSO_P2_20_10" /* GXT: Beige Bowling Shirt */, 16);
			iVar3 = 20;
			iVar4 = 10;
			iVar1 = 29;
			break;
		case 131:
			StringCopy(&Var2, "TORSO_P2_20_11" /* GXT: Blue Bowling Shirt */, 16);
			iVar3 = 20;
			iVar4 = 11;
			iVar1 = 35;
			break;
		case 132:
			StringCopy(&Var2, "TORSO_P2_20_12" /* GXT: Yellow Bowling Shirt */, 16);
			iVar3 = 20;
			iVar4 = 12;
			iVar1 = 32;
			break;
		case 133:
			StringCopy(&Var2, "TORSO_P2_20_13" /* GXT: Pink Bowling Shirt */, 16);
			iVar3 = 20;
			iVar4 = 13;
			iVar1 = 35;
			break;
		case 134:
			StringCopy(&Var2, "TORSO_P2_20_14" /* GXT: White Bowling Shirt */, 16);
			iVar3 = 20;
			iVar4 = 14;
			iVar1 = 32;
			break;
		case 135:
			StringCopy(&Var2, "TORSO_P2_20_15" /* GXT: Black Bowling Shirt */, 16);
			iVar3 = 20;
			iVar4 = 15;
			iVar1 = 40;
			break;
		default:
			return;
			break;
	}
	func_88(&(Global_78130[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_110(int iParam0)//Position - 0x1266A
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 2;
	Global_78130[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "HAIR_P2_0_0" /* GXT: Trailer Cut */, 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		case 1:
			StringCopy(&Var2, "HAIR_P2_0_1" /* GXT: Frozen */, 16);
			iVar3 = 0;
			iVar4 = 1;
			break;
		case 2:
			StringCopy(&Var2, "HAIR_P2_1_0" /* GXT: Clean Razor */, 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		case 3:
			StringCopy(&Var2, "HAIR_P2_2_0" /* GXT: Randal */, 16);
			iVar3 = 2;
			iVar4 = 0;
			break;
		case 4:
			StringCopy(&Var2, "HAIR_P2_3_0" /* GXT: Side Shed */, 16);
			iVar3 = 3;
			iVar4 = 0;
			break;
		case 5:
			StringCopy(&Var2, "HAIR_P2_4_0" /* GXT: Grown Out */, 16);
			iVar3 = 4;
			iVar4 = 0;
			break;
		case 6:
			StringCopy(&Var2, "HAIR_P2_5_0" /* GXT: Mullet */, 16);
			iVar3 = 5;
			iVar4 = 0;
			break;
		case 7:
			StringCopy(&Var2, "HAIR_P2_6_0" /* GXT: Shaved 2 */, 16);
			iVar3 = 6;
			iVar4 = 0;
			break;
		case 8:
			StringCopy(&Var2, "HAIR_P2_7_0" /* GXT: Swept Back */, 16);
			iVar3 = 7;
			iVar4 = 0;
			break;
		default:
			func_95(iVar7, iParam0, 9, -1);
			return;
			break;
	}
	func_88(&(Global_78130[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_111(int iParam0)//Position - 0x12797
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 0;
	Global_78130[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 1;
			break;
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 2;
			break;
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 3;
			break;
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 4;
			break;
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 5;
			break;
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 6;
			break;
		default:
			func_95(iVar7, iParam0, 7, -1);
			return;
			break;
	}
	func_88(&(Global_78130[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_112(int iParam0, int iParam1)//Position - 0x1288E
{
	switch (iParam0)
	{
		case 0:
			func_130(iParam1);
			break;
		case 2:
			func_129(iParam1);
			break;
		case 3:
			func_125(iParam1);
			break;
		case 4:
			func_124(iParam1);
			break;
		case 6:
			func_123(iParam1);
			break;
		case 5:
			func_122(iParam1);
			break;
		case 8:
			func_121(iParam1);
			break;
		case 9:
			func_120(iParam1);
			break;
		case 10:
			func_119(iParam1);
			break;
		case 1:
			func_118(iParam1);
			break;
		case 7:
			func_117(iParam1);
			break;
		case 11:
			func_116(iParam1);
			break;
		case 12:
			func_115(iParam1);
			break;
		case 13:
			func_114(iParam1);
			break;
		case 14:
			func_113(iParam1);
			break;
	}
}

void func_113(int iParam0)//Position - 0x1297E
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 14;
	Global_78130[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 0;
			break;
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 1;
			break;
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 2;
			break;
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 3;
			break;
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 4;
			break;
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 5;
			break;
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 6;
			break;
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 7;
			break;
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 8;
			break;
		case 158:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 2;
			break;
		case 159:
			StringCopy(&Var2, "PROPS_P1_EA1_0" /* GXT: De Koch Diamond Studs */, 16);
			iVar3 = 1;
			iVar4 = 0;
			iVar1 = 4590;
			iVar5 = 2;
			break;
		case 160:
			StringCopy(&Var2, "PROPS_P1_EA1_1" /* GXT: De Koch Obsidian Studs */, 16);
			iVar3 = 1;
			iVar4 = 1;
			iVar1 = 4100;
			iVar5 = 2;
			break;
		case 161:
			StringCopy(&Var2, "PROPS_P1_EA1_2" /* GXT: De Koch Sapphire Studs */, 16);
			iVar3 = 1;
			iVar4 = 2;
			iVar1 = 3850;
			iVar5 = 2;
			break;
		case 162:
			StringCopy(&Var2, "PROPS_P1_EA1_3" /* GXT: De Koch Opal Studs */, 16);
			iVar3 = 1;
			iVar4 = 3;
			iVar1 = 1850;
			iVar5 = 2;
			break;
		case 163:
			StringCopy(&Var2, "PROPS_P1_EA1_4" /* GXT: De Koch Platinum Studs */, 16);
			iVar3 = 1;
			iVar4 = 4;
			iVar1 = 5250;
			iVar5 = 2;
			break;
		case 164:
			StringCopy(&Var2, "PROPS_P1_EA1_5" /* GXT: De Koch Garnet Studs */, 16);
			iVar3 = 1;
			iVar4 = 5;
			iVar1 = 2700;
			iVar5 = 2;
			break;
		case 165:
			StringCopy(&Var2, "PROPS_P1_EA1_6" /* GXT: De Koch Jasper Studs */, 16);
			iVar3 = 1;
			iVar4 = 6;
			iVar1 = 3100;
			iVar5 = 2;
			break;
		case 166:
			StringCopy(&Var2, "PROPS_P1_EA1_7" /* GXT: De Koch Aquamarine Studs */, 16);
			iVar3 = 1;
			iVar4 = 7;
			iVar1 = 5050;
			iVar5 = 2;
			break;
		case 167:
			StringCopy(&Var2, "PROPS_P1_EA2_0" /* GXT: Vankhov Diamond Studs */, 16);
			iVar3 = 2;
			iVar4 = 0;
			iVar1 = 2500;
			iVar5 = 2;
			break;
		case 168:
			StringCopy(&Var2, "PROPS_P1_EA2_1" /* GXT: Vankhov Emerald Studs */, 16);
			iVar3 = 2;
			iVar4 = 1;
			iVar1 = 1950;
			iVar5 = 2;
			break;
		case 169:
			StringCopy(&Var2, "PROPS_P1_EA2_2" /* GXT: Vankhov Quartz Studs */, 16);
			iVar3 = 2;
			iVar4 = 2;
			iVar1 = 3900;
			iVar5 = 2;
			break;
		case 170:
			StringCopy(&Var2, "PROPS_P1_EA2_3" /* GXT: Vankhov Obsidian Studs */, 16);
			iVar3 = 2;
			iVar4 = 3;
			iVar1 = 3550;
			iVar5 = 2;
			break;
		case 171:
			StringCopy(&Var2, "PROPS_P1_EA2_4" /* GXT: Vankhov Platinum Studs */, 16);
			iVar3 = 2;
			iVar4 = 4;
			iVar1 = 4500;
			iVar5 = 2;
			break;
		case 172:
			StringCopy(&Var2, "PROPS_P1_EA2_5" /* GXT: Vankhov Agate Studs */, 16);
			iVar3 = 2;
			iVar4 = 5;
			iVar1 = 2700;
			iVar5 = 2;
			break;
		case 173:
			StringCopy(&Var2, "PROPS_P1_EA2_6" /* GXT: Vankhov Jade Studs */, 16);
			iVar3 = 2;
			iVar4 = 6;
			iVar1 = 3100;
			iVar5 = 2;
			break;
		case 174:
			StringCopy(&Var2, "PROPS_P1_EA2_7" /* GXT: Vankhov Onyx Studs */, 16);
			iVar3 = 2;
			iVar4 = 7;
			iVar1 = 2950;
			iVar5 = 2;
			break;
		case 82:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 10;
			break;
		case 83:
			StringCopy(&Var2, "PROPS_P1_E1_0" /* GXT: Orange Tint Contour Shades */, 16);
			iVar3 = 1;
			iVar4 = 0;
			iVar1 = 75;
			iVar5 = 10;
			break;
		case 84:
			StringCopy(&Var2, "PROPS_P1_E1_1" /* GXT: Slate Contour Shades */, 16);
			iVar3 = 1;
			iVar4 = 1;
			iVar1 = 75;
			iVar5 = 10;
			break;
		case 85:
			StringCopy(&Var2, "PROPS_P1_E1_2" /* GXT: Gray Contour Shades */, 16);
			iVar3 = 1;
			iVar4 = 2;
			iVar1 = 75;
			iVar5 = 10;
			break;
		case 86:
			StringCopy(&Var2, "PROPS_P1_E1_3" /* GXT: Brown Contour Shades */, 16);
			iVar3 = 1;
			iVar4 = 3;
			iVar1 = 75;
			iVar5 = 10;
			break;
		case 87:
			StringCopy(&Var2, "PROPS_P1_E1_4" /* GXT: Burgundy Contour Shades */, 16);
			iVar3 = 1;
			iVar4 = 4;
			iVar1 = 75;
			iVar5 = 10;
			break;
		case 88:
			StringCopy(&Var2, "PROPS_P1_E1_5" /* GXT: Chocolate Contour Shades */, 16);
			iVar3 = 1;
			iVar4 = 5;
			iVar1 = 75;
			iVar5 = 10;
			break;
		case 89:
			StringCopy(&Var2, "PROPS_P1_E1_6" /* GXT: Black Contour Shades */, 16);
			iVar3 = 1;
			iVar4 = 6;
			iVar1 = 75;
			iVar5 = 10;
			break;
		case 90:
			StringCopy(&Var2, "PROPS_P1_E1_7" /* GXT: Purple Tint Contour Shades */, 16);
			iVar3 = 1;
			iVar4 = 7;
			iVar1 = 75;
			iVar5 = 10;
			break;
		case 91:
			StringCopy(&Var2, "PROPS_P1_E1_8" /* GXT: Blue-Gray Contour Shades */, 16);
			iVar3 = 1;
			iVar4 = 8;
			iVar1 = 75;
			iVar5 = 10;
			break;
		case 92:
			StringCopy(&Var2, "PROPS_P1_E1_9" /* GXT: White Contour Shades */, 16);
			iVar3 = 1;
			iVar4 = 9;
			iVar1 = 75;
			iVar5 = 10;
			break;
		case 93:
			StringCopy(&Var2, "PROPS_P1_E2" /* GXT: Swimming Goggles */, 16);
			iVar3 = 2;
			iVar4 = 0;
			iVar5 = 10;
			break;
		case 94:
			StringCopy(&Var2, "PROPS_P1_E3" /* GXT: Racer Shades */, 16);
			iVar3 = 3;
			iVar4 = 0;
			iVar1 = 110;
			iVar5 = 10;
			break;
		case 95:
			StringCopy(&Var2, "PROPS_P1_E4_0" /* GXT: Stank Slate Shades */, 16);
			iVar3 = 4;
			iVar4 = 0;
			iVar1 = 120;
			iVar5 = 10;
			break;
		case 96:
			StringCopy(&Var2, "PROPS_P1_E4_1" /* GXT: Broker Ash Shades */, 16);
			iVar3 = 4;
			iVar4 = 1;
			iVar1 = 128;
			iVar5 = 10;
			break;
		case 97:
			StringCopy(&Var2, "PROPS_P1_E4_2" /* GXT: Broker Chocolate Shades */, 16);
			iVar3 = 4;
			iVar4 = 2;
			iVar1 = 130;
			iVar5 = 10;
			break;
		case 98:
			StringCopy(&Var2, "PROPS_P1_E4_3" /* GXT: Stank Black Shades */, 16);
			iVar3 = 4;
			iVar4 = 3;
			iVar1 = 140;
			iVar5 = 10;
			break;
		case 99:
			StringCopy(&Var2, "PROPS_P1_E4_4" /* GXT: Broker Black Shades */, 16);
			iVar3 = 4;
			iVar4 = 4;
			iVar1 = 145;
			iVar5 = 10;
			break;
		case 100:
			StringCopy(&Var2, "PROPS_P1_E4_5" /* GXT: Stank Green Tint Shades */, 16);
			iVar3 = 4;
			iVar4 = 5;
			iVar1 = 135;
			iVar5 = 10;
			break;
		case 101:
			StringCopy(&Var2, "PROPS_P1_E4_6" /* GXT: Stank Blue Tint Shades */, 16);
			iVar3 = 4;
			iVar4 = 6;
			iVar1 = 138;
			iVar5 = 10;
			break;
		case 102:
			StringCopy(&Var2, "PROPS_P1_E5_0" /* GXT: Black Aviator Shades */, 16);
			iVar3 = 5;
			iVar4 = 0;
			iVar1 = 110;
			iVar5 = 10;
			break;
		case 103:
			StringCopy(&Var2, "PROPS_P1_E5_1" /* GXT: White Aviator Shades */, 16);
			iVar3 = 5;
			iVar4 = 1;
			iVar1 = 112;
			iVar5 = 10;
			break;
		case 104:
			StringCopy(&Var2, "PROPS_P1_E5_2" /* GXT: Brown Aviator Shades */, 16);
			iVar3 = 5;
			iVar4 = 2;
			iVar1 = 115;
			iVar5 = 10;
			break;
		case 105:
			StringCopy(&Var2, "PROPS_P1_E5_3" /* GXT: Gray Aviator Shades */, 16);
			iVar3 = 5;
			iVar4 = 3;
			iVar1 = 118;
			iVar5 = 10;
			break;
		case 106:
			StringCopy(&Var2, "PROPS_P1_E5_4" /* GXT: Two-Tone Aviator Shades */, 16);
			iVar3 = 5;
			iVar4 = 4;
			iVar1 = 120;
			iVar5 = 10;
			break;
		case 107:
			StringCopy(&Var2, "PROPS_P1_E5_5" /* GXT: Bone Aviator Shades */, 16);
			iVar3 = 5;
			iVar4 = 5;
			iVar1 = 125;
			iVar5 = 10;
			break;
		case 108:
			StringCopy(&Var2, "PROPS_P1_E5_6" /* GXT: Red Aviator Shades */, 16);
			iVar3 = 5;
			iVar4 = 6;
			iVar1 = 128;
			iVar5 = 10;
			break;
		case 109:
			StringCopy(&Var2, "PROPS_P1_E5_7" /* GXT: Silver Aviator Shades */, 16);
			iVar3 = 5;
			iVar4 = 7;
			iVar1 = 138;
			iVar5 = 10;
			break;
		case 110:
			StringCopy(&Var2, "PROPS_P1_E5_8" /* GXT: Charcoal Aviator Shades */, 16);
			iVar3 = 5;
			iVar4 = 8;
			iVar1 = 140;
			iVar5 = 10;
			break;
		case 111:
			StringCopy(&Var2, "PROPS_P1_E5_9" /* GXT: Gold Aviator Shades */, 16);
			iVar3 = 5;
			iVar4 = 9;
			iVar1 = 155;
			iVar5 = 10;
			break;
		case 112:
			StringCopy(&Var2, "PROPS_P1_E6_0" /* GXT: Tinted Aviator Glasses */, 16);
			iVar3 = 6;
			iVar4 = 0;
			iVar1 = 55;
			iVar5 = 10;
			break;
		case 113:
			StringCopy(&Var2, "PROPS_P1_E6_1" /* GXT: Silver Aviator Glasses */, 16);
			iVar3 = 6;
			iVar4 = 1;
			iVar1 = 55;
			iVar5 = 10;
			break;
		case 114:
			StringCopy(&Var2, "PROPS_P1_E6_2" /* GXT: Sepia Aviator Glasses */, 16);
			iVar3 = 6;
			iVar4 = 2;
			iVar1 = 58;
			iVar5 = 10;
			break;
		case 115:
			StringCopy(&Var2, "PROPS_P1_E6_3" /* GXT: Blue Aviator Glasses */, 16);
			iVar3 = 6;
			iVar4 = 3;
			iVar1 = 58;
			iVar5 = 10;
			break;
		case 116:
			StringCopy(&Var2, "PROPS_P1_E6_4" /* GXT: Yellow Aviator Glasses */, 16);
			iVar3 = 6;
			iVar4 = 4;
			iVar1 = 60;
			iVar5 = 10;
			break;
		case 117:
			StringCopy(&Var2, "PROPS_P1_E6_5" /* GXT: Gray Aviator Glasses */, 16);
			iVar3 = 6;
			iVar4 = 5;
			iVar1 = 62;
			iVar5 = 10;
			break;
		case 118:
			StringCopy(&Var2, "PROPS_P1_E6_6" /* GXT: Black Aviator Glasses */, 16);
			iVar3 = 6;
			iVar4 = 6;
			iVar1 = 65;
			iVar5 = 10;
			break;
		case 119:
			StringCopy(&Var2, "PROPS_P1_E6_7" /* GXT: Slate Aviator Glasses */, 16);
			iVar3 = 6;
			iVar4 = 7;
			iVar1 = 68;
			iVar5 = 10;
			break;
		case 120:
			StringCopy(&Var2, "PROPS_P1_E6_8" /* GXT: Smoke Aviator Glasses */, 16);
			iVar3 = 6;
			iVar4 = 8;
			iVar1 = 68;
			iVar5 = 10;
			break;
		case 121:
			StringCopy(&Var2, "PROPS_P1_E6_9" /* GXT: Gold Aviator Glasses */, 16);
			iVar3 = 6;
			iVar4 = 9;
			iVar1 = 72;
			iVar5 = 10;
			break;
		case 122:
			StringCopy(&Var2, "PROPS_P1_E7_0" /* GXT: Suburban Black Shades */, 16);
			iVar3 = 7;
			iVar4 = 0;
			iVar1 = 145;
			iVar5 = 10;
			break;
		case 123:
			StringCopy(&Var2, "PROPS_P1_E7_1" /* GXT: Suburban Teal Shades */, 16);
			iVar3 = 7;
			iVar4 = 1;
			iVar1 = 149;
			iVar5 = 10;
			break;
		case 124:
			StringCopy(&Var2, "PROPS_P1_E7_2" /* GXT: Suburban Tortoiseshell Shades */, 16);
			iVar3 = 7;
			iVar4 = 2;
			iVar1 = 139;
			iVar5 = 10;
			break;
		case 125:
			StringCopy(&Var2, "PROPS_P1_E7_3" /* GXT: Suburban Orange Shades */, 16);
			iVar3 = 7;
			iVar4 = 3;
			iVar1 = 149;
			iVar5 = 10;
			break;
		case 126:
			StringCopy(&Var2, "PROPS_P1_E7_4" /* GXT: Fuque White Shades */, 16);
			iVar3 = 7;
			iVar4 = 4;
			iVar1 = 135;
			iVar5 = 10;
			break;
		case 127:
			StringCopy(&Var2, "PROPS_P1_E7_5" /* GXT: Fuque Camo Shades */, 16);
			iVar3 = 7;
			iVar4 = 5;
			iVar1 = 138;
			iVar5 = 10;
			break;
		case 128:
			StringCopy(&Var2, "PROPS_P1_E7_6" /* GXT: Fuque Yellow Shades */, 16);
			iVar3 = 7;
			iVar4 = 6;
			iVar1 = 140;
			iVar5 = 10;
			break;
		case 129:
			StringCopy(&Var2, "PROPS_P1_E7_7" /* GXT: Fuque Burgundy Shades */, 16);
			iVar3 = 7;
			iVar4 = 7;
			iVar1 = 145;
			iVar5 = 10;
			break;
		case 130:
			StringCopy(&Var2, "PROPS_P1_E7_8" /* GXT: Fuque Funky Shades */, 16);
			iVar3 = 7;
			iVar4 = 8;
			iVar1 = 159;
			iVar5 = 10;
			break;
		case 131:
			StringCopy(&Var2, "PROPS_P1_E7_9" /* GXT: Fuque Squared Shades */, 16);
			iVar3 = 7;
			iVar4 = 9;
			iVar1 = 155;
			iVar5 = 10;
			break;
		case 132:
			StringCopy(&Var2, "PROPS_P1_E8_0" /* GXT: Gold T-Bone Shades */, 16);
			iVar3 = 8;
			iVar4 = 0;
			iVar1 = 198;
			iVar5 = 10;
			break;
		case 133:
			StringCopy(&Var2, "PROPS_P1_E8_1" /* GXT: Silver T-Bone Shades */, 16);
			iVar3 = 8;
			iVar4 = 1;
			iVar1 = 210;
			iVar5 = 10;
			break;
		case 134:
			StringCopy(&Var2, "PROPS_P1_E8_2" /* GXT: Two-Tone T-Bone Shades */, 16);
			iVar3 = 8;
			iVar4 = 2;
			iVar1 = 185;
			iVar5 = 10;
			break;
		case 135:
			StringCopy(&Var2, "PROPS_P1_E8_3" /* GXT: Green T-Bone Shades */, 16);
			iVar3 = 8;
			iVar4 = 3;
			iVar1 = 220;
			iVar5 = 10;
			break;
		case 136:
			StringCopy(&Var2, "PROPS_P1_E8_4" /* GXT: Brown T-Bone Shades */, 16);
			iVar3 = 8;
			iVar4 = 4;
			iVar1 = 190;
			iVar5 = 10;
			break;
		case 137:
			StringCopy(&Var2, "PROPS_P1_E8_5" /* GXT: Peach T-Bone Shades */, 16);
			iVar3 = 8;
			iVar4 = 5;
			iVar1 = 200;
			iVar5 = 10;
			break;
		case 138:
			StringCopy(&Var2, "PROPS_P1_E8_6" /* GXT: Gray T-Bone Shades */, 16);
			iVar3 = 8;
			iVar4 = 6;
			iVar1 = 208;
			iVar5 = 10;
			break;
		case 139:
			StringCopy(&Var2, "PROPS_P1_E8_7" /* GXT: Orange T-Bone Shades */, 16);
			iVar3 = 8;
			iVar4 = 7;
			iVar1 = 210;
			iVar5 = 10;
			break;
		case 140:
			StringCopy(&Var2, "PROPS_P1_E9_0" /* GXT: Yellow Mono Shades */, 16);
			iVar3 = 9;
			iVar4 = 0;
			iVar1 = 165;
			iVar5 = 10;
			break;
		case 141:
			StringCopy(&Var2, "PROPS_P1_E9_1" /* GXT: Gray Mono Shades */, 16);
			iVar3 = 9;
			iVar4 = 1;
			iVar1 = 185;
			iVar5 = 10;
			break;
		case 142:
			StringCopy(&Var2, "PROPS_P1_E9_2" /* GXT: Hornet Mono Shades */, 16);
			iVar3 = 9;
			iVar4 = 2;
			iVar1 = 190;
			iVar5 = 10;
			break;
		case 143:
			StringCopy(&Var2, "PROPS_P1_E9_3" /* GXT: Copper Mono Shades */, 16);
			iVar3 = 9;
			iVar4 = 3;
			iVar1 = 178;
			iVar5 = 10;
			break;
		case 144:
			StringCopy(&Var2, "PROPS_P1_E9_4" /* GXT: Blue Mono Shades */, 16);
			iVar3 = 9;
			iVar4 = 4;
			iVar1 = 180;
			iVar5 = 10;
			break;
		case 145:
			StringCopy(&Var2, "PROPS_P1_E9_5" /* GXT: Sepia Mono Shades */, 16);
			iVar3 = 9;
			iVar4 = 5;
			iVar1 = 168;
			iVar5 = 10;
			break;
		case 146:
			StringCopy(&Var2, "PROPS_P1_E9_6" /* GXT: White Mono Shades */, 16);
			iVar3 = 9;
			iVar4 = 6;
			iVar1 = 170;
			iVar5 = 10;
			break;
		case 147:
			StringCopy(&Var2, "PROPS_P1_E9_7" /* GXT: Orange Tint Mono Shades */, 16);
			iVar3 = 9;
			iVar4 = 7;
			iVar1 = 175;
			iVar5 = 10;
			break;
		case 148:
			StringCopy(&Var2, "PROPS_P1_E9_8" /* GXT: Blue Tint Mono Shades */, 16);
			iVar3 = 9;
			iVar4 = 8;
			iVar1 = 170;
			iVar5 = 10;
			break;
		case 149:
			StringCopy(&Var2, "PROPS_P1_E9_9" /* GXT: Smoke Mono Shades */, 16);
			iVar3 = 9;
			iVar4 = 9;
			iVar1 = 178;
			iVar5 = 10;
			break;
		case 150:
			StringCopy(&Var2, "PROPS_P1_E10_0" /* GXT: Gold Triptych Shades */, 16);
			iVar3 = 10;
			iVar4 = 0;
			iVar1 = 140;
			iVar5 = 10;
			break;
		case 151:
			StringCopy(&Var2, "PROPS_P1_E10_1" /* GXT: Gray Triptych Shades */, 16);
			iVar3 = 10;
			iVar4 = 1;
			iVar1 = 145;
			iVar5 = 10;
			break;
		case 152:
			StringCopy(&Var2, "PROPS_P1_E10_2" /* GXT: Silver Triptych Shades */, 16);
			iVar3 = 10;
			iVar4 = 2;
			iVar1 = 150;
			iVar5 = 10;
			break;
		case 153:
			StringCopy(&Var2, "PROPS_P1_E10_3" /* GXT: Two-Tone Triptych Shades */, 16);
			iVar3 = 10;
			iVar4 = 3;
			iVar1 = 165;
			iVar5 = 10;
			break;
		case 154:
			StringCopy(&Var2, "PROPS_P1_E10_4" /* GXT: Copper Triptych Shades */, 16);
			iVar3 = 10;
			iVar4 = 4;
			iVar1 = 168;
			iVar5 = 10;
			break;
		case 155:
			StringCopy(&Var2, "PROPS_P1_E10_5" /* GXT: Black Triptych Shades */, 16);
			iVar3 = 10;
			iVar4 = 5;
			iVar1 = 178;
			iVar5 = 10;
			break;
		case 156:
			StringCopy(&Var2, "PROPS_P1_E10_6" /* GXT: White Triptych Shades */, 16);
			iVar3 = 10;
			iVar4 = 6;
			iVar1 = 160;
			iVar5 = 10;
			break;
		case 157:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 0;
			iVar1 = 100;
			iVar5 = 10;
			break;
		case 10:
			StringCopy(&Var2, "PROPS_P1_H0_0" /* GXT: Hockey Mask */, 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 320;
			iVar5 = 0;
			break;
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		case 13:
			StringCopy(&Var2, "PROPS_P1_H3_0" /* GXT: Gray Flat Cap */, 16);
			iVar3 = 3;
			iVar4 = 0;
			iVar5 = 0;
			break;
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			iVar5 = 0;
			break;
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			iVar5 = 0;
			break;
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 1;
			iVar5 = 0;
			break;
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 2;
			iVar5 = 0;
			break;
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 3;
			iVar5 = 0;
			break;
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 4;
			iVar5 = 0;
			break;
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 5;
			iVar5 = 0;
			break;
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 6;
			iVar5 = 0;
			break;
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 7;
			iVar5 = 0;
			break;
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 8;
			iVar5 = 0;
			break;
		case 25:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		case 26:
			StringCopy(&Var2, "PROPS_P1_H8_0" /* GXT: Green Monster Mask */, 16);
			iVar3 = 8;
			iVar4 = 0;
			iVar1 = 270;
			iVar5 = 0;
			break;
		case 27:
			StringCopy(&Var2, "PROPS_P1_H8_1" /* GXT: Red Monster Mask */, 16);
			iVar3 = 8;
			iVar4 = 1;
			iVar1 = 270;
			iVar5 = 0;
			break;
		case 28:
			StringCopy(&Var2, "PROPS_P1_H9_0" /* GXT: Pig Mask */, 16);
			iVar3 = 9;
			iVar4 = 0;
			iVar1 = 200;
			iVar5 = 0;
			break;
		case 29:
			StringCopy(&Var2, "PROPS_P1_H9_1" /* GXT: Dark Pig Mask */, 16);
			iVar3 = 9;
			iVar4 = 1;
			iVar1 = 200;
			iVar5 = 0;
			break;
		case 30:
			StringCopy(&Var2, "PROPS_P1_H10_0" /* GXT: Silver Skull Mask */, 16);
			iVar3 = 10;
			iVar4 = 0;
			iVar1 = 350;
			iVar5 = 0;
			break;
		case 31:
			StringCopy(&Var2, "PROPS_P1_H10_1" /* GXT: Bone Skull Mask */, 16);
			iVar3 = 10;
			iVar4 = 1;
			iVar1 = 350;
			iVar5 = 0;
			break;
		case 32:
			StringCopy(&Var2, "PROPS_P1_H11_0" /* GXT: Space Monkey Mask */, 16);
			iVar3 = 11;
			iVar4 = 0;
			iVar1 = 450;
			iVar5 = 0;
			break;
		case 33:
			StringCopy(&Var2, "PROPS_P1_H12_0" /* GXT: White Hockey Mask */, 16);
			iVar3 = 12;
			iVar4 = 0;
			iVar1 = 500;
			iVar5 = 0;
			break;
		case 34:
			StringCopy(&Var2, "PROPS_P1_H12_1" /* GXT: Red Hockey Mask */, 16);
			iVar3 = 12;
			iVar4 = 1;
			iVar1 = 500;
			iVar5 = 0;
			break;
		case 35:
			StringCopy(&Var2, "PROPS_P1_H13_0" /* GXT: Ape Mask */, 16);
			iVar3 = 13;
			iVar4 = 0;
			iVar1 = 50;
			iVar5 = 0;
			break;
		case 36:
			StringCopy(&Var2, "PROPS_P1_H13_1" /* GXT: Dark Ape Mask */, 16);
			iVar3 = 13;
			iVar4 = 1;
			iVar1 = 50;
			iVar5 = 0;
			break;
		case 37:
			StringCopy(&Var2, "PROPS_P1_H14_0" /* GXT: Carnival Orange Mask */, 16);
			iVar3 = 14;
			iVar4 = 0;
			iVar1 = 99;
			iVar5 = 0;
			break;
		case 38:
			StringCopy(&Var2, "PROPS_P1_H14_1" /* GXT: Carnival White Mask */, 16);
			iVar3 = 14;
			iVar4 = 1;
			iVar1 = 99;
			iVar5 = 0;
			break;
		case 39:
			StringCopy(&Var2, "PROPS_P1_H14_2" /* GXT: Carnival Blue Mask */, 16);
			iVar3 = 14;
			iVar4 = 2;
			iVar1 = 99;
			iVar5 = 0;
			break;
		case 40:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 15;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		case 41:
			StringCopy(&Var2, "PROPS_P1_H19_0" /* GXT: Toe Shoes Fitted Cap */, 16);
			iVar3 = 16;
			iVar4 = 0;
			iVar5 = 0;
			break;
		case 42:
			StringCopy(&Var2, "PROPS_P1_H19_1" /* GXT: Yeti Fitted Cap */, 16);
			iVar3 = 16;
			iVar4 = 1;
			iVar5 = 0;
			break;
		case 43:
			StringCopy(&Var2, "PROPS_P1_H19_2" /* GXT: OG Fitted Cap */, 16);
			iVar3 = 16;
			iVar4 = 2;
			iVar5 = 0;
			break;
		case 44:
			StringCopy(&Var2, "PROPS_P1_H19_3" /* GXT: Magnetics Fitted Cap */, 16);
			iVar3 = 16;
			iVar4 = 3;
			iVar5 = 0;
			break;
		case 45:
			StringCopy(&Var2, "PROPS_P1_H19_4" /* GXT: LS Red Fitted Cap */, 16);
			iVar3 = 16;
			iVar4 = 4;
			iVar5 = 0;
			break;
		case 46:
			StringCopy(&Var2, "PROPS_P1_H19_5" /* GXT: Los Santos Charcoal Fitted Cap */, 16);
			iVar3 = 16;
			iVar4 = 5;
			iVar5 = 0;
			break;
		case 47:
			StringCopy(&Var2, "PROPS_P1_H19_6" /* GXT: Stank Fitted Cap */, 16);
			iVar3 = 16;
			iVar4 = 6;
			iVar5 = 0;
			break;
		case 48:
			StringCopy(&Var2, "PROPS_P1_H19_7" /* GXT: Los Santos Gray Fitted Cap */, 16);
			iVar3 = 16;
			iVar4 = 7;
			iVar5 = 0;
			break;
		case 49:
			StringCopy(&Var2, "PROPS_P1_H19_8" /* GXT: Perseus Fitted Cap */, 16);
			iVar3 = 16;
			iVar4 = 8;
			iVar5 = 0;
			break;
		case 50:
			StringCopy(&Var2, "PROPS_P1_H19_9" /* GXT: Feud Slate Fitted Cap */, 16);
			iVar3 = 16;
			iVar4 = 9;
			iVar5 = 0;
			break;
		case 51:
			StringCopy(&Var2, "PROPS_P1_H19_10" /* GXT: Feud Black Fitted Cap */, 16);
			iVar3 = 16;
			iVar4 = 10;
			iVar5 = 0;
			break;
		case 52:
			StringCopy(&Var2, "PROPS_P1_H19_11" /* GXT: LS Black Fitted Cap */, 16);
			iVar3 = 16;
			iVar4 = 11;
			iVar5 = 0;
			break;
		case 53:
			StringCopy(&Var2, "PROPS_P1_H19_12" /* GXT: LS Corkers Fitted Cap */, 16);
			iVar3 = 16;
			iVar4 = 12;
			iVar5 = 0;
			break;
		case 54:
			StringCopy(&Var2, "PROPS_P1_H19_13" /* GXT: LS White Fitted Cap */, 16);
			iVar3 = 16;
			iVar4 = 13;
			iVar5 = 0;
			break;
		case 55:
			StringCopy(&Var2, "PROPS_P1_H19_14" /* GXT: Feud Green Fitted Cap */, 16);
			iVar3 = 16;
			iVar4 = 14;
			iVar5 = 0;
			break;
		case 56:
			StringCopy(&Var2, "PROPS_P1_H19_15" /* GXT: LS Olive Fitted Cap */, 16);
			iVar3 = 16;
			iVar4 = 15;
			iVar5 = 0;
			break;
		case 57:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 17;
			iVar4 = 0;
			iVar5 = 0;
			break;
		case 58:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 17;
			iVar4 = 1;
			iVar5 = 0;
			break;
		case 59:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 17;
			iVar4 = 2;
			iVar5 = 0;
			break;
		case 60:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 17;
			iVar4 = 3;
			iVar5 = 0;
			break;
		case 61:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 17;
			iVar4 = 4;
			iVar5 = 0;
			break;
		case 62:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 17;
			iVar4 = 5;
			iVar5 = 0;
			break;
		case 63:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 18;
			iVar4 = 0;
			iVar5 = 0;
			break;
		case 64:
			StringCopy(&Var2, "PROPS_P1_H19_0" /* GXT: Toe Shoes Fitted Cap */, 16);
			iVar3 = 19;
			iVar4 = 0;
			iVar1 = 30;
			iVar5 = 0;
			break;
		case 65:
			StringCopy(&Var2, "PROPS_P1_H19_1" /* GXT: Yeti Fitted Cap */, 16);
			iVar3 = 19;
			iVar4 = 1;
			iVar1 = 30;
			iVar5 = 0;
			break;
		case 66:
			StringCopy(&Var2, "PROPS_P1_H19_2" /* GXT: OG Fitted Cap */, 16);
			iVar3 = 19;
			iVar4 = 2;
			iVar1 = 32;
			iVar5 = 0;
			break;
		case 67:
			StringCopy(&Var2, "PROPS_P1_H19_3" /* GXT: Magnetics Fitted Cap */, 16);
			iVar3 = 19;
			iVar4 = 3;
			iVar1 = 35;
			iVar5 = 0;
			break;
		case 68:
			StringCopy(&Var2, "PROPS_P1_H19_4" /* GXT: LS Red Fitted Cap */, 16);
			iVar3 = 19;
			iVar4 = 4;
			iVar1 = 38;
			iVar5 = 0;
			break;
		case 69:
			StringCopy(&Var2, "PROPS_P1_H19_5" /* GXT: Los Santos Charcoal Fitted Cap */, 16);
			iVar3 = 19;
			iVar4 = 5;
			iVar1 = 42;
			iVar5 = 0;
			break;
		case 70:
			StringCopy(&Var2, "PROPS_P1_H19_6" /* GXT: Stank Fitted Cap */, 16);
			iVar3 = 19;
			iVar4 = 6;
			iVar1 = 42;
			iVar5 = 0;
			break;
		case 71:
			StringCopy(&Var2, "PROPS_P1_H19_7" /* GXT: Los Santos Gray Fitted Cap */, 16);
			iVar3 = 19;
			iVar4 = 7;
			iVar1 = 40;
			iVar5 = 0;
			break;
		case 72:
			StringCopy(&Var2, "PROPS_P1_H19_8" /* GXT: Perseus Fitted Cap */, 16);
			iVar3 = 19;
			iVar4 = 8;
			iVar1 = 45;
			iVar5 = 0;
			break;
		case 73:
			StringCopy(&Var2, "PROPS_P1_H19_9" /* GXT: Feud Slate Fitted Cap */, 16);
			iVar3 = 19;
			iVar4 = 9;
			iVar1 = 48;
			iVar5 = 0;
			break;
		case 74:
			StringCopy(&Var2, "PROPS_P1_H19_10" /* GXT: Feud Black Fitted Cap */, 16);
			iVar3 = 19;
			iVar4 = 10;
			iVar1 = 25;
			iVar5 = 0;
			break;
		case 75:
			StringCopy(&Var2, "PROPS_P1_H19_11" /* GXT: LS Black Fitted Cap */, 16);
			iVar3 = 19;
			iVar4 = 11;
			iVar1 = 25;
			iVar5 = 0;
			break;
		case 76:
			StringCopy(&Var2, "PROPS_P1_H19_12" /* GXT: LS Corkers Fitted Cap */, 16);
			iVar3 = 19;
			iVar4 = 12;
			iVar1 = 28;
			iVar5 = 0;
			break;
		case 77:
			StringCopy(&Var2, "PROPS_P1_H19_13" /* GXT: LS White Fitted Cap */, 16);
			iVar3 = 19;
			iVar4 = 13;
			iVar1 = 28;
			iVar5 = 0;
			break;
		case 78:
			StringCopy(&Var2, "PROPS_P1_H19_14" /* GXT: Feud Green Fitted Cap */, 16);
			iVar3 = 19;
			iVar4 = 14;
			iVar1 = 30;
			iVar5 = 0;
			break;
		case 79:
			StringCopy(&Var2, "PROPS_P1_H19_15" /* GXT: LS Olive Fitted Cap */, 16);
			iVar3 = 19;
			iVar4 = 15;
			iVar1 = 35;
			iVar5 = 0;
			break;
		case 80:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 20;
			iVar4 = 0;
			iVar5 = 0;
			break;
		case 81:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 21;
			iVar4 = 0;
			iVar5 = 0;
			break;
		default:
			func_95(iVar7, iParam0, 175, -1);
			return;
			break;
	}
	func_88(&(Global_78130[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_114(int iParam0)//Position - 0x13E4B
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 13;
	Global_78130[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		default:
			func_95(iVar7, iParam0, 9, -1);
			return;
			break;
	}
	func_88(&(Global_78130[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_115(int iParam0)//Position - 0x13F92
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 12;
	Global_78130[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "OUTFIT_P1_0" /* GXT: Blue Shirt, Jeans */, 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 1:
			StringCopy(&Var2, "OUTFIT_P1_2" /* GXT: White Tuxedo */, 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		case 2:
			StringCopy(&Var2, "OUTFIT_P1_4" /* GXT: Golf */, 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		case 4:
			StringCopy(&Var2, "OUTFIT_P1_7" /* GXT: Scuba Land */, 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		case 5:
			StringCopy(&Var2, "OUTFIT_P1_10" /* GXT: Stealth */, 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		case 6:
			StringCopy(&Var2, "OUTFIT_P1_11" /* GXT: Triathlon */, 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		case 7:
			StringCopy(&Var2, "OUTFIT_P1_12" /* GXT: Fireman */, 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		case 8:
			StringCopy(&Var2, "OUTFIT_P1_13" /* GXT: Exterminator */, 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		case 9:
			StringCopy(&Var2, "OUTFIT_P1_15" /* GXT: Black Boiler Suit */, 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		case 10:
			StringCopy(&Var2, "OUTFIT_P1_16" /* GXT: Skydiving */, 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		case 11:
			StringCopy(&Var2, "OUTFIT_P1_17" /* GXT: Tuxedo */, 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 10000;
			break;
		case 12:
			StringCopy(&Var2, "OUTFIT_P1_18" /* GXT: Blue Boiler Suit */, 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		case 13:
			StringCopy(&Var2, "OUTFIT_P1_19" /* GXT: Navy Boiler Suit */, 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 105;
			break;
		case 14:
			StringCopy(&Var2, "OUTFIT_P1_20" /* GXT: Gray Boiler Suit */, 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 105;
			break;
		case 15:
			StringCopy(&Var2, "OUTFIT_P1_21" /* GXT: Green Boiler Suit */, 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 105;
			break;
		case 16:
			StringCopy(&Var2, "OUTFIT_P1_22" /* GXT: Ash Hoodie, Sweatpants */, 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		case 17:
			StringCopy(&Var2, "OUTFIT_P1_23" /* GXT: Yellow Check Shirt, Jeans */, 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		case 18:
			StringCopy(&Var2, "OUTFIT_P1_24" /* GXT: Gray Plaid Suit */, 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		case 19:
			StringCopy(&Var2, "OUTFIT_P1_25" /* GXT: Black Hoodie, Jeans */, 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		case 20:
			StringCopy(&Var2, "OUTFIT_P1_26" /* GXT: Track Jacket, Jeans */, 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		case 21:
			StringCopy(&Var2, "OUTFIT_P1_27" /* GXT: Off-White Shirt, Jeans */, 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		case 22:
			StringCopy(&Var2, "OUTFIT_P1_28" /* GXT: Gray Plaid 3 Piece Suit */, 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4000;
			break;
		case 23:
			StringCopy(&Var2, "OUTFIT_P1_29" /* GXT: Ash Plaid 3 Piece Suit */, 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4500;
			break;
		case 24:
			StringCopy(&Var2, "OUTFIT_P1_30" /* GXT: Charcoal Plaid 3 Piece Suit */, 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4500;
			break;
		case 25:
			StringCopy(&Var2, "OUTFIT_P1_31" /* GXT: Tan Plaid 3 Piece Suit */, 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4650;
			break;
		case 26:
			StringCopy(&Var2, "OUTFIT_P1_32" /* GXT: Slate 3 Piece Suit */, 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4900;
			break;
		case 27:
			StringCopy(&Var2, "OUTFIT_P1_33" /* GXT: Ash 3 Piece Suit */, 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5000;
			break;
		case 28:
			StringCopy(&Var2, "OUTFIT_P1_34" /* GXT: Stone 3 Piece Suit */, 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4750;
			break;
		case 29:
			StringCopy(&Var2, "OUTFIT_P1_35" /* GXT: Oatmeal 3 Piece Suit */, 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4750;
			break;
		case 30:
			StringCopy(&Var2, "OUTFIT_P1_36" /* GXT: Navy Plaid Piped 3 Piece Suit */, 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5200;
			break;
		case 31:
			StringCopy(&Var2, "OUTFIT_P1_37" /* GXT: Off-White 3 Piece Suit */, 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5200;
			break;
		case 32:
			StringCopy(&Var2, "OUTFIT_P1_38" /* GXT: Red Piped 3 Piece Suit */, 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5500;
			break;
		case 33:
			StringCopy(&Var2, "OUTFIT_P1_39" /* GXT: Gray Piped 3 Piece Suit */, 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5900;
			break;
		case 34:
			StringCopy(&Var2, "OUTFIT_P1_40" /* GXT: Navy 3 Piece Suit */, 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5900;
			break;
		case 35:
			StringCopy(&Var2, "OUTFIT_P1_41" /* GXT: Russet Piped 3 Piece Suit */, 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5900;
			break;
		case 36:
			StringCopy(&Var2, "OUTFIT_P1_42" /* GXT: Green 3 Piece Suit */, 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5900;
			break;
		case 37:
			StringCopy(&Var2, "OUTFIT_P1_43" /* GXT: Beige 3 Piece Suit */, 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5900;
			break;
		case 38:
			StringCopy(&Var2, "OUTFIT_P1_47" /* GXT: Underwear */, 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 3000;
			break;
		case 39:
			StringCopy(&Var2, "OUTFIT_P1_48" /* GXT: LS Black Hoodie, Jeans */, 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 3000;
			break;
		case 40:
			StringCopy(&Var2, "OUTFIT_P1_49" /* GXT: Gray Hoodie, Jeans */, 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 3000;
			break;
		case 41:
			StringCopy(&Var2, "OUTFIT_P1_10" /* GXT: Stealth */, 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		case 42:
			StringCopy(&Var2, "OUTFIT_P1_50" /* GXT: Moto X */, 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		case 43:
			StringCopy(&Var2, "OUTFIT_P1_51" /* GXT: U.R. Jersey, Fatigues */, 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		case 44:
			StringCopy(&Var2, "OUTFIT_P1_52" /* GXT: U.R. OG Tee, Bike Leathers */, 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		case 45:
			StringCopy(&Var2, "OUTFIT_P1_53" /* GXT: Uptown Riders Longsleeve, Camos */, 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		case 46:
			StringCopy(&Var2, "OUTFIT_P1_54" /* GXT: U.R. Jacket, Baggies */, 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		default:
			func_95(iVar7, iParam0, 47, -1);
			return;
			break;
	}
	func_88(&(Global_78130[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_116(int iParam0)//Position - 0x144E2
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 11;
	Global_78130[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 1;
			break;
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 2;
			break;
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 3;
			break;
		case 5:
			StringCopy(&Var2, "JBIB_P1_1_0", 16);
			iVar3 = 2;
			iVar4 = 0;
			break;
		case 6:
			StringCopy(&Var2, "JBIB_P1_1_1", 16);
			iVar3 = 2;
			iVar4 = 1;
			break;
		case 7:
			StringCopy(&Var2, "JBIB_P1_1_2", 16);
			iVar3 = 2;
			iVar4 = 2;
			break;
		case 8:
			StringCopy(&Var2, "JBIB_P1_1_3", 16);
			iVar3 = 2;
			iVar4 = 3;
			break;
		case 9:
			StringCopy(&Var2, "JBIB_P1_3_0" /* GXT: Silver Plaid Vest */, 16);
			iVar3 = 3;
			iVar4 = 0;
			break;
		case 10:
			StringCopy(&Var2, "JBIB_P1_3_1" /* GXT: Ash Vest */, 16);
			iVar3 = 3;
			iVar4 = 1;
			break;
		case 11:
			StringCopy(&Var2, "JBIB_P1_3_2" /* GXT: Navy Vest */, 16);
			iVar3 = 3;
			iVar4 = 2;
			break;
		case 12:
			StringCopy(&Var2, "JBIB_P1_3_3" /* GXT: Colorful Plaid Vest */, 16);
			iVar3 = 3;
			iVar4 = 3;
			break;
		case 13:
			StringCopy(&Var2, "JBIB_P1_3_4" /* GXT: Beige Vest */, 16);
			iVar3 = 3;
			iVar4 = 4;
			break;
		case 14:
			StringCopy(&Var2, "JBIB_P1_3_5" /* GXT: Black Vest */, 16);
			iVar3 = 3;
			iVar4 = 5;
			break;
		case 15:
			StringCopy(&Var2, "JBIB_P1_3_6" /* GXT: Gray Plaid Vest */, 16);
			iVar3 = 3;
			iVar4 = 6;
			break;
		case 16:
			StringCopy(&Var2, "JBIB_P1_3_7" /* GXT: Jade Plaid Vest */, 16);
			iVar3 = 3;
			iVar4 = 7;
			break;
		case 17:
			StringCopy(&Var2, "JBIB_P1_3_8" /* GXT: Beige Plaid Vest */, 16);
			iVar3 = 3;
			iVar4 = 8;
			break;
		case 18:
			StringCopy(&Var2, "JBIB_P1_3_9" /* GXT: Brown Plaid Vest */, 16);
			iVar3 = 3;
			iVar4 = 9;
			break;
		case 19:
			StringCopy(&Var2, "JBIB_P1_3_10" /* GXT: Brown Vest */, 16);
			iVar3 = 3;
			iVar4 = 10;
			break;
		case 20:
			StringCopy(&Var2, "JBIB_P1_3_11" /* GXT: White Plaid Vest */, 16);
			iVar3 = 3;
			iVar4 = 11;
			break;
		case 21:
			StringCopy(&Var2, "JBIB_P1_3_12" /* GXT: Pearl Plaid Vest */, 16);
			iVar3 = 3;
			iVar4 = 12;
			break;
		case 22:
			StringCopy(&Var2, "JBIB_P1_3_13" /* GXT: Warm Gray Vest */, 16);
			iVar3 = 3;
			iVar4 = 13;
			break;
		case 23:
			StringCopy(&Var2, "JBIB_P1_3_14" /* GXT: Topaz Vest */, 16);
			iVar3 = 3;
			iVar4 = 14;
			break;
		case 24:
			StringCopy(&Var2, "JBIB_P1_3_15" /* GXT: Plum Vest */, 16);
			iVar3 = 3;
			iVar4 = 15;
			break;
		case 25:
			StringCopy(&Var2, "JBIB_P1_3_0" /* GXT: Silver Plaid Vest */, 16);
			iVar3 = 4;
			iVar4 = 0;
			break;
		case 26:
			StringCopy(&Var2, "JBIB_P1_3_1" /* GXT: Ash Vest */, 16);
			iVar3 = 4;
			iVar4 = 1;
			break;
		case 27:
			StringCopy(&Var2, "JBIB_P1_3_2" /* GXT: Navy Vest */, 16);
			iVar3 = 4;
			iVar4 = 2;
			break;
		case 28:
			StringCopy(&Var2, "JBIB_P1_3_3" /* GXT: Colorful Plaid Vest */, 16);
			iVar3 = 4;
			iVar4 = 3;
			break;
		case 29:
			StringCopy(&Var2, "JBIB_P1_3_4" /* GXT: Beige Vest */, 16);
			iVar3 = 4;
			iVar4 = 4;
			break;
		case 30:
			StringCopy(&Var2, "JBIB_P1_3_5" /* GXT: Black Vest */, 16);
			iVar3 = 4;
			iVar4 = 5;
			break;
		case 31:
			StringCopy(&Var2, "JBIB_P1_3_6" /* GXT: Gray Plaid Vest */, 16);
			iVar3 = 4;
			iVar4 = 6;
			break;
		case 32:
			StringCopy(&Var2, "JBIB_P1_3_7" /* GXT: Jade Plaid Vest */, 16);
			iVar3 = 4;
			iVar4 = 7;
			break;
		case 33:
			StringCopy(&Var2, "JBIB_P1_3_8" /* GXT: Beige Plaid Vest */, 16);
			iVar3 = 4;
			iVar4 = 8;
			break;
		case 34:
			StringCopy(&Var2, "JBIB_P1_3_9" /* GXT: Brown Plaid Vest */, 16);
			iVar3 = 4;
			iVar4 = 9;
			break;
		case 35:
			StringCopy(&Var2, "JBIB_P1_3_10" /* GXT: Brown Vest */, 16);
			iVar3 = 4;
			iVar4 = 10;
			break;
		case 36:
			StringCopy(&Var2, "JBIB_P1_3_11" /* GXT: White Plaid Vest */, 16);
			iVar3 = 4;
			iVar4 = 11;
			break;
		case 37:
			StringCopy(&Var2, "JBIB_P1_3_12" /* GXT: Pearl Plaid Vest */, 16);
			iVar3 = 4;
			iVar4 = 12;
			break;
		case 38:
			StringCopy(&Var2, "JBIB_P1_3_13" /* GXT: Warm Gray Vest */, 16);
			iVar3 = 4;
			iVar4 = 13;
			break;
		case 39:
			StringCopy(&Var2, "JBIB_P1_3_14" /* GXT: Topaz Vest */, 16);
			iVar3 = 4;
			iVar4 = 14;
			break;
		case 40:
			StringCopy(&Var2, "JBIB_P1_3_15" /* GXT: Plum Vest */, 16);
			iVar3 = 4;
			iVar4 = 15;
			break;
		case 41:
			StringCopy(&Var2, "JBIB_P1_5_0" /* GXT: White Shirt */, 16);
			iVar3 = 5;
			iVar4 = 0;
			break;
		case 42:
			StringCopy(&Var2, "JBIB_P1_6_0" /* GXT: White Shirt */, 16);
			iVar3 = 6;
			iVar4 = 0;
			break;
		case 43:
			StringCopy(&Var2, "JBIB_P1_6_1" /* GXT: Two-Tone Shirt */, 16);
			iVar3 = 6;
			iVar4 = 1;
			break;
		case 44:
			StringCopy(&Var2, "JBIB_P1_7_0" /* GXT: Charcoal Hoodie */, 16);
			iVar3 = 7;
			iVar4 = 0;
			break;
		case 45:
			StringCopy(&Var2, "JBIB_P1_8_0" /* GXT: White T-Shirt */, 16);
			iVar3 = 8;
			iVar4 = 0;
			break;
		case 46:
			StringCopy(&Var2, "JBIB_P1_9_0" /* GXT: Blue Shirt */, 16);
			iVar3 = 9;
			iVar4 = 0;
			break;
		case 47:
			StringCopy(&Var2, "JBIB_P1_10_0" /* GXT: White T-Shirt */, 16);
			iVar3 = 10;
			iVar4 = 0;
			break;
		case 48:
			StringCopy(&Var2, "JBIB_P1_10_1" /* GXT: Crevis T-Shirt */, 16);
			iVar3 = 10;
			iVar4 = 1;
			iVar1 = 48;
			break;
		case 49:
			StringCopy(&Var2, "JBIB_P1_10_2" /* GXT: Yeti T-Shirt */, 16);
			iVar3 = 10;
			iVar4 = 2;
			iVar1 = 35;
			break;
		case 50:
			StringCopy(&Var2, "JBIB_P1_10_3" /* GXT: Sweatbox T-Shirt */, 16);
			iVar3 = 10;
			iVar4 = 3;
			iVar1 = 32;
			break;
		case 51:
			StringCopy(&Var2, "JBIB_P1_10_4" /* GXT: Trey Baker T-Shirt */, 16);
			iVar3 = 10;
			iVar4 = 4;
			iVar1 = 35;
			break;
		case 52:
			StringCopy(&Var2, "JBIB_P1_10_5" /* GXT: Black T-Shirt */, 16);
			iVar3 = 10;
			iVar4 = 5;
			iVar1 = 48;
			break;
		case 53:
			StringCopy(&Var2, "JBIB_P1_10_6" /* GXT: Fruntalot T-Shirt */, 16);
			iVar3 = 10;
			iVar4 = 6;
			iVar1 = 52;
			break;
		case 54:
			StringCopy(&Var2, "JBIB_P1_10_7" /* GXT: Kingz of Los Santos T-Shirt */, 16);
			iVar3 = 10;
			iVar4 = 7;
			iVar1 = 38;
			break;
		case 55:
			StringCopy(&Var2, "JBIB_P1_10_8" /* GXT: Ten Off The Chain T-Shirt */, 16);
			iVar3 = 10;
			iVar4 = 8;
			iVar1 = 42;
			break;
		case 56:
			StringCopy(&Var2, "JBIB_P1_10_9" /* GXT: Gray T-Shirt */, 16);
			iVar3 = 10;
			iVar4 = 9;
			iVar1 = 38;
			break;
		case 57:
			StringCopy(&Var2, "JBIB_P1_10_10" /* GXT: Green T-Shirt */, 16);
			iVar3 = 10;
			iVar4 = 10;
			iVar1 = 35;
			break;
		case 58:
			StringCopy(&Var2, "JBIB_P1_10_11" /* GXT: Camo T-Shirt */, 16);
			iVar3 = 10;
			iVar4 = 11;
			iVar1 = 48;
			break;
		case 59:
			StringCopy(&Var2, "JBIB_P1_10_12" /* GXT: Yeti Rainbow T-Shirt */, 16);
			iVar3 = 10;
			iVar4 = 12;
			iVar1 = 42;
			break;
		case 60:
			StringCopy(&Var2, "JBIB_P1_10_13" /* GXT: Feud Banded T-Shirt */, 16);
			iVar3 = 10;
			iVar4 = 13;
			iVar1 = 45;
			break;
		case 61:
			StringCopy(&Var2, "JBIB_P1_10_14" /* GXT: Yogarishima T-Shirt */, 16);
			iVar3 = 10;
			iVar4 = 14;
			iVar1 = 45;
			break;
		case 62:
			StringCopy(&Var2, "JBIB_P1_10_15" /* GXT: Feud Gray T-Shirt */, 16);
			iVar3 = 10;
			iVar4 = 15;
			iVar1 = 49;
			break;
		default:
			func_95(iVar7, iParam0, 63, -1);
			return;
			break;
	}
	func_88(&(Global_78130[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_117(int iParam0)//Position - 0x14B4B
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 7;
	Global_78130[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		default:
			func_95(iVar7, iParam0, 1, -1);
			return;
			break;
	}
	func_88(&(Global_78130[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_118(int iParam0)//Position - 0x14BBE
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 1;
	Global_78130[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "BERD_P1_0_0" /* GXT: Clean Shave */, 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		case 1:
			StringCopy(&Var2, "BERD_P1_1_0" /* GXT: Full Van Dyke */, 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		case 2:
			StringCopy(&Var2, "BERD_P1_2_0" /* GXT: Methodical */, 16);
			iVar3 = 2;
			iVar4 = 0;
			break;
		case 3:
			StringCopy(&Var2, "BERD_P1_3_0" /* GXT: Full Spartan */, 16);
			iVar3 = 3;
			iVar4 = 0;
			break;
		case 4:
			StringCopy(&Var2, "BERD_P1_4_0" /* GXT: Stubble */, 16);
			iVar3 = 4;
			iVar4 = 0;
			break;
		default:
			func_95(iVar7, iParam0, 5, -1);
			return;
			break;
	}
	func_88(&(Global_78130[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_119(int iParam0)//Position - 0x14C8E
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 10;
	Global_78130[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			break;
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			break;
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 1;
			break;
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 2;
			break;
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 3;
			break;
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 4;
			break;
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 5;
			break;
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			break;
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 1;
			break;
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 2;
			break;
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 3;
			break;
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 4;
			break;
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 5;
			break;
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 6;
			break;
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			break;
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 1;
			break;
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 2;
			break;
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 3;
			break;
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 4;
			break;
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 5;
			break;
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 6;
			break;
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 7;
			break;
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 8;
			break;
		case 25:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 9;
			break;
		case 26:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 10;
			break;
		case 27:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 11;
			break;
		case 28:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 12;
			break;
		case 29:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 13;
			break;
		case 30:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 14;
			break;
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 15;
			break;
		case 32:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			break;
		case 33:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 1;
			break;
		case 34:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 2;
			break;
		case 35:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 3;
			break;
		case 36:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 4;
			break;
		case 37:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 5;
			break;
		case 38:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 6;
			break;
		case 39:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			break;
		case 40:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 1;
			break;
		case 41:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 2;
			break;
		case 42:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 3;
			break;
		case 43:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 4;
			break;
		case 44:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 5;
			break;
		case 45:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 6;
			break;
		case 46:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 7;
			break;
		case 47:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 0;
			break;
		case 48:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 1;
			break;
		case 49:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 2;
			break;
		case 50:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 3;
			break;
		case 51:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			break;
		case 52:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			break;
		default:
			func_95(iVar7, iParam0, 53, -1);
			return;
			break;
	}
	func_88(&(Global_78130[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_120(int iParam0)//Position - 0x15189
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 9;
	Global_78130[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 5:
			StringCopy(&Var2, "SPEC2_P0_08_0" /* GXT: Red Wrestler Mask */, 16);
			iVar3 = 5;
			iVar4 = 0;
			iVar1 = 125;
			break;
		case 6:
			StringCopy(&Var2, "SPEC2_P0_08_1" /* GXT: Green Wrestler Mask */, 16);
			iVar3 = 5;
			iVar4 = 1;
			iVar1 = 150;
			break;
		case 7:
			StringCopy(&Var2, "SPEC2_P0_08_2" /* GXT: Patriot Wrestler Mask */, 16);
			iVar3 = 5;
			iVar4 = 2;
			iVar1 = 175;
			break;
		case 8:
			StringCopy(&Var2, "SPEC2_P0_08_3" /* GXT: Domino Wrestler Mask */, 16);
			iVar3 = 5;
			iVar4 = 3;
			iVar1 = 85;
			break;
		case 9:
			StringCopy(&Var2, "SPEC2_P0_08_4" /* GXT: Gray Wrestler Mask */, 16);
			iVar3 = 5;
			iVar4 = 4;
			iVar1 = 150;
			break;
		case 10:
			StringCopy(&Var2, "SPEC2_P0_08_5" /* GXT: Phoenix Wrestler Mask */, 16);
			iVar3 = 5;
			iVar4 = 5;
			iVar1 = 175;
			break;
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			break;
		default:
			func_95(iVar7, iParam0, 12, -1);
			return;
			break;
	}
	func_88(&(Global_78130[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_121(int iParam0)//Position - 0x1531A
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 8;
	Global_78130[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 9:
			StringCopy(&Var2, "SPEC_P1_9_0" /* GXT: Bandana */, 16);
			iVar3 = 9;
			iVar4 = 0;
			break;
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 11:
			StringCopy(&Var2, "SPEC_P1_11_0" /* GXT: Silver Tie */, 16);
			iVar3 = 11;
			iVar4 = 0;
			iVar1 = 195;
			break;
		case 12:
			StringCopy(&Var2, "SPEC_P1_11_1" /* GXT: Gold Tie */, 16);
			iVar3 = 11;
			iVar4 = 1;
			iVar1 = 195;
			break;
		case 13:
			StringCopy(&Var2, "SPEC_P1_11_2" /* GXT: Cream Tie */, 16);
			iVar3 = 11;
			iVar4 = 2;
			iVar1 = 195;
			break;
		case 14:
			StringCopy(&Var2, "SPEC_P1_11_3" /* GXT: Blue Diamond Tie */, 16);
			iVar3 = 11;
			iVar4 = 3;
			iVar1 = 250;
			break;
		case 15:
			StringCopy(&Var2, "SPEC_P1_11_4" /* GXT: Blue Spotted Tie */, 16);
			iVar3 = 11;
			iVar4 = 4;
			iVar1 = 250;
			break;
		case 16:
			StringCopy(&Var2, "SPEC_P1_11_5" /* GXT: White Spotted Tie */, 16);
			iVar3 = 11;
			iVar4 = 5;
			iVar1 = 250;
			break;
		case 17:
			StringCopy(&Var2, "SPEC_P1_11_6" /* GXT: Dark Gray Tie */, 16);
			iVar3 = 11;
			iVar4 = 6;
			iVar1 = 195;
			break;
		case 18:
			StringCopy(&Var2, "SPEC_P1_11_7" /* GXT: Gray Striped Tie */, 16);
			iVar3 = 11;
			iVar4 = 7;
			iVar1 = 250;
			break;
		case 19:
			StringCopy(&Var2, "SPEC_P1_11_8" /* GXT: Silver Striped Tie */, 16);
			iVar3 = 11;
			iVar4 = 8;
			iVar1 = 250;
			break;
		case 20:
			StringCopy(&Var2, "SPEC_P1_11_9" /* GXT: Red Striped Tie */, 16);
			iVar3 = 11;
			iVar4 = 9;
			iVar1 = 250;
			break;
		case 21:
			StringCopy(&Var2, "SPEC_P1_11_10" /* GXT: Bronze Striped Tie */, 16);
			iVar3 = 11;
			iVar4 = 10;
			iVar1 = 250;
			break;
		case 22:
			StringCopy(&Var2, "SPEC_P1_11_11" /* GXT: White Diamond Tie */, 16);
			iVar3 = 11;
			iVar4 = 11;
			iVar1 = 195;
			break;
		case 23:
			StringCopy(&Var2, "SPEC_P1_11_12" /* GXT: Black Diamond Tie */, 16);
			iVar3 = 11;
			iVar4 = 12;
			iVar1 = 250;
			break;
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 25:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 13;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 26:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 14;
			iVar4 = 0;
			break;
		case 27:
			StringCopy(&Var2, "SPEC_P1_15_0" /* GXT: Purple Tie */, 16);
			iVar3 = 15;
			iVar4 = 0;
			break;
		case 28:
			StringCopy(&Var2, "SPEC_P1_15_1" /* GXT: Cream Tie */, 16);
			iVar3 = 15;
			iVar4 = 1;
			break;
		case 29:
			StringCopy(&Var2, "SPEC_P1_15_2" /* GXT: Beige Tie */, 16);
			iVar3 = 15;
			iVar4 = 2;
			break;
		case 30:
			StringCopy(&Var2, "SPEC_P1_15_3" /* GXT: Ash Tie */, 16);
			iVar3 = 15;
			iVar4 = 3;
			break;
		case 31:
			StringCopy(&Var2, "SPEC_P1_15_4" /* GXT: White Diamond Tie */, 16);
			iVar3 = 15;
			iVar4 = 4;
			break;
		case 32:
			StringCopy(&Var2, "SPEC_P1_15_5" /* GXT: Gray Diamond Tie */, 16);
			iVar3 = 15;
			iVar4 = 5;
			break;
		case 33:
			StringCopy(&Var2, "SPEC_P1_15_6" /* GXT: Beige Striped Tie */, 16);
			iVar3 = 15;
			iVar4 = 6;
			break;
		case 34:
			StringCopy(&Var2, "SPEC_P1_15_7" /* GXT: Red Striped Tie */, 16);
			iVar3 = 15;
			iVar4 = 7;
			break;
		case 35:
			StringCopy(&Var2, "SPEC_P1_15_8" /* GXT: Russet Wool Tie */, 16);
			iVar3 = 15;
			iVar4 = 8;
			break;
		case 36:
			StringCopy(&Var2, "SPEC_P1_15_9" /* GXT: Gray Striped Tie */, 16);
			iVar3 = 15;
			iVar4 = 9;
			break;
		case 37:
			StringCopy(&Var2, "SPEC_P1_15_10" /* GXT: Gray Wool Tie */, 16);
			iVar3 = 15;
			iVar4 = 10;
			break;
		case 38:
			StringCopy(&Var2, "SPEC_P1_15_11" /* GXT: Off-White Tie */, 16);
			iVar3 = 15;
			iVar4 = 11;
			break;
		case 39:
			StringCopy(&Var2, "SPEC_P1_15_12" /* GXT: Blue Diamond Tie */, 16);
			iVar3 = 15;
			iVar4 = 12;
			break;
		case 40:
			StringCopy(&Var2, "SPEC_P1_15_13" /* GXT: Brown Wool Tie */, 16);
			iVar3 = 15;
			iVar4 = 13;
			break;
		case 41:
			StringCopy(&Var2, "SPEC_P1_15_14" /* GXT: Gray Textured Tie */, 16);
			iVar3 = 15;
			iVar4 = 14;
			break;
		case 42:
			StringCopy(&Var2, "SPEC_P1_15_15" /* GXT: Amethyst Tie */, 16);
			iVar3 = 15;
			iVar4 = 15;
			break;
		case 43:
			StringCopy(&Var2, "SPEC_P1_15_0" /* GXT: Purple Tie */, 16);
			iVar3 = 16;
			iVar4 = 0;
			break;
		case 44:
			StringCopy(&Var2, "SPEC_P1_15_1" /* GXT: Cream Tie */, 16);
			iVar3 = 16;
			iVar4 = 1;
			break;
		case 45:
			StringCopy(&Var2, "SPEC_P1_15_2" /* GXT: Beige Tie */, 16);
			iVar3 = 16;
			iVar4 = 2;
			break;
		case 46:
			StringCopy(&Var2, "SPEC_P1_15_3" /* GXT: Ash Tie */, 16);
			iVar3 = 16;
			iVar4 = 3;
			break;
		case 47:
			StringCopy(&Var2, "SPEC_P1_15_4" /* GXT: White Diamond Tie */, 16);
			iVar3 = 16;
			iVar4 = 4;
			break;
		case 48:
			StringCopy(&Var2, "SPEC_P1_15_5" /* GXT: Gray Diamond Tie */, 16);
			iVar3 = 16;
			iVar4 = 5;
			break;
		case 49:
			StringCopy(&Var2, "SPEC_P1_15_6" /* GXT: Beige Striped Tie */, 16);
			iVar3 = 16;
			iVar4 = 6;
			break;
		case 50:
			StringCopy(&Var2, "SPEC_P1_15_7" /* GXT: Red Striped Tie */, 16);
			iVar3 = 16;
			iVar4 = 7;
			break;
		case 51:
			StringCopy(&Var2, "SPEC_P1_15_8" /* GXT: Russet Wool Tie */, 16);
			iVar3 = 16;
			iVar4 = 8;
			break;
		case 52:
			StringCopy(&Var2, "SPEC_P1_15_9" /* GXT: Gray Striped Tie */, 16);
			iVar3 = 16;
			iVar4 = 9;
			break;
		case 53:
			StringCopy(&Var2, "SPEC_P1_15_10" /* GXT: Gray Wool Tie */, 16);
			iVar3 = 16;
			iVar4 = 10;
			break;
		case 54:
			StringCopy(&Var2, "SPEC_P1_15_11" /* GXT: Off-White Tie */, 16);
			iVar3 = 16;
			iVar4 = 11;
			break;
		case 55:
			StringCopy(&Var2, "SPEC_P1_15_12" /* GXT: Blue Diamond Tie */, 16);
			iVar3 = 16;
			iVar4 = 12;
			break;
		case 56:
			StringCopy(&Var2, "SPEC_P1_15_13" /* GXT: Brown Wool Tie */, 16);
			iVar3 = 16;
			iVar4 = 13;
			break;
		case 57:
			StringCopy(&Var2, "SPEC_P1_15_14" /* GXT: Gray Textured Tie */, 16);
			iVar3 = 16;
			iVar4 = 14;
			break;
		case 58:
			StringCopy(&Var2, "SPEC_P1_15_15" /* GXT: Amethyst Tie */, 16);
			iVar3 = 16;
			iVar4 = 15;
			break;
		case 59:
			StringCopy(&Var2, "SPEC_P1_15_0" /* GXT: Purple Tie */, 16);
			iVar3 = 17;
			iVar4 = 0;
			break;
		case 60:
			StringCopy(&Var2, "SPEC_P1_15_1" /* GXT: Cream Tie */, 16);
			iVar3 = 17;
			iVar4 = 1;
			break;
		case 61:
			StringCopy(&Var2, "SPEC_P1_15_2" /* GXT: Beige Tie */, 16);
			iVar3 = 17;
			iVar4 = 2;
			break;
		case 62:
			StringCopy(&Var2, "SPEC_P1_15_3" /* GXT: Ash Tie */, 16);
			iVar3 = 17;
			iVar4 = 3;
			break;
		case 63:
			StringCopy(&Var2, "SPEC_P1_15_4" /* GXT: White Diamond Tie */, 16);
			iVar3 = 17;
			iVar4 = 4;
			break;
		case 64:
			StringCopy(&Var2, "SPEC_P1_15_5" /* GXT: Gray Diamond Tie */, 16);
			iVar3 = 17;
			iVar4 = 5;
			break;
		case 65:
			StringCopy(&Var2, "SPEC_P1_15_6" /* GXT: Beige Striped Tie */, 16);
			iVar3 = 17;
			iVar4 = 6;
			break;
		case 66:
			StringCopy(&Var2, "SPEC_P1_15_7" /* GXT: Red Striped Tie */, 16);
			iVar3 = 17;
			iVar4 = 7;
			break;
		case 67:
			StringCopy(&Var2, "SPEC_P1_15_8" /* GXT: Russet Wool Tie */, 16);
			iVar3 = 17;
			iVar4 = 8;
			break;
		case 68:
			StringCopy(&Var2, "SPEC_P1_15_9" /* GXT: Gray Striped Tie */, 16);
			iVar3 = 17;
			iVar4 = 9;
			break;
		case 69:
			StringCopy(&Var2, "SPEC_P1_15_10" /* GXT: Gray Wool Tie */, 16);
			iVar3 = 17;
			iVar4 = 10;
			break;
		case 70:
			StringCopy(&Var2, "SPEC_P1_15_11" /* GXT: Off-White Tie */, 16);
			iVar3 = 17;
			iVar4 = 11;
			break;
		case 71:
			StringCopy(&Var2, "SPEC_P1_15_12" /* GXT: Blue Diamond Tie */, 16);
			iVar3 = 17;
			iVar4 = 12;
			break;
		case 72:
			StringCopy(&Var2, "SPEC_P1_15_13" /* GXT: Brown Wool Tie */, 16);
			iVar3 = 17;
			iVar4 = 13;
			break;
		case 73:
			StringCopy(&Var2, "SPEC_P1_15_14" /* GXT: Gray Textured Tie */, 16);
			iVar3 = 17;
			iVar4 = 14;
			break;
		case 74:
			StringCopy(&Var2, "SPEC_P1_15_15" /* GXT: Amethyst Tie */, 16);
			iVar3 = 17;
			iVar4 = 15;
			break;
		case 75:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 18;
			iVar4 = 0;
			break;
		case 76:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 19;
			iVar4 = 0;
			break;
		default:
			func_95(iVar7, iParam0, 77, -1);
			return;
			break;
	}
	func_88(&(Global_78130[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_122(int iParam0)//Position - 0x15B09
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 5;
	Global_78130[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 1;
			bVar0 = true;
			break;
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			break;
		default:
			func_95(iVar7, iParam0, 7, -1);
			return;
			break;
	}
	func_88(&(Global_78130[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_123(int iParam0)//Position - 0x15C12
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 6;
	Global_78130[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "FEET_P1_00_0" /* GXT: White Athletic Shoes */, 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		case 1:
			StringCopy(&Var2, "FEET_P1_00_1" /* GXT: All White Athletic Shoes */, 16);
			iVar3 = 0;
			iVar4 = 1;
			iVar1 = 80;
			break;
		case 2:
			StringCopy(&Var2, "FEET_P1_00_2" /* GXT: Charcoal Two-Tone Athletic Shoes */, 16);
			iVar3 = 0;
			iVar4 = 2;
			iVar1 = 80;
			break;
		case 3:
			StringCopy(&Var2, "FEET_P1_00_3" /* GXT: Yellow Athletic Shoes */, 16);
			iVar3 = 0;
			iVar4 = 3;
			iVar1 = 89;
			break;
		case 4:
			StringCopy(&Var2, "FEET_P1_00_4" /* GXT: Gray Athletic Shoes */, 16);
			iVar3 = 0;
			iVar4 = 4;
			iVar1 = 45;
			break;
		case 5:
			StringCopy(&Var2, "FEET_P1_00_5" /* GXT: Black Two-Tone Athletic Shoes */, 16);
			iVar3 = 0;
			iVar4 = 5;
			iVar1 = 35;
			break;
		case 6:
			StringCopy(&Var2, "FEET_P1_00_6" /* GXT: Gray Two-Tone Athletic Shoes */, 16);
			iVar3 = 0;
			iVar4 = 6;
			iVar1 = 89;
			break;
		case 7:
			StringCopy(&Var2, "FEET_P1_00_7" /* GXT: Lemon Accent Athletic Shoes */, 16);
			iVar3 = 0;
			iVar4 = 7;
			iVar1 = 95;
			break;
		case 8:
			StringCopy(&Var2, "FEET_P1_00_8" /* GXT: Two-Tone Athletic Shoes */, 16);
			iVar3 = 0;
			iVar4 = 8;
			iVar1 = 115;
			break;
		case 9:
			StringCopy(&Var2, "FEET_P1_00_9" /* GXT: Cyan Athletic Shoes */, 16);
			iVar3 = 0;
			iVar4 = 9;
			iVar1 = 40;
			break;
		case 10:
			StringCopy(&Var2, "FEET_P1_00_10" /* GXT: Cyan Accent Athletic Shoes */, 16);
			iVar3 = 0;
			iVar4 = 10;
			iVar1 = 145;
			break;
		case 11:
			StringCopy(&Var2, "FEET_P1_00_11" /* GXT: Fluorescent Athletic Shoes */, 16);
			iVar3 = 0;
			iVar4 = 11;
			iVar1 = 145;
			break;
		case 12:
			StringCopy(&Var2, "FEET_P1_01_0" /* GXT: Work Boots */, 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 1;
			bVar0 = true;
			break;
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			break;
		case 18:
			StringCopy(&Var2, "FEET_P1_06_0" /* GXT: Desert Round-Toe Boots */, 16);
			iVar3 = 6;
			iVar4 = 0;
			break;
		case 19:
			StringCopy(&Var2, "FEET_P1_06_1" /* GXT: Coffee Round-Toe Boots */, 16);
			iVar3 = 6;
			iVar4 = 1;
			iVar1 = 180;
			break;
		case 20:
			StringCopy(&Var2, "FEET_P1_06_2" /* GXT: Chocolate Round-Toe Boots */, 16);
			iVar3 = 6;
			iVar4 = 2;
			iVar1 = 80;
			break;
		case 21:
			StringCopy(&Var2, "FEET_P1_06_3" /* GXT: Gray Round-Toe Boots */, 16);
			iVar3 = 6;
			iVar4 = 3;
			iVar1 = 200;
			break;
		case 22:
			StringCopy(&Var2, "FEET_P1_06_4" /* GXT: Slate Round-Toe Boots */, 16);
			iVar3 = 6;
			iVar4 = 4;
			iVar1 = 220;
			break;
		case 23:
			StringCopy(&Var2, "FEET_P1_06_5" /* GXT: Copper Round-Toe Boots */, 16);
			iVar3 = 6;
			iVar4 = 5;
			iVar1 = 235;
			break;
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 25:
			StringCopy(&Var2, "FEET_P1_08_0" /* GXT: Gray Snake Shoes */, 16);
			iVar3 = 8;
			iVar4 = 0;
			iVar1 = 870;
			break;
		case 26:
			StringCopy(&Var2, "FEET_P1_08_1" /* GXT: Black Shoes */, 16);
			iVar3 = 8;
			iVar4 = 1;
			iVar1 = 870;
			break;
		case 27:
			StringCopy(&Var2, "FEET_P1_08_2" /* GXT: White Snake Shoes */, 16);
			iVar3 = 8;
			iVar4 = 2;
			iVar1 = 870;
			break;
		case 28:
			StringCopy(&Var2, "FEET_P1_08_3" /* GXT: Gray Crocodile Shoes */, 16);
			iVar3 = 8;
			iVar4 = 3;
			iVar1 = 1275;
			break;
		case 29:
			StringCopy(&Var2, "FEET_P1_08_4" /* GXT: Alligator Shoes */, 16);
			iVar3 = 8;
			iVar4 = 4;
			iVar1 = 1275;
			break;
		case 30:
			StringCopy(&Var2, "FEET_P1_08_5" /* GXT: Brown Crocodile Shoes */, 16);
			iVar3 = 8;
			iVar4 = 5;
			iVar1 = 1275;
			break;
		case 31:
			StringCopy(&Var2, "FEET_P1_08_6" /* GXT: Rattlesnake Shoes */, 16);
			iVar3 = 8;
			iVar4 = 6;
			iVar1 = 1275;
			break;
		case 32:
			StringCopy(&Var2, "FEET_P1_08_7" /* GXT: Gray Python Shoes */, 16);
			iVar3 = 8;
			iVar4 = 7;
			iVar1 = 1275;
			break;
		case 33:
			StringCopy(&Var2, "FEET_P1_08_8" /* GXT: Two-Tone Crocodile Shoes */, 16);
			iVar3 = 8;
			iVar4 = 8;
			iVar1 = 1275;
			break;
		case 34:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 35:
			StringCopy(&Var2, "FEET_P1_10_0" /* GXT: Black Brogues */, 16);
			iVar3 = 10;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 36:
			StringCopy(&Var2, "FEET_P1_11_0" /* GXT: Two-Tone Sneakers */, 16);
			iVar3 = 11;
			iVar4 = 0;
			break;
		case 37:
			StringCopy(&Var2, "FEET_P1_11_1" /* GXT: Orange Sneakers */, 16);
			iVar3 = 11;
			iVar4 = 1;
			iVar1 = 50;
			break;
		case 38:
			StringCopy(&Var2, "FEET_P1_11_2" /* GXT: Black Sneakers */, 16);
			iVar3 = 11;
			iVar4 = 2;
			iVar1 = 50;
			break;
		case 39:
			StringCopy(&Var2, "FEET_P1_11_3" /* GXT: Desert Green Sneakers */, 16);
			iVar3 = 11;
			iVar4 = 3;
			iVar1 = 50;
			break;
		case 40:
			StringCopy(&Var2, "FEET_P1_11_4" /* GXT: Mint Sneakers */, 16);
			iVar3 = 11;
			iVar4 = 4;
			iVar1 = 50;
			break;
		case 41:
			StringCopy(&Var2, "FEET_P1_11_5" /* GXT: Freeway Sneakers */, 16);
			iVar3 = 11;
			iVar4 = 5;
			iVar1 = 50;
			break;
		case 42:
			StringCopy(&Var2, "FEET_P1_11_6" /* GXT: Animal Fashion Sneakers */, 16);
			iVar3 = 11;
			iVar4 = 6;
			iVar1 = 50;
			break;
		case 43:
			StringCopy(&Var2, "FEET_P1_11_7" /* GXT: Feud Classic Sneakers */, 16);
			iVar3 = 11;
			iVar4 = 7;
			iVar1 = 50;
			break;
		case 44:
			StringCopy(&Var2, "FEET_P1_11_8" /* GXT: Cacao Blend Sneakers */, 16);
			iVar3 = 11;
			iVar4 = 8;
			iVar1 = 50;
			break;
		case 45:
			StringCopy(&Var2, "FEET_P1_11_9" /* GXT: Magnetics Sneakers */, 16);
			iVar3 = 11;
			iVar4 = 9;
			iVar1 = 50;
			break;
		case 46:
			StringCopy(&Var2, "FEET_P1_11_10" /* GXT: Blue Sneakers */, 16);
			iVar3 = 11;
			iVar4 = 10;
			iVar1 = 50;
			break;
		case 47:
			StringCopy(&Var2, "FEET_P1_11_11" /* GXT: White Sneakers */, 16);
			iVar3 = 11;
			iVar4 = 11;
			iVar1 = 50;
			break;
		case 48:
			StringCopy(&Var2, "FEET_P1_11_12" /* GXT: Winter Camo Sneakers */, 16);
			iVar3 = 11;
			iVar4 = 12;
			iVar1 = 50;
			break;
		case 49:
			StringCopy(&Var2, "FEET_P1_11_13" /* GXT: Forest Camo Sneakers */, 16);
			iVar3 = 11;
			iVar4 = 13;
			iVar1 = 50;
			break;
		case 50:
			StringCopy(&Var2, "FEET_P1_11_14" /* GXT: Soft Seas Sneakers */, 16);
			iVar3 = 11;
			iVar4 = 14;
			iVar1 = 50;
			break;
		case 51:
			StringCopy(&Var2, "FEET_P1_11_15" /* GXT: Latte Sneakers */, 16);
			iVar3 = 11;
			iVar4 = 15;
			iVar1 = 50;
			break;
		case 52:
			StringCopy(&Var2, "FEET_P1_12_0" /* GXT: White Skate Sneakers */, 16);
			iVar3 = 12;
			iVar4 = 0;
			break;
		case 53:
			StringCopy(&Var2, "FEET_P1_12_1" /* GXT: Green Skate Sneakers */, 16);
			iVar3 = 12;
			iVar4 = 1;
			iVar1 = 25;
			break;
		case 54:
			StringCopy(&Var2, "FEET_P1_12_2" /* GXT: Two-Tone Skate Sneakers */, 16);
			iVar3 = 12;
			iVar4 = 2;
			iVar1 = 20;
			break;
		case 55:
			StringCopy(&Var2, "FEET_P1_12_3" /* GXT: Black Skate Sneakers */, 16);
			iVar3 = 12;
			iVar4 = 3;
			iVar1 = 24;
			break;
		case 56:
			StringCopy(&Var2, "FEET_P1_12_4" /* GXT: Blue Skate Sneakers */, 16);
			iVar3 = 12;
			iVar4 = 4;
			iVar1 = 25;
			break;
		case 57:
			StringCopy(&Var2, "FEET_P1_12_5" /* GXT: Orange Accent Skate Sneakers */, 16);
			iVar3 = 12;
			iVar4 = 5;
			iVar1 = 27;
			break;
		case 58:
			StringCopy(&Var2, "FEET_P1_12_6" /* GXT: Red Skate Sneakers */, 16);
			iVar3 = 12;
			iVar4 = 6;
			iVar1 = 29;
			break;
		case 59:
			StringCopy(&Var2, "FEET_P1_12_7" /* GXT: Orange Skate Sneakers */, 16);
			iVar3 = 12;
			iVar4 = 7;
			iVar1 = 27;
			break;
		case 60:
			StringCopy(&Var2, "FEET_P1_12_8" /* GXT: Mocha Skate Sneakers */, 16);
			iVar3 = 12;
			iVar4 = 8;
			iVar1 = 25;
			break;
		case 61:
			StringCopy(&Var2, "FEET_P1_12_9" /* GXT: Black Skate Sneakers */, 16);
			iVar3 = 12;
			iVar4 = 9;
			iVar1 = 30;
			break;
		case 62:
			StringCopy(&Var2, "FEET_P1_12_10" /* GXT: Fresh Skate Sneakers */, 16);
			iVar3 = 12;
			iVar4 = 10;
			iVar1 = 28;
			break;
		case 63:
			StringCopy(&Var2, "FEET_P1_12_11" /* GXT: Green Skate Sneakers */, 16);
			iVar3 = 12;
			iVar4 = 11;
			iVar1 = 30;
			break;
		case 64:
			StringCopy(&Var2, "FEET_P1_13_0" /* GXT: Black Oxfords */, 16);
			iVar3 = 13;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 65:
			StringCopy(&Var2, "FEET_P1_14_0" /* GXT: Gray Skate Shoes */, 16);
			iVar3 = 14;
			iVar4 = 0;
			iVar1 = 155;
			break;
		case 66:
			StringCopy(&Var2, "FEET_P1_14_1" /* GXT: White Skate Shoes */, 16);
			iVar3 = 14;
			iVar4 = 1;
			iVar1 = 155;
			break;
		case 67:
			StringCopy(&Var2, "FEET_P1_14_2" /* GXT: Chestnut Skate Shoes */, 16);
			iVar3 = 14;
			iVar4 = 2;
			iVar1 = 165;
			break;
		case 68:
			StringCopy(&Var2, "FEET_P1_14_3" /* GXT: Jade Accent Skate Shoes */, 16);
			iVar3 = 14;
			iVar4 = 3;
			iVar1 = 170;
			break;
		case 69:
			StringCopy(&Var2, "FEET_P1_14_4" /* GXT: Two-Tone Skate Shoes */, 16);
			iVar3 = 14;
			iVar4 = 4;
			iVar1 = 160;
			break;
		case 70:
			StringCopy(&Var2, "FEET_P1_14_5" /* GXT: Red Piped Skate Shoes */, 16);
			iVar3 = 14;
			iVar4 = 5;
			iVar1 = 165;
			break;
		case 71:
			StringCopy(&Var2, "FEET_P1_14_6" /* GXT: Red Skate Shoes */, 16);
			iVar3 = 14;
			iVar4 = 6;
			iVar1 = 170;
			break;
		case 72:
			StringCopy(&Var2, "FEET_P1_14_7" /* GXT: Beige Skate Shoes */, 16);
			iVar3 = 14;
			iVar4 = 7;
			iVar1 = 160;
			break;
		case 73:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 15;
			iVar4 = 0;
			break;
		case 74:
			StringCopy(&Var2, "FEET_P1_16_0" /* GXT: Black Leather Loafers */, 16);
			iVar3 = 16;
			iVar4 = 0;
			iVar1 = 720;
			break;
		case 75:
			StringCopy(&Var2, "FEET_P1_16_1" /* GXT: Gray Leather Loafers */, 16);
			iVar3 = 16;
			iVar4 = 1;
			iVar1 = 680;
			break;
		case 76:
			StringCopy(&Var2, "FEET_P1_16_2" /* GXT: Cream Leather Loafers */, 16);
			iVar3 = 16;
			iVar4 = 2;
			iVar1 = 650;
			break;
		case 77:
			StringCopy(&Var2, "FEET_P1_16_3" /* GXT: Brown Leather Loafers */, 16);
			iVar3 = 16;
			iVar4 = 3;
			iVar1 = 670;
			break;
		case 78:
			StringCopy(&Var2, "FEET_P1_16_4" /* GXT: White Leather Loafers */, 16);
			iVar3 = 16;
			iVar4 = 4;
			iVar1 = 700;
			break;
		case 79:
			StringCopy(&Var2, "FEET_P1_16_5" /* GXT: Russet Leather Loafers */, 16);
			iVar3 = 16;
			iVar4 = 5;
			iVar1 = 680;
			break;
		case 80:
			StringCopy(&Var2, "FEET_P1_16_6" /* GXT: White Snakeskin Loafers */, 16);
			iVar3 = 16;
			iVar4 = 6;
			iVar1 = 720;
			break;
		case 81:
			StringCopy(&Var2, "FEET_P1_16_7" /* GXT: Rattlesnake Loafers */, 16);
			iVar3 = 16;
			iVar4 = 7;
			iVar1 = 740;
			break;
		case 82:
			StringCopy(&Var2, "FEET_P1_16_8" /* GXT: Brown Snakeskin Loafers */, 16);
			iVar3 = 16;
			iVar4 = 8;
			iVar1 = 760;
			break;
		case 83:
			StringCopy(&Var2, "FEET_P1_16_9" /* GXT: Zebra Two-Tone Loafers */, 16);
			iVar3 = 16;
			iVar4 = 9;
			iVar1 = 780;
			break;
		case 84:
			StringCopy(&Var2, "FEET_P1_16_10" /* GXT: Pale Reptile Loafers */, 16);
			iVar3 = 16;
			iVar4 = 10;
			iVar1 = 750;
			break;
		case 85:
			StringCopy(&Var2, "FEET_P1_16_11" /* GXT: Tan Alligator Loafers */, 16);
			iVar3 = 16;
			iVar4 = 11;
			iVar1 = 700;
			break;
		case 86:
			StringCopy(&Var2, "FEET_P1_17_0" /* GXT: All Black Oxfords */, 16);
			iVar3 = 17;
			iVar4 = 0;
			iVar1 = 790;
			break;
		case 87:
			StringCopy(&Var2, "FEET_P1_17_1" /* GXT: Chocolate Oxfords */, 16);
			iVar3 = 17;
			iVar4 = 1;
			iVar1 = 750;
			break;
		case 88:
			StringCopy(&Var2, "FEET_P1_17_2" /* GXT: Chestnut Oxfords */, 16);
			iVar3 = 17;
			iVar4 = 2;
			iVar1 = 860;
			break;
		case 89:
			StringCopy(&Var2, "FEET_P1_17_3" /* GXT: Tan Oxfords */, 16);
			iVar3 = 17;
			iVar4 = 3;
			iVar1 = 750;
			break;
		case 90:
			StringCopy(&Var2, "FEET_P1_17_4" /* GXT: White Oxfords */, 16);
			iVar3 = 17;
			iVar4 = 4;
			iVar1 = 790;
			break;
		case 91:
			StringCopy(&Var2, "FEET_P1_17_5" /* GXT: Ash Oxfords */, 16);
			iVar3 = 17;
			iVar4 = 5;
			iVar1 = 840;
			break;
		case 92:
			StringCopy(&Var2, "FEET_P1_17_6" /* GXT: Gray Two-Tone Oxfords */, 16);
			iVar3 = 17;
			iVar4 = 6;
			iVar1 = 820;
			break;
		case 93:
			StringCopy(&Var2, "FEET_P1_17_7" /* GXT: Beige Oxfords */, 16);
			iVar3 = 17;
			iVar4 = 7;
			iVar1 = 800;
			break;
		case 94:
			StringCopy(&Var2, "FEET_P1_17_8" /* GXT: Topaz Oxfords */, 16);
			iVar3 = 17;
			iVar4 = 8;
			iVar1 = 850;
			break;
		case 95:
			StringCopy(&Var2, "FEET_P1_17_9" /* GXT: Black Oxfords */, 16);
			iVar3 = 17;
			iVar4 = 9;
			iVar1 = 870;
			break;
		case 96:
			StringCopy(&Var2, "FEET_P1_17_10" /* GXT: Lime Oxfords */, 16);
			iVar3 = 17;
			iVar4 = 10;
			iVar1 = 720;
			break;
		case 97:
			StringCopy(&Var2, "FEET_P1_17_11" /* GXT: Hawthorn Oxfords */, 16);
			iVar3 = 17;
			iVar4 = 11;
			iVar1 = 740;
			break;
		case 98:
			StringCopy(&Var2, "FEET_P1_17_12" /* GXT: Coffee Oxfords */, 16);
			iVar3 = 17;
			iVar4 = 12;
			iVar1 = 800;
			break;
		case 99:
			StringCopy(&Var2, "FEET_P1_17_13" /* GXT: Gray Oxfords */, 16);
			iVar3 = 17;
			iVar4 = 13;
			iVar1 = 750;
			break;
		case 100:
			StringCopy(&Var2, "FEET_P1_17_14" /* GXT: Cream Oxfords */, 16);
			iVar3 = 17;
			iVar4 = 14;
			iVar1 = 770;
			break;
		case 101:
			StringCopy(&Var2, "FEET_P1_17_15" /* GXT: Navy Oxfords */, 16);
			iVar3 = 17;
			iVar4 = 15;
			iVar1 = 860;
			break;
		case 102:
			StringCopy(&Var2, "FEET_P1_18_0" /* GXT: Black Slip-Ons */, 16);
			iVar3 = 18;
			iVar4 = 0;
			iVar1 = 850;
			break;
		case 103:
			StringCopy(&Var2, "FEET_P1_18_1" /* GXT: Red Slip-Ons */, 16);
			iVar3 = 18;
			iVar4 = 1;
			iVar1 = 800;
			break;
		case 104:
			StringCopy(&Var2, "FEET_P1_18_2" /* GXT: Brown Slip-Ons */, 16);
			iVar3 = 18;
			iVar4 = 2;
			iVar1 = 780;
			break;
		case 105:
			StringCopy(&Var2, "FEET_P1_18_3" /* GXT: Green Stripe Slip-Ons */, 16);
			iVar3 = 18;
			iVar4 = 3;
			iVar1 = 890;
			break;
		case 106:
			StringCopy(&Var2, "FEET_P1_18_4" /* GXT: Green Slip-Ons */, 16);
			iVar3 = 18;
			iVar4 = 4;
			iVar1 = 820;
			break;
		case 107:
			StringCopy(&Var2, "FEET_P1_18_5" /* GXT: Copper Slip-Ons */, 16);
			iVar3 = 18;
			iVar4 = 5;
			iVar1 = 840;
			break;
		case 108:
			StringCopy(&Var2, "FEET_P1_18_6" /* GXT: Copper Two-Tone Slip-Ons */, 16);
			iVar3 = 18;
			iVar4 = 6;
			iVar1 = 870;
			break;
		case 109:
			StringCopy(&Var2, "FEET_P1_18_7" /* GXT: Navy Slip-Ons */, 16);
			iVar3 = 18;
			iVar4 = 7;
			iVar1 = 930;
			break;
		case 110:
			StringCopy(&Var2, "FEET_P1_18_8" /* GXT: Blue Slip-Ons */, 16);
			iVar3 = 18;
			iVar4 = 8;
			iVar1 = 880;
			break;
		case 111:
			StringCopy(&Var2, "FEET_P1_18_9" /* GXT: Beige Slip-Ons */, 16);
			iVar3 = 18;
			iVar4 = 9;
			iVar1 = 900;
			break;
		case 112:
			StringCopy(&Var2, "FEET_P1_18_10" /* GXT: White Slip-Ons */, 16);
			iVar3 = 18;
			iVar4 = 10;
			iVar1 = 920;
			break;
		case 113:
			StringCopy(&Var2, "FEET_P1_18_11" /* GXT: Tan Slip-Ons */, 16);
			iVar3 = 18;
			iVar4 = 11;
			iVar1 = 970;
			break;
		case 114:
			StringCopy(&Var2, "FEET_P1_18_12" /* GXT: Black Snakeskin Slip-Ons */, 16);
			iVar3 = 18;
			iVar4 = 12;
			iVar1 = 990;
			break;
		case 115:
			StringCopy(&Var2, "FEET_P1_18_13" /* GXT: Two-Tone Slip-Ons */, 16);
			iVar3 = 18;
			iVar4 = 13;
			iVar1 = 960;
			break;
		case 116:
			StringCopy(&Var2, "FEET_P1_18_14" /* GXT: Brown Snakeskin Slip-Ons */, 16);
			iVar3 = 18;
			iVar4 = 14;
			iVar1 = 980;
			break;
		case 117:
			StringCopy(&Var2, "FEET_P1_18_15" /* GXT: Gray Slip-Ons */, 16);
			iVar3 = 18;
			iVar4 = 15;
			iVar1 = 950;
			break;
		case 118:
			StringCopy(&Var2, "FEET_P1_19_0" /* GXT: Brown Wingtips */, 16);
			iVar3 = 19;
			iVar4 = 0;
			iVar1 = 110;
			break;
		case 119:
			StringCopy(&Var2, "FEET_P1_19_1" /* GXT: Navy Wingtips */, 16);
			iVar3 = 19;
			iVar4 = 1;
			iVar1 = 115;
			break;
		case 120:
			StringCopy(&Var2, "FEET_P1_19_2" /* GXT: Coffee Wingtips */, 16);
			iVar3 = 19;
			iVar4 = 2;
			iVar1 = 120;
			break;
		case 121:
			StringCopy(&Var2, "FEET_P1_19_3" /* GXT: Burgundy Wingtips */, 16);
			iVar3 = 19;
			iVar4 = 3;
			iVar1 = 110;
			break;
		case 122:
			StringCopy(&Var2, "FEET_P1_19_4" /* GXT: Blue Wingtips */, 16);
			iVar3 = 19;
			iVar4 = 4;
			iVar1 = 125;
			break;
		case 123:
			StringCopy(&Var2, "FEET_P1_19_5" /* GXT: Woodland Camo Wingtips */, 16);
			iVar3 = 19;
			iVar4 = 5;
			iVar1 = 128;
			break;
		case 124:
			StringCopy(&Var2, "FEET_P1_19_6" /* GXT: Black Wingtips */, 16);
			iVar3 = 19;
			iVar4 = 6;
			iVar1 = 135;
			break;
		case 125:
			StringCopy(&Var2, "FEET_P1_19_7" /* GXT: Tan Wingtips */, 16);
			iVar3 = 19;
			iVar4 = 7;
			iVar1 = 130;
			break;
		case 126:
			StringCopy(&Var2, "FEET_P1_19_8" /* GXT: Purple Wingtips */, 16);
			iVar3 = 19;
			iVar4 = 8;
			iVar1 = 145;
			break;
		case 127:
			StringCopy(&Var2, "FEET_P1_19_9" /* GXT: Brown Wingtips */, 16);
			iVar3 = 19;
			iVar4 = 9;
			iVar1 = 110;
			break;
		case 128:
			StringCopy(&Var2, "FEET_P1_19_10" /* GXT: Chocolate Wingtips */, 16);
			iVar3 = 19;
			iVar4 = 10;
			iVar1 = 120;
			break;
		case 129:
			StringCopy(&Var2, "FEET_P1_19_11" /* GXT: Green Wingtips */, 16);
			iVar3 = 19;
			iVar4 = 11;
			iVar1 = 150;
			break;
		case 130:
			StringCopy(&Var2, "FEET_P1_19_12" /* GXT: Ash Wingtips */, 16);
			iVar3 = 19;
			iVar4 = 12;
			iVar1 = 125;
			break;
		case 131:
			StringCopy(&Var2, "FEET_P1_19_13" /* GXT: Olive Wingtips */, 16);
			iVar3 = 19;
			iVar4 = 13;
			iVar1 = 120;
			break;
		case 132:
			StringCopy(&Var2, "FEET_P1_19_14" /* GXT: Two-Tone Wingtips */, 16);
			iVar3 = 19;
			iVar4 = 14;
			iVar1 = 130;
			break;
		case 133:
			StringCopy(&Var2, "FEET_P1_19_15" /* GXT: Yellow Wingtips */, 16);
			iVar3 = 19;
			iVar4 = 15;
			iVar1 = 110;
			break;
		default:
			func_95(iVar7, iParam0, 134, -1);
			return;
			break;
	}
	func_88(&(Global_78130[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_124(int iParam0)//Position - 0x16B35
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 4;
	Global_78130[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "LEGS_P1_0_0" /* GXT: Cream Cargo Shorts */, 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		case 1:
			StringCopy(&Var2, "LEGS_P1_0_1" /* GXT: Sand Cargo Shorts */, 16);
			iVar3 = 0;
			iVar4 = 1;
			iVar1 = 32;
			break;
		case 2:
			StringCopy(&Var2, "LEGS_P1_0_2" /* GXT: Navy Cargo Shorts */, 16);
			iVar3 = 0;
			iVar4 = 2;
			iVar1 = 38;
			break;
		case 3:
			StringCopy(&Var2, "LEGS_P1_0_3" /* GXT: Olive Cargo Shorts */, 16);
			iVar3 = 0;
			iVar4 = 3;
			iVar1 = 44;
			break;
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 1;
			bVar0 = true;
			break;
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 2;
			bVar0 = true;
			break;
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 3;
			bVar0 = true;
			break;
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 4;
			bVar0 = true;
			break;
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 5;
			bVar0 = true;
			break;
		case 10:
			StringCopy(&Var2, "LEGS_P1_2_0" /* GXT: Black Tuxedo Pants */, 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 14:
			StringCopy(&Var2, "LEGS_P1_6_0" /* GXT: Gray Golf Pants */, 16);
			iVar3 = 6;
			iVar4 = 0;
			break;
		case 15:
			StringCopy(&Var2, "LEGS_P1_6_1" /* GXT: Cream Golf Pants */, 16);
			iVar3 = 6;
			iVar4 = 1;
			iVar1 = 690;
			break;
		case 16:
			StringCopy(&Var2, "LEGS_P1_6_2" /* GXT: Tan Plaid Golf Pants */, 16);
			iVar3 = 6;
			iVar4 = 2;
			iVar1 = 720;
			break;
		case 17:
			StringCopy(&Var2, "LEGS_P1_6_3" /* GXT: Tartan Golf Pants */, 16);
			iVar3 = 6;
			iVar4 = 3;
			iVar1 = 850;
			break;
		case 18:
			StringCopy(&Var2, "LEGS_P1_6_4" /* GXT: Charcoal Plaid Golf Pants */, 16);
			iVar3 = 6;
			iVar4 = 4;
			iVar1 = 850;
			break;
		case 19:
			StringCopy(&Var2, "LEGS_P1_6_5" /* GXT: Dark Plaid Golf Pants */, 16);
			iVar3 = 6;
			iVar4 = 5;
			iVar1 = 740;
			break;
		case 20:
			StringCopy(&Var2, "LEGS_P1_6_6" /* GXT: Brown Plaid Golf Pants */, 16);
			iVar3 = 6;
			iVar4 = 6;
			iVar1 = 750;
			break;
		case 21:
			StringCopy(&Var2, "LEGS_P1_6_7" /* GXT: Slate Golf Pants */, 16);
			iVar3 = 6;
			iVar4 = 7;
			iVar1 = 790;
			break;
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 1;
			bVar0 = true;
			break;
		case 24:
			StringCopy(&Var2, "LEGS_P1_8_0" /* GXT: Slate Baggy Jeans */, 16);
			iVar3 = 8;
			iVar4 = 0;
			break;
		case 25:
			StringCopy(&Var2, "LEGS_P1_8_1" /* GXT: Blue Baggy Jeans */, 16);
			iVar3 = 8;
			iVar4 = 1;
			iVar1 = 145;
			break;
		case 26:
			StringCopy(&Var2, "LEGS_P1_8_2" /* GXT: Gray Baggy Jeans */, 16);
			iVar3 = 8;
			iVar4 = 2;
			iVar1 = 140;
			break;
		case 27:
			StringCopy(&Var2, "LEGS_P1_8_3" /* GXT: Pale Blue Baggy Jeans */, 16);
			iVar3 = 8;
			iVar4 = 3;
			iVar1 = 148;
			break;
		case 28:
			StringCopy(&Var2, "LEGS_P1_8_4" /* GXT: Black Baggy Jeans */, 16);
			iVar3 = 8;
			iVar4 = 4;
			iVar1 = 150;
			break;
		case 29:
			StringCopy(&Var2, "LEGS_P1_8_5" /* GXT: Blue-Green Baggy Jeans */, 16);
			iVar3 = 8;
			iVar4 = 5;
			iVar1 = 154;
			break;
		case 30:
			StringCopy(&Var2, "LEGS_P1_8_6" /* GXT: Faded Baggy Jeans */, 16);
			iVar3 = 8;
			iVar4 = 6;
			iVar1 = 158;
			break;
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 32:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 33:
			StringCopy(&Var2, "LEGS_P1_11_0" /* GXT: Beige Chinos */, 16);
			iVar3 = 11;
			iVar4 = 0;
			iVar1 = 820;
			break;
		case 34:
			StringCopy(&Var2, "LEGS_P1_11_1" /* GXT: Olive Chinos */, 16);
			iVar3 = 11;
			iVar4 = 1;
			iVar1 = 820;
			break;
		case 35:
			StringCopy(&Var2, "LEGS_P1_11_2" /* GXT: Black Chinos */, 16);
			iVar3 = 11;
			iVar4 = 2;
			iVar1 = 850;
			break;
		case 36:
			StringCopy(&Var2, "LEGS_P1_11_3" /* GXT: Off-White Chinos */, 16);
			iVar3 = 11;
			iVar4 = 3;
			iVar1 = 850;
			break;
		case 37:
			StringCopy(&Var2, "LEGS_P1_11_4" /* GXT: Gray Chinos */, 16);
			iVar3 = 11;
			iVar4 = 4;
			iVar1 = 920;
			break;
		case 38:
			StringCopy(&Var2, "LEGS_P1_11_5" /* GXT: Navy Chinos */, 16);
			iVar3 = 11;
			iVar4 = 5;
			iVar1 = 950;
			break;
		case 39:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 0;
			break;
		case 40:
			StringCopy(&Var2, "LEGS_P1_13_0" /* GXT: Silver Sweatpants */, 16);
			iVar3 = 13;
			iVar4 = 0;
			break;
		case 41:
			StringCopy(&Var2, "LEGS_P1_13_1" /* GXT: Gray Sweatpants */, 16);
			iVar3 = 13;
			iVar4 = 1;
			iVar1 = 45;
			break;
		case 42:
			StringCopy(&Var2, "LEGS_P1_13_2" /* GXT: Topaz Sweatpants */, 16);
			iVar3 = 13;
			iVar4 = 2;
			iVar1 = 48;
			break;
		case 43:
			StringCopy(&Var2, "LEGS_P1_13_3" /* GXT: Ash Sweatpants */, 16);
			iVar3 = 13;
			iVar4 = 3;
			iVar1 = 45;
			break;
		case 44:
			StringCopy(&Var2, "LEGS_P1_13_4" /* GXT: Slate Sweatpants */, 16);
			iVar3 = 13;
			iVar4 = 4;
			iVar1 = 48;
			break;
		case 45:
			StringCopy(&Var2, "LEGS_P1_13_5" /* GXT: Olive Sweatpants */, 16);
			iVar3 = 13;
			iVar4 = 5;
			iVar1 = 52;
			break;
		case 46:
			StringCopy(&Var2, "LEGS_P1_13_6" /* GXT: Jade Sweatpants */, 16);
			iVar3 = 13;
			iVar4 = 6;
			iVar1 = 55;
			break;
		case 47:
			StringCopy(&Var2, "LEGS_P1_13_7" /* GXT: Dark Green Sweatpants */, 16);
			iVar3 = 13;
			iVar4 = 7;
			iVar1 = 58;
			break;
		case 48:
			StringCopy(&Var2, "LEGS_P1_13_8" /* GXT: Teal Sweatpants */, 16);
			iVar3 = 13;
			iVar4 = 8;
			iVar1 = 60;
			break;
		case 49:
			StringCopy(&Var2, "LEGS_P1_13_9" /* GXT: Brown Sweatpants */, 16);
			iVar3 = 13;
			iVar4 = 9;
			iVar1 = 58;
			break;
		case 50:
			StringCopy(&Var2, "LEGS_P1_13_10" /* GXT: Kingz Green Sweatpants */, 16);
			iVar3 = 13;
			iVar4 = 10;
			iVar1 = 62;
			break;
		case 51:
			StringCopy(&Var2, "LEGS_P1_13_11" /* GXT: Gray Stripe Sweatpants */, 16);
			iVar3 = 13;
			iVar4 = 11;
			iVar1 = 65;
			break;
		case 52:
			StringCopy(&Var2, "LEGS_P1_14_0" /* GXT: White Shorts */, 16);
			iVar3 = 14;
			iVar4 = 0;
			break;
		case 53:
			StringCopy(&Var2, "LEGS_P1_15_0" /* GXT: Gray Plaid Pants */, 16);
			iVar3 = 15;
			iVar4 = 0;
			break;
		case 54:
			StringCopy(&Var2, "LEGS_P1_15_1" /* GXT: Silver Plaid Pants */, 16);
			iVar3 = 15;
			iVar4 = 1;
			break;
		case 55:
			StringCopy(&Var2, "LEGS_P1_15_2" /* GXT: Charcoal Plaid Pants */, 16);
			iVar3 = 15;
			iVar4 = 2;
			break;
		case 56:
			StringCopy(&Var2, "LEGS_P1_15_3" /* GXT: Tan Plaid Pants */, 16);
			iVar3 = 15;
			iVar4 = 3;
			break;
		case 57:
			StringCopy(&Var2, "LEGS_P1_15_4" /* GXT: Charcoal Pants */, 16);
			iVar3 = 15;
			iVar4 = 4;
			break;
		case 58:
			StringCopy(&Var2, "LEGS_P1_15_5" /* GXT: Ash Pants */, 16);
			iVar3 = 15;
			iVar4 = 5;
			break;
		case 59:
			StringCopy(&Var2, "LEGS_P1_15_6" /* GXT: Beige Pants */, 16);
			iVar3 = 15;
			iVar4 = 6;
			break;
		case 60:
			StringCopy(&Var2, "LEGS_P1_15_7" /* GXT: Cream Pants */, 16);
			iVar3 = 15;
			iVar4 = 7;
			break;
		case 61:
			StringCopy(&Var2, "LEGS_P1_15_8" /* GXT: Navy Plaid Pants */, 16);
			iVar3 = 15;
			iVar4 = 8;
			break;
		case 62:
			StringCopy(&Var2, "LEGS_P1_15_9" /* GXT: Off-White Pants */, 16);
			iVar3 = 15;
			iVar4 = 9;
			break;
		case 63:
			StringCopy(&Var2, "LEGS_P1_15_10" /* GXT: White Pants */, 16);
			iVar3 = 15;
			iVar4 = 10;
			break;
		case 64:
			StringCopy(&Var2, "LEGS_P1_15_11" /* GXT: Subtle Blue Pants */, 16);
			iVar3 = 15;
			iVar4 = 11;
			break;
		case 65:
			StringCopy(&Var2, "LEGS_P1_15_12" /* GXT: Navy Pants */, 16);
			iVar3 = 15;
			iVar4 = 12;
			break;
		case 66:
			StringCopy(&Var2, "LEGS_P1_15_13" /* GXT: Rust Pants */, 16);
			iVar3 = 15;
			iVar4 = 13;
			break;
		case 67:
			StringCopy(&Var2, "LEGS_P1_15_14" /* GXT: Green Pants */, 16);
			iVar3 = 15;
			iVar4 = 14;
			break;
		case 68:
			StringCopy(&Var2, "LEGS_P1_15_15" /* GXT: Tan Pants */, 16);
			iVar3 = 15;
			iVar4 = 15;
			break;
		case 69:
			StringCopy(&Var2, "LEGS_P1_16_0" /* GXT: Combat Pants */, 16);
			iVar3 = 16;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 70:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 16;
			iVar4 = 1;
			bVar0 = true;
			break;
		case 71:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 17;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 72:
			StringCopy(&Var2, "LEGS_P1_18_0" /* GXT: White Boxers */, 16);
			iVar3 = 18;
			iVar4 = 0;
			break;
		case 73:
			StringCopy(&Var2, "LEGS_P1_18_1" /* GXT: Gray Boxers */, 16);
			iVar3 = 18;
			iVar4 = 1;
			iVar1 = 160;
			break;
		case 74:
			StringCopy(&Var2, "LEGS_P1_18_2" /* GXT: Black Boxers */, 16);
			iVar3 = 18;
			iVar4 = 2;
			iVar1 = 180;
			break;
		case 75:
			StringCopy(&Var2, "LEGS_P1_18_3" /* GXT: Kings Ash Boxers */, 16);
			iVar3 = 18;
			iVar4 = 3;
			iVar1 = 180;
			break;
		case 76:
			StringCopy(&Var2, "LEGS_P1_18_4" /* GXT: Feud Green Boxers */, 16);
			iVar3 = 18;
			iVar4 = 4;
			break;
		case 77:
			StringCopy(&Var2, "LEGS_P1_18_5" /* GXT: Feud White Boxers */, 16);
			iVar3 = 18;
			iVar4 = 5;
			break;
		case 78:
			StringCopy(&Var2, "LEGS_P1_19_0" /* GXT: Black Tuxedo Pants */, 16);
			iVar3 = 19;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 79:
			StringCopy(&Var2, "LEGS_P1_20_0" /* GXT: Indigo Jeans */, 16);
			iVar3 = 20;
			iVar4 = 0;
			iVar1 = 118;
			break;
		case 80:
			StringCopy(&Var2, "LEGS_P1_20_1" /* GXT: Black Jeans */, 16);
			iVar3 = 20;
			iVar4 = 1;
			iVar1 = 120;
			break;
		case 81:
			StringCopy(&Var2, "LEGS_P1_20_2" /* GXT: Gray Faded Jeans */, 16);
			iVar3 = 20;
			iVar4 = 2;
			iVar1 = 128;
			break;
		case 82:
			StringCopy(&Var2, "LEGS_P1_20_3" /* GXT: Navy Jeans */, 16);
			iVar3 = 20;
			iVar4 = 3;
			iVar1 = 128;
			break;
		case 83:
			StringCopy(&Var2, "LEGS_P1_20_4" /* GXT: Brown Jeans */, 16);
			iVar3 = 20;
			iVar4 = 4;
			iVar1 = 130;
			break;
		case 84:
			StringCopy(&Var2, "LEGS_P1_20_5" /* GXT: Blue Jeans */, 16);
			iVar3 = 20;
			iVar4 = 5;
			iVar1 = 145;
			break;
		case 85:
			StringCopy(&Var2, "LEGS_P1_20_6" /* GXT: Olive Jeans */, 16);
			iVar3 = 20;
			iVar4 = 6;
			iVar1 = 138;
			break;
		case 86:
			StringCopy(&Var2, "LEGS_P1_20_7" /* GXT: Black Faded Jeans */, 16);
			iVar3 = 20;
			iVar4 = 7;
			iVar1 = 132;
			break;
		case 87:
			StringCopy(&Var2, "LEGS_P1_20_8" /* GXT: Coffee Jeans */, 16);
			iVar3 = 20;
			iVar4 = 8;
			iVar1 = 148;
			break;
		case 88:
			StringCopy(&Var2, "LEGS_P1_21_0" /* GXT: Indigo Skinny Jeans */, 16);
			iVar3 = 21;
			iVar4 = 0;
			iVar1 = 118;
			break;
		case 89:
			StringCopy(&Var2, "LEGS_P1_21_1" /* GXT: Black Skinny Jeans */, 16);
			iVar3 = 21;
			iVar4 = 1;
			iVar1 = 118;
			break;
		case 90:
			StringCopy(&Var2, "LEGS_P1_21_2" /* GXT: Aqua Skinny Jeans */, 16);
			iVar3 = 21;
			iVar4 = 2;
			iVar1 = 118;
			break;
		case 91:
			StringCopy(&Var2, "LEGS_P1_21_3" /* GXT: Brown Skinny Jeans */, 16);
			iVar3 = 21;
			iVar4 = 3;
			iVar1 = 129;
			break;
		case 92:
			StringCopy(&Var2, "LEGS_P1_21_4" /* GXT: Blue Skinny Jeans */, 16);
			iVar3 = 21;
			iVar4 = 4;
			iVar1 = 135;
			break;
		case 93:
			StringCopy(&Var2, "LEGS_P1_21_5" /* GXT: Red Skinny Jeans */, 16);
			iVar3 = 21;
			iVar4 = 5;
			iVar1 = 135;
			break;
		case 94:
			StringCopy(&Var2, "LEGS_P1_21_6" /* GXT: Gray Skinny Jeans */, 16);
			iVar3 = 21;
			iVar4 = 6;
			iVar1 = 118;
			break;
		case 95:
			StringCopy(&Var2, "LEGS_P1_21_7" /* GXT: Green Skinny Jeans */, 16);
			iVar3 = 21;
			iVar4 = 7;
			iVar1 = 118;
			break;
		case 96:
			StringCopy(&Var2, "LEGS_P1_21_8" /* GXT: Coffee Skinny Jeans */, 16);
			iVar3 = 21;
			iVar4 = 8;
			iVar1 = 118;
			break;
		case 97:
			StringCopy(&Var2, "LEGS_P1_22_0" /* GXT: LS Panic Charcoal Shorts */, 16);
			iVar3 = 22;
			iVar4 = 0;
			iVar1 = 55;
			break;
		case 98:
			StringCopy(&Var2, "LEGS_P1_22_1" /* GXT: LS Panic Yellow Shorts */, 16);
			iVar3 = 22;
			iVar4 = 1;
			iVar1 = 55;
			break;
		case 99:
			StringCopy(&Var2, "LEGS_P1_22_2" /* GXT: Prolaps White Shorts */, 16);
			iVar3 = 22;
			iVar4 = 2;
			iVar1 = 59;
			break;
		case 100:
			StringCopy(&Var2, "LEGS_P1_22_3" /* GXT: Prolaps Blue Shorts */, 16);
			iVar3 = 22;
			iVar4 = 3;
			iVar1 = 59;
			break;
		case 101:
			StringCopy(&Var2, "LEGS_P1_22_4" /* GXT: LC Salamanders Red Shorts */, 16);
			iVar3 = 22;
			iVar4 = 4;
			iVar1 = 65;
			break;
		case 102:
			StringCopy(&Var2, "LEGS_P1_22_5" /* GXT: LC Salamanders Green Shorts */, 16);
			iVar3 = 22;
			iVar4 = 5;
			iVar1 = 65;
			break;
		case 103:
			StringCopy(&Var2, "LEGS_P1_22_6" /* GXT: LS Shrimps Gray Shorts */, 16);
			iVar3 = 22;
			iVar4 = 6;
			iVar1 = 69;
			break;
		case 104:
			StringCopy(&Var2, "LEGS_P1_22_7" /* GXT: LS Shrimps White Shorts */, 16);
			iVar3 = 22;
			iVar4 = 7;
			iVar1 = 69;
			break;
		case 105:
			StringCopy(&Var2, "LEGS_P1_22_8" /* GXT: LOB Gray Shorts */, 16);
			iVar3 = 22;
			iVar4 = 8;
			iVar1 = 75;
			break;
		case 106:
			StringCopy(&Var2, "LEGS_P1_22_9" /* GXT: LOB Blue Shorts */, 16);
			iVar3 = 22;
			iVar4 = 9;
			iVar1 = 75;
			break;
		case 107:
			StringCopy(&Var2, "LEGS_P1_22_10" /* GXT: LOB Green Shorts */, 16);
			iVar3 = 22;
			iVar4 = 10;
			iVar1 = 65;
			break;
		case 108:
			StringCopy(&Var2, "LEGS_P1_22_11" /* GXT: LOB Tan Shorts */, 16);
			iVar3 = 22;
			iVar4 = 11;
			iVar1 = 65;
			break;
		case 109:
			StringCopy(&Var2, "LEGS_P1_22_12" /* GXT: LOB Orange Shorts */, 16);
			iVar3 = 22;
			iVar4 = 12;
			iVar1 = 65;
			break;
		case 110:
			StringCopy(&Var2, "LEGS_P1_22_13" /* GXT: LOB Pale Blue Shorts */, 16);
			iVar3 = 22;
			iVar4 = 13;
			iVar1 = 65;
			break;
		case 111:
			StringCopy(&Var2, "LEGS_P1_23_0" /* GXT: Broker White Shorts */, 16);
			iVar3 = 23;
			iVar4 = 0;
			iVar1 = 38;
			break;
		case 112:
			StringCopy(&Var2, "LEGS_P1_23_1" /* GXT: Broker Black Shorts */, 16);
			iVar3 = 23;
			iVar4 = 1;
			iVar1 = 38;
			break;
		case 113:
			StringCopy(&Var2, "LEGS_P1_23_2" /* GXT: Broker Gray Shorts */, 16);
			iVar3 = 23;
			iVar4 = 2;
			iVar1 = 28;
			break;
		case 114:
			StringCopy(&Var2, "LEGS_P1_23_3" /* GXT: Broker Navy Shorts */, 16);
			iVar3 = 23;
			iVar4 = 3;
			iVar1 = 34;
			break;
		case 115:
			StringCopy(&Var2, "LEGS_P1_23_4" /* GXT: Broker Green Shorts */, 16);
			iVar3 = 23;
			iVar4 = 4;
			iVar1 = 36;
			break;
		case 116:
			StringCopy(&Var2, "LEGS_P1_23_5" /* GXT: Broker Brown Shorts */, 16);
			iVar3 = 23;
			iVar4 = 5;
			iVar1 = 32;
			break;
		default:
			func_95(iVar7, iParam0, 117, -1);
			return;
			break;
	}
	func_88(&(Global_78130[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_125(int iParam0)//Position - 0x177E2
{
	if (iParam0 < 107)
	{
		func_128(iParam0);
	}
	else if (iParam0 < 227)
	{
		func_127(iParam0);
	}
	else
	{
		func_126(iParam0);
	}
	if (Global_78130[0 /*14*/].f_2 == -1)
	{
		func_95(3, iParam0, 318, -1);
	}
}

void func_126(int iParam0)//Position - 0x17828
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 3;
	Global_78130[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 227:
			StringCopy(&Var2, "TORSO_P1_18_0" /* GXT: Gray Plaid Jacket */, 16);
			iVar3 = 23;
			iVar4 = 0;
			iVar6 = 3;
			break;
		case 228:
			StringCopy(&Var2, "TORSO_P1_18_1" /* GXT: Ash Plaid Jacket */, 16);
			iVar3 = 23;
			iVar4 = 1;
			iVar6 = 3;
			break;
		case 229:
			StringCopy(&Var2, "TORSO_P1_18_2" /* GXT: Charcoal Plaid Jacket */, 16);
			iVar3 = 23;
			iVar4 = 2;
			iVar6 = 3;
			break;
		case 230:
			StringCopy(&Var2, "TORSO_P1_18_3" /* GXT: Tan Plaid Jacket */, 16);
			iVar3 = 23;
			iVar4 = 3;
			iVar6 = 3;
			break;
		case 231:
			StringCopy(&Var2, "TORSO_P1_18_4" /* GXT: Slate Jacket */, 16);
			iVar3 = 23;
			iVar4 = 4;
			iVar6 = 3;
			break;
		case 232:
			StringCopy(&Var2, "TORSO_P1_18_5" /* GXT: Silver Jacket */, 16);
			iVar3 = 23;
			iVar4 = 5;
			iVar6 = 3;
			break;
		case 233:
			StringCopy(&Var2, "TORSO_P1_18_6" /* GXT: Stone Jacket */, 16);
			iVar3 = 23;
			iVar4 = 6;
			iVar6 = 3;
			break;
		case 234:
			StringCopy(&Var2, "TORSO_P1_18_7" /* GXT: Cream Jacket */, 16);
			iVar3 = 23;
			iVar4 = 7;
			iVar6 = 3;
			break;
		case 235:
			StringCopy(&Var2, "TORSO_P1_18_8" /* GXT: Navy Plaid Piped Jacket */, 16);
			iVar3 = 23;
			iVar4 = 8;
			iVar6 = 3;
			break;
		case 236:
			StringCopy(&Var2, "TORSO_P1_18_9" /* GXT: Off-White Jacket */, 16);
			iVar3 = 23;
			iVar4 = 9;
			iVar6 = 3;
			break;
		case 237:
			StringCopy(&Var2, "TORSO_P1_18_10" /* GXT: Red Piped Jacket */, 16);
			iVar3 = 23;
			iVar4 = 10;
			iVar6 = 3;
			break;
		case 238:
			StringCopy(&Var2, "TORSO_P1_18_11" /* GXT: Gray Piped Jacket */, 16);
			iVar3 = 23;
			iVar4 = 11;
			iVar6 = 3;
			break;
		case 239:
			StringCopy(&Var2, "TORSO_P1_18_12" /* GXT: Navy Jacket */, 16);
			iVar3 = 23;
			iVar4 = 12;
			iVar6 = 3;
			break;
		case 240:
			StringCopy(&Var2, "TORSO_P1_18_13" /* GXT: Russet Piped Jacket */, 16);
			iVar3 = 23;
			iVar4 = 13;
			iVar6 = 3;
			break;
		case 241:
			StringCopy(&Var2, "TORSO_P1_18_14" /* GXT: Green Jacket */, 16);
			iVar3 = 23;
			iVar4 = 14;
			iVar6 = 3;
			break;
		case 242:
			StringCopy(&Var2, "TORSO_P1_18_15" /* GXT: Beige Jacket */, 16);
			iVar3 = 23;
			iVar4 = 15;
			iVar6 = 3;
			break;
		case 243:
			StringCopy(&Var2, "TORSO_P1_24_0" /* GXT: Navy Plaid Vest */, 16);
			iVar3 = 24;
			iVar4 = 0;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		case 244:
			StringCopy(&Var2, "TORSO_P1_24_1" /* GXT: Gray Plaid Vest */, 16);
			iVar3 = 24;
			iVar4 = 1;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		case 245:
			StringCopy(&Var2, "TORSO_P1_24_2" /* GXT: Silver Plaid Vest */, 16);
			iVar3 = 24;
			iVar4 = 2;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		case 246:
			StringCopy(&Var2, "TORSO_P1_24_3" /* GXT: Charcoal Vest */, 16);
			iVar3 = 24;
			iVar4 = 3;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		case 247:
			StringCopy(&Var2, "TORSO_P1_24_4" /* GXT: Plum Plaid Vest */, 16);
			iVar3 = 24;
			iVar4 = 4;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		case 248:
			StringCopy(&Var2, "TORSO_P1_24_5" /* GXT: All Ash Vest */, 16);
			iVar3 = 24;
			iVar4 = 5;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		case 249:
			StringCopy(&Var2, "TORSO_P1_24_6" /* GXT: Silverback Vest */, 16);
			iVar3 = 24;
			iVar4 = 6;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		case 250:
			StringCopy(&Var2, "TORSO_P1_24_7" /* GXT: Gray Subtle Plaid Vest */, 16);
			iVar3 = 24;
			iVar4 = 7;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		case 251:
			StringCopy(&Var2, "TORSO_P1_24_8" /* GXT: Green Plaid Vest */, 16);
			iVar3 = 24;
			iVar4 = 8;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		case 252:
			StringCopy(&Var2, "TORSO_P1_24_9" /* GXT: Ash Plaid Vest */, 16);
			iVar3 = 24;
			iVar4 = 9;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		case 253:
			StringCopy(&Var2, "TORSO_P1_24_10" /* GXT: Stone Plaid Vest */, 16);
			iVar3 = 24;
			iVar4 = 10;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		case 254:
			StringCopy(&Var2, "TORSO_P1_24_11" /* GXT: Charcoal Plaid Vest */, 16);
			iVar3 = 24;
			iVar4 = 11;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		case 255:
			StringCopy(&Var2, "TORSO_P1_24_12" /* GXT: White Vest */, 16);
			iVar3 = 24;
			iVar4 = 12;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		case 256:
			StringCopy(&Var2, "TORSO_P1_24_13" /* GXT: Gray Vest */, 16);
			iVar3 = 24;
			iVar4 = 13;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		case 257:
			StringCopy(&Var2, "TORSO_P1_24_14" /* GXT: Silver Light Plaid Vest */, 16);
			iVar3 = 24;
			iVar4 = 14;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		case 258:
			StringCopy(&Var2, "TORSO_P1_24_15" /* GXT: All Silver Vest */, 16);
			iVar3 = 24;
			iVar4 = 15;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		case 259:
			StringCopy(&Var2, "TORSO_P1_25_0" /* GXT: Gray Tuxedo Jacket */, 16);
			iVar3 = 25;
			iVar4 = 0;
			bVar0 = true;
			iVar6 = 3;
			break;
		case 260:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 26;
			iVar4 = 0;
			iVar6 = 1;
			break;
		case 261:
			StringCopy(&Var2, "TORSO_P1_27_0" /* GXT: Brown Shooting Vest */, 16);
			iVar3 = 27;
			iVar4 = 0;
			iVar1 = 150;
			break;
		case 262:
			StringCopy(&Var2, "TORSO_P1_27_1" /* GXT: Woodland Shooting Vest */, 16);
			iVar3 = 27;
			iVar4 = 1;
			iVar1 = 160;
			break;
		case 263:
			StringCopy(&Var2, "TORSO_P1_27_2" /* GXT: Taupe Shooting Vest */, 16);
			iVar3 = 27;
			iVar4 = 2;
			iVar1 = 150;
			break;
		case 264:
			StringCopy(&Var2, "TORSO_P1_27_3" /* GXT: Brown Woven Shooting Vest */, 16);
			iVar3 = 27;
			iVar4 = 3;
			iVar1 = 150;
			break;
		case 265:
			StringCopy(&Var2, "TORSO_P1_27_4" /* GXT: Field Shooting Vest */, 16);
			iVar3 = 27;
			iVar4 = 4;
			iVar1 = 160;
			break;
		case 266:
			StringCopy(&Var2, "TORSO_P1_27_5" /* GXT: Forest Shooting Vest */, 16);
			iVar3 = 27;
			iVar4 = 5;
			iVar1 = 160;
			break;
		case 267:
			StringCopy(&Var2, "TORSO_P1_28_0" /* GXT: Silver Hoodie */, 16);
			iVar3 = 28;
			iVar4 = 0;
			iVar1 = 88;
			break;
		case 268:
			StringCopy(&Var2, "TORSO_P1_28_1" /* GXT: Ammu-Nation Camo Hoodie */, 16);
			iVar3 = 28;
			iVar4 = 1;
			iVar1 = 60;
			break;
		case 269:
			StringCopy(&Var2, "TORSO_P1_28_2" /* GXT: LSGC Gray Hoodie */, 16);
			iVar3 = 28;
			iVar4 = 2;
			iVar1 = 70;
			break;
		case 270:
			StringCopy(&Var2, "TORSO_P1_28_3" /* GXT: LSGC Urban Hoodie */, 16);
			iVar3 = 28;
			iVar4 = 3;
			iVar1 = 80;
			break;
		case 271:
			StringCopy(&Var2, "TORSO_P1_28_4" /* GXT: LSGC Forest Hoodie */, 16);
			iVar3 = 28;
			iVar4 = 4;
			iVar1 = 90;
			break;
		case 272:
			StringCopy(&Var2, "TORSO_P1_28_5" /* GXT: Ammu-Nation A Hoodie */, 16);
			iVar3 = 28;
			iVar4 = 5;
			iVar1 = 80;
			break;
		case 273:
			StringCopy(&Var2, "TORSO_P1_28_6" /* GXT: Blauser Hoodie */, 16);
			iVar3 = 28;
			iVar4 = 6;
			iVar1 = 70;
			break;
		case 274:
			StringCopy(&Var2, "TORSO_P1_28_7" /* GXT: Penetrators Orange Hoodie */, 16);
			iVar3 = 28;
			iVar4 = 7;
			iVar1 = 95;
			break;
		case 275:
			StringCopy(&Var2, "TORSO_P1_28_8" /* GXT: Crevis Fluorescent Hoodie */, 16);
			iVar3 = 28;
			iVar4 = 8;
			iVar1 = 105;
			break;
		case 276:
			StringCopy(&Var2, "TORSO_P1_28_9" /* GXT: Blue Hoodie */, 16);
			iVar3 = 28;
			iVar4 = 9;
			iVar1 = 95;
			break;
		case 277:
			StringCopy(&Var2, "TORSO_P1_28_10" /* GXT: Green Hoodie */, 16);
			iVar3 = 28;
			iVar4 = 10;
			iVar1 = 110;
			break;
		case 278:
			StringCopy(&Var2, "TORSO_P1_28_11" /* GXT: LS Jardineros Hoodie */, 16);
			iVar3 = 28;
			iVar4 = 11;
			iVar1 = 98;
			break;
		case 279:
			StringCopy(&Var2, "TORSO_P1_28_12" /* GXT: Ash 18 Hoodie */, 16);
			iVar3 = 28;
			iVar4 = 12;
			iVar1 = 88;
			break;
		case 280:
			StringCopy(&Var2, "TORSO_P1_28_13" /* GXT: Red Mist XI Hoodie */, 16);
			iVar3 = 28;
			iVar4 = 13;
			iVar1 = 98;
			break;
		case 281:
			StringCopy(&Var2, "TORSO_P1_28_14" /* GXT: Eris Charcoal Hoodie */, 16);
			iVar3 = 28;
			iVar4 = 14;
			iVar1 = 110;
			break;
		case 282:
			StringCopy(&Var2, "TORSO_P1_28_15" /* GXT: OG Hoodie */, 16);
			iVar3 = 28;
			iVar4 = 15;
			iVar1 = 98;
			break;
		case 283:
			StringCopy(&Var2, "TORSO_P1_29_0" /* GXT: White V Neck T-Shirt */, 16);
			iVar3 = 29;
			iVar4 = 0;
			iVar1 = 250;
			break;
		case 284:
			StringCopy(&Var2, "TORSO_P1_29_1" /* GXT: Ash V Neck T-Shirt */, 16);
			iVar3 = 29;
			iVar4 = 1;
			iVar1 = 270;
			break;
		case 285:
			StringCopy(&Var2, "TORSO_P1_29_2" /* GXT: Black V Neck T-Shirt */, 16);
			iVar3 = 29;
			iVar4 = 2;
			iVar1 = 280;
			break;
		case 286:
			StringCopy(&Var2, "TORSO_P1_29_3" /* GXT: Brown V Neck T-Shirt */, 16);
			iVar3 = 29;
			iVar4 = 3;
			iVar1 = 275;
			break;
		case 287:
			StringCopy(&Var2, "TORSO_P1_29_4" /* GXT: Olive V Neck T-Shirt */, 16);
			iVar3 = 29;
			iVar4 = 4;
			iVar1 = 290;
			break;
		case 288:
			StringCopy(&Var2, "TORSO_P1_29_5" /* GXT: Corkers V Neck T-Shirt */, 16);
			iVar3 = 29;
			iVar4 = 5;
			iVar1 = 35;
			break;
		case 289:
			StringCopy(&Var2, "TORSO_P1_29_6" /* GXT: Feud V Neck T-Shirt */, 16);
			iVar3 = 29;
			iVar4 = 6;
			iVar1 = 35;
			break;
		case 290:
			StringCopy(&Var2, "TORSO_P1_29_7" /* GXT: Magnetics V Neck T-Shirt */, 16);
			iVar3 = 29;
			iVar4 = 7;
			iVar1 = 35;
			break;
		case 291:
			StringCopy(&Var2, "TORSO_P1_29_8" /* GXT: Mint V Neck T-Shirt */, 16);
			iVar3 = 29;
			iVar4 = 8;
			iVar1 = 295;
			break;
		case 292:
			StringCopy(&Var2, "TORSO_P1_29_9" /* GXT: Harsh Souls V Neck T-Shirt */, 16);
			iVar3 = 29;
			iVar4 = 9;
			iVar1 = 35;
			break;
		case 293:
			StringCopy(&Var2, "TORSO_P1_29_10" /* GXT: Trey Baker V Neck T-Shirt */, 16);
			iVar3 = 29;
			iVar4 = 10;
			iVar1 = 35;
			break;
		case 294:
			StringCopy(&Var2, "TORSO_P1_29_11" /* GXT: Fuque V Neck T-Shirt */, 16);
			iVar3 = 29;
			iVar4 = 11;
			iVar1 = 35;
			break;
		case 295:
			StringCopy(&Var2, "TORSO_P1_29_12" /* GXT: Fellowship V Neck T-Shirt */, 16);
			iVar3 = 29;
			iVar4 = 12;
			break;
		case 296:
			StringCopy(&Var2, "TORSO_P1_30_0" /* GXT: Green Cardigan */, 16);
			iVar3 = 30;
			iVar4 = 0;
			iVar1 = 1750;
			break;
		case 297:
			StringCopy(&Var2, "TORSO_P1_30_1" /* GXT: Gray Cardigan */, 16);
			iVar3 = 30;
			iVar4 = 1;
			iVar1 = 1920;
			break;
		case 298:
			StringCopy(&Var2, "TORSO_P1_30_2" /* GXT: Slate Cardigan */, 16);
			iVar3 = 30;
			iVar4 = 2;
			iVar1 = 1890;
			break;
		case 299:
			StringCopy(&Var2, "TORSO_P1_30_3" /* GXT: Blue Cardigan */, 16);
			iVar3 = 30;
			iVar4 = 3;
			iVar1 = 1850;
			break;
		case 300:
			StringCopy(&Var2, "TORSO_P1_30_4" /* GXT: Red Cardigan */, 16);
			iVar3 = 30;
			iVar4 = 4;
			iVar1 = 1750;
			break;
		case 301:
			StringCopy(&Var2, "TORSO_P1_30_5" /* GXT: Charcoal Cardigan */, 16);
			iVar3 = 30;
			iVar4 = 5;
			iVar1 = 1990;
			break;
		case 302:
			StringCopy(&Var2, "TORSO_P1_30_6" /* GXT: White Cardigan */, 16);
			iVar3 = 30;
			iVar4 = 6;
			iVar1 = 1820;
			break;
		case 303:
			StringCopy(&Var2, "TORSO_P1_30_7" /* GXT: Silver Cardigan */, 16);
			iVar3 = 30;
			iVar4 = 7;
			iVar1 = 1990;
			break;
		case 304:
			StringCopy(&Var2, "TORSO_P1_30_8" /* GXT: Pale Blue Cardigan */, 16);
			iVar3 = 30;
			iVar4 = 8;
			iVar1 = 1920;
			break;
		case 305:
			StringCopy(&Var2, "TORSO_P1_30_9" /* GXT: Aqua Cardigan */, 16);
			iVar3 = 30;
			iVar4 = 9;
			iVar1 = 1850;
			break;
		case 306:
			StringCopy(&Var2, "TORSO_P1_30_10" /* GXT: Gray Two-Tone Cardigan */, 16);
			iVar3 = 30;
			iVar4 = 10;
			iVar1 = 1990;
			break;
		case 307:
			StringCopy(&Var2, "TORSO_P1_30_11" /* GXT: Pink Cardigan */, 16);
			iVar3 = 30;
			iVar4 = 11;
			iVar1 = 1790;
			break;
		case 308:
			StringCopy(&Var2, "TORSO_P1_30_12" /* GXT: Yellow Cardigan */, 16);
			iVar3 = 30;
			iVar4 = 12;
			iVar1 = 1790;
			break;
		case 309:
			StringCopy(&Var2, "TORSO_P1_31_0" /* GXT: LS Panic Gray Jersey */, 16);
			iVar3 = 31;
			iVar4 = 0;
			iVar1 = 69;
			break;
		case 310:
			StringCopy(&Var2, "TORSO_P1_31_1" /* GXT: LS Panic Yellow Jersey */, 16);
			iVar3 = 31;
			iVar4 = 1;
			iVar1 = 75;
			break;
		case 311:
			StringCopy(&Var2, "TORSO_P1_31_2" /* GXT: Penetrators White Jersey */, 16);
			iVar3 = 31;
			iVar4 = 2;
			iVar1 = 75;
			break;
		case 312:
			StringCopy(&Var2, "TORSO_P1_31_3" /* GXT: Penetrators Blue Jersey */, 16);
			iVar3 = 31;
			iVar4 = 3;
			iVar1 = 79;
			break;
		case 313:
			StringCopy(&Var2, "TORSO_P1_31_4" /* GXT: LC Salamanders Red Jersey */, 16);
			iVar3 = 31;
			iVar4 = 4;
			iVar1 = 79;
			break;
		case 314:
			StringCopy(&Var2, "TORSO_P1_31_5" /* GXT: LC Salamanders Green Jersey */, 16);
			iVar3 = 31;
			iVar4 = 5;
			iVar1 = 89;
			break;
		case 315:
			StringCopy(&Var2, "TORSO_P1_31_6" /* GXT: LS Shrimps Gray Jersey */, 16);
			iVar3 = 31;
			iVar4 = 6;
			iVar1 = 85;
			break;
		case 316:
			StringCopy(&Var2, "TORSO_P1_31_7" /* GXT: LS Shrimps White Jersey */, 16);
			iVar3 = 31;
			iVar4 = 7;
			iVar1 = 85;
			break;
		case 317:
			StringCopy(&Var2, "TORSO_P1_31_8" /* GXT: Uptown Riders Jersey */, 16);
			iVar3 = 31;
			iVar4 = 8;
			break;
		default:
			return;
			break;
	}
	func_88(&(Global_78130[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_127(int iParam0)//Position - 0x182CC
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 3;
	Global_78130[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 107:
			StringCopy(&Var2, "TORSO_P1_12_0" /* GXT: Snake A Jacket */, 16);
			iVar3 = 12;
			iVar4 = 0;
			iVar1 = 195;
			break;
		case 108:
			StringCopy(&Var2, "TORSO_P1_12_1" /* GXT: Eagle 69 Jacket */, 16);
			iVar3 = 12;
			iVar4 = 1;
			iVar1 = 420;
			break;
		case 109:
			StringCopy(&Var2, "TORSO_P1_12_2" /* GXT: LS Corkers 33 Jacket */, 16);
			iVar3 = 12;
			iVar4 = 2;
			iVar1 = 390;
			break;
		case 110:
			StringCopy(&Var2, "TORSO_P1_12_3" /* GXT: LSP 41 Jacket */, 16);
			iVar3 = 12;
			iVar4 = 3;
			iVar1 = 450;
			break;
		case 111:
			StringCopy(&Var2, "TORSO_P1_12_4" /* GXT: LS Corkers E Jacket */, 16);
			iVar3 = 12;
			iVar4 = 4;
			iVar1 = 400;
			break;
		case 112:
			StringCopy(&Var2, "TORSO_P1_12_5" /* GXT: LS Squeezers Jacket */, 16);
			iVar3 = 12;
			iVar4 = 5;
			iVar1 = 390;
			break;
		case 113:
			StringCopy(&Var2, "TORSO_P1_12_6" /* GXT: The Feud 69 Jacket */, 16);
			iVar3 = 12;
			iVar4 = 6;
			iVar1 = 570;
			break;
		case 114:
			StringCopy(&Var2, "TORSO_P1_12_7" /* GXT: LS Pounders Jacket */, 16);
			iVar3 = 12;
			iVar4 = 7;
			iVar1 = 390;
			break;
		case 115:
			StringCopy(&Var2, "TORSO_P1_12_8" /* GXT: SA Jacket */, 16);
			iVar3 = 12;
			iVar4 = 8;
			iVar1 = 470;
			break;
		case 116:
			StringCopy(&Var2, "TORSO_P1_12_9" /* GXT: Redwood A Jacket */, 16);
			iVar3 = 12;
			iVar4 = 9;
			iVar1 = 390;
			break;
		case 117:
			StringCopy(&Var2, "TORSO_P1_12_10" /* GXT: Uptown Riders Jacket */, 16);
			iVar3 = 12;
			iVar4 = 10;
			iVar1 = 520;
			break;
		case 118:
			StringCopy(&Var2, "TORSO_P1_12_11" /* GXT: The Feud Black Jacket */, 16);
			iVar3 = 12;
			iVar4 = 11;
			iVar1 = 490;
			break;
		case 119:
			StringCopy(&Var2, "TORSO_P1_12_12" /* GXT: Yeti Jacket */, 16);
			iVar3 = 12;
			iVar4 = 12;
			iVar1 = 490;
			break;
		case 120:
			StringCopy(&Var2, "TORSO_P1_12_13" /* GXT: LSP 71 Jacket */, 16);
			iVar3 = 12;
			iVar4 = 13;
			iVar1 = 590;
			break;
		case 121:
			StringCopy(&Var2, "TORSO_P1_12_14" /* GXT: Dust Devils Jacket */, 16);
			iVar3 = 12;
			iVar4 = 14;
			iVar1 = 560;
			break;
		case 122:
			StringCopy(&Var2, "TORSO_P1_12_15" /* GXT: SA 56 Jacket */, 16);
			iVar3 = 12;
			iVar4 = 15;
			iVar1 = 520;
			break;
		case 123:
			StringCopy(&Var2, "TORSO_P1_13_0" /* GXT: Gray Hoodie */, 16);
			iVar3 = 13;
			iVar4 = 0;
			break;
		case 124:
			StringCopy(&Var2, "TORSO_P1_13_1" /* GXT: Kingz of Los Santos Hoodie */, 16);
			iVar3 = 13;
			iVar4 = 1;
			break;
		case 125:
			StringCopy(&Var2, "TORSO_P1_13_2" /* GXT: LS Black Hoodie */, 16);
			iVar3 = 13;
			iVar4 = 2;
			break;
		case 126:
			StringCopy(&Var2, "TORSO_P1_13_3" /* GXT: Dark Blue Hoodie */, 16);
			iVar3 = 13;
			iVar4 = 3;
			iVar1 = 90;
			break;
		case 127:
			StringCopy(&Var2, "TORSO_P1_13_4" /* GXT: LS Mustard Hoodie */, 16);
			iVar3 = 13;
			iVar4 = 4;
			iVar1 = 85;
			break;
		case 128:
			StringCopy(&Var2, "TORSO_P1_13_5" /* GXT: Crevis Hoodie */, 16);
			iVar3 = 13;
			iVar4 = 5;
			iVar1 = 45;
			break;
		case 129:
			StringCopy(&Var2, "TORSO_P1_13_6" /* GXT: Dust Devils Hoodie */, 16);
			iVar3 = 13;
			iVar4 = 6;
			iVar1 = 90;
			break;
		case 130:
			StringCopy(&Var2, "TORSO_P1_13_7" /* GXT: Feud Olive Hoodie */, 16);
			iVar3 = 13;
			iVar4 = 7;
			iVar1 = 47;
			break;
		case 131:
			StringCopy(&Var2, "TORSO_P1_13_8" /* GXT: Eris Hoodie */, 16);
			iVar3 = 13;
			iVar4 = 8;
			iVar1 = 45;
			break;
		case 132:
			StringCopy(&Var2, "TORSO_P1_13_9" /* GXT: Hinterland Hoodie */, 16);
			iVar3 = 13;
			iVar4 = 9;
			iVar1 = 48;
			break;
		case 133:
			StringCopy(&Var2, "TORSO_P1_13_10" /* GXT: Feud Mint Hoodie */, 16);
			iVar3 = 13;
			iVar4 = 10;
			iVar1 = 45;
			break;
		case 134:
			StringCopy(&Var2, "TORSO_P1_13_11" /* GXT: Penetrators Gray Hoodie */, 16);
			iVar3 = 13;
			iVar4 = 11;
			iVar1 = 85;
			break;
		case 135:
			StringCopy(&Var2, "TORSO_P1_13_12" /* GXT: Ash Hoodie */, 16);
			iVar3 = 13;
			iVar4 = 12;
			iVar1 = 45;
			break;
		case 136:
			StringCopy(&Var2, "TORSO_P1_13_13" /* GXT: Rearwall Hoodie */, 16);
			iVar3 = 13;
			iVar4 = 13;
			iVar1 = 47;
			break;
		case 137:
			StringCopy(&Var2, "TORSO_P1_13_14" /* GXT: Trey Baker Hoodie */, 16);
			iVar3 = 13;
			iVar4 = 14;
			iVar1 = 45;
			break;
		case 138:
			StringCopy(&Var2, "TORSO_P1_13_15" /* GXT: Feud Camo Hoodie */, 16);
			iVar3 = 13;
			iVar4 = 15;
			iVar1 = 48;
			break;
		case 139:
			StringCopy(&Var2, "TORSO_P1_14_0" /* GXT: Gray Jacket */, 16);
			iVar3 = 14;
			iVar4 = 0;
			iVar1 = 290;
			break;
		case 140:
			StringCopy(&Var2, "TORSO_P1_14_1" /* GXT: Charcoal Jacket */, 16);
			iVar3 = 14;
			iVar4 = 1;
			iVar1 = 290;
			break;
		case 141:
			StringCopy(&Var2, "TORSO_P1_14_2" /* GXT: Silver Jacket */, 16);
			iVar3 = 14;
			iVar4 = 2;
			iVar1 = 290;
			break;
		case 142:
			StringCopy(&Var2, "TORSO_P1_14_3" /* GXT: Olive Jacket */, 16);
			iVar3 = 14;
			iVar4 = 3;
			iVar1 = 290;
			break;
		case 143:
			StringCopy(&Var2, "TORSO_P1_14_4" /* GXT: Brown Jacket */, 16);
			iVar3 = 14;
			iVar4 = 4;
			iVar1 = 290;
			break;
		case 144:
			StringCopy(&Var2, "TORSO_P1_14_5" /* GXT: Desert Sand Jacket */, 16);
			iVar3 = 14;
			iVar4 = 5;
			iVar1 = 290;
			break;
		case 145:
			StringCopy(&Var2, "TORSO_P1_14_6" /* GXT: Field Camo Jacket */, 16);
			iVar3 = 14;
			iVar4 = 6;
			iVar1 = 65;
			break;
		case 146:
			StringCopy(&Var2, "TORSO_P1_14_7" /* GXT: Desert Camo Jacket */, 16);
			iVar3 = 14;
			iVar4 = 7;
			iVar1 = 65;
			break;
		case 147:
			StringCopy(&Var2, "TORSO_P1_15_0" /* GXT: White T-Shirt */, 16);
			iVar3 = 15;
			iVar4 = 0;
			iVar1 = 200;
			break;
		case 148:
			StringCopy(&Var2, "TORSO_P1_15_1" /* GXT: Gray T-Shirt */, 16);
			iVar3 = 15;
			iVar4 = 1;
			iVar1 = 220;
			break;
		case 149:
			StringCopy(&Var2, "TORSO_P1_15_2" /* GXT: Slate T-Shirt */, 16);
			iVar3 = 15;
			iVar4 = 2;
			iVar1 = 220;
			break;
		case 150:
			StringCopy(&Var2, "TORSO_P1_15_3" /* GXT: Jade T-Shirt */, 16);
			iVar3 = 15;
			iVar4 = 3;
			iVar1 = 240;
			break;
		case 151:
			StringCopy(&Var2, "TORSO_P1_15_4" /* GXT: 100% T-Shirt */, 16);
			iVar3 = 15;
			iVar4 = 4;
			break;
		case 152:
			StringCopy(&Var2, "TORSO_P1_15_5" /* GXT: Navy T-Shirt */, 16);
			iVar3 = 15;
			iVar4 = 5;
			iVar1 = 250;
			break;
		case 153:
			StringCopy(&Var2, "TORSO_P1_15_6" /* GXT: Black T-Shirt */, 16);
			iVar3 = 15;
			iVar4 = 6;
			iVar1 = 260;
			break;
		case 154:
			StringCopy(&Var2, "TORSO_P1_15_7" /* GXT: LC Wrath T-Shirt */, 16);
			iVar3 = 15;
			iVar4 = 7;
			iVar1 = 40;
			break;
		case 155:
			StringCopy(&Var2, "TORSO_P1_15_8" /* GXT: LOB T-Shirt */, 16);
			iVar3 = 15;
			iVar4 = 8;
			iVar1 = 50;
			break;
		case 156:
			StringCopy(&Var2, "TORSO_P1_15_9" /* GXT: UCLS Bookworms T-Shirt */, 16);
			iVar3 = 15;
			iVar4 = 9;
			iVar1 = 45;
			break;
		case 157:
			StringCopy(&Var2, "TORSO_P1_15_10" /* GXT: Los Santos Red T-Shirt */, 16);
			iVar3 = 15;
			iVar4 = 10;
			iVar1 = 40;
			break;
		case 158:
			StringCopy(&Var2, "TORSO_P1_15_11" /* GXT: Queensbury Boxing T-Shirt */, 16);
			iVar3 = 15;
			iVar4 = 11;
			iVar1 = 55;
			break;
		case 159:
			StringCopy(&Var2, "TORSO_P1_16_0" /* GXT: Black Shirt */, 16);
			iVar3 = 16;
			iVar4 = 0;
			break;
		case 160:
			StringCopy(&Var2, "TORSO_P1_17_0" /* GXT: Blue Jacket */, 16);
			iVar3 = 17;
			iVar4 = 0;
			iVar1 = 40;
			break;
		case 161:
			StringCopy(&Var2, "TORSO_P1_17_1" /* GXT: OG Slate Jacket */, 16);
			iVar3 = 17;
			iVar4 = 1;
			iVar1 = 50;
			break;
		case 162:
			StringCopy(&Var2, "TORSO_P1_17_2" /* GXT: OG White Jacket */, 16);
			iVar3 = 17;
			iVar4 = 2;
			break;
		case 163:
			StringCopy(&Var2, "TORSO_P1_17_3" /* GXT: Corkers Green Jacket */, 16);
			iVar3 = 17;
			iVar4 = 3;
			iVar1 = 50;
			break;
		case 164:
			StringCopy(&Var2, "TORSO_P1_17_4" /* GXT: Deep Gray Jacket */, 16);
			iVar3 = 17;
			iVar4 = 4;
			iVar1 = 50;
			break;
		case 165:
			StringCopy(&Var2, "TORSO_P1_17_5" /* GXT: Kingz Banded Jacket */, 16);
			iVar3 = 17;
			iVar4 = 5;
			iVar1 = 50;
			break;
		case 166:
			StringCopy(&Var2, "TORSO_P1_17_6" /* GXT: Stank Forest Camo Jacket */, 16);
			iVar3 = 17;
			iVar4 = 6;
			iVar1 = 50;
			break;
		case 167:
			StringCopy(&Var2, "TORSO_P1_17_7" /* GXT: Trey Baker Camo Jacket */, 16);
			iVar3 = 17;
			iVar4 = 7;
			iVar1 = 50;
			break;
		case 168:
			StringCopy(&Var2, "TORSO_P1_17_8" /* GXT: Coffee Jacket */, 16);
			iVar3 = 17;
			iVar4 = 8;
			iVar1 = 50;
			break;
		case 169:
			StringCopy(&Var2, "TORSO_P1_17_9" /* GXT: Plain Coffee Jacket */, 16);
			iVar3 = 17;
			iVar4 = 9;
			iVar1 = 50;
			break;
		case 170:
			StringCopy(&Var2, "TORSO_P1_17_10" /* GXT: Fruntalot Green Jacket */, 16);
			iVar3 = 17;
			iVar4 = 10;
			iVar1 = 50;
			break;
		case 171:
			StringCopy(&Var2, "TORSO_P1_17_11" /* GXT: Mocha Jacket */, 16);
			iVar3 = 17;
			iVar4 = 11;
			iVar1 = 50;
			break;
		case 172:
			StringCopy(&Var2, "TORSO_P1_17_12" /* GXT: Brown Jacket */, 16);
			iVar3 = 17;
			iVar4 = 12;
			iVar1 = 50;
			break;
		case 173:
			StringCopy(&Var2, "TORSO_P1_17_13" /* GXT: LS Snake Weave Jacket */, 16);
			iVar3 = 17;
			iVar4 = 13;
			iVar1 = 50;
			break;
		case 174:
			StringCopy(&Var2, "TORSO_P1_17_14" /* GXT: Feud Animal Print Jacket */, 16);
			iVar3 = 17;
			iVar4 = 14;
			iVar1 = 50;
			break;
		case 175:
			StringCopy(&Var2, "TORSO_P1_17_15" /* GXT: Fruntalot Techno Jacket */, 16);
			iVar3 = 17;
			iVar4 = 15;
			iVar1 = 50;
			break;
		case 176:
			StringCopy(&Var2, "TORSO_P1_18_0" /* GXT: Gray Plaid Jacket */, 16);
			iVar3 = 18;
			iVar4 = 0;
			iVar6 = 3;
			break;
		case 177:
			StringCopy(&Var2, "TORSO_P1_18_1" /* GXT: Ash Plaid Jacket */, 16);
			iVar3 = 18;
			iVar4 = 1;
			iVar6 = 3;
			break;
		case 178:
			StringCopy(&Var2, "TORSO_P1_18_2" /* GXT: Charcoal Plaid Jacket */, 16);
			iVar3 = 18;
			iVar4 = 2;
			iVar6 = 3;
			break;
		case 179:
			StringCopy(&Var2, "TORSO_P1_18_3" /* GXT: Tan Plaid Jacket */, 16);
			iVar3 = 18;
			iVar4 = 3;
			iVar6 = 3;
			break;
		case 180:
			StringCopy(&Var2, "TORSO_P1_18_4" /* GXT: Slate Jacket */, 16);
			iVar3 = 18;
			iVar4 = 4;
			iVar6 = 3;
			break;
		case 181:
			StringCopy(&Var2, "TORSO_P1_18_5" /* GXT: Silver Jacket */, 16);
			iVar3 = 18;
			iVar4 = 5;
			iVar6 = 3;
			break;
		case 182:
			StringCopy(&Var2, "TORSO_P1_18_6" /* GXT: Stone Jacket */, 16);
			iVar3 = 18;
			iVar4 = 6;
			iVar6 = 3;
			break;
		case 183:
			StringCopy(&Var2, "TORSO_P1_18_7" /* GXT: Cream Jacket */, 16);
			iVar3 = 18;
			iVar4 = 7;
			iVar6 = 3;
			break;
		case 184:
			StringCopy(&Var2, "TORSO_P1_18_8" /* GXT: Navy Plaid Piped Jacket */, 16);
			iVar3 = 18;
			iVar4 = 8;
			iVar6 = 3;
			break;
		case 185:
			StringCopy(&Var2, "TORSO_P1_18_9" /* GXT: Off-White Jacket */, 16);
			iVar3 = 18;
			iVar4 = 9;
			iVar6 = 3;
			break;
		case 186:
			StringCopy(&Var2, "TORSO_P1_18_10" /* GXT: Red Piped Jacket */, 16);
			iVar3 = 18;
			iVar4 = 10;
			iVar6 = 3;
			break;
		case 187:
			StringCopy(&Var2, "TORSO_P1_18_11" /* GXT: Gray Piped Jacket */, 16);
			iVar3 = 18;
			iVar4 = 11;
			iVar6 = 3;
			break;
		case 188:
			StringCopy(&Var2, "TORSO_P1_18_12" /* GXT: Navy Jacket */, 16);
			iVar3 = 18;
			iVar4 = 12;
			iVar6 = 3;
			break;
		case 189:
			StringCopy(&Var2, "TORSO_P1_18_13" /* GXT: Russet Piped Jacket */, 16);
			iVar3 = 18;
			iVar4 = 13;
			iVar6 = 3;
			break;
		case 190:
			StringCopy(&Var2, "TORSO_P1_18_14" /* GXT: Green Jacket */, 16);
			iVar3 = 18;
			iVar4 = 14;
			iVar6 = 3;
			break;
		case 191:
			StringCopy(&Var2, "TORSO_P1_18_15" /* GXT: Beige Jacket */, 16);
			iVar3 = 18;
			iVar4 = 15;
			iVar6 = 3;
			break;
		case 192:
			StringCopy(&Var2, "TORSO_P1_19_0" /* GXT: Blue Striped Shirt */, 16);
			iVar3 = 19;
			iVar4 = 0;
			iVar1 = 480;
			iVar6 = 3;
			break;
		case 193:
			StringCopy(&Var2, "TORSO_P1_19_1" /* GXT: Beige Striped Shirt */, 16);
			iVar3 = 19;
			iVar4 = 1;
			iVar1 = 440;
			iVar6 = 3;
			break;
		case 194:
			StringCopy(&Var2, "TORSO_P1_19_2" /* GXT: Gray Shirt */, 16);
			iVar3 = 19;
			iVar4 = 2;
			iVar1 = 440;
			iVar6 = 3;
			break;
		case 195:
			StringCopy(&Var2, "TORSO_P1_19_3" /* GXT: Slate Shirt */, 16);
			iVar3 = 19;
			iVar4 = 3;
			iVar1 = 520;
			iVar6 = 3;
			break;
		case 196:
			StringCopy(&Var2, "TORSO_P1_19_4" /* GXT: Green Shirt */, 16);
			iVar3 = 19;
			iVar4 = 4;
			iVar1 = 440;
			iVar6 = 3;
			break;
		case 197:
			StringCopy(&Var2, "TORSO_P1_19_5" /* GXT: Picnic Plaid Shirt */, 16);
			iVar3 = 19;
			iVar4 = 5;
			iVar1 = 440;
			iVar6 = 3;
			break;
		case 198:
			StringCopy(&Var2, "TORSO_P1_19_6" /* GXT: White Shirt */, 16);
			iVar3 = 19;
			iVar4 = 6;
			iVar1 = 480;
			iVar6 = 3;
			break;
		case 199:
			StringCopy(&Var2, "TORSO_P1_19_7" /* GXT: Light Green Plaid Shirt */, 16);
			iVar3 = 19;
			iVar4 = 7;
			iVar1 = 480;
			iVar6 = 3;
			break;
		case 200:
			StringCopy(&Var2, "TORSO_P1_19_8" /* GXT: Pink Striped Shirt */, 16);
			iVar3 = 19;
			iVar4 = 8;
			iVar1 = 480;
			iVar6 = 3;
			break;
		case 201:
			StringCopy(&Var2, "TORSO_P1_19_9" /* GXT: Country Check Shirt */, 16);
			iVar3 = 19;
			iVar4 = 9;
			iVar1 = 480;
			iVar6 = 3;
			break;
		case 202:
			StringCopy(&Var2, "TORSO_P1_19_10" /* GXT: Off-White Striped Shirt */, 16);
			iVar3 = 19;
			iVar4 = 10;
			iVar1 = 480;
			iVar6 = 3;
			break;
		case 203:
			StringCopy(&Var2, "TORSO_P1_19_11" /* GXT: Russet Striped Shirt */, 16);
			iVar3 = 19;
			iVar4 = 11;
			iVar1 = 480;
			iVar6 = 3;
			break;
		case 204:
			StringCopy(&Var2, "TORSO_P1_19_12" /* GXT: Sea Green Plaid Shirt */, 16);
			iVar3 = 19;
			iVar4 = 12;
			iVar1 = 520;
			iVar6 = 3;
			break;
		case 205:
			StringCopy(&Var2, "TORSO_P1_19_13" /* GXT: Navy Shirt */, 16);
			iVar3 = 19;
			iVar4 = 13;
			iVar1 = 520;
			iVar6 = 3;
			break;
		case 206:
			StringCopy(&Var2, "TORSO_P1_19_14" /* GXT: Brown Check Shirt */, 16);
			iVar3 = 19;
			iVar4 = 14;
			iVar1 = 520;
			iVar6 = 3;
			break;
		case 207:
			StringCopy(&Var2, "TORSO_P1_19_15" /* GXT: Sand Check Shirt */, 16);
			iVar3 = 19;
			iVar4 = 15;
			iVar1 = 440;
			iVar6 = 3;
			break;
		case 208:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 20;
			iVar4 = 0;
			bVar0 = true;
			iVar6 = 4;
			break;
		case 209:
			StringCopy(&Var2, "TORSO_P1_21_0" /* GXT: Black Jacket */, 16);
			iVar3 = 21;
			iVar4 = 0;
			iVar1 = 220;
			break;
		case 210:
			StringCopy(&Var2, "TORSO_P1_21_1" /* GXT: Sand Jacket */, 16);
			iVar3 = 21;
			iVar4 = 1;
			iVar1 = 200;
			break;
		case 211:
			StringCopy(&Var2, "TORSO_P1_21_2" /* GXT: Teal Jacket */, 16);
			iVar3 = 21;
			iVar4 = 2;
			iVar1 = 240;
			break;
		case 212:
			StringCopy(&Var2, "TORSO_P1_21_3" /* GXT: Gray Jacket */, 16);
			iVar3 = 21;
			iVar4 = 3;
			iVar1 = 240;
			break;
		case 213:
			StringCopy(&Var2, "TORSO_P1_21_4" /* GXT: Gray Three-Way Jacket */, 16);
			iVar3 = 21;
			iVar4 = 4;
			iVar1 = 260;
			break;
		case 214:
			StringCopy(&Var2, "TORSO_P1_21_5" /* GXT: Red Accent Jacket */, 16);
			iVar3 = 21;
			iVar4 = 5;
			iVar1 = 275;
			break;
		case 215:
			StringCopy(&Var2, "TORSO_P1_21_6" /* GXT: Aqua Accent Jacket */, 16);
			iVar3 = 21;
			iVar4 = 6;
			iVar1 = 275;
			break;
		case 216:
			StringCopy(&Var2, "TORSO_P1_21_7" /* GXT: Brown Two-Tone Jacket */, 16);
			iVar3 = 21;
			iVar4 = 7;
			iVar1 = 280;
			break;
		case 217:
			StringCopy(&Var2, "TORSO_P1_21_8" /* GXT: White Jacket */, 16);
			iVar3 = 21;
			iVar4 = 8;
			iVar1 = 280;
			break;
		case 218:
			StringCopy(&Var2, "TORSO_P1_21_9" /* GXT: Tan Two-Tone Jacket */, 16);
			iVar3 = 21;
			iVar4 = 9;
			iVar1 = 280;
			break;
		case 219:
			StringCopy(&Var2, "TORSO_P1_21_10" /* GXT: Red Jacket */, 16);
			iVar3 = 21;
			iVar4 = 10;
			iVar1 = 280;
			break;
		case 220:
			StringCopy(&Var2, "TORSO_P1_21_11" /* GXT: Olive Two-Tone Jacket */, 16);
			iVar3 = 21;
			iVar4 = 11;
			iVar1 = 280;
			break;
		case 221:
			StringCopy(&Var2, "TORSO_P1_21_12" /* GXT: Three-Way Jacket */, 16);
			iVar3 = 21;
			iVar4 = 12;
			iVar1 = 280;
			break;
		case 222:
			StringCopy(&Var2, "TORSO_P1_21_13" /* GXT: Ash Two-Tone Jacket */, 16);
			iVar3 = 21;
			iVar4 = 13;
			iVar1 = 280;
			break;
		case 223:
			StringCopy(&Var2, "TORSO_P1_22_0" /* GXT: Navy Peacoat */, 16);
			iVar3 = 22;
			iVar4 = 0;
			iVar1 = 3100;
			iVar6 = 3;
			break;
		case 224:
			StringCopy(&Var2, "TORSO_P1_22_1" /* GXT: Gray Peacoat */, 16);
			iVar3 = 22;
			iVar4 = 1;
			iVar1 = 2800;
			iVar6 = 3;
			break;
		case 225:
			StringCopy(&Var2, "TORSO_P1_22_2" /* GXT: Brown Peacoat */, 16);
			iVar3 = 22;
			iVar4 = 2;
			iVar1 = 2500;
			iVar6 = 3;
			break;
		case 226:
			StringCopy(&Var2, "TORSO_P1_22_3" /* GXT: Black Peacoat */, 16);
			iVar3 = 22;
			iVar4 = 3;
			iVar1 = 3000;
			iVar6 = 3;
			break;
		default:
			return;
			break;
	}
	func_88(&(Global_78130[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_128(int iParam0)//Position - 0x190BA
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 3;
	Global_78130[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "TORSO_P1_0_0" /* GXT: White Tank Top */, 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		case 1:
			StringCopy(&Var2, "TORSO_P1_0_1" /* GXT: Black Tank Top */, 16);
			iVar3 = 0;
			iVar4 = 1;
			break;
		case 2:
			StringCopy(&Var2, "TORSO_P1_0_2" /* GXT: Gray Tank Top */, 16);
			iVar3 = 0;
			iVar4 = 2;
			iVar1 = 180;
			break;
		case 3:
			StringCopy(&Var2, "TORSO_P1_0_3" /* GXT: Feud Green Tank Top */, 16);
			iVar3 = 0;
			iVar4 = 3;
			iVar1 = 22;
			break;
		case 4:
			StringCopy(&Var2, "TORSO_P1_0_4" /* GXT: Fruntalot Jade Tank Top */, 16);
			iVar3 = 0;
			iVar4 = 4;
			iVar1 = 20;
			break;
		case 5:
			StringCopy(&Var2, "TORSO_P1_0_5" /* GXT: Fruntalot Brown Tank Top */, 16);
			iVar3 = 0;
			iVar4 = 5;
			iVar1 = 18;
			break;
		case 6:
			StringCopy(&Var2, "TORSO_P1_0_6" /* GXT: Broker Blue Tank Top */, 16);
			iVar3 = 0;
			iVar4 = 6;
			iVar1 = 19;
			break;
		case 7:
			StringCopy(&Var2, "TORSO_P1_0_7" /* GXT: Kingz Green Tank Top */, 16);
			iVar3 = 0;
			iVar4 = 7;
			iVar1 = 22;
			break;
		case 8:
			StringCopy(&Var2, "TORSO_P1_0_8" /* GXT: Broker Gray Tank Top */, 16);
			iVar3 = 0;
			iVar4 = 8;
			iVar1 = 20;
			break;
		case 9:
			StringCopy(&Var2, "TORSO_P1_0_9" /* GXT: Harsh Souls Tank Top */, 16);
			iVar3 = 0;
			iVar4 = 9;
			iVar1 = 19;
			break;
		case 10:
			StringCopy(&Var2, "TORSO_P1_0_10" /* GXT: Sweatbox Tank Top */, 16);
			iVar3 = 0;
			iVar4 = 10;
			iVar1 = 19;
			break;
		case 11:
			StringCopy(&Var2, "TORSO_P1_0_11" /* GXT: White Ringer Tank Top */, 16);
			iVar3 = 0;
			iVar4 = 11;
			iVar1 = 18;
			break;
		case 12:
			StringCopy(&Var2, "TORSO_P1_0_12" /* GXT: Rearwall Tank Top */, 16);
			iVar3 = 0;
			iVar4 = 12;
			iVar1 = 20;
			break;
		case 13:
			StringCopy(&Var2, "TORSO_P1_0_13" /* GXT: Feud 3 Tank Top */, 16);
			iVar3 = 0;
			iVar4 = 13;
			iVar1 = 22;
			break;
		case 14:
			StringCopy(&Var2, "TORSO_P1_0_14" /* GXT: Kingz Charcoal Tank Top */, 16);
			iVar3 = 0;
			iVar4 = 14;
			iVar1 = 19;
			break;
		case 15:
			StringCopy(&Var2, "TORSO_P1_0_15" /* GXT: Feud White Tank Top */, 16);
			iVar3 = 0;
			iVar4 = 15;
			iVar1 = 22;
			break;
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			iVar6 = 4;
			break;
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 1;
			bVar0 = true;
			iVar6 = 4;
			break;
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 2;
			bVar0 = true;
			iVar6 = 4;
			break;
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 3;
			bVar0 = true;
			iVar6 = 4;
			break;
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 4;
			bVar0 = true;
			iVar6 = 4;
			break;
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 5;
			bVar0 = true;
			iVar6 = 4;
			break;
		case 22:
			StringCopy(&Var2, "TORSO_P1_2_0" /* GXT: White Tuxedo Jacket */, 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			iVar6 = 3;
			break;
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			iVar6 = 1;
			break;
		case 24:
			StringCopy(&Var2, "TORSO_P1_4_0" /* GXT: White OG T-Shirt */, 16);
			iVar3 = 4;
			iVar4 = 0;
			iVar1 = 20;
			iVar6 = 2;
			break;
		case 25:
			StringCopy(&Var2, "TORSO_P1_4_1" /* GXT: Black OG T-Shirt */, 16);
			iVar3 = 4;
			iVar4 = 1;
			iVar1 = 22;
			iVar6 = 2;
			break;
		case 26:
			StringCopy(&Var2, "TORSO_P1_4_2" /* GXT: Ash OG T-Shirt */, 16);
			iVar3 = 4;
			iVar4 = 2;
			iVar1 = 20;
			iVar6 = 2;
			break;
		case 27:
			StringCopy(&Var2, "TORSO_P1_4_3" /* GXT: LC Swingers OG T-Shirt */, 16);
			iVar3 = 4;
			iVar4 = 3;
			iVar1 = 25;
			iVar6 = 2;
			break;
		case 28:
			StringCopy(&Var2, "TORSO_P1_4_4" /* GXT: Corkers Red OG T-Shirt */, 16);
			iVar3 = 4;
			iVar4 = 4;
			iVar1 = 23;
			iVar6 = 2;
			break;
		case 29:
			StringCopy(&Var2, "TORSO_P1_4_5" /* GXT: Corkers Green OG T-Shirt */, 16);
			iVar3 = 4;
			iVar4 = 5;
			iVar1 = 25;
			iVar6 = 2;
			break;
		case 30:
			StringCopy(&Var2, "TORSO_P1_4_6" /* GXT: Uptown Riders OG T-Shirt */, 16);
			iVar3 = 4;
			iVar4 = 6;
			iVar1 = 28;
			iVar6 = 2;
			break;
		case 31:
			StringCopy(&Var2, "TORSO_P1_4_7" /* GXT: Feud White OG T-Shirt */, 16);
			iVar3 = 4;
			iVar4 = 7;
			iVar1 = 26;
			iVar6 = 2;
			break;
		case 32:
			StringCopy(&Var2, "TORSO_P1_4_8" /* GXT: Salamanders OG T-Shirt */, 16);
			iVar3 = 4;
			iVar4 = 8;
			iVar1 = 24;
			iVar6 = 2;
			break;
		case 33:
			StringCopy(&Var2, "TORSO_P1_4_9" /* GXT: LC Rampage OG T-Shirt */, 16);
			iVar3 = 4;
			iVar4 = 9;
			iVar1 = 27;
			iVar6 = 2;
			break;
		case 34:
			StringCopy(&Var2, "TORSO_P1_4_10" /* GXT: Dust Devils OG T-Shirt */, 16);
			iVar3 = 4;
			iVar4 = 10;
			iVar1 = 29;
			iVar6 = 2;
			break;
		case 35:
			StringCopy(&Var2, "TORSO_P1_4_11" /* GXT: LS Gray OG T-Shirt */, 16);
			iVar3 = 4;
			iVar4 = 11;
			iVar1 = 28;
			iVar6 = 2;
			break;
		case 36:
			StringCopy(&Var2, "TORSO_P1_4_12" /* GXT: Los Santos Black OG T-Shirt */, 16);
			iVar3 = 4;
			iVar4 = 12;
			iVar1 = 25;
			iVar6 = 2;
			break;
		case 37:
			StringCopy(&Var2, "TORSO_P1_4_13" /* GXT: Los Santos White OG T-Shirt */, 16);
			iVar3 = 4;
			iVar4 = 13;
			iVar1 = 22;
			iVar6 = 2;
			break;
		case 38:
			StringCopy(&Var2, "TORSO_P1_4_14" /* GXT: Pounders OG T-Shirt */, 16);
			iVar3 = 4;
			iVar4 = 14;
			iVar1 = 27;
			iVar6 = 2;
			break;
		case 39:
			StringCopy(&Var2, "TORSO_P1_4_15" /* GXT: Feud Black OG T-Shirt */, 16);
			iVar3 = 4;
			iVar4 = 15;
			iVar1 = 29;
			iVar6 = 2;
			break;
		case 40:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			iVar6 = 4;
			break;
		case 41:
			StringCopy(&Var2, "TORSO_P1_6_0" /* GXT: Pine Striped Sweater */, 16);
			iVar3 = 6;
			iVar4 = 0;
			iVar6 = 3;
			break;
		case 42:
			StringCopy(&Var2, "TORSO_P1_6_1" /* GXT: Yellow Sweater */, 16);
			iVar3 = 6;
			iVar4 = 1;
			iVar1 = 1270;
			iVar6 = 3;
			break;
		case 43:
			StringCopy(&Var2, "TORSO_P1_6_2" /* GXT: Blue Sweater */, 16);
			iVar3 = 6;
			iVar4 = 2;
			iVar1 = 1270;
			iVar6 = 3;
			break;
		case 44:
			StringCopy(&Var2, "TORSO_P1_6_3" /* GXT: Sand Striped Sweater */, 16);
			iVar3 = 6;
			iVar4 = 3;
			iVar1 = 1270;
			iVar6 = 3;
			break;
		case 45:
			StringCopy(&Var2, "TORSO_P1_6_4" /* GXT: Silver Sweater */, 16);
			iVar3 = 6;
			iVar4 = 4;
			iVar1 = 1090;
			iVar6 = 3;
			break;
		case 46:
			StringCopy(&Var2, "TORSO_P1_6_5" /* GXT: Gray Sweater */, 16);
			iVar3 = 6;
			iVar4 = 5;
			iVar1 = 1090;
			iVar6 = 3;
			break;
		case 47:
			StringCopy(&Var2, "TORSO_P1_6_6" /* GXT: Navy Argyle Sweater */, 16);
			iVar3 = 6;
			iVar4 = 6;
			iVar1 = 1120;
			iVar6 = 3;
			break;
		case 48:
			StringCopy(&Var2, "TORSO_P1_6_7" /* GXT: Sand Sweater */, 16);
			iVar3 = 6;
			iVar4 = 7;
			iVar1 = 1120;
			iVar6 = 3;
			break;
		case 49:
			StringCopy(&Var2, "TORSO_P1_6_8" /* GXT: Salmon Pink Sweater */, 16);
			iVar3 = 6;
			iVar4 = 8;
			iVar1 = 1290;
			iVar6 = 3;
			break;
		case 50:
			StringCopy(&Var2, "TORSO_P1_6_9" /* GXT: Turquoise Sweater */, 16);
			iVar3 = 6;
			iVar4 = 9;
			iVar1 = 1290;
			iVar6 = 3;
			break;
		case 51:
			StringCopy(&Var2, "TORSO_P1_6_10" /* GXT: Green Sweater */, 16);
			iVar3 = 6;
			iVar4 = 10;
			iVar1 = 1320;
			iVar6 = 3;
			break;
		case 52:
			StringCopy(&Var2, "TORSO_P1_6_11" /* GXT: Amethyst Sweater */, 16);
			iVar3 = 6;
			iVar4 = 11;
			iVar1 = 1320;
			iVar6 = 3;
			break;
		case 53:
			StringCopy(&Var2, "TORSO_P1_6_12" /* GXT: Yellow Argyle Sweater */, 16);
			iVar3 = 6;
			iVar4 = 12;
			iVar1 = 1590;
			iVar6 = 3;
			break;
		case 54:
			StringCopy(&Var2, "TORSO_P1_6_13" /* GXT: Gray Two-Tone Sweater */, 16);
			iVar3 = 6;
			iVar4 = 13;
			iVar1 = 1590;
			iVar6 = 3;
			break;
		case 55:
			StringCopy(&Var2, "TORSO_P1_6_14" /* GXT: Sand Argyle Sweater */, 16);
			iVar3 = 6;
			iVar4 = 14;
			iVar1 = 1590;
			iVar6 = 3;
			break;
		case 56:
			StringCopy(&Var2, "TORSO_P1_6_15" /* GXT: Charcoal Sweater */, 16);
			iVar3 = 6;
			iVar4 = 15;
			iVar1 = 1320;
			iVar6 = 3;
			break;
		case 57:
			StringCopy(&Var2, "TORSO_P1_7_0" /* GXT: Ash Shirt */, 16);
			iVar3 = 7;
			iVar4 = 0;
			iVar1 = 98;
			break;
		case 58:
			StringCopy(&Var2, "TORSO_P1_7_1" /* GXT: Gray Shirt */, 16);
			iVar3 = 7;
			iVar4 = 1;
			iVar1 = 98;
			break;
		case 59:
			StringCopy(&Var2, "TORSO_P1_7_2" /* GXT: Black Shirt */, 16);
			iVar3 = 7;
			iVar4 = 2;
			iVar1 = 110;
			break;
		case 60:
			StringCopy(&Var2, "TORSO_P1_7_3" /* GXT: Silver Shirt */, 16);
			iVar3 = 7;
			iVar4 = 3;
			iVar1 = 110;
			break;
		case 61:
			StringCopy(&Var2, "TORSO_P1_7_4" /* GXT: White Shirt */, 16);
			iVar3 = 7;
			iVar4 = 4;
			iVar1 = 118;
			break;
		case 62:
			StringCopy(&Var2, "TORSO_P1_7_5" /* GXT: Olive Shirt */, 16);
			iVar3 = 7;
			iVar4 = 5;
			iVar1 = 120;
			break;
		case 63:
			StringCopy(&Var2, "TORSO_P1_7_6" /* GXT: Navy Shirt */, 16);
			iVar3 = 7;
			iVar4 = 6;
			iVar1 = 120;
			break;
		case 64:
			StringCopy(&Var2, "TORSO_P1_7_7" /* GXT: Red Shirt */, 16);
			iVar3 = 7;
			iVar4 = 7;
			iVar1 = 129;
			break;
		case 65:
			StringCopy(&Var2, "TORSO_P1_7_8" /* GXT: Tan Check Shirt */, 16);
			iVar3 = 7;
			iVar4 = 8;
			iVar1 = 125;
			break;
		case 66:
			StringCopy(&Var2, "TORSO_P1_7_9" /* GXT: Beige Gingham Shirt */, 16);
			iVar3 = 7;
			iVar4 = 9;
			iVar1 = 125;
			break;
		case 67:
			StringCopy(&Var2, "TORSO_P1_7_10" /* GXT: Gray Gingham Shirt */, 16);
			iVar3 = 7;
			iVar4 = 10;
			iVar1 = 129;
			break;
		case 68:
			StringCopy(&Var2, "TORSO_P1_7_11" /* GXT: Gray Check Shirt */, 16);
			iVar3 = 7;
			iVar4 = 11;
			iVar1 = 129;
			break;
		case 69:
			StringCopy(&Var2, "TORSO_P1_7_12" /* GXT: Blue Shirt */, 16);
			iVar3 = 7;
			iVar4 = 12;
			iVar1 = 135;
			break;
		case 70:
			StringCopy(&Var2, "TORSO_P1_7_13" /* GXT: Off-White Shirt */, 16);
			iVar3 = 7;
			iVar4 = 13;
			iVar1 = 139;
			break;
		case 71:
			StringCopy(&Var2, "TORSO_P1_7_14" /* GXT: Pastel Check Shirt */, 16);
			iVar3 = 7;
			iVar4 = 14;
			iVar1 = 145;
			break;
		case 72:
			StringCopy(&Var2, "TORSO_P1_7_15" /* GXT: Fruity Check Shirt */, 16);
			iVar3 = 7;
			iVar4 = 15;
			iVar1 = 145;
			break;
		case 73:
			StringCopy(&Var2, "TORSO_P1_8_0" /* GXT: Blue Shirt */, 16);
			iVar3 = 8;
			iVar4 = 0;
			break;
		case 74:
			StringCopy(&Var2, "TORSO_P1_8_1" /* GXT: Yellow Check Shirt */, 16);
			iVar3 = 8;
			iVar4 = 1;
			break;
		case 75:
			StringCopy(&Var2, "TORSO_P1_8_2" /* GXT: Off-White Striped Shirt */, 16);
			iVar3 = 8;
			iVar4 = 2;
			break;
		case 76:
			StringCopy(&Var2, "TORSO_P1_8_3" /* GXT: Off-White Shirt */, 16);
			iVar3 = 8;
			iVar4 = 3;
			break;
		case 77:
			StringCopy(&Var2, "TORSO_P1_8_4" /* GXT: Red Check Shirt */, 16);
			iVar3 = 8;
			iVar4 = 4;
			iVar1 = 30;
			break;
		case 78:
			StringCopy(&Var2, "TORSO_P1_8_5" /* GXT: Charcoal Shirt */, 16);
			iVar3 = 8;
			iVar4 = 5;
			iVar1 = 38;
			break;
		case 79:
			StringCopy(&Var2, "TORSO_P1_8_6" /* GXT: Blue Check Shirt */, 16);
			iVar3 = 8;
			iVar4 = 6;
			iVar1 = 32;
			break;
		case 80:
			StringCopy(&Var2, "TORSO_P1_8_7" /* GXT: Gingham Shirt */, 16);
			iVar3 = 8;
			iVar4 = 7;
			iVar1 = 30;
			break;
		case 81:
			StringCopy(&Var2, "TORSO_P1_8_8" /* GXT: Aqua Check Shirt */, 16);
			iVar3 = 8;
			iVar4 = 8;
			iVar1 = 33;
			break;
		case 82:
			StringCopy(&Var2, "TORSO_P1_8_9" /* GXT: Orange Shirt */, 16);
			iVar3 = 8;
			iVar4 = 9;
			iVar1 = 35;
			break;
		case 83:
			StringCopy(&Var2, "TORSO_P1_8_10" /* GXT: Mint Check Shirt */, 16);
			iVar3 = 8;
			iVar4 = 10;
			iVar1 = 35;
			break;
		case 84:
			StringCopy(&Var2, "TORSO_P1_8_11" /* GXT: Dark Gray Check Shirt */, 16);
			iVar3 = 8;
			iVar4 = 11;
			iVar1 = 38;
			break;
		case 85:
			StringCopy(&Var2, "TORSO_P1_8_12" /* GXT: Purple Check Shirt */, 16);
			iVar3 = 8;
			iVar4 = 12;
			iVar1 = 33;
			break;
		case 86:
			StringCopy(&Var2, "TORSO_P1_8_13" /* GXT: Olive Shirt */, 16);
			iVar3 = 8;
			iVar4 = 13;
			iVar1 = 35;
			break;
		case 87:
			StringCopy(&Var2, "TORSO_P1_8_14" /* GXT: Cream Shirt */, 16);
			iVar3 = 8;
			iVar4 = 14;
			iVar1 = 38;
			break;
		case 88:
			StringCopy(&Var2, "TORSO_P1_8_15" /* GXT: Fruity Check Shirt */, 16);
			iVar3 = 8;
			iVar4 = 15;
			iVar1 = 32;
			break;
		case 89:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 90:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 91:
			StringCopy(&Var2, "TORSO_P1_11_0" /* GXT: White Longsleeve */, 16);
			iVar3 = 11;
			iVar4 = 0;
			break;
		case 92:
			StringCopy(&Var2, "TORSO_P1_11_1" /* GXT: Gray Longsleeve */, 16);
			iVar3 = 11;
			iVar4 = 1;
			iVar1 = 59;
			break;
		case 93:
			StringCopy(&Var2, "TORSO_P1_11_2" /* GXT: Black Longsleeve */, 16);
			iVar3 = 11;
			iVar4 = 2;
			break;
		case 94:
			StringCopy(&Var2, "TORSO_P1_11_3" /* GXT: Ten Off Yellow Longsleeve */, 16);
			iVar3 = 11;
			iVar4 = 3;
			iVar1 = 25;
			break;
		case 95:
			StringCopy(&Var2, "TORSO_P1_11_4" /* GXT: Kingz Of Los Santos Longsleeve */, 16);
			iVar3 = 11;
			iVar4 = 4;
			iVar1 = 29;
			break;
		case 96:
			StringCopy(&Var2, "TORSO_P1_11_5" /* GXT: Yeti Rainbow Longsleeve */, 16);
			iVar3 = 11;
			iVar4 = 5;
			iVar1 = 27;
			break;
		case 97:
			StringCopy(&Var2, "TORSO_P1_11_6" /* GXT: Ten Off Red Longsleeve */, 16);
			iVar3 = 11;
			iVar4 = 6;
			iVar1 = 25;
			break;
		case 98:
			StringCopy(&Var2, "TORSO_P1_11_7" /* GXT: Trey Baker Longsleeve */, 16);
			iVar3 = 11;
			iVar4 = 7;
			iVar1 = 27;
			break;
		case 99:
			StringCopy(&Var2, "TORSO_P1_11_8" /* GXT: Stank Striped Longsleeve */, 16);
			iVar3 = 11;
			iVar4 = 8;
			iVar1 = 28;
			break;
		case 100:
			StringCopy(&Var2, "TORSO_P1_11_9" /* GXT: Feud Olive Longsleeve */, 16);
			iVar3 = 11;
			iVar4 = 9;
			iVar1 = 30;
			break;
		case 101:
			StringCopy(&Var2, "TORSO_P1_11_10" /* GXT: Yeti Gray Longsleeve */, 16);
			iVar3 = 11;
			iVar4 = 10;
			iVar1 = 29;
			break;
		case 102:
			StringCopy(&Var2, "TORSO_P1_11_11" /* GXT: Yogarishima Longsleeve */, 16);
			iVar3 = 11;
			iVar4 = 11;
			iVar1 = 27;
			break;
		case 103:
			StringCopy(&Var2, "TORSO_P1_11_12" /* GXT: Yeti Camo Longsleeve */, 16);
			iVar3 = 11;
			iVar4 = 12;
			iVar1 = 29;
			break;
		case 104:
			StringCopy(&Var2, "TORSO_P1_11_13" /* GXT: Crevis White Longsleeve */, 16);
			iVar3 = 11;
			iVar4 = 13;
			iVar1 = 32;
			break;
		case 105:
			StringCopy(&Var2, "TORSO_P1_11_14" /* GXT: Yeti Blue Longsleeve */, 16);
			iVar3 = 11;
			iVar4 = 14;
			iVar1 = 30;
			break;
		case 106:
			StringCopy(&Var2, "TORSO_P1_11_15" /* GXT: Uptown Ryders Longsleeve */, 16);
			iVar3 = 11;
			iVar4 = 15;
			iVar1 = 28;
			break;
		default:
			return;
			break;
	}
	func_88(&(Global_78130[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_129(int iParam0)//Position - 0x19CF9
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 2;
	Global_78130[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "HAIR_P1_0_0" /* GXT: Fade */, 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		case 1:
			StringCopy(&Var2, "HAIR_P1_0_1" /* GXT: Triple Rails */, 16);
			iVar3 = 0;
			iVar4 = 1;
			break;
		case 2:
			StringCopy(&Var2, "HAIR_P1_0_2" /* GXT: Side Shaded */, 16);
			iVar3 = 0;
			iVar4 = 2;
			break;
		case 3:
			StringCopy(&Var2, "HAIR_P1_0_3" /* GXT: Wavy Siderows */, 16);
			iVar3 = 0;
			iVar4 = 3;
			iVar6 = 3;
			break;
		case 4:
			StringCopy(&Var2, "HAIR_P1_0_4" /* GXT: Snakes */, 16);
			iVar3 = 0;
			iVar4 = 4;
			iVar6 = 3;
			break;
		case 5:
			StringCopy(&Var2, "HAIR_P1_0_5" /* GXT: Tramlines */, 16);
			iVar3 = 0;
			iVar4 = 5;
			iVar6 = 3;
			break;
		case 6:
			StringCopy(&Var2, "HAIR_P1_0_6" /* GXT: The King Fresh */, 16);
			iVar3 = 0;
			iVar4 = 6;
			iVar6 = 3;
			break;
		case 7:
			StringCopy(&Var2, "HAIR_P1_0_7" /* GXT: Star Kutz */, 16);
			iVar3 = 0;
			iVar4 = 7;
			iVar6 = 3;
			break;
		case 8:
			StringCopy(&Var2, "HAIR_P1_0_8" /* GXT: Tigerized */, 16);
			iVar3 = 0;
			iVar4 = 8;
			iVar6 = 3;
			break;
		case 9:
			StringCopy(&Var2, "HAIR_P1_0_9" /* GXT: Abstraction */, 16);
			iVar3 = 0;
			iVar4 = 9;
			iVar6 = 3;
			break;
		case 10:
			StringCopy(&Var2, "HAIR_P1_0_10" /* GXT: Shutters */, 16);
			iVar3 = 0;
			iVar4 = 10;
			iVar6 = 3;
			break;
		case 11:
			StringCopy(&Var2, "HAIR_P1_0_11" /* GXT: Berms */, 16);
			iVar3 = 0;
			iVar4 = 11;
			iVar6 = 3;
			break;
		case 12:
			StringCopy(&Var2, "HAIR_P1_0_12" /* GXT: Mellowplex */, 16);
			iVar3 = 0;
			iVar4 = 12;
			iVar6 = 3;
			break;
		case 13:
			StringCopy(&Var2, "HAIR_P1_0_13" /* GXT: The Feud */, 16);
			iVar3 = 0;
			iVar4 = 13;
			break;
		case 14:
			StringCopy(&Var2, "HAIR_P1_0_14" /* GXT: Business on Top */, 16);
			iVar3 = 0;
			iVar4 = 14;
			iVar6 = 3;
			break;
		case 15:
			StringCopy(&Var2, "HAIR_P1_0_15" /* GXT: Wild Palm */, 16);
			iVar3 = 0;
			iVar4 = 15;
			iVar6 = 3;
			break;
		case 16:
			StringCopy(&Var2, "HAIR_P1_1_0" /* GXT: Lo Fro */, 16);
			iVar3 = 1;
			iVar4 = 0;
			iVar6 = 3;
			break;
		case 17:
			StringCopy(&Var2, "HAIR_P1_2_0" /* GXT: Blowout */, 16);
			iVar3 = 2;
			iVar4 = 0;
			iVar6 = 3;
			break;
		case 18:
			StringCopy(&Var2, "HAIR_P1_3_0" /* GXT: Cornrows */, 16);
			iVar3 = 3;
			iVar4 = 0;
			iVar6 = 3;
			break;
		case 19:
			StringCopy(&Var2, "HAIR_P1_4_0" /* GXT: Shape-up */, 16);
			iVar3 = 4;
			iVar4 = 0;
			break;
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			break;
		default:
			func_95(iVar7, iParam0, 21, -1);
			return;
			break;
	}
	func_88(&(Global_78130[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_130(int iParam0)//Position - 0x19F71
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 0;
	Global_78130[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 1;
			break;
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 2;
			break;
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 3;
			break;
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 4;
			break;
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 5;
			break;
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 6;
			break;
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 7;
			break;
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 8;
			break;
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 9;
			break;
		default:
			func_95(iVar7, iParam0, 10, -1);
			return;
			break;
	}
	func_88(&(Global_78130[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_131(int iParam0, int iParam1)//Position - 0x1A0AD
{
	switch (iParam0)
	{
		case 0:
			func_148(iParam1);
			break;
		case 2:
			func_147(iParam1);
			break;
		case 3:
			func_144(iParam1);
			break;
		case 4:
			func_143(iParam1);
			break;
		case 6:
			func_142(iParam1);
			break;
		case 5:
			func_141(iParam1);
			break;
		case 8:
			func_140(iParam1);
			break;
		case 9:
			func_139(iParam1);
			break;
		case 10:
			func_138(iParam1);
			break;
		case 1:
			func_137(iParam1);
			break;
		case 7:
			func_136(iParam1);
			break;
		case 11:
			func_135(iParam1);
			break;
		case 12:
			func_134(iParam1);
			break;
		case 13:
			func_133(iParam1);
			break;
		case 14:
			func_132(iParam1);
			break;
	}
}

void func_132(int iParam0)//Position - 0x1A19D
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 14;
	Global_78130[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 0;
			break;
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 1;
			break;
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 2;
			break;
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 3;
			break;
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 4;
			break;
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 5;
			break;
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 6;
			break;
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 7;
			break;
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 8;
			break;
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		case 11:
			StringCopy(&Var2, "PROPS_P0_H1" /* GXT: Blue Baseball Cap */, 16);
			iVar3 = 1;
			iVar4 = 0;
			iVar5 = 0;
			break;
		case 12:
			StringCopy(&Var2, "PROPS_P0_H2" /* GXT: White Hockey Mask */, 16);
			iVar3 = 2;
			iVar4 = 0;
			iVar1 = 320;
			iVar5 = 11;
			break;
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 0;
			iVar5 = 0;
			break;
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 1;
			iVar5 = 0;
			break;
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 2;
			iVar5 = 0;
			break;
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 3;
			iVar5 = 0;
			break;
		case 25:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 4;
			iVar5 = 0;
			break;
		case 26:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 5;
			iVar5 = 0;
			break;
		case 27:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 6;
			iVar5 = 0;
			break;
		case 28:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 7;
			iVar5 = 0;
			break;
		case 29:
			StringCopy(&Var2, "PROPS_P0_H12" /* GXT: Black Knitted Hat */, 16);
			iVar3 = 12;
			iVar4 = 0;
			iVar5 = 0;
			break;
		case 30:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 13;
			iVar4 = 0;
			iVar5 = 0;
			break;
		case 31:
			StringCopy(&Var2, "PROPS_P1_H8_0" /* GXT: Green Monster Mask */, 16);
			iVar3 = 14;
			iVar4 = 0;
			iVar1 = 270;
			iVar5 = 0;
			break;
		case 32:
			StringCopy(&Var2, "PROPS_P1_H8_1" /* GXT: Red Monster Mask */, 16);
			iVar3 = 14;
			iVar4 = 1;
			iVar1 = 270;
			iVar5 = 0;
			break;
		case 33:
			StringCopy(&Var2, "PROPS_P1_H9_0" /* GXT: Pig Mask */, 16);
			iVar3 = 15;
			iVar4 = 0;
			iVar1 = 200;
			iVar5 = 0;
			break;
		case 34:
			StringCopy(&Var2, "PROPS_P1_H9_1" /* GXT: Dark Pig Mask */, 16);
			iVar3 = 15;
			iVar4 = 1;
			iVar1 = 200;
			iVar5 = 0;
			break;
		case 35:
			StringCopy(&Var2, "PROPS_P1_H10_0" /* GXT: Silver Skull Mask */, 16);
			iVar3 = 16;
			iVar4 = 0;
			iVar1 = 350;
			iVar5 = 0;
			break;
		case 36:
			StringCopy(&Var2, "PROPS_P1_H10_1" /* GXT: Bone Skull Mask */, 16);
			iVar3 = 16;
			iVar4 = 1;
			iVar1 = 350;
			iVar5 = 0;
			break;
		case 37:
			StringCopy(&Var2, "PROPS_P1_H11_0" /* GXT: Space Monkey Mask */, 16);
			iVar3 = 17;
			iVar4 = 0;
			iVar1 = 450;
			iVar5 = 0;
			break;
		case 38:
			StringCopy(&Var2, "PROPS_P1_H12_0" /* GXT: White Hockey Mask */, 16);
			iVar3 = 18;
			iVar4 = 0;
			iVar1 = 500;
			iVar5 = 0;
			break;
		case 39:
			StringCopy(&Var2, "PROPS_P1_H12_1" /* GXT: Red Hockey Mask */, 16);
			iVar3 = 18;
			iVar4 = 1;
			iVar1 = 500;
			iVar5 = 0;
			break;
		case 40:
			StringCopy(&Var2, "PROPS_P1_H13_0" /* GXT: Ape Mask */, 16);
			iVar3 = 19;
			iVar4 = 0;
			iVar1 = 50;
			iVar5 = 0;
			break;
		case 41:
			StringCopy(&Var2, "PROPS_P1_H13_1" /* GXT: Dark Ape Mask */, 16);
			iVar3 = 19;
			iVar4 = 1;
			iVar1 = 50;
			iVar5 = 0;
			break;
		case 42:
			StringCopy(&Var2, "PROPS_P1_H14_0" /* GXT: Carnival Orange Mask */, 16);
			iVar3 = 20;
			iVar4 = 0;
			iVar1 = 99;
			iVar5 = 0;
			break;
		case 43:
			StringCopy(&Var2, "PROPS_P1_H14_1" /* GXT: Carnival White Mask */, 16);
			iVar3 = 20;
			iVar4 = 1;
			iVar1 = 99;
			iVar5 = 0;
			break;
		case 44:
			StringCopy(&Var2, "PROPS_P1_H14_2" /* GXT: Carnival Blue Mask */, 16);
			iVar3 = 20;
			iVar4 = 2;
			iVar1 = 99;
			iVar5 = 0;
			break;
		case 45:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 21;
			iVar4 = 0;
			iVar5 = 0;
			break;
		case 46:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 22;
			iVar4 = 0;
			iVar5 = 0;
			break;
		case 47:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 23;
			iVar4 = 0;
			iVar5 = 0;
			break;
		case 48:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 23;
			iVar4 = 1;
			iVar5 = 0;
			break;
		case 49:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 23;
			iVar4 = 2;
			iVar5 = 0;
			break;
		case 50:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 23;
			iVar4 = 3;
			iVar5 = 0;
			break;
		case 51:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 23;
			iVar4 = 4;
			iVar5 = 0;
			break;
		case 52:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 23;
			iVar4 = 5;
			iVar5 = 0;
			break;
		case 53:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 24;
			iVar4 = 0;
			iVar5 = 0;
			break;
		case 54:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 25;
			iVar4 = 0;
			iVar5 = 0;
			break;
		case 55:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 26;
			iVar4 = 0;
			iVar5 = 0;
			break;
		case 56:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 27;
			iVar4 = 0;
			iVar5 = 0;
			break;
		case 57:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 28;
			iVar4 = 0;
			iVar5 = 0;
			break;
		case 58:
			StringCopy(&Var2, "PROPS_P0_E0" /* GXT: Black-Rimmed Glasses */, 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 45;
			iVar5 = 10;
			break;
		case 59:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 10;
			break;
		case 60:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 10;
			break;
		case 61:
			StringCopy(&Var2, "PROPS_P0_E3" /* GXT: Copper Sports Shades */, 16);
			iVar3 = 3;
			iVar4 = 0;
			iVar1 = 55;
			iVar5 = 10;
			break;
		case 62:
			StringCopy(&Var2, "PROPS_P0_E4" /* GXT: Enema Brown Glasses */, 16);
			iVar3 = 4;
			iVar4 = 0;
			iVar1 = 58;
			iVar5 = 10;
			break;
		case 63:
			StringCopy(&Var2, "PROPS_P0_E4_1" /* GXT: Enema Gray Glasses */, 16);
			iVar3 = 4;
			iVar4 = 1;
			iVar1 = 56;
			iVar5 = 10;
			break;
		case 64:
			StringCopy(&Var2, "PROPS_P0_E4_2" /* GXT: Enema Black Glasses */, 16);
			iVar3 = 4;
			iVar4 = 2;
			iVar1 = 60;
			iVar5 = 10;
			break;
		case 65:
			StringCopy(&Var2, "PROPS_P0_E4_3" /* GXT: Enema Tortoiseshell Glasses */, 16);
			iVar3 = 4;
			iVar4 = 3;
			iVar1 = 65;
			iVar5 = 10;
			break;
		case 66:
			StringCopy(&Var2, "PROPS_P0_E4_4" /* GXT: Enema Coffee Glasses */, 16);
			iVar3 = 4;
			iVar4 = 4;
			iVar1 = 62;
			iVar5 = 10;
			break;
		case 67:
			StringCopy(&Var2, "PROPS_P0_E4_5" /* GXT: Enema Walnut Glasses */, 16);
			iVar3 = 4;
			iVar4 = 5;
			iVar1 = 65;
			iVar5 = 10;
			break;
		case 68:
			StringCopy(&Var2, "PROPS_P0_E4_6" /* GXT: Enema Silver Accent Glasses */, 16);
			iVar3 = 4;
			iVar4 = 6;
			iVar1 = 68;
			iVar5 = 10;
			break;
		case 69:
			StringCopy(&Var2, "PROPS_P0_E4_7" /* GXT: Enema Smoke Glasses */, 16);
			iVar3 = 4;
			iVar4 = 7;
			iVar1 = 68;
			iVar5 = 10;
			break;
		case 70:
			StringCopy(&Var2, "PROPS_P0_E5" /* GXT: Farshtunken Gold Aviators */, 16);
			iVar3 = 5;
			iVar4 = 0;
			iVar1 = 65;
			iVar5 = 10;
			break;
		case 71:
			StringCopy(&Var2, "PROPS_P0_E5_1" /* GXT: Farshtunken Purple Aviators */, 16);
			iVar3 = 5;
			iVar4 = 1;
			iVar1 = 69;
			iVar5 = 10;
			break;
		case 72:
			StringCopy(&Var2, "PROPS_P0_E5_2" /* GXT: Farshtunken Silver Aviators */, 16);
			iVar3 = 5;
			iVar4 = 2;
			iVar1 = 72;
			iVar5 = 10;
			break;
		case 73:
			StringCopy(&Var2, "PROPS_P0_E5_3" /* GXT: Farshtunken Gray Aviators */, 16);
			iVar3 = 5;
			iVar4 = 3;
			iVar1 = 70;
			iVar5 = 10;
			break;
		case 74:
			StringCopy(&Var2, "PROPS_P0_E5_4" /* GXT: Farshtunken Blue Aviators */, 16);
			iVar3 = 5;
			iVar4 = 4;
			iVar1 = 74;
			iVar5 = 10;
			break;
		case 75:
			StringCopy(&Var2, "PROPS_P0_E5_5" /* GXT: Farshtunken Tinted Aviators */, 16);
			iVar3 = 5;
			iVar4 = 5;
			iVar1 = 78;
			iVar5 = 10;
			break;
		case 76:
			StringCopy(&Var2, "PROPS_P0_E5_6" /* GXT: Farshtunken Steel Aviators */, 16);
			iVar3 = 5;
			iVar4 = 6;
			iVar1 = 82;
			iVar5 = 10;
			break;
		case 77:
			StringCopy(&Var2, "PROPS_P0_E5_7" /* GXT: Farshtunken Sepia Aviators */, 16);
			iVar3 = 5;
			iVar4 = 7;
			iVar1 = 85;
			iVar5 = 10;
			break;
		case 78:
			StringCopy(&Var2, "PROPS_P0_E5_8" /* GXT: Farshtunken Black Aviators */, 16);
			iVar3 = 5;
			iVar4 = 8;
			iVar1 = 85;
			iVar5 = 10;
			break;
		case 79:
			StringCopy(&Var2, "PROPS_P0_E5_9" /* GXT: Farshtunken Smoke Aviators */, 16);
			iVar3 = 5;
			iVar4 = 9;
			iVar5 = 10;
			break;
		case 80:
			StringCopy(&Var2, "PROPS_P0_E6" /* GXT: Tung Charcoal Shades */, 16);
			iVar3 = 6;
			iVar4 = 0;
			iVar1 = 69;
			iVar5 = 10;
			break;
		case 81:
			StringCopy(&Var2, "PROPS_P0_E6_1" /* GXT: Tung Ash Shades */, 16);
			iVar3 = 6;
			iVar4 = 1;
			iVar1 = 69;
			iVar5 = 10;
			break;
		case 82:
			StringCopy(&Var2, "PROPS_P0_E6_2" /* GXT: Tung Gray Shades */, 16);
			iVar3 = 6;
			iVar4 = 2;
			iVar1 = 69;
			iVar5 = 10;
			break;
		case 83:
			StringCopy(&Var2, "PROPS_P0_E6_3" /* GXT: Tung Red Shades */, 16);
			iVar3 = 6;
			iVar4 = 3;
			iVar1 = 69;
			iVar5 = 10;
			break;
		case 84:
			StringCopy(&Var2, "PROPS_P0_E6_4" /* GXT: Tung Blue Shades */, 16);
			iVar3 = 6;
			iVar4 = 4;
			iVar1 = 69;
			iVar5 = 10;
			break;
		case 85:
			StringCopy(&Var2, "PROPS_P0_E6_5" /* GXT: Tung Yellow Shades */, 16);
			iVar3 = 6;
			iVar4 = 5;
			iVar1 = 69;
			iVar5 = 10;
			break;
		case 86:
			StringCopy(&Var2, "PROPS_P0_E6_6" /* GXT: Tung Black Shades */, 16);
			iVar3 = 6;
			iVar4 = 6;
			iVar1 = 69;
			iVar5 = 10;
			break;
		case 87:
			StringCopy(&Var2, "PROPS_P0_E6_7" /* GXT: Tung Rosy Shades */, 16);
			iVar3 = 6;
			iVar4 = 7;
			iVar1 = 69;
			iVar5 = 10;
			break;
		case 88:
			StringCopy(&Var2, "PROPS_P0_E6_8" /* GXT: Tung Hornet Shades */, 16);
			iVar3 = 6;
			iVar4 = 8;
			iVar1 = 69;
			iVar5 = 10;
			break;
		case 89:
			StringCopy(&Var2, "PROPS_P0_E6_9" /* GXT: Tung Two-Tone Shades */, 16);
			iVar3 = 6;
			iVar4 = 9;
			iVar1 = 69;
			iVar5 = 10;
			break;
		case 90:
			StringCopy(&Var2, "PROPS_P0_E7" /* GXT: Swimming Goggles */, 16);
			iVar3 = 7;
			iVar4 = 0;
			iVar5 = 10;
			break;
		case 91:
			StringCopy(&Var2, "PROPS_P0_E8" /* GXT: Rimmers Azure Aviators */, 16);
			iVar3 = 8;
			iVar4 = 0;
			iVar1 = 170;
			iVar5 = 10;
			break;
		case 92:
			StringCopy(&Var2, "PROPS_P0_E8_1" /* GXT: Rimmers Smoke Aviators */, 16);
			iVar3 = 8;
			iVar4 = 1;
			iVar1 = 175;
			iVar5 = 10;
			break;
		case 93:
			StringCopy(&Var2, "PROPS_P0_E8_2" /* GXT: Rimmers Yellow Aviators */, 16);
			iVar3 = 8;
			iVar4 = 2;
			iVar1 = 180;
			iVar5 = 10;
			break;
		case 94:
			StringCopy(&Var2, "PROPS_P0_E8_3" /* GXT: Rimmers Topaz Aviators */, 16);
			iVar3 = 8;
			iVar4 = 3;
			iVar1 = 185;
			iVar5 = 10;
			break;
		case 95:
			StringCopy(&Var2, "PROPS_P0_E8_4" /* GXT: Rimmers Tinted Aviators */, 16);
			iVar3 = 8;
			iVar4 = 4;
			iVar1 = 189;
			iVar5 = 10;
			break;
		case 96:
			StringCopy(&Var2, "PROPS_P0_E8_5" /* GXT: Rimmers Steel Aviators */, 16);
			iVar3 = 8;
			iVar4 = 5;
			iVar1 = 195;
			iVar5 = 10;
			break;
		case 97:
			StringCopy(&Var2, "PROPS_P0_E8_6" /* GXT: Rimmers Indigo Aviators */, 16);
			iVar3 = 8;
			iVar4 = 6;
			iVar1 = 235;
			iVar5 = 10;
			break;
		case 98:
			StringCopy(&Var2, "PROPS_P0_E8_7" /* GXT: Rimmers Chocolate Aviators */, 16);
			iVar3 = 8;
			iVar4 = 7;
			iVar1 = 245;
			iVar5 = 10;
			break;
		case 99:
			StringCopy(&Var2, "PROPS_P0_E8_8" /* GXT: Rimmers Sepia Aviators */, 16);
			iVar3 = 8;
			iVar4 = 8;
			iVar1 = 250;
			iVar5 = 10;
			break;
		case 100:
			StringCopy(&Var2, "PROPS_P0_E8_9" /* GXT: Rimmers Slate Aviators */, 16);
			iVar3 = 8;
			iVar4 = 9;
			iVar1 = 275;
			iVar5 = 10;
			break;
		case 101:
			StringCopy(&Var2, "PROPS_P0_E8_10" /* GXT: Rimmers Gold Aviators */, 16);
			iVar3 = 8;
			iVar4 = 10;
			iVar1 = 280;
			iVar5 = 10;
			break;
		case 102:
			StringCopy(&Var2, "PROPS_P0_E8_11" /* GXT: Rimmers Blue Aviators */, 16);
			iVar3 = 8;
			iVar4 = 11;
			iVar1 = 295;
			iVar5 = 10;
			break;
		case 103:
			StringCopy(&Var2, "PROPS_P0_E9" /* GXT: Hawaiian Snow Black Shades */, 16);
			iVar3 = 9;
			iVar4 = 0;
			iVar1 = 179;
			iVar5 = 10;
			break;
		case 104:
			StringCopy(&Var2, "PROPS_P0_E9_1" /* GXT: Hawaiian Snow Charcoal Shades */, 16);
			iVar3 = 9;
			iVar4 = 1;
			iVar1 = 159;
			iVar5 = 10;
			break;
		case 105:
			StringCopy(&Var2, "PROPS_P0_E9_2" /* GXT: Hawaiian Snow Ash Shades */, 16);
			iVar3 = 9;
			iVar4 = 2;
			iVar1 = 165;
			iVar5 = 10;
			break;
		case 106:
			StringCopy(&Var2, "PROPS_P0_E9_3" /* GXT: Hawaiian Snow Gray Shades */, 16);
			iVar3 = 9;
			iVar4 = 3;
			iVar1 = 155;
			iVar5 = 10;
			break;
		case 107:
			StringCopy(&Var2, "PROPS_P0_E9_4" /* GXT: Hawaiian Snow Tan Shades */, 16);
			iVar3 = 9;
			iVar4 = 4;
			iVar1 = 175;
			iVar5 = 10;
			break;
		case 108:
			StringCopy(&Var2, "PROPS_P0_E9_5" /* GXT: Hawaiian Snow Tortoiseshell Shades */, 16);
			iVar3 = 9;
			iVar4 = 5;
			iVar1 = 185;
			iVar5 = 10;
			break;
		case 109:
			StringCopy(&Var2, "PROPS_P0_E9_6" /* GXT: Hawaiian Snow Walnut Shades */, 16);
			iVar3 = 9;
			iVar4 = 6;
			iVar1 = 189;
			iVar5 = 10;
			break;
		case 110:
			StringCopy(&Var2, "PROPS_P0_E9_7" /* GXT: Hawaiian Snow Marbled Shades */, 16);
			iVar3 = 9;
			iVar4 = 7;
			iVar1 = 225;
			iVar5 = 10;
			break;
		case 111:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			iVar1 = 100;
			iVar5 = 10;
			break;
		case 112:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 2;
			break;
		default:
			func_95(iVar7, iParam0, 113, -1);
			return;
			break;
	}
	func_88(&(Global_78130[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_133(int iParam0)//Position - 0x1AEFB
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 13;
	Global_78130[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		default:
			func_95(iVar7, iParam0, 10, -1);
			return;
			break;
	}
	func_88(&(Global_78130[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_134(int iParam0)//Position - 0x1B06A
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 12;
	Global_78130[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "OUTFIT_P0_0" /* GXT: Gray Suit */, 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 1:
			StringCopy(&Var2, "OUTFIT_P0_1" /* GXT: Firefighter */, 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		case 3:
			StringCopy(&Var2, "OUTFIT_P0_4" /* GXT: Janitor */, 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		case 4:
			StringCopy(&Var2, "OUTFIT_P0_7" /* GXT: Highway Patrol */, 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		case 5:
			StringCopy(&Var2, "OUTFIT_P0_8" /* GXT: Golf */, 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		case 6:
			StringCopy(&Var2, "OUTFIT_P0_9" /* GXT: Bed */, 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		case 8:
			StringCopy(&Var2, "OUTFIT_P0_11" /* GXT: Epsilon Robes */, 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		case 9:
			StringCopy(&Var2, "OUTFIT_P0_12" /* GXT: Tennis */, 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		case 11:
			StringCopy(&Var2, "OUTFIT_P0_14" /* GXT: Scuba Land */, 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		case 12:
			StringCopy(&Var2, "OUTFIT_P0_17" /* GXT: Stealth */, 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		case 13:
			StringCopy(&Var2, "OUTFIT_P0_18" /* GXT: Triathlon */, 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		case 14:
			StringCopy(&Var2, "OUTFIT_P0_19" /* GXT: Security */, 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		case 15:
			StringCopy(&Var2, "OUTFIT_P0_20" /* GXT: Exterminator */, 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		case 16:
			StringCopy(&Var2, "OUTFIT_P0_22" /* GXT: Tuxedo */, 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 10000;
			break;
		case 17:
			StringCopy(&Var2, "OUTFIT_P0_23" /* GXT: Ludendorff */, 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		case 18:
			StringCopy(&Var2, "OUTFIT_P0_24" /* GXT: Rappel Gear */, 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		case 19:
			StringCopy(&Var2, "OUTFIT_P0_26" /* GXT: Blue Boiler Suit */, 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		case 20:
			StringCopy(&Var2, "OUTFIT_P0_28" /* GXT: Navy Boiler Suit */, 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 105;
			break;
		case 21:
			StringCopy(&Var2, "OUTFIT_P0_29" /* GXT: Gray Boiler Suit */, 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 105;
			break;
		case 22:
			StringCopy(&Var2, "OUTFIT_P0_30" /* GXT: Green Boiler Suit */, 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 105;
			break;
		case 23:
			StringCopy(&Var2, "OUTFIT_P0_31" /* GXT: Prologue */, 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		case 24:
			StringCopy(&Var2, "OUTFIT_P0_32" /* GXT: Spec Ops */, 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		case 25:
			StringCopy(&Var2, "OUTFIT_P0_33" /* GXT: Denim Shirt, Jeans */, 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		case 26:
			StringCopy(&Var2, "OUTFIT_P0_34" /* GXT: Slate Suit */, 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		case 27:
			StringCopy(&Var2, "OUTFIT_P0_35" /* GXT: Leather Jacket, Jeans */, 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		case 28:
			StringCopy(&Var2, "OUTFIT_P0_11" /* GXT: Epsilon Robes */, 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		case 29:
			StringCopy(&Var2, "OUTFIT_P0_36" /* GXT: Charcoal Suit */, 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4900;
			break;
		case 30:
			StringCopy(&Var2, "OUTFIT_P0_37" /* GXT: Pale Blue Shirt, Gray Pants */, 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 840;
			break;
		case 31:
			StringCopy(&Var2, "OUTFIT_P0_38" /* GXT: Jewel Heist Suit */, 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		case 32:
			StringCopy(&Var2, "OUTFIT_P0_39" /* GXT: Polo Shirt, Beach Shorts */, 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		case 33:
			StringCopy(&Var2, "OUTFIT_P0_40" /* GXT: Polo Shirt, Suit Pants */, 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		case 34:
			StringCopy(&Var2, "OUTFIT_P0_41" /* GXT: Shirt, Shorts */, 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		case 35:
			StringCopy(&Var2, "OUTFIT_P0_42" /* GXT: Polo Shirt, Jeans */, 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		case 36:
			StringCopy(&Var2, "OUTFIT_P0_43" /* GXT: Topaz Suit */, 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		case 37:
			StringCopy(&Var2, "OUTFIT_P0_44" /* GXT: Pale Blue Suit */, 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 3900;
			break;
		case 38:
			StringCopy(&Var2, "OUTFIT_P0_45" /* GXT: Off-White Suit */, 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4000;
			break;
		case 39:
			StringCopy(&Var2, "OUTFIT_P0_46" /* GXT: Olive Suit */, 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5900;
			break;
		case 40:
			StringCopy(&Var2, "OUTFIT_P0_47" /* GXT: Cream Suit */, 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4600;
			break;
		case 41:
			StringCopy(&Var2, "OUTFIT_P0_48" /* GXT: Navy Suit */, 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5500;
			break;
		case 42:
			StringCopy(&Var2, "OUTFIT_P0_49" /* GXT: Beige Suit */, 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4400;
			break;
		case 43:
			StringCopy(&Var2, "OUTFIT_P0_50" /* GXT: Smoke Suit */, 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4400;
			break;
		case 44:
			StringCopy(&Var2, "OUTFIT_P0_51" /* GXT: Blue-Gray Suit */, 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4900;
			break;
		case 45:
			StringCopy(&Var2, "OUTFIT_P0_52" /* GXT: Ash Suit */, 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5500;
			break;
		case 46:
			StringCopy(&Var2, "OUTFIT_P0_53" /* GXT: Sand Suit */, 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4500;
			break;
		case 47:
			StringCopy(&Var2, "OUTFIT_P0_54" /* GXT: Black Suit */, 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5900;
			break;
		case 48:
			StringCopy(&Var2, "OUTFIT_P0_55" /* GXT: Moto X */, 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		case 49:
			StringCopy(&Var2, "OUTFIT_P0_17" /* GXT: Stealth */, 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		case 50:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		case 51:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		case 52:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		default:
			func_95(iVar7, iParam0, 53, -1);
			return;
			break;
	}
	func_88(&(Global_78130[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_135(int iParam0)//Position - 0x1B5DB
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 11;
	Global_78130[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		case 2:
			StringCopy(&Var2, "JBIB_P0_02_0" /* GXT: Ash T-Shirt */, 16);
			iVar3 = 2;
			iVar4 = 0;
			break;
		case 3:
			StringCopy(&Var2, "JBIB_P0_02_1" /* GXT: White T-Shirt */, 16);
			iVar3 = 2;
			iVar4 = 1;
			break;
		case 4:
			StringCopy(&Var2, "JBIB_P0_02_2" /* GXT: Gray T-Shirt */, 16);
			iVar3 = 2;
			iVar4 = 2;
			break;
		case 5:
			StringCopy(&Var2, "JBIB_P0_02_3" /* GXT: Charcoal T-Shirt */, 16);
			iVar3 = 2;
			iVar4 = 3;
			break;
		case 6:
			StringCopy(&Var2, "JBIB_P0_02_4" /* GXT: Green T-Shirt */, 16);
			iVar3 = 2;
			iVar4 = 4;
			break;
		case 7:
			StringCopy(&Var2, "JBIB_P0_02_5" /* GXT: Blue T-Shirt */, 16);
			iVar3 = 2;
			iVar4 = 5;
			break;
		case 8:
			StringCopy(&Var2, "JBIB_P0_03_0" /* GXT: Charcoal Henley */, 16);
			iVar3 = 3;
			iVar4 = 0;
			iVar1 = 390;
			break;
		case 9:
			StringCopy(&Var2, "JBIB_P0_03_1" /* GXT: Gray Henley */, 16);
			iVar3 = 3;
			iVar4 = 1;
			iVar1 = 390;
			break;
		case 10:
			StringCopy(&Var2, "JBIB_P0_03_2" /* GXT: Black Henley */, 16);
			iVar3 = 3;
			iVar4 = 2;
			iVar1 = 420;
			break;
		case 11:
			StringCopy(&Var2, "JBIB_P0_03_3" /* GXT: Beige Henley */, 16);
			iVar3 = 3;
			iVar4 = 3;
			iVar1 = 420;
			break;
		case 12:
			StringCopy(&Var2, "JBIB_P0_03_4" /* GXT: Brown Henley */, 16);
			iVar3 = 3;
			iVar4 = 4;
			iVar1 = 490;
			break;
		case 13:
			StringCopy(&Var2, "JBIB_P0_03_5" /* GXT: Navy Henley */, 16);
			iVar3 = 3;
			iVar4 = 5;
			iVar1 = 490;
			break;
		case 14:
			StringCopy(&Var2, "JBIB_P0_03_6" /* GXT: Navy Striped Henley */, 16);
			iVar3 = 3;
			iVar4 = 6;
			iVar1 = 540;
			break;
		case 15:
			StringCopy(&Var2, "JBIB_P0_03_7" /* GXT: Gray Striped Henley */, 16);
			iVar3 = 3;
			iVar4 = 7;
			iVar1 = 540;
			break;
		case 16:
			StringCopy(&Var2, "JBIB_P0_03_8" /* GXT: Gray Wool Henley */, 16);
			iVar3 = 3;
			iVar4 = 8;
			iVar1 = 550;
			break;
		case 17:
			StringCopy(&Var2, "JBIB_P0_03_9" /* GXT: Charcoal Striped Henley */, 16);
			iVar3 = 3;
			iVar4 = 9;
			iVar1 = 540;
			break;
		case 18:
			StringCopy(&Var2, "JBIB_P0_04_0" /* GXT: Charcoal V Neck */, 16);
			iVar3 = 4;
			iVar4 = 0;
			iVar1 = 850;
			break;
		case 19:
			StringCopy(&Var2, "JBIB_P0_04_1" /* GXT: Beige V Neck */, 16);
			iVar3 = 4;
			iVar4 = 1;
			iVar1 = 850;
			break;
		case 20:
			StringCopy(&Var2, "JBIB_P0_04_2" /* GXT: Black V Neck */, 16);
			iVar3 = 4;
			iVar4 = 2;
			iVar1 = 890;
			break;
		case 21:
			StringCopy(&Var2, "JBIB_P0_04_3" /* GXT: Olive V Neck */, 16);
			iVar3 = 4;
			iVar4 = 3;
			iVar1 = 890;
			break;
		case 22:
			StringCopy(&Var2, "JBIB_P0_04_4" /* GXT: Gray V Neck */, 16);
			iVar3 = 4;
			iVar4 = 4;
			iVar1 = 920;
			break;
		case 23:
			StringCopy(&Var2, "JBIB_P0_04_5" /* GXT: Brown V Neck */, 16);
			iVar3 = 4;
			iVar4 = 5;
			iVar1 = 920;
			break;
		case 24:
			StringCopy(&Var2, "JBIB_P0_04_6" /* GXT: Black Striped V Neck */, 16);
			iVar3 = 4;
			iVar4 = 6;
			iVar1 = 950;
			break;
		case 25:
			StringCopy(&Var2, "JBIB_P0_04_7" /* GXT: Gray Diamond V Neck */, 16);
			iVar3 = 4;
			iVar4 = 7;
			iVar1 = 980;
			break;
		case 26:
			StringCopy(&Var2, "JBIB_P0_04_8" /* GXT: Brown Striped V Neck */, 16);
			iVar3 = 4;
			iVar4 = 8;
			iVar1 = 1050;
			break;
		case 27:
			StringCopy(&Var2, "JBIB_P0_04_9" /* GXT: Silver Diamond V Neck */, 16);
			iVar3 = 4;
			iVar4 = 9;
			iVar1 = 1100;
			break;
		case 28:
			StringCopy(&Var2, "JBIB_P0_05_0" /* GXT: Black Vest, White Shirt */, 16);
			iVar3 = 5;
			iVar4 = 0;
			iVar1 = 1890;
			break;
		case 29:
			StringCopy(&Var2, "JBIB_P0_05_1" /* GXT: Black Vest, Black Shirt */, 16);
			iVar3 = 5;
			iVar4 = 1;
			iVar1 = 1820;
			break;
		case 30:
			StringCopy(&Var2, "JBIB_P0_05_2" /* GXT: Black Vest, Gray Shirt */, 16);
			iVar3 = 5;
			iVar4 = 2;
			iVar1 = 1820;
			break;
		case 31:
			StringCopy(&Var2, "JBIB_P0_05_3" /* GXT: Black Vest, Blue Shirt */, 16);
			iVar3 = 5;
			iVar4 = 3;
			iVar1 = 1850;
			break;
		case 32:
			StringCopy(&Var2, "JBIB_P0_05_4" /* GXT: Black Vest, Pink Shirt */, 16);
			iVar3 = 5;
			iVar4 = 4;
			iVar1 = 1850;
			break;
		case 33:
			StringCopy(&Var2, "JBIB_P0_05_5" /* GXT: Ash Vest, White Shirt */, 16);
			iVar3 = 5;
			iVar4 = 5;
			iVar1 = 1900;
			break;
		case 34:
			StringCopy(&Var2, "JBIB_P0_05_6" /* GXT: Ash Vest, Black Shirt */, 16);
			iVar3 = 5;
			iVar4 = 6;
			iVar1 = 1920;
			break;
		case 35:
			StringCopy(&Var2, "JBIB_P0_05_7" /* GXT: Ash Vest, Gray Shirt */, 16);
			iVar3 = 5;
			iVar4 = 7;
			iVar1 = 1980;
			break;
		case 36:
			StringCopy(&Var2, "JBIB_P0_05_8" /* GXT: Ash Vest, Blue Shirt */, 16);
			iVar3 = 5;
			iVar4 = 8;
			iVar1 = 2100;
			break;
		case 37:
			StringCopy(&Var2, "JBIB_P0_05_9" /* GXT: Ash Vest, Pink Shirt */, 16);
			iVar3 = 5;
			iVar4 = 9;
			iVar1 = 2120;
			break;
		case 38:
			StringCopy(&Var2, "JBIB_P0_05_10" /* GXT: Blue Vest, White Shirt */, 16);
			iVar3 = 5;
			iVar4 = 10;
			iVar1 = 2000;
			break;
		case 39:
			StringCopy(&Var2, "JBIB_P0_05_11" /* GXT: Blue Vest, Black Shirt */, 16);
			iVar3 = 5;
			iVar4 = 11;
			iVar1 = 2200;
			break;
		case 40:
			StringCopy(&Var2, "JBIB_P0_05_12" /* GXT: Blue Vest, Gray Shirt */, 16);
			iVar3 = 5;
			iVar4 = 12;
			iVar1 = 2280;
			break;
		case 41:
			StringCopy(&Var2, "JBIB_P0_05_13" /* GXT: Blue Vest, Blue Shirt */, 16);
			iVar3 = 5;
			iVar4 = 13;
			iVar1 = 2300;
			break;
		case 42:
			StringCopy(&Var2, "JBIB_P0_05_14" /* GXT: Blue Vest, Pink Shirt */, 16);
			iVar3 = 5;
			iVar4 = 14;
			iVar1 = 2350;
			break;
		case 43:
			StringCopy(&Var2, "JBIB_P0_05_15" /* GXT: Stone Vest, White Shirt */, 16);
			iVar3 = 5;
			iVar4 = 15;
			iVar1 = 2280;
			break;
		case 44:
			StringCopy(&Var2, "JBIB_P0_06_0" /* GXT: Bare Chest */, 16);
			iVar3 = 6;
			iVar4 = 0;
			break;
		default:
			func_95(iVar7, iParam0, 45, -1);
			return;
			break;
	}
	func_88(&(Global_78130[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_136(int iParam0)//Position - 0x1BB03
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 7;
	Global_78130[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		default:
			func_95(iVar7, iParam0, 1, -1);
			return;
			break;
	}
	func_88(&(Global_78130[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_137(int iParam0)//Position - 0x1BB76
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 1;
	Global_78130[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "BERD_P0_0_0" /* GXT: Clean Shave */, 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		case 1:
			StringCopy(&Var2, "BERD_P0_1_0" /* GXT: Stubbled */, 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		case 2:
			StringCopy(&Var2, "BERD_P0_2_0" /* GXT: Long Stubbled */, 16);
			iVar3 = 2;
			iVar4 = 0;
			break;
		case 3:
			StringCopy(&Var2, "BERD_P0_3_0" /* GXT: Full Goatee */, 16);
			iVar3 = 3;
			iVar4 = 0;
			break;
		case 4:
			StringCopy(&Var2, "BERD_P0_4_0" /* GXT: Full Beard */, 16);
			iVar3 = 4;
			iVar4 = 0;
			break;
		default:
			func_95(iVar7, iParam0, 5, -1);
			return;
			break;
	}
	func_88(&(Global_78130[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_138(int iParam0)//Position - 0x1BC46
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 10;
	Global_78130[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			break;
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			break;
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			break;
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			break;
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			break;
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			break;
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 1;
			break;
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 2;
			break;
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 3;
			break;
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 4;
			break;
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 5;
			break;
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 6;
			break;
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 7;
			break;
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 0;
			break;
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 1;
			break;
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 2;
			break;
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 3;
			break;
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 4;
			break;
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 5;
			break;
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			break;
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 1;
			break;
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 2;
			break;
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 3;
			break;
		case 25:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 4;
			break;
		case 26:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 5;
			break;
		case 27:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 6;
			break;
		case 28:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			break;
		case 29:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 1;
			break;
		case 30:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 2;
			break;
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 3;
			break;
		case 32:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 4;
			break;
		case 33:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 5;
			break;
		case 34:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 6;
			break;
		case 35:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 7;
			break;
		case 36:
			StringCopy(&Var2, "DECL_P0_10_8" /* GXT: Del Perro Pier T-Shirt */, 16);
			iVar3 = 10;
			iVar4 = 8;
			break;
		case 37:
			StringCopy(&Var2, "DECL_P0_10_9" /* GXT: Los Santos T-Shirt */, 16);
			iVar3 = 10;
			iVar4 = 9;
			break;
		case 38:
			StringCopy(&Var2, "DECL_P0_10_10" /* GXT: Sharkies Bites T-Shirt */, 16);
			iVar3 = 10;
			iVar4 = 10;
			break;
		case 39:
			StringCopy(&Var2, "DECL_P0_10_11" /* GXT: Muscle Peach T-Shirt */, 16);
			iVar3 = 10;
			iVar4 = 11;
			break;
		case 40:
			StringCopy(&Var2, "DECL_P0_10_12" /* GXT: Coral Reefers T-Shirt */, 16);
			iVar3 = 10;
			iVar4 = 12;
			break;
		case 41:
			StringCopy(&Var2, "DECL_P0_10_13" /* GXT: SmokeBomb T-Shirt */, 16);
			iVar3 = 10;
			iVar4 = 13;
			break;
		case 42:
			StringCopy(&Var2, "DECL_P0_10_14" /* GXT: The Big Puffa T-Shirt */, 16);
			iVar3 = 10;
			iVar4 = 14;
			break;
		case 43:
			StringCopy(&Var2, "DECL_P0_10_15" /* GXT: Lob-Star T-Shirt */, 16);
			iVar3 = 10;
			iVar4 = 15;
			break;
		case 44:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 0;
			break;
		case 45:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 1;
			break;
		case 46:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 2;
			break;
		case 47:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 3;
			break;
		default:
			func_95(iVar7, iParam0, 48, -1);
			return;
			break;
	}
	func_88(&(Global_78130[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_139(int iParam0)//Position - 0x1C0F7
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 9;
	Global_78130[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 1;
			break;
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			break;
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			break;
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 9:
			StringCopy(&Var2, "SPEC2_P0_08_0" /* GXT: Red Wrestler Mask */, 16);
			iVar3 = 8;
			iVar4 = 0;
			iVar1 = 125;
			break;
		case 10:
			StringCopy(&Var2, "SPEC2_P0_08_1" /* GXT: Green Wrestler Mask */, 16);
			iVar3 = 8;
			iVar4 = 1;
			iVar1 = 150;
			break;
		case 11:
			StringCopy(&Var2, "SPEC2_P0_08_2" /* GXT: Patriot Wrestler Mask */, 16);
			iVar3 = 8;
			iVar4 = 2;
			iVar1 = 175;
			break;
		case 12:
			StringCopy(&Var2, "SPEC2_P0_08_3" /* GXT: Domino Wrestler Mask */, 16);
			iVar3 = 8;
			iVar4 = 3;
			iVar1 = 85;
			break;
		case 13:
			StringCopy(&Var2, "SPEC2_P0_08_4" /* GXT: Gray Wrestler Mask */, 16);
			iVar3 = 8;
			iVar4 = 4;
			iVar1 = 150;
			break;
		case 14:
			StringCopy(&Var2, "SPEC2_P0_08_5" /* GXT: Phoenix Wrestler Mask */, 16);
			iVar3 = 8;
			iVar4 = 5;
			iVar1 = 175;
			break;
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 1;
			bVar0 = true;
			break;
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 0;
			bVar0 = true;
			break;
		default:
			func_95(iVar7, iParam0, 20, -1);
			return;
			break;
	}
	func_88(&(Global_78130[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_140(int iParam0)//Position - 0x1C352
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 8;
	Global_78130[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 10:
			StringCopy(&Var2, "SPEC_P0_10" /* GXT: Watch and Bracelet */, 16);
			iVar3 = 10;
			iVar4 = 0;
			break;
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 13;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 14;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 15;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 16:
			StringCopy(&Var2, "SPEC_P0_16" /* GXT: Leather Watch */, 16);
			iVar3 = 16;
			iVar4 = 0;
			break;
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 17;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 18;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 19;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 20;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 21;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 22;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 23;
			iVar4 = 0;
			bVar0 = true;
			break;
		default:
			func_95(iVar7, iParam0, 24, -1);
			return;
			break;
	}
	func_88(&(Global_78130[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_141(int iParam0)//Position - 0x1C612
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 5;
	Global_78130[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 1;
			bVar0 = true;
			break;
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 2;
			bVar0 = true;
			break;
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 3;
			bVar0 = true;
			break;
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 4;
			bVar0 = true;
			break;
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			bVar0 = true;
			break;
		default:
			func_95(iVar7, iParam0, 14, -1);
			return;
			break;
	}
	func_88(&(Global_78130[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_142(int iParam0)//Position - 0x1C7CD
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 6;
	Global_78130[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "FEET_P0_0_0" /* GXT: Black Leather Shoes */, 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		case 1:
			StringCopy(&Var2, "FEET_P0_0_1" /* GXT: Brown Leather Shoes */, 16);
			iVar3 = 0;
			iVar4 = 1;
			iVar1 = 665;
			break;
		case 2:
			StringCopy(&Var2, "FEET_P0_0_2" /* GXT: Charcoal Leather Shoes */, 16);
			iVar3 = 0;
			iVar4 = 2;
			iVar1 = 620;
			break;
		case 3:
			StringCopy(&Var2, "FEET_P0_0_3" /* GXT: Gray Leather Shoes */, 16);
			iVar3 = 0;
			iVar4 = 3;
			iVar1 = 540;
			break;
		case 4:
			StringCopy(&Var2, "FEET_P0_0_4" /* GXT: Sand Leather Shoes */, 16);
			iVar3 = 0;
			iVar4 = 4;
			iVar1 = 580;
			break;
		case 5:
			StringCopy(&Var2, "FEET_P0_0_5" /* GXT: Blue Suede Shoes */, 16);
			iVar3 = 0;
			iVar4 = 5;
			iVar1 = 650;
			break;
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			break;
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 18:
			StringCopy(&Var2, "FEET_P0_13_0" /* GXT: Dress Loafers */, 16);
			iVar3 = 13;
			iVar4 = 0;
			break;
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 14;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 20:
			StringCopy(&Var2, "FEET_P0_15_0" /* GXT: Ash Skate Shoes */, 16);
			iVar3 = 15;
			iVar4 = 0;
			break;
		case 21:
			StringCopy(&Var2, "FEET_P0_15_1" /* GXT: Black Skate Shoes */, 16);
			iVar3 = 15;
			iVar4 = 1;
			iVar1 = 64;
			break;
		case 22:
			StringCopy(&Var2, "FEET_P0_15_2" /* GXT: White Skate Shoes */, 16);
			iVar3 = 15;
			iVar4 = 2;
			iVar1 = 56;
			break;
		case 23:
			StringCopy(&Var2, "FEET_P0_15_3" /* GXT: Red Skate Shoes */, 16);
			iVar3 = 15;
			iVar4 = 3;
			iVar1 = 69;
			break;
		case 24:
			StringCopy(&Var2, "FEET_P0_15_4" /* GXT: Plaid Skate Shoes */, 16);
			iVar3 = 15;
			iVar4 = 4;
			iVar1 = 59;
			break;
		case 25:
			StringCopy(&Var2, "FEET_P0_15_5" /* GXT: Striped Skate Shoes */, 16);
			iVar3 = 15;
			iVar4 = 5;
			iVar1 = 62;
			break;
		case 26:
			StringCopy(&Var2, "FEET_P0_15_6" /* GXT: Coffee Skate Shoes */, 16);
			iVar3 = 15;
			iVar4 = 6;
			iVar1 = 74;
			break;
		case 27:
			StringCopy(&Var2, "FEET_P0_15_7" /* GXT: Camo Skate Shoes */, 16);
			iVar3 = 15;
			iVar4 = 7;
			iVar1 = 68;
			break;
		case 28:
			StringCopy(&Var2, "FEET_P0_15_8" /* GXT: Tropical Skate Shoes */, 16);
			iVar3 = 15;
			iVar4 = 8;
			iVar1 = 72;
			break;
		case 29:
			StringCopy(&Var2, "FEET_P0_15_9" /* GXT: Green Skate Shoes */, 16);
			iVar3 = 15;
			iVar4 = 9;
			iVar1 = 70;
			break;
		case 30:
			StringCopy(&Var2, "FEET_P0_16_0" /* GXT: Chocolate Boat Shoes */, 16);
			iVar3 = 16;
			iVar4 = 0;
			iVar1 = 48;
			break;
		case 31:
			StringCopy(&Var2, "FEET_P0_16_1" /* GXT: Teal Boat Shoes */, 16);
			iVar3 = 16;
			iVar4 = 1;
			iVar1 = 48;
			break;
		case 32:
			StringCopy(&Var2, "FEET_P0_16_2" /* GXT: Black Boat Shoes */, 16);
			iVar3 = 16;
			iVar4 = 2;
			iVar1 = 55;
			break;
		case 33:
			StringCopy(&Var2, "FEET_P0_16_3" /* GXT: Chestnut Boat Shoes */, 16);
			iVar3 = 16;
			iVar4 = 3;
			iVar1 = 75;
			break;
		case 34:
			StringCopy(&Var2, "FEET_P0_16_4" /* GXT: Tan Boat Shoes */, 16);
			iVar3 = 16;
			iVar4 = 4;
			iVar1 = 65;
			break;
		case 35:
			StringCopy(&Var2, "FEET_P0_16_5" /* GXT: Gray Boat Shoes */, 16);
			iVar3 = 16;
			iVar4 = 5;
			iVar1 = 68;
			break;
		case 36:
			StringCopy(&Var2, "FEET_P0_16_6" /* GXT: Red Boat Shoes */, 16);
			iVar3 = 16;
			iVar4 = 6;
			iVar1 = 58;
			break;
		case 37:
			StringCopy(&Var2, "FEET_P0_16_7" /* GXT: Slate Boat Shoes */, 16);
			iVar3 = 16;
			iVar4 = 7;
			iVar1 = 68;
			break;
		case 38:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 17;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 39:
			StringCopy(&Var2, "FEET_P0_18_0" /* GXT: All Black Oxfords */, 16);
			iVar3 = 18;
			iVar4 = 0;
			iVar1 = 790;
			break;
		case 40:
			StringCopy(&Var2, "FEET_P0_18_1" /* GXT: Chocolate Oxfords */, 16);
			iVar3 = 18;
			iVar4 = 1;
			iVar1 = 750;
			break;
		case 41:
			StringCopy(&Var2, "FEET_P0_18_2" /* GXT: Chestnut Oxfords */, 16);
			iVar3 = 18;
			iVar4 = 2;
			iVar1 = 860;
			break;
		case 42:
			StringCopy(&Var2, "FEET_P0_18_3" /* GXT: Tan Oxfords */, 16);
			iVar3 = 18;
			iVar4 = 3;
			iVar1 = 750;
			break;
		case 43:
			StringCopy(&Var2, "FEET_P0_18_4" /* GXT: White Oxfords */, 16);
			iVar3 = 18;
			iVar4 = 4;
			iVar1 = 790;
			break;
		case 44:
			StringCopy(&Var2, "FEET_P0_18_5" /* GXT: Ash Oxfords */, 16);
			iVar3 = 18;
			iVar4 = 5;
			iVar1 = 840;
			break;
		case 45:
			StringCopy(&Var2, "FEET_P0_18_6" /* GXT: Gray Two-Tone Oxfords */, 16);
			iVar3 = 18;
			iVar4 = 6;
			iVar1 = 820;
			break;
		case 46:
			StringCopy(&Var2, "FEET_P0_18_7" /* GXT: Beige Oxfords */, 16);
			iVar3 = 18;
			iVar4 = 7;
			iVar1 = 800;
			break;
		case 47:
			StringCopy(&Var2, "FEET_P0_18_8" /* GXT: Topaz Oxfords */, 16);
			iVar3 = 18;
			iVar4 = 8;
			iVar1 = 850;
			break;
		case 48:
			StringCopy(&Var2, "FEET_P0_18_9" /* GXT: Black Oxfords */, 16);
			iVar3 = 18;
			iVar4 = 9;
			iVar1 = 870;
			break;
		case 49:
			StringCopy(&Var2, "FEET_P0_18_10" /* GXT: Lime Oxfords */, 16);
			iVar3 = 18;
			iVar4 = 10;
			iVar1 = 720;
			break;
		case 50:
			StringCopy(&Var2, "FEET_P0_18_11" /* GXT: Hawthorn Oxfords */, 16);
			iVar3 = 18;
			iVar4 = 11;
			iVar1 = 740;
			break;
		case 51:
			StringCopy(&Var2, "FEET_P0_18_12" /* GXT: Coffee Oxfords */, 16);
			iVar3 = 18;
			iVar4 = 12;
			iVar1 = 800;
			break;
		case 52:
			StringCopy(&Var2, "FEET_P0_18_13" /* GXT: Gray Oxfords */, 16);
			iVar3 = 18;
			iVar4 = 13;
			iVar1 = 750;
			break;
		case 53:
			StringCopy(&Var2, "FEET_P0_18_14" /* GXT: Cream Oxfords */, 16);
			iVar3 = 18;
			iVar4 = 14;
			iVar1 = 770;
			break;
		case 54:
			StringCopy(&Var2, "FEET_P0_18_15" /* GXT: Navy Oxfords */, 16);
			iVar3 = 18;
			iVar4 = 15;
			iVar1 = 860;
			break;
		case 55:
			StringCopy(&Var2, "FEET_P0_19_0" /* GXT: Black Slip-Ons */, 16);
			iVar3 = 19;
			iVar4 = 0;
			iVar1 = 850;
			break;
		case 56:
			StringCopy(&Var2, "FEET_P0_19_1" /* GXT: Red Slip-Ons */, 16);
			iVar3 = 19;
			iVar4 = 1;
			iVar1 = 800;
			break;
		case 57:
			StringCopy(&Var2, "FEET_P0_19_2" /* GXT: Brown Slip-Ons */, 16);
			iVar3 = 19;
			iVar4 = 2;
			iVar1 = 780;
			break;
		case 58:
			StringCopy(&Var2, "FEET_P0_19_3" /* GXT: Green Stripe Slip-Ons */, 16);
			iVar3 = 19;
			iVar4 = 3;
			iVar1 = 890;
			break;
		case 59:
			StringCopy(&Var2, "FEET_P0_19_4" /* GXT: Green Slip-Ons */, 16);
			iVar3 = 19;
			iVar4 = 4;
			iVar1 = 820;
			break;
		case 60:
			StringCopy(&Var2, "FEET_P0_19_5" /* GXT: Copper Slip-Ons */, 16);
			iVar3 = 19;
			iVar4 = 5;
			iVar1 = 840;
			break;
		case 61:
			StringCopy(&Var2, "FEET_P0_19_6" /* GXT: Copper Two-Tone Slip-Ons */, 16);
			iVar3 = 19;
			iVar4 = 6;
			iVar1 = 870;
			break;
		case 62:
			StringCopy(&Var2, "FEET_P0_19_7" /* GXT: Navy Slip-Ons */, 16);
			iVar3 = 19;
			iVar4 = 7;
			iVar1 = 930;
			break;
		case 63:
			StringCopy(&Var2, "FEET_P0_19_8" /* GXT: Blue Slip-Ons */, 16);
			iVar3 = 19;
			iVar4 = 8;
			iVar1 = 880;
			break;
		case 64:
			StringCopy(&Var2, "FEET_P0_19_9" /* GXT: Beige Slip-Ons */, 16);
			iVar3 = 19;
			iVar4 = 9;
			iVar1 = 900;
			break;
		case 65:
			StringCopy(&Var2, "FEET_P0_19_10" /* GXT: White Slip-Ons */, 16);
			iVar3 = 19;
			iVar4 = 10;
			iVar1 = 920;
			break;
		case 66:
			StringCopy(&Var2, "FEET_P0_19_11" /* GXT: Tan Slip-Ons */, 16);
			iVar3 = 19;
			iVar4 = 11;
			iVar1 = 970;
			break;
		case 67:
			StringCopy(&Var2, "FEET_P0_19_12" /* GXT: Black Snakeskin Slip-Ons */, 16);
			iVar3 = 19;
			iVar4 = 12;
			iVar1 = 990;
			break;
		case 68:
			StringCopy(&Var2, "FEET_P0_19_13" /* GXT: Two-Tone Slip-Ons */, 16);
			iVar3 = 19;
			iVar4 = 13;
			iVar1 = 960;
			break;
		case 69:
			StringCopy(&Var2, "FEET_P0_19_14" /* GXT: Brown Snakeskin Slip-Ons */, 16);
			iVar3 = 19;
			iVar4 = 14;
			iVar1 = 980;
			break;
		case 70:
			StringCopy(&Var2, "FEET_P0_19_15" /* GXT: Gray Slip-Ons */, 16);
			iVar3 = 19;
			iVar4 = 15;
			iVar1 = 950;
			break;
		case 71:
			StringCopy(&Var2, "FEET_P0_20_0" /* GXT: Brown Wingtips */, 16);
			iVar3 = 20;
			iVar4 = 0;
			iVar1 = 110;
			break;
		case 72:
			StringCopy(&Var2, "FEET_P0_20_1" /* GXT: Navy Wingtips */, 16);
			iVar3 = 20;
			iVar4 = 1;
			iVar1 = 115;
			break;
		case 73:
			StringCopy(&Var2, "FEET_P0_20_2" /* GXT: Coffee Wingtips */, 16);
			iVar3 = 20;
			iVar4 = 2;
			iVar1 = 120;
			break;
		case 74:
			StringCopy(&Var2, "FEET_P0_20_3" /* GXT: Burgundy Wingtips */, 16);
			iVar3 = 20;
			iVar4 = 3;
			iVar1 = 110;
			break;
		case 75:
			StringCopy(&Var2, "FEET_P0_20_4" /* GXT: Blue Wingtips */, 16);
			iVar3 = 20;
			iVar4 = 4;
			iVar1 = 125;
			break;
		case 76:
			StringCopy(&Var2, "FEET_P0_20_5" /* GXT: Woodland Camo Wingtips */, 16);
			iVar3 = 20;
			iVar4 = 5;
			iVar1 = 128;
			break;
		case 77:
			StringCopy(&Var2, "FEET_P0_20_6" /* GXT: Black Wingtips */, 16);
			iVar3 = 20;
			iVar4 = 6;
			iVar1 = 135;
			break;
		case 78:
			StringCopy(&Var2, "FEET_P0_20_7" /* GXT: Tan Wingtips */, 16);
			iVar3 = 20;
			iVar4 = 7;
			iVar1 = 130;
			break;
		case 79:
			StringCopy(&Var2, "FEET_P0_20_8" /* GXT: Purple Wingtips */, 16);
			iVar3 = 20;
			iVar4 = 8;
			iVar1 = 145;
			break;
		case 80:
			StringCopy(&Var2, "FEET_P0_20_9" /* GXT: Brown Wingtips */, 16);
			iVar3 = 20;
			iVar4 = 9;
			iVar1 = 110;
			break;
		case 81:
			StringCopy(&Var2, "FEET_P0_20_10" /* GXT: Chocolate Wingtips */, 16);
			iVar3 = 20;
			iVar4 = 10;
			iVar1 = 120;
			break;
		case 82:
			StringCopy(&Var2, "FEET_P0_20_11" /* GXT: Green Wingtips */, 16);
			iVar3 = 20;
			iVar4 = 11;
			iVar1 = 150;
			break;
		case 83:
			StringCopy(&Var2, "FEET_P0_20_12" /* GXT: Ash Wingtips */, 16);
			iVar3 = 20;
			iVar4 = 12;
			iVar1 = 125;
			break;
		case 84:
			StringCopy(&Var2, "FEET_P0_20_13" /* GXT: Olive Wingtips */, 16);
			iVar3 = 20;
			iVar4 = 13;
			iVar1 = 120;
			break;
		case 85:
			StringCopy(&Var2, "FEET_P0_20_14" /* GXT: Two-Tone Wingtips */, 16);
			iVar3 = 20;
			iVar4 = 14;
			iVar1 = 130;
			break;
		case 86:
			StringCopy(&Var2, "FEET_P0_20_15" /* GXT: Yellow Wingtips */, 16);
			iVar3 = 20;
			iVar4 = 15;
			iVar1 = 110;
			break;
		case 87:
			StringCopy(&Var2, "FEET_P0_21_0" /* GXT: Black Leather Loafers */, 16);
			iVar3 = 21;
			iVar4 = 0;
			iVar1 = 720;
			break;
		case 88:
			StringCopy(&Var2, "FEET_P0_21_1" /* GXT: Gray Leather Loafers */, 16);
			iVar3 = 21;
			iVar4 = 1;
			iVar1 = 680;
			break;
		case 89:
			StringCopy(&Var2, "FEET_P0_21_2" /* GXT: Cream Leather Loafers */, 16);
			iVar3 = 21;
			iVar4 = 2;
			iVar1 = 650;
			break;
		case 90:
			StringCopy(&Var2, "FEET_P0_21_3" /* GXT: Brown Leather Loafers */, 16);
			iVar3 = 21;
			iVar4 = 3;
			iVar1 = 670;
			break;
		case 91:
			StringCopy(&Var2, "FEET_P0_21_4" /* GXT: White Leather Loafers */, 16);
			iVar3 = 21;
			iVar4 = 4;
			iVar1 = 700;
			break;
		case 92:
			StringCopy(&Var2, "FEET_P0_21_5" /* GXT: Russet Leather Loafers */, 16);
			iVar3 = 21;
			iVar4 = 5;
			iVar1 = 680;
			break;
		case 93:
			StringCopy(&Var2, "FEET_P0_21_6" /* GXT: White Snakeskin Loafers */, 16);
			iVar3 = 21;
			iVar4 = 6;
			iVar1 = 720;
			break;
		case 94:
			StringCopy(&Var2, "FEET_P0_21_7" /* GXT: Rattlesnake Loafers */, 16);
			iVar3 = 21;
			iVar4 = 7;
			iVar1 = 740;
			break;
		case 95:
			StringCopy(&Var2, "FEET_P0_21_8" /* GXT: Brown Snakeskin Loafers */, 16);
			iVar3 = 21;
			iVar4 = 8;
			iVar1 = 760;
			break;
		case 96:
			StringCopy(&Var2, "FEET_P0_21_9" /* GXT: Zebra Two-Tone Loafers */, 16);
			iVar3 = 21;
			iVar4 = 9;
			iVar1 = 780;
			break;
		case 97:
			StringCopy(&Var2, "FEET_P0_21_10" /* GXT: Pale Reptile Loafers */, 16);
			iVar3 = 21;
			iVar4 = 10;
			iVar1 = 750;
			break;
		case 98:
			StringCopy(&Var2, "FEET_P0_21_11" /* GXT: Tan Alligator Loafers */, 16);
			iVar3 = 21;
			iVar4 = 11;
			iVar1 = 700;
			break;
		default:
			func_95(iVar7, iParam0, 99, -1);
			return;
			break;
	}
	func_88(&(Global_78130[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_143(int iParam0)//Position - 0x1D313
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 4;
	Global_78130[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "LEGS_P0_0_0" /* GXT: Gray Pants */, 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		case 1:
			StringCopy(&Var2, "LEGS_P0_0_0" /* GXT: Gray Pants */, 16);
			iVar3 = 0;
			iVar4 = 1;
			break;
		case 2:
			StringCopy(&Var2, "LEGS_P0_0_2" /* GXT: Charcoal Pants */, 16);
			iVar3 = 0;
			iVar4 = 2;
			break;
		case 3:
			StringCopy(&Var2, "LEGS_P0_0_3" /* GXT: Slate Pants */, 16);
			iVar3 = 0;
			iVar4 = 3;
			break;
		case 4:
			StringCopy(&Var2, "LEGS_P0_0_4" /* GXT: Topaz Pants */, 16);
			iVar3 = 0;
			iVar4 = 4;
			break;
		case 5:
			StringCopy(&Var2, "LEGS_P0_0_5" /* GXT: Pale Blue Pants */, 16);
			iVar3 = 0;
			iVar4 = 5;
			break;
		case 6:
			StringCopy(&Var2, "LEGS_P0_0_6" /* GXT: Cream Pants */, 16);
			iVar3 = 0;
			iVar4 = 6;
			break;
		case 7:
			StringCopy(&Var2, "LEGS_P0_0_7" /* GXT: Olive Pants */, 16);
			iVar3 = 0;
			iVar4 = 7;
			break;
		case 8:
			StringCopy(&Var2, "LEGS_P0_0_8" /* GXT: Off-White Pants */, 16);
			iVar3 = 0;
			iVar4 = 8;
			break;
		case 9:
			StringCopy(&Var2, "LEGS_P0_0_9" /* GXT: Navy Pants */, 16);
			iVar3 = 0;
			iVar4 = 9;
			break;
		case 10:
			StringCopy(&Var2, "LEGS_P0_0_10" /* GXT: Beige Pants */, 16);
			iVar3 = 0;
			iVar4 = 10;
			break;
		case 11:
			StringCopy(&Var2, "LEGS_P0_0_11" /* GXT: Smoke Pants */, 16);
			iVar3 = 0;
			iVar4 = 11;
			break;
		case 12:
			StringCopy(&Var2, "LEGS_P0_0_12" /* GXT: Blue-Gray Pants */, 16);
			iVar3 = 0;
			iVar4 = 12;
			break;
		case 13:
			StringCopy(&Var2, "LEGS_P0_0_13" /* GXT: Ash Pants */, 16);
			iVar3 = 0;
			iVar4 = 13;
			break;
		case 14:
			StringCopy(&Var2, "LEGS_P0_0_14" /* GXT: Sand Pants */, 16);
			iVar3 = 0;
			iVar4 = 14;
			break;
		case 15:
			StringCopy(&Var2, "LEGS_P0_0_15" /* GXT: Black Pants */, 16);
			iVar3 = 0;
			iVar4 = 15;
			break;
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 1;
			bVar0 = true;
			break;
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 23:
			StringCopy(&Var2, "LEGS_P0_7_0" /* GXT: Off-White Chinos */, 16);
			iVar3 = 7;
			iVar4 = 0;
			iVar1 = 115;
			break;
		case 24:
			StringCopy(&Var2, "LEGS_P0_7_1" /* GXT: Camel Chinos */, 16);
			iVar3 = 7;
			iVar4 = 1;
			iVar1 = 115;
			break;
		case 25:
			StringCopy(&Var2, "LEGS_P0_7_2" /* GXT: Ash Chinos */, 16);
			iVar3 = 7;
			iVar4 = 2;
			iVar1 = 128;
			break;
		case 26:
			StringCopy(&Var2, "LEGS_P0_7_3" /* GXT: Olive Chinos */, 16);
			iVar3 = 7;
			iVar4 = 3;
			iVar1 = 118;
			break;
		case 27:
			StringCopy(&Var2, "LEGS_P0_7_4" /* GXT: Brown Chinos */, 16);
			iVar3 = 7;
			iVar4 = 4;
			iVar1 = 125;
			break;
		case 28:
			StringCopy(&Var2, "LEGS_P0_7_5" /* GXT: Black Chinos */, 16);
			iVar3 = 7;
			iVar4 = 5;
			iVar1 = 128;
			break;
		case 29:
			StringCopy(&Var2, "LEGS_P0_7_6" /* GXT: Charcoal Chinos */, 16);
			iVar3 = 7;
			iVar4 = 6;
			iVar1 = 128;
			break;
		case 30:
			StringCopy(&Var2, "LEGS_P0_7_7" /* GXT: White Chinos */, 16);
			iVar3 = 7;
			iVar4 = 7;
			iVar1 = 125;
			break;
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 32:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 33:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 34:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 35:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 1;
			bVar0 = true;
			break;
		case 36:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 2;
			bVar0 = true;
			break;
		case 37:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 3;
			bVar0 = true;
			break;
		case 38:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 4;
			bVar0 = true;
			break;
		case 39:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 5;
			bVar0 = true;
			break;
		case 40:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 41:
			StringCopy(&Var2, "LEGS_P0_13_0" /* GXT: Cream Cargo Shorts */, 16);
			iVar3 = 13;
			iVar4 = 0;
			iVar1 = 68;
			break;
		case 42:
			StringCopy(&Var2, "LEGS_P0_13_1" /* GXT: Khaki Cargo Shorts */, 16);
			iVar3 = 13;
			iVar4 = 1;
			iVar1 = 68;
			break;
		case 43:
			StringCopy(&Var2, "LEGS_P0_13_2" /* GXT: Camo Cargo Shorts */, 16);
			iVar3 = 13;
			iVar4 = 2;
			iVar1 = 68;
			break;
		case 44:
			StringCopy(&Var2, "LEGS_P0_13_3" /* GXT: Gray Cargo Shorts */, 16);
			iVar3 = 13;
			iVar4 = 3;
			iVar1 = 68;
			break;
		case 45:
			StringCopy(&Var2, "LEGS_P0_13_4" /* GXT: White Cargo Shorts */, 16);
			iVar3 = 13;
			iVar4 = 4;
			iVar1 = 68;
			break;
		case 46:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 14;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 47:
			StringCopy(&Var2, "LEGS_P0_15_0" /* GXT: Gray Golf Pants */, 16);
			iVar3 = 15;
			iVar4 = 0;
			break;
		case 48:
			StringCopy(&Var2, "LEGS_P0_15_1" /* GXT: Cream Golf Pants */, 16);
			iVar3 = 15;
			iVar4 = 1;
			iVar1 = 550;
			break;
		case 49:
			StringCopy(&Var2, "LEGS_P0_15_2" /* GXT: Brown Golf Pants */, 16);
			iVar3 = 15;
			iVar4 = 2;
			iVar1 = 650;
			break;
		case 50:
			StringCopy(&Var2, "LEGS_P0_15_3" /* GXT: Tartan Golf Pants */, 16);
			iVar3 = 15;
			iVar4 = 3;
			iVar1 = 875;
			break;
		case 51:
			StringCopy(&Var2, "LEGS_P0_15_4" /* GXT: Charcoal Plaid Golf Pants */, 16);
			iVar3 = 15;
			iVar4 = 4;
			iVar1 = 820;
			break;
		case 52:
			StringCopy(&Var2, "LEGS_P0_15_5" /* GXT: Green Plaid Golf Pants */, 16);
			iVar3 = 15;
			iVar4 = 5;
			iVar1 = 720;
			break;
		case 53:
			StringCopy(&Var2, "LEGS_P0_15_6" /* GXT: Brown Plaid Golf Pants */, 16);
			iVar3 = 15;
			iVar4 = 6;
			iVar1 = 750;
			break;
		case 54:
			StringCopy(&Var2, "LEGS_P0_15_7" /* GXT: Slate Golf Pants */, 16);
			iVar3 = 15;
			iVar4 = 7;
			iVar1 = 850;
			break;
		case 55:
			StringCopy(&Var2, "LEGS_P0_16_0" /* GXT: Beige Shorts */, 16);
			iVar3 = 16;
			iVar4 = 0;
			break;
		case 56:
			StringCopy(&Var2, "LEGS_P0_16_1" /* GXT: Yellow Shorts */, 16);
			iVar3 = 16;
			iVar4 = 1;
			iVar1 = 48;
			break;
		case 57:
			StringCopy(&Var2, "LEGS_P0_16_2" /* GXT: Blue Shorts */, 16);
			iVar3 = 16;
			iVar4 = 2;
			iVar1 = 48;
			break;
		case 58:
			StringCopy(&Var2, "LEGS_P0_16_3" /* GXT: Brown Leafy Shorts */, 16);
			iVar3 = 16;
			iVar4 = 3;
			iVar1 = 38;
			break;
		case 59:
			StringCopy(&Var2, "LEGS_P0_16_4" /* GXT: Tropical Shorts */, 16);
			iVar3 = 16;
			iVar4 = 4;
			iVar1 = 38;
			break;
		case 60:
			StringCopy(&Var2, "LEGS_P0_16_5" /* GXT: Aqua Vintage Shorts */, 16);
			iVar3 = 16;
			iVar4 = 5;
			iVar1 = 42;
			break;
		case 61:
			StringCopy(&Var2, "LEGS_P0_16_6" /* GXT: Bright Two-Tone Shorts */, 16);
			iVar3 = 16;
			iVar4 = 6;
			iVar1 = 58;
			break;
		case 62:
			StringCopy(&Var2, "LEGS_P0_16_7" /* GXT: Red Floral Shorts */, 16);
			iVar3 = 16;
			iVar4 = 7;
			iVar1 = 46;
			break;
		case 63:
			StringCopy(&Var2, "LEGS_P0_16_8" /* GXT: Navy Floral Shorts */, 16);
			iVar3 = 16;
			iVar4 = 8;
			iVar1 = 46;
			break;
		case 64:
			StringCopy(&Var2, "LEGS_P0_16_9" /* GXT: Blue Floral Shorts */, 16);
			iVar3 = 16;
			iVar4 = 9;
			iVar1 = 46;
			break;
		case 65:
			StringCopy(&Var2, "LEGS_P0_16_10" /* GXT: Orange Shorts */, 16);
			iVar3 = 16;
			iVar4 = 10;
			iVar1 = 68;
			break;
		case 66:
			StringCopy(&Var2, "LEGS_P0_16_11" /* GXT: White Striped Shorts */, 16);
			iVar3 = 16;
			iVar4 = 11;
			iVar1 = 58;
			break;
		case 67:
			StringCopy(&Var2, "LEGS_P0_16_12" /* GXT: Charcoal Shorts */, 16);
			iVar3 = 16;
			iVar4 = 12;
			iVar1 = 50;
			break;
		case 68:
			StringCopy(&Var2, "LEGS_P0_16_13" /* GXT: Gray Shorts */, 16);
			iVar3 = 16;
			iVar4 = 13;
			iVar1 = 68;
			break;
		case 69:
			StringCopy(&Var2, "LEGS_P0_16_14" /* GXT: Candy Surf Shorts */, 16);
			iVar3 = 16;
			iVar4 = 14;
			iVar1 = 68;
			break;
		case 70:
			StringCopy(&Var2, "LEGS_P0_16_15" /* GXT: Undersea Shorts */, 16);
			iVar3 = 16;
			iVar4 = 15;
			iVar1 = 42;
			break;
		case 71:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 17;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 72:
			StringCopy(&Var2, "LEGS_P0_18_0" /* GXT: White Striped Boxers */, 16);
			iVar3 = 18;
			iVar4 = 0;
			break;
		case 73:
			StringCopy(&Var2, "LEGS_P0_18_1" /* GXT: Blue Boxers */, 16);
			iVar3 = 18;
			iVar4 = 1;
			iVar1 = 250;
			break;
		case 74:
			StringCopy(&Var2, "LEGS_P0_18_2" /* GXT: Ash Boxers */, 16);
			iVar3 = 18;
			iVar4 = 2;
			iVar1 = 250;
			break;
		case 75:
			StringCopy(&Var2, "LEGS_P0_18_3" /* GXT: Blue Striped Boxers */, 16);
			iVar3 = 18;
			iVar4 = 3;
			iVar1 = 290;
			break;
		case 76:
			StringCopy(&Var2, "LEGS_P0_18_4" /* GXT: White Boxers */, 16);
			iVar3 = 18;
			iVar4 = 4;
			iVar1 = 270;
			break;
		case 77:
			StringCopy(&Var2, "LEGS_P0_18_5" /* GXT: Charcoal Boxers */, 16);
			iVar3 = 18;
			iVar4 = 5;
			iVar1 = 270;
			break;
		case 78:
			StringCopy(&Var2, "LEGS_P0_18_6" /* GXT: Red Heart Boxers */, 16);
			iVar3 = 18;
			iVar4 = 6;
			iVar1 = 15;
			break;
		case 79:
			StringCopy(&Var2, "LEGS_P0_18_7" /* GXT: Blue Heart Boxers */, 16);
			iVar3 = 18;
			iVar4 = 7;
			iVar1 = 12;
			break;
		case 80:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 19;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 81:
			StringCopy(&Var2, "LEGS_P0_20_0" /* GXT: Blue Casual Jeans */, 16);
			iVar3 = 20;
			iVar4 = 0;
			break;
		case 82:
			StringCopy(&Var2, "LEGS_P0_20_1" /* GXT: Black Casual Jeans */, 16);
			iVar3 = 20;
			iVar4 = 1;
			iVar1 = 118;
			break;
		case 83:
			StringCopy(&Var2, "LEGS_P0_20_2" /* GXT: Faded Casual Jeans */, 16);
			iVar3 = 20;
			iVar4 = 2;
			iVar1 = 110;
			break;
		case 84:
			StringCopy(&Var2, "LEGS_P0_21_0" /* GXT: Tan Pants */, 16);
			iVar3 = 21;
			iVar4 = 0;
			iVar1 = 88;
			break;
		case 85:
			StringCopy(&Var2, "LEGS_P0_21_1" /* GXT: Charcoal Pants */, 16);
			iVar3 = 21;
			iVar4 = 1;
			iVar1 = 95;
			break;
		case 86:
			StringCopy(&Var2, "LEGS_P0_21_2" /* GXT: Brown Pants */, 16);
			iVar3 = 21;
			iVar4 = 2;
			iVar1 = 95;
			break;
		case 87:
			StringCopy(&Var2, "LEGS_P0_21_3" /* GXT: Ash Pants */, 16);
			iVar3 = 21;
			iVar4 = 3;
			iVar1 = 98;
			break;
		case 88:
			StringCopy(&Var2, "LEGS_P0_22_0" /* GXT: Smart Jeans */, 16);
			iVar3 = 22;
			iVar4 = 0;
			iVar1 = 140;
			break;
		case 89:
			StringCopy(&Var2, "LEGS_P0_23_0" /* GXT: White Tennis Shorts */, 16);
			iVar3 = 23;
			iVar4 = 0;
			break;
		case 90:
			StringCopy(&Var2, "LEGS_P0_23_1" /* GXT: Lobon Tennis Shorts */, 16);
			iVar3 = 23;
			iVar4 = 1;
			iVar1 = 150;
			break;
		case 91:
			StringCopy(&Var2, "LEGS_P0_23_2" /* GXT: Plaid Tennis Shorts */, 16);
			iVar3 = 23;
			iVar4 = 2;
			iVar1 = 130;
			break;
		case 92:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 24;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 93:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 25;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 94:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 26;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 95:
			StringCopy(&Var2, "LEGS_P0_27_0" /* GXT: Beige Shorts, Bare Feet */, 16);
			iVar3 = 27;
			iVar4 = 0;
			break;
		case 96:
			StringCopy(&Var2, "LEGS_P0_28_0" /* GXT: Pale Blue Bermudas */, 16);
			iVar3 = 28;
			iVar4 = 0;
			iVar1 = 45;
			break;
		case 97:
			StringCopy(&Var2, "LEGS_P0_28_1" /* GXT: Beige Bermudas */, 16);
			iVar3 = 28;
			iVar4 = 1;
			iVar1 = 48;
			break;
		case 98:
			StringCopy(&Var2, "LEGS_P0_28_2" /* GXT: Cream Bermudas */, 16);
			iVar3 = 28;
			iVar4 = 2;
			iVar1 = 48;
			break;
		case 99:
			StringCopy(&Var2, "LEGS_P0_28_3" /* GXT: Olive Bermudas */, 16);
			iVar3 = 28;
			iVar4 = 3;
			iVar1 = 52;
			break;
		case 100:
			StringCopy(&Var2, "LEGS_P0_28_4" /* GXT: Blue Bermudas */, 16);
			iVar3 = 28;
			iVar4 = 4;
			iVar1 = 52;
			break;
		case 101:
			StringCopy(&Var2, "LEGS_P0_28_5" /* GXT: Off-White Bermudas */, 16);
			iVar3 = 28;
			iVar4 = 5;
			iVar1 = 55;
			break;
		case 102:
			StringCopy(&Var2, "LEGS_P0_28_6" /* GXT: Gray Bermudas */, 16);
			iVar3 = 28;
			iVar4 = 6;
			iVar1 = 55;
			break;
		case 103:
			StringCopy(&Var2, "LEGS_P0_28_7" /* GXT: Charcoal Bermudas */, 16);
			iVar3 = 28;
			iVar4 = 7;
			iVar1 = 55;
			break;
		case 104:
			StringCopy(&Var2, "LEGS_P0_28_8" /* GXT: Pink Bermudas */, 16);
			iVar3 = 28;
			iVar4 = 8;
			iVar1 = 58;
			break;
		case 105:
			StringCopy(&Var2, "LEGS_P0_28_9" /* GXT: Beige Plaid Bermudas */, 16);
			iVar3 = 28;
			iVar4 = 9;
			iVar1 = 58;
			break;
		case 106:
			StringCopy(&Var2, "LEGS_P0_28_10" /* GXT: Pastel Plaid Bermudas */, 16);
			iVar3 = 28;
			iVar4 = 10;
			iVar1 = 60;
			break;
		case 107:
			StringCopy(&Var2, "LEGS_P0_28_11" /* GXT: Orange Plaid Bermudas */, 16);
			iVar3 = 28;
			iVar4 = 11;
			iVar1 = 60;
			break;
		case 108:
			StringCopy(&Var2, "LEGS_P0_28_12" /* GXT: Gray Plaid Bermudas */, 16);
			iVar3 = 28;
			iVar4 = 12;
			iVar1 = 62;
			break;
		case 109:
			StringCopy(&Var2, "LEGS_P0_28_13" /* GXT: Blue Striped Bermudas */, 16);
			iVar3 = 28;
			iVar4 = 13;
			iVar1 = 62;
			break;
		case 110:
			StringCopy(&Var2, "LEGS_P0_28_14" /* GXT: Murky Plaid Bermudas */, 16);
			iVar3 = 28;
			iVar4 = 14;
			iVar1 = 65;
			break;
		case 111:
			StringCopy(&Var2, "LEGS_P0_28_15" /* GXT: Pastel Check Bermudas */, 16);
			iVar3 = 28;
			iVar4 = 15;
			iVar1 = 65;
			break;
		case 112:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 29;
			iVar4 = 0;
			break;
		default:
			func_95(iVar7, iParam0, 113, -1);
			return;
			break;
	}
	func_88(&(Global_78130[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_144(int iParam0)//Position - 0x1DF45
{
	if (iParam0 < 60)
	{
		func_146(iParam0);
	}
	else
	{
		func_145(iParam0);
	}
	if (Global_78130[0 /*14*/].f_2 == -1)
	{
		func_95(3, iParam0, 181, -1);
	}
}

void func_145(int iParam0)//Position - 0x1DF7A
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 3;
	Global_78130[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 60:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 61:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 62:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 63:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 64:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 1;
			bVar0 = true;
			break;
		case 65:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 2;
			bVar0 = true;
			break;
		case 66:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 3;
			bVar0 = true;
			break;
		case 67:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 4;
			bVar0 = true;
			break;
		case 68:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 5;
			bVar0 = true;
			break;
		case 69:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 13;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 70:
			StringCopy(&Var2, "TORSO_P0_14_0" /* GXT: Rearwall Black Gilet */, 16);
			iVar3 = 14;
			iVar4 = 0;
			iVar1 = 120;
			break;
		case 71:
			StringCopy(&Var2, "TORSO_P0_14_1" /* GXT: Fruntalot Red Gilet */, 16);
			iVar3 = 14;
			iVar4 = 1;
			iVar1 = 120;
			break;
		case 72:
			StringCopy(&Var2, "TORSO_P0_14_2" /* GXT: Yeti Blue Gilet */, 16);
			iVar3 = 14;
			iVar4 = 2;
			iVar1 = 120;
			break;
		case 73:
			StringCopy(&Var2, "TORSO_P0_14_3" /* GXT: Rearwall Brown Gilet */, 16);
			iVar3 = 14;
			iVar4 = 3;
			iVar1 = 120;
			break;
		case 74:
			StringCopy(&Var2, "TORSO_P0_14_4" /* GXT: Rearwall Orange Gilet */, 16);
			iVar3 = 14;
			iVar4 = 4;
			iVar1 = 120;
			break;
		case 75:
			StringCopy(&Var2, "TORSO_P0_14_5" /* GXT: Rearwall Green Gilet */, 16);
			iVar3 = 14;
			iVar4 = 5;
			iVar1 = 120;
			break;
		case 76:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 15;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 77:
			StringCopy(&Var2, "TORSO_P0_16_0" /* GXT: Purple Golf Shirt */, 16);
			iVar3 = 16;
			iVar4 = 0;
			break;
		case 78:
			StringCopy(&Var2, "TORSO_P0_16_1" /* GXT: Orange Golf Shirt */, 16);
			iVar3 = 16;
			iVar4 = 1;
			iVar1 = 20;
			break;
		case 79:
			StringCopy(&Var2, "TORSO_P0_16_2" /* GXT: Burgundy Golf Shirt */, 16);
			iVar3 = 16;
			iVar4 = 2;
			iVar1 = 24;
			break;
		case 80:
			StringCopy(&Var2, "TORSO_P0_16_3" /* GXT: Yellow Golf Shirt */, 16);
			iVar3 = 16;
			iVar4 = 3;
			iVar1 = 22;
			break;
		case 81:
			StringCopy(&Var2, "TORSO_P0_16_4" /* GXT: Blue Golf Shirt */, 16);
			iVar3 = 16;
			iVar4 = 4;
			iVar1 = 25;
			break;
		case 82:
			StringCopy(&Var2, "TORSO_P0_16_5" /* GXT: Mint Golf Shirt */, 16);
			iVar3 = 16;
			iVar4 = 5;
			iVar1 = 25;
			break;
		case 83:
			StringCopy(&Var2, "TORSO_P0_16_6" /* GXT: Brown Golf Shirt */, 16);
			iVar3 = 16;
			iVar4 = 6;
			iVar1 = 22;
			break;
		case 84:
			StringCopy(&Var2, "TORSO_P0_16_7" /* GXT: Crimson Golf Shirt */, 16);
			iVar3 = 16;
			iVar4 = 7;
			iVar1 = 27;
			break;
		case 85:
			StringCopy(&Var2, "TORSO_P0_17_0" /* GXT: Blue-Gray Polo Shirt */, 16);
			iVar3 = 17;
			iVar4 = 0;
			break;
		case 86:
			StringCopy(&Var2, "TORSO_P0_17_1" /* GXT: Olive Polo Shirt */, 16);
			iVar3 = 17;
			iVar4 = 1;
			break;
		case 87:
			StringCopy(&Var2, "TORSO_P0_17_2" /* GXT: Red Polo Shirt */, 16);
			iVar3 = 17;
			iVar4 = 2;
			break;
		case 88:
			StringCopy(&Var2, "TORSO_P0_17_3" /* GXT: Black Polo Shirt */, 16);
			iVar3 = 17;
			iVar4 = 3;
			iVar1 = 48;
			break;
		case 89:
			StringCopy(&Var2, "TORSO_P0_17_4" /* GXT: White Polo Shirt */, 16);
			iVar3 = 17;
			iVar4 = 4;
			iVar1 = 40;
			break;
		case 90:
			StringCopy(&Var2, "TORSO_P0_17_5" /* GXT: Blue Polo Shirt */, 16);
			iVar3 = 17;
			iVar4 = 5;
			iVar1 = 45;
			break;
		case 91:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 18;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 92:
			StringCopy(&Var2, "TORSO_P0_19_0" /* GXT: Off-White Tank Top */, 16);
			iVar3 = 19;
			iVar4 = 0;
			break;
		case 93:
			StringCopy(&Var2, "TORSO_P0_19_1" /* GXT: White Tank Top */, 16);
			iVar3 = 19;
			iVar4 = 1;
			iVar1 = 190;
			break;
		case 94:
			StringCopy(&Var2, "TORSO_P0_19_2" /* GXT: Ash Tank Top */, 16);
			iVar3 = 19;
			iVar4 = 2;
			iVar1 = 190;
			break;
		case 95:
			StringCopy(&Var2, "TORSO_P0_19_3" /* GXT: Gray Tank Top */, 16);
			iVar3 = 19;
			iVar4 = 3;
			iVar1 = 190;
			break;
		case 96:
			StringCopy(&Var2, "TORSO_P0_19_4" /* GXT: Black Tank Top */, 16);
			iVar3 = 19;
			iVar4 = 4;
			iVar1 = 210;
			break;
		case 97:
			StringCopy(&Var2, "TORSO_P0_20_0" /* GXT: Blue Denim Shirt */, 16);
			iVar3 = 20;
			iVar4 = 0;
			break;
		case 98:
			StringCopy(&Var2, "TORSO_P0_20_1" /* GXT: Deep Black Shirt */, 16);
			iVar3 = 20;
			iVar4 = 1;
			iVar1 = 115;
			break;
		case 99:
			StringCopy(&Var2, "TORSO_P0_20_2" /* GXT: Russet Shirt */, 16);
			iVar3 = 20;
			iVar4 = 2;
			iVar1 = 55;
			break;
		case 100:
			StringCopy(&Var2, "TORSO_P0_20_3" /* GXT: Green Cord Shirt */, 16);
			iVar3 = 20;
			iVar4 = 3;
			iVar1 = 110;
			break;
		case 101:
			StringCopy(&Var2, "TORSO_P0_20_4" /* GXT: Gray Shirt */, 16);
			iVar3 = 20;
			iVar4 = 4;
			iVar1 = 99;
			break;
		case 102:
			StringCopy(&Var2, "TORSO_P0_20_5" /* GXT: Fresh Check Shirt */, 16);
			iVar3 = 20;
			iVar4 = 5;
			iVar1 = 49;
			break;
		case 103:
			StringCopy(&Var2, "TORSO_P0_20_6" /* GXT: Southern Plaid Shirt */, 16);
			iVar3 = 20;
			iVar4 = 6;
			iVar1 = 120;
			break;
		case 104:
			StringCopy(&Var2, "TORSO_P0_20_7" /* GXT: Sunrise Yellow Shirt */, 16);
			iVar3 = 20;
			iVar4 = 7;
			iVar1 = 45;
			break;
		case 105:
			StringCopy(&Var2, "TORSO_P0_20_8" /* GXT: White Shirt */, 16);
			iVar3 = 20;
			iVar4 = 8;
			iVar1 = 115;
			break;
		case 106:
			StringCopy(&Var2, "TORSO_P0_20_9" /* GXT: Stone Shirt */, 16);
			iVar3 = 20;
			iVar4 = 9;
			iVar1 = 105;
			break;
		case 107:
			StringCopy(&Var2, "TORSO_P0_20_10" /* GXT: Earth Plaid Shirt */, 16);
			iVar3 = 20;
			iVar4 = 10;
			iVar1 = 90;
			break;
		case 108:
			StringCopy(&Var2, "TORSO_P0_20_11" /* GXT: Green Check Shirt */, 16);
			iVar3 = 20;
			iVar4 = 11;
			iVar1 = 95;
			break;
		case 109:
			StringCopy(&Var2, "TORSO_P0_20_12" /* GXT: Country Plaid Shirt */, 16);
			iVar3 = 20;
			iVar4 = 12;
			iVar1 = 39;
			break;
		case 110:
			StringCopy(&Var2, "TORSO_P0_20_13" /* GXT: Orange Tight Check Shirt */, 16);
			iVar3 = 20;
			iVar4 = 13;
			iVar1 = 95;
			break;
		case 111:
			StringCopy(&Var2, "TORSO_P0_20_14" /* GXT: Bright Blue Plaid Shirt */, 16);
			iVar3 = 20;
			iVar4 = 14;
			iVar1 = 35;
			break;
		case 112:
			StringCopy(&Var2, "TORSO_P0_20_15" /* GXT: Blue Check Shirt */, 16);
			iVar3 = 20;
			iVar4 = 15;
			iVar1 = 95;
			break;
		case 113:
			StringCopy(&Var2, "TORSO_P0_21_0" /* GXT: Gray Hoodie */, 16);
			iVar3 = 21;
			iVar4 = 0;
			iVar1 = 88;
			break;
		case 114:
			StringCopy(&Var2, "TORSO_P0_21_1" /* GXT: Ammu-Nation Camo Hoodie */, 16);
			iVar3 = 21;
			iVar4 = 1;
			iVar1 = 60;
			break;
		case 115:
			StringCopy(&Var2, "TORSO_P0_21_2" /* GXT: LSGC Gray Hoodie */, 16);
			iVar3 = 21;
			iVar4 = 2;
			iVar1 = 70;
			break;
		case 116:
			StringCopy(&Var2, "TORSO_P0_21_3" /* GXT: LSGC Urban Hoodie */, 16);
			iVar3 = 21;
			iVar4 = 3;
			iVar1 = 80;
			break;
		case 117:
			StringCopy(&Var2, "TORSO_P0_21_4" /* GXT: LSGC Forest Hoodie */, 16);
			iVar3 = 21;
			iVar4 = 4;
			iVar1 = 90;
			break;
		case 118:
			StringCopy(&Var2, "TORSO_P0_21_5" /* GXT: Ammu-Nation A Hoodie */, 16);
			iVar3 = 21;
			iVar4 = 5;
			iVar1 = 80;
			break;
		case 119:
			StringCopy(&Var2, "TORSO_P0_21_6" /* GXT: Blauser Hoodie */, 16);
			iVar3 = 21;
			iVar4 = 6;
			iVar1 = 70;
			break;
		case 120:
			StringCopy(&Var2, "TORSO_P0_21_7" /* GXT: Penetrators Orange Hoodie */, 16);
			iVar3 = 21;
			iVar4 = 7;
			iVar1 = 95;
			break;
		case 121:
			StringCopy(&Var2, "TORSO_P0_21_8" /* GXT: Crevis Fluorescent Hoodie */, 16);
			iVar3 = 21;
			iVar4 = 8;
			iVar1 = 105;
			break;
		case 122:
			StringCopy(&Var2, "TORSO_P0_21_9" /* GXT: Blue Hoodie */, 16);
			iVar3 = 21;
			iVar4 = 9;
			iVar1 = 95;
			break;
		case 123:
			StringCopy(&Var2, "TORSO_P0_21_10" /* GXT: Green Hoodie */, 16);
			iVar3 = 21;
			iVar4 = 10;
			iVar1 = 110;
			break;
		case 124:
			StringCopy(&Var2, "TORSO_P0_21_11" /* GXT: LS Jardineros Hoodie */, 16);
			iVar3 = 21;
			iVar4 = 11;
			iVar1 = 98;
			break;
		case 125:
			StringCopy(&Var2, "TORSO_P0_21_12" /* GXT: Ash 18 Hoodie */, 16);
			iVar3 = 21;
			iVar4 = 12;
			iVar1 = 88;
			break;
		case 126:
			StringCopy(&Var2, "TORSO_P0_21_13" /* GXT: Red Mist XI Hoodie */, 16);
			iVar3 = 21;
			iVar4 = 13;
			iVar1 = 98;
			break;
		case 127:
			StringCopy(&Var2, "TORSO_P0_21_14" /* GXT: Eris Charcoal Hoodie */, 16);
			iVar3 = 21;
			iVar4 = 14;
			iVar1 = 110;
			break;
		case 128:
			StringCopy(&Var2, "TORSO_P0_21_15" /* GXT: OG Hoodie */, 16);
			iVar3 = 21;
			iVar4 = 15;
			iVar1 = 98;
			break;
		case 129:
			StringCopy(&Var2, "TORSO_P0_22_0" /* GXT: Distressed Leather Jacket */, 16);
			iVar3 = 22;
			iVar4 = 0;
			break;
		case 130:
			StringCopy(&Var2, "TORSO_P0_22_1" /* GXT: Black Leather Jacket */, 16);
			iVar3 = 22;
			iVar4 = 1;
			iVar1 = 4950;
			break;
		case 131:
			StringCopy(&Var2, "TORSO_P0_22_2" /* GXT: Chestnut Leather Jacket */, 16);
			iVar3 = 22;
			iVar4 = 2;
			iVar1 = 4195;
			break;
		case 132:
			StringCopy(&Var2, "TORSO_P0_22_3" /* GXT: Oxblood Leather Jacket */, 16);
			iVar3 = 22;
			iVar4 = 3;
			iVar1 = 3195;
			break;
		case 133:
			StringCopy(&Var2, "TORSO_P0_22_4" /* GXT: Vintage Black Leather Jacket */, 16);
			iVar3 = 22;
			iVar4 = 4;
			iVar1 = 2950;
			break;
		case 134:
			StringCopy(&Var2, "TORSO_P0_22_5" /* GXT: Brown Leather Jacket */, 16);
			iVar3 = 22;
			iVar4 = 5;
			iVar1 = 3950;
			break;
		case 135:
			StringCopy(&Var2, "TORSO_P0_23_0" /* GXT: Silver Sports Coat */, 16);
			iVar3 = 23;
			iVar4 = 0;
			iVar1 = 3200;
			break;
		case 136:
			StringCopy(&Var2, "TORSO_P0_23_1" /* GXT: Gray-Green Sports Coat */, 16);
			iVar3 = 23;
			iVar4 = 1;
			iVar1 = 3200;
			break;
		case 137:
			StringCopy(&Var2, "TORSO_P0_23_2" /* GXT: Slate Sports Coat */, 16);
			iVar3 = 23;
			iVar4 = 2;
			iVar1 = 3200;
			break;
		case 138:
			StringCopy(&Var2, "TORSO_P0_23_3" /* GXT: Gray Sports Coat */, 16);
			iVar3 = 23;
			iVar4 = 3;
			iVar1 = 3200;
			break;
		case 139:
			StringCopy(&Var2, "TORSO_P0_23_4" /* GXT: Blue Sports Coat */, 16);
			iVar3 = 23;
			iVar4 = 4;
			iVar1 = 3200;
			break;
		case 140:
			StringCopy(&Var2, "TORSO_P0_23_5" /* GXT: Pale Blue Sports Coat */, 16);
			iVar3 = 23;
			iVar4 = 5;
			iVar1 = 3200;
			break;
		case 141:
			StringCopy(&Var2, "TORSO_P0_23_6" /* GXT: White Sports Coat */, 16);
			iVar3 = 23;
			iVar4 = 6;
			iVar1 = 3200;
			break;
		case 142:
			StringCopy(&Var2, "TORSO_P0_23_7" /* GXT: Warm Gray Sports Coat */, 16);
			iVar3 = 23;
			iVar4 = 7;
			iVar1 = 3200;
			break;
		case 143:
			StringCopy(&Var2, "TORSO_P0_23_8" /* GXT: Cream Sports Coat */, 16);
			iVar3 = 23;
			iVar4 = 8;
			iVar1 = 3200;
			break;
		case 144:
			StringCopy(&Var2, "TORSO_P0_23_9" /* GXT: Midnight Blue Sports Coat */, 16);
			iVar3 = 23;
			iVar4 = 9;
			iVar1 = 3200;
			break;
		case 145:
			StringCopy(&Var2, "TORSO_P0_23_10" /* GXT: Off-White Sports Coat */, 16);
			iVar3 = 23;
			iVar4 = 10;
			iVar1 = 3200;
			break;
		case 146:
			StringCopy(&Var2, "TORSO_P0_23_11" /* GXT: Charcoal Wool Sports Coat */, 16);
			iVar3 = 23;
			iVar4 = 11;
			iVar1 = 3200;
			break;
		case 147:
			StringCopy(&Var2, "TORSO_P0_23_12" /* GXT: Charcoal Sports Coat */, 16);
			iVar3 = 23;
			iVar4 = 12;
			iVar1 = 3200;
			break;
		case 148:
			StringCopy(&Var2, "TORSO_P0_23_13" /* GXT: Ash Plaid Sports Coat */, 16);
			iVar3 = 23;
			iVar4 = 13;
			iVar1 = 3200;
			break;
		case 149:
			StringCopy(&Var2, "TORSO_P0_23_14" /* GXT: Beige Sports Coat */, 16);
			iVar3 = 23;
			iVar4 = 14;
			iVar1 = 3200;
			break;
		case 150:
			StringCopy(&Var2, "TORSO_P0_23_15" /* GXT: Brown Sports Coat */, 16);
			iVar3 = 23;
			iVar4 = 15;
			iVar1 = 3200;
			break;
		case 151:
			StringCopy(&Var2, "TORSO_P0_24_0" /* GXT: Charcoal Sweater */, 16);
			iVar3 = 24;
			iVar4 = 0;
			iVar1 = 1350;
			break;
		case 152:
			StringCopy(&Var2, "TORSO_P0_24_1" /* GXT: Gray Sweater */, 16);
			iVar3 = 24;
			iVar4 = 1;
			iVar1 = 1400;
			break;
		case 153:
			StringCopy(&Var2, "TORSO_P0_24_2" /* GXT: Beige Sweater */, 16);
			iVar3 = 24;
			iVar4 = 2;
			iVar1 = 1200;
			break;
		case 154:
			StringCopy(&Var2, "TORSO_P0_24_3" /* GXT: Red Sweater */, 16);
			iVar3 = 24;
			iVar4 = 3;
			iVar1 = 1250;
			break;
		case 155:
			StringCopy(&Var2, "TORSO_P0_24_4" /* GXT: Pale Blue Sweater */, 16);
			iVar3 = 24;
			iVar4 = 4;
			iVar1 = 1350;
			break;
		case 156:
			StringCopy(&Var2, "TORSO_P0_24_5" /* GXT: Pale Amethyst Sweater */, 16);
			iVar3 = 24;
			iVar4 = 5;
			iVar1 = 1300;
			break;
		case 157:
			StringCopy(&Var2, "TORSO_P0_24_6" /* GXT: Blue Sweater */, 16);
			iVar3 = 24;
			iVar4 = 6;
			iVar1 = 1380;
			break;
		case 158:
			StringCopy(&Var2, "TORSO_P0_24_7" /* GXT: Pale Jade Sweater */, 16);
			iVar3 = 24;
			iVar4 = 7;
			iVar1 = 1340;
			break;
		case 159:
			StringCopy(&Var2, "TORSO_P0_24_8" /* GXT: Orange Sweater */, 16);
			iVar3 = 24;
			iVar4 = 8;
			iVar1 = 1380;
			break;
		case 160:
			StringCopy(&Var2, "TORSO_P0_24_9" /* GXT: Lemon Sweater */, 16);
			iVar3 = 24;
			iVar4 = 9;
			iVar1 = 1250;
			break;
		case 161:
			StringCopy(&Var2, "TORSO_P0_25_0" /* GXT: Pale Blue Shirt */, 16);
			iVar3 = 25;
			iVar4 = 0;
			iVar1 = 840;
			break;
		case 162:
			StringCopy(&Var2, "TORSO_P0_25_1" /* GXT: Pink Shirt */, 16);
			iVar3 = 25;
			iVar4 = 1;
			iVar1 = 840;
			break;
		case 163:
			StringCopy(&Var2, "TORSO_P0_25_2" /* GXT: White Shirt */, 16);
			iVar3 = 25;
			iVar4 = 2;
			iVar1 = 840;
			break;
		case 164:
			StringCopy(&Var2, "TORSO_P0_25_3" /* GXT: Gray Shirt */, 16);
			iVar3 = 25;
			iVar4 = 3;
			iVar1 = 840;
			break;
		case 165:
			StringCopy(&Var2, "TORSO_P0_25_4" /* GXT: Charcoal Shirt */, 16);
			iVar3 = 25;
			iVar4 = 4;
			iVar1 = 840;
			break;
		case 166:
			StringCopy(&Var2, "TORSO_P0_25_5" /* GXT: Blue Shirt */, 16);
			iVar3 = 25;
			iVar4 = 5;
			iVar1 = 840;
			break;
		case 167:
			StringCopy(&Var2, "TORSO_P0_25_6" /* GXT: Topaz Shirt */, 16);
			iVar3 = 25;
			iVar4 = 6;
			iVar1 = 840;
			break;
		case 168:
			StringCopy(&Var2, "TORSO_P0_25_7" /* GXT: Black Shirt */, 16);
			iVar3 = 25;
			iVar4 = 7;
			iVar1 = 840;
			break;
		case 169:
			StringCopy(&Var2, "TORSO_P0_26_0" /* GXT: Bare Chested */, 16);
			iVar3 = 26;
			iVar4 = 0;
			break;
		case 170:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 27;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 171:
			StringCopy(&Var2, "TORSO_P0_28_0" /* GXT: Eris White Sweater Vest */, 16);
			iVar3 = 28;
			iVar4 = 0;
			break;
		case 172:
			StringCopy(&Var2, "TORSO_P0_28_1" /* GXT: Lobon Sweater Vest */, 16);
			iVar3 = 28;
			iVar4 = 1;
			iVar1 = 130;
			break;
		case 173:
			StringCopy(&Var2, "TORSO_P0_28_2" /* GXT: Eris Blue Sweater Vest */, 16);
			iVar3 = 28;
			iVar4 = 2;
			iVar1 = 110;
			break;
		case 174:
			StringCopy(&Var2, "TORSO_P0_29_0", 16);
			iVar3 = 29;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 175:
			StringCopy(&Var2, "TORSO_P0_30_0" /* GXT: Gray Jacket */, 16);
			iVar3 = 30;
			iVar4 = 0;
			iVar1 = 290;
			break;
		case 176:
			StringCopy(&Var2, "TORSO_P0_30_1" /* GXT: Black Jacket */, 16);
			iVar3 = 30;
			iVar4 = 1;
			iVar1 = 320;
			break;
		case 177:
			StringCopy(&Var2, "TORSO_P0_31_0" /* GXT: Red Check Winter Shirt */, 16);
			iVar3 = 31;
			iVar4 = 0;
			iVar1 = 59;
			break;
		case 178:
			StringCopy(&Var2, "TORSO_P0_31_1" /* GXT: Blue Check Winter Shirt */, 16);
			iVar3 = 31;
			iVar4 = 1;
			iVar1 = 55;
			break;
		case 179:
			StringCopy(&Var2, "TORSO_P0_31_2" /* GXT: Black Winter Shirt */, 16);
			iVar3 = 31;
			iVar4 = 2;
			iVar1 = 59;
			break;
		case 180:
			StringCopy(&Var2, "TORSO_P0_31_3" /* GXT: Brown Check Winter Shirt */, 16);
			iVar3 = 31;
			iVar4 = 3;
			iVar1 = 49;
			break;
		default:
			return;
			break;
	}
	func_88(&(Global_78130[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_146(int iParam0)//Position - 0x1ED0D
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 3;
	Global_78130[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "TORSO_P0_0_0" /* GXT: Gray Jacket */, 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		case 1:
			StringCopy(&Var2, "TORSO_P0_0_0" /* GXT: Gray Jacket */, 16);
			iVar3 = 0;
			iVar4 = 1;
			break;
		case 2:
			StringCopy(&Var2, "TORSO_P0_0_2" /* GXT: Charcoal Jacket */, 16);
			iVar3 = 0;
			iVar4 = 2;
			iVar1 = 3500;
			break;
		case 3:
			StringCopy(&Var2, "TORSO_P0_0_3" /* GXT: Slate Jacket */, 16);
			iVar3 = 0;
			iVar4 = 3;
			break;
		case 4:
			StringCopy(&Var2, "TORSO_P0_0_4" /* GXT: Topaz Jacket */, 16);
			iVar3 = 0;
			iVar4 = 4;
			break;
		case 5:
			StringCopy(&Var2, "TORSO_P0_0_5" /* GXT: Pale Blue Jacket */, 16);
			iVar3 = 0;
			iVar4 = 5;
			break;
		case 6:
			StringCopy(&Var2, "TORSO_P0_0_6" /* GXT: Cream Jacket */, 16);
			iVar3 = 0;
			iVar4 = 6;
			break;
		case 7:
			StringCopy(&Var2, "TORSO_P0_0_7" /* GXT: Olive Jacket */, 16);
			iVar3 = 0;
			iVar4 = 7;
			break;
		case 8:
			StringCopy(&Var2, "TORSO_P0_0_8" /* GXT: Off-White Jacket */, 16);
			iVar3 = 0;
			iVar4 = 8;
			break;
		case 9:
			StringCopy(&Var2, "TORSO_P0_0_9" /* GXT: Navy Jacket */, 16);
			iVar3 = 0;
			iVar4 = 9;
			break;
		case 10:
			StringCopy(&Var2, "TORSO_P0_0_10" /* GXT: Beige Jacket */, 16);
			iVar3 = 0;
			iVar4 = 10;
			break;
		case 11:
			StringCopy(&Var2, "TORSO_P0_0_11" /* GXT: Smoke Jacket */, 16);
			iVar3 = 0;
			iVar4 = 11;
			break;
		case 12:
			StringCopy(&Var2, "TORSO_P0_0_12" /* GXT: Blue-Gray Jacket */, 16);
			iVar3 = 0;
			iVar4 = 12;
			break;
		case 13:
			StringCopy(&Var2, "TORSO_P0_0_13" /* GXT: Ash Jacket */, 16);
			iVar3 = 0;
			iVar4 = 13;
			break;
		case 14:
			StringCopy(&Var2, "TORSO_P0_0_14" /* GXT: Sand Jacket */, 16);
			iVar3 = 0;
			iVar4 = 14;
			break;
		case 15:
			StringCopy(&Var2, "TORSO_P0_0_15" /* GXT: Black Jacket */, 16);
			iVar3 = 0;
			iVar4 = 15;
			break;
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			iVar1 = 20;
			break;
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 1;
			iVar1 = 18;
			break;
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 2;
			iVar1 = 22;
			break;
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 3;
			iVar1 = 25;
			break;
		case 21:
			StringCopy(&Var2, "TORSO_P0_2_4" /* GXT: Suburban Yellow T-Shirt */, 16);
			iVar3 = 2;
			iVar4 = 4;
			iVar1 = 19;
			break;
		case 22:
			StringCopy(&Var2, "TORSO_P0_2_5" /* GXT: Rearwall Slate T-Shirt */, 16);
			iVar3 = 2;
			iVar4 = 5;
			iVar1 = 20;
			break;
		case 23:
			StringCopy(&Var2, "TORSO_P0_2_6" /* GXT: Rearwall Blue T-Shirt */, 16);
			iVar3 = 2;
			iVar4 = 6;
			iVar1 = 22;
			break;
		case 24:
			StringCopy(&Var2, "TORSO_P0_2_7" /* GXT: Rearwall Gray T-Shirt */, 16);
			iVar3 = 2;
			iVar4 = 7;
			iVar1 = 18;
			break;
		case 25:
			StringCopy(&Var2, "TORSO_P0_2_8" /* GXT: Suburban Navy T-Shirt */, 16);
			iVar3 = 2;
			iVar4 = 8;
			iVar1 = 39;
			break;
		case 26:
			StringCopy(&Var2, "TORSO_P0_2_9" /* GXT: Suburban Russet T-Shirt */, 16);
			iVar3 = 2;
			iVar4 = 9;
			iVar1 = 32;
			break;
		case 27:
			StringCopy(&Var2, "TORSO_P0_2_10" /* GXT: Suburban Orange T-Shirt */, 16);
			iVar3 = 2;
			iVar4 = 10;
			iVar1 = 35;
			break;
		case 28:
			StringCopy(&Var2, "TORSO_P0_2_11" /* GXT: Suburban Gray T-Shirt */, 16);
			iVar3 = 2;
			iVar4 = 11;
			iVar1 = 35;
			break;
		case 29:
			StringCopy(&Var2, "TORSO_P0_2_12" /* GXT: White T-Shirt */, 16);
			iVar3 = 2;
			iVar4 = 12;
			iVar1 = 210;
			break;
		case 30:
			StringCopy(&Var2, "TORSO_P0_2_13" /* GXT: Forest Green T-Shirt */, 16);
			iVar3 = 2;
			iVar4 = 13;
			iVar1 = 250;
			break;
		case 31:
			StringCopy(&Var2, "TORSO_P0_2_14" /* GXT: Pale Blue T-Shirt */, 16);
			iVar3 = 2;
			iVar4 = 14;
			iVar1 = 290;
			break;
		case 32:
			StringCopy(&Var2, "TORSO_P0_2_15" /* GXT: Ash T-Shirt */, 16);
			iVar3 = 2;
			iVar4 = 15;
			iVar1 = 310;
			break;
		case 33:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 34:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 1;
			bVar0 = true;
			break;
		case 35:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 36:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 37:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 38:
			StringCopy(&Var2, "TORSO_P0_7_0" /* GXT: Brown Shooting Vest */, 16);
			iVar3 = 7;
			iVar4 = 0;
			iVar1 = 150;
			break;
		case 39:
			StringCopy(&Var2, "TORSO_P0_7_1" /* GXT: Woodland Shooting Vest */, 16);
			iVar3 = 7;
			iVar4 = 1;
			iVar1 = 160;
			break;
		case 40:
			StringCopy(&Var2, "TORSO_P0_7_2" /* GXT: Taupe Shooting Vest */, 16);
			iVar3 = 7;
			iVar4 = 2;
			iVar1 = 150;
			break;
		case 41:
			StringCopy(&Var2, "TORSO_P0_7_3" /* GXT: Brown Woven Shooting Vest */, 16);
			iVar3 = 7;
			iVar4 = 3;
			iVar1 = 150;
			break;
		case 42:
			StringCopy(&Var2, "TORSO_P0_7_4" /* GXT: Field Shooting Vest */, 16);
			iVar3 = 7;
			iVar4 = 4;
			iVar1 = 160;
			break;
		case 43:
			StringCopy(&Var2, "TORSO_P0_7_5" /* GXT: Forest Shooting Vest */, 16);
			iVar3 = 7;
			iVar4 = 5;
			iVar1 = 160;
			break;
		case 44:
			StringCopy(&Var2, "TORSO_P0_8_0" /* GXT: Blue-Gray Shirt */, 16);
			iVar3 = 8;
			iVar4 = 0;
			break;
		case 45:
			StringCopy(&Var2, "TORSO_P0_8_1" /* GXT: White Shirt */, 16);
			iVar3 = 8;
			iVar4 = 1;
			iVar1 = 52;
			break;
		case 46:
			StringCopy(&Var2, "TORSO_P0_8_2" /* GXT: Camel Shirt */, 16);
			iVar3 = 8;
			iVar4 = 2;
			iVar1 = 52;
			break;
		case 47:
			StringCopy(&Var2, "TORSO_P0_8_3" /* GXT: Black Shirt */, 16);
			iVar3 = 8;
			iVar4 = 3;
			iVar1 = 55;
			break;
		case 48:
			StringCopy(&Var2, "TORSO_P0_8_4" /* GXT: Citrus Hawaiian Shirt */, 16);
			iVar3 = 8;
			iVar4 = 4;
			iVar1 = 55;
			break;
		case 49:
			StringCopy(&Var2, "TORSO_P0_8_5" /* GXT: Orange Grove Shirt */, 16);
			iVar3 = 8;
			iVar4 = 5;
			iVar1 = 58;
			break;
		case 50:
			StringCopy(&Var2, "TORSO_P0_8_6" /* GXT: Parrot Print Shirt */, 16);
			iVar3 = 8;
			iVar4 = 6;
			iVar1 = 58;
			break;
		case 51:
			StringCopy(&Var2, "TORSO_P0_8_7" /* GXT: Blue Geometric Shirt */, 16);
			iVar3 = 8;
			iVar4 = 7;
			iVar1 = 62;
			break;
		case 52:
			StringCopy(&Var2, "TORSO_P0_8_8" /* GXT: Gray Patterned Shirt */, 16);
			iVar3 = 8;
			iVar4 = 8;
			iVar1 = 65;
			break;
		case 53:
			StringCopy(&Var2, "TORSO_P0_8_9" /* GXT: Peach Patterned Shirt */, 16);
			iVar3 = 8;
			iVar4 = 9;
			iVar1 = 65;
			break;
		case 54:
			StringCopy(&Var2, "TORSO_P0_8_10" /* GXT: Tropical Shirt */, 16);
			iVar3 = 8;
			iVar4 = 10;
			iVar1 = 68;
			break;
		case 55:
			StringCopy(&Var2, "TORSO_P0_8_11" /* GXT: Navy Floral Shirt */, 16);
			iVar3 = 8;
			iVar4 = 11;
			iVar1 = 68;
			break;
		case 56:
			StringCopy(&Var2, "TORSO_P0_8_12" /* GXT: Lime Plaid Shirt */, 16);
			iVar3 = 8;
			iVar4 = 12;
			iVar1 = 55;
			break;
		case 57:
			StringCopy(&Var2, "TORSO_P0_8_13" /* GXT: Brown Patterned Shirt */, 16);
			iVar3 = 8;
			iVar4 = 13;
			iVar1 = 62;
			break;
		case 58:
			StringCopy(&Var2, "TORSO_P0_8_14" /* GXT: Vintage Hawaiian Shirt */, 16);
			iVar3 = 8;
			iVar4 = 14;
			iVar1 = 58;
			break;
		case 59:
			StringCopy(&Var2, "TORSO_P0_8_15" /* GXT: Blue Plaid Shirt */, 16);
			iVar3 = 8;
			iVar4 = 15;
			iVar1 = 58;
			break;
		default:
			return;
			break;
	}
	func_88(&(Global_78130[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_147(int iParam0)//Position - 0x1F38F
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 2;
	Global_78130[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "HAIR_P0_0_0" /* GXT: Lexington */, 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		case 1:
			StringCopy(&Var2, "HAIR_P0_1_0" /* GXT: The Wood */, 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		case 2:
			StringCopy(&Var2, "HAIR_P0_2_0" /* GXT: Clippered Cut */, 16);
			iVar3 = 2;
			iVar4 = 0;
			break;
		case 3:
			StringCopy(&Var2, "HAIR_P0_3_0" /* GXT: Grown Out */, 16);
			iVar3 = 3;
			iVar4 = 0;
			break;
		case 4:
			StringCopy(&Var2, "HAIR_P0_4_0" /* GXT: Slicker */, 16);
			iVar3 = 4;
			iVar4 = 0;
			break;
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			break;
		default:
			func_95(iVar7, iParam0, 6, -1);
			return;
			break;
	}
	func_88(&(Global_78130[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_148(int iParam0)//Position - 0x1F475
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 0;
	Global_78130[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 1;
			break;
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 2;
			break;
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 3;
			break;
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 4;
			break;
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 5;
			break;
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 6;
			break;
		default:
			func_95(iVar7, iParam0, 7, -1);
			return;
			break;
	}
	func_88(&(Global_78130[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

int func_150(int iParam0, int iParam1, int iParam2)//Position - 0x1F5E4
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	var uVar6;
	int iVar7;
	var uVar8;
	if (PED::IS_PED_INJURED(iParam0))
	{
		return 0;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	Global_78130[1 /*14*/] = { func_85(iVar0, iParam1, iParam2, -1) };
	if (!BitTest(Global_78130[1 /*14*/].f_6, 0))
	{
		return 0;
	}
	if (iParam1 == 12)
	{
		uVar5 = { __LIB_0__::func_31(iVar0, iParam2) };
		iVar2 = 0;
		while (iVar2 <= 14)
		{
			if ((uVar5[iVar2] != -99 && iVar2 != 12) && iVar2 != 14)
			{
				if (!func_150(iParam0, iVar2, uVar5[iVar2]))
				{
					if (iVar2 == 13)
					{
						uVar6 = { func_78(iVar0, uVar5[iVar2]) };
						iVar3 = 0;
						while (iVar3 <= 8)
						{
							if (!func_150(iParam0, 14, uVar6[iVar3]))
							{
								iVar4 = 0;
								while (iVar4 <= 19)
								{
									Global_78130[2 /*14*/] = { func_85(iVar0, 14, iVar4, -1) };
									if (Global_78130[2 /*14*/].f_12 == iVar3)
									{
										if (func_150(iParam0, 14, iVar4))
										{
											if (!func_40(iVar0, iParam2, 14, iVar4, &uVar5, &(Global_78130[2 /*14*/])))
											{
												return 0;
											}
										}
									}
									iVar4++;
								}
							}
							iVar3++;
						}
					}
					else
					{
						iVar1 = func_66(iParam0, iVar2);
						Global_78130[2 /*14*/] = { func_85(iVar0, iVar2, iVar1, -1) };
						if (!func_40(iVar0, iParam2, iVar2, iVar1, &uVar5, &(Global_78130[2 /*14*/])))
						{
							return 0;
						}
					}
				}
			}
			iVar2++;
		}
		return 1;
	}
	else if (iParam1 == 13)
	{
		uVar8 = { func_78(iVar0, iParam2) };
		iVar7 = 0;
		while (iVar7 <= 8)
		{
			if (!func_150(iParam0, 14, uVar8[iVar7]))
			{
				return 0;
			}
			iVar7++;
		}
		return 1;
	}
	else if (iParam1 == 14)
	{
		if (PED::GET_PED_PROP_INDEX(iParam0, Global_78130[1 /*14*/].f_12) == Global_78130[1 /*14*/].f_3 && (PED::GET_PED_PROP_TEXTURE_INDEX(iParam0, Global_78130[1 /*14*/].f_12) == Global_78130[1 /*14*/].f_4 || Global_78130[1 /*14*/].f_3 == -1))
		{
			return 1;
		}
	}
	else if (Global_78130[1 /*14*/].f_3 == PED::GET_PED_DRAWABLE_VARIATION(iParam0, __LIB_0__::func_33(iParam1)) && Global_78130[1 /*14*/].f_4 == PED::GET_PED_TEXTURE_VARIATION(iParam0, __LIB_0__::func_33(iParam1)))
	{
		return 1;
	}
	return 0;
}

void func_183(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)//Position - 0x21FF4
{
	if (iParam0 != 198)
	{
		if (Global_78319)
		{
			Global_42586.f_227[iParam0] = iParam1;
		}
		else
		{
			Global_113386.f_7261.f_227[iParam0] = iParam1;
		}
		Global_39592[iParam0] = iParam2;
		Global_39791[iParam0] = 1;
		__LIB_0__::func_58(iParam0, bParam3, iParam4, 0);
		__LIB_0__::func_57(iParam0, iParam1);
	}
}

void func_193(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)//Position - 0x26429
{
	func_194(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_194(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)//Position - 0x2644A
{
	int iVar0;
	if (MISC::ARE_STRINGS_EQUAL(sParam0, ""))
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam5 < 500 && iParam5 != -1)
	{
		return;
	}
	if (iParam4 < 0 && iParam4 != -1)
	{
		return;
	}
	if (iParam6 < 1 || iParam6 > 7)
	{
		return;
	}
	if (iParam7 == 235)
	{
		return;
	}
	if (iParam8 == 235)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_113386.f_20410.f_145)
	{
		if (MISC::ARE_STRINGS_EQUAL(&(Global_113386.f_20410[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_113386.f_20410.f_145 < 9)
	{
		StringCopy(&(Global_113386.f_20410[Global_113386.f_20410.f_145 /*16*/]), sParam0, 16);
		StringCopy(&(Global_113386.f_20410[Global_113386.f_20410.f_145 /*16*/].f_4), sParam1, 16);
		Global_113386.f_20410[Global_113386.f_20410.f_145 /*16*/].f_8 = (MISC::GET_GAME_TIMER() + iParam3);
		Global_113386.f_20410[Global_113386.f_20410.f_145 /*16*/].f_9 = iParam5;
		Global_113386.f_20410[Global_113386.f_20410.f_145 /*16*/].f_11 = iParam6;
		Global_113386.f_20410[Global_113386.f_20410.f_145 /*16*/].f_12 = uParam2;
		Global_113386.f_20410[Global_113386.f_20410.f_145 /*16*/].f_13 = iParam7;
		Global_113386.f_20410[Global_113386.f_20410.f_145 /*16*/].f_14 = iParam8;
		Global_113386.f_20410[Global_113386.f_20410.f_145 /*16*/].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_113386.f_20410[Global_113386.f_20410.f_145 /*16*/].f_10 = ((MISC::GET_GAME_TIMER() + iParam3) + iParam4);
		}
		else
		{
			Global_113386.f_20410[Global_113386.f_20410.f_145 /*16*/].f_10 = -1;
		}
		Global_113386.f_20410.f_145++;
		__LIB_0__::func_62();
	}
}

int func_202()//Position - 0x26A32
{
	return func_203(SCRIPT::GET_THIS_SCRIPT_NAME(), 0);
}

int func_203(char* sParam0, int iParam1)//Position - 0x26A43
{
	int iVar0;
	char* sVar1;
	int iVar2;
	int iVar3;
	iVar2 = MISC::GET_HASH_KEY(sParam0);
	iVar3 = 0;
	iVar3 = 0;
	while (iVar3 < 63)
	{
		iVar0 = iVar3;
		__LIB_18__::func_169(iVar0, &sVar1);
		if (MISC::GET_HASH_KEY(sVar1) == iVar2)
		{
			return iVar0;
		}
		iVar3++;
	}
	if (iParam1 == 0)
	{
	}
	return -1;
}

void func_204(int iParam0, int iParam1, bool bParam2)//Position - 0x26A8C
{
	int iVar0;
	Global_8822 = iParam0;
	if (Global_117[iParam0 /*10*/].f_8 != 166)
	{
		__LIB_0__::func_72();
		if (iParam1 == 4)
		{
			__LIB_0__::func_71(iParam0, 0, 1);
			__LIB_0__::func_71(iParam0, 1, 1);
			__LIB_0__::func_71(iParam0, 2, 1);
			__LIB_0__::func_70(iParam0, 0, 1);
			__LIB_0__::func_70(iParam0, 1, 1);
			__LIB_0__::func_70(iParam0, 2, 1);
		}
		else
		{
			if (__LIB_0__::func_69(iParam0, iParam1) == 1 && __LIB_0__::func_68(iParam0, iParam1) == 1)
			{
				bParam2 = false;
			}
			iVar0 = iParam1;
			__LIB_0__::func_71(iParam0, iVar0, 1);
			__LIB_0__::func_70(iParam0, iVar0, 1);
			if (iParam0 == 172 && !Global_2815059.f_6768)
			{
				bParam2 = false;
			}
			if (iParam0 == 171 && !Global_2815059.f_6767)
			{
				bParam2 = false;
			}
			if (iParam0 == 173 && !Global_2815059.f_6767)
			{
				bParam2 = false;
			}
		}
		if (bParam2)
		{
			if (!Global_78319)
			{
				if (iParam1 != 4)
				{
					if (Global_20266 != iParam1)
					{
						Global_8795[iParam1 /*4*/] = { __LIB_0__::func_67(iParam0) };
						Global_8812[iParam1] = 1;
						Global_8817[iParam1] = iParam0;
					}
					else if (iParam0 == Global_20266)
					{
					}
					else
					{
						Global_8746[1 /*6*/] = { __LIB_0__::func_67(iParam0) };
						Global_8746[1 /*6*/].f_5 = iParam1;
						__LIB_0__::func_66();
					}
				}
				else
				{
					Global_8746[1 /*6*/] = { __LIB_0__::func_67(iParam0) };
					Global_8746[1 /*6*/].f_5 = iParam1;
					__LIB_0__::func_66();
				}
			}
			else
			{
				Global_8746[1 /*6*/] = { __LIB_0__::func_67(iParam0) };
				Global_8746[1 /*6*/].f_5 = iParam1;
				__LIB_0__::func_66();
			}
		}
	}
}

void func_215(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x26F61
{
	int iVar0;
	iVar0 = PLAYER::GET_PLAYER_INDEX();
	PLAYER::SET_EVERYONE_IGNORE_PLAYER(iVar0, false);
	PLAYER::SET_PLAYER_CONTROL(iVar0, bParam3, 0);
	func_217(0, 1, 0, 0, 0, 0, 0);
	if (iParam2 == 1)
	{
		HUD::DISPLAY_RADAR(true);
		HUD::DISPLAY_HUD(true);
	}
	HUD::CLEAR_HELP(true);
	if (iParam0 == 1)
	{
		CAM::SET_WIDESCREEN_BORDERS(false, 0);
	}
	if (iParam1 == 1)
	{
		if ((iLocal_34 != 0 && iLocal_34 != joaat("OBJECT")) && iLocal_34 != joaat("GADGET_PARACHUTE"))
		{
			if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
			{
				if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), iLocal_34, false))
				{
					WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), iLocal_34, false);
				}
			}
		}
	}
	if (__LIB_1__::func_197(PLAYER::PLAYER_PED_ID()))
	{
		PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), false, 0);
	}
}

void func_217(bool bParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x2702B
{
	if (bParam0)
	{
		PLAYER::SPECIAL_ABILITY_DEACTIVATE_FAST(PLAYER::PLAYER_ID(), 0);
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), true);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), true);
		__LIB_0__::func_83(1);
		HUD::THEFEED_FLUSH_QUEUE();
		HUD::THEFEED_PAUSE();
		if (Global_20266.f_1 > 3 && !bParam6)
		{
			if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
			{
				AUDIO::STOP_SCRIPTED_CONVERSATION(false);
			}
			if (!__LIB_0__::func_73())
			{
				Global_20266.f_1 = 3;
			}
			Global_21605 = 5;
		}
		__LIB_0__::func_73(1, bParam3, iParam2, 0);
		Global_63160 = 1;
		Global_75488 = 1;
		Global_78317 = 1;
	}
	else
	{
		__LIB_0__::func_83(0);
		HUD::THEFEED_RESUME();
		Global_63160 = 0;
		if (bParam1)
		{
			GRAPHICS::CASCADE_SHADOWS_INIT_SESSION();
		}
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), false);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), false);
		__LIB_0__::func_73(0, bParam3, iParam2, 0);
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (((((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !__LIB_6__::func_948(PLAYER::PLAYER_ID())) && !__LIB_6__::func_768(PLAYER::PLAYER_ID(), 0)) && !__LIB_0__::func_80()) && !bParam4) && !bParam5)
			{
				ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false);
			}
		}
		else if (((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !__LIB_6__::func_948(PLAYER::PLAYER_ID())) && !bParam4) && !bParam5)
		{
			ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false);
		}
		Global_78317 = 0;
	}
}

void func_230(int iParam0, bool bParam1)//Position - 0x27392
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1)
	{
		if (!__LIB_0__::func_75(iParam0, 0))
		{
			__LIB_0__::func_60(iParam0, 1, 0);
			__LIB_0__::func_60(iParam0, 2, 0);
			__LIB_0__::func_60(iParam0, 3, 0);
			__LIB_0__::func_60(iParam0, 4, 0);
			__LIB_0__::func_60(iParam0, 0, 1);
			Global_77137[iParam0] = 1;
		}
	}
	else
	{
		__LIB_0__::func_60(iParam0, 0, 0);
	}
}

void func_234(struct<3> Param0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, bool bParam10)//Position - 0x27486
{
	int iVar0;
	iVar0 = PLAYER::GET_PLAYER_INDEX();
	if (PLAYER::IS_PLAYER_PLAYING(iVar0))
	{
		func_305(0);
		if (bParam7)
		{
			PLAYER::REMOVE_PLAYER_HELMET(PLAYER::GET_PLAYER_INDEX(), true);
		}
		if (bParam6)
		{
			switch (__LIB_18__::func_173())
			{
				case 0:
					if (func_150(PLAYER::PLAYER_PED_ID(), 8, 15))
					{
						__LIB_0__::func_17(PLAYER::PLAYER_PED_ID(), 8, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					if (func_150(PLAYER::PLAYER_PED_ID(), 9, 6))
					{
						__LIB_0__::func_17(PLAYER::PLAYER_PED_ID(), 9, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					break;
				case 1:
					if (func_150(PLAYER::PLAYER_PED_ID(), 8, 1) || func_150(PLAYER::PLAYER_PED_ID(), 8, 10))
					{
						__LIB_0__::func_17(PLAYER::PLAYER_PED_ID(), 8, 26, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					break;
				case 2:
					if (func_150(PLAYER::PLAYER_PED_ID(), 8, 4))
					{
						__LIB_0__::func_17(PLAYER::PLAYER_PED_ID(), 8, 15, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					break;
				}
		}
		if (iParam4 == 1)
		{
			MISC::CLEAR_AREA_OF_PEDS(__LIB_0__::func_85(PLAYER::GET_PLAYER_INDEX()), 50f, 0);
		}
		if (iParam5 == 1)
		{
			MISC::CLEAR_AREA_OF_OBJECTS(Param0, 30f, 0);
		}
		if (bParam8)
		{
			FIRE::STOP_FIRE_IN_RANGE(Param0, 30f);
		}
		MISC::CLEAR_AREA_OF_PROJECTILES(Param0, 30f, 0);
		PLAYER::SET_PLAYER_WANTED_LEVEL(iVar0, 0, false);
		PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(iVar0, false);
		PLAYER::SET_EVERYONE_IGNORE_PLAYER(iVar0, true);
		if (bParam10)
		{
			HUD::DISPLAY_RADAR(false);
			HUD::DISPLAY_HUD(false);
		}
		HUD::CLEAR_PRINTS();
		if (iParam9 == 1)
		{
			HUD::CLEAR_HELP(true);
		}
		if (iParam1 == 1)
		{
			CAM::SET_WIDESCREEN_BORDERS(true, 0);
		}
		if (iParam2 == 1)
		{
			iLocal_34 = 0;
			if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
			{
				iLocal_34 = WEAPON::GET_SELECTED_PED_WEAPON(PLAYER::PLAYER_PED_ID());
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), true);
			}
		}
		if (iParam3 == 1)
		{
			__LIB_0__::func_84(500, 0);
		}
	}
}

void func_237(int iParam0, struct<3> Param1, float fParam2, int iParam3, bool bParam4)//Position - 0x276D2
{
	struct<60> Var0;
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		if (iParam3 != 24 && iParam3 != 25)
		{
			return;
		}
		if (iParam3 == 24)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_77137.f_484[25]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_77137.f_484[25], false))
			{
				if (Global_77137.f_484[25] == iParam0)
				{
					return;
				}
			}
		}
		if (!bParam4)
		{
			if ((VEHICLE::IS_BIG_VEHICLE(iParam0) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("bus")) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("tourbus"))
			{
				return;
			}
		}
		func_280(iParam3);
		Var0.f_9 = 49;
		Var0.f_59 = 2;
		func_276(iParam0, &Var0);
		if (__LIB_0__::func_78(Param1, 0f, 0f, 0f, 0))
		{
			Param1 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
			fParam2 = ENTITY::GET_ENTITY_HEADING(iParam0);
		}
		if (iParam3 == 24)
		{
			if (MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) != joaat("vehicle_gen_controller"))
			{
				Global_78125 = MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME());
			}
		}
		func_271(iParam3, &Var0, Param1, fParam2, __LIB_0__::func_119(iParam0));
		func_238(iParam3, iParam0, 0);
	}
}

void func_238(int iParam0, int iParam1, int iParam2)//Position - 0x277FB
{
	int iVar0;
	if (iParam0 == -1)
	{
		return;
	}
	if (!__LIB_12__::func_98(&(Global_77137.f_555[0 /*21*/]), iParam0))
	{
		return;
	}
	if (!BitTest(Global_77137.f_555[0 /*21*/].f_9, 12) && !BitTest(Global_77137.f_555[0 /*21*/].f_9, 10))
	{
		if (Global_77137.f_555[0 /*21*/].f_4 != ENTITY::GET_ENTITY_MODEL(iParam1))
		{
			return;
		}
	}
	if (Global_78044 != -1 && Global_78044 != iParam0)
	{
		return;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, false))
		{
			if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iParam1))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iParam1, true, true);
			}
			if (iParam0 == 24)
			{
				Global_113386.f_32749.f_4801 = func_257();
			}
			if (iParam1 != Global_77137.f_139[iParam0])
			{
				if (iParam0 == 24)
				{
					iVar0 = __LIB_0__::func_314(iParam0);
					if ((ENTITY::DOES_ENTITY_EXIST(iVar0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false)) && iParam1 != iVar0)
					{
						func_239(iVar0, 145);
					}
				}
				Global_78043 = iParam1;
				Global_78044 = iParam0;
				Global_78045 = iParam2;
			}
		}
	}
}

void func_239(int iParam0, int iParam1)//Position - 0x27912
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (!func_240(iParam0))
	{
		return;
	}
	if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
	{
		iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, -1, false);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			iVar0 = VEHICLE::GET_LAST_PED_IN_VEHICLE_SEAT(iParam0, -1);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_INJURED(iVar0))
		{
			if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("Player_Zero"))
			{
				iParam1 = 0;
			}
			else if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("Player_One"))
			{
				iParam1 = 1;
			}
			else if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("Player_Two"))
			{
				iParam1 = 2;
			}
		}
		if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
		{
			iParam1 = Global_113386.f_2363.f_539.f_4321;
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar2 = 0;
		while (iVar2 < 2)
		{
			if (ENTITY::GET_ENTITY_MODEL(iParam0) == Global_113386.f_32749.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66)
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_113386.f_32749.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
				{
					if (MISC::ARE_STRINGS_EQUAL(VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0), &(Global_113386.f_32749.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
					{
						Global_113386.f_32749.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66 = 0;
						Global_113386.f_32749.f_5592[iVar1] = iVar2;
					}
				}
			}
			iVar2++;
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (ENTITY::GET_ENTITY_MODEL(iParam0) == Global_113386.f_32749.f_5600[iVar1 /*78*/].f_66)
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_113386.f_32749.f_5600[iVar1 /*78*/].f_1)))
			{
				if (MISC::ARE_STRINGS_EQUAL(VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0), &(Global_113386.f_32749.f_5600[iVar1 /*78*/].f_1)))
				{
					Global_113386.f_32749.f_5600[iVar1 /*78*/].f_66 = 0;
				}
			}
		}
		iVar1++;
	}
	Global_113386.f_32749.f_5590 = iParam1;
	Global_78042 = iParam0;
	Global_113386.f_32749.f_5588 = 1;
	func_276(iParam0, &(Global_113386.f_32749.f_5510));
}

int func_240(int iParam0)//Position - 0x27B14
{
	if ((((((((((!ENTITY::DOES_ENTITY_EXIST(iParam0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false)) || func_255(iParam0, 0, 0)) || func_255(iParam0, 1, 0)) || func_255(iParam0, 2, 0)) || __LIB_0__::func_119(iParam0) != 145) || __LIB_0__::func_118(iParam0)) || __LIB_0__::func_117(iParam0)) || __LIB_0__::func_108(iParam0)) || func_251(iParam0)) || !func_241(ENTITY::GET_ENTITY_MODEL(iParam0)))
	{
		if (__LIB_0__::func_117(iParam0))
		{
		}
		if (__LIB_0__::func_117(iParam0))
		{
		}
		if (func_255(iParam0, 0, 0))
		{
		}
		if (func_255(iParam0, 1, 0))
		{
		}
		if (func_255(iParam0, 2, 0))
		{
		}
		if (__LIB_0__::func_119(iParam0) != 145)
		{
		}
		return 0;
	}
	return 1;
}

int func_241(int iParam0)//Position - 0x27BF1
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!func_242(iParam0, 0))
	{
		return 0;
	}
	if (((VEHICLE::IS_THIS_MODEL_A_BOAT(iParam0) || VEHICLE::IS_THIS_MODEL_A_PLANE(iParam0)) || VEHICLE::IS_THIS_MODEL_A_HELI(iParam0)) || VEHICLE::IS_THIS_MODEL_A_TRAIN(iParam0))
	{
		return 0;
	}
	switch (iParam0)
	{
		case joaat("bus"):
		case joaat("stretch"):
		case joaat("barracks"):
		case joaat("armytanker"):
		case joaat("rhino"):
		case joaat("armytrailer"):
		case joaat("barracks2"):
		case joaat("flatbed"):
		case joaat("ripley"):
		case joaat("towtruck"):
		case joaat("towtruck2"):
		case joaat("airbus"):
		case joaat("coach"):
		case joaat("rentalbus"):
		case joaat("tourbus"):
		case joaat("firetruk"):
		case joaat("pbus"):
		case joaat("trash"):
		case joaat("benson"):
		case joaat("boattrailer"):
		case joaat("biff"):
		case joaat("hauler"):
		case joaat("docktrailer"):
		case joaat("phantom"):
		case joaat("pounder"):
		case joaat("tractor2"):
		case joaat("bulldozer"):
		case joaat("handler"):
		case joaat("tiptruck"):
		case joaat("cutter"):
		case joaat("dump"):
		case joaat("mixer"):
		case joaat("mixer2"):
		case joaat("rubble"):
		case joaat("scrap"):
		case joaat("tiptruck2"):
		case joaat("camper"):
		case joaat("taco"):
		case joaat("boxville"):
		case joaat("boxville2"):
		case joaat("boxville3"):
		case joaat("journey"):
		case joaat("mule"):
		case joaat("mule2"):
		case joaat("police"):
		case joaat("police2"):
		case joaat("police3"):
		case joaat("police4"):
		case joaat("policeb"):
		case joaat("policeold1"):
		case joaat("policeold2"):
		case joaat("policet"):
		case joaat("taxi"):
		case joaat("submersible"):
		case joaat("submersible2"):
		case joaat("monster"):
			return 0;
			break;
	}
	return 1;
}

int func_242(int iParam0, bool bParam1)//Position - 0x27DA2
{
	int iVar0;
	struct<2> Var1;
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!STREAMING::IS_MODEL_A_VEHICLE(iParam0))
	{
		return 0;
	}
	if (((((iParam0 == joaat("dominator2") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS()) || (iParam0 == joaat("buffalo3") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())) || (iParam0 == joaat("gauntlet2") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())) || iParam0 == joaat("blimp2")) || (iParam0 == joaat("stalion2") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS()))
	{
		if (!__LIB_0__::func_116())
		{
			return 0;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < FILES::GET_NUM_DLC_VEHICLES())
		{
			if (FILES::GET_DLC_VEHICLE_DATA(iVar0, &Var1))
			{
				if (iParam0 == Var1.f_1)
				{
					if (FILES::IS_CONTENT_ITEM_LOCKED(Var1.f_0))
					{
						return 0;
					}
				}
			}
			iVar0++;
		}
	}
	if (iParam0 == joaat("blimp"))
	{
		if ((((!__LIB_0__::func_115() && !__LIB_0__::func_109()) && !__LIB_0__::func_109()) && !__LIB_0__::func_114()) && !__LIB_0__::func_116())
		{
			return 0;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((__LIB_0__::func_48() || MISC::IS_PC_VERSION()) || __LIB_0__::func_52())
		{
		}
		else if (!__LIB_0__::func_109())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (!__LIB_0__::func_113(iParam0))
		{
			return 0;
		}
	}
	if (!__LIB_2__::func_62(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_251(int iParam0)//Position - 0x2B3C4
{
	int iVar0;
	char* sVar1;
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	sVar1 = VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0);
	if (iVar0 == joaat("speedo") && MISC::ARE_STRINGS_EQUAL(sVar1, "LAMAR G "))
	{
		return 1;
	}
	if (!func_242(iVar0, 0))
	{
		return 1;
	}
	return 0;
}

int func_255(int iParam0, int iParam1, bool bParam2)//Position - 0x2B5A9
{
	int iVar0;
	char* sVar1;
	int iVar2;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		return 0;
	}
	iVar0 = 0;
	while (__LIB_0__::func_77(iParam1, iVar0, &sVar1, &iVar2))
	{
		if (!bParam2 || BitTest(Global_113386.f_7229[iVar2], 0))
		{
			if (VEHICLE::IS_VEHICLE_IN_GARAGE_AREA(&sVar1, iParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

var func_257()//Position - 0x2B6EF
{
	var uVar0;
	__LIB_0__::func_144(&uVar0, CLOCK::GET_CLOCK_SECONDS());
	__LIB_0__::func_143(&uVar0, CLOCK::GET_CLOCK_MINUTES());
	__LIB_0__::func_142(&uVar0, CLOCK::GET_CLOCK_HOURS());
	__LIB_0__::func_78(&uVar0, CLOCK::GET_CLOCK_DAY_OF_MONTH());
	__LIB_0__::func_141(&uVar0, CLOCK::GET_CLOCK_MONTH());
	__LIB_0__::func_140(&uVar0, CLOCK::GET_CLOCK_YEAR());
	return uVar0;
}

void func_271(int iParam0, var uParam1, struct<3> Param2, float fParam3, int iParam4)//Position - 0x2D365
{
	if (__LIB_12__::func_98(&(Global_77137.f_555[0 /*21*/]), iParam0))
	{
		if (BitTest(Global_77137.f_555[0 /*21*/].f_9, 10))
		{
			func_273(iParam0);
			__LIB_0__::func_284(uParam1, &(Global_113386.f_32749.f_69[Global_77137.f_555[0 /*21*/].f_14 /*78*/]));
			if (BitTest(Global_77137.f_555[0 /*21*/].f_9, 11))
			{
				Global_113386.f_32749.f_1864[Global_77137.f_555[0 /*21*/].f_14 /*3*/] = { Param2 };
				Global_113386.f_32749.f_1934[Global_77137.f_555[0 /*21*/].f_14] = fParam3;
			}
			else
			{
				Global_113386.f_32749.f_1864[Global_77137.f_555[0 /*21*/].f_14 /*3*/] = { 0f, 0f, 0f };
				Global_113386.f_32749.f_1934[Global_77137.f_555[0 /*21*/].f_14] = -1f;
			}
			Global_113386.f_32749.f_1958[Global_77137.f_555[0 /*21*/].f_14] = iParam4 + 1;
			func_230(iParam0, 1);
		}
	}
}

void func_273(int iParam0)//Position - 0x2D52A
{
	if (iParam0 == -1)
	{
		return;
	}
	if (__LIB_12__::func_98(&(Global_77137.f_555[0 /*21*/]), iParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_77137.f_139[iParam0]))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_77137.f_139[iParam0], true, true);
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Global_77137.f_139[iParam0]));
			Global_77137.f_139[iParam0] = 0;
		}
		if (BitTest(Global_77137.f_555[0 /*21*/].f_9, 13))
		{
			func_230(iParam0, 0);
		}
	}
}

void func_276(int iParam0, var uParam1)//Position - 0x2D64B
{
	int iVar0;
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		__LIB_0__::func_10(uParam1);
		uParam1->f_66 = ENTITY::GET_ENTITY_MODEL(iParam0);
		StringCopy(&(uParam1->f_1), VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0), 16);
		*uParam1 = VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(iParam0);
		VEHICLE::GET_VEHICLE_COLOURS(iParam0, &(uParam1->f_5), &(uParam1->f_6));
		VEHICLE::GET_VEHICLE_EXTRA_COLOURS(iParam0, &(uParam1->f_7), &(uParam1->f_8));
		VEHICLE::GET_VEHICLE_TYRE_SMOKE_COLOR(iParam0, &(uParam1->f_62), &(uParam1->f_63), &(uParam1->f_64));
		uParam1->f_65 = VEHICLE::GET_VEHICLE_WINDOW_TINT(iParam0);
		uParam1->f_67 = VEHICLE::GET_VEHICLE_LIVERY(iParam0);
		uParam1->f_69 = VEHICLE::GET_VEHICLE_WHEEL_TYPE(iParam0);
		uParam1->f_70 = VEHICLE::GET_VEHICLE_DOOR_LOCK_STATUS(iParam0);
		VEHICLE::GET_VEHICLE_CUSTOM_SECONDARY_COLOUR(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		VEHICLE::GET_VEHICLE_NEON_COLOUR(iParam0, &(uParam1->f_74), &(uParam1->f_75), &(uParam1->f_76));
		if (VEHICLE::GET_VEHICLE_NEON_ENABLED(iParam0, 2))
		{
			MISC::SET_BIT(&(uParam1->f_77), 28);
		}
		if (VEHICLE::GET_VEHICLE_NEON_ENABLED(iParam0, 3))
		{
			MISC::SET_BIT(&(uParam1->f_77), 29);
		}
		if (VEHICLE::GET_VEHICLE_NEON_ENABLED(iParam0, 0))
		{
			MISC::SET_BIT(&(uParam1->f_77), 30);
		}
		if (VEHICLE::GET_VEHICLE_NEON_ENABLED(iParam0, 1))
		{
			MISC::SET_BIT(&(uParam1->f_77), 31);
		}
		if (uParam1->f_65 == -1 && !__LIB_0__::func_111(uParam1->f_66))
		{
			uParam1->f_65 = 0;
		}
		if (VEHICLE::IS_VEHICLE_A_CONVERTIBLE(iParam0, false))
		{
			uParam1->f_68 = VEHICLE::GET_CONVERTIBLE_ROOF_STATE(iParam0);
		}
		if (VEHICLE::IS_THIS_MODEL_A_PLANE(uParam1->f_66))
		{
			if (VEHICLE::IS_PLANE_LANDING_GEAR_INTACT(iParam0))
			{
				switch (VEHICLE::GET_LANDING_GEAR_STATE(iParam0))
				{
					case 3:
					case 0:
						MISC::CLEAR_BIT(&(uParam1->f_77), 23);
						MISC::SET_BIT(&(uParam1->f_77), 22);
						break;
					case 4:
					case 1:
						MISC::CLEAR_BIT(&(uParam1->f_77), 23);
						MISC::CLEAR_BIT(&(uParam1->f_77), 22);
						break;
					case 5:
						MISC::SET_BIT(&(uParam1->f_77), 23);
						break;
				}
			}
			else
			{
				MISC::SET_BIT(&(uParam1->f_77), 23);
			}
		}
		if (!VEHICLE::GET_VEHICLE_TYRES_CAN_BURST(iParam0))
		{
			MISC::SET_BIT(&(uParam1->f_77), 9);
		}
		if (VEHICLE::IS_VEHICLE_STOLEN(iParam0))
		{
			MISC::SET_BIT(&(uParam1->f_77), 10);
		}
		if (VEHICLE::GET_IS_VEHICLE_PRIMARY_COLOUR_CUSTOM(iParam0))
		{
			MISC::SET_BIT(&(uParam1->f_77), 13);
			VEHICLE::GET_VEHICLE_CUSTOM_PRIMARY_COLOUR(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		}
		if (VEHICLE::GET_IS_VEHICLE_SECONDARY_COLOUR_CUSTOM(iParam0))
		{
			MISC::SET_BIT(&(uParam1->f_77), 12);
		}
		__LIB_0__::func_107(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, iVar0 + 1))
			{
				MISC::SET_BIT(&(uParam1->f_77), __LIB_0__::func_110(iVar0 + 1));
			}
			iVar0++;
		}
		if (GRAPHICS::DOES_VEHICLE_HAVE_CREW_EMBLEM(iParam0, 0))
		{
			MISC::SET_BIT(&(uParam1->f_77), 11);
		}
		else
		{
			MISC::CLEAR_BIT(&(uParam1->f_77), 11);
		}
		if (DECORATOR::DECOR_EXIST_ON(iParam0, "IgnoredByQuickSave") && DECORATOR::DECOR_GET_BOOL(iParam0, "IgnoredByQuickSave"))
		{
			MISC::SET_BIT(&(uParam1->f_77), 27);
		}
		else
		{
			MISC::CLEAR_BIT(&(uParam1->f_77), 27);
		}
	}
}

void func_280(int iParam0)//Position - 0x2DBB9
{
	if (iParam0 != 24 && iParam0 != 25)
	{
	}
	func_273(iParam0);
	func_230(iParam0, 0);
}

void func_285(struct<3> Param0, struct<3> Param1, float fParam2, struct<3> Param3, float fParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)//Position - 0x2DDB6
{
	func_286(Param0, Param1, fParam2, Param3, fParam4, 0f, 0f, 0f, bParam5, bParam6, bParam7, bParam8, bParam9);
}

void func_286(struct<3> Param0, struct<3> Param1, float fParam2, struct<3> Param3, float fParam4, struct<3> Param5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)//Position - 0x2DDDF
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	struct<3> Var4;
	struct<3> Var5;
	struct<3> Var6;
	int iVar7;
	int iVar8;
	int iVar9;
	if (bParam7)
	{
		bParam7 = false;
	}
	bVar2 = true;
	iVar3 = 0;
	iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar0))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, false);
			iVar3 = 1;
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
		{
			if (bParam10)
			{
				__LIB_0__::func_89(iVar0);
			}
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iVar0, Param0, Param1, fParam2, false, true, 0))
			{
				bVar1 = true;
			}
			else
			{
				Var6 = { ENTITY::GET_ENTITY_COORDS(iVar0, true) };
				if ((Var6.f_2 > Param0.f_2 && Var6.f_2 < Param1.f_2) || (Var6.f_2 > Param1.f_2 && Var6.f_2 < Param0.f_2))
				{
					if (__LIB_6__::func_824(iVar0, Param0, Param1, fParam2))
					{
						bVar1 = true;
					}
				}
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
			{
				if (VEHICLE::IS_VEHICLE_MODEL(iVar0, joaat("taxi")))
				{
					if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1, false) != PLAYER::PLAYER_PED_ID() && VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1, false) != 0)
					{
						if (MISC::GET_DISTANCE_BETWEEN_COORDS(Param0 + Param1 / Vector(2f, 2f, 2f), ENTITY::GET_ENTITY_COORDS(iVar0, true), true) < 20f)
						{
							bVar1 = true;
							bVar2 = false;
						}
					}
				}
			}
			if (bParam8)
			{
				if (func_255(iVar0, __LIB_18__::func_173(), 1))
				{
					bVar1 = false;
				}
			}
			if (bVar1)
			{
				if (!__LIB_0__::func_79(Param5))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
					{
						iVar7 = ENTITY::GET_ENTITY_MODEL(iVar0);
						VEHICLE::GET_VEHICLE_SIZE(iVar0, &Var4, &Var5);
						if (VEHICLE::IS_THIS_MODEL_A_HELI(iVar7))
						{
							Param5.f_0 = (Param5.f_0 + 3f);
							Param5.f_1 = (Param5.f_1 + 3f);
						}
						if (((iVar7 == joaat("zentorno") || iVar7 == joaat("btype")) || iVar7 == joaat("dubsta3")) || iVar7 == joaat("monster"))
						{
							Param5 = { Param5 * Vector(1.1f, 1.1f, 1.1f) };
						}
						else if (iVar7 == joaat("t20") || iVar7 == joaat("virgo"))
						{
							Param5 = { Param5 * Vector(1.2f, 1.2f, 1.2f) };
						}
						if ((Var5.f_0 - Var4.f_0) > Param5.f_0)
						{
							bVar2 = false;
						}
						else if ((Var5.f_1 - Var4.f_1) > Param5.f_1)
						{
							bVar2 = false;
						}
						else if ((Var5.f_2 - Var4.f_2) > Param5.f_2)
						{
							bVar2 = false;
						}
					}
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
				{
					if (bVar2)
					{
						MISC::CLEAR_AREA_OF_VEHICLES(Param3, 5f, false, false, false, false, false, false, 0);
						ENTITY::SET_ENTITY_HEADING(iVar0, fParam4);
						ENTITY::SET_ENTITY_COORDS(iVar0, Param3, true, false, false, true);
						VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar0, 5f);
						if (bParam9)
						{
							VEHICLE::SET_VEHICLE_ENGINE_ON(iVar0, false, true, false);
							VEHICLE::SET_VEHICLE_DOORS_SHUT(iVar0, true);
						}
					}
					else
					{
						if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar0) || !ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iVar0, true))
						{
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, true);
						}
						if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar0, false))
						{
							ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(iVar0, true), true, false, false, true);
						}
						VEHICLE::DELETE_VEHICLE(&iVar0);
					}
				}
			}
			if (bParam6)
			{
				MISC::CLEAR_ANGLED_AREA_OF_VEHICLES(Param0, Param1, fParam2, false, false, false, false, false, 0, 0);
			}
			if (iVar3 == 1)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iVar0))
				{
					if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar0))
					{
						ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iVar0);
					}
				}
			}
		}
		else
		{
			if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar0))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, false);
			}
			iVar8 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1, false);
			if (ENTITY::DOES_ENTITY_EXIST(iVar8) && !PED::IS_PED_INJURED(iVar8))
			{
				ENTITY::SET_ENTITY_COORDS(iVar8, ENTITY::GET_ENTITY_COORDS(iVar8, true), true, false, false, true);
			}
			iVar9 = VEHICLE::GET_VEHICLE_MODEL_NUMBER_OF_SEATS(ENTITY::GET_ENTITY_MODEL(iVar0));
			if (iVar9 <= 2)
			{
				iVar8 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, 0, false);
				if (ENTITY::DOES_ENTITY_EXIST(iVar8) && !PED::IS_PED_INJURED(iVar8))
				{
					ENTITY::SET_ENTITY_COORDS(iVar8, ENTITY::GET_ENTITY_COORDS(iVar8, true), true, false, false, true);
				}
			}
			if (iVar9 <= 4)
			{
				iVar8 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, 1, false);
				if (ENTITY::DOES_ENTITY_EXIST(iVar8) && !PED::IS_PED_INJURED(iVar8))
				{
					ENTITY::SET_ENTITY_COORDS(iVar8, ENTITY::GET_ENTITY_COORDS(iVar8, true), true, false, false, true);
				}
				iVar8 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, 2, false);
				if (ENTITY::DOES_ENTITY_EXIST(iVar8) && !PED::IS_PED_INJURED(iVar8))
				{
					ENTITY::SET_ENTITY_COORDS(iVar8, ENTITY::GET_ENTITY_COORDS(iVar8, true), true, false, false, true);
				}
			}
			VEHICLE::DELETE_VEHICLE(&iVar0);
		}
	}
}

void func_292()//Position - 0x2E64D
{
	int iVar0;
	iVar0 = func_202();
	if (iVar0 == -1)
	{
		return;
	}
	Global_112473[iVar0 /*10*/] = 1;
}

void func_302()//Position - 0x2EA35
{
	if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
	{
		__LIB_24__::func_930();
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
		if (iLocal_88 == 0)
		{
			if (__LIB_0__::func_121(iLocal_83))
			{
				if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), iLocal_83, 1) < 4f || (ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) > 2f && __LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), iLocal_83, 1) < 6f))
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
					TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
					iLocal_88 = 1;
				}
			}
		}
	}
}

void func_304(char* sParam0, bool bParam1)//Position - 0x2EB09
{
	func_305(bParam1);
	CUTSCENE::REQUEST_CUTSCENE(sParam0, 8);
}

void func_305(bool bParam0)//Position - 0x2EB1F
{
	int iVar0;
	iVar0 = PLAYER::GET_PLAYER_INDEX();
	if (!PLAYER::IS_PLAYER_DEAD(iVar0))
	{
		if (bParam0)
		{
		}
		PLAYER::SET_PLAYER_CONTROL(iVar0, bParam0, 16);
		PLAYER::SET_PLAYER_CONTROL(iVar0, bParam0, 32);
	}
	func_217(1, 1, 0, 0, 0, 0, 0);
}

void func_315(struct<6> Param0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x2ED91
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<2> Var4;
	float fVar5;
	float fVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	var uVar10;
	int iVar11;
	if (Global_78573 != 6)
	{
		if (Global_78575 == -1)
		{
			if (__LIB_18__::func_174(1, Param0))
			{
				if (Global_78576 == 3)
				{
					fVar0 = 1.5f;
				}
				else
				{
					fVar0 = 2.5f;
				}
				if (fLocal_21 > fVar0)
				{
					Global_78575 = MISC::GET_GAME_TIMER();
					Local_22 = { HUD::GET_HUD_COMPONENT_POSITION(15) };
					fLocal_21 = 0f;
				}
				else
				{
					fLocal_21 = (fLocal_21 + MISC::GET_FRAME_TIME());
				}
			}
			else
			{
				fLocal_21 = 0f;
			}
		}
		else
		{
			if (!__LIB_18__::func_174(0, Param0))
			{
				Global_78575 = (MISC::GET_GAME_TIMER() - 9000);
			}
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(6);
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
			iVar1 = (MISC::GET_GAME_TIMER() - Global_78575);
			if (iVar1 < 9000 && !CAM::IS_SCREEN_FADED_OUT())
			{
				iVar2 = 255;
				if (iVar1 < 1000)
				{
					iVar2 = SYSTEM::CEIL(((SYSTEM::TO_FLOAT(iVar1) / 1000f) * 255f));
				}
				else
				{
					iVar3 = (9000 - iVar1);
					if (iVar3 < 1000)
					{
						iVar2 = SYSTEM::CEIL(((SYSTEM::TO_FLOAT(iVar3) / 1000f) * 255f));
					}
				}
				switch (Global_78573)
				{
					case 3:
					case 5:
						if (iParam1 == 1)
						{
							fVar5 = 0f;
							fVar6 = -0.07f;
						}
						else if (iParam2 == 1)
						{
							fVar5 = 0f;
							fVar6 = -0.077f;
						}
						else if (iParam3 == 1)
						{
							fVar5 = 0f;
							fVar6 = -0.05f;
						}
						else if (iParam4 == 1)
						{
							fVar5 = 0f;
							fVar6 = -0.035f;
						}
						else
						{
							fVar5 = 0f;
							fVar6 = -0.014f;
						}
						break;
					default:
						fVar5 = 0f;
						fVar6 = -0.014f;
						break;
				}
				GRAPHICS::SET_SCRIPT_GFX_ALIGN(82, 66);
				HUD::SET_TEXT_FONT(1);
				HUD::SET_TEXT_JUSTIFICATION(2);
				iVar11 = __LIB_18__::func_173();
				if (Global_78576 == 1 && Global_78574 == 62)
				{
					iVar11 = Global_113386.f_2363.f_539.f_4322;
				}
				switch (iVar11)
				{
					case 0:
						HUD::GET_HUD_COLOUR(143, &iVar7, &iVar8, &iVar9, &uVar10);
						break;
					case 1:
						HUD::GET_HUD_COLOUR(144, &iVar7, &iVar8, &iVar9, &uVar10);
						break;
					case 2:
						HUD::GET_HUD_COLOUR(145, &iVar7, &iVar8, &iVar9, &uVar10);
						break;
					default:
						iVar7 = 240;
						iVar8 = 200;
						iVar9 = 80;
				}
				HUD::SET_TEXT_COLOUR(iVar7, iVar8, iVar9, iVar2);
				HUD::SET_TEXT_DROP_SHADOW();
				Var4 = { __LIB_18__::func_167(Global_78574, Global_78576, iParam5) };
				if (fVar6 == -0.014f)
				{
				}
				GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(fVar5, fVar6, 0f, 0.01f);
				HUD::SET_TEXT_SCALE(0.67f, 0.67f);
				if (!GRAPHICS::GET_IS_WIDESCREEN() && !GRAPHICS::GET_IS_HIDEF())
				{
					fLocal_24 = 0.14f;
				}
				else
				{
					fLocal_24 = 0.17f;
				}
				if (fVar6 == -0.014f)
				{
					if (__LIB_0__::func_95(&Var4) > fLocal_24)
					{
						if (HUD::IS_HUD_COMPONENT_ACTIVE(15))
						{
							HUD::SET_HUD_COMPONENT_POSITION(15, Local_22.f_0, (Local_22.f_1 + fLocal_23));
							Global_78578 = 1;
						}
					}
				}
				HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&Var4);
				HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fVar5, fVar6, 0);
				GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
				if (Global_78577 == 1)
				{
					__LIB_0__::func_50();
					fLocal_21 = 0f;
				}
			}
			else
			{
				__LIB_0__::func_50();
				fLocal_21 = 0f;
			}
		}
	}
}

void func_332()//Position - 0x2F7BE
{
	if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
	{
		STREAMING::NEW_LOAD_SCENE_STOP();
	}
	func_292();
	__LIB_0__::func_80(&Local_82, 0, 0, 0);
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_334(var uParam0, bool bParam1)//Position - 0x2F802
{
	func_335(&(uParam0->f_41), bParam1);
}

void func_335(var uParam0, bool bParam1)//Position - 0x2F814
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		if (bParam1)
		{
			__LIB_0__::func_81(uParam0[iVar0]);
		}
		else
		{
			__LIB_0__::func_122(uParam0[iVar0], 0);
		}
		iVar0++;
	}
}

void func_346(bool bParam0)//Position - 0x2FAA8
{
	int iVar0;
	__LIB_26__::func_260();
	if (!__LIB_0__::func_134())
	{
		iVar0 = func_202();
		if (iVar0 == -1)
		{
			return;
		}
		if (!Global_112473[iVar0 /*10*/].f_4)
		{
			return;
		}
		if (Global_112473[iVar0 /*10*/].f_5)
		{
			return;
		}
		if (Global_112473[iVar0 /*10*/].f_6)
		{
			return;
		}
		if (Global_94616 == Global_100478)
		{
			Global_113386.f_18574[iVar0 /*6*/].f_4++;
		}
		Global_94616 = Global_100478;
		if (bParam0)
		{
			__LIB_0__::func_44(iVar0, 1, 0);
			__LIB_0__::func_86(SCRIPT::GET_THIS_SCRIPT_NAME(), iVar0);
		}
		else
		{
			if (Global_112473[iVar0 /*10*/].f_9 == -1)
			{
			}
			else
			{
				__LIB_0__::func_56(&(Global_112473[iVar0 /*10*/].f_9));
			}
			__LIB_0__::func_43(iVar0, 1, 1, 0);
		}
		Global_112473[iVar0 /*10*/].f_6 = 1;
	}
}

int func_348(char* sParam0, int iParam1, int iParam2)//Position - 0x2FBA0
{
	int iVar0;
	struct<32> Var1;
	int iVar2;
	func_18();
	__LIB_0__::func_133();
	Global_100441 = 0;
	StringCopy(&(Global_100441.f_3), sParam0, 32);
	Global_100441.f_11 = iParam1;
	MISC::PAUSE_DEATH_ARREST_RESTART(true);
	MISC::SET_FADE_OUT_AFTER_ARREST(false);
	MISC::SET_FADE_OUT_AFTER_DEATH(false);
	__LIB_6__::func_849(1);
	__LIB_8__::func_770(1);
	__LIB_0__::func_91(0);
	__LIB_0__::func_129(1);
	MISC::CLEAR_BIT(&(Global_100441.f_20), 9);
	MISC::CLEAR_BIT(&(Global_100441.f_20), 6);
	MISC::CLEAR_BIT(&(Global_100441.f_20), 20);
	MISC::CLEAR_BIT(&(Global_100441.f_20), 21);
	MISC::CLEAR_BIT(&(Global_100441.f_20), 5);
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
				if (ENTITY::IS_ENTITY_UPSIDEDOWN(iVar0))
				{
					MISC::SET_BIT(&(Global_100441.f_20), 5);
				}
			}
		}
	}
	HUD::CLEAR_HELP(true);
	HUD::CLEAR_PRINTS();
	__LIB_0__::func_90(0);
	__LIB_0__::func_6(1);
	Global_100441.f_2 = Global_100478;
	if (__LIB_18__::func_170())
	{
		if (__LIB_0__::func_127())
		{
			if (Global_100478 >= func_350())
			{
				if (!BitTest(Global_91229[iParam2 /*34*/].f_15, 16))
				{
					if (Global_113386.f_9085.f_330[iParam2 /*6*/].f_1 >= 2)
					{
						Global_94617 = 1;
					}
				}
			}
		}
		else if (Global_100441.f_11 == 6)
		{
			__LIB_18__::func_169(iParam2, &Var1);
			if (Var1.f_31 == 1)
			{
				if (Global_113386.f_18574[iParam2 /*6*/].f_4 >= 2)
				{
					Global_94617 = 1;
				}
			}
		}
		else
		{
			iVar2 = __LIB_0__::func_87(SCRIPT::GET_THIS_SCRIPT_NAME());
			if (iVar2 > -1)
			{
				if (Global_113386.f_24986.f_4[iVar2] >= 2)
				{
					Global_94617 = 1;
				}
			}
		}
	}
	return 1;
}

int func_350()//Position - 0x2FD85
{
	int iVar0;
	int iVar1;
	iVar0 = __LIB_0__::func_88(&(Global_100441.f_3), 0);
	iVar1 = 0;
	if (iVar0 == 53)
	{
		iVar1 = 1;
	}
	return iVar1;
}

void func_366(var uParam0)//Position - 0x30145
{
	__LIB_0__::func_93(&(uParam0->f_28));
	__LIB_0__::func_93(&(uParam0->f_35));
	__LIB_0__::func_93(&(uParam0->f_41));
}

