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
	float fLocal_22 = 0f;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	float fLocal_26 = 0f;
	float fLocal_27 = 0f;
	var uLocal_28 = 0;
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
	struct<3> Local_43 = { 0, 0, 0 } ;
	var uLocal_44 = 0;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	struct<5> Local_47[8];
	struct<4> Local_48[8];
	struct<3> Local_49 = { 0, 0, 0 } ;
	struct<3> Local_50 = { 0, 0, 0 } ;
	struct<3> Local_51 = { 0, 0, 0 } ;
	struct<3> Local_52 = { 0, 0, 0 } ;
	struct<3> Local_53 = { 0, 0, 0 } ;
	struct<3> Local_54 = { 0, 0, 0 } ;
	struct<3> Local_55 = { 0, 0, 0 } ;
	float fLocal_56 = 0f;
	struct<3> Local_57 = { 0, 0, 0 } ;
	float fLocal_58 = 0f;
	int iLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	int iLocal_73 = 0;
	float fLocal_74 = 0f;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	int iLocal_77 = 0;
	int iLocal_78 = 0;
	int iLocal_79 = 0;
	int iLocal_80 = 0;
	int iLocal_81 = 0;
	int iLocal_82 = 0;
	int iLocal_83 = 0;
	struct<2> Local_84 = { 0, 5 } ;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 5;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
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
	fLocal_22 = 0f;
	fLocal_26 = -0.0375f;
	fLocal_27 = 0.17f;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	Local_49 = { 0f, 0f, 0f };
	Local_51 = { 1064.8711f, 2670.8572f, 38.5511f };
	Local_52 = { 926.3422f, 2708.926f, 39.5394f };
	Local_53 = { 1140.03f, 2698.027f, 37.1568f };
	Local_54 = { Local_49 };
	fLocal_74 = 0f;
	iLocal_75 = joaat("dukes2");
	iLocal_76 = joaat("phantom");
	iLocal_77 = joaat("trailers2");
	iLocal_78 = joaat("rancherxl");
	iLocal_79 = joaat("A_M_M_Hillbilly_01");
	iLocal_80 = joaat("A_M_M_Hillbilly_02");
	iLocal_83 = 3;
	Local_50 = { ScriptParam_84.f_1[0 /*3*/] };
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(11))
	{
		if (__LIB_0__::func_121(Local_48[0 /*4*/]))
		{
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_48[0 /*4*/], 2);
		}
		func_200(1, 0);
	}
	if (__LIB_42__::func_567(Local_50, 31, 0, 0, 0))
	{
		__LIB_35__::func_176(31);
	}
	else
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	while (true)
	{
		if ((BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE() || func_154(1)) || iLocal_65 > 2)
		{
			if (func_154(13))
			{
				func_123();
			}
			switch (iLocal_45)
			{
				case 0:
					func_61();
					break;
				case 1:
					func_1();
					break;
			}
		}
		else
		{
			if (__LIB_0__::func_121(Local_48[0 /*4*/]))
			{
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_48[0 /*4*/], 2);
			}
			func_200(1, 0);
		}
		SYSTEM::WAIT(0);
	}
}

void func_1()//Position - 0x1AD
{
	switch (iLocal_46)
	{
		case 0:
			iLocal_46 = 1;
			break;
		case 1:
			switch (iLocal_65)
			{
				case 0:
					iLocal_46 = 2;
					break;
			}
			break;
		case 2:
			func_2();
			break;
	}
}

void func_2()//Position - 0x1F1
{
	__LIB_6__::func_770(64, 1);
	__LIB_6__::func_770(65, 1);
	__LIB_35__::func_888(Local_48[0 /*4*/], 145);
	__LIB_39__::func_559(-1, 0);
	__LIB_20__::func_174();
	func_200(1, 0);
}

void func_61()//Position - 0x5ACE
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	int iVar5;
	float fVar6;
	var uVar7;
	var uVar8;
	int iVar9;
	switch (iLocal_46)
	{
		case 0:
			func_112();
			func_111(13);
			STREAMING::REQUEST_MODEL(iLocal_75);
			iLocal_46 = 1;
			break;
		case 1:
			switch (iLocal_65)
			{
				case 0:
					if (STREAMING::HAS_MODEL_LOADED(iLocal_75))
					{
						func_107(0, Local_49, -1f, 1);
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_75);
						STREAMING::REQUEST_MODEL(iLocal_76);
						STREAMING::REQUEST_MODEL(iLocal_79);
						STREAMING::REQUEST_MODEL(iLocal_77);
						__LIB_40__::func_733(1);
						iLocal_65++;
					}
					break;
				case 1:
					if ((STREAMING::HAS_MODEL_LOADED(iLocal_76) && STREAMING::HAS_MODEL_LOADED(iLocal_79)) && STREAMING::HAS_MODEL_LOADED(iLocal_77))
					{
						func_111(9);
						iLocal_65++;
					}
					break;
				case 2:
					if ((__LIB_0__::func_121(Local_48[3 /*4*/]) && __LIB_0__::func_121(Local_47[0 /*5*/])) && func_96())
					{
						Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(Local_48[3 /*4*/], ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) };
						if (Var0.f_0 <= 0f && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 953.5052f, 2665.5872f, 38.612366f, 955.0941f, 2716.872f, 50.670456f, 71f, false, true, 0))
						{
							if ((((func_95(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_48[3 /*4*/], 0f, 10f, 0f), 1.25f) || func_95(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_48[3 /*4*/], 0f, 12.5f, 0f), 1.5f)) || func_95(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_48[3 /*4*/], 0f, 15f, 0f), 1.75f)) || func_95(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_48[3 /*4*/], 0f, 17.5f, 0f), 2f)) || func_95(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_48[3 /*4*/], 0f, 20f, 0f), 2.25f))
							{
								func_90(3, 0, 4, 1);
								iLocal_65 = 4;
							}
						}
					}
					if (((!func_154(8) && __LIB_0__::func_121(Local_48[4 /*4*/])) && __LIB_0__::func_121(Local_47[1 /*5*/])) && func_96())
					{
						Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(Local_48[4 /*4*/], ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) };
						if (Var0.f_0 >= 0f && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1110.712f, 2695.6704f, 36.77993f, 1109.166f, 2665.5308f, 48.503548f, 71f, false, true, 0))
						{
							if ((((func_95(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_48[4 /*4*/], 0f, 10f, 0f), 1.5f) || func_95(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_48[4 /*4*/], 0f, 12.5f, 0f), 1.75f)) || func_95(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_48[4 /*4*/], 0f, 15f, 0f), 2f)) || func_95(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_48[4 /*4*/], 0f, 17.5f, 0f), 2.25f)) || func_95(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_48[4 /*4*/], 0f, 20f, 0f), 2.5f))
							{
								func_90(4, 1, 3, 0);
								iLocal_65 = 4;
							}
						}
					}
					if (!func_154(8) && func_88())
					{
						func_111(6);
						if (__LIB_0__::func_121(Local_47[0 /*5*/]))
						{
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_47[0 /*5*/], false);
							TASK::TASK_COMBAT_PED(Local_47[0 /*5*/], PLAYER::PLAYER_PED_ID(), 0, 16);
							Local_47[0 /*5*/].f_3 = 3;
						}
						if (__LIB_0__::func_121(Local_47[1 /*5*/]))
						{
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_47[1 /*5*/], false);
							TASK::TASK_COMBAT_PED(Local_47[1 /*5*/], PLAYER::PLAYER_PED_ID(), 0, 16);
							Local_47[1 /*5*/].f_3 = 3;
						}
						if (__LIB_0__::func_121(Local_48[3 /*4*/]))
						{
							VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_48[3 /*4*/], 1);
						}
						if (__LIB_0__::func_121(Local_48[4 /*4*/]))
						{
							VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_48[4 /*4*/], 1);
						}
						iLocal_65++;
					}
					break;
				case 3:
					if ((!__LIB_0__::func_121(Local_47[0 /*5*/]) || HUD::DOES_BLIP_EXIST(Local_47[0 /*5*/].f_1)) && (!__LIB_0__::func_121(Local_47[1 /*5*/]) || HUD::DOES_BLIP_EXIST(Local_47[1 /*5*/].f_1)))
					{
						iLocal_65++;
					}
					break;
				case 4:
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, joaat("PLAYER"), iLocal_81);
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_81, joaat("PLAYER"));
					if (__LIB_0__::func_121(Local_48[3 /*4*/]))
					{
						VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_48[3 /*4*/], 1);
					}
					if (__LIB_0__::func_121(Local_48[4 /*4*/]))
					{
						VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_48[4 /*4*/], 1);
					}
					STREAMING::REQUEST_MODEL(iLocal_78);
					SYSTEM::SETTIMERA(0);
					iLocal_65++;
					break;
				case 5:
					if (STREAMING::HAS_MODEL_LOADED(iLocal_78))
					{
						STREAMING::REQUEST_MODEL(iLocal_79);
						iLocal_65++;
					}
					break;
				case 6:
					if (STREAMING::HAS_MODEL_LOADED(iLocal_79))
					{
						STREAMING::REQUEST_MODEL(iLocal_80);
						iLocal_65++;
					}
					break;
				case 7:
					if ((STREAMING::HAS_MODEL_LOADED(iLocal_78) && STREAMING::HAS_MODEL_LOADED(iLocal_79)) && STREAMING::HAS_MODEL_LOADED(iLocal_80))
					{
						func_107(5, Local_49, -1082130432, 0);
						func_107(6, Local_49, -1082130432, 0);
						func_107(7, Local_49, -1082130432, 0);
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_78);
						func_83(2, 0, Local_49, -1082130432);
						func_83(3, 0, Local_49, -1082130432);
						func_83(4, 0, Local_49, -1082130432);
						func_83(5, 0, Local_49, -1082130432);
						func_83(6, 0, Local_49, -1082130432);
						func_83(7, 0, Local_49, -1082130432);
						if (func_154(10) && func_154(11))
						{
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_79);
						}
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_80);
						iLocal_65++;
					}
					break;
				case 8:
					if (!__LIB_0__::func_121(Local_47[0 /*5*/]) && !__LIB_0__::func_121(Local_47[1 /*5*/]))
					{
						if (SYSTEM::TIMERA() < 16000)
						{
							SYSTEM::SETTIMERA(16000);
						}
					}
					if (SYSTEM::TIMERA() > 20000 && __LIB_0__::func_529(PLAYER::PLAYER_PED_ID(), Local_51, 1) >= 150f)
					{
						iLocal_65++;
					}
					break;
				case 9:
					if (func_96() || (__LIB_0__::func_121(Local_48[0 /*4*/]) && __LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), Local_48[0 /*4*/], 1) <= 35f))
					{
						Var1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
						iVar5 = MISC::GET_RANDOM_INT_IN_RANGE(6, 10);
						if (PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE(Var1, iVar5, &Var2, 1, 5f, 0f))
						{
							PATHFIND::GET_VEHICLE_NODE_PROPERTIES(Var2, &uVar7, &uVar8);
							if (((uVar8 & 4 == 0 && (!func_80() || uVar8 & 8 == 0)) && (func_79() || uVar8 & 1 == 0)) && !func_78(Var2, 1084227584))
							{
								fVar6 = __LIB_0__::func_670(Var2, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true));
								Var3 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Var2, fVar6, 6f, -6f, 0f) };
								Var4 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Var2, fVar6, -6f, -6f, 0f) };
								if ((((!CAM::IS_SPHERE_VISIBLE(Var2, 7f) && !CAM::IS_SPHERE_VISIBLE(Var3, 7f)) && !CAM::IS_SPHERE_VISIBLE(Var4, 7f)) && !func_78(Var3, 1084227584)) && !func_78(Var4, 1084227584))
								{
									func_76(Local_48[5 /*4*/], Var2);
									func_76(Local_48[6 /*4*/], Var3);
									func_76(Local_48[7 /*4*/], Var4);
									iLocal_59 = MISC::GET_GAME_TIMER();
									iVar9 = 2;
									while (iVar9 <= 7)
									{
										if (__LIB_0__::func_121(Local_47[iVar9 /*5*/]))
										{
											Local_47[iVar9 /*5*/].f_1 = __LIB_6__::func_850(Local_47[iVar9 /*5*/], 1, 145);
											if (PED::IS_PED_IN_ANY_VEHICLE(Local_47[iVar9 /*5*/], false))
											{
												if (__LIB_0__::func_306(Local_47[iVar9 /*5*/], 0) == -1)
												{
													HUD::SET_BLIP_SCALE(Local_47[iVar9 /*5*/].f_1, 1f);
												}
												else
												{
													HUD::SET_BLIP_ALPHA(Local_47[iVar9 /*5*/].f_1, 0);
													HUD::SET_BLIP_HIDDEN_ON_LEGEND(Local_47[iVar9 /*5*/].f_1, true);
												}
											}
										}
										iVar9++;
									}
									func_111(2);
									func_111(7);
									iLocal_69 = (MISC::GET_GAME_TIMER() + 60000);
									func_71(6);
									iLocal_65++;
								}
							}
						}
					}
					break;
				case 10:
					if (((((__LIB_0__::func_121(Local_47[2 /*5*/]) || __LIB_0__::func_121(Local_47[3 /*5*/])) || __LIB_0__::func_121(Local_47[4 /*5*/])) || __LIB_0__::func_121(Local_47[5 /*5*/])) || __LIB_0__::func_121(Local_47[6 /*5*/])) || __LIB_0__::func_121(Local_47[7 /*5*/]))
					{
						if (func_154(7))
						{
							if (__LIB_0__::func_121(Local_48[5 /*4*/]))
							{
								func_64(5, PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()), &uLocal_60);
							}
							if (__LIB_0__::func_121(Local_48[6 /*4*/]))
							{
								func_64(6, PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()), &uLocal_61);
							}
							if (__LIB_0__::func_121(Local_48[7 /*4*/]))
							{
								func_64(7, PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()), &uLocal_62);
							}
						}
					}
					else if (!__LIB_0__::func_121(Local_47[0 /*5*/]) && !__LIB_0__::func_121(Local_47[1 /*5*/]))
					{
						if (__LIB_0__::func_121(Local_48[0 /*4*/]))
						{
							iLocal_46 = 2;
						}
						else
						{
							func_63();
						}
					}
					break;
			}
			break;
		case 2:
			func_62(1);
			break;
	}
}

