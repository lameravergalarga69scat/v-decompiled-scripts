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
	var uLocal_20 = 0;
	char* sLocal_21 = NULL;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	float fLocal_24 = 0f;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	float fLocal_28 = 0f;
	float fLocal_29 = 0f;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	float fLocal_33 = 0f;
	float fLocal_34 = 0f;
	float fLocal_35 = 0f;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	int iLocal_38 = 0;
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
	int* iLocal_50 = NULL;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56[4] = { 0, 0, 0, 0 };
	float fLocal_57[4] = { 0f, 0f, 0f, 0f };
	float fLocal_58 = 0f;
	float fLocal_59 = 0f;
	float fLocal_60 = 0f;
	int iLocal_61 = 0;
	bool bLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
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
	sLocal_21 = "NULL";
	fLocal_24 = 0f;
	fLocal_28 = -0.0375f;
	fLocal_29 = 0.17f;
	fLocal_33 = 80f;
	fLocal_34 = 140f;
	fLocal_35 = 180f;
	iLocal_38 = 3;
	bLocal_40 = true;
	bLocal_41 = true;
	iLocal_51 = -1;
	iLocal_61 = 1;
	iLocal_63 = AUDIO::GET_SOUND_ID();
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(210))
	{
		func_75(1);
	}
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("ambient_diving")) > 1)
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	__LIB_0__.func_513(27);
	while (true)
	{
		SYSTEM::WAIT(0);
		if (__LIB_6__.func_854(0))
		{
			if (!iLocal_67)
			{
				func_75(0);
				iLocal_67 = 1;
			}
		}
		else
		{
			iLocal_67 = 0;
			__LIB_0__.func_524(PLAYER::PLAYER_PED_ID());
			switch (iLocal_49)
			{
				case 0:
					func_65();
					break;
				case 1:
					func_62();
					func_53();
					func_1();
					break;
				case 2:
					func_53();
					break;
				case 3:
					func_75(1);
					break;
				}
		}
	}
}

void func_1()//Position - 0x116
{
	if (func_18(&Local_42, &Local_48) || __LIB_0__.func_368(110) == 1)
	{
		if (__LIB_0__.func_545())
		{
			__LIB_0__.func_547(0);
		}
		__LIB_24__.func_943(298, 0, 0);
		if (!__LIB_0__.func_368(110))
		{
			if (!bLocal_62)
			{
				bLocal_62 = __LIB_20__.func_646(joaat("CALL_SONAR_COLLECT_DONE"), 1, 1, 16, 3, 1000, 10000, joaat("TEXT_ABIGAIL_MISSED"), -1, 163, -1, 0);
			}
		}
		__LIB_30__.func_536(2);
	}
}

int func_18(var uParam0, int iParam1)//Position - 0xB49
{
	int iVar0;
	bool bVar1;
	struct<3> Var2;
	struct<3> Var3;
	int iVar4;
	PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID());
	Var2 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
	iVar0 = 0;
	while (iVar0 < 1)
	{
		bVar1 = __LIB_0__.func_531(&(uParam0->f_1), uParam0->f_10);
		if (!(iParam1[uParam0->f_10 /*11*/])->f_10)
		{
			if (!bVar1)
			{
				if (!__LIB_0__.func_78((iParam1[uParam0->f_10 /*11*/])->f_6, 0f, 0f, 0f, 0))
				{
					__LIB_0__.func_533(iParam1[uParam0->f_10 /*11*/], uParam0->f_7, joaat("PICKUP_CUSTOM_SCRIPT"), 0, 1, 0);
				}
				else
				{
					__LIB_0__.func_533(iParam1[uParam0->f_10 /*11*/], uParam0->f_7, joaat("PICKUP_CUSTOM_SCRIPT"), 0, 0, 2);
				}
			}
		}
		else if (!bVar1)
		{
			__LIB_37__.func_800(uParam0, iParam1, Var2);
		}
		uParam0->f_10++;
		if (uParam0->f_10 >= *iParam1)
		{
			uParam0->f_10 = 0;
		}
		iVar0++;
	}
	if (uParam0->f_11)
	{
		if (!Global_78579)
		{
			__LIB_31__.func_876(&(uParam0->f_11), &(uParam0->f_12), &(uParam0->f_9), 5, &iLocal_52, &iLocal_50, "DIVING_TITLE" /* GXT: Piece Collected~s~ */, "DIVING_COLLECT" /* GXT: ~1~/30 submarine pieces collected. */);
		}
		if (!__LIB_0__.func_67(44))
		{
			Var3 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
			if (__LIB_18__.func_206(&Local_42, &Local_48, Var3, &iVar4))
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_23(iVar4), Var3, false) > 200f)
				{
					__LIB_18__.func_203("DIVING_HELP4" /* GXT: Return to a Dinghy to continue hunting for the submarine pieces. */, 1, 7500, -1, 10000, 7, 0, 0, 0);
					__LIB_0__.func_460(44);
				}
			}
		}
	}
	if (!bLocal_62)
	{
		if (uParam0->f_1.f_4 >= uParam0->f_1.f_3)
		{
			bLocal_62 = __LIB_20__.func_646(joaat("CALL_SONAR_COLLECT_DONE"), 1, 1, 16, 3, 1000, 10000, joaat("TEXT_ABIGAIL_MISSED"), -1, 163, -1, 0);
		}
	}
	if (!uParam0->f_12 && !uParam0->f_11)
	{
		return uParam0->f_1.f_4 >= uParam0->f_1.f_3;
	}
	return 0;
}

