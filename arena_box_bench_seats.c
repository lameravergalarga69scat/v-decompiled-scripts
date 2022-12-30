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
	int iLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	var uLocal_43 = 0;
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
	struct<282> Local_93 = { 20, 0, 0, 0, 0, 0, 0, 0, 1061158912, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1061158912, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1061158912, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1061158912, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1061158912, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1061158912, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1061158912, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1061158912, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1061158912, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1061158912, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1061158912, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1061158912, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1061158912, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1061158912, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1061158912, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1061158912, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1061158912, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1061158912, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1061158912, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1061158912, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_94 = -1;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = -1;
	var uLocal_100 = -1;
	var uLocal_101 = -1;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	struct<15> Local_112 = { 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10 } ;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	struct<2> Local_123[32];
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
	iLocal_28 = 3;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	fLocal_62 = ((0.05f + 0.275f) - 0.01f);
	if (func_160())
	{
		while (!func_150())
		{
			SYSTEM::WAIT(0);
			func_59(&Local_93, &Local_112);
			func_46();
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
			{
				func_36(&Local_93, &Local_112);
				func_35();
			}
		}
	}
	func_1();
}

void func_1()//Position - 0xC9
{
	func_3(&Local_93, &Local_112);
	Global_2787910 = 0;
	__LIB_0__::func_202();
}

void func_3(var uParam0, var uParam1)//Position - 0xEF
{
	int iVar0;
	if (__LIB_0__::func_624(&(uParam0->f_281), 15))
	{
		func_33();
		MISC::CLEAR_BIT(&Global_2787913, 8);
		__LIB_2__::func_487(&(uParam0->f_281), 15);
	}
	__LIB_3__::func_122(&(uParam0->f_281.f_6));
	func_25(uParam0, 1);
	if (uParam0->f_281.f_5 > 2)
	{
		if (uParam0->f_281.f_2 >= 0 && uParam0->f_281.f_2 < 10)
		{
			if (((ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(uParam1->f_14[uParam0->f_281.f_2])) && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(uParam1->f_14[uParam0->f_281.f_2]))
			{
				if (ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(NETWORK::NET_TO_OBJ(uParam1->f_14[uParam0->f_281.f_2]), PLAYER::PLAYER_PED_ID()))
				{
					ENTITY::DETACH_ENTITY(NETWORK::NET_TO_OBJ(uParam1->f_14[uParam0->f_281.f_2]), false, true);
					__LIB_1__::func_445(&(uParam1->f_14[uParam0->f_281.f_2]));
				}
			}
		}
		if ((!BitTest(Global_1965531, 7) && !BitTest(Global_1965531, 3)) && !__LIB_6__::func_200(PLAYER::PLAYER_ID()))
		{
			__LIB_5__::func_848(-1);
			__LIB_13__::func_590(-1);
		}
		Global_2787911 = 0;
		MISC::CLEAR_BIT(&Global_2787913, 6);
		iVar0 = NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(uParam0->f_281.f_1);
		if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iVar0))
		{
			NETWORK::NETWORK_STOP_SYNCHRONISED_SCENE(uParam0->f_281.f_1);
		}
		if ((uParam0->f_281.f_9 == 1 && !STREAMING::IS_NEW_LOAD_SCENE_ACTIVE()) && __LIB_0__::func_893())
		{
			__LIB_1__::func_376(PLAYER::PLAYER_ID(), 1, 0, 0);
		}
		__LIB_1__::func_91();
	}
}

void func_25(var uParam0, int iParam1)//Position - 0xAB2
{
	if (func_26())
	{
		HUD::CLEAR_HELP(true);
	}
	if (iParam1 && uParam0->f_281.f_6 != -1)
	{
		__LIB_3__::func_122(&(uParam0->f_281.f_6));
		uParam0->f_281.f_6 = -1;
	}
}

int func_26()//Position - 0xAEC
{
	if ((BitTest(Global_4718592.f_32, 23) && !BitTest(Global_1965532, 13)) && !BitTest(Global_1965532, 19))
	{
		return 0;
	}
	if ((BitTest(Global_4718592.f_30, 25) && !BitTest(Global_1965532, 15)) && !BitTest(Global_1965532, 19))
	{
		return 0;
	}
	if ((((((((((((__LIB_0__::func_1("MPOFSEAT_PCEXIT" /* GXT: Press ~INPUT_SCRIPT_RRIGHT~ to stand up. */) || __LIB_0__::func_1("MPOFSEAT_EXIT" /* GXT: Press ~INPUT_FRONTEND_RIGHT~ to stand up. */)) || __LIB_0__::func_1("ARENA_SEAT" /* GXT: Press ~INPUT_SCRIPT_RDOWN~ to fly a Battle Drone.~n~Press ~INPUT_SCRIPT_RRIGHT~ to drive an RC Bandito.~n~Press ~INPUT_SCRIPT_RLEFT~ to use the Trap Cam.~n~Press ~INPUT_SCRIPT_RUP~ to use a Turret.~n~Press ~INPUT_SCRIPT_PAD_RIGHT~ to stand up. */)) || __LIB_0__::func_1("ARENA_SEAT_PC" /* GXT: Press ~INPUT_SCRIPT_RDOWN~ to fly a Battle Drone.~n~Press ~INPUT_SCRIPT_RRIGHT~ to drive an RC Bandito.~n~Press ~INPUT_SCRIPT_RLEFT~ to use the Trap Cam.~n~Press ~INPUT_SCRIPT_RUP~ to use a Turret.~n~Press ~INPUT_SCRIPT_PAD_RIGHT~ to stand up. */)) || __LIB_13__::func_291("ARENA_SEAT1" /* GXT: Press ~INPUT_SCRIPT_RDOWN~ to use Spectator Cam for $~1~.~n~Press ~INPUT_SCRIPT_RLEFT~ to fly a Spectator Drone for $~1~.~n~Press ~INPUT_SCRIPT_PAD_RIGHT~ to stand up. */, Global_262145.f_26633 /* Tunable: -887378230 */, Global_262145.f_26634 /* Tunable: -76677190 */)) || __LIB_13__::func_291("ARENA_SEAT_PC1" /* GXT: Press ~INPUT_SCRIPT_RDOWN~ to use Spectator Cam for $~1~.~n~Press ~INPUT_SCRIPT_RLEFT~ to fly a Spectator Drone for $~1~.~n~Press ~INPUT_SCRIPT_PAD_RIGHT~ to stand up. */, Global_262145.f_26633 /* Tunable: -887378230 */, Global_262145.f_26634 /* Tunable: -76677190 */)) || __LIB_5__::func_831("ARENA_SEAT2" /* GXT: Press ~INPUT_SCRIPT_RDOWN~ to use Spectator Cam for $~1~.~n~Press ~INPUT_SCRIPT_RLEFT~ to fly a Spectator Drone.~n~Press ~INPUT_SCRIPT_PAD_RIGHT~ to stand up. */, Global_262145.f_26633 /* Tunable: -887378230 */)) || __LIB_5__::func_831("ARENA_SEAT_PC2" /* GXT: Press ~INPUT_SCRIPT_RDOWN~ to use Spectator Cam for $~1~.~n~Press ~INPUT_SCRIPT_RLEFT~ to fly a Spectator Drone.~n~Press ~INPUT_SCRIPT_PAD_RIGHT~ to stand up. */, Global_262145.f_26633 /* Tunable: -887378230 */)) || __LIB_5__::func_831("ARENA_SEAT3" /* GXT: Press ~INPUT_SCRIPT_RDOWN~ to use Spectator Cam.~n~Press ~INPUT_SCRIPT_RLEFT~ to fly a Spectator Drone for $~1~.~n~Press ~INPUT_SCRIPT_PAD_RIGHT~ to stand up. */, Global_262145.f_26634 /* Tunable: -76677190 */)) || __LIB_5__::func_831("ARENA_SEAT_PC3" /* GXT: Press ~INPUT_SCRIPT_RDOWN~ to use Spectator Cam.~n~Press ~INPUT_SCRIPT_RLEFT~ to fly a Spectator Drone for $~1~.~n~Press ~INPUT_SCRIPT_PAD_RIGHT~ to stand up. */, Global_262145.f_26634 /* Tunable: -76677190 */)) || __LIB_0__::func_1("ARENA_SEAT4" /* GXT: Press ~INPUT_SCRIPT_RDOWN~ to use Spectator Cam.~n~Press ~INPUT_SCRIPT_RLEFT~ to fly a Spectator Drone.~n~Press ~INPUT_SCRIPT_PAD_RIGHT~ to stand up. */)) || __LIB_0__::func_1("ARENA_SEAT_PC4" /* GXT: Press ~INPUT_SCRIPT_RDOWN~ to use Spectator Cam.~n~Press ~INPUT_SCRIPT_RLEFT~ to fly a Spectator Drone.~n~Press ~INPUT_SCRIPT_PAD_RIGHT~ to stand up. */)) || __LIB_0__::func_1("ARENA_SEAT_EX" /* GXT: Press ~INPUT_SCRIPT_PAD_RIGHT~ to stand up. */))
	{
		return 1;
	}
	return 0;
}

void func_33()//Position - 0xD17
{
	PAD::SHUTDOWN_PC_SCRIPTED_CONTROLS();
}

void func_35()//Position - 0xD31
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bVar0 = false;
	while (bVar0 < 32)
	{
		iVar1 = 0;
		bVar2 = PLAYER::INT_TO_PLAYERINDEX(bVar0);
		if (bVar2 != __LIB_0__::getMinusOneOrNull() && NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(bVar2))
		{
			if (BitTest(Local_123[bVar2 /*2*/], 0))
			{
				if (!BitTest(Local_112.f_13, bVar2))
				{
					if (Local_123[bVar2 /*2*/].f_1 != 0)
					{
						if (BitTest(Local_123[bVar2 /*2*/].f_1, 0))
						{
							iVar3 = 0;
							while (iVar3 < 10)
							{
								if (Local_112.f_2[iVar3] < 0)
								{
									Local_112.f_2[iVar3] = bVar2;
									MISC::SET_BIT(&(Local_112.f_13), bVar2);
								}
								else
								{
									iVar3++;
								}
							}
						}
						else
						{
							iVar4 = 0;
							while (iVar4 < 10)
							{
								if (BitTest(Local_123[bVar2 /*2*/].f_1, iVar4 + 1))
								{
									Local_112.f_2[iVar4] = bVar2;
									MISC::SET_BIT(&(Local_112.f_13), bVar2);
								}
								else
								{
									iVar4++;
								}
							}
						}
					}
				}
			}
			else
			{
				iVar1 = 1;
			}
		}
		else
		{
			iVar1 = 1;
		}
		if (iVar1 && bVar2 != PLAYER::PLAYER_ID())
		{
			if (BitTest(Local_112.f_13, bVar0))
			{
				iVar5 = 0;
				while (iVar5 < 10)
				{
					if (Local_112.f_2[iVar5] == bVar0)
					{
						if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_112.f_14[iVar5]))
						{
							if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_112.f_14[iVar5]))
							{
								Local_112.f_2[iVar5] = -1;
								__LIB_1__::func_445(&(Local_112.f_14[iVar5]));
								MISC::CLEAR_BIT(&(Local_112.f_13), bVar0);
							}
							else
							{
								NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_112.f_14[iVar5]);
							}
							else
							{
								Jump @393; //curOff = 369
								Local_112.f_2[iVar5] = -1;
								MISC::CLEAR_BIT(&(Local_112.f_13), bVar0);
								iVar5++;
							}
							bVar0++;
						}
