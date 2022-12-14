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
	var* uLocal_28[70] = { NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL };
	var* uLocal_29[50] = { NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL };
	var* uLocal_30[65] = { NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL };
	var* uLocal_31[85] = { NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL };
	var* uLocal_32[60] = { NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL };
	var* uLocal_33[32] = { NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL };
	int iLocal_34 = 0;
	int iLocal_35 = 0;
	int iLocal_36 = 0;
	int iLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	struct<3> Local_40 = { 0, 0, 0 } ;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	bool bLocal_48 = 0;
	int iLocal_49 = 0;
	var* uLocal_50 = NULL;
	var* uLocal_51 = NULL;
	var* uLocal_52 = NULL;
	var* uLocal_53 = NULL;
	var* uLocal_54 = NULL;
	var* uLocal_55 = NULL;
	var* uLocal_56 = NULL;
	var* uLocal_57 = NULL;
	int iLocal_58 = 0;
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
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(34))
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	__LIB_0__::func_696();
	iLocal_42 = MISC::GET_GAME_TIMER();
	iLocal_44 = 0;
	while (true)
	{
		SYSTEM::WAIT(0);
		func_142();
		if (Global_113120)
		{
			if ((iLocal_41 - iLocal_44) > 300000)
			{
				iLocal_49 = 1;
				iLocal_44 = MISC::GET_GAME_TIMER();
				Global_113120 = 0;
			}
			else if (iLocal_44 == 0)
			{
				iLocal_49 = 1;
				iLocal_44 = MISC::GET_GAME_TIMER();
				Global_113120 = 0;
			}
			else
			{
				iLocal_49 = 0;
				Global_113120 = 0;
			}
		}
		if (iLocal_49 == 1)
		{
			if (!iLocal_46)
			{
				if (!iLocal_47)
				{
					if (DATAFILE::DATAFILE_GET_FILE_DICT(0) != 0)
					{
						DATAFILE::DATAFILE_DELETE(0);
					}
					iLocal_34 = 0;
					iLocal_35 = 0;
					iLocal_36 = 0;
					iLocal_37 = 0;
					iLocal_38 = 0;
					iLocal_39 = 0;
					DATAFILE::DATAFILE_CREATE(0);
					uLocal_50 = DATAFILE::DATAFILE_GET_FILE_DICT(0);
					DATAFILE::DATADICT_SET_FLOAT(uLocal_50, "tot_pc", Global_113386.f_10194.f_3853);
					uLocal_51 = DATAFILE::DATADICT_CREATE_DICT(uLocal_50, "Sect");
					uLocal_52 = DATAFILE::DATADICT_CREATE_ARRAY(uLocal_51, "mgc");
					uLocal_53 = DATAFILE::DATADICT_CREATE_ARRAY(uLocal_51, "msnc");
					uLocal_54 = DATAFILE::DATADICT_CREATE_ARRAY(uLocal_51, "ojc");
					uLocal_55 = DATAFILE::DATADICT_CREATE_ARRAY(uLocal_51, "rcc");
					uLocal_56 = DATAFILE::DATADICT_CREATE_ARRAY(uLocal_51, "revc");
					uLocal_57 = DATAFILE::DATADICT_CREATE_ARRAY(uLocal_51, "misc");
					iLocal_58 = 0;
					while (iLocal_58 < 321)
					{
						if (!Global_113386.f_10194[iLocal_58 /*12*/].f_6 == 0)
						{
							if (Global_113386.f_10194[iLocal_58 /*12*/].f_6 == 1 || Global_113386.f_10194[iLocal_58 /*12*/].f_6 == 2)
							{
								if (Global_113386.f_10194[iLocal_58 /*12*/].f_5 || Global_113121 == 1)
								{
									uLocal_28[iLocal_34] = DATAFILE::DATAARRAY_ADD_DICT(uLocal_53);
									DATAFILE::DATADICT_SET_STRING(uLocal_28[iLocal_34], "nm", &(Global_113386.f_10194[iLocal_58 /*12*/]));
									DATAFILE::DATADICT_SET_BOOL(uLocal_28[iLocal_34], "cmp", Global_113386.f_10194[iLocal_58 /*12*/].f_5);
									if (Global_113386.f_10194[iLocal_58 /*12*/].f_6 == 1)
									{
										DATAFILE::DATADICT_SET_BOOL(uLocal_28[iLocal_34], "100", true);
									}
									else
									{
										DATAFILE::DATADICT_SET_BOOL(uLocal_28[iLocal_34], "100", false);
									}
									Local_40 = { func_126(iLocal_58) };
									DATAFILE::DATADICT_SET_INT(uLocal_28[iLocal_34], "x", SYSTEM::ROUND(Local_40.f_0));
									DATAFILE::DATADICT_SET_INT(uLocal_28[iLocal_34], "y", SYSTEM::ROUND(Local_40.f_1));
									iLocal_34++;
								}
							}
							if (Global_113386.f_10194[iLocal_58 /*12*/].f_6 == 3 || Global_113386.f_10194[iLocal_58 /*12*/].f_6 == 4)
							{
								if (Global_113386.f_10194[iLocal_58 /*12*/].f_5 || Global_113121 == 1)
								{
									uLocal_29[iLocal_35] = DATAFILE::DATAARRAY_ADD_DICT(uLocal_52);
									DATAFILE::DATADICT_SET_STRING(uLocal_29[iLocal_35], "nm", &(Global_113386.f_10194[iLocal_58 /*12*/]));
									DATAFILE::DATADICT_SET_BOOL(uLocal_29[iLocal_35], "cmp", Global_113386.f_10194[iLocal_58 /*12*/].f_5);
									if (Global_113386.f_10194[iLocal_58 /*12*/].f_6 == 3)
									{
										DATAFILE::DATADICT_SET_BOOL(uLocal_29[iLocal_35], "100", true);
									}
									else
									{
										DATAFILE::DATADICT_SET_BOOL(uLocal_29[iLocal_35], "100", false);
									}
									Local_40 = { func_126(iLocal_58) };
									DATAFILE::DATADICT_SET_INT(uLocal_29[iLocal_35], "x", SYSTEM::ROUND(Local_40.f_0));
									DATAFILE::DATADICT_SET_INT(uLocal_29[iLocal_35], "y", SYSTEM::ROUND(Local_40.f_1));
									iLocal_35++;
								}
							}
							if (Global_113386.f_10194[iLocal_58 /*12*/].f_6 == 5 || Global_113386.f_10194[iLocal_58 /*12*/].f_6 == 6)
							{
								if (Global_113386.f_10194[iLocal_58 /*12*/].f_5 || Global_113121 == 1)
								{
									uLocal_30[iLocal_36] = DATAFILE::DATAARRAY_ADD_DICT(uLocal_54);
									DATAFILE::DATADICT_SET_STRING(uLocal_30[iLocal_36], "nm", &(Global_113386.f_10194[iLocal_58 /*12*/]));
									DATAFILE::DATADICT_SET_BOOL(uLocal_30[iLocal_36], "cmp", Global_113386.f_10194[iLocal_58 /*12*/].f_5);
									if (Global_113386.f_10194[iLocal_58 /*12*/].f_6 == 5)
									{
										DATAFILE::DATADICT_SET_BOOL(uLocal_30[iLocal_36], "100", true);
									}
									else
									{
										DATAFILE::DATADICT_SET_BOOL(uLocal_30[iLocal_36], "100", false);
									}
									Local_40 = { func_126(iLocal_58) };
									DATAFILE::DATADICT_SET_INT(uLocal_30[iLocal_36], "x", SYSTEM::ROUND(Local_40.f_0));
									DATAFILE::DATADICT_SET_INT(uLocal_30[iLocal_36], "y", SYSTEM::ROUND(Local_40.f_1));
									iLocal_36++;
								}
							}
							if (Global_113386.f_10194[iLocal_58 /*12*/].f_6 == 7 || Global_113386.f_10194[iLocal_58 /*12*/].f_6 == 8)
							{
								if (Global_113386.f_10194[iLocal_58 /*12*/].f_5 || Global_113121 == 1)
								{
									uLocal_32[iLocal_37] = DATAFILE::DATAARRAY_ADD_DICT(uLocal_55);
									DATAFILE::DATADICT_SET_STRING(uLocal_32[iLocal_37], "nm", &(Global_113386.f_10194[iLocal_58 /*12*/]));
									DATAFILE::DATADICT_SET_BOOL(uLocal_32[iLocal_37], "cmp", Global_113386.f_10194[iLocal_58 /*12*/].f_5);
									if (Global_113386.f_10194[iLocal_58 /*12*/].f_6 == 7)
									{
										DATAFILE::DATADICT_SET_BOOL(uLocal_32[iLocal_37], "100", true);
									}
									else
									{
										DATAFILE::DATADICT_SET_BOOL(uLocal_32[iLocal_37], "100", false);
									}
									Local_40 = { func_126(iLocal_58) };
									DATAFILE::DATADICT_SET_INT(uLocal_32[iLocal_37], "x", SYSTEM::ROUND(Local_40.f_0));
									DATAFILE::DATADICT_SET_INT(uLocal_32[iLocal_37], "y", SYSTEM::ROUND(Local_40.f_1));
									iLocal_37++;
								}
							}
							if (Global_113386.f_10194[iLocal_58 /*12*/].f_6 == 9 || Global_113386.f_10194[iLocal_58 /*12*/].f_6 == 10)
							{
								if (Global_113386.f_10194[iLocal_58 /*12*/].f_5 || Global_113121 == 1)
								{
									uLocal_31[iLocal_38] = DATAFILE::DATAARRAY_ADD_DICT(uLocal_56);
									DATAFILE::DATADICT_SET_STRING(uLocal_31[iLocal_38], "nm", &(Global_113386.f_10194[iLocal_58 /*12*/]));
									DATAFILE::DATADICT_SET_BOOL(uLocal_31[iLocal_38], "cmp", Global_113386.f_10194[iLocal_58 /*12*/].f_5);
									if (Global_113386.f_10194[iLocal_58 /*12*/].f_6 == 9)
									{
										DATAFILE::DATADICT_SET_BOOL(uLocal_31[iLocal_38], "100", false);
									}
									else
									{
										DATAFILE::DATADICT_SET_BOOL(uLocal_31[iLocal_38], "100", false);
									}
									DATAFILE::DATADICT_SET_INT(uLocal_31[iLocal_38], "x", SYSTEM::ROUND(Global_113386.f_10194[iLocal_58 /*12*/].f_10));
									DATAFILE::DATADICT_SET_INT(uLocal_31[iLocal_38], "y", SYSTEM::ROUND(Global_113386.f_10194[iLocal_58 /*12*/].f_11));
									iLocal_38++;
								}
							}
							if (((Global_113386.f_10194[iLocal_58 /*12*/].f_6 == 11 || Global_113386.f_10194[iLocal_58 /*12*/].f_6 == 13) || Global_113386.f_10194[iLocal_58 /*12*/].f_6 == 12) || Global_113386.f_10194[iLocal_58 /*12*/].f_6 == 14)
							{
								if (Global_113386.f_10194[iLocal_58 /*12*/].f_5 || Global_113121 == 1)
								{
									uLocal_33[iLocal_39] = DATAFILE::DATAARRAY_ADD_DICT(uLocal_57);
									DATAFILE::DATADICT_SET_STRING(uLocal_33[iLocal_39], "nm", &(Global_113386.f_10194[iLocal_58 /*12*/]));
									DATAFILE::DATADICT_SET_BOOL(uLocal_33[iLocal_39], "cmp", Global_113386.f_10194[iLocal_58 /*12*/].f_5);
									if (Global_113386.f_10194[iLocal_58 /*12*/].f_6 == 11 || Global_113386.f_10194[iLocal_58 /*12*/].f_6 == 13)
									{
										DATAFILE::DATADICT_SET_BOOL(uLocal_33[iLocal_39], "100", true);
									}
									else
									{
										DATAFILE::DATADICT_SET_BOOL(uLocal_33[iLocal_39], "100", false);
									}
									Local_40 = { func_126(iLocal_58) };
									DATAFILE::DATADICT_SET_INT(uLocal_33[iLocal_39], "x", SYSTEM::ROUND(Local_40.f_0));
									DATAFILE::DATADICT_SET_INT(uLocal_33[iLocal_39], "y", SYSTEM::ROUND(Local_40.f_1));
									iLocal_39++;
								}
							}
						}
						iLocal_58++;
					}
					if (__LIB_1__::func_894())
					{
						iLocal_46 = 1;
						iLocal_47 = 0;
						Global_113120 = 0;
						iLocal_49 = 0;
					}
					else
					{
						iLocal_46 = 0;
						iLocal_47 = 0;
						Global_113120 = 0;
						iLocal_49 = 0;
					}
				}
			}
		}
		if (iLocal_46)
		{
			if (!iLocal_47)
			{
				if (DATAFILE::DATAFILE_START_SAVE_TO_CLOUD("GTA5/checklist/index.json", 0))
				{
					iLocal_47 = 1;
				}
			}
			else if (!DATAFILE::DATAFILE_UPDATE_SAVE_TO_CLOUD(&bLocal_48))
			{
				if (bLocal_48)
				{
				}
				if (DATAFILE::DATAFILE_GET_FILE_DICT(0) != 0)
				{
					DATAFILE::DATAFILE_DELETE(0);
				}
				iLocal_46 = 0;
				iLocal_47 = 0;
			}
		}
		if (Global_113386.f_10194.f_3854 == 0)
		{
			if (Global_113386.f_10194.f_3853 == 100f || Global_113386.f_10194.f_3853 > 100f)
			{
				if (__LIB_1__::func_894())
				{
					STATS::PRESENCE_EVENT_UPDATESTAT_FLOAT(joaat("TOTAL_PROGRESS_MADE"), Global_113386.f_10194.f_3853, 0);
					if (NETWORK::FACEBOOK_CAN_POST_TO_FACEBOOK())
					{
						NETWORK::FACEBOOK_POST_COMPLETED_MILESTONE(0);
						__LIB_33__::func_603(0);
					}
				}
				Global_113386.f_10194.f_3854 = 1;
				__LIB_0__::func_681(133, 1);
				__LIB_0__::func_544(163, 1, 0, 1, 0);
				__LIB_0__::func_544(151, 1, 0, 1, 0);
				func_33(joaat("Player_One"), 3, 151, 1, 1);
				__LIB_14__::func_864(57);
				MISC::SET_BIT(&(Global_113386.f_18574[57 /*6*/]), 1);
				__LIB_0__::func_746(13, 1);
			}
		}
		if (MISC::GET_NUM_SUCCESSFUL_STUNT_JUMPS() > Global_113386.f_10049)
		{
			if (MISC::GET_NUM_SUCCESSFUL_STUNT_JUMPS() >= 50)
			{
				__LIB_0__::func_746(22, 1);
			}
			__LIB_17__::func_216(__LIB_0__::func_683(), 4, (MISC::GET_NUM_SUCCESSFUL_STUNT_JUMPS() - Global_113386.f_10049) * 2);
			Global_113386.f_10049 = MISC::GET_NUM_SUCCESSFUL_STUNT_JUMPS();
			if (Global_113386.f_10049 >= 50)
			{
				STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("SP0_WATER_CANNON_KILLS"), 100, 0);
			}
			else if (Global_113386.f_10049 >= 38)
			{
				STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("SP0_WATER_CANNON_KILLS"), 75, 0);
			}
			else if (Global_113386.f_10049 >= 25)
			{
				__LIB_0__::func_716(289, 0, 0);
				STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("SP0_WATER_CANNON_KILLS"), 50, 0);
			}
			else if (Global_113386.f_10049 >= 13)
			{
				STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("SP0_WATER_CANNON_KILLS"), 25, 0);
			}
		}
	}
}

