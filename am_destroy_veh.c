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
	struct<48> Local_83 = { 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, -808831384, 588969535, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_84 = 0;
	struct<3> Local_85[32];
	var uLocal_86 = 0;
	int iLocal_87 = 0;
	int iLocal_88 = 0;
	int iLocal_89 = 0;
	int iLocal_90 = 0;
	int iLocal_91 = 0;
	int iLocal_92 = 0;
	int* iLocal_93 = NULL;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	struct<8> Local_101[3];
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	struct<21> Local_104 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
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
	iLocal_90 = 1076369579;
	iLocal_91 = 20;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && __LIB_0__::func_156(PLAYER::PLAYER_ID(), 0, 1))
	{
		func_229(ScriptParam_104);
	}
	else
	{
		func_225();
	}
	while (true)
	{
		__LIB_0__::func_933();
		if (__LIB_0__::func_959() || __LIB_3__::func_424(17))
		{
			func_225();
		}
		if (NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION())
		{
			func_225();
		}
		switch (__LIB_12__::func_742(NETWORK::PARTICIPANT_ID_TO_INT()))
		{
			case 0:
				if (__LIB_2__::func_86() == 1)
				{
					func_209();
					func_207();
					if (__LIB_2__::func_790(60000))
					{
						if (!__LIB_0__::func_109())
						{
							if (!VEHICLE::IS_THIS_MODEL_A_BIKE(Local_83.f_10))
							{
								__LIB_0__::func_151("DSV_HELP1" /* GXT: A target vehicle ~HUD_COLOUR_RED~~BLIP_GANG_VEHICLE~ ~s~has been located in Los Santos. Destroy it. */, -1);
							}
							else
							{
								__LIB_0__::func_151("DSV_HELP2" /* GXT: A target vehicle ~HUD_COLOUR_RED~~BLIP_GANG_BIKE~ ~s~has been located in Los Santos. Destroy it. */, -1);
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
					func_45();
				}
				else if (__LIB_2__::func_86() == 4)
				{
					Local_85[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/] = 3;
				}
				break;
			case 3:
				__LIB_1__::func_399(&(Local_83.f_45));
				if (__LIB_1__::func_398(&(Local_83.f_45)))
				{
					Local_85[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/] = 4;
				}
				break;
			case 2:
				Local_85[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/] = 4;
			case 4:
				func_225();
				break;
		}
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			switch (__LIB_2__::func_86())
			{
				case 0:
					if (func_10())
					{
						func_209();
						__LIB_0__::func_795(&(Local_83.f_43), 0, 0);
						Local_83.f_0 = 1;
					}
					break;
				case 1:
					func_8();
					func_7();
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

int func_1()//Position - 0x216
{
	if (func_2())
	{
		return 1;
	}
	return 0;
}

int func_2()//Position - 0x22A
{
	struct<14> Var0;
	struct<14> Var1;
	if (Local_83.f_42 == 0)
	{
		if (Local_83.f_0 != 4)
		{
			if (ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_VEH(Local_83.f_2), false))
			{
				if (__LIB_0__::func_937(&(Local_83.f_47), 3000, 0))
				{
					if (Local_83.f_8 == __LIB_0__::getMinusOneOrNull())
					{
						Var0.f_2 = 1884920006;
						__LIB_1__::func_634(Var0, __LIB_1__::func_26(1));
					}
					else
					{
						Var0.f_2 = 613904624;
						Var0.f_10 = Local_83.f_8;
						__LIB_1__::func_634(Var0, __LIB_1__::func_26(1));
					}
					return 1;
				}
			}
			if (__LIB_0__::func_937(&(Local_83.f_43), Global_262145.f_11603 /* Tunable: DESTROY_VEHICLE_EXPIRY_TIME */, 0))
			{
				Var1.f_2 = -134157105;
				__LIB_1__::func_634(Var1, __LIB_1__::func_26(1));
				return 1;
			}
		}
	}
	return 0;
}

void func_7()//Position - 0x3C7
{
	switch (Local_83.f_42)
	{
		case 0:
			break;
		case 1:
			break;
	}
}

void func_8()//Position - 0x3EA
{
	struct<14> Var0;
	int iVar1;
	if (Local_83.f_0 != 4)
	{
		iLocal_88 = 0;
		while (iLocal_88 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
		{
			if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_88)))
			{
				iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_88));
				if (BitTest(Local_85[iLocal_88 /*3*/].f_1, 0))
				{
					Var0.f_2 = 613904624;
					Var0.f_10 = iVar1;
					Local_83.f_8 = iVar1;
					__LIB_1__::func_634(Var0, __LIB_1__::func_26(1));
					Local_83.f_0 = 4;
					return;
				}
				if (!BitTest(Local_83.f_1, 0))
				{
					if (BitTest(Local_85[iLocal_88 /*3*/].f_1, 1))
					{
						MISC::SET_BIT(&(Local_83.f_1), 0);
					}
					if (BitTest(Local_85[iLocal_88 /*3*/].f_1, 2))
					{
						MISC::SET_BIT(&(Local_83.f_1), 0);
					}
				}
				else
				{
					if (!BitTest(Local_83.f_1, 1))
					{
						if (BitTest(Local_85[iLocal_88 /*3*/].f_1, 3))
						{
							MISC::SET_BIT(&(Local_83.f_1), 1);
						}
					}
					if (!BitTest(Local_83.f_1, 2))
					{
						if (BitTest(Local_85[iLocal_88 /*3*/].f_1, 4))
						{
							MISC::SET_BIT(&(Local_83.f_1), 2);
						}
					}
					if (!BitTest(Local_83.f_1, 3))
					{
						if (BitTest(Local_85[iLocal_88 /*3*/].f_1, 5))
						{
							MISC::SET_BIT(&(Local_83.f_1), 3);
						}
					}
					if (!BitTest(Local_83.f_1, 4))
					{
						if (BitTest(Local_85[iLocal_88 /*3*/].f_1, 6))
						{
							MISC::SET_BIT(&(Local_83.f_1), 4);
						}
					}
				}
			}
			iLocal_88++;
		}
	}
}

