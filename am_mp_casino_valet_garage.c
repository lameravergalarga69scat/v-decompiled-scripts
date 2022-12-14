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
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = -1;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	int iLocal_93 = 0;
	bool bLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	struct<3> Local_109 = { 0, 0, 0 } ;
	int iLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	struct<455> Local_113 = { 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 1048576000, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1048576000, 0, -1, 2, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, -1, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 2, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10000, 0, 0, -1, 0, 4, 0, 0, 0, 0, 0, 0 } ;
	struct<11> Local_114 = { 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 16 } ;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	var uLocal_130 = 0;
	var uLocal_131[32] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_132 = 0;
	var uLocal_133 = 0;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	int iLocal_136 = 0;
	float fLocal_137 = 0f;
	struct<3> Local_138 = { 0, 0, 0 } ;
	var uLocal_139 = 0;
	var uLocal_140 = 0;
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
	fLocal_137 = 0.4f;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_4747(&ScriptParam_138);
	}
	else
	{
		func_4744();
	}
	while (true)
	{
		__LIB_0__::func_933();
		if (__LIB_0__::func_959())
		{
			func_4744();
		}
		if (func_4734(ScriptParam_138.f_2, ScriptParam_138.f_0))
		{
			func_4744();
		}
		if (NETWORK::NETWORK_GET_HOST_OF_THIS_SCRIPT() != -1)
		{
			Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_352 = NETWORK::NETWORK_GET_PLAYER_INDEX(NETWORK::NETWORK_GET_HOST_OF_THIS_SCRIPT());
		}
		if (__LIB_10__::func_10(1))
		{
			func_96();
		}
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			func_1();
		}
	}
}

void func_1()//Position - 0x102
{
	if (__LIB_10__::func_10(0))
	{
		__LIB_10__::func_9(1);
	}
	else if (__LIB_10__::func_10(1))
	{
		func_2();
	}
}

void func_2()//Position - 0x126
{
	bool bVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	struct<101> Var5;
	int iVar6;
	Var5.f_9 = 49;
	Var5.f_59 = 2;
	Var5.f_78 = -1;
	Var5.f_79 = -1;
	Var5.f_96 = -1;
	Var5.f_97 = 1;
	Var5.f_99 = 132;
	Var5.f_100 = -1;
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		if (!BitTest(Local_114.f_1, 1))
		{
			iVar1 = 0;
			while (iVar1 < 16)
			{
				Local_114.f_10[iVar1] = iVar1;
				iVar1++;
			}
			iVar1 = 0;
			while (iVar1 < 16)
			{
				iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(0, 16);
				uVar3 = Local_114.f_10[iVar1];
				Local_114.f_10[iVar1] = Local_114.f_10[iVar2];
				Local_114.f_10[iVar2] = uVar3;
				iVar1++;
			}
			if (Global_262145.f_28364 /* Tunable: 727999357 */)
			{
				Local_114.f_10[5] = 99;
			}
			if (Global_262145.f_28366 /* Tunable: 1986817044 */)
			{
				if (Local_114.f_10[5] == 15)
				{
					Local_114.f_10[5] = Local_114.f_10[6];
					Local_114.f_10[6] = 15;
				}
			}
			if (__LIB_1__::func_690(7, 0, 1))
			{
				NETWORK::RESERVE_LOCAL_NETWORK_MISSION_VEHICLES(7);
				MISC::SET_BIT(&(Local_114.f_1), 1);
			}
		}
		else if (!BitTest(Local_114.f_1, 0))
		{
			iVar1 = 0;
			while (iVar1 < 7)
			{
				if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_114.f_2[iVar1]))
				{
					bVar0 = true;
					func_88(Local_114.f_10[iVar1], &iVar4);
					if (__LIB_0__::func_799(iVar4))
					{
						if (NETWORK::CAN_REGISTER_MISSION_VEHICLES(1))
						{
							if (NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
							{
								NETWORK::SET_NETWORK_CUTSCENE_ENTITIES(true);
							}
							iVar6 = VEHICLE::CREATE_VEHICLE(iVar4, func_86(iVar1), func_85(iVar1), true, true, false);
							Local_114.f_2[iVar1] = NETWORK::VEH_TO_NET(iVar6);
							if (iVar4 == joaat("mamba"))
							{
								VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(iVar6, "G4BRIEL");
							}
							else if (iVar4 == joaat("tempesta"))
							{
								VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(iVar6, "USH1");
							}
							else if (iVar4 == joaat("ellie"))
							{
								VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(iVar6, "C0WB0Y");
							}
							else if (iVar4 == joaat("gauntlet4"))
							{
								Var5.f_66 = joaat("gauntlet4");
								StringCopy(&(Var5.f_1), "MOODYMAN", 16);
								Var5.f_5 = 111;
								Var5.f_6 = 111;
								Var5.f_7 = 0;
								Var5.f_8 = 122;
								Var5.f_97 = 1;
								Var5.f_99 = 132;
								Var5.f_98 = 0;
								Var5.f_69 = 11;
								Var5.f_62 = 255;
								Var5.f_63 = 255;
								Var5.f_64 = 255;
								Var5.f_9[1] = 1;
								Var5.f_9[3] = 1;
								Var5.f_9[4] = 1;
								Var5.f_9[6] = 3;
								Var5.f_9[7] = 4;
								Var5.f_9[15] = 1;
								Var5.f_9[23] = 15;
								__LIB_16__::func_187(iVar6, &Var5, 1, 1, 0);
							}
							if (Local_114.f_10[iVar1] == 99)
							{
								StringCopy(&(Var5.f_1), "ANCESTOR", 16);
								Var5.f_66 = joaat("furia");
								Var5.f_0 = 4;
								Var5.f_5 = 138;
								Var5.f_6 = 138;
								Var5.f_7 = 89;
								Var5.f_8 = 21;
								Var5.f_97 = 1;
								Var5.f_99 = 132;
								Var5.f_98 = 0;
								Var5.f_69 = 7;
								Var5.f_62 = 255;
								Var5.f_63 = 255;
								Var5.f_64 = 255;
								Var5.f_74 = 255;
								Var5.f_76 = 255;
								Var5.f_9[1] = 6;
								Var5.f_9[2] = 8;
								Var5.f_9[3] = 1;
								Var5.f_9[4] = 1;
								Var5.f_9[5] = 1;
								Var5.f_9[6] = 5;
								Var5.f_9[7] = 8;
								Var5.f_9[9] = 2;
								Var5.f_9[22] = 1;
								__LIB_16__::func_187(iVar6, &Var5, 1, 1, 0);
							}
							ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iVar6, true);
							NETWORK::NETWORK_SET_ENTITY_ONLY_EXISTS_FOR_PARTICIPANTS(iVar6, true);
							VEHICLE::SET_VEHICLE_NOT_STEALABLE_AMBIENTLY(iVar6, false);
							VEHICLE::SET_VEHICLE_FULLBEAM(iVar6, false);
							VEHICLE::SET_VEHICLE_LIGHTS(iVar6, 1);
							VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_ALL_PLAYERS(iVar6, true);
							VEHICLE::SET_VEHICLE_FIXED(iVar6);
							ENTITY::SET_ENTITY_HEALTH(iVar6, 1000, 0);
							VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iVar6, 1000f);
							VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(iVar6, 1000f);
							VEHICLE::SET_VEHICLE_DIRT_LEVEL(iVar6, 0f);
							VEHICLE::SET_DONT_ALLOW_PLAYER_TO_ENTER_VEHICLE_IF_LOCKED_FOR_PLAYER(iVar6, true);
							VEHICLE::SET_VEHICLE_RESPECTS_LOCKS_WHEN_HAS_DRIVER(iVar6, true);
							ENTITY::SET_ENTITY_CAN_BE_DAMAGED(iVar6, false);
							AUDIO::SET_VEHICLE_RADIO_ENABLED(iVar6, false);
							VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar6, 0f);
							if (NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
							{
								NETWORK::SET_NETWORK_CUTSCENE_ENTITIES(false);
							}
						}
					}
				}
				iVar1++;
			}
			if (!bVar0)
			{
				MISC::SET_BIT(&(Local_114.f_1), 0);
			}
		}
	}
}

float func_85(int iParam0)//Position - 0x944D
{
	switch (iParam0)
	{
		case 0:
			return 90.1988f;
			break;
		case 1:
			return 88.7987f;
			break;
		case 2:
			return 267.7984f;
			break;
		case 3:
			return 274.9984f;
			break;
		case 4:
			return 88.598f;
			break;
		case 5:
			return 91.598f;
			break;
		case 6:
			return 91.598f;
			break;
	}
	return 0f;
}

Vector3 func_86(int iParam0)//Position - 0x94D4
{
	switch (iParam0)
	{
		case 0:
			return 1379.41f, 246.1934f, -50.0944f;
			break;
		case 1:
			return 1379.5962f, 233.7324f, -50.0945f;
			break;
		case 2:
			return 1379.9943f, 229.5488f, -50.0945f;
			break;
		case 3:
			return 1380.0768f, 216.9163f, -50.0945f;
			break;
		case 4:
			return 1379.6085f, 212.6747f, -50.0945f;
			break;
		case 5:
			return 1365.9913f, 200.3108f, -50.0945f;
			break;
		case 6:
			return 1393.9297f, 200.3178f, -50.0945f;
			break;
	}
	return 0f, 0f, 0f;
}

void func_88(int iParam0, var uParam1)//Position - 0x95C1
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = joaat("windsor2");
			break;
		case 1:
			*uParam1 = joaat("gt500");
			break;
		case 2:
			*uParam1 = joaat("tempesta");
			break;
		case 3:
			*uParam1 = joaat("schafter3");
			break;
		case 4:
			*uParam1 = joaat("baller3");
			break;
		case 5:
			*uParam1 = joaat("carbonizzare");
			break;
		case 6:
			*uParam1 = joaat("ellie");
			break;
		case 7:
			*uParam1 = joaat("issi3");
			break;
		case 8:
			*uParam1 = joaat("felon");
			break;
		case 9:
			*uParam1 = joaat("oracle");
			break;
		case 10:
			*uParam1 = joaat("pariah");
			break;
		case 11:
			*uParam1 = joaat("raiden");
			break;
		case 12:
			*uParam1 = joaat("mamba");
			break;
		case 13:
			*uParam1 = joaat("casco");
			break;
		case 14:
			*uParam1 = joaat("superd");
			break;
		case 15:
			*uParam1 = joaat("gauntlet4");
			break;
	}
	if (iParam0 == 99)
	{
		*uParam1 = joaat("furia");
	}
}

void func_96()//Position - 0x9933
{
	func_4732();
	func_4731();
	func_4701();
	func_4699();
	func_4698();
	if (func_4697(0))
	{
		func_161();
	}
	else if (func_4697(1))
	{
		func_160();
		func_152();
		func_124();
		func_121();
		func_99();
		if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
		{
		}
		else if (!BitTest(Local_113.f_0, 3))
		{
			if (!__LIB_3__::func_171(PLAYER::PLAYER_ID()) && __LIB_4__::func_900(PLAYER::PLAYER_ID()))
			{
				if (CAM::IS_SCREEN_FADED_IN())
				{
					HUD::CLEAR_HELP(true);
					MISC::SET_BIT(&Local_113, 3);
				}
			}
		}
	}
}

void func_99()//Position - 0x9A30
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<3> Var4;
	struct<3> Var5;
	var uVar6;
	float fVar7;
	iVar2 = -1;
	iVar0 = PLAYER::INT_TO_PLAYERINDEX(iVar3);
	if (BitTest(Global_2689235[iVar3 /*453*/].f_198, 26) && BitTest(Global_2680265.f_460, iVar3))
	{
		if (__LIB_1__::func_693(iVar0, 0, 1))
		{
			iVar1 = 0;
			while (iVar1 < 32)
			{
				if (iVar2 == -1)
				{
					if (Global_2680265.f_427[iVar1] == iVar3)
					{
						iVar2 = iVar1;
						iVar1 = 32;
					}
				}
				iVar1++;
			}
		}
	}
	iVar3++;
	if (iVar3 >= 32)
	{
		iVar3 = 0;
	}
	if (!iLocal_110)
	{
		if (iVar2 != -1)
		{
			if ((__LIB_1__::func_693(PLAYER::PLAYER_ID(), 1, 1) && ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID())) && __LIB_0__::func_893())
			{
				__LIB_28__::func_581(iVar2, &Var5, &uVar6);
				Var4 = { __LIB_1__::func_694(PLAYER::PLAYER_ID()) };
				fVar7 = MISC::GET_DISTANCE_BETWEEN_COORDS(Var4, Var5, false);
				if (fVar7 < 5f)
				{
					__LIB_1__::func_376(PLAYER::PLAYER_ID(), 0, 4, 0);
					Local_109 = { func_106(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) };
					TASK::TASK_GO_STRAIGHT_TO_COORD(PLAYER::PLAYER_PED_ID(), Local_109, 1f, 10000, 40000f, 0.5f);
					iLocal_110 = 1;
					__LIB_0__::func_627(&uLocal_111, 1, 0);
				}
			}
		}
	}
	else if (__LIB_0__::func_937(&uLocal_111, 10000, 1) || __LIB_7__::func_363(Local_109))
	{
		if (__LIB_1__::func_693(PLAYER::PLAYER_ID(), 1, 1))
		{
			if (!__LIB_7__::func_363(Local_109))
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(Local_109, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), true) > 0.5f)
				{
					ENTITY::SET_ENTITY_COORDS_NO_OFFSET(PLAYER::PLAYER_PED_ID(), Local_109, false, false, true);
				}
			}
		}
		__LIB_0__::func_794(&uLocal_111);
		__LIB_1__::func_376(PLAYER::PLAYER_ID(), 1, 0, 0);
		iLocal_110 = 0;
		Local_109 = { 0f, 0f, 0f };
	}
	else if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_GO_STRAIGHT_TO_COORD")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_GO_STRAIGHT_TO_COORD")) != 0)
	{
		TASK::TASK_GO_STRAIGHT_TO_COORD(PLAYER::PLAYER_PED_ID(), Local_109, 1f, 10000, 40000f, 0.5f);
	}
}

Vector3 func_106(struct<3> Param0)//Position - 0x9DA9
{
	if (Param0.f_0 <= 1380f)
	{
		Param0.f_0 = 1373f;
	}
	else
	{
		Param0.f_0 = 1386.9f;
	}
	return Param0;
}

void func_121()//Position - 0xA93A
{
	if ((__LIB_1__::func_693(PLAYER::PLAYER_ID(), 1, 1) && PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID())) && !__LIB_5__::func_301(PLAYER::PLAYER_ID()))
	{
		__LIB_0__::func_189();
		if (!Global_1574582.f_6)
		{
			MISC::SET_BIT(&(uLocal_131[PLAYER::PLAYER_ID()]), 0);
		}
		else
		{
			MISC::CLEAR_BIT(&(uLocal_131[PLAYER::PLAYER_ID()]), 0);
		}
	}
	else
	{
		MISC::CLEAR_BIT(&(uLocal_131[PLAYER::PLAYER_ID()]), 0);
	}
}

void func_124()//Position - 0xA9E7
{
	bool bVar0;
	int iVar1;
	int iVar2;
	Global_1957730 = 0;
	if (__LIB_0__::func_864(&uLocal_132) && __LIB_0__::func_937(&uLocal_132, 3000, 0))
	{
		__LIB_0__::func_794(&uLocal_132);
	}
	if (func_4734(Local_113.f_1, Local_113.f_3))
	{
		return;
	}
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && BitTest(Global_2703735.f_61.f_52, 5))
	{
		if (!__LIB_3__::func_171(PLAYER::PLAYER_ID()))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Global_2815059.f_298, false))
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(Global_2815059.f_298))
				{
					AUDIO::SET_VEHICLE_RADIO_ENABLED(Global_2815059.f_298, true);
					if (!Global_1973147)
					{
						VEHICLE::STOP_BRINGING_VEHICLE_TO_HALT(Global_2815059.f_298);
					}
					MISC::CLEAR_BIT(&(Global_2703735.f_61.f_52), 5);
				}
			}
		}
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && Global_1946244 == 7)
	{
		iLocal_136 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), true);
		iVar2 = __LIB_6__::func_854(iLocal_136);
		if ((((((((VEHICLE::IS_VEHICLE_MODEL(iLocal_136, joaat("tezeract")) || VEHICLE::IS_VEHICLE_MODEL(iLocal_136, joaat("oppressor"))) || VEHICLE::IS_VEHICLE_MODEL(iLocal_136, joaat("oppressor2"))) || VEHICLE::IS_VEHICLE_MODEL(iLocal_136, joaat("scarab"))) || VEHICLE::IS_VEHICLE_MODEL(iLocal_136, joaat("scarab2"))) || VEHICLE::IS_VEHICLE_MODEL(iLocal_136, joaat("scarab3"))) || VEHICLE::IS_VEHICLE_MODEL(iLocal_136, joaat("deathbike"))) || VEHICLE::IS_VEHICLE_MODEL(iLocal_136, joaat("deathbike2"))) || VEHICLE::IS_VEHICLE_MODEL(iLocal_136, joaat("deathbike3")))
		{
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 71 /*INPUT_VEH_ACCELERATE*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 72 /*INPUT_VEH_BRAKE*/, true);
		}
		if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_136, -1, false) == PLAYER::GET_PLAYER_PED(iVar2))
		{
			if (VEHICLE::IS_VEHICLE_MODEL(iLocal_136, joaat("oppressor2")))
			{
				if (VEHICLE::GET_IS_VEHICLE_ENGINE_RUNNING(iLocal_136) && Global_1946244 == 7)
				{
					VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_136, false, true, false);
				}
				PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 429, true);
			}
			else
			{
				PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 429, false);
			}
			if (__LIB_0__::func_872(iLocal_136, 1))
			{
				if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
				{
					if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iLocal_136))
					{
						VEHICLE::SET_VEHICLE_FORWARD_SPEED(iLocal_136, 0f);
					}
					if (PLAYER::PLAYER_PED_ID() == VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_136, -1, false) && !__LIB_3__::func_171(PLAYER::PLAYER_ID()))
					{
						if (func_128())
						{
							if (!Global_1574582.f_6 && !__LIB_0__::func_104(1))
							{
								bVar0 = true;
								if (!BitTest(Local_113.f_0, 4) && !Global_1957730)
								{
									if (PAD::IS_USING_KEYBOARD_AND_MOUSE(0 /*PLAYER_CONTROL*/))
									{
										iVar1 = 210;
									}
									else
									{
										iVar1 = 51;
									}
									if ((!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() && !HUD::IS_HELP_MESSAGE_ON_SCREEN()) && !BitTest(Local_113.f_0, 13))
									{
										if (PAD::IS_USING_KEYBOARD_AND_MOUSE(0 /*PLAYER_CONTROL*/))
										{
											__LIB_0__::func_151("CASINO_EXIT_0PC" /* GXT: Press ~INPUT_FRONTEND_RS~ to leave the Parking Garage. */, -1);
										}
										else
										{
											__LIB_0__::func_151("CASINO_EXIT_0" /* GXT: Press ~INPUT_CONTEXT~ to leave the Parking Garage. */, -1);
										}
										MISC::SET_BIT(&Local_113, 13);
									}
									if (PAD::IS_CONTROL_JUST_RELEASED(0 /*PLAYER_CONTROL*/, iVar1) || PAD::IS_DISABLED_CONTROL_JUST_RELEASED(0 /*PLAYER_CONTROL*/, iVar1))
									{
										Global_1957730 = 1;
										MISC::SET_BIT(&Local_113, 4);
									}
								}
							}
						}
						else
						{
							PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 72 /*INPUT_VEH_BRAKE*/, true);
							PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 71 /*INPUT_VEH_ACCELERATE*/, true);
						}
					}
					else
					{
						PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 72 /*INPUT_VEH_BRAKE*/, true);
						PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 71 /*INPUT_VEH_ACCELERATE*/, true);
					}
				}
			}
		}
	}
	if (!bVar0)
	{
		MISC::CLEAR_BIT(&Local_113, 4);
		if (BitTest(Local_113.f_0, 13))
		{
			if (__LIB_0__::func_1("CASINO_EXIT_0PC" /* GXT: Press ~INPUT_FRONTEND_RS~ to leave the Parking Garage. */) || __LIB_0__::func_1("CASINO_EXIT_0" /* GXT: Press ~INPUT_CONTEXT~ to leave the Parking Garage. */))
			{
				HUD::CLEAR_HELP(true);
			}
			MISC::CLEAR_BIT(&Local_113, 13);
		}
	}
}

int func_128()//Position - 0xAD6E
{
	if ((((((((__LIB_0__::func_77(0) || __LIB_0__::func_104(1)) || __LIB_2__::func_77()) || __LIB_3__::func_558()) || NETWORK::IS_COMMERCE_STORE_OPEN()) || __LIB_3__::func_100()) || __LIB_0__::func_877()) || PLAYER::IS_SYSTEM_UI_BEING_DISPLAYED()) || __LIB_1__::func_512())
	{
		if (!__LIB_0__::func_864(&uLocal_134))
		{
			__LIB_0__::func_795(&uLocal_134, 0, 0);
		}
		else
		{
			__LIB_0__::func_627(&uLocal_134, 0, 0);
		}
		return 0;
	}
	else if (__LIB_0__::func_864(&uLocal_134))
	{
		if (__LIB_0__::func_937(&uLocal_134, 3000, 0))
		{
			__LIB_0__::func_794(&uLocal_134);
		}
		else
		{
			return 0;
		}
	}
	if (!func_131(iLocal_136))
	{
		return 0;
	}
	if (__LIB_1__::func_583(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE")) == 1 || TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE")) == 0)
	{
		return 0;
	}
	if (Global_1964700)
	{
		return 0;
	}
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		return 0;
	}
	if (SCRIPT::DOES_SCRIPT_EXIST("appMPJobListNEW") && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("appmpjoblistnew")) > 0)
	{
		return 0;
	}
	if (SCRIPT::DOES_SCRIPT_EXIST("appJIPMP") && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("appjipmp")) > 0)
	{
		return 0;
	}
	if (__LIB_0__::func_361(PLAYER::PLAYER_ID(), 0))
	{
		return 0;
	}
	if (HUD::IS_STORE_PENDING_NETWORK_SHUTDOWN_TO_OPEN())
	{
		return 0;
	}
	if (__LIB_0__::func_719())
	{
		return 0;
	}
	if (PED::GET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 373))
	{
		return 0;
	}
	if (__LIB_3__::func_718())
	{
		return 0;
	}
	if (__LIB_5__::func_301(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		return 0;
	}
	if (CAM::IS_SCREEN_FADING_IN())
	{
		return 0;
	}
	if (__LIB_0__::func_864(&uLocal_132))
	{
		return 0;
	}
	return 1;
}

int func_131(int iParam0)//Position - 0xAF5D
{
	int iVar0;
	int iVar1;
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar0 = PLAYER::INT_TO_PLAYERINDEX(iVar1);
		if ((iVar0 != PLAYER::PLAYER_ID() && iVar0 != __LIB_0__::func_162()) && NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar0))
		{
			if (__LIB_1__::func_693(iVar0, 1, 1))
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::GET_PLAYER_PED(iVar0), iParam0, false))
				{
					if (((!BitTest(uLocal_131[iVar0], 0) || TASK::GET_SCRIPT_TASK_STATUS(PLAYER::GET_PLAYER_PED(iVar0), joaat("SCRIPT_TASK_LEAVE_VEHICLE")) == 1) || TASK::GET_SCRIPT_TASK_STATUS(PLAYER::GET_PLAYER_PED(iVar0), joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE")) == 1) || __LIB_5__::func_301(iVar0))
					{
						return 0;
					}
				}
				else if (PED::IS_PED_IN_VEHICLE(PLAYER::GET_PLAYER_PED(iVar0), iParam0, true) || ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(PLAYER::GET_PLAYER_PED(iVar0), iParam0))
				{
					return 0;
				}
			}
		}
		iVar1++;
	}
	return 1;
}

void func_152()//Position - 0xB32B
{
	if (!__LIB_1__::func_936(PLAYER::PLAYER_ID()))
	{
		__LIB_7__::func_373(&(Local_113.f_453), 1380.0728f, 178.5524f, -48.2886f, 63, "CAS_BLP_EL" /* GXT: Elevator */, 0.8f, 1, 0);
		if (__LIB_10__::func_13())
		{
			__LIB_7__::func_373(&(Local_113.f_454), 1380.3077f, 259.3023f, -48.2891f, 63, "CAS_BLP_EL" /* GXT: Elevator */, 0.8f, 1, 0);
		}
	}
	else
	{
		__LIB_0__::func_714(&(Local_113.f_453));
		__LIB_0__::func_714(&(Local_113.f_454));
	}
}

void func_160()//Position - 0xB51E
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0));
			if (__LIB_1__::func_693(iVar1, 1, 1))
			{
				PED::FORCE_ZERO_MASS_IN_COLLISIONS(PLAYER::GET_PLAYER_PED(iVar1));
			}
		}
		iVar0++;
	}
}

void func_161()//Position - 0xB569
{
	bool bVar0;
	int iVar1;
	int iVar2;
	struct<3> Var3;
	if (!BitTest(Local_113.f_0, 0))
	{
		if (!Local_113.f_440)
		{
			func_176(Local_113.f_3, &(Local_113.f_424), &(Local_113.f_420), &(Local_113.f_423), 1);
			Local_113.f_419 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(Local_113.f_420, &(Local_113.f_424));
			if (INTERIOR::IS_VALID_INTERIOR(Local_113.f_419) && INTERIOR::IS_INTERIOR_READY(Local_113.f_419))
			{
				bVar0 = true;
				if (bVar0)
				{
					if (__LIB_4__::func_900(PLAYER::PLAYER_ID()))
					{
						iVar1 = INTERIOR::GET_ROOM_KEY_FROM_ENTITY(PLAYER::PLAYER_PED_ID());
						if (iVar1 == joaat("Carpark_Room"))
						{
							INTERIOR::FORCE_ROOM_FOR_ENTITY(PLAYER::PLAYER_PED_ID(), Local_113.f_419, iVar1);
						}
					}
					__LIB_6__::func_264();
					__LIB_6__::func_263(1);
					MISC::SET_BIT(&Local_113, 0);
					__LIB_0__::func_794(&(Local_113.f_441));
				}
			}
			else
			{
				if (!__LIB_0__::func_864(&(Local_113.f_441)))
				{
					__LIB_6__::func_262(Local_113.f_419);
					__LIB_0__::func_795(&(Local_113.f_441), 0, 0);
				}
				if (__LIB_0__::func_937(&(Local_113.f_441), Local_113.f_443, 0))
				{
					__LIB_0__::func_794(&(Local_113.f_441));
				}
			}
		}
		else
		{
			__LIB_6__::func_263(1);
			MISC::SET_BIT(&Local_113, 0);
		}
	}
	if (__LIB_6__::func_184() && BitTest(Local_113.f_0, 0))
	{
		iVar2 = 1;
		if (!BitTest(Local_113.f_0, 1))
		{
			if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
			{
				return;
			}
			Var3 = { 1380.8516f, 220.6906f, -49.9945f };
			STREAMING::NEW_LOAD_SCENE_START_SPHERE(Var3, 50f, 0);
			MISC::SET_BIT(&Local_113, 1);
			iVar2 = 0;
		}
		else if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
		{
			if (!STREAMING::IS_NEW_LOAD_SCENE_LOADED())
			{
				iVar2 = 0;
			}
			else
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !func_166())
				{
					return;
				}
				func_176(Local_113.f_3, &(Local_113.f_424), &(Local_113.f_420), &(Local_113.f_423), 0);
				Local_113.f_419 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(Local_113.f_420, &(Local_113.f_424));
				STREAMING::NEW_LOAD_SCENE_STOP();
			}
		}
		else if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !func_166())
		{
			return;
		}
		if (!BitTest(Local_114.f_1, 0))
		{
			iVar2 = 0;
		}
		if (iVar2 && func_165())
		{
			__LIB_6__::func_51(1);
			__LIB_6__::func_263(1);
			__LIB_6__::func_261();
			__LIB_0__::func_795(&uLocal_132, 0, 0);
			func_162(1);
		}
	}
}

void func_162(int iParam0)//Position - 0xB771
{
	Local_113.f_2 = iParam0;
}

int func_165()//Position - 0xB7AE
{
	if (!INTERIOR::IS_VALID_INTERIOR(Local_113.f_419) || !INTERIOR::IS_INTERIOR_READY(Local_113.f_419))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_113.f_448[0]))
	{
		STREAMING::REQUEST_MODEL(joaat("v_ilev_garageliftdoor"));
		if (STREAMING::HAS_MODEL_LOADED(joaat("v_ilev_garageliftdoor")))
		{
			Local_113.f_448[0] = OBJECT::CREATE_OBJECT(joaat("v_ilev_garageliftdoor"), 1380.8552f, 179.6634f, -49.9991f, false, false, true);
			if (ENTITY::DOES_ENTITY_EXIST(Local_113.f_448[0]))
			{
				ENTITY::SET_ENTITY_COORDS(Local_113.f_448[0], 1380.8552f, 179.6634f, -49.9991f, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(Local_113.f_448[0], 180f);
				ENTITY::FREEZE_ENTITY_POSITION(Local_113.f_448[0], true);
				ENTITY::SET_ENTITY_LOD_DIST(Local_113.f_448[0], 300);
				INTERIOR::FORCE_ROOM_FOR_ENTITY(Local_113.f_448[0], Local_113.f_419, joaat("Carpark_Room"));
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("v_ilev_garageliftdoor"));
			}
		}
		else
		{
			return 0;
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_113.f_448[1]))
	{
		STREAMING::REQUEST_MODEL(joaat("v_ilev_garageliftdoor"));
		if (STREAMING::HAS_MODEL_LOADED(joaat("v_ilev_garageliftdoor")))
		{
			Local_113.f_448[1] = OBJECT::CREATE_OBJECT(joaat("v_ilev_garageliftdoor"), 1379.3513f, 179.664f, -49.9991f, false, false, true);
			if (ENTITY::DOES_ENTITY_EXIST(Local_113.f_448[1]))
			{
				ENTITY::SET_ENTITY_COORDS(Local_113.f_448[1], 1379.3513f, 179.664f, -49.9991f, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(Local_113.f_448[1], 0f);
				ENTITY::FREEZE_ENTITY_POSITION(Local_113.f_448[1], true);
				ENTITY::SET_ENTITY_LOD_DIST(Local_113.f_448[1], 300);
				INTERIOR::FORCE_ROOM_FOR_ENTITY(Local_113.f_448[1], Local_113.f_419, joaat("Carpark_Room"));
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("v_ilev_garageliftdoor"));
			}
		}
		else
		{
			return 0;
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_113.f_448[2]))
	{
		STREAMING::REQUEST_MODEL(joaat("v_ilev_garageliftdoor"));
		if (STREAMING::HAS_MODEL_LOADED(joaat("v_ilev_garageliftdoor")))
		{
			Local_113.f_448[2] = OBJECT::CREATE_OBJECT(joaat("v_ilev_garageliftdoor"), 1379.2699f, 258.2452f, -49.9988f, false, false, true);
			if (ENTITY::DOES_ENTITY_EXIST(Local_113.f_448[2]))
			{
				ENTITY::SET_ENTITY_COORDS(Local_113.f_448[2], 1379.2699f, 258.2452f, -49.9988f, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(Local_113.f_448[2], 0f);
				ENTITY::FREEZE_ENTITY_POSITION(Local_113.f_448[2], true);
				ENTITY::SET_ENTITY_LOD_DIST(Local_113.f_448[2], 300);
				INTERIOR::FORCE_ROOM_FOR_ENTITY(Local_113.f_448[2], Local_113.f_419, joaat("Carpark_Room"));
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("v_ilev_garageliftdoor"));
			}
		}
		else
		{
			return 0;
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_113.f_448[3]))
	{
		STREAMING::REQUEST_MODEL(joaat("v_ilev_garageliftdoor"));
		if (STREAMING::HAS_MODEL_LOADED(joaat("v_ilev_garageliftdoor")))
		{
			Local_113.f_448[3] = OBJECT::CREATE_OBJECT(joaat("v_ilev_garageliftdoor"), 1380.7738f, 258.2452f, -49.9988f, false, false, true);
			if (ENTITY::DOES_ENTITY_EXIST(Local_113.f_448[3]))
			{
				ENTITY::SET_ENTITY_COORDS(Local_113.f_448[3], 1380.7738f, 258.2452f, -49.9988f, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(Local_113.f_448[3], 180f);
				ENTITY::FREEZE_ENTITY_POSITION(Local_113.f_448[3], true);
				ENTITY::SET_ENTITY_LOD_DIST(Local_113.f_448[3], 300);
				INTERIOR::FORCE_ROOM_FOR_ENTITY(Local_113.f_448[3], Local_113.f_419, joaat("Carpark_Room"));
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("v_ilev_garageliftdoor"));
			}
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

int func_166()//Position - 0xBAF4
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		MISC::SET_BIT(&Local_113, 15);
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		MISC::SET_BIT(&(uLocal_131[PLAYER::PLAYER_ID()]), 1);
		iVar1 = __LIB_6__::func_854(iVar0);
		if (iVar1 != __LIB_0__::func_162() && __LIB_1__::func_693(iVar1, 1, 1))
		{
			if (!BitTest(uLocal_131[iVar1], 2))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Global_2815059.f_298) && Global_2815059.f_298 == iVar0)
				{
					if (!BitTest(Local_113.f_0, 14))
					{
						if (func_170())
						{
							__LIB_4__::func_188(0);
							MISC::SET_BIT(&Local_113, 14);
						}
					}
					else if (BitTest(Global_2703735.f_61.f_52, 3))
					{
						MISC::SET_BIT(&(uLocal_131[iVar1]), 2);
					}
					else if (__LIB_4__::func_107())
					{
						if (!BitTest(Global_2703735.f_61.f_52, 3))
						{
						}
					}
					else
					{
						__LIB_4__::func_149(0);
					}
				}
				return 0;
			}
			else
			{
				MISC::CLEAR_BIT(&Local_113, 15);
			}
		}
		else
		{
			iVar2 = 1;
		}
	}
	else
	{
		iVar2 = 1;
	}
	if (iVar2 && BitTest(Local_113.f_0, 15))
	{
		ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1335.1205f, 183.6249f, -48.8762f, true, false, false, true);
		ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 271.44f);
		MISC::CLEAR_BIT(&Local_113, 15);
	}
	return 1;
}

int func_170()//Position - 0xBC95
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar2 = 0;
	while (iVar2 < 32)
	{
		iVar1 = iVar2;
		if ((iVar1 != __LIB_0__::func_162() && __LIB_1__::func_693(iVar1, 1, 1)) && iVar1 != PLAYER::PLAYER_ID())
		{
			iVar0 = PLAYER::GET_PLAYER_PED(iVar1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0) && __LIB_0__::func_121(iVar0))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(iVar0, false) && PED::GET_VEHICLE_PED_IS_IN(iVar0, false) == PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false))
				{
					if (!BitTest(uLocal_131[iVar1], 1))
					{
						return 0;
					}
				}
			}
		}
		iVar2++;
	}
	return 1;
}

void func_176(int iParam0, var uParam1, var uParam2, var uParam3, int iParam4)//Position - 0xBDCE
{
	struct<31> Var0;
	func_177(iParam0, &Var0, 1);
	Stack.Push(iParam0);
	Stack.Push(uParam1);
	Stack.Push(uParam2);
	Stack.Push(uParam3);
	Stack.Push(iParam4);
	Call_Loc(Var0.f_30);
}

void func_177(int iParam0, var uParam1, int iParam2)//Position - 0xBDEE
{
	func_4692(uParam1, iParam2);
	func_4686(uParam1, iParam2);
	func_4678(uParam1, iParam2);
	func_178(__LIB_0__::func_172(iParam0), uParam1, iParam2);
}

void func_178(int iParam0, var uParam1, int iParam2)//Position - 0xBE1C
{
	switch (iParam0)
	{
		case 0:
			func_4605(uParam1, iParam2);
			break;
		case 1:
			func_4472(uParam1, iParam2);
			break;
		case 2:
			func_4395(uParam1, iParam2);
			break;
		case 3:
			func_4317(uParam1, iParam2);
			break;
		case 4:
			func_4143(uParam1, iParam2);
			break;
		case 5:
			func_3977(uParam1, iParam2);
			break;
		case 6:
			func_3912(uParam1, iParam2);
			break;
		case 7:
			func_3744(uParam1, iParam2);
			break;
		case 8:
			func_3573(uParam1, iParam2);
			break;
		case 9:
			func_3331(uParam1, iParam2);
			break;
		case 10:
			func_3253(uParam1, iParam2);
			break;
		case 11:
			func_3022(uParam1, iParam2);
			break;
		case 12:
			func_2877(uParam1, iParam2);
			break;
		case 13:
			func_2709(uParam1, iParam2);
			break;
		case 14:
			func_2536(uParam1, iParam2);
			break;
		case 15:
			func_2358(uParam1, iParam2);
			break;
		case 16:
			func_2249(uParam1, iParam2);
			break;
		case 17:
			func_1994(uParam1, iParam2);
			break;
		case 18:
			func_1900(uParam1, iParam2);
			break;
		case 19:
			func_1777(uParam1, iParam2);
			break;
		case 20:
			func_1337(uParam1, iParam2);
			break;
		case 21:
			func_1215(uParam1, iParam2);
			break;
		case 22:
			func_1042(uParam1, iParam2);
			break;
		case 23:
			func_821(uParam1, iParam2);
			break;
		case 24:
			func_179(uParam1, iParam2);
			break;
	}
}

void func_179(var uParam0, int iParam1)//Position - 0xBFD4
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 324091/*func_820*/;
			break;
		case 111:
			uParam0->f_35 = 324077/*func_819*/;
			break;
		case 1:
			uParam0->f_30 = 323981/*func_818*/;
			break;
		case 2:
			uParam0->f_31 = 322638/*func_812*/;
			break;
		case 3:
			uParam0->f_34 = 322409/*func_811*/;
			break;
		case 4:
			uParam0->f_12 = 322397/*func_810*/;
			break;
		case 5:
			uParam0->f_11 = 322387/*func_809*/;
			break;
		case 37:
			uParam0->f_18 = 322199/*func_808*/;
			break;
		case 38:
			uParam0->f_9 = 322152/*func_807*/;
			break;
		case 42:
			uParam0->f_10 = 322124/*func_806*/;
			break;
		case 6:
			uParam0->f_32 = 321815/*func_805*/;
			break;
		case 11:
			uParam0->f_11 = 321806/*func_804*/;
			break;
		case 12:
			uParam0->f_33 = 319138/*func_796*/;
			break;
		case 14:
			uParam0->f_11 = 319129/*func_795*/;
			break;
		case 109:
			uParam0->f_56 = 312546/*func_792*/;
			break;
		case 8:
			uParam0->f_37 = 311671/*func_791*/;
			break;
		case 7:
			uParam0->f_36 = 311554/*func_790*/;
			break;
		case 79:
			*uParam0 = 311498/*func_787*/;
			break;
		case 9:
			uParam0->f_29 = 311345/*func_786*/;
			break;
		case 10:
			uParam0->f_27 = 311201/*func_784*/;
			break;
		case 13:
			uParam0->f_2 = 311119/*func_782*/;
			break;
		case 15:
			uParam0->f_2 = 309285/*func_758*/;
			break;
		case 16:
			uParam0->f_5 = 308100/*func_750*/;
			break;
		case 108:
			uParam0->f_55 = 250979/*func_619*/;
			break;
		case 17:
			uParam0->f_17 = 249256/*func_600*/;
			break;
		case 19:
			uParam0->f_17 = 249118/*func_596*/;
			break;
		case 18:
			uParam0->f_8 = 249093/*func_595*/;
			break;
		case 20:
			uParam0->f_3 = 248873/*func_593*/;
			break;
		case 21:
			uParam0->f_3 = 247432/*func_579*/;
			break;
		case 74:
			uParam0->f_53 = 247242/*func_577*/;
			break;
		case 75:
			uParam0->f_4 = 245907/*func_571*/;
			break;
		case 22:
			uParam0->f_24 = 245790/*func_569*/;
			break;
		case 23:
			uParam0->f_26 = 245745/*func_568*/;
			break;
		case 24:
			uParam0->f_26 = 245711/*func_567*/;
			break;
		case 26:
			uParam0->f_38 = 245703/*func_566*/;
			break;
		case 25:
			uParam0->f_23 = 242716/*func_546*/;
			break;
		case 27:
			uParam0->f_25 = 242708/*func_545*/;
			break;
		case 28:
			uParam0->f_24 = 242700/*func_544*/;
			break;
		case 30:
			uParam0->f_8 = 242550/*func_542*/;
			break;
		case 31:
			uParam0->f_39 = 242331/*func_539*/;
			break;
		case 33:
			uParam0->f_40 = 241338/*func_529*/;
			break;
		case 32:
			*uParam0 = 241283/*func_528*/;
			break;
		case 76:
			uParam0->f_13 = 241272/*func_527*/;
			break;
		case 34:
			uParam0->f_41 = 237520/*func_524*/;
			break;
		case 36:
			uParam0->f_58 = 237475/*func_523*/;
			break;
		case 35:
			uParam0->f_42 = 216444/*func_520*/;
			break;
		case 45:
			uParam0->f_14 = 216435/*func_519*/;
			break;
		case 46:
			uParam0->f_14 = 216426/*func_518*/;
			break;
		case 110:
			uParam0->f_57 = 216418/*func_517*/;
			break;
		case 77:
			uParam0->f_13 = 216395/*func_516*/;
			break;
		case 82:
			uParam0->f_19 = 216349/*func_514*/;
			break;
		case 47:
			uParam0->f_43 = 216217/*func_513*/;
			break;
		case 48:
			uParam0->f_60 = 1;
			uParam0->f_44 = 214964/*func_503*/;
			break;
		case 49:
			uParam0->f_8 = 214946/*func_502*/;
			break;
		case 50:
			*uParam0 = 214597/*func_498*/;
			break;
		case 51:
			*uParam0 = 214495/*func_497*/;
			break;
		case 52:
			uParam0->f_15 = 214484/*func_496*/;
			break;
		case 53:
			uParam0->f_13 = 214358/*func_495*/;
			break;
		case 54:
			uParam0->f_45 = 213971/*func_494*/;
			break;
		case 56:
			uParam0->f_46 = 213952/*func_493*/;
			break;
		case 57:
			uParam0->f_11 = 212406/*func_484*/;
			break;
		case 58:
			uParam0->f_13 = 212280/*func_483*/;
			break;
		case 59:
			*uParam0 = 210636/*func_466*/;
			break;
		case 60:
			*uParam0 = 210627/*func_465*/;
			break;
		case 61:
			uParam0->f_15 = 210616/*func_464*/;
			break;
		case 62:
			uParam0->f_13 = 210490/*func_463*/;
			break;
		case 55:
			uParam0->f_45 = 210482/*func_462*/;
			break;
		case 63:
			uParam0->f_11 = 210468/*func_461*/;
			break;
		case 64:
			uParam0->f_47 = 210460/*func_460*/;
			break;
		case 65:
			uParam0->f_21 = 208897/*func_445*/;
			break;
		case 66:
			uParam0->f_21 = 208211/*func_442*/;
			break;
		case 67:
			uParam0->f_21 = 208071/*func_440*/;
			break;
		case 68:
			*uParam0 = 206866/*func_435*/;
			break;
		case 69:
			*uParam0 = 206857/*func_434*/;
			break;
		case 70:
			uParam0->f_48 = 206845/*func_433*/;
			break;
		case 71:
			uParam0->f_49 = 206836/*func_432*/;
			break;
		case 107:
			uParam0->f_50 = 206824/*func_431*/;
			break;
		case 80:
			uParam0->f_7 = 206377/*func_429*/;
			break;
		case 84:
			uParam0->f_1 = 206368/*func_428*/;
			break;
		case 85:
			uParam0->f_1 = 68208/*func_315*/;
			break;
		case 87:
			uParam0->f_1 = 64354/*func_294*/;
			break;
		case 88:
			uParam0->f_1 = 64345/*func_293*/;
			break;
		case 89:
			uParam0->f_54 = 64337/*func_292*/;
			break;
		case 90:
			uParam0->f_1 = 63410/*func_273*/;
			break;
		case 91:
			uParam0->f_1 = 63376/*func_272*/;
			break;
		case 92:
			uParam0->f_1 = 61448/*func_258*/;
			break;
		case 94:
			uParam0->f_1 = 59440/*func_244*/;
			break;
		case 95:
			uParam0->f_22 = 57238/*func_216*/;
			break;
		case 96:
			uParam0->f_1 = 57229/*func_215*/;
			break;
		case 97:
			uParam0->f_1 = 57220/*func_214*/;
			break;
		case 98:
			uParam0->f_1 = 57211/*func_213*/;
			break;
		case 100:
			uParam0->f_22 = 57203/*func_212*/;
			break;
		case 101:
			uParam0->f_22 = 57195/*func_211*/;
			break;
		case 112:
			uParam0->f_13 = 57081/*func_210*/;
			break;
		case 113:
			uParam0->f_3 = 56927/*func_206*/;
			break;
		case 114:
			uParam0->f_16 = 56259/*func_205*/;
			break;
		case 115:
			uParam0->f_3 = 56250/*func_204*/;
			break;
		case 116:
			*uParam0 = 56241/*func_203*/;
			break;
		case 117:
			uParam0->f_16 = 51825/*func_202*/;
			break;
		case 118:
			uParam0->f_11 = 51816/*func_201*/;
			break;
		case 119:
			uParam0->f_27 = 51689/*func_196*/;
			break;
		case 120:
			uParam0->f_19 = 51634/*func_193*/;
			break;
		case 78:
			uParam0->f_59 = 50957/*func_182*/;
			break;
		case 124:
			uParam0->f_1 = 50948/*func_181*/;
			break;
		case 125:
			uParam0->f_19 = 50940/*func_180*/;
			break;
	}
}

int func_315(int iParam0, var uParam1)//Position - 0x10A70
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	struct<3> Var5;
	struct<3> Var6;
	struct<3> Var7;
	struct<3> Var8;
	var uVar9;
	var uVar10;
	var uVar11;
	var uVar12;
	bool bVar13;
	bool bVar14;
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) || ENTITY::DOES_ENTITY_EXIST(uParam1->f_262))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_262))
		{
			iVar0 = uParam1->f_262;
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
		}
		if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_109))
		{
			func_408(&iVar0, &(uParam1->f_109), 60);
			__LIB_3__::func_633(&(uParam1->f_109));
			VEHICLE::SET_DISABLE_MAP_COLLISION(uParam1->f_109);
			return 0;
		}
		else if (func_324(&iVar0, &(uParam1->f_109), &(uParam1->f_109.f_1), 1, 1, 0, 1, 0, 1))
		{
			VEHICLE::SET_DISABLE_MAP_COLLISION(uParam1->f_109);
		}
		else
		{
			return 0;
		}
		MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(uParam1->f_109), &(uParam1->f_189[0 /*3*/]), &(uParam1->f_189[1 /*3*/]));
		__LIB_3__::func_632(iParam0, &Var1, &Var3, &uVar9, 1);
		__LIB_3__::func_632(iParam0, &Var2, &Var4, &uVar10, 0);
		__LIB_3__::func_631(iParam0, &Var5, &Var7, &uVar11, 1);
		__LIB_3__::func_631(iParam0, &Var6, &Var8, &uVar12, 0);
		bVar13 = VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(iVar0));
		bVar14 = !(uParam1->f_189[1 /*3*/].f_1 - uParam1->f_189[0 /*3*/].f_1) > 7f;
		if (bVar13)
		{
			MISC::SET_BIT(&(uParam1->f_188), 1);
		}
		else
		{
			MISC::CLEAR_BIT(&(uParam1->f_188), 1);
		}
		__LIB_6__::func_820(&(Global_1946250.f_3638), Var1, Var3, uVar9, Var2, Var4, uVar10, bVar13, Var5, Var7, uVar11, Var6, Var8, uVar12, bVar14, 1056964608, 1036831949);
	}
	return 1;
}

int func_324(int iParam0, var uParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8)//Position - 0x111E5
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam1))
	{
		return 0;
	}
	iVar2 = 8;
	if (bParam7)
	{
		iVar2 = -1;
	}
	iVar0 = -1;
	while (iVar0 <= iVar2)
	{
		iVar1 = iVar0 + 1;
		iVar3 = iVar0;
		if (!VEHICLE::IS_VEHICLE_SEAT_FREE(*iParam0, iVar3, false))
		{
			iVar4 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(*iParam0, iVar3, false);
			if (ENTITY::DOES_ENTITY_EXIST(iVar4) && (__LIB_0__::func_121(iVar4) || bParam5))
			{
				if (bParam3 && !PED::IS_PED_A_PLAYER(iVar4))
				{
				}
				else
				{
					if (!ENTITY::DOES_ENTITY_EXIST((*uParam2)[iVar1]))
					{
						func_325(uParam2[iVar1], iVar4, bParam8, bParam6);
					}
					if (ENTITY::DOES_ENTITY_EXIST((*uParam2)[iVar1]) && (__LIB_0__::func_121((*uParam2)[iVar1]) || bParam5))
					{
						if (!PED::HAS_PED_HEAD_BLEND_FINISHED((*uParam2)[iVar1]) || !PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED((*uParam2)[iVar1]))
						{
							if (bParam4)
							{
								return 0;
							}
						}
						iVar5 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(*uParam1, iVar3, false);
						if (!ENTITY::DOES_ENTITY_EXIST(iVar5))
						{
							if (__LIB_0__::func_121(*uParam1))
							{
								ENTITY::FREEZE_ENTITY_POSITION((*uParam2)[iVar1], false);
								PED::SET_PED_INTO_VEHICLE((*uParam2)[iVar1], *uParam1, iVar3);
							}
						}
						if (iVar0 == 7 && ENTITY::GET_ENTITY_MODEL(*iParam0) == joaat("insurgent3"))
						{
							VEHICLE::SET_VEHICLE_DOOR_CONTROL(*uParam1, 5, 5, 1f);
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 1;
}

int func_325(var uParam0, int iParam1, bool bParam2, bool bParam3)//Position - 0x11347
{
	struct<3> Var0;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		return 0;
	}
	*uParam0 = PED::CLONE_PED(iParam1, false, false, bParam2);
	if (__LIB_0__::func_121(iParam1))
	{
		ENTITY::SET_ENTITY_INVINCIBLE(*uParam0, true);
		__LIB_1__::func_494(*uParam0);
		if (func_340(iParam1) || __LIB_1__::func_554(iParam1))
		{
			PED::SET_PED_HELMET(*uParam0, true);
		}
		else
		{
			PED::SET_PED_HELMET(*uParam0, false);
			PED::REMOVE_PED_HELMET(*uParam0, true);
			PED::CLEAR_PED_PROP(*uParam0, 0);
		}
		if (bParam3)
		{
			Var0 = { ENTITY::GET_ENTITY_COORDS(*uParam0, false) };
			Var0.f_2 = (Var0.f_2 - 10f);
			ENTITY::SET_ENTITY_COORDS(*uParam0, Var0, false, false, false, true);
			ENTITY::FREEZE_ENTITY_POSITION(*uParam0, true);
			ENTITY::SET_ENTITY_COLLISION(*uParam0, false, false);
		}
		PED::FINALIZE_HEAD_BLEND(*uParam0);
		return 1;
	}
	return 0;
}

int func_340(int iParam0)//Position - 0x121CC
{
	if (!PED::IS_PED_WEARING_HELMET(iParam0) && !__LIB_0__::func_348(ENTITY::GET_ENTITY_MODEL(iParam0), 14, func_342(iParam0, 14, 0), -1))
	{
		return 0;
	}
	return 1;
}

int func_342(int iParam0, int iParam1, int iParam2)//Position - 0x122CD
{
	int iVar0;
	int iVar1;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (iParam1 == 12)
		{
			iVar0 = 0;
			while (iVar0 <= 53)
			{
				if (func_343(iParam0, iParam1, iVar0))
				{
					return iVar0;
				}
				iVar0++;
			}
		}
		else if (iParam1 == 13)
		{
			iVar1 = 0;
			while (iVar1 <= 19)
			{
				if (func_343(iParam0, iParam1, iVar1))
				{
					return iVar1;
				}
				iVar1++;
			}
			return 31;
		}
		else if (iParam1 == 14)
		{
			if (iParam2 == -1)
			{
			}
			else
			{
				return __LIB_0__::func_453(iParam0, iParam2);
			}
		}
		else
		{
			return __LIB_0__::func_350(iParam0, iParam1);
		}
	}
	return -99;
}

int func_343(int iParam0, int iParam1, int iParam2)//Position - 0x1236E
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	var uVar8;
	var uVar9;
	int iVar10;
	var uVar11;
	int iVar12;
	int iVar13;
	var uVar14;
	var uVar15;
	int iVar16;
	struct<5> Var17;
	var uVar18;
	if (PED::IS_PED_INJURED(iParam0))
	{
		return 0;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	Global_78130[1 /*14*/] = { __LIB_6__::func_38(iVar0, iParam1, iParam2, -1) };
	uVar2 = Global_2883588;
	uVar3 = Global_2883589;
	if (!BitTest(Global_78130[1 /*14*/].f_6, 0))
	{
		return 0;
	}
	if (iParam1 == 12)
	{
		uVar8 = { __LIB_0__::func_459(iVar0, iParam2) };
		iVar7 = 0;
		while (iVar7 < 7)
		{
			switch (iVar7)
			{
				case 0:
					iVar4 = 1;
					break;
				case 1:
					iVar4 = 4;
					break;
				case 2:
					iVar4 = 6;
					break;
				case 3:
					iVar4 = 7;
					break;
				case 4:
					iVar4 = 8;
					break;
				case 5:
					iVar4 = 11;
					break;
				case 6:
					iVar4 = 13;
					break;
			}
			if (uVar8[iVar4] != -99)
			{
				if (!func_343(iParam0, iVar4, uVar8[iVar4]))
				{
					Global_2883588 = uVar2;
					Global_2883589 = uVar3;
					return 0;
					if (iVar4 == 13)
					{
						uVar9 = { __LIB_0__::func_466(iVar0, uVar8[iVar4]) };
						iVar5 = 0;
						while (iVar5 <= 8)
						{
							if (!func_343(iParam0, 14, uVar9[iVar5]))
							{
								iVar6 = 0;
								while (iVar6 <= 19)
								{
									Global_78130[2 /*14*/] = { __LIB_6__::func_38(iVar0, 14, iVar6, -1) };
									if (Global_78130[2 /*14*/].f_12 == iVar5)
									{
										if (func_343(iParam0, 14, iVar6))
										{
											if (!__LIB_0__::func_551(iVar0, iParam2, 14, iVar6, &uVar8, &(Global_78130[2 /*14*/])))
											{
												Global_2883588 = uVar2;
												Global_2883589 = uVar3;
												return 0;
											}
										}
									}
									iVar6++;
								}
							}
							iVar5++;
						}
					}
					else
					{
						iVar1 = __LIB_0__::func_350(iParam0, iVar4);
						Global_78130[2 /*14*/] = { __LIB_6__::func_38(iVar0, iVar4, iVar1, -1) };
						if (!__LIB_0__::func_551(iVar0, iParam2, iVar4, iVar1, &uVar8, &(Global_78130[2 /*14*/])))
						{
							Global_2883588 = uVar2;
							Global_2883589 = uVar3;
							return 0;
						}
					}
				}
			}
			iVar7++;
		}
		if ((uVar8[10] != 0 && uVar8[10] != joaat("0")) && uVar8.f_16)
		{
			if (__LIB_1__::func_360(1759, Global_78127, 0) != uVar8[10])
			{
				Global_2883588 = uVar2;
				Global_2883589 = uVar3;
				return 0;
			}
		}
		Global_2883588 = uVar2;
		Global_2883589 = uVar3;
		return 1;
	}
	else if (iParam1 == 13)
	{
		uVar11 = { __LIB_0__::func_466(iVar0, iParam2) };
		iVar10 = 0;
		while (iVar10 <= 8)
		{
			if (!func_343(iParam0, 14, uVar11[iVar10]))
			{
				return 0;
			}
			iVar10++;
		}
		return 1;
	}
	else if (iParam1 == 14)
	{
		if (PED::GET_PED_PROP_INDEX(iParam0, Global_78130[1 /*14*/].f_12) == Global_78130[1 /*14*/].f_3 && (PED::GET_PED_PROP_TEXTURE_INDEX(iParam0, Global_78130[1 /*14*/].f_12) == Global_78130[1 /*14*/].f_4 || Global_78130[1 /*14*/].f_3 == -1))
		{
			return 1;
		}
		if (((Global_78130[1 /*14*/].f_12 == 0 && BitTest(Global_78130[1 /*14*/].f_6, 6)) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("HELMET"), 1)) && FILES::GET_SHOP_PED_APPAREL_VARIANT_PROP_COUNT(Global_2883588) > 0)
		{
			iVar16 = FILES::GET_SHOP_PED_APPAREL_VARIANT_PROP_COUNT(Global_2883588);
			iVar12 = 0;
			while (iVar12 < iVar16)
			{
				FILES::GET_VARIANT_PROP(Global_2883588, iVar12, &iVar13, &uVar14, &uVar15);
				if (iVar13 != 0 && iVar13 != joaat("0"))
				{
					FILES::INIT_SHOP_PED_PROP(&Var17);
					FILES::GET_SHOP_PED_PROP(iVar13, &Var17);
					if (Var17.f_3 == PED::GET_PED_PROP_INDEX(iParam0, Global_78130[1 /*14*/].f_12) && Var17.f_4 == PED::GET_PED_PROP_TEXTURE_INDEX(iParam0, Global_78130[1 /*14*/].f_12))
					{
						return 1;
					}
				}
				iVar12++;
			}
		}
	}
	else
	{
		if (Global_78130[1 /*14*/].f_3 == PED::GET_PED_DRAWABLE_VARIATION(iParam0, __LIB_0__::func_33(iParam1)) && Global_78130[1 /*14*/].f_4 == PED::GET_PED_TEXTURE_VARIATION(iParam0, __LIB_0__::func_33(iParam1)))
		{
			return 1;
		}
		if (iParam1 == 4)
		{
			Global_78129++;
			if (Global_78129 == 1)
			{
				if (__LIB_0__::func_240(iVar0, 11, __LIB_0__::func_350(iParam0, 11), -1))
				{
					if (__LIB_0__::func_353(iVar0, 4, iParam2, &uVar18))
					{
						return func_343(iParam0, 4, uVar18);
					}
				}
				else if (__LIB_0__::func_352(iVar0, 4, iParam2, &uVar18))
				{
					return func_343(iParam0, 4, uVar18);
				}
			}
			Global_78129 = (Global_78129 - 1);
		}
	}
	return 0;
}

int func_408(int iParam0, var uParam1, int iParam2)//Position - 0x31688
{
	struct<101> Var0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0) || ENTITY::IS_ENTITY_DEAD(*iParam0, false))
	{
		return 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(*uParam1))
	{
		if (__LIB_0__::func_703(iParam2, 1))
		{
			ENTITY::FREEZE_ENTITY_POSITION(*uParam1, true);
		}
		if (!ENTITY::IS_ENTITY_DEAD(*uParam1, false))
		{
			ENTITY::SET_ENTITY_COORDS_NO_OFFSET(*uParam1, ENTITY::GET_ENTITY_COORDS(*iParam0, true), false, false, true);
			ENTITY::SET_ENTITY_ROTATION(*uParam1, ENTITY::GET_ENTITY_ROTATION(*iParam0, 2), 2, true);
		}
		if (__LIB_0__::func_703(iParam2, 2))
		{
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(*uParam1, 5f);
		}
		if (__LIB_0__::func_703(iParam2, 4))
		{
			if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_12) && !ENTITY::IS_ENTITY_DEAD(uParam1->f_12, false))
			{
				VEHICLE::ATTACH_VEHICLE_TO_TRAILER(*uParam1, uParam1->f_12, 1f);
			}
		}
		return 1;
	}
	else if (__LIB_17__::func_829(uParam1, *iParam0, 10f, 20f, 15f, ENTITY::GET_ENTITY_HEADING(*iParam0), 0, 0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(*uParam1))
		{
			Var0.f_9 = 49;
			Var0.f_59 = 2;
			Var0.f_78 = -1;
			Var0.f_79 = -1;
			Var0.f_96 = -1;
			Var0.f_97 = 1;
			Var0.f_99 = 132;
			Var0.f_100 = -1;
			__LIB_9__::func_494(*iParam0, &Var0);
			__LIB_16__::func_187(*uParam1, &Var0, 1, 1, 0);
			__LIB_1__::func_495(*iParam0, uParam1);
			ENTITY::SET_ENTITY_COLLISION(*uParam1, false, false);
			ENTITY::SET_ENTITY_VISIBLE(*uParam1, false, false);
			ENTITY::SET_ENTITY_INVINCIBLE(*uParam1, true);
			VEHICLE::SET_VEHICLE_CAN_BE_VISIBLY_DAMAGED(*uParam1, false);
			iVar1 = ENTITY::GET_ENTITY_MODEL(*uParam1);
			if (((((!VEHICLE::IS_THIS_MODEL_A_BIKE(iVar1) && !VEHICLE::IS_THIS_MODEL_A_BICYCLE(iVar1)) && !VEHICLE::IS_THIS_MODEL_A_BOAT(iVar1)) && !__LIB_0__::func_867(iVar1)) && !iVar1 == joaat("oppressor")) && !iVar1 == joaat("kosatka"))
			{
				VEHICLE::SET_VEHICLE_CAN_BREAK(*uParam1, false);
			}
			VEHICLE::GET_VEHICLE_LIGHTS_STATE(*iParam0, &iVar2, &iVar3);
			if (iVar2 != 0)
			{
				VEHICLE::SET_VEHICLE_LIGHTS(*uParam1, 2);
			}
			if (iVar3 != 0)
			{
				VEHICLE::SET_VEHICLE_FULLBEAM(*uParam1, true);
			}
			VEHICLE::SET_VEHICLE_ENGINE_ON(*uParam1, true, true, false);
			if (!__LIB_0__::func_703(iParam2, 32))
			{
				func_324(iParam0, uParam1, &(uParam1->f_1), __LIB_0__::func_703(iParam2, 16), __LIB_0__::func_703(iParam2, 128), __LIB_0__::func_703(iParam2, 64), !__LIB_0__::func_703(iParam2, 256), 0, 1);
			}
			if (__LIB_0__::func_703(iParam2, 4))
			{
				__LIB_32__::func_225(iParam0, &(uParam1->f_12));
				if (__LIB_0__::func_703(iParam2, 8))
				{
					iVar4 = 0;
					while (iVar4 <= 7)
					{
						if (VEHICLE::IS_VEHICLE_TYRE_BURST(*uParam1, 0, false))
						{
							VEHICLE::SET_VEHICLE_TYRE_FIXED(*uParam1, iVar4);
						}
						iVar4++;
					}
				}
			}
			if (__LIB_0__::func_703(iParam2, 8))
			{
				iVar5 = 0;
				while (iVar5 <= 7)
				{
					if (VEHICLE::IS_VEHICLE_TYRE_BURST(*uParam1, 0, false))
					{
						VEHICLE::SET_VEHICLE_TYRE_FIXED(*uParam1, iVar5);
					}
					iVar5++;
				}
			}
		}
	}
	return 0;
}

void func_494(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4)//Position - 0x343D3
{
	bool bVar0;
	int iVar1;
	int iVar2;
	struct<13> Var3;
	int iVar4;
	if (__LIB_5__::func_423(iParam0))
	{
		if (*uParam3 != 1 && *uParam3 != 2)
		{
			HUD::SET_BLIP_ROUTE(*uParam1, true);
			HUD::SET_BLIP_SCALE(*uParam1, 1.4f);
			HUD::SET_BLIP_FLASH_TIMER(*uParam1, 7000);
			HUD::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam1, "BLIP_826" /* GXT: Agency */);
			*uParam3 = 1;
			return;
		}
		else if (*uParam3 == 1)
		{
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
			{
				HUD::SET_BLIP_ROUTE(*uParam1, false);
				*uParam3 = 2;
			}
		}
		else if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
		{
			HUD::SET_BLIP_ROUTE(*uParam1, true);
			*uParam3 = 1;
		}
	}
	else
	{
		if (*uParam3 == 1)
		{
			HUD::SET_BLIP_ROUTE(*uParam1, false);
			HUD::SET_BLIP_SCALE(*uParam1, 1f);
			*uParam3 = 0;
		}
		bVar0 = false;
		if (!__LIB_3__::func_649(PLAYER::PLAYER_ID(), __LIB_3__::func_650(iParam0)) && __LIB_3__::func_649(__LIB_0__::func_797(), __LIB_3__::func_650(iParam0)))
		{
			iVar2 = 0;
			while (iVar2 < 32)
			{
				iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar2);
				if (__LIB_1__::func_693(iVar1, 1, 1) && iVar1 != PLAYER::PLAYER_ID())
				{
					if (__LIB_3__::func_649(iVar1, __LIB_3__::func_650(iParam0)))
					{
						Var3 = { __LIB_1__::func_696(iVar1) };
						if (__LIB_0__::func_800(Var3))
						{
							if (NETWORK::NETWORK_IS_FRIEND(&Var3))
							{
								iVar4 = joaat("FHQ_FRIEND");
								if (iVar4 != *uParam4)
								{
									*uParam4 = iVar4;
									HUD::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam1, "FHQ_FRIEND" /* GXT: Friend's Agency */);
								}
								bVar0 = true;
							}
							else
							{
								iVar2++;
							}
							if (!bVar0 && *uParam4 == joaat("FHQ_FRIEND"))
							{
								*uParam4 = joaat("BLIP_826");
								HUD::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam1, "BLIP_826" /* GXT: Agency */);
							}
						}
Vector3 func_495(int iParam0)//Position - 0x34556
{
	switch (iParam0)
	{
		case 155:
			return 388.3036f, -74.6683f, 67.1805f;
			break;
		case 156:
			return -1016.5347f, -413.186f, 38.6161f;
			break;
		case 157:
			return -589.4908f, -707.4646f, 35.2844f;
			break;
		case 158:
			return -1039.0834f, -756.4792f, 18.8395f;
			break;
	}
	return 0f, 0f, 0f;
}

void func_546(int iParam0, int iParam1)//Position - 0x3B41C
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	struct<3> Var3;
	iVar2 = __LIB_3__::func_616();
	Var3 = { __LIB_3__::func_681(iParam0, iVar2) };
	if (__LIB_6__::func_934(PLAYER::PLAYER_ID(), iParam0))
	{
		if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
		{
			Var3 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		}
		func_557(iParam0, Var3, &bVar0, &bVar1, 1, 0);
		if (bVar1)
		{
			__LIB_5__::func_189(iParam1, 1, 1);
		}
		else
		{
			__LIB_5__::func_189(iParam1, 1, 0);
		}
		if (bVar0)
		{
			__LIB_5__::func_189(iParam1, 2, 1);
		}
		else
		{
			__LIB_5__::func_189(iParam1, 2, 0);
		}
		if (!Global_2667225.f_2680 && !BitTest(Global_1946250, 27))
		{
			if ((((iVar2 == 0 || iVar2 == 1) || iVar2 == 4) || iVar2 == 5) || iVar2 == 6)
			{
				__LIB_3__::func_664(0);
			}
			else
			{
				__LIB_3__::func_664(1);
			}
		}
		if (__LIB_3__::func_661(0, iParam1))
		{
			__LIB_7__::func_49(iParam0, -1);
		}
		else if (__LIB_3__::func_661(1, iParam1))
		{
			if (bVar1)
			{
				__LIB_7__::func_831(PLAYER::PLAYER_ID(), iParam0, Var3, 1, 0, 0, 0, -1, -1, __LIB_0__::func_509());
			}
			__LIB_7__::func_830(iParam0, __LIB_0__::func_509());
		}
		else if (__LIB_3__::func_661(2, iParam1))
		{
			if (bVar0)
			{
				__LIB_7__::func_831(PLAYER::PLAYER_ID(), iParam0, Var3, 0, 0, 1, 0, -1, -1, __LIB_0__::func_509());
			}
			__LIB_7__::func_830(iParam0, __LIB_0__::func_509());
		}
	}
	else
	{
		if (__LIB_2__::func_159(0))
		{
			if (iVar2 == 3 && __LIB_3__::func_494(__LIB_0__::func_797()) == iParam0)
			{
				__LIB_3__::func_664(1);
			}
		}
		__LIB_5__::func_189(iParam1, 1, 0);
		__LIB_5__::func_189(iParam1, 2, 0);
	}
}

void func_557(int iParam0, struct<3> Param1, int iParam2, int iParam3, bool bParam4, bool bParam5)//Position - 0x3BA7A
{
	int iVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	struct<13> Var7;
	bool bVar8;
	iVar0 = -1;
	if (__LIB_1__::func_526())
	{
		iVar0 = __LIB_3__::func_680();
	}
	fVar1 = SYSTEM::POW(SYSTEM::TO_FLOAT(__LIB_3__::func_679(iParam0)), 2f);
	iVar2 = PLAYER::PLAYER_ID();
	iVar3 = Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_7;
	iVar4 = 0;
	while (iVar4 < 32)
	{
		iVar5 = iVar4;
		if (iVar2 == iVar5 || !NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar5))
		{
		}
		else
		{
			iVar6 = PLAYER::GET_PLAYER_PED(iVar5);
			if (ENTITY::IS_ENTITY_DEAD(iVar6, false))
			{
			}
			else if (bParam5)
			{
				if (iVar3 != Global_2689235[iVar5 /*453*/].f_318.f_7)
				{
				}
				else
				{
					if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iVar6, true), Param1) <= fVar1)
					{
						Var7 = { __LIB_1__::func_696(iVar5) };
						bVar8 = false;
						if (__LIB_3__::func_678(iVar5) > -1)
						{
							if (iParam0 == 123 || iParam0 == 124)
							{
								bVar8 = true;
							}
						}
						if (bParam4 && !*iParam2)
						{
							if ((iVar0 != -1 && iVar0 == __LIB_3__::func_106(&Var7)) || NETWORK::NETWORK_IS_FRIEND(&Var7))
							{
								if (((((((((!__LIB_1__::func_907(iVar5, 1) && !__LIB_5__::func_424(iVar5)) && !PED::IS_PED_IN_ANY_VEHICLE(iVar6, true)) && !__LIB_1__::func_101(iVar6)) && !__LIB_4__::func_972(iVar5)) && !__LIB_4__::func_976(iVar5, 1)) && !((__LIB_2__::func_72(iVar5, 1) && !__LIB_3__::func_360(iVar2, iVar5)) && __LIB_0__::func_509() != 0)) && !func_558(iVar5)) && !__LIB_3__::func_171(iVar5)) && !bVar8)
								{
									*iParam2 = 1;
								}
							}
						}
						if ((((((((((!*iParam3 && __LIB_3__::func_360(PLAYER::PLAYER_ID(), iVar5)) && !__LIB_5__::func_424(iVar5)) && !PED::IS_PED_IN_ANY_VEHICLE(iVar6, true)) && !__LIB_1__::func_101(iVar6)) && !__LIB_4__::func_972(iVar5)) && !__LIB_4__::func_976(iVar5, 1)) && __LIB_1__::func_744(PLAYER::PLAYER_ID())) && !func_558(iVar5)) && !__LIB_3__::func_171(iVar5)) && !bVar8)
						{
							*iParam3 = 1;
						}
					}
					if (*iParam3 && *iParam2)
					{
					}
					else
					{
						iVar4++;
					}
				}
int func_558(bool bParam0)//Position - 0x3BCB5
{
	int iVar0;
	int iVar1;
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 0;
	}
	if (bParam0 == PLAYER::PLAYER_ID())
	{
		return Global_2788198;
	}
	else
	{
		iVar0 = PLAYER::GET_PLAYER_PED(bParam0);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			iVar1 = ENTITY::GET_ENTITY_MODEL(iVar0);
			if (iVar1 == joaat("MP_M_Freemode_01") || iVar1 == joaat("MP_F_Freemode_01"))
			{
				return 0;
			}
			else
			{
				return 1;
			}
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

void func_821(var uParam0, int iParam1)//Position - 0x4F204
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 380636/*func_1041*/;
			break;
		case 111:
			uParam0->f_35 = 380627/*func_1040*/;
			break;
		case 1:
			uParam0->f_30 = 380548/*func_1038*/;
			break;
		case 2:
			uParam0->f_31 = 379912/*func_1034*/;
			break;
		case 3:
			uParam0->f_34 = 379646/*func_1033*/;
			break;
		case 4:
			uParam0->f_12 = 379634/*func_1032*/;
			break;
		case 6:
			uParam0->f_32 = 379535/*func_1031*/;
			break;
		case 37:
			uParam0->f_18 = 379405/*func_1030*/;
			break;
		case 38:
			uParam0->f_9 = 379358/*func_1029*/;
			break;
		case 39:
			uParam0->f_11 = 379323/*func_1028*/;
			break;
		case 41:
			uParam0->f_20 = 379204/*func_1025*/;
			break;
		case 42:
			uParam0->f_10 = 379176/*func_1024*/;
			break;
		case 11:
			uParam0->f_11 = 379166/*func_1023*/;
			break;
		case 12:
			uParam0->f_33 = 377015/*func_1019*/;
			break;
		case 14:
			uParam0->f_11 = 377006/*func_1018*/;
			break;
		case 109:
			uParam0->f_56 = 374439/*func_1015*/;
			break;
		case 8:
			uParam0->f_37 = 374431/*func_1014*/;
			break;
		case 7:
			uParam0->f_36 = 374422/*func_1013*/;
			break;
		case 79:
			*uParam0 = 374413/*func_1012*/;
			break;
		case 13:
			uParam0->f_2 = 374351/*func_1011*/;
			break;
		case 15:
			uParam0->f_2 = 374270/*func_1010*/;
			break;
		case 16:
			uParam0->f_5 = 373917/*func_1009*/;
			break;
		case 108:
			uParam0->f_55 = 369484/*func_994*/;
			break;
		case 17:
			uParam0->f_17 = 368344/*func_992*/;
			break;
		case 19:
			uParam0->f_17 = 368319/*func_991*/;
			break;
		case 20:
			uParam0->f_3 = 368310/*func_990*/;
			break;
		case 21:
			uParam0->f_3 = 368179/*func_988*/;
			break;
		case 74:
			uParam0->f_53 = 368075/*func_987*/;
			break;
		case 75:
			uParam0->f_4 = 368059/*func_986*/;
			break;
		case 22:
			uParam0->f_24 = 367909/*func_985*/;
			break;
		case 23:
			uParam0->f_26 = 367901/*func_984*/;
			break;
		case 26:
			uParam0->f_38 = 360061/*func_945*/;
			break;
		case 25:
			uParam0->f_23 = 359012/*func_941*/;
			break;
		case 27:
			uParam0->f_25 = 358798/*func_938*/;
			break;
		case 28:
			uParam0->f_24 = 358760/*func_937*/;
			break;
		case 29:
			uParam0->f_28 = 358737/*func_936*/;
			break;
		case 30:
			uParam0->f_8 = 357978/*func_932*/;
			break;
		case 31:
			uParam0->f_39 = 357950/*func_931*/;
			break;
		case 43:
			uParam0->f_8 = 357836/*func_930*/;
			break;
		case 33:
			uParam0->f_40 = 357718/*func_929*/;
			break;
		case 76:
			uParam0->f_13 = 357669/*func_928*/;
			break;
		case 34:
			uParam0->f_41 = 348831/*func_927*/;
			break;
		case 36:
			uParam0->f_58 = 348783/*func_926*/;
			break;
		case 35:
			uParam0->f_42 = 337508/*func_919*/;
			break;
		case 45:
			uParam0->f_14 = 337499/*func_918*/;
			break;
		case 46:
			uParam0->f_14 = 337490/*func_917*/;
			break;
		case 110:
			uParam0->f_57 = 337482/*func_916*/;
			break;
		case 77:
			uParam0->f_13 = 337471/*func_915*/;
			break;
		case 47:
			uParam0->f_43 = 337354/*func_914*/;
			break;
		case 48:
			uParam0->f_60 = 1;
			uParam0->f_44 = 336421/*func_900*/;
			break;
		case 49:
			uParam0->f_8 = 336412/*func_899*/;
			break;
		case 50:
			*uParam0 = 336243/*func_898*/;
			break;
		case 51:
			*uParam0 = 336234/*func_897*/;
			break;
		case 52:
			uParam0->f_15 = 336223/*func_896*/;
			break;
		case 53:
			uParam0->f_13 = 336200/*func_895*/;
			break;
		case 54:
			uParam0->f_45 = 336152/*func_894*/;
			break;
		case 56:
			uParam0->f_46 = 336134/*func_893*/;
			break;
		case 57:
			uParam0->f_11 = 336092/*func_891*/;
			break;
		case 58:
			uParam0->f_13 = 336050/*func_890*/;
			break;
		case 59:
			*uParam0 = 335921/*func_888*/;
			break;
		case 60:
			*uParam0 = 335912/*func_887*/;
			break;
		case 61:
			uParam0->f_15 = 335901/*func_886*/;
			break;
		case 62:
			uParam0->f_13 = 335878/*func_885*/;
			break;
		case 63:
			uParam0->f_11 = 335869/*func_884*/;
			break;
		case 55:
			uParam0->f_45 = 335828/*func_883*/;
			break;
		case 64:
			uParam0->f_47 = 335820/*func_882*/;
			break;
		case 65:
			uParam0->f_21 = 335812/*func_881*/;
			break;
		case 66:
			uParam0->f_21 = 335541/*func_880*/;
			break;
		case 67:
			uParam0->f_21 = 335471/*func_879*/;
			break;
		case 68:
			*uParam0 = 334799/*func_877*/;
			break;
		case 69:
			*uParam0 = 334790/*func_876*/;
			break;
		case 70:
			uParam0->f_48 = 334778/*func_875*/;
			break;
		case 71:
			uParam0->f_49 = 334558/*func_874*/;
			break;
		case 107:
			uParam0->f_50 = 334546/*func_873*/;
			break;
		case 80:
			uParam0->f_7 = 334051/*func_871*/;
			break;
		case 84:
			uParam0->f_1 = 333936/*func_866*/;
			break;
		case 85:
			uParam0->f_1 = 333033/*func_864*/;
			break;
		case 87:
			uParam0->f_1 = 330404/*func_855*/;
			break;
		case 88:
			uParam0->f_1 = 330395/*func_854*/;
			break;
		case 89:
			uParam0->f_54 = 330387/*func_853*/;
			break;
		case 96:
			uParam0->f_1 = 330378/*func_852*/;
			break;
		case 97:
			uParam0->f_1 = 330369/*func_851*/;
			break;
		case 98:
			uParam0->f_1 = 330360/*func_850*/;
			break;
		case 100:
			uParam0->f_22 = 330352/*func_849*/;
			break;
		case 101:
			uParam0->f_22 = 330344/*func_848*/;
			break;
		case 112:
			uParam0->f_13 = 330309/*func_846*/;
			break;
		case 113:
			uParam0->f_3 = 330300/*func_845*/;
			break;
		case 114:
			uParam0->f_16 = 328362/*func_843*/;
			break;
		case 115:
			uParam0->f_3 = 328353/*func_842*/;
			break;
		case 116:
			*uParam0 = 328344/*func_841*/;
			break;
		case 117:
			uParam0->f_16 = 327122/*func_840*/;
			break;
		case 121:
			*uParam0 = 327040/*func_839*/;
			break;
		case 122:
			*uParam0 = 327023/*func_838*/;
			break;
		case 123:
			uParam0->f_19 = 326991/*func_836*/;
			break;
		case 78:
			uParam0->f_59 = 325775/*func_824*/;
			break;
		case 124:
			uParam0->f_1 = 325766/*func_823*/;
			break;
		case 125:
			uParam0->f_19 = 325758/*func_822*/;
			break;
	}
}

int func_864(int iParam0, var uParam1)//Position - 0x514E9
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	struct<3> Var5;
	var uVar6;
	var uVar7;
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar0 = __LIB_3__::func_616();
		iVar1 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
		}
		if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_109))
		{
			func_408(&iVar1, &(uParam1->f_109), 60);
			__LIB_3__::func_633(&(uParam1->f_109));
			VEHICLE::SET_DISABLE_MAP_COLLISION(uParam1->f_109);
			return 0;
		}
		else if (func_324(&iVar1, &(uParam1->f_109), &(uParam1->f_109.f_1), 1, 1, 0, 1, 0, 1))
		{
			VEHICLE::SET_DISABLE_MAP_COLLISION(uParam1->f_109);
		}
		else
		{
			return 0;
		}
		MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(uParam1->f_109), &(uParam1->f_189[0 /*3*/]), &(uParam1->f_189[1 /*3*/]));
		__LIB_3__::func_752(iParam0, &Var2, &Var4, &uVar6, 1, iVar0);
		__LIB_3__::func_752(iParam0, &Var3, &Var5, &uVar7, 0, iVar0);
		__LIB_6__::func_27(&(Global_1946250.f_3638), 5000, "TD Shot", Var2, Var4, uVar6, Var3, Var5, uVar7, 0.2f, 0, 1000, 0, 0, 0);
	}
	return 1;
}

void func_941(int iParam0, int iParam1)//Position - 0x57A64
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	struct<3> Var5;
	bVar2 = !BitTest(iParam1->f_2, 7);
	iVar3 = __LIB_3__::func_616();
	iVar4 = 0;
	Var5 = { __LIB_3__::func_780(iVar3) };
	func_557(iParam0, Var5, &bVar0, &bVar1, 1, 0);
	if (!bVar0 && !bVar1)
	{
		switch (iVar3)
		{
			case 12:
			case 13:
			case 14:
			case 15:
				__LIB_5__::func_189(iParam1, 0, 1);
				__LIB_5__::func_189(iParam1, 1, 0);
				__LIB_5__::func_189(iParam1, 2, 0);
				if (__LIB_3__::func_661(0, iParam1))
				{
					__LIB_3__::func_664(1);
				}
				break;
			default:
				__LIB_5__::func_189(iParam1, 0, !bVar2);
				__LIB_5__::func_189(iParam1, 1, 0);
				__LIB_5__::func_189(iParam1, 2, 0);
				__LIB_3__::func_664(0);
				MISC::SET_BIT(&(iParam1->f_2), 6);
				break;
		}
		return;
	}
	else if (__LIB_0__::func_109(PLAYER::PLAYER_ID(), iParam0))
	{
		__LIB_5__::func_189(iParam1, 0, 1);
		if (bVar1)
		{
			__LIB_5__::func_189(iParam1, 1, 1);
		}
		else
		{
			__LIB_5__::func_189(iParam1, 1, 0);
		}
		if (bVar0)
		{
			__LIB_5__::func_189(iParam1, 2, 1);
		}
		else
		{
			__LIB_5__::func_189(iParam1, 2, 0);
		}
		if ((bVar1 || bVar0) && !__LIB_3__::func_779())
		{
			__LIB_6__::func_863(iParam0, -1);
		}
		if (((iVar3 == 12 || iVar3 == 13) || iVar3 == 14) || iVar3 == 15)
		{
			iVar4 = 1;
		}
		if (__LIB_3__::func_661(0, iParam1))
		{
			__LIB_6__::func_863(iParam0, -1);
			__LIB_3__::func_664(iVar4);
		}
		else if (__LIB_3__::func_661(1, iParam1))
		{
			if (bVar1)
			{
				__LIB_7__::func_831(PLAYER::PLAYER_ID(), iParam0, Var5, 1, 0, 0, 0, -2, -1, iVar4);
			}
			__LIB_7__::func_781(iVar4, 1);
		}
		else if (__LIB_3__::func_661(2, iParam1))
		{
			if (bVar0)
			{
				__LIB_7__::func_831(PLAYER::PLAYER_ID(), iParam0, Var5, 0, 0, 1, 0, -2, -1, iVar4);
			}
			__LIB_7__::func_781(iVar4, 1);
		}
	}
	else
	{
		__LIB_3__::func_664(iVar4);
		__LIB_5__::func_189(iParam1, 1, 0);
		__LIB_5__::func_189(iParam1, 2, 0);
	}
}

void func_945(var uParam0, var uParam1)//Position - 0x57E7D
{
	int iVar0;
	iVar0 = __LIB_3__::func_785();
	if (!__LIB_5__::func_797() && iVar0 != 1)
	{
		__LIB_3__::func_784(1);
	}
	iVar0 = __LIB_3__::func_785();
	switch (iVar0)
	{
		case 0:
			__LIB_10__::func_49(uParam0, uParam1);
			break;
		case 1:
			func_946(uParam0, uParam1);
			break;
		default:
			break;
	}
}

void func_946(var uParam0, var uParam1)//Position - 0x57ED3
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4[3];
	var uVar5[3];
	char* sVar6;
	int iVar7;
	int iVar8;
	HUD::HIDE_HELP_TEXT_THIS_FRAME();
	uParam1->f_2 = 0;
	bVar2 = __LIB_5__::func_208();
	func_557(*uParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &bVar0, &bVar1, 1, 0);
	if (!bVar0 && !bVar1)
	{
		if (bVar2 || (MISC::IS_STRING_NULL_OR_EMPTY(&(Global_23150.f_79[0 /*6*/])) || !MISC::ARE_STRINGS_EQUAL(&(Global_23150.f_79[0 /*6*/]), __LIB_5__::func_207(0))))
		{
			uParam1->f_6 = 1;
			if (__LIB_3__::func_785() == 1)
			{
				uParam1->f_8 = 1;
				uParam1->f_11 = 10;
				uParam1->f_1 = 1;
				uParam1->f_10 = 1;
				__LIB_5__::func_462();
				if (bVar2)
				{
					__LIB_3__::func_664(1);
				}
				else if (BitTest(Global_1946250.f_8, 22))
				{
					__LIB_5__::func_202(PLAYER::PLAYER_ID());
				}
			}
			return;
		}
	}
	sVar6 = __LIB_3__::func_770();
	iVar8 = 0;
	while (iVar8 < 3)
	{
		uVar5[iVar7] = __LIB_5__::func_207(iVar8);
		if (__LIB_3__::func_782(iVar8, bVar0, bVar1))
		{
			iVar4[iVar7] = iVar8;
			if (!bVar3 && !MISC::ARE_STRINGS_EQUAL(&(Global_23150.f_79[iVar7 /*6*/]), uVar5[iVar7]))
			{
				bVar3 = true;
			}
			iVar7++;
		}
		else if (!bVar3)
		{
			if (MISC::ARE_STRINGS_EQUAL(&(Global_23150.f_79[iVar7 /*6*/]), uVar5[iVar7]))
			{
				bVar3 = true;
			}
		}
		iVar8++;
	}
	if (uParam0->f_5 || bVar3)
	{
		__LIB_1__::func_602(0, 1);
		__LIB_1__::func_767("CAR_MET_EXT_T" /* GXT: LS Car Meet */);
		__LIB_3__::func_566(1, sVar6, sVar6);
		__LIB_5__::func_270();
		iVar8 = 0;
		while (iVar8 < iVar7)
		{
			__LIB_10__::func_18(iVar8, uVar5[iVar8], 0, 1, 0, 0, 0);
			iVar8++;
		}
		__LIB_7__::func_733(0, 1, 1);
	}
	else if (uParam0->f_2)
	{
		uParam1->f_6 = 1;
		if (__LIB_3__::func_785() == 1)
		{
			uParam1->f_8 = 1;
			uParam1->f_11 = 10;
			uParam1->f_1 = 1;
			uParam1->f_10 = 1;
			__LIB_5__::func_462();
			if (bVar2)
			{
				__LIB_3__::func_664(1);
			}
			else if (BitTest(Global_1946250.f_8, 22))
			{
				__LIB_5__::func_202(PLAYER::PLAYER_ID());
			}
			if (iVar4[uParam0->f_4] != 0)
			{
				__LIB_8__::func_958(iVar4[uParam0->f_4], 154);
			}
		}
	}
	else if (uParam0->f_3)
	{
		uParam1->f_4 = !__LIB_5__::func_797();
		__LIB_5__::func_462();
		MISC::CLEAR_BIT(&(Global_1946250.f_8), 22);
	}
}

void func_1042(var uParam0, int iParam1)//Position - 0x5CEE5
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 421058/*func_1214*/;
			break;
		case 111:
			uParam0->f_35 = 421044/*func_1213*/;
			break;
		case 1:
			uParam0->f_30 = 420953/*func_1211*/;
			break;
		case 2:
			uParam0->f_31 = 420734/*func_1208*/;
			break;
		case 3:
			uParam0->f_34 = 420577/*func_1207*/;
			break;
		case 4:
			uParam0->f_12 = 420565/*func_1206*/;
			break;
		case 5:
			uParam0->f_11 = 420555/*func_1205*/;
			break;
		case 37:
			uParam0->f_18 = 420441/*func_1204*/;
			break;
		case 38:
			uParam0->f_9 = 420394/*func_1203*/;
			break;
		case 42:
			uParam0->f_10 = 420366/*func_1202*/;
			break;
		case 6:
			uParam0->f_32 = 420278/*func_1201*/;
			break;
		case 11:
			uParam0->f_11 = 420269/*func_1200*/;
			break;
		case 12:
			uParam0->f_33 = 418524/*func_1195*/;
			break;
		case 14:
			uParam0->f_11 = 418515/*func_1194*/;
			break;
		case 109:
			uParam0->f_56 = 414482/*func_1191*/;
			break;
		case 8:
			uParam0->f_37 = 414005/*func_1190*/;
			break;
		case 7:
			uParam0->f_36 = 413911/*func_1189*/;
			break;
		case 79:
			*uParam0 = 413902/*func_1188*/;
			break;
		case 13:
			uParam0->f_2 = 413840/*func_1187*/;
			break;
		case 15:
			uParam0->f_2 = 413759/*func_1186*/;
			break;
		case 16:
			uParam0->f_5 = 412861/*func_1184*/;
			break;
		case 108:
			uParam0->f_55 = 409582/*func_1172*/;
			break;
		case 17:
			uParam0->f_17 = 408340/*func_1169*/;
			break;
		case 19:
			uParam0->f_17 = 408315/*func_1168*/;
			break;
		case 20:
			uParam0->f_3 = 408101/*func_1166*/;
			break;
		case 21:
			uParam0->f_3 = 408037/*func_1165*/;
			break;
		case 74:
			uParam0->f_53 = 407933/*func_1164*/;
			break;
		case 75:
			uParam0->f_4 = 407917/*func_1163*/;
			break;
		case 22:
			uParam0->f_24 = 407815/*func_1162*/;
			break;
		case 23:
			uParam0->f_26 = 407807/*func_1161*/;
			break;
		case 26:
			uParam0->f_38 = 403795/*func_1141*/;
			break;
		case 25:
			uParam0->f_23 = 403345/*func_1138*/;
			break;
		case 27:
			uParam0->f_25 = 403337/*func_1137*/;
			break;
		case 28:
			uParam0->f_24 = 403329/*func_1136*/;
			break;
		case 30:
			uParam0->f_8 = 402692/*func_1131*/;
			break;
		case 31:
			uParam0->f_39 = 402562/*func_1130*/;
			break;
		case 33:
			uParam0->f_40 = 401688/*func_1121*/;
			break;
		case 32:
			*uParam0 = 401485/*func_1117*/;
			break;
		case 76:
			uParam0->f_13 = 401332/*func_1116*/;
			break;
		case 34:
			uParam0->f_41 = 399720/*func_1112*/;
			break;
		case 36:
			uParam0->f_58 = 399675/*func_1111*/;
			break;
		case 35:
			uParam0->f_42 = 390637/*func_1108*/;
			break;
		case 45:
			uParam0->f_14 = 390628/*func_1107*/;
			break;
		case 46:
			uParam0->f_14 = 390619/*func_1106*/;
			break;
		case 110:
			uParam0->f_57 = 390611/*func_1105*/;
			break;
		case 77:
			uParam0->f_13 = 390588/*func_1104*/;
			break;
		case 47:
			uParam0->f_43 = 390539/*func_1103*/;
			break;
		case 48:
			uParam0->f_60 = 1;
			uParam0->f_44 = 390402/*func_1101*/;
			break;
		case 49:
			uParam0->f_8 = 390384/*func_1100*/;
			break;
		case 50:
			*uParam0 = 389552/*func_1096*/;
			break;
		case 51:
			*uParam0 = 389450/*func_1095*/;
			break;
		case 52:
			uParam0->f_15 = 389439/*func_1094*/;
			break;
		case 53:
			uParam0->f_13 = 389286/*func_1093*/;
			break;
		case 54:
			uParam0->f_45 = 389053/*func_1092*/;
			break;
		case 56:
			uParam0->f_46 = 389044/*func_1091*/;
			break;
		case 57:
			uParam0->f_11 = 388631/*func_1087*/;
			break;
		case 58:
			uParam0->f_13 = 388478/*func_1086*/;
			break;
		case 59:
			*uParam0 = 388469/*func_1085*/;
			break;
		case 60:
			*uParam0 = 388460/*func_1084*/;
			break;
		case 61:
			uParam0->f_15 = 388449/*func_1083*/;
			break;
		case 62:
			uParam0->f_13 = 388438/*func_1082*/;
			break;
		case 63:
			uParam0->f_11 = 388429/*func_1081*/;
			break;
		case 64:
			uParam0->f_47 = 388421/*func_1080*/;
			break;
		case 65:
			uParam0->f_21 = 387365/*func_1077*/;
			break;
		case 66:
			uParam0->f_21 = 387145/*func_1076*/;
			break;
		case 67:
			uParam0->f_21 = 387070/*func_1075*/;
			break;
		case 68:
			*uParam0 = 386381/*func_1074*/;
			break;
		case 69:
			*uParam0 = 386372/*func_1073*/;
			break;
		case 70:
			uParam0->f_48 = 386360/*func_1072*/;
			break;
		case 71:
			uParam0->f_49 = 386268/*func_1071*/;
			break;
		case 107:
			uParam0->f_50 = 386256/*func_1070*/;
			break;
		case 80:
			uParam0->f_7 = 385889/*func_1069*/;
			break;
		case 84:
			uParam0->f_1 = 385880/*func_1068*/;
			break;
		case 85:
			uParam0->f_1 = 385088/*func_1066*/;
			break;
		case 87:
			uParam0->f_1 = 383710/*func_1059*/;
			break;
		case 88:
			uParam0->f_1 = 383701/*func_1058*/;
			break;
		case 89:
			uParam0->f_54 = 383693/*func_1057*/;
			break;
		case 96:
			uParam0->f_1 = 383684/*func_1056*/;
			break;
		case 97:
			uParam0->f_1 = 383675/*func_1055*/;
			break;
		case 98:
			uParam0->f_1 = 383666/*func_1054*/;
			break;
		case 100:
			uParam0->f_22 = 383658/*func_1053*/;
			break;
		case 101:
			uParam0->f_22 = 383650/*func_1052*/;
			break;
		case 112:
			uParam0->f_13 = 383638/*func_1051*/;
			break;
		case 113:
			uParam0->f_3 = 383629/*func_1050*/;
			break;
		case 114:
			uParam0->f_16 = 328362/*func_843*/;
			break;
		case 115:
			uParam0->f_3 = 383620/*func_1049*/;
			break;
		case 116:
			*uParam0 = 383611/*func_1048*/;
			break;
		case 117:
			uParam0->f_16 = 382391/*func_1047*/;
			break;
		case 78:
			uParam0->f_59 = 382219/*func_1045*/;
			break;
		case 124:
			uParam0->f_1 = 382210/*func_1044*/;
			break;
		case 125:
			uParam0->f_19 = 382202/*func_1043*/;
			break;
	}
}

int func_1066(int iParam0, var uParam1)//Position - 0x5E040
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	var uVar5;
	var uVar6;
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
		}
		if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_109))
		{
			func_408(&iVar0, &(uParam1->f_109), 60);
			__LIB_3__::func_633(&(uParam1->f_109));
			VEHICLE::SET_DISABLE_MAP_COLLISION(uParam1->f_109);
			return 0;
		}
		else if (func_324(&iVar0, &(uParam1->f_109), &(uParam1->f_109.f_1), 1, 1, 0, 1, 0, 1))
		{
			VEHICLE::SET_DISABLE_MAP_COLLISION(uParam1->f_109);
		}
		else
		{
			return 0;
		}
		MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(uParam1->f_109), &(uParam1->f_189[0 /*3*/]), &(uParam1->f_189[1 /*3*/]));
		__LIB_3__::func_805(iParam0, &Var1, &Var3, &uVar5, 1);
		__LIB_3__::func_805(iParam0, &Var2, &Var4, &uVar6, 0);
		__LIB_6__::func_27(&(Global_1946250.f_3638), 5000, "TD Shot", Var1, Var3, uVar5, Var2, Var4, uVar6, 0.2f, 0, 1000, 0, 0, 0);
	}
	return 1;
}

void func_1092(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4)//Position - 0x5EFBD
{
	bool bVar0;
	int iVar1;
	int iVar2;
	struct<13> Var3;
	int iVar4;
	bVar0 = false;
	if (!__LIB_3__::func_809(PLAYER::PLAYER_ID(), __LIB_3__::func_810(iParam0)) && !__LIB_3__::func_809(__LIB_0__::func_797(), __LIB_3__::func_810(iParam0)))
	{
		iVar2 = 0;
		while (iVar2 < 32)
		{
			iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar2);
			if (__LIB_1__::func_693(iVar1, 1, 1) && iVar1 != PLAYER::PLAYER_ID())
			{
				if (__LIB_3__::func_809(iVar1, __LIB_3__::func_810(iParam0)) && __LIB_1__::func_688(iVar1))
				{
					Var3 = { __LIB_1__::func_696(iVar1) };
					if (__LIB_0__::func_800(Var3))
					{
						if (NETWORK::NETWORK_IS_FRIEND(&Var3))
						{
							iVar4 = joaat("AUT_SHP_FRIEND");
							if (iVar4 != *uParam4)
							{
								*uParam4 = iVar4;
								HUD::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam1, "AUT_SHP_FRIEND" /* GXT: Friend's Auto Shop */);
							}
							bVar0 = true;
						}
						else
						{
							iVar2++;
						}
						if (!bVar0 && *uParam4 == joaat("AUT_SHP_FRIEND"))
						{
							*uParam4 = joaat("AUT_SHP_EXT_T");
							HUD::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam1, "AUT_SHP_EXT_T" /* GXT: Auto Shop */);
						}
					}
Vector3 func_1093(int iParam0)//Position - 0x5F0A6
{
	switch (iParam0)
	{
		case 149:
			return 759.8774f, -677.6455f, 27.8356f;
			break;
		case 150:
			return -147.1386f, -1341.7018f, 28.9145f;
			break;
		case 151:
			return -171.7504f, -33.8705f, 51.256f;
			break;
		case 152:
			return 233.9541f, -1873.8497f, 25.5283f;
			break;
		case 153:
			return 489.2497f, -894.8347f, 24.7408f;
			break;
	}
	return 0f, 0f, 0f;
}

void func_1138(int iParam0, int iParam1)//Position - 0x62791
{
	bool bVar0;
	bool bVar1;
	struct<3> Var2;
	Var2 = { __LIB_3__::func_830(iParam0) };
	if (__LIB_6__::func_944(PLAYER::PLAYER_ID(), iParam0))
	{
		if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
		{
			Var2 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		}
		func_557(iParam0, Var2, &bVar0, &bVar1, 1, 0);
		if (bVar1)
		{
			__LIB_5__::func_189(iParam1, 1, 1);
		}
		else
		{
			__LIB_5__::func_189(iParam1, 1, 0);
		}
		if (bVar0)
		{
			__LIB_5__::func_189(iParam1, 2, 1);
		}
		else
		{
			__LIB_5__::func_189(iParam1, 2, 0);
		}
		if (__LIB_3__::func_661(0, iParam1))
		{
			__LIB_7__::func_8(iParam0, -1);
		}
		else if (__LIB_3__::func_661(1, iParam1))
		{
			if (bVar1)
			{
				__LIB_7__::func_831(PLAYER::PLAYER_ID(), iParam0, Var2, 1, 0, 0, 0, -1, -1, -1);
			}
			__LIB_7__::func_784(iParam0);
		}
		else if (__LIB_3__::func_661(2, iParam1))
		{
			if (bVar0)
			{
				__LIB_7__::func_831(PLAYER::PLAYER_ID(), iParam0, Var2, 0, 0, 1, 0, -1, -1, -1);
			}
			__LIB_7__::func_784(iParam0);
		}
	}
	else
	{
		__LIB_5__::func_189(iParam1, 1, 0);
		__LIB_5__::func_189(iParam1, 2, 0);
	}
}

void func_1141(var uParam0, var uParam1)//Position - 0x62953
{
	if (__LIB_3__::func_616() == 2 || __LIB_3__::func_616() == 1)
	{
		func_1144(uParam0, uParam1);
	}
	else if (__LIB_2__::func_72(PLAYER::PLAYER_ID(), 0) && __LIB_3__::func_809(__LIB_2__::func_39(PLAYER::PLAYER_ID()), __LIB_3__::func_810(*uParam0)))
	{
		__LIB_5__::func_218(uParam0, uParam1);
	}
	else
	{
		__LIB_3__::func_831(uParam1);
	}
}

void func_1144(var uParam0, var uParam1)//Position - 0x62A32
{
	int iVar0;
	iVar0 = __LIB_3__::func_785();
	switch (iVar0)
	{
		case 0:
			__LIB_10__::func_51(uParam0, uParam1);
			break;
		case 1:
			func_1158(uParam0, uParam1);
			break;
		case 2:
			__LIB_10__::func_758(uParam0, uParam1);
			break;
		default:
			break;
	}
}

void func_1158(var uParam0, var uParam1)//Position - 0x63630
{
	var uVar0;
	var uVar1;
	bool bVar2;
	HUD::HIDE_HELP_TEXT_THIS_FRAME();
	func_557(*uParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &uVar0, &uVar1, 1, 0);
	bVar2 = (uVar0 || uVar1);
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_10 = PLAYER::PLAYER_ID();
		bVar2 = false;
	}
	if (!bVar2)
	{
		uParam1->f_8 = 1;
		uParam1->f_6 = 1;
		uParam1->f_1 = 0;
		uParam1->f_9 = 1;
		*uParam1 = 1;
		uParam1->f_11 = 10;
		MISC::SET_BIT(&(Global_1946250.f_3), 9);
		__LIB_5__::func_462();
		return;
	}
	if (uParam0->f_3 && !uParam0->f_5)
	{
		__LIB_5__::func_462();
		if (__LIB_8__::func_922(*uParam0))
		{
			*uParam1 = 1;
		}
		else
		{
			uParam1->f_4 = 1;
		}
	}
	else
	{
		uParam1->f_2 = 1;
		if (uParam0->f_5)
		{
			uParam1->f_3 = 1;
			__LIB_1__::func_767("AUTOS_PROP_ET" /* GXT: AUTO SHOP */);
		}
		else if (uParam0->f_2)
		{
			uParam1->f_5 = 1;
			uParam1->f_1 = 0;
			MISC::SET_BIT(&(Global_1946250.f_3), 9);
			__LIB_7__::func_8(*uParam0, -1);
			__LIB_5__::func_462();
		}
	}
}

void func_1191(int iParam0, var uParam1, int iParam2)//Position - 0x65312
{
	var uVar0;
	var uVar1;
	bool bVar2;
	__LIB_3__::func_836(iParam0, &(uParam1->f_22.f_59), &(uParam1->f_22.f_62), &(uParam1->f_22.f_65), &(uParam1->f_22.f_66), 0);
	switch (iParam0)
	{
		case 149:
			switch (iParam2)
			{
				case 0:
				case 2:
					if (__LIB_5__::func_719(iParam0))
					{
						uParam1->f_22.f_13 = { 759.2274f, -676.1144f, 28.4832f };
						uParam1->f_22.f_16 = { 1.6526f, -0.0281f, 163.8247f };
						uParam1->f_22.f_20 = { 759.1586f, -676.3341f, 28.4767f };
						uParam1->f_22.f_23 = { -1.2492f, -0.0281f, 162.718f };
						uParam1->f_22.f_28 = { 758.865f, -677.805f, 27.851f };
						uParam1->f_22.f_31 = { 0f, 0f, -169.56f };
						uParam1->f_22.f_69[0] = "";
						uParam1->f_22.f_69[1] = "";
						uParam1->f_22.f_72[0] = 0.251f;
						uParam1->f_22.f_72[1] = 0.35f;
						uParam1->f_22.f_75 = "GTAO_SCRIPT_DOORS_SOUNDS";
						uParam1->f_22.f_80 = "GTAO_Script_Doors_Faded_Screen_Sounds";
						uParam1->f_22.f_79 = "Garage_Door_Close";
						uParam1->f_22.f_88 = "GTAO_Script_Doors_Faded_Screen_Sounds";
						uParam1->f_22.f_87 = "Garage_Door_Close";
						uParam1->f_22.f_4 = "";
						uParam1->f_22.f_6 = "";
						uParam1->f_22.f_19 = 35.9236f;
						uParam1->f_22.f_40 = 0.1f;
						uParam1->f_22.f_26 = 35.9236f;
						uParam1->f_22.f_3 = "anim@apt_trans@garage";
						uParam1->f_22.f_5 = "gar_open_1_left";
						uParam1->f_22.f_34 = 0.1f;
						uParam1->f_22.f_35 = 0.45f;
						uParam1->f_22.f_37 = 2000;
					}
					else
					{
						uParam1->f_22.f_13 = { 762.6814f, -670.9703f, 29.2607f };
						uParam1->f_22.f_16 = { -2.2932f, 0f, 155.9849f };
						uParam1->f_22.f_19 = 49.6936f;
						uParam1->f_22.f_20 = { 761.751f, -671.6803f, 29.2137f };
						uParam1->f_22.f_23 = { -2.2932f, 0f, 142.145f };
						uParam1->f_22.f_26 = 46.912f;
						uParam1->f_22.f_3 = "anim@apt_trans@buzzer";
						uParam1->f_22.f_28 = { 758.817f, -675.19f, 27.859f };
						uParam1->f_22.f_31 = { 0f, 0f, 86.76f };
						uParam1->f_22.f_5 = "buzz_short";
						uParam1->f_22.f_34 = 0.2f;
						uParam1->f_22.f_35 = 0.8f;
						uParam1->f_22.f_69[0] = "DOOR_BUZZ_ONESHOT_MASTER";
						uParam1->f_22.f_72[0] = 0.353f;
						uParam1->f_22.f_75 = "GTAO_APT_DOOR_DOWNSTAIRS_GLASS_SOUNDS";
						uParam1->f_22.f_80 = "";
						uParam1->f_22.f_79 = "";
						uParam1->f_22.f_88 = "";
						uParam1->f_22.f_87 = "";
						if (__LIB_0__::func_338(PLAYER::PLAYER_ID()))
						{
							uParam1->f_22.f_4 = "amb@world_human_hang_out_street@female_arms_crossed@enter";
							uParam1->f_22.f_6 = "enter";
						}
						else
						{
							uParam1->f_22.f_4 = "amb@world_human_hang_out_street@male_c@enter";
							uParam1->f_22.f_6 = "enter";
						}
					}
					break;
			}
			break;
		case 150:
			switch (iParam2)
			{
				case 0:
				case 2:
					if (__LIB_5__::func_719(iParam0))
					{
						uParam1->f_22.f_13 = { -148.8068f, -1342.0701f, 30.7246f };
						uParam1->f_22.f_16 = { -34.2644f, -0.0028f, -60.8442f };
						uParam1->f_22.f_20 = { -148.5539f, -1341.93f, 30.5286f };
						uParam1->f_22.f_23 = { -29.8713f, -0.0028f, -66.758f };
						uParam1->f_22.f_28 = { -147.294f, -1341.401f, 29.079f };
						uParam1->f_22.f_31 = { 0f, 0f, 90f };
						uParam1->f_22.f_69[0] = "";
						uParam1->f_22.f_69[1] = "";
						uParam1->f_22.f_72[0] = 0.251f;
						uParam1->f_22.f_72[1] = 0.35f;
						uParam1->f_22.f_75 = "GTAO_SCRIPT_DOORS_SOUNDS";
						uParam1->f_22.f_80 = "GTAO_Script_Doors_Faded_Screen_Sounds";
						uParam1->f_22.f_79 = "Garage_Door_Close";
						uParam1->f_22.f_88 = "GTAO_Script_Doors_Faded_Screen_Sounds";
						uParam1->f_22.f_87 = "Garage_Door_Close";
						uParam1->f_22.f_4 = "";
						uParam1->f_22.f_6 = "";
						uParam1->f_22.f_19 = 32.2852f;
						uParam1->f_22.f_40 = 0.1f;
						uParam1->f_22.f_26 = 32.2852f;
						uParam1->f_22.f_3 = "anim@apt_trans@garage";
						uParam1->f_22.f_5 = "gar_open_1_right";
						uParam1->f_22.f_34 = 0.1f;
						uParam1->f_22.f_35 = 0.45f;
						uParam1->f_22.f_37 = 2000;
					}
					else
					{
						uParam1->f_22.f_13 = { -141.0062f, -1343.925f, 30.1565f };
						uParam1->f_22.f_16 = { -1.2453f, 0f, 70.4482f };
						uParam1->f_22.f_19 = 49.6936f;
						uParam1->f_22.f_20 = { -141.8038f, -1342.8387f, 30.1565f };
						uParam1->f_22.f_23 = { -1.4974f, 0f, 68.1876f };
						uParam1->f_22.f_26 = 46.912f;
						uParam1->f_22.f_3 = "anim@apt_trans@buzzer";
						uParam1->f_22.f_28 = { -144.657f, -1340.95f, 29.104f };
						uParam1->f_22.f_31 = { 0f, 0f, 0f };
						uParam1->f_22.f_5 = "buzz_short";
						uParam1->f_22.f_34 = 0.2f;
						uParam1->f_22.f_35 = 0.8f;
						uParam1->f_22.f_69[0] = "DOOR_BUZZ_ONESHOT_MASTER";
						uParam1->f_22.f_72[0] = 0.353f;
						uParam1->f_22.f_75 = "GTAO_APT_DOOR_DOWNSTAIRS_GLASS_SOUNDS";
						uParam1->f_22.f_80 = "";
						uParam1->f_22.f_79 = "";
						uParam1->f_22.f_88 = "";
						uParam1->f_22.f_87 = "";
						if (__LIB_0__::func_338(PLAYER::PLAYER_ID()))
						{
							uParam1->f_22.f_4 = "amb@world_human_hang_out_street@female_arms_crossed@enter";
							uParam1->f_22.f_6 = "enter";
						}
						else
						{
							uParam1->f_22.f_4 = "amb@world_human_hang_out_street@male_c@enter";
							uParam1->f_22.f_6 = "enter";
						}
					}
					break;
			}
			break;
		case 151:
			switch (iParam2)
			{
				case 0:
				case 2:
					if (__LIB_5__::func_719(iParam0))
					{
						uParam1->f_22.f_13 = { -171.5194f, -36.1929f, 51.856f };
						uParam1->f_22.f_16 = { -3.0092f, -0.0019f, 21.9527f };
						uParam1->f_22.f_20 = { -171.757f, -35.6036f, 51.825f };
						uParam1->f_22.f_23 = { 0.3106f, -0.0019f, 21.9527f };
						uParam1->f_22.f_28 = { -172.462f, -33.763f, 51.213f };
						uParam1->f_22.f_31 = { 0f, 0f, 166.32f };
						uParam1->f_22.f_69[0] = "";
						uParam1->f_22.f_69[1] = "";
						uParam1->f_22.f_72[0] = 0.251f;
						uParam1->f_22.f_72[1] = 0.35f;
						uParam1->f_22.f_75 = "GTAO_SCRIPT_DOORS_SOUNDS";
						uParam1->f_22.f_80 = "GTAO_Script_Doors_Faded_Screen_Sounds";
						uParam1->f_22.f_79 = "Garage_Door_Close";
						uParam1->f_22.f_88 = "GTAO_Script_Doors_Faded_Screen_Sounds";
						uParam1->f_22.f_87 = "Garage_Door_Close";
						uParam1->f_22.f_4 = "";
						uParam1->f_22.f_6 = "";
						uParam1->f_22.f_19 = 27.0608f;
						uParam1->f_22.f_40 = 0.1f;
						uParam1->f_22.f_26 = 27.0608f;
						uParam1->f_22.f_3 = "anim@apt_trans@garage";
						uParam1->f_22.f_5 = "gar_open_1_right";
						uParam1->f_22.f_34 = 0.1f;
						uParam1->f_22.f_35 = 0.45f;
						uParam1->f_22.f_37 = 2000;
					}
					else
					{
						uParam1->f_22.f_13 = { -168.9393f, -35.3119f, 53.2555f };
						uParam1->f_22.f_16 = { -6.5936f, 0f, 28.147f };
						uParam1->f_22.f_19 = 49.6936f;
						uParam1->f_22.f_20 = { -169.9362f, -34.4523f, 53.1079f };
						uParam1->f_22.f_23 = { -5.7999f, 0f, 21.853f };
						uParam1->f_22.f_26 = 46.912f;
						uParam1->f_22.f_3 = "anim@apt_trans@buzzer";
						uParam1->f_22.f_28 = { -171.681f, -31.278f, 51.263f };
						uParam1->f_22.f_31 = { 0f, 0f, 66.96f };
						uParam1->f_22.f_5 = "buzz_short";
						uParam1->f_22.f_34 = 0.2f;
						uParam1->f_22.f_35 = 0.8f;
						uParam1->f_22.f_69[0] = "DOOR_BUZZ_ONESHOT_MASTER";
						uParam1->f_22.f_72[0] = 0.353f;
						uParam1->f_22.f_75 = "GTAO_APT_DOOR_DOWNSTAIRS_GLASS_SOUNDS";
						uParam1->f_22.f_80 = "";
						uParam1->f_22.f_79 = "";
						uParam1->f_22.f_88 = "";
						uParam1->f_22.f_87 = "";
						if (__LIB_0__::func_338(PLAYER::PLAYER_ID()))
						{
							uParam1->f_22.f_4 = "amb@world_human_hang_out_street@female_arms_crossed@enter";
							uParam1->f_22.f_6 = "enter";
						}
						else
						{
							uParam1->f_22.f_4 = "amb@world_human_hang_out_street@male_c@enter";
							uParam1->f_22.f_6 = "enter";
						}
					}
					break;
			}
			break;
		case 152:
			switch (iParam2)
			{
				case 0:
				case 2:
					if (__LIB_5__::func_719(iParam0))
					{
						uParam1->f_22.f_13 = { 232.6328f, -1874.2069f, 26.443f };
						uParam1->f_22.f_16 = { -21.7924f, 0.0013f, -18.5176f };
						uParam1->f_22.f_20 = { 232.7041f, -1873.9943f, 26.4045f };
						uParam1->f_22.f_23 = { -8.5978f, 0.0013f, -18.5176f };
						uParam1->f_22.f_28 = { 233.075f, -1873.188f, 25.563f };
						uParam1->f_22.f_31 = { -4.32f, 0f, 167.76f };
						uParam1->f_22.f_69[0] = "";
						uParam1->f_22.f_69[1] = "";
						uParam1->f_22.f_72[0] = 0.251f;
						uParam1->f_22.f_72[1] = 0.35f;
						uParam1->f_22.f_75 = "GTAO_SCRIPT_DOORS_SOUNDS";
						uParam1->f_22.f_80 = "GTAO_Script_Doors_Faded_Screen_Sounds";
						uParam1->f_22.f_79 = "Garage_Door_Close";
						uParam1->f_22.f_88 = "GTAO_Script_Doors_Faded_Screen_Sounds";
						uParam1->f_22.f_87 = "Garage_Door_Close";
						uParam1->f_22.f_4 = "";
						uParam1->f_22.f_6 = "";
						uParam1->f_22.f_19 = 35.3225f;
						uParam1->f_22.f_40 = 0.1f;
						uParam1->f_22.f_26 = 35.3225f;
						uParam1->f_22.f_3 = "anim@apt_trans@garage";
						uParam1->f_22.f_5 = "gar_open_1_left";
						uParam1->f_22.f_34 = 0.1f;
						uParam1->f_22.f_35 = 0.45f;
						uParam1->f_22.f_37 = 2000;
					}
					else
					{
						uParam1->f_22.f_13 = { 235.8221f, -1874.9221f, 26.8194f };
						uParam1->f_22.f_16 = { -3.3056f, 0f, 105.796f };
						uParam1->f_22.f_19 = 49.6936f;
						uParam1->f_22.f_20 = { 234.5172f, -1874.7244f, 26.7432f };
						uParam1->f_22.f_23 = { -3.3056f, 0f, 115.5265f };
						uParam1->f_22.f_26 = 46.912f;
						uParam1->f_22.f_3 = "anim@apt_trans@buzzer";
						uParam1->f_22.f_28 = { 231.176f, -1875.411f, 25.388f };
						uParam1->f_22.f_31 = { 0f, 0f, 44.28f };
						uParam1->f_22.f_5 = "buzz_short";
						uParam1->f_22.f_34 = 0.2f;
						uParam1->f_22.f_35 = 0.8f;
						uParam1->f_22.f_69[0] = "DOOR_BUZZ_ONESHOT_MASTER";
						uParam1->f_22.f_72[0] = 0.353f;
						uParam1->f_22.f_75 = "GTAO_APT_DOOR_DOWNSTAIRS_GLASS_SOUNDS";
						uParam1->f_22.f_80 = "";
						uParam1->f_22.f_79 = "";
						uParam1->f_22.f_88 = "";
						uParam1->f_22.f_87 = "";
						if (__LIB_0__::func_338(PLAYER::PLAYER_ID()))
						{
							uParam1->f_22.f_4 = "amb@world_human_hang_out_street@female_arms_crossed@enter";
							uParam1->f_22.f_6 = "enter";
						}
						else
						{
							uParam1->f_22.f_4 = "amb@world_human_hang_out_street@male_c@enter";
							uParam1->f_22.f_6 = "enter";
						}
					}
					break;
			}
			break;
		case 153:
			switch (iParam2)
			{
				case 0:
				case 2:
					if (__LIB_5__::func_719(iParam0))
					{
						uParam1->f_22.f_13 = { 488.4486f, -893.36f, 25.3835f };
						uParam1->f_22.f_16 = { -0.6473f, 0.0003f, 172.6925f };
						uParam1->f_22.f_20 = { 488.4122f, -893.6423f, 25.3794f };
						uParam1->f_22.f_23 = { 0.1603f, 0.0201f, 172.7169f };
						uParam1->f_22.f_28 = { 488.413f, -895.15f, 24.75f };
						uParam1->f_22.f_31 = { 0f, 0f, -180f };
						uParam1->f_22.f_69[0] = "";
						uParam1->f_22.f_69[1] = "";
						uParam1->f_22.f_72[0] = 0.251f;
						uParam1->f_22.f_72[1] = 0.35f;
						uParam1->f_22.f_75 = "GTAO_SCRIPT_DOORS_SOUNDS";
						uParam1->f_22.f_80 = "GTAO_Script_Doors_Faded_Screen_Sounds";
						uParam1->f_22.f_79 = "Garage_Door_Close";
						uParam1->f_22.f_88 = "GTAO_Script_Doors_Faded_Screen_Sounds";
						uParam1->f_22.f_87 = "Garage_Door_Close";
						uParam1->f_22.f_4 = "";
						uParam1->f_22.f_6 = "";
						uParam1->f_22.f_19 = 33.1011f;
						uParam1->f_22.f_40 = 0.1f;
						uParam1->f_22.f_26 = 33.1011f;
						uParam1->f_22.f_3 = "anim@apt_trans@garage";
						uParam1->f_22.f_5 = "gar_open_1_left";
						uParam1->f_22.f_34 = 0.1f;
						uParam1->f_22.f_35 = 0.45f;
						uParam1->f_22.f_37 = 2000;
					}
					else
					{
						uParam1->f_22.f_13 = { 491.9715f, -894.7998f, 26.1521f };
						uParam1->f_22.f_16 = { -3.0471f, 0f, 145.4612f };
						uParam1->f_22.f_19 = 49.6936f;
						uParam1->f_22.f_20 = { 490.8015f, -895.3118f, 26.0841f };
						uParam1->f_22.f_23 = { -1.2604f, 0f, 144.274f };
						uParam1->f_22.f_26 = 46.912f;
						uParam1->f_22.f_3 = "anim@apt_trans@buzzer";
						uParam1->f_22.f_28 = { 488.463f, -897.537f, 24.813f };
						uParam1->f_22.f_31 = { 0f, 0f, 90f };
						uParam1->f_22.f_5 = "buzz_short";
						uParam1->f_22.f_34 = 0.2f;
						uParam1->f_22.f_35 = 0.8f;
						uParam1->f_22.f_69[0] = "DOOR_BUZZ_ONESHOT_MASTER";
						uParam1->f_22.f_72[0] = 0.353f;
						uParam1->f_22.f_75 = "GTAO_APT_DOOR_DOWNSTAIRS_GLASS_SOUNDS";
						uParam1->f_22.f_80 = "";
						uParam1->f_22.f_79 = "";
						uParam1->f_22.f_88 = "";
						uParam1->f_22.f_87 = "";
						if (__LIB_0__::func_338(PLAYER::PLAYER_ID()))
						{
							uParam1->f_22.f_4 = "amb@world_human_hang_out_street@female_arms_crossed@enter";
							uParam1->f_22.f_6 = "enter";
						}
						else
						{
							uParam1->f_22.f_4 = "amb@world_human_hang_out_street@male_c@enter";
							uParam1->f_22.f_6 = "enter";
						}
					}
					break;
			}
			break;
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam1->f_22.f_5) && MISC::GET_HASH_KEY(uParam1->f_22.f_5) != joaat("buzz_short"))
	{
		if (iParam2 == 0)
		{
			uParam1->f_22.f_42 = 1;
		}
		else
		{
			if (!__LIB_2__::func_159(1) || (__LIB_2__::func_50() && __LIB_3__::func_809(PLAYER::PLAYER_ID(), __LIB_3__::func_810(iParam0))))
			{
				func_557(iParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &uVar0, &uVar1, 1, 0);
				bVar2 = (uVar0 || uVar1);
			}
			if (!bVar2 && !__LIB_8__::func_922(iParam0))
			{
				uParam1->f_22.f_42 = 1;
			}
			else
			{
				uParam1->f_22.f_42 = 0;
			}
		}
	}
	else
	{
		uParam1->f_22.f_42 = 0;
	}
}

void func_1215(var uParam0, int iParam1)//Position - 0x66CCB
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 437433/*func_1336*/;
			break;
		case 111:
			uParam0->f_35 = 437424/*func_1335*/;
			break;
		case 1:
			uParam0->f_30 = 437357/*func_1333*/;
			break;
		case 2:
			uParam0->f_31 = 436919/*func_1330*/;
			break;
		case 3:
			uParam0->f_34 = 436771/*func_1329*/;
			break;
		case 4:
			uParam0->f_12 = 436759/*func_1328*/;
			break;
		case 37:
			uParam0->f_18 = 436545/*func_1327*/;
			break;
		case 38:
			uParam0->f_9 = 436456/*func_1326*/;
			break;
		case 39:
			uParam0->f_11 = 436436/*func_1325*/;
			break;
		case 40:
			uParam0->f_6 = 436331/*func_1324*/;
			break;
		case 41:
			uParam0->f_20 = 436306/*func_1323*/;
			break;
		case 42:
			uParam0->f_10 = 436293/*func_1322*/;
			break;
		case 6:
			uParam0->f_32 = 436229/*func_1321*/;
			break;
		case 11:
			uParam0->f_11 = 436220/*func_1320*/;
			break;
		case 12:
			uParam0->f_33 = 435683/*func_1316*/;
			break;
		case 14:
			uParam0->f_11 = 435674/*func_1315*/;
			break;
		case 109:
			uParam0->f_56 = 434752/*func_1313*/;
			break;
		case 8:
			uParam0->f_37 = 434744/*func_1312*/;
			break;
		case 7:
			uParam0->f_36 = 434735/*func_1311*/;
			break;
		case 79:
			*uParam0 = 434726/*func_1310*/;
			break;
		case 13:
			uParam0->f_2 = 434664/*func_1309*/;
			break;
		case 15:
			uParam0->f_2 = 434583/*func_1308*/;
			break;
		case 16:
			uParam0->f_5 = 434256/*func_1307*/;
			break;
		case 108:
			uParam0->f_55 = 434247/*func_1306*/;
			break;
		case 17:
			uParam0->f_17 = 434236/*func_1305*/;
			break;
		case 19:
			uParam0->f_17 = 434225/*func_1304*/;
			break;
		case 18:
			uParam0->f_8 = 434183/*func_1302*/;
			break;
		case 20:
			uParam0->f_3 = 434174/*func_1301*/;
			break;
		case 21:
			uParam0->f_3 = 434126/*func_1300*/;
			break;
		case 74:
			uParam0->f_53 = 433971/*func_1298*/;
			break;
		case 75:
			uParam0->f_4 = 433962/*func_1297*/;
			break;
		case 22:
			uParam0->f_24 = 433860/*func_1296*/;
			break;
		case 23:
			uParam0->f_26 = 433852/*func_1295*/;
			break;
		case 25:
			uParam0->f_23 = 433425/*func_1292*/;
			break;
		case 27:
			uParam0->f_25 = 433417/*func_1291*/;
			break;
		case 28:
			uParam0->f_24 = 433409/*func_1290*/;
			break;
		case 30:
			uParam0->f_8 = 433374/*func_1289*/;
			break;
		case 31:
			uParam0->f_39 = 433346/*func_1288*/;
			break;
		case 33:
			uParam0->f_40 = 433179/*func_1287*/;
			break;
		case 76:
			uParam0->f_13 = 433156/*func_1286*/;
			break;
		case 34:
			uParam0->f_41 = 429542/*func_1283*/;
			break;
		case 36:
			uParam0->f_58 = 429497/*func_1282*/;
			break;
		case 35:
			uParam0->f_42 = 426303/*func_1278*/;
			break;
		case 45:
			uParam0->f_14 = 426294/*func_1277*/;
			break;
		case 46:
			uParam0->f_14 = 426285/*func_1276*/;
			break;
		case 110:
			uParam0->f_57 = 426277/*func_1275*/;
			break;
		case 77:
			uParam0->f_13 = 426266/*func_1274*/;
			break;
		case 47:
			uParam0->f_43 = 426104/*func_1273*/;
			break;
		case 48:
			uParam0->f_60 = 1;
			uParam0->f_44 = 424830/*func_1265*/;
			break;
		case 49:
			uParam0->f_8 = 424821/*func_1264*/;
			break;
		case 50:
			*uParam0 = 424396/*func_1257*/;
			break;
		case 51:
			*uParam0 = 424387/*func_1256*/;
			break;
		case 52:
			uParam0->f_15 = 424376/*func_1255*/;
			break;
		case 53:
			uParam0->f_13 = 424353/*func_1254*/;
			break;
		case 54:
			uParam0->f_45 = 424345/*func_1253*/;
			break;
		case 56:
			uParam0->f_46 = 424336/*func_1252*/;
			break;
		case 57:
			uParam0->f_11 = 424323/*func_1251*/;
			break;
		case 58:
			uParam0->f_13 = 424281/*func_1250*/;
			break;
		case 59:
			*uParam0 = 424272/*func_1249*/;
			break;
		case 60:
			*uParam0 = 424263/*func_1248*/;
			break;
		case 61:
			uParam0->f_15 = 424252/*func_1247*/;
			break;
		case 62:
			uParam0->f_13 = 424241/*func_1246*/;
			break;
		case 63:
			uParam0->f_11 = 424232/*func_1245*/;
			break;
		case 64:
			uParam0->f_47 = 424224/*func_1244*/;
			break;
		case 65:
			uParam0->f_21 = 424216/*func_1243*/;
			break;
		case 66:
			uParam0->f_21 = 423603/*func_1240*/;
			break;
		case 67:
			uParam0->f_21 = 423533/*func_1239*/;
			break;
		case 68:
			*uParam0 = 422844/*func_1238*/;
			break;
		case 69:
			*uParam0 = 422835/*func_1237*/;
			break;
		case 70:
			uParam0->f_48 = 422823/*func_1236*/;
			break;
		case 71:
			uParam0->f_49 = 422814/*func_1235*/;
			break;
		case 107:
			uParam0->f_50 = 422802/*func_1234*/;
			break;
		case 80:
			uParam0->f_7 = 422793/*func_1233*/;
			break;
		case 84:
			uParam0->f_1 = 422784/*func_1232*/;
			break;
		case 85:
			uParam0->f_1 = 422775/*func_1231*/;
			break;
		case 87:
			uParam0->f_1 = 422766/*func_1230*/;
			break;
		case 88:
			uParam0->f_1 = 422757/*func_1229*/;
			break;
		case 89:
			uParam0->f_54 = 422749/*func_1228*/;
			break;
		case 96:
			uParam0->f_1 = 422740/*func_1227*/;
			break;
		case 97:
			uParam0->f_1 = 422731/*func_1226*/;
			break;
		case 98:
			uParam0->f_1 = 422722/*func_1225*/;
			break;
		case 100:
			uParam0->f_22 = 422714/*func_1224*/;
			break;
		case 101:
			uParam0->f_22 = 422706/*func_1223*/;
			break;
		case 112:
			uParam0->f_13 = 422694/*func_1222*/;
			break;
		case 113:
			uParam0->f_3 = 422685/*func_1221*/;
			break;
		case 114:
			uParam0->f_16 = 328362/*func_843*/;
			break;
		case 115:
			uParam0->f_3 = 422676/*func_1220*/;
			break;
		case 116:
			*uParam0 = 422667/*func_1219*/;
			break;
		case 117:
			uParam0->f_16 = 382391/*func_1047*/;
			break;
		case 78:
			uParam0->f_59 = 422659/*func_1218*/;
			break;
		case 124:
			uParam0->f_1 = 422650/*func_1217*/;
			break;
		case 125:
			uParam0->f_19 = 422642/*func_1216*/;
			break;
	}
}

void func_1265(int iParam0, int iParam1, var uParam2, int iParam3)//Position - 0x67B7E
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	var uVar3;
	bool bVar4;
	int iVar5;
	iVar0 = 0;
	iParam1 = (iParam1 - 1);
	iParam3->f_46 = __LIB_3__::func_854();
	MISC::SET_BIT(&(iParam3->f_2), 4);
	switch (iParam1)
	{
		case 0:
			__LIB_5__::func_189(iParam3, 0, 1);
			__LIB_5__::func_189(iParam3, 1, 0);
			__LIB_5__::func_189(iParam3, 2, 0);
			__LIB_5__::func_189(iParam3, 3, 1);
			__LIB_5__::func_189(iParam3, 4, 0);
			__LIB_5__::func_189(iParam3, 5, 0);
			break;
		case 1:
			__LIB_5__::func_189(iParam3, 0, 0);
			__LIB_5__::func_189(iParam3, 1, 0);
			__LIB_5__::func_189(iParam3, 2, 1);
			__LIB_5__::func_189(iParam3, 3, 1);
			__LIB_5__::func_189(iParam3, 4, 0);
			__LIB_5__::func_189(iParam3, 5, 0);
			break;
		case 3:
			__LIB_5__::func_189(iParam3, 0, 1);
			__LIB_5__::func_189(iParam3, 1, 0);
			__LIB_5__::func_189(iParam3, 2, 0);
			__LIB_5__::func_189(iParam3, 3, 0);
			__LIB_5__::func_189(iParam3, 4, 0);
			__LIB_5__::func_189(iParam3, 5, 0);
			break;
		case 2:
			__LIB_5__::func_189(iParam3, 0, 1);
			__LIB_5__::func_189(iParam3, 1, 0);
			__LIB_5__::func_189(iParam3, 2, 0);
			__LIB_5__::func_189(iParam3, 3, 0);
			break;
	}
	if (iParam1 == 2)
	{
		MISC::SET_BIT(&uVar3, PLAYER::PLAYER_ID());
		if (__LIB_6__::func_869(PLAYER::PLAYER_ID(), 148, uVar3, 1))
		{
			bVar1 = false;
			bVar2 = false;
		}
		else
		{
			func_557(iParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &bVar1, &bVar2, 1, 1);
		}
		__LIB_5__::func_189(iParam3, 4, bVar1);
		__LIB_5__::func_189(iParam3, 5, bVar2);
	}
	if (iParam3->f_3 != 0 && (iParam3->f_5 < iVar0 || iParam3->f_1 != 1))
	{
		return;
	}
	if (iParam3->f_3 == 0)
	{
		Global_1946250.f_4693 = 1;
		return;
	}
	bVar4 = false;
	if (__LIB_3__::func_661(0, iParam3) || __LIB_3__::func_661(1, iParam3))
	{
		if (iParam1 == 2 || iParam1 == 3)
		{
			bVar4 = true;
			MISC::CLEAR_BIT(&(iParam3->f_2), 1);
		}
		else
		{
			return;
		}
	}
	else if (__LIB_3__::func_661(3, iParam3))
	{
		MISC::SET_BIT(&(Global_1946250.f_9), 26);
		iParam3->f_5 = 0;
	}
	else if (__LIB_3__::func_661(2, iParam3))
	{
		MISC::SET_BIT(&(Global_1946250.f_9), 27);
		iParam3->f_5 = 0;
	}
	else if (__LIB_3__::func_661(4, iParam3) || __LIB_3__::func_661(5, iParam3))
	{
		iVar5 = __LIB_6__::func_945(__LIB_3__::func_661(4, iParam3));
		__LIB_3__::func_852(iVar5);
		bVar4 = true;
	}
	if (bVar4)
	{
		if (__LIB_3__::func_845())
		{
			MISC::SET_BIT(&(Global_1946250.f_10), 1);
		}
		else
		{
			MISC::SET_BIT(&(Global_1946250.f_10), 0);
		}
		if (__LIB_5__::func_223())
		{
			MISC::SET_BIT(&(Global_1946250.f_6), 19);
		}
		else
		{
			__LIB_3__::func_768(iParam0, -1);
		}
	}
}

void func_1292(int iParam0, int iParam1)//Position - 0x69D11
{
	bool bVar0;
	bool bVar1;
	struct<3> Var2;
	int iVar3;
	if (__LIB_0__::func_109(PLAYER::PLAYER_ID(), iParam0))
	{
		iVar3 = __LIB_3__::func_616();
		Var2 = { __LIB_3__::func_859(iParam0, iVar3) };
		func_557(iParam0, Var2, &bVar0, &bVar1, 1, 0);
		if (bVar1)
		{
			__LIB_5__::func_189(iParam1, 1, 1);
		}
		else
		{
			__LIB_5__::func_189(iParam1, 1, 0);
		}
		if (bVar0)
		{
			__LIB_5__::func_189(iParam1, 2, 1);
		}
		else
		{
			__LIB_5__::func_189(iParam1, 2, 0);
		}
		if (((bVar1 || bVar0) && !__LIB_3__::func_779()) && Global_1946250.f_3606 != 148)
		{
			__LIB_6__::func_868(iParam0, -1);
		}
		if (__LIB_3__::func_661(0, iParam1))
		{
			__LIB_6__::func_868(iParam0, -1);
		}
		else if (__LIB_3__::func_661(1, iParam1))
		{
			if (bVar1)
			{
				__LIB_7__::func_831(PLAYER::PLAYER_ID(), iParam0, Var2, 1, 0, 0, 0, -1, -1, -1);
			}
			__LIB_7__::func_787();
		}
		else if (__LIB_3__::func_661(2, iParam1))
		{
			if (bVar0)
			{
				__LIB_7__::func_831(PLAYER::PLAYER_ID(), iParam0, Var2, 0, 0, 1, 0, -1, -1, -1);
			}
			__LIB_7__::func_787();
		}
	}
	else
	{
		__LIB_5__::func_189(iParam1, 1, 0);
		__LIB_5__::func_189(iParam1, 2, 0);
	}
}

void func_1337(var uParam0, int iParam1)//Position - 0x6ACC2
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 713122/*func_1776*/;
			break;
		case 1:
			uParam0->f_30 = 713067/*func_1775*/;
			break;
		case 2:
			uParam0->f_31 = 712407/*func_1773*/;
			break;
		case 3:
			uParam0->f_34 = 712280/*func_1772*/;
			break;
		case 4:
			uParam0->f_12 = 712248/*func_1771*/;
			break;
		case 5:
			uParam0->f_11 = 712237/*func_1770*/;
			break;
		case 6:
			uParam0->f_32 = 712173/*func_1769*/;
			break;
		case 111:
			uParam0->f_35 = 712150/*func_1768*/;
			break;
		case 79:
			*uParam0 = 712141/*func_1767*/;
			break;
		case 37:
			uParam0->f_18 = 712028/*func_1766*/;
			break;
		case 38:
			uParam0->f_9 = 711932/*func_1764*/;
			break;
		case 11:
			uParam0->f_11 = 711923/*func_1763*/;
			break;
		case 12:
			uParam0->f_33 = 711533/*func_1761*/;
			break;
		case 109:
			uParam0->f_56 = 711230/*func_1760*/;
			break;
		case 15:
			uParam0->f_2 = 709277/*func_1748*/;
			break;
		case 13:
			uParam0->f_2 = 709268/*func_1747*/;
			break;
		case 75:
			uParam0->f_4 = 709259/*func_1746*/;
			break;
		case 16:
			uParam0->f_5 = 708876/*func_1743*/;
			break;
		case 108:
			uParam0->f_55 = 704935/*func_1725*/;
			break;
		case 17:
			uParam0->f_17 = 704210/*func_1722*/;
			break;
		case 19:
			uParam0->f_17 = 704185/*func_1721*/;
			break;
		case 20:
			uParam0->f_3 = 704016/*func_1720*/;
			break;
		case 21:
			uParam0->f_3 = 703953/*func_1719*/;
			break;
		case 74:
			uParam0->f_53 = 703801/*func_1718*/;
			break;
		case 22:
			uParam0->f_24 = 703720/*func_1717*/;
			break;
		case 25:
			uParam0->f_23 = 702783/*func_1713*/;
			break;
		case 30:
			uParam0->f_8 = 701455/*func_1707*/;
			break;
		case 31:
			uParam0->f_39 = 700879/*func_1704*/;
			break;
		case 33:
			uParam0->f_40 = 699644/*func_1699*/;
			break;
		case 14:
			uParam0->f_11 = 699635/*func_1698*/;
			break;
		case 34:
			uParam0->f_41 = 696868/*func_1695*/;
			break;
		case 36:
			uParam0->f_58 = 696815/*func_1694*/;
			break;
		case 35:
			uParam0->f_42 = 691363/*func_1690*/;
			break;
		case 45:
			uParam0->f_14 = 691354/*func_1689*/;
			break;
		case 46:
			uParam0->f_14 = 691345/*func_1688*/;
			break;
		case 110:
			uParam0->f_57 = 691337/*func_1687*/;
			break;
		case 77:
			uParam0->f_13 = 691314/*func_1686*/;
			break;
		case 47:
			uParam0->f_43 = 691265/*func_1685*/;
			break;
		case 49:
			uParam0->f_8 = 691240/*func_1684*/;
			break;
		case 50:
			*uParam0 = 691202/*func_1683*/;
			break;
		case 51:
			*uParam0 = 691128/*func_1680*/;
			break;
		case 52:
			uParam0->f_15 = 691117/*func_1679*/;
			break;
		case 53:
			uParam0->f_13 = 691038/*func_1678*/;
			break;
		case 54:
			uParam0->f_45 = 691030/*func_1677*/;
			break;
		case 56:
			uParam0->f_46 = 691021/*func_1676*/;
			break;
		case 57:
			uParam0->f_11 = 691011/*func_1675*/;
			break;
		case 58:
			uParam0->f_13 = 690764/*func_1674*/;
			break;
		case 64:
			uParam0->f_47 = 689620/*func_1669*/;
			break;
		case 65:
			uParam0->f_21 = 688428/*func_1664*/;
			break;
		case 66:
			uParam0->f_21 = 687319/*func_1653*/;
			break;
		case 67:
			uParam0->f_21 = 687143/*func_1651*/;
			break;
		case 68:
			*uParam0 = 685483/*func_1637*/;
			break;
		case 69:
			*uParam0 = 685474/*func_1636*/;
			break;
		case 70:
			uParam0->f_48 = 685462/*func_1635*/;
			break;
		case 71:
			uParam0->f_49 = 685453/*func_1634*/;
			break;
		case 107:
			uParam0->f_50 = 685441/*func_1633*/;
			break;
		case 80:
			uParam0->f_7 = 684608/*func_1627*/;
			break;
		case 73:
			uParam0->f_51 = 684599/*func_1626*/;
			break;
		case 84:
			uParam0->f_1 = 683947/*func_1624*/;
			break;
		case 85:
			uParam0->f_1 = 683075/*func_1616*/;
			break;
		case 87:
			uParam0->f_1 = 681864/*func_1607*/;
			break;
		case 88:
			uParam0->f_1 = 681844/*func_1606*/;
			break;
		case 89:
			uParam0->f_54 = 681750/*func_1605*/;
			break;
		case 90:
			uParam0->f_1 = 681619/*func_1602*/;
			break;
		case 91:
			uParam0->f_1 = 680991/*func_1601*/;
			break;
		case 92:
			uParam0->f_1 = 680224/*func_1598*/;
			break;
		case 94:
			uParam0->f_1 = 679672/*func_1597*/;
			break;
		case 95:
			uParam0->f_22 = 679078/*func_1592*/;
			break;
		case 18:
			uParam0->f_8 = 678720/*func_1588*/;
			break;
		case 96:
			uParam0->f_1 = 678627/*func_1587*/;
			break;
		case 97:
			uParam0->f_1 = 677781/*func_1582*/;
			break;
		case 98:
			uParam0->f_1 = 443502/*func_1386*/;
			break;
		case 100:
			uParam0->f_22 = 440787/*func_1370*/;
			break;
		case 101:
			uParam0->f_22 = 439631/*func_1357*/;
			break;
		case 78:
			uParam0->f_59 = 439423/*func_1354*/;
			break;
		case 104:
			uParam0->f_1 = 438955/*func_1345*/;
			break;
		case 102:
			uParam0->f_1 = 438946/*func_1344*/;
			break;
		case 103:
			uParam0->f_22 = 438836/*func_1339*/;
			break;
		case 81:
			*uParam0 = 438793/*func_1338*/;
			break;
	}
}

int func_1386(var uParam0, var uParam1)//Position - 0x6C46E
{
	bool bVar0;
	struct<3> Var1;
	struct<3> Var2;
	char* sVar3;
	char* sVar4;
	int iVar5;
	struct<3> Var6;
	struct<3> Var7;
	int iVar8;
	int iVar9;
	int iVar10;
	if (__LIB_3__::func_894())
	{
		MISC::SET_BIT(&(Global_1946250.f_2), 20);
		MISC::SET_BIT(&(Global_1946250.f_7), 24);
		if (uParam1->f_218 != -1)
		{
			uParam1->f_218 = -1;
		}
		return 1;
	}
	else if (__LIB_5__::func_232())
	{
		func_1403(&(uParam1->f_140[0]), PLAYER::PLAYER_ID(), 1, 1);
		if (__LIB_0__::func_121(uParam1->f_140[0]))
		{
			if (!PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(uParam1->f_140[0]))
			{
				return 0;
			}
			bVar0 = (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()) && __LIB_1__::func_365(PLAYER::PLAYER_PED_ID()));
			Var1 = { __LIB_3__::func_903(Global_1946250.f_3377) };
			Var2 = { __LIB_3__::func_902(Global_1946250.f_3377) };
			sVar3 = __LIB_3__::func_888(0, 1);
			sVar4 = __LIB_3__::func_901(0, 1);
			__LIB_3__::func_900(&(Global_1946250.f_4073), 2600, "sub_exit", Var1, Var2, sVar3, sVar4, 0, 0, 500, 0, 2);
			sVar3 = __LIB_3__::func_888(bVar0, 0);
			sVar4 = __LIB_3__::func_901(bVar0, 0);
			Global_1946250.f_4073.f_394 = PED::CREATE_SYNCHRONIZED_SCENE(Var1, Var2, 2);
			TASK::TASK_SYNCHRONIZED_SCENE(uParam1->f_140[0], Global_1946250.f_4073.f_394, sVar3, sVar4, 1000f, -1000f, 0, 0, 1000f, 0);
			ENTITY::SET_ENTITY_VISIBLE(uParam1->f_140[0], false, false);
			MISC::SET_BIT(&(Global_1946250.f_2), 20);
			MISC::SET_BIT(&(Global_1946250.f_5), 27);
			NETWORK::NETWORK_FADE_OUT_ENTITY(PLAYER::PLAYER_PED_ID(), true, true);
			return 1;
		}
	}
	else
	{
		Var6 = { uParam1->f_28 };
		Var7 = { uParam1->f_31 };
		iVar8 = -1;
		if (__LIB_3__::func_887(PLAYER::PLAYER_ID()))
		{
			iVar5 = joaat("seasparrow3");
			iVar8 = 0;
			if (PLAYER::PLAYER_ID() == Global_1853194)
			{
				STREAMING::REQUEST_MODEL(joaat("seasparrow2"));
			}
			if (!__LIB_5__::func_863(uParam1, iVar8))
			{
				return 0;
			}
		}
		else if (__LIB_3__::func_886(PLAYER::PLAYER_ID()))
		{
			iVar5 = joaat("avisa");
			iVar8 = 1;
			if (!__LIB_5__::func_863(uParam1, iVar8))
			{
				return 0;
			}
		}
		else if (__LIB_3__::func_879(PLAYER::PLAYER_ID()))
		{
			iVar5 = ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false));
			iVar8 = 2;
			if (!__LIB_5__::func_863(uParam1, iVar8))
			{
				return 0;
			}
		}
		else
		{
			return 1;
		}
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !ENTITY::DOES_ENTITY_EXIST(uParam1->f_109))
		{
			iVar9 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			Var6 = { ENTITY::GET_ENTITY_COORDS(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), true) };
			Var7 = { ENTITY::GET_ENTITY_ROTATION(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 2) };
			func_408(&iVar9, &(uParam1->f_109), 4);
			__LIB_3__::func_633(&(uParam1->f_109));
			ENTITY::SET_ENTITY_COLLISION(uParam1->f_109, false, false);
			ENTITY::SET_ENTITY_INVINCIBLE(uParam1->f_109, true);
			ENTITY::SET_ENTITY_COORDS_NO_OFFSET(uParam1->f_109, Var6, false, false, true);
			ENTITY::SET_ENTITY_ROTATION(uParam1->f_109, Var7, 2, true);
			VEHICLE::SET_DISABLE_MAP_COLLISION(uParam1->f_109);
			ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_109, true);
			VEHICLE::SET_VEHICLE_ENGINE_ON(uParam1->f_109, false, true, false);
			ENTITY::SET_ENTITY_VISIBLE(uParam1->f_109, false, false);
			if (__LIB_3__::func_879(PLAYER::PLAYER_ID()))
			{
				VEHICLE::SET_VEHICLE_CAN_DEFORM_WHEELS(uParam1->f_109, false);
				VEHICLE::TRANSFORM_TO_SUBMARINE(uParam1->f_109, true);
			}
			__LIB_5__::func_489(uParam1->f_109);
			return 0;
		}
		__LIB_3__::func_882(1);
		if (__LIB_5__::func_488())
		{
			__LIB_5__::func_862(iVar8);
			__LIB_3__::func_900(&(Global_1946250.f_4073), 6000, "Submarine INT exit", uParam1->f_28, uParam1->f_31, uParam1->f_3, uParam1->f_8, 1, 0, 500, 0, 2);
			Global_1946250.f_4073.f_394 = PED::CREATE_SYNCHRONIZED_SCENE(uParam1->f_28, uParam1->f_31, 2);
			iVar10 = 0;
			while (iVar10 < uParam1->f_219)
			{
				if (iVar10 < 3)
				{
					if (__LIB_0__::func_121(uParam1->f_176[iVar10]))
					{
						if (iVar10 == 0)
						{
							if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam1->f_228))
							{
								uParam1->f_218 = AUDIO::GET_SOUND_ID();
								AUDIO::PLAY_SOUND_FROM_ENTITY(uParam1->f_218, uParam1->f_230, uParam1->f_176[iVar10], uParam1->f_228, false, 0);
							}
							__LIB_3__::func_896(uParam1, uParam1->f_176[iVar10]);
						}
						__LIB_3__::func_895(&Var6, &Var7, uParam1, iVar10);
						ENTITY::SET_ENTITY_COORDS_NO_OFFSET(uParam1->f_176[iVar10], Var6, false, false, true);
						ENTITY::SET_ENTITY_ROTATION(uParam1->f_176[iVar10], Var7, 2, true);
						if (!ENTITY::IS_ENTITY_VISIBLE(uParam1->f_176[iVar10]))
						{
							ENTITY::SET_ENTITY_VISIBLE(uParam1->f_176[iVar10], true, false);
						}
						ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(uParam1->f_176[iVar10], Global_1946250.f_4073.f_394, uParam1->f_221[iVar10], uParam1->f_3, 1000f, -1000f, 0, 1000f);
					}
				}
				iVar10++;
			}
			if (__LIB_0__::func_121(uParam1->f_109))
			{
				ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(uParam1->f_109, Global_1946250.f_4073.f_394, uParam1->f_7, uParam1->f_3, 1000f, -1000f, 0, 1000f);
			}
			MISC::SET_BIT(&(Global_1946250.f_7), 29);
			MISC::SET_BIT(&(Global_1946250.f_2), 20);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar5);
			return 1;
		}
	}
	return 0;
}

int func_1403(var uParam0, bool bParam1, bool bParam2, bool bParam3)//Position - 0x6D099
{
	int iVar0;
	iVar0 = PLAYER::GET_PLAYER_PED(bParam1);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	if (!func_325(uParam0, iVar0, bParam2, bParam3))
	{
		return 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0) && !ENTITY::IS_ENTITY_DEAD(*uParam0, false))
	{
		if (!func_1404(uParam0, bParam1))
		{
		}
		PED::FINALIZE_HEAD_BLEND(*uParam0);
	}
	return 1;
}

int func_1404(var uParam0, int iParam1)//Position - 0x6D0F7
{
	int iVar0;
	struct<10> Var1;
	if (__LIB_3__::func_140(iParam1))
	{
		iVar0 = __LIB_7__::func_53(iParam1);
		Var1.f_1 = -1;
		Var1.f_2 = -1;
		Var1.f_3 = -1;
		Var1.f_4 = -1;
		Var1.f_8 = -1;
		Var1.f_9 = 50;
		Var1.f_0 = *uParam0;
		Var1.f_6 = 1;
		func_1408(&Var1, __LIB_3__::func_353(iVar0), 0, 1, 1, !__LIB_5__::func_723(), 0, __LIB_7__::func_52(), __LIB_3__::func_904(__LIB_5__::func_491(iParam1), 0), __LIB_3__::func_352(iVar0));
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(__LIB_2__::func_508(iParam1, 0), false);
		if (GRAPHICS::OVERRIDE_PED_CREW_LOGO_TEXTURE(*uParam0, __LIB_2__::func_508(iParam1, 0), __LIB_5__::func_490(iParam1, 2)))
		{
		}
		return 1;
	}
	return 0;
}

int func_1408(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, int iParam8, bool bParam9)//Position - 0x6D214
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	bool bVar11;
	struct<14> Var12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	struct<4> Var17;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	bool bVar24;
	int iVar25;
	var uVar26;
	var uVar27;
	int iVar28;
	int iVar29;
	bool bVar30;
	int iVar31;
	int iVar32;
	int iVar33;
	bool bVar34;
	struct<7> Var35;
	struct<9> Var36;
	int iVar37;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		Global_78200[iVar0] = -1;
		Global_78200.f_13[iVar0] = -1;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_78200.f_26)
	{
		Global_78200.f_26[iVar0] = -1;
		Global_78200.f_36[iVar0] = -1;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_78200.f_46)
	{
		Global_78200.f_46[iVar0] = -1;
		iVar0++;
	}
	if (!PED::IS_PED_DEAD_OR_DYING(*uParam0, true))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(*uParam0);
		if (iVar1 == joaat("MP_M_Freemode_01") || iVar1 == joaat("MP_F_Freemode_01"))
		{
			bVar2 = false;
			if (uParam0->f_1 != -1 && uParam0->f_1 != 1711)
			{
				bVar2 = true;
			}
			if (uParam0->f_2 != -1 && uParam0->f_2 != 334)
			{
				bVar2 = true;
			}
			else if ((uParam0->f_2 == -1 && bParam1) && bParam2)
			{
				bVar2 = true;
			}
			if (bVar2)
			{
				bVar3 = false;
				if (!bParam2)
				{
					if (__LIB_7__::func_886(&Global_78200, *uParam0, bParam1))
					{
						bVar3 = true;
					}
				}
				if ((bParam1 && uParam0->f_1 != 32) && uParam0->f_1 != 81)
				{
					if (__LIB_3__::func_344(&Global_78200, *uParam0, bParam2, bParam4))
					{
						bVar3 = true;
					}
				}
				iVar4 = -1;
				if (uParam0->f_3 != -1)
				{
					if (__LIB_3__::func_376(*uParam0, &Global_78200, uParam0->f_3, &iVar4))
					{
						bVar3 = true;
					}
				}
				if (uParam0->f_4 != -1)
				{
					if (__LIB_3__::func_376(*uParam0, &Global_78200, uParam0->f_4, &iVar4))
					{
						bVar3 = true;
					}
				}
				if (bVar3)
				{
					switch (uParam0->f_6)
					{
						case 0:
							bVar5 = true;
							if (!__LIB_3__::func_337(uParam0, &Global_78200))
							{
								bVar5 = false;
							}
							if (bVar5)
							{
								uParam0->f_6 = 1;
							}
							break;
						case 1:
							if (!bParam6)
							{
								PED::CLEAR_ALL_PED_PROPS(*uParam0);
								PED::CLEAR_PED_STORED_HAT_PROP(*uParam0);
								PED::REMOVE_PED_HELMET(*uParam0, true);
								if (bParam3)
								{
									PED::CLEAR_PED_WETNESS(*uParam0);
									PED::CLEAR_PED_BLOOD_DAMAGE(*uParam0);
								}
								iVar6 = 0;
								iVar7 = PED::GET_PED_DRAWABLE_VARIATION(*uParam0, 5);
								iVar8 = -1;
								iVar7 = iVar7;
								iVar8 = iVar8;
								if (__LIB_1__::func_608(*uParam0))
								{
									iVar6 = 1;
								}
								if (iVar6 && bParam5)
								{
									Global_78200[5] = 0;
									if (Global_78200.f_13[5] == -1)
									{
										Global_78200.f_13[5] = 0;
									}
								}
								if (bParam1)
								{
									if (((uParam0->f_2 != -1 && uParam0->f_2 != -2) && uParam0->f_1 != 32) && uParam0->f_1 != 81)
									{
										if (__LIB_3__::func_336(uParam0->f_2) == 22)
										{
											Global_78200.f_26[2] = -1;
										}
										else if ((((__LIB_3__::func_336(uParam0->f_2) == 8 || __LIB_3__::func_336(uParam0->f_2) == 50) || __LIB_3__::func_336(uParam0->f_2) == 47) || uParam0->f_2 == 286) || uParam0->f_2 == 287)
										{
											Global_78200.f_26[1] = -1;
											Global_78200.f_26[2] = -1;
										}
										else
										{
											Global_78200.f_26[1] = -1;
											Global_78200.f_26[2] = -1;
											Global_78200.f_26[0] = -1;
											if (PED::IS_PED_IN_ANY_VEHICLE(*uParam0, false))
											{
												PED::CLEAR_PED_STORED_HAT_PROP(*uParam0);
											}
										}
										if (ENTITY::GET_ENTITY_MODEL(*uParam0) == joaat("MP_F_Freemode_01"))
										{
											if (__LIB_3__::func_343(iVar1, 7, __LIB_0__::func_206(*uParam0, Global_78200[7], Global_78200.f_13[7], 7), -1))
											{
												Global_78200[7] = 0;
												Global_78200.f_13[7] = 0;
											}
										}
									}
									else if (uParam0->f_2 == -2)
									{
										iVar9 = FILES::GET_HASH_NAME_FOR_COMPONENT(*uParam0, 1, Global_78200[1], Global_78200.f_13[1]);
										if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar9, joaat("FORCE_PROP"), 0) && PED::GET_PED_DRAWABLE_VARIATION(*uParam0, 1) == Global_78200[1])
										{
										}
										else
										{
											Global_78200.f_26[1] = -1;
											Global_78200.f_26[2] = -1;
											Global_78200.f_26[0] = -1;
											if (ENTITY::GET_ENTITY_MODEL(*uParam0) == joaat("MP_F_Freemode_01"))
											{
												if (__LIB_3__::func_343(iVar1, 7, __LIB_0__::func_206(*uParam0, Global_78200[7], Global_78200.f_13[7], 7), -1))
												{
													Global_78200[7] = 0;
													Global_78200.f_13[7] = 0;
												}
											}
											if (PED::IS_PED_IN_ANY_VEHICLE(*uParam0, false))
											{
												PED::CLEAR_PED_STORED_HAT_PROP(*uParam0);
											}
										}
									}
									else if (uParam0->f_2 == -1 && bParam2)
									{
										Global_78200.f_26[1] = -1;
										Global_78200.f_26[2] = -1;
										Global_78200.f_26[0] = -1;
										if (PED::IS_PED_IN_ANY_VEHICLE(*uParam0, false))
										{
											PED::CLEAR_PED_STORED_HAT_PROP(*uParam0);
										}
									}
								}
								__LIB_4__::func_984(*uParam0, &Global_78200, uParam0->f_8);
								if ((Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_96.f_28 != -1 && Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_96.f_28 < 4) && PLAYER::PLAYER_ID() != -1)
								{
									if (BitTest(Global_4718592.f_658[Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_96.f_28 /*22957*/].f_12179, 4))
									{
										if (Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_119 == 7 || Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_119 == 2)
										{
											PED::SET_PED_HEAD_OVERLAY(*uParam0, 4, 0, 0f);
										}
									}
								}
								GRAPHICS::OVERRIDE_PED_CREW_LOGO_TEXTURE(*uParam0, "", "");
								bVar11 = false;
								iVar0 = 0;
								while (iVar0 < 12)
								{
									if (Global_78200[iVar0] != -1)
									{
										if (iVar0 == 10 && iParam7 != -1)
										{
											iVar10 = __LIB_0__::func_206(*uParam0, Global_78200[iVar0], Global_78200.f_13[iVar0], 10);
											if (__LIB_3__::func_342(iVar1, 10, iVar10, -1))
											{
												if (iParam7 == 0)
												{
													PED::SET_PED_COMPONENT_VARIATION(*uParam0, iVar0, 0, 0, 0);
												}
												else if (iParam7 == 1)
												{
													if (*uParam0 == PLAYER::PLAYER_PED_ID() && !__LIB_1__::func_526())
													{
														PED::SET_PED_COMPONENT_VARIATION(*uParam0, iVar0, 0, 0, 0);
													}
													else
													{
														PED::SET_PED_COMPONENT_VARIATION(*uParam0, iVar0, Global_78200[iVar0], Global_78200.f_13[iVar0], 0);
														PED::SET_PED_ENABLE_CREW_EMBLEM(*uParam0, true);
													}
												}
												else if (iParam7 == 2)
												{
													GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(__LIB_2__::func_508(PLAYER::PLAYER_ID(), 0), false);
													GRAPHICS::OVERRIDE_PED_CREW_LOGO_TEXTURE(*uParam0, __LIB_2__::func_508(PLAYER::PLAYER_ID(), 0), __LIB_5__::func_490(PLAYER::PLAYER_ID(), 2));
													PED::SET_PED_COMPONENT_VARIATION(*uParam0, iVar0, Global_78200[iVar0], Global_78200.f_13[iVar0], 0);
												}
												else
												{
													PED::SET_PED_COMPONENT_VARIATION(*uParam0, iVar0, 0, 0, 0);
												}
											}
											else
											{
												PED::SET_PED_COMPONENT_VARIATION(*uParam0, iVar0, Global_78200[iVar0], Global_78200.f_13[iVar0], 0);
											}
										}
										else
										{
											if (iVar0 == 1)
											{
											}
											else if (iVar0 == 2)
											{
												PED::SET_PED_COMPONENT_VARIATION(*uParam0, iVar0, Global_78200[iVar0], Global_78200.f_13[iVar0], 0);
												PED::SET_PED_COMPONENT_VARIATION(*uParam0, 1, Global_78200[1], Global_78200.f_13[1], 0);
												bVar11 = true;
											}
											else if (Global_78200[iVar0] >= PED::GET_NUMBER_OF_PED_DRAWABLE_VARIATIONS(*uParam0, iVar0) || Global_78200.f_13[iVar0] >= PED::GET_NUMBER_OF_PED_TEXTURE_VARIATIONS(*uParam0, iVar0, Global_78200[iVar0]))
											{
											}
											else
											{
												PED::SET_PED_COMPONENT_VARIATION(*uParam0, iVar0, Global_78200[iVar0], Global_78200.f_13[iVar0], 0);
											}
											if (iVar0 == 10)
											{
												iVar10 = __LIB_0__::func_206(*uParam0, Global_78200[iVar0], Global_78200.f_13[iVar0], 10);
												if (__LIB_3__::func_342(iVar1, 10, iVar10, -1))
												{
													PED::SET_PED_ENABLE_CREW_EMBLEM(*uParam0, true);
												}
											}
										}
									}
									iVar0++;
								}
								if (!bVar11 && Global_78200[1] != -1)
								{
									PED::SET_PED_COMPONENT_VARIATION(*uParam0, 1, Global_78200[1], Global_78200.f_13[1], 0);
								}
								iVar0 = 0;
								while (iVar0 < Global_78200.f_26)
								{
									if (Global_78200.f_26[iVar0] != -1 && Global_78200.f_26[iVar0] != 255)
									{
										__LIB_0__::func_454(*uParam0, iVar0, Global_78200.f_26[iVar0], Global_78200.f_36[iVar0]);
									}
									iVar0++;
								}
								if (*uParam0 == PLAYER::PLAYER_PED_ID())
								{
									if (FILES::DOES_CURRENT_PED_COMPONENT_HAVE_RESTRICTION_TAG(*uParam0, 8, joaat("SCUBA_GEAR")))
									{
										if (iVar1 == joaat("MP_M_Freemode_01"))
										{
											PLAYER::SET_PLAYER_PREVIOUS_VARIATION_DATA(PLAYER::PLAYER_ID(), 8, 15, 0, 0, 0);
										}
										else if (iVar1 == joaat("MP_F_Freemode_01"))
										{
											PLAYER::SET_PLAYER_PREVIOUS_VARIATION_DATA(PLAYER::PLAYER_ID(), 8, 3, 0, 0, 0);
										}
									}
								}
								if ((iVar6 && !bParam5) && *uParam0 == PLAYER::PLAYER_PED_ID())
								{
									__LIB_5__::func_722(PLAYER::PLAYER_ID(), -1, -1);
								}
								if (!func_340(*uParam0))
								{
									if (uParam0->f_2 >= 52 && uParam0->f_2 <= 59)
									{
										PED::SET_PED_HELMET_PROP_INDEX(*uParam0, Global_78200.f_26[0], true);
										PED::SET_PED_HELMET_TEXTURE_INDEX(*uParam0, Global_78200.f_36[0]);
										__LIB_3__::func_335(*uParam0, Global_78200.f_26[0], Global_78200.f_36[0], 1);
									}
									else
									{
										Var12 = { __LIB_6__::func_38(iVar1, 14, __LIB_1__::func_360(589, -1, 0), -1) };
										if (Var12.f_3 != -1 && Var12.f_4 != -1)
										{
											if (__LIB_0__::func_348(iVar1, 14, __LIB_1__::func_360(589, -1, 0), -1))
											{
												PED::SET_PED_HELMET_PROP_INDEX(*uParam0, Var12.f_3, true);
												PED::SET_PED_HELMET_TEXTURE_INDEX(*uParam0, Var12.f_4);
												__LIB_3__::func_335(*uParam0, Var12.f_3, Var12.f_4, 1);
											}
										}
										PED::SET_PED_CONFIG_FLAG(*uParam0, 34, false);
										PED::SET_PED_CONFIG_FLAG(*uParam0, 36, false);
									}
								}
								else if (Global_78200.f_26[0] != -1 && Global_78200.f_26[0] != 255)
								{
									__LIB_3__::func_335(*uParam0, Global_78200.f_26[0], Global_78200.f_36[0], 0);
								}
								if (!__LIB_0__::func_157(0))
								{
									if (uParam0->f_3 != -1)
									{
										func_1532(*uParam0, uParam0->f_3, uParam0->f_8);
									}
									if ((uParam0->f_4 != -1 && uParam0->f_1 != 32) && uParam0->f_1 != 81)
									{
										func_1532(*uParam0, uParam0->f_4, uParam0->f_8);
									}
									if ((*uParam0 == PLAYER::PLAYER_PED_ID() && uParam0->f_1 != 0) && uParam0->f_1 != -1)
									{
										__LIB_1__::func_354(2065, 1, -1, 1, 0);
									}
									if ((((((((((((((((__LIB_1__::func_102(*uParam0, 7) && uParam0->f_1 != 1147) && uParam0->f_1 != 1148) && uParam0->f_1 != 1149) && uParam0->f_1 != 1150) && uParam0->f_1 != 1155) && uParam0->f_1 != 1156) && uParam0->f_1 != 1157) && uParam0->f_1 != 1158) && uParam0->f_1 != 1265) && uParam0->f_1 != 1266) && uParam0->f_1 != 1267) && uParam0->f_1 != 1268) && uParam0->f_1 != 1261) && uParam0->f_1 != 1262) && uParam0->f_1 != 1263) && uParam0->f_1 != 1264)
									{
										if (!bParam1 || uParam0->f_2 == -1)
										{
											PED::SET_PED_COMPONENT_VARIATION(*uParam0, 7, 0, 0, 0);
											PED::CLEAR_PED_PROP(*uParam0, 0);
										}
									}
									else if (__LIB_3__::func_334(*uParam0))
									{
										iVar13 = __LIB_3__::func_333(*uParam0, 1);
										iVar14 = PED::GET_PED_TEXTURE_VARIATION(*uParam0, 8);
										PED::SET_PED_COMPONENT_VARIATION(*uParam0, 8, iVar13, iVar14, 0);
										PED::CLEAR_PED_PROP(*uParam0, 0);
									}
									else if (!__LIB_3__::func_334(*uParam0) && __LIB_3__::func_332(*uParam0))
									{
										iVar15 = __LIB_3__::func_333(*uParam0, 0);
										iVar16 = PED::GET_PED_TEXTURE_VARIATION(*uParam0, 8);
										PED::SET_PED_COMPONENT_VARIATION(*uParam0, 8, iVar15, iVar16, 0);
										PED::CLEAR_PED_PROP(*uParam0, 0);
									}
									if (!bParam9)
									{
										func_1521(*uParam0);
									}
									if (uParam0->f_3 != 4 && uParam0->f_1 == 0)
									{
										if (iVar1 == joaat("MP_M_Freemode_01"))
										{
											FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_HEIST_M_HAIR_0_0"), &Var17);
										}
										else if (iVar1 == joaat("MP_F_Freemode_01"))
										{
											FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_HEIST_F_HAIR_0_0"), &Var17);
										}
										if (Global_78200[2] == Var17.f_3)
										{
											Global_78200[2] = -1;
										}
									}
									if (__LIB_3__::func_331(uParam0->f_1))
									{
										if (Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_76.f_20 == 0)
										{
											PED::SET_PED_COMPONENT_VARIATION(*uParam0, 0, 0, 0, 0);
											PED::SET_PED_COMPONENT_VARIATION(*uParam0, 1, 0, 0, 0);
											__LIB_0__::func_454(*uParam0, 0, -1, 0);
											__LIB_0__::func_454(*uParam0, 1, -1, 0);
											__LIB_0__::func_454(*uParam0, 2, -1, 0);
											func_1452(*uParam0, 14, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
											PED::SET_PED_CONFIG_FLAG(*uParam0, 380, true);
										}
									}
									if (Global_78200[2] == -1)
									{
										if ((uParam0->f_8 != -1 && PLAYER::INT_TO_PLAYERINDEX(uParam0->f_8) != PLAYER::PLAYER_ID()) && !*uParam0 == PLAYER::PLAYER_PED_ID())
										{
											iVar18 = Global_2689235[uParam0->f_8 /*453*/].f_249;
											iVar19 = Global_2689235[uParam0->f_8 /*453*/].f_250;
											iVar20 = 1;
											func_1452(*uParam0, 2, Global_2689235[uParam0->f_8 /*453*/].f_248, 0, -1, 0, 0, iVar20, iVar18, iVar19, uParam0->f_8, 1, 0, 0);
										}
										else
										{
											iVar18 = __LIB_1__::func_360(2153, -1, 0);
											iVar19 = __LIB_1__::func_360(2160, -1, 0);
											if (__LIB_1__::func_342(161, -1))
											{
												iVar21 = __LIB_1__::func_360(2053, -1, 0);
												if (iVar21 != -99)
												{
													iVar22 = -99;
													if (ENTITY::GET_ENTITY_MODEL(*uParam0) == joaat("MP_M_Freemode_01"))
													{
														iVar22 = __LIB_0__::func_463(iVar21);
													}
													else if (ENTITY::GET_ENTITY_MODEL(*uParam0) == joaat("MP_F_Freemode_01"))
													{
														iVar22 = __LIB_0__::func_462(iVar21);
													}
													if (iVar22 != -99 && iVar21 != iVar22)
													{
														iVar21 = iVar22;
													}
												}
												if (MISC::IS_PC_VERSION())
												{
													if (iVar1 == joaat("MP_M_Freemode_01"))
													{
														iVar21 = __LIB_0__::func_463(iVar21);
													}
													else if (iVar1 == joaat("MP_F_Freemode_01"))
													{
														iVar21 = __LIB_0__::func_462(iVar21);
														if (iVar21 == __LIB_0__::func_204(iVar1, joaat("DLC_MP_BIKER_F_HAIR_6_0"), 2, 4) || iVar21 == __LIB_0__::func_462(__LIB_0__::func_204(iVar1, joaat("DLC_MP_BIKER_F_HAIR_6_0"), 2, 4)))
														{
															iVar21 = __LIB_0__::func_462(__LIB_0__::func_204(iVar1, joaat("DLC_MP_BIKER_F_HAIR_5_0"), 2, 4));
														}
														else if (iVar21 == __LIB_0__::func_204(iVar1, joaat("DLC_MP_BIKER_F_HAIR_5_0"), 2, 4) || iVar21 == __LIB_0__::func_462(__LIB_0__::func_204(iVar1, joaat("DLC_MP_BIKER_F_HAIR_5_0"), 2, 4)))
														{
															iVar21 = __LIB_0__::func_462(__LIB_0__::func_204(iVar1, joaat("DLC_MP_BIKER_F_HAIR_6_0"), 2, 4));
														}
													}
												}
												func_1452(*uParam0, 2, iVar21, 0, -1, 0, 0, 0, iVar18, iVar19, -1, 0, 0, 0);
											}
											else
											{
												iVar23 = __LIB_1__::func_360(753, -1, 0);
												func_1452(*uParam0, 2, iVar23, 0, -1, 0, 0, 0, iVar18, iVar19, -1, 0, 0, 0);
											}
										}
										PED::SET_PED_COMPONENT_VARIATION(*uParam0, 1, PED::GET_PED_DRAWABLE_VARIATION(*uParam0, 1), PED::GET_PED_TEXTURE_VARIATION(*uParam0, 1), 0);
									}
								}
							}
							if (!__LIB_0__::func_157(0))
							{
								iVar25 = -1;
								if (uParam0->f_1 == 0)
								{
									bVar24 = false;
								}
								else
								{
									bVar24 = true;
									if (uParam0->f_1 == 1642)
									{
										iVar25 = Global_78200.f_46[0];
									}
								}
								if (uParam0->f_8 != -1)
								{
									func_1447(*uParam0, &(Global_1886249[uParam0->f_8 /*51*/]), bVar24, iVar25);
								}
								else
								{
									func_1418(*uParam0, bVar24, 0, iVar25);
								}
								if (iParam8 != -1)
								{
									iVar28 = FILES::GET_HASH_NAME_FOR_COMPONENT(*uParam0, 11, PED::GET_PED_DRAWABLE_VARIATION(*uParam0, 11), PED::GET_PED_TEXTURE_VARIATION(*uParam0, 11));
									if (__LIB_3__::func_330(iVar28, iParam8, &uVar26, &uVar27))
									{
										Global_78200.f_46[0] = uVar27;
									}
								}
								iVar29 = 0;
								while (iVar29 < Global_78200.f_46)
								{
									if (Global_78200.f_46[iVar29] != -1)
									{
										bVar30 = true;
									}
									iVar29++;
								}
								if (bVar30)
								{
									iVar37 = __LIB_0__::func_276(*uParam0);
									iVar33 = FILES::GET_NUM_TATTOO_SHOP_DLC_ITEMS(iVar37);
									iVar31 = 0;
									while (iVar31 < 127)
									{
										if (__LIB_0__::func_445(&Var36, iVar31, iVar37, *uParam0, -1))
										{
											iVar29 = 0;
											while (iVar29 < Global_78200.f_46)
											{
												if (Global_78200.f_46[iVar29] == Var36.f_5 && Global_78200.f_46[iVar29] != -1)
												{
													bVar34 = false;
													if (Var36.f_8 == joaat("crewLogo"))
													{
														if (iParam7 == 0)
														{
															bVar34 = true;
														}
														else if (iParam7 == 1)
														{
														}
														else if (iParam7 == 2)
														{
															GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(__LIB_2__::func_508(PLAYER::PLAYER_ID(), 0), false);
															GRAPHICS::OVERRIDE_PED_CREW_LOGO_TEXTURE(*uParam0, __LIB_2__::func_508(PLAYER::PLAYER_ID(), 0), __LIB_5__::func_490(PLAYER::PLAYER_ID(), 2));
														}
													}
													if (!bVar34)
													{
														PED::ADD_PED_DECORATION_FROM_HASHES(*uParam0, Var36.f_4, Var36.f_5);
														__LIB_0__::func_260(*uParam0, Var36.f_4, Var36.f_5);
													}
												}
												iVar29++;
											}
										}
										iVar31++;
									}
									iVar32 = 0;
									while (iVar32 < iVar33)
									{
										if (FILES::GET_TATTOO_SHOP_DLC_ITEM_DATA(iVar37, iVar32, &Var35))
										{
											iVar29 = 0;
											while (iVar29 < Global_78200.f_46)
											{
												if (Global_78200.f_46[iVar29] == Var35.f_3 && Global_78200.f_46[iVar29] != -1)
												{
													bVar34 = false;
													if (Var35.f_6 == joaat("crewLogo"))
													{
														if (iParam7 == 0)
														{
															bVar34 = true;
														}
														else if (iParam7 == 1)
														{
														}
														else if (iParam7 == 2)
														{
															GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(__LIB_2__::func_508(PLAYER::PLAYER_ID(), 0), false);
															GRAPHICS::OVERRIDE_PED_CREW_LOGO_TEXTURE(*uParam0, __LIB_2__::func_508(PLAYER::PLAYER_ID(), 0), __LIB_5__::func_490(PLAYER::PLAYER_ID(), 2));
														}
													}
													if (!bVar34)
													{
														PED::ADD_PED_DECORATION_FROM_HASHES(*uParam0, Var35.f_2, Var35.f_3);
														__LIB_0__::func_260(*uParam0, Var35.f_2, Var35.f_3);
													}
												}
												iVar29++;
											}
										}
										iVar32++;
									}
								}
							}
							PED::SET_PED_CAN_LOSE_PROPS_ON_DAMAGE(*uParam0, false, 0);
							__LIB_3__::func_329(*uParam0);
							uParam0->f_6 = 2;
							break;
						case 2:
							if (!__LIB_0__::func_157(0))
							{
								if (!PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(*uParam0) || !PED::HAS_PED_HEAD_BLEND_FINISHED(*uParam0))
								{
									return 0;
								}
								else
								{
									PED::FINALIZE_HEAD_BLEND(*uParam0);
									__LIB_3__::func_329(*uParam0);
									uParam0->f_7 = 1;
									uParam0->f_6 = 0;
									uParam0->f_5 = 0;
									return 1;
								}
							}
							else
							{
								__LIB_3__::func_329(*uParam0);
								uParam0->f_7 = 1;
								uParam0->f_6 = 0;
								uParam0->f_5 = 0;
								return 1;
							}
							break;
					}
				}
				else
				{
					return 1;
				}
			}
			else
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_1418(int iParam0, bool bParam1, bool bParam2, int iParam3)//Position - 0x7303A
{
	int iVar0;
	struct<9> Var1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	struct<8> Var9;
	int iVar10;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		iVar0 = Global_78127;
		PED::CLEAR_PED_DECORATIONS_LEAVE_SCARS(iParam0);
		iVar2 = __LIB_0__::func_276(iParam0);
		bVar3 = func_1445(iParam0, 0);
		bVar4 = __LIB_1__::func_37(iParam0);
		bVar5 = func_1436(iParam0, iParam3);
		if (bParam1)
		{
			bVar4 = true;
		}
		if (bParam2)
		{
			bVar4 = false;
		}
		iVar6 = 0;
		while (iVar6 < 127)
		{
			if (__LIB_2__::func_761(iVar6, iVar0))
			{
				if (__LIB_0__::func_445(&Var1, iVar6, iVar2, iParam0, -1))
				{
					if (__LIB_2__::func_998(iParam0, &Var1, iVar6, Var1.f_4, Var1.f_8, bVar3, bVar4, bParam1, bVar5))
					{
						PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, Var1.f_4, Var1.f_5);
					}
				}
			}
			iVar6++;
		}
		if (__LIB_2__::func_761(123, iVar0))
		{
			if (PED::GET_PED_DECORATION_ZONE_FROM_HASHES(joaat("mpBeach_overlays"), joaat("FM_Hair_Fuzz")) != 7)
			{
				PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpBeach_overlays"), joaat("FM_Hair_Fuzz"));
			}
		}
		iVar8 = FILES::GET_NUM_TATTOO_SHOP_DLC_ITEMS(iVar2);
		iVar7 = 0;
		while (iVar7 < iVar8)
		{
			if (FILES::GET_TATTOO_SHOP_DLC_ITEM_DATA(iVar2, iVar7, &Var9))
			{
				if (!FILES::IS_CONTENT_ITEM_LOCKED(Var9.f_0))
				{
					iVar10 = (129 + iVar7);
					if (__LIB_2__::func_761(iVar10, iVar0))
					{
						if (__LIB_2__::func_998(iParam0, &(Var9.f_7), iVar10, Var9.f_2, Var9.f_6, bVar3, bVar4, bParam1, bVar5))
						{
							if (!__LIB_5__::func_179(Var9.f_2, Var9.f_3, iVar10))
							{
								PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, Var9.f_2, Var9.f_3);
								__LIB_0__::func_260(iParam0, Var9.f_2, Var9.f_3);
							}
						}
					}
				}
			}
			iVar7++;
		}
	}
}

int func_1436(int iParam0, int iParam1)//Position - 0x7D4EB
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("MP_M_Freemode_01"))
		{
			iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
			iVar2 = __LIB_1__::func_360(1759, -1, 0);
			if (iParam1 != -1)
			{
				iVar2 = iParam1;
			}
			if (iVar0 > 15)
			{
				iVar3 = func_342(iParam0, 11, -1);
				if (iVar3 >= 237)
				{
					iVar4 = __LIB_0__::func_205(joaat("MP_M_Freemode_01"), iVar3, 11, 3);
					if ((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("TAT_DECL"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("MULTI_DECAL"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("TAT_DECL_NO_SAVE"), 0))
					{
						switch (iVar2)
						{
							case joaat("MP_Elite_M_Tshirt_1"):
							case joaat("MP_Battle_Clothing_000_M"):
							case joaat("MP_Heist4_Tee_039_M"):
							case joaat("MP_Heist4_Tee_041_M"):
							case joaat("MP_Heist4_Tee_043_M"):
							case joaat("MP_Heist4_Tee_049_M"):
							case joaat("MP_Heist4_Tee_051_M"):
							case joaat("MP_Heist4_Tee_055_M"):
							case joaat("MP_Heist4_Tee_057_M"):
							case joaat("MP_Heist4_Tee_059_M"):
							case joaat("MP_Heist4_Tee_061_M"):
							case joaat("MP_Heist4_Tee_063_M"):
							case joaat("MP_Heist4_Tee_065_M"):
							case joaat("MP_Tuner_Tee_000_M"):
							case joaat("MP_Tuner_Tee_002_M"):
							case joaat("MP_Tuner_Tee_003_M"):
							case joaat("MP_Tuner_Tee_005_M"):
							case joaat("MP_Tuner_Tee_006_M"):
							case joaat("MP_Tuner_Tee_008_M"):
							case joaat("MP_Tuner_Tee_010_M"):
								return 1;
								break;
						}
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("JACKET"), 0) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_VEST"), 0))
					{
						return 1;
					}
					return 0;
				}
			}
			return 0;
		}
		else if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("MP_F_Freemode_01"))
		{
			iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
			iVar1 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 11);
			iVar2 = __LIB_1__::func_360(1759, -1, 0);
			if (iParam1 != -1)
			{
				iVar2 = iParam1;
			}
			if (iVar0 == 3)
			{
				if (iVar1 == 14)
				{
					return 1;
				}
			}
			else if (iVar0 > 15)
			{
				iVar5 = func_342(iParam0, 11, -1);
				if (iVar5 >= 256)
				{
					iVar6 = __LIB_0__::func_205(joaat("MP_F_Freemode_01"), iVar5, 11, 4);
					if ((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("TAT_DECL"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("MULTI_DECAL"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("TAT_DECL_NO_SAVE"), 0))
					{
						switch (iVar2)
						{
							case joaat("MP_Elite_F_Tshirt_1"):
							case joaat("MP_Battle_Clothing_000_F"):
							case joaat("MP_Heist4_Tee_039_F"):
							case joaat("MP_Heist4_Tee_041_F"):
							case joaat("MP_Heist4_Tee_043_F"):
							case joaat("MP_Heist4_Tee_049_F"):
							case joaat("MP_Heist4_Tee_051_F"):
							case joaat("MP_Heist4_Tee_055_F"):
							case joaat("MP_Heist4_Tee_057_F"):
							case joaat("MP_Heist4_Tee_059_F"):
							case joaat("MP_Heist4_Tee_061_F"):
							case joaat("MP_Heist4_Tee_063_F"):
							case joaat("MP_Heist4_Tee_065_F"):
							case joaat("MP_Tuner_Tee_000_F"):
							case joaat("MP_Tuner_Tee_002_F"):
							case joaat("MP_Tuner_Tee_003_F"):
							case joaat("MP_Tuner_Tee_005_F"):
							case joaat("MP_Tuner_Tee_006_F"):
							case joaat("MP_Tuner_Tee_008_F"):
							case joaat("MP_Tuner_Tee_010_F"):
								return 1;
								break;
						}
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("JACKET"), 0) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("BIKER_VEST"), 0))
					{
						return 1;
					}
					return 0;
				}
			}
			return 0;
		}
	}
	return 0;
}

int func_1445(int iParam0, bool bParam1)//Position - 0x7D949
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("MP_M_Freemode_01"))
		{
			iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
			iVar1 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 11);
			switch (iVar0)
			{
				case 0:
					switch (iVar1)
					{
						case 1:
						case 3:
						case 5:
						case 7:
						case 4:
						case 8:
						case 11:
							return 1;
							break;
					}
					break;
				case 1:
					switch (iVar1)
					{
						case 3:
						case 5:
						case 6:
						case 8:
						case 4:
						case 14:
							return 1;
							break;
						case 1:
						case 7:
						case 12:
							iVar2 = __LIB_5__::func_29(joaat("MP_M_Freemode_01"), 11, func_342(iParam0, 11, -1), 0);
							if (((iVar1 == 1 && iVar2 == 88) || (iVar1 == 7 && iVar2 == 89)) || (iVar1 == 12 && iVar2 == 87))
							{
								return 1;
							}
							break;
					}
					break;
				case 2:
					switch (iVar1)
					{
						case 9:
							return 1;
							break;
					}
					break;
				case 5:
					if (!bParam1)
					{
						if (__LIB_2__::func_761(13, -1))
						{
							return 1;
						}
						else if (__LIB_2__::func_761(14, -1))
						{
							return 1;
						}
						else if (__LIB_2__::func_761(15, -1))
						{
							return 1;
						}
						else if (__LIB_2__::func_761(16, -1))
						{
							return 1;
						}
						else if (__LIB_2__::func_761(71, -1))
						{
							return 1;
						}
						else if (__LIB_2__::func_761(72, -1))
						{
						}
						else if (__LIB_0__::func_536(PLAYER::PLAYER_ID(), 1) && Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_76.f_21 != 0)
						{
							return 1;
						}
					}
					break;
				default:
					if (iVar0 > 15)
					{
						iVar3 = func_342(iParam0, 11, -1);
						if (iVar3 >= 237)
						{
							iVar4 = __LIB_0__::func_205(joaat("MP_M_Freemode_01"), iVar3, 11, 3);
							if ((((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("TAT_DECL"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("MULTI_DECAL"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("TAT_DECL_NO_SAVE"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("COMBAT_TOP"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("HEIST_DRAW_12"), 0))
							{
								return 1;
							}
						}
					}
					break;
			}
			iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 8);
			iVar1 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 8);
			switch (iVar0)
			{
				case 0:
					switch (iVar1)
					{
						case 1:
						case 3:
						case 5:
						case 7:
						case 4:
						case 8:
						case 11:
							return 1;
							break;
					}
					break;
				case 1:
					switch (iVar1)
					{
						case 3:
						case 5:
						case 6:
						case 8:
						case 4:
						case 14:
						case 1:
						case 7:
						case 12:
							return 1;
							break;
					}
					break;
				case 2:
					switch (iVar1)
					{
						case 1:
						case 3:
						case 5:
						case 7:
						case 4:
						case 8:
						case 11:
							return 1;
							break;
					}
					break;
				case 14:
					switch (iVar1)
					{
						case 3:
						case 5:
						case 6:
						case 8:
						case 4:
						case 14:
						case 1:
						case 7:
						case 12:
							return 1;
							break;
					}
					break;
				default:
					if (iVar0 > 15)
					{
						iVar5 = func_342(iParam0, 8, -1);
						if (iVar5 >= 241)
						{
							iVar6 = __LIB_0__::func_205(joaat("MP_M_Freemode_01"), iVar5, 8, 3);
							if (((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("TAT_DECL"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("MULTI_DECAL"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("TAT_DECL_NO_SAVE"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("COMBAT_TOP"), 0))
							{
								return 1;
							}
						}
					}
					break;
			}
		}
		else if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("MP_F_Freemode_01"))
		{
			iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
			iVar1 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 11);
			switch (iVar0)
			{
				case 0:
					switch (iVar1)
					{
						case 1:
						case 2:
							return 1;
							break;
						case 7:
						case 4:
						case 9:
							iVar7 = __LIB_5__::func_29(joaat("MP_F_Freemode_01"), 11, func_342(iParam0, 11, -1), 0);
							if (((iVar1 == 7 && iVar7 == 88) || (iVar1 == 4 && iVar7 == 89)) || (iVar1 == 9 && iVar7 == 87))
							{
								return 1;
							}
							break;
					}
					break;
				case 2:
					switch (iVar1)
					{
						case 0:
						case 1:
						case 2:
						case 3:
						case 4:
							return 1;
							break;
					}
					break;
				case 3:
					switch (iVar1)
					{
						case 14:
							return 1;
							break;
					}
					break;
				case 11:
					switch (iVar1)
					{
						case 10:
						case 11:
						case 15:
							return 1;
							break;
					}
					break;
				default:
					if (iVar0 > 15)
					{
						iVar8 = func_342(iParam0, 11, -1);
						if (iVar8 >= 256)
						{
							iVar9 = __LIB_0__::func_205(joaat("MP_F_Freemode_01"), iVar8, 11, 4);
							if ((((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar9, joaat("TAT_DECL"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar9, joaat("MULTI_DECAL"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar9, joaat("TAT_DECL_NO_SAVE"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar9, joaat("COMBAT_TOP"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar9, joaat("HEIST_DRAW_13"), 0))
							{
								return 1;
							}
						}
					}
					break;
			}
			iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 8);
			iVar1 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 8);
			switch (iVar0)
			{
				case 0:
					switch (iVar1)
					{
						case 1:
						case 2:
							return 1;
							break;
						case 7:
						case 4:
						case 9:
							iVar10 = __LIB_5__::func_29(joaat("MP_F_Freemode_01"), 11, func_342(iParam0, 11, -1), 0);
							if (((iVar1 == 7 && iVar10 == 88) || (iVar1 == 4 && iVar10 == 89)) || (iVar1 == 9 && iVar10 == 87))
							{
								return 1;
							}
							break;
					}
					break;
				case 1:
					switch (iVar1)
					{
						case 1:
						case 2:
							return 1;
							break;
						case 7:
						case 4:
						case 9:
							iVar11 = __LIB_5__::func_29(joaat("MP_F_Freemode_01"), 11, func_342(iParam0, 11, -1), 0);
							if (((iVar1 == 7 && iVar11 == 88) || (iVar1 == 4 && iVar11 == 89)) || (iVar1 == 9 && iVar11 == 87))
							{
								return 1;
							}
							break;
					}
					break;
				case 2:
					switch (iVar1)
					{
						case 1:
						case 3:
						case 5:
						case 7:
						case 4:
						case 8:
						case 11:
							return 1;
							break;
					}
					break;
				case 11:
					switch (iVar1)
					{
						case 10:
						case 11:
						case 15:
							return 1;
							break;
					}
					break;
				case 14:
					switch (iVar1)
					{
						case 3:
						case 5:
						case 6:
						case 8:
						case 4:
						case 14:
						case 1:
						case 7:
						case 12:
							return 1;
							break;
					}
					break;
				default:
					if (iVar0 > 15)
					{
						iVar12 = func_342(iParam0, 8, -1);
						if (iVar12 >= 136)
						{
							iVar13 = __LIB_0__::func_205(joaat("MP_F_Freemode_01"), iVar12, 8, 4);
							if (((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar13, joaat("TAT_DECL"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar13, joaat("MULTI_DECAL"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar13, joaat("TAT_DECL_NO_SAVE"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar13, joaat("COMBAT_TOP"), 0))
							{
								return 1;
							}
						}
					}
					break;
				}
			}
	}
	return 0;
}

void func_1447(int iParam0, var uParam1, bool bParam2, int iParam3)//Position - 0x7E9A7
{
	struct<9> Var0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	struct<8> Var8;
	int iVar9;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		PED::CLEAR_PED_DECORATIONS_LEAVE_SCARS(iParam0);
		iVar1 = __LIB_0__::func_276(iParam0);
		bVar2 = func_1445(iParam0, 0);
		bVar3 = __LIB_1__::func_37(iParam0);
		bVar4 = func_1436(iParam0, iParam3);
		if (bParam2)
		{
			bVar3 = true;
		}
		iVar5 = 0;
		while (iVar5 < 127)
		{
			if (BitTest((*uParam1)[(iVar5 / 32)], (iVar5 % 32)))
			{
				if (__LIB_0__::func_445(&Var0, iVar5, iVar1, iParam0, -1))
				{
					if (__LIB_2__::func_998(iParam0, &Var0, iVar5, Var0.f_4, Var0.f_8, bVar2, bVar3, bParam2, bVar4))
					{
						PED::ADD_PED_DECORATION_FROM_HASHES_IN_CORONA(iParam0, Var0.f_4, Var0.f_5);
					}
				}
			}
			iVar5++;
		}
		if (BitTest((*uParam1)[(123 / 32)], (123 % 32)))
		{
			if (PED::GET_PED_DECORATION_ZONE_FROM_HASHES(joaat("mpBeach_overlays"), joaat("FM_Hair_Fuzz")) != 7)
			{
				PED::ADD_PED_DECORATION_FROM_HASHES_IN_CORONA(iParam0, joaat("mpBeach_overlays"), joaat("FM_Hair_Fuzz"));
			}
		}
		iVar7 = FILES::GET_NUM_TATTOO_SHOP_DLC_ITEMS(iVar1);
		iVar6 = 0;
		while (iVar6 < iVar7)
		{
			if (FILES::GET_TATTOO_SHOP_DLC_ITEM_DATA(iVar1, iVar6, &Var8))
			{
				if (!FILES::IS_CONTENT_ITEM_LOCKED(Var8.f_0))
				{
					iVar9 = (129 + iVar6);
					if ((iVar9 / 32) >= *uParam1)
					{
					}
					else if (BitTest((*uParam1)[(iVar9 / 32)], (iVar9 % 32)))
					{
						if (__LIB_2__::func_998(iParam0, &(Var8.f_7), iVar9, Var8.f_2, Var8.f_6, bVar2, bVar3, bParam2, bVar4))
						{
							PED::ADD_PED_DECORATION_FROM_HASHES_IN_CORONA(iParam0, Var8.f_2, Var8.f_3);
							__LIB_0__::func_260(iParam0, Var8.f_2, Var8.f_3);
						}
					}
				}
			}
			iVar6++;
		}
	}
}

int func_1452(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, bool bParam12, bool bParam13)//Position - 0x7FA02
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	var uVar12;
	var uVar13;
	var uVar14;
	var uVar15;
	var uVar16;
	int iVar17;
	var uVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	int iVar27;
	int iVar28;
	int iVar29;
	int iVar30;
	int iVar31;
	int iVar32;
	int iVar33;
	int iVar34;
	int iVar35;
	int iVar36;
	int iVar37;
	int iVar38;
	int iVar39;
	int iVar40;
	int iVar41;
	int iVar42;
	int iVar43;
	int iVar44;
	int iVar45;
	int iVar46;
	int iVar47;
	int iVar48;
	int iVar49;
	int iVar50;
	int iVar51;
	int iVar52;
	int iVar53;
	int iVar54;
	float fVar55;
	int iVar56;
	int iVar57;
	int iVar58;
	int iVar59;
	int iVar60;
	int iVar61;
	int iVar62;
	int iVar63;
	int iVar64;
	int iVar65;
	int iVar66;
	var uVar67;
	int iVar68;
	int iVar69;
	int iVar70;
	int iVar71;
	int iVar72;
	int iVar73;
	int iVar74;
	int iVar75;
	int iVar76;
	int iVar77;
	int iVar78;
	var uVar79;
	int iVar80;
	int iVar81;
	int iVar82;
	int iVar83;
	int iVar84;
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if ((Global_1574990 != 4 && Global_1574990 != 5) && Global_1574990 != 7)
		{
			return 0;
		}
	}
	if (PED::IS_PED_INJURED(iParam0) || iParam2 == -99)
	{
		return 0;
	}
	if (iParam0 == PLAYER::PLAYER_PED_ID() && Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_230 == 2)
	{
		if (!bParam12)
		{
			return 0;
		}
	}
	if (iParam10 == -1)
	{
		iParam10 = Global_78127;
	}
	Global_78128++;
	iVar5 = ENTITY::GET_ENTITY_MODEL(iParam0);
	iVar6 = -99;
	iVar7 = -99;
	iVar8 = -99;
	iVar9 = -99;
	iVar10 = -1;
	iVar11 = -1;
	if (iParam5 == 0)
	{
		Global_78130[1 /*14*/] = { __LIB_6__::func_38(iVar5, iParam1, iParam2, -1) };
		if (!__LIB_0__::func_32(iParam3))
		{
			Global_78128 = (Global_78128 - 1);
			return 0;
		}
		if (iParam1 == 11 && Global_78128 > 1)
		{
		}
		else
		{
			func_1516(iVar5, iParam1, iParam2, 1);
		}
	}
	if (iParam1 == 12)
	{
		uVar12 = Global_2883588;
		uVar13 = Global_2883589;
		PED::CLEAR_ALL_PED_PROPS(iParam0);
		uVar14 = 15;
		if (iParam5 == 1)
		{
			uVar14 = { Global_78173 };
		}
		else
		{
			uVar14 = { __LIB_0__::func_459(iVar5, iParam2) };
		}
		iVar0 = 0;
		while (iVar0 <= 14)
		{
			if (uVar14[iVar0] != -99)
			{
				if (iVar0 == 10 && uVar14.f_16)
				{
					Global_78130[1 /*14*/] = { __LIB_6__::func_38(iVar5, 10, 0, -1) };
					if (iParam4 == -1)
					{
						PED::SET_PED_COMPONENT_VARIATION(iParam0, __LIB_0__::func_33(iVar0), Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4, PED::GET_PED_PALETTE_VARIATION(iParam0, __LIB_0__::func_33(iVar0)));
					}
					else
					{
						PED::SET_PED_COMPONENT_VARIATION(iParam0, __LIB_0__::func_33(iVar0), Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4, iParam4);
					}
					if (BitTest(Global_78130[1 /*14*/].f_6, 1))
					{
						func_1516(iVar5, 10, 0, 1);
					}
				}
				else
				{
					Global_78130[1 /*14*/] = { __LIB_6__::func_38(iVar5, iVar0, uVar14[iVar0], -1) };
					if (BitTest(Global_78130[1 /*14*/].f_6, 0) || iVar0 == 13)
					{
						if (iVar0 == 13)
						{
							uVar15 = 9;
							if (iParam5 == 1)
							{
								uVar15 = { Global_78190 };
							}
							else
							{
								uVar15 = { __LIB_0__::func_466(iVar5, uVar14[iVar0]) };
							}
							iVar1 = 0;
							while (iVar1 <= 8)
							{
								Global_78130[1 /*14*/] = { __LIB_6__::func_38(iVar5, 14, uVar15[iVar1], -1) };
								__LIB_0__::func_454(iParam0, Global_78130[1 /*14*/].f_12, Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4);
								if (BitTest(Global_78130[1 /*14*/].f_6, 1))
								{
									func_1516(iVar5, iVar0, uVar14[iVar0], 1);
								}
								iVar1++;
							}
						}
						else if (iVar0 != 14 && iVar0 != 12)
						{
							if (iVar0 != 1)
							{
								if (iParam4 == -1)
								{
									PED::SET_PED_COMPONENT_VARIATION(iParam0, __LIB_0__::func_33(iVar0), Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4, PED::GET_PED_PALETTE_VARIATION(iParam0, __LIB_0__::func_33(iVar0)));
								}
								else
								{
									PED::SET_PED_COMPONENT_VARIATION(iParam0, __LIB_0__::func_33(iVar0), Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4, iParam4);
								}
							}
							else
							{
								func_1452(iParam0, iVar0, uVar14[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							if (BitTest(Global_78130[1 /*14*/].f_6, 1))
							{
								func_1516(iVar5, iVar0, uVar14[iVar0], 1);
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_78130[1 /*14*/] = { __LIB_6__::func_38(iVar5, iVar0, func_342(iParam0, iVar0, -1), -1) };
				if (BitTest(Global_78130[1 /*14*/].f_6, 3))
				{
					uVar16 = { __LIB_0__::func_459(iVar5, 0) };
					func_1452(iParam0, iVar0, uVar16[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
			}
			iVar0++;
		}
		PED::SET_PED_COMPONENT_VARIATION(iParam0, 1, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1), PED::GET_PED_TEXTURE_VARIATION(iParam0, 1), 0);
		Global_2883588 = uVar12;
		Global_2883589 = uVar13;
		if (iParam5 == 0)
		{
			iVar17 = __LIB_2__::func_979();
			if (iVar17 != -1)
			{
				__LIB_2__::func_978(iVar17, 0, iParam10);
			}
			func_1510(iParam0, 11, uVar14[11], iParam6, 0);
		}
	}
	else if (iParam1 == 13)
	{
		uVar18 = { __LIB_0__::func_466(iVar5, iParam2) };
		iVar1 = 0;
		while (iVar1 <= 8)
		{
			Global_78130[1 /*14*/] = { __LIB_6__::func_38(iVar5, 14, uVar18[iVar1], -1) };
			__LIB_0__::func_454(iParam0, Global_78130[1 /*14*/].f_12, Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4);
			if (BitTest(Global_78130[1 /*14*/].f_6, 1))
			{
				func_1516(iVar5, 14, uVar18[iVar1], 1);
			}
			if (iParam5 == 0)
			{
				if (Global_78128 == 1)
				{
					iVar2 = 0;
					while (iVar2 < 15)
					{
						iVar3 = __LIB_9__::func_528(iParam0, iVar5, 14, uVar18[iVar1], iVar2, 0);
						if (iVar3 != -99)
						{
							func_1452(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						}
						iVar2++;
					}
				}
			}
			iVar1++;
		}
	}
	else if (iParam1 == 14)
	{
		__LIB_0__::func_454(iParam0, Global_78130[1 /*14*/].f_12, Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4);
		if (BitTest(Global_78130[1 /*14*/].f_6, 1))
		{
			func_1516(iVar5, iParam1, iParam2, 1);
		}
		if (Global_78130[1 /*14*/].f_12 == 0)
		{
			if (BitTest(Global_78130[1 /*14*/].f_6, 6) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("SHRINK_HAIR"), 1))
			{
			}
			else if (FILES::DOES_CURRENT_PED_COMPONENT_HAVE_RESTRICTION_TAG(iParam0, 1, joaat("HAIR_SHRINK")))
			{
				func_1452(iParam0, 1, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				Global_78130[1 /*14*/] = { __LIB_6__::func_38(iVar5, iParam1, iParam2, -1) };
			}
		}
		if (Global_78130[1 /*14*/].f_12 == 0)
		{
			func_1521(iParam0);
		}
		if (iParam5 == 0)
		{
			if (Global_78128 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = __LIB_9__::func_528(iParam0, iVar5, iParam1, iParam2, iVar2, 0);
					if (iVar3 != -99)
					{
						func_1452(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar2++;
				}
				iVar3 = __LIB_9__::func_528(iParam0, iVar5, iParam1, iParam2, 14, 1);
				if (iVar3 != -99)
				{
					func_1452(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
			}
		}
	}
	else
	{
		iVar19 = __LIB_0__::func_33(iParam1);
		if (PED::GET_PED_DRAWABLE_VARIATION(iParam0, iVar19) != Global_78130[1 /*14*/].f_3 || PED::GET_PED_TEXTURE_VARIATION(iParam0, iVar19) != Global_78130[1 /*14*/].f_4)
		{
			iVar20 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 8, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 8), PED::GET_PED_TEXTURE_VARIATION(iParam0, 8));
			iVar21 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 7, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 7), PED::GET_PED_TEXTURE_VARIATION(iParam0, 7));
			if (((iParam1 == 11 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar21, joaat("REMOVE_WITH_JBIB"), 0)) || (iParam1 == 8 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar21, joaat("REMOVE_WITH_SPECIAL"), 0))) || (iParam1 == 4 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar21, joaat("REMOVE_WITH_LEGS"), 0)))
			{
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 7, 0, 0, PED::GET_PED_PALETTE_VARIATION(iParam0, 7));
			}
			if ((iParam1 == 11 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar20, joaat("REMOVE_WITH_JBIB"), 0)) || (iParam1 == 4 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar20, joaat("REMOVE_WITH_LEGS"), 0)))
			{
				if (iVar5 == joaat("MP_M_Freemode_01"))
				{
					PED::SET_PED_COMPONENT_VARIATION(iParam0, 8, 15, 0, PED::GET_PED_PALETTE_VARIATION(iParam0, 8));
				}
				else if (iVar5 == joaat("MP_F_Freemode_01"))
				{
					PED::SET_PED_COMPONENT_VARIATION(iParam0, 8, 2, 0, PED::GET_PED_PALETTE_VARIATION(iParam0, 8));
				}
			}
		}
		if (iParam1 == 11)
		{
			if (iParam5 == 0)
			{
				iVar22 = -1;
				if (BitTest(Global_78130[1 /*14*/].f_6, 6) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("CREW_COL"), 11))
				{
					PED::SET_HEAD_BLEND_PALETTE_COLOR(iParam0, Global_1576215, Global_1576216, Global_1576217, 0);
					PED::SET_HEAD_BLEND_PALETTE_COLOR(iParam0, Global_1576215, Global_1576216, Global_1576217, 1);
					PED::SET_HEAD_BLEND_PALETTE_COLOR(iParam0, Global_1576215, Global_1576216, Global_1576217, 2);
					PED::SET_HEAD_BLEND_PALETTE_COLOR(iParam0, Global_1576215, Global_1576216, Global_1576217, 3);
				}
				iVar23 = __LIB_0__::func_350(iParam0, 11);
				iVar24 = __LIB_0__::func_350(iParam0, 8);
				iVar25 = __LIB_0__::func_350(iParam0, 4);
				if (FILES::DOES_CURRENT_PED_COMPONENT_HAVE_RESTRICTION_TAG(iParam0, 8, joaat("OVER_JACKET")))
				{
					if (iVar5 == joaat("MP_M_Freemode_01"))
					{
						iVar22 = __LIB_0__::func_205(iVar5, iParam2, 11, 3);
					}
					else if (iVar5 == joaat("MP_F_Freemode_01"))
					{
						iVar22 = __LIB_0__::func_205(iVar5, iParam2, 11, 4);
					}
					if ((((((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("SILK_ROBE"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("SILK_PYJAMAS"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("SMOKING_JACKET"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("SANTA_SUIT"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("MORPH_SUIT"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("GORKA_SUIT"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("CAT_SUIT"), 0))
					{
					}
					else
					{
						iVar8 = __LIB_0__::func_350(iParam0, 8);
					}
				}
				iVar26 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 3, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3), 0);
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar26, joaat("GLOVES"), 0))
				{
					iVar27 = func_1507(iVar5, iVar24, iVar23, iVar25);
					if (iVar27 == -99)
					{
						iVar27 = __LIB_9__::func_528(iParam0, iVar5, 11, iVar23, 3, 0);
					}
					switch (iVar26)
					{
						case joaat("DLC_MP_VAL_F_UPPR0_0"):
						case joaat("DLC_MP_VAL_F_UPPR0_1"):
						case joaat("DLC_MP_VAL_F_UPPR0_2"):
						case joaat("DLC_MP_VAL_F_UPPR0_3"):
						case joaat("DLC_MP_VAL_F_UPPR0_4"):
						case joaat("DLC_MP_VAL_F_UPPR0_5"):
							iVar27 = 11;
							iVar22 = __LIB_0__::func_205(iVar5, iParam2, 11, 4);
							if (!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("DRESS"), 0))
							{
								iVar27 = -99;
							}
							break;
					}
					if (iVar27 != -99)
					{
						iVar28 = 0;
						while (iVar28 < 18)
						{
							if (__LIB_0__::func_282(iVar5, iVar27, iVar28) == iVar26)
							{
								iVar10 = iVar28;
								iVar11 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 3);
							}
							iVar28++;
						}
					}
				}
				iVar22 = -1;
				if ((iVar5 == joaat("MP_F_Freemode_01") && iParam2 >= 256) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(__LIB_0__::func_205(iVar5, iParam2, 11, 4), joaat("VEST"), 0))
				{
					iVar23 = __LIB_0__::func_350(iParam0, 11);
					if (iVar23 >= 256)
					{
						iVar22 = __LIB_0__::func_205(iVar5, iVar23, 11, 4);
					}
					if (iVar23 >= 256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("VEST_SHIRT"), 0))
					{
						iVar29 = __LIB_0__::func_452(iVar5, iVar23, iParam2, PED::GET_PED_TEXTURE_VARIATION(iParam0, 11));
						if (iVar29 != -99)
						{
							func_1452(iParam0, 8, iVar29, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							Global_78130[1 /*14*/] = { __LIB_6__::func_38(iVar5, iParam1, iParam2, -1) };
						}
					}
				}
				else if (__LIB_0__::func_280(iVar5, iParam2, -1))
				{
					if (iVar5 == joaat("MP_M_Freemode_01"))
					{
						if (iVar23 >= 237)
						{
							iVar22 = __LIB_0__::func_205(iVar5, iVar23, 11, 3);
						}
					}
					else if (iVar5 == joaat("MP_F_Freemode_01"))
					{
						if (iVar23 >= 256)
						{
							iVar22 = __LIB_0__::func_205(iVar5, iVar23, 11, 4);
						}
					}
					iVar8 = -99;
					if (!__LIB_0__::func_280(iVar5, iVar23, -1))
					{
						if ((iVar5 == joaat("MP_F_Freemode_01") && iVar23 >= 256) && (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("VEST"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("VEST_SHIRT"), 0)))
						{
						}
						else if ((iVar5 == joaat("MP_F_Freemode_01") && iVar23 >= 256) && ((((((((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("HEIST_DRAW_5"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("HEIST_DRAW_6"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("HEIST_DRAW_7"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("HEIST_DRAW_11"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("HEIST_DRAW_12"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("APART_DRAW_8"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("APART_DRAW_9"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("STUNT_DRAW_4"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("STUNT_DRAW_9"), 0)))
						{
						}
						else
						{
							iVar30 = __LIB_7__::func_884(iParam0, iParam2);
							iVar31 = __LIB_0__::func_452(iVar5, iVar23, iParam2, PED::GET_PED_TEXTURE_VARIATION(iParam0, 11));
							if (iVar31 != -99)
							{
								func_1452(iParam0, 8, iVar31, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_78130[1 /*14*/] = { __LIB_6__::func_38(iVar5, iParam1, iParam2, -1) };
								iVar8 = -99;
							}
							else if (iVar30 != -99 && (iParam0 == PLAYER::PLAYER_PED_ID() || iParam0 == Global_4538723))
							{
								func_1452(iParam0, 8, iVar30, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_78130[1 /*14*/] = { __LIB_6__::func_38(iVar5, iParam1, iParam2, -1) };
							}
							else
							{
								if (iVar5 == joaat("MP_M_Freemode_01"))
								{
									iVar32 = __LIB_0__::func_279(iVar5, 11, -1);
									Global_78130[1 /*14*/] = { __LIB_6__::func_38(iVar5, 11, iVar32, -1) };
									iVar31 = __LIB_0__::func_452(iVar5, iVar32, iParam2, Global_78130[1 /*14*/].f_4);
									iVar33 = __LIB_0__::func_205(iVar5, iParam2, 11, 3);
									if ((iVar31 == -99 || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar33, joaat("BIKER_VEST"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar33, joaat("OPEN_SHORT"), 0))
									{
										iVar31 = 240;
									}
								}
								else if (iVar5 == joaat("MP_F_Freemode_01"))
								{
									if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(__LIB_0__::func_205(iVar5, iParam2, 11, 4), joaat("BIKER_VEST"), 0))
									{
										iVar31 = 120;
									}
									else
									{
										iVar31 = 48;
									}
								}
								func_1452(iParam0, 8, iVar31, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_78130[1 /*14*/] = { __LIB_6__::func_38(iVar5, iParam1, iParam2, -1) };
							}
						}
					}
					else
					{
						Global_78130[1 /*14*/] = { __LIB_6__::func_38(iVar5, 11, iVar23, -1) };
						iVar34 = Global_78130[1 /*14*/].f_3;
						Global_78130[1 /*14*/] = { __LIB_6__::func_38(iVar5, 11, iParam2, -1) };
						iVar35 = Global_78130[1 /*14*/].f_3;
						if (iVar34 != iVar35)
						{
							iVar37 = __LIB_7__::func_884(iParam0, iParam2);
							Global_78130[1 /*14*/] = { __LIB_6__::func_38(iVar5, 8, iVar24, -1) };
							iVar36 = Global_78130[1 /*14*/].f_4;
							iVar38 = __LIB_0__::func_357(iVar5, iVar24, iVar36);
							if (iVar37 != -99 && (iParam0 == PLAYER::PLAYER_PED_ID() || iParam0 == Global_4538723))
							{
								iVar39 = iVar37;
							}
							else if (iVar38 == -99)
							{
								iVar39 = iVar24;
								if (iVar5 == joaat("MP_M_Freemode_01"))
								{
									iVar40 = __LIB_0__::func_205(iVar5, iParam2, 11, 3);
									if (((iParam2 >= 96 && iParam2 <= 107) || __LIB_0__::func_278(iVar40) == 6) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar40, joaat("BIKER_VEST"), 0))
									{
										iVar38 = __LIB_0__::func_279(iVar5, 11, -1);
										Global_78130[1 /*14*/] = { __LIB_6__::func_38(iVar5, 11, iVar38, -1) };
										iVar39 = __LIB_0__::func_452(iVar5, iVar38, iParam2, Global_78130[1 /*14*/].f_4);
									}
								}
								if (iVar5 == joaat("MP_F_Freemode_01") && ((iVar24 == 32 || iVar24 == 33) || iVar24 == 119))
								{
									if (!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(__LIB_0__::func_205(iVar5, iParam2, 11, 4), joaat("JACKET_ONLY"), 0))
									{
										iVar38 = __LIB_0__::func_279(iVar5, 11, -1);
										Global_78130[1 /*14*/] = { __LIB_6__::func_38(iVar5, 11, iVar38, -1) };
										iVar39 = __LIB_0__::func_452(iVar5, iVar38, iParam2, Global_78130[1 /*14*/].f_4);
									}
								}
								iVar41 = -1;
								if (iVar5 == joaat("MP_M_Freemode_01"))
								{
									iVar41 = __LIB_0__::func_205(iVar5, iVar24, 8, 3);
								}
								else if (iVar5 == joaat("MP_F_Freemode_01"))
								{
									iVar41 = __LIB_0__::func_205(iVar5, iVar24, 8, 4);
								}
								if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar41, joaat("OVERCOAT_ACCS"), 0))
								{
									iVar38 = __LIB_0__::func_279(iVar5, 11, -1);
									Global_78130[1 /*14*/] = { __LIB_6__::func_38(iVar5, 11, iVar38, -1) };
									iVar39 = __LIB_0__::func_452(iVar5, iVar38, iParam2, Global_78130[1 /*14*/].f_4);
								}
							}
							else
							{
								iVar39 = __LIB_0__::func_452(iVar5, iVar38, iParam2, iVar36);
								if (iVar5 == joaat("MP_M_Freemode_01"))
								{
									if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(__LIB_0__::func_205(iVar5, iParam2, 11, 3), joaat("LOW2_OPEN_CHECK"), 0))
									{
										if (!__LIB_0__::func_451(iVar5, __LIB_0__::func_350(iParam0, 4), iVar38))
										{
											iVar39 = 240;
										}
									}
								}
								else if (iVar5 == joaat("MP_F_Freemode_01"))
								{
									if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(__LIB_0__::func_205(iVar5, iParam2, 11, 4), joaat("LOW2_OPEN_CHECK"), 0))
									{
										if (!__LIB_0__::func_451(iVar5, __LIB_0__::func_350(iParam0, 4), iVar38))
										{
											iVar39 = 48;
										}
									}
								}
							}
							if (iVar39 != -99)
							{
								func_1452(iParam0, 8, iVar39, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							else if (iVar5 == joaat("MP_M_Freemode_01"))
							{
								iVar38 = __LIB_0__::func_279(iVar5, 11, -1);
								Global_78130[1 /*14*/] = { __LIB_6__::func_38(iVar5, 11, iVar38, -1) };
								iVar39 = __LIB_0__::func_452(iVar5, iVar38, iParam2, Global_78130[1 /*14*/].f_4);
								if (iVar39 == -99)
								{
									iVar39 = 240;
								}
								func_1452(iParam0, 8, iVar39, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							else if (iVar5 == joaat("MP_F_Freemode_01"))
							{
								func_1452(iParam0, 8, 48, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							Global_78130[1 /*14*/] = { __LIB_6__::func_38(iVar5, iParam1, iParam2, -1) };
						}
					}
				}
				__LIB_6__::func_37(iVar5, iParam2);
				if (!bParam13)
				{
					PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, 0, 0, PED::GET_PED_PALETTE_VARIATION(iParam0, 10));
				}
			}
			func_1510(iParam0, iParam1, iParam2, iParam6, 0);
			if (iParam5 == 0)
			{
				iVar6 = func_1507(iVar5, func_342(iParam0, 8, -1), iParam2, func_342(iParam0, 4, -1));
			}
		}
		else if (iParam1 == 2)
		{
			if (iParam5 == 0)
			{
				if (iParam8 == -1)
				{
					iParam8 = __LIB_1__::func_360(2153, iParam10, 0);
				}
				if (iParam9 == -1)
				{
					iParam9 = __LIB_1__::func_360(2160, iParam10, 0);
				}
				PED::SET_PED_HAIR_TINT(iParam0, iParam8, iParam9);
			}
			if (iParam7 == 0)
			{
				if (iParam2 != -99)
				{
					iVar42 = -99;
					if (iVar5 == joaat("MP_M_Freemode_01"))
					{
						iVar42 = __LIB_0__::func_463(iParam2);
					}
					else if (iVar5 == joaat("MP_F_Freemode_01"))
					{
						iVar42 = __LIB_0__::func_462(iParam2);
					}
					if (iVar42 != -99 && iParam2 != iVar42)
					{
						iParam2 = iVar42;
					}
				}
				func_1493(iParam0, iParam2, iParam10, bParam11);
			}
		}
		else if (iParam1 == 8)
		{
			iVar43 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 3, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3), 0);
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar43, joaat("GLOVES"), 0))
			{
				iVar44 = __LIB_0__::func_350(iParam0, 11);
				iVar45 = __LIB_0__::func_350(iParam0, 4);
				iVar46 = func_1507(iVar5, iParam2, iVar44, iVar45);
				if (iVar46 == -99)
				{
					iVar46 = __LIB_9__::func_528(iParam0, iVar5, 11, iVar44, 3, 0);
				}
				switch (iVar43)
				{
					case joaat("DLC_MP_VAL_F_UPPR0_0"):
					case joaat("DLC_MP_VAL_F_UPPR0_1"):
					case joaat("DLC_MP_VAL_F_UPPR0_2"):
					case joaat("DLC_MP_VAL_F_UPPR0_3"):
					case joaat("DLC_MP_VAL_F_UPPR0_4"):
					case joaat("DLC_MP_VAL_F_UPPR0_5"):
						iVar46 = 11;
						iVar47 = __LIB_0__::func_205(iVar5, iParam2, 11, 4);
						if (!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar47, joaat("DRESS"), 0))
						{
							iVar46 = -99;
						}
						break;
				}
				if (iVar46 != -99)
				{
					iVar48 = 0;
					while (iVar48 < 18)
					{
						if (__LIB_0__::func_282(iVar5, iVar46, iVar48) == iVar43)
						{
							iVar10 = iVar48;
							iVar11 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 3);
						}
						iVar48++;
					}
				}
			}
			func_1510(iParam0, iParam1, iParam2, iParam6, 0);
			iVar49 = __LIB_0__::func_350(iParam0, 11);
			if (__LIB_0__::func_280(iVar5, iVar49, -1))
			{
				iVar50 = __LIB_0__::func_357(iVar5, iParam2, Global_78130[1 /*14*/].f_4);
				__LIB_6__::func_37(iVar5, iVar50);
			}
			if (iParam5 == 0)
			{
				iVar6 = func_1507(iVar5, iParam2, __LIB_0__::func_350(iParam0, 11), __LIB_0__::func_350(iParam0, 4));
			}
		}
		else if (iParam1 == 9)
		{
			if (iParam2 >= 1 && iParam2 <= 41)
			{
				iVar51 = __LIB_0__::func_350(iParam0, 7);
				if (!__LIB_0__::func_547(iVar5, iVar51, 9, -99, -99, -99, iParam0, 0, iParam2, -99, -99, -99))
				{
					PED::SET_PED_COMPONENT_VARIATION(iParam0, __LIB_0__::func_33(7), 0, 0, 0);
				}
			}
		}
		else if (iParam1 == 1)
		{
			if (((iVar5 == joaat("MP_M_Freemode_01") && iParam2 >= 26) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("SHRINK_HEAD"), 0)) || ((iVar5 == joaat("MP_F_Freemode_01") && iParam2 >= 26) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("SHRINK_HEAD"), 0)))
			{
				iVar52 = __LIB_1__::func_360(2100, iParam10, 0);
				iVar53 = __LIB_1__::func_360(2101, iParam10, 0);
				iVar54 = __LIB_1__::func_360(2102, iParam10, 0);
				fVar55 = __LIB_1__::func_680(135, iParam10);
				if (iVar5 == joaat("MP_M_Freemode_01"))
				{
					PED::SET_PED_HEAD_BLEND_DATA(iParam0, 0, 0, 0, iVar52, iVar53, iVar54, 0f, fVar55, 0f, false);
				}
				else if (iVar5 == joaat("MP_F_Freemode_01"))
				{
					PED::SET_PED_HEAD_BLEND_DATA(iParam0, 21, 0, 0, iVar52, iVar53, iVar54, 0f, fVar55, 0f, false);
				}
				iVar56 = 0;
				while (iVar56 < 20)
				{
					PED::SET_PED_MICRO_MORPH(iParam0, iVar56, 0f);
					iVar56++;
				}
			}
			else
			{
				__LIB_2__::func_996(iParam0, iParam10);
			}
		}
		else if (iParam1 == 4)
		{
			iVar57 = __LIB_0__::func_350(iParam0, 11);
			iVar58 = __LIB_0__::func_350(iParam0, 8);
			if (iVar5 == joaat("MP_M_Freemode_01"))
			{
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(__LIB_0__::func_205(iVar5, iVar57, 11, 3), joaat("LOW2_OPEN_CHECK"), 0))
				{
					if (!__LIB_0__::func_451(iVar5, iParam2, __LIB_0__::func_357(iVar5, iVar58, 0)))
					{
						func_1452(iParam0, 8, 240, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						Global_78130[1 /*14*/] = { __LIB_6__::func_38(iVar5, iParam1, iParam2, -1) };
					}
				}
			}
			else if (iVar5 == joaat("MP_F_Freemode_01"))
			{
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(__LIB_0__::func_205(iVar5, iVar57, 11, 4), joaat("LOW2_OPEN_CHECK"), 0))
				{
					if (!__LIB_0__::func_451(iVar5, iParam2, __LIB_0__::func_357(iVar5, iVar58, 0)))
					{
						func_1452(iParam0, 8, 78, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						Global_78130[1 /*14*/] = { __LIB_6__::func_38(iVar5, iParam1, iParam2, -1) };
					}
				}
			}
			if (iParam5 == 0)
			{
				iVar6 = func_1507(iVar5, __LIB_0__::func_350(iParam0, 8), __LIB_0__::func_350(iParam0, 11), iParam2);
			}
			iVar59 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 3, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3), 0);
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar59, joaat("GLOVES"), 0))
			{
				iVar60 = func_1507(iVar5, iVar58, iVar57, iParam2);
				if (iVar60 == -99)
				{
					iVar60 = __LIB_9__::func_528(iParam0, iVar5, 11, iVar57, 3, 0);
				}
				switch (iVar59)
				{
					case joaat("DLC_MP_VAL_F_UPPR0_0"):
					case joaat("DLC_MP_VAL_F_UPPR0_1"):
					case joaat("DLC_MP_VAL_F_UPPR0_2"):
					case joaat("DLC_MP_VAL_F_UPPR0_3"):
					case joaat("DLC_MP_VAL_F_UPPR0_4"):
					case joaat("DLC_MP_VAL_F_UPPR0_5"):
						iVar60 = 11;
						iVar61 = __LIB_0__::func_205(iVar5, iParam2, 11, 4);
						if (!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar61, joaat("DRESS"), 0))
						{
							iVar60 = -99;
						}
						break;
				}
				if (iVar60 != -99)
				{
					iVar62 = 0;
					while (iVar62 < 18)
					{
						if (__LIB_0__::func_282(iVar5, iVar60, iVar62) == iVar59)
						{
							iVar10 = iVar62;
							iVar11 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 3);
						}
						iVar62++;
					}
				}
			}
		}
		if (iParam4 == -1)
		{
			PED::SET_PED_COMPONENT_VARIATION(iParam0, __LIB_0__::func_33(iParam1), Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4, PED::GET_PED_PALETTE_VARIATION(iParam0, __LIB_0__::func_33(iParam1)));
		}
		else
		{
			PED::SET_PED_COMPONENT_VARIATION(iParam0, __LIB_0__::func_33(iParam1), Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4, iParam4);
		}
		if (iParam5 == 0)
		{
			if (Global_78128 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = __LIB_9__::func_528(iParam0, iVar5, iParam1, iParam2, iVar2, 0);
					if (iVar3 != -99)
					{
						func_1452(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, iParam1 == 10);
						if (iVar2 == 3)
						{
							switch (Global_2883588)
							{
								case joaat("DLC_MP_VAL_F_UPPR0_0"):
								case joaat("DLC_MP_VAL_F_UPPR0_1"):
								case joaat("DLC_MP_VAL_F_UPPR0_2"):
								case joaat("DLC_MP_VAL_F_UPPR0_3"):
								case joaat("DLC_MP_VAL_F_UPPR0_4"):
								case joaat("DLC_MP_VAL_F_UPPR0_5"):
									iVar10 = -1;
									break;
							}
						}
						else if (iVar2 == 8)
						{
							if (iVar6 != -99)
							{
								iVar6 = func_1507(iVar5, iVar3, __LIB_0__::func_350(iParam0, 11), __LIB_0__::func_350(iParam0, 4));
							}
						}
					}
					iVar2++;
				}
				iVar3 = __LIB_9__::func_528(iParam0, iVar5, iParam1, iParam2, 14, 1);
				if (iVar3 != -99)
				{
					func_1452(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
			}
			if ((iParam1 == 11 || iParam1 == 8) || iParam1 == 4)
			{
				if (__LIB_0__::func_248(iParam0))
				{
					iVar63 = __LIB_0__::func_442(iParam0, iVar5, iParam1, iParam2);
					if (iVar63 > 0)
					{
						iVar63 = (iVar63 + PED::GET_PED_TEXTURE_VARIATION(iParam0, 9));
						if (!func_343(iParam0, 9, iVar63))
						{
							func_1452(iParam0, 9, iVar63, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						}
					}
					else
					{
						func_1452(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					if (FILES::DOES_CURRENT_PED_COMPONENT_HAVE_RESTRICTION_TAG(iParam0, 8, joaat("OVER_JACKET")))
					{
						func_1452(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			if (iParam1 == 11 || iParam1 == 8)
			{
				iVar64 = __LIB_1__::func_360(2042, -1, 0);
				if (PED::GET_PED_DRAWABLE_VARIATION(iParam0, 5) != 0)
				{
					PED::SET_PED_COMPONENT_VARIATION(iParam0, 5, __LIB_0__::func_533(iParam0, iVar64), __LIB_0__::func_242(iParam0, iVar64), __LIB_0__::func_114(iParam0, iVar64));
				}
				if (iParam0 == PLAYER::PLAYER_PED_ID())
				{
					PLAYER::SET_PLAYER_PARACHUTE_VARIATION_OVERRIDE(PLAYER::PLAYER_ID(), 5, __LIB_0__::func_533(PLAYER::PLAYER_PED_ID(), iVar64), __LIB_0__::func_242(PLAYER::PLAYER_PED_ID(), iVar64), false);
					PLAYER::SET_PLAYER_PARACHUTE_PACK_TINT_INDEX(PLAYER::PLAYER_ID(), __LIB_0__::func_114(PLAYER::PLAYER_PED_ID(), iVar64));
					__LIB_0__::func_440(PLAYER::PLAYER_ID(), iVar64);
				}
			}
			if (iParam1 == 7)
			{
				if ((iVar5 == joaat("MP_M_Freemode_01") && iParam2 >= 92) || (iVar5 == joaat("MP_F_Freemode_01") && iParam2 >= 55))
				{
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("BIG_CHAIN"), 0))
					{
						func_1452(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			if (iVar5 == joaat("MP_F_Freemode_01") && (iParam1 == 11 || iParam1 == 4))
			{
				if (iParam1 == 11)
				{
					iVar65 = func_342(iParam0, 4, -1);
					iVar66 = iParam2;
				}
				else
				{
					iVar65 = iParam2;
					iVar66 = func_342(iParam0, 11, -1);
				}
				if (__LIB_0__::func_240(iVar5, 11, iVar66, -1))
				{
					if (!__LIB_0__::func_239(iVar5, 4, iVar65, -1))
					{
						if (__LIB_0__::func_353(iVar5, 4, iVar65, &uVar67))
						{
							func_1452(iParam0, 4, uVar67, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						}
					}
				}
				else if (__LIB_0__::func_239(iVar5, 4, iVar65, -1))
				{
					if (__LIB_0__::func_352(iVar5, 4, iVar65, &uVar67))
					{
						func_1452(iParam0, 4, uVar67, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			if (iParam1 == 4 || iParam1 == 6)
			{
				iVar68 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 6);
				iVar69 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 6);
				iVar70 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 6, iVar68, iVar69);
				iVar71 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 4);
				iVar72 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 4);
				iVar73 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 4, iVar71, iVar72);
				iVar74 = __LIB_0__::func_350(iParam0, 4);
				iVar75 = __LIB_0__::func_350(iParam0, 6);
				if (__LIB_0__::func_238(iVar5, iVar70))
				{
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar70, joaat("ALT_FEET"), 0) != __LIB_0__::func_439(iVar5, iVar74, iVar70))
					{
						iVar76 = FILES::GET_SHOP_PED_APPAREL_VARIANT_COMPONENT_COUNT(iVar70);
						iVar77 = 0;
						while (iVar77 < iVar76)
						{
							FILES::GET_VARIANT_COMPONENT(iVar70, iVar77, &iVar78, &uVar79, &iVar80);
							if (iVar80 == 6)
							{
								if (iVar78 != 0 && iVar78 != joaat("0"))
								{
									if (iVar5 == joaat("MP_M_Freemode_01"))
									{
										iVar75 = __LIB_0__::func_204(iVar5, iVar78, 6, 3);
										iVar70 = iVar78;
										func_1452(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar75 = __LIB_0__::func_204(iVar5, iVar78, 6, 4);
										iVar70 = iVar78;
										func_1452(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									iVar77 = iVar76 + 1;
								}
							}
							iVar77++;
						}
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar73, joaat("ALT_LEGS"), 0) != __LIB_0__::func_237(iVar5, iVar75, iVar73))
					{
						iVar76 = FILES::GET_SHOP_PED_APPAREL_VARIANT_COMPONENT_COUNT(iVar73);
						iVar77 = 0;
						while (iVar77 < iVar76)
						{
							FILES::GET_VARIANT_COMPONENT(iVar73, iVar77, &iVar78, &uVar79, &iVar80);
							if (iVar80 == 4)
							{
								if (iVar78 != 0 && iVar78 != joaat("0"))
								{
									if (iVar5 == joaat("MP_M_Freemode_01"))
									{
										iVar74 = __LIB_0__::func_204(iVar5, iVar78, 4, 3);
										iVar73 = iVar78;
										func_1452(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar74 = __LIB_0__::func_204(iVar5, iVar78, 4, 4);
										iVar73 = iVar78;
										func_1452(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									iVar77 = iVar76 + 1;
								}
							}
							iVar77++;
						}
					}
				}
				if (__LIB_0__::func_238(iVar5, iVar73))
				{
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar73, joaat("ALT_LEGS"), 0) != __LIB_0__::func_237(iVar5, iVar75, iVar73))
					{
						iVar76 = FILES::GET_SHOP_PED_APPAREL_VARIANT_COMPONENT_COUNT(iVar73);
						iVar77 = 0;
						while (iVar77 < iVar76)
						{
							FILES::GET_VARIANT_COMPONENT(iVar73, iVar77, &iVar78, &uVar79, &iVar80);
							if (iVar80 == 4)
							{
								if (iVar78 != 0 && iVar78 != joaat("0"))
								{
									if (iVar5 == joaat("MP_M_Freemode_01"))
									{
										iVar74 = __LIB_0__::func_204(iVar5, iVar78, 4, 3);
										iVar73 = iVar78;
										func_1452(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar74 = __LIB_0__::func_204(iVar5, iVar78, 4, 4);
										iVar73 = iVar78;
										func_1452(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									iVar77 = iVar76 + 1;
								}
							}
							iVar77++;
						}
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar70, joaat("ALT_FEET"), 0) != __LIB_0__::func_439(iVar5, iVar74, iVar70))
					{
						iVar76 = FILES::GET_SHOP_PED_APPAREL_VARIANT_COMPONENT_COUNT(iVar70);
						iVar77 = 0;
						while (iVar77 < iVar76)
						{
							FILES::GET_VARIANT_COMPONENT(iVar70, iVar77, &iVar78, &uVar79, &iVar80);
							if (iVar80 == 6)
							{
								if (iVar78 != 0 && iVar78 != joaat("0"))
								{
									if (iVar5 == joaat("MP_M_Freemode_01"))
									{
										iVar75 = __LIB_0__::func_204(iVar5, iVar78, 6, 3);
										iVar70 = iVar78;
										func_1452(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar75 = __LIB_0__::func_204(iVar5, iVar78, 6, 4);
										iVar70 = iVar78;
										func_1452(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									iVar77 = iVar76 + 1;
								}
							}
							iVar77++;
						}
					}
				}
			}
			if (iParam1 == 11 || iParam1 == 1)
			{
				func_1521(iParam0);
				iVar81 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1);
				iVar82 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 1);
				iVar83 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 1, iVar81, iVar82);
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar83, joaat("FORCE_PROP"), 0))
				{
					iVar3 = __LIB_9__::func_528(iParam0, iVar5, iParam1, iParam2, 14, 0);
					if (iVar3 != -99)
					{
						func_1452(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar3 = __LIB_9__::func_528(iParam0, iVar5, iParam1, iParam2, 14, 1);
					if (iVar3 != -99)
					{
						func_1452(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
		}
	}
	if (iParam1 != 2)
	{
		if (func_1453(iParam0, &uVar4))
		{
			func_1452(iParam0, 2, uVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
	}
	if (iVar6 != -99 && !bParam13)
	{
		func_1452(iParam0, 3, iVar6, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar8 != -99)
	{
		func_1452(iParam0, 8, iVar8, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar7 != -99)
	{
		func_1452(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar10 != -1)
	{
		iVar84 = __LIB_0__::func_282(iVar5, func_342(iParam0, 3, -1), iVar10);
		if (iVar84 != -1)
		{
			if (iVar5 == joaat("MP_M_Freemode_01"))
			{
				iVar9 = __LIB_0__::func_204(iVar5, iVar84, 3, 3);
			}
			else if (iVar5 == joaat("MP_F_Freemode_01"))
			{
				iVar9 = __LIB_0__::func_204(iVar5, iVar84, 3, 4);
			}
			if (iVar9 != -99)
			{
				iVar9 = (iVar9 + iVar11);
				func_1452(iParam0, 3, iVar9, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
		}
	}
	Global_78128 = (Global_78128 - 1);
	return 1;
}

int func_1453(int iParam0, var uParam1)//Position - 0x818AE
{
	int iVar0;
	int iVar1;
	*uParam1 = func_342(PLAYER::PLAYER_PED_ID(), 2, -1);
	if (__LIB_1__::func_360(754, Global_78127, 0) != -99 && __LIB_0__::func_438())
	{
		if (__LIB_0__::func_236() == 4)
		{
			return 1;
		}
		if (__LIB_1__::func_360(754, Global_78127, 0) == 0 && __LIB_1__::func_360(755, Global_78127, 0) == 0)
		{
			if (__LIB_1__::func_342(161, Global_78127))
			{
				if (__LIB_1__::func_360(2053, Global_78127, 0) == 0)
				{
					return 0;
				}
			}
			else if (__LIB_1__::func_360(753, Global_78127, 0) == 0)
			{
				return 0;
			}
		}
		iVar0 = __LIB_1__::func_360(754, Global_78127, 0);
		iVar1 = __LIB_1__::func_360(755, Global_78127, 0);
		if (!func_343(iParam0, iVar1, iVar0))
		{
			if (__LIB_1__::func_342(161, Global_78127))
			{
				*uParam1 = __LIB_1__::func_360(2053, Global_78127, 0);
			}
			else
			{
				*uParam1 = __LIB_1__::func_360(753, Global_78127, 0);
			}
			__LIB_1__::func_354(754, -99, Global_78127, 1, 0);
			__LIB_1__::func_354(755, 2, Global_78127, 1, 0);
			return 1;
		}
	}
	return 0;
}

void func_1493(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x8C2A9
{
	int iVar0;
	int iVar1;
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	__LIB_3__::func_222(MISC::GET_HASH_KEY("hairOverlay"), iParam0);
	iVar1 = __LIB_0__::func_450(iVar0, iParam1);
	if (iVar1 != -1)
	{
		if (iParam2 == -1)
		{
			iParam2 = Global_78127;
		}
		__LIB_2__::func_978(iVar1, 1, iParam2);
	}
	func_1418(iParam0, bParam3, 0, -1);
}

int func_1507(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x93E98
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	iVar0 = -99;
	iVar1 = -1;
	iVar2 = -1;
	iVar3 = -1;
	iVar4 = -1;
	switch (iParam0)
	{
		case joaat("MP_M_Freemode_01"):
			if (iParam2 >= 237)
			{
				iVar2 = __LIB_0__::func_205(iParam0, iParam2, 11, 3);
				iVar1 = __LIB_0__::func_278(iVar2);
			}
			if (iParam1 >= 241)
			{
				iVar4 = __LIB_0__::func_205(iParam0, iParam1, 8, 3);
				iVar3 = __LIB_0__::func_278(iVar4);
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("SILK_ROBE"), 0))
			{
				iVar0 = 14;
			}
			else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("SILK_PYJAMAS"), 0))
			{
				iVar0 = 6;
			}
			else if (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("STUNT_DRAW_1"), 0))
			{
				iVar0 = 1;
			}
			else if (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("STUNT_DRAW_2"), 0))
			{
				iVar0 = 4;
			}
			else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_VEST"), 0) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("JACKET_ONLY"), 0))
			{
				if (iParam1 == 240)
				{
					if ((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_0"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_3"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_13"), 0))
					{
						iVar0 = __LIB_0__::func_204(iParam0, joaat("DLC_MP_BIKER_M_TORSO_0_0"), 3, 3);
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_1"), 0))
					{
						iVar0 = __LIB_0__::func_204(iParam0, joaat("DLC_MP_BIKER_M_TORSO_1_0"), 3, 3);
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_2"), 0))
					{
						iVar0 = __LIB_0__::func_204(iParam0, joaat("DLC_MP_BIKER_M_TORSO_2_0"), 3, 3);
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_5"), 0))
					{
						iVar0 = 5;
					}
				}
				else
				{
					iVar0 = func_1507(iParam0, -99, __LIB_0__::func_357(iParam0, iParam1, 0), iParam3);
					if (iVar0 == -99)
					{
						iVar0 = 0;
					}
				}
			}
			else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("OVERCOAT_ACCS"), 0))
			{
				iVar0 = 12;
			}
			else if (((iVar2 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("APART_DRAW_15"), 0)) || (iVar2 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("APART_DRAW_24"), 0))) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_6"), 0))
			{
				if (iParam1 == 240)
				{
					iVar0 = 14;
				}
				else if ((iParam1 >= 80 && iParam1 <= 95) || iVar3 == 5)
				{
					iVar0 = 6;
				}
				else if ((iParam1 >= 16 && iParam1 <= 31) || iVar3 == 1)
				{
					iVar0 = 1;
				}
				else
				{
					iVar0 = 4;
				}
			}
			else if (iVar2 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("LOW2_OPEN_CHECK"), 0))
			{
				if (iParam1 == 240)
				{
					iVar0 = 14;
				}
				else if ((iParam1 >= 80 && iParam1 <= 95) || iVar3 == 5)
				{
					iVar0 = 6;
				}
				else
				{
					iVar0 = 1;
				}
			}
			else if (iVar2 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("HEIST_DRAW_7"), 0))
			{
				if ((iParam1 >= 192 && iParam1 <= 207) || iVar3 == 12)
				{
					iVar0 = 0;
				}
				else
				{
					iVar0 = 11;
				}
			}
			else if (iVar2 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("HEIST_DRAW_9"), 0))
			{
				if ((iParam1 >= 80 && iParam1 <= 95) || iVar3 == 5)
				{
					iVar0 = 6;
				}
				else if (iParam1 == 240)
				{
					iVar0 = 14;
				}
				else if ((iParam1 >= 16 && iParam1 <= 31) || iVar3 == 1)
				{
					iVar0 = 1;
				}
			}
			else if (iVar2 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("TUX_JACKET"), 0))
			{
				iVar0 = 12;
			}
			else if (iVar2 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("SMUG_DRAW_6"), 0))
			{
				iVar0 = 2;
			}
			else if (((iParam2 >= 0 && iParam2 <= 31) || iVar1 == 0) || iVar1 == 1)
			{
				iVar0 = 0;
			}
			else if ((((((((((iParam2 >= 48 && iParam2 <= 63) || (iParam2 >= 64 && iParam2 <= 79)) || (iParam2 >= 96 && iParam2 <= 107)) || (iParam2 >= 108 && iParam2 <= 123)) || (iParam2 >= 156 && iParam2 <= 171)) || iVar1 == 3) || iVar1 == 4) || iVar1 == 6) || iVar1 == 7) || iVar1 == 10)
			{
				if ((iParam1 >= 80 && iParam1 <= 95) || iVar3 == 5)
				{
					iVar0 = 6;
				}
				else if (iParam1 == 240 || iVar3 == 15)
				{
					iVar0 = 14;
				}
				else if ((iParam1 >= 160 && iParam1 <= 175) || iVar3 == 10)
				{
					iVar0 = 4;
				}
				else if ((iParam1 >= 176 && iParam1 <= 191) || iVar3 == 11)
				{
					iVar0 = 12;
				}
				else if ((((iParam1 >= 16 && iParam1 <= 31) || (iParam1 >= 224 && iParam1 <= 239)) || iVar3 == 1) || iVar3 == 14)
				{
					iVar0 = 1;
				}
				else if ((iParam1 >= 80 && iParam1 <= 95) || iVar3 == 5)
				{
					iVar0 = 6;
				}
				else if ((iParam1 >= 32 && iParam1 <= 47) || iVar3 == 2)
				{
					iVar0 = 4;
				}
				else if (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("SHIRT_BRACES"), 0))
				{
					if (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("CLOSED_COLLAR"), 0))
					{
						iVar0 = 4;
					}
					else
					{
						iVar0 = 1;
					}
				}
				else if ((iParam1 >= 144 && iParam1 <= 159) || iVar3 == 9)
				{
					iVar0 = 1;
				}
				else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("APART_DRAW_2"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("APART_DRAW_3"), 0))
				{
					iVar0 = 4;
				}
				else if (iParam1 >= 241)
				{
					if (iVar4 != -1)
					{
						iVar5 = FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(iVar4);
						iVar6 = 0;
						while (iVar6 < iVar5)
						{
							FILES::GET_FORCED_COMPONENT(iVar4, iVar6, &iVar7, &iVar8, &iVar9);
							if (iVar9 == 3)
							{
								if (iVar7 != 0 && iVar7 != joaat("0"))
								{
									iVar0 = __LIB_0__::func_204(iParam0, iVar7, 3, 3);
								}
								else
								{
									iVar0 = iVar8;
								}
								iVar6 = iVar5 + 1;
							}
							iVar6++;
						}
					}
				}
			}
			else if ((iParam2 >= 172 && iParam2 <= 187) || iVar1 == 11)
			{
				if (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("SWEAT_VEST"), 0))
				{
					iVar0 = 6;
				}
				else if ((((iParam1 >= 48 && iParam1 <= 63) || (iParam1 >= 112 && iParam1 <= 127)) || iVar3 == 3) || iVar3 == 7)
				{
					iVar0 = 11;
				}
				else if ((iParam1 >= 96 && iParam1 <= 111) || iVar3 == 6)
				{
					iVar0 = 11;
				}
				else if (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LONG_SLEEVE"), 0))
				{
					iVar0 = 12;
				}
				else if (iParam1 == 240)
				{
					iVar0 = 15;
				}
			}
			else if ((iParam2 >= 140 && iParam2 <= 155) || iVar1 == 9)
			{
				iVar0 = 0;
			}
			else if (iParam2 == 236)
			{
				if (iParam1 == 240)
				{
					iVar0 = 15;
				}
			}
			break;
		case joaat("MP_F_Freemode_01"):
			if (iParam2 >= 256)
			{
				iVar2 = __LIB_0__::func_205(iParam0, iParam2, 11, 4);
				iVar1 = __LIB_0__::func_278(iVar2);
			}
			if (iParam1 >= 136)
			{
				iVar4 = __LIB_0__::func_205(iParam0, iParam1, 8, 4);
				iVar3 = __LIB_0__::func_278(iVar4);
				switch (iVar4)
				{
					case joaat("DLC_MP_BEACH_F_ACCS2_0"):
					case joaat("DLC_MP_BEACH_F_ACCS2_1"):
					case joaat("DLC_MP_BEACH_F_ACCS2_2"):
					case joaat("DLC_MP_BEACH_F_ACCS2_3"):
					case joaat("DLC_MP_BEACH_F_ACCS2_4"):
					case joaat("DLC_MP_BEACH_F_ACCS2_5"):
					case joaat("DLC_MP_BEACH_F_ACCS2_6"):
					case joaat("DLC_MP_BEACH_F_ACCS2_7"):
					case joaat("DLC_MP_BEACH_F_ACCS2_8"):
					case joaat("DLC_MP_BEACH_F_ACCS2_9"):
					case joaat("DLC_MP_BEACH_F_ACCS2_10"):
					case joaat("DLC_MP_BEACH_F_ACCS2_11"):
						iVar3 = 15;
						break;
					case joaat("DLC_MP_VAL_F_ACCS2_0"):
					case joaat("DLC_MP_VAL_F_ACCS2_1"):
					case joaat("DLC_MP_VAL_F_ACCS2_2"):
					case joaat("DLC_MP_VAL_F_ACCS2_3"):
					case joaat("DLC_MP_VAL_F_ACCS2_4"):
					case joaat("DLC_MP_VAL2_F_SPECIAL_0_0"):
					case joaat("DLC_MP_VAL2_F_SPECIAL_0_1"):
					case joaat("DLC_MP_VAL2_F_SPECIAL_0_2"):
					case joaat("DLC_MP_VAL2_F_SPECIAL_0_3"):
					case joaat("DLC_MP_VAL2_F_SPECIAL_0_4"):
					case joaat("DLC_MP_VAL2_F_SPECIAL_0_5"):
					case joaat("DLC_MP_VAL2_F_SPECIAL_0_6"):
					case joaat("DLC_MP_VAL2_F_SPECIAL_0_7"):
					case joaat("DLC_MP_VAL2_F_SPECIAL_0_8"):
					case joaat("DLC_MP_VAL2_F_SPECIAL_0_9"):
					case joaat("DLC_MP_VAL2_F_SPECIAL_0_10"):
					case joaat("DLC_MP_VAL2_F_SPECIAL_0_11"):
						iVar3 = 13;
						break;
					}
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("SILK_ROBE"), 0))
			{
				iVar0 = 0;
			}
			else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_VEST"), 0) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("JACKET_ONLY"), 0))
			{
				if ((((((((((((((((((((((((((((iParam1 >= 34 && iParam1 <= 49) || (iParam1 >= 50 && iParam1 <= 65)) || (iParam1 >= 71 && iParam1 <= 86)) || (iParam1 >= 87 && iParam1 <= 102)) || (iParam1 >= 103 && iParam1 <= 118)) || (iParam1 >= 120 && iParam1 <= 135)) || iVar3 == 4) || iVar3 == 5) || iVar3 == 11) || iVar3 == 12) || iVar3 == 13) || iVar3 == 15) || iVar4 == joaat("DLC_MP_BEACH_F_ACCS0_0")) || iVar4 == joaat("DLC_MP_BEACH_F_ACCS0_1")) || iVar4 == joaat("DLC_MP_BEACH_F_ACCS0_2")) || iVar4 == joaat("DLC_MP_BEACH_F_ACCS0_3")) || iVar4 == joaat("DLC_MP_BEACH_F_ACCS0_4")) || iVar4 == joaat("DLC_MP_BEACH_F_ACCS0_5")) || iVar4 == joaat("DLC_MP_BEACH_F_ACCS0_6")) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW2_DRAW_0"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW2_DRAW_1"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW2_DRAW_2"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW2_DRAW_3"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW2_DRAW_4"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW2_DRAW_5"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_12"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_13"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_14"), 0))
				{
					if ((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_0"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_3"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_13"), 0))
					{
						iVar0 = __LIB_0__::func_204(iParam0, joaat("DLC_MP_BIKER_F_TORSO_0_0"), 3, 4);
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_1"), 0))
					{
						iVar0 = __LIB_0__::func_204(iParam0, joaat("DLC_MP_BIKER_F_TORSO_1_0"), 3, 4);
					}
					else if ((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_2"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_5"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("X17_DRAW_6"), 0))
					{
						iVar0 = __LIB_0__::func_204(iParam0, joaat("DLC_MP_BIKER_F_TORSO_2_0"), 3, 4);
					}
				}
				else if ((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_9"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_10"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_11"), 0))
				{
					iVar0 = 11;
				}
				else
				{
					iVar0 = func_1507(iParam0, -99, __LIB_0__::func_357(iParam0, iParam1, 0), iParam3);
					if (iVar0 == -99)
					{
						iVar0 = 14;
					}
				}
			}
			else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("OPEN_SHORT"), 0))
			{
				if (((iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW_DRAW_4"), 0)) || (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW_DRAW_5"), 0))) || (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW_DRAW_6"), 0)))
				{
					iVar0 = 9;
				}
				else
				{
					iVar0 = __LIB_0__::func_204(iParam0, joaat("DLC_MP_H4_F_TORSO_0_0"), 3, 4);
				}
			}
			else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("OVERCOAT_ACCS"), 0))
			{
				iVar0 = 3;
			}
			else if (((iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("VEST_SHIRT"), 0)) && !__LIB_0__::func_280(iParam0, iParam2, -1)) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("SILK_ROBE"), 0))
			{
				if (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LONG_SLEEVE"), 0))
				{
					iVar0 = 3;
				}
				else
				{
					iVar0 = 0;
				}
			}
			else if (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("APART_DRAW_0"), 0))
			{
				iVar0 = 7;
			}
			else if ((iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("APART_DRAW_2"), 0)) || (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("APART_DRAW_3"), 0)))
			{
				iVar0 = 3;
			}
			else if (iVar2 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("LOW_DRAW_1"), 0))
			{
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(__LIB_0__::func_205(iParam0, iParam3, 4, 4), joaat("HIGH_WAIST"), 0))
				{
					iVar0 = 11;
				}
				else
				{
					iVar0 = 15;
				}
			}
			else if ((((((((((((((iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW_DRAW_0"), 0)) || (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW_DRAW_4"), 0))) || (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW_DRAW_6"), 0))) || (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW2_DRAW_0"), 0))) || (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW2_DRAW_3"), 0))) || (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_6"), 0))) || (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_7"), 0))) || (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_8"), 0))) || (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_9"), 0))) || (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_10"), 0))) || (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_11"), 0))) || (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_12"), 0))) || (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_13"), 0))) || (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_14"), 0)))
			{
				if ((((((iParam2 >= 16 && iParam2 <= 31) || (iParam2 >= 96 && iParam2 <= 111)) || (iParam2 >= 128 && iParam2 <= 143)) || iVar1 == 1) || iVar1 == 6) || iVar1 == 8)
				{
					iVar0 = 1;
				}
				else if (((((((((((((((((((((((((((iParam2 >= 112 && iParam2 <= 127) || (iParam2 >= 160 && iParam2 <= 175)) || iVar1 == 7) || iVar1 == 10) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("TAILS_JACKET"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("HEIST_DRAW_6"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("HEIST_DRAW_16"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("HEIST_DRAW_17"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("LUXE_DRAW_0"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("LUXE_DRAW_1"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("LUXE_DRAW_2"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("LUXE2_DRAW_0"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("LUXE2_DRAW_1"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("LOW2_OPEN_CHECK"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("APART_DRAW_15"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("APART_DRAW_25"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("STUNT_DRAW_4"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("STUNT_DRAW_9"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_4"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_6"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_9"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_10"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_12"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_33"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("AIR_DRAW_3"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("SMUG_DRAW_0"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("SMUG_DRAW_1"), 0))
				{
					iVar0 = 3;
				}
				else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("HEIST_DRAW_7"), 0))
				{
					iVar0 = 9;
				}
			}
			else if ((((((((iVar2 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("LUXE_DRAW_0"), 0)) || (iVar2 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_6"), 0))) || (iVar2 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_9"), 0))) || (iVar2 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_10"), 0))) || (iVar2 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_12"), 0))) || (iVar2 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_33"), 0))) || (iVar2 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("AIR_DRAW_3"), 0))) || (iVar2 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("SMUG_DRAW_1"), 0)))
			{
				if ((((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("HEIST_DRAW_5"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("HEIST_DRAW_6"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("HEIST_DRAW_7"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("HEIST_DRAW_8"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("HEIST_DRAW_9"), 0))
				{
					iVar0 = 1;
				}
				else
				{
					iVar0 = 6;
				}
			}
			else if ((iParam2 >= 16 && iParam2 <= 31) || iVar1 == 1)
			{
				if ((((iParam1 >= 50 && iParam1 <= 65) || (iParam1 >= 120 && iParam1 <= 135)) || iVar3 == 5) || iVar3 == 15)
				{
					iVar0 = 5;
				}
				else if (iParam1 >= 136)
				{
					if (iVar4 != -1)
					{
						iVar10 = FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(iVar4);
						iVar11 = 0;
						while (iVar11 < iVar10)
						{
							FILES::GET_FORCED_COMPONENT(iVar4, iVar11, &iVar12, &iVar13, &iVar14);
							if (iVar14 == 3)
							{
								if (iVar12 != 0 && iVar12 != joaat("0"))
								{
									iVar0 = __LIB_0__::func_204(iParam0, iVar12, 3, 4);
								}
								else
								{
									iVar0 = iVar13;
								}
								iVar11 = iVar10 + 1;
							}
							iVar11++;
						}
					}
				}
			}
			else if (((iParam2 >= 112 && iParam2 <= 127) || iVar1 == 7) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("LOW2_OPEN_CHECK"), 0))
			{
				if ((((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("HEIST_DRAW_5"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("HEIST_DRAW_6"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("HEIST_DRAW_7"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("HEIST_DRAW_8"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("HEIST_DRAW_9"), 0))
				{
					iVar0 = 3;
				}
				else
				{
					iVar0 = 6;
				}
			}
			break;
	}
	return iVar0;
}

void func_1510(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x97444
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (func_1512(iParam0))
		{
			return;
		}
		if (iParam1 == 11 || iParam1 == 8)
		{
			iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
			if (iParam1 == 11)
			{
				if (__LIB_0__::func_280(iVar0, iParam2, -1))
				{
					iParam1 = 8;
					iParam2 = __LIB_0__::func_350(iParam0, iParam1);
				}
			}
			else if (iParam1 == 8)
			{
				iVar1 = __LIB_0__::func_350(iParam0, 11);
				if (!__LIB_0__::func_280(iVar0, iVar1, -1))
				{
					return;
				}
			}
			__LIB_3__::func_222(MISC::GET_HASH_KEY("torsoDecal"), iParam0);
			if (iParam1 == 11)
			{
				if (((((!__LIB_5__::func_175(iVar0, iParam2, 13) && !__LIB_5__::func_175(iVar0, iParam2, 14)) && !__LIB_5__::func_175(iVar0, iParam2, 15)) && !__LIB_5__::func_175(iVar0, iParam2, 16)) && !__LIB_5__::func_175(iVar0, iParam2, 71)) && !__LIB_5__::func_175(iVar0, iParam2, 72))
				{
					__LIB_3__::func_222(MISC::GET_HASH_KEY("crewLogo"), iParam0);
				}
			}
			iVar2 = __LIB_5__::func_29(iVar0, iParam1, iParam2, iParam4);
			if (iVar2 != -1)
			{
				if (iParam3 == 1)
				{
					__LIB_2__::func_977(iParam0, iVar2, 0);
				}
				else
				{
					__LIB_2__::func_978(iVar2, 1, Global_78127);
				}
			}
		}
	}
}

int func_1512(int iParam0)//Position - 0x975D3
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("MP_M_Freemode_01"))
		{
			if (NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0) != __LIB_0__::func_162() && __LIB_3__::func_140(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0)))
			{
				return 1;
			}
			iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
			if (iVar0 > 15)
			{
				iVar1 = func_342(iParam0, 11, -1);
				if (iVar1 >= 237)
				{
					iVar2 = __LIB_0__::func_205(joaat("MP_M_Freemode_01"), iVar1, 11, 3);
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_11"), 0))
					{
						return 1;
					}
					else if ((((((((((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_1"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_2"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_4"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_5"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_17"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_18"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_19"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_20"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_21"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_23"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_27"), 0))
					{
						return 1;
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("JUGG_SUIT"), 0))
					{
						return 1;
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("STUNT_DRAW_1"), 0))
					{
						return 1;
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("JUGG_SUIT"), 0))
					{
						return 1;
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("X17_DRAW_6"), 0))
					{
						return 1;
					}
				}
			}
		}
		else if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("MP_F_Freemode_01"))
		{
			if (NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0) != __LIB_0__::func_162() && __LIB_3__::func_140(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0)))
			{
				return 1;
			}
			iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
			if (iVar0 > 15)
			{
				iVar3 = func_342(iParam0, 11, -1);
				if (iVar3 >= 237)
				{
					iVar4 = __LIB_0__::func_205(joaat("MP_F_Freemode_01"), iVar3, 11, 4);
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_11"), 0))
					{
						return 1;
					}
					else if ((((((((((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_1"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_2"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_4"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_5"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_22"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_23"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_24"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_25"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_26"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_28"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_32"), 0))
					{
						return 1;
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("JUGG_SUIT"), 0))
					{
						return 1;
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("STUNT_DRAW_1"), 0))
					{
						return 1;
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("JUGG_SUIT"), 0))
					{
						return 1;
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("X17_DRAW_6"), 0))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_1516(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x97A2C
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (Global_78127 != __LIB_0__::func_5() || iParam2 == -99)
		{
			return;
		}
		Global_78130[2 /*14*/] = { __LIB_6__::func_38(iParam0, iParam1, iParam2, -1) };
		if (BitTest(Global_78130[2 /*14*/].f_6, 1) && BitTest(Global_78130[2 /*14*/].f_6, 6))
		{
			if (iParam1 == 12)
			{
				__LIB_2__::func_411(Global_2883588, 2, 1, 1, -1);
			}
			else if (iParam1 == 13)
			{
			}
			else if (iParam1 == 14)
			{
				__LIB_2__::func_411(Global_2883588, 2, 1, 1, -1);
			}
			else
			{
				__LIB_2__::func_411(Global_2883588, 2, 1, 1, -1);
			}
			if (bParam3)
			{
				iVar0 = FILES::GET_SHOP_PED_APPAREL_VARIANT_COMPONENT_COUNT(Global_2883588);
				iVar5 = 0;
				iVar1 = 0;
				while (iVar1 < iVar0)
				{
					if (iVar5 < Global_4538446)
					{
						Global_4538446[iVar5] = -1;
						Global_4538457[iVar5] = -1;
					}
					FILES::GET_VARIANT_COMPONENT(Global_2883588, iVar1, &iVar2, &uVar3, &iVar4);
					if (iVar4 != 10 && iVar4 != 9)
					{
						if (iParam1 == 4 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("STOCKINGS"), 0))
						{
						}
						else if (iVar2 != 0 && iVar2 != joaat("0"))
						{
							__LIB_2__::func_411(iVar2, 2, 1, 1, -1);
							if (iVar5 < Global_4538446)
							{
								Global_4538446[iVar5] = iVar2;
								Global_4538457[iVar5] = iVar4;
								iVar5++;
							}
						}
						else
						{
							func_1516(iParam0, __LIB_0__::func_33(iVar4), uVar3, 0);
						}
					}
					iVar1++;
				}
				Global_4538445++;
				if (Global_4538445 < 2)
				{
					iVar1 = 0;
					while (iVar1 < iVar5)
					{
						if (iVar1 < Global_4538446)
						{
							if (Global_4538446[iVar1] != -1)
							{
								if (iParam0 == joaat("MP_M_Freemode_01"))
								{
									func_1516(iParam0, __LIB_0__::func_33(Global_4538457[iVar1]), __LIB_0__::func_204(iParam0, Global_4538446[iVar1], __LIB_0__::func_33(Global_4538457[iVar1]), 3), 1);
								}
								else
								{
									func_1516(iParam0, __LIB_0__::func_33(Global_4538457[iVar1]), __LIB_0__::func_204(iParam0, Global_4538446[iVar1], __LIB_0__::func_33(Global_4538457[iVar1]), 4), 1);
								}
							}
						}
						iVar1++;
					}
				}
				Global_4538445 = (Global_4538445 - 1);
			}
			return;
		}
		if (BitTest(Global_78130[2 /*14*/].f_6, 1) && !BitTest(Global_78130[2 /*14*/].f_6, 6))
		{
			if (__LIB_0__::func_36(iParam1, Global_78130[1 /*14*/].f_2, &iVar6))
			{
				iVar7 = __LIB_1__::func_360(iVar6, Global_78127, 0);
				MISC::SET_BIT(&iVar7, Global_78130[2 /*14*/].f_1);
				__LIB_1__::func_354(iVar6, iVar7, Global_78127, 1, 0);
			}
			if (bParam3 == 1)
			{
				if (iParam0 == joaat("MP_M_Freemode_01"))
				{
					if (iParam1 == 14)
					{
						if (iParam2 >= 83 && iParam2 <= 90)
						{
							iVar8 = (75 + Global_78130[2 /*14*/].f_4);
							func_1516(iParam0, 14, iVar8, 0);
						}
						else if (iParam2 >= 75 && iParam2 <= 82)
						{
							iVar8 = (83 + Global_78130[2 /*14*/].f_4);
							func_1516(iParam0, 14, iVar8, 0);
						}
					}
					else if (iParam1 == 8)
					{
						if (iParam2 >= 48 && iParam2 <= 63)
						{
							iVar8 = (64 + Global_78130[2 /*14*/].f_4);
							func_1516(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 64 && iParam2 <= 79)
						{
							iVar8 = (48 + Global_78130[2 /*14*/].f_4);
							func_1516(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 96 && iParam2 <= 111)
						{
							iVar8 = (112 + Global_78130[2 /*14*/].f_4);
							func_1516(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 112 && iParam2 <= 127)
						{
							iVar8 = (96 + Global_78130[2 /*14*/].f_4);
							func_1516(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 176 && iParam2 <= 191)
						{
							iVar8 = (160 + Global_78130[2 /*14*/].f_4);
							func_1516(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 160 && iParam2 <= 175)
						{
							iVar8 = (176 + Global_78130[2 /*14*/].f_4);
							func_1516(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 32 && iParam2 <= 47)
						{
							iVar8 = (0 + Global_78130[2 /*14*/].f_4);
							func_1516(iParam0, 11, iVar8, 0);
						}
						else if (iParam2 >= 224 && iParam2 <= 239)
						{
							iVar8 = (16 + Global_78130[2 /*14*/].f_4);
							func_1516(iParam0, 11, iVar8, 0);
						}
					}
					else if (iParam1 == 11)
					{
						if (iParam2 >= 0 && iParam2 <= 15)
						{
							iVar8 = (32 + Global_78130[2 /*14*/].f_4);
							func_1516(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 16 && iParam2 <= 31)
						{
							iVar8 = (224 + Global_78130[2 /*14*/].f_4);
							func_1516(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 220 && iParam2 <= 235)
						{
							switch (iParam2)
							{
								case 220:
									func_1516(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_0"), 8, 3), 0);
									func_1516(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_0"), 8, 3), 0);
									break;
								case 221:
									func_1516(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_1"), 8, 3), 0);
									func_1516(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_1"), 8, 3), 0);
									break;
								case 222:
									func_1516(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_2"), 8, 3), 0);
									func_1516(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_2"), 8, 3), 0);
									break;
								case 223:
									func_1516(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_3"), 8, 3), 0);
									func_1516(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_3"), 8, 3), 0);
									break;
								case 224:
									func_1516(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_4"), 8, 3), 0);
									func_1516(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_4"), 8, 3), 0);
									break;
								case 225:
									func_1516(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_5"), 8, 3), 0);
									func_1516(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_5"), 8, 3), 0);
									break;
								case 226:
									func_1516(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_6"), 8, 3), 0);
									func_1516(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_6"), 8, 3), 0);
									break;
								case 227:
									func_1516(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_7"), 8, 3), 0);
									func_1516(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_7"), 8, 3), 0);
									break;
								case 228:
									func_1516(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_8"), 8, 3), 0);
									func_1516(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_8"), 8, 3), 0);
									break;
								case 229:
									func_1516(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_9"), 8, 3), 0);
									func_1516(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_9"), 8, 3), 0);
									break;
								case 230:
									func_1516(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_10"), 8, 3), 0);
									func_1516(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_10"), 8, 3), 0);
									break;
								case 231:
									func_1516(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_11"), 8, 3), 0);
									func_1516(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_11"), 8, 3), 0);
									break;
								case 232:
									func_1516(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_12"), 8, 3), 0);
									func_1516(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_12"), 8, 3), 0);
									break;
								case 233:
									func_1516(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_13"), 8, 3), 0);
									func_1516(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_13"), 8, 3), 0);
									break;
								case 234:
									func_1516(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_14"), 8, 3), 0);
									func_1516(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_14"), 8, 3), 0);
									break;
								case 235:
									func_1516(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_15"), 8, 3), 0);
									func_1516(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_15"), 8, 3), 0);
									break;
								}
						}
					}
					else if (iParam1 == 7)
					{
						if (iParam2 >= 41 && iParam2 <= 56)
						{
							switch (Global_78130[2 /*14*/].f_4)
							{
								case 0:
									func_1516(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_0"), 7, 3), 0);
									func_1516(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_0"), 7, 3), 0);
									break;
								case 1:
									func_1516(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_1"), 7, 3), 0);
									func_1516(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_1"), 7, 3), 0);
									break;
								case 2:
									func_1516(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_2"), 7, 3), 0);
									func_1516(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_2"), 7, 3), 0);
									break;
								case 3:
									func_1516(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_3"), 7, 3), 0);
									func_1516(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_3"), 7, 3), 0);
									break;
								case 4:
									func_1516(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_4"), 7, 3), 0);
									func_1516(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_4"), 7, 3), 0);
									break;
								case 5:
									func_1516(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_5"), 7, 3), 0);
									func_1516(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_5"), 7, 3), 0);
									break;
								case 6:
									func_1516(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_6"), 7, 3), 0);
									func_1516(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_6"), 7, 3), 0);
									break;
								case 7:
									func_1516(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_7"), 7, 3), 0);
									func_1516(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_7"), 7, 3), 0);
									break;
								case 8:
									func_1516(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_8"), 7, 3), 0);
									func_1516(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_8"), 7, 3), 0);
									break;
								case 9:
									func_1516(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_9"), 7, 3), 0);
									func_1516(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_9"), 7, 3), 0);
									break;
								case 10:
									func_1516(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_10"), 7, 3), 0);
									func_1516(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_10"), 7, 3), 0);
									break;
								case 11:
									func_1516(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_11"), 7, 3), 0);
									func_1516(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_11"), 7, 3), 0);
									break;
								case 12:
									func_1516(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_12"), 7, 3), 0);
									func_1516(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_12"), 7, 3), 0);
									break;
								case 13:
									func_1516(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_13"), 7, 3), 0);
									func_1516(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_13"), 7, 3), 0);
									break;
								case 14:
									func_1516(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_14"), 7, 3), 0);
									func_1516(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_14"), 7, 3), 0);
									break;
								case 15:
									func_1516(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_15"), 7, 3), 0);
									func_1516(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_15"), 7, 3), 0);
									break;
							}
						}
						else if (iParam2 >= 73 && iParam2 <= 88)
						{
							switch (Global_78130[2 /*14*/].f_4)
							{
								case 0:
									func_1516(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_0"), 7, 3), 0);
									func_1516(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_0"), 7, 3), 0);
									break;
								case 1:
									func_1516(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_1"), 7, 3), 0);
									func_1516(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_1"), 7, 3), 0);
									break;
								case 2:
									func_1516(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_2"), 7, 3), 0);
									func_1516(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_2"), 7, 3), 0);
									break;
								case 3:
									func_1516(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_3"), 7, 3), 0);
									func_1516(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_3"), 7, 3), 0);
									break;
								case 4:
									func_1516(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_4"), 7, 3), 0);
									func_1516(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_4"), 7, 3), 0);
									break;
								case 5:
									func_1516(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_5"), 7, 3), 0);
									func_1516(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_5"), 7, 3), 0);
									break;
								case 6:
									func_1516(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_6"), 7, 3), 0);
									func_1516(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_6"), 7, 3), 0);
									break;
								case 7:
									func_1516(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_7"), 7, 3), 0);
									func_1516(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_7"), 7, 3), 0);
									break;
								case 8:
									func_1516(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_8"), 7, 3), 0);
									func_1516(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_8"), 7, 3), 0);
									break;
								case 9:
									func_1516(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_9"), 7, 3), 0);
									func_1516(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_9"), 7, 3), 0);
									break;
								case 10:
									func_1516(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_10"), 7, 3), 0);
									func_1516(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_10"), 7, 3), 0);
									break;
								case 11:
									func_1516(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_11"), 7, 3), 0);
									func_1516(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_11"), 7, 3), 0);
									break;
								case 12:
									func_1516(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_12"), 7, 3), 0);
									func_1516(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_12"), 7, 3), 0);
									break;
								case 13:
									func_1516(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_13"), 7, 3), 0);
									func_1516(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_13"), 7, 3), 0);
									break;
								case 14:
									func_1516(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_14"), 7, 3), 0);
									func_1516(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_14"), 7, 3), 0);
									break;
								case 15:
									func_1516(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_15"), 7, 3), 0);
									func_1516(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_15"), 7, 3), 0);
									break;
								}
							}
					}
				}
				else if (iParam0 == joaat("MP_F_Freemode_01"))
				{
					if (iParam1 == 11)
					{
						if (iParam2 >= 0 && iParam2 <= 15)
						{
							iVar8 = (16 + Global_78130[2 /*14*/].f_4);
							func_1516(iParam0, 8, iVar8, 0);
						}
					}
				}
				Global_78130[2 /*14*/] = { __LIB_6__::func_38(iParam0, iParam1, iParam2, -1) };
				if (iParam1 == 11)
				{
					iVar9 = __LIB_0__::func_358(iParam0, iParam2, Global_78130[2 /*14*/].f_4);
					if (iVar9 != -99)
					{
						func_1516(iParam0, 8, iVar9, 0);
					}
					if (iParam2 >= 192 && iParam2 <= 203)
					{
						switch (iParam2)
						{
							case 199:
								func_1516(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_0"), 7, 4), 0);
								break;
							case 200:
								func_1516(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_1"), 7, 4), 0);
								break;
							case 201:
								func_1516(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_2"), 7, 4), 0);
								break;
							}
					}
				}
				else if (iParam1 == 8)
				{
					iVar9 = __LIB_0__::func_357(iParam0, iParam2, Global_78130[2 /*14*/].f_4);
					if (iVar9 != -99)
					{
						func_1516(iParam0, 11, iVar9, 0);
					}
				}
			}
		}
	}
}

void func_1521(int iParam0)//Position - 0x99130
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	bool bVar14;
	struct<5> Var15;
	int* iVar16;
	int iVar17;
	struct<5> Var18;
	int* iVar19;
	int iVar20;
	struct<5> Var21;
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	iVar1 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
	iVar2 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 11);
	iVar3 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1);
	iVar4 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 1);
	iVar5 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 8);
	iVar6 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 8);
	iVar7 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 10);
	iVar8 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 10);
	iVar9 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 11, iVar1, iVar2);
	iVar10 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 1, iVar3, iVar4);
	iVar11 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 8, iVar5, iVar6);
	iVar12 = FILES::GET_HASH_NAME_FOR_PROP(iParam0, 0, PED::GET_PED_PROP_INDEX(iParam0, 0), PED::GET_PED_PROP_TEXTURE_INDEX(iParam0, 0));
	iVar13 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 10, iVar7, iVar8);
	bVar14 = false;
	if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar9, joaat("HOODED_JACKET"), 0) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar9, joaat("HOOD_UP"), 0))
	{
		if (!func_1526(iParam0, &bVar14, iVar9, iVar10, iVar12) || PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
		{
			if (__LIB_0__::func_286(iVar9, 0, 0, &iVar16))
			{
				FILES::GET_SHOP_PED_COMPONENT(iVar16, &Var15);
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 11, Var15.f_3, Var15.f_4, PED::GET_PED_PALETTE_VARIATION(iParam0, 11));
				if (PED::GET_PED_DRAWABLE_VARIATION(iParam0, 10) == 0 && __LIB_0__::func_285(iVar13, 11, -1))
				{
					if (__LIB_0__::func_285(iVar13, 11, Var15.f_1))
					{
						PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, iVar7, iVar8, 0);
					}
					else if (__LIB_0__::func_284(iVar13, 10, &iVar17, -1))
					{
						if (__LIB_0__::func_285(iVar17, 11, Var15.f_1))
						{
							FILES::GET_SHOP_PED_COMPONENT(iVar17, &Var18);
							PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var18.f_3, Var18.f_4, 0);
						}
					}
				}
				if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("MP_M_Freemode_01"))
				{
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar13, joaat("CREW_LOGO"), 0))
					{
						if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("IE_DRAW_16"), 0) && iVar13 != joaat("DLC_MP_IE_M_DECL_1_0"))
						{
							FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_IE_M_DECL_1_0"), &Var15);
							PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var15.f_3, Var15.f_4, 0);
						}
						else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("IE_DRAW_19"), 0) && iVar13 != joaat("DLC_MP_IE_M_DECL_2_0"))
						{
							FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_IE_M_DECL_2_0"), &Var15);
							PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var15.f_3, Var15.f_4, 0);
						}
						else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("GORKA_SUIT"), 0))
						{
							FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_X17_M_DECL_10_0"), &Var15);
							PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var15.f_3, Var15.f_4, 0);
						}
						else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("FX_DRAW_2"), 0) && iVar13 != joaat("DLC_MP_FIXER_M_DECL_0_0"))
						{
							FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_FIXER_M_DECL_0_0"), &Var15);
							PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var15.f_3, Var15.f_4, 0);
						}
						else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("FX_DRAW_3"), 0) && iVar13 != joaat("DLC_MP_FIXER_M_DECL_1_0"))
						{
							FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_FIXER_M_DECL_1_0"), &Var15);
							PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var15.f_3, Var15.f_4, 0);
						}
					}
				}
				else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar13, joaat("CREW_LOGO"), 0))
				{
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("IE_DRAW_16"), 0))
					{
						if (iVar13 != joaat("DLC_MP_IE_F_DECL_1_0"))
						{
							FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_IE_F_DECL_1_0"), &Var15);
							PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var15.f_3, Var15.f_4, 0);
						}
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("IE_DRAW_19"), 0))
					{
						if (iVar13 != joaat("DLC_MP_IE_F_DECL_2_0"))
						{
							FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_IE_F_DECL_2_0"), &Var15);
							PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var15.f_3, Var15.f_4, 0);
						}
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("GORKA_SUIT"), 0))
					{
						FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_X17_F_DECL_10_0"), &Var15);
						PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var15.f_3, Var15.f_4, 0);
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("FX_DRAW_7"), 0) && iVar13 != joaat("DLC_MP_FIXER_F_DECL_1_0"))
					{
						FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_FIXER_F_DECL_1_0"), &Var15);
						PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var15.f_3, Var15.f_4, 0);
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("FX_DRAW_8"), 0) && iVar13 != joaat("DLC_MP_FIXER_F_DECL_2_0"))
					{
						FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_FIXER_F_DECL_2_0"), &Var15);
						PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var15.f_3, Var15.f_4, 0);
					}
				}
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 1, iVar3, iVar4, 0);
			}
		}
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar9, joaat("HOODED_JACKET"), 0) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar9, joaat("HOOD_DOWN"), 0))
	{
		if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar12, joaat("FAKE_HAT"), 1))
		{
			if (__LIB_0__::func_286(iVar9, 1, 0, &iVar19))
			{
				FILES::GET_SHOP_PED_COMPONENT(iVar19, &Var15);
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 11, Var15.f_3, Var15.f_4, PED::GET_PED_PALETTE_VARIATION(iParam0, 11));
				if (PED::GET_PED_DRAWABLE_VARIATION(iParam0, 10) == 0 && __LIB_0__::func_285(iVar13, 11, -1))
				{
					if (__LIB_0__::func_285(iVar13, 11, Var15.f_1))
					{
						PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, iVar7, iVar8, 0);
					}
					else if (__LIB_0__::func_284(iVar13, 10, &iVar20, -1))
					{
						if (__LIB_0__::func_285(iVar20, 11, Var15.f_1))
						{
							FILES::GET_SHOP_PED_COMPONENT(iVar20, &Var21);
							PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var21.f_3, Var21.f_4, 0);
						}
					}
				}
				if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("MP_M_Freemode_01"))
				{
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar13, joaat("CREW_LOGO"), 0))
					{
						if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar19, joaat("IE_DRAW_16"), 0) && iVar13 != joaat("DLC_MP_IE_M_DECL_1_0"))
						{
							FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_IE_M_DECL_1_0"), &Var15);
							PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var15.f_3, Var15.f_4, 0);
						}
						else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar19, joaat("IE_DRAW_19"), 0) && iVar13 != joaat("DLC_MP_IE_M_DECL_2_0"))
						{
							FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_IE_M_DECL_2_0"), &Var15);
							PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var15.f_3, Var15.f_4, 0);
						}
						else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar19, joaat("GORKA_SUIT"), 0))
						{
							FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_X17_M_DECL_10_0"), &Var15);
							PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var15.f_3, Var15.f_4, 0);
						}
						else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar19, joaat("FX_DRAW_2"), 0) && iVar13 != joaat("DLC_MP_FIXER_M_DECL_0_0"))
						{
							FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_FIXER_M_DECL_0_0"), &Var15);
							PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var15.f_3, Var15.f_4, 0);
						}
						else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar19, joaat("FX_DRAW_3"), 0) && iVar13 != joaat("DLC_MP_FIXER_M_DECL_1_0"))
						{
							FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_FIXER_M_DECL_1_0"), &Var15);
							PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var15.f_3, Var15.f_4, 0);
						}
					}
				}
				else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar13, joaat("CREW_LOGO"), 0))
				{
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar19, joaat("IE_DRAW_16"), 0))
					{
						if (iVar13 != joaat("DLC_MP_IE_F_DECL_1_0"))
						{
							FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_IE_F_DECL_1_0"), &Var15);
							PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var15.f_3, Var15.f_4, 0);
						}
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar19, joaat("IE_DRAW_19"), 0))
					{
						if (iVar13 != joaat("DLC_MP_IE_F_DECL_2_0"))
						{
							FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_IE_F_DECL_2_0"), &Var15);
							PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var15.f_3, Var15.f_4, 0);
						}
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar19, joaat("GORKA_SUIT"), 0))
					{
						FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_X17_F_DECL_10_0"), &Var15);
						PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var15.f_3, Var15.f_4, 0);
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar19, joaat("FX_DRAW_7"), 0) && iVar13 != joaat("DLC_MP_FIXER_F_DECL_1_0"))
					{
						FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_FIXER_F_DECL_1_0"), &Var15);
						PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var15.f_3, Var15.f_4, 0);
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar19, joaat("FX_DRAW_8"), 0) && iVar13 != joaat("DLC_MP_FIXER_F_DECL_2_0"))
					{
						FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_FIXER_F_DECL_2_0"), &Var15);
						PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var15.f_3, Var15.f_4, 0);
					}
				}
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 1, iVar3, iVar4, 0);
			}
		}
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar11, joaat("HAZ_HOOD"), 0) || __LIB_0__::func_283(iParam0, iVar9))
	{
		iVar6 = iVar2;
		if (!func_1526(iParam0, &bVar14, iVar9, iVar10, iVar12))
		{
			if (bVar14)
			{
				if (iVar0 == joaat("MP_M_Freemode_01"))
				{
					iVar5 = 15;
					iVar6 = 0;
				}
				else
				{
					iVar5 = 14;
					iVar6 = 0;
				}
			}
			else if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("MP_M_Freemode_01"))
			{
				FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_HEIST_M_SPECIAL_6_0"), &Var15);
				iVar5 = Var15.f_3;
			}
			else
			{
				FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_HEIST_F_SPECIAL_10_0"), &Var15);
				iVar5 = Var15.f_3;
			}
		}
		else if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("MP_M_Freemode_01"))
		{
			FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_HEIST_M_SPECIAL_7_0"), &Var15);
			iVar5 = Var15.f_3;
		}
		else
		{
			FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_HEIST_F_SPECIAL_11_0"), &Var15);
			iVar5 = Var15.f_3;
		}
		if (iVar5 != PED::GET_PED_DRAWABLE_VARIATION(iParam0, 8) || iVar6 != PED::GET_PED_TEXTURE_VARIATION(iParam0, 8))
		{
			PED::SET_PED_COMPONENT_VARIATION(iParam0, 8, iVar5, iVar6, PED::GET_PED_PALETTE_VARIATION(iParam0, 8));
		}
	}
}

int func_1526(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x99AFA
{
	int iVar0;
	*iParam1 = 0;
	if (iParam2 == -1)
	{
		iParam2 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 11, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11), PED::GET_PED_TEXTURE_VARIATION(iParam0, 11));
	}
	if (iParam3 == -1)
	{
		iParam3 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 1, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1), PED::GET_PED_TEXTURE_VARIATION(iParam0, 1));
	}
	if (iParam4 == -1)
	{
		iParam4 = FILES::GET_HASH_NAME_FOR_PROP(iParam0, 0, PED::GET_PED_PROP_INDEX(iParam0, 0), PED::GET_PED_PROP_TEXTURE_INDEX(iParam0, 0));
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam2, joaat("HOODED_JACKET"), 0))
	{
		if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam2, joaat("FITTED_HOOD"), 0))
		{
			if (!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam4, joaat("HOOD_HAT"), 1) && PED::GET_PED_PROP_INDEX(iParam0, 0) != -1)
			{
				return 0;
			}
			if ((!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("HOOD_COMPAT"), 0) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("HAZ_MASK"), 0)) && PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1) != 0)
			{
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam4, joaat("HOOD_HAT"), 1))
				{
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("SKI_MASK"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("BIKER_MASK"), 0))
					{
					}
					else
					{
						return 0;
					}
				}
				else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("BIKER_MASK"), 0))
				{
				}
				else
				{
					return 0;
				}
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("NIGHT_VISION"), 0))
			{
				return 0;
			}
		}
		else
		{
			if (PED::GET_PED_PROP_INDEX(iParam0, 0) != -1)
			{
				return 0;
			}
			if ((!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("HOOD_COMPAT"), 0) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("HAZ_MASK"), 0)) && PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1) != 0)
			{
				return 0;
			}
		}
		return 1;
	}
	if (iVar0 == joaat("MP_M_Freemode_01"))
	{
		if (!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam2, joaat("HEIST_DRAW_14"), 0))
		{
			*iParam1 = 1;
			return 0;
		}
		switch (iParam3)
		{
			case joaat("DLC_MP_HEIST_M_BERD_21_0"):
			case joaat("DLC_MP_HEIST_M_BERD_21_1"):
			case joaat("DLC_MP_HEIST_M_BERD_21_2"):
			case joaat("DLC_MP_HEIST_M_BERD_21_3"):
			case joaat("DLC_MP_HEIST_M_BERD_21_4"):
			case joaat("DLC_MP_HEIST_M_BERD_21_5"):
			case joaat("DLC_MP_HEIST_M_BERD_21_6"):
			case joaat("DLC_MP_HEIST_M_BERD_21_7"):
			case joaat("DLC_MP_HEIST_M_BERD_21_8"):
			case joaat("DLC_MP_HEIST_M_BERD_14_0"):
			case joaat("DLC_MP_HEIST_M_BERD_14_1"):
			case joaat("DLC_MP_HEIST_M_BERD_14_2"):
			case joaat("DLC_MP_HEIST_M_BERD_14_3"):
			case joaat("DLC_MP_HEIST_M_BERD_14_4"):
			case joaat("DLC_MP_HEIST_M_BERD_14_5"):
			case joaat("DLC_MP_HEIST_M_BERD_14_6"):
			case joaat("DLC_MP_HEIST_M_BERD_14_7"):
			case joaat("DLC_MP_HEIST_M_BERD_14_8"):
			case joaat("DLC_MP_HEIST_M_BERD_14_9"):
			case joaat("DLC_MP_HEIST_M_BERD_14_10"):
			case joaat("DLC_MP_HEIST_M_BERD_14_11"):
			case joaat("DLC_MP_HEIST_M_BERD_14_12"):
			case joaat("DLC_MP_HEIST_M_BERD_14_13"):
			case joaat("DLC_MP_HEIST_M_BERD_14_14"):
			case joaat("DLC_MP_HEIST_M_BERD_14_15"):
			case joaat("DLC_MP_HEIST_M_BERD_14_16"):
			case joaat("DLC_MP_HEIST_M_BERD_14_17"):
			case joaat("DLC_MP_HEIST_M_BERD_14_18"):
			case joaat("DLC_MP_HEIST_M_BERD_14_19"):
			case joaat("DLC_MP_HEIST_M_BERD_14_20"):
			case joaat("DLC_MP_HEIST_M_BERD_14_21"):
			case joaat("DLC_MP_HEIST_M_BERD_14_22"):
			case joaat("DLC_MP_HEIST_M_BERD_14_23"):
			case joaat("DLC_MP_HEIST_M_BERD_14_24"):
			case joaat("DLC_MP_HEIST_M_BERD_14_25"):
			case joaat("DLC_MP_IND_M_BERD_4_0"):
			case joaat("DLC_MP_IND_M_BERD_4_1"):
			case joaat("DLC_MP_IND_M_BERD_3_0"):
			case joaat("DLC_MP_IND_M_BERD_3_1"):
				*iParam1 = 1;
				return 0;
				break;
		}
	}
	else
	{
		if (!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam2, joaat("HEIST_DRAW_15"), 0))
		{
			*iParam1 = 1;
			return 0;
		}
		if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("SCRUFFY_BALACLAVA"), 0))
		{
			*iParam1 = 1;
			return 0;
		}
		switch (iParam3)
		{
			case joaat("DLC_MP_SMUG_F_BERD_8_0"):
			case joaat("DLC_MP_SMUG_F_BERD_8_1"):
			case joaat("DLC_MP_SMUG_F_BERD_8_2"):
			case joaat("DLC_MP_SMUG_F_BERD_8_3"):
			case joaat("DLC_MP_SMUG_F_BERD_8_4"):
			case joaat("DLC_MP_SMUG_F_BERD_8_5"):
			case joaat("DLC_MP_SMUG_F_BERD_8_6"):
			case joaat("DLC_MP_SMUG_F_BERD_8_7"):
			case joaat("DLC_MP_SMUG_F_BERD_8_8"):
			case joaat("DLC_MP_SMUG_F_BERD_8_9"):
			case joaat("DLC_MP_SMUG_F_BERD_8_10"):
			case joaat("DLC_MP_SMUG_F_BERD_8_11"):
			case joaat("DLC_MP_SMUG_F_BERD_8_12"):
			case joaat("DLC_MP_SMUG_F_BERD_8_13"):
			case joaat("DLC_MP_SMUG_F_BERD_8_14"):
			case joaat("DLC_MP_SMUG_F_BERD_8_15"):
			case joaat("DLC_MP_SMUG_F_BERD_8_16"):
			case joaat("DLC_MP_SMUG_F_BERD_8_17"):
			case joaat("DLC_MP_SMUG_F_BERD_8_18"):
			case joaat("DLC_MP_SMUG_F_BERD_8_19"):
			case joaat("DLC_MP_SMUG_F_BERD_8_20"):
			case joaat("DLC_MP_SMUG_F_BERD_8_21"):
			case joaat("DLC_MP_SMUG_F_BERD_8_22"):
			case joaat("DLC_MP_SMUG_F_BERD_8_23"):
			case joaat("DLC_MP_SMUG_F_BERD_8_24"):
			case joaat("DLC_MP_SMUG_F_BERD_8_25"):
			case joaat("DLC_MP_HEIST_F_BERD_23_0"):
			case joaat("DLC_MP_HEIST_F_BERD_23_1"):
			case joaat("DLC_MP_HEIST_F_BERD_23_2"):
			case joaat("DLC_MP_HEIST_F_BERD_23_3"):
			case joaat("DLC_MP_HEIST_F_BERD_23_4"):
			case joaat("DLC_MP_HEIST_F_BERD_23_5"):
			case joaat("DLC_MP_HEIST_F_BERD_23_6"):
			case joaat("DLC_MP_HEIST_F_BERD_23_7"):
			case joaat("DLC_MP_HEIST_F_BERD_23_8"):
			case joaat("DLC_MP_HEIST_F_BERD_23_9"):
			case joaat("DLC_MP_HEIST_F_BERD_22_0"):
			case joaat("DLC_MP_HEIST_F_BERD_22_1"):
			case joaat("DLC_MP_HEIST_F_BERD_22_2"):
			case joaat("DLC_MP_HEIST_F_BERD_22_3"):
			case joaat("DLC_MP_HEIST_F_BERD_22_4"):
			case joaat("DLC_MP_HEIST_F_BERD_22_5"):
			case joaat("DLC_MP_HEIST_F_BERD_22_6"):
			case joaat("DLC_MP_HEIST_F_BERD_22_7"):
			case joaat("DLC_MP_HEIST_F_BERD_22_8"):
			case joaat("DLC_MP_HEIST_F_BERD_22_9"):
			case joaat("DLC_MP_HEIST_F_BERD_22_10"):
			case joaat("DLC_MP_HEIST_F_BERD_22_11"):
			case joaat("DLC_MP_HEIST_F_BERD_22_12"):
			case joaat("DLC_MP_HEIST_F_BERD_22_13"):
			case joaat("DLC_MP_HEIST_F_BERD_22_14"):
			case joaat("DLC_MP_HEIST_F_BERD_22_15"):
			case joaat("DLC_MP_HEIST_F_BERD_22_16"):
			case joaat("DLC_MP_HEIST_F_BERD_22_17"):
			case joaat("DLC_MP_HEIST_F_BERD_22_18"):
			case joaat("DLC_MP_HEIST_F_BERD_22_19"):
			case joaat("DLC_MP_HEIST_F_BERD_22_20"):
			case joaat("DLC_MP_HEIST_F_BERD_22_21"):
			case joaat("DLC_MP_HEIST_F_BERD_21_0"):
			case joaat("DLC_MP_HEIST_F_BERD_21_1"):
			case joaat("DLC_MP_HEIST_F_BERD_21_2"):
			case joaat("DLC_MP_HEIST_F_BERD_21_3"):
			case joaat("DLC_MP_HEIST_F_BERD_21_4"):
			case joaat("DLC_MP_HEIST_F_BERD_21_5"):
			case joaat("DLC_MP_HEIST_F_BERD_21_6"):
			case joaat("DLC_MP_HEIST_F_BERD_21_7"):
			case joaat("DLC_MP_HEIST_F_BERD_21_8"):
			case joaat("DLC_MP_HEIST_F_BERD_20_0"):
			case joaat("DLC_MP_HEIST_F_BERD_20_1"):
			case joaat("DLC_MP_HEIST_F_BERD_19_0"):
			case joaat("DLC_MP_HEIST_F_BERD_19_1"):
			case joaat("DLC_MP_HEIST_F_BERD_19_2"):
			case joaat("DLC_MP_HEIST_F_BERD_19_3"):
			case joaat("DLC_MP_HEIST_F_BERD_19_4"):
			case joaat("DLC_MP_HEIST_F_BERD_19_5"):
			case joaat("DLC_MP_HEIST_F_BERD_19_6"):
			case joaat("DLC_MP_HEIST_F_BERD_19_7"):
			case joaat("DLC_MP_HEIST_F_BERD_19_8"):
			case joaat("DLC_MP_HEIST_F_BERD_19_9"):
			case joaat("DLC_MP_HEIST_F_BERD_19_10"):
			case joaat("DLC_MP_HEIST_F_BERD_18_0"):
			case joaat("DLC_MP_HEIST_F_BERD_18_1"):
			case joaat("DLC_MP_HEIST_F_BERD_18_2"):
			case joaat("DLC_MP_HEIST_F_BERD_18_3"):
			case joaat("DLC_MP_HEIST_F_BERD_18_4"):
			case joaat("DLC_MP_HEIST_F_BERD_18_5"):
			case joaat("DLC_MP_HEIST_F_BERD_18_6"):
			case joaat("DLC_MP_HEIST_F_BERD_18_7"):
			case joaat("DLC_MP_HEIST_F_BERD_18_8"):
			case joaat("DLC_MP_HEIST_F_BERD_17_0"):
			case joaat("DLC_MP_HEIST_F_BERD_17_1"):
			case joaat("DLC_MP_HEIST_F_BERD_17_2"):
			case joaat("DLC_MP_HEIST_F_BERD_17_3"):
			case joaat("DLC_MP_HEIST_F_BERD_17_4"):
			case joaat("DLC_MP_HEIST_F_BERD_17_5"):
			case joaat("DLC_MP_HEIST_F_BERD_17_6"):
			case joaat("DLC_MP_HEIST_F_BERD_17_7"):
			case joaat("DLC_MP_HEIST_F_BERD_17_8"):
			case joaat("DLC_MP_HEIST_F_BERD_17_9"):
			case joaat("DLC_MP_HEIST_F_BERD_17_10"):
			case joaat("DLC_MP_HEIST_F_BERD_14_0"):
			case joaat("DLC_MP_HEIST_F_BERD_14_1"):
			case joaat("DLC_MP_HEIST_F_BERD_14_2"):
			case joaat("DLC_MP_HEIST_F_BERD_14_3"):
			case joaat("DLC_MP_HEIST_F_BERD_14_4"):
			case joaat("DLC_MP_HEIST_F_BERD_14_5"):
			case joaat("DLC_MP_HEIST_F_BERD_14_6"):
			case joaat("DLC_MP_HEIST_F_BERD_14_7"):
			case joaat("DLC_MP_HEIST_F_BERD_14_8"):
			case joaat("DLC_MP_HEIST_F_BERD_14_9"):
			case joaat("DLC_MP_HEIST_F_BERD_14_10"):
			case joaat("DLC_MP_HEIST_F_BERD_14_11"):
			case joaat("DLC_MP_HEIST_F_BERD_14_12"):
			case joaat("DLC_MP_HEIST_F_BERD_14_13"):
			case joaat("DLC_MP_HEIST_F_BERD_14_14"):
			case joaat("DLC_MP_HEIST_F_BERD_14_15"):
			case joaat("DLC_MP_HEIST_F_BERD_14_16"):
			case joaat("DLC_MP_HEIST_F_BERD_14_17"):
			case joaat("DLC_MP_HEIST_F_BERD_14_18"):
			case joaat("DLC_MP_HEIST_F_BERD_14_19"):
			case joaat("DLC_MP_HEIST_F_BERD_14_20"):
			case joaat("DLC_MP_HEIST_F_BERD_14_21"):
			case joaat("DLC_MP_HEIST_F_BERD_14_22"):
			case joaat("DLC_MP_HEIST_F_BERD_14_23"):
			case joaat("DLC_MP_HEIST_F_BERD_14_24"):
			case joaat("DLC_MP_HEIST_F_BERD_14_25"):
			case joaat("DLC_MP_HEIST_F_BERD_13_0"):
			case joaat("DLC_MP_HEIST_F_BERD_13_1"):
			case joaat("DLC_MP_HEIST_F_BERD_13_2"):
			case joaat("DLC_MP_HEIST_F_BERD_13_3"):
			case joaat("DLC_MP_HEIST_F_BERD_12_0"):
			case joaat("DLC_MP_HEIST_F_BERD_12_1"):
			case joaat("DLC_MP_HEIST_F_BERD_12_2"):
			case joaat("DLC_MP_HEIST_F_BERD_12_3"):
			case joaat("DLC_MP_HEIST_F_BERD_7_0"):
			case joaat("DLC_MP_HEIST_F_BERD_7_1"):
			case joaat("DLC_MP_HEIST_F_BERD_5_0"):
			case joaat("DLC_MP_HEIST_F_BERD_5_1"):
			case joaat("DLC_MP_HEIST_F_BERD_4_0"):
			case joaat("DLC_MP_HEIST_F_BERD_4_1"):
			case joaat("DLC_MP_HEIST_F_BERD_0_0"):
			case joaat("DLC_MP_XMAS2_F_BERD_1_0"):
			case joaat("DLC_MP_LTS_F_BERD_0_0"):
			case joaat("DLC_MP_LTS_F_BERD_0_1"):
			case joaat("DLC_MP_LTS_F_BERD_0_2"):
			case joaat("DLC_MP_LTS_F_BERD_0_3"):
			case joaat("DLC_MP_LTS_F_BERD_0_4"):
			case joaat("DLC_MP_IND_F_BERD_4_0"):
			case joaat("DLC_MP_IND_F_BERD_4_1"):
			case joaat("DLC_MP_IND_F_BERD_3_0"):
			case joaat("DLC_MP_IND_F_BERD_3_1"):
				*iParam1 = 1;
				return 0;
				break;
			}
	}
	if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("HAZ_MASK"), 0) && !__LIB_0__::func_348(iVar0, 14, func_342(iParam0, 14, 0), -1))
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_1532(int iParam0, int iParam1, int iParam2)//Position - 0x9A2B7
{
	struct<37> Var0;
	int iVar1;
	int iVar2;
	Var0 = 12;
	Var0.f_13 = 12;
	Var0.f_26 = 9;
	Var0.f_36 = 9;
	Var0.f_46 = 3;
	iVar1 = -1;
	if (iParam2 == -1)
	{
		iParam2 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0);
	}
	iVar2 = 0;
	while (iVar2 < 12)
	{
		Var0[iVar2] = -1;
		Var0.f_13[iVar2] = -1;
		iVar2++;
	}
	iVar2 = 0;
	while (iVar2 < Var0.f_26)
	{
		Var0.f_26[iVar2] = -1;
		Var0.f_36[iVar2] = -1;
		iVar2++;
	}
	iVar2 = 0;
	while (iVar2 < Var0.f_46)
	{
		Var0.f_46[iVar2] = -1;
		iVar2++;
	}
	if (__LIB_3__::func_376(iParam0, &Var0, iParam1, &iVar1))
	{
		if ((iParam1 == 1 || iParam1 == 4) || iParam1 == 3)
		{
			func_1533(iParam0);
			__LIB_4__::func_984(iParam0, &Var0, iParam2);
		}
		if (iParam1 == 11)
		{
			if (iVar1 != -1)
			{
				if (__LIB_3__::func_336(iVar1) == 22)
				{
					Var0.f_26[2] = -1;
				}
				else if (__LIB_3__::func_336(iVar1) == 8)
				{
					Var0.f_26[1] = -1;
					Var0.f_26[2] = -1;
				}
				else
				{
					Var0.f_26[1] = -1;
					Var0.f_26[2] = -1;
					Var0.f_26[0] = -1;
				}
				if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("MP_F_Freemode_01"))
				{
					if (__LIB_3__::func_343(ENTITY::GET_ENTITY_MODEL(iParam0), 7, func_342(iParam0, 7, -1), -1))
					{
						Var0[7] = 0;
						Var0.f_13[7] = 0;
					}
				}
			}
			__LIB_4__::func_984(iParam0, &Var0, iParam2);
		}
		else if (iParam1 == 3)
		{
			PLAYER::SET_PLAYER_UNDERWATER_BREATH_PERCENT_REMAINING(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0), 100f);
		}
		iVar2 = 0;
		while (iVar2 < 12)
		{
			if (Var0[iVar2] != -1)
			{
				PED::SET_PED_COMPONENT_VARIATION(iParam0, iVar2, Var0[iVar2], Var0.f_13[iVar2], 0);
			}
			iVar2++;
		}
		iVar2 = 0;
		while (iVar2 < Var0.f_26)
		{
			if (Var0.f_26[iVar2] != -1 && Var0.f_26[iVar2] != 255)
			{
				PED::SET_PED_PROP_INDEX(iParam0, iVar2, Var0.f_26[iVar2], Var0.f_36[iVar2], true);
			}
			iVar2++;
		}
	}
}

void func_1533(int iParam0)//Position - 0x9A4C3
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 77)
	{
		if (__LIB_3__::func_521(iParam0, iVar0, -1))
		{
			if (((((((((iVar0 == 0 || iVar0 == 1) || iVar0 == 3) || iVar0 == 4) || iVar0 == 5) || iVar0 == 6) || iVar0 == 7) || iVar0 == 8) || iVar0 == 10) || iVar0 == 11)
			{
				func_1534(iParam0, iVar0, -1, -1);
			}
		}
		iVar0++;
	}
}

void func_1534(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x9A558
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	if (iParam2 == -1)
	{
		iParam2 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0);
	}
	bVar0 = false;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		Global_78200[iVar1] = -1;
		Global_78200.f_13[iVar1] = -1;
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < Global_78200.f_26)
	{
		Global_78200.f_26[iVar1] = -1;
		Global_78200.f_36[iVar1] = -1;
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < Global_78200.f_46)
	{
		Global_78200.f_46[iVar1] = -1;
		iVar1++;
	}
	bVar2 = false;
	if (__LIB_3__::func_376(iParam0, &Global_78200, iParam1, &iParam3))
	{
		iVar1 = 0;
		while (iVar1 < 12)
		{
			if (Global_78200[iVar1] != -1)
			{
				if (PED::GET_PED_DRAWABLE_VARIATION(iParam0, iVar1) == Global_78200[iVar1] && PED::GET_PED_TEXTURE_VARIATION(iParam0, iVar1) == Global_78200.f_13[iVar1])
				{
					if (iVar1 == 2)
					{
						bVar0 = true;
					}
					if (iVar1 == 1)
					{
						bVar2 = true;
					}
					PED::SET_PED_COMPONENT_VARIATION(iParam0, iVar1, 0, 0, 0);
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < Global_78200.f_26)
		{
			if (Global_78200.f_26[iVar1] != -1 && Global_78200.f_26[iVar1] != 255)
			{
				if (PED::GET_PED_PROP_INDEX(iParam0, iVar1) == Global_78200.f_26[iVar1] && PED::GET_PED_PROP_TEXTURE_INDEX(iParam0, iVar1) == Global_78200.f_36[iVar1])
				{
					PED::CLEAR_PED_PROP(iParam0, iVar1);
				}
			}
			iVar1++;
		}
		if (bVar0)
		{
			if (!__LIB_0__::func_157(0))
			{
				if (__LIB_1__::func_342(161, -1))
				{
					func_1452(iParam0, 2, __LIB_1__::func_360(2053, Global_78127, 0), 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
				else
				{
					func_1452(iParam0, 2, __LIB_1__::func_360(753, Global_78127, 0), 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
			}
		}
		if (iParam1 == 4)
		{
			if (bVar2)
			{
				if (iParam2 != -1 && iParam2 != PLAYER::PLAYER_ID())
				{
					if (NETWORK::NETWORK_HAS_CACHED_PLAYER_HEAD_BLEND_DATA(PLAYER::INT_TO_PLAYERINDEX(iParam2)))
					{
						NETWORK::NETWORK_APPLY_CACHED_PLAYER_HEAD_BLEND_DATA(iParam0, PLAYER::INT_TO_PLAYERINDEX(iParam2));
					}
				}
				else
				{
					__LIB_2__::func_996(iParam0, -1);
				}
			}
			__LIB_1__::func_207(0);
			__LIB_2__::func_467(1, 2);
		}
	}
}

int func_1598(var uParam0, var uParam1)//Position - 0xA6120
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	iVar0 = __LIB_3__::func_616();
	iVar2 = 0;
	iVar3 = -1;
	if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar2 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		iVar1 = ENTITY::GET_ENTITY_MODEL(iVar2);
	}
	else
	{
		iVar1 = __LIB_3__::func_915();
	}
	__LIB_3__::func_914(&iVar1);
	switch (iVar0)
	{
		case 4:
			switch (iVar1)
			{
				case joaat("avisa"):
					iVar3 = 1;
					if (!__LIB_5__::func_863(uParam1, iVar3))
					{
						return 0;
					}
					break;
				default:
					iVar3 = 2;
					if (!__LIB_5__::func_863(uParam1, iVar3))
					{
						return 0;
					}
					break;
			}
			break;
		case 3:
			switch (iVar1)
			{
				case joaat("seasparrow3"):
					iVar3 = 0;
					if (!__LIB_5__::func_863(uParam1, iVar3))
					{
						return 0;
					}
					break;
				default:
					return 1;
					break;
			}
			break;
		default:
			return 1;
			break;
	}
	if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()) && iVar2 != 0)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_109))
		{
			func_408(&iVar2, &(uParam1->f_109), 4);
			__LIB_3__::func_633(&(uParam1->f_109));
			ENTITY::SET_ENTITY_COLLISION(uParam1->f_109, false, false);
			ENTITY::SET_ENTITY_INVINCIBLE(uParam1->f_109, true);
			ENTITY::SET_ENTITY_COORDS_NO_OFFSET(uParam1->f_109, uParam1->f_28, false, false, true);
			VEHICLE::SET_DISABLE_MAP_COLLISION(uParam1->f_109);
			ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_109, true);
			VEHICLE::SET_VEHICLE_ENGINE_ON(uParam1->f_109, false, true, false);
			ENTITY::SET_ENTITY_VISIBLE(uParam1->f_109, false, false);
			AUDIO::SET_VEHICLE_RADIO_ENABLED(uParam1->f_109, false);
			__LIB_5__::func_489(uParam1->f_109);
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar2))
			{
				AUDIO::SET_VEHICLE_RADIO_ENABLED(iVar2, false);
			}
			if (iVar1 == joaat("stromberg") || iVar1 == joaat("toreador"))
			{
				VEHICLE::SET_VEHICLE_CAN_DEFORM_WHEELS(uParam1->f_109, false);
				VEHICLE::TRANSFORM_TO_SUBMARINE(uParam1->f_109, true);
			}
			return 0;
		}
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_109))
	{
		uParam1->f_109 = VEHICLE::CREATE_VEHICLE(iVar1, uParam1->f_28, 0f, false, false, true);
		__LIB_3__::func_633(&(uParam1->f_109));
		ENTITY::SET_ENTITY_COLLISION(uParam1->f_109, false, false);
		ENTITY::SET_ENTITY_INVINCIBLE(uParam1->f_109, true);
		ENTITY::SET_ENTITY_COORDS_NO_OFFSET(uParam1->f_109, uParam1->f_28, false, false, true);
		VEHICLE::SET_DISABLE_MAP_COLLISION(uParam1->f_109);
		ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_109, true);
		VEHICLE::SET_VEHICLE_ENGINE_ON(uParam1->f_109, false, true, false);
		ENTITY::SET_ENTITY_VISIBLE(uParam1->f_109, false, false);
		AUDIO::SET_VEHICLE_RADIO_ENABLED(uParam1->f_109, false);
		__LIB_5__::func_489(uParam1->f_109);
		return 0;
	}
	if (iVar2 == 0)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_2))
		{
			func_1403(&(uParam1->f_2), PLAYER::PLAYER_ID(), 1, 0);
			ENTITY::SET_ENTITY_VISIBLE(uParam1->f_2, false, false);
			return 0;
		}
		if (__LIB_0__::func_121(uParam1->f_2) && __LIB_0__::func_121(uParam1->f_109))
		{
			if (__LIB_2__::func_899())
			{
				PED::SET_PED_INTO_VEHICLE(uParam1->f_2, uParam1->f_109, __LIB_3__::func_890());
			}
			else
			{
				PED::SET_PED_INTO_VEHICLE(uParam1->f_2, uParam1->f_109, -1);
			}
		}
	}
	__LIB_5__::func_862(iVar3);
	__LIB_3__::func_900(&(Global_1946250.f_4073), 6000, "Submarine INT enter", uParam1->f_28, uParam1->f_31, uParam1->f_3, uParam1->f_8, 1, 0, 500, 0, 2);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar1);
	return 1;
}

int func_1616(int iParam0, var uParam1)//Position - 0xA6C43
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	int iVar5;
	if (__LIB_5__::func_236())
	{
		return 1;
	}
	if (__LIB_9__::func_315())
	{
		return 1;
	}
	iVar0 = __LIB_3__::func_616();
	iVar1 = __LIB_5__::func_493();
	Var2 = { __LIB_7__::func_791(iParam0, iVar0) };
	if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_2))
	{
		if (func_1403(&(uParam1->f_2), PLAYER::PLAYER_ID(), 1, 0))
		{
			ENTITY::SET_ENTITY_COORDS_NO_OFFSET(uParam1->f_2, __LIB_3__::func_921(iParam0, iVar0, iVar1), false, false, true);
			ENTITY::SET_ENTITY_HEADING(uParam1->f_2, __LIB_7__::func_736(iParam0, iVar0));
			ENTITY::SET_ENTITY_VISIBLE(uParam1->f_2, false, false);
		}
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_109))
	{
		func_408(&iVar1, &(uParam1->f_109), 32);
		__LIB_3__::func_633(&(uParam1->f_109));
		ENTITY::SET_ENTITY_COORDS_NO_OFFSET(uParam1->f_109, Var2, false, false, true);
		ENTITY::SET_ENTITY_HEADING(uParam1->f_109, __LIB_7__::func_790(iParam0, iVar0));
		VEHICLE::SET_DISABLE_MAP_COLLISION(uParam1->f_109);
		ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_109, true);
		ENTITY::SET_ENTITY_COLLISION(uParam1->f_109, true, false);
		ENTITY::SET_ENTITY_VISIBLE(uParam1->f_109, false, false);
		return 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_109) && __LIB_0__::func_121(uParam1->f_109))
	{
		Var3 = { ENTITY::GET_ENTITY_COORDS(uParam1->f_109, true) };
		Var4 = { ENTITY::GET_ENTITY_ROTATION(uParam1->f_109, 2) };
		iVar5 = __LIB_3__::func_920(iParam0, iVar0);
		__LIB_3__::func_900(&(Global_1946250.f_3638), iVar5, "Submarine enter", Var3, Var4, uParam1->f_3, uParam1->f_8, 1, 0, 0, 0, 2);
		return 1;
	}
	return 0;
}

void func_1713(int iParam0, int iParam1)//Position - 0xAB93F
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5[10];
	struct<3> Var6;
	int iVar7;
	struct<13> Var8;
	iVar4 = -1;
	if (__LIB_8__::func_925(PLAYER::PLAYER_ID(), iParam0))
	{
		if (__LIB_1__::func_526())
		{
			iVar4 = __LIB_3__::func_680();
		}
		Var6 = { __LIB_1__::func_694(PLAYER::PLAYER_ID()) };
		iVar3 = PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uVar5, -1);
		if (iVar3 > 0)
		{
			iVar2 = 0;
			while (iVar2 < iVar3)
			{
				if (!ENTITY::IS_ENTITY_DEAD(uVar5[iVar2], false) && PED::IS_PED_A_PLAYER(uVar5[iVar2]))
				{
					if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(uVar5[iVar2], true), Var6) <= IntToFloat(__LIB_3__::func_679(iParam0)))
					{
						iVar7 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(uVar5[iVar2]);
						Var8 = { __LIB_1__::func_696(iVar7) };
						if (!bVar0)
						{
							if ((iVar4 != -1 && iVar4 == __LIB_3__::func_106(&Var8)) || NETWORK::NETWORK_IS_FRIEND(&Var8))
							{
								if (((!__LIB_1__::func_101(PLAYER::GET_PLAYER_PED(iVar7)) && !__LIB_1__::func_907(iVar7, 1)) && !__LIB_5__::func_424(iVar7)) && !__LIB_3__::func_728(iVar7, 14))
								{
									bVar0 = true;
								}
							}
						}
						if (((((!bVar1 && __LIB_3__::func_360(PLAYER::PLAYER_ID(), iVar7)) && !__LIB_1__::func_101(PLAYER::GET_PLAYER_PED(iVar7))) && !__LIB_1__::func_907(iVar7, 1)) && !__LIB_5__::func_424(iVar7)) && !__LIB_3__::func_728(iVar7, 14))
						{
							bVar1 = true;
						}
						if (!bVar1 && __LIB_3__::func_360(iVar7, PLAYER::PLAYER_ID()))
						{
							bVar1 = true;
						}
					}
					if (bVar1 && bVar0)
					{
					}
					else
					{
						iVar2++;
					}
					if (bVar1)
					{
						__LIB_5__::func_189(iParam1, 1, 1);
					}
					else
					{
						__LIB_5__::func_189(iParam1, 1, 0);
					}
					if (bVar0)
					{
						__LIB_5__::func_189(iParam1, 2, 1);
					}
					else
					{
						__LIB_5__::func_189(iParam1, 2, 0);
					}
					if (((bVar1 || bVar0) && !__LIB_3__::func_779()) && !__LIB_5__::func_241(PLAYER::PLAYER_ID()))
					{
						__LIB_8__::func_963(iParam0, -1);
					}
					if (__LIB_3__::func_661(0, iParam1))
					{
						__LIB_8__::func_963(iParam0, -1);
					}
					else if (__LIB_3__::func_661(1, iParam1))
					{
						if (bVar1)
						{
							__LIB_7__::func_738(1);
							__LIB_7__::func_831(PLAYER::PLAYER_ID(), iParam0, Var6, 1, 0, 0, 0, Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_7, -1, -1);
						}
						func_1714(iParam0, 0);
					}
					else if (__LIB_3__::func_661(2, iParam1))
					{
						if (bVar0)
						{
							__LIB_7__::func_738(1);
							__LIB_7__::func_831(PLAYER::PLAYER_ID(), iParam0, Var6, 0, 0, 1, 0, Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_7, -1, -1);
						}
						func_1714(iParam0, 0);
					}
					Jump @652; //curOff = 633
					__LIB_5__::func_189(iParam1, 1, 0);
					__LIB_5__::func_189(iParam1, 2, 0);
				}
void func_1714(int iParam0, bool bParam1)//Position - 0xABBCE
{
	__LIB_8__::func_963(iParam0, -1);
	Global_1946250.f_504 = -1;
	__LIB_5__::func_947(1, iParam0);
	Global_1946250.f_3607 = 0;
	Global_1946250.f_3612 = 1;
	if (bParam1)
	{
		__LIB_5__::func_457(2);
	}
}

void func_1777(var uParam0, int iParam1)//Position - 0xAE1AB
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 734168/*func_1899*/;
			break;
		case 111:
			uParam0->f_35 = 734159/*func_1898*/;
			break;
		case 1:
			uParam0->f_30 = 734092/*func_1896*/;
			break;
		case 2:
			uParam0->f_31 = 733768/*func_1893*/;
			break;
		case 3:
			uParam0->f_34 = 733607/*func_1892*/;
			break;
		case 4:
			uParam0->f_12 = 733595/*func_1891*/;
			break;
		case 6:
			uParam0->f_32 = 733531/*func_1890*/;
			break;
		case 11:
			uParam0->f_11 = 733522/*func_1889*/;
			break;
		case 12:
			uParam0->f_33 = 733186/*func_1885*/;
			break;
		case 14:
			uParam0->f_11 = 733177/*func_1884*/;
			break;
		case 109:
			uParam0->f_56 = 732447/*func_1882*/;
			break;
		case 8:
			uParam0->f_37 = 732439/*func_1881*/;
			break;
		case 7:
			uParam0->f_36 = 732430/*func_1880*/;
			break;
		case 79:
			*uParam0 = 732421/*func_1879*/;
			break;
		case 72:
			uParam0->f_12 = 732409/*func_1878*/;
			break;
		case 13:
			uParam0->f_2 = 732400/*func_1877*/;
			break;
		case 15:
			uParam0->f_2 = 732321/*func_1876*/;
			break;
		case 16:
			uParam0->f_5 = 731977/*func_1875*/;
			break;
		case 108:
			uParam0->f_55 = 731968/*func_1874*/;
			break;
		case 17:
			uParam0->f_17 = 731460/*func_1872*/;
			break;
		case 19:
			uParam0->f_17 = 731407/*func_1871*/;
			break;
		case 18:
			uParam0->f_8 = 731319/*func_1869*/;
			break;
		case 20:
			uParam0->f_3 = 731299/*func_1868*/;
			break;
		case 21:
			uParam0->f_3 = 731272/*func_1867*/;
			break;
		case 74:
			uParam0->f_53 = 731250/*func_1866*/;
			break;
		case 75:
			uParam0->f_4 = 731241/*func_1865*/;
			break;
		case 22:
			uParam0->f_24 = 731139/*func_1864*/;
			break;
		case 23:
			uParam0->f_26 = 731131/*func_1863*/;
			break;
		case 26:
			uParam0->f_38 = 731123/*func_1862*/;
			break;
		case 25:
			uParam0->f_23 = 730362/*func_1858*/;
			break;
		case 27:
			uParam0->f_25 = 730354/*func_1857*/;
			break;
		case 28:
			uParam0->f_24 = 730346/*func_1856*/;
			break;
		case 30:
			uParam0->f_8 = 730235/*func_1855*/;
			break;
		case 31:
			uParam0->f_39 = 730188/*func_1854*/;
			break;
		case 33:
			uParam0->f_40 = 730119/*func_1853*/;
			break;
		case 76:
			uParam0->f_13 = 730096/*func_1852*/;
			break;
		case 34:
			uParam0->f_41 = 726023/*func_1849*/;
			break;
		case 36:
			uParam0->f_58 = 725966/*func_1848*/;
			break;
		case 35:
			uParam0->f_42 = 719746/*func_1839*/;
			break;
		case 45:
			uParam0->f_14 = 719737/*func_1838*/;
			break;
		case 46:
			uParam0->f_14 = 719728/*func_1837*/;
			break;
		case 110:
			uParam0->f_57 = 719720/*func_1836*/;
			break;
		case 77:
			uParam0->f_13 = 719709/*func_1835*/;
			break;
		case 47:
			uParam0->f_43 = 719605/*func_1834*/;
			break;
		case 48:
			uParam0->f_60 = 1;
			uParam0->f_44 = 718538/*func_1826*/;
			break;
		case 49:
			uParam0->f_8 = 718529/*func_1825*/;
			break;
		case 50:
			*uParam0 = 718162/*func_1819*/;
			break;
		case 51:
			*uParam0 = 718153/*func_1818*/;
			break;
		case 52:
			uParam0->f_15 = 718143/*func_1817*/;
			break;
		case 53:
			uParam0->f_13 = 718120/*func_1816*/;
			break;
		case 54:
			uParam0->f_45 = 717626/*func_1814*/;
			break;
		case 56:
			uParam0->f_46 = 717617/*func_1813*/;
			break;
		case 57:
			uParam0->f_11 = 717608/*func_1812*/;
			break;
		case 58:
			uParam0->f_13 = 717566/*func_1811*/;
			break;
		case 59:
			*uParam0 = 717557/*func_1810*/;
			break;
		case 60:
			*uParam0 = 717548/*func_1809*/;
			break;
		case 61:
			uParam0->f_15 = 717537/*func_1808*/;
			break;
		case 62:
			uParam0->f_13 = 717526/*func_1807*/;
			break;
		case 63:
			uParam0->f_11 = 717517/*func_1806*/;
			break;
		case 64:
			uParam0->f_47 = 717509/*func_1805*/;
			break;
		case 65:
			uParam0->f_21 = 717501/*func_1804*/;
			break;
		case 66:
			uParam0->f_21 = 717191/*func_1803*/;
			break;
		case 67:
			uParam0->f_21 = 717121/*func_1802*/;
			break;
		case 68:
			*uParam0 = 716432/*func_1801*/;
			break;
		case 69:
			*uParam0 = 716423/*func_1800*/;
			break;
		case 70:
			uParam0->f_48 = 716411/*func_1799*/;
			break;
		case 71:
			uParam0->f_49 = 716402/*func_1798*/;
			break;
		case 107:
			uParam0->f_50 = 716390/*func_1797*/;
			break;
		case 80:
			uParam0->f_7 = 716381/*func_1796*/;
			break;
		case 84:
			uParam0->f_1 = 716372/*func_1795*/;
			break;
		case 85:
			uParam0->f_1 = 716363/*func_1794*/;
			break;
		case 87:
			uParam0->f_1 = 716354/*func_1793*/;
			break;
		case 88:
			uParam0->f_1 = 716345/*func_1792*/;
			break;
		case 89:
			uParam0->f_54 = 716337/*func_1791*/;
			break;
		case 96:
			uParam0->f_1 = 716312/*func_1790*/;
			break;
		case 97:
			uParam0->f_1 = 716203/*func_1789*/;
			break;
		case 98:
			uParam0->f_1 = 715492/*func_1788*/;
			break;
		case 100:
			uParam0->f_22 = 714829/*func_1786*/;
			break;
		case 101:
			uParam0->f_22 = 714702/*func_1785*/;
			break;
		case 112:
			uParam0->f_13 = 714690/*func_1784*/;
			break;
		case 113:
			uParam0->f_3 = 714681/*func_1783*/;
			break;
		case 114:
			uParam0->f_16 = 328362/*func_843*/;
			break;
		case 115:
			uParam0->f_3 = 714672/*func_1782*/;
			break;
		case 116:
			*uParam0 = 714663/*func_1781*/;
			break;
		case 117:
			uParam0->f_16 = 382391/*func_1047*/;
			break;
		case 78:
			uParam0->f_59 = 714655/*func_1780*/;
			break;
		case 124:
			uParam0->f_1 = 714646/*func_1779*/;
			break;
		case 125:
			uParam0->f_19 = 714638/*func_1778*/;
			break;
	}
}

int func_1788(var uParam0, var uParam1)//Position - 0xAEAE4
{
	struct<3> Var0;
	struct<3> Var1;
	char* sVar2;
	int iVar3;
	Var0 = { 1569.249f, 248.978f, -46.378f };
	Var1 = { 0f, 0f, 146.98f };
	sVar2 = "mini@strip_club@throwout_d@";
	if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_140[0]))
	{
		uParam1->f_140[0] = PED::CREATE_PED(4, joaat("S_M_Y_ClubBar_01"), Var0 + Vector(-10f, 0f, 0f), 0f, false, true);
		PED::SET_PED_DEFAULT_COMPONENT_VARIATION(uParam1->f_140[0]);
		ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_140[0], true);
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_140[1]))
	{
		uParam1->f_140[1] = PED::CREATE_PED(4, joaat("S_M_M_Bouncer_01"), Var0 + Vector(-10f, 0f, 0f), 0f, false, true);
		PED::SET_PED_DEFAULT_COMPONENT_VARIATION(uParam1->f_140[1]);
		PED::SET_PED_COMPONENT_VARIATION(uParam1->f_140[1], 0, 0, 2, 0);
		PED::SET_PED_COMPONENT_VARIATION(uParam1->f_140[1], 2, 1, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(uParam1->f_140[1], 3, 1, 1, 0);
		PED::SET_PED_COMPONENT_VARIATION(uParam1->f_140[1], 4, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(uParam1->f_140[1], 11, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(uParam1->f_140[1], 8, 1, 0, 0);
		ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_140[1], true);
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_140[2]))
	{
		func_1403(&(uParam1->f_140[2]), PLAYER::PLAYER_ID(), 1, 0);
		ENTITY::SET_ENTITY_COORDS(uParam1->f_140[2], Var0 + Vector(-10f, 0f, 0f), false, false, false, true);
		ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_140[2], true);
		return 0;
	}
	iVar3 = 0;
	while (iVar3 < 3)
	{
		if (__LIB_0__::func_121(uParam1->f_140[iVar3]))
		{
			if (!PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(uParam1->f_140[iVar3]))
			{
				return 0;
			}
		}
		iVar3++;
	}
	MISC::SET_BIT(&(Global_1946250.f_2), 20);
	Var0 = { Var0 + Vector(0f, 4f, 0f) };
	__LIB_3__::func_900(&(Global_1946250.f_4073), 5000, "Club Tout", Var0, Var1, sVar2, "throwout_d_cam", 0, 0, 0, 0, 2);
	NETWORK::SET_ENTITY_VISIBLE_IN_CUTSCENE(PLAYER::PLAYER_PED_ID(), true, true);
	__LIB_1__::func_376(PLAYER::PLAYER_ID(), 0, 262144, 0);
	uParam1->f_27 = PED::CREATE_SYNCHRONIZED_SCENE(Var0, Var1, 2);
	if (__LIB_0__::func_121(uParam1->f_140[0]))
	{
		ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_140[0], false);
		TASK::TASK_SYNCHRONIZED_SCENE(uParam1->f_140[0], uParam1->f_27, sVar2, "throwout_d_bouncer_a", 1000f, -2f, 0, 0, 1000f, 0);
	}
	if (__LIB_0__::func_121(uParam1->f_140[1]))
	{
		ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_140[1], false);
		TASK::TASK_SYNCHRONIZED_SCENE(uParam1->f_140[1], uParam1->f_27, sVar2, "throwout_d_bouncer_b", 1000f, -2f, 0, 0, 1000f, 0);
	}
	if (__LIB_0__::func_121(uParam1->f_140[2]))
	{
		ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_140[2], false);
		TASK::TASK_SYNCHRONIZED_SCENE(uParam1->f_140[2], uParam1->f_27, sVar2, "throwout_d_victim", 1000f, -2f, 0, 0, 1000f, 0);
	}
	return 1;
}

void func_1858(int iParam0, int iParam1)//Position - 0xB24FA
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5[10];
	struct<3> Var6;
	int iVar7;
	struct<13> Var8;
	iVar4 = -1;
	if (__LIB_5__::func_251(PLAYER::PLAYER_ID(), iParam0))
	{
		if (__LIB_1__::func_526())
		{
			iVar4 = __LIB_3__::func_680();
		}
		Var6 = { __LIB_3__::func_995(iParam0) };
		iVar3 = PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uVar5, -1);
		if (iVar3 > 0)
		{
			iVar2 = 0;
			while (iVar2 < iVar3)
			{
				if (!ENTITY::IS_ENTITY_DEAD(uVar5[iVar2], false) && PED::IS_PED_A_PLAYER(uVar5[iVar2]))
				{
					if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(uVar5[iVar2], true), Var6) <= IntToFloat(__LIB_3__::func_679(iParam0)))
					{
						iVar7 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(uVar5[iVar2]);
						Var8 = { __LIB_1__::func_696(iVar7) };
						if (!bVar0)
						{
							if ((iVar4 != -1 && iVar4 == __LIB_3__::func_106(&Var8)) || NETWORK::NETWORK_IS_FRIEND(&Var8))
							{
								if (((((!__LIB_1__::func_907(iVar7, 1) && !__LIB_5__::func_424(iVar7)) && !PED::IS_PED_IN_ANY_VEHICLE(uVar5[iVar2], true)) && !__LIB_1__::func_101(PLAYER::PLAYER_PED_ID())) && !__LIB_3__::func_728(iVar7, 14)) && !func_558(iVar7))
								{
									bVar0 = true;
								}
							}
						}
						if ((((((!bVar1 && __LIB_3__::func_360(PLAYER::PLAYER_ID(), iVar7)) && !__LIB_5__::func_424(iVar7)) && !PED::IS_PED_IN_ANY_VEHICLE(uVar5[iVar2], true)) && !__LIB_1__::func_101(PLAYER::PLAYER_PED_ID())) && !__LIB_3__::func_728(iVar7, 14)) && !func_558(iVar7))
						{
							bVar1 = true;
						}
					}
					if (bVar1 && bVar0)
					{
					}
					else
					{
						iVar2++;
					}
					if (bVar1)
					{
						__LIB_5__::func_189(iParam1, 1, 1);
					}
					else
					{
						__LIB_5__::func_189(iParam1, 1, 0);
					}
					if (bVar0)
					{
						__LIB_5__::func_189(iParam1, 2, 1);
					}
					else
					{
						__LIB_5__::func_189(iParam1, 2, 0);
					}
					if (__LIB_3__::func_661(0, iParam1))
					{
						__LIB_6__::func_880(iParam0, -1);
						MISC::SET_BIT(&(iParam1->f_2), 5);
					}
					else if (__LIB_3__::func_661(1, iParam1))
					{
						if (bVar1)
						{
							__LIB_7__::func_831(PLAYER::PLAYER_ID(), iParam0, 0f, 0f, 0f, 1, 0, 0, 0, -1, -1, -1);
						}
						__LIB_7__::func_792(iParam0);
						MISC::SET_BIT(&(iParam1->f_2), 5);
					}
					else if (__LIB_3__::func_661(2, iParam1))
					{
						if (bVar0)
						{
							__LIB_7__::func_831(PLAYER::PLAYER_ID(), iParam0, 0f, 0f, 0f, 0, 0, 1, 0, -1, -1, -1);
						}
						__LIB_7__::func_792(iParam0);
						MISC::SET_BIT(&(iParam1->f_2), 5);
					}
					else if ((!bVar1 && !bVar0) && !func_1859())
					{
						MISC::SET_BIT(&(iParam1->f_2), 5);
						MISC::SET_BIT(&(iParam1->f_2), 6);
					}
					Jump @651; //curOff = 632
					__LIB_5__::func_189(iParam1, 1, 0);
					__LIB_5__::func_189(iParam1, 2, 0);
				}
bool func_1859()//Position - 0xB2788
{
	return BitTest(Global_1946250.f_3, 2);
}

void func_1900(var uParam0, int iParam1)//Position - 0xB33E1
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 742470/*func_1993*/;
			break;
		case 111:
			uParam0->f_35 = 742461/*func_1992*/;
			break;
		case 1:
			uParam0->f_30 = 742390/*func_1990*/;
			break;
		case 2:
			uParam0->f_31 = 742154/*func_1987*/;
			break;
		case 3:
			uParam0->f_34 = 742103/*func_1986*/;
			break;
		case 4:
			uParam0->f_12 = 742091/*func_1985*/;
			break;
		case 6:
			uParam0->f_32 = 742027/*func_1984*/;
			break;
		case 11:
			uParam0->f_11 = 742018/*func_1983*/;
			break;
		case 12:
			uParam0->f_33 = 741578/*func_1979*/;
			break;
		case 14:
			uParam0->f_11 = 741569/*func_1978*/;
			break;
		case 109:
			uParam0->f_56 = 740901/*func_1976*/;
			break;
		case 8:
			uParam0->f_37 = 740893/*func_1975*/;
			break;
		case 7:
			uParam0->f_36 = 740884/*func_1974*/;
			break;
		case 79:
			*uParam0 = 740875/*func_1973*/;
			break;
		case 13:
			uParam0->f_2 = 740813/*func_1972*/;
			break;
		case 15:
			uParam0->f_2 = 740733/*func_1971*/;
			break;
		case 16:
			uParam0->f_5 = 740364/*func_1969*/;
			break;
		case 108:
			uParam0->f_55 = 740355/*func_1968*/;
			break;
		case 17:
			uParam0->f_17 = 740344/*func_1967*/;
			break;
		case 19:
			uParam0->f_17 = 740333/*func_1966*/;
			break;
		case 20:
			uParam0->f_3 = 740324/*func_1965*/;
			break;
		case 21:
			uParam0->f_3 = 740315/*func_1964*/;
			break;
		case 74:
			uParam0->f_53 = 740293/*func_1963*/;
			break;
		case 75:
			uParam0->f_4 = 740284/*func_1962*/;
			break;
		case 22:
			uParam0->f_24 = 740272/*func_1961*/;
			break;
		case 23:
			uParam0->f_26 = 740264/*func_1960*/;
			break;
		case 26:
			uParam0->f_38 = 740256/*func_1959*/;
			break;
		case 25:
			uParam0->f_23 = 740248/*func_1958*/;
			break;
		case 27:
			uParam0->f_25 = 740240/*func_1957*/;
			break;
		case 28:
			uParam0->f_24 = 740232/*func_1956*/;
			break;
		case 30:
			uParam0->f_8 = 740197/*func_1955*/;
			break;
		case 31:
			uParam0->f_39 = 740169/*func_1954*/;
			break;
		case 33:
			uParam0->f_40 = 740099/*func_1953*/;
			break;
		case 76:
			uParam0->f_13 = 740076/*func_1952*/;
			break;
		case 34:
			uParam0->f_41 = 739980/*func_1951*/;
			break;
		case 36:
			uParam0->f_58 = 739935/*func_1950*/;
			break;
		case 35:
			uParam0->f_42 = 737422/*func_1948*/;
			break;
		case 45:
			uParam0->f_14 = 737413/*func_1947*/;
			break;
		case 46:
			uParam0->f_14 = 737404/*func_1946*/;
			break;
		case 110:
			uParam0->f_57 = 737396/*func_1945*/;
			break;
		case 77:
			uParam0->f_13 = 737385/*func_1944*/;
			break;
		case 47:
			uParam0->f_43 = 737345/*func_1943*/;
			break;
		case 48:
			uParam0->f_60 = 1;
			uParam0->f_44 = 737236/*func_1942*/;
			break;
		case 49:
			uParam0->f_8 = 737227/*func_1941*/;
			break;
		case 50:
			*uParam0 = 737024/*func_1940*/;
			break;
		case 51:
			*uParam0 = 737015/*func_1939*/;
			break;
		case 52:
			uParam0->f_15 = 737004/*func_1938*/;
			break;
		case 53:
			uParam0->f_13 = 736981/*func_1937*/;
			break;
		case 54:
			uParam0->f_45 = 736973/*func_1936*/;
			break;
		case 56:
			uParam0->f_46 = 736964/*func_1935*/;
			break;
		case 57:
			uParam0->f_11 = 736951/*func_1934*/;
			break;
		case 58:
			uParam0->f_13 = 736909/*func_1933*/;
			break;
		case 59:
			*uParam0 = 736900/*func_1932*/;
			break;
		case 60:
			*uParam0 = 736891/*func_1931*/;
			break;
		case 61:
			uParam0->f_15 = 736880/*func_1930*/;
			break;
		case 62:
			uParam0->f_13 = 736869/*func_1929*/;
			break;
		case 63:
			uParam0->f_11 = 736860/*func_1928*/;
			break;
		case 64:
			uParam0->f_47 = 736852/*func_1927*/;
			break;
		case 65:
			uParam0->f_21 = 736844/*func_1926*/;
			break;
		case 66:
			uParam0->f_21 = 736611/*func_1925*/;
			break;
		case 67:
			uParam0->f_21 = 736541/*func_1924*/;
			break;
		case 68:
			*uParam0 = 735852/*func_1923*/;
			break;
		case 69:
			*uParam0 = 735843/*func_1922*/;
			break;
		case 70:
			uParam0->f_48 = 735831/*func_1921*/;
			break;
		case 71:
			uParam0->f_49 = 735822/*func_1920*/;
			break;
		case 107:
			uParam0->f_50 = 735810/*func_1919*/;
			break;
		case 80:
			uParam0->f_7 = 735801/*func_1918*/;
			break;
		case 84:
			uParam0->f_1 = 735792/*func_1917*/;
			break;
		case 85:
			uParam0->f_1 = 735783/*func_1916*/;
			break;
		case 87:
			uParam0->f_1 = 735774/*func_1915*/;
			break;
		case 88:
			uParam0->f_1 = 735765/*func_1914*/;
			break;
		case 89:
			uParam0->f_54 = 735757/*func_1913*/;
			break;
		case 96:
			uParam0->f_1 = 735748/*func_1912*/;
			break;
		case 97:
			uParam0->f_1 = 735739/*func_1911*/;
			break;
		case 98:
			uParam0->f_1 = 735730/*func_1910*/;
			break;
		case 100:
			uParam0->f_22 = 735722/*func_1909*/;
			break;
		case 101:
			uParam0->f_22 = 735714/*func_1908*/;
			break;
		case 112:
			uParam0->f_13 = 735702/*func_1907*/;
			break;
		case 113:
			uParam0->f_3 = 735693/*func_1906*/;
			break;
		case 114:
			uParam0->f_16 = 328362/*func_843*/;
			break;
		case 115:
			uParam0->f_3 = 735684/*func_1905*/;
			break;
		case 116:
			*uParam0 = 735675/*func_1904*/;
			break;
		case 117:
			uParam0->f_16 = 382391/*func_1047*/;
			break;
		case 78:
			uParam0->f_59 = 735667/*func_1903*/;
			break;
		case 124:
			uParam0->f_1 = 735658/*func_1902*/;
			break;
		case 125:
			uParam0->f_19 = 735650/*func_1901*/;
			break;
	}
}

void func_1994(var uParam0, int iParam1)//Position - 0xB544F
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 821372/*func_2248*/;
			break;
		case 111:
			uParam0->f_35 = 821358/*func_2247*/;
			break;
		case 1:
			uParam0->f_30 = 821202/*func_2245*/;
			break;
		case 2:
			uParam0->f_31 = 820726/*func_2241*/;
			break;
		case 3:
			uParam0->f_34 = 820527/*func_2240*/;
			break;
		case 4:
			uParam0->f_12 = 820405/*func_2239*/;
			break;
		case 5:
			uParam0->f_11 = 820395/*func_2238*/;
			break;
		case 37:
			uParam0->f_18 = 820258/*func_2237*/;
			break;
		case 38:
			uParam0->f_9 = 820214/*func_2236*/;
			break;
		case 42:
			uParam0->f_10 = 820130/*func_2234*/;
			break;
		case 6:
			uParam0->f_32 = 820036/*func_2233*/;
			break;
		case 11:
			uParam0->f_11 = 820027/*func_2232*/;
			break;
		case 12:
			uParam0->f_33 = 818847/*func_2228*/;
			break;
		case 14:
			uParam0->f_11 = 818838/*func_2227*/;
			break;
		case 109:
			uParam0->f_56 = 812376/*func_2225*/;
			break;
		case 8:
			uParam0->f_37 = 812076/*func_2224*/;
			break;
		case 7:
			uParam0->f_36 = 812019/*func_2223*/;
			break;
		case 79:
			*uParam0 = 811775/*func_2221*/;
			break;
		case 13:
			uParam0->f_2 = 811713/*func_2220*/;
			break;
		case 15:
			uParam0->f_2 = 811633/*func_2219*/;
			break;
		case 16:
			uParam0->f_5 = 810913/*func_2217*/;
			break;
		case 108:
			uParam0->f_55 = 807722/*func_2205*/;
			break;
		case 17:
			uParam0->f_17 = 805417/*func_2201*/;
			break;
		case 19:
			uParam0->f_17 = 805391/*func_2200*/;
			break;
		case 20:
			uParam0->f_3 = 805215/*func_2199*/;
			break;
		case 21:
			uParam0->f_3 = 805151/*func_2198*/;
			break;
		case 74:
			uParam0->f_53 = 805047/*func_2197*/;
			break;
		case 75:
			uParam0->f_4 = 805031/*func_2196*/;
			break;
		case 22:
			uParam0->f_24 = 804928/*func_2195*/;
			break;
		case 23:
			uParam0->f_26 = 804881/*func_2194*/;
			break;
		case 24:
			uParam0->f_26 = 804844/*func_2193*/;
			break;
		case 26:
			uParam0->f_38 = 802799/*func_2181*/;
			break;
		case 25:
			uParam0->f_23 = 802477/*func_2179*/;
			break;
		case 30:
			uParam0->f_8 = 801620/*func_2177*/;
			break;
		case 31:
			uParam0->f_39 = 801486/*func_2176*/;
			break;
		case 33:
			uParam0->f_40 = 800914/*func_2175*/;
			break;
		case 32:
			*uParam0 = 800629/*func_2170*/;
			break;
		case 34:
			uParam0->f_41 = 798143/*func_2168*/;
			break;
		case 36:
			uParam0->f_58 = 798086/*func_2167*/;
			break;
		case 35:
			uParam0->f_42 = 771121/*func_2164*/;
			break;
		case 45:
			uParam0->f_14 = 771112/*func_2163*/;
			break;
		case 46:
			uParam0->f_14 = 771103/*func_2162*/;
			break;
		case 110:
			uParam0->f_57 = 771095/*func_2161*/;
			break;
		case 77:
			uParam0->f_13 = 771072/*func_2160*/;
			break;
		case 47:
			uParam0->f_43 = 771000/*func_2158*/;
			break;
		case 48:
			uParam0->f_60 = 1;
			uParam0->f_44 = 770872/*func_2157*/;
			break;
		case 49:
			uParam0->f_8 = 770846/*func_2156*/;
			break;
		case 50:
			*uParam0 = 770159/*func_2152*/;
			break;
		case 51:
			*uParam0 = 769887/*func_2149*/;
			break;
		case 52:
			uParam0->f_15 = 769876/*func_2148*/;
			break;
		case 53:
			uParam0->f_13 = 769714/*func_2147*/;
			break;
		case 54:
			uParam0->f_45 = 769257/*func_2142*/;
			break;
		case 56:
			uParam0->f_46 = 769239/*func_2141*/;
			break;
		case 57:
			uParam0->f_11 = 768987/*func_2140*/;
			break;
		case 58:
			uParam0->f_13 = 768825/*func_2139*/;
			break;
		case 59:
			*uParam0 = 768329/*func_2132*/;
			break;
		case 60:
			*uParam0 = 768314/*func_2131*/;
			break;
		case 61:
			uParam0->f_15 = 768303/*func_2130*/;
			break;
		case 62:
			uParam0->f_13 = 768141/*func_2129*/;
			break;
		case 55:
			uParam0->f_45 = 767962/*func_2128*/;
			break;
		case 63:
			uParam0->f_11 = 767935/*func_2127*/;
			break;
		case 64:
			uParam0->f_47 = 766400/*func_2119*/;
			break;
		case 65:
			uParam0->f_21 = 765013/*func_2116*/;
			break;
		case 66:
			uParam0->f_21 = 764654/*func_2115*/;
			break;
		case 67:
			uParam0->f_21 = 764540/*func_2114*/;
			break;
		case 68:
			*uParam0 = 763580/*func_2111*/;
			break;
		case 69:
			*uParam0 = 763571/*func_2110*/;
			break;
		case 70:
			uParam0->f_48 = 763559/*func_2109*/;
			break;
		case 71:
			uParam0->f_49 = 763015/*func_2108*/;
			break;
		case 107:
			uParam0->f_50 = 763003/*func_2107*/;
			break;
		case 80:
			uParam0->f_7 = 762815/*func_2106*/;
			break;
		case 84:
			uParam0->f_1 = 762806/*func_2105*/;
			break;
		case 85:
			uParam0->f_1 = 761220/*func_2102*/;
			break;
		case 87:
			uParam0->f_1 = 759704/*func_2095*/;
			break;
		case 88:
			uParam0->f_1 = 759695/*func_2094*/;
			break;
		case 89:
			uParam0->f_54 = 759687/*func_2093*/;
			break;
		case 96:
			uParam0->f_1 = 759657/*func_2092*/;
			break;
		case 97:
			uParam0->f_1 = 759212/*func_2091*/;
			break;
		case 98:
			uParam0->f_1 = 753526/*func_2033*/;
			break;
		case 100:
			uParam0->f_22 = 745124/*func_2008*/;
			break;
		case 101:
			uParam0->f_22 = 744202/*func_2002*/;
			break;
		case 112:
			uParam0->f_13 = 744191/*func_2001*/;
			break;
		case 113:
			uParam0->f_3 = 744182/*func_2000*/;
			break;
		case 114:
			uParam0->f_16 = 744173/*func_1999*/;
			break;
		case 117:
			uParam0->f_16 = 744164/*func_1998*/;
			break;
		case 78:
			uParam0->f_59 = 743992/*func_1996*/;
			break;
		case 76:
			uParam0->f_13 = 743969/*func_1995*/;
			break;
	}
}

int func_2102(int iParam0, var uParam1)//Position - 0xB9D84
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	struct<3> Var5;
	struct<3> Var6;
	struct<3> Var7;
	struct<3> Var8;
	var uVar9;
	var uVar10;
	var uVar11;
	var uVar12;
	bool bVar13;
	bool bVar14;
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
		}
		if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_109))
		{
			func_408(&iVar0, &(uParam1->f_109), 60);
			__LIB_3__::func_633(&(uParam1->f_109));
			VEHICLE::SET_DISABLE_MAP_COLLISION(uParam1->f_109);
			return 0;
		}
		else if (func_324(&iVar0, &(uParam1->f_109), &(uParam1->f_109.f_1), 1, 1, 0, 1, 0, 1))
		{
			VEHICLE::SET_DISABLE_MAP_COLLISION(uParam1->f_109);
		}
		else
		{
			return 0;
		}
		MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(uParam1->f_109), &(uParam1->f_189[0 /*3*/]), &(uParam1->f_189[1 /*3*/]));
		__LIB_4__::func_61(iParam0, &Var1, &Var3, &uVar9, 1);
		__LIB_4__::func_61(iParam0, &Var2, &Var4, &uVar10, 0);
		__LIB_4__::func_60(iParam0, &Var5, &Var7, &uVar11, 1);
		__LIB_4__::func_60(iParam0, &Var6, &Var8, &uVar12, 0);
		bVar13 = VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(iVar0));
		bVar14 = !(uParam1->f_189[1 /*3*/].f_1 - uParam1->f_189[0 /*3*/].f_1) > 7f;
		if (bVar13)
		{
			MISC::SET_BIT(&(uParam1->f_188), 1);
		}
		else
		{
			MISC::CLEAR_BIT(&(uParam1->f_188), 1);
		}
		__LIB_6__::func_820(&(Global_1946250.f_3638), Var1, Var3, uVar9, Var2, Var4, uVar10, bVar13, Var5, Var7, uVar11, Var6, Var8, uVar12, bVar14, 1056964608, 1036831949);
	}
	return 1;
}

void func_2142(int iParam0, var uParam1, int* iParam2, var uParam3, var uParam4)//Position - 0xBBCE9
{
	bool bVar0;
	int iVar1;
	int iVar2;
	struct<13> Var3;
	int iVar4;
	struct<3> Var5;
	int iVar6;
	bVar0 = false;
	if (!__LIB_4__::func_70(PLAYER::PLAYER_ID(), __LIB_4__::func_71(iParam0)) && !__LIB_4__::func_70(__LIB_0__::func_797(), __LIB_4__::func_71(iParam0)))
	{
		iVar2 = 0;
		while (iVar2 < 32)
		{
			iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar2);
			if (__LIB_1__::func_693(iVar1, 1, 1) && iVar1 != PLAYER::PLAYER_ID())
			{
				if (__LIB_4__::func_70(iVar1, __LIB_4__::func_71(iParam0)) && __LIB_5__::func_773(iVar1))
				{
					Var3 = { __LIB_1__::func_696(iVar1) };
					if (__LIB_0__::func_800(Var3))
					{
						if (NETWORK::NETWORK_IS_FRIEND(&Var3))
						{
							iVar4 = joaat("ARC_FRIEND");
							if (iVar4 != *uParam4)
							{
								*uParam4 = iVar4;
								HUD::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam1, "ARC_FRIEND" /* GXT: Friend's Arcade */);
							}
							bVar0 = true;
						}
						else
						{
							iVar2++;
						}
						if (!bVar0 && *uParam4 == joaat("ARC_FRIEND"))
						{
							*uParam4 = joaat("BLIP_740");
							HUD::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam1, "BLIP_740" /* GXT: Arcade */);
						}
						if (HUD::DOES_BLIP_EXIST(*uParam1) && __LIB_5__::func_781(iParam0))
						{
							if (!HUD::DOES_BLIP_EXIST(*iParam2))
							{
								Var5 = { __LIB_4__::func_75(iParam0) };
								iVar6 = __LIB_4__::func_74(iParam0);
								*iParam2 = __LIB_0__::func_488(Var5, 0);
								HUD::SET_BLIP_SPRITE(*iParam2, iVar6);
								HUD::SET_BLIP_SCALE(*iParam2, 1f);
								HUD::SET_BLIP_PRIORITY(*iParam2, 7);
								func_2143(iParam2, 18);
								HUD::SET_BLIP_AS_SHORT_RANGE(*iParam2, false);
								HUD::SET_BLIP_NAME_FROM_TEXT_FILE(*iParam2, "BASE_HEIST_BLIP" /* GXT: The Doomsday Heist */);
								HUD::SET_BLIP_HIDDEN_ON_LEGEND(*iParam2, true);
							}
						}
						else if (HUD::DOES_BLIP_EXIST(*iParam2))
						{
							HUD::REMOVE_BLIP(iParam2);
						}
					}
void func_2143(var uParam0, int iParam1)//Position - 0xBBE62
{
	int iVar0;
	if (HUD::DOES_BLIP_EXIST(*uParam0))
	{
		iVar0 = __LIB_1__::func_389(iParam1);
		HUD::SET_BLIP_COLOUR(*uParam0, iVar0);
	}
}

void func_2179(int iParam0, int iParam1)//Position - 0xC3EAD
{
	bool bVar0;
	bool bVar1;
	struct<3> Var2;
	Var2 = { __LIB_4__::func_67(iParam0, 0) };
	if (__LIB_6__::func_885(PLAYER::PLAYER_ID(), iParam0))
	{
		if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
		{
			Var2 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		}
		func_557(iParam0, Var2, &bVar0, &bVar1, 1, 0);
		if (bVar1)
		{
			__LIB_5__::func_189(iParam1, 1, 1);
		}
		else
		{
			__LIB_5__::func_189(iParam1, 1, 0);
		}
		if (bVar0)
		{
			__LIB_5__::func_189(iParam1, 2, 1);
		}
		else
		{
			__LIB_5__::func_189(iParam1, 2, 0);
		}
		if ((bVar1 || bVar0) && !__LIB_3__::func_779())
		{
			__LIB_6__::func_884(iParam0, -1);
		}
		if (__LIB_3__::func_661(0, iParam1))
		{
			__LIB_6__::func_884(iParam0, -1);
		}
		else if (__LIB_3__::func_661(1, iParam1))
		{
			if (bVar1)
			{
				__LIB_7__::func_831(PLAYER::PLAYER_ID(), iParam0, Var2, 1, 0, 0, 0, -1, -1, -1);
			}
			__LIB_7__::func_793(iParam0);
		}
		else if (__LIB_3__::func_661(2, iParam1))
		{
			if (bVar0)
			{
				__LIB_7__::func_831(PLAYER::PLAYER_ID(), iParam0, Var2, 0, 0, 1, 0, -1, -1, -1);
			}
			__LIB_7__::func_793(iParam0);
		}
	}
	else
	{
		__LIB_5__::func_189(iParam1, 1, 0);
		__LIB_5__::func_189(iParam1, 2, 0);
	}
}

void func_2181(var uParam0, var uParam1)//Position - 0xC3FEF
{
	if (__LIB_3__::func_616() == 3)
	{
		func_2185(uParam0, uParam1);
	}
	else if (__LIB_2__::func_72(PLAYER::PLAYER_ID(), 0) && __LIB_4__::func_70(__LIB_2__::func_39(PLAYER::PLAYER_ID()), __LIB_4__::func_71(*uParam0)))
	{
		__LIB_5__::func_258(uParam0, uParam1);
	}
	else if (__LIB_3__::func_616() == 2)
	{
		func_2183(uParam0, uParam1);
	}
	else
	{
		__LIB_4__::func_87(uParam1);
	}
}

void func_2183(var uParam0, var uParam1)//Position - 0xC407A
{
	int iVar0;
	int iVar1;
	bool bVar2;
	HUD::HIDE_HELP_TEXT_THIS_FRAME();
	func_557(*uParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &iVar0, &iVar1, 1, 0);
	bVar2 = (iVar0 || iVar1);
	if (!bVar2)
	{
		uParam1->f_8 = 1;
		uParam1->f_1 = 1;
		uParam1->f_6 = 1;
		uParam1->f_9 = 1;
		*uParam1 = 1;
		uParam1->f_11 = 10;
		MISC::SET_BIT(&(Global_1946250.f_3), 9);
		__LIB_5__::func_462();
		return;
	}
	if (uParam0->f_3 && !uParam0->f_5)
	{
		uParam1->f_4 = 1;
		__LIB_5__::func_462();
	}
	else
	{
		uParam1->f_2 = 1;
		if (uParam0->f_5)
		{
			uParam1->f_3 = 1;
		}
		else if (uParam0->f_2)
		{
			uParam1->f_1 = 1;
			uParam1->f_5 = 1;
			MISC::SET_BIT(&(Global_1946250.f_3), 9);
			__LIB_6__::func_884(*uParam0, -1);
			__LIB_5__::func_462();
		}
	}
}

void func_2185(var uParam0, var uParam1)//Position - 0xC4198
{
	int iVar0;
	iVar0 = __LIB_3__::func_785();
	switch (iVar0)
	{
		case 0:
			__LIB_10__::func_53(uParam0, uParam1);
			break;
		case 1:
			func_2190(uParam0, uParam1);
			break;
		case 2:
			__LIB_10__::func_751(uParam0, uParam1);
			break;
		default:
			break;
	}
}

void func_2190(var uParam0, var uParam1)//Position - 0xC4519
{
	int iVar0;
	int iVar1;
	bool bVar2;
	HUD::HIDE_HELP_TEXT_THIS_FRAME();
	func_557(*uParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &iVar0, &iVar1, 1, 0);
	bVar2 = (iVar0 || iVar1);
	if (!bVar2)
	{
		uParam1->f_8 = 1;
		uParam1->f_6 = 1;
		uParam1->f_1 = 1;
		uParam1->f_9 = 1;
		*uParam1 = 1;
		uParam1->f_11 = 10;
		MISC::SET_BIT(&(Global_1946250.f_3), 9);
		__LIB_5__::func_462();
		return;
	}
	if (uParam0->f_3 && !uParam0->f_5)
	{
		__LIB_5__::func_462();
		if (__LIB_8__::func_926(*uParam0))
		{
			*uParam1 = 1;
		}
		else
		{
			uParam1->f_4 = 1;
		}
	}
	else
	{
		uParam1->f_2 = 1;
		if (uParam0->f_5)
		{
			uParam1->f_3 = 1;
			if (__LIB_3__::func_616() == 3)
			{
				__LIB_1__::func_767("CLUB_TITLE" /* GXT: NIGHTCLUB */);
			}
			else
			{
				__LIB_1__::func_767("HUB_TITLE_2" /* GXT: NIGHTCLUB GARAGE */);
			}
		}
		else if (uParam0->f_2)
		{
			uParam1->f_5 = 1;
			uParam1->f_1 = 1;
			MISC::SET_BIT(&(Global_1946250.f_3), 9);
			__LIB_6__::func_884(*uParam0, -1);
			__LIB_5__::func_462();
		}
	}
}

void func_2249(var uParam0, int iParam1)//Position - 0xC8885
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 837559/*func_2357*/;
			break;
		case 111:
			uParam0->f_35 = 837550/*func_2356*/;
			break;
		case 1:
			uParam0->f_30 = 837482/*func_2354*/;
			break;
		case 2:
			uParam0->f_31 = 837036/*func_2351*/;
			break;
		case 3:
			uParam0->f_34 = 836931/*func_2350*/;
			break;
		case 4:
			uParam0->f_12 = 836918/*func_2349*/;
			break;
		case 6:
			uParam0->f_32 = 836854/*func_2348*/;
			break;
		case 11:
			uParam0->f_11 = 836845/*func_2347*/;
			break;
		case 12:
			uParam0->f_33 = 836384/*func_2342*/;
			break;
		case 14:
			uParam0->f_11 = 836375/*func_2341*/;
			break;
		case 109:
			uParam0->f_56 = 835988/*func_2339*/;
			break;
		case 8:
			uParam0->f_37 = 835980/*func_2338*/;
			break;
		case 7:
			uParam0->f_36 = 835971/*func_2337*/;
			break;
		case 79:
			*uParam0 = 835947/*func_2336*/;
			break;
		case 13:
			uParam0->f_2 = 835885/*func_2335*/;
			break;
		case 15:
			uParam0->f_2 = 835806/*func_2334*/;
			break;
		case 16:
			uParam0->f_5 = 835509/*func_2333*/;
			break;
		case 108:
			uParam0->f_55 = 835500/*func_2332*/;
			break;
		case 17:
			uParam0->f_17 = 835489/*func_2331*/;
			break;
		case 19:
			uParam0->f_17 = 835463/*func_2330*/;
			break;
		case 20:
			uParam0->f_3 = 835454/*func_2329*/;
			break;
		case 21:
			uParam0->f_3 = 835445/*func_2328*/;
			break;
		case 74:
			uParam0->f_53 = 835423/*func_2327*/;
			break;
		case 75:
			uParam0->f_4 = 835414/*func_2326*/;
			break;
		case 22:
			uParam0->f_24 = 835406/*func_2325*/;
			break;
		case 23:
			uParam0->f_26 = 835398/*func_2324*/;
			break;
		case 26:
			uParam0->f_38 = 835390/*func_2323*/;
			break;
		case 25:
			uParam0->f_23 = 835058/*func_2320*/;
			break;
		case 27:
			uParam0->f_25 = 835050/*func_2319*/;
			break;
		case 28:
			uParam0->f_24 = 835042/*func_2318*/;
			break;
		case 30:
			uParam0->f_8 = 834721/*func_2315*/;
			break;
		case 31:
			uParam0->f_39 = 834693/*func_2314*/;
			break;
		case 33:
			uParam0->f_40 = 834624/*func_2313*/;
			break;
		case 34:
			uParam0->f_41 = 830892/*func_2312*/;
			break;
		case 36:
			uParam0->f_58 = 830847/*func_2311*/;
			break;
		case 35:
			uParam0->f_42 = 827680/*func_2308*/;
			break;
		case 45:
			uParam0->f_14 = 827671/*func_2307*/;
			break;
		case 46:
			uParam0->f_14 = 827662/*func_2306*/;
			break;
		case 110:
			uParam0->f_57 = 827654/*func_2305*/;
			break;
		case 77:
			uParam0->f_13 = 827643/*func_2304*/;
			break;
		case 47:
			uParam0->f_43 = 827535/*func_2303*/;
			break;
		case 48:
			uParam0->f_60 = 1;
			uParam0->f_44 = 826420/*func_2300*/;
			break;
		case 49:
			uParam0->f_8 = 826411/*func_2299*/;
			break;
		case 50:
			*uParam0 = 826402/*func_2298*/;
			break;
		case 51:
			*uParam0 = 826393/*func_2297*/;
			break;
		case 52:
			uParam0->f_15 = 826382/*func_2296*/;
			break;
		case 53:
			uParam0->f_13 = 826371/*func_2295*/;
			break;
		case 54:
			uParam0->f_45 = 826363/*func_2294*/;
			break;
		case 56:
			uParam0->f_46 = 826354/*func_2293*/;
			break;
		case 57:
			uParam0->f_11 = 826345/*func_2292*/;
			break;
		case 58:
			uParam0->f_13 = 826303/*func_2291*/;
			break;
		case 59:
			*uParam0 = 826294/*func_2290*/;
			break;
		case 60:
			*uParam0 = 826285/*func_2289*/;
			break;
		case 61:
			uParam0->f_15 = 826274/*func_2288*/;
			break;
		case 62:
			uParam0->f_13 = 826263/*func_2287*/;
			break;
		case 63:
			uParam0->f_11 = 826254/*func_2286*/;
			break;
		case 64:
			uParam0->f_47 = 826246/*func_2285*/;
			break;
		case 65:
			uParam0->f_21 = 826238/*func_2284*/;
			break;
		case 66:
			uParam0->f_21 = 825935/*func_2283*/;
			break;
		case 67:
			uParam0->f_21 = 825865/*func_2282*/;
			break;
		case 68:
			*uParam0 = 825216/*func_2281*/;
			break;
		case 69:
			*uParam0 = 825207/*func_2280*/;
			break;
		case 70:
			uParam0->f_48 = 825199/*func_2279*/;
			break;
		case 71:
			uParam0->f_49 = 825190/*func_2278*/;
			break;
		case 107:
			uParam0->f_50 = 825178/*func_2277*/;
			break;
		case 80:
			uParam0->f_7 = 824744/*func_2276*/;
			break;
		case 18:
			uParam0->f_8 = 824719/*func_2275*/;
			break;
		case 84:
			uParam0->f_1 = 824702/*func_2274*/;
			break;
		case 85:
			uParam0->f_1 = 824160/*func_2270*/;
			break;
		case 87:
			uParam0->f_1 = 823137/*func_2262*/;
			break;
		case 88:
			uParam0->f_1 = 823128/*func_2261*/;
			break;
		case 89:
			uParam0->f_54 = 823120/*func_2260*/;
			break;
		case 96:
			uParam0->f_1 = 823111/*func_2259*/;
			break;
		case 97:
			uParam0->f_1 = 823102/*func_2258*/;
			break;
		case 98:
			uParam0->f_1 = 823093/*func_2257*/;
			break;
		case 100:
			uParam0->f_22 = 823085/*func_2256*/;
			break;
		case 101:
			uParam0->f_22 = 823077/*func_2255*/;
			break;
		case 112:
			uParam0->f_13 = 823065/*func_2254*/;
			break;
		case 113:
			uParam0->f_3 = 823056/*func_2253*/;
			break;
		case 78:
			uParam0->f_59 = 822753/*func_2250*/;
			break;
	}
}

int func_2270(var uParam0, var uParam1)//Position - 0xC9360
{
	return func_2271(uParam1);
}

int func_2271(var uParam0)//Position - 0xC936E
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	struct<3> Var5;
	struct<3> Var6;
	struct<3> Var7;
	struct<3> Var8;
	var uVar9;
	var uVar10;
	var uVar11;
	var uVar12;
	bool bVar13;
	bool bVar14;
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
		}
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_109))
		{
			func_408(&iVar0, &(uParam0->f_109), 60);
			__LIB_3__::func_633(&(uParam0->f_109));
			VEHICLE::SET_DISABLE_MAP_COLLISION(uParam0->f_109);
			return 0;
		}
		else if (func_324(&iVar0, &(uParam0->f_109), &(uParam0->f_109.f_1), 1, 1, 0, 1, 0, 1))
		{
			VEHICLE::SET_DISABLE_MAP_COLLISION(uParam0->f_109);
		}
		else
		{
			return 0;
		}
		MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(uParam0->f_109), &(uParam0->f_189[1 /*3*/]), &(uParam0->f_189[0 /*3*/]));
		__LIB_4__::func_109(&Var1, &Var3, &uVar9, 1);
		__LIB_4__::func_109(&Var2, &Var4, &uVar10, 0);
		__LIB_4__::func_108(&Var5, &Var7, &uVar11, 1);
		__LIB_4__::func_108(&Var6, &Var8, &uVar12, 0);
		bVar13 = VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(iVar0));
		bVar14 = !(uParam0->f_189[0 /*3*/].f_1 - uParam0->f_189[1 /*3*/].f_1) > 7f;
		if (bVar13)
		{
			MISC::SET_BIT(&(uParam0->f_188), 1);
		}
		else
		{
			MISC::CLEAR_BIT(&(uParam0->f_188), 1);
		}
		__LIB_6__::func_820(&(Global_1946250.f_3638), Var1, Var3, uVar9, Var2, Var4, uVar10, bVar13, Var5, Var7, uVar11, Var6, Var8, uVar12, bVar14, 1056964608, 1036831949);
	}
	return 1;
}

void func_2320(int iParam0, int iParam1)//Position - 0xCBDF2
{
	bool bVar0;
	bool bVar1;
	struct<3> Var2;
	Var2 = { __LIB_3__::func_554(iParam0) };
	if (__LIB_0__::func_114(PLAYER::PLAYER_ID(), iParam0))
	{
		if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
		{
			Var2 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		}
		func_557(iParam0, Var2, &bVar0, &bVar1, 1, 0);
		if (bVar1)
		{
			__LIB_5__::func_189(iParam1, 1, 1);
		}
		else
		{
			__LIB_5__::func_189(iParam1, 1, 0);
		}
		if (bVar0)
		{
			__LIB_5__::func_189(iParam1, 2, 1);
		}
		else
		{
			__LIB_5__::func_189(iParam1, 2, 0);
		}
		if ((bVar1 || bVar0) && !__LIB_3__::func_779())
		{
			__LIB_6__::func_880(iParam0, -1);
		}
		if (__LIB_3__::func_661(0, iParam1))
		{
			__LIB_6__::func_880(iParam0, -1);
		}
		else if (__LIB_3__::func_661(1, iParam1))
		{
			if (bVar1)
			{
				__LIB_7__::func_831(PLAYER::PLAYER_ID(), iParam0, Var2, 1, 0, 0, 0, -1, -1, -1);
			}
			__LIB_7__::func_792(iParam0);
		}
		else if (__LIB_3__::func_661(2, iParam1))
		{
			if (bVar0)
			{
				__LIB_7__::func_831(PLAYER::PLAYER_ID(), iParam0, Var2, 0, 0, 1, 0, -1, -1, -1);
			}
			__LIB_7__::func_792(iParam0);
		}
	}
	else
	{
		__LIB_5__::func_189(iParam1, 1, 0);
		__LIB_5__::func_189(iParam1, 2, 0);
	}
}

void func_2358(var uParam0, int iParam1)//Position - 0xCC7C0
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 872626/*func_2535*/;
			break;
		case 111:
			uParam0->f_35 = 872603/*func_2534*/;
			break;
		case 1:
			uParam0->f_30 = 872473/*func_2532*/;
			break;
		case 2:
			uParam0->f_31 = 871808/*func_2528*/;
			break;
		case 3:
			uParam0->f_34 = 871545/*func_2527*/;
			break;
		case 4:
			uParam0->f_12 = 871532/*func_2526*/;
			break;
		case 5:
			uParam0->f_11 = 871522/*func_2525*/;
			break;
		case 37:
			uParam0->f_18 = 871324/*func_2524*/;
			break;
		case 38:
			uParam0->f_9 = 871276/*func_2523*/;
			break;
		case 42:
			uParam0->f_10 = 871240/*func_2522*/;
			break;
		case 6:
			uParam0->f_32 = 871125/*func_2521*/;
			break;
		case 11:
			uParam0->f_11 = 871116/*func_2520*/;
			break;
		case 12:
			uParam0->f_33 = 870186/*func_2514*/;
			break;
		case 14:
			uParam0->f_11 = 870177/*func_2513*/;
			break;
		case 109:
			uParam0->f_56 = 869034/*func_2511*/;
			break;
		case 8:
			uParam0->f_37 = 868990/*func_2510*/;
			break;
		case 7:
			uParam0->f_36 = 868967/*func_2509*/;
			break;
		case 79:
			*uParam0 = 868943/*func_2508*/;
			break;
		case 13:
			uParam0->f_2 = 868881/*func_2507*/;
			break;
		case 15:
			uParam0->f_2 = 868802/*func_2506*/;
			break;
		case 16:
			uParam0->f_5 = 868115/*func_2501*/;
			break;
		case 108:
			uParam0->f_55 = 864833/*func_2488*/;
			break;
		case 17:
			uParam0->f_17 = 863915/*func_2487*/;
			break;
		case 19:
			uParam0->f_17 = 863870/*func_2486*/;
			break;
		case 20:
			uParam0->f_3 = 863697/*func_2485*/;
			break;
		case 21:
			uParam0->f_3 = 863612/*func_2484*/;
			break;
		case 74:
			uParam0->f_53 = 863472/*func_2483*/;
			break;
		case 75:
			uParam0->f_4 = 863456/*func_2482*/;
			break;
		case 22:
			uParam0->f_24 = 863353/*func_2481*/;
			break;
		case 23:
			uParam0->f_26 = 863306/*func_2480*/;
			break;
		case 24:
			uParam0->f_26 = 863269/*func_2479*/;
			break;
		case 26:
			uParam0->f_38 = 861864/*func_2466*/;
			break;
		case 25:
			uParam0->f_23 = 861498/*func_2463*/;
			break;
		case 27:
			uParam0->f_25 = 860685/*func_2459*/;
			break;
		case 28:
			uParam0->f_24 = 860646/*func_2458*/;
			break;
		case 29:
			uParam0->f_28 = 860449/*func_2455*/;
			break;
		case 30:
			uParam0->f_8 = 860124/*func_2451*/;
			break;
		case 31:
			uParam0->f_39 = 859927/*func_2450*/;
			break;
		case 43:
			uParam0->f_8 = 859821/*func_2449*/;
			break;
		case 33:
			uParam0->f_40 = 859505/*func_2448*/;
			break;
		case 34:
			uParam0->f_41 = 854513/*func_2445*/;
			break;
		case 36:
			uParam0->f_58 = 854456/*func_2444*/;
			break;
		case 35:
			uParam0->f_42 = 848252/*func_2440*/;
			break;
		case 45:
			uParam0->f_14 = 848243/*func_2439*/;
			break;
		case 46:
			uParam0->f_14 = 848234/*func_2438*/;
			break;
		case 110:
			uParam0->f_57 = 848226/*func_2437*/;
			break;
		case 77:
			uParam0->f_13 = 848203/*func_2436*/;
			break;
		case 82:
			uParam0->f_19 = 848190/*func_2435*/;
			break;
		case 47:
			uParam0->f_43 = 847898/*func_2432*/;
			break;
		case 48:
			uParam0->f_60 = 1;
			uParam0->f_44 = 845675/*func_2426*/;
			break;
		case 49:
			uParam0->f_8 = 845627/*func_2425*/;
			break;
		case 50:
			*uParam0 = 845435/*func_2423*/;
			break;
		case 51:
			*uParam0 = 845426/*func_2422*/;
			break;
		case 52:
			uParam0->f_15 = 845415/*func_2421*/;
			break;
		case 53:
			uParam0->f_13 = 845373/*func_2420*/;
			break;
		case 54:
			uParam0->f_45 = 845365/*func_2419*/;
			break;
		case 56:
			uParam0->f_46 = 845356/*func_2418*/;
			break;
		case 57:
			uParam0->f_11 = 845347/*func_2417*/;
			break;
		case 58:
			uParam0->f_13 = 845305/*func_2416*/;
			break;
		case 59:
			*uParam0 = 845296/*func_2415*/;
			break;
		case 60:
			*uParam0 = 845287/*func_2414*/;
			break;
		case 61:
			uParam0->f_15 = 845276/*func_2413*/;
			break;
		case 62:
			uParam0->f_13 = 845246/*func_2412*/;
			break;
		case 63:
			uParam0->f_11 = 845237/*func_2411*/;
			break;
		case 64:
			uParam0->f_47 = 845229/*func_2410*/;
			break;
		case 65:
			uParam0->f_21 = 844143/*func_2407*/;
			break;
		case 66:
			uParam0->f_21 = 843802/*func_2406*/;
			break;
		case 67:
			uParam0->f_21 = 843688/*func_2405*/;
			break;
		case 68:
			*uParam0 = 842860/*func_2404*/;
			break;
		case 69:
			*uParam0 = 842851/*func_2403*/;
			break;
		case 70:
			uParam0->f_48 = 842839/*func_2402*/;
			break;
		case 71:
			uParam0->f_49 = 842747/*func_2401*/;
			break;
		case 107:
			uParam0->f_50 = 842735/*func_2400*/;
			break;
		case 80:
			uParam0->f_7 = 842547/*func_2399*/;
			break;
		case 84:
			uParam0->f_1 = 842538/*func_2398*/;
			break;
		case 85:
			uParam0->f_1 = 842524/*func_2397*/;
			break;
		case 87:
			uParam0->f_1 = 842508/*func_2396*/;
			break;
		case 88:
			uParam0->f_1 = 842499/*func_2395*/;
			break;
		case 89:
			uParam0->f_54 = 842491/*func_2394*/;
			break;
		case 96:
			uParam0->f_1 = 842482/*func_2393*/;
			break;
		case 97:
			uParam0->f_1 = 842039/*func_2389*/;
			break;
		case 98:
			uParam0->f_1 = 840577/*func_2379*/;
			break;
		case 100:
			uParam0->f_22 = 839698/*func_2374*/;
			break;
		case 101:
			uParam0->f_22 = 839521/*func_2371*/;
			break;
		case 112:
			uParam0->f_13 = 839509/*func_2370*/;
			break;
		case 113:
			uParam0->f_3 = 839495/*func_2369*/;
			break;
		case 114:
			uParam0->f_16 = 328362/*func_843*/;
			break;
		case 117:
			uParam0->f_16 = 382391/*func_1047*/;
			break;
		case 118:
			uParam0->f_11 = 839486/*func_2368*/;
			break;
		case 119:
			uParam0->f_27 = 839385/*func_2364*/;
			break;
		case 120:
			uParam0->f_19 = 839360/*func_2362*/;
			break;
		case 78:
			uParam0->f_59 = 839188/*func_2360*/;
			break;
		case 125:
			uParam0->f_19 = 839161/*func_2359*/;
			break;
	}
}

int func_2379(int iParam0, var uParam1)//Position - 0xCD381
{
	if (__LIB_4__::func_128(iParam0))
	{
		return func_2380(iParam0, uParam1);
	}
	return 1;
}

int func_2380(int iParam0, var uParam1)//Position - 0xCD39E
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<3> Var4;
	struct<3> Var5;
	char* sVar6;
	int iVar7;
	if (PED::IS_PED_IN_ANY_VEHICLE(Global_1946250.f_4716.f_7, false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(Global_1946250.f_4716.f_7, false);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
		}
		iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1, false);
		if (func_325(&(uParam1->f_109.f_1[0]), iVar1, 1, 1) && __LIB_0__::func_121(uParam1->f_109.f_1[0]))
		{
			if (__LIB_0__::func_121(uParam1->f_109))
			{
				VEHICLE::SET_DISABLE_MAP_COLLISION(uParam1->f_109);
			}
			if (PED::IS_PED_MALE(uParam1->f_109.f_1[0]))
			{
				MISC::SET_BIT(&(uParam1->f_188), 4);
			}
		}
		else
		{
			return 0;
		}
		if (!__LIB_5__::func_539(&(uParam1->f_2), 926.6437f, 50.7593f, 70.0961f, 1))
		{
			return 0;
		}
		uParam1->f_176[0] = OBJECT::CREATE_OBJECT(__LIB_4__::func_134(), 926.6437f, 50.7593f, 75.0961f, false, false, false);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_4__::func_134());
		if (__LIB_0__::func_121(uParam1->f_176[0]))
		{
			ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_176[0], true);
		}
		else
		{
			return 0;
		}
		iVar2 = __LIB_4__::func_133(-395939522);
		iVar3 = __LIB_4__::func_133(-401740561);
		if (!BitTest(uParam1->f_188, 5))
		{
			__LIB_4__::func_131(__LIB_4__::func_132(-395939522), iVar2);
			__LIB_4__::func_131(__LIB_4__::func_132(-401740561), iVar3);
			MISC::SET_BIT(&(uParam1->f_188), 5);
		}
		if (!__LIB_4__::func_130(&(uParam1->f_50), __LIB_4__::func_132(-395939522), -48f, iVar2))
		{
			return 0;
		}
		if (!__LIB_4__::func_130(&(uParam1->f_58), __LIB_4__::func_132(-401740561), 157f, iVar3))
		{
			return 0;
		}
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar2);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar3);
		Var4 = { 925.9088f, 51.242f, 80.095f };
		Var5 = { 0f, 0f, 58f };
		sVar6 = __LIB_5__::func_266(uParam1, 6);
		iVar7 = 3500;
		__LIB_3__::func_900(&(Global_1946250.f_4073), iVar7, "valet exit", Var4, Var5, uParam1->f_3, sVar6, 1, 0, 0, 0, 2);
	}
	else
	{
		return 0;
	}
	return 1;
}

int func_2397(var uParam0, var uParam1)//Position - 0xCDB1C
{
	return func_2271(uParam1);
}

void func_2463(int iParam0, int iParam1)//Position - 0xD253A
{
	bool bVar0;
	bool bVar1;
	struct<3> Var2;
	Var2 = { __LIB_4__::func_154(iParam0) };
	if (__LIB_6__::func_892(PLAYER::PLAYER_ID(), iParam0))
	{
		if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
		{
			Var2 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		}
		func_557(iParam0, Var2, &bVar0, &bVar1, 1, 0);
		if (bVar1)
		{
			__LIB_5__::func_189(iParam1, 1, 1);
		}
		else
		{
			__LIB_5__::func_189(iParam1, 1, 0);
		}
		if (bVar0)
		{
			__LIB_5__::func_189(iParam1, 2, 1);
		}
		else
		{
			__LIB_5__::func_189(iParam1, 2, 0);
		}
		if ((bVar1 || bVar0) && !__LIB_3__::func_779())
		{
			__LIB_6__::func_890(iParam0, -1);
		}
		if (__LIB_3__::func_661(0, iParam1))
		{
			__LIB_6__::func_890(iParam0, -1);
		}
		else if (__LIB_3__::func_661(1, iParam1))
		{
			if (bVar1)
			{
				__LIB_7__::func_831(PLAYER::PLAYER_ID(), iParam0, Var2, 1, 0, 0, 0, -1, -1, -1);
			}
			__LIB_7__::func_803(iParam0);
		}
		else if (__LIB_3__::func_661(2, iParam1))
		{
			if (bVar0)
			{
				__LIB_7__::func_831(PLAYER::PLAYER_ID(), iParam0, Var2, 0, 0, 1, 0, -1, -1, -1);
			}
			__LIB_7__::func_803(iParam0);
		}
	}
	else
	{
		__LIB_5__::func_189(iParam1, 1, 0);
		__LIB_5__::func_189(iParam1, 2, 0);
	}
}

void func_2466(var uParam0, var uParam1)//Position - 0xD26A8
{
	if (__LIB_1__::func_124(PLAYER::PLAYER_ID()) || __LIB_4__::func_153(PLAYER::PLAYER_ID()))
	{
		func_2467(uParam0, uParam1);
	}
}

void func_2467(var uParam0, var uParam1)//Position - 0xD26D4
{
	int iVar0;
	if (__LIB_3__::func_616() == 2 && __LIB_3__::func_785() != 1)
	{
		uParam1->f_1 = 1;
		if (func_2478(*uParam0, 0, 0))
		{
			__LIB_3__::func_664(0);
			__LIB_3__::func_784(1);
		}
		else
		{
			__LIB_5__::func_878(uParam1, 0);
			return;
		}
	}
	iVar0 = __LIB_3__::func_785();
	switch (iVar0)
	{
		case 0:
			func_2473(uParam0, uParam1);
			break;
		case 1:
			func_2469(uParam0, uParam1);
			break;
		case 2:
			__LIB_5__::func_877(*uParam0, uParam1);
			break;
		default:
			break;
	}
}

void func_2469(var uParam0, var uParam1)//Position - 0xD2793
{
	bool bVar0;
	int iVar1[3];
	var uVar2[3];
	char* sVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	bool bVar7;
	HUD::HIDE_HELP_TEXT_THIS_FRAME();
	uParam1->f_2 = 0;
	sVar3 = __LIB_4__::func_155();
	func_557(*uParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &bVar6, &bVar7, 1, 0);
	iVar5 = 0;
	while (iVar5 < 3)
	{
		uVar2[iVar4] = __LIB_5__::func_207(iVar5);
		if (__LIB_3__::func_782(iVar5, bVar6, bVar7))
		{
			iVar1[iVar4] = iVar5;
			if (!bVar0 && !MISC::ARE_STRINGS_EQUAL(&(Global_23150.f_79[iVar4 /*6*/]), uVar2[iVar4]))
			{
				bVar0 = true;
			}
			iVar4++;
		}
		else if (!bVar0)
		{
			if (MISC::ARE_STRINGS_EQUAL(&(Global_23150.f_79[iVar4 /*6*/]), uVar2[iVar4]))
			{
				bVar0 = true;
			}
		}
		iVar5++;
	}
	if (uParam0->f_5 || bVar0)
	{
		__LIB_1__::func_602(0, 1);
		__LIB_1__::func_767("CASINO_ENT_T" /* GXT: THE DIAMOND CASINO & RESORT */);
		__LIB_3__::func_566(1, sVar3, sVar3);
		__LIB_5__::func_270();
		iVar5 = 0;
		while (iVar5 < iVar4)
		{
			__LIB_10__::func_18(iVar5, uVar2[iVar5], 0, 1, 0, 0, 0);
			iVar5++;
		}
		__LIB_7__::func_733(0, 1, 1);
	}
	else if (uParam0->f_2)
	{
		uParam1->f_8 = 1;
		uParam1->f_6 = 1;
		uParam1->f_1 = 1;
		uParam1->f_11 = 10;
		__LIB_5__::func_457(5);
		__LIB_5__::func_462();
		if (iVar1[uParam0->f_4] != 0)
		{
			__LIB_8__::func_965(iVar1[uParam0->f_4]);
		}
	}
	else if (uParam0->f_3)
	{
		__LIB_5__::func_462();
		if (__LIB_3__::func_616() == 2)
		{
			uParam1->f_4 = 1;
		}
	}
}

void func_2473(var uParam0, var uParam1)//Position - 0xD2992
{
	bool bVar0;
	var uVar1[2];
	var uVar2[2];
	var uVar3[2];
	char* sVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	sVar4 = __LIB_4__::func_155();
	iVar6 = 0;
	while (iVar6 < 2)
	{
		uVar3[iVar6] = __LIB_4__::func_158(iVar6);
		uVar1[iVar6] = __LIB_4__::func_157(iVar6);
		uVar2[iVar6] = uVar1[iVar6];
		if (!bVar0 && (Global_23150.f_1616[iVar6] != uVar2[iVar6] || !MISC::ARE_STRINGS_EQUAL(&(Global_23150.f_79[iVar6 /*6*/]), uVar3[iVar6])))
		{
			bVar0 = true;
		}
		iVar5++;
		iVar6++;
	}
	if (!__LIB_1__::func_124(PLAYER::PLAYER_ID()) && __LIB_4__::func_153(PLAYER::PLAYER_ID()))
	{
		__LIB_5__::func_877(*uParam0, uParam1);
	}
	else if (uParam0->f_5 || bVar0)
	{
		__LIB_1__::func_602(0, 1);
		__LIB_1__::func_767("CASINO_ENT_T" /* GXT: THE DIAMOND CASINO & RESORT */);
		__LIB_3__::func_566(1, sVar4, sVar4);
		__LIB_5__::func_270();
		iVar6 = 0;
		while (iVar6 < iVar5)
		{
			__LIB_10__::func_18(iVar6, uVar3[iVar6], 0, uVar2[iVar6], 0, 0, 0);
			iVar6++;
		}
		__LIB_7__::func_733(0, 1, 1);
	}
	else
	{
		iVar7 = uParam0->f_4;
		__LIB_1__::func_789(__LIB_4__::func_156(uVar1[iVar7], iVar7), 0, 0);
		if (uParam0->f_2 && uVar2[iVar7])
		{
			if (iVar7 == 0)
			{
				*uParam1 = 1;
				__LIB_3__::func_784(2);
			}
			else if (func_2478(*uParam0, 0, 0))
			{
				*uParam1 = 1;
				__LIB_3__::func_664(1);
				__LIB_3__::func_784(1);
			}
			else
			{
				__LIB_5__::func_878(uParam1, 1);
			}
		}
		else if (uParam0->f_3)
		{
			uParam1->f_4 = 1;
		}
	}
}

int func_2478(int iParam0, bool bParam1, bool bParam2)//Position - 0xD2BF3
{
	int iVar0;
	int iVar1;
	func_557(iParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &iVar0, &iVar1, 1, bParam2);
	if (bParam1)
	{
		return iVar1;
	}
	return (iVar0 || iVar1);
}

void func_2536(var uParam0, int iParam1)//Position - 0xD50BB
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 903048/*func_2708*/;
			break;
		case 111:
			uParam0->f_35 = 903039/*func_2707*/;
			break;
		case 1:
			uParam0->f_30 = 902971/*func_2705*/;
			break;
		case 2:
			uParam0->f_31 = 902620/*func_2702*/;
			break;
		case 3:
			uParam0->f_34 = 902387/*func_2701*/;
			break;
		case 4:
			uParam0->f_12 = 902374/*func_2700*/;
			break;
		case 6:
			uParam0->f_32 = 902310/*func_2699*/;
			break;
		case 11:
			uParam0->f_11 = 902301/*func_2698*/;
			break;
		case 12:
			uParam0->f_33 = 901576/*func_2694*/;
			break;
		case 14:
			uParam0->f_11 = 901567/*func_2693*/;
			break;
		case 109:
			uParam0->f_56 = 900443/*func_2692*/;
			break;
		case 8:
			uParam0->f_37 = 900435/*func_2691*/;
			break;
		case 7:
			uParam0->f_36 = 900426/*func_2690*/;
			break;
		case 79:
			*uParam0 = 900402/*func_2689*/;
			break;
		case 13:
			uParam0->f_2 = 900330/*func_2688*/;
			break;
		case 15:
			uParam0->f_2 = 900241/*func_2687*/;
			break;
		case 16:
			uParam0->f_5 = 899881/*func_2686*/;
			break;
		case 108:
			uParam0->f_55 = 899742/*func_2684*/;
			break;
		case 17:
			uParam0->f_17 = 899086/*func_2683*/;
			break;
		case 19:
			uParam0->f_17 = 899060/*func_2682*/;
			break;
		case 20:
			uParam0->f_3 = 899051/*func_2681*/;
			break;
		case 21:
			uParam0->f_3 = 899003/*func_2680*/;
			break;
		case 74:
			uParam0->f_53 = 898948/*func_2679*/;
			break;
		case 75:
			uParam0->f_4 = 898835/*func_2678*/;
			break;
		case 22:
			uParam0->f_24 = 898827/*func_2677*/;
			break;
		case 23:
			uParam0->f_26 = 898819/*func_2676*/;
			break;
		case 26:
			uParam0->f_38 = 896277/*func_2660*/;
			break;
		case 25:
			uParam0->f_23 = 896269/*func_2659*/;
			break;
		case 27:
			uParam0->f_25 = 896261/*func_2658*/;
			break;
		case 28:
			uParam0->f_24 = 896253/*func_2657*/;
			break;
		case 30:
			uParam0->f_8 = 895972/*func_2656*/;
			break;
		case 31:
			uParam0->f_39 = 895944/*func_2655*/;
			break;
		case 33:
			uParam0->f_40 = 895875/*func_2654*/;
			break;
		case 76:
			uParam0->f_13 = 895852/*func_2653*/;
			break;
		case 34:
			uParam0->f_41 = 893298/*func_2650*/;
			break;
		case 36:
			uParam0->f_58 = 893253/*func_2649*/;
			break;
		case 35:
			uParam0->f_42 = 893157/*func_2648*/;
			break;
		case 45:
			uParam0->f_14 = 893148/*func_2647*/;
			break;
		case 46:
			uParam0->f_14 = 893139/*func_2646*/;
			break;
		case 110:
			uParam0->f_57 = 893131/*func_2645*/;
			break;
		case 77:
			uParam0->f_13 = 893120/*func_2644*/;
			break;
		case 47:
			uParam0->f_43 = 893013/*func_2643*/;
			break;
		case 48:
			uParam0->f_60 = 1;
			uParam0->f_44 = 892175/*func_2642*/;
			break;
		case 49:
			uParam0->f_8 = 892166/*func_2641*/;
			break;
		case 50:
			*uParam0 = 891953/*func_2640*/;
			break;
		case 51:
			*uParam0 = 891944/*func_2639*/;
			break;
		case 52:
			uParam0->f_15 = 891933/*func_2638*/;
			break;
		case 53:
			uParam0->f_13 = 891891/*func_2637*/;
			break;
		case 54:
			uParam0->f_45 = 891852/*func_2636*/;
			break;
		case 56:
			uParam0->f_46 = 891843/*func_2635*/;
			break;
		case 57:
			uParam0->f_11 = 891801/*func_2633*/;
			break;
		case 58:
			uParam0->f_13 = 891759/*func_2632*/;
			break;
		case 59:
			*uParam0 = 891750/*func_2631*/;
			break;
		case 60:
			*uParam0 = 891741/*func_2630*/;
			break;
		case 61:
			uParam0->f_15 = 891730/*func_2629*/;
			break;
		case 62:
			uParam0->f_13 = 891719/*func_2628*/;
			break;
		case 63:
			uParam0->f_11 = 891710/*func_2627*/;
			break;
		case 64:
			uParam0->f_47 = 891624/*func_2625*/;
			break;
		case 65:
			uParam0->f_21 = 891616/*func_2624*/;
			break;
		case 66:
			uParam0->f_21 = 891275/*func_2623*/;
			break;
		case 67:
			uParam0->f_21 = 891205/*func_2622*/;
			break;
		case 68:
			*uParam0 = 890508/*func_2621*/;
			break;
		case 69:
			*uParam0 = 890499/*func_2620*/;
			break;
		case 70:
			uParam0->f_48 = 890426/*func_2619*/;
			break;
		case 71:
			uParam0->f_49 = 890417/*func_2618*/;
			break;
		case 107:
			uParam0->f_50 = 890405/*func_2617*/;
			break;
		case 80:
			uParam0->f_7 = 890396/*func_2616*/;
			break;
		case 84:
			uParam0->f_1 = 889871/*func_2613*/;
			break;
		case 85:
			uParam0->f_1 = 888315/*func_2610*/;
			break;
		case 87:
			uParam0->f_1 = 885143/*func_2598*/;
			break;
		case 88:
			uParam0->f_1 = 885128/*func_2597*/;
			break;
		case 89:
			uParam0->f_54 = 884767/*func_2595*/;
			break;
		case 96:
			uParam0->f_1 = 884475/*func_2592*/;
			break;
		case 97:
			uParam0->f_1 = 883969/*func_2590*/;
			break;
		case 98:
			uParam0->f_1 = 882340/*func_2588*/;
			break;
		case 100:
			uParam0->f_22 = 882063/*func_2587*/;
			break;
		case 101:
			uParam0->f_22 = 881514/*func_2583*/;
			break;
		case 112:
			uParam0->f_13 = 881502/*func_2582*/;
			break;
		case 113:
			uParam0->f_3 = 881493/*func_2581*/;
			break;
		case 114:
			uParam0->f_16 = 328362/*func_843*/;
			break;
		case 115:
			uParam0->f_3 = 881356/*func_2578*/;
			break;
		case 116:
			*uParam0 = 881308/*func_2577*/;
			break;
		case 117:
			uParam0->f_16 = 382391/*func_1047*/;
			break;
		case 118:
			uParam0->f_11 = 839486/*func_2368*/;
			break;
		case 119:
			uParam0->f_27 = 839385/*func_2364*/;
			break;
		case 120:
			uParam0->f_19 = 839360/*func_2362*/;
			break;
		case 78:
			uParam0->f_59 = 881300/*func_2576*/;
			break;
		case 124:
			uParam0->f_1 = 874215/*func_2538*/;
			break;
		case 125:
			uParam0->f_19 = 874159/*func_2537*/;
			break;
	}
}

int func_2538(int iParam0, int* iParam1)//Position - 0xD56E7
{
	float fVar0;
	var uVar1;
	struct<3> Var2;
	struct<3> Var3;
	float fVar4;
	var uVar5;
	if (!Global_2814119 || Global_2815059.f_6757)
	{
		if (iParam1->f_258 > 0)
		{
			__LIB_10__::func_26(iParam1);
		}
		return 0;
	}
	switch (iParam1->f_258)
	{
		case 0:
			if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				__LIB_5__::func_276(iParam0, &uVar1, &Var2, &Var3, &fVar4, &uVar5, 0, 0);
				if (OBJECT::IS_POINT_IN_ANGLED_AREA(__LIB_1__::func_694(PLAYER::PLAYER_ID()), Var2, Var3, fVar4, false, true))
				{
					__LIB_5__::func_457(0);
					__LIB_4__::func_181(iParam1, 1);
				}
				__LIB_5__::func_276(iParam0, &uVar1, &Var2, &Var3, &fVar4, &uVar5, 3, 0);
				if (OBJECT::IS_POINT_IN_ANGLED_AREA(__LIB_1__::func_694(PLAYER::PLAYER_ID()), Var2, Var3, fVar4, true, true))
				{
					__LIB_5__::func_457(3);
					__LIB_4__::func_181(iParam1, 1);
				}
				__LIB_5__::func_276(iParam0, &uVar1, &Var2, &Var3, &fVar4, &uVar5, 4, 0);
				if (OBJECT::IS_POINT_IN_ANGLED_AREA(__LIB_1__::func_694(PLAYER::PLAYER_ID()), Var2, Var3, fVar4, true, true))
				{
					__LIB_5__::func_457(4);
					__LIB_4__::func_181(iParam1, 1);
				}
				__LIB_5__::func_276(iParam0, &uVar1, &Var2, &Var3, &fVar4, &uVar5, 1, 0);
				if (OBJECT::IS_POINT_IN_ANGLED_AREA(__LIB_1__::func_694(PLAYER::PLAYER_ID()), Var2, Var3, fVar4, true, true))
				{
					__LIB_5__::func_457(1);
					__LIB_4__::func_181(iParam1, 1);
				}
			}
			break;
		case 1:
			if (__LIB_3__::func_616() == 0)
			{
				if (__LIB_6__::func_965(iParam0, iParam1))
				{
					__LIB_4__::func_180();
					__LIB_4__::func_181(iParam1, 2);
				}
			}
			else
			{
				__LIB_5__::func_548(iParam0, iParam1, __LIB_3__::func_616());
				__LIB_4__::func_181(iParam1, 2);
			}
			break;
		case 2:
			if (__LIB_3__::func_616() == 0)
			{
				if (func_2610(iParam0, iParam1))
				{
					__LIB_4__::func_178(&(Global_1946250.f_3638), 60);
					__LIB_4__::func_181(iParam1, 3);
				}
			}
			else if (func_2564(iParam1))
			{
				__LIB_4__::func_181(iParam1, 3);
			}
			break;
		case 3:
			if (__LIB_3__::func_616() == 0)
			{
				__LIB_9__::func_3(&(Global_1946250.f_3638), 0, 1);
				__LIB_7__::func_843(iParam0, iParam1);
				if (__LIB_3__::func_630(&(Global_1946250.f_3638), 0))
				{
					__LIB_9__::func_324(&iParam0);
					MISC::SET_BIT(&(Global_1946250.f_6), 26);
					__LIB_4__::func_181(iParam1, 4);
				}
			}
			else
			{
				__LIB_7__::func_842(iParam1);
				__LIB_9__::func_324(&iParam0);
				MISC::SET_BIT(&(Global_1946250.f_6), 26);
				__LIB_4__::func_181(iParam1, 4);
			}
			break;
		case 4:
			if (__LIB_3__::func_616() == 0)
			{
				if (!BitTest(*iParam1, 16))
				{
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iParam1->f_27) && __LIB_0__::func_121(iParam1->f_50))
					{
						fVar0 = PED::GET_SYNCHRONIZED_SCENE_PHASE(iParam1->f_27);
						if (fVar0 > 0.55f)
						{
							CAM::DO_SCREEN_FADE_OUT(500);
							MISC::SET_BIT(iParam1, 16);
						}
					}
				}
				__LIB_9__::func_3(&(Global_1946250.f_3638), 0, 1);
				if (__LIB_7__::func_843(iParam0, iParam1) && BitTest(Global_1946250.f_6, 27))
				{
					__LIB_10__::func_26(iParam1);
				}
			}
			else if (__LIB_7__::func_842(iParam1) && BitTest(Global_1946250.f_6, 27))
			{
				__LIB_10__::func_26(iParam1);
			}
			break;
	}
	return 1;
}

int func_2564(int* iParam0)//Position - 0xD693F
{
	STREAMING::REQUEST_ANIM_DICT(iParam0->f_3);
	if (!STREAMING::HAS_ANIM_DICT_LOADED(iParam0->f_3))
	{
		return 0;
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam0->f_4))
	{
		STREAMING::REQUEST_ANIM_DICT(iParam0->f_4);
		if (!STREAMING::HAS_ANIM_DICT_LOADED(iParam0->f_4))
		{
			return 0;
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0->f_2))
	{
		func_1403(&(iParam0->f_2), PLAYER::PLAYER_ID(), 1, 1);
		return 0;
	}
	if ((__LIB_0__::func_121(iParam0->f_2) && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(iParam0->f_2)) && PED::HAS_PED_HEAD_BLEND_FINISHED(iParam0->f_2))
	{
		ENTITY::SET_ENTITY_VISIBLE(iParam0->f_2, true, false);
	}
	else
	{
		return 0;
	}
	return 1;
}

int func_2588(int iParam0, var uParam1)//Position - 0xD76A4
{
	struct<3> Var0;
	struct<3> Var1;
	char* sVar2;
	int iVar3;
	if (__LIB_4__::func_128(iParam0))
	{
		return func_2380(iParam0, uParam1);
	}
	else if (BitTest(Global_1946250.f_6, 20))
	{
		if (Global_1946250.f_4539 == __LIB_0__::func_162())
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(PLAYER::PLAYER_PED_ID(), "MP_1", 0, 0, 64);
			}
		}
		else if (!PED::IS_PED_INJURED(uParam1->f_2))
		{
			CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(uParam1->f_2, "MP_1", 0, 0, 64);
		}
		__LIB_5__::func_412(1, 1, 1, 0, 0, 0, 0);
		NETWORK::NETWORK_SET_IN_MP_CUTSCENE(true, true);
		CUTSCENE::START_CUTSCENE(0);
		if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_2))
		{
			ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), true, false);
			NETWORK::SET_ENTITY_VISIBLE_IN_CUTSCENE(PLAYER::PLAYER_PED_ID(), true, false);
		}
		MISC::SET_BIT(&(Global_1946250.f_6), 19);
		MISC::SET_BIT(&(Global_1946250.f_2), 20);
		return 1;
	}
	else
	{
		Var0 = { 1082.001f, 187.749f, -49.349f };
		Var1 = { 0f, 0f, -110.19f };
		sVar2 = "mini@strip_club@throwout_d@";
		if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_140[0]))
		{
			uParam1->f_140[0] = PED::CREATE_PED(4, joaat("S_M_Y_Casino_01"), Var0 + Vector(-10f, 0f, 0f), 0f, false, true);
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(uParam1->f_140[0]);
			PED::SET_PED_COMPONENT_VARIATION(uParam1->f_140[0], 6, 0, 0, 0);
			ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_140[0], true);
			return 0;
		}
		if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_140[1]))
		{
			uParam1->f_140[1] = PED::CREATE_PED(4, joaat("S_M_Y_Casino_01"), Var0 + Vector(-10f, 0f, 0f), 0f, false, true);
			__LIB_4__::func_185(MISC::GET_RANDOM_INT_IN_RANGE(0, 6), &(uParam1->f_140[1]));
			ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_140[1], true);
			return 0;
		}
		if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_140[2]))
		{
			func_1403(&(uParam1->f_140[2]), PLAYER::PLAYER_ID(), 1, 0);
			ENTITY::SET_ENTITY_COORDS(uParam1->f_140[2], Var0 + Vector(-10f, 0f, 0f), false, false, false, true);
			ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_140[2], true);
			return 0;
		}
		iVar3 = 0;
		while (iVar3 < 3)
		{
			if (__LIB_0__::func_121(uParam1->f_140[iVar3]))
			{
				if (!PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(uParam1->f_140[iVar3]))
				{
					return 0;
				}
			}
			iVar3++;
		}
		MISC::SET_BIT(&(Global_1946250.f_2), 20);
		Var0 = { Var0 + Vector(0f, 0.5f, 3f) };
		__LIB_3__::func_900(&(Global_1946250.f_4073), 5000, "Casino Tout", Var0, Var1, sVar2, "throwout_d_cam", 0, 0, 0, 0, 2);
		NETWORK::SET_ENTITY_VISIBLE_IN_CUTSCENE(PLAYER::PLAYER_PED_ID(), true, true);
		__LIB_1__::func_376(PLAYER::PLAYER_ID(), 0, 262144, 0);
		uParam1->f_27 = PED::CREATE_SYNCHRONIZED_SCENE(Var0, Var1, 2);
		if (__LIB_0__::func_121(uParam1->f_140[0]))
		{
			ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_140[0], false);
			TASK::TASK_SYNCHRONIZED_SCENE(uParam1->f_140[0], uParam1->f_27, sVar2, "throwout_d_bouncer_a", 1000f, -2f, 4, 0, 1000f, 0);
		}
		if (__LIB_0__::func_121(uParam1->f_140[1]))
		{
			ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_140[1], false);
			TASK::TASK_SYNCHRONIZED_SCENE(uParam1->f_140[1], uParam1->f_27, sVar2, "throwout_d_bouncer_b", 1000f, -2f, 4, 0, 1000f, 0);
		}
		if (__LIB_0__::func_121(uParam1->f_140[2]))
		{
			ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_140[2], false);
			TASK::TASK_SYNCHRONIZED_SCENE(uParam1->f_140[2], uParam1->f_27, sVar2, "throwout_d_victim", 1000f, -2f, 4, 0, 1000f, 0);
		}
	}
	return 1;
}

int func_2590(int iParam0, var uParam1)//Position - 0xD7D01
{
	char* sVar0;
	bool bVar1;
	if (__LIB_4__::func_128(iParam0))
	{
		return __LIB_5__::func_974(iParam0, uParam1);
	}
	else if (BitTest(Global_1946250.f_6, 20))
	{
		MISC::CLEAR_BIT(&(Global_1946250.f_2), 21);
		STREAMING::REQUEST_IPL("ch_cutscene_casino");
		if (Global_1946250.f_4539 != __LIB_0__::func_162())
		{
			if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_2))
			{
				if (!func_2591(&(uParam1->f_2), Global_1946250.f_4539))
				{
					return 0;
				}
			}
		}
		if (!BitTest(uParam1->f_188, 1))
		{
			if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
			{
				CUTSCENE::SET_CUTSCENE_ENTITY_STREAMING_FLAGS("MP_1", 0, 1);
				MISC::SET_BIT(&(uParam1->f_188), 1);
			}
		}
		if (CUTSCENE::HAS_CUTSCENE_LOADED())
		{
			ENTITY::CREATE_MODEL_HIDE(959.0179f, 40.0682f, 116.2767f, 1f, joaat("hei_ch3_12_casinonew_penthouse"), false);
			return 1;
		}
		return 0;
	}
	else
	{
		MISC::SET_BIT(&(Global_1946250.f_5), 27);
		sVar0 = "mini@strip_club@throwout_d@";
		bVar1 = true;
		STREAMING::REQUEST_ANIM_DICT(sVar0);
		if (!STREAMING::HAS_ANIM_DICT_LOADED(sVar0))
		{
			bVar1 = false;
		}
		STREAMING::REQUEST_MODEL(joaat("S_M_Y_Casino_01"));
		if (!STREAMING::HAS_MODEL_LOADED(joaat("S_M_Y_Casino_01")))
		{
			bVar1 = false;
		}
		if (!bVar1)
		{
			return 0;
		}
	}
	return 1;
}

int func_2591(var uParam0, int iParam1)//Position - 0xD7E0F
{
	int iVar0;
	int iVar1;
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam1))
		{
			if (!PED::IS_PED_INJURED(PLAYER::GET_PLAYER_PED(iParam1)))
			{
				iVar0 = ENTITY::GET_ENTITY_MODEL(PLAYER::GET_PLAYER_PED(iParam1));
				iVar1 = 4;
				if (__LIB_0__::func_338(iParam1))
				{
					iVar1 = 5;
				}
				*uParam0 = PED::CREATE_PED(iVar1, iVar0, 962.5547f, 59.6398f, 111.553f, 180f, false, false);
				ENTITY::SET_ENTITY_INVINCIBLE(*uParam0, true);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam0, true);
				PED::CLONE_PED_TO_TARGET(PLAYER::GET_PLAYER_PED(iParam1), *uParam0);
				if (__LIB_0__::func_348(ENTITY::GET_ENTITY_MODEL(*uParam0), 14, func_342(*uParam0, 14, 0), -1))
				{
					PED::CLEAR_PED_PROP(*uParam0, 0);
				}
				if (__LIB_1__::func_102(*uParam0, 7))
				{
					PED::SET_PED_COMPONENT_VARIATION(*uParam0, 7, 0, 0, 0);
				}
			}
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		return 0;
	}
	if (!PED::IS_PED_INJURED(*uParam0))
	{
		if (!PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(*uParam0))
		{
			return 0;
		}
	}
	return 1;
}

int func_2610(int iParam0, int* iParam1)//Position - 0xD8DFB
{
	var uVar0[25];
	int iVar1;
	int iVar2;
	struct<3> Var3;
	struct<3> Var4;
	char* sVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	struct<3> Var9;
	struct<3> Var10;
	char* sVar11;
	int iVar12;
	if (BitTest(iParam1->f_188, 12))
	{
		if (!func_325(&(iParam1->f_140[0]), PLAYER::PLAYER_PED_ID(), 1, 1))
		{
			return 0;
		}
		if (!__LIB_5__::func_539(&(iParam1->f_2), 926.6437f, 50.7593f, 70.0961f, 1))
		{
			return 0;
		}
		if (!BitTest(iParam1->f_188, 5))
		{
			__LIB_4__::func_131(__LIB_4__::func_132(-1805228339), __LIB_4__::func_133(-1805228339));
			MISC::SET_BIT(&(iParam1->f_188), 5);
		}
		if (!__LIB_4__::func_130(&(iParam1->f_50), __LIB_4__::func_132(-1805228339), __LIB_4__::func_193(-1805228339), __LIB_4__::func_133(-1805228339)))
		{
			return 0;
		}
		iVar1 = PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uVar0, -1);
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			if (((ENTITY::DOES_ENTITY_EXIST(uVar0[iVar2]) && __LIB_0__::func_121(uVar0[iVar2])) && TASK::IS_PED_ACTIVE_IN_SCENARIO(uVar0[iVar2])) && ENTITY::GET_ENTITY_MODEL(uVar0[iVar2]) == __LIB_4__::func_136())
			{
				NETWORK::SET_ENTITY_VISIBLE_IN_CUTSCENE(uVar0[iVar2], false, false);
			}
			else
			{
				iVar2++;
			}
		}
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_4__::func_133(-1805228339));
		Var3 = { __LIB_4__::func_132(-1805228339) };
		Var4 = { 0f, 0f, -122f };
		sVar5 = __LIB_4__::func_191(6);
		__LIB_3__::func_900(&(Global_1946250.f_3638), 12000, "valet intro", Var3, Var4, iParam1->f_3, sVar5, 1, 0, 0, 0, 2);
		if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar6 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			if (((__LIB_0__::func_121(iVar6) && __LIB_0__::func_872(iVar6, 0)) && __LIB_6__::func_854(iVar6) == PLAYER::PLAYER_ID()) && __LIB_0__::func_336(PLAYER::PLAYER_PED_ID(), 0) == -1)
			{
				MISC::SET_BIT(&(iParam1->f_188), 13);
				iParam1->f_135[0] = iVar6;
			}
			MISC::SET_BIT(&(iParam1->f_188), 14);
		}
	}
	else if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar7 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar7))
		{
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iParam1->f_109))
		{
			func_408(&iVar7, &(iParam1->f_109), 60);
			__LIB_3__::func_633(&(iParam1->f_109));
			VEHICLE::SET_DISABLE_MAP_COLLISION(iParam1->f_109);
			return 0;
		}
		else
		{
			iVar8 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar7, -1, false);
			if (func_325(&(iParam1->f_109.f_1[0]), iVar8, 1, 1) && __LIB_0__::func_121(iParam1->f_109.f_1[0]))
			{
				if (__LIB_0__::func_121(iParam1->f_109))
				{
					VEHICLE::SET_DISABLE_MAP_COLLISION(iParam1->f_109);
				}
				if (PED::IS_PED_MALE(iParam1->f_109.f_1[0]))
				{
					MISC::SET_BIT(&(iParam1->f_188), 4);
				}
				if (iVar8 == PLAYER::PLAYER_PED_ID())
				{
					MISC::SET_BIT(&(iParam1->f_188), 11);
				}
			}
			else
			{
				return 0;
			}
		}
		if (!__LIB_5__::func_539(&(iParam1->f_2), 926.6437f, 50.7593f, 70.0961f, 1))
		{
			return 0;
		}
		iParam1->f_176[0] = OBJECT::CREATE_OBJECT(__LIB_4__::func_134(), 926.6437f, 50.7593f, 75.0961f, false, false, false);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_4__::func_134());
		if (__LIB_0__::func_121(iParam1->f_176[0]))
		{
			ENTITY::FREEZE_ENTITY_POSITION(iParam1->f_176[0], true);
		}
		else
		{
			return 0;
		}
		MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(iParam1->f_109), &(iParam1->f_189[0 /*3*/]), &(iParam1->f_189[1 /*3*/]));
		Var9 = { 925.9088f, 51.242f, 80.095f };
		Var10 = { 0f, 0f, 58f };
		sVar11 = __LIB_5__::func_550(iParam1, 6);
		iVar12 = __LIB_4__::func_192(__LIB_4__::func_189(iParam1));
		__LIB_3__::func_900(&(Global_1946250.f_3638), iVar12, "valet", Var9, Var10, iParam1->f_3, sVar11, 1, 0, 0, 0, 2);
	}
	else if (__LIB_3__::func_616() == 0)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iParam1->f_2))
		{
			func_1403(&(iParam1->f_2), PLAYER::PLAYER_ID(), 1, 1);
			return 0;
		}
		if ((__LIB_0__::func_121(iParam1->f_2) && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(iParam1->f_2)) && PED::HAS_PED_HEAD_BLEND_FINISHED(iParam1->f_2))
		{
			ENTITY::CREATE_MODEL_HIDE(__LIB_4__::func_132(-1805228339), 0.1f, __LIB_4__::func_133(-1805228339), false);
			iParam1->f_50 = OBJECT::CREATE_OBJECT(__LIB_4__::func_133(-1805228339), __LIB_4__::func_132(-1805228339), false, false, true);
			if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
			{
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iParam1->f_50))
			{
				return 0;
			}
			else
			{
				ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iParam1->f_50, __LIB_4__::func_132(-1805228339), false, false, false);
				ENTITY::SET_ENTITY_ROTATION(iParam1->f_50, 0f, 0f, -122f, 2, true);
				ENTITY::FREEZE_ENTITY_POSITION(iParam1->f_50, true);
				ENTITY::SET_ENTITY_COLLISION(iParam1->f_50, false, false);
			}
			ENTITY::SET_ENTITY_VISIBLE(iParam1->f_2, true, false);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_4__::func_133(-1805228339));
			__LIB_6__::func_27(&(Global_1946250.f_3638), 4000, "Enter_Casino", 916.7877f, 63.0506f, 81.6854f, 0.3236f, 0f, -151.6214f, 35.7535f, 916.9896f, 62.7016f, 81.6876f, 0.3236f, 0f, -149.9406f, 34.8284f, 0.1f, 0, 0, 0, 0, 0);
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_2660(var uParam0, var uParam1)//Position - 0xDAD15
{
	int iVar0;
	iVar0 = __LIB_3__::func_785();
	if (__LIB_3__::func_616() == 0 || __LIB_3__::func_616() == 2)
	{
		if (!__LIB_3__::func_998(PLAYER::PLAYER_ID()) || __LIB_3__::func_597())
		{
			if (!__LIB_3__::func_597())
			{
				if (__LIB_1__::func_744(PLAYER::PLAYER_ID()))
				{
					__LIB_8__::func_967(1, *uParam0);
				}
			}
			if (__LIB_1__::func_744(PLAYER::PLAYER_ID()))
			{
				__LIB_8__::func_967(1, *uParam0);
			}
			uParam1->f_8 = 1;
			uParam1->f_6 = 1;
			uParam1->f_9 = 1;
			uParam1->f_3 = 1;
			uParam1->f_10 = 0;
			uParam1->f_11 = 10;
			__LIB_5__::func_462();
			if (__LIB_3__::func_597())
			{
				uParam1->f_1 = 1;
			}
			return;
		}
	}
	if (__LIB_3__::func_597())
	{
		if ((__LIB_3__::func_616() == 3 || __LIB_3__::func_616() == 4) || __LIB_3__::func_616() == 1)
		{
			uParam1->f_8 = 1;
			uParam1->f_6 = 1;
			uParam1->f_9 = 1;
			uParam1->f_3 = 1;
			uParam1->f_1 = 1;
			uParam1->f_10 = 0;
			uParam1->f_11 = 10;
			__LIB_5__::func_462();
			return;
		}
	}
	switch (iVar0)
	{
		case 0:
			func_2664(uParam0, uParam1);
			break;
		case 4:
			__LIB_5__::func_882(*uParam0, uParam1);
			break;
		case 2:
		case 3:
		case 1:
		case 5:
			func_2661(uParam0, uParam1);
			break;
		default:
			break;
	}
}

void func_2661(var uParam0, var uParam1)//Position - 0xDAE53
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	int iVar5[3];
	var uVar6[3];
	char* sVar7;
	int iVar8;
	int iVar9;
	HUD::HIDE_HELP_TEXT_THIS_FRAME();
	uParam1->f_2 = 0;
	bVar0 = true;
	iVar1 = __LIB_3__::func_785();
	bVar0 = iVar1 != 5;
	func_557(*uParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &bVar2, &bVar3, bVar0, 0);
	sVar7 = __LIB_4__::func_155();
	iVar9 = 0;
	while (iVar9 < 3)
	{
		uVar6[iVar8] = __LIB_5__::func_207(iVar9);
		if (__LIB_3__::func_782(iVar9, bVar2, bVar3))
		{
			iVar5[iVar8] = iVar9;
			if (!bVar4 && !MISC::ARE_STRINGS_EQUAL(&(Global_23150.f_79[iVar8 /*6*/]), uVar6[iVar8]))
			{
				bVar4 = true;
			}
			iVar8++;
		}
		else if (!bVar4)
		{
			if (MISC::ARE_STRINGS_EQUAL(&(Global_23150.f_79[iVar8 /*6*/]), uVar6[iVar8]))
			{
				bVar4 = true;
			}
		}
		iVar9++;
	}
	if (uParam0->f_5 || bVar4)
	{
		__LIB_1__::func_602(0, 1);
		__LIB_1__::func_767("CASINO_ENT_T" /* GXT: THE DIAMOND CASINO & RESORT */);
		__LIB_3__::func_566(1, sVar7, sVar7);
		__LIB_5__::func_270();
		iVar9 = 0;
		while (iVar9 < iVar8)
		{
			__LIB_10__::func_18(iVar9, uVar6[iVar9], 0, 1, 0, 0, 0);
			iVar9++;
		}
		__LIB_7__::func_733(0, 1, 1);
	}
	else if (uParam0->f_2)
	{
		uParam1->f_6 = 1;
		if (__LIB_3__::func_785() == 1)
		{
			uParam1->f_8 = 1;
			uParam1->f_11 = 10;
			uParam1->f_1 = 1;
			__LIB_5__::func_462();
			if ((__LIB_3__::func_616() == 1 || __LIB_3__::func_616() == 3) || __LIB_3__::func_616() == 4)
			{
				__LIB_4__::func_143();
			}
			else
			{
				uParam1->f_10 = 1;
			}
			if (iVar5[uParam0->f_4] != 0)
			{
				__LIB_8__::func_967(iVar5[uParam0->f_4], 123);
			}
		}
		else if (__LIB_3__::func_785() == 5)
		{
			uParam1->f_11 = 22;
			uParam1->f_1 = 1;
			__LIB_5__::func_462();
			__LIB_4__::func_151(*uParam0, 146);
			if (iVar5[uParam0->f_4] != 0)
			{
				__LIB_8__::func_967(iVar5[uParam0->f_4], 146);
			}
		}
		else
		{
			uParam1->f_11 = 22;
			uParam1->f_1 = 1;
			__LIB_5__::func_462();
			__LIB_4__::func_151(*uParam0, 124);
			__LIB_5__::func_457(0);
			__LIB_3__::func_767(1);
			if (__LIB_3__::func_785() == 3)
			{
				__LIB_4__::func_143();
			}
			if (iVar5[uParam0->f_4] != 0)
			{
				__LIB_8__::func_967(iVar5[uParam0->f_4], 124);
			}
		}
	}
	else if (uParam0->f_3)
	{
		__LIB_5__::func_462();
	}
}

void func_2664(var uParam0, var uParam1)//Position - 0xDB0DD
{
	var uVar0;
	var uVar1[5];
	var uVar2[5];
	var uVar3[5];
	char* sVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	sVar4 = __LIB_4__::func_155();
	if (__LIB_3__::func_616() == 0)
	{
		uVar0 = __LIB_5__::func_554(&uVar1, &uVar2, &uVar3, &iVar5);
	}
	else
	{
		uVar0 = __LIB_8__::func_966(&uVar1, &uVar2, &uVar3, &iVar5);
	}
	if (uParam0->f_5 || uVar0)
	{
		__LIB_1__::func_602(0, 1);
		__LIB_1__::func_767("CASINO_ENT_T" /* GXT: THE DIAMOND CASINO & RESORT */);
		__LIB_3__::func_566(1, sVar4, sVar4);
		__LIB_5__::func_270();
		iVar6 = 0;
		while (iVar6 < iVar5)
		{
			__LIB_10__::func_18(iVar6, uVar3[iVar6], 0, uVar2[iVar6], 0, 0, 0);
			iVar6++;
		}
		__LIB_7__::func_733(0, 1, 1);
	}
	else
	{
		iVar7 = uParam0->f_4;
		if (__LIB_3__::func_616() == 0)
		{
			__LIB_1__::func_789(__LIB_4__::func_205(uVar1[iVar7], iVar7), 0, 0);
		}
		else
		{
			__LIB_1__::func_789(__LIB_5__::func_883(uVar1[iVar7], iVar7), 0, 0);
		}
		if (uParam0->f_2 && uVar2[iVar7])
		{
			if (__LIB_3__::func_616() == 0)
			{
				func_2666(*uParam0, iVar7, uParam1, uParam1);
			}
			else
			{
				func_2665(*uParam0, iVar7, uParam1, uParam1);
			}
		}
		else if (uParam0->f_3)
		{
			uParam1->f_4 = 1;
		}
	}
}

void func_2665(int iParam0, int iParam1, var uParam2, var uParam3)//Position - 0xDB1FA
{
	if (iParam1 == 0)
	{
		if (func_2478(iParam0, 0, 0))
		{
			__LIB_3__::func_784(1);
		}
		else
		{
			uParam3->f_8 = 1;
			uParam3->f_6 = 1;
			uParam3->f_11 = 10;
			uParam3->f_1 = 1;
			__LIB_4__::func_143();
		}
	}
	else if (iParam1 == 1)
	{
		__LIB_3__::func_664(0);
		if (func_2478(iParam0, 0, 0))
		{
			__LIB_3__::func_784(2);
		}
		else
		{
			uParam3->f_6 = 1;
			uParam3->f_11 = 22;
			uParam3->f_1 = 1;
			__LIB_4__::func_151(iParam0, 124);
			__LIB_5__::func_457(0);
			__LIB_3__::func_767(1);
		}
	}
	else if (iParam1 == 4)
	{
		if (func_2478(iParam0, 1, 0))
		{
			__LIB_3__::func_784(5);
		}
		else
		{
			uParam3->f_6 = 1;
			uParam3->f_11 = 22;
			uParam3->f_1 = 1;
			__LIB_4__::func_151(iParam0, 146);
		}
	}
	else if (iParam1 == 3)
	{
		__LIB_3__::func_784(4);
		__LIB_4__::func_143();
	}
	else
	{
		__LIB_3__::func_664(1);
		if (func_2478(iParam0, 0, 0))
		{
			__LIB_3__::func_784(3);
		}
		else
		{
			uParam3->f_6 = 1;
			uParam3->f_11 = 22;
			uParam3->f_1 = 1;
			__LIB_4__::func_151(iParam0, 124);
			__LIB_5__::func_457(0);
			__LIB_3__::func_767(1);
			__LIB_4__::func_143();
		}
	}
	*uParam2 = 1;
}

void func_2666(int iParam0, int iParam1, var uParam2, var uParam3)//Position - 0xDB302
{
	if (iParam1 == 0)
	{
		if (func_2478(iParam0, 0, 0))
		{
			__LIB_3__::func_784(1);
			*uParam2 = 1;
		}
		else
		{
			uParam3->f_8 = 1;
			uParam3->f_6 = 1;
			uParam3->f_10 = 1;
			uParam3->f_1 = 1;
			uParam3->f_11 = 10;
		}
	}
	else if (iParam1 == 1)
	{
		__LIB_3__::func_664(0);
		if (func_2478(iParam0, 0, 0))
		{
			__LIB_3__::func_784(2);
			*uParam2 = 1;
		}
		else
		{
			uParam3->f_6 = 1;
			uParam3->f_11 = 22;
			uParam3->f_1 = 1;
			__LIB_4__::func_151(iParam0, 124);
			__LIB_5__::func_457(0);
			__LIB_3__::func_767(1);
		}
	}
}

void func_2709(var uParam0, int iParam1)//Position - 0xDC791
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 938640/*func_2876*/;
			break;
		case 111:
			uParam0->f_35 = 938626/*func_2875*/;
			break;
		case 1:
			uParam0->f_30 = 938527/*func_2874*/;
			break;
		case 2:
			uParam0->f_31 = 937465/*func_2870*/;
			break;
		case 3:
			uParam0->f_34 = 937311/*func_2869*/;
			break;
		case 4:
			uParam0->f_12 = 937258/*func_2867*/;
			break;
		case 5:
			uParam0->f_11 = 937203/*func_2866*/;
			break;
		case 37:
			uParam0->f_18 = 937085/*func_2865*/;
			break;
		case 38:
			uParam0->f_9 = 936953/*func_2861*/;
			break;
		case 6:
			uParam0->f_32 = 936838/*func_2860*/;
			break;
		case 11:
			uParam0->f_11 = 936828/*func_2859*/;
			break;
		case 12:
			uParam0->f_33 = 935659/*func_2854*/;
			break;
		case 14:
			uParam0->f_11 = 935650/*func_2853*/;
			break;
		case 109:
			uParam0->f_56 = 934338/*func_2852*/;
			break;
		case 8:
			uParam0->f_37 = 934294/*func_2851*/;
			break;
		case 7:
			uParam0->f_36 = 934271/*func_2850*/;
			break;
		case 79:
			*uParam0 = 934247/*func_2849*/;
			break;
		case 13:
			uParam0->f_2 = 934184/*func_2848*/;
			break;
		case 15:
			uParam0->f_2 = 934104/*func_2847*/;
			break;
		case 16:
			uParam0->f_5 = 933460/*func_2843*/;
			break;
		case 108:
			uParam0->f_55 = 930320/*func_2830*/;
			break;
		case 17:
			uParam0->f_17 = 929619/*func_2829*/;
			break;
		case 19:
			uParam0->f_17 = 929593/*func_2828*/;
			break;
		case 20:
			uParam0->f_3 = 929414/*func_2827*/;
			break;
		case 21:
			uParam0->f_3 = 929350/*func_2826*/;
			break;
		case 74:
			uParam0->f_53 = 929076/*func_2824*/;
			break;
		case 75:
			uParam0->f_4 = 929060/*func_2823*/;
			break;
		case 22:
			uParam0->f_24 = 928957/*func_2822*/;
			break;
		case 23:
			uParam0->f_26 = 928910/*func_2821*/;
			break;
		case 24:
			uParam0->f_26 = 928873/*func_2820*/;
			break;
		case 26:
			uParam0->f_38 = 928046/*func_2813*/;
			break;
		case 25:
			uParam0->f_23 = 927680/*func_2810*/;
			break;
		case 27:
			uParam0->f_25 = 927298/*func_2808*/;
			break;
		case 28:
			uParam0->f_24 = 927247/*func_2807*/;
			break;
		case 29:
			uParam0->f_28 = 927239/*func_2806*/;
			break;
		case 30:
			uParam0->f_8 = 927002/*func_2802*/;
			break;
		case 31:
			uParam0->f_39 = 926881/*func_2801*/;
			break;
		case 33:
			uParam0->f_40 = 926461/*func_2800*/;
			break;
		case 34:
			uParam0->f_41 = 915167/*func_2786*/;
			break;
		case 36:
			uParam0->f_58 = 915122/*func_2785*/;
			break;
		case 35:
			uParam0->f_42 = 912035/*func_2782*/;
			break;
		case 45:
			uParam0->f_14 = 912026/*func_2781*/;
			break;
		case 46:
			uParam0->f_14 = 912017/*func_2780*/;
			break;
		case 110:
			uParam0->f_57 = 912009/*func_2779*/;
			break;
		case 77:
			uParam0->f_13 = 911960/*func_2778*/;
			break;
		case 47:
			uParam0->f_43 = 911878/*func_2777*/;
			break;
		case 48:
			uParam0->f_60 = 1;
			uParam0->f_44 = 911114/*func_2770*/;
			break;
		case 49:
			uParam0->f_8 = 911067/*func_2769*/;
			break;
		case 50:
			*uParam0 = 911008/*func_2768*/;
			break;
		case 51:
			*uParam0 = 910776/*func_2765*/;
			break;
		case 52:
			uParam0->f_15 = 910765/*func_2764*/;
			break;
		case 53:
			uParam0->f_13 = 910723/*func_2763*/;
			break;
		case 54:
			uParam0->f_45 = 910715/*func_2762*/;
			break;
		case 56:
			uParam0->f_46 = 910706/*func_2761*/;
			break;
		case 57:
			uParam0->f_11 = 910697/*func_2760*/;
			break;
		case 58:
			uParam0->f_13 = 910655/*func_2759*/;
			break;
		case 59:
			*uParam0 = 910646/*func_2758*/;
			break;
		case 60:
			*uParam0 = 910637/*func_2757*/;
			break;
		case 61:
			uParam0->f_15 = 910626/*func_2756*/;
			break;
		case 62:
			uParam0->f_13 = 910584/*func_2755*/;
			break;
		case 63:
			uParam0->f_11 = 910575/*func_2754*/;
			break;
		case 64:
			uParam0->f_47 = 910567/*func_2753*/;
			break;
		case 65:
			uParam0->f_21 = 909505/*func_2750*/;
			break;
		case 66:
			uParam0->f_21 = 909202/*func_2749*/;
			break;
		case 67:
			uParam0->f_21 = 909088/*func_2748*/;
			break;
		case 68:
			*uParam0 = 908245/*func_2747*/;
			break;
		case 69:
			*uParam0 = 908236/*func_2746*/;
			break;
		case 70:
			uParam0->f_48 = 908163/*func_2745*/;
			break;
		case 71:
			uParam0->f_49 = 908154/*func_2744*/;
			break;
		case 107:
			uParam0->f_50 = 908142/*func_2743*/;
			break;
		case 80:
			uParam0->f_7 = 907940/*func_2742*/;
			break;
		case 84:
			uParam0->f_1 = 907931/*func_2741*/;
			break;
		case 85:
			uParam0->f_1 = 906198/*func_2728*/;
			break;
		case 87:
			uParam0->f_1 = 904745/*func_2720*/;
			break;
		case 88:
			uParam0->f_1 = 904736/*func_2719*/;
			break;
		case 89:
			uParam0->f_54 = 904728/*func_2718*/;
			break;
		case 96:
			uParam0->f_1 = 904719/*func_2717*/;
			break;
		case 97:
			uParam0->f_1 = 904710/*func_2716*/;
			break;
		case 98:
			uParam0->f_1 = 904701/*func_2715*/;
			break;
		case 100:
			uParam0->f_22 = 904693/*func_2714*/;
			break;
		case 101:
			uParam0->f_22 = 904685/*func_2713*/;
			break;
		case 78:
			uParam0->f_59 = 904513/*func_2711*/;
			break;
		case 125:
			uParam0->f_19 = 904480/*func_2710*/;
			break;
	}
}

int func_2728(int iParam0, var uParam1)//Position - 0xDD3D6
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var2;
	var uVar3;
	struct<3> Var4;
	struct<3> Var5;
	var uVar6;
	struct<3> Var7;
	struct<3> Var8;
	var uVar9;
	struct<3> Var10;
	struct<3> Var11;
	var uVar12;
	bool bVar13;
	bool bVar14;
	if (__LIB_4__::func_977())
	{
		return 1;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
		}
		if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_109))
		{
			func_408(&iVar0, &(uParam1->f_109), 60);
			__LIB_3__::func_633(&(uParam1->f_109));
			VEHICLE::SET_DISABLE_MAP_COLLISION(uParam1->f_109);
			return 0;
		}
		else if (func_324(&iVar0, &(uParam1->f_109), &(uParam1->f_109.f_1), 1, 1, 0, 1, 0, 1))
		{
			VEHICLE::SET_DISABLE_MAP_COLLISION(uParam1->f_109);
		}
		else
		{
			return 0;
		}
		MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(uParam1->f_109), &(uParam1->f_189[2 /*3*/]), &(uParam1->f_189[1 /*3*/]));
		Var1 = { __LIB_4__::func_229(iParam0, __LIB_3__::func_616()) };
		Var2 = { __LIB_4__::func_228(iParam0, __LIB_3__::func_616()) };
		uVar3 = __LIB_4__::func_225(iParam0, __LIB_3__::func_616());
		Var4 = { __LIB_4__::func_227(iParam0, __LIB_3__::func_616()) };
		Var5 = { __LIB_4__::func_226(iParam0, __LIB_3__::func_616()) };
		uVar6 = __LIB_4__::func_225(iParam0, __LIB_3__::func_616());
		Var7 = { __LIB_4__::func_224(iParam0, __LIB_3__::func_616()) };
		Var8 = { __LIB_4__::func_223(iParam0, __LIB_3__::func_616()) };
		uVar9 = __LIB_4__::func_220(iParam0, __LIB_3__::func_616());
		Var10 = { __LIB_4__::func_222(iParam0, __LIB_3__::func_616()) };
		Var11 = { __LIB_4__::func_221(iParam0, __LIB_3__::func_616()) };
		uVar12 = __LIB_4__::func_220(iParam0, __LIB_3__::func_616());
		bVar13 = VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(iVar0));
		bVar14 = !(uParam1->f_189[1 /*3*/].f_1 - uParam1->f_189[2 /*3*/].f_1) > 7f;
		if (bVar13)
		{
			MISC::SET_BIT(&(uParam1->f_188), 5);
		}
		else
		{
			MISC::CLEAR_BIT(&(uParam1->f_188), 5);
		}
		return __LIB_6__::func_820(&(Global_1946250.f_3638), Var1, Var2, uVar3, Var4, Var5, uVar6, bVar13, Var7, Var8, uVar9, Var10, Var11, uVar12, bVar14, 1056964608, 1036831949);
	}
	return 1;
}

void func_2810(int iParam0, int iParam1)//Position - 0xE27C0
{
	bool bVar0;
	bool bVar1;
	struct<3> Var2;
	Var2 = { __LIB_4__::func_252(iParam0) };
	if (__LIB_6__::func_897(PLAYER::PLAYER_ID(), iParam0))
	{
		if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
		{
			Var2 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		}
		func_557(iParam0, Var2, &bVar0, &bVar1, 1, 0);
		if (bVar1)
		{
			__LIB_5__::func_189(iParam1, 1, 1);
		}
		else
		{
			__LIB_5__::func_189(iParam1, 1, 0);
		}
		if (bVar0)
		{
			__LIB_5__::func_189(iParam1, 2, 1);
		}
		else
		{
			__LIB_5__::func_189(iParam1, 2, 0);
		}
		if ((bVar1 || bVar0) && !__LIB_3__::func_779())
		{
			__LIB_6__::func_896(iParam0, -1);
		}
		if (__LIB_3__::func_661(0, iParam1))
		{
			__LIB_6__::func_896(iParam0, -1);
		}
		else if (__LIB_3__::func_661(1, iParam1))
		{
			if (bVar1)
			{
				__LIB_7__::func_831(PLAYER::PLAYER_ID(), iParam0, Var2, 1, 0, 0, 0, -1, -1, -1);
			}
			__LIB_7__::func_809(iParam0);
		}
		else if (__LIB_3__::func_661(2, iParam1))
		{
			if (bVar0)
			{
				__LIB_7__::func_831(PLAYER::PLAYER_ID(), iParam0, Var2, 0, 0, 1, 0, -1, -1, -1);
			}
			__LIB_7__::func_809(iParam0);
		}
	}
	else
	{
		__LIB_5__::func_189(iParam1, 1, 0);
		__LIB_5__::func_189(iParam1, 2, 0);
	}
}

void func_2813(var uParam0, var uParam1)//Position - 0xE292E
{
	if (__LIB_3__::func_929(PLAYER::PLAYER_ID()))
	{
		func_2814(uParam0, uParam1);
	}
}

void func_2814(var uParam0, var uParam1)//Position - 0xE294C
{
	int iVar0;
	iVar0 = __LIB_3__::func_785();
	switch (iVar0)
	{
		case 0:
			__LIB_10__::func_54(uParam0, uParam1);
			break;
		case 1:
			func_2815(uParam0, uParam1);
			break;
		default:
			break;
	}
}

void func_2815(var uParam0, var uParam1)//Position - 0xE2986
{
	int iVar0;
	int iVar1;
	bool bVar2;
	HUD::HIDE_HELP_TEXT_THIS_FRAME();
	func_557(*uParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &iVar0, &iVar1, 1, 0);
	bVar2 = (iVar0 || iVar1);
	if (!bVar2)
	{
		uParam1->f_8 = 1;
		uParam1->f_6 = 1;
		uParam1->f_11 = 10;
		__LIB_5__::func_462();
		if (!__LIB_4__::func_251())
		{
			*uParam1 = 1;
			uParam1->f_9 = 1;
		}
		return;
	}
	if (uParam0->f_3 && !uParam0->f_5)
	{
		*uParam1 = 1;
		__LIB_5__::func_462();
		if (!__LIB_4__::func_251())
		{
			uParam1->f_4 = 1;
		}
	}
	else
	{
		uParam1->f_2 = 1;
		if (uParam0->f_5)
		{
			uParam1->f_3 = 1;
			__LIB_1__::func_767("ARENA_ENT_T" /* GXT: ARENA WORKSHOP */);
		}
		else if (uParam0->f_2)
		{
			uParam1->f_8 = 1;
			uParam1->f_5 = 1;
			__LIB_5__::func_462();
		}
	}
}

void func_2877(var uParam0, int iParam1)//Position - 0xE5299
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1030673/*func_3021*/;
			break;
		case 1:
			uParam0->f_30 = 1030617/*func_3020*/;
			break;
		case 2:
			uParam0->f_31 = 1030273/*func_3019*/;
			break;
		case 3:
			uParam0->f_34 = 1030234/*func_3018*/;
			break;
		case 4:
			uParam0->f_12 = 1030201/*func_3017*/;
			break;
		case 5:
			uParam0->f_11 = 1030190/*func_3016*/;
			break;
		case 6:
			uParam0->f_32 = 1030126/*func_3015*/;
			break;
		case 111:
			uParam0->f_35 = 1030103/*func_3014*/;
			break;
		case 79:
			*uParam0 = 1030079/*func_3013*/;
			break;
		case 37:
			uParam0->f_18 = 1029961/*func_3012*/;
			break;
		case 38:
			uParam0->f_9 = 1029882/*func_3011*/;
			break;
		case 11:
			uParam0->f_11 = 1029873/*func_3010*/;
			break;
		case 12:
			uParam0->f_33 = 1029277/*func_3007*/;
			break;
		case 109:
			uParam0->f_56 = 1029269/*func_3006*/;
			break;
		case 15:
			uParam0->f_2 = 1024073/*func_2981*/;
			break;
		case 13:
			uParam0->f_2 = 1024064/*func_2980*/;
			break;
		case 75:
			uParam0->f_4 = 1024049/*func_2979*/;
			break;
		case 16:
			uParam0->f_5 = 1023574/*func_2975*/;
			break;
		case 108:
			uParam0->f_55 = 1019604/*func_2959*/;
			break;
		case 17:
			uParam0->f_17 = 1018828/*func_2958*/;
			break;
		case 19:
			uParam0->f_17 = 1018802/*func_2957*/;
			break;
		case 20:
			uParam0->f_3 = 1018591/*func_2956*/;
			break;
		case 21:
			uParam0->f_3 = 1018428/*func_2955*/;
			break;
		case 74:
			uParam0->f_53 = 1017819/*func_2952*/;
			break;
		case 22:
			uParam0->f_24 = 1017737/*func_2951*/;
			break;
		case 25:
			uParam0->f_23 = 1016821/*func_2948*/;
			break;
		case 30:
			uParam0->f_8 = 1015570/*func_2939*/;
			break;
		case 31:
			uParam0->f_39 = 1014895/*func_2935*/;
			break;
		case 33:
			uParam0->f_40 = 1013992/*func_2932*/;
			break;
		case 14:
			uParam0->f_11 = 1013983/*func_2931*/;
			break;
		case 34:
			uParam0->f_41 = 1013208/*func_2928*/;
			break;
		case 36:
			uParam0->f_58 = 1013155/*func_2927*/;
			break;
		case 35:
			uParam0->f_42 = 944386/*func_2915*/;
			break;
		case 45:
			uParam0->f_14 = 944377/*func_2914*/;
			break;
		case 46:
			uParam0->f_14 = 944368/*func_2913*/;
			break;
		case 110:
			uParam0->f_57 = 944360/*func_2912*/;
			break;
		case 77:
			uParam0->f_13 = 944337/*func_2911*/;
			break;
		case 47:
			uParam0->f_43 = 944197/*func_2910*/;
			break;
		case 49:
			uParam0->f_8 = 944162/*func_2909*/;
			break;
		case 50:
			*uParam0 = 944124/*func_2908*/;
			break;
		case 51:
			*uParam0 = 944100/*func_2907*/;
			break;
		case 52:
			uParam0->f_15 = 944089/*func_2906*/;
			break;
		case 53:
			uParam0->f_13 = 944010/*func_2905*/;
			break;
		case 54:
			uParam0->f_45 = 944002/*func_2904*/;
			break;
		case 56:
			uParam0->f_46 = 943993/*func_2903*/;
			break;
		case 57:
			uParam0->f_11 = 943983/*func_2902*/;
			break;
		case 58:
			uParam0->f_13 = 943694/*func_2901*/;
			break;
		case 64:
			uParam0->f_47 = 942153/*func_2894*/;
			break;
		case 65:
			uParam0->f_21 = 941190/*func_2891*/;
			break;
		case 66:
			uParam0->f_21 = 940995/*func_2890*/;
			break;
		case 67:
			uParam0->f_21 = 940892/*func_2889*/;
			break;
		case 68:
			*uParam0 = 940203/*func_2888*/;
			break;
		case 69:
			*uParam0 = 940194/*func_2887*/;
			break;
		case 70:
			uParam0->f_48 = 940182/*func_2886*/;
			break;
		case 71:
			uParam0->f_49 = 940173/*func_2885*/;
			break;
		case 107:
			uParam0->f_50 = 940161/*func_2884*/;
			break;
		case 80:
			uParam0->f_7 = 939787/*func_2881*/;
			break;
		case 73:
			uParam0->f_51 = 939778/*func_2880*/;
			break;
		case 78:
			uParam0->f_59 = 939661/*func_2878*/;
			break;
	}
}

void func_2948(int iParam0, int iParam1)//Position - 0xF83F5
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5[10];
	struct<3> Var6;
	int iVar7;
	struct<13> Var8;
	bool bVar9;
	iVar4 = -1;
	if (__LIB_9__::func_306(PLAYER::PLAYER_ID(), iParam0))
	{
		if (__LIB_1__::func_526())
		{
			iVar4 = __LIB_3__::func_680();
		}
		Var6 = { __LIB_1__::func_694(PLAYER::PLAYER_ID()) };
		iVar3 = PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uVar5, -1);
		if (iVar3 > 0)
		{
			iVar2 = 0;
			while (iVar2 < iVar3)
			{
				if (!ENTITY::IS_ENTITY_DEAD(uVar5[iVar2], false) && PED::IS_PED_A_PLAYER(uVar5[iVar2]))
				{
					if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(uVar5[iVar2], true), Var6) <= IntToFloat(__LIB_3__::func_679(iParam0)))
					{
						iVar7 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(uVar5[iVar2]);
						Var8 = { __LIB_1__::func_696(iVar7) };
						if (!bVar0)
						{
							if ((iVar4 != -1 && iVar4 == __LIB_3__::func_106(&Var8)) || NETWORK::NETWORK_IS_FRIEND(&Var8))
							{
								if (((!__LIB_1__::func_101(PLAYER::GET_PLAYER_PED(iVar7)) && !__LIB_1__::func_907(iVar7, 1)) && !__LIB_5__::func_424(iVar7)) && !__LIB_3__::func_728(iVar7, 14))
								{
									bVar0 = true;
								}
							}
						}
						if (((((!bVar1 && __LIB_3__::func_360(PLAYER::PLAYER_ID(), iVar7)) && !__LIB_1__::func_101(PLAYER::GET_PLAYER_PED(iVar7))) && !__LIB_1__::func_907(iVar7, 1)) && !__LIB_5__::func_424(iVar7)) && !__LIB_3__::func_728(iVar7, 14))
						{
							bVar1 = true;
						}
						if ((!bVar1 && __LIB_7__::func_22(PLAYER::PLAYER_ID())) && __LIB_3__::func_360(iVar7, PLAYER::PLAYER_ID()))
						{
							bVar1 = true;
						}
					}
					if (bVar1 && bVar0)
					{
					}
					else
					{
						iVar2++;
					}
					if (bVar1)
					{
						__LIB_5__::func_189(iParam1, 1, 1);
					}
					else
					{
						__LIB_5__::func_189(iParam1, 1, 0);
					}
					if (bVar0)
					{
						__LIB_5__::func_189(iParam1, 2, 1);
					}
					else
					{
						__LIB_5__::func_189(iParam1, 2, 0);
					}
					if (((bVar1 || bVar0) && !__LIB_3__::func_779()) && !__LIB_5__::func_241(PLAYER::PLAYER_ID()))
					{
						__LIB_9__::func_305(iParam0, -1);
					}
					bVar9 = __LIB_1__::func_637(PLAYER::PLAYER_ID());
					if (__LIB_3__::func_661(0, iParam1))
					{
						__LIB_9__::func_305(iParam0, -1);
					}
					else if (__LIB_3__::func_661(1, iParam1))
					{
						if (bVar1)
						{
							__LIB_8__::func_855(1);
							__LIB_7__::func_831(PLAYER::PLAYER_ID(), iParam0, Var6, 1, 0, 0, bVar9, Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_7, -1, -1);
						}
						if (!__LIB_4__::func_947(PLAYER::PLAYER_ID()))
						{
							func_2949(iParam0);
						}
					}
					else if (__LIB_3__::func_661(2, iParam1))
					{
						if (bVar0)
						{
							__LIB_8__::func_855(1);
							__LIB_7__::func_831(PLAYER::PLAYER_ID(), iParam0, Var6, 0, 0, 1, bVar9, Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_7, -1, -1);
						}
						if (!__LIB_4__::func_947(PLAYER::PLAYER_ID()))
						{
							func_2949(iParam0);
						}
					}
					Jump @693; //curOff = 674
					__LIB_5__::func_189(iParam1, 1, 0);
					__LIB_5__::func_189(iParam1, 2, 0);
				}
void func_2949(int iParam0)//Position - 0xF86AD
{
	__LIB_9__::func_305(iParam0, -1);
	Global_1946250.f_504 = -1;
	__LIB_5__::func_947(1, iParam0);
	Global_1946250.f_3607 = 0;
	Global_1946250.f_3612 = 1;
}

void func_3022(var uParam0, int iParam1)//Position - 0xFBA1A
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1093759/*func_3252*/;
			break;
		case 1:
			uParam0->f_30 = 1093519/*func_3250*/;
			break;
		case 2:
			uParam0->f_31 = 1091218/*func_3244*/;
			break;
		case 3:
			uParam0->f_34 = 1091009/*func_3243*/;
			break;
		case 4:
			uParam0->f_12 = 1090803/*func_3241*/;
			break;
		case 5:
			uParam0->f_11 = 1090725/*func_3240*/;
			break;
		case 37:
			uParam0->f_18 = 1090586/*func_3239*/;
			break;
		case 38:
			uParam0->f_9 = 1090530/*func_3238*/;
			break;
		case 42:
			uParam0->f_10 = 1090369/*func_3235*/;
			break;
		case 6:
			uParam0->f_32 = 1090133/*func_3234*/;
			break;
		case 111:
			uParam0->f_35 = 1090119/*func_3233*/;
			break;
		case 11:
			uParam0->f_11 = 1090110/*func_3232*/;
			break;
		case 12:
			uParam0->f_33 = 1086740/*func_3223*/;
			break;
		case 14:
			uParam0->f_11 = 1086731/*func_3222*/;
			break;
		case 109:
			uParam0->f_56 = 1073040/*func_3221*/;
			break;
		case 79:
			*uParam0 = 1072784/*func_3217*/;
			break;
		case 13:
			uParam0->f_2 = 1072735/*func_3216*/;
			break;
		case 15:
			uParam0->f_2 = 1072524/*func_3213*/;
			break;
		case 44:
			*uParam0 = 1072515/*func_3212*/;
			break;
		case 75:
			uParam0->f_4 = 1072486/*func_3211*/;
			break;
		case 16:
			uParam0->f_5 = 1071759/*func_3208*/;
			break;
		case 108:
			uParam0->f_55 = 1067905/*func_3195*/;
			break;
		case 17:
			uParam0->f_17 = 1066592/*func_3191*/;
			break;
		case 19:
			uParam0->f_17 = 1066547/*func_3190*/;
			break;
		case 20:
			uParam0->f_3 = 1066382/*func_3189*/;
			break;
		case 21:
			uParam0->f_3 = 1066318/*func_3188*/;
			break;
		case 74:
			uParam0->f_53 = 1066091/*func_3187*/;
			break;
		case 22:
			uParam0->f_24 = 1065968/*func_3186*/;
			break;
		case 26:
			uParam0->f_38 = 1062589/*func_3160*/;
			break;
		case 25:
			uParam0->f_23 = 1062268/*func_3158*/;
			break;
		case 27:
			uParam0->f_25 = 1061120/*func_3149*/;
			break;
		case 28:
			uParam0->f_24 = 1061008/*func_3148*/;
			break;
		case 29:
			uParam0->f_28 = 1060927/*func_3147*/;
			break;
		case 30:
			uParam0->f_8 = 1060037/*func_3145*/;
			break;
		case 31:
			uParam0->f_39 = 1059490/*func_3143*/;
			break;
		case 33:
			uParam0->f_40 = 1058808/*func_3141*/;
			break;
		case 32:
			*uParam0 = 1058715/*func_3139*/;
			break;
		case 34:
			uParam0->f_41 = 1049449/*func_3124*/;
			break;
		case 36:
			uParam0->f_58 = 1049391/*func_3123*/;
			break;
		case 35:
			uParam0->f_42 = 945255/*func_2918*/;
			break;
		case 45:
			uParam0->f_14 = 1049382/*func_3122*/;
			break;
		case 46:
			uParam0->f_14 = 1049373/*func_3121*/;
			break;
		case 110:
			uParam0->f_57 = 1049365/*func_3120*/;
			break;
		case 77:
			uParam0->f_13 = 1049316/*func_3119*/;
			break;
		case 47:
			uParam0->f_43 = 1049024/*func_3118*/;
			break;
		case 48:
			uParam0->f_60 = 1;
			uParam0->f_44 = 1045998/*func_3094*/;
			break;
		case 49:
			uParam0->f_8 = 1045894/*func_3093*/;
			break;
		case 50:
			*uParam0 = 1045611/*func_3092*/;
			break;
		case 51:
			*uParam0 = 1045449/*func_3091*/;
			break;
		case 52:
			uParam0->f_15 = 1045438/*func_3090*/;
			break;
		case 53:
			uParam0->f_13 = 1045180/*func_3089*/;
			break;
		case 54:
			uParam0->f_45 = 1044918/*func_3088*/;
			break;
		case 56:
			uParam0->f_46 = 1044909/*func_3087*/;
			break;
		case 57:
			uParam0->f_11 = 1043752/*func_3080*/;
			break;
		case 58:
			uParam0->f_13 = 1043494/*func_3079*/;
			break;
		case 59:
			*uParam0 = 1043215/*func_3076*/;
			break;
		case 60:
			*uParam0 = 1043206/*func_3075*/;
			break;
		case 61:
			uParam0->f_15 = 1043195/*func_3074*/;
			break;
		case 62:
			uParam0->f_13 = 1042937/*func_3073*/;
			break;
		case 55:
			uParam0->f_45 = 1042929/*func_3072*/;
			break;
		case 63:
			uParam0->f_11 = 1042871/*func_3071*/;
			break;
		case 64:
			uParam0->f_47 = 1042721/*func_3070*/;
			break;
		case 65:
			uParam0->f_21 = 1041015/*func_3063*/;
			break;
		case 66:
			uParam0->f_21 = 1040704/*func_3062*/;
			break;
		case 67:
			uParam0->f_21 = 1040552/*func_3061*/;
			break;
		case 68:
			*uParam0 = 1039552/*func_3058*/;
			break;
		case 69:
			*uParam0 = 1039543/*func_3057*/;
			break;
		case 70:
			uParam0->f_48 = 1039094/*func_3056*/;
			break;
		case 71:
			uParam0->f_49 = 1038815/*func_3055*/;
			break;
		case 107:
			uParam0->f_50 = 1038803/*func_3054*/;
			break;
		case 80:
			uParam0->f_7 = 1038570/*func_3053*/;
			break;
		case 84:
			uParam0->f_1 = 1038561/*func_3052*/;
			break;
		case 85:
			uParam0->f_1 = 1036466/*func_3043*/;
			break;
		case 87:
			uParam0->f_1 = 1033571/*func_3034*/;
			break;
		case 88:
			uParam0->f_1 = 1033562/*func_3033*/;
			break;
		case 89:
			uParam0->f_54 = 1033554/*func_3032*/;
			break;
		case 96:
			uParam0->f_1 = 1033528/*func_3031*/;
			break;
		case 97:
			uParam0->f_1 = 1033419/*func_3030*/;
			break;
		case 98:
			uParam0->f_1 = 1032708/*func_3029*/;
			break;
		case 100:
			uParam0->f_22 = 1032546/*func_3028*/;
			break;
		case 101:
			uParam0->f_22 = 1032419/*func_3027*/;
			break;
		case 78:
			uParam0->f_59 = 1032127/*func_3024*/;
			break;
		case 125:
			uParam0->f_19 = 1032103/*func_3023*/;
			break;
	}
}

int func_3029(var uParam0, var uParam1)//Position - 0xFC204
{
	struct<3> Var0;
	struct<3> Var1;
	char* sVar2;
	int iVar3;
	Var0 = { -1560.336f, -3019.0583f, -74.8061f };
	Var1 = { 0f, 0f, -30f };
	sVar2 = "mini@strip_club@throwout_d@";
	if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_140[0]))
	{
		uParam1->f_140[0] = PED::CREATE_PED(4, joaat("S_M_Y_ClubBar_01"), Var0 + Vector(-10f, 0f, 0f), 0f, false, true);
		PED::SET_PED_DEFAULT_COMPONENT_VARIATION(uParam1->f_140[0]);
		ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_140[0], true);
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_140[1]))
	{
		uParam1->f_140[1] = PED::CREATE_PED(4, joaat("S_M_M_Bouncer_01"), Var0 + Vector(-10f, 0f, 0f), 0f, false, true);
		PED::SET_PED_DEFAULT_COMPONENT_VARIATION(uParam1->f_140[1]);
		PED::SET_PED_COMPONENT_VARIATION(uParam1->f_140[1], 0, 0, 2, 0);
		PED::SET_PED_COMPONENT_VARIATION(uParam1->f_140[1], 2, 1, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(uParam1->f_140[1], 3, 1, 1, 0);
		PED::SET_PED_COMPONENT_VARIATION(uParam1->f_140[1], 4, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(uParam1->f_140[1], 11, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(uParam1->f_140[1], 8, 1, 0, 0);
		ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_140[1], true);
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_140[2]))
	{
		func_1403(&(uParam1->f_140[2]), PLAYER::PLAYER_ID(), 1, 0);
		ENTITY::SET_ENTITY_COORDS(uParam1->f_140[2], Var0 + Vector(-10f, 0f, 0f), false, false, false, true);
		ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_140[2], true);
		return 0;
	}
	iVar3 = 0;
	while (iVar3 < 3)
	{
		if (__LIB_0__::func_121(uParam1->f_140[iVar3]))
		{
			if (!PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(uParam1->f_140[iVar3]))
			{
				return 0;
			}
		}
		iVar3++;
	}
	MISC::SET_BIT(&(Global_1946250.f_2), 20);
	Var0 = { Var0 + Vector(0f, 4f, 0f) };
	__LIB_3__::func_900(&(Global_1946250.f_4073), 5000, "Club Tout", Var0, Var1, sVar2, "throwout_d_cam", 0, 0, 0, 0, 2);
	NETWORK::SET_ENTITY_VISIBLE_IN_CUTSCENE(PLAYER::PLAYER_PED_ID(), true, true);
	__LIB_1__::func_376(PLAYER::PLAYER_ID(), 0, 262144, 0);
	uParam1->f_27 = PED::CREATE_SYNCHRONIZED_SCENE(Var0, Var1, 2);
	if (__LIB_0__::func_121(uParam1->f_140[0]))
	{
		ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_140[0], false);
		TASK::TASK_SYNCHRONIZED_SCENE(uParam1->f_140[0], uParam1->f_27, sVar2, "throwout_d_bouncer_a", 1000f, -2f, 0, 0, 1000f, 0);
	}
	if (__LIB_0__::func_121(uParam1->f_140[1]))
	{
		ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_140[1], false);
		TASK::TASK_SYNCHRONIZED_SCENE(uParam1->f_140[1], uParam1->f_27, sVar2, "throwout_d_bouncer_b", 1000f, -2f, 0, 0, 1000f, 0);
	}
	if (__LIB_0__::func_121(uParam1->f_140[2]))
	{
		ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_140[2], false);
		TASK::TASK_SYNCHRONIZED_SCENE(uParam1->f_140[2], uParam1->f_27, sVar2, "throwout_d_victim", 1000f, -2f, 0, 0, 1000f, 0);
	}
	return 1;
}

int func_3043(int iParam0, var uParam1)//Position - 0xFD0B2
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	struct<3> Var3;
	float fVar4;
	float fVar5;
	bool bVar6;
	struct<3> Var7;
	struct<3> Var8;
	float fVar9;
	iVar0 = __LIB_4__::func_322(iParam0);
	if (__LIB_4__::func_980(iVar0))
	{
		return 1;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar1 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
		}
		if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_109))
		{
			func_408(&iVar1, &(uParam1->f_109), 60);
			__LIB_3__::func_633(&(uParam1->f_109));
			VEHICLE::SET_DISABLE_MAP_COLLISION(uParam1->f_109);
			return 0;
		}
		else if (func_324(&iVar1, &(uParam1->f_109), &(uParam1->f_109.f_1), 1, 1, 0, 0, 0, 1))
		{
			VEHICLE::SET_DISABLE_MAP_COLLISION(uParam1->f_109);
		}
		else
		{
			return 0;
		}
		Var2 = { __LIB_4__::func_329(iVar0) };
		Var3 = { __LIB_4__::func_328(iVar0) };
		fVar4 = __LIB_4__::func_327(iVar0);
		fVar5 = __LIB_4__::func_326(iVar0);
		bVar6 = false;
		Var7 = { __LIB_4__::func_325(iVar0) };
		Var8 = { __LIB_4__::func_324(iVar0) };
		fVar9 = __LIB_4__::func_323(iVar0);
		return __LIB_6__::func_423(&(Global_1946250.f_3638), Var2, Var3, fVar4, fVar5, bVar6, Var7, Var8, fVar9);
	}
	return 1;
}

void func_3158(int iParam0, int iParam1)//Position - 0x10357C
{
	bool bVar0;
	bool bVar1;
	struct<3> Var2;
	Var2 = { __LIB_4__::func_301(iParam0) };
	if (__LIB_6__::func_903(PLAYER::PLAYER_ID(), iParam0))
	{
		if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
		{
			Var2 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		}
		func_557(iParam0, Var2, &bVar0, &bVar1, 1, 0);
		if (bVar1)
		{
			__LIB_5__::func_189(iParam1, 1, 1);
		}
		else
		{
			__LIB_5__::func_189(iParam1, 1, 0);
		}
		if (bVar0)
		{
			__LIB_5__::func_189(iParam1, 2, 1);
		}
		else
		{
			__LIB_5__::func_189(iParam1, 2, 0);
		}
		if ((bVar1 || bVar0) && !__LIB_3__::func_779())
		{
			__LIB_7__::func_59(iParam0, -1);
		}
		if (__LIB_3__::func_661(0, iParam1))
		{
			__LIB_7__::func_59(iParam0, -1);
		}
		else if (__LIB_3__::func_661(1, iParam1))
		{
			if (bVar1)
			{
				__LIB_7__::func_831(PLAYER::PLAYER_ID(), iParam0, Var2, 1, 0, 0, 0, -1, -1, -1);
			}
			__LIB_7__::func_850(iParam0);
		}
		else if (__LIB_3__::func_661(2, iParam1))
		{
			if (bVar0)
			{
				__LIB_7__::func_831(PLAYER::PLAYER_ID(), iParam0, Var2, 0, 0, 1, 0, -1, -1, -1);
			}
			__LIB_7__::func_850(iParam0);
		}
	}
	else
	{
		__LIB_5__::func_189(iParam1, 1, 0);
		__LIB_5__::func_189(iParam1, 2, 0);
	}
}

void func_3160(var uParam0, var uParam1)//Position - 0x1036BD
{
	if (__LIB_3__::func_616() == 2)
	{
		func_3174(uParam0, uParam1);
	}
	else if (__LIB_3__::func_616() == 0)
	{
		if (__LIB_2__::func_72(PLAYER::PLAYER_ID(), 0))
		{
			__LIB_7__::func_851(uParam0, uParam1);
		}
		else
		{
			func_3162(uParam0, uParam1);
		}
	}
	else if (__LIB_3__::func_616() == 3)
	{
		if (__LIB_2__::func_72(PLAYER::PLAYER_ID(), 0))
		{
			__LIB_7__::func_851(uParam0, uParam1);
		}
		else
		{
			__LIB_4__::func_376(uParam1);
		}
	}
}

void func_3162(var uParam0, var uParam1)//Position - 0x103748
{
	int iVar0;
	iVar0 = __LIB_3__::func_785();
	switch (iVar0)
	{
		case 0:
			__LIB_10__::func_55(uParam0, uParam1);
			break;
		case 1:
			func_3163(uParam0, uParam1);
			break;
		default:
			break;
	}
}

void func_3163(var uParam0, var uParam1)//Position - 0x103782
{
	int iVar0;
	int iVar1;
	bool bVar2;
	HUD::HIDE_HELP_TEXT_THIS_FRAME();
	func_557(*uParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &iVar0, &iVar1, __LIB_5__::func_576(PLAYER::PLAYER_ID()), 0);
	bVar2 = (iVar0 || iVar1);
	if (!bVar2)
	{
		uParam1->f_8 = 1;
		uParam1->f_6 = 1;
		uParam1->f_11 = 10;
		__LIB_5__::func_462();
		if (!__LIB_4__::func_375())
		{
			*uParam1 = 1;
			uParam1->f_9 = 1;
		}
		return;
	}
	if (uParam0->f_3 && !uParam0->f_5)
	{
		*uParam1 = 1;
		__LIB_5__::func_462();
		if (!__LIB_4__::func_375())
		{
			uParam1->f_4 = 1;
		}
	}
	else
	{
		uParam1->f_2 = 1;
		if (uParam0->f_5)
		{
			uParam1->f_3 = 1;
			if (__LIB_3__::func_616() == 2)
			{
				__LIB_1__::func_767("CLUB_TITLE" /* GXT: NIGHTCLUB */);
			}
			else
			{
				__LIB_1__::func_767("HUB_TITLE_2" /* GXT: NIGHTCLUB GARAGE */);
			}
		}
		else if (uParam0->f_2)
		{
			uParam1->f_8 = 1;
			uParam1->f_5 = 1;
			__LIB_5__::func_462();
		}
	}
}

void func_3174(var uParam0, var uParam1)//Position - 0x103C9C
{
	int iVar0;
	iVar0 = __LIB_3__::func_785();
	switch (iVar0)
	{
		case 0:
			__LIB_10__::func_56(uParam0, uParam1);
			break;
		case 1:
			func_3183(uParam0, uParam1);
			break;
		case 2:
			__LIB_10__::func_760(uParam0, uParam1);
			break;
		default:
			break;
	}
}

void func_3183(var uParam0, var uParam1)//Position - 0x10414A
{
	int iVar0;
	int iVar1;
	bool bVar2;
	HUD::HIDE_HELP_TEXT_THIS_FRAME();
	func_557(*uParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &iVar0, &iVar1, 1, 0);
	bVar2 = (iVar0 || iVar1);
	if (!bVar2)
	{
		uParam1->f_8 = 1;
		uParam1->f_6 = 1;
		uParam1->f_9 = 1;
		*uParam1 = 1;
		uParam1->f_11 = 10;
		MISC::SET_BIT(&(Global_1946250.f_3), 9);
		__LIB_5__::func_462();
		return;
	}
	if (uParam0->f_3 && !uParam0->f_5)
	{
		__LIB_5__::func_462();
		if (__LIB_8__::func_931(*uParam0))
		{
			*uParam1 = 1;
		}
		else
		{
			uParam1->f_4 = 1;
		}
	}
	else
	{
		uParam1->f_2 = 1;
		if (uParam0->f_5)
		{
			uParam1->f_3 = 1;
			if (__LIB_3__::func_616() == 2)
			{
				__LIB_1__::func_767("CLUB_TITLE" /* GXT: NIGHTCLUB */);
			}
			else
			{
				__LIB_1__::func_767("HUB_TITLE_2" /* GXT: NIGHTCLUB GARAGE */);
			}
		}
		else if (uParam0->f_2)
		{
			uParam1->f_5 = 1;
			MISC::SET_BIT(&(Global_1946250.f_3), 9);
			__LIB_7__::func_59(*uParam0, -1);
			__LIB_5__::func_462();
		}
	}
}

void func_3253(var uParam0, int iParam1)//Position - 0x10B088
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1101285/*func_3330*/;
			break;
		case 1:
			uParam0->f_30 = 1101229/*func_3329*/;
			break;
		case 2:
			uParam0->f_31 = 1100960/*func_3328*/;
			break;
		case 3:
			uParam0->f_34 = 1100899/*func_3327*/;
			break;
		case 4:
			uParam0->f_12 = 1100868/*func_3326*/;
			break;
		case 6:
			uParam0->f_32 = 1100804/*func_3325*/;
			break;
		case 111:
			uParam0->f_35 = 1100795/*func_3324*/;
			break;
		case 11:
			uParam0->f_11 = 1100786/*func_3323*/;
			break;
		case 14:
			uParam0->f_11 = 1100777/*func_3322*/;
			break;
		case 12:
			uParam0->f_33 = 1100566/*func_3320*/;
			break;
		case 109:
			uParam0->f_56 = 1100558/*func_3319*/;
			break;
		case 79:
			*uParam0 = 1100534/*func_3318*/;
			break;
		case 13:
			uParam0->f_2 = 1100525/*func_3317*/;
			break;
		case 15:
			uParam0->f_2 = 1099583/*func_3310*/;
			break;
		case 75:
			uParam0->f_4 = 1099574/*func_3309*/;
			break;
		case 16:
			uParam0->f_5 = 1099549/*func_3308*/;
			break;
		case 108:
			uParam0->f_55 = 1099540/*func_3307*/;
			break;
		case 17:
			uParam0->f_17 = 1099515/*func_3306*/;
			break;
		case 19:
			uParam0->f_17 = 1099504/*func_3305*/;
			break;
		case 20:
			uParam0->f_3 = 1099495/*func_3304*/;
			break;
		case 21:
			uParam0->f_3 = 1099486/*func_3303*/;
			break;
		case 74:
			uParam0->f_53 = 1099018/*func_3300*/;
			break;
		case 22:
			uParam0->f_24 = 1098899/*func_3299*/;
			break;
		case 25:
			uParam0->f_23 = 1098129/*func_3295*/;
			break;
		case 30:
			uParam0->f_8 = 1097983/*func_3293*/;
			break;
		case 31:
			uParam0->f_39 = 1097972/*func_3292*/;
			break;
		case 33:
			uParam0->f_40 = 1097765/*func_3290*/;
			break;
		case 34:
			uParam0->f_41 = 1097445/*func_3288*/;
			break;
		case 36:
			uParam0->f_58 = 1097392/*func_3287*/;
			break;
		case 35:
			uParam0->f_42 = 1096619/*func_3284*/;
			break;
		case 45:
			uParam0->f_14 = 1096610/*func_3283*/;
			break;
		case 46:
			uParam0->f_14 = 1096601/*func_3282*/;
			break;
		case 110:
			uParam0->f_57 = 1096593/*func_3281*/;
			break;
		case 77:
			uParam0->f_13 = 1096582/*func_3280*/;
			break;
		case 47:
			uParam0->f_43 = 1096343/*func_3278*/;
			break;
		case 49:
			uParam0->f_8 = 1096334/*func_3277*/;
			break;
		case 50:
			*uParam0 = 1096325/*func_3276*/;
			break;
		case 51:
			*uParam0 = 1096316/*func_3275*/;
			break;
		case 52:
			uParam0->f_15 = 1096305/*func_3274*/;
			break;
		case 53:
			uParam0->f_13 = 1096294/*func_3273*/;
			break;
		case 54:
			uParam0->f_45 = 1096286/*func_3272*/;
			break;
		case 56:
			uParam0->f_46 = 1096277/*func_3271*/;
			break;
		case 57:
			uParam0->f_11 = 1096268/*func_3270*/;
			break;
		case 58:
			uParam0->f_13 = 1095975/*func_3268*/;
			break;
		case 64:
			uParam0->f_47 = 1095431/*func_3265*/;
			break;
		case 65:
			uParam0->f_21 = 1095423/*func_3264*/;
			break;
		case 66:
			uParam0->f_21 = 1095355/*func_3263*/;
			break;
		case 67:
			uParam0->f_21 = 1095215/*func_3261*/;
			break;
		case 68:
			*uParam0 = 1094771/*func_3260*/;
			break;
		case 69:
			*uParam0 = 1094762/*func_3259*/;
			break;
		case 70:
			uParam0->f_48 = 1094750/*func_3258*/;
			break;
		case 71:
			uParam0->f_49 = 1094741/*func_3257*/;
			break;
		case 107:
			uParam0->f_50 = 1094729/*func_3256*/;
			break;
		case 80:
			uParam0->f_7 = 1094720/*func_3255*/;
			break;
		case 78:
			uParam0->f_59 = 1094712/*func_3254*/;
			break;
	}
}

void func_3295(int iParam0, int iParam1)//Position - 0x10C191
{
	var uVar0[10];
	int iVar1;
	bool bVar2;
	bool bVar3;
	struct<3> Var4;
	int iVar5;
	int iVar6;
	int iVar7;
	struct<13> Var8;
	iVar1 = -1;
	if (__LIB_0__::func_114(PLAYER::PLAYER_ID(), iParam0))
	{
		if (__LIB_1__::func_526())
		{
			iVar1 = __LIB_3__::func_680();
		}
		Var4 = { __LIB_8__::func_933(iParam0) };
		iVar5 = PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uVar0, -1);
		if (iVar5 > 0)
		{
			iVar6 = 0;
			while (iVar6 < iVar5)
			{
				if (!ENTITY::IS_ENTITY_DEAD(uVar0[iVar6], false) && PED::IS_PED_A_PLAYER(uVar0[iVar6]))
				{
					if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(uVar0[iVar6], true), Var4) <= IntToFloat(__LIB_3__::func_679(iParam0)))
					{
						iVar7 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(uVar0[iVar6]);
						Var8 = { __LIB_1__::func_696(iVar7) };
						if (!bVar2)
						{
							if ((iVar1 != -1 && iVar1 == __LIB_3__::func_106(&Var8)) || NETWORK::NETWORK_IS_FRIEND(&Var8))
							{
								if (((!__LIB_1__::func_907(iVar7, 1) && !__LIB_5__::func_424(iVar7)) && !PED::IS_PED_IN_ANY_VEHICLE(uVar0[iVar6], true)) && !__LIB_1__::func_101(PLAYER::PLAYER_PED_ID()))
								{
									bVar2 = true;
								}
							}
						}
						if ((((!bVar3 && __LIB_3__::func_360(PLAYER::PLAYER_ID(), iVar7)) && !__LIB_5__::func_424(iVar7)) && !PED::IS_PED_IN_ANY_VEHICLE(uVar0[iVar6], true)) && !__LIB_1__::func_101(PLAYER::PLAYER_PED_ID()))
						{
							bVar3 = true;
						}
					}
					if (bVar3 && bVar2)
					{
					}
					else
					{
						iVar6++;
					}
					if (bVar3)
					{
						__LIB_5__::func_189(iParam1, 1, 1);
					}
					else
					{
						__LIB_5__::func_189(iParam1, 1, 0);
					}
					if (bVar2)
					{
						__LIB_5__::func_189(iParam1, 2, 1);
					}
					else
					{
						__LIB_5__::func_189(iParam1, 2, 0);
					}
					if ((bVar3 || bVar2) && !__LIB_3__::func_779())
					{
						__LIB_9__::func_282(iParam0, -1);
					}
					if (__LIB_3__::func_661(0, iParam1))
					{
						__LIB_9__::func_282(iParam0, -1);
					}
					else if (__LIB_3__::func_661(1, iParam1))
					{
						if (bVar3)
						{
							__LIB_7__::func_831(PLAYER::PLAYER_ID(), iParam0, 0f, 0f, 0f, 1, 0, 0, 0, -1, -1, -1);
						}
						func_3296(iParam0);
					}
					else if (__LIB_3__::func_661(2, iParam1))
					{
						if (bVar2)
						{
							__LIB_7__::func_831(PLAYER::PLAYER_ID(), iParam0, 0f, 0f, 0f, 0, 0, 1, 0, -1, -1, -1);
						}
						func_3296(iParam0);
					}
					Jump @551; //curOff = 532
					__LIB_5__::func_189(iParam1, 1, 0);
					__LIB_5__::func_189(iParam1, 2, 0);
				}
void func_3296(int iParam0)//Position - 0x10C3BB
{
	__LIB_9__::func_282(iParam0, -1);
	Global_1946250.f_504 = -1;
	__LIB_5__::func_947(1, iParam0);
	Global_1946250.f_3607 = 0;
	Global_1946250.f_3612 = 1;
}

void func_3331(var uParam0, int iParam1)//Position - 0x10CDEE
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1200188/*func_3572*/;
			break;
		case 1:
			uParam0->f_30 = 1200084/*func_3571*/;
			break;
		case 2:
			uParam0->f_31 = 1199349/*func_3569*/;
			break;
		case 3:
			uParam0->f_34 = 1199267/*func_3568*/;
			break;
		case 4:
			uParam0->f_12 = 1199124/*func_3567*/;
			break;
		case 5:
			uParam0->f_11 = 1199114/*func_3566*/;
			break;
		case 37:
			uParam0->f_18 = 1198979/*func_3565*/;
			break;
		case 42:
			uParam0->f_10 = 1198912/*func_3564*/;
			break;
		case 6:
			uParam0->f_32 = 1198800/*func_3563*/;
			break;
		case 111:
			uParam0->f_35 = 1198561/*func_3559*/;
			break;
		case 11:
			uParam0->f_11 = 1198552/*func_3558*/;
			break;
		case 12:
			uParam0->f_33 = 1198052/*func_3555*/;
			break;
		case 14:
			uParam0->f_11 = 1198043/*func_3554*/;
			break;
		case 109:
			uParam0->f_56 = 1198035/*func_3553*/;
			break;
		case 79:
			*uParam0 = 1198011/*func_3552*/;
			break;
		case 38:
			uParam0->f_9 = 1197931/*func_3551*/;
			break;
		case 13:
			uParam0->f_2 = 1197835/*func_3550*/;
			break;
		case 15:
			uParam0->f_2 = 1197630/*func_3549*/;
			break;
		case 75:
			uParam0->f_4 = 1197614/*func_3548*/;
			break;
		case 16:
			uParam0->f_5 = 1196805/*func_3545*/;
			break;
		case 108:
			uParam0->f_55 = 1192100/*func_3527*/;
			break;
		case 17:
			uParam0->f_17 = 1191283/*func_3526*/;
			break;
		case 19:
			uParam0->f_17 = 1191257/*func_3525*/;
			break;
		case 20:
			uParam0->f_3 = 1191173/*func_3524*/;
			break;
		case 21:
			uParam0->f_3 = 1191109/*func_3523*/;
			break;
		case 74:
			uParam0->f_53 = 1190957/*func_3522*/;
			break;
		case 22:
			uParam0->f_24 = 1190790/*func_3521*/;
			break;
		case 25:
			uParam0->f_23 = 1189644/*func_3515*/;
			break;
		case 30:
			uParam0->f_8 = 1189026/*func_3513*/;
			break;
		case 31:
			uParam0->f_39 = 1188715/*func_3512*/;
			break;
		case 33:
			uParam0->f_40 = 1187776/*func_3510*/;
			break;
		case 34:
			uParam0->f_41 = 1186416/*func_3509*/;
			break;
		case 36:
			uParam0->f_58 = 1186358/*func_3508*/;
			break;
		case 35:
			uParam0->f_42 = 1138656/*func_3505*/;
			break;
		case 45:
			uParam0->f_14 = 1138647/*func_3504*/;
			break;
		case 46:
			uParam0->f_14 = 1138638/*func_3503*/;
			break;
		case 110:
			uParam0->f_57 = 1138630/*func_3502*/;
			break;
		case 77:
			uParam0->f_13 = 1138607/*func_3501*/;
			break;
		case 47:
			uParam0->f_43 = 1138479/*func_3500*/;
			break;
		case 49:
			uParam0->f_8 = 1138438/*func_3499*/;
			break;
		case 50:
			*uParam0 = 1138170/*func_3496*/;
			break;
		case 51:
			*uParam0 = 1138101/*func_3495*/;
			break;
		case 52:
			uParam0->f_15 = 1138090/*func_3494*/;
			break;
		case 53:
			uParam0->f_13 = 1137856/*func_3493*/;
			break;
		case 54:
			uParam0->f_45 = 1137506/*func_3490*/;
			break;
		case 56:
			uParam0->f_46 = 1137497/*func_3489*/;
			break;
		case 57:
			uParam0->f_11 = 1137426/*func_3488*/;
			break;
		case 58:
			uParam0->f_13 = 1137192/*func_3487*/;
			break;
		case 64:
			uParam0->f_47 = 1136992/*func_3485*/;
			break;
		case 65:
			uParam0->f_21 = 1136094/*func_3483*/;
			break;
		case 66:
			uParam0->f_21 = 1135412/*func_3477*/;
			break;
		case 67:
			uParam0->f_21 = 1133113/*func_3457*/;
			break;
		case 68:
			*uParam0 = 1132480/*func_3453*/;
			break;
		case 69:
			*uParam0 = 1132471/*func_3452*/;
			break;
		case 70:
			uParam0->f_48 = 1132459/*func_3451*/;
			break;
		case 71:
			uParam0->f_49 = 1132450/*func_3450*/;
			break;
		case 107:
			uParam0->f_50 = 1132438/*func_3449*/;
			break;
		case 80:
			uParam0->f_7 = 1131745/*func_3443*/;
			break;
		case 84:
			uParam0->f_1 = 1131205/*func_3441*/;
			break;
		case 85:
			uParam0->f_1 = 1127101/*func_3433*/;
			break;
		case 87:
			uParam0->f_1 = 1123114/*func_3421*/;
			break;
		case 88:
			uParam0->f_1 = 1122600/*func_3417*/;
			break;
		case 89:
			uParam0->f_54 = 1122429/*func_3416*/;
			break;
		case 90:
			uParam0->f_1 = 1122223/*func_3411*/;
			break;
		case 91:
			uParam0->f_1 = 1122057/*func_3410*/;
			break;
		case 92:
			uParam0->f_1 = 1120605/*func_3406*/;
			break;
		case 94:
			uParam0->f_1 = 1116468/*func_3395*/;
			break;
		case 95:
			uParam0->f_22 = 1116172/*func_3392*/;
			break;
		case 96:
			uParam0->f_1 = 1116142/*func_3391*/;
			break;
		case 97:
			uParam0->f_1 = 1115475/*func_3388*/;
			break;
		case 98:
			uParam0->f_1 = 1112826/*func_3369*/;
			break;
		case 100:
			uParam0->f_22 = 1104765/*func_3345*/;
			break;
		case 101:
			uParam0->f_22 = 1102822/*func_3335*/;
			break;
		case 78:
			uParam0->f_59 = 1102602/*func_3333*/;
			break;
		case 125:
			uParam0->f_19 = 1102578/*func_3332*/;
			break;
	}
}

int func_3369(int iParam0, int* iParam1)//Position - 0x10FAFA
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	struct<4> Var4;
	struct<4> Var5;
	struct<3> Var6;
	struct<3> Var7;
	char* sVar8;
	struct<3> Var9;
	struct<3> Var10;
	if ((__LIB_0__::func_177() || __LIB_3__::func_719()) || NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		if (Global_2824886)
		{
			if (!BitTest(*iParam1, 13))
			{
				if (__LIB_0__::func_893() || __LIB_4__::func_54())
				{
					if (!BitTest(Global_1946250.f_2, 21))
					{
						__LIB_0__::func_627(&(iParam1->f_101), 1, 0);
						STREAMING::SET_FOCUS_POS_AND_VEL(482.435f, 4812.798f, -59.383f, 0f, 0f, 0f);
						STREAMING::NEW_LOAD_SCENE_START_SPHERE(482.435f, 4812.798f, -59.383f, 20f, 1);
					}
				}
				__LIB_0__::func_627(&(iParam1->f_101), 1, 0);
				MISC::SET_BIT(iParam1, 13);
			}
		}
		if (((Global_2824886 && __LIB_0__::func_937(&(iParam1->f_101), 1000, 1)) && __LIB_1__::func_693(PLAYER::PLAYER_ID(), 1, 1)) && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(PLAYER::PLAYER_PED_ID()))
		{
			if (!BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_3, 0))
			{
				MISC::SET_BIT(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_3), 0);
			}
		}
		else
		{
			return 0;
		}
		if (!BitTest(Global_1946250.f_2, 21))
		{
			bVar3 = false;
		}
		else
		{
			bVar3 = true;
			if (!BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_3, 1))
			{
				MISC::SET_BIT(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_3), 1);
			}
		}
		iVar0 = 0;
		while (iVar0 < 32)
		{
			bVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
			if ((__LIB_1__::func_693(bVar2, 1, 1) && !__LIB_4__::func_972(bVar2)) && !Global_2824892)
			{
				if (!BitTest(Global_2689235[bVar2 /*453*/].f_318.f_3, bVar3) || !PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(PLAYER::GET_PLAYER_PED(bVar2)))
				{
					return 0;
				}
			}
			iVar0++;
		}
		if (!BitTest(*iParam1, 12))
		{
			if (!ENTITY::DOES_ENTITY_EXIST(iParam1->f_176[0]))
			{
				ENTITY::CREATE_MODEL_HIDE_EXCLUDING_SCRIPT_OBJECTS(482.435f, 4812.798f, -59.383f, 0.5f, __LIB_4__::func_417(0), false);
				Var4 = { __LIB_4__::func_426() };
				__LIB_5__::func_893(&(iParam1->f_176[0]), Var4, Var4.f_3, 1, 1);
			}
			Global_2824887 = -1;
			if (Global_1853191 != __LIB_0__::func_162())
			{
				if (__LIB_0__::func_121(PLAYER::GET_PLAYER_PED(Global_1853191)))
				{
					if (iVar1 < 4)
					{
						if (!ENTITY::DOES_ENTITY_EXIST(iParam1->f_140[0]))
						{
							func_1403(&(iParam1->f_140[0]), Global_1853191, 1, 0);
							if (Global_1853191 == PLAYER::PLAYER_ID())
							{
								Global_2824887 = iVar1;
							}
							iVar1++;
						}
					}
				}
			}
			iVar0 = 0;
			while (iVar0 < 32)
			{
				bVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
				if (Global_1853191 != bVar2)
				{
					if (__LIB_1__::func_693(bVar2, 0, 1) && !__LIB_4__::func_972(bVar2))
					{
						if (iVar1 < 4)
						{
							if (!ENTITY::DOES_ENTITY_EXIST(iParam1->f_140[iVar1]))
							{
								func_1403(&(iParam1->f_140[iVar1]), bVar2, 1, 0);
								if (__LIB_0__::func_121(iParam1->f_140[iVar1]))
								{
									PED::SET_DISABLE_PED_MAP_COLLISION(iParam1->f_140[iVar1]);
								}
								if (bVar2 == PLAYER::PLAYER_ID())
								{
									Global_2824887 = iVar1;
								}
								iVar1++;
							}
						}
					}
				}
				iVar0++;
			}
			__LIB_4__::func_442();
			MISC::SET_BIT(iParam1, 12);
			return 0;
		}
		else
		{
			iVar0 = 0;
			while (iVar0 < 4)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iParam1->f_140[iVar0]) && __LIB_0__::func_121(iParam1->f_140[iVar0]))
				{
					if (!PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(iParam1->f_140[iVar0]))
					{
						return 0;
					}
				}
				iVar0++;
			}
		}
		if (__LIB_1__::func_614() || BitTest(Global_1574942, 4))
		{
			if (__LIB_0__::func_893() || __LIB_4__::func_54())
			{
			}
			else
			{
				__LIB_7__::func_872(0, 1, 0, 1, 0, 1, 0, 1, 1, 0);
				return 0;
			}
		}
		Var5 = { __LIB_6__::func_424(iParam0, 0) };
		if (!ENTITY::DOES_ENTITY_EXIST(iParam1->f_176[1]))
		{
			__LIB_5__::func_892(&(iParam1->f_176[1]), Var5, Var5.f_3);
		}
		Var5 = { __LIB_6__::func_424(iParam0, 3) };
		if (BitTest(Global_1946250.f_2, 21))
		{
			ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iParam1->f_176[0], Var5 + Vector(-2f, 0f, 0f), false, false, true);
			ENTITY::SET_ENTITY_ROTATION(iParam1->f_176[0], Var5.f_3, 2, true);
		}
		Var5 = { __LIB_6__::func_424(iParam0, 0) };
		if (!ENTITY::DOES_ENTITY_EXIST(iParam1->f_176[3]))
		{
			__LIB_5__::func_991(&(iParam1->f_176[3]), Var5, Var5.f_3);
		}
		iParam1->f_11 = CAM::CREATE_CAMERA(joaat("DEFAULT_ANIMATED_CAMERA"), false);
		if (BitTest(Global_1946250.f_2, 21))
		{
		}
	}
	else
	{
		if (!BitTest(*iParam1, 12))
		{
			func_1403(&(iParam1->f_140[0]), PLAYER::PLAYER_ID(), 1, 0);
			MISC::SET_BIT(iParam1, 12);
			return 0;
		}
		else if (ENTITY::DOES_ENTITY_EXIST(iParam1->f_140[0]) && __LIB_0__::func_121(iParam1->f_140[0]))
		{
			if (!PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(iParam1->f_140[0]))
			{
				return 0;
			}
		}
		iParam1->f_176[1] = 0;
		if (__LIB_0__::func_121(iParam1->f_140[0]))
		{
			Var6 = { ENTITY::GET_ENTITY_COORDS(iParam1->f_140[0], false) };
			Var6.f_2 = (Var6.f_2 - 20f);
			ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iParam1->f_140[0], Var6, false, false, true);
			ENTITY::FREEZE_ENTITY_POSITION(iParam1->f_140[0], true);
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iParam1->f_176[0]))
		{
			Var7 = { __LIB_4__::func_426() };
			__LIB_5__::func_893(&(iParam1->f_176[0]), Var7, Var7.f_3, 1, 0);
			Var7.f_2 = (Var7.f_2 - 10f);
			ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iParam1->f_176[0], Var7, false, false, true);
			ENTITY::SET_ENTITY_COLLISION(iParam1->f_176[0], true, false);
			ENTITY::SET_ENTITY_VISIBLE(iParam1->f_176[0], true, false);
		}
		sVar8 = "anim@amb@facility@hangerdoors@base@enter_exit@male@";
		Var9 = { 481.253f, 4813.742f, -59.148f };
		Var10 = { 0f, 0f, -10f };
		if (__LIB_1__::func_394())
		{
			sVar8 = "anim@amb@facility@hangerdoors@base@enter_exit@female@";
		}
		__LIB_3__::func_900(&(Global_1946250.f_4073), 6500, "Base exit", Var9, Var10, sVar8, "control_operation_cam", 0, 0, 0, 0, 2);
		__LIB_4__::func_428(&(iParam1->f_176[1]), 1);
		MISC::SET_BIT(&(Global_1946250.f_5), 27);
	}
	__LIB_5__::func_514(iParam1, 0);
	__LIB_0__::func_627(&(iParam1->f_101), 1, 0);
	return 1;
}

int func_3406(int iParam0, int* iParam1)//Position - 0x11195D
{
	struct<4> Var0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1->f_176[0]))
	{
		Var0 = { __LIB_4__::func_427() };
		__LIB_5__::func_893(&(iParam1->f_176[0]), Var0, Var0.f_3, 1, 0);
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar1 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iParam1->f_109))
		{
			MISC::SET_BIT(&(iParam1->f_188), 1);
			if (ENTITY::GET_ENTITY_MODEL(iVar1) == joaat("avenger"))
			{
				__LIB_17__::func_830(&iVar1, &(iParam1->f_109), 48, 10f, 20f, 15f);
			}
			else
			{
				func_408(&iVar1, &(iParam1->f_109), 40);
			}
			VEHICLE::SET_DISABLE_MAP_COLLISION(iParam1->f_109);
			return 0;
		}
		else if (func_3408(&iVar1, &(iParam1->f_109), &(iParam1->f_109.f_1), &(Global_1946250.f_4508), 1))
		{
			AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iParam1->f_109, "dlc_xm_facility_enter/exit_fake_heli_group", 0f);
		}
		else
		{
			return 0;
		}
	}
	else
	{
		iVar3 = 0;
		iVar2 = 0;
		while (iVar2 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
		{
			iVar4 = iVar2;
			if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar4))
			{
				bVar5 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar4);
				if (iVar2 < 30)
				{
					if ((__LIB_1__::func_693(bVar5, 1, 1) && __LIB_2__::func_717(bVar5) == iParam0) && __LIB_3__::func_171(bVar5))
					{
						if (!ENTITY::DOES_ENTITY_EXIST(iParam1->f_140[iVar3]))
						{
							func_1403(&(iParam1->f_140[iVar3]), bVar5, 1, 0);
							if (__LIB_0__::func_121(iParam1->f_140[iVar3]))
							{
								PED::SET_DISABLE_PED_MAP_COLLISION(iParam1->f_140[iVar3]);
								if (ENTITY::GET_ENTITY_MODEL(iParam1->f_140[iVar3]) == joaat("MP_M_Freemode_01"))
								{
									MISC::SET_BIT(&(iParam1->f_188), 27);
								}
								else
								{
									MISC::SET_BIT(&(iParam1->f_188), 28);
								}
								if (!PED::HAS_PED_HEAD_BLEND_FINISHED(iParam1->f_140[iVar3]) || !PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(iParam1->f_140[iVar3]))
								{
									return 0;
								}
								else
								{
									PED::FINALIZE_HEAD_BLEND(iParam1->f_140[iVar3]);
								}
							}
							iVar3++;
						}
						else if (__LIB_0__::func_121(iParam1->f_140[iVar3]))
						{
							if (!PED::HAS_PED_HEAD_BLEND_FINISHED(iParam1->f_140[iVar3]) || !PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(iParam1->f_140[iVar3]))
							{
								return 0;
							}
							else
							{
								PED::FINALIZE_HEAD_BLEND(iParam1->f_140[iVar3]);
							}
							iVar3++;
						}
					}
				}
			}
			iVar2++;
		}
	}
	__LIB_5__::func_514(iParam1, 0);
	iParam1->f_183[0] = 0.4f;
	__LIB_5__::func_602(&(iParam1->f_176[0]), iParam1->f_183[0], 0);
	__LIB_6__::func_425(iParam0, &(Global_1946250.f_4073));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_4__::func_417(0));
	return 1;
}

int func_3408(int iParam0, var uParam1, var uParam2, var uParam3, bool bParam4)//Position - 0x111C6F
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam1))
	{
		return 0;
	}
	iVar0 = -1;
	while (iVar0 <= 8)
	{
		iVar1 = iVar0 + 1;
		iVar2 = iVar0;
		if ((*uParam3)[iVar1] != __LIB_0__::func_162() && __LIB_1__::func_693((*uParam3)[iVar1], 1, 1))
		{
			iVar3 = PLAYER::GET_PLAYER_PED((*uParam3)[iVar1]);
			if (ENTITY::DOES_ENTITY_EXIST(iVar3))
			{
				if (!ENTITY::DOES_ENTITY_EXIST((*uParam2)[iVar1]))
				{
					func_325(uParam2[iVar1], iVar3, 1, 0);
				}
				if (ENTITY::DOES_ENTITY_EXIST((*uParam2)[iVar1]) && __LIB_0__::func_121((*uParam2)[iVar1]))
				{
					if (!PED::HAS_PED_HEAD_BLEND_FINISHED((*uParam2)[iVar1]) || !PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED((*uParam2)[iVar1]))
					{
						if (bParam4)
						{
							return 0;
						}
					}
					else
					{
						PED::FINALIZE_HEAD_BLEND((*uParam2)[iVar1]);
					}
					iVar4 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(*uParam1, iVar2, false);
					if (!ENTITY::DOES_ENTITY_EXIST(iVar4))
					{
						if (__LIB_0__::func_121(*uParam1))
						{
							PED::SET_PED_INTO_VEHICLE((*uParam2)[iVar1], *uParam1, iVar2);
						}
					}
					if (iVar0 == 7 && ENTITY::GET_ENTITY_MODEL(*iParam0) == joaat("insurgent3"))
					{
						VEHICLE::SET_VEHICLE_DOOR_CONTROL(*uParam1, 5, 5, 1f);
					}
				}
			}
		}
		iVar0++;
	}
	return 1;
}

int func_3433(int iParam0, int* iParam1)//Position - 0x1132BD
{
	int iVar0;
	struct<4> Var1;
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iParam1->f_109))
		{
			MISC::SET_BIT(&(iParam1->f_188), 1);
			func_408(&iVar0, &(iParam1->f_109), 60);
			__LIB_3__::func_633(&(iParam1->f_109));
			VEHICLE::SET_DISABLE_MAP_COLLISION(iParam1->f_109);
			if (__LIB_4__::func_453(ENTITY::GET_ENTITY_MODEL(iVar0)))
			{
				MISC::SET_BIT(&(iParam1->f_188), 9);
				if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("avenger"))
				{
					if (VEHICLE::GET_LANDING_GEAR_STATE(iVar0) == 4 || VEHICLE::GET_LANDING_GEAR_STATE(iVar0) == 1)
					{
						MISC::SET_BIT(&(iParam1->f_188), 14);
					}
					MISC::SET_BIT(&(iParam1->f_188), 13);
				}
			}
			return 0;
		}
		else if (func_324(&iVar0, &(iParam1->f_109), &(iParam1->f_109.f_1), 1, 1, 0, 0, 0, 1))
		{
			VEHICLE::SET_DISABLE_MAP_COLLISION(iParam1->f_109);
			AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iParam1->f_109, "dlc_xm_facility_enter/exit_fake_heli_group", 0f);
			__LIB_4__::func_465(iVar0);
		}
		else
		{
			return 0;
		}
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(iParam1->f_140[0]))
	{
		func_1403(&(iParam1->f_140[0]), PLAYER::PLAYER_ID(), 1, 0);
		if (__LIB_0__::func_121(iParam1->f_140[0]))
		{
			if (PED::HAS_PED_HEAD_BLEND_FINISHED(iParam1->f_140[0]) || PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(iParam1->f_140[0]))
			{
				PED::SET_DISABLE_PED_MAP_COLLISION(iParam1->f_140[0]);
				PED::FINALIZE_HEAD_BLEND(iParam1->f_140[0]);
			}
			else
			{
				return 0;
			}
		}
	}
	Var1 = { __LIB_6__::func_424(iParam0, 0) };
	__LIB_5__::func_892(&(iParam1->f_176[1]), Var1, Var1.f_3);
	Var1 = { 0f, 0f, 0f };
	Var1.f_3 = { 0f, 0f, 0f };
	Var1 = { __LIB_6__::func_424(iParam0, 3) };
	__LIB_5__::func_893(&(iParam1->f_176[0]), Var1, Var1.f_3, 1, 1);
	if (BitTest(iParam1->f_188, 1) && __LIB_5__::func_609(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))
	{
		Var1 = { __LIB_6__::func_424(iParam0, 19) };
		Var1.f_2 = (Var1.f_2 - 1f);
		__LIB_5__::func_893(&(iParam1->f_176[4]), Var1, Var1.f_3, 0, 0);
		ENTITY::SET_ENTITY_VISIBLE(iParam1->f_176[4], false, false);
		ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(iParam1->f_176[4]);
	}
	Var1 = { __LIB_6__::func_424(iParam0, 0) };
	__LIB_5__::func_991(&(iParam1->f_176[3]), Var1, Var1.f_3);
	__LIB_6__::func_805(iParam0, &(iParam1->f_176[0]), 0f, 1, 1f);
	__LIB_6__::func_426(iParam0, &(Global_1946250.f_3638), 0, -1);
	__LIB_5__::func_514(iParam1, 0);
	return 1;
}

int func_3441(int iParam0, var uParam1)//Position - 0x1142C5
{
	bool bVar0;
	int iVar1;
	struct<3> Var2;
	char* sVar3;
	bVar0 = true;
	if (!BitTest(uParam1->f_188, 17))
	{
		__LIB_5__::func_604(iParam0);
		MISC::SET_BIT(&(uParam1->f_188), 17);
	}
	STREAMING::REQUEST_MODEL(__LIB_4__::func_459(iParam0));
	if (!STREAMING::HAS_MODEL_LOADED(__LIB_4__::func_459(iParam0)))
	{
		bVar0 = false;
	}
	STREAMING::REQUEST_MODEL(__LIB_4__::func_441());
	if (!STREAMING::HAS_MODEL_LOADED(__LIB_4__::func_441()))
	{
		bVar0 = false;
	}
	STREAMING::REQUEST_MODEL(__LIB_4__::func_440());
	if (!STREAMING::HAS_MODEL_LOADED(__LIB_4__::func_440()))
	{
		bVar0 = false;
	}
	STREAMING::REQUEST_ANIM_DICT("anim@amb@facility@hanger_doors");
	if (!STREAMING::HAS_ANIM_DICT_LOADED("anim@amb@facility@hanger_doors"))
	{
		bVar0 = false;
	}
	STREAMING::REQUEST_MODEL(joaat("xm_prop_out_hanger_lift"));
	if (!STREAMING::HAS_MODEL_LOADED(joaat("xm_prop_out_hanger_lift")))
	{
		bVar0 = false;
	}
	if (!AUDIO::REQUEST_SCRIPT_AUDIO_BANK("DLC_CHRISTMAS2017/XM_FACILITY_ENTRY_EXIT", false, -1))
	{
		MISC::CLEAR_BIT(&(uParam1->f_188), 22);
		bVar0 = false;
	}
	else
	{
		MISC::SET_BIT(&(uParam1->f_188), 22);
	}
	if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar1 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			if (__LIB_0__::func_121(iVar1) && ENTITY::GET_ENTITY_MODEL(iVar1) == joaat("avenger"))
			{
				Var2 = { ENTITY::GET_ENTITY_COORDS(iVar1, true) };
				Var2.f_2 = (Var2.f_2 - 10f);
				__LIB_0__::func_799(__LIB_4__::func_445());
				if (!STREAMING::HAS_MODEL_LOADED(__LIB_4__::func_445()))
				{
					bVar0 = false;
				}
				else if (!__LIB_17__::func_830(&iVar1, &(uParam1->f_122), 16, Var2))
				{
					bVar0 = false;
				}
				else
				{
					func_408(&iVar1, &(uParam1->f_122), 24);
					__LIB_4__::func_456(uParam1->f_122, 0);
					if (__LIB_0__::func_121(uParam1->f_122))
					{
						ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_122, true);
						AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(uParam1->f_122, "dlc_xm_facility_enter/exit_fake_heli_group", 0f);
					}
					__LIB_4__::func_466(uParam1->f_122, 1);
				}
			}
		}
		else
		{
			sVar3 = "anim@amb@facility@hangerdoors@base@enter_exit@male@";
			if (__LIB_1__::func_394())
			{
				sVar3 = "anim@amb@facility@hangerdoors@base@enter_exit@female@";
			}
			STREAMING::REQUEST_ANIM_DICT(sVar3);
			if (!STREAMING::HAS_ANIM_DICT_LOADED(sVar3))
			{
				bVar0 = false;
			}
		}
	}
	if (!bVar0)
	{
		return 0;
	}
	return 1;
}

void func_3490(int iParam0, var uParam1, int* iParam2, var uParam3, var uParam4)//Position - 0x115B62
{
	struct<3> Var0;
	int iVar1;
	if (__LIB_5__::func_423(iParam0))
	{
		if (*uParam3 != 1 && *uParam3 != 2)
		{
			HUD::SET_BLIP_ROUTE(*uParam1, true);
			HUD::SET_BLIP_SCALE(*uParam1, 1.1f);
			HUD::SET_BLIP_PRIORITY(*uParam1, 7);
			HUD::SET_BLIP_FLASH_TIMER(*uParam1, 7000);
			*uParam3 = 1;
			return;
		}
		else if (*uParam3 == 1)
		{
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
			{
				HUD::SET_BLIP_ROUTE(*uParam1, false);
				*uParam3 = 2;
			}
		}
		else if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
		{
			HUD::SET_BLIP_ROUTE(*uParam1, true);
			*uParam3 = 1;
		}
	}
	else if (*uParam3 == 1)
	{
		HUD::SET_BLIP_ROUTE(*uParam1, false);
		HUD::SET_BLIP_SCALE(*uParam1, 1f);
		HUD::SET_BLIP_PRIORITY(*uParam1, 5);
		*uParam3 = 0;
	}
	if (__LIB_0__::func_172(iParam0) == 9)
	{
		if (__LIB_0__::func_109(iParam0))
		{
			if (HUD::DOES_BLIP_EXIST(*uParam1))
			{
				if (!HUD::DOES_BLIP_EXIST(*iParam2))
				{
					Var0 = { __LIB_4__::func_296(iParam0) };
					iVar1 = __LIB_4__::func_74(iParam0);
					*iParam2 = __LIB_0__::func_488(Var0, 0);
					HUD::SET_BLIP_SPRITE(*iParam2, iVar1);
					HUD::SET_BLIP_SCALE(*iParam2, 1f);
					HUD::SET_BLIP_PRIORITY(*iParam2, 5);
					func_2143(iParam2, 166);
					HUD::SET_BLIP_AS_SHORT_RANGE(*iParam2, false);
					HUD::SET_BLIP_NAME_FROM_TEXT_FILE(*iParam2, "BASE_HEIST_BLIP" /* GXT: The Doomsday Heist */);
					HUD::SET_BLIP_HIDDEN_ON_LEGEND(*iParam2, true);
				}
			}
			else if (HUD::DOES_BLIP_EXIST(*iParam2))
			{
				HUD::REMOVE_BLIP(iParam2);
			}
		}
	}
}

void func_3515(int iParam0, int iParam1)//Position - 0x12270C
{
	var uVar0[10];
	int iVar1;
	bool bVar2;
	bool bVar3;
	struct<3> Var4;
	int iVar5;
	int iVar6;
	bool bVar7;
	struct<13> Var8;
	iVar1 = -1;
	if (__LIB_5__::func_616(PLAYER::PLAYER_ID(), iParam0))
	{
		if (__LIB_1__::func_526())
		{
			iVar1 = __LIB_3__::func_680();
		}
		Var4 = { __LIB_4__::func_296(iParam0) };
		iVar5 = PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uVar0, -1);
		if (iVar5 > 0)
		{
			iVar6 = 0;
			while (iVar6 < iVar5)
			{
				if (!ENTITY::IS_ENTITY_DEAD(uVar0[iVar6], false) && PED::IS_PED_A_PLAYER(uVar0[iVar6]))
				{
					if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(uVar0[iVar6], true), Var4) <= IntToFloat(__LIB_3__::func_679(iParam0)))
					{
						bVar7 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(uVar0[iVar6]);
						Var8 = { __LIB_1__::func_696(bVar7) };
						if (!bVar2)
						{
							if ((iVar1 != -1 && iVar1 == __LIB_3__::func_106(&Var8)) || NETWORK::NETWORK_IS_FRIEND(&Var8))
							{
								if (((((((!__LIB_1__::func_907(bVar7, 1) && !__LIB_5__::func_424(bVar7)) && !PED::IS_PED_IN_ANY_VEHICLE(uVar0[iVar6], true)) && !__LIB_1__::func_101(uVar0[iVar6])) && !__LIB_4__::func_972(bVar7)) && !__LIB_4__::func_976(bVar7, 1)) && !__LIB_6__::func_336(bVar7)) && !func_558(bVar7))
								{
									bVar2 = true;
								}
							}
						}
						if ((((((((!bVar3 && __LIB_3__::func_360(PLAYER::PLAYER_ID(), bVar7)) && !__LIB_5__::func_424(bVar7)) && !PED::IS_PED_IN_ANY_VEHICLE(uVar0[iVar6], true)) && !__LIB_1__::func_101(uVar0[iVar6])) && !__LIB_4__::func_972(bVar7)) && !__LIB_4__::func_976(bVar7, 1)) && !__LIB_6__::func_336(bVar7)) && !func_558(bVar7))
						{
							bVar3 = true;
						}
					}
					if (bVar3 && bVar2)
					{
					}
					else
					{
						iVar6++;
					}
					if (bVar3)
					{
						__LIB_5__::func_189(iParam1, 1, 1);
					}
					else
					{
						__LIB_5__::func_189(iParam1, 1, 0);
					}
					if (bVar2)
					{
						__LIB_5__::func_189(iParam1, 2, 1);
					}
					else
					{
						__LIB_5__::func_189(iParam1, 2, 0);
					}
					if ((bVar3 || bVar2) && !__LIB_3__::func_779())
					{
						__LIB_7__::func_62(iParam0, -1);
					}
					if (__LIB_3__::func_661(0, iParam1))
					{
						__LIB_7__::func_62(iParam0, -1);
					}
					else if (__LIB_3__::func_661(1, iParam1))
					{
						if (bVar3)
						{
							__LIB_7__::func_831(PLAYER::PLAYER_ID(), iParam0, 0f, 0f, 0f, 1, 0, 0, 0, -1, -1, -1);
						}
						func_3516(iParam0);
					}
					else if (__LIB_3__::func_661(2, iParam1))
					{
						if (bVar2)
						{
							__LIB_7__::func_831(PLAYER::PLAYER_ID(), iParam0, 0f, 0f, 0f, 0, 0, 1, 0, -1, -1, -1);
						}
						func_3516(iParam0);
					}
					Jump @653; //curOff = 634
					__LIB_5__::func_189(iParam1, 1, 0);
					__LIB_5__::func_189(iParam1, 2, 0);
				}
void func_3516(int iParam0)//Position - 0x12299C
{
	__LIB_7__::func_62(iParam0, -1);
	Global_1946250.f_504 = -1;
	__LIB_5__::func_947(1, iParam0);
	Global_1946250.f_3607 = 0;
	Global_1946250.f_3612 = 1;
}

void func_3573(var uParam0, int iParam1)//Position - 0x125045
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1228273/*func_3743*/;
			break;
		case 1:
			uParam0->f_30 = 1228217/*func_3742*/;
			break;
		case 2:
			uParam0->f_31 = 1227948/*func_3741*/;
			break;
		case 3:
			uParam0->f_34 = 1227889/*func_3740*/;
			break;
		case 4:
			uParam0->f_12 = 1227858/*func_3739*/;
			break;
		case 37:
			uParam0->f_18 = 1227740/*func_3738*/;
			break;
		case 38:
			uParam0->f_9 = 1227656/*func_3737*/;
			break;
		case 6:
			uParam0->f_32 = 1227592/*func_3736*/;
			break;
		case 111:
			uParam0->f_35 = 1227569/*func_3735*/;
			break;
		case 11:
			uParam0->f_11 = 1227560/*func_3734*/;
			break;
		case 12:
			uParam0->f_33 = 1227107/*func_3731*/;
			break;
		case 14:
			uParam0->f_11 = 1227098/*func_3730*/;
			break;
		case 109:
			uParam0->f_56 = 1227090/*func_3729*/;
			break;
		case 79:
			*uParam0 = 1227066/*func_3728*/;
			break;
		case 13:
			uParam0->f_2 = 1227057/*func_3727*/;
			break;
		case 15:
			uParam0->f_2 = 1221987/*func_3701*/;
			break;
		case 75:
			uParam0->f_4 = 1221978/*func_3700*/;
			break;
		case 16:
			uParam0->f_5 = 1221794/*func_3699*/;
			break;
		case 108:
			uParam0->f_55 = 1218695/*func_3685*/;
			break;
		case 17:
			uParam0->f_17 = 1218189/*func_3683*/;
			break;
		case 19:
			uParam0->f_17 = 1218163/*func_3682*/;
			break;
		case 20:
			uParam0->f_3 = 1218085/*func_3681*/;
			break;
		case 21:
			uParam0->f_3 = 1218022/*func_3680*/;
			break;
		case 74:
			uParam0->f_53 = 1217807/*func_3678*/;
			break;
		case 22:
			uParam0->f_24 = 1217688/*func_3677*/;
			break;
		case 25:
			uParam0->f_23 = 1216741/*func_3672*/;
			break;
		case 30:
			uParam0->f_8 = 1216177/*func_3670*/;
			break;
		case 31:
			uParam0->f_39 = 1215999/*func_3667*/;
			break;
		case 33:
			uParam0->f_40 = 1214887/*func_3662*/;
			break;
		case 34:
			uParam0->f_41 = 1214193/*func_3660*/;
			break;
		case 36:
			uParam0->f_58 = 1214140/*func_3659*/;
			break;
		case 35:
			uParam0->f_42 = 1213563/*func_3657*/;
			break;
		case 45:
			uParam0->f_14 = 1213554/*func_3656*/;
			break;
		case 46:
			uParam0->f_14 = 1213545/*func_3655*/;
			break;
		case 110:
			uParam0->f_57 = 1213368/*func_3654*/;
			break;
		case 77:
			uParam0->f_13 = 1213357/*func_3653*/;
			break;
		case 47:
			uParam0->f_43 = 1212859/*func_3650*/;
			break;
		case 49:
			uParam0->f_8 = 1212818/*func_3649*/;
			break;
		case 50:
			*uParam0 = 1212809/*func_3648*/;
			break;
		case 51:
			*uParam0 = 1212800/*func_3647*/;
			break;
		case 52:
			uParam0->f_15 = 1212789/*func_3646*/;
			break;
		case 53:
			uParam0->f_13 = 1212778/*func_3645*/;
			break;
		case 54:
			uParam0->f_45 = 1212770/*func_3644*/;
			break;
		case 56:
			uParam0->f_46 = 1212761/*func_3643*/;
			break;
		case 57:
			uParam0->f_11 = 1212752/*func_3642*/;
			break;
		case 58:
			uParam0->f_13 = 1212523/*func_3641*/;
			break;
		case 64:
			uParam0->f_47 = 1206534/*func_3609*/;
			break;
		case 65:
			uParam0->f_21 = 1204802/*func_3597*/;
			break;
		case 66:
			uParam0->f_21 = 1204476/*func_3594*/;
			break;
		case 67:
			uParam0->f_21 = 1203751/*func_3590*/;
			break;
		case 68:
			*uParam0 = 1203206/*func_3589*/;
			break;
		case 69:
			*uParam0 = 1203197/*func_3588*/;
			break;
		case 70:
			uParam0->f_48 = 1203185/*func_3587*/;
			break;
		case 71:
			uParam0->f_49 = 1203176/*func_3586*/;
			break;
		case 107:
			uParam0->f_50 = 1203164/*func_3585*/;
			break;
		case 80:
			uParam0->f_7 = 1201658/*func_3578*/;
			break;
		case 78:
			uParam0->f_59 = 1201208/*func_3575*/;
			break;
		case 125:
			uParam0->f_19 = 1201192/*func_3574*/;
			break;
	}
}

void func_3672(int iParam0, int iParam1)//Position - 0x1290E5
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5[10];
	struct<3> Var6;
	bool bVar7;
	struct<13> Var8;
	bool bVar9;
	iVar4 = -1;
	if (__LIB_5__::func_628(PLAYER::PLAYER_ID(), iParam0))
	{
		if (__LIB_1__::func_526())
		{
			iVar4 = __LIB_3__::func_680();
		}
		Var6 = { __LIB_1__::func_694(PLAYER::PLAYER_ID()) };
		iVar3 = PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uVar5, -1);
		if (iVar3 > 0)
		{
			iVar2 = 0;
			while (iVar2 < iVar3)
			{
				if (!ENTITY::IS_ENTITY_DEAD(uVar5[iVar2], false) && PED::IS_PED_A_PLAYER(uVar5[iVar2]))
				{
					if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(uVar5[iVar2], true), Var6) <= IntToFloat(__LIB_3__::func_679(iParam0)))
					{
						bVar7 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(uVar5[iVar2]);
						Var8 = { __LIB_1__::func_696(bVar7) };
						if (!bVar0)
						{
							if ((iVar4 != -1 && iVar4 == __LIB_3__::func_106(&Var8)) || NETWORK::NETWORK_IS_FRIEND(&Var8))
							{
								if ((((!__LIB_1__::func_101(PLAYER::GET_PLAYER_PED(bVar7)) && !__LIB_1__::func_907(bVar7, 1)) && !__LIB_5__::func_424(bVar7)) && !__LIB_3__::func_728(bVar7, 14)) && !func_558(bVar7))
								{
									bVar0 = true;
								}
							}
						}
						if ((((((!bVar1 && __LIB_3__::func_360(PLAYER::PLAYER_ID(), bVar7)) && !__LIB_1__::func_101(PLAYER::GET_PLAYER_PED(bVar7))) && !__LIB_1__::func_907(bVar7, 1)) && !__LIB_5__::func_424(bVar7)) && !__LIB_3__::func_728(bVar7, 14)) && !func_558(bVar7))
						{
							bVar1 = true;
						}
					}
					if (bVar1 && bVar0)
					{
					}
					else
					{
						iVar2++;
					}
					if (bVar1)
					{
						__LIB_5__::func_189(iParam1, 1, 1);
					}
					else
					{
						__LIB_5__::func_189(iParam1, 1, 0);
					}
					if (bVar0)
					{
						__LIB_5__::func_189(iParam1, 2, 1);
					}
					else
					{
						__LIB_5__::func_189(iParam1, 2, 0);
					}
					if (((bVar1 || bVar0) && !__LIB_3__::func_779()) && !__LIB_5__::func_241(PLAYER::PLAYER_ID()))
					{
						__LIB_12__::func_9(iParam0, -1);
					}
					bVar9 = __LIB_4__::func_557(PLAYER::PLAYER_ID());
					if (__LIB_3__::func_661(0, iParam1))
					{
						__LIB_12__::func_9(iParam0, -1);
					}
					else if (__LIB_3__::func_661(1, iParam1))
					{
						if (bVar1)
						{
							__LIB_11__::func_984(1);
							__LIB_7__::func_831(PLAYER::PLAYER_ID(), iParam0, Var6, 1, 0, 0, bVar9, Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_7, -1, -1);
						}
						func_3673(iParam0);
					}
					else if (__LIB_3__::func_661(2, iParam1))
					{
						if (bVar0)
						{
							__LIB_11__::func_984(1);
							__LIB_7__::func_831(PLAYER::PLAYER_ID(), iParam0, Var6, 0, 0, 1, bVar9, Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_7, -1, -1);
						}
						func_3673(iParam0);
					}
					Jump @656; //curOff = 637
					__LIB_5__::func_189(iParam1, 1, 0);
					__LIB_5__::func_189(iParam1, 2, 0);
				}
void func_3673(int iParam0)//Position - 0x129378
{
	__LIB_12__::func_9(iParam0, -1);
	Global_1946250.f_504 = -1;
	__LIB_5__::func_947(1, iParam0);
	Global_1946250.f_3607 = 0;
	Global_1946250.f_3612 = 1;
}

void func_3744(var uParam0, int iParam1)//Position - 0x12BDFA
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1280777/*func_3911*/;
			break;
		case 1:
			uParam0->f_30 = 1280697/*func_3910*/;
			break;
		case 2:
			uParam0->f_31 = 1280198/*func_3909*/;
			break;
		case 3:
			uParam0->f_34 = 1280148/*func_3908*/;
			break;
		case 4:
			uParam0->f_12 = 1280061/*func_3907*/;
			break;
		case 5:
			uParam0->f_11 = 1280051/*func_3906*/;
			break;
		case 37:
			uParam0->f_18 = 1279933/*func_3905*/;
			break;
		case 38:
			uParam0->f_9 = 1279811/*func_3904*/;
			break;
		case 6:
			uParam0->f_32 = 1279723/*func_3903*/;
			break;
		case 111:
			uParam0->f_35 = 1279709/*func_3902*/;
			break;
		case 11:
			uParam0->f_11 = 1279700/*func_3901*/;
			break;
		case 12:
			uParam0->f_33 = 1279321/*func_3898*/;
			break;
		case 14:
			uParam0->f_11 = 1279312/*func_3897*/;
			break;
		case 109:
			uParam0->f_56 = 1279304/*func_3896*/;
			break;
		case 79:
			*uParam0 = 1279280/*func_3895*/;
			break;
		case 13:
			uParam0->f_2 = 1279148/*func_3894*/;
			break;
		case 15:
			uParam0->f_2 = 1278866/*func_3892*/;
			break;
		case 75:
			uParam0->f_4 = 1278852/*func_3891*/;
			break;
		case 16:
			uParam0->f_5 = 1278334/*func_3889*/;
			break;
		case 108:
			uParam0->f_55 = 1274705/*func_3877*/;
			break;
		case 17:
			uParam0->f_17 = 1274169/*func_3875*/;
			break;
		case 19:
			uParam0->f_17 = 1274143/*func_3874*/;
			break;
		case 20:
			uParam0->f_3 = 1274059/*func_3873*/;
			break;
		case 21:
			uParam0->f_3 = 1273995/*func_3872*/;
			break;
		case 74:
			uParam0->f_53 = 1273815/*func_3871*/;
			break;
		case 22:
			uParam0->f_24 = 1273672/*func_3870*/;
			break;
		case 25:
			uParam0->f_23 = 1273048/*func_3868*/;
			break;
		case 30:
			uParam0->f_8 = 1272533/*func_3866*/;
			break;
		case 31:
			uParam0->f_39 = 1272248/*func_3865*/;
			break;
		case 33:
			uParam0->f_40 = 1271577/*func_3863*/;
			break;
		case 34:
			uParam0->f_41 = 1270313/*func_3862*/;
			break;
		case 36:
			uParam0->f_58 = 1270268/*func_3861*/;
			break;
		case 35:
			uParam0->f_42 = 1244221/*func_3853*/;
			break;
		case 45:
			uParam0->f_14 = 1244212/*func_3852*/;
			break;
		case 46:
			uParam0->f_14 = 1244203/*func_3851*/;
			break;
		case 110:
			uParam0->f_57 = 1244195/*func_3850*/;
			break;
		case 77:
			uParam0->f_13 = 1244172/*func_3849*/;
			break;
		case 47:
			uParam0->f_43 = 1244068/*func_3848*/;
			break;
		case 49:
			uParam0->f_8 = 1244027/*func_3847*/;
			break;
		case 50:
			*uParam0 = 1243813/*func_3844*/;
			break;
		case 51:
			*uParam0 = 1243744/*func_3843*/;
			break;
		case 52:
			uParam0->f_15 = 1243733/*func_3842*/;
			break;
		case 53:
			uParam0->f_13 = 1243595/*func_3841*/;
			break;
		case 54:
			uParam0->f_45 = 1243407/*func_3840*/;
			break;
		case 56:
			uParam0->f_46 = 1243398/*func_3839*/;
			break;
		case 57:
			uParam0->f_11 = 1243221/*func_3837*/;
			break;
		case 58:
			uParam0->f_13 = 1243083/*func_3836*/;
			break;
		case 64:
			uParam0->f_47 = 1243075/*func_3835*/;
			break;
		case 65:
			uParam0->f_21 = 1242239/*func_3833*/;
			break;
		case 66:
			uParam0->f_21 = 1242132/*func_3832*/;
			break;
		case 67:
			uParam0->f_21 = 1242068/*func_3831*/;
			break;
		case 68:
			*uParam0 = 1241580/*func_3830*/;
			break;
		case 69:
			*uParam0 = 1241571/*func_3829*/;
			break;
		case 70:
			uParam0->f_48 = 1241559/*func_3828*/;
			break;
		case 71:
			uParam0->f_49 = 1241550/*func_3827*/;
			break;
		case 107:
			uParam0->f_50 = 1241538/*func_3826*/;
			break;
		case 80:
			uParam0->f_7 = 1240835/*func_3822*/;
			break;
		case 84:
			uParam0->f_1 = 1240735/*func_3820*/;
			break;
		case 85:
			uParam0->f_1 = 1238751/*func_3817*/;
			break;
		case 87:
			uParam0->f_1 = 1236328/*func_3805*/;
			break;
		case 88:
			uParam0->f_1 = 1236319/*func_3804*/;
			break;
		case 96:
			uParam0->f_1 = 1236256/*func_3803*/;
			break;
		case 97:
			uParam0->f_1 = 1235935/*func_3800*/;
			break;
		case 98:
			uParam0->f_1 = 1231928/*func_3766*/;
			break;
		case 100:
			uParam0->f_22 = 1229652/*func_3748*/;
			break;
		case 78:
			uParam0->f_59 = 1229448/*func_3746*/;
			break;
		case 125:
			uParam0->f_19 = 1229432/*func_3745*/;
			break;
	}
}

int func_3766(int iParam0, int* iParam1)//Position - 0x12CC38
{
	int iVar0;
	struct<3> Var1;
	float fVar2;
	__LIB_6__::func_427(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1->f_109) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
		func_408(&iVar0, &(iParam1->f_109), 12);
		__LIB_5__::func_638(iParam0, &(iParam1->f_109));
	}
	__LIB_7__::func_63(iParam0, Global_1853189, &(iParam1->f_176[3]), &(iParam1->f_176[0]), &(iParam1->f_176[1]), &(iParam1->f_176[2]), &(iParam1->f_176[4]), 0);
	if (ENTITY::DOES_ENTITY_EXIST(iParam1->f_176[3]))
	{
		OBJECT::DELETE_OBJECT(&(iParam1->f_176[3]));
	}
	Var1 = { __LIB_5__::func_343(iParam0) };
	STREAMING::SET_FOCUS_POS_AND_VEL(Var1, 0f, 0f, 0f);
	fVar2 = 2f;
	__LIB_5__::func_899(iParam0, &(iParam1->f_176[1]), &(iParam1->f_176[2]), &fVar2);
	__LIB_5__::func_514(iParam1, 0);
	iParam1->f_188 = 0;
	return 1;
}

int func_3817(int iParam0, int* iParam1)//Position - 0x12E6DF
{
	int iVar0;
	bool bVar1;
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iParam1->f_109))
		{
			MISC::SET_BIT(&(iParam1->f_188), 1);
			func_408(&iVar0, &(iParam1->f_109), 60);
			__LIB_3__::func_633(&(iParam1->f_109));
			return 0;
		}
		else
		{
			func_324(&iVar0, &(iParam1->f_109), &(iParam1->f_109.f_1), 1, 0, 0, 0, 0, 1);
		}
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(iParam1->f_140[0]))
	{
		func_1403(&(iParam1->f_140[0]), PLAYER::PLAYER_ID(), 1, 0);
	}
	bVar1 = false;
	if (ENTITY::DOES_ENTITY_EXIST(iParam1->f_109))
	{
		bVar1 = __LIB_4__::func_607(iParam0, &(iParam1->f_109));
	}
	__LIB_6__::func_429(iParam0, &(Global_1946250.f_3638), 0, bVar1);
	__LIB_7__::func_63(iParam0, Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_9, &(iParam1->f_176[3]), &(iParam1->f_176[0]), &(iParam1->f_176[1]), &(iParam1->f_176[2]), &(iParam1->f_176[4]), 0);
	__LIB_5__::func_514(iParam1, 0);
	return 1;
}

void func_3868(int iParam0, int iParam1)//Position - 0x136CD8
{
	var uVar0[10];
	int iVar1;
	bool bVar2;
	bool bVar3;
	struct<3> Var4;
	int iVar5;
	int iVar6;
	bool bVar7;
	struct<13> Var8;
	iVar1 = -1;
	if (__LIB_5__::func_643(PLAYER::PLAYER_ID(), iParam0))
	{
		if (__LIB_1__::func_526())
		{
			iVar1 = __LIB_3__::func_680();
		}
		Var4 = { __LIB_4__::func_302(iParam0) };
		iVar5 = PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uVar0, -1);
		if (iVar5 > 0)
		{
			iVar6 = 0;
			while (iVar6 < iVar5)
			{
				if (!ENTITY::IS_ENTITY_DEAD(uVar0[iVar6], false) && PED::IS_PED_A_PLAYER(uVar0[iVar6]))
				{
					if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(uVar0[iVar6], true), Var4) <= IntToFloat(__LIB_3__::func_679(iParam0)))
					{
						bVar7 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(uVar0[iVar6]);
						Var8 = { __LIB_1__::func_696(bVar7) };
						if (!bVar2)
						{
							if ((iVar1 != -1 && iVar1 == __LIB_3__::func_106(&Var8)) || NETWORK::NETWORK_IS_FRIEND(&Var8))
							{
								if ((((!__LIB_1__::func_907(bVar7, 1) && !__LIB_5__::func_424(bVar7)) && !PED::IS_PED_IN_ANY_VEHICLE(uVar0[iVar6], true)) && !__LIB_1__::func_101(PLAYER::PLAYER_PED_ID())) && !func_558(bVar7))
								{
									bVar2 = true;
								}
							}
						}
						if (((((!bVar3 && __LIB_3__::func_360(PLAYER::PLAYER_ID(), bVar7)) && !__LIB_5__::func_424(bVar7)) && !PED::IS_PED_IN_ANY_VEHICLE(uVar0[iVar6], true)) && !__LIB_1__::func_101(PLAYER::PLAYER_PED_ID())) && !func_558(bVar7))
						{
							bVar3 = true;
						}
					}
					if (bVar3 && bVar2)
					{
					}
					else
					{
						iVar6++;
					}
					if (bVar3)
					{
						__LIB_5__::func_189(iParam1, 1, 1);
					}
					else
					{
						__LIB_5__::func_189(iParam1, 1, 0);
					}
					if (bVar2)
					{
						__LIB_5__::func_189(iParam1, 2, 1);
					}
					else
					{
						__LIB_5__::func_189(iParam1, 2, 0);
					}
					if ((bVar3 || bVar2) && !__LIB_3__::func_779())
					{
						__LIB_7__::func_65(iParam0, -1);
					}
					if (__LIB_3__::func_661(0, iParam1))
					{
						__LIB_7__::func_65(iParam0, -1);
					}
					else if (__LIB_3__::func_661(1, iParam1))
					{
						if (bVar3)
						{
							__LIB_7__::func_831(PLAYER::PLAYER_ID(), iParam0, 0f, 0f, 0f, 1, 0, 0, 0, -1, -1, -1);
						}
						func_3869(iParam0);
					}
					else if (__LIB_3__::func_661(2, iParam1))
					{
						if (bVar2)
						{
							__LIB_7__::func_831(PLAYER::PLAYER_ID(), iParam0, 0f, 0f, 0f, 0, 0, 1, 0, -1, -1, -1);
						}
						func_3869(iParam0);
					}
					Jump @575; //curOff = 556
					__LIB_5__::func_189(iParam1, 1, 0);
					__LIB_5__::func_189(iParam1, 2, 0);
				}
void func_3869(int iParam0)//Position - 0x136F1A
{
	__LIB_7__::func_65(iParam0, -1);
	Global_1946250.f_504 = -1;
	__LIB_5__::func_947(1, iParam0);
	Global_1946250.f_3607 = 0;
	Global_1946250.f_3612 = 1;
}

void func_3912(var uParam0, int iParam1)//Position - 0x138B12
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1290288/*func_3976*/;
			break;
		case 1:
			uParam0->f_30 = 1290232/*func_3975*/;
			break;
		case 2:
			uParam0->f_31 = 1290013/*func_3974*/;
			break;
		case 3:
			uParam0->f_34 = 1289962/*func_3973*/;
			break;
		case 4:
			uParam0->f_12 = 1289929/*func_3972*/;
			break;
		case 6:
			uParam0->f_32 = 1289865/*func_3971*/;
			break;
		case 111:
			uParam0->f_35 = 1289856/*func_3970*/;
			break;
		case 79:
			*uParam0 = 1289832/*func_3969*/;
			break;
		case 11:
			uParam0->f_11 = 1289823/*func_3968*/;
			break;
		case 12:
			uParam0->f_33 = 1289731/*func_3967*/;
			break;
		case 14:
			uParam0->f_11 = 1289722/*func_3966*/;
			break;
		case 109:
			uParam0->f_56 = 1289714/*func_3965*/;
			break;
		case 15:
			uParam0->f_2 = 1289462/*func_3964*/;
			break;
		case 13:
			uParam0->f_2 = 1289453/*func_3963*/;
			break;
		case 75:
			uParam0->f_4 = 1289444/*func_3962*/;
			break;
		case 16:
			uParam0->f_5 = 1289435/*func_3961*/;
			break;
		case 108:
			uParam0->f_55 = 1289426/*func_3960*/;
			break;
		case 17:
			uParam0->f_17 = 1289382/*func_3959*/;
			break;
		case 19:
			uParam0->f_17 = 1289371/*func_3958*/;
			break;
		case 20:
			uParam0->f_3 = 1289324/*func_3957*/;
			break;
		case 21:
			uParam0->f_3 = 1289272/*func_3956*/;
			break;
		case 74:
			uParam0->f_53 = 1289216/*func_3955*/;
			break;
		case 22:
			uParam0->f_24 = 1289134/*func_3954*/;
			break;
		case 25:
			uParam0->f_23 = 1288167/*func_3949*/;
			break;
		case 30:
			uParam0->f_8 = 1287862/*func_3947*/;
			break;
		case 31:
			uParam0->f_39 = 1287831/*func_3946*/;
			break;
		case 33:
			uParam0->f_40 = 1287641/*func_3945*/;
			break;
		case 34:
			uParam0->f_41 = 1283638/*func_3942*/;
			break;
		case 36:
			uParam0->f_58 = 1283585/*func_3941*/;
			break;
		case 35:
			uParam0->f_42 = 1282394/*func_3939*/;
			break;
		case 45:
			uParam0->f_14 = 1282385/*func_3938*/;
			break;
		case 46:
			uParam0->f_14 = 1282376/*func_3937*/;
			break;
		case 110:
			uParam0->f_57 = 1282368/*func_3936*/;
			break;
		case 77:
			uParam0->f_13 = 1282357/*func_3935*/;
			break;
		case 47:
			uParam0->f_43 = 1282254/*func_3934*/;
			break;
		case 49:
			uParam0->f_8 = 1282229/*func_3933*/;
			break;
		case 50:
			*uParam0 = 1282191/*func_3932*/;
			break;
		case 51:
			*uParam0 = 1282182/*func_3931*/;
			break;
		case 52:
			uParam0->f_15 = 1282171/*func_3930*/;
			break;
		case 53:
			uParam0->f_13 = 1282090/*func_3929*/;
			break;
		case 54:
			uParam0->f_45 = 1282082/*func_3928*/;
			break;
		case 56:
			uParam0->f_46 = 1282073/*func_3927*/;
			break;
		case 57:
			uParam0->f_11 = 1282063/*func_3926*/;
			break;
		case 58:
			uParam0->f_13 = 1281856/*func_3925*/;
			break;
		case 64:
			uParam0->f_47 = 1281848/*func_3924*/;
			break;
		case 65:
			uParam0->f_21 = 1281840/*func_3923*/;
			break;
		case 66:
			uParam0->f_21 = 1281832/*func_3922*/;
			break;
		case 67:
			uParam0->f_21 = 1281824/*func_3921*/;
			break;
		case 68:
			*uParam0 = 1281815/*func_3920*/;
			break;
		case 69:
			*uParam0 = 1281806/*func_3919*/;
			break;
		case 70:
			uParam0->f_48 = 1281794/*func_3918*/;
			break;
		case 71:
			uParam0->f_49 = 1281785/*func_3917*/;
			break;
		case 107:
			uParam0->f_50 = 1281773/*func_3916*/;
			break;
		case 80:
			uParam0->f_7 = 1281764/*func_3915*/;
			break;
		case 73:
			uParam0->f_51 = 1281755/*func_3914*/;
			break;
		case 78:
			uParam0->f_59 = 1281747/*func_3913*/;
			break;
	}
}

void func_3949(int iParam0, int iParam1)//Position - 0x13A7E7
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5[10];
	struct<3> Var6;
	bool bVar7;
	struct<13> Var8;
	bool bVar9;
	iVar4 = -1;
	if (__LIB_8__::func_863(PLAYER::PLAYER_ID(), iParam0))
	{
		if (__LIB_1__::func_526())
		{
			iVar4 = __LIB_3__::func_680();
		}
		__LIB_8__::func_195(iParam0, &Var6);
		iVar3 = PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uVar5, -1);
		if (iVar3 > 0)
		{
			iVar2 = 0;
			while (iVar2 < iVar3)
			{
				if (!ENTITY::IS_ENTITY_DEAD(uVar5[iVar2], false) && PED::IS_PED_A_PLAYER(uVar5[iVar2]))
				{
					if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(uVar5[iVar2], true), Var6) <= IntToFloat(__LIB_3__::func_679(iParam0)))
					{
						bVar7 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(uVar5[iVar2]);
						Var8 = { __LIB_1__::func_696(bVar7) };
						if (!bVar0)
						{
							if ((iVar4 != -1 && iVar4 == __LIB_3__::func_106(&Var8)) || NETWORK::NETWORK_IS_FRIEND(&Var8))
							{
								if ((!__LIB_1__::func_101(PLAYER::GET_PLAYER_PED(bVar7)) && !__LIB_1__::func_907(bVar7, 1)) && !__LIB_5__::func_424(bVar7))
								{
									bVar0 = true;
								}
							}
						}
						if ((((!bVar1 && __LIB_3__::func_360(PLAYER::PLAYER_ID(), bVar7)) && !__LIB_1__::func_101(PLAYER::GET_PLAYER_PED(bVar7))) && !__LIB_1__::func_907(bVar7, 1)) && !__LIB_5__::func_424(bVar7))
						{
							bVar1 = true;
						}
					}
					if (bVar1 && bVar0)
					{
					}
					else
					{
						iVar2++;
					}
					if (bVar1)
					{
						__LIB_5__::func_189(iParam1, 1, 1);
					}
					else
					{
						__LIB_5__::func_189(iParam1, 1, 0);
					}
					if (bVar0)
					{
						__LIB_5__::func_189(iParam1, 2, 1);
					}
					else
					{
						__LIB_5__::func_189(iParam1, 2, 0);
					}
					if ((bVar1 || bVar0) && !__LIB_3__::func_779())
					{
						__LIB_9__::func_285(iParam0, -1);
					}
					bVar9 = __LIB_4__::func_636(PLAYER::PLAYER_ID());
					if (__LIB_3__::func_661(0, iParam1))
					{
						__LIB_9__::func_285(iParam0, -1);
					}
					else if (__LIB_3__::func_661(1, iParam1))
					{
						if (bVar1)
						{
							__LIB_8__::func_194(1);
							__LIB_7__::func_831(PLAYER::PLAYER_ID(), iParam0, OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(ENTITY::GET_ENTITY_COORDS(__LIB_7__::func_758(), true), ENTITY::GET_ENTITY_HEADING(__LIB_7__::func_758()), 2f, -13f, 0f), 0, 0, 1, bVar9, Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_7, -1, -1);
						}
						func_3950(iParam0);
					}
					else if (__LIB_3__::func_661(2, iParam1))
					{
						if (bVar0)
						{
							__LIB_8__::func_194(1);
							__LIB_7__::func_831(PLAYER::PLAYER_ID(), iParam0, OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(ENTITY::GET_ENTITY_COORDS(__LIB_7__::func_758(), true), ENTITY::GET_ENTITY_HEADING(__LIB_7__::func_758()), 2f, -13f, 0f), 0, 0, 1, bVar9, Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_7, -1, -1);
						}
						func_3950(iParam0);
					}
					Jump @634; //curOff = 615
					__LIB_5__::func_189(iParam1, 1, 0);
					__LIB_5__::func_189(iParam1, 2, 0);
				}
void func_3950(int iParam0)//Position - 0x13AA64
{
	__LIB_9__::func_285(iParam0, -1);
	Global_1946250.f_504 = -1;
	__LIB_5__::func_947(1, iParam0);
	Global_1946250.f_3607 = 0;
	Global_1946250.f_3612 = 1;
}

void func_3977(var uParam0, int iParam1)//Position - 0x13B039
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1369730/*func_4142*/;
			break;
		case 1:
			uParam0->f_30 = 1369674/*func_4141*/;
			break;
		case 2:
			uParam0->f_31 = 1368129/*func_4140*/;
			break;
		case 3:
			uParam0->f_34 = 1368080/*func_4139*/;
			break;
		case 4:
			uParam0->f_12 = 1368047/*func_4138*/;
			break;
		case 6:
			uParam0->f_32 = 1367983/*func_4137*/;
			break;
		case 111:
			uParam0->f_35 = 1367960/*func_4136*/;
			break;
		case 79:
			*uParam0 = 1367936/*func_4135*/;
			break;
		case 37:
			uParam0->f_18 = 1367818/*func_4134*/;
			break;
		case 38:
			uParam0->f_9 = 1367751/*func_4133*/;
			break;
		case 11:
			uParam0->f_11 = 1367742/*func_4132*/;
			break;
		case 12:
			uParam0->f_33 = 1367397/*func_4130*/;
			break;
		case 14:
			uParam0->f_11 = 1367388/*func_4129*/;
			break;
		case 109:
			uParam0->f_56 = 1367380/*func_4128*/;
			break;
		case 15:
			uParam0->f_2 = 1362056/*func_4106*/;
			break;
		case 13:
			uParam0->f_2 = 1362047/*func_4105*/;
			break;
		case 75:
			uParam0->f_4 = 1362038/*func_4104*/;
			break;
		case 16:
			uParam0->f_5 = 1362013/*func_4103*/;
			break;
		case 108:
			uParam0->f_55 = 1353793/*func_4082*/;
			break;
		case 17:
			uParam0->f_17 = 1353211/*func_4081*/;
			break;
		case 19:
			uParam0->f_17 = 1353185/*func_4080*/;
			break;
		case 20:
			uParam0->f_3 = 1353124/*func_4079*/;
			break;
		case 21:
			uParam0->f_3 = 1353004/*func_4078*/;
			break;
		case 74:
			uParam0->f_53 = 1352948/*func_4077*/;
			break;
		case 22:
			uParam0->f_24 = 1352866/*func_4076*/;
			break;
		case 25:
			uParam0->f_23 = 1351894/*func_4071*/;
			break;
		case 30:
			uParam0->f_8 = 1351154/*func_4070*/;
			break;
		case 31:
			uParam0->f_39 = 1350884/*func_4069*/;
			break;
		case 33:
			uParam0->f_40 = 1349948/*func_4066*/;
			break;
		case 34:
			uParam0->f_41 = 1346604/*func_4065*/;
			break;
		case 36:
			uParam0->f_58 = 1346551/*func_4064*/;
			break;
		case 35:
			uParam0->f_42 = 1345868/*func_4062*/;
			break;
		case 45:
			uParam0->f_14 = 1345859/*func_4061*/;
			break;
		case 46:
			uParam0->f_14 = 1345850/*func_4060*/;
			break;
		case 110:
			uParam0->f_57 = 1345407/*func_4059*/;
			break;
		case 77:
			uParam0->f_13 = 1345396/*func_4058*/;
			break;
		case 47:
			uParam0->f_43 = 1345293/*func_4057*/;
			break;
		case 49:
			uParam0->f_8 = 1345268/*func_4056*/;
			break;
		case 50:
			*uParam0 = 1345230/*func_4055*/;
			break;
		case 51:
			*uParam0 = 1345206/*func_4054*/;
			break;
		case 52:
			uParam0->f_15 = 1345195/*func_4053*/;
			break;
		case 53:
			uParam0->f_13 = 1345116/*func_4052*/;
			break;
		case 54:
			uParam0->f_45 = 1345108/*func_4051*/;
			break;
		case 56:
			uParam0->f_46 = 1345099/*func_4050*/;
			break;
		case 57:
			uParam0->f_11 = 1345089/*func_4049*/;
			break;
		case 58:
			uParam0->f_13 = 1344860/*func_4048*/;
			break;
		case 64:
			uParam0->f_47 = 1298531/*func_4015*/;
			break;
		case 65:
			uParam0->f_21 = 1297393/*func_4012*/;
			break;
		case 66:
			uParam0->f_21 = 1297170/*func_4010*/;
			break;
		case 67:
			uParam0->f_21 = 1296275/*func_4006*/;
			break;
		case 68:
			*uParam0 = 1295730/*func_4005*/;
			break;
		case 69:
			*uParam0 = 1295721/*func_4004*/;
			break;
		case 70:
			uParam0->f_48 = 1295709/*func_4003*/;
			break;
		case 71:
			uParam0->f_49 = 1295700/*func_4002*/;
			break;
		case 107:
			uParam0->f_50 = 1295688/*func_4001*/;
			break;
		case 80:
			uParam0->f_7 = 1293593/*func_3992*/;
			break;
		case 73:
			uParam0->f_51 = 1291825/*func_3984*/;
			break;
		case 78:
			uParam0->f_59 = 1291292/*func_3978*/;
			break;
	}
}

void func_4071(int iParam0, int iParam1)//Position - 0x14A0D6
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5[10];
	struct<3> Var6;
	bool bVar7;
	struct<13> Var8;
	bool bVar9;
	iVar4 = -1;
	if (__LIB_12__::func_71(PLAYER::PLAYER_ID(), iParam0))
	{
		if (__LIB_1__::func_526())
		{
			iVar4 = __LIB_3__::func_680();
		}
		Var6 = { __LIB_1__::func_694(PLAYER::PLAYER_ID()) };
		iVar3 = PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uVar5, -1);
		if (iVar3 > 0)
		{
			iVar2 = 0;
			while (iVar2 < iVar3)
			{
				if (!ENTITY::IS_ENTITY_DEAD(uVar5[iVar2], false) && PED::IS_PED_A_PLAYER(uVar5[iVar2]))
				{
					if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(uVar5[iVar2], true), Var6) <= IntToFloat(__LIB_3__::func_679(iParam0)))
					{
						bVar7 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(uVar5[iVar2]);
						Var8 = { __LIB_1__::func_696(bVar7) };
						if (!bVar0)
						{
							if ((iVar4 != -1 && iVar4 == __LIB_3__::func_106(&Var8)) || NETWORK::NETWORK_IS_FRIEND(&Var8))
							{
								if ((((!__LIB_1__::func_101(PLAYER::GET_PLAYER_PED(bVar7)) && !__LIB_1__::func_907(bVar7, 1)) && !__LIB_5__::func_424(bVar7)) && !__LIB_3__::func_728(bVar7, 14)) && !func_558(bVar7))
								{
									bVar0 = true;
								}
							}
						}
						if ((((((!bVar1 && __LIB_3__::func_360(PLAYER::PLAYER_ID(), bVar7)) && !__LIB_1__::func_101(PLAYER::GET_PLAYER_PED(bVar7))) && !__LIB_1__::func_907(bVar7, 1)) && !__LIB_5__::func_424(bVar7)) && !__LIB_3__::func_728(bVar7, 14)) && !func_558(bVar7))
						{
							bVar1 = true;
						}
					}
					if (bVar1 && bVar0)
					{
					}
					else
					{
						iVar2++;
					}
					if (bVar1)
					{
						__LIB_5__::func_189(iParam1, 1, 1);
					}
					else
					{
						__LIB_5__::func_189(iParam1, 1, 0);
					}
					if (bVar0)
					{
						__LIB_5__::func_189(iParam1, 2, 1);
					}
					else
					{
						__LIB_5__::func_189(iParam1, 2, 0);
					}
					if (((bVar1 || bVar0) && !__LIB_3__::func_779()) && !__LIB_5__::func_241(PLAYER::PLAYER_ID()))
					{
						__LIB_12__::func_76(iParam0, -1);
					}
					bVar9 = __LIB_4__::func_636(PLAYER::PLAYER_ID());
					if (__LIB_3__::func_661(0, iParam1))
					{
						__LIB_12__::func_76(iParam0, -1);
					}
					else if (__LIB_3__::func_661(1, iParam1))
					{
						if (bVar1)
						{
							__LIB_11__::func_989(1);
							__LIB_7__::func_831(PLAYER::PLAYER_ID(), iParam0, Var6, 1, 0, 0, bVar9, Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_7, -1, -1);
						}
						func_4072(iParam0);
					}
					else if (__LIB_3__::func_661(2, iParam1))
					{
						if (bVar0)
						{
							__LIB_11__::func_989(1);
							__LIB_7__::func_831(PLAYER::PLAYER_ID(), iParam0, Var6, 0, 0, 1, bVar9, Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_7, -1, -1);
						}
						func_4072(iParam0);
					}
					Jump @656; //curOff = 637
					__LIB_5__::func_189(iParam1, 1, 0);
					__LIB_5__::func_189(iParam1, 2, 0);
				}
void func_4072(int iParam0)//Position - 0x14A369
{
	__LIB_12__::func_76(iParam0, -1);
	Global_1946250.f_504 = -1;
	__LIB_5__::func_947(1, iParam0);
	Global_1946250.f_3607 = 0;
	Global_1946250.f_3612 = 1;
}

void func_4143(var uParam0, int iParam1)//Position - 0x14E68B
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1405705/*func_4316*/;
			break;
		case 1:
			uParam0->f_30 = 1405589/*func_4315*/;
			break;
		case 2:
			uParam0->f_31 = 1404359/*func_4312*/;
			break;
		case 3:
			uParam0->f_34 = 1404289/*func_4311*/;
			break;
		case 4:
			uParam0->f_12 = 1404116/*func_4310*/;
			break;
		case 6:
			uParam0->f_32 = 1403992/*func_4309*/;
			break;
		case 106:
			uParam0->f_52 = 1403769/*func_4307*/;
			break;
		case 111:
			uParam0->f_35 = 1403755/*func_4306*/;
			break;
		case 79:
			*uParam0 = 1403731/*func_4305*/;
			break;
		case 37:
			uParam0->f_18 = 1403613/*func_4304*/;
			break;
		case 38:
			uParam0->f_9 = 1403375/*func_4301*/;
			break;
		case 11:
			uParam0->f_11 = 1403366/*func_4300*/;
			break;
		case 12:
			uParam0->f_33 = 1401662/*func_4298*/;
			break;
		case 14:
			uParam0->f_11 = 1401653/*func_4297*/;
			break;
		case 109:
			uParam0->f_56 = 1401645/*func_4296*/;
			break;
		case 15:
			uParam0->f_2 = 1401139/*func_4292*/;
			break;
		case 13:
			uParam0->f_2 = 1401100/*func_4291*/;
			break;
		case 44:
			*uParam0 = 1401091/*func_4290*/;
			break;
		case 75:
			uParam0->f_4 = 1401082/*func_4289*/;
			break;
		case 16:
			uParam0->f_5 = 1400614/*func_4284*/;
			break;
		case 108:
			uParam0->f_55 = 1398575/*func_4280*/;
			break;
		case 17:
			uParam0->f_17 = 1396441/*func_4272*/;
			break;
		case 19:
			uParam0->f_17 = 1396415/*func_4271*/;
			break;
		case 20:
			uParam0->f_3 = 1396331/*func_4270*/;
			break;
		case 21:
			uParam0->f_3 = 1396231/*func_4269*/;
			break;
		case 74:
			uParam0->f_53 = 1396064/*func_4268*/;
			break;
		case 22:
			uParam0->f_24 = 1395961/*func_4267*/;
			break;
		case 25:
			uParam0->f_23 = 1395309/*func_4265*/;
			break;
		case 30:
			uParam0->f_8 = 1394809/*func_4262*/;
			break;
		case 31:
			uParam0->f_39 = 1394516/*func_4261*/;
			break;
		case 33:
			uParam0->f_40 = 1393518/*func_4257*/;
			break;
		case 32:
			*uParam0 = 1393414/*func_4256*/;
			break;
		case 34:
			uParam0->f_41 = 1391265/*func_4255*/;
			break;
		case 35:
			uParam0->f_42 = 1303979/*func_4039*/;
			break;
		case 36:
			uParam0->f_58 = 1391205/*func_4254*/;
			break;
		case 45:
			uParam0->f_14 = 1391196/*func_4253*/;
			break;
		case 46:
			uParam0->f_14 = 1391187/*func_4252*/;
			break;
		case 110:
			uParam0->f_57 = 1390921/*func_4251*/;
			break;
		case 77:
			uParam0->f_13 = 1390910/*func_4250*/;
			break;
		case 47:
			uParam0->f_43 = 1390770/*func_4249*/;
			break;
		case 49:
			uParam0->f_8 = 1390729/*func_4248*/;
			break;
		case 50:
			*uParam0 = 1390532/*func_4245*/;
			break;
		case 51:
			*uParam0 = 1390448/*func_4244*/;
			break;
		case 52:
			uParam0->f_15 = 1390437/*func_4243*/;
			break;
		case 53:
			uParam0->f_13 = 1390155/*func_4242*/;
			break;
		case 54:
			uParam0->f_45 = 1390147/*func_4241*/;
			break;
		case 56:
			uParam0->f_46 = 1390138/*func_4240*/;
			break;
		case 57:
			uParam0->f_11 = 1390077/*func_4239*/;
			break;
		case 58:
			uParam0->f_13 = 1389795/*func_4238*/;
			break;
		case 64:
			uParam0->f_47 = 1387880/*func_4229*/;
			break;
		case 65:
			uParam0->f_21 = 1387837/*func_4228*/;
			break;
		case 66:
			uParam0->f_21 = 1387134/*func_4225*/;
			break;
		case 67:
			uParam0->f_21 = 1386050/*func_4217*/;
			break;
		case 68:
			*uParam0 = 1385459/*func_4215*/;
			break;
		case 69:
			*uParam0 = 1385450/*func_4214*/;
			break;
		case 70:
			uParam0->f_48 = 1385438/*func_4213*/;
			break;
		case 71:
			uParam0->f_49 = 1385429/*func_4212*/;
			break;
		case 107:
			uParam0->f_50 = 1385417/*func_4211*/;
			break;
		case 80:
			uParam0->f_7 = 1382745/*func_4199*/;
			break;
		case 84:
			uParam0->f_1 = 1380899/*func_4188*/;
			break;
		case 85:
			uParam0->f_1 = 1378565/*func_4182*/;
			break;
		case 87:
			uParam0->f_1 = 1374335/*func_4161*/;
			break;
		case 88:
			uParam0->f_1 = 1374326/*func_4160*/;
			break;
		case 90:
			uParam0->f_1 = 1374283/*func_4159*/;
			break;
		case 91:
			uParam0->f_1 = 1373982/*func_4157*/;
			break;
		case 92:
			uParam0->f_1 = 1373219/*func_4155*/;
			break;
		case 94:
			uParam0->f_1 = 1371719/*func_4154*/;
			break;
		case 102:
			uParam0->f_1 = 1371151/*func_4148*/;
			break;
		case 103:
			uParam0->f_22 = 1371143/*func_4147*/;
			break;
		case 104:
			uParam0->f_1 = 1371068/*func_4146*/;
			break;
		case 78:
			uParam0->f_59 = 1370994/*func_4145*/;
			break;
		case 125:
			uParam0->f_19 = 1370970/*func_4144*/;
			break;
	}
}

int func_4155(var uParam0, var uParam1)//Position - 0x14F423
{
	__LIB_6__::func_27(&(Global_1946250.f_4073), 7500, "TruckTunel1", 919.1599f, -3242.047f, -97.191f, -4.6979f, 0.1417f, -118.0924f, 36.2643f, 920.1234f, -3242.478f, -97.1018f, 7.9062f, 0.1417f, -113.0609f, 36.2643f, 1f, 50, 0, 0, 0, 0);
	__LIB_6__::func_27(&(Global_1946250.f_4073), 6000, "TruckPark", 826.3912f, -3231.1902f, -98.5252f, 1.494f, -0.1848f, -114.9899f, 38.3697f, 826.9343f, -3231.013f, -97.8158f, -0.7301f, -0.1848f, -118.0463f, 38.3697f, 1f, 0, 0, 0, 0, 0);
	if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_248))
	{
		func_408(&(uParam1->f_248), &(uParam1->f_109), 14);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_109))
	{
		uParam1->f_109 = VEHICLE::CREATE_VEHICLE(joaat("phantom3"), 0f, 10f, 0f, 0f, false, false, false);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_109.f_12))
	{
		uParam1->f_109.f_12 = VEHICLE::CREATE_VEHICLE(joaat("trailerlarge"), 0f, 10f, 10f, 0f, false, false, false);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_109.f_1[0]))
	{
		uParam1->f_109.f_1[0] = PED::CREATE_PED(26, joaat("MP_M_WeapExp_01"), 832.953f, -3243.084f, -98.716f, -18f, false, false);
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_109))
	{
		VEHICLE::SET_VEHICLE_FORWARD_SPEED_XY(uParam1->f_109, 8f);
		ENTITY::SET_ENTITY_COORDS(uParam1->f_109, 942.387f, -3245.778f, -94.91f, true, false, false, true);
		ENTITY::SET_ENTITY_HEADING(uParam1->f_109, 87.91f);
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(uParam1->f_109, 5f);
		uParam1->f_140[1] = PED::CREATE_PED(26, joaat("MP_M_WeapExp_01"), 832.953f, -3243.084f, -98.716f, -18f, false, false);
		ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_140[1], true);
		__LIB_4__::func_37(&(uParam1->f_109), 1);
		VEHICLE::SET_VEHICLE_ENGINE_ON(uParam1->f_109, true, true, false);
		VEHICLE::SET_VEHICLE_LIGHTS(uParam1->f_109, 3);
		if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_109.f_12))
		{
			VEHICLE::ATTACH_VEHICLE_TO_TRAILER(uParam1->f_109, uParam1->f_109.f_12, 1f);
			VEHICLE::VEHICLE_SET_OVERRIDE_EXTENABLE_SIDE_RATIO(uParam1->f_109.f_12, 1);
			VEHICLE::VEHICLE_SET_EXTENABLE_SIDE_TARGET_RATIO(uParam1->f_109.f_12, 0f);
			VEHICLE::VEHICLE_SET_OVERRIDE_SIDE_RATIO(uParam1->f_109.f_12, 0f);
		}
	}
	__LIB_4__::func_693(&Global_1640742, &Global_1640743, &(uParam1->f_109), &(uParam1->f_109.f_12));
	if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_109.f_1[0]))
	{
		ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(uParam1->f_109.f_1[0], PLAYER::PLAYER_PED_ID(), false);
	}
	return 1;
}

int func_4188(int iParam0, var uParam1)//Position - 0x151223
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = 0;
	__LIB_4__::func_694(uParam1);
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if (__LIB_3__::func_616() == 1)
		{
			__LIB_5__::func_457(0);
		}
	}
	switch (__LIB_3__::func_616())
	{
		case 0:
			if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_140[0]))
			{
				func_1403(&(uParam1->f_140[0]), PLAYER::PLAYER_ID(), 1, 0);
			}
			if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_140[0]))
			{
				iVar0 = 1;
				__LIB_5__::func_911(iParam0, &(uParam1->f_140[0]));
				ENTITY::SET_ENTITY_VISIBLE(uParam1->f_140[0], false, false);
				ENTITY::SET_ENTITY_COLLISION(uParam1->f_140[0], false, false);
			}
			break;
		case 1:
			if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_248))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_248) == joaat("trailersmall2"))
				{
					if (ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(uParam1->f_248))
					{
						iVar1 = ENTITY::GET_ENTITY_ATTACHED_TO(uParam1->f_248);
						if (ENTITY::IS_ENTITY_A_VEHICLE(iVar1))
						{
							iVar2 = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iVar1);
							if (ENTITY::DOES_ENTITY_EXIST(iVar2))
							{
								func_408(&iVar2, &(uParam1->f_109), 14);
								func_324(&(uParam1->f_248), &(uParam1->f_109.f_12), &(uParam1->f_140), 0, 0, 0, 0, 0, 1);
							}
						}
						else
						{
							func_408(&(uParam1->f_248), &(uParam1->f_109), 10);
						}
					}
					else
					{
						func_408(&(uParam1->f_248), &(uParam1->f_109), 10);
					}
				}
				else
				{
					func_408(&(uParam1->f_248), &(uParam1->f_109), 14);
					if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_249))
					{
						if (ENTITY::GET_ENTITY_MODEL(uParam1->f_249) == joaat("trailersmall2"))
						{
							func_324(&(uParam1->f_249), &(uParam1->f_109.f_12), &(uParam1->f_140), 0, 0, 0, 0, 0, 1);
						}
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_109))
				{
					ENTITY::SET_ENTITY_COORDS_NO_OFFSET(uParam1->f_109, 0f, 50f, 10f, false, false, true);
					__LIB_5__::func_911(iParam0, &(uParam1->f_109));
				}
				if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_109.f_12))
				{
					if (!ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(uParam1->f_109.f_12))
					{
						ENTITY::SET_ENTITY_COORDS_NO_OFFSET(uParam1->f_109.f_12, 50f, 50f, 50f, false, false, true);
					}
					__LIB_5__::func_911(iParam0, &(uParam1->f_109.f_12));
				}
				if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_109))
				{
					iVar0 = 1;
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_109) && ENTITY::DOES_ENTITY_EXIST(uParam1->f_248))
			{
				ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(uParam1->f_109, uParam1->f_248, false);
			}
			__LIB_4__::func_693(&Global_1640742, &Global_1640743, &(uParam1->f_109), &(uParam1->f_109.f_12));
			break;
	}
	if (!__LIB_5__::func_914(iParam0, uParam1))
	{
		return 0;
	}
	if (__LIB_6__::func_769(iParam0, &(uParam1->f_176[0]), &(uParam1->f_176[1]), 1101004800))
	{
		uParam1->f_183[0] = 0f;
		uParam1->f_183[1] = 0f;
		ENTITY::SET_ENTITY_VISIBLE(uParam1->f_176[0], false, false);
		ENTITY::SET_ENTITY_VISIBLE(uParam1->f_176[1], false, false);
		uParam1->f_189[8 /*3*/] = { ENTITY::GET_ENTITY_ROTATION(uParam1->f_176[0], 2) };
	}
	if ((ENTITY::DOES_ENTITY_EXIST(uParam1->f_176[0]) && ENTITY::DOES_ENTITY_EXIST(uParam1->f_176[1])) && iVar0)
	{
		if (__LIB_3__::func_616() == 1)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_109.f_1[0]))
			{
				func_1403(&(uParam1->f_109.f_1[0]), PLAYER::PLAYER_ID(), 1, 0);
				if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_109))
				{
					PED::SET_PED_INTO_VEHICLE(uParam1->f_109.f_1[0], uParam1->f_109, -1);
				}
			}
		}
		__LIB_4__::func_709(&(uParam1->f_109.f_1), 5f);
		if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_109))
		{
			VEHICLE::SET_VEHICLE_STEER_FOR_BUILDINGS(uParam1->f_109, 0);
		}
		if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_140[0]) && !ENTITY::IS_ENTITY_DEAD(uParam1->f_140[0], false))
		{
			PED::SET_PED_LOD_MULTIPLIER(uParam1->f_140[0], 5f);
			if (!PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(uParam1->f_140[0]))
			{
				return 0;
			}
		}
		if (!__LIB_5__::func_658(&(uParam1->f_109)))
		{
			return 0;
		}
		if (!__LIB_4__::func_707(&(uParam1->f_188), 15))
		{
			return 0;
		}
		STREAMING::SET_FOCUS_POS_AND_VEL(uParam1->f_189[6 /*3*/], 0f, 0f, 0f);
		return 1;
	}
	return 0;
}

void func_4265(int iParam0, int iParam1)//Position - 0x154A6D
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5[10];
	struct<3> Var6;
	bool bVar7;
	struct<13> Var8;
	iVar4 = -1;
	if (__LIB_5__::func_919(PLAYER::PLAYER_ID(), iParam0))
	{
		if (__LIB_1__::func_526())
		{
			iVar4 = __LIB_3__::func_680();
		}
		Var6 = { __LIB_4__::func_303(iParam0) };
		iVar3 = PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uVar5, -1);
		if (iVar3 > 0)
		{
			iVar2 = 0;
			while (iVar2 < iVar3)
			{
				if (!ENTITY::IS_ENTITY_DEAD(uVar5[iVar2], false) && PED::IS_PED_A_PLAYER(uVar5[iVar2]))
				{
					if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(uVar5[iVar2], true), Var6) <= IntToFloat(__LIB_3__::func_679(iParam0)))
					{
						bVar7 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(uVar5[iVar2]);
						Var8 = { __LIB_1__::func_696(bVar7) };
						if (!bVar0)
						{
							if ((iVar4 != -1 && iVar4 == __LIB_3__::func_106(&Var8)) || NETWORK::NETWORK_IS_FRIEND(&Var8))
							{
								if (((((!__LIB_1__::func_907(bVar7, 1) && !__LIB_5__::func_424(bVar7)) && !PED::IS_PED_IN_ANY_VEHICLE(uVar5[iVar2], true)) && !__LIB_1__::func_101(PLAYER::PLAYER_PED_ID())) && !__LIB_3__::func_728(bVar7, 14)) && !func_558(bVar7))
								{
									bVar0 = true;
								}
							}
						}
						if ((((((!bVar1 && __LIB_3__::func_360(PLAYER::PLAYER_ID(), bVar7)) && !__LIB_5__::func_424(bVar7)) && !PED::IS_PED_IN_ANY_VEHICLE(uVar5[iVar2], true)) && !__LIB_1__::func_101(PLAYER::PLAYER_PED_ID())) && !__LIB_3__::func_728(bVar7, 14)) && !func_558(bVar7))
						{
							bVar1 = true;
						}
					}
					if (bVar1 && bVar0)
					{
					}
					else
					{
						iVar2++;
					}
					if (bVar1)
					{
						__LIB_5__::func_189(iParam1, 1, 1);
					}
					else
					{
						__LIB_5__::func_189(iParam1, 1, 0);
					}
					if (bVar0)
					{
						__LIB_5__::func_189(iParam1, 2, 1);
					}
					else
					{
						__LIB_5__::func_189(iParam1, 2, 0);
					}
					if ((bVar1 || bVar0) && !__LIB_3__::func_779())
					{
						__LIB_9__::func_506(iParam0, -1);
					}
					if (__LIB_3__::func_661(0, iParam1))
					{
						__LIB_9__::func_506(iParam0, -1);
					}
					else if (__LIB_3__::func_661(1, iParam1))
					{
						if (bVar1)
						{
							__LIB_7__::func_831(PLAYER::PLAYER_ID(), iParam0, 0f, 0f, 0f, 1, 0, 0, 0, -1, -1, -1);
						}
						func_4266(iParam0);
					}
					else if (__LIB_3__::func_661(2, iParam1))
					{
						if (bVar0)
						{
							__LIB_7__::func_831(PLAYER::PLAYER_ID(), iParam0, 0f, 0f, 0f, 0, 0, 1, 0, -1, -1, -1);
						}
						func_4266(iParam0);
					}
					Jump @603; //curOff = 584
					__LIB_5__::func_189(iParam1, 1, 0);
					__LIB_5__::func_189(iParam1, 2, 0);
				}
void func_4266(int iParam0)//Position - 0x154CCB
{
	__LIB_9__::func_506(iParam0, -1);
	Global_1946250.f_504 = -1;
	__LIB_5__::func_947(1, iParam0);
	Global_1946250.f_3607 = 0;
	Global_1946250.f_3612 = 1;
}

void func_4317(var uParam0, int iParam1)//Position - 0x157312
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1447710/*func_4393*/;
			break;
		case 1:
			uParam0->f_30 = 1445392/*func_4388*/;
			break;
		case 2:
			uParam0->f_31 = 1445329/*func_4386*/;
			break;
		case 3:
			uParam0->f_34 = 1445273/*func_4385*/;
			break;
		case 4:
			uParam0->f_12 = 1444558/*func_4384*/;
			break;
		case 6:
			uParam0->f_32 = 1444550/*func_4383*/;
			break;
		case 111:
			uParam0->f_35 = 1444541/*func_4382*/;
			break;
		case 79:
			*uParam0 = 1444517/*func_4381*/;
			break;
		case 11:
			uParam0->f_11 = 1444508/*func_4380*/;
			break;
		case 12:
			uParam0->f_33 = 1442680/*func_4377*/;
			break;
		case 14:
			uParam0->f_11 = 1442671/*func_4376*/;
			break;
		case 109:
			uParam0->f_56 = 1442663/*func_4375*/;
			break;
		case 13:
			uParam0->f_2 = 1442654/*func_4374*/;
			break;
		case 15:
			uParam0->f_2 = 1442645/*func_4373*/;
			break;
		case 75:
			uParam0->f_4 = 1442636/*func_4372*/;
			break;
		case 16:
			uParam0->f_5 = 1442627/*func_4371*/;
			break;
		case 108:
			uParam0->f_55 = 1442618/*func_4370*/;
			break;
		case 17:
			uParam0->f_17 = 1442593/*func_4369*/;
			break;
		case 19:
			uParam0->f_17 = 1442582/*func_4368*/;
			break;
		case 20:
			uParam0->f_3 = 1442573/*func_4367*/;
			break;
		case 21:
			uParam0->f_3 = 1442564/*func_4366*/;
			break;
		case 74:
			uParam0->f_53 = 1442555/*func_4365*/;
			break;
		case 22:
			uParam0->f_24 = 1442547/*func_4364*/;
			break;
		case 25:
			uParam0->f_23 = 1442539/*func_4363*/;
			break;
		case 30:
			uParam0->f_8 = 1441375/*func_4361*/;
			break;
		case 31:
			uParam0->f_39 = 1441364/*func_4360*/;
			break;
		case 33:
			uParam0->f_40 = 1441336/*func_4359*/;
			break;
		case 34:
			uParam0->f_41 = 1441327/*func_4358*/;
			break;
		case 36:
			uParam0->f_58 = 1441282/*func_4357*/;
			break;
		case 35:
			uParam0->f_42 = 1407598/*func_4354*/;
			break;
		case 45:
			uParam0->f_14 = 1407589/*func_4353*/;
			break;
		case 46:
			uParam0->f_14 = 1407580/*func_4352*/;
			break;
		case 110:
			uParam0->f_57 = 1407572/*func_4351*/;
			break;
		case 77:
			uParam0->f_13 = 1407561/*func_4350*/;
			break;
		case 47:
			uParam0->f_43 = 1407553/*func_4349*/;
			break;
		case 49:
			uParam0->f_8 = 1407544/*func_4348*/;
			break;
		case 50:
			*uParam0 = 1407224/*func_4341*/;
			break;
		case 51:
			*uParam0 = 1407195/*func_4340*/;
			break;
		case 52:
			uParam0->f_15 = 1407164/*func_4339*/;
			break;
		case 53:
			uParam0->f_13 = 1407130/*func_4338*/;
			break;
		case 54:
			uParam0->f_45 = 1407086/*func_4337*/;
			break;
		case 56:
			uParam0->f_46 = 1407057/*func_4336*/;
			break;
		case 57:
			uParam0->f_11 = 1407048/*func_4335*/;
			break;
		case 58:
			uParam0->f_13 = 1406991/*func_4333*/;
			break;
		case 64:
			uParam0->f_47 = 1406983/*func_4332*/;
			break;
		case 65:
			uParam0->f_21 = 1406975/*func_4331*/;
			break;
		case 66:
			uParam0->f_21 = 1406967/*func_4330*/;
			break;
		case 67:
			uParam0->f_21 = 1406959/*func_4329*/;
			break;
		case 68:
			*uParam0 = 1406933/*func_4328*/;
			break;
		case 69:
			*uParam0 = 1406907/*func_4327*/;
			break;
		case 70:
			uParam0->f_48 = 1406895/*func_4326*/;
			break;
		case 71:
			uParam0->f_49 = 1406886/*func_4325*/;
			break;
		case 107:
			uParam0->f_50 = 1406874/*func_4324*/;
			break;
		case 80:
			uParam0->f_7 = 1406865/*func_4323*/;
			break;
		case 78:
			uParam0->f_59 = 1406857/*func_4322*/;
			break;
		case 126:
			*uParam0 = 1406674/*func_4318*/;
			break;
	}
}

void func_4395(var uParam0, int iParam1)//Position - 0x161C0F
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1491572/*func_4471*/;
			break;
		case 1:
			uParam0->f_30 = 1491262/*func_4470*/;
			break;
		case 2:
			uParam0->f_31 = 1486322/*func_4464*/;
			break;
		case 3:
			uParam0->f_34 = 1486293/*func_4463*/;
			break;
		case 4:
			uParam0->f_12 = 1486099/*func_4462*/;
			break;
		case 6:
			uParam0->f_32 = 1485749/*func_4461*/;
			break;
		case 111:
			uParam0->f_35 = 1485607/*func_4459*/;
			break;
		case 79:
			*uParam0 = 1485583/*func_4458*/;
			break;
		case 37:
			uParam0->f_18 = 1485047/*func_4456*/;
			break;
		case 38:
			uParam0->f_9 = 1484942/*func_4455*/;
			break;
		case 11:
			uParam0->f_11 = 1484933/*func_4454*/;
			break;
		case 12:
			uParam0->f_33 = 1484828/*func_4452*/;
			break;
		case 14:
			uParam0->f_11 = 1484819/*func_4451*/;
			break;
		case 109:
			uParam0->f_56 = 1484811/*func_4450*/;
			break;
		case 13:
			uParam0->f_2 = 1484802/*func_4449*/;
			break;
		case 44:
			*uParam0 = 1484793/*func_4448*/;
			break;
		case 15:
			uParam0->f_2 = 1484504/*func_4447*/;
			break;
		case 75:
			uParam0->f_4 = 1484495/*func_4446*/;
			break;
		case 16:
			uParam0->f_5 = 1484411/*func_4445*/;
			break;
		case 108:
			uParam0->f_55 = 1484402/*func_4444*/;
			break;
		case 17:
			uParam0->f_17 = 1483782/*func_4442*/;
			break;
		case 19:
			uParam0->f_17 = 1483582/*func_4441*/;
			break;
		case 20:
			uParam0->f_3 = 1483518/*func_4440*/;
			break;
		case 21:
			uParam0->f_3 = 1483458/*func_4439*/;
			break;
		case 74:
			uParam0->f_53 = 1483449/*func_4438*/;
			break;
		case 22:
			uParam0->f_24 = 1483208/*func_4437*/;
			break;
		case 25:
			uParam0->f_23 = 1482835/*func_4434*/;
			break;
		case 30:
			uParam0->f_8 = 1482697/*func_4433*/;
			break;
		case 31:
			uParam0->f_39 = 1482257/*func_4431*/;
			break;
		case 33:
			uParam0->f_40 = 1481592/*func_4426*/;
			break;
		case 34:
			uParam0->f_41 = 1479014/*func_4425*/;
			break;
		case 36:
			uParam0->f_58 = 1478969/*func_4424*/;
			break;
		case 35:
			uParam0->f_42 = 1453126/*func_4423*/;
			break;
		case 45:
			uParam0->f_14 = 1452898/*func_4422*/;
			break;
		case 46:
			uParam0->f_14 = 1452722/*func_4421*/;
			break;
		case 110:
			uParam0->f_57 = 1452714/*func_4420*/;
			break;
		case 77:
			uParam0->f_13 = 1452703/*func_4419*/;
			break;
		case 47:
			uParam0->f_43 = 1452461/*func_4418*/;
			break;
		case 49:
			uParam0->f_8 = 1452429/*func_4417*/;
			break;
		case 50:
			*uParam0 = 1452363/*func_4416*/;
			break;
		case 51:
			*uParam0 = 1452339/*func_4415*/;
			break;
		case 52:
			uParam0->f_15 = 1452156/*func_4414*/;
			break;
		case 53:
			uParam0->f_13 = 1451561/*func_4412*/;
			break;
		case 54:
			uParam0->f_45 = 1451324/*func_4411*/;
			break;
		case 56:
			uParam0->f_46 = 1451315/*func_4410*/;
			break;
		case 57:
			uParam0->f_11 = 1451250/*func_4409*/;
			break;
		case 58:
			uParam0->f_13 = 1450828/*func_4408*/;
			break;
		case 64:
			uParam0->f_47 = 1450820/*func_4407*/;
			break;
		case 65:
			uParam0->f_21 = 1450812/*func_4406*/;
			break;
		case 66:
			uParam0->f_21 = 1450752/*func_4405*/;
			break;
		case 67:
			uParam0->f_21 = 1450734/*func_4404*/;
			break;
		case 68:
			*uParam0 = 1450725/*func_4403*/;
			break;
		case 69:
			*uParam0 = 1450716/*func_4402*/;
			break;
		case 70:
			uParam0->f_48 = 1450212/*func_4401*/;
			break;
		case 71:
			uParam0->f_49 = 1450064/*func_4400*/;
			break;
		case 107:
			uParam0->f_50 = 1450019/*func_4399*/;
			break;
		case 80:
			uParam0->f_7 = 1450010/*func_4398*/;
			break;
		case 78:
			uParam0->f_59 = 1450002/*func_4397*/;
			break;
		case 125:
			uParam0->f_19 = 1449986/*func_4396*/;
			break;
	}
}

void func_4434(int iParam0, int iParam1)//Position - 0x16A053
{
	struct<3> Var0;
	struct<3> Var1;
	bool bVar2;
	int iVar3;
	int iVar4;
	if (__LIB_1__::func_802(PLAYER::PLAYER_ID()) && __LIB_7__::func_768(PLAYER::PLAYER_ID(), iParam0))
	{
		__LIB_4__::func_769(iParam0, &Var0);
		Var0.f_2 = 0f;
		iVar4 = 0;
		while (iVar4 < __LIB_5__::func_928())
		{
			bVar2 = __LIB_3__::func_594(PLAYER::PLAYER_ID(), iVar4);
			if (((((bVar2 != __LIB_0__::func_162() && bVar2 != PLAYER::PLAYER_ID()) && __LIB_1__::func_693(bVar2, 1, 1)) && !__LIB_1__::func_101(PLAYER::GET_PLAYER_PED(bVar2))) && !__LIB_3__::func_728(bVar2, 14)) && !func_558(bVar2))
			{
				Var1 = { __LIB_1__::func_694(bVar2) };
				Var1.f_2 = 0f;
				if (SYSTEM::VDIST(Var1, Var0) <= IntToFloat(__LIB_3__::func_679(iParam0)))
				{
					iVar3++;
				}
			}
			iVar4++;
		}
		if (iVar3 == 0)
		{
			__LIB_5__::func_189(iParam1, 1, 0);
		}
		else
		{
			__LIB_5__::func_189(iParam1, 1, 1);
		}
		if (__LIB_3__::func_661(1, iParam1))
		{
			if (iVar3 > 0)
			{
				__LIB_7__::func_831(PLAYER::PLAYER_ID(), iParam0, 0f, 0f, 0f, 1, 0, 0, 0, -1, -1, -1);
			}
			Global_1946250.f_504 = -1;
			__LIB_5__::func_947(1, iParam0);
			Global_1946250.f_3607 = 0;
			Global_1946250.f_3612 = 1;
		}
	}
	else
	{
		__LIB_5__::func_189(iParam1, 1, 0);
	}
}

void func_4472(var uParam0, int iParam1)//Position - 0x16C27D
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1526606/*func_4604*/;
			break;
		case 1:
			uParam0->f_30 = 1526496/*func_4603*/;
			break;
		case 2:
			uParam0->f_31 = 1524042/*func_4598*/;
			break;
		case 3:
			uParam0->f_34 = 1524013/*func_4597*/;
			break;
		case 4:
			uParam0->f_12 = 1523853/*func_4596*/;
			break;
		case 6:
			uParam0->f_32 = 1523735/*func_4595*/;
			break;
		case 111:
			uParam0->f_35 = 1523518/*func_4592*/;
			break;
		case 79:
			*uParam0 = 1523494/*func_4591*/;
			break;
		case 37:
			uParam0->f_18 = 1523376/*func_4590*/;
			break;
		case 38:
			uParam0->f_9 = 1523225/*func_4587*/;
			break;
		case 11:
			uParam0->f_11 = 1523216/*func_4586*/;
			break;
		case 12:
			uParam0->f_33 = 1522213/*func_4583*/;
			break;
		case 14:
			uParam0->f_11 = 1522204/*func_4582*/;
			break;
		case 109:
			uParam0->f_56 = 1522196/*func_4581*/;
			break;
		case 13:
			uParam0->f_2 = 1522187/*func_4580*/;
			break;
		case 15:
			uParam0->f_2 = 1522033/*func_4579*/;
			break;
		case 75:
			uParam0->f_4 = 1522024/*func_4578*/;
			break;
		case 16:
			uParam0->f_5 = 1521936/*func_4577*/;
			break;
		case 108:
			uParam0->f_55 = 1521152/*func_4571*/;
			break;
		case 17:
			uParam0->f_17 = 1520524/*func_4567*/;
			break;
		case 19:
			uParam0->f_17 = 1520498/*func_4566*/;
			break;
		case 20:
			uParam0->f_3 = 1520459/*func_4565*/;
			break;
		case 21:
			uParam0->f_3 = 1520399/*func_4564*/;
			break;
		case 74:
			uParam0->f_53 = 1520390/*func_4563*/;
			break;
		case 22:
			uParam0->f_24 = 1520337/*func_4562*/;
			break;
		case 25:
			uParam0->f_23 = 1520033/*func_4561*/;
			break;
		case 30:
			uParam0->f_8 = 1519910/*func_4560*/;
			break;
		case 31:
			uParam0->f_39 = 1519690/*func_4559*/;
			break;
		case 33:
			uParam0->f_40 = 1519405/*func_4558*/;
			break;
		case 34:
			uParam0->f_41 = 1518999/*func_4557*/;
			break;
		case 36:
			uParam0->f_58 = 1518954/*func_4556*/;
			break;
		case 35:
			uParam0->f_42 = 1501425/*func_4555*/;
			break;
		case 45:
			uParam0->f_14 = 1501416/*func_4554*/;
			break;
		case 46:
			uParam0->f_14 = 1501332/*func_4553*/;
			break;
		case 110:
			uParam0->f_57 = 1501324/*func_4552*/;
			break;
		case 77:
			uParam0->f_13 = 1501301/*func_4551*/;
			break;
		case 47:
			uParam0->f_43 = 1501249/*func_4550*/;
			break;
		case 49:
			uParam0->f_8 = 1501217/*func_4549*/;
			break;
		case 50:
			*uParam0 = 1501039/*func_4548*/;
			break;
		case 51:
			*uParam0 = 1500942/*func_4547*/;
			break;
		case 52:
			uParam0->f_15 = 1500931/*func_4546*/;
			break;
		case 53:
			uParam0->f_13 = 1500616/*func_4544*/;
			break;
		case 54:
			uParam0->f_45 = 1499752/*func_4537*/;
			break;
		case 56:
			uParam0->f_46 = 1499743/*func_4536*/;
			break;
		case 57:
			uParam0->f_11 = 1494936/*func_4499*/;
			break;
		case 58:
			uParam0->f_13 = 1494922/*func_4498*/;
			break;
		case 64:
			uParam0->f_47 = 1493414/*func_4484*/;
			break;
		case 65:
			uParam0->f_21 = 1493406/*func_4483*/;
			break;
		case 66:
			uParam0->f_21 = 1493355/*func_4482*/;
			break;
		case 67:
			uParam0->f_21 = 1493327/*func_4481*/;
			break;
		case 68:
			*uParam0 = 1493318/*func_4480*/;
			break;
		case 69:
			*uParam0 = 1493309/*func_4479*/;
			break;
		case 70:
			uParam0->f_48 = 1493025/*func_4478*/;
			break;
		case 71:
			uParam0->f_49 = 1492929/*func_4477*/;
			break;
		case 107:
			uParam0->f_50 = 1492917/*func_4476*/;
			break;
		case 80:
			uParam0->f_7 = 1492731/*func_4475*/;
			break;
		case 78:
			uParam0->f_59 = 1492559/*func_4473*/;
			break;
	}
}

void func_4561(int iParam0, int iParam1)//Position - 0x1731A1
{
	struct<3> Var0;
	struct<3> Var1;
	bool bVar2;
	int iVar3;
	int iVar4;
	if (__LIB_1__::func_744(PLAYER::PLAYER_ID()) && __LIB_5__::func_820(PLAYER::PLAYER_ID(), iParam0))
	{
		__LIB_4__::func_816(iParam0, &Var0);
		Var0.f_2 = 0f;
		iVar4 = 0;
		while (iVar4 < __LIB_5__::func_928())
		{
			bVar2 = __LIB_3__::func_594(PLAYER::PLAYER_ID(), iVar4);
			if (((((bVar2 != __LIB_0__::func_162() && bVar2 != PLAYER::PLAYER_ID()) && __LIB_1__::func_693(bVar2, 1, 1)) && !__LIB_1__::func_101(PLAYER::GET_PLAYER_PED(bVar2))) && !__LIB_3__::func_728(bVar2, 14)) && !func_558(bVar2))
			{
				Var1 = { __LIB_1__::func_694(bVar2) };
				Var1.f_2 = 0f;
				if (SYSTEM::VDIST(Var1, Var0) <= IntToFloat(__LIB_3__::func_679(iParam0)))
				{
					iVar3++;
				}
			}
			iVar4++;
		}
		if (iVar3 == 0)
		{
			__LIB_5__::func_189(iParam1, 1, 0);
		}
		else
		{
			__LIB_5__::func_189(iParam1, 1, 1);
		}
		if (__LIB_3__::func_661(1, iParam1))
		{
			if (iVar3 > 0)
			{
				__LIB_7__::func_831(PLAYER::PLAYER_ID(), iParam0, 0f, 0f, 0f, 1, 0, 0, 0, -1, -1, -1);
			}
			Global_1946250.f_504 = -1;
			__LIB_5__::func_947(1, iParam0);
			Global_1946250.f_3607 = 0;
			Global_1946250.f_3612 = 1;
		}
	}
	else
	{
		__LIB_5__::func_189(iParam1, 1, 0);
	}
}

void func_4605(var uParam0, int iParam1)//Position - 0x174B57
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1554395/*func_4677*/;
			break;
		case 1:
			uParam0->f_30 = 1554249/*func_4676*/;
			break;
		case 2:
			uParam0->f_31 = 1549061/*func_4670*/;
			break;
		case 3:
			uParam0->f_34 = 1549032/*func_4669*/;
			break;
		case 4:
			uParam0->f_12 = 1548622/*func_4667*/;
			break;
		case 6:
			uParam0->f_32 = 1548452/*func_4666*/;
			break;
		case 111:
			uParam0->f_35 = 1548057/*func_4663*/;
			break;
		case 79:
			*uParam0 = 1548033/*func_4662*/;
			break;
		case 11:
			uParam0->f_11 = 1548024/*func_4661*/;
			break;
		case 12:
			uParam0->f_33 = 1547929/*func_4659*/;
			break;
		case 14:
			uParam0->f_11 = 1547920/*func_4658*/;
			break;
		case 109:
			uParam0->f_56 = 1547912/*func_4657*/;
			break;
		case 13:
			uParam0->f_2 = 1547903/*func_4656*/;
			break;
		case 15:
			uParam0->f_2 = 1547618/*func_4653*/;
			break;
		case 75:
			uParam0->f_4 = 1547609/*func_4652*/;
			break;
		case 16:
			uParam0->f_5 = 1547521/*func_4651*/;
			break;
		case 108:
			uParam0->f_55 = 1547512/*func_4650*/;
			break;
		case 17:
			uParam0->f_17 = 1547259/*func_4649*/;
			break;
		case 19:
			uParam0->f_17 = 1547233/*func_4648*/;
			break;
		case 20:
			uParam0->f_3 = 1547224/*func_4647*/;
			break;
		case 21:
			uParam0->f_3 = 1547215/*func_4646*/;
			break;
		case 74:
			uParam0->f_53 = 1547206/*func_4645*/;
			break;
		case 22:
			uParam0->f_24 = 1547198/*func_4644*/;
			break;
		case 25:
			uParam0->f_23 = 1547190/*func_4643*/;
			break;
		case 30:
			uParam0->f_8 = 1547067/*func_4642*/;
			break;
		case 31:
			uParam0->f_39 = 1546821/*func_4641*/;
			break;
		case 33:
			uParam0->f_40 = 1546565/*func_4640*/;
			break;
		case 34:
			uParam0->f_41 = 1544412/*func_4638*/;
			break;
		case 36:
			uParam0->f_58 = 1544367/*func_4637*/;
			break;
		case 35:
			uParam0->f_42 = 1529917/*func_4636*/;
			break;
		case 45:
			uParam0->f_14 = 1529908/*func_4635*/;
			break;
		case 46:
			uParam0->f_14 = 1529899/*func_4634*/;
			break;
		case 110:
			uParam0->f_57 = 1529891/*func_4633*/;
			break;
		case 77:
			uParam0->f_13 = 1529880/*func_4632*/;
			break;
		case 47:
			uParam0->f_43 = 1529828/*func_4631*/;
			break;
		case 49:
			uParam0->f_8 = 1529796/*func_4630*/;
			break;
		case 50:
			*uParam0 = 1529667/*func_4629*/;
			break;
		case 51:
			*uParam0 = 1529643/*func_4628*/;
			break;
		case 52:
			uParam0->f_15 = 1529632/*func_4627*/;
			break;
		case 53:
			uParam0->f_13 = 1528981/*func_4625*/;
			break;
		case 54:
			uParam0->f_45 = 1528345/*func_4621*/;
			break;
		case 56:
			uParam0->f_46 = 1528336/*func_4620*/;
			break;
		case 57:
			uParam0->f_11 = 1528269/*func_4619*/;
			break;
		case 58:
			uParam0->f_13 = 1528255/*func_4618*/;
			break;
		case 64:
			uParam0->f_47 = 1527876/*func_4617*/;
			break;
		case 65:
			uParam0->f_21 = 1527801/*func_4615*/;
			break;
		case 66:
			uParam0->f_21 = 1527750/*func_4614*/;
			break;
		case 67:
			uParam0->f_21 = 1527732/*func_4613*/;
			break;
		case 68:
			*uParam0 = 1527723/*func_4612*/;
			break;
		case 69:
			*uParam0 = 1527714/*func_4611*/;
			break;
		case 70:
			uParam0->f_48 = 1527597/*func_4610*/;
			break;
		case 71:
			uParam0->f_49 = 1527588/*func_4609*/;
			break;
		case 107:
			uParam0->f_50 = 1527576/*func_4608*/;
			break;
		case 80:
			uParam0->f_7 = 1527567/*func_4607*/;
			break;
		case 78:
			uParam0->f_59 = 1527559/*func_4606*/;
			break;
	}
}

void func_4678(var uParam0, int iParam1)//Position - 0x17B7E4
{
	switch (iParam1)
	{
		case 96:
			uParam0->f_1 = 1554862/*func_4685*/;
			break;
		case 97:
			uParam0->f_1 = 1554853/*func_4684*/;
			break;
		case 98:
			uParam0->f_1 = 1554844/*func_4683*/;
			break;
		case 99:
			uParam0->f_1 = 1554684/*func_4682*/;
			break;
		case 100:
			uParam0->f_22 = 1554676/*func_4681*/;
			break;
		case 101:
			uParam0->f_22 = 1554521/*func_4679*/;
			break;
	}
}

void func_4686(var uParam0, int iParam1)//Position - 0x17B9B7
{
	switch (iParam1)
	{
		case 90:
			uParam0->f_1 = 1555079/*func_4691*/;
			break;
		case 91:
			uParam0->f_1 = 1555070/*func_4690*/;
			break;
		case 92:
			uParam0->f_1 = 1555061/*func_4689*/;
			break;
		case 93:
			uParam0->f_1 = 1554684/*func_4682*/;
			break;
		case 94:
			uParam0->f_1 = 1555052/*func_4688*/;
			break;
		case 95:
			uParam0->f_22 = 1554988/*func_4687*/;
			break;
	}
}

void func_4692(var uParam0, int iParam1)//Position - 0x17BA90
{
	switch (iParam1)
	{
		case 84:
			uParam0->f_1 = 1555306/*func_4696*/;
			break;
		case 85:
			uParam0->f_1 = 1555297/*func_4695*/;
			break;
		case 86:
			uParam0->f_1 = 1554684/*func_4682*/;
			break;
		case 87:
			uParam0->f_1 = 1555288/*func_4694*/;
			break;
		case 89:
			uParam0->f_54 = 1555188/*func_4693*/;
			break;
	}
}

bool func_4697(int iParam0)//Position - 0x17BB73
{
	return Local_113.f_2 == iParam0;
}

void func_4698()//Position - 0x17BB82
{
	int iVar0;
	if (INTERIOR::IS_VALID_INTERIOR(Local_113.f_419) && INTERIOR::IS_INTERIOR_READY(Local_113.f_419))
	{
		iVar0 = 0;
		while (iVar0 < 4)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_113.f_448[iVar0]))
			{
				if (INTERIOR::GET_ROOM_KEY_FROM_ENTITY(Local_113.f_448[iVar0]) != joaat("Carpark_Room"))
				{
					INTERIOR::FORCE_ROOM_FOR_ENTITY(Local_113.f_448[iVar0], Local_113.f_419, joaat("Carpark_Room"));
				}
			}
			iVar0++;
		}
	}
}

void func_4699()//Position - 0x17BBF2
{
	if (!__LIB_1__::func_936(PLAYER::PLAYER_ID()) && __LIB_4__::func_969(PLAYER::PLAYER_ID()))
	{
		HUD::SET_RADAR_ZOOM_PRECISE(1f);
	}
	else
	{
		HUD::SET_RADAR_ZOOM_PRECISE(0f);
	}
}

void func_4701()//Position - 0x17BC67
{
	struct<41> Var0;
	if (Global_1946250.f_4588)
	{
		Local_113.f_445 = 0;
		func_4730(1);
		Global_1946250.f_4588 = 0;
	}
	if (((((__LIB_8__::func_163() && CAM::IS_SCREEN_FADED_IN()) && PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) && __LIB_4__::func_969(PLAYER::PLAYER_ID())) && !func_4720(Local_113.f_3)) && !__LIB_3__::func_789(Local_113.f_3))
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "FAKE_ARRIVE", "MP_PROPERTIES_ELEVATOR_DOORS", true);
		__LIB_8__::func_162();
	}
	if (Local_113.f_445 > 0)
	{
		HUD::DISABLE_FRONTEND_THIS_FRAME();
		__LIB_1__::func_33(1);
		HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
	}
	switch (Local_113.f_445)
	{
		case 0:
			if ((((__LIB_9__::func_647() || BitTest(Global_1946250.f_5, 8)) || BitTest(Global_1946250.f_5, 14)) || BitTest(Global_1946250.f_5, 9)) || BitTest(Global_1946250.f_7, 3))
			{
				if (__LIB_3__::func_616() != 5 || BitTest(Global_1946250.f_7, 3))
				{
					HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
					Local_113.f_445 = 1;
					MISC::CLEAR_BIT(&(uLocal_131[PLAYER::PLAYER_ID()]), 1);
					MISC::SET_BIT(&(Global_1946250.f_3), 5);
				}
				else
				{
					Local_113.f_445 = 5;
				}
			}
			break;
		case 1:
			func_4717(PLAYER::PLAYER_ID(), 0f, 0f, -20f);
			Local_113.f_445 = 2;
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 1379.9875f, 180.2417f, -49.9955f, true) < MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 1380.0007f, 257.986f, -49.9955f, true))
			{
				MISC::SET_BIT(&Local_113, 12);
			}
			else
			{
				MISC::CLEAR_BIT(&Local_113, 12);
			}
			break;
		case 2:
			STREAMING::REQUEST_ANIM_DICT("anim@apt_trans@elevator");
			if (!STREAMING::HAS_ANIM_DICT_LOADED("anim@apt_trans@elevator"))
			{
				return;
			}
			if (((ENTITY::DOES_ENTITY_EXIST(Local_113.f_447) && !PED::IS_PED_INJURED(Local_113.f_447)) && ENTITY::IS_ENTITY_VISIBLE(Local_113.f_447)) && ENTITY::IS_ENTITY_VISIBLE_TO_SCRIPT(Local_113.f_447))
			{
				if (!PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(Local_113.f_447))
				{
					return;
				}
			}
			else
			{
				return;
			}
			Local_113.f_445 = 3;
			break;
		case 3:
			if (!CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_OUT())
			{
				if (Local_113.f_446 == -1)
				{
					__LIB_1__::func_376(PLAYER::PLAYER_ID(), 0, 49152, 0);
					ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), true);
					ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1379.4364f, 183.2077f, -49.9955f, true, false, false, true);
					ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 180f);
					TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
					NETWORK::NETWORK_FADE_OUT_ENTITY(PLAYER::PLAYER_PED_ID(), true, true);
					NETWORK::SET_LOCAL_PLAYER_VISIBLE_IN_CUTSCENE(false, true);
					__LIB_6__::func_928(1, 1, 0);
					Local_113.f_444 = CAM::CREATE_CAMERA(joaat("DEFAULT_SCRIPTED_CAMERA"), true);
					CAM::SET_CAM_FAR_CLIP(Local_113.f_444, 1000f);
					CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
					Local_113.f_446 = PED::CREATE_SYNCHRONIZED_SCENE(func_4716(), func_4715(), 2);
					func_4714();
					PED::SET_SYNCHRONIZED_SCENE_PHASE(Local_113.f_446, 0.3f);
					if (CAM::DOES_CAM_EXIST(Local_113.f_444))
					{
						CAM::SET_CAM_PARAMS(Local_113.f_444, func_4713(), func_4712(), 50f, 0, 1, 1, 2);
						CAM::SHAKE_CAM(Local_113.f_444, "HAND_SHAKE", 0.25f);
					}
				}
				else if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_113.f_446) >= 0.9f)
				{
					CAM::DO_SCREEN_FADE_OUT(500);
				}
				else if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_113.f_446) >= 0.7f)
				{
					if (BitTest(Local_113.f_0, 12))
					{
						func_4711(0);
						func_4711(1);
					}
					else
					{
						func_4711(2);
						func_4711(3);
					}
				}
				else
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_113.f_446) >= 0.68f)
					{
						if (!BitTest(Local_113.f_0, 11))
						{
							MISC::SET_BIT(&Local_113, 11);
							AUDIO::PLAY_SOUND_FRONTEND(-1, "BUTTON", "MP_PROPERTIES_ELEVATOR_DOORS", true);
						}
					}
					if (BitTest(Local_113.f_0, 12))
					{
						func_4706(0);
						func_4706(1);
					}
					else
					{
						func_4706(2);
						func_4706(3);
					}
				}
			}
			else if (CAM::IS_SCREEN_FADED_OUT() && __LIB_4__::func_969(PLAYER::PLAYER_ID()))
			{
				func_4730(0);
				MISC::SET_BIT(&(uLocal_131[PLAYER::PLAYER_ID()]), 1);
				Local_113.f_445 = 5;
			}
			break;
		case 5:
			if (BitTest(Global_1946250.f_7, 3))
			{
				MISC::SET_BIT(&(Global_1946250.f_7), 4);
			}
			else if (__LIB_9__::func_647())
			{
				if (__LIB_9__::func_646() == 124)
				{
					if (__LIB_0__::func_509() != 0 && __LIB_3__::func_616() != 5)
					{
						__LIB_4__::func_143();
					}
				}
				else
				{
					__LIB_4__::func_143();
				}
				__LIB_3__::func_889(1);
				func_177(__LIB_9__::func_646(), &Var0, 33);
				__LIB_10__::func_16(PLAYER::PLAYER_ID(), __LIB_9__::func_646(), Var0.f_40, 0, 0, 0, 0, 0);
				__LIB_9__::func_645();
			}
			else if (BitTest(Global_1946250.f_5, 8) || BitTest(Global_1946250.f_5, 14))
			{
				MISC::CLEAR_BIT(&(Global_1946250.f_5), 8);
				__LIB_4__::func_796(1);
				if (!BitTest(Global_1946250.f_5, 14))
				{
					MISC::SET_BIT(&(Global_1946250.f_4), 30);
				}
			}
			else if (BitTest(Global_1946250.f_5, 9))
			{
				__LIB_3__::func_889(1);
				MISC::CLEAR_BIT(&(Global_1946250.f_5), 9);
				__LIB_3__::func_768(Local_113.f_3, -1);
			}
			break;
	}
}

void func_4706(int iParam0)//Position - 0x17C1FF
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	struct<3> Var4;
	fVar0 = (func_4710(iParam0) - func_4709(iParam0));
	fVar1 = (func_4707(iParam0) - func_4707(iParam0));
	fVar2 = 1f;
	fVar3 = 1f;
	if (MISC::ABSF(fVar0) > MISC::ABSF(fVar1))
	{
		fVar3 = (MISC::ABSF(fVar1) / MISC::ABSF(fVar0));
	}
	else if (MISC::ABSF(fVar1) > MISC::ABSF(fVar0))
	{
		fVar2 = (MISC::ABSF(fVar0) / MISC::ABSF(fVar1));
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_113.f_448[iParam0]))
	{
		Var4 = { ENTITY::GET_ENTITY_COORDS(Local_113.f_448[iParam0], true) };
		if (Var4.f_0 == func_4710(iParam0) && Var4.f_1 == func_4707(iParam0))
		{
			if (!BitTest(Local_113.f_0, 7))
			{
				MISC::SET_BIT(&Local_113, 7);
				AUDIO::PLAY_SOUND_FRONTEND(-1, "OPENING", "MP_PROPERTIES_ELEVATOR_DOORS", true);
			}
		}
		if (Var4.f_0 == func_4709(iParam0) && Var4.f_1 == func_4707(iParam0))
		{
			if (!BitTest(Local_113.f_0, 9))
			{
				MISC::SET_BIT(&Local_113, 9);
				AUDIO::PLAY_SOUND_FRONTEND(-1, "OPENED", "MP_PROPERTIES_ELEVATOR_DOORS", true);
			}
		}
		fLocal_137 = (0.4f * fVar2);
		if (fVar0 > 0f)
		{
			Var4.f_0 = (Var4.f_0 - (fLocal_137 * SYSTEM::TIMESTEP()));
			if (Var4.f_0 < func_4709(iParam0))
			{
				Var4.f_0 = func_4709(iParam0);
			}
		}
		if (fVar0 < 0f)
		{
			Var4.f_0 = (Var4.f_0 + (fLocal_137 * SYSTEM::TIMESTEP()));
			if (Var4.f_0 > func_4709(iParam0))
			{
				Var4.f_0 = func_4709(iParam0);
			}
		}
		fLocal_137 = (0.4f * fVar3);
		if (fVar1 > 0f)
		{
			Var4.f_1 = (Var4.f_1 - (fLocal_137 * SYSTEM::TIMESTEP()));
			if (Var4.f_1 < func_4707(iParam0))
			{
				Var4.f_1 = func_4707(iParam0);
			}
		}
		if (fVar1 < 0f)
		{
			Var4.f_1 = (Var4.f_1 + (fLocal_137 * SYSTEM::TIMESTEP()));
			if (Var4.f_1 > func_4707(iParam0))
			{
				Var4.f_1 = func_4707(iParam0);
			}
		}
		ENTITY::SET_ENTITY_COORDS(Local_113.f_448[iParam0], Var4, true, false, false, true);
	}
}

float func_4707(int iParam0)//Position - 0x17C3DA
{
	switch (iParam0)
	{
		case 0:
			return 179.6634f;
		case 1:
			return 179.664f;
		case 2:
			return 258.2452f;
		case 3:
			return 258.2452f;
		default:
	}
	return 0f;
}

float func_4709(int iParam0)//Position - 0x17C46A
{
	switch (iParam0)
	{
		case 0:
			return 1381.5963f;
		case 1:
			return 1378.6102f;
		case 2:
			return 1378.5288f;
		case 3:
			return 1381.5149f;
		default:
	}
	return 0f;
}

float func_4710(int iParam0)//Position - 0x17C4B2
{
	switch (iParam0)
	{
		case 0:
			return 1380.8552f;
		case 1:
			return 1379.3513f;
		case 2:
			return 1379.2699f;
		case 3:
			return 1380.7738f;
		default:
	}
	return 0f;
}

void func_4711(int iParam0)//Position - 0x17C4FA
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	struct<3> Var4;
	fVar0 = (func_4710(iParam0) - func_4709(iParam0));
	fVar1 = (func_4707(iParam0) - func_4707(iParam0));
	fVar2 = 1f;
	fVar3 = 1f;
	if (MISC::ABSF(fVar0) > MISC::ABSF(fVar1))
	{
		fVar3 = (MISC::ABSF(fVar1) / MISC::ABSF(fVar0));
	}
	else if (MISC::ABSF(fVar1) > MISC::ABSF(fVar0))
	{
		fVar2 = (MISC::ABSF(fVar0) / MISC::ABSF(fVar1));
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_113.f_448[iParam0]))
	{
		Var4 = { ENTITY::GET_ENTITY_COORDS(Local_113.f_448[iParam0], true) };
		if (Var4.f_0 == func_4710(iParam0) && Var4.f_1 == func_4707(iParam0))
		{
			if (!BitTest(Local_113.f_0, 10))
			{
				MISC::SET_BIT(&Local_113, 10);
				AUDIO::PLAY_SOUND_FRONTEND(-1, "CLOSED", "MP_PROPERTIES_ELEVATOR_DOORS", true);
			}
		}
		if (Var4.f_0 == func_4709(iParam0) && Var4.f_1 == func_4707(iParam0))
		{
			if (!BitTest(Local_113.f_0, 8))
			{
				MISC::SET_BIT(&Local_113, 8);
				AUDIO::PLAY_SOUND_FRONTEND(-1, "CLOSING", "MP_PROPERTIES_ELEVATOR_DOORS", true);
			}
		}
		fLocal_137 = (0.4f * fVar2);
		if (fVar0 < 0f)
		{
			Var4.f_0 = (Var4.f_0 - (fLocal_137 * SYSTEM::TIMESTEP()));
			if (Var4.f_0 < func_4710(iParam0))
			{
				Var4.f_0 = func_4710(iParam0);
			}
		}
		if (fVar0 > 0f)
		{
			Var4.f_0 = (Var4.f_0 + (fLocal_137 * SYSTEM::TIMESTEP()));
			if (Var4.f_0 > func_4710(iParam0))
			{
				Var4.f_0 = func_4710(iParam0);
			}
		}
		fLocal_137 = (0.4f * fVar3);
		if (fVar1 < 0f)
		{
			Var4.f_1 = (Var4.f_1 - (fLocal_137 * SYSTEM::TIMESTEP()));
			if (Var4.f_1 < func_4707(iParam0))
			{
				Var4.f_1 = func_4707(iParam0);
			}
		}
		if (fVar1 > 0f)
		{
			Var4.f_1 = (Var4.f_1 + (fLocal_137 * SYSTEM::TIMESTEP()));
			if (Var4.f_1 > func_4707(iParam0))
			{
				Var4.f_1 = func_4707(iParam0);
			}
		}
		ENTITY::SET_ENTITY_COORDS(Local_113.f_448[iParam0], Var4, true, false, false, true);
	}
}

Vector3 func_4712()//Position - 0x17C6DA
{
	if (BitTest(Local_113.f_0, 12))
	{
		return -12.6185f, 0f, -145.9632f;
	}
	return -10.6456f, 0f, 27.7174f;
}

Vector3 func_4713()//Position - 0x17C703
{
	if (BitTest(Local_113.f_0, 12))
	{
		return 1378.9702f, 181.7238f, -48.1101f;
	}
	return 1381.1157f, 255.9078f, -48.0196f;
}

void func_4714()//Position - 0x17C734
{
	if (ENTITY::DOES_ENTITY_EXIST(Local_113.f_447) && !PED::IS_PED_INJURED(Local_113.f_447))
	{
		ENTITY::FREEZE_ENTITY_POSITION(Local_113.f_447, false);
		ENTITY::SET_ENTITY_ROTATION(Local_113.f_447, PED::GET_ANIM_INITIAL_OFFSET_ROTATION("anim@apt_trans@elevator", "elev_1", func_4716(), func_4715(), 0f, 2), 2, true);
		ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_113.f_447, PED::GET_ANIM_INITIAL_OFFSET_POSITION("anim@apt_trans@elevator", "elev_1", func_4716(), func_4715(), 0f, 2), false, false, true);
		TASK::TASK_SYNCHRONIZED_SCENE(Local_113.f_447, Local_113.f_446, "anim@apt_trans@elevator", "elev_1", 1000f, -1000f, 4, 0, 1000f, 0);
	}
}

Vector3 func_4715()//Position - 0x17C7D2
{
	if (BitTest(Local_113.f_0, 12))
	{
		return 0f, 0f, 0f;
	}
	return 0f, 0f, 180f;
}

Vector3 func_4716()//Position - 0x17C7EF
{
	if (BitTest(Local_113.f_0, 12))
	{
		return 1380.176f, 180.079f, -49.9954f;
	}
	return 1379.95f, 257.779f, -49.9954f;
}

void func_4717(int iParam0, struct<3> Param1)//Position - 0x17C820
{
	if (!ENTITY::DOES_ENTITY_EXIST(Local_113.f_447))
	{
		if (__LIB_1__::func_693(iParam0, 1, 1))
		{
			if (!__LIB_1__::func_394())
			{
				Local_113.f_447 = PED::CREATE_PED(4, ENTITY::GET_ENTITY_MODEL(PLAYER::GET_PLAYER_PED(iParam0)), ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), true) + Param1, ENTITY::GET_ENTITY_HEADING(PLAYER::GET_PLAYER_PED(iParam0)), false, false);
			}
			else
			{
				Local_113.f_447 = PED::CREATE_PED(5, ENTITY::GET_ENTITY_MODEL(PLAYER::GET_PLAYER_PED(iParam0)), ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), true) + Param1, ENTITY::GET_ENTITY_HEADING(PLAYER::GET_PLAYER_PED(iParam0)), false, false);
			}
			PED::CLONE_PED_TO_TARGET(PLAYER::GET_PLAYER_PED(iParam0), Local_113.f_447);
			if (INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::GET_PLAYER_PED(iParam0))))
			{
				if (INTERIOR::IS_INTERIOR_READY(INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::GET_PLAYER_PED(iParam0))))
				{
					INTERIOR::FORCE_ROOM_FOR_ENTITY(Local_113.f_447, INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::GET_PLAYER_PED(iParam0)), INTERIOR::GET_ROOM_KEY_FROM_ENTITY(PLAYER::GET_PLAYER_PED(iParam0)));
				}
			}
			ENTITY::FREEZE_ENTITY_POSITION(Local_113.f_447, true);
			WEAPON::SET_CURRENT_PED_WEAPON(Local_113.f_447, joaat("WEAPON_UNARMED"), true);
			PED::SET_FORCE_FOOTSTEP_UPDATE(Local_113.f_447, true);
		}
	}
}

int func_4720(int iParam0)//Position - 0x17C94B
{
	if (func_4728(iParam0))
	{
		if (__LIB_6__::func_118())
		{
			return 1;
		}
	}
	else
	{
		return 0;
	}
	if (!__LIB_6__::func_118() && Global_1946244 != 0)
	{
		return 0;
	}
	if (__LIB_4__::func_843())
	{
		return 0;
	}
	if (func_4724(iParam0))
	{
		return 0;
	}
	if ((__LIB_1__::func_579() || __LIB_2__::func_899()) || Global_1852994.f_171)
	{
		return 0;
	}
	if (__LIB_3__::func_599())
	{
		return 0;
	}
	if (__LIB_3__::func_598())
	{
		return 0;
	}
	if (__LIB_5__::func_241(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (__LIB_5__::func_424(PLAYER::PLAYER_ID()) && !__LIB_6__::func_117(iParam0))
	{
		return 0;
	}
	if (((__LIB_0__::func_172(iParam0) == 11 && !__LIB_5__::func_846(0)) && __LIB_0__::func_509() != 0) && __LIB_3__::func_595(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_9, 4))
	{
		return 0;
	}
	if (__LIB_9__::func_870(iParam0))
	{
		return 0;
	}
	if (Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_9 != __LIB_0__::func_162())
	{
		if (BitTest(Global_1853348[Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_9 /*834*/].f_267.f_284, 5))
		{
			return 0;
		}
	}
	if (Global_1946250.f_4698 == iParam0)
	{
		return 0;
	}
	if (func_4724(iParam0))
	{
		return 0;
	}
	if (func_4728(iParam0))
	{
		if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			return 1;
		}
	}
	return 0;
}

int func_4724(int iParam0)//Position - 0x17CB73
{
	var uVar0;
	if (!NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 0;
	}
	if (__LIB_1__::func_19() == 31 && __LIB_1__::func_125(Global_4718592.f_116524))
	{
		return 0;
	}
	uVar0 = { func_4725(iParam0) };
	return BitTest(uVar0[0], 16);
}

Vector3 func_4725(int iParam0)//Position - 0x17CBBA
{
	struct<3> Var0;
	struct<35> Var1;
	if (iParam0 == -1 || iParam0 == 159)
	{
		Var0 = 2;
		return Var0;
	}
	if (Global_1946250.f_14[iParam0 /*3*/][0] == -1 || !BitTest(Global_1946250, 3))
	{
		func_177(iParam0, &Var1, 3);
		Stack.Push(iParam0);
		Call_Loc(Var1.f_34);
		Global_1946250.f_14[iParam0 /*3*/] = { StackVal, StackVal, StackVal };
	}
	return Global_1946250.f_14[iParam0 /*3*/];
}

bool func_4728(int iParam0)//Position - 0x17CC69
{
	var uVar0;
	uVar0 = { func_4725(iParam0) };
	return BitTest(uVar0[0], 10);
}

void func_4730(bool bParam0)//Position - 0x17CC93
{
	if (Local_113.f_446 != -1)
	{
		if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_113.f_446))
		{
			if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_113.f_446) < 1f)
			{
				PED::SET_SYNCHRONIZED_SCENE_PHASE(Local_113.f_446, 1f);
			}
		}
		Local_113.f_446 = -1;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_113.f_447))
	{
		PED::DELETE_PED(&(Local_113.f_447));
	}
	if (CAM::DOES_CAM_EXIST(Local_113.f_444))
	{
		CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
		CAM::DESTROY_CAM(Local_113.f_444, false);
	}
	if (NETWORK::NETWORK_IS_IN_MP_CUTSCENE() && BitTest(Global_1946250.f_3, 5))
	{
		__LIB_7__::func_45(0, 0, 0, 1);
	}
	MISC::CLEAR_BIT(&Local_113, 7);
	MISC::CLEAR_BIT(&Local_113, 8);
	MISC::CLEAR_BIT(&Local_113, 9);
	MISC::CLEAR_BIT(&Local_113, 10);
	MISC::CLEAR_BIT(&Local_113, 11);
	MISC::CLEAR_BIT(&Local_113, 12);
	if (bParam0)
	{
		MISC::CLEAR_BIT(&(Global_1946250.f_3), 5);
		MISC::CLEAR_BIT(&(Global_1946250.f_5), 8);
		MISC::CLEAR_BIT(&(Global_1946250.f_5), 9);
	}
}

void func_4731()//Position - 0x17CD78
{
	if ((ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && __LIB_0__::func_121(PLAYER::PLAYER_PED_ID())) && !Global_1957741)
	{
		PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 46, true);
		PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 47, true);
		PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 102, true);
	}
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 80 /*INPUT_VEH_CIN_CAM*/, true);
	if ((!NETWORK::NETWORK_IS_ACTIVITY_SESSION() && !__LIB_3__::func_558()) && func_4697(0))
	{
		PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 44 /*INPUT_COVER*/);
		PAD::DISABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 44 /*INPUT_COVER*/, true);
	}
	if (CAM::IS_CINEMATIC_CAM_RENDERING())
	{
		CAM::SET_CINEMATIC_MODE_ACTIVE(false);
	}
}

void func_4732()//Position - 0x17CE02
{
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1378.8057f, 178.24295f, -49.96939f, 1381.351f, 178.24413f, -47.9935f, 2.5f, false, true, 0))
		{
			ENTITY::SET_ENTITY_COORDS_NO_OFFSET(PLAYER::PLAYER_PED_ID(), 1380.2441f, 185.5523f, -49.9955f, false, false, true);
			ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 358.6089f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
		}
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1381.3185f, 259.5966f, -49.99158f, 1378.736f, 259.5936f, -47.9935f, 2.5f, false, true, 0))
		{
			ENTITY::SET_ENTITY_COORDS_NO_OFFSET(PLAYER::PLAYER_PED_ID(), 1380.1345f, 251.5347f, -49.9955f, false, false, true);
			ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 166.7005f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
		}
	}
}

bool func_4734(int iParam0, int iParam1)//Position - 0x17CEFF
{
	bool bVar0;
	bVar0 = !NETWORK::NETWORK_IS_SCRIPT_ACTIVE("AM_MP_SMPL_INTERIOR_INT", iParam0, true, 0);
	if (!bVar0 && func_4735(iParam1))
	{
		bVar0 = true;
	}
	if (BitTest(Global_2815059.f_428.f_5, 0) && ((!CAM::IS_SCREEN_FADING_OUT() || CAM::IS_SCREEN_FADED_OUT()) || HUD::IS_WARNING_MESSAGE_ACTIVE()))
	{
		bVar0 = true;
	}
	if ((Global_1946250.f_4590 == iParam1 && !__LIB_3__::func_171(PLAYER::PLAYER_ID())) && CAM::IS_SCREEN_FADED_OUT())
	{
		bVar0 = true;
	}
	if (BitTest(Global_1946250.f_5, 2) && CAM::IS_SCREEN_FADED_OUT())
	{
		MISC::CLEAR_BIT(&(Global_1946250.f_5), 2);
		bVar0 = true;
	}
	if (bVar0)
	{
		OBJECT::SET_ONLY_ALLOW_AMMO_COLLECTION_WHEN_LOW(true);
	}
	return bVar0;
}

int func_4735(int iParam0)//Position - 0x17CFAF
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION() && !func_4736(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_4736(int iParam0)//Position - 0x17CFCF
{
	var uVar0;
	if (!Global_1946250.f_3634)
	{
		return 0;
	}
	uVar0 = { func_4725(iParam0) };
	return BitTest(uVar0[1], 22);
}

void func_4744()//Position - 0x17D112
{
	__LIB_0__::func_794(&(Global_1946250.f_530));
	HUD::SET_RADAR_ZOOM_PRECISE(0f);
	__LIB_5__::func_453();
	__LIB_5__::func_452();
	func_4730(1);
	func_4746();
	MISC::CLEAR_BIT(&(Global_1946250.f_4), 26);
	if (BitTest(Local_113.f_0, 13))
	{
		if (__LIB_0__::func_1("CASINO_EXIT_0PC" /* GXT: Press ~INPUT_FRONTEND_RS~ to leave the Parking Garage. */) || __LIB_0__::func_1("CASINO_EXIT_0" /* GXT: Press ~INPUT_CONTEXT~ to leave the Parking Garage. */))
		{
			HUD::CLEAR_HELP(true);
		}
		MISC::CLEAR_BIT(&Local_113, 13);
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 342, false);
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 429, false);
		ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false);
		ENTITY::SET_ENTITY_CAN_BE_DAMAGED(PLAYER::PLAYER_PED_ID(), true);
		PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(PLAYER::PLAYER_PED_ID(), true);
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 106, false);
	}
	__LIB_0__::func_714(&(Local_113.f_453));
	__LIB_0__::func_714(&(Local_113.f_454));
	__LIB_0__::func_202();
}

void func_4746()//Position - 0x17D1DF
{
	if (ENTITY::DOES_ENTITY_EXIST(Local_113.f_448[0]))
	{
		OBJECT::DELETE_OBJECT(&(Local_113.f_448[0]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_113.f_448[1]))
	{
		OBJECT::DELETE_OBJECT(&(Local_113.f_448[1]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_113.f_448[2]))
	{
		OBJECT::DELETE_OBJECT(&(Local_113.f_448[2]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_113.f_448[3]))
	{
		OBJECT::DELETE_OBJECT(&(Local_113.f_448[3]));
	}
}

void func_4747(var uParam0)//Position - 0x17D253
{
	Local_113.f_3 = *uParam0;
	Local_113.f_1 = uParam0->f_2;
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(32, false, Local_113.f_1);
	__LIB_0__::func_895(0, -1, 0);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_114, 27, 0);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&uLocal_131, 33, 0);
	if (!__LIB_0__::func_934())
	{
		func_4744();
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
	}
	else
	{
		func_4744();
	}
	MISC::SET_BIT(&(uLocal_131[PLAYER::PLAYER_ID()]), 1);
	func_4751();
	Global_1946109 = 0;
	func_4748();
}

void func_4748()//Position - 0x17D2C6
{
	if (Local_113.f_3 != -1)
	{
		Global_1957730 = 0;
		func_4749(Local_113.f_3, &(Local_113.f_4), 0, 0);
		if (Global_1946250.f_499 > -1)
		{
			Global_1946250.f_499 = -1;
		}
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 342, true);
			ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), true);
			ENTITY::SET_ENTITY_CAN_BE_DAMAGED(PLAYER::PLAYER_PED_ID(), false);
			PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(PLAYER::PLAYER_PED_ID(), false);
			PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 106, true);
		}
	}
}

void func_4749(int iParam0, var uParam1, int iParam2, int iParam3)//Position - 0x17D33A
{
	var uVar0;
	func_4750(iParam0, uParam1, &uVar0, iParam2, iParam3);
}

void func_4750(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4)//Position - 0x17D350
{
	struct<33> Var0;
	func_177(iParam0, &Var0, 2);
	func_177(iParam0, &Var0, 6);
	func_177(iParam0, &Var0, 1);
	Stack.Push(iParam0);
	Stack.Push(uParam1);
	Stack.Push(uParam3);
	Stack.Push(uParam4);
	Call_Loc(Var0.f_31);
	Stack.Push(iParam0);
	Stack.Push(&(uParam1->f_389));
	Stack.Push(uParam3);
	Call_Loc(Var0.f_32);
	Stack.Push(iParam0);
	Stack.Push(uParam2);
	Stack.Push(uParam1);
	Stack.Push(&(uParam1->f_4));
	Stack.Push(uParam3);
	Call_Loc(Var0.f_30);
}

void func_4751()//Position - 0x17D39F
{
	ENTITY::CREATE_MODEL_HIDE_EXCLUDING_SCRIPT_OBJECTS(1380.8552f, 179.6634f, -49.9991f, 2f, joaat("v_ilev_garageliftdoor"), true);
	ENTITY::CREATE_MODEL_HIDE_EXCLUDING_SCRIPT_OBJECTS(1379.3513f, 179.664f, -49.9991f, 2f, joaat("v_ilev_garageliftdoor"), true);
	ENTITY::CREATE_MODEL_HIDE_EXCLUDING_SCRIPT_OBJECTS(1379.2699f, 258.2452f, -49.9988f, 2f, joaat("v_ilev_garageliftdoor"), true);
	ENTITY::CREATE_MODEL_HIDE_EXCLUDING_SCRIPT_OBJECTS(1380.7738f, 258.2452f, -49.9988f, 2f, joaat("v_ilev_garageliftdoor"), true);
}