Vector3 func_23(int iParam0)//Position - 0x1043
{
	switch (iParam0)
	{
		case 0:
			return -1036.73f, 6735.72f, -100.52f;
			break;
		case 1:
			return -908.86f, 6655.98f, -34.35f;
			break;
		case 2:
			return -985.14f, 6697.71f, -41.57f;
			break;
		case 3:
			return 1825.73f, -2920.67f, -36.82f;
			break;
		case 4:
			return 1772.11f, -2967.72f, -46.81f;
			break;
		case 5:
			return 3198.59f, -385.05f, -31.49f;
			break;
		case 6:
			return 3170.43f, -302.21f, -25.99f;
			break;
		case 7:
			return 3157.44f, -268.54f, -28.07f;
			break;
		case 8:
			return -3180.2f, 3010.9f, -37.6f;
			break;
		case 9:
			return -3178.3f, 3044.86f, -39.96f;
			break;
		case 10:
			return 910.48f, -3471.21f, -17.57f;
			break;
		case 11:
			return 1338.76f, -3041.59f, -19.23f;
			break;
		case 12:
			return 1153.38f, -2864.51f, -18.96f;
			break;
		case 13:
			return 958.56f, -2847.78f, -22.05f;
			break;
		case 14:
			return 782.28f, -2872.81f, -9.577f;
			break;
		case 15:
			return 581.28f, -2471.5f, -9.44f;
			break;
		case 16:
			return 636.56f, -2214.49f, -7.87f;
			break;
		case 17:
			return 371.06f, -3226.67f, -19.6f;
			break;
		case 18:
			return 689.69f, -3451.07f, -27.85f;
			break;
		case 19:
			return 180.17f, -2255.91f, -2.54f;
			break;
		case 20:
			return -691.64f, -2836.86f, -15.67f;
			break;
		case 21:
			return -3397.5f, 3717.52f, -86.14f;
			break;
		case 22:
			return -3357.11f, 3710.79f, -96.14f;
			break;
		case 23:
			return -3282.21f, 3682.6f, -82.87f;
			break;
		case 24:
			return -3256.66f, 3672.29f, -35.06f;
			break;
		case 25:
			return -3142.19f, 3625.95f, -26.31f;
			break;
		case 26:
			return 3271.34f, 6420.78f, -50.78f;
			break;
		case 27:
			return 3237.83f, 6487.44f, -43.9f;
			break;
		case 28:
			return 1772.1f, -2997.12f, -50.44f;
			break;
		case 29:
			return 3207f, -415.17f, -32.01f;
			break;
	}
	return 0f, 0f, 0f;
}

void func_53()//Position - 0x1F3B
{
	float fVar0;
	switch (iLocal_66)
	{
		case 0:
			if (func_60())
			{
				if (__LIB_0__.func_121(iLocal_64))
				{
					__LIB_1__.func_94();
					VEHICLE::SET_BOAT_ANCHOR(iLocal_64, false);
					iLocal_66 = 1;
					if (iLocal_49 == 2)
					{
						__LIB_30__.func_536(3);
					}
				}
			}
			else if (__LIB_0__.func_121(iLocal_64) && __LIB_0__.func_121(PLAYER::PLAYER_PED_ID()))
			{
				if (ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID()))
				{
					fVar0 = 500f;
				}
				else
				{
					fVar0 = 250f;
				}
				if (__LIB_0__.func_76(PLAYER::PLAYER_PED_ID(), iLocal_64, 0) > fVar0)
				{
					func_57();
					if (iLocal_49 == 2)
					{
						__LIB_30__.func_536(3);
					}
				}
			}
			else
			{
				__LIB_1__.func_94();
				if (iLocal_49 == 2)
				{
					__LIB_30__.func_536(3);
				}
			}
			break;
		case 1:
			if (iLocal_49 == 2)
			{
				__LIB_30__.func_536(3);
			}
			if (!func_60())
			{
				if (__LIB_0__.func_121(iLocal_64))
				{
					if (!HUD::DOES_BLIP_EXIST(iLocal_65))
					{
						iLocal_65 = __LIB_6__.func_825(iLocal_64, 0, 0);
					}
					VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_64, false, true, false);
					if (VEHICLE::IS_THIS_MODEL_A_BOAT(ENTITY::GET_ENTITY_MODEL(iLocal_64)))
					{
						if (!ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(iLocal_64))
						{
							VEHICLE::SET_BOAT_ANCHOR(iLocal_64, true);
						}
					}
					iLocal_66 = 0;
				}
			}
			break;
	}
}

