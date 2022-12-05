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
	bool bLocal_40 = 0;
	bool bLocal_41 = 0;
	struct<8> Local_42 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	struct<11> Local_48[30];
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	int* iLocal_57 = NULL;
	int iLocal_58[30] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
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
	bLocal_40 = true;
	bLocal_41 = true;
	iLocal_54 = -1;
	iLocal_55 = 5;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(210))
	{
		func_126();
	}
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("ambient_sonar")) > 1)
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	__LIB_0__.func_513(13);
	__LIB_0__.func_547(0);
	while (true)
	{
		SYSTEM::WAIT(0);
		__LIB_0__.func_524(PLAYER::PLAYER_PED_ID());
		switch (iLocal_51)
		{
			case 0:
				func_117();
				break;
			case 1:
				func_109();
				break;
			case 2:
				func_1();
				break;
			case 3:
				func_126();
				break;
		}
	}
}

void func_1()//Position - 0xEB
{
	iLocal_52 = 0;
	if (__LIB_0__.func_121(PLAYER::PLAYER_PED_ID()))
	{
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			if (func_75(&Local_42, &Local_48))
			{
				func_31();
			}
			else if (PED::IS_PED_IN_ANY_SUB(PLAYER::PLAYER_PED_ID()))
			{
				iLocal_49 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
				__LIB_0__.func_547(1);
				func_13(0);
				if (__LIB_0__.func_121(PLAYER::PLAYER_PED_ID()))
				{
					if (__LIB_18__.func_206(&Local_42, &Local_48, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &iLocal_54))
					{
						func_8();
					}
				}
				PLAYER::SET_MAX_WANTED_LEVEL(0);
				func_7();
				func_6(1);
			}
			else if (__LIB_0__.func_121(iLocal_49))
			{
				if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iLocal_49, true)) > 62500f)
				{
					func_5();
				}
				else if (!HUD::DOES_BLIP_EXIST(iLocal_50))
				{
					iLocal_50 = __LIB_6__.func_825(iLocal_49, 0, 0);
					HUD::SET_BLIP_SPRITE(iLocal_50, 308);
				}
			}
			else
			{
				func_7();
			}
		}
	}
}

void func_5()//Position - 0x29D
{
	func_7();
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_49))
	{
		ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_49);
	}
}

void func_6(int iParam0)//Position - 0x2BA
{
	iLocal_51 = iParam0;
}

void func_7()//Position - 0x2C7
{
	if (HUD::DOES_BLIP_EXIST(iLocal_50))
	{
		HUD::REMOVE_BLIP(&iLocal_50);
	}
}

void func_8()//Position - 0x2E0
{
	__LIB_11__.func_714(func_10(iLocal_54), 1, 1);
	iLocal_53 = 1;
}

Vector3 func_10(int iParam0)//Position - 0x345
{
	switch (iParam0)
	{
		case 0:
			return -1435.61f, 5781.12f, -29.87f;
			break;
		case 1:
			return -1956.54f, -1125.07f, -37.21f;
			break;
		case 2:
			return 2752.88f, -1212.78f, -22.41f;
			break;
		case 3:
			return 3188.04f, -1668.19f, -146.88f;
			break;
		case 4:
			return 2555.04f, -2372.47f, -112.01f;
			break;
		case 5:
			return 2945.9f, 6537.41f, -27.36f;
			break;
		case 6:
			return -1266.69f, 6261.75f, -34.17f;
			break;
		case 7:
			return 3034.72f, 6550.42f, -35.2f;
			break;
		case 8:
			return 1694.53f, 6991.69f, -137.62f;
			break;
		case 9:
			return 1233.43f, 7081.15f, -141.72f;
			break;
		case 10:
			return -3413.73f, 830.23f, -12.95f;
			break;
		case 11:
			return 1422.5f, 6854.67f, -38.2f;
			break;
		case 12:
			return -3345.1f, 3547.8f, -59.1f;
			break;
		case 13:
			return -3437.93f, 3069.57f, -54.85f;
			break;
		case 14:
			return -2909.28f, 4204.32f, -111.62f;
			break;
		case 15:
			return -3179.12f, 2151.28f, -31.86f;
			break;
		case 16:
			return 4146.09f, 3825.86f, -40.96f;
			break;
		case 17:
			return 2716.61f, 6956.91f, -157.17f;
			break;
		case 18:
			return 2487.5f, 7001.69f, -143.56f;
			break;
		case 19:
			return -3043.23f, -212.16f, -23.48f;
			break;
		case 20:
			return -2871.1f, 4268.19f, -152.47f;
			break;
		case 21:
			return -777.21f, 6726.71f, -30.89f;
			break;
		case 22:
			return -3008.33f, 2877.73f, -27.76f;
			break;
		case 23:
			return -1843.12f, -1260.67f, -22.17f;
			break;
		case 24:
			return -2591.62f, -470.34f, -30.4f;
			break;
		case 25:
			return 3824.99f, 3729.17f, -16.17f;
			break;
		case 26:
			return 3885.44f, 3797.19f, -24.26f;
			break;
		case 27:
			return 2153.9f, -2826.37f, -50.76f;
			break;
		case 28:
			return 1873.5f, -3012.6f, -47f;
			break;
		case 29:
			return -2325.06f, -1046.7f, -70.67f;
			break;
	}
	return 0f, 0f, 0f;
}

