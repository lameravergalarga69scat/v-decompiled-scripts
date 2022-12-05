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
	int iLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	char* sLocal_21 = NULL;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	float fLocal_29 = 0f;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	float fLocal_33 = 0f;
	float fLocal_34 = 0f;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	int iLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
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
	float fLocal_63 = 0f;
	var uLocal_64 = 0;
	float fLocal_65 = 0f;
	float fLocal_66 = 0f;
	float fLocal_67 = 0f;
	float fLocal_68 = 0f;
	float fLocal_69 = 0f;
	float fLocal_70 = 0f;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	int iLocal_73 = 0;
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	struct<2> Local_77 = { 0, 0 } ;
	var uLocal_78 = 0;
	int iLocal_79 = 0;
	int iLocal_80 = 0;
	int iLocal_81 = 0;
	struct<3> Local_82 = { 0, 0, 0 } ;
	int iLocal_83 = 0;
	int iLocal_84 = 0;
	int iLocal_85 = 0;
	int iLocal_86 = 0;
	int iLocal_87 = 0;
	int iLocal_88 = 0;
	int iLocal_89 = 0;
	int iLocal_90 = 0;
	struct<2> Local_91 = { 0, 0 } ;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	int iLocal_94 = 0;
	int iLocal_95 = 0;
	int iLocal_96 = 0;
	int iLocal_97 = 0;
	int iLocal_98 = 0;
	int iLocal_99 = 0;
	int iLocal_100 = 0;
	int iLocal_101 = 0;
	int iLocal_102 = 0;
	int iLocal_103 = 0;
	int iLocal_104 = 0;
	int iLocal_105 = 0;
	int iLocal_106 = 0;
	var uLocal_107 = 0;
	bool bLocal_108 = 0;
	int iLocal_109 = 0;
	int iLocal_110 = 0;
	int iLocal_111 = 0;
	int iLocal_112 = 0;
	int iLocal_113 = 0;
	int iLocal_114 = 0;
	struct<3> Local_115 = { 0, 0, 0 } ;
	int iLocal_116 = 0;
	int iLocal_117 = 0;
	int iLocal_118 = 0;
