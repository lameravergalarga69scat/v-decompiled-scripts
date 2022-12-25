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
	int iLocal_14 = 0;
	float fLocal_15 = 0f;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	char* sLocal_18 = NULL;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	int iLocal_21 = 0;
	struct<67> Local_22 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2147483647 } ;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	struct<2> Local_41 = { 0, 0 } ;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
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
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 1;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	int iLocal_86 = 0;
	struct<34> Local_87 = { 2147483647, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	iLocal_14 = -1;
	fLocal_15 = 0.001f;
	sLocal_18 = "NULL";
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_50(ScriptParam_87);
	}
	else
	{
		__LIB_2__::func_861();
	}
	while (true)
	{
		__LIB_0__::func_933();
		if (Global_262145.f_24104 /* Tunable: BLOCK_NS_TRANS */)
		{
			__LIB_2__::func_861();
		}
		if (__LIB_0__::func_959())
		{
			__LIB_2__::func_861();
		}
		func_1();
	}
}

void func_1()//Position - 0x78
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bVar0 = false;
	if (Global_4535591)
	{
		if (Global_4539666[iLocal_21 /*12*/].f_11)
		{
			__LIB_42__::func_621(iLocal_21);
			Global_4539666[iLocal_21 /*12*/].f_11 = 0;
		}
	}
	if (Local_22.f_66.f_8)
	{
		func_17(Local_22.f_66);
	}
	if ((Local_22.f_66.f_2 == 1 && Global_4535592) && __LIB_39__::func_332(&Local_22))
	{
		bVar0 = true;
	}
	if (Global_4534105[iLocal_21 /*85*/].f_66 == 2147483647 && Local_22.f_66.f_12)
	{
		if (bVar0)
		{
			__LIB_1__::func_863(0);
		}
		__LIB_2__::func_861();
	}
	if (Local_22.f_66.f_18 > 0 && !__LIB_0__::func_719())
	{
		iVar2 = (1000 / SYSTEM::ROUND((MISC::GET_FRAME_TIME() * 1000f)));
		if ((MISC::GET_FRAME_COUNT() - Local_22.f_66.f_18) > iVar2 * 10)
		{
			Local_22.f_66.f_18 = -1;
		}
	}
	if (((__LIB_0__::func_112() && Local_22.f_66.f_2 == 1) && Local_22.f_66.f_13) && !Local_22.f_66.f_12)
	{
		if (MISC::GET_FRAME_COUNT() - Local_22.f_66.f_14) >= __LIB_39__::func_331(Local_22.f_66.f_5)
		{
			iVar1 = 0;
			if (!NETSHOPPING::NET_GAMESERVER_IS_SESSION_VALID(__LIB_0__::func_5()) || NETSHOPPING::NET_GAMESERVER_IS_SESSION_REFRESH_PENDING())
			{
				iVar1 = 1;
			}
			else if (Local_22.f_66.f_2 != 1)
			{
				iVar1 = 2;
			}
			else if (Local_22.f_66.f_5 != 1 && !NETSHOPPING::NET_GAMESERVER_BEGIN_SERVICE(&(Local_22.f_66), Local_22.f_66.f_6, Local_22.f_66.f_4, Local_22.f_66.f_7, Local_22.f_66.f_1, Local_22.f_66.f_10))
			{
				iVar1 = 3;
			}
			else if (!NETSHOPPING::NET_GAMESERVER_CHECKOUT_START(Local_22.f_66))
			{
				iVar1 = 4;
			}
			else
			{
				Local_22.f_66.f_12 = 1;
				Global_4534105[iLocal_21 /*85*/].f_66.f_12 = 1;
				Global_4534105[iLocal_21 /*85*/].f_66 = Local_22.f_66;
			}
			if (iVar1 != 0)
			{
				__LIB_1__::func_34(iLocal_21);
				__LIB_2__::func_861();
			}
		}
	}
	if (!iLocal_86)
	{
		if (bVar0)
		{
			__LIB_6__::func_368(&Local_41, 0);
			iLocal_86 = 1;
		}
	}
	else if (bVar0)
	{
		StringCopy(&(Local_41.f_1), "HUD_TRANSP" /* GXT: Transaction Pending */, 64);
		__LIB_6__::func_367(&Local_41, __LIB_5__::func_839(&Local_41));
	}
	else
	{
		iLocal_86 = 0;
		__LIB_1__::func_863(0);
	}
}

void func_17(int iParam0)//Position - 0x631
{
	struct<7> Var0;
	int iVar1;
	bool bVar2;
	int iVar3;
	struct<67> Var4;
	bool bVar5;
	var uVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	iVar1 = 0;
	bVar2 = false;
	if (!__LIB_0__::func_112())
	{
		iVar1 = 1;
		Var0.f_0 = iParam0;
		Var0.f_2 = 0;
	}
	if (iVar1 || SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 7))
	{
		Var4.f_66 = 2147483647;
		iVar3 = __LIB_37__::func_763(Var0.f_0, &Var4);
		if (iVar3 != -1)
		{
			Global_4534105[iVar3 /*85*/].f_66.f_8 = 0;
			if (Global_4534105[iVar3 /*85*/].f_66.f_18 == 0)
			{
				Global_4534105[iVar3 /*85*/].f_66.f_18 = MISC::GET_FRAME_COUNT();
			}
		}
		bVar5 = true;
		if (iVar3 != -1)
		{
			Global_4534105[iVar3 /*85*/].f_66.f_17 = Var0.f_2;
		}
		else
		{
			Global_4535579.f_4 = Var0.f_2;
			Global_4535579.f_6 = Var0.f_3;
			Global_4535579.f_7 = Var0.f_4;
			Global_4535579.f_8 = Var0.f_5;
			Global_4535579.f_9 = Var0.f_6;
			if (Global_4535579.f_10 == 0)
			{
				Global_4535579.f_10 = MISC::GET_FRAME_COUNT();
			}
		}
		switch (Var0.f_2)
		{
			case 0:
				if (iVar3 != -1)
				{
					Global_4539666[iVar3 /*12*/] = Global_4534105[iVar3 /*85*/].f_66.f_3;
					Global_4539666[iVar3 /*12*/].f_1 = Global_4534105[iVar3 /*85*/].f_66.f_7;
					Global_4539666[iVar3 /*12*/].f_2 = Global_4534105[iVar3 /*85*/].f_66.f_4;
					Global_4539666[iVar3 /*12*/].f_3 = Global_4534105[iVar3 /*85*/].f_66.f_1;
					Global_4539666[iVar3 /*12*/].f_5 = Var0.f_1;
					Global_4539666[iVar3 /*12*/].f_6 = Var0.f_3;
					Global_4539666[iVar3 /*12*/].f_7 = Var0.f_4;
					Global_4539666[iVar3 /*12*/].f_8 = Var0.f_5;
					Global_4539666[iVar3 /*12*/].f_9 = Var0.f_6;
					Global_4539666[iVar3 /*12*/].f_11 = 1;
					Global_4534105[iVar3 /*85*/].f_66.f_2 = 2;
					if (Global_4534105[iVar3 /*85*/].f_66.f_11 & 4 != 0)
					{
						func_32(iVar3, bVar5);
					}
					else if (__LIB_0__::func_112())
					{
						if (bVar5)
						{
							NETSHOPPING::NET_GAMESERVER_BASKET_APPLY_SERVER_DATA(Global_4534105[iVar3 /*85*/].f_66, &uVar6);
						}
					}
				}
				break;
			default:
				if (iVar3 != -1)
				{
					Global_4534105[iVar3 /*85*/].f_66.f_2 = 3;
					if ((Global_4534105[iVar3 /*85*/].f_66.f_11 & 1 != 0 && Global_4534105[iVar3 /*85*/].f_66.f_9 < 2) && __LIB_37__::func_762(Var0.f_2))
					{
						if (__LIB_0__::func_947(iVar3))
						{
							if (__LIB_12__::func_387())
							{
								Global_4534105[iVar3 /*85*/].f_66.f_2 = 1;
								Global_4534105[iVar3 /*85*/].f_66.f_9++;
							}
							else if (Global_4534105[iVar3 /*85*/].f_66.f_11 & 2 != 0)
							{
								Global_4535609 = Global_4534105[iVar3 /*85*/].f_66.f_4;
								Global_4535611 = Global_4534105[iVar3 /*85*/].f_66.f_6;
								Global_4535612 = Var0.f_2;
								Global_4535610 = Global_4534105[iVar3 /*85*/].f_66.f_1;
								if (__LIB_37__::func_761(Global_4535609) && __LIB_0__::func_112())
								{
									if (!__LIB_37__::func_760(Global_4534105[iVar3 /*85*/].f_66))
									{
										iVar7 = __LIB_37__::func_759();
										Global_4535466[iVar7 /*7*/] = Global_4534105[iVar3 /*85*/].f_66;
										Global_4535466[iVar7 /*7*/].f_2 = Global_4535609;
										Global_4535466[iVar7 /*7*/].f_3 = Global_4535611;
										Global_4535466[iVar7 /*7*/].f_1 = Global_4535610;
										Global_4535466[iVar7 /*7*/].f_4 = NETWORK::GET_NETWORK_TIME();
									}
								}
								else
								{
									Global_4535606 = 1;
								}
							}
						}
						else if (__LIB_37__::func_844(&iVar3))
						{
							Global_4534105[iVar3 /*85*/].f_66.f_2 = 1;
							Global_4534105[iVar3 /*85*/].f_66.f_9++;
						}
						else if (Global_4534105[iVar3 /*85*/].f_66.f_11 & 2 != 0)
						{
							Global_4535609 = Global_4534105[iVar3 /*85*/].f_66.f_4;
							Global_4535611 = Global_4534105[iVar3 /*85*/].f_66.f_6;
							Global_4535612 = Var0.f_2;
							Global_4535610 = Global_4534105[iVar3 /*85*/].f_66.f_1;
							if (__LIB_37__::func_761(Global_4535609) && __LIB_0__::func_112())
							{
								if (!__LIB_37__::func_760(Global_4534105[iVar3 /*85*/].f_66))
								{
									iVar8 = __LIB_37__::func_759();
									Global_4535466[iVar8 /*7*/] = Global_4534105[iVar3 /*85*/].f_66;
									Global_4535466[iVar8 /*7*/].f_2 = Global_4535609;
									Global_4535466[iVar8 /*7*/].f_3 = Global_4535611;
									Global_4535466[iVar8 /*7*/].f_1 = Global_4535610;
									Global_4535466[iVar8 /*7*/].f_4 = NETWORK::GET_NETWORK_TIME();
								}
							}
							else
							{
								Global_4535606 = 1;
							}
						}
					}
					else if (Global_4534105[iVar3 /*85*/].f_66.f_11 & 2 != 0)
					{
						Global_4535609 = Global_4534105[iVar3 /*85*/].f_66.f_4;
						Global_4535611 = Global_4534105[iVar3 /*85*/].f_66.f_6;
						Global_4535612 = Var0.f_2;
						Global_4535610 = Global_4534105[iVar3 /*85*/].f_66.f_1;
						if ((__LIB_37__::func_761(Global_4535609) && __LIB_0__::func_112()) && __LIB_37__::func_762(Var0.f_2))
						{
							if (!__LIB_37__::func_760(Global_4534105[iVar3 /*85*/].f_66))
							{
								iVar9 = __LIB_37__::func_759();
								Global_4535466[iVar9 /*7*/] = Global_4534105[iVar3 /*85*/].f_66;
								Global_4535466[iVar9 /*7*/].f_2 = Global_4535609;
								Global_4535466[iVar9 /*7*/].f_3 = Global_4535611;
								Global_4535466[iVar9 /*7*/].f_1 = Global_4535610;
								Global_4535466[iVar9 /*7*/].f_4 = NETWORK::GET_NETWORK_TIME();
							}
						}
						else
						{
							Global_4535606 = 1;
						}
					}
					if (Global_4534105[iVar3 /*85*/].f_66.f_2 == 3)
					{
						if (bVar2)
						{
							func_19(1, Global_4534105[iVar3 /*85*/].f_66.f_4);
							Global_4535606 = 0;
						}
						if (Global_4534105[iVar3 /*85*/].f_66.f_11 & 4 != 0)
						{
							__LIB_1__::func_374(iVar3, Global_4534105[iVar3 /*85*/].f_66.f_4, Global_4534105[iVar3 /*85*/].f_66.f_10, Global_4534105[iVar3 /*85*/].f_66.f_1, Var0.f_2);
						}
					}
				}
				break;
			}
	}
}

