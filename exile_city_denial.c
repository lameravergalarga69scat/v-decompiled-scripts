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
	bool bLocal_29 = 0;
	bool bLocal_30 = 0;
	int iLocal_31 = 0;
	bool bLocal_32 = 0;
	int iLocal_33 = 0;
#endregion
void __EntryFunction__()//Position - 0x0
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	int iVar7;
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
	iLocal_28 = -1;
	bLocal_32 = true;
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("exile_city_denial")) > 1)
	{
		Global_43017 = 0;
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	__LIB_0__::func_513(18);
	func_41();
	SYSTEM::SETTIMERA(0);
	SYSTEM::SETTIMERB(0);
	iVar0 = 2;
	iVar1 = 0;
	while (!iLocal_31)
	{
		iLocal_31 = 1;
		if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(83))
		{
			Global_43017 = 0;
			if (!__LIB_0__::func_368(130))
			{
				__LIB_0__::func_512(18);
				func_38();
			}
			else if (__LIB_0__::func_368(131))
			{
				__LIB_0__::func_512(18);
				func_38();
			}
			switch (PLAYER::GET_CAUSE_OF_MOST_RECENT_FORCE_CLEANUP())
			{
				case 16:
					__LIB_0__::func_512(18);
					func_38();
					break;
				case 2:
					func_38();
					break;
				case 1:
					__LIB_36__::func_53(1628462442);
					__LIB_36__::func_53(1791324372);
					__LIB_36__::func_53(joaat("CALL_THIRD_CREW"));
					__LIB_36__::func_53(1806999335);
					__LIB_36__::func_53(2054503592);
					__LIB_36__::func_53(-2009081795);
					bLocal_29 = false;
					while (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
					{
						SYSTEM::WAIT(1000);
					}
					iLocal_31 = 0;
					break;
				}
		}
	}
	while (true)
	{
		if (iVar1 > 0)
		{
			iVar1 = (iVar1 - SYSTEM::TIMERA());
			SYSTEM::SETTIMERA(0);
			if (iVar1 < 0)
			{
				iVar1 = 0;
			}
		}
		Var2 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false) };
		bLocal_29 = __LIB_30__::func_927(Var2, &bLocal_32);
		if (Global_78588 || Global_78588.f_1)
		{
			bLocal_29 = false;
		}
		bVar3 = false;
		bVar4 = false;
		if (__LIB_0__::func_368(131))
		{
			bVar3 = true;
		}
		if (!__LIB_0__::func_368(130))
		{
			bVar3 = true;
		}
		if (bVar3)
		{
			Global_43017 = 0;
			__LIB_0__::func_512(18);
			func_38();
		}
		if (__LIB_18__::func_173() == 1)
		{
			bVar4 = true;
		}
		Global_43017 = bLocal_29;
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()))
			{
				if (ENTITY::IS_ENTITY_IN_AIR(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))
				{
					bLocal_29 = false;
				}
			}
		}
		if (bLocal_30 != bLocal_29)
		{
			if (!bLocal_29)
			{
				func_20();
			}
			if (bLocal_29 && !bVar4)
			{
				bVar5 = false;
				bVar6 = true;
				while (bVar6)
				{
					switch (__LIB_26__::func_296(&iLocal_28, 6, 12, 0, 0))
					{
						case 0:
							bVar6 = false;
							bVar5 = false;
							break;
						case 1:
							bVar6 = false;
							bVar5 = true;
							break;
						default:
							SYSTEM::WAIT(0);
							break;
					}
					if (Global_78319)
					{
						SCRIPT::TERMINATE_THIS_THREAD();
					}
				}
				if (bVar5)
				{
					PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID());
					if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
					{
						iVar7 = INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID());
						while (INTERIOR::IS_VALID_INTERIOR(iVar7))
						{
							SYSTEM::WAIT(5000);
							PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID());
							if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
							{
								iVar7 = INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID());
							}
						}
					}
					if (__LIB_18__::func_168(PLAYER::PLAYER_PED_ID()) == 0)
					{
						if (!BitTest(Global_113386.f_7688.f_923, 0))
						{
							__LIB_20__::func_646(1628462442, 7, 1, 31, 3, 10000, 20000, -1, -1, 150, -1, 1024);
						}
						else if (!BitTest(Global_113386.f_7688.f_923, 1))
						{
							__LIB_20__::func_646(1791324372, 7, 1, 31, 3, 10000, 20000, -1, -1, 150, -1, 1024);
						}
						else if (!BitTest(Global_113386.f_7688.f_923, 2))
						{
							__LIB_20__::func_646(joaat("CALL_THIRD_CREW"), 7, 1, 31, 3, 10000, 20000, -1, -1, 150, -1, 1024);
						}
					}
					else if (__LIB_18__::func_168(PLAYER::PLAYER_PED_ID()) == 2)
					{
						if (!BitTest(Global_113386.f_7688.f_923, 3))
						{
							__LIB_20__::func_646(1806999335, 7, 4, 31, 3, 10000, 20000, -1, -1, 151, -1, 1024);
						}
						else if (!BitTest(Global_113386.f_7688.f_923, 4))
						{
							__LIB_20__::func_646(2054503592, 7, 4, 31, 3, 10000, 20000, -1, -1, 151, -1, 1024);
						}
						else if (!BitTest(Global_113386.f_7688.f_923, 4))
						{
							__LIB_20__::func_646(-2009081795, 7, 4, 31, 3, 10000, 20000, -1, -1, 151, -1, 1024);
						}
					}
					if (iVar1 == 0 && !bVar4)
					{
						if ((!__LIB_0__::func_39(0) && !__LIB_0__::func_39(4)) && !__LIB_0__::func_39(3))
						{
							if (MISC::GET_NUMBER_RESOURCES_ALLOCATED_TO_WANTED_LEVEL(11) < 256)
							{
								if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
								{
									if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
									{
										MISC::CREATE_INCIDENT_WITH_ENTITY(11, PLAYER::PLAYER_PED_ID(), iVar0, 0f, &iLocal_33, 0, 0);
									}
								}
							}
							if (CAM::IS_SCREEN_FADED_IN())
							{
								if (bLocal_32)
								{
									__LIB_0__::func_151("CITDENAL" /* GXT: Michael and Trevor have been exiled from the city. If they enter the city, Martin's henchmen will track them down. */, -1);
								}
								else
								{
									__LIB_0__::func_151("CITDENAL_R" /* GXT: Michael and Trevor have been exiled by Martin. Approaching his ranch will cause his henchmen to attack. */, -1);
								}
								iVar1 = 120000;
							}
						}
					}
				}
				else
				{
					bLocal_29 = false;
				}
			}
			else
			{
				func_20();
			}
		}
		if (bLocal_29)
		{
			if (!MISC::IS_INCIDENT_VALID(iLocal_33))
			{
				if (MISC::GET_NUMBER_RESOURCES_ALLOCATED_TO_WANTED_LEVEL(11) < 256)
				{
					if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
					{
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							MISC::CREATE_INCIDENT_WITH_ENTITY(11, PLAYER::PLAYER_PED_ID(), iVar0, 0f, &iLocal_33, 0, 0);
						}
					}
				}
			}
		}
		if (bLocal_29 && SYSTEM::TIMERB() > 60000)
		{
			SYSTEM::SETTIMERB(0);
			iVar0 = (iVar0 + MISC::GET_RANDOM_INT_IN_RANGE(1, 2));
			if (iVar0 < 8)
			{
				if (MISC::IS_INCIDENT_VALID(iLocal_33))
				{
					MISC::SET_INCIDENT_REQUESTED_UNITS(iLocal_33, 11, iVar0);
				}
				else if (MISC::GET_NUMBER_RESOURCES_ALLOCATED_TO_WANTED_LEVEL(11) < 256)
				{
					if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
					{
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							MISC::CREATE_INCIDENT_WITH_ENTITY(11, PLAYER::PLAYER_PED_ID(), iVar0, 0f, &iLocal_33, 0, 0);
						}
					}
				}
			}
			else
			{
				iVar0 = 8;
			}
		}
		bLocal_30 = bLocal_29;
		if (bVar4)
		{
			Global_43017 = 0;
			if (bLocal_29)
			{
				func_20();
			}
			func_4();
			while (__LIB_18__::func_173() == 1)
			{
				SYSTEM::WAIT(2000);
			}
			func_41();
			bVar4 = false;
		}
		if (bLocal_29)
		{
			SYSTEM::WAIT(0);
		}
		else
		{
			SYSTEM::WAIT(10000);
		}
		if (__LIB_6__::func_854(12) && !__LIB_0__::func_39(12))
		{
			if (bLocal_29)
			{
				func_20();
			}
			while (__LIB_0__::func_39(0) || __LIB_0__::func_39(4))
			{
				SYSTEM::WAIT(8000);
			}
		}
	}
	func_4();
}