void func_57()//Position - 0x212A
{
	__LIB_1__.func_94();
	if (__LIB_0__.func_121(iLocal_64))
	{
		if (VEHICLE::IS_THIS_MODEL_A_BOAT(ENTITY::GET_ENTITY_MODEL(iLocal_64)))
		{
			VEHICLE::SET_BOAT_ANCHOR(iLocal_64, false);
		}
		ENTITY::SET_ENTITY_RECORDS_COLLISIONS(iLocal_64, false);
		if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_64))
		{
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_64);
		}
	}
}

int func_60()//Position - 0x21E6
{
	if (__LIB_0__.func_121(PLAYER::PLAYER_PED_ID()))
	{
		if (__LIB_0__.func_121(iLocal_64))
		{
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_64, false))
			{
				return 1;
			}
		}
		else if (func_61())
		{
			iLocal_64 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_64))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_64, true, true);
				ENTITY::SET_ENTITY_RECORDS_COLLISIONS(iLocal_64, true);
				return 1;
			}
		}
	}
	return 0;
}

int func_61()//Position - 0x224C
{
	int iVar0;
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("dinghy") || ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("dinghy2"))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	return 0;
}

void func_62()//Position - 0x22A1
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	int iVar3;
	Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
	if (__LIB_18__.func_206(&Local_42, &Local_48, Var0, &iLocal_51))
	{
		Var1 = { func_23(iLocal_51) };
		fVar2 = MISC::GET_DISTANCE_BETWEEN_COORDS(Var1, Var0, false);
		if (fVar2 > 200f)
		{
			func_64();
			if (!iLocal_61)
			{
				iLocal_61 = 1;
			}
			if (func_61())
			{
				if (!__LIB_0__.func_67(41))
				{
					__LIB_18__.func_203("DIVING_HELP1" /* GXT: The nearest area where submarine pieces can be found is marked on the map when driving the Dinghy. */, 1, 0, -1, 10000, 7, 0, 0, 0);
					__LIB_0__.func_460(41);
				}
				if (iLocal_51 != iLocal_54)
				{
					if (HUD::DOES_BLIP_EXIST(iLocal_53))
					{
						HUD::REMOVE_BLIP(&iLocal_53);
					}
				}
				if (!HUD::DOES_BLIP_EXIST(iLocal_53))
				{
					iLocal_53 = HUD::ADD_BLIP_FOR_RADIUS(Var1, 200f);
					HUD::SET_BLIP_ALPHA(iLocal_53, 128);
					HUD::SET_BLIP_COLOUR(iLocal_53, 2);
					HUD::SET_BLIP_HIDDEN_ON_LEGEND(iLocal_53, false);
					HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_53, "B_WRE" /* GXT: Wreckage Site */);
					HUD::SHOW_HEIGHT_ON_BLIP(iLocal_53, false);
					iLocal_54 = iLocal_51;
				}
			}
			else if (HUD::DOES_BLIP_EXIST(iLocal_53))
			{
				HUD::REMOVE_BLIP(&iLocal_53);
			}
		}
		else
		{
			if (func_61())
			{
				if (!__LIB_0__.func_67(42))
				{
					__LIB_18__.func_203("DIVING_HELP2" /* GXT: When inside the green marker areas, your sonar will be in range and you can use it to to help locate the missing submarine pieces. */, 1, 0, -1, 10000, 7, 0, 0, 0);
					__LIB_0__.func_460(42);
				}
			}
			if (__LIB_0__.func_67(42))
			{
				if (!__LIB_0__.func_67(43))
				{
					if (ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_SWIMMING_UNDER_WATER(PLAYER::PLAYER_PED_ID()))
					{
						__LIB_18__.func_203("DIVING_HELP3" /* GXT: Dive underwater to search for the submarine pieces. */, 1, 2000, -1, 10000, 7, 0, 0, 0);
						__LIB_0__.func_460(43);
					}
				}
			}
			if (HUD::DOES_BLIP_EXIST(iLocal_53))
			{
				HUD::REMOVE_BLIP(&iLocal_53);
			}
			if (iLocal_51 != iLocal_54)
			{
				func_64();
				iLocal_54 = iLocal_51;
				iLocal_61 = 1;
			}
			if (Local_42.f_1.f_4 < Local_42.f_1.f_3)
			{
				if (iLocal_61)
				{
					fLocal_58 = 0f;
					fLocal_59 = fVar2;
					if (func_61())
					{
						fLocal_59 = __LIB_0__.func_301(fLocal_59, 20f, 200f);
					}
					else
					{
						fLocal_59 = __LIB_0__.func_301(fLocal_59, 10f, 200f);
					}
					fLocal_60 = (fLocal_59 * 0.025f);
					iLocal_61 = 0;
					if (func_61())
					{
						AUDIO::PLAY_SOUND_FROM_COORD(iLocal_63, "SINGLE_BLIP_FROM_BOAT", Var1, "ABIGAIL_SONAR_SOUNDSET", false, 0, false);
					}
					else
					{
						AUDIO::PLAY_SOUND_FROM_COORD(iLocal_63, "SCRIPT_TRIGGERED_FROM_PROP", Var0, "ABIGAIL_SONAR_SOUNDSET", false, 0, false);
					}
				}
				else
				{
					fLocal_58 = (fLocal_58 + fLocal_60);
					fLocal_58 = __LIB_0__.func_301(fLocal_58, 0f, fLocal_59);
					if (!HUD::DOES_BLIP_EXIST(iLocal_55))
					{
						iLocal_55 = HUD::ADD_BLIP_FOR_RADIUS(Var1, fLocal_58);
						HUD::SET_BLIP_ALPHA(iLocal_55, 255);
						HUD::SET_BLIP_COLOUR(iLocal_55, 4);
						HUD::SET_BLIP_AS_SHORT_RANGE(iLocal_55, true);
						HUD::SET_RADIUS_BLIP_EDGE(iLocal_55, true);
						HUD::SHOW_HEIGHT_ON_BLIP(iLocal_55, false);
					}
					else
					{
						HUD::SET_BLIP_SCALE(iLocal_55, fLocal_58);
					}
					iVar3 = 0;
					if (func_61())
					{
						iVar3 = 0;
						while (iVar3 <= 3)
						{
							if (!HUD::DOES_BLIP_EXIST(iLocal_56[iVar3]))
							{
								iLocal_56[iVar3] = HUD::ADD_BLIP_FOR_RADIUS(Var1, (fLocal_58 + fLocal_57[iVar3]));
								HUD::SET_BLIP_ALPHA(iLocal_56[iVar3], 255);
								HUD::SET_BLIP_COLOUR(iLocal_56[iVar3], 4);
								HUD::SET_BLIP_AS_SHORT_RANGE(iLocal_56[iVar3], true);
								HUD::SET_RADIUS_BLIP_EDGE(iLocal_56[iVar3], true);
								HUD::SHOW_HEIGHT_ON_BLIP(iLocal_56[iVar3], false);
							}
							else
							{
								HUD::SET_BLIP_SCALE(iLocal_56[iVar3], (fLocal_58 + fLocal_57[iVar3]));
							}
							iVar3++;
						}
					}
					else
					{
						iVar3 = 0;
						while (iVar3 <= 3)
						{
							if (HUD::DOES_BLIP_EXIST(iLocal_56[iVar3]))
							{
								HUD::SET_BLIP_SCALE(iLocal_56[iVar3], fLocal_58);
							}
							iVar3++;
						}
					}
					if (fLocal_58 >= fLocal_59)
					{
						iLocal_61 = 1;
					}
				}
			}
			else
			{
				func_64();
			}
		}
	}
}

