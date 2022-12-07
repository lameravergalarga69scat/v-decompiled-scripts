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
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	float fLocal_28 = 0f;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	int iLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
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
	float fLocal_62 = 0f;
	var uLocal_63 = 0;
	struct<5> Local_64 = { 0, 0, 0, 0, 0 } ;
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
	var uLocal_77 = 1;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = -1;
	var uLocal_82 = -1;
	var uLocal_83 = 2;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 2;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	var uLocal_130 = 0;
	var uLocal_131 = 0;
	var uLocal_132 = 0;
	var uLocal_133 = 0;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	var uLocal_138 = 0;
	var uLocal_139 = 0;
	var uLocal_140 = 0;
	var uLocal_141 = 0;
	var uLocal_142 = 0;
	var uLocal_143 = 0;
	var uLocal_144 = 0;
	var uLocal_145 = 0;
	var uLocal_146 = 0;
	var uLocal_147 = 0;
	var uLocal_148 = 0;
	var uLocal_149 = 0;
	var uLocal_150 = 0;
	var uLocal_151 = 0;
	var uLocal_152 = 0;
	var uLocal_153 = 0;
	var uLocal_154 = 0;
	var uLocal_155 = 0;
	struct<88> Local_156 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_157 = 0;
	bool bLocal_158 = 0;
#endregion
void __EntryFunction__()//Position - 0x0
{
	bool bVar0;
	struct<10> Var1;
	char cVar2[64];
	int iVar3;
	int iVar4;
	bool bVar5;
	char[] cVar6[8];
	int iVar7;
	int iVar8;
	bool bVar9;
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
	fLocal_23 = 80f;
	fLocal_24 = 140f;
	fLocal_25 = 180f;
	fLocal_28 = 0f;
	fLocal_32 = -0.0375f;
	fLocal_33 = 0.17f;
	iLocal_36 = 3;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_62 = ((0.05f + 0.275f) - 0.01f);
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	while (true)
	{
		SYSTEM::WAIT(0);
		bLocal_158 = false;
		bVar0 = func_539();
		Global_2656982.f_3 = 0;
		Global_2657430 = 0;
		if (func_538())
		{
			bLocal_158 = true;
			Var1 = { Global_2656982.f_4 };
			MemCopy(&cVar2, {Var1.f_3}, 8);
			iVar3 = __LIB_0__::func_685(Global_2656982.f_4, 1);
			iVar4 = PLAYER::PLAYER_ID();
			bVar5 = Global_2656982.f_14;
			if (bVar5)
			{
				cVar2 = { Global_2656982.f_15 };
			}
			if (Global_2656982.f_25)
			{
				__LIB_35__::func_57(&Local_64, 1, 1);
				MISC::CLEAR_BIT(&(Global_1853348[iVar4 /*834*/].f_36.f_18), 2);
				MISC::CLEAR_BIT(&(Global_1853348[iVar4 /*834*/].f_36.f_18), 1);
				MISC::CLEAR_BIT(&(Global_1853348[iVar4 /*834*/].f_36.f_18), 3);
				__LIB_1__::func_685();
				__LIB_1__::func_684();
				Global_2656982.f_25 = 0;
			}
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				__LIB_22__::func_957();
			}
			else if (!func_119(&Local_64, &cVar2, &(Global_1853348[iVar4 /*834*/].f_36.f_18), iVar3, 0, 0, 1, 0, 1, bVar5, 0, 1, 0, 1))
			{
				Global_2656982.f_23 = 0;
				Global_2656982.f_27 = -1;
				if (bVar0)
				{
					__LIB_35__::func_57(&Local_64, 1, 1);
					NETWORK::UGC_CANCEL_QUERY();
					__LIB_1__::func_778();
					Global_2656982.f_23 = 1;
					Global_2656982.f_24 = 0;
					if (Global_2656982.f_27 < 0)
					{
						Global_2656982.f_27 = 0;
					}
					else
					{
						Global_2656982.f_27++;
						if (Global_2656982.f_27 >= 10)
						{
							__LIB_22__::func_957();
							Global_2656982.f_25 = 1;
						}
					}
				}
			}
			else if (Local_64.f_0)
			{
				Global_2656982.f_23 = 1;
				Global_2656982.f_24 = 1;
				if (Global_2656982.f_27 < 0)
				{
					Global_2656982.f_27 = 0;
				}
				else
				{
					Global_2656982.f_27++;
					if (Global_2656982.f_27 >= 10)
					{
						__LIB_22__::func_957();
					}
				}
			}
			else
			{
				Global_2656982.f_26++;
				if (Global_2656982.f_26 >= 3)
				{
					Global_2656982.f_23 = 1;
					Global_2656982.f_24 = 0;
					if (Global_2656982.f_27 < 0)
					{
						Global_2656982.f_27 = 0;
					}
					else
					{
						Global_2656982.f_27++;
						if (Global_2656982.f_27 >= 10)
						{
							__LIB_22__::func_957();
							Global_2656982.f_25 = 1;
						}
					}
				}
				else
				{
					Global_2656982.f_25 = 1;
				}
			}
		}
		if (func_117())
		{
			bLocal_158 = true;
			MemCopy(&cVar6, {Global_2656982.f_4.f_3}, 8);
			if (Global_2656982.f_23)
			{
				__LIB_22__::func_957();
			}
			else
			{
				if (Global_2656982.f_25)
				{
					__LIB_35__::func_57(&Local_64, 1, 1);
					Global_2656982.f_25 = 0;
				}
				iVar7 = 0;
				if (!func_113(&Local_64, &cVar6, &Local_156, &iVar7))
				{
					Global_2656982.f_23 = 0;
					Global_2656982.f_27 = -1;
				}
				else if (Local_64.f_0)
				{
					Global_2656982.f_23 = 1;
					Global_2656982.f_24 = 1;
					Global_2656982.f_28 = Local_156.f_65;
					Global_2656982.f_29 = Local_156.f_68;
					Global_2656982.f_30 = { Local_156.f_22 };
					Global_2656982.f_46 = { Local_156.f_38 };
					Global_2714762.f_5 = iVar7;
					Global_2714762.f_6 = iVar7;
					Global_2714762.f_7 = iVar7;
					Global_2714762.f_8 = iVar7;
					Global_2660929 = { Local_156 };
				}
				else
				{
					Global_2656982.f_23 = 1;
					Global_2656982.f_24 = 0;
				}
			}
		}
		if (func_112())
		{
			bLocal_158 = true;
			if (Global_2656982.f_23)
			{
				__LIB_22__::func_957();
			}
			else
			{
				if (Global_2656982.f_25)
				{
					__LIB_35__::func_57(&Local_64, 1, 1);
					Global_2656982.f_25 = 0;
				}
				iVar8 = Local_64.f_4;
				if (!func_5(&Local_64))
				{
					Global_2657430 = 1;
					if (iVar8 != Local_64.f_4)
					{
						if (Local_64.f_4 == 4)
						{
							iLocal_157 = (MISC::GET_GAME_TIMER() + 50000);
						}
					}
					bVar9 = false;
					if (Local_64.f_4 == 4)
					{
						if (MISC::GET_GAME_TIMER() > iLocal_157)
						{
							Global_2656982.f_23 = 1;
							Global_2656982.f_24 = 0;
							bVar9 = true;
						}
					}
					if (!bVar9)
					{
						Global_2656982.f_23 = 0;
						Global_2656982.f_27 = -1;
					}
				}
				else if (Local_64.f_0)
				{
					Global_2656982.f_23 = 1;
					Global_2656982.f_24 = 1;
				}
				else
				{
					Global_2656982.f_23 = 1;
					Global_2656982.f_24 = 0;
				}
			}
		}
		if (!bLocal_158)
		{
			if (__LIB_0__::func_693(PLAYER::PLAYER_ID()) || __LIB_0__::func_694(PLAYER::PLAYER_ID()))
			{
				if (!__LIB_1__::func_155(PLAYER::PLAYER_ID(), 1, 0))
				{
					SCRIPT::TERMINATE_THIS_THREAD();
				}
			}
		}
	}
}

