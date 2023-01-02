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
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	char* sLocal_70 = NULL;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	int iLocal_73 = 0;
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	int iLocal_77 = 0;
	float fLocal_78 = 0f;
	int iLocal_79 = 0;
	int iLocal_80[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_81 = 0;
	int iLocal_82 = 0;
	int iLocal_83 = 0;
	int iLocal_84 = 0;
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
	iLocal_46 = 1;
	iLocal_47 = 1;
	iLocal_48 = 1;
	iLocal_49 = 1;
	iLocal_50 = 1;
	iLocal_51 = 1;
	iLocal_52 = 1;
	iLocal_53 = 1;
	iLocal_54 = 1;
	iLocal_55 = 1;
	iLocal_56 = 1;
	iLocal_57 = 1;
	iLocal_58 = 1;
	iLocal_59 = 1;
	iLocal_60 = 1;
	iLocal_61 = 1;
	iLocal_62 = 1;
	iLocal_63 = 1;
	iLocal_64 = 1;
	iLocal_65 = 1;
	iLocal_66 = 1;
	iLocal_67 = joaat("bmx");
	iLocal_73 = 300000;
	fLocal_78 = 1f;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(34))
	{
		func_113();
	}
	Global_32208 = 0;
	Global_32207 = 0;
	Global_32209 = 0;
	Global_32210 = 0;
	Global_32212 = 0;
	Global_32211 = 0;
	func_112();
	while (true)
	{
		func_2();
		if (((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && __LIB_0__::func_156(PLAYER::PLAYER_ID(), 1, 1)) && !Global_1836373) && Global_31959 == 0)
		{
			func_113();
		}
		SYSTEM::WAIT(0);
	}
}

void func_2()//Position - 0x187
{
	func_88();
	func_68();
	func_22();
	func_3(iLocal_67);
}

void func_3(int iParam0)//Position - 0x1A1
{
	switch (iLocal_46)
	{
		case 0:
			break;
		case 1:
			break;
		case 2:
			if (INTERIOR::IS_INTERIOR_SCENE())
			{
				func_21("CHEAT_VEHICLE_SPAWN_DENIED" /* GXT: Can't spawn that vehicle here. */);
				iLocal_46 = 1;
			}
			else
			{
				func_20(iParam0);
			}
			break;
		case 4:
			func_4(iParam0);
			break;
		default:
			break;
	}
}

void func_4(int iParam0)//Position - 0x1F6
{
	struct<3> Var0;
	float fVar1;
	bool bVar2;
	bVar2 = false;
	if (STREAMING::HAS_MODEL_LOADED(iParam0))
	{
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_68))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_68, false))
				{
					if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_68, false))
					{
						Var0 = { ENTITY::GET_ENTITY_COORDS(iLocal_68, true) };
						fVar1 = ENTITY::GET_ENTITY_HEADING(iLocal_68);
						ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Var0.f_0, Var0.f_1, (Var0.f_2 + 4f), true, false, false, true);
						bVar2 = true;
					}
				}
				VEHICLE::DELETE_VEHICLE(&iLocal_68);
			}
			if (!bVar2)
			{
				if (iParam0 == joaat("duster") || iParam0 == joaat("stunt"))
				{
					Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), -1.5f, 3.5f, 1f) };
				}
				else if (iParam0 == joaat("buzzard"))
				{
					Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), 0f, 6f, 2f) };
				}
				else
				{
					Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), 0f, 3.5f, 1f) };
				}
				fVar1 = (ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()) + 90f);
			}
			if (func_18(iParam0, Var0, fVar1))
			{
				iLocal_68 = VEHICLE::CREATE_VEHICLE(iParam0, Var0, fVar1, false, true, false);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_68, 5f);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iParam0);
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_68);
				func_16(sLocal_70);
				func_5(20);
			}
			else
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iParam0);
				func_21("CHEAT_VEHICLE_SPAWN_DENIED" /* GXT: Can't spawn that vehicle here. */);
			}
			iLocal_46 = 1;
		}
	}
}

void func_5(int iParam0)//Position - 0x339
{
	if (!__LIB_0__::isGlobal_43052EqualsValue(14) && !func_14(""))
	{
		MISC::SET_BIT(&Global_32209, iParam0);
		Global_32212 = 1;
		func_6();
	}
}

void func_6()//Position - 0x36C
{
	int iVar0;
	iVar0 = __LIB_0__::func_683();
	switch (iVar0)
	{
		case 0:
			__LIB_0__::func_182(joaat("SP0_TIMES_CHEATED"), 1);
			break;
		case 1:
			__LIB_0__::func_182(joaat("SP1_TIMES_CHEATED"), 1);
			break;
		case 2:
			__LIB_0__::func_182(joaat("SP2_TIMES_CHEATED"), 1);
			break;
	}
}

int func_14(char* sParam0)//Position - 0x570
{
	if (iLocal_84 != 0)
	{
		if (__LIB_0__::isGlobal_43052EqualsValue(14) && CAM::IS_SCREEN_FADED_IN())
		{
			if (MISC::ARE_STRINGS_EQUAL(sParam0, "CHEAT_SUPER_JUMP" /* GXT: Super jump. */) && INTERIOR::IS_INTERIOR_SCENE())
			{
				return 0;
			}
			if ((MISC::ARE_STRINGS_EQUAL(sParam0, "CHEAT_GRAVITY_MOON" /* GXT: Moon gravity. */) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false)) && ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID()))
			{
				return 0;
			}
		}
		return 1;
	}
	return 0;
}

void func_16(char* sParam0)//Position - 0x5E8
{
	if (func_14(""))
	{
	}
	else
	{
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CHEAT_ACTIVATED" /* GXT: Cheat activated:~n~~a~ */);
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam0);
		func_17(HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(false, true));
		STATS::PLAYSTATS_CHEAT_APPLIED(sParam0);
	}
}

void func_17(int iParam0)//Position - 0x61A
{
	iLocal_80[iLocal_81] = iParam0;
	iLocal_81++;
	if (iLocal_81 >= 10)
	{
		iLocal_81 = 0;
	}
}

int func_18(int iParam0, struct<3> Param1, float fParam2)//Position - 0x63A
{
	struct<3> Var0[9];
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	var uVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	var uVar14;
	MISC::GET_MODEL_DIMENSIONS(iParam0, &Var1, &Var2);
	Var3.f_0 = (MISC::ABSF((Var2.f_0 - Var1.f_0)) / 2f);
	Var3.f_1 = (MISC::ABSF((Var2.f_1 - Var1.f_1)) / 2f);
	Var3.f_2 = (MISC::ABSF((Var2.f_2 - Var1.f_2)) / 2f);
	Var0[0 /*3*/] = { Param1 };
	Var0[1 /*3*/] = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Param1, fParam2, -Var3.f_0, -Var3.f_1, -Var3.f_2) };
	Var0[2 /*3*/] = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Param1, fParam2, Var3.f_0, -Var3.f_1, -Var3.f_2) };
	Var0[3 /*3*/] = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Param1, fParam2, Var3.f_0, Var3.f_1, -Var3.f_2) };
	Var0[4 /*3*/] = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Param1, fParam2, -Var3.f_0, Var3.f_1, -Var3.f_2) };
	Var0[5 /*3*/] = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Param1, fParam2, -Var3.f_0, -Var3.f_1, Var3.f_2) };
	Var0[6 /*3*/] = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Param1, fParam2, Var3.f_0, -Var3.f_1, Var3.f_2) };
	Var0[7 /*3*/] = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Param1, fParam2, Var3.f_0, Var3.f_1, Var3.f_2) };
	Var0[8 /*3*/] = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Param1, fParam2, -Var3.f_0, Var3.f_1, Var3.f_2) };
	if (!INTERIOR::IS_COLLISION_MARKED_OUTSIDE(Param1))
	{
		return 0;
	}
	iVar13 = SHAPETEST::START_EXPENSIVE_SYNCHRONOUS_SHAPE_TEST_LOS_PROBE(__LIB_0__::func_85(PLAYER::PLAYER_ID()) + Vector(1f, 0f, 0f), Param1, 87, PLAYER::PLAYER_PED_ID(), 0);
	SHAPETEST::GET_SHAPE_TEST_RESULT(iVar13, &iVar6, &uVar4, &uVar5, &uVar14);
	if (iVar6 != 0)
	{
		return 0;
	}
	iVar7 = SHAPETEST::START_EXPENSIVE_SYNCHRONOUS_SHAPE_TEST_LOS_PROBE(Var0[1 /*3*/], Var0[3 /*3*/], 87, PLAYER::PLAYER_PED_ID(), 0);
	SHAPETEST::GET_SHAPE_TEST_RESULT(iVar7, &iVar6, &uVar4, &uVar5, &uVar14);
	if (iVar6 != 0)
	{
		return 0;
	}
	iVar8 = SHAPETEST::START_EXPENSIVE_SYNCHRONOUS_SHAPE_TEST_LOS_PROBE(Var0[2 /*3*/], Var0[4 /*3*/], 87, PLAYER::PLAYER_PED_ID(), 0);
	SHAPETEST::GET_SHAPE_TEST_RESULT(iVar8, &iVar6, &uVar4, &uVar5, &uVar14);
	if (iVar6 != 0)
	{
		return 0;
	}
	iVar9 = SHAPETEST::START_EXPENSIVE_SYNCHRONOUS_SHAPE_TEST_LOS_PROBE(Var0[5 /*3*/], Var0[7 /*3*/], 87, PLAYER::PLAYER_PED_ID(), 0);
	SHAPETEST::GET_SHAPE_TEST_RESULT(iVar9, &iVar6, &uVar4, &uVar5, &uVar14);
	if (iVar6 != 0)
	{
		return 0;
	}
	iVar10 = SHAPETEST::START_EXPENSIVE_SYNCHRONOUS_SHAPE_TEST_LOS_PROBE(Var0[6 /*3*/], Var0[8 /*3*/], 87, PLAYER::PLAYER_PED_ID(), 0);
	SHAPETEST::GET_SHAPE_TEST_RESULT(iVar10, &iVar6, &uVar4, &uVar5, &uVar14);
	if (iVar6 != 0)
	{
		return 0;
	}
	iVar11 = SHAPETEST::START_EXPENSIVE_SYNCHRONOUS_SHAPE_TEST_LOS_PROBE(Var0[1 /*3*/], Var0[8 /*3*/], 87, PLAYER::PLAYER_PED_ID(), 0);
	SHAPETEST::GET_SHAPE_TEST_RESULT(iVar11, &iVar6, &uVar4, &uVar5, &uVar14);
	if (iVar6 != 0)
	{
		return 0;
	}
	iVar12 = SHAPETEST::START_EXPENSIVE_SYNCHRONOUS_SHAPE_TEST_LOS_PROBE(Var0[2 /*3*/], Var0[7 /*3*/], 87, PLAYER::PLAYER_PED_ID(), 0);
	SHAPETEST::GET_SHAPE_TEST_RESULT(iVar12, &iVar6, &uVar4, &uVar5, &uVar14);
	if (iVar6 != 0)
	{
		return 0;
	}
	return 1;
}

