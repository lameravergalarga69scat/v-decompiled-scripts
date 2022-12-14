#region Local Var
	int iLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	int iLocal_12 = 0;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	float fLocal_15 = 0f;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
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
	int iLocal_61 = 0;
	bool bLocal_62 = 0;
	bool bLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	float fLocal_68 = 0f;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	float fLocal_71[2] = { 0f, 0f };
	int iLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	struct<21> Local_77 = { 0, 0, 745926877, 0, 2, 0, 2064532783, 0, 2064532783, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_78[32] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	struct<21> Local_79 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
#endregion
void __EntryFunction__()//Position - 0x0
{
	iLocal_0 = 3;
	iLocal_3 = 1;
	iLocal_4 = 134;
	iLocal_5 = 134;
	iLocal_6 = 1;
	iLocal_7 = 1;
	iLocal_8 = 1;
	iLocal_9 = 134;
	iLocal_10 = 1;
	iLocal_11 = 12;
	iLocal_12 = 12;
	fLocal_15 = 0.001f;
	iLocal_18 = -1;
	sLocal_21 = "NULL";
	fLocal_24 = 80f;
	fLocal_25 = 140f;
	fLocal_26 = 180f;
	fLocal_29 = 0f;
	fLocal_33 = -0.0375f;
	fLocal_34 = 0.17f;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_68 = -1f;
	iLocal_72 = 23;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_96(ScriptParam_79);
	}
	while (true)
	{
		__LIB_0__::func_933();
		if (__LIB_0__::func_959())
		{
			func_84();
		}
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			if (Global_2815059.f_444)
			{
				Local_77.f_20 = 1;
				if (NETWORK::NETWORK_GET_NUM_PARTICIPANTS() == 1)
				{
					func_84();
				}
			}
		}
		else if (Local_77.f_20)
		{
			func_84();
		}
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			func_83();
			switch (func_82(NETWORK::PARTICIPANT_ID_TO_INT()))
			{
				case 0:
					if (func_81() > 0)
					{
						iLocal_78[NETWORK::PARTICIPANT_ID_TO_INT()] = 2;
					}
					break;
				case 2:
					func_61();
					if (func_81() == 3)
					{
						iLocal_78[NETWORK::PARTICIPANT_ID_TO_INT()] = 3;
					}
					break;
				case 3:
					func_84();
					break;
			}
			if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
			{
				switch (func_81())
				{
					case 0:
						Local_77.f_0 = 2;
						break;
					case 2:
						func_1();
						break;
					case 3:
						break;
					}
				}
		}
	}
}

void func_1()//Position - 0x15D
{
	func_7();
	if (Local_77.f_1.f_2 == 5)
	{
		Local_77.f_0 = 3;
	}
	if (__LIB_0__::func_864(&(Local_77.f_1.f_17)))
	{
		if (__LIB_0__::func_937(&(Local_77.f_1.f_17), 20000, 0))
		{
			Local_77.f_0 = 3;
		}
	}
	if (__LIB_0__::func_945())
	{
		Local_77.f_0 = 3;
	}
	if (bLocal_62)
	{
		if (!NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION())
		{
			Local_77.f_0 = 3;
		}
	}
	else if (NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION())
	{
		Local_77.f_0 = 3;
	}
	if (__LIB_1__::func_24())
	{
		Local_77.f_0 = 3;
	}
}

