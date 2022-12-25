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
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	struct<2> Local_28 = { 0, 0 } ;
	struct<2> Local_29[94];
	struct<4> Local_30 = { 0, 0, 0, 0 } ;
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
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	if (Global_2883694)
	{
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(-43879923) == 0)
		{
			SCRIPT::REQUEST_SCRIPT_WITH_NAME_HASH(-43879923);
			while (!SCRIPT::HAS_SCRIPT_WITH_NAME_HASH_LOADED(-43879923))
			{
				SYSTEM::WAIT(0);
			}
			SYSTEM::START_NEW_SCRIPT_WITH_NAME_HASH_AND_ARGS(-43879923, &ScriptParam_30, 4, 1424);
		}
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	else if (Global_2883693)
	{
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(1179280373) == 0)
		{
			SCRIPT::REQUEST_SCRIPT_WITH_NAME_HASH(1179280373);
			while (!SCRIPT::HAS_SCRIPT_WITH_NAME_HASH_LOADED(1179280373))
			{
				SYSTEM::WAIT(0);
			}
			SYSTEM::START_NEW_SCRIPT_WITH_NAME_HASH_AND_ARGS(1179280373, &ScriptParam_30, 4, 1424);
		}
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(2))
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	switch (ScriptParam_30.f_0)
	{
		case 1:
			switch (ScriptParam_30.f_1)
			{
				case 75:
					if (ScriptParam_30.f_2 == 5)
					{
						func_82(1, 0, 1);
						func_81();
					}
					else if (ScriptParam_30.f_2 == 76)
					{
						func_81();
					}
					else
					{
						func_82(1, 1, 0);
					}
					break;
				case 133:
					if (ScriptParam_30.f_2 == 76)
					{
						func_81();
					}
					else
					{
						func_82(7, 1, 0);
					}
					break;
				case 76:
					func_32(ScriptParam_30.f_3, 0);
					break;
				case 52:
					if (ScriptParam_30.f_2 == 52)
					{
						HUD::SET_SAVEGAME_LIST_UNIQUE_ID(ScriptParam_30.f_3);
					}
					break;
				case 154:
					if (ScriptParam_30.f_2 == 154)
					{
						HUD::SET_SAVEGAME_LIST_UNIQUE_ID(ScriptParam_30.f_3);
					}
					break;
				default:
					func_31(1);
					if ((ScriptParam_30.f_1 == 26 || ScriptParam_30.f_1 == 25) || ScriptParam_30.f_1 == 153)
					{
						func_29(0, 1);
						func_28(2, 0);
						func_81();
						Global_78568 = 0;
						func_27(-1);
					}
					else if (ScriptParam_30.f_1 == 5)
					{
						if (ScriptParam_30.f_2 == 75 || ScriptParam_30.f_2 == 133)
						{
						}
						else
						{
							func_29(0, 1);
						}
					}
					else
					{
						func_29(0, 1);
						func_28(2, 0);
						if (!ScriptParam_30.f_1 == 52 && !ScriptParam_30.f_1 == 154)
						{
							func_28(1, 0);
						}
						Global_78568 = 0;
						func_27(-1);
					}
					break;
			}
			break;
		case 2:
			switch (ScriptParam_30.f_1)
			{
				case 5:
					switch (Global_78568)
					{
						case 1:
							func_82(1, 1, 0);
							break;
						case 7:
							func_82(7, 1, 0);
							break;
					}
					break;
				case 75:
					func_2(1, 0);
					break;
				case 133:
					func_2(7, 0);
					break;
				case 76:
					if (Global_78585 != -1)
					{
						func_1(Global_78585, Global_78568);
						func_27(-1);
						HUD::SET_FRONTEND_ACTIVE(false);
						CAM::DO_SCREEN_FADE_OUT(0);
						REPLAY::REPLAY_CONTROL_SHUTDOWN();
						if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false))
							{
								Global_78570 = { ENTITY::GET_ENTITY_VELOCITY(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)) };
							}
						}
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), true);
						}
					}
					break;
			}
			break;
	}
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_1(int iParam0, int iParam1)//Position - 0x320
{
	Global_78565 = iParam0;
	Global_78565.f_1 = iParam1;
	if (iParam1 == 7)
	{
		if (iParam0 >= 0 && iParam0 < 63)
		{
			Global_112473[iParam0 /*10*/].f_3 = 1;
		}
	}
	MISC::SET_BIT(&Global_78567, 0);
}

void func_2(int iParam0, int iParam1)//Position - 0x361
{
	if (func_8() == -1)
	{
		if (func_5(iParam0))
		{
			func_4(2);
			func_32(Global_78585, iParam1);
			func_3(1);
		}
	}
}

void func_3(bool bParam0)//Position - 0x395
{
	func_28(1, bParam0);
	func_28(2, bParam0);
}

int func_4(int iParam0)//Position - 0x3AB
{
	HUD::REQUEST_ADDITIONAL_TEXT("MISHSTA", 8);
	if (!HUD::HAS_ADDITIONAL_TEXT_LOADED(8))
	{
		return 0;
	}
	iParam0++;
	return 1;
}

int func_5(int iParam0)//Position - 0x3D0
{
	switch (iParam0)
	{
		case 1:
			return func_7();
			break;
		case 7:
			return func_6();
			break;
		default:
			break;
	}
	return 0;
}

int func_6()//Position - 0x403
{
	if (Global_113386.f_18574.f_380 > 0)
	{
		return 1;
	}
	return 0;
}

int func_7()//Position - 0x41E
{
	if (Global_2883694)
	{
		if (Global_3407872.f_931.f_21 > 0)
		{
			return 1;
		}
		return 0;
	}
	else if (Global_2883693)
	{
		if (Global_3932160.f_931.f_21 > 0)
		{
			return 1;
		}
		return 0;
	}
	else if (Global_113386.f_10016.f_21 > 0)
	{
		return 1;
	}
	return 0;
}

