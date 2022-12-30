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
	var uLocal_62 = 0;
	int iLocal_63 = 0;
	var uLocal_64 = 0;
	struct<2> Local_65[32];
	struct<47> Local_66 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<376> Local_67 = { 0, 363, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	iLocal_63 = -1;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_621();
	}
	else
	{
		func_619();
	}
	while (true)
	{
		__LIB_0__::func_933();
		if (__LIB_0__::func_959())
		{
			func_619();
		}
		if (func_608())
		{
			func_619();
		}
		func_1();
	}
}

void func_1()//Position - 0xAB
{
	switch (Local_66.f_46)
	{
		case 0:
			if (func_601(&(Local_66.f_10)) && !func_600())
			{
				func_598(&Local_66, 1);
			}
			break;
		case 1:
			func_388();
			break;
		case 2:
			func_372();
			break;
		case 3:
			func_367();
			break;
		case 4:
			func_43();
			break;
		case 5:
			func_16();
			break;
	}
	func_6();
	func_2();
}

void func_2()//Position - 0x12A
{
	int iVar0;
	int iVar1;
	iVar0 = PLAYER::PLAYER_ID();
	if (iVar0 == -1)
	{
		return;
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_65[iVar0 /*2*/].f_1))
	{
		iVar1 = NETWORK::NET_TO_VEH(Local_65[iVar0 /*2*/].f_1);
		if (ENTITY::DOES_ENTITY_EXIST(iVar1) && !ENTITY::IS_ENTITY_DEAD(iVar1, false))
		{
			if (!__LIB_1__::func_461(iVar1, 1))
			{
				if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TRAILER(iVar1))
				{
					if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar1))
					{
						VEHICLE::DETACH_VEHICLE_FROM_TRAILER(iVar1);
					}
					else
					{
						NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(iVar1);
					}
				}
				else if (__LIB_15__::func_616(iVar1))
				{
					if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar1))
					{
						VEHICLE::DETACH_VEHICLE_FROM_ANY_CARGOBOB(iVar1);
					}
					else
					{
						NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(iVar1);
					}
				}
				else if (ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(iVar1))
				{
					if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar1))
					{
						ENTITY::DETACH_ENTITY(iVar1, true, true);
					}
					else
					{
						NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(iVar1);
					}
				}
			}
		}
	}
}

void func_6()//Position - 0x2C5
{
	func_15();
	func_7();
	if (Local_66.f_8 >= 32)
	{
		Local_66.f_8 = 0;
	}
}

void func_7()//Position - 0x2E3
{
	int iVar0;
	if (Local_66.f_8 != -1)
	{
		if (func_13())
		{
			if (((ENTITY::DOES_ENTITY_EXIST(Local_66.f_12[Local_66.f_8]) && (!ENTITY::IS_ENTITY_DEAD(Local_66.f_12[Local_66.f_8], false) || ENTITY::IS_ENTITY_IN_WATER(Local_66.f_12[Local_66.f_8]))) && __LIB_2__::func_925(Local_66.f_12[Local_66.f_8], 1, 0, 0, 0, 0, 1, 0, 1)) && !PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_66.f_12[Local_66.f_8], false))
			{
				iVar0 = Local_66.f_12[Local_66.f_8];
				if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
				{
					if (__LIB_2__::func_613(iVar0, &(Local_66.f_9)))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
						{
							VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_ALL_PLAYERS(iVar0, true);
							VEHICLE::LOCK_DOORS_WHEN_NO_LONGER_NEEDED(iVar0);
						}
						NETWORK::NETWORK_FADE_OUT_ENTITY(iVar0, false, true);
						VEHICLE::DELETE_VEHICLE(&iVar0);
					}
				}
			}
		}
	}
}

int func_13()//Position - 0x5F6
{
	if (!__LIB_0__::func_156(Local_66.f_8, 0, 1))
	{
		return 1;
	}
	if (__LIB_0__::func_121(Local_66.f_12[Local_66.f_8]) && ENTITY::IS_ENTITY_IN_WATER(Local_66.f_12[Local_66.f_8]))
	{
		return 1;
	}
	return 0;
}

void func_15()//Position - 0x65A
{
	int iVar0;
	if (Local_66.f_8 != -1)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_65[Local_66.f_8 /*2*/].f_1))
		{
			iVar0 = NETWORK::NET_TO_VEH(Local_65[Local_66.f_8 /*2*/].f_1);
			if (!ENTITY::IS_ENTITY_DEAD(iVar0, false))
			{
				Local_66.f_12[Local_66.f_8] = iVar0;
			}
		}
	}
}

void func_16()//Position - 0x6A2
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (BitTest(Local_66.f_0, 1))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			if (func_42(iVar0))
			{
				if (__LIB_4__::func_987(iVar0))
				{
					ENTITY::SET_ENTITY_INVINCIBLE(iVar0, false);
					__LIB_1__::func_376(PLAYER::PLAYER_ID(), 1, 0, 0);
					if (HUD::DOES_BLIP_EXIST(Local_66.f_45))
					{
						HUD::REMOVE_BLIP(&(Local_66.f_45));
					}
					Local_66.f_0 = 0;
					NETWORK::RESERVE_NETWORK_MISSION_VEHICLES((NETWORK::GET_NUM_RESERVED_MISSION_VEHICLES(false, 0) - 1));
					func_24();
				}
				else
				{
					return;
				}
			}
			else
			{
				return;
			}
		}
	}
	else
	{
		iVar1 = PLAYER::PLAYER_ID();
		if (iVar1 != -1 && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_65[iVar1 /*2*/].f_1))
		{
			iVar2 = NETWORK::NET_TO_VEH(Local_65[iVar1 /*2*/].f_1);
			if (ENTITY::IS_ENTITY_DEAD(iVar2, false) || ENTITY::IS_ENTITY_IN_WATER(iVar2))
			{
				if (HUD::DOES_BLIP_EXIST(Local_66.f_45))
				{
					HUD::REMOVE_BLIP(&(Local_66.f_45));
				}
			}
		}
		Local_66.f_0 = 0;
		__LIB_1__::func_376(PLAYER::PLAYER_ID(), 1, 0, 0);
		func_24();
	}
	if (__LIB_0__::func_112())
	{
		if (Local_66.f_4 != 0)
		{
			if (Local_66.f_4 == 1)
			{
				__LIB_1__::func_34(__LIB_3__::func_534());
			}
			Local_66.f_4 = 0;
		}
	}
	func_598(&Local_66, 0);
	Local_66.f_5 = 0;
	Local_66.f_6 = 0;
	Local_66.f_7 = 0;
}

void func_24()//Position - 0xA11
{
	int iVar0;
	Local_66.f_3 = 0;
	Local_66.f_2 = 0;
	Local_67.f_370 = 0;
	Local_67.f_373 = 0;
	Local_67.f_367 = 0;
	Local_67.f_368 = 0;
	Local_67.f_365 = 0;
	Local_67.f_375 = 0;
	Local_67.f_366 = 0;
	Local_67.f_369 = 0;
	iVar0 = 0;
	while (iVar0 <= 362)
	{
		Local_67.f_1[iVar0] = 0;
		iVar0++;
	}
	Local_67.f_0 = 0;
	__LIB_0__::clearF_1Prop(&(Local_67.f_371));
}

int func_42(int iParam0)//Position - 0x124F
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("Player_Vehicle", 3))
		{
			if (DECORATOR::DECOR_EXIST_ON(iParam0, "Player_Vehicle"))
			{
				if (DECORATOR::DECOR_GET_INT(iParam0, "Player_Vehicle") == NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(PLAYER::PLAYER_ID()))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_43()//Position - 0x128B
{
	int iVar0;
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		func_598(&Local_66, 5);
		return;
	}
	if (iVar0 != NETWORK::NET_TO_VEH(Local_65[PLAYER::PLAYER_ID() /*2*/].f_1))
	{
		return;
	}
	if (__LIB_0__::func_121(iVar0) && ENTITY::IS_ENTITY_IN_WATER(iVar0))
	{
		if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar0, false))
		{
			TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
			__LIB_1__::func_376(PLAYER::PLAYER_ID(), 1, 0, 0);
		}
		func_598(&Local_66, 5);
		return;
	}
	if (func_55(iVar0, &Local_67, &(Local_66.f_4), &(Local_66.f_5), &(Local_66.f_6), &(Local_66.f_7), 0, 1, 0, 0, 0))
	{
		if (Local_66.f_7 == 3)
		{
			TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
			func_598(&Local_66, 5);
		}
		else
		{
			__LIB_5__::func_411(1);
			MISC::SET_BIT(&Local_66, 1);
			VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_ALL_PLAYERS(iVar0, false);
			func_47(Local_66.f_10, 1);
			__LIB_1__::func_333(1849420593, 10, 0);
			func_598(&Local_66, 5);
		}
	}
}

void func_47(int iParam0, bool bParam1)//Position - 0x1468
{
	switch (iParam0)
	{
		case 0:
			__LIB_0__::func_513(229, bParam1, -1, 1);
			break;
		case 1:
			__LIB_0__::func_186(158, bParam1, -1);
			break;
	}
}

int func_55(int iParam0, var uParam1, var uParam2, int iParam3, var uParam4, var uParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, int iParam10)//Position - 0x1586
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	iVar0 = -1;
	bVar2 = false;
	iVar4 = ENTITY::GET_ENTITY_MODEL(iParam0);
	switch (*uParam5)
	{
		case 0:
			if (func_366(ENTITY::GET_ENTITY_MODEL(iParam0), -1))
			{
				func_358(iVar4, &iVar0);
				if (iVar0 != -1)
				{
					*iParam3 = func_357(1, 0, iVar4, iVar0, -1, 0);
					*uParam4 = func_349(1, 0, iVar4, iVar0, -1, 0);
					if (*iParam3 > -1 && *uParam4 > -1)
					{
						*uParam5 = 1;
					}
				}
				else
				{
					iVar1 = -1;
				}
				if (iVar1 == -1 || *uParam4 == -1)
				{
					if (!BitTest(uParam1->f_370, 7))
					{
						if (func_215(uParam1, iParam3, uParam4, iVar4, 0, -1, 1))
						{
							if (*iParam3 > -1 && *uParam4 > -1)
							{
								*uParam5 = 1;
							}
						}
					}
					else if (bParam8)
					{
						iVar3 = 36;
						HUD::SET_WARNING_MESSAGE_WITH_HEADER("BRSCRWTEX" /* GXT: Alert */, "LW_LOSE_VEH" /* GXT: Are you sure you want to lose the vehicle prize? */, iVar3, 0, false, -1, 0, 0, true, 0);
						if (HUD::IS_WARNING_MESSAGE_ACTIVE() && !__LIB_0__::func_193())
						{
							if (PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/))
							{
								MISC::CLEAR_BIT(&(uParam1->f_370), 7);
								*uParam5 = 3;
								return 1;
							}
							else if (PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/) || __LIB_3__::func_528())
							{
								MISC::CLEAR_BIT(&(uParam1->f_370), 7);
							}
						}
					}
					else
					{
						MISC::CLEAR_BIT(&(uParam1->f_370), 7);
						*uParam5 = 3;
						return 1;
					}
				}
			}
			else if (!__LIB_1__::func_840(ENTITY::GET_ENTITY_MODEL(iParam0)) && !VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(iParam0)))
			{
				if (__LIB_4__::func_867())
				{
					iVar5 = 0;
					while (iVar5 < 363)
					{
						if (__LIB_8__::func_889(iVar5))
						{
							bVar2 = true;
							iVar5 = 364;
						}
						iVar5++;
					}
					iVar3 = 18;
					if (bVar2)
					{
						HUD::SET_WARNING_MESSAGE_WITH_HEADER("BRSCRWTEX" /* GXT: Alert */, "CASINO_PRIZE_V1" /* GXT: This vehicle prize will replace your current impounded Personal Vehicle. */, iVar3, 0, false, -1, 0, 0, true, 0);
					}
					else
					{
						HUD::SET_WARNING_MESSAGE_WITH_HEADER("BRSCRWTEX" /* GXT: Alert */, "CASINO_PRIZE_V2" /* GXT: This vehicle prize will replace your current Personal Vehicle. */, iVar3, 0, false, -1, 0, 0, true, 0);
					}
					if (HUD::IS_WARNING_MESSAGE_ACTIVE())
					{
						if (PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/) || __LIB_3__::func_528())
						{
							*uParam5 = 3;
							return 1;
						}
						else if (PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/))
						{
							*iParam3 = 0;
							*uParam4 = 0;
							*uParam5 = 1;
						}
					}
				}
				else if (BitTest(Global_1585857[0 /*142*/].f_103, 2))
				{
					iVar3 = 18;
					HUD::SET_WARNING_MESSAGE_WITH_HEADER("BRSCRWTEX" /* GXT: Alert */, "CASINO_PRIZE_V2" /* GXT: This vehicle prize will replace your current Personal Vehicle. */, iVar3, 0, false, -1, 0, 0, true, 0);
					if (HUD::IS_WARNING_MESSAGE_ACTIVE())
					{
						if (PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/) || __LIB_3__::func_528())
						{
							*uParam5 = 3;
							return 1;
						}
						else if (PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/))
						{
							*iParam3 = 0;
							*uParam4 = 0;
							*uParam5 = 1;
						}
					}
				}
				else
				{
					*iParam3 = 0;
					*uParam4 = 0;
					*uParam5 = 1;
				}
			}
			break;
		case 1:
			if (__LIB_0__::func_121(iParam0))
			{
				if (__LIB_0__::func_112())
				{
					if (func_145(iParam0, *iParam3, uParam2, 1, 1))
					{
						if (*uParam2 == 2)
						{
							if (*iParam3 >= 0)
							{
								__LIB_2__::func_968(*uParam4, *iParam3, -1);
							}
							if (!func_366(ENTITY::GET_ENTITY_MODEL(iParam0), -1))
							{
								__LIB_1__::func_891(1, 0, 0, 0, 0, 0, 0);
								bParam6 = false;
								bParam7 = true;
							}
							if (bParam9)
							{
								if (iParam10 == 0)
								{
								}
								else if (iParam10 == 1)
								{
								}
							}
							func_97(iParam0, *iParam3, 1, bParam6, bParam7, 1, 1, bParam9, 1, -1, iParam10);
							func_56(iParam0, *iParam3);
							__LIB_1__::func_333(1849420593, 3, 0);
							return 1;
						}
						else if (*uParam2 == 3)
						{
						}
					}
					else
					{
						return 0;
					}
				}
				else
				{
					if (*iParam3 >= 0)
					{
						__LIB_2__::func_968(*uParam4, *iParam3, -1);
					}
					if (!func_366(ENTITY::GET_ENTITY_MODEL(iParam0), -1))
					{
						__LIB_1__::func_891(1, 0, 0, 0, 0, 0, 0);
						bParam6 = false;
						bParam7 = true;
					}
					if (bParam9)
					{
						if (iParam10 == 0)
						{
						}
						else if (iParam10 == 1)
						{
						}
					}
					func_97(iParam0, *iParam3, 1, bParam6, bParam7, 1, 1, bParam9, 1, -1, iParam10);
					func_56(iParam0, *iParam3);
					__LIB_1__::func_333(1849420593, 3, 0);
					return 1;
				}
			}
			break;
	}
	return 0;
}

void func_56(int iParam0, int iParam1)//Position - 0x192E
{
	__LIB_2__::func_634(iParam0);
	func_57(iParam1);
}

void func_57(int iParam0)//Position - 0x1942
{
	if (iParam0 >= 0 && iParam0 <= 363)
	{
		MISC::SET_BIT(&(Global_1585857[iParam0 /*142*/].f_103), 2);
		__LIB_0__::func_513(101, 1, -1, 1);
		func_73(iParam0, &(Global_1585857[iParam0 /*142*/]), 1, -1, 0, 0);
		if (!Global_1577982)
		{
			__LIB_0__::func_712(91, 3, 1);
			Global_1577982 = 1;
		}
		else
		{
			__LIB_0__::func_712(91, 3, 0);
		}
	}
}

int func_73(int iParam0, var uParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5)//Position - 0x1ECC
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (bParam2)
	{
		if (!bParam4)
		{
		}
		Global_2359296[__LIB_0__::func_155() /*5567*/].f_681.f_1275 = NETWORK::GET_CLOUD_TIME_AS_INT();
	}
	if (!bParam4)
	{
	}
	iVar1 = __LIB_3__::func_400(1411, iParam0);
	__LIB_1__::func_379(iVar1, uParam1->f_138, iParam3);
	if (!bParam4)
	{
	}
	iVar1 = __LIB_3__::func_400(1412, iParam0);
	__LIB_1__::func_379(iVar1, uParam1->f_139, iParam3);
	if (!bParam4)
	{
	}
	if (__LIB_1__::func_770(iParam0))
	{
	}
	else
	{
		iVar1 = __LIB_3__::func_400(1413, iParam0);
		__LIB_1__::func_379(iVar1, *uParam1, iParam3);
		if (!bParam4)
		{
		}
		iVar0 = 0;
		while (iVar0 < 49)
		{
			if (iVar0 < 25)
			{
				iVar1 = (__LIB_3__::func_400(1414, iParam0) + iVar0);
				__LIB_1__::func_379(iVar1, uParam1->f_9[iVar0], iParam3);
			}
			else
			{
				iVar1 = (__LIB_3__::func_307(iParam0) + (iVar0 - 25));
				__LIB_1__::func_379(iVar1, uParam1->f_9[iVar0], iParam3);
			}
			iVar0++;
		}
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < 2)
		{
			iVar1 = (__LIB_3__::func_400(1439, iParam0) + iVar0);
			__LIB_1__::func_379(iVar1, uParam1->f_59[iVar0], iParam3);
			iVar0++;
		}
	}
	iVar1 = __LIB_3__::func_400(1441, iParam0);
	__LIB_1__::func_379(iVar1, uParam1->f_62, iParam3);
	if (!bParam4)
	{
	}
	iVar1 = __LIB_3__::func_400(1442, iParam0);
	__LIB_1__::func_379(iVar1, uParam1->f_63, iParam3);
	if (!bParam4)
	{
	}
	iVar1 = __LIB_3__::func_400(1443, iParam0);
	__LIB_1__::func_379(iVar1, uParam1->f_64, iParam3);
	if (!bParam4)
	{
	}
	if (__LIB_1__::func_770(iParam0))
	{
		if (!bParam4)
		{
		}
	}
	else
	{
		iVar1 = __LIB_3__::func_400(1444, iParam0);
		__LIB_1__::func_379(iVar1, uParam1->f_65, iParam3);
		if (!bParam4)
		{
		}
	}
	iVar1 = __LIB_3__::func_400(1445, iParam0);
	__LIB_1__::func_379(iVar1, uParam1->f_67, iParam3);
	if (__LIB_1__::func_770(iParam0))
	{
		if (!bParam4)
		{
		}
	}
	else
	{
		iVar1 = __LIB_3__::func_400(1446, iParam0);
		__LIB_1__::func_379(iVar1, uParam1->f_68, iParam3);
	}
	iVar1 = __LIB_3__::func_400(1447, iParam0);
	__LIB_1__::func_379(iVar1, uParam1->f_69, iParam3);
	if (!bParam4)
	{
	}
	iVar1 = __LIB_3__::func_400(1448, iParam0);
	__LIB_1__::func_379(iVar1, uParam1->f_70, -1);
	iVar1 = __LIB_3__::func_400(1449, iParam0);
	__LIB_1__::func_379(iVar1, uParam1->f_71, iParam3);
	iVar1 = __LIB_3__::func_400(1450, iParam0);
	__LIB_1__::func_379(iVar1, uParam1->f_72, iParam3);
	iVar1 = __LIB_3__::func_400(1451, iParam0);
	__LIB_1__::func_379(iVar1, uParam1->f_73, iParam3);
	iVar1 = __LIB_3__::func_400(1452, iParam0);
	__LIB_1__::func_379(iVar1, uParam1->f_5, iParam3);
	iVar1 = __LIB_3__::func_400(1453, iParam0);
	__LIB_1__::func_379(iVar1, uParam1->f_6, iParam3);
	iVar1 = __LIB_3__::func_400(1454, iParam0);
	__LIB_1__::func_379(iVar1, uParam1->f_7, iParam3);
	iVar1 = __LIB_3__::func_400(1455, iParam0);
	__LIB_1__::func_379(iVar1, uParam1->f_8, iParam3);
	if (__LIB_1__::func_770(iParam0))
	{
		if (!bParam4)
		{
		}
	}
	else
	{
		iVar1 = __LIB_3__::func_400(3880, iParam0);
		__LIB_1__::func_379(iVar1, uParam1->f_74, iParam3);
		iVar1 = __LIB_3__::func_400(3881, iParam0);
		__LIB_1__::func_379(iVar1, uParam1->f_75, iParam3);
		iVar1 = __LIB_3__::func_400(3882, iParam0);
		__LIB_1__::func_379(iVar1, uParam1->f_76, iParam3);
		iVar1 = __LIB_3__::func_306(iParam0);
		__LIB_1__::func_379(iVar1, uParam1->f_97, iParam3);
		iVar1 = __LIB_3__::func_305(iParam0);
		__LIB_1__::func_379(iVar1, uParam1->f_99, iParam3);
		iVar1 = __LIB_3__::func_304(iParam0);
		__LIB_1__::func_379(iVar1, uParam1->f_98, iParam3);
		iVar1 = __LIB_3__::func_311(iParam0, 0);
		__LIB_1__::func_379(iVar1, uParam1->f_102, iParam3);
	}
	iVar2 = Global_2359296[__LIB_0__::func_155() /*5567*/].f_681.f_1275;
	if (bParam5)
	{
		iVar2 = NETWORK::GET_CLOUD_TIME_AS_INT();
	}
	__LIB_0__::func_413(1629, iVar2, iParam3, 1, 0);
	if (!bParam4)
	{
	}
	__LIB_0__::func_413(__LIB_1__::func_811(1, iParam0), uParam1->f_103, iParam3, 1, 0);
	if (!bParam4)
	{
	}
	__LIB_0__::func_413(__LIB_1__::func_811(2, iParam0), uParam1->f_104, iParam3, 1, 0);
	if (!bParam4)
	{
	}
	__LIB_0__::func_413(__LIB_1__::func_811(3, iParam0), uParam1->f_105, iParam3, 1, 0);
	if (!bParam4)
	{
	}
	__LIB_0__::func_413(__LIB_1__::func_811(4, iParam0), uParam1->f_66, iParam3, 1, 0);
	__LIB_0__::func_413(__LIB_1__::func_811(5, iParam0), uParam1->f_77, iParam3, 1, 0);
	if (!bParam4)
	{
	}
	__LIB_0__::func_413(__LIB_1__::func_811(7, iParam0), uParam1->f_140, iParam3, 1, 0);
	if (!__LIB_1__::func_770(iParam0))
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam1->f_1)))
		{
			func_74(__LIB_1__::func_811(6, iParam0), &(uParam1->f_1), iParam3);
			if (!bParam4)
			{
			}
		}
		else if (!bParam4)
		{
		}
	}
	if (!bParam4)
	{
	}
	return 1;
}

void func_74(int iParam0, char* sParam1, int iParam2)//Position - 0x2322
{
	int iVar0;
	iVar0 = Global_2826809[iParam0 /*3*/][__LIB_0__::func_153(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_LICENSE_PLATE(iVar0, sParam1);
	}
}

void func_97(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, int iParam10)//Position - 0xC6C2
{
	int iVar0;
	var uVar1;
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		__LIB_2__::func_635();
		if (VEHICLE::GET_NUM_MOD_KITS(iParam0) != 0)
		{
			VEHICLE::SET_VEHICLE_MOD_KIT(iParam0, 0);
		}
		if (bParam5)
		{
			MISC::SET_BIT(&(Global_1585857[iParam1 /*142*/].f_103), 12);
			MISC::CLEAR_BIT(&(Global_1585857[iParam1 /*142*/].f_103), 15);
			MISC::CLEAR_BIT(&(Global_1585857[iParam1 /*142*/].f_103), 2);
			MISC::CLEAR_BIT(&(Global_1585857[iParam1 /*142*/].f_103), 8);
			MISC::CLEAR_BIT(&(Global_1585857[iParam1 /*142*/].f_103), 9);
			__LIB_2__::func_725();
			func_131(iParam1, 1);
			Global_1952156 = 1;
		}
		__LIB_31__::func_849(iParam0, &(Global_1585857[iParam1 /*142*/]), bParam5);
		Global_1585857[iParam1 /*142*/].f_70 = 1;
		if (bParam2)
		{
			MISC::CLEAR_BIT(&(Global_1585857[iParam1 /*142*/].f_103), 1);
			MISC::CLEAR_BIT(&(Global_1585857[iParam1 /*142*/].f_103), 6);
			MISC::CLEAR_BIT(&(Global_1585857[iParam1 /*142*/].f_103), 7);
		}
		if (bParam3)
		{
			MISC::CLEAR_BIT(&(Global_1585857[iParam1 /*142*/].f_103), 0);
		}
		else
		{
			MISC::SET_BIT(&(Global_1585857[iParam1 /*142*/].f_103), 0);
		}
		if (bParam4)
		{
			__LIB_1__::func_821(iParam1);
		}
		if (bParam6)
		{
			MISC::SET_BIT(&(Global_1585857[iParam1 /*142*/].f_103), 15);
			MISC::SET_BIT(&(Global_1585857[iParam1 /*142*/].f_103), 2);
		}
		if (bParam7)
		{
			switch (iParam10)
			{
				case 0:
					MISC::SET_BIT(&(Global_1585857[iParam1 /*142*/].f_103), 27);
					break;
				case 1:
					MISC::SET_BIT(&(Global_1585857[iParam1 /*142*/].f_103), 28);
					break;
				}
		}
		if (bParam8)
		{
			MISC::SET_BIT(&(Global_1585857[iParam1 /*142*/].f_103), 13);
		}
		if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", 3))
		{
			if (DECORATOR::DECOR_EXIST_ON(iParam0, "MPBitset"))
			{
				iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "MPBitset");
				if (BitTest(iVar0, 3))
				{
					MISC::SET_BIT(&(Global_1585857[iParam1 /*142*/].f_103), 2);
				}
			}
		}
		if (VEHICLE::GET_VEHICLE_MOD_KIT(iParam0) >= 0)
		{
			__LIB_0__::func_107(&iParam0, &(Global_1585857[iParam1 /*142*/].f_9), &(Global_1585857[iParam1 /*142*/].f_59));
			if (__LIB_4__::func_868(iParam1, &uVar1))
			{
				if (bParam5 || PLAYER::GET_PLAYERS_LAST_VEHICLE() == iParam0)
				{
					Global_2359296[__LIB_0__::func_155() /*5567*/].f_593.f_86 = iParam1 + 1;
				}
				MISC::SET_BIT(&(Global_1585857[iParam1 /*142*/].f_103), 25);
				MISC::CLEAR_BIT(&(Global_1585857[iParam1 /*142*/].f_103), 26);
			}
		}
		Global_2359296[__LIB_0__::func_155() /*5567*/].f_681.f_1275 = NETWORK::GET_CLOUD_TIME_AS_INT();
		func_73(iParam1, &(Global_1585857[iParam1 /*142*/]), 0, iParam9, 0, 0);
	}
}

