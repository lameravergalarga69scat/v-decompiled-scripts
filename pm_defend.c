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
	int iLocal_20 = 0;
	char* sLocal_21 = NULL;
	float fLocal_22 = 0f;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	float fLocal_26 = 0f;
	float fLocal_27 = 0f;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	struct<91> Local_36 = { 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 2, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_37 = 0;
	var uLocal_38 = 3;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 3;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	int iLocal_52 = 0;
	struct<122> Local_53[5];
	var uLocal_54 = 3;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
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
	iLocal_20 = 3;
	sLocal_21 = "NULL";
	fLocal_22 = 0f;
	fLocal_26 = -0.0375f;
	fLocal_27 = 0.17f;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	MISC::SET_MISSION_FLAG(true);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(Local_36.f_88))
		{
			AUDIO::TRIGGER_MUSIC_EVENT(Local_36.f_88);
		}
		__LIB_30__::func_728(2);
		func_37(&Local_36);
	}
	while (true)
	{
		if (iLocal_52 > MISC::GET_GAME_TIMER())
		{
			RECORDING::REPLAY_DISABLE_CAMERA_MOVEMENT_THIS_FRAME();
		}
		switch (Local_36.f_0)
		{
			case 0:
				func_27();
				break;
			case 1:
				func_4();
				break;
			case 2:
				func_1();
				break;
		}
		SYSTEM::WAIT(0);
	}
}

void func_1()//Position - 0xD6
{
	switch (Local_36.f_1)
	{
		case 1:
			func_3();
			break;
		case 2:
			func_2();
			break;
	}
}

void func_2()//Position - 0x101
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(Local_36.f_88))
	{
		AUDIO::TRIGGER_MUSIC_EVENT(Local_36.f_88);
	}
	__LIB_30__::func_728(2);
	func_37(&Local_36);
}

void func_3()//Position - 0x129
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(Local_36.f_87))
	{
		AUDIO::TRIGGER_MUSIC_EVENT(Local_36.f_87);
	}
	__LIB_30__::func_728(1);
	func_37(&Local_36);
}

void func_4()//Position - 0x151
{
	switch (Local_36.f_3)
	{
		case 9:
			PATHFIND::REQUEST_PATH_NODES_IN_AREA_THIS_FRAME(1435f, -2385f, 1690f, -1885f);
			break;
	}
	switch (Local_36.f_83)
	{
		case 0:
			if (func_26(&Local_36))
			{
				Local_36.f_68 = 0;
				Local_36.f_83++;
			}
			break;
		case 1:
			if (func_25(&Local_36))
			{
				Local_36.f_68 = 0;
				Local_36.f_83++;
			}
			break;
		case 2:
			func_23();
			func_22();
			func_21(&Local_53);
			func_6(&Local_53);
			break;
	}
	if (Local_36.f_70 >= Local_36.f_69)
	{
		Local_36.f_0 = 2;
		Local_36.f_1 = 1;
	}
	if (MISC::GET_DISTANCE_BETWEEN_COORDS(__LIB_30__::func_723(Local_36.f_3), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), true) > 300f)
	{
		Local_36.f_0 = 2;
		Local_36.f_1 = 2;
	}
}