void func_7()//Position - 0x291
{
	switch (Local_77.f_1.f_2)
	{
		case 0:
			func_60(1);
			break;
		case 1:
			if (func_40())
			{
				if (func_27())
				{
					__LIB_0__::func_795(&(Local_77.f_1.f_15), 0, 0);
					func_60(2);
				}
			}
			break;
		case 2:
			func_18();
			func_16();
			if (func_15())
			{
				func_60(3);
				__LIB_26__::func_272(0);
			}
			if (!__LIB_0__::func_939(Local_77.f_1))
			{
				if (__LIB_0__::func_951(Local_77.f_1.f_3[0 /*2*/]) && __LIB_0__::func_951(Local_77.f_1.f_3[1 /*2*/]))
				{
					func_60(5);
				}
			}
			else if (__LIB_0__::func_951(Local_77.f_1.f_3[0 /*2*/]))
			{
				if (__LIB_0__::func_951(Local_77.f_1.f_3[1 /*2*/]))
				{
					func_60(5);
				}
			}
			else if (__LIB_0__::func_951(Local_77.f_1.f_3[1 /*2*/]))
			{
				func_60(3);
			}
			else
			{
				if (__LIB_0__::func_864(&(Local_77.f_1.f_15)))
				{
					if (__LIB_0__::func_937(&(Local_77.f_1.f_15), Global_262145.f_11082 /* Tunable: ISLANDBACKUPHELILIFESPANMS */, 0))
					{
						func_60(3);
					}
				}
				if (__LIB_0__::func_979(PLAYER::PLAYER_ID(), 0))
				{
					func_60(3);
				}
				if (bLocal_63)
				{
					func_60(3);
				}
				if (__LIB_1__::func_386(PLAYER::PLAYER_ID(), 136))
				{
					func_60(3);
				}
			}
			break;
		case 3:
			func_18();
			if (!__LIB_0__::func_939(Local_77.f_1))
			{
				if (__LIB_0__::func_951(Local_77.f_1.f_3[0 /*2*/]) && __LIB_0__::func_951(Local_77.f_1.f_3[1 /*2*/]))
				{
					func_60(5);
				}
			}
			else if (__LIB_0__::func_951(Local_77.f_1.f_3[0 /*2*/]))
			{
				if (__LIB_0__::func_951(Local_77.f_1.f_3[1 /*2*/]))
				{
					func_60(5);
				}
			}
			break;
		case 5:
			break;
	}
}

bool func_15()//Position - 0x51F
{
	return Global_2815059.f_443;
}

void func_16()//Position - 0x52E
{
	if (Global_2703735.f_3689)
	{
		__LIB_1__::func_395(1, 600000);
		bLocal_63 = true;
	}
	if (Global_2703735.f_3688 >= 250f)
	{
		__LIB_1__::func_395(1, 600000);
		bLocal_63 = true;
	}
}

void func_18()//Position - 0x59A
{
	iLocal_66 = 0;
	iLocal_67 = 0;
	if (__LIB_0__::func_939(Local_77.f_1))
	{
		iLocal_66++;
	}
	else if (ENTITY::DOES_ENTITY_EXIST(NETWORK::NET_TO_VEH(Local_77.f_1)))
	{
		__LIB_1__::func_387(&(Local_77.f_1));
		iLocal_66++;
	}
	if (__LIB_0__::func_951(Local_77.f_1.f_3[0 /*2*/]))
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_77.f_1.f_3[0 /*2*/]))
		{
			__LIB_1__::func_387(&(Local_77.f_1.f_3[0 /*2*/]));
			iLocal_67++;
		}
	}
	else
	{
		iLocal_67++;
	}
	if (__LIB_0__::func_951(Local_77.f_1.f_3[1 /*2*/]))
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_77.f_1.f_3[1 /*2*/]))
		{
			__LIB_1__::func_387(&(Local_77.f_1.f_3[1 /*2*/]));
			iLocal_67++;
		}
	}
	else
	{
		iLocal_67++;
	}
	if (NETWORK::GET_NUM_RESERVED_MISSION_VEHICLES(false, 0) != iLocal_66)
	{
		if (__LIB_1__::func_690(iLocal_66, 0, 1))
		{
			NETWORK::RESERVE_NETWORK_MISSION_VEHICLES(iLocal_66);
		}
	}
	if (NETWORK::GET_NUM_RESERVED_MISSION_PEDS(false, 0) != iLocal_67)
	{
		if (__LIB_2__::func_99(iLocal_67, 0, 1))
		{
			NETWORK::RESERVE_NETWORK_MISSION_PEDS(iLocal_67);
		}
	}
}