int func_33(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)//Position - 0x1231
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	var uVar4;
	int iVar5;
	Global_78130[1 /*14*/] = { __LIB_13__::func_798(iParam0, iParam1, iParam2, -1) };
	if (BitTest(Global_78130[1 /*14*/].f_6, 0) && !BitTest(Global_78130[1 /*14*/].f_6, 6))
	{
		if (bParam3)
		{
			__LIB_0__::func_31(iParam1, Global_78130[1 /*14*/].f_5, Global_78130[1 /*14*/].f_2, 1, Global_78130[1 /*14*/].f_1, 1, 0);
			if (iParam1 == 12)
			{
				iVar0 = 1;
				if (iParam0 == joaat("Player_Zero"))
				{
					if (iParam2 == 31)
					{
						iVar0 = 0;
					}
				}
				if (iVar0 == 1)
				{
					uVar3 = { __LIB_0__::func_459(iParam0, iParam2) };
					iVar1 = 0;
					while (iVar1 <= 14)
					{
						if ((uVar3[iVar1] != -99 && iVar1 != 12) && iVar1 != 14)
						{
							if (iVar1 != 13)
							{
								func_33(iParam0, iVar1, uVar3[iVar1], 1, 1);
								__LIB_15__::func_948(iParam0, iVar1, uVar3[iVar1], 1);
							}
							else
							{
								uVar4 = { __LIB_0__::func_466(iParam0, uVar3[iVar1]) };
								iVar2 = 0;
								while (iVar2 <= 8)
								{
									func_33(iParam0, 14, uVar4[iVar2], 1, 1);
									__LIB_15__::func_948(iParam0, 14, uVar4[iVar2], 1);
									iVar2++;
								}
							}
						}
						iVar1++;
					}
				}
			}
		}
		else
		{
			__LIB_0__::func_31(iParam1, Global_78130[1 /*14*/].f_5, Global_78130[1 /*14*/].f_2, 1, Global_78130[1 /*14*/].f_1, 0, 1);
		}
		if (iParam4 == 1 && bParam3 == 1)
		{
			switch (iParam0)
			{
				case joaat("Player_Zero"):
					break;
				case joaat("Player_One"):
					switch (iParam1)
					{
						case 3:
							if (iParam2 >= 176 && iParam2 <= 191)
							{
								iVar5 = (227 + Global_78130[1 /*14*/].f_4);
								func_33(iParam0, 3, iVar5, 1, 0);
							}
							else if (iParam2 >= 227 && iParam2 <= 242)
							{
								iVar5 = (176 + Global_78130[1 /*14*/].f_4);
								func_33(iParam0, 3, iVar5, 1, 0);
							}
							break;
						case 11:
							if (iParam2 >= 9 && iParam2 <= 24)
							{
								iVar5 = (25 + Global_78130[1 /*14*/].f_4);
								func_33(iParam0, 11, iVar5, 1, 0);
							}
							else if (iParam2 >= 25 && iParam2 <= 40)
							{
								iVar5 = (9 + Global_78130[1 /*14*/].f_4);
								func_33(iParam0, 11, iVar5, 1, 0);
							}
							break;
						case 8:
							if (iParam2 >= 27 && iParam2 <= 42)
							{
								iVar5 = (43 + Global_78130[1 /*14*/].f_4);
								func_33(iParam0, 8, iVar5, 1, 0);
								iVar5 = (59 + Global_78130[1 /*14*/].f_4);
								func_33(iParam0, 8, iVar5, 1, 0);
							}
							else if (iParam2 >= 43 && iParam2 <= 58)
							{
								iVar5 = (27 + Global_78130[1 /*14*/].f_4);
								func_33(iParam0, 8, iVar5, 1, 0);
								iVar5 = (59 + Global_78130[1 /*14*/].f_4);
								func_33(iParam0, 8, iVar5, 1, 0);
							}
							else if (iParam2 >= 59 && iParam2 <= 74)
							{
								iVar5 = (27 + Global_78130[1 /*14*/].f_4);
								func_33(iParam0, 8, iVar5, 1, 0);
								iVar5 = (43 + Global_78130[1 /*14*/].f_4);
								func_33(iParam0, 8, iVar5, 1, 0);
							}
							break;
						case 14:
							if (iParam2 >= 64 && iParam2 <= 79)
							{
								iVar5 = (41 + Global_78130[1 /*14*/].f_4);
								func_33(iParam0, 14, iVar5, 1, 0);
							}
							break;
					}
					break;
				case joaat("Player_Two"):
					switch (iParam1)
					{
						case 4:
							if (iParam2 >= 81 && iParam2 <= 90)
							{
								iVar5 = (94 + Global_78130[1 /*14*/].f_4);
								func_33(iParam0, 4, iVar5, 1, 0);
							}
							break;
						case 12:
							if (iParam2 == 2)
							{
								func_33(iParam0, 14, 17, 1, 0);
							}
							break;
					}
					break;
				}
		}
		return 1;
	}
	return 0;
}