void func_20(int iParam0)//Position - 0x909
{
	if (STREAMING::IS_MODEL_IN_CDIMAGE(iParam0))
	{
		STREAMING::REQUEST_MODEL(iParam0);
		if (STREAMING::HAS_MODEL_LOADED(iParam0))
		{
			iLocal_46 = 4;
		}
	}
}

void func_21(char* sParam0)//Position - 0x92C
{
	if (!__LIB_0__::isGlobal_43052EqualsValue(14))
	{
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CHEAT_DENIED" /* GXT: Cheat denied:~n~~a~ */);
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam0);
		func_17(HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(false, true));
	}
}

void func_22()//Position - 0x958
{
	func_65();
	func_64();
	func_45();
	func_44();
	func_43();
	func_39();
	func_36();
	func_32();
	func_23();
}

void func_23()//Position - 0x984
{
	switch (iLocal_66)
	{
		case 1:
			break;
		case 4:
			func_31(19, 1);
			func_30();
			break;
		case 5:
			if ((((!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) || func_28()) || __LIB_16__::func_791(23)) || __LIB_16__::func_791(21)) || __LIB_16__::func_791(19))
			{
				iLocal_66 = 9;
				return;
			}
			func_25();
			break;
		case 9:
			func_24("CHEAT_AIM_SLOW_MO" /* GXT: Slow motion aim. */);
			func_31(19, 0);
			MISC::SET_TIME_SCALE(1f);
			iLocal_77 = 0;
			iLocal_66 = 1;
			break;
		default:
			break;
	}
}

void func_24(char* sParam0)//Position - 0xA23
{
	if (func_14(sParam0))
	{
	}
	else
	{
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CHEAT_DEACTIVATED" /* GXT: Cheat deactivated:~n~~a~ */);
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam0);
		func_17(HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(false, true));
	}
}

void func_25()//Position - 0xA4E
{
	if (PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID()))
	{
		if (PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 25 /*INPUT_AIM*/))
		{
			if (__LIB_2__::func_85(PLAYER::PLAYER_PED_ID()) != joaat("WEAPON_UNARMED") && __LIB_2__::func_85(PLAYER::PLAYER_PED_ID()) != joaat("OBJECT"))
			{
				MISC::SET_TIME_SCALE(fLocal_78);
			}
			else
			{
				MISC::SET_TIME_SCALE(1f);
			}
		}
		else
		{
			MISC::SET_TIME_SCALE(1f);
		}
	}
}

int func_28()//Position - 0xACF
{
	if (((((((__LIB_0__::isGlobal_43052EqualsValue(0) || __LIB_0__::isGlobal_43052EqualsValue(11)) || __LIB_0__::isGlobal_43052EqualsValue(4)) || __LIB_0__::isGlobal_43052EqualsValue(9)) || __LIB_0__::isGlobal_43052EqualsValue(10)) || __LIB_0__::isGlobal_43052EqualsValue(3)) || __LIB_0__::isGlobal_43052EqualsValue(2)) || __LIB_0__::func_425(35))
	{
		return 1;
	}
	return 0;
}

void func_30()//Position - 0xB62
{
	iLocal_77++;
	if (iLocal_77 > 3)
	{
		iLocal_77 = 0;
		iLocal_66 = 9;
		return;
	}
	switch (iLocal_77)
	{
		case 1:
			func_16("CHEAT_AIM_SLOW_MO1" /* GXT: Slow motion aim level 1. */);
			fLocal_78 = 0.6f;
			break;
		case 2:
			func_16("CHEAT_AIM_SLOW_MO2" /* GXT: Slow motion aim level 2. */);
			fLocal_78 = 0.4f;
			break;
		case 3:
			func_16("CHEAT_AIM_SLOW_MO3" /* GXT: Slow motion aim level 3. */);
			fLocal_78 = 0.2f;
			break;
		default:
			break;
	}
	iLocal_66 = 5;
}

void func_31(int iParam0, bool bParam1)//Position - 0xBD2
{
	if (bParam1)
	{
		MISC::SET_BIT(&Global_32208, iParam0);
		func_5(iParam0);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_32208, iParam0);
	}
}

void func_32()//Position - 0xBFA
{
	switch (iLocal_63)
	{
		case 1:
			break;
		case 4:
			func_31(16, 1);
			func_35();
			break;
		case 5:
			PAD::DISABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 37 /*INPUT_SELECT_WEAPON*/, true);
			PAD::DISABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 19 /*INPUT_CHARACTER_WHEEL*/, true);
			if ((((((((!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) || func_28()) || __LIB_0__::func_201()) || __LIB_0__::func_104(1)) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 37 /*INPUT_SELECT_WEAPON*/)) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 19 /*INPUT_CHARACTER_WHEEL*/)) || __LIB_16__::func_791(23)) || __LIB_16__::func_791(21)) || __LIB_16__::func_791(16))
			{
				iLocal_63 = 9;
			}
			break;
		case 9:
			PAD::DISABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 37 /*INPUT_SELECT_WEAPON*/, true);
			PAD::DISABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 19 /*INPUT_CHARACTER_WHEEL*/, true);
			func_24("CHEAT_SLOW_MO" /* GXT: Slow Motion. */);
			func_31(16, 0);
			iLocal_76 = 0;
			MISC::SET_TIME_SCALE(1f);
			iLocal_63 = 1;
			break;
		default:
			break;
	}
}

void func_35()//Position - 0xD26
{
	iLocal_76++;
	if (iLocal_76 > 3)
	{
		iLocal_63 = 9;
		return;
	}
	switch (iLocal_76)
	{
		case 1:
			func_16("CHEAT_SLOW_MO1" /* GXT: Slow motion level 1. */);
			MISC::SET_TIME_SCALE(0.6f);
			break;
		case 2:
			func_16("CHEAT_SLOW_MO2" /* GXT: Slow motion level 2. */);
			MISC::SET_TIME_SCALE(0.4f);
			break;
		case 3:
			func_16("CHEAT_SLOW_MO3" /* GXT: Slow motion level 3. */);
			MISC::SET_TIME_SCALE(0.2f);
			break;
		default:
			break;
	}
	iLocal_63 = 5;
}

