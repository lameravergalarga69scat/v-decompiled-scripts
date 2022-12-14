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
	struct<27> Local_83 = { 0, 0, 0, 0, -644710429, 32417469, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_84 = 0;
	struct<3> Local_85[32];
	var uLocal_86 = 0;
	int iLocal_87 = 0;
	int iLocal_88 = 0;
	struct<21> Local_89 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
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
		func_210(ScriptParam_89);
	}
	else
	{
		func_206();
	}
	while (true)
	{
		__LIB_0__::func_933();
		if (__LIB_0__::func_959() || __LIB_3__::func_424(15))
		{
			func_206();
		}
		if (NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION())
		{
			func_206();
		}
		switch (__LIB_12__::func_742(NETWORK::PARTICIPANT_ID_TO_INT()))
		{
			case 0:
				if (__LIB_2__::func_86() == 1)
				{
					if (__LIB_2__::func_790(60000))
					{
						if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_83.f_2))
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(NETWORK::NET_TO_VEH(Local_83.f_2), false))
							{
								if (!__LIB_0__::func_109())
								{
									if (!BitTest(Local_83.f_1, 0))
									{
										__LIB_0__::func_151("PTD_HELP1" /* GXT: A Smuggler Plane ~HUD_COLOUR_RED~~BLIP_PLANE_DROP~ ~s~is flying around Los Santos. Bring the plane down before it leaves. */, -1);
									}
									else
									{
										__LIB_0__::func_151("PTD_HELP1H" /* GXT: A Smuggler Helicopter ~HUD_COLOUR_RED~~BLIP_HELICOPTER~ ~s~is flying around Los Santos. Bring the helicopter down before it leaves. */, -1);
									}
								}
							}
						}
					}
					Local_85[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/] = 1;
				}
				else if (__LIB_2__::func_86() == 4)
				{
					Local_85[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/] = 3;
				}
				break;
			case 1:
				if (__LIB_2__::func_86() == 1)
				{
					func_22();
				}
				else if (__LIB_2__::func_86() == 4)
				{
					Local_85[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/] = 3;
				}
				break;
			case 3:
				__LIB_1__::func_399(&(Local_83.f_24));
				if (__LIB_1__::func_398(&(Local_83.f_24)))
				{
					Local_85[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/] = 4;
				}
				break;
			case 2:
				Local_85[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/] = 4;
			case 4:
				func_206();
				break;
		}
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			switch (__LIB_2__::func_86())
			{
				case 0:
					if (func_11())
					{
						Local_83.f_0 = 1;
					}
					break;
				case 1:
					func_10();
					func_9();
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

int func_1()//Position - 0x20D
{
	if (func_2())
	{
		return 1;
	}
	return 0;
}

int func_2()//Position - 0x221
{
	struct<14> Var0;
	struct<14> Var1;
	if (__LIB_0__::func_939(Local_83.f_2))
	{
		if (Local_83.f_22 > 0)
		{
			if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_83.f_2))
			{
				if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(NETWORK::NET_TO_VEH(Local_83.f_2), 400f, -3850f, -50f, 400f, 7950f, 1000f, 4050f, false, true, 0))
				{
					if (!BitTest(Local_83.f_1, 0))
					{
						Var0.f_2 = -834923907;
					}
					else
					{
						Var0.f_2 = 990698863;
					}
					__LIB_1__::func_634(Var0, __LIB_1__::func_26(1));
					MISC::SET_BIT(&(Local_83.f_1), 1);
					return 1;
				}
			}
		}
	}
	if (Local_83.f_23 == 0)
	{
		if (Local_83.f_0 != 4)
		{
			if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_83.f_2))
			{
				if (ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_VEH(Local_83.f_2), false))
				{
					if (__LIB_0__::func_937(&(Local_83.f_26), 3000, 0))
					{
						if (!BitTest(Local_83.f_1, 0))
						{
							Var1.f_2 = -762167709;
						}
						else
						{
							Var1.f_2 = -208885833;
						}
						__LIB_1__::func_634(Var1, __LIB_1__::func_26(1));
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_9()//Position - 0x4A7
{
	switch (Local_83.f_23)
	{
		case 0:
			break;
		case 1:
			break;
	}
}

void func_10()//Position - 0x4CA
{
	struct<14> Var0;
	int iVar1;
	if (ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_VEH(Local_83.f_2), false))
	{
		if (Local_83.f_0 != 4)
		{
			iLocal_87 = 0;
			while (iLocal_87 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
			{
				if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_87)))
				{
					iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_87));
					if (BitTest(Local_85[iLocal_87 /*3*/].f_1, 0))
					{
						if (!BitTest(Local_83.f_1, 0))
						{
							Var0.f_2 = 1338180443;
						}
						else
						{
							Var0.f_2 = -1747140958;
						}
						Var0.f_10 = iVar1;
						__LIB_1__::func_634(Var0, __LIB_1__::func_26(1));
						Local_83.f_0 = 4;
						return;
					}
					if (BitTest(Local_85[iLocal_87 /*3*/].f_1, 1))
					{
						if (!BitTest(Local_83.f_1, 2))
						{
							MISC::SET_BIT(&(Local_83.f_1), 2);
						}
					}
				}
				iLocal_87++;
			}
		}
	}
}