void func_36(var uParam0, var uParam1)//Position - 0xECF
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	struct<3> Var3;
	STREAMING::REQUEST_ANIM_DICT(func_43());
	if (!STREAMING::HAS_ANIM_DICT_LOADED(func_43()))
	{
		return;
	}
	if (*uParam1)
	{
		if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(uParam1->f_14[uParam0->f_281.f_4]))
		{
			iVar0 = joaat("xs_prop_arena_tablet_drone_01");
			STREAMING::REQUEST_MODEL(iVar0);
			if (!STREAMING::HAS_MODEL_LOADED(iVar0))
			{
				return;
			}
			if (__LIB_2__::func_852(NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(false, 1) + 1, 0, 1))
			{
				if (!BitTest(uParam1->f_1, uParam0->f_281.f_4))
				{
					NETWORK::RESERVE_LOCAL_NETWORK_MISSION_OBJECTS(NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(false, 1) + 1);
					MISC::SET_BIT(&(uParam1->f_1), uParam0->f_281.f_4);
				}
				else if (NETWORK::CAN_REGISTER_MISSION_OBJECTS(1))
				{
					Var2 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION(func_43(), "enter_tablet", (uParam0[uParam0->f_281.f_4 /*14*/])->f_8, (uParam0[uParam0->f_281.f_4 /*14*/])->f_8.f_3, 0f, 2) };
					Var3 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION(func_43(), "enter_tablet", (uParam0[uParam0->f_281.f_4 /*14*/])->f_8, (uParam0[uParam0->f_281.f_4 /*14*/])->f_8.f_3, 0f, 2) };
					iVar1 = OBJECT::CREATE_OBJECT(iVar0, Var2, true, true, false);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
					ENTITY::SET_ENTITY_CAN_BE_DAMAGED(iVar1, false);
					ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iVar1, Var2, false, false, true);
					ENTITY::SET_ENTITY_ROTATION(iVar1, Var3, 2, true);
					ENTITY::FREEZE_ENTITY_POSITION(iVar1, true);
					uParam1->f_14[uParam0->f_281.f_4] = NETWORK::OBJ_TO_NET(iVar1);
				}
			}
		}
		uParam0->f_281.f_4++;
		if (uParam0->f_281.f_4 >= 10)
		{
			uParam0->f_281.f_4 = 0;
		}
	}
}

char* func_43()//Position - 0x1276
{
	if (__LIB_1__::func_394())
	{
		return "anim@arena@amb@seat_drone_tablet@female@";
	}
	return "anim@arena@amb@seat_drone_tablet@male@";
}

void func_46()//Position - 0x12BD
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (Local_112.f_0)
	{
		iVar0 = 1;
		iVar1 = 0;
		while (iVar1 < 10)
		{
			if (Local_112.f_2[iVar1] == -1 || Local_112.f_2[iVar1] == PLAYER::PLAYER_ID())
			{
				iVar0 = 0;
				if (Local_112.f_2[iVar1] == -1)
				{
					if ((iVar1 <= 7 && __LIB_13__::func_601()) && __LIB_31__::func_726())
					{
						ENTITY::CREATE_MODEL_HIDE(func_51(iVar1), 0.5f, joaat("xs_prop_x18_vip_greeenlight"), true);
					}
					else
					{
						ENTITY::REMOVE_MODEL_HIDE(func_51(iVar1), 0.5f, joaat("xs_prop_x18_vip_greeenlight"), false);
					}
				}
				else
				{
					ENTITY::CREATE_MODEL_HIDE(func_51(iVar1), 0.5f, joaat("xs_prop_x18_vip_greeenlight"), true);
				}
			}
			else
			{
				ENTITY::CREATE_MODEL_HIDE(func_51(iVar1), 0.5f, joaat("xs_prop_x18_vip_greeenlight"), true);
			}
			iVar1++;
		}
		Global_2787910 = iVar0;
	}
	else
	{
		Global_2787910 = 0;
	}
	if (Local_93.f_281.f_5 == 4)
	{
		if (!BitTest(Local_123[PLAYER::PLAYER_ID() /*2*/], 0))
		{
			MISC::SET_BIT(&(Local_123[PLAYER::PLAYER_ID() /*2*/]), 0);
			if (__LIB_4__::func_47())
			{
				MISC::SET_BIT(&(Local_123[PLAYER::PLAYER_ID() /*2*/].f_1), 0);
			}
			else if (Local_93.f_281.f_9 == 1)
			{
				MISC::SET_BIT(&(Local_123[PLAYER::PLAYER_ID() /*2*/].f_1), Local_93.f_281.f_2 + 1);
			}
		}
		else if (BitTest(Local_112.f_13, PLAYER::PLAYER_ID()))
		{
			if (__LIB_4__::func_473() < 0)
			{
				iVar2 = 0;
				while (iVar2 < 10)
				{
					if (Local_112.f_2[iVar2] == PLAYER::PLAYER_ID())
					{
						__LIB_5__::func_848(iVar2);
					}
					iVar2++;
				}
			}
		}
	}
	else if ((!BitTest(Global_1965531, 7) && !BitTest(Global_1965531, 3)) && !__LIB_6__::func_200(PLAYER::PLAYER_ID()))
	{
		if (__LIB_4__::func_47())
		{
			if (__LIB_4__::func_46() && CAM::IS_SCREEN_FADED_IN())
			{
				__LIB_11__::func_965(0);
			}
		}
		if (BitTest(Local_123[PLAYER::PLAYER_ID() /*2*/], 0))
		{
			if (!__LIB_4__::func_46() && __LIB_4__::func_473() < 0)
			{
				if (__LIB_4__::func_47())
				{
					__LIB_11__::func_965(0);
				}
				MISC::CLEAR_BIT(&(Local_123[PLAYER::PLAYER_ID() /*2*/]), 0);
				Local_123[PLAYER::PLAYER_ID() /*2*/].f_1 = 0;
			}
		}
	}
}

Vector3 func_51(int iParam0)//Position - 0x1502
{
	switch (iParam0)
	{
		case 0:
			return 2800.331f, -3922.829f, 181.4558f;
		case 1:
			return 2799.3013f, -3922.829f, 181.4558f;
		case 2:
			return 2798.2683f, -3922.829f, 181.4558f;
		case 3:
			return 2797.2427f, -3922.829f, 181.4558f;
		case 4:
			return 2796.2126f, -3922.829f, 181.4558f;
		case 5:
			return 2795.1782f, -3922.829f, 181.4558f;
		case 6:
			return 2794.1526f, -3922.829f, 181.4558f;
		case 7:
			return 2793.1226f, -3922.829f, 181.4558f;
		case 8:
			return 2792.0867f, -3922.829f, 181.4558f;
		case 9:
			return 2791.061f, -3922.829f, 181.4558f;
		default:
	}
	return 0f, 0f, 0f;
}