#endregion
void __EntryFunction__()//Position - 0x0
{
	var uVar0;
	struct<13> Var1;
	int iVar2;
	float fVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
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
	sLocal_21 = "NULL";
	fLocal_24 = 80f;
	fLocal_25 = 140f;
	fLocal_26 = 180f;
	fLocal_29 = 0f;
	fLocal_33 = -0.0375f;
	fLocal_34 = 0.17f;
	iLocal_37 = 3;
	iLocal_41 = 1;
	iLocal_42 = 65;
	iLocal_43 = 49;
	iLocal_44 = 64;
	fLocal_63 = ((0.05f + 0.275f) - 0.01f);
	fLocal_65 = 0.73f;
	fLocal_66 = 0.55f;
	fLocal_67 = 0.73f;
	fLocal_68 = 0.45f;
	fLocal_69 = 0f;
	fLocal_70 = 0f;
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	Global_20461 = 145;
	MISC::CLEAR_BIT(&Global_8137, 8);
	MISC::CLEAR_BIT(&Global_8136, 14);
	MISC::CLEAR_BIT(&Global_4541229, 3);
	MISC::CLEAR_BIT(&Global_8137, 10);
	MISC::CLEAR_BIT(&Global_8136, 17);
	MISC::CLEAR_BIT(&Global_8136, 9);
	MISC::CLEAR_BIT(&Global_8136, 26);
	MISC::CLEAR_BIT(&Global_8136, 23);
	MISC::CLEAR_BIT(&Global_8137, 24);
	MISC::CLEAR_BIT(&Global_8137, 25);
	MISC::CLEAR_BIT(&Global_8137, 27);
	MISC::CLEAR_BIT(&Global_8137, 26);
	MISC::CLEAR_BIT(&Global_8136, 30);
	Global_2825434 = 0;
	iLocal_116 = 0;
	GRAPHICS::DRAW_LOW_QUALITY_PHOTO_TO_PHONE(false, false);
	MOBILE::SCRIPT_IS_MOVING_MOBILE_PHONE_OFFSCREEN(false);
	Global_20232 = 0;
	iLocal_74 = 0;
	Global_20210 = 0;
	Global_20250 = 0;
	Global_20251 = 0;
	__LIB_24__.func_942();
	Global_20197 = { Global_20229 };
	Global_20270 = 4;
	Global_20271 = 0;
	Global_8741 = 1;
	Global_20246 = Global_20270;
	if (Global_20248 == 0)
	{
		Global_20249 = 0;
		if (Global_78319)
		{
			if (__LIB_6__.func_363())
			{
				Global_20247 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("cellphone_badger");
			}
			else
			{
				Global_20247 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("cellphone_ifruit");
			}
			iLocal_85 = 1;
			if (iLocal_85 == 1)
			{
			}
		}
		else if (Global_20209)
		{
			Global_20254 = 1;
			Global_20247 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("cellphone_prologue");
		}
		else
		{
			Global_20247 = GRAPHICS::REQUEST_SCALEFORM_MOVIE(&(Global_113386.f_14051[Global_20266 /*20*/]));
		}
		SYSTEM::SETTIMERA(0);
		while (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_20247) && Global_20249 == 0)
		{
			SYSTEM::WAIT(0);
			if (SYSTEM::TIMERA() > 20000)
			{
				Global_20249 = 1;
			}
			if (MISC::IS_PC_VERSION())
			{
				if (DECORATOR::DECOR_EXIST_ON(PLAYER::PLAYER_PED_ID(), "Synched"))
				{
					if (SYSTEM::TIMERA() > 2000)
					{
						Global_20249 = 1;
					}
				}
			}
			if (Global_20265 == 1)
			{
				func_120();
			}
		}
		if (Global_20249 == 1)
		{
			if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_20247))
			{
				__LIB_11__.func_299(Global_20247, "SHUTDOWN_MOVIE");
			}
			SYSTEM::WAIT(0);
			GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&Global_20247);
			Global_20207 = 0;
			Global_20248 = 0;
			Global_20462 = 0;
			if (Global_113386.f_14051.f_84 == 1)
			{
				Global_113386.f_14051.f_84 = 0;
				HUD::CLEAR_FLOATING_HELP(0, true);
			}
			Global_20210 = 1;
			Global_20266.f_1 = 3;
			__LIB_0__.func_296();
			Global_20254 = 0;
			MOBILE::DESTROY_MOBILE_PHONE();
			MISC::CLEAR_BIT(&Global_8136, 9);
			MISC::CLEAR_BIT(&Global_8136, 27);
			MISC::CLEAR_BIT(&Global_8136, 30);
			MISC::CLEAR_BIT(&Global_8137, 5);
			MISC::CLEAR_BIT(&Global_8137, 21);
			MISC::CLEAR_BIT(&Global_8138, 2);
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				AUDIO::STOP_PED_RINGTONE(PLAYER::PLAYER_PED_ID());
			}
			if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				AUDIO::STOP_PED_RINGTONE(PLAYER::PLAYER_PED_ID());
			}
			Global_20464 = 0;
			Global_22665 = 0;
			Global_22664 = 0;
			Global_21618 = 0;
			__LIB_26__.func_418();
			__LIB_20__.func_508();
			Global_4541508 = 0;
			SCRIPT::TERMINATE_THIS_THREAD();
		}
		Global_20190 = 0.1f;
		Global_20191 = 0.38f;
		Global_20192 = 0.195f;
		Global_20193 = 0.05f;
		if ((MISC::IS_XBOX360_VERSION() || __LIB_0__.func_53()) || MISC::IS_PC_VERSION())
		{
			HUD::GET_HUD_COLOUR(18, &iLocal_104, &iLocal_105, &iLocal_106, &uLocal_107);
			__LIB_2__.func_41(Global_20247, "SET_SOFT_KEYS_COLOUR", 2f, SYSTEM::TO_FLOAT(iLocal_104), SYSTEM::TO_FLOAT(iLocal_105), SYSTEM::TO_FLOAT(iLocal_106), -1082130432);
			HUD::GET_HUD_COLOUR(9, &iLocal_104, &iLocal_105, &iLocal_106, &uLocal_107);
			__LIB_2__.func_41(Global_20247, "SET_SOFT_KEYS_COLOUR", 1f, SYSTEM::TO_FLOAT(iLocal_104), SYSTEM::TO_FLOAT(iLocal_105), SYSTEM::TO_FLOAT(iLocal_106), -1082130432);
			HUD::GET_HUD_COLOUR(6, &iLocal_104, &iLocal_105, &iLocal_106, &uLocal_107);
			__LIB_2__.func_41(Global_20247, "SET_SOFT_KEYS_COLOUR", 3f, SYSTEM::TO_FLOAT(iLocal_104), SYSTEM::TO_FLOAT(iLocal_105), SYSTEM::TO_FLOAT(iLocal_106), -1082130432);
		}
		else
		{
			if (!MISC::IS_JAPANESE_VERSION())
			{
				HUD::GET_HUD_COLOUR(9, &iLocal_104, &iLocal_105, &iLocal_106, &uLocal_107);
				__LIB_2__.func_41(Global_20247, "SET_SOFT_KEYS_COLOUR", 2f, SYSTEM::TO_FLOAT(iLocal_104), SYSTEM::TO_FLOAT(iLocal_105), SYSTEM::TO_FLOAT(iLocal_106), -1082130432);
				HUD::GET_HUD_COLOUR(126, &iLocal_104, &iLocal_105, &iLocal_106, &uLocal_107);
				__LIB_2__.func_41(Global_20247, "SET_SOFT_KEYS_COLOUR", 1f, SYSTEM::TO_FLOAT(iLocal_104), SYSTEM::TO_FLOAT(iLocal_105), SYSTEM::TO_FLOAT(iLocal_106), -1082130432);
				HUD::GET_HUD_COLOUR(6, &iLocal_104, &iLocal_105, &iLocal_106, &uLocal_107);
				__LIB_2__.func_41(Global_20247, "SET_SOFT_KEYS_COLOUR", 3f, SYSTEM::TO_FLOAT(iLocal_104), SYSTEM::TO_FLOAT(iLocal_105), SYSTEM::TO_FLOAT(iLocal_106), -1082130432);
			}
			if (MISC::IS_JAPANESE_VERSION())
			{
				HUD::GET_HUD_COLOUR(6, &iLocal_104, &iLocal_105, &iLocal_106, &uLocal_107);
				__LIB_2__.func_41(Global_20247, "SET_SOFT_KEYS_COLOUR", 2f, SYSTEM::TO_FLOAT(iLocal_104), SYSTEM::TO_FLOAT(iLocal_105), SYSTEM::TO_FLOAT(iLocal_106), -1082130432);
				HUD::GET_HUD_COLOUR(126, &iLocal_104, &iLocal_105, &iLocal_106, &uLocal_107);
				__LIB_2__.func_41(Global_20247, "SET_SOFT_KEYS_COLOUR", 1f, SYSTEM::TO_FLOAT(iLocal_104), SYSTEM::TO_FLOAT(iLocal_105), SYSTEM::TO_FLOAT(iLocal_106), -1082130432);
				HUD::GET_HUD_COLOUR(9, &iLocal_104, &iLocal_105, &iLocal_106, &uLocal_107);
				__LIB_2__.func_41(Global_20247, "SET_SOFT_KEYS_COLOUR", 3f, SYSTEM::TO_FLOAT(iLocal_104), SYSTEM::TO_FLOAT(iLocal_105), SYSTEM::TO_FLOAT(iLocal_106), -1082130432);
			}
		}
		if (Global_20249 == 0)
		{
		}
		func_111();
		if (Global_78319)
		{
			StringCopy(&Global_20255, "Phone_SoundSet_Michael", 24);
		}
		Global_20248 = 1;
	}
	Global_8139 = 99;
	func_110();
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		iLocal_96 = ENTITY::GET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID());
	}
	if (HUD::IS_RADAR_HIDDEN())
	{
		Global_22619 = 1;
	}
	else
	{
		Global_22619 = 0;
	}
	__LIB_2__.func_41(Global_20247, "SET_SLEEP_MODE", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
	Global_20208 = 1;
	if (Global_78319)
	{
		Global_20466 = 0;
		if (__LIB_6__.func_363())
		{
			if (Global_1836488 == 1)
			{
				Global_4541505 = 4;
			}
			else
			{
				Global_4541505 = 2;
			}
		}
		else
		{
			Global_4541505 = __LIB_0__.func_534(2030, -1, 0);
		}
		if (Global_4541505 < 1 || Global_4541505 > 7)
		{
			Global_4541505 = 1;
		}
		__LIB_2__.func_41(Global_20247, "SET_THEME", SYSTEM::TO_FLOAT(Global_4541505), -1082130432, -1082130432, -1082130432, -1082130432);
		__LIB_9__.func_606();
		if (__LIB_6__.func_363())
		{
			if (Global_1836488 == 1)
			{
				Global_4541506 = 16;
			}
			else
			{
				Global_4541506 = 9;
			}
		}
		else
		{
			Global_4541506 = __LIB_0__.func_534(2029, -1, 0);
		}
		if (Global_4541506 == 0)
		{
			Var1 = { __LIB_0__.func_604(PLAYER::PLAYER_ID()) };
			iVar2 = 0;
			if (NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(0) == 0)
			{
			}
			if (Global_4541509 == 1)
			{
			}
			if ((NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Var1) && NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(0)) && Global_4541509 == 0)
			{
				if (NETWORK::NETWORK_CLAN_GET_EMBLEM_TXD_NAME(&Var1, &uVar0))
				{
				}
				else
				{
					iVar2 = 1;
				}
				if (iVar2 == 0)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20247, "SET_BACKGROUND_CREW_IMAGE");
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_2000" /* GXT: ~a~ */);
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&uVar0);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				else
				{
					__LIB_2__.func_41(Global_20247, "SET_BACKGROUND_IMAGE", SYSTEM::TO_FLOAT(0), -1082130432, -1082130432, -1082130432, -1082130432);
				}
			}
			else
			{
				__LIB_2__.func_41(Global_20247, "SET_BACKGROUND_IMAGE", SYSTEM::TO_FLOAT(0), -1082130432, -1082130432, -1082130432, -1082130432);
			}
		}
		else
		{
			__LIB_2__.func_41(Global_20247, "SET_BACKGROUND_IMAGE", SYSTEM::TO_FLOAT(Global_4541506), -1082130432, -1082130432, -1082130432, -1082130432);
		}
	}
	else
	{
		if (Global_20209)
		{
			Global_20466 = 0;
		}
		else if (Global_113386.f_14051.f_88 == 1 || Global_113386.f_14051.f_89 == 1)
		{
			Global_20466 = 0;
		}
		else
		{
			Global_20466 = 0;
		}
		__LIB_2__.func_41(Global_20247, "SET_THEME", SYSTEM::TO_FLOAT(Global_113386.f_14051[Global_20266 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
		if (Global_8940 == 0)
		{
			__LIB_2__.func_41(Global_20247, "SET_BACKGROUND_IMAGE", SYSTEM::TO_FLOAT(Global_113386.f_14051[Global_20266 /*20*/].f_9), -1082130432, -1082130432, -1082130432, -1082130432);
		}
		else
		{
			MOBILE::SET_MOBILE_PHONE_SCALE(575f);
		}
		__LIB_9__.func_606();
	}
	iLocal_86 = func_104();
	if (Global_20209 == 0)
	{
		func_92();
	}
	Global_20244 = 0;
	Global_20465 = 0;
	MISC::CLEAR_BIT(&Global_8136, 9);
	Global_2725398 = 0;
	if (__LIB_20__.func_449(0) && NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		Global_2725398 = 1;
	}
	__LIB_2__.func_41(Global_20247, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
	__LIB_19__.func_392();
	__LIB_11__.func_305();
	__LIB_8__.func_120(1);
	AUDIO::PLAY_SOUND_FRONTEND(-1, "Pull_Out", &Global_20255, true);
	SYSTEM::SETTIMERB(0);
	while (Global_20266.f_1 < 6 && Global_20249 == 0)
	{
		SYSTEM::WAIT(0);
		if (SYSTEM::TIMERB() > 10000)
		{
			Global_20249 = 1;
		}
		if (Global_20266.f_1 < 4)
		{
			Global_20249 = 1;
		}
	}
	if (Global_20266.f_1 == 5 || Global_20266.f_1 == 6)
	{
		if (__LIB_0__.func_39(14))
		{
			__LIB_2__.func_41(Global_20247, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(6), -1082130432, -1082130432, -1082130432);
		}
		else
		{
			__LIB_2__.func_41(Global_20247, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_20270), -1082130432, -1082130432, -1082130432);
		}
		if (Global_8941[Global_20266 /*2811*/][0 /*281*/].f_259 == 2)
		{
			__LIB_2__.func_41(Global_20247, "SET_SLEEP_MODE", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
		}
		else
		{
			__LIB_2__.func_41(Global_20247, "SET_SLEEP_MODE", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
		}
		if (Global_20254)
		{
			__LIB_3__.func_637(Global_20247, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205" /* GXT: SELECT */, 0, 0, 0, 0);
		}
		else
		{
			__LIB_3__.func_637(Global_20247, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
		}
		if (Global_20254)
		{
			__LIB_3__.func_637(Global_20247, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206" /* GXT: BACK */, 0, 0, 0, 0);
		}
		else
		{
			__LIB_3__.func_637(Global_20247, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
		}
		if (Global_20466 == 0)
		{
			__LIB_3__.func_637(Global_20247, "SET_SOFT_KEYS", 1f, 0f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
			MISC::CLEAR_BIT(&Global_8136, 17);
		}
		else if (Global_78319)
		{
			__LIB_3__.func_637(Global_20247, "SET_SOFT_KEYS", 1f, 0f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
			MISC::CLEAR_BIT(&Global_8136, 17);
		}
		else
		{
			if (Global_20465 == 1)
			{
				if (Global_20254)
				{
					__LIB_3__.func_637(Global_20247, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, "CELL_225" /* GXT: NEXT */, 0, 0, 0, 0);
				}
				else
				{
					__LIB_3__.func_637(Global_20247, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else if (Global_20254)
			{
				__LIB_3__.func_637(Global_20247, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, "CELL_225" /* GXT: NEXT */, 0, 0, 0, 0);
			}
			else
			{
				__LIB_3__.func_637(Global_20247, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			MISC::SET_BIT(&Global_8136, 17);
		}
		__LIB_19__.func_846();
	}
	Global_20252 = 1;
	func_79();
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iLocal_102 = NETWORK::GET_NETWORK_TIME();
	}
	else
	{
		iLocal_97 = MISC::GET_GAME_TIMER();
	}
	if (Global_20462 == 1)
	{
		if (Global_8941[Global_20266 /*2811*/][0 /*281*/].f_259 == 2)
		{
			if (Global_113386.f_14051.f_84 == 0)
			{
				Global_113386.f_14051.f_84 = 1;
				if (Global_20211 == 0)
				{
					fVar3 = 0.75f;
					fVar4 = 0.8f;
				}
				else
				{
					fVar3 = 0.65f;
					fVar4 = 0.77f;
				}
				if (fVar3 == fVar4)
				{
				}
				__LIB_0__.func_151("CELL_7052" /* GXT: Sleep Mode is active.~n~The game story is paused. To continue it, enter the SETTINGS menu, select PROFILE then NORMAL MODE or trigger an existing mission. */, 10000);
			}
		}
	}
	if (Global_78319 == 0)
	{
		iLocal_18 = MISC::GET_GAME_TIMER() + 375;
	}
	if (__LIB_9__.func_620())
	{
		iLocal_79 = 1;
	}
	else
	{
		iLocal_79 = 0;
	}
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		if (PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), false))
		{
			iLocal_80 = 1;
			if (__LIB_9__.func_620())
			{
				__LIB_11__.func_304();
			}
		}
		else
		{
			iLocal_80 = 0;
		}
	}
	if (MISC::IS_PC_VERSION())
	{
		if (Global_78319 == 0)
		{
			iLocal_99 = MISC::GET_GAME_TIMER();
			iLocal_101 = 0;
		}
	}
	MISC::CLEAR_BIT(&Global_8138, 9);
	while (true)
	{
		SYSTEM::WAIT(0);
		if (BitTest(Global_4541229, 24))
		{
			if (!Global_20465)
			{
				if (Global_20266.f_1 == 6 || Global_20266.f_1 > 6)
				{
					MISC::CLEAR_BIT(&Global_4541229, 24);
					__LIB_19__.func_392();
					__LIB_2__.func_41(Global_20247, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
					__LIB_8__.func_120(1);
					if (Global_20266.f_1 == 6)
					{
						__LIB_2__.func_41(Global_20247, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_20246), -1082130432, -1082130432, -1082130432);
					}
				}
			}
		}
		if (__LIB_2__.func_174())
		{
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 114 /*INPUT_VEH_FLY_ATTACK*/, true);
		}
		if (Global_78319 == 0)
		{
			if (iLocal_76)
			{
				if (Global_20266.f_1 == 6 || Global_20266.f_1 == 7)
				{
					iLocal_76 = 0;
				}
			}
			if (Global_20266.f_1 > 4)
			{
				if ((BitTest(Global_8136, 14) && Global_4541508 == 0) && Global_20206 == 0)
				{
					if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
					{
						if (__LIB_9__.func_607())
						{
							MOBILE::GET_MOBILE_PHONE_POSITION(&Local_77);
							if (Global_20212[Global_20211 /*3*/].f_1 != Local_77.f_1)
							{
								func_72();
							}
						}
						else
						{
							MOBILE::GET_MOBILE_PHONE_POSITION(&Local_77);
							if (Global_20219[Global_20211 /*3*/].f_1 != Local_77.f_1)
							{
								if (!__LIB_2__.func_174())
								{
								}
								if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("appemail")) < 1)
								{
									func_70();
								}
							}
						}
						if (iLocal_80 == 0)
						{
							if (PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), false))
							{
								iLocal_80 = 1;
								func_70();
								__LIB_11__.func_304();
							}
						}
						else if (!PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), false))
						{
							iLocal_80 = 0;
							func_72();
							if (Global_20266.f_1 == 10 || Global_20266.f_1 == 9)
							{
								if (Global_21605 != 2)
								{
									__LIB_19__.func_937();
								}
							}
						}
						if (iLocal_79 == 0)
						{
							if (__LIB_9__.func_620())
							{
								iLocal_79 = 1;
								if (PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), false))
								{
									__LIB_11__.func_304();
								}
								func_72();
							}
						}
						else
						{
							if (PED::GET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID()))
							{
								if (Global_20266.f_1 == 10 || Global_20266.f_1 == 9)
								{
									PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 26 /*INPUT_LOOK_BEHIND*/, true);
								}
							}
							if (__LIB_9__.func_620() == 0)
							{
								iLocal_79 = 0;
								func_70();
							}
						}
					}
				}
			}
		}
		if (Global_2725398 == 1)
		{
			if (!__LIB_20__.func_449(0) || !NETWORK::NETWORK_IS_SIGNED_ONLINE())
			{
				if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("appcamera")) == 0)
				{
					if (Global_20266.f_1 > 3)
					{
						Global_20251 = 1;
						__LIB_0__.func_132();
						__LIB_6__.func_849(0);
						Global_2725398 = 0;
					}
				}
			}
		}
		if (Global_20467 == 0)
		{
			if ((Global_43052 != 15 || Global_8141 == 1) || __LIB_0__.func_2(0))
			{
				if (!Global_20465)
				{
					if (Global_20266.f_1 == 6)
					{
						Global_8142 = 42;
						__LIB_2__.func_41(Global_20247, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
						__LIB_19__.func_392();
						__LIB_11__.func_305();
						__LIB_8__.func_120(1);
						__LIB_2__.func_41(Global_20247, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_20246), -1082130432, -1082130432, -1082130432);
					}
				}
				Global_20467 = 1;
			}
		}
		else if ((Global_43052 == 15 && __LIB_0__.func_2(0) == 0) && Global_8141 == 0)
		{
			if (!Global_20465)
			{
				if (Global_20266.f_1 == 6)
				{
					Global_8142 = 255;
					__LIB_2__.func_41(Global_20247, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
					__LIB_19__.func_392();
					__LIB_11__.func_305();
					__LIB_8__.func_120(1);
					__LIB_2__.func_41(Global_20247, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_20246), -1082130432, -1082130432, -1082130432);
				}
			}
			Global_20467 = 0;
		}
		if (Global_20468 == 0)
		{
			if (BitTest(Global_8137, 3))
			{
				if (!Global_20465)
				{
					if (Global_20266.f_1 == 6)
					{
						__LIB_2__.func_41(Global_20247, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
						__LIB_19__.func_392();
						__LIB_11__.func_305();
						__LIB_8__.func_120(1);
						__LIB_2__.func_41(Global_20247, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_20246), -1082130432, -1082130432, -1082130432);
					}
				}
				Global_20468 = 1;
			}
		}
		else if (!BitTest(Global_8137, 3))
		{
			if (!Global_20465)
			{
				if (Global_20266.f_1 == 6)
				{
					__LIB_2__.func_41(Global_20247, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
					__LIB_19__.func_392();
					__LIB_11__.func_305();
					__LIB_8__.func_120(1);
					__LIB_2__.func_41(Global_20247, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_20246), -1082130432, -1082130432, -1082130432);
				}
			}
			Global_20468 = 0;
		}
		if (!HUD::IS_PAUSE_MENU_ACTIVE())
		{
			if (Global_20194.f_1 != Global_20212[Global_20211 /*3*/].f_1 || __LIB_9__.func_620())
			{
				if (Global_20266.f_1 > 3)
				{
					if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("apptrackify")) == 0)
					{
						if (Global_78319)
						{
							if (Global_20266.f_1 == 9)
							{
								if (Global_21658 == 1 || BitTest(Global_8137, 23))
								{
									PAD::SET_INPUT_EXCLUSIVE(0 /*PLAYER_CONTROL*/, Global_20235);
								}
							}
							else
							{
								PAD::SET_INPUT_EXCLUSIVE(0 /*PLAYER_CONTROL*/, Global_20235);
							}
						}
						else
						{
							PAD::SET_INPUT_EXCLUSIVE(0 /*PLAYER_CONTROL*/, Global_20235);
						}
					}
					if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("appsecurohack")) == 0)
					{
						PAD::SET_INPUT_EXCLUSIVE(0 /*PLAYER_CONTROL*/, Global_20236);
						if (BitTest(Global_8136, 17))
						{
							PAD::SET_INPUT_EXCLUSIVE(0 /*PLAYER_CONTROL*/, Global_20237);
						}
					}
					if (!__LIB_0__.func_545() && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("appsecurohack")) == 0)
					{
						PAD::SET_INPUT_EXCLUSIVE(0 /*PLAYER_CONTROL*/, Global_20238);
					}
				}
			}
			if (Global_20194.f_1 == Global_20212[Global_20211 /*3*/].f_1)
			{
			}
		}
		if (!PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
		{
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 140 /*INPUT_MELEE_ATTACK_LIGHT*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 141 /*INPUT_MELEE_ATTACK_HEAVY*/, true);
		}
		if (!HUD::IS_PAUSE_MENU_ACTIVE())
		{
			if (!Global_75485)
			{
				if (!__LIB_2__.func_174())
				{
					PAD::SET_INPUT_EXCLUSIVE(0 /*PLAYER_CONTROL*/, 180 /*INPUT_CELLPHONE_SCROLL_FORWARD*/);
					PAD::SET_INPUT_EXCLUSIVE(0 /*PLAYER_CONTROL*/, 181 /*INPUT_CELLPHONE_SCROLL_BACKWARD*/);
					PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 180 /*INPUT_CELLPHONE_SCROLL_FORWARD*/, true);
					PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 181 /*INPUT_CELLPHONE_SCROLL_BACKWARD*/, true);
				}
				PAD::SET_INPUT_EXCLUSIVE(0 /*PLAYER_CONTROL*/, Global_20240);
				if (!__LIB_0__.func_545())
				{
					PAD::SET_INPUT_EXCLUSIVE(0 /*PLAYER_CONTROL*/, Global_20241);
				}
				if (Global_20266.f_1 > 4)
				{
					PAD::SET_INPUT_EXCLUSIVE(0 /*PLAYER_CONTROL*/, Global_20243);
				}
			}
		}
		if (__LIB_9__.func_596(2, Global_20234, 0))
		{
			iLocal_94 = 1;
			SYSTEM::SETTIMERA(0);
		}
		if (iLocal_75 == 1)
		{
			if (!PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, Global_20235))
			{
				Global_8140 = 1;
				iLocal_75 = 0;
			}
			if (!Global_20266.f_1 > 3)
			{
				iLocal_75 = 0;
			}
		}
		if (iLocal_94)
		{
			if (PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, Global_20234))
			{
				if (SYSTEM::TIMERA() > 5000)
				{
					Global_20266.f_1 = 3;
					__LIB_20__.func_507();
				}
			}
			else
			{
				iLocal_94 = 0;
			}
		}
		Global_8744 = MISC::GET_GAME_TIMER();
		if (Global_20253)
		{
			func_79();
			Global_20252 = 1;
			Global_20253 = 0;
		}
		if (Global_20464 == 0)
		{
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(6);
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
			func_53();
			func_52();
			HUD::SET_TEXT_RENDER_ID(iLocal_83);
			if (Global_20252 == 1)
			{
				GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(4);
				if (Global_20209)
				{
					GRAPHICS::DRAW_SCALEFORM_MOVIE(Global_20247, Global_20186, Global_20187, Global_20188, Global_20189, 255, 255, 255, 255, 0);
				}
				else
				{
					GRAPHICS::DRAW_SCALEFORM_MOVIE(Global_20247, Global_20186, Global_20187, Global_20188, Global_20189, 255, 255, 255, 255, 0);
				}
				func_110();
			}
			if (Global_20206 == 1)
			{
				if (Global_20266.f_1 > 3)
				{
					func_51();
				}
			}
			else if (Global_20266.f_1 > 3)
			{
				if (Global_4541508 == 1)
				{
					func_50();
				}
				if (BitTest(Global_8137, 25))
				{
					if (Global_78319 == 1)
					{
						func_49();
					}
				}
				else if (!BitTest(Global_8137, 24))
				{
					if (BitTest(Global_8137, 26))
					{
						if (__LIB_9__.func_596(2, Global_20233, 0))
						{
							MISC::SET_BIT(&Global_8137, 25);
							MISC::CLEAR_BIT(&Global_8137, 26);
							MISC::CLEAR_BIT(&Global_8138, 2);
						}
					}
				}
				else if (Global_78319 == 1)
				{
					func_48();
				}
			}
		}
		if (iLocal_74)
		{
			if (Global_20266.f_1 == 6)
			{
				func_44();
			}
		}
		else if (!BitTest(Global_8136, 23))
		{
			if (Global_20266.f_1 == 5 || Global_20266.f_1 == 6)
			{
				if (Global_20464 == 0)
				{
					if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("appcamera")) < 1 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("appemail")) < 1)
					{
						if (Global_20209 == 0)
						{
							if (BitTest(Global_8136, 14))
							{
								if (!Global_78319)
								{
									if (iLocal_75 == 0)
									{
										if (!__LIB_0__.func_39(14))
										{
											func_43();
										}
										else if (Global_2725398)
										{
											func_42();
										}
									}
								}
								else if (BitTest(Global_8138, 9))
								{
									func_41();
								}
								else
								{
									func_24();
								}
							}
						}
						if (BitTest(Global_8136, 9))
						{
							__LIB_38__.func_104(0, 0, 1, 1);
						}
						else if (Global_22664 == 0)
						{
							if (!BitTest(Global_4541229, 3))
							{
								if (Global_78319)
								{
									func_21();
								}
								func_20();
								func_18();
							}
						}
						else
						{
							if (Global_78319)
							{
								func_21();
							}
							if (!BitTest(Global_4541229, 3))
							{
								if (Global_22664 == 1)
								{
									if (BitTest(Global_4541229, 1))
									{
										if (BitTest(Global_8136, 14))
										{
											if (Global_78319)
											{
												__LIB_38__.func_104(7, 0, 1, 0);
											}
											else
											{
												Global_22665 = 0;
											}
											Global_22664 = 0;
											MISC::CLEAR_BIT(&Global_4541229, 1);
										}
									}
									else if (BitTest(Global_8136, 14))
									{
										__LIB_38__.func_104(7, 0, 1, 0);
										Global_22664 = 0;
									}
								}
								else
								{
									if (Global_22664 == 3)
									{
										__LIB_38__.func_104(1, 0, 1, 0);
										Global_22664 = 0;
									}
									if (Global_22664 == 2)
									{
										__LIB_38__.func_104(14, 0, 1, 0);
										Global_22664 = 0;
									}
									if (Global_22664 == 4)
									{
										__LIB_38__.func_104(23, 0, 1, 0);
										Global_22664 = 0;
									}
								}
							}
						}
					}
				}
			}
		}
		else if (SCRIPT::HAS_SCRIPT_LOADED(&(Global_8143[Global_20269 /*15*/].f_5)))
		{
			if (Global_20269 == 0)
			{
				if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Global_8143[Global_20269 /*15*/].f_9) == 0)
				{
					Global_20264 = SYSTEM::START_NEW_SCRIPT(&(Global_8143[Global_20269 /*15*/].f_5), 4000);
				}
			}
			else
			{
				iVar5 = 0;
				if (Global_20269 == 23)
				{
					if (BitTest(Global_4541229, 4) == 0 && Global_1836092 == 0)
					{
					}
				}
				if (Global_20269 == 2 || iVar5 == 1)
				{
					if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Global_8143[Global_20269 /*15*/].f_9) == 0)
					{
						Global_20264 = SYSTEM::START_NEW_SCRIPT(&(Global_8143[Global_20269 /*15*/].f_5), 4592);
					}
				}
				else if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Global_8143[Global_20269 /*15*/].f_9) == 0)
				{
					Global_20264 = SYSTEM::START_NEW_SCRIPT(&(Global_8143[Global_20269 /*15*/].f_5), 2552);
				}
			}
			SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED(&(Global_8143[Global_20269 /*15*/].f_5));
			Global_8139 = 99;
			MISC::CLEAR_BIT(&Global_8136, 23);
		}
		if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
		{
			if (HUD::IS_PAUSE_MENU_ACTIVE())
			{
				PAD::DISABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 200 /*INPUT_FRONTEND_PAUSE_ALTERNATE*/, true);
			}
		}
		if (Global_20266.f_1 == 1)
		{
			func_9();
		}
		if (Global_20266.f_1 == 0)
		{
			func_9();
		}
		if (Global_20266.f_1 == 3)
		{
			func_9();
		}
		else
		{
			if (Global_21618)
			{
				if (Global_20266.f_1 == 9)
				{
					if (Global_78319)
					{
						if (!BitTest(Global_8137, 31))
						{
							if (!BitTest(Global_8137, 27))
							{
								if (__LIB_2__.func_138())
								{
									if (!BitTest(Global_8136, 9))
									{
										if (__LIB_9__.func_596(2, Global_20238, 0))
										{
											if (!MISC::IS_PC_VERSION())
											{
												if (!Global_20265 == 1)
												{
													if (Global_20266.f_1 > 6)
													{
														MISC::SET_BIT(&Global_8137, 24);
														MISC::SET_BIT(&Global_8137, 27);
														MISC::CLEAR_BIT(&Global_8137, 26);
														MISC::CLEAR_BIT(&Global_8137, 25);
														MISC::SET_BIT(&(Global_2815059.f_1795), 17);
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
			if (Global_20249 == 1)
			{
				Global_20251 = 1;
				__LIB_6__.func_849(0);
			}
			if (Global_20250 == 1)
			{
				Global_20251 = 1;
				__LIB_6__.func_849(0);
			}
			if (Global_78319)
			{
				if (!BitTest(Global_8138, 0))
				{
					if (HUD::IS_PAUSE_MENU_ACTIVE() && !__LIB_0__.func_93())
					{
						if (Global_2821909.f_1 == 1)
						{
						}
						else
						{
							__LIB_0__.func_132();
							__LIB_6__.func_849(0);
						}
					}
				}
			}
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID()))
				{
					if (ENTITY::GET_ENTITY_SUBMERGED_LEVEL(PLAYER::PLAYER_PED_ID()) > 0.3f)
					{
						MISC::SET_BIT(&Global_8137, 4);
					}
					if (ENTITY::GET_ENTITY_SUBMERGED_LEVEL(PLAYER::PLAYER_PED_ID()) == 1f)
					{
						if (BitTest(Global_4718592.f_37, 17) && (NETWORK::NETWORK_IS_ACTIVITY_SESSION() || Global_1922883))
						{
							__LIB_0__.func_312(1, 1);
							MISC::SET_BIT(&Global_8136, 14);
						}
						else
						{
							Global_20251 = 1;
							__LIB_0__.func_132();
							__LIB_6__.func_849(0);
						}
					}
				}
				if (__LIB_0__.func_39(14))
				{
					if ((ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_113386.f_28050[0 /*29*/] || ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_113386.f_28050[1 /*29*/]) || ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_113386.f_28050[2 /*29*/])
					{
						iLocal_117 = 0;
					}
					else if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						iLocal_117 = 1;
					}
				}
				if ((((((((((((((PED::IS_PED_IN_ANY_TRAIN(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_RIDING_TRAIN(PLAYER::PLAYER_ID())) || PED::IS_PED_ON_MOUNT(PLAYER::PLAYER_PED_ID())) || MISC::IS_STUNT_JUMP_IN_PROGRESS()) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || PED::IS_PED_JACKING(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), false)) || PED::IS_PED_HANGING_ON_TO_VEHICLE(PLAYER::PLAYER_PED_ID())) || SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("michael1")) > 0) || Global_78580 == 1) || __LIB_7__.func_320(PLAYER::PLAYER_PED_ID())) || VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID()), false)) || PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID())) || GRAPHICS::GET_USINGNIGHTVISION()) || iLocal_117)
				{
					if (!Global_20209)
					{
						MISC::SET_BIT(&Global_8137, 4);
					}
				}
				if (MISC::IS_PC_VERSION())
				{
					if (Global_78319 == 0)
					{
						if (iLocal_101 == 0)
						{
							if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
							{
								if (!PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))
								{
									iLocal_99 = MISC::GET_GAME_TIMER();
									iLocal_101 = 1;
								}
							}
						}
						else
						{
							iLocal_100 = MISC::GET_GAME_TIMER();
							iLocal_103 = (iLocal_100 - iLocal_99);
							if (iLocal_103 < 4000)
							{
								MISC::SET_BIT(&Global_8137, 4);
							}
							else
							{
								iLocal_101 = 0;
							}
						}
					}
				}
				if (PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 25 /*INPUT_AIM*/) || PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 68 /*INPUT_VEH_AIM*/))
				{
					if (Global_78319)
					{
						WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iLocal_109, true);
						if (iLocal_109 != joaat("WEAPON_UNARMED") && Global_20266.f_1 < 7)
						{
							MISC::SET_BIT(&Global_8137, 4);
						}
					}
				}
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					iLocal_110 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
					if (ENTITY::GET_ENTITY_MODEL(iLocal_110) == joaat("submersible") || ENTITY::GET_ENTITY_MODEL(iLocal_110) == joaat("submersible2"))
					{
						iLocal_113 = 1;
					}
					else
					{
						iLocal_113 = 0;
					}
					if (((((ENTITY::GET_ENTITY_MODEL(iLocal_110) == joaat("rhino") || ENTITY::GET_ENTITY_MODEL(iLocal_110) == joaat("cutter")) || ENTITY::GET_ENTITY_MODEL(iLocal_110) == joaat("chernobog")) || ENTITY::GET_ENTITY_MODEL(iLocal_110) == joaat("khanjali")) || iLocal_113) || VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_110, false) == 0)
					{
						MISC::SET_BIT(&Global_8137, 4);
					}
					if (((((((((((((((ENTITY::GET_ENTITY_MODEL(iLocal_110) == joaat("valkyrie") || ENTITY::GET_ENTITY_MODEL(iLocal_110) == joaat("insurgent")) || ENTITY::GET_ENTITY_MODEL(iLocal_110) == joaat("technical")) || ENTITY::GET_ENTITY_MODEL(iLocal_110) == joaat("trash")) || ENTITY::GET_ENTITY_MODEL(iLocal_110) == joaat("trash2")) || ENTITY::GET_ENTITY_MODEL(iLocal_110) == joaat("limo2")) || ENTITY::GET_ENTITY_MODEL(iLocal_110) == joaat("insurgent3")) || ENTITY::GET_ENTITY_MODEL(iLocal_110) == joaat("halftrack")) || ENTITY::GET_ENTITY_MODEL(iLocal_110) == joaat("dune3")) || ENTITY::GET_ENTITY_MODEL(iLocal_110) == joaat("trailersmall2")) || ENTITY::GET_ENTITY_MODEL(iLocal_110) == joaat("technical2")) || ENTITY::GET_ENTITY_MODEL(iLocal_110) == joaat("boxville5")) || ENTITY::GET_ENTITY_MODEL(iLocal_110) == joaat("mogul")) || ENTITY::GET_ENTITY_MODEL(iLocal_110) == joaat("bombushka")) || ENTITY::GET_ENTITY_MODEL(iLocal_110) == joaat("tula")) || ENTITY::GET_ENTITY_MODEL(iLocal_110) == joaat("chernobog"))
					{
						if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_110))
						{
							iVar6 = func_2(PLAYER::PLAYER_PED_ID(), iLocal_110);
							if (iVar6 != -2)
							{
								if (ENTITY::GET_ENTITY_MODEL(iLocal_110) == joaat("insurgent") || ENTITY::GET_ENTITY_MODEL(iLocal_110) == joaat("limo2"))
								{
									if (iVar6 == 3)
									{
										MISC::SET_BIT(&Global_8137, 4);
									}
								}
								if (ENTITY::GET_ENTITY_MODEL(iLocal_110) == joaat("trash") || ENTITY::GET_ENTITY_MODEL(iLocal_110) == joaat("trash2"))
								{
									if (iVar6 == 2 || iVar6 == 1)
									{
										MISC::SET_BIT(&Global_8137, 4);
									}
								}
								if (ENTITY::GET_ENTITY_MODEL(iLocal_110) == joaat("technical2"))
								{
									if (iVar6 == 1)
									{
										MISC::SET_BIT(&Global_8137, 4);
									}
								}
								if (ENTITY::GET_ENTITY_MODEL(iLocal_110) == joaat("boxville5"))
								{
									if (iVar6 == 3)
									{
										MISC::SET_BIT(&Global_8137, 4);
									}
								}
								if (ENTITY::GET_ENTITY_MODEL(iLocal_110) == joaat("insurgent3"))
								{
									if (iVar6 == 3)
									{
										MISC::SET_BIT(&Global_8137, 4);
									}
								}
								if (ENTITY::GET_ENTITY_MODEL(iLocal_110) == joaat("halftrack"))
								{
									if (iVar6 == 1)
									{
										MISC::SET_BIT(&Global_8137, 4);
									}
								}
								if (ENTITY::GET_ENTITY_MODEL(iLocal_110) == joaat("dune3"))
								{
									if (iVar6 == 0)
									{
										MISC::SET_BIT(&Global_8137, 4);
									}
								}
								if (ENTITY::GET_ENTITY_MODEL(iLocal_110) == joaat("trailersmall2"))
								{
									if (iVar6 == -1)
									{
										MISC::SET_BIT(&Global_8137, 4);
									}
								}
								if (VEHICLE::IS_TURRET_SEAT(iLocal_110, iVar6))
								{
									MISC::SET_BIT(&Global_8137, 4);
								}
							}
						}
					}
					if (PAD::IS_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 69 /*INPUT_VEH_ATTACK*/))
					{
						if (Global_78319 == 0)
						{
							if (Global_20266.f_1 == 6 || Global_20266.f_1 == 7)
							{
								bVar7 = true;
								if (ENTITY::GET_ENTITY_MODEL(iLocal_110) == joaat("stromberg") && ENTITY::IS_ENTITY_IN_WATER(iLocal_110))
								{
									bVar7 = false;
								}
								if (((VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(iLocal_110)) || VEHICLE::IS_THIS_MODEL_A_PLANE(ENTITY::GET_ENTITY_MODEL(iLocal_110))) || ENTITY::GET_ENTITY_MODEL(iLocal_110) == joaat("submersible")) || ENTITY::GET_ENTITY_MODEL(iLocal_110) == joaat("submersible2"))
								{
									bVar7 = false;
								}
								if (bVar7)
								{
									__LIB_6__.func_849(0);
								}
							}
						}
					}
				}
				else
				{
					if (PAD::IS_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 24 /*INPUT_ATTACK*/))
					{
						if (Global_78319 == 0)
						{
							if (Global_20266.f_1 == 6 || Global_20266.f_1 == 7)
							{
								__LIB_6__.func_849(0);
							}
						}
					}
					iLocal_113 = 0;
				}
				if (PED::IS_PED_SWIMMING_UNDER_WATER(PLAYER::PLAYER_PED_ID()))
				{
					if (BitTest(Global_4718592.f_37, 17) && (NETWORK::NETWORK_IS_ACTIVITY_SESSION() || Global_1922883))
					{
						__LIB_0__.func_312(1, 1);
					}
					else
					{
						Global_20251 = 1;
						__LIB_0__.func_132();
						__LIB_6__.func_849(0);
					}
				}
				if (Global_78319 == 0)
				{
					if (ENTITY::GET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID()) < iLocal_96)
					{
						if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
						{
							Global_20251 = 1;
							__LIB_0__.func_132();
							__LIB_6__.func_849(0);
						}
					}
					if (Global_20266.f_1 == 9 || Global_20266.f_1 == 10)
					{
						if (PED::IS_PED_SWIMMING_UNDER_WATER(PLAYER::PLAYER_PED_ID()))
						{
							Global_20251 = 1;
							__LIB_0__.func_132();
							__LIB_6__.func_849(0);
						}
					}
				}
				else if (__LIB_2__.func_174())
				{
					if (ENTITY::GET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID()) < iLocal_96)
					{
						if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
						{
							Global_20251 = 1;
							__LIB_0__.func_132();
							__LIB_6__.func_849(0);
						}
					}
				}
				if (CAM::IS_AIM_CAM_ACTIVE())
				{
					if (!PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), true))
					{
						if (!__LIB_2__.func_174())
						{
							WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iLocal_109, true);
							if ((iLocal_109 == joaat("WEAPON_SNIPERRIFLE") || iLocal_109 == joaat("WEAPON_HEAVYSNIPER")) || iLocal_109 == joaat("WEAPON_REMOTESNIPER"))
							{
								bLocal_108 = true;
							}
							else
							{
								bLocal_108 = false;
							}
							if (CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE())
							{
								if (bLocal_108)
								{
									Global_20251 = 1;
									__LIB_0__.func_132();
									__LIB_6__.func_849(0);
								}
							}
						}
					}
				}
				if (PED::IS_PED_BEING_JACKED(PLAYER::PLAYER_PED_ID()))
				{
					Global_20251 = 1;
					__LIB_0__.func_132();
					__LIB_6__.func_849(0);
				}
				if (PED::IS_PED_BEING_STUNNED(PLAYER::PLAYER_PED_ID(), 0))
				{
					Global_20251 = 1;
					__LIB_0__.func_132();
					__LIB_6__.func_849(0);
				}
				if (PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true))
				{
					Global_20251 = 1;
					__LIB_0__.func_132();
					__LIB_6__.func_849(0);
				}
				if (PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_IN_PARACHUTE_FREE_FALL(PLAYER::PLAYER_PED_ID()))
				{
					if (Global_78319 == 0)
					{
						Global_20251 = 1;
						__LIB_0__.func_132();
						__LIB_6__.func_849(0);
					}
				}
			}
			else
			{
				iVar8 = 0;
				if (((Global_78319 && Global_2821909.f_1) && Global_2821909.f_37) && Global_20266.f_1 == 9)
				{
					iVar8 = 1;
					if (!BitTest(Global_8137, 24))
					{
						if (BitTest(Global_8137, 26))
						{
							MISC::SET_BIT(&Global_8137, 25);
							MISC::CLEAR_BIT(&Global_8137, 26);
							MISC::CLEAR_BIT(&Global_8138, 2);
						}
					}
				}
				if (iVar8 == 0)
				{
					Global_20251 = 1;
					__LIB_0__.func_132();
					__LIB_6__.func_849(0);
				}
			}
		}
		if (Global_20244 == 1)
		{
			func_1();
		}
		if (Global_20265 == 2)
		{
			if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
			{
				PAD::SET_INPUT_EXCLUSIVE(0 /*PLAYER_CONTROL*/, Global_20235);
				PAD::SET_INPUT_EXCLUSIVE(0 /*PLAYER_CONTROL*/, Global_20236);
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 24 /*INPUT_ATTACK*/, true);
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 257 /*INPUT_ATTACK2*/, true);
			}
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				AUDIO::STOP_PED_RINGTONE(PLAYER::PLAYER_PED_ID());
			}
		}
	}
}