int func_8()//Position - 0x476
{
	if (__LIB_13__::func_94())
	{
		if (__LIB_0__::func_39(14))
		{
			return 5;
		}
		return 0;
	}
	if (Global_78579 == 1)
	{
		return 0;
	}
	if (Global_2883694)
	{
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(-1516147206) > 0)
		{
			return 0;
		}
	}
	else if (Global_2883693)
	{
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(2006115718) > 0)
		{
			return 0;
		}
	}
	else if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("mission_stat_watcher")) > 0)
	{
		return 0;
	}
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("creator")) > 0)
	{
		return 1;
	}
	if (__LIB_0__::func_2(0))
	{
		return 0;
	}
	if (__LIB_0__::func_703(Global_112411, 256))
	{
		return 2;
	}
	if (__LIB_15__::func_217())
	{
		return 2;
	}
	if (__LIB_15__::func_216())
	{
		return 3;
	}
	if (__LIB_15__::func_215())
	{
		return 3;
	}
	if (__LIB_0__::func_719())
	{
		return 3;
	}
	if (__LIB_16__::func_292())
	{
		return 3;
	}
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() || __LIB_0__::func_217())
	{
		return 2;
	}
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 207.43358f, -1019.7954f, -100.47276f, 189.93378f, -1019.6235f, -95.56883f, 17.1875f, false, true, 0) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
			{
				return 3;
			}
		}
	}
	if (Global_78317)
	{
		return 2;
	}
	if (Global_77137.f_577)
	{
		return 4;
	}
	return -1;
}

void func_27(int iParam0)//Position - 0xCA6
{
	Global_78585 = iParam0;
}

