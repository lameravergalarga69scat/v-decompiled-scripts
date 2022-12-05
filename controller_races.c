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
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(82))
	{
		__LIB_0__.func_199();
	}
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("controller_races")) > 1)
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	while (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("initial")) > 0)
	{
		SYSTEM::WAIT(0);
	}
	func_30();
	while (true)
	{
		if (__LIB_6__.func_854(9) || Global_97361)
		{
			__LIB_0__.func_199();
		}
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			if (func_25())
			{
				func_23();
				func_19();
				if (__LIB_18__.func_173() == 1)
				{
					switch (iLocal_28)
					{
						case 1:
							break;
						case 2:
							func_1();
							break;
						}
					}
				}
		}
		SYSTEM::WAIT(1000);
	}
}

void func_1()//Position - 0xE5
{
	bool bVar0;
	int iVar1;
	float fVar2;
	if (__LIB_29__.func_726(8))
	{
		bVar0 = false;
		while (bVar0 <= (5 - 1))
		{
			iVar1 = func_10(bVar0);
			if (BitTest(Global_113386.f_24979.f_1, bVar0))
			{
				if (BitTest(Global_113386.f_24979.f_3, bVar0))
				{
					fVar2 = SYSTEM::VDIST2(__LIB_0__.func_85(PLAYER::PLAYER_ID()), __LIB_11__.func_156(iVar1, 0));
					if (fVar2 > 43681f)
					{
						if (!__LIB_10__.func_861(iVar1))
						{
							if (!Global_113360[bVar0])
							{
								__LIB_20__.func_576(iVar1);
								__LIB_10__.func_604(iVar1, 1, 1);
								MISC::CLEAR_BIT(&(Global_113386.f_24979.f_3), bVar0);
							}
							else if ((MISC::GET_GAME_TIMER() - Global_113366[bVar0]) > 60000)
							{
								Global_113360[bVar0] = 0;
								Global_113366[bVar0] = MISC::GET_GAME_TIMER();
								__LIB_20__.func_576(iVar1);
								__LIB_10__.func_604(iVar1, 1, 1);
								MISC::CLEAR_BIT(&(Global_113386.f_24979.f_3), bVar0);
							}
						}
						else
						{
							MISC::CLEAR_BIT(&(Global_113386.f_24979.f_3), bVar0);
						}
					}
					else if (__LIB_10__.func_861(iVar1))
					{
						__LIB_10__.func_604(iVar1, 0, 1);
					}
				}
				else if (!__LIB_10__.func_861(iVar1))
				{
					if (!Global_113360[bVar0])
					{
						__LIB_20__.func_576(iVar1);
						__LIB_10__.func_604(iVar1, 1, 1);
					}
					else if ((MISC::GET_GAME_TIMER() - Global_113366[bVar0]) > 60000)
					{
						Global_113360[bVar0] = 0;
						Global_113366[bVar0] = MISC::GET_GAME_TIMER();
						__LIB_20__.func_576(iVar1);
						__LIB_10__.func_604(iVar1, 1, 1);
					}
				}
			}
			bVar0++;
		}
	}
}

int func_10(int iParam0)//Position - 0x5AD
{
	switch (iParam0)
	{
		case 0:
			return 86;
			break;
		case 1:
			return 87;
			break;
		case 2:
			return 88;
			break;
		case 3:
			return 89;
			break;
		case 4:
			return 90;
			break;
	}
	return 86;
}

void func_19()//Position - 0x7BE
{
	bool bVar0;
	int iVar1;
	float fVar2;
	if (__LIB_29__.func_726(7))
	{
		bVar0 = false;
		while (bVar0 <= (4 - 1))
		{
			iVar1 = func_22(bVar0);
			if (BitTest(Global_113386.f_24976.f_2, bVar0))
			{
				fVar2 = SYSTEM::VDIST2(__LIB_0__.func_85(PLAYER::PLAYER_ID()), __LIB_11__.func_156(iVar1, 0));
				if (fVar2 > 43681f)
				{
					if (!__LIB_10__.func_861(iVar1))
					{
						if (!Global_113350[bVar0])
						{
							__LIB_20__.func_576(iVar1);
							__LIB_10__.func_604(iVar1, 1, 1);
							MISC::CLEAR_BIT(&(Global_113386.f_24976.f_2), bVar0);
						}
						else if ((MISC::GET_GAME_TIMER() - Global_113355[bVar0]) > 60000)
						{
							Global_113350[bVar0] = 0;
							Global_113355[bVar0] = MISC::GET_GAME_TIMER();
							__LIB_20__.func_576(iVar1);
							__LIB_10__.func_604(iVar1, 1, 1);
							MISC::CLEAR_BIT(&(Global_113386.f_24976.f_2), bVar0);
						}
					}
				}
				else if (__LIB_10__.func_861(iVar1))
				{
					__LIB_10__.func_604(iVar1, 0, 1);
				}
			}
			else if (!__LIB_10__.func_861(iVar1))
			{
				if (!Global_113350[bVar0])
				{
					__LIB_20__.func_576(iVar1);
					__LIB_10__.func_604(iVar1, 1, 1);
				}
				else if ((MISC::GET_GAME_TIMER() - Global_113355[bVar0]) > 60000)
				{
					Global_113350[bVar0] = 0;
					Global_113355[bVar0] = MISC::GET_GAME_TIMER();
					__LIB_20__.func_576(iVar1);
					__LIB_10__.func_604(iVar1, 1, 1);
				}
			}
			else if (!Global_113386.f_24976)
			{
				if (iVar1 == 82)
				{
					__LIB_20__.func_574(82);
					__LIB_0__.func_71(65, 1000);
					Global_113386.f_24976 = 1;
				}
			}
			bVar0++;
		}
	}
}

int func_22(int iParam0)//Position - 0x991
{
	switch (iParam0)
	{
		case 0:
			return 82;
			break;
		case 1:
			return 83;
			break;
		case 2:
			return 84;
			break;
		case 3:
			return 85;
			break;
	}
	return 82;
}

void func_23()//Position - 0x9DA
{
	switch (iLocal_28)
	{
		case 0:
			if (CLOCK::GET_CLOCK_HOURS() < 20 && CLOCK::GET_CLOCK_HOURS() >= 5)
			{
				func_24();
				iLocal_28 = 1;
			}
			else
			{
				iLocal_28 = 2;
			}
			break;
		case 1:
			if (CLOCK::GET_CLOCK_HOURS() >= 20 || CLOCK::GET_CLOCK_HOURS() < 5)
			{
				iLocal_28 = 2;
			}
			break;
		case 2:
			if (CLOCK::GET_CLOCK_HOURS() < 20 && CLOCK::GET_CLOCK_HOURS() >= 5)
			{
				func_24();
				iLocal_28 = 1;
			}
			break;
	}
}

void func_24()//Position - 0xA5B
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= (5 - 1))
	{
		__LIB_10__.func_604(func_10(iVar0), 0, 0);
		iVar0++;
	}
}

int func_25()//Position - 0xA83
{
	if (__LIB_6__.func_854(9))
	{
		return 0;
	}
	if (__LIB_0__.func_200())
	{
		return 0;
	}
	if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
	{
		return 0;
	}
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		return 0;
	}
	return 1;
}

void func_30()//Position - 0xCED
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= (4 - 1))
	{
		Global_113350[iVar0] = 0;
		Global_113355[iVar0] = MISC::GET_GAME_TIMER();
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (5 - 1))
	{
		Global_113360[iVar0] = 0;
		iVar0++;
	}
}