int func_11()//Position - 0x57C
{
	if (__LIB_0__::func_799(Local_83.f_4) && __LIB_0__::func_799(Local_83.f_5))
	{
		if (func_14() && func_12())
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_83.f_4);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_83.f_5);
			return 1;
		}
	}
	return 0;
}

int func_12()//Position - 0x5C1
{
	if ((!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_83.f_3) && __LIB_0__::func_799(Local_83.f_5)) && NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_83.f_2))
	{
		if (__LIB_0__::func_939(Local_83.f_2))
		{
			if (__LIB_0__::func_930(&(Local_83.f_3), Local_83.f_2, 22, Local_83.f_5, -1, 1, 1, 1))
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(NETWORK::NET_TO_PED(Local_83.f_3), true);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(NETWORK::NET_TO_PED(Local_83.f_3), Global_1837196);
				PED::SET_PED_RANDOM_COMPONENT_VARIATION(NETWORK::NET_TO_PED(Local_83.f_3), 0);
				PED::SET_PED_KEEP_TASK(NETWORK::NET_TO_PED(Local_83.f_3), true);
			}
		}
	}
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_83.f_3))
	{
		return 0;
	}
	return 1;
}

int func_14()//Position - 0x6E3
{
	int iVar0;
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_83.f_2))
	{
		if (__LIB_0__::func_799(Local_83.f_4))
		{
			if (__LIB_0__::func_957(&(Local_83.f_2), Local_83.f_4, Local_83.f_6, __LIB_0__::func_932(Local_83.f_6, Local_83.f_9[0 /*3*/]), 1, 1, 1, 0, 1, 1, 0, 0, 0, 0))
			{
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(NETWORK::NET_TO_VEH(Local_83.f_2), 2);
				ENTITY::FREEZE_ENTITY_POSITION(NETWORK::NET_TO_VEH(Local_83.f_2), false);
				ENTITY::SET_ENTITY_DYNAMIC(NETWORK::NET_TO_VEH(Local_83.f_2), true);
				PHYSICS::ACTIVATE_PHYSICS(NETWORK::NET_TO_VEH(Local_83.f_2));
				VEHICLE::SET_VEHICLE_FORWARD_SPEED(NETWORK::NET_TO_VEH(Local_83.f_2), 30f);
				VEHICLE::SET_HELI_BLADES_FULL_SPEED(NETWORK::NET_TO_VEH(Local_83.f_2));
				VEHICLE::SET_VEHICLE_ENGINE_ON(NETWORK::NET_TO_VEH(Local_83.f_2), true, true, false);
				VEHICLE::SET_VEHICLE_ENGINE_CAN_DEGRADE(NETWORK::NET_TO_VEH(Local_83.f_2), false);
				ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(NETWORK::NET_TO_VEH(Local_83.f_2), false);
				if (Local_83.f_4 == joaat("cuban800"))
				{
					VEHICLE::CONTROL_LANDING_GEAR(NETWORK::NET_TO_VEH(Local_83.f_2), 3);
				}
				if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", 3))
				{
					if (DECORATOR::DECOR_EXIST_ON(NETWORK::NET_TO_VEH(Local_83.f_2), "MPBitset"))
					{
						iVar0 = DECORATOR::DECOR_GET_INT(NETWORK::NET_TO_VEH(Local_83.f_2), "MPBitset");
					}
					MISC::SET_BIT(&iVar0, 10);
					DECORATOR::DECOR_SET_INT(NETWORK::NET_TO_VEH(Local_83.f_2), "MPBitset", iVar0);
				}
			}
		}
	}
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_83.f_2))
	{
		return 0;
	}
	return 1;
}