int func_10()//Position - 0x55A
{
	if (__LIB_0__::func_799(Local_83.f_10) && __LIB_0__::func_799(Local_83.f_11))
	{
		if ((func_21() && func_19()) && func_11())
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_83.f_10);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_83.f_11);
			return 1;
		}
	}
	return 0;
}

int func_11()//Position - 0x5A8
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Local_83.f_14)
	{
		if ((!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_83.f_4[iVar0]) && __LIB_0__::func_799(Local_83.f_11)) && NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_83.f_2))
		{
			if (__LIB_0__::func_939(Local_83.f_2))
			{
				if (Local_83.f_12 == 0)
				{
					if (__LIB_0__::func_930(&(Local_83.f_4[iVar0]), Local_83.f_2, 22, Local_83.f_11, iVar0, 1, 1, 1))
					{
						func_13(&(Local_83.f_4[iVar0]));
					}
				}
				else if (__LIB_1__::func_672(&(Local_83.f_4[iVar0]), 22, Local_83.f_11, Local_83.f_28[iVar0 /*3*/], Local_83.f_38[iVar0], 1, 1, 1))
				{
					func_13(&(Local_83.f_4[iVar0]));
				}
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_83.f_14)
	{
		if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_83.f_4[iVar0]))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

void func_13(var uParam0)//Position - 0x6EE
{
	int iVar0;
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(NETWORK::NET_TO_PED(*uParam0), Global_1837196);
	PED::SET_PED_RANDOM_COMPONENT_VARIATION(NETWORK::NET_TO_PED(*uParam0), 0);
	PED::SET_PED_KEEP_TASK(NETWORK::NET_TO_PED(*uParam0), true);
	WEAPON::GIVE_DELAYED_WEAPON_TO_PED(NETWORK::NET_TO_PED(*uParam0), func_15(), 25000, true);
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 10);
	if (iVar0 == 0 || iVar0 == 1)
	{
		PED::SET_PED_COMBAT_ABILITY(NETWORK::NET_TO_PED(*uParam0), 0);
	}
	else if ((iVar0 == 2 || iVar0 == 3) || iVar0 == 4)
	{
		PED::SET_PED_COMBAT_ABILITY(NETWORK::NET_TO_PED(*uParam0), 2);
	}
	else
	{
		PED::SET_PED_COMBAT_ABILITY(NETWORK::NET_TO_PED(*uParam0), 1);
	}
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 10);
	if ((iVar0 == 0 || iVar0 == 1) || iVar0 == 2)
	{
		PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(*uParam0), 5, true);
	}
	else if (iVar0 == 3)
	{
		PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(*uParam0), 17, true);
	}
	else if ((iVar0 == 4 || iVar0 == 5) || iVar0 == 6)
	{
		PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(*uParam0), 13, true);
	}
	if (__LIB_0__::func_680())
	{
		PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(*uParam0), 20, true);
	}
	PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(*uParam0), 2, true);
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
	if (iVar0 == 0)
	{
		PED::SET_PED_COMBAT_MOVEMENT(NETWORK::NET_TO_PED(*uParam0), 2);
	}
	else if (iVar0 == 1)
	{
		PED::SET_PED_COMBAT_MOVEMENT(NETWORK::NET_TO_PED(*uParam0), 1);
	}
	else if (iVar0 == 2)
	{
		PED::SET_PED_COMBAT_MOVEMENT(NETWORK::NET_TO_PED(*uParam0), 3);
	}
	PED::SET_PED_ALLOW_MINOR_REACTIONS_AS_MISSION_PED(NETWORK::NET_TO_PED(*uParam0), true);
	PED::SET_PED_GET_OUT_UPSIDE_DOWN_VEHICLE(NETWORK::NET_TO_PED(*uParam0), true);
	PED::SET_PED_CONFIG_FLAG(NETWORK::NET_TO_PED(*uParam0), 29, true);
	PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(NETWORK::NET_TO_PED(*uParam0), 3);
	ENTITY::SET_ENTITY_HEALTH(NETWORK::NET_TO_PED(*uParam0), SYSTEM::ROUND((200f * Global_262145.f_164 /* Tunable: AI_HEALTH */)), 0);
}

