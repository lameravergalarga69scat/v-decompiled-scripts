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
	struct<11> Local_61 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_62 = 0;
	struct<3> Local_63[32];
	var uLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	struct<21> Local_73 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
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
	iLocal_69 = 20;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && __LIB_0__::func_156(PLAYER::PLAYER_ID(), 0, 1))
	{
		func_61(ScriptParam_73);
	}
	else
	{
		func_57();
	}
	while (true)
	{
		__LIB_0__::func_933();
		if (__LIB_0__::func_959() || __LIB_3__::func_424(9))
		{
			func_57();
		}
		if (NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION())
		{
			func_57();
		}
		switch (func_43(NETWORK::PARTICIPANT_ID_TO_INT()))
		{
			case 0:
				if (__LIB_3__::func_436() == 1)
				{
					func_41();
					Local_63[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/] = 1;
				}
				else if (__LIB_3__::func_436() == 4)
				{
					Local_63[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/] = 3;
				}
				break;
			case 1:
				if (__LIB_3__::func_436() == 1)
				{
					func_39();
				}
				else if (__LIB_3__::func_436() == 4)
				{
					Local_63[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/] = 3;
				}
				break;
			case 3:
				__LIB_1__::func_399(&(Local_61.f_10));
				if (__LIB_1__::func_398(&(Local_61.f_10)))
				{
					Local_63[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/] = 4;
				}
				break;
			case 2:
				Local_63[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/] = 4;
			case 4:
				func_57();
				break;
		}
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			switch (__LIB_3__::func_436())
			{
				case 0:
					if (func_35())
					{
						if (func_8())
						{
							Local_61.f_0 = 1;
						}
					}
					break;
				case 1:
					func_7();
					func_6();
					if (func_1())
					{
						Local_61.f_0 = 4;
					}
					break;
				case 4:
					break;
				}
		}
	}
}

int func_1()//Position - 0x1BF
{
	if (func_2())
	{
		return 1;
	}
	return 0;
}

int func_2()//Position - 0x1D3
{
	if (Local_61.f_9 == 0)
	{
		if (!__LIB_0__::func_939(Local_61.f_2))
		{
			return 1;
		}
		else if (__LIB_0__::func_951(Local_61.f_3))
		{
			return 1;
		}
		else
		{
			if (iLocal_72 == 1)
			{
				if (BitTest(Local_61.f_1, 0))
				{
					return 1;
				}
			}
			if (!PED::IS_PED_IN_VEHICLE(NETWORK::NET_TO_PED(Local_61.f_3), NETWORK::NET_TO_VEH(Local_61.f_2), false))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_6()//Position - 0x2B1
{
	switch (Local_61.f_9)
	{
		case 0:
			break;
		case 1:
			break;
	}
}

void func_7()//Position - 0x2D4
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (iLocal_71 == 0)
	{
		iLocal_72 = 0;
		MISC::SET_BIT(&(Local_61.f_1), 0);
	}
	if (__LIB_0__::func_939(Local_61.f_2))
	{
		iVar0 = 1;
	}
	if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_71)))
	{
		iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_71));
		iVar2 = PLAYER::GET_PLAYER_PED(iVar1);
		if (__LIB_0__::func_156(iVar1, 1, 1))
		{
			if (BitTest(Local_61.f_1, 0))
			{
				if (iVar0 == 1)
				{
					if (ENTITY::IS_ENTITY_AT_ENTITY(iVar2, NETWORK::NET_TO_VEH(Local_61.f_2), 250f, 250f, 250f, false, true, 0))
					{
						MISC::CLEAR_BIT(&(Local_61.f_1), 0);
					}
				}
				else
				{
					MISC::CLEAR_BIT(&(Local_61.f_1), 0);
				}
			}
		}
	}
	iLocal_71++;
	if (iLocal_71 == NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		iLocal_71 = 0;
		iLocal_72 = 1;
	}
}

