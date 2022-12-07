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
	char* sLocal_20 = NULL;
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
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	struct<3> Local_45 = { 0, 0, 0 } ;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
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
	sLocal_20 = "NULL";
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
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(11))
	{
		iLocal_43 = 5;
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			switch (iLocal_43)
			{
				case 0:
					func_9();
					break;
				case 1:
					break;
				case 2:
					func_8();
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
					{
						if (MISC::CREATE_INCIDENT_WITH_ENTITY(7, PLAYER::PLAYER_PED_ID(), 2, 3f, &iLocal_47, 0, 0))
						{
							iLocal_46 = MISC::GET_GAME_TIMER();
							iLocal_43 = 5;
						}
					}
					else if (MISC::CREATE_INCIDENT(7, Local_45, 2, 3f, &iLocal_47, 0, 0))
					{
						iLocal_46 = MISC::GET_GAME_TIMER();
						iLocal_43 = 5;
					}
					break;
				case 3:
					func_8();
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
					{
						if ((__LIB_0__::func_292(PLAYER::PLAYER_ID(), 0) && __LIB_7__::func_133(PLAYER::PLAYER_ID()) == 5) && Global_1963926)
						{
							if (Global_1963927 == 0)
							{
								Global_1963927 = 1;
							}
							iLocal_43 = 5;
						}
						else if (MISC::CREATE_INCIDENT_WITH_ENTITY(5, PLAYER::PLAYER_PED_ID(), 2, 3f, &iLocal_47, 0, 0))
						{
							iLocal_46 = MISC::GET_GAME_TIMER();
							iLocal_43 = 5;
						}
					}
					else if (MISC::CREATE_INCIDENT(5, Local_45, 2, 3f, &iLocal_47, 0, 0))
					{
						iLocal_46 = MISC::GET_GAME_TIMER();
						iLocal_43 = 5;
					}
					break;
				case 4:
					func_8();
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
					{
						if (MISC::CREATE_INCIDENT_WITH_ENTITY(3, PLAYER::PLAYER_PED_ID(), 4, 3f, &iLocal_47, 0, 0))
						{
							iLocal_46 = MISC::GET_GAME_TIMER();
							iLocal_43 = 5;
						}
					}
					else if (MISC::CREATE_INCIDENT(3, Local_45, 4, 3f, &iLocal_47, 0, 0))
					{
						if (Global_96938.f_358 == MISC::GET_HASH_KEY("AGENCY_PREP_1") || (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(MISC::GET_HASH_KEY("agency_prep1")) > 0 && __LIB_0__::func_2(0)))
						{
							Global_96938.f_358 = MISC::GET_HASH_KEY("AHP1_TRUCKCALLED");
						}
						else if (__LIB_0__::func_176(67) && !__LIB_0__::func_176(68))
						{
							Global_96868 = 1;
						}
						iLocal_46 = MISC::GET_GAME_TIMER();
						iLocal_43 = 5;
					}
					break;
				case 5:
					if (MISC::GET_GAME_TIMER() > (iLocal_46 + 60000) || !MISC::IS_INCIDENT_VALID(iLocal_47))
					{
						func_1();
					}
					else if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
					{
						if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
						{
							if (MISC::IS_INCIDENT_VALID(iLocal_47))
							{
								MISC::DELETE_INCIDENT(iLocal_47);
							}
						}
					}
					break;
				}
		}
	}
}

void func_1()//Position - 0x27A
{
	iLocal_43 = 0;
	iLocal_44 = 0;
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_8()//Position - 0x37E
{
	if (MISC::GET_GAME_TIMER() > iLocal_46 + 30000)
	{
		iLocal_43 = 5;
	}
}

void func_9()//Position - 0x395
{
	var uVar0;
	switch (iLocal_44)
	{
		case 0:
			iLocal_44 = 1;
			iLocal_46 = MISC::GET_GAME_TIMER();
			break;
		case 1:
			while (!__LIB_10__::func_564())
			{
				SYSTEM::WAIT(0);
				if (__LIB_11__::func_790() == 3)
				{
					iLocal_43 = 3;
				}
				if (__LIB_11__::func_790() == 4)
				{
					iLocal_43 = 4;
				}
				if (__LIB_11__::func_790() == 5)
				{
					iLocal_43 = 2;
				}
				if (MISC::GET_GAME_TIMER() > iLocal_46 + 30000)
				{
					iLocal_46 = MISC::GET_GAME_TIMER();
					__LIB_6__::func_849(0);
				}
			}
			if (iLocal_43 == 0)
			{
				iLocal_43 = 5;
			}
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				func_10(PLAYER::PLAYER_PED_ID(), &Local_45, &uVar0);
			}
			iLocal_46 = MISC::GET_GAME_TIMER();
			break;
	}
}