void func_1()//Position - 0x1ECD
{
	if (!PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, Global_20235) && !PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, Global_20234))
	{
		Global_20244 = 0;
	}
}

int func_2(int iParam0, int iParam1)//Position - 0x1EF3
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false) && !ENTITY::IS_ENTITY_DEAD(iParam1, false))
	{
		if (PED::IS_PED_SITTING_IN_VEHICLE(iParam0, iParam1))
		{
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam1, -1, false) == iParam0)
			{
				return -1;
			}
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam1, 0, false) == iParam0)
			{
				return 0;
			}
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam1, 1, false) == iParam0)
			{
				return 1;
			}
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam1, 2, false) == iParam0)
			{
				return 2;
			}
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam1, 3, false) == iParam0)
			{
				return 3;
			}
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam1, 4, false) == iParam0)
			{
				return 4;
			}
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam1, 5, false) == iParam0)
			{
				return 5;
			}
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam1, 6, false) == iParam0)
			{
				return 6;
			}
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam1, 7, false) == iParam0)
			{
				return 3;
			}
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam1, 8, false) == iParam0)
			{
				return 4;
			}
		}
	}
	return -2;
}

void func_9()//Position - 0x211D
{
	float fVar0;
	struct<3> Var1;
	float fVar2;
	Global_22664 = 0;
	Global_22665 = 0;
	PAD::SET_INPUT_EXCLUSIVE(0 /*PLAYER_CONTROL*/, Global_20236);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(6);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
	if (Global_20232 == 0)
	{
		MOBILE::SET_MOBILE_PHONE_SCALE(500f);
		if (__LIB_9__.func_607())
		{
			iLocal_18 = MISC::GET_GAME_TIMER();
		}
		else
		{
			iLocal_18 = 0;
		}
		MOBILE::SCRIPT_IS_MOVING_MOBILE_PHONE_OFFSCREEN(true);
		Global_20232 = 1;
	}
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		if (AUDIO::IS_PED_RINGTONE_PLAYING(PLAYER::PLAYER_PED_ID()))
		{
			AUDIO::STOP_PED_RINGTONE(PLAYER::PLAYER_PED_ID());
		}
	}
	if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		if (AUDIO::IS_PED_RINGTONE_PLAYING(PLAYER::PLAYER_PED_ID()))
		{
			AUDIO::STOP_PED_RINGTONE(PLAYER::PLAYER_PED_ID());
		}
	}
	if (Global_113386.f_14051.f_84 == 1)
	{
		Global_113386.f_14051.f_84 = 0;
		HUD::CLEAR_FLOATING_HELP(0, true);
	}
	fVar0 = 350f;
	if (BitTest(Global_8136, 30) || BitTest(Global_8138, 2))
	{
		fVar0 = 25f;
	}
	Var1 = { Global_20226 };
	if (Global_20251 == 1)
	{
		Var1 = { -45f, 45f, 25f };
	}
	if ((BitTest(Global_8137, 26) || BitTest(Global_8136, 30)) || BitTest(Global_8138, 2))
	{
		Local_115 = { Global_20212[Global_20211 /*3*/] };
	}
	else
	{
		Local_115 = { Global_20219[Global_20211 /*3*/] };
	}
	fVar2 = __LIB_20__.func_598(Local_115, Global_20212[Global_20211 /*3*/], Global_20226, Var1, fVar0, 0);
	if (!iLocal_84 && fVar2 >= 1f)
	{
		MOBILE::DESTROY_MOBILE_PHONE();
		iLocal_84 = 1;
	}
	if (iLocal_84 && (MISC::GET_GAME_TIMER() - iLocal_18) > 500)
	{
		PAD::SET_INPUT_EXCLUSIVE(0 /*PLAYER_CONTROL*/, Global_20236);
		if (Global_20266.f_1 == 3)
		{
		}
		if (Global_20266.f_1 == 1)
		{
		}
		if (Global_20266.f_1 == 0)
		{
		}
		MOBILE::SCRIPT_IS_MOVING_MOBILE_PHONE_OFFSCREEN(false);
		Global_20207 = 0;
		Global_20248 = 0;
		Global_20462 = 0;
		if (Global_113386.f_14051.f_84 == 1)
		{
			Global_113386.f_14051.f_84 = 0;
			HUD::CLEAR_FLOATING_HELP(0, true);
		}
		Global_20210 = 1;
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			AUDIO::STOP_PED_RINGTONE(PLAYER::PLAYER_PED_ID());
		}
		if (Global_22619 == 0)
		{
		}
		Global_20464 = 0;
		if (__LIB_6__.func_854(0))
		{
			__LIB_0__.func_566();
		}
		MISC::CLEAR_BIT(&Global_8137, 8);
		MISC::CLEAR_BIT(&Global_8136, 14);
		MISC::CLEAR_BIT(&Global_8136, 9);
		MISC::CLEAR_BIT(&Global_8136, 27);
		MISC::CLEAR_BIT(&Global_8136, 30);
		MISC::CLEAR_BIT(&Global_8137, 5);
		MISC::CLEAR_BIT(&Global_8137, 19);
		MISC::CLEAR_BIT(&Global_8137, 21);
		MISC::CLEAR_BIT(&Global_8137, 24);
		MISC::CLEAR_BIT(&Global_8137, 25);
		MISC::CLEAR_BIT(&Global_8137, 27);
		MISC::CLEAR_BIT(&Global_8137, 26);
		MISC::CLEAR_BIT(&Global_8138, 2);
		Global_2825434 = 0;
		iLocal_116 = 0;
		if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			__LIB_0__.func_74();
		}
		SYSTEM::SETTIMERA(0);
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Global_8143[2 /*15*/].f_9) == 0)
		{
			while (SCRIPT::IS_THREAD_ACTIVE(Global_20264))
			{
				SYSTEM::WAIT(0);
				PAD::SET_INPUT_EXCLUSIVE(0 /*PLAYER_CONTROL*/, Global_20236);
				if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_20247))
				{
					HUD::SET_TEXT_RENDER_ID(iLocal_83);
					GRAPHICS::DRAW_SCALEFORM_MOVIE(Global_20247, Global_20186, Global_20187, Global_20188, Global_20189, 255, 255, 255, 255, 0);
				}
				if (SYSTEM::TIMERA() > 5000)
				{
					SCRIPT::TERMINATE_THREAD(Global_20264);
				}
			}
		}
		Global_20254 = 0;
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_20247))
		{
			__LIB_11__.func_299(Global_20247, "SHUTDOWN_MOVIE");
		}
		SYSTEM::WAIT(0);
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&Global_20247);
		Global_20232 = 0;
		PAD::SET_INPUT_EXCLUSIVE(0 /*PLAYER_CONTROL*/, Global_20236);
		if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			if (Global_2821909.f_1)
			{
				if (Global_78319)
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "Hang_Up", "Phone_SoundSet_Michael", true);
				}
				else
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "Hang_Up", &Global_20255, true);
				}
			}
		}
		__LIB_26__.func_418();
		__LIB_20__.func_508();
		Global_21618 = 0;
		Global_4541508 = 0;
		SCRIPT::TERMINATE_THIS_THREAD();
	}
}

