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
	struct<19> Local_83 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 300000, 0, 0, 30000, 2, 0, 0 } ;
	var uLocal_84 = 0;
	struct<4> Local_85[32];
	var uLocal_86 = 0;
	int iLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	int iLocal_92 = 0;
	int iLocal_93 = 0;
	struct<21> Local_94 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
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
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && __LIB_0__::func_156(PLAYER::PLAYER_ID(), 0, 1))
	{
		func_271(ScriptParam_94);
	}
	else
	{
		func_268();
	}
	while (true)
	{
		__LIB_0__::func_933();
		if (__LIB_0__::func_959() || __LIB_3__::func_424(16))
		{
			func_268();
		}
		if (NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION())
		{
			func_268();
		}
		switch (__LIB_2__::func_87(NETWORK::PARTICIPANT_ID_TO_INT()))
		{
			case 0:
				if (__LIB_2__::func_86() == 1)
				{
					func_253();
					Local_85[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/] = 1;
				}
				else if (__LIB_2__::func_86() == 4)
				{
					Local_85[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/] = 3;
				}
				break;
			case 1:
				if (__LIB_2__::func_86() == 1)
				{
					func_133();
				}
				else if (__LIB_2__::func_86() == 4)
				{
					func_14();
					Local_85[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/] = 3;
				}
				break;
			case 3:
				__LIB_1__::func_399(&(Local_83.f_18));
				if (__LIB_1__::func_398(&(Local_83.f_18)))
				{
					Local_85[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/] = 4;
				}
				break;
			case 2:
				Local_85[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/] = 4;
			case 4:
				func_268();
				break;
		}
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			switch (__LIB_2__::func_86())
			{
				case 0:
					Local_83.f_0 = 1;
					break;
				case 1:
					func_11();
					func_3();
					if (func_1())
					{
						Local_83.f_0 = 4;
					}
					break;
				case 4:
					break;
				}
		}
	}
}

int func_1()//Position - 0x1C4
{
	if (func_2())
	{
		return 1;
	}
	return 0;
}

int func_2()//Position - 0x1D8
{
	if (Local_83.f_7 == 2)
	{
		return 1;
	}
	return 0;
}

void func_3()//Position - 0x1ED
{
	struct<14> Var0;
	switch (Local_83.f_7)
	{
		case 0:
			if (BitTest(Local_83.f_1, 0))
			{
				Local_83.f_7 = 1;
			}
			else if (__LIB_0__::func_937(&(Local_83.f_8), 480000, 0))
			{
				Var0.f_2 = 1584592718;
				__LIB_1__::func_634(Var0, __LIB_1__::func_26(1));
				MISC::SET_BIT(&(Local_83.f_1), 1);
				Local_83.f_7 = 2;
			}
			break;
		case 1:
			func_4();
			break;
		case 2:
			break;
	}
}

void func_4()//Position - 0x263
{
	if (!__LIB_0__::func_937(&(Local_83.f_10), Local_83.f_12, 0))
	{
		if (__LIB_0__::func_937(&(Local_83.f_13), Local_83.f_15, 0))
		{
			Local_83.f_17++;
			Local_83.f_16 = func_6();
			__LIB_0__::func_794(&(Local_83.f_13));
		}
	}
	else
	{
		Local_83.f_7 = 2;
	}
}

int func_6()//Position - 0x2BB
{
	switch (Local_83.f_17)
	{
		case 0:
		case 1:
			return 2;
		case 2:
		case 3:
		case 4:
		case 5:
			return 3;
		case 6:
		case 7:
		case 8:
			return 4;
		case 9:
			return 5;
		default:
	}
	return Local_83.f_16;
}

void func_11()//Position - 0x449
{
	int iVar0;
	if (Local_83.f_0 == 1)
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_92)))
		{
			iVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_92));
			if (__LIB_0__::func_156(iVar0, 1, 1))
			{
				if (!BitTest(Local_83.f_1, 0))
				{
					if (BitTest(Local_85[iLocal_92 /*4*/].f_1, 0))
					{
						iLocal_93 = 1;
						MISC::SET_BIT(&(Local_83.f_1), 0);
					}
				}
			}
		}
	}
	iLocal_92++;
	if (iLocal_92 == NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (iLocal_93 == 0)
		{
			if (BitTest(Local_83.f_1, 0))
			{
				MISC::CLEAR_BIT(&(Local_83.f_1), 0);
			}
		}
		else
		{
			iLocal_93 = 0;
		}
		iLocal_92 = 0;
	}
}