void func_62(int iParam0)//Position - 0x6393
{
	iLocal_65 = 0;
	iLocal_46 = 0;
	iLocal_45 = iParam0;
}

void func_63()//Position - 0x63A5
{
	if (__LIB_0__::func_121(Local_48[0 /*4*/]))
	{
		VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_48[0 /*4*/], 2);
	}
	func_200(1, 0);
}

void func_64(int iParam0, int iParam1, var uParam2)//Position - 0x63C9
{
	float fVar0;
	float fVar1;
	int iVar2;
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_48[iParam0 /*4*/], false))
	{
		if ((((((ENTITY::DOES_ENTITY_EXIST(iParam1) && Local_48[iParam0 /*4*/] != iParam1) && !VEHICLE::IS_THIS_MODEL_A_BOAT(ENTITY::GET_ENTITY_MODEL(iParam1))) && !VEHICLE::IS_THIS_MODEL_A_PLANE(ENTITY::GET_ENTITY_MODEL(iParam1))) && !VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(iParam1))) && !VEHICLE::IS_THIS_MODEL_A_TRAIN(ENTITY::GET_ENTITY_MODEL(iParam1))) && func_70(Local_48[iParam0 /*4*/]))
		{
			if (iParam0 == 3 || iParam0 == 4)
			{
				fVar0 = 50f;
				fVar1 = 35f;
				iVar2 = 1500;
			}
			else
			{
				fVar0 = 75f;
				fVar1 = 50f;
				iVar2 = 3000;
			}
			if (__LIB_0__::func_529(iParam1, Local_55, 1) >= fVar0 && VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(iParam1))
			{
				Local_57 = { Local_55 };
				fLocal_58 = fLocal_56;
				Local_55 = { ENTITY::GET_ENTITY_COORDS(iParam1, true) };
				fLocal_56 = ENTITY::GET_ENTITY_HEADING(iParam1);
			}
			if (!ENTITY::IS_ENTITY_OCCLUDED(Local_48[iParam0 /*4*/]))
			{
				*uParam2 = MISC::GET_GAME_TIMER();
			}
			else if (((((((((((MISC::GET_GAME_TIMER() - *uParam2) > iVar2 && (MISC::GET_GAME_TIMER() - iLocal_59) > 1500) && __LIB_0__::func_76(Local_48[iParam0 /*4*/], iParam1, 1) > __LIB_0__::func_529(iParam1, Local_57, 1)) && func_69(iParam0)) && __LIB_0__::func_529(iParam1, Local_57, 1) >= fVar0) && __LIB_0__::func_76(Local_48[iParam0 /*4*/], iParam1, 1) >= fVar1) && func_68(Local_48[iParam0 /*4*/], Local_57, 1153138688)) && func_67(Local_48[iParam0 /*4*/], iParam1, Local_57)) && !__LIB_0__::func_86(Local_57)) && !CAM::IS_SPHERE_VISIBLE(Local_57, 4f)) && !func_78(Local_57, 1084227584))
			{
				MISC::CLEAR_AREA_OF_PEDS(Local_57, 1.5f, 0);
				MISC::CLEAR_AREA_OF_VEHICLES(Local_57, 5f, false, false, false, false, false, false, 0);
				if (iParam0 == 3 || iParam0 == 4)
				{
					VEHICLE::DETACH_VEHICLE_FROM_TRAILER(Local_48[iParam0 /*4*/]);
					if (iParam0 == 3)
					{
						func_65(0, 3);
					}
					else
					{
						func_65(1, 3);
					}
				}
				ENTITY::SET_ENTITY_COORDS(Local_48[iParam0 /*4*/], Local_57, true, false, false, true);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_48[iParam0 /*4*/], 5f);
				ENTITY::SET_ENTITY_HEADING(Local_48[iParam0 /*4*/], fLocal_58);
				VEHICLE::SET_VEHICLE_ENGINE_ON(Local_48[iParam0 /*4*/], true, true, false);
				VEHICLE::SET_VEHICLE_FORWARD_SPEED(Local_48[iParam0 /*4*/], (ENTITY::GET_ENTITY_SPEED(iParam1) * 1.2f));
				*uParam2 = MISC::GET_GAME_TIMER();
				Local_48[iParam0 /*4*/].f_2 = MISC::GET_GAME_TIMER();
				iLocal_59 = MISC::GET_GAME_TIMER();
			}
		}
		else
		{
			*uParam2 = MISC::GET_GAME_TIMER();
		}
	}
}

void func_65(int iParam0, int iParam1)//Position - 0x6660
{
	MISC::SET_BIT(&(Local_47[iParam0 /*5*/].f_2), iParam1);
}

int func_67(int iParam0, int iParam1, struct<3> Param2)//Position - 0x66A0
{
	struct<3> Var0;
	struct<3> Var1;
	Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iParam1, ENTITY::GET_ENTITY_COORDS(iParam0, true)) };
	Var1 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iParam1, Param2) };
	if ((Var0.f_1 > 0f && Var1.f_1 > 0f) || (Var0.f_1 < 0f && Var1.f_1 < 0f))
	{
		return 1;
	}
	if (iParam0 == Local_48[3 /*4*/] && !HUD::DOES_BLIP_EXIST(Local_47[0 /*5*/].f_1))
	{
		return 1;
	}
	if (iParam0 == Local_48[4 /*4*/] && !HUD::DOES_BLIP_EXIST(Local_47[1 /*5*/].f_1))
	{
		return 1;
	}
	return 0;
}

int func_68(int iParam0, struct<3> Param1, float fParam2)//Position - 0x6737
{
	if (__LIB_0__::func_529(iParam0, Param1, 1) <= fParam2)
	{
		return 1;
	}
	if (iParam0 == Local_48[3 /*4*/] && !HUD::DOES_BLIP_EXIST(Local_47[0 /*5*/].f_1))
	{
		return 1;
	}
	if (iParam0 == Local_48[4 /*4*/] && !HUD::DOES_BLIP_EXIST(Local_47[1 /*5*/].f_1))
	{
		return 1;
	}
	return 0;
}