Vector3 func_126(int iParam0)//Position - 0x1F88B
{
	int iVar0;
	struct<7> Var1;
	int iVar2;
	int iVar3;
	int iVar4;
	switch (func_141(iParam0))
	{
		case 1:
			iVar0 = func_138(iParam0);
			if (iVar0 != -1)
			{
				iVar2 = Global_91229[iVar0 /*34*/].f_10;
				if (iVar2 != 263)
				{
					return __LIB_15__::func_962(iVar2, 0);
				}
			}
			break;
		case 3:
		case 5:
			iVar3 = func_136(iParam0);
			iVar4 = func_134(iVar3, func_135(iParam0));
			if (iVar4 != 263)
			{
				return __LIB_15__::func_962(iVar4, 0);
			}
			break;
		case 7:
			__LIB_0__::func_432(func_132(iParam0), &Var1);
			return Var1.f_6;
			break;
		case 9:
			break;
		case 11:
			break;
		case 13:
			break;
	}
	return 0f, 0f, 0f;
}

int func_132(int iParam0)//Position - 0x213EB
{
	int iVar0;
	if (func_141(iParam0) != 7 && func_141(iParam0) != 8)
	{
		return -1;
	}
	iVar0 = func_133(iParam0);
	if (iVar0 == 127)
	{
		return -1;
	}
	return iVar0;
}

