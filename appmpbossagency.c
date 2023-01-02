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
	float fLocal_47 = 0f;
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
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	int iLocal_83 = 0;
	struct<2> Local_84 = { 0, 0 } ;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	struct<2> Local_87 = { 0, 0 } ;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	struct<2> Local_90 = { 0, 0 } ;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	struct<2> Local_93 = { 0, 0 } ;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	struct<2> Local_96 = { 0, 0 } ;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	struct<2> Local_99 = { 0, 0 } ;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	int iLocal_102 = 0;
	int iLocal_103 = 0;
	int iLocal_104 = 0;
	int* iLocal_105 = NULL;
	var uLocal_106 = 0;
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
	fLocal_47 = ((0.05f + 0.275f) - 0.01f);
	StringCopy(&Local_84, "CELL_206" /* GXT: BACK */, 16);
	StringCopy(&Local_87, "CELL_214" /* GXT: OPTIONS */, 16);
	StringCopy(&Local_90, "CELL_243" /* GXT: ACCEPT JOB */, 16);
	StringCopy(&Local_93, "CELL_244" /* GXT: CANCEL JOB */, 16);
	StringCopy(&Local_96, "CELL_265" /* GXT: INVITATION */, 16);
	StringCopy(&Local_99, "CELL_300" /* GXT: CHAR_DEFAULT */, 16);
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	__LIB_7__::func_252(&iLocal_105);
	iLocal_102 = 0;
	func_96();
	__LIB_2__::concatAndDo_SCALEFORM_MOVIE_METHOD(Global_20247, "SET_THEME", SYSTEM::TO_FLOAT(5), -1082130432, -1082130432, -1082130432, -1082130432);
	func_85(0);
	while (true)
	{
		SYSTEM::WAIT(0);
		__LIB_13__::func_459();
		func_83();
		if (!Global_20266.f_1 == 9 && Global_20266.f_1 > 3)
		{
			switch (iLocal_83)
			{
				case 0:
					func_47();
					break;
				case 1:
					func_31();
					break;
				case 3:
					func_5();
					break;
				case 2:
					__LIB_0__::func_467();
					break;
				default:
					break;
			}
			if (Global_20266.f_1 != 8)
			{
				if (__LIB_13__::func_89())
				{
					func_2();
				}
			}
		}
		if (__LIB_13__::func_83())
		{
			func_2();
		}
	}
}

void func_2()//Position - 0x1B3
{
	Global_1888478.f_6 = 0;
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_5()//Position - 0x1F7
{
	int iVar0;
	Global_1888478.f_6 = 1;
	if (iLocal_104)
	{
		if (PAD::IS_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, Global_20235))
		{
			iLocal_104 = 0;
		}
		return;
	}
	if (PAD::IS_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/))
	{
		iLocal_83 = 1;
		iVar0 = __LIB_31__::func_707(iLocal_102, 0);
		func_6(iVar0);
		return;
	}
	if (PAD::IS_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/))
	{
		iLocal_83 = 1;
		return;
	}
	HUD::SET_WARNING_MESSAGE_WITH_HEADER("HUD_INPUT23" /* GXT: Confirm */, "BA_APP_PASS_W" /* GXT: Are you sure you want to become a Bodyguard? Passive Mode is disabled when playing as a Bodyguard. */, 36, 0, false, -1, 0, 0, true, 0);
}

void func_6(int iParam0)//Position - 0x25E
{
	int iVar0;
	iVar0 = Global_1888478.f_7[iParam0 /*8*/].f_2;
	if (Global_1888478.f_7[iParam0 /*8*/].f_1 == 1 && iLocal_103 == iVar0)
	{
		func_26(iVar0, Global_1888478.f_7[iParam0 /*8*/].f_6);
		__LIB_40__::func_948(iParam0);
	}
	Global_1888478.f_6 = 0;
	__LIB_0__::func_366(0);
}

void func_26(int iParam0, var uParam1)//Position - 0xCAA
{
	if (Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_26 == __LIB_0__::getMinusOneOrNull())
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
		{
			Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_26 = iParam0;
			Global_2815059.f_5195.f_225 = uParam1;
			__LIB_13__::func_428(__LIB_0__::func_950(iParam0));
		}
	}
}

