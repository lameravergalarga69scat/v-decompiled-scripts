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
	int iLocal_29 = 0;
	int iLocal_30 = 0;
	float fLocal_31 = 0f;
	struct<3> Local_32 = { 0, 0, 0 } ;
	int iLocal_33 = 0;
	int iLocal_34 = 0;
	bool bLocal_35 = 0;
	int iLocal_36[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_37 = 0;
	bool bLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	struct<3> Local_42 = { 0, 0, 0 } ;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	struct<3> Local_45 = { 0, 0, 0 } ;
	float fLocal_46 = 0f;
	int iLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49[5] = { 0, 0, 0, 0, 0 };
	var uLocal_50[5] = { 0, 0, 0, 0, 0 };
	var uLocal_51 = 5;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
#endregion
void __EntryFunction__()//Position - 0x0
{
	int iVar0;
	int iVar1;
	int iVar2;
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
	fLocal_31 = 10000000f;
	Local_32 = { 2134.06f, 4780.69f, 41.664f };
	iLocal_33 = -1;
	Local_42 = { 2136.133f, 4780.5635f, 39.9702f };
	Local_45 = { 2149.737f, 4798.4717f, 40.1071f };
	fLocal_46 = 55.4847f;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(82))
	{
		func_191();
	}
	__LIB_0__.func_513(17);
	func_189();
	iVar0 = 0;
	iVar1 = 0;
	iVar2 = 0;
	while (true)
	{
		if (__LIB_11__.func_330() == 309)
		{
			bLocal_35 = true;
		}
		else
		{
			bLocal_35 = false;
		}
		if (func_175())
		{
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				fLocal_31 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_32);
			}
			func_173(&iVar1);
			func_31(&iVar2);
			if (iLocal_39 > 3)
			{
				if (fLocal_31 < 600f)
				{
					if (__LIB_6__.func_854(0) == 0 && (MISC::GET_GAME_TIMER() - iLocal_59) > 2000)
					{
						iLocal_59 = MISC::GET_GAME_TIMER();
						func_3();
					}
				}
			}
			iVar0 = 0;
		}
		else
		{
			if (!bLocal_38)
			{
				if (__LIB_10__.func_861(105))
				{
					__LIB_10__.func_604(105, 0, 0);
					Global_113386.f_19983.f_14 = 0;
				}
			}
			else
			{
				Global_113386.f_19983.f_14 = 0;
			}
			if (!bLocal_38)
			{
				if (__LIB_10__.func_861(106))
				{
					__LIB_10__.func_604(106, 0, 0);
					Global_113386.f_19983.f_13 = 0;
				}
			}
			else
			{
				Global_113386.f_19983.f_13 = 0;
			}
			iVar0 = 1000;
		}
		SYSTEM::WAIT(iVar0);
	}
}

void func_3()//Position - 0x2E0
{
	__LIB_36__.func_86(&(Global_103950.f_2890), &Global_103950, 0, 1, 1, 0);
}

