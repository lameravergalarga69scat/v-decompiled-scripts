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
		__LIB_0__::func_202();
	}
	if (func_32())
	{
		iLocal_28 = 1;
	}
	while (true)
	{
		switch (iLocal_28)
		{
			case 0:
				if (func_10())
				{
					iLocal_28 = 1;
				}
				break;
			case 1:
				if (func_1())
				{
					__LIB_0__::func_202();
				}
				break;
		}
		SYSTEM::WAIT(1000);
	}
}

int func_1()//Position - 0x9D
{
	switch (__LIB_13__::func_121("BLIMP_UNLOCK" /* GXT: The Blimp has now been unlocked. Call the Blimp contact on your cellphone to arrange for a Blimp to be delivered to the nearest available drop-off location. */))
	{
		case 2:
			__LIB_0__::func_697("BLIMP_UNLOCK" /* GXT: The Blimp has now been unlocked. Call the Blimp contact on your cellphone to arrange for a Blimp to be delivered to the nearest available drop-off location. */, 1, 0, 1000, 10000, 7, 0, 0, 0);
			break;
		case 1:
			__LIB_0__::func_592(57);
			__LIB_0__::func_210();
			return 1;
			break;
		case 0:
			break;
	}
	return 0;
}

int func_10()//Position - 0x50F
{
	if ((((__LIB_0__::func_115() || __LIB_0__::func_109()) || __LIB_0__::func_109()) || __LIB_0__::func_114()) || __LIB_0__::func_116())
	{
		if ((PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) && !STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
		{
			if (__LIB_0__::func_178(0))
			{
				__LIB_0__::func_712(48, 4, 0);
				__LIB_0__::func_210();
				return 1;
			}
		}
	}
	return 0;
}

int func_32()//Position - 0xBBF
{
	if ((__LIB_0__::func_169(48, 0) == 1 && __LIB_0__::func_169(48, 1) == 1) && __LIB_0__::func_169(48, 2) == 1)
	{
		if ((((__LIB_0__::func_115() || __LIB_0__::func_109()) || __LIB_0__::func_109()) || __LIB_0__::func_114()) || __LIB_0__::func_116())
		{
			return 1;
		}
	}
	return 0;
}