void func_31()//Position - 0xD8A
{
	int iVar0;
	int iVar1;
	iVar0 = __LIB_31__::func_707(iLocal_102, 0);
	if (iLocal_102 == -1)
	{
		func_85(1);
		return;
	}
	iVar1 = Global_1888478.f_7[iVar0 /*8*/].f_2;
	if (!__LIB_0__::func_156(iVar1, 0, 1) || iLocal_103 != iVar1)
	{
		func_85(1);
		return;
	}
	__LIB_13__::func_477(&iLocal_105);
	if (__LIB_13__::func_469(&iLocal_105))
	{
		func_85(1);
		return;
	}
	if (__LIB_13__::func_476(&iLocal_105))
	{
		__LIB_40__::func_948(iVar0);
		func_85(1);
		return;
	}
	if (__LIB_13__::func_480(&iLocal_105))
	{
		if (__LIB_0__::func_945())
		{
			iLocal_104 = 1;
			iLocal_83 = 3;
		}
		else if (Global_1888478.f_7[iVar0 /*8*/] == 0)
		{
			func_6(iVar0);
		}
		else if (Global_1888478.f_7[iVar0 /*8*/] == 1)
		{
			func_32(iVar0);
		}
		else
		{
			__LIB_0__::func_366(0);
		}
	}
}

void func_32(int iParam0)//Position - 0xE50
{
	MISC::SET_BIT(&Global_1836068, 15);
	__LIB_40__::func_948(iParam0);
	Global_1888478.f_6 = 0;
	__LIB_0__::func_366(0);
}

void func_47()//Position - 0x117B
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	if (__LIB_13__::func_429() > 1)
	{
		__LIB_13__::func_477(&iLocal_105);
	}
	if (__LIB_13__::func_480(&iLocal_105))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20247, "GET_CURRENT_SELECTION");
		iVar0 = GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
		while (!GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(iVar0))
		{
			SYSTEM::WAIT(0);
		}
		iLocal_102 = GRAPHICS::GET_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_INT(iVar0);
		iVar1 = __LIB_31__::func_707(iLocal_102, 0);
		switch (Global_1888478.f_7[iVar1 /*8*/].f_1)
		{
			case 0:
				return;
			case 1:
				func_49();
				break;
			default:
				return;
		}
		Global_20266.f_1 = 8;
		return;
	}
	if (__LIB_13__::func_476(&iLocal_105))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20247, "GET_CURRENT_SELECTION");
		iVar2 = GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
		while (!GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(iVar2))
		{
			SYSTEM::WAIT(0);
		}
		iLocal_102 = GRAPHICS::GET_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_INT(iVar2);
		iVar3 = __LIB_31__::func_707(iLocal_102, 0);
		switch (Global_1888478.f_7[iVar3 /*8*/].f_1)
		{
			case 0:
				return;
			case 1:
				__LIB_40__::func_948(iVar3);
				func_85(0);
				return;
			default:
		}
		return;
		return;
	}
	if (__LIB_13__::func_425(0))
	{
		__LIB_31__::func_708(0);
		func_85(0);
	}
}