void func_36()//Position - 0xD99
{
	struct<3> Var0;
	float fVar1;
	float fVar2;
	switch (iLocal_64)
	{
		case 1:
			break;
		case 2:
			func_31(17, 1);
			ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), true);
			PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID(), true);
			ENTITY::SET_ENTITY_PROOFS(PLAYER::PLAYER_PED_ID(), true, true, true, true, true, false, false, false);
			WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("GADGET_PARACHUTE"), 1, false, true);
			Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
			fVar1 = ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID());
			MISC::GET_GROUND_Z_FOR_3D_COORD(Var0, &fVar2, false, false);
			fVar2 = (fVar2 + 500f);
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Var0.f_0, Var0.f_1, fVar2, true, false, false, true);
			ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), fVar1);
			iLocal_72 = MISC::GET_GAME_TIMER();
			CAM::DO_SCREEN_FADE_OUT(0);
			iLocal_64 = 3;
			break;
		case 3:
			if (__LIB_16__::func_302(1000, iLocal_72))
			{
				ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
				iLocal_72 = MISC::GET_GAME_TIMER();
				iLocal_64 = 4;
			}
			break;
		case 4:
			if (__LIB_16__::func_302(1000, iLocal_72))
			{
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 144 /*INPUT_PARACHUTE_DEPLOY*/, true);
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 149 /*INPUT_PARACHUTE_PITCH_UD*/, true);
				if (__LIB_0__::func_683() == 0)
				{
					PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 9, 0, 0, 0);
				}
				else
				{
					PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 8, 0, 0, 0);
				}
				CAM::DO_SCREEN_FADE_IN(250);
				iLocal_72 = MISC::GET_GAME_TIMER();
				func_16("CHEAT_SKYFALL" /* GXT: Skyfall. */);
				MISC::SET_INSTANCE_PRIORITY_HINT(2);
				iLocal_64 = 5;
			}
			break;
		case 5:
			if ((((!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) || func_28()) || __LIB_16__::func_791(23)) || __LIB_16__::func_791(21)) || __LIB_16__::func_791(17))
			{
				iLocal_64 = 9;
				break;
			}
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 144 /*INPUT_PARACHUTE_DEPLOY*/, true);
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(2);
			if (PED::IS_PED_IN_PARACHUTE_FREE_FALL(PLAYER::PLAYER_PED_ID()))
			{
				ENTITY::APPLY_FORCE_TO_ENTITY(PLAYER::PLAYER_PED_ID(), 1, 0f, 200f, 2.5f, 0f, 0f, 0f, 0, true, false, false, false, true);
				if (ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(PLAYER::PLAYER_PED_ID()))
				{
					iLocal_64 = 9;
				}
			}
			else
			{
				iLocal_64 = 9;
			}
			break;
		case 9:
			func_37();
			func_24("CHEAT_SKYFALL" /* GXT: Skyfall. */);
			func_31(17, 0);
			iLocal_64 = 1;
			break;
		default:
			break;
	}
}

void func_37()//Position - 0xF99
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		WEAPON::REMOVE_WEAPON_FROM_PED(PLAYER::PLAYER_PED_ID(), joaat("GADGET_PARACHUTE"));
	}
	if (iLocal_62 != 5)
	{
		PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID(), false);
		ENTITY::SET_ENTITY_PROOFS(PLAYER::PLAYER_PED_ID(), false, false, false, false, false, false, false, false);
	}
	MISC::SET_INSTANCE_PRIORITY_HINT(0);
}

void func_39()//Position - 0xFFF
{
	struct<3> Var0;
	switch (iLocal_62)
	{
		case 1:
			break;
		case 4:
			func_16("CHEAT_INVINCIBILITY" /* GXT: Invincible for 5 minutes. */);
			func_31(15, 1);
			iLocal_62 = 5;
			iLocal_74 = MISC::GET_GAME_TIMER();
			PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID(), true);
			ENTITY::SET_ENTITY_PROOFS(PLAYER::PLAYER_PED_ID(), true, true, true, true, true, false, false, false);
			break;
		case 5:
			if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) || PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				iLocal_62 = 9;
				return;
			}
			Var0 = { __LIB_0__::func_85(PLAYER::PLAYER_ID()) };
			if (((((func_28() || __LIB_0__::func_201()) || __LIB_16__::func_791(23)) || __LIB_16__::func_791(21)) || __LIB_16__::func_791(15)) || Var0.f_2 <= -170f)
			{
				iLocal_62 = 9;
				return;
			}
			iLocal_75 = (MISC::GET_GAME_TIMER() - iLocal_74);
			if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("appinternet")) == 0)
			{
				__LIB_1__::func_350((iLocal_73 - iLocal_75), "CHEAT_INV" /* GXT: INVINCIBILITY */, 0, 0, 1000, 0, 2, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, -1);
			}
			if (iLocal_75 >= (iLocal_73 - 1000))
			{
				iLocal_62 = 9;
				return;
			}
			PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID(), true);
			ENTITY::SET_ENTITY_PROOFS(PLAYER::PLAYER_PED_ID(), true, true, true, true, true, false, false, false);
			STATS::STAT_SET_CHEAT_IS_ACTIVE();
			break;
		case 9:
			func_24("CHEAT_INVINCIBILITY_OFF" /* GXT: Invincibility */);
			func_31(15, 0);
			iLocal_62 = 1;
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID(), false);
				ENTITY::SET_ENTITY_PROOFS(PLAYER::PLAYER_PED_ID(), false, false, false, false, false, false, false, false);
			}
			break;
		default:
			break;
	}
}

void func_43()//Position - 0x1306
{
	switch (iLocal_59)
	{
		case 1:
			break;
		case 4:
			func_16("CHEAT_FLAMING_BULLETS" /* GXT: Flaming bullets. */);
			func_31(12, 1);
			iLocal_59 = 5;
			break;
		case 5:
			if (((!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) || __LIB_16__::func_791(23)) || __LIB_16__::func_791(21)) || __LIB_16__::func_791(12))
			{
				iLocal_59 = 9;
				return;
			}
			if (func_28())
			{
				iLocal_59 = 9;
				return;
			}
			MISC::SET_FIRE_AMMO_THIS_FRAME(PLAYER::PLAYER_ID());
			break;
		case 9:
			func_24("CHEAT_FLAMING_BULLETS" /* GXT: Flaming bullets. */);
			func_31(12, 0);
			iLocal_59 = 1;
			break;
		default:
			break;
	}
}

void func_44()//Position - 0x13AD
{
	switch (iLocal_60)
	{
		case 1:
			break;
		case 4:
			func_16("CHEAT_EXPLOSIVE_MELEE" /* GXT: Explosive melee attacks. */);
			func_31(13, 1);
			iLocal_60 = 5;
			break;
		case 5:
			if ((((!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) || __LIB_16__::func_791(23)) || __LIB_16__::func_791(21)) || __LIB_16__::func_791(13)) || func_28())
			{
				iLocal_60 = 9;
				return;
			}
			MISC::SET_EXPLOSIVE_MELEE_THIS_FRAME(PLAYER::PLAYER_ID());
			break;
		case 9:
			func_24("CHEAT_EXPLOSIVE_MELEE" /* GXT: Explosive melee attacks. */);
			func_31(13, 0);
			iLocal_60 = 1;
			break;
		default:
			break;
	}
}

void func_45()//Position - 0x1450
{
	switch (iLocal_65)
	{
		case 1:
			break;
		case 4:
			func_16("CHEAT_DRUNK" /* GXT: Drunk mode. */);
			func_31(18, 1);
			__LIB_16__::func_303(PLAYER::PLAYER_PED_ID());
			__LIB_32__::func_11(30000, 1050253722, 1065353216, 0);
			iLocal_65 = 5;
			break;
		case 5:
			if ((((func_28() || !PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())) || __LIB_16__::func_791(23)) || __LIB_16__::func_791(21)) || __LIB_16__::func_791(18))
			{
				iLocal_65 = 9;
			}
			break;
		case 9:
			func_24("CHEAT_DRUNK" /* GXT: Drunk mode. */);
			func_31(18, 0);
			__LIB_9__::func_766(PLAYER::PLAYER_PED_ID());
			__LIB_8__::func_395(1000);
			iLocal_65 = 1;
			break;
		case 10:
			__LIB_12__::func_915(1);
			func_31(18, 0);
			iLocal_65 = 1;
			break;
		default:
			break;
	}
}

void func_64()//Position - 0x1AF3
{
	switch (iLocal_58)
	{
		case 1:
			break;
		case 4:
			func_16("CHEAT_BANG_BANG" /* GXT: Bang bang! */);
			func_31(11, 1);
			iLocal_58 = 5;
			break;
		case 5:
			if (((!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) || __LIB_16__::func_791(23)) || __LIB_16__::func_791(21)) || __LIB_16__::func_791(11))
			{
				iLocal_58 = 9;
				return;
			}
			if (func_28())
			{
				iLocal_58 = 9;
				return;
			}
			MISC::SET_EXPLOSIVE_AMMO_THIS_FRAME(PLAYER::PLAYER_ID());
			break;
		case 9:
			func_24("CHEAT_BANG_BANG" /* GXT: Bang bang! */);
			func_31(11, 0);
			iLocal_58 = 1;
			break;
		default:
			break;
	}
}

void func_65()//Position - 0x1B9A
{
	switch (iLocal_61)
	{
		case 1:
			break;
		case 4:
			func_5(14);
			func_31(14, 1);
			func_67();
			break;
		case 5:
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if ((((((!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) || func_28()) || __LIB_16__::func_791(23)) || __LIB_16__::func_791(21)) || __LIB_16__::func_791(14)) || __LIB_16__::func_789(17)) || ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID()))
				{
					iLocal_61 = 9;
				}
			}
			else
			{
				iLocal_61 = 9;
			}
			break;
		case 9:
			func_24("CHEAT_GRAVITY_MOON" /* GXT: Moon gravity. */);
			func_31(14, 0);
			MISC::SET_GRAVITY_LEVEL(0);
			iLocal_79 = 0;
			iLocal_61 = 1;
			break;
		default:
			break;
	}
}