void func_6(int iParam0)//Position - 0x3D9
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	var uVar3;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		switch ((*iParam0)[iVar1 /*122*/])
		{
			case 1:
				switch ((iParam0[iVar1 /*122*/])->f_1)
				{
					case 0:
						if (Local_36.f_70 >= (iParam0[iVar1 /*122*/])->f_116)
						{
							(iParam0[iVar1 /*122*/])->f_1 = 1;
						}
						break;
					case 1:
						if (func_18(&Var2, &uVar3))
						{
							(iParam0[iVar1 /*122*/])->f_1 = 2;
							(iParam0[iVar1 /*122*/])->f_118 = { Var2 };
							(iParam0[iVar1 /*122*/])->f_121 = uVar3;
						}
						break;
					case 2:
						if (func_16(iParam0, iVar1))
						{
							if (func_13(iParam0, iVar1))
							{
								func_12(iParam0, iVar1);
								(iParam0[iVar1 /*122*/])->f_1 = 3;
							}
						}
						break;
					case 3:
						iVar0 = 0;
						while (iVar0 < 4)
						{
							if (ENTITY::DOES_ENTITY_EXIST((iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/]))
							{
								if (!ENTITY::IS_ENTITY_DEAD((iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/], false))
								{
									switch ((iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/].f_9)
									{
										case 1:
											if ((iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/].f_16 == 0)
											{
												PED::SET_PED_COMBAT_RANGE((iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/], 0);
												PED::SET_PED_COMBAT_MOVEMENT((iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/], 2);
												PED::SET_PED_COMBAT_ATTRIBUTES((iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/], 1, PED::IS_PED_IN_ANY_VEHICLE((iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/], false));
												PED::SET_PED_COMBAT_ATTRIBUTES((iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/], 3, !PED::IS_PED_IN_ANY_VEHICLE((iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/], false));
												if ((iParam0[iVar1 /*122*/])->f_117 == iVar0)
												{
													PED::SET_COMBAT_FLOAT((iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/], 13, 10f);
													PED::SET_PED_COMBAT_ATTRIBUTES((iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/], 31, true);
												}
												if ((iParam0[iVar1 /*122*/])->f_117 != iVar0)
												{
													PED::SET_PED_DEFENSIVE_SPHERE_ATTACHED_TO_PED((iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/], (iParam0[iVar1 /*122*/])->f_2[(iParam0[iVar1 /*122*/])->f_117 /*20*/], 0f, 0f, 0f, 5f, false);
												}
												TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED((iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/], 300f, 0);
												PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS((iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/], false);
												(iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/].f_17 = MISC::GET_GAME_TIMER();
												(iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/].f_16 = 1;
											}
											if ((iParam0[iVar1 /*122*/])->f_117 != iVar0)
											{
												if ((iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/].f_17 != 0)
												{
													if ((MISC::GET_GAME_TIMER() - (iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/].f_17) > 10000)
													{
														(iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/].f_16 = 0;
														(iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/].f_9 = 3;
													}
												}
											}
											if ((iParam0[iVar1 /*122*/])->f_117 == iVar0)
											{
												if ((iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/].f_17 != 0)
												{
													if ((MISC::GET_GAME_TIMER() - (iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/].f_17) > 25000 || MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS((iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/], true), true) < 25f)
													{
														(iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/].f_16 = 0;
														(iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/].f_9 = 3;
													}
												}
											}
											break;
										case 3:
											if ((iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/].f_16 == 0)
											{
												PED::REMOVE_PED_DEFENSIVE_AREA((iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/], false);
												PED::SET_PED_COMBAT_MOVEMENT((iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/], 2);
												PED::SET_PED_COMBAT_ATTRIBUTES((iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/], 1, false);
												PED::SET_PED_COMBAT_ATTRIBUTES((iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/], 3, true);
												TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED((iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/], 300f, 0);
												PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS((iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/], false);
												(iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/].f_16 = 1;
											}
											break;
									}
									func_10(iParam0, iVar1, iVar0, Local_36.f_84);
								}
								else
								{
									func_8(iParam0, iVar1, iVar0);
									func_7(&Local_36);
								}
							}
							iVar0++;
						}
						break;
				}
				break;
		}
		iVar1++;
	}
}

void func_7(var uParam0)//Position - 0x7B5
{
	uParam0->f_70++;
}

void func_8(int iParam0, int iParam1, int iParam2)//Position - 0x7C7
{
	if (ENTITY::DOES_ENTITY_EXIST((iParam0[iParam1 /*122*/])->f_2[iParam2 /*20*/]))
	{
		if (!ENTITY::IS_ENTITY_DEAD((iParam0[iParam1 /*122*/])->f_2[iParam2 /*20*/], false))
		{
			PED::SET_PED_KEEP_TASK((iParam0[iParam1 /*122*/])->f_2[iParam2 /*20*/], true);
		}
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&((iParam0[iParam1 /*122*/])->f_2[iParam2 /*20*/]));
		__LIB_0__::func_489(&((iParam0[iParam1 /*122*/])->f_2[iParam2 /*20*/].f_1));
	}
}

void func_10(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x89C
{
	__LIB_0__::func_499((iParam0[iParam1 /*122*/])->f_2[iParam2 /*20*/], &((iParam0[iParam1 /*122*/])->f_2[iParam2 /*20*/].f_1), -1, 0, !bParam3, 0, 300f, 0, -1, -1, 1, 0);
}

void func_12(int iParam0, int iParam1)//Position - 0xABB
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < (iParam0[iParam1 /*122*/])->f_111)
	{
		(iParam0[iParam1 /*122*/])->f_2[iVar0 /*20*/].f_9 = 1;
		iVar0++;
	}
}