int func_69(int iParam0)//Position - 0x6795
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	float fVar5;
	int iVar6;
	if (func_154(6))
	{
		iVar0 = 3;
	}
	else
	{
		iVar0 = 5;
	}
	if (func_154(7))
	{
		iVar1 = 7;
	}
	else if (func_154(6))
	{
		iVar1 = 4;
	}
	else
	{
		iVar1 = 5;
	}
	iVar3 = -1;
	fVar5 = -1f;
	iVar2 = iVar0;
	while (iVar2 <= iVar1)
	{
		if (__LIB_0__::func_121(Local_48[iVar2 /*4*/]))
		{
			if (IntToFloat(iVar3) == -1f || (MISC::GET_GAME_TIMER() - Local_48[iVar2 /*4*/].f_2) > iVar3)
			{
				iVar3 = (MISC::GET_GAME_TIMER() - Local_48[iVar2 /*4*/].f_2);
				iVar4 = iVar2;
			}
			if (fVar5 == -1f || __LIB_0__::func_76(Local_48[iVar2 /*4*/], PLAYER::PLAYER_PED_ID(), 1) > fVar5)
			{
				fVar5 = __LIB_0__::func_76(Local_48[iVar2 /*4*/], PLAYER::PLAYER_PED_ID(), 1);
				iVar6 = iVar2;
			}
		}
		iVar2++;
	}
	if (iParam0 == iVar4 || iParam0 == iVar6)
	{
		return 1;
	}
	return 0;
}

int func_70(int iParam0)//Position - 0x6874
{
	int iVar0;
	if (__LIB_0__::func_121(iParam0) && !VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, -1, false))
	{
		iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, -1, false);
		if (__LIB_0__::func_121(iVar0))
		{
			return 1;
		}
	}
	return 0;
}

void func_71(int iParam0)//Position - 0x68AB
{
	MISC::CLEAR_BIT(&iLocal_66, iParam0);
}

void func_76(int iParam0, struct<3> Param1)//Position - 0x6A45
{
	if (__LIB_0__::func_121(iParam0))
	{
		ENTITY::FREEZE_ENTITY_POSITION(iParam0, false);
		MISC::CLEAR_AREA_OF_PEDS(Param1, 1.5f, 0);
		MISC::CLEAR_AREA_OF_VEHICLES(Param1, 3f, false, false, false, false, false, false, 0);
		ENTITY::SET_ENTITY_COORDS(iParam0, Param1, true, false, false, true);
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iParam0, 5f);
		ENTITY::SET_ENTITY_HEADING(iParam0, __LIB_0__::func_670(ENTITY::GET_ENTITY_COORDS(iParam0, true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)));
		if (__LIB_0__::func_121(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, -1, false)))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				TASK::TASK_VEHICLE_CHASE(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, -1, false), PLAYER::PLAYER_PED_ID());
			}
			else
			{
				TASK::TASK_VEHICLE_MISSION_PED_TARGET(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, -1, false), iParam0, PLAYER::PLAYER_PED_ID(), 2, 100f, 786469, -1f, -1f, true);
			}
		}
		VEHICLE::SET_VEHICLE_FORWARD_SPEED(iParam0, (ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) * 1.2f));
	}
}

int func_78(struct<3> Param0, float fParam1)//Position - 0x6B2A
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 8)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_48[iVar1 /*4*/]) && ENTITY::IS_ENTITY_AT_COORD(Local_48[iVar1 /*4*/], Param0, fParam1, fParam1, fParam1, false, true, 0))
		{
			iVar0 = 1;
		}
		iVar1++;
	}
	return iVar0;
}

int func_79()//Position - 0x6B76
{
	struct<3> Var0;
	var uVar1;
	var uVar2;
	if (PATHFIND::GET_CLOSEST_VEHICLE_NODE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &Var0, 1, 3f, 0f))
	{
		if (PATHFIND::GET_VEHICLE_NODE_PROPERTIES(Var0, &uVar2, &uVar1))
		{
			return uVar1 & 1 == 1;
		}
	}
	return 0;
}

int func_80()//Position - 0x6BB0
{
	struct<3> Var0;
	var uVar1;
	var uVar2;
	if (PATHFIND::GET_CLOSEST_VEHICLE_NODE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &Var0, 1, 3f, 0f))
	{
		if (PATHFIND::GET_VEHICLE_NODE_PROPERTIES(Var0, &uVar2, &uVar1))
		{
			return uVar1 & 8 == 0;
		}
	}
	return 0;
}

