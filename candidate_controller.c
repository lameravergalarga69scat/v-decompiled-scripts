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
#endregion
void __EntryFunction__()//Position - 0x0
{
	int iVar0;
	int iVar1;
	int iVar2[8];
	int iVar3;
	int iVar4;
	int iVar5;
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
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(2))
	{
		func_18();
	}
	iVar0 = Global_43013;
	iVar1 = 15;
	while (true)
	{
		if (Global_43052 != 15)
		{
			if (Global_43015 != 0)
			{
				if (Global_43014 != -1)
				{
					if (!SCRIPT::IS_THREAD_ACTIVE(Global_43015))
					{
						__LIB_0__::func_56(&Global_43014);
					}
				}
			}
		}
		if (Global_43013 > 0)
		{
			Global_43018 = 1;
			if (Global_43013 == iVar0)
			{
				iVar3 = 0;
				if (Global_43013 > 1)
				{
					iVar4 = 0;
					iVar4 = 0;
					while (iVar4 < Global_43013)
					{
						if (__LIB_6__::func_763(Global_43019[iVar4 /*4*/].f_2))
						{
							iVar2[iVar4] = 0;
						}
						else
						{
							iVar2[iVar4] = 1;
						}
						if (Global_43019[iVar4 /*4*/].f_1 == 7)
						{
							iVar2[iVar4] = 1;
						}
						iVar4++;
					}
					iVar5 = 0;
					iVar4 = 0;
					iVar4 = 0;
					while (iVar4 < (Global_43013 - 1))
					{
						if (!iVar2[iVar4 + 1])
						{
							if (Global_43019[iVar4 + 1 /*4*/].f_1 < Global_43019[iVar5 /*4*/].f_1)
							{
								iVar5 = iVar4 + 1;
							}
						}
						iVar4++;
					}
					iVar3 = iVar5;
					if (Global_43019[iVar3 /*4*/].f_2 == 15)
					{
						iVar3 = -1;
					}
					if (iVar3 != -1)
					{
						if (!__LIB_6__::func_763(Global_43019[iVar3 /*4*/].f_2))
						{
							iVar3 = -1;
						}
					}
				}
				if (iVar3 > -1)
				{
					Global_43014 = Global_43019[iVar3 /*4*/];
					Global_43015 = Global_43019[iVar3 /*4*/].f_3;
					Global_43052 = Global_43019[iVar3 /*4*/].f_2;
					Global_43013 = 0;
					Global_43018 = 0;
				}
				else
				{
					Global_43013 = 0;
					Global_43018 = 0;
				}
			}
		}
		if (iVar1 != Global_43052)
		{
			if (iVar1 == 15)
			{
				__LIB_0__::func_177(0);
			}
			if (Global_43052 == 15)
			{
				__LIB_0__::func_177(1);
			}
			Global_43018 = 0;
			Global_38390 = 1;
			if (Global_43052 != 5 && Global_43052 != 15)
			{
				PLAYER::FORCE_CLEANUP(8);
			}
			if (Global_43052 == 15 || Global_43052 == 6)
			{
				__LIB_11__::func_99(0);
			}
			else
			{
				__LIB_11__::func_99(1);
			}
			if (func_12(Global_43052))
			{
				if (!iLocal_20)
				{
					NETWORK::NETWORK_BLOCK_JOIN_QUEUE_INVITES(true);
					iLocal_20 = 1;
				}
			}
			else if (iLocal_20)
			{
				NETWORK::NETWORK_BLOCK_JOIN_QUEUE_INVITES(false);
				iLocal_20 = 0;
			}
		}
		iVar1 = Global_43052;
		iVar0 = Global_43013;
		Global_111812 = __LIB_18__::func_240();
		Global_32235 = CLOCK::GET_CLOCK_DAY_OF_WEEK();
		SYSTEM::WAIT(0);
	}
	Global_43018 = 0;
}

int func_12(int iParam0)//Position - 0x52D
{
	switch (iParam0)
	{
		case 0:
		case 2:
		case 3:
		case 4:
		case 7:
		case 9:
		case 10:
		case 11:
		case 13:
		case 14:
		case 17:
		case 18:
			return 1;
			break;
	}
	return 0;
}

void func_18()//Position - 0xA5B
{
	__LIB_0__::func_56(&Global_43014);
	Global_43018 = 0;
	SCRIPT::TERMINATE_THIS_THREAD();
}