int func_133(int iParam0)//Position - 0x21425
{
	return Global_113386.f_10194[iParam0 /*12*/].f_8 & 127;
}

int func_134(int iParam0, int iParam1)//Position - 0x2143D
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 125;
					break;
				case 1:
					return 126;
					break;
				case 2:
					return 127;
					break;
				case 3:
					return 128;
					break;
				case 4:
					return 129;
					break;
				case 5:
					return 130;
					break;
				case 6:
					return 131;
					break;
				case 7:
					return 132;
					break;
				case 8:
					return 133;
					break;
				case 9:
					return 134;
					break;
				case 10:
					return 135;
					break;
				case 11:
					return 136;
					break;
				case 12:
					return 137;
					break;
			}
			break;
		case 19:
			return 65;
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return 66;
					break;
				case 1:
					return 67;
					break;
			}
			break;
		case 2:
			return 68;
			break;
			break;
		case 3:
			return 69;
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					return 70;
					break;
				case 1:
					return 71;
					break;
				case 2:
					return 72;
					break;
				case 3:
					return 73;
					break;
				case 4:
					return 74;
					break;
				case 5:
					return 75;
					break;
			}
			break;
		case 5:
			return 76;
			break;
			break;
		case 6:
			switch (iParam1)
			{
				case 0:
					return 77;
					break;
				case 1:
					return 81;
					break;
				case 2:
					return 78;
					break;
				case 3:
					return 79;
					break;
				case 4:
					return 80;
					break;
			}
			break;
		case 7:
			switch (iParam1)
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
			break;
		case 9:
			return 94;
			break;
			break;
		case 8:
			switch (iParam1)
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
			break;
		case 10:
			return 95;
			break;
			break;
		case 11:
			switch (iParam1)
			{
				case 0:
					return 91;
					break;
				case 1:
					return 92;
					break;
			}
			break;
		case 13:
			switch (iParam1)
			{
				case 0:
					return 96;
					break;
				case 1:
					return 97;
					break;
				case 2:
					return 98;
					break;
				case 3:
					return 99;
					break;
				case 4:
					return 100;
					break;
				case 5:
					return 101;
					break;
				case 6:
					return 102;
					break;
				case 7:
					return 103;
					break;
			}
			break;
		case 14:
			return 104;
			break;
			break;
		case 15:
			return 105;
			break;
			break;
		case 16:
			return 106;
			break;
			break;
		case 17:
			switch (iParam1)
			{
				case 0:
					return 107;
					break;
				case 1:
					return 108;
					break;
				case 2:
					return 109;
					break;
			}
			break;
		case 18:
			switch (iParam1)
			{
				case 0:
					return 110;
					break;
				case 1:
					return 111;
					break;
			}
			break;
		case 12:
			return 263;
			break;
			break;
	}
	return 263;
}

