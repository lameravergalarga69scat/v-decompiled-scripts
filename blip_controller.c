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
	char* sLocal_21 = NULL;
	char* sLocal_22 = NULL;
	char* sLocal_23 = NULL;
	struct<3> Local_24 = { 0, 0, 0 } ;
	struct<3> Local_25 = { 0, 0, 0 } ;
	int iLocal_26 = 0;
	float fLocal_27 = 0f;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	float fLocal_35 = 0f;
	float fLocal_36 = 0f;
	float fLocal_37 = 0f;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	bool bLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	bool bLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	bool bLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
#endregion
void __EntryFunction__()//Position - 0x0
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	bool bVar10;
	int iVar11;
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
	sLocal_21 = "CHECKPOINT_NORMAL";
	sLocal_22 = "CHECKPOINT_MISSED";
	sLocal_23 = "CHECKPOINT_PERFECT";
	Local_24 = { 1694.7395f, 3276.5024f, 41.2796f };
	Local_25 = { 8.79494f, 0.59893f, 154.8464f };
	iLocal_26 = 3;
	fLocal_27 = 0f;
	fLocal_31 = -0.0375f;
	fLocal_32 = 0.17f;
	fLocal_35 = 80f;
	fLocal_36 = 140f;
	fLocal_37 = 180f;
	bLocal_46 = true;
	iLocal_49 = -1;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(2))
	{
		__LIB_0__::func_202();
	}
	iVar0 = 0;
	while (iVar0 <= 57)
	{
		if (__LIB_14__::func_349(iVar0))
		{
			iVar1 = __LIB_15__::func_277(iVar0);
			__LIB_37__::func_411(iVar1, __LIB_15__::func_278(iVar0));
		}
		iVar0++;
	}
	func_46(91, 1);
	func_46(92, 1);
	Global_32335 = 1;
	while (Global_32337)
	{
		if ((MISC::GET_GAME_TIMER() % 250) == 0)
		{
		}
		SYSTEM::WAIT(0);
	}
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < 7)
	{
		iLocal_51[iVar2] = -1;
		iVar2++;
	}
	MISC::SET_BIT(&(Global_32338[iVar2 /*23*/].f_11), 18);
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < 263)
	{
		MISC::SET_BIT(&(Global_32338[iVar2 /*23*/].f_11), 18);
		iVar2++;
	}
	iLocal_60 = Global_38389;
	bVar3 = false;
	func_45();
	func_43();
	while (true)
	{
		if (!bVar3)
		{
			func_42();
		}
		bVar3 = func_35();
		if (bVar3)
		{
			Global_32335 = 1;
		}
		iVar4 = 0;
		iVar5 = 0;
		iVar2 = 0;
		if (Global_32335)
		{
			func_45();
			func_43();
			iVar6 = 0;
			iVar2 = 0;
			while (iVar2 < 263)
			{
				bVar7 = BitTest(Global_32338[iVar2 /*23*/].f_11, 18);
				if (!bVar7)
				{
					if (func_34(iVar2))
					{
						iVar5++;
						bVar7 = true;
					}
				}
				iVar4++;
				if (bVar7)
				{
					iVar8 = 0;
					iVar9 = 0;
					if (Global_38389)
					{
						iVar8++;
						iVar9++;
					}
					else
					{
						if (BitTest(Global_32338[iVar2 /*23*/].f_11, 13))
						{
							if (func_33())
							{
								iVar8++;
							}
							iVar9++;
						}
						if (BitTest(Global_32338[iVar2 /*23*/].f_11, 1))
						{
							if (!bLocal_46)
							{
								iVar8++;
							}
							iVar9++;
						}
						if (BitTest(Global_32338[iVar2 /*23*/].f_11, 2))
						{
							if (bLocal_46)
							{
								iVar8++;
							}
							iVar9++;
						}
						if (BitTest(Global_32338[iVar2 /*23*/].f_11, 7))
						{
							if (!__LIB_0__::func_39(15))
							{
								iVar8++;
							}
							iVar9++;
						}
						if (BitTest(Global_32338[iVar2 /*23*/].f_11, 16))
						{
							if (!__LIB_0__::func_215(Global_32338[iVar2 /*23*/].f_22))
							{
								iVar8++;
							}
							iVar9++;
						}
						if (BitTest(Global_32338[iVar2 /*23*/].f_11, 14))
						{
							if (__LIB_0__::func_39(5))
							{
								iVar8++;
							}
							iVar9++;
						}
						if (BitTest(Global_32338[iVar2 /*23*/].f_11, 8))
						{
							if (Global_32338[iVar2 /*23*/].f_16 != 4 && Global_32338[iVar2 /*23*/].f_16 != 8)
							{
								if (!func_29(iVar2))
								{
									iVar8++;
								}
								iVar9++;
							}
						}
						if (BitTest(Global_32338[iVar2 /*23*/].f_11, 19))
						{
							switch (iLocal_53)
							{
								case 1:
								case 0:
								case 2:
									break;
								default:
									iVar8++;
									break;
							}
							iVar9++;
						}
						if (BitTest(Global_32338[iVar2 /*23*/].f_11, 27))
						{
							if (bLocal_41)
							{
								iVar8++;
							}
							iVar9++;
						}
						if (Global_32338[iVar2 /*23*/].f_16 == 1)
						{
							func_23();
						}
					}
					if (iVar9 > 0)
					{
						if (iVar8 > 0)
						{
							MISC::CLEAR_BIT(&(Global_32338[iVar2 /*23*/].f_11), 0);
						}
						else if (BitTest(Global_32338[iVar2 /*23*/].f_11, 15))
						{
							MISC::SET_BIT(&(Global_32338[iVar2 /*23*/].f_11), 0);
						}
					}
					else if (BitTest(Global_32338[iVar2 /*23*/].f_11, 15))
					{
						MISC::SET_BIT(&(Global_32338[iVar2 /*23*/].f_11), 0);
					}
					if (BitTest(Global_32338[iVar2 /*23*/].f_11, 0) && BitTest(Global_32338[iVar2 /*23*/].f_11, 3))
					{
						bVar10 = false;
						if (!HUD::DOES_BLIP_EXIST(Global_32338[iVar2 /*23*/].f_19))
						{
							while (!HUD::GET_NUMBER_OF_ACTIVE_BLIPS() < 150)
							{
								SYSTEM::WAIT(2000);
							}
							if (BitTest(Global_32338[iVar2 /*23*/].f_11, 19))
							{
								switch (iLocal_53)
								{
									case 1:
									case 0:
									case 2:
										if (BitTest(Global_32338[iVar2 /*23*/].f_11, 28))
										{
											Global_32338[iVar2 /*23*/].f_19 = HUD::ADD_BLIP_FOR_RADIUS(Global_32338[iVar2 /*23*/][0 /*3*/], Global_32338[iVar2 /*23*/].f_10);
											HUD::SET_BLIP_ALPHA(Global_32338[iVar2 /*23*/].f_19, 128);
											HUD::SHOW_HEIGHT_ON_BLIP(Global_32338[iVar2 /*23*/].f_19, false);
										}
										else
										{
											Global_32338[iVar2 /*23*/].f_19 = HUD::ADD_BLIP_FOR_COORD(Global_32338[iVar2 /*23*/][iLocal_53 /*3*/]);
											HUD::SET_BLIP_SPRITE(Global_32338[iVar2 /*23*/].f_19, Global_32338[iVar2 /*23*/].f_12[iLocal_53]);
										}
										break;
									default:
										Global_32338[iVar2 /*23*/].f_19 = HUD::ADD_BLIP_FOR_COORD(1f, 2f, 3f);
										break;
								}
							}
							else if (BitTest(Global_32338[iVar2 /*23*/].f_11, 28))
							{
								Global_32338[iVar2 /*23*/].f_19 = HUD::ADD_BLIP_FOR_RADIUS(Global_32338[iVar2 /*23*/][0 /*3*/], Global_32338[iVar2 /*23*/].f_10);
								HUD::SET_BLIP_ALPHA(Global_32338[iVar2 /*23*/].f_19, 128);
								HUD::SHOW_HEIGHT_ON_BLIP(Global_32338[iVar2 /*23*/].f_19, false);
							}
							else
							{
								Global_32338[iVar2 /*23*/].f_19 = HUD::ADD_BLIP_FOR_COORD(Global_32338[iVar2 /*23*/][0 /*3*/]);
								HUD::SET_BLIP_SPRITE(Global_32338[iVar2 /*23*/].f_19, Global_32338[iVar2 /*23*/].f_12[0]);
							}
							if (Global_32338[iVar2 /*23*/].f_16 == 1)
							{
								bVar10 = true;
							}
						}
						else
						{
							if (BitTest(Global_32338[iVar2 /*23*/].f_11, 19))
							{
								switch (iLocal_53)
								{
									case 1:
									case 0:
									case 2:
										HUD::SET_BLIP_COORDS(Global_32338[iVar2 /*23*/].f_19, Global_32338[iVar2 /*23*/][iLocal_53 /*3*/]);
										break;
									default:
										break;
								}
							}
							else
							{
								HUD::SET_BLIP_COORDS(Global_32338[iVar2 /*23*/].f_19, Global_32338[iVar2 /*23*/][0 /*3*/]);
							}
							if (BitTest(Global_32338[iVar2 /*23*/].f_11, 9))
							{
								if (iLocal_43)
								{
									HUD::SET_BLIP_FLASHES(Global_32338[iVar2 /*23*/].f_19, true);
									iLocal_43 = 0;
								}
								else
								{
									HUD::SET_BLIP_FLASHES_ALTERNATE(Global_32338[iVar2 /*23*/].f_19, true);
									iLocal_43 = 1;
								}
								HUD::SET_BLIP_FLASH_TIMER(Global_32338[iVar2 /*23*/].f_19, 10000);
								MISC::CLEAR_BIT(&(Global_32338[iVar2 /*23*/].f_11), 9);
							}
							else
							{
								HUD::SET_BLIP_FLASHES(Global_32338[iVar2 /*23*/].f_19, false);
							}
						}
						func_20(Global_32338[iVar2 /*23*/].f_19, iVar2);
						if (bVar10)
						{
							func_19(iVar2);
						}
						iVar5++;
					}
					else
					{
						if (HUD::DOES_BLIP_EXIST(Global_32338[iVar2 /*23*/].f_19))
						{
							HUD::REMOVE_BLIP(&(Global_32338[iVar2 /*23*/].f_19));
							iVar5++;
							if (Global_32338[iVar2 /*23*/].f_16 == 1)
							{
								func_18(iVar2);
							}
						}
						Global_32338[iVar2 /*23*/].f_19 = 0;
					}
				}
				MISC::CLEAR_BIT(&(Global_32338[iVar2 /*23*/].f_11), 18);
				iVar11 = 30;
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					iVar11 = 250;
				}
				if (iVar5 > iVar11)
				{
					SYSTEM::WAIT(0);
					iVar5 = 0;
				}
				if ((iVar4 / 20) > iVar6)
				{
					iVar6 = (iVar4 / 20);
					SYSTEM::WAIT(0);
				}
				iVar2++;
			}
		}
		Global_32335 = Global_32336;
		Global_32336 = 0;
		if (iVar4 == 0)
		{
			func_11();
			func_7();
			SYSTEM::WAIT(500);
			iLocal_53 = __LIB_0__::func_683();
		}
	}
}