void func_59(var uParam0, int iParam1)//Position - 0x17A8
{
	char* sVar0;
	char* sVar1;
	int iVar2;
	int iVar3;
	struct<3> Var4;
	struct<3> Var5;
	bool bVar6;
	int iVar7;
	struct<3> Var8;
	float fVar9;
	float fVar10;
	float fVar11;
	struct<3> Var12;
	int iVar13;
	int iVar14;
	struct<3> Var15;
	struct<3> Var16;
	int iVar17;
	int iVar18;
	struct<3> Var19;
	struct<3> Var20;
	func_147(uParam0);
	func_145(uParam0);
	func_133(uParam0);
	switch (uParam0->f_281.f_5)
	{
		case 0:
			__LIB_2__::func_487(&(uParam0->f_281), 11);
			func_132(uParam0, 1);
			break;
		case 1:
			if (func_131(uParam0))
			{
				uParam0->f_281.f_7 = MISC::GET_GAME_TIMER();
				func_132(uParam0, 2);
			}
			else if (__LIB_4__::func_47())
			{
				uParam0->f_281.f_7 = MISC::GET_GAME_TIMER();
				func_132(uParam0, 2);
			}
			break;
		case 2:
			if ((__LIB_13__::func_598(PLAYER::PLAYER_PED_ID(), uParam0[uParam0->f_281.f_2 /*14*/]) && func_129(PLAYER::PLAYER_PED_ID(), (uParam0[uParam0->f_281.f_2 /*14*/])->f_8.f_3)) && !__LIB_4__::func_47())
			{
				if ((((((func_128(uParam0) || Global_1931426) || func_126(uParam0)) || !func_125(uParam0)) || ((uParam0->f_281.f_2 < 10 && iParam1->f_2[uParam0->f_281.f_2] != -1) && iParam1->f_2[uParam0->f_281.f_2] != PLAYER::PLAYER_ID())) || ((uParam0->f_281.f_2 <= 7 && __LIB_13__::func_601()) && __LIB_31__::func_726())) || (uParam0->f_281.f_2 < 10 && Global_262145.f_26630 /* Tunable: -1263858477 */))
				{
					if (!Global_1931426 && ((uParam0->f_281.f_2 < 10 && iParam1->f_2[uParam0->f_281.f_2] != -1) && iParam1->f_2[uParam0->f_281.f_2] != PLAYER::PLAYER_ID()))
					{
						iVar3 = PLAYER::GET_PLAYER_PED(iParam1->f_2[uParam0->f_281.f_2]);
						if (ENTITY::DOES_ENTITY_EXIST(iVar3) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(iVar3, 2797.9878f, -3954.8984f, 181.00049f, 2797.9492f, -3930.8503f, 187.4114f, 30f, false, true, 0))
						{
							if (uParam0->f_281.f_6 == -1)
							{
								__LIB_5__::func_569(&(uParam0->f_281.f_6), 4, "ARENA_SEAT_FULL" /* GXT: Unavailable. This seat is currently reserved for ~a~. */, 0, PLAYER::GET_PLAYER_NAME(iParam1->f_2[uParam0->f_281.f_2]), 0, 1);
							}
						}
						else
						{
							func_25(uParam0, 1);
							func_132(uParam0, 1);
						}
					}
					else if ((uParam0->f_281.f_2 <= 7 && __LIB_13__::func_601()) && __LIB_31__::func_726())
					{
						if (uParam0->f_281.f_6 == -1)
						{
							__LIB_5__::func_569(&(uParam0->f_281.f_6), 4, "ARENA_SEAT_NO" /* GXT: Unavailable. Weaponized tablets are reserved for players that are active in the match. */, 0, 0, 0, 0);
						}
					}
					else
					{
						func_25(uParam0, 1);
						func_132(uParam0, 1);
					}
				}
				else if (uParam0->f_281.f_6 == -1)
				{
					if ((MISC::GET_GAME_TIMER() - uParam0->f_281.f_7) > 150)
					{
						if (uParam0->f_281.f_2 <= 9)
						{
							__LIB_5__::func_569(&(uParam0->f_281.f_6), 4, "AR_SEAT_PRMPT" /* GXT: Press ~INPUT_CONTEXT~ to use the Spectator Tablet. */, 0, 0, 0, 0);
						}
						else
						{
							__LIB_5__::func_569(&(uParam0->f_281.f_6), 4, "MPJAC_SIT" /* GXT: Press ~INPUT_CONTEXT~ to sit down. */, 0, 0, 0, 0);
						}
					}
				}
				else if (PAD::IS_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 51 /*INPUT_CONTEXT*/))
				{
					__LIB_3__::func_122(&(uParam0->f_281.f_6));
					func_121(uParam0);
					if (uParam0->f_281.f_9 == 1)
					{
						__LIB_1__::func_376(PLAYER::PLAYER_ID(), 0, 256, 0);
						func_132(uParam0, 4);
					}
					else
					{
						func_132(uParam0, 3);
					}
				}
			}
			else if (__LIB_4__::func_47())
			{
				__LIB_3__::func_122(&(uParam0->f_281.f_6));
				func_132(uParam0, 4);
			}
			else
			{
				func_25(uParam0, 1);
				func_132(uParam0, 1);
			}
			break;
		case 4:
			if (__LIB_4__::func_473() >= 0)
			{
				if (__LIB_4__::func_47())
				{
					uParam0->f_281.f_2 = __LIB_4__::func_473();
					if (ENTITY::IS_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID()))
					{
						NETWORK::NETWORK_FADE_OUT_ENTITY(PLAYER::PLAYER_PED_ID(), false, true);
					}
					__LIB_2__::func_486(&(uParam0->f_281), 14);
				}
				func_121(uParam0);
				func_132(uParam0, 3);
			}
			if (!__LIB_4__::func_47())
			{
				if ((uParam0->f_281.f_2 < 10 && iParam1->f_2[uParam0->f_281.f_2] != -1) && iParam1->f_2[uParam0->f_281.f_2] != PLAYER::PLAYER_ID())
				{
					func_25(uParam0, 1);
					if (uParam0->f_281.f_9 == 1)
					{
						__LIB_1__::func_376(PLAYER::PLAYER_ID(), 1, 0, 0);
					}
					__LIB_1__::func_91();
					func_132(uParam0, 1);
				}
			}
			break;
		case 3:
			func_119(uParam0, &sVar0);
			if (uParam0->f_281.f_9 == 1)
			{
				if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(iParam1->f_14[uParam0->f_281.f_2]))
				{
					return;
				}
				if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(iParam1->f_14[uParam0->f_281.f_2]))
				{
					NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(iParam1->f_14[uParam0->f_281.f_2]);
				}
			}
			STREAMING::REQUEST_ANIM_DICT(&sVar0);
			if (STREAMING::HAS_ANIM_DICT_LOADED(&sVar0))
			{
				__LIB_1__::func_92();
				func_132(uParam0, 5);
			}
			break;
		case 5:
			func_119(uParam0, &sVar0);
			func_117(uParam0, &sVar1, 0);
			Var4 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION(&sVar0, &sVar1, func_116(uParam0), func_115(uParam0), 0f, 2) };
			Var5 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION(&sVar0, &sVar1, func_116(uParam0), func_115(uParam0), 0f, 2) };
			if (__LIB_0__::func_624(&(uParam0->f_281), 14))
			{
				bVar6 = true;
				if (func_114() >= 0)
				{
					bVar6 = false;
				}
				if (__LIB_3__::func_72(Var4, Var5.f_2, 0, 0, 0, 0, 1, bVar6, 1, 0, 0) && Global_2787912)
				{
					func_132(uParam0, 6);
				}
				else if (!Global_2787912)
				{
				}
			}
			else if (Global_2787912)
			{
				if (uParam0->f_281.f_9 == 1)
				{
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(iParam1->f_14[uParam0->f_281.f_2]) && !NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(iParam1->f_14[uParam0->f_281.f_2]))
					{
						NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(iParam1->f_14[uParam0->f_281.f_2]);
					}
				}
				TASK::TASK_GO_STRAIGHT_TO_COORD(PLAYER::PLAYER_PED_ID(), Var4, 1f, 500, Var5.f_2, 0.05f);
				__LIB_5__::func_848(uParam0->f_281.f_2);
				func_132(uParam0, 6);
			}
			else if (!Global_2787912)
			{
			}
			break;
		case 6:
			if (uParam0->f_281.f_9 == 1)
			{
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(iParam1->f_14[uParam0->f_281.f_2]) && !NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(iParam1->f_14[uParam0->f_281.f_2]))
				{
					NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(iParam1->f_14[uParam0->f_281.f_2]);
				}
			}
			func_119(uParam0, &sVar0);
			func_117(uParam0, &sVar1, 0);
			iVar7 = TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_GO_STRAIGHT_TO_COORD"));
			Var8 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION(&sVar0, &sVar1, func_116(uParam0), func_115(uParam0), 0f, 2) };
			fVar9 = Var8.f_2;
			if (((iVar7 != 1 && iVar7 != 0) || __LIB_3__::func_526(ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()), fVar9, 5f)) || __LIB_0__::func_624(&(uParam0->f_281), 14))
			{
				fVar10 = 1f;
				fVar11 = 0f;
				Var12 = { func_116(uParam0) };
				if (__LIB_0__::func_624(&(uParam0->f_281), 14))
				{
					fVar10 = 2f;
					fVar11 = 0.9f;
				}
				uParam0->f_281.f_1 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(Var12, func_115(uParam0), 2, true, false, 1f, fVar11, fVar10);
				NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), uParam0->f_281.f_1, &sVar0, &sVar1, 2f, -1000f, 13, 16, 1000f, 0);
				NETWORK::NETWORK_START_SYNCHRONISED_SCENE(uParam0->f_281.f_1);
				uParam0->f_281.f_9.f_4 = MISC::GET_GAME_TIMER();
				__LIB_2__::func_486(&(uParam0->f_281), 8);
				func_132(uParam0, 7);
			}
			break;
		case 7:
			if (uParam0->f_281.f_9 == 1)
			{
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(iParam1->f_14[uParam0->f_281.f_2]) && !NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(iParam1->f_14[uParam0->f_281.f_2]))
				{
					NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(iParam1->f_14[uParam0->f_281.f_2]);
				}
			}
			if (__LIB_0__::func_624(&(uParam0->f_281), 10))
			{
				__LIB_2__::func_487(&(uParam0->f_281), 10);
				if (uParam0->f_281.f_2 >= 0 && uParam0->f_281.f_2 < 10)
				{
					AUDIO::PLAY_SOUND_FROM_ENTITY(iVar13, "Exit_Menu", NETWORK::NET_TO_OBJ(iParam1->f_14[uParam0->f_281.f_2]), "DLC_AW_Spectator_Tablet_Sounds", true, 0);
				}
				func_100(uParam0);
			}
			func_62(uParam0, iParam1);
			iVar2 = NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(uParam0->f_281.f_1);
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iVar2))
			{
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iVar2) >= 1f)
				{
					if (!Global_2787911)
					{
						if (!ENTITY::IS_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID()) && !NETWORK::NETWORK_IS_ENTITY_FADING(PLAYER::PLAYER_PED_ID()))
						{
							if (Global_1574965)
							{
								NETWORK::NETWORK_FADE_IN_ENTITY(PLAYER::PLAYER_PED_ID(), true, 1);
							}
						}
					}
					if (!__LIB_4__::func_46())
					{
						if (uParam0->f_281.f_9 == 1)
						{
							if (uParam0->f_281.f_2 >= 0 && uParam0->f_281.f_2 < 10)
							{
								AUDIO::PLAY_SOUND_FROM_ENTITY(iVar14, "Enter_Menu", NETWORK::NET_TO_OBJ(iParam1->f_14[uParam0->f_281.f_2]), "DLC_AW_Spectator_Tablet_Sounds", true, 0);
							}
							__LIB_13__::func_590(uParam0->f_281.f_2);
						}
						else
						{
							__LIB_13__::func_590(uParam0->f_281.f_2 + 20);
						}
						Global_2787911 = 1;
					}
					else
					{
						Global_2787911 = 1;
					}
					func_60(uParam0, 0);
					func_119(uParam0, &sVar0);
					func_117(uParam0, &sVar1, 0);
					uParam0->f_281.f_1 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_116(uParam0), func_115(uParam0), 2, true, false, 1f, 0f, 1f);
					NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), uParam0->f_281.f_1, &sVar0, &sVar1, 4f, -1.5f, 13, 16, 1000f, 0);
					NETWORK::NETWORK_START_SYNCHRONISED_SCENE(uParam0->f_281.f_1);
					__LIB_2__::func_486(&(uParam0->f_281), 8);
					__LIB_2__::func_486(&(uParam0->f_281), 11);
				}
				else
				{
					if (uParam0->f_281.f_9 == 1 && (ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), joaat("attachtablet")) || PED::GET_SYNCHRONIZED_SCENE_PHASE(iVar2) > 0.25f))
					{
						if ((NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(iParam1->f_14[uParam0->f_281.f_2]) && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(iParam1->f_14[uParam0->f_281.f_2])) && !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_OBJ(iParam1->f_14[uParam0->f_281.f_2]), false))
						{
							if (!ENTITY::IS_ENTITY_ATTACHED(NETWORK::NET_TO_OBJ(iParam1->f_14[uParam0->f_281.f_2])))
							{
								ENTITY::ATTACH_ENTITY_TO_ENTITY(NETWORK::NET_TO_OBJ(iParam1->f_14[uParam0->f_281.f_2]), PLAYER::PLAYER_PED_ID(), PED::GET_PED_BONE_INDEX(PLAYER::PLAYER_PED_ID(), 28422), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
							}
						}
					}
					__LIB_2__::func_487(&(uParam0->f_281), 8);
				}
			}
			else if (!__LIB_0__::func_624(&(uParam0->f_281), 8) && uParam0->f_281.f_5 == 7)
			{
				if (uParam0->f_281.f_9 == 1 && uParam0->f_281.f_2 >= 0)
				{
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(iParam1->f_14[uParam0->f_281.f_2]) && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(iParam1->f_14[uParam0->f_281.f_2]))
					{
						if (ENTITY::IS_ENTITY_ATTACHED(NETWORK::NET_TO_OBJ(iParam1->f_14[uParam0->f_281.f_2])))
						{
							ENTITY::DETACH_ENTITY(NETWORK::NET_TO_OBJ(iParam1->f_14[uParam0->f_281.f_2]), false, true);
						}
						__LIB_1__::func_445(&(iParam1->f_14[uParam0->f_281.f_2]));
					}
				}
				func_132(uParam0, 9);
			}
			break;
		case 8:
			if (uParam0->f_281.f_9 == 1)
			{
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(iParam1->f_14[uParam0->f_281.f_2]) && !NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(iParam1->f_14[uParam0->f_281.f_2]))
				{
					NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(iParam1->f_14[uParam0->f_281.f_2]);
				}
			}
			NETWORK::NETWORK_STOP_SYNCHRONISED_SCENE(uParam0->f_281.f_1);
			if (uParam0->f_281.f_9 == 1 && uParam0->f_281.f_2 >= 0)
			{
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(iParam1->f_14[uParam0->f_281.f_2]) && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(iParam1->f_14[uParam0->f_281.f_2]))
				{
					if (ENTITY::IS_ENTITY_ATTACHED(NETWORK::NET_TO_OBJ(iParam1->f_14[uParam0->f_281.f_2])))
					{
						ENTITY::DETACH_ENTITY(NETWORK::NET_TO_OBJ(iParam1->f_14[uParam0->f_281.f_2]), false, true);
					}
					Var15 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION(func_43(), "enter_tablet", (uParam0[uParam0->f_281.f_2 /*14*/])->f_8, (uParam0[uParam0->f_281.f_2 /*14*/])->f_8.f_3, 0f, 2) };
					Var16 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION(func_43(), "enter_tablet", (uParam0[uParam0->f_281.f_2 /*14*/])->f_8, (uParam0[uParam0->f_281.f_2 /*14*/])->f_8.f_3, 0f, 2) };
					ENTITY::SET_ENTITY_COORDS_NO_OFFSET(NETWORK::NET_TO_OBJ(iParam1->f_14[uParam0->f_281.f_2]), Var15, false, false, true);
					ENTITY::SET_ENTITY_ROTATION(NETWORK::NET_TO_OBJ(iParam1->f_14[uParam0->f_281.f_2]), Var16, 2, true);
					ENTITY::FREEZE_ENTITY_POSITION(NETWORK::NET_TO_OBJ(iParam1->f_14[uParam0->f_281.f_2]), true);
				}
			}
			func_132(uParam0, 9);
			break;
		case 9:
			if (__LIB_0__::func_624(&(uParam0->f_281), 15))
			{
				func_33();
				MISC::CLEAR_BIT(&Global_2787913, 8);
				__LIB_2__::func_487(&(uParam0->f_281), 15);
			}
			if (uParam0->f_281.f_9 == 1)
			{
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(iParam1->f_14[uParam0->f_281.f_2]) && !NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(iParam1->f_14[uParam0->f_281.f_2]))
				{
					NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(iParam1->f_14[uParam0->f_281.f_2]);
				}
			}
			iVar17 = NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(uParam0->f_281.f_1);
			iVar18 = TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE"));
			if (iVar18 == 0 || iVar18 == 1)
			{
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iVar17))
				{
					if ((PED::GET_SYNCHRONIZED_SCENE_PHASE(iVar17) >= 0.7f || ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), joaat("breakout_finish"))) || ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), joaat("break_out")))
					{
						NETWORK::NETWORK_STOP_SYNCHRONISED_SCENE(uParam0->f_281.f_1);
						if ((!BitTest(Global_1965531, 7) && !BitTest(Global_1965531, 3)) && !__LIB_6__::func_200(PLAYER::PLAYER_ID()))
						{
							__LIB_5__::func_848(-1);
							__LIB_13__::func_590(-1);
						}
						Global_2787911 = 0;
						MISC::CLEAR_BIT(&Global_2787913, 6);
						func_25(uParam0, 1);
						__LIB_2__::func_487(&(uParam0->f_281), 14);
						if (uParam0->f_281.f_9 == 1 && uParam0->f_281.f_2 >= 0)
						{
							if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(iParam1->f_14[uParam0->f_281.f_2]) && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(iParam1->f_14[uParam0->f_281.f_2]))
							{
								if (ENTITY::IS_ENTITY_ATTACHED(NETWORK::NET_TO_OBJ(iParam1->f_14[uParam0->f_281.f_2])))
								{
									ENTITY::DETACH_ENTITY(NETWORK::NET_TO_OBJ(iParam1->f_14[uParam0->f_281.f_2]), false, true);
								}
								Var19 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION(func_43(), "enter_tablet", (uParam0[uParam0->f_281.f_2 /*14*/])->f_8, (uParam0[uParam0->f_281.f_2 /*14*/])->f_8.f_3, 0f, 2) };
								Var20 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION(func_43(), "enter_tablet", (uParam0[uParam0->f_281.f_2 /*14*/])->f_8, (uParam0[uParam0->f_281.f_2 /*14*/])->f_8.f_3, 0f, 2) };
								ENTITY::SET_ENTITY_COORDS_NO_OFFSET(NETWORK::NET_TO_OBJ(iParam1->f_14[uParam0->f_281.f_2]), Var19, false, false, true);
								ENTITY::SET_ENTITY_ROTATION(NETWORK::NET_TO_OBJ(iParam1->f_14[uParam0->f_281.f_2]), Var20, 2, true);
								ENTITY::FREEZE_ENTITY_POSITION(NETWORK::NET_TO_OBJ(iParam1->f_14[uParam0->f_281.f_2]), true);
							}
						}
						if (!STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
						{
							if (uParam0->f_281.f_9 == 1)
							{
								__LIB_1__::func_376(PLAYER::PLAYER_ID(), 1, 0, 0);
							}
						}
						__LIB_1__::func_91();
						func_132(uParam0, 0);
					}
					else if (ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), joaat("detachtablet")))
					{
						if (uParam0->f_281.f_9 == 1)
						{
							if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(iParam1->f_14[uParam0->f_281.f_2]) && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(iParam1->f_14[uParam0->f_281.f_2]))
							{
								if (ENTITY::IS_ENTITY_ATTACHED(NETWORK::NET_TO_OBJ(iParam1->f_14[uParam0->f_281.f_2])))
								{
									ENTITY::DETACH_ENTITY(NETWORK::NET_TO_OBJ(iParam1->f_14[uParam0->f_281.f_2]), false, true);
								}
							}
						}
					}
				}
			}
			else
			{
				if (uParam0->f_281.f_9 == 1 && uParam0->f_281.f_2 >= 0)
				{
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(iParam1->f_14[uParam0->f_281.f_2]) && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(iParam1->f_14[uParam0->f_281.f_2]))
					{
						if (ENTITY::IS_ENTITY_ATTACHED(NETWORK::NET_TO_OBJ(iParam1->f_14[uParam0->f_281.f_2])))
						{
							ENTITY::DETACH_ENTITY(NETWORK::NET_TO_OBJ(iParam1->f_14[uParam0->f_281.f_2]), false, true);
						}
						__LIB_1__::func_445(&(iParam1->f_14[uParam0->f_281.f_2]));
					}
				}
				if ((!BitTest(Global_1965531, 7) && !BitTest(Global_1965531, 3)) && !__LIB_6__::func_200(PLAYER::PLAYER_ID()))
				{
					__LIB_5__::func_848(-1);
					__LIB_13__::func_590(-1);
				}
				Global_2787911 = 0;
				MISC::CLEAR_BIT(&Global_2787913, 6);
				func_25(uParam0, 1);
				__LIB_2__::func_487(&(uParam0->f_281), 14);
				if (!STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
				{
					if (uParam0->f_281.f_9 == 1)
					{
						__LIB_1__::func_376(PLAYER::PLAYER_ID(), 1, 0, 0);
					}
				}
				__LIB_1__::func_91();
				func_132(uParam0, 0);
			}
			break;
	}
}