void func_49()//Position - 0x12A4
{
	bool bVar0;
	char* sVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	struct<16> Var5;
	var uVar6[3];
	bool bVar7;
	int iVar8;
	int iVar9;
	char cVar10[16];
	struct<16> Var11;
	char cVar12[16];
	if (Global_20266.f_1 != 8)
	{
		Global_20266.f_1 = 8;
	}
	__LIB_2__::concatAndDo_SCALEFORM_MOVIE_METHOD(Global_20247, "SET_DATA_SLOT_EMPTY", SYSTEM::TO_FLOAT(26), -1082130432, -1082130432, -1082130432, -1082130432);
	bVar0 = false;
	iVar3 = __LIB_31__::func_707(iLocal_102, 0);
	iLocal_103 = Global_1888478.f_7[iVar3 /*8*/].f_2;
	iVar4 = Global_1888478.f_7[iVar3 /*8*/].f_2;
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20247, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(26);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
	if (__LIB_0__::func_156(iVar4, 0, 1))
	{
		Var5 = { __LIB_13__::func_458(iVar4) };
		GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
		HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(__LIB_19__::func_263(iVar4));
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Var5);
		GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
		bVar0 = true;
	}
	else
	{
		__LIB_0__::do_TEXT_COMMAND_SCALEFORM_STRING("");
	}
	if (Global_1888478.f_7[iVar3 /*8*/] == 0)
	{
		if (Global_262145.f_15474 /* Tunable: EXEC_VIP2_DISABLE_INVITE_INFO */)
		{
			bVar7 = __LIB_3__::func_39(iVar4);
			iVar8 = 0;
			while (iVar8 < 3)
			{
				if (iVar9 < 3)
				{
					if (Global_1892703[iVar4 /*599*/].f_10.f_11[iVar8] != __LIB_0__::getMinusOneOrNull())
					{
						if (__LIB_0__::func_156(Global_1892703[iVar4 /*599*/].f_10.f_11[iVar8], 0, 1))
						{
							uVar6[iVar9] = Global_1892703[iVar4 /*599*/].f_10.f_11[iVar8];
							iVar9++;
						}
					}
				}
				iVar8++;
			}
			if (iVar9 == 0)
			{
				if (bVar7)
				{
					__LIB_0__::do_TEXT_COMMAND_SCALEFORM_STRING("BA_APP_BODYCTA" /* GXT: ~HUD_COLOUR_WHITE~Wants you to become an Associate.~s~ */);
				}
				else
				{
					__LIB_0__::do_TEXT_COMMAND_SCALEFORM_STRING("BA_APP_BODY_TA" /* GXT: ~HUD_COLOUR_WHITE~Wants you to become a Bodyguard.~s~ */);
				}
			}
			else
			{
				StringCopy(&cVar10, "BA_APP_BODY_T4" /* GXT: ~HUD_COLOUR_WHITE~Wants you to become a Bodyguard.~n~~n~Other Bodyguards:~n~~a~~s~ */, 16);
				if (bVar7)
				{
					StringCopy(&cVar10, "BA_APP_BODYCT4" /* GXT: ~HUD_COLOUR_WHITE~Wants you to become an Associate.~n~~n~Other Associates:~n~~a~~s~ */, 16);
				}
				if (iVar9 == 2)
				{
					if (bVar7)
					{
						StringCopy(&cVar10, "BA_APP_BODYCT5" /* GXT: ~HUD_COLOUR_WHITE~Wants you to become an Associate.~n~~n~Other Associates:~n~~a~~n~~a~~s~ */, 16);
					}
					else
					{
						StringCopy(&cVar10, "BA_APP_BODY_T5" /* GXT: ~HUD_COLOUR_WHITE~Wants you to become a Bodyguard.~n~~n~Other Bodyguards:~n~~a~~n~~a~~s~ */, 16);
					}
				}
				else if (iVar9 > 2)
				{
					if (bVar7)
					{
						StringCopy(&cVar10, "BA_APP_BODYCT6" /* GXT: ~HUD_COLOUR_WHITE~Wants you to become an Associate.~n~~n~Other Associates:~n~~a~~n~~a~~n~~a~~s~ */, 16);
					}
					else
					{
						StringCopy(&cVar10, "BA_APP_BODY_T6" /* GXT: ~HUD_COLOUR_WHITE~Wants you to become a Bodyguard.~n~~n~Other Bodyguards:~n~~a~~n~~a~~n~~a~~s~ */, 16);
					}
				}
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&cVar10);
				iVar8 = 0;
				while (iVar8 < iVar9)
				{
					Var11 = { __LIB_13__::func_458(uVar6[iVar8]) };
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Var11);
					iVar8++;
				}
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			}
		}
		else
		{
			if (Global_1888478.f_88[iVar3 /*5*/].f_1)
			{
				if (Global_1888478.f_88[iVar3 /*5*/].f_2)
				{
					StringCopy(&cVar12, "BA_APP_BODY_T9" /* GXT: ~HUD_COLOUR_WHITE~Wants you to become an Associate.~n~~n~- Wage: $~1~ ~n~- Associate(s): ~1~ ~n~- Yacht: Yes~n~- Office: Yes ~n~- Warehouse(s): ~1~ ~n~- Vehicle(s): ~1~ */, 16);
				}
				else
				{
					StringCopy(&cVar12, "BA_APP_BODY_T8" /* GXT: ~HUD_COLOUR_WHITE~Wants you to become a Bodyguard.~n~~n~- Wage: $~1~ ~n~- Bodyguard(s): ~1~ ~n~- Yacht: Yes~n~- Office: No ~n~- Warehouse(s): ~1~ ~n~- Vehicle(s): ~1~ */, 16);
				}
			}
			else if (Global_1888478.f_88[iVar3 /*5*/].f_2)
			{
				StringCopy(&cVar12, "BA_APP_BODY_T7" /* GXT: ~HUD_COLOUR_WHITE~Wants you to become an Associate.~n~~n~- Wage: $~1~ ~n~- Associate(s): ~1~ ~n~- Yacht: No~n~- Office: Yes ~n~- Warehouse(s): ~1~ ~n~- Vehicle(s): ~1~ */, 16);
			}
			else
			{
				StringCopy(&cVar12, "BA_APP_BODY_T10" /* GXT: ~HUD_COLOUR_WHITE~Wants you to become a Bodyguard.~n~~n~- Wage: $~1~ ~n~- Bodyguard(s): ~1~ ~n~- Yacht: No~n~- Office: No~n~- Warehouse(s): ~1~ ~n~- Vehicle(s): ~1~ */, 16);
			}
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&cVar12);
			HUD::ADD_TEXT_COMPONENT_INTEGER(Global_1888478.f_88[iVar3 /*5*/]);
			HUD::ADD_TEXT_COMPONENT_INTEGER(__LIB_3__::func_490(iVar4));
			HUD::ADD_TEXT_COMPONENT_INTEGER(Global_1888478.f_88[iVar3 /*5*/].f_3);
			HUD::ADD_TEXT_COMPONENT_INTEGER(Global_1888478.f_88[iVar3 /*5*/].f_4);
			GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
		}
	}
	else if (Global_1888478.f_7[iVar3 /*8*/] == 1)
	{
		GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("BA_APP_BODY_DM2" /* GXT: ~HUD_COLOUR_WHITE~The VIP of ~a~~HUD_COLOUR_WHITE~ has challenged you to an Executive Deathmatch.~s~ */);
		HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(__LIB_19__::func_263(Global_1888478.f_7[iVar3 /*8*/].f_2));
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(__LIB_13__::func_422(Global_1888478.f_7[iVar3 /*8*/].f_2));
		GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	}
	if (bVar0)
	{
		iVar2 = __LIB_3__::func_586(Global_1888478.f_7[iVar3 /*8*/].f_2);
		if (iVar2 == 0)
		{
			bVar0 = false;
		}
		else
		{
			sVar1 = PED::GET_PEDHEADSHOT_TXD_STRING(iVar2);
		}
	}
	if (bVar0)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING(sVar1);
	}
	else
	{
		__LIB_0__::do_TEXT_COMMAND_SCALEFORM_STRING(&Local_99);
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	__LIB_2__::concatAndDo_SCALEFORM_MOVIE_METHOD(Global_20247, "DISPLAY_VIEW", SYSTEM::TO_FLOAT(26), -1082130432, -1082130432, -1082130432, -1082130432);
	__LIB_13__::func_420(&Local_96);
	__LIB_13__::func_478(13, &Local_90, 12, &Local_93, 4, &Local_84, &iLocal_105);
	iLocal_83 = 1;
}