void func_7()//Position - 0x8A9
{
	if (__LIB_0__::func_683() == 1)
	{
		if (__LIB_0__::func_425(63))
		{
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (__LIB_0__::func_425(126))
				{
					if (__LIB_15__::func_276(138))
					{
						__LIB_14__::func_622(138, 0, 0);
					}
					if (!__LIB_15__::func_276(139))
					{
						if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("chop")) == 0)
						{
							if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 19.3f, 528.24f, 169.63f, true) > 50f)
							{
								__LIB_14__::func_622(139, 1, 0);
							}
						}
					}
				}
				else
				{
					if (__LIB_15__::func_276(139))
					{
						__LIB_14__::func_622(139, 0, 0);
					}
					if (!__LIB_15__::func_276(138))
					{
						if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("chop")) == 0)
						{
							if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), -11.15f, -1425.56f, 29.67f, true) > 50f)
							{
								__LIB_14__::func_622(138, 1, 0);
							}
						}
					}
				}
			}
		}
	}
}

void func_11()//Position - 0xAEE
{
	struct<3> Var0;
	int iVar1;
	float fVar2;
	int iVar3;
	float fVar4;
	if (PLAYER::IS_PLAYER_DEAD(PLAYER::GET_PLAYER_INDEX()))
	{
		return;
	}
	Var0 = { __LIB_0__::func_85(PLAYER::GET_PLAYER_INDEX()) };
	iVar1 = -1;
	fVar2 = 1000000f;
	iVar3 = 0;
	iVar3 = 0;
	while (iVar3 < 7)
	{
		if (iLocal_51[iVar3] != -1)
		{
			if (HUD::DOES_BLIP_EXIST(Global_32338[iLocal_51[iVar3] /*23*/].f_19))
			{
				fVar4 = MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, HUD::GET_BLIP_COORDS(Global_32338[iLocal_51[iVar3] /*23*/].f_19), true);
				if (fVar4 < fVar2)
				{
					fVar2 = fVar4;
					iVar1 = iVar3;
				}
			}
		}
		iVar3++;
	}
	if (iLocal_49 == iVar1)
	{
		return;
	}
	iLocal_49 = iVar1;
	if (iVar1 == -1)
	{
		return;
	}
	iVar3 = 0;
	while (iVar3 < 7)
	{
		if (iLocal_51[iVar3] != -1)
		{
			if (iVar3 == iVar1)
			{
				if (HUD::DOES_BLIP_EXIST(Global_32338[iLocal_51[iVar3] /*23*/].f_19))
				{
					__LIB_16__::func_614(iLocal_51[iVar3]);
				}
			}
			else if (HUD::DOES_BLIP_EXIST(Global_32338[iLocal_51[iVar3] /*23*/].f_19))
			{
				__LIB_16__::func_615(iLocal_51[iVar3]);
			}
		}
		iVar3++;
	}
}

