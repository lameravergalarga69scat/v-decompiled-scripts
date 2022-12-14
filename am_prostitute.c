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
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	struct<3> Local_58[32];
	struct<21> Local_59 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
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
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_49(ScriptParam_59);
	}
	else
	{
		func_43();
	}
	iLocal_53 = MISC::GET_GAME_TIMER();
	while (true)
	{
		__LIB_0__::func_933();
		if (((__LIB_0__::func_959() || NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION()) || (__LIB_0__::func_970(PLAYER::PLAYER_ID()) || __LIB_0__::func_971(PLAYER::PLAYER_ID()))) || __LIB_0__::func_362(PLAYER::PLAYER_ID()))
		{
			func_43();
		}
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			func_2();
			func_1();
			iLocal_54++;
			if (iLocal_54 >= NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
			{
				iLocal_54 = 0;
			}
		}
		else
		{
			func_43();
		}
	}
}

void func_1()//Position - 0x100
{
	bool bVar0;
	int iVar1;
	int iVar2;
	iVar1 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	bVar0 = false;
	while (bVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if ((iLocal_54 % bVar0) == 0)
		{
			if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(bVar0)))
			{
				iVar2 = PLAYER::GET_PLAYER_PED(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(bVar0)));
				if (!ENTITY::IS_ENTITY_DEAD(iVar2, false))
				{
					if (Local_58[bVar0 /*3*/].f_2)
					{
						if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), ENTITY::GET_ENTITY_COORDS(iVar2, true)) <= 22500f)
						{
							if (!iLocal_56)
							{
								STREAMING::REQUEST_ANIM_DICT("mini@prostitutes@sexlow_veh");
								STREAMING::REQUEST_ANIM_DICT("mini@prostitutes@sexnorm_veh");
								STREAMING::REQUEST_ANIM_DICT("mini@prostitutes@sexlow_veh_first_person");
								STREAMING::REQUEST_ANIM_DICT("mini@prostitutes@sexnorm_veh_first_person");
								STREAMING::REQUEST_ANIM_DICT("anim@mini@prostitutes@sex@veh_vstr@");
								iLocal_56 = 1;
							}
							if (!BitTest(iLocal_55, bVar0))
							{
								MISC::SET_BIT(&iLocal_55, bVar0);
							}
						}
						else if (BitTest(iLocal_55, bVar0))
						{
							MISC::CLEAR_BIT(&iLocal_55, bVar0);
						}
					}
					else if (BitTest(iLocal_55, bVar0))
					{
						MISC::CLEAR_BIT(&iLocal_55, bVar0);
					}
				}
				else if (BitTest(iLocal_55, bVar0))
				{
					MISC::CLEAR_BIT(&iLocal_55, bVar0);
				}
			}
		}
		bVar0++;
	}
	if ((iLocal_55 == 0 && iLocal_56) && !Local_58[iVar1 /*3*/].f_2)
	{
		STREAMING::REMOVE_ANIM_DICT("mini@prostitutes@sexlow_veh");
		STREAMING::REMOVE_ANIM_DICT("mini@prostitutes@sexnorm_veh");
		STREAMING::REMOVE_ANIM_DICT("mini@prostitutes@sexlow_veh_first_person");
		STREAMING::REMOVE_ANIM_DICT("mini@prostitutes@sexnorm_veh_first_person");
		STREAMING::REMOVE_ANIM_DICT("anim@mini@prostitutes@sex@veh_vstr@");
		iLocal_56 = 0;
	}
}