void func_31(int iParam0)//Position - 0x14D4
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<91> Var4;
	int iVar5;
	bVar0 = false;
	if (iLocal_43 != 9)
	{
		if (!Global_113386.f_19983.f_13)
		{
			if (Global_113386.f_19983.f_1 == 0 && Global_113386.f_19983.f_2 == 0)
			{
				if (!__LIB_0__.func_517(Global_113386.f_19983, 32))
				{
					__LIB_18__.func_203("MG_TRAF_AVAIL" /* GXT: Trevor can now do air and ground trafficking missions, available at ~BLIP_ARMS_DEALING_AIR~ and ~BLIP_ARMS_DEALING~ */, 0, 0, -1, 10000, 7, 0, 0, 0);
					__LIB_6__.func_896(&(Global_113386.f_19983), 32);
				}
			}
			__LIB_10__.func_604(106, 1, 0);
			Global_113386.f_19983.f_13 = 1;
			bVar0 = true;
		}
		else
		{
			bVar0 = true;
		}
	}
	else
	{
		__LIB_10__.func_604(106, 0, 0);
		Global_113386.f_19983.f_13 = 0;
	}
	if (iLocal_43 != 1 && iLocal_43 != 8)
	{
		if (func_166() && !*iParam0)
		{
			func_165(0);
			iLocal_43 = 1;
		}
	}
	switch (iLocal_43)
	{
		case 0:
			iLocal_43 = 1;
			break;
		case 1:
			if (!func_166())
			{
				if (fLocal_31 < 50625f)
				{
					iLocal_43 = 2;
				}
				else if (bLocal_35)
				{
					iLocal_43 = 2;
				}
			}
			break;
		case 2:
			STREAMING::REQUEST_MODEL(joaat("dune"));
			iLocal_43 = 3;
			break;
		case 3:
			if (STREAMING::HAS_MODEL_LOADED(joaat("dune")))
			{
				MISC::CLEAR_AREA_OF_VEHICLES(Local_45, 4f, false, false, false, false, false, false, 0);
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_44))
				{
					VEHICLE::DELETE_VEHICLE(&iLocal_44);
				}
				iLocal_44 = VEHICLE::CREATE_VEHICLE(func_164(), Local_45, fLocal_46, true, true, false);
				AUDIO::SET_VEHICLE_RADIO_ENABLED(iLocal_44, false);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_164());
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_44))
				{
					if (VEHICLE::DOES_EXTRA_EXIST(iLocal_44, 1))
					{
						VEHICLE::SET_VEHICLE_EXTRA(iLocal_44, 1, true);
					}
					if (VEHICLE::DOES_EXTRA_EXIST(iLocal_44, 2))
					{
						VEHICLE::SET_VEHICLE_EXTRA(iLocal_44, 2, false);
					}
					if (VEHICLE::DOES_EXTRA_EXIST(iLocal_44, 3))
					{
						VEHICLE::SET_VEHICLE_EXTRA(iLocal_44, 3, false);
					}
					VEHICLE::SET_VEHICLE_COLOURS(iLocal_44, 0, 0);
				}
				iLocal_43 = 4;
			}
			break;
		case 5:
			if (fLocal_31 >= 50625f && !*iParam0)
			{
				func_165(0);
				iLocal_43 = 1;
				return;
			}
			break;
		case 4:
			func_163();
			if (!bLocal_35)
			{
				if (fLocal_31 >= 50625f && !*iParam0)
				{
					func_165(0);
					iLocal_43 = 1;
					return;
				}
			}
			if (!bVar0 && !*iParam0)
			{
				if (!bVar0)
				{
				}
				if (!*iParam0)
				{
				}
				if (!iLocal_47)
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_28, false))
					{
						iVar1 = PED::GET_VEHICLE_PED_IS_USING(iLocal_28);
						if (iVar1 == iLocal_44)
						{
							iLocal_47 = 1;
							ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_44);
							iLocal_43 = 9;
						}
					}
				}
				return;
			}
			if (*iParam0)
			{
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false) && !ENTITY::IS_ENTITY_DEAD(iLocal_44, false))
				{
					PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_44, -1);
				}
			}
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false) && !ENTITY::IS_ENTITY_DEAD(iLocal_44, false))
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_44, true))
				{
					__LIB_0__.func_186();
				}
			}
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_44, false) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					iVar2 = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
					if (iVar2 == iLocal_44)
					{
						if (SYSTEM::VDIST2(Local_45, ENTITY::GET_ENTITY_COORDS(iLocal_28, true)) < 100f)
						{
							SCRIPT::REQUEST_SCRIPT("Traffick_Ground");
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_29) && !ENTITY::IS_ENTITY_DEAD(iLocal_29, false))
							{
								if (ENTITY::GET_ENTITY_MODEL(iLocal_29) != joaat("dune") && ENTITY::GET_ENTITY_MODEL(iLocal_29) != joaat("cuban800"))
								{
									__LIB_39__.func_924(iLocal_29, 2142.245f, 4823.463f, 40.2769f, 118.4428f, 24, 0);
								}
								else if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
								{
									VEHICLE::SET_PLAYERS_LAST_VEHICLE(iLocal_29);
								}
							}
							iLocal_43 = 6;
						}
					}
				}
			}
			break;
		case 6:
			if (SCRIPT::HAS_SCRIPT_LOADED("Traffick_Ground"))
			{
				iVar3 = 0;
				if (*iParam0)
				{
					iVar3 = 1;
				}
				else
				{
					iVar3 = __LIB_26__.func_296(&iLocal_33, 6, 9, 0, 0);
					iLocal_37 = 1;
				}
				if (iVar3 == 1)
				{
					if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
					{
						PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
					}
					if (!*iParam0)
					{
						__LIB_42__.func_734("Traffick_Ground", 0);
					}
					Var4 = -1;
					Var4.f_8 = 4;
					Var4.f_13 = 2;
					Var4.f_16 = 4;
					Var4.f_29 = 4;
					Var4.f_61 = 9;
					Var4.f_71 = 4;
					Var4.f_76 = 8;
					Var4.f_85 = 4;
					Var4.f_90 = 6;
					iLocal_30 = SYSTEM::START_NEW_SCRIPT_WITH_ARGS("Traffick_Ground", &Var4, 97, 51000);
					__LIB_29__.func_780(16);
					SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("Traffick_Ground");
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_44, true, false);
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_44);
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						if (Global_44238 == 1)
						{
							__LIB_32__.func_82(PLAYER::PLAYER_PED_ID());
						}
					}
					iLocal_47 = 0;
					iLocal_43 = 7;
				}
				else if (iVar3 == 0)
				{
					iLocal_37 = 0;
					func_165(0);
					iLocal_43 = 9;
				}
			}
			break;
		case 7:
			if (!SCRIPT::IS_THREAD_ACTIVE(iLocal_30))
			{
				iLocal_43 = 9;
				if (__LIB_0__.func_517(Global_112037, 2))
				{
					iLocal_43 = 8;
				}
				else
				{
					__LIB_10__.func_865(&iLocal_33);
					__LIB_35__.func_897();
					iLocal_34 = 1;
					iVar5 = __LIB_13__.func_95();
					__LIB_32__.func_437(&iVar5, 0, 0, 3, 0, 0, 0);
					Global_113386.f_19983.f_12 = iVar5;
					__LIB_10__.func_604(106, 0, 0);
					Global_113386.f_19983.f_13 = 0;
				}
				*iParam0 = 0;
				__LIB_7__.func_204(&Global_112037, 2);
			}
			break;
		case 8:
			if (Global_100441 == 10)
			{
				if (Global_100475)
				{
					*iParam0 = 1;
					SCRIPT::REQUEST_SCRIPT("Traffick_Ground");
					iLocal_43 = 2;
				}
				else
				{
					*iParam0 = 0;
					iLocal_43 = 2;
				}
			}
			else if (Global_100441 == 13)
			{
				__LIB_10__.func_865(&iLocal_33);
				__LIB_35__.func_897();
				*iParam0 = 0;
				iLocal_43 = 2;
			}
			break;
		case 9:
			if (fLocal_31 >= 50625f && __LIB_32__.func_438(Global_113386.f_19983.f_12))
			{
				func_165(0);
				iLocal_43 = 1;
			}
			break;
		default:
			break;
	}
}