int func_15()//Position - 0x8D5
{
	switch (Local_83.f_11)
	{
		case joaat("G_M_Y_BallaOrig_01"):
		case joaat("G_M_Y_BallaEast_01"):
			switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 5))
			{
				case 0:
					return joaat("WEAPON_COMBATPISTOL");
				case 1:
					return joaat("WEAPON_PUMPSHOTGUN");
				case 2:
					return joaat("WEAPON_MICROSMG");
				case 3:
					return joaat("WEAPON_MG");
				case 4:
					return joaat("WEAPON_ASSAULTRIFLE");
				default:
			}
			break;
		case joaat("G_M_Y_MexGoon_02"):
		case joaat("G_F_Y_Vagos_01"):
			switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 5))
			{
				case 0:
					return joaat("WEAPON_PISTOL");
				case 1:
					return joaat("WEAPON_PUMPSHOTGUN");
				case 2:
					return joaat("WEAPON_MICROSMG");
				case 3:
					return joaat("WEAPON_MG");
				case 4:
					return joaat("WEAPON_ASSAULTRIFLE");
				default:
			}
			break;
		case joaat("G_M_Y_Lost_01"):
		case joaat("G_F_Y_Lost_01"):
			switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 5))
			{
				case 0:
					return joaat("WEAPON_COMBATPISTOL");
				case 1:
					return joaat("WEAPON_SAWNOFFSHOTGUN");
				case 2:
					return joaat("WEAPON_SMG");
				case 3:
					return joaat("WEAPON_MG");
				case 4:
					return joaat("WEAPON_ASSAULTRIFLE");
				default:
			}
			break;
		case joaat("G_M_M_ChiGoon_02"):
		case joaat("G_M_M_ChiGoon_01"):
			switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 5))
			{
				case 0:
					return joaat("WEAPON_PISTOL");
				case 1:
					return joaat("WEAPON_PUMPSHOTGUN");
				case 2:
					return joaat("WEAPON_ADVANCEDRIFLE");
				case 3:
					return joaat("WEAPON_MG");
				case 4:
					return joaat("WEAPON_CARBINERIFLE");
				default:
			}
			break;
		case joaat("G_M_M_ArmGoon_01"):
		case joaat("G_M_Y_ArmGoon_02"):
			switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 5))
			{
				case 0:
					return joaat("WEAPON_PISTOL");
				case 1:
					return joaat("WEAPON_SAWNOFFSHOTGUN");
				case 2:
					return joaat("WEAPON_SMG");
				case 3:
					return joaat("WEAPON_MG");
				case 4:
					return joaat("WEAPON_CARBINERIFLE");
				default:
			}
			break;
		case joaat("A_M_M_Hillbilly_02"):
		case joaat("A_M_M_Hillbilly_01"):
			switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 5))
			{
				case 0:
					return joaat("WEAPON_COMBATPISTOL");
				case 1:
					return joaat("WEAPON_SAWNOFFSHOTGUN");
				case 2:
					return joaat("WEAPON_MICROSMG");
				case 3:
					return joaat("WEAPON_MG");
				case 4:
					return joaat("WEAPON_COMBATMG");
				default:
			}
			break;
		case joaat("G_M_Y_SalvaGoon_01"):
		case joaat("G_M_Y_SalvaGoon_02"):
			switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 5))
			{
				case 0:
					return joaat("WEAPON_PISTOL");
				case 1:
					return joaat("WEAPON_PUMPSHOTGUN");
				case 2:
					return joaat("WEAPON_MICROSMG");
				case 3:
					return joaat("WEAPON_MG");
				case 4:
					return joaat("WEAPON_ASSAULTRIFLE");
				default:
			}
			break;
		case joaat("G_M_Y_StrPunk_01"):
		case joaat("G_M_Y_StrPunk_02"):
			switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 5))
			{
				case 0:
					return joaat("WEAPON_PISTOL");
				case 1:
					return joaat("WEAPON_SAWNOFFSHOTGUN");
				case 2:
					return joaat("WEAPON_MICROSMG");
				case 3:
					return joaat("WEAPON_MG");
				case 4:
					return joaat("WEAPON_ASSAULTRIFLE");
				default:
			}
			break;
		default:
			switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 5))
			{
				case 0:
					return joaat("WEAPON_PISTOL");
				case 1:
					return joaat("WEAPON_PUMPSHOTGUN");
				case 2:
					return joaat("WEAPON_SMG");
				case 3:
					return joaat("WEAPON_COMBATMG");
				case 4:
					return joaat("WEAPON_CARBINERIFLE");
				default:
			}
			break;
	}
	return joaat("WEAPON_PISTOL");
}