void func_2()//Position - 0x232
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		return;
	}
	if (iLocal_53 > MISC::GET_GAME_TIMER())
	{
		return;
	}
	iVar0 = 0;
	iVar2 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	bVar3 = false;
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar1 = PLAYER::PLAYER_PED_ID();
			if (__LIB_12__::func_748(&iVar1))
			{
				bVar3 = true;
			}
		}
	}
	switch (iLocal_52)
	{
		case 0:
			if (((__LIB_1__::func_29(PLAYER::PLAYER_ID(), 1, 0) || __LIB_1__::func_381()) || !bVar3) || func_17())
			{
				iLocal_52 = 4;
			}
			else
			{
				iVar0 = func_13();
				if (iVar0 != func_12(iVar2) && iVar0 != 0)
				{
					func_11(iVar0);
					iLocal_53 = MISC::GET_GAME_TIMER();
					iLocal_52 = 2;
				}
				else
				{
					iLocal_53 = MISC::GET_GAME_TIMER() + 500;
				}
			}
			break;
		case 2:
			if (func_4())
			{
				Global_32113 = 0f;
				SCRIPT::REQUEST_SCRIPT("pb_prostitute");
				iLocal_53 = MISC::GET_GAME_TIMER() + 250;
				Local_58[iVar2 /*3*/].f_2 = 0;
				iLocal_52 = 3;
			}
			else
			{
				iLocal_53 = MISC::GET_GAME_TIMER() + 250;
			}
			break;
		case 3:
			if ((SCRIPT::HAS_SCRIPT_LOADED("pb_prostitute") && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("pb_prostitute")) <= 0) && !NETWORK::NETWORK_IS_SCRIPT_ACTIVE("pb_prostitute", PLAYER::NETWORK_PLAYER_ID_TO_INT(), true, 0))
			{
				iVar4 = func_12(iVar2);
				iLocal_57 = SYSTEM::START_NEW_SCRIPT_WITH_ARGS("pb_prostitute", &iVar4, 1, 2050);
				SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("pb_prostitute");
				iLocal_52 = 0;
			}
			iLocal_53 = MISC::GET_GAME_TIMER();
			break;
		case 4:
			if (func_4())
			{
				Local_58[iVar2 /*3*/].f_2 = 0;
				iLocal_53 = MISC::GET_GAME_TIMER() + 250;
				iLocal_52 = 5;
			}
			else
			{
				iLocal_53 = MISC::GET_GAME_TIMER() + 500;
			}
			break;
		case 5:
			if (((!__LIB_1__::func_29(PLAYER::PLAYER_ID(), 1, 0) && !__LIB_1__::func_381()) && bVar3) && !__LIB_2__::func_906())
			{
				iLocal_53 = MISC::GET_GAME_TIMER() + 250;
				iLocal_52 = 0;
			}
			else
			{
				iLocal_53 = MISC::GET_GAME_TIMER() + 500;
			}
			break;
	}
}

int func_4()//Position - 0x420
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("pb_prostitute")) <= 0 && !NETWORK::NETWORK_IS_SCRIPT_ACTIVE("pb_prostitute", PLAYER::NETWORK_PLAYER_ID_TO_INT(), true, 0))
	{
		return 1;
	}
	if (iLocal_57 == 0)
	{
		return 1;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_5();
	}
	else
	{
		PLAYER::FORCE_CLEANUP_FOR_ALL_THREADS_WITH_THIS_NAME("pb_prostitute", 1);
	}
	return 0;
}

void func_5()//Position - 0x46E
{
	struct<2> Var0;
	int iVar1;
	Var0.f_0 = 1866600591;
	Var0.f_1 = PLAYER::PLAYER_ID();
	iVar1 = __LIB_0__::func_943(1, 1);
	if (iVar1 != 0)
	{
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 2, iVar1);
	}
}

void func_11(int iParam0)//Position - 0x5FA
{
	Local_58[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*3*/] = iParam0;
}

int func_12(int iParam0)//Position - 0x60C
{
	if (iParam0 == -1)
	{
		return Local_58[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*3*/];
	}
	return Local_58[iParam0 /*3*/];
}

int func_13()//Position - 0x62B
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<3> Var4;
	struct<3> Var5;
	struct<3> Var6;
	float fVar7;
	float fVar8;
	iVar0 = func_14();
	iVar1 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	if (!ENTITY::DOES_ENTITY_EXIST(func_12(iVar1)))
	{
		func_11(0);
		return iVar0;
	}
	if (iLocal_57 != 0 && SCRIPT::IS_THREAD_ACTIVE(iLocal_57))
	{
		if (Local_58[iVar1 /*3*/].f_2)
		{
			return func_12(iVar1);
		}
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				iVar2 = PLAYER::PLAYER_PED_ID();
				if (__LIB_12__::func_748(&iVar2))
				{
					iVar3 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
					if (ENTITY::DOES_ENTITY_EXIST(iVar3))
					{
						if (func_12(iVar1) == VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar3, 0, false) || PED::IS_PED_IN_VEHICLE(func_12(iVar1), iVar3, true))
						{
							Local_58[iVar1 /*3*/].f_2 = 1;
							return func_12(iVar1);
						}
					}
					if (iVar0 == 0)
					{
						return func_12(iVar1);
					}
					Var4 = { ENTITY::GET_ENTITY_COORDS(func_12(iVar1), false) };
					Var5 = { ENTITY::GET_ENTITY_COORDS(iVar0, false) };
					Var6 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false) };
					fVar7 = SYSTEM::VDIST(Var4, Var6);
					fVar8 = SYSTEM::VDIST(Var6, Var5);
					if (fVar7 > fVar8)
					{
						if ((fVar7 - fVar8) > 25f)
						{
							return iVar0;
						}
						else if (fVar8 < 6f && fVar7 > 11f)
						{
							return iVar0;
						}
						else
						{
							return func_12(iVar1);
						}
					}
					else
					{
						return func_12(iVar1);
					}
				}
			}
		}
	}
	return iVar0;
}