void func_163()//Position - 0xF015
{
	int iVar0;
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_29))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_32) < 2500f)
			{
				iLocal_29 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_29))
				{
					iVar0 = ENTITY::GET_ENTITY_MODEL(iLocal_29);
					if (iVar0 == joaat("dune"))
					{
					}
				}
			}
		}
	}
}

int func_164()//Position - 0xF06F
{
	return joaat("dune");
}

void func_165(bool bParam0)//Position - 0xF07C
{
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("dune"));
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_44))
	{
		if (bParam0)
		{
			VEHICLE::DELETE_VEHICLE(&iLocal_44);
		}
		else
		{
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_44);
		}
	}
}

int func_166()//Position - 0xF0AA
{
	if (__LIB_6__.func_854(9))
	{
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("trevor2")) == 1)
		{
			if (!iLocal_36[0])
			{
				iLocal_36[0] = 1;
			}
			return 0;
		}
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("finale_heist2b")) == 1)
		{
			if (!iLocal_36[1])
			{
				iLocal_36[1] = 1;
			}
			return 0;
		}
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("traffick_air")) == 1)
		{
			if (!iLocal_36[2])
			{
				iLocal_36[2] = 1;
			}
			return 0;
		}
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("traffick_ground")) == 1)
		{
			if (!iLocal_36[3])
			{
				iLocal_36[3] = 1;
			}
			return 0;
		}
		if (Global_100475)
		{
			return 0;
		}
		if (iLocal_33 != -1)
		{
			return 0;
		}
		if (__LIB_11__.func_330() == 309)
		{
			return 0;
		}
		return 1;
	}
	return 0;
}