void func_22()//Position - 0xB19
{
	switch (Local_85[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2)
	{
		case 0:
			func_186();
			func_23();
			if (Local_83.f_23 > 0)
			{
				Local_85[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2 = 1;
			}
			break;
		case 1:
			func_206();
			break;
	}
}

void func_23()//Position - 0xB61
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	var uVar6;
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_83.f_2))
	{
		if (!BitTest(Local_85[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_1, 0))
		{
			if (!VEHICLE::IS_VEHICLE_DRIVEABLE(NETWORK::NET_TO_VEH(Local_83.f_2), false))
			{
			}
			if (ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_VEH(Local_83.f_2), false))
			{
			}
			if (ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_VEH(Local_83.f_2), false))
			{
				if (PLAYER::PLAYER_ID() == NETWORK::NETWORK_GET_DESTROYER_OF_NETWORK_ID(Local_83.f_2, &uVar0))
				{
					__LIB_2__::func_69(2063, -1);
					iVar1 = __LIB_1__::func_360(2063, -1, 0);
					iVar2 = iVar1;
					if (iVar2 > Global_262145.f_8563 /* Tunable: PLANE_TAKEDOWN_RP_MAX_TIMES */)
					{
						iVar2 = Global_262145.f_8563 /* Tunable: PLANE_TAKEDOWN_RP_MAX_TIMES */;
					}
					iVar3 = (Global_262145.f_8561 /* Tunable: PLANE_TAKEDOWN_REWARDS_XP */ * iVar2);
					__LIB_11__::func_281(0, PLAYER::PLAYER_PED_ID(), "XPT_KAIE" /* GXT: ~g~+~1~ ~a~:~s~ Killed Hostile */, joaat("XPTYPE_SKILL"), joaat("XPCATEGORY_COMPLETE_PLANE_TAKEDOWN"), iVar3, 1, -1, 0, 0, 0);
					if (iVar1 > Global_262145.f_8562 /* Tunable: PLANE_TAKEDOWN_CASH_MAX_TIMES */)
					{
						iVar1 = Global_262145.f_8562 /* Tunable: PLANE_TAKEDOWN_CASH_MAX_TIMES */;
					}
					iVar4 = (Global_262145.f_8560 /* Tunable: PLANE_TAKEDOWN_REWARDS_CASH */ * iVar1);
					__LIB_12__::func_745(iVar4, 1, 1, 1092616192);
					Global_2727753 = iVar4;
					__LIB_3__::func_432(&iVar4, 1);
					if (iVar4 > 0)
					{
						if (__LIB_0__::func_112())
						{
							__LIB_2__::func_105(joaat("SERVICE_EARN_AMBIENT_JOB_PLANE_TAKEDOWN"), iVar4, &uVar6, 0, 0, 0);
						}
						else
						{
							MONEY::NETWORK_EARN_FROM_AMBIENT_JOB(iVar4, "AM_PLANE_TAKEDOWN", &uVar5);
						}
					}
					__LIB_2__::func_428(65, 1, -1);
					if (__LIB_0__::func_680())
					{
						__LIB_32__::func_533(2, "PTD_PASS0" /* GXT: Well dun, frend. I hope u told 'em 2 run guns with TP Inc next time, b4 u blasted em out the skie */, 0, 0, -99);
					}
					else
					{
						__LIB_32__::func_533(2, "PTD_PASS1" /* GXT: Nice work, buddy. Those engine noises, I hadn't been sleepin 4 weeks. But that coulda been the tina. Haha. Next time I'll get a trailer out the flight path. */, 0, 0, -99);
					}
					MISC::SET_BIT(&(Local_85[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_1), 0);
				}
			}
			else
			{
				if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
				{
					if (Local_83.f_22 < 4)
					{
						if (ENTITY::IS_ENTITY_AT_COORD(NETWORK::NET_TO_VEH(Local_83.f_2), Local_83.f_9[Local_83.f_22 /*3*/], 50f, 50f, 500f, false, true, 0))
						{
							Local_83.f_22++;
						}
					}
				}
				if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_83.f_2))
				{
					func_27();
					if (func_26())
					{
						if (__LIB_0__::func_953(Local_83.f_2) && __LIB_0__::func_953(Local_83.f_3))
						{
							NETWORK::NETWORK_EXPLODE_VEHICLE(NETWORK::NET_TO_VEH(Local_83.f_2), true, true, -1);
							if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_83.f_2))
							{
								__LIB_1__::func_387(&(Local_83.f_2));
							}
							if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_83.f_3))
							{
								PED::SET_PED_KEEP_TASK(NETWORK::NET_TO_PED(Local_83.f_3), true);
								__LIB_1__::func_387(&(Local_83.f_3));
							}
						}
					}
				}
			}
		}
	}
}