void func_28(int iParam0, bool bParam1)//Position - 0xCB4
{
	if (bParam1 == 1)
	{
		func_29(0, 1);
	}
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("SHOW_COLUMN");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam0);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bParam1);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_29(bool bParam0, int iParam1)//Position - 0xCE3
{
	char* sVar0;
	char* sVar1;
	int iVar2;
	int iVar3;
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("SHOW_WARNING_MESSAGE");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bParam0);
	iVar3 = func_8();
	if (iVar3 != -1)
	{
		iVar2 = 1;
		sVar1 = "PM_RP_HELPT" /* GXT: Replay */;
		if (iParam1 == 1)
		{
			switch (iVar3)
			{
				case 0:
					sVar0 = "PM_RPB_SM_1" /* GXT: Replay is unavailable while on a Mission. Once you have passed the current Mission, you will be able to try it again and aim to reach the Gold standard.~n~~n~If you are a Social Club member, Mission stats are recorded on the leaderboards on the Social Club website where you can see how you stack up against friends and Crewmates. Visit ~HUD_COLOUR_SOCIAL_CLUB~www.rockstargames.com/socialclub~s~ to view leaderboards and in-depth career stats. */;
					break;
				case 2:
					sVar0 = "PM_RPB_SM_2" /* GXT: Replay is unavailable while viewing a cutscene.~n~~n~If you are a Social Club member, Mission stats are recorded on the leaderboards on the Social Club website where you can see how you stack up against friends and Crewmates. Visit ~HUD_COLOUR_SOCIAL_CLUB~www.rockstargames.com/socialclub~s~ to view leaderboards and in-depth career stats. */;
					break;
				case 3:
					sVar0 = "PM_RPB_SM_3" /* GXT: Replay is unavailable while browsing in a shop.~n~~n~If you are a Social Club member, Mission stats are recorded on the leaderboards on the Social Club website where you can see how you stack up against friends and Crewmates. Visit ~HUD_COLOUR_SOCIAL_CLUB~www.rockstargames.com/socialclub~s~ to view leaderboards and in-depth career stats. */;
					break;
				case 1:
					sVar0 = "PM_RPB_SM_4" /* GXT: Replay is unavailable while the Creator is running.~n~~n~If you are a Social Club member, Mission stats are recorded on the leaderboards on the Social Club website where you can see how you stack up against friends and Crewmates. Visit ~HUD_COLOUR_SOCIAL_CLUB~www.rockstargames.com/socialclub~s~ to view leaderboards and in-depth career stats. */;
					break;
				case 4:
					sVar0 = "PM_RPB_SM_5" /* GXT: Replay is unavailable from this location.~n~~n~If you are a Social Club member, Mission stats are recorded on the leaderboards on the Social Club website where you can see how you stack up against friends and Crewmates. Visit ~HUD_COLOUR_SOCIAL_CLUB~www.rockstargames.com/socialclub~s~ to view leaderboards and in-depth career stats. */;
					break;
				case 5:
					sVar0 = "PM_RPB_SM_6" /* GXT: Replay is unavailable while Director Mode is running. Once you have exited Director Mode, you will be able to replay missions and aim to reach the Gold standard.~n~~n~If you are a Social Club member, Mission stats are recorded on the leaderboards on the Social Club website where you can see how you stack up against friends and Crewmates. Visit ~HUD_COLOUR_SOCIAL_CLUB~www.rockstargames.com/socialclub~s~ to view leaderboards and in-depth career stats. */;
					break;
				default:
					break;
			}
		}
		else
		{
			switch (iVar3)
			{
				case 0:
					sVar0 = "PM_RPB_RC_1" /* GXT: Replay is unavailable while on a Mission. Once you have passed the current Mission, you will be able to try it again and aim to reach the Gold standard.~n~~n~If you are a Social Club member, you can see which Strangers and Freaks you are yet to meet and see how you stack up against your friends and Crewmates. Visit ~HUD_COLOUR_SOCIAL_CLUB~www.rockstargames.com/socialclub~s~ for more information and to view in-depth career stats. */;
					break;
				case 2:
					sVar0 = "PM_RPB_RC_2" /* GXT: Replay is unavailable while viewing a cutscene.~n~~n~If you are a Social Club member, you can see which Strangers and Freaks you are yet to meet and see how you stack up against your friends and Crewmates. Visit ~HUD_COLOUR_SOCIAL_CLUB~www.rockstargames.com/socialclub~s~ for more information and to view in-depth career stats. */;
					break;
				case 3:
					sVar0 = "PM_RPB_RC_3" /* GXT: Replay is unavailable while browsing in a shop.~n~~n~If you are a Social Club member, you can see which Strangers and Freaks you are yet to meet and see how you stack up against your friends and Crewmates. Visit ~HUD_COLOUR_SOCIAL_CLUB~www.rockstargames.com/socialclub~s~ for more information and to view in-depth career stats. */;
					break;
				case 1:
					sVar0 = "PM_RPB_RC_4" /* GXT: Replay is unavailable while the Creator is running.~n~~n~If you are a Social Club member, you can see which Strangers and Freaks you are yet to meet and see how you stack up against your friends and Crewmates. Visit ~HUD_COLOUR_SOCIAL_CLUB~www.rockstargames.com/socialclub~s~ for more information and to view in-depth career stats. */;
					break;
				case 4:
					sVar0 = "PM_RPB_RC_5" /* GXT: Replay is unavailable from this location.~n~~n~If you are a Social Club member, you can see which Strangers and Freaks you are yet to meet and see how you stack up against your friends and Crewmates. Visit ~HUD_COLOUR_SOCIAL_CLUB~www.rockstargames.com/socialclub~s~ for more information and to view in-depth career stats. */;
					break;
				case 5:
					sVar0 = "PM_RPB_RC_6" /* GXT: Replay is unavailable while Director Mode is running. Once you have exited Director Mode, you will be able to replay missions and aim to reach the Gold standard.~n~~n~If you are a Social Club member, you can see which Strangers and Freaks you are yet to meet and see how you stack up against your friends and Crewmates. Visit ~HUD_COLOUR_SOCIAL_CLUB~www.rockstargames.com/socialclub~s~ for more information and to view in-depth career stats. */;
					break;
				default:
					break;
				}
		}
	}
	else if (func_5(iParam1))
	{
		iVar2 = 1;
		if (iParam1 == 1)
		{
			sVar1 = "PM_RP_HELPT" /* GXT: Replay */;
			sVar0 = "PM_RP_HELP" /* GXT: Replay Missions you've passed and try to reach the Gold standard for each. Aim to reach Gold in a single attempt, or work towards it one objective at a time.~n~~n~If you are a Social Club member, Mission stats are recorded on the leaderboards on the Social Club website where you can see how you stack up against friends and Crewmates. Visit ~HUD_COLOUR_SOCIAL_CLUB~www.rockstargames.com/socialclub~s~ to view leaderboards and in-depth career stats. */;
		}
		else
		{
			sVar1 = "PM_RP_HELPT3" /* GXT: Replay */;
			sVar0 = "PM_RP_HELP3" /* GXT: Select an encounter with Strangers and Freaks to replay.~n~~n~If you are a Social Club member, you can see which Strangers and Freaks you are yet to meet and see how you stack up against your friends and Crewmates. Visit ~HUD_COLOUR_SOCIAL_CLUB~www.rockstargames.com/socialclub~s~ for more information and to view in-depth career stats. */;
		}
	}
	else
	{
		iVar2 = 1;
		if (iParam1 == 1)
		{
			sVar1 = "PM_RP_HELPT1" /* GXT: Replay */;
			sVar0 = "PM_RP_HELP1" /* GXT: There are currently no Missions available to replay. Once you have played some Missions you will be able to try them again and aim to reach the Gold standard in each.~n~~n~If you are a Social Club member, Mission stats are recorded on the leaderboards on the Social Club website where you can see how you stack up against friends and Crewmates. Visit ~HUD_COLOUR_SOCIAL_CLUB~www.rockstargames.com/socialclub~s~ to view leaderboards and in-depth career stats. */;
		}
		else
		{
			sVar1 = "PM_RP_HELPT3" /* GXT: Replay */;
			sVar0 = "PM_RP_HELP4" /* GXT: There are currently no encounters with Strangers and Freaks available to replay.~n~~n~If you are a Social Club member, you can see which Strangers and Freaks you are yet to meet and see how you stack up against your friends and Crewmates. Visit ~HUD_COLOUR_SOCIAL_CLUB~www.rockstargames.com/socialclub~s~ for more information and to view in-depth career stats. */;
		}
	}
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar2);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT((3 - iVar2));
	__LIB_0__::func_610(sVar0);
	__LIB_0__::func_610(sVar1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
	__LIB_0__::func_610("");
	__LIB_0__::func_610("");
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_31(int iParam0)//Position - 0xE76
{
	if (iParam0 == 1)
	{
		HUD::PAUSE_MENU_DEACTIVATE_CONTEXT(joaat("HIDE_ACCEPTBUTTON"));
	}
	else
	{
		HUD::PAUSE_MENU_ACTIVATE_CONTEXT(joaat("HIDE_ACCEPTBUTTON"));
	}
	HUD::PAUSE_MENU_REDRAW_INSTRUCTIONAL_BUTTONS(0);
}

void func_32(int iParam0, int iParam1)//Position - 0xE9E
{
	if (func_8() == -1)
	{
		if (func_5(Global_78568))
		{
			func_27(iParam0);
			func_46(iParam0);
			if (Global_78569 > 16)
			{
				if (iParam1 == 0)
				{
					func_35();
				}
				func_33(func_34(iParam0), Global_78569);
			}
		}
	}
}

void func_33(int iParam0, int iParam1)//Position - 0xEEC
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("SET_COLUMN_SCROLL");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam0);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(-1);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