void func_18()//Position - 0x28CE
{
	if (Global_20244 == 0)
	{
		if (__LIB_9__.func_596(2, Global_20238, 0))
		{
			if (Global_78319 == 0)
			{
				if (Global_20466)
				{
					if (Global_20465 == 0)
					{
						Global_20465 = 1;
						__LIB_2__.func_41(Global_20247, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
						__LIB_8__.func_120(2);
						func_19();
						__LIB_2__.func_41(Global_20247, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_20271), -1082130432, -1082130432, -1082130432);
						Global_20246 = Global_20271;
					}
					else
					{
						Global_20465 = 0;
						__LIB_2__.func_41(Global_20247, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
						__LIB_8__.func_120(1);
						func_19();
						__LIB_2__.func_41(Global_20247, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_20270), -1082130432, -1082130432, -1082130432);
						Global_20246 = Global_20270;
					}
				}
			}
		}
	}
}

void func_19()//Position - 0x29A7
{
	if (Global_20466 == 0)
	{
		__LIB_3__.func_637(Global_20247, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
		MISC::CLEAR_BIT(&Global_8136, 17);
	}
	else if (Global_78319)
	{
		__LIB_3__.func_637(Global_20247, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
		MISC::CLEAR_BIT(&Global_8136, 17);
	}
	else
	{
		if (Global_20465 == 1)
		{
			if (Global_20254)
			{
				__LIB_3__.func_637(Global_20247, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, "CELL_225" /* GXT: NEXT */, 0, 0, 0, 0);
			}
			else
			{
				__LIB_3__.func_637(Global_20247, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, 0, 0, 0, 0, 0);
			}
		}
		else if (Global_20254)
		{
			__LIB_3__.func_637(Global_20247, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, "CELL_225" /* GXT: NEXT */, 0, 0, 0, 0);
		}
		else
		{
			__LIB_3__.func_637(Global_20247, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
		}
		MISC::SET_BIT(&Global_8136, 17);
	}
}

void func_20()//Position - 0x2A80
{
	if (BitTest(Global_8137, 10) || iLocal_116 == 1)
	{
		Global_8743 = MISC::GET_GAME_TIMER();
		Global_8742 = 0;
		Global_20244 = 1;
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20247, "GET_CURRENT_SELECTION");
		iLocal_73 = GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
		iLocal_74 = 1;
	}
	else if (Global_20244 == 0)
	{
		if (__LIB_9__.func_596(2, Global_20235, 0))
		{
			if (iLocal_75 == 0)
			{
				Global_8743 = MISC::GET_GAME_TIMER();
				Global_8742 = 0;
				Global_20244 = 1;
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20247, "GET_CURRENT_SELECTION");
				iLocal_73 = GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
				iLocal_74 = 1;
			}
		}
	}
}

void func_21()//Position - 0x2AFF
{
	if (Global_20244 == 0)
	{
		if (__LIB_9__.func_596(2, Global_20233, 1))
		{
			if (__LIB_0__.func_534(2092, -1, 0) == 1)
			{
				if (Global_113386.f_14051[Global_20266 /*20*/].f_17 == 0)
				{
					if (!BitTest(Global_8137, 3))
					{
						if (!Global_20209)
						{
							if (!BitTest(Global_4541229, 3))
							{
								if (!BitTest(Global_8136, 14))
								{
									Global_20244 = 1;
									MISC::SET_BIT(&Global_4541229, 3);
									__LIB_38__.func_104(3, 0, 1, 0);
									Global_22664 = 0;
								}
							}
						}
					}
				}
			}
		}
	}
}

void func_24()//Position - 0x2CFD
{
	if (__LIB_0__.func_114())
	{
		if (__LIB_9__.func_596(2, Global_20238, 0))
		{
			__LIB_19__.func_847();
			Global_20270 = Global_20246;
			func_35();
			return;
		}
	}
	if (Global_20245)
	{
		if (SYSTEM::TIMERA() > 50)
		{
			Global_20245 = 0;
		}
	}
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
	{
		if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 180 /*INPUT_CELLPHONE_SCROLL_FORWARD*/))
		{
			switch (Global_20246)
			{
				case 0:
					if (Global_8705[1])
					{
						__LIB_26__.func_417();
						Global_20246 = 1;
					}
					break;
				case 1:
					if (Global_8705[2])
					{
						__LIB_26__.func_417();
						Global_20246 = 2;
					}
					break;
				case 2:
					if (Global_8705[3])
					{
						__LIB_26__.func_417();
						__LIB_19__.func_854();
						Global_20246 = 3;
					}
					else
					{
						__LIB_26__.func_416();
						__LIB_19__.func_854();
						Global_20246 = 4;
					}
					break;
				case 3:
					if (Global_8705[4])
					{
						__LIB_26__.func_417();
						Global_20246 = 4;
					}
					break;
				case 4:
					if (Global_8705[5])
					{
						__LIB_26__.func_417();
						Global_20246 = 5;
					}
					break;
				case 5:
					if (Global_8705[6])
					{
						__LIB_26__.func_417();
						__LIB_19__.func_854();
						Global_20246 = 6;
					}
					break;
				case 6:
					if (Global_8705[7])
					{
						__LIB_26__.func_417();
						Global_20246 = 7;
					}
					break;
				case 7:
					if (Global_8705[8])
					{
						__LIB_26__.func_417();
						Global_20246 = 8;
					}
					else
					{
						__LIB_26__.func_416();
						__LIB_19__.func_854();
						Global_20246 = 0;
					}
					break;
				case 8:
					if (Global_8705[0])
					{
						__LIB_26__.func_417();
						__LIB_19__.func_854();
						Global_20246 = 0;
					}
					else
					{
						__LIB_26__.func_416();
						__LIB_19__.func_854();
					}
					break;
				}
		}
		if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 181 /*INPUT_CELLPHONE_SCROLL_BACKWARD*/))
		{
			switch (Global_20246)
			{
				case 0:
					if (Global_8705[8])
					{
						__LIB_26__.func_416();
						__LIB_19__.func_917();
						Global_20246 = 8;
					}
					else
					{
						__LIB_26__.func_417();
						__LIB_19__.func_917();
						Global_20246 = 7;
					}
					break;
				case 1:
					if (Global_8705[0])
					{
						__LIB_26__.func_416();
						Global_20246 = 0;
					}
					else if (Global_8705[8])
					{
						__LIB_19__.func_917();
						__LIB_26__.func_417();
					}
					else
					{
						__LIB_19__.func_917();
					}
					break;
				case 2:
					if (Global_8705[1])
					{
						__LIB_26__.func_416();
						Global_20246 = 1;
					}
					break;
				case 3:
					if (Global_8705[2])
					{
						__LIB_26__.func_416();
						__LIB_19__.func_917();
						Global_20246 = 2;
					}
					break;
				case 4:
					if (Global_8705[3])
					{
						__LIB_26__.func_416();
						Global_20246 = 3;
					}
					else
					{
						__LIB_19__.func_917();
						__LIB_26__.func_417();
						Global_20469 = 1;
						Global_20246 = 2;
					}
					break;
				case 5:
					if (Global_8705[4])
					{
						__LIB_26__.func_416();
						Global_20246 = 4;
					}
					break;
				case 6:
					if (Global_8705[5])
					{
						__LIB_19__.func_917();
						__LIB_26__.func_416();
						Global_20246 = 5;
					}
					break;
				case 7:
					if (Global_8705[6])
					{
						__LIB_26__.func_416();
						Global_20246 = 6;
					}
					break;
				case 8:
					if (Global_8705[7])
					{
						__LIB_26__.func_416();
						Global_20246 = 7;
					}
					break;
				}
			}
	}
	if (Global_20245 == 0)
	{
		if (__LIB_9__.func_596(2, Global_20241, 0))
		{
			Global_20469 = 0;
			switch (Global_20246)
			{
				case 2:
					if (Global_8705[0] == 1)
					{
						Global_20246 = 0;
					}
					else
					{
						Global_20246 = 1;
						Global_20469 = 1;
					}
					break;
				case 5:
					Global_20246 = 3;
					break;
				case 6:
					Global_20246 = 7;
					break;
				case 7:
					if (Global_8705[Global_20246 + 1] == 1)
					{
						Global_20246 = 8;
					}
					else
					{
						Global_20246 = 6;
						Global_20469 = 1;
					}
					break;
				case 8:
					Global_20246 = 6;
					break;
				default:
					Global_20246++;
					break;
			}
			if (Global_20469 == 1)
			{
				__LIB_26__.func_416();
			}
			else
			{
				__LIB_26__.func_417();
			}
			Global_20245 = 1;
			SYSTEM::SETTIMERA(0);
		}
		if (__LIB_9__.func_596(2, Global_20240, 0))
		{
			Global_20469 = 0;
			switch (Global_20246)
			{
				case 0:
					Global_20246 = 2;
					break;
				case 1:
					if (Global_8705[0] == 1)
					{
						Global_20246 = 0;
					}
					else
					{
						Global_20246 = 2;
						Global_20469 = 1;
					}
					break;
				case 3:
					Global_20246 = 5;
					break;
				case 6:
					if (Global_8705[8] == 1)
					{
						Global_20246 = 8;
					}
					else
					{
						Global_20246 = 7;
						Global_20469 = 1;
					}
					break;
				default:
					Global_20246 = (Global_20246 - 1);
					break;
			}
			if (Global_20469 == 1)
			{
				__LIB_26__.func_417();
			}
			else
			{
				__LIB_26__.func_416();
			}
			Global_20245 = 1;
			SYSTEM::SETTIMERA(0);
		}
		if (__LIB_9__.func_596(2, Global_20242, 0))
		{
			Global_20469 = 0;
			switch (Global_20246)
			{
				case 0:
					if (Global_8705[6])
					{
						Global_20246 = 6;
					}
					break;
				case 1:
					if (Global_8705[7])
					{
						Global_20246 = 7;
					}
					else
					{
						Global_20469 = 1;
						Global_20246 = 4;
					}
					break;
				case 2:
					if (Global_8705[8])
					{
						Global_20246 = 8;
					}
					else
					{
						Global_20469 = 1;
						Global_20246 = 5;
					}
					break;
				case 3:
					if (Global_8705[0])
					{
						Global_20246 = 0;
					}
					else
					{
						Global_20469 = 1;
						Global_20246 = 6;
					}
					break;
				case 4:
					if (Global_8705[1])
					{
						Global_20246 = 1;
					}
					break;
				case 5:
					if (Global_8705[2])
					{
						Global_20246 = 2;
					}
					break;
				case 6:
					if (Global_8705[3])
					{
						Global_20246 = 3;
					}
					break;
				case 7:
					if (Global_8705[4])
					{
						Global_20246 = 4;
					}
					break;
				case 8:
					if (Global_8705[5])
					{
						Global_20246 = 5;
					}
					break;
			}
			if (Global_20469 == 1)
			{
				__LIB_19__.func_854();
			}
			else
			{
				__LIB_19__.func_917();
			}
			Global_20245 = 1;
			SYSTEM::SETTIMERA(0);
		}
		if (__LIB_9__.func_596(2, Global_20243, 0))
		{
			Global_20469 = 0;
			switch (Global_20246)
			{
				case 0:
					if (Global_8705[3])
					{
						Global_20246 = 3;
					}
					break;
				case 1:
					if (Global_8705[4])
					{
						Global_20246 = 4;
					}
					break;
				case 2:
					if (Global_8705[5])
					{
						Global_20246 = 5;
					}
					break;
				case 3:
					if (Global_8705[6])
					{
						Global_20246 = 6;
					}
					break;
				case 4:
					if (Global_8705[7])
					{
						Global_20246 = 7;
					}
					else
					{
						Global_20469 = 1;
						Global_20246 = 1;
					}
					break;
				case 5:
					if (Global_8705[8])
					{
						Global_20246 = 8;
					}
					else
					{
						Global_20469 = 1;
						Global_20246 = 2;
					}
					break;
				case 6:
					if (Global_8705[0])
					{
						Global_20246 = 0;
					}
					else
					{
						Global_20469 = 1;
						Global_20246 = 3;
					}
					break;
				case 7:
					if (Global_8705[1])
					{
						Global_20246 = 1;
					}
					break;
				case 8:
					if (Global_8705[2])
					{
						Global_20246 = 2;
					}
					break;
			}
			if (Global_20469 == 1)
			{
				__LIB_19__.func_917();
			}
			else
			{
				__LIB_19__.func_854();
			}
			Global_20245 = 1;
			SYSTEM::SETTIMERA(0);
		}
	}
	if (Global_8143[23 /*15*/].f_10 == 57)
	{
		if (Global_20245 == 1 && Global_20246 == 8)
		{
			if (iLocal_118 == 0)
			{
				iLocal_118 = 1;
				__LIB_1__.func_447(12);
			}
		}
	}
}