int func_19()//Position - 0xD20
{
	if ((!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_83.f_3) && __LIB_0__::func_799(Local_83.f_11)) && NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_83.f_2))
	{
		if (__LIB_0__::func_939(Local_83.f_2))
		{
			if (Local_83.f_12 == 1)
			{
				if (__LIB_1__::func_672(&(Local_83.f_3), 22, Local_83.f_11, Local_83.f_24, Local_83.f_27, 1, 1, 1))
				{
					func_13(&(Local_83.f_3));
					func_20();
				}
			}
			else if (__LIB_0__::func_930(&(Local_83.f_3), Local_83.f_2, 22, Local_83.f_11, -1, 1, 1, 1))
			{
				func_13(&(Local_83.f_3));
				func_20();
			}
		}
	}
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_83.f_3))
	{
		return 0;
	}
	return 1;
}

void func_20()//Position - 0xDC4
{
	if (Local_83.f_12 == 0)
	{
		if (__LIB_0__::func_680())
		{
			TASK::TASK_VEHICLE_DRIVE_WANDER(NETWORK::NET_TO_PED(Local_83.f_3), NETWORK::NET_TO_VEH(Local_83.f_2), MISC::GET_RANDOM_FLOAT_IN_RANGE(7f, 18f), 786468);
		}
		else
		{
			TASK::TASK_VEHICLE_DRIVE_WANDER(NETWORK::NET_TO_PED(Local_83.f_3), NETWORK::NET_TO_VEH(Local_83.f_2), MISC::GET_RANDOM_FLOAT_IN_RANGE(7f, 18f), 786599);
		}
	}
	else if (Local_83.f_12 == 2)
	{
		func_209();
		TASK::TASK_PERFORM_SEQUENCE(NETWORK::NET_TO_PED(Local_83.f_3), iLocal_87);
	}
}