int func_5(bool bParam0)//Position - 0x516
{
	if (!__LIB_9__::func_96())
	{
		if (__LIB_19__::func_799())
		{
			return 1;
		}
	}
	switch (bParam0->f_4)
	{
		case 0:
			if (__LIB_1__::func_714())
			{
				return 0;
			}
			if (__LIB_11__::func_550())
			{
				return 0;
			}
			__LIB_20__::func_582();
			__LIB_1__::func_713();
			__LIB_15__::func_454();
			if (__LIB_9__::func_96())
			{
				NETWORK::UGC_SET_QUERY_DATA_FROM_OFFLINE(true);
			}
			else
			{
				NETWORK::UGC_SET_QUERY_DATA_FROM_OFFLINE(false);
			}
			bParam0->f_13 = Global_2657429;
			bParam0->f_9 = 2000;
			if (bParam0->f_13 == 0)
			{
				return 1;
			}
			__LIB_30__::func_410(bParam0, 24);
			break;
		case 24:
			if (func_100(bParam0->f_13))
			{
				__LIB_35__::func_57(bParam0, 1, 1);
				*bParam0 = 1;
				return 1;
			}
			else
			{
				__LIB_30__::func_410(bParam0, 1);
			}
			break;
		case 1:
			if (NETWORK::UGC_QUERY_BY_CONTENT_IDS(&Global_2657044, bParam0->f_13, true, __LIB_1__::func_712(0)))
			{
				__LIB_30__::func_410(bParam0, 2);
			}
			break;
		case 2:
			if (NETWORK::UGC_HAS_GET_FINISHED())
			{
				if (NETWORK::UGC_DID_GET_SUCCEED())
				{
					*bParam0 = 0;
				}
				else
				{
					__LIB_35__::func_57(bParam0, 1, 1);
					bParam0->f_41 = NETWORK::UGC_GET_QUERY_RESULT();
					*bParam0 = 0;
					return 1;
				}
				if (NETWORK::UGC_GET_CONTENT_NUM() > 0)
				{
					__LIB_30__::func_410(bParam0, 4);
				}
				else
				{
					__LIB_35__::func_57(bParam0, 1, 1);
					*bParam0 = 0;
					return 1;
				}
			}
			break;
		case 4:
			if (NETWORK::UGC_WAS_QUERY_FORCE_CANCELLED())
			{
				__LIB_1__::func_713();
				*bParam0 = 0;
				return 1;
			}
			if (bParam0->f_9 >= (2000 + bParam0->f_13))
			{
				__LIB_35__::func_57(bParam0, 1, 1);
				*bParam0 = 1;
				return 1;
			}
			else
			{
				bParam0->f_7 = 0;
				while (bParam0->f_7 < bParam0->f_13)
				{
					if (bParam0->f_9 < 2018)
					{
						if (DATAFILE::DATAFILE_GET_FILE_DICT(0) != 0)
						{
							DATAFILE::DATAFILE_DELETE(0);
						}
						if (DATAFILE::DATAFILE_SELECT_UGC_DATA(bParam0->f_7, 0))
						{
							func_6(bParam0, 1);
						}
						else if (bParam0->f_8 > 200)
						{
							__LIB_1__::func_713();
							bParam0->f_7++;
							bParam0->f_8 = 0;
						}
					}
					bParam0->f_7++;
				}
			}
			break;
	}
	return 0;
}