int func_13(int iParam0, int iParam1)//Position - 0xAEB
{
	int iVar0;
	if ((iParam0[iParam1 /*122*/])->f_113 == (iParam0[iParam1 /*122*/])->f_111)
	{
		return 1;
	}
	else
	{
		iVar0 = (iParam0[iParam1 /*122*/])->f_113;
		if (!ENTITY::DOES_ENTITY_EXIST((iParam0[iParam1 /*122*/])->f_2[iVar0 /*20*/]))
		{
			(iParam0[iParam1 /*122*/])->f_2[iVar0 /*20*/].f_10 = { (iParam0[iParam1 /*122*/])->f_118 };
			(iParam0[iParam1 /*122*/])->f_2[iVar0 /*20*/].f_13 = (iParam0[iParam1 /*122*/])->f_121;
			(iParam0[iParam1 /*122*/])->f_2[iVar0 /*20*/] = func_15(iParam0, iParam1, iVar0);
			func_14((iParam0[iParam1 /*122*/])->f_2[iVar0 /*20*/], Local_36, (iParam0[iParam1 /*122*/])->f_2[iVar0 /*20*/].f_15);
			(iParam0[iParam1 /*122*/])->f_113++;
		}
	}
	return 0;
}

void func_14(int iParam0, struct<61> Param1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, int iParam32)//Position - 0xBA7
{
	int iVar0;
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
		{
			iVar0 = Param1.f_60[MISC::GET_RANDOM_INT_IN_RANGE(0, 3)];
			if (iParam32 != 0)
			{
				iVar0 = iParam32;
			}
			WEAPON::GIVE_WEAPON_TO_PED(iParam0, iVar0, -1, true, true);
			WEAPON::SET_CURRENT_PED_WEAPON(iParam0, iVar0, true);
			WEAPON::SET_PED_INFINITE_AMMO(iParam0, true, iVar0);
		}
	}
}

int func_15(int iParam0, int iParam1, int iParam2)//Position - 0xBF8
{
	int iVar0;
	int iVar1;
	iVar0 = PED::CREATE_PED(26, Local_36.f_53[0], (iParam0[iParam1 /*122*/])->f_2[iParam2 /*20*/].f_10, (iParam0[iParam1 /*122*/])->f_2[iParam2 /*20*/].f_13, true, true);
	PED::SET_PED_DIES_WHEN_INJURED(iVar0, true);
	PED::SET_PED_AS_ENEMY(iVar0, true);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iVar0, Local_36.f_52);
	ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iVar0, true, 0f);
	PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 5, true);
	PED::SET_PED_TARGET_LOSS_RESPONSE(iVar0, 1);
	PED::SET_PED_CONFIG_FLAG(iVar0, 42, true);
	PED::SET_PED_CONFIG_FLAG(iVar0, 132, true);
	PED::SET_COMBAT_FLOAT(iVar0, 12, 30f);
	PED::SET_PED_ACCURACY(iVar0, 5);
	if ((iParam0[iParam1 /*122*/])->f_2[iParam2 /*20*/].f_18 != -1 && (iParam0[iParam1 /*122*/])->f_2[iParam2 /*20*/].f_19 != -2)
	{
		iVar1 = (iParam0[iParam1 /*122*/])->f_2[iParam2 /*20*/].f_18;
		if (ENTITY::DOES_ENTITY_EXIST((iParam0[iParam1 /*122*/])->f_83[iVar1 /*9*/]))
		{
			if (!ENTITY::IS_ENTITY_DEAD((iParam0[iParam1 /*122*/])->f_83[iVar1 /*9*/], false))
			{
				PED::SET_PED_INTO_VEHICLE(iVar0, (iParam0[iParam1 /*122*/])->f_83[iVar1 /*9*/], (iParam0[iParam1 /*122*/])->f_2[iParam2 /*20*/].f_19);
			}
		}
	}
	iLocal_52 = MISC::GET_GAME_TIMER() + 1000;
	return iVar0;
}

int func_16(int iParam0, int iParam1)//Position - 0xD11
{
	int iVar0;
	if ((iParam0[iParam1 /*122*/])->f_114 == (iParam0[iParam1 /*122*/])->f_112)
	{
		return 1;
	}
	else
	{
		iVar0 = (iParam0[iParam1 /*122*/])->f_114;
		if (!ENTITY::DOES_ENTITY_EXIST((iParam0[iParam1 /*122*/])->f_83[iVar0 /*9*/]))
		{
			(iParam0[iParam1 /*122*/])->f_83[iVar0 /*9*/].f_1 = { (iParam0[iParam1 /*122*/])->f_118 };
			(iParam0[iParam1 /*122*/])->f_83[iVar0 /*9*/].f_7 = (iParam0[iParam1 /*122*/])->f_121;
			(iParam0[iParam1 /*122*/])->f_83[iVar0 /*9*/] = func_17(iParam0, iParam1, iVar0);
			(iParam0[iParam1 /*122*/])->f_114++;
		}
	}
	return 0;
}