void func_83()//Position - 0x1EB2
{
	if (Global_1888478.f_6)
	{
		if (iLocal_83 != 3)
		{
			if (!HUD::IS_WARNING_MESSAGE_ACTIVE())
			{
				Global_1888478.f_6 = 0;
			}
		}
	}
}

void func_85(bool bParam0)//Position - 0x1EEE
{
	int iVar0;
	int iVar1;
	bool bVar2;
	iLocal_103 = __LIB_0__::getMinusOneOrNull();
	if (!Global_20266.f_1 == 7)
	{
		Global_20266.f_1 = 7;
	}
	iVar0 = 0;
	if (bParam0)
	{
		iVar0 = iLocal_102;
	}
	if (iVar0 >= Global_1659409)
	{
		iVar0 = 0;
	}
	if (Global_22665)
	{
		func_49();
		Global_22665 = 0;
		return;
	}
	iVar1 = __LIB_13__::func_429();
	iVar1 = (iVar1 - __LIB_31__::func_709());
	if ((__LIB_1__::func_30(PLAYER::PLAYER_ID(), 0) && !__LIB_1__::func_375(1)) && iVar1 <= 0)
	{
		func_91();
		return;
	}
	func_86();
	__LIB_2__::concatAndDo_SCALEFORM_MOVIE_METHOD(Global_20247, "DISPLAY_VIEW", SYSTEM::TO_FLOAT(25), SYSTEM::TO_FLOAT(iVar0), -1082130432, -1082130432, -1082130432);
	__LIB_13__::func_420("CELL_BOSSAGE" /* GXT: SecuroServ */);
	bVar2 = false;
	if (iVar1 > 0)
	{
		bVar2 = true;
	}
	if (bVar2)
	{
		__LIB_13__::func_478(13, &Local_87, 12, &Local_93, 4, &Local_84, &iLocal_105);
	}
	else
	{
		__LIB_13__::func_478(1, "", 1, "", 4, &Local_84, &iLocal_105);
	}
	iLocal_83 = 0;
}

