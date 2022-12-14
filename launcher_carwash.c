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
	struct<24> Local_40[2];
	var uLocal_41 = 0;
	var uLocal_42 = 0;
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
	var uLocal_53 = -1;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	bool bLocal_58 = 0;
	struct<3> Local_59[2];
	var uLocal_60[2] = { 0, 0 };
	int iLocal_61[2] = { 0, 0 };
	struct<2> Local_62 = { 0, 5 } ;
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
	var uLocal_78 = 5;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
#endregion
void __EntryFunction__()//Position - 0x0
{
	bool bVar0;
	int iVar1;
	struct<3> Var2;
	int iVar3;
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
	Var2 = { ScriptParam_62.f_1[0 /*3*/] };
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("launcher_carwash")) > 1)
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
		MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	}
	else if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(99))
	{
		func_74();
	}
	if (Global_2883694)
	{
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(-949873222) == 0)
		{
			SCRIPT::REQUEST_SCRIPT_WITH_NAME_HASH(-949873222);
			while (!SCRIPT::HAS_SCRIPT_WITH_NAME_HASH_LOADED(-949873222))
			{
				SYSTEM::WAIT(0);
			}
			SYSTEM::START_NEW_SCRIPT_WITH_NAME_HASH_AND_ARGS(-949873222, &ScriptParam_62, 23, 1424);
		}
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	if (__LIB_0__::func_715(PLAYER::PLAYER_PED_ID()))
	{
	}
	func_65();
	while (true)
	{
		__LIB_0__::func_715(PLAYER::PLAYER_PED_ID());
		if (__LIB_0__::func_724(PLAYER::PLAYER_PED_ID(), Var2, 0) > (100f + 20f))
		{
			func_74();
		}
		bVar0 = false;
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar1 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			bVar0 = (__LIB_37__::func_616(iVar1) || __LIB_16__::func_84(iVar1));
			bLocal_58 = VEHICLE::DOES_VEHICLE_HAVE_ROOF(iVar1);
			__LIB_15__::func_806(bLocal_58);
		}
		iVar3 = 0;
		while (iVar3 < Local_40.f_0)
		{
			func_57(iVar3);
			iVar3++;
		}
		if (func_1(&Local_40, &uLocal_41, bVar0, 0, 1, 1424))
		{
			func_74();
		}
		SYSTEM::WAIT(0);
	}
}