void func_173(int iParam0)//Position - 0xF49E
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	bVar0 = false;
	if (iLocal_39 != 9)
	{
		if (!Global_113386.f_19983.f_14)
		{
			__LIB_10__.func_604(105, 1, 0);
			Global_113386.f_19983.f_14 = 1;
			bVar0 = true;
		}
		else
		{
			bVar0 = true;
		}
	}
	else
	{
		__LIB_10__.func_604(105, 0, 0);
		Global_113386.f_19983.f_14 = 0;
	}
	if (iLocal_39 != 1 && iLocal_39 != 8)
	{
		if (func_166() && !*iParam0)
		{
			func_174(0);
			iLocal_39 = 1;
		}
	}
	switch (iLocal_39)
	{
		case 0:
			iLocal_39 = 1;
			break;
		case 1:
			if (!func_166())
			{
				if (fLocal_31 < 50625f)
				{
					iLocal_39 = 2;
				}
				else if (bLocal_35)
				{
					iLocal_39 = 2;
				}
			}
			break;
		case 2:
			STREAMING::REQUEST_MODEL(joaat("cuban800"));
			iLocal_39 = 3;
			break;
		case 3:
			STREAMING::REQUEST_MODEL(joaat("cuban800"));
			if (STREAMING::HAS_MODEL_LOADED(joaat("cuban800")))
			{
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_40))
				{
					MISC::CLEAR_AREA_OF_VEHICLES(Local_42, 8f, false, false, false, false, false, false, 0);
					iLocal_40 = VEHICLE::CREATE_VEHICLE(joaat("cuban800"), Local_42, 25.29f, true, true, false);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("cuban800"));
					VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(iLocal_40, 2);
					__LIB_6__.func_896(&(Global_113386.f_19983), 128);
					iLocal_39 = 4;
				}
				else
				{
					iLocal_39 = 4;
				}
			}
			break;
		case 4:
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_40))
			{
				if (ENTITY::IS_ENTITY_DEAD(iLocal_40, false) || ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
				{
					iLocal_39 = 9;
					return;
				}
			}
			if (__LIB_6__.func_854(9))
			{
				if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("traffick_ground")) == 1)
				{
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_40, false))
					{
						VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_40, 2);
						return;
					}
				}
			}
			else if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("traffick_ground")) == 0)
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_40, false))
				{
					VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_40, 1);
				}
			}
			if (!bLocal_35)
			{
				if (fLocal_31 >= 50625f && !*iParam0)
				{
					func_174(0);
					iLocal_39 = 1;
					return;
				}
			}
			if (!bVar0 && !*iParam0)
			{
				if (!iLocal_41)
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_28, false))
					{
						iVar1 = PED::GET_VEHICLE_PED_IS_USING(iLocal_28);
						if (iVar1 == iLocal_40)
						{
							iLocal_41 = 1;
							ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_40);
							iLocal_39 = 9;
						}
					}
				}
			}
			if (*iParam0)
			{
				PED::SET_PED_INTO_VEHICLE(iLocal_28, iLocal_40, -1);
			}
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false) && !ENTITY::IS_ENTITY_DEAD(iLocal_40, false))
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_40, true))
				{
					__LIB_0__.func_186();
				}
			}
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					iVar2 = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
					if (iVar2 == iLocal_40)
					{
						SCRIPT::REQUEST_SCRIPT("Traffick_Air");
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_29) && !ENTITY::IS_ENTITY_DEAD(iLocal_29, false))
						{
							if (ENTITY::GET_ENTITY_MODEL(iLocal_29) != joaat("dune") && ENTITY::GET_ENTITY_MODEL(iLocal_29) != joaat("cuban800"))
							{
								if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_29, 2137.1204f, 4799.97f, 39.678535f, 2116.64f, 4790.417f, 45.452946f, 25f, false, true, 0))
								{
									__LIB_39__.func_924(iLocal_29, 2142.245f, 4823.463f, 40.2769f, 118.4428f, 24, 0);
								}
							}
							else if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
							{
								VEHICLE::SET_PLAYERS_LAST_VEHICLE(iLocal_29);
							}
						}
						iLocal_39 = 6;
					}
				}
			}
			break;
		case 6:
			if (SCRIPT::HAS_SCRIPT_LOADED("Traffick_Air"))
			{
				iVar3 = 0;
				if (*iParam0)
				{
					iVar3 = 1;
				}
				else
				{
					iVar3 = __LIB_26__.func_296(&iLocal_33, 6, 9, 0, 0);
					iLocal_37 = 1;
				}
				if (iVar3 == 1)
				{
					if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
					{
						PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
					}
					if (!*iParam0)
					{
						__LIB_42__.func_734(SCRIPT::GET_THIS_SCRIPT_NAME(), 0);
					}
					iLocal_30 = SYSTEM::START_NEW_SCRIPT("Traffick_Air", 51000);
					__LIB_29__.func_780(15);
					SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("Traffick_Air");
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_40);
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						if (Global_44238 == 1)
						{
							__LIB_32__.func_82(PLAYER::PLAYER_PED_ID());
						}
					}
					iLocal_41 = 0;
					iLocal_39 = 7;
				}
				else if (iVar3 == 0)
				{
					iLocal_37 = 0;
					func_174(0);
					iLocal_39 = 9;
				}
			}
			break;
		case 7:
			if (!SCRIPT::IS_THREAD_ACTIVE(iLocal_30))
			{
				if (__LIB_0__.func_517(Global_112037, 1))
				{
					iLocal_39 = 8;
				}
				else
				{
					__LIB_10__.func_865(&iLocal_33);
					__LIB_35__.func_897();
					uVar4 = __LIB_13__.func_95();
					__LIB_32__.func_437(&uVar4, 0, 0, 3, 0, 0, 0);
					Global_113386.f_19983.f_11 = uVar4;
					__LIB_10__.func_604(105, 0, 0);
					Global_113386.f_19983.f_14 = 0;
					iLocal_39 = 9;
				}
				*iParam0 = 0;
				__LIB_7__.func_204(&Global_112037, 1);
			}
			break;
		case 8:
			if (Global_100441 == 10)
			{
				if (Global_100475)
				{
					*iParam0 = 1;
					if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
					{
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 2136.4456f, 4791.483f, 39.9702f, true, false, false, true);
						}
					}
					STREAMING::REQUEST_MODEL(joaat("cuban800"));
					SCRIPT::REQUEST_SCRIPT("Traffick_Air");
					if (STREAMING::HAS_MODEL_LOADED(joaat("cuban800")))
					{
						MISC::CLEAR_AREA_OF_VEHICLES(Local_42, 8f, false, false, false, false, false, false, 0);
						iLocal_40 = VEHICLE::CREATE_VEHICLE(joaat("cuban800"), Local_42, 25.29f, true, true, false);
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("cuban800"));
						iLocal_39 = 3;
					}
				}
				else
				{
					*iParam0 = 0;
					iLocal_39 = 1;
				}
			}
			else if (Global_100441 == 13)
			{
				__LIB_10__.func_865(&iLocal_33);
				__LIB_35__.func_897();
				*iParam0 = 0;
				iLocal_39 = 1;
			}
			break;
		case 9:
			if (fLocal_31 >= 50625f && __LIB_32__.func_438(Global_113386.f_19983.f_11))
			{
				func_174(0);
				iLocal_39 = 1;
			}
			break;
		default:
			break;
	}
}