int func_8()//Position - 0x384
{
	if (NETWORK::CAN_REGISTER_MISSION_ENTITIES(1, 1, 0, 0))
	{
		if (__LIB_0__::func_799(Local_61.f_4) && __LIB_0__::func_799(Local_61.f_5))
		{
			if (func_12() && func_9())
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_9()//Position - 0x3C4
{
	int iVar0;
	if ((!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_61.f_3) && __LIB_0__::func_799(Local_61.f_5)) && NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_61.f_2))
	{
		if (__LIB_0__::func_939(Local_61.f_2))
		{
			if (__LIB_0__::func_930(&(Local_61.f_3), Local_61.f_2, 22, Local_61.f_5, -1, 1, 1, 1))
			{
				PED::SET_PED_RANDOM_COMPONENT_VARIATION(NETWORK::NET_TO_PED(Local_61.f_3), 0);
				if (__LIB_0__::func_680())
				{
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(NETWORK::NET_TO_PED(Local_61.f_3), Global_1837196);
				}
				else
				{
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(NETWORK::NET_TO_PED(Local_61.f_3), Global_1837199);
				}
				PED::SET_PED_KEEP_TASK(NETWORK::NET_TO_PED(Local_61.f_3), true);
				if (__LIB_0__::func_680())
				{
					iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 10);
					if (iVar0 < 5)
					{
						WEAPON::GIVE_DELAYED_WEAPON_TO_PED(NETWORK::NET_TO_PED(Local_61.f_3), joaat("WEAPON_PISTOL"), 25000, __LIB_0__::func_680());
					}
					else if (iVar0 > 6)
					{
						WEAPON::GIVE_DELAYED_WEAPON_TO_PED(NETWORK::NET_TO_PED(Local_61.f_3), joaat("WEAPON_MICROSMG"), 25000, __LIB_0__::func_680());
					}
					else
					{
						WEAPON::GIVE_DELAYED_WEAPON_TO_PED(NETWORK::NET_TO_PED(Local_61.f_3), joaat("WEAPON_PUMPSHOTGUN"), 25000, __LIB_0__::func_680());
					}
				}
				iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 10);
				if (iVar0 == 0 || iVar0 == 1)
				{
					PED::SET_PED_COMBAT_ABILITY(NETWORK::NET_TO_PED(Local_61.f_3), 0);
				}
				else if ((iVar0 == 2 || iVar0 == 3) || iVar0 == 4)
				{
					PED::SET_PED_COMBAT_ABILITY(NETWORK::NET_TO_PED(Local_61.f_3), 2);
				}
				else
				{
					PED::SET_PED_COMBAT_ABILITY(NETWORK::NET_TO_PED(Local_61.f_3), 1);
				}
				iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
				if (iVar0 == 0)
				{
					PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_61.f_3), 5, true);
				}
				else if (iVar0 == 1)
				{
					PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_61.f_3), 17, true);
				}
				else if (iVar0 == 2)
				{
					PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_61.f_3), 13, true);
				}
				if (__LIB_0__::func_680())
				{
					PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_61.f_3), 20, true);
				}
				if (__LIB_0__::func_680())
				{
					PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_61.f_3), 2, true);
				}
				iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
				if (iVar0 == 0)
				{
					PED::SET_PED_COMBAT_MOVEMENT(NETWORK::NET_TO_PED(Local_61.f_3), 2);
				}
				else if (iVar0 == 1)
				{
					PED::SET_PED_COMBAT_MOVEMENT(NETWORK::NET_TO_PED(Local_61.f_3), 1);
				}
				else if (iVar0 == 2)
				{
					PED::SET_PED_COMBAT_MOVEMENT(NETWORK::NET_TO_PED(Local_61.f_3), 3);
				}
				PED::SET_PED_ALLOW_MINOR_REACTIONS_AS_MISSION_PED(NETWORK::NET_TO_PED(Local_61.f_3), true);
				PED::SET_PED_GET_OUT_UPSIDE_DOWN_VEHICLE(NETWORK::NET_TO_PED(Local_61.f_3), true);
				PED::SET_PED_CONFIG_FLAG(NETWORK::NET_TO_PED(Local_61.f_3), 29, true);
				PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(NETWORK::NET_TO_PED(Local_61.f_3), 3);
				ENTITY::SET_ENTITY_HEALTH(NETWORK::NET_TO_PED(Local_61.f_3), SYSTEM::ROUND((200f * Global_262145.f_164 /* Tunable: AI_HEALTH */)), 0);
				AUDIO::SET_VEHICLE_RADIO_LOUD(NETWORK::NET_TO_VEH(Local_61.f_2), true);
				VEHICLE::SET_DISABLE_PRETEND_OCCUPANTS(NETWORK::NET_TO_VEH(Local_61.f_2), true);
				func_41();
				TASK::TASK_PERFORM_SEQUENCE(NETWORK::NET_TO_PED(Local_61.f_3), iLocal_65);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_61.f_5);
			}
		}
	}
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_61.f_3))
	{
		return 0;
	}
	return 1;
}