int func_27()//Position - 0x8F8
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = joaat("A_M_M_Farmer_01");
	if (__LIB_0__::func_799(Local_77.f_1.f_1))
	{
		if (__LIB_0__::func_799(Local_77.f_1.f_3[1 /*2*/].f_1) && __LIB_0__::func_799(iVar0))
		{
			if (!__LIB_0__::func_939(Local_77.f_1))
			{
				if (__LIB_0__::func_957(&(Local_77.f_1), Local_77.f_1.f_1, Local_77.f_1.f_8, 0f, 1, 1, 1, 0, 0, 1, 0, 0, 0, 0))
				{
					iVar1 = NETWORK::NET_TO_VEH(Local_77.f_1);
					if (VEHICLE::GET_NUM_MOD_KITS(iVar1) > 0)
					{
						VEHICLE::SET_VEHICLE_MOD_KIT(iVar1, 0);
					}
					VEHICLE::SET_VEHICLE_COLOURS(iVar1, 127, 0);
					VEHICLE::SET_HELI_BLADES_FULL_SPEED(iVar1);
					VEHICLE::SET_VEHICLE_ENGINE_ON(iVar1, true, true, false);
					VEHICLE::SET_VEHICLE_DOORS_LOCKED(iVar1, 1);
					PHYSICS::ACTIVATE_PHYSICS(iVar1);
					ENTITY::SET_ENTITY_DYNAMIC(iVar1, true);
					__LIB_2__::func_838(iVar1, 4);
					Global_2703735.f_3690 = iVar1;
					ENTITY::SET_ENTITY_HEALTH(iVar1, Global_262145.f_11083 /* Tunable: ISLANDBACKUPHELIHEALTH */, 0);
					if (__LIB_0__::func_930(&(Local_77.f_1.f_3[0 /*2*/]), Local_77.f_1, 4, iVar0, -1, 1, 1, 1))
					{
						iVar2 = NETWORK::NET_TO_PED(Local_77.f_1.f_3[0 /*2*/]);
						__LIB_3__::func_435(Local_77.f_1.f_3[0 /*2*/]);
						func_28(iVar2, 0, 0, 1);
						NETWORK::NETWORK_SET_ATTRIBUTE_DAMAGE_TO_PLAYER(iVar2, PLAYER::PLAYER_ID());
						__LIB_2__::func_838(iVar2, 4);
						Global_2703735.f_3690.f_1[0] = iVar2;
						PED::SET_PED_COMPONENT_VARIATION(iVar2, 0, 1, 1, 0);
						PED::SET_PED_COMPONENT_VARIATION(iVar2, 2, 1, 1, 0);
						PED::SET_PED_COMPONENT_VARIATION(iVar2, 3, 0, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(iVar2, 4, 0, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(iVar2, 8, 0, 1, 0);
						PED::SET_PED_PROP_INDEX(iVar2, 1, 0, 0, false);
						PED::SET_PED_PROP_INDEX(iVar2, 0, 0, 0, false);
						if (__LIB_0__::func_930(&(Local_77.f_1.f_3[1 /*2*/]), Local_77.f_1, 4, Local_77.f_1.f_3[1 /*2*/].f_1, 1, 1, 1, 1))
						{
							__LIB_3__::func_435(Local_77.f_1.f_3[1 /*2*/]);
							func_28(NETWORK::NET_TO_PED(Local_77.f_1.f_3[1 /*2*/]), 1, 1, 1);
							NETWORK::NETWORK_SET_ATTRIBUTE_DAMAGE_TO_PLAYER(NETWORK::NET_TO_PED(Local_77.f_1.f_3[1 /*2*/]), PLAYER::PLAYER_ID());
							__LIB_2__::func_838(NETWORK::NET_TO_PED(Local_77.f_1.f_3[1 /*2*/]), 4);
							Global_2703735.f_3690.f_1[1] = NETWORK::NET_TO_PED(Local_77.f_1.f_3[1 /*2*/]);
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_77.f_1.f_3[1 /*2*/].f_1);
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_77.f_1.f_1);
							return 1;
						}
					}
				}
			}
		}
	}
	return 0;
}