void func_67()//Position - 0x1C7B
{
	iLocal_79++;
	if (iLocal_79 > 1)
	{
		iLocal_61 = 9;
		return;
	}
	switch (iLocal_79)
	{
		case 1:
			func_16("CHEAT_GRAVITY_MOON" /* GXT: Moon gravity. */);
			MISC::SET_GRAVITY_LEVEL(1);
			break;
		default:
			break;
	}
	iLocal_61 = 5;
}

void func_68()//Position - 0x1CB8
{
	func_87();
	func_81();
	func_80();
	func_79();
	func_78();
	func_77();
	func_76();
	func_74();
	func_73();
	func_72();
	func_69();
}

void func_69()//Position - 0x1CEC
{
	if (iLocal_57 == 4)
	{
		iLocal_57 = 1;
		if ((__LIB_16__::func_791(23) || __LIB_16__::func_791(22)) || __LIB_16__::func_791(10))
		{
			func_21("CHEAT_NOT_NOW" /* GXT: Can't activate that cheat right now. */);
			return;
		}
		if (func_70())
		{
			func_21("CHEAT_PHONE_DENIED" /* GXT: Can't activate cheats while using the cellphone. */);
			return;
		}
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			func_16("CHEAT_GIVE_PARACHUTE" /* GXT: Parachute given. */);
			WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("GADGET_PARACHUTE"), 1, true, true);
			func_5(10);
		}
	}
}

int func_70()//Position - 0x1D64
{
	if (iLocal_83)
	{
		iLocal_83 = 0;
		return 0;
	}
	if (__LIB_0__::func_77(0))
	{
		return 1;
	}
	return 0;
}

void func_72()//Position - 0x1DDC
{
	int iVar0;
	if (iLocal_56 == 4)
	{
		iLocal_56 = 1;
		if ((__LIB_16__::func_791(23) || __LIB_16__::func_791(22)) || __LIB_16__::func_791(9))
		{
			func_21("CHEAT_NOT_NOW" /* GXT: Can't activate that cheat right now. */);
			return;
		}
		if (func_70())
		{
			func_21("CHEAT_PHONE_DENIED" /* GXT: Can't activate cheats while using the cellphone. */);
			return;
		}
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			if (PLAYER::GET_MAX_WANTED_LEVEL() == 0)
			{
				func_21("CHEAT_NOT_NOW" /* GXT: Can't activate that cheat right now. */);
				return;
			}
			iVar0 = PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
			if (iVar0 > 0)
			{
				func_16("CHEAT_WANTED_DOWN" /* GXT: Wanted Level down. */);
				PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), (iVar0 - 1), false);
				func_5(9);
			}
			else
			{
				func_21("CHEAT_WANTED_DOWN_DENIED" /* GXT: No Wanted Level active. */);
			}
		}
	}
}

void func_73()//Position - 0x1E7F
{
	int iVar0;
	if (iLocal_55 == 4)
	{
		iLocal_55 = 1;
		if ((__LIB_16__::func_791(23) || __LIB_16__::func_791(22)) || __LIB_16__::func_791(8))
		{
			func_21("CHEAT_NOT_NOW" /* GXT: Can't activate that cheat right now. */);
			return;
		}
		if (func_70())
		{
			func_21("CHEAT_PHONE_DENIED" /* GXT: Can't activate cheats while using the cellphone. */);
			return;
		}
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			if (PLAYER::GET_MAX_WANTED_LEVEL() == 0)
			{
				func_21("CHEAT_NOT_NOW" /* GXT: Can't activate that cheat right now. */);
				return;
			}
			iVar0 = PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
			if (iVar0 < PLAYER::GET_MAX_WANTED_LEVEL())
			{
				PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), iVar0 + 1, false);
				PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
				func_16("CHEAT_WANTED_UP" /* GXT: Wanted Level up. */);
				func_5(8);
			}
			else
			{
				func_21("CHEAT_WANTED_UP_DENIED" /* GXT: Current max Wanted Level reached. */);
			}
		}
	}
}

void func_74()//Position - 0x1F2E
{
	if (iLocal_54 == 4)
	{
		iLocal_54 = 1;
		if ((((((__LIB_16__::func_791(23) || __LIB_16__::func_791(22)) || __LIB_16__::func_791(7)) || __LIB_0__::isGlobal_43052EqualsValue(9)) || __LIB_0__::isGlobal_43052EqualsValue(10)) || !PLAYER::IS_SPECIAL_ABILITY_UNLOCKED(__LIB_2__::func_82())) || !PLAYER::IS_SPECIAL_ABILITY_ENABLED(PLAYER::PLAYER_ID(), 0))
		{
			func_21("CHEAT_NOT_NOW" /* GXT: Can't activate that cheat right now. */);
			return;
		}
		if (func_70())
		{
			func_21("CHEAT_PHONE_DENIED" /* GXT: Can't activate cheats while using the cellphone. */);
			return;
		}
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			PLAYER::SPECIAL_ABILITY_FILL_METER(PLAYER::PLAYER_ID(), true, 0);
			func_16("CHEAT_SPECIAL_ABILITY" /* GXT: Special ability recharged. */);
			func_5(7);
		}
	}
}

void func_76()//Position - 0x1FE5
{
	int iVar0;
	if (iLocal_53 == 4)
	{
		iLocal_53 = 1;
		if ((((__LIB_16__::func_791(23) || __LIB_16__::func_791(22)) || __LIB_16__::func_791(6)) || __LIB_0__::isGlobal_43052EqualsValue(9)) || __LIB_0__::isGlobal_43052EqualsValue(10))
		{
			func_21("CHEAT_NOT_NOW" /* GXT: Can't activate that cheat right now. */);
			return;
		}
		if (func_70())
		{
			func_21("CHEAT_PHONE_DENIED" /* GXT: Can't activate cheats while using the cellphone. */);
			return;
		}
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			func_16("CHEAT_HEALTH_ARMOR" /* GXT: Max health and armor. */);
			func_5(6);
			ENTITY::SET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_MAX_HEALTH(PLAYER::PLAYER_PED_ID()), 0);
			PED::ADD_ARMOUR_TO_PED(PLAYER::PLAYER_PED_ID(), (PLAYER::GET_PLAYER_MAX_ARMOUR(PLAYER::PLAYER_ID()) - PED::GET_PED_ARMOUR(PLAYER::PLAYER_PED_ID())));
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				iVar0 = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
				if (ENTITY::DOES_ENTITY_EXIST(iVar0))
				{
					if (!ENTITY::IS_ENTITY_DEAD(iVar0, false))
					{
						VEHICLE::SET_VEHICLE_FIXED(iVar0);
					}
				}
			}
		}
	}
}

void func_77()//Position - 0x20BD
{
	if (iLocal_52 == 4)
	{
		iLocal_52 = 1;
		if ((__LIB_16__::func_791(23) || __LIB_16__::func_791(22)) || __LIB_16__::func_791(5))
		{
			func_21("CHEAT_NOT_NOW" /* GXT: Can't activate that cheat right now. */);
			return;
		}
		if (func_70())
		{
			func_21("CHEAT_PHONE_DENIED" /* GXT: Can't activate cheats while using the cellphone. */);
			return;
		}
		func_5(5);
		switch (iLocal_71)
		{
			case 0:
				iLocal_71 = 1;
			case 1:
				MISC::SET_WEATHER_TYPE_NOW_PERSIST("EXTRASUNNY");
				MISC::CLEAR_WEATHER_TYPE_PERSIST();
				func_16("CHEAT_ADVANCE_WEATHER_EXTRA_SUNNY" /* GXT: Extra sunny weather. */);
				iLocal_71 = 2;
				break;
			case 2:
				MISC::SET_WEATHER_TYPE_NOW_PERSIST("CLEAR");
				MISC::CLEAR_WEATHER_TYPE_PERSIST();
				func_16("CHEAT_ADVANCE_WEATHER_CLEAR" /* GXT: Clear weather. */);
				iLocal_71 = 3;
				break;
			case 3:
				MISC::SET_WEATHER_TYPE_NOW_PERSIST("CLOUDS");
				MISC::CLEAR_WEATHER_TYPE_PERSIST();
				func_16("CHEAT_ADVANCE_WEATHER_CLOUDY" /* GXT: Cloudy weather. */);
				iLocal_71 = 4;
				break;
			case 4:
				MISC::SET_WEATHER_TYPE_NOW_PERSIST("SMOG");
				MISC::CLEAR_WEATHER_TYPE_PERSIST();
				func_16("CHEAT_ADVANCE_WEATHER_SMOGGY" /* GXT: Smoggy weather. */);
				iLocal_71 = 6;
				break;
			case 6:
				MISC::SET_WEATHER_TYPE_NOW_PERSIST("OVERCAST");
				MISC::CLEAR_WEATHER_TYPE_PERSIST();
				func_16("CHEAT_ADVANCE_WEATHER_OVERCAST" /* GXT: Overcast weather. */);
				iLocal_71 = 7;
				break;
			case 7:
				MISC::SET_WEATHER_TYPE_NOW_PERSIST("RAIN");
				MISC::CLEAR_WEATHER_TYPE_PERSIST();
				func_16("CHEAT_ADVANCE_WEATHER_RAIN" /* GXT: Rainy weather. */);
				func_31(5, 1);
				iLocal_71 = 8;
				break;
			case 8:
				MISC::SET_WEATHER_TYPE_NOW_PERSIST("THUNDER");
				MISC::CLEAR_WEATHER_TYPE_PERSIST();
				func_16("CHEAT_ADVANCE_WEATHER_THUNDER" /* GXT: Thundery weather. */);
				iLocal_71 = 9;
				break;
			case 9:
				MISC::SET_WEATHER_TYPE_NOW_PERSIST("CLEARING");
				MISC::CLEAR_WEATHER_TYPE_PERSIST();
				func_16("CHEAT_ADVANCE_WEATHER_CLEARING" /* GXT: Clearing weather. */);
				iLocal_71 = 11;
				break;
			case 11:
				MISC::SET_WEATHER_TYPE_NOW_PERSIST("XMAS");
				MISC::CLEAR_WEATHER_TYPE_PERSIST();
				func_16("CHEAT_ADVANCE_WEATHER_SNOW" /* GXT: Snowy weather. */);
				iLocal_71 = 0;
				break;
			default:
				break;
			}
	}
}