int func_17(int iParam0, int iParam1, int iParam2)//Position - 0xDAA
{
	int iVar0;
	iVar0 = VEHICLE::CREATE_VEHICLE((iParam0[iParam1 /*122*/])->f_83[iParam2 /*9*/].f_8, (iParam0[iParam1 /*122*/])->f_83[iParam2 /*9*/].f_1, (iParam0[iParam1 /*122*/])->f_83[iParam2 /*9*/].f_7, true, true, false);
	VEHICLE::SET_VEHICLE_INFLUENCES_WANTED_LEVEL(iVar0, false);
	return iVar0;
}

int func_18(var uParam0, var uParam1)//Position - 0xDF0
{
	int iVar0;
	struct<3> Var1;
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 10);
	Var1 = { Local_36.f_8[iVar0 /*3*/] };
	if (func_19(Var1, 1086324736, 1065353216, 1065353216, 1084227584, 1, 1123024896, 1, 1103626240))
	{
		*uParam0 = { Var1 };
		*uParam1 = Local_36.f_39[iVar0];
		return 1;
	}
	return 0;
}

int func_19(struct<3> Param0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5, float fParam6, int iParam7, float fParam8)//Position - 0xE52
{
	if (__LIB_0__::func_86(Param0))
	{
		return 0;
	}
	if (fParam1 > 0f)
	{
		if (VEHICLE::IS_ANY_VEHICLE_NEAR_POINT(Param0, fParam1))
		{
			return 0;
		}
	}
	if (fParam2 > 0f)
	{
		if (PED::IS_ANY_PED_NEAR_POINT(Param0.f_0, Param0.f_1, (Param0.f_2 + 1f), fParam2) || PED::IS_ANY_PED_NEAR_POINT(Param0, fParam2))
		{
			return 0;
		}
	}
	if (fParam3 > 0f)
	{
		if (OBJECT::IS_ANY_OBJECT_NEAR_POINT(Param0, fParam3, false))
		{
			return 0;
		}
	}
	if (iParam7 == 1)
	{
		if (FIRE::GET_NUMBER_OF_FIRES_IN_RANGE(Param0, 1.5f) > 0)
		{
			return 0;
		}
	}
	if (iParam5 == 1)
	{
		if (fParam4 > 0f)
		{
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Param0, true) <= (fParam6 + fParam4))
			{
				if (CAM::IS_SPHERE_VISIBLE(Param0, fParam4))
				{
					return 0;
				}
			}
		}
	}
	if (fParam8 > 0f)
	{
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Param0, true) < fParam8)
		{
			return 0;
		}
	}
	return 1;
}

void func_21(int iParam0)//Position - 0xF6C
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		switch ((*iParam0)[iVar0 /*122*/])
		{
			case 0:
				iVar1 = 0;
				while (iVar1 < 4)
				{
					if (ENTITY::DOES_ENTITY_EXIST((iParam0[iVar0 /*122*/])->f_2[iVar1 /*20*/]))
					{
						if (!ENTITY::IS_ENTITY_DEAD((iParam0[iVar0 /*122*/])->f_2[iVar1 /*20*/], false))
						{
							switch ((iParam0[iVar0 /*122*/])->f_2[iVar1 /*20*/].f_9)
							{
								case 2:
									if (PED::IS_PED_IN_COMBAT((iParam0[iVar0 /*122*/])->f_2[iVar1 /*20*/], 0) || Local_36.f_84 == 1)
									{
										Local_36.f_84 = 1;
										(iParam0[iVar0 /*122*/])->f_2[iVar1 /*20*/].f_16 = 0;
										(iParam0[iVar0 /*122*/])->f_2[iVar1 /*20*/].f_9 = 3;
									}
									break;
								case 3:
									if ((iParam0[iVar0 /*122*/])->f_2[iVar1 /*20*/].f_16 == 0)
									{
										TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED((iParam0[iVar0 /*122*/])->f_2[iVar1 /*20*/], 150f, 0);
										(iParam0[iVar0 /*122*/])->f_2[iVar1 /*20*/].f_16 = 1;
									}
									break;
							}
							func_10(iParam0, iVar0, iVar1, Local_36.f_84);
						}
						else
						{
							func_8(iParam0, iVar0, iVar1);
							func_7(&Local_36);
						}
					}
					iVar1++;
				}
				break;
		}
		iVar0++;
	}
}