void func_60(var uParam0, bool bParam1)//Position - 0x27A9
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (bParam1)
	{
		iVar1 = func_61(uParam0);
		if (iVar1 != uParam0->f_281.f_9.f_1)
		{
			if (iVar1 == 0)
			{
				iVar0 = (11 + uParam0->f_281.f_9.f_1);
			}
			else
			{
				iVar0 = (6 + iVar1);
			}
		}
		else
		{
			iVar0 = uParam0->f_281.f_9.f_2;
		}
		iVar1 = uParam0->f_281.f_9.f_1;
	}
	else if (uParam0->f_281.f_9.f_2 == 5)
	{
		iVar1 = uParam0->f_281.f_9.f_1;
		iVar2 = 3;
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar2);
		if (iVar0 == uParam0->f_281.f_9.f_3)
		{
			iVar0 = (iVar0 + 1 % iVar2);
		}
	}
	else
	{
		if (uParam0->f_281.f_9.f_2 > 6)
		{
			iVar1 = func_61(uParam0);
			uParam0->f_281.f_9.f_4 = MISC::GET_GAME_TIMER();
		}
		else
		{
			iVar1 = uParam0->f_281.f_9.f_1;
		}
		if ((MISC::GET_GAME_TIMER() - uParam0->f_281.f_9.f_4) >= 90000)
		{
			iVar1 = func_61(uParam0);
			if (iVar1 != uParam0->f_281.f_9.f_1)
			{
				if (iVar1 == 0)
				{
					iVar0 = (11 + uParam0->f_281.f_9.f_1);
				}
				else
				{
					iVar0 = (6 + iVar1);
				}
			}
			iVar1 = uParam0->f_281.f_9.f_1;
		}
		else
		{
			iVar0 = 5;
		}
	}
	uParam0->f_281.f_9.f_3 = uParam0->f_281.f_9.f_2;
	uParam0->f_281.f_9.f_2 = iVar0;
	uParam0->f_281.f_9.f_1 = iVar1;
}

int func_61(var uParam0)//Position - 0x28F4
{
	return uParam0->f_281.f_9.f_1;
}