int func_14()//Position - 0x791
{
	int iVar0;
	var uVar1[8];
	int iVar2;
	int iVar3;
	iVar0 = 0;
	iVar2 = PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uVar1, -1);
	if (iVar2 > 0)
	{
		iVar3 = 0;
		while (iVar3 <= 7)
		{
			if (!PED::IS_PED_INJURED(uVar1[iVar3]))
			{
				if (PED::IS_PED_USING_SCENARIO(uVar1[iVar3], "WORLD_HUMAN_PROSTITUTE_HIGH_CLASS") || PED::IS_PED_USING_SCENARIO(uVar1[iVar3], "WORLD_HUMAN_PROSTITUTE_LOW_CLASS"))
				{
					if (func_16(uVar1[iVar3]))
					{
						if (!func_15(uVar1[iVar3]))
						{
							if (!PED::IS_PED_FLEEING(uVar1[iVar3]))
							{
								return uVar1[iVar3];
							}
						}
					}
				}
			}
			iVar3++;
		}
	}
	return iVar0;
}

int func_15(int iParam0)//Position - 0x82C
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (Local_58[iVar0 /*3*/] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_16(int iParam0)//Position - 0x85A
{
	var uVar0;
	char* sVar1;
	sVar1 = ENTITY::GET_ENTITY_SCRIPT(iParam0, &uVar0);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
	{
		if (MISC::ARE_STRINGS_EQUAL(sVar1, "GB_VEHICLE_EXPORT"))
		{
			return 0;
		}
		if (MISC::ARE_STRINGS_EQUAL(sVar1, "BUSINESS_BATTLES_SELL"))
		{
			return 0;
		}
		if (MISC::ARE_STRINGS_EQUAL(sVar1, "BUSINESS_BATTLES"))
		{
			return 0;
		}
		if (MISC::ARE_STRINGS_EQUAL(sVar1, "GB_CASINO"))
		{
			return 0;
		}
		if (MISC::ARE_STRINGS_EQUAL(sVar1, "GB_CASINO_HEIST"))
		{
			return 0;
		}
	}
	return 1;
}

int func_17()//Position - 0x8CC
{
	if (__LIB_2__::func_906())
	{
		return 1;
	}
	if (__LIB_12__::func_547(PLAYER::PLAYER_ID()) != -1)
	{
		return 1;
	}
	if (func_18(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	return 0;
}

int func_18(int iParam0)//Position - 0x8FF
{
	if (__LIB_12__::func_747(__LIB_0__::func_492(iParam0)))
	{
		return 1;
	}
	return 0;
}

void func_43()//Position - 0x10B1
{
	if (iLocal_56)
	{
		STREAMING::REMOVE_ANIM_DICT("mini@prostitutes@sexlow_veh");
		STREAMING::REMOVE_ANIM_DICT("mini@prostitutes@sexnorm_veh");
		STREAMING::REMOVE_ANIM_DICT("mini@prostitutes@sexlow_veh_first_person");
		STREAMING::REMOVE_ANIM_DICT("mini@prostitutes@sexnorm_veh_first_person");
		STREAMING::REMOVE_ANIM_DICT("anim@mini@prostitutes@sex@veh_vstr@");
	}
	if ((!__LIB_8__::func_250(PLAYER::PLAYER_ID()) && !__LIB_6__::func_200(PLAYER::PLAYER_ID())) && !__LIB_1__::func_708(PLAYER::PLAYER_ID()))
	{
		__LIB_1__::func_91();
	}
	func_4();
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_5();
	}
	else
	{
		PLAYER::FORCE_CLEANUP_FOR_ALL_THREADS_WITH_THIS_NAME("pb_prostitute", 1);
	}
	Global_2815059.f_4 = 0;
	__LIB_0__::func_202();
}

void func_49(struct<21> Param0)//Position - 0x11D1
{
	__LIB_0__::func_935(__LIB_1__::func_32(Param0.f_0), Param0);
	__LIB_0__::func_895(0, -1, 0);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_58, 97, 0);
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_5();
	}
	else
	{
		PLAYER::FORCE_CLEANUP_FOR_ALL_THREADS_WITH_THIS_NAME("pb_prostitute", 1);
	}
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
}