void func_22()//Position - 0x1094
{
	if (Local_36.f_89 == 0)
	{
		if (Local_36.f_71 == 1)
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(Local_36.f_85))
			{
				if (AUDIO::TRIGGER_MUSIC_EVENT(Local_36.f_85))
				{
					Local_36.f_89 = 1;
				}
			}
		}
	}
	if (Local_36.f_90 == 0)
	{
		if (Local_36.f_84 == 1)
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(Local_36.f_86))
			{
				if (AUDIO::TRIGGER_MUSIC_EVENT(Local_36.f_86))
				{
					Local_36.f_90 = 1;
				}
			}
		}
	}
}

void func_23()//Position - 0x10F4
{
	int iVar0;
	int iVar1;
	if (Local_36.f_71 == 0)
	{
		iVar0 = 0;
		while (iVar0 < 4)
		{
			if (iVar1 == 0)
			{
				if (HUD::DOES_BLIP_EXIST(Local_53[0 /*122*/].f_2[iVar0 /*20*/].f_1))
				{
					__LIB_0__::func_325("PMD_OBJ", 7500, 1);
					iVar1 = 1;
					Local_36.f_71 = 1;
				}
			}
			iVar0++;
		}
	}
}

int func_25(var uParam0)//Position - 0x115C
{
	int iVar0;
	if (uParam0->f_66 == uParam0->f_64)
	{
		return 1;
	}
	else if (Local_53[uParam0->f_68 /*122*/] == 0)
	{
		if (Local_53[uParam0->f_68 /*122*/].f_113 == Local_53[uParam0->f_68 /*122*/].f_111)
		{
			uParam0->f_68++;
		}
		else
		{
			iVar0 = Local_53[uParam0->f_68 /*122*/].f_113;
			if (!ENTITY::DOES_ENTITY_EXIST(Local_53[uParam0->f_68 /*122*/].f_2[iVar0 /*20*/]))
			{
				Local_53[uParam0->f_68 /*122*/].f_2[iVar0 /*20*/] = func_15(&Local_53, uParam0->f_68, iVar0);
				func_14(Local_53[uParam0->f_68 /*122*/].f_2[iVar0 /*20*/], Local_36, Local_53[uParam0->f_68 /*122*/].f_2[iVar0 /*20*/].f_15);
				Local_53[uParam0->f_68 /*122*/].f_2[iVar0 /*20*/].f_9 = 2;
				Local_53[uParam0->f_68 /*122*/].f_113++;
				uParam0->f_66++;
			}
		}
	}
	else
	{
		uParam0->f_68++;
	}
	return 0;
}

int func_26(var uParam0)//Position - 0x1248
{
	int iVar0;
	if (uParam0->f_67 == uParam0->f_65)
	{
		return 1;
	}
	else if (Local_53[uParam0->f_68 /*122*/] == 0)
	{
		if (Local_53[uParam0->f_68 /*122*/].f_114 == Local_53[uParam0->f_68 /*122*/].f_112)
		{
			uParam0->f_68++;
		}
		else
		{
			iVar0 = Local_53[uParam0->f_68 /*122*/].f_114;
			if (!ENTITY::DOES_ENTITY_EXIST(Local_53[uParam0->f_68 /*122*/].f_83[iVar0 /*9*/]))
			{
				Local_53[uParam0->f_68 /*122*/].f_83[iVar0 /*9*/] = func_17(&Local_53, uParam0->f_68, iVar0);
				Local_53[uParam0->f_68 /*122*/].f_114++;
				uParam0->f_67++;
			}
		}
	}
	else
	{
		uParam0->f_68++;
	}
	return 0;
}

void func_27()//Position - 0x12FC
{
	switch (Local_36.f_51)
	{
		case 0:
			func_31(&Local_36, __LIB_30__::func_726());
			func_30(&Local_36);
			Local_36.f_51++;
			break;
		case 1:
			func_29(Local_36);
			Local_36.f_51++;
			break;
		case 2:
			if (func_28(Local_36))
			{
				Local_36.f_51++;
			}
			break;
		case 3:
			if (PED::ADD_RELATIONSHIP_GROUP("PMD_ENEMIES", &(Local_36.f_52)))
			{
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, joaat("PLAYER"), Local_36.f_52);
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, Local_36.f_52, joaat("COP"));
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, Local_36.f_52, joaat("PLAYER"));
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, Local_36.f_52, Local_36.f_52);
			}
			Local_36.f_0 = 1;
			break;
	}
}