void func_18(int iParam0)//Position - 0xDF0
{
	int iVar0;
	if (iLocal_50 < 1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (iLocal_51[iVar0] == iParam0)
		{
			iLocal_50 = (iLocal_50 - 1);
			iLocal_51[iVar0] = -1;
			if (iParam0 == iLocal_49)
			{
				iLocal_49 = -1;
			}
			return;
		}
		iVar0++;
	}
}

void func_19(int iParam0)//Position - 0xE3B
{
	int iVar0;
	int iVar1;
	if (iLocal_50 == 7)
	{
		return;
	}
	iVar0 = 0;
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < iLocal_50)
	{
		if (iLocal_51[iVar0] == iParam0)
		{
			return;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (iLocal_51[iVar0] == -1)
		{
			iVar1 = iVar0;
			iVar0 = 7;
		}
		iVar0++;
	}
	iLocal_51[iVar1] = iParam0;
	iLocal_50++;
}

void func_20(int iParam0, int iParam1)//Position - 0xEA4
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	bool bVar4;
	iVar0 = __LIB_0__::func_683();
	HUD::SET_BLIP_EXTENDED_HEIGHT_THRESHOLD(iParam0, true);
	HUD::SET_BLIP_PRIORITY(iParam0, 2);
	HUD::SET_BLIP_COLOUR(iParam0, __LIB_30__::func_374(iParam1));
	if (Global_32338[iParam1 /*23*/].f_16 == 4 || Global_32338[iParam1 /*23*/].f_16 == 8)
	{
		switch (iVar0)
		{
			case 0:
				HUD::SET_BLIP_COLOUR(iParam0, 42);
				break;
			case 1:
				HUD::SET_BLIP_COLOUR(iParam0, 43);
				break;
			case 2:
				HUD::SET_BLIP_COLOUR(iParam0, 44);
				break;
			}
	}
	if (!BitTest(Global_32338[iParam1 /*23*/].f_11, 28))
	{
		HUD::SET_BLIP_SCALE(iParam0, 1f);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_32338[iParam1 /*23*/].f_20)))
	{
		if (HUD::DOES_TEXT_LABEL_EXIST(&(Global_32338[iParam1 /*23*/].f_20)))
		{
			HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iParam0, &(Global_32338[iParam1 /*23*/].f_20));
		}
	}
	bVar1 = BitTest(Global_32338[iParam1 /*23*/].f_11, 4);
	bVar2 = BitTest(Global_32338[iParam1 /*23*/].f_11, 5);
	iVar3 = BitTest(Global_32338[iParam1 /*23*/].f_11, 6);
	bVar4 = false;
	if (__LIB_0__::func_540(0))
	{
		bVar4 = BitTest(Global_32338[iParam1 /*23*/].f_11, 11);
	}
	if (iVar3 && !bVar4)
	{
		HUD::SET_BLIP_AS_SHORT_RANGE(iParam0, false);
	}
	else
	{
		HUD::SET_BLIP_AS_SHORT_RANGE(iParam0, true);
	}
	if (bVar2 && bVar1)
	{
		HUD::SET_BLIP_DISPLAY(iParam0, 4);
	}
	else
	{
		if (bVar2)
		{
			HUD::SET_BLIP_DISPLAY(iParam0, 5);
		}
		if (bVar1)
		{
			HUD::SET_BLIP_DISPLAY(iParam0, 3);
		}
	}
	switch (Global_32338[iParam1 /*23*/].f_16)
	{
		case 7:
			HUD::SET_BLIP_PRIORITY(iParam0, 2);
			HUD::SET_BLIP_HIGH_DETAIL(iParam0, false);
			break;
		case 6:
		case 5:
			HUD::SET_BLIP_PRIORITY(iParam0, 2);
			HUD::SET_BLIP_HIGH_DETAIL(iParam0, false);
			break;
		case 1:
			HUD::SET_BLIP_PRIORITY(iParam0, 3);
			HUD::SET_BLIP_HIGH_DETAIL(iParam0, true);
			break;
		case 9:
			HUD::SET_BLIP_PRIORITY(iParam0, 1);
			HUD::SET_BLIP_CATEGORY(iParam0, 10);
			HUD::SET_BLIP_HIGH_DETAIL(iParam0, false);
			break;
		case 4:
		case 8:
			HUD::SET_BLIP_HIGH_DETAIL(iParam0, true);
			if (Global_32338[iParam1 /*23*/].f_16 == 4)
			{
				HUD::SET_BLIP_PRIORITY(iParam0, 7);
			}
			else
			{
				HUD::SET_BLIP_PRIORITY(iParam0, 5);
			}
			if (BitTest(Global_32338[iParam1 /*23*/].f_11, 8))
			{
				if (!func_29(iParam1))
				{
					if (BitTest(Global_32338[iParam1 /*23*/].f_11, 28))
					{
						HUD::SET_BLIP_ALPHA(iParam0, 0);
					}
					else
					{
						if (Global_32338[iParam1 /*23*/].f_17 == 0)
						{
							HUD::SET_BLIP_COLOUR(iParam0, 42);
						}
						if (Global_32338[iParam1 /*23*/].f_17 == 1)
						{
							HUD::SET_BLIP_COLOUR(iParam0, 43);
						}
						if (Global_32338[iParam1 /*23*/].f_17 == 2)
						{
							HUD::SET_BLIP_COLOUR(iParam0, 44);
						}
						if (Global_32338[iParam1 /*23*/].f_16 == 8)
						{
							HUD::SET_BLIP_AS_SHORT_RANGE(iParam0, BitTest(Global_32338[iParam1 /*23*/].f_11, 5));
							HUD::SET_BLIP_PRIORITY(iParam0, 3);
							HUD::SET_BLIP_AS_SHORT_RANGE(iParam0, true);
							HUD::SET_BLIP_HIDDEN_ON_LEGEND(iParam0, true);
							HUD::SET_BLIP_SCALE(iParam0, 0.77f);
						}
						else
						{
							HUD::SET_BLIP_SCALE(iParam0, 0.72f);
						}
					}
				}
				else
				{
					if (BitTest(Global_32338[iParam1 /*23*/].f_11, 28))
					{
						HUD::SET_BLIP_ALPHA(iParam0, 128);
					}
					if (Global_32338[iParam1 /*23*/].f_16 == 8)
					{
						HUD::SET_BLIP_HIDDEN_ON_LEGEND(iParam0, false);
					}
				}
			}
			break;
		default:
			HUD::SET_BLIP_PRIORITY(iParam0, 5);
			break;
	}
	switch (iParam1)
	{
		case 48:
		case 49:
		case 50:
		case 51:
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
			HUD::SET_BLIP_HIGH_DETAIL(iParam0, true);
			break;
	}
	if (BitTest(Global_32338[iParam1 /*23*/].f_11, 19))
	{
		switch (iVar0)
		{
			case 1:
			case 0:
			case 2:
				HUD::SET_BLIP_COORDS(Global_32338[iParam1 /*23*/].f_19, Global_32338[iParam1 /*23*/][iVar0 /*3*/]);
				break;
			}
	}
	if (BitTest(Global_32338[iParam1 /*23*/].f_11, 17))
	{
		HUD::SET_BLIP_AS_MISSION_CREATOR_BLIP(iParam0, true);
	}
	else
	{
		HUD::SET_BLIP_AS_MISSION_CREATOR_BLIP(iParam0, false);
	}
	if (BitTest(Global_32338[iParam1 /*23*/].f_11, 20))
	{
		HUD::SHOW_TICK_ON_BLIP(iParam0, true);
	}
	else
	{
		HUD::SHOW_TICK_ON_BLIP(iParam0, false);
	}
	if (BitTest(Global_32338[iParam1 /*23*/].f_11, 29))
	{
		HUD::SET_BLIP_COLOUR(iParam0, 39);
	}
}