void func_28(int iParam0, int iParam1, bool bParam2, bool bParam3)//Position - 0xB17
{
	WEAPON::GIVE_DELAYED_WEAPON_TO_PED(iParam0, joaat("WEAPON_ASSAULTRIFLE"), 300, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 5, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 3, false);
	PED::SET_PED_COMBAT_MOVEMENT(iParam0, 2);
	PED::SET_PED_COMBAT_ABILITY(iParam0, 2);
	PED::SET_PED_COMBAT_RANGE(iParam0, 2);
	PED::SET_PED_TARGET_LOSS_RESPONSE(iParam0, 1);
	PED::SET_PED_HIGHLY_PERCEPTIVE(iParam0, true);
	PED::SET_PED_CAN_BE_TARGETTED(iParam0, true);
	PED::SET_PED_SEEING_RANGE(iParam0, (fLocal_71[iParam1] + 100f));
	PED::SET_PED_VISUAL_FIELD_PERIPHERAL_RANGE(iParam0, 400f);
	PED::SET_COMBAT_FLOAT(iParam0, 10, 400f);
	if (!bParam2)
	{
		if (bParam3)
		{
			ENTITY::SET_ENTITY_MAX_HEALTH(iParam0, 250);
			ENTITY::SET_ENTITY_HEALTH(iParam0, 250, 0);
			PED::SET_PED_ARMOUR(iParam0, 250);
		}
	}
	else
	{
		ENTITY::SET_ENTITY_INVINCIBLE(iParam0, true);
	}
}