void func_131(int iParam0, bool bParam1)//Position - 0xDFC3
{
	int iVar0;
	if (bParam1)
	{
		iVar0 = 0;
		while (iVar0 < 39)
		{
			if (Global_2815059.f_2309[iVar0 /*44*/].f_40 == iParam0)
			{
				func_131(iVar0, 0);
			}
			iVar0++;
		}
	}
	else
	{
		StringCopy(&(Global_2815059.f_2309[iParam0 /*44*/]), "", 24);
		Global_2815059.f_2309[iParam0 /*44*/].f_6 = 138;
		StringCopy(&(Global_2815059.f_2309[iParam0 /*44*/].f_7), "", 64);
		StringCopy(&(Global_2815059.f_2309[iParam0 /*44*/].f_23), "", 64);
		Global_2815059.f_2309[iParam0 /*44*/].f_39 = -1;
		Global_2815059.f_2309[iParam0 /*44*/].f_40 = -1;
		__LIB_0__::clearF_1Prop(&(Global_2815059.f_2309[iParam0 /*44*/].f_41));
		Global_2815059.f_2309[iParam0 /*44*/].f_43 = 0;
	}
}

bool func_145(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4)//Position - 0xE5EE
{
	int iVar0;
	int iVar1;
	if (*uParam2 != 0 && *uParam2 != 1)
	{
		*uParam2 = 0;
	}
	switch (*uParam2)
	{
		case 0:
			if (!__LIB_6__::func_365() && Global_1964691)
			{
				return 0;
			}
			iVar0 = __LIB_4__::func_887(iParam1);
			iVar1 = __LIB_6__::func_921(ENTITY::GET_ENTITY_MODEL(iParam0), 0, -1, 0);
			if (__LIB_13__::func_175(joaat("NET_SHOP_TTYPE_BASKET"), joaat("CATEGORY_INVENTORY_VEHICLE"), iVar1, joaat("NET_SHOP_ACTION_BUY_VEHICLE"), 1, 0, 1, 4, iVar0, 3))
			{
				if (__LIB_13__::func_175(joaat("NET_SHOP_TTYPE_BASKET"), joaat("CATEGORY_VEHICLE_MOD"), joaat("VEM_TRACKER_t0_v1"), joaat("NET_SHOP_ACTION_BUY_VEHICLE"), 1, 0, 1, 4, 0, 3))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false) && VEHICLE::GET_NUM_MOD_KITS(iParam0) > 0)
					{
						VEHICLE::SET_VEHICLE_MOD_KIT(iParam0, 0);
					}
					if (func_153(iParam1, iParam0, iParam3, bParam4))
					{
						*uParam2 = 1;
					}
					else
					{
						*uParam2 = 3;
					}
				}
				else
				{
					*uParam2 = 3;
				}
			}
			else
			{
				*uParam2 = 3;
			}
			if (*uParam2 == 1 && __LIB_12__::func_387())
			{
			}
			else
			{
				*uParam2 = 3;
				__LIB_1__::func_34(__LIB_3__::func_534());
			}
			break;
		case 1:
			if (__LIB_3__::func_534() < 0)
			{
				*uParam2 = 3;
			}
			else if (__LIB_2__::func_835(__LIB_3__::func_534()))
			{
				if (__LIB_2__::func_834(__LIB_3__::func_534()) == 2)
				{
					*uParam2 = 2;
					__LIB_1__::func_34(__LIB_3__::func_534());
				}
				else
				{
					*uParam2 = 3;
					__LIB_1__::func_34(__LIB_3__::func_534());
				}
			}
			break;
	}
	return *uParam2 != 1;
}

int func_153(int iParam0, int iParam1, var uParam2, bool bParam3)//Position - 0xEF93
{
	int iVar0;
	int iVar1;
	int iVar2;
	char* sVar3;
	char* sVar4;
	struct<4> Var5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	bool bVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	var uVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	struct<4> Var22;
	var uVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	int iVar27;
	int iVar28;
	int iVar29;
	int iVar30;
	int iVar31;
	bool bVar32;
	int iVar33;
	int iVar34;
	int iVar35;
	char* sVar36;
	iVar10 = __LIB_6__::func_920(ENTITY::GET_ENTITY_MODEL(iParam1));
	if (((!Global_4539334 || !ENTITY::DOES_ENTITY_EXIST(iParam1)) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, false)) || VEHICLE::GET_NUM_MOD_KITS(iParam1) <= 0)
	{
		if (VEHICLE::GET_NUM_MOD_KITS(iParam1) <= 0 && __LIB_1__::func_819(ENTITY::GET_ENTITY_MODEL(iParam1)))
		{
			__LIB_6__::func_995(iParam1, &iVar0, &sVar3, &iVar6, &iVar1, &sVar4, &iVar7, &iVar2, &Var5, &iVar8, &iVar9, 0);
			if (!__LIB_31__::func_596(iParam0, "PACKED_MP_VEH_COLOUR1_0_v", &sVar3, 1, 24, iVar10, iVar0, iVar6))
			{
				return 0;
			}
			if (!__LIB_31__::func_596(iParam0, "PACKED_MP_VEH_COLOUR_EXTRA1_0_v", &Var5, 3, 24, iVar10, iVar2, iVar8))
			{
				return 0;
			}
			if (!__LIB_31__::func_595(iParam0, "PACKED_MP_VEH_PRIMARY_COLOUR_GROUP_v", __LIB_4__::func_884(iVar0)))
			{
				return 0;
			}
			if (!__LIB_31__::func_596(iParam0, "PACKED_MP_VEH_COLOUR2_0_v", &sVar4, 2, 25, iVar10, iVar1, iVar7))
			{
				return 0;
			}
			if (!__LIB_31__::func_595(iParam0, "PACKED_MP_VEH_SECONDARY_COLOUR_GROUP_v", __LIB_4__::func_884(iVar1)))
			{
				return 0;
			}
		}
		return 1;
	}
	if (iParam0 == -1)
	{
		iParam0 = 0;
	}
	bVar11 = true;
	if ((((((((((((((iParam0 == 10 || iParam0 == 11) || iParam0 == 12) || iParam0 == 23) || iParam0 == 24) || iParam0 == 25) || iParam0 == 36) || iParam0 == 37) || iParam0 == 38) || iParam0 == 49) || iParam0 == 50) || iParam0 == 51) || iParam0 == 62) || iParam0 == 63) || iParam0 == 64)
	{
		bVar11 = false;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam1) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, false))
	{
		iVar12 = __LIB_6__::func_363(ENTITY::GET_ENTITY_MODEL(iParam1));
		iVar13 = __LIB_4__::func_882(ENTITY::GET_ENTITY_MODEL(iParam1));
		iVar14 = __LIB_6__::func_362(ENTITY::GET_ENTITY_MODEL(iParam1));
		iVar15 = __LIB_7__::func_366(ENTITY::GET_ENTITY_MODEL(iParam1));
		iVar16 = __LIB_4__::func_879(iParam1);
		if (bVar11)
		{
			if (!__LIB_31__::func_594(iParam0, "PACKED_MP_VEH_MOD_IDX_0_v", "VEM_SPOILER", VEHICLE::GET_VEHICLE_MOD(iParam1, 0) + 1, 14, iVar12, -1, iParam1, 0))
			{
				return 0;
			}
			if (!__LIB_31__::func_594(iParam0, "PACKED_MP_VEH_MOD_IDX_1_v", "VEM_BUMPER_F", VEHICLE::GET_VEHICLE_MOD(iParam1, 1) + 1, 34, iVar12, -1, iParam1, 1))
			{
				return 0;
			}
			if (!__LIB_31__::func_594(iParam0, "PACKED_MP_VEH_MOD_IDX_2_v", "VEM_BUMPER_R", VEHICLE::GET_VEHICLE_MOD(iParam1, 2) + 11, 35, iVar12, -1, iParam1, 2))
			{
				return 0;
			}
			if (!__LIB_31__::func_594(iParam0, "PACKED_MP_VEH_MOD_IDX_3_v", "VEM_SKIRT", VEHICLE::GET_VEHICLE_MOD(iParam1, 3) + 1, 13, iVar12, -1, iParam1, 3))
			{
				return 0;
			}
			if (!__LIB_31__::func_594(iParam0, "PACKED_MP_VEH_MOD_IDX_4_v", "VEM_EXHAUST", VEHICLE::GET_VEHICLE_MOD(iParam1, 4) + 1, 6, iVar12, -1, iParam1, 4))
			{
				return 0;
			}
			if (!__LIB_31__::func_594(iParam0, "PACKED_MP_VEH_MOD_IDX_5_v", "VEM_CHASSIS", VEHICLE::GET_VEHICLE_MOD(iParam1, 5) + 1, 4, iVar12, -1, iParam1, 5))
			{
				return 0;
			}
			if (!__LIB_31__::func_594(iParam0, "PACKED_MP_VEH_MOD_IDX_6_v", "VEM_GRILL", VEHICLE::GET_VEHICLE_MOD(iParam1, 6) + 1, 8, iVar12, -1, iParam1, 6))
			{
				return 0;
			}
			if (!__LIB_31__::func_594(iParam0, "PACKED_MP_VEH_MOD_IDX_7_v", "VEM_HOOD", VEHICLE::GET_VEHICLE_MOD(iParam1, 7) + 1, 9, iVar12, -1, iParam1, 7))
			{
				return 0;
			}
			if (!__LIB_31__::func_594(iParam0, "PACKED_MP_VEH_MOD_IDX_8_v", "VEM_FENDER_L", VEHICLE::GET_VEHICLE_MOD(iParam1, 8) + 1, 36, iVar12, -1, iParam1, 8))
			{
				return 0;
			}
			if (!__LIB_31__::func_594(iParam0, "PACKED_MP_VEH_MOD_IDX_9_v", "VEM_FENDER_R", VEHICLE::GET_VEHICLE_MOD(iParam1, 9) + 6, 37, iVar12, -1, iParam1, 9))
			{
				return 0;
			}
			if (!__LIB_31__::func_594(iParam0, "PACKED_MP_VEH_MOD_IDX_10_v", "VEM_ROOF", VEHICLE::GET_VEHICLE_MOD(iParam1, 10) + 1, 12, iVar12, iVar16, iParam1, 10))
			{
				return 0;
			}
			if (!__LIB_31__::func_594(iParam0, "PACKED_MP_VEH_MOD_IDX_11_v", "VEM_ENGINE", VEHICLE::GET_VEHICLE_MOD(iParam1, 11) + 1, 5, iVar12, -1, iParam1, 11))
			{
				return 0;
			}
			if (!__LIB_31__::func_594(iParam0, "PACKED_MP_VEH_MOD_IDX_12_v", "VEM_BRAKE", VEHICLE::GET_VEHICLE_MOD(iParam1, 12) + 1, 2, iVar12, -1, iParam1, 12))
			{
				return 0;
			}
			if (!__LIB_31__::func_594(iParam0, "PACKED_MP_VEH_MOD_IDX_13_v", "VEM_TRANS", VEHICLE::GET_VEHICLE_MOD(iParam1, 13) + 1, 16, iVar12, -1, iParam1, 13))
			{
				return 0;
			}
			if (!__LIB_31__::func_594(iParam0, "PACKED_MP_VEH_MOD_IDX_15_v", "VEM_SUSPENSION", VEHICLE::GET_VEHICLE_MOD(iParam1, 15) + 1, 15, iVar12, -1, iParam1, 15))
			{
				return 0;
			}
			if (!__LIB_31__::func_594(iParam0, "PACKED_MP_VEH_MOD_IDX_16_v", "VEM_ARMOUR", VEHICLE::GET_VEHICLE_MOD(iParam1, 16) + 1, 1, iVar12, -1, iParam1, 16))
			{
				return 0;
			}
			if (!__LIB_31__::func_594(iParam0, "PACKED_MP_VEH_MOD_IDX_18_v", "VEM_TURBO", __LIB_1__::func_137(VEHICLE::IS_TOGGLE_MOD_ON(iParam1, 18)), 17, iVar12, -1, 0, 23))
			{
				return 0;
			}
			if (!__LIB_31__::func_594(iParam0, "PACKED_MP_VEH_MOD_IDX_22_v", "VEM_HLIGHT", __LIB_1__::func_137(VEHICLE::IS_TOGGLE_MOD_ON(iParam1, 22)), 11, iVar12, -1, 0, 23))
			{
				return 0;
			}
			if (!__LIB_31__::func_594(iParam0, "PACKED_MP_VEH_MOD_IDX_S_0_v", "VEM_SUPERMOD_0", VEHICLE::GET_VEHICLE_MOD(iParam1, 25) + 1, 41, iVar13, -1, iParam1, 25))
			{
				return 0;
			}
			if (!__LIB_31__::func_594(iParam0, "PACKED_MP_VEH_MOD_IDX_S_1_v", "VEM_SUPERMOD_1", VEHICLE::GET_VEHICLE_MOD(iParam1, 26) + 1, 42, iVar13, -1, iParam1, 26))
			{
				return 0;
			}
			if (!__LIB_31__::func_594(iParam0, "PACKED_MP_VEH_MOD_IDX_S_2_v", "VEM_SUPERMOD_2", VEHICLE::GET_VEHICLE_MOD(iParam1, 27) + 1, 43, iVar13, -1, iParam1, 27))
			{
				return 0;
			}
			if (!__LIB_31__::func_594(iParam0, "PACKED_MP_VEH_MOD_IDX_S_3_v", "VEM_SUPERMOD_3", VEHICLE::GET_VEHICLE_MOD(iParam1, 28) + 1, 44, iVar13, -1, iParam1, 28))
			{
				return 0;
			}
			if (!__LIB_31__::func_594(iParam0, "PACKED_MP_VEH_MOD_IDX_S_4_v", "VEM_SUPERMOD_4", VEHICLE::GET_VEHICLE_MOD(iParam1, 29) + 1, 45, iVar13, -1, iParam1, 29))
			{
				return 0;
			}
			if (!__LIB_31__::func_594(iParam0, "PACKED_MP_VEH_MOD_IDX_S_5_v", "VEM_SUPERMOD_5", VEHICLE::GET_VEHICLE_MOD(iParam1, 30) + 1, 46, iVar13, -1, iParam1, 30))
			{
				return 0;
			}
			if (!__LIB_31__::func_594(iParam0, "PACKED_MP_VEH_MOD_IDX_S_6_v", "VEM_SUPERMOD_6", VEHICLE::GET_VEHICLE_MOD(iParam1, 31) + 1, 47, iVar13, -1, iParam1, 31))
			{
				return 0;
			}
			if (!__LIB_31__::func_594(iParam0, "PACKED_MP_VEH_MOD_IDX_S_7_v", "VEM_SUPERMOD_7", VEHICLE::GET_VEHICLE_MOD(iParam1, 32) + 1, 48, iVar13, -1, iParam1, 32))
			{
				return 0;
			}
			if (!__LIB_31__::func_594(iParam0, "PACKED_MP_VEH_MOD_IDX_S_8_v", "VEM_SUPERMOD_8", VEHICLE::GET_VEHICLE_MOD(iParam1, 33) + 1, 49, iVar13, -1, iParam1, 33))
			{
				return 0;
			}
			if (!__LIB_31__::func_594(iParam0, "PACKED_MP_VEH_MOD_IDX_S_9_v", "VEM_SUPERMOD_9", VEHICLE::GET_VEHICLE_MOD(iParam1, 34) + 1, 50, iVar13, -1, iParam1, 34))
			{
				return 0;
			}
			if (!__LIB_31__::func_594(iParam0, "PACKED_MP_VEH_MOD_IDX_S_10_v", "VEM_SUPERMOD_10", VEHICLE::GET_VEHICLE_MOD(iParam1, 35) + 1, 51, iVar13, -1, iParam1, 35))
			{
				return 0;
			}
			if (!__LIB_31__::func_594(iParam0, "PACKED_MP_VEH_MOD_IDX_S_11_v", "VEM_SUPERMOD_11", VEHICLE::GET_VEHICLE_MOD(iParam1, 36) + 1, 52, iVar13, -1, iParam1, 36))
			{
				return 0;
			}
			if (!__LIB_31__::func_594(iParam0, "PACKED_MP_VEH_MOD_IDX_S_12_v", "VEM_SUPERMOD_12", VEHICLE::GET_VEHICLE_MOD(iParam1, 37) + 1, 53, iVar13, -1, iParam1, 37))
			{
				return 0;
			}
			if (!__LIB_31__::func_594(iParam0, "PACKED_MP_VEH_MOD_IDX_S_13_v", "VEM_SUPERMOD_13", VEHICLE::GET_VEHICLE_MOD(iParam1, 38) + 1, 54, iVar13, -1, iParam1, 38))
			{
				return 0;
			}
			if (!__LIB_31__::func_594(iParam0, "PACKED_MP_VEH_MOD_IDX_S_14_v", "VEM_SUPERMOD_14", VEHICLE::GET_VEHICLE_MOD(iParam1, 39) + 1, 55, iVar13, -1, iParam1, 39))
			{
				return 0;
			}
			if (!__LIB_31__::func_594(iParam0, "PACKED_MP_VEH_MOD_IDX_S_15_v", "VEM_SUPERMOD_15", VEHICLE::GET_VEHICLE_MOD(iParam1, 40) + 1, 56, iVar13, -1, iParam1, 40))
			{
				return 0;
			}
			if (!__LIB_31__::func_594(iParam0, "PACKED_MP_VEH_MOD_IDX_S_16_v", "VEM_SUPERMOD_16", VEHICLE::GET_VEHICLE_MOD(iParam1, 41) + 1, 57, iVar13, -1, iParam1, 41))
			{
				return 0;
			}
			if (!__LIB_31__::func_594(iParam0, "PACKED_MP_VEH_MOD_IDX_S_17_v", "VEM_SUPERMOD_17", VEHICLE::GET_VEHICLE_MOD(iParam1, 42) + 1, 58, iVar13, -1, iParam1, 42))
			{
				return 0;
			}
			if (!__LIB_31__::func_594(iParam0, "PACKED_MP_VEH_MOD_IDX_S_18_v", "VEM_SUPERMOD_18", VEHICLE::GET_VEHICLE_MOD(iParam1, 43) + 1, 59, iVar13, -1, iParam1, 43))
			{
				return 0;
			}
			if (!__LIB_31__::func_594(iParam0, "PACKED_MP_VEH_MOD_IDX_S_19_v", "VEM_SUPERMOD_19", VEHICLE::GET_VEHICLE_MOD(iParam1, 44) + 1, 60, iVar13, -1, iParam1, 44))
			{
				return 0;
			}
			if (!__LIB_31__::func_594(iParam0, "PACKED_MP_VEH_MOD_IDX_S_20_v", "VEM_SUPERMOD_20", VEHICLE::GET_VEHICLE_MOD(iParam1, 45) + 1, 61, iVar13, -1, iParam1, 45))
			{
				return 0;
			}
			if (!__LIB_31__::func_594(iParam0, "PACKED_MP_VEH_MOD_IDX_S_21_v", "VEM_SUPERMOD_21", VEHICLE::GET_VEHICLE_MOD(iParam1, 46) + 1, 62, iVar13, -1, iParam1, 46))
			{
				return 0;
			}
			if (!__LIB_31__::func_594(iParam0, "PACKED_MP_VEH_MOD_IDX_S_22_v", "VEM_SUPERMOD_22", VEHICLE::GET_VEHICLE_MOD(iParam1, 47) + 1, 63, iVar13, -1, iParam1, 47))
			{
				return 0;
			}
			if (!__LIB_31__::func_594(iParam0, "PACKED_MP_VEH_MOD_IDX_S_23_v", "VEM_SUPERMOD_23", VEHICLE::GET_VEHICLE_MOD(iParam1, 48) + 1, 64, iVar14, -1, iParam1, 48))
			{
				return 0;
			}
		}
		if (bVar11)
		{
			uVar17 = __LIB_4__::func_878(VEHICLE::GET_VEHICLE_MOD_IDENTIFIER_HASH(iParam1, 14, VEHICLE::GET_VEHICLE_MOD(iParam1, 14)));
			if (!__LIB_31__::func_593(iParam0, "PACKED_MP_VEH_MOD_IDX_14_v", __LIB_4__::func_877(uVar17), 10, iVar12))
			{
				return 0;
			}
		}
		if (bVar11)
		{
			if (!__LIB_31__::func_592(iParam0, "PACKED_MP_VEH_MOD_IDX_23_v", iParam1, 23, iVar15))
			{
				return 0;
			}
			if (!__LIB_31__::func_592(iParam0, "PACKED_MP_VEH_MOD_IDX_24_v", iParam1, 24, iVar15))
			{
				return 0;
			}
		}
		if (!__LIB_31__::func_591(iParam0, "PACKED_MP_VEH_WHEEL_TYPE_0_v", iParam1))
		{
			return 0;
		}
		if (bVar11)
		{
			iVar18 = 0;
			switch (VEHICLE::GET_VEHICLE_WINDOW_TINT(iParam1))
			{
				case 0:
					iVar18 = 0;
					break;
				case 3:
					iVar18 = 1;
					break;
				case 2:
					iVar18 = 2;
					break;
				case 1:
					iVar18 = 3;
					break;
				case 4:
					iVar18 = 4;
					break;
				case 5:
					iVar18 = 5;
					break;
			}
			if (!__LIB_31__::func_594(iParam0, "PACKED_MP_VEH_WINDOW_TINT_0_v", "VEM_CMOD_WIN", iVar18, 33, iVar12, -1, 0, 23))
			{
				return 0;
			}
		}
		if (bVar11)
		{
			iVar19 = 0;
			switch (VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(iParam1))
			{
				case 3:
					iVar19 = 0;
					break;
				case 0:
					iVar19 = 1;
					break;
				case 4:
					iVar19 = 2;
					break;
				case 2:
					iVar19 = 3;
					break;
				case 1:
					iVar19 = 4;
					break;
			}
			if (!__LIB_31__::func_594(iParam0, "PACKED_MP_VEH_PLATE_ID_v", "VEM_CMOD_PLA", iVar19, 23, iVar12, -1, 0, 23))
			{
				return 0;
			}
		}
		if (bVar11)
		{
			if (VEHICLE::GET_VEHICLE_MOD_VARIATION(iParam1, 23) == 0)
			{
				if (!__LIB_31__::func_594(iParam0, "PACKED_MP_VEH_MOD_VAR_0_v", "VEM_CMOD_TYR", 0, 31, iVar12, -1, 0, 23))
				{
					return 0;
				}
			}
			else if (!__LIB_31__::func_594(iParam0, "PACKED_MP_VEH_MOD_VAR_0_v", "VEM_CMOD_TYR", 1, 32, iVar12, -1, 0, 23))
			{
				return 0;
			}
			if (VEHICLE::GET_VEHICLE_MOD_VARIATION(iParam1, 24) == 0)
			{
				if (!__LIB_31__::func_594(iParam0, "PACKED_MP_VEH_MOD_VAR_1_v", "VEM_CMOD_TYR", 0, 31, iVar12, -1, 0, 23))
				{
					return 0;
				}
			}
			else if (!__LIB_31__::func_594(iParam0, "PACKED_MP_VEH_MOD_VAR_1_v", "VEM_CMOD_TYR", 1, 32, iVar12, -1, 0, 23))
			{
				return 0;
			}
		}
		__LIB_6__::func_995(iParam1, &iVar0, &sVar3, &iVar6, &iVar1, &sVar4, &iVar7, &iVar2, &Var5, &iVar8, &iVar9, 1);
		iVar20 = __LIB_4__::func_875(iVar9);
		if (!__LIB_31__::func_594(iParam0, "PACKED_MP_VEH_COLOUR_EXTRA2_0_v", "VEM_CMOD_COL5", iVar20, 29, iVar10, -1, 0, 23))
		{
			return 0;
		}
		VEHICLE::SET_VEHICLE_COLOURS(iParam1, iVar6, iVar7);
		VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iParam1, iVar8, iVar9);
		if (bParam3)
		{
			while (__LIB_0__::func_293(iVar21, &Var22, &uVar23, &iVar24, &iVar25))
			{
				if (iVar24 == iVar6 && iVar25 == iVar8)
				{
					Var5 = { Var22 };
				}
				iVar21++;
			}
		}
		if (!__LIB_31__::func_596(iParam0, "PACKED_MP_VEH_COLOUR1_0_v", &sVar3, 1, 24, iVar10, iVar0, iVar6))
		{
			return 0;
		}
		if (!__LIB_31__::func_596(iParam0, "PACKED_MP_VEH_COLOUR_EXTRA1_0_v", &Var5, 3, 24, iVar10, iVar2, iVar8))
		{
			return 0;
		}
		if (!__LIB_31__::func_595(iParam0, "PACKED_MP_VEH_PRIMARY_COLOUR_GROUP_v", __LIB_4__::func_884(iVar0)))
		{
			return 0;
		}
		if (!__LIB_31__::func_596(iParam0, "PACKED_MP_VEH_COLOUR2_0_v", &sVar4, 2, 25, iVar10, iVar1, iVar7))
		{
			return 0;
		}
		if (!__LIB_31__::func_595(iParam0, "PACKED_MP_VEH_SECONDARY_COLOUR_GROUP_v", __LIB_4__::func_884(iVar1)))
		{
			return 0;
		}
		VEHICLE::GET_VEHICLE_TYRE_SMOKE_COLOR(iParam1, &iVar26, &iVar27, &iVar28);
		switch (__LIB_6__::func_361(iVar26, iVar27, iVar28))
		{
			case 1:
				iVar29 = 3;
				break;
			case 2:
				iVar29 = 4;
				break;
			case 3:
				iVar29 = 5;
				break;
			case 4:
				iVar29 = 6;
				break;
			case 5:
				iVar29 = 11;
				break;
			case 6:
				iVar29 = 7;
				break;
			case 7:
				iVar29 = 10;
				break;
			case 8:
				iVar29 = 8;
				break;
			case 9:
				iVar29 = 12;
				break;
			case 10:
				iVar29 = 13;
				break;
			case 11:
				iVar29 = -1;
				break;
			case 12:
				iVar29 = 9;
				break;
			case 0:
				if (__LIB_1__::func_587(ENTITY::GET_ENTITY_MODEL(iParam1)) || VEHICLE::IS_VEHICLE_MODEL(iParam1, joaat("oppressor2")))
				{
					iVar29 = 255;
					break;
				}
				break;
		}
		if (bVar11)
		{
			if (!__LIB_31__::func_590(iParam0, "PACKED_NG_VEHICLE_SMOKE_v", "VEM_CMOD_TYR", iVar29, 18, iVar12))
			{
				return 0;
			}
		}
		iVar30 = __LIB_4__::func_873(VEHICLE::GET_VEHICLE_NEON_ENABLED(iParam1, 2), (VEHICLE::GET_VEHICLE_NEON_ENABLED(iParam1, 0) || VEHICLE::GET_VEHICLE_NEON_ENABLED(iParam1, 1)), VEHICLE::GET_VEHICLE_NEON_ENABLED(iParam1, 3));
		if (bVar11)
		{
			if (!__LIB_31__::func_589(iParam0, "PACKED_NG_VEHICLE_NEON_KIT_v", "VEM_CMOD_NEONLAY", iVar30, 21, iVar12, 1))
			{
				return 0;
			}
		}
		VEHICLE::GET_VEHICLE_NEON_COLOUR(iParam1, &iVar26, &iVar27, &iVar28);
		iVar31 = __LIB_1__::func_562(iVar26, iVar27, iVar28);
		if (bVar11)
		{
			if (!__LIB_31__::func_589(iParam0, "PACKED_NG_VEHICLE_NEON_v", "VEM_CMOD_NEONCOL", iVar31, 21, iVar12, 0))
			{
				return 0;
			}
		}
		if (VEHICLE::GET_VEHICLE_LIVERY_COUNT(iParam1) > 1)
		{
			if (!__LIB_31__::func_594(iParam0, "PACKED_MP_VEH_LIVERY_0_v", "VEM_LIVERY", VEHICLE::GET_VEHICLE_LIVERY(iParam1), 26, iVar12, __LIB_4__::func_872(ENTITY::GET_ENTITY_MODEL(iParam1)), 0, 23))
			{
				return 0;
			}
		}
		if (VEHICLE::GET_VEHICLE_LIVERY2_COUNT(iParam1) > 1)
		{
			if (!__LIB_31__::func_594(iParam0, "PACKED_MP_VEH_LIVERY2_0_v", "VEM_LIVERY2", VEHICLE::GET_VEHICLE_LIVERY2(iParam1), 39, iVar14, __LIB_4__::func_872(ENTITY::GET_ENTITY_MODEL(iParam1)), 0, 23))
			{
				return 0;
			}
		}
		if (bVar11)
		{
			if (!VEHICLE::GET_VEHICLE_TYRES_CAN_BURST(iParam1))
			{
				if (!__LIB_31__::func_588(iParam0, "PACKED_NG_VEHICLE_BPT_v", "VEM_CMOD_TYR_2", 30, iVar12))
				{
					return 0;
				}
			}
		}
		if (bVar11)
		{
			VEHICLE::GET_VEHICLE_EXTRA_COLOUR_5(iParam1, &iVar35);
			bVar32 = false;
			iVar33 = 0;
			while (__LIB_4__::func_871(iVar33, &iVar34) && !bVar32)
			{
				if (iVar34 == iVar35)
				{
					bVar32 = true;
					sVar36 = __LIB_4__::func_870(iVar33);
				}
				else
				{
					iVar33++;
				}
			}
			if (bVar32)
			{
				__LIB_31__::func_587(iParam0, "PACKED_LR_VEHICLE_COLOUR_5_v", sVar36, 38, 5, 3);
			}
			VEHICLE::GET_VEHICLE_EXTRA_COLOUR_6(iParam1, &iVar35);
			bVar32 = false;
			iVar33 = 0;
			while (__LIB_3__::func_591(iVar33, &iVar34) && !bVar32)
			{
				if (iVar34 == iVar35)
				{
					bVar32 = true;
					sVar36 = __LIB_4__::func_869(iVar33);
				}
				else
				{
					iVar33++;
				}
			}
			if (!bVar32)
			{
				if (iVar35 == 0)
				{
					sVar36 = "VEM_COLOUR_6_BLACK_t65_v3";
					bVar32 = true;
				}
				else if (iVar35 == 132)
				{
					sVar36 = "VEM_COLOUR_6_DEFAULT_t65_v3";
					bVar32 = true;
				}
			}
			if (bVar32)
			{
				__LIB_31__::func_587(iParam0, "PACKED_LR_VEHICLE_COLOUR_6_v", sVar36, 65, 6, 3);
			}
		}
		if (uParam2 && bVar11)
		{
			if (!__LIB_31__::func_586(iParam0, "PACKED_NG_VEHICLE_INSURANCE_v", ENTITY::GET_ENTITY_MODEL(iParam1)))
			{
				return 0;
			}
		}
		else if (bVar11)
		{
			if (!__LIB_31__::func_585(iParam0, "PACKED_NG_VEHICLE_INSURANCE_v"))
			{
				return 0;
			}
		}
		return 1;
	}
	return 0;
}