int func_34(int iParam0)//Position - 0xF17
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= (94 - 1))
	{
		if (Local_29[iVar0 /*2*/] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_35()//Position - 0xF45
{
	switch (Global_78568)
	{
		case 1:
			Global_78569 = __LIB_43__::func_524(&Local_29, 1, 0, 1);
			break;
		case 7:
			Global_78569 = __LIB_43__::func_524(&Local_29, 0, 1, 1);
			break;
		default:
			break;
	}
}

void func_46(int iParam0)//Position - 0x1637
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	Local_28 = { func_78(iParam0, Global_78568) };
	if (!func_4(2))
	{
		return;
	}
	func_77(2);
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("SET_COLUMN_TITLE");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
	__LIB_0__::func_610("MISSTA" /* GXT: Mission Stats */);
	__LIB_0__::func_610(&Local_28);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	iVar1 = -333;
	iVar2 = -333;
	iVar3 = 0;
	iVar4 = 0;
	iVar0 = 0;
	while (iVar0 < __LIB_42__::func_519(iParam0, Global_78568))
	{
		iVar5 = __LIB_42__::func_518(iParam0, Global_78568, iVar0);
		iVar6 = 1;
		switch (iVar5)
		{
			case 42:
			case 55:
			case 85:
			case 70:
			case 101:
				iVar6 = 0;
				iVar2 = __LIB_42__::func_517(iVar5);
				if (iVar2 >= 2147483647)
				{
					iVar2 = 1;
				}
				break;
			case 84:
			case 100:
			case 69:
			case 41:
			case 54:
				iVar6 = 0;
				iVar1 = __LIB_42__::func_517(iVar5);
				if (iVar1 >= 2147483647)
				{
					iVar1 = 50;
				}
				break;
		}
		if (!Global_63379[iVar5 /*13*/].f_7 && iVar6)
		{
			if (func_53(iVar5, iVar3, 0))
			{
				iVar4++;
			}
			iVar3++;
		}
		iVar0++;
	}
	func_52(iParam0, &iVar2);
	func_48(iVar4, iVar3, 0, iVar1, iVar2);
	__LIB_37__::func_521(2);
}

float func_48(int iParam0, int iParam1, bool bParam2, int iParam3, int iParam4)//Position - 0x1798
{
	float fVar0;
	int iVar1;
	fVar0 = __LIB_38__::func_53(iParam0, iParam1, 0);
	iVar1 = __LIB_38__::func_52(fVar0);
	if (bParam2)
	{
		fVar0 = 50f;
		iVar1 = 1;
	}
	if (iParam4 > -1)
	{
		iVar1 = iParam4;
	}
	if (iParam3 > -1)
	{
		fVar0 = SYSTEM::TO_FLOAT(iParam3);
	}
	if (iVar1 == 0)
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("SET_DESCRIPTION");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fVar0);
		__LIB_0__::func_610("MTPHPER");
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
	else
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("SET_DESCRIPTION");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(__LIB_38__::func_563(iVar1));
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fVar0);
		switch (__LIB_38__::func_563(iVar1))
		{
			case 109:
				__LIB_0__::func_610("MTPHPER_G");
				break;
			case 108:
				__LIB_0__::func_610("MTPHPER_S");
				break;
			case 107:
				__LIB_0__::func_610("MTPHPER_B");
				break;
		}
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
	return fVar0;
}

void func_52(int iParam0, int iParam1)//Position - 0x193A
{
	int iVar0;
	if (Global_78568 == 7)
	{
		iVar0 = iParam0;
		switch (iVar0)
		{
			case 52:
				*iParam1 = Global_113386.f_2352[0 /*2*/];
				if (*iParam1 == 0)
				{
					*iParam1 = 1;
				}
				break;
			case 53:
				*iParam1 = Global_113386.f_2352[1 /*2*/];
				if (*iParam1 == 0)
				{
					*iParam1 = 1;
				}
				break;
			case 54:
				*iParam1 = Global_113386.f_2352[2 /*2*/];
				if (*iParam1 == 0)
				{
					*iParam1 = 1;
				}
				break;
			case 55:
				*iParam1 = Global_113386.f_2352[3 /*2*/];
				if (*iParam1 == 0)
				{
					*iParam1 = 1;
				}
				break;
			case 56:
				*iParam1 = Global_113386.f_2352[4 /*2*/];
				if (*iParam1 == 0)
				{
					*iParam1 = 1;
				}
				break;
			}
	}
}

int func_53(int iParam0, int iParam1, int iParam2)//Position - 0x19FA
{
	struct<13> Var0;
	int iVar1;
	int iVar2;
	char* sVar3;
	if (iParam2 != 0)
	{
		if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iParam2))
		{
			return 0;
		}
	}
	if (Global_63379[iParam0 /*13*/].f_7)
	{
		return 1;
	}
	Var0 = { Global_63379[iParam0 /*13*/] };
	iVar1 = __LIB_42__::func_516(iParam0);
	switch (iParam0)
	{
		case 38:
		case 40:
		case 41:
		case 42:
		case 52:
		case 54:
		case 55:
		case 56:
		case 66:
		case 68:
		case 69:
		case 70:
		case 81:
		case 83:
		case 84:
		case 85:
		case 97:
		case 99:
		case 100:
		case 101:
			iVar1 = -1;
			break;
	}
	iVar2 = __LIB_42__::func_517(iParam0);
	sVar3 = __LIB_38__::func_564(iParam0);
	if (iVar2 == -1)
	{
		func_61(iVar2, iParam1, 0, sVar3, iParam0, iParam2);
		iVar1 = 0;
	}
	else
	{
		switch (Var0.f_0)
		{
			case 1:
				func_60(iVar2, iParam1, iVar1, "MTTIME", iParam0, iParam2);
				break;
			case 2:
				func_60(iVar2, iParam1, iVar1, sVar3, iParam0, iParam2);
				break;
			case 3:
				func_59(iParam1, iVar1, sVar3, iParam0, iParam2);
				break;
			case 17:
			case 4:
				func_60(iVar2, iParam1, iVar1, sVar3, iParam0, iParam2);
				break;
			case 5:
				func_58(iVar2, Var0.f_2, iParam1, iVar1, sVar3, iParam0, iParam2);
				break;
			case 6:
				func_59(iParam1, iVar1, sVar3, iParam0, iParam2);
				break;
			case 7:
				func_57(iVar2, Var0.f_2, iParam1, iVar1, sVar3, iParam0, iParam2);
				break;
			case 8:
				func_57(iVar2, Var0.f_2, iParam1, iVar1, sVar3, iParam0, iParam2);
				break;
			case 9:
				func_58(iVar2, 100, iParam1, iVar1, sVar3, iParam0, iParam2);
				break;
			case 16:
			case 10:
			case 14:
			case 15:
				func_56(iVar2, iParam1, iVar1, sVar3, iParam0, iParam2);
				break;
			case 11:
				func_58(iVar2, 100, iParam1, iVar1, sVar3, iParam0, iParam2);
				break;
			case 12:
			case 13:
				func_54(iVar2, iParam1, iVar1, sVar3, iParam0, iParam2);
				break;
			case 0:
				break;
			}
	}
	if (iVar1 == 0)
	{
		return 0;
	}
	return 1;
}