int func_13(int iParam0)//Position - 0x720
{
	if (__LIB_37__.func_884(17, 0, 1, 0))
	{
		if (iParam0 == 1)
		{
			MISC::SET_BIT(&Global_8137, 22);
		}
		else
		{
			MISC::CLEAR_BIT(&Global_8137, 22);
		}
		return 1;
	}
	return 0;
}

void func_31()//Position - 0x1331
{
	__LIB_42__.func_729(3, 250000);
	__LIB_24__.func_943(299, 0, 0);
	__LIB_35__.func_525(20, 1);
	func_32();
	func_6(3);
}

void func_32()//Position - 0x135C
{
	int iVar0;
	iVar0 = __LIB_0__.func_716(65);
	Global_2676732[iVar0 /*83*/] = 65;
	StringCopy(&(Global_2676732[iVar0 /*83*/].f_18[0 /*16*/]), "", 64);
}

int func_75(var uParam0, int iParam1)//Position - 0x333C
{
	int iVar0;
	struct<3> Var1;
	bool bVar2;
	PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID());
	Var1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
	iVar0 = 0;
	while (iVar0 < iLocal_55)
	{
		bVar2 = __LIB_0__.func_531(&(uParam0->f_1), uParam0->f_10);
		if (!(iParam1[uParam0->f_10 /*11*/])->f_10)
		{
			if (!bVar2)
			{
				if (!__LIB_0__.func_78((iParam1[uParam0->f_10 /*11*/])->f_6, 0f, 0f, 0f, 0))
				{
					__LIB_20__.func_650(iParam1[uParam0->f_10 /*11*/], uParam0->f_7, joaat("PICKUP_CUSTOM_SCRIPT"), 0, 1, 0);
				}
				else
				{
					__LIB_20__.func_650(iParam1[uParam0->f_10 /*11*/], uParam0->f_7, joaat("PICKUP_CUSTOM_SCRIPT"), 0, 0, 2);
				}
			}
		}
		else if (!bVar2)
		{
			if (__LIB_37__.func_800(uParam0, iParam1, Var1))
			{
				if (__LIB_18__.func_206(uParam0, iParam1, Var1, &iLocal_54))
				{
					__LIB_42__.func_729(3, 23000);
					func_8();
				}
			}
		}
		func_89(uParam0->f_10, bVar2);
		uParam0->f_10++;
		if (uParam0->f_10 >= *iParam1)
		{
			uParam0->f_10 = 0;
		}
		iVar0++;
	}
	if (!Global_78579)
	{
		__LIB_31__.func_876(&(uParam0->f_11), &(uParam0->f_12), &(uParam0->f_9), 3, &iLocal_56, &iLocal_57, "SUBM_TITLE" /* GXT: Waste Collected~s~ */, "SUBM_COLLECT" /* GXT: ~1~/30 nuclear waste collected. */);
	}
	if (uParam0->f_1.f_4 >= uParam0->f_1.f_3)
	{
		func_81();
		__LIB_0__.func_547(0);
		__LIB_6__.func_849(0);
	}
	if (!uParam0->f_12 && !uParam0->f_11)
	{
		return uParam0->f_1.f_4 >= uParam0->f_1.f_3;
	}
	return 0;
}

void func_81()//Position - 0x35E0
{
	MISC::SET_BIT(&Global_8137, 30);
}