int func_215(var uParam0, int iParam1, var uParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)//Position - 0x16A0A
{
	bool bVar0;
	bool bVar1;
	if ((((!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() || !__LIB_0__::func_156(PLAYER::PLAYER_ID(), 1, 1)) || __LIB_0__::func_983()) || Global_1574964) || Global_2715699.f_3479.f_32)
	{
		*iParam1 = -1;
		__LIB_7__::func_368(uParam0, iParam5, 0);
		return 1;
	}
	bVar0 = false;
	HUD::HIDE_HELP_TEXT_THIS_FRAME();
	__LIB_1__::func_733();
	__LIB_0__::func_189();
	PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/);
	PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/);
	PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 189 /*INPUT_FRONTEND_LEFT*/);
	PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 190 /*INPUT_FRONTEND_RIGHT*/);
	PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 241 /*INPUT_CURSOR_SCROLL_UP*/);
	PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 242 /*INPUT_CURSOR_SCROLL_DOWN*/);
	PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 180 /*INPUT_CELLPHONE_SCROLL_FORWARD*/);
	PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 181 /*INPUT_CELLPHONE_SCROLL_BACKWARD*/);
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
	{
		PAD::SET_INPUT_EXCLUSIVE(0 /*PLAYER_CONTROL*/, 24 /*INPUT_ATTACK*/);
		PAD::SET_INPUT_EXCLUSIVE(0 /*PLAYER_CONTROL*/, 257 /*INPUT_ATTACK2*/);
		PAD::ENABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 237 /*INPUT_CURSOR_ACCEPT*/, true);
		PAD::ENABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 238 /*INPUT_CURSOR_CANCEL*/, true);
		PAD::ENABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 242 /*INPUT_CURSOR_SCROLL_DOWN*/, true);
		PAD::ENABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 241 /*INPUT_CURSOR_SCROLL_UP*/, true);
		PAD::DISABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 2 /*INPUT_LOOK_UD*/, true);
		PAD::DISABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 1 /*INPUT_LOOK_LR*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 24 /*INPUT_ATTACK*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 257 /*INPUT_ATTACK2*/, true);
		if (!HUD::IS_PAUSE_MENU_ACTIVE() && !HUD::IS_WARNING_MESSAGE_ACTIVE())
		{
			PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/);
			PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/);
		}
		__LIB_3__::func_567(0, 0, 0, 1);
		HUD::SET_MOUSE_CURSOR_THIS_FRAME();
	}
	MISC::SET_BIT(&(uParam0->f_370), 1);
	if (__LIB_3__::func_67(0, iParam5, 0))
	{
		if (__LIB_0__::func_156(PLAYER::PLAYER_ID(), 1, 1))
		{
			if (!BitTest(uParam0->f_370, 0))
			{
				func_282(uParam0, iParam3, bParam4);
				MISC::SET_BIT(&(uParam0->f_370), 0);
				__LIB_11__::func_959(uParam0, bParam4, bVar1, iParam3, bParam6);
				__LIB_11__::func_266(1, iParam5, 1, 0, 1, -1082130432, 0, 0, -1);
			}
			else if ((!HUD::IS_PAUSE_MENU_ACTIVE() && !__LIB_0__::func_194(8, -1)) && !Global_2714762.f_785.f_5)
			{
				if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
				{
					if (__LIB_3__::func_51())
					{
						if (uParam0->f_366 == 0)
						{
							if (Global_4539961 != uParam0->f_367)
							{
								uParam0->f_367 = Global_4539961;
								AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FREEMODE_SOUNDSET", true);
								MISC::CLEAR_BIT(&(uParam0->f_370), 0);
							}
							else
							{
								bVar0 = true;
							}
						}
						else if (Global_4539961 != uParam0->f_368)
						{
							uParam0->f_368 = Global_4539961;
							AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FREEMODE_SOUNDSET", true);
							MISC::CLEAR_BIT(&(uParam0->f_370), 0);
						}
						else
						{
							bVar0 = true;
						}
					}
				}
				if (!BitTest(uParam0->f_373, 0))
				{
					if (((PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/) || __LIB_3__::func_540()) || bVar0) || (HUD::IS_WARNING_MESSAGE_ACTIVE() && PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/)))
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "SELECT" /* GXT: Filter List */, "HUD_FREEMODE_SOUNDSET", true);
						if (uParam0->f_366 == 0)
						{
							uParam0->f_375 = 0;
							if (uParam0->f_367 >= 0 && uParam0->f_1[uParam0->f_367] >= 0)
							{
								*uParam2 = func_349(1, 0, iParam3, __LIB_31__::func_584(uParam0->f_1[uParam0->f_367], -1), -1, 0);
								if (*uParam2 >= 0)
								{
									__LIB_1__::func_775(*uParam2, iParam1, 1);
									if (*iParam1 < 0)
									{
										*iParam1 = func_357(1, 0, iParam3, 0, -1, 0);
									}
								}
								if (*iParam1 >= 0 && *uParam2 >= 0)
								{
									MISC::CLEAR_BIT(&(uParam0->f_370), 0);
									__LIB_7__::func_368(uParam0, iParam5, 0);
									return 1;
								}
							}
							else if (uParam0->f_367 < 0)
							{
							}
							if (uParam0->f_367 < 0)
							{
								uParam0->f_375 = 0;
							}
							else
							{
								uParam0->f_375 = uParam0->f_1[uParam0->f_367];
							}
							uParam0->f_366 = 1;
							MISC::CLEAR_BIT(&(uParam0->f_370), 0);
							bVar1 = true;
						}
						else if (!BitTest(uParam0->f_373, 2) && !BitTest(uParam0->f_365, uParam0->f_368))
						{
							__LIB_3__::func_564(-1);
							__LIB_1__::func_791(176, "BB_YES" /* GXT: Yes */, -1);
							__LIB_1__::func_791(177, "BB_NO" /* GXT: No */, -1);
							MISC::SET_BIT(&(uParam0->f_373), 2);
						}
						else if (uParam0->f_368 >= 0)
						{
							*uParam2 = uParam0->f_1[uParam0->f_368];
							__LIB_1__::func_775(*uParam2, iParam1, 1);
							if (*iParam1 < 0)
							{
								*iParam1 = func_357(1, 0, iParam3, 0, -1, 0);
							}
							if (*iParam1 >= 0 && *uParam2 >= 0)
							{
								MISC::CLEAR_BIT(&(uParam0->f_370), 0);
								__LIB_7__::func_368(uParam0, iParam5, 0);
							}
							else
							{
								__LIB_7__::func_368(uParam0, iParam5, 0);
								*iParam1 = -1;
								return 1;
							}
							return 1;
						}
						MISC::SET_BIT(&(uParam0->f_373), 0);
					}
				}
				else if (!PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/) && !bVar0)
				{
					MISC::CLEAR_BIT(&(uParam0->f_373), 0);
				}
				if (!BitTest(uParam0->f_373, 1))
				{
					if ((((__LIB_3__::func_539() || PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 238 /*INPUT_CURSOR_CANCEL*/)) || PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/)) || (__LIB_3__::func_528() && Global_4539961 > -1)) || (HUD::IS_WARNING_MESSAGE_ACTIVE() && PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/)))
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "CANCEL", "HUD_FREEMODE_SOUNDSET", true);
						if (uParam0->f_366 == 0)
						{
							__LIB_11__::func_959(uParam0, bParam4, bVar1, iParam3, bParam6);
							__LIB_11__::func_266(1, iParam5, 1, 0, 1, -1082130432, 0, 0, -1);
							__LIB_7__::func_368(uParam0, iParam5, 1);
							*iParam1 = -1;
							MISC::SET_BIT(&(uParam0->f_370), 7);
							return 1;
						}
						else if (!BitTest(uParam0->f_373, 2))
						{
							uParam0->f_366 = 0;
							bVar1 = true;
							MISC::CLEAR_BIT(&(uParam0->f_370), 0);
						}
						else
						{
							__LIB_3__::func_564(-1);
							__LIB_1__::func_791(176, "BB_SELECT" /* GXT: Select */, -1);
							__LIB_1__::func_791(177, "BB_BACK" /* GXT: Back */, -1);
							MISC::CLEAR_BIT(&(uParam0->f_373), 2);
						}
						MISC::SET_BIT(&(uParam0->f_373), 1);
					}
				}
				else if ((!PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/) && !PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 238 /*INPUT_CURSOR_CANCEL*/)) && !__LIB_3__::func_539())
				{
					MISC::CLEAR_BIT(&(uParam0->f_373), 1);
				}
				if (!BitTest(uParam0->f_373, 2))
				{
					if (!BitTest(uParam0->f_373, 4))
					{
						if ((PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 172 /*INPUT_CELLPHONE_UP*/) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 172 /*INPUT_CELLPHONE_UP*/)) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 241 /*INPUT_CURSOR_SCROLL_UP*/))
						{
							if (uParam0->f_366 == 0)
							{
								uParam0->f_367 = (uParam0->f_367 - 1);
							}
							else
							{
								uParam0->f_368 = (uParam0->f_368 - 1);
							}
							AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FREEMODE_SOUNDSET", true);
							MISC::SET_BIT(&(uParam0->f_373), 4);
							MISC::CLEAR_BIT(&(uParam0->f_370), 0);
							__LIB_0__::clearF_1Prop(&(uParam0->f_371));
						}
					}
					else if (__LIB_7__::func_272(uParam0, 172))
					{
						MISC::CLEAR_BIT(&(uParam0->f_373), 4);
					}
					if (!BitTest(uParam0->f_373, 5))
					{
						if ((PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 173 /*INPUT_CELLPHONE_DOWN*/) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 173 /*INPUT_CELLPHONE_DOWN*/)) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 242 /*INPUT_CURSOR_SCROLL_DOWN*/))
						{
							if (uParam0->f_366 == 0)
							{
								uParam0->f_367++;
							}
							else
							{
								uParam0->f_368++;
							}
							AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FREEMODE_SOUNDSET", true);
							MISC::SET_BIT(&(uParam0->f_373), 5);
							MISC::CLEAR_BIT(&(uParam0->f_370), 0);
							__LIB_0__::clearF_1Prop(&(uParam0->f_371));
						}
					}
					else if (__LIB_7__::func_272(uParam0, 173))
					{
						MISC::CLEAR_BIT(&(uParam0->f_373), 5);
					}
				}
				if (uParam0->f_366 == 0)
				{
					if (uParam0->f_367 >= uParam0->f_369)
					{
						uParam0->f_367 = 0;
					}
					if (uParam0->f_367 < 0)
					{
						uParam0->f_367 = (uParam0->f_369 - 1);
					}
				}
				else
				{
					if (uParam0->f_368 >= uParam0->f_369)
					{
						uParam0->f_368 = 0;
					}
					if (uParam0->f_368 < 0)
					{
						uParam0->f_368 = (uParam0->f_369 - 1);
					}
				}
				__LIB_11__::func_959(uParam0, bParam4, bVar1, iParam3, bParam6);
				if (!BitTest(uParam0->f_373, 2) && !HUD::IS_WARNING_MESSAGE_ACTIVE())
				{
					__LIB_11__::func_266(1, iParam5, 1, 0, 1, -1082130432, 0, 0, -1);
				}
			}
		}
	}
	return 0;
}