void func_54(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0x1C60
{
	if (iParam5 != 0)
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam5, "SET_DATA_SLOT");
	}
	else
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("SET_DATA_SLOT");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
	}
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(6);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam0);
	if (iParam5 == 0)
	{
		GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("PM_RP_STATD" /* GXT: ~a~~n~~a~ */);
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam3);
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(func_55(iParam4));
		GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	}
	else
	{
		__LIB_0__::func_610(sParam3);
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

char* func_55(int iParam0)//Position - 0x1CD0
{
	switch (iParam0)
	{
		case 0:
			return "MISHSTD0";
		case 9:
			return "MISHSTD1";
		case 10:
			return "MISHSTD2";
		case 21:
			return "MISHSTD3";
		case 22:
			return "MISHSTD4";
		case 338:
			return "MISHSTD5";
		case 339:
			return "MISHSTD6";
		case 196:
			return "MISHSTD7";
		case 197:
			return "MISHSTD8";
		case 205:
			return "MISHSTD9";
		case 206:
			return "MISHSTD10";
		case 207:
			return "MISHSTD11";
		case 218:
			return "MISHSTD12";
		case 217:
			return "MISHSTD13";
		case 384:
			return "MISHSTD14";
		case 385:
			return "MISHSTD15";
		case 372:
			return "MISHSTD16";
		case 373:
			return "MISHSTD17";
		case 375:
			return "MISHSTD18";
		case 374:
			return "MISHSTD19";
		default:
	}
	switch (iParam0)
	{
		case 486:
			return "MISHSTD20";
		case 487:
			return "MISHSTD21";
		case 488:
			return "MISHSTD22";
		case 489:
			return "MISHSTD23";
		case 490:
			return "MISHSTD24";
		case 499:
			return "MISHSTD25";
		case 500:
			return "MISHSTD26";
		case 501:
			return "MISHSTD27";
		case 502:
			return "MISHSTD28";
		case 515:
			return "MISHSTD25";
		case 516:
			return "MISHSTD30";
		case 517:
			return "MISHSTD19";
		case 518:
			return "MISHSTD32";
		case 137:
			return "MISHSTD19";
		case 136:
			return "MISHSTD34";
		case 148:
			return "MISHSTD17";
		case 149:
			return "MISHSTD19";
		case 150:
			return "MISHSTD37";
		case 229:
			return "MISHSTD38";
		default:
	}
	switch (iParam0)
	{
		case 230:
			return "MISHSTD39";
		case 273:
			return "MISHSTD40";
		case 274:
			return "MISHSTD41";
		case 275:
			return "MISHSTD42";
		case 276:
			return "MISHSTD43";
		case 277:
			return "MISHSTD19";
		case 283:
			return "MISHSTD45";
		case 284:
			return "MISHSTD16";
		case 285:
			return "MISHSTD17";
		case 346:
			return "MISHSTD48";
		case 239:
			return "MISHSTD49";
		case 240:
			return "MISHSTD50";
		case 241:
			return "MISHSTD51";
		case 242:
			return "MISHSTD52";
		case 294:
			return "MISHSTD53";
		case 295:
			return "MISHSTD54";
		case 296:
			return "MISHSTD55";
		case 297:
			return "MISHSTD56";
		case 298:
			return "MISHSTD57";
		default:
	}
	switch (iParam0)
	{
		case 308:
			return "MISHSTD58";
		case 102:
			return "MISHSTD59";
		case 115:
			return "MISHSTD60";
		case 114:
			return "MISHSTD22";
		case 111:
			return "MISHSTD62";
		case 112:
			return "MISHSTD63";
		case 113:
			return "MISHSTD64";
		case 396:
			return "MISHSTD65";
		case 393:
			return "MISHSTD66";
		case 394:
			return "MISHSTD67";
		case 395:
			return "MISHSTD68";
		case 120:
			return "MISHSTD69";
		case 121:
			return "MISHSTD70";
		case 122:
			return "MISHSTD71";
		case 123:
			return "MISHSTD72";
		case 124:
			return "MISHSTD73";
		case 161:
			return "MISHSTD74";
		case 172:
			return "MISHSTD40";
		case 173:
			return "MISHSTD76";
		default:
	}
	switch (iParam0)
	{
		case 174:
			return "MISHSTD77";
		case 175:
			return "MISHSTD78";
		case 185:
			return "MISHSTD79";
		case 186:
			return "MISHSTD66";
		case 187:
			return "MISHSTD81";
		case 326:
			return "MISHSTD82";
		case 129:
			return "MISHSTD22";
		case 130:
			return "MISHSTD84";
		case 466:
			return "MISHSTD85";
		case 400:
			return "MISHSTD86";
		case 401:
			return "MISHSTD87";
		case 413:
			return "MISHSTD88";
		case 414:
			return "MISHSTD40";
		case 415:
			return "MISHSTD17";
		case 416:
			return "MISHSTD91";
		case 417:
			return "MISHSTD92";
		case 249:
			return "MISHSTD18";
		case 474:
			return "MISHSTD12";
		case 257:
			return "MISHSTD95";
		default:
	}
	switch (iParam0)
	{
		case 527:
			return "MISHSTD96";
		case 528:
			return "MISHSTD97";
		case 529:
			return "MISHSTD76";
		case 534:
			return "MISHSTD99";
		case 709:
			return "MISHSTD100";
		case 576:
			return "MISHSTD101";
		case 577:
			return "MISHSTD102";
		case 578:
			return "MISHSTD103";
		case 579:
			return "MISHSTD104";
		case 742:
			return "MISHSTD105";
		case 741:
			return "MISHSTD19";
		case 743:
			return "MISHSTD107";
		case 745:
			return "MISHSTD108";
		case 748:
			return "MISHSTD109";
		case 747:
			return "MISHSTD110";
		case 749:
			return "MISHSTD111";
		case 750:
			return "MISHSTD112";
		case 751:
			return "MISHSTD113";
		case 754:
			return "MISHSTD114";
		default:
	}
	switch (iParam0)
	{
		case 753:
			return "MISHSTD115";
		case 757:
			return "MISHSTD116";
		case 756:
			return "MISHSTD117";
		case 755:
			return "MISHSTD118";
		case 759:
			return "MISHSTD119";
		case 758:
			return "MISHSTD120";
		case 761:
			return "MISHSTD121";
		case 760:
			return "MISHSTD122";
		case 762:
			return "MISHSTD123";
		case 763:
			return "MISHSTD124";
		case 766:
			return "MISHSTD124";
		case 769:
			return "MISHSTD126";
		case 768:
			return "MISHSTD127";
		case 767:
			return "MISHSTD128";
		case 771:
			return "MISHSTD129";
		case 770:
			return "MISHSTD130";
		case 773:
			return "MISHSTD131";
		case 772:
			return "MISHSTD132";
		case 775:
			return "MISHSTD133";
		default:
	}
	switch (iParam0)
	{
		case 774:
			return "MISHSTD134";
		case 777:
			return "MISHSTD135";
		case 776:
			return "MISHSTD136";
		case 779:
			return "MISHSTD137";
		case 778:
			return "MISHSTD138";
		case 782:
			return "MISHSTD139";
		case 780:
			return "MISHSTD140";
		case 781:
			return "MISHSTD141";
		case 784:
			return "MISHSTD142";
		case 783:
			return "MISHSTD143";
		case 786:
			return "MISHSTD144";
		case 785:
			return "MISHSTD145";
		case 788:
			return "MISHSTD146";
		case 787:
			return "MISHSTD147";
		case 789:
			return "MISHSTD148";
		case 792:
			return "MISHSTD149";
		case 791:
			return "MISHSTD150";
		case 790:
			return "MISHSTD151";
		case 793:
			return "MISHSTD152";
		default:
	}
	switch (iParam0)
	{
		case 794:
			return "MISHSTD153";
		case 795:
			return "MISHSTD154";
		case 796:
			return "MISHSTD155";
		case 797:
			return "MISHSTD156";
		case 798:
			return "MISHSTD157";
		case 799:
			return "MISHSTD158";
		case 800:
			return "MISHSTD159";
		case 801:
			return "MISHSTD160";
		case 802:
			return "MISHSTD161";
		case 803:
			return "MISHSTD162";
		case 804:
			return "MISHSTD163";
		case 805:
			return "MISHSTD164";
		case 806:
			return "MISHSTD165";
		case 807:
			return "MISHSTD166";
		case 808:
			return "MISHSTD167";
		case 809:
			return "MISHSTD168";
		case 429:
			return "MISHSTD48";
		case 441:
			return "MISHSTD1";
		case 4:
			return "MISHSTD171";
		default:
	}
	switch (iParam0)
	{
		case 13:
			return "MISHSTD172";
		case 341:
			return "MISHSTD173";
		case 5:
			return "MISHSTD174";
		case 6:
			return "MISHSTD175";
		case 20:
			return "MISHSTD40";
		case 169:
			return "MISHSTD177";
		case 731:
			return "MISHSTD178";
		case 737:
			return "MISHSTD179";
		case 145:
			return "MISHSTD180";
		case 159:
			return "MISHSTD74";
		case 353:
			return "MISHSTD40";
		case 357:
			return "MISHSTD21";
		case 605:
			return "MISHSTD21";
		case 606:
			return "MISHSTD74";
		case 613:
			return "MISHSTD186";
		case 616:
			return "MISHSTD187";
		case 628:
			return "MISHSTD188";
		case 309:
			return "MISHSTD21";
		case 310:
			return "MISHSTD16";
		default:
	}
	switch (iParam0)
	{
		case 313:
			return "MISHSTD191";
		case 477:
			return "MISHSTD192";
		case 482:
			return "MISHSTD193";
		case 484:
			return "MISHSTD194";
		case 715:
			return "MISHSTD195";
		case 570:
			return "MISHSTD40";
		case 566:
			return "MISHSTD87";
		case 565:
			return "MISHSTD198";
		case 572:
			return "MISHSTD199";
		case 574:
			return "MISHSTD200";
		case 431:
			return "MISHSTD201";
		case 443:
			return "MISHSTD202";
		case 446:
			return "MISHSTD21";
		case 452:
			return "MISHSTD204";
		case 364:
			return "MISHSTD201";
		case 365:
			return "MISHSTD40";
		case 369:
			return "MISHSTD207";
		case 668:
			return "MISHSTD87";
		case 670:
			return "MISHSTD209";
		default:
	}
	switch (iParam0)
	{
		case 678:
			return "MISHSTD87";
		case 265:
			return "MISHSTD87";
		case 266:
			return "MISHSTD40";
		case 270:
			return "MISHSTD213";
		case 271:
			return "MISHSTD214";
		case 272:
			return "MISHSTD215";
		case 765:
			return "MISHSTD216";
		case 764:
			return "MISHSTD217";
		case 330:
			return "MISHSTD218";
		case 331:
			return "MISHSTD40";
		case 643:
			return "MISHSTD220";
		case 644:
			return "MISHSTD221";
		case 645:
			return "MISHSTD222";
		case 646:
			return "MISHSTD223";
		case 404:
			return "MISHSTD74";
		case 721:
			return "MISHSTD25";
		case 752:
			return "MISHSTD226";
		case 147:
			return "MISHSTD227";
		case 336:
			return "MISHSTD228";
		default:
	}
	switch (iParam0)
	{
		case 371:
			return "MISHSTD228";
		case 557:
			return "MISHSTD230";
		case 575:
			return "MISHSTD231";
		case 629:
			return "MISHSTD232";
		case 647:
			return "MISHSTD86";
		case 685:
			return "MISHSTD234";
		case 693:
			return "MISHSTD235";
		case 738:
			return "MISHSTD234";
		case 650:
			return "MISHSTD237";
		case 649:
			return "MISHSTD238";
		case 825:
			return "MISHSTD239";
		case 824:
			return "MISHSTD240";
		case 821:
			return "MISHSTD241";
		case 820:
			return "MISHSTD242";
		case 319:
			return "MISHSTD243";
		case 318:
			return "MISHSTD244";
		case 317:
			return "MISHSTD3";
		case 322:
			return "MISHSTD85";
		case 323:
			return "MISHSTD247";
		default:
	}
	switch (iParam0)
	{
		case 324:
			return "MISHSTD248";
		case 816:
			return "MISHSTD249";
		case 815:
			return "MISHSTD250";
		case 814:
			return "MISHSTD251";
		case 746:
			return "MISHSTD252";
		case 514:
			return "MISHSTD253";
		case 744:
			return "MISHSTD254";
		case 841:
			return "MISHSTD255";
		case 840:
			return "MISHSTD3";
		case 838:
			return "MISHSTD255";
		case 828:
			return "MISHSTD3";
		case 829:
			return "MISHSTD255";
		case 831:
			return "MISHSTD12";
		case 832:
			return "MISHSTD255";
		case 834:
			return "MISHSTD48";
		case 835:
			return "MISHSTD255";
		case 837:
			return "MISHSTD264";
		case 739:
			return "MISHSTD265";
		case 619:
			return "MISHSTD266";
		default:
	}
	switch (iParam0)
	{
		case 560:
			return "MISHSTD267";
		case 559:
			return "MISHSTD268";
		case 558:
			return "MISHSTD269";
		case 673:
			return "MISHSTD16";
		case 688:
			return "MISHSTD16";
		case 687:
			return "MISHSTD272";
		case 844:
			return "MISHSTD273";
		case 845:
			return "MISHSTD274";
		case 843:
			return "MISHSTD275";
		case 236:
			return "MISHSTD276";
		case 29:
			return "MISHSTD277";
		case 109:
			return "MISHSTD278";
		case 108:
			return "MISHSTD279";
		case 135:
			return "MISHSTD280";
		case 227:
			return "MISHSTD281";
		case 852:
			return "MISHSTD282";
		case 846:
			return "MISHSTD283";
		case 440:
			return "MISHSTD284";
		case 864:
			return "MISHSTD285";
		default:
	}
	switch (iParam0)
	{
		case 863:
			return "MISHSTD286";
		case 861:
			return "MISHSTD287";
		case 862:
			return "MISHSTD288";
		case 870:
			return "MISHSTD289";
		case 544:
			return "MISHSTD290";
		case 543:
			return "MISHSTD291";
		case 593:
			return "MISHSTD292";
		case 592:
			return "MISHSTD14";
		case 603:
			return "MISHSTD12";
		case 899:
			return "MISHSTD295";
		case 900:
			return "MISHSTD296";
		case 883:
			return "MISHSTD297";
		case 891:
			return "MISHSTD297";
		case 657:
			return "MISHSTD299";
		case 875:
			return "MISHSTD297";
		case 906:
			return "MISHSTD193";
		case 706:
			return "MISHSTD302";
		case 699:
			return "MISHSTD303";
		case 726:
			return "MISHSTD304";
		default:
	}
	switch (iParam0)
	{
		case 237:
			return "MISHSTD305";
		case 658:
			return "MISHSTD3";
		case 877:
			return "MISHSTD307";
		case 885:
			return "MISHSTD307";
		case 893:
			return "MISHSTD307";
		case 694:
			return "MISHSTD310";
		case 881:
			return "MISHSTD311";
		case 889:
			return "MISHSTD312";
		case 897:
			return "MISHSTD311";
		case 633:
			return "MISHSTD314";
		case 632:
			return "MISHSTD315";
		case 38:
			return "MISHSTD316";
		case 41:
			return "MISHSTD317";
		case 39:
			return "MISHSTD318";
		case 40:
			return "MISHSTD319";
		case 42:
			return "MISHSTD320";
		case 56:
			return "MISHSTD319";
		case 52:
			return "MISHSTD316";
		case 53:
			return "MISHSTD323";
		default:
	}
	switch (iParam0)
	{
		case 54:
			return "MISHSTD317";
		case 55:
			return "MISHSTD320";
		case 70:
			return "MISHSTD320";
		case 69:
			return "MISHSTD317";
		case 67:
			return "MISHSTD328";
		case 68:
			return "MISHSTD319";
		case 66:
			return "MISHSTD316";
		case 81:
			return "MISHSTD316";
		case 82:
			return "MISHSTD332";
		case 84:
			return "MISHSTD317";
		case 83:
			return "MISHSTD319";
		case 85:
			return "MISHSTD320";
		case 97:
			return "MISHSTD316";
		case 98:
			return "MISHSTD337";
		case 100:
			return "MISHSTD317";
		case 99:
			return "MISHSTD319";
		case 101:
			return "MISHSTD320";
		default:
	}
	return "MISSING_MISSION_STAT_STRING";
}

void func_56(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0x2EAB
{
	if (iParam5 != 0)
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam5, "SET_DATA_SLOT");
	}
	else
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("SET_DATA_SLOT");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
	}
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam0);
	if (iParam5 == 0)
	{
		GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("PM_RP_STATD" /* GXT: ~a~~n~~a~ */);
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam3);
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(func_55(iParam4));
		GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	}
	else
	{
		__LIB_0__::func_610(sParam3);
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_57(int iParam0, int iParam1, int iParam2, int iParam3, char* sParam4, int iParam5, int iParam6)//Position - 0x2F1B
{
	int iVar0;
	if (iParam6 != 0)
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam6, "SET_DATA_SLOT");
	}
	else
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("SET_DATA_SLOT");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
	}
	iVar0 = iParam0;
	if (iVar0 > iParam1)
	{
		iVar0 = iParam1;
	}
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(5);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
	if (iParam6 == 0)
	{
		GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("PM_RP_STATD" /* GXT: ~a~~n~~a~ */);
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam4);
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(func_55(iParam5));
		GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	}
	else
	{
		__LIB_0__::func_610(sParam4);
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_58(int iParam0, int iParam1, int iParam2, int iParam3, char* sParam4, int iParam5, int iParam6)//Position - 0x2FA0
{
	float fVar0;
	fVar0 = ((SYSTEM::TO_FLOAT(iParam0) / SYSTEM::TO_FLOAT(iParam1)) * 100f);
	if (iParam6 != 0)
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam6, "SET_DATA_SLOT");
	}
	else
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("SET_DATA_SLOT");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
	}
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(3);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::CEIL(fVar0));
	if (iParam6 == 0)
	{
		GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("PM_RP_STATD" /* GXT: ~a~~n~~a~ */);
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam4);
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(func_55(iParam5));
		GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	}
	else
	{
		__LIB_0__::func_610(sParam4);
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_59(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4)//Position - 0x3029
{
	if (iParam4 != 0)
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam4, "SET_DATA_SLOT");
	}
	else
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("SET_DATA_SLOT");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
	}
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam0);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
	if (iParam4 == 0)
	{
		GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("PM_RP_STATD" /* GXT: ~a~~n~~a~ */);
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam2);
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(func_55(iParam3));
		GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	}
	else
	{
		__LIB_0__::func_610(sParam2);
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_60(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0x308E
{
	int iVar0;
	int iVar1;
	iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iParam0) / 60000f));
	iVar1 = (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iParam0) / 1000f)) - iVar0 * 60);
	if (iParam5 != 0)
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam5, "SET_DATA_SLOT");
	}
	else
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("SET_DATA_SLOT");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
	}
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(4);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar1);
	if (iParam5 == 0)
	{
		GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("PM_RP_STATD" /* GXT: ~a~~n~~a~ */);
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam3);
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(func_55(iParam4));
		GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	}
	else
	{
		__LIB_0__::func_610(sParam3);
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_61(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0x312D
{
	if (iParam5 != 0)
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam5, "SET_DATA_SLOT");
	}
	else
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("SET_DATA_SLOT");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
	}
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam0);
	if (iParam5 == 0)
	{
		GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("PM_RP_STATD" /* GXT: ~a~~n~~a~ */);
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam3);
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(func_55(iParam4));
		GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	}
	else
	{
		__LIB_0__::func_610(sParam3);
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_77(int iParam0)//Position - 0x4F30
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("SET_DATA_SLOT_EMPTY");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam0);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	if (iParam0 == 1)
	{
		func_81();
	}
}