void func_89(int iParam0, bool bParam1)//Position - 0x3936
{
	int iVar0;
	if (func_91(iParam0) == 0)
	{
		return;
	}
	if (iLocal_58[iParam0] == -1)
	{
		if (!bParam1 && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_48[iParam0 /*11*/].f_3) < (100f * 100f))
			{
				if (__LIB_9__.func_487(&iVar0))
				{
					GRAPHICS::PROCGRASS_ENABLE_CULLSPHERE(iVar0, Local_48[iParam0 /*11*/].f_3, 8f);
					iLocal_58[iParam0] = iVar0;
				}
			}
		}
	}
	else if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_48[iParam0 /*11*/].f_3) > (105f * 105f))
		{
			if (iLocal_58[iParam0] >= 0 && iLocal_58[iParam0] < 8)
			{
				GRAPHICS::PROCGRASS_DISABLE_CULLSPHERE(iLocal_58[iParam0]);
				iLocal_58[iParam0] = -1;
			}
		}
	}
}

int func_91(int iParam0)//Position - 0x3A53
{
	if (iParam0 == 23)
	{
		return 0;
	}
	return 1;
}

void func_109()//Position - 0x41DD
{
	if (__LIB_0__.func_121(PLAYER::PLAYER_PED_ID()))
	{
		if (!PED::IS_PED_IN_ANY_SUB(PLAYER::PLAYER_PED_ID()))
		{
			__LIB_0__.func_547(0);
			__LIB_6__.func_849(0);
			PLAYER::SET_MAX_WANTED_LEVEL(5);
			func_6(2);
		}
		else
		{
			if (!__LIB_0__.func_67(15))
			{
				__LIB_18__.func_203("SUBM_HELP1" /* GXT: Follow the sonar blips on Trackify to locate nuclear waste lost on the sea bed. */, 1, 0, -1, 10000, 7, 0, 0, 0);
				__LIB_0__.func_460(15);
			}
			if (!__LIB_0__.func_545())
			{
				__LIB_0__.func_547(1);
				if (!iLocal_52 && !Local_42.f_1.f_4 >= Local_42.f_1.f_3)
				{
					__LIB_18__.func_203("SUBM_TRKHELP" /* GXT: To restart Trackify, select the Trackify app from the bottom right of the phone. */, 1, 0, -1, 10000, 7, 0, 0, 0);
					iLocal_52 = 1;
				}
			}
			func_110();
			if (func_75(&Local_42, &Local_48))
			{
				func_31();
			}
		}
	}
}

void func_110()//Position - 0x4285
{
	iLocal_53++;
	if ((iLocal_53 % 30) == 0 || iLocal_54 == -1)
	{
		if (__LIB_18__.func_206(&Local_42, &Local_48, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &iLocal_54))
		{
			func_8();
		}
	}
}

void func_117()//Position - 0x4672
{
	iLocal_56 = 0;
	func_121();
	__LIB_0__.func_546(&Local_42, 3, joaat("prop_rad_waste_barrel_01"), "SUBM_COLLECT" /* GXT: ~1~/30 nuclear waste collected. */);
	__LIB_24__.func_944(&Local_42, joaat("NUM_HIDDEN_PACKAGES_3"), 815, 30);
	if (__LIB_0__.func_121(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::IS_PED_IN_ANY_SUB(PLAYER::PLAYER_PED_ID()))
		{
			PLAYER::SET_MAX_WANTED_LEVEL(0);
			func_6(1);
		}
		else
		{
			PLAYER::SET_MAX_WANTED_LEVEL(5);
			func_6(2);
		}
	}
}