int func_21()//Position - 0xE42
{
	int iVar0;
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_83.f_2))
	{
		if (__LIB_0__::func_799(Local_83.f_10))
		{
			if (func_25(&(Local_83.f_16), &(Local_83.f_19)))
			{
				if (__LIB_0__::func_957(&(Local_83.f_2), Local_83.f_10, Local_83.f_16, Local_83.f_19, 1, 1, 1, 1, 0, 1, 0, 0, 0, 0))
				{
					ENTITY::FREEZE_ENTITY_POSITION(NETWORK::NET_TO_VEH(Local_83.f_2), false);
					ENTITY::SET_ENTITY_DYNAMIC(NETWORK::NET_TO_VEH(Local_83.f_2), true);
					PHYSICS::ACTIVATE_PHYSICS(NETWORK::NET_TO_VEH(Local_83.f_2));
					VEHICLE::SET_VEHICLE_ENGINE_ON(NETWORK::NET_TO_VEH(Local_83.f_2), true, true, false);
					ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(NETWORK::NET_TO_VEH(Local_83.f_2), false);
					if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("Not_Allow_As_Saved_Veh", 3))
					{
						DECORATOR::DECOR_SET_INT(NETWORK::NET_TO_VEH(Local_83.f_2), "Not_Allow_As_Saved_Veh", 1);
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
					if (Local_83.f_12 == 0)
					{
						if (VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(NETWORK::NET_TO_VEH(Local_83.f_2)) < Local_83.f_14)
						{
							Local_83.f_14 = VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(NETWORK::NET_TO_VEH(Local_83.f_2));
						}
					}
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

bool func_25(int iParam0, float* fParam1)//Position - 0x11EF
{
	bool bVar0;
	int iVar1;
	var uVar2;
	struct<3> Var3;
	Var3 = { __LIB_0__::func_85(PLAYER::PLAYER_ID()) };
	if (Local_83.f_12 == 1)
	{
		return 1;
	}
	if (!bVar0)
	{
		if (VEHICLE::GENERATE_VEHICLE_CREATION_POS_FROM_PATHS(&Var3, iParam0, &uVar2, 0f, 180f, 150f, 0, 1, 1))
		{
			PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_WITH_HEADING(*iParam0, 1, iParam0, fParam1, &iVar1, 4, 3f, 0f);
			if (iVar1 >= 1)
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(-1367.5571f, -3220.5977f, 12.9448f, Var3, true) >= 600f && MISC::GET_DISTANCE_BETWEEN_COORDS(750f, -3200f, 6f, Var3, true) >= 700f)
				{
					if (iLocal_92 <= 5)
					{
						if (__LIB_1__::func_408(*iParam0, 1086324736, 1065353216, 1065353216, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
						{
							bVar0 = true;
						}
					}
					else
					{
						Local_83.f_0 = 4;
					}
				}
			}
		}
	}
	if (!bVar0)
	{
		iLocal_91 += 4;
		if (iLocal_91 >= 80)
		{
			iLocal_91 = 20;
			iLocal_92++;
		}
	}
	return bVar0;
}

void func_45()//Position - 0x199E
{
	switch (Local_85[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2)
	{
		case 0:
			func_207();
			func_51();
			func_46();
			if (Local_83.f_42 > 0)
			{
				Local_85[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2 = 1;
			}
			break;
		case 1:
			func_225();
			break;
	}
}

void func_46()//Position - 0x19EA
{
	int iVar0;
	__LIB_2__::func_848(Local_83.f_3, &iLocal_93, -1082130432, 0, 0, 0, 0, -1, -1, 1, 0);
	iVar0 = 0;
	while (iVar0 < Local_83.f_14)
	{
		__LIB_2__::func_848(Local_83.f_4[iVar0], &(Local_101[iVar0 /*8*/]), -1082130432, 0, 0, 0, 0, -1, -1, 1, 0);
		iVar0++;
	}
	if (BitTest(Local_83.f_1, 0))
	{
		if (!BitTest(Local_83.f_1, 1) && !BitTest(Local_85[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_1, 3))
		{
			if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_83.f_3))
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_83.f_3) || (!NETWORK::IS_NETWORK_ID_OWNED_BY_PARTICIPANT(Local_83.f_3) && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()))
				{
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(NETWORK::NET_TO_PED(Local_83.f_3), Global_1837197);
					MISC::SET_BIT(&(Local_85[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_1), 3);
				}
			}
		}
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (!BitTest(Local_83.f_1, (2 + iVar0)) && !BitTest(Local_85[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_1, (4 + iVar0)))
			{
				if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_83.f_4[iVar0]))
				{
					if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_83.f_4[iVar0]) || (!NETWORK::IS_NETWORK_ID_OWNED_BY_PARTICIPANT(Local_83.f_4[iVar0]) && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()))
					{
						PED::SET_PED_RELATIONSHIP_GROUP_HASH(NETWORK::NET_TO_PED(Local_83.f_4[iVar0]), Global_1837197);
						if (!PED::IS_PED_INJURED(NETWORK::NET_TO_PED(Local_83.f_4[iVar0])))
						{
							TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(NETWORK::NET_TO_PED(Local_83.f_4[iVar0]), 100f, 0);
						}
						MISC::SET_BIT(&(Local_85[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_1), (4 + iVar0));
					}
				}
			}
			iVar0++;
		}
	}
}

void func_51()//Position - 0x1E5A
{
	var uVar0;
	int iVar1;
	var uVar2;
	var uVar3;
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
					__LIB_30__::func_962(2106, 1, -1);
					__LIB_30__::func_968(68, 1, -1);
					func_148(0, PLAYER::PLAYER_PED_ID(), "XPT_KAIE" /* GXT: ~g~+~1~ ~a~:~s~ Killed Hostile */, joaat("XPTYPE_SKILL"), joaat("XPCATEGORY_COMPLETE_DESTROY_VEH"), Global_262145.f_8567 /* Tunable: DESTROYVEHXP */, 1, -1, 0, 0, 0);
					if (__LIB_0__::func_680())
					{
						__LIB_30__::func_964(86, "DSV_PASS0" /* GXT: Oh shit! All of a sudden the price of molly's gone up.  That's tight work. */, 0, 0, -99);
					}
					else
					{
						__LIB_30__::func_964(86, "DSV_PASS1" /* GXT: Haha. Them idiots had a note on that stash. They goin be paying that for a long time. You real, you know that. */, 0, 0, -99);
					}
					iVar1 = Global_262145.f_8568 /* Tunable: DESTROYVEHCASH */;
					Global_2727753 = iVar1;
					__LIB_14__::func_514(&iVar1, 1);
					if (iVar1 > 0)
					{
						__LIB_12__::func_745(iVar1, 1, 1, 1092616192);
						if (__LIB_0__::func_112())
						{
							__LIB_2__::func_105(joaat("SERVICE_EARN_AMBIENT_JOB_DESTROY_VEH"), iVar1, &uVar2, 0, 0, 0);
						}
						else
						{
							MONEY::NETWORK_EARN_FROM_AMBIENT_JOB(iVar1, "AM_DESTROY_VEH", &uVar3);
						}
					}
					MISC::SET_BIT(&(Local_85[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_1), 0);
				}
			}
			else
			{
				if (!BitTest(Local_83.f_1, 0))
				{
					if (!BitTest(Local_85[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_1, 1))
					{
						if (__LIB_2__::func_789(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_83.f_2), 1))
						{
							MISC::SET_BIT(&(Local_85[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_1), 1);
						}
					}
					if (!BitTest(Local_85[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_1, 2))
					{
						if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(NETWORK::NET_TO_VEH(Local_83.f_2), PLAYER::PLAYER_PED_ID(), true))
						{
							MISC::SET_BIT(&(Local_85[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_1), 2);
						}
					}
				}
				if (__LIB_0__::func_156(PLAYER::PLAYER_ID(), 1, 1) && __LIB_2__::func_789(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_83.f_2), 0))
				{
					if (!BitTest(Global_2815059.f_4662, 1))
					{
						MISC::SET_BIT(&(Global_2815059.f_4662), 1);
					}
				}
				else if (BitTest(Global_2815059.f_4662, 1))
				{
					MISC::CLEAR_BIT(&(Global_2815059.f_4662), 1);
				}
				func_52();
			}
		}
	}
}