void func_62(var uParam0, var uParam1)//Position - 0x2905
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	if ((BitTest(Global_1965531, 7) || BitTest(Global_1965531, 3)) || __LIB_6__::func_200(PLAYER::PLAYER_ID()))
	{
		if (uParam0->f_281.f_5 == 7 && CAM::IS_SCREEN_FADED_OUT())
		{
			func_3(uParam0, uParam1);
			func_132(uParam0, 9);
		}
	}
	if (__LIB_0__::func_624(&(uParam0->f_281), 13))
	{
		iVar0 = func_92(&(uParam0->f_281.f_17));
		if (iVar0 == 1)
		{
			if (uParam0->f_281.f_2 >= 0 && uParam0->f_281.f_2 < 10)
			{
				AUDIO::PLAY_SOUND_FROM_ENTITY(iVar1, "Select_Turret", NETWORK::NET_TO_OBJ(uParam1->f_14[uParam0->f_281.f_2]), "DLC_AW_Spectator_Tablet_Sounds", true, 0);
			}
			MISC::SET_BIT(&Global_1965531, 9);
			__LIB_2__::func_487(&(uParam0->f_281), 13);
		}
		else if (iVar0 == 2)
		{
			if (!BitTest(Global_2787913, 7))
			{
				MISC::SET_BIT(&Global_2787913, 7);
			}
			AUDIO::PLAY_SOUND_FRONTEND(-1, "ERROR", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
			__LIB_2__::func_487(&(uParam0->f_281), 13);
		}
	}
	if (uParam0->f_281.f_5 == 7)
	{
		if (PAD::HAVE_CONTROLS_CHANGED(2 /*FRONTEND_CONTROL*/))
		{
			func_25(uParam0, 1);
		}
		if (ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), joaat("block_interrupt")))
		{
			func_25(uParam0, 1);
			if (__LIB_0__::func_624(&(uParam0->f_281), 15))
			{
				func_33();
				MISC::CLEAR_BIT(&Global_2787913, 8);
				__LIB_2__::func_487(&(uParam0->f_281), 15);
			}
		}
		else if ((((((((((((((((((((((__LIB_0__::func_624(&(uParam0->f_281), 13) || !Global_1574965) || (!BitTest(Global_1965531, 23) && !func_91())) || Global_2789734) || Global_2789737) || BitTest(Global_1958711, 13)) || BitTest(Global_1965531, 14)) || BitTest(Global_1958711, 9)) || BitTest(Global_2787913, 0)) || BitTest(Global_1965531, 6)) || BitTest(Global_1965531, 7)) || BitTest(Global_1965531, 8)) || BitTest(Global_1965531, 9)) || BitTest(Global_1965531, 2)) || BitTest(Global_1965531, 3)) || BitTest(Global_1965531, 4)) || BitTest(Global_1965531, 5)) || __LIB_6__::func_200(PLAYER::PLAYER_ID())) || __LIB_4__::func_47()) || PAD::IS_DISABLED_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 19 /*INPUT_CHARACTER_WHEEL*/)) || !CAM::IS_SCREEN_FADED_IN()) || __LIB_18__::func_670(PLAYER::PLAYER_ID())) || Global_2787934 != 0)
		{
			func_25(uParam0, 1);
			if (!BitTest(Global_1965531, 23))
			{
				if (!__LIB_0__::func_624(&(uParam0->f_281), 15) && Global_2787934 == 0)
				{
					func_87("ARENA SPECTATOR BOX TABLETS");
					MISC::SET_BIT(&Global_2787913, 8);
					__LIB_2__::func_486(&(uParam0->f_281), 15);
				}
			}
			else if (__LIB_0__::func_624(&(uParam0->f_281), 15))
			{
				func_33();
				MISC::CLEAR_BIT(&Global_2787913, 8);
				__LIB_2__::func_487(&(uParam0->f_281), 15);
			}
		}
		else if (func_86(uParam0))
		{
			func_25(uParam0, 1);
			if (__LIB_0__::func_624(&(uParam0->f_281), 15))
			{
				func_33();
				MISC::CLEAR_BIT(&Global_2787913, 8);
				__LIB_2__::func_487(&(uParam0->f_281), 15);
			}
		}
		else
		{
			if (!__LIB_0__::func_624(&(uParam0->f_281), 15))
			{
				func_87("ARENA SPECTATOR BOX TABLETS");
				MISC::SET_BIT(&Global_2787913, 8);
				__LIB_2__::func_486(&(uParam0->f_281), 15);
			}
			PAD::ALLOW_ALTERNATIVE_SCRIPT_CONTROLS_LAYOUT(2 /*FRONTEND_CONTROL*/);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 24 /*INPUT_ATTACK*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 257 /*INPUT_ATTACK2*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 142 /*INPUT_MELEE_ATTACK_ALTERNATE*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 141 /*INPUT_MELEE_ATTACK_HEAVY*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 140 /*INPUT_MELEE_ATTACK_LIGHT*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 263 /*INPUT_MELEE_ATTACK1*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 264 /*INPUT_MELEE_ATTACK2*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 143 /*INPUT_MELEE_BLOCK*/, true);
			PAD::DISABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 200 /*INPUT_FRONTEND_PAUSE_ALTERNATE*/, true);
			bVar2 = false;
			if (__LIB_13__::func_593())
			{
				bVar2 = true;
			}
			if (__LIB_5__::func_831("ARENA_VIP_CASH1" /* GXT: You do not have enough money. It costs $~1~ to use Spectator Cam. */, Global_262145.f_26633 /* Tunable: -887378230 */))
			{
				MISC::CLEAR_BIT(&Global_2787913, 5);
			}
			if (__LIB_5__::func_831("ARENA_VIP_CASH2" /* GXT: You do not have enough money. It costs $~1~ to fly a Spectator Drone. */, Global_262145.f_26634 /* Tunable: -76677190 */))
			{
				MISC::CLEAR_BIT(&Global_2787913, 4);
			}
			if (__LIB_0__::func_1("ARENA_VIP_ABIL" /* GXT: This option is currently unavailable. */))
			{
				MISC::CLEAR_BIT(&Global_2787913, 7);
			}
			if (BitTest(Global_2787913, 4) && uParam0->f_281.f_6 == -1)
			{
				__LIB_5__::func_832("ARENA_VIP_CASH2" /* GXT: You do not have enough money. It costs $~1~ to fly a Spectator Drone. */, Global_262145.f_26634 /* Tunable: -76677190 */, 2000);
			}
			if (BitTest(Global_2787913, 5) && uParam0->f_281.f_6 == -1)
			{
				__LIB_5__::func_832("ARENA_VIP_CASH1" /* GXT: You do not have enough money. It costs $~1~ to use Spectator Cam. */, Global_262145.f_26633 /* Tunable: -887378230 */, 2000);
			}
			if (BitTest(Global_2787913, 7) && uParam0->f_281.f_6 == -1)
			{
				__LIB_0__::func_151("ARENA_VIP_ABIL" /* GXT: This option is currently unavailable. */, 2000);
			}
			if ((BitTest(Global_2787913, 4) || BitTest(Global_2787913, 5)) || BitTest(Global_2787913, 7))
			{
				func_25(uParam0, 1);
			}
			if ((((((((!HUD::IS_PAUSE_MENU_ACTIVE() && !Global_1931426) && !__LIB_0__::func_624(&(uParam0->f_281), 0)) && !__LIB_0__::func_624(&(uParam0->f_281), 4)) && !__LIB_1__::func_512()) && !__LIB_2__::func_65(1)) && uParam0->f_281.f_9.f_2 != 3) && !HUD::IS_WARNING_MESSAGE_ACTIVE()) && !__LIB_0__::func_193())
			{
				if (bVar2)
				{
					if (__LIB_13__::func_601() && !__LIB_31__::func_726())
					{
						if (((((__LIB_13__::func_291("ARENA_SEAT_PC1" /* GXT: Press ~INPUT_SCRIPT_RDOWN~ to use Spectator Cam for $~1~.~n~Press ~INPUT_SCRIPT_RLEFT~ to fly a Spectator Drone for $~1~.~n~Press ~INPUT_SCRIPT_PAD_RIGHT~ to stand up. */, Global_262145.f_26633 /* Tunable: -887378230 */, Global_262145.f_26634 /* Tunable: -76677190 */) || __LIB_5__::func_831("ARENA_SEAT_PC2" /* GXT: Press ~INPUT_SCRIPT_RDOWN~ to use Spectator Cam for $~1~.~n~Press ~INPUT_SCRIPT_RLEFT~ to fly a Spectator Drone.~n~Press ~INPUT_SCRIPT_PAD_RIGHT~ to stand up. */, Global_262145.f_26633 /* Tunable: -887378230 */)) || __LIB_5__::func_831("ARENA_SEAT_PC3" /* GXT: Press ~INPUT_SCRIPT_RDOWN~ to use Spectator Cam.~n~Press ~INPUT_SCRIPT_RLEFT~ to fly a Spectator Drone for $~1~.~n~Press ~INPUT_SCRIPT_PAD_RIGHT~ to stand up. */, Global_262145.f_26634 /* Tunable: -76677190 */)) || __LIB_13__::func_291("ARENA_SEAT1" /* GXT: Press ~INPUT_SCRIPT_RDOWN~ to use Spectator Cam for $~1~.~n~Press ~INPUT_SCRIPT_RLEFT~ to fly a Spectator Drone for $~1~.~n~Press ~INPUT_SCRIPT_PAD_RIGHT~ to stand up. */, Global_262145.f_26633 /* Tunable: -887378230 */, Global_262145.f_26634 /* Tunable: -76677190 */)) || __LIB_5__::func_831("ARENA_SEAT2" /* GXT: Press ~INPUT_SCRIPT_RDOWN~ to use Spectator Cam for $~1~.~n~Press ~INPUT_SCRIPT_RLEFT~ to fly a Spectator Drone.~n~Press ~INPUT_SCRIPT_PAD_RIGHT~ to stand up. */, Global_262145.f_26633 /* Tunable: -887378230 */)) || __LIB_5__::func_831("ARENA_SEAT3" /* GXT: Press ~INPUT_SCRIPT_RDOWN~ to use Spectator Cam.~n~Press ~INPUT_SCRIPT_RLEFT~ to fly a Spectator Drone for $~1~.~n~Press ~INPUT_SCRIPT_PAD_RIGHT~ to stand up. */, Global_262145.f_26634 /* Tunable: -76677190 */))
						{
							func_25(uParam0, 1);
						}
					}
					else if (__LIB_0__::func_1("ARENA_SEAT_PC" /* GXT: Press ~INPUT_SCRIPT_RDOWN~ to fly a Battle Drone.~n~Press ~INPUT_SCRIPT_RRIGHT~ to drive an RC Bandito.~n~Press ~INPUT_SCRIPT_RLEFT~ to use the Trap Cam.~n~Press ~INPUT_SCRIPT_RUP~ to use a Turret.~n~Press ~INPUT_SCRIPT_PAD_RIGHT~ to stand up. */) || __LIB_0__::func_1("ARENA_SEAT" /* GXT: Press ~INPUT_SCRIPT_RDOWN~ to fly a Battle Drone.~n~Press ~INPUT_SCRIPT_RRIGHT~ to drive an RC Bandito.~n~Press ~INPUT_SCRIPT_RLEFT~ to use the Trap Cam.~n~Press ~INPUT_SCRIPT_RUP~ to use a Turret.~n~Press ~INPUT_SCRIPT_PAD_RIGHT~ to stand up. */))
					{
						func_25(uParam0, 1);
					}
				}
				if ((((((!func_26() && !BitTest(Global_2787913, 4)) && !BitTest(Global_2787913, 5)) && !BitTest(Global_2787913, 7)) && !__LIB_5__::func_831("ARENA_VIP_CASH1" /* GXT: You do not have enough money. It costs $~1~ to use Spectator Cam. */, Global_262145.f_26633 /* Tunable: -887378230 */)) && !__LIB_5__::func_831("ARENA_VIP_CASH2" /* GXT: You do not have enough money. It costs $~1~ to fly a Spectator Drone. */, Global_262145.f_26634 /* Tunable: -76677190 */)) && !__LIB_0__::func_1("ARENA_VIP_ABIL" /* GXT: This option is currently unavailable. */))
				{
					if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
					{
						if (bVar2)
						{
							if (__LIB_13__::func_601() && !__LIB_31__::func_726())
							{
								if ((__LIB_13__::func_291("ARENA_SEAT_PC1" /* GXT: Press ~INPUT_SCRIPT_RDOWN~ to use Spectator Cam for $~1~.~n~Press ~INPUT_SCRIPT_RLEFT~ to fly a Spectator Drone for $~1~.~n~Press ~INPUT_SCRIPT_PAD_RIGHT~ to stand up. */, Global_262145.f_26633 /* Tunable: -887378230 */, Global_262145.f_26634 /* Tunable: -76677190 */) || __LIB_5__::func_831("ARENA_SEAT_PC2" /* GXT: Press ~INPUT_SCRIPT_RDOWN~ to use Spectator Cam for $~1~.~n~Press ~INPUT_SCRIPT_RLEFT~ to fly a Spectator Drone.~n~Press ~INPUT_SCRIPT_PAD_RIGHT~ to stand up. */, Global_262145.f_26633 /* Tunable: -887378230 */)) || __LIB_5__::func_831("ARENA_SEAT_PC3" /* GXT: Press ~INPUT_SCRIPT_RDOWN~ to use Spectator Cam.~n~Press ~INPUT_SCRIPT_RLEFT~ to fly a Spectator Drone for $~1~.~n~Press ~INPUT_SCRIPT_PAD_RIGHT~ to stand up. */, Global_262145.f_26634 /* Tunable: -76677190 */))
								{
									func_25(uParam0, 1);
								}
								__LIB_5__::func_569(&(uParam0->f_281.f_6), 4, "ARENA_SEAT_PC" /* GXT: Press ~INPUT_SCRIPT_RDOWN~ to fly a Battle Drone.~n~Press ~INPUT_SCRIPT_RRIGHT~ to drive an RC Bandito.~n~Press ~INPUT_SCRIPT_RLEFT~ to use the Trap Cam.~n~Press ~INPUT_SCRIPT_RUP~ to use a Turret.~n~Press ~INPUT_SCRIPT_PAD_RIGHT~ to stand up. */, 0, 0, 0, 0);
							}
							else
							{
								if (__LIB_0__::func_1("ARENA_SEAT_PC" /* GXT: Press ~INPUT_SCRIPT_RDOWN~ to fly a Battle Drone.~n~Press ~INPUT_SCRIPT_RRIGHT~ to drive an RC Bandito.~n~Press ~INPUT_SCRIPT_RLEFT~ to use the Trap Cam.~n~Press ~INPUT_SCRIPT_RUP~ to use a Turret.~n~Press ~INPUT_SCRIPT_PAD_RIGHT~ to stand up. */))
								{
									func_25(uParam0, 1);
								}
								if (!BitTest(Global_2787913, 2) && !BitTest(Global_2787913, 3))
								{
									__LIB_13__::func_306("ARENA_SEAT_PC1" /* GXT: Press ~INPUT_SCRIPT_RDOWN~ to use Spectator Cam for $~1~.~n~Press ~INPUT_SCRIPT_RLEFT~ to fly a Spectator Drone for $~1~.~n~Press ~INPUT_SCRIPT_PAD_RIGHT~ to stand up. */, Global_262145.f_26633 /* Tunable: -887378230 */, Global_262145.f_26634 /* Tunable: -76677190 */);
								}
								else if (BitTest(Global_2787913, 2) && !BitTest(Global_2787913, 3))
								{
									__LIB_5__::func_832("ARENA_SEAT_PC2" /* GXT: Press ~INPUT_SCRIPT_RDOWN~ to use Spectator Cam for $~1~.~n~Press ~INPUT_SCRIPT_RLEFT~ to fly a Spectator Drone.~n~Press ~INPUT_SCRIPT_PAD_RIGHT~ to stand up. */, Global_262145.f_26633 /* Tunable: -887378230 */, -1);
								}
								else if (!BitTest(Global_2787913, 2) && BitTest(Global_2787913, 3))
								{
									__LIB_5__::func_832("ARENA_SEAT_PC3" /* GXT: Press ~INPUT_SCRIPT_RDOWN~ to use Spectator Cam.~n~Press ~INPUT_SCRIPT_RLEFT~ to fly a Spectator Drone for $~1~.~n~Press ~INPUT_SCRIPT_PAD_RIGHT~ to stand up. */, Global_262145.f_26634 /* Tunable: -76677190 */, -1);
								}
								else
								{
									__LIB_5__::func_569(&(uParam0->f_281.f_6), 4, "ARENA_SEAT_PC4" /* GXT: Press ~INPUT_SCRIPT_RDOWN~ to use Spectator Cam.~n~Press ~INPUT_SCRIPT_RLEFT~ to fly a Spectator Drone.~n~Press ~INPUT_SCRIPT_PAD_RIGHT~ to stand up. */, 0, 0, 0, 0);
								}
							}
						}
						else
						{
							__LIB_5__::func_569(&(uParam0->f_281.f_6), 4, "ARENA_SEAT_EX" /* GXT: Press ~INPUT_SCRIPT_PAD_RIGHT~ to stand up. */, 0, 0, 0, 0);
						}
					}
					else if (bVar2)
					{
						if (__LIB_13__::func_601() && !__LIB_31__::func_726())
						{
							if ((__LIB_13__::func_291("ARENA_SEAT1" /* GXT: Press ~INPUT_SCRIPT_RDOWN~ to use Spectator Cam for $~1~.~n~Press ~INPUT_SCRIPT_RLEFT~ to fly a Spectator Drone for $~1~.~n~Press ~INPUT_SCRIPT_PAD_RIGHT~ to stand up. */, Global_262145.f_26633 /* Tunable: -887378230 */, Global_262145.f_26634 /* Tunable: -76677190 */) || __LIB_5__::func_831("ARENA_SEAT2" /* GXT: Press ~INPUT_SCRIPT_RDOWN~ to use Spectator Cam for $~1~.~n~Press ~INPUT_SCRIPT_RLEFT~ to fly a Spectator Drone.~n~Press ~INPUT_SCRIPT_PAD_RIGHT~ to stand up. */, Global_262145.f_26633 /* Tunable: -887378230 */)) || __LIB_5__::func_831("ARENA_SEAT3" /* GXT: Press ~INPUT_SCRIPT_RDOWN~ to use Spectator Cam.~n~Press ~INPUT_SCRIPT_RLEFT~ to fly a Spectator Drone for $~1~.~n~Press ~INPUT_SCRIPT_PAD_RIGHT~ to stand up. */, Global_262145.f_26634 /* Tunable: -76677190 */))
							{
								func_25(uParam0, 1);
							}
							__LIB_5__::func_569(&(uParam0->f_281.f_6), 4, "ARENA_SEAT" /* GXT: Press ~INPUT_SCRIPT_RDOWN~ to fly a Battle Drone.~n~Press ~INPUT_SCRIPT_RRIGHT~ to drive an RC Bandito.~n~Press ~INPUT_SCRIPT_RLEFT~ to use the Trap Cam.~n~Press ~INPUT_SCRIPT_RUP~ to use a Turret.~n~Press ~INPUT_SCRIPT_PAD_RIGHT~ to stand up. */, 0, 0, 0, 0);
						}
						else
						{
							if (__LIB_0__::func_1("ARENA_SEAT" /* GXT: Press ~INPUT_SCRIPT_RDOWN~ to fly a Battle Drone.~n~Press ~INPUT_SCRIPT_RRIGHT~ to drive an RC Bandito.~n~Press ~INPUT_SCRIPT_RLEFT~ to use the Trap Cam.~n~Press ~INPUT_SCRIPT_RUP~ to use a Turret.~n~Press ~INPUT_SCRIPT_PAD_RIGHT~ to stand up. */))
							{
								func_25(uParam0, 1);
							}
							if (!BitTest(Global_2787913, 2) && !BitTest(Global_2787913, 3))
							{
								__LIB_13__::func_306("ARENA_SEAT1" /* GXT: Press ~INPUT_SCRIPT_RDOWN~ to use Spectator Cam for $~1~.~n~Press ~INPUT_SCRIPT_RLEFT~ to fly a Spectator Drone for $~1~.~n~Press ~INPUT_SCRIPT_PAD_RIGHT~ to stand up. */, Global_262145.f_26633 /* Tunable: -887378230 */, Global_262145.f_26634 /* Tunable: -76677190 */);
							}
							else if (BitTest(Global_2787913, 2) && !BitTest(Global_2787913, 3))
							{
								__LIB_5__::func_832("ARENA_SEAT2" /* GXT: Press ~INPUT_SCRIPT_RDOWN~ to use Spectator Cam for $~1~.~n~Press ~INPUT_SCRIPT_RLEFT~ to fly a Spectator Drone.~n~Press ~INPUT_SCRIPT_PAD_RIGHT~ to stand up. */, Global_262145.f_26633 /* Tunable: -887378230 */, -1);
							}
							else if (!BitTest(Global_2787913, 2) && BitTest(Global_2787913, 3))
							{
								__LIB_5__::func_832("ARENA_SEAT3" /* GXT: Press ~INPUT_SCRIPT_RDOWN~ to use Spectator Cam.~n~Press ~INPUT_SCRIPT_RLEFT~ to fly a Spectator Drone for $~1~.~n~Press ~INPUT_SCRIPT_PAD_RIGHT~ to stand up. */, Global_262145.f_26634 /* Tunable: -76677190 */, -1);
							}
							else
							{
								__LIB_5__::func_569(&(uParam0->f_281.f_6), 4, "ARENA_SEAT4" /* GXT: Press ~INPUT_SCRIPT_RDOWN~ to use Spectator Cam.~n~Press ~INPUT_SCRIPT_RLEFT~ to fly a Spectator Drone.~n~Press ~INPUT_SCRIPT_PAD_RIGHT~ to stand up. */, 0, 0, 0, 0);
							}
						}
					}
					else
					{
						__LIB_5__::func_569(&(uParam0->f_281.f_6), 4, "ARENA_SEAT_EX" /* GXT: Press ~INPUT_SCRIPT_PAD_RIGHT~ to stand up. */, 0, 0, 0, 0);
					}
				}
				if (uParam0->f_281.f_5 == 7)
				{
					if (__LIB_13__::func_601() && !__LIB_31__::func_726())
					{
						if (((((((((PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 235 /*INPUT_SCRIPT_PAD_RIGHT*/) && !PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 223 /*INPUT_SCRIPT_RDOWN*/)) && !PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 225 /*INPUT_SCRIPT_RRIGHT*/)) && !PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 224 /*INPUT_SCRIPT_RLEFT*/)) && !PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 222 /*INPUT_SCRIPT_RUP*/)) && !BitTest(Global_1965531, 6)) && !BitTest(Global_1965531, 7)) && !BitTest(Global_1965531, 8)) && !BitTest(Global_1965531, 9)) && !__LIB_6__::func_200(PLAYER::PLAYER_ID()))
						{
							if (uParam0->f_281.f_2 >= 0 && uParam0->f_281.f_2 < 10)
							{
								AUDIO::PLAY_SOUND_FROM_ENTITY(iVar3, "Exit_Menu", NETWORK::NET_TO_OBJ(uParam1->f_14[uParam0->f_281.f_2]), "DLC_AW_Spectator_Tablet_Sounds", true, 0);
							}
							func_100(uParam0);
						}
						if ((((((((((PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 223 /*INPUT_SCRIPT_RDOWN*/) && !PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 235 /*INPUT_SCRIPT_PAD_RIGHT*/)) && !PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 225 /*INPUT_SCRIPT_RRIGHT*/)) && !PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 224 /*INPUT_SCRIPT_RLEFT*/)) && !PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 222 /*INPUT_SCRIPT_RUP*/)) && !BitTest(Global_1965531, 6)) && !BitTest(Global_1965531, 7)) && !BitTest(Global_1965531, 8)) && !BitTest(Global_1965531, 9)) && !__LIB_6__::func_200(PLAYER::PLAYER_ID())) && bVar2)
						{
							if (func_77())
							{
								func_25(uParam0, 1);
								MISC::SET_BIT(&Global_1965531, 6);
								if (uParam0->f_281.f_2 >= 0 && uParam0->f_281.f_2 < 10)
								{
									AUDIO::PLAY_SOUND_FROM_ENTITY(iVar4, "Select_Drone", NETWORK::NET_TO_OBJ(uParam1->f_14[uParam0->f_281.f_2]), "DLC_AW_Spectator_Tablet_Sounds", true, 0);
								}
							}
							else
							{
								if (!BitTest(Global_2787913, 7))
								{
									MISC::SET_BIT(&Global_2787913, 7);
								}
								AUDIO::PLAY_SOUND_FRONTEND(-1, "ERROR", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
							}
						}
						if ((((((((((PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 225 /*INPUT_SCRIPT_RRIGHT*/) && !PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 235 /*INPUT_SCRIPT_PAD_RIGHT*/)) && !PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 223 /*INPUT_SCRIPT_RDOWN*/)) && !PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 224 /*INPUT_SCRIPT_RLEFT*/)) && !PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 222 /*INPUT_SCRIPT_RUP*/)) && !BitTest(Global_1965531, 6)) && !BitTest(Global_1965531, 7)) && !BitTest(Global_1965531, 8)) && !BitTest(Global_1965531, 9)) && !__LIB_6__::func_200(PLAYER::PLAYER_ID())) && bVar2)
						{
							if (func_76())
							{
								func_25(uParam0, 1);
								MISC::SET_BIT(&Global_1965531, 7);
								if (uParam0->f_281.f_2 >= 0 && uParam0->f_281.f_2 < 10)
								{
									AUDIO::PLAY_SOUND_FROM_ENTITY(iVar5, "Select_RC_Car", NETWORK::NET_TO_OBJ(uParam1->f_14[uParam0->f_281.f_2]), "DLC_AW_Spectator_Tablet_Sounds", true, 0);
								}
							}
							else
							{
								if (!BitTest(Global_2787913, 7))
								{
									MISC::SET_BIT(&Global_2787913, 7);
								}
								AUDIO::PLAY_SOUND_FRONTEND(-1, "ERROR", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
							}
						}
						if ((((((((((PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 224 /*INPUT_SCRIPT_RLEFT*/) && !PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 235 /*INPUT_SCRIPT_PAD_RIGHT*/)) && !PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 223 /*INPUT_SCRIPT_RDOWN*/)) && !PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 225 /*INPUT_SCRIPT_RRIGHT*/)) && !PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 222 /*INPUT_SCRIPT_RUP*/)) && !BitTest(Global_1965531, 6)) && !BitTest(Global_1965531, 7)) && !BitTest(Global_1965531, 8)) && !BitTest(Global_1965531, 9)) && !__LIB_6__::func_200(PLAYER::PLAYER_ID())) && bVar2)
						{
							if (func_73())
							{
								func_25(uParam0, 1);
								MISC::SET_BIT(&Global_1965531, 8);
								if (uParam0->f_281.f_2 >= 0 && uParam0->f_281.f_2 < 10)
								{
									AUDIO::PLAY_SOUND_FROM_ENTITY(iVar6, "Select_Trap_Cam", NETWORK::NET_TO_OBJ(uParam1->f_14[uParam0->f_281.f_2]), "DLC_AW_Spectator_Tablet_Sounds", true, 0);
								}
							}
							else
							{
								if (!BitTest(Global_2787913, 7))
								{
									MISC::SET_BIT(&Global_2787913, 7);
								}
								AUDIO::PLAY_SOUND_FRONTEND(-1, "ERROR", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
							}
						}
						if ((((((((((PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 222 /*INPUT_SCRIPT_RUP*/) && !PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 235 /*INPUT_SCRIPT_PAD_RIGHT*/)) && !PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 223 /*INPUT_SCRIPT_RDOWN*/)) && !PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 225 /*INPUT_SCRIPT_RRIGHT*/)) && !PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 224 /*INPUT_SCRIPT_RLEFT*/)) && !BitTest(Global_1965531, 6)) && !BitTest(Global_1965531, 7)) && !BitTest(Global_1965531, 8)) && !BitTest(Global_1965531, 9)) && !__LIB_6__::func_200(PLAYER::PLAYER_ID())) && bVar2)
						{
							if (func_72())
							{
								func_25(uParam0, 1);
								if (__LIB_0__::func_624(&(uParam0->f_281), 15))
								{
									func_33();
									MISC::CLEAR_BIT(&Global_2787913, 8);
									__LIB_2__::func_487(&(uParam0->f_281), 15);
								}
								__LIB_2__::func_486(&(uParam0->f_281), 13);
							}
							else
							{
								if (!BitTest(Global_2787913, 7))
								{
									MISC::SET_BIT(&Global_2787913, 7);
								}
								AUDIO::PLAY_SOUND_FRONTEND(-1, "ERROR", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
							}
						}
					}
					else
					{
						if (((PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 235 /*INPUT_SCRIPT_PAD_RIGHT*/) && !PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 224 /*INPUT_SCRIPT_RLEFT*/)) && !Global_2789737) && !Global_2789734)
						{
							if (uParam0->f_281.f_2 >= 0 && uParam0->f_281.f_2 < 10)
							{
								AUDIO::PLAY_SOUND_FROM_ENTITY(iVar7, "Exit_Menu", NETWORK::NET_TO_OBJ(uParam1->f_14[uParam0->f_281.f_2]), "DLC_AW_Spectator_Tablet_Sounds", true, 0);
							}
							func_100(uParam0);
						}
						if ((((PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 223 /*INPUT_SCRIPT_RDOWN*/) && !PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 235 /*INPUT_SCRIPT_PAD_RIGHT*/)) && !PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 224 /*INPUT_SCRIPT_RLEFT*/)) && bVar2) && !Global_262145.f_26631 /* Tunable: -774498395 */)
						{
							if (MONEY::NETWORK_CAN_SPEND_MONEY(Global_262145.f_26633 /* Tunable: -887378230 */, false, false, true, -1, 0) || BitTest(Global_2787913, 3))
							{
								func_25(uParam0, 1);
								Global_2789737 = 1;
								Global_2789734 = 1;
								if (uParam0->f_281.f_2 >= 0 && uParam0->f_281.f_2 < 10)
								{
									AUDIO::PLAY_SOUND_FROM_ENTITY(iVar8, "Select_Live_Stream", NETWORK::NET_TO_OBJ(uParam1->f_14[uParam0->f_281.f_2]), "DLC_AW_Spectator_Tablet_Sounds", true, 0);
								}
								__LIB_31__::func_727(73, -1);
								__LIB_13__::func_602();
								func_63();
							}
							else if (!BitTest(Global_2787913, 5))
							{
								MISC::SET_BIT(&Global_2787913, 5);
							}
						}
					}
				}
			}
		}
	}
	__LIB_2__::func_487(&(uParam0->f_281), 9);
}