void func_23()//Position - 0x12F0
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		func_24(iVar0);
		iVar0++;
	}
}

void func_24(int iParam0)//Position - 0x1310
{
	bool bVar0;
	if (iParam0 == 10)
	{
		return;
	}
	if (Global_95479[iParam0 /*10*/].f_7 == 263)
	{
		return;
	}
	bVar0 = false;
	if (BitTest(Global_113386.f_7229[iParam0], 0))
	{
		if (Global_95479[iParam0 /*10*/].f_9 != __LIB_0__::func_683())
		{
			bVar0 = true;
		}
		else if (!func_26(iParam0))
		{
			bVar0 = true;
		}
	}
	if (iParam0 == 5)
	{
		if (__LIB_0__::func_426(6))
		{
			bVar0 = false;
		}
	}
	if (__LIB_0__::func_540(14))
	{
		bVar0 = false;
	}
	__LIB_14__::func_622(Global_95479[iParam0 /*10*/].f_7, bVar0, 0);
}

int func_26(int iParam0)//Position - 0x13AF
{
	int iVar0;
	char* sVar1;
	int iVar2;
	if (Global_100493.f_373 == 0)
	{
		return 0;
	}
	if (iParam0 == 10)
	{
		iVar0 = 0;
		while (iVar0 < 10)
		{
			if (func_26(iVar0))
			{
				return 1;
			}
			iVar0++;
		}
	}
	else if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		__LIB_14__::func_623(iParam0, &sVar1);
		iVar2 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(Global_95479[iParam0 /*10*/].f_3, &sVar1);
		if (iVar2 != 0 && Global_100493.f_373 == iVar2)
		{
			return 1;
		}
	}
	return 0;
}

