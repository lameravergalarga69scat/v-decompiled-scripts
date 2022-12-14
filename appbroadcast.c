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
	int* iLocal_28 = NULL;
	var uLocal_29 = 0;
	struct<2> Local_30 = { 0, 0 } ;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	struct<2> Local_33 = { 0, 0 } ;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	struct<2> Local_36 = { 0, 0 } ;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	struct<2> Local_39 = { 0, 0 } ;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	struct<2> Local_42 = { 0, 0 } ;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	struct<2> Local_45 = { 0, 0 } ;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
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
	StringCopy(&Local_30, "CELL_212" /* GXT: YES */, 16);
	StringCopy(&Local_33, "CELL_213" /* GXT: NO */, 16);
	StringCopy(&Local_36, "CELL_39" /* GXT: Broadcast */, 16);
	StringCopy(&Local_39, "CELL_MP_300" /* GXT: Activate? */, 16);
	StringCopy(&Local_42, "CELL_MP_301" /* GXT: Deactivate? */, 16);
	StringCopy(&Local_45, "CELL_MP_302" /* GXT: Unavailable */, 16);
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	__LIB_7__::func_252(&iLocal_28);
	func_36();
	while (true)
	{
		SYSTEM::WAIT(0);
		if (!NETWORK::NETWORK_IS_IN_SESSION())
		{
			__LIB_0__::func_671(1);
			__LIB_0__::func_202();
		}
		if (!Global_20266.f_1 == 9 && Global_20266.f_1 > 3)
		{
			func_3();
			if (Global_20266.f_1 != 8)
			{
				if (__LIB_13__::func_89())
				{
					__LIB_0__::func_202();
				}
			}
		}
		if (__LIB_13__::func_83())
		{
			__LIB_0__::func_202();
		}
	}
}

void func_3()//Position - 0x14A
{
	if (__LIB_13__::func_480(&iLocal_28))
	{
		if (func_16())
		{
			if (Global_2725342)
			{
				NETWORK::NETWORK_OVERRIDE_SEND_RESTRICTIONS_ALL(false);
				__LIB_10__::func_577(-923087411, __LIB_0__::func_943(1, 1));
				Global_2725342 = 0;
			}
			else
			{
				NETWORK::NETWORK_OVERRIDE_SEND_RESTRICTIONS_ALL(true);
				__LIB_10__::func_577(-382461133, __LIB_0__::func_943(1, 1));
				Global_2725342 = 1;
			}
			__LIB_0__::func_366(0);
			return;
		}
	}
}

int func_16()//Position - 0x4E1
{
	if (!__LIB_1__::func_455(PLAYER::PLAYER_ID(), 1) && __LIB_17__::func_53())
	{
		return 1;
	}
	return 0;
}

void func_36()//Position - 0x7C8
{
	if (!Global_20266.f_1 == 7)
	{
		Global_20266.f_1 = 7;
	}
	__LIB_2__::func_829(Global_20247, "SET_DATA_SLOT_EMPTY", SYSTEM::TO_FLOAT(13), -1082130432, -1082130432, -1082130432, -1082130432);
	if (func_16())
	{
		if (Global_2725342)
		{
			__LIB_2__::func_845(Global_20247, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(13), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(12), -1f, -1f, &Local_42, 0, 0, 0, 0);
		}
		else
		{
			__LIB_2__::func_845(Global_20247, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(13), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(12), -1f, -1f, &Local_39, 0, 0, 0, 0);
		}
	}
	else
	{
		__LIB_2__::func_845(Global_20247, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(13), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(12), -1f, -1f, &Local_45, 0, 0, 0, 0);
	}
	__LIB_2__::func_829(Global_20247, "DISPLAY_VIEW", SYSTEM::TO_FLOAT(13), -1082130432, -1082130432, -1082130432, -1082130432);
	__LIB_13__::func_420(&Local_36);
	if (func_16())
	{
		__LIB_13__::func_478(13, &Local_30, 1, "", 4, &Local_33, &iLocal_28);
	}
	else
	{
		__LIB_13__::func_478(1, "", 1, "", 4, &Local_33, &iLocal_28);
	}
}