void func_63()//Position - 0x3785
{
	__LIB_13__::func_546(1, 7986);
}

int func_72()//Position - 0x3922
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bVar0 = false;
	iVar1 = PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID());
	if (iVar1 > 4 || iVar1 < 0)
	{
		iVar1 = 0;
	}
	iVar2 = Global_1058069.f_14[iVar1];
	if (iVar2 < 17)
	{
		if (BitTest(Global_4718592.f_658[iVar1 /*22957*/].f_7929[iVar2], 26))
		{
			bVar0 = true;
		}
	}
	if (BitTest(Global_4718592.f_32, 4) && !bVar0)
	{
		return 1;
	}
	return 0;
}

int func_73()//Position - 0x3992
{
	bool bVar0;
	int iVar1;
	int iVar2;
	if (!__LIB_13__::func_603())
	{
		return 0;
	}
	bVar0 = false;
	iVar1 = PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID());
	if (iVar1 > 4 || iVar1 < 0)
	{
		iVar1 = 0;
	}
	iVar2 = Global_1058069.f_14[iVar1];
	if (iVar2 < 17)
	{
		if (BitTest(Global_4718592.f_658[iVar1 /*22957*/].f_7929[iVar2], 25))
		{
			bVar0 = true;
		}
	}
	if (BitTest(Global_4718592.f_32, 1) && !bVar0)
	{
		return 1;
	}
	return 0;
}