void func_6(bool bParam0, bool bParam1)//Position - 0x6F3
{
	var* uVar0;
	var* uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	struct<88> Var5;
	int iVar6;
	bool bVar7;
	int iVar8;
	uVar0 = DATAFILE::DATAFILE_GET_FILE_DICT(0);
	uVar1 = DATAFILE::DATADICT_GET_DICT(uVar0, "mission");
	iVar2 = DATAFILE::DATADICT_GET_DICT(uVar1, "gen");
	if (__LIB_9__::func_96())
	{
		if (__LIB_12__::func_562(NETWORK::UGC_GET_CONTENT_ID(bParam0->f_7)))
		{
			if (DATAFILE::DATAFILE_GET_FILE_DICT(0) != 0)
			{
				DATAFILE::DATAFILE_DELETE(0);
			}
			return;
		}
	}
	if ((DATAFILE::DATADICT_GET_INT(iVar2, "type") == 0 && DATAFILE::DATADICT_GET_INT(iVar2, "subtype") == 7) && bParam0->f_9 < 2000)
	{
		if (DATAFILE::DATAFILE_GET_FILE_DICT(0) != 0)
		{
			DATAFILE::DATAFILE_DELETE(0);
		}
		return;
	}
	if (Global_262145.f_8185 /* Tunable: TOGGLE_HEISTS_OFF */)
	{
		if (DATAFILE::DATADICT_GET_INT(iVar2, "type") == 0)
		{
			if (DATAFILE::DATADICT_GET_INT(iVar2, "subtype") == 1 || DATAFILE::DATADICT_GET_INT(iVar2, "subtype") == 7)
			{
				if (DATAFILE::DATAFILE_GET_FILE_DICT(0) != 0)
				{
					DATAFILE::DATAFILE_DELETE(0);
				}
				return;
			}
			iVar3 = DATAFILE::DATADICT_GET_INT(iVar2, "optbs");
			if (BitTest(iVar3, 4) || BitTest(iVar3, 12))
			{
				if (DATAFILE::DATAFILE_GET_FILE_DICT(0) != 0)
				{
					DATAFILE::DATAFILE_DELETE(0);
				}
				return;
			}
		}
	}
	if (bParam0->f_9 == 0 && bParam1 == 0)
	{
		__LIB_12__::func_561();
		Global_794709.f_2 = 0;
		Global_794709.f_203868 = 0;
		__LIB_12__::func_560();
		iVar4 = 0;
		while (iVar4 < 13)
		{
			Global_794709.f_203883[iVar4] = 0;
			Global_794709.f_203869[iVar4] = 0;
			iVar4++;
		}
		if (__LIB_6__::func_781())
		{
			__LIB_21__::func_72(1);
			__LIB_21__::func_72(0);
			__LIB_13__::func_91(1);
		}
	}
	Var5.f_65 = -1;
	Var5.f_66 = -1;
	Var5.f_67 = 2;
	Global_794709.f_4[bParam0->f_9 /*88*/] = { Var5 };
	if (!__LIB_9__::func_96())
	{
		Global_794709.f_177589[bParam0->f_9 /*13*/].f_5 = NETWORK::UGC_GET_CONTENT_FILE_VERSION(bParam0->f_7, 0);
		Global_794709.f_4[bParam0->f_9 /*88*/].f_67 = __LIB_11__::func_535(bParam0->f_7);
		Global_794709.f_4[bParam0->f_9 /*88*/].f_66 = NETWORK::UGC_GET_CONTENT_FILE_VERSION(bParam0->f_7, Global_794709.f_4[bParam0->f_9 /*88*/].f_67);
		Global_794709.f_177589[bParam0->f_9 /*13*/].f_6 = NETWORK::UGC_GET_CONTENT_LANGUAGE(bParam0->f_7);
	}
	Global_794709.f_4[bParam0->f_9 /*88*/].f_56 = { __LIB_12__::func_311(iVar2) };
	if (DATAFILE::DATADICT_GET_TYPE(iVar2, "optbs") == 2)
	{
		Global_794709.f_4[bParam0->f_9 /*88*/].f_76 = DATAFILE::DATADICT_GET_INT(iVar2, "optbs");
	}
	MISC::CLEAR_BIT(&(Global_794709.f_4[bParam0->f_9 /*88*/].f_76), 15);
	MISC::CLEAR_BIT(&(Global_794709.f_4[bParam0->f_9 /*88*/].f_76), 18);
	MISC::CLEAR_BIT(&(Global_794709.f_4[bParam0->f_9 /*88*/].f_76), 19);
	MISC::CLEAR_BIT(&(Global_794709.f_4[bParam0->f_9 /*88*/].f_76), 29);
	MISC::CLEAR_BIT(&(Global_794709.f_4[bParam0->f_9 /*88*/].f_76), 28);
	Global_794709.f_4[bParam0->f_9 /*88*/].f_59 = { __LIB_11__::func_538(iVar2, "cam") };
	Global_794709.f_4[bParam0->f_9 /*88*/].f_62 = { __LIB_11__::func_537(iVar2) };
	if (!__LIB_9__::func_96())
	{
		if (NETWORK::UGC_IS_LANGUAGE_SUPPORTED(NETWORK::UGC_GET_CONTENT_LANGUAGE(bParam0->f_7)))
		{
			Global_794709.f_4[bParam0->f_9 /*88*/].f_54 = NETWORK::UGC_GET_CONTENT_DESCRIPTION_HASH(bParam0->f_7);
		}
		else
		{
			Global_794709.f_4[bParam0->f_9 /*88*/].f_54 = -1;
		}
	}
	if (DATAFILE::DATADICT_GET_TYPE(iVar2, "mgrk") == 2)
	{
		Global_794709.f_177589[bParam0->f_9 /*13*/].f_8 = DATAFILE::DATADICT_GET_INT(iVar2, "mgrk");
	}
	if (DATAFILE::DATADICT_GET_TYPE(iVar2, "mght") == 2)
	{
		Global_794709.f_177589[bParam0->f_9 /*13*/].f_9 = DATAFILE::DATADICT_GET_INT(iVar2, "mght");
	}
	Global_794709.f_177589[bParam0->f_9 /*13*/].f_11 = DATAFILE::DATADICT_GET_INT(iVar2, "cncmbs");
	Global_794709.f_4[bParam0->f_9 /*88*/].f_69 = DATAFILE::DATADICT_GET_INT(iVar2, "min");
	Global_794709.f_4[bParam0->f_9 /*88*/].f_71 = DATAFILE::DATADICT_GET_INT(iVar2, "num");
	if (Global_794709.f_4[bParam0->f_9 /*88*/].f_71 == -1)
	{
		Global_794709.f_4[bParam0->f_9 /*88*/].f_71 = __LIB_1__::func_527();
	}
	StringCopy(&(Global_794709.f_4[bParam0->f_9 /*88*/].f_22), NETWORK::UGC_GET_CONTENT_NAME(bParam0->f_7), 64);
	Global_794709.f_4[bParam0->f_9 /*88*/].f_65 = DATAFILE::DATADICT_GET_INT(iVar2, "type");
	if (__LIB_9__::func_96())
	{
		StringCopy(&(Global_794709.f_4[bParam0->f_9 /*88*/].f_6), __LIB_11__::func_542(), 64);
	}
	else
	{
		StringCopy(&(Global_794709.f_4[bParam0->f_9 /*88*/].f_6), NETWORK::UGC_GET_CONTENT_USER_ID(bParam0->f_7), 64);
	}
	Global_794709.f_4[bParam0->f_9 /*88*/].f_70 = DATAFILE::DATADICT_GET_INT(iVar2, "rank");
	Global_794709.f_177589[bParam0->f_9 /*13*/] = DATAFILE::DATADICT_GET_INT(iVar2, "tnum");
	if (!__LIB_9__::func_96())
	{
		Global_794709.f_4[bParam0->f_9 /*88*/].f_73 = __LIB_11__::func_536(NETWORK::UGC_GET_CONTENT_RATING(bParam0->f_7, 0), NETWORK::UGC_GET_CONTENT_RATING_COUNT(bParam0->f_7, 0));
		Global_794709.f_177589[bParam0->f_9 /*13*/].f_4 = NETWORK::UGC_GET_CONTENT_RATING_COUNT(bParam0->f_7, 0);
	}
	Global_794709.f_4[bParam0->f_9 /*88*/].f_75 = DATAFILE::DATADICT_GET_INT(iVar2, "charcon");
	Global_794709.f_4[bParam0->f_9 /*88*/].f_78 = DATAFILE::DATADICT_GET_INT(iVar2, "ltm");
	StringCopy(&(Global_794709.f_4[bParam0->f_9 /*88*/]), NETWORK::UGC_GET_CONTENT_ID(bParam0->f_7), 24);
	iVar6 = MISC::GET_HASH_KEY(&(Global_794709.f_4[bParam0->f_9 /*88*/]));
	Global_794709.f_177589[bParam0->f_9 /*13*/].f_3 = iVar6;
	if (Global_794709.f_4[bParam0->f_9 /*88*/].f_65 == 6 && !bParam1)
	{
		if (Global_1039641.f_684 < 85)
		{
			Global_794709.f_4[bParam0->f_9 /*88*/].f_68 = Global_1039641.f_684;
			Global_1039641[Global_1039641.f_684 /*3*/] = { __LIB_11__::func_538(iVar2, "area") };
			if (DATAFILE::DATADICT_GET_TYPE(iVar2, "rad") == 2)
			{
				Global_1039641.f_512[Global_1039641.f_684] = SYSTEM::TO_FLOAT(DATAFILE::DATADICT_GET_INT(iVar2, "rad"));
			}
			else
			{
				Global_1039641.f_512[Global_1039641.f_684] = DATAFILE::DATADICT_GET_FLOAT(iVar2, "rad");
			}
			Global_1039641.f_256[Global_1039641.f_684 /*3*/] = { Global_794709.f_4[bParam0->f_9 /*88*/].f_56 };
			Global_1039641.f_598[Global_1039641.f_684] = iVar6;
			Global_794709.f_4[bParam0->f_9 /*88*/].f_56 = { Global_794709.f_4[bParam0->f_9 /*88*/].f_59 };
			Global_1039641.f_684++;
		}
	}
	else
	{
		Global_794709.f_4[bParam0->f_9 /*88*/].f_68 = DATAFILE::DATADICT_GET_INT(iVar2, "subtype");
		Global_794709.f_4[bParam0->f_9 /*88*/].f_80 = DATAFILE::DATADICT_GET_INT(iVar2, "adverm");
	}
	__LIB_11__::func_534(Global_794709.f_4[bParam0->f_9 /*88*/].f_65, &(Global_794709.f_4[bParam0->f_9 /*88*/].f_71), &(Global_794709.f_4[bParam0->f_9 /*88*/].f_69));
	if (__LIB_9__::func_96())
	{
		if (MISC::ARE_STRINGS_EQUAL(NETWORK::UGC_GET_CONTENT_ID(bParam0->f_7), "lUo6JFfliE-ZQ_8gd90ZxQ"))
		{
			Global_794709.f_4[bParam0->f_9 /*88*/].f_56 = { 897.5109f, -2340.5986f, 29.4461f };
		}
	}
	MISC::SET_BIT(&(Global_794709.f_4[bParam0->f_9 /*88*/].f_76), 13);
	if (!__LIB_9__::func_96())
	{
		Global_794709.f_177589[bParam0->f_9 /*13*/].f_1 = MISC::GET_HASH_KEY(NETWORK::UGC_GET_ROOT_CONTENT_ID(bParam0->f_7));
		MISC::SET_CONTENT_ID_INDEX(Global_794709.f_177589[bParam0->f_9 /*13*/].f_1, bParam0->f_9);
	}
	Global_794709.f_177589[bParam0->f_9 /*13*/].f_2 = __LIB_11__::func_547(Global_794709.f_177589[bParam0->f_9 /*13*/].f_1, 1);
	if (__LIB_4__::func_604(Global_794709.f_177589[bParam0->f_9 /*13*/].f_1) || __LIB_4__::func_601(Global_794709.f_177589[bParam0->f_9 /*13*/].f_1))
	{
		if (Global_794709.f_4[bParam0->f_9 /*88*/].f_75 == 0)
		{
			Global_794709.f_4[bParam0->f_9 /*88*/].f_75 = 1;
		}
	}
	bVar7 = __LIB_0__::func_867(Global_794709.f_177589[bParam0->f_9 /*13*/].f_1);
	iVar8 = __LIB_12__::func_535(Global_794709.f_177589[bParam0->f_9 /*13*/].f_1);
	if (iVar8 != -1)
	{
		Global_1963929[iVar8] = bParam0->f_9;
	}
	if ((Global_794709.f_4[bParam0->f_9 /*88*/].f_65 < 13 && !bParam1) && !bVar7)
	{
		if (Global_794709.f_4[bParam0->f_9 /*88*/].f_70 <= 1000)
		{
			Global_794709.f_203869[Global_794709.f_4[bParam0->f_9 /*88*/].f_65]++;
			if (__LIB_12__::func_559(bParam0->f_9))
			{
				Global_794709.f_203869[7]++;
			}
			else if (__LIB_12__::func_558(bParam0->f_9))
			{
				Global_794709.f_203869[4]++;
			}
			else if (__LIB_12__::func_557(bParam0->f_9))
			{
				Global_794709.f_203869[10]++;
			}
			else if (__LIB_12__::func_556(bParam0->f_9))
			{
				Global_794709.f_203869[12]++;
			}
		}
	}
	if (DATAFILE::DATAFILE_GET_FILE_DICT(0) != 0)
	{
		DATAFILE::DATAFILE_DELETE(0);
	}
	if (!__LIB_9__::func_96())
	{
		if (bVar7)
		{
			Global_794709.f_4[bParam0->f_9 /*88*/].f_69 = Global_794709.f_4[bParam0->f_9 /*88*/].f_71;
		}
		if ((Global_794709.f_203868 < 5 && Global_794709.f_4[bParam0->f_9 /*88*/].f_65 == 0) && Global_794709.f_4[bParam0->f_9 /*88*/].f_68 == 1)
		{
			Global_794709.f_177589[bParam0->f_9 /*13*/].f_10 = Global_794709.f_203868;
			StringCopy(&(Global_794709.f_203837[Global_794709.f_203868 /*6*/]), NETWORK::UGC_GET_ROOT_CONTENT_ID(bParam0->f_7), 24);
			Global_794709.f_203868++;
		}
		__LIB_13__::func_90(Global_794709.f_177589[bParam0->f_9 /*13*/].f_1, &(Global_794709.f_4[bParam0->f_9 /*88*/].f_76), &(Global_794709.f_4[bParam0->f_9 /*88*/].f_77), Global_794709.f_4[bParam0->f_9 /*88*/].f_80);
		__LIB_13__::func_253(Global_794709.f_177589[bParam0->f_9 /*13*/].f_1, bParam0->f_9);
		if (bParam1)
		{
			if (NETWORK::UGC_GET_CONTENT_HAS_PLAYER_RECORD(bParam0->f_7))
			{
				MISC::SET_BIT(&(Global_794709.f_4[bParam0->f_9 /*88*/].f_76), 14);
			}
		}
		else if (!bVar7)
		{
			if (__LIB_16__::func_355(Global_794709.f_177589[bParam0->f_9 /*13*/].f_1, Global_794709.f_4[bParam0->f_9 /*88*/].f_80))
			{
				Global_794709.f_203869[11]++;
			}
			if (NETWORK::UGC_GET_CONTENT_HAS_PLAYER_RECORD(bParam0->f_7))
			{
				MISC::SET_BIT(&(Global_794709.f_4[bParam0->f_9 /*88*/].f_76), 14);
				if (BitTest(Global_794709.f_4[bParam0->f_9 /*88*/].f_76, 1) || Global_794709.f_4[bParam0->f_9 /*88*/].f_68 == 2)
				{
					Global_794709.f_203869[9]++;
				}
				if (Global_794709.f_4[bParam0->f_9 /*88*/].f_70 <= 1000)
				{
					if (Global_794709.f_4[bParam0->f_9 /*88*/].f_65 < 13)
					{
						Global_794709.f_203883[Global_794709.f_4[bParam0->f_9 /*88*/].f_65]++;
					}
				}
				Global_794709.f_177589[bParam0->f_9 /*13*/].f_7 = NETWORK::UGC_GET_CONTENT_HAS_PLAYER_BOOKMARKED(bParam0->f_7);
			}
		}
	}
	if (!bParam1 && !bVar7)
	{
		if (__LIB_6__::func_781())
		{
			__LIB_26__::func_789(Global_794709.f_4[bParam0->f_9 /*88*/].f_65, Global_794709.f_4[bParam0->f_9 /*88*/].f_68, BitTest(Global_794709.f_4[bParam0->f_9 /*88*/].f_76, 14), Global_794709.f_4[bParam0->f_9 /*88*/].f_70, 0);
			__LIB_32__::func_905(Global_794709.f_4[bParam0->f_9 /*88*/].f_65, Global_794709.f_4[bParam0->f_9 /*88*/].f_68, Global_794709.f_4[bParam0->f_9 /*88*/].f_70, 0);
			__LIB_36__::func_460(Global_794709.f_4[bParam0->f_9 /*88*/].f_65, Global_794709.f_4[bParam0->f_9 /*88*/].f_68, Global_794709.f_4[bParam0->f_9 /*88*/].f_75, Global_794709.f_4[bParam0->f_9 /*88*/].f_70, BitTest(Global_794709.f_4[bParam0->f_9 /*88*/].f_76, 14));
			__LIB_38__::func_650(Global_794709.f_4[bParam0->f_9 /*88*/].f_65, Global_794709.f_4[bParam0->f_9 /*88*/].f_68, Global_794709.f_4[bParam0->f_9 /*88*/].f_75, Global_794709.f_4[bParam0->f_9 /*88*/].f_70);
		}
	}
	if (Global_794709.f_4[bParam0->f_9 /*88*/].f_65 == 6)
	{
		Global_1040326[0 /*66*/]++;
	}
	bParam0->f_9++;
	Global_794709.f_2++;
	if (DATAFILE::DATAFILE_GET_FILE_DICT(0) != 0)
	{
		DATAFILE::DATAFILE_DELETE(0);
	}
}