int func_135(int iParam0)//Position - 0x21850
{
	return SYSTEM::SHIFT_RIGHT(Global_113386.f_10194[iParam0 /*12*/].f_8, 7) & 127;
}

int func_136(int iParam0)//Position - 0x2186D
{
	int iVar0;
	if (func_141(iParam0) != 3 && func_141(iParam0) != 5)
	{
		if (func_141(iParam0) != 4 && func_141(iParam0) != 6)
		{
			return -1;
		}
	}
	iVar0 = func_133(iParam0);
	if (iVar0 == 127)
	{
		return -1;
	}
	return iVar0;
}

int func_138(int iParam0)//Position - 0x218FC
{
	int iVar0;
	int iVar1;
	if (func_141(iParam0) != 1 && func_141(iParam0) != 2)
	{
		return -1;
	}
	iVar0 = func_133(iParam0);
	if (iVar0 == 127)
	{
		return -1;
	}
	iVar1 = iVar0;
	if (Global_113386.f_10194[iParam0 /*12*/].f_7 == 1)
	{
		return func_139(iVar1);
	}
	return iVar1;
}

int func_139(int iParam0)//Position - 0x21956
{
	switch (iParam0)
	{
		case 87:
			switch (Global_113386.f_9085.f_99.f_205[__LIB_0__::func_567(0)])
			{
				case 1:
					return 87;
					break;
				case 2:
					return 89;
					break;
				default:
					return 87;
					break;
			}
			break;
		case 74:
			switch (Global_113386.f_9085.f_99.f_205[__LIB_0__::func_567(1)])
			{
				case 3:
					return 74;
					break;
				case 4:
					return 75;
					break;
				default:
					return 74;
					break;
			}
			break;
		case 69:
			switch (Global_113386.f_9085.f_99.f_205[__LIB_0__::func_567(3)])
			{
				case 6:
					return 69;
					break;
				case 7:
					return 70;
					break;
				default:
					return 69;
					break;
			}
			break;
		case 84:
			switch (Global_113386.f_9085.f_99.f_205[__LIB_0__::func_567(4)])
			{
				case 8:
					return 84;
					break;
				case 9:
					return 85;
					break;
				default:
					return 84;
					break;
			}
			break;
		case 78:
			switch (Global_113386.f_9085.f_99.f_205[__LIB_0__::func_567(4)])
			{
				case 8:
					return 78;
					break;
				case 9:
					return 79;
					break;
				default:
					return 78;
					break;
			}
			break;
		case 80:
			switch (Global_113386.f_9085.f_99.f_205[__LIB_0__::func_567(4)])
			{
				case 8:
					return 80;
					break;
				case 9:
					return 83;
					break;
				default:
					return 80;
					break;
			}
			break;
		case 24:
			switch (Global_113386.f_9085.f_99.f_205[12])
			{
				case 0:
					return 24;
					break;
				case 1:
					return 25;
					break;
				case 2:
					return 27;
					break;
				default:
					return 24;
					break;
			}
			break;
	}
	return -1;
}

int func_141(int iParam0)//Position - 0x21BA2
{
	return Global_113386.f_10194[iParam0 /*12*/].f_6;
}

void func_142()//Position - 0x21BB7
{
	int iVar0;
	int iVar1;
	iLocal_41 = MISC::GET_GAME_TIMER();
	iLocal_43 = (iLocal_41 - iLocal_42);
	if (iLocal_43 > 5000)
	{
		func_151();
		func_150();
		func_149();
		func_148();
		func_147();
		func_146();
		func_145();
		func_144();
		iLocal_42 = MISC::GET_GAME_TIMER();
		iVar0 = 0;
		iVar1 = 0;
		iVar0 = MISC::GET_PROFILE_SETTING(807);
		switch (iVar0)
		{
			case 0:
				iVar1 = 0;
				break;
			case 1:
				iVar1 = 60000;
				break;
			case 2:
				iVar1 = 120000;
				break;
			case 3:
				iVar1 = 180000;
				break;
			case 4:
				iVar1 = 240000;
				break;
			case 5:
				iVar1 = 300000;
				break;
			case 6:
				iVar1 = 600000;
				break;
			case 7:
				iVar1 = 900000;
				break;
			case 8:
				iVar1 = 1800000;
				break;
			case 9:
				iVar1 = 3600000;
				break;
			default:
				iVar1 = 300000;
				break;
		}
		if (iVar1 != Global_113133)
		{
			Global_113133 = iVar1;
		}
	}
	func_143();
}

void func_143()//Position - 0x21CC5
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("finale_heist2a")) == 0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("rural_bank_heist")) == 0)
	{
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			if (iLocal_45)
			{
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
				{
					if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
					{
						SYSTEM::WAIT(0);
						if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
						{
							if (!BitTest(Global_113386.f_10194.f_3855, 18))
							{
								STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("SP0_STARS_EVADED"), 5, 0);
								MISC::SET_BIT(&(Global_113386.f_10194.f_3855), 18);
							}
							iLocal_45 = 0;
						}
						else
						{
							iLocal_45 = 0;
						}
					}
				}
				else
				{
					iLocal_45 = 0;
				}
			}
			else if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 4)
			{
				iLocal_45 = 1;
			}
		}
		else
		{
			iLocal_45 = 0;
		}
	}
	else
	{
		iLocal_45 = 0;
	}
}

