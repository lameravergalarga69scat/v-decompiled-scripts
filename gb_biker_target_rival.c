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
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	int iLocal_35 = 0;
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
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	func_90();
	while (true)
	{
		__LIB_0__::func_933();
		if (__LIB_0__::func_959())
		{
			func_83();
		}
		if (Global_2815059.f_5195.f_754 == 0)
		{
			func_83();
		}
		switch (iLocal_35)
		{
			case 0:
				iLocal_35 = 1;
				break;
			case 1:
				if (func_11())
				{
					iLocal_35 = 2;
				}
				break;
			case 2:
				if (!func_1())
				{
					iLocal_35 = 4;
				}
				break;
			case 4:
				func_83();
				break;
		}
	}
}

int func_1()//Position - 0xD3
{
	int iVar0;
	if (__LIB_1__::func_375(1))
	{
		iVar0 = Global_2815059.f_5195.f_753;
		if (iVar0 != __LIB_0__::getMinusOneOrNull())
		{
			if (func_4(iVar0))
			{
				func_2(iVar0);
				return 0;
			}
		}
		else
		{
			func_2(iVar0);
			return 0;
		}
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_2(int iParam0)//Position - 0x120
{
	if (iParam0 != __LIB_0__::getMinusOneOrNull())
	{
		func_3(iParam0);
	}
	Global_2815059.f_5195.f_753 = __LIB_0__::getMinusOneOrNull();
}

void func_3(int iParam0)//Position - 0x145
{
	int iVar0;
	iVar0 = iParam0;
	MISC::CLEAR_BIT(&(Global_2678393.f_388), iVar0);
	MISC::CLEAR_BIT(&(Global_2678393.f_389), iVar0);
	MISC::CLEAR_BIT(&(Global_2678393.f_390), iVar0);
	MISC::CLEAR_BIT(&(Global_2678393.f_392), iVar0);
	MISC::CLEAR_BIT(&(Global_2678393.f_396), iVar0);
	MISC::CLEAR_BIT(&(Global_2678393.f_391), iVar0);
}

int func_4(int iParam0)//Position - 0x19F
{
	if (!__LIB_0__::func_156(iParam0, 0, 1))
	{
		return 1;
	}
	return 0;
}

int func_11()//Position - 0x2EF
{
	bool bVar0;
	if (__LIB_1__::func_375(1))
	{
		bVar0 = Global_2815059.f_5195.f_753;
		if (bVar0 != __LIB_0__::getMinusOneOrNull())
		{
			if (func_12(bVar0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_12(bool bParam0)//Position - 0x322
{
	if (__LIB_0__::func_156(bParam0, 0, 1))
	{
		__LIB_12__::func_535(bParam0, 432, 1, 0);
		if (__LIB_19__::func_305(bParam0))
		{
			__LIB_30__::func_783(bParam0, __LIB_1__::func_389(__LIB_19__::func_263(PLAYER::PLAYER_ID())), 1, 0);
		}
		if (__LIB_19__::func_304(bParam0))
		{
			__LIB_15__::func_359(bParam0, 1, 1, 0);
		}
		__LIB_19__::func_369(bParam0, 1, 0);
		func_13(bParam0, 1, 5000);
		return 1;
	}
	return 0;
}

void func_13(bool bParam0, bool bParam1, int iParam2)//Position - 0x386
{
	int iVar0;
	if (bParam0 == __LIB_0__::getMinusOneOrNull())
	{
		return;
	}
	if (iParam2 > 200000)
	{
		iParam2 = 200000;
	}
	iVar0 = bParam0;
	if (bParam1)
	{
		if (bParam0 == Global_2703735)
		{
		}
		else if (HUD::DOES_BLIP_EXIST(Global_2678393[iVar0]))
		{
			MISC::SET_BIT(&(Global_2678393.f_370), iVar0);
			MISC::CLEAR_BIT(&(Global_2678393.f_375), iVar0);
			HUD::SET_BLIP_FLASHES(Global_2678393[iVar0], true);
			HUD::SET_BLIP_FLASH_INTERVAL(Global_2678393[iVar0], 250);
			func_14(bParam0);
			if (iParam2 < 0)
			{
				MISC::SET_BIT(&(Global_2678393.f_375), iVar0);
			}
			else
			{
				Global_2678393.f_201[iVar0] = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), iParam2);
			}
		}
		else
		{
			MISC::SET_BIT(&(Global_2678393.f_370), iVar0);
			MISC::CLEAR_BIT(&(Global_2678393.f_375), iVar0);
			if (iParam2 < 0)
			{
				MISC::SET_BIT(&(Global_2678393.f_375), iVar0);
			}
			else
			{
				Global_2678393.f_201[iVar0] = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), iParam2);
			}
		}
	}
	if (!bParam1)
	{
		MISC::CLEAR_BIT(&(Global_2678393.f_370), iVar0);
		MISC::CLEAR_BIT(&(Global_2678393.f_375), iVar0);
		if (HUD::DOES_BLIP_EXIST(Global_2678393[iVar0]))
		{
			func_14(bParam0);
			HUD::SET_BLIP_FLASHES(Global_2678393[iVar0], false);
		}
	}
}

void func_14(int iParam0)//Position - 0x4BB
{
	int iVar0;
	iVar0 = iParam0;
	if (__LIB_0__::func_156(iParam0, 0, 1))
	{
		if (HUD::DOES_BLIP_EXIST(Global_2678393[iVar0]))
		{
			Global_2678393.f_1504[iVar0] = func_15(iParam0);
			HUD::SET_BLIP_PRIORITY(Global_2678393[iVar0], Global_2678393.f_1504[iVar0]);
		}
	}
}

int func_15(int iParam0)//Position - 0x509
{
	int iVar0;
	int iVar1;
	iVar0 = iParam0;
	if (__LIB_0__::func_156(iParam0, 0, 1))
	{
		if (HUD::DOES_BLIP_EXIST(Global_2678393[iVar0]))
		{
			iVar1 = HUD::GET_BLIP_SPRITE(Global_2678393[iVar0]);
			if (BitTest(Global_2678393.f_386, iVar0) || BitTest(Global_2678393.f_385, iVar0))
			{
				return 1;
			}
			else if ((BitTest(Global_2678393.f_371, iVar0) || BitTest(Global_2678393.f_370, iVar0)) || BitTest(Global_2678393.f_388, iVar0))
			{
				return __LIB_19__::func_41(10);
			}
			else
			{
				switch (iVar1)
				{
					case 253:
					case 252:
					case 255:
						return __LIB_19__::func_41(7);
						break;
					case 257:
					case 258:
					case 259:
					case 260:
					case 261:
						return __LIB_19__::func_41(11);
						break;
					case 254:
						if (PLAYER::GET_PLAYER_TEAM(iParam0) == PLAYER::GET_PLAYER_TEAM(Global_2703735))
						{
							return __LIB_19__::func_41(6);
						}
						else
						{
							return __LIB_19__::func_41(5);
						}
						break;
					case 271:
						if (PLAYER::GET_PLAYER_TEAM(iParam0) == PLAYER::GET_PLAYER_TEAM(Global_2703735))
						{
							return __LIB_19__::func_41(6);
						}
						else
						{
							return __LIB_19__::func_41(5);
						}
						break;
					case 163:
					case 164:
						if (__LIB_1__::func_0(Global_2703735, iParam0, -2, 0))
						{
							return __LIB_19__::func_41(6);
						}
						else
						{
							return __LIB_19__::func_41(5);
						}
						break;
					case 303:
					case 418:
						return __LIB_19__::func_41(10);
						break;
					case 364:
						if (func_20(Global_2703735, iParam0, 1))
						{
							return __LIB_19__::func_41(10);
						}
						else
						{
							return __LIB_19__::func_41(5);
						}
						break;
					case 478:
					case 501:
					case 523:
					case 556:
						return __LIB_19__::func_41(10);
						break;
					case 417:
						if ((__LIB_1__::func_783(iParam0) || __LIB_2__::func_885(iParam0)) || __LIB_2__::func_886(iParam0))
						{
							if (func_20(Global_2703735, iParam0, 1))
							{
								return 3;
							}
							else
							{
								return 4;
							}
						}
						else if (func_20(Global_2703735, iParam0, 1))
						{
							return __LIB_19__::func_41(6);
						}
						else
						{
							return __LIB_19__::func_41(5);
						}
						break;
					case 256:
					case 268:
					default:
						if (func_20(Global_2703735, iParam0, 1))
						{
							return __LIB_19__::func_41(6);
						}
						else
						{
							return __LIB_19__::func_41(5);
						}
						break;
					}
				}
			}
	}
	return 1;
}

int func_20(int iParam0, int iParam1, bool bParam2)//Position - 0xCD0
{
	if (__LIB_2__::func_795(iParam0, -2, 0, 0, 0) == __LIB_2__::func_795(iParam1, -2, 0, 0, 0))
	{
		return 1;
	}
	if (bParam2)
	{
		if (__LIB_12__::func_586(__LIB_2__::func_795(iParam0, -2, 0, 0, 0)) && __LIB_12__::func_586(__LIB_2__::func_795(iParam1, -2, 0, 0, 0)))
		{
			return 1;
		}
	}
	return 0;
}

void func_83()//Position - 0x23BF
{
	func_2(Global_2815059.f_5195.f_753);
	SCRIPT::TERMINATE_THIS_THREAD();
}

int func_90()//Position - 0x24AB
{
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	return 1;
}