void func_52()//Position - 0x2042
{
	if (!BitTest(uLocal_86, 0))
	{
		if (__LIB_1__::func_676(27, -1) == 0)
		{
			if (__LIB_0__::func_156(PLAYER::PLAYER_ID(), 1, 1))
			{
				if (__LIB_2__::func_789(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_83.f_2), 0))
				{
					if (__LIB_0__::func_937(&uLocal_102, 300000, 0))
					{
						__LIB_2__::func_183(27, 1, -1);
						MISC::SET_BIT(&uLocal_86, 0);
					}
				}
				else if (__LIB_0__::func_864(&uLocal_102))
				{
					__LIB_0__::clearF_1Prop(&uLocal_102);
				}
			}
			else if (__LIB_0__::func_864(&uLocal_102))
			{
				__LIB_0__::clearF_1Prop(&uLocal_102);
			}
		}
		else
		{
			MISC::SET_BIT(&uLocal_86, 0);
		}
	}
}

int func_148(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)//Position - 0x46B6
{
	return __LIB_43__::func_615(iParam0, iParam1, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, sParam8, bParam9, iParam10);
}

void func_207()//Position - 0x66DF
{
	if (HUD::DOES_BLIP_EXIST(iLocal_89))
	{
		if (__LIB_0__::func_109() || __LIB_2__::func_791())
		{
			HUD::SET_BLIP_DISPLAY(iLocal_89, 0);
		}
		else
		{
			HUD::SET_BLIP_DISPLAY(iLocal_89, 4);
		}
	}
	else if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_83.f_2))
	{
		if (!ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_VEH(Local_83.f_2), false))
		{
			iLocal_89 = HUD::ADD_BLIP_FOR_ENTITY(NETWORK::NET_TO_VEH(Local_83.f_2));
			if (!VEHICLE::IS_THIS_MODEL_A_BIKE(Local_83.f_10))
			{
				HUD::SET_BLIP_SPRITE(iLocal_89, 225);
			}
			else
			{
				HUD::SET_BLIP_SPRITE(iLocal_89, 348);
			}
			HUD::SET_BLIP_COLOUR(iLocal_89, 1);
			HUD::SET_BLIP_FLASH_TIMER(iLocal_89, 7000);
			HUD::SET_BLIP_PRIORITY(iLocal_89, 6);
			HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_89, "DSV_BLIP" /* GXT: Target Vehicle */);
			if (__LIB_0__::func_109())
			{
				HUD::SET_BLIP_DISPLAY(iLocal_89, 0);
			}
		}
	}
}

void func_209()//Position - 0x679C
{
	if (Local_83.f_12 == 2)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_83.f_2))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(NETWORK::NET_TO_VEH(Local_83.f_2), false))
			{
				TASK::OPEN_SEQUENCE_TASK(&iLocal_87);
				TASK::TASK_VEHICLE_DRIVE_TO_COORD_LONGRANGE(0, NETWORK::NET_TO_VEH(Local_83.f_2), Local_83.f_20, 7f, iLocal_90, 3f);
				TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_83.f_24, 1f, -1, 0.25f, 0, Local_83.f_27);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_87);
			}
		}
	}
}

void func_225()//Position - 0x6CF0
{
	if (HUD::DOES_BLIP_EXIST(iLocal_89))
	{
		HUD::REMOVE_BLIP(&iLocal_89);
	}
	func_228();
	if (__LIB_2__::func_86() == 4 && Local_83.f_10 != 0)
	{
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_83.f_10, false);
	}
	MISC::CLEAR_BIT(&(Global_2815059.f_4662), 1);
	__LIB_1__::func_460(17, 0);
	__LIB_0__::func_202();
}

void func_228()//Position - 0x6DA8
{
	if (Local_83.f_12 == 2)
	{
		TASK::CLEAR_SEQUENCE_TASK(&iLocal_87);
	}
}