void func_19(int iParam0, var uParam1)//Position - 0xBE0
{
	Global_2727893 = uParam1;
	Global_2727892 = iParam0;
}

void func_32(int iParam0, bool bParam1)//Position - 0x1E2B
{
	bool bVar0;
	bool bVar1;
	var uVar2;
	struct<10> Var3;
	var uVar4;
	if (iParam0 == -1)
	{
		return;
	}
	NETSHOPPING::NET_GAMESERVER_SET_TELEMETRY_NONCE_SEED(__LIB_1__::func_818(iParam0));
	if (Global_4534105[iParam0 /*85*/].f_66.f_10 == 1)
	{
	}
	else if (Global_4534105[iParam0 /*85*/].f_66.f_10 == 4)
	{
		bVar0 = true;
	}
	else if (Global_4534105[iParam0 /*85*/].f_66.f_10 == 2)
	{
		bVar1 = true;
	}
	Var3 = -1;
	Var3.f_1 = -1;
	Var3.f_2 = -1;
	Var3.f_3 = -1;
	Var3.f_4 = -1;
	Var3.f_5 = -1;
	Var3.f_6 = -1;
	Var3.f_7 = -1;
	Var3.f_8 = -1;
	Var3.f_9 = -1;
	__LIB_37__::func_35(&Var3);
	switch (Global_4534105[iParam0 /*85*/].f_66.f_4)
	{
		case joaat("SERVICE_SPEND_MOVE_YACHT"):
			MONEY::NETWORK_SPENT_MOVE_YACHT(Global_4534105[iParam0 /*85*/].f_66.f_1, bVar1, bVar0);
			break;
		case joaat("SERVICE_SPEND_LOSE_WANTED_LEVEL"):
			MONEY::NETWORK_SPENT_BUY_WANTEDLEVEL(Global_4534105[iParam0 /*85*/].f_66.f_1, &(Global_4534105[iParam0 /*85*/].f_14), bVar1, bVar0, 0);
			break;
		case joaat("SERVICE_SPEND_VEHICLE_INSURANCE_PREMIUM"):
			MONEY::NETWORK_SPENT_PAY_VEHICLE_INSURANCE_PREMIUM(Global_4534105[iParam0 /*85*/].f_66.f_1, Global_4534105[iParam0 /*85*/], &(Global_4534105[iParam0 /*85*/].f_14), bVar1, bVar0);
			break;
		case joaat("SERVICE_SPEND_CINEMA"):
			MONEY::NETWORK_SPENT_CINEMA(Global_4534105[iParam0 /*85*/].f_66.f_1, Global_4534105[iParam0 /*85*/].f_1, bVar1, bVar0);
			break;
		case joaat("SERVICE_SPEND_STRIP_CLUB"):
			MONEY::NETWORK_SPENT_IN_STRIPCLUB(Global_4534105[iParam0 /*85*/].f_66.f_1, bVar1, Global_4534105[iParam0 /*85*/].f_2, bVar0);
			break;
		case joaat("SERVICE_EARN_JOB_BONUS"):
			MONEY::NETWORK_EARN_FROM_JOB_BONUS(Global_4534105[iParam0 /*85*/].f_66.f_1, &(Global_4534105[iParam0 /*85*/].f_14.f_26), &(Global_4534105[iParam0 /*85*/].f_14.f_34));
			break;
		case joaat("SERVICE_SPEND_TELESCOPE"):
			MONEY::NETWORK_SPENT_TELESCOPE(Global_4534105[iParam0 /*85*/].f_66.f_1, bVar1, bVar0);
			break;
		case joaat("SERVICE_SPEND_CALL_PLAYER"):
			MONEY::NETWORK_SPENT_CALL_PLAYER(Global_4534105[iParam0 /*85*/].f_66.f_1, &(Global_4534105[iParam0 /*85*/].f_14), bVar1, bVar0);
			break;
		case joaat("SERVICE_SPEND_CARWASH"):
			MONEY::NETWORK_SPENT_CARWASH(Global_4534105[iParam0 /*85*/].f_66.f_1, Global_4534105[iParam0 /*85*/], Global_4534105[iParam0 /*85*/].f_1, bVar1, bVar0);
			break;
		case joaat("SERVICE_EARN_CRATE_DROP"):
			MONEY::NETWORK_EARN_FROM_CRATE_DROP(Global_4534105[iParam0 /*85*/].f_66.f_1);
			break;
		case joaat("SERVICE_SPEND_MATCH_ENTRY_FEE"):
			MONEY::NETWORK_PAY_MATCH_ENTRY_FEE(Global_4534105[iParam0 /*85*/].f_66.f_1, &(Global_4534105[iParam0 /*85*/].f_14.f_26), bVar1, bVar0);
			break;
		case joaat("SERVICE_SPEND_RACE_VEHICLE_RENTAL"):
			MONEY::NETWORK_PAY_MATCH_ENTRY_FEE(Global_4534105[iParam0 /*85*/].f_66.f_1, &(Global_4534105[iParam0 /*85*/].f_14.f_26), bVar1, bVar0);
			break;
		case joaat("SERVICE_SPEND_HEALTHCARE"):
			MONEY::NETWORK_BUY_HEALTHCARE(Global_4534105[iParam0 /*85*/].f_66.f_1, bVar1, bVar0);
			break;
		case joaat("SERVICE_EARN_BETTING"):
			MONEY::NETWORK_EARN_FROM_BETTING(Global_4534105[iParam0 /*85*/].f_66.f_1, &(Global_4534105[iParam0 /*85*/].f_14.f_34));
			break;
		case joaat("SERVICE_SPEND_CASH_DROP"):
			MONEY::NETWORK_SPENT_CASH_DROP(Global_4534105[iParam0 /*85*/].f_66.f_1, bVar1, bVar0);
			break;
		case joaat("SERVICE_SPEND_ARREST_BAIL"):
			MONEY::NETWORK_SPENT_ARREST_BAIL(Global_4534105[iParam0 /*85*/].f_66.f_1, bVar1, bVar0);
			break;
		case joaat("SERVICE_EARN_DAILY_OBJECTIVES"):
			MONEY::NETWORK_EARN_FROM_DAILY_OBJECTIVES(Global_4534105[iParam0 /*85*/].f_66.f_1, &(Global_4534105[iParam0 /*85*/].f_14.f_34), -1);
			break;
		case joaat("SERVICE_SPEND_BOUNTY_DM"):
			MONEY::NETWORK_SPENT_BOUNTY(Global_4534105[iParam0 /*85*/].f_66.f_1, bVar1, bVar0);
			break;
		case joaat("SERVICE_SPEND_WAGER"):
			MONEY::NETWORK_SPENT_WAGER(Global_4534105[iParam0 /*85*/].f_6, Global_4534105[iParam0 /*85*/].f_7, Global_4534105[iParam0 /*85*/].f_66.f_1);
			break;
		case joaat("SERVICE_SPEND_PAY_BOSS"):
			MONEY::NETWORK_SPEND_BOSS(Global_4534105[iParam0 /*85*/].f_6, Global_4534105[iParam0 /*85*/].f_7, Global_4534105[iParam0 /*85*/].f_66.f_1);
			break;
		case joaat("SERVICE_SPEND_PAY_GOON"):
			MONEY::NETWORK_SPEND_GOON(Global_4534105[iParam0 /*85*/].f_6, Global_4534105[iParam0 /*85*/].f_7, Global_4534105[iParam0 /*85*/].f_66.f_1);
			break;
		case joaat("SERVICE_SPEND_RENAME_ORGANIZATION"):
			MONEY::NETWORK_SPENT_RENAME_ORGANIZATION(Global_4534105[iParam0 /*85*/].f_66.f_1, bVar1, bVar0);
			break;
		case joaat("SERVICE_EARN_JOBS"):
			MONEY::NETWORK_EARN_FROM_JOB(Global_4534105[iParam0 /*85*/].f_66.f_1, &(Global_4534105[iParam0 /*85*/].f_14.f_26));
			break;
		case joaat("SERVICE_EARN_PREMIUM_JOB"):
			MONEY::NETWORK_EARN_FROM_PREMIUM_JOB(Global_4534105[iParam0 /*85*/].f_66.f_1, &(Global_4534105[iParam0 /*85*/].f_14.f_26));
			break;
		case joaat("SERVICE_SPEND_CAR_IMPOUND"):
			MONEY::NETWORK_BUY_ITEM(Global_4534105[iParam0 /*85*/].f_66.f_1, Global_4534105[iParam0 /*85*/], 14, 1, bVar1, &(Global_4534105[iParam0 /*85*/].f_14.f_26), 0, 0, 0, bVar0);
			break;
		case joaat("SERVICE_SPEND_PASSIVE"):
			MONEY::NETWORK_SPENT_BUY_PASSIVE_MODE(Global_4534105[iParam0 /*85*/].f_66.f_1, bVar1, bVar0, 0);
			break;
		case joaat("SERVICE_EARN_BOUNTY_COLLECTED"):
			MONEY::NETWORK_EARN_FROM_BOUNTY(Global_4534105[iParam0 /*85*/].f_66.f_1, &(Global_4534105[iParam0 /*85*/].f_14), &(Global_4534105[iParam0 /*85*/].f_14.f_13), 1);
			break;
		case joaat("SERVICE_EARN_GANGATTACK_PICKUP"):
			MONEY::NETWORK_EARN_FROM_GANGATTACK_PICKUP(Global_4534105[iParam0 /*85*/].f_66.f_1);
			break;
		case joaat("SERVICE_EARN_PICKUP"):
		case joaat("SERVICE_EARN_AMBIENT_MUGGING"):
		case joaat("SERVICE_EARN_AMBIENT_PICKUP"):
		case joaat("SERVICE_EARN_DEATHMATCH_BOUNTY"):
			MONEY::NETWORK_EARN_FROM_PICKUP(Global_4534105[iParam0 /*85*/].f_66.f_1);
			break;
		case joaat("SERVICE_EARN_ARMORED_TRUCKS"):
			MONEY::NETWORK_EARN_FROM_ROB_ARMORED_CARS(Global_4534105[iParam0 /*85*/].f_66.f_1);
			break;
		case joaat("SERVICE_EARN_HOLDUPS"):
			MONEY::NETWORK_EARN_FROM_HOLDUPS(Global_4534105[iParam0 /*85*/].f_66.f_1);
			break;
		case joaat("SERVICE_SPEND_MECHANIC_WAGE"):
			MONEY::NETWORK_PAY_EMPLOYEE_WAGE(Global_4534105[iParam0 /*85*/].f_66.f_1, bVar1, bVar0);
			break;
		case joaat("SERVICE_SPEND_UTILITY_BILLS"):
			MONEY::NETWORK_SPEND_APARTMENT_UTILITIES(Global_4534105[iParam0 /*85*/].f_66.f_1, bVar1, bVar0, &Global_4539876);
			break;
		case joaat("SERVICE_SPEND_PA_SERVICE_DANCER"):
			MONEY::NETWORK_SPENT_PA_SERVICE_DANCER(Global_4534105[iParam0 /*85*/].f_66.f_1, Global_4534105[iParam0 /*85*/], bVar1, bVar0);
			break;
		case joaat("SERVICE_SPEND_PA_SERVICE_HELI_PICKUP"):
			MONEY::NETWORK_SPENT_PA_HELI_PICKUP(Global_4534105[iParam0 /*85*/].f_66.f_1, Global_4534105[iParam0 /*85*/], bVar1, bVar0);
			break;
		case joaat("SERVICE_SPEND_BA_VP_BOUNTY"):
			MONEY::NETWORK_SPENT_MC_ABILITY(Global_4534105[iParam0 /*85*/].f_66.f_1, Global_4534105[iParam0 /*85*/], Global_4534105[iParam0 /*85*/].f_1, bVar1, bVar0);
			break;
		case joaat("SERVICE_SPEND_BA_VP_BULLSHARK"):
			MONEY::NETWORK_SPENT_MC_ABILITY(Global_4534105[iParam0 /*85*/].f_66.f_1, Global_4534105[iParam0 /*85*/], Global_4534105[iParam0 /*85*/].f_1, bVar1, bVar0);
			break;
		case joaat("SERVICE_SPEND_BA_SARGE_AMMO"):
			MONEY::NETWORK_SPENT_MC_ABILITY(Global_4534105[iParam0 /*85*/].f_66.f_1, Global_4534105[iParam0 /*85*/], Global_4534105[iParam0 /*85*/].f_1, bVar1, bVar0);
			break;
		case joaat("SERVICE_SPEND_BA_SARGE_MOLOTOV"):
			MONEY::NETWORK_SPENT_MC_ABILITY(Global_4534105[iParam0 /*85*/].f_66.f_1, Global_4534105[iParam0 /*85*/], Global_4534105[iParam0 /*85*/].f_1, bVar1, bVar0);
			break;
		case joaat("SERVICE_SPEND_BA_ENFORCER_ARMOUR"):
			MONEY::NETWORK_SPENT_MC_ABILITY(Global_4534105[iParam0 /*85*/].f_66.f_1, Global_4534105[iParam0 /*85*/], Global_4534105[iParam0 /*85*/].f_1, bVar1, bVar0);
			break;
		case joaat("SERVICE_EARN_REFUND_BACKUP_VAGOS"):
		case joaat("SERVICE_EARN_REFUND_BACKUP_LOST"):
		case joaat("SERVICE_EARN_REFUND_BACKUP_FAMILIES"):
		case joaat("SERVICE_EARN_REFUND_HIRE_MUGGER"):
		case joaat("SERVICE_EARN_REFUND_HIRE_MERCENARY"):
		case joaat("SERVICE_EARN_REFUND_BUY_CARDROPOFF"):
		case joaat("SERVICE_EARN_REFUND_HELI_PICKUP"):
		case joaat("SERVICE_EARN_REFUND_BOAT_PICKUP"):
		case joaat("SERVICE_EARN_REFUND_CLEAR_WANTED"):
		case joaat("SERVICE_EARN_REFUND_HEAD_2_HEAD"):
		case joaat("SERVICE_EARN_REFUND_CHALLENGE"):
		case joaat("SERVICE_EARN_REFUND_SHARE_LAST_JOB"):
		case joaat("SERVICE_EARN_REFUND_LOTTERY"):
		case joaat("SERVICE_EARN_REFUNDAPPEARANCE"):
		case joaat("SERVICE_EARN_REFUNDAMMODROP"):
		case joaat("SERVICE_EARN_REFUND_ARENA_SPEC_BOX_ENTRY"):
			MONEY::NETWORK_REFUND_CASH(Global_4534105[iParam0 /*85*/].f_66.f_1, &(Global_4534105[iParam0 /*85*/].f_14.f_40), &(Global_4534105[iParam0 /*85*/].f_14.f_44), bVar1);
			break;
		case joaat("SERVICE_EARN_ROCKSTAR"):
			MONEY::NETWORK_EARN_FROM_ROCKSTAR(Global_4534105[iParam0 /*85*/].f_66.f_1);
			break;
		case joaat("SERVICE_EARN_AMBIENT_JOB_DESTROY_VEH"):
			MONEY::NETWORK_EARN_FROM_AMBIENT_JOB(Global_4534105[iParam0 /*85*/].f_66.f_1, "AM_DESTROY_VEH", &uVar2);
			break;
		case joaat("SERVICE_EARN_AMBIENT_JOB_DISTRACT_COPS"):
			MONEY::NETWORK_EARN_FROM_AMBIENT_JOB(Global_4534105[iParam0 /*85*/].f_66.f_1, "AM_DISTRACT_COPS", &uVar2);
			break;
		case joaat("SERVICE_EARN_AMBIENT_JOB_PLANE_TAKEDOWN"):
			MONEY::NETWORK_EARN_FROM_AMBIENT_JOB(Global_4534105[iParam0 /*85*/].f_66.f_1, "AM_PLANE_TAKEDOWN", &uVar2);
			break;
		case joaat("SERVICE_SPEND_FAIRGROUND"):
			MONEY::NETWORK_BUY_FAIRGROUND_RIDE(Global_4534105[iParam0 /*85*/].f_66.f_1, Global_4534105[iParam0 /*85*/].f_1, bVar1, bVar0, 0);
			break;
		case joaat("SERVICE_SPEND_ROBBED_BY_MUGGER"):
			MONEY::NETWORK_SPENT_ROBBED_BY_MUGGER(Global_4534105[iParam0 /*85*/].f_66.f_1, false, false, 0);
			break;
		case joaat("SERVICE_EARN_IMPORT_EXPORT"):
			MONEY::NETWORK_EARN_FROM_IMPORT_EXPORT(Global_4534105[iParam0 /*85*/].f_66.f_1, Global_4534105[iParam0 /*85*/].f_3);
			break;
		case joaat("SERVICE_EARN_LESTER_TARGET_KILL"):
			MONEY::NETWORK_EARN_FROM_AI_TARGET_KILL(Global_4534105[iParam0 /*85*/].f_66.f_1, Global_4534105[iParam0 /*85*/]);
			break;
		case joaat("SERVICE_SPEND_REQUEST_JOB"):
			MONEY::NETWORK_SPENT_REQUEST_JOB(Global_4534105[iParam0 /*85*/].f_66.f_1, bVar1, bVar0, Global_4534105[iParam0 /*85*/]);
			break;
		case joaat("SERVICE_SPEND_TAXI"):
			MONEY::NETWORK_SPENT_TAXI(Global_4534105[iParam0 /*85*/].f_66.f_1, bVar1, bVar0, 0);
			break;
		case joaat("SERVICE_EARN_BEND_JOB"):
			MONEY::NETWORK_EARN_FROM_BEND_JOB(Global_4534105[iParam0 /*85*/].f_66.f_1, &(Global_4534105[iParam0 /*85*/].f_14.f_26));
			break;
		case joaat("SERVICE_EARN_CHALLENGE_WIN"):
			MONEY::NETWORK_EARN_FROM_CHALLENGE_WIN(Global_4534105[iParam0 /*85*/].f_66.f_1, &(Global_4534105[iParam0 /*85*/].f_14.f_34), Global_4534105[iParam0 /*85*/].f_4);
			break;
		case joaat("SERVICE_EARN_NOT_BADSPORT"):
			MONEY::NETWORK_EARN_FROM_NOT_BADSPORT(Global_4534105[iParam0 /*85*/].f_66.f_1);
			break;
		case joaat("SERVICE_SPEND_IMPROMPTU_RACE_FEE"):
			MONEY::NETWORK_PAY_MATCH_ENTRY_FEE(Global_4534105[iParam0 /*85*/].f_66.f_1, "RaceToPoint", false, false);
			break;
		case joaat("SERVICE_SPEND_PROSTITUTES"):
			MONEY::NETWORK_SPENT_PROSTITUTES(Global_4534105[iParam0 /*85*/].f_66.f_1, false, false);
			break;
		case joaat("SERVICE_SPEND_PEGASUS_DELIVERY"):
			MONEY::NETWORK_BUY_ITEM(Global_4534105[iParam0 /*85*/].f_66.f_1, Global_4534105[iParam0 /*85*/], Global_4534105[iParam0 /*85*/].f_5, 1, bVar1, &(Global_4534105[iParam0 /*85*/].f_14.f_40), 0, 0, 0, bVar0);
			break;
		case joaat("SERVICE_INVALID"):
			switch (Global_4534105[iParam0 /*85*/].f_66.f_6)
			{
				case joaat("CATEGORY_WEAPON_AMMO"):
					MONEY::NETWORK_BUY_ITEM(Global_4534105[iParam0 /*85*/].f_66.f_1, Global_4534105[iParam0 /*85*/], Global_4534105[iParam0 /*85*/].f_5, 1, bVar1, &(Global_4534105[iParam0 /*85*/].f_14.f_40), 0, 0, 0, bVar0);
					break;
			}
			break;
		case joaat("SERVICE_SPEND_BETTING"):
			MONEY::NETWORK_SPENT_BETTING(Global_4534105[iParam0 /*85*/].f_66.f_1, 0, &(Global_4534105[iParam0 /*85*/].f_14.f_34), false, false);
			break;
		case joaat("SERVICE_EARN_AMBIENT_JOB_HOT_TARGET_DELIVER"):
			MONEY::NETWORK_EARN_FROM_AMBIENT_JOB(Global_4534105[iParam0 /*85*/].f_66.f_1, "AM_HOT_TARGET_DELIVER", &uVar2);
			break;
		case joaat("SERVICE_EARN_AMBIENT_JOB_HOT_TARGET_KILL"):
			MONEY::NETWORK_EARN_FROM_AMBIENT_JOB(Global_4534105[iParam0 /*85*/].f_66.f_1, "AM_HOT_TARGET_KILL", &uVar2);
			break;
		case joaat("SERVICE_EARN_AMBIENT_JOB_URBAN_WARFARE"):
			MONEY::NETWORK_EARN_FROM_AMBIENT_JOB(Global_4534105[iParam0 /*85*/].f_66.f_1, "AM_KILL_LIST", &uVar2);
			break;
		case joaat("SERVICE_EARN_AMBIENT_JOB_CHECKPOINT_COLLECTION"):
			MONEY::NETWORK_EARN_FROM_AMBIENT_JOB(Global_4534105[iParam0 /*85*/].f_66.f_1, "AM_CP_COLLECTION", &uVar2);
			break;
		case joaat("SERVICE_EARN_AMBIENT_JOB_TIME_TRIAL"):
			MONEY::NETWORK_EARN_FROM_AMBIENT_JOB(Global_4534105[iParam0 /*85*/].f_66.f_1, "AM_TIME_TRIAL", &uVar2);
			break;
		case joaat("SERVICE_EARN_AMBIENT_JOB_CHALLENGES"):
			MONEY::NETWORK_EARN_FROM_AMBIENT_JOB(Global_4534105[iParam0 /*85*/].f_66.f_1, "AM_CHALLENGES", &uVar2);
			break;
		case joaat("SERVICE_EARN_AMBIENT_JOB_HELI_HOT_TARGET"):
			MONEY::NETWORK_EARN_FROM_AMBIENT_JOB(Global_4534105[iParam0 /*85*/].f_66.f_1, "AM_HOT_TARGET_HELI", &uVar2);
			break;
		case joaat("SERVICE_EARN_AMBIENT_JOB_DEAD_DROP"):
			MONEY::NETWORK_EARN_FROM_AMBIENT_JOB(Global_4534105[iParam0 /*85*/].f_66.f_1, "AM_DEAD_DROP", &uVar2);
			break;
		case joaat("SERVICE_EARN_AMBIENT_JOB_PENNED_IN"):
			MONEY::NETWORK_EARN_FROM_AMBIENT_JOB(Global_4534105[iParam0 /*85*/].f_66.f_1, "AM_PENNED_IN", &uVar2);
			break;
		case joaat("SERVICE_EARN_AMBIENT_JOB_PASS_PARCEL"):
			MONEY::NETWORK_EARN_FROM_AMBIENT_JOB(Global_4534105[iParam0 /*85*/].f_66.f_1, "AM_PASS_THE_PARCEL", &uVar2);
			break;
		case joaat("SERVICE_EARN_AMBIENT_JOB_BLAST"):
			MONEY::NETWORK_EARN_FROM_AMBIENT_JOB(Global_4534105[iParam0 /*85*/].f_66.f_1, "AM_CRIMINAL_DAMAGE", &uVar2);
			break;
		case joaat("SERVICE_EARN_AMBIENT_JOB_HOT_PROPERTY"):
			MONEY::NETWORK_EARN_FROM_AMBIENT_JOB(Global_4534105[iParam0 /*85*/].f_66.f_1, "AM_HOT_PROPERTY", &uVar2);
			break;
		case joaat("SERVICE_EARN_AMBIENT_JOB_KING"):
			MONEY::NETWORK_EARN_FROM_AMBIENT_JOB(Global_4534105[iParam0 /*85*/].f_66.f_1, "AM_KING_OF_THE_HILL", &uVar2);
			break;
		case joaat("SERVICE_EARN_AMBIENT_JOB_BEAST"):
			MONEY::NETWORK_EARN_FROM_AMBIENT_JOB(Global_4534105[iParam0 /*85*/].f_66.f_1, "AM_HUNT_THE_BEAST", &uVar2);
			break;
		case joaat("SERVICE_EARN_BOSS"):
			MONEY::NETWORK_EARN_BOSS(Global_4534105[iParam0 /*85*/].f_6, Global_4534105[iParam0 /*85*/].f_7, Global_4534105[iParam0 /*85*/].f_66.f_1);
			break;
		case joaat("SERVICE_EARN_GOON"):
			MONEY::NETWORK_EARN_GOON(Global_4534105[iParam0 /*85*/].f_6, Global_4534105[iParam0 /*85*/].f_7, Global_4534105[iParam0 /*85*/].f_66.f_1);
			break;
		case joaat("SERVICE_EARN_BOSS_AGENCY"):
			MONEY::NETWORK_EARN_AGENCY(Global_4534105[iParam0 /*85*/].f_6, Global_4534105[iParam0 /*85*/].f_7, Global_4534105[iParam0 /*85*/].f_66.f_1, Global_4534105[iParam0 /*85*/].f_8);
			break;
		case joaat("SERVICE_EARN_FROM_CONTRABAND"):
			MONEY::NETWORK_EARN_FROM_CONTRABAND(Global_4534105[iParam0 /*85*/].f_66.f_1, Global_4534105[iParam0 /*85*/].f_9);
			break;
		case joaat("SERVICE_EARN_FROM_DESTROYING_CONTRABAND"):
			MONEY::NETWORK_EARN_FROM_DESTROYING_CONTRABAND(Global_4534105[iParam0 /*85*/].f_66.f_1);
			break;
		case joaat("SERVICE_SPEND_ORDER_BODYGUARD_VEHICLE"):
			MONEY::NETWORK_SPENT_ORDER_BODYGUARD_VEHICLE(Global_4534105[iParam0 /*85*/].f_66.f_1, Global_4534105[iParam0 /*85*/], 0, 1);
			break;
		case joaat("SERVICE_SPEND_ORDER_WAREHOUSE_VEHICLE"):
			MONEY::NETWORK_SPENT_ORDER_WAREHOUSE_VEHICLE(Global_4534105[iParam0 /*85*/].f_66.f_1, Global_4534105[iParam0 /*85*/], 0, 1);
			break;
		case joaat("SERVICE_SPEND_JUKEBOX"):
			MONEY::NETWORK_SPENT_JUKEBOX(Global_4534105[iParam0 /*85*/].f_66.f_1, Global_4534105[iParam0 /*85*/], 0, 0);
			break;
		case joaat("SERVICE_SPEND_BUSINESS"):
			MONEY::NETWORK_SPENT_PAY_BUSINESS_SUPPLIES(Global_4534105[iParam0 /*85*/].f_66.f_1, Global_4534105[iParam0 /*85*/], Global_4534105[iParam0 /*85*/].f_1, Global_4534105[iParam0 /*85*/].f_9);
			break;
		case joaat("SERVICE_EARN_FROM_VEHICLE_EXPORT"):
			MONEY::NETWORK_EARN_FROM_VEHICLE_EXPORT(Global_4534105[iParam0 /*85*/].f_66.f_1, Global_4534105[iParam0 /*85*/].f_6, Global_4534105[iParam0 /*85*/].f_7);
			break;
		case joaat("SERVICE_SPEND_VEHICLE_EXPORT_MODS"):
			MONEY::NETWORK_SPENT_VEHICLE_EXPORT_MODS(Global_4534105[iParam0 /*85*/].f_66.f_1, 0, 1, Global_4534105[iParam0 /*85*/].f_6, Global_4534105[iParam0 /*85*/].f_7, Global_4534105[iParam0 /*85*/].f_1, Global_4534105[iParam0 /*85*/], Global_4534105[iParam0 /*85*/].f_10, Global_4534105[iParam0 /*85*/].f_11, Global_4534105[iParam0 /*85*/].f_12);
			break;
		case joaat("SERVICE_SPEND_IMPORT_EXPORT_REPAIR"):
			MONEY::NETWORK_SPENT_IMPORT_EXPORT_REPAIR(Global_4534105[iParam0 /*85*/].f_66.f_1, 0, 1);
			break;
		case joaat("SERVICE_EARN_SMUGGLER_AGENCY"):
			MONEY::NETWORK_EARN_SMUGGLER_AGENCY(Global_4534105[iParam0 /*85*/].f_6, Global_4534105[iParam0 /*85*/].f_7, Global_4534105[iParam0 /*85*/].f_66.f_1, Global_4534105[iParam0 /*85*/].f_8);
			break;
		case joaat("SERVICE_EARN_WAGE_PAYMENT_BONUS"):
			MONEY::NETWORK_EARN_WAGE_PAYMENT_BONUS(Global_4534105[iParam0 /*85*/].f_66.f_1);
			break;
		case joaat("SERVICE_EARN_WAGE_PAYMENT"):
			MONEY::NETWORK_EARN_WAGE_PAYMENT(Global_4534105[iParam0 /*85*/].f_66.f_1, 0);
			break;
		case joaat("SERVICE_EARN_SALVAGE_CHECKPOINT_COLLECTION"):
			MONEY::NETWORK_EARN_FROM_AMBIENT_JOB(Global_4534105[iParam0 /*85*/].f_66.f_1, "GB_SALVAGE", &uVar2);
			break;
		case joaat("SERVICE_EARN_CASHING_OUT"):
			MONEY::NETWORK_EARN_FROM_CASHING_OUT(Global_4534105[iParam0 /*85*/].f_66.f_1);
			break;
		case joaat("SERVICE_EARN_JOB_BONUS_CRIMINAL_MASTERMIND"):
			MONEY::NETWORK_EARN_FROM_CRIMINAL_MASTERMIND(Global_4534105[iParam0 /*85*/].f_66.f_1, &(Global_4534105[iParam0 /*85*/].f_14.f_26), &(Global_4534105[iParam0 /*85*/].f_14.f_34));
			break;
		case joaat("SERVICE_EARN_JOB_BONUS_HEIST_AWARD"):
			MONEY::NETWORK_EARN_HEIST_AWARD(Global_4534105[iParam0 /*85*/].f_66.f_1, &(Global_4534105[iParam0 /*85*/].f_14.f_26), &(Global_4534105[iParam0 /*85*/].f_14.f_34));
			break;
		case joaat("SERVICE_EARN_JOB_BONUS_FIRST_TIME_BONUS"):
			MONEY::NETWORK_EARN_FIRST_TIME_BONUS(Global_4534105[iParam0 /*85*/].f_66.f_1, &(Global_4534105[iParam0 /*85*/].f_14.f_26), &(Global_4534105[iParam0 /*85*/].f_14.f_34));
			break;
		case joaat("SERVICE_SPEND_EMPLOY_ASSASSINS"):
			MONEY::NETWORK_SPENT_EMPLOY_ASSASSINS(Global_4534105[iParam0 /*85*/].f_66.f_1, 0, 1, Global_4534105[iParam0 /*85*/]);
			break;
		case joaat("SERVICE_EARN_REFUND_ORBITAL_MANUAL"):
			MONEY::NETWORK_EARN_TARGET_REFUND(Global_4534105[iParam0 /*85*/].f_66.f_1, 0);
			break;
		case joaat("SERVICE_EARN_REFUND_ORBITAL_AUTO"):
			MONEY::NETWORK_EARN_TARGET_REFUND(Global_4534105[iParam0 /*85*/].f_66.f_1, 1);
			break;
		case joaat("SERVICE_EARN_GANGOPS_WAGES"):
			MONEY::NETWORK_EARN_GANGOPS_WAGES(Global_4534105[iParam0 /*85*/].f_66.f_1, Global_4534105[iParam0 /*85*/]);
			break;
		case joaat("SERVICE_EARN_GANGOPS_WAGES_BONUS"):
			MONEY::NETWORK_EARN_GANGOPS_WAGES_BONUS(Global_4534105[iParam0 /*85*/].f_66.f_1, Global_4534105[iParam0 /*85*/]);
			break;
		case joaat("SERVICE_EARN_GANGOPS_PREP_PARTICIPATION"):
			MONEY::NETWORK_EARN_GANGOPS_PREP_PARTICIPATION(Global_4534105[iParam0 /*85*/].f_66.f_1);
			break;
		case joaat("SERVICE_EARN_GANGOPS_SETUP"):
		case joaat("SERVICE_EARN_GANGOPS_SETUP_FAIL"):
			MONEY::NETWORK_EARN_GANGOPS_SETUP(Global_4534105[iParam0 /*85*/].f_66.f_1, &(Global_4534105[iParam0 /*85*/].f_14.f_26));
			break;
		case joaat("SERVICE_EARN_GANGOPS_FINALE"):
			MONEY::NETWORK_EARN_GANGOPS_FINALE(Global_4534105[iParam0 /*85*/].f_66.f_1, &(Global_4534105[iParam0 /*85*/].f_14.f_26));
			break;
		case joaat("SERVICE_EARN_GANGOPS_AWARD_MASTERMIND_2"):
			MONEY::NETWORK_EARN_GANGOPS_AWARD(Global_4534105[iParam0 /*85*/].f_66.f_1, &(Global_4534105[iParam0 /*85*/].f_14.f_26), 0);
			break;
		case joaat("SERVICE_EARN_GANGOPS_AWARD_MASTERMIND_3"):
			MONEY::NETWORK_EARN_GANGOPS_AWARD(Global_4534105[iParam0 /*85*/].f_66.f_1, &(Global_4534105[iParam0 /*85*/].f_14.f_26), 1);
			break;
		case joaat("SERVICE_EARN_GANGOPS_AWARD_MASTERMIND_4"):
			MONEY::NETWORK_EARN_GANGOPS_AWARD(Global_4534105[iParam0 /*85*/].f_66.f_1, &(Global_4534105[iParam0 /*85*/].f_14.f_26), 2);
			break;
		case joaat("SERVICE_EARN_GANGOPS_AWARD_LOYALTY_AWARD_2"):
			MONEY::NETWORK_EARN_GANGOPS_AWARD(Global_4534105[iParam0 /*85*/].f_66.f_1, &(Global_4534105[iParam0 /*85*/].f_14.f_26), 3);
			break;
		case joaat("SERVICE_EARN_GANGOPS_AWARD_LOYALTY_AWARD_3"):
			MONEY::NETWORK_EARN_GANGOPS_AWARD(Global_4534105[iParam0 /*85*/].f_66.f_1, &(Global_4534105[iParam0 /*85*/].f_14.f_26), 4);
			break;
		case joaat("SERVICE_EARN_GANGOPS_AWARD_LOYALTY_AWARD_4"):
			MONEY::NETWORK_EARN_GANGOPS_AWARD(Global_4534105[iParam0 /*85*/].f_66.f_1, &(Global_4534105[iParam0 /*85*/].f_14.f_26), 5);
			break;
		case joaat("SERVICE_EARN_GANGOPS_AWARD_FIRST_TIME_XM_BASE"):
			MONEY::NETWORK_EARN_GANGOPS_AWARD(Global_4534105[iParam0 /*85*/].f_66.f_1, &(Global_4534105[iParam0 /*85*/].f_14.f_26), 6);
			break;
		case joaat("SERVICE_EARN_GANGOPS_AWARD_FIRST_TIME_XM_SUBMARINE"):
			MONEY::NETWORK_EARN_GANGOPS_AWARD(Global_4534105[iParam0 /*85*/].f_66.f_1, &(Global_4534105[iParam0 /*85*/].f_14.f_26), 7);
			break;
		case joaat("SERVICE_EARN_GANGOPS_AWARD_FIRST_TIME_XM_SILO"):
			MONEY::NETWORK_EARN_GANGOPS_AWARD(Global_4534105[iParam0 /*85*/].f_66.f_1, &(Global_4534105[iParam0 /*85*/].f_14.f_26), 8);
			break;
		case joaat("SERVICE_EARN_GANGOPS_AWARD_SUPPORTING"):
			MONEY::NETWORK_EARN_GANGOPS_AWARD(Global_4534105[iParam0 /*85*/].f_66.f_1, &(Global_4534105[iParam0 /*85*/].f_14.f_26), 9);
			break;
		case joaat("SERVICE_EARN_GANGOPS_AWARD_ORDER"):
			MONEY::NETWORK_EARN_GANGOPS_AWARD(Global_4534105[iParam0 /*85*/].f_66.f_1, &(Global_4534105[iParam0 /*85*/].f_14.f_26), 10);
			break;
		case joaat("SERVICE_EARN_GANGOPS_ELITE_XM_BASE"):
			MONEY::NETWORK_EARN_GANGOPS_ELITE(Global_4534105[iParam0 /*85*/].f_66.f_1, &(Global_4534105[iParam0 /*85*/].f_14.f_26), 0);
			break;
		case joaat("SERVICE_EARN_GANGOPS_ELITE_XM_SUBMARINE"):
			MONEY::NETWORK_EARN_GANGOPS_ELITE(Global_4534105[iParam0 /*85*/].f_66.f_1, &(Global_4534105[iParam0 /*85*/].f_14.f_26), 1);
			break;
		case joaat("SERVICE_EARN_GANGOPS_ELITE_XM_SILO"):
			MONEY::NETWORK_EARN_GANGOPS_ELITE(Global_4534105[iParam0 /*85*/].f_66.f_1, &(Global_4534105[iParam0 /*85*/].f_14.f_26), 2);
			break;
		case joaat("SERVICE_EARN_GANGOPS_RIVAL_DELIVERY"):
			break;
		case joaat("SERVICE_SPEND_GANGOPS_REPAIR_COST"):
			break;
		case joaat("SERVICE_EARN_DOOMSDAY_FINALE_BONUS"):
			MONEY::NETWORK_EARN_DOOMSDAY_FINALE_BONUS(Global_4534105[iParam0 /*85*/].f_66.f_1, Global_4534105[iParam0 /*85*/].f_9);
			break;
		case joaat("SERVICE_SPEND_GANGOPS_SKIP_MISSION"):
			MONEY::NETWORK_SPEND_GANGOPS_SKIP_MISSION(Global_4534105[iParam0 /*85*/].f_9, Global_4534105[iParam0 /*85*/].f_66.f_1, 0, 1);
			break;
		case joaat("SERVICE_SPEND_GANGOPS_START_STRAND"):
			MONEY::NETWORK_SPEND_GANGOPS_START_STRAND(Global_4534105[iParam0 /*85*/].f_9, Global_4534105[iParam0 /*85*/].f_66.f_1, false, true);
			break;
		case joaat("SERVICE_EARN_BOUNTY_HUNTER_REWARD"):
			MONEY::NETWORK_EARN_BOUNTY_HUNTER_REWARD(Global_4534105[iParam0 /*85*/].f_66.f_1);
			break;
		case joaat("SERVICE_SPEND_NIGHTCLUB_ENTRY_FEE"):
			if (__LIB_0__::func_156(PLAYER::INT_TO_PLAYERINDEX(Global_4534105[iParam0 /*85*/]), 0, 0))
			{
				MONEY::NETWORK_SPENT_NIGHTCLUB_ENTRY_FEE(PLAYER::INT_TO_PLAYERINDEX(Global_4534105[iParam0 /*85*/]), Global_4534105[iParam0 /*85*/].f_1, Global_4534105[iParam0 /*85*/].f_66.f_1, false, true);
			}
			break;
		case joaat("SERVICE_SPEND_NIGHTCLUB_DJ_REHIRE"):
			MONEY::NETWORK_SPENT_REHIRE_DJ(Global_4534105[iParam0 /*85*/].f_66.f_1, Global_4534105[iParam0 /*85*/], false, true);
			break;
		case joaat("SERVICE_SPEND_NIGHTCLUB_BAR_DRINK"):
			MONEY::NETWORK_SPEND_NIGHTCLUB_BAR_DRINK(Global_4534105[iParam0 /*85*/], Global_4534105[iParam0 /*85*/].f_66.f_1, false, true);
			break;
		case joaat("SERVICE_EARN_FROM_BUSINESS_BATTLE"):
			MONEY::NETWORK_EARN_FROM_BUSINESS_BATTLE(Global_4534105[iParam0 /*85*/].f_66.f_1);
			break;
		case joaat("SERVICE_EARN_FROM_CLUB_MANAGEMENT_PARTICIPATION"):
			MONEY::NETWORK_EARN_FROM_CLUB_MANAGEMENT_PARTICIPATION(Global_4534105[iParam0 /*85*/].f_66.f_1, Global_4534105[iParam0 /*85*/]);
			break;
		case joaat("SERVICE_EARN_FROM_FMBB_PHONECALL_MISSION"):
			MONEY::NETWORK_EARN_FROM_FMBB_PHONECALL_MISSION(Global_4534105[iParam0 /*85*/].f_66.f_1);
			break;
		case joaat("SERVICE_EARN_FROM_BUSINESS_HUB_SELL"):
			MONEY::NETWORK_EARN_FROM_BUSINESS_HUB_SELL(Global_4534105[iParam0 /*85*/].f_66.f_1, Global_4534105[iParam0 /*85*/].f_1, Global_4534105[iParam0 /*85*/].f_9);
			break;
		case joaat("SERVICE_EARN_FROM_FMBB_BOSS_WORK"):
			MONEY::NETWORK_EARN_FROM_FMBB_BOSS_WORK(Global_4534105[iParam0 /*85*/].f_66.f_1);
			break;
		case joaat("SERVICE_EARN_FMBB_WAGE_BONUS"):
			MONEY::NETWORK_EARN_FMBB_WAGE_BONUS(Global_4534105[iParam0 /*85*/].f_66.f_1);
			break;
		case joaat("SERVICE_SPEND_ARENA_JOIN_SPECTATOR"):
			MONEY::NETWORK_SPENT_ARENA_JOIN_SPECTATOR(Global_4534105[iParam0 /*85*/].f_66.f_1, Global_4534105[iParam0 /*85*/].f_66.f_15, false, true);
			break;
		case joaat("SERVICE_EARN_BB_EVENT_BONUS"):
			MONEY::NETWORK_EARN_BB_EVENT_BONUS(Global_4534105[iParam0 /*85*/].f_66.f_1);
			break;
		case joaat("SERVICE_EARN_ARENA_SKILL_LVL_AWARD"):
			MONEY::NETWORK_EARN_ARENA_SKILL_LEVEL_PROGRESSION(Global_4534105[iParam0 /*85*/].f_66.f_1, Global_4534105[iParam0 /*85*/].f_66.f_15);
			break;
		case joaat("SERVICE_EARN_ARENA_CAREER_TIER_PROGRESSION_1"):
		case joaat("SERVICE_EARN_ARENA_CAREER_TIER_PROGRESSION_2"):
		case joaat("SERVICE_EARN_ARENA_CAREER_TIER_PROGRESSION_3"):
		case joaat("SERVICE_EARN_ARENA_CAREER_TIER_PROGRESSION_4"):
			MONEY::NETWORK_EARN_ARENA_CAREER_PROGRESSION(Global_4534105[iParam0 /*85*/].f_66.f_1, Global_4534105[iParam0 /*85*/].f_66.f_15);
			break;
		case joaat("SERVICE_SPEND_ARENA_SPECTATOR_BOX"):
			MONEY::NETWORK_SPEND_ARENA_SPECTATOR_BOX(Global_4534105[iParam0 /*85*/].f_66.f_1, Global_4534105[iParam0 /*85*/], false, true);
			break;
		case joaat("SERVICE_SPEND_MAKE_IT_RAIN"):
			MONEY::NETWORK_SPEND_MAKE_IT_RAIN(Global_4534105[iParam0 /*85*/].f_66.f_1, false, false);
			break;
		case joaat("SERVICE_EARN_SPIN_THE_WHEEL_CASH"):
			MONEY::NETWORK_EARN_SPIN_THE_WHEEL_CASH(Global_4534105[iParam0 /*85*/].f_66.f_1);
			break;
		case joaat("SERVICE_SPEND_SPIN_THE_WHEEL_PAYMENT"):
			MONEY::NETWORK_SPEND_SPIN_THE_WHEEL_PAYMENT(Global_4534105[iParam0 /*85*/].f_66.f_1, 0, true);
			break;
		case joaat("SERVICE_EARN_ASSASSINATE_TARGET_KILLED"):
			MONEY::NETWORK_EARN_ARENA_WAR_ASSASSINATE_TARGET(Global_4534105[iParam0 /*85*/].f_66.f_1);
			break;
		case joaat("SERVICE_EARN_ARENA_WAR"):
			MONEY::NETWORK_EARN_ARENA_WAR(Global_4534105[iParam0 /*85*/].f_66.f_1, Global_4534105[iParam0 /*85*/], Global_4534105[iParam0 /*85*/].f_66.f_16, Global_4534105[iParam0 /*85*/].f_1);
			break;
		case joaat("SERVICE_EARN_AMBIENT_JOB_RC_TIME_TRIAL"):
			MONEY::NETWORK_EARN_RC_TIME_TRIAL(Global_4534105[iParam0 /*85*/].f_66.f_1);
			break;
		case joaat("SERVICE_EARN_DAILY_OBJECTIVE_EVENT"):
			MONEY::NETWORK_EARN_DAILY_OBJECTIVE_EVENT(Global_4534105[iParam0 /*85*/].f_66.f_1);
			break;
		case joaat("SERVICE_EARN_COLLECTABLES_ACTION_FIGURES"):
			MONEY::NETWORK_EARN_COLLECTABLES_ACTION_FIGURES(Global_4534105[iParam0 /*85*/].f_66.f_1);
			break;
		case joaat("SERVICE_EARN_CASINO_MISSION_REWARD"):
			MONEY::NETWORK_EARN_CASINO_MISSION_REWARD(Global_4534105[iParam0 /*85*/].f_66.f_1);
			break;
		case joaat("SERVICE_EARN_CASINO_STORY_MISSION_REWARD"):
			MONEY::NETWORK_EARN_CASINO_STORY_MISSION_REWARD(Global_4534105[iParam0 /*85*/].f_66.f_1);
			break;
		case joaat("SERVICE_EARN_CASINO_AWARD_MISSION_ONE_FIRST_TIME"):
		case joaat("SERVICE_EARN_CASINO_AWARD_MISSION_TWO_FIRST_TIME"):
		case joaat("SERVICE_EARN_CASINO_AWARD_MISSION_THREE_FIRST_TIME"):
		case joaat("SERVICE_EARN_CASINO_AWARD_MISSION_FOUR_FIRST_TIME"):
		case joaat("SERVICE_EARN_CASINO_AWARD_MISSION_FIVE_FIRST_TIME"):
		case joaat("SERVICE_EARN_CASINO_AWARD_MISSION_SIX_FIRST_TIME"):
		case joaat("SERVICE_EARN_CASINO_AWARD_STRAIGHT_FLUSH"):
		case joaat("SERVICE_EARN_CASINO_AWARD_TOP_PAIR"):
		case joaat("SERVICE_EARN_CASINO_AWARD_FULL_HOUSE"):
		case joaat("SERVICE_EARN_CASINO_AWARD_LUCKY_LUCKY"):
		case joaat("SERVICE_EARN_CASINO_AWARD_HIGH_ROLLER_BRONZE"):
		case joaat("SERVICE_EARN_CASINO_AWARD_HIGH_ROLLER_SILVER"):
		case joaat("SERVICE_EARN_CASINO_AWARD_HIGH_ROLLER_GOLD"):
		case joaat("SERVICE_EARN_CASINO_AWARD_HIGH_ROLLER_PLATINUM"):
			MONEY::NETWORK_EARN_CASINO_AWARD(Global_4534105[iParam0 /*85*/].f_66.f_1, Global_4534105[iParam0 /*85*/]);
			break;
		case joaat("SERVICE_SPEND_CASINO_GENERIC"):
			MONEY::NETWORK_SPEND_CASINO_GENERIC(Global_4534105[iParam0 /*85*/].f_66.f_1, 0, 1, &(Global_4534105[iParam0 /*85*/].f_14.f_26), Global_4534105[iParam0 /*85*/]);
			break;
		case joaat("SERVICE_SPEND_ARCADE_GAME"):
			MONEY::NETWORK_SPEND_PLAY_ARCADE(Global_4534105[iParam0 /*85*/].f_66.f_1, 0, 1, Global_4534105[iParam0 /*85*/], Global_4534105[iParam0 /*85*/].f_66.f_1);
			break;
		case joaat("SERVICE_SPEND_ARCADE_GENERIC"):
			MONEY::NETWORK_SPEND_ARCADE(Global_4534105[iParam0 /*85*/].f_66.f_1, 0, 1, Global_4534105[iParam0 /*85*/], Global_4534105[iParam0 /*85*/].f_66.f_1);
			break;
		case joaat("SERVICE_SPEND_CASINO_HEIST_SKIP_MISSION"):
			MONEY::NETWORK_SPEND_CASINO_HEIST_SKIP_MISSION(Global_4534105[iParam0 /*85*/].f_9, Global_4534105[iParam0 /*85*/].f_66.f_1, 0, 1);
			break;
		case joaat("SERVICE_SPEND_CASINO_HEIST_SETUP_HEIST"):
			MONEY::NETWORK_SPEND_CASINO_HEIST(Global_4534105[iParam0 /*85*/].f_66.f_1, 0, 1, 1, Global_4534105[iParam0 /*85*/].f_66.f_1, 0, 0, 0, 0, 0, 0);
			break;
		case joaat("SERVICE_SPEND_CASINO_HEIST_CASINO_MODEL"):
			MONEY::NETWORK_SPEND_CASINO_HEIST(Global_4534105[iParam0 /*85*/].f_66.f_1, 0, 1, 0, 0, 1, Global_4534105[iParam0 /*85*/].f_66.f_1, 0, 0, 0, 0);
			break;
		case joaat("SERVICE_SPEND_CASINO_HEIST_VAULT_DOOR"):
			MONEY::NETWORK_SPEND_CASINO_HEIST(Global_4534105[iParam0 /*85*/].f_66.f_1, 0, 1, 0, 0, 0, 0, 1, Global_4534105[iParam0 /*85*/].f_66.f_1, 0, 0);
			break;
		case joaat("SERVICE_SPEND_CASINO_HEIST_DOOR_SECURITY"):
			MONEY::NETWORK_SPEND_CASINO_HEIST(Global_4534105[iParam0 /*85*/].f_66.f_1, 0, 1, 0, 0, 0, 0, 0, 0, 1, Global_4534105[iParam0 /*85*/].f_66.f_1);
			break;
		case joaat("SERVICE_EARN_DEBUG"):
			break;
	}
	switch (Global_4534105[iParam0 /*85*/].f_66.f_4)
	{
		case joaat("SERVICE_EARN_CASINO_HEIST_SETUP_MISSION"):
			MONEY::NETWORK_EARN_CASINO_HEIST(Global_4534105[iParam0 /*85*/].f_66.f_1, 0, 0, 1, Global_4534105[iParam0 /*85*/].f_66.f_1, 0, 0);
			break;
		case joaat("SERVICE_EARN_CASINO_HEIST_PREP_MISSION"):
			MONEY::NETWORK_EARN_CASINO_HEIST(Global_4534105[iParam0 /*85*/].f_66.f_1, 1, Global_4534105[iParam0 /*85*/].f_66.f_1, 0, 0, 0, 0);
			break;
		case joaat("SERVICE_EARN_CASINO_HEIST_FINALE"):
			MONEY::NETWORK_EARN_CASINO_HEIST(Global_4534105[iParam0 /*85*/].f_66.f_1, 0, 0, 0, 0, 1, Global_4534105[iParam0 /*85*/].f_66.f_1);
			break;
		case joaat("SERVICE_EARN_CASINO_HEIST_AWARD_SMASH_N_GRAB"):
		case joaat("SERVICE_EARN_CASINO_HEIST_AWARD_IN_PLAIN_SIGHT"):
		case joaat("SERVICE_EARN_CASINO_HEIST_AWARD_UNDETECTED"):
		case joaat("SERVICE_EARN_CASINO_HEIST_AWARD_ALL_ROUNDER"):
		case joaat("SERVICE_EARN_CASINO_HEIST_AWARD_ELITE_THIEF"):
		case joaat("SERVICE_EARN_CASINO_HEIST_AWARD_PROFESSIONAL"):
			MONEY::NETWORK_EARN_CASINO_HEIST_AWARDS(Global_4534105[iParam0 /*85*/].f_66.f_1, Global_4534105[iParam0 /*85*/], Global_4534105[iParam0 /*85*/].f_66.f_1, 0, 0);
			break;
		case joaat("SERVICE_EARN_CASINO_HEIST_ELITE_STEALTH"):
		case joaat("SERVICE_EARN_CASINO_HEIST_ELITE_SUBTERFUGE"):
		case joaat("SERVICE_EARN_CASINO_HEIST_ELITE_DIRECT"):
			MONEY::NETWORK_EARN_CASINO_HEIST_AWARDS(Global_4534105[iParam0 /*85*/].f_66.f_1, 0, 0, Global_4534105[iParam0 /*85*/], Global_4534105[iParam0 /*85*/].f_66.f_1);
			break;
		case joaat("SERVICE_EARN_COLLECTABLE_ITEM"):
			MONEY::NETWORK_EARN_COLLECTABLE_ITEM(Global_4534105[iParam0 /*85*/].f_66.f_1, Global_4534105[iParam0 /*85*/]);
			break;
		case joaat("SERVICE_EARN_COLLECTABLE_COMPLETED_COLLECTION"):
			MONEY::NETWORK_EARN_COLLECTABLE_COMPLETED_COLLECTION(Global_4534105[iParam0 /*85*/].f_66.f_1, Global_4534105[iParam0 /*85*/]);
			break;
		case joaat("SERVICE_SPEND_ISLAND_HEIST_SUPPORT_AIRSTRIKE"):
			Var3.f_0 = Global_4534105[iParam0 /*85*/].f_66.f_1;
			MONEY::NETWORK_SPEND_ISLAND_HEIST(Global_4534105[iParam0 /*85*/].f_66.f_1, 0, 1, &Var3);
			break;
		case joaat("SERVICE_SPEND_ISLAND_HEIST_SUPPORT_HEAVY_WEAPON"):
			Var3.f_1 = Global_4534105[iParam0 /*85*/].f_66.f_1;
			MONEY::NETWORK_SPEND_ISLAND_HEIST(Global_4534105[iParam0 /*85*/].f_66.f_1, 0, 1, &Var3);
			break;
		case joaat("SERVICE_SPEND_ISLAND_HEIST_SUPPORT_SNIPER"):
			Var3.f_2 = Global_4534105[iParam0 /*85*/].f_66.f_1;
			MONEY::NETWORK_SPEND_ISLAND_HEIST(Global_4534105[iParam0 /*85*/].f_66.f_1, 0, 1, &Var3);
			break;
		case joaat("SERVICE_SPEND_ISLAND_HEIST_SUPPORT_AIR_SUPPORT"):
			Var3.f_3 = Global_4534105[iParam0 /*85*/].f_66.f_1;
			MONEY::NETWORK_SPEND_ISLAND_HEIST(Global_4534105[iParam0 /*85*/].f_66.f_1, 0, 1, &Var3);
			break;
		case joaat("SERVICE_SPEND_ISLAND_HEIST_SUPPORT_DRONE"):
			Var3.f_4 = Global_4534105[iParam0 /*85*/].f_66.f_1;
			MONEY::NETWORK_SPEND_ISLAND_HEIST(Global_4534105[iParam0 /*85*/].f_66.f_1, 0, 1, &Var3);
			break;
		case joaat("SERVICE_SPEND_ISLAND_HEIST_SUPPORT_WEAPON_STASH"):
			Var3.f_5 = Global_4534105[iParam0 /*85*/].f_66.f_1;
			MONEY::NETWORK_SPEND_ISLAND_HEIST(Global_4534105[iParam0 /*85*/].f_66.f_1, 0, 1, &Var3);
			break;
		case joaat("SERVICE_SPEND_ISLAND_HEIST_SUPPRESSORS"):
			Var3.f_6 = Global_4534105[iParam0 /*85*/].f_66.f_1;
			MONEY::NETWORK_SPEND_ISLAND_HEIST(Global_4534105[iParam0 /*85*/].f_66.f_1, 0, 1, &Var3);
			break;
		case joaat("SERVICE_SPEND_ISLAND_HEIST_REPLAY"):
			Var3.f_7 = Global_4534105[iParam0 /*85*/].f_66.f_1;
			MONEY::NETWORK_SPEND_ISLAND_HEIST(Global_4534105[iParam0 /*85*/].f_66.f_1, 0, 1, &Var3);
			break;
		case joaat("SERVICE_SPEND_BEACH_PARTY_GENERIC"):
			MONEY::NETWORK_SPEND_BEACH_PARTY(Global_4534105[iParam0 /*85*/]);
			break;
		case joaat("SERVICE_EARN_COLLECTABLES_SIGNAL_JAMMERS"):
		case joaat("SERVICE_EARN_COLLECTABLES_SIGNAL_JAMMERS_COMPLETE"):
			MONEY::NETWORK_EARN_CASINO_COLLECTABLE_COMPLETED_COLLECTION(Global_4534105[iParam0 /*85*/].f_66.f_1);
			break;
		case joaat("SERVICE_EARN_ISLAND_HEIST_FINALE"):
		case joaat("SERVICE_EARN_ISLAND_HEIST_ELITE_CHALLENGE"):
		case joaat("SERVICE_EARN_ISLAND_HEIST_AWARD_PROFESSIONAL"):
		case joaat("SERVICE_EARN_ISLAND_HEIST_AWARD_ELITE_THIEF"):
		case joaat("SERVICE_EARN_ISLAND_HEIST_AWARD_THE_ISLAND_HEIST"):
		case joaat("SERVICE_EARN_ISLAND_HEIST_AWARD_GOING_ALONE"):
		case joaat("SERVICE_EARN_ISLAND_HEIST_AWARD_TEAM_WORK"):
		case joaat("SERVICE_EARN_ISLAND_HEIST_AWARD_CAT_BURGLAR"):
		case joaat("SERVICE_EARN_ISLAND_HEIST_AWARD_PRO_THIEF"):
		case joaat("SERVICE_EARN_ISLAND_HEIST_AWARD_MIXING_IT_UP"):
			MONEY::NETWORK_EARN_ISLAND_HEIST(Global_4534105[iParam0 /*85*/].f_66.f_1, Global_4534105[iParam0 /*85*/].f_66.f_15, Global_4534105[iParam0 /*85*/].f_66.f_16, Global_4534105[iParam0 /*85*/], 0, 0);
			break;
		case joaat("SERVICE_EARN_ISLAND_HEIST_PREP"):
			MONEY::NETWORK_EARN_ISLAND_HEIST(Global_4534105[iParam0 /*85*/].f_66.f_1, 0, 0, 0, Global_4534105[iParam0 /*85*/].f_66.f_15, Global_4534105[iParam0 /*85*/].f_66.f_16);
			break;
		case joaat("SERVICE_EARN_ISLAND_HEIST_DJ_MISSION"):
			MONEY::NETWORK_EARN_FROM_ISLAND_HEIST_DJ_MISSION(Global_4534105[iParam0 /*85*/].f_66.f_1, Global_4534105[iParam0 /*85*/].f_66.f_16);
			break;
		case joaat("SERVICE_SPEND_SUBMARINE_UTILITY_FEE"):
			MONEY::NETWORK_SPEND_SUBMARINE(Global_4534105[iParam0 /*85*/].f_66.f_1, 0, 1, Global_4534105[iParam0 /*85*/].f_66.f_1, 0, 0);
			break;
		case joaat("SERVICE_SPEND_SUBMARINE_BOAT"):
			MONEY::NETWORK_SPEND_SUBMARINE(Global_4534105[iParam0 /*85*/].f_66.f_1, 0, 1, 0, Global_4534105[iParam0 /*85*/].f_66.f_1, 0);
			break;
		case joaat("SERVICE_SPEND_SUBMARINE_RELOCATION"):
			MONEY::NETWORK_SPEND_SUBMARINE(Global_4534105[iParam0 /*85*/].f_66.f_1, 0, 1, 0, 0, Global_4534105[iParam0 /*85*/].f_66.f_1);
			break;
		case joaat("SERVICE_SPEND_CASINO_CLUB_GENERIC"):
			MONEY::NETWORK_SPEND_CASINO_CLUB(Global_4534105[iParam0 /*85*/].f_66.f_1, 0, true, Global_4534105[iParam0 /*85*/], Global_4534105[iParam0 /*85*/].f_10, Global_4534105[iParam0 /*85*/].f_11, Global_4534105[iParam0 /*85*/].f_12, Global_4534105[iParam0 /*85*/].f_6, Global_4534105[iParam0 /*85*/].f_7);
			break;
		case joaat("SERVICE_EARN_TUNER_ROBBERY_PREP"):
			MONEY::NETWORK_EARN_TUNER_ROBBERY(Global_4534105[iParam0 /*85*/].f_66.f_1, -1, -1, Global_4534105[iParam0 /*85*/].f_66.f_1, Global_4534105[iParam0 /*85*/].f_66.f_16);
			break;
		case joaat("SERVICE_EARN_TUNER_ROBBERY_FINALE"):
			MONEY::NETWORK_EARN_TUNER_ROBBERY(Global_4534105[iParam0 /*85*/].f_66.f_1, Global_4534105[iParam0 /*85*/].f_66.f_1, MISC::GET_HASH_KEY(&(Global_4534105[iParam0 /*85*/].f_14.f_26)), -1, -1);
			break;
		case joaat("SERVICE_EARN_TUNER_CAR_CLUB_MEMBERSHIP"):
			MONEY::NETWORK_EARN_CARCLUB_MEMBERSHIP(Global_4534105[iParam0 /*85*/].f_66.f_1);
			break;
		case joaat("SERVICE_EARN_TUNER_DAILY_VEHICLE"):
			MONEY::NETWORK_EARN_DAILY_VEHICLE(Global_4534105[iParam0 /*85*/].f_66.f_1, Global_4534105[iParam0 /*85*/].f_66.f_16);
			break;
		case joaat("SERVICE_EARN_TUNER_DAILY_VEHICLE_BONUS"):
			MONEY::NETWORK_EARN_DAILY_VEHICLE_BONUS(Global_4534105[iParam0 /*85*/].f_66.f_1);
			break;
		case joaat("SERVICE_EARN_TUNER_AWARD_UNION_DEPOSITORY"):
		case joaat("SERVICE_EARN_TUNER_AWARD_MILITARY_CONVOY"):
		case joaat("SERVICE_EARN_TUNER_AWARD_FLEECA_BANK"):
		case joaat("SERVICE_EARN_TUNER_AWARD_FREIGHT_TRAIN"):
		case joaat("SERVICE_EARN_TUNER_AWARD_BOLINGBROKE_ASS"):
		case joaat("SERVICE_EARN_TUNER_AWARD_IAA_RAID"):
		case joaat("SERVICE_EARN_TUNER_AWARD_METH_JOB"):
		case joaat("SERVICE_EARN_TUNER_AWARD_BUNKER_RAID"):
			MONEY::NETWORK_EARN_TUNER_AWARD(Global_4534105[iParam0 /*85*/].f_66.f_1, &(Global_4534105[iParam0 /*85*/].f_14.f_26), &(Global_4534105[iParam0 /*85*/].f_14.f_44));
			break;
		case joaat("SERVICE_SPEND_INTERACTION_MENU_ABILITY"):
			MONEY::NETWORK_SPEND_INTERACTION_MENU_ABILITY(Global_4534105[iParam0 /*85*/].f_66.f_1, 0, 1, Global_4534105[iParam0 /*85*/].f_66.f_16);
			break;
		case joaat("SERVICE_EARN_AUTO_SHOP_DELIVERY_AWARD"):
			MONEY::NETWORK_EARN_AUTOSHOP_INCOME(Global_4534105[iParam0 /*85*/].f_66.f_1, 277);
			break;
		case joaat("SERVICE_SPEND_BUSINESS_EXPENSES"):
			MONEY::NETWORK_SPEND_BUSINESS_PROPERTY_FEES(Global_4534105[iParam0 /*85*/].f_66.f_1, 0, 1, &Global_4539859);
			break;
		case joaat("SERVICE_EARN_AGENCY_SECURITY_CONTRACT"):
			MONEY::NETWORK_EARN_AGENCY_CONTRACT(Global_4534105[iParam0 /*85*/].f_66.f_1, Global_4534105[iParam0 /*85*/].f_66.f_16);
			break;
		case joaat("SERVICE_EARN_AGENCY_PAYPHONE_HIT"):
			MONEY::NETWORK_EARN_AGENCY_PHONE(Global_4534105[iParam0 /*85*/].f_66.f_15, Global_4534105[iParam0 /*85*/], Global_4534105[iParam0 /*85*/].f_66.f_16);
			break;
		case joaat("SERVICE_EARN_AGENCY_STORY_PREP"):
			MONEY::NETWORK_EARN_FIXER_PREP(Global_4534105[iParam0 /*85*/].f_66.f_1, Global_4534105[iParam0 /*85*/].f_66.f_16);
			break;
		case joaat("SERVICE_EARN_AGENCY_STORY_FINALE"):
			MONEY::NETWORK_EARN_FIXER_FINALE(Global_4534105[iParam0 /*85*/].f_66.f_1, Global_4534105[iParam0 /*85*/].f_66.f_16);
			break;
		case joaat("SERVICE_EARN_FIXER_AWARD_SEC_CON"):
			MONEY::NETWORK_EARN_AWARD_CONTRACT(Global_4534105[iParam0 /*85*/].f_66.f_1, Global_4534105[iParam0 /*85*/].f_66.f_16);
			break;
		case joaat("SERVICE_EARN_FIXER_AWARD_PHONE_HIT"):
			MONEY::NETWORK_EARN_AWARD_PHONE(Global_4534105[iParam0 /*85*/].f_66.f_1, Global_4534105[iParam0 /*85*/].f_66.f_16);
			break;
		case joaat("SERVICE_EARN_FIXER_AWARD_AGENCY_STORY"):
			MONEY::NETWORK_EARN_AWARD_FIXER_MISSION(Global_4534105[iParam0 /*85*/].f_66.f_1, Global_4534105[iParam0 /*85*/].f_66.f_16);
			break;
		case joaat("SERVICE_EARN_FIXER_AWARD_SHORT_TRIP"):
			MONEY::NETWORK_EARN_AWARD_SHORT_TRIP(Global_4534105[iParam0 /*85*/].f_66.f_1, Global_4534105[iParam0 /*85*/].f_66.f_16);
			break;
		case joaat("SERVICE_EARN_FIXER_RIVAL_DELIVERY"):
			MONEY::NETWORK_EARN_FIXER_RIVAL_DELIVERY(Global_4534105[iParam0 /*85*/].f_66.f_1, Global_4534105[iParam0 /*85*/].f_66.f_16);
			break;
		case joaat("SERVICE_SPEND_REQUEST_SUPPLY"):
			MONEY::NETWORK_SPEND_SUPPLY(Global_4534105[iParam0 /*85*/].f_66.f_1, 0, 1, Global_4534105[iParam0 /*85*/].f_66.f_15);
			break;
		case joaat("SERVICE_SPEND_REQUEST_SOURCE_MOTORCYCLE"):
			MONEY::NETWORK_SPEND_SOURCE_BIKE(Global_4534105[iParam0 /*85*/].f_66.f_1, 0, 1, Global_4534105[iParam0 /*85*/].f_66.f_15);
			break;
		case joaat("SERVICE_SPEND_REQUEST_OUT_OF_SIGHT"):
			MONEY::NETWORK_SPEND_HIDDEN(Global_4534105[iParam0 /*85*/].f_66.f_1, 0, 1, Global_4534105[iParam0 /*85*/].f_66.f_15);
			break;
		case joaat("SERVICE_EARN_MUSIC_STUDIO_SHORT_TRIP"):
			MONEY::NETWORK_EARN_FIXER_AGENCY_SHORT_TRIP(Global_4534105[iParam0 /*85*/].f_66.f_1, Global_4534105[iParam0 /*85*/].f_66.f_16);
			break;
		case joaat("SERVICE_SPEND_FIXER_HQ_CONCIERGE"):
			MONEY::NETWORK_SPEND_AGENCY(Global_4534105[iParam0 /*85*/].f_66.f_1, 0, 1, Global_4534105[iParam0 /*85*/].f_66.f_16, Global_4534105[iParam0 /*85*/].f_66.f_15);
			break;
		case joaat("SERVICE_SPEND_REQUEST_COMPANY_SUV"):
			MONEY::NETWORK_SPEND_COMP_SUV(Global_4534105[iParam0 /*85*/].f_66.f_1, 0, 1, Global_4534105[iParam0 /*85*/]);
			break;
		case joaat("SERVICE_EARN_NCLUB_TROUBLEMAKER"):
			MONEY::NETWORK_EARN_FROM_CLUB_MANAGEMENT_PARTICIPATION(Global_4534105[iParam0 /*85*/].f_66.f_1, 1989714117);
			break;
		case joaat("SERVICE_SPEND_AGENT_14_VEHICLE_REQUEST"):
			MONEY::NETWORK_SPEND_GUNRUNNING(Global_4534105[iParam0 /*85*/].f_66.f_1, 0, 1, Global_4534105[iParam0 /*85*/]);
			break;
		case joaat("SERVICE_EARN_SIGHTSEEING_REWARD"):
			MONEY::NETWORK_EARN_SIGHTSEEING_REWARD(Global_4534105[iParam0 /*85*/].f_66.f_1, Global_4534105[iParam0 /*85*/], Global_4534105[iParam0 /*85*/].f_66.f_15, Global_4534105[iParam0 /*85*/].f_66.f_16);
			break;
		case joaat("SERVICE_SPEND_TONY_LIMO"):
			MONEY::NETWORK_SPEND_VEHICLE_REQUESTED(Global_4534105[iParam0 /*85*/].f_66.f_1, 0, 1, Global_4534105[iParam0 /*85*/], Global_4534105[iParam0 /*85*/].f_66.f_15);
			break;
		case joaat("SERVICE_EARN_AMBIENT_JOB_CLUBHOUSE_CONTRACT"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_UNDERWATER_CARGO"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_CRIME_SCENE"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_METAL_DETECTOR"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_SMUGGLER_PLANE"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_SMUGGLER_TRAIL"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_GOLDEN_GUN"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_AMMUNATION_DELIVERY"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_SOURCE_RESEARCH"):
			MONEY::NETWORK_EARN_FROM_AMBIENT_JOB(Global_4534105[iParam0 /*85*/].f_66.f_1, &(Global_4534105[iParam0 /*85*/].f_14.f_26), &uVar2);
			break;
		case joaat("SERVICE_EARN_YOHAN_SOURCE_GOODS"):
			MONEY::NETWORK_YOHAN_SOURCE_GOODS(Global_4534105[iParam0 /*85*/].f_66.f_1, Global_4534105[iParam0 /*85*/].f_1, Global_4534105[iParam0 /*85*/].f_9, Global_4534105[iParam0 /*85*/].f_66.f_15);
			break;
	}
	if (__LIB_0__::func_112())
	{
		if (bParam1)
		{
			NETSHOPPING::NET_GAMESERVER_BASKET_APPLY_SERVER_DATA(Global_4534105[iParam0 /*85*/].f_66, &uVar4);
		}
	}
	__LIB_1__::func_34(iParam0);
}

void func_50(struct<34> Param0)//Position - 0x42B3
{
	if (Global_262145.f_24104 /* Tunable: BLOCK_NS_TRANS */)
	{
		__LIB_2__::func_861();
	}
	Local_22.f_66 = { Param0 };
	Local_22 = { Param0.f_19 };
	Local_22.f_14 = { Global_4534105[Param0.f_33 /*85*/].f_14 };
	iLocal_21 = Param0.f_33;
	if (Param0.f_33 < 0)
	{
		__LIB_2__::func_861();
	}
	if (!__LIB_39__::func_335(Param0, Param0.f_33))
	{
		__LIB_1__::func_34(Param0.f_33);
		__LIB_2__::func_861();
	}
	if (Local_22.f_66.f_2 != 0)
	{
		Local_22.f_66.f_2 = 1;
	}
}