void func_10(int iParam0, var* uParam1, var uParam2)//Position - 0x42E
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	struct<3> Var6;
	float fVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	var uVar16;
	struct<3> Var17;
	var uVar18;
	fVar12 = 5f;
	iVar0 = 1;
	iVar13 = 0;
	while (iVar13 < 2)
	{
		switch (iVar13)
		{
			case 0:
				PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_WITH_HEADING(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), iVar0, uParam1, &fVar10, &iVar1, 5, 3f, 0f);
				PATHFIND::GET_CLOSEST_ROAD(*uParam1, 1f, 1, &uVar4, &uVar5, &uVar2, &uVar3, &fVar7, false);
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), -3044.66f, 596.43f, 6.58f, true) < 25f)
				{
					*uParam1 = { -3031.38f, 605.32f, 6.86f };
				}
				Var6 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) - ENTITY::GET_ENTITY_COORDS(iParam0, true) };
				fVar8 = MISC::GET_HEADING_FROM_VECTOR_2D(Var6.f_0, Var6.f_1);
				fVar9 = (fVar10 + 180f);
				if (fVar9 > 360f)
				{
					fVar9 = (fVar9 - 360f);
				}
				if (__LIB_4__::func_230(fVar8, fVar10, 90f))
				{
					*uParam2 = fVar10;
				}
				else
				{
					*uParam2 = fVar9;
				}
				if (fVar7 < 0f)
				{
					fVar11 = 0f;
				}
				else if (PATHFIND::GET_VEHICLE_NODE_IS_SWITCHED_OFF(PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_ID(*uParam1, 1, 1, 3f, 0f)))
				{
					fVar11 = 0f;
				}
				else
				{
					fVar11 = (fVar12 * SYSTEM::TO_FLOAT((iVar1 / 2)));
					if (fVar11 == 0f)
					{
						fVar11 = (fVar11 + fVar12);
					}
					if (iVar1 == 5)
					{
						fVar11 = (fVar11 + fVar12);
					}
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), 294f, -895f, 28f, true) < 25f || MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), -713.01f, -819.64f, 22.63f, true) < 25f)
					{
						fVar11 = (fVar11 + 5f);
					}
					else
					{
						fVar11 = (fVar11 + 3.75f);
					}
					fVar11 = (fVar11 + (fVar7 / 2f));
				}
				if (SYSTEM::VDIST(OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(*uParam1, *uParam2, fVar11, 0f, 0f), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) > SYSTEM::VDIST(OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(*uParam1, *uParam2, -fVar11, 0f, 0f), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)))
				{
					fVar11 = -fVar11;
				}
				*uParam1 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(*uParam1, *uParam2, fVar11, 0f, 0f) };
				iVar14 = SHAPETEST::START_SHAPE_TEST_CAPSULE(*uParam1 + FtoV((uParam1->f_2 + 4.5f)), *uParam1 + Vector(4.5f, 0.5f, 0.5f), 2.5f, 1, 0, 4);
				iVar13++;
				break;
			case 1:
				if (iVar0 <= 2)
				{
					if (SHAPETEST::GET_SHAPE_TEST_RESULT(iVar14, &iVar15, &Var17, &uVar16, &uVar18) == 2)
					{
						if (iVar15 != 0)
						{
							if (Var17.f_2 > (uParam1->f_2 + 8.5f))
							{
								iVar13++;
							}
							else
							{
								iVar0++;
								iVar13 = 0;
							}
						}
						else
						{
							iVar13++;
						}
					}
				}
				else
				{
					iVar13++;
				}
				break;
			case 2:
				break;
		}
	}
}

