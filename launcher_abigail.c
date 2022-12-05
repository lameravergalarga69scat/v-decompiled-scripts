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
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	int iLocal_35 = 0;
	var uLocal_36 = 0;
	struct<4> Local_37[10];
	bool bLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	struct<3> Local_52 = { 0, 0, 0 } ;
	struct<3> Local_53 = { 0, 0, 0 } ;
	var uLocal_54 = 0;
	char[] cLocal_55[8] = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	struct<2> Local_58 = { 0, 5 } ;
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
	var uLocal_74 = 5;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
#endregion
void __EntryFunction__()//Position - 0x0
{
	struct<42> Var0;
	struct<3> Var1;
	struct<2> Var2;
	int iVar3[2];
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
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_35 = 3;
	iLocal_42 = 1;
	iLocal_43 = 65;
	iLocal_44 = 49;
	iLocal_45 = 64;
	iLocal_49 = HUD::GET_STANDARD_BLIP_ENUM_ID();
	iLocal_50 = HUD::GET_WAYPOINT_BLIP_ENUM_ID();
	Local_52 = { -1593.813f, 5221.2354f, 1.94482f };
	Local_53 = { -1603.9861f, 5243.6235f, 4.940323f };
	uLocal_54 = __LIB_11__.func_793(16);
	cLocal_55 = "rcmabigail";
	iLocal_56 = -1;
	MISC::SET_THIS_IS_A_TRIGGER_SCRIPT(true);
	__LIB_29__.func_778();
	Var0.f_17 = 2;
	Var0.f_28 = 6;
	Var0.f_35 = 5;
	Var0.f_41 = 6;
	Var1 = { 0f, 0f, 0f };
	Var2.f_1 = 16;
	__LIB_29__.func_777(&Var0);
	Var1 = { ScriptParam_58.f_1[0 /*3*/] };
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(83))
	{
		__LIB_0__.func_135("Force cleanup [TERMINATING]");
		if (Var0.f_0 != -1)
		{
			if (Global_112473[Var0.f_0 /*10*/].f_9 != -1)
			{
				__LIB_0__.func_135("Relinquishing candidate id...");
				__LIB_0__.func_56(&(Global_112473[Var0.f_0 /*10*/].f_9));
			}
		}
		func_277(&Var0, 1);
	}
	iVar3[0] = 0;
	iVar3[1] = 1;
	if (!__LIB_37__.func_336(&iVar3, &Var0, Var1, 1f))
	{
		__LIB_34__.func_838();
		__LIB_0__.func_135("SCRIPT TERMINATED");
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	if (!func_265(Var0.f_0))
	{
		__LIB_34__.func_838();
		__LIB_0__.func_135("SCRIPT TERMINATED");
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	if (__LIB_37__.func_329(Var0.f_0))
	{
		__LIB_34__.func_838();
		__LIB_0__.func_135("SCRIPT TERMINATED");
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	while (!func_254(&Var0))
	{
		SYSTEM::WAIT(0);
		if (!BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE())
		{
			__LIB_0__.func_135("Player out of range [TERMINATING]");
			func_277(&Var0, 1);
		}
	}
	MISC::CLEAR_AREA(Var1, Var0.f_15, true, false, false, false);
	switch (Var0.f_0)
	{
		case 0:
			Var2.f_0 = 0;
			break;
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		if (!__LIB_41__.func_981(&Var0, 1))
		{
			func_277(&Var0, 1);
		}
		__LIB_37__.func_326(Var0.f_0);
		__LIB_37__.func_333(&iLocal_56, &(Var0.f_9), Var1);
		switch (Var0.f_0)
		{
			case 0:
				func_195(&Var2, &(Var0.f_28[0]), "SONAR_PRE");
				break;
			case 1:
				__LIB_37__.func_334(&Var0, Var1, "SONARAU", "SONAR_CALL", 3, "ABIGAIL", 10000, 1101004800);
				break;
		}
		if (__LIB_42__.func_536(&Var0, 0))
		{
			if (__LIB_29__.func_761(Var0.f_0))
			{
				__LIB_37__.func_324(Var0.f_0, &iLocal_57);
			}
			if (!func_2(&Var0))
			{
				func_277(&Var0, 1);
			}
			if (__LIB_29__.func_757(&Var0))
			{
				func_277(&Var0, 0);
			}
		}
	}
}

int func_2(int iParam0)//Position - 0x2BB
{
	struct<4> Var0;
	char* sVar1;
	if (!__LIB_0__.func_294())
	{
		while (!__LIB_39__.func_393(*iParam0))
		{
			if (__LIB_29__.func_760(*iParam0))
			{
				__LIB_24__.func_930();
			}
			if (!__LIB_41__.func_981(iParam0, *iParam0 != 2))
			{
				__LIB_0__.func_135("LAUNCH_RC_MISSION - NOT IS_RC_FINE_AND_IN_RANGE() [TERMINATING]");
				return 0;
			}
			SYSTEM::WAIT(0);
		}
	}
	if (__LIB_0__.func_75())
	{
		__LIB_0__.func_296();
	}
	if (!__LIB_41__.func_976(iParam0))
	{
		__LIB_0__.func_135("STEP_7_COMMON_LaunchMission - Trying to launch a null script string name");
		return 0;
	}
	__LIB_6__.func_773(*iParam0, &Var0);
	MemCopy(&sVar1, {__LIB_0__.func_45(*iParam0)}, 4);
	__LIB_6__.func_862(&sVar1, Var0.f_3, 0);
	__LIB_6__.func_861(*iParam0);
	if (!__LIB_0__.func_294())
	{
		if (iParam0->f_16 == 2)
		{
			func_22(&(iParam0->f_1), 0);
		}
		else
		{
			func_22(&(iParam0->f_1), 1);
		}
	}
	__LIB_35__.func_527(*iParam0, Var0.f_0);
	return 1;
}

void func_22(char[4] cParam0, int iParam1)//Position - 0xD08
{
	MISC::CLEAR_BIT(&(Global_100441.f_20), 17);
	func_23(cParam0, iParam1, 0);
}

void func_23(char[4] cParam0, int iParam1, int iParam2)//Position - 0xD25
{
	if (Global_100441 != 10 && Global_100441 != 9)
	{
		StringCopy(&Global_103942, cParam0, 32);
		func_25(&Global_103950, cParam0, 0, "Start", iParam1, iParam2);
		__LIB_0__.func_559();
		Global_94619 = 0;
	}
}

void func_25(var uParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0x19FE
{
	int iVar0;
	int iVar1;
	*uParam0 = __LIB_20__.func_728();
	uParam0->f_1 = __LIB_18__.func_240();
	MISC::GET_CURR_WEATHER_STATE(&(uParam0->f_6), &(uParam0->f_7), &(uParam0->f_8));
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		__LIB_42__.func_328(&(uParam0->f_2884), 0);
		__LIB_37__.func_322(PLAYER::PLAYER_PED_ID());
		__LIB_39__.func_392(PLAYER::PLAYER_PED_ID(), 0);
		WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &(uParam0->f_2), true);
		if (uParam0->f_2 == 0 || uParam0->f_2 == joaat("OBJECT"))
		{
			uParam0->f_2 = joaat("WEAPON_UNARMED");
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		uParam0->f_17[iVar1] = Global_113386.f_2363.f_539.f_294[iVar1];
		if (iVar1 == __LIB_20__.func_728())
		{
			__LIB_39__.func_391(PLAYER::PLAYER_PED_ID(), &(uParam0->f_616[iVar1 /*65*/]), 1, -1);
		}
		else
		{
			iVar0 = 0;
			while (iVar0 < 12)
			{
				uParam0->f_616[iVar1 /*65*/][iVar0] = Global_100166[iVar1 /*65*/][iVar0];
				uParam0->f_616[iVar1 /*65*/].f_13[iVar0] = Global_100166[iVar1 /*65*/].f_13[iVar0];
				iVar0++;
			}
			uParam0->f_616[iVar1 /*65*/].f_59 = Global_100166[iVar1 /*65*/].f_59;
			uParam0->f_616[iVar1 /*65*/].f_60 = Global_100166[iVar1 /*65*/].f_60;
			uParam0->f_616[iVar1 /*65*/].f_61 = Global_100166[iVar1 /*65*/].f_61;
			uParam0->f_616[iVar1 /*65*/].f_62 = Global_100166[iVar1 /*65*/].f_62;
			uParam0->f_616[iVar1 /*65*/].f_63 = Global_100166[iVar1 /*65*/].f_63;
			uParam0->f_616[iVar1 /*65*/].f_64 = Global_100166[iVar1 /*65*/].f_64;
			iVar0 = 0;
			while (iVar0 < 9)
			{
				uParam0->f_616[iVar1 /*65*/].f_39[iVar0] = Global_100166[iVar1 /*65*/].f_39[iVar0];
				uParam0->f_616[iVar1 /*65*/].f_49[iVar0] = Global_100166[iVar1 /*65*/].f_49[iVar0];
				iVar0++;
			}
		}
		iVar0 = 0;
		while (iVar0 < 44)
		{
			uParam0->f_812[iVar1 /*477*/][iVar0 /*5*/] = { Global_113386.f_2363.f_539.f_298[iVar1 /*477*/][iVar0 /*5*/] };
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 51)
		{
			uParam0->f_812[iVar1 /*477*/].f_221[iVar0 /*5*/] = { Global_113386.f_2363.f_539.f_298[iVar1 /*477*/].f_221[iVar0 /*5*/] };
			iVar0++;
		}
		switch (iVar1)
		{
			case 0:
				STATS::STAT_GET_INT(joaat("SP0_WEAP_PURCH_0"), &(uParam0->f_2244[iVar1 /*32*/][0]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_PURCH_1"), &(uParam0->f_2244[iVar1 /*32*/][1]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_ADDON_PURCH_0"), &(uParam0->f_2244[iVar1 /*32*/].f_5[0]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_ADDON_PURCH_1"), &(uParam0->f_2244[iVar1 /*32*/].f_5[1]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_ADDON_PURCH_2"), &(uParam0->f_2244[iVar1 /*32*/].f_5[2]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_ADDON_PURCH_3"), &(uParam0->f_2244[iVar1 /*32*/].f_5[3]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_ADDON_PURCH_4"), &(uParam0->f_2244[iVar1 /*32*/].f_5[4]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_TINT_PURCH_0"), &(uParam0->f_2244[iVar1 /*32*/].f_16[0]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_TINT_PURCH_1"), &(uParam0->f_2244[iVar1 /*32*/].f_16[1]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_TINT_PURCH_2"), &(uParam0->f_2244[iVar1 /*32*/].f_16[2]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_TINT_PURCH_3"), &(uParam0->f_2244[iVar1 /*32*/].f_16[3]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_TINT_PURCH_4"), &(uParam0->f_2244[iVar1 /*32*/].f_16[4]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_TINT_PURCH_5"), &(uParam0->f_2244[iVar1 /*32*/].f_16[5]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_TINT_PURCH_6"), &(uParam0->f_2244[iVar1 /*32*/].f_16[6]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_TINT_PURCH_7"), &(uParam0->f_2244[iVar1 /*32*/].f_16[7]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_TINT_PURCH_8"), &(uParam0->f_2244[iVar1 /*32*/].f_16[8]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_TINT_PURCH_9"), &(uParam0->f_2244[iVar1 /*32*/].f_16[9]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_TINT_PURCH_10"), &(uParam0->f_2244[iVar1 /*32*/].f_16[10]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_TINT_PURCH_11"), &(uParam0->f_2244[iVar1 /*32*/].f_16[11]), -1);
				break;
			case 1:
				STATS::STAT_GET_INT(joaat("SP1_WEAP_PURCH_0"), &(uParam0->f_2244[iVar1 /*32*/][0]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_PURCH_1"), &(uParam0->f_2244[iVar1 /*32*/][1]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_ADDON_PURCH_0"), &(uParam0->f_2244[iVar1 /*32*/].f_5[0]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_ADDON_PURCH_1"), &(uParam0->f_2244[iVar1 /*32*/].f_5[1]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_ADDON_PURCH_2"), &(uParam0->f_2244[iVar1 /*32*/].f_5[2]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_ADDON_PURCH_3"), &(uParam0->f_2244[iVar1 /*32*/].f_5[3]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_ADDON_PURCH_4"), &(uParam0->f_2244[iVar1 /*32*/].f_5[4]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_TINT_PURCH_0"), &(uParam0->f_2244[iVar1 /*32*/].f_16[0]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_TINT_PURCH_1"), &(uParam0->f_2244[iVar1 /*32*/].f_16[1]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_TINT_PURCH_2"), &(uParam0->f_2244[iVar1 /*32*/].f_16[2]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_TINT_PURCH_3"), &(uParam0->f_2244[iVar1 /*32*/].f_16[3]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_TINT_PURCH_4"), &(uParam0->f_2244[iVar1 /*32*/].f_16[4]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_TINT_PURCH_5"), &(uParam0->f_2244[iVar1 /*32*/].f_16[5]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_TINT_PURCH_6"), &(uParam0->f_2244[iVar1 /*32*/].f_16[6]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_TINT_PURCH_7"), &(uParam0->f_2244[iVar1 /*32*/].f_16[7]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_TINT_PURCH_8"), &(uParam0->f_2244[iVar1 /*32*/].f_16[8]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_TINT_PURCH_9"), &(uParam0->f_2244[iVar1 /*32*/].f_16[9]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_TINT_PURCH_10"), &(uParam0->f_2244[iVar1 /*32*/].f_16[10]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_TINT_PURCH_11"), &(uParam0->f_2244[iVar1 /*32*/].f_16[11]), -1);
				break;
			case 2:
				STATS::STAT_GET_INT(joaat("SP2_WEAP_PURCH_0"), &(uParam0->f_2244[iVar1 /*32*/][0]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_PURCH_1"), &(uParam0->f_2244[iVar1 /*32*/][1]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_ADDON_PURCH_0"), &(uParam0->f_2244[iVar1 /*32*/].f_5[0]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_ADDON_PURCH_1"), &(uParam0->f_2244[iVar1 /*32*/].f_5[1]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_ADDON_PURCH_2"), &(uParam0->f_2244[iVar1 /*32*/].f_5[2]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_ADDON_PURCH_3"), &(uParam0->f_2244[iVar1 /*32*/].f_5[3]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_ADDON_PURCH_4"), &(uParam0->f_2244[iVar1 /*32*/].f_5[4]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_TINT_PURCH_0"), &(uParam0->f_2244[iVar1 /*32*/].f_16[0]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_TINT_PURCH_1"), &(uParam0->f_2244[iVar1 /*32*/].f_16[1]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_TINT_PURCH_2"), &(uParam0->f_2244[iVar1 /*32*/].f_16[2]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_TINT_PURCH_3"), &(uParam0->f_2244[iVar1 /*32*/].f_16[3]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_TINT_PURCH_4"), &(uParam0->f_2244[iVar1 /*32*/].f_16[4]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_TINT_PURCH_5"), &(uParam0->f_2244[iVar1 /*32*/].f_16[5]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_TINT_PURCH_6"), &(uParam0->f_2244[iVar1 /*32*/].f_16[6]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_TINT_PURCH_7"), &(uParam0->f_2244[iVar1 /*32*/].f_16[7]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_TINT_PURCH_8"), &(uParam0->f_2244[iVar1 /*32*/].f_16[8]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_TINT_PURCH_9"), &(uParam0->f_2244[iVar1 /*32*/].f_16[9]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_TINT_PURCH_10"), &(uParam0->f_2244[iVar1 /*32*/].f_16[10]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_TINT_PURCH_11"), &(uParam0->f_2244[iVar1 /*32*/].f_16[11]), -1);
				break;
		}
		uParam0->f_9[iVar1] = Global_113386.f_20564.f_233[iVar1 /*69*/].f_1;
		uParam0->f_13[iVar1] = Global_60328[iVar1];
		uParam0->f_25[0 /*295*/][iVar1 /*98*/] = { Global_113386.f_2363.f_539.f_2407[0 /*295*/][iVar1 /*98*/] };
		uParam0->f_25[1 /*295*/][iVar1 /*98*/] = { Global_113386.f_2363.f_539.f_2407[1 /*295*/][iVar1 /*98*/] };
		iVar0 = 0;
		while (iVar0 <= 3)
		{
			uParam0->f_2838[iVar1 /*15*/][iVar0] = Global_113386.f_2363.f_493[iVar1 /*15*/][iVar0];
			uParam0->f_2838[iVar1 /*15*/].f_5[iVar0] = Global_113386.f_2363.f_493[iVar1 /*15*/].f_5[iVar0];
			uParam0->f_2838[iVar1 /*15*/].f_10[iVar0] = Global_113386.f_2363.f_493[iVar1 /*15*/].f_10[iVar0];
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			uParam0->f_2345[iVar1 /*164*/][iVar0] = Global_113386.f_2363[iVar1 /*164*/][iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_4[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_4[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_8[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_8[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_12[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_12[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_16[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_16[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_20[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_20[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_24[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_24[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_28[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_28[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_32[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_32[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_36[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_36[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_40[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_40[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_44[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_44[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_48[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_48[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_52[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_52[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_56[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_56[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_60[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_60[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_64[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_64[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_68[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_68[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_72[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_72[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_76[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_76[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_80[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_80[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_84[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_84[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_88[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_88[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_92[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_92[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_96[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_96[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_100[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_100[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_104[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_104[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_108[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_108[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_112[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_112[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_116[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_116[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_120[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_120[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_124[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_124[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_128[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_128[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_132[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_132[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_136[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_136[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_140[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_140[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_144[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_144[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_148[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_148[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_152[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_152[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_156[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_156[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_160[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_160[iVar0];
			iVar0++;
		}
		iVar1++;
	}
	STATS::STAT_GET_INT(joaat("SP0_SPECIAL_ABILITY"), &(uParam0->f_2341[0]), -1);
	STATS::STAT_GET_INT(joaat("SP1_SPECIAL_ABILITY"), &(uParam0->f_2341[1]), -1);
	STATS::STAT_GET_INT(joaat("SP2_SPECIAL_ABILITY"), &(uParam0->f_2341[2]), -1);
	uParam0->f_5 = 145;
	if (iParam4 == 1)
	{
		__LIB_41__.func_397(&(uParam0->f_2890), uParam0, iParam5, 1, 1, 0);
	}
	__LIB_0__.func_327(&(uParam0->f_2980));
	sParam3 = sParam3;
	iParam2 = iParam2;
}

void func_195(int iParam0, var uParam1, char* sParam2)//Position - 0xCFEF
{
	if (__LIB_0__.func_121(*uParam1) && __LIB_0__.func_121(PLAYER::PLAYER_PED_ID()))
	{
		switch (*iParam0)
		{
			case 0:
				iParam0->f_166 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(1000, 2000));
				__LIB_0__.func_203(&(iParam0->f_1), 3, *uParam1, "ABIGAIL", 0, 1);
				TASK::TASK_PLAY_ANIM(*uParam1, cLocal_55, "base", 1000f, -8f, -1, 1, 0f, false, false, false);
				*iParam0 = 1;
				break;
			case 1:
				if (MISC::GET_GAME_TIMER() > iParam0->f_166)
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_52, Local_53, 8f, false, true, 0))
					{
						TASK::TASK_PLAY_ANIM(*uParam1, cLocal_55, "intro", 8f, -8f, -1, 2, 0f, false, false, false);
						*iParam0 = 3;
					}
					else if (__LIB_0__.func_76(PLAYER::PLAYER_PED_ID(), *uParam1, 1) < 15f)
					{
						*iParam0 = 4;
					}
				}
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(*uParam1, cLocal_55, "outro", 3) && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(*uParam1, cLocal_55, "outro") > 0.99f)
				{
					TASK::TASK_PLAY_ANIM(*uParam1, cLocal_55, "base", 8f, -8f, -1, 1, 0f, false, false, false);
				}
				break;
			case 3:
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(*uParam1, cLocal_55, "intro", 3) && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(*uParam1, cLocal_55, "intro") > 0.99f)
				{
					*iParam0 = 4;
				}
				break;
			case 4:
				if (__LIB_35__.func_984(&(iParam0->f_1), "SONARAU", sParam2, 4, 0, 0, 0))
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_52, Local_53, 8f, false, true, 0))
					{
						TASK::TASK_PLAY_ANIM(*uParam1, cLocal_55, "loop_talk", 8f, -8f, -1, 1, 0f, false, false, false);
					}
					*iParam0 = 5;
				}
				break;
			case 5:
				if (!__LIB_0__.func_75())
				{
					if (ENTITY::IS_ENTITY_PLAYING_ANIM(*uParam1, cLocal_55, "loop_talk", 3))
					{
						if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(*uParam1, cLocal_55, "loop_talk") > 0.99f)
						{
							iParam0->f_166 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(7000, 10000));
							if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_52, Local_53, 8f, false, true, 0))
							{
								TASK::TASK_PLAY_ANIM(*uParam1, cLocal_55, "outro", 8f, -8f, -1, 2, 0f, false, false, false);
								*iParam0 = 1;
							}
							else
							{
								TASK::TASK_PLAY_ANIM(*uParam1, cLocal_55, "loop_look", 8f, -8f, -1, 1, 0f, false, false, false);
								*iParam0 = 2;
							}
						}
					}
					else
					{
						iParam0->f_166 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(7000, 10000));
						*iParam0 = 1;
					}
				}
				break;
			case 2:
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(*uParam1, cLocal_55, "loop_look", 3) && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(*uParam1, cLocal_55, "loop_look") > 0.99f)
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_52, Local_53, 8f, false, true, 0))
					{
						if (MISC::GET_GAME_TIMER() > iParam0->f_166)
						{
							*iParam0 = 4;
						}
					}
					else
					{
						TASK::TASK_PLAY_ANIM(*uParam1, cLocal_55, "outro", 8f, -8f, -1, 2, 0f, false, false, false);
						*iParam0 = 1;
					}
				}
				break;
			}
	}
}

int func_254(int iParam0)//Position - 0xF668
{
	switch (*iParam0)
	{
		case 0:
			if (!func_263(iParam0))
			{
				return 0;
			}
			break;
		case 1:
			if (!func_255(iParam0))
			{
				return 0;
			}
			break;
	}
	__LIB_0__.func_135("Created initial scene");
	return 1;
}

int func_255(var uParam0)//Position - 0xF6AF
{
	int iVar0[2];
	int iVar1;
	bool bVar2;
	iVar0[0] = uLocal_54;
	iVar0[1] = joaat("asea");
	switch (iLocal_51)
	{
		case 0:
			uParam0->f_16 = 5;
			uParam0->f_17[0 /*3*/] = { -1588.6636f, 5210.4404f, 2.488135f };
			uParam0->f_17[1 /*3*/] = { -1596.9752f, 5228.6836f, 5.966843f };
			uParam0->f_24 = 8f;
			uParam0->f_27 = 0;
			uParam0->f_25 = 1;
			StringCopy(&(uParam0->f_9), "ABIGAIL_MCS_2", 24);
			iVar1 = 0;
			while (iVar1 <= (iVar0 - 1))
			{
				STREAMING::REQUEST_MODEL(iVar0[iVar1]);
				iVar1++;
			}
			STREAMING::REQUEST_ANIM_DICT(cLocal_55);
			__LIB_11__.func_794(&(uParam0->f_48), cLocal_55, "base", 0);
			iLocal_51 = 1;
			break;
		case 1:
			if (!__LIB_10__.func_716(&iVar0) || !STREAMING::HAS_ANIM_DICT_LOADED(cLocal_55))
			{
				return 0;
			}
			iLocal_51 = 2;
			break;
		case 2:
			bVar2 = true;
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_28[0]))
			{
				if (!__LIB_37__.func_328(&(uParam0->f_28[0]), 16, -1596.09f, 5218.102f, 3.045f, 125.5f, "RC ABIGAIL 2", 1))
				{
					bVar2 = false;
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_35[0]))
			{
				__LIB_20__.func_649(&(uParam0->f_35[0]), iVar0[1], -1584.0127f, 5158.5386f, 18.6057f, 210.5309f);
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(uParam0->f_35[0], 3);
				VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(uParam0->f_35[0], 1);
				VEHICLE::SET_VEHICLE_DISABLE_TOWING(uParam0->f_35[0], true);
			}
			if (bVar2)
			{
				iLocal_51 = 3;
			}
			break;
		case 3:
			iVar1 = 0;
			while (iVar1 <= (iVar0 - 1))
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0[iVar1]);
				iVar1++;
			}
			return 1;
			break;
	}
	return 0;
}

int func_263(var uParam0)//Position - 0xFADC
{
	int iVar0;
	bool bVar1;
	iVar0 = uLocal_54;
	bVar1 = false;
	switch (iLocal_51)
	{
		case 0:
			uParam0->f_16 = 5;
			uParam0->f_17[0 /*3*/] = { -1598.5696f, 5231.605f, 1.969029f };
			uParam0->f_17[1 /*3*/] = { -1610.4132f, 5257.687f, 5.965584f };
			uParam0->f_24 = 8f;
			uParam0->f_27 = 0;
			uParam0->f_25 = 1;
			StringCopy(&(uParam0->f_9), "ABIGAIL_MCS_1_CONCAT", 24);
			STREAMING::REQUEST_MODEL(iVar0);
			STREAMING::REQUEST_ANIM_DICT(cLocal_55);
			iLocal_51 = 1;
			break;
		case 1:
			if (!STREAMING::HAS_MODEL_LOADED(iVar0) || !STREAMING::HAS_ANIM_DICT_LOADED(cLocal_55))
			{
				return 0;
			}
			iLocal_51 = 2;
			break;
		case 2:
			bVar1 = true;
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_28[0]))
			{
				if (!__LIB_37__.func_328(&(uParam0->f_28[0]), 16, -1607.918f, 5243.162f, 3.045f, 125.5f, "RC ABIGAIL 1", 1))
				{
					bVar1 = false;
				}
			}
			if (bVar1)
			{
				iLocal_51 = 3;
			}
			break;
		case 3:
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
			return 1;
			break;
	}
	return 0;
}

int func_265(int iParam0)//Position - 0xFC38
{
	char* sVar0;
	if (Global_78319)
	{
		__LIB_0__.func_135("STEP_3_COMMON_CanRCLaunch - Script denied. Multiplayer is running [TERMINATING]");
		return 0;
	}
	if (!Global_113386.f_9085 && !__LIB_0__.func_2(1))
	{
		__LIB_0__.func_135("STEP_3_COMMON_CanRCLaunch - Script denied, game flow is not active");
		return 0;
	}
	if (!func_266(iParam0))
	{
		Global_112473[iParam0 /*10*/].f_1 = 1;
		__LIB_0__.func_135("STEP_3_COMMON_CanRCLaunch - Script denied by RC Controller [TERMINATING]");
		return 0;
	}
	if (Global_100441.f_11 == 6)
	{
		if (Global_100441 < 9)
		{
			__LIB_6__.func_773(iParam0, &sVar0);
			if (MISC::ARE_STRINGS_EQUAL(&(Global_100441.f_3), sVar0))
			{
				__LIB_0__.func_135("STEP_3_COMMON_CanRCLaunch - Script denied as a replay for this RC is being configured. [TERMINATING]");
				return 0;
			}
		}
	}
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("candidate_controller")) == 0)
	{
		Global_112473[iParam0 /*10*/].f_1 = 1;
		__LIB_0__.func_135("STEP_3_COMMON_CanRCLaunch - Script denied as candidate_controller is not running. [TERMINATING]");
		return 0;
	}
	return 1;
}

int func_266(int iParam0)//Position - 0xFCF1
{
	var uVar0;
	__LIB_6__.func_773(iParam0, &uVar0);
	if (!__LIB_6__.func_763(4))
	{
		if (__LIB_34__.func_833(iParam0))
		{
		}
		else
		{
			return 0;
		}
	}
	if (__LIB_0__.func_569() && !__LIB_0__.func_568())
	{
		return 0;
	}
	if (__LIB_29__.func_776(iParam0))
	{
		return 0;
	}
	if (iParam0 == -1)
	{
		iParam0 = __LIB_18__.func_205();
	}
	if (iParam0 == -1)
	{
		return 0;
	}
	if (!__LIB_6__.func_865(iParam0))
	{
		if (!__LIB_29__.func_775(iParam0))
		{
			return 0;
		}
		if (!__LIB_29__.func_774(iParam0))
		{
			return 0;
		}
		if (__LIB_0__.func_528(iParam0))
		{
			return 0;
		}
	}
	if (iParam0 == 58)
	{
		if (func_267(5))
		{
			Global_112473[iParam0 /*10*/].f_3 = 0;
		}
	}
	if (Global_112473[iParam0 /*10*/].f_3 == 1)
	{
		return 0;
	}
	return 1;
}

int func_267(int iParam0)//Position - 0xFDB2
{
	int iVar0;
	char* sVar1;
	int iVar2;
	if (Global_100493.f_373 == 0)
	{
		return 0;
	}
	if (iParam0 == 10)
	{
		iVar0 = 0;
		while (iVar0 < 10)
		{
			if (func_267(iVar0))
			{
				return 1;
			}
			iVar0++;
		}
	}
	else if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		__LIB_10__.func_605(iParam0, &sVar1);
		iVar2 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(Global_95479[iParam0 /*10*/].f_3, &sVar1);
		if (iVar2 != 0 && Global_100493.f_373 == iVar2)
		{
			return 1;
		}
	}
	return 0;
}

void func_277(int iParam0, bool bParam1)//Position - 0x10143
{
	char* sVar0;
	if (bParam1)
	{
		__LIB_0__.func_135("SCRIPT TERMINATING: Cleaning up entities in Launcher");
		__LIB_32__.func_757(iParam0, 0, 0, 0);
	}
	if (HUD::DOES_BLIP_EXIST(iLocal_57))
	{
		HUD::REMOVE_BLIP(&iLocal_57);
	}
	if (iLocal_56 != -1)
	{
		__LIB_0__.func_135("SCRIPT TERMINATING: Ending off-mission cutscene request");
		__LIB_29__.func_764(&iLocal_56);
	}
	switch (*iParam0)
	{
		case 0:
			sVar0 = "SONAR_PRE";
			break;
		case 1:
			sVar0 = "SONAR_CALL";
			break;
	}
	__LIB_37__.func_330(sVar0);
	if (bParam1)
	{
		__LIB_37__.func_326(*iParam0);
	}
	__LIB_34__.func_838();
	__LIB_0__.func_135("SCRIPT TERMINATING: ");
	SCRIPT::TERMINATE_THIS_THREAD();
}