void func_86()//Position - 0x1FD8
{
	int iVar0;
	int iVar1;
	__LIB_2__::concatAndDo_SCALEFORM_MOVIE_METHOD(Global_20247, "SET_DATA_SLOT_EMPTY", SYSTEM::TO_FLOAT(25), -1082130432, -1082130432, -1082130432, -1082130432);
	iVar0 = 0;
	while (iVar0 < __LIB_13__::func_429())
	{
		if (Global_1888478.f_7[iVar0 /*8*/].f_1 == 1 && Global_1888478.f_7[iVar0 /*8*/].f_7 == 0)
		{
			switch (Global_1888478.f_7[iVar0 /*8*/])
			{
				case 0:
					if (func_90(iVar0, iVar1))
					{
						iVar1++;
					}
					break;
				case 1:
					if (func_88(iVar0, iVar1))
					{
						iVar1++;
					}
					break;
				}
		}
		iVar0++;
	}
	if (iVar1 > 0)
	{
		return;
	}
	func_87();
}

void func_87()//Position - 0x208D
{
	bool bVar0;
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20247, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(25);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
	if (__LIB_0__::func_796(PLAYER::PLAYER_ID()))
	{
		__LIB_0__::do_TEXT_COMMAND_SCALEFORM_STRING("BA_APP_NONEB" /* GXT: No Invites */);
	}
	else
	{
		__LIB_0__::do_TEXT_COMMAND_SCALEFORM_STRING("BA_APP_NONE" /* GXT: No VIP Invites */);
	}
	__LIB_0__::do_TEXT_COMMAND_SCALEFORM_STRING("");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(-1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
	bVar0 = NETWORK::NETWORK_IS_GAME_IN_PROGRESS();
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bVar0);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

int func_88(int iParam0, int iParam1)//Position - 0x20EB
{
	struct<16> Var0;
	int iVar1;
	int iVar2;
	if (Global_1888478.f_7[iParam0 /*8*/].f_2 == __LIB_0__::getMinusOneOrNull() || !__LIB_0__::func_156(Global_1888478.f_7[iParam0 /*8*/].f_2, 0, 1))
	{
		return 0;
	}
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20247, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(25);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
	Var0 = { __LIB_13__::func_458(Global_1888478.f_7[iParam0 /*8*/].f_2) };
	__LIB_0__::func_700(&Var0);
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("BA_APP_BODY_DM1" /* GXT: Has challenged you to an Executive Deathmatch. */);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(-1);
	iVar1 = 1;
	iVar2 = __LIB_1__::func_368(Global_1888478.f_7[iParam0 /*8*/].f_2);
	if (iVar2 != -1)
	{
		iVar1 = __LIB_1__::func_357(iVar2);
	}
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	return 1;
}

int func_90(int iParam0, int iParam1)//Position - 0x21A8
{
	struct<16> Var0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	if (Global_1888478.f_7[iParam0 /*8*/].f_2 == __LIB_0__::getMinusOneOrNull() || !__LIB_0__::func_156(Global_1888478.f_7[iParam0 /*8*/].f_2, 0, 1))
	{
		return 0;
	}
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20247, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(25);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
	Var0 = { __LIB_13__::func_458(Global_1888478.f_7[iParam0 /*8*/].f_2) };
	__LIB_0__::func_700(&Var0);
	bVar1 = __LIB_3__::func_39(Global_1888478.f_7[iParam0 /*8*/].f_2);
	iVar2 = __LIB_3__::func_490(Global_1888478.f_7[iParam0 /*8*/].f_2);
	if (iVar2 == 0)
	{
		if (bVar1)
		{
			__LIB_0__::do_TEXT_COMMAND_SCALEFORM_STRING("BA_APP_BODYCT" /* GXT: Wants you to become an Associate. */);
		}
		else
		{
			__LIB_0__::do_TEXT_COMMAND_SCALEFORM_STRING("BA_APP_BODY_T" /* GXT: Wants you to become a Bodyguard. */);
		}
	}
	else if (iVar2 == 1)
	{
		if (bVar1)
		{
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("BA_APP_BODYCT3" /* GXT: Wants you to become an Associate.~n~~1~ other in this Organization. */);
		}
		else
		{
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("BA_APP_BODY_T3" /* GXT: Wants you to become a Bodyguard.~n~~1~ other in this Organization. */);
		}
		HUD::ADD_TEXT_COMPONENT_INTEGER(iVar2);
		GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	}
	else
	{
		if (bVar1)
		{
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("BA_APP_BODYCT2" /* GXT: Wants you to become an Associate.~n~~1~ others in this Organization. */);
		}
		else
		{
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("BA_APP_BODY_T2" /* GXT: Wants you to become a Bodyguard.~n~~1~ others in this Organization. */);
		}
		HUD::ADD_TEXT_COMPONENT_INTEGER(iVar2);
		GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	}
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(-1);
	iVar3 = 1;
	iVar4 = __LIB_1__::func_368(Global_1888478.f_7[iParam0 /*8*/].f_2);
	if (iVar4 != -1)
	{
		iVar3 = __LIB_1__::func_357(iVar4);
	}
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar3);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	return 1;
}