void func_282(var uParam0, int iParam1, bool bParam2)//Position - 0x1C43B
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	struct<2> Var6;
	bool bVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	struct<3> Var12;
	struct<16> Var13;
	struct<4> Var14;
	iVar0 = 0;
	__LIB_1__::func_602(0, 0);
	if (bParam2)
	{
		__LIB_8__::func_891(__LIB_7__::func_139(), 0);
	}
	__LIB_1__::func_766(1, 1, 0, 0, 0);
	__LIB_1__::func_765(1, 2, 1, 1, 1);
	__LIB_4__::func_846(0, 0, 0, 0, 0);
	bVar2 = false;
	bVar7 = __LIB_1__::func_819(iParam1);
	iVar11 = 1;
	switch (uParam0->f_366)
	{
		case 0:
			uParam0->f_375 = 0;
			__LIB_1__::func_767("DEL_VEH_SEL0" /* GXT: SELECT PROPERTY */);
			iVar1 = 0;
			while (iVar1 < 29)
			{
				iVar3 = __LIB_31__::func_584(iVar1, -1);
				if ((iVar3 > 0 && __LIB_3__::func_529(iVar3)) && func_319(iVar1))
				{
					if (!__LIB_3__::func_561(iParam1, iVar1))
					{
					}
					else
					{
						Var14 = { Global_1312193[iVar3 /*1951*/].f_16 };
						if (iVar3 == 116)
						{
							StringCopy(&Var14, __LIB_3__::func_552(__LIB_1__::func_380(PLAYER::PLAYER_ID())), 16);
						}
						if (iVar3 == 117)
						{
							StringCopy(&Var14, __LIB_3__::func_551(__LIB_1__::func_817(PLAYER::PLAYER_ID())), 16);
						}
						if (iVar3 == 118)
						{
							StringCopy(&Var14, "MP_BHUB_CLUBG" /* GXT: Nightclub Service Entrance */, 16);
						}
						if (iVar3 == 119)
						{
							StringCopy(&Var14, __LIB_3__::func_550(1), 16);
						}
						if (iVar3 == 120)
						{
							StringCopy(&Var14, __LIB_3__::func_550(2), 16);
						}
						if (iVar3 == 121)
						{
							StringCopy(&Var14, __LIB_3__::func_550(3), 16);
						}
						if (iVar3 == 122)
						{
							StringCopy(&Var14, __LIB_3__::func_549(1), 16);
						}
						if (iVar3 == 123)
						{
							StringCopy(&Var14, __LIB_3__::func_549(2), 16);
						}
						if (iVar3 == 124)
						{
							StringCopy(&Var14, __LIB_3__::func_549(3), 16);
						}
						if (iVar3 == 125)
						{
							StringCopy(&Var14, "CASINO_GARNAME" /* GXT: Casino Penthouse Garage */, 16);
						}
						if (iVar3 == 126)
						{
							StringCopy(&Var14, "ARCADE_GARNAME" /* GXT: Arcade Garage */, 16);
						}
						if (iVar3 == 127)
						{
							StringCopy(&Var14, "AUT_SHP_GAR" /* GXT: Auto Shop Storage */, 16);
						}
						if (iVar3 == 128)
						{
							StringCopy(&Var14, "FIXER_GARNAME" /* GXT: Agency Garage */, 16);
						}
						if (!__LIB_7__::func_137())
						{
							if (!__LIB_7__::func_136() && !__LIB_7__::func_135(iVar3))
							{
								__LIB_3__::func_572(iVar0, &Var14, 0, 1, 0, 0, 0);
							}
							else
							{
								Var6 = { Var14 };
								StringConCat(&Var6, "S", 16);
								__LIB_3__::func_572(iVar0, &Var6, 0, 1, 0, 0, 0);
							}
						}
						else
						{
							__LIB_3__::func_572(iVar0, "PIM_DNAME" /* GXT: ~a~ */, 1, 1, 0, 0, 0);
							__LIB_13__::func_395(HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&Var14), 0, 1, 1);
						}
						uParam0->f_1[iVar0] = iVar1;
						iVar0++;
					}
				}
				iVar1++;
			}
			if (((((__LIB_0__::func_369(5396, -1, 0) != 0 && __LIB_0__::func_253(15270, -1) == 7) && !Global_262145.f_21126 /* Tunable: DISABLE_STORE_PV */) && __LIB_8__::func_996(iParam1, 156)) && !VEHICLE::IS_THIS_MODEL_A_HELI(iParam1)) && !VEHICLE::IS_THIS_MODEL_A_PLANE(iParam1))
			{
				__LIB_3__::func_572(iVar0, __LIB_3__::func_548(0), 0, 1, 0, 0, 0);
				uParam0->f_1[iVar0] = __LIB_3__::func_547(0);
				iVar0++;
			}
			if (__LIB_12__::func_386(-1) && __LIB_8__::func_996(iParam1, 223))
			{
				__LIB_3__::func_572(iVar0, __LIB_3__::func_548(2), 0, 1, 0, 0, 0);
				uParam0->f_1[iVar0] = __LIB_3__::func_547(2);
				iVar0++;
			}
			if (__LIB_12__::func_385(-1) && __LIB_8__::func_996(iParam1, 278))
			{
				__LIB_3__::func_572(iVar0, __LIB_3__::func_548(3), 0, 1, 0, 0, 0);
				uParam0->f_1[iVar0] = __LIB_3__::func_547(3);
				iVar0++;
			}
			uParam0->f_369 = iVar0;
			__LIB_3__::func_110(uParam0->f_367, 1, 1);
			break;
		case 1:
			if (VEHICLE::IS_THIS_MODEL_A_HELI(iParam1) || VEHICLE::IS_THIS_MODEL_A_PLANE(iParam1))
			{
				__LIB_1__::func_767("DEL_VEH_SEL3ac" /* GXT: Select Aircraft Position */);
			}
			else
			{
				__LIB_1__::func_767("DEL_VEH_SEL3" /* GXT: Select Vehicle Position */);
			}
			uParam0->f_365 = 0;
			iVar4 = __LIB_4__::func_982(uParam0->f_375);
			iVar5 = (10 + __LIB_4__::func_982(uParam0->f_375));
			if (uParam0->f_375 >= 29)
			{
				iVar10 = __LIB_1__::func_596(uParam0->f_375);
				iVar1 = 0;
				while (iVar1 < __LIB_3__::func_546(iVar10))
				{
					iVar8 = (iVar1 + iVar4);
					if (!bVar7)
					{
						if (__LIB_1__::func_770(iVar8))
						{
							bVar2 = true;
						}
					}
					else if (!__LIB_1__::func_770(iVar8))
					{
						bVar2 = true;
					}
					if (!__LIB_8__::func_996(iParam1, iVar8))
					{
						bVar2 = true;
					}
					if (!bVar2)
					{
						__LIB_1__::func_775(iVar8, &iVar9, 1);
						if ((iVar9 >= 0 && Global_1585857[iVar9 /*142*/].f_66 != 0) && STREAMING::IS_MODEL_IN_CDIMAGE(Global_1585857[iVar9 /*142*/].f_66))
						{
							iVar11 = 1;
							StringCopy(&Var12, "", 24);
							if (__LIB_3__::func_545(&(Global_1585857[iVar9 /*142*/])))
							{
								iVar11++;
							}
							if (__LIB_3__::func_544(Global_1585857[iVar9 /*142*/].f_66, Global_1585857[iVar9 /*142*/].f_77, Global_1585857[iVar9 /*142*/].f_9[10]) && __LIB_3__::func_543(Global_1585857[iVar9 /*142*/].f_66))
							{
								iVar11++;
							}
							Var13 = { __LIB_8__::func_890(-1, iVar8, 1) };
							if (BitTest(Global_1585857[iVar9 /*142*/].f_103, 1))
							{
								if (BitTest(Global_1585857[iVar9 /*142*/].f_103, 2) && !bVar7)
								{
									StringCopy(&Var12, "MP_MAN_VEH_S0" /* GXT: ~a~ ~a~ (Destroyed) */, 24);
									StringIntConCat(&Var12, iVar11, 24);
									__LIB_3__::func_572(iVar0, &Var12, iVar11, 1, 0, 0, 0);
									if (MISC::IS_STRING_NULL_OR_EMPTY(&Var13))
									{
										__LIB_13__::func_399(VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(Global_1585857[iVar9 /*142*/].f_66), 0);
									}
									else
									{
										__LIB_13__::func_396(&Var13, 0, 0, 1);
									}
									if (__LIB_3__::func_545(&(Global_1585857[iVar9 /*142*/])))
									{
										__LIB_13__::func_399("VEH_LIVERY" /* GXT: (Livery) */, 0);
									}
									if (__LIB_3__::func_544(Global_1585857[iVar9 /*142*/].f_66, Global_1585857[iVar9 /*142*/].f_77, Global_1585857[iVar9 /*142*/].f_9[10]) && __LIB_3__::func_543(Global_1585857[iVar9 /*142*/].f_66))
									{
										__LIB_13__::func_399("VEH_TOPL" /* GXT: Topless */, 0);
									}
									uParam0->f_1[iVar0] = iVar8;
									iVar0++;
								}
								else
								{
									__LIB_3__::func_572(iVar0, "MP_MAN_VEH_S" /* GXT: Empty */, 0, 1, 0, 0, 0);
									uParam0->f_1[iVar0] = iVar8;
									MISC::SET_BIT(&(uParam0->f_365), iVar0);
									iVar0++;
								}
							}
							else if (bVar7)
							{
								if (__LIB_1__::func_819(Global_1585857[iVar9 /*142*/].f_66))
								{
									if (BitTest(Global_1585857[iVar9 /*142*/].f_103, 6))
									{
										StringCopy(&Var12, "MP_MAN_VEH_S1" /* GXT: ~a~ ~a~ (Impounded) */, 24);
										StringIntConCat(&Var12, iVar11, 24);
										__LIB_3__::func_572(iVar0, &Var12, iVar11, 1, 0, 0, 0);
										if (MISC::IS_STRING_NULL_OR_EMPTY(&Var13))
										{
											__LIB_13__::func_399(VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(Global_1585857[iVar9 /*142*/].f_66), 0);
										}
										else
										{
											__LIB_13__::func_396(&Var13, 0, 0, 1);
										}
										if (__LIB_3__::func_545(&(Global_1585857[iVar9 /*142*/])))
										{
											__LIB_13__::func_399("VEH_LIVERY" /* GXT: (Livery) */, 0);
										}
										if (__LIB_3__::func_544(Global_1585857[iVar9 /*142*/].f_66, Global_1585857[iVar9 /*142*/].f_77, Global_1585857[iVar9 /*142*/].f_9[10]) && __LIB_3__::func_543(Global_1585857[iVar9 /*142*/].f_66))
										{
											__LIB_13__::func_399("VEH_TOPL" /* GXT: Topless */, 0);
										}
									}
									else
									{
										StringCopy(&Var12, "PIL_MP_VEH_0" /* GXT: ~a~ ~a~ */, 24);
										StringIntConCat(&Var12, iVar11, 24);
										__LIB_3__::func_572(iVar0, &Var12, iVar11, 1, 0, 0, 0);
										if (MISC::IS_STRING_NULL_OR_EMPTY(&Var13))
										{
											__LIB_13__::func_399(VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(Global_1585857[iVar9 /*142*/].f_66), 0);
										}
										else
										{
											__LIB_13__::func_396(&Var13, 0, 0, 1);
										}
										if (__LIB_3__::func_545(&(Global_1585857[iVar9 /*142*/])))
										{
											__LIB_13__::func_399("VEH_LIVERY" /* GXT: (Livery) */, 0);
										}
										if (__LIB_3__::func_544(Global_1585857[iVar9 /*142*/].f_66, Global_1585857[iVar9 /*142*/].f_77, Global_1585857[iVar9 /*142*/].f_9[10]) && __LIB_3__::func_543(Global_1585857[iVar9 /*142*/].f_66))
										{
											__LIB_13__::func_399("VEH_TOPL" /* GXT: Topless */, 0);
										}
									}
									uParam0->f_1[iVar0] = iVar8;
									iVar0++;
								}
							}
							else if (!__LIB_1__::func_819(Global_1585857[iVar9 /*142*/].f_66))
							{
								if (BitTest(Global_1585857[iVar9 /*142*/].f_103, 6))
								{
									StringCopy(&Var12, "MP_MAN_VEH_S1" /* GXT: ~a~ ~a~ (Impounded) */, 24);
									StringIntConCat(&Var12, iVar11, 24);
									__LIB_3__::func_572(iVar0, &Var12, iVar11, 1, 0, 0, 0);
									if (MISC::IS_STRING_NULL_OR_EMPTY(&Var13))
									{
										__LIB_13__::func_399(VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(Global_1585857[iVar9 /*142*/].f_66), 0);
									}
									else
									{
										__LIB_13__::func_396(&Var13, 0, 0, 1);
									}
									if (__LIB_3__::func_545(&(Global_1585857[iVar9 /*142*/])))
									{
										__LIB_13__::func_399("VEH_LIVERY" /* GXT: (Livery) */, 0);
									}
									if (__LIB_3__::func_544(Global_1585857[iVar9 /*142*/].f_66, Global_1585857[iVar9 /*142*/].f_77, Global_1585857[iVar9 /*142*/].f_9[10]) && __LIB_3__::func_543(Global_1585857[iVar9 /*142*/].f_66))
									{
										__LIB_13__::func_399("VEH_TOPL" /* GXT: Topless */, 0);
									}
								}
								else
								{
									StringCopy(&Var12, "PIL_MP_VEH_0" /* GXT: ~a~ ~a~ */, 24);
									StringIntConCat(&Var12, iVar11, 24);
									__LIB_3__::func_572(iVar0, &Var12, iVar11, 1, 0, 0, 0);
									if (MISC::IS_STRING_NULL_OR_EMPTY(&Var13))
									{
										__LIB_13__::func_399(VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(Global_1585857[iVar9 /*142*/].f_66), 0);
									}
									else
									{
										__LIB_13__::func_396(&Var13, 0, 0, 1);
									}
									if (__LIB_3__::func_545(&(Global_1585857[iVar9 /*142*/])))
									{
										__LIB_13__::func_399("VEH_LIVERY" /* GXT: (Livery) */, 0);
									}
									if (__LIB_3__::func_544(Global_1585857[iVar9 /*142*/].f_66, Global_1585857[iVar9 /*142*/].f_77, Global_1585857[iVar9 /*142*/].f_9[10]) && __LIB_3__::func_543(Global_1585857[iVar9 /*142*/].f_66))
									{
										__LIB_13__::func_399("VEH_TOPL" /* GXT: Topless */, 0);
									}
								}
								uParam0->f_1[iVar0] = iVar8;
								iVar0++;
							}
						}
						else
						{
							__LIB_3__::func_572(iVar0, "MP_MAN_VEH_S" /* GXT: Empty */, 0, 1, 0, 0, 0);
							uParam0->f_1[iVar0] = iVar8;
							MISC::SET_BIT(&(uParam0->f_365), iVar0);
							iVar0++;
						}
					}
					iVar1++;
				}
			}
			else
			{
				iVar3 = __LIB_31__::func_584(uParam0->f_375, -1);
				iVar1 = 0;
				while (iVar1 < __LIB_3__::func_2(uParam0->f_375, -1, 1))
				{
					iVar8 = (iVar1 + iVar4);
					bVar2 = false;
					if (iVar3 <= 0)
					{
						bVar2 = true;
					}
					else if (Global_1312193[iVar3 /*1951*/].f_33 == 2)
					{
						if (iVar8 >= iVar4 + 2 && iVar8 != iVar5)
						{
							bVar2 = true;
						}
					}
					else if (Global_1312193[iVar3 /*1951*/].f_33 == 6)
					{
						if ((iVar8 >= iVar4 + 6 && iVar8 != iVar5) && iVar8 != iVar5 + 1)
						{
							bVar2 = true;
						}
					}
					if (!bVar7)
					{
						if (iVar8 >= iVar5 && __LIB_1__::func_770(iVar8))
						{
							bVar2 = true;
						}
					}
					else if (iVar8 < iVar5)
					{
						bVar2 = true;
					}
					if (!__LIB_6__::func_442(iVar8, iVar3, uParam0->f_375))
					{
						bVar2 = true;
					}
					if (!__LIB_8__::func_996(iParam1, iVar8))
					{
						bVar2 = true;
					}
					if (!bVar2)
					{
						__LIB_1__::func_775(iVar8, &iVar9, 1);
						if ((iVar9 >= 0 && Global_1585857[iVar9 /*142*/].f_66 != 0) && STREAMING::IS_MODEL_IN_CDIMAGE(Global_1585857[iVar9 /*142*/].f_66))
						{
							iVar11 = 1;
							StringCopy(&Var12, "", 24);
							if (__LIB_3__::func_545(&(Global_1585857[iVar9 /*142*/])))
							{
								iVar11++;
							}
							if (__LIB_3__::func_544(Global_1585857[iVar9 /*142*/].f_66, Global_1585857[iVar9 /*142*/].f_77, Global_1585857[iVar9 /*142*/].f_9[10]) && __LIB_3__::func_543(Global_1585857[iVar9 /*142*/].f_66))
							{
								iVar11++;
							}
							Var13 = { __LIB_8__::func_890(-1, iVar8, 1) };
							if (BitTest(Global_1585857[iVar9 /*142*/].f_103, 1))
							{
								if (BitTest(Global_1585857[iVar9 /*142*/].f_103, 2) && !bVar7)
								{
									StringCopy(&Var12, "MP_MAN_VEH_S0" /* GXT: ~a~ ~a~ (Destroyed) */, 24);
									StringIntConCat(&Var12, iVar11, 24);
									__LIB_3__::func_572(iVar0, &Var12, iVar11, 1, 0, 0, 0);
									if (MISC::IS_STRING_NULL_OR_EMPTY(&Var13))
									{
										__LIB_13__::func_399(VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(Global_1585857[iVar9 /*142*/].f_66), 0);
									}
									else
									{
										__LIB_13__::func_396(&Var13, 0, 0, 1);
									}
									if (__LIB_3__::func_545(&(Global_1585857[iVar9 /*142*/])))
									{
										__LIB_13__::func_399("VEH_LIVERY" /* GXT: (Livery) */, 0);
									}
									if (__LIB_3__::func_544(Global_1585857[iVar9 /*142*/].f_66, Global_1585857[iVar9 /*142*/].f_77, Global_1585857[iVar9 /*142*/].f_9[10]) && __LIB_3__::func_543(Global_1585857[iVar9 /*142*/].f_66))
									{
										__LIB_13__::func_399("VEH_TOPL" /* GXT: Topless */, 0);
									}
									uParam0->f_1[iVar0] = iVar8;
									iVar0++;
								}
								else
								{
									__LIB_3__::func_572(iVar0, "MP_MAN_VEH_S" /* GXT: Empty */, 0, 1, 0, 0, 0);
									uParam0->f_1[iVar0] = iVar8;
									MISC::SET_BIT(&(uParam0->f_365), iVar0);
									iVar0++;
								}
							}
							else if (bVar7)
							{
								if (__LIB_1__::func_819(Global_1585857[iVar9 /*142*/].f_66))
								{
									if (BitTest(Global_1585857[iVar9 /*142*/].f_103, 6))
									{
										StringCopy(&Var12, "MP_MAN_VEH_S1" /* GXT: ~a~ ~a~ (Impounded) */, 24);
										StringIntConCat(&Var12, iVar11, 24);
										__LIB_3__::func_572(iVar0, &Var12, iVar11, 1, 0, 0, 0);
										if (MISC::IS_STRING_NULL_OR_EMPTY(&Var13))
										{
											__LIB_13__::func_399(VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(Global_1585857[iVar9 /*142*/].f_66), 0);
										}
										else
										{
											__LIB_13__::func_396(&Var13, 0, 0, 1);
										}
										if (__LIB_3__::func_545(&(Global_1585857[iVar9 /*142*/])))
										{
											__LIB_13__::func_399("VEH_LIVERY" /* GXT: (Livery) */, 0);
										}
										if (__LIB_3__::func_544(Global_1585857[iVar9 /*142*/].f_66, Global_1585857[iVar9 /*142*/].f_77, Global_1585857[iVar9 /*142*/].f_9[10]) && __LIB_3__::func_543(Global_1585857[iVar9 /*142*/].f_66))
										{
											__LIB_13__::func_399("VEH_TOPL" /* GXT: Topless */, 0);
										}
									}
									else
									{
										StringCopy(&Var12, "PIL_MP_VEH_0" /* GXT: ~a~ ~a~ */, 24);
										StringIntConCat(&Var12, iVar11, 24);
										__LIB_3__::func_572(iVar0, &Var12, iVar11, 1, 0, 0, 0);
										if (MISC::IS_STRING_NULL_OR_EMPTY(&Var13))
										{
											__LIB_13__::func_399(VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(Global_1585857[iVar9 /*142*/].f_66), 0);
										}
										else
										{
											__LIB_13__::func_396(&Var13, 0, 0, 1);
										}
										if (__LIB_3__::func_545(&(Global_1585857[iVar9 /*142*/])))
										{
											__LIB_13__::func_399("VEH_LIVERY" /* GXT: (Livery) */, 0);
										}
										if (__LIB_3__::func_544(Global_1585857[iVar9 /*142*/].f_66, Global_1585857[iVar9 /*142*/].f_77, Global_1585857[iVar9 /*142*/].f_9[10]) && __LIB_3__::func_543(Global_1585857[iVar9 /*142*/].f_66))
										{
											__LIB_13__::func_399("VEH_TOPL" /* GXT: Topless */, 0);
										}
									}
									uParam0->f_1[iVar0] = iVar8;
									iVar0++;
								}
							}
							else if (!__LIB_1__::func_819(Global_1585857[iVar9 /*142*/].f_66))
							{
								if (BitTest(Global_1585857[iVar9 /*142*/].f_103, 6))
								{
									StringCopy(&Var12, "MP_MAN_VEH_S1" /* GXT: ~a~ ~a~ (Impounded) */, 24);
									StringIntConCat(&Var12, iVar11, 24);
									__LIB_3__::func_572(iVar0, &Var12, iVar11, 1, 0, 0, 0);
									if (MISC::IS_STRING_NULL_OR_EMPTY(&Var13))
									{
										__LIB_13__::func_399(VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(Global_1585857[iVar9 /*142*/].f_66), 0);
									}
									else
									{
										__LIB_13__::func_396(&Var13, 0, 0, 1);
									}
									if (__LIB_3__::func_545(&(Global_1585857[iVar9 /*142*/])))
									{
										__LIB_13__::func_399("VEH_LIVERY" /* GXT: (Livery) */, 0);
									}
									if (__LIB_3__::func_544(Global_1585857[iVar9 /*142*/].f_66, Global_1585857[iVar9 /*142*/].f_77, Global_1585857[iVar9 /*142*/].f_9[10]) && __LIB_3__::func_543(Global_1585857[iVar9 /*142*/].f_66))
									{
										__LIB_13__::func_399("VEH_TOPL" /* GXT: Topless */, 0);
									}
								}
								else
								{
									StringCopy(&Var12, "PIL_MP_VEH_0" /* GXT: ~a~ ~a~ */, 24);
									StringIntConCat(&Var12, iVar11, 24);
									__LIB_3__::func_572(iVar0, &Var12, iVar11, 1, 0, 0, 0);
									if (MISC::IS_STRING_NULL_OR_EMPTY(&Var13))
									{
										__LIB_13__::func_399(VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(Global_1585857[iVar9 /*142*/].f_66), 0);
									}
									else
									{
										__LIB_13__::func_396(&Var13, 0, 0, 1);
									}
									if (__LIB_3__::func_545(&(Global_1585857[iVar9 /*142*/])))
									{
										__LIB_13__::func_399("VEH_LIVERY" /* GXT: (Livery) */, 0);
									}
									if (__LIB_3__::func_544(Global_1585857[iVar9 /*142*/].f_66, Global_1585857[iVar9 /*142*/].f_77, Global_1585857[iVar9 /*142*/].f_9[10]) && __LIB_3__::func_543(Global_1585857[iVar9 /*142*/].f_66))
									{
										__LIB_13__::func_399("VEH_TOPL" /* GXT: Topless */, 0);
									}
								}
								uParam0->f_1[iVar0] = iVar8;
								iVar0++;
							}
						}
						else
						{
							__LIB_3__::func_572(iVar0, "MP_MAN_VEH_S" /* GXT: Empty */, 0, 1, 0, 0, 0);
							uParam0->f_1[iVar0] = iVar8;
							MISC::SET_BIT(&(uParam0->f_365), iVar0);
							iVar0++;
						}
					}
					iVar1++;
				}
			}
			uParam0->f_369 = iVar0;
			if (uParam0->f_368 >= uParam0->f_369)
			{
				uParam0->f_368 = 0;
			}
			__LIB_3__::func_110(uParam0->f_368, 1, 1);
			break;
	}
	__LIB_3__::func_564(-1);
	__LIB_1__::func_791(176, "BB_SELECT" /* GXT: Select */, -1);
	__LIB_1__::func_791(177, "BB_BACK" /* GXT: Back */, -1);
}

int func_319(int iParam0)//Position - 0x1ED9F
{
	if (iParam0 == 22)
	{
		if (!func_322())
		{
			return 0;
		}
	}
	else if (iParam0 == 25)
	{
		if (!func_320(1))
		{
			return 0;
		}
	}
	return 1;
}

bool func_320(bool bParam0)//Position - 0x1EDD2
{
	if (bParam0)
	{
		return BitTest(__LIB_0__::func_369(9618, -1, 0), 0);
	}
	return __LIB_12__::func_382(PLAYER::PLAYER_ID());
}

bool func_322()//Position - 0x1EE2A
{
	return (__LIB_3__::func_560(0) && __LIB_35__::func_377(0));
}

int func_349(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, bool bParam5)//Position - 0x1FF78
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	if (Global_262145.f_10629 /* Tunable: MPSV_DISABLE_DISPLAY_SLOTS */)
	{
		if (bParam5)
		{
			return func_354(iParam0, bParam1, iParam2, iParam3, iParam4, 0);
		}
		else
		{
			return func_357(iParam0, bParam1, iParam2, iParam3, iParam4, 0);
		}
	}
	if (__LIB_2__::func_782(iParam3, 0, 0))
	{
		iParam3 = __LIB_3__::func_553(iParam3);
	}
	if (!__LIB_1__::func_840(iParam2) && __LIB_3__::func_712(iParam2, 0))
	{
		iVar6 = __LIB_7__::func_365(iParam2);
		if (iVar6 >= 0)
		{
			if (bParam5)
			{
				__LIB_7__::func_140(iVar6, &iVar7, iParam4);
			}
			else
			{
				__LIB_1__::func_775(iVar6, &iVar7, 1);
			}
			if (iVar7 >= 0)
			{
				if (bParam5)
				{
					if (__LIB_0__::func_369(__LIB_1__::func_811(4, iVar7), iParam4, 0) == 0)
					{
						return iVar7;
					}
					else
					{
						iVar5 = __LIB_0__::func_369(__LIB_1__::func_811(1, iVar7), iParam4, 0);
						if (bParam1)
						{
							if (BitTest(iVar5, 0))
							{
								return iVar7;
							}
						}
					}
				}
				else if (Global_1585857[iVar7 /*142*/].f_66 == 0)
				{
					return iVar6;
				}
				else if (bParam1)
				{
					if (BitTest(Global_1585857[iVar7 /*142*/].f_103, 0))
					{
						return iVar6;
					}
				}
			}
			else
			{
				return iVar6;
			}
		}
		return -1;
	}
	if (((__LIB_0__::func_369(5396, iParam4, 0) != 0 && __LIB_0__::func_253(15270, iParam4) == 7) && !Global_262145.f_21126 /* Tunable: DISABLE_STORE_PV */) && __LIB_8__::func_996(iParam2, 156))
	{
		if ((iParam3 == 0 || iParam3 == -1) || iParam3 == 1234)
		{
			iVar6 = func_351(156, iParam0, bParam1, iParam2, iParam4, bParam5);
			if (iVar6 != -1)
			{
				return iVar6;
			}
		}
	}
	if (__LIB_12__::func_386(iParam4) && __LIB_8__::func_996(iParam2, 223))
	{
		if ((iParam3 == 0 || iParam3 == -1) || iParam3 == 1236)
		{
			iVar6 = func_351(223, iParam0, bParam1, iParam2, iParam4, bParam5);
			if (iVar6 != -1)
			{
				return iVar6;
			}
		}
	}
	if (__LIB_12__::func_385(iParam4) && __LIB_8__::func_996(iParam2, 278))
	{
		if ((iParam3 == 0 || iParam3 == -1) || iParam3 == 1238)
		{
			iVar6 = func_351(278, iParam0, bParam1, iParam2, iParam4, bParam5);
			if (iVar6 != -1)
			{
				return iVar6;
			}
		}
	}
	iVar1 = 0;
	while (iVar1 < 29)
	{
		if (func_350(iVar1))
		{
		}
		else if (__LIB_31__::func_584(iVar1, iParam4) >= Global_1312193)
		{
			return -1;
		}
		else if (__LIB_31__::func_584(iVar1, iParam4) > 0 && __LIB_31__::func_584(iVar1, iParam4) <= 128)
		{
			iVar2 = 0;
			if ((iParam3 == 0 || iParam3 == -1) || iParam3 == __LIB_31__::func_584(iVar1, iParam4))
			{
				iVar4 = Global_1312193[__LIB_31__::func_584(iVar1, iParam4) /*1951*/].f_33;
				if (__LIB_31__::func_584(iVar1, iParam4) == 116)
				{
					iVar4 = 20;
				}
				else if (__LIB_31__::func_584(iVar1, iParam4) == 117)
				{
					iVar4 = 7;
				}
				else if (__LIB_31__::func_584(iVar1, iParam4) == 118)
				{
					iVar4 = 1;
				}
				else if ((__LIB_31__::func_584(iVar1, iParam4) == 119 || __LIB_31__::func_584(iVar1, iParam4) == 120) || __LIB_31__::func_584(iVar1, iParam4) == 121)
				{
					iVar4 = 10;
				}
				else if ((__LIB_31__::func_584(iVar1, iParam4) == 122 || __LIB_31__::func_584(iVar1, iParam4) == 123) || __LIB_31__::func_584(iVar1, iParam4) == 124)
				{
					iVar4 = 10;
				}
				else if (__LIB_31__::func_584(iVar1, iParam4) == 125)
				{
					iVar4 = 10;
				}
				else if (__LIB_31__::func_584(iVar1, iParam4) == 126)
				{
					iVar4 = 10;
				}
				else if (__LIB_31__::func_584(iVar1, iParam4) == 127)
				{
					iVar4 = 10;
				}
				else if (__LIB_31__::func_584(iVar1, iParam4) == 128)
				{
					iVar4 = 20;
				}
				if (__LIB_1__::func_819(iParam2))
				{
					if (iVar4 == 10)
					{
						iVar3 = 3;
					}
					else if (iVar4 == 6)
					{
						iVar3 = 2;
					}
					else
					{
						iVar3 = 1;
					}
					iVar2 = 10;
				}
				else
				{
					iVar3 = iVar4;
					iVar2 = 0;
				}
				iVar2 = (iVar2 + __LIB_4__::func_982(iVar1));
				iVar7 = -1;
				iVar6 = -1;
				switch (iParam0)
				{
					case 0:
						iVar0 = 0;
						while (iVar0 < iVar3)
						{
							iVar7 = -1;
							iVar6 = (iVar2 + iVar0);
							if (__LIB_6__::func_442(iVar6, __LIB_31__::func_584(iVar1, iParam4), iVar1) && __LIB_8__::func_996(iParam2, iVar6))
							{
								if (bParam5)
								{
									__LIB_7__::func_140(iVar6, &iVar7, iParam4);
								}
								else
								{
									__LIB_1__::func_775(iVar6, &iVar7, 1);
								}
								if (iVar7 >= 0)
								{
									if (bParam5)
									{
										if (__LIB_0__::func_369(__LIB_1__::func_811(4, iVar7), iParam4, 0) == 0)
										{
											return iVar7;
										}
										else
										{
											iVar5 = __LIB_0__::func_369(__LIB_1__::func_811(1, iVar7), iParam4, 0);
											if (bParam1)
											{
												if (BitTest(iVar5, 0))
												{
													return iVar7;
												}
											}
										}
									}
									else if (Global_1585857[iVar7 /*142*/].f_66 == 0)
									{
										return iVar6;
									}
									else if (bParam1)
									{
										if (BitTest(Global_1585857[iVar7 /*142*/].f_103, 0))
										{
											return iVar6;
										}
									}
								}
								else
								{
									return iVar6;
								}
							}
							iVar0++;
						}
						break;
					case 1:
						iVar0 = 0;
						while (iVar0 < iVar3)
						{
							iVar7 = -1;
							iVar6 = (iVar2 + iVar0);
							if (__LIB_6__::func_442(iVar6, __LIB_31__::func_584(iVar1, iParam4), iVar1) && __LIB_8__::func_996(iParam2, iVar6))
							{
								if (bParam5)
								{
									__LIB_7__::func_140(iVar6, &iVar7, iParam4);
								}
								else
								{
									__LIB_1__::func_775(iVar6, &iVar7, 1);
								}
								if (iVar7 >= 0)
								{
									if (bParam5)
									{
										if (__LIB_0__::func_369(__LIB_1__::func_811(4, iVar7), iParam4, 0) == 0)
										{
											return iVar6;
										}
									}
									else if (Global_1585857[iVar7 /*142*/].f_66 == 0)
									{
										return iVar6;
									}
								}
								else
								{
									return iVar6;
								}
							}
							iVar0++;
						}
						if (bParam1)
						{
							iVar0 = 0;
							while (iVar0 < iVar3)
							{
								iVar7 = -1;
								iVar6 = (iVar2 + iVar0);
								if (__LIB_6__::func_442(iVar6, __LIB_31__::func_584(iVar1, iParam4), iVar1) && __LIB_8__::func_996(iParam2, iVar6))
								{
									if (bParam5)
									{
										__LIB_7__::func_140(iVar6, &iVar7, iParam4);
									}
									else
									{
										__LIB_1__::func_775(iVar6, &iVar7, 1);
									}
									if (iVar7 >= 0)
									{
										if (bParam5)
										{
											iVar5 = __LIB_0__::func_369(__LIB_1__::func_811(1, iVar7), iParam4, 0);
											if (BitTest(iVar5, 0))
											{
												return iVar6;
											}
										}
										else if (BitTest(Global_1585857[iVar7 /*142*/].f_103, 0))
										{
											return iVar6;
										}
									}
									else
									{
										return iVar6;
									}
								}
								iVar0++;
							}
						}
						iVar0 = 0;
						while (iVar0 < iVar3)
						{
							iVar7 = -1;
							iVar6 = (iVar2 + iVar0);
							if (__LIB_6__::func_442(iVar6, __LIB_31__::func_584(iVar1, iParam4), iVar1) && __LIB_8__::func_996(iParam2, iVar6))
							{
								if (bParam5)
								{
									__LIB_7__::func_140(iVar6, &iVar7, iParam4);
								}
								else
								{
									__LIB_1__::func_775(iVar6, &iVar7, 1);
								}
								if (iVar7 >= 0)
								{
									if (bParam5)
									{
										iVar5 = __LIB_0__::func_369(__LIB_1__::func_811(1, iVar7), iParam4, 0);
										if (BitTest(iVar5, 1) && !BitTest(iVar5, 2))
										{
											return iVar6;
										}
									}
									else if (BitTest(Global_1585857[iVar7 /*142*/].f_103, 1) && !BitTest(Global_1585857[iVar7 /*142*/].f_103, 2))
									{
										return iVar6;
									}
								}
								else
								{
									return iVar6;
								}
							}
							iVar0++;
						}
						break;
					case 2:
						iVar0 = 0;
						while (iVar0 < iVar3)
						{
							iVar7 = -1;
							iVar6 = (iVar2 + iVar0);
							if (__LIB_6__::func_442(iVar6, __LIB_31__::func_584(iVar1, iParam4), iVar1) && __LIB_8__::func_996(iParam2, iVar6))
							{
								if (bParam5)
								{
									__LIB_7__::func_140(iVar6, &iVar7, iParam4);
								}
								else
								{
									__LIB_1__::func_775(iVar6, &iVar7, 1);
								}
								if (iVar7 >= 0)
								{
									if (bParam5)
									{
										if (__LIB_0__::func_369(__LIB_1__::func_811(4, iVar7), iParam4, 0) == 0)
										{
											return iVar6;
										}
										else
										{
											iVar5 = __LIB_0__::func_369(__LIB_1__::func_811(1, iVar7), iParam4, 0);
											if (bParam1)
											{
												if (BitTest(iVar5, 0))
												{
													return iVar6;
												}
												else if (BitTest(iVar5, 1))
												{
													return iVar6;
												}
											}
											else if (BitTest(iVar5, 1))
											{
												return iVar6;
											}
										}
									}
									else if (Global_1585857[iVar7 /*142*/].f_66 == 0)
									{
										return iVar6;
									}
									else if (bParam1)
									{
										if (BitTest(Global_1585857[iVar7 /*142*/].f_103, 0))
										{
											return iVar6;
										}
										else if (BitTest(Global_1585857[iVar7 /*142*/].f_103, 1))
										{
											return iVar6;
										}
									}
									else if (BitTest(Global_1585857[iVar7 /*142*/].f_103, 1))
									{
										return iVar6;
									}
								}
								else
								{
									return iVar6;
								}
							}
							iVar0++;
						}
						break;
					}
				}
		}
		iVar1++;
	}
	return -1;
}