int func_12()//Position - 0x722
{
	struct<3> Var0;
	float fVar1;
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_61.f_2))
	{
		if (__LIB_0__::func_799(Local_61.f_4))
		{
			if (func_16(&Var0, &fVar1))
			{
				if (__LIB_0__::func_957(&(Local_61.f_2), Local_61.f_4, Var0, fVar1, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0))
				{
					VEHICLE::SET_VEHICLE_ENGINE_ON(NETWORK::NET_TO_VEH(Local_61.f_2), true, true, false);
					VEHICLE::SET_VEHICLE_IS_WANTED(NETWORK::NET_TO_VEH(Local_61.f_2), true);
					VEHICLE::SET_VEHICLE_IS_STOLEN(NETWORK::NET_TO_VEH(Local_61.f_2), true);
					AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(NETWORK::NET_TO_VEH(Local_61.f_2), "JOYRIDER_GROUP", 0f);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_61.f_4);
				}
			}
		}
	}
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_61.f_2))
	{
		return 0;
	}
	return 1;
}

bool func_16(int iParam0, float* fParam1)//Position - 0xA36
{
	bool bVar0;
	int iVar1;
	var uVar2;
	if (!bVar0)
	{
		if (VEHICLE::GENERATE_VEHICLE_CREATION_POS_FROM_PATHS(&(Local_61.f_6), iParam0, &uVar2, 0f, 180f, 40f, 0, 1, 1))
		{
			PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_WITH_HEADING(*iParam0, 1, iParam0, fParam1, &iVar1, 4, 3f, 0f);
			if (iVar1 >= 1 || ZONE::GET_HASH_OF_MAP_AREA_AT_COORDS(*iParam0) == joaat("City"))
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(-1367.5571f, -3220.5977f, 12.9448f, Local_61.f_6, true) >= 600f && MISC::GET_DISTANCE_BETWEEN_COORDS(750f, -3200f, 6f, Local_61.f_6, true) >= 700f)
				{
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(__LIB_0__::func_85(PLAYER::PLAYER_ID()), *iParam0, true) <= (250f - 50f))
					{
						if (iLocal_70 <= 5)
						{
							if (__LIB_1__::func_408(*iParam0, 1086324736, 1065353216, 1065353216, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
							{
								bVar0 = true;
							}
						}
						else
						{
							Local_61.f_0 = 4;
						}
					}
				}
			}
		}
	}
	if (!bVar0)
	{
		iLocal_69 += 4;
		if (iLocal_69 >= 80)
		{
			iLocal_69 = 20;
			iLocal_70++;
		}
	}
	return bVar0;
}

bool func_35()//Position - 0x11CC
{
	if (!BitTest(uLocal_64, 1))
	{
		if (PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE(__LIB_0__::func_85(PLAYER::PLAYER_ID()), iLocal_68, &(Local_61.f_6), 4, 3f, 0f))
		{
			MISC::SET_BIT(&uLocal_64, 1);
		}
		else
		{
			iLocal_68++;
		}
	}
	return BitTest(uLocal_64, 1);
}