int func_100(int iParam0)//Position - 0x3AEA
{
	int iVar0;
	int iVar1;
	int iVar2[64];
	int iVar3;
	if (Global_262145.f_3777 /* Tunable: DISABLE_UGC_PLANNING_CACHE */ == 1)
	{
		return 0;
	}
	if (Global_786550 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < iParam0)
	{
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iParam0)
	{
		iVar3 = 0;
		iVar1 = 0;
		while (iVar1 < Global_786550)
		{
			if (iVar1 < 35)
			{
				if (iVar3 == 0)
				{
					if (Global_786550.f_3082[iVar1 /*13*/].f_1 == MISC::GET_HASH_KEY(&(Global_2657044[iVar0 /*6*/])))
					{
						iVar3 = 1;
						iVar2[iVar0] = iVar1;
					}
				}
			}
			iVar1++;
		}
		if (iVar3 == 0)
		{
			return 0;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iParam0)
	{
		Global_794709.f_4[(2000 + iVar0) /*88*/] = { Global_786550.f_1[iVar2[iVar0] /*88*/] };
		Global_794709.f_177589[(2000 + iVar0) /*13*/] = { Global_786550.f_3082[iVar2[iVar0] /*13*/] };
		MISC::SET_CONTENT_ID_INDEX(Global_794709.f_177589[(2000 + iVar0) /*13*/].f_1, (2000 + iVar0));
		iVar1 = 0;
		while (iVar1 < 8)
		{
			Global_1931975.f_111[iVar0 /*204*/].f_44[iVar1 /*16*/] = { Global_786550.f_3538[iVar2[iVar0] /*132*/][iVar1 /*16*/] };
			iVar1++;
		}
		iVar0++;
	}
	__LIB_23__::func_453(1);
	return 1;
}

bool func_112()//Position - 0x3D6A
{
	return Global_2656982.f_2;
}

int func_113(bool bParam0, char* sParam1, char* sParam2, int iParam3)//Position - 0x3D78
{
	switch (bParam0->f_4)
	{
		case 0:
			*bParam0 = 0;
			if (__LIB_1__::func_714())
			{
				return 0;
			}
			__LIB_20__::func_582();
			__LIB_1__::func_713();
			if (__LIB_9__::func_96())
			{
				*bParam0 = 0;
				return 1;
			}
			else
			{
				NETWORK::UGC_SET_QUERY_DATA_FROM_OFFLINE(false);
			}
			__LIB_30__::func_410(bParam0, 1);
			break;
		case 1:
			if (NETWORK::UGC_GET_GET_BY_CONTENT_ID(sParam1, __LIB_1__::func_712(0)))
			{
				__LIB_30__::func_410(bParam0, 3);
			}
			break;
		case 3:
			if (NETWORK::UGC_HAS_GET_FINISHED())
			{
				bParam0->f_41 = NETWORK::UGC_GET_QUERY_RESULT();
				if (NETWORK::UGC_DID_GET_SUCCEED())
				{
				}
				else
				{
					__LIB_35__::func_57(bParam0, 1, 1);
					bParam0->f_41 = NETWORK::UGC_GET_QUERY_RESULT();
					*bParam0 = 0;
					return 1;
				}
				if (NETWORK::UGC_GET_CONTENT_NUM() > 0)
				{
					if (DATAFILE::DATAFILE_SELECT_UGC_DATA(0, 0))
					{
						__LIB_35__::func_248(sParam2, 0, iParam3);
						__LIB_35__::func_57(bParam0, 1, 1);
						*bParam0 = 1;
						return 1;
					}
				}
				else
				{
					__LIB_35__::func_57(bParam0, 1, 1);
					*bParam0 = 0;
					return 1;
				}
			}
			break;
	}
	return 0;
}

bool func_117()//Position - 0x403B
{
	return Global_2656982.f_1;
}

int func_119(var uParam0, char* sParam1, int* iParam2, int iParam3, bool bParam4, int iParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13)//Position - 0x405F
{
	if ((iParam3 > 10 && iParam3 <= 15) || iParam3 == 122)
	{
		*uParam0 = 1;
		MISC::SET_BIT(iParam2, 3);
		if (!BitTest(*iParam2, 2))
		{
		}
		MISC::SET_BIT(iParam2, 2);
		return 1;
	}
	if ((__LIB_3__::func_778() && __LIB_12__::func_406()) || __LIB_12__::func_405())
	{
		if (!BitTest(*iParam2, 2))
		{
		}
		MISC::SET_BIT(iParam2, 2);
		MISC::SET_BIT(iParam2, 1);
		MISC::SET_BIT(iParam2, 3);
		*uParam0 = 1;
		return 1;
	}
	if (iParam7 == 1)
	{
		if (!BitTest(*iParam2, 3))
		{
			MISC::SET_BIT(iParam2, 3);
		}
		return 1;
	}
	if (bParam4)
	{
		if (!__LIB_12__::func_402())
		{
			return 0;
		}
	}
	uParam0->f_15 = 0;
	if (bParam8)
	{
		if (__LIB_12__::func_539())
		{
			if (BitTest(*iParam2, 2))
			{
				MISC::SET_BIT(iParam2, 3);
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	if (bParam6)
	{
		if (__LIB_11__::func_550())
		{
			return 0;
		}
	}
	if (!BitTest(*iParam2, 2))
	{
		if (!BitTest(*iParam2, 1))
		{
			if (!bParam12)
			{
				__LIB_39__::func_425(1, 1, bParam11, 1);
			}
			MISC::SET_BIT(iParam2, 1);
			__LIB_35__::func_57(uParam0, 1, 1);
			*uParam0 = 0;
		}
		if (func_147(uParam0, sParam1, 0, 1, 0, iParam5, 0, 0, 1, bParam9, bParam10, bParam11, 0, bParam12, bParam13, 0))
		{
			if (((__LIB_11__::func_574(1) || Global_4718592 == 31) || Global_4718592 == 6) || Global_4718592 == 4)
			{
				if (__LIB_0__::func_788(Global_4718592.f_116524))
				{
					Global_4718592.f_631 = { __LIB_12__::func_325() };
				}
				if (__LIB_11__::func_540(Global_4718592.f_116524))
				{
					Global_4718592.f_631 = { __LIB_12__::func_324() };
				}
				if (__LIB_4__::func_602(Global_4718592.f_116524))
				{
					Global_4718592.f_631 = { __LIB_12__::func_323() };
				}
				if (__LIB_0__::func_247(Global_4718592.f_116524))
				{
					Global_4718592.f_631 = { __LIB_12__::func_322() };
				}
				if (__LIB_9__::func_201())
				{
					Global_4718592.f_631 = { __LIB_12__::func_321() };
				}
				if (__LIB_4__::func_601(Global_4718592.f_116524))
				{
					Global_4718592.f_631 = { __LIB_12__::func_320(0) };
				}
				if (__LIB_7__::func_84(Global_4718592.f_116524))
				{
					Global_4718592.f_631 = { __LIB_12__::func_319() };
				}
				if (Global_4718592.f_593 < 1)
				{
					Global_4718592.f_593 = 1;
				}
				if (Global_4718592.f_592 < 1)
				{
					Global_4718592.f_592 = 1;
				}
				if (!__LIB_12__::func_415())
				{
					__LIB_1__::func_732();
				}
			}
			else if (Global_4718592 == 1)
			{
				Global_1659840.f_4 = 99;
				Global_1659840.f_6 = Global_4718592.f_616;
				Global_1659840.f_7 = Global_4980736.f_69355;
				Global_1659840.f_9 = Global_4718592.f_110359;
				Global_1659840.f_11 = Global_4718592.f_617;
				Global_1659840.f_12 = Global_4718592.f_619;
				Global_1659840.f_13 = Global_4718592.f_621;
				Global_1659840.f_14 = Global_4718592.f_620;
				Global_1659840.f_16 = Global_4718592.f_590;
				Global_1659840.f_5 = Global_4718592.f_613;
				Global_1659840.f_10 = Global_4718592.f_627;
			}
			else if (__LIB_9__::func_794())
			{
				Global_4456484.f_7 = 9901;
				Global_4456484.f_8 = Global_4718592.f_107226 + 1;
				if (__LIB_0__::func_86(Global_4718592.f_94880))
				{
					Global_4718592.f_94880 = { Global_4718592.f_631 };
				}
			}
			MISC::SET_BIT(iParam2, 2);
			MISC::CLEAR_BIT(iParam2, 1);
			MISC::SET_BIT(iParam2, 3);
			if (*uParam0)
			{
				__LIB_12__::func_538();
				__LIB_12__::func_537();
				if (__LIB_0__::func_855())
				{
					__LIB_26__::func_722(Global_4718592.f_588);
				}
				Global_4718592.f_117083 = 1;
			}
			else
			{
				__LIB_1__::func_684();
			}
			if (!__LIB_1__::func_648())
			{
				__LIB_12__::func_536();
			}
			return 1;
		}
		else
		{
			uParam0->f_15 = 1;
		}
	}
	else
	{
		MISC::SET_BIT(iParam2, 3);
		if (Global_4718592.f_117083)
		{
			*uParam0 = 1;
		}
		return 1;
	}
	return 0;
}

int func_147(var uParam0, char* sParam1, int iParam2, bool bParam3, bool bParam4, var uParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14, bool bParam15)//Position - 0x4871
{
	var uVar0;
	var* uVar1;
	var* uVar2;
	var* uVar3;
	var uVar4;
	struct<16> Var5;
	int iVar6;
	if (uParam0->f_26 == 0)
	{
		if (__LIB_11__::func_550() && uParam0->f_4 == 0)
		{
			return 0;
		}
	}
	if (!__LIB_9__::func_96() || (iParam2 != 0 && iParam2 != 1))
	{
		if (__LIB_19__::func_799())
		{
			*uParam0 = 0;
			return 1;
		}
	}
	switch (uParam0->f_4)
	{
		case 0:
			*uParam0 = 0;
			uParam0->f_1 = 0;
			uParam0->f_28 = 0;
			uParam0->f_24 = __LIB_12__::func_401(1);
			uParam0->f_25 = __LIB_20__::func_925(1);
			if (__LIB_1__::func_714())
			{
				return 0;
			}
			__LIB_20__::func_582();
			__LIB_1__::func_713();
			if (__LIB_9__::func_96() || bParam9)
			{
				NETWORK::UGC_SET_QUERY_DATA_FROM_OFFLINE(true);
			}
			else
			{
				NETWORK::UGC_SET_QUERY_DATA_FROM_OFFLINE(false);
			}
			__LIB_12__::func_767();
			if (bParam4)
			{
				__LIB_30__::func_410(uParam0, 11);
			}
			else
			{
				__LIB_30__::func_410(uParam0, 1);
			}
			break;
		case 1:
			if (__LIB_9__::func_96() || bParam9)
			{
				if (DATAFILE::DATAFILE_LOAD_OFFLINE_UGC(sParam1, 0))
				{
					if (iParam2 == 0)
					{
						Global_4718592.f_117095 = 1;
						if (!bParam9)
						{
							StringCopy(&(Global_4718592.f_116811), sParam1, 24);
						}
						__LIB_42__::func_4(-1, 1, 0, 0);
						uParam0->f_8 = 0;
						__LIB_30__::func_410(uParam0, 9);
						*uParam0 = 1;
						__LIB_1__::func_778();
						return 1;
					}
					else if (iParam2 == 1)
					{
						if (uParam0->f_16)
						{
							StringCopy(&(Global_1050140.f_44), sParam1, 24);
							Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_17 = { Global_1050140.f_14 };
							__LIB_20__::func_909(&uVar1, &uVar0, &Global_1050140);
							if (Global_1050140.f_67 == 0)
							{
								__LIB_35__::func_57(uParam0, 1, 1);
								*uParam0 = 0;
								uParam0->f_28 = 1;
								__LIB_1__::func_713();
								__LIB_1__::func_778();
								return 1;
							}
							uParam0->f_8 = 0;
						}
						else
						{
							StringCopy(&(Global_1048576.f_44), sParam1, 24);
							Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_17 = { Global_1048576.f_14 };
							__LIB_20__::func_909(&uVar1, &uVar0, &Global_1048576);
							uParam0->f_8 = 0;
							if (Global_1048576.f_67 == 0)
							{
								__LIB_35__::func_57(uParam0, 1, 1);
								*uParam0 = 0;
								uParam0->f_28 = 1;
								__LIB_1__::func_713();
								__LIB_1__::func_778();
								return 1;
							}
						}
						__LIB_1__::func_713();
						NETWORK::UGC_CLEAR_OFFLINE_QUERY();
						NETWORK::UGC_SET_QUERY_DATA_FROM_OFFLINE(true);
						__LIB_12__::func_328(uParam0);
						__LIB_30__::func_410(uParam0, 13);
					}
					else
					{
						*uParam0 = 0;
						__LIB_1__::func_778();
						return 1;
					}
				}
				else
				{
					*uParam0 = 0;
					__LIB_1__::func_778();
					__LIB_1__::func_713();
					return 1;
				}
			}
			else if ((uParam0->f_21 != -1 && uParam0->f_22 != -1) && iParam2 == 0)
			{
				uParam0->f_5 = NETWORK::UGC_REQUEST_CONTENT_DATA_FROM_PARAMS(__LIB_1__::func_712(iParam2), sParam1, 0, uParam0->f_21, uParam0->f_22);
				DATAFILE::DATAFILE_WATCH_REQUEST_ID(uParam0->f_5);
				__LIB_30__::func_410(uParam0, 4);
			}
			else if (bParam10)
			{
				if (NETWORK::UGC_QUERY_BY_CONTENT_ID(sParam1, true, __LIB_1__::func_712(iParam2)))
				{
					__LIB_30__::func_410(uParam0, 3);
				}
			}
			else if (NETWORK::UGC_GET_GET_BY_CONTENT_ID(sParam1, __LIB_1__::func_712(iParam2)))
			{
				__LIB_30__::func_410(uParam0, 3);
			}
			break;
		case 3:
			if (NETWORK::UGC_HAS_GET_FINISHED())
			{
				uParam0->f_41 = NETWORK::UGC_GET_QUERY_RESULT();
				if (NETWORK::UGC_DID_GET_SUCCEED())
				{
				}
				else
				{
					__LIB_35__::func_57(uParam0, 1, 1);
					uParam0->f_41 = NETWORK::UGC_GET_QUERY_RESULT();
					*uParam0 = 0;
					__LIB_1__::func_778();
					return 1;
				}
				if (NETWORK::UGC_GET_CONTENT_NUM() > 0)
				{
					if (!bParam12 && !__LIB_13__::func_244(uParam0->f_24, uParam0->f_25, NETWORK::UGC_GET_CONTENT_USER_ID(0), NETWORK::UGC_GET_CONTENT_CATEGORY(0)))
					{
						__LIB_35__::func_57(uParam0, 1, 1);
						*uParam0 = 0;
						uParam0->f_27 = 1;
						__LIB_1__::func_778();
						return 1;
					}
					if (iParam2 == 0)
					{
						uParam0->f_5 = NETWORK::UGC_REQUEST_CONTENT_DATA_FROM_INDEX(0, 0);
						DATAFILE::DATAFILE_WATCH_REQUEST_ID(uParam0->f_5);
						__LIB_30__::func_410(uParam0, 4);
					}
					else if (iParam2 == 1)
					{
						if (DATAFILE::DATAFILE_SELECT_UGC_DATA(0, 0))
						{
							if (uParam0->f_16)
							{
								StringCopy(&(Global_1050140.f_14), NETWORK::UGC_GET_CONTENT_NAME(0), 64);
								StringCopy(&(Global_1050140.f_38), NETWORK::UGC_GET_CONTENT_ID(0), 24);
								Global_1050140.f_73 = NETWORK::UGC_GET_CONTENT_CATEGORY(0);
								StringCopy(&(Global_1050140.f_44), sParam1, 24);
								Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_17 = { Global_1050140.f_14 };
								__LIB_20__::func_909(&uVar1, &uVar0, &Global_1050140);
								if (Global_1050140.f_67 == 0)
								{
									__LIB_35__::func_57(uParam0, 1, 1);
									*uParam0 = 0;
									uParam0->f_28 = 1;
									__LIB_1__::func_713();
									__LIB_1__::func_778();
									return 1;
								}
								uParam0->f_8 = 0;
							}
							else
							{
								StringCopy(&(Global_1048576.f_14), NETWORK::UGC_GET_CONTENT_NAME(0), 64);
								StringCopy(&(Global_1048576.f_38), NETWORK::UGC_GET_CONTENT_ID(0), 24);
								Global_1048576.f_73 = NETWORK::UGC_GET_CONTENT_CATEGORY(0);
								StringCopy(&(Global_1048576.f_44), sParam1, 24);
								Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_17 = { Global_1048576.f_14 };
								__LIB_20__::func_909(&uVar1, &uVar0, &Global_1048576);
								uParam0->f_8 = 0;
							}
							__LIB_1__::func_713();
							__LIB_30__::func_410(uParam0, 10);
						}
						else
						{
							__LIB_35__::func_57(uParam0, 1, 1);
							*uParam0 = 0;
							__LIB_1__::func_778();
							return 1;
						}
					}
					else if (iParam2 == 4)
					{
						if (DATAFILE::DATAFILE_SELECT_UGC_DATA(0, 0))
						{
							if (uParam0->f_16)
							{
								__LIB_21__::func_10(&uVar1, &uVar0, &Global_1050140, iParam6);
								if (iParam6 == 1)
								{
									__LIB_35__::func_57(uParam0, 1, 1);
									*uParam0 = 1;
									__LIB_1__::func_778();
									return 1;
								}
								StringCopy(&(Global_1050140.f_14), NETWORK::UGC_GET_CONTENT_NAME(0), 64);
								StringCopy(&(Global_1050140.f_38), NETWORK::UGC_GET_CONTENT_ID(0), 24);
								StringCopy(&(Global_1050140.f_44), sParam1, 24);
								Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_17 = { Global_1050140.f_14 };
								uParam0->f_8 = 0;
							}
							else
							{
								__LIB_21__::func_10(&uVar1, &uVar0, &Global_1048576, iParam6);
								if (iParam6 == 1)
								{
									__LIB_35__::func_57(uParam0, 1, 1);
									*uParam0 = 1;
									__LIB_1__::func_778();
									return 1;
								}
								StringCopy(&(Global_1048576.f_14), NETWORK::UGC_GET_CONTENT_NAME(0), 64);
								StringCopy(&(Global_1048576.f_38), NETWORK::UGC_GET_CONTENT_ID(0), 24);
								StringCopy(&(Global_1048576.f_44), sParam1, 24);
								Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_17 = { Global_1048576.f_14 };
								uParam0->f_8 = 0;
							}
							__LIB_1__::func_713();
							__LIB_30__::func_410(uParam0, 10);
						}
						else
						{
							__LIB_35__::func_57(uParam0, 1, 1);
							*uParam0 = 0;
							__LIB_1__::func_778();
							return 1;
						}
					}
				}
				else
				{
					__LIB_35__::func_57(uParam0, 1, 1);
					*uParam0 = 0;
					__LIB_1__::func_778();
					return 1;
				}
			}
			break;
		case 4:
			if (NETWORK::CLOUD_HAS_REQUEST_COMPLETED(uParam0->f_5))
			{
				if (uParam0->f_2)
				{
					uParam0->f_2 = 0;
					HUD::BUSYSPINNER_OFF();
				}
				if (NETWORK::CLOUD_DID_REQUEST_SUCCEED(uParam0->f_5))
				{
					__LIB_30__::func_410(uParam0, 6);
				}
				else if (uParam0->f_22 != 1)
				{
					uParam0->f_22 = 1;
					uParam0->f_3 = 1;
					__LIB_30__::func_410(uParam0, 0);
					return 0;
				}
				else
				{
					__LIB_35__::func_57(uParam0, 1, 1);
					*uParam0 = 0;
					__LIB_1__::func_778();
					return 1;
				}
			}
			else if (__LIB_0__::func_706() || __LIB_9__::func_795() == 4)
			{
				if (uParam0->f_2 == 0)
				{
					uParam0->f_2 = 1;
					HUD::BEGIN_TEXT_COMMAND_BUSYSPINNER_ON("FMMC_DOWNLOAD" /* GXT: Downloading */);
					HUD::END_TEXT_COMMAND_BUSYSPINNER_ON(5);
				}
			}
			break;
		case 6:
			if ((bParam13 && !__LIB_0__::func_942()) && !bParam14)
			{
				return 0;
			}
			if (DATAFILE::DATAFILE_HAS_LOADED_FILE_DATA(uParam0->f_5))
			{
				if (DATAFILE::DATAFILE_SELECT_ACTIVE_FILE(uParam0->f_5, 0))
				{
					if (bParam15)
					{
						*uParam0 = 1;
						return 1;
					}
					else if (bParam3)
					{
						if (bParam13)
						{
							__LIB_39__::func_425(1, 1, bParam11, 1);
						}
						if ((uParam0->f_21 != -1 && uParam0->f_22 != -1) && iParam2 == 0)
						{
							Global_4718592.f_117095 = 1;
							Global_4718592.f_117079 = 1;
							StringCopy(&(Global_4718592.f_116500), "", 64);
							StringCopy(&(Global_4718592.f_116547), "", 24);
							StringCopy(&(Global_4718592.f_116525), "RockStar", 24);
							if (bParam10)
							{
								StringCopy(&(Global_4718592.f_116811), sParam1, 24);
							}
							uParam0->f_35 = uParam0->f_22;
						}
						else
						{
							Global_4718592.f_116524 = MISC::GET_HASH_KEY(NETWORK::UGC_GET_ROOT_CONTENT_ID(0));
							StringCopy(&(Global_4718592.f_116547), NETWORK::UGC_GET_CONTENT_USER_ID(0), 24);
							Global_4718592.f_117095 = NETWORK::UGC_GET_CONTENT_CATEGORY(0);
							if (Global_4718592.f_117095 == 1 || Global_4718592.f_117095 == 2)
							{
								StringCopy(&(Global_4718592.f_116525), "RockStar", 24);
							}
							else
							{
								StringCopy(&(Global_4718592.f_116525), NETWORK::UGC_GET_CONTENT_USER_ID(0), 24);
							}
							if ((Global_4718592.f_117095 == 0 || Global_4718592.f_117095 == 3) && NETWORK::UGC_GET_CONTENT_CREATED_BY_LOCAL_PLAYER(0))
							{
								StringCopy(&(Global_4718592.f_116500), PLAYER::GET_PLAYER_NAME(PLAYER::PLAYER_ID()), 64);
							}
							else if ((__LIB_0__::func_53() && (Global_4718592.f_117095 == 0 || Global_4718592.f_117095 == 3)) && __LIB_12__::func_327(&iVar6, &(Global_4718592.f_116547)))
							{
								StringCopy(&(Global_4718592.f_116500), PLAYER::GET_PLAYER_NAME(iVar6), 64);
							}
							else
							{
								StringCopy(&(Global_4718592.f_116500), NETWORK::UGC_GET_CONTENT_USER_NAME(0), 64);
							}
							Global_4718592.f_116818 = NETWORK::UGC_GET_CONTENT_RATING_COUNT(0, 0);
							Global_4718592.f_117081 = NETWORK::UGC_GET_CONTENT_IS_USING_SC_NICKNAME(0);
							uParam0->f_23 = __LIB_11__::func_535(0);
							Global_4718592.f_162945 = uParam0->f_23;
							if (bParam10)
							{
								StringCopy(&(Global_4718592.f_116811), NETWORK::UGC_GET_CONTENT_ID(0), 24);
							}
							if (Global_4718592.f_117095 == 0 || Global_4718592.f_117095 == 3)
							{
								if ((NETWORK::UGC_GET_CONTENT_CREATOR_GAMER_HANDLE(0, &uVar4) && NETWORK::NETWORK_IS_HANDLE_VALID(&uVar4, 13)) && NETWORK::NETWORK_IS_FRIEND(&uVar4))
								{
									Var5 = { Global_4718592.f_116500 };
									__LIB_12__::func_326(1, Var5);
								}
								else
								{
									__LIB_12__::func_326(0, Var5);
								}
							}
							else
							{
								__LIB_12__::func_326(0, Var5);
							}
							Global_4718592.f_8 = __LIB_11__::func_536(NETWORK::UGC_GET_CONTENT_RATING(0, 0), NETWORK::UGC_GET_CONTENT_RATING_COUNT(0, 0));
							if (NETWORK::UGC_GET_CONTENT_HAS_PLAYER_RECORD(uParam0->f_7))
							{
								Global_4718592.f_117080 = NETWORK::UGC_GET_CONTENT_HAS_PLAYER_BOOKMARKED(0);
								Global_4718592.f_117082 = 1;
							}
							else
							{
								Global_4718592.f_117080 = 0;
								Global_4718592.f_117082 = 0;
							}
							Global_4718592.f_117079 = NETWORK::UGC_GET_CONTENT_IS_PUBLISHED(0);
							uParam0->f_35 = NETWORK::UGC_GET_CONTENT_LANGUAGE(0);
							if (!__LIB_9__::func_96())
							{
								if (NETWORK::UGC_IS_LANGUAGE_SUPPORTED(uParam0->f_35))
								{
									uParam0->f_31 = NETWORK::UGC_GET_CONTENT_DESCRIPTION_HASH(0);
								}
								else
								{
									uParam0->f_31 = -1;
								}
							}
							Global_4718592.f_116817 = uParam0->f_31;
							Global_2715699.f_4311.f_3 = NETWORK::UGC_GET_CONTENT_RATING_NEGATIVE_COUNT(0, 0);
							Global_2715699.f_4311.f_2 = NETWORK::UGC_GET_CONTENT_RATING_POSITIVE_COUNT(0, 0);
							if (Global_4718592.f_117095 == 1 || Global_4718592.f_117095 == 2)
							{
								StringCopy(&(Global_4718592.f_116500), __LIB_11__::func_542(), 64);
							}
						}
						if (!bParam10)
						{
							StringCopy(&(Global_4718592.f_116811), sParam1, 24);
						}
						uParam0->f_32 = 0;
						if (!__LIB_9__::func_96())
						{
							__LIB_42__::func_4(uParam0->f_35, bParam11, (bParam13 || bParam14), uParam0->f_32);
							if (__LIB_0__::func_788(Global_4718592.f_116524))
							{
								Global_4718592.f_631 = { __LIB_12__::func_325() };
							}
							if (__LIB_11__::func_540(Global_4718592.f_116524))
							{
								Global_4718592.f_631 = { __LIB_12__::func_324() };
							}
							if (__LIB_4__::func_602(Global_4718592.f_116524))
							{
								Global_4718592.f_631 = { __LIB_12__::func_323() };
							}
							if (__LIB_0__::func_247(Global_4718592.f_116524))
							{
								Global_4718592.f_631 = { __LIB_12__::func_322() };
							}
							if (__LIB_9__::func_201())
							{
								Global_4718592.f_631 = { __LIB_12__::func_321() };
							}
							if (__LIB_4__::func_601(Global_4718592.f_116524) && !bParam12)
							{
								Global_4718592.f_631 = { __LIB_12__::func_320(0) };
							}
							if (__LIB_7__::func_84(Global_4718592.f_116524))
							{
								Global_4718592.f_631 = { __LIB_12__::func_319() };
							}
							if (Global_4718592.f_117095 == 0 && (func_176(Global_4718592.f_631) || __LIB_21__::func_9()))
							{
								__LIB_35__::func_57(uParam0, 1, 1);
								uParam0->f_42.f_3 = 0;
								*uParam0 = 0;
								uParam0->f_1 = 1;
								__LIB_1__::func_778();
								return 1;
							}
							else if (bParam13 || bParam14)
							{
								__LIB_30__::func_410(uParam0, 5);
								return 0;
							}
						}
						else
						{
							__LIB_42__::func_4(-1, bParam11, 0, 0);
						}
						if (func_170(uParam0, iParam2, bParam13, bParam9))
						{
							return 1;
						}
					}
					else
					{
						uVar1 = DATAFILE::DATAFILE_GET_FILE_DICT(0);
						uVar2 = DATAFILE::DATADICT_GET_DICT(uVar1, "mission");
						uVar3 = DATAFILE::DATADICT_GET_DICT(uVar2, "gen");
						StringCopy(&(Global_2703735.f_3437), NETWORK::UGC_GET_CONTENT_NAME(0), 32);
						Global_2703735.f_3437.f_8 = DATAFILE::DATADICT_GET_INT(uVar3, "type");
						uParam0->f_17 = NETWORK::UGC_GET_CONTENT_HAS_PLAYER_RECORD(0);
						*uParam0 = 1;
						__LIB_1__::func_778();
						DATAFILE::DATAFILE_DELETE_REQUESTED_FILE(uParam0->f_5);
						__LIB_1__::func_713();
						return 1;
					}
					DATAFILE::DATAFILE_DELETE_REQUESTED_FILE(uParam0->f_5);
					__LIB_1__::func_713();
				}
				else if (iParam2 == 0)
				{
					__LIB_35__::func_57(uParam0, 1, 1);
					uParam0->f_42.f_3 = 0;
					*uParam0 = 0;
					uParam0->f_1 = 1;
					__LIB_1__::func_778();
					return 1;
				}
				else
				{
					uParam0->f_8++;
					if (uParam0->f_8 > 1000)
					{
						__LIB_35__::func_57(uParam0, 1, 1);
						uParam0->f_42.f_3 = 0;
						*uParam0 = 0;
						__LIB_1__::func_778();
						return 1;
					}
				}
			}
			break;
		case 5:
			__LIB_42__::func_4(uParam0->f_35, bParam11, (bParam13 || bParam14), uParam0->f_32);
			if (uParam0->f_32 >= 6)
			{
				if (func_170(uParam0, iParam2, (bParam13 || bParam14), bParam9))
				{
					return 1;
				}
			}
			uParam0->f_32++;
			break;
		case 9:
			if (__LIB_26__::func_767(uParam0, 0, bParam3, 0))
			{
				__LIB_30__::func_410(uParam0, 0);
				__LIB_1__::func_713();
				if ((((__LIB_20__::func_907(Global_4718592.f_116524) && __LIB_11__::func_574(1)) && !bParam9) && !MISC::IS_STRING_NULL_OR_EMPTY(&(Global_4718592.f_116841[0 /*6*/]))) && (__LIB_0__::func_706() || (__LIB_7__::func_85() && !__LIB_12__::func_735())))
				{
					uParam0->f_8 = 0;
					__LIB_30__::func_410(uParam0, 19);
					return 0;
				}
				if ((uParam5 || bParam7) && !bParam13)
				{
					if (bParam7 || uParam5)
					{
						uParam0->f_23 = __LIB_11__::func_535(0);
						uParam0->f_21 = NETWORK::UGC_GET_CONTENT_FILE_VERSION(0, uParam0->f_23);
					}
					__LIB_12__::func_315(&(uParam0->f_42), 0);
					__LIB_30__::func_410(uParam0, 18);
				}
				else
				{
					uParam0->f_42.f_3 = 1;
					__LIB_35__::func_57(uParam0, 1, 0);
					__LIB_1__::func_778();
					return 1;
				}
			}
			break;
		case 19:
			if (NETWORK::UGC_QUERY_BY_CONTENT_ID(&(Global_4718592.f_116841[0 /*6*/]), true, __LIB_1__::func_712(iParam2)))
			{
				__LIB_30__::func_410(uParam0, 21);
			}
			break;
		case 21:
			if (NETWORK::UGC_HAS_GET_FINISHED())
			{
				uParam0->f_41 = NETWORK::UGC_GET_QUERY_RESULT();
				if (NETWORK::UGC_DID_GET_SUCCEED())
				{
				}
				else
				{
					__LIB_35__::func_57(uParam0, 1, 1);
					uParam0->f_41 = NETWORK::UGC_GET_QUERY_RESULT();
					*uParam0 = 0;
					__LIB_1__::func_778();
					return 1;
				}
				if (NETWORK::UGC_GET_CONTENT_NUM() > 0)
				{
					uParam0->f_5 = NETWORK::UGC_REQUEST_CONTENT_DATA_FROM_INDEX(0, 0);
					DATAFILE::DATAFILE_WATCH_REQUEST_ID(uParam0->f_5);
					__LIB_30__::func_410(uParam0, 22);
				}
				else
				{
					__LIB_35__::func_57(uParam0, 1, 1);
					*uParam0 = 0;
					__LIB_1__::func_778();
					return 1;
				}
			}
			break;
		case 22:
			if (NETWORK::CLOUD_HAS_REQUEST_COMPLETED(uParam0->f_5))
			{
				if (NETWORK::CLOUD_DID_REQUEST_SUCCEED(uParam0->f_5))
				{
					__LIB_30__::func_410(uParam0, 23);
				}
				else if (uParam0->f_22 != 1)
				{
					uParam0->f_22 = 1;
					uParam0->f_3 = 1;
					__LIB_30__::func_410(uParam0, 0);
					return 0;
				}
				else
				{
					__LIB_35__::func_57(uParam0, 1, 1);
					*uParam0 = 0;
					__LIB_1__::func_778();
					return 1;
				}
			}
			break;
		case 23:
			if (DATAFILE::DATAFILE_HAS_LOADED_FILE_DATA(uParam0->f_5))
			{
				if (DATAFILE::DATAFILE_SELECT_ACTIVE_FILE(uParam0->f_5, 0))
				{
					__LIB_21__::func_8();
					__LIB_35__::func_57(uParam0, 1, 0);
					Global_1920759 = 1;
					__LIB_1__::func_778();
					*uParam0 = 1;
					return 1;
				}
				else
				{
					__LIB_35__::func_57(uParam0, 1, 1);
					uParam0->f_42.f_3 = 0;
					*uParam0 = 0;
					uParam0->f_1 = 1;
					__LIB_1__::func_778();
					return 1;
				}
			}
			break;
		case 18:
			if (BitTest(Global_4718592.f_7, 0))
			{
				if (bParam7)
				{
					if (__LIB_12__::func_312(&(uParam0->f_42), sParam1, uParam0->f_21, uParam0->f_23))
					{
						__LIB_35__::func_57(uParam0, 1, 0);
						uParam0->f_42.f_3 = 1;
						uParam0->f_42.f_1 = 0;
						__LIB_1__::func_778();
						return 1;
					}
				}
				else
				{
					StringCopy(&(uParam0->f_42.f_4), sParam1, 64);
					uParam0->f_42.f_3 = 1;
					__LIB_35__::func_57(uParam0, 1, 0);
					__LIB_1__::func_778();
					return 1;
				}
			}
			else
			{
				uParam0->f_42.f_3 = 1;
				__LIB_35__::func_57(uParam0, 1, 1);
				__LIB_1__::func_778();
				return 1;
			}
			break;
		case 10:
			if (__LIB_26__::func_767(uParam0, 0, bParam3, iParam2))
			{
				__LIB_1__::func_713();
				__LIB_30__::func_410(uParam0, 11);
			}
			break;
		case 11:
			if (uParam0->f_16)
			{
				if (NETWORK::UGC_GET_GET_BY_CONTENT_IDS(&(Global_1050140.f_1179), Global_1050140.f_67, __LIB_1__::func_712(0)))
				{
					__LIB_30__::func_410(uParam0, 12);
				}
			}
			else if (NETWORK::UGC_GET_GET_BY_CONTENT_IDS(&(Global_1048576.f_1179), Global_1048576.f_67, __LIB_1__::func_712(0)))
			{
				__LIB_30__::func_410(uParam0, 12);
			}
			break;
		case 12:
			if (NETWORK::UGC_HAS_GET_FINISHED())
			{
				if (NETWORK::UGC_DID_GET_SUCCEED())
				{
				}
				else
				{
					__LIB_35__::func_57(uParam0, 1, 1);
					uParam0->f_41 = NETWORK::UGC_GET_QUERY_RESULT();
					*uParam0 = 0;
					__LIB_1__::func_778();
					return 1;
				}
				if (NETWORK::UGC_GET_CONTENT_NUM() > 0)
				{
					if (uParam0->f_16)
					{
						Global_1050140.f_67 = NETWORK::UGC_GET_CONTENT_NUM();
					}
					else
					{
						Global_1048576.f_67 = NETWORK::UGC_GET_CONTENT_NUM();
					}
					uParam0->f_8 = 0;
					__LIB_35__::func_57(uParam0, 0, bParam8);
					__LIB_12__::func_328(uParam0);
					__LIB_30__::func_410(uParam0, 13);
				}
				else
				{
					__LIB_35__::func_57(uParam0, 1, 1);
					*uParam0 = 0;
					__LIB_1__::func_778();
					uParam0->f_28 = 1;
					return 1;
				}
			}
			break;
		case 13:
			if (__LIB_9__::func_96())
			{
				if (uParam0->f_16)
				{
					uParam0->f_9 = 0;
					while (uParam0->f_9 <= (Global_1050140.f_67 - 1))
					{
						if (DATAFILE::DATAFILE_LOAD_OFFLINE_UGC(&(Global_1050140.f_1179[uParam0->f_9 /*6*/]), 0))
						{
							__LIB_21__::func_7(uParam0, &Global_1050140);
							NETWORK::UGC_CLEAR_OFFLINE_QUERY();
						}
						uParam0->f_9++;
					}
					__LIB_1__::func_778();
					return 1;
				}
				else
				{
					uParam0->f_9 = 0;
					while (uParam0->f_9 <= (Global_1048576.f_67 - 1))
					{
						if (DATAFILE::DATAFILE_LOAD_OFFLINE_UGC(&(Global_1048576.f_1179[uParam0->f_9 /*6*/]), 0))
						{
							__LIB_21__::func_7(uParam0, &Global_1048576);
							NETWORK::UGC_CLEAR_OFFLINE_QUERY();
						}
						uParam0->f_9++;
					}
					__LIB_1__::func_778();
					return 1;
				}
			}
			else if (uParam0->f_16)
			{
				if (__LIB_26__::func_781(uParam0, &Global_1050140))
				{
					__LIB_12__::func_310(uParam0, &Global_1050140);
					if (uParam0->f_27)
					{
						__LIB_35__::func_57(uParam0, 1, bParam8);
						*uParam0 = 0;
						uParam0->f_27 = 1;
						uParam0->f_30 = 0;
						__LIB_1__::func_778();
						return 1;
					}
					else if (uParam0->f_30 == 1)
					{
						__LIB_35__::func_57(uParam0, 1, bParam8);
						*uParam0 = 0;
						uParam0->f_27 = 0;
						__LIB_1__::func_778();
						uParam0->f_30 = 1;
						return 1;
					}
					else
					{
						__LIB_30__::func_410(uParam0, 17);
						*uParam0 = 1;
					}
				}
			}
			else if (__LIB_26__::func_781(uParam0, &Global_1048576))
			{
				__LIB_12__::func_310(uParam0, &Global_1048576);
				if (uParam0->f_27)
				{
					__LIB_35__::func_57(uParam0, 1, 1);
					*uParam0 = 0;
					uParam0->f_27 = 1;
					uParam0->f_30 = 0;
					__LIB_1__::func_778();
					return 1;
				}
				else if (uParam0->f_30 == 1)
				{
					__LIB_35__::func_57(uParam0, 1, bParam8);
					*uParam0 = 0;
					uParam0->f_27 = 0;
					uParam0->f_30 = 1;
					__LIB_1__::func_778();
					return 1;
				}
				else
				{
					__LIB_30__::func_410(uParam0, 17);
					*uParam0 = 1;
				}
			}
			break;
		case 17:
			__LIB_30__::func_410(uParam0, 0);
			__LIB_1__::func_713();
			__LIB_35__::func_57(uParam0, 1, bParam8);
			*uParam0 = 1;
			__LIB_1__::func_778();
			return 1;
			break;
	}
	return 0;
}

int func_170(var uParam0, int iParam1, bool bParam2, bool bParam3)//Position - 0x7015
{
	if (!__LIB_0__::func_236() && !bParam2)
	{
		if (uParam0->f_21 == -1 || uParam0->f_22 == -1)
		{
			if ((!__LIB_9__::func_96() && iParam1 == 0) && !bParam3)
			{
				if (Global_4718592.f_117095 == 0)
				{
					if (__LIB_12__::func_317())
					{
						__LIB_35__::func_57(uParam0, 1, 1);
						uParam0->f_42.f_3 = 0;
						*uParam0 = 0;
						__LIB_1__::func_778();
						DATAFILE::DATAFILE_DELETE_REQUESTED_FILE(uParam0->f_5);
						__LIB_1__::func_713();
						return 1;
					}
				}
			}
		}
	}
	if (Global_4718592 == 0 && Global_4718592.f_2 == 6)
	{
		if ((uParam0->f_21 == -1 && uParam0->f_22 == -1) && !__LIB_9__::func_96())
		{
			if (!NETWORK::UGC_IS_LANGUAGE_SUPPORTED(NETWORK::UGC_GET_CONTENT_LANGUAGE(0)))
			{
				Global_4718592.f_117077 = 1;
			}
		}
	}
	uParam0->f_8 = 0;
	if (bParam2)
	{
		__LIB_12__::func_316();
	}
	__LIB_30__::func_410(uParam0, 9);
	*uParam0 = 1;
	return 0;
}

int func_176(struct<3> Param0)//Position - 0x7390
{
	if (((Param0.f_2 < 0f || func_178(Param0, 999, 2f)) || __LIB_11__::func_541(Param0)) || (Global_4718592.f_95507[0 /*58*/].f_2 < -2f && !BitTest(Global_4718592.f_95507[0 /*58*/].f_29, 5)))
	{
		return 1;
	}
	return 0;
}

int func_178(struct<3> Param0, int iParam1, float fParam2)//Position - 0x7583
{
	int iVar0;
	struct<3> Var1[3];
	struct<3> Var2[3];
	int iVar3;
	if (iParam1 != 999)
	{
		iVar3 = 0;
		while (iVar3 < 3)
		{
			if (Global_1312193[iParam1 /*1951*/].f_146.f_57[iVar3 /*8*/].f_2 > Global_1312193[iParam1 /*1951*/].f_146.f_57[iVar3 /*8*/].f_3.f_2)
			{
				Var1[iVar3 /*3*/] = { Global_1312193[iParam1 /*1951*/].f_146.f_57[iVar3 /*8*/] };
				Var2[iVar3 /*3*/] = { Global_1312193[iParam1 /*1951*/].f_146.f_57[iVar3 /*8*/].f_3 };
			}
			else
			{
				Var1[iVar3 /*3*/] = { Global_1312193[iParam1 /*1951*/].f_146.f_57[iVar3 /*8*/].f_3 };
				Var2[iVar3 /*3*/] = { Global_1312193[iParam1 /*1951*/].f_146.f_57[iVar3 /*8*/] };
			}
			Var1[iVar3 /*3*/].f_2 = (Var1[iVar3 /*3*/].f_2 + fParam2);
			Var2[iVar3 /*3*/].f_2 = (Var2[iVar3 /*3*/].f_2 - fParam2);
			iVar3++;
		}
		if (((Global_1312193[iParam1 /*1951*/].f_146.f_57[0 /*8*/].f_6 != 0f && OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, Var2[0 /*3*/], Var1[0 /*3*/], Global_1312193[iParam1 /*1951*/].f_146.f_57[0 /*8*/].f_6, false, true)) || (Global_1312193[iParam1 /*1951*/].f_146.f_57[1 /*8*/].f_6 != 0f && OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, Var2[1 /*3*/], Var1[1 /*3*/], Global_1312193[iParam1 /*1951*/].f_146.f_57[1 /*8*/].f_6, false, true))) || (Global_1312193[iParam1 /*1951*/].f_146.f_57[2 /*8*/].f_6 != 0f && OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, Var2[2 /*3*/], Var1[2 /*3*/], Global_1312193[iParam1 /*1951*/].f_146.f_57[2 /*8*/].f_6, false, true)))
		{
			return 1;
		}
	}
	else
	{
		iVar0 = 1;
		while (iVar0 <= 7)
		{
			if (func_178(Param0, iVar0, fParam2))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 34;
		while (iVar0 <= 43)
		{
			if (func_178(Param0, iVar0, fParam2))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 61;
		while (iVar0 <= 65)
		{
			if (func_178(Param0, iVar0, fParam2))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 73;
		while (iVar0 <= 76)
		{
			if (func_178(Param0, iVar0, fParam2))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 77;
		while (iVar0 <= 82)
		{
			if (func_178(Param0, iVar0, fParam2))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 83;
		while (iVar0 <= 85)
		{
			if (func_178(Param0, iVar0, fParam2))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 87;
		while (iVar0 <= 90)
		{
			if (func_178(Param0, iVar0, fParam2))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 91;
		while (iVar0 <= 102)
		{
			if (func_178(Param0, iVar0, fParam2))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 103;
		while (iVar0 <= 113)
		{
			if (func_178(Param0, iVar0, fParam2))
			{
				return 1;
			}
			iVar0++;
		}
		if (func_178(Param0, 8, fParam2))
		{
			return 1;
		}
		if (func_178(Param0, 17, fParam2))
		{
			return 1;
		}
	}
	return 0;
}

bool func_538()//Position - 0x55587
{
	return Global_2656982;
}

var func_539()//Position - 0x55593
{
	return Global_2656982.f_3;
}