int func_350(int iParam0)//Position - 0x20786
{
	switch (iParam0)
	{
		case 5:
		case 99:
			return 1;
			break;
		case 22:
			if (!func_322())
			{
				return 1;
			}
			break;
		case 25:
			if (!func_320(1))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_351(int iParam0, int iParam1, bool bParam2, int iParam3, int iParam4, bool bParam5)//Position - 0x207D4
{
	int iVar0;
	int iVar1;
	iVar1 = -1;
	switch (iParam1)
	{
		case 0:
			if (__LIB_8__::func_996(iParam3, iParam0))
			{
				if (bParam5)
				{
					__LIB_7__::func_140(iParam0, &iVar1, iParam4);
				}
				else
				{
					__LIB_1__::func_775(iParam0, &iVar1, 1);
				}
				if (iVar1 >= 0)
				{
					if (bParam5)
					{
						if (__LIB_0__::func_369(__LIB_1__::func_811(4, iVar1), iParam4, 0) == 0)
						{
							return iVar1;
						}
						else
						{
							iVar0 = __LIB_0__::func_369(__LIB_1__::func_811(1, iVar1), iParam4, 0);
							if (bParam2)
							{
								if (BitTest(iVar0, 0))
								{
									return iVar1;
								}
							}
						}
					}
					else if (Global_1585857[iVar1 /*142*/].f_66 == 0)
					{
						return iParam0;
					}
					else if (bParam2)
					{
						if (BitTest(Global_1585857[iVar1 /*142*/].f_103, 0))
						{
							return iParam0;
						}
					}
				}
				else
				{
					return iParam0;
				}
			}
			break;
		case 1:
			iVar1 = -1;
			if (__LIB_8__::func_996(iParam3, iParam0))
			{
				if (bParam5)
				{
					__LIB_7__::func_140(iParam0, &iVar1, iParam4);
				}
				else
				{
					__LIB_1__::func_775(iParam0, &iVar1, 1);
				}
				if (iVar1 >= 0)
				{
					if (bParam5)
					{
						if (__LIB_0__::func_369(__LIB_1__::func_811(4, iVar1), iParam4, 0) == 0)
						{
							return iParam0;
						}
					}
					else if (Global_1585857[iVar1 /*142*/].f_66 == 0)
					{
						return iParam0;
					}
				}
				else
				{
					return iParam0;
				}
			}
			iVar1 = -1;
			if (bParam2)
			{
				if (__LIB_8__::func_996(iParam3, iParam0))
				{
					if (bParam5)
					{
						__LIB_7__::func_140(iParam0, &iVar1, iParam4);
					}
					else
					{
						__LIB_1__::func_775(iParam0, &iVar1, 1);
					}
					if (iVar1 >= 0)
					{
						if (bParam5)
						{
							iVar0 = __LIB_0__::func_369(__LIB_1__::func_811(1, iVar1), iParam4, 0);
							if (BitTest(iVar0, 0))
							{
								return iParam0;
							}
						}
						else if (BitTest(Global_1585857[iVar1 /*142*/].f_103, 0))
						{
							return iParam0;
						}
					}
					else
					{
						return iParam0;
					}
				}
			}
			iVar1 = -1;
			if (__LIB_8__::func_996(iParam3, iParam0))
			{
				if (bParam5)
				{
					__LIB_7__::func_140(iParam0, &iVar1, iParam4);
				}
				else
				{
					__LIB_1__::func_775(iParam0, &iVar1, 1);
				}
				if (iVar1 >= 0)
				{
					if (bParam5)
					{
						iVar0 = __LIB_0__::func_369(__LIB_1__::func_811(1, iVar1), iParam4, 0);
						if (BitTest(iVar0, 1) && !BitTest(iVar0, 2))
						{
							return iParam0;
						}
					}
					else if (BitTest(Global_1585857[iVar1 /*142*/].f_103, 1) && !BitTest(Global_1585857[iVar1 /*142*/].f_103, 2))
					{
						return iParam0;
					}
				}
				else
				{
					return iParam0;
				}
			}
			break;
		case 2:
			iVar1 = -1;
			if (__LIB_8__::func_996(iParam3, iParam0))
			{
				if (bParam5)
				{
					__LIB_7__::func_140(iParam0, &iVar1, iParam4);
				}
				else
				{
					__LIB_1__::func_775(iParam0, &iVar1, 1);
				}
				if (iVar1 >= 0)
				{
					if (bParam5)
					{
						if (__LIB_0__::func_369(__LIB_1__::func_811(4, iVar1), iParam4, 0) == 0)
						{
							return iParam0;
						}
						else
						{
							iVar0 = __LIB_0__::func_369(__LIB_1__::func_811(1, iVar1), iParam4, 0);
							if (bParam2)
							{
								if (BitTest(iVar0, 0))
								{
									return iParam0;
								}
								else if (BitTest(iVar0, 1))
								{
									return iParam0;
								}
							}
							else if (BitTest(iVar0, 1))
							{
								return iParam0;
							}
						}
					}
					else if (Global_1585857[iVar1 /*142*/].f_66 == 0)
					{
						return iParam0;
					}
					else if (bParam2)
					{
						if (BitTest(Global_1585857[iVar1 /*142*/].f_103, 0))
						{
							return iParam0;
						}
						else if (BitTest(Global_1585857[iVar1 /*142*/].f_103, 1))
						{
							return iParam0;
						}
					}
					else if (BitTest(Global_1585857[iVar1 /*142*/].f_103, 1))
					{
						return iParam0;
					}
				}
				else
				{
					return iParam0;
				}
			}
			break;
	}
	return -1;
}

int func_354(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x20BB6
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	int iVar7;
	bVar6 = __LIB_0__::func_112();
	bVar6 = true;
	if (__LIB_2__::func_782(iParam3, 0, 0))
	{
		iParam3 = __LIB_3__::func_553(iParam3);
	}
	if (!__LIB_1__::func_840(iParam2) && __LIB_3__::func_712(iParam2, 0))
	{
		iVar7 = __LIB_7__::func_365(iParam2);
		return func_356(iVar7, iParam0, bParam1, iParam2, 1, iParam4, iParam5);
	}
	iVar1 = 0;
	while (iVar1 < 29)
	{
		if ((bVar6 || __LIB_31__::func_584(iVar1, iParam4) > 0) && !func_350(iVar1))
		{
			iVar2 = 0;
			if ((bVar6 || iParam3 == 0) || iParam3 == __LIB_31__::func_584(iVar1, iParam4))
			{
				if (bVar6)
				{
					iVar4 = __LIB_3__::func_2(iVar1, -1, 1);
				}
				else
				{
					iVar4 = Global_1312193[__LIB_31__::func_584(iVar1, iParam4) /*1951*/].f_33;
				}
				if (__LIB_1__::func_819(iParam2))
				{
					if (iVar4 == 13)
					{
						iVar3 = 3;
					}
					else if (iVar4 == 8)
					{
						iVar3 = 2;
					}
					else
					{
						iVar3 = 1;
					}
					iVar2 = 10;
				}
				else
				{
					iVar3 = iVar4;
					iVar2 = 0;
				}
				iVar2 = (iVar2 + __LIB_4__::func_982(iVar1));
				iVar7 = 0;
				switch (iParam0)
				{
					case 0:
						iVar0 = 0;
						while (iVar0 < iVar3)
						{
							iVar7 = (iVar2 + iVar0);
							if (__LIB_8__::func_979(iParam2, iVar7))
							{
								if (__LIB_0__::func_369(__LIB_1__::func_811(4, iVar7), iParam4, 0) == 0)
								{
									return iVar7;
								}
								else
								{
									iVar5 = __LIB_0__::func_369(__LIB_1__::func_811(1, iVar7), iParam4, 0);
									if (bParam1)
									{
										if (BitTest(iVar5, 0))
										{
											return iVar7;
										}
									}
								}
							}
							iVar0++;
						}
						break;
					case 1:
						iVar0 = 0;
						while (iVar0 < iVar3)
						{
							iVar7 = (iVar2 + iVar0);
							if (__LIB_8__::func_979(iParam2, iVar7))
							{
								if (__LIB_0__::func_369(__LIB_1__::func_811(4, iVar7), iParam4, 0) == 0)
								{
									return iVar7;
								}
							}
							iVar0++;
						}
						if (bParam1)
						{
							iVar0 = 0;
							while (iVar0 < iVar3)
							{
								iVar7 = (iVar2 + iVar0);
								if (__LIB_8__::func_979(iParam2, iVar7))
								{
									iVar5 = __LIB_0__::func_369(__LIB_1__::func_811(1, iVar7), iParam4, 0);
									if (BitTest(iVar5, 0))
									{
										return iVar7;
									}
								}
								iVar0++;
							}
						}
						iVar0 = 0;
						while (iVar0 < iVar3)
						{
							iVar7 = (iVar2 + iVar0);
							if (__LIB_8__::func_979(iParam2, iVar7))
							{
								iVar5 = __LIB_0__::func_369(__LIB_1__::func_811(1, iVar7), iParam4, 0);
								if (BitTest(iVar5, 1) && !BitTest(iVar5, 2))
								{
									return iVar7;
								}
							}
							iVar0++;
						}
						break;
					case 2:
						iVar0 = 0;
						while (iVar0 < iVar3)
						{
							iVar7 = (iVar2 + iVar0);
							if (__LIB_8__::func_979(iParam2, iVar7))
							{
								if (__LIB_0__::func_369(__LIB_1__::func_811(4, iVar7), iParam4, 0) == 0)
								{
									return iVar7;
								}
								else
								{
									iVar5 = __LIB_0__::func_369(__LIB_1__::func_811(1, iVar7), iParam4, 0);
									if (bParam1)
									{
										if (BitTest(iVar5, 0))
										{
											return iVar7;
										}
										else if (BitTest(iVar5, 1))
										{
											return iVar7;
										}
									}
									else if (BitTest(iVar5, 1))
									{
										return iVar7;
									}
								}
							}
							iVar0++;
						}
						break;
					}
				}
		}
		iVar1++;
	}
	if ((__LIB_0__::func_369(5396, iParam4, 0) != 0 && !Global_262145.f_21126 /* Tunable: DISABLE_STORE_PV */) && __LIB_8__::func_996(iParam2, 156))
	{
		iVar7 = func_356(156, iParam0, bParam1, iParam2, 1, iParam4, 0);
		if (iVar7 != -1)
		{
			return iVar7;
		}
	}
	if (__LIB_12__::func_386(iParam4) && __LIB_8__::func_996(iParam2, 223))
	{
		iVar7 = func_356(223, iParam0, bParam1, iParam2, 1, iParam4, 0);
		if (iVar7 != -1)
		{
			return iVar7;
		}
	}
	if (__LIB_12__::func_385(iParam4) && __LIB_8__::func_996(iParam2, 278))
	{
		iVar7 = func_356(278, iParam0, bParam1, iParam2, 1, iParam4, 0);
		if (iVar7 != -1)
		{
			return iVar7;
		}
	}
	return -1;
}

int func_356(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, int iParam5, int iParam6)//Position - 0x21051
{
	int iVar0;
	if (iParam0 == 158 && iParam6)
	{
		if (__LIB_8__::func_979(iParam3, iParam0))
		{
			if (bParam4)
			{
				if (__LIB_0__::func_369(__LIB_1__::func_811(4, iParam0), iParam5, 0) == joaat("hauler2") || __LIB_0__::func_369(__LIB_1__::func_811(4, iParam0), iParam5, 0) == joaat("phantom3"))
				{
					return iParam0;
				}
				else if (__LIB_0__::func_369(__LIB_1__::func_811(4, iParam0), iParam5, 0) == 0)
				{
					return iParam0;
				}
				else
				{
					return iParam0;
				}
			}
			else if (Global_1585857[iParam0 /*142*/].f_66 == joaat("hauler2") || Global_1585857[iParam0 /*142*/].f_66 == joaat("phantom3"))
			{
				return iParam0;
			}
			else if (Global_1585857[iParam0 /*142*/].f_66 == 0)
			{
				return iParam0;
			}
			else
			{
				return iParam0;
			}
		}
	}
	if (bParam4)
	{
		switch (iParam1)
		{
			case 0:
				if (__LIB_8__::func_979(iParam3, iParam0))
				{
					if (__LIB_0__::func_369(__LIB_1__::func_811(4, iParam0), iParam5, 0) == 0)
					{
						return iParam0;
					}
					else
					{
						iVar0 = __LIB_0__::func_369(__LIB_1__::func_811(1, iParam0), iParam5, 0);
						if (bParam2)
						{
							if (BitTest(iVar0, 0))
							{
								return iParam0;
							}
						}
					}
				}
				break;
			case 1:
				if (__LIB_8__::func_979(iParam3, iParam0))
				{
					if (__LIB_0__::func_369(__LIB_1__::func_811(4, iParam0), iParam5, 0) == 0)
					{
						return iParam0;
					}
				}
				if (bParam2)
				{
					if (__LIB_8__::func_979(iParam3, iParam0))
					{
						iVar0 = __LIB_0__::func_369(__LIB_1__::func_811(1, iParam0), iParam5, 0);
						if (BitTest(iVar0, 0))
						{
							return iParam0;
						}
					}
				}
				if (__LIB_8__::func_979(iParam3, iParam0))
				{
					iVar0 = __LIB_0__::func_369(__LIB_1__::func_811(1, iParam0), iParam5, 0);
					if (BitTest(iVar0, 1) && !BitTest(iVar0, 2))
					{
						return iParam0;
					}
				}
				break;
			case 2:
				if (__LIB_8__::func_979(iParam3, iParam0))
				{
					if (__LIB_0__::func_369(__LIB_1__::func_811(4, iParam0), iParam5, 0) == 0)
					{
						return iParam0;
					}
					else
					{
						iVar0 = __LIB_0__::func_369(__LIB_1__::func_811(1, iParam0), iParam5, 0);
						if (bParam2)
						{
							if (BitTest(iVar0, 0))
							{
								return iParam0;
							}
							else if (BitTest(iVar0, 1))
							{
								return iParam0;
							}
						}
						else if (BitTest(iVar0, 1))
						{
							return iParam0;
						}
					}
				}
				break;
		}
	}
	else
	{
		switch (iParam1)
		{
			case 0:
				if (!__LIB_8__::func_979(iParam3, iParam0))
				{
				}
				else if (Global_1585857[iParam0 /*142*/].f_66 == 0)
				{
					return iParam0;
				}
				else if (bParam2)
				{
					if (BitTest(Global_1585857[iParam0 /*142*/].f_103, 0))
					{
						return iParam0;
					}
				}
				break;
			case 1:
				if (!__LIB_8__::func_979(iParam3, iParam0))
				{
				}
				else if (Global_1585857[iParam0 /*142*/].f_66 == 0)
				{
					return iParam0;
				}
				if (bParam2)
				{
					if (!__LIB_8__::func_979(iParam3, iParam0))
					{
					}
					else if (BitTest(Global_1585857[iParam0 /*142*/].f_103, 0))
					{
						return iParam0;
					}
				}
				if (!__LIB_8__::func_979(iParam3, iParam0))
				{
				}
				else if (BitTest(Global_1585857[iParam0 /*142*/].f_103, 1) && !BitTest(Global_1585857[iParam0 /*142*/].f_103, 2))
				{
					return iParam0;
				}
				else if (BitTest(Global_1585857[iParam0 /*142*/].f_103, 1))
				{
				}
				break;
			case 2:
				if (!__LIB_8__::func_979(iParam3, iParam0))
				{
				}
				else if (Global_1585857[iParam0 /*142*/].f_66 == 0)
				{
					return iParam0;
				}
				else if (bParam2)
				{
					if (BitTest(Global_1585857[iParam0 /*142*/].f_103, 0))
					{
						return iParam0;
					}
					else if (BitTest(Global_1585857[iParam0 /*142*/].f_103, 1))
					{
						return iParam0;
					}
				}
				else if (BitTest(Global_1585857[iParam0 /*142*/].f_103, 1))
				{
					return iParam0;
				}
				break;
			}
	}
	return -1;
}

int func_357(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x213D9
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	int iVar6;
	bVar5 = __LIB_0__::func_112();
	bVar5 = true;
	if (__LIB_2__::func_782(iParam3, 0, 0))
	{
		iParam3 = __LIB_3__::func_553(iParam3);
	}
	if (iParam3 == 126)
	{
		if (__LIB_31__::func_584(22, -1) > 0)
		{
			if (!func_322())
			{
				return -1;
			}
		}
	}
	if (iParam3 == 127)
	{
		if (__LIB_31__::func_584(25, -1) > 0)
		{
			if (!func_320(1))
			{
				return -1;
			}
		}
	}
	if (!__LIB_1__::func_840(iParam2) && __LIB_3__::func_712(iParam2, 0))
	{
		iVar6 = __LIB_7__::func_365(iParam2);
		return func_356(iVar6, iParam0, bParam1, iParam2, 0, iParam4, iParam5);
	}
	iVar1 = 0;
	while (iVar1 < 29)
	{
		if (func_350(iVar1))
		{
		}
		else if (!bVar5 && __LIB_31__::func_584(iVar1, iParam4) >= Global_1312193)
		{
			return -1;
		}
		else if (bVar5 || (__LIB_31__::func_584(iVar1, iParam4) > 0 && __LIB_31__::func_584(iVar1, iParam4) <= 128))
		{
			iVar2 = 0;
			if ((bVar5 || iParam3 == 0) || iParam3 == __LIB_31__::func_584(iVar1, iParam4))
			{
				if (bVar5)
				{
					iVar4 = __LIB_3__::func_2(iVar1, -1, 1);
				}
				else
				{
					iVar4 = Global_1312193[__LIB_31__::func_584(iVar1, iParam4) /*1951*/].f_33;
				}
				if (__LIB_1__::func_819(iParam2))
				{
					if (iVar4 == 13)
					{
						iVar3 = 3;
					}
					else if (iVar4 == 8)
					{
						iVar3 = 2;
					}
					else
					{
						iVar3 = 1;
					}
					iVar2 = 10;
				}
				else
				{
					iVar3 = iVar4;
					iVar2 = 0;
				}
				iVar2 = (iVar2 + __LIB_4__::func_982(iVar1));
				iVar6 = -1;
				switch (iParam0)
				{
					case 0:
						iVar0 = 0;
						while (iVar0 < iVar3)
						{
							iVar6 = (iVar2 + iVar0);
							if (!__LIB_8__::func_979(iParam2, iVar6))
							{
							}
							else if (Global_1585857[iVar6 /*142*/].f_66 == 0)
							{
								return iVar6;
							}
							else if (bParam1)
							{
								if (BitTest(Global_1585857[iVar6 /*142*/].f_103, 0))
								{
									return iVar6;
								}
							}
							iVar0++;
						}
						break;
					case 1:
						iVar0 = 0;
						while (iVar0 < iVar3)
						{
							iVar6 = (iVar2 + iVar0);
							if (!__LIB_8__::func_979(iParam2, iVar6))
							{
							}
							else if (Global_1585857[iVar6 /*142*/].f_66 == 0)
							{
								return iVar6;
							}
							iVar0++;
						}
						if (bParam1)
						{
							iVar0 = 0;
							while (iVar0 < iVar3)
							{
								iVar6 = (iVar2 + iVar0);
								if (!__LIB_8__::func_979(iParam2, iVar6))
								{
								}
								else if (BitTest(Global_1585857[iVar6 /*142*/].f_103, 0))
								{
									return iVar6;
								}
								iVar0++;
							}
						}
						iVar0 = 0;
						while (iVar0 < iVar3)
						{
							iVar6 = (iVar2 + iVar0);
							if (!__LIB_8__::func_979(iParam2, iVar6))
							{
							}
							else if (BitTest(Global_1585857[iVar6 /*142*/].f_103, 1) && !BitTest(Global_1585857[iVar6 /*142*/].f_103, 2))
							{
								return iVar6;
							}
							else if (BitTest(Global_1585857[iVar6 /*142*/].f_103, 1))
							{
							}
							iVar0++;
						}
						break;
					case 2:
						iVar0 = 0;
						while (iVar0 < iVar3)
						{
							iVar6 = (iVar2 + iVar0);
							if (!__LIB_8__::func_979(iParam2, iVar6))
							{
							}
							else if (Global_1585857[iVar6 /*142*/].f_66 == 0)
							{
								return iVar6;
							}
							else if (bParam1)
							{
								if (BitTest(Global_1585857[iVar6 /*142*/].f_103, 0))
								{
									return iVar6;
								}
								else if (BitTest(Global_1585857[iVar6 /*142*/].f_103, 1))
								{
									return iVar6;
								}
							}
							else if (BitTest(Global_1585857[iVar6 /*142*/].f_103, 1))
							{
								return iVar6;
							}
							iVar0++;
						}
						break;
					}
				}
		}
		iVar1++;
	}
	if ((__LIB_0__::func_369(5396, iParam4, 0) != 0 && !Global_262145.f_21126 /* Tunable: DISABLE_STORE_PV */) && __LIB_8__::func_996(iParam2, 156))
	{
		iVar6 = func_356(156, iParam0, bParam1, iParam2, 0, iParam4, 0);
		if (iVar6 != -1)
		{
			return iVar6;
		}
	}
	if (__LIB_12__::func_386(iParam4))
	{
		if (__LIB_8__::func_979(iParam2, 223))
		{
			iVar6 = func_356(223, iParam0, bParam1, iParam2, 0, iParam4, 0);
			if (iVar6 != -1)
			{
				return iVar6;
			}
		}
	}
	if (__LIB_12__::func_385(iParam4))
	{
		if (__LIB_8__::func_979(iParam2, 278))
		{
			iVar6 = func_356(278, iParam0, bParam1, iParam2, 0, iParam4, 0);
			if (iVar6 != -1)
			{
				return iVar6;
			}
		}
	}
	return -1;
}

void func_358(int iParam0, int iParam1)//Position - 0x217F2
{
	*iParam1 = -1;
	if (__LIB_31__::func_584(0, -1) >= 1 && __LIB_3__::func_561(iParam0, 0))
	{
		if (((((((((((((__LIB_31__::func_584(1, -1) >= 1 || (__LIB_31__::func_584(6, -1) >= 1 && __LIB_3__::func_561(iParam0, 6))) || __LIB_31__::func_584(8, -1) >= 1) || __LIB_13__::func_15()) || (__LIB_8__::func_894() && __LIB_8__::func_996(iParam0, 159))) || (__LIB_8__::func_893() && __LIB_3__::func_561(iParam0, 13))) || (__LIB_8__::func_892() && __LIB_3__::func_561(iParam0, 14))) || (__LIB_12__::func_386(-1) && iParam0 == joaat("oppressor2"))) || (__LIB_31__::func_584(18, -1) >= 1 && __LIB_3__::func_561(iParam0, 18))) || (__LIB_31__::func_584(21, -1) >= 1 && __LIB_3__::func_561(iParam0, 21))) || ((__LIB_31__::func_584(22, -1) >= 1 && __LIB_3__::func_561(iParam0, 22)) && func_322())) || (__LIB_12__::func_385(-1) && (iParam0 == joaat("toreador") || iParam0 == joaat("stromberg")))) || ((__LIB_31__::func_584(25, -1) >= 1 && __LIB_3__::func_561(iParam0, 25)) && func_320(0))) || (__LIB_31__::func_584(26, -1) >= 1 && __LIB_3__::func_561(iParam0, 26)))
		{
			return;
		}
		*iParam1 = __LIB_31__::func_584(0, -1);
		return;
	}
	else if (__LIB_31__::func_584(6, -1) >= 1 && __LIB_3__::func_561(iParam0, 6))
	{
		if (((((((((((__LIB_31__::func_584(8, -1) >= 1 || __LIB_13__::func_15()) || (__LIB_8__::func_894() && __LIB_8__::func_996(iParam0, 159))) || (__LIB_8__::func_893() && __LIB_3__::func_561(iParam0, 13))) || (__LIB_8__::func_892() && __LIB_3__::func_561(iParam0, 14))) || (__LIB_12__::func_386(-1) && iParam0 == joaat("oppressor2"))) || (__LIB_31__::func_584(18, -1) >= 1 && __LIB_3__::func_561(iParam0, 18))) || (__LIB_31__::func_584(21, -1) >= 1 && __LIB_3__::func_561(iParam0, 21))) || ((__LIB_31__::func_584(22, -1) >= 1 && __LIB_3__::func_561(iParam0, 22)) && func_322())) || (__LIB_12__::func_385(-1) && (iParam0 == joaat("toreador") || iParam0 == joaat("stromberg")))) || ((__LIB_31__::func_584(25, -1) >= 1 && __LIB_3__::func_561(iParam0, 25)) && func_320(0))) || (__LIB_31__::func_584(26, -1) >= 1 && __LIB_3__::func_561(iParam0, 26)))
		{
			return;
		}
		*iParam1 = __LIB_31__::func_584(6, -1);
		return;
	}
	else if (__LIB_31__::func_584(8, -1) >= 1 && __LIB_3__::func_561(iParam0, 8))
	{
		if ((((((((((__LIB_13__::func_15() || (__LIB_8__::func_894() && __LIB_8__::func_996(iParam0, 159))) || (__LIB_8__::func_893() && __LIB_3__::func_561(iParam0, 13))) || (__LIB_8__::func_892() && __LIB_3__::func_561(iParam0, 14))) || (__LIB_12__::func_386(-1) && iParam0 == joaat("oppressor2"))) || (__LIB_31__::func_584(18, -1) >= 1 && __LIB_3__::func_561(iParam0, 18))) || (__LIB_31__::func_584(21, -1) >= 1 && __LIB_3__::func_561(iParam0, 21))) || ((__LIB_31__::func_584(22, -1) >= 1 && __LIB_3__::func_561(iParam0, 22)) && func_322())) || (__LIB_12__::func_385(-1) && (iParam0 == joaat("toreador") || iParam0 == joaat("stromberg")))) || ((__LIB_31__::func_584(25, -1) >= 1 && __LIB_3__::func_561(iParam0, 25)) && func_320(0))) || (__LIB_31__::func_584(26, -1) >= 1 && __LIB_3__::func_561(iParam0, 26)))
		{
			return;
		}
		*iParam1 = __LIB_31__::func_584(8, -1);
		return;
	}
	else if (__LIB_13__::func_15() && __LIB_8__::func_996(iParam0, 156))
	{
		if ((((((((((__LIB_8__::func_894() && __LIB_8__::func_996(iParam0, 159)) || (__LIB_8__::func_893() && __LIB_3__::func_561(iParam0, 13))) || (__LIB_8__::func_892() && __LIB_3__::func_561(iParam0, 14))) || (__LIB_12__::func_386(-1) && iParam0 == joaat("oppressor2"))) || (__LIB_31__::func_584(18, -1) >= 1 && __LIB_3__::func_561(iParam0, 18))) || (__LIB_31__::func_584(21, -1) >= 1 && __LIB_3__::func_561(iParam0, 21))) || ((__LIB_31__::func_584(22, -1) >= 1 && __LIB_3__::func_561(iParam0, 22)) && func_322())) || (__LIB_12__::func_385(-1) && (iParam0 == joaat("toreador") || iParam0 == joaat("stromberg")))) || ((__LIB_31__::func_584(25, -1) >= 1 && __LIB_3__::func_561(iParam0, 25)) && func_320(0))) || (__LIB_31__::func_584(26, -1) >= 1 && __LIB_3__::func_561(iParam0, 26)))
		{
			return;
		}
		*iParam1 = 1234;
		return;
	}
	else if (__LIB_8__::func_894() && __LIB_8__::func_996(iParam0, 159))
	{
		if (((((((((__LIB_8__::func_893() && __LIB_3__::func_561(iParam0, 13)) || (__LIB_8__::func_892() && __LIB_3__::func_561(iParam0, 14))) || (__LIB_12__::func_386(-1) && iParam0 == joaat("oppressor2"))) || (__LIB_31__::func_584(18, -1) >= 1 && __LIB_3__::func_561(iParam0, 18))) || (__LIB_31__::func_584(21, -1) >= 1 && __LIB_3__::func_561(iParam0, 21))) || ((__LIB_31__::func_584(22, -1) >= 1 && __LIB_3__::func_561(iParam0, 22)) && func_322())) || (__LIB_12__::func_385(-1) && (iParam0 == joaat("toreador") || iParam0 == joaat("stromberg")))) || ((__LIB_31__::func_584(25, -1) >= 1 && __LIB_3__::func_561(iParam0, 25)) && func_320(0))) || (__LIB_31__::func_584(26, -1) >= 1 && __LIB_3__::func_561(iParam0, 26)))
		{
			return;
		}
		*iParam1 = __LIB_31__::func_584(12, -1);
		return;
	}
	else if (__LIB_8__::func_893() && __LIB_3__::func_561(iParam0, 13))
	{
		if (((((((__LIB_8__::func_892() && __LIB_3__::func_561(iParam0, 14)) || (__LIB_31__::func_584(18, -1) >= 1 && __LIB_3__::func_561(iParam0, 18))) || (__LIB_31__::func_584(21, -1) >= 1 && __LIB_3__::func_561(iParam0, 21))) || ((__LIB_31__::func_584(22, -1) >= 1 && __LIB_3__::func_561(iParam0, 22)) && func_322())) || (__LIB_12__::func_385(-1) && (iParam0 == joaat("toreador") || iParam0 == joaat("stromberg")))) || ((__LIB_31__::func_584(25, -1) >= 1 && __LIB_3__::func_561(iParam0, 25)) && func_320(0))) || (__LIB_31__::func_584(26, -1) >= 1 && __LIB_3__::func_561(iParam0, 26)))
		{
			return;
		}
		if (__LIB_12__::func_386(-1) && iParam0 == joaat("oppressor2"))
		{
			return;
		}
		*iParam1 = __LIB_31__::func_584(13, -1);
		return;
	}
	else if (__LIB_8__::func_892() && __LIB_3__::func_561(iParam0, 14))
	{
		if ((((((((__LIB_8__::func_892() && __LIB_31__::func_584(15, -1) >= 1) && __LIB_3__::func_561(iParam0, 15)) || (__LIB_31__::func_584(18, -1) >= 1 && __LIB_3__::func_561(iParam0, 18))) || (__LIB_31__::func_584(21, -1) >= 1 && __LIB_3__::func_561(iParam0, 21))) || ((__LIB_31__::func_584(22, -1) >= 1 && __LIB_3__::func_561(iParam0, 22)) && func_322())) || (__LIB_12__::func_385(-1) && (iParam0 == joaat("toreador") || iParam0 == joaat("stromberg")))) || ((__LIB_31__::func_584(25, -1) >= 1 && __LIB_3__::func_561(iParam0, 25)) && func_320(0))) || (__LIB_31__::func_584(26, -1) >= 1 && __LIB_3__::func_561(iParam0, 26)))
		{
			return;
		}
		if (__LIB_12__::func_386(-1) && iParam0 == joaat("oppressor2"))
		{
			return;
		}
		*iParam1 = __LIB_31__::func_584(14, -1);
		return;
	}
	else if (__LIB_12__::func_386(-1) && iParam0 == joaat("oppressor2"))
	{
		if (((((__LIB_31__::func_584(18, -1) >= 1 && __LIB_3__::func_561(iParam0, 18)) || (__LIB_31__::func_584(21, -1) >= 1 && __LIB_3__::func_561(iParam0, 21))) || ((__LIB_31__::func_584(22, -1) >= 1 && __LIB_3__::func_561(iParam0, 22)) && func_322())) || ((__LIB_31__::func_584(25, -1) >= 1 && __LIB_3__::func_561(iParam0, 25)) && func_320(0))) || (__LIB_31__::func_584(26, -1) >= 1 && __LIB_3__::func_561(iParam0, 26)))
		{
			return;
		}
		*iParam1 = 1236;
		return;
	}
	else if (__LIB_31__::func_584(18, -1) >= 1 && __LIB_3__::func_561(iParam0, 18))
	{
		if ((((((__LIB_31__::func_584(19, -1) >= 1 && __LIB_3__::func_561(iParam0, 18)) || (__LIB_31__::func_584(21, -1) >= 1 && __LIB_3__::func_561(iParam0, 21))) || ((__LIB_31__::func_584(22, -1) >= 1 && __LIB_3__::func_561(iParam0, 22)) && func_322())) || (__LIB_12__::func_385(-1) && (iParam0 == joaat("toreador") || iParam0 == joaat("stromberg")))) || ((__LIB_31__::func_584(25, -1) >= 1 && __LIB_3__::func_561(iParam0, 25)) && func_320(0))) || (__LIB_31__::func_584(26, -1) >= 1 && __LIB_3__::func_561(iParam0, 26)))
		{
			return;
		}
		*iParam1 = __LIB_31__::func_584(18, -1);
		return;
	}
	else if (__LIB_31__::func_584(21, -1) >= 1 && __LIB_3__::func_561(iParam0, 21))
	{
		if (((((__LIB_31__::func_584(22, -1) >= 1 && __LIB_3__::func_561(iParam0, 22)) && func_322()) || (__LIB_12__::func_385(-1) && (iParam0 == joaat("toreador") || iParam0 == joaat("stromberg")))) || ((__LIB_31__::func_584(25, -1) >= 1 && __LIB_3__::func_561(iParam0, 25)) && func_320(0))) || (__LIB_31__::func_584(26, -1) >= 1 && __LIB_3__::func_561(iParam0, 26)))
		{
			return;
		}
		*iParam1 = __LIB_31__::func_584(21, -1);
		return;
	}
	else if ((__LIB_31__::func_584(22, -1) >= 1 && __LIB_3__::func_561(iParam0, 22)) && func_322())
	{
		if (((__LIB_12__::func_385(-1) && (iParam0 == joaat("toreador") || iParam0 == joaat("stromberg"))) || ((__LIB_31__::func_584(25, -1) >= 1 && __LIB_3__::func_561(iParam0, 25)) && func_320(0))) || (__LIB_31__::func_584(26, -1) >= 1 && __LIB_3__::func_561(iParam0, 26)))
		{
			return;
		}
		*iParam1 = __LIB_31__::func_584(22, -1);
		return;
	}
	else if (__LIB_12__::func_385(-1) && (iParam0 == joaat("toreador") || iParam0 == joaat("stromberg")))
	{
		if (((__LIB_31__::func_584(25, -1) >= 1 && __LIB_3__::func_561(iParam0, 25)) && func_320(0)) || (__LIB_31__::func_584(26, -1) >= 1 && __LIB_3__::func_561(iParam0, 26)))
		{
			return;
		}
		*iParam1 = 1238;
		return;
	}
	else if ((__LIB_31__::func_584(25, -1) >= 1 && __LIB_3__::func_561(iParam0, 25)) && func_320(0))
	{
		if ((__LIB_12__::func_385(-1) && (iParam0 == joaat("toreador") || iParam0 == joaat("stromberg"))) || (__LIB_31__::func_584(26, -1) >= 1 && __LIB_3__::func_561(iParam0, 26)))
		{
			return;
		}
		*iParam1 = __LIB_31__::func_584(25, -1);
		return;
	}
	else if (__LIB_31__::func_584(26, -1) >= 1 && __LIB_3__::func_561(iParam0, 26))
	{
		if (__LIB_12__::func_385(-1) && (iParam0 == joaat("toreador") || iParam0 == joaat("stromberg")))
		{
			return;
		}
		*iParam1 = __LIB_31__::func_584(26, -1);
		return;
	}
}

int func_366(int iParam0, int iParam1)//Position - 0x225A4
{
	if (__LIB_31__::func_584(0, iParam1) != 0 && __LIB_3__::func_561(iParam0, 0))
	{
		return 1;
	}
	else if (__LIB_31__::func_584(6, iParam1) != 0 && __LIB_3__::func_561(iParam0, 6))
	{
		return 1;
	}
	else if (__LIB_31__::func_584(8, iParam1) != 0 && __LIB_3__::func_561(iParam0, 8))
	{
		return 1;
	}
	else if (__LIB_31__::func_584(11, iParam1) != 0 && __LIB_3__::func_561(iParam0, 11))
	{
		return 1;
	}
	else if (iParam0 == joaat("trailersmall2"))
	{
		return 1;
	}
	else if (iParam0 == joaat("minitank"))
	{
		return 1;
	}
	else if (((__LIB_0__::func_369(5396, iParam1, 0) != 0 && __LIB_0__::func_253(15270, iParam1) == 7) && !Global_262145.f_21126 /* Tunable: DISABLE_STORE_PV */) && __LIB_8__::func_996(iParam0, 156))
	{
		return 1;
	}
	else if (__LIB_31__::func_584(12, iParam1) != 0 && __LIB_3__::func_561(iParam0, 12))
	{
		return 1;
	}
	else if (__LIB_31__::func_584(13, -1) != 0 && __LIB_3__::func_561(iParam0, 13))
	{
		return 1;
	}
	else if (__LIB_31__::func_584(15, iParam1) != 0 && __LIB_3__::func_561(iParam0, 15))
	{
		return 1;
	}
	else if (__LIB_12__::func_386(iParam1) && __LIB_8__::func_996(iParam0, 223))
	{
		return 1;
	}
	else if (__LIB_31__::func_584(14, -1) != 0 && __LIB_3__::func_561(iParam0, 14))
	{
		return 1;
	}
	else if (__LIB_31__::func_584(18, iParam1) != 0 && __LIB_3__::func_561(iParam0, 18))
	{
		return 1;
	}
	else if (__LIB_31__::func_584(21, iParam1) != 0 && __LIB_3__::func_561(iParam0, 21))
	{
		return 1;
	}
	else if ((__LIB_31__::func_584(22, iParam1) != 0 && __LIB_3__::func_561(iParam0, 22)) && func_322())
	{
		return 1;
	}
	else if (__LIB_12__::func_385(iParam1) && __LIB_8__::func_996(iParam0, 278))
	{
		return 1;
	}
	else if ((__LIB_31__::func_584(25, iParam1) != 0 && __LIB_3__::func_561(iParam0, 25)) && func_320(1))
	{
		return 1;
	}
	else if (__LIB_31__::func_584(26, iParam1) != 0 && __LIB_3__::func_561(iParam0, 26))
	{
		return 1;
	}
	return 0;
}

void func_367()//Position - 0x22801
{
	int iVar0;
	int iVar1;
	iVar1 = PLAYER::PLAYER_ID();
	if (iVar1 != -1)
	{
		iVar0 = NETWORK::NET_TO_VEH(Local_65[iVar1 /*2*/].f_1);
	}
	if (!ENTITY::IS_ENTITY_DEAD(iVar0, false) && __LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
	{
		if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iVar0, 10f, 10f, 10f, false, true, 0))
		{
			__LIB_2__::func_53(&(Local_66.f_45), func_371(Local_66.f_10, 1));
		}
		else
		{
			__LIB_2__::func_53(&(Local_66.f_45), func_371(Local_66.f_10, 0));
		}
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_65[PLAYER::PLAYER_ID() /*2*/].f_1))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iVar0, false) && !ENTITY::IS_ENTITY_IN_WATER(iVar0))
		{
			if (((PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar0, false) && !__LIB_3__::func_684(PLAYER::PLAYER_PED_ID(), 1)) && TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE")) != 1) && TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE")) != 0)
			{
				__LIB_1__::func_376(PLAYER::PLAYER_ID(), 0, 256, 0);
				func_598(&Local_66, 4);
			}
		}
		else
		{
			if (__LIB_0__::func_121(iVar0))
			{
				if (ENTITY::IS_ENTITY_IN_WATER(iVar0))
				{
					if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar0, false))
					{
						TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
						__LIB_1__::func_376(PLAYER::PLAYER_ID(), 1, 0, 0);
					}
				}
			}
			func_598(&Local_66, 5);
		}
	}
}