int func_83(int iParam0, bool bParam1, struct<3> Param2, float fParam3)//Position - 0x6C83
{
	struct<3> Var0;
	float fVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	struct<3> Var7;
	struct<3> Var8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	float fVar14;
	float fVar15;
	float fVar16;
	float fVar17;
	float fVar18;
	float fVar19;
	float fVar20;
	int iVar21;
	bool bVar22;
	bool bVar23;
	bool bVar24;
	bool bVar25;
	bool bVar26;
	bool bVar27;
	bool bVar28;
	bool bVar29;
	bool bVar30;
	bool bVar31;
	bool bVar32;
	bool bVar33;
	bool bVar34;
	bool bVar35;
	bool bVar36;
	bool bVar37;
	bool bVar38;
	bool bVar39;
	bool bVar40;
	bool bVar41;
	bool bVar42;
	bool bVar43;
	bool bVar44;
	bool bVar45;
	bool bVar46;
	bool bVar47;
	bool bVar48;
	bool bVar49;
	bool bVar50;
	bool bVar51;
	bool bVar52;
	bool bVar53;
	bool bVar54;
	int iVar55;
	bool bVar56;
	bool bVar57;
	bool bVar58;
	bool bVar59;
	bool bVar60;
	bool bVar61;
	bool bVar62;
	bool bVar63;
	bool bVar64;
	char* sVar65;
	if (!ENTITY::DOES_ENTITY_EXIST(Local_47[iParam0 /*5*/]))
	{
		iVar3 = joaat("WEAPON_UNARMED");
		iVar4 = 0;
		iVar5 = -1;
		Var7 = { Local_49 };
		Var8 = { Local_49 };
		iVar9 = 0;
		iVar10 = 1;
		iVar11 = 0;
		iVar12 = 0;
		iVar13 = 10;
		fVar14 = 0f;
		fVar15 = 0f;
		fVar16 = 60f;
		fVar17 = 5f;
		fVar18 = 120f;
		fVar19 = -90f;
		fVar20 = 90f;
		iVar21 = iLocal_81;
		bVar22 = true;
		bVar23 = true;
		bVar24 = false;
		bVar25 = true;
		bVar26 = true;
		bVar27 = true;
		bVar28 = false;
		bVar29 = true;
		bVar30 = false;
		bVar31 = true;
		bVar32 = true;
		bVar33 = false;
		bVar34 = false;
		bVar35 = true;
		bVar36 = false;
		bVar37 = true;
		bVar38 = true;
		bVar39 = false;
		bVar40 = true;
		bVar41 = true;
		bVar42 = true;
		bVar43 = false;
		bVar44 = false;
		bVar45 = false;
		bVar46 = false;
		bVar47 = false;
		bVar48 = false;
		bVar49 = true;
		bVar50 = false;
		bVar51 = false;
		bVar52 = false;
		bVar53 = true;
		bVar54 = true;
		iVar55 = 0;
		bVar56 = false;
		bVar57 = false;
		bVar58 = false;
		bVar59 = false;
		bVar60 = false;
		bVar61 = false;
		bVar62 = true;
		bVar63 = true;
		bVar64 = false;
		switch (iParam0)
		{
			case 0:
				iVar2 = iLocal_79;
				iVar4 = Local_48[3 /*4*/];
				iVar3 = joaat("WEAPON_PISTOL");
				bVar30 = true;
				bVar27 = false;
				bVar28 = true;
				bVar64 = true;
				break;
			case 1:
				iVar2 = iLocal_79;
				iVar4 = Local_48[4 /*4*/];
				iVar3 = joaat("WEAPON_PISTOL");
				bVar30 = true;
				bVar27 = false;
				bVar28 = true;
				bVar64 = true;
				break;
			case 2:
				iVar2 = iLocal_80;
				iVar4 = Local_48[5 /*4*/];
				iVar3 = joaat("WEAPON_PISTOL");
				bVar30 = true;
				bVar27 = false;
				break;
			case 3:
				iVar2 = iLocal_79;
				iVar4 = Local_48[5 /*4*/];
				iVar5 = 0;
				iVar3 = joaat("WEAPON_PISTOL");
				bVar30 = true;
				bVar27 = false;
				break;
			case 4:
				iVar2 = iLocal_79;
				iVar4 = Local_48[6 /*4*/];
				iVar3 = joaat("WEAPON_PISTOL");
				bVar30 = true;
				bVar27 = false;
				break;
			case 5:
				iVar2 = iLocal_80;
				iVar4 = Local_48[6 /*4*/];
				iVar5 = 0;
				iVar3 = joaat("WEAPON_PISTOL");
				bVar30 = true;
				bVar27 = false;
				break;
			case 6:
				iVar2 = iLocal_80;
				iVar4 = Local_48[7 /*4*/];
				iVar3 = joaat("WEAPON_PISTOL");
				bVar30 = true;
				bVar27 = false;
				break;
			case 7:
				iVar2 = iLocal_80;
				iVar4 = Local_48[7 /*4*/];
				iVar5 = 0;
				iVar3 = joaat("WEAPON_PISTOL");
				bVar30 = true;
				bVar27 = false;
				break;
			default:
				break;
		}
		if (!STREAMING::HAS_MODEL_LOADED(iVar2))
		{
			return 0;
		}
		if (!__LIB_0__::func_78(Param2, Local_49, 0))
		{
			if (!ENTITY::DOES_ENTITY_EXIST(iVar6))
			{
				Var0 = { Param2 };
			}
			else
			{
				Var7 = { Param2 };
			}
		}
		if (fParam3 != -1f)
		{
			fVar1 = fParam3;
		}
		if (__LIB_0__::func_121(iVar4))
		{
			Local_47[iParam0 /*5*/] = PED::CREATE_PED_INSIDE_VEHICLE(iVar4, 26, iVar2, iVar5, true, true);
		}
		else
		{
			Local_47[iParam0 /*5*/] = PED::CREATE_PED(26, iVar2, Var0, fVar1, true, true);
			ENTITY::SET_ENTITY_COLLISION(Local_47[iParam0 /*5*/], bVar35, false);
			ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(Local_47[iParam0 /*5*/], !bVar59, false);
		}
		if (bVar34)
		{
			ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_47[iParam0 /*5*/], Var0, false, false, true);
		}
		if (bParam1)
		{
			if (iVar21 == iLocal_81)
			{
				Local_47[iParam0 /*5*/].f_1 = __LIB_6__::func_850(Local_47[iParam0 /*5*/], 1, 145);
			}
			else
			{
				Local_47[iParam0 /*5*/].f_1 = __LIB_6__::func_850(Local_47[iParam0 /*5*/], 0, 145);
			}
		}
		WEAPON::SET_PED_DROPS_WEAPONS_WHEN_DEAD(Local_47[iParam0 /*5*/], bVar53);
		PED::SET_PED_CONFIG_FLAG(Local_47[iParam0 /*5*/], 213, bVar22);
		PED::SET_PED_CONFIG_FLAG(Local_47[iParam0 /*5*/], 212, bVar23);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_47[iParam0 /*5*/], bVar24);
		PED::SET_PED_KEEP_TASK(Local_47[iParam0 /*5*/], bVar25);
		PED::SET_PED_DIES_WHEN_INJURED(Local_47[iParam0 /*5*/], bVar26);
		PED::SET_PED_CONFIG_FLAG(Local_47[iParam0 /*5*/], 188, bVar49);
		PED::SET_PED_CONFIG_FLAG(Local_47[iParam0 /*5*/], 42, !bVar27);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_47[iParam0 /*5*/], 9, bVar29);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_47[iParam0 /*5*/], 3, bVar31);
		PED::SET_PED_CONFIG_FLAG(Local_47[iParam0 /*5*/], 342, bVar51);
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_47[iParam0 /*5*/], bVar30, 1);
		PED::SET_PED_ARMOUR(Local_47[iParam0 /*5*/], iVar12);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_47[iParam0 /*5*/], 8, bVar33);
		ENTITY::SET_ENTITY_VISIBLE(Local_47[iParam0 /*5*/], bVar32, false);
		ENTITY::SET_ENTITY_INVINCIBLE(Local_47[iParam0 /*5*/], bVar36);
		WEAPON::GIVE_WEAPON_TO_PED(Local_47[iParam0 /*5*/], iVar3, -1, bVar28, bVar28);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_47[iParam0 /*5*/], 2, bVar37);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_47[iParam0 /*5*/], 1, bVar38);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_47[iParam0 /*5*/], 52, bVar39);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_47[iParam0 /*5*/], 13, bVar62);
		PED::SET_PED_SUFFERS_CRITICAL_HITS(Local_47[iParam0 /*5*/], bVar40);
		PED::SET_PED_CAN_BE_TARGETTED(Local_47[iParam0 /*5*/], bVar41);
		PED::SET_PED_CONFIG_FLAG(Local_47[iParam0 /*5*/], 118, bVar42);
		PED::SET_PED_CONFIG_FLAG(Local_47[iParam0 /*5*/], 115, bVar43);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_47[iParam0 /*5*/], 12, bVar44);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_47[iParam0 /*5*/], 36, bVar45);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_47[iParam0 /*5*/], 35, bVar46);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_47[iParam0 /*5*/], 29, bVar47);
		PED::SET_PED_CONFIG_FLAG(Local_47[iParam0 /*5*/], 185, bVar48);
		PED::SET_PED_TO_LOAD_COVER(Local_47[iParam0 /*5*/], bVar50);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_47[iParam0 /*5*/], 17, bVar56);
		AUDIO::DISABLE_PED_PAIN_AUDIO(Local_47[iParam0 /*5*/], bVar57);
		AUDIO::STOP_PED_SPEAKING(Local_47[iParam0 /*5*/], bVar52);
		__LIB_11__::func_168(Local_47[iParam0 /*5*/], fVar16, fVar17, fVar18, fVar19, fVar20);
		ENTITY::FREEZE_ENTITY_POSITION(Local_47[iParam0 /*5*/], bVar60);
		PED::SET_PED_CONFIG_FLAG(Local_47[iParam0 /*5*/], 203, bVar61);
		PED::SET_PED_IS_AVOIDED_BY_OTHERS(Local_47[iParam0 /*5*/], !bVar61);
		PED::SET_PED_CONFIG_FLAG(Local_47[iParam0 /*5*/], 366, bVar63);
		PED::SET_PED_CONFIG_FLAG(Local_47[iParam0 /*5*/], 134, bVar64);
		if (!bVar54)
		{
			func_65(iParam0, 2);
		}
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar65))
		{
			TASK::TASK_START_SCENARIO_IN_PLACE(Local_47[iParam0 /*5*/], sVar65, -1, false);
		}
		if (iVar11 > 0)
		{
			if (iVar11 > ENTITY::GET_ENTITY_MAX_HEALTH(Local_47[iParam0 /*5*/]) || iVar55)
			{
				ENTITY::SET_ENTITY_MAX_HEALTH(Local_47[iParam0 /*5*/], iVar11);
			}
			ENTITY::SET_ENTITY_HEALTH(Local_47[iParam0 /*5*/], iVar11, 0);
		}
		if (iVar13 > 0)
		{
			PED::SET_PED_ACCURACY(Local_47[iParam0 /*5*/], iVar13);
		}
		if (fVar14 > 0f || fVar15 > 0f)
		{
			WEAPON::SET_PED_CHANCE_OF_FIRING_BLANKS(Local_47[iParam0 /*5*/], fVar14, fVar15);
		}
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_47[iParam0 /*5*/], iVar21);
		if (ENTITY::DOES_ENTITY_EXIST(iVar6))
		{
			ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_47[iParam0 /*5*/], iVar6, -1, Var7, Var8, true, true, true, false, 2, true, 0);
			PED::SET_PED_CAN_RAGDOLL(Local_47[iParam0 /*5*/], false);
			func_65(iParam0, 1);
		}
		func_85(iParam0);
		func_84(iParam0);
		if (iVar9 != 0)
		{
			WEAPON::GIVE_WEAPON_COMPONENT_TO_PED(Local_47[iParam0 /*5*/], iVar3, iVar9);
			WEAPON::SET_CURRENT_PED_WEAPON(Local_47[iParam0 /*5*/], iVar3, true);
		}
		PED::SET_PED_COMBAT_ABILITY(Local_47[iParam0 /*5*/], iVar10);
		if (bVar58)
		{
			PED::SET_PED_STEALTH_MOVEMENT(Local_47[iParam0 /*5*/], true, "DEFAULT_ACTION");
		}
		return 1;
	}
	return 0;
}

void func_84(int iParam0)//Position - 0x72BE
{
	if (__LIB_0__::func_121(Local_47[iParam0 /*5*/]))
	{
		switch (iParam0)
		{
			case 2:
				break;
			}
	}
}

void func_85(int iParam0)//Position - 0x72E3
{
	if (__LIB_0__::func_121(Local_47[iParam0 /*5*/]))
	{
		switch (iParam0)
		{
			case 0:
				PED::SET_PED_COMPONENT_VARIATION(Local_47[iParam0 /*5*/], 0, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_47[iParam0 /*5*/], 2, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_47[iParam0 /*5*/], 3, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_47[iParam0 /*5*/], 4, 0, 0, 0);
				break;
			case 1:
				PED::SET_PED_COMPONENT_VARIATION(Local_47[iParam0 /*5*/], 0, 0, 1, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_47[iParam0 /*5*/], 2, 1, 1, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_47[iParam0 /*5*/], 3, 1, 1, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_47[iParam0 /*5*/], 4, 1, 1, 0);
				break;
			case 2:
				PED::SET_PED_COMPONENT_VARIATION(Local_47[iParam0 /*5*/], 0, 0, 1, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_47[iParam0 /*5*/], 2, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_47[iParam0 /*5*/], 3, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_47[iParam0 /*5*/], 4, 0, 0, 0);
				break;
			case 3:
				PED::SET_PED_COMPONENT_VARIATION(Local_47[iParam0 /*5*/], 0, 0, 1, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_47[iParam0 /*5*/], 2, 0, 1, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_47[iParam0 /*5*/], 3, 1, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_47[iParam0 /*5*/], 4, 0, 2, 0);
				break;
			case 4:
				PED::SET_PED_COMPONENT_VARIATION(Local_47[iParam0 /*5*/], 0, 0, 2, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_47[iParam0 /*5*/], 2, 1, 2, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_47[iParam0 /*5*/], 3, 0, 2, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_47[iParam0 /*5*/], 4, 0, 2, 0);
				break;
			case 5:
				PED::SET_PED_COMPONENT_VARIATION(Local_47[iParam0 /*5*/], 0, 1, 2, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_47[iParam0 /*5*/], 2, 1, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_47[iParam0 /*5*/], 3, 1, 1, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_47[iParam0 /*5*/], 4, 0, 1, 0);
				break;
			case 6:
				PED::SET_PED_COMPONENT_VARIATION(Local_47[iParam0 /*5*/], 0, 1, 1, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_47[iParam0 /*5*/], 2, 2, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_47[iParam0 /*5*/], 3, 2, 2, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_47[iParam0 /*5*/], 4, 0, 1, 0);
				break;
			case 7:
				PED::SET_PED_COMPONENT_VARIATION(Local_47[iParam0 /*5*/], 0, 0, 2, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_47[iParam0 /*5*/], 2, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_47[iParam0 /*5*/], 3, 1, 2, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_47[iParam0 /*5*/], 4, 0, 0, 0);
				break;
			}
	}
}