int func_1(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)//Position - 0x196
{
	int iVar0;
	if (uParam1->f_10)
	{
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < *iParam0)
		{
			__LIB_17__::func_130(iParam0[iVar0 /*24*/]);
			iVar0++;
		}
	}
	switch (uParam1->f_13)
	{
		case 0:
			iVar0 = 0;
			if (__LIB_16__::func_106(uParam1->f_16))
			{
				iVar0 = 0;
				while (iVar0 < *iParam0)
				{
					if (__LIB_16__::func_83(iParam0[iVar0 /*24*/]) && (*iParam0)[iVar0 /*24*/])
					{
						uParam1->f_12 = iVar0;
						if ((iParam0[iVar0 /*24*/])->f_7 || (MISC::GET_MISSION_FLAG() && uParam1->f_16 == 0))
						{
							__LIB_33__::func_343(uParam1, 6);
						}
						else if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
						{
							__LIB_33__::func_343(uParam1, 8);
						}
						else if (bParam2)
						{
							__LIB_33__::func_343(uParam1, 3);
						}
						else if ((iParam0[iVar0 /*24*/])->f_8)
						{
							__LIB_33__::func_343(uParam1, 2);
						}
						else if (__LIB_17__::func_131() < (iParam0[uParam1->f_12 /*24*/])->f_9)
						{
							__LIB_33__::func_343(uParam1, 1);
						}
						else if (__LIB_17__::func_129())
						{
							__LIB_33__::func_343(uParam1, 7);
						}
						else
						{
							__LIB_33__::func_343(uParam1, 4);
						}
					}
					iVar0++;
				}
			}
			else
			{
				__LIB_17__::func_127(uParam1);
			}
			break;
		case 2:
			if (!uParam1->f_9)
			{
				__LIB_17__::func_126(uParam1, uParam1->f_6);
			}
			if (__LIB_16__::func_101(iParam0[uParam1->f_12 /*24*/]) || (iParam0[iVar0 /*24*/])->f_8 == 0)
			{
				__LIB_33__::func_343(uParam1, 0);
				return 0;
			}
			break;
		case 1:
			if (!uParam1->f_9)
			{
				__LIB_17__::func_128(uParam1, uParam1->f_2, (iParam0[uParam1->f_12 /*24*/])->f_9);
			}
			if (__LIB_16__::func_101(iParam0[uParam1->f_12 /*24*/]) || __LIB_17__::func_131() >= (iParam0[uParam1->f_12 /*24*/])->f_9)
			{
				__LIB_33__::func_343(uParam1, 0);
				return 0;
			}
			break;
		case 6:
			if (!uParam1->f_9)
			{
				__LIB_17__::func_126(uParam1, uParam1->f_1);
			}
			if (__LIB_16__::func_101(iParam0[uParam1->f_12 /*24*/]) || !__LIB_16__::func_106(uParam1->f_16))
			{
				__LIB_33__::func_343(uParam1, 0);
				return 0;
			}
			break;
		case 3:
			if (!uParam1->f_9)
			{
				__LIB_17__::func_126(uParam1, uParam1->f_3);
			}
			if ((__LIB_16__::func_101(iParam0[uParam1->f_12 /*24*/]) || bParam2 == 0) || !__LIB_16__::func_106(uParam1->f_16))
			{
				__LIB_33__::func_343(uParam1, 0);
				return 0;
			}
			break;
		case 7:
			if (!uParam1->f_9)
			{
				__LIB_17__::func_126(uParam1, uParam1->f_5);
			}
			if (__LIB_16__::func_101(iParam0[uParam1->f_12 /*24*/]) || !__LIB_16__::func_106(uParam1->f_16))
			{
				__LIB_33__::func_343(uParam1, 0);
				return 0;
			}
			break;
		case 8:
			if (!uParam1->f_9)
			{
				__LIB_17__::func_126(uParam1, uParam1->f_4);
			}
			if (__LIB_16__::func_101(iParam0[uParam1->f_12 /*24*/]) || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
			{
				__LIB_33__::func_343(uParam1, 0);
				return 0;
			}
			break;
		case 9:
			if (!uParam1->f_9)
			{
				if (__LIB_16__::func_80())
				{
					__LIB_17__::func_126(uParam1, uParam1->f_7);
				}
				else
				{
					__LIB_17__::func_126(uParam1, uParam1->f_8);
				}
			}
			if (__LIB_16__::func_101(iParam0[uParam1->f_12 /*24*/]) || __LIB_16__::func_99(iParam0[uParam1->f_12 /*24*/]))
			{
				__LIB_33__::func_343(uParam1, 0);
				return 0;
			}
			break;
		case 4:
			PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 51 /*INPUT_CONTEXT*/);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 101 /*INPUT_VEH_ROOF*/, true);
			__LIB_0__::func_189();
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
			{
				__LIB_33__::func_343(uParam1, 8);
				return 0;
			}
			if ((iParam0[uParam1->f_12 /*24*/])->f_8)
			{
				__LIB_33__::func_343(uParam1, 2);
				return 0;
			}
			if (__LIB_16__::func_101(iParam0[uParam1->f_12 /*24*/]) || !__LIB_16__::func_106(uParam1->f_16))
			{
				__LIB_33__::func_343(uParam1, 0);
				return 0;
			}
			if (Global_75485)
			{
				return 0;
			}
			if (__LIB_33__::func_513(1))
			{
				return 0;
			}
			if ((iParam0[uParam1->f_12 /*24*/])->f_6 == 1)
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) || __LIB_0__::func_336(PLAYER::PLAYER_PED_ID(), 0) != -1)
				{
					__LIB_33__::func_343(uParam1, 0);
					return 0;
				}
			}
			if ((iParam0[uParam1->f_12 /*24*/])->f_7 || (MISC::GET_MISSION_FLAG() && uParam1->f_16 == 0))
			{
				__LIB_33__::func_343(uParam1, 6);
				return 0;
			}
			if (__LIB_17__::func_129())
			{
				__LIB_33__::func_343(uParam1, 7);
				return 0;
			}
			if (__LIB_17__::func_131() < (iParam0[uParam1->f_12 /*24*/])->f_9)
			{
				__LIB_33__::func_343(uParam1, 1);
				return 0;
			}
			if (!uParam1->f_9)
			{
				__LIB_17__::func_128(uParam1, *uParam1, (iParam0[uParam1->f_12 /*24*/])->f_9);
			}
			if ((iParam0[uParam1->f_12 /*24*/])->f_6 == 1)
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
			}
			if (HUD::IS_PAUSE_MENU_ACTIVE() || PLAYER::IS_SYSTEM_UI_BEING_DISPLAYED())
			{
				return 0;
			}
			if (PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID()))
			{
				if ((PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_JUMPING(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_JUMPING_OUT_OF_VEHICLE(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if ((PED::IS_PED_RUNNING_RAGDOLL_TASK(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || TASK::IS_PED_GETTING_UP(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (PED::IS_PED_CLIMBING(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (PED::IS_PED_DUCKING(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_SWIMMING(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) > 0.05f)
				{
					return 0;
				}
			}
			if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 51 /*INPUT_CONTEXT*/) && uParam1->f_9 == 1)
			{
				if (!__LIB_16__::func_99(iParam0[uParam1->f_12 /*24*/]))
				{
					__LIB_33__::func_343(uParam1, 9);
				}
				else
				{
					__LIB_33__::func_343(uParam1, 5);
				}
			}
			break;
		case 5:
			__LIB_17__::func_127(uParam1);
			(iParam0[uParam1->f_12 /*24*/])->f_8 = 0;
			if (!bParam4)
			{
				__LIB_33__::func_343(uParam1, 0);
				return 1;
			}
			HUD::CLEAR_HELP(true);
			MISC::CLEAR_AREA_OF_PROJECTILES(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 20f, 0);
			if (!MISC::IS_STRING_NULL_OR_EMPTY((iParam0[uParam1->f_12 /*24*/])->f_5))
			{
				SCRIPT::REQUEST_SCRIPT((iParam0[uParam1->f_12 /*24*/])->f_5);
				while (!SCRIPT::HAS_SCRIPT_LOADED((iParam0[uParam1->f_12 /*24*/])->f_5))
				{
					__LIB_0__::func_189();
					if (__LIB_0__::func_715(PLAYER::PLAYER_PED_ID()))
					{
						if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !Global_78319)
						{
							__LIB_0__::func_213(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 2f, 1, 1056964608, 0, 1, 0);
							VEHICLE::SET_VEHICLE_BRAKE_LIGHTS(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false);
						}
					}
					PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 51 /*INPUT_CONTEXT*/);
					SCRIPT::REQUEST_SCRIPT((iParam0[uParam1->f_12 /*24*/])->f_5);
					PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 101 /*INPUT_VEH_ROOF*/, true);
					PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 75 /*INPUT_VEH_EXIT*/, true);
					PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 23 /*INPUT_ENTER*/, true);
					SYSTEM::WAIT(0);
				}
				if (bParam3)
				{
					CAM::DO_SCREEN_FADE_OUT(250);
				}
				if (SCRIPT::HAS_SCRIPT_LOADED((iParam0[uParam1->f_12 /*24*/])->f_5))
				{
					if (bParam3)
					{
						while (!CAM::IS_SCREEN_FADED_OUT())
						{
							if (__LIB_0__::func_715(PLAYER::PLAYER_PED_ID()))
							{
								if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !Global_78319)
								{
									__LIB_0__::func_213(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 2f, 1, 1056964608, 0, 1, 0);
									VEHICLE::SET_VEHICLE_BRAKE_LIGHTS(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false);
								}
							}
							PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 51 /*INPUT_CONTEXT*/);
							PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 101 /*INPUT_VEH_ROOF*/, true);
							PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 75 /*INPUT_VEH_EXIT*/, true);
							PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 23 /*INPUT_ENTER*/, true);
							__LIB_0__::func_189();
							SYSTEM::WAIT(0);
						}
					}
					SYSTEM::START_NEW_SCRIPT((iParam0[uParam1->f_12 /*24*/])->f_5, iParam5);
					SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED((iParam0[uParam1->f_12 /*24*/])->f_5);
					return 1;
				}
			}
			break;
	}
	return 0;
}