int func_28(struct<61> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30)//Position - 0x13BC
{
	if (((((((((((Param0.f_53[0] == 0 || STREAMING::HAS_MODEL_LOADED(Param0.f_53[0])) && (Param0.f_53[1] == 0 || STREAMING::HAS_MODEL_LOADED(Param0.f_53[1]))) && (Param0.f_53[2] == 0 || STREAMING::HAS_MODEL_LOADED(Param0.f_53[2]))) && (Param0.f_57[0] == 0 || STREAMING::HAS_MODEL_LOADED(Param0.f_57[0]))) && (Param0.f_57[1] == 0 || STREAMING::HAS_MODEL_LOADED(Param0.f_57[1]))) && (Param0.f_57[0] == 0 || VEHICLE::HAS_VEHICLE_ASSET_LOADED(Param0.f_57[0]))) && (Param0.f_57[1] == 0 || VEHICLE::HAS_VEHICLE_ASSET_LOADED(Param0.f_57[1]))) && (Param0.f_60[0] == 0 || WEAPON::HAS_WEAPON_ASSET_LOADED(Param0.f_60[0]))) && (Param0.f_60[1] == 0 || WEAPON::HAS_WEAPON_ASSET_LOADED(Param0.f_60[1]))) && (Param0.f_60[2] == 0 || WEAPON::HAS_WEAPON_ASSET_LOADED(Param0.f_60[2]))) && HUD::HAS_ADDITIONAL_TEXT_LOADED(0))
	{
		return 1;
	}
	return 0;
}

void func_29(struct<61> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30)//Position - 0x1507
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Param0.f_53[iVar0] != 0)
		{
			STREAMING::REQUEST_MODEL(Param0.f_53[iVar0]);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (Param0.f_57[iVar0] != 0)
		{
			STREAMING::REQUEST_MODEL(Param0.f_57[iVar0]);
			VEHICLE::REQUEST_VEHICLE_ASSET(Param0.f_57[iVar0], 3);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Param0.f_60[iVar0] != 0)
		{
			WEAPON::REQUEST_WEAPON_ASSET(Param0.f_60[iVar0], 31, 0);
		}
		iVar0++;
	}
	HUD::REQUEST_ADDITIONAL_TEXT("PMD", 0);
}

void func_30(var uParam0)//Position - 0x15A5
{
	if (!__LIB_0__::func_86(uParam0->f_76) && !__LIB_0__::func_86(uParam0->f_79))
	{
		uParam0->f_82 = PED::ADD_SCENARIO_BLOCKING_AREA((uParam0->f_76 - uParam0->f_79), (uParam0->f_76.f_1 - uParam0->f_79.f_1), (uParam0->f_76.f_2 - uParam0->f_79.f_2), (uParam0->f_76 + uParam0->f_79), (uParam0->f_76.f_1 + uParam0->f_79.f_1), (uParam0->f_76.f_2 + uParam0->f_79.f_2), false, true, true, true);
	}
	if (!__LIB_0__::func_86(uParam0->f_72) && !uParam0->f_75 <= 0f)
	{
		MISC::CLEAR_AREA(uParam0->f_72, uParam0->f_75, true, false, false, false);
	}
}