void func_229(struct<21> Param0)//Position - 0x6DBE
{
	__LIB_0__::func_935(__LIB_1__::func_32(Param0.f_0), Param0);
	NETWORK::RESERVE_NETWORK_MISSION_PEDS(4);
	NETWORK::RESERVE_NETWORK_MISSION_VEHICLES(1);
	__LIB_0__::func_895(0, -1, 0);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_83, 49, 0);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_85, 97, 0);
	if (!__LIB_0__::func_934())
	{
		func_225();
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			func_230();
			Local_83.f_8 = __LIB_0__::getMinusOneOrNull();
		}
		__LIB_1__::func_460(17, 1);
		Local_85[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/] = 0;
	}
	else
	{
		func_225();
	}
}

void func_230()//Position - 0x6E3B
{
	func_233();
	Local_83.f_12 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
	if (Local_83.f_12 == 1 || Local_83.f_12 == 2)
	{
		Local_83.f_15 = MISC::GET_RANDOM_INT_IN_RANGE(0, 5);
		if (Local_83.f_12 == 1)
		{
			func_232(&(Local_83.f_16), &(Local_83.f_19));
		}
		else
		{
			func_232(&(Local_83.f_20), &(Local_83.f_23));
		}
		func_231();
	}
	Local_83.f_14 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
	if (Global_262145.f_8571 /* Tunable: DESTROYVEHBONUS */ >= 0 && Global_262145.f_8571 /* Tunable: DESTROYVEHBONUS */ < 5)
	{
		Local_83.f_13 = Global_262145.f_8571 /* Tunable: DESTROYVEHBONUS */;
	}
	else
	{
		Local_83.f_13 = MISC::GET_RANDOM_INT_IN_RANGE(0, 5);
	}
}

void func_231()//Position - 0x6ED3
{
	switch (Local_83.f_15)
	{
		case 0:
			Local_83.f_24 = { -2195.7825f, -420.2502f, 12.0819f };
			Local_83.f_27 = 117.3927f;
			Local_83.f_28[0 /*3*/] = { -2189.9753f, -422.8502f, 12.0709f };
			Local_83.f_38[0] = 152.6699f;
			Local_83.f_28[1 /*3*/] = { -2184.0315f, -400.948f, 12.2027f };
			Local_83.f_38[1] = 337.9892f;
			Local_83.f_28[2 /*3*/] = { -2175.2817f, -426.3756f, 12.128f };
			Local_83.f_38[2] = 12.2947f;
			break;
		case 1:
			Local_83.f_24 = { -981.5774f, -1487.3193f, 4.5867f };
			Local_83.f_27 = 300.0815f;
			Local_83.f_28[0 /*3*/] = { -977.8269f, -1494.5681f, 4.5867f };
			Local_83.f_38[0] = 0.731f;
			Local_83.f_28[1 /*3*/] = { -977.7324f, -1491.7174f, 4.5867f };
			Local_83.f_38[1] = 173.7717f;
			Local_83.f_28[2 /*3*/] = { -954.6693f, -1486.7126f, 4.16f };
			Local_83.f_38[2] = 304.8721f;
			break;
		case 2:
			Local_83.f_24 = { 697.3923f, -1375.2698f, 25.196f };
			Local_83.f_27 = 111.1953f;
			Local_83.f_28[0 /*3*/] = { 717.8624f, -1360.4915f, 25.0461f };
			Local_83.f_38[0] = 55.1674f;
			Local_83.f_28[1 /*3*/] = { 703.9843f, -1361.0935f, 24.6728f };
			Local_83.f_38[1] = 306.7133f;
			Local_83.f_28[2 /*3*/] = { 707.1707f, -1388.7064f, 25.2759f };
			Local_83.f_38[2] = 204.5666f;
			break;
		case 3:
			Local_83.f_24 = { -258.5791f, 302.4799f, 91.0086f };
			Local_83.f_27 = 180.4109f;
			Local_83.f_28[0 /*3*/] = { -244.9193f, 299.3712f, 91.0424f };
			Local_83.f_38[0] = 43.0354f;
			Local_83.f_28[1 /*3*/] = { -248.7361f, 305.6155f, 91.1444f };
			Local_83.f_38[1] = 191.8736f;
			Local_83.f_28[2 /*3*/] = { -232.4524f, 299.4706f, 91.2088f };
			Local_83.f_38[2] = 199.8353f;
			break;
		case 4:
			Local_83.f_24 = { 862.7026f, 2875.1482f, 56.9868f };
			Local_83.f_27 = 206.7217f;
			Local_83.f_28[0 /*3*/] = { 880.2893f, 2862.074f, 55.6697f };
			Local_83.f_38[0] = 191.0122f;
			Local_83.f_28[1 /*3*/] = { 865.2399f, 2853.5356f, 56.2583f };
			Local_83.f_38[1] = 305.8056f;
			Local_83.f_28[2 /*3*/] = { 867.6559f, 2841.1548f, 56.944f };
			Local_83.f_38[2] = 235.4465f;
			break;
	}
}