void func_78()//Position - 0x224C
{
	if (iLocal_51 == 4)
	{
		iLocal_51 = 1;
		if ((__LIB_16__::func_791(23) || __LIB_16__::func_791(22)) || __LIB_16__::func_791(4))
		{
			func_21("CHEAT_NOT_NOW" /* GXT: Can't activate that cheat right now. */);
			return;
		}
		if (func_70())
		{
			func_21("CHEAT_PHONE_DENIED" /* GXT: Can't activate cheats while using the cellphone. */);
			return;
		}
		func_16("CHEAT_GIVE_WEAPONS" /* GXT: Give weapons. */);
		func_5(4);
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			WEAPON::GIVE_DELAYED_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_KNIFE"), -1, false);
			WEAPON::GIVE_DELAYED_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_SMG"), 300, false);
			WEAPON::GIVE_DELAYED_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_ASSAULTRIFLE"), 300, true);
			WEAPON::GIVE_DELAYED_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_PUMPSHOTGUN"), 150, false);
			WEAPON::GIVE_DELAYED_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_SNIPERRIFLE"), 30, false);
			WEAPON::GIVE_DELAYED_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_GRENADE"), 5, false);
			WEAPON::GIVE_DELAYED_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_RPG"), 5, false);
		}
	}
}

void func_79()//Position - 0x2321
{
	switch (iLocal_50)
	{
		case 1:
			break;
		case 4:
			func_16("CHEAT_FAST_SWIM" /* GXT: Fast swim. */);
			func_31(3, 1);
			iLocal_50 = 5;
			break;
		case 5:
			if (((!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) || __LIB_16__::func_791(23)) || __LIB_16__::func_791(22)) || __LIB_16__::func_791(3))
			{
				iLocal_50 = 9;
			}
			else
			{
				PLAYER::SET_SWIM_MULTIPLIER_FOR_PLAYER(PLAYER::PLAYER_ID(), 1.49f);
				STATS::STAT_SET_CHEAT_IS_ACTIVE();
			}
			break;
		case 9:
			PLAYER::SET_SWIM_MULTIPLIER_FOR_PLAYER(PLAYER::PLAYER_ID(), 1f);
			func_24("CHEAT_FAST_SWIM" /* GXT: Fast swim. */);
			func_31(3, 0);
			iLocal_50 = 1;
			break;
		default:
			break;
	}
}

void func_80()//Position - 0x23C9
{
	switch (iLocal_49)
	{
		case 1:
			break;
		case 4:
			func_16("CHEAT_FAST_RUN" /* GXT: Fast run. */);
			func_31(2, 1);
			iLocal_49 = 5;
			break;
		case 5:
			if ((((!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) || PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())) || __LIB_16__::func_791(23)) || __LIB_16__::func_791(22)) || __LIB_16__::func_791(2))
			{
				iLocal_49 = 9;
			}
			else
			{
				if (TASK::IS_PED_RUNNING(PLAYER::PLAYER_PED_ID()) || (TASK::IS_PED_SPRINTING(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID())))
				{
					PLAYER::SET_RUN_SPRINT_MULTIPLIER_FOR_PLAYER(PLAYER::PLAYER_ID(), 1.49f);
				}
				else
				{
					PLAYER::SET_RUN_SPRINT_MULTIPLIER_FOR_PLAYER(PLAYER::PLAYER_ID(), 1f);
				}
				STATS::STAT_SET_CHEAT_IS_ACTIVE();
			}
			break;
		case 9:
			PLAYER::SET_RUN_SPRINT_MULTIPLIER_FOR_PLAYER(PLAYER::PLAYER_ID(), 1f);
			func_24("CHEAT_FAST_RUN" /* GXT: Fast run. */);
			func_31(2, 0);
			iLocal_49 = 1;
			break;
		default:
			break;
	}
}

void func_81()//Position - 0x24B2
{
	int iVar0;
	switch (iLocal_48)
	{
		case 1:
			break;
		case 4:
			func_16("CHEAT_SLIDEY_CARS" /* GXT: Slidey cars. */);
			func_31(1, 1);
			iLocal_48 = 5;
			break;
		case 5:
			if (((!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) || __LIB_16__::func_791(23)) || __LIB_16__::func_791(22)) || __LIB_16__::func_791(1))
			{
				iLocal_48 = 9;
			}
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
				if (!ENTITY::IS_ENTITY_DEAD(iVar0, false))
				{
					if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1, false) == PLAYER::PLAYER_PED_ID())
					{
						if (iLocal_69 == 0)
						{
							iLocal_69 = iVar0;
							if (!ENTITY::IS_ENTITY_DEAD(iLocal_69, false))
							{
								if (func_82(1))
								{
									VEHICLE::SET_VEHICLE_REDUCE_GRIP(iLocal_69, true);
								}
								else
								{
									iLocal_69 = 0;
								}
							}
						}
						else if (iLocal_69 != iVar0)
						{
							if (!ENTITY::IS_ENTITY_DEAD(iLocal_69, false))
							{
								VEHICLE::SET_VEHICLE_REDUCE_GRIP(iLocal_69, false);
							}
							iLocal_69 = 0;
						}
					}
				}
			}
			break;
		case 9:
			func_24("CHEAT_SLIDEY_CARS" /* GXT: Slidey cars. */);
			iLocal_48 = 10;
			break;
		case 10:
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_69, false))
			{
				VEHICLE::SET_VEHICLE_REDUCE_GRIP(iLocal_69, false);
				iLocal_69 = 0;
			}
			func_31(1, 0);
			iLocal_48 = 1;
			break;
		default:
			break;
	}
}

int func_82(int iParam0)//Position - 0x25D9
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	char* sVar4;
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
			{
				iVar1 = ENTITY::GET_ENTITY_MODEL(iVar0);
				iVar2 = __LIB_0__::func_683();
				if (iParam0 & 1 != 0)
				{
					if (!VEHICLE::IS_THIS_MODEL_A_CAR(iVar1))
					{
						return 0;
					}
				}
				if (iParam0 & 2 != 0)
				{
					if (!VEHICLE::IS_THIS_MODEL_A_BIKE(iVar1))
					{
						return 0;
					}
				}
				if (iParam0 & 4 != 0)
				{
					if (!VEHICLE::IS_THIS_MODEL_A_HELI(iVar1))
					{
						return 0;
					}
				}
				if (iParam0 & 8 != 0)
				{
					if (!VEHICLE::IS_THIS_MODEL_A_BOAT(iVar1))
					{
						return 0;
					}
				}
				if (iParam0 & 16 != 0)
				{
					if (ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "door_dside_r") != -1 || ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "door_pside_r") != -1)
					{
						return 0;
					}
				}
				if (iParam0 & 32 != 0)
				{
					if (ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "door_dside_r") == -1 || ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "door_pside_r") == -1)
					{
						return 0;
					}
				}
				if (iParam0 & 64 != 0)
				{
					if (VEHICLE::IS_THIS_MODEL_A_BIKE(iVar1))
					{
						if (ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "seat_r") == -1)
						{
							return 0;
						}
					}
					else if (ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "seat_dside_r") != -1 || ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "seat_pside_r") != -1)
					{
						return 0;
					}
				}
				if (iParam0 & 128 != 0)
				{
					if (ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "seat_dside_r") == -1 || ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "seat_pside_r") == -1)
					{
						return 0;
					}
				}
				if (iParam0 & 256 != 0)
				{
					if (!__LIB_0__::func_43(iVar2))
					{
						return 0;
					}
					if (__LIB_0__::func_721(iVar2, 0) != iVar1)
					{
						return 0;
					}
				}
				if (iParam0 & 512 != 0)
				{
					if (!VEHICLE::IS_THIS_MODEL_A_CAR(iVar1) && !VEHICLE::IS_THIS_MODEL_A_BIKE(iVar1))
					{
						return 0;
					}
					if (VEHICLE::IS_BIG_VEHICLE(iVar0))
					{
						return 0;
					}
					sVar4 = ENTITY::GET_ENTITY_SCRIPT(iVar0, &uVar3);
					if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar4))
					{
						if (MISC::GET_HASH_KEY(sVar4) == MISC::GET_HASH_KEY("taxiService"))
						{
							return 0;
						}
					}
					if (__LIB_0__::func_363(iVar0, iVar2, 0))
					{
						return 0;
					}
				}
				return 1;
			}
		}
	}
	return 0;
}