int func_371(int iParam0, bool bParam1)//Position - 0x22C23
{
	switch (iParam0)
	{
		case 0:
			return 12;
			break;
		case 1:
			if (bParam1)
			{
				return 12;
			}
			return 12;
			break;
	}
	return 1;
}

void func_372()//Position - 0x22C59
{
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_65[PLAYER::PLAYER_ID() /*2*/].f_1))
	{
		if (!HUD::DOES_BLIP_EXIST(Local_66.f_45))
		{
			if (func_381())
			{
				Local_66.f_45 = __LIB_0__::func_639(NETWORK::NET_TO_ENT(Local_65[PLAYER::PLAYER_ID() /*2*/].f_1), 0, 0);
				func_377(Local_66.f_10, &(Local_66.f_45));
				func_373(Local_66.f_10);
				func_598(&Local_66, 3);
			}
		}
		else
		{
			func_598(&Local_66, 3);
		}
	}
}

void func_373(int iParam0)//Position - 0x22CC5
{
	switch (iParam0)
	{
		case 0:
			__LIB_8__::func_159("CAS_VEH_REW" /* GXT: Ms. Baker has left you an item ~BLIP_CRATEDROP~ that can be collected from the docks. */, VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(func_376(Local_66.f_10)), -1);
			break;
		case 1:
			__LIB_28__::func_646("KEINE_AWARD" /* GXT: Dave has left you his Personal Vehicle ~a~~s~ to collect at the LSIA parking lot. */, "KEINE_BLIP" /* GXT: ~BLIP_GANG_VEHICLE~ */, 12, -1);
			break;
	}
}

int func_376(int iParam0)//Position - 0x22D52
{
	switch (iParam0)
	{
		case 0:
			return joaat("paragon2");
		case 1:
			return joaat("weevil");
		default:
	}
	return joaat("faggio");
}

void func_377(int iParam0, var uParam1)//Position - 0x22D82
{
	switch (iParam0)
	{
		case 0:
			HUD::SET_BLIP_FLASH_TIMER(*uParam1, 5000);
			HUD::SET_BLIP_SPRITE(*uParam1, 306);
			HUD::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam1, "CAS_VEH_PN" /* GXT: Bonus Item */);
			HUD::SET_BLIP_DISPLAY(*uParam1, 4);
			break;
		case 1:
			HUD::SET_BLIP_FLASH_TIMER(*uParam1, 5000);
			HUD::SET_BLIP_SPRITE(*uParam1, 225);
			__LIB_2__::func_53(uParam1, 12);
			HUD::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam1, "CAS_VEH_PN" /* GXT: Bonus Item */);
			HUD::SET_BLIP_DISPLAY(*uParam1, 4);
			break;
	}
}

int func_381()//Position - 0x22EC6
{
	if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() || HUD::IS_HELP_MESSAGE_ON_SCREEN())
	{
		return 0;
	}
	if (__LIB_2__::func_821(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (__LIB_2__::func_906())
	{
		return 0;
	}
	if (__LIB_0__::func_877())
	{
		return 0;
	}
	return 1;
}

void func_388()//Position - 0x22F9D
{
	int iVar0;
	struct<3> Var1;
	float fVar2;
	int iVar3;
	struct<101> Var4;
	int iVar5;
	int iVar6;
	iVar0 = PLAYER::PLAYER_ID();
	if (iVar0 == -1)
	{
		return;
	}
	if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_65[iVar0 /*2*/].f_1))
	{
		if (__LIB_0__::func_799(func_376(Local_66.f_10)))
		{
			if (!BitTest(Local_66.f_0, 0))
			{
				if (__LIB_1__::func_690(NETWORK::GET_NUM_RESERVED_MISSION_VEHICLES(false, 0) + 1, 0, 1))
				{
					NETWORK::RESERVE_NETWORK_MISSION_VEHICLES(NETWORK::GET_NUM_RESERVED_MISSION_VEHICLES(false, 0) + 1);
					MISC::SET_BIT(&Local_66, 0);
				}
			}
			else if (!BitTest(Local_66.f_0, 2))
			{
				Local_66.f_1 = MISC::GET_RANDOM_INT_IN_RANGE(0, func_590(Local_66.f_10));
				MISC::SET_BIT(&Local_66, 2);
			}
			else if (func_454(Local_66.f_10, &Var1, &fVar2))
			{
				if (__LIB_0__::func_957(&(Local_65[iVar0 /*2*/].f_1), func_376(Local_66.f_10), Var1, fVar2, 0, 1, 1, 0, 1, 1, 0, 1, 0, 0))
				{
					func_450(Local_66.f_10, &Var1, &fVar2, Local_66.f_1);
					iVar3 = NETWORK::NET_TO_VEH(Local_65[iVar0 /*2*/].f_1);
					ENTITY::SET_ENTITY_HEADING(iVar3, fVar2);
					ENTITY::SET_ENTITY_INVINCIBLE(iVar3, true);
					VEHICLE::SET_VEHICLE_DOORS_LOCKED(iVar3, 1);
					VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_ALL_PLAYERS(iVar3, true);
					VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_PLAYER(iVar3, PLAYER::PLAYER_ID(), false);
					VEHICLE::SET_DONT_ALLOW_PLAYER_TO_ENTER_VEHICLE_IF_LOCKED_FOR_PLAYER(iVar3, true);
					VEHICLE::SET_VEHICLE_RESPECTS_LOCKS_WHEN_HAS_DRIVER(iVar3, true);
					if (VEHICLE::GET_NUM_MOD_KITS(iVar3) > 0)
					{
						VEHICLE::SET_VEHICLE_MOD_KIT(iVar3, 0);
					}
					Var4.f_9 = 49;
					Var4.f_59 = 2;
					Var4.f_78 = -1;
					Var4.f_79 = -1;
					Var4.f_96 = -1;
					Var4.f_97 = 1;
					Var4.f_99 = 132;
					Var4.f_100 = -1;
					func_449(func_376(Local_66.f_10), &Var4);
					func_389(iVar3, &Var4, 1, 1, 0);
					func_598(&Local_66, 2);
					MISC::CLEAR_BIT(&Local_66, 2);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_376(Local_66.f_10));
				}
			}
		}
	}
	else
	{
		iVar5 = NETWORK::NET_TO_VEH(Local_65[iVar0 /*2*/].f_1);
		if (ENTITY::IS_ENTITY_DEAD(iVar5, false) || ENTITY::IS_ENTITY_IN_WATER(iVar5))
		{
			iVar6 = iVar5;
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar6))
			{
				if (__LIB_2__::func_613(iVar6, &(Local_66.f_9)))
				{
					NETWORK::NETWORK_FADE_OUT_ENTITY(iVar6, false, true);
					VEHICLE::DELETE_VEHICLE(&iVar6);
				}
			}
		}
		else
		{
			func_598(&Local_66, 2);
		}
	}
}

void func_389(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0x23186
{
	int iVar0;
	float fVar1;
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		if ((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0)) || !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
			if (PLAYER::PLAYER_ID() != __LIB_0__::getMinusOneOrNull())
			{
				uParam1->f_100 = PLAYER::PLAYER_ID();
			}
			if (uParam1->f_70 == 0)
			{
				uParam1->f_70 = 1;
			}
			__LIB_1__::func_569(iParam0, uParam1, bParam2, bParam3);
			if (uParam1->f_102 != 0)
			{
				if (uParam1->f_102 == 2)
				{
					VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(iParam0, true);
					VEHICLE::SET_DRIFT_TYRES(iParam0, false);
				}
				else if (uParam1->f_102 == 1)
				{
					VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(iParam0, false);
					VEHICLE::SET_DRIFT_TYRES(iParam0, false);
				}
				else if (uParam1->f_102 == 3)
				{
					VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(iParam0, true);
					VEHICLE::SET_DRIFT_TYRES(iParam0, true);
				}
			}
			if (__LIB_0__::func_811(ENTITY::GET_ENTITY_MODEL(iParam0)))
			{
				if (uParam1->f_9[44] == 2)
				{
					VEHICLE::SET_VEHICLE_ALLOW_HOMING_MISSLE_LOCKON_SYNCED(iParam0, false, true);
				}
				else
				{
					VEHICLE::SET_VEHICLE_ALLOW_HOMING_MISSLE_LOCKON_SYNCED(iParam0, true, true);
				}
			}
			if (!uParam1->f_78 == -1 && uParam1->f_9[14] == -1)
			{
				AUDIO::OVERRIDE_VEH_HORN(iParam0, true, uParam1->f_78);
			}
			if (!uParam1->f_79 == -1)
			{
				AUDIO::SET_VEHICLE_HORN_SOUND_INDEX(iParam0, uParam1->f_79);
			}
			if (__LIB_0__::func_810(uParam1->f_66, &fVar1) && uParam1->f_80 != fVar1)
			{
				uParam1->f_80 = fVar1;
			}
			VEHICLE::SET_VEHICLE_ENVEFF_SCALE(iParam0, uParam1->f_80);
			VEHICLE::SET_VEHICLE_EXTRA_COLOUR_5(iParam0, uParam1->f_97);
			if (uParam1->f_99 >= 0)
			{
				VEHICLE::SET_VEHICLE_EXTRA_COLOUR_6(iParam0, uParam1->f_99);
			}
			if (__LIB_0__::func_809(iParam0))
			{
				__LIB_6__::func_271(iParam0, __LIB_1__::func_562(uParam1->f_74, uParam1->f_75, uParam1->f_76));
			}
			if (VEHICLE::GET_VEHICLE_LIVERY2_COUNT(iParam0) > 1 && uParam1->f_98 >= 0)
			{
				VEHICLE::SET_VEHICLE_LIVERY2(iParam0, uParam1->f_98);
			}
			if (BitTest(uParam1->f_95, 0))
			{
				__LIB_30__::func_908(iParam0, &(uParam1->f_81));
			}
			if ((!__LIB_1__::func_552(4) && !bParam4) && !NETWORK::NETWORK_IS_ACTIVITY_SESSION())
			{
				__LIB_2__::func_985(iParam0);
			}
			if (__LIB_0__::func_801(iVar0))
			{
				switch (uParam1->f_9[5])
				{
					case 0:
						VEHICLE::REMOVE_VEHICLE_MOD(iParam0, 16);
						break;
					case 1:
						VEHICLE::REMOVE_VEHICLE_MOD(iParam0, 16);
						if ((VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("scarab")) || VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("scarab2"))) || VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("scarab3")))
						{
							VEHICLE::SET_VEHICLE_MOD(iParam0, 16, 0, false);
						}
						else
						{
							VEHICLE::SET_VEHICLE_MOD(iParam0, 16, 2, false);
						}
						break;
					case 2:
						VEHICLE::REMOVE_VEHICLE_MOD(iParam0, 16);
						if ((VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("scarab")) || VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("scarab2"))) || VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("scarab3")))
						{
							VEHICLE::SET_VEHICLE_MOD(iParam0, 16, 1, false);
						}
						else
						{
							VEHICLE::SET_VEHICLE_MOD(iParam0, 16, 3, false);
						}
						break;
					case 3:
						VEHICLE::REMOVE_VEHICLE_MOD(iParam0, 16);
						if ((VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("scarab")) || VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("scarab2"))) || VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("scarab3")))
						{
							VEHICLE::SET_VEHICLE_MOD(iParam0, 16, 2, false);
						}
						else
						{
							VEHICLE::SET_VEHICLE_MOD(iParam0, 16, 4, false);
						}
						break;
					default:
						if (uParam1->f_9[5] != -1)
						{
							VEHICLE::REMOVE_VEHICLE_MOD(iParam0, 16);
							if ((VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("scarab")) || VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("scarab2"))) || VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("scarab3")))
							{
								VEHICLE::SET_VEHICLE_MOD(iParam0, 16, 2, false);
							}
							else
							{
								VEHICLE::SET_VEHICLE_MOD(iParam0, 16, 4, false);
							}
						}
						break;
					}
			}
			if (__LIB_1__::func_522(ENTITY::GET_ENTITY_MODEL(iParam0)))
			{
				switch (uParam1->f_9[5])
				{
					case 1:
						VEHICLE::SET_VEHICLE_EXPLODES_ON_HIGH_EXPLOSION_DAMAGE(iParam0, false);
						VEHICLE::SET_VEHICLE_STRONG(iParam0, true);
						if (uParam1->f_9[16] == 5)
						{
							VEHICLE::SET_VEHICLE_DAMAGE_SCALE(iParam0, (Global_262145.f_21791 /* Tunable: -1001087518 */ + 0.05f));
						}
						else
						{
							VEHICLE::SET_VEHICLE_DAMAGE_SCALE(iParam0, Global_262145.f_21791 /* Tunable: -1001087518 */);
						}
						VEHICLE::SET_VEHICLE_EXPLODES_ON_EXPLOSION_DAMAGE_AT_ZERO_BODY_HEALTH(iParam0, true);
						break;
					default:
						VEHICLE::SET_VEHICLE_EXPLODES_ON_HIGH_EXPLOSION_DAMAGE(iParam0, false);
						VEHICLE::SET_VEHICLE_DAMAGE_SCALE(iParam0, 1f);
						VEHICLE::SET_VEHICLE_EXPLODES_ON_EXPLOSION_DAMAGE_AT_ZERO_BODY_HEALTH(iParam0, true);
						break;
					}
			}
			switch (uParam1->f_94)
			{
				case 0:
					break;
				case 1:
					if (BitTest(uParam1->f_95, 1) && BitTest(uParam1->f_95, 2))
					{
						if (BitTest(uParam1->f_95, 3))
						{
						}
					}
					else if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("Player_Vehicle", 3))
					{
						DECORATOR::DECOR_SET_INT(iParam0, "Player_Vehicle", -1);
					}
					break;
				case 2:
					if (BitTest(uParam1->f_95, 1) && BitTest(uParam1->f_95, 2))
					{
						if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("Veh_Modded_By_Player", 3))
						{
							DECORATOR::DECOR_SET_INT(iParam0, "Veh_Modded_By_Player", NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(PLAYER::PLAYER_ID()));
						}
					}
					else if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("Veh_Modded_By_Player", 3))
					{
						if (__LIB_0__::func_800(uParam1->f_81) && NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(&(uParam1->f_81)))
						{
							DECORATOR::DECOR_SET_INT(iParam0, "Veh_Modded_By_Player", NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&(uParam1->f_81))));
						}
						else
						{
							DECORATOR::DECOR_SET_INT(iParam0, "Veh_Modded_By_Player", -1);
						}
					}
					break;
				case 3:
					break;
				case 4:
					break;
				}
		}
	}
}

void func_449(int iParam0, var uParam1)//Position - 0x2B713
{
	switch (iParam0)
	{
		case joaat("paragon2"):
			uParam1->f_9[16] = 4;
			break;
		case joaat("weevil"):
			uParam1->f_5 = 111;
			uParam1->f_6 = 111;
			uParam1->f_7 = 0;
			uParam1->f_8 = 0;
			uParam1->f_97 = 1;
			uParam1->f_99 = 132;
			uParam1->f_98 = 0;
			uParam1->f_69 = 1;
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
			uParam1->f_74 = 255;
			uParam1->f_76 = 255;
			MISC::SET_BIT(&(uParam1->f_77), 0);
			MISC::SET_BIT(&(uParam1->f_77), 1);
			MISC::SET_BIT(&(uParam1->f_77), 2);
			MISC::SET_BIT(&(uParam1->f_77), 3);
			uParam1->f_9[48] = 15;
			break;
	}
}