int func_76()//Position - 0x3A79
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bVar0 = false;
	iVar1 = PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID());
	if (iVar1 > 4 || iVar1 < 0)
	{
		iVar1 = 0;
	}
	iVar2 = Global_1058069.f_14[iVar1];
	if (iVar2 < 17)
	{
		if (BitTest(Global_4718592.f_658[iVar1 /*22957*/].f_7929[iVar2], 24))
		{
			bVar0 = true;
		}
	}
	if (BitTest(Global_4718592.f_30, 14) && !bVar0)
	{
		return 1;
	}
	return 0;
}

int func_77()//Position - 0x3AEA
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bVar0 = false;
	iVar1 = PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID());
	if (iVar1 > 4 || iVar1 < 0)
	{
		iVar1 = 0;
	}
	iVar2 = Global_1058069.f_14[iVar1];
	if (iVar2 < 17)
	{
		if (BitTest(Global_4718592.f_658[iVar1 /*22957*/].f_7929[iVar2], 23))
		{
			bVar0 = true;
		}
	}
	if (BitTest(Global_4718592.f_30, 13) && !bVar0)
	{
		return 1;
	}
	return 0;
}

bool func_86(var uParam0)//Position - 0x3D4A
{
	return __LIB_0__::func_624(&(uParam0->f_281), 9);
}

void func_87(char* sParam0)//Position - 0x3D5D
{
	PAD::INIT_PC_SCRIPTED_CONTROLS(sParam0);
}

int func_91()//Position - 0x3DE8
{
	if (((((__LIB_0__::func_1("ARENA_SEAT_GM0") || __LIB_0__::func_1("ARENA_SEAT_GM1")) || __LIB_0__::func_1("TAGTM_HELP_2O")) || __LIB_0__::func_1("TAGTM_HELP_2P")) || __LIB_0__::func_1("TAGTM_HELP_2Pi")) || __LIB_0__::func_1("TAGTM_HELP_2G"))
	{
		return 1;
	}
	return 0;
}

int func_92(var uParam0)//Position - 0x3E46
{
	int iVar0;
	if (*uParam0 == 0)
	{
		*uParam0 = __LIB_29__::func_889(1, 0, 0, 1, 1);
	}
	iVar0 = __LIB_13__::func_597(*uParam0);
	if (iVar0 == 1)
	{
		*uParam0 = 0;
	}
	else if (iVar0 != 0)
	{
		*uParam0 = 0;
		__LIB_18__::func_653(0, -1, -1);
	}
	return iVar0;
}

void func_100(var uParam0)//Position - 0x4020
{
	char* sVar0;
	uParam0->f_281.f_1 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_116(uParam0), func_115(uParam0), 2, true, false, 1f, 0f, 1f);
	func_119(uParam0, &sVar0);
	NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), uParam0->f_281.f_1, &sVar0, "exit", 4f, -4f, 13, 16, 1000f, 0);
	NETWORK::NETWORK_START_SYNCHRONISED_SCENE(uParam0->f_281.f_1);
	__LIB_3__::func_122(&(uParam0->f_281.f_6));
	MISC::SET_BIT(&Global_2787913, 6);
	__LIB_2__::func_487(&(uParam0->f_281), 14);
	func_132(uParam0, 9);
}

int func_114()//Position - 0x4913
{
	return Global_2725430;
}

Vector3 func_115(var uParam0)//Position - 0x491F
{
	return (uParam0[uParam0->f_281.f_2 /*14*/])->f_8.f_3;
}

Vector3 func_116(var uParam0)//Position - 0x4938
{
	return (uParam0[uParam0->f_281.f_2 /*14*/])->f_8;
}

void func_117(var uParam0, char* sParam1, bool bParam2)//Position - 0x494F
{
	switch (uParam0->f_281.f_9)
	{
		case 0:
			switch (uParam0->f_281.f_9.f_2)
			{
				case 0:
					StringCopy(sParam1, "IDLE_A", 16);
					break;
				case 1:
					StringCopy(sParam1, "IDLE_B", 16);
					break;
				case 2:
					StringCopy(sParam1, "IDLE_C", 16);
					break;
				case 3:
					StringCopy(sParam1, "ENTER", 16);
					break;
				case 5:
					StringCopy(sParam1, "BASE", 16);
					break;
				case 4:
					StringCopy(sParam1, "EXIT", 16);
					break;
				case 7:
					StringCopy(sParam1, "A_TO_B", 16);
					break;
				case 8:
					StringCopy(sParam1, "B_TO_C", 16);
					break;
				case 9:
					StringCopy(sParam1, "C_TO_D", 16);
					break;
				case 10:
					StringCopy(sParam1, "D_TO_E", 16);
					break;
				case 12:
					StringCopy(sParam1, "B_TO_E", 16);
					break;
				case 13:
					StringCopy(sParam1, "C_TO_A", 16);
					break;
				case 14:
					StringCopy(sParam1, "D_TO_A", 16);
					break;
				case 15:
					StringCopy(sParam1, "E_TO_A", 16);
					break;
				default:
					StringCopy(sParam1, "invalid_clip", 16);
					break;
			}
			break;
		case 1:
			switch (uParam0->f_281.f_9.f_2)
			{
				case 0:
					StringCopy(sParam1, "IDLE_A", 16);
					break;
				case 1:
					StringCopy(sParam1, "IDLE_B", 16);
					break;
				case 2:
					StringCopy(sParam1, "IDLE_C", 16);
					break;
				case 3:
					StringCopy(sParam1, "ENTER", 16);
					break;
				case 5:
					StringCopy(sParam1, "BASE", 16);
					break;
				case 4:
					StringCopy(sParam1, "EXIT", 16);
					break;
				case 7:
					StringCopy(sParam1, "A_TO_B", 16);
					break;
				case 8:
					StringCopy(sParam1, "B_TO_C", 16);
					break;
				case 9:
					StringCopy(sParam1, "C_TO_D", 16);
					break;
				case 10:
					StringCopy(sParam1, "D_TO_E", 16);
					break;
				case 12:
					StringCopy(sParam1, "B_TO_E", 16);
					break;
				case 13:
					StringCopy(sParam1, "C_TO_A", 16);
					break;
				case 14:
					StringCopy(sParam1, "D_TO_A", 16);
					break;
				case 15:
					StringCopy(sParam1, "E_TO_A", 16);
					break;
				default:
					StringCopy(sParam1, "invalid_clip", 16);
					break;
			}
			break;
	}
	if (bParam2)
	{
		StringConCat(sParam1, "_TABLET", 16);
	}
}

void func_119(var uParam0, char* sParam1)//Position - 0x4BAF
{
	switch (uParam0->f_281.f_9)
	{
		case 0:
			StringCopy(sParam1, "ANIM@AMB@FACILITY@BRIEFING_ROOM@SEATING", 64);
			break;
		case 1:
			StringCopy(sParam1, "ANIM@ARENA@AMB@SEAT_DRONE_TABLET", 64);
			break;
	}
	if (__LIB_1__::func_394())
	{
		StringConCat(sParam1, "@FEMALE", 64);
	}
	else
	{
		StringConCat(sParam1, "@MALE", 64);
	}
	switch (uParam0->f_281.f_9)
	{
		case 0:
			switch (uParam0->f_281.f_9.f_1)
			{
				case 0:
					StringConCat(sParam1, "@VAR_A@", 64);
					break;
				case 1:
					StringConCat(sParam1, "@VAR_B@", 64);
					break;
				case 2:
					StringConCat(sParam1, "@VAR_C@", 64);
					break;
				case 3:
					StringConCat(sParam1, "@VAR_D@", 64);
					break;
				case 4:
					StringConCat(sParam1, "@VAR_E@", 64);
					break;
			}
			break;
		case 1:
			switch (uParam0->f_281.f_9.f_1)
			{
				case 0:
					StringConCat(sParam1, "@", 64);
					break;
			}
			break;
	}
}

void func_121(var uParam0)//Position - 0x4CAF
{
	uParam0->f_281.f_9 = func_123((*uParam0)[uParam0->f_281.f_2 /*14*/]);
	uParam0->f_281.f_9.f_1 = func_122(uParam0);
	uParam0->f_281.f_9.f_2 = 3;
	uParam0->f_281.f_9.f_3 = 3;
}

int func_122(var uParam0)//Position - 0x4CF0
{
	int iVar0;
	if (uParam0->f_281.f_9 == 0)
	{
		if (__LIB_1__::func_394())
		{
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
			switch (iVar0)
			{
				case 0:
					return 0;
				case 1:
					return 3;
				case 2:
					return 4;
				default:
			}
		}
		else
		{
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
			switch (iVar0)
			{
				case 0:
					return 0;
				case 1:
					return 2;
				case 2:
					return 3;
				}
			}
		default:
	}
	return 0;
}

int func_123(int iParam0)//Position - 0x4D68
{
	switch (iParam0)
	{
		case 1:
			return 0;
		case 2:
			return 1;
		default:
	}
	return 0;
}

bool func_125(var uParam0)//Position - 0x4EB7
{
	Stack.Push(!__LIB_0__::func_624(&(uParam0->f_281), 5));
	Stack.Push(uParam0[uParam0->f_281.f_2 /*14*/]);
	Stack.Push(uParam0->f_281.f_2);
	Call_Loc(uParam0->f_281.f_14);
	return (StackVal || StackVal);
}

int func_126(var uParam0)//Position - 0x4EEA
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0));
			if (iVar1 != PLAYER::PLAYER_ID() && __LIB_0__::func_156(iVar1, 1, 1))
			{
				if (__LIB_13__::func_598(PLAYER::GET_PLAYER_PED(iVar1), uParam0[uParam0->f_281.f_2 /*14*/]) || __LIB_3__::func_678(iVar1) == uParam0->f_281.f_2)
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_128(var uParam0)//Position - 0x4F89
{
	if (((BitTest(Global_1965531, 6) || BitTest(Global_1965531, 7)) || BitTest(Global_1965531, 8)) || BitTest(Global_1965531, 9))
	{
		return 1;
	}
	return uParam0->f_281 & 31 > 0;
}

int func_129(int iParam0, struct<3> Param1)//Position - 0x4FCE
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (__LIB_3__::func_526(ENTITY::GET_ENTITY_HEADING(iParam0), (Param1.f_2 - 180f), 90f))
		{
			return 1;
		}
	}
	return 0;
}