void func_57(int iParam0)//Position - 0x1933
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	int iVar4;
	if (!__LIB_16__::func_83(&(Local_40[iParam0 /*24*/])))
	{
		Local_40[iParam0 /*24*/].f_8 = 0;
		iLocal_61[iParam0] = 0;
		return;
	}
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		Local_40[iParam0 /*24*/].f_8 = 0;
		iLocal_61[iParam0] = 0;
		return;
	}
	if (iLocal_61[iParam0] == 0)
	{
		if (MISC::GET_GAME_TIMER() > uLocal_60[iParam0])
		{
			iLocal_61[iParam0] = SHAPETEST::START_SHAPE_TEST_SWEPT_SPHERE(Local_59[iParam0 /*3*/], Local_59[iParam0 /*3*/] + Vector(1f, 0f, 0f), 2f, 2, PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 4);
		}
	}
	else
	{
		iVar0 = SHAPETEST::GET_SHAPE_TEST_RESULT(iLocal_61[iParam0], &iVar4, &uVar2, &uVar3, &iVar1);
		if (iVar0 == 2)
		{
			Local_40[iParam0 /*24*/].f_8 = 0;
			if (iVar4 > 0)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iVar1))
				{
					if (ENTITY::IS_ENTITY_A_VEHICLE(iVar1))
					{
						Local_40[iParam0 /*24*/].f_8 = 1;
					}
				}
			}
			iLocal_61[iParam0] = 0;
		}
		if (iVar0 == 0)
		{
			iLocal_61[iParam0] = 0;
		}
		uLocal_60[iParam0] = MISC::GET_GAME_TIMER() + 250;
	}
}

void func_65()//Position - 0x2091
{
	__LIB_16__::func_87(&(Local_40[0 /*24*/]), 1, "Carwash1", __LIB_15__::func_504(156), 15, "", 0, 4f);
	__LIB_16__::func_87(&(Local_40[1 /*24*/]), 1, "Carwash2", __LIB_15__::func_504(157), 15, "", 0, 4f);
	__LIB_16__::func_86(&(Local_40[0 /*24*/]), -1f, 0f, 0f, 360f);
	__LIB_16__::func_86(&(Local_40[1 /*24*/]), 0f, -1f, 0f, 360f);
	__LIB_16__::func_102(&uLocal_41, 0);
	Local_59[0 /*3*/] = { 47.6f, -1392f, 29.4f };
	Local_59[1 /*3*/] = { -700f, -925.3f, 19f };
}

void func_74()//Position - 0x22DB
{
	func_75(&Local_40);
	__LIB_17__::func_127(&uLocal_41);
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_75(var uParam0)//Position - 0x22F3
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		__LIB_7__::func_252(uParam0[iVar0 /*24*/]);
		iVar0++;
	}
}