void func_87()//Position - 0x2BBE
{
	switch (iLocal_47)
	{
		case 1:
			break;
		case 4:
			func_16("CHEAT_SUPER_JUMP" /* GXT: Super jump. */);
			func_31(0, 1);
			iLocal_47 = 5;
			break;
		case 5:
			if ((((!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) || __LIB_16__::func_791(23)) || __LIB_16__::func_791(22)) || __LIB_16__::func_791(0)) || INTERIOR::IS_INTERIOR_SCENE())
			{
				iLocal_47 = 9;
				return;
			}
			MISC::SET_SUPER_JUMP_THIS_FRAME(PLAYER::PLAYER_ID());
			PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 217, true);
			break;
		case 9:
			func_24("CHEAT_SUPER_JUMP" /* GXT: Super jump. */);
			func_31(0, 0);
			iLocal_47 = 1;
			break;
		default:
			break;
	}
}

void func_88()//Position - 0x2C67
{
	if ((__LIB_0__::func_691() || iLocal_84 != 0) || __LIB_0__::isGlobal_43052EqualsValue(14))
	{
		PAD::DISABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 243 /*INPUT_ENTER_CHEAT_CODE*/, true);
	}
	func_110();
	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		return;
	}
	if (TASK::IS_PED_BEING_ARRESTED(PLAYER::PLAYER_PED_ID()))
	{
		return;
	}
	if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		return;
	}
	if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
	{
		return;
	}
	if (__LIB_0__::func_201() || STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		return;
	}
	if (__LIB_0__::func_134())
	{
		if (!iLocal_82)
		{
			func_108();
			iLocal_82 = 1;
		}
		return;
	}
	iLocal_82 = 0;
	iLocal_83 = 0;
	if ((func_107(988027572, 12) || MISC::HAS_PC_CHEAT_WITH_HASH_BEEN_ACTIVATED(joaat("buzzoff"))) || func_106(20, joaat("buzzard")))
	{
		func_103(joaat("buzzard"), "CHEAT_SPAWN_VEH1" /* GXT: Spawn Buzzard. */);
	}
	if ((func_107(-1134279030, 11) || MISC::HAS_PC_CHEAT_WITH_HASH_BEEN_ACTIVATED(joaat("bandit"))) || func_106(20, joaat("bmx")))
	{
		func_103(joaat("bmx"), "CHEAT_SPAWN_VEH2" /* GXT: Spawn BMX. */);
	}
	if ((func_107(971352167, 10) || MISC::HAS_PC_CHEAT_WITH_HASH_BEEN_ACTIVATED(joaat("holein1"))) || func_106(20, joaat("caddy")))
	{
		func_103(joaat("caddy"), "CHEAT_SPAWN_VEH3" /* GXT: Spawn Caddy. */);
	}
	if ((func_107(-269863225, 10) || MISC::HAS_PC_CHEAT_WITH_HASH_BEEN_ACTIVATED(joaat("comet"))) || func_106(20, joaat("comet2")))
	{
		func_103(joaat("comet2"), "CHEAT_SPAWN_VEH4" /* GXT: Spawn Comet. */);
	}
	if ((func_107(458579068, 12) || MISC::HAS_PC_CHEAT_WITH_HASH_BEEN_ACTIVATED(joaat("flyspray"))) || func_106(20, joaat("duster")))
	{
		func_103(joaat("duster"), "CHEAT_SPAWN_VEH5" /* GXT: Spawn Duster. */);
	}
	if ((func_107(-666513193, 12) || MISC::HAS_PC_CHEAT_WITH_HASH_BEEN_ACTIVATED(joaat("rocket"))) || func_106(20, joaat("pcj")))
	{
		func_103(joaat("pcj"), "CHEAT_SPAWN_VEH6" /* GXT: Spawn PCJ. */);
	}
	if ((func_107(-1245984749, 10) || MISC::HAS_PC_CHEAT_WITH_HASH_BEEN_ACTIVATED(joaat("rapidgt"))) || func_106(20, joaat("rapidgt")))
	{
		func_103(joaat("rapidgt"), "CHEAT_SPAWN_VEH7" /* GXT: Spawn Rapid GT. */);
	}
	if ((func_107(2076774618, 12) || MISC::HAS_PC_CHEAT_WITH_HASH_BEEN_ACTIVATED(joaat("offroad"))) || func_106(20, joaat("sanchez")))
	{
		func_103(joaat("sanchez"), "CHEAT_SPAWN_VEH8" /* GXT: Spawn Sanchez. */);
	}
	if ((func_107(855685457, 9) || MISC::HAS_PC_CHEAT_WITH_HASH_BEEN_ACTIVATED(joaat("vinewood"))) || func_106(20, joaat("stretch")))
	{
		func_103(joaat("stretch"), "CHEAT_SPAWN_VEH9" /* GXT: Spawn Stretch Limo. */);
	}
	if ((func_107(-591395876, 12) || MISC::HAS_PC_CHEAT_WITH_HASH_BEEN_ACTIVATED(joaat("barnstorm"))) || func_106(20, joaat("stunt")))
	{
		func_103(joaat("stunt"), "CHEAT_SPAWN_VEH10" /* GXT: Spawn Stunt Plane. */);
	}
	if ((func_107(-1399217582, 10) || MISC::HAS_PC_CHEAT_WITH_HASH_BEEN_ACTIVATED(joaat("trashed"))) || func_106(20, joaat("trash")))
	{
		func_103(joaat("trash"), "CHEAT_SPAWN_VEH11" /* GXT: Spawn Trashmaster. */);
	}
	if (__LIB_0__::func_116())
	{
		if ((func_107(-375917581, 10) || MISC::HAS_PC_CHEAT_WITH_HASH_BEEN_ACTIVATED(joaat("extinct"))) || func_106(20, joaat("dodo")))
		{
			func_103(joaat("dodo"), "CHEAT_SPAWN_VEH12" /* GXT: Spawn Dodo Sea Plane. */);
		}
		if ((func_107(-2124307881, 10) || MISC::HAS_PC_CHEAT_WITH_HASH_BEEN_ACTIVATED(joaat("deathcar"))) || func_106(20, joaat("dukes2")))
		{
			func_103(joaat("dukes2"), "CHEAT_SPAWN_VEH13" /* GXT: Spawn Duke O'Death. */);
		}
		if ((func_107(1028964594, 9) || MISC::HAS_PC_CHEAT_WITH_HASH_BEEN_ACTIVATED(joaat("bubbles"))) || func_106(20, joaat("submersible2")))
		{
			func_103(joaat("submersible2"), "CHEAT_SPAWN_VEH14" /* GXT: Spawn Kraken submersible. */);
		}
	}
	if ((func_107(-393416581, 11) || MISC::HAS_PC_CHEAT_WITH_HASH_BEEN_ACTIVATED(joaat("hoptoit"))) || func_106(0, 0))
	{
		func_101();
	}
	if ((func_107(-296509791, 8) || MISC::HAS_PC_CHEAT_WITH_HASH_BEEN_ACTIVATED(joaat("snowday"))) || func_106(1, 0))
	{
		func_100();
	}
	if ((func_107(1120820643, 7) || MISC::HAS_PC_CHEAT_WITH_HASH_BEEN_ACTIVATED(joaat("catchme"))) || func_106(2, 0))
	{
		func_99();
	}
	if ((func_107(-421458016, 9) || MISC::HAS_PC_CHEAT_WITH_HASH_BEEN_ACTIVATED(joaat("gotgills"))) || func_106(3, 0))
	{
		func_98();
	}
	if ((func_107(372390926, 12) || MISC::HAS_PC_CHEAT_WITH_HASH_BEEN_ACTIVATED(joaat("toolup"))) || func_106(4, 0))
	{
		iLocal_51 = 4;
	}
	if ((func_107(606506837, 8) || MISC::HAS_PC_CHEAT_WITH_HASH_BEEN_ACTIVATED(joaat("makeitrain"))) || func_106(5, 0))
	{
		iLocal_52 = 4;
	}
	if ((func_107(453014206, 12) || MISC::HAS_PC_CHEAT_WITH_HASH_BEEN_ACTIVATED(joaat("turtle"))) || func_106(6, 0))
	{
		iLocal_53 = 4;
	}
	if ((func_107(1773187142, 9) || MISC::HAS_PC_CHEAT_WITH_HASH_BEEN_ACTIVATED(joaat("powerup"))) || func_106(7, 0))
	{
		iLocal_54 = 4;
	}
	if ((func_107(1173296014, 10) || MISC::HAS_PC_CHEAT_WITH_HASH_BEEN_ACTIVATED(joaat("fugitive"))) || func_106(8, 0))
	{
		iLocal_55 = 4;
	}
	if ((func_107(-381269753, 10) || MISC::HAS_PC_CHEAT_WITH_HASH_BEEN_ACTIVATED(joaat("lawyerup"))) || func_106(9, 0))
	{
		iLocal_56 = 4;
	}
	if ((func_107(-2023988698, 11) || MISC::HAS_PC_CHEAT_WITH_HASH_BEEN_ACTIVATED(joaat("skydive"))) || func_106(10, 0))
	{
		iLocal_57 = 4;
	}
	if ((func_107(-835863906, 12) || MISC::HAS_PC_CHEAT_WITH_HASH_BEEN_ACTIVATED(joaat("highex"))) || func_106(11, 0))
	{
		func_97();
	}
	if ((func_107(1958387485, 12) || MISC::HAS_PC_CHEAT_WITH_HASH_BEEN_ACTIVATED(joaat("incendiary"))) || func_106(12, 0))
	{
		func_96();
	}
	if ((func_107(-903985180, 9) || MISC::HAS_PC_CHEAT_WITH_HASH_BEEN_ACTIVATED(joaat("hothands"))) || func_106(13, 0))
	{
		func_95();
	}
	if ((func_107(2087642905, 9) || MISC::HAS_PC_CHEAT_WITH_HASH_BEEN_ACTIVATED(joaat("floater"))) || func_106(14, 0))
	{
		func_94();
	}
	if ((func_107(1257820019, 10) || MISC::HAS_PC_CHEAT_WITH_HASH_BEEN_ACTIVATED(joaat("painkiller"))) || func_106(15, 0))
	{
		func_93();
	}
	if ((func_107(1540206179, 7) || MISC::HAS_PC_CHEAT_WITH_HASH_BEEN_ACTIVATED(joaat("slowmo"))) || func_106(16, 0))
	{
		func_92();
	}
	if ((func_107(115565392, 16) || MISC::HAS_PC_CHEAT_WITH_HASH_BEEN_ACTIVATED(joaat("skyfall"))) || func_106(17, 0))
	{
		func_91();
	}
	if ((func_107(-1276513277, 8) || MISC::HAS_PC_CHEAT_WITH_HASH_BEEN_ACTIVATED(joaat("liquor"))) || func_106(18, 0))
	{
		func_90();
	}
	if ((func_107(2040433593, 9) || MISC::HAS_PC_CHEAT_WITH_HASH_BEEN_ACTIVATED(joaat("deadeye"))) || func_106(19, 0))
	{
		func_89();
	}
}