void func_31(var uParam0, int iParam1)//Position - 0x1649
{
	switch (iParam1)
	{
		case 9:
			uParam0->f_3 = 9;
			uParam0->f_4 = func_34();
			uParam0->f_5 = { 1533.77f, -2135.35f, 82.04f };
			uParam0->f_2 = 4;
			uParam0->f_53[0] = joaat("G_M_Y_Lost_01");
			uParam0->f_53[1] = 0;
			uParam0->f_53[2] = 0;
			uParam0->f_57[0] = joaat("gburrito");
			uParam0->f_57[1] = joaat("hexer");
			uParam0->f_60[0] = joaat("WEAPON_PISTOL");
			uParam0->f_60[1] = joaat("WEAPON_SAWNOFFSHOTGUN");
			uParam0->f_60[2] = joaat("WEAPON_ASSAULTRIFLE");
			uParam0->f_72 = { 1533.77f, -2135.35f, 82.04f };
			uParam0->f_75 = 90f;
			uParam0->f_76 = { 1533.77f, -2135.35f, 82.04f };
			uParam0->f_79 = { 54f, 72f, 8f };
			uParam0->f_50 = 9;
			uParam0->f_8[0 /*3*/] = { 1578.1343f, -2317.8584f, 86.636f };
			uParam0->f_39[0] = 36.2503f;
			uParam0->f_8[1 /*3*/] = { 1571.414f, -2314.3787f, 86.0904f };
			uParam0->f_39[1] = 37.4325f;
			uParam0->f_8[2 /*3*/] = { 1555.6738f, -2321.8572f, 85.2531f };
			uParam0->f_39[2] = 2.4637f;
			uParam0->f_8[3 /*3*/] = { 1516.694f, -1980.2734f, 70.1538f };
			uParam0->f_39[3] = 203.6018f;
			uParam0->f_8[4 /*3*/] = { 1505.077f, -1978.409f, 69.794f };
			uParam0->f_39[4] = 217.0733f;
			uParam0->f_8[5 /*3*/] = { 1498.1658f, -1981.469f, 69.5705f };
			uParam0->f_39[5] = 256.7048f;
			uParam0->f_8[6 /*3*/] = { 1670.8583f, -2022.8442f, 99.5899f };
			uParam0->f_39[6] = 142.5751f;
			uParam0->f_8[7 /*3*/] = { 1677.0851f, -2035.7852f, 98.5593f };
			uParam0->f_39[7] = 109.2985f;
			uParam0->f_8[8 /*3*/] = { 1659.1873f, -2090.027f, 99.2239f };
			uParam0->f_39[8] = 9.0974f;
			Local_53[0 /*122*/] = 0;
			Local_53[0 /*122*/].f_111 = 4;
			Local_53[0 /*122*/].f_112 = 2;
			Local_53[0 /*122*/].f_83[0 /*9*/].f_1 = { 1533.3752f, -2087.2095f, 76.0832f };
			Local_53[0 /*122*/].f_83[0 /*9*/].f_7 = 152.9678f;
			Local_53[0 /*122*/].f_83[0 /*9*/].f_8 = joaat("gburrito");
			Local_53[0 /*122*/].f_83[1 /*9*/].f_1 = { 1547.8243f, -2091.3652f, 76.1018f };
			Local_53[0 /*122*/].f_83[1 /*9*/].f_7 = 55.5566f;
			Local_53[0 /*122*/].f_83[1 /*9*/].f_8 = joaat("gburrito");
			Local_53[0 /*122*/].f_2[0 /*20*/].f_10 = { 1525.7605f, -2092.8384f, 76.0174f };
			Local_53[0 /*122*/].f_2[0 /*20*/].f_13 = 232.9176f;
			Local_53[0 /*122*/].f_2[1 /*20*/].f_10 = { 1527.1383f, -2091.8323f, 76.031f };
			Local_53[0 /*122*/].f_2[1 /*20*/].f_13 = 190.6337f;
			Local_53[0 /*122*/].f_2[2 /*20*/].f_10 = { 1523.1084f, -2115.1338f, 75.6351f };
			Local_53[0 /*122*/].f_2[2 /*20*/].f_13 = 350.4627f;
			Local_53[0 /*122*/].f_2[3 /*20*/].f_10 = { 1522.6289f, -2112.7676f, 75.6853f };
			Local_53[0 /*122*/].f_2[3 /*20*/].f_13 = 264.9478f;
			Local_53[1 /*122*/] = 1;
			Local_53[1 /*122*/].f_111 = 4;
			Local_53[1 /*122*/].f_112 = 1;
			Local_53[1 /*122*/].f_116 = 2;
			Local_53[1 /*122*/].f_83[0 /*9*/].f_8 = joaat("gburrito");
			Local_53[1 /*122*/].f_2[0 /*20*/].f_18 = 0;
			Local_53[1 /*122*/].f_2[0 /*20*/].f_19 = -1;
			Local_53[1 /*122*/].f_2[0 /*20*/].f_15 = joaat("WEAPON_PISTOL");
			Local_53[1 /*122*/].f_2[1 /*20*/].f_18 = 0;
			Local_53[1 /*122*/].f_2[1 /*20*/].f_19 = 0;
			Local_53[1 /*122*/].f_2[1 /*20*/].f_15 = joaat("WEAPON_PISTOL");
			Local_53[1 /*122*/].f_2[2 /*20*/].f_18 = 0;
			Local_53[1 /*122*/].f_2[2 /*20*/].f_19 = 1;
			Local_53[1 /*122*/].f_2[2 /*20*/].f_15 = joaat("WEAPON_ASSAULTRIFLE");
			Local_53[1 /*122*/].f_2[3 /*20*/].f_18 = 0;
			Local_53[1 /*122*/].f_2[3 /*20*/].f_19 = 2;
			Local_53[1 /*122*/].f_2[3 /*20*/].f_15 = joaat("WEAPON_ASSAULTRIFLE");
			Local_53[2 /*122*/] = 1;
			Local_53[2 /*122*/].f_111 = 4;
			Local_53[2 /*122*/].f_112 = 1;
			Local_53[2 /*122*/].f_116 = 3;
			Local_53[2 /*122*/].f_83[0 /*9*/].f_8 = joaat("gburrito");
			Local_53[2 /*122*/].f_2[0 /*20*/].f_18 = 0;
			Local_53[2 /*122*/].f_2[0 /*20*/].f_19 = -1;
			Local_53[2 /*122*/].f_2[0 /*20*/].f_15 = joaat("WEAPON_PISTOL");
			Local_53[2 /*122*/].f_2[1 /*20*/].f_18 = 0;
			Local_53[2 /*122*/].f_2[1 /*20*/].f_19 = 0;
			Local_53[2 /*122*/].f_2[1 /*20*/].f_15 = joaat("WEAPON_PISTOL");
			Local_53[2 /*122*/].f_2[2 /*20*/].f_18 = 0;
			Local_53[2 /*122*/].f_2[2 /*20*/].f_19 = 1;
			Local_53[2 /*122*/].f_2[2 /*20*/].f_15 = joaat("WEAPON_ASSAULTRIFLE");
			Local_53[2 /*122*/].f_2[3 /*20*/].f_18 = 0;
			Local_53[2 /*122*/].f_2[3 /*20*/].f_19 = 2;
			Local_53[2 /*122*/].f_2[3 /*20*/].f_15 = joaat("WEAPON_ASSAULTRIFLE");
			break;
		default:
			uParam0->f_2 = 6;
			uParam0->f_53[0] = joaat("G_M_Y_MexGoon_01");
			uParam0->f_53[1] = joaat("G_M_Y_MexGoon_02");
			uParam0->f_53[2] = joaat("G_M_Y_MexGoon_03");
			uParam0->f_60[0] = joaat("WEAPON_PISTOL");
			uParam0->f_60[1] = joaat("WEAPON_MICROSMG");
			uParam0->f_60[2] = joaat("WEAPON_ASSAULTRIFLE");
			uParam0->f_69 = 10;
			break;
	}
	func_33(uParam0);
	func_32(uParam0);
}