int func_26()//Position - 0xDBD
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_83.f_2))
	{
		if (VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(NETWORK::NET_TO_VEH(Local_83.f_2), 0, 7000))
		{
			return 1;
		}
		if (VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(NETWORK::NET_TO_VEH(Local_83.f_2), 1, 40000))
		{
			return 1;
		}
		if (VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(NETWORK::NET_TO_VEH(Local_83.f_2), 3, 30000))
		{
			return 1;
		}
		if (VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(NETWORK::NET_TO_VEH(Local_83.f_2), 2, 30000))
		{
			return 1;
		}
	}
	return 0;
}

void func_27()//Position - 0xE2E
{
	struct<3> Var0;
	if (__LIB_0__::func_939(Local_83.f_2) && !__LIB_0__::func_951(Local_83.f_3))
	{
		if (PED::IS_PED_IN_VEHICLE(NETWORK::NET_TO_PED(Local_83.f_3), NETWORK::NET_TO_VEH(Local_83.f_2), false))
		{
			if (Local_83.f_22 < 4)
			{
				if (!BitTest(Local_83.f_1, 0))
				{
					TASK::TASK_PLANE_MISSION(NETWORK::NET_TO_PED(Local_83.f_3), NETWORK::NET_TO_VEH(Local_83.f_2), 0, 0, Local_83.f_9[Local_83.f_22 /*3*/] + Vector(120f, 0f, 0f), 4, 20f, 50f, -1f, 1.26E-43f, 8.4E-44f, true);
				}
				else
				{
					TASK::TASK_HELI_MISSION(NETWORK::NET_TO_PED(Local_83.f_3), NETWORK::NET_TO_VEH(Local_83.f_2), 0, 0, Local_83.f_9[Local_83.f_22 /*3*/] + Vector(120f, 0f, 0f), 4, 20f, 50f, -1f, 90, 60, -1f, 0);
				}
			}
			else if (!BitTest(Local_83.f_1, 2) && !BitTest(Local_85[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_1, 1))
			{
				Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(NETWORK::NET_TO_VEH(Local_83.f_2), 0f, 12000f, 0f) };
				if (Var0.f_0 < -3700f)
				{
					Var0.f_0 = -3700f;
				}
				else if (Var0.f_0 > 4500f)
				{
					Var0.f_0 = 4500f;
				}
				if (Var0.f_1 < -3900f)
				{
					Var0.f_1 = -3900f;
				}
				else if (Var0.f_1 > 8000f)
				{
					Var0.f_1 = 8000f;
				}
				Var0.f_2 = 100f;
				if (!BitTest(Local_83.f_1, 0))
				{
					TASK::TASK_PLANE_MISSION(NETWORK::NET_TO_PED(Local_83.f_3), NETWORK::NET_TO_VEH(Local_83.f_2), 0, 0, Var0, 4, 20f, -1f, -1f, 1.4E-43f, 1.4E-43f, true);
				}
				else
				{
					TASK::TASK_HELI_MISSION(NETWORK::NET_TO_PED(Local_83.f_3), NETWORK::NET_TO_VEH(Local_83.f_2), 0, 0, Var0, 4, 20f, -1f, -1f, 100, 100, -1f, 0);
				}
				MISC::SET_BIT(&(Local_85[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_1), 1);
			}
		}
	}
}

void func_186()//Position - 0x56F9
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_83.f_2) && !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_VEH(Local_83.f_2), false))
	{
		if (!HUD::DOES_BLIP_EXIST(iLocal_88))
		{
			iLocal_88 = HUD::ADD_BLIP_FOR_ENTITY(NETWORK::NET_TO_VEH(Local_83.f_2));
			if (!BitTest(Local_83.f_1, 0))
			{
				HUD::SET_BLIP_SPRITE(iLocal_88, 307);
				HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_88, "PTD_BLIPN" /* GXT: Smuggler Plane */);
			}
			else
			{
				HUD::SET_BLIP_SPRITE(iLocal_88, 64);
				HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_88, "PTD_BLIPH" /* GXT: Smuggler Helicopter */);
			}
			HUD::SET_BLIP_COLOUR(iLocal_88, 1);
			HUD::SET_BLIP_FLASH_TIMER(iLocal_88, 7000);
			HUD::SET_BLIP_PRIORITY(iLocal_88, 6);
			if (__LIB_0__::func_109())
			{
				HUD::SET_BLIP_DISPLAY(iLocal_88, 0);
			}
		}
		else
		{
			if (!BitTest(Local_83.f_1, 0))
			{
				HUD::SET_BLIP_ROTATION(iLocal_88, SYSTEM::ROUND(ENTITY::GET_ENTITY_HEADING(NETWORK::NET_TO_VEH(Local_83.f_2))));
			}
			if (__LIB_0__::func_109() || __LIB_2__::func_791())
			{
				HUD::SET_BLIP_DISPLAY(iLocal_88, 0);
			}
			else
			{
				HUD::SET_BLIP_DISPLAY(iLocal_88, 4);
			}
		}
	}
}