void func_89()//Position - 0x33CB
{
	if (func_28())
	{
		func_21("CHEAT_MISSION_DENIED" /* GXT: Not available on a mission or pastime. */);
		return;
	}
	if (func_70())
	{
		func_21("CHEAT_PHONE_DENIED" /* GXT: Can't activate cheats while using the cellphone. */);
		return;
	}
	if ((__LIB_16__::func_791(23) || __LIB_16__::func_791(21)) || __LIB_16__::func_791(16))
	{
		func_21("CHEAT_NOT_NOW" /* GXT: Can't activate that cheat right now. */);
		return;
	}
	if (iLocal_63 != 1)
	{
		func_21("CHEAT_NOT_NOW" /* GXT: Can't activate that cheat right now. */);
	}
	else
	{
		iLocal_66 = 4;
	}
}

void func_90()//Position - 0x3437
{
	if (func_28())
	{
		func_21("CHEAT_MISSION_DENIED" /* GXT: Not available on a mission or pastime. */);
		iLocal_65 = 1;
		return;
	}
	if (func_70())
	{
		func_21("CHEAT_PHONE_DENIED" /* GXT: Can't activate cheats while using the cellphone. */);
		iLocal_65 = 1;
		return;
	}
	if ((__LIB_16__::func_791(23) || __LIB_16__::func_791(21)) || __LIB_16__::func_791(18))
	{
		func_21("CHEAT_NOT_NOW" /* GXT: Can't activate that cheat right now. */);
		iLocal_65 = 1;
		return;
	}
	if (iLocal_65 == 1)
	{
		iLocal_65 = 4;
	}
	else if (iLocal_65 == 5)
	{
		iLocal_65 = 9;
	}
}

void func_91()//Position - 0x34AE
{
	if (func_28())
	{
		func_21("CHEAT_MISSION_DENIED" /* GXT: Not available on a mission or pastime. */);
		return;
	}
	if (func_70())
	{
		func_21("CHEAT_PHONE_DENIED" /* GXT: Can't activate cheats while using the cellphone. */);
		return;
	}
	if (INTERIOR::IS_INTERIOR_SCENE())
	{
		func_21("CHEAT_NOT_HERE" /* GXT: Can't activate that cheat here. */);
		return;
	}
	if (iLocal_64 != 1)
	{
		func_21("CHEAT_ALREADY_ACTIVE" /* GXT: Cheat already active. */);
		return;
	}
	if (((((__LIB_16__::func_791(23) || __LIB_16__::func_791(21)) || __LIB_16__::func_791(17)) || __LIB_16__::func_789(0)) || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false)) || !CAM::IS_GAMEPLAY_CAM_RENDERING())
	{
		func_21("CHEAT_NOT_NOW" /* GXT: Can't activate that cheat right now. */);
		return;
	}
	if ((PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), false)) || SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("respawn_controller")) > 0)
	{
		func_21("CHEAT_NOT_NOW" /* GXT: Can't activate that cheat right now. */);
		return;
	}
	iLocal_64 = 2;
}

void func_92()//Position - 0x3587
{
	if (func_28())
	{
		func_21("CHEAT_MISSION_DENIED" /* GXT: Not available on a mission or pastime. */);
		return;
	}
	if (func_70())
	{
		func_21("CHEAT_PHONE_DENIED" /* GXT: Can't activate cheats while using the cellphone. */);
		return;
	}
	if ((__LIB_16__::func_791(23) || __LIB_16__::func_791(21)) || __LIB_16__::func_791(16))
	{
		func_21("CHEAT_NOT_NOW" /* GXT: Can't activate that cheat right now. */);
		return;
	}
	if (iLocal_66 != 1)
	{
		func_21("CHEAT_NOT_NOW" /* GXT: Can't activate that cheat right now. */);
	}
	else
	{
		iLocal_63 = 4;
	}
}

void func_93()//Position - 0x35F3
{
	struct<3> Var0;
	Var0 = { __LIB_0__::func_85(PLAYER::PLAYER_ID()) };
	if (func_28())
	{
		func_21("CHEAT_MISSION_DENIED" /* GXT: Not available on a mission or pastime. */);
		return;
	}
	if (func_70())
	{
		func_21("CHEAT_PHONE_DENIED" /* GXT: Can't activate cheats while using the cellphone. */);
		return;
	}
	if (((__LIB_16__::func_791(23) || __LIB_16__::func_791(21)) || __LIB_16__::func_791(15)) || Var0.f_2 <= -170f)
	{
		func_21("CHEAT_NOT_NOW" /* GXT: Can't activate that cheat right now. */);
		return;
	}
	if (iLocal_62 == 1)
	{
		iLocal_62 = 4;
	}
	else if (iLocal_62 == 5)
	{
		iLocal_62 = 9;
	}
}

void func_94()//Position - 0x367D
{
	if (func_28())
	{
		func_21("CHEAT_MISSION_DENIED" /* GXT: Not available on a mission or pastime. */);
		return;
	}
	if (func_70())
	{
		func_21("CHEAT_PHONE_DENIED" /* GXT: Can't activate cheats while using the cellphone. */);
		return;
	}
	if ((((__LIB_16__::func_791(23) || __LIB_16__::func_791(21)) || __LIB_16__::func_791(14)) || __LIB_16__::func_789(17)) || ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID()))
	{
		func_21("CHEAT_NOT_NOW" /* GXT: Can't activate that cheat right now. */);
		return;
	}
	iLocal_61 = 4;
}

void func_95()//Position - 0x36F2
{
	if (func_28())
	{
		func_21("CHEAT_MISSION_DENIED" /* GXT: Not available on a mission or pastime. */);
		iLocal_60 = 1;
		return;
	}
	if (func_70())
	{
		func_21("CHEAT_PHONE_DENIED" /* GXT: Can't activate cheats while using the cellphone. */);
		iLocal_60 = 1;
		return;
	}
	if ((__LIB_16__::func_791(23) || __LIB_16__::func_791(21)) || __LIB_16__::func_791(13))
	{
		func_21("CHEAT_NOT_NOW" /* GXT: Can't activate that cheat right now. */);
		iLocal_60 = 1;
		return;
	}
	if (iLocal_60 == 1)
	{
		iLocal_60 = 4;
	}
	else if (iLocal_60 == 5)
	{
		iLocal_60 = 9;
	}
}