int func_29(int iParam0)//Position - 0x1521
{
	int iVar0;
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return 0;
	}
	if (!BitTest(Global_32338[iVar0 /*23*/].f_11, 8))
	{
		return 0;
	}
	if (Global_32338[iVar0 /*23*/].f_17 == __LIB_0__::func_683())
	{
		return 1;
	}
	if (!BitTest(Global_32338[iVar0 /*23*/].f_11, 10))
	{
		return 0;
	}
	if (Global_32338[iVar0 /*23*/].f_18 == __LIB_0__::func_683())
	{
		return 1;
	}
	return 0;
}

int func_33()//Position - 0x17A1
{
	if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX()) != 0)
	{
		return 1;
	}
	return 0;
}

int func_34(int iParam0)//Position - 0x17BA
{
	if (iLocal_57 && BitTest(Global_32338[iParam0 /*23*/].f_11, 13))
	{
		MISC::SET_BIT(&(Global_32338[iParam0 /*23*/].f_11), 18);
		return 1;
	}
	if (iLocal_58 && ((BitTest(Global_32338[iParam0 /*23*/].f_11, 7) || BitTest(Global_32338[iParam0 /*23*/].f_11, 11)) || BitTest(Global_32338[iParam0 /*23*/].f_11, 16)))
	{
		MISC::SET_BIT(&(Global_32338[iParam0 /*23*/].f_11), 18);
		return 1;
	}
	if (iLocal_59 && BitTest(Global_32338[iParam0 /*23*/].f_11, 14))
	{
		MISC::SET_BIT(&(Global_32338[iParam0 /*23*/].f_11), 18);
		return 1;
	}
	if (iLocal_54 && ((BitTest(Global_32338[iParam0 /*23*/].f_11, 10) || BitTest(Global_32338[iParam0 /*23*/].f_11, 8)) || BitTest(Global_32338[iParam0 /*23*/].f_11, 19)))
	{
		MISC::SET_BIT(&(Global_32338[iParam0 /*23*/].f_11), 18);
		return 1;
	}
	if (bLocal_55)
	{
		MISC::SET_BIT(&(Global_32338[iParam0 /*23*/].f_11), 18);
		return 1;
	}
	if (iLocal_61 && BitTest(Global_32338[iParam0 /*23*/].f_11, 27))
	{
		MISC::SET_BIT(&(Global_32338[iParam0 /*23*/].f_11), 18);
		return 1;
	}
	if ((iLocal_62 && (BitTest(Global_32338[iParam0 /*23*/].f_11, 1) || BitTest(Global_32338[iParam0 /*23*/].f_11, 2))) || Global_32338[iParam0 /*23*/].f_16 == 1)
	{
		MISC::SET_BIT(&(Global_32338[iParam0 /*23*/].f_11), 18);
		return 1;
	}
	return 0;
}