void func_450(int iParam0, var uParam1, float fParam2, int iParam3)//Position - 0x2B7B3
{
	switch (iParam0)
	{
		case 0:
			switch (iParam3)
			{
				case 0:
					*uParam1 = { 866.0536f, -2988.4448f, 4.9008f };
					*fParam2 = 270.7996f;
					break;
				case 1:
					*uParam1 = { 811.0694f, -3021.5625f, 4.8178f };
					*fParam2 = 160.1995f;
					break;
				case 2:
					*uParam1 = { 1216.3718f, -2947.2966f, 4.8661f };
					*fParam2 = 178.1987f;
					break;
				case 3:
					*uParam1 = { 1216.627f, -3040.242f, 4.8684f };
					*fParam2 = 178.1987f;
					break;
				case 4:
					*uParam1 = { 1169.2684f, -2969.4812f, 4.9021f };
					*fParam2 = 269.7983f;
					break;
				case 5:
					*uParam1 = { 1090.6786f, -2969.8232f, 4.9012f };
					*fParam2 = 359.1981f;
					break;
				case 6:
					*uParam1 = { 1055.6046f, -3039.2747f, 4.9011f };
					*fParam2 = 284.1977f;
					break;
				case 7:
					*uParam1 = { 951.2667f, -3240.2932f, 4.8951f };
					*fParam2 = 0.9969f;
					break;
				case 8:
					*uParam1 = { 1013.8441f, -3241.3367f, 4.8949f };
					*fParam2 = 9.1969f;
					break;
				case 9:
					*uParam1 = { 1067.4049f, -3243.4578f, 4.8946f };
					*fParam2 = 84.1968f;
					break;
				case 10:
					*uParam1 = { 1096.4803f, -3193.932f, 4.9008f };
					*fParam2 = 88.7966f;
					break;
				case 11:
					*uParam1 = { 1111.1062f, -3097.2893f, 4.8677f };
					*fParam2 = 182.3965f;
					break;
				case 12:
					*uParam1 = { 1089.5281f, -3022.8242f, 4.901f };
					*fParam2 = 359.5967f;
					break;
				case 13:
					*uParam1 = { 1182.7196f, -3034.2178f, 4.9021f };
					*fParam2 = 271.3965f;
					break;
				case 14:
					*uParam1 = { 988.5466f, -3029.0774f, 4.9008f };
					*fParam2 = 359.7962f;
					break;
				case 15:
					*uParam1 = { 988.7137f, -3082.373f, 4.901f };
					*fParam2 = 359.7962f;
					break;
				case 16:
					*uParam1 = { 892.3446f, -3076.711f, 4.9008f };
					*fParam2 = 359.7962f;
					break;
				case 17:
					*uParam1 = { 861.8322f, -3129.8245f, 4.9008f };
					*fParam2 = 270.796f;
					break;
				case 18:
					*uParam1 = { 852.6052f, -2943.1174f, 4.9008f };
					*fParam2 = 270.796f;
					break;
				case 19:
					*uParam1 = { 988.0678f, -2971.6128f, 4.9008f };
					*fParam2 = 0.1957f;
					break;
				case 20:
					*uParam1 = { 892.4056f, -3019.5847f, 4.902f };
					*fParam2 = 0.1957f;
					break;
				case 21:
					*uParam1 = { 1191.7548f, -3073.683f, 4.8238f };
					*fParam2 = 90.1956f;
					break;
				case 22:
					*uParam1 = { 809.9f, -3134.4895f, 4.9009f };
					*fParam2 = 4.3955f;
					break;
				case 23:
					*uParam1 = { 891.2492f, -3241.015f, 4.8959f };
					*fParam2 = 0.1955f;
					break;
				case 24:
					*uParam1 = { 1094.7687f, -3100.6785f, 4.8943f };
					*fParam2 = 90.1954f;
					break;
				case 25:
					*uParam1 = { 1194.5701f, -2942.8162f, 4.9021f };
					*fParam2 = 90.1954f;
					break;
				case 26:
					*uParam1 = { 852.6579f, -2927.3237f, 4.9008f };
					*fParam2 = 270.7951f;
					break;
				case 27:
					*uParam1 = { 1066.7445f, -3073.23f, 4.901f };
					*fParam2 = -0.005f;
					break;
				case 28:
					*uParam1 = { 844.2502f, -3050.1536f, 4.7422f };
					*fParam2 = 91.7947f;
					break;
				case 29:
					*uParam1 = { 1115.4115f, -3184.9666f, 4.9008f };
					*fParam2 = 360.7945f;
					break;
				case 30:
					*uParam1 = { 1139.7178f, -3185.6023f, 4.9008f };
					*fParam2 = 360.7945f;
					break;
				case 31:
					*uParam1 = { 1117.8394f, -3201.7903f, 4.9008f };
					*fParam2 = 179.7964f;
					break;
			}
			break;
		case 1:
			switch (iParam3)
			{
				case 0:
					*uParam1 = { -902.7407f, -2607.9775f, 35.605f };
					*fParam2 = 149.9998f;
					break;
				case 1:
					*uParam1 = { -920.7925f, -2597.6157f, 35.605f };
					*fParam2 = 149.9998f;
					break;
				case 2:
					*uParam1 = { -938.3965f, -2613.4663f, 35.1893f };
					*fParam2 = 238.7997f;
					break;
				case 3:
					*uParam1 = { -943.8753f, -2623.3833f, 33.7924f };
					*fParam2 = 238.7997f;
					break;
				case 4:
					*uParam1 = { -962.2972f, -2654.883f, 34.7399f };
					*fParam2 = 238.7997f;
					break;
				case 5:
					*uParam1 = { -971.8165f, -2671.6914f, 35.605f };
					*fParam2 = 238.9997f;
					break;
				case 6:
					*uParam1 = { -961.0366f, -2685.9768f, 35.6049f };
					*fParam2 = 329.1993f;
					break;
				case 7:
					*uParam1 = { -951.3126f, -2691.6216f, 35.6049f };
					*fParam2 = 329.1993f;
					break;
				case 8:
					*uParam1 = { -936.5653f, -2692.3538f, 35.605f };
					*fParam2 = 59.5993f;
					break;
				case 9:
					*uParam1 = { -925.1686f, -2672.3108f, 34.289f };
					*fParam2 = 59.5993f;
					break;
				case 10:
					*uParam1 = { -903.4186f, -2633.8564f, 35.1724f };
					*fParam2 = 59.5993f;
					break;
				case 11:
					*uParam1 = { -924.6265f, -2643.6985f, 38.0411f };
					*fParam2 = 59.5993f;
					break;
				case 12:
					*uParam1 = { -939.4594f, -2668.1248f, 36.4641f };
					*fParam2 = 59.5993f;
					break;
				case 13:
					*uParam1 = { -928.2064f, -2623.847f, 36.4646f };
					*fParam2 = 239.1989f;
					break;
				case 14:
					*uParam1 = { -942.5833f, -2648.603f, 38.0394f };
					*fParam2 = 239.7989f;
					break;
				case 15:
					*uParam1 = { -1011.223f, -2580.2222f, 36.9491f };
					*fParam2 = 239.7989f;
					break;
				case 16:
					*uParam1 = { -1027.8301f, -2608.4644f, 37.4228f };
					*fParam2 = 239.7989f;
					break;
				case 17:
					*uParam1 = { -1051.542f, -2621.01f, 35.6051f };
					*fParam2 = 239.7989f;
					break;
				case 18:
					*uParam1 = { -1021.8864f, -2569.7368f, 34.7484f };
					*fParam2 = 239.7989f;
					break;
				case 19:
					*uParam1 = { -1012.0209f, -2553.025f, 35.6049f };
					*fParam2 = 239.7989f;
					break;
				case 20:
					*uParam1 = { -1051.0011f, -2634.0518f, 35.605f };
					*fParam2 = 330.7986f;
					break;
				case 21:
					*uParam1 = { -1032.9354f, -2644.7397f, 35.605f };
					*fParam2 = 330.7986f;
					break;
				case 22:
					*uParam1 = { -994.2746f, -2555.4246f, 35.6049f };
					*fParam2 = 149.7981f;
					break;
				case 23:
					*uParam1 = { -979.4405f, -2564.2031f, 35.6049f };
					*fParam2 = 149.7981f;
					break;
				case 24:
					*uParam1 = { -983.0535f, -2583.5767f, 35.4786f };
					*fParam2 = 59.9978f;
					break;
				case 25:
					*uParam1 = { -1008.7263f, -2628.338f, 34.7685f };
					*fParam2 = 58.7977f;
					break;
				case 26:
					*uParam1 = { -1018.4267f, -2644.901f, 35.605f };
					*fParam2 = 58.7977f;
					break;
				case 27:
					*uParam1 = { -997.2888f, -2579.6943f, 36.0407f };
					*fParam2 = 58.7977f;
					break;
				case 28:
					*uParam1 = { -1008.9539f, -2600.4475f, 38.105f };
					*fParam2 = 58.7977f;
					break;
				case 29:
					*uParam1 = { -1024.7745f, -2627.7798f, 35.7154f };
					*fParam2 = 58.7977f;
					break;
			}
			break;
	}
}

int func_454(int iParam0, var uParam1, var uParam2)//Position - 0x2C316
{
	struct<31> Var0;
	struct<3> Var1;
	var uVar2;
	Var0.f_4 = 1125515264;
	Var0.f_5 = 1;
	Var0.f_6 = 1;
	Var0.f_8 = 1082130432;
	Var0.f_9 = 1176255488;
	Var0.f_10 = 1;
	Var0.f_13 = 1;
	Var0.f_15 = 2;
	Var0.f_22 = 2;
	Var0.f_25 = 1;
	Var0.f_26 = 1;
	Var0.f_29 = 1123024896;
	Var0.f_30 = 1;
	Var0.f_4 = 10f;
	Var0.f_1 = 1;
	Var0.f_12 = 1;
	Var0.f_13 = 0;
	Var0.f_14 = 1;
	Var0.f_27 = 1;
	Var0.f_3 = 1;
	func_450(iParam0, &Var1, &uVar2, Local_66.f_1);
	if (func_455(Var1, 0f, 0f, uVar2, func_376(iParam0), 0, uParam1, uParam2, &Var0))
	{
		return 1;
	}
	return 0;
}

int func_455(struct<3> Param0, struct<3> Param1, int iParam2, int iParam3, var uParam4, var uParam5, var uParam6)//Position - 0x2C3D8
{
	bool bVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	struct<61> Var5;
	struct<61> Var6;
	bVar0 = false;
	if (uParam6->f_14)
	{
		if (uParam6->f_25)
		{
			uParam6->f_25 = 0;
		}
	}
	if (!__LIB_1__::func_533())
	{
		return 0;
	}
	if (__LIB_1__::func_479() && !Global_2667225.f_680 == MISC::GET_FRAME_COUNT())
	{
		if (!Global_2667225.f_676 == 0)
		{
			Global_2667225.f_676 = 0;
			__LIB_0__::func_854();
			__LIB_0__::func_814();
		}
	}
	if (!SCRIPT::GET_ID_OF_THIS_THREAD() == Global_2667225.f_675)
	{
		if (!Global_2667225.f_676 == 0)
		{
			if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667225.f_679) < __LIB_0__::func_853(0))
			{
				return 0;
			}
			else
			{
				Global_2667225.f_676 = 0;
			}
		}
	}
	else
	{
		if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667225.f_677) > 30000)
		{
			Global_2667225.f_676 = 0;
		}
		if (!Global_2667225.f_676 == 0)
		{
			if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667225.f_679) > __LIB_0__::func_853(1))
			{
				Global_2667225.f_676 = 0;
			}
		}
	}
	if (uParam6->f_6)
	{
		if (func_577(Param0))
		{
			if (__LIB_1__::func_558(&Param0, 1))
			{
			}
		}
	}
	if (!Global_2667225.f_676 == 0)
	{
		if (SYSTEM::VDIST(Global_2667225.f_695, Param0) > 50f)
		{
			return 0;
		}
		if (Global_2667225.f_698 != iParam2)
		{
			return 0;
		}
	}
	PATHFIND::REQUEST_PATH_NODES_IN_AREA_THIS_FRAME((Param0.f_0 - 100f), (Param0.f_1 - 100f), (Param0.f_0 + 100f), (Param0.f_1 + 100f));
	if (Global_2667225.f_676 == 0)
	{
		Global_2667225.f_682 = 0;
		Global_2667225.f_677 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		Global_2667225.f_675 = SCRIPT::GET_ID_OF_THIS_THREAD();
		Global_2667225.f_679 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		Global_2667225.f_695 = { Param0 };
		Global_2667225.f_698 = iParam2;
		Global_2667225.f_681 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		__LIB_0__::func_851();
		__LIB_0__::func_854();
		if (!uParam6->f_27 || (((((((__LIB_2__::func_971(Param0, 1, 1133903872) && !uParam6->f_28) && !Global_2815059.f_924) && !Global_2815059.f_913) && !Global_2815059.f_921) && !Global_2815059.f_925) && !Global_2815059.f_933) && !Global_2815059.f_945))
		{
			__LIB_23__::func_523(Param0, iParam2);
		}
		if (__LIB_12__::func_389(Param0))
		{
			__LIB_23__::func_523(Param0, iParam2);
		}
		Global_2667225.f_676 = 2;
	}
	switch (Global_2667225.f_676)
	{
		case 2:
			if (PATHFIND::ARE_NODES_LOADED_FOR_AREA((Param0.f_0 - 100f), (Param0.f_1 - 100f), (Param0.f_0 + 100f), (Param0.f_1 + 100f)))
			{
				Global_2667225.f_683 = { Param0 };
				Global_2667225.f_686 = 0f;
				if (Global_2815059.f_924)
				{
					fVar2 = 10f;
					fVar3 = 5f;
					fVar4 = 5f;
				}
				else
				{
					fVar2 = 4f;
					fVar3 = 1f;
					fVar4 = 1f;
				}
				if (((uParam6->f_3 && __LIB_1__::func_408(Param0, fVar2, fVar3, fVar4, 1f, 0, 0, 0, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0)) && !uParam6->f_7) && !__LIB_2__::func_991(Param0, *uParam5, iParam2, PLAYER::PLAYER_ID(), 0))
				{
					Global_2667225.f_683 = { Param0 };
					Global_2667225.f_686 = *uParam5;
				}
				else
				{
					Var5.f_6 = 1082130432;
					Var5.f_7 = 1176255488;
					Var5.f_8 = 1;
					Var5.f_10 = 1;
					Var5.f_13 = 1;
					Var5.f_15 = 1;
					Var5.f_16 = 1;
					Var5.f_31 = 1;
					Var5.f_34 = joaat("tailgater");
					Var5.f_38 = 2;
					Var5.f_45 = 2;
					Var5.f_49 = 1123024896;
					Var5.f_53 = 999;
					Var5.f_54 = 1176256410;
					Var5.f_55 = 1;
					Var5.f_56 = 1;
					Var5.f_57 = 1;
					Var5.f_9 = iParam3;
					Var5.f_3 = 7f;
					Var5.f_10 = uParam6->f_5;
					Var5.f_4 = *uParam6;
					Var5.f_13 = uParam6->f_1;
					Var5.f_14 = uParam6->f_2;
					Var5.f_5 = uParam6->f_4;
					Var5.f_15 = uParam6->f_6;
					Var5.f_11 = uParam6->f_7;
					Var5.f_6 = uParam6->f_8;
					Var5.f_7 = uParam6->f_9;
					Var5.f_16 = uParam6->f_10;
					Var5.f_17 = uParam6->f_11;
					Var5 = { Param1 };
					Var5.f_12 = 1;
					Var5.f_34 = iParam2;
					Var5.f_31 = uParam6->f_13;
					if (uParam6->f_32 && Global_2667225.f_682 > 0)
					{
						Var5.f_30 = 0;
						Var5.f_29 = 1;
					}
					else
					{
						Var5.f_30 = uParam6->f_30;
						Var5.f_29 = uParam6->f_31;
					}
					Var5.f_48 = uParam6->f_14;
					Var5.f_56 = uParam6->f_25;
					Var5.f_57 = uParam6->f_26;
					Var5.f_49 = uParam6->f_29;
					Var5.f_59 = uParam6->f_33;
					Var5.f_60 = uParam6->f_34;
					iVar1 = 0;
					while (iVar1 < 2)
					{
						Var5.f_38[iVar1 /*3*/] = { uParam6->f_15[iVar1 /*3*/] };
						Var5.f_45[iVar1] = uParam6->f_22[iVar1];
						iVar1++;
					}
					func_481(&(Global_2667225.f_683), &(Global_2667225.f_686), &Var5);
				}
				__LIB_1__::func_571(Global_2667225.f_683, Global_2667225.f_686, iParam2, &(Global_2667225.f_673));
				Global_2667225.f_671 = 0;
				Global_2667225.f_672 = 0;
				Global_2667225.f_682++;
				Global_2667225.f_678 = NETWORK::GET_NETWORK_TIME_ACCURATE();
				Global_2667225.f_677 = NETWORK::GET_NETWORK_TIME_ACCURATE();
				Global_2667225.f_676 = 3;
			}
			break;
		case 3:
			if (Global_2667225.f_671)
			{
				if (Global_2667225.f_673 == Global_2667225.f_674)
				{
					if (Global_2667225.f_672)
					{
						if (uParam6->f_12 && !uParam6->f_11)
						{
							if (__LIB_2__::func_765(Global_2667225.f_683, Global_2667225.f_686, iParam2, 1, 1036831949))
							{
								Global_2667225.f_676 = 4;
								Global_2667225.f_700 = NETWORK::GET_NETWORK_TIME_ACCURATE();
							}
							else
							{
								bVar0 = true;
							}
						}
						else
						{
							bVar0 = true;
						}
					}
					else
					{
						func_476(Global_2667225.f_683, 0);
						__LIB_0__::func_821(-1);
					}
				}
				else
				{
					Global_2667225.f_671 = 0;
					Global_2667225.f_672 = 0;
				}
			}
			else if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667225.f_678) > 3000)
			{
				__LIB_0__::func_821(-1);
			}
			break;
		case 4:
			if (uParam6->f_12 && !uParam6->f_11)
			{
				if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667225.f_700) < 10000)
				{
					if (NETWORK::NETWORK_ENTITY_AREA_DOES_EXIST(Global_2667225.f_699))
					{
						if (NETWORK::NETWORK_ENTITY_AREA_HAVE_ALL_REPLIED(Global_2667225.f_699))
						{
							if (!NETWORK::NETWORK_ENTITY_AREA_IS_OCCUPIED(Global_2667225.f_699))
							{
								if (__LIB_2__::func_987(Global_2667225.f_683, Global_2667225.f_686, iParam2, PLAYER::PLAYER_ID(), 0) || __LIB_2__::func_986(Global_2667225.f_683, Global_2667225.f_686, iParam2, 1, 0, 0, 0, 1, 0))
								{
									func_476(Global_2667225.f_683, 0);
									__LIB_0__::func_821(-1);
								}
								else
								{
									bVar0 = true;
								}
							}
							else
							{
								func_476(Global_2667225.f_683, 0);
								__LIB_0__::func_821(-1);
							}
						}
					}
					else
					{
						__LIB_0__::func_821(-1);
					}
				}
				else
				{
					__LIB_0__::func_821(1);
				}
			}
			else
			{
				bVar0 = true;
			}
			break;
		case 5:
			Global_2667225.f_683 = { Param0 };
			Global_2667225.f_686 = 0f;
			Var6.f_6 = 1082130432;
			Var6.f_7 = 1176255488;
			Var6.f_8 = 1;
			Var6.f_10 = 1;
			Var6.f_13 = 1;
			Var6.f_15 = 1;
			Var6.f_16 = 1;
			Var6.f_31 = 1;
			Var6.f_34 = joaat("tailgater");
			Var6.f_38 = 2;
			Var6.f_45 = 2;
			Var6.f_49 = 1123024896;
			Var6.f_53 = 999;
			Var6.f_54 = 1176256410;
			Var6.f_55 = 1;
			Var6.f_56 = 1;
			Var6.f_57 = 1;
			Var6.f_9 = iParam3;
			Var6.f_3 = 3.5f;
			Var6.f_10 = uParam6->f_5;
			Var6.f_4 = *uParam6;
			Var6.f_12 = 1;
			Var6.f_13 = 0;
			Var6.f_15 = uParam6->f_6;
			Var6.f_11 = uParam6->f_7;
			Var6.f_6 = uParam6->f_8;
			Var6.f_7 = uParam6->f_9;
			Var6 = { Param1 };
			Var6.f_34 = iParam2;
			Var6.f_31 = uParam6->f_13;
			Var6.f_30 = 1;
			Var6.f_48 = uParam6->f_14;
			Var6.f_56 = uParam6->f_25;
			Var6.f_57 = uParam6->f_26;
			Var6.f_30 = uParam6->f_30;
			Var6.f_29 = uParam6->f_31;
			Var6.f_59 = uParam6->f_33;
			Var6.f_60 = uParam6->f_34;
			iVar1 = 0;
			while (iVar1 < 2)
			{
				Var6.f_38[iVar1 /*3*/] = { uParam6->f_15[iVar1 /*3*/] };
				Var6.f_45[iVar1] = uParam6->f_22[iVar1];
				iVar1++;
			}
			Var6.f_49 = uParam6->f_29;
			func_481(&(Global_2667225.f_683), &(Global_2667225.f_686), &Var6);
			Global_2667225.f_676 = 6;
			break;
		case 6:
			bVar0 = true;
			break;
	}
	Global_2667225.f_695 = { Param0 };
	Global_2667225.f_698 = iParam2;
	Global_2667225.f_679 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	if (bVar0)
	{
		Global_2667225.f_516 = 0;
		*uParam4 = { Global_2667225.f_683 };
		*uParam5 = Global_2667225.f_686;
		__LIB_1__::func_527(1);
		return 1;
	}
	return 0;
}

void func_476(struct<3> Param0, int iParam1)//Position - 0x2D7E5
{
	struct<3> Var0;
	if (iParam1 == 0 && __LIB_0__::func_822(Param0, 0.01f))
	{
		return;
	}
	if (iParam1 < 30 && SYSTEM::VMAG(Param0) > 0f)
	{
		Var0 = { Global_2667225.f_2737[iParam1 /*3*/] };
		Global_2667225.f_2737[iParam1 /*3*/] = { Param0 };
		func_476(Var0, iParam1 + 1);
	}
}

void func_481(var uParam0, var uParam1, var uParam2)//Position - 0x2D9F8
{
	int iVar0;
	iVar0 = 0;
	if (Global_2667225.f_1754 > 0)
	{
		iVar0 = 0;
		while (func_529(uParam0, uParam1, uParam2) == 0 && iVar0 < 2)
		{
			iVar0++;
		}
		if (iVar0 == 2)
		{
			uParam2->f_33 = 0;
		}
		else
		{
			return;
		}
	}
	iVar0 = 0;
	while (func_482(uParam0, uParam1, uParam2) == 0 && iVar0 < 6)
	{
		iVar0++;
	}
}