void func_96()//Position - 0x3769
{
	if (func_28())
	{
		func_21("CHEAT_MISSION_DENIED" /* GXT: Not available on a mission or pastime. */);
		iLocal_59 = 1;
		return;
	}
	if (func_70())
	{
		func_21("CHEAT_PHONE_DENIED" /* GXT: Can't activate cheats while using the cellphone. */);
		iLocal_59 = 1;
		return;
	}
	if ((__LIB_16__::func_791(23) || __LIB_16__::func_791(21)) || __LIB_16__::func_791(12))
	{
		func_21("CHEAT_NOT_NOW" /* GXT: Can't activate that cheat right now. */);
		iLocal_59 = 1;
		return;
	}
	if (iLocal_59 == 1)
	{
		iLocal_59 = 4;
	}
	else if (iLocal_59 == 5)
	{
		iLocal_59 = 9;
	}
}

void func_97()//Position - 0x37E0
{
	if (func_28())
	{
		func_21("CHEAT_MISSION_DENIED" /* GXT: Not available on a mission or pastime. */);
		iLocal_58 = 1;
		return;
	}
	if (func_70())
	{
		func_21("CHEAT_PHONE_DENIED" /* GXT: Can't activate cheats while using the cellphone. */);
		iLocal_58 = 1;
		return;
	}
	if ((__LIB_16__::func_791(23) || __LIB_16__::func_791(21)) || __LIB_16__::func_791(11))
	{
		func_21("CHEAT_NOT_NOW" /* GXT: Can't activate that cheat right now. */);
		iLocal_58 = 1;
		return;
	}
	if (iLocal_58 == 1)
	{
		iLocal_58 = 4;
	}
	else if (iLocal_58 == 5)
	{
		iLocal_58 = 9;
	}
}

void func_98()//Position - 0x3857
{
	if ((((__LIB_16__::func_791(23) || __LIB_16__::func_791(22)) || __LIB_16__::func_791(3)) || __LIB_0__::isGlobal_43052EqualsValue(9)) || __LIB_0__::isGlobal_43052EqualsValue(10))
	{
		func_21("CHEAT_NOT_NOW" /* GXT: Can't activate that cheat right now. */);
		return;
	}
	if (func_70())
	{
		func_21("CHEAT_PHONE_DENIED" /* GXT: Can't activate cheats while using the cellphone. */);
		return;
	}
	if (iLocal_50 == 1)
	{
		iLocal_50 = 4;
	}
	else if (iLocal_50 == 5)
	{
		iLocal_50 = 9;
	}
}

void func_99()//Position - 0x38CA
{
	if ((((__LIB_16__::func_791(23) || __LIB_16__::func_791(22)) || __LIB_16__::func_791(2)) || __LIB_0__::isGlobal_43052EqualsValue(9)) || __LIB_0__::isGlobal_43052EqualsValue(10))
	{
		func_21("CHEAT_NOT_NOW" /* GXT: Can't activate that cheat right now. */);
		return;
	}
	if (func_70())
	{
		func_21("CHEAT_PHONE_DENIED" /* GXT: Can't activate cheats while using the cellphone. */);
		return;
	}
	if (iLocal_49 == 1)
	{
		iLocal_49 = 4;
	}
	else if (iLocal_49 == 5)
	{
		iLocal_49 = 9;
	}
}

void func_100()//Position - 0x393D
{
	if ((__LIB_16__::func_791(23) || __LIB_16__::func_791(22)) || __LIB_16__::func_791(1))
	{
		func_21("CHEAT_NOT_NOW" /* GXT: Can't activate that cheat right now. */);
		return;
	}
	if (func_70())
	{
		func_21("CHEAT_PHONE_DENIED" /* GXT: Can't activate cheats while using the cellphone. */);
		return;
	}
	if (iLocal_48 == 1)
	{
		iLocal_48 = 4;
	}
	else if (iLocal_48 == 5)
	{
		iLocal_48 = 9;
	}
}

void func_101()//Position - 0x3998
{
	if (((__LIB_16__::func_791(23) || __LIB_16__::func_791(22)) || __LIB_16__::func_791(0)) || INTERIOR::IS_INTERIOR_SCENE())
	{
		func_21("CHEAT_NOT_NOW" /* GXT: Can't activate that cheat right now. */);
		return;
	}
	if (func_70())
	{
		func_21("CHEAT_PHONE_DENIED" /* GXT: Can't activate cheats while using the cellphone. */);
		return;
	}
	if (iLocal_47 == 1)
	{
		iLocal_47 = 4;
	}
	else if (iLocal_47 == 5)
	{
		iLocal_47 = 9;
	}
}

void func_103(int iParam0, char* sParam1)//Position - 0x3AB5
{
	if (iLocal_46 == 1)
	{
		if (((((__LIB_0__::isGlobal_43052EqualsValue(9) || SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("barry1")) > 0) || SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("tennis")) > 0) || __LIB_16__::func_791(23)) || __LIB_16__::func_791(22)) || __LIB_16__::func_791(20))
		{
			func_21("CHEAT_NOT_NOW" /* GXT: Can't activate that cheat right now. */);
			return;
		}
		if (func_70())
		{
			func_21("CHEAT_PHONE_DENIED" /* GXT: Can't activate cheats while using the cellphone. */);
			return;
		}
		if (!func_104(iParam0))
		{
			func_21("CHEAT_VEHICLE_LOCKED_DENIED" /* GXT: Vehicle is not unlocked yet. */);
			return;
		}
		iLocal_67 = iParam0;
		sLocal_70 = sParam1;
		iLocal_46 = 2;
	}
}

int func_104(int iParam0)//Position - 0x3B4F
{
	switch (iParam0)
	{
		case joaat("dodo"):
			if (__LIB_0__::func_61(66, 0) == 0)
			{
				return 0;
			}
			break;
		case joaat("dukes2"):
			if (__LIB_0__::func_61(64, 0) == 0)
			{
				return 0;
			}
			break;
		case joaat("submersible2"):
			if (__LIB_0__::func_61(63, 0) == 0)
			{
				return 0;
			}
			break;
	}
	return 1;
}

int func_106(bool bParam0, int iParam1)//Position - 0x3BC7
{
	if (BitTest(Global_32210, bParam0))
	{
		if (iParam1 != 0)
		{
			if (iParam1 == Global_32211)
			{
				MISC::CLEAR_BIT(&Global_32210, bParam0);
				iLocal_83 = 1;
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else
		{
			MISC::CLEAR_BIT(&Global_32210, bParam0);
			iLocal_83 = 1;
			return 1;
		}
	}
	return 0;
}

int func_107(int iParam0, int iParam1)//Position - 0x3C11
{
	if (!__LIB_0__::isGlobal_43052EqualsValue(14))
	{
		return MISC::HAS_CHEAT_WITH_HASH_BEEN_ACTIVATED(iParam0, iParam1);
	}
	return 0;
}

void func_108()//Position - 0x3C2F
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (iLocal_80[iVar0] != -1)
		{
			HUD::THEFEED_REMOVE_ITEM(iLocal_80[iVar0]);
			iLocal_80[iVar0] = -1;
		}
		iVar0++;
	}
}

void func_110()//Position - 0x3CA3
{
	if (__LIB_0__::isGlobal_43052EqualsValue(14) || (!CAM::IS_SCREEN_FADED_IN() && iLocal_84 != 0))
	{
		iLocal_84 = MISC::GET_GAME_TIMER();
	}
	if (iLocal_84 != 0)
	{
		if (!__LIB_0__::isGlobal_43052EqualsValue(14))
		{
			if ((MISC::GET_GAME_TIMER() - iLocal_84) > 1000)
			{
				iLocal_84 = 0;
			}
		}
	}
}

void func_112()//Position - 0x3D18
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		iLocal_80[iVar0] = -1;
		iVar0++;
	}
	iLocal_82 = 0;
	iLocal_81 = 0;
}

void func_113()//Position - 0x3D40
{
	MISC::SET_RIOT_MODE_ENABLED(false);
	if (iLocal_64 == 5)
	{
		func_37();
	}
	if (iLocal_65 == 5)
	{
		__LIB_12__::func_915(1);
	}
	if (iLocal_63 == 5 || iLocal_66 == 5)
	{
		MISC::SET_TIME_SCALE(1f);
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (iLocal_62 == 5)
		{
			PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID(), false);
			ENTITY::SET_ENTITY_PROOFS(PLAYER::PLAYER_PED_ID(), false, false, false, false, false, false, false, false);
		}
		PLAYER::SET_RUN_SPRINT_MULTIPLIER_FOR_PLAYER(PLAYER::PLAYER_ID(), 1f);
		PLAYER::SET_SWIM_MULTIPLIER_FOR_PLAYER(PLAYER::PLAYER_ID(), 1f);
	}
	MISC::SET_GRAVITY_LEVEL(0);
	Global_32208 = 0;
	Global_32207 = 0;
	Global_32209 = 0;
	Global_32210 = 0;
	Global_32212 = 0;
	Global_32211 = 0;
	SCRIPT::TERMINATE_THIS_THREAD();
}