void func_35()//Position - 0x356A
{
	MISC::SET_BIT(&Global_8138, 9);
	__LIB_6__.func_361(10, "CELL_16" /* GXT: Settings */, 0, "appSettings", 24, 1, 1, 0, 0);
	__LIB_2__.func_41(Global_20247, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
	iLocal_71 = 0;
	while (iLocal_71 < 9)
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20247, "SET_DATA_SLOT");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iLocal_71);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(25);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
		__LIB_0__.func_478(&(Global_8143[10 /*15*/]));
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(225);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		iLocal_71++;
	}
	Global_8669[0] = 10;
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20247, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8143[10 /*15*/].f_10);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
	__LIB_0__.func_478(&(Global_8143[10 /*15*/]));
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(255);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	func_19();
	__LIB_2__.func_41(Global_20247, "DISPLAY_VIEW", 4f, SYSTEM::TO_FLOAT(0), -1082130432, -1082130432, -1082130432);
	__LIB_2__.func_41(Global_20247, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(0), -1082130432, -1082130432, -1082130432);
	__LIB_19__.func_846();
}

void func_41()//Position - 0x378F
{
	if (__LIB_9__.func_596(2, Global_20238, 0))
	{
		__LIB_19__.func_847();
		MISC::CLEAR_BIT(&Global_8138, 9);
		__LIB_2__.func_41(Global_20247, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
		__LIB_8__.func_120(1);
		__LIB_2__.func_41(Global_20247, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_20270), -1082130432, -1082130432, -1082130432);
		__LIB_19__.func_846();
	}
}