void func_206()//Position - 0x5D03
{
	if (HUD::DOES_BLIP_EXIST(iLocal_88))
	{
		HUD::REMOVE_BLIP(&iLocal_88);
	}
	if (BitTest(Local_83.f_1, 1))
	{
		__LIB_32__::func_533(2, "PTD_FAIL" /* GXT: Sum1 just tried 2 sell me sum guns!  That means that the byrd landed, and u r no kind of friend at all! Remind me 2 eat u when I next c u */, 0, 0, -99);
	}
	func_209();
	if (__LIB_2__::func_86() == 4 && Local_83.f_4 != 0)
	{
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_83.f_4, false);
	}
	__LIB_1__::func_460(15, 0);
	__LIB_0__::func_202();
}

void func_209()//Position - 0x5DC5
{
	TASK::CLEAR_SEQUENCE_TASK(&uLocal_86);
}

void func_210(struct<21> Param0)//Position - 0x5DD3
{
	int iVar0;
	__LIB_0__::func_935(__LIB_1__::func_32(Param0.f_0), Param0);
	NETWORK::RESERVE_NETWORK_MISSION_PEDS(1);
	NETWORK::RESERVE_NETWORK_MISSION_VEHICLES(1);
	__LIB_0__::func_895(0, -1, 0);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_83, 28, 0);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_85, 97, 0);
	if (!__LIB_0__::func_934())
	{
		func_206();
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 6);
			switch (iVar0)
			{
				case 0:
					Local_83.f_4 = joaat("cuban800");
					Local_83.f_5 = joaat("A_M_M_Skidrow_01");
					break;
				case 1:
					Local_83.f_4 = joaat("stunt");
					Local_83.f_5 = joaat("A_M_Y_EastSA_02");
					break;
				case 2:
					Local_83.f_4 = joaat("duster");
					Local_83.f_5 = joaat("A_M_M_ProlHost_01");
					break;
				case 3:
					Local_83.f_4 = joaat("mammatus");
					Local_83.f_5 = joaat("A_M_Y_Vinewood_02");
					break;
				case 4:
					Local_83.f_4 = joaat("maverick");
					Local_83.f_5 = joaat("A_M_M_EastSA_02");
					MISC::SET_BIT(&(Local_83.f_1), 0);
					break;
				case 5:
					Local_83.f_4 = joaat("swift");
					Local_83.f_5 = joaat("A_M_Y_BusiCas_01");
					MISC::SET_BIT(&(Local_83.f_1), 0);
					break;
			}
			if (Local_83.f_4 != 0)
			{
				VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_83.f_4, true);
			}
			func_217();
			func_211();
		}
		__LIB_1__::func_460(15, 1);
		Local_85[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/] = 0;
	}
	else
	{
		func_206();
	}
}