void func_232(var uParam0, var uParam1)//Position - 0x71C3
{
	switch (Local_83.f_15)
	{
		case 0:
			*uParam0 = { -2192.3901f, -419.3334f, 12.0959f };
			*uParam1 = 71.2404f;
			break;
		case 1:
			*uParam0 = { -977.0366f, -1482.8658f, 4.0099f };
			*uParam1 = 124.7807f;
			break;
		case 2:
			*uParam0 = { 702.5064f, -1370.4773f, 25.0573f };
			*uParam1 = 279.9129f;
			break;
		case 3:
			*uParam0 = { -253.3582f, 299.4982f, 90.9592f };
			*uParam1 = 184.8169f;
			break;
		case 4:
			*uParam0 = { 868.8133f, 2868.439f, 55.9186f };
			*uParam1 = 200.5778f;
			break;
	}
}

void func_233()//Position - 0x7288
{
	int iVar0;
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 8);
	if (Global_262145.f_8570 /* Tunable: DESTROYVEHGANG */ >= 0 && Global_262145.f_8570 /* Tunable: DESTROYVEHGANG */ < 8)
	{
		iVar0 = Global_262145.f_8570 /* Tunable: DESTROYVEHGANG */;
	}
	switch (iVar0)
	{
		case 0:
			if (__LIB_0__::func_680())
			{
				Local_83.f_10 = joaat("baller");
			}
			else
			{
				Local_83.f_10 = joaat("zion");
			}
			if (__LIB_0__::func_680())
			{
				Local_83.f_11 = joaat("G_M_Y_BallaOrig_01");
			}
			else
			{
				Local_83.f_11 = joaat("G_M_Y_BallaEast_01");
			}
			break;
		case 1:
			if (__LIB_0__::func_680())
			{
				Local_83.f_10 = joaat("emperor");
			}
			else
			{
				Local_83.f_10 = joaat("cavalcade2");
			}
			if (__LIB_0__::func_680())
			{
				Local_83.f_11 = joaat("G_M_Y_MexGoon_02");
			}
			else
			{
				Local_83.f_11 = joaat("G_F_Y_Vagos_01");
			}
			break;
		case 2:
			if (__LIB_0__::func_680())
			{
				Local_83.f_10 = joaat("daemon");
			}
			else
			{
				Local_83.f_10 = joaat("gburrito");
			}
			if (__LIB_0__::func_680())
			{
				Local_83.f_11 = joaat("G_M_Y_Lost_01");
			}
			else
			{
				Local_83.f_11 = joaat("G_F_Y_Lost_01");
			}
			break;
		case 3:
			if (__LIB_0__::func_680())
			{
				Local_83.f_10 = joaat("pcj");
			}
			else
			{
				Local_83.f_10 = joaat("bjxl");
			}
			if (__LIB_0__::func_680())
			{
				Local_83.f_11 = joaat("G_M_M_ChiGoon_02");
			}
			else
			{
				Local_83.f_11 = joaat("G_M_M_ChiGoon_01");
			}
			break;
		case 4:
			if (__LIB_0__::func_680())
			{
				Local_83.f_10 = joaat("rocoto");
			}
			else
			{
				Local_83.f_10 = joaat("emperor");
			}
			if (__LIB_0__::func_680())
			{
				Local_83.f_11 = joaat("G_M_M_ArmGoon_01");
			}
			else
			{
				Local_83.f_11 = joaat("G_M_Y_ArmGoon_02");
			}
			break;
		case 5:
			if (__LIB_0__::func_680())
			{
				Local_83.f_10 = joaat("journey");
			}
			else
			{
				Local_83.f_10 = joaat("sandking");
			}
			if (__LIB_0__::func_680())
			{
				Local_83.f_11 = joaat("A_M_M_Hillbilly_02");
			}
			else
			{
				Local_83.f_11 = joaat("A_M_M_Hillbilly_01");
			}
			break;
		case 6:
			if (__LIB_0__::func_680())
			{
				Local_83.f_10 = joaat("habanero");
			}
			else
			{
				Local_83.f_10 = joaat("sanchez2");
			}
			if (__LIB_0__::func_680())
			{
				Local_83.f_11 = joaat("G_M_Y_SalvaGoon_01");
			}
			else
			{
				Local_83.f_11 = joaat("G_M_Y_SalvaGoon_02");
			}
			break;
		case 7:
			if (__LIB_0__::func_680())
			{
				Local_83.f_10 = joaat("buffalo2");
			}
			else
			{
				Local_83.f_10 = joaat("dubsta");
			}
			if (__LIB_0__::func_680())
			{
				Local_83.f_11 = joaat("G_M_Y_StrPunk_01");
			}
			else
			{
				Local_83.f_11 = joaat("G_M_Y_StrPunk_02");
			}
			break;
	}
}