int func_88()//Position - 0x758A
{
	int iVar0;
	int iVar1;
	int iVar2;
	if ((__LIB_0__::func_121(Local_47[0 /*5*/]) && __LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), Local_47[0 /*5*/], 1) >= 200f) && (__LIB_0__::func_121(Local_47[1 /*5*/]) && __LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), Local_47[1 /*5*/], 1) >= 200f))
	{
		return 1;
	}
	if ((func_154(10) && !__LIB_0__::func_121(Local_47[0 /*5*/])) || (func_154(11) && !__LIB_0__::func_121(Local_47[1 /*5*/])))
	{
		return 1;
	}
	if ((__LIB_0__::func_121(Local_47[0 /*5*/]) && (PED::IS_PED_IN_COMBAT(Local_47[0 /*5*/], PLAYER::PLAYER_PED_ID()) || !PED::IS_PED_IN_ANY_VEHICLE(Local_47[0 /*5*/], false))) || (__LIB_0__::func_121(Local_47[1 /*5*/]) && (PED::IS_PED_IN_COMBAT(Local_47[1 /*5*/], PLAYER::PLAYER_PED_ID()) || !PED::IS_PED_IN_ANY_VEHICLE(Local_47[1 /*5*/], false))))
	{
		return 1;
	}
	if ((__LIB_0__::func_121(Local_48[1 /*4*/]) && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_48[1 /*4*/], PLAYER::PLAYER_PED_ID(), true)) || (__LIB_0__::func_121(Local_48[2 /*4*/]) && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_48[2 /*4*/], PLAYER::PLAYER_PED_ID(), true)))
	{
		return 1;
	}
	if (func_89(Local_48[3 /*4*/]) || func_89(Local_48[4 /*4*/]))
	{
		return 1;
	}
	iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
	if (__LIB_0__::func_121(iVar0))
	{
		fLocal_74 = ENTITY::GET_ENTITY_SPEED(iVar0);
	}
	else
	{
		fLocal_74 = 0f;
	}
	if (PED::IS_PED_TRYING_TO_ENTER_A_LOCKED_VEHICLE(PLAYER::PLAYER_PED_ID()))
	{
		iVar2 = PED::GET_VEHICLE_PED_IS_TRYING_TO_ENTER(PLAYER::PLAYER_PED_ID());
		iVar1 = iVar2;
		if ((iVar1 == Local_48[3 /*4*/] && __LIB_0__::func_121(Local_47[0 /*5*/])) || (iVar1 == Local_48[4 /*4*/] && __LIB_0__::func_121(Local_47[1 /*5*/])))
		{
			return 1;
		}
	}
	return 0;
}

int func_89(int iParam0)//Position - 0x7752
{
	int iVar0;
	float fVar1;
	iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
	if (((__LIB_0__::func_121(iParam0) && __LIB_0__::func_121(iVar0)) && fLocal_74 != 0f) && fLocal_74 >= 9f)
	{
		fVar1 = ENTITY::GET_ENTITY_SPEED(iVar0);
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam0, iVar0) && fVar1 <= (fLocal_74 * 0.5f))
		{
			return 1;
		}
	}
	return 0;
}

void func_90(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x77B2
{
	func_111(8);
	VEHICLE::SET_VEHICLE_FORWARD_SPEED(Local_48[iParam0 /*4*/], 5f);
	Local_47[iParam1 /*5*/].f_1 = __LIB_6__::func_850(Local_47[iParam1 /*5*/], 1, 145);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_47[iParam1 /*5*/], true);
	func_94();
	TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, Local_48[iParam0 /*4*/], ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_48[iParam0 /*4*/], 0f, 20f, 0f), 30f, 0, 0, 262144, 4f, -1f);
	TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, false);
	TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
	func_93(Local_47[iParam1 /*5*/]);
	__LIB_6__::func_834(Local_47[iParam1 /*5*/], "GENERIC_INSULT_HIGH", 13);
	Local_47[iParam1 /*5*/].f_3 = 3;
	if (__LIB_0__::func_121(Local_48[iParam2 /*4*/]))
	{
		if (iParam0 == 3)
		{
			Local_54 = { 1031.986f, 2693.441f, 38.6861f };
		}
		else
		{
			Local_54 = { 1027.001f, 2686.89f, 37.8987f };
		}
		iLocal_71 = MISC::GET_GAME_TIMER() + 1000;
		if (__LIB_0__::func_121(Local_47[iParam3 /*5*/]))
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_47[iParam3 /*5*/], true);
			TASK::TASK_VEHICLE_MISSION(Local_47[iParam3 /*5*/], Local_48[iParam2 /*4*/], Local_48[0 /*4*/], 2, 30f, 262144, -1f, -1f, true);
		}
		Local_47[iParam3 /*5*/].f_3++;
	}
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, joaat("PLAYER"), iLocal_81);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_81, joaat("PLAYER"));
}

void func_93(int iParam0)//Position - 0x7B02
{
	if (func_154(0))
	{
		TASK::CLOSE_SEQUENCE_TASK(iLocal_82);
		func_71(0);
	}
	TASK::TASK_PERFORM_SEQUENCE(iParam0, iLocal_82);
	TASK::CLEAR_SEQUENCE_TASK(&iLocal_82);
}

void func_94()//Position - 0x7B2B
{
	if (!func_154(0))
	{
		TASK::CLEAR_SEQUENCE_TASK(&iLocal_82);
		TASK::OPEN_SEQUENCE_TASK(&iLocal_82);
		func_111(0);
	}
}

int func_95(struct<3> Param0, float fParam1)//Position - 0x7B4D
{
	float fVar0;
	float fVar1;
	struct<3> Var2;
	struct<3> Var3;
	fVar0 = ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID());
	fVar1 = __LIB_0__::func_529(PLAYER::PLAYER_PED_ID(), Param0, 1);
	Var2 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
	Var3 = { Var2 + ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID()) };
	if ((fVar1 / fVar0) <= fParam1 && MISC::GET_DISTANCE_BETWEEN_COORDS(Var3, Param0, true) < MISC::GET_DISTANCE_BETWEEN_COORDS(Var2, Param0, true))
	{
		return 1;
	}
	return 0;
}

bool func_96()//Position - 0x7BBF
{
	return (__LIB_0__::func_121(Local_48[0 /*4*/]) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_48[0 /*4*/], false));
}

int func_107(int iParam0, struct<3> Param1, float fParam2, bool bParam3)//Position - 0x8146
{
	struct<3> Var0;
	float fVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	bool bVar13;
	bool bVar14;
	bool bVar15;
	bool bVar16;
	bool bVar17;
	bool bVar18;
	bool bVar19;
	bool bVar20;
	float fVar21;
	float fVar22;
	float fVar23;
	int iVar24;
	struct<3> Var25;
	struct<3> Var26;
	char* sVar27;
	if (!ENTITY::DOES_ENTITY_EXIST(Local_48[iParam0 /*4*/]))
	{
		iVar3 = 0;
		bVar4 = true;
		bVar5 = true;
		bVar6 = false;
		bVar7 = false;
		bVar8 = false;
		bVar9 = false;
		bVar10 = true;
		bVar11 = false;
		bVar12 = false;
		bVar13 = false;
		bVar14 = false;
		bVar15 = false;
		bVar16 = true;
		bVar17 = false;
		bVar18 = true;
		bVar19 = false;
		bVar20 = false;
		fVar22 = -1f;
		fVar23 = -1f;
		switch (iParam0)
		{
			case 0:
				Var0 = { Local_51 };
				fVar1 = 89.7263f;
				iVar2 = iLocal_75;
				bVar10 = false;
				bVar15 = true;
				bVar16 = false;
				bVar19 = true;
				bVar6 = true;
				bVar18 = false;
				iVar3 = 7;
				break;
			case 3:
				Var0 = { Local_52 };
				fVar1 = 175.3714f;
				iVar2 = iLocal_76;
				bVar8 = true;
				bVar15 = true;
				bVar16 = false;
				sVar27 = "96NWO218";
				iVar3 = 2;
				break;
			case 4:
				Var0 = { Local_53 };
				fVar1 = 171f;
				iVar2 = iLocal_76;
				bVar8 = true;
				bVar15 = true;
				bVar16 = false;
				sVar27 = "01DTS039";
				iVar3 = 2;
				break;
			case 1:
				Var0 = { 930.46f, 2719.65f, 42.41f };
				fVar1 = 180.53f;
				iVar2 = iLocal_77;
				break;
			case 2:
				Var0 = { 1141.17f, 2711.97f, 40.04f };
				fVar1 = 176.67f;
				iVar2 = iLocal_77;
				break;
			case 5:
				Var0 = { 514.5844f, -649.9937f, 23.7512f };
				fVar1 = 182.0097f;
				iVar2 = iLocal_78;
				bVar7 = true;
				bVar8 = true;
				bVar18 = false;
				sVar27 = "18NJM316";
				break;
			case 6:
				Var0 = { 507.3959f, -653.6174f, 23.7512f };
				fVar1 = 177.8055f;
				iVar2 = iLocal_78;
				bVar7 = true;
				bVar8 = true;
				bVar18 = false;
				sVar27 = "28HDT291";
				break;
			case 7:
				Var0 = { 1200.5469f, -1553.6067f, 38.4019f };
				fVar1 = 0.0001f;
				iVar2 = iLocal_78;
				bVar7 = true;
				bVar8 = true;
				bVar18 = false;
				sVar27 = "23DJT162";
				break;
			default:
				break;
		}
		if (!STREAMING::HAS_MODEL_LOADED(iVar2))
		{
			return 0;
		}
		if (!__LIB_0__::func_78(Param1, Local_49, 0))
		{
			Var0 = { Param1 };
		}
		if (fParam2 != -1f)
		{
			fVar1 = fParam2;
		}
		Local_48[iParam0 /*4*/] = VEHICLE::CREATE_VEHICLE(iVar2, Var0, fVar1, true, true, false);
		func_110(iParam0);
		func_109(iParam0);
		ENTITY::SET_ENTITY_VISIBLE(Local_48[iParam0 /*4*/], bVar5, false);
		if (ENTITY::DOES_ENTITY_EXIST(iVar24))
		{
			ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_48[iParam0 /*4*/], iVar24, -1, Var25, Var26, false, false, false, false, 2, true, 0);
		}
		else
		{
			ENTITY::SET_ENTITY_COLLISION(Local_48[iParam0 /*4*/], bVar4, false);
		}
		VEHICLE::SET_VEHICLE_STRONG(Local_48[iParam0 /*4*/], bVar6);
		ENTITY::FREEZE_ENTITY_POSITION(Local_48[iParam0 /*4*/], bVar7);
		VEHICLE::SET_VEHICLE_ENGINE_ON(Local_48[iParam0 /*4*/], bVar8, true, false);
		ENTITY::SET_ENTITY_INVINCIBLE(Local_48[iParam0 /*4*/], bVar11);
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_48[iParam0 /*4*/], bVar12, 1);
		VEHICLE::SET_VEHICLE_CAN_BE_TARGETTED(Local_48[iParam0 /*4*/], bVar13);
		VEHICLE::SET_FORCE_VEHICLE_ENGINE_DAMAGE_BY_BULLET(Local_48[iParam0 /*4*/], bVar14);
		VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(Local_48[iParam0 /*4*/], bVar16, 0);
		VEHICLE::SET_VEHICLE_DISABLE_TOWING(Local_48[iParam0 /*4*/], bVar15);
		ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_48[iParam0 /*4*/], bVar17);
		VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(Local_48[iParam0 /*4*/], bVar18);
		VEHICLE::SET_VEHICLE_NEEDS_TO_BE_HOTWIRED(Local_48[iParam0 /*4*/], bVar19);
		ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(Local_48[iParam0 /*4*/], !bVar20, false);
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar27))
		{
			VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(Local_48[iParam0 /*4*/], sVar27);
		}
		if (fVar21 > 0f)
		{
			VEHICLE::SET_VEHICLE_FORWARD_SPEED(Local_48[iParam0 /*4*/], fVar21);
		}
		if (bVar9)
		{
			VEHICLE::SET_HELI_BLADES_FULL_SPEED(Local_48[iParam0 /*4*/]);
		}
		if (fVar22 >= 0f)
		{
			VEHICLE::SET_PLANE_TURBULENCE_MULTIPLIER(Local_48[iParam0 /*4*/], fVar22);
		}
		if (fVar23 >= 0f)
		{
			VEHICLE::SET_HELI_TURBULENCE_SCALAR(Local_48[iParam0 /*4*/], fVar23);
		}
		if (iVar3 != 0)
		{
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_48[iParam0 /*4*/], iVar3);
		}
		if (bParam3)
		{
			Local_48[iParam0 /*4*/].f_1 = __LIB_6__::func_825(Local_48[iParam0 /*4*/], bVar10, 0);
		}
	}
	return 1;
}