int func_40()//Position - 0xFC5
{
	struct<3> Var0;
	if (__LIB_0__::func_86(Local_77.f_1.f_8))
	{
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		{
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				Var0 = { __LIB_1__::func_657(__LIB_0__::func_85(PLAYER::PLAYER_ID()), 0f, (-200f * SYSTEM::SIN((SYSTEM::TO_FLOAT(Local_77.f_1.f_13) * 30f))), (200f * SYSTEM::COS((SYSTEM::TO_FLOAT(Local_77.f_1.f_13) * 30f))), 0f) };
				Var0.f_2 = PATHFIND::GET_APPROX_HEIGHT_FOR_POINT(Var0.f_0, Var0.f_1);
				Var0.f_2 = (Var0.f_2 + 30f);
				if (__LIB_1__::func_408(Var0, 20f, 1f, 1f, 15f, 1, 1, 1, 180f, 0, -1, 1, 0, 0, 0, 0, 0))
				{
					Local_77.f_1.f_8 = { Var0 };
					return 1;
				}
				else
				{
					Local_77.f_1.f_13++;
					if (Local_77.f_1.f_13 >= 12)
					{
						Local_77.f_1.f_13 = 0;
					}
				}
			}
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_60(int iParam0)//Position - 0x17B6
{
	Local_77.f_1.f_2 = iParam0;
}

void func_61()//Position - 0x17C6
{
	func_67();
	func_62();
}

void func_62()//Position - 0x17D6
{
	if (Local_77.f_1.f_2 == 2)
	{
		func_64();
	}
	else
	{
		func_63();
	}
}

void func_63()//Position - 0x17F3
{
	if (HUD::DOES_BLIP_EXIST(iLocal_61))
	{
		HUD::REMOVE_BLIP(&iLocal_61);
	}
}

void func_64()//Position - 0x180A
{
	int iVar0;
	iVar0 = NETWORK::NET_TO_VEH(Local_77.f_1);
	if (!HUD::DOES_BLIP_EXIST(iLocal_61) && ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		iLocal_61 = HUD::ADD_BLIP_FOR_ENTITY(iVar0);
		HUD::SET_BLIP_SPRITE(iLocal_61, 422);
		HUD::SHOW_HEIGHT_ON_BLIP(iLocal_61, false);
		HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_61, "MPCT_MERRY3" /* GXT: Backup Helicopter */);
		__LIB_1__::func_540(&iLocal_61, 1);
	}
}

void func_67()//Position - 0x1AE7
{
	int iVar0;
	int iVar1;
	int iVar2;
	switch (Local_77.f_1.f_2)
	{
		case 0:
			func_63();
			break;
		case 1:
			func_63();
			break;
		case 2:
			if (__LIB_0__::func_939(Local_77.f_1))
			{
				iVar1 = NETWORK::NET_TO_VEH(Local_77.f_1);
				func_64();
				if (__LIB_1__::func_388(Local_77.f_1))
				{
					if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_77.f_1))
					{
						if (VEHICLE::DOES_VEHICLE_HAVE_SEARCHLIGHT(iVar1))
						{
							if (__LIB_3__::func_434())
							{
								if (!VEHICLE::IS_VEHICLE_SEARCHLIGHT_ON(iVar1))
								{
									VEHICLE::SET_VEHICLE_SEARCHLIGHT(iVar1, true, false);
								}
							}
							else if (VEHICLE::IS_VEHICLE_SEARCHLIGHT_ON(iVar1))
							{
								VEHICLE::SET_VEHICLE_SEARCHLIGHT(iVar1, false, false);
							}
						}
					}
				}
				func_69();
				if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_77.f_1.f_3[0 /*2*/]))
				{
					iVar0 = NETWORK::NET_TO_PED(Local_77.f_1.f_3[0 /*2*/]);
					if (!PED::IS_PED_INJURED(iVar0))
					{
						iVar2 = TASK::GET_ACTIVE_VEHICLE_MISSION_TYPE(iVar1);
						if (iVar2 != iLocal_72 || fLocal_71[0] != fLocal_68)
						{
							if (__LIB_1__::func_388(Local_77.f_1))
							{
								if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_77.f_1.f_3[0 /*2*/]))
								{
									fLocal_71[0] = fLocal_68;
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, true);
									func_28(iVar0, 0, 0, 0);
									VEHICLE::SET_HELI_BLADES_FULL_SPEED(iVar1);
									VEHICLE::SET_VEHICLE_ENGINE_ON(iVar1, true, true, false);
									if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
									{
										if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
										{
											TASK::TASK_HELI_MISSION(iVar0, iVar1, 0, PLAYER::PLAYER_PED_ID(), 0f, 0f, 0f, iLocal_72, 20f, 40f, -1f, SYSTEM::CEIL(fLocal_71[0]), 10, -1f, 0);
										}
									}
								}
							}
						}
					}
				}
				if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_77.f_1.f_3[1 /*2*/]))
				{
					iVar0 = NETWORK::NET_TO_PED(Local_77.f_1.f_3[1 /*2*/]);
					if (!PED::IS_PED_INJURED(iVar0))
					{
						if (!PED::IS_PED_IN_COMBAT(iVar0, 0) || fLocal_71[1] != fLocal_68)
						{
							if (__LIB_1__::func_388(Local_77.f_1))
							{
								if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_77.f_1.f_3[1 /*2*/]))
								{
									fLocal_71[1] = fLocal_68;
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, false);
									func_28(iVar0, 1, 0, 0);
								}
							}
						}
					}
				}
			}
			if (!__LIB_0__::func_939(Local_77.f_1) || __LIB_0__::func_951(Local_77.f_1.f_3[0 /*2*/]))
			{
				func_68();
			}
			break;
		case 3:
			func_63();
			if (!__LIB_0__::func_864(&(Local_77.f_1.f_17)))
			{
				__LIB_0__::func_795(&(Local_77.f_1.f_17), 0, 0);
			}
			if (__LIB_0__::func_939(Local_77.f_1))
			{
				iVar1 = NETWORK::NET_TO_VEH(Local_77.f_1);
				if (!__LIB_0__::func_951(Local_77.f_1.f_3[0 /*2*/]))
				{
					iVar0 = NETWORK::NET_TO_PED(Local_77.f_1.f_3[0 /*2*/]);
					if (iLocal_64 == 0)
					{
						if (__LIB_1__::func_388(Local_77.f_1))
						{
							if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_77.f_1.f_3[0 /*2*/]))
							{
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, false);
								TASK::CLEAR_PED_TASKS(iVar0);
								PED::SET_PED_RELATIONSHIP_GROUP_HASH(iVar0, Global_1837194);
								if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
								{
									if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
									{
										TASK::TASK_HELI_MISSION(iVar0, iVar1, 0, PLAYER::PLAYER_PED_ID(), 0f, 0f, 0f, 8, 20f, 500f, -1f, 40, 10, -1f, 0);
										PED::SET_PED_KEEP_TASK(iVar0, true);
										iLocal_64 = 1;
									}
								}
							}
						}
					}
				}
				if (!__LIB_0__::func_951(Local_77.f_1.f_3[1 /*2*/]))
				{
					if (iLocal_65 == 0)
					{
						iVar0 = NETWORK::NET_TO_PED(Local_77.f_1.f_3[1 /*2*/]);
						if (__LIB_1__::func_388(Local_77.f_1))
						{
							if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_77.f_1.f_3[1 /*2*/]))
							{
								TASK::CLEAR_PED_TASKS(iVar0);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, true);
								PED::SET_PED_KEEP_TASK(iVar0, true);
								iLocal_65 = 1;
							}
						}
					}
				}
			}
			if (!__LIB_0__::func_939(Local_77.f_1) || __LIB_0__::func_951(Local_77.f_1.f_3[0 /*2*/]))
			{
				func_68();
			}
			break;
		case 5:
			func_63();
			break;
	}
}