int func_482(var uParam0, var uParam1, var uParam2)//Position - 0x2DA67
{
	int iVar0;
	struct<3> Var1;
	float* fVar2;
	int iVar3;
	var uVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	float fVar11;
	float fVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	bool bVar16;
	int iVar17;
	bool bVar18;
	int iVar19;
	float fVar20;
	int iVar21;
	int iVar22;
	float fVar23;
	int iVar24;
	struct<3> Var25;
	var uVar26;
	struct<3> Var27;
	float* fVar28;
	bool bVar29;
	iVar0 = 0;
	if (!SYSTEM::VMAG(uParam2->f_35) > 0f)
	{
		uParam2->f_35 = { *uParam0 };
	}
	if (uParam2->f_15)
	{
		if (func_525(uParam2->f_35, uParam0, &(uParam2->f_38), &(uParam2->f_45), 1, 1))
		{
			uParam2->f_6 = 9999.9f;
			uParam2->f_7 = 9999.9f;
		}
	}
	if (uParam2->f_51)
	{
		uParam2->f_6 = 9999.9f;
	}
	if (uParam2->f_48)
	{
		if (__LIB_1__::func_572(uParam0, 1))
		{
		}
	}
	if (uParam0->f_2 < -80f)
	{
		uParam2->f_6 = 9999.9f;
		uParam2->f_7 = 9999.9f;
	}
	iVar3 = 0;
	bVar8 = true;
	if (uParam2->f_11)
	{
		iVar3 += 2;
		iVar3++;
		bVar8 = false;
	}
	else if (uParam2->f_10 == 0 || (uParam2->f_33 > 0 && uParam2->f_16))
	{
		iVar3++;
		bVar8 = false;
	}
	iVar3 += 4;
	fVar11 = 3f;
	fVar12 = 5f;
	switch (uParam2->f_33)
	{
		case 0:
			fVar11 = 3f;
			fVar12 = 5f;
			break;
		case 1:
			fVar11 = 2.75f;
			fVar12 = 7.5f;
			break;
		default:
			fVar11 = 2.5f;
			fVar12 = 10f;
			break;
	}
	iVar13 = 0;
	Global_2674786.f_162 = 0;
	Global_2674786.f_163 = 0;
	Global_2674786.f_164 = -99;
	Global_2674786.f_165 = { 0f, 0f, 0f };
	iVar14 = 0;
	while (iVar14 < 40)
	{
		Global_2674786[iVar14 /*3*/] = { 0f, 0f, 0f };
		Global_2674786.f_121[iVar14] = 0f;
		iVar14++;
	}
	iVar15 = 1;
	if (__LIB_1__::func_452(uParam2->f_34) != 0)
	{
		iVar15 = 3;
		uParam2->f_6 = 9999.9f;
		uParam2->f_7 = 9999.9f;
		uParam2->f_18 = 0;
	}
	while (true)
	{
		iVar6 = PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_ID_WITH_HEADING(*uParam0, (iVar0 * iVar15), &fVar2, &iVar7, iVar3, fVar11, fVar12);
		if (PATHFIND::IS_VEHICLE_NODE_ID_VALID(iVar6))
		{
			PATHFIND::GET_VEHICLE_NODE_POSITION(iVar6, &Var1);
			bVar10 = false;
			if (Global_2674786.f_164 == iVar6)
			{
				bVar10 = true;
			}
			Global_2674786.f_165 = { Var1 };
			if (((uParam2->f_10 || uParam2->f_33 > 0) || !PATHFIND::GET_VEHICLE_NODE_IS_SWITCHED_OFF(iVar6)) || PATHFIND::GET_VEHICLE_NODE_IS_GPS_ALLOWED(iVar6))
			{
				PATHFIND::GET_VEHICLE_NODE_PROPERTIES(Var1, &uVar4, &uVar5);
				if (SYSTEM::VDIST(Var1, uParam2->f_35) > uParam2->f_4)
				{
					if (!__LIB_2__::func_784(&Var1, 0))
					{
						if ((uParam2->f_13 || uVar5 & 64 == 0) || uParam2->f_33 == 1)
						{
							if (uParam2->f_14 || uVar5 & 16 == 0)
							{
								if ((uVar5 & 128 == 0 && uVar5 & 256 == 0) && uVar5 & 512 == 0)
								{
									if (!__LIB_1__::func_434(Var1))
									{
										Var1 = { __LIB_2__::func_783(Var1, &fVar2, iVar7, uParam2->f_9, *uParam2, bVar8, uParam2->f_11, uParam2->f_34, &bVar9, bVar10, 1, uParam2->f_51, uParam2->f_60) };
										if (SYSTEM::VMAG(Var1) > 0f)
										{
											if (!__LIB_2__::func_990(Var1, 5f))
											{
												if (Var1.f_2 >= (uParam2->f_35.f_2 - uParam2->f_7) || uParam2->f_33 >= 2)
												{
													if (Var1.f_2 <= (uParam2->f_35.f_2 + uParam2->f_6) || uParam2->f_33 >= 2)
													{
														if (__LIB_1__::func_546(Var1, uParam2))
														{
															if ((uParam2->f_48 && !__LIB_1__::func_572(&Var1, 0)) || uParam2->f_48 == 0)
															{
																bVar16 = true;
																if (!bVar10)
																{
																	if (bVar9)
																	{
																		iVar0 = (iVar0 + -1);
																		bVar16 = false;
																	}
																}
																if (SYSTEM::VMAG(Var1) > 0f)
																{
																	if (((uParam2->f_5 > 0f && SYSTEM::VDIST(Var1.f_0, Var1.f_1, 0f, uParam2->f_35, uParam2->f_35.f_1, 0f) < uParam2->f_5) || uParam2->f_5 <= 0f) || uParam2->f_33 >= 2)
																	{
																		if ((uParam2->f_12 && !__LIB_10__::func_743(Var1, fVar2, uParam2->f_34, PLAYER::PLAYER_ID(), 0, uParam2->f_56)) || !uParam2->f_12)
																		{
																			if (!uParam2->f_15 || !func_525(uParam2->f_35, &Var1, &(uParam2->f_38), &(uParam2->f_45), 0, 1))
																			{
																				if (uParam2->f_8)
																				{
																					iVar17 = uParam2->f_31;
																					bVar18 = true;
																					iVar19 = 1;
																					fVar20 = uParam2->f_49;
																					if (!uParam2->f_55)
																					{
																						iVar17 = 0;
																						bVar18 = false;
																						iVar19 = 0;
																						fVar20 = 1f;
																					}
																					else if (uParam2->f_17)
																					{
																						iVar17 = 0;
																						bVar18 = false;
																						iVar19 = 0;
																						if (uParam2->f_33 == 1)
																						{
																							fVar20 = (fVar20 * 0.375f);
																						}
																					}
																					else
																					{
																						bVar18 = true;
																						iVar19 = 1;
																						if (uParam2->f_28)
																						{
																							if (uParam2->f_33 == 1)
																							{
																								fVar20 = (fVar20 * 0.375f);
																							}
																						}
																					}
																					iVar21 = 0;
																					if (!__LIB_2__::func_989(Var1, fVar2, uParam2->f_34))
																					{
																						if (uParam2->f_3 > 7f)
																						{
																							if (__LIB_1__::func_408(Var1, 6f, 1f, 1f, 5f, iVar17, bVar18, iVar19, fVar20, uParam2->f_58, -1, 1, uParam2->f_3, 0, 0, 0, 0))
																							{
																								iVar21 = 1;
																							}
																						}
																						else if (__LIB_1__::func_408(Var1, 6f, 1f, 1f, 5f, iVar17, bVar18, iVar19, fVar20, uParam2->f_58, -1, 1, 0f, 0, 0, 0, 0) && !__LIB_2__::func_986(Var1, fVar2, uParam2->f_34, 1, 1, 0, 0, 0, 0))
																						{
																							iVar21 = 1;
																						}
																					}
																					if (iVar21 || uParam2->f_33 >= 2)
																					{
																						if (((uParam2->f_29 || uParam2->f_30) || uParam2->f_52) || uParam2->f_33 >= 2)
																						{
																							fVar23 = 0f;
																							if (uParam2->f_52)
																							{
																								iVar22 = __LIB_1__::func_575(Var1, uParam2->f_54, &fVar23);
																							}
																							if (!uParam2->f_52 || (uParam2->f_52 && iVar22 <= uParam2->f_53))
																							{
																								if (uParam2->f_52)
																								{
																									if (iVar22 < uParam2->f_53)
																									{
																										iVar14 = 0;
																										while (iVar14 < Global_2674786.f_162)
																										{
																											Global_2674786[iVar14 /*3*/] = { 0f, 0f, 0f };
																											Global_2674786.f_121[iVar14] = 0f;
																											iVar14++;
																										}
																										Global_2674786.f_162 = 0;
																										uParam2->f_53 = iVar22;
																									}
																								}
																								if (uParam2->f_30)
																								{
																									if (Global_2674786.f_162 == 0)
																									{
																										Global_2674786[0 /*3*/] = { Var1 };
																										Global_2674786.f_121[0] = fVar2;
																									}
																									else
																									{
																										iVar14 = 0;
																										while (iVar14 < Global_2674786.f_162 + 1)
																										{
																											if (iVar14 < 40)
																											{
																												if (SYSTEM::VDIST2(Var1, uParam2->f_35) < SYSTEM::VDIST2(Global_2674786[iVar14 /*3*/], uParam2->f_35))
																												{
																													func_490(Var1, fVar2, iVar14);
																													iVar14 = Global_2674786.f_162 + 1;
																												}
																											}
																											iVar14++;
																										}
																									}
																									Global_2674786.f_162++;
																									if (Global_2674786.f_162 >= 5)
																									{
																										if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
																										{
																											iVar0 = 100;
																										}
																										else if (Global_2674786.f_162 == 40)
																										{
																											iVar0 = 100;
																										}
																									}
																								}
																								else
																								{
																									Global_2674786[Global_2674786.f_162 /*3*/] = { Var1 };
																									Global_2674786.f_121[Global_2674786.f_162] = fVar2;
																									Global_2674786.f_162++;
																									if (__LIB_1__::func_546(Var1, uParam2))
																									{
																										Global_2674786.f_163++;
																									}
																									if (Global_2674786.f_162 >= 10)
																									{
																										if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
																										{
																											iVar0 = 100;
																										}
																										else if (Global_2674786.f_162 == 40)
																										{
																											iVar0 = 100;
																										}
																									}
																								}
																							}
																						}
																						else
																						{
																							*uParam0 = { Var1 };
																							*uParam1 = fVar2;
																							return 1;
																						}
																					}
																					else if (bVar16)
																					{
																						iVar0++;
																					}
																				}
																				else
																				{
																					*uParam0 = { Var1 };
																					*uParam1 = fVar2;
																					return 1;
																				}
																			}
																		}
																		else
																		{
																			iVar13++;
																		}
																	}
																	else
																	{
																		iVar0 = 100;
																	}
																}
															}
															else
															{
																iVar0++;
															}
														}
														else if (!uParam2->f_32)
														{
															iVar0 = 100;
														}
													}
													else
													{
														iVar0++;
													}
												}
												else
												{
													iVar0++;
												}
											}
										}
									}
									else
									{
										iVar0++;
									}
								}
							}
							else
							{
								iVar0++;
							}
						}
						else
						{
							iVar0++;
						}
					}
					else
					{
						iVar13++;
					}
				}
				else
				{
					iVar13++;
				}
			}
			iVar0++;
			if (iVar0 >= (40 + iVar13) || iVar0 >= 100)
			{
				if (Global_2674786.f_162 > 0 && ((uParam2->f_29 || uParam2->f_30) || uParam2->f_33 >= 2))
				{
					if (uParam2->f_30)
					{
						*uParam0 = { Global_2674786[0 /*3*/] };
						*uParam1 = Global_2674786.f_121[0];
						return 1;
					}
					else
					{
						if (Global_2674786.f_163 > 0 && !Global_2674786.f_163 == Global_2674786.f_162)
						{
							func_488(0, uParam2);
						}
						iVar24 = MISC::GET_RANDOM_INT_IN_RANGE(0, Global_2674786.f_162);
						if (uParam2->f_18 && uParam2->f_30)
						{
							iVar24 = 0;
						}
						Var25 = { Global_2674786[0 /*3*/] };
						uVar26 = Global_2674786.f_121[0];
						Global_2674786[0 /*3*/] = { Global_2674786[iVar24 /*3*/] };
						Global_2674786.f_121[0] = Global_2674786.f_121[iVar24];
						Global_2674786[iVar24 /*3*/] = { Var25 };
						Global_2674786.f_121[iVar24] = uVar26;
						*uParam0 = { Global_2674786[0 /*3*/] };
						*uParam1 = Global_2674786.f_121[0];
						return 1;
					}
				}
				else
				{
					uParam2->f_33++;
					if (uParam2->f_33 < 3)
					{
						return 0;
					}
					else
					{
						__LIB_2__::func_856(iVar13, *uParam0, &iVar0, &Var1, &fVar2, uParam2, bVar8, iVar7, iVar3, fVar11, fVar12, bVar9);
						Var27 = { Var1 };
						fVar28 = fVar2;
						if (!uParam2->f_50)
						{
							bVar29 = true;
						}
						else
						{
							bVar29 = false;
						}
						if (func_525(uParam2->f_35, &Var27, &(uParam2->f_38), &(uParam2->f_45), bVar29, 1) || __LIB_1__::func_572(&Var27, bVar29))
						{
							if (!uParam2->f_50)
							{
								uParam2->f_33 = 0;
								uParam2->f_50 = 1;
								*uParam0 = { Var27 };
								*uParam1 = fVar28;
								uParam2->f_6 = 9999.9f;
								uParam2->f_7 = 9999.9f;
								return 0;
							}
							else
							{
								*uParam0 = { Var27 };
								*uParam1 = fVar28;
								return 1;
							}
						}
						else
						{
							*uParam0 = { Var27 };
							*uParam1 = fVar28;
							return 1;
						}
					}
				}
			}
		}
		else
		{
			uParam2->f_33++;
			if (uParam2->f_33 < 3)
			{
				return 0;
			}
			else
			{
				__LIB_11__::func_280(&Global_1574205, uParam0, uParam1, *uParam0);
				if (uParam2->f_11)
				{
					uParam2->f_27 = 1;
				}
				return 1;
			}
		}
		Global_2674786.f_164 = iVar6;
	}
	return 0;
}

void func_488(int iParam0, var uParam1)//Position - 0x2E7C6
{
	if (!__LIB_1__::func_546(Global_2674786[iParam0 /*3*/], uParam1))
	{
		Global_2674786.f_162 = (Global_2674786.f_162 - 1);
		__LIB_0__::func_824(iParam0);
		if (Global_2674786.f_162 > Global_2674786.f_163)
		{
			func_488(iParam0, uParam1);
		}
	}
	else if (iParam0 < 39)
	{
		func_488(iParam0 + 1, uParam1);
	}
}

void func_490(struct<3> Param0, float fParam1, int iParam2)//Position - 0x2E86C
{
	struct<3> Var0;
	var uVar1;
	Var0 = { Global_2674786[iParam2 /*3*/] };
	uVar1 = Global_2674786.f_121[iParam2];
	Global_2674786[iParam2 /*3*/] = { Param0 };
	Global_2674786.f_121[iParam2] = fParam1;
	if (iParam2 <= Global_2674786.f_162 && iParam2 < 39)
	{
		if (SYSTEM::VMAG(Var0) > 0f)
		{
			func_490(Var0, uVar1, iParam2 + 1);
		}
	}
}

int func_525(struct<3> Param0, var uParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)//Position - 0x30225
{
	int iVar0;
	bool bVar1;
	if (func_577(Param0))
	{
		if (func_528(uParam1, bParam4, 0, 1, 1))
		{
			if (bParam4)
			{
			}
			return 1;
		}
	}
	if (__LIB_2__::func_766(uParam1, bParam4, 1))
	{
		if (bParam4)
		{
		}
		return 1;
	}
	if (bParam5)
	{
		if (__LIB_0__::func_822(*uParam1, 1056964608))
		{
			return 1;
		}
	}
	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < *uParam2)
	{
		if (SYSTEM::VDIST(*uParam1, *(uParam2[iVar0 /*3*/])) < (*uParam3)[iVar0])
		{
			if (bParam4)
			{
				__LIB_1__::func_450(uParam1, *(uParam2[iVar0 /*3*/]), (*uParam3)[iVar0], 1036831949, 0, 0);
			}
			bVar1 = true;
		}
		iVar0++;
	}
	if (bVar1)
	{
		return 1;
	}
	return 0;
}

int func_528(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0x3046F
{
	int iVar0;
	struct<3> Var1;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (Global_2672169[iVar0 /*17*/].f_9 == 1)
		{
			if (!bParam2 || (bParam2 && Global_2672169[iVar0 /*17*/].f_16))
			{
				if (__LIB_1__::func_528(*uParam0, &(Global_2672169[iVar0 /*17*/]), 1008981770, bParam4, 0))
				{
					if (bParam1)
					{
						if (Global_2672169[iVar0 /*17*/].f_12)
						{
							*uParam0 = { Global_2672169[iVar0 /*17*/].f_13 };
						}
						else
						{
							Var1 = { *uParam0 };
							__LIB_1__::func_566(&Var1, &(Global_2672169[iVar0 /*17*/]), 1036831949, 0, bParam3);
							if (func_528(&Var1, 0, 0, 0, 1))
							{
								Var1 = { *uParam0 };
								__LIB_1__::func_566(&Var1, &(Global_2672169[iVar0 /*17*/]), 1036831949, 1, 0);
							}
							*uParam0 = { Var1 };
						}
					}
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_529(var uParam0, var uParam1, var uParam2)//Position - 0x3054A
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var3;
	float fVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	float fVar9;
	bool bVar10;
	int iVar11;
	float fVar12;
	struct<3> Var13;
	var uVar14;
	if (Global_2667225.f_1754 > 0)
	{
		iVar1 = 0;
		iVar2 = 0;
		if (!SYSTEM::VMAG(uParam2->f_35) > 0f)
		{
			uParam2->f_35 = { *uParam0 };
		}
		if (uParam2->f_15)
		{
			if (func_525(uParam2->f_35, uParam0, &(uParam2->f_38), &(uParam2->f_45), 1, 1))
			{
				uParam2->f_6 = 9999.9f;
				uParam2->f_7 = 9999.9f;
			}
		}
		if (uParam2->f_48)
		{
			if (__LIB_1__::func_572(uParam0, 1))
			{
				uParam2->f_6 = 9999.9f;
				uParam2->f_7 = 9999.9f;
			}
		}
		if (uParam0->f_2 < -80f)
		{
			uParam2->f_6 = 9999.9f;
			uParam2->f_7 = 9999.9f;
		}
		Global_2674786.f_162 = 0;
		Global_2674786.f_163 = 0;
		iVar5 = 0;
		while (iVar5 < 40)
		{
			Global_2674786[iVar5 /*3*/] = { 0f, 0f, 0f };
			Global_2674786.f_121[iVar5] = 0f;
			iVar5++;
		}
		if (uParam2->f_30)
		{
			__LIB_1__::func_454(*uParam0);
		}
		else if (uParam2->f_29)
		{
			__LIB_0__::func_838();
		}
		else
		{
			__LIB_0__::func_837();
		}
		iVar1 = 0;
		while (iVar1 < Global_2667225.f_1754)
		{
			iVar2 = Global_2667225.f_2160[iVar1];
			if (iVar2 > -1 && iVar2 < 101)
			{
				Var3 = { Global_2667225.f_1755[iVar2 /*4*/] };
				fVar4 = Global_2667225.f_1755[iVar2 /*4*/].f_3;
				if (SYSTEM::VMAG(Var3) > 0f)
				{
					if ((uParam2->f_57 && SYSTEM::VDIST(Var3, uParam2->f_35) > uParam2->f_4) || uParam2->f_57 == 0)
					{
						if ((uParam2->f_5 > 0f && SYSTEM::VDIST(Var3.f_0, Var3.f_1, 0f, uParam2->f_35, uParam2->f_35.f_1, 0f) < uParam2->f_5) || uParam2->f_5 <= 0f)
						{
							if ((uParam2->f_12 && !__LIB_10__::func_743(Var3, fVar4, uParam2->f_34, PLAYER::PLAYER_ID(), 0, uParam2->f_56)) || !uParam2->f_12)
							{
								if (!uParam2->f_15 || !func_525(uParam2->f_35, &Var3, &(uParam2->f_38), &(uParam2->f_45), 0, 1))
								{
									if (uParam2->f_8)
									{
										iVar6 = uParam2->f_31;
										bVar7 = true;
										iVar8 = 1;
										fVar9 = uParam2->f_49;
										if (!uParam2->f_55)
										{
											iVar6 = 0;
											bVar7 = false;
											iVar8 = 0;
											fVar9 = 1f;
										}
										else if (uParam2->f_17)
										{
											iVar6 = 0;
											bVar7 = false;
											iVar8 = 0;
											if (uParam2->f_33 == 1)
											{
												fVar9 = (fVar9 * 0.375f);
											}
										}
										else
										{
											bVar7 = true;
											iVar8 = 1;
											if (uParam2->f_28)
											{
												if (uParam2->f_33 == 1)
												{
													fVar9 = (fVar9 * 0.375f);
												}
											}
										}
										bVar10 = false;
										if (!__LIB_2__::func_989(Var3, fVar4, uParam2->f_34))
										{
											if (uParam2->f_3 > 7f)
											{
												if (__LIB_1__::func_408(Var3, 6f, 1f, 1f, 5f, iVar6, bVar7, iVar8, fVar9, uParam2->f_58, -1, 1, uParam2->f_3, 0, 0, 0, 0))
												{
													bVar10 = true;
												}
											}
											else if (__LIB_1__::func_408(Var3, 6f, 1f, 1f, 5f, iVar6, bVar7, iVar8, fVar9, uParam2->f_58, -1, 1, 0f, 0, 0, 0, 0) && !__LIB_2__::func_986(Var3, fVar4, uParam2->f_34, 1, 1, 0, 0, uParam2->f_58, 0))
											{
												bVar10 = true;
											}
										}
										if (bVar10)
										{
											if ((uParam2->f_29 || uParam2->f_30) || uParam2->f_52)
											{
												fVar12 = 0f;
												if (uParam2->f_52)
												{
													iVar11 = __LIB_1__::func_575(Var3, uParam2->f_54, &fVar12);
												}
												if (!uParam2->f_52 || (uParam2->f_52 && iVar11 <= uParam2->f_53))
												{
													if (uParam2->f_52)
													{
														if (iVar11 < uParam2->f_53)
														{
															iVar5 = 0;
															while (iVar5 < Global_2674786.f_162)
															{
																Global_2674786[iVar5 /*3*/] = { 0f, 0f, 0f };
																Global_2674786.f_121[iVar5] = 0f;
																iVar5++;
															}
															Global_2674786.f_162 = 0;
															uParam2->f_53 = iVar11;
														}
													}
													if (uParam2->f_30)
													{
														if (Global_2674786.f_162 == 0)
														{
															Global_2674786[0 /*3*/] = { Var3 };
															Global_2674786.f_121[0] = fVar4;
														}
														else
														{
															iVar5 = 0;
															while (iVar5 < Global_2674786.f_162 + 1)
															{
																if (iVar5 < 40)
																{
																	if (SYSTEM::VDIST2(Var3, uParam2->f_35) < SYSTEM::VDIST2(Global_2674786[iVar5 /*3*/], uParam2->f_35))
																	{
																		func_490(Var3, fVar4, iVar5);
																		iVar5 = Global_2674786.f_162 + 1;
																	}
																}
																iVar5++;
															}
														}
														Global_2674786.f_162++;
														if (Global_2674786.f_162 >= 5)
														{
															if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
															{
																iVar1 = Global_2667225.f_1754;
															}
															else if (Global_2674786.f_162 == 40)
															{
																iVar1 = Global_2667225.f_1754;
															}
														}
													}
													else
													{
														Global_2674786[Global_2674786.f_162 /*3*/] = { Var3 };
														Global_2674786.f_121[Global_2674786.f_162] = fVar4;
														Global_2674786.f_162++;
														if (Global_2674786.f_162 >= 10)
														{
															if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
															{
																iVar1 = Global_2667225.f_1754;
															}
															else if (Global_2674786.f_162 == 40)
															{
																iVar1 = Global_2667225.f_1754;
															}
														}
													}
												}
											}
											else
											{
												*uParam0 = { Var3 };
												*uParam1 = fVar4;
												return 1;
											}
										}
									}
									else
									{
										*uParam0 = { Var3 };
										*uParam1 = fVar4;
										return 1;
									}
								}
							}
						}
					}
				}
			}
			iVar1++;
		}
		if (Global_2674786.f_162 > 0)
		{
			if (uParam2->f_30)
			{
				*uParam0 = { Global_2674786[0 /*3*/] };
				*uParam1 = Global_2674786.f_121[0];
				return 1;
			}
			else
			{
				if (Global_2674786.f_163 > 0 && !Global_2674786.f_163 == Global_2674786.f_162)
				{
					func_488(0, uParam2);
				}
				iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, Global_2674786.f_162);
				Var13 = { Global_2674786[0 /*3*/] };
				uVar14 = Global_2674786.f_121[0];
				Global_2674786[0 /*3*/] = { Global_2674786[iVar0 /*3*/] };
				Global_2674786.f_121[0] = Global_2674786.f_121[iVar0];
				Global_2674786[iVar0 /*3*/] = { Var13 };
				Global_2674786.f_121[iVar0] = uVar14;
				*uParam0 = { Global_2674786[0 /*3*/] };
				*uParam1 = Global_2674786.f_121[0];
				return 1;
			}
		}
		else
		{
			uParam2->f_33++;
			if (uParam2->f_33 < 2)
			{
				return 0;
			}
			else if (uParam2->f_59 && Global_2667225.f_1754 > 0)
			{
				iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, Global_2667225.f_1754);
				*uParam0 = { Global_2667225.f_1755[iVar0 /*4*/] };
				*uParam1 = Global_2667225.f_1755[iVar0 /*4*/].f_3;
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	return 0;
}

int func_577(struct<3> Param0)//Position - 0x399BD
{
	int iVar0;
	struct<3> Var1;
	if (!Global_2667225.f_515 && !Global_2667225.f_516)
	{
		if (!Global_2667225.f_45.f_317)
		{
			if (!__LIB_1__::func_455(PLAYER::PLAYER_ID(), 1))
			{
				return 1;
			}
			if (!__LIB_1__::func_560(Param0, 1008981770))
			{
				if (!func_528(&Param0, 0, 0, 0, 1))
				{
					return 1;
				}
				else if (func_528(&Param0, 0, 1, 0, 1))
				{
					return 1;
				}
			}
			else
			{
				iVar0 = __LIB_1__::func_559(Param0, 1008981770);
				if (iVar0 > -1)
				{
					Var1 = { __LIB_0__::func_852(&(Global_2667225.f_45[iVar0 /*12*/])) };
					if (!func_528(&Var1, 0, 0, 0, 1))
					{
						if (!func_528(&Param0, 0, 0, 0, 1))
						{
							return 1;
						}
					}
				}
			}
		}
	}
	return 0;
}

int func_590(int iParam0)//Position - 0x39D5F
{
	switch (iParam0)
	{
		case 0:
			return 32;
		case 1:
			return 29;
		default:
	}
	return 0;
}

void func_598(var uParam0, int iParam1)//Position - 0x39FDA
{
	if (__LIB_36__::func_381(uParam0) != iParam1)
	{
		uParam0->f_46 = iParam1;
	}
}

int func_600()//Position - 0x39FFF
{
	if (Global_2703735.f_61.f_16)
	{
		return 1;
	}
	if (Global_1966134)
	{
		return 1;
	}
	if (!__LIB_0__::func_893())
	{
		return 1;
	}
	if (!__LIB_0__::func_156(PLAYER::PLAYER_ID(), 1, 1))
	{
		return 1;
	}
	if (NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
	{
		return 1;
	}
	if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 1;
	}
	if (__LIB_2__::func_821(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	return 0;
}

int func_601(var uParam0)//Position - 0x3A075
{
	if ((MISC::GET_FRAME_COUNT() % 30) != 0)
	{
		return 0;
	}
	if (__LIB_0__::func_3() != 0)
	{
		return 0;
	}
	if (__LIB_1__::func_511(PLAYER::PLAYER_ID(), 1, 1))
	{
		return 0;
	}
	if (__LIB_2__::func_821(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (__LIB_2__::func_906())
	{
		return 0;
	}
	if (!func_602(uParam0))
	{
		return 0;
	}
	return 1;
}

int func_602(var uParam0)//Position - 0x3A0D2
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar1 = 2;
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		iVar2 = iVar0;
		if (func_603(iVar2))
		{
			*uParam0 = iVar2;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_603(int iParam0)//Position - 0x3A107
{
	var uVar0;
	uVar0 = __LIB_0__::func_369(8267, -1, 0);
	switch (iParam0)
	{
		case 0:
			if (!func_605(0))
			{
				if (BitTest(uVar0, 4) && __LIB_0__::func_355(61, -1))
				{
					return 1;
				}
			}
			break;
		case 1:
			if (func_605(1))
			{
				return 0;
			}
			if (__LIB_0__::func_137(157, -1))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_605(int iParam0)//Position - 0x3A19A
{
	switch (iParam0)
	{
		case 0:
			return __LIB_0__::func_351(229, -1);
		case 1:
			return __LIB_0__::func_137(158, -1);
		default:
	}
	return 0;
}

int func_608()//Position - 0x3A25A
{
	if (!__LIB_0__::func_893())
	{
		return 1;
	}
	if (Global_1966133)
	{
		return 1;
	}
	if (!Global_1966135)
	{
		if (__LIB_0__::func_938(PLAYER::PLAYER_ID()))
		{
			return 1;
		}
	}
	return 0;
}

void func_619()//Position - 0x3A3E1
{
	int iVar0;
	int iVar1;
	iVar0 = PLAYER::PLAYER_ID();
	if (iVar0 != -1)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_65[iVar0 /*2*/].f_1))
		{
			iVar1 = NETWORK::NET_TO_VEH(Local_65[iVar0 /*2*/].f_1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar1) && !ENTITY::IS_ENTITY_DEAD(iVar1, false))
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar1, false))
				{
					TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
				}
			}
		}
	}
	Global_1966133 = 0;
	__LIB_0__::func_202();
}

void func_621()//Position - 0x3A455
{
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(32, false, -1);
	__LIB_0__::func_895(0, -1, 0);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_65, 65, 0);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&uLocal_64, 1, 0);
	if (!__LIB_0__::func_934())
	{
		func_619();
	}
}