void func_91()//Position - 0x22DD
{
	__LIB_2__::concatAndDo_SCALEFORM_MOVIE_METHOD(Global_20247, "SET_DATA_SLOT_EMPTY", SYSTEM::TO_FLOAT(26), -1082130432, -1082130432, -1082130432, -1082130432);
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20247, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(26);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(__LIB_19__::func_263(PLAYER::PLAYER_ID()));
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(__LIB_13__::func_394());
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	__LIB_0__::do_TEXT_COMMAND_SCALEFORM_STRING("BA_APP_NONEG" /* GXT: You are already a member of this Organization. */);
	__LIB_0__::do_TEXT_COMMAND_SCALEFORM_STRING("CELL_AGBOSSPIC" /* GXT: CHAR_GANGAPP */);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	__LIB_2__::concatAndDo_SCALEFORM_MOVIE_METHOD(Global_20247, "DISPLAY_VIEW", SYSTEM::TO_FLOAT(26), -1082130432, -1082130432, -1082130432, -1082130432);
	__LIB_13__::func_420("CELL_BOSSAGE" /* GXT: SecuroServ */);
	__LIB_13__::func_478(1, "", 1, "", 4, &Local_84, &iLocal_105);
	iLocal_83 = 2;
}

void func_96()//Position - 0x24F1
{
	Global_1888478.f_1 = 0;
	func_97();
}

void func_97()//Position - 0x2504
{
	Global_1888478.f_5 = 0;
}