void func_42()//Position - 0x37F9
{
	if (Global_20245)
	{
		if (SYSTEM::TIMERA() > 50)
		{
			Global_20245 = 0;
		}
	}
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
	{
		if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 180 /*INPUT_CELLPHONE_SCROLL_FORWARD*/))
		{
			switch (Global_20246)
			{
				case 6:
					if (Global_8705[7])
					{
						__LIB_26__.func_417();
						Global_20246 = 7;
					}
					break;
				case 7:
					if (Global_8705[6])
					{
						__LIB_26__.func_416();
						Global_20246 = 6;
					}
					break;
				}
		}
		if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 181 /*INPUT_CELLPHONE_SCROLL_BACKWARD*/))
		{
			switch (Global_20246)
			{
				case 6:
					if (Global_8705[7])
					{
						__LIB_26__.func_417();
						Global_20246 = 7;
					}
					break;
				case 7:
					if (Global_8705[6])
					{
						__LIB_26__.func_416();
						Global_20246 = 6;
					}
					break;
				}
			}
	}
	if (Global_20245 == 0)
	{
		if (__LIB_9__.func_596(2, Global_20241, 0))
		{
			Global_20469 = 0;
			switch (Global_20246)
			{
				case 2:
					Global_20246 = 0;
					break;
				case 5:
					Global_20246 = 3;
					break;
				case 7:
					if (Global_8705[Global_20246 + 1] == 1)
					{
						Global_20246 = 8;
					}
					else
					{
						Global_20246 = 6;
						Global_20469 = 1;
					}
					break;
				case 8:
					Global_20246 = 6;
					break;
				default:
					Global_20246++;
					break;
			}
			if (Global_20469 == 1)
			{
				__LIB_26__.func_416();
			}
			else
			{
				__LIB_26__.func_417();
			}
			Global_20245 = 1;
			SYSTEM::SETTIMERA(0);
		}
		if (__LIB_9__.func_596(2, Global_20240, 0))
		{
			Global_20469 = 0;
			switch (Global_20246)
			{
				case 0:
					Global_20246 = 2;
					break;
				case 3:
					Global_20246 = 5;
					break;
				case 6:
					if (Global_8705[8] == 1)
					{
						Global_20246 = 8;
					}
					else
					{
						Global_20246 = 7;
						Global_20469 = 1;
					}
					break;
				default:
					Global_20246 = (Global_20246 - 1);
					break;
			}
			if (Global_20469 == 1)
			{
				__LIB_26__.func_417();
			}
			else
			{
				__LIB_26__.func_416();
			}
			Global_20245 = 1;
			SYSTEM::SETTIMERA(0);
		}
	}
}

void func_43()//Position - 0x39B7
{
	if (Global_20245)
	{
		if (SYSTEM::TIMERA() > 50)
		{
			Global_20245 = 0;
		}
	}
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
	{
		if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 180 /*INPUT_CELLPHONE_SCROLL_FORWARD*/))
		{
			switch (Global_20246)
			{
				case 0:
					if (Global_8705[1])
					{
						__LIB_26__.func_417();
						Global_20246 = 1;
					}
					break;
				case 1:
					if (Global_8705[2])
					{
						__LIB_26__.func_417();
						Global_20246 = 2;
					}
					break;
				case 2:
					if (Global_8705[3])
					{
						__LIB_26__.func_417();
						__LIB_19__.func_854();
						Global_20246 = 3;
					}
					else
					{
						__LIB_26__.func_416();
						__LIB_19__.func_854();
						Global_20246 = 4;
					}
					break;
				case 3:
					if (Global_8705[4])
					{
						__LIB_26__.func_417();
						Global_20246 = 4;
					}
					break;
				case 4:
					if (Global_8705[5])
					{
						__LIB_26__.func_417();
						Global_20246 = 5;
					}
					break;
				case 5:
					if (Global_8705[6])
					{
						__LIB_26__.func_417();
						__LIB_19__.func_854();
						Global_20246 = 6;
					}
					break;
				case 6:
					if (Global_8705[7])
					{
						__LIB_26__.func_417();
						Global_20246 = 7;
					}
					break;
				case 7:
					if (Global_8705[8])
					{
						__LIB_26__.func_417();
						Global_20246 = 8;
					}
					else
					{
						__LIB_26__.func_416();
						__LIB_19__.func_854();
						Global_20246 = 0;
					}
					break;
				case 8:
					if (Global_8705[0])
					{
						__LIB_26__.func_417();
						__LIB_19__.func_854();
						Global_20246 = 0;
					}
					break;
				}
		}
		if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 181 /*INPUT_CELLPHONE_SCROLL_BACKWARD*/))
		{
			switch (Global_20246)
			{
				case 0:
					if (Global_8705[8])
					{
						__LIB_26__.func_416();
						__LIB_19__.func_917();
						Global_20246 = 8;
					}
					else
					{
						__LIB_26__.func_417();
						__LIB_19__.func_917();
						Global_20246 = 7;
					}
					break;
				case 1:
					if (Global_8705[0])
					{
						__LIB_26__.func_416();
						Global_20246 = 0;
					}
					break;
				case 2:
					if (Global_8705[1])
					{
						__LIB_26__.func_416();
						Global_20246 = 1;
					}
					break;
				case 3:
					if (Global_8705[2])
					{
						__LIB_26__.func_416();
						__LIB_19__.func_917();
						Global_20246 = 2;
					}
					break;
				case 4:
					if (Global_8705[3])
					{
						__LIB_26__.func_416();
						Global_20246 = 3;
					}
					else
					{
						__LIB_19__.func_917();
						__LIB_26__.func_417();
						Global_20469 = 1;
						Global_20246 = 2;
					}
					break;
				case 5:
					if (Global_8705[4])
					{
						__LIB_26__.func_416();
						Global_20246 = 4;
					}
					break;
				case 6:
					if (Global_8705[5])
					{
						__LIB_19__.func_917();
						__LIB_26__.func_416();
						Global_20246 = 5;
					}
					break;
				case 7:
					if (Global_8705[6])
					{
						__LIB_26__.func_416();
						Global_20246 = 6;
					}
					break;
				case 8:
					if (Global_8705[7])
					{
						__LIB_26__.func_416();
						Global_20246 = 7;
					}
					break;
				}
			}
	}
	if (Global_20245 == 0)
	{
		if (__LIB_9__.func_596(2, Global_20241, 0))
		{
			Global_20469 = 0;
			switch (Global_20246)
			{
				case 2:
					Global_20246 = 0;
					break;
				case 5:
					Global_20246 = 3;
					break;
				case 7:
					if (Global_8705[Global_20246 + 1] == 1)
					{
						Global_20246 = 8;
					}
					else
					{
						Global_20246 = 6;
						Global_20469 = 1;
					}
					break;
				case 8:
					Global_20246 = 6;
					break;
				default:
					Global_20246++;
					break;
			}
			if (Global_20469 == 1)
			{
				__LIB_26__.func_416();
			}
			else
			{
				__LIB_26__.func_417();
			}
			Global_20245 = 1;
			SYSTEM::SETTIMERA(0);
		}
		if (__LIB_9__.func_596(2, Global_20240, 0))
		{
			Global_20469 = 0;
			switch (Global_20246)
			{
				case 0:
					Global_20246 = 2;
					break;
				case 3:
					Global_20246 = 5;
					break;
				case 6:
					if (Global_8705[8] == 1)
					{
						Global_20246 = 8;
					}
					else
					{
						Global_20246 = 7;
						Global_20469 = 1;
					}
					break;
				default:
					Global_20246 = (Global_20246 - 1);
					break;
			}
			if (Global_20469 == 1)
			{
				__LIB_26__.func_417();
			}
			else
			{
				__LIB_26__.func_416();
			}
			Global_20245 = 1;
			SYSTEM::SETTIMERA(0);
		}
		if (__LIB_9__.func_596(2, Global_20242, 0))
		{
			Global_20469 = 0;
			switch (Global_20246)
			{
				case 0:
					if (Global_8705[6])
					{
						Global_20246 = 6;
					}
					break;
				case 1:
					if (Global_8705[7])
					{
						Global_20246 = 7;
					}
					break;
				case 2:
					if (Global_8705[8])
					{
						Global_20246 = 8;
					}
					else
					{
						Global_20469 = 1;
						Global_20246 = 5;
					}
					break;
				case 3:
					if (Global_8705[0])
					{
						Global_20246 = 0;
					}
					break;
				case 4:
					if (Global_8705[1])
					{
						Global_20246 = 1;
					}
					break;
				case 5:
					if (Global_8705[2])
					{
						Global_20246 = 2;
					}
					break;
				case 6:
					if (Global_8705[3])
					{
						Global_20246 = 3;
					}
					break;
				case 7:
					if (Global_8705[4])
					{
						Global_20246 = 4;
					}
					break;
				case 8:
					if (Global_8705[5])
					{
						Global_20246 = 5;
					}
					break;
			}
			if (Global_20469 == 1)
			{
				__LIB_19__.func_854();
			}
			else
			{
				__LIB_19__.func_917();
			}
			Global_20245 = 1;
			SYSTEM::SETTIMERA(0);
		}
		if (__LIB_9__.func_596(2, Global_20243, 0))
		{
			Global_20469 = 0;
			switch (Global_20246)
			{
				case 0:
					if (Global_8705[3])
					{
						Global_20246 = 3;
					}
					break;
				case 1:
					if (Global_8705[4])
					{
						Global_20246 = 4;
					}
					break;
				case 2:
					if (Global_8705[5])
					{
						Global_20246 = 5;
					}
					break;
				case 3:
					if (Global_8705[6])
					{
						Global_20246 = 6;
					}
					break;
				case 4:
					if (Global_8705[7])
					{
						Global_20246 = 7;
					}
					break;
				case 5:
					if (Global_8705[8])
					{
						Global_20246 = 8;
					}
					else
					{
						Global_20469 = 1;
						Global_20246 = 2;
					}
					break;
				case 6:
					if (Global_8705[0])
					{
						Global_20246 = 0;
					}
					break;
				case 7:
					if (Global_8705[1])
					{
						Global_20246 = 1;
					}
					break;
				case 8:
					if (Global_8705[2])
					{
						Global_20246 = 2;
					}
					break;
			}
			if (Global_20469 == 1)
			{
				__LIB_19__.func_917();
			}
			else
			{
				__LIB_19__.func_854();
			}
			Global_20245 = 1;
			SYSTEM::SETTIMERA(0);
		}
	}
}