void func_174(bool bParam0)//Position - 0xF9EB
{
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("cuban800"));
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_40))
	{
		if (bParam0)
		{
			VEHICLE::DELETE_VEHICLE(&iLocal_40);
		}
		else
		{
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_40);
		}
	}
	if (__LIB_0__.func_517(Global_113386.f_19983, 128))
	{
		__LIB_7__.func_204(&(Global_113386.f_19983), 128);
	}
	iLocal_41 = 0;
}

int func_175()//Position - 0xFA39
{
	if (!func_186())
	{
		return 0;
	}
	if (!iLocal_37)
	{
		if (__LIB_11__.func_330() == 309)
		{
			return 1;
		}
		if (!__LIB_6__.func_763(9))
		{
			return 0;
		}
	}
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("traffick_ground")) == 1 || SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("traffick_air")) == 1)
	{
		return 1;
	}
	iLocal_28 = PLAYER::PLAYER_PED_ID();
	if (ENTITY::IS_ENTITY_DEAD(iLocal_28, false))
	{
	}
	if (__LIB_0__.func_134())
	{
		return 1;
	}
	if (__LIB_18__.func_173() != 2)
	{
		return 0;
	}
	if (!__LIB_32__.func_573(6))
	{
		if (PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()))
		{
			bLocal_38 = true;
		}
		if (!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()))
		{
			bLocal_38 = true;
		}
		if (PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0))
		{
		}
		if (!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()))
		{
		}
		if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
		{
		}
		if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
		{
		}
		if (ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()))
		{
		}
		if (PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()))
		{
		}
		if (PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))
		{
		}
		if (PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true))
		{
		}
		if (PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()))
		{
		}
		if (Global_112433)
		{
		}
		if (Global_31962)
		{
		}
		if (__LIB_0__.func_497())
		{
		}
		if (__LIB_0__.func_191(8, -1))
		{
		}
		if (__LIB_0__.func_511())
		{
			return 1;
		}
		return 0;
	}
	else
	{
		bLocal_38 = false;
	}
	return 1;
}