void func_64()//Position - 0x263A
{
	int iVar0;
	if (HUD::DOES_BLIP_EXIST(iLocal_55))
	{
		HUD::REMOVE_BLIP(&iLocal_55);
	}
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (HUD::DOES_BLIP_EXIST(iLocal_56[iVar0]))
		{
			HUD::REMOVE_BLIP(&(iLocal_56[iVar0]));
		}
		iVar0++;
	}
}

void func_65()//Position - 0x267E
{
	iLocal_52 = 0;
	if (func_60())
	{
		iLocal_66 = 1;
	}
	else
	{
		iLocal_66 = 0;
	}
	func_69();
	__LIB_0__.func_546(&Local_42, 5, joaat("prop_sub_chunk_01"), "DIVING_COLLECT" /* GXT: ~1~/30 submarine pieces collected. */);
	__LIB_24__.func_944(&Local_42, joaat("NUM_HIDDEN_PACKAGES_4"), 845, 30);
	__LIB_30__.func_536(1);
	fLocal_57[0] = 0.25f;
	fLocal_57[1] = 0.5f;
	fLocal_57[2] = 0.75f;
	fLocal_57[3] = 1f;
}

void func_69()//Position - 0x278C
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 30)
	{
		Local_48[iVar0 /*11*/].f_3 = { func_23(iVar0) };
		Local_48[iVar0 /*11*/].f_10 = 0;
		iVar0++;
	}
	Local_48[0 /*11*/].f_6 = { -16.4f, 78.53f, -146.67f };
	Local_48[1 /*11*/].f_6 = { 0f, 45f, 10f };
	Local_48[2 /*11*/].f_6 = { 0.72f, 65.2f, -50.26f };
	Local_48[3 /*11*/].f_6 = { 0f, 15f, -132.16f };
	Local_48[4 /*11*/].f_6 = { 166.37f, -40f, 168.81f };
	Local_48[5 /*11*/].f_6 = { 90f, 56.2f, 90f };
	Local_48[6 /*11*/].f_6 = { -20f, 0f, 89.95f };
	Local_48[7 /*11*/].f_6 = { 4.08f, 54.9f, -65.35f };
	Local_48[8 /*11*/].f_6 = { 174.15f, -58.2f, -144.66f };
	Local_48[9 /*11*/].f_6 = { -28.22f, 36.11f, -90.22f };
	Local_48[10 /*11*/].f_6 = { -5f, 44f, 65f };
	Local_48[11 /*11*/].f_6 = { 0f, -108f, 45.36f };
	Local_48[12 /*11*/].f_6 = { -10.9f, 43.12f, 131.52f };
	Local_48[13 /*11*/].f_6 = { 12.37f, 49.66f, 126.88f };
	Local_48[14 /*11*/].f_6 = { 4.35f, 10.22f, 27.51f };
	Local_48[15 /*11*/].f_6 = { 0f, 10f, 60.73f };
	Local_48[16 /*11*/].f_6 = { 150.56f, -78.67f, -174.35f };
	Local_48[17 /*11*/].f_6 = { 0f, 50f, 46.41f };
	Local_48[18 /*11*/].f_6 = { 6.26f, 44.65f, 8.88f };
	Local_48[19 /*11*/].f_6 = { 90f, 78.5f, 16.04f };
	Local_48[20 /*11*/].f_6 = { -1.36f, 6.53f, -70.94f };
	Local_48[21 /*11*/].f_6 = { -61.86f, 78.61f, 126.5f };
	Local_48[22 /*11*/].f_6 = { -10f, -80.71f, 69.7f };
	Local_48[23 /*11*/].f_6 = { -76.43f, -70.02f, 29.74f };
	Local_48[24 /*11*/].f_6 = { -28f, -70f, 107.53f };
	Local_48[25 /*11*/].f_6 = { 4.19f, 6.46f, 110.43f };
	Local_48[26 /*11*/].f_6 = { -3.19f, 60.6f, 25f };
	Local_48[27 /*11*/].f_6 = { 0f, -81.68f, -20.16f };
	Local_48[28 /*11*/].f_6 = { 7.39f, 44.52f, 19.65f };
	Local_48[29 /*11*/].f_6 = { 89.74f, 80.95f, 151.74f };
}

void func_75(bool bParam0)//Position - 0x2D13
{
	int iVar0;
	if (HUD::DOES_BLIP_EXIST(iLocal_53))
	{
		HUD::REMOVE_BLIP(&iLocal_53);
	}
	func_64();
	if (!AUDIO::HAS_SOUND_FINISHED(iLocal_63))
	{
		AUDIO::STOP_SOUND(iLocal_63);
	}
	func_57();
	iVar0 = 0;
	while (iVar0 < Local_48.f_0)
	{
		__LIB_0__.func_523(&(Local_48[iVar0 /*11*/].f_2));
		__LIB_0__.func_539(&(Local_48[iVar0 /*11*/].f_1));
		Local_48[iVar0 /*11*/].f_1 = 0;
		iVar0++;
	}
	if (bParam0)
	{
		if (__LIB_0__.func_548(&(Local_42.f_1)) || __LIB_0__.func_368(110) == 1)
		{
			__LIB_0__.func_512(27);
		}
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_42.f_7);
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	else
	{
		iLocal_49 = 0;
	}
}