void func_211()//Position - 0x5F20
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
		Local_83.f_9[iVar0 /*3*/] = { func_213(iVar1) };
		if (iVar0 > 0)
		{
			if (__LIB_0__::func_490(Local_83.f_9[iVar0 /*3*/], Local_83.f_9[(iVar0 - 1) /*3*/], 250f, 0))
			{
				Local_83.f_9[iVar0 /*3*/] = { func_213(iVar1 + 1) };
			}
		}
		iVar0++;
	}
}

Vector3 func_213(int iParam0)//Position - 0x6008
{
	if (iParam0 < 0)
	{
		iParam0 = 2;
	}
	else if (iParam0 > 2)
	{
		iParam0 = 0;
	}
	switch (iParam0)
	{
		case 0:
			return func_216();
		case 1:
			return func_215();
		case 2:
			return func_214();
		default:
	}
	return 3250f, 1500f, 0f;
}

Vector3 func_214()//Position - 0x605E
{
	switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 13))
	{
		case 0:
			return 1915.9016f, 563.9669f, 174.4925f;
		case 1:
			return 1402.8578f, -2148.4177f, 57.9675f;
		case 2:
			return 1104.8152f, -3142.3347f, 4.901f;
		case 3:
			return 545.7347f, -3025.3271f, 5.0591f;
		case 4:
			return 1376.0369f, -740.2166f, 66.2331f;
		case 5:
			return 1147.162f, 126.3452f, 80.8693f;
		case 6:
			return -1731.0846f, -989.8386f, 4.4152f;
		case 7:
			return 728.2132f, -1532.4799f, 18.7348f;
		case 8:
			return 1140.923f, -1285.6388f, 33.6091f;
		case 9:
			return 2811.453f, -668.671f, 1.581f;
		case 10:
			return -1706.0131f, -183.4387f, 56.3712f;
		case 11:
			return -134.0402f, -869.4509f, 43.2175f;
		case 12:
			return 1098.2463f, -544.2941f, 56.4061f;
		default:
	}
	return 1098.2463f, -544.2941f, 56.4061f;
}

Vector3 func_215()//Position - 0x61B9
{
	switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 13))
	{
		case 0:
			return 2312.7073f, 1531.2584f, 59.8792f;
		case 1:
			return 1069.5798f, 2366.3628f, 43.0396f;
		case 2:
			return -1979.7805f, 2584.161f, 2.2587f;
		case 3:
			return 1458.3934f, 1113.0664f, 113.334f;
		case 4:
			return 817.5361f, 1316.5696f, 362.0491f;
		case 5:
			return 1671.2318f, 3041.1763f, 53.0351f;
		case 6:
			return -3163.3643f, 756.8276f, 2.1183f;
		case 7:
			return -799.6782f, 885.0139f, 202.1319f;
		case 8:
			return -401.2717f, 1211.6768f, 324.9297f;
		case 9:
			return 2909.1543f, 770.3181f, 21.1684f;
		case 10:
			return 2778.9092f, 2853.2659f, 34.7828f;
		case 11:
			return 585.3987f, 2893.7783f, 38.5297f;
		case 12:
			return -498.3305f, 3006.9062f, 27.4341f;
		default:
	}
	return -498.3305f, 3006.9062f, 27.4341f;
}

Vector3 func_216()//Position - 0x6314
{
	switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 13))
	{
		case 0:
			return 1015.5989f, 4350.6685f, 41.484f;
		case 1:
			return -1731.06f, 4959.484f, 3.8134f;
		case 2:
			return -2436.2498f, 4181.913f, 7.7719f;
		case 3:
			return 2463.142f, 3769.6511f, 40.328f;
		case 4:
			return 1888.6101f, 4626.815f, 37.4665f;
		case 5:
			return -388.8584f, 4353.478f, 54.3806f;
		case 6:
			return 3800f, 4462f, 5f;
		case 7:
			return 3350f, 5152f, 20f;
		case 8:
			return 2200f, 5600f, 54f;
		case 9:
			return 1410f, 6560f, 20f;
		case 10:
			return -330f, 6100f, 32f;
		case 11:
			return -1365f, 4380f, 42f;
		case 12:
			return 700f, 3900f, 30f;
		default:
	}
	return 700f, 3900f, 30f;
}

void func_217()//Position - 0x646B
{
	Local_83.f_6 = { func_213(MISC::GET_RANDOM_INT_IN_RANGE(0, 3)) };
	Local_83.f_6 = { Local_83.f_6 + Vector(120f, 0f, 0f) };
}