void func_14()//Position - 0x516
{
	int iVar0;
	var uVar1;
	var uVar2;
	if (!BitTest(uLocal_86, 1))
	{
		if ((BitTest(Local_85[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_1, 0) && PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) >= (Local_83.f_16 - 1)) && Local_85[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_2 < 10)
		{
			Local_85[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_2++;
		}
		if (Local_85[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_2 > 0)
		{
			iVar0 = (Local_85[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_2 * Global_262145.f_8565 /* Tunable: CASH_REWARD_EVENT_DISTRACT_COPS */);
			Global_2727753 = iVar0;
			__LIB_3__::func_432(&iVar0, 1);
			if (iVar0 > 0)
			{
				__LIB_2__::func_806(iVar0, 1, 1, 0);
				if (__LIB_0__::func_112())
				{
					__LIB_2__::func_105(joaat("SERVICE_EARN_AMBIENT_JOB_DISTRACT_COPS"), iVar0, &uVar2, 0, 0, 0);
				}
				else
				{
					MONEY::NETWORK_EARN_FROM_AMBIENT_JOB(iVar0, "AM_DISTRACT_COPS", &uVar1);
				}
			}
			if (__LIB_0__::func_680())
			{
				__LIB_32__::func_533(12, "DSC_PASS0" /* GXT: Good work. You'll get your money, and they got away with it. Everyone's a winner except small businesses, property owners, and emergency services in the area... */, 0, 0, -99);
			}
			else
			{
				__LIB_32__::func_533(12, "DSC_PASS1" /* GXT: Mission accomplished. I got paid, I'm transferring your small cut to you. You probably don't want to know what they were up to, but rest assured it wasn't as bad as what you were doing to distract the cops. */, 0, 0, -99);
			}
			func_20(51, iVar0, "DSC_CASH" /* GXT: $~1~ */, "DSC_BIGM" /* GXT: Distract Cops */, 1, -1, -1082130432, 2, 0);
			if (BitTest(uLocal_86, 4))
			{
				if (!BitTest(uLocal_86, 5))
				{
					__LIB_2__::func_428(66, 1, -1);
				}
			}
		}
		MISC::SET_BIT(&uLocal_86, 1);
	}
}

int func_20(int iParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)//Position - 0x6E4
{
	struct<80> Var0;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_16 = 1;
	Var0.f_71 = 1;
	Var0.f_72 = 2;
	Var0.f_79 = -1;
	__LIB_13__::func_693(iParam0, &Var0, iParam1, sParam2, sParam3);
	Var0.f_71 = iParam4;
	Var0.f_6 = iParam5;
	Var0.f_7 = iParam6;
	Var0.f_72 = iParam7;
	if (iParam8 != 0)
	{
		__LIB_1__::func_330(&(Var0.f_69), iParam8);
	}
	return __LIB_13__::func_734(&Var0);
}

void func_133()//Position - 0x3474
{
	func_251();
	if (HUD::DOES_BLIP_EXIST(iLocal_87))
	{
		if (__LIB_0__::func_109() || __LIB_2__::func_791())
		{
			HUD::SET_BLIP_DISPLAY(iLocal_87, 0);
		}
		else
		{
			HUD::SET_BLIP_DISPLAY(iLocal_87, 4);
		}
	}
	switch (Local_85[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_3)
	{
		case 0:
			if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_83.f_2, Local_83.f_5, Local_83.f_5, 1000f, false, true, 0))
			{
				func_226();
				MISC::SET_BIT(&(Local_85[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_1), 0);
				MISC::SET_BIT(&(Global_2815059.f_4662), 0);
				Local_85[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_3 = 1;
			}
			if (Local_83.f_7 > 1)
			{
				Local_85[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_3 = 2;
			}
			break;
		case 1:
			func_200();
			func_134();
			if (Local_83.f_7 > 1)
			{
				Local_85[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_3 = 2;
			}
			break;
		case 2:
			func_14();
			break;
	}
}

void func_134()//Position - 0x3552
{
	func_199();
	func_143();
	func_136();
	func_135();
}

void func_135()//Position - 0x356A
{
	if (!BitTest(uLocal_86, 5))
	{
		if (!BitTest(uLocal_86, 4))
		{
			if (Local_83.f_17 == 0)
			{
				MISC::SET_BIT(&uLocal_86, 4);
			}
			else
			{
				MISC::SET_BIT(&uLocal_86, 5);
			}
		}
		else if (!__LIB_0__::func_156(PLAYER::PLAYER_ID(), 1, 1))
		{
			MISC::SET_BIT(&uLocal_86, 5);
		}
	}
}

void func_136()//Position - 0x35B3
{
	if ((((LOCALIZATION::GET_CURRENT_LANGUAGE() == 7 || LOCALIZATION::GET_CURRENT_LANGUAGE() == 8) || LOCALIZATION::GET_CURRENT_LANGUAGE() == 9) || LOCALIZATION::GET_CURRENT_LANGUAGE() == 10) || LOCALIZATION::GET_CURRENT_LANGUAGE() == 12)
	{
		__LIB_1__::func_910();
	}
	else
	{
		__LIB_3__::func_238();
	}
	if ((Local_83.f_12 - __LIB_1__::func_724(&(Local_83.f_10), 0, 0)) >= 0)
	{
		__LIB_1__::func_350((Local_83.f_12 - __LIB_1__::func_724(&(Local_83.f_10), 0, 0)), "DCP_TIMER" /* GXT: DISTRACT TIME */, 0, 1, -1, 0, 2, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1);
	}
	else
	{
		__LIB_1__::func_350(0, "DCP_TIMER" /* GXT: DISTRACT TIME */, 0, 1, -1, 0, 2, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1);
	}
}

void func_143()//Position - 0x384A
{
	if (__LIB_0__::func_937(&uLocal_88, 30000, 0))
	{
		switch (Local_83.f_16)
		{
			case 2:
				__LIB_32__::func_531(2107, 1, -1);
				break;
			case 3:
				__LIB_32__::func_531(2108, 1, -1);
				break;
			case 4:
				__LIB_32__::func_531(2109, 1, -1);
				break;
			case 5:
				__LIB_32__::func_531(2110, 1, -1);
				break;
		}
		__LIB_43__::func_658(0, PLAYER::PLAYER_PED_ID(), "XPT_DSC" /* GXT: Distract Cops */, joaat("XPTYPE_COMPLETE"), joaat("XPCATEGORY_COMPLETE_DISTRACT_COPS"), (Global_262145.f_8566 /* Tunable: XP_REWARD_EVENT_DISTRACT_COPS */ * Local_83.f_16), 1, -1, 0, 0, 0);
		Local_85[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_2++;
		__LIB_0__::func_794(&uLocal_88);
	}
}

void func_199()//Position - 0x5914
{
	if (__LIB_0__::func_937(&uLocal_90, 10000, 0))
	{
		if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) < Local_83.f_16)
		{
			PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), Local_83.f_16, false);
			PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
		}
		PLAYER::UPDATE_WANTED_POSITION_THIS_FRAME(PLAYER::PLAYER_ID());
	}
}

void func_200()//Position - 0x5956
{
	if (!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_83.f_2, Local_83.f_5, Local_83.f_5, 1000f, false, true, 0))
	{
		func_203();
		Local_85[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_3 = 0;
	}
	else if (!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_83.f_2, Local_83.f_6, Local_83.f_6, 950f, false, true, 0))
	{
		if (!BitTest(uLocal_86, 0) && BitTest(uLocal_86, 3))
		{
			if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() && !__LIB_0__::func_193())
			{
				if (!__LIB_0__::func_109())
				{
					__LIB_0__::func_151("DCP_LEAVE" /* GXT: You are leaving the area for distracting the Cops. */, -1);
				}
				MISC::SET_BIT(&uLocal_86, 0);
			}
		}
	}
	else
	{
		if (!BitTest(uLocal_86, 3))
		{
			MISC::SET_BIT(&uLocal_86, 3);
		}
		if (BitTest(uLocal_86, 0))
		{
			MISC::CLEAR_BIT(&uLocal_86, 0);
		}
	}
}

void func_203()//Position - 0x5A3A
{
	__LIB_0__::func_794(&uLocal_88);
	__LIB_0__::func_794(&uLocal_90);
	func_204();
	MISC::CLEAR_BIT(&(Local_85[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_1), 0);
	MISC::CLEAR_BIT(&uLocal_86, 3);
	MISC::SET_BIT(&(Global_2815059.f_4662), 0);
	if (!BitTest(uLocal_86, 5))
	{
		MISC::SET_BIT(&uLocal_86, 5);
	}
}

void func_204()//Position - 0x5A83
{
	if (BitTest(uLocal_86, 2))
	{
		__LIB_32__::func_534(1, 1, 0);
		MISC::CLEAR_BIT(&uLocal_86, 2);
	}
}

void func_226()//Position - 0x6018
{
	if (!BitTest(uLocal_86, 2))
	{
		func_246(Local_83.f_2, (Local_83.f_6 * 1.5f), 0, 0, 1, 0);
		func_228(Local_83.f_2, Local_83.f_6, 0, 1);
		__LIB_1__::func_959(Local_83.f_2, 1, 0);
		MISC::SET_BIT(&uLocal_86, 2);
	}
}

void func_228(struct<3> Param0, var uParam1, int iParam2, int iParam3)//Position - 0x608D
{
	__LIB_23__::func_539(Param0, 0f, 0f, 0f, uParam1, 0, iParam2, iParam3);
}

void func_246(struct<3> Param0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x656C
{
	__LIB_32__::func_532(Param0, 0f, 0f, 0f, fParam1, 0, iParam2, iParam4, iParam3, iParam5);
}

void func_251()//Position - 0x6658
{
	if (!BitTest(uLocal_86, 6))
	{
		if (((((((__LIB_2__::func_790(60000) && __LIB_2__::func_86() == 1) && Local_83.f_7 <= 1) && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && !HUD::IS_PAUSE_MENU_ACTIVE()) && __LIB_0__::func_156(PLAYER::PLAYER_ID(), 1, 1)) && !__LIB_0__::func_193()) && Local_83.f_16 != 5)
		{
			if (!__LIB_0__::func_109())
			{
				__LIB_0__::func_151("DCP_HELP1" /* GXT: Help Lester's contact by distracting the cops in the area marked by a purple circle. */, -1);
			}
			MISC::SET_BIT(&uLocal_86, 6);
		}
	}
}

void func_253()//Position - 0x66F3
{
	if (HUD::DOES_BLIP_EXIST(iLocal_87))
	{
		if (__LIB_0__::func_109() || __LIB_2__::func_791())
		{
			HUD::SET_BLIP_DISPLAY(iLocal_87, 0);
		}
		else
		{
			HUD::SET_BLIP_DISPLAY(iLocal_87, 4);
		}
	}
	else
	{
		iLocal_87 = HUD::ADD_BLIP_FOR_RADIUS(Local_83.f_2, Local_83.f_5);
		HUD::SET_BLIP_COLOUR(iLocal_87, 50);
		HUD::SET_BLIP_ALPHA(iLocal_87, 220);
		HUD::SHOW_HEIGHT_ON_BLIP(iLocal_87, false);
		HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_87, "DCP_BLIPN" /* GXT: Distract Cops */);
		if (__LIB_0__::func_109())
		{
			HUD::SET_BLIP_DISPLAY(iLocal_87, 0);
		}
	}
}

void func_268()//Position - 0x6C44
{
	if (HUD::DOES_BLIP_EXIST(iLocal_87))
	{
		HUD::REMOVE_BLIP(&iLocal_87);
	}
	if (BitTest(Local_83.f_1, 1))
	{
		__LIB_32__::func_533(12, "DSC_FAIL" /* GXT: Great. Thank you for your help. Now some horrible criminals are in jail for a crime they did commit and it's all your fault!! */, 0, 0, -99);
	}
	func_204();
	__LIB_1__::func_460(16, 0);
	MISC::SET_BIT(&(Global_2815059.f_4662), 0);
	__LIB_0__::func_202();
}

void func_271(struct<21> Param0)//Position - 0x6CF5
{
	__LIB_0__::func_935(__LIB_1__::func_32(Param0.f_0), Param0);
	__LIB_0__::func_895(0, -1, 0);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_83, 20, 0);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_85, 129, 0);
	if (!__LIB_0__::func_934())
	{
		func_268();
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			func_272();
		}
		__LIB_1__::func_460(16, 1);
		Local_85[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/] = 0;
	}
	else
	{
		func_268();
	}
}

void func_272()//Position - 0x6D60
{
	Local_83.f_2 = { func_273() };
	Local_83.f_5 = 200f;
	Local_83.f_6 = 180f;
}

Vector3 func_273()//Position - 0x6D84
{
	switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 10))
	{
		case 0:
			return 1440f, -2135f, 60f;
		case 1:
			return 233f, -1725f, 30f;
		case 2:
			return -403f, -1207f, 38f;
		case 3:
			return -1060f, -1028f, 3f;
		case 4:
			return -2152f, -329f, 14f;
		case 5:
			return -1651f, 214f, 61f;
		case 6:
			return -527f, 662f, 142f;
		case 7:
			return -27f, -747f, 45f;
		case 8:
			return 1292f, -649f, 68f;
		case 9:
			return 978f, -3143f, 6f;
		default:
	}
	return 978f, -3143f, 6f;
}