void func_109(int iParam0)//Position - 0x84F5
{
	if (__LIB_0__::func_121(Local_48[iParam0 /*4*/]))
	{
		switch (iParam0)
		{
			case 5:
			case 6:
			case 7:
			case 3:
			case 4:
				VEHICLE::SET_VEHICLE_DIRT_LEVEL(Local_48[iParam0 /*4*/], 15f);
				break;
			}
	}
}

void func_110(int iParam0)//Position - 0x8541
{
	if (__LIB_0__::func_121(Local_48[iParam0 /*4*/]))
	{
		switch (iParam0)
		{
			case 5:
				VEHICLE::SET_VEHICLE_COLOURS(Local_48[iParam0 /*4*/], 48, 48);
				VEHICLE::SET_VEHICLE_EXTRA_COLOURS(Local_48[iParam0 /*4*/], 8, 156);
				break;
			case 6:
				VEHICLE::SET_VEHICLE_COLOURS(Local_48[iParam0 /*4*/], 58, 58);
				VEHICLE::SET_VEHICLE_EXTRA_COLOURS(Local_48[iParam0 /*4*/], 8, 156);
				break;
			case 7:
				VEHICLE::SET_VEHICLE_COLOURS(Local_48[iParam0 /*4*/], 94, 94);
				VEHICLE::SET_VEHICLE_EXTRA_COLOURS(Local_48[iParam0 /*4*/], 8, 156);
				break;
			case 3:
			case 4:
				VEHICLE::SET_VEHICLE_COLOURS(Local_48[iParam0 /*4*/], 0, 0);
				VEHICLE::SET_VEHICLE_EXTRA_COLOURS(Local_48[iParam0 /*4*/], 61, 156);
				break;
			}
	}
}

void func_111(int iParam0)//Position - 0x85EE
{
	MISC::SET_BIT(&iLocal_66, iParam0);
}

void func_112()//Position - 0x85FE
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
	}
	func_122(1);
	AUDIO::REGISTER_SCRIPT_WITH_AUDIO(1);
	PED::ADD_RELATIONSHIP_GROUP("ENEMIES", &iLocal_81);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, joaat("PLAYER"), joaat("PLAYER"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(255, joaat("PLAYER"), iLocal_81);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_81, iLocal_81);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(255, iLocal_81, joaat("PLAYER"));
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID(), joaat("PLAYER"));
	__LIB_36__::func_664(1);
}

void func_122(bool bParam0)//Position - 0x8C44
{
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(iLocal_78, bParam0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(iLocal_76, bParam0);
}

void func_123()//Position - 0x8C5C
{
	if (!__LIB_35__::func_175())
	{
		if (__LIB_40__::func_735())
		{
			func_200(1, 0);
		}
	}
	RECORDING::REPLAY_CHECK_FOR_EVENT_THIS_FRAME("RE_DUEL", 0);
	func_138();
	func_133();
	func_129();
	func_124();
	if ((func_154(5) && __LIB_0__::func_121(Local_48[iLocal_83 /*4*/])) && MISC::GET_GAME_TIMER() < iLocal_67)
	{
		AUDIO::SET_HORN_PERMANENTLY_ON(Local_48[iLocal_83 /*4*/]);
	}
	if (func_154(6))
	{
		if (iLocal_68 == 0)
		{
			if (__LIB_0__::func_529(PLAYER::PLAYER_PED_ID(), Local_51, 1) >= 150f)
			{
				iLocal_68 = MISC::GET_GAME_TIMER() + 30000;
			}
		}
		else if (MISC::GET_GAME_TIMER() >= iLocal_68)
		{
			func_71(6);
		}
	}
	if (func_154(7))
	{
		if (MISC::GET_GAME_TIMER() >= iLocal_69)
		{
			func_71(7);
		}
	}
	if ((func_154(9) && __LIB_0__::func_121(Local_48[0 /*4*/])) && __LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), Local_48[0 /*4*/], 1) <= 35f)
	{
		if (!func_154(10))
		{
			if (!CAM::IS_SPHERE_VISIBLE(Local_52, 7f))
			{
				if (((MISC::GET_GAME_TIMER() - iLocal_72) >= 1000 && !func_78(Local_52, 7f)) && __LIB_0__::func_529(PLAYER::PLAYER_PED_ID(), Local_52, 1) >= 50f)
				{
					MISC::CLEAR_AREA(Local_52, 7f, true, false, false, false);
					func_107(3, Local_49, -1082130432, 0);
					func_107(1, Local_49, -1082130432, 0);
					VEHICLE::ATTACH_VEHICLE_TO_TRAILER(Local_48[3 /*4*/], Local_48[1 /*4*/], 1f);
					func_83(0, 0, Local_49, -1082130432);
					func_111(10);
					if (iLocal_65 > 2)
					{
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_47[0 /*5*/], false);
						TASK::TASK_COMBAT_PED(Local_47[0 /*5*/], PLAYER::PLAYER_PED_ID(), 0, 16);
						Local_47[0 /*5*/].f_3 = 3;
					}
				}
			}
			else
			{
				iLocal_72 = MISC::GET_GAME_TIMER();
			}
		}
		if (!func_154(11))
		{
			if (!CAM::IS_SPHERE_VISIBLE(Local_53, 7f))
			{
				if (((MISC::GET_GAME_TIMER() - iLocal_73) >= 1000 && !func_78(Local_53, 7f)) && __LIB_0__::func_529(PLAYER::PLAYER_PED_ID(), Local_53, 1) >= 50f)
				{
					MISC::CLEAR_AREA(Local_53, 7f, true, false, false, false);
					func_107(4, Local_49, -1082130432, 0);
					func_107(2, Local_49, -1082130432, 0);
					VEHICLE::ATTACH_VEHICLE_TO_TRAILER(Local_48[4 /*4*/], Local_48[2 /*4*/], 1f);
					func_83(1, 0, Local_49, -1082130432);
					func_111(11);
					if (iLocal_65 > 2)
					{
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_47[1 /*5*/], false);
						TASK::TASK_COMBAT_PED(Local_47[1 /*5*/], PLAYER::PLAYER_PED_ID(), 0, 16);
						Local_47[1 /*5*/].f_3 = 3;
					}
				}
			}
			else
			{
				iLocal_73 = MISC::GET_GAME_TIMER();
			}
		}
		if (func_154(10) && func_154(11))
		{
			func_71(9);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_76);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_77);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_79);
		}
	}
	if (func_154(8))
	{
		if (iLocal_70 == 0)
		{
			iLocal_70 = MISC::GET_GAME_TIMER() + 3500;
		}
		else if (MISC::GET_GAME_TIMER() >= iLocal_70)
		{
			func_71(8);
			func_111(6);
		}
	}
}