void func_4()//Position - 0x802
{
	__LIB_30__::func_271(0, 1);
	__LIB_30__::func_271(2, 1);
	__LIB_30__::func_271(1, 1);
	__LIB_30__::func_270(0, 1);
	__LIB_30__::func_270(1, 1);
	__LIB_30__::func_270(3, 1);
	__LIB_30__::func_270(2, 1);
}

void func_20()//Position - 0xEE2
{
	if (iLocal_28 != -1)
	{
		__LIB_10__::func_865(&iLocal_28);
	}
	__LIB_36__::func_53(1628462442);
	__LIB_36__::func_53(1791324372);
	__LIB_36__::func_53(joaat("CALL_THIRD_CREW"));
	__LIB_36__::func_53(1806999335);
	__LIB_36__::func_53(2054503592);
	__LIB_36__::func_53(-2009081795);
	bLocal_29 = false;
	bLocal_30 = false;
	Global_43017 = 0;
	MISC::DELETE_INCIDENT(iLocal_33);
}

void func_38()//Position - 0x17A7
{
	func_20();
	func_4();
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_41()//Position - 0x183F
{
	__LIB_30__::func_271(0, 0);
	__LIB_30__::func_271(2, 0);
	__LIB_30__::func_271(1, 0);
	__LIB_30__::func_270(0, 0);
	__LIB_30__::func_270(1, 0);
	__LIB_30__::func_270(3, 0);
	__LIB_30__::func_270(2, 0);
}