int func_35()//Position - 0x1939
{
	int iVar0;
	iVar0 = 0;
	if (func_41())
	{
		if (!iLocal_56)
		{
			iLocal_56 = 1;
			iVar0 = 1;
		}
	}
	if (func_40())
	{
		if (!iLocal_57)
		{
			iLocal_57 = 1;
			iVar0 = 1;
		}
	}
	if (func_39())
	{
		if (!iLocal_58)
		{
			iLocal_58 = 1;
			iVar0 = 1;
		}
	}
	if (func_38())
	{
		if (!iLocal_59)
		{
			iLocal_59 = 1;
			iVar0 = 1;
		}
	}
	bLocal_55 = false;
	if (Global_38389 != iLocal_60)
	{
		iLocal_60 = Global_38389;
		if (!bLocal_55)
		{
			bLocal_55 = true;
			iVar0 = 1;
		}
	}
	if (func_36())
	{
		if (!iLocal_62)
		{
			iLocal_62 = 1;
			iVar0 = 1;
		}
	}
	iLocal_53 = __LIB_0__::func_683();
	if (iLocal_53 != iLocal_52)
	{
		iLocal_52 = iLocal_53;
		iLocal_54 = 1;
		iVar0 = 1;
	}
	iLocal_42 = bLocal_41;
	if (__LIB_0__::func_425(130))
	{
		bLocal_41 = true;
	}
	if (__LIB_0__::func_425(131))
	{
		bLocal_41 = false;
	}
	if (bLocal_41 != iLocal_42)
	{
		if (!iLocal_61)
		{
			iVar0 = 1;
		}
		iLocal_61 = 1;
	}
	return iVar0;
}