void func_124()//Position - 0x8F44
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_47[iVar0 /*5*/]) && HUD::DOES_BLIP_EXIST(Local_47[iVar0 /*5*/].f_1))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(Local_47[iVar0 /*5*/], false))
			{
				if (!func_128(iVar0, 0))
				{
					HUD::SET_BLIP_SCALE(Local_47[iVar0 /*5*/].f_1, 1f);
					func_65(iVar0, 0);
				}
				if (__LIB_0__::func_306(Local_47[iVar0 /*5*/], 0) != -1)
				{
					if (func_127(iVar0))
					{
						if (HUD::GET_BLIP_ALPHA(Local_47[iVar0 /*5*/].f_1) > 0)
						{
							HUD::SET_BLIP_ALPHA(Local_47[iVar0 /*5*/].f_1, 0);
							HUD::SET_BLIP_HIDDEN_ON_LEGEND(Local_47[iVar0 /*5*/].f_1, true);
						}
					}
					else if (HUD::GET_BLIP_ALPHA(Local_47[iVar0 /*5*/].f_1) == 0)
					{
						HUD::SET_BLIP_ALPHA(Local_47[iVar0 /*5*/].f_1, 255);
						HUD::SET_BLIP_HIDDEN_ON_LEGEND(Local_47[iVar0 /*5*/].f_1, false);
					}
				}
			}
			else if (func_128(iVar0, 0))
			{
				HUD::SET_BLIP_SCALE(Local_47[iVar0 /*5*/].f_1, 0.7f);
				func_126(iVar0, 0);
				if (HUD::GET_BLIP_ALPHA(Local_47[iVar0 /*5*/].f_1) == 0)
				{
					HUD::SET_BLIP_ALPHA(Local_47[iVar0 /*5*/].f_1, 255);
					HUD::SET_BLIP_HIDDEN_ON_LEGEND(Local_47[iVar0 /*5*/].f_1, false);
				}
			}
			if (PED::IS_PED_INJURED(Local_47[iVar0 /*5*/]))
			{
				__LIB_0__::func_523(&(Local_47[iVar0 /*5*/].f_1));
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_48[iVar0 /*4*/]) && HUD::DOES_BLIP_EXIST(Local_48[iVar0 /*4*/].f_1))
		{
			if (!VEHICLE::IS_VEHICLE_DRIVEABLE(Local_48[iVar0 /*4*/], false))
			{
				__LIB_0__::func_523(&(Local_48[iVar0 /*4*/].f_1));
			}
		}
		iVar0++;
	}
}

void func_126(int iParam0, int iParam1)//Position - 0x90EF
{
	MISC::CLEAR_BIT(&(Local_47[iParam0 /*5*/].f_2), iParam1);
}

int func_127(int iParam0)//Position - 0x9105
{
	if (iParam0 == 3)
	{
		if (!__LIB_0__::func_121(Local_47[2 /*5*/]))
		{
			return 0;
		}
	}
	if (iParam0 == 5)
	{
		if (!__LIB_0__::func_121(Local_47[4 /*5*/]))
		{
			return 0;
		}
	}
	if (iParam0 == 7)
	{
		if (!__LIB_0__::func_121(Local_47[6 /*5*/]))
		{
			return 0;
		}
	}
	return 1;
}

bool func_128(int iParam0, int iParam1)//Position - 0x9153
{
	return BitTest(Local_47[iParam0 /*5*/].f_2, iParam1);
}

void func_129()//Position - 0x9166
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_48[iVar0 /*4*/]))
		{
			func_130(iVar0);
		}
		iVar0++;
	}
}

void func_130(int iParam0)//Position - 0x9194
{
	if (__LIB_0__::func_121(Local_48[iParam0 /*4*/]))
	{
		switch (iParam0)
		{
			case 5:
				if ((!__LIB_0__::func_121(Local_47[2 /*5*/]) && !__LIB_0__::func_121(Local_47[3 /*5*/])) || !VEHICLE::IS_VEHICLE_DRIVEABLE(Local_48[iParam0 /*4*/], false))
				{
					func_131(iParam0, 0);
				}
				break;
			case 6:
				if ((!__LIB_0__::func_121(Local_47[4 /*5*/]) && !__LIB_0__::func_121(Local_47[5 /*5*/])) || !VEHICLE::IS_VEHICLE_DRIVEABLE(Local_48[iParam0 /*4*/], false))
				{
					func_131(iParam0, 0);
				}
				break;
			case 7:
				if ((!__LIB_0__::func_121(Local_47[6 /*5*/]) && !__LIB_0__::func_121(Local_47[7 /*5*/])) || !VEHICLE::IS_VEHICLE_DRIVEABLE(Local_48[iParam0 /*4*/], false))
				{
					func_131(iParam0, 0);
				}
				break;
			case 3:
				if (!__LIB_0__::func_121(Local_47[0 /*5*/]) || !VEHICLE::IS_VEHICLE_DRIVEABLE(Local_48[iParam0 /*4*/], false))
				{
					if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), Local_48[iParam0 /*4*/], 1) >= 50f)
					{
						func_131(iParam0, 0);
					}
				}
				if (func_154(6))
				{
					func_64(iParam0, PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()), &uLocal_63);
				}
				break;
			case 4:
				if (!__LIB_0__::func_121(Local_47[1 /*5*/]) || !VEHICLE::IS_VEHICLE_DRIVEABLE(Local_48[iParam0 /*4*/], false))
				{
					if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), Local_48[iParam0 /*4*/], 1) >= 50f)
					{
						func_131(iParam0, 0);
					}
				}
				if (func_154(6))
				{
					func_64(iParam0, PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()), &uLocal_64);
				}
				break;
			case 1:
				if (!__LIB_0__::func_121(Local_48[3 /*4*/]) || __LIB_0__::func_76(Local_48[3 /*4*/], Local_48[iParam0 /*4*/], 1) >= 150f)
				{
					func_131(iParam0, 0);
				}
				break;
			case 2:
				if (!__LIB_0__::func_121(Local_48[4 /*4*/]) || __LIB_0__::func_76(Local_48[4 /*4*/], Local_48[iParam0 /*4*/], 1) >= 150f)
				{
					func_131(iParam0, 0);
				}
				break;
			case 0:
				switch (Local_48[iParam0 /*4*/].f_3)
				{
					case 0:
						if (func_96())
						{
							func_111(1);
							__LIB_0__::func_523(&(Local_48[iParam0 /*4*/].f_1));
							Local_48[iParam0 /*4*/].f_3++;
						}
						break;
				}
				break;
		}
	}
	else if (ENTITY::IS_ENTITY_VISIBLE(Local_48[iParam0 /*4*/]))
	{
		func_131(iParam0, 0);
	}
	else
	{
		func_131(iParam0, 1);
	}
}

void func_131(int iParam0, bool bParam1)//Position - 0x9404
{
	if (ENTITY::DOES_ENTITY_EXIST(Local_48[iParam0 /*4*/]))
	{
		__LIB_0__::func_523(&(Local_48[iParam0 /*4*/].f_1));
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_48[iParam0 /*4*/]))
		{
			VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_48[iParam0 /*4*/]);
		}
		if (__LIB_30__::func_910(&(Local_48[iParam0 /*4*/])))
		{
			if (bParam1)
			{
				VEHICLE::DELETE_VEHICLE(&(Local_48[iParam0 /*4*/]));
			}
			else
			{
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Local_48[iParam0 /*4*/]));
			}
		}
		Local_48[iParam0 /*4*/] = 0;
		Local_48[iParam0 /*4*/].f_2 = 0;
		Local_48[iParam0 /*4*/].f_3 = 0;
	}
}

void func_133()//Position - 0x949A
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_47[iVar0 /*5*/]))
		{
			func_134(iVar0);
		}
		iVar0++;
	}
}

