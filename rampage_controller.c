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
#endregion
void __EntryFunction__()//Position - 0x0
{
	int iVar0;
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
	iLocal_28 = 77;
	iLocal_29 = 194;
	iLocal_30 = 52;
	iLocal_28 = 77;
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("rampage_controller")) > 1)
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(34))
	{
		func_37();
	}
	if (!__LIB_0__::func_425(108))
	{
		func_37();
	}
	__LIB_0__::func_694(23);
	iVar0 = 0;
	while (iVar0 < 5)
	{
		__LIB_0__::func_716((iLocal_29 + iVar0), 0, 0);
		MISC::SET_BIT(&(Global_113386.f_18574[(iLocal_30 + iVar0) /*6*/]), 3);
		iVar0++;
	}
	func_19(1);
	while (true)
	{
		SYSTEM::WAIT(0);
		if (!__LIB_0__::func_67(40))
		{
			switch (__LIB_13__::func_121("RAMP_NEW_ALL" /* GXT: All rampages are now unlocked. */))
			{
				case 2:
					__LIB_0__::func_697("RAMP_NEW_ALL" /* GXT: All rampages are now unlocked. */, 1, 0, 2000, 10000, 4, 0, 0, 0);
					break;
				case 1:
					__LIB_0__::func_592(40);
					break;
				}
		}
		if (func_1())
		{
			func_19(0);
			while (func_1())
			{
				SYSTEM::WAIT(0);
			}
			while (MISC::IS_AUTO_SAVE_IN_PROGRESS())
			{
				SYSTEM::WAIT(0);
			}
			func_19(1);
		}
	}
}

bool func_1()//Position - 0x13C
{
	return (((__LIB_0__::func_540(9) || Global_31962) || __LIB_0__::func_683() != 2) || Global_112473[56 /*10*/].f_3);
}

void func_19(bool bParam0)//Position - 0x913
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		iVar1 = (iLocal_28 + iVar0);
		__LIB_14__::func_622(iVar1, bParam0, 0);
		__LIB_38__::func_936(iVar1, 1, 2, 0);
		__LIB_30__::func_373(iVar1, 1);
		__LIB_37__::func_412(iVar1, 44);
		if (((Global_113386.f_2352[iVar0 /*2*/] >= 1 || __LIB_0__::func_425(108) == 1) || __LIB_17__::func_698((iLocal_29 + iVar0), 0)) || BitTest(Global_113386.f_18574[(iLocal_30 + iVar0) /*6*/], 3))
		{
			__LIB_16__::func_591(iVar1, 1);
		}
		iVar0++;
	}
}

void func_37()//Position - 0x14A2
{
	func_19(0);
	SCRIPT::TERMINATE_THIS_THREAD();
}