void func_144()//Position - 0x21D86
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	STATS::STAT_GET_INT(joaat("SP0_SHOTS"), &iVar1, -1);
	iVar0 = (iVar0 + iVar1);
	STATS::STAT_GET_INT(joaat("SP1_SHOTS"), &iVar1, -1);
	iVar0 = (iVar0 + iVar1);
	STATS::STAT_GET_INT(joaat("SP2_SHOTS"), &iVar1, -1);
	iVar0 = (iVar0 + iVar1);
	if (iVar0 > 4999999)
	{
		if (!BitTest(Global_113386.f_10194.f_3855, 17))
		{
			STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("SP0_SHOTS"), 5000000, 0);
			MISC::SET_BIT(&(Global_113386.f_10194.f_3855), 13);
			MISC::SET_BIT(&(Global_113386.f_10194.f_3855), 14);
			MISC::SET_BIT(&(Global_113386.f_10194.f_3855), 15);
			MISC::SET_BIT(&(Global_113386.f_10194.f_3855), 16);
			MISC::SET_BIT(&(Global_113386.f_10194.f_3855), 17);
		}
	}
	if (iVar0 > 3999999)
	{
		if (!BitTest(Global_113386.f_10194.f_3855, 16))
		{
			STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("SP0_SHOTS"), 4000000, 0);
			MISC::SET_BIT(&(Global_113386.f_10194.f_3855), 13);
			MISC::SET_BIT(&(Global_113386.f_10194.f_3855), 14);
			MISC::SET_BIT(&(Global_113386.f_10194.f_3855), 15);
			MISC::SET_BIT(&(Global_113386.f_10194.f_3855), 16);
		}
	}
	if (iVar0 > 2999999)
	{
		if (!BitTest(Global_113386.f_10194.f_3855, 15))
		{
			STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("SP0_SHOTS"), 3000000, 0);
			MISC::SET_BIT(&(Global_113386.f_10194.f_3855), 13);
			MISC::SET_BIT(&(Global_113386.f_10194.f_3855), 14);
			MISC::SET_BIT(&(Global_113386.f_10194.f_3855), 15);
		}
	}
	if (iVar0 > 1999999)
	{
		if (!BitTest(Global_113386.f_10194.f_3855, 14))
		{
			STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("SP0_SHOTS"), 2000000, 0);
			MISC::SET_BIT(&(Global_113386.f_10194.f_3855), 13);
			MISC::SET_BIT(&(Global_113386.f_10194.f_3855), 14);
		}
	}
	if (iVar0 > 999999)
	{
		if (!BitTest(Global_113386.f_10194.f_3855, 13))
		{
			STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("SP0_SHOTS"), 1000000, 0);
			MISC::SET_BIT(&(Global_113386.f_10194.f_3855), 13);
		}
	}
}

void func_145()//Position - 0x21F85
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	STATS::STAT_GET_INT(joaat("SP0_DEATHS"), &iVar1, -1);
	iVar0 = (iVar0 + iVar1);
	STATS::STAT_GET_INT(joaat("SP1_DEATHS"), &iVar1, -1);
	iVar0 = (iVar0 + iVar1);
	STATS::STAT_GET_INT(joaat("SP2_DEATHS"), &iVar1, -1);
	iVar0 = (iVar0 + iVar1);
	if (iVar0 > 249)
	{
		if (!BitTest(Global_113386.f_10194.f_3855, 12))
		{
			STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("SP0_DEATHS"), 250, 0);
			MISC::SET_BIT(&(Global_113386.f_10194.f_3855), 8);
			MISC::SET_BIT(&(Global_113386.f_10194.f_3855), 9);
			MISC::SET_BIT(&(Global_113386.f_10194.f_3855), 10);
			MISC::SET_BIT(&(Global_113386.f_10194.f_3855), 11);
			MISC::SET_BIT(&(Global_113386.f_10194.f_3855), 12);
		}
	}
	if (iVar0 > 99)
	{
		if (!BitTest(Global_113386.f_10194.f_3855, 11))
		{
			STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("SP0_DEATHS"), 100, 0);
			MISC::SET_BIT(&(Global_113386.f_10194.f_3855), 8);
			MISC::SET_BIT(&(Global_113386.f_10194.f_3855), 9);
			MISC::SET_BIT(&(Global_113386.f_10194.f_3855), 10);
			MISC::SET_BIT(&(Global_113386.f_10194.f_3855), 11);
		}
	}
	if (iVar0 > 49)
	{
		if (!BitTest(Global_113386.f_10194.f_3855, 10))
		{
			STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("SP0_DEATHS"), 50, 0);
			MISC::SET_BIT(&(Global_113386.f_10194.f_3855), 8);
			MISC::SET_BIT(&(Global_113386.f_10194.f_3855), 9);
			MISC::SET_BIT(&(Global_113386.f_10194.f_3855), 10);
		}
	}
	if (iVar0 > 24)
	{
		if (!BitTest(Global_113386.f_10194.f_3855, 9))
		{
			STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("SP0_DEATHS"), 25, 0);
			MISC::SET_BIT(&(Global_113386.f_10194.f_3855), 8);
			MISC::SET_BIT(&(Global_113386.f_10194.f_3855), 9);
		}
	}
	if (iVar0 > 9)
	{
		if (!BitTest(Global_113386.f_10194.f_3855, 8))
		{
			STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("SP0_DEATHS"), 10, 0);
			MISC::SET_BIT(&(Global_113386.f_10194.f_3855), 8);
		}
	}
}

void func_146()//Position - 0x22170
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	STATS::STAT_GET_INT(joaat("SP0_BUSTED"), &iVar1, -1);
	iVar0 = (iVar0 + iVar1);
	STATS::STAT_GET_INT(joaat("SP1_BUSTED"), &iVar1, -1);
	iVar0 = (iVar0 + iVar1);
	STATS::STAT_GET_INT(joaat("SP2_BUSTED"), &iVar1, -1);
	iVar0 = (iVar0 + iVar1);
	if (iVar0 > 249)
	{
		if (!BitTest(Global_113386.f_10194.f_3855, 7))
		{
			STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("SP0_BUSTED"), 250, 0);
			MISC::SET_BIT(&(Global_113386.f_10194.f_3855), 3);
			MISC::SET_BIT(&(Global_113386.f_10194.f_3855), 4);
			MISC::SET_BIT(&(Global_113386.f_10194.f_3855), 5);
			MISC::SET_BIT(&(Global_113386.f_10194.f_3855), 6);
			MISC::SET_BIT(&(Global_113386.f_10194.f_3855), 7);
		}
	}
	if (iVar0 > 99)
	{
		if (!BitTest(Global_113386.f_10194.f_3855, 6))
		{
			STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("SP0_BUSTED"), 100, 0);
			MISC::SET_BIT(&(Global_113386.f_10194.f_3855), 3);
			MISC::SET_BIT(&(Global_113386.f_10194.f_3855), 4);
			MISC::SET_BIT(&(Global_113386.f_10194.f_3855), 5);
			MISC::SET_BIT(&(Global_113386.f_10194.f_3855), 6);
		}
	}
	if (iVar0 > 49)
	{
		if (!BitTest(Global_113386.f_10194.f_3855, 5))
		{
			STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("SP0_BUSTED"), 50, 0);
			MISC::SET_BIT(&(Global_113386.f_10194.f_3855), 3);
			MISC::SET_BIT(&(Global_113386.f_10194.f_3855), 4);
			MISC::SET_BIT(&(Global_113386.f_10194.f_3855), 5);
		}
	}
	if (iVar0 > 24)
	{
		if (!BitTest(Global_113386.f_10194.f_3855, 4))
		{
			STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("SP0_BUSTED"), 25, 0);
			MISC::SET_BIT(&(Global_113386.f_10194.f_3855), 3);
			MISC::SET_BIT(&(Global_113386.f_10194.f_3855), 4);
		}
	}
	if (iVar0 > 9)
	{
		if (!BitTest(Global_113386.f_10194.f_3855, 3))
		{
			STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("SP0_BUSTED"), 10, 0);
			MISC::SET_BIT(&(Global_113386.f_10194.f_3855), 3);
		}
	}
}