void func_44()//Position - 0x3F49
{
	int iVar0;
	int iVar1;
	char* sVar2;
	if (GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(iLocal_73))
	{
		iLocal_74 = 0;
		iLocal_72 = GRAPHICS::GET_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_INT(iLocal_73);
		if (Global_20465 == 0)
		{
			Global_20270 = iLocal_72;
		}
		else
		{
			Global_20271 = iLocal_72;
		}
		if (iLocal_72 < 0)
		{
			iLocal_72 = 0;
		}
		Global_20269 = Global_8669[iLocal_72];
		if (BitTest(Global_8137, 10))
		{
			Global_20269 = 2;
			MISC::CLEAR_BIT(&Global_8137, 10);
		}
		if (iLocal_116 == 1)
		{
			Global_20270 = 1;
			Global_20269 = 0;
			Global_2825434 = 0;
			iLocal_116 = 0;
		}
		iVar0 = 0;
		if (Global_78319)
		{
			if (Global_20269 == 24 && __LIB_0__.func_114())
			{
			}
		}
		if (SCRIPT::IS_THREAD_ACTIVE(Global_20264))
		{
			iVar0 = 1;
		}
		if (Global_20269 == 3)
		{
			if (BitTest(Global_8137, 3))
			{
				iVar0 = 1;
			}
			else if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				if (((((((PED::IS_PED_ON_MOUNT(PLAYER::PLAYER_PED_ID()) || MISC::IS_STUNT_JUMP_IN_PROGRESS()) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || PED::IS_PED_JACKING(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_HANGING_ON_TO_VEHICLE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID())) || VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID()), false)) || GRAPHICS::GET_USINGNIGHTVISION())
				{
					iVar0 = 1;
				}
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()) == 0)
					{
						iVar0 = 1;
					}
					iVar1 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
					if (ENTITY::GET_ENTITY_UPRIGHT_VALUE(iVar1) < 0f)
					{
						iVar0 = 1;
					}
				}
				if (PLAYER::IS_PLAYER_TARGETTING_ANYTHING(PLAYER::PLAYER_ID()))
				{
					iVar0 = 1;
				}
				if (Global_78319)
				{
					if (PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 25 /*INPUT_AIM*/) || PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 68 /*INPUT_VEH_AIM*/))
					{
						WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iLocal_109, true);
						if (iLocal_109 != joaat("WEAPON_UNARMED"))
						{
							iVar0 = 1;
						}
					}
				}
			}
		}
		if (Global_20269 == 2)
		{
			if (BitTest(Global_8137, 6))
			{
				iVar0 = 1;
			}
		}
		if (Global_20269 == 23 && MISC::ARE_STRINGS_EQUAL(&(Global_8143[Global_20269 /*15*/]), "CELL_BENWEB" /* GXT: Benny's */))
		{
			if (BitTest(Global_8137, 6))
			{
				iVar0 = 1;
			}
		}
		if (Global_78319)
		{
			if (Global_20269 == 15 || Global_20269 == 5)
			{
			}
			else
			{
				if (Global_20269 == 23)
				{
					if (((BitTest(Global_4541229, 4) == 0 && Global_1836092 == 0) && BitTest(Global_4541229, 20) == 0) && BitTest(Global_4541229, 22) == 0)
					{
					}
					if ((((BitTest(Global_4541229, 20) == 1 && BitTest(Global_4541229, 4) == 0) && Global_1836092 == 0) && BitTest(Global_4541229, 22) == 0) && BitTest(Global_4541229, 26) == 0)
					{
						iVar0 = 1;
						MISC::SET_BIT(&Global_4541229, 21);
					}
				}
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
				{
					if (PED::GET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 78, true) || PLAYER::IS_PLAYER_FREE_AIMING(PLAYER::PLAYER_ID()))
					{
						if (Global_20269 == 3)
						{
							iVar0 = 1;
						}
					}
				}
				if (Global_75484 && Global_20269 == 2)
				{
					iVar0 = 1;
					sVar2 = func_47();
					if (!__LIB_0__.func_1(sVar2))
					{
						__LIB_0__.func_151(sVar2, -1);
					}
				}
				if (__LIB_6__.func_363())
				{
					if (Global_20269 == 10)
					{
						if (!__LIB_0__.func_1("FIX_MPCHAR_BLCK" /* GXT: This app is currently unavailable. Please try again later. */))
						{
							__LIB_0__.func_151("FIX_MPCHAR_BLCK" /* GXT: This app is currently unavailable. Please try again later. */, -1);
						}
						iVar0 = 1;
					}
				}
				if (iVar0 == 0)
				{
					__LIB_3__.func_637(Global_20247, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
					MISC::CLEAR_BIT(&Global_8136, 17);
					Global_20266.f_1 = 7;
					if (BitTest(Global_8136, 23))
					{
					}
					else
					{
						__LIB_19__.func_847();
						SCRIPT::REQUEST_SCRIPT(&(Global_8143[Global_20269 /*15*/].f_5));
						MISC::SET_BIT(&Global_8136, 23);
					}
				}
				else
				{
					if (Global_20269 == 2 || Global_20269 == 3)
					{
					}
					__LIB_9__.func_601();
				}
			}
		}
		else
		{
			switch (Global_20269)
			{
				case 3:
					if (Global_112439 == 1)
					{
						iVar0 = 1;
					}
					break;
				case 8:
					iVar0 = 1;
					break;
				case 15:
					iVar0 = 1;
					break;
				case 16:
					iVar0 = 1;
					MISC::SET_BIT(&Global_8136, 26);
					break;
				case 5:
					iVar0 = 1;
					break;
				case 20:
					iVar0 = 1;
					if (Global_20467 == 0)
					{
						if ((Global_8140 == 0 && iLocal_75 == 0) && Global_43052 == 15)
						{
							iLocal_75 = 1;
							__LIB_19__.func_847();
							if (!Global_113386.f_14051.f_85)
							{
							}
						}
					}
					else
					{
						__LIB_9__.func_601();
					}
					break;
				default:
					break;
			}
			if (CUTSCENE::CAN_USE_MOBILE_PHONE_DURING_CUTSCENE())
			{
				if (Global_20269 != 0)
				{
					iVar0 = 1;
				}
			}
			if (__LIB_0__.func_39(14))
			{
				if (Global_20269 != 3 && Global_20269 != 14)
				{
					iVar0 = 1;
				}
			}
			if (iVar0 == 0)
			{
				__LIB_19__.func_847();
				__LIB_3__.func_637(Global_20247, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				MISC::CLEAR_BIT(&Global_8136, 17);
				Global_20266.f_1 = 7;
				if (BitTest(Global_8136, 23))
				{
				}
				else
				{
					SCRIPT::REQUEST_SCRIPT(&(Global_8143[Global_20269 /*15*/].f_5));
					MISC::SET_BIT(&Global_8136, 23);
				}
			}
			else if (Global_20269 != 20)
			{
				if (Global_113386.f_14051.f_86 == 0)
				{
					if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("paparazzo3b")) > 0)
					{
						if (Global_20269 == 3)
						{
							if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
							{
								if (PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), false))
								{
									__LIB_0__.func_151("CELL_38" /* GXT: You cannot use the Snapmatic application while in cover. */, -1);
									Global_113386.f_14051.f_86 = 1;
								}
							}
						}
					}
				}
				__LIB_9__.func_601();
			}
		}
	}
}

char* func_47()//Position - 0x446C
{
	return "BLOCK_APP_WEB" /* GXT: The Internet app is currently unavailable. Please try again later. */;
}

void func_48()//Position - 0x4478
{
	if (Global_20232 == 0)
	{
		if (__LIB_20__.func_598(Global_20219[Global_20211 /*3*/], Global_20212[Global_20211 /*3*/], Global_20226, Global_20226, 350f, 0) >= 1f)
		{
			iLocal_18 = 0;
			MISC::CLEAR_BIT(&Global_8137, 24);
			MISC::SET_BIT(&Global_8137, 26);
		}
	}
}

void func_49()//Position - 0x44C9
{
	if (Global_20232 == 0)
	{
		if (__LIB_20__.func_598(Global_20212[Global_20211 /*3*/], Global_20219[Global_20211 /*3*/], Global_20226, Global_20226, 350f, 1) >= 1f)
		{
			iLocal_18 = 0;
			MISC::CLEAR_BIT(&Global_8137, 25);
			if (Global_21618)
			{
				MISC::CLEAR_BIT(&Global_8137, 27);
			}
		}
	}
}

void func_50()//Position - 0x4520
{
	if (Global_20232 == 0 && Global_20206 == 0)
	{
		if (__LIB_20__.func_598(Global_20219[Global_20211 /*3*/], Global_20212[Global_20211 /*3*/], Global_20226, Global_20226, 350f, 0) >= 1f)
		{
			iLocal_18 = 0;
			Global_4541508 = 0;
		}
	}
}

void func_51()//Position - 0x456F
{
	float fVar0;
	float fVar1;
	if (BitTest(Global_8138, 2))
	{
		MISC::SET_BIT(&Global_8137, 8);
		MISC::SET_BIT(&Global_8136, 14);
		Global_20206 = 0;
		iLocal_18 = 0;
		MOBILE::SET_MOBILE_PHONE_ROTATION(Global_20226, 0);
	}
	else if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("appemail")) < 1)
	{
		fVar0 = __LIB_20__.func_598(Global_20212[Global_20211 /*3*/], Global_20219[Global_20211 /*3*/], Global_20229, Global_20226, 450f, 1);
		if (fVar0 >= 1f)
		{
			MISC::SET_BIT(&Global_8137, 8);
			MISC::SET_BIT(&Global_8136, 14);
			Global_20206 = 0;
			iLocal_18 = 0;
			MISC::CLEAR_BIT(&Global_8138, 2);
			iLocal_81 = 0;
		}
		else if (fVar0 >= 0.75f)
		{
			MISC::SET_BIT(&Global_8137, 8);
		}
	}
	else
	{
		if (iLocal_81 == 0)
		{
			Local_82 = { Global_20219[Global_20211 /*3*/] };
			Local_82.f_0 = (Local_82.f_0 - 10f);
			Local_82.f_1 = (Local_82.f_1 + 20f);
			iLocal_81 = 1;
		}
		fVar1 = __LIB_20__.func_598(Global_20212[Global_20211 /*3*/], Local_82, -90f, 0f, 90f, -90f, 0f, 90f, 450f, 1);
		if (fVar1 >= 1f)
		{
			MISC::SET_BIT(&Global_8137, 8);
			MISC::SET_BIT(&Global_8136, 14);
			Global_20206 = 0;
			iLocal_18 = 0;
			MISC::CLEAR_BIT(&Global_8138, 2);
			iLocal_81 = 0;
		}
		else if (fVar1 >= 0.75f)
		{
			MISC::SET_BIT(&Global_8137, 8);
		}
	}
}

void func_52()//Position - 0x46C2
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iLocal_103 = NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), iLocal_102);
	}
	else
	{
		iLocal_98 = MISC::GET_GAME_TIMER();
		iLocal_103 = (iLocal_98 - iLocal_97);
	}
	if (iLocal_103 > 4000)
	{
		iLocal_86 = func_104();
		if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
		{
		}
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			iLocal_102 = NETWORK::GET_NETWORK_TIME();
		}
		else
		{
			iLocal_97 = MISC::GET_GAME_TIMER();
		}
	}
}

void func_53()//Position - 0x4718
{
	if (Global_20265 == 1)
	{
		func_120();
		if (Global_20244 == 0)
		{
			if (__LIB_9__.func_596(2, Global_20236, 0))
			{
				if (BitTest(Global_8137, 8))
				{
					if (Global_21652 == 0)
					{
						__LIB_9__.func_601();
						Global_20244 = 1;
						Global_20265 = 3;
						Global_21654 = 1;
						if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
						{
							AUDIO::STOP_PED_RINGTONE(PLAYER::PLAYER_PED_ID());
						}
					}
				}
			}
		}
		if (Global_20244 == 0)
		{
			if (__LIB_9__.func_596(2, Global_20235, 0))
			{
				if (BitTest(Global_8137, 8))
				{
					__LIB_19__.func_847();
					Global_20244 = 1;
					Global_20265 = 2;
					if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
					{
						AUDIO::STOP_PED_RINGTONE(PLAYER::PLAYER_PED_ID());
					}
					__LIB_20__.func_597();
					__LIB_20__.func_596();
				}
			}
		}
	}
	else
	{
		if (iLocal_95 == 0)
		{
			if (BitTest(Global_8136, 27))
			{
				iLocal_95 = 1;
				SYSTEM::SETTIMERB(0);
			}
		}
		else
		{
			if (Global_20266.f_1 > 3)
			{
				if (SYSTEM::TIMERB() > 1500)
				{
					if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
					{
						if (!AUDIO::IS_PED_RINGTONE_PLAYING(PLAYER::PLAYER_PED_ID()))
						{
							if (Global_20209)
							{
								AUDIO::PLAY_PED_RINGTONE("Dial_and_Remote_Ring", PLAYER::PLAYER_PED_ID(), true);
							}
							else if (!BitTest(Global_8138, 5))
							{
								AUDIO::PLAY_PED_RINGTONE("Remote_Ring", PLAYER::PLAYER_PED_ID(), true);
							}
						}
					}
				}
			}
			if (!BitTest(Global_8136, 27))
			{
				iLocal_95 = 0;
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
				{
					AUDIO::STOP_PED_RINGTONE(PLAYER::PLAYER_PED_ID());
				}
			}
		}
		if (Global_20265 == 0)
		{
			if (Global_20244 == 0)
			{
				if (__LIB_9__.func_596(2, Global_20234, 0) || Global_2825434 == 1)
				{
					if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
					{
						if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
						{
							if (BitTest(Global_8137, 8))
							{
								switch (Global_20266.f_1)
								{
									case 3:
										break;
									case 4:
										break;
									case 6:
										if (Global_20464 == 0)
										{
											if (Global_20465 == 1)
											{
												__LIB_9__.func_601();
												Global_20465 = 0;
												__LIB_2__.func_41(Global_20247, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
												__LIB_19__.func_392();
												__LIB_11__.func_305();
												__LIB_8__.func_120(1);
												__LIB_2__.func_41(Global_20247, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_20270), -1082130432, -1082130432, -1082130432);
											}
											else
											{
												if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
												{
													AUDIO::PLAY_SOUND_FRONTEND(-1, "Put_Away", &Global_20255, true);
												}
												iLocal_18 = 0;
												Global_20266.f_1 = 3;
											}
										}
										break;
									case 5:
										Global_20266.f_1 = 3;
										break;
									case 7:
										if (BitTest(Global_8136, 23) == 1)
										{
										}
										if ((Global_8744 - Global_8743) > Global_8745 && BitTest(Global_8136, 23) == 0)
										{
											if (BitTest(Global_8137, 0))
											{
											}
											else
											{
												__LIB_9__.func_601();
												Global_8742 = 1;
												Global_20266.f_1 = 6;
												if (Global_78319)
												{
													__LIB_2__.func_41(Global_20247, "SET_THEME", SYSTEM::TO_FLOAT(Global_4541505), -1082130432, -1082130432, -1082130432, -1082130432);
												}
												Global_8139 = 99;
												if (Global_2825434 == 0)
												{
													__LIB_32__.func_479();
												}
											}
										}
										break;
									case 8:
										break;
									case 10:
										if (Global_7451 == 132)
										{
											if (Global_2821909.f_1 || BitTest(Global_8137, 20))
											{
												__LIB_9__.func_601();
												__LIB_11__.func_304();
											}
										}
										else
										{
											__LIB_9__.func_601();
											__LIB_11__.func_304();
											Global_21654 = 1;
										}
										break;
									case 9:
										if (Global_21605 == 0)
										{
											Global_20266.f_1 = 3;
										}
										break;
									default:
										break;
								}
								if (Global_2825434 == 1)
								{
									iLocal_116 = 1;
									Global_2825434 = 0;
								}
							}
						}
					}
				}
			}
		}
	}
}