int func_36()//Position - 0x1A07
{
	int iVar0;
	if (ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), false))
	{
		return 0;
	}
	iVar0 = INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()));
	if (iLocal_47 != iVar0)
	{
		iLocal_47 = iVar0;
		if (iVar0 == 0 || __LIB_28__::func_492(iVar0))
		{
			bLocal_46 = true;
		}
		else
		{
			bLocal_46 = false;
		}
		return 1;
	}
	return 0;
}

int func_38()//Position - 0x1A8C
{
	if (iLocal_48 != __LIB_0__::func_540(0))
	{
		iLocal_48 = __LIB_0__::func_540(0);
		return 1;
	}
	return 0;
}

bool func_39()//Position - 0x1AAA
{
	bool bVar0;
	bVar0 = Global_38390;
	Global_38390 = 0;
	if (bVar0)
	{
	}
	return bVar0;
}

int func_40()//Position - 0x1AC2
{
	if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX()) != iLocal_45)
	{
		iLocal_45 = PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX());
		return 1;
	}
	return 0;
}

int func_41()//Position - 0x1AE6
{
	if (Global_43052 != 15)
	{
		return 0;
	}
	if (CLOCK::GET_CLOCK_HOURS() != iLocal_44)
	{
		iLocal_44 = CLOCK::GET_CLOCK_HOURS();
		return 1;
	}
	return 0;
}