void func_147()//Position - 0x22347
{
	float fVar0;
	float fVar1;
	fVar0 = 0f;
	STATS::STAT_GET_FLOAT(joaat("SP0_DIST_SWIMMING"), &fVar1, -1);
	fVar0 = (fVar0 + fVar1);
	STATS::STAT_GET_FLOAT(joaat("SP1_DIST_SWIMMING"), &fVar1, -1);
	fVar0 = (fVar0 + fVar1);
	STATS::STAT_GET_FLOAT(joaat("SP2_DIST_SWIMMING"), &fVar1, -1);
	fVar0 = (fVar0 + fVar1);
	if (fVar0 > (1609.344f * 1000f))
	{
		if (!BitTest(Global_113386.f_10194.f_3855, 27))
		{
			STATS::PRESENCE_EVENT_UPDATESTAT_FLOAT(joaat("SP0_DIST_SWIMMING"), 1000f, 0);
			MISC::SET_BIT(&(Global_113386.f_10194.f_3855), 25);
			MISC::SET_BIT(&(Global_113386.f_10194.f_3855), 26);
			MISC::SET_BIT(&(Global_113386.f_10194.f_3855), 27);
		}
	}
	if (fVar0 > (1609.344f * 100f))
	{
		if (!BitTest(Global_113386.f_10194.f_3855, 26))
		{
			STATS::PRESENCE_EVENT_UPDATESTAT_FLOAT(joaat("SP0_DIST_SWIMMING"), 100f, 0);
			MISC::SET_BIT(&(Global_113386.f_10194.f_3855), 25);
			MISC::SET_BIT(&(Global_113386.f_10194.f_3855), 26);
		}
	}
	if (fVar0 > (1609.344f * 50f))
	{
		if (!BitTest(Global_113386.f_10194.f_3855, 25))
		{
			STATS::PRESENCE_EVENT_UPDATESTAT_FLOAT(joaat("SP0_DIST_SWIMMING"), 50f, 0);
			MISC::SET_BIT(&(Global_113386.f_10194.f_3855), 25);
		}
	}
}

void func_148()//Position - 0x22481
{
	float fVar0;
	float fVar1;
	fVar0 = 0f;
	STATS::STAT_GET_FLOAT(joaat("SP0_DIST_RUNNING"), &fVar1, -1);
	fVar0 = (fVar0 + fVar1);
	STATS::STAT_GET_FLOAT(joaat("SP1_DIST_RUNNING"), &fVar1, -1);
	fVar0 = (fVar0 + fVar1);
	STATS::STAT_GET_FLOAT(joaat("SP2_DIST_RUNNING"), &fVar1, -1);
	fVar0 = (fVar0 + fVar1);
	if (fVar0 > (1609.344f * 1000f))
	{
		if (!BitTest(Global_113386.f_10194.f_3855, 24))
		{
			STATS::PRESENCE_EVENT_UPDATESTAT_FLOAT(joaat("SP0_DIST_RUNNING"), 1000f, 0);
			MISC::SET_BIT(&(Global_113386.f_10194.f_3855), 22);
			MISC::SET_BIT(&(Global_113386.f_10194.f_3855), 23);
			MISC::SET_BIT(&(Global_113386.f_10194.f_3855), 24);
		}
	}
	if (fVar0 > (1609.344f * 100f))
	{
		if (!BitTest(Global_113386.f_10194.f_3855, 23))
		{
			STATS::PRESENCE_EVENT_UPDATESTAT_FLOAT(joaat("SP0_DIST_RUNNING"), 100f, 0);
			MISC::SET_BIT(&(Global_113386.f_10194.f_3855), 22);
			MISC::SET_BIT(&(Global_113386.f_10194.f_3855), 23);
		}
	}
	if (fVar0 > (1609.344f * 50f))
	{
		if (!BitTest(Global_113386.f_10194.f_3855, 22))
		{
			STATS::PRESENCE_EVENT_UPDATESTAT_FLOAT(joaat("SP0_DIST_RUNNING"), 50f, 0);
			MISC::SET_BIT(&(Global_113386.f_10194.f_3855), 22);
		}
	}
}