void func_134(int iParam0)//Position - 0x94C8
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	float fVar3;
	float fVar4;
	if (__LIB_0__::func_121(Local_47[iParam0 /*5*/]))
	{
		switch (iParam0)
		{
			case 0:
			case 1:
				if (iParam0 == 0)
				{
					iVar0 = 3;
					iVar1 = 4;
				}
				else
				{
					iVar0 = 4;
					iVar1 = 3;
				}
				switch (Local_47[iParam0 /*5*/].f_3)
				{
					case 0:
						Local_47[iParam0 /*5*/].f_4 = MISC::GET_GAME_TIMER();
						if (__LIB_0__::func_76(Local_47[iParam0 /*5*/], PLAYER::PLAYER_PED_ID(), 1) <= 15f)
						{
							PED::SET_IK_TARGET(Local_47[iParam0 /*5*/], 1, PLAYER::PLAYER_PED_ID(), 31086, Local_49, 0, -1, -1);
						}
						break;
					case 1:
						if (__LIB_0__::func_121(Local_48[iVar0 /*4*/]))
						{
							VEHICLE::SET_VEHICLE_USE_MORE_RESTRICTIVE_SPAWN_CHECKS(Local_48[iVar0 /*4*/], true);
							if (__LIB_0__::func_121(Local_48[0 /*4*/]) && !ENTITY::IS_ENTITY_TOUCHING_ENTITY(Local_48[iVar0 /*4*/], Local_48[0 /*4*/]))
							{
								if ((((((MISC::GET_GAME_TIMER() >= iLocal_71 && !func_154(12)) && !ENTITY::IS_ENTITY_AT_COORD(Local_48[iVar0 /*4*/], Local_54, 7f, 7f, 7f, false, true, 0)) && __LIB_0__::func_529(PLAYER::PLAYER_PED_ID(), Local_54, 1) < __LIB_0__::func_76(Local_48[iVar0 /*4*/], PLAYER::PLAYER_PED_ID(), 1)) && !CAM::IS_SPHERE_VISIBLE(Local_54, 7f)) && !CAM::IS_SPHERE_VISIBLE(ENTITY::GET_ENTITY_COORDS(Local_48[iVar0 /*4*/], true), 7f)) && !func_78(Local_54, 8f))
								{
									fVar3 = __LIB_0__::func_670(Local_54, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true));
									MISC::CLEAR_AREA_OF_VEHICLES(Local_54, 8f, false, false, false, false, false, false, 0);
									MISC::CLEAR_AREA_OF_VEHICLES(OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Local_54, fVar3, 0f, -8f, 0f), 8f, false, false, false, false, false, false, 0);
									ENTITY::SET_ENTITY_COORDS(Local_48[iVar0 /*4*/], Local_54, true, false, false, true);
									VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_48[iVar0 /*4*/], 5f);
									ENTITY::SET_ENTITY_HEADING(Local_48[iVar0 /*4*/], fVar3);
									VEHICLE::SET_VEHICLE_ENGINE_ON(Local_48[iVar0 /*4*/], true, true, false);
									VEHICLE::SET_VEHICLE_FORWARD_SPEED(Local_48[iVar0 /*4*/], 30f);
									func_111(5);
									iLocal_83 = iVar0;
									iLocal_67 = MISC::GET_GAME_TIMER() + 5000;
								}
								if (!func_154(12) && ENTITY::IS_ENTITY_AT_COORD(Local_48[iVar0 /*4*/], Local_54, 7f, 7f, 7f, false, true, 0))
								{
									func_111(12);
								}
								if (((MISC::GET_GAME_TIMER() >= iLocal_71 && ENTITY::IS_ENTITY_OCCLUDED(Local_48[iVar0 /*4*/])) && __LIB_0__::func_121(Local_48[iVar1 /*4*/])) && __LIB_0__::func_76(Local_48[iVar0 /*4*/], Local_48[iVar1 /*4*/], 1) >= 20f)
								{
									Var2 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(Local_48[iVar0 /*4*/], ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) };
									if (Var2.f_0 < -3.5f || Var2.f_0 > 3.5f)
									{
										fVar4 = ENTITY::GET_ENTITY_SPEED(Local_48[iVar0 /*4*/]);
										fVar4 = __LIB_0__::func_301(fVar4, 20f, 50f);
										ENTITY::SET_ENTITY_HEADING(Local_48[iVar0 /*4*/], __LIB_0__::func_670(ENTITY::GET_ENTITY_COORDS(Local_48[iVar0 /*4*/], true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)));
										VEHICLE::SET_VEHICLE_FORWARD_SPEED(Local_48[iVar0 /*4*/], fVar4);
									}
								}
								if ((func_128(iParam0, 3) || __LIB_0__::func_76(Local_47[iParam0 /*5*/], PLAYER::PLAYER_PED_ID(), 1) <= 15f) || (__LIB_0__::func_121(Local_48[iVar1 /*4*/]) && __LIB_0__::func_76(Local_48[iVar0 /*4*/], Local_48[iVar1 /*4*/], 1) <= 15f))
								{
									if (__LIB_0__::func_76(Local_47[iParam0 /*5*/], PLAYER::PLAYER_PED_ID(), 1) <= 15f)
									{
										if (!HUD::DOES_BLIP_EXIST(Local_47[iParam0 /*5*/].f_1))
										{
											Local_47[iParam0 /*5*/].f_1 = __LIB_6__::func_850(Local_47[iParam0 /*5*/], 1, 145);
											__LIB_6__::func_834(Local_47[iParam0 /*5*/], "GENERIC_INSULT_HIGH", 13);
										}
									}
									Local_47[iParam0 /*5*/].f_3++;
								}
							}
							else
							{
								if (!HUD::DOES_BLIP_EXIST(Local_47[iParam0 /*5*/].f_1))
								{
									Local_47[iParam0 /*5*/].f_1 = __LIB_6__::func_850(Local_47[iParam0 /*5*/], 1, 145);
									__LIB_6__::func_834(Local_47[iParam0 /*5*/], "GENERIC_INSULT_HIGH", 13);
								}
								Local_47[iParam0 /*5*/].f_3++;
							}
						}
						break;
					case 2:
						if (__LIB_0__::func_121(Local_48[iVar0 /*4*/]))
						{
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_47[iParam0 /*5*/], false);
							TASK::TASK_COMBAT_PED(Local_47[iParam0 /*5*/], PLAYER::PLAYER_PED_ID(), 0, 16);
							Local_47[iParam0 /*5*/].f_3++;
						}
						break;
					case 3:
						if (!HUD::DOES_BLIP_EXIST(Local_47[iParam0 /*5*/].f_1))
						{
							if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), Local_47[iParam0 /*5*/], 1) <= 85f)
							{
								Local_47[iParam0 /*5*/].f_1 = __LIB_6__::func_850(Local_47[iParam0 /*5*/], 1, 145);
							}
						}
						if (func_154(6) || func_154(8))
						{
							if (!PED::IS_PED_IN_ANY_VEHICLE(Local_47[iParam0 /*5*/], false) && __LIB_0__::func_76(Local_47[iParam0 /*5*/], PLAYER::PLAYER_PED_ID(), 1) >= 250f)
							{
								func_136(iParam0, 0);
							}
						}
						else if (__LIB_0__::func_76(Local_47[iParam0 /*5*/], PLAYER::PLAYER_PED_ID(), 1) >= 250f)
						{
							func_136(iParam0, 0);
						}
						break;
				}
				break;
			case 2:
			case 3:
			case 4:
			case 5:
			case 6:
			case 7:
				if (func_154(7))
				{
					if (!PED::IS_PED_IN_COMBAT(Local_47[iParam0 /*5*/], PLAYER::PLAYER_PED_ID()) && !__LIB_0__::func_583(Local_47[iParam0 /*5*/], joaat("SCRIPT_TASK_VEHICLE_CHASE"), 1))
					{
						TASK::TASK_COMBAT_PED(Local_47[iParam0 /*5*/], PLAYER::PLAYER_PED_ID(), 0, 16);
					}
				}
				if (func_154(7))
				{
					if (!PED::IS_PED_IN_ANY_VEHICLE(Local_47[iParam0 /*5*/], false) && __LIB_0__::func_76(Local_47[iParam0 /*5*/], PLAYER::PLAYER_PED_ID(), 1) >= 250f)
					{
						func_136(iParam0, 0);
					}
				}
				else if (func_154(2) && __LIB_0__::func_76(Local_47[iParam0 /*5*/], PLAYER::PLAYER_PED_ID(), 1) >= 250f)
				{
					func_136(iParam0, 0);
				}
				break;
		}
	}
	else
	{
		if (func_128(iParam0, 1))
		{
			PED::SET_PED_CAN_RAGDOLL(Local_47[iParam0 /*5*/], true);
			ENTITY::DETACH_ENTITY(Local_47[iParam0 /*5*/], true, false);
			func_126(iParam0, 1);
		}
		if (!func_128(iParam0, 2))
		{
			if (ENTITY::IS_ENTITY_VISIBLE(Local_47[iParam0 /*5*/]))
			{
				func_136(iParam0, 0);
			}
			else
			{
				func_136(iParam0, 1);
			}
		}
	}
}

void func_136(int iParam0, bool bParam1)//Position - 0x9B04
{
	if (ENTITY::DOES_ENTITY_EXIST(Local_47[iParam0 /*5*/]))
	{
		__LIB_0__::func_523(&(Local_47[iParam0 /*5*/].f_1));
		if ((((__LIB_0__::func_121(Local_47[iParam0 /*5*/]) && ENTITY::IS_ENTITY_ATTACHED(Local_47[iParam0 /*5*/])) && !PED::IS_PED_IN_ANY_VEHICLE(Local_47[iParam0 /*5*/], true)) && !PED::IS_PED_SITTING_IN_ANY_VEHICLE(Local_47[iParam0 /*5*/])) && !PED::IS_PED_GETTING_INTO_A_VEHICLE(Local_47[iParam0 /*5*/]))
		{
			ENTITY::DETACH_ENTITY(Local_47[iParam0 /*5*/], true, true);
		}
		if (bParam1)
		{
			PED::DELETE_PED(&(Local_47[iParam0 /*5*/]));
		}
		else
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_47[iParam0 /*5*/]));
		}
		Local_47[iParam0 /*5*/].f_2 = 0;
	}
}

void func_138()//Position - 0x9BCA
{
	if ((func_154(1) || iLocal_65 > 2) && func_139())
	{
		if (__LIB_0__::func_121(Local_48[0 /*4*/]) && __LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), Local_48[0 /*4*/], 1) >= 250f)
		{
			func_63();
		}
	}
	if (func_139())
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_48[0 /*4*/]) && !__LIB_0__::func_121(Local_48[0 /*4*/]))
		{
			func_63();
		}
	}
}

int func_139()//Position - 0x9C3C
{
	int iVar0;
	int iVar1;
	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 < 8)
	{
		if (__LIB_0__::func_121(Local_47[iVar1 /*5*/]) && HUD::DOES_BLIP_EXIST(Local_47[iVar1 /*5*/].f_1))
		{
			iVar0 = 0;
			iVar1 = 8;
		}
		iVar1++;
	}
	return iVar0;
}

bool func_154(int iParam0)//Position - 0xB87C
{
	return BitTest(iLocal_66, iParam0);
}

void func_200(bool bParam0, bool bParam1)//Position - 0xCF59
{
	func_226();
	func_225();
	func_122(0);
	__LIB_26__::func_550(1, 1, 1, 0);
	__LIB_35__::func_184(0);
	GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
	HUD::DISPLAY_RADAR(true);
	PATHFIND::SET_IGNORE_NO_GPS_FLAG(false);
	__LIB_0__::func_371();
	__LIB_0__::func_371();
	__LIB_0__::func_371();
	if (__LIB_0__::func_121(Local_48[0 /*4*/]))
	{
		VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(Local_48[0 /*4*/], true);
	}
	func_217(bParam1);
	func_216(bParam1);
	PED::REMOVE_RELATIONSHIP_GROUP(iLocal_81);
	__LIB_6__::func_771();
	__LIB_0__::func_296();
	__LIB_36__::func_664(0);
	CAM::DESTROY_ALL_CAMS(false);
	CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
	VEHICLE::SET_RANDOM_TRAINS(true);
	if (bParam0)
	{
		__LIB_41__::func_466(-1);
		SCRIPT::TERMINATE_THIS_THREAD();
	}
}

void func_216(bool bParam0)//Position - 0xD859
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		func_131(iVar0, bParam0);
		iVar0++;
	}
}

void func_217(bool bParam0)//Position - 0xD87C
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		func_136(iVar0, bParam0);
		iVar0++;
	}
}

void func_225()//Position - 0xDA0E
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		__LIB_0__::func_523(&(Local_47[iVar0 /*5*/].f_1));
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		__LIB_0__::func_523(&(Local_48[iVar0 /*4*/].f_1));
		iVar0++;
	}
}

void func_226()//Position - 0xDA54
{
	iLocal_45 = 0;
	iLocal_46 = 0;
	iLocal_65 = 0;
	iLocal_66 = 0;
}