void func_68()//Position - 0x1E5B
{
	int iVar0;
	if (!__LIB_0__::func_951(Local_77.f_1.f_3[0 /*2*/]))
	{
		if (__LIB_1__::func_388(Local_77.f_1.f_3[0 /*2*/]))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_77.f_1.f_3[0 /*2*/]))
			{
				iVar0 = NETWORK::NET_TO_PED(Local_77.f_1.f_3[0 /*2*/]);
				ENTITY::SET_ENTITY_HEALTH(iVar0, 0, 0);
			}
		}
	}
	if (!__LIB_0__::func_951(Local_77.f_1.f_3[1 /*2*/]))
	{
		if (__LIB_1__::func_388(Local_77.f_1.f_3[1 /*2*/]))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_77.f_1.f_3[1 /*2*/]))
			{
				iVar0 = NETWORK::NET_TO_PED(Local_77.f_1.f_3[1 /*2*/]);
				ENTITY::SET_ENTITY_HEALTH(iVar0, 0, 0);
			}
		}
	}
}

void func_69()//Position - 0x1EF3
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	if (!Global_1958700)
	{
		return;
	}
	if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_77.f_1))
	{
		return;
	}
	iVar0 = NETWORK::NET_TO_VEH(Local_77.f_1);
	if (__LIB_2__::func_836(iVar0))
	{
		return;
	}
	if (!__LIB_0__::func_121(iVar0))
	{
		return;
	}
	if (iLocal_75 == __LIB_0__::func_162())
	{
		func_71();
		return;
	}
	iVar1 = PLAYER::GET_PLAYER_PED(iLocal_75);
	if (!__LIB_0__::func_864(&uLocal_73))
	{
		if (iLocal_75 != __LIB_0__::func_162() && __LIB_0__::func_121(iVar1))
		{
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iVar1, true), ENTITY::GET_ENTITY_COORDS(iVar0, true), false) > 50f)
			{
				return;
			}
		}
	}
	if (!__LIB_0__::func_937(&uLocal_73, Global_1958699, 0))
	{
		return;
	}
	__LIB_0__::func_794(&uLocal_73);
	iVar3 = Local_77.f_1.f_3;
	bVar4 = false;
	iVar2 = 0;
	while (iVar2 < iVar3)
	{
		iVar5 = NETWORK::NET_TO_PED(Local_77.f_1.f_3[iVar2 /*2*/]);
		if (__LIB_0__::func_121(iVar5) && PED::IS_PED_IN_COMBAT(iVar5, 0))
		{
			bVar4 = true;
		}
		else
		{
			iVar2++;
		}
	}
	if (!bVar4)
	{
		iLocal_75 = __LIB_0__::func_162();
	}
}