void func_39()//Position - 0x1299
{
	switch (Local_63[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2)
	{
		case 0:
			func_41();
			func_40();
			if (Local_61.f_9 > 0)
			{
				Local_63[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2 = 1;
			}
			break;
		case 1:
			func_57();
			break;
	}
}

void func_40()//Position - 0x12E1
{
	int iVar0;
	float fVar1;
	if (!BitTest(Local_63[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_1, 0))
	{
		if (__LIB_0__::func_939(Local_61.f_2) && !__LIB_0__::func_951(Local_61.f_3))
		{
			iVar0 = ENTITY::GET_ENTITY_HEALTH(NETWORK::NET_TO_VEH(Local_61.f_2));
			fVar1 = ENTITY::GET_ENTITY_SPEED(NETWORK::NET_TO_VEH(Local_61.f_2));
			if (iVar0 < 200)
			{
				func_41();
				TASK::TASK_PERFORM_SEQUENCE(NETWORK::NET_TO_PED(Local_61.f_3), iLocal_67);
				MISC::SET_BIT(&(Local_63[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_1), 0);
			}
			else if (fVar1 < 3f)
			{
				if ((((ENTITY::IS_ENTITY_UPSIDEDOWN(NETWORK::NET_TO_VEH(Local_61.f_2)) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(NETWORK::NET_TO_VEH(Local_61.f_2), 3, 10000)) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(NETWORK::NET_TO_VEH(Local_61.f_2), 1, 10000)) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(NETWORK::NET_TO_VEH(Local_61.f_2), 0, 10000)) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(NETWORK::NET_TO_VEH(Local_61.f_2), 2, 10000))
				{
					func_41();
					TASK::TASK_PERFORM_SEQUENCE(NETWORK::NET_TO_PED(Local_61.f_3), iLocal_66);
					MISC::SET_BIT(&(Local_63[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_1), 0);
				}
			}
		}
	}
}

void func_41()//Position - 0x13E8
{
	if (!BitTest(uLocal_64, 0))
	{
		if (__LIB_0__::func_939(Local_61.f_2))
		{
			TASK::OPEN_SEQUENCE_TASK(&iLocal_65);
			TASK::TASK_VEHICLE_MISSION_COORS_TARGET(0, NETWORK::NET_TO_VEH(Local_61.f_2), Local_61.f_6, 14, 30f, 786468, 15f, 1f, false);
			TASK::TASK_VEHICLE_DRIVE_WANDER(0, NETWORK::NET_TO_VEH(Local_61.f_2), 30f, 786468);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_65);
			TASK::OPEN_SEQUENCE_TASK(&iLocal_66);
			TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 1);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_66);
			TASK::OPEN_SEQUENCE_TASK(&iLocal_67);
			TASK::TASK_VEHICLE_MISSION_COORS_TARGET(0, NETWORK::NET_TO_VEH(Local_61.f_2), Local_61.f_6, 5, 30f, 786468, 99999f, 1f, false);
			TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 1);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_67);
			MISC::SET_BIT(&uLocal_64, 0);
		}
	}
}

int func_43(int iParam0)//Position - 0x14A8
{
	return Local_63[iParam0 /*3*/];
}

void func_57()//Position - 0x1986
{
	func_60();
	if (__LIB_3__::func_436() == 4 && Local_61.f_4 != 0)
	{
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_61.f_4, false);
	}
	if (__LIB_0__::func_939(Local_61.f_2))
	{
		AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(NETWORK::NET_TO_VEH(Local_61.f_2), 0f);
	}
	AUDIO::STOP_AUDIO_SCENE("JOYRIDER_RADIO_SCENE");
	__LIB_1__::func_460(9, 0);
	__LIB_0__::func_202();
}

void func_60()//Position - 0x1A42
{
	TASK::CLEAR_SEQUENCE_TASK(&iLocal_65);
}

void func_61(struct<21> Param0)//Position - 0x1A50
{
	int iVar0;
	__LIB_0__::func_935(__LIB_1__::func_32(Param0.f_0), Param0);
	NETWORK::RESERVE_NETWORK_MISSION_PEDS(1);
	NETWORK::RESERVE_NETWORK_MISSION_VEHICLES(1);
	__LIB_0__::func_895(0, -1, 0);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_61, 12, 0);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_63, 97, 0);
	if (!__LIB_0__::func_934())
	{
		func_57();
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			if (Global_2815059.f_4451 == 0)
			{
				iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 7);
				switch (iVar0)
				{
					case 0:
						Local_61.f_4 = joaat("stingergt");
						break;
					case 1:
						Local_61.f_4 = joaat("entityxf");
						break;
					case 2:
						Local_61.f_4 = joaat("feltzer2");
						break;
					case 3:
						Local_61.f_4 = joaat("monroe");
						break;
					case 4:
						Local_61.f_4 = joaat("cogcabrio");
						break;
					case 5:
						Local_61.f_4 = joaat("superd");
						break;
					case 6:
						Local_61.f_4 = joaat("infernus");
						break;
				}
			}
			else
			{
				Local_61.f_4 = Global_2815059.f_4451;
				Global_2815059.f_4451 = 0;
			}
			VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_61.f_4, true);
			Local_61.f_5 = __LIB_16__::func_821(1);
		}
		__LIB_1__::func_460(9, 1);
		AUDIO::START_AUDIO_SCENE("JOYRIDER_RADIO_SCENE");
		Local_63[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/] = 0;
	}
	else
	{
		func_57();
	}
}