void func_32(var uParam0)//Position - 0x1BD9
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Local_53[iVar0 /*122*/] == 0)
		{
			uParam0->f_64 = (uParam0->f_64 + Local_53[iVar0 /*122*/].f_111);
			uParam0->f_65 = (uParam0->f_65 + Local_53[iVar0 /*122*/].f_112);
		}
		uParam0->f_69 = (uParam0->f_69 + Local_53[iVar0 /*122*/].f_111);
		iVar0++;
	}
}

void func_33(var uParam0)//Position - 0x1C30
{
	switch (uParam0->f_3)
	{
		case 9:
			switch (uParam0->f_4)
			{
				case 0:
					uParam0->f_85 = "PM_CV1_START";
					uParam0->f_86 = "PM_CV1_GF";
					uParam0->f_87 = "PM_CV1_STOP";
					uParam0->f_88 = "PM_CV1_FAIL";
					uParam0->f_89 = 0;
					uParam0->f_90 = 0;
					break;
				case 1:
					uParam0->f_85 = "PM_CV2_START";
					uParam0->f_86 = "PM_CV2_GF";
					uParam0->f_87 = "PM_CV2_STOP";
					uParam0->f_88 = "PM_CV2_FAIL";
					uParam0->f_89 = 0;
					uParam0->f_90 = 0;
					break;
			}
			break;
	}
}

int func_34()//Position - 0x1CB1
{
	return __LIB_30__::func_724(Global_112096.f_20, Global_112096.f_29);
}

void func_37(var uParam0)//Position - 0x1D11
{
	func_40(*uParam0);
	func_39(&Local_53);
	func_38(&Local_53);
	if (uParam0->f_82 != 0)
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA(uParam0->f_82, false);
	}
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_38(var uParam0)//Position - 0x1D43
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		iVar1 = 0;
		while (iVar1 < 3)
		{
			if (ENTITY::DOES_ENTITY_EXIST((uParam0[iVar0 /*122*/])->f_83[iVar1 /*9*/]))
			{
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&((uParam0[iVar0 /*122*/])->f_83[iVar1 /*9*/]));
			}
			iVar1++;
		}
		iVar0++;
	}
}

void func_39(var uParam0)//Position - 0x1D92
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		iVar1 = 0;
		while (iVar1 < 4)
		{
			func_8(uParam0, iVar0, iVar1);
			iVar1++;
		}
		iVar0++;
	}
}

void func_40(struct<61> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30)//Position - 0x1DC8
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Param0.f_53[iVar0] != 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Param0.f_53[iVar0]);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (Param0.f_57[iVar0] != 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Param0.f_57[iVar0]);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Param0.f_60[iVar0] != 0)
		{
			WEAPON::REMOVE_WEAPON_ASSET(Param0.f_60[iVar0]);
		}
		iVar0++;
	}
}