void func_149()//Position - 0x225BB
{
	float fVar0;
	float fVar1;
	fVar0 = 0f;
	STATS::STAT_GET_FLOAT(joaat("SP0_DIST_DRIVING_PLANE"), &fVar1, -1);
	fVar0 = (fVar0 + fVar1);
	STATS::STAT_GET_FLOAT(joaat("SP0_DIST_DRIVING_HELI"), &fVar1, -1);
	fVar0 = (fVar0 + fVar1);
	fVar0 = (fVar0 + fVar1);
	STATS::STAT_GET_FLOAT(joaat("SP1_DIST_DRIVING_PLANE"), &fVar1, -1);
	fVar0 = (fVar0 + fVar1);
	STATS::STAT_GET_FLOAT(joaat("SP1_DIST_DRIVING_HELI"), &fVar1, -1);
	fVar0 = (fVar0 + fVar1);
	fVar0 = (fVar0 + fVar1);
	STATS::STAT_GET_FLOAT(joaat("SP2_DIST_DRIVING_PLANE"), &fVar1, -1);
	fVar0 = (fVar0 + fVar1);
	STATS::STAT_GET_FLOAT(joaat("SP2_DIST_DRIVING_HELI"), &fVar1, -1);
	fVar0 = (fVar0 + fVar1);
	fVar0 = (fVar0 + fVar1);
	if (fVar0 > (1609.344f * 50000f))
	{
		if (!BitTest(Global_113386.f_10194.f_3855, 21))
		{
			STATS::PRESENCE_EVENT_UPDATESTAT_FLOAT(joaat("SP0_DIST_DRIVING_PLANE"), 50000f, 0);
			MISC::SET_BIT(&(Global_113386.f_10194.f_3855), 19);
			MISC::SET_BIT(&(Global_113386.f_10194.f_3855), 20);
			MISC::SET_BIT(&(Global_113386.f_10194.f_3855), 21);
		}
	}
	if (fVar0 > (1609.344f * 5000f))
	{
		if (!BitTest(Global_113386.f_10194.f_3855, 20))
		{
			STATS::PRESENCE_EVENT_UPDATESTAT_FLOAT(joaat("SP0_DIST_DRIVING_PLANE"), 5000f, 0);
			MISC::SET_BIT(&(Global_113386.f_10194.f_3855), 19);
			MISC::SET_BIT(&(Global_113386.f_10194.f_3855), 20);
		}
	}
	if (fVar0 > (1609.344f * 500f))
	{
		if (!BitTest(Global_113386.f_10194.f_3855, 19))
		{
			STATS::PRESENCE_EVENT_UPDATESTAT_FLOAT(joaat("SP0_DIST_DRIVING_PLANE"), 500f, 0);
			MISC::SET_BIT(&(Global_113386.f_10194.f_3855), 19);
		}
	}
}

void func_150()//Position - 0x22746
{
	float fVar0;
	float fVar1;
	fVar0 = 0f;
	STATS::STAT_GET_FLOAT(joaat("SP0_DIST_DRIVING_CAR"), &fVar1, -1);
	fVar0 = (fVar0 + fVar1);
	STATS::STAT_GET_FLOAT(joaat("SP0_DIST_DRIVING_QUADBIKE"), &fVar1, -1);
	fVar0 = (fVar0 + fVar1);
	STATS::STAT_GET_FLOAT(joaat("SP0_DIST_DRIVING_BIKE"), &fVar1, -1);
	fVar0 = (fVar0 + fVar1);
	STATS::STAT_GET_FLOAT(joaat("SP0_DIST_DRIVING_BICYCLE"), &fVar1, -1);
	fVar0 = (fVar0 + fVar1);
	fVar0 = (fVar0 + fVar1);
	STATS::STAT_GET_FLOAT(joaat("SP1_DIST_DRIVING_CAR"), &fVar1, -1);
	fVar0 = (fVar0 + fVar1);
	STATS::STAT_GET_FLOAT(joaat("SP1_DIST_DRIVING_QUADBIKE"), &fVar1, -1);
	fVar0 = (fVar0 + fVar1);
	STATS::STAT_GET_FLOAT(joaat("SP1_DIST_DRIVING_BIKE"), &fVar1, -1);
	fVar0 = (fVar0 + fVar1);
	STATS::STAT_GET_FLOAT(joaat("SP1_DIST_DRIVING_BICYCLE"), &fVar1, -1);
	fVar0 = (fVar0 + fVar1);
	fVar0 = (fVar0 + fVar1);
	STATS::STAT_GET_FLOAT(joaat("SP2_DIST_DRIVING_CAR"), &fVar1, -1);
	fVar0 = (fVar0 + fVar1);
	STATS::STAT_GET_FLOAT(joaat("SP2_DIST_DRIVING_QUADBIKE"), &fVar1, -1);
	fVar0 = (fVar0 + fVar1);
	STATS::STAT_GET_FLOAT(joaat("SP2_DIST_DRIVING_BIKE"), &fVar1, -1);
	fVar0 = (fVar0 + fVar1);
	STATS::STAT_GET_FLOAT(joaat("SP2_DIST_DRIVING_BICYCLE"), &fVar1, -1);
	fVar0 = (fVar0 + fVar1);
	fVar0 = (fVar0 + fVar1);
	if (fVar0 > (1609.344f * 50000f))
	{
		if (!BitTest(Global_113386.f_10194.f_3855, 2))
		{
			STATS::PRESENCE_EVENT_UPDATESTAT_FLOAT(joaat("SP0_DIST_DRIVING_CAR"), 50000f, 0);
			MISC::SET_BIT(&(Global_113386.f_10194.f_3855), 0);
			MISC::SET_BIT(&(Global_113386.f_10194.f_3855), 1);
			MISC::SET_BIT(&(Global_113386.f_10194.f_3855), 2);
		}
	}
	if (fVar0 > (1609.344f * 5000f))
	{
		if (!BitTest(Global_113386.f_10194.f_3855, 1))
		{
			STATS::PRESENCE_EVENT_UPDATESTAT_FLOAT(joaat("SP0_DIST_DRIVING_CAR"), 5000f, 0);
			MISC::SET_BIT(&(Global_113386.f_10194.f_3855), 0);
			MISC::SET_BIT(&(Global_113386.f_10194.f_3855), 1);
		}
	}
	if (fVar0 > (1609.344f * 500f))
	{
		if (!BitTest(Global_113386.f_10194.f_3855, 0))
		{
			STATS::PRESENCE_EVENT_UPDATESTAT_FLOAT(joaat("SP0_DIST_DRIVING_CAR"), 500f, 0);
			MISC::SET_BIT(&(Global_113386.f_10194.f_3855), 0);
		}
	}
}

void func_151()//Position - 0x22940
{
	if (!BitTest(Global_113386.f_10194.f_3856, 15))
	{
		if (STATS::GET_PLAYER_HAS_DRIVEN_ALL_VEHICLES())
		{
			MISC::SET_BIT(&(Global_113386.f_10194.f_3856), 15);
			STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("SP_VEHICLE_MODELS_DRIVEN"), 200, 0);
		}
	}
}