int func_186()//Position - 0x103BD
{
	if (Global_113386.f_9085)
	{
		return (__LIB_0__.func_573(0, 15) && __LIB_0__.func_573(0, 16));
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_189()//Position - 0x1045E
{
	if (!iLocal_58)
	{
		iLocal_57 = PED::ADD_SCENARIO_BLOCKING_AREA(Vector(40.073f, 4788.5586f, 2157.109f) - Vector(25f, 25f, 25f), Vector(40.073f, 4788.5586f, 2157.109f) + Vector(25f, 25f, 25f), false, true, true, true);
		iLocal_58 = 1;
	}
}

void func_191()//Position - 0x1050E
{
	if (iLocal_57 != 0)
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_57, false);
	}
	func_174(1);
	func_165(1);
	func_194();
	__LIB_20__.func_578();
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_194()//Position - 0x105FE
{
	int iVar0;
	iLocal_34 = 0;
	WEAPON::REMOVE_WEAPON_ASSET(joaat("WEAPON_COMBATPISTOL"));
	WEAPON::REMOVE_WEAPON_ASSET(joaat("WEAPON_SMG"));
	WEAPON::REMOVE_WEAPON_ASSET(joaat("WEAPON_STICKYBOMB"));
	WEAPON::REMOVE_WEAPON_ASSET(joaat("WEAPON_ASSAULTSHOTGUN"));
	WEAPON::REMOVE_WEAPON_ASSET(joaat("WEAPON_RPG"));
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (OBJECT::DOES_PICKUP_EXIST(uLocal_50[iVar0]))
		{
			OBJECT::REMOVE_PICKUP(uLocal_50[iVar0]);
		}
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_49[iVar0]))
		{
			OBJECT::DELETE_OBJECT(&(uLocal_49[iVar0]));
		}
		iVar0++;
	}
}