void func_71()//Position - 0x2008
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	iVar1 = PLAYER::PLAYER_ID();
	iVar3 = NETWORK::NET_TO_PED(Local_77.f_1.f_3[0 /*2*/]);
	iVar4 = NETWORK::NET_TO_VEH(Local_77.f_1);
	iVar5 = __LIB_30__::func_396(PLAYER::PLAYER_ID());
	iVar6 = PLAYER::GET_PLAYER_PED(iVar5);
	iLocal_75 = __LIB_0__::func_162();
	iLocal_76++;
	iLocal_76 = __LIB_4__::func_892(iLocal_76, 32);
	iVar0 = iLocal_76;
	if (iVar0 == __LIB_0__::func_162())
	{
		return;
	}
	if (iVar0 == iLocal_75)
	{
		return;
	}
	if (!__LIB_0__::func_156(iVar0, 1, 1))
	{
		return;
	}
	iVar2 = PLAYER::GET_PLAYER_PED(iVar0);
	if (!__LIB_0__::func_121(iVar2))
	{
		return;
	}
	if (__LIB_0__::func_121(iVar6))
	{
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iVar6, true), ENTITY::GET_ENTITY_COORDS(iVar2, true), false) > Global_1958701)
		{
			return;
		}
	}
	if (__LIB_0__::func_941(iVar1, iVar0) || __LIB_1__::func_0(iVar1, iVar0, -2, 0))
	{
		TASK::TASK_HELI_MISSION(iVar3, iVar4, 0, iVar2, 0f, 0f, 0f, iLocal_72, 20f, 40f, -1f, SYSTEM::CEIL(fLocal_71[0]), 10, -1f, 0);
		iLocal_75 = iVar0;
	}
}

int func_81()//Position - 0x22D5
{
	return Local_77.f_0;
}

int func_82(int iParam0)//Position - 0x22DF
{
	return iLocal_78[iParam0];
}

void func_83()//Position - 0x22ED
{
	bool bVar0;
	struct<3> Var1;
	if (fLocal_68 == -1f)
	{
		bVar0 = true;
	}
	else if (!__LIB_0__::func_864(&uLocal_69))
	{
		__LIB_0__::func_795(&uLocal_69, 0, 0);
	}
	else if (__LIB_0__::func_937(&uLocal_69, 5000, 0))
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		Var1 = { __LIB_0__::func_85(PLAYER::PLAYER_ID()) };
		fLocal_68 = PATHFIND::GET_APPROX_HEIGHT_FOR_POINT(Var1.f_0, Var1.f_1);
		if (fLocal_68 < Global_262145.f_11084 /* Tunable: ISLANDBACKUPHELIMINHEIGHT */)
		{
			fLocal_68 = Global_262145.f_11084 /* Tunable: ISLANDBACKUPHELIMINHEIGHT */;
		}
		__LIB_0__::func_794(&uLocal_69);
	}
}

void func_84()//Position - 0x2360
{
	if (ENTITY::DOES_ENTITY_EXIST(Global_2703735.f_3690.f_1[0]))
	{
		PED::DELETE_PED(&(Global_2703735.f_3690.f_1[0]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_2703735.f_3690.f_1[1]))
	{
		PED::DELETE_PED(&(Global_2703735.f_3690.f_1[1]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_2703735.f_3690))
	{
		VEHICLE::DELETE_VEHICLE(&(Global_2703735.f_3690));
	}
	Global_2703735.f_3690.f_5 = 0f;
	Global_2703735.f_3690.f_6 = 0;
	Global_2703735.f_3690.f_7 = 0;
	__LIB_26__::func_383(0);
	__LIB_0__::func_202();
}

void func_96(struct<21> Param0)//Position - 0x253F
{
	__LIB_26__::func_383(0);
	__LIB_0__::func_935(32, Param0);
	NETWORK::RESERVE_NETWORK_MISSION_PEDS(2);
	NETWORK::RESERVE_NETWORK_MISSION_VEHICLES(1);
	__LIB_0__::func_895(0, -1, 0);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_77, 21, 0);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&iLocal_78, 33, 0);
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	if (!__LIB_0__::func_934())
	{
		func_84();
	}
	if (NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION())
	{
		bLocal_62 = true;
	}
	iLocal_75 = PLAYER::PLAYER_ID();
	iLocal_78[NETWORK::PARTICIPANT_ID_TO_INT()] = 0;
}