void func_42()//Position - 0x1B0E
{
	iLocal_54 = 0;
	bLocal_55 = false;
	iLocal_56 = 0;
	iLocal_57 = 0;
	iLocal_58 = 0;
	iLocal_59 = 0;
	iLocal_60 = 0;
	iLocal_61 = 0;
	iLocal_62 = 0;
}

void func_43()//Position - 0x1B31
{
	if (__LIB_0__::func_178(0) == 1 && !__LIB_0__::func_39(6))
	{
		__LIB_14__::func_622(112, 1, 0);
		__LIB_14__::func_622(113, 1, 0);
		__LIB_14__::func_622(114, 1, 0);
	}
}

void func_45()//Position - 0x1B92
{
	if (__LIB_0__::func_178(0) == 1 && !__LIB_0__::func_39(6))
	{
		__LIB_14__::func_622(156, 1, 0);
		__LIB_14__::func_622(157, 1, 0);
		__LIB_14__::func_622(161, 1, 0);
		__LIB_14__::func_622(160, 1, 0);
		__LIB_14__::func_622(158, 1, 0);
		__LIB_16__::func_615(158);
		__LIB_14__::func_622(159, 1, 0);
		__LIB_16__::func_615(159);
	}
}

void func_46(int iParam0, bool bParam1)//Position - 0x1BEB
{
	int iVar0;
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return;
	}
	if (bParam1 == BitTest(Global_32338[iVar0 /*23*/].f_11, 2))
	{
		return;
	}
	if (bParam1)
	{
		MISC::SET_BIT(&(Global_32338[iVar0 /*23*/].f_11), 2);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_32338[iVar0 /*23*/].f_11), 2);
	}
	if (Global_32335 == 1)
	{
		Global_32336 = 1;
	}
	Global_32335 = 1;
	MISC::SET_BIT(&(Global_32338[iVar0 /*23*/].f_11), 18);
}