int func_131(var uParam0)//Position - 0x5025
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (__LIB_13__::func_598(PLAYER::PLAYER_PED_ID(), uParam0[uParam0->f_281.f_2 /*14*/]) && func_129(PLAYER::PLAYER_PED_ID(), (uParam0[uParam0->f_281.f_2 /*14*/])->f_8.f_3))
		{
			return 1;
		}
		else
		{
			uParam0->f_281.f_2 = (uParam0->f_281.f_2 + 1 % 20);
		}
		iVar0++;
	}
	return 0;
}

void func_132(var uParam0, int iParam1)//Position - 0x508E
{
	uParam0->f_281.f_5 = iParam1;
}

void func_133(var uParam0)//Position - 0x509F
{
	int iVar0;
	if (BitTest(Global_1965531, 7))
	{
		__LIB_1__::func_33(1);
	}
	switch (uParam0->f_281.f_5)
	{
		case 5:
		case 9:
			__LIB_1__::func_33(1);
		case 7:
			CAM::INVALIDATE_IDLE_CAM();
			HUD::HUD_FORCE_WEAPON_WHEEL(false);
			HUD::DISPLAY_AMMO_THIS_FRAME(false);
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(19);
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(2);
			HUD::HUD_SUPPRESS_WEAPON_WHEEL_RESULTS_THIS_FRAME();
			if (!__LIB_0__::func_94())
			{
				__LIB_0__::func_187();
			}
			if (WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar0, true) && iVar0 != joaat("WEAPON_UNARMED"))
			{
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), true);
			}
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 37 /*INPUT_SELECT_WEAPON*/, true);
			__LIB_3__::func_570(1);
			__LIB_0__::func_189();
			break;
	}
}

void func_145(var uParam0)//Position - 0x535E
{
	if (uParam0->f_281.f_5 == 7)
	{
	}
	else if (uParam0->f_281.f_5 > 5)
	{
		CAM::SET_GAMEPLAY_CAM_IGNORE_ENTITY_COLLISION_THIS_UPDATE(PLAYER::PLAYER_PED_ID());
		PED::SET_PED_CAPSULE(PLAYER::PLAYER_PED_ID(), __LIB_13__::func_599());
		uParam0->f_281.f_8 = MISC::GET_FRAME_COUNT();
	}
	else if ((MISC::GET_FRAME_COUNT() - uParam0->f_281.f_8) < 5)
	{
		PED::SET_PED_CAPSULE(PLAYER::PLAYER_PED_ID(), __LIB_13__::func_599());
	}
}

void func_147(var uParam0)//Position - 0x53CA
{
	__LIB_13__::func_555(&(uParam0->f_281), 4, __LIB_0__::func_877());
	__LIB_13__::func_555(&(uParam0->f_281), 1, ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false));
	__LIB_13__::func_555(&(uParam0->f_281), 3, PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true));
	__LIB_13__::func_555(&(uParam0->f_281), 0, __LIB_0__::func_77(0));
	__LIB_13__::func_555(&(uParam0->f_281), 2, TASK::IS_PED_RUNNING(PLAYER::PLAYER_PED_ID()));
}

int func_150()//Position - 0x5457
{
	if ((((!__LIB_13__::func_600() && !__LIB_4__::func_47()) && !BitTest(Global_1965531, 7)) && !BitTest(Global_1965531, 3)) && !__LIB_6__::func_200(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	if (BitTest(Global_1965531, 11) && CAM::IS_SCREEN_FADED_OUT())
	{
		return 1;
	}
	if (__LIB_0__::func_959())
	{
		return 1;
	}
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(MISC::GET_HASH_KEY("AM_MP_ARENA_BOX")) <= 0)
	{
		return 1;
	}
	if (!Global_2787907)
	{
		return 1;
	}
	return 0;
}

int func_160()//Position - 0x5643
{
	int iVar0;
	if (NETWORK::NETWORK_IS_SCRIPT_ACTIVE("arena_box_bench_seats", -1, true, 0))
	{
		return 0;
	}
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(32, false, -1);
	__LIB_0__::func_895(0, -1, 0);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_112, 25, 0);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_123, 65, 0);
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	__LIB_0__::func_467();
	func_161();
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		if (!Local_112.f_0)
		{
			iVar0 = 0;
			while (iVar0 < 10)
			{
				Local_112.f_2[iVar0] = -1;
				iVar0++;
			}
			Local_112.f_0 = 1;
		}
	}
	return 1;
}

void func_161()//Position - 0x56C7
{
	func_162(0, &Local_93, 0, 2);
	func_162(1, &Local_93, 1, 2);
	func_162(2, &Local_93, 2, 2);
	func_162(3, &Local_93, 3, 2);
	func_162(4, &Local_93, 4, 2);
	func_162(5, &Local_93, 5, 2);
	func_162(6, &Local_93, 6, 2);
	func_162(7, &Local_93, 7, 2);
	func_162(8, &Local_93, 8, 2);
	func_162(9, &Local_93, 9, 2);
	func_162(10, &Local_93, 10, 1);
	func_162(11, &Local_93, 11, 1);
	func_162(12, &Local_93, 12, 1);
	func_162(13, &Local_93, 13, 1);
	func_162(14, &Local_93, 14, 1);
	func_162(15, &Local_93, 15, 1);
	func_162(16, &Local_93, 16, 1);
	func_162(17, &Local_93, 17, 1);
	func_162(18, &Local_93, 18, 1);
	func_162(19, &Local_93, 19, 1);
}

void func_162(int iParam0, var uParam1, int iParam2, int iParam3)//Position - 0x579B
{
	struct<3> Var0;
	float fVar1;
	func_166(iParam0, &Var0, &fVar1);
	(*uParam1)[iParam2 /*14*/] = iParam3;
	(uParam1[iParam2 /*14*/])->f_8 = { Var0 };
	(uParam1[iParam2 /*14*/])->f_8.f_3 = { 0f, 0f, fVar1 };
	(uParam1[iParam2 /*14*/])->f_1 = { __LIB_0__::func_327(__LIB_13__::func_739(), (fVar1 - 180f)) + Var0 };
	(uParam1[iParam2 /*14*/])->f_1.f_3 = { __LIB_0__::func_327(__LIB_13__::func_738(), (fVar1 - 180f)) + Var0 };
	(uParam1[iParam2 /*14*/])->f_1.f_6 = 1.25f;
}

void func_166(int iParam0, var uParam1, var uParam2)//Position - 0x588C
{
	if (__LIB_1__::func_394())
	{
		switch (iParam0)
		{
			case 0:
				*uParam1 = { 2799.8845f, -3923.084f, 181.5353f };
				*uParam2 = 0f;
				break;
			case 1:
				*uParam1 = { 2798.8574f, -3923.084f, 181.5353f };
				*uParam2 = 0f;
				break;
			case 2:
				*uParam1 = { 2797.8206f, -3923.084f, 181.5353f };
				*uParam2 = 0f;
				break;
			case 3:
				*uParam1 = { 2796.7944f, -3923.084f, 181.5353f };
				*uParam2 = 0f;
				break;
			case 4:
				*uParam1 = { 2795.7644f, -3923.084f, 181.5353f };
				*uParam2 = 0f;
				break;
			case 5:
				*uParam1 = { 2794.7285f, -3923.084f, 181.5353f };
				*uParam2 = 0f;
				break;
			case 6:
				*uParam1 = { 2793.7056f, -3923.084f, 181.5353f };
				*uParam2 = 0f;
				break;
			case 7:
				*uParam1 = { 2792.6775f, -3923.084f, 181.5353f };
				*uParam2 = 0f;
				break;
			case 8:
				*uParam1 = { 2791.6384f, -3923.084f, 181.5353f };
				*uParam2 = 0f;
				break;
			case 9:
				*uParam1 = { 2790.6106f, -3923.084f, 181.5353f };
				*uParam2 = 0f;
				break;
			case 10:
				*uParam1 = { 2799.913f, -3924.5786f, 182.4198f };
				*uParam2 = 0f;
				break;
			case 11:
				*uParam1 = { 2798.89f, -3924.5786f, 182.4198f };
				*uParam2 = 0f;
				break;
			case 12:
				*uParam1 = { 2797.817f, -3924.5786f, 182.4198f };
				*uParam2 = 0f;
				break;
			case 13:
				*uParam1 = { 2796.821f, -3924.5786f, 182.4198f };
				*uParam2 = 0f;
				break;
			case 14:
				*uParam1 = { 2795.784f, -3924.5786f, 182.4198f };
				*uParam2 = 0f;
				break;
			case 15:
				*uParam1 = { 2794.75f, -3924.5786f, 182.4198f };
				*uParam2 = 0f;
				break;
			case 16:
				*uParam1 = { 2793.711f, -3924.5786f, 182.4198f };
				*uParam2 = 0f;
				break;
			case 17:
				*uParam1 = { 2792.696f, -3924.5786f, 182.4198f };
				*uParam2 = 0f;
				break;
			case 18:
				*uParam1 = { 2791.635f, -3924.5786f, 182.4198f };
				*uParam2 = 0f;
				break;
			case 19:
				*uParam1 = { 2790.644f, -3924.5786f, 182.4198f };
				*uParam2 = 0f;
				break;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				*uParam1 = { 2799.864f, -3923.084f, 181.5353f };
				*uParam2 = 0f;
				break;
			case 1:
				*uParam1 = { 2798.837f, -3923.084f, 181.5353f };
				*uParam2 = 0f;
				break;
			case 2:
				*uParam1 = { 2797.8f, -3923.084f, 181.5353f };
				*uParam2 = 0f;
				break;
			case 3:
				*uParam1 = { 2796.774f, -3923.084f, 181.5353f };
				*uParam2 = 0f;
				break;
			case 4:
				*uParam1 = { 2795.744f, -3923.084f, 181.5353f };
				*uParam2 = 0f;
				break;
			case 5:
				*uParam1 = { 2794.708f, -3923.084f, 181.5353f };
				*uParam2 = 0f;
				break;
			case 6:
				*uParam1 = { 2793.685f, -3923.084f, 181.5353f };
				*uParam2 = 0f;
				break;
			case 7:
				*uParam1 = { 2792.657f, -3923.084f, 181.5353f };
				*uParam2 = 0f;
				break;
			case 8:
				*uParam1 = { 2791.618f, -3923.084f, 181.5353f };
				*uParam2 = 0f;
				break;
			case 9:
				*uParam1 = { 2790.59f, -3923.084f, 181.5353f };
				*uParam2 = 0f;
				break;
			case 10:
				*uParam1 = { 2799.913f, -3924.5786f, 182.4198f };
				*uParam2 = 0f;
				break;
			case 11:
				*uParam1 = { 2798.89f, -3924.5786f, 182.4198f };
				*uParam2 = 0f;
				break;
			case 12:
				*uParam1 = { 2797.817f, -3924.5786f, 182.4198f };
				*uParam2 = 0f;
				break;
			case 13:
				*uParam1 = { 2796.821f, -3924.5786f, 182.4198f };
				*uParam2 = 0f;
				break;
			case 14:
				*uParam1 = { 2795.784f, -3924.5786f, 182.4198f };
				*uParam2 = 0f;
				break;
			case 15:
				*uParam1 = { 2794.75f, -3924.5786f, 182.4198f };
				*uParam2 = 0f;
				break;
			case 16:
				*uParam1 = { 2793.711f, -3924.5786f, 182.4198f };
				*uParam2 = 0f;
				break;
			case 17:
				*uParam1 = { 2792.696f, -3924.5786f, 182.4198f };
				*uParam2 = 0f;
				break;
			case 18:
				*uParam1 = { 2791.635f, -3924.5786f, 182.4198f };
				*uParam2 = 0f;
				break;
			case 19:
				*uParam1 = { 2790.644f, -3924.5786f, 182.4198f };
				*uParam2 = 0f;
				break;
			}
	}
}