void func_70()//Position - 0x56F9
{
	if ((BitTest(Global_8136, 14) && Global_4541508 == 0) && Global_20206 == 0)
	{
		if (__LIB_2__.func_174())
		{
		}
		else
		{
			__LIB_11__.func_303();
		}
		if (Global_20266.f_1 == 9)
		{
			if (Global_21618 == 0)
			{
				iLocal_76 = 1;
			}
		}
	}
}

void func_72()//Position - 0x5768
{
	if ((BitTest(Global_8136, 14) && Global_4541508 == 0) && Global_20206 == 0)
	{
		if (iLocal_76 == 0)
		{
			if (BitTest(Global_8137, 26))
			{
				MISC::CLEAR_BIT(&Global_8137, 24);
				MISC::CLEAR_BIT(&Global_8137, 25);
				MISC::CLEAR_BIT(&Global_8137, 27);
				MISC::CLEAR_BIT(&Global_8137, 26);
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
				{
					if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						__LIB_11__.func_303();
					}
					else if (__LIB_9__.func_607() == 0)
					{
						__LIB_11__.func_303();
					}
				}
			}
		}
		if (Global_20266.f_1 == 10 || Global_20266.f_1 == 9)
		{
			if (__LIB_9__.func_607())
			{
				func_73();
			}
		}
		else if (__LIB_2__.func_174())
		{
		}
		else if (__LIB_9__.func_607())
		{
			func_73();
		}
		if (Global_20266.f_1 == 9)
		{
			if (Global_21618 == 0)
			{
				iLocal_76 = 1;
			}
		}
	}
}

void func_73()//Position - 0x583E
{
	struct<2> Var0;
	MOBILE::GET_MOBILE_PHONE_POSITION(&Var0);
	if (Global_20212[Global_20211 /*3*/].f_1 == Var0.f_1)
	{
	}
	else
	{
		Global_4541508 = 1;
	}
}

void func_79()//Position - 0x5B6E
{
	MOBILE::GET_MOBILE_PHONE_RENDER_ID(&iLocal_83);
	if (iLocal_83 == -1)
	{
	}
}

void func_92()//Position - 0x69AA
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		iLocal_111 = ZONE::GET_ZONE_SCUMMINESS(ZONE::GET_ZONE_AT_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)));
	}
	switch (iLocal_111)
	{
		case 0:
			iLocal_87 = 5;
			break;
		case 1:
			iLocal_87 = 5;
			break;
		case 2:
			iLocal_87 = 4;
			break;
		case 3:
			iLocal_87 = 4;
			break;
		case 4:
			iLocal_87 = 3;
			break;
		case 5:
			iLocal_87 = 2;
			break;
		default:
			iLocal_87 = 3;
			break;
	}
	iLocal_112 = MISC::GET_RANDOM_INT_IN_RANGE(0, 8);
	if (iLocal_112 < 2)
	{
		if (iLocal_87 > 2)
		{
			iLocal_87 = (iLocal_87 - 1);
		}
	}
	if (iLocal_113 == 1 || func_93())
	{
		iLocal_87 = 0;
	}
	__LIB_2__.func_41(Global_20247, "SET_PROVIDER_ICON", SYSTEM::TO_FLOAT(iLocal_86), SYSTEM::TO_FLOAT(iLocal_87), -1082130432, -1082130432, -1082130432);
}

int func_93()//Position - 0x6A7A
{
	bool bVar0;
	struct<3> Var1;
	int iVar2;
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		bVar0 = __LIB_18__.func_173();
		if (__LIB_0__.func_43(bVar0))
		{
			Var1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
			iVar2 = 0;
			while (iVar2 < Global_113386.f_7688.f_136)
			{
				if (BitTest(Global_113386.f_7688[iVar2 /*15*/].f_2, bVar0))
				{
					if (func_96(Var1, __LIB_30__.func_703(iVar2)))
					{
						return 1;
					}
				}
				iVar2++;
			}
			iVar2 = 0;
			while (iVar2 < Global_113386.f_7688.f_764)
			{
				if (BitTest(Global_113386.f_7688.f_651[iVar2 /*14*/].f_2, bVar0))
				{
					if (func_96(Var1, __LIB_30__.func_702(iVar2)))
					{
						return 1;
					}
				}
				iVar2++;
			}
			iVar2 = 0;
			while (iVar2 < Global_113386.f_7688.f_866)
			{
				if (BitTest(Global_113386.f_7688.f_765[iVar2 /*10*/].f_2, bVar0))
				{
					if (func_96(Var1, __LIB_30__.func_701(iVar2)))
					{
						return 1;
					}
				}
				iVar2++;
			}
		}
	}
	return 0;
}

int func_96(struct<3> Param0, int iParam1)//Position - 0x6BAA
{
	if (iParam1 != -1)
	{
		if (iParam1 >= Global_43053)
		{
			return 0;
		}
		if (SYSTEM::VDIST2(Param0, Global_43053[iParam1 /*5*/]) <= (Global_43053[iParam1 /*5*/].f_3 * Global_43053[iParam1 /*5*/].f_3))
		{
			return 1;
		}
		else if (Global_43053[iParam1 /*5*/].f_4 != -1)
		{
			return func_96(Param0, Global_43053[iParam1 /*5*/].f_4);
		}
	}
	return 0;
}

int func_104()//Position - 0x6DBD
{
	__LIB_24__.func_942();
	return Global_113386.f_14051[Global_20266 /*20*/].f_8;
}

void func_110()//Position - 0x70E2
{
	if (__LIB_0__.func_39(14))
	{
		if (Global_2725398)
		{
			if (Global_20266.f_1 == 6)
			{
				if (Global_20246 == 7)
				{
					__LIB_2__.func_41(Global_20247, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(7), -1082130432, -1082130432, -1082130432);
				}
				else
				{
					Global_20246 = 6;
					__LIB_2__.func_41(Global_20247, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(6), -1082130432, -1082130432, -1082130432);
				}
			}
		}
		else if (Global_20266.f_1 == 6)
		{
			__LIB_2__.func_41(Global_20247, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(6), -1082130432, -1082130432, -1082130432);
		}
	}
	iLocal_89 = CLOCK::GET_CLOCK_MINUTES();
	if (iLocal_89 != Global_8139)
	{
		Global_8139 = iLocal_89;
		iLocal_88 = CLOCK::GET_CLOCK_HOURS();
		iLocal_90 = CLOCK::GET_CLOCK_DAY_OF_WEEK();
		switch (iLocal_90)
		{
			case 0:
				StringCopy(&Local_91, "CELL_920" /* GXT: Sun */, 16);
				break;
			case 1:
				StringCopy(&Local_91, "CELL_921" /* GXT: Mon */, 16);
				break;
			case 2:
				StringCopy(&Local_91, "CELL_922" /* GXT: Tue */, 16);
				break;
			case 3:
				StringCopy(&Local_91, "CELL_923" /* GXT: Wed */, 16);
				break;
			case 4:
				StringCopy(&Local_91, "CELL_924" /* GXT: Thu */, 16);
				break;
			case 5:
				StringCopy(&Local_91, "CELL_925" /* GXT: Fri */, 16);
				break;
			case 6:
				StringCopy(&Local_91, "CELL_926" /* GXT: Sat */, 16);
				break;
			default:
				StringCopy(&Local_91, "CELL_206" /* GXT: BACK */, 16);
				break;
		}
		__LIB_3__.func_637(Global_20247, "SET_TITLEBAR_TIME", SYSTEM::TO_FLOAT(iLocal_88), SYSTEM::TO_FLOAT(iLocal_89), -1f, -1f, -1f, &Local_91, 0, 0, 0, 0);
		if (Global_20209 == 0)
		{
			func_92();
		}
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			iLocal_96 = ENTITY::GET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID());
		}
	}
}

void func_111()//Position - 0x7262
{
	if (Global_78319)
	{
		StringCopy(&Global_20255, "Phone_SoundSet_Default", 24);
		MOBILE::CREATE_MOBILE_PHONE(0);
	}
	else if (Global_20209)
	{
		MOBILE::CREATE_MOBILE_PHONE(4);
		StringCopy(&Global_20255, "Phone_SoundSet_Prologue", 24);
	}
	else
	{
		switch (Global_20266)
		{
			case 0:
				StringCopy(&Global_20255, "Phone_SoundSet_Michael", 24);
				MOBILE::CREATE_MOBILE_PHONE(0);
				break;
			case 2:
				StringCopy(&Global_20255, "Phone_SoundSet_Trevor", 24);
				MOBILE::CREATE_MOBILE_PHONE(1);
				break;
			case 1:
				StringCopy(&Global_20255, "Phone_SoundSet_Franklin", 24);
				MOBILE::CREATE_MOBILE_PHONE(2);
				break;
			default:
				StringCopy(&Global_20255, "Phone_SoundSet_Default", 24);
				MOBILE::CREATE_MOBILE_PHONE(0);
				break;
			}
	}
	Global_20229 = { -90f, -130f, 0f };
	if (GRAPHICS::GET_IS_HIDEF())
	{
		Global_20211 = 0;
		Global_20212[0 /*3*/] = { (GRAPHICS::GET_SAFE_ZONE_SIZE() * 117.2f), (GRAPHICS::GET_SAFE_ZONE_SIZE() * -158.8f), -113f };
		Global_20219[0 /*3*/] = { (GRAPHICS::GET_SAFE_ZONE_SIZE() * 117.2f), (GRAPHICS::GET_SAFE_ZONE_SIZE() * -53.3f), -113f };
	}
	else
	{
		Global_20211 = 0;
		Global_20212[0 /*3*/] = { (GRAPHICS::GET_SAFE_ZONE_SIZE() * 85.7f), (GRAPHICS::GET_SAFE_ZONE_SIZE() * -121.8f), -91.5f };
		Global_20219[0 /*3*/] = { (GRAPHICS::GET_SAFE_ZONE_SIZE() * 85.7f), (GRAPHICS::GET_SAFE_ZONE_SIZE() * -35.3f), -91.5f };
	}
	Global_20194 = { Global_20212[Global_20211 /*3*/] };
	MOBILE::SET_MOBILE_PHONE_POSITION(Global_20212[Global_20211 /*3*/]);
	MOBILE::SET_MOBILE_PHONE_ROTATION(Global_20229, 0);
	Global_20206 = 1;
}

void func_120()//Position - 0x75D0
{
	PAD::SET_INPUT_EXCLUSIVE(0 /*PLAYER_CONTROL*/, Global_20235);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 70 /*INPUT_VEH_ATTACK2*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 69 /*INPUT_VEH_ATTACK*/, true);
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
	{
		PAD::SET_INPUT_EXCLUSIVE(0 /*PLAYER_CONTROL*/, Global_20235);
		PAD::SET_INPUT_EXCLUSIVE(0 /*PLAYER_CONTROL*/, Global_20236);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 24 /*INPUT_ATTACK*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 257 /*INPUT_ATTACK2*/, true);
	}
	if (Global_78319)
	{
		Global_113386.f_14051[3 /*20*/].f_10 = __LIB_0__.func_534(1198, -1, 0);
	}
	if (MISC::IS_PC_VERSION())
	{
		if (DECORATOR::DECOR_EXIST_ON(PLAYER::PLAYER_PED_ID(), "Synched"))
		{
		}
		else if (((MISC::GET_GAME_TIMER() - iLocal_114) >= 300 || iLocal_114 == 0) || iLocal_114 > MISC::GET_GAME_TIMER())
		{
			PAD::SET_CONTROL_SHAKE(0 /*PLAYER_CONTROL*/, 100, 100);
			iLocal_114 = MISC::GET_GAME_TIMER();
		}
	}
	else if (Global_113386.f_14051[Global_20266 /*20*/].f_10 == 1)
	{
		if (((MISC::GET_GAME_TIMER() - iLocal_114) >= 300 || iLocal_114 == 0) || iLocal_114 > MISC::GET_GAME_TIMER())
		{
			PAD::SET_CONTROL_SHAKE(0 /*PLAYER_CONTROL*/, 100, 100);
			iLocal_114 = MISC::GET_GAME_TIMER();
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		if (!AUDIO::IS_PED_RINGTONE_PLAYING(PLAYER::PLAYER_PED_ID()))
		{
			if (Global_78319)
			{
				if (!MISC::ARE_STRINGS_EQUAL(&(Global_8941[3 /*2811*/][1 /*281*/].f_144[__LIB_0__.func_534(1199, -1, 0) /*6*/]), "Silent Ringtone Dummy"))
				{
					AUDIO::PLAY_PED_RINGTONE(&(Global_8941[3 /*2811*/][1 /*281*/].f_144[__LIB_0__.func_534(1199, -1, 0) /*6*/]), PLAYER::PLAYER_PED_ID(), true);
				}
			}
			else if (!MISC::ARE_STRINGS_EQUAL(&(Global_113386.f_14051[Global_20266 /*20*/].f_11), "Silent Ringtone Dummy"))
			{
				if (!Global_8941[Global_20266 /*2811*/][0 /*281*/].f_259 == 1)
				{
					if (MISC::IS_PC_VERSION())
					{
						if (DECORATOR::DECOR_EXIST_ON(PLAYER::PLAYER_PED_ID(), "Synched"))
						{
						}
						else
						{
							AUDIO::PLAY_PED_RINGTONE(&(Global_113386.f_14051[Global_20266 /*20*/].f_11), PLAYER::PLAYER_PED_ID(), true);
						}
					}
					else
					{
						AUDIO::PLAY_PED_RINGTONE(&(Global_113386.f_14051[Global_20266 /*20*/].f_11), PLAYER::PLAYER_PED_ID(), true);
					}
				}
			}
		}
	}
}