void func_121()//Position - 0x476F
{
	int iVar0;
	Local_48[0 /*11*/].f_3 = { func_10(0) };
	Local_48[0 /*11*/].f_9 = 179.47f;
	Local_48[1 /*11*/].f_3 = { func_10(1) };
	Local_48[1 /*11*/].f_9 = 104f;
	Local_48[2 /*11*/].f_3 = { func_10(2) };
	Local_48[2 /*11*/].f_9 = 321.5f;
	Local_48[3 /*11*/].f_3 = { func_10(3) };
	Local_48[3 /*11*/].f_9 = -29.79f;
	Local_48[4 /*11*/].f_3 = { func_10(4) };
	Local_48[4 /*11*/].f_9 = -165.6f;
	Local_48[5 /*11*/].f_3 = { func_10(5) };
	Local_48[5 /*11*/].f_9 = 116f;
	Local_48[6 /*11*/].f_3 = { func_10(6) };
	Local_48[6 /*11*/].f_9 = -68.65f;
	Local_48[7 /*11*/].f_3 = { func_10(7) };
	Local_48[7 /*11*/].f_9 = 40f;
	Local_48[8 /*11*/].f_3 = { func_10(8) };
	Local_48[8 /*11*/].f_9 = 40f;
	Local_48[9 /*11*/].f_3 = { func_10(9) };
	Local_48[9 /*11*/].f_9 = 40f;
	Local_48[10 /*11*/].f_3 = { func_10(10) };
	Local_48[10 /*11*/].f_9 = 40f;
	Local_48[11 /*11*/].f_3 = { func_10(11) };
	Local_48[11 /*11*/].f_9 = 27.04f;
	Local_48[12 /*11*/].f_3 = { func_10(12) };
	Local_48[12 /*11*/].f_9 = 40f;
	Local_48[13 /*11*/].f_3 = { func_10(13) };
	Local_48[13 /*11*/].f_9 = 40f;
	Local_48[14 /*11*/].f_3 = { func_10(14) };
	Local_48[14 /*11*/].f_9 = 40f;
	Local_48[15 /*11*/].f_3 = { func_10(15) };
	Local_48[15 /*11*/].f_9 = 40f;
	Local_48[16 /*11*/].f_3 = { func_10(16) };
	Local_48[16 /*11*/].f_6 = { 89.94f, 61.93f, 90.94f };
	Local_48[17 /*11*/].f_3 = { func_10(17) };
	Local_48[17 /*11*/].f_9 = 40f;
	Local_48[18 /*11*/].f_3 = { func_10(18) };
	Local_48[18 /*11*/].f_9 = 40f;
	Local_48[19 /*11*/].f_3 = { func_10(19) };
	Local_48[19 /*11*/].f_9 = 40f;
	Local_48[20 /*11*/].f_3 = { func_10(20) };
	Local_48[20 /*11*/].f_9 = 40f;
	Local_48[21 /*11*/].f_3 = { func_10(21) };
	Local_48[21 /*11*/].f_9 = 40f;
	Local_48[22 /*11*/].f_3 = { func_10(22) };
	Local_48[22 /*11*/].f_9 = 40f;
	Local_48[23 /*11*/].f_3 = { func_10(23) };
	Local_48[23 /*11*/].f_9 = 40f;
	Local_48[24 /*11*/].f_3 = { func_10(24) };
	Local_48[24 /*11*/].f_9 = 40f;
	Local_48[25 /*11*/].f_3 = { func_10(25) };
	Local_48[25 /*11*/].f_9 = 198f;
	Local_48[26 /*11*/].f_3 = { func_10(26) };
	Local_48[26 /*11*/].f_9 = 198f;
	Local_48[27 /*11*/].f_3 = { func_10(27) };
	Local_48[27 /*11*/].f_9 = 198f;
	Local_48[28 /*11*/].f_3 = { func_10(28) };
	Local_48[28 /*11*/].f_9 = 198f;
	Local_48[29 /*11*/].f_3 = { func_10(29) };
	Local_48[29 /*11*/].f_9 = -109.43f;
	func_122(&Local_48);
	iVar0 = 0;
	while (iVar0 < 30)
	{
		iLocal_58[iVar0] = -1;
		iVar0++;
	}
}

void func_122(int iParam0)//Position - 0x4AF2
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < *iParam0)
	{
		(iParam0[iVar0 /*11*/])->f_10 = 0;
		iVar0++;
	}
}

void func_126()//Position - 0x4BB0
{
	int iVar0;
	PLAYER::SET_MAX_WANTED_LEVEL(5);
	func_5();
	iVar0 = 0;
	while (iVar0 < Local_48.f_0)
	{
		__LIB_0__.func_523(&(Local_48[iVar0 /*11*/].f_2));
		__LIB_0__.func_539(&(Local_48[iVar0 /*11*/].f_1));
		if (iLocal_58[iVar0] >= 0 && iLocal_58[iVar0] < 8)
		{
			GRAPHICS::PROCGRASS_DISABLE_CULLSPHERE(iLocal_58[iVar0]);
		}
		iVar0++;
	}
	if (__LIB_0__.func_548(&(Local_42.f_1)))
	{
		__LIB_0__.func_512(13);
	}
	func_81();
	__LIB_0__.func_547(0);
	__LIB_6__.func_849(0);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_42.f_7);
	SCRIPT::TERMINATE_THIS_THREAD();
}