struct<2> func_78(int iParam0, int iParam1)//Position - 0x4F55
{
	struct<2> Var0;
	StringCopy(&Var0, "", 8);
	switch (iParam1)
	{
		case 1:
			if ((iParam0 == 80 || iParam0 == 81) || iParam0 == 82)
			{
				StringConCat(&Var0, &(Global_91229[iParam0 /*34*/].f_8), 8);
				StringConCat(&Var0, "A", 8);
			}
			else
			{
				StringCopy(&Var0, "M_", 8);
				StringConCat(&Var0, &(Global_91229[iParam0 /*34*/].f_8), 8);
				if (iParam0 == 90)
				{
					StringConCat(&Var0, "A", 8);
				}
			}
			break;
		case 7:
			Var0 = { __LIB_0__::func_330(iParam0) };
			break;
		default:
			break;
	}
	return Var0;
}

void func_81()//Position - 0x5470
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("SET_COLUMN_SCROLL");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(-1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(-1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(-1);
	__LIB_0__::func_610("");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_82(int iParam0, int iParam1, int iParam2)//Position - 0x54A6
{
	int iVar0;
	iVar0 = 0;
	if (Global_78568 != iParam0 || iParam2 == 1)
	{
		iVar0 = 1;
	}
	Global_78568 = iParam0;
	func_4(2);
	if (func_8() != -1 || !func_5(iParam0))
	{
		if (iParam1 == 1)
		{
			func_31(0);
		}
		func_3(0);
		func_29(1, iParam0);
	}
	else
	{
		if (iVar0 == 1)
		{
			func_28(1, 0);
			func_28(2, 0);
			func_77(1);
			func_77(2);
			func_83();
			func_27(Local_29[0 /*2*/]);
		}
		if (iParam1 == 1)
		{
			func_31(1);
		}
		func_2(iParam0, iVar0);
	}
}

void func_83()//Position - 0x5540
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	float fVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	func_35();
	if (Global_78569 > 16)
	{
		func_85();
		func_33(0, Global_78569);
	}
	else
	{
		func_81();
	}
	iVar2 = 0;
	iVar3 = 0;
	iVar0 = 0;
	while (iVar0 < Global_78569)
	{
		iVar2 = 0;
		iVar3 = 0;
		iVar8 = -1;
		iVar1 = Local_29[iVar0 /*2*/];
		Local_28 = { func_78(iVar1, Global_78568) };
		iVar7 = 0;
		while (iVar7 < __LIB_42__::func_519(iVar1, Global_78568))
		{
			iVar4 = __LIB_42__::func_518(iVar1, Global_78568, iVar7);
			if (!Global_63379[iVar4 /*13*/].f_7)
			{
				if (__LIB_42__::func_516(iVar4) == 1)
				{
					iVar3++;
				}
				switch (iVar4)
				{
					case 42:
					case 55:
					case 85:
					case 70:
					case 101:
						iVar8 = __LIB_42__::func_517(iVar4);
						break;
				}
				iVar2++;
			}
			iVar7++;
		}
		func_52(iVar1, &iVar8);
		fVar5 = __LIB_38__::func_53(iVar3, iVar2, 0);
		iVar6 = __LIB_38__::func_52(fVar5);
		if (iVar8 > -1)
		{
			iVar6 = iVar8;
		}
		func_84(1, iVar0, 1076, iVar1, 1, &Local_28, __LIB_38__::func_563(iVar6));
		iVar0++;
	}
	__LIB_37__::func_521(1);
}

void func_84(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, char* sParam5, int iParam6)//Position - 0x565E
{
	if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("SET_DATA_SLOT"))
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam0);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(3);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
		if (bParam4)
		{
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
		}
		else
		{
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
		}
		__LIB_0__::func_610(sParam5);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam6);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

void func_85()//Position - 0x56B5
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("INIT_COLUMN_SCROLL");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

