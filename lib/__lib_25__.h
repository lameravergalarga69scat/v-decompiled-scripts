void func_0(bool bParam0, var uParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x179509
{
	if (iParam3 == -1)
	{
		bParam6 = false;
	}
	if (__LIB_22__::func_924(iParam3) <= 0)
	{
		bParam6 = false;
	}
	__LIB_23__::func_494(bParam0, bParam4, 1, bParam6, 0, 0, 0);
	__LIB_23__::func_517(bParam5, 0);
	if (!BitTest(uParam1, bParam2))
	{
		__LIB_23__::func_494(bParam0, "FMMC_SEL_NO", 0, bParam6, 0, 0, 0);
		return;
	}
	__LIB_23__::func_494(bParam0, "FMMC_SEL_YES", 1, bParam6, 0, 0, 0);
	__LIB_14__::func_431(15, 0);
}

void func_1(bool bParam0, var uParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x1796F9
{
	if (iParam3 == -1)
	{
		bParam6 = false;
	}
	if (__LIB_22__::func_924(iParam3) <= 0)
	{
		bParam6 = false;
	}
	__LIB_23__::func_494(bParam0, bParam4, 1, bParam6, 0, 0, 0);
	__LIB_23__::func_517(bParam5, 0);
	if (!__LIB_22__::func_992(uParam1, iParam2))
	{
		__LIB_23__::func_494(bParam0, "FMMC_SEL_NO", 0, bParam6, 0, 0, 0);
		return;
	}
	__LIB_23__::func_494(bParam0, "FMMC_SEL_YES", 1, bParam6, 0, 0, 0);
	__LIB_14__::func_431(15, 0);
}

void func_2(int* iParam0, int iParam1)//Position - 0x17A9D2
{
	__LIB_23__::func_384(iParam0);
	__LIB_1__::func_767("TMC_PED_PNTS");
	__LIB_1__::func_766(1, 1, 0, 0, 0);
	__LIB_1__::func_765(1, 2, 1, 1, 1);
	__LIB_12__::func_593(0, 1, 0, 0, 0);
	iParam0->f_270 = iParam1;
	Global_23149 = 0.3f;
	__LIB_23__::func_494(0, "FMMC_PNTS_0", 0, 1, 0, 0, 0);
	if (iParam0->f_1118 == -1)
	{
		__LIB_23__::func_494(0, "FMMC_SEL_OFF", 0, 1, 0, 0, 0);
	}
	else
	{
		__LIB_23__::func_494(0, "NUMBER", 1, 1, 0, 0, 0);
		__LIB_23__::func_517(iParam0->f_1118, 0);
	}
	__LIB_23__::func_494(1, "FMMC_PNTS_1", 0, 1, 0, 0, 0);
	if (iParam0->f_1119 == -1)
	{
		__LIB_23__::func_494(1, "FMMC_SEL_OFF", 0, 1, 0, 0, 0);
	}
	else
	{
		__LIB_23__::func_494(1, "NUMBER", 1, 1, 0, 0, 0);
		__LIB_23__::func_517(iParam0->f_1119, 0);
	}
	__LIB_23__::func_494(2, "FMMC_PNTS_2", 0, 1, 0, 0, 0);
	if (iParam0->f_1120 == -1)
	{
		__LIB_23__::func_494(2, "FMMC_SEL_OFF", 0, 1, 0, 0, 0);
	}
	else
	{
		__LIB_23__::func_494(2, "NUMBER", 1, 1, 0, 0, 0);
		__LIB_23__::func_517(iParam0->f_1120, 0);
	}
	iParam0->f_546 = 3;
}

void func_3(bool bParam0, var uParam1, bool bParam2, bool bParam3)//Position - 0x17BE2E
{
	int iVar0;
	__LIB_23__::func_494(bParam0, bParam2, 0, bParam3, 0, 0, 0);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (*uParam1 - 1))
	{
		if ((*uParam1)[iVar0] != 0)
		{
			__LIB_23__::func_494(bParam0, "FMMC_OSPW_ON", 0, bParam3, 0, 0, 0);
		}
		else
		{
			__LIB_23__::func_494(bParam0, "FMMC_OSPW_OFF", 0, bParam3, 0, 0, 0);
		}
		iVar0++;
	}
}

void func_4(int* iParam0)//Position - 0x17CA89
{
	__LIB_23__::func_384(iParam0);
	__LIB_1__::func_767("FMMC_ATT_OFFT");
	__LIB_1__::func_766(1, 1, 0, 0, 0);
	__LIB_1__::func_765(1, 2, 1, 1, 1);
	iParam0->f_270 = 130;
	iParam0->f_546 = 4;
	__LIB_23__::func_494(0, "FMMC_OVR_XVAL", 0, 1, 0, 0, 0);
	__LIB_23__::func_494(0, "NUMBER", 1, 1, 0, 0, 0);
	__LIB_23__::func_497(iParam0->f_873, 3, 0);
	__LIB_23__::func_494(1, "FMMC_OVR_YVAL", 0, 1, 0, 0, 0);
	__LIB_23__::func_494(1, "NUMBER", 1, 1, 0, 0, 0);
	__LIB_23__::func_497(iParam0->f_873.f_1, 3, 0);
	__LIB_23__::func_494(2, "FMMC_OVR_ZVAL", 0, 1, 0, 0, 0);
	__LIB_23__::func_494(2, "NUMBER", 1, 1, 0, 0, 0);
	__LIB_23__::func_497(iParam0->f_873.f_2, 3, 0);
	__LIB_23__::func_494(3, "FMMC_OVR_RESET", 0, 1, 0, 0, 0);
}

void func_5(int* iParam0)//Position - 0x1810F9
{
	struct<2> Var0;
	int iVar1;
	int iVar2;
	iParam0->f_270 = 207;
	__LIB_23__::func_384(iParam0);
	__LIB_1__::func_767("VEH_SEATP_T");
	__LIB_1__::func_766(1, 1, 0, 0, 0);
	__LIB_1__::func_765(1, 2, 1, 1, 1);
	__LIB_12__::func_593(0, 1, 0, 0, 0);
	iVar1 = 8 + 1;
	iVar2 = -1;
	iVar2 = -1;
	while (iVar2 <= (iVar1 - 1))
	{
		StringCopy(&Var0, "VEH_SEATP_BS", 16);
		__LIB_23__::func_494(iParam0->f_546, &Var0, 1, 1, 0, 0, 0);
		__LIB_23__::func_495(__LIB_23__::func_16(iVar2), 0, 0, 0);
		if (BitTest(iParam0->f_937, iVar2 + 1))
		{
			StringCopy(&Var0, "FMMC_SEL_YES", 16);
		}
		else
		{
			StringCopy(&Var0, "FMMC_SEL_OFF", 16);
		}
		__LIB_23__::func_494(iParam0->f_546, &Var0, 0, 1, 0, 0, 0);
		iParam0->f_546++;
		iVar2++;
	}
}

void func_6(int* iParam0)//Position - 0x181B43
{
	struct<2> Var0;
	bool bVar1;
	bool bVar2;
	__LIB_23__::func_384(iParam0);
	__LIB_1__::func_767("MC_T_VEHIORD");
	__LIB_1__::func_766(1, 1, 0, 0, 0);
	__LIB_1__::func_765(1, 2, 1, 1, 1);
	__LIB_12__::func_593(0, 1, 0, 0, 0);
	bVar1 = iParam0->f_2488 > -1;
	__LIB_23__::func_494(0, "MC_T_VEHIORE", 0, 1, 0, 0, 0);
	if (bVar1)
	{
		__LIB_23__::func_494(0, "FMMC_SEL_YES", 0, 1, 0, 0, 0);
	}
	else
	{
		__LIB_23__::func_494(0, "FMMC_SEL_NO", 0, 1, 0, 0, 0);
	}
	__LIB_23__::func_494(1, "MC_T_VEHIORT", 0, bVar1, 0, 0, 0);
	StringCopy(&Var0, "FMMC_TEAMDYN_", 16);
	StringIntConCat(&Var0, iParam0->f_2489 + 1, 16);
	__LIB_23__::func_494(1, &Var0, 0, bVar1, 0, 0, 0);
	if (bVar1)
	{
		bVar2 = false;
		while (bVar2 <= 16)
		{
			StringCopy(&Var0, "FMMC_RULEVAR", 16);
			__LIB_23__::func_494((2 + bVar2), &Var0, 1, bVar1, 0, 0, 0);
			__LIB_23__::func_517(bVar2, 0);
			if (BitTest(iParam0->f_2488, bVar2 + 1))
			{
				__LIB_23__::func_494((2 + bVar2), "FMMC_SEL_YES", 0, bVar1, 0, 0, 0);
			}
			else
			{
				__LIB_23__::func_494((2 + bVar2), "FMMC_SEL_NO", 0, bVar1, 0, 0, 0);
			}
			bVar2++;
		}
		iParam0->f_546 = 19;
	}
	else
	{
		iParam0->f_546 = 2;
	}
	iParam0->f_270 = 189;
}

void func_7(int* iParam0)//Position - 0x1828B0
{
	bool bVar0;
	__LIB_23__::func_384(iParam0);
	__LIB_1__::func_767("FMMC_VEH_EXTT");
	__LIB_1__::func_766(1, 4, 0, 0, 0);
	__LIB_1__::func_765(1, 2, 1, 1, 1);
	__LIB_12__::func_593(0, 0, 0, 0, 0);
	iParam0->f_546 = 17;
	iParam0->f_270 = 206;
	__LIB_23__::func_494(0, "FMMC_VEH_EXTC", 0, 1, 0, 0, 0);
	if (BitTest(iParam0->f_1014, 23))
	{
		__LIB_23__::func_496(0, 5, 0);
	}
	else
	{
		__LIB_23__::func_496(0, 7, 0);
	}
	bVar0 = true;
	while (bVar0 <= 14)
	{
		__LIB_23__::func_494(bVar0, "FMMC_VEH_EXTO", 1, BitTest(iParam0->f_1014, 23), 0, 0, 0);
		__LIB_23__::func_517(bVar0, 0);
		if (BitTest(iParam0->f_2593, (bVar0 - 1)))
		{
			__LIB_23__::func_496(bVar0, 5, 0);
		}
		else
		{
			__LIB_23__::func_496(bVar0, 7, 0);
		}
		bVar0++;
	}
	__LIB_23__::func_494(15, "FMMC_VEH_EXTCA", 0, BitTest(iParam0->f_1014, 23), 0, 0, 0);
	__LIB_23__::func_494(16, "FMMC_VEH_EXTSA", 0, BitTest(iParam0->f_1014, 23), 0, 0, 0);
}

void func_8(int* iParam0)//Position - 0x18299A
{
	bool bVar0;
	bool bVar1;
	struct<2> Var2;
	__LIB_23__::func_384(iParam0);
	__LIB_1__::func_767("FMMC_VEH_ALLT");
	__LIB_1__::func_766(1, 1, 0, 0, 0);
	__LIB_1__::func_765(1, 2, 1, 1, 1);
	__LIB_12__::func_593(0, 1, 0, 0, 0);
	iParam0->f_546 = 7;
	iParam0->f_270 = 11;
	__LIB_23__::func_494(0, "FMMC_VEH_GTAT", 0, 1, 0, 0, 0);
	if (BitTest(iParam0->f_1013, 20))
	{
		StringCopy(&Var2, "FMMC_VEH_ALL_1", 16);
	}
	else if (BitTest(iParam0->f_1013, 23))
	{
		StringCopy(&Var2, "FMMC_VEH_ALL_2", 16);
	}
	else if (BitTest(iParam0->f_1013, 24))
	{
		StringCopy(&Var2, "FMMC_VEH_ALL_3", 16);
	}
	else if (BitTest(iParam0->f_1013, 26))
	{
		StringCopy(&Var2, "FMMC_VEH_ALL_4", 16);
	}
	else if (BitTest(iParam0->f_1013, 31))
	{
		StringCopy(&Var2, "FMMC_VEH_ALL_5", 16);
	}
	else
	{
		StringCopy(&Var2, "FMMC_VEH_ALL_0", 16);
	}
	__LIB_23__::func_494(0, &Var2, 0, 1, 0, 0, 0);
	bVar0 = false;
	while (bVar0 <= 3)
	{
		bVar1 = (bVar0 < Global_4718592.f_593 && BitTest(iParam0->f_1013, 26));
		if (__LIB_22__::func_607(iParam0) == bVar0 + 1 && !bVar1)
		{
			__LIB_12__::func_593(0, 0, 0, 0, 0);
		}
		__LIB_23__::func_494(bVar0 + 1, "FMMC_TEAM_NO", 1, bVar1, 0, 0, 0);
		__LIB_23__::func_517(bVar0, 0);
		if (BitTest(iParam0->f_1013, (27 + bVar0)))
		{
			StringCopy(&Var2, "FMMC_SEL_YES", 16);
		}
		else
		{
			StringCopy(&Var2, "FMMC_SEL_NO", 16);
		}
		__LIB_23__::func_494(bVar0 + 1, &Var2, 0, bVar1, 0, 0, 0);
		bVar0++;
	}
	__LIB_23__::func_494(5, "FMMC_VEH_DFV", 0, 1, 0, 0, 0);
	if (BitTest(iParam0->f_1014, 9))
	{
		__LIB_23__::func_494(5, "FMMC_SEL_OFF", 0, 1, 0, 0, 0);
	}
	else
	{
		__LIB_23__::func_494(5, "FMMC_SEL_ON", 0, 1, 0, 0, 0);
	}
	__LIB_23__::func_494(6, "FMMC_VEH_WVR", 0, 1, 0, 0, 0);
	if (BitTest(iParam0->f_1014, 29))
	{
		__LIB_23__::func_494(6, "FMMC_SEL_ON", 0, 1, 0, 0, 0);
	}
	else
	{
		__LIB_23__::func_494(6, "FMMC_SEL_OFF", 0, 1, 0, 0, 0);
	}
}

void func_9(int* iParam0)//Position - 0x184BA2
{
	int iVar0;
	int iVar1;
	__LIB_23__::func_384(iParam0);
	__LIB_1__::func_767("FMMC_VEH_FALT");
	__LIB_1__::func_766(1, 0, 0, 0, 0);
	__LIB_1__::func_765(1, 1, 1, 1, 1);
	__LIB_12__::func_593(0, 0, 0, 0, 0);
	iParam0->f_270 = 308;
	iParam0->f_546 = 0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_4980736.f_175796[iVar0 /*16*/])))
		{
			iVar1++;
		}
		iVar0++;
	}
	__LIB_23__::func_494(0, "FMMC_CST_FALA", 0, iVar1 < 5, 0, 0, 0);
	iParam0->f_142[0] = 83;
	iParam0->f_546++;
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_4980736.f_175796[iVar0 /*16*/])))
		{
			__LIB_23__::func_494(iVar0 + 1, "STRING", 1, 1, 0, 0, 0);
			__LIB_23__::func_495(&(Global_4980736.f_175796[iVar0 /*16*/]), 0, 0, 0);
			iParam0->f_546++;
		}
		iVar0++;
	}
}

void func_10(int* iParam0)//Position - 0x188274
{
	bool bVar0;
	struct<2> Var1;
	bool bVar2;
	int iVar3;
	bool bVar4;
	bool bVar5;
	__LIB_23__::func_384(iParam0);
	Global_23149 = 0.3f;
	__LIB_1__::func_767("FMMC_ASSRL8T");
	__LIB_1__::func_766(1, 1, 0, 0, 0);
	__LIB_1__::func_765(1, 2, 1, 1, 1);
	__LIB_12__::func_593(0, 1, 0, 0, 0);
	iParam0->f_270 = 134;
	iParam0->f_546 = 4;
	bVar0 = iParam0->f_551;
	if (bVar0 == -1)
	{
		bVar0 = Global_4980736.f_94384;
	}
	bVar2 = iParam0->f_848;
	iVar3 = __LIB_13__::func_437(bVar0);
	bVar4 = __LIB_18__::func_410(bVar0);
	bVar5 = BitTest(Global_4718592.f_93337[bVar2 /*4*/][iVar3], bVar4);
	__LIB_23__::func_494(0, "FMMC_GOTOC_00", 0, 1, 0, 0, 0);
	__LIB_23__::func_494(0, "NUMBER", 1, 1, 0, 0, 0);
	__LIB_23__::func_517(bVar2, 0);
	__LIB_23__::func_494(1, "FMMC_GOTOC_01", 0, 1, 0, 0, 0);
	if (bVar5)
	{
		__LIB_23__::func_494(1, "FMMCCMENU_GTA1", 0, 1, 0, 0, 0);
	}
	else
	{
		__LIB_23__::func_494(1, "FMMCCMENU_GTA0", 0, 1, 0, 0, 0);
	}
	__LIB_23__::func_494(2, "FMMC_GOTOC_02", 0, 1, 0, 0, 0);
	if (iParam0->f_2757[bVar2] == -2)
	{
		__LIB_23__::func_494(2, "FMMC_SEL_OFF", 0, 1, 0, 0, 0);
	}
	else if (iParam0->f_2757[bVar2] == -1)
	{
		__LIB_23__::func_494(2, "FMMC_GTPA", 0, 1, 0, 0, 0);
	}
	else
	{
		__LIB_23__::func_494(2, "FMMC_RULEVAR", 1, 1, 0, 0, 0);
		__LIB_23__::func_517(iParam0->f_2757[bVar2], 0);
	}
	__LIB_23__::func_494(3, "FMMC_GOTOC_03", 0, 1, 0, 0, 0);
	StringCopy(&Var1, "FMMC_GT_NOR", 16);
	if (!BitTest(iParam0->f_978, (0 + bVar2)) && !BitTest(iParam0->f_978, (4 + bVar2)))
	{
		StringIntConCat(&Var1, 0, 16);
	}
	else if (BitTest(iParam0->f_978, (0 + bVar2)) && !BitTest(iParam0->f_978, (4 + bVar2)))
	{
		StringIntConCat(&Var1, 1, 16);
	}
	else if (!BitTest(iParam0->f_978, (0 + bVar2)) && BitTest(iParam0->f_978, (4 + bVar2)))
	{
		StringIntConCat(&Var1, 2, 16);
	}
	__LIB_23__::func_494(3, &Var1, 0, 1, 0, 0, 0);
}

void func_11(int* iParam0)//Position - 0x188456
{
	bool bVar0;
	__LIB_23__::func_384(iParam0);
	iParam0->f_546 = 5;
	iParam0->f_270 = 173;
	__LIB_1__::func_767("FMMCCMENU_STTT");
	__LIB_1__::func_766(1, 1, 0, 0, 0);
	__LIB_1__::func_765(1, 2, 1, 1, 1);
	__LIB_12__::func_593(0, 1, 0, 0, 0);
	bVar0 = iParam0->f_2568 > -1;
	if ((__LIB_22__::func_607(iParam0) == 1 || __LIB_22__::func_607(iParam0) == 2) && !bVar0)
	{
		__LIB_12__::func_593(0, 0, 0, 0, 0);
	}
	__LIB_23__::func_494(0, "FMMC_STT_TM", 0, 1, 0, 0, 0);
	if (!bVar0)
	{
		__LIB_23__::func_494(0, "FMMC_SEL_OFF", 0, 1, 0, 0, 0);
	}
	else
	{
		__LIB_23__::func_494(0, "FMMC_TEAM_NO", 1, 1, 0, 0, 0);
		__LIB_23__::func_517(iParam0->f_2568, 0);
	}
	__LIB_23__::func_494(1, "FMMC_STT_RL", 0, bVar0, 0, 0, 0);
	if (!bVar0)
	{
		__LIB_23__::func_494(1, "FMMC_SEL_NA", 0, 0, 0, 0, 0);
	}
	else if (iParam0->f_2569 == -1)
	{
		__LIB_23__::func_494(1, "FMMC_SEL_OFF", 0, 1, 0, 0, 0);
	}
	else
	{
		__LIB_23__::func_494(1, "FMMC_RULEVAR", 1, 1, 0, 0, 0);
		__LIB_23__::func_517(iParam0->f_2569, 0);
	}
	__LIB_23__::func_494(2, "FMMC_STT_MID", 0, bVar0, 0, 0, 0);
	if (!bVar0)
	{
		__LIB_23__::func_494(2, "FMMC_SEL_NA", 0, 0, 0, 0, 0);
	}
	else if (BitTest(iParam0->f_976, 30))
	{
		__LIB_23__::func_494(2, "FMMC_SEL_ON", 0, 1, 0, 0, 0);
	}
	else
	{
		__LIB_23__::func_494(2, "FMMC_SEL_OFF", 0, 1, 0, 0, 0);
	}
	__LIB_23__::func_494(3, "FMMC_STT_TR1", 0, bVar0, 0, 0, 0);
	if (!bVar0)
	{
		__LIB_23__::func_494(3, "FMMC_SEL_NA", 0, 0, 0, 0, 0);
	}
	else if (BitTest(iParam0->f_984, 17))
	{
		__LIB_23__::func_494(3, "FMMC_SEL_ON", 0, 1, 0, 0, 0);
	}
	else
	{
		__LIB_23__::func_494(3, "FMMC_SEL_OFF", 0, 1, 0, 0, 0);
	}
	__LIB_23__::func_494(4, "FMMC_STT_TR2", 0, bVar0, 0, 0, 0);
	if (!bVar0)
	{
		__LIB_23__::func_494(4, "FMMC_SEL_NA", 0, 0, 0, 0, 0);
	}
	else if (BitTest(iParam0->f_984, 18))
	{
		__LIB_23__::func_494(4, "FMMC_SEL_ON", 0, 1, 0, 0, 0);
	}
	else
	{
		__LIB_23__::func_494(4, "FMMC_SEL_OFF", 0, 1, 0, 0, 0);
	}
}

void func_12(int* iParam0)//Position - 0x1889F2
{
	struct<2> Var0;
	__LIB_23__::func_384(iParam0);
	__LIB_1__::func_767("FMMCCMENU_INVT");
	__LIB_1__::func_766(1, 1, 0, 0, 0);
	__LIB_1__::func_765(1, 2, 1, 1, 1);
	__LIB_12__::func_593(0, 1, 0, 0, 0);
	__LIB_23__::func_494(0, "FMMC_INV_BRF", 0, 1, 0, 0, 0);
	if (BitTest(iParam0->f_919, 0))
	{
		StringCopy(&Var0, "FMMC_SEL_YES", 16);
	}
	else
	{
		StringCopy(&Var0, "FMMC_SEL_NO", 16);
	}
	__LIB_23__::func_494(0, &Var0, 0, 1, 0, 0, 0);
	__LIB_23__::func_494(1, "FMMC_INV_DID", 0, 1, 0, 0, 0);
	if (BitTest(iParam0->f_975, 13))
	{
		StringCopy(&Var0, "FMMC_SEL_YES", 16);
	}
	else
	{
		StringCopy(&Var0, "FMMC_SEL_NO", 16);
	}
	__LIB_23__::func_494(1, &Var0, 0, 1, 0, 0, 0);
	if (__LIB_22__::func_607(iParam0) == 2)
	{
		__LIB_12__::func_593(0, 0, 0, 0, 0);
	}
	__LIB_23__::func_494(2, "FMMC_INV_GWR", 0, 1, 0, 0, 0);
	iParam0->f_546 = 3;
	iParam0->f_270 = 134;
	iParam0->f_14[2] = 572;
}

void func_13(int* iParam0)//Position - 0x188AD2
{
	struct<2> Var0;
	bool bVar1;
	bool bVar2;
	__LIB_23__::func_384(iParam0);
	__LIB_1__::func_767("MC_T_PEDHBRD");
	__LIB_1__::func_766(1, 1, 0, 0, 0);
	__LIB_1__::func_765(1, 2, 1, 1, 1);
	__LIB_12__::func_593(0, 1, 0, 0, 0);
	bVar1 = iParam0->f_2494 > -1;
	__LIB_23__::func_494(0, "MC_T_VEHIORE", 0, 1, 0, 0, 0);
	if (bVar1)
	{
		__LIB_23__::func_494(0, "FMMC_SEL_YES", 0, 1, 0, 0, 0);
	}
	else
	{
		__LIB_23__::func_494(0, "FMMC_SEL_NO", 0, 1, 0, 0, 0);
	}
	__LIB_23__::func_494(1, "MC_T_VEHIORT", 0, bVar1, 0, 0, 0);
	StringCopy(&Var0, "FMMC_TEAMDYN_", 16);
	StringIntConCat(&Var0, iParam0->f_2495 + 1, 16);
	__LIB_23__::func_494(1, &Var0, 0, bVar1, 0, 0, 0);
	if (bVar1)
	{
		bVar2 = false;
		while (bVar2 <= 16)
		{
			StringCopy(&Var0, "FMMC_RULEVAR", 16);
			__LIB_23__::func_494((2 + bVar2), &Var0, 1, bVar1, 0, 0, 0);
			__LIB_23__::func_517(bVar2, 0);
			if (BitTest(iParam0->f_2494, bVar2))
			{
				__LIB_23__::func_494((2 + bVar2), "FMMC_SEL_YES", 0, bVar1, 0, 0, 0);
			}
			else
			{
				__LIB_23__::func_494((2 + bVar2), "FMMC_SEL_NO", 0, bVar1, 0, 0, 0);
			}
			bVar2++;
		}
		iParam0->f_546 = 19;
	}
	else
	{
		iParam0->f_546 = 2;
	}
	iParam0->f_270 = 568;
}

void func_14(int* iParam0)//Position - 0x188BF7
{
	struct<2> Var0;
	bool bVar1;
	bool bVar2;
	__LIB_23__::func_384(iParam0);
	__LIB_1__::func_767("MC_T_VEHIORD");
	__LIB_1__::func_766(1, 1, 0, 0, 0);
	__LIB_1__::func_765(1, 2, 1, 1, 1);
	__LIB_12__::func_593(0, 1, 0, 0, 0);
	bVar1 = iParam0->f_2492 > -1;
	__LIB_23__::func_494(0, "MC_T_VEHIORE", 0, 1, 0, 0, 0);
	if (bVar1)
	{
		__LIB_23__::func_494(0, "FMMC_SEL_YES", 0, 1, 0, 0, 0);
	}
	else
	{
		__LIB_23__::func_494(0, "FMMC_SEL_NO", 0, 1, 0, 0, 0);
	}
	__LIB_23__::func_494(1, "MC_T_VEHIORT", 0, bVar1, 0, 0, 0);
	StringCopy(&Var0, "FMMC_TEAMDYN_", 16);
	StringIntConCat(&Var0, iParam0->f_2493 + 1, 16);
	__LIB_23__::func_494(1, &Var0, 0, bVar1, 0, 0, 0);
	if (bVar1)
	{
		bVar2 = false;
		while (bVar2 <= 16)
		{
			StringCopy(&Var0, "FMMC_RULEVAR", 16);
			__LIB_23__::func_494((2 + bVar2), &Var0, 1, bVar1, 0, 0, 0);
			__LIB_23__::func_517(bVar2, 0);
			if (BitTest(iParam0->f_2492, bVar2 + 1))
			{
				__LIB_23__::func_494((2 + bVar2), "FMMC_SEL_YES", 0, bVar1, 0, 0, 0);
			}
			else
			{
				__LIB_23__::func_494((2 + bVar2), "FMMC_SEL_NO", 0, bVar1, 0, 0, 0);
			}
			bVar2++;
		}
		iParam0->f_546 = 19;
	}
	else
	{
		iParam0->f_546 = 2;
	}
	iParam0->f_270 = 568;
}

void func_15(int* iParam0)//Position - 0x188FD1
{
	bool bVar0;
	bool bVar1;
	struct<2> Var2;
	__LIB_23__::func_384(iParam0);
	__LIB_1__::func_767("FMMC_ANM_SARTT");
	__LIB_1__::func_766(1, 1, 0, 0, 0);
	__LIB_1__::func_765(1, 2, 1, 1, 1);
	__LIB_12__::func_593(0, 1, 0, 0, 0);
	bVar0 = false;
	while (bVar0 <= 3)
	{
		bVar1 = bVar0 < Global_4718592.f_593;
		if (__LIB_22__::func_607(iParam0) == bVar0 && !bVar1)
		{
			__LIB_12__::func_593(0, 0, 0, 0, 0);
		}
		__LIB_23__::func_494(bVar0, "FMMC_TEAM_NO", 1, bVar1, 0, 0, 0);
		__LIB_23__::func_517(bVar0, 0);
		if (BitTest(iParam0->f_1089, bVar0))
		{
			StringCopy(&Var2, "FMMC_SEL_YES", 16);
		}
		else
		{
			StringCopy(&Var2, "FMMC_SEL_NO", 16);
		}
		__LIB_23__::func_494(bVar0, &Var2, 0, bVar1, 0, 0, 0);
		bVar0++;
	}
	iParam0->f_546 = 4;
	iParam0->f_270 = 566;
}

void func_16(int* iParam0)//Position - 0x18B630
{
	struct<2> Var0;
	__LIB_23__::func_384(iParam0);
	__LIB_1__::func_767("FMMC_MNIGME_01");
	__LIB_1__::func_766(1, 1, 0, 0, 0);
	__LIB_1__::func_765(1, 2, 1, 1, 1);
	__LIB_12__::func_593(0, 1, 0, 0, 0);
	iParam0->f_270 = 134;
	iParam0->f_546 = 4;
	__LIB_23__::func_494(0, "FMMC_PED_PHOR", 0, 1, 0, 0, 0);
	if (iParam0->f_2565 == 0)
	{
		__LIB_23__::func_494(0, "FMMC_PED_PHOR0", 0, 1, 0, 0, 0);
	}
	else
	{
		__LIB_23__::func_494(0, "FMMC_SEL_MET", 1, 1, 0, 0, 0);
		__LIB_23__::func_517(iParam0->f_2565, 0);
	}
	__LIB_23__::func_494(1, "FMMC_PED_CCAT", 0, 1, 0, 0, 0);
	if (BitTest(iParam0->f_976, 13))
	{
		__LIB_23__::func_494(1, "FMMC_SEL_NO", 0, 1, 0, 0, 0);
	}
	else
	{
		__LIB_23__::func_494(1, "FMMC_SEL_YES", 0, 1, 0, 0, 0);
	}
	__LIB_23__::func_494(2, "FMMC_PED_CCID", 0, 1, 0, 0, 0);
	if (iParam0->f_921 < 0)
	{
		StringCopy(&Var0, "FMMC_SEL_DEF", 16);
	}
	else
	{
		StringCopy(&Var0, "MC_PED_CCID_", 16);
		StringIntConCat(&Var0, iParam0->f_921, 16);
	}
	__LIB_23__::func_494(2, &Var0, 0, 1, 0, 0, 0);
	__LIB_23__::func_494(3, "FMMC_PED_CCA", 0, 1, 0, 0, 0);
	StringCopy(&Var0, "FMMC_CCA_", 16);
	StringIntConCat(&Var0, iParam0->f_920, 16);
	__LIB_23__::func_494(3, &Var0, 0, 1, 0, 0, 0);
}

void func_17(bool bParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, int iParam6, bool bParam7)//Position - 0x18CAF9
{
	__LIB_23__::func_494(bParam0, bParam3, 1, bParam7, 0, 0, 0);
	__LIB_23__::func_494(bParam0, "NUMBER", 1, bParam7, 0, 0, 0);
	__LIB_23__::func_517(bParam4, 0);
	__LIB_23__::func_494(bParam0, "", 1, 0, 0, 0, 0);
	if (BitTest(uParam1, bParam2))
	{
		__LIB_14__::func_431(iParam5, 0);
	}
	else
	{
		__LIB_14__::func_431(iParam6, 0);
	}
}

void func_18(int* iParam0)//Position - 0x18CB4E
{
	struct<2> Var0;
	bool bVar1;
	iParam0->f_270 = 134;
	__LIB_23__::func_384(iParam0);
	__LIB_1__::func_767("FMMC_ENT_PRFT");
	__LIB_1__::func_766(1, 1, 0, 0, 0);
	__LIB_1__::func_765(1, 2, 1, 1, 1);
	__LIB_12__::func_593(0, 1, 0, 0, 0);
	bVar1 = false;
	while (bVar1 <= 6)
	{
		StringCopy(&Var0, "FMMC_ENT_PRF", 16);
		StringIntConCat(&Var0, bVar1, 16);
		__LIB_23__::func_494(bVar1, &Var0, 0, 1, 0, 0, 0);
		if (BitTest(iParam0->f_976, (23 + bVar1)))
		{
			__LIB_23__::func_494(bVar1, "FMMC_SEL_YES", 0, 1, 0, 0, 0);
		}
		else
		{
			__LIB_23__::func_494(bVar1, "FMMC_SEL_NO", 0, 1, 0, 0, 0);
		}
		bVar1++;
	}
	iParam0->f_546 = 7;
}

void func_19(int* iParam0)//Position - 0x18D4CE
{
	int iVar0;
	iVar0 = Global_4980736.f_94384;
	if (iParam0->f_551 != -1)
	{
		iVar0 = iParam0->f_551;
	}
	__LIB_23__::func_384(iParam0);
	__LIB_1__::func_767("FMMC_TMREL_TL");
	__LIB_1__::func_766(1, 1, 0, 0, 0);
	__LIB_1__::func_765(1, 2, 1, 1, 1);
	__LIB_12__::func_593(0, 1, 0, 0, 0);
	if (!__LIB_23__::func_399() && __LIB_16__::func_683(1))
	{
		__LIB_23__::func_494(0, "FMMC_PED_NRGR", 0, 1, 0, 0, 0);
		iParam0->f_14[0] = 579;
	}
	__LIB_23__::func_494(1, "FMMC_TMREL_a", 0, 1, 0, 0, 0);
	__LIB_23__::func_494(1, __LIB_23__::func_30(Global_4980736.f_94390[iVar0 /*1004*/].f_30[0]), 0, 1, 0, 0, 0);
	__LIB_23__::func_494(2, "FMMC_TMREL_b", 0, 1, 0, 0, 0);
	__LIB_23__::func_494(2, __LIB_23__::func_30(Global_4980736.f_94390[iVar0 /*1004*/].f_30[1]), 0, 1, 0, 0, 0);
	if (Global_4718592.f_593 >= 3)
	{
		__LIB_23__::func_494(3, "FMMC_TMREL_c", 0, 1, 0, 0, 0);
		__LIB_23__::func_494(3, __LIB_23__::func_30(Global_4980736.f_94390[iVar0 /*1004*/].f_30[2]), 0, 1, 0, 0, 0);
	}
	if (Global_4718592.f_593 >= 4)
	{
		__LIB_23__::func_494(4, "FMMC_TMREL_d", 0, 1, 0, 0, 0);
		__LIB_23__::func_494(4, __LIB_23__::func_30(Global_4980736.f_94390[iVar0 /*1004*/].f_30[3]), 0, 1, 0, 0, 0);
	}
	iParam0->f_546 = 5;
	iParam0->f_270 = 134;
}

void func_20(int* iParam0)//Position - 0x18D62A
{
	int iVar0;
	int iVar1;
	__LIB_23__::func_384(iParam0);
	__LIB_1__::func_767("FMMC_PED_FALT");
	__LIB_1__::func_766(1, 0, 0, 0, 0);
	__LIB_1__::func_765(1, 1, 1, 1, 1);
	__LIB_12__::func_593(0, 0, 0, 0, 0);
	iParam0->f_270 = 308;
	iParam0->f_546 = 0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_4980736.f_175715[iVar0 /*16*/])))
		{
			iVar1++;
		}
		iVar0++;
	}
	__LIB_23__::func_494(0, "FMMC_CST_FALA", 0, iVar1 < 5, 0, 0, 0);
	iParam0->f_142[0] = 83;
	iParam0->f_546++;
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_4980736.f_175715[iVar0 /*16*/])))
		{
			__LIB_23__::func_494(iVar0 + 1, "STRING", 1, 1, 0, 0, 0);
			__LIB_23__::func_495(&(Global_4980736.f_175715[iVar0 /*16*/]), 0, 0, 0);
			iParam0->f_546++;
		}
		iVar0++;
	}
}

void func_21(int* iParam0)//Position - 0x18D719
{
	struct<2> Var0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	__LIB_23__::func_384(iParam0);
	__LIB_1__::func_767("FMMC_FOOP_07");
	__LIB_1__::func_766(1, 1, 4, 0, 0);
	__LIB_12__::func_593(0, 1, 0, 0, 0);
	__LIB_1__::func_765(1, 2, 2, 1, 1);
	iVar1 = Global_1837337.f_6[iParam0->f_848 /*104*/].f_103;
	bVar2 = BitTest(iParam0->f_974, (21 + iParam0->f_848));
	iParam0->f_270 = 136;
	iParam0->f_546 = iVar1 + 4;
	__LIB_23__::func_494(0, "FMMC_FOOP_03", 0, 1, 0, 0, 0);
	__LIB_23__::func_494(0, "NUMBER", 1, 1, 0, 0, 0);
	__LIB_23__::func_517(iParam0->f_848, 0);
	__LIB_23__::func_494(1, "FMMC_FOOP_04", 0, 1, 0, 0, 0);
	if (bVar2)
	{
		StringCopy(&Var0, "FMMC_SEL_YES", 16);
	}
	else
	{
		StringCopy(&Var0, "FMMC_SEL_NO", 16);
	}
	__LIB_23__::func_494(1, &Var0, 0, 1, 0, 0, 0);
	__LIB_23__::func_494(2, "FMMC_FOOP_05", 0, !bVar2, 0, 0, 0);
	__LIB_23__::func_494(3, "FMMC_FOOP_05b", 0, 1, 0, 0, 0);
	if (BitTest(iParam0->f_984, 3))
	{
		StringCopy(&Var0, "FMMC_SEL_NO", 16);
	}
	else
	{
		StringCopy(&Var0, "FMMC_SEL_YES", 16);
	}
	__LIB_23__::func_494(3, &Var0, 0, 1, 0, 0, 0);
	bVar3 = false;
	while (bVar3 < iVar1)
	{
		bVar4 = (4 + bVar3);
		__LIB_23__::func_494(bVar4, "FMMC_FOOP_01", 1, !bVar2, 0, 0, 0);
		__LIB_23__::func_517(bVar3, 0);
		if (BitTest(iParam0->f_1255[iParam0->f_848], bVar3))
		{
			__LIB_23__::func_496(bVar4, 5, 0);
		}
		else
		{
			__LIB_23__::func_496(bVar4, 7, 0);
		}
		bVar3++;
	}
}

void func_22(int iParam0, char* sParam1)//Position - 0x192FCD
{
	struct<8> Var0;
	struct<16> Var1;
	if (MISC::ARE_STRINGS_EQUAL(sParam1, "FMMC_MN" /* GXT: ~a~ */))
	{
		if (iParam0 == 0)
		{
			Var1 = { Global_4718592.f_116531 };
		}
		else if (iParam0 == 1)
		{
			Var1 = { Global_4718592.f_116553[0 /*16*/] };
		}
		else if ((iParam0 == 4 || (__LIB_1__::func_308() && iParam0 == 3)) || (__LIB_1__::func_126() && iParam0 == 3))
		{
			Var1 = { Global_4718592.f_116682[0 /*16*/] };
		}
		else if ((__LIB_1__::func_308() && iParam0 == 6) || (__LIB_1__::func_126() && iParam0 == 23))
		{
			Var1 = { Global_4718592.f_169373 };
		}
		StringCopy(&Var0, __LIB_23__::func_498(sParam1, &Var1, 1039516303, 0, 0), 64);
		if (!MISC::ARE_STRINGS_EQUAL(&Var0, &Var1))
		{
			StringCopy(sParam1, "FMMC_TRUNC" /* GXT: ~a~... */, 16);
		}
		__LIB_23__::func_494(iParam0, sParam1, 1, 1, 0, 0, 0);
		__LIB_23__::func_495(&Var0, 0, 0, 0);
	}
}

void func_23(int* iParam0)//Position - 0x1946F2
{
	int iVar0;
	struct<2> Var1;
	iParam0->f_270 = 3;
	__LIB_23__::func_384(iParam0);
	__LIB_1__::func_767("DMC_T_HTM");
	__LIB_1__::func_766(1, 1, 0, 0, 0);
	__LIB_1__::func_765(1, 2, 1, 1, 1);
	__LIB_12__::func_593(0, 1, 0, 0, 0);
	iParam0->f_546 = 0;
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		StringCopy(&Var1, "DMC_HTM_T", 16);
		StringIntConCat(&Var1, iVar0, 16);
		__LIB_23__::func_494(iParam0->f_546, &Var1, 1, 1, 0, 0, 0);
		__LIB_23__::func_495("(No Team)", 0, 0, 0);
		__LIB_23__::func_494(iParam0->f_546, "FMMC_MN" /* GXT: ~a~ */, 1, 1, 0, 0, 0);
		__LIB_23__::func_495(&(Global_4718592.f_169405[iVar0 /*16*/]), 0, 0, 0);
		iParam0->f_142[iParam0->f_546] = 12;
		iParam0->f_3328[iParam0->f_546] = -1;
		iParam0->f_546++;
		__LIB_23__::func_494(iParam0->f_546, &Var1, 1, 1, 0, 0, 0);
		__LIB_23__::func_495("(Orange Team)", 0, 0, 0);
		__LIB_23__::func_494(iParam0->f_546, "FMMC_MN" /* GXT: ~a~ */, 1, 1, 0, 0, 0);
		__LIB_23__::func_495(&(Global_4718592.f_169486[iVar0 /*65*/][0 /*16*/]), 0, 0, 0);
		iParam0->f_142[iParam0->f_546] = 12;
		iParam0->f_3328[iParam0->f_546] = 0;
		iParam0->f_546++;
		__LIB_23__::func_494(iParam0->f_546, &Var1, 1, 1, 0, 0, 0);
		__LIB_23__::func_495("(Purple Team)", 0, 0, 0);
		__LIB_23__::func_494(iParam0->f_546, "FMMC_MN" /* GXT: ~a~ */, 1, 1, 0, 0, 0);
		__LIB_23__::func_495(&(Global_4718592.f_169486[iVar0 /*65*/][1 /*16*/]), 0, 0, 0);
		iParam0->f_142[iParam0->f_546] = 12;
		iParam0->f_3328[iParam0->f_546] = 1;
		iParam0->f_546++;
		__LIB_23__::func_494(iParam0->f_546, "DMC_HTMD", 0, 1, 0, 0, 0);
		__LIB_23__::func_494(iParam0->f_546, "NUMBER", 1, 1, 0, 0, 0);
		__LIB_23__::func_517(Global_4718592.f_169812[iVar0], 0);
		iParam0->f_546++;
		iVar0++;
	}
}

void func_24(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0x1958C3
{
	struct<2> Var0;
	if (bParam1 == 0)
	{
		if (__LIB_1__::func_126())
		{
			__LIB_23__::func_494(bParam0, "DM_WI_AMMO_D", 0, bParam2, 0, 0, 0);
		}
		else
		{
			__LIB_23__::func_494(bParam0, "FMMC_SEL_DEF", 0, bParam2, 0, 0, 0);
		}
	}
	else if (bParam1 == 31)
	{
		if (bParam4)
		{
			__LIB_23__::func_494(bParam0, "FMMC_BULLi_0", 0, bParam2, 0, 0, 0);
		}
		else
		{
			__LIB_23__::func_494(bParam0, "MC_AMMO_1", 0, bParam2, 0, 0, 0);
		}
	}
	else if (bParam1 > 31 && bParam1 <= 60)
	{
		if (bParam4)
		{
			StringCopy(&Var0, "FMMC_BULLi_", 16);
			StringIntConCat(&Var0, (bParam1 - 31), 16);
			__LIB_23__::func_494(bParam0, &Var0, 0, bParam2, 0, 0, 0);
		}
		else
		{
			__LIB_23__::func_494(bParam0, "MC_AMMO", 1, bParam2, 0, 0, 0);
			__LIB_23__::func_517((bParam1 - 30), 0);
		}
	}
	else if (bParam1 == 101)
	{
		__LIB_23__::func_494(bParam0, "MC_AMMO_ONLY_1", 0, bParam2, 0, 0, 0);
	}
	else if (bParam1 > 101 && bParam1 <= 130)
	{
		__LIB_23__::func_494(bParam0, "MC_AMMO_ONLY", 1, bParam2, 0, 0, 0);
		__LIB_23__::func_517((bParam1 - 100), 0);
	}
	else if (bParam1 == 1)
	{
		if (bParam3)
		{
			if (bParam4)
			{
				__LIB_23__::func_494(bParam0, "FMMC_ITEMi_1", 0, bParam2, 0, 0, 0);
			}
			else
			{
				__LIB_23__::func_494(bParam0, "FMMC_ITEM_1", 0, bParam2, 0, 0, 0);
			}
		}
		else if (bParam4)
		{
			__LIB_23__::func_494(bParam0, "FMMC_CLIPi_1", 0, bParam2, 0, 0, 0);
		}
		else
		{
			__LIB_23__::func_494(bParam0, "FMMC_CLIP_1", 0, bParam2, 0, 0, 0);
		}
	}
	else if (bParam1 == -1)
	{
		__LIB_23__::func_494(bParam0, "FMMC_NO_AMMO", 0, bParam2, 0, 0, 0);
	}
	else if (bParam1 == -2)
	{
		__LIB_23__::func_494(bParam0, "FMMC_REM_WEP", 0, bParam2, 0, 0, 0);
	}
	else if (bParam1 > 1 && bParam1 <= 30)
	{
		if (bParam3)
		{
			if (bParam4)
			{
				StringCopy(&Var0, "FMMC_ITEMi_", 16);
			}
			else
			{
				StringCopy(&Var0, "FMMC_ITEM_", 16);
			}
			StringIntConCat(&Var0, bParam1, 16);
			__LIB_23__::func_494(bParam0, &Var0, 0, bParam2, 0, 0, 0);
		}
		else if (bParam4)
		{
			StringCopy(&Var0, "FMMC_CLIPi_", 16);
			StringIntConCat(&Var0, bParam1, 16);
			__LIB_23__::func_494(bParam0, &Var0, 0, bParam2, 0, 0, 0);
		}
		else
		{
			__LIB_23__::func_494(bParam0, "FMMC_CLIP_NO", 1, bParam2, 0, 0, 0);
			__LIB_23__::func_517(bParam1, 0);
		}
	}
	else if (bParam1 == 100)
	{
		__LIB_23__::func_494(bParam0, "MC_AMMO_ONLY_D", 0, bParam2, 0, 0, 0);
	}
	else if (bParam1 == 101)
	{
		__LIB_23__::func_494(bParam0, "MC_AMMO_ONLY_1", 0, bParam2, 0, 0, 0);
	}
	else if (bParam1 > 101 && bParam1 <= 130)
	{
		__LIB_23__::func_494(bParam0, "MC_AMMO_ONLY", 1, bParam2, 0, 0, 0);
		__LIB_23__::func_517((bParam1 - 100), 0);
	}
	else if (bParam1 == -3)
	{
		__LIB_23__::func_494(bParam0, "FMMC_UNL_AMMO", 0, bParam2, 0, 0, 0);
	}
}

void func_25(int* iParam0)//Position - 0x196DAE
{
	bool bVar0;
	struct<2> Var1;
	__LIB_23__::func_384(iParam0);
	__LIB_1__::func_767("SC_SPKU_SEL_T");
	__LIB_19__::func_185(iParam0->f_3379);
	__LIB_19__::func_185(iParam0->f_3384 + 1);
	__LIB_1__::func_766(1, 1, 0, 0, 0);
	__LIB_1__::func_765(1, 2, 1, 1, 1);
	__LIB_12__::func_593(0, 1, 0, 0, 0);
	iParam0->f_270 = 476;
	bVar0 = iParam0->f_899 == 8;
	__LIB_23__::func_494(0, "FMMC_MCAT", 0, 1, 0, 0, 0);
	if (!bVar0)
	{
		StringCopy(&Var1, "FMMC_WPL", 16);
		StringIntConCat(&Var1, iParam0->f_899, 16);
		__LIB_23__::func_494(0, &Var1, 0, 1, 0, 0, 0);
	}
	else
	{
		__LIB_23__::func_494(0, "SC_NONE", 0, 1, 0, 0, 0);
	}
	iParam0->f_546++;
	if (!bVar0)
	{
		__LIB_23__::func_494(1, "FMMC_MTYPE", 0, 1, 0, 0, 0);
		__LIB_23__::func_494(1, iParam0->f_563[2], 0, 1, 0, 0, 0);
		iParam0->f_546++;
	}
}

void func_26(int* iParam0)//Position - 0x196FA3
{
	struct<2> Var0;
	__LIB_23__::func_384(iParam0);
	__LIB_1__::func_767("SC_SWEP_SEL_T");
	__LIB_19__::func_185(iParam0->f_3379);
	__LIB_19__::func_185(iParam0->f_3384 + 1);
	__LIB_1__::func_766(1, 1, 0, 0, 0);
	__LIB_1__::func_765(1, 2, 1, 1, 1);
	__LIB_12__::func_593(0, 1, 0, 0, 0);
	iParam0->f_270 = 480;
	__LIB_23__::func_494(0, "FMMC_MCAT", 0, 1, 0, 0, 0);
	StringCopy(&Var0, "FMMC_WPL", 16);
	StringIntConCat(&Var0, iParam0->f_899, 16);
	__LIB_23__::func_494(0, &Var0, 0, 1, 0, 0, 0);
	iParam0->f_546++;
	__LIB_23__::func_494(1, "FMMC_MTYPE", 0, 1, 0, 0, 0);
	__LIB_23__::func_494(1, iParam0->f_563[2], 0, 1, 0, 0, 0);
	iParam0->f_546++;
}

void func_27(int* iParam0)//Position - 0x197129
{
	struct<2> Var0;
	__LIB_23__::func_384(iParam0);
	__LIB_1__::func_767("SC_AMBO_T");
	__LIB_12__::func_593(0, 1, 0, 0, 0);
	__LIB_1__::func_766(1, 1, 0, 0, 0);
	__LIB_1__::func_765(1, 2, 1, 1, 1);
	__LIB_12__::func_593(0, 1, 0, 0, 0);
	iParam0->f_270 = 3;
	__LIB_23__::func_494(0, "LOB_CAT_22" /* GXT: Time of Day */, 0, 1, 0, 0, 0);
	StringCopy(&Var0, "LOB_TIME_DAY_", 16);
	StringIntConCat(&Var0, Global_4718592.f_116980, 16);
	__LIB_23__::func_494(0, &Var0, 0, 1, 0, 0, 0);
	iParam0->f_546++;
	__LIB_23__::func_494(1, "FMMC_MG_GL0", 0, 1, 0, 0, 0);
	StringCopy(&Var0, "FMMC_MS_W0_", 16);
	StringIntConCat(&Var0, Global_4718592.f_116938, 16);
	__LIB_23__::func_494(1, &Var0, 0, 1, 0, 0, 0);
	iParam0->f_546++;
}

void func_28(int* iParam0)//Position - 0x1971E6
{
	struct<2> Var0;
	__LIB_23__::func_384(iParam0);
	__LIB_1__::func_767("SC_AIR_SEL");
	__LIB_19__::func_185(iParam0->f_3379);
	__LIB_19__::func_185(iParam0->f_3383 + 1);
	__LIB_1__::func_766(1, 1, 0, 0, 0);
	__LIB_1__::func_765(1, 2, 1, 1, 1);
	__LIB_12__::func_593(0, 1, 0, 0, 0);
	iParam0->f_270 = 471;
	if (__LIB_22__::func_607(iParam0) == 1 && iParam0->f_885 == 11)
	{
		__LIB_12__::func_593(0, 0, 0, 0, 0);
	}
	__LIB_23__::func_494(0, "FMMC_MCAT", 0, 1, 0, 0, 0);
	Var0 = { __LIB_22__::func_895(&(iParam0->f_885)) };
	__LIB_23__::func_494(0, &Var0, 0, 1, 0, 0, 0);
	iParam0->f_546++;
	__LIB_23__::func_494(1, "FMMC_MTYPE", 0, 1, 0, 0, 0);
	StringCopy(&Var0, __LIB_22__::func_16(Global_4718592.f_170137.f_2462[iParam0->f_3379 /*4*/][iParam0->f_3383]), 16);
	__LIB_23__::func_494(1, &Var0, 0, 1, 0, 0, 0);
	iParam0->f_546++;
}

void func_29(int* iParam0)//Position - 0x19744B
{
	bool bVar0;
	__LIB_23__::func_384(iParam0);
	__LIB_1__::func_767("SC_ACM_T");
	__LIB_1__::func_766(1, 1, 0, 0, 0);
	__LIB_1__::func_765(1, 2, 1, 1, 1);
	__LIB_12__::func_593(0, 0, 0, 0, 0);
	iParam0->f_270 = 460;
	bVar0 = false;
	while (bVar0 <= (Global_4718592.f_170137.f_2440[iParam0->f_3379] - 1))
	{
		__LIB_23__::func_494(bVar0, "SC_AVEH_NUM", 1, 1, 0, 0, 0);
		__LIB_23__::func_517(iParam0->f_546 + 1, 0);
		iParam0->f_14[iParam0->f_546] = 471;
		iParam0->f_546++;
		bVar0++;
	}
}

void func_30(int* iParam0)//Position - 0x1974E1
{
	struct<2> Var0;
	__LIB_23__::func_384(iParam0);
	__LIB_1__::func_767("SC_VEH_SEL");
	__LIB_19__::func_185(iParam0->f_3379);
	__LIB_19__::func_185(iParam0->f_3382 + 1);
	__LIB_1__::func_766(1, 1, 0, 0, 0);
	__LIB_1__::func_765(1, 2, 1, 1, 1);
	__LIB_12__::func_593(0, 1, 0, 0, 0);
	iParam0->f_270 = 465;
	__LIB_23__::func_494(0, "FMMC_MCAT", 0, 1, 0, 0, 0);
	Var0 = { __LIB_22__::func_895(&(iParam0->f_885)) };
	__LIB_23__::func_494(0, &Var0, 0, 1, 0, 0, 0);
	iParam0->f_546++;
	__LIB_23__::func_494(1, "FMMC_MTYPE", 0, 1, 0, 0, 0);
	StringCopy(&Var0, __LIB_22__::func_16(Global_4718592.f_170137.f_1086[iParam0->f_3379 /*5*/][iParam0->f_3382]), 16);
	__LIB_23__::func_494(1, &Var0, 0, 1, 0, 0, 0);
	iParam0->f_546++;
}

void func_31(int* iParam0)//Position - 0x1975AC
{
	bool bVar0;
	__LIB_23__::func_384(iParam0);
	__LIB_1__::func_767("SC_VCM_T");
	__LIB_1__::func_766(1, 1, 0, 0, 0);
	__LIB_1__::func_765(1, 2, 1, 1, 1);
	__LIB_12__::func_593(0, 0, 0, 0, 0);
	iParam0->f_270 = 460;
	bVar0 = false;
	while (bVar0 <= (Global_4718592.f_170137.f_958[iParam0->f_3379] - 1))
	{
		__LIB_23__::func_494(bVar0, "SC_VEH_NUM", 1, 1, 0, 0, 0);
		__LIB_23__::func_517(iParam0->f_546 + 1, 0);
		iParam0->f_14[iParam0->f_546] = 465;
		iParam0->f_546++;
		bVar0++;
	}
}

void func_32(int* iParam0)//Position - 0x197FD9
{
	int iVar0;
	int iVar1;
	struct<2> Var2;
	__LIB_23__::func_384(iParam0);
	if (__LIB_23__::func_47(iParam0))
	{
		__LIB_1__::func_767("SC_SAVM_T");
	}
	else
	{
		__LIB_1__::func_767("SC_WVB_AVT");
	}
	__LIB_19__::func_185(iParam0->f_3379);
	__LIB_1__::func_766(1, 1, 0, 0, 0);
	__LIB_1__::func_765(1, 2, 1, 1, 1);
	__LIB_12__::func_593(0, 1, 0, 0, 0);
	if (__LIB_22__::func_607(iParam0) == 1 && iParam0->f_885 == 11)
	{
		__LIB_12__::func_593(0, 0, 0, 0, 0);
	}
	iVar0 = iParam0->f_3379;
	if (iVar0 == -1)
	{
		iVar0 = 0;
	}
	iVar1 = 1;
	while (iVar1 <= 2)
	{
		if (Global_4718592.f_170137.f_2462[iVar0 /*4*/][iVar1] != Global_4718592.f_170137.f_2462[iVar0 /*4*/][0])
		{
			Global_4718592.f_170137.f_2462[iVar0 /*4*/][iVar1] = Global_4718592.f_170137.f_2462[iVar0 /*4*/][0];
		}
		iVar1++;
	}
	__LIB_23__::func_494(0, "FMMC_MCAT", 0, 1, 0, 0, 0);
	Var2 = { __LIB_22__::func_895(&(iParam0->f_885)) };
	__LIB_23__::func_494(0, &Var2, 0, 1, 0, 0, 0);
	iParam0->f_546++;
	__LIB_23__::func_494(1, "FMMC_MTYPE", 0, 1, 0, 0, 0);
	StringCopy(&Var2, __LIB_22__::func_16(Global_4718592.f_170137.f_2462[iVar0 /*4*/][0]), 16);
	__LIB_23__::func_494(1, &Var2, 0, 1, 0, 0, 0);
	iParam0->f_546++;
}

void func_33(int* iParam0)//Position - 0x198135
{
	int iVar0;
	int iVar1;
	struct<2> Var2;
	__LIB_23__::func_384(iParam0);
	if (__LIB_23__::func_47(iParam0))
	{
		__LIB_1__::func_767("SC_SLVM_T");
	}
	else
	{
		__LIB_1__::func_767("SC_WVB_VT");
	}
	__LIB_19__::func_185(iParam0->f_3379);
	__LIB_1__::func_766(1, 1, 0, 0, 0);
	__LIB_1__::func_765(1, 2, 1, 1, 1);
	__LIB_12__::func_593(0, 1, 0, 0, 0);
	iVar0 = iParam0->f_3379;
	if (iVar0 == -1)
	{
		iVar0 = 0;
	}
	iVar1 = 1;
	while (iVar1 <= 3)
	{
		if (Global_4718592.f_170137.f_1086[iVar0 /*5*/][iVar1] != Global_4718592.f_170137.f_1086[iVar0 /*5*/][iVar1])
		{
			Global_4718592.f_170137.f_1086[iVar0 /*5*/][iVar1] = Global_4718592.f_170137.f_1086[iVar0 /*5*/][iVar1];
		}
		iVar1++;
	}
	__LIB_23__::func_494(0, "FMMC_MCAT", 0, 1, 0, 0, 0);
	Var2 = { __LIB_22__::func_895(&(iParam0->f_885)) };
	__LIB_23__::func_494(0, &Var2, 0, 1, 0, 0, 0);
	iParam0->f_546++;
	__LIB_23__::func_494(1, "FMMC_MTYPE", 0, 1, 0, 0, 0);
	StringCopy(&Var2, __LIB_22__::func_16(Global_4718592.f_170137.f_1086[iVar0 /*5*/][0]), 16);
	__LIB_23__::func_494(1, &Var2, 0, 1, 0, 0, 0);
	iParam0->f_546++;
}

void func_34(int* iParam0)//Position - 0x19A6C0
{
	bool bVar0;
	bool bVar1;
	__LIB_23__::func_384(iParam0);
	__LIB_1__::func_767("FMMC_DLT_LIMT");
	__LIB_1__::func_766(1, 1, 0, 0, 0);
	__LIB_1__::func_765(1, 2, 1, 1, 1);
	__LIB_12__::func_593(0, 1, 0, 0, 0);
	iParam0->f_546 = 4;
	iParam0->f_270 = 493;
	bVar0 = false;
	while (bVar0 <= 3)
	{
		bVar1 = bVar0 < Global_4718592.f_593;
		if (__LIB_22__::func_607(iParam0) == bVar0 && !bVar1)
		{
			__LIB_12__::func_593(0, 0, 0, 0, 0);
		}
		__LIB_23__::func_494((0 + bVar0), "FMMC_TEAM_NO", 1, bVar1, 0, 0, 0);
		__LIB_23__::func_517(bVar0, 0);
		if (iParam0->f_1727.f_38[bVar0] == -1)
		{
			__LIB_23__::func_494(bVar0, "FMMC_SEL_OFF", 0, bVar1, 0, 0, 0);
		}
		else
		{
			__LIB_23__::func_494(bVar0, "FMMC_RULEVAR", 1, bVar1, 0, 0, 0);
			__LIB_23__::func_517(iParam0->f_1727.f_38[bVar0], 0);
		}
		bVar0++;
	}
}

void func_35(int* iParam0)//Position - 0x19A798
{
	bool bVar0;
	bool bVar1;
	struct<2> Var2;
	__LIB_23__::func_384(iParam0);
	__LIB_1__::func_767("FMMC_DLT_HBTT");
	__LIB_1__::func_766(1, 1, 0, 0, 0);
	__LIB_1__::func_765(1, 2, 1, 1, 1);
	__LIB_12__::func_593(0, 1, 0, 0, 0);
	iParam0->f_546 = 4;
	iParam0->f_270 = 493;
	bVar0 = false;
	while (bVar0 <= 3)
	{
		bVar1 = bVar0 < Global_4718592.f_593;
		if (__LIB_22__::func_607(iParam0) == bVar0 && !bVar1)
		{
			__LIB_12__::func_593(0, 0, 0, 0, 0);
		}
		__LIB_23__::func_494((0 + bVar0), "FMMC_TEAM_NO", 1, bVar1, 0, 0, 0);
		__LIB_23__::func_517(bVar0, 0);
		if (BitTest(iParam0->f_1727.f_15, (3 + bVar0)))
		{
			StringCopy(&Var2, "FMMC_SEL_NO", 16);
		}
		else
		{
			StringCopy(&Var2, "FMMC_SEL_YES", 16);
		}
		__LIB_23__::func_494((0 + bVar0), &Var2, 0, bVar1, 0, 0, 0);
		bVar0++;
	}
}

void func_36(int* iParam0)//Position - 0x19F675
{
	struct<2> Var0;
	iParam0->f_270 = 201;
	__LIB_23__::func_384(iParam0);
	__LIB_1__::func_767("FMMC_T_VWPRO");
	__LIB_1__::func_766(1, 1, 4, 0, 0);
	__LIB_1__::func_765(1, 2, 2, 1, 1);
	__LIB_12__::func_593(0, 1, 0, 0, 0);
	__LIB_23__::func_494(0, "FMMC_ERP", 0, 1, 0, 0, 0);
	if (BitTest(Global_4718592.f_20, 29))
	{
		StringCopy(&Var0, "FMMC_SEL_YES", 16);
	}
	else
	{
		StringCopy(&Var0, "FMMC_SEL_NO", 16);
	}
	__LIB_23__::func_494(0, &Var0, 0, 1, 0, 0, 0);
	iParam0->f_546++;
	__LIB_23__::func_494(1, "FMMC_ECRP", 0, 1, 0, 0, 0);
	if (BitTest(Global_4718592.f_20, 30))
	{
		StringCopy(&Var0, "FMMC_SEL_YES", 16);
	}
	else
	{
		StringCopy(&Var0, "FMMC_SEL_NO", 16);
	}
	__LIB_23__::func_494(1, &Var0, 0, 1, 0, 0, 0);
	iParam0->f_546++;
	__LIB_23__::func_494(2, "FMMC_VWP0", 0, 1, 0, 0, 0);
	if (BitTest(Global_4718592.f_168980, 0))
	{
		__LIB_23__::func_496(2, 5, 0);
	}
	else
	{
		__LIB_23__::func_496(2, 7, 0);
	}
	iParam0->f_546++;
	__LIB_23__::func_494(3, "FMMC_VWP1", 0, 1, 0, 0, 0);
	if (BitTest(Global_4718592.f_168980, 1))
	{
		__LIB_23__::func_496(3, 5, 0);
	}
	else
	{
		__LIB_23__::func_496(3, 7, 0);
	}
	iParam0->f_546++;
	__LIB_23__::func_494(4, "FMMC_VWP2", 0, 1, 0, 0, 0);
	if (BitTest(Global_4718592.f_168980, 2))
	{
		__LIB_23__::func_496(4, 5, 0);
	}
	else
	{
		__LIB_23__::func_496(4, 7, 0);
	}
	iParam0->f_546++;
	__LIB_23__::func_494(5, "FMMC_VWP3", 0, 1, 0, 0, 0);
	if (BitTest(Global_4718592.f_168980, 3))
	{
		__LIB_23__::func_496(5, 5, 0);
	}
	else
	{
		__LIB_23__::func_496(5, 7, 0);
	}
	iParam0->f_546++;
	__LIB_23__::func_494(6, "FMMC_VWP4", 0, 1, 0, 0, 0);
	if (BitTest(Global_4718592.f_168980, 4))
	{
		__LIB_23__::func_496(6, 5, 0);
	}
	else
	{
		__LIB_23__::func_496(6, 7, 0);
	}
	iParam0->f_546++;
	__LIB_23__::func_494(7, "FMMC_VWP5", 0, 1, 0, 0, 0);
	if (BitTest(Global_4718592.f_168980, 5))
	{
		__LIB_23__::func_496(7, 5, 0);
	}
	else
	{
		__LIB_23__::func_496(7, 7, 0);
	}
	iParam0->f_546++;
	__LIB_23__::func_494(8, "FMMC_VWP6", 0, 1, 0, 0, 0);
	if (BitTest(Global_4718592.f_168980, 6))
	{
		__LIB_23__::func_496(8, 5, 0);
	}
	else
	{
		__LIB_23__::func_496(8, 7, 0);
	}
	iParam0->f_546++;
	__LIB_23__::func_494(9, "FMMC_VWP7", 0, 1, 0, 0, 0);
	if (BitTest(Global_4718592.f_168980, 7))
	{
		__LIB_23__::func_496(9, 5, 0);
	}
	else
	{
		__LIB_23__::func_496(9, 7, 0);
	}
	iParam0->f_546++;
	__LIB_23__::func_494(10, "FMMC_VWP8", 0, 1, 0, 0, 0);
	if (BitTest(Global_4718592.f_168980, 8))
	{
		__LIB_23__::func_496(10, 5, 0);
	}
	else
	{
		__LIB_23__::func_496(10, 7, 0);
	}
	iParam0->f_546++;
	__LIB_23__::func_494(11, "FMMC_VWP9", 0, 1, 0, 0, 0);
	if (BitTest(Global_4718592.f_168980, 9))
	{
		__LIB_23__::func_496(11, 5, 0);
	}
	else
	{
		__LIB_23__::func_496(11, 7, 0);
	}
	iParam0->f_546++;
	__LIB_23__::func_494(12, "FMMC_VWP10", 0, 1, 0, 0, 0);
	if (BitTest(Global_4718592.f_168980, 10))
	{
		__LIB_23__::func_496(12, 5, 0);
	}
	else
	{
		__LIB_23__::func_496(12, 7, 0);
	}
	iParam0->f_546++;
	__LIB_23__::func_494(13, "FMMC_VWP11", 0, 1, 0, 0, 0);
	if (BitTest(Global_4718592.f_168980, 11))
	{
		__LIB_23__::func_496(13, 5, 0);
	}
	else
	{
		__LIB_23__::func_496(13, 7, 0);
	}
	iParam0->f_546++;
}

void func_37(int* iParam0)//Position - 0x19FA18
{
	struct<2> Var0;
	iParam0->f_270 = 3;
	__LIB_23__::func_384(iParam0);
	__LIB_1__::func_767("FMMC_TPTBH_T");
	__LIB_1__::func_766(1, 1, 0, 0, 0);
	__LIB_1__::func_765(1, 2, 1, 1, 1);
	__LIB_12__::func_593(0, 1, 0, 0, 0);
	iParam0->f_546 = 4;
	__LIB_23__::func_494(0, "FMMC_TPTBH_ENA", 0, 1, 0, 0, 0);
	if (BitTest(Global_4718592.f_18, 19))
	{
		__LIB_23__::func_494(0, "FMMC_SEL_YES", 0, 1, 0, 0, 0);
	}
	else
	{
		__LIB_23__::func_494(0, "FMMC_SEL_NO", 0, 1, 0, 0, 0);
	}
	if (Global_4718592.f_117091 == -1)
	{
		__LIB_23__::func_494(1, "FMMC_TPTBH_DUR", 0, 1, 0, 0, 0);
	}
	else
	{
		__LIB_23__::func_494(1, "FMMC_TPTBH_DUR", 0, 1, 0, 0, 0);
		if ((Global_4718592.f_117091 % 60) < 10)
		{
			StringCopy(&Var0, "FMMC_TIME_0S", 16);
		}
		else
		{
			StringCopy(&Var0, "FMMC_TIME", 16);
		}
		__LIB_23__::func_494(1, &Var0, 2, 1, 0, 0, 0);
		__LIB_23__::func_517((Global_4718592.f_117091 / 60), 0);
		__LIB_23__::func_517((Global_4718592.f_117091 % 60), 0);
	}
	__LIB_23__::func_494(2, "FMMC_TPTBH_AOK", 0, 1, 0, 0, 0);
	if (Global_4718592.f_117092 > 0)
	{
		__LIB_23__::func_494(2, "FMMC_PERCENT", 1, 1, 0, 0, 0);
		__LIB_23__::func_517(Global_4718592.f_117092, 0);
	}
	else
	{
		__LIB_23__::func_494(2, "FMMC_SEL_DSB", 0, 1, 0, 0, 0);
	}
	__LIB_23__::func_494(3, "FMMC_TPTBH_COR", 0, 1, 0, 0, 0);
	if (BitTest(Global_4718592.f_18, 20))
	{
		__LIB_23__::func_494(3, "FMMC_SEL_YES", 0, 1, 0, 0, 0);
	}
	else
	{
		__LIB_23__::func_494(3, "FMMC_SEL_NO", 0, 1, 0, 0, 0);
	}
}

void func_38(int* iParam0)//Position - 0x19FBA1
{
	iParam0->f_270 = 3;
	__LIB_23__::func_384(iParam0);
	__LIB_1__::func_767("FMMC_FBS_TITLE");
	__LIB_1__::func_766(1, 1, 0, 0, 0);
	__LIB_1__::func_765(1, 2, 1, 1, 1);
	__LIB_12__::func_593(0, 1, 0, 0, 0);
	iParam0->f_546 = 3;
	__LIB_23__::func_494(0, "FMMC_FBS_ENABLE", 0, 1, 0, 0, 0);
	if (BitTest(Global_4718592.f_17, 19))
	{
		__LIB_23__::func_494(0, "FMMC_SEL_YES", 0, 1, 0, 0, 0);
	}
	else
	{
		__LIB_23__::func_494(0, "FMMC_SEL_NO", 0, 1, 0, 0, 0);
	}
	__LIB_23__::func_494(1, "FMMC_FBS_PLACE", 0, BitTest(Global_4718592.f_17, 19), 0, 0, 0);
	__LIB_23__::func_494(2, "FMMC_FBS_CYCLE", 0, BitTest(Global_4718592.f_17, 19), 0, 0, 0);
	__LIB_23__::func_494(2, "BET_D_VAL", 2, 1, 0, 0, 0);
	__LIB_23__::func_517(iParam0->f_3018, 0);
	__LIB_23__::func_517(60, 0);
}

void func_39(int* iParam0)//Position - 0x19FC69
{
	bool bVar0;
	iParam0->f_270 = 331;
	__LIB_23__::func_384(iParam0);
	__LIB_1__::func_767("FMMC_PFSD_TL");
	__LIB_1__::func_766(1, 1, 0, 0, 0);
	__LIB_1__::func_765(1, 2, 1, 1, 1);
	__LIB_12__::func_593(0, 1, 0, 0, 0);
	bVar0 = false;
	while (bVar0 <= 3)
	{
		__LIB_23__::func_494(bVar0, "FMMC_TEST_01", 1, 1, 0, 0, 0);
		__LIB_23__::func_517((bVar0 + __LIB_0__::func_138(__LIB_10__::func_207(), 0, 1)), 0);
		if (BitTest(Global_4718592.f_658[bVar0 /*22957*/].f_12180, 11))
		{
			__LIB_23__::func_494(bVar0, "FMMC_PMG_1", 0, 1, 0, 0, 0);
		}
		else
		{
			__LIB_23__::func_494(bVar0, "FMMC_PMG_2", 0, 1, 0, 0, 0);
		}
		iParam0->f_546++;
		bVar0++;
	}
}

void func_40(int* iParam0)//Position - 0x19FD1B
{
	iParam0->f_270 = 331;
	__LIB_23__::func_384(iParam0);
	__LIB_1__::func_767("FMMC_ORSDT");
	__LIB_1__::func_766(1, 1, 0, 0, 0);
	__LIB_1__::func_765(1, 2, 1, 1, 1);
	iParam0->f_546 = 2;
	__LIB_23__::func_494(0, "FMMC_OSDE", 0, 1, 0, 0, 0);
	if (BitTest(Global_4718592.f_24, 13))
	{
		__LIB_23__::func_494(0, "FMMC_SEL_YES", 0, 1, 0, 0, 0);
	}
	else
	{
		__LIB_23__::func_494(0, "FMMC_SEL_NO", 0, 1, 0, 0, 0);
	}
	__LIB_23__::func_494(1, "FMMC_OSDS", 0, 1, 0, 0, 0);
	if (Global_4718592.f_168717 > -1)
	{
		__LIB_23__::func_494(1, "NUMBER", 1, 1, 0, 0, 0);
		__LIB_23__::func_517(Global_4718592.f_168717, 0);
	}
	else
	{
		__LIB_23__::func_494(0, "FMMC_SEL_OFF", 0, 1, 0, 0, 0);
	}
}

void func_41(int* iParam0)//Position - 0x1A0114
{
	bool bVar0;
	__LIB_23__::func_384(iParam0);
	__LIB_1__::func_767("FMMC_RSG_OTO");
	__LIB_1__::func_766(1, 1, 0, 0, 0);
	__LIB_1__::func_765(1, 2, 1, 1, 1);
	__LIB_12__::func_593(0, 0, 0, 0, 0);
	iParam0->f_270 = 704;
	iParam0->f_546 = 20;
	bVar0 = false;
	while (bVar0 < 20)
	{
		__LIB_23__::func_494(bVar0, "FMMC_RSG_TOT", 1, 1, 0, 0, 0);
		__LIB_23__::func_517(bVar0, 0);
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_4718592.f_110899[bVar0 /*16*/])))
		{
			if (HUD::GET_LENGTH_OF_LITERAL_STRING(&(Global_4718592.f_110899[bVar0 /*16*/])) > 15)
			{
				__LIB_23__::func_494(bVar0, "FMMC_TRUNC" /* GXT: ~a~... */, 1, 1, 0, 0, 0);
				__LIB_23__::func_495(HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME(&(Global_4718592.f_110899[bVar0 /*16*/]), 0, 15), 0, 0, 0);
			}
			else
			{
				__LIB_23__::func_494(bVar0, "FMMC_MN" /* GXT: ~a~ */, 1, 1, 0, 0, 0);
				__LIB_23__::func_495(&(Global_4718592.f_110899[bVar0 /*16*/]), 0, 0, 0);
			}
		}
		bVar0++;
	}
}

void func_42(int* iParam0)//Position - 0x1A01FC
{
	bool bVar0;
	__LIB_23__::func_384(iParam0);
	__LIB_1__::func_767("FMMC_RSSGIG_T");
	__LIB_19__::func_185(iParam0->f_2934);
	__LIB_1__::func_766(1, 1, 0, 0, 0);
	__LIB_1__::func_765(1, 2, 1, 1, 1);
	__LIB_12__::func_593(0, 1, 0, 0, 0);
	Global_23149 = 0.29f;
	iParam0->f_270 = 705;
	iParam0->f_546 = 6;
	if (iParam0->f_547 == 1 && Global_4718592.f_110415[iParam0->f_2934] == 0)
	{
		__LIB_12__::func_593(0, 0, 0, 0, 0);
	}
	else if ((iParam0->f_547 >= 2 && iParam0->f_547 <= 5) && (iParam0->f_547 >= (2 + Global_4718592.f_593) || Global_4718592.f_110436[iParam0->f_2934] != -1))
	{
		__LIB_12__::func_593(0, 0, 0, 0, 0);
	}
	__LIB_23__::func_494(0, "FMMC_NSSG", 1, 1, 0, 0, 0);
	__LIB_23__::func_517(iParam0->f_2934, 0);
	if (Global_4718592.f_110415[iParam0->f_2934] == 0)
	{
		__LIB_23__::func_494(0, "FMMC_SEL_OFF", 0, 1, 0, 0, 0);
	}
	else
	{
		__LIB_23__::func_494(0, "NUMBER", 1, 1, 0, 0, 0);
		__LIB_23__::func_517(Global_4718592.f_110415[iParam0->f_2934], 0);
	}
	__LIB_23__::func_494(1, "FMMC_SGTS_SGTS", 1, Global_4718592.f_110415[iParam0->f_2934] > 0, 0, 0, 0);
	__LIB_23__::func_517(iParam0->f_2934, 0);
	if (Global_4718592.f_110415[iParam0->f_2934] == 0)
	{
		__LIB_23__::func_494(1, "FMMC_SEL_NA", 0, 0, 0, 0, 0);
	}
	else if (Global_4718592.f_110436[iParam0->f_2934] == 0)
	{
		__LIB_23__::func_494(1, "FMMC_SEL_OFF", 0, 1, 0, 0, 0);
	}
	else if (Global_4718592.f_110436[iParam0->f_2934] == -1)
	{
		__LIB_23__::func_494(1, "FMMC_NSG_PNV", 0, 1, 0, 0, 0);
	}
	else
	{
		__LIB_23__::func_494(1, "NUMBER", 1, 1, 0, 0, 0);
		__LIB_23__::func_517(Global_4718592.f_110436[iParam0->f_2934], 0);
	}
	bVar0 = false;
	while (bVar0 < 4)
	{
		__LIB_23__::func_494(bVar0 + 2, "FMMC_RSG_ITP", 1, ((bVar0 < Global_4718592.f_593 && Global_4718592.f_110436[iParam0->f_2934] == -1) && Global_4718592.f_110415[iParam0->f_2934] > 0), 0, 0, 0);
		__LIB_23__::func_517(bVar0, 0);
		if ((bVar0 >= Global_4718592.f_593 || Global_4718592.f_110436[iParam0->f_2934] != -1) || Global_4718592.f_110415[iParam0->f_2934] == 0)
		{
			__LIB_23__::func_494(bVar0 + 2, "FMMC_SEL_NA", 0, 0, 0, 0, 0);
		}
		else if (BitTest(Global_4718592.f_110457[iParam0->f_2934], (0 + bVar0)))
		{
			__LIB_23__::func_494(bVar0 + 2, "FMMC_SEL_YES", 0, 1, 0, 0, 0);
		}
		else
		{
			__LIB_23__::func_494(bVar0 + 2, "FMMC_SEL_NO", 0, 1, 0, 0, 0);
		}
		bVar0++;
	}
}

void func_43(int* iParam0)//Position - 0x1A04D7
{
	bool bVar0;
	__LIB_23__::func_384(iParam0);
	__LIB_1__::func_767("FMMC_SDEFS_T");
	__LIB_19__::func_185(iParam0->f_4757);
	__LIB_1__::func_766(1, 1, 0, 0, 0);
	__LIB_1__::func_765(1, 2, 1, 1, 1);
	__LIB_12__::func_593(0, 1, 0, 0, 0);
	Global_23149 = 0.36f;
	iParam0->f_270 = 706;
	iParam0->f_546 = 21;
	__LIB_23__::func_494(0, "FMMC_NSSGS", 1, 1, 0, 0, 0);
	__LIB_23__::func_517(iParam0->f_4757, 0);
	if (Global_4718592.f_110436[iParam0->f_4757] == 0)
	{
		__LIB_23__::func_494(0, "FMMC_SEL_OFF", 0, 1, 0, 0, 0);
	}
	else
	{
		__LIB_23__::func_494(0, "NUMBER", 1, 1, 0, 0, 0);
		__LIB_23__::func_517(Global_4718592.f_110436[iParam0->f_4757], 0);
	}
	__LIB_23__::func_420(iParam0, 0, "MC_H_NSSGS", 1);
	bVar0 = false;
	while (bVar0 < 20)
	{
		__LIB_23__::func_494((1 + bVar0), "FMMC_SDEFS_SG", 1, 1, 0, 0, 0);
		__LIB_23__::func_517(bVar0, 0);
		__LIB_23__::func_494((1 + bVar0), __LIB_23__::func_56(Global_4718592.f_110478[iParam0->f_4757 /*21*/][bVar0]), 0, 1, 0, 0, 0);
		bVar0++;
	}
}

void func_44(int* iParam0)//Position - 0x1A0BA8
{
	bool bVar0;
	__LIB_23__::func_384(iParam0);
	__LIB_1__::func_767("FMMC_RSSG_T");
	__LIB_1__::func_766(1, 1, 0, 0, 0);
	__LIB_1__::func_765(1, 2, 1, 1, 1);
	__LIB_12__::func_593(0, 0, 0, 0, 0);
	Global_23149 = 0.31f;
	iParam0->f_270 = 704;
	iParam0->f_546 = 20;
	iParam0->f_2934 = iParam0->f_547;
	bVar0 = false;
	while (bVar0 < 20)
	{
		__LIB_23__::func_494(bVar0, "FMMC_RSSGIG", 1, 1, 0, 0, 0);
		__LIB_23__::func_517(bVar0, 0);
		iParam0->f_14[bVar0] = 708;
		bVar0++;
	}
}

void func_45(int* iParam0)//Position - 0x1A41FD
{
	bool bVar0;
	struct<16> Var1[6];
	bool bVar2;
	struct<16> Var3;
	struct<8> Var4;
	char cVar5[128];
	struct<2> Var6;
	__LIB_23__::func_384(iParam0);
	__LIB_1__::func_767("CTF_OBJ_TXTT");
	__LIB_12__::func_593(0, 0, 0, 0, 0);
	__LIB_1__::func_766(1, 1, 0, 0, 0);
	__LIB_1__::func_765(1, 2, 1, 1, 1);
	iParam0->f_546 = 6;
	iParam0->f_270 = 3;
	bVar0 = "CTF_OTXT_OB";
	if (BitTest(Global_4718592.f_4, 21))
	{
		bVar0 = "CTF_OTXT_VE";
	}
	Var1[0 /*16*/] = { Global_4718592.f_658[0 /*22957*/].f_12410[0 /*16*/] };
	Var1[1 /*16*/] = { Global_4718592.f_658[0 /*22957*/].f_12683[0 /*16*/] };
	Var1[2 /*16*/] = { Global_4718592.f_658[0 /*22957*/].f_12956[0 /*16*/] };
	Var1[3 /*16*/] = { Global_4718592.f_658[0 /*22957*/].f_13775[0 /*16*/] };
	Var1[4 /*16*/] = { Global_4718592.f_658[0 /*22957*/].f_13229[0 /*16*/] };
	Var1[5 /*16*/] = { Global_4718592.f_658[0 /*22957*/].f_13502[0 /*16*/] };
	bVar2 = false;
	while (bVar2 <= 5)
	{
		Var3 = { __LIB_23__::func_62(bVar2, MISC::IS_STRING_NULL_OR_EMPTY(&(Var1[bVar2 /*16*/]))) };
		if (bVar2 < 3)
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Var1[bVar2 /*16*/])))
			{
				__LIB_23__::func_494(bVar2, &Var3, 1, 1, 0, 0, 0);
				__LIB_23__::func_499(bVar0, 0);
			}
			else
			{
				__LIB_23__::func_494(bVar2, &Var3, 0, 1, 0, 0, 0);
			}
		}
		else
		{
			__LIB_23__::func_494(bVar2, &Var3, 0, 1, 0, 0, 0);
		}
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Var1[bVar2 /*16*/])))
		{
			cVar5 = { Var1[bVar2 /*16*/] };
			StringCopy(&Var6, "FMMC_MN" /* GXT: ~a~ */, 16);
			StringCopy(&Var4, __LIB_23__::func_498(&Var6, &cVar5, 1039516303, 0, 0), 64);
			if (!MISC::ARE_STRINGS_EQUAL(&Var4, &cVar5))
			{
				StringCopy(&Var6, "FMMC_TRUNC" /* GXT: ~a~... */, 16);
			}
			__LIB_23__::func_494(bVar2, &Var6, 1, 1, 0, 0, 0);
			__LIB_23__::func_495(&Var4, 0, 0, 0);
		}
		else
		{
			__LIB_23__::func_494(bVar2, "CELL_489" /* GXT: ... */, 0, 1, 0, 0, 0);
		}
		iParam0->f_142[bVar2] = (71 + bVar2);
		bVar2++;
	}
}

void func_46(int* iParam0)//Position - 0x1A4482
{
	bool bVar0;
	__LIB_23__::func_384(iParam0);
	__LIB_1__::func_767("FMMC_DSL_PSPKT");
	__LIB_1__::func_766(1, 1, 0, 0, 0);
	__LIB_1__::func_765(1, 2, 1, 1, 1);
	__LIB_12__::func_593(0, 0, 0, 0, 0);
	Global_23149 = 0.3f;
	iParam0->f_546 = 36;
	iParam0->f_270 = 3;
	bVar0 = false;
	while (bVar0 <= 35)
	{
		__LIB_23__::func_494(bVar0 + 1, "FMMC_DSL_PPRT", 2, 1, 0, 0, 0);
		__LIB_23__::func_517(bVar0, 0);
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_4718592.f_142299[bVar0 /*8*/])))
		{
			__LIB_23__::func_495(&(Global_4718592.f_142299[bVar0 /*8*/]), 0, 0, 0);
		}
		else
		{
			__LIB_23__::func_495("NONE" /* GXT: None */, 0, 0, 0);
		}
		__LIB_23__::func_494(bVar0 + 1, "NUMBER", 1, 1, 0, 0, 0);
		__LIB_23__::func_517(Global_4718592.f_142588[bVar0], 0);
		__LIB_23__::func_420(iParam0, bVar0 + 1, "MC_H_DSL_PPRT", 0);
		bVar0++;
	}
}

void func_47(int* iParam0)//Position - 0x1A4560
{
	bool bVar0;
	__LIB_23__::func_384(iParam0);
	__LIB_1__::func_767("FMMC_DSL_SPKT");
	__LIB_1__::func_766(1, 1, 0, 0, 0);
	__LIB_1__::func_765(1, 2, 1, 1, 1);
	__LIB_12__::func_593(0, 0, 0, 0, 0);
	iParam0->f_546 = 36;
	iParam0->f_270 = 3;
	bVar0 = false;
	while (bVar0 <= 35)
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(&(Global_4718592.f_142299[bVar0 /*8*/])))
		{
			if (bVar0 < 10)
			{
				__LIB_23__::func_494(bVar0, "FMMC_DSL_SPA", 1, 1, 0, 0, 0);
				__LIB_23__::func_517(bVar0, 0);
			}
			else
			{
				__LIB_23__::func_494(bVar0, "FMMC_DSL_SPAA", 1, 1, 0, 0, 0);
				__LIB_23__::func_495(__LIB_23__::func_63(bVar0), 0, 0, 0);
			}
			__LIB_23__::func_494(bVar0, "", 0, 1, 0, 0, 0);
		}
		else
		{
			if (bVar0 < 10)
			{
				__LIB_23__::func_494(bVar0, "FMMC_DSL_SPN", 1, 1, 0, 0, 0);
				__LIB_23__::func_517(bVar0, 0);
			}
			else
			{
				__LIB_23__::func_494(bVar0, "FMMC_DSL_SPNA", 1, 1, 0, 0, 0);
				__LIB_23__::func_495(__LIB_23__::func_63(bVar0), 0, 0, 0);
			}
			__LIB_23__::func_494(bVar0, "STRING", 1, 1, 0, 0, 0);
			__LIB_23__::func_495(&(Global_4718592.f_142299[bVar0 /*8*/]), 0, 0, 0);
		}
		bVar0++;
	}
}

void func_48(int* iParam0)//Position - 0x1A4A26
{
	struct<2> Var0;
	bool bVar1;
	__LIB_23__::func_384(iParam0);
	__LIB_1__::func_767("MC_NTCB_TBUM");
	__LIB_1__::func_766(1, 1, 0, 0, 0);
	__LIB_1__::func_765(1, 2, 1, 1, 1);
	__LIB_12__::func_593(0, 1, 0, 0, 0);
	Global_23149 = 0.28f;
	iParam0->f_270 = 679;
	iParam0->f_546 = 0;
	bVar1 = false;
	bVar1 = false;
	while (bVar1 <= 3)
	{
		__LIB_23__::func_494((0 + bVar1), "MC_NTCB_MOIN", 1, 1, 0, 0, 0);
		__LIB_23__::func_517(bVar1, 0);
		if (BitTest(Global_4718592.f_162510.f_11, bVar1))
		{
			StringCopy(&Var0, "FMMC_SEL_YES", 16);
		}
		else
		{
			StringCopy(&Var0, "FMMC_SEL_NO", 16);
		}
		__LIB_23__::func_494((0 + bVar1), &Var0, 0, 1, 0, 0, 0);
		__LIB_23__::func_420(iParam0, (0 + bVar1), "MCH_NTCB_MOIN", 1);
		iParam0->f_546++;
		bVar1++;
	}
}

void func_49(int* iParam0)//Position - 0x1A4AED
{
	struct<2> Var0;
	bool bVar1;
	__LIB_23__::func_384(iParam0);
	__LIB_1__::func_767("MC_NTCB_TBUW");
	__LIB_1__::func_766(1, 1, 0, 0, 0);
	__LIB_1__::func_765(1, 2, 1, 1, 1);
	__LIB_12__::func_593(0, 1, 0, 0, 0);
	Global_23149 = 0.28f;
	iParam0->f_270 = 679;
	iParam0->f_546 = 0;
	bVar1 = false;
	bVar1 = false;
	while (bVar1 <= 15)
	{
		__LIB_23__::func_494((0 + bVar1), "MC_NTCB_WOIN", 1, 1, 0, 0, 0);
		__LIB_23__::func_517(bVar1, 0);
		if (BitTest(Global_4718592.f_162510.f_12, bVar1))
		{
			StringCopy(&Var0, "FMMC_SEL_YES", 16);
		}
		else
		{
			StringCopy(&Var0, "FMMC_SEL_NO", 16);
		}
		__LIB_23__::func_494((0 + bVar1), &Var0, 0, 1, 0, 0, 0);
		__LIB_23__::func_420(iParam0, (0 + bVar1), "MCH_NTCB_WOIN", 1);
		iParam0->f_546++;
		bVar1++;
	}
}

void func_50(int* iParam0)//Position - 0x1A4BB5
{
	struct<2> Var0;
	bool bVar1;
	__LIB_23__::func_384(iParam0);
	__LIB_1__::func_767("MC_NTCB_TBUD");
	__LIB_1__::func_766(1, 1, 0, 0, 0);
	__LIB_1__::func_765(1, 2, 1, 1, 1);
	__LIB_12__::func_593(0, 1, 0, 0, 0);
	Global_23149 = 0.28f;
	iParam0->f_270 = 679;
	iParam0->f_546 = 0;
	bVar1 = false;
	bVar1 = false;
	while (bVar1 <= 11)
	{
		__LIB_23__::func_494((0 + bVar1), "MC_NTCB_DOIN", 1, 1, 0, 0, 0);
		__LIB_23__::func_517(bVar1, 0);
		if (BitTest(Global_4718592.f_162510.f_10, bVar1))
		{
			StringCopy(&Var0, "FMMC_SEL_YES", 16);
		}
		else
		{
			StringCopy(&Var0, "FMMC_SEL_NO", 16);
		}
		__LIB_23__::func_494((0 + bVar1), &Var0, 0, 1, 0, 0, 0);
		__LIB_23__::func_420(iParam0, (0 + bVar1), "MCH_NTCB_DOIN", 1);
		iParam0->f_546++;
		bVar1++;
	}
}

void func_51(int* iParam0)//Position - 0x1A4C7D
{
	struct<2> Var0;
	bool bVar1;
	__LIB_23__::func_384(iParam0);
	__LIB_1__::func_767("MC_NTCB_TBUC");
	__LIB_1__::func_766(1, 1, 0, 0, 0);
	__LIB_1__::func_765(1, 2, 1, 1, 1);
	__LIB_12__::func_593(0, 1, 0, 0, 0);
	Global_23149 = 0.28f;
	iParam0->f_270 = 679;
	iParam0->f_546 = 0;
	bVar1 = false;
	bVar1 = false;
	while (bVar1 <= 2)
	{
		__LIB_23__::func_494((0 + bVar1), "MC_NTCB_COIN", 1, 1, 0, 0, 0);
		__LIB_23__::func_517(bVar1, 0);
		if (BitTest(Global_4718592.f_162510.f_13, bVar1))
		{
			StringCopy(&Var0, "FMMC_SEL_YES", 16);
		}
		else
		{
			StringCopy(&Var0, "FMMC_SEL_NO", 16);
		}
		__LIB_23__::func_494((0 + bVar1), &Var0, 0, 1, 0, 0, 0);
		__LIB_23__::func_420(iParam0, (0 + bVar1), "MCH_NTCB_COIN", 1);
		iParam0->f_546++;
		bVar1++;
	}
}

void func_52(int* iParam0)//Position - 0x1A4D44
{
	struct<2> Var0;
	bool bVar1;
	__LIB_23__::func_384(iParam0);
	__LIB_1__::func_767("MC_NTCB_TBUCS");
	__LIB_1__::func_766(1, 1, 0, 0, 0);
	__LIB_1__::func_765(1, 2, 1, 1, 1);
	__LIB_12__::func_593(0, 1, 0, 0, 0);
	Global_23149 = 0.28f;
	iParam0->f_270 = 679;
	iParam0->f_546 = 0;
	bVar1 = false;
	bVar1 = false;
	while (bVar1 <= 7)
	{
		__LIB_23__::func_494((0 + bVar1), "MC_NTCB_CAIN", 1, 1, 0, 0, 0);
		__LIB_23__::func_517(bVar1, 0);
		if (BitTest(Global_4718592.f_162510.f_9, bVar1))
		{
			StringCopy(&Var0, "FMMC_SEL_YES", 16);
		}
		else
		{
			StringCopy(&Var0, "FMMC_SEL_NO", 16);
		}
		__LIB_23__::func_494((0 + bVar1), &Var0, 0, 1, 0, 0, 0);
		__LIB_23__::func_420(iParam0, (0 + bVar1), "MCH_NTCB_CAIN", 1);
		iParam0->f_546++;
		bVar1++;
	}
}

void func_53(int* iParam0)//Position - 0x1A5AC7
{
	struct<2> Var0;
	bool bVar1;
	__LIB_23__::func_384(iParam0);
	__LIB_1__::func_767("FMMC_SUB_MENUT");
	__LIB_1__::func_766(1, 1, 0, 0, 0);
	__LIB_1__::func_765(1, 2, 1, 1, 1);
	__LIB_12__::func_593(0, 1, 0, 0, 0);
	iParam0->f_270 = 649;
	iParam0->f_546 = 0;
	__LIB_23__::func_494(0, "FMMC_WRP_LOC7", 0, 1, 0, 0, 0);
	bVar1 = BitTest(Global_4718592.f_162496, 7);
	if (bVar1)
	{
		StringCopy(&Var0, "FMMC_SEL_YES", 16);
	}
	else
	{
		StringCopy(&Var0, "FMMC_SEL_NO", 16);
	}
	__LIB_23__::func_494(0, &Var0, 0, 1, 0, 0, 0);
	iParam0->f_546++;
}

void func_54(int* iParam0)//Position - 0x1A5BCB
{
	struct<2> Var0;
	__LIB_23__::func_384(iParam0);
	__LIB_1__::func_767("FMMC_LOC_MOCT");
	__LIB_1__::func_766(1, 1, 0, 0, 0);
	__LIB_1__::func_765(1, 2, 1, 1, 1);
	__LIB_12__::func_593(0, 1, 0, 0, 0);
	iParam0->f_270 = 649;
	iParam0->f_546 = 0;
	__LIB_23__::func_494(0, "FMMC_LOC_MOC0", 0, 1, 0, 0, 0);
	StringCopy(&Var0, "FMMC_LOC_MOC0_", 16);
	StringIntConCat(&Var0, Global_4718592.f_169366, 16);
	__LIB_23__::func_494(0, &Var0, 0, 1, 0, 0, 0);
	iParam0->f_546++;
	__LIB_23__::func_494(1, "FMMC_LOC_MOC1", 0, 1, 0, 0, 0);
	StringCopy(&Var0, "FMMC_LOC_MOC1_", 16);
	StringIntConCat(&Var0, Global_4718592.f_169366.f_1, 16);
	__LIB_23__::func_494(1, &Var0, 0, 1, 0, 0, 0);
	iParam0->f_546++;
	__LIB_23__::func_494(2, "FMMC_LOC_MOC2", 0, Global_4718592.f_169366.f_1 != 3, 0, 0, 0);
	StringCopy(&Var0, "FMMC_LOC_MOC2_", 16);
	StringIntConCat(&Var0, Global_4718592.f_169366.f_2, 16);
	__LIB_23__::func_494(2, &Var0, 0, Global_4718592.f_169366.f_1 != 3, 0, 0, 0);
	iParam0->f_546++;
	__LIB_23__::func_494(3, "FMMC_LOC_MOC3", 0, 1, 0, 0, 0);
	StringCopy(&Var0, "FMMC_LOC_MOC3_", 16);
	StringIntConCat(&Var0, Global_4718592.f_169366.f_3, 16);
	__LIB_23__::func_494(3, &Var0, 0, 1, 0, 0, 0);
	iParam0->f_546++;
	__LIB_23__::func_494(4, "FMMC_MOC_DGW", 0, 1, 0, 0, 0);
	if (BitTest(Global_4718592.f_169366.f_4, 0))
	{
		StringCopy(&Var0, "FMMC_SEL_YES", 16);
	}
	else
	{
		StringCopy(&Var0, "FMMC_SEL_NO", 16);
	}
	__LIB_23__::func_494(4, &Var0, 0, 1, 0, 0, 0);
	iParam0->f_546++;
	__LIB_23__::func_494(5, "FMMC_MOC_DIP", 0, 1, 0, 0, 0);
	if (BitTest(Global_4718592.f_169366.f_4, 1))
	{
		StringCopy(&Var0, "FMMC_SEL_YES", 16);
	}
	else
	{
		StringCopy(&Var0, "FMMC_SEL_NO", 16);
	}
	__LIB_23__::func_494(5, &Var0, 0, 1, 0, 0, 0);
	iParam0->f_546++;
}

void func_55(int* iParam0)//Position - 0x1A5DB6
{
	struct<2> Var0;
	__LIB_23__::func_384(iParam0);
	__LIB_1__::func_767("FMMC_BUNK_MENUT");
	__LIB_1__::func_766(1, 1, 0, 0, 0);
	__LIB_1__::func_765(1, 2, 1, 1, 1);
	__LIB_12__::func_593(0, 1, 0, 0, 0);
	iParam0->f_270 = 649;
	iParam0->f_546 = 0;
	__LIB_23__::func_494(0, "FMMC_WRP_LOC6", 0, 1, 0, 0, 0);
	if (BitTest(Global_4718592.f_162496, 6))
	{
		StringCopy(&Var0, "FMMC_SEL_YES", 16);
	}
	else
	{
		StringCopy(&Var0, "FMMC_SEL_NO", 16);
	}
	__LIB_23__::func_494(0, &Var0, 0, 1, 0, 0, 0);
	iParam0->f_546++;
	__LIB_23__::func_494(1, "FMMC_LOC_BUNK1", 0, 1, 0, 0, 0);
	if (BitTest(Global_4718592.f_24, 0))
	{
		StringCopy(&Var0, "FMMC_SEL_YES", 16);
	}
	else
	{
		StringCopy(&Var0, "FMMC_SEL_NO", 16);
	}
	__LIB_23__::func_494(1, &Var0, 0, 1, 0, 0, 0);
	iParam0->f_546++;
	__LIB_23__::func_494(2, "FMMC_LOC_BUNK2", 0, 1, 0, 0, 0);
	if (BitTest(Global_4718592.f_24, 1))
	{
		StringCopy(&Var0, "FMMC_SEL_YES", 16);
	}
	else
	{
		StringCopy(&Var0, "FMMC_SEL_NO", 16);
	}
	__LIB_23__::func_494(2, &Var0, 0, 1, 0, 0, 0);
	iParam0->f_546++;
	__LIB_23__::func_494(3, "FMMC_LOC_BUNK3", 0, 1, 0, 0, 0);
	if (BitTest(Global_4718592.f_24, 2))
	{
		StringCopy(&Var0, "FMMC_SEL_YES", 16);
	}
	else
	{
		StringCopy(&Var0, "FMMC_SEL_NO", 16);
	}
	__LIB_23__::func_494(3, &Var0, 0, 1, 0, 0, 0);
	iParam0->f_546++;
	__LIB_23__::func_494(4, "FMMC_LOC_BUNK4", 0, 1, 0, 0, 0);
	if (BitTest(Global_4718592.f_24, 3))
	{
		StringCopy(&Var0, "FMMC_SEL_YES", 16);
	}
	else
	{
		StringCopy(&Var0, "FMMC_SEL_NO", 16);
	}
	__LIB_23__::func_494(4, &Var0, 0, 1, 0, 0, 0);
	iParam0->f_546++;
	__LIB_23__::func_494(5, "FMMC_LOC_BUNK5", 0, 1, 0, 0, 0);
	if (BitTest(Global_4718592.f_24, 4))
	{
		StringCopy(&Var0, "FMMC_SEL_YES", 16);
	}
	else
	{
		StringCopy(&Var0, "FMMC_SEL_NO", 16);
	}
	__LIB_23__::func_494(5, &Var0, 0, 1, 0, 0, 0);
	iParam0->f_546++;
	__LIB_23__::func_494(6, "FMMC_LOC_BUNK6", 0, 1, 0, 0, 0);
	if (BitTest(Global_4718592.f_24, 5))
	{
		StringCopy(&Var0, "FMMC_SEL_YES", 16);
	}
	else
	{
		StringCopy(&Var0, "FMMC_SEL_NO", 16);
	}
	__LIB_23__::func_494(6, &Var0, 0, 1, 0, 0, 0);
	iParam0->f_546++;
	__LIB_23__::func_494(7, "FMMC_LOC_BUNK7", 0, 1, 0, 0, 0);
	if (BitTest(Global_4718592.f_24, 6))
	{
		StringCopy(&Var0, "FMMC_SEL_YES", 16);
	}
	else
	{
		StringCopy(&Var0, "FMMC_SEL_NO", 16);
	}
	__LIB_23__::func_494(7, &Var0, 0, 1, 0, 0, 0);
	iParam0->f_546++;
	__LIB_23__::func_494(8, "FMMC_LOC_BUNK8", 0, 1, 0, 0, 0);
	if (BitTest(Global_4718592.f_24, 7))
	{
		StringCopy(&Var0, "FMMC_SEL_YES", 16);
	}
	else
	{
		StringCopy(&Var0, "FMMC_SEL_NO", 16);
	}
	__LIB_23__::func_494(8, &Var0, 0, 1, 0, 0, 0);
	iParam0->f_546++;
	__LIB_23__::func_494(9, "FMMC_LOC_BUNK9", 0, 1, 0, 0, 0);
	if (BitTest(Global_4718592.f_24, 10))
	{
		StringCopy(&Var0, "FMMC_SEL_YES", 16);
	}
	else
	{
		StringCopy(&Var0, "FMMC_SEL_NO", 16);
	}
	__LIB_23__::func_494(9, &Var0, 0, 1, 0, 0, 0);
	iParam0->f_546++;
	__LIB_23__::func_494(10, "FMMC_LOC_BUN10", 0, 1, 0, 0, 0);
	if (BitTest(Global_4718592.f_24, 11))
	{
		StringCopy(&Var0, "FMMC_SEL_YES", 16);
	}
	else
	{
		StringCopy(&Var0, "FMMC_SEL_NO", 16);
	}
	__LIB_23__::func_494(10, &Var0, 0, 1, 0, 0, 0);
	iParam0->f_546++;
	__LIB_23__::func_494(11, "FMMC_LOC_BUN11", 0, 1, 0, 0, 0);
	if (BitTest(Global_4718592.f_24, 12))
	{
		StringCopy(&Var0, "FMMC_SEL_YES", 16);
	}
	else
	{
		StringCopy(&Var0, "FMMC_SEL_NO", 16);
	}
	__LIB_23__::func_494(11, &Var0, 0, 1, 0, 0, 0);
	iParam0->f_546++;
	__LIB_23__::func_494(12, "FMMC_LOC_BUN12", 0, 1, 0, 0, 0);
	if (BitTest(Global_4718592.f_24, 22))
	{
		StringCopy(&Var0, "FMMC_SEL_YES", 16);
	}
	else
	{
		StringCopy(&Var0, "FMMC_SEL_NO", 16);
	}
	__LIB_23__::func_494(12, &Var0, 0, 1, 0, 0, 0);
	iParam0->f_546++;
	__LIB_23__::func_494(13, "FMMC_LOC_BUN13", 0, 1, 0, 0, 0);
	if (BitTest(Global_4718592.f_25, 5))
	{
		StringCopy(&Var0, "FMMC_SEL_YES", 16);
	}
	else
	{
		StringCopy(&Var0, "FMMC_SEL_NO", 16);
	}
	__LIB_23__::func_494(13, &Var0, 0, 1, 0, 0, 0);
	iParam0->f_546++;
	__LIB_23__::func_494(14, "FMMC_LOC_BUN14", 0, 1, 0, 0, 0);
	if (BitTest(Global_4718592.f_25, 10))
	{
		StringCopy(&Var0, "FMMC_SEL_YES", 16);
	}
	else
	{
		StringCopy(&Var0, "FMMC_SEL_NO", 16);
	}
	__LIB_23__::func_494(14, &Var0, 0, 1, 0, 0, 0);
	iParam0->f_546++;
}

void func_56(int* iParam0, bool bParam1)//Position - 0x1A699D
{
	bool bVar0;
	bool bVar1;
	__LIB_23__::func_494(0, "FMMC_LOC_A_TH", 0, bParam1, 0, 0, 0);
	__LIB_23__::func_494(0, __LIB_23__::func_67(Global_4718592.f_162543), 0, bParam1, 0, 0, 0);
	iParam0->f_546++;
	__LIB_23__::func_494(1, "FMMC_LOC_A_SK", 0, bParam1, 0, 0, 0);
	MemCopy(&bVar0, {__LIB_23__::func_66(Global_4718592.f_162543.f_1)}, 4);
	__LIB_23__::func_494(1, &bVar0, 0, bParam1, 0, 0, 0);
	iParam0->f_546++;
	__LIB_23__::func_494(2, "FMMC_LOC_A_LT", 0, bParam1, 0, 0, 0);
	MemCopy(&bVar1, {__LIB_23__::func_64(Global_4718592.f_162543.f_2)}, 4);
	__LIB_23__::func_494(2, &bVar1, 0, bParam1, 0, 0, 0);
	iParam0->f_546++;
}

void func_57(int* iParam0)//Position - 0x1A8832
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<3> Var4;
	__LIB_23__::func_384(iParam0);
	Global_23149 = 0.3f;
	__LIB_1__::func_767("FMMC_PLANT");
	__LIB_1__::func_766(1, 1, 0, 0, 0);
	__LIB_1__::func_765(1, 2, 1, 1, 1);
	__LIB_12__::func_593(0, 0, 0, 0, 0);
	iParam0->f_270 = 323;
	iVar1 = 0;
	while (iVar1 <= 17)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_4718592.f_162583[iVar1 /*18*/])))
		{
			iVar3++;
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 <= 2)
	{
		StringCopy(&Var4, "FMMC_PLN_LV", 24);
		StringIntConCat(&Var4, iVar1, 24);
		__LIB_23__::func_494(bVar0, &Var4, 0, 1, 0, 0, 0);
		bVar0++;
		iVar2 = 0;
		while (iVar2 <= 17)
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_4718592.f_162583[iVar2 /*18*/])) && Global_4718592.f_162583[iVar2 /*18*/].f_16 == iVar1)
			{
				if (__LIB_22__::func_607(iParam0) == bVar0)
				{
					__LIB_12__::func_593(0, 1, 0, 0, 0);
				}
				__LIB_23__::func_494(bVar0, "STRING", 1, 1, 0, 0, 0);
				__LIB_23__::func_495(&(Global_4718592.f_162583[iVar2 /*18*/]), 0, 0, 0);
				if (Global_4718592.f_162583[iVar2 /*18*/].f_17 == -1)
				{
					__LIB_23__::func_494(bVar0, "FMMC_PLAN_NVAR", 0, 1, 0, 0, 0);
				}
				else
				{
					__LIB_23__::func_494(bVar0, "FMMC_PLAN_VAR", 1, 1, 0, 0, 0);
					__LIB_23__::func_517(Global_4718592.f_162583[iVar2 /*18*/].f_17, 0);
				}
				bVar0++;
			}
			iVar2++;
		}
		StringCopy(&Var4, "FMMC_PLN_AD", 24);
		StringIntConCat(&Var4, iVar1, 24);
		__LIB_23__::func_494(bVar0, &Var4, 0, iVar3 < 18, 0, 0, 0);
		iParam0->f_142[bVar0] = 82;
		bVar0++;
		iVar1++;
	}
	__LIB_23__::func_494(bVar0, "FMMC_PLN_REM", 0, 1, 0, 0, 0);
	bVar0++;
	iParam0->f_546 = bVar0;
}

void func_58(bool bParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)//Position - 0x1A8B15
{
	__LIB_23__::func_494(bParam0, bParam2, 1, bParam4, 0, 0, 0);
	__LIB_23__::func_517(bParam3, 0);
	__LIB_23__::func_494(bParam0, "NUMBER", 1, bParam4, 0, 0, 0);
	__LIB_23__::func_497(fParam1, iParam5, 0);
}

void func_59(int* iParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6)//Position - 0x1A8B4B
{
	struct<3> Var0;
	__LIB_23__::func_494(bParam1, bParam3, 1, bParam5, 0, 0, 0);
	__LIB_23__::func_517(bParam4, 0);
	StringCopy(&Var0, "FMMC_EVEC_XYZ", 24);
	if (bParam5)
	{
		StringIntConCat(&Var0, iParam0->f_4780, 24);
	}
	__LIB_23__::func_494(bParam1, &Var0, 3, bParam5, 0, 0, 0);
	__LIB_23__::func_497(*uParam2, 1, 0);
	__LIB_23__::func_497(uParam2->f_1, 1, 0);
	__LIB_23__::func_497(uParam2->f_2, 1, 0);
	if (bParam5 && iParam6)
	{
		iParam0->f_142[bParam1] = 110;
	}
}

void func_60(int* iParam0)//Position - 0x1A8E51
{
	bool bVar0;
	bool bVar1;
	struct<2> Var2;
	__LIB_23__::func_384(iParam0);
	__LIB_1__::func_767("FMMC_WRP_TIT");
	__LIB_1__::func_766(1, 1, 0, 0, 0);
	__LIB_1__::func_765(1, 2, 1, 1, 1);
	__LIB_12__::func_593(0, 1, 0, 0, 0);
	if (__LIB_22__::func_607(iParam0) == 0 || __LIB_22__::func_607(iParam0) == 2)
	{
		__LIB_12__::func_593(0, 0, 0, 0, 0);
	}
	iParam0->f_270 = 2;
	iParam0->f_546 = 14;
	__LIB_23__::func_494(0, "FMMC_WRP_SET", 0, 1, 0, 0, 0);
	__LIB_23__::func_494(1, "FMMC_WRP_LOC", 0, 1, 0, 0, 0);
	StringCopy(&Var2, "FMMC_WRP_LOC", 16);
	StringIntConCat(&Var2, Global_4718592.f_162483, 16);
	__LIB_23__::func_494(1, &Var2, 0, 1, 0, 0, 0);
	__LIB_23__::func_494(2, "FMMC_WRP_WRP", 0, 1, 0, 0, 0);
	bVar0 = false;
	while (bVar0 <= 3)
	{
		bVar1 = bVar0 < Global_4718592.f_593;
		if ((__LIB_22__::func_607(iParam0) == (3 + bVar0 * 2) || __LIB_22__::func_607(iParam0) == (4 + bVar0 * 2)) && !bVar1)
		{
			__LIB_12__::func_593(0, 0, 0, 0, 0);
		}
		__LIB_23__::func_494((3 + bVar0 * 2), "FMMC_WRP_FRL", 1, bVar1, 0, 0, 0);
		__LIB_23__::func_517(bVar0, 0);
		if (Global_4718592.f_162484[bVar0] == -1)
		{
			__LIB_23__::func_494((3 + bVar0 * 2), "FMMC_SEL_OFF", 0, bVar1, 0, 0, 0);
		}
		else
		{
			__LIB_23__::func_494((3 + bVar0 * 2), "NUMBER", 1, bVar1, 0, 0, 0);
			__LIB_23__::func_517(Global_4718592.f_162484[bVar0], 0);
		}
		__LIB_23__::func_494((4 + bVar0 * 2), "FMMC_WRP_LRL", 1, bVar1, 0, 0, 0);
		__LIB_23__::func_517(bVar0, 0);
		if (Global_4718592.f_162489[bVar0] == -1)
		{
			__LIB_23__::func_494((4 + bVar0 * 2), "FMMC_SEL_OFF", 0, bVar1, 0, 0, 0);
		}
		else
		{
			__LIB_23__::func_494((4 + bVar0 * 2), "NUMBER", 1, bVar1, 0, 0, 0);
			__LIB_23__::func_517(Global_4718592.f_162489[bVar0], 0);
		}
		bVar0++;
	}
	__LIB_23__::func_494(11, "FMMC_WRP_HMRK", 0, 1, 0, 0, 0);
	if (BitTest(Global_4718592.f_162494, 0))
	{
		StringCopy(&Var2, "FMMC_SEL_YES", 16);
	}
	else
	{
		StringCopy(&Var2, "FMMC_SEL_NO", 16);
	}
	__LIB_23__::func_494(11, &Var2, 0, 1, 0, 0, 0);
	__LIB_23__::func_494(12, "FMMC_WRP_DBLP", 0, 1, 0, 0, 0);
	if (BitTest(Global_4718592.f_162494, 1))
	{
		StringCopy(&Var2, "FMMC_SEL_YES", 16);
	}
	else
	{
		StringCopy(&Var2, "FMMC_SEL_NO", 16);
	}
	__LIB_23__::func_494(12, &Var2, 0, 1, 0, 0, 0);
	__LIB_23__::func_494(13, "FMMC_WRP_DGPS", 0, 1, 0, 0, 0);
	if (BitTest(Global_4718592.f_162494, 2))
	{
		StringCopy(&Var2, "FMMC_SEL_YES", 16);
	}
	else
	{
		StringCopy(&Var2, "FMMC_SEL_NO", 16);
	}
	__LIB_23__::func_494(13, &Var2, 0, 1, 0, 0, 0);
}

void func_61(int* iParam0)//Position - 0x1A9BE7
{
	struct<6> Var0;
	bool bVar1;
	__LIB_23__::func_384(iParam0);
	__LIB_1__::func_767("FMMC_VIS_GRPT");
	__LIB_12__::func_593(0, 1, 0, 0, 0);
	__LIB_1__::func_766(1, 4, 0, 0, 0);
	__LIB_1__::func_765(1, 2, 1, 1, 1);
	__LIB_12__::func_593(0, 0, 0, 0, 0);
	iParam0->f_270 = 2;
	bVar1 = false;
	while (bVar1 <= 6)
	{
		Var0 = { __LIB_23__::func_78(bVar1) };
		__LIB_23__::func_494(bVar1, &Var0, 0, 1, 0, 0, 0);
		if (BitTest(iParam0->f_732, bVar1))
		{
			__LIB_23__::func_496(bVar1, 5, 0);
		}
		else
		{
			__LIB_23__::func_496(bVar1, 7, 0);
		}
		bVar1++;
	}
	__LIB_23__::func_494(7, "FMMC_VIS_SA", 0, 1, 0, 0, 0);
	__LIB_23__::func_494(8, "FMMC_VIS_HA", 0, 1, 0, 0, 0);
	iParam0->f_546 = 9;
}

void func_62(int* iParam0)//Position - 0x1AA037
{
	struct<2> Var0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	int iVar7;
	int iVar8;
	__LIB_23__::func_384(iParam0);
	iParam0->f_270 = 323;
	iParam0->f_546 = 26;
	__LIB_1__::func_767("FMMC_BCRT");
	__LIB_1__::func_766(1, 1, 0, 0, 0);
	__LIB_1__::func_765(1, 2, 1, 1, 1);
	__LIB_12__::func_593(0, 1, 0, 0, 0);
	bVar1 = BitTest(Global_4718592.f_162985, 0);
	bVar2 = BitTest(Global_4718592.f_162985, 4);
	bVar3 = BitTest(Global_4718592.f_162985, 3);
	bVar4 = BitTest(Global_4718592.f_162985, 5);
	bVar5 = BitTest(Global_4718592.f_162985, 2);
	bVar6 = BitTest(Global_4718592.f_162985, 1);
	if (!bVar1 && ((__LIB_22__::func_607(iParam0) == 1 || __LIB_22__::func_607(iParam0) == 2) || __LIB_22__::func_607(iParam0) == 3))
	{
		__LIB_12__::func_593(0, 0, 0, 0, 0);
	}
	else if (!bVar3 && __LIB_22__::func_607(iParam0) == 6)
	{
		__LIB_12__::func_593(0, 0, 0, 0, 0);
	}
	else if (!bVar5 && __LIB_22__::func_607(iParam0) == 9)
	{
		__LIB_12__::func_593(0, 0, 0, 0, 0);
	}
	else if (!bVar6 && __LIB_22__::func_607(iParam0) == 11)
	{
		__LIB_12__::func_593(0, 0, 0, 0, 0);
	}
	__LIB_23__::func_494(0, "FMMC_BCR_TIM", 0, 1, 0, 0, 0);
	if (!bVar1)
	{
		__LIB_23__::func_494(0, "FMMC_SEL_OFF", 0, 1, 0, 0, 0);
	}
	else
	{
		__LIB_23__::func_494(0, "FMMC_SEL_ON", 0, 1, 0, 0, 0);
	}
	__LIB_23__::func_494(1, "FMMC_BCR_TIMR", 0, bVar1, 0, 0, 0);
	iVar7 = ((Global_4718592.f_162986 / 1000) % 60);
	iVar8 = ((Global_4718592.f_162986 / 60000) % 60);
	StringCopy(&Var0, "", 16);
	if (iVar8 < 10)
	{
		StringConCat(&Var0, "0", 16);
	}
	StringIntConCat(&Var0, iVar8, 16);
	StringConCat(&Var0, ":", 16);
	if (iVar7 < 10)
	{
		StringConCat(&Var0, "0", 16);
	}
	StringIntConCat(&Var0, iVar7, 16);
	__LIB_23__::func_494(1, "STRING", 1, bVar1, 0, 0, 0);
	__LIB_23__::func_495(&Var0, 0, 0, 0);
	__LIB_23__::func_494(2, "FMMC_BCR_TIMT", 0, bVar1, 0, 0, 0);
	__LIB_23__::func_494(2, "FMMC_TEAM_NO", 1, bVar1, 0, 0, 0);
	__LIB_23__::func_517(Global_4718592.f_162987, 0);
	__LIB_23__::func_494(3, "FMMC_BCR_TMRL", 0, bVar1, 0, 0, 0);
	if (Global_4718592.f_162988 == -1)
	{
		__LIB_23__::func_494(3, "FMMC_MIS_END", 0, bVar1, 0, 0, 0);
	}
	else
	{
		__LIB_23__::func_494(3, "FMMC_RULEVAR", 1, bVar1, 0, 0, 0);
		__LIB_23__::func_517(Global_4718592.f_162988, 0);
	}
	if (__LIB_23__::func_399())
	{
		__LIB_23__::func_494(4, "FMMC_BCR_SWAT", 0, 1, 0, 0, 0);
		if (!bVar2)
		{
			__LIB_23__::func_494(4, "FMMC_SEL_OFF", 0, 1, 0, 0, 0);
		}
		else
		{
			__LIB_23__::func_494(4, "FMMC_SEL_ON", 0, 1, 0, 0, 0);
		}
	}
	__LIB_23__::func_494(5, "FMMC_BCR_NOK", 0, 1, 0, 0, 0);
	if (!bVar3)
	{
		__LIB_23__::func_494(5, "FMMC_SEL_OFF", 0, 1, 0, 0, 0);
	}
	else
	{
		__LIB_23__::func_494(5, "FMMC_SEL_ON", 0, 1, 0, 0, 0);
	}
	__LIB_23__::func_494(6, "FMMC_BCR_NOKR", 0, bVar3, 0, 0, 0);
	__LIB_23__::func_494(6, "NUMBER", 1, bVar3, 0, 0, 0);
	__LIB_23__::func_517(Global_4718592.f_162994, 0);
	if (__LIB_23__::func_399())
	{
		__LIB_23__::func_494(7, "FMMC_BCR_CBD", 0, 1, 0, 0, 0);
		if (!bVar4)
		{
			__LIB_23__::func_494(7, "FMMC_SEL_OFF", 0, 1, 0, 0, 0);
		}
		else
		{
			__LIB_23__::func_494(7, "FMMC_SEL_ON", 0, 1, 0, 0, 0);
		}
		__LIB_23__::func_494(8, "FMMC_BCR_PD", 0, 1, 0, 0, 0);
		if (!bVar5)
		{
			__LIB_23__::func_494(8, "FMMC_SEL_OFF", 0, 1, 0, 0, 0);
		}
		else
		{
			__LIB_23__::func_494(8, "FMMC_SEL_ON", 0, 1, 0, 0, 0);
		}
		__LIB_23__::func_494(9, "FMMC_BCR_PDR", 0, bVar5, 0, 0, 0);
		__LIB_23__::func_494(9, "FMMC_PERCENT", 1, bVar5, 0, 0, 0);
		__LIB_23__::func_517(Global_4718592.f_162990, 0);
		__LIB_23__::func_494(10, "FMMC_BCR_VD", 0, 1, 0, 0, 0);
		if (!bVar6)
		{
			__LIB_23__::func_494(10, "FMMC_SEL_OFF", 0, 1, 0, 0, 0);
		}
		else
		{
			__LIB_23__::func_494(10, "FMMC_SEL_ON", 0, 1, 0, 0, 0);
		}
		__LIB_23__::func_494(11, "FMMC_BCR_VDR", 0, bVar6, 0, 0, 0);
		__LIB_23__::func_494(11, "FMMC_PERCENT", 1, bVar6, 0, 0, 0);
		__LIB_23__::func_517(Global_4718592.f_162992, 0);
		__LIB_23__::func_494(12, "FMMC_BCR_PH", 0, 1, 0, 0, 0);
		if (!BitTest(Global_4718592.f_162985, 6))
		{
			__LIB_23__::func_494(12, "FMMC_SEL_OFF", 0, 1, 0, 0, 0);
		}
		else
		{
			__LIB_23__::func_494(12, "FMMC_SEL_ON", 0, 1, 0, 0, 0);
		}
		__LIB_23__::func_494(13, "FMMC_BCR_PHR", 0, BitTest(Global_4718592.f_162985, 6), 0, 0, 0);
		__LIB_23__::func_494(13, "FMMC_PERCENT", 1, BitTest(Global_4718592.f_162985, 6), 0, 0, 0);
		__LIB_23__::func_517(Global_4718592.f_162997, 0);
		__LIB_23__::func_494(14, "FMMC_BCR_MMT", 0, 1, 0, 0, 0);
		if (!BitTest(Global_4718592.f_162985, 7))
		{
			__LIB_23__::func_494(14, "FMMC_SEL_OFF", 0, 1, 0, 0, 0);
		}
		else
		{
			__LIB_23__::func_494(14, "FMMC_SEL_ON", 0, 1, 0, 0, 0);
		}
		__LIB_23__::func_494(15, "FMMC_BCR_MMTT", 0, BitTest(Global_4718592.f_162985, 7), 0, 0, 0);
		__LIB_23__::func_494(15, "FMMC_TEAM_NO", 1, BitTest(Global_4718592.f_162985, 7), 0, 0, 0);
		__LIB_23__::func_517(Global_4718592.f_163001, 0);
		__LIB_23__::func_494(16, "FMMC_BCR_MMTS", 0, BitTest(Global_4718592.f_162985, 7), 0, 0, 0);
		__LIB_23__::func_494(16, "FMMC_RULEVAR", 1, BitTest(Global_4718592.f_162985, 7), 0, 0, 0);
		__LIB_23__::func_517(Global_4718592.f_163002, 0);
		__LIB_23__::func_494(17, "FMMC_BCR_MMTE", 0, BitTest(Global_4718592.f_162985, 7), 0, 0, 0);
		__LIB_23__::func_494(17, "FMMC_RULEVAR", 1, BitTest(Global_4718592.f_162985, 7), 0, 0, 0);
		__LIB_23__::func_517(Global_4718592.f_163003, 0);
		__LIB_23__::func_494(18, "FMMC_BCR_MMTR", 0, BitTest(Global_4718592.f_162985, 7), 0, 0, 0);
		iVar7 = ((Global_4718592.f_163004 / 1000) % 60);
		iVar8 = ((Global_4718592.f_163004 / 60000) % 60);
		StringCopy(&Var0, "", 16);
		if (iVar8 < 10)
		{
			StringConCat(&Var0, "0", 16);
		}
		StringIntConCat(&Var0, iVar8, 16);
		StringConCat(&Var0, ":", 16);
		if (iVar7 < 10)
		{
			StringConCat(&Var0, "0", 16);
		}
		StringIntConCat(&Var0, iVar7, 16);
		__LIB_23__::func_494(18, "STRING", 1, BitTest(Global_4718592.f_162985, 7), 0, 0, 0);
		__LIB_23__::func_495(&Var0, 0, 0, 0);
	}
	__LIB_23__::func_494(19, "FMMC_BCR_VOD", 0, 1, 0, 0, 0);
	if (!BitTest(Global_4718592.f_162985, 8))
	{
		__LIB_23__::func_494(19, "FMMC_SEL_OFF", 0, 1, 0, 0, 0);
	}
	else
	{
		__LIB_23__::func_494(19, "FMMC_SEL_ON", 0, 1, 0, 0, 0);
	}
	__LIB_23__::func_494(20, "FMMC_BCR_MGF", 0, 1, 0, 0, 0);
	if (!BitTest(Global_4718592.f_162985, 9))
	{
		__LIB_23__::func_494(20, "FMMC_SEL_OFF", 0, 1, 0, 0, 0);
	}
	else
	{
		__LIB_23__::func_494(20, "FMMC_SEL_ON", 0, 1, 0, 0, 0);
	}
	__LIB_23__::func_494(21, "FMMC_BCR_MGFR", 0, BitTest(Global_4718592.f_162985, 9), 0, 0, 0);
	__LIB_23__::func_494(21, "NUMBER", 1, BitTest(Global_4718592.f_162985, 9), 0, 0, 0);
	__LIB_23__::func_517(Global_4718592.f_162999, 0);
	__LIB_23__::func_494(22, "FMMC_BCR_NOH", 0, 1, 0, 0, 0);
	if (!BitTest(Global_4718592.f_162985, 10))
	{
		__LIB_23__::func_494(22, "FMMC_SEL_OFF", 0, 1, 0, 0, 0);
	}
	else
	{
		__LIB_23__::func_494(22, "FMMC_SEL_ON", 0, 1, 0, 0, 0);
	}
	__LIB_23__::func_494(23, "FMMC_BCR_NOHR", 0, BitTest(Global_4718592.f_162985, 10), 0, 0, 0);
	__LIB_23__::func_494(23, "NUMBER", 1, BitTest(Global_4718592.f_162985, 10), 0, 0, 0);
	__LIB_23__::func_517(Global_4718592.f_162998, 0);
	__LIB_23__::func_494(24, "FMMC_BCR_LBF", 0, 1, 0, 0, 0);
	if (!BitTest(Global_4718592.f_162985, 11))
	{
		__LIB_23__::func_494(24, "FMMC_SEL_OFF", 0, 1, 0, 0, 0);
	}
	else
	{
		__LIB_23__::func_494(24, "FMMC_SEL_ON", 0, 1, 0, 0, 0);
	}
	__LIB_23__::func_420(iParam0, 24, "FMMC_BCR_LBF", 0);
	__LIB_23__::func_494(25, "FMMC_BCR_RA", 0, 1, 0, 0, 0);
	__LIB_23__::func_494(25, "FMMC_DOLLARS", 1, 1, 0, 0, 0);
	__LIB_23__::func_517(Global_4718592.f_163000, 0);
}

void func_63(int* iParam0)//Position - 0x1AA85F
{
	int iVar0;
	int iVar1;
	__LIB_23__::func_384(iParam0);
	__LIB_1__::func_767("FMMC_OBJ_FALT");
	__LIB_1__::func_766(1, 0, 0, 0, 0);
	__LIB_1__::func_765(1, 1, 1, 1, 1);
	__LIB_12__::func_593(0, 0, 0, 0, 0);
	iParam0->f_270 = 308;
	iParam0->f_546 = 0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_4980736.f_175877[iVar0 /*16*/])))
		{
			iVar1++;
		}
		iVar0++;
	}
	__LIB_23__::func_494(0, "FMMC_CST_FALA", 0, iVar1 < 5, 0, 0, 0);
	iParam0->f_142[0] = 83;
	iParam0->f_546++;
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_4980736.f_175877[iVar0 /*16*/])))
		{
			__LIB_23__::func_494(iVar0 + 1, "STRING", 1, 1, 0, 0, 0);
			__LIB_23__::func_495(&(Global_4980736.f_175877[iVar0 /*16*/]), 0, 0, 0);
			iParam0->f_546++;
		}
		iVar0++;
	}
}

void func_64(int* iParam0)//Position - 0x1AA94E
{
	bool bVar0;
	struct<2> Var1;
	iParam0->f_270 = 3;
	__LIB_23__::func_384(iParam0);
	__LIB_1__::func_767("FMMC_RST_ARET");
	__LIB_1__::func_766(1, 1, 0, 0, 0);
	__LIB_1__::func_765(1, 2, 1, 1, 1);
	__LIB_12__::func_593(0, 1, 0, 0, 0);
	bVar0 = false;
	while (bVar0 <= 7)
	{
		StringCopy(&Var1, "FMMC_RST_ARE", 16);
		StringIntConCat(&Var1, bVar0, 16);
		__LIB_23__::func_494(bVar0, &Var1, 0, 1, 0, 0, 0);
		if (BitTest(Global_4718592.f_162947, bVar0))
		{
			__LIB_23__::func_494(bVar0, "FMMC_RST_ARE_I", 0, 1, 0, 0, 0);
		}
		else
		{
			__LIB_23__::func_494(bVar0, "FMMC_RST_ARE_A", 0, 1, 0, 0, 0);
		}
		bVar0++;
	}
	iParam0->f_546 = 8;
}

void func_65(int* iParam0)//Position - 0x1AB5AF
{
	int iVar0;
	struct<2> Var1;
	__LIB_23__::func_384(iParam0);
	__LIB_1__::func_767("FMMC_D_SBM");
	__LIB_1__::func_766(1, 1, 0, 0, 0);
	__LIB_12__::func_593(0, 1, 0, 0, 0);
	__LIB_1__::func_765(1, 2, 1, 1, 1);
	iParam0->f_270 = 19;
	iParam0->f_546 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		__LIB_23__::func_494(iParam0->f_546, "FMMC_D_TAGTM", 1, 1, 0, 0, 0);
		__LIB_23__::func_517((iParam0->f_546 + __LIB_0__::func_138(__LIB_10__::func_207(), 0, 1)), 0);
		__LIB_23__::func_494(iParam0->f_546, "STRING", 1, 1, 0, 0, 0);
		StringCopy(&Var1, "LOB_TAG_TIME_", 16);
		if (Global_4718592.f_170046[iParam0->f_546] > -1)
		{
			StringIntConCat(&Var1, Global_4718592.f_170046[iParam0->f_546], 16);
		}
		else
		{
			StringCopy(&Var1, "FMMC_SEL_NO", 16);
		}
		__LIB_23__::func_499(&Var1, 0);
		iParam0->f_546++;
		if (Global_4718592.f_170046[0] == -1)
		{
		}
		else
		{
			iVar0++;
		}
	}
}

void func_66(int* iParam0, var uParam1)//Position - 0x1AC00F
{
	struct<2> Var0;
	int iVar1;
	__LIB_23__::func_384(iParam0);
	__LIB_1__::func_767("FMMC_STIT");
	__LIB_1__::func_766(1, 1, 0, 0, 0);
	__LIB_1__::func_765(1, 2, 1, 1, 1);
	__LIB_12__::func_593(0, 1, 0, 0, 0);
	Global_23149 = 0.295f;
	iParam0->f_546 = 0;
	iVar1 = 0;
	while (iVar1 <= 11)
	{
		StringCopy(&Var0, "FMMC_STR_AT_", 16);
		StringIntConCat(&Var0, iVar1, 16);
		__LIB_23__::func_494(iParam0->f_546, &Var0, 0, 1, 0, 0, 0);
		StringCopy(&Var0, "FMMC_AMTYP_", 16);
		StringIntConCat(&Var0, (*uParam1)[iVar1], 16);
		__LIB_23__::func_494(iParam0->f_546, &Var0, 0, 1, 0, 0, 0);
		iParam0->f_546++;
		iVar1++;
	}
}

void func_67(int* iParam0)//Position - 0x1AC5FB
{
	struct<2> Var0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	iParam0->f_270 = 323;
	__LIB_23__::func_384(iParam0);
	__LIB_1__::func_767("FMMC_UACP_T");
	__LIB_1__::func_766(1, 1, 0, 0, 0);
	__LIB_1__::func_765(1, 2, 1, 1, 1);
	__LIB_12__::func_593(0, 1, 0, 0, 0);
	Global_23149 = 0.295f;
	bVar1 = false;
	bVar2 = false;
	while (bVar2 <= 3)
	{
		bVar3 = false;
		while (bVar3 <= 3)
		{
			__LIB_23__::func_494(bVar1, "FMMC_UACP", 3, 1, 0, 0, 0);
			__LIB_23__::func_517(1, 0);
			__LIB_23__::func_517(bVar2, 0);
			__LIB_23__::func_517(bVar3, 0);
			if (Global_4718592.f_658[bVar2 /*22957*/].f_895[bVar3] == -1)
			{
				__LIB_23__::func_494(bVar1, "FMMC_SEL_OFF", 0, 1, 0, 0, 0);
			}
			else
			{
				StringCopy(&Var0, "FMMC_UACP_", 16);
				StringIntConCat(&Var0, Global_4718592.f_658[bVar2 /*22957*/].f_895[bVar3], 16);
				__LIB_23__::func_494(bVar1, &Var0, 0, 1, 0, 0, 0);
			}
			bVar1++;
			bVar3++;
		}
		bVar2++;
	}
	bVar2 = false;
	while (bVar2 <= 3)
	{
		bVar3 = false;
		while (bVar3 <= 3)
		{
			__LIB_23__::func_494(bVar1, "FMMC_UACP", 3, 1, 0, 0, 0);
			__LIB_23__::func_517(2, 0);
			__LIB_23__::func_517(bVar2, 0);
			__LIB_23__::func_517(bVar3, 0);
			if (Global_4718592.f_658[bVar2 /*22957*/].f_900[bVar3] == -1)
			{
				__LIB_23__::func_494(bVar1, "FMMC_SEL_OFF", 0, 1, 0, 0, 0);
			}
			else
			{
				StringCopy(&Var0, "FMMC_UACP_", 16);
				StringIntConCat(&Var0, Global_4718592.f_658[bVar2 /*22957*/].f_900[bVar3], 16);
				__LIB_23__::func_494(bVar1, &Var0, 0, 1, 0, 0, 0);
			}
			bVar1++;
			bVar3++;
		}
		bVar2++;
	}
	iParam0->f_546 = bVar1;
	bVar1 = false;
	while (bVar1 <= (iParam0->f_546 - 1))
	{
		bVar1++;
	}
}

void func_68(int* iParam0)//Position - 0x1AC7A7
{
	struct<2> Var0;
	bool bVar1;
	iParam0->f_270 = 3;
	__LIB_23__::func_384(iParam0);
	__LIB_1__::func_767("FMMC_T0_M42T");
	__LIB_1__::func_766(1, 1, 0, 0, 0);
	__LIB_1__::func_765(1, 2, 1, 1, 1);
	__LIB_12__::func_593(0, 0, 0, 0, 0);
	bVar1 = false;
	while (bVar1 <= (Global_4718592.f_593 - 1))
	{
		StringCopy(&Var0, "FM_TDM_TEAM_S", 16);
		__LIB_23__::func_494(bVar1, &Var0, 1, 1, 0, 0, 0);
		__LIB_23__::func_517((bVar1 + __LIB_0__::func_138(__LIB_10__::func_207(), 0, 1)), 0);
		if (HUD::GET_LENGTH_OF_LITERAL_STRING(&(Global_4718592.f_658[bVar1 /*22957*/].f_15686[0 /*16*/])) > 15)
		{
			__LIB_23__::func_494(bVar1, "FMMC_TRUNC" /* GXT: ~a~... */, 1, 1, 0, 0, 0);
			__LIB_23__::func_495(HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME(&(Global_4718592.f_658[bVar1 /*22957*/].f_15686[0 /*16*/]), 0, 15), 0, 0, 0);
		}
		else
		{
			__LIB_23__::func_494(bVar1, "FMMC_MN" /* GXT: ~a~ */, 1, 1, 0, 0, 0);
			__LIB_23__::func_495(&(Global_4718592.f_658[bVar1 /*22957*/].f_15686[0 /*16*/]), 0, 0, 0);
		}
		bVar1++;
	}
	iParam0->f_546 = bVar1;
}

void func_69(int* iParam0)//Position - 0x1AC9B7
{
	struct<2> Var0;
	iParam0->f_270 = 3;
	__LIB_23__::func_384(iParam0);
	__LIB_1__::func_767("FMMC_COP_PERT");
	__LIB_1__::func_766(1, 1, 0, 0, 0);
	__LIB_1__::func_765(1, 2, 1, 1, 1);
	__LIB_12__::func_593(0, 1, 0, 0, 0);
	__LIB_23__::func_494(0, "FMMC_COP_PER_SR", 0, 1, 0, 0, 0);
	__LIB_23__::func_494(0, "NUMBER", 1, 1, 0, 0, 0);
	__LIB_23__::func_497(Global_4718592.f_166181, 1, 0);
	iParam0->f_546++;
	__LIB_23__::func_494(1, "FMMC_COP_PER_PR", 0, 1, 0, 0, 0);
	__LIB_23__::func_494(1, "NUMBER", 1, 1, 0, 0, 0);
	__LIB_23__::func_497(Global_4718592.f_166182, 1, 0);
	iParam0->f_546++;
	__LIB_23__::func_494(2, "FMMC_COP_PER_HR", 0, 1, 0, 0, 0);
	__LIB_23__::func_494(2, "NUMBER", 1, 1, 0, 0, 0);
	__LIB_23__::func_497(Global_4718592.f_166183, 1, 0);
	iParam0->f_546++;
	__LIB_23__::func_494(3, "FMMC_COP_PER_RV", 0, 1, 0, 0, 0);
	if (Global_4718592.f_166184 == -1f)
	{
		__LIB_23__::func_494(3, "FMMC_SEL_DEF", 0, 1, 0, 0, 0);
	}
	else
	{
		__LIB_23__::func_494(3, "NUMBER", 1, 1, 0, 0, 0);
		__LIB_23__::func_497(Global_4718592.f_166184, 1, 0);
	}
	iParam0->f_546++;
	__LIB_23__::func_494(4, "FMMC_COP_PER_AO", 0, 1, 0, 0, 0);
	if (BitTest(Global_4718592.f_22, 11))
	{
		StringCopy(&Var0, "FMMC_SEL_YES", 16);
	}
	else
	{
		StringCopy(&Var0, "FMMC_SEL_NO", 16);
	}
	__LIB_23__::func_494(4, &Var0, 0, 1, 0, 0, 0);
	iParam0->f_546++;
}

void func_70(int* iParam0)//Position - 0x1ACB3B
{
	struct<2> Var0;
	iParam0->f_270 = 373;
	__LIB_23__::func_384(iParam0);
	__LIB_1__::func_767("FMMC_CSO_SMT");
	__LIB_1__::func_766(1, 1, 0, 0, 0);
	__LIB_1__::func_765(1, 2, 1, 1, 1);
	__LIB_12__::func_593(0, 1, 0, 0, 0);
	__LIB_23__::func_494(0, "FMMC_CSO_STTL", 0, 1, 0, 0, 0);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_4718592.f_166198)))
	{
		__LIB_23__::func_494(0, "STRING", 1, 1, 0, 0, 0);
		__LIB_23__::func_495(&(Global_4718592.f_166198), 0, 0, 0);
	}
	iParam0->f_546++;
	__LIB_23__::func_494(1, "FMMC_CSO_SSTL", 0, 1, 0, 0, 0);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_4718592.f_166202)))
	{
		__LIB_23__::func_494(1, "STRING", 1, 1, 0, 0, 0);
		__LIB_23__::func_495(&(Global_4718592.f_166202), 0, 0, 0);
	}
	iParam0->f_546++;
	__LIB_23__::func_494(2, "FMMC_CSO_STP", 0, 1, 0, 0, 0);
	if (BitTest(Global_4718592.f_14, 5))
	{
		StringCopy(&Var0, "FMMC_SS_TT_1", 16);
	}
	else
	{
		StringCopy(&Var0, "FMMC_SS_TT_0", 16);
	}
	__LIB_23__::func_494(2, &Var0, 0, 1, 0, 0, 0);
	iParam0->f_546++;
	__LIB_23__::func_494(3, "FMMC_CSO_SHLS", 0, 1, 0, 0, 0);
	if (BitTest(Global_4718592.f_24, 14))
	{
		StringCopy(&Var0, "FMMC_SS_TT_1", 16);
	}
	else
	{
		StringCopy(&Var0, "FMMC_SS_TT_0", 16);
	}
	__LIB_23__::func_494(3, &Var0, 0, 1, 0, 0, 0);
	iParam0->f_546++;
	__LIB_23__::func_494(4, "FMMC_CSO_VCR", 0, 1, 0, 0, 0);
	if (BitTest(Global_4718592.f_24, 17))
	{
		StringCopy(&Var0, "FMMC_SS_TT_1", 16);
	}
	else
	{
		StringCopy(&Var0, "FMMC_SS_TT_0", 16);
	}
	__LIB_23__::func_494(4, &Var0, 0, 1, 0, 0, 0);
	iParam0->f_546++;
	__LIB_23__::func_494(5, "FMMC_CSO_SOOB", 0, 1, 0, 0, 0);
	if (BitTest(Global_4718592.f_16, 0))
	{
		StringCopy(&Var0, "FMMC_SS_TT_1", 16);
	}
	else
	{
		StringCopy(&Var0, "FMMC_SS_TT_0", 16);
	}
	__LIB_23__::func_494(5, &Var0, 0, 1, 0, 0, 0);
	iParam0->f_546++;
	__LIB_23__::func_494(6, "MC_CSO_STTL2", 0, 1, 0, 0, 0);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_4718592.f_166206)))
	{
		__LIB_23__::func_494(6, "STRING", 1, 1, 0, 0, 0);
		__LIB_23__::func_495(&(Global_4718592.f_166206), 0, 0, 0);
	}
	iParam0->f_546++;
	__LIB_23__::func_494(7, "MC_CSO_SSTL2", 0, 1, 0, 0, 0);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_4718592.f_166210)))
	{
		__LIB_23__::func_494(7, "STRING", 1, 1, 0, 0, 0);
		__LIB_23__::func_495(&(Global_4718592.f_166210), 0, 0, 0);
	}
	iParam0->f_546++;
	__LIB_23__::func_494(8, "MC_CSO_STTL3", 0, 1, 0, 0, 0);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_4718592.f_166214)))
	{
		__LIB_23__::func_494(8, "STRING", 1, 1, 0, 0, 0);
		__LIB_23__::func_495(&(Global_4718592.f_166214), 0, 0, 0);
	}
	iParam0->f_546++;
	__LIB_23__::func_494(9, "MC_CSO_SSTL3", 0, 1, 0, 0, 0);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_4718592.f_166218)))
	{
		__LIB_23__::func_494(9, "STRING", 1, 1, 0, 0, 0);
		__LIB_23__::func_495(&(Global_4718592.f_166218), 0, 0, 0);
	}
	iParam0->f_546++;
}

void func_71(int* iParam0)//Position - 0x1ACE53
{
	struct<2> Var0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	iParam0->f_270 = 378;
	__LIB_23__::func_384(iParam0);
	__LIB_1__::func_767("FMMC_MD_HWNO");
	__LIB_1__::func_766(1, 1, 0, 0, 0);
	__LIB_1__::func_765(1, 2, 1, 1, 1);
	__LIB_12__::func_593(0, 1, 0, 0, 0);
	bVar1 = BitTest(Global_4718592.f_14, 20);
	bVar2 = BitTest(Global_4718592.f_15, 3);
	bVar3 = BitTest(Global_4718592.f_14, 18);
	bVar4 = BitTest(Global_4718592.f_14, 19);
	bVar5 = BitTest(Global_4718592.f_19, 21);
	if (!bVar3 && (__LIB_22__::func_607(iParam0) == 3 || __LIB_22__::func_607(iParam0) == 4))
	{
		__LIB_12__::func_593(0, 0, 0, 0, 0);
	}
	if (!bVar4 && (__LIB_22__::func_607(iParam0) == 6 || __LIB_22__::func_607(iParam0) == 7))
	{
		__LIB_12__::func_593(0, 0, 0, 0, 0);
	}
	__LIB_23__::func_494(0, "FMMC_HWN_PFHT", 0, 1, 0, 0, 0);
	if (bVar1)
	{
		StringCopy(&Var0, "FMMC_SS_TT_1", 16);
	}
	else
	{
		StringCopy(&Var0, "FMMC_SS_TT_0", 16);
	}
	__LIB_23__::func_494(0, &Var0, 0, 1, 0, 0, 0);
	iParam0->f_546++;
	__LIB_23__::func_494(1, "FMMC_HWN_EHTB", 0, 1, 0, 0, 0);
	if (bVar2)
	{
		StringCopy(&Var0, "FMMC_SS_TT_1", 16);
	}
	else
	{
		StringCopy(&Var0, "FMMC_SS_TT_0", 16);
	}
	__LIB_23__::func_494(1, &Var0, 0, 1, 0, 0, 0);
	iParam0->f_546++;
	__LIB_23__::func_494(2, "FMMC_HWN_EHB", 0, 1, 0, 0, 0);
	if (bVar3)
	{
		StringCopy(&Var0, "FMMC_SS_TT_1", 16);
	}
	else
	{
		StringCopy(&Var0, "FMMC_SS_TT_0", 16);
	}
	__LIB_23__::func_494(2, &Var0, 0, 1, 0, 0, 0);
	iParam0->f_546++;
	__LIB_23__::func_494(3, "FMMC_HWN_HBD", 0, bVar3, 0, 0, 0);
	__LIB_23__::func_494(3, "NUMBER", 1, bVar3, 0, 0, 0);
	__LIB_23__::func_517(Global_4718592.f_166176, 0);
	iParam0->f_546++;
	__LIB_23__::func_494(4, "FMMC_HWN_HBMD", 0, bVar3, 0, 0, 0);
	__LIB_23__::func_494(4, "NUMBER", 1, bVar3, 0, 0, 0);
	__LIB_23__::func_517(Global_4718592.f_166177, 0);
	iParam0->f_546++;
	__LIB_23__::func_494(5, "FMMC_HWN_EFV", 0, 1, 0, 0, 0);
	if (bVar4)
	{
		StringCopy(&Var0, "FMMC_SS_TT_1", 16);
	}
	else
	{
		StringCopy(&Var0, "FMMC_SS_TT_0", 16);
	}
	__LIB_23__::func_494(5, &Var0, 0, 1, 0, 0, 0);
	iParam0->f_546++;
	__LIB_23__::func_494(6, "FMMC_HWN_FVD", 0, bVar4, 0, 0, 0);
	__LIB_23__::func_494(6, "NUMBER", 1, bVar4, 0, 0, 0);
	__LIB_23__::func_517(Global_4718592.f_166178, 0);
	iParam0->f_546++;
	__LIB_23__::func_494(7, "FMMC_HWN_FVC", 0, bVar4, 0, 0, 0);
	__LIB_23__::func_494(7, "NUMBER", 1, bVar4, 0, 0, 0);
	__LIB_23__::func_517(Global_4718592.f_166179, 0);
	iParam0->f_546++;
	__LIB_23__::func_494(8, "FMMC_HWN_EBT", 0, 1, 0, 0, 0);
	if (bVar5)
	{
		StringCopy(&Var0, "FMMC_SS_TT_1", 16);
	}
	else
	{
		StringCopy(&Var0, "FMMC_SS_TT_0", 16);
	}
	__LIB_23__::func_494(8, &Var0, 0, 1, 0, 0, 0);
	iParam0->f_546++;
}

void func_72(int* iParam0)//Position - 0x1AD146
{
	iParam0->f_270 = 342;
	__LIB_23__::func_384(iParam0);
	__LIB_1__::func_767("FMMC_PLTS_T");
	__LIB_19__::func_185((iParam0->f_848 + __LIB_0__::func_138(__LIB_10__::func_207(), 0, 1)));
	__LIB_1__::func_766(1, 1, 0, 0, 0);
	__LIB_1__::func_765(1, 2, 1, 1, 1);
	__LIB_12__::func_593(0, 1, 0, 0, 0);
	__LIB_23__::func_494(0, "FMMC_PLLTT1", 0, Global_4718592.f_593 > 0, 0, 0, 0);
	__LIB_23__::func_494(0, "NUMBER", 1, Global_4718592.f_593 > 0, 0, 0, 0);
	__LIB_23__::func_517(Global_4718592.f_168761[iParam0->f_848 /*5*/][0], 0);
	iParam0->f_546++;
	__LIB_23__::func_494(1, "FMMC_PLLTT2", 0, Global_4718592.f_593 > 1, 0, 0, 0);
	__LIB_23__::func_494(1, "NUMBER", 1, Global_4718592.f_593 > 1, 0, 0, 0);
	__LIB_23__::func_517(Global_4718592.f_168761[iParam0->f_848 /*5*/][1], 0);
	iParam0->f_546++;
	__LIB_23__::func_494(2, "FMMC_PLLTT3", 0, Global_4718592.f_593 > 2, 0, 0, 0);
	__LIB_23__::func_494(2, "NUMBER", 1, Global_4718592.f_593 > 2, 0, 0, 0);
	__LIB_23__::func_517(Global_4718592.f_168761[iParam0->f_848 /*5*/][2], 0);
	iParam0->f_546++;
	__LIB_23__::func_494(3, "FMMC_PLLTT4", 0, Global_4718592.f_593 > 3, 0, 0, 0);
	__LIB_23__::func_494(3, "NUMBER", 1, Global_4718592.f_593 > 3, 0, 0, 0);
	__LIB_23__::func_517(Global_4718592.f_168761[iParam0->f_848 /*5*/][3], 0);
	iParam0->f_546++;
}

void func_73(int* iParam0)//Position - 0x1AD2D8
{
	struct<2> Var0;
	iParam0->f_270 = 378;
	__LIB_23__::func_384(iParam0);
	__LIB_1__::func_767("FMMC_RPUT");
	__LIB_1__::func_766(1, 1, 4, 0, 0);
	__LIB_1__::func_765(1, 2, 2, 1, 1);
	__LIB_12__::func_593(0, 1, 0, 0, 0);
	__LIB_23__::func_494(0, "FMMC_RATCPPA", 0, 1, 0, 0, 0);
	if (BitTest(Global_4718592.f_16, 28))
	{
		StringCopy(&Var0, "FMMC_SEL_YES", 16);
	}
	else
	{
		StringCopy(&Var0, "FMMC_SEL_NO", 16);
	}
	__LIB_23__::func_494(0, &Var0, 0, 1, 0, 0, 0);
	iParam0->f_546++;
	__LIB_23__::func_494(1, "FMMC_RATCBEC", 0, 1, 0, 0, 0);
	StringCopy(&Var0, "FMMC_RATCBEC", 16);
	StringIntConCat(&Var0, Global_4718592.f_166194, 16);
	__LIB_23__::func_494(1, &Var0, 0, 1, 0, 0, 0);
	iParam0->f_546++;
	__LIB_23__::func_494(2, "FMMC_RPUT1", 0, 1, 0, 0, 0);
	__LIB_23__::func_494(2, "FMMC_CHASE_D", 1, 1, 0, 0, 0);
	__LIB_23__::func_517(Global_4718592.f_166185, 0);
	iParam0->f_546++;
	__LIB_23__::func_494(3, "FMMC_RPUT2", 0, 1, 0, 0, 0);
	__LIB_23__::func_494(3, "FMMC_CHASE_D", 1, 1, 0, 0, 0);
	__LIB_23__::func_517(Global_4718592.f_166186, 0);
	iParam0->f_546++;
	__LIB_23__::func_494(4, "FMMC_RPUT3", 0, 1, 0, 0, 0);
	__LIB_23__::func_494(4, "FMMC_CHASE_D", 1, 1, 0, 0, 0);
	__LIB_23__::func_517(Global_4718592.f_166187, 0);
	iParam0->f_546++;
	__LIB_23__::func_494(5, "FMMC_RPUT4", 0, 1, 0, 0, 0);
	__LIB_23__::func_494(5, "FMMC_CHASE_D", 1, 1, 0, 0, 0);
	__LIB_23__::func_517(Global_4718592.f_166188, 0);
	iParam0->f_546++;
	__LIB_23__::func_494(6, "FMMC_RPUT5", 0, 1, 0, 0, 0);
	__LIB_23__::func_494(6, "FMMC_CHASE_D", 1, 1, 0, 0, 0);
	__LIB_23__::func_517(Global_4718592.f_166189, 0);
	iParam0->f_546++;
	__LIB_23__::func_494(7, "FMMC_RPUT6", 0, 1, 0, 0, 0);
	__LIB_23__::func_494(7, "FMMC_CHASE_D", 1, 1, 0, 0, 0);
	__LIB_23__::func_517(Global_4718592.f_166190, 0);
	iParam0->f_546++;
	__LIB_23__::func_494(8, "FMMC_RPUT7", 0, 1, 0, 0, 0);
	__LIB_23__::func_494(8, "FMMC_CHASE_D", 1, 1, 0, 0, 0);
	__LIB_23__::func_517(Global_4718592.f_166191, 0);
	iParam0->f_546++;
	__LIB_23__::func_494(9, "FMMC_RPUT9", 0, 1, 0, 0, 0);
	__LIB_23__::func_494(9, "FMMC_CHASE_D", 1, 1, 0, 0, 0);
	__LIB_23__::func_517(Global_4718592.f_166195, 0);
	iParam0->f_546++;
	__LIB_23__::func_494(10, "FMMC_RMOVE", 0, 1, 0, 0, 0);
	if (Global_4718592.f_166192 == -1f || Global_4718592.f_166192 == 1f)
	{
		__LIB_23__::func_494(10, "FMMC_SEL_DSB", 0, 1, 0, 0, 0);
	}
	else
	{
		__LIB_23__::func_494(10, "NUMBER", 1, 1, 0, 0, 0);
	}
	__LIB_23__::func_497(Global_4718592.f_166192, 1, 0);
	iParam0->f_546++;
	__LIB_23__::func_494(11, "FMMC_RATCSW", 0, 1, 0, 0, 0);
	if (BitTest(Global_4718592.f_16, 24))
	{
		StringCopy(&Var0, "FMMC_RATCSW1", 16);
	}
	else
	{
		StringCopy(&Var0, "FMMC_RATCSW0", 16);
	}
	__LIB_23__::func_494(11, &Var0, 0, 1, 0, 0, 0);
	iParam0->f_546++;
	__LIB_23__::func_494(12, "FMMC_RATCRATY", 0, 1, 0, 0, 0);
	if (BitTest(Global_4718592.f_16, 20))
	{
		StringCopy(&Var0, "FMMC_SEL_YES", 16);
	}
	else
	{
		StringCopy(&Var0, "FMMC_SEL_NO", 16);
	}
	__LIB_23__::func_494(12, &Var0, 0, 1, 0, 0, 0);
	iParam0->f_546++;
	__LIB_23__::func_494(13, "FMMC_RPUT8", 0, 1, 0, 0, 0);
	if (BitTest(Global_4718592.f_16, 22))
	{
		StringCopy(&Var0, "FMMC_SEL_YES", 16);
	}
	else
	{
		StringCopy(&Var0, "FMMC_SEL_NO", 16);
	}
	__LIB_23__::func_494(13, &Var0, 0, 1, 0, 0, 0);
	iParam0->f_546++;
	__LIB_23__::func_494(14, "FMMC_RPUT7", 0, 1, 0, 0, 0);
	if (BitTest(Global_4718592.f_166193, 0))
	{
		__LIB_23__::func_496(14, 5, 0);
	}
	else
	{
		__LIB_23__::func_496(14, 7, 0);
	}
	iParam0->f_546++;
	__LIB_23__::func_494(15, "FMMC_RPUT1", 0, 1, 0, 0, 0);
	if (BitTest(Global_4718592.f_166193, 1))
	{
		__LIB_23__::func_496(15, 5, 0);
	}
	else
	{
		__LIB_23__::func_496(15, 7, 0);
	}
	iParam0->f_546++;
	__LIB_23__::func_494(16, "FMMC_RPUT2", 0, 1, 0, 0, 0);
	if (BitTest(Global_4718592.f_166193, 2))
	{
		__LIB_23__::func_496(16, 5, 0);
	}
	else
	{
		__LIB_23__::func_496(16, 7, 0);
	}
	iParam0->f_546++;
	__LIB_23__::func_494(17, "FMMC_RPUT3", 0, 1, 0, 0, 0);
	if (BitTest(Global_4718592.f_166193, 3))
	{
		__LIB_23__::func_496(17, 5, 0);
	}
	else
	{
		__LIB_23__::func_496(17, 7, 0);
	}
	iParam0->f_546++;
	__LIB_23__::func_494(18, "FMMC_RPUT4", 0, 1, 0, 0, 0);
	if (BitTest(Global_4718592.f_166193, 4))
	{
		__LIB_23__::func_496(18, 5, 0);
	}
	else
	{
		__LIB_23__::func_496(18, 7, 0);
	}
	iParam0->f_546++;
	__LIB_23__::func_494(19, "FMMC_RPUT5", 0, 1, 0, 0, 0);
	if (BitTest(Global_4718592.f_166193, 5))
	{
		__LIB_23__::func_496(19, 5, 0);
	}
	else
	{
		__LIB_23__::func_496(19, 7, 0);
	}
	iParam0->f_546++;
	__LIB_23__::func_494(20, "FMMC_RPUT6", 0, 1, 0, 0, 0);
	if (BitTest(Global_4718592.f_166193, 6))
	{
		__LIB_23__::func_496(20, 5, 0);
	}
	else
	{
		__LIB_23__::func_496(20, 7, 0);
	}
	iParam0->f_546++;
	__LIB_23__::func_494(21, "FMMC_RPUT9", 0, 1, 0, 0, 0);
	if (BitTest(Global_4718592.f_166193, 7))
	{
		__LIB_23__::func_496(21, 5, 0);
	}
	else
	{
		__LIB_23__::func_496(21, 7, 0);
	}
	iParam0->f_546++;
	__LIB_23__::func_494(22, "FMMC_BS_HRTBT", 0, 1, 0, 0, 0);
	if (BitTest(Global_4718592.f_17, 30))
	{
		StringCopy(&Var0, "FMMC_SEL_YES", 16);
	}
	else
	{
		StringCopy(&Var0, "FMMC_SEL_NO", 16);
	}
	__LIB_23__::func_494(22, &Var0, 0, 1, 0, 0, 0);
	iParam0->f_546++;
	__LIB_23__::func_494(23, "FMMC_PP_INTRO", 0, 1, 0, 0, 0);
	if (BitTest(Global_4718592.f_18, 17))
	{
		StringCopy(&Var0, "FMMC_SEL_YES", 16);
	}
	else
	{
		StringCopy(&Var0, "FMMC_SEL_NO", 16);
	}
	__LIB_23__::func_494(23, &Var0, 0, 1, 0, 0, 0);
	iParam0->f_546++;
	__LIB_23__::func_494(24, "FMMC_PP_PDESP", 0, 1, 0, 0, 0);
	if (BitTest(Global_4718592.f_18, 7))
	{
		StringCopy(&Var0, "FMMC_SEL_YES", 16);
	}
	else
	{
		StringCopy(&Var0, "FMMC_SEL_NO", 16);
	}
	__LIB_23__::func_494(24, &Var0, 0, 1, 0, 0, 0);
	iParam0->f_546++;
}

void func_74(int* iParam0)//Position - 0x1AF18F
{
	iParam0->f_270 = 248;
	__LIB_23__::func_384(iParam0);
	__LIB_1__::func_767("FMMC_OBJ_TTL");
	__LIB_1__::func_766(1, 1, 0, 0, 0);
	__LIB_1__::func_765(1, 2, 1, 1, 1);
	__LIB_12__::func_593(0, 1, 0, 0, 0);
	__LIB_23__::func_494(0, "FMMC_PRP_CLDL", 0, 1, 0, 0, 0);
	__LIB_23__::func_494(0, "NUMBER", 1, 1, 0, 0, 0);
	__LIB_23__::func_517(Global_4718592.f_169876, 0);
	iParam0->f_546++;
}

void func_75(int* iParam0)//Position - 0x1B0F5B
{
	iParam0->f_270 = 378;
	__LIB_23__::func_384(iParam0);
	__LIB_1__::func_767("FMMC_MSO_WVMOT");
	__LIB_1__::func_766(1, 1, 0, 0, 0);
	__LIB_1__::func_765(1, 2, 1, 1, 1);
	__LIB_12__::func_593(0, 1, 0, 0, 0);
	__LIB_23__::func_494(0, "FMMC_WVM_SBET", 0, 1, 0, 0, 0);
	__LIB_23__::func_494(0, "NUMBER", 1, 1, 0, 0, 0);
	__LIB_23__::func_517(Global_4718592.f_169364, 0);
	iParam0->f_546++;
	__LIB_23__::func_494(1, "FMMC_WVM_SBER", 0, 1, 0, 0, 0);
	__LIB_23__::func_494(1, "NUMBER", 1, 1, 0, 0, 0);
	__LIB_23__::func_517(Global_4718592.f_169365, 0);
	iParam0->f_546++;
}

void func_76(int* iParam0)//Position - 0x1B2F49
{
	struct<2> Var0;
	iParam0->f_270 = 378;
	__LIB_23__::func_384(iParam0);
	__LIB_1__::func_767("FMMC_RUG_SET");
	__LIB_1__::func_766(1, 1, 0, 0, 0);
	__LIB_1__::func_765(1, 2, 1, 1, 1);
	__LIB_12__::func_593(0, 1, 0, 0, 0);
	__LIB_23__::func_494(0, "FMMC_PD_OTRI", 0, 1, 0, 0, 0);
	if (BitTest(Global_4718592.f_16, 30))
	{
		StringCopy(&Var0, "FMMC_SEL_YES", 16);
	}
	else
	{
		StringCopy(&Var0, "FMMC_SEL_NO", 16);
	}
	__LIB_23__::func_494(0, &Var0, 0, 1, 0, 0, 0);
	iParam0->f_546++;
	__LIB_23__::func_494(1, "FMMC_HTRI_NP", 0, 1, 0, 0, 0);
	if (BitTest(Global_4718592.f_16, 31))
	{
		StringCopy(&Var0, "FMMC_SEL_YES", 16);
	}
	else
	{
		StringCopy(&Var0, "FMMC_SEL_NO", 16);
	}
	__LIB_23__::func_494(1, &Var0, 0, 1, 0, 0, 0);
	iParam0->f_546++;
	__LIB_23__::func_494(2, "FMMC_DEL_IR", 0, 1, 0, 0, 0);
	if (BitTest(Global_4718592.f_17, 0))
	{
		StringCopy(&Var0, "FMMC_SEL_YES", 16);
	}
	else
	{
		StringCopy(&Var0, "FMMC_SEL_NO", 16);
	}
	__LIB_23__::func_494(2, &Var0, 0, 1, 0, 0, 0);
	iParam0->f_546++;
	__LIB_23__::func_494(3, "FMMC_ROIEZ", 0, 1, 0, 0, 0);
	if (BitTest(Global_4718592.f_17, 9))
	{
		StringCopy(&Var0, "FMMC_SEL_YES", 16);
	}
	else
	{
		StringCopy(&Var0, "FMMC_SEL_NO", 16);
	}
	__LIB_23__::func_494(3, &Var0, 0, 1, 0, 0, 0);
	iParam0->f_546++;
	__LIB_23__::func_494(4, "FMMC_SDPH", 0, 1, 0, 0, 0);
	if (Global_4718592.f_168759 == 0)
	{
		__LIB_23__::func_494(4, "FMMC_SEL_OFF", 0, 1, 0, 0, 0);
	}
	else
	{
		__LIB_23__::func_494(4, "NUMBER", 1, 1, 0, 0, 0);
		__LIB_23__::func_517(Global_4718592.f_168759, 0);
	}
	iParam0->f_546++;
	__LIB_23__::func_494(5, "FMMC_DSA_ANIM", 0, 1, 0, 0, 0);
	if (BitTest(Global_4718592.f_17, 16))
	{
		StringCopy(&Var0, "FMMC_SEL_YES", 16);
	}
	else
	{
		StringCopy(&Var0, "FMMC_SEL_NO", 16);
	}
	__LIB_23__::func_494(5, &Var0, 0, 1, 0, 0, 0);
	iParam0->f_546++;
	__LIB_23__::func_494(6, "FMMC_RUG_HRTBT", 0, 1, 0, 0, 0);
	if (BitTest(Global_4718592.f_17, 18))
	{
		StringCopy(&Var0, "FMMC_SEL_YES", 16);
	}
	else
	{
		StringCopy(&Var0, "FMMC_SEL_NO", 16);
	}
	__LIB_23__::func_494(6, &Var0, 0, 1, 0, 0, 0);
	iParam0->f_546++;
}

void func_77(int* iParam0)//Position - 0x1B5023
{
	struct<2> Var0;
	iParam0->f_270 = 3;
	__LIB_23__::func_384(iParam0);
	__LIB_1__::func_767("FMMC_SCAM_TTL");
	__LIB_1__::func_766(1, 1, 0, 0, 0);
	__LIB_1__::func_765(1, 2, 1, 1, 1);
	__LIB_12__::func_593(0, 1, 0, 0, 0);
	if (__LIB_23__::func_399())
	{
		__LIB_23__::func_494(0, "FMMC_SCAM_EBE", 0, 1, 0, 0, 0);
		if (BitTest(Global_4718592.f_16, 12))
		{
			StringCopy(&Var0, "FMMC_SEL_ON", 16);
		}
		else
		{
			StringCopy(&Var0, "FMMC_SEL_OFF", 16);
		}
		__LIB_23__::func_494(0, &Var0, 0, 1, 0, 0, 0);
	}
	iParam0->f_546++;
	if (__LIB_23__::func_399())
	{
		__LIB_23__::func_494(1, "FMMC_SCAM_LCN", 0, 1, 0, 0, 0);
		if (BitTest(Global_4718592.f_16, 13))
		{
			StringCopy(&Var0, "FMMC_SEL_ON", 16);
		}
		else
		{
			StringCopy(&Var0, "FMMC_SEL_OFF", 16);
		}
		__LIB_23__::func_494(1, &Var0, 0, 1, 0, 0, 0);
	}
	iParam0->f_546++;
	if (__LIB_23__::func_399())
	{
		__LIB_23__::func_494(2, "FMMC_SCAM_SRC", 0, 1, 0, 0, 0);
		if (BitTest(Global_4718592.f_16, 14))
		{
			StringCopy(&Var0, "FMMC_SEL_ON", 16);
		}
		else
		{
			StringCopy(&Var0, "FMMC_SEL_OFF", 16);
		}
		__LIB_23__::func_494(2, &Var0, 0, 1, 0, 0, 0);
	}
	iParam0->f_546++;
	__LIB_23__::func_494(3, "FMMC_SCAM_APT", 0, 1, 0, 0, 0);
	if (BitTest(Global_4718592.f_16, 15))
	{
		StringCopy(&Var0, "FMMC_SEL_ON", 16);
	}
	else
	{
		StringCopy(&Var0, "FMMC_SEL_OFF", 16);
	}
	__LIB_23__::func_494(3, &Var0, 0, 1, 0, 0, 0);
	iParam0->f_546++;
	__LIB_23__::func_494(4, "FMMC_SCAM_HTP", 0, 1, 0, 0, 0);
	__LIB_23__::func_494(4, "NUMBER", 1, 1, 0, 0, 0);
	__LIB_23__::func_497(Global_4718592.f_110200, 3, 0);
	iParam0->f_546++;
	__LIB_23__::func_494(5, "FMMC_SCAM_HDP", 0, 1, 0, 0, 0);
	__LIB_23__::func_494(5, "NUMBER", 1, 1, 0, 0, 0);
	__LIB_23__::func_497(Global_4718592.f_110201, 3, 0);
	iParam0->f_546++;
	if (__LIB_23__::func_399())
	{
		__LIB_23__::func_494(6, "FMMC_SCAM_FSL", 0, 1, 0, 0, 0);
		if (BitTest(Global_4718592.f_23, 14))
		{
			StringCopy(&Var0, "FMMC_SEL_ON", 16);
		}
		else
		{
			StringCopy(&Var0, "FMMC_SEL_OFF", 16);
		}
		__LIB_23__::func_494(6, &Var0, 0, 1, 0, 0, 0);
	}
	iParam0->f_546++;
	__LIB_23__::func_494(7, "FMMC_SCAM_SEL", 0, 1, 0, 0, 0);
	__LIB_23__::func_494(7, "NUMBER", 1, 1, 0, 0, 0);
	__LIB_23__::func_517(iParam0->f_3115, 0);
	iParam0->f_546++;
	__LIB_23__::func_494(8, "FMMC_SCAM_CRE", 0, 1, 0, 0, 0);
	iParam0->f_546++;
	__LIB_23__::func_494(9, "FMMC_SCAM_DRE", 0, 1, 0, 0, 0);
	iParam0->f_546++;
	__LIB_23__::func_494(10, "FMMC_SCAM_DEL", 0, 1, 0, 0, 0);
	iParam0->f_546++;
	__LIB_23__::func_494(11, "FMMC_SCAM_SHM", 0, 1, 0, 0, 0);
	if (Global_4718592.f_110202 > -1)
	{
		__LIB_23__::func_494(11, "NUMBER", 1, 1, 0, 0, 0);
		__LIB_23__::func_517(Global_4718592.f_110202, 0);
	}
	else
	{
		__LIB_23__::func_494(11, "FMMC_SEL_OFF", 0, 1, 0, 0, 0);
	}
	iParam0->f_546++;
}

void func_78(int* iParam0)//Position - 0x1B532D
{
	struct<2> Var0;
	iParam0->f_270 = 378;
	__LIB_23__::func_384(iParam0);
	__LIB_1__::func_767("FMMC_PRON_TTL");
	__LIB_1__::func_766(1, 1, 0, 0, 0);
	__LIB_1__::func_765(1, 2, 1, 1, 1);
	__LIB_12__::func_593(0, 1, 0, 0, 0);
	__LIB_23__::func_494(0, "FMMC_PRON_MDE", 0, 1, 0, 0, 0);
	if (BitTest(Global_4718592.f_15, 11))
	{
		StringCopy(&Var0, "FMMC_SEL_ON", 16);
	}
	else
	{
		StringCopy(&Var0, "FMMC_SEL_OFF", 16);
	}
	__LIB_23__::func_494(0, &Var0, 0, 1, 0, 0, 0);
	iParam0->f_546++;
	__LIB_23__::func_494(1, "FMMC_PRON_VVD", 0, 1, 0, 0, 0);
	if (BitTest(Global_4718592.f_21, 8))
	{
		StringCopy(&Var0, "FMMC_SEL_ON", 16);
	}
	else
	{
		StringCopy(&Var0, "FMMC_SEL_OFF", 16);
	}
	__LIB_23__::func_494(1, &Var0, 0, 1, 0, 0, 0);
	iParam0->f_546++;
	__LIB_23__::func_494(2, "FMMC_PRON_LPV", 0, 1, 0, 0, 0);
	if (BitTest(Global_4718592.f_19, 4))
	{
		StringCopy(&Var0, "FMMC_SEL_ON", 16);
	}
	else
	{
		StringCopy(&Var0, "FMMC_SEL_OFF", 16);
	}
	__LIB_23__::func_494(2, &Var0, 0, 1, 0, 0, 0);
	iParam0->f_546++;
	__LIB_23__::func_494(3, "FMMC_PRON_BEB", 0, 1, 0, 0, 0);
	if (BitTest(Global_4718592.f_19, 10))
	{
		StringCopy(&Var0, "FMMC_SEL_ON", 16);
	}
	else
	{
		StringCopy(&Var0, "FMMC_SEL_OFF", 16);
	}
	__LIB_23__::func_494(3, &Var0, 0, 1, 0, 0, 0);
	iParam0->f_546++;
	__LIB_23__::func_494(4, "FMMC_PRON_DMT", 0, 1, 0, 0, 0);
	if (BitTest(Global_4718592.f_19, 12))
	{
		StringCopy(&Var0, "FMMC_SEL_ON", 16);
	}
	else
	{
		StringCopy(&Var0, "FMMC_SEL_OFF", 16);
	}
	__LIB_23__::func_494(4, &Var0, 0, 1, 0, 0, 0);
	iParam0->f_546++;
	__LIB_23__::func_494(5, "FMMC_PRON_DMTD", 0, BitTest(Global_4718592.f_19, 12), 0, 0, 0);
	if (BitTest(Global_4718592.f_19, 23))
	{
		StringCopy(&Var0, "FMMC_SEL_OFF", 16);
	}
	else
	{
		StringCopy(&Var0, "FMMC_SEL_ON", 16);
	}
	__LIB_23__::func_494(5, &Var0, 0, BitTest(Global_4718592.f_19, 12), 0, 0, 0);
	iParam0->f_546++;
	__LIB_23__::func_494(6, "FMMC_PRON_TSLD", 0, 1, 0, 0, 0);
	if (BitTest(Global_4718592.f_19, 24))
	{
		StringCopy(&Var0, "FMMC_SEL_ON", 16);
	}
	else
	{
		StringCopy(&Var0, "FMMC_SEL_OFF", 16);
	}
	__LIB_23__::func_494(6, &Var0, 0, 1, 0, 0, 0);
	iParam0->f_546++;
	__LIB_23__::func_494(7, "FMMC_PRON_NF", 0, 1, 0, 0, 0);
	if (BitTest(Global_4718592.f_20, 6))
	{
		StringCopy(&Var0, "FMMC_SEL_ON", 16);
	}
	else
	{
		StringCopy(&Var0, "FMMC_SEL_OFF", 16);
	}
	__LIB_23__::func_494(7, &Var0, 0, 1, 0, 0, 0);
	iParam0->f_546++;
}

void func_79(int* iParam0)//Position - 0x1B55AD
{
	struct<2> Var0;
	bool bVar1;
	iParam0->f_270 = 378;
	__LIB_23__::func_384(iParam0);
	__LIB_1__::func_767("FMMC_BMB_BMO");
	__LIB_1__::func_766(1, 1, 0, 0, 0);
	__LIB_1__::func_765(1, 2, 1, 1, 1);
	__LIB_12__::func_593(0, 1, 0, 0, 0);
	bVar1 = false;
	bVar1 = BitTest(Global_4718592.f_13, 24);
	__LIB_23__::func_494(0, "FMMC_BMB_EBM", 0, 1, 0, 0, 0);
	if (BitTest(Global_4718592.f_13, 24))
	{
		StringCopy(&Var0, "FMMC_SS_TT_1", 16);
	}
	else
	{
		StringCopy(&Var0, "FMMC_SS_TT_0", 16);
	}
	__LIB_23__::func_494(0, &Var0, 0, 1, 0, 0, 0);
	iParam0->f_546++;
	if ((!bVar1 && __LIB_22__::func_607(iParam0) > 0) && __LIB_22__::func_607(iParam0) <= 6)
	{
		__LIB_12__::func_593(0, 0, 0, 0, 0);
	}
	__LIB_23__::func_494(1, "FMMC_BMB_BPP", 0, bVar1, 0, 0, 0);
	__LIB_23__::func_494(1, "NUMBER", 1, bVar1, 0, 0, 0);
	__LIB_23__::func_517(Global_4718592.f_166170, 0);
	iParam0->f_546++;
	__LIB_23__::func_494(2, "FMMC_BMB_BBR", 0, bVar1, 0, 0, 0);
	__LIB_23__::func_494(2, "NUMBER", 1, bVar1, 0, 0, 0);
	__LIB_23__::func_517(Global_4718592.f_166171, 0);
	iParam0->f_546++;
	__LIB_23__::func_494(3, "FMMC_BMB_BTR", 0, bVar1, 0, 0, 0);
	__LIB_23__::func_494(3, "NUMBER", 1, bVar1, 0, 0, 0);
	__LIB_23__::func_517(Global_4718592.f_166172, 0);
	iParam0->f_546++;
	__LIB_23__::func_494(4, "FMMC_BMB_ESI", 0, bVar1, 0, 0, 0);
	__LIB_23__::func_494(4, "NUMBER", 1, bVar1, 0, 0, 0);
	__LIB_23__::func_517(Global_4718592.f_166173, 0);
	iParam0->f_546++;
	__LIB_23__::func_494(5, "FMMC_BMB_EDI", 0, bVar1, 0, 0, 0);
	__LIB_23__::func_494(5, "NUMBER", 1, bVar1, 0, 0, 0);
	__LIB_23__::func_497(Global_4718592.f_166174, 1, 0);
	iParam0->f_546++;
	__LIB_23__::func_494(6, "FMMC_BMB_EIO", 0, bVar1, 0, 0, 0);
	__LIB_23__::func_494(6, "NUMBER", 1, bVar1, 0, 0, 0);
	__LIB_23__::func_497(Global_4718592.f_166175, 1, 0);
	iParam0->f_546++;
}

void func_80(int* iParam0)//Position - 0x1B5EC7
{
	bool bVar0;
	iParam0->f_270 = 248;
	__LIB_23__::func_384(iParam0);
	__LIB_1__::func_767("FMMC_PED_PRIT");
	__LIB_1__::func_766(1, 1, 0, 0, 0);
	__LIB_1__::func_765(1, 2, 1, 1, 1);
	__LIB_12__::func_593(0, 1, 0, 0, 0);
	if (__LIB_23__::func_399())
	{
		bVar0 = false;
		while (bVar0 < 6)
		{
			__LIB_23__::func_494(bVar0, "FMMC_MD_HPP", 1, 1, 0, 0, 0);
			__LIB_23__::func_517(bVar0, 0);
			if (Global_4718592.f_110384[bVar0] == -1)
			{
				__LIB_23__::func_494(bVar0, "FMMC_SEL_OFF", 0, 1, 0, 0, 0);
			}
			else
			{
				__LIB_23__::func_494(bVar0, "NUMBER", 1, 1, 0, 0, 0);
				__LIB_23__::func_517(Global_4718592.f_110384[bVar0], 0);
			}
			iParam0->f_546++;
			bVar0++;
		}
	}
}

void func_81(int* iParam0)//Position - 0x1B61CA
{
	int iVar0;
	iParam0->f_270 = 279;
	__LIB_23__::func_384(iParam0);
	__LIB_1__::func_767("FMMC_THOS_T");
	__LIB_19__::func_185(iParam0->f_848);
	__LIB_1__::func_766(1, 1, 0, 0, 0);
	__LIB_1__::func_765(1, 2, 1, 1, 1);
	__LIB_12__::func_593(0, 1, 0, 0, 0);
	__LIB_23__::func_494(0, "FMMC_THOS_OS", 0, 1, 0, 0, 0);
	__LIB_23__::func_494(0, __LIB_19__::func_196(iParam0->f_2469), 0, 1, 0, 0, 0);
	iParam0->f_546 = 1;
	iVar0 = 0;
	while (iVar0 <= (75 - 1))
	{
		if (BitTest(Global_4718592.f_142788[iParam0->f_848 /*4*/][(iVar0 / 32)], (iVar0 % 32)))
		{
			__LIB_23__::func_494(iParam0->f_546, __LIB_19__::func_196(iVar0), 0, 1, 0, 0, 0);
			if (Global_4718592.f_142805[iParam0->f_848] == iVar0)
			{
				__LIB_23__::func_494(iParam0->f_546, "FMMC_TOUT_D", 0, 1, 0, 0, 0);
			}
			else
			{
				__LIB_23__::func_494(iParam0->f_546, "FMMC_TOUT_N", 0, 1, 0, 0, 0);
			}
			iParam0->f_546++;
		}
		iVar0++;
	}
}

void func_82(int* iParam0)//Position - 0x1B797F
{
	iParam0->f_270 = 3;
	__LIB_23__::func_384(iParam0);
	__LIB_1__::func_767("FMMC_CST_FALT");
	__LIB_1__::func_766(1, 1, 0, 0, 0);
	__LIB_1__::func_765(1, 2, 1, 1, 1);
	if ((__LIB_22__::func_607(iParam0) == 0 || __LIB_22__::func_607(iParam0) == 1) || __LIB_22__::func_607(iParam0) == 2)
	{
		__LIB_12__::func_593(0, 0, 0, 0, 0);
	}
	else
	{
		__LIB_12__::func_593(0, 1, 0, 0, 0);
	}
	__LIB_23__::func_494(0, "FMMC_PED_FAL", 0, 1, 0, 0, 0);
	iParam0->f_14[0] = 637;
	iParam0->f_546++;
	__LIB_23__::func_494(1, "FMMC_VEH_FAL", 0, 1, 0, 0, 0);
	iParam0->f_14[1] = 638;
	iParam0->f_546++;
	__LIB_23__::func_494(2, "FMMC_OBJ_FAL", 0, 1, 0, 0, 0);
	iParam0->f_14[2] = 639;
	iParam0->f_546++;
}

void func_83(int* iParam0)//Position - 0x1B7A59
{
	int iVar0;
	var uVar1[4];
	var uVar2[128];
	struct<2> Var3;
	StringCopy(&Var3, "FMMC_STI_MUL", 16);
	if (iParam0->f_271 == 237)
	{
		uVar1[0] = Global_4718592.f_658[iParam0->f_1098 /*22957*/].f_61;
		uVar1[1] = Global_4718592.f_658[iParam0->f_1098 /*22957*/].f_62;
		uVar1[2] = Global_4718592.f_658[iParam0->f_1098 /*22957*/].f_63;
		uVar1[3] = Global_4718592.f_658[iParam0->f_1098 /*22957*/].f_64;
		__LIB_19__::func_198(&(Global_4718592.f_658[iParam0->f_1098 /*22957*/].f_207), &uVar2);
	}
	else if (iParam0->f_271 == 238)
	{
		StringCopy(&Var3, "FMMC_MMI2_MUL", 16);
		uVar1[0] = Global_4718592.f_658[iParam0->f_1098 /*22957*/].f_339;
		uVar1[1] = Global_4718592.f_658[iParam0->f_1098 /*22957*/].f_340;
		uVar1[2] = Global_4718592.f_658[iParam0->f_1098 /*22957*/].f_341;
		uVar1[3] = Global_4718592.f_658[iParam0->f_1098 /*22957*/].f_342;
		__LIB_19__::func_198(&(Global_4718592.f_658[iParam0->f_1098 /*22957*/].f_485), &uVar2);
	}
	else if (iParam0->f_271 == 239)
	{
		StringCopy(&Var3, "FMMC_MMI_MUL", 16);
		uVar1[0] = Global_4718592.f_658[iParam0->f_1098 /*22957*/].f_616;
		uVar1[1] = Global_4718592.f_658[iParam0->f_1098 /*22957*/].f_617;
		uVar1[2] = Global_4718592.f_658[iParam0->f_1098 /*22957*/].f_618;
		uVar1[3] = Global_4718592.f_658[iParam0->f_1098 /*22957*/].f_619;
		__LIB_19__::func_198(&(Global_4718592.f_658[iParam0->f_1098 /*22957*/].f_762), &uVar2);
	}
	iParam0->f_270 = 307;
	__LIB_23__::func_384(iParam0);
	__LIB_1__::func_767(&Var3);
	__LIB_1__::func_766(1, 1, 0, 0, 0);
	__LIB_1__::func_765(1, 2, 1, 1, 1);
	__LIB_23__::func_494(0, "FMMC_ASSRL0", 0, 1, 0, 0, 0);
	__LIB_23__::func_494(0, "FMMC_NO" /* GXT: ~1~ */, 1, 1, 0, 0, 0);
	__LIB_23__::func_517(iParam0->f_1098, 0);
	iParam0->f_546++;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (BitTest(uVar1[(iVar0 / 32)], (iVar0 % 32)))
		{
			StringCopy(&Var3, "FMMC_STR_WP_", 16);
			StringIntConCat(&Var3, iVar0, 16);
			__LIB_23__::func_494(iParam0->f_546, &Var3, 0, 1, 0, 0, 0);
			__LIB_23__::func_494(iParam0->f_546, "NUMBER", 1, 1, 0, 0, 0);
			__LIB_23__::func_497(uVar2[iVar0], 1, 0);
			iParam0->f_546++;
		}
		iVar0++;
	}
	if (iParam0->f_271 == 237)
	{
		__LIB_19__::func_198(&uVar2, &(Global_4718592.f_658[iParam0->f_1098 /*22957*/].f_207));
		Global_4718592.f_658[iParam0->f_1098 /*22957*/].f_61 = uVar1[0];
		Global_4718592.f_658[iParam0->f_1098 /*22957*/].f_62 = uVar1[1];
		Global_4718592.f_658[iParam0->f_1098 /*22957*/].f_63 = uVar1[2];
	}
	else if (iParam0->f_271 == 238)
	{
		__LIB_19__::func_198(&uVar2, &(Global_4718592.f_658[iParam0->f_1098 /*22957*/].f_485));
		Global_4718592.f_658[iParam0->f_1098 /*22957*/].f_339 = uVar1[0];
		Global_4718592.f_658[iParam0->f_1098 /*22957*/].f_340 = uVar1[1];
		Global_4718592.f_658[iParam0->f_1098 /*22957*/].f_341 = uVar1[2];
	}
	else if (iParam0->f_271 == 239)
	{
		__LIB_19__::func_198(&uVar2, &(Global_4718592.f_658[iParam0->f_1098 /*22957*/].f_762));
		Global_4718592.f_658[iParam0->f_1098 /*22957*/].f_616 = uVar1[0];
		Global_4718592.f_658[iParam0->f_1098 /*22957*/].f_617 = uVar1[1];
		Global_4718592.f_658[iParam0->f_1098 /*22957*/].f_618 = uVar1[2];
	}
}

void func_84(int* iParam0)//Position - 0x1B9799
{
	struct<2> Var0;
	iParam0->f_270 = 3;
	__LIB_23__::func_384(iParam0);
	__LIB_1__::func_767("FMMC_T0_CPREWT");
	__LIB_1__::func_766(1, 1, 0, 0, 0);
	__LIB_1__::func_765(1, 2, 1, 1, 1);
	__LIB_12__::func_593(0, 1, 0, 0, 0);
	__LIB_23__::func_494(0, "FMMC_MD_D22", 0, 1, 0, 0, 0);
	__LIB_23__::func_494(0, "FMMC_XP" /* GXT: ~1~RP */, 1, 1, 0, 0, 0);
	__LIB_23__::func_517(Global_4718592.f_116985, 0);
	__LIB_23__::func_494(1, "FMMC_MD_D23", 0, 1, 0, 0, 0);
	StringCopy(&Var0, "FMMC_MD_CASH", 16);
	StringIntConCat(&Var0, Global_4718592.f_116986, 16);
	__LIB_23__::func_494(1, &Var0, 0, 1, 0, 0, 0);
	iParam0->f_546 = 2;
}

void func_85(int* iParam0)//Position - 0x1BA62E
{
	bool bVar0;
	float fVar1;
	struct<2> Var2;
	iParam0->f_270 = 2;
	__LIB_23__::func_384(iParam0);
	__LIB_1__::func_767("LTS_BND_T");
	__LIB_1__::func_766(1, 1, 0, 0, 0);
	__LIB_1__::func_765(1, 2, 1, 1, 1);
	if (Global_4718592.f_658[0 /*22957*/].f_2753[0 /*36*/].f_29 == 0)
	{
		if (__LIB_22__::func_607(iParam0) == 0 || (__LIB_10__::func_207() && __LIB_22__::func_607(iParam0) == 1))
		{
			__LIB_12__::func_593(0, 1, 0, 0, 0);
		}
		else
		{
			__LIB_12__::func_593(0, 0, 0, 0, 0);
		}
	}
	else if ((__LIB_22__::func_607(iParam0) < 2 || (__LIB_22__::func_607(iParam0) == 2 && !__LIB_0__::func_86(Global_4718592.f_658[0 /*22957*/].f_2753[0 /*36*/].f_16))) || (__LIB_22__::func_607(iParam0) == 3 && !__LIB_0__::func_86(Global_4718592.f_658[0 /*22957*/].f_2753[0 /*36*/].f_19)))
	{
		__LIB_12__::func_593(0, 1, 0, 0, 0);
	}
	else
	{
		__LIB_12__::func_593(0, 0, 0, 0, 0);
	}
	iParam0->f_546 = 0;
	StringCopy(&Var2, "FMMC_OB_M0_0", 16);
	if (Global_4718592.f_658[0 /*22957*/].f_2753[0 /*36*/].f_29 == 0)
	{
		__LIB_23__::func_494(iParam0->f_546, "LTS_PA_R", 0, 1, 0, 0, 0);
		fVar1 = Global_4718592.f_658[0 /*22957*/].f_2753[0 /*36*/].f_22;
		__LIB_23__::func_494(iParam0->f_546, &Var2, 1, 1, 0, 0, 0);
		__LIB_23__::func_517(SYSTEM::FLOOR(fVar1), 0);
	}
	else if (Global_4718592.f_658[0 /*22957*/].f_2753[0 /*36*/].f_29 == 1)
	{
		__LIB_23__::func_494(iParam0->f_546, "LTS_PA_W", 0, 1, 0, 0, 0);
		fVar1 = Global_4718592.f_658[0 /*22957*/].f_2753[0 /*36*/].f_23;
		__LIB_23__::func_494(iParam0->f_546, &Var2, 1, 1, 0, 0, 0);
		__LIB_23__::func_517(SYSTEM::FLOOR(fVar1), 0);
	}
	iParam0->f_546++;
	if (((Global_4718592.f_658[0 /*22957*/].f_2753[0 /*36*/].f_16 == 0f && Global_4718592.f_658[0 /*22957*/].f_2753[0 /*36*/].f_16.f_1 == 0f) && Global_4718592.f_658[0 /*22957*/].f_2753[0 /*36*/].f_19 == 0f) && Global_4718592.f_658[0 /*22957*/].f_2753[0 /*36*/].f_19.f_1 == 0f)
	{
		bVar0 = false;
	}
	if (Global_4718592.f_658[0 /*22957*/].f_2753[0 /*36*/].f_29 == 1)
	{
		__LIB_23__::func_494(iParam0->f_546, "FMMC_BUND_5", 0, 1, 0, 0, 0);
		StringCopy(&Var2, "FMMC_BUND_10", 16);
		if (Global_4718592.f_658[0 /*22957*/].f_2753[0 /*36*/].f_29 == 1)
		{
			fVar1 = Global_4718592.f_658[0 /*22957*/].f_2753[0 /*36*/].f_23;
			if (Global_4718592.f_658[0 /*22957*/].f_2753[0 /*36*/].f_16.f_2 > Global_4718592.f_658[0 /*22957*/].f_2753[0 /*36*/].f_19.f_2)
			{
				fVar1 = Global_4718592.f_658[0 /*22957*/].f_2753[0 /*36*/].f_16.f_2;
			}
			else
			{
				fVar1 = Global_4718592.f_658[0 /*22957*/].f_2753[0 /*36*/].f_19.f_2;
			}
			StringCopy(&Var2, "FMMC_OB_M0_0", 16);
			__LIB_23__::func_494(iParam0->f_546, &Var2, 1, bVar0, 0, 0, 0);
			__LIB_23__::func_517(SYSTEM::FLOOR(fVar1), 0);
		}
		else
		{
			__LIB_23__::func_494(iParam0->f_546, &Var2, 0, 0, 0, 0, 0);
		}
		iParam0->f_546++;
		bVar0 = !__LIB_0__::func_86(Global_4718592.f_658[0 /*22957*/].f_2753[0 /*36*/].f_19);
		__LIB_23__::func_494(iParam0->f_546, "FMMC_BUND_6", 0, 1, 0, 0, 0);
		StringCopy(&Var2, "FMMC_BUND_10", 16);
		if (Global_4718592.f_658[0 /*22957*/].f_2753[0 /*36*/].f_29 == 1)
		{
			fVar1 = Global_4718592.f_658[0 /*22957*/].f_2753[0 /*36*/].f_23;
			if (Global_4718592.f_658[0 /*22957*/].f_2753[0 /*36*/].f_16.f_2 < Global_4718592.f_658[0 /*22957*/].f_2753[0 /*36*/].f_19.f_2)
			{
				fVar1 = Global_4718592.f_658[0 /*22957*/].f_2753[0 /*36*/].f_16.f_2;
			}
			else
			{
				fVar1 = Global_4718592.f_658[0 /*22957*/].f_2753[0 /*36*/].f_19.f_2;
			}
			StringCopy(&Var2, "FMMC_OB_M0_0", 16);
			__LIB_23__::func_494(iParam0->f_546, &Var2, 1, bVar0, 0, 0, 0);
			__LIB_23__::func_517(SYSTEM::FLOOR(fVar1), 0);
		}
		else
		{
			__LIB_23__::func_494(iParam0->f_546, &Var2, 0, 0, 0, 0, 0);
		}
		iParam0->f_546++;
	}
}

void func_86(int* iParam0, bool bParam1, bool bParam2, int iParam3, int iParam4)//Position - 0x1BB53A
{
	iParam0->f_142[*iParam4] = iParam3;
	__LIB_23__::func_494(*iParam4, bParam1, 0, bParam2, 0, 0, 0);
	*iParam4++;
}

void func_87(int* iParam0)//Position - 0x1BB564
{
	bool bVar0;
	struct<2> Var1;
	__LIB_23__::func_384(iParam0);
	__LIB_1__::func_767("FMMC_RSD_RHT");
	__LIB_12__::func_593(0, 0, 0, 0, 0);
	__LIB_1__::func_766(1, 1, 0, 0, 0);
	__LIB_1__::func_765(1, 2, 1, 1, 1);
	iParam0->f_270 = 3;
	bVar0 = false;
	bVar0 = false;
	while (bVar0 <= 2)
	{
		StringCopy(&Var1, "FMMC_RHT_TXT_", 16);
		StringIntConCat(&Var1, bVar0, 16);
		__LIB_23__::func_494(bVar0, &Var1, 0, 1, 0, 0, 0);
		__LIB_23__::func_494(bVar0, &(Global_4718592.f_94900[bVar0 /*6*/]), 0, 1, 0, 0, 0);
		__LIB_12__::func_593(0, 0, 0, 0, 0);
		iParam0->f_546++;
		bVar0++;
	}
}

void func_88(int* iParam0)//Position - 0x1BB73B
{
	struct<2> Var0;
	__LIB_23__::func_384(iParam0);
	__LIB_1__::func_767("RC_DO_RWO");
	__LIB_12__::func_593(0, 1, 0, 0, 0);
	__LIB_1__::func_766(1, 1, 0, 0, 0);
	__LIB_1__::func_765(1, 2, 1, 1, 1);
	iParam0->f_270 = 790;
	iParam0->f_546 = 0;
	__LIB_23__::func_494(0, "FMMC_T0_LKW", 0, 1, 0, 0, 0);
	if (BitTest(Global_4718592.f_11, 18))
	{
		StringCopy(&Var0, "FMMC_LKW_2", 16);
	}
	else if (BitTest(Global_4718592.f_11, 19))
	{
		StringCopy(&Var0, "FMMC_LKW_1", 16);
	}
	else
	{
		StringCopy(&Var0, "FMMC_LKW_0", 16);
	}
	__LIB_23__::func_494(0, &Var0, 0, 1, 0, 0, 0);
	iParam0->f_546++;
	__LIB_23__::func_494(1, "FMMC_T0_M5B", 0, 1, 0, 0, 0);
	__LIB_23__::func_494(1, __LIB_4__::func_960(__LIB_21__::func_943(iParam0->f_2686), 0), 0, 1, 0, 0, 0);
	iParam0->f_546++;
}

void func_89(int* iParam0)//Position - 0x1BCBBB
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	__LIB_23__::func_384(iParam0);
	__LIB_1__::func_767("FMMC_RDC_CTRO");
	__LIB_12__::func_593(0, 0, 0, 0, 0);
	__LIB_1__::func_766(1, 1, 0, 0, 0);
	__LIB_1__::func_765(1, 2, 1, 1, 1);
	iParam0->f_549 = 28;
	iParam0->f_270 = 3;
	iParam0->f_546 = 0;
	bVar0 = BitTest(Global_4718592.f_28, 18);
	__LIB_23__::func_494(0, "FMMC_TGT_ISTR", 0, 1, 0, 0, 0);
	__LIB_23__::func_494(0, "STRING", 1, 1, 0, 0, 0);
	if (bVar0)
	{
		__LIB_23__::func_495("Yes", 0, 0, 0);
	}
	else
	{
		__LIB_23__::func_495("No", 0, 0, 0);
	}
	iParam0->f_546++;
	__LIB_12__::func_593(0, 1, 0, 0, 0);
	__LIB_23__::func_494(1, "FMMC_TGT_TRSP", 0, bVar0, 0, 0, 0);
	__LIB_23__::func_494(1, "STRING", 1, bVar0, 0, 0, 0);
	if (BitTest(Global_4718592.f_28, 24) && bVar0)
	{
		__LIB_23__::func_495("Yes", 0, 0, 0);
	}
	else
	{
		__LIB_23__::func_495("No", 0, 0, 0);
		MISC::CLEAR_BIT(&(Global_4718592.f_28), 24);
	}
	iParam0->f_546++;
	__LIB_12__::func_593(0, 1, 0, 0, 0);
	__LIB_23__::func_494(2, "FMMC_TGT_DDV", 0, bVar0, 0, 0, 0);
	__LIB_23__::func_494(2, "STRING", 1, bVar0, 0, 0, 0);
	if (BitTest(Global_4718592.f_28, 19) && bVar0)
	{
		__LIB_23__::func_495("Yes", 0, 0, 0);
	}
	else
	{
		__LIB_23__::func_495("No", 0, 0, 0);
		MISC::CLEAR_BIT(&(Global_4718592.f_28), 19);
	}
	iParam0->f_546++;
	__LIB_12__::func_593(0, 1, 0, 0, 0);
	__LIB_23__::func_494(3, "FMMC_TGT_HBV", 0, bVar0, 0, 0, 0);
	__LIB_23__::func_494(3, "STRING", 1, bVar0, 0, 0, 0);
	if (BitTest(Global_4718592.f_21, 21))
	{
		__LIB_23__::func_495("Yes", 0, 0, 0);
	}
	else
	{
		__LIB_23__::func_495("No", 0, 0, 0);
	}
	iParam0->f_546++;
	__LIB_12__::func_593(0, 1, 0, 0, 0);
	iVar1 = 0;
	while (iVar1 < 10)
	{
		StringCopy(&Var2, "FMMC_TGT_BPF_", 16);
		StringIntConCat(&Var2, iVar1 + 1, 16);
		__LIB_23__::func_494((4 + iVar1), &Var2, 0, 1, 0, 0, 0);
		__LIB_23__::func_494((4 + iVar1), "NUMBER", 1, 1, 0, 0, 0);
		__LIB_23__::func_517(Global_4718592.f_169848[iVar1], 0);
		iParam0->f_546++;
		iVar1++;
	}
	iVar3 = 14;
	iVar1 = 0;
	while (iVar1 < 3)
	{
		StringCopy(&Var2, "FMMC_TGT_BPC_", 16);
		StringIntConCat(&Var2, iVar1 + 1, 16);
		__LIB_23__::func_494((iVar3 + iVar1), &Var2, 0, 1, 0, 0, 0);
		__LIB_23__::func_494((iVar3 + iVar1), "NUMBER", 1, 1, 0, 0, 0);
		__LIB_23__::func_517(Global_4718592.f_169844[iVar1], 0);
		iParam0->f_546++;
		iVar1++;
	}
	iVar3 = 17;
	iVar5 = 0;
	while (iVar5 < 4)
	{
		iVar4 = 0;
		while (iVar4 < 3)
		{
			StringCopy(&Var2, "FMMC_TGT_TSP_", 16);
			StringIntConCat(&Var2, iVar5, 16);
			StringIntConCat(&Var2, iVar4, 16);
			__LIB_23__::func_494((iVar3 + iVar4), &Var2, 0, 1, 0, 0, 0);
			__LIB_23__::func_494((iVar3 + iVar4), "NUMBER", 1, 1, 0, 0, 0);
			__LIB_23__::func_517(Global_4718592.f_169859[iVar5 /*4*/][iVar4], 0);
			iParam0->f_546++;
			iVar4++;
		}
		iVar3 += 3;
		iVar5++;
	}
}

void func_90(int* iParam0)//Position - 0x1BDE92
{
	__LIB_23__::func_384(iParam0);
	__LIB_12__::func_593(0, 1, 0, 0, 0);
	__LIB_1__::func_767("FMMC_RANDOT");
	__LIB_1__::func_766(1, 1, 0, 0, 0);
	__LIB_1__::func_765(1, 2, 1, 1, 1);
	__LIB_23__::func_494(0, "FMMC_RANDR", 0, 1, 0, 0, 0);
	__LIB_23__::func_494(0, "FMMC_RANDM", 1, 1, 0, 0, 0);
	__LIB_23__::func_517(SYSTEM::CEIL(iParam0->f_2853), 0);
	__LIB_23__::func_494(1, "FMMC_RANDS", 0, 1, 0, 0, 0);
	if (!iParam0->f_2853.f_1)
	{
		__LIB_23__::func_494(1, iParam0->f_563[20], 0, 1, 0, 0, 0);
	}
	else
	{
		__LIB_23__::func_494(1, __LIB_22__::func_757(0), 0, 0, 0, 0, 0);
	}
	__LIB_23__::func_494(2, "FMMC_RANDW", 0, 1, 0, 0, 0);
	if (!iParam0->f_2853.f_3)
	{
		__LIB_23__::func_494(2, iParam0->f_563[21], 0, 1, 0, 0, 0);
	}
	else
	{
		__LIB_23__::func_494(2, __LIB_22__::func_757(0), 0, 0, 0, 0, 0);
	}
	iParam0->f_546 = 3;
	iParam0->f_270 = 2;
	iParam0->f_142[0] = 11;
	iParam0->f_142[1] = 11;
	iParam0->f_142[2] = 11;
}

void func_91(int* iParam0)//Position - 0x1C1DA1
{
	__LIB_23__::func_384(iParam0);
	iParam0->f_270 = 14;
	if (iParam0->f_545 == 2)
	{
		if (__LIB_22__::func_941())
		{
			iParam0->f_546 = 3;
		}
		else
		{
			iParam0->f_546 = 2;
		}
	}
	else if (iParam0->f_545 == 1)
	{
		if (__LIB_18__::func_654())
		{
			iParam0->f_546 = 1;
		}
		else
		{
			iParam0->f_546 = 2;
		}
	}
	else
	{
		iParam0->f_546 = 1;
	}
	__LIB_1__::func_767("FMMCC_TTITLE" /* GXT: ~s~TEST */);
	__LIB_1__::func_766(1, 0, 0, 0, 0);
	if (iParam0->f_545 == 2)
	{
		__LIB_23__::func_494(0, "FMMCC_TEST6", 0, 1, 0, 0, 0);
		__LIB_23__::func_494(1, "FMMCC_TEST2", 0, 1, 0, 0, 0);
		if (__LIB_22__::func_941())
		{
			__LIB_23__::func_494(2, "FMMC_MENU_REC", 0, 1, 0, 0, 0);
			iParam0->f_14[2] = 98;
		}
		iParam0->f_142[0] = 0;
	}
	else if (iParam0->f_545 == 1)
	{
		__LIB_1__::func_766(1, 1, 0, 0, 0);
		__LIB_1__::func_765(1, 2, 1, 1, 1);
		if (__LIB_22__::func_607(iParam0) == 0)
		{
			__LIB_12__::func_593(0, 1, 0, 0, 0);
		}
		else
		{
			__LIB_12__::func_593(0, 0, 0, 0, 0);
		}
		if (__LIB_18__::func_654())
		{
			__LIB_23__::func_494(0, "FMMCC_TEST2", 0, 1, 0, 0, 0);
			iParam0->f_142[0] = 0;
		}
		else
		{
			__LIB_23__::func_494(0, "FMMCC_TEST7", 0, 1, 0, 0, 0);
			if (iParam0->f_740 == 0)
			{
				__LIB_23__::func_494(0, "FMMC_V_L_0", 0, 1, 0, 0, 0);
			}
			else
			{
				__LIB_23__::func_494(0, "FMMC_V_L_1", 0, 1, 0, 0, 0);
			}
			__LIB_23__::func_494(1, "FMMCC_TEST2", 0, 1, 0, 0, 0);
			iParam0->f_142[1] = 0;
		}
	}
	else
	{
		__LIB_23__::func_494(0, "FMMCC_TEST2", 0, 1, 0, 0, 0);
		iParam0->f_142[0] = 0;
	}
}

void func_92(int* iParam0)//Position - 0x1C2D0A
{
	__LIB_23__::func_384(iParam0);
	iParam0->f_546 = 2;
	__LIB_22__::func_525(iParam0, 0);
	iParam0->f_270 = 0;
	__LIB_1__::func_765(1, 2, 1, 1, 1);
	__LIB_12__::func_593(0, 0, 0, 0, 0);
	__LIB_1__::func_767("FMMCC_RTITLE");
	__LIB_1__::func_766(1, 1, 0, 0, 0);
	__LIB_23__::func_494(0, "FMMC_GTCROPT", 0, 1, 0, 0, 0);
	__LIB_12__::func_593(0, 0, 0, 0, 0);
	iParam0->f_14[0] = 0;
	__LIB_23__::func_494(1, "FMMC_GTPATH", 0, 1, 0, 0, 0);
	__LIB_12__::func_593(0, 0, 0, 0, 0);
	iParam0->f_14[1] = 98;
}

void func_93(int* iParam0)//Position - 0x1C2D90
{
	struct<2> Var0;
	iParam0->f_270 = 0;
	__LIB_23__::func_384(iParam0);
	__LIB_1__::func_767("FMMC_MENU_13T");
	__LIB_1__::func_766(1, 1, 0, 0, 0);
	__LIB_1__::func_765(1, 2, 1, 1, 1);
	__LIB_12__::func_593(0, 1, 0, 0, 0);
	if (__LIB_22__::func_607(iParam0) == 1 && iParam0->f_861 != 1)
	{
		__LIB_12__::func_593(0, 0, 0, 0, 0);
	}
	__LIB_23__::func_494(0, "FMMC_RADIOM0", 0, 1, 0, 0, 0);
	StringCopy(&Var0, "FMMC_RAD_M_", 16);
	StringIntConCat(&Var0, iParam0->f_861, 16);
	__LIB_23__::func_494(0, &Var0, 0, 1, 0, 0, 0);
	__LIB_23__::func_494(1, "FMMC_RADIOM1", 0, iParam0->f_861 == 1, 0, 0, 0);
	__LIB_23__::func_494(1, __LIB_22__::func_966(0), 0, iParam0->f_861 == 1, 0, 0, 0);
	iParam0->f_546 = 2;
}

void func_94(int* iParam0)//Position - 0x1C3007
{
	bool bVar0;
	__LIB_23__::func_384(iParam0);
	__LIB_1__::func_767("FMMC_STRL_OP_T");
	__LIB_1__::func_766(1, 1, 0, 0, 0);
	__LIB_1__::func_765(1, 2, 1, 1, 1);
	__LIB_12__::func_593(0, 0, 0, 0, 0);
	Global_23149 = 0.24f;
	iParam0->f_270 = 3;
	iParam0->f_546 = 30;
	bVar0 = false;
	while (bVar0 <= 29)
	{
		__LIB_23__::func_494(bVar0, "FMMC_STRL_S", 1, 1, 0, 0, 0);
		__LIB_23__::func_517(bVar0, 0);
		__LIB_23__::func_494(bVar0, "STRING", 1, 1, 0, 0, 0);
		__LIB_23__::func_495(&(Global_4718592.f_80[bVar0 /*16*/]), 0, 0, 0);
		bVar0++;
	}
}

void func_95(int* iParam0)//Position - 0x1C34D6
{
	struct<2> Var0;
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("fm_mission_creator")) > 0)
	{
		if (__LIB_18__::func_15())
		{
			iParam0->f_270 = 221;
		}
		else if (__LIB_16__::func_682())
		{
			iParam0->f_270 = 223;
		}
		else
		{
			iParam0->f_270 = 3;
		}
	}
	else if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("fm_deathmatch_creator")) > 0)
	{
		iParam0->f_270 = 60;
	}
	else if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("fm_race_creator")) > 0)
	{
		iParam0->f_270 = 790;
	}
	else if (__LIB_1__::func_308())
	{
		iParam0->f_270 = 484;
	}
	__LIB_23__::func_384(iParam0);
	__LIB_1__::func_767("TLMC_ROAMSPEC");
	__LIB_1__::func_766(1, 1, 0, 0, 0);
	__LIB_1__::func_765(1, 2, 1, 1, 1);
	__LIB_12__::func_593(0, 1, 0, 0, 0);
	Global_23149 = 0.24f;
	__LIB_23__::func_494(0, "FMMC_T0_FTOD", 0, 1, 0, 0, 0);
	if (BitTest(Global_4718592.f_12, 15))
	{
		StringCopy(&Var0, "FMMC_SS_TT_1", 16);
	}
	else
	{
		StringCopy(&Var0, "FMMC_SS_TT_0", 16);
	}
	__LIB_23__::func_494(0, &Var0, 0, 1, 0, 0, 0);
	iParam0->f_546++;
	__LIB_23__::func_494(1, "FMMC_T0_TODH", 0, BitTest(Global_4718592.f_12, 15), 0, 0, 0);
	__LIB_23__::func_494(1, "NUMBER", 1, BitTest(Global_4718592.f_12, 15), 0, 0, 0);
	__LIB_23__::func_517(Global_4718592.f_165269, 0);
	iParam0->f_546++;
	__LIB_23__::func_494(2, "FMMC_T0_TODM", 0, BitTest(Global_4718592.f_12, 15), 0, 0, 0);
	__LIB_23__::func_494(2, "NUMBER", 1, BitTest(Global_4718592.f_12, 15), 0, 0, 0);
	__LIB_23__::func_517(Global_4718592.f_165270, 0);
	iParam0->f_546++;
}

void func_96(int* iParam0)//Position - 0x1C3B96
{
	struct<8> Var0;
	struct<8> Var1;
	__LIB_23__::func_384(iParam0);
	if (BitTest(iParam0->f_3200, 3))
	{
		iParam0->f_270 = 14;
	}
	else if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()) && ENTITY::IS_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID()))
	{
		iParam0->f_270 = 788;
	}
	else
	{
		iParam0->f_270 = 3;
	}
	__LIB_1__::func_765(1, 2, 1, 1, 1);
	if ((((__LIB_22__::func_607(iParam0) == 1 || __LIB_22__::func_607(iParam0) == 5) || __LIB_22__::func_607(iParam0) == 4) && BitTest(iParam0->f_3200, 0)) || (__LIB_22__::func_607(iParam0) == 3 && !BitTest(Global_4718592.f_27, 12)))
	{
		__LIB_12__::func_593(0, 1, 0, 0, 0);
	}
	else
	{
		iParam0->f_3201 = (iParam0->f_3203 - 1);
		__LIB_12__::func_593(0, 0, 0, 0, 0);
	}
	__LIB_1__::func_767("FMMC_MENU_RECT");
	__LIB_1__::func_766(1, 1, 0, 0, 0);
	if (ENTITY::IS_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if (!BitTest(Global_4718592.f_27, 12))
		{
			__LIB_23__::func_494(0, "FMMC_REC_ENBLE", 0, 1, 0, 0, 0);
		}
		else
		{
			__LIB_23__::func_494(0, "FMMC_REC_DSBLE", 0, 1, 0, 0, 0);
		}
		iParam0->f_142[0] = 90;
	}
	else
	{
		__LIB_23__::func_494(0, "FMMC_REC_SWITCH", 0, 1, 0, 0, 0);
		iParam0->f_142[0] = 88;
	}
	__LIB_23__::func_494(1, "FMMC_REC_CLPTH", 0, BitTest(iParam0->f_3200, 0), 0, 0, 0);
	if (__LIB_22__::func_607(iParam0) == 1)
	{
		__LIB_23__::func_494(1, "MC_REC_CLPTH_N" /* GXT: Path ~1~ */, 1, BitTest(iParam0->f_3200, 0), 0, 0, 0);
		__LIB_23__::func_517((iParam0->f_3201 + __LIB_0__::func_138(__LIB_10__::func_207(), 0, 1)), 0);
	}
	iParam0->f_142[1] = 92;
	__LIB_23__::func_494(2, "FMMC_REC_CLEAR", 0, BitTest(iParam0->f_3200, 0), 0, 0, 0);
	iParam0->f_142[2] = 89;
	__LIB_23__::func_494(3, "FMMC_REC_TYPE", 0, !BitTest(Global_4718592.f_27, 12), 0, 0, 0);
	StringCopy(&Var0, "FMMC_REC_T", 64);
	StringIntConCat(&Var0, iParam0->f_3205, 64);
	__LIB_23__::func_494(3, &Var0, 0, !BitTest(Global_4718592.f_27, 12), 0, 0, 0);
	__LIB_23__::func_494(4, "FMMC_REC_HIDE", 0, BitTest(iParam0->f_3200, 0), 0, 0, 0);
	StringCopy(&Var1, "FMMC_REC_H", 64);
	StringIntConCat(&Var1, iParam0->f_3204, 64);
	__LIB_23__::func_494(4, &Var1, 0, BitTest(iParam0->f_3200, 0), 0, 0, 0);
	__LIB_23__::func_494(5, "FMMC_REC_CYCLE", 0, BitTest(iParam0->f_3200, 0), 0, 0, 0);
	__LIB_23__::func_494(5, "FMMC_CYC", 2, BitTest(iParam0->f_3200, 0), 0, 0, 0);
	__LIB_23__::func_517((iParam0->f_3202 + __LIB_0__::func_138(__LIB_10__::func_207(), 0, 1)), 0);
	__LIB_23__::func_517(iParam0->f_3203, 0);
	iParam0->f_546 = 6;
}

void func_97(int* iParam0)//Position - 0x1CA7C5
{
	__LIB_23__::func_384(iParam0);
	__LIB_1__::func_767("FMMCMENU_TTT");
	__LIB_1__::func_766(1, 4, 0, 0, 0);
	__LIB_1__::func_765(1, 2, 1, 1, 1);
	iParam0->f_546 = 0;
	iParam0->f_270 = 0;
	__LIB_23__::func_494(iParam0->f_546, "RMC_ST_PRI", 0, 1, 0, 0, 0);
	if (BitTest(iParam0->f_743, 8))
	{
		__LIB_23__::func_496(iParam0->f_546, 28, 0);
	}
	iParam0->f_142[iParam0->f_546] = 0;
	iParam0->f_546++;
	__LIB_23__::func_494(iParam0->f_546, "RMC_ST_SEC", 0, 1, 0, 0, 0);
	if (BitTest(iParam0->f_743, 23))
	{
		__LIB_23__::func_496(iParam0->f_546, 28, 0);
	}
	iParam0->f_142[iParam0->f_546] = 1;
	iParam0->f_546++;
}

void func_98(int* iParam0)//Position - 0x1CDACF
{
	__LIB_23__::func_384(iParam0);
	__LIB_1__::func_767("FMMC_CSEO_T");
	__LIB_1__::func_766(1, 1, 0, 0, 0);
	__LIB_1__::func_765(1, 2, 1, 1, 1);
	__LIB_12__::func_593(0, 1, 0, 0, 0);
	iParam0->f_270 = 611;
	if (__LIB_22__::func_607(iParam0) == 0)
	{
		__LIB_12__::func_593(0, 0, 0, 0, 0);
	}
	iParam0->f_546 = 1;
	__LIB_23__::func_494(0, "FMMC_CSEO_HND", 0, 1, 0, 0, 0);
	__LIB_23__::func_494(0, "STRING", 1, 1, 0, 0, 0);
	__LIB_23__::func_495(&(Global_4718592.f_163077.f_148[iParam0->f_2477 /*10*/].f_2), 0, 0, 0);
}

void func_99(int* iParam0)//Position - 0x1CDB5A
{
	iParam0->f_270 = 562;
	__LIB_23__::func_384(iParam0);
	__LIB_1__::func_767("FMMC_CSEO_T");
	__LIB_1__::func_766(1, 1, 0, 0, 0);
	__LIB_1__::func_765(1, 2, 1, 1, 1);
	__LIB_12__::func_593(0, 1, 0, 0, 0);
	if (__LIB_22__::func_607(iParam0) == 0)
	{
		__LIB_12__::func_593(0, 0, 0, 0, 0);
	}
	iParam0->f_546 = 1;
	__LIB_23__::func_494(0, "FMMC_CSEO_HND", 0, 1, 0, 0, 0);
	__LIB_23__::func_494(0, "STRING", 1, 1, 0, 0, 0);
	__LIB_23__::func_495(&(Global_4718592.f_161915.f_148[iParam0->f_2477 /*10*/].f_2), 0, 0, 0);
}

void func_100(int* iParam0)//Position - 0x1CDBE5
{
	int iVar0;
	__LIB_23__::func_384(iParam0);
	__LIB_1__::func_767("MC_HCHAND_T");
	__LIB_1__::func_766(1, 1, 0, 0, 0);
	__LIB_1__::func_765(1, 2, 1, 1, 1);
	__LIB_12__::func_593(0, 0, 0, 0, 0);
	iParam0->f_546 = 5;
	iParam0->f_270 = 561;
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		__LIB_23__::func_494((0 + iVar0), "MC_HCHAND_HTH", 1, 1, 0, 0, 0);
		__LIB_23__::func_517(iVar0, 0);
		__LIB_23__::func_494((0 + iVar0), "STRING", 1, 1, 0, 0, 0);
		__LIB_23__::func_495(&(Global_4718592.f_161915.f_449[iVar0 /*8*/]), 0, 0, 0);
		__LIB_23__::func_420(iParam0, (0 + iVar0), "MCH_HCHAND_HTH", 0);
		iVar0++;
	}
}

void func_101(int* iParam0)//Position - 0x1CDC88
{
	int iVar0;
	struct<3> Var1;
	iParam0->f_270 = 561;
	__LIB_23__::func_384(iParam0);
	__LIB_1__::func_767("FMMC_ECSE_T");
	__LIB_1__::func_766(1, 1, 0, 0, 0);
	__LIB_1__::func_765(1, 2, 1, 1, 1);
	__LIB_12__::func_593(0, 0, 0, 0, 0);
	iParam0->f_546 = 0;
	iVar0 = 0;
	while (iVar0 <= 29)
	{
		if (Global_4718592.f_161915.f_148[iVar0 /*10*/].f_1 != -1)
		{
			if (Global_4718592.f_161915.f_148[iVar0 /*10*/] == 0)
			{
				StringCopy(&Var1, "FMMC_CSA_ENTPE", 24);
			}
			else if (Global_4718592.f_161915.f_148[iVar0 /*10*/] == 3)
			{
				StringCopy(&Var1, "FMMC_CSA_ENTOB", 24);
			}
			else if (Global_4718592.f_161915.f_148[iVar0 /*10*/] == 4)
			{
				StringCopy(&Var1, "FMMC_CSA_ENTPR", 24);
			}
			else if (Global_4718592.f_161915.f_148[iVar0 /*10*/] == 5)
			{
				StringCopy(&Var1, "FMMC_CSA_ENTDY", 24);
			}
			else
			{
				StringCopy(&Var1, "FMMC_CSA_ENTVE", 24);
			}
			__LIB_23__::func_494(iParam0->f_546, &Var1, 1, 1, 0, 0, 0);
			__LIB_23__::func_517(Global_4718592.f_161915.f_148[iVar0 /*10*/].f_1, 0);
			__LIB_23__::func_494(iParam0->f_546, "STRING", 1, 1, 0, 0, 0);
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_4718592.f_161915.f_148[iVar0 /*10*/].f_2)))
			{
				__LIB_23__::func_495(&(Global_4718592.f_161915.f_148[iVar0 /*10*/].f_2), 0, 0, 0);
			}
			else
			{
				__LIB_23__::func_495("No Handle", 0, 0, 0);
			}
			iParam0->f_546++;
		}
		iVar0++;
	}
	if (iParam0->f_546 == 0)
	{
		__LIB_23__::func_494(0, "", 0, 1, 0, 0, 0);
		iParam0->f_546 = 1;
	}
}

void func_102(int* iParam0)//Position - 0x1D070F
{
	__LIB_23__::func_384(iParam0);
	__LIB_1__::func_767("FMC_T_LLS");
	__LIB_12__::func_593(0, 1, 0, 0, 0);
	__LIB_1__::func_766(1, 1, 0, 0, 0);
	__LIB_1__::func_765(1, 2, 1, 1, 1);
	iParam0->f_270 = 0;
	iParam0->f_546 = 2;
	__LIB_23__::func_494(0, "FMC_LLS_LL", 0, 1, 0, 0, 0);
	iParam0->f_142[0] = 113;
	if (!__LIB_22__::func_808() || !MISC::IS_STRING_NULL_OR_EMPTY(&(Global_4718592.f_116531)))
	{
		__LIB_23__::func_494(1, "FMC_LLS_LS", 0, !MISC::IS_STRING_NULL_OR_EMPTY(&(Global_4718592.f_116531)), 0, 0, 0);
		iParam0->f_283[1] = "H_LLS_LS";
		iParam0->f_142[1] = 112;
	}
}

void func_103(int* iParam0)//Position - 0x1D10F1
{
	__LIB_23__::func_384(iParam0);
	__LIB_1__::func_767("FMMC_ASSRL_HOT");
	__LIB_1__::func_766(1, 1, 0, 0, 0);
	__LIB_1__::func_765(1, 2, 1, 1, 1);
	iParam0->f_270 = 173;
	iParam0->f_546 = 4;
	__LIB_23__::func_494(0, "FMMC_OVR_XVAL", 0, 1, 0, 0, 0);
	__LIB_23__::func_494(0, "NUMBER", 1, 1, 0, 0, 0);
	__LIB_23__::func_497(iParam0->f_2794, 3, 0);
	__LIB_23__::func_494(1, "FMMC_OVR_YVAL", 0, 1, 0, 0, 0);
	__LIB_23__::func_494(1, "NUMBER", 1, 1, 0, 0, 0);
	__LIB_23__::func_497(iParam0->f_2794.f_1, 3, 0);
	__LIB_23__::func_494(2, "FMMC_OVR_ZVAL", 0, 1, 0, 0, 0);
	__LIB_23__::func_494(2, "NUMBER", 1, 1, 0, 0, 0);
	__LIB_23__::func_497(iParam0->f_2794.f_2, 3, 0);
	__LIB_23__::func_494(3, "FMMC_OVR_RESET", 0, 1, 0, 0, 0);
}

void func_104(int* iParam0)//Position - 0x1D2C5D
{
	__LIB_23__::func_384(iParam0);
	__LIB_1__::func_767("FMMC_MICO_DELT");
	__LIB_1__::func_766(1, 1, 0, 0, 0);
	__LIB_1__::func_765(1, 2, 1, 1, 1);
	__LIB_12__::func_593(0, 0, 0, 0, 0);
	Global_23149 = 0.3f;
	iParam0->f_270 = 385;
	iParam0->f_546 = 7;
	__LIB_23__::func_494(0, "FMMC_CDEL_PED", 0, 1, 0, 0, 0);
	__LIB_23__::func_494(1, "FMMC_CDEL_VEH", 0, 1, 0, 0, 0);
	__LIB_23__::func_494(2, "FMMC_CDEL_PU", 0, 1, 0, 0, 0);
	__LIB_23__::func_494(3, "FMMC_CDEL_OBJ", 0, 1, 0, 0, 0);
	__LIB_23__::func_494(4, "FMMC_CDEL_LOC", 0, 1, 0, 0, 0);
	__LIB_23__::func_494(5, "FMMC_CDEL_DT", 0, 1, 0, 0, 0);
	__LIB_23__::func_494(6, "FMMC_CDEL_DR", 0, 1, 0, 0, 0);
}

void func_105(int* iParam0)//Position - 0x1D32D2
{
	iParam0->f_4756 = iParam0->f_2807[(iParam0->f_2852 - 1)];
	__LIB_23__::func_384(iParam0);
	__LIB_1__::func_767("FMMC_NEXT_MT");
	__LIB_19__::func_185(iParam0->f_4756);
	__LIB_1__::func_766(1, 1, 0, 0, 0);
	__LIB_1__::func_765(1, 2, 1, 1, 1);
	__LIB_12__::func_593(0, 1, 0, 0, 0);
	Global_23149 = 0.425f;
	iParam0->f_270 = 635;
	iParam0->f_546 = 2;
	__LIB_23__::func_494(0, "FMMC_NEXT_MCID", 0, 1, 0, 0, 0);
	__LIB_23__::func_494(0, "STRING", 1, 1, 0, 0, 0);
	__LIB_23__::func_495(&(Global_4718592.f_116841[iParam0->f_4756 /*6*/]), 0, 0, 0);
	iParam0->f_142[0] = 83;
	__LIB_23__::func_494(1, "FMMC_NEXT_MBT", 0, 1, 0, 0, 0);
	__LIB_23__::func_494(1, "STRING", 1, 1, 0, 0, 0);
	__LIB_23__::func_495(__LIB_23__::func_121(Global_4718592.f_116878[iParam0->f_4756]), 0, 0, 0);
}

void func_106(int iParam0, int iParam1, bool bParam2)//Position - 0x1D345B
{
	struct<2> Var0;
	if (iParam1 >= 6 || iParam1 < 0)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(&(Global_4718592.f_116841[iParam1 /*6*/])))
	{
		__LIB_23__::func_494(iParam0, "FMMC_NM_MIS_E", 1, 1, 0, 0, 0);
		__LIB_23__::func_517(iParam1 + 1, 0);
	}
	else
	{
		__LIB_23__::func_494(iParam0, "FMMC_NM_MIS", 3, 1, 0, 0, 0);
		__LIB_23__::func_517(iParam1 + 1, 0);
		if (bParam2)
		{
			StringCopy(&Var0, HUD::GET_FIRST_N_CHARACTERS_OF_LITERAL_STRING(&(Global_4718592.f_116841[iParam1 /*6*/]), 10), 16);
			StringConCat(&Var0, "...", 16);
			__LIB_23__::func_495(&Var0, 0, 0, 0);
		}
		else
		{
			__LIB_23__::func_495(&(Global_4718592.f_116841[iParam1 /*6*/]), 0, 0, 0);
		}
		__LIB_23__::func_495(__LIB_23__::func_121(Global_4718592.f_116878[iParam1]), 0, 0, 0);
	}
}

void func_107(int* iParam0)//Position - 0x1D351D
{
	int iVar0[6];
	int iVar1;
	__LIB_23__::func_384(iParam0);
	__LIB_1__::func_767("FMMC_IGN_PROT");
	__LIB_1__::func_766(1, 1, 0, 0, 0);
	__LIB_1__::func_765(1, 2, 1, 1, 1);
	__LIB_12__::func_593(0, 1, 0, 0, 0);
	if (iParam0->f_550 == 1)
	{
		iParam0->f_270 = 209;
		iVar1 = 0;
		while (iVar1 < iVar0)
		{
			iVar0[iVar1] = BitTest(iParam0->f_1014, (13 + iVar1));
			iVar1++;
		}
	}
	else if (iParam0->f_550 == 0)
	{
		iParam0->f_270 = 173;
		iVar1 = 0;
		while (iVar1 < iVar0)
		{
			iVar0[iVar1] = BitTest(iParam0->f_976, (7 + iVar1));
			iVar1++;
		}
	}
	else if (iParam0->f_550 == 3)
	{
		iParam0->f_270 = 130;
		iVar1 = 0;
		while (iVar1 < iVar0)
		{
			iVar0[iVar1] = BitTest(iParam0->f_1005, (5 + iVar1));
			iVar1++;
		}
	}
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		__LIB_23__::func_494(iVar1, "FMMC_IGN_OBJ", 1, 1, 0, 0, 0);
		__LIB_23__::func_517(iVar1, 0);
		if (iVar0[iVar1])
		{
			__LIB_23__::func_494(iVar1, "FMMC_SEL_YES", 0, 1, 0, 0, 0);
		}
		else
		{
			__LIB_23__::func_494(iVar1, "FMMC_SEL_NO", 0, 1, 0, 0, 0);
		}
		iVar1++;
	}
	iParam0->f_546 = iVar0;
}

int func_108()//Position - 0x1D86B0
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			iVar2 = (iVar2 + __LIB_23__::func_448(iVar0, iVar1));
			iVar1++;
		}
		iVar0++;
	}
	return iVar2;
}

void func_109(struct<3> Param0, int* iParam1, var uParam2, struct<3> Param3, int* iParam4, int* iParam5)//Position - 0x1EBF4A
{
	if (!__LIB_0__::func_86(Global_4718592.f_628) && !__LIB_18__::func_654())
	{
		if (!HUD::DOES_BLIP_EXIST(*iParam5) || !__LIB_0__::func_78(Global_4718592.f_628, HUD::GET_BLIP_COORDS(*iParam5), 0))
		{
			__LIB_23__::func_310(iParam5, Global_4718592.f_628, 1, "FMMC_T0_M31", 1f, 0, 0, -1);
			HUD::SET_BLIP_SPRITE(*iParam5, 184);
			__LIB_1__::func_540(iParam5, 116);
			HUD::SET_BLIP_NAME_FROM_TEXT_FILE(*iParam5, "FMMC_T0_M31");
		}
	}
	else if (HUD::DOES_BLIP_EXIST(*iParam5))
	{
		HUD::REMOVE_BLIP(iParam5);
	}
	if (__LIB_0__::func_86(Param0))
	{
		if (HUD::DOES_BLIP_EXIST(*iParam1))
		{
			HUD::REMOVE_BLIP(iParam1);
		}
		if (HUD::DOES_BLIP_EXIST(*iParam4))
		{
			HUD::REMOVE_BLIP(iParam4);
		}
		if (*uParam2 != 0)
		{
			GRAPHICS::DELETE_CHECKPOINT(*uParam2);
			*uParam2 = 0;
		}
	}
	if (__LIB_0__::func_86(Param3) || __LIB_18__::func_654())
	{
		if (HUD::DOES_BLIP_EXIST(*iParam4))
		{
			HUD::REMOVE_BLIP(iParam4);
		}
	}
	else if (!HUD::DOES_BLIP_EXIST(*iParam4))
	{
		__LIB_23__::func_310(iParam4, Param3, 1, "FMMC_B_14", 1f, 0, 0, -1);
		HUD::SET_BLIP_SPRITE(*iParam4, 184);
		HUD::SET_BLIP_NAME_FROM_TEXT_FILE(*iParam4, "FMMC_B_14");
	}
	else if (!__LIB_0__::func_78(Param3, HUD::GET_BLIP_COORDS(*iParam4), 0))
	{
		__LIB_23__::func_310(iParam4, Param3, 1, "FMMC_B_14", 1f, 0, 0, -1);
		HUD::SET_BLIP_SPRITE(*iParam4, 184);
		HUD::SET_BLIP_NAME_FROM_TEXT_FILE(*iParam4, "FMMC_B_14");
	}
}

void func_110(int iParam0)//Position - 0x20966D
{
	bool bVar0;
	int iVar1;
	int iVar2;
	char* sVar3;
	int iVar4;
	var* uVar5;
	var* uVar6;
	var* uVar7;
	var* uVar8;
	var* uVar9;
	var* uVar10;
	var* uVar11;
	int iVar12;
	int iVar13;
	var* uVar14;
	var* uVar15;
	var* uVar16;
	var* uVar17;
	var* uVar18;
	var* uVar19;
	var* uVar20;
	var* uVar21;
	var* uVar22;
	var* uVar23;
	var* uVar24;
	int iVar25;
	int iVar26;
	int iVar27;
	int iVar28;
	int iVar29;
	int iVar30;
	var uVar31[4];
	int iVar32;
	int iVar33;
	int iVar34;
	int iVar35;
	int iVar36;
	int iVar37;
	int iVar38;
	int iVar39;
	int iVar40;
	int iVar41;
	int iVar42;
	int iVar43;
	int iVar44;
	int iVar45;
	int iVar46;
	int iVar47;
	var* uVar48[3];
	int iVar49;
	int iVar50;
	var uVar51[20];
	var* uVar52;
	var* uVar53;
	var* uVar54;
	var* uVar55;
	var* uVar56;
	var* uVar57;
	var* uVar58;
	var* uVar59;
	var* uVar60;
	var* uVar61;
	var* uVar62;
	int iVar63;
	int iVar64;
	int iVar65;
	struct<5> Var66;
	int iVar67;
	int iVar68;
	int iVar69;
	var uVar70[20];
	int iVar71;
	struct<36> Var72;
	int iVar73;
	struct<2> Var74;
	struct<3> Var75;
	int iVar76;
	bool bVar77;
	int iVar78;
	iVar4 = DATAFILE::DATADICT_GET_DICT(iParam0, "dprop");
	Global_4980736.f_63310 = __LIB_22__::func_500(DATAFILE::DATADICT_GET_INT(iVar4, "no"), 0, 200);
	uVar5 = DATAFILE::DATADICT_GET_ARRAY(iVar4, "loc");
	uVar6 = DATAFILE::DATADICT_GET_ARRAY(iVar4, "vRot");
	uVar7 = DATAFILE::DATADICT_GET_ARRAY(iVar4, "head");
	uVar8 = DATAFILE::DATADICT_GET_ARRAY(iVar4, "model");
	uVar9 = DATAFILE::DATADICT_GET_ARRAY(iVar4, "asst");
	uVar10 = DATAFILE::DATADICT_GET_ARRAY(iVar4, "asso");
	uVar11 = DATAFILE::DATADICT_GET_ARRAY(iVar4, "asss");
	iVar12 = DATAFILE::DATADICT_GET_ARRAY(iVar4, "pasc");
	iVar13 = DATAFILE::DATADICT_GET_ARRAY(iVar4, "asst2");
	uVar14 = DATAFILE::DATADICT_GET_ARRAY(iVar4, "asso2");
	uVar15 = DATAFILE::DATADICT_GET_ARRAY(iVar4, "asss2");
	uVar16 = DATAFILE::DATADICT_GET_ARRAY(iVar4, "pasc2");
	uVar17 = DATAFILE::DATADICT_GET_ARRAY(iVar4, "asst3");
	uVar18 = DATAFILE::DATADICT_GET_ARRAY(iVar4, "asso3");
	uVar19 = DATAFILE::DATADICT_GET_ARRAY(iVar4, "asss3");
	uVar20 = DATAFILE::DATADICT_GET_ARRAY(iVar4, "pasc3");
	uVar21 = DATAFILE::DATADICT_GET_ARRAY(iVar4, "asst4");
	uVar22 = DATAFILE::DATADICT_GET_ARRAY(iVar4, "asso4");
	uVar23 = DATAFILE::DATADICT_GET_ARRAY(iVar4, "asss4");
	uVar24 = DATAFILE::DATADICT_GET_ARRAY(iVar4, "pasc4");
	iVar25 = DATAFILE::DATADICT_GET_ARRAY(iVar4, "prpct");
	iVar26 = DATAFILE::DATADICT_GET_ARRAY(iVar4, "prpcr");
	iVar27 = DATAFILE::DATADICT_GET_ARRAY(iVar4, "prcra");
	iVar28 = DATAFILE::DATADICT_GET_ARRAY(iVar4, "prpbs");
	iVar29 = DATAFILE::DATADICT_GET_ARRAY(iVar4, "prpkt");
	iVar30 = DATAFILE::DATADICT_GET_ARRAY(iVar4, "dprorc");
	iVar32 = DATAFILE::DATADICT_GET_ARRAY(iVar4, "prpdclr");
	iVar33 = DATAFILE::DATADICT_GET_ARRAY(iVar4, "dpLODd");
	iVar34 = DATAFILE::DATADICT_GET_ARRAY(iVar4, "dptrpx");
	iVar35 = DATAFILE::DATADICT_GET_ARRAY(iVar4, "dpsl");
	iVar36 = DATAFILE::DATADICT_GET_ARRAY(iVar4, "dpcl");
	iVar37 = DATAFILE::DATADICT_GET_ARRAY(iVar4, "dptrRS");
	iVar38 = DATAFILE::DATADICT_GET_ARRAY(iVar4, "dyipho");
	iVar39 = DATAFILE::DATADICT_GET_ARRAY(iVar4, "dyipbtt");
	iVar40 = DATAFILE::DATADICT_GET_ARRAY(iVar4, "dcoid");
	iVar41 = DATAFILE::DATADICT_GET_ARRAY(iVar4, "dynrpil");
	iVar42 = DATAFILE::DATADICT_GET_ARRAY(iVar4, "dynblov");
	iVar43 = DATAFILE::DATADICT_GET_ARRAY(iVar4, "dynblcl");
	iVar44 = DATAFILE::DATADICT_GET_ARRAY(iVar4, "dynblrn");
	iVar45 = DATAFILE::DATADICT_GET_ARRAY(iVar4, "dynblhd");
	iVar46 = DATAFILE::DATADICT_GET_ARRAY(iVar4, "dynblsc");
	iVar47 = DATAFILE::DATADICT_GET_ARRAY(iVar4, "dynblpr");
	if (__LIB_1__::func_823())
	{
		uVar48[0] = DATAFILE::DATADICT_GET_ARRAY(iVar4, "dprpbtf");
	}
	iVar49 = DATAFILE::DATADICT_GET_ARRAY(iVar4, "dprpsgg");
	iVar50 = DATAFILE::DATADICT_GET_ARRAY(iVar4, "dprpssg");
	uVar52 = DATAFILE::DATADICT_GET_ARRAY(iVar4, "dElec_BS");
	uVar53 = DATAFILE::DATADICT_GET_ARRAY(iVar4, "dElec_TDT");
	uVar54 = DATAFILE::DATADICT_GET_ARRAY(iVar4, "dynctbs");
	uVar55 = DATAFILE::DATADICT_GET_ARRAY(iVar4, "dyncta");
	uVar56 = DATAFILE::DATADICT_GET_ARRAY(iVar4, "dyncts");
	uVar57 = DATAFILE::DATADICT_GET_ARRAY(iVar4, "dyncwt");
	uVar58 = DATAFILE::DATADICT_GET_ARRAY(iVar4, "dyncvr");
	uVar59 = DATAFILE::DATADICT_GET_ARRAY(iVar4, "dyncvw");
	uVar60 = DATAFILE::DATADICT_GET_ARRAY(iVar4, "dyncsr");
	uVar61 = DATAFILE::DATADICT_GET_ARRAY(iVar4, "dyncsht");
	uVar62 = DATAFILE::DATADICT_GET_ARRAY(iVar4, "dyncbht");
	iVar63 = 1;
	Var72.f_20 = 4;
	Var72.f_25 = 4;
	Var72.f_30 = 4;
	Var72.f_35 = 4;
	if (Global_4980736.f_63310 > 32)
	{
		Global_4980736.f_63310 = 32;
	}
	bVar0 = false;
	while (bVar0 <= (Global_4980736.f_63310 - 1))
	{
		Global_4980736.f_63312[bVar0 /*183*/] = { DATAFILE::DATAARRAY_GET_VECTOR(uVar5, bVar0) };
		Global_4980736.f_63312[bVar0 /*183*/].f_3 = { DATAFILE::DATAARRAY_GET_VECTOR(uVar6, bVar0) };
		Global_4980736.f_63312[bVar0 /*183*/].f_6 = DATAFILE::DATAARRAY_GET_FLOAT(uVar7, bVar0);
		Global_4980736.f_63312[bVar0 /*183*/].f_8 = -1;
		iVar1 = DATAFILE::DATAARRAY_GET_INT(uVar8, bVar0);
		Global_4980736.f_63312[bVar0 /*183*/].f_7 = __LIB_18__::func_611(iVar1);
		if (!STREAMING::IS_MODEL_VALID(Global_4980736.f_63312[bVar0 /*183*/].f_7))
		{
			Global_4980736.f_63312[bVar0 /*183*/].f_7 = joaat("prop_barrel_exp_01a");
		}
		if (iVar28 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar28, bVar0) == 2)
		{
			Global_4980736.f_63312[bVar0 /*183*/].f_19 = DATAFILE::DATAARRAY_GET_INT(iVar28, bVar0);
		}
		else
		{
			Global_4980736.f_63312[bVar0 /*183*/].f_19 = 0;
		}
		Global_4980736.f_63312[bVar0 /*183*/].f_46 = 1;
		__LIB_18__::func_666(&Var72, &iVar4, &(Global_4980736.f_63312[bVar0 /*183*/].f_46), bVar0, 5);
		Global_4980736.f_63312[bVar0 /*183*/].f_13 = DATAFILE::DATAARRAY_GET_INT(uVar9, bVar0);
		Global_4980736.f_63312[bVar0 /*183*/].f_12 = DATAFILE::DATAARRAY_GET_INT(uVar10, bVar0);
		Global_4980736.f_63312[bVar0 /*183*/].f_14 = DATAFILE::DATAARRAY_GET_INT(uVar11, bVar0);
		if (Global_4980736.f_63312[bVar0 /*183*/].f_14 == -1)
		{
			Global_4980736.f_63312[bVar0 /*183*/].f_14 = 0;
		}
		if (iVar13 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar13, bVar0) == 2)
		{
			Global_4980736.f_63312[bVar0 /*183*/].f_20 = DATAFILE::DATAARRAY_GET_INT(iVar13, bVar0);
			Global_4980736.f_63312[bVar0 /*183*/].f_23 = DATAFILE::DATAARRAY_GET_INT(uVar14, bVar0);
			Global_4980736.f_63312[bVar0 /*183*/].f_26 = DATAFILE::DATAARRAY_GET_INT(uVar15, bVar0);
			Global_4980736.f_63312[bVar0 /*183*/].f_21 = DATAFILE::DATAARRAY_GET_INT(uVar17, bVar0);
			Global_4980736.f_63312[bVar0 /*183*/].f_24 = DATAFILE::DATAARRAY_GET_INT(uVar18, bVar0);
			Global_4980736.f_63312[bVar0 /*183*/].f_27 = DATAFILE::DATAARRAY_GET_INT(uVar19, bVar0);
			Global_4980736.f_63312[bVar0 /*183*/].f_22 = DATAFILE::DATAARRAY_GET_INT(uVar21, bVar0);
			Global_4980736.f_63312[bVar0 /*183*/].f_25 = DATAFILE::DATAARRAY_GET_INT(uVar22, bVar0);
			Global_4980736.f_63312[bVar0 /*183*/].f_28 = DATAFILE::DATAARRAY_GET_INT(uVar23, bVar0);
		}
		else
		{
			Global_4980736.f_63312[bVar0 /*183*/].f_23 = -1;
			Global_4980736.f_63312[bVar0 /*183*/].f_20 = 0;
			Global_4980736.f_63312[bVar0 /*183*/].f_26 = 0;
			Global_4980736.f_63312[bVar0 /*183*/].f_24 = -1;
			Global_4980736.f_63312[bVar0 /*183*/].f_21 = 0;
			Global_4980736.f_63312[bVar0 /*183*/].f_27 = 0;
			Global_4980736.f_63312[bVar0 /*183*/].f_25 = -1;
			Global_4980736.f_63312[bVar0 /*183*/].f_22 = 0;
			Global_4980736.f_63312[bVar0 /*183*/].f_28 = 0;
		}
		if (iVar12 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar12, bVar0) == 2)
		{
			Global_4980736.f_63312[bVar0 /*183*/].f_15 = DATAFILE::DATAARRAY_GET_INT(iVar12, bVar0);
			Global_4980736.f_63312[bVar0 /*183*/].f_29 = DATAFILE::DATAARRAY_GET_INT(uVar16, bVar0);
			Global_4980736.f_63312[bVar0 /*183*/].f_30 = DATAFILE::DATAARRAY_GET_INT(uVar20, bVar0);
			Global_4980736.f_63312[bVar0 /*183*/].f_31 = DATAFILE::DATAARRAY_GET_INT(uVar24, bVar0);
		}
		else
		{
			Global_4980736.f_63312[bVar0 /*183*/].f_15 = 0;
			Global_4980736.f_63312[bVar0 /*183*/].f_29 = 0;
			Global_4980736.f_63312[bVar0 /*183*/].f_30 = 0;
			Global_4980736.f_63312[bVar0 /*183*/].f_31 = 0;
		}
		if (iVar26 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar26, bVar0) == 2)
		{
			Global_4980736.f_63312[bVar0 /*183*/].f_16 = DATAFILE::DATAARRAY_GET_INT(iVar26, bVar0);
		}
		else
		{
			Global_4980736.f_63312[bVar0 /*183*/].f_16 = -1;
		}
		if (iVar25 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar25, bVar0) == 2)
		{
			Global_4980736.f_63312[bVar0 /*183*/].f_17 = DATAFILE::DATAARRAY_GET_INT(iVar25, bVar0);
		}
		else
		{
			Global_4980736.f_63312[bVar0 /*183*/].f_17 = -1;
		}
		if (iVar27 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar27, bVar0) == 2)
		{
			Global_4980736.f_63312[bVar0 /*183*/].f_18 = DATAFILE::DATAARRAY_GET_INT(iVar27, bVar0);
		}
		else
		{
			Global_4980736.f_63312[bVar0 /*183*/].f_18 = -1;
		}
		if (iVar30 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar30, bVar0) == 2)
		{
			Global_4980736.f_63312[bVar0 /*183*/].f_32 = DATAFILE::DATAARRAY_GET_INT(iVar30, bVar0);
		}
		else
		{
			Global_4980736.f_63312[bVar0 /*183*/].f_32 = 0;
		}
		iVar2 = 0;
		while (iVar2 <= 3)
		{
			StringCopy(&sVar3, "Dror_", 8);
			StringIntConCat(&sVar3, iVar2, 8);
			__LIB_18__::func_404(&sVar3, &(Global_4980736.f_63312[bVar0 /*183*/].f_33[iVar2]), &iVar4, &(uVar31[iVar2]), bVar0, 0, -2340845);
			iVar2++;
		}
		if (iVar29 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar29, bVar0) == 2)
		{
			Global_4980736.f_63312[bVar0 /*183*/].f_9 = DATAFILE::DATAARRAY_GET_INT(iVar29, bVar0);
		}
		else
		{
			Global_4980736.f_63312[bVar0 /*183*/].f_9 = 0;
		}
		if (iVar32 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar32, bVar0) == 2)
		{
			Global_4980736.f_63312[bVar0 /*183*/].f_10 = DATAFILE::DATAARRAY_GET_INT(iVar32, bVar0);
		}
		else
		{
			Global_4980736.f_63312[bVar0 /*183*/].f_10 = 1;
		}
		if (iVar33 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar33, bVar0) == 3)
		{
			Global_4980736.f_63312[bVar0 /*183*/].f_11 = DATAFILE::DATAARRAY_GET_FLOAT(iVar33, bVar0);
		}
		else
		{
			Global_4980736.f_63312[bVar0 /*183*/].f_11 = 0f;
		}
		if (iVar34 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar34, bVar0) == 3)
		{
			Global_4980736.f_63312[bVar0 /*183*/].f_38 = DATAFILE::DATAARRAY_GET_FLOAT(iVar34, bVar0);
		}
		else
		{
			Global_4980736.f_63312[bVar0 /*183*/].f_38 = 2f;
		}
		if (iVar37 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar37, bVar0) == 2)
		{
			Global_4980736.f_63312[bVar0 /*183*/].f_41 = DATAFILE::DATAARRAY_GET_INT(iVar37, bVar0);
		}
		else
		{
			Global_4980736.f_63312[bVar0 /*183*/].f_41 = -1;
		}
		if (iVar35 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar35, bVar0) == 2)
		{
			Global_4980736.f_63312[bVar0 /*183*/].f_39 = DATAFILE::DATAARRAY_GET_INT(iVar35, bVar0);
		}
		else
		{
			Global_4980736.f_63312[bVar0 /*183*/].f_39 = 0;
		}
		if (iVar36 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar36, bVar0) == 2)
		{
			Global_4980736.f_63312[bVar0 /*183*/].f_40 = DATAFILE::DATAARRAY_GET_INT(iVar36, bVar0);
		}
		else
		{
			Global_4980736.f_63312[bVar0 /*183*/].f_40 = 0;
		}
		if (iVar36 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar36, bVar0) == 2)
		{
			Global_4980736.f_63312[bVar0 /*183*/].f_40 = DATAFILE::DATAARRAY_GET_INT(iVar36, bVar0);
		}
		else
		{
			Global_4980736.f_63312[bVar0 /*183*/].f_40 = 0;
		}
		if (iVar38 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar38, bVar0) == 2)
		{
			Global_4980736.f_63312[bVar0 /*183*/].f_42 = DATAFILE::DATAARRAY_GET_INT(iVar38, bVar0);
		}
		else
		{
			Global_4980736.f_63312[bVar0 /*183*/].f_42 = 0;
		}
		if (iVar39 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar39, bVar0) == 2)
		{
			Global_4980736.f_63312[bVar0 /*183*/].f_43 = DATAFILE::DATAARRAY_GET_INT(iVar39, bVar0);
		}
		else
		{
			Global_4980736.f_63312[bVar0 /*183*/].f_43 = 0;
		}
		if (iVar40 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar40, bVar0) == 2)
		{
			Global_4980736.f_63312[bVar0 /*183*/].f_44 = DATAFILE::DATAARRAY_GET_INT(iVar40, bVar0);
		}
		else
		{
			Global_4980736.f_63312[bVar0 /*183*/].f_44 = 0;
		}
		if (iVar41 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar41, bVar0) == 2)
		{
			Global_4980736.f_63312[bVar0 /*183*/].f_45 = DATAFILE::DATAARRAY_GET_INT(iVar41, bVar0);
		}
		else
		{
			Global_4980736.f_63312[bVar0 /*183*/].f_45 = -1;
		}
		if (iVar42 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar42, bVar0) == 2)
		{
			Global_4980736.f_63312[bVar0 /*183*/].f_46.f_7 = DATAFILE::DATAARRAY_GET_INT(iVar42, bVar0);
		}
		else if (__LIB_1__::func_823())
		{
			Global_4980736.f_63312[bVar0 /*183*/].f_46.f_7 = 0;
		}
		if (iVar43 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar43, bVar0) == 2)
		{
			Global_4980736.f_63312[bVar0 /*183*/].f_46.f_2 = DATAFILE::DATAARRAY_GET_INT(iVar43, bVar0);
		}
		else if (__LIB_1__::func_823())
		{
			Global_4980736.f_63312[bVar0 /*183*/].f_46.f_2 = 0;
		}
		if (iVar44 != 0)
		{
			if (DATAFILE::DATAARRAY_GET_TYPE(iVar44, bVar0) == 2)
			{
				Global_4980736.f_63312[bVar0 /*183*/].f_46.f_8 = SYSTEM::TO_FLOAT(DATAFILE::DATAARRAY_GET_INT(iVar44, bVar0));
			}
			else
			{
				Global_4980736.f_63312[bVar0 /*183*/].f_46.f_8 = DATAFILE::DATAARRAY_GET_FLOAT(iVar44, bVar0);
			}
		}
		else if (__LIB_1__::func_823())
		{
			Global_4980736.f_63312[bVar0 /*183*/].f_46.f_8 = 0f;
		}
		if (iVar45 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar45, bVar0) == 3)
		{
			Global_4980736.f_63312[bVar0 /*183*/].f_46.f_9 = DATAFILE::DATAARRAY_GET_FLOAT(iVar45, bVar0);
		}
		else if (__LIB_1__::func_823())
		{
			Global_4980736.f_63312[bVar0 /*183*/].f_46.f_9 = 0f;
		}
		if (iVar46 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar46, bVar0) == 3)
		{
			Global_4980736.f_63312[bVar0 /*183*/].f_46.f_6 = DATAFILE::DATAARRAY_GET_FLOAT(iVar46, bVar0);
		}
		else if (__LIB_1__::func_823())
		{
			Global_4980736.f_63312[bVar0 /*183*/].f_46.f_6 = 1f;
		}
		if (iVar47 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar47, bVar0) == 2)
		{
			Global_4980736.f_63312[bVar0 /*183*/].f_46.f_11 = DATAFILE::DATAARRAY_GET_INT(iVar47, bVar0);
		}
		else if (__LIB_1__::func_823())
		{
			Global_4980736.f_63312[bVar0 /*183*/].f_46.f_11 = 0;
		}
		if (!__LIB_1__::func_823())
		{
			iVar73 = 0;
			while (iVar73 <= 2)
			{
				iVar1 = 0;
				StringCopy(&Var74, "dprpbtf", 16);
				StringConCat(&Var74, "f", 16);
				StringIntConCat(&Var74, iVar73, 16);
				__LIB_18__::func_404(&Var74, &iVar1, &iVar4, &(uVar48[iVar73]), bVar0, 0, -2340845);
				Global_4980736.f_63312[bVar0 /*183*/].f_110[iVar73] = iVar1;
				iVar73++;
			}
		}
		else if (uVar48[0] != 0 && DATAFILE::DATAARRAY_GET_TYPE(uVar48[0], bVar0) == 2)
		{
			Global_4980736.f_63312[bVar0 /*183*/].f_110[0] = DATAFILE::DATAARRAY_GET_INT(uVar48[0], bVar0);
		}
		else
		{
			Global_4980736.f_63312[bVar0 /*183*/].f_110[0] = 0;
		}
		if (iVar49 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar49, bVar0) == 2)
		{
			Global_4980736.f_63312[bVar0 /*183*/].f_119 = DATAFILE::DATAARRAY_GET_INT(iVar49, bVar0);
		}
		else
		{
			Global_4980736.f_63312[bVar0 /*183*/].f_119 = 0;
		}
		if (iVar50 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar50, bVar0) == 2)
		{
			Global_4980736.f_63312[bVar0 /*183*/].f_120 = DATAFILE::DATAARRAY_GET_INT(iVar50, bVar0);
		}
		else
		{
			Global_4980736.f_63312[bVar0 /*183*/].f_120 = 0;
		}
		iVar2 = 0;
		while (iVar2 <= 19)
		{
			StringCopy(&sVar3, "1dpwb", 8);
			StringIntConCat(&sVar3, iVar2, 8);
			__LIB_18__::func_404(&sVar3, &(Global_4980736.f_63312[bVar0 /*183*/].f_121[iVar2]), &iVar4, &(uVar51[iVar2]), bVar0, 0, 0);
			iVar2++;
		}
		__LIB_18__::func_606(&iVar4, &iVar65, &(Global_4980736.f_63312[bVar0 /*183*/].f_142), bVar0);
		__LIB_17__::func_988(&(Global_4980736.f_63312[bVar0 /*183*/].f_83), bVar0, &uVar52, &uVar53);
		__LIB_17__::func_987(&(Global_4980736.f_63312[bVar0 /*183*/].f_83.f_2), bVar0, &uVar54, &uVar55, &uVar56, &uVar57, &uVar58, &uVar59, &uVar60, &uVar61, &uVar62);
		__LIB_18__::func_404("dpssr", &(Global_4980736.f_63312[bVar0 /*183*/].f_151), &iVar4, &iVar67, bVar0, 0, -2340845);
		__LIB_18__::func_404("dpscr", &(Global_4980736.f_63312[bVar0 /*183*/].f_151.f_1), &iVar4, &iVar68, bVar0, 0, -2340845);
		__LIB_18__::func_404("dpsrp", &(Global_4980736.f_63312[bVar0 /*183*/].f_151.f_2), &iVar4, &iVar69, bVar0, 0, -2340845);
		iVar2 = 0;
		while (iVar2 <= 19)
		{
			StringCopy(&Var75, "dpSpgMd_", 24);
			StringIntConCat(&Var75, iVar2, 24);
			__LIB_18__::func_404(&Var75, &(Global_4980736.f_63312[bVar0 /*183*/].f_154[iVar2]), &iVar4, &(uVar70[iVar2]), bVar0, -1, -2340845);
			iVar2++;
		}
		__LIB_18__::func_404("agIDdy", &(Global_4980736.f_63312[bVar0 /*183*/].f_175), &iVar4, &iVar71, bVar0, 0, 0);
		__LIB_18__::func_401("alvdpr", &(Global_4980736.f_63312[bVar0 /*183*/].f_176), 1, &iVar4, &iVar63, bVar0, 0, -2340845);
		__LIB_18__::func_610(&iVar4, &iVar64, &(Global_4980736.f_63312[bVar0 /*183*/].f_114), bVar0);
		__LIB_18__::func_404("cdDPRcbzi", &(Global_4980736.f_63312[bVar0 /*183*/].f_178.f_1), &iVar4, &(Var66.f_1), bVar0, -1, -2340845);
		__LIB_18__::func_404("cdDPRnopr", &(Global_4980736.f_63312[bVar0 /*183*/].f_178.f_2), &iVar4, &(Var66.f_2), bVar0, 1, -2340845);
		__LIB_18__::func_404("cdDPRre", &(Global_4980736.f_63312[bVar0 /*183*/].f_178.f_3), &iVar4, &(Var66.f_3), bVar0, 0, -2340845);
		iVar76 = Global_4980736.f_63312[bVar0 /*183*/].f_178;
		__LIB_18__::func_404("cdDPRsel", &iVar76, &iVar4, &Var66, bVar0, -1, -2340845);
		Global_4980736.f_63312[bVar0 /*183*/].f_178 = iVar76;
		__LIB_18__::func_404("cdDPbs", &(Global_4980736.f_63312[bVar0 /*183*/].f_178.f_4), &iVar4, &(Var66.f_4), bVar0, 0, -2340845);
		if (BitTest(Global_4980736.f_63312[bVar0 /*183*/].f_19, 6))
		{
			if (Global_4980736.f_63312[bVar0 /*183*/].f_7 == joaat("ch_prop_ch_cctv_cam_01a"))
			{
				Global_4980736.f_63312[bVar0 /*183*/].f_7 = joaat("ch_prop_ch_cctv_cam_02a");
			}
		}
		bVar0++;
	}
	bVar77 = bVar0;
	if ((__LIB_16__::func_682() || Global_4718592 == 1) && !__LIB_0__::func_998())
	{
		bVar0 = false;
		while (bVar0 <= (Global_4980736.f_5739 - 1))
		{
			Global_4980736.f_63312[bVar77 /*183*/] = { Global_4980736.f_5742[bVar0 /*442*/] };
			Global_4980736.f_63312[bVar77 /*183*/].f_3 = { Global_4980736.f_5742[bVar0 /*442*/].f_4 };
			Global_4980736.f_63312[bVar77 /*183*/].f_6 = Global_4980736.f_5742[bVar0 /*442*/].f_3;
			Global_4980736.f_63312[bVar77 /*183*/].f_8 = bVar0;
			Global_4980736.f_63312[bVar77 /*183*/].f_7 = joaat("prop_container_ld_pu");
			iVar78 = 0;
			while (iVar78 <= 3)
			{
				Global_4980736.f_5742[bVar77 /*442*/].f_16[iVar78] = 0;
				Global_4980736.f_5742[bVar77 /*442*/].f_21[iVar78] = 99999;
				iVar78++;
			}
			Global_4980736.f_63311++;
			Global_4980736.f_63310++;
			bVar77++;
			bVar0++;
		}
	}
}

void func_111(int iParam0)//Position - 0x212EA2
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	char* sVar4;
	int iVar5;
	var* uVar6;
	var* uVar7;
	int iVar8;
	int iVar9;
	var* uVar10;
	var* uVar11;
	var* uVar12;
	int iVar13;
	var* uVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	var* uVar18;
	var* uVar19;
	var* uVar20;
	var* uVar21;
	var* uVar22;
	var* uVar23;
	var* uVar24;
	var* uVar25;
	var* uVar26;
	var* uVar27;
	var* uVar28;
	var* uVar29;
	var* uVar30;
	var* uVar31;
	int iVar32;
	int iVar33;
	int iVar34;
	var* uVar35[3];
	var* uVar36;
	int iVar37;
	var* uVar38;
	var* uVar39;
	int iVar40;
	int iVar41;
	int iVar42;
	int iVar43;
	int iVar44;
	int iVar45;
	int iVar46;
	int iVar47;
	int iVar48;
	int iVar49;
	int iVar50;
	int iVar51;
	int iVar52;
	int iVar53;
	int iVar54;
	int iVar55;
	int iVar56;
	int iVar57;
	var* uVar58;
	var* uVar59;
	int iVar60;
	var* uVar61;
	var* uVar62;
	var* uVar63;
	var* uVar64;
	int iVar65;
	int iVar66;
	var* uVar67;
	var* uVar68;
	var* uVar69;
	var* uVar70;
	var* uVar71;
	int iVar72;
	var* uVar73;
	var* uVar74;
	var* uVar75;
	var* uVar76;
	var* uVar77;
	int iVar78;
	var* uVar79;
	var* uVar80;
	var* uVar81;
	var* uVar82;
	int iVar83;
	int iVar84;
	var* uVar85;
	int iVar86;
	int iVar87;
	int iVar88;
	var* uVar89;
	var* uVar90;
	var* uVar91;
	var* uVar92;
	var* uVar93;
	var* uVar94;
	var* uVar95;
	var* uVar96;
	var* uVar97;
	var* uVar98;
	var* uVar99;
	int iVar100;
	int iVar101;
	int iVar102;
	int iVar103;
	int iVar104;
	int iVar105;
	int iVar106;
	int iVar107;
	int iVar108;
	int iVar109;
	int iVar110;
	int iVar111;
	int iVar112;
	int iVar113;
	int iVar114;
	int iVar115;
	int iVar116;
	int iVar117;
	int iVar118;
	int iVar119;
	int iVar120;
	int iVar121;
	int iVar122;
	int iVar123;
	var uVar124[20];
	int iVar125;
	int iVar126;
	int iVar127;
	int iVar128;
	int iVar129;
	int iVar130;
	int iVar131;
	var uVar132[4];
	int iVar133;
	int iVar134;
	int iVar135;
	int iVar136;
	int iVar137;
	var* uVar138;
	var* uVar139;
	int iVar140;
	int iVar141;
	int iVar142;
	int iVar143;
	int iVar144;
	int iVar145;
	int iVar146;
	int iVar147;
	int iVar148;
	int iVar149;
	int iVar150;
	int iVar151;
	int iVar152;
	int iVar153;
	int iVar154;
	var* uVar155[4];
	var* uVar156[4];
	var* uVar157[4];
	var* uVar158[4];
	var* uVar159[4];
	var* uVar160[4];
	int iVar161;
	int iVar162;
	int iVar163;
	int iVar164;
	int iVar165;
	int iVar166;
	int iVar167;
	int iVar168;
	int iVar169;
	int iVar170;
	int iVar171;
	int iVar172;
	struct<14> Var173;
	int iVar174;
	int iVar175;
	int iVar176;
	int iVar177;
	int iVar178;
	int iVar179;
	int iVar180;
	int iVar181;
	int iVar182;
	int iVar183;
	int iVar184;
	int iVar185;
	int iVar186;
	int iVar187;
	int iVar188;
	int iVar189;
	int iVar190;
	struct<36> Var191;
	struct<5> Var192;
	int iVar193;
	int iVar194;
	int iVar195;
	int iVar196;
	int iVar197;
	struct<4> Var198;
	struct<19> Var199;
	int iVar200;
	int iVar201;
	struct<2> Var202;
	int iVar203;
	int iVar204;
	iVar5 = DATAFILE::DATADICT_GET_DICT(iParam0, "obj");
	Global_4980736.f_5739 = DATAFILE::DATADICT_GET_INT(iVar5, "no");
	Global_4980736.f_5740 = DATAFILE::DATADICT_GET_INT(iVar5, "pal");
	Global_4980736.f_5741 = DATAFILE::DATADICT_GET_INT(iVar5, "rtm");
	uVar6 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "loc");
	uVar7 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "head");
	uVar18 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "model");
	uVar19 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "ped");
	uVar20 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "rsp");
	uVar21 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "rot");
	uVar22 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "cont");
	uVar23 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "valu");
	uVar24 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "ammoforwep");
	uVar25 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "cpup");
	uVar26 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "cpupr");
	uVar27 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "cpupt");
	uVar28 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "bits");
	uVar29 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "bits2");
	uVar30 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "bits3");
	uVar31 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "bits4");
	iVar33 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "mcvo1");
	iVar34 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "mcvo2");
	if (__LIB_1__::func_823())
	{
		uVar35[0] = DATAFILE::DATADICT_GET_ARRAY(iVar5, "mcvbkt");
	}
	uVar38 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "oijh");
	uVar39 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "oiet");
	iVar40 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "ospl");
	iVar41 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "dspn");
	iVar42 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "objcps");
	iVar43 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "objinv");
	iVar44 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "objCCO");
	iVar45 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "objbhd");
	iVar46 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "objbp");
	iVar47 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "objcash");
	iVar48 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "objpi");
	iVar49 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "objld1");
	iVar50 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "objld2");
	iVar51 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "objparq");
	iVar52 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "objNoO");
	iVar53 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "objNoOH");
	iVar54 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "objDoO");
	iVar55 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "objDoOH");
	iVar56 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "objDoOL");
	iVar57 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "objDoOLH");
	uVar58 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "objaro");
	iVar126 = 20;
	iVar168 = 4;
	iVar170 = 4;
	Var173 = 12;
	Var173.f_13 = 12;
	iVar186 = 1;
	iVar187 = 4;
	iVar188 = 4;
	Var191.f_20 = 4;
	Var191.f_25 = 4;
	Var191.f_30 = 4;
	Var191.f_35 = 4;
	Var199.f_10 = 1;
	Var199.f_12 = 1;
	Var199.f_14 = 1;
	Var199.f_16 = 1;
	Var199.f_18 = 1;
	if (__LIB_16__::func_683(1) || __LIB_0__::func_998())
	{
		iVar8 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "obrr");
		uVar10 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "obrmr");
		iVar9 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "SMeR");
		iVar17 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "obder");
		iVar16 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "obso");
		uVar11 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "osnt");
		uVar12 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "osnei");
		iVar15 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "objbr");
		iVar13 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "o2sp");
		uVar14 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "o2sh");
		uVar36 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "mgbs");
		iVar37 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "mgDT");
		uVar59 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "objct");
		uVar61 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "team");
		uVar62 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "spwn");
		uVar63 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "oAsSc");
		uVar64 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "oAsAPR");
		iVar65 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "objct2");
		uVar67 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "team2");
		uVar68 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "spwn2");
		uVar69 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "o2AsSc");
		uVar70 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "o2AsAPR");
		uVar71 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "objct3");
		uVar73 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "team3");
		uVar74 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "spwn3");
		uVar75 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "o3AsSc");
		uVar76 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "o3AsAPR");
		uVar77 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "objct4");
		uVar79 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "team4");
		uVar80 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "spwn4");
		uVar81 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "o4AsSc");
		uVar82 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "o4AsAPR");
		uVar85 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "obb");
		iVar86 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "obbc");
		iVar87 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "obbs");
		iVar88 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "obtc");
		uVar89 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "oElec_BS");
		uVar90 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "oElec_TDT");
		uVar91 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "obtctbs");
		uVar93 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "obtcta");
		uVar92 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "obtcts");
		uVar94 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "obtcwt");
		uVar95 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "obtcvr");
		uVar96 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "obtcvw");
		uVar97 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "obtcsr");
		uVar98 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "obtcsht");
		uVar99 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "obtcbht");
		iVar100 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "orbcnno");
		iVar101 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "objhpovr");
		iVar102 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "objbtte");
		iVar103 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "objlkzn");
		iVar104 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "ocoid");
		iVar110 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "objtvi");
		iVar106 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "tl63vts");
		iVar107 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "objLOD");
		iVar108 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "iobjhbir");
		iVar109 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "iobjhbor");
		iVar111 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "oIntAnim");
		iVar112 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "oIntAltAnimSet");
		iVar113 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "oIntKPAR");
		iVar114 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "oIntPed");
		iVar118 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "objclt");
		iVar119 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "objcr");
		iVar120 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "obcra");
		iVar121 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "ospdl");
		iVar122 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "osgr");
		iVar123 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "ossgr");
		iVar128 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "objcnm");
		iVar131 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "ororc");
		iVar133 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "objap");
		iVar134 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "objapt");
		iVar135 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "obint");
		iVar136 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "obrom");
		iVar137 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "inco");
		uVar138 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "inhsh");
		uVar139 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "vehpu");
		iVar140 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "airpu");
		iVar141 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "gotor");
		iVar154 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "objatto");
		iVar161 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "objzns");
		iVar162 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "objzns2");
		iVar146 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "gtbsr");
		iVar147 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "gtbss");
		iVar148 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "nmaggg");
		iVar149 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "nmpass");
		iVar150 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "nmfail");
		iVar151 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "omcp");
		iVar152 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "omcf");
		iVar153 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "omca");
		iVar2 = 0;
		while (iVar2 <= (Global_4718592.f_593 - 1))
		{
			if (iVar2 < 4)
			{
				StringCopy(&sVar4, "rule", 8);
				StringIntConCat(&sVar4, iVar2, 8);
				uVar155[iVar2] = DATAFILE::DATADICT_GET_ARRAY(iVar5, &sVar4);
				StringCopy(&sVar4, "pri", 8);
				StringIntConCat(&sVar4, iVar2, 8);
				uVar156[iVar2] = DATAFILE::DATADICT_GET_ARRAY(iVar5, &sVar4);
				StringCopy(&sVar4, "jtop", 8);
				StringIntConCat(&sVar4, iVar2, 8);
				uVar157[iVar2] = DATAFILE::DATADICT_GET_ARRAY(iVar5, &sVar4);
				StringCopy(&sVar4, "jtof", 8);
				StringIntConCat(&sVar4, iVar2, 8);
				uVar158[iVar2] = DATAFILE::DATADICT_GET_ARRAY(iVar5, &sVar4);
				StringCopy(&sVar4, "bosr", 8);
				StringIntConCat(&sVar4, iVar2, 8);
				uVar159[iVar2] = DATAFILE::DATADICT_GET_ARRAY(iVar5, &sVar4);
				StringCopy(&sVar4, "boer", 8);
				StringIntConCat(&sVar4, iVar2, 8);
				uVar160[iVar2] = DATAFILE::DATADICT_GET_ARRAY(iVar5, &sVar4);
			}
			iVar2++;
		}
	}
	bVar0 = false;
	while (bVar0 <= (Global_4980736.f_5739 - 1))
	{
		if (bVar0 < 32)
		{
			Global_4980736.f_5742[bVar0 /*442*/] = { DATAFILE::DATAARRAY_GET_VECTOR(uVar6, bVar0) };
			Global_4980736.f_5742[bVar0 /*442*/].f_3 = DATAFILE::DATAARRAY_GET_FLOAT(uVar7, bVar0);
			iVar1 = DATAFILE::DATAARRAY_GET_INT(uVar18, bVar0);
			Global_4980736.f_5742[bVar0 /*442*/].f_15 = __LIB_18__::func_611(iVar1);
			if (Global_4980736.f_5742[bVar0 /*442*/].f_15 == joaat("hei_prop_bank_cctv_02"))
			{
				Global_4980736.f_5742[bVar0 /*442*/].f_15 = joaat("hei_prop_bank_cctv_01");
			}
			if (Global_4718592.f_117095 == 0)
			{
				if (Global_4980736.f_5742[bVar0 /*442*/].f_15 == joaat("prop_box_wood02a_pu"))
				{
					Global_4980736.f_5742[bVar0 /*442*/].f_15 = joaat("hei_prop_hei_drug_pack_01a");
				}
			}
			if (!STREAMING::IS_MODEL_VALID(Global_4980736.f_5742[bVar0 /*442*/].f_15))
			{
				Global_4980736.f_5742[bVar0 /*442*/].f_15 = joaat("prop_drug_package");
			}
			if (Global_4980736.f_5742[bVar0 /*442*/].f_15 == joaat("prop_cctv_cam_06a"))
			{
				Global_4980736.f_5742[bVar0 /*442*/].f_15 = joaat("hei_prop_bank_cctv_01");
			}
			if (Global_4980736.f_5742[bVar0 /*442*/].f_15 == joaat("prop_cctv_cam_07a") && __LIB_1__::func_823())
			{
				Global_4980736.f_5742[bVar0 /*442*/].f_15 = joaat("hei_prop_bank_cctv_02");
			}
			if (Global_4980736.f_5742[bVar0 /*442*/].f_15 == joaat("ex_prop_adv_case"))
			{
				Global_4980736.f_5742[bVar0 /*442*/].f_15 = joaat("gr_prop_gr_adv_case");
			}
			__LIB_18__::func_666(&Var191, &iVar5, &(Global_4980736.f_5742[bVar0 /*442*/].f_30), bVar0, 1);
			__LIB_18__::func_413(bVar0);
			Global_4980736.f_5742[bVar0 /*442*/].f_26 = DATAFILE::DATAARRAY_GET_INT(uVar20, bVar0);
			Global_4980736.f_5742[bVar0 /*442*/].f_4 = { DATAFILE::DATAARRAY_GET_VECTOR(uVar21, bVar0) };
			Global_4980736.f_5742[bVar0 /*442*/].f_67 = DATAFILE::DATAARRAY_GET_INT(uVar19, bVar0);
			Global_4980736.f_5742[bVar0 /*442*/].f_127 = DATAFILE::DATAARRAY_GET_INT(uVar22, bVar0);
			Global_4980736.f_5742[bVar0 /*442*/].f_128 = DATAFILE::DATAARRAY_GET_INT(uVar23, bVar0);
			Global_4980736.f_5742[bVar0 /*442*/].f_129 = DATAFILE::DATAARRAY_GET_INT(uVar24, bVar0);
			Global_4980736.f_5742[bVar0 /*442*/].f_130 = DATAFILE::DATAARRAY_GET_INT(uVar25, bVar0);
			Global_4980736.f_5742[bVar0 /*442*/].f_131 = DATAFILE::DATAARRAY_GET_INT(uVar27, bVar0);
			Global_4980736.f_5742[bVar0 /*442*/].f_132 = DATAFILE::DATAARRAY_GET_INT(uVar26, bVar0);
			Global_4980736.f_5742[bVar0 /*442*/].f_120 = DATAFILE::DATAARRAY_GET_INT(uVar28, bVar0);
			Global_4980736.f_5742[bVar0 /*442*/].f_121 = DATAFILE::DATAARRAY_GET_INT(uVar29, bVar0);
			Global_4980736.f_5742[bVar0 /*442*/].f_122 = DATAFILE::DATAARRAY_GET_INT(uVar30, bVar0);
			Global_4980736.f_5742[bVar0 /*442*/].f_123 = DATAFILE::DATAARRAY_GET_INT(uVar31, bVar0);
			__LIB_18__::func_404("bits5", &(Global_4980736.f_5742[bVar0 /*442*/].f_124), &iVar5, &iVar32, bVar0, 0, -2340845);
			if (iVar33 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar33, bVar0) == 2)
			{
				Global_4980736.f_5742[bVar0 /*442*/].f_321 = DATAFILE::DATAARRAY_GET_INT(iVar33, bVar0);
			}
			else
			{
				Global_4980736.f_5742[bVar0 /*442*/].f_321 = -1;
			}
			if (iVar34 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar34, bVar0) == 2)
			{
				Global_4980736.f_5742[bVar0 /*442*/].f_322 = DATAFILE::DATAARRAY_GET_INT(iVar34, bVar0);
			}
			else
			{
				Global_4980736.f_5742[bVar0 /*442*/].f_322 = -1;
			}
			if (!__LIB_1__::func_823())
			{
				iVar201 = 0;
				while (iVar201 <= 2)
				{
					iVar1 = 0;
					StringCopy(&Var202, "mcvbkt", 16);
					StringConCat(&Var202, "f", 16);
					StringIntConCat(&Var202, iVar201, 16);
					__LIB_18__::func_404(&Var202, &iVar1, &iVar5, &(uVar35[iVar201]), bVar0, 0, -2340845);
					Global_4980736.f_5742[bVar0 /*442*/].f_323[iVar201] = iVar1;
					iVar201++;
				}
			}
			else
			{
				Global_4980736.f_5742[bVar0 /*442*/].f_323[0] = DATAFILE::DATAARRAY_GET_INT(uVar35[0], bVar0);
			}
			Global_4980736.f_5742[bVar0 /*442*/].f_222 = DATAFILE::DATAARRAY_GET_INT(uVar39, bVar0);
			Global_4980736.f_5742[bVar0 /*442*/].f_234 = DATAFILE::DATAARRAY_GET_INT(uVar38, bVar0);
			Global_4980736.f_5742[bVar0 /*442*/].f_223 = DATAFILE::DATAARRAY_GET_INT(iVar40, bVar0);
			Global_4980736.f_5742[bVar0 /*442*/].f_224 = DATAFILE::DATAARRAY_GET_INT(iVar41, bVar0);
			Global_4980736.f_5742[bVar0 /*442*/].f_225 = DATAFILE::DATAARRAY_GET_INT(iVar42, bVar0);
			Global_4980736.f_5742[bVar0 /*442*/].f_226 = DATAFILE::DATAARRAY_GET_INT(iVar43, bVar0);
			Global_4980736.f_5742[bVar0 /*442*/].f_30.f_9 = DATAFILE::DATAARRAY_GET_FLOAT(iVar45, bVar0);
			Global_4980736.f_5742[bVar0 /*442*/].f_30.f_11 = DATAFILE::DATAARRAY_GET_INT(iVar46, bVar0);
			Global_4980736.f_5742[bVar0 /*442*/].f_319 = DATAFILE::DATAARRAY_GET_INT(iVar44, bVar0);
			Global_4980736.f_5742[bVar0 /*442*/].f_320 = DATAFILE::DATAARRAY_GET_INT(iVar47, bVar0);
			Global_4980736.f_5742[bVar0 /*442*/].f_235 = DATAFILE::DATAARRAY_GET_FLOAT(uVar58, bVar0);
			Global_4980736.f_5742[bVar0 /*442*/].f_327 = DATAFILE::DATAARRAY_GET_INT(iVar48, bVar0);
			Global_4980736.f_5742[bVar0 /*442*/].f_328 = DATAFILE::DATAARRAY_GET_INT(iVar49, bVar0);
			Global_4980736.f_5742[bVar0 /*442*/].f_329 = DATAFILE::DATAARRAY_GET_INT(iVar50, bVar0);
			Global_4980736.f_5742[bVar0 /*442*/].f_330 = DATAFILE::DATAARRAY_GET_INT(iVar51, bVar0);
			Global_4980736.f_5742[bVar0 /*442*/].f_331 = DATAFILE::DATAARRAY_GET_INT(iVar52, bVar0);
			Global_4980736.f_5742[bVar0 /*442*/].f_332 = DATAFILE::DATAARRAY_GET_INT(iVar53, bVar0);
			Global_4980736.f_5742[bVar0 /*442*/].f_333 = DATAFILE::DATAARRAY_GET_FLOAT(iVar54, bVar0);
			Global_4980736.f_5742[bVar0 /*442*/].f_334 = DATAFILE::DATAARRAY_GET_FLOAT(iVar55, bVar0);
			Global_4980736.f_5742[bVar0 /*442*/].f_335 = DATAFILE::DATAARRAY_GET_FLOAT(iVar56, bVar0);
			Global_4980736.f_5742[bVar0 /*442*/].f_336 = DATAFILE::DATAARRAY_GET_FLOAT(iVar57, bVar0);
			if (iVar161 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar161, bVar0) == 2)
			{
				Global_4980736.f_5742[bVar0 /*442*/].f_337 = DATAFILE::DATAARRAY_GET_INT(iVar161, bVar0);
			}
			else
			{
				Global_4980736.f_5742[bVar0 /*442*/].f_337 = -1;
			}
			if (iVar162 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar162, bVar0) == 2)
			{
				Global_4980736.f_5742[bVar0 /*442*/].f_338 = DATAFILE::DATAARRAY_GET_INT(iVar162, bVar0);
			}
			else
			{
				Global_4980736.f_5742[bVar0 /*442*/].f_338 = 0;
			}
			__LIB_18__::func_404("obpmi", &(Global_4980736.f_5742[bVar0 /*442*/].f_411), &iVar5, &iVar163, bVar0, -1, -1);
			__LIB_18__::func_404("oPRQMG", &(Global_4980736.f_5742[bVar0 /*442*/].f_397), &iVar5, &iVar165, bVar0, -1, -2340845);
			__LIB_18__::func_404("oPRQC", &(Global_4980736.f_5742[bVar0 /*442*/].f_404), &iVar5, &iVar166, bVar0, 1, -2340845);
			__LIB_18__::func_401("oPRQRA", &(Global_4980736.f_5742[bVar0 /*442*/].f_398), 4, &iVar5, &iVar168, bVar0, 0, -2340845);
			iVar203 = -1;
			__LIB_18__::func_404("oPRQR", &iVar203, &iVar5, &iVar167, bVar0, -1, -2340845);
			if (iVar203 != -1)
			{
				__LIB_23__::func_110(&(Global_4980736.f_5742[bVar0 /*442*/].f_398), iVar203);
			}
			__LIB_18__::func_404("oPRQRH", &(Global_4980736.f_5742[bVar0 /*442*/].f_403), &iVar5, &iVar169, bVar0, -1, -2340845);
			__LIB_18__::func_401("oPRQRB", &(Global_4980736.f_5742[bVar0 /*442*/].f_405), 4, &iVar5, &iVar170, bVar0, 0, -2340845);
			__LIB_18__::func_404("oTPACi", &(Global_4980736.f_5742[bVar0 /*442*/].f_410), &iVar5, &iVar164, bVar0, -1, -1);
			__LIB_18__::func_606(&iVar5, &iVar171, &(Global_4980736.f_5742[bVar0 /*442*/].f_205), bVar0);
			__LIB_18__::func_610(&iVar5, &iVar172, &(Global_4980736.f_5742[bVar0 /*442*/].f_285), bVar0);
			__LIB_18__::func_667(&Var173, &iVar5, &(Global_4980736.f_5742[bVar0 /*442*/].f_339), bVar0, 3);
			__LIB_18__::func_404("cdOcbzi", &(Global_4980736.f_5742[bVar0 /*442*/].f_421.f_1), &iVar5, &(Var192.f_1), bVar0, -1, -2340845);
			__LIB_18__::func_404("cdOnopr", &(Global_4980736.f_5742[bVar0 /*442*/].f_421.f_2), &iVar5, &(Var192.f_2), bVar0, 1, -2340845);
			__LIB_18__::func_404("cdOre", &(Global_4980736.f_5742[bVar0 /*442*/].f_421.f_3), &iVar5, &(Var192.f_3), bVar0, 0, -2340845);
			iVar204 = Global_4980736.f_5742[bVar0 /*442*/].f_421;
			__LIB_18__::func_404("cdOsel", &iVar204, &iVar5, &Var192, bVar0, -1, -2340845);
			Global_4980736.f_5742[bVar0 /*442*/].f_421 = iVar204;
			__LIB_18__::func_404("cdObs", &(Global_4980736.f_5742[bVar0 /*442*/].f_421.f_4), &iVar5, &(Var192.f_4), bVar0, 0, -2340845);
			__LIB_18__::func_404("csto0", &(Global_4980736.f_5742[bVar0 /*442*/].f_418), &iVar5, &iVar193, bVar0, 0, -2340845);
			__LIB_18__::func_404("csto1", &(Global_4980736.f_5742[bVar0 /*442*/].f_419), &iVar5, &iVar194, bVar0, -1, -2340845);
			__LIB_18__::func_404("csto2", &(Global_4980736.f_5742[bVar0 /*442*/].f_420), &iVar5, &iVar195, bVar0, -1, -2340845);
			__LIB_18__::func_404("oAsAPRE0", &(Global_4980736.f_5742[bVar0 /*442*/].f_176), &iVar5, &Var198, bVar0, -1, -2340845);
			__LIB_18__::func_404("oAsAPRE1", &(Global_4980736.f_5742[bVar0 /*442*/].f_177), &iVar5, &(Var198.f_1), bVar0, -1, -2340845);
			__LIB_18__::func_404("oAsAPRE2", &(Global_4980736.f_5742[bVar0 /*442*/].f_180), &iVar5, &(Var198.f_2), bVar0, -1, -2340845);
			__LIB_18__::func_404("oAsAPRE3", &(Global_4980736.f_5742[bVar0 /*442*/].f_182), &iVar5, &(Var198.f_3), bVar0, -1, -2340845);
			__LIB_18__::func_404("ocapr", &(Global_4980736.f_5742[bVar0 /*442*/].f_428), &iVar5, &iVar197, bVar0, 0, -2340845);
			__LIB_18__::func_404("osecc", &(Global_4980736.f_5742[bVar0 /*442*/].f_429), &iVar5, &iVar196, bVar0, -1, -2340845);
			if (iVar140 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar140, bVar0) == 2)
			{
				if (DATAFILE::DATAARRAY_GET_INT(iVar140, bVar0) == 1)
				{
					if (!BitTest(Global_4980736.f_5742[bVar0 /*442*/].f_120, 4))
					{
						MISC::SET_BIT(&(Global_4980736.f_5742[bVar0 /*442*/].f_120), 4);
					}
				}
			}
			if (__LIB_16__::func_683(1) || __LIB_0__::func_998())
			{
				if ((((iVar8 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar8, bVar0) == 3) && DATAFILE::DATAARRAY_GET_TYPE(uVar10, bVar0) == 3) && DATAFILE::DATAARRAY_GET_TYPE(uVar11, bVar0) == 2) && DATAFILE::DATAARRAY_GET_TYPE(uVar12, bVar0) == 2)
				{
					Global_4980736.f_5742[bVar0 /*442*/].f_7 = DATAFILE::DATAARRAY_GET_FLOAT(iVar8, bVar0);
					Global_4980736.f_5742[bVar0 /*442*/].f_8 = DATAFILE::DATAARRAY_GET_FLOAT(uVar10, bVar0);
					Global_4980736.f_5742[bVar0 /*442*/].f_9 = DATAFILE::DATAARRAY_GET_INT(uVar11, bVar0);
					Global_4980736.f_5742[bVar0 /*442*/].f_10 = DATAFILE::DATAARRAY_GET_INT(uVar12, bVar0);
				}
				else
				{
					Global_4980736.f_5742[bVar0 /*442*/].f_7 = 50f;
					Global_4980736.f_5742[bVar0 /*442*/].f_8 = 0f;
					Global_4980736.f_5742[bVar0 /*442*/].f_9 = 0;
					Global_4980736.f_5742[bVar0 /*442*/].f_10 = -1;
				}
				if (iVar9 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar9, bVar0) == 3)
				{
					Global_4980736.f_5742[bVar0 /*442*/].f_290 = DATAFILE::DATAARRAY_GET_FLOAT(iVar9, bVar0);
				}
				else
				{
					Global_4980736.f_5742[bVar0 /*442*/].f_290 = 0f;
				}
				if (iVar17 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar17, bVar0) == 3)
				{
					Global_4980736.f_5742[bVar0 /*442*/].f_293 = DATAFILE::DATAARRAY_GET_FLOAT(iVar17, bVar0);
				}
				else
				{
					Global_4980736.f_5742[bVar0 /*442*/].f_293 = 0f;
				}
				if (iVar16 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar16, bVar0) == 2)
				{
					Global_4980736.f_5742[bVar0 /*442*/].f_30.f_7 = DATAFILE::DATAARRAY_GET_INT(iVar16, bVar0);
				}
				else if (__LIB_1__::func_823())
				{
					Global_4980736.f_5742[bVar0 /*442*/].f_30.f_7 = 0;
				}
				if (iVar15 != 0)
				{
					if (DATAFILE::DATAARRAY_GET_TYPE(iVar15, bVar0) == 2)
					{
						Global_4980736.f_5742[bVar0 /*442*/].f_30.f_8 = SYSTEM::TO_FLOAT(DATAFILE::DATAARRAY_GET_INT(iVar15, bVar0));
					}
					else if (DATAFILE::DATAARRAY_GET_TYPE(iVar15, bVar0) == 3)
					{
						Global_4980736.f_5742[bVar0 /*442*/].f_30.f_8 = DATAFILE::DATAARRAY_GET_FLOAT(iVar15, bVar0);
					}
				}
				else
				{
					Global_4980736.f_5742[bVar0 /*442*/].f_30.f_8 = 0f;
				}
				if ((iVar13 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar13, bVar0) == 5) && DATAFILE::DATAARRAY_GET_TYPE(uVar14, bVar0) == 3)
				{
					Global_4980736.f_5742[bVar0 /*442*/].f_11 = { DATAFILE::DATAARRAY_GET_VECTOR(iVar13, bVar0) };
					Global_4980736.f_5742[bVar0 /*442*/].f_14 = DATAFILE::DATAARRAY_GET_FLOAT(uVar14, bVar0);
				}
				else
				{
					Global_4980736.f_5742[bVar0 /*442*/].f_11 = { 0f, 0f, 0f };
					Global_4980736.f_5742[bVar0 /*442*/].f_14 = 0f;
				}
				__LIB_18__::func_616(&iVar5, &Var199, &(Global_4980736.f_5742[bVar0 /*442*/].f_269), bVar0);
				__LIB_18__::func_615(&iVar5, &iVar200, &(Global_4980736.f_5742[bVar0 /*442*/].f_263), bVar0);
				__LIB_17__::func_988(&(Global_4980736.f_5742[bVar0 /*442*/].f_236), bVar0, &uVar89, &uVar90);
				__LIB_17__::func_987(&(Global_4980736.f_5742[bVar0 /*442*/].f_236.f_2), bVar0, &uVar91, &uVar93, &uVar92, &uVar94, &uVar95, &uVar96, &uVar97, &uVar98, &uVar99);
				__LIB_18__::func_1(bVar0);
				if (iVar100 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar100, bVar0) == 2)
				{
					Global_4980736.f_5742[bVar0 /*442*/].f_291 = DATAFILE::DATAARRAY_GET_INT(iVar100, bVar0);
				}
				else
				{
					Global_4980736.f_5742[bVar0 /*442*/].f_291 = -1;
				}
				if (iVar101 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar101, bVar0) == 2)
				{
					Global_4980736.f_5742[bVar0 /*442*/].f_314 = DATAFILE::DATAARRAY_GET_INT(iVar101, bVar0);
				}
				else
				{
					Global_4980736.f_5742[bVar0 /*442*/].f_314 = -1;
				}
				if (iVar102 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar102, bVar0) == 2)
				{
					Global_4980736.f_5742[bVar0 /*442*/].f_315 = DATAFILE::DATAARRAY_GET_INT(iVar102, bVar0);
				}
				else
				{
					Global_4980736.f_5742[bVar0 /*442*/].f_315 = -1;
				}
				if (iVar103 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar103, bVar0) == 2)
				{
					Global_4980736.f_5742[bVar0 /*442*/].f_316 = DATAFILE::DATAARRAY_GET_INT(iVar103, bVar0);
				}
				else
				{
					Global_4980736.f_5742[bVar0 /*442*/].f_316 = -1;
				}
				if (iVar104 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar104, bVar0) == 2)
				{
					Global_4980736.f_5742[bVar0 /*442*/].f_317 = DATAFILE::DATAARRAY_GET_INT(iVar104, bVar0);
				}
				else
				{
					Global_4980736.f_5742[bVar0 /*442*/].f_317 = -1;
				}
				__LIB_18__::func_404("ocscid", &(Global_4980736.f_5742[bVar0 /*442*/].f_318), &iVar5, &iVar105, bVar0, 0, -2340845);
				if (iVar106 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar106, bVar0) == 4)
				{
					StringCopy(&(Global_4980736.f_5742[bVar0 /*442*/].f_297), DATAFILE::DATAARRAY_GET_STRING(iVar106, bVar0), 64);
				}
				else
				{
					StringCopy(&(Global_4980736.f_5742[bVar0 /*442*/].f_297), "", 64);
				}
				if (iVar110 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar110, bVar0) == 2)
				{
					Global_4980736.f_5742[bVar0 /*442*/].f_313 = DATAFILE::DATAARRAY_GET_INT(iVar110, bVar0);
				}
				else
				{
					Global_4980736.f_5742[bVar0 /*442*/].f_313 = -1;
				}
				if (iVar107 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar107, bVar0) == 2)
				{
					Global_4980736.f_5742[bVar0 /*442*/].f_292 = DATAFILE::DATAARRAY_GET_INT(iVar107, bVar0);
				}
				else
				{
					Global_4980736.f_5742[bVar0 /*442*/].f_292 = -1;
				}
				if (iVar108 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar108, bVar0) == 2)
				{
					Global_4980736.f_5742[bVar0 /*442*/].f_28 = DATAFILE::DATAARRAY_GET_INT(iVar108, bVar0);
				}
				else
				{
					Global_4980736.f_5742[bVar0 /*442*/].f_28 = 0;
				}
				if (iVar109 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar109, bVar0) == 2)
				{
					Global_4980736.f_5742[bVar0 /*442*/].f_29 = DATAFILE::DATAARRAY_GET_INT(iVar109, bVar0);
				}
				else
				{
					Global_4980736.f_5742[bVar0 /*442*/].f_29 = 0;
				}
				if (iVar111 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar111, bVar0) == 2)
				{
					Global_4980736.f_5742[bVar0 /*442*/].f_143 = DATAFILE::DATAARRAY_GET_INT(iVar111, bVar0);
				}
				else
				{
					Global_4980736.f_5742[bVar0 /*442*/].f_143 = 0;
				}
				if (iVar112 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar112, bVar0) == 2)
				{
					Global_4980736.f_5742[bVar0 /*442*/].f_144 = DATAFILE::DATAARRAY_GET_INT(iVar112, bVar0);
				}
				else
				{
					Global_4980736.f_5742[bVar0 /*442*/].f_144 = 0;
				}
				if (iVar113 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar113, bVar0) == 2)
				{
					Global_4980736.f_5742[bVar0 /*442*/].f_145 = DATAFILE::DATAARRAY_GET_INT(iVar113, bVar0);
				}
				else
				{
					Global_4980736.f_5742[bVar0 /*442*/].f_145 = -1;
				}
				if (iVar114 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar114, bVar0) == 2)
				{
					Global_4980736.f_5742[bVar0 /*442*/].f_147 = DATAFILE::DATAARRAY_GET_INT(iVar114, bVar0);
				}
				else
				{
					Global_4980736.f_5742[bVar0 /*442*/].f_147 = -1;
				}
				__LIB_18__::func_404("objIvh", &(Global_4980736.f_5742[bVar0 /*442*/].f_148), &iVar5, &iVar115, bVar0, -1, -2340845);
				__LIB_18__::func_404("objIao", &(Global_4980736.f_5742[bVar0 /*442*/].f_149), &iVar5, &iVar116, bVar0, -1, -2340845);
				StringCopy(&(Global_4980736.f_5742[bVar0 /*442*/].f_150), __LIB_18__::func_412("objiPr", &iVar5, &iVar117, bVar0, "", ""), 16);
				Global_4980736.f_5742[bVar0 /*442*/].f_126 = DATAFILE::DATAARRAY_GET_INT(uVar36, bVar0);
				if (iVar37 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar37, bVar0) == 2)
				{
					Global_4980736.f_5742[bVar0 /*442*/].f_146 = DATAFILE::DATAARRAY_GET_INT(iVar37, bVar0);
				}
				else
				{
					Global_4980736.f_5742[bVar0 /*442*/].f_146 = -1;
				}
				if (iVar154 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar154, bVar0) == 5)
				{
					Global_4980736.f_5742[bVar0 /*442*/].f_294 = { DATAFILE::DATAARRAY_GET_VECTOR(iVar154, bVar0) };
				}
				else
				{
					Global_4980736.f_5742[bVar0 /*442*/].f_294 = { 0f, 0f, 0f };
				}
				Global_4980736.f_5742[bVar0 /*442*/].f_163 = DATAFILE::DATAARRAY_GET_INT(uVar59, bVar0);
				Global_4980736.f_5742[bVar0 /*442*/].f_155 = DATAFILE::DATAARRAY_GET_INT(uVar61, bVar0);
				Global_4980736.f_5742[bVar0 /*442*/].f_167 = DATAFILE::DATAARRAY_GET_INT(uVar62, bVar0);
				Global_4980736.f_5742[bVar0 /*442*/].f_171 = DATAFILE::DATAARRAY_GET_INT(uVar63, bVar0);
				Global_4980736.f_5742[bVar0 /*442*/].f_175 = DATAFILE::DATAARRAY_GET_INT(uVar64, bVar0);
				if (iVar65 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar65, bVar0) == 2)
				{
					Global_4980736.f_5742[bVar0 /*442*/].f_164 = DATAFILE::DATAARRAY_GET_INT(iVar65, bVar0);
					Global_4980736.f_5742[bVar0 /*442*/].f_156 = DATAFILE::DATAARRAY_GET_INT(uVar67, bVar0);
					Global_4980736.f_5742[bVar0 /*442*/].f_168 = DATAFILE::DATAARRAY_GET_INT(uVar68, bVar0);
					Global_4980736.f_5742[bVar0 /*442*/].f_172 = DATAFILE::DATAARRAY_GET_INT(uVar69, bVar0);
					Global_4980736.f_5742[bVar0 /*442*/].f_177 = DATAFILE::DATAARRAY_GET_INT(uVar70, bVar0);
					Global_4980736.f_5742[bVar0 /*442*/].f_165 = DATAFILE::DATAARRAY_GET_INT(uVar71, bVar0);
					Global_4980736.f_5742[bVar0 /*442*/].f_157 = DATAFILE::DATAARRAY_GET_INT(uVar73, bVar0);
					Global_4980736.f_5742[bVar0 /*442*/].f_169 = DATAFILE::DATAARRAY_GET_INT(uVar74, bVar0);
					Global_4980736.f_5742[bVar0 /*442*/].f_173 = DATAFILE::DATAARRAY_GET_INT(uVar75, bVar0);
					Global_4980736.f_5742[bVar0 /*442*/].f_179 = DATAFILE::DATAARRAY_GET_INT(uVar76, bVar0);
					Global_4980736.f_5742[bVar0 /*442*/].f_166 = DATAFILE::DATAARRAY_GET_INT(uVar77, bVar0);
					Global_4980736.f_5742[bVar0 /*442*/].f_158 = DATAFILE::DATAARRAY_GET_INT(uVar79, bVar0);
					Global_4980736.f_5742[bVar0 /*442*/].f_170 = DATAFILE::DATAARRAY_GET_INT(uVar80, bVar0);
					Global_4980736.f_5742[bVar0 /*442*/].f_174 = DATAFILE::DATAARRAY_GET_INT(uVar81, bVar0);
					Global_4980736.f_5742[bVar0 /*442*/].f_181 = DATAFILE::DATAARRAY_GET_INT(uVar82, bVar0);
				}
				__LIB_18__::func_404("objastA", &(Global_4980736.f_5742[bVar0 /*442*/].f_159), &iVar5, &iVar60, bVar0, 0, -2340845);
				__LIB_18__::func_404("objastB", &(Global_4980736.f_5742[bVar0 /*442*/].f_160), &iVar5, &iVar66, bVar0, 0, -2340845);
				__LIB_18__::func_404("objastC", &(Global_4980736.f_5742[bVar0 /*442*/].f_161), &iVar5, &iVar72, bVar0, 0, -2340845);
				__LIB_18__::func_404("objastD", &(Global_4980736.f_5742[bVar0 /*442*/].f_162), &iVar5, &iVar78, bVar0, 0, -2340845);
				__LIB_18__::func_404("hlt", &(Global_4980736.f_5742[bVar0 /*442*/].f_27), &iVar5, &iVar83, bVar0, 100, 0);
				Global_4980736.f_5742[bVar0 /*442*/].f_30.f_1 = DATAFILE::DATAARRAY_GET_INT(uVar85, bVar0);
				Global_4980736.f_5742[bVar0 /*442*/].f_114 = DATAFILE::DATAARRAY_GET_INT(uVar139, bVar0);
				__LIB_18__::func_404("objMinigame_", &(Global_4980736.f_5742[bVar0 /*442*/].f_125), &iVar5, &iVar84, bVar0, -1, -2340845);
				if (iVar86 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar86, bVar0) == 2)
				{
					Global_4980736.f_5742[bVar0 /*442*/].f_30.f_2 = DATAFILE::DATAARRAY_GET_INT(iVar86, bVar0);
				}
				else if (__LIB_1__::func_823())
				{
					Global_4980736.f_5742[bVar0 /*442*/].f_30.f_2 = 0;
				}
				if (iVar87 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar87, bVar0) == 3)
				{
					Global_4980736.f_5742[bVar0 /*442*/].f_30.f_6 = DATAFILE::DATAARRAY_GET_FLOAT(iVar87, bVar0);
				}
				else if (__LIB_1__::func_823())
				{
					Global_4980736.f_5742[bVar0 /*442*/].f_30.f_6 = 0.8f;
				}
				if (iVar88 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar88, bVar0) == 2)
				{
					Global_4980736.f_5742[bVar0 /*442*/].f_227 = DATAFILE::DATAARRAY_GET_INT(iVar88, bVar0);
				}
				else
				{
					Global_4980736.f_5742[bVar0 /*442*/].f_227 = 1;
				}
				if (iVar119 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar119, bVar0) == 2)
				{
					Global_4980736.f_5742[bVar0 /*442*/].f_133 = DATAFILE::DATAARRAY_GET_INT(iVar119, bVar0);
				}
				else
				{
					Global_4980736.f_5742[bVar0 /*442*/].f_133 = -1;
				}
				if (iVar118 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar118, bVar0) == 2)
				{
					Global_4980736.f_5742[bVar0 /*442*/].f_134 = DATAFILE::DATAARRAY_GET_INT(iVar118, bVar0);
				}
				else
				{
					Global_4980736.f_5742[bVar0 /*442*/].f_134 = -1;
				}
				if (iVar120 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar120, bVar0) == 2)
				{
					Global_4980736.f_5742[bVar0 /*442*/].f_135 = DATAFILE::DATAARRAY_GET_INT(iVar120, bVar0);
				}
				else
				{
					Global_4980736.f_5742[bVar0 /*442*/].f_135 = -1;
				}
				if (iVar121 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar121, bVar0) == 2)
				{
					Global_4980736.f_5742[bVar0 /*442*/].f_154 = DATAFILE::DATAARRAY_GET_INT(iVar121, bVar0);
				}
				else
				{
					Global_4980736.f_5742[bVar0 /*442*/].f_154 = -1;
				}
				if (iVar122 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar122, bVar0) == 2)
				{
					Global_4980736.f_5742[bVar0 /*442*/].f_68 = DATAFILE::DATAARRAY_GET_INT(iVar122, bVar0);
				}
				else
				{
					Global_4980736.f_5742[bVar0 /*442*/].f_68 = 0;
				}
				if (iVar123 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar123, bVar0) == 2)
				{
					Global_4980736.f_5742[bVar0 /*442*/].f_69 = DATAFILE::DATAARRAY_GET_INT(iVar123, bVar0);
				}
				else
				{
					Global_4980736.f_5742[bVar0 /*442*/].f_69 = 0;
				}
				iVar3 = 0;
				while (iVar3 <= 19)
				{
					StringCopy(&sVar4, "1owb", 8);
					StringIntConCat(&sVar4, iVar3, 8);
					__LIB_18__::func_404(&sVar4, &(Global_4980736.f_5742[bVar0 /*442*/].f_70[iVar3]), &iVar5, &(uVar124[iVar3]), bVar0, 0, 0);
					iVar3++;
				}
				__LIB_18__::func_404("obsgrd", &(Global_4980736.f_5742[bVar0 /*442*/].f_91), &iVar5, &iVar125, bVar0, 0, -2340845);
				__LIB_18__::func_401("obssgrd", &(Global_4980736.f_5742[bVar0 /*442*/].f_92), 20, &iVar5, &iVar126, bVar0, 0, -2340845);
				__LIB_18__::func_404("pswn_gA", &(Global_4980736.f_5742[bVar0 /*442*/].f_113), &iVar5, &iVar127, bVar0, 0, -2340845);
				if (iVar128 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar128, bVar0) == 2)
				{
					Global_4980736.f_5742[bVar0 /*442*/].f_202 = DATAFILE::DATAARRAY_GET_INT(iVar128, bVar0);
				}
				else
				{
					Global_4980736.f_5742[bVar0 /*442*/].f_202 = -1;
				}
				__LIB_18__::func_404("objCT_L", &(Global_4980736.f_5742[bVar0 /*442*/].f_203), &iVar5, &iVar129, bVar0, -1, -2340845);
				__LIB_18__::func_404("objCT_R", &(Global_4980736.f_5742[bVar0 /*442*/].f_204), &iVar5, &iVar130, bVar0, -1, -2340845);
				if (iVar131 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar131, bVar0) == 2)
				{
					Global_4980736.f_5742[bVar0 /*442*/].f_228 = DATAFILE::DATAARRAY_GET_INT(iVar131, bVar0);
				}
				else
				{
					Global_4980736.f_5742[bVar0 /*442*/].f_228 = 0;
				}
				iVar3 = 0;
				while (iVar3 <= 3)
				{
					StringCopy(&sVar4, "Oror_", 8);
					StringIntConCat(&sVar4, iVar3, 8);
					__LIB_22__::func_485(&sVar4, Global_4980736.f_5742[bVar0 /*442*/].f_229[iVar3], &iVar5, &(uVar132[iVar3]), bVar0, 0);
					iVar3++;
				}
				if (iVar133 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar133, bVar0) == 2)
				{
					Global_4980736.f_5742[bVar0 /*442*/].f_214 = DATAFILE::DATAARRAY_GET_INT(iVar133, bVar0);
				}
				else
				{
					Global_4980736.f_5742[bVar0 /*442*/].f_214 = -1;
				}
				if (iVar134 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar134, bVar0) == 2)
				{
					Global_4980736.f_5742[bVar0 /*442*/].f_215 = DATAFILE::DATAARRAY_GET_INT(iVar134, bVar0);
				}
				else
				{
					Global_4980736.f_5742[bVar0 /*442*/].f_215 = -1;
				}
				if (iVar135 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar135, bVar0) == 2)
				{
					Global_4980736.f_5742[bVar0 /*442*/].f_216 = DATAFILE::DATAARRAY_GET_INT(iVar135, bVar0);
				}
				else
				{
					Global_4980736.f_5742[bVar0 /*442*/].f_216 = -1;
				}
				if (iVar136 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar136, bVar0) == 2)
				{
					Global_4980736.f_5742[bVar0 /*442*/].f_217 = DATAFILE::DATAARRAY_GET_INT(iVar136, bVar0);
				}
				else
				{
					Global_4980736.f_5742[bVar0 /*442*/].f_217 = -1;
				}
				if ((iVar137 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar137, bVar0) == 5) && DATAFILE::DATAARRAY_GET_TYPE(uVar138, bVar0) == 2)
				{
					Global_4980736.f_5742[bVar0 /*442*/].f_218 = { DATAFILE::DATAARRAY_GET_VECTOR(iVar137, bVar0) };
					Global_4980736.f_5742[bVar0 /*442*/].f_221 = DATAFILE::DATAARRAY_GET_INT(uVar138, bVar0);
				}
				else
				{
					Global_4980736.f_5742[bVar0 /*442*/].f_218 = { 0f, 0f, 0f };
					Global_4980736.f_5742[bVar0 /*442*/].f_221 = 0;
				}
				if (iVar141 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar141, bVar0) == 2)
				{
					Global_4980736.f_5742[bVar0 /*442*/].f_136 = DATAFILE::DATAARRAY_GET_INT(iVar141, bVar0);
				}
				else
				{
					Global_4980736.f_5742[bVar0 /*442*/].f_136 = 0;
				}
				__LIB_18__::func_402("objBPURng", &(Global_4980736.f_5742[bVar0 /*442*/].f_137), &iVar5, &iVar142, bVar0, 0f, -904994889);
				__LIB_18__::func_403("objDPOFF_Pos", &(Global_4980736.f_5742[bVar0 /*442*/].f_138), &iVar5, &iVar143, bVar0, 0f, 0f, 0f, 0f, 0f, 0f);
				__LIB_18__::func_402("objDPOFF_Rad", &(Global_4980736.f_5742[bVar0 /*442*/].f_141), &iVar5, &iVar144, bVar0, 0f, -904994889);
				__LIB_18__::func_402("objDPOFF_VRad", &(Global_4980736.f_5742[bVar0 /*442*/].f_142), &iVar5, &iVar145, bVar0, 0f, -904994889);
				if (iVar146 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar146, bVar0) == 2)
				{
					Global_4980736.f_5742[bVar0 /*442*/].f_193.f_6 = DATAFILE::DATAARRAY_GET_INT(iVar146, bVar0);
				}
				else
				{
					Global_4980736.f_5742[bVar0 /*442*/].f_193.f_6 = -1;
				}
				if (iVar147 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar147, bVar0) == 2)
				{
					Global_4980736.f_5742[bVar0 /*442*/].f_193.f_7 = DATAFILE::DATAARRAY_GET_INT(iVar147, bVar0);
				}
				else
				{
					Global_4980736.f_5742[bVar0 /*442*/].f_193.f_7 = -1;
				}
				if (iVar148 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar148, bVar0) == 2)
				{
					Global_4980736.f_5742[bVar0 /*442*/].f_193.f_2 = DATAFILE::DATAARRAY_GET_INT(iVar148, bVar0);
				}
				else
				{
					Global_4980736.f_5742[bVar0 /*442*/].f_193.f_2 = -1;
				}
				if (iVar149 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar149, bVar0) == 2)
				{
					Global_4980736.f_5742[bVar0 /*442*/].f_193 = DATAFILE::DATAARRAY_GET_INT(iVar149, bVar0);
				}
				else
				{
					Global_4980736.f_5742[bVar0 /*442*/].f_193 = -1;
				}
				if (iVar150 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar150, bVar0) == 2)
				{
					Global_4980736.f_5742[bVar0 /*442*/].f_193.f_1 = DATAFILE::DATAARRAY_GET_INT(iVar150, bVar0);
				}
				else
				{
					Global_4980736.f_5742[bVar0 /*442*/].f_193.f_1 = -1;
				}
				if (iVar151 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar151, bVar0) == 2)
				{
					Global_4980736.f_5742[bVar0 /*442*/].f_193.f_3 = DATAFILE::DATAARRAY_GET_INT(iVar151, bVar0);
				}
				else
				{
					Global_4980736.f_5742[bVar0 /*442*/].f_193.f_3 = -1;
				}
				if (iVar152 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar152, bVar0) == 2)
				{
					Global_4980736.f_5742[bVar0 /*442*/].f_193.f_4 = DATAFILE::DATAARRAY_GET_INT(iVar152, bVar0);
				}
				else
				{
					Global_4980736.f_5742[bVar0 /*442*/].f_193.f_4 = -1;
				}
				if (iVar153 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar153, bVar0) == 2)
				{
					Global_4980736.f_5742[bVar0 /*442*/].f_193.f_5 = DATAFILE::DATAARRAY_GET_INT(iVar153, bVar0);
				}
				else
				{
					Global_4980736.f_5742[bVar0 /*442*/].f_193.f_5 = -1;
				}
				if (iVar40 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar40, bVar0) == 2)
				{
					Global_4980736.f_5742[bVar0 /*442*/].f_223 = DATAFILE::DATAARRAY_GET_INT(iVar40, bVar0);
				}
				else
				{
					Global_4980736.f_5742[bVar0 /*442*/].f_223 = 0;
				}
				if (iVar41 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar41, bVar0) == 2)
				{
					Global_4980736.f_5742[bVar0 /*442*/].f_224 = DATAFILE::DATAARRAY_GET_INT(iVar41, bVar0);
				}
				else
				{
					Global_4980736.f_5742[bVar0 /*442*/].f_224 = 0;
				}
				if (iVar42 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar42, bVar0) == 2)
				{
					Global_4980736.f_5742[bVar0 /*442*/].f_225 = DATAFILE::DATAARRAY_GET_INT(iVar42, bVar0);
				}
				else
				{
					Global_4980736.f_5742[bVar0 /*442*/].f_225 = 0;
				}
				if (iVar43 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar43, bVar0) == 2)
				{
					Global_4980736.f_5742[bVar0 /*442*/].f_226 = DATAFILE::DATAARRAY_GET_INT(iVar43, bVar0);
				}
				else
				{
					Global_4980736.f_5742[bVar0 /*442*/].f_226 = 0;
				}
				if (iVar44 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar44, bVar0) == 2)
				{
					Global_4980736.f_5742[bVar0 /*442*/].f_319 = DATAFILE::DATAARRAY_GET_INT(iVar44, bVar0);
				}
				else
				{
					Global_4980736.f_5742[bVar0 /*442*/].f_319 = 0;
				}
				if (iVar47 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar47, bVar0) == 2)
				{
					Global_4980736.f_5742[bVar0 /*442*/].f_320 = DATAFILE::DATAARRAY_GET_INT(iVar47, bVar0);
				}
				else
				{
					Global_4980736.f_5742[bVar0 /*442*/].f_320 = 0;
				}
				if (iVar45 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar45, bVar0) == 3)
				{
					Global_4980736.f_5742[bVar0 /*442*/].f_30.f_9 = DATAFILE::DATAARRAY_GET_FLOAT(iVar45, bVar0);
				}
				else if (__LIB_1__::func_823())
				{
					Global_4980736.f_5742[bVar0 /*442*/].f_30.f_9 = 0f;
				}
				if (iVar46 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar46, bVar0) == 2)
				{
					Global_4980736.f_5742[bVar0 /*442*/].f_30.f_11 = DATAFILE::DATAARRAY_GET_INT(iVar46, bVar0);
				}
				else if (__LIB_1__::func_823())
				{
					Global_4980736.f_5742[bVar0 /*442*/].f_30.f_11 = 0;
				}
				if (iVar48 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar48, bVar0) == 2)
				{
					Global_4980736.f_5742[bVar0 /*442*/].f_327 = DATAFILE::DATAARRAY_GET_INT(iVar48, bVar0);
				}
				else
				{
					Global_4980736.f_5742[bVar0 /*442*/].f_327 = -1;
				}
				if (iVar49 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar49, bVar0) == 2)
				{
					Global_4980736.f_5742[bVar0 /*442*/].f_328 = DATAFILE::DATAARRAY_GET_INT(iVar49, bVar0);
				}
				else
				{
					Global_4980736.f_5742[bVar0 /*442*/].f_328 = -1;
				}
				if (iVar50 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar50, bVar0) == 2)
				{
					Global_4980736.f_5742[bVar0 /*442*/].f_329 = DATAFILE::DATAARRAY_GET_INT(iVar50, bVar0);
				}
				else
				{
					Global_4980736.f_5742[bVar0 /*442*/].f_329 = -1;
				}
				if (iVar51 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar51, bVar0) == 2)
				{
					Global_4980736.f_5742[bVar0 /*442*/].f_330 = DATAFILE::DATAARRAY_GET_INT(iVar51, bVar0);
				}
				else
				{
					Global_4980736.f_5742[bVar0 /*442*/].f_330 = 4;
				}
				if (iVar52 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar52, bVar0) == 2)
				{
					Global_4980736.f_5742[bVar0 /*442*/].f_331 = DATAFILE::DATAARRAY_GET_INT(iVar52, bVar0);
				}
				else
				{
					Global_4980736.f_5742[bVar0 /*442*/].f_331 = 4;
				}
				if (iVar53 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar53, bVar0) == 2)
				{
					Global_4980736.f_5742[bVar0 /*442*/].f_332 = DATAFILE::DATAARRAY_GET_INT(iVar53, bVar0);
				}
				else
				{
					Global_4980736.f_5742[bVar0 /*442*/].f_332 = 5;
				}
				if (iVar54 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar54, bVar0) == 3)
				{
					Global_4980736.f_5742[bVar0 /*442*/].f_333 = DATAFILE::DATAARRAY_GET_FLOAT(iVar54, bVar0);
				}
				else
				{
					Global_4980736.f_5742[bVar0 /*442*/].f_333 = 0.5f;
				}
				if (iVar55 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar55, bVar0) == 3)
				{
					Global_4980736.f_5742[bVar0 /*442*/].f_334 = DATAFILE::DATAARRAY_GET_FLOAT(iVar55, bVar0);
				}
				else
				{
					Global_4980736.f_5742[bVar0 /*442*/].f_334 = 0.5f;
				}
				if (iVar56 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar56, bVar0) == 3)
				{
					Global_4980736.f_5742[bVar0 /*442*/].f_335 = DATAFILE::DATAARRAY_GET_FLOAT(iVar56, bVar0);
				}
				else
				{
					Global_4980736.f_5742[bVar0 /*442*/].f_335 = 0.5f;
				}
				if (iVar57 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar57, bVar0) == 3)
				{
					Global_4980736.f_5742[bVar0 /*442*/].f_336 = DATAFILE::DATAARRAY_GET_FLOAT(iVar57, bVar0);
				}
				else
				{
					Global_4980736.f_5742[bVar0 /*442*/].f_336 = 0.5f;
				}
				iVar2 = 0;
				while (iVar2 <= (Global_4718592.f_593 - 1))
				{
					if (iVar2 < 4)
					{
						Global_4980736.f_5742[bVar0 /*442*/].f_16[iVar2] = DATAFILE::DATAARRAY_GET_INT(uVar155[iVar2], bVar0);
						Global_4980736.f_5742[bVar0 /*442*/].f_21[iVar2] = DATAFILE::DATAARRAY_GET_INT(uVar156[iVar2], bVar0);
						if (Global_4980736.f_5742[bVar0 /*442*/].f_21[iVar2] == -1)
						{
							Global_4980736.f_5742[bVar0 /*442*/].f_21[iVar2] = 99999;
						}
						if (uVar157[iVar2] != 0 && DATAFILE::DATAARRAY_GET_TYPE(uVar157[iVar2], bVar0) == 2)
						{
							Global_4980736.f_5742[bVar0 /*442*/].f_183[iVar2] = DATAFILE::DATAARRAY_GET_INT(uVar157[iVar2], bVar0);
						}
						else
						{
							Global_4980736.f_5742[bVar0 /*442*/].f_183[iVar2] = 0;
						}
						if (uVar158[iVar2] != 0 && DATAFILE::DATAARRAY_GET_TYPE(uVar158[iVar2], bVar0) == 2)
						{
							Global_4980736.f_5742[bVar0 /*442*/].f_188[iVar2] = DATAFILE::DATAARRAY_GET_INT(uVar158[iVar2], bVar0);
						}
						else
						{
							Global_4980736.f_5742[bVar0 /*442*/].f_188[iVar2] = 0;
						}
						if (uVar159[iVar2] != 0 && DATAFILE::DATAARRAY_GET_TYPE(uVar159[iVar2], bVar0) == 2)
						{
							Global_4980736.f_5742[bVar0 /*442*/].f_30.f_13[iVar2 /*4*/].f_1 = DATAFILE::DATAARRAY_GET_INT(uVar159[iVar2], bVar0);
						}
						else if (__LIB_1__::func_823())
						{
							Global_4980736.f_5742[bVar0 /*442*/].f_30.f_13[iVar2 /*4*/].f_1 = -1;
						}
						if (uVar160[iVar2] != 0 && DATAFILE::DATAARRAY_GET_TYPE(uVar160[iVar2], bVar0) == 2)
						{
							Global_4980736.f_5742[bVar0 /*442*/].f_30.f_13[iVar2 /*4*/].f_2 = DATAFILE::DATAARRAY_GET_INT(uVar160[iVar2], bVar0);
						}
						else if (__LIB_1__::func_823())
						{
							Global_4980736.f_5742[bVar0 /*442*/].f_30.f_13[iVar2 /*4*/].f_2 = -1;
						}
					}
					iVar2++;
				}
			}
			__LIB_18__::func_404("objintdes", &(Global_4980736.f_5742[bVar0 /*442*/].f_413), &iVar5, &iVar174, bVar0, -1, -2340845);
			__LIB_18__::func_404("objbndTm", &(Global_4980736.f_5742[bVar0 /*442*/].f_414), &iVar5, &iVar175, bVar0, -1, -2340845);
			__LIB_18__::func_404("obohel", &(Global_4980736.f_5742[bVar0 /*442*/].f_412), &iVar5, &iVar178, bVar0, -1, -2340845);
			__LIB_18__::func_404("obinvrt", &(Global_4980736.f_5742[bVar0 /*442*/].f_440), &iVar5, &iVar177, bVar0, -1, -2340845);
			__LIB_18__::func_404("obinvr", &(Global_4980736.f_5742[bVar0 /*442*/].f_441), &iVar5, &iVar176, bVar0, 0, -2340845);
			__LIB_18__::func_404("omj1", &(Global_4980736.f_5742[bVar0 /*442*/].f_391.f_1), &iVar5, &iVar179, bVar0, -1, -2340845);
			__LIB_18__::func_404("omj2", &(Global_4980736.f_5742[bVar0 /*442*/].f_391.f_2), &iVar5, &iVar180, bVar0, -1, -2340845);
			__LIB_18__::func_404("omj3", &(Global_4980736.f_5742[bVar0 /*442*/].f_391), &iVar5, &iVar181, bVar0, -1, -2340845);
			__LIB_18__::func_404("omj4", &(Global_4980736.f_5742[bVar0 /*442*/].f_391.f_3), &iVar5, &iVar182, bVar0, 0, -2340845);
			__LIB_18__::func_404("omj5", &(Global_4980736.f_5742[bVar0 /*442*/].f_391.f_4), &iVar5, &iVar183, bVar0, 0, -2340845);
			__LIB_18__::func_404("omj6", &(Global_4980736.f_5742[bVar0 /*442*/].f_391.f_5), &iVar5, &iVar184, bVar0, 0, -2340845);
			__LIB_18__::func_404("agIDob", &(Global_4980736.f_5742[bVar0 /*442*/].f_415), &iVar5, &iVar185, bVar0, 0, 0);
			__LIB_18__::func_401("alvobj", &(Global_4980736.f_5742[bVar0 /*442*/].f_416), 1, &iVar5, &iVar186, bVar0, 0, -2340845);
			__LIB_18__::func_401("ospoc", &(Global_4980736.f_5742[bVar0 /*442*/].f_430), 4, &iVar5, &iVar187, bVar0, 0, -2340845);
			__LIB_18__::func_401("ospocnr", &(Global_4980736.f_5742[bVar0 /*442*/].f_435), 4, &iVar5, &iVar188, bVar0, 0, -2340845);
			__LIB_18__::func_404("ors", &(Global_4980736.f_5742[bVar0 /*442*/].f_426), &iVar5, &iVar189, bVar0, -1, -2340845);
			__LIB_18__::func_404("obcde", &(Global_4980736.f_5742[bVar0 /*442*/].f_427), &iVar5, &iVar190, bVar0, 0, -2340845);
		}
		bVar0++;
	}
}

void func_112(int iParam0, float fParam1)//Position - 0x23AD56
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<3> Var4;
	float fVar5;
	float fVar6;
	float fVar7;
	if (!HUD::IS_PAUSE_MENU_ACTIVE())
	{
		if (__LIB_0__::func_157(0) == 0 || Global_4718592.f_2 != 6)
		{
			MISC::ALLOW_MISSION_CREATOR_WARP(!__LIB_18__::func_654());
		}
		PAD::ALLOW_ALTERNATIVE_SCRIPT_CONTROLS_LAYOUT(2 /*FRONTEND_CONTROL*/);
		__LIB_0__::func_603(&uVar0, &iVar1, &iVar2, &iVar3, 0);
		if (!PAD::IS_LOOK_INVERTED())
		{
			iVar1 = -iVar1;
			iVar3 = -iVar3;
		}
		if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
		{
			iVar2 = SYSTEM::FLOOR((PAD::GET_CONTROL_UNBOUND_NORMAL(2 /*FRONTEND_CONTROL*/, 1 /*INPUT_LOOK_LR*/) * 127f)) * 2;
			iVar3 = (SYSTEM::FLOOR((PAD::GET_CONTROL_UNBOUND_NORMAL(2 /*FRONTEND_CONTROL*/, 2 /*INPUT_LOOK_UD*/) * 127f)) * -1);
		}
		if (__LIB_0__::func_361(PLAYER::PLAYER_ID(), 0))
		{
			CAM::SET_FLY_CAM_VERTICAL_CONTROLS_THIS_UPDATE(iParam0);
			fVar5 = 0f;
		}
		else if (__LIB_0__::func_261())
		{
			fVar5 = 79f;
		}
		else if (!Global_262145.f_22713 /* Tunable: SM_YAW_ADJUST */)
		{
			fVar5 = -35f;
		}
		else
		{
			fVar5 = -11.5f;
		}
		if (CAM::DOES_CAM_EXIST(iParam0))
		{
			Var4 = { CAM::GET_CAM_ROT(iParam0, 2) };
			if (!__LIB_0__::func_361(PLAYER::PLAYER_ID(), 0))
			{
				if (CAM::GET_CAM_FOV(iParam0) < 45f)
				{
					fVar6 = (CAM::GET_CAM_FOV(iParam0) + 1f);
					if (fVar6 >= 45f)
					{
						fVar6 = 45f;
					}
					CAM::SET_CAM_FOV(iParam0, fVar6);
				}
				else if (CAM::GET_CAM_FOV(iParam0) > 45f)
				{
					fVar7 = (CAM::GET_CAM_FOV(iParam0) - 1f);
					if (fVar7 <= 45f)
					{
						fVar7 = 45f;
					}
					CAM::SET_CAM_FOV(iParam0, fVar7);
				}
			}
			if (Var4.f_0 < -89.9f)
			{
				Var4.f_0 = (Var4.f_0 + 3f);
				if (Var4.f_0 > -89.9f)
				{
					Var4.f_0 = (-89.9f + 0.01f);
				}
			}
			else if (Var4.f_0 > (fVar5 + 0.01f))
			{
				Var4.f_0 = (Var4.f_0 - 3f);
				if (Var4.f_0 < fVar5)
				{
					Var4.f_0 = fVar5;
				}
			}
			else if (__LIB_23__::func_276(iVar3, 30f))
			{
				Var4 = { Var4 + Vector(0f, 0f, (IntToFloat(iVar3) * (0.01f + fParam1))) };
				if (Var4.f_0 < -89.9f)
				{
					Var4.f_0 = -89.9f;
				}
				if (Var4.f_0 > fVar5)
				{
					Var4.f_0 = fVar5;
				}
			}
			if (__LIB_23__::func_276(iVar2, 30f))
			{
				Var4 = { Var4 - Vector(((IntToFloat(iVar2) * (0.01f + fParam1)) * 2f), 0f, 0f) };
				CAM::SET_CAM_ROT(iParam0, Var4, 2);
			}
			CAM::SET_CAM_ROT(iParam0, Var4, 2);
		}
	}
}

void func_113(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x243DB7
{
	int iVar0;
	if (__LIB_0__::func_438())
	{
		if (iParam0 == 0)
		{
			if (((iParam1 != 6 && iParam1 != 5) && iParam1 != 4) && iParam1 != 9)
			{
				if (__LIB_12__::func_841(PLAYER::PLAYER_ID()) < iParam2)
				{
					return;
				}
			}
		}
		iVar0 = __LIB_18__::func_187(iParam0, iParam1, bParam3);
		if (iVar0 == -1)
		{
			return;
		}
		__LIB_13__::func_523(iVar0, 1);
	}
}

int func_114(int iParam0, var uParam1)//Position - 0x16CBE
{
	int iVar0;
	bool bVar1;
	iVar0 = 0;
	bVar1 = false;
	if (iParam0 == 52 || iParam0 == 53)
	{
		return Global_4718592.f_169915;
	}
	if (uParam1->f_4854[iParam0] != -1)
	{
		return uParam1->f_4854[iParam0];
	}
	while (!bVar1)
	{
		if (__LIB_22__::func_393(iParam0, iVar0) == 0)
		{
			uParam1->f_4854[iParam0] = iVar0;
			return iVar0;
		}
		else
		{
			iVar0++;
		}
	}
	return -1;
}

int func_115()//Position - 0x1B3A8
{
	struct<3> Var0;
	float fVar1;
	int iVar2;
	fVar1 = 45f;
	iVar2 = 666;
	if (!CAM::DOES_CAM_EXIST(Global_2715699.f_2846.f_20))
	{
		Global_2715699.f_2846.f_23 = { CAM::GET_FINAL_RENDERED_CAM_COORD() };
		Var0 = { CAM::GET_FINAL_RENDERED_CAM_ROT(2) };
		fVar1 = CAM::GET_FINAL_RENDERED_CAM_FOV();
		__LIB_2__::func_592(0, 0);
		GRAPHICS::ANIMPOSTFX_PLAY("MinigameTransitionIn", 0, true);
		Global_2715699.f_2846.f_20 = CAM::CREATE_CAM_WITH_PARAMS("DEFAULT_SCRIPTED_CAMERA", Global_2715699.f_2846.f_23, Var0, 65f, false, 2);
		CAM::SET_CAM_FOV(Global_2715699.f_2846.f_20, fVar1);
		CAM::SET_CAM_ACTIVE(Global_2715699.f_2846.f_20, true);
		CAM::RENDER_SCRIPT_CAMS(true, false, iVar2, true, true, 0);
		if (Global_2715699.f_2846.f_27)
		{
			CAM::SET_CAM_PARAMS(Global_2715699.f_2846.f_20, Global_2715699.f_2846.f_23, Var0, fVar1, 0, 1, 1, 2);
			CAM::SET_CAM_PARAMS(Global_2715699.f_2846.f_20, Global_2715699.f_2846.f_23 + Vector(3f, 0f, 0f), Var0, fVar1, iVar2, 0, 0, 2);
		}
		NETWORK::NETWORK_SET_IN_FREE_CAM_MODE(true);
		Global_2715699.f_2846.f_42 = 1;
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_116()//Position - 0x1B6C5
{
	if (__LIB_18__::func_953(0))
	{
		switch (Global_2715699.f_2846.f_69)
		{
			case 0:
				Global_2715699.f_2846.f_42 = 1;
				if (BitTest(Global_2621446, 10))
				{
					if (CAM::DOES_CAM_EXIST(Global_2715699.f_2846.f_20))
					{
						CAM::SET_CAM_ACTIVE(Global_2715699.f_2846.f_20, false);
						if (!CAM::IS_CAM_ACTIVE(Global_2715699.f_2846.f_20))
						{
							CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
							__LIB_2__::func_592(1, 0);
							GRAPHICS::ANIMPOSTFX_STOP("MinigameTransitionIn");
							Global_2715699.f_2846.f_69 = 1;
						}
					}
				}
				break;
			case 1:
				Global_2715699.f_2846.f_42 = 0;
				if (!BitTest(Global_2621446, 10))
				{
					if (CAM::DOES_CAM_EXIST(Global_2715699.f_2846.f_20))
					{
						CAM::SET_CAM_ACTIVE(Global_2715699.f_2846.f_20, true);
					}
					if (__LIB_1__::func_24() || __LIB_1__::func_200())
					{
						__LIB_2__::func_592(0, 0);
					}
					if (!__LIB_0__::func_361(PLAYER::PLAYER_ID(), 0))
					{
						if (CAM::IS_CAM_ACTIVE(Global_2715699.f_2846.f_20))
						{
							CAM::RENDER_SCRIPT_CAMS(true, false, 0, true, false, 0);
							GRAPHICS::ANIMPOSTFX_PLAY("MinigameTransitionIn", 0, true);
							Global_2715699.f_2846.f_69 = 0;
						}
					}
					else
					{
						GRAPHICS::ANIMPOSTFX_PLAY("MinigameTransitionIn", 0, true);
						Global_2715699.f_2846.f_69 = 0;
					}
				}
				break;
			}
	}
}

char* func_117(int iParam0)//Position - 0x22DE7
{
	switch (iParam0)
	{
		case 63:
		case 64:
		case 65:
		case 66:
		case 78:
		case 67:
		case 68:
		case 69:
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 79:
		case 80:
		case 81:
		case 82:
		case 83:
		case 49:
		case 105:
			return "GTAO_FM_Events_Soundset";
		case 86:
			if (__LIB_1__::func_769() == 151)
			{
				return "GTAO_Boss_Goons_FM_Shard_Sounds";
			}
			if (__LIB_23__::func_356(PLAYER::PLAYER_ID()))
			{
				return "GTAO_Biker_FM_Soundset";
			}
			else
			{
				return "GTAO_Boss_Goons_FM_Soundset";
			}
			break;
		case 87:
		case 101:
		case 102:
		case 88:
		case 91:
			if (__LIB_23__::func_356(PLAYER::PLAYER_ID()))
			{
				return "GTAO_Biker_FM_Shard_Sounds";
			}
			else
			{
				return "GTAO_Boss_Goons_FM_Shard_Sounds";
			}
			break;
		case 108:
			return "dlc_vw_hidden_collectible_sounds";
			break;
		case 109:
			return "dlc_ch_hidden_collectibles_sk_sounds";
			break;
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
		case 98:
		case 99:
		case 89:
		case 100:
			if (__LIB_1__::func_520(1))
			{
				if (__LIB_1__::func_375(1))
				{
					return "GTAO_Biker_FM_Shard_Sounds";
				}
				else
				{
					return "GTAO_Boss_Goons_FM_Shard_Sounds";
				}
			}
			else if (__LIB_22__::func_644())
			{
				return "GTAO_Biker_FM_Shard_Sounds";
			}
			else
			{
				return "GTAO_Boss_Goons_FM_Shard_Sounds";
			}
			break;
		case 90:
		case 103:
			return "DLC_IE_Sell_General_Sounds";
		case 110:
		case 111:
			return "CELEBRATION_SOUNDSET";
		case 51:
		default:
			if (__LIB_1__::func_375(1))
			{
				return "GTAO_Biker_FM_Shard_Sounds";
			}
			else
			{
				return "GTAO_FM_Events_Soundset";
			}
			break;
	}
	return "HUD_AWARDS";
}

int func_118(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, var uParam85, var uParam86, var uParam87, var uParam88, var uParam89, var uParam90, var uParam91, var uParam92, var uParam93, var uParam94, var uParam95, var uParam96, var uParam97, var uParam98, var uParam99, var uParam100, var uParam101, var uParam102, var uParam103, var uParam104, var uParam105, var uParam106, var uParam107, var uParam108, var uParam109, var uParam110, var uParam111, var uParam112, var uParam113, var uParam114, var uParam115, var uParam116, var uParam117, var uParam118, var uParam119, var uParam120, var uParam121, var uParam122, var uParam123, var uParam124, var uParam125, var uParam126, var uParam127, var uParam128, var uParam129, bool bParam130)//Position - 0x274FD
{
	int iVar0;
	iVar0 = iVar0;
	if (__LIB_12__::func_696())
	{
		if (uParam0->f_9166 != 5)
		{
			uParam0->f_9166 = 5;
		}
	}
	switch (uParam0->f_9166)
	{
		case 0:
			HUD::BEGIN_TEXT_COMMAND_BUSYSPINNER_ON("");
			HUD::END_TEXT_COMMAND_BUSYSPINNER_ON(4);
			uParam0->f_9166 = 1;
			break;
		case 1:
			if (DATAFILE::UGC_CREATE_MISSION(&(Global_4718592.f_116531), &uParam1, &(Global_4718592.f_116682), __LIB_2__::func_288(0), bParam130, 0))
			{
				uParam0->f_9166 = 2;
			}
			else
			{
				uParam0->f_9166 = 5;
			}
			break;
		case 2:
			if (NETWORK::UGC_HAS_CREATE_FINISHED())
			{
				if (NETWORK::UGC_DID_CREATE_SUCCEED())
				{
					StringCopy(&(uParam0->f_20423), NETWORK::UGC_GET_CREATE_CONTENT_ID(), 24);
					uParam0->f_9166 = 0;
					uParam0->f_20435 = 1;
					NETWORK::UGC_CLEAR_CREATE_RESULT();
					NETWORK::UGC_CLEAR_MODIFY_RESULT();
					HUD::BUSYSPINNER_OFF();
					return 1;
				}
				else
				{
					iVar0 = NETWORK::UGC_GET_CREATE_RESULT();
					uParam0->f_9166 = 5;
					HUD::BUSYSPINNER_OFF();
				}
			}
			break;
		case 5:
			if (__LIB_23__::func_298(bParam130))
			{
				uParam0->f_20435 = 0;
				uParam0->f_9166 = 0;
				NETWORK::UGC_CLEAR_CREATE_RESULT();
				NETWORK::UGC_CLEAR_MODIFY_RESULT();
				HUD::BUSYSPINNER_OFF();
				return 1;
			}
			break;
	}
	return 0;
}

void func_119(bool bParam0, int iParam1, float fParam2)//Position - 0x64E02
{
	*iParam1 = -1;
	*fParam2 = 1f;
	*iParam1 = __LIB_23__::func_471(Global_4980736.f_78578[bParam0 /*450*/].f_12, 0, 1);
	if (Global_4980736.f_78578[bParam0 /*450*/].f_137.f_7 != 0)
	{
		*iParam1 = __LIB_23__::func_311(Global_4980736.f_78578[bParam0 /*450*/].f_137.f_7, BitTest(Global_4980736.f_78578[bParam0 /*450*/].f_115, 4));
	}
	if (Global_4980736.f_78578[bParam0 /*450*/].f_137.f_6 != 1.2f)
	{
		*fParam2 = Global_4980736.f_78578[bParam0 /*450*/].f_137.f_6;
	}
}

int func_120(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8)//Position - 0x990B6
{
	int iVar0;
	int iVar1;
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	if (iParam4 == 0)
	{
		iVar1 = __LIB_0__::func_268(iVar0, sParam1, iParam4);
		iParam4 = MISC::GET_HASH_KEY(__LIB_0__::func_267(iVar1));
	}
	if (iParam3 == joaat("mpDummy"))
	{
		return 0;
	}
	switch (iParam4)
	{
		case joaat("CHEST_FULL"):
		case joaat("CHEST_LEFT"):
		case joaat("CHEST_MID"):
		case joaat("CHEST_RIGHT"):
		case joaat("CHEST_STOM"):
		case joaat("CHEST_STOM_FULL"):
		case joaat("SIDE_RIGHT"):
		case joaat("TORSO_SIDE_LEFT"):
		case joaat("TORSO_SIDE_RIGHT"):
		case -1238079313:
		case joaat("STOMACH_FULL"):
		case joaat("STOMACH_LEFT"):
		case joaat("STOMACH_LOWER_LEFT"):
		case joaat("STOMACH_LOWER_RIGHT"):
		case joaat("STOMACH_MID"):
		case joaat("STOMACH_RIGHT"):
			if (bParam5)
			{
				return 0;
			}
			if ((((iParam4 == joaat("CHEST_FULL") || (iParam4 == joaat("CHEST_MID") && iVar0 == joaat("MP_F_Freemode_01"))) || iParam4 == joaat("CHEST_RIGHT")) || iParam4 == joaat("CHEST_STOM")) || iParam4 == joaat("CHEST_STOM_FULL"))
			{
				if (!bParam6)
				{
					if (Global_4539561 == -1)
					{
						if (!Global_100493.f_1554)
						{
							if (__LIB_19__::func_243(13, -1))
							{
								return 0;
							}
							else if (__LIB_19__::func_243(14, -1))
							{
								return 0;
							}
							else if (__LIB_19__::func_243(15, -1))
							{
								return 0;
							}
							else if (__LIB_19__::func_243(16, -1))
							{
								return 0;
							}
							else if (__LIB_19__::func_243(71, -1))
							{
								return 0;
							}
							else if (__LIB_19__::func_243(72, -1))
							{
							}
						}
					}
					else if (Global_4539561 == 13)
					{
						return 0;
					}
					else if (Global_4539561 == 14)
					{
						return 0;
					}
					else if (Global_4539561 == 15)
					{
						return 0;
					}
					else if (Global_4539561 == 16)
					{
						return 0;
					}
					else if (Global_4539561 == 71)
					{
						return 0;
					}
					else if (Global_4539561 == 72)
					{
					}
				}
			}
			else if (iParam4 == joaat("CHEST_LEFT"))
			{
				if (!bParam6)
				{
					if (Global_4539561 == -1)
					{
						if (!Global_100493.f_1554)
						{
							if (__LIB_19__::func_243(13, -1))
							{
								return 0;
							}
							else if (__LIB_19__::func_243(14, -1))
							{
								return 0;
							}
							else if (__LIB_19__::func_243(15, -1))
							{
								return 0;
							}
							else if (__LIB_19__::func_243(16, -1))
							{
								return 0;
							}
							else if (__LIB_19__::func_243(71, -1))
							{
								return 0;
							}
							else if (__LIB_19__::func_243(72, -1))
							{
							}
						}
					}
					else if (Global_4539561 == 13)
					{
						return 0;
					}
					else if (Global_4539561 == 14)
					{
						return 0;
					}
					else if (Global_4539561 == 15)
					{
						return 0;
					}
					else if (Global_4539561 == 16)
					{
						return 0;
					}
					else if (Global_4539561 == 71)
					{
						return 0;
					}
					else if (Global_4539561 == 72)
					{
					}
				}
			}
			else if ((iParam4 == joaat("STOMACH_FULL") || iParam4 == joaat("STOMACH_MID")) || iParam4 == joaat("STOMACH_LEFT"))
			{
				if (!bParam6)
				{
					if (Global_4539561 == -1)
					{
						if (!Global_100493.f_1554)
						{
							if (__LIB_19__::func_243(13, -1))
							{
							}
							else if (__LIB_19__::func_243(14, -1))
							{
								return 0;
							}
							else if (__LIB_19__::func_243(15, -1))
							{
								return 0;
							}
							else if (__LIB_19__::func_243(16, -1))
							{
							}
							else if (__LIB_19__::func_243(71, -1))
							{
								return 0;
							}
							else if (__LIB_19__::func_243(72, -1))
							{
							}
						}
					}
					else if (Global_4539561 == 13)
					{
					}
					else if (Global_4539561 == 14)
					{
						return 0;
					}
					else if (Global_4539561 == 15)
					{
						return 0;
					}
					else if (Global_4539561 == 16)
					{
					}
					else if (Global_4539561 == 71)
					{
						return 0;
					}
					else if (Global_4539561 == 72)
					{
					}
				}
			}
			else if (iParam4 == joaat("BACK_UPPER"))
			{
				if (!bParam6)
				{
					if (Global_4539561 == -1)
					{
						if (!Global_100493.f_1554)
						{
							if (__LIB_19__::func_243(13, -1))
							{
							}
							else if (__LIB_19__::func_243(14, -1))
							{
							}
							else if (__LIB_19__::func_243(15, -1))
							{
							}
							else if (__LIB_19__::func_243(16, -1))
							{
							}
							else if (__LIB_19__::func_243(71, -1))
							{
							}
							else if (__LIB_19__::func_243(72, -1))
							{
							}
						}
					}
					else if (Global_4539561 == 13)
					{
					}
					else if (Global_4539561 == 14)
					{
					}
					else if (Global_4539561 == 15)
					{
					}
					else if (Global_4539561 == 16)
					{
					}
					else if (Global_4539561 == 71)
					{
					}
					else if (Global_4539561 == 72)
					{
					}
				}
			}
			break;
		case joaat("BACK_1"):
		case joaat("BACK_FULL"):
		case joaat("BACK_FULL_ARMS_FULL_BACK"):
		case joaat("BACK_FULL_SHORT"):
		case joaat("BACK_LOWER"):
		case joaat("BACK_MID"):
		case joaat("BACK_UPPER"):
		case joaat("BACK_UPPER_LEFT"):
		case joaat("BACK_UPPER_RIGHT"):
			if (bParam8)
			{
				return 0;
			}
			if (!bParam6)
			{
				if (Global_4539561 == -1)
				{
					if (!Global_100493.f_1554)
					{
						if (__LIB_19__::func_243(13, -1))
						{
						}
						else if (__LIB_19__::func_243(14, -1))
						{
						}
						else if (__LIB_19__::func_243(15, -1))
						{
							return 0;
						}
						else if (__LIB_19__::func_243(16, -1))
						{
						}
						else if (__LIB_19__::func_243(71, -1))
						{
						}
						else if (__LIB_19__::func_243(72, -1))
						{
							return 0;
						}
					}
				}
				else if (Global_4539561 == 13)
				{
				}
				else if (Global_4539561 == 14)
				{
				}
				else if (Global_4539561 == 15)
				{
					return 0;
				}
				else if (Global_4539561 == 16)
				{
				}
				else if (Global_4539561 == 71)
				{
				}
				else if (Global_4539561 == 72)
				{
					return 0;
				}
			}
			break;
		case joaat("crewLogo"):
			if (bParam8)
			{
				if (iVar0 == joaat("MP_M_Freemode_01"))
				{
					if (Global_4539561 == -1)
					{
						if (!Global_100493.f_1554)
						{
							if (__LIB_19__::func_243(15, -1))
							{
								return 0;
							}
						}
					}
					else if (Global_4539561 == 15)
					{
						return 0;
					}
				}
			}
			if (bParam6)
			{
				return 0;
			}
			if (bParam5)
			{
				if (Global_4539561 == -1)
				{
					if (!Global_100493.f_1554)
					{
						if (__LIB_19__::func_243(13, -1))
						{
							return 0;
						}
						else if (__LIB_19__::func_243(14, -1))
						{
							return 0;
						}
						else if (__LIB_19__::func_243(15, -1))
						{
							if (!MISC::ARE_STRINGS_EQUAL(sParam1, "TAT_FMM_CLB" /* GXT: Crew Emblem Back */))
							{
								return 0;
							}
						}
						else if (__LIB_19__::func_243(16, -1))
						{
						}
						else if (__LIB_19__::func_243(71, -1))
						{
						}
						else if (__LIB_19__::func_243(72, -1))
						{
						}
					}
				}
				else if (Global_4539561 == 13)
				{
					return 0;
				}
				else if (Global_4539561 == 14)
				{
					return 0;
				}
				else if (Global_4539561 == 15)
				{
					if (!MISC::ARE_STRINGS_EQUAL(sParam1, "TAT_FMM_CLB" /* GXT: Crew Emblem Back */))
					{
						return 0;
					}
				}
				else if (Global_4539561 == 16)
				{
				}
				else if (Global_4539561 == 71)
				{
				}
				else if (Global_4539561 == 72)
				{
				}
			}
			break;
		case 0:
		case 2:
		case joaat("rank"):
			if (bParam5)
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
				{
					switch (MISC::GET_HASH_KEY(sParam1))
					{
						case joaat("TAT_FM_011"):
						case joaat("TAT_FM_012"):
						case joaat("TAT_FM_019"):
						case joaat("TAT_FM_020"):
						case joaat("TAT_FM_021"):
						case joaat("TAT_FM_218"):
						case joaat("TAT_FM_219"):
						case joaat("TAT_FM_220"):
						case joaat("TAT_FM_225"):
						case joaat("TAT_FM_226"):
						case joaat("TAT_FM_230"):
						case joaat("TAT_FM_233"):
						case joaat("TAT_FM_235"):
						case joaat("TAT_FM_237"):
						case joaat("TAT_FM_245"):
							return 0;
							break;
						}
					}
			}
			if (iVar0 == joaat("MP_M_Freemode_01"))
			{
			}
			else if (iVar0 == joaat("MP_F_Freemode_01"))
			{
				if (!bParam6)
				{
					if (Global_4539561 == -1)
					{
						if (!Global_100493.f_1554)
						{
							if (__LIB_19__::func_243(13, -1))
							{
							}
							else if (__LIB_19__::func_243(14, -1))
							{
							}
							else if (__LIB_19__::func_243(15, -1))
							{
							}
							else if (__LIB_19__::func_243(16, -1))
							{
							}
							else if (__LIB_19__::func_243(71, -1))
							{
							}
							else if (__LIB_19__::func_243(72, -1))
							{
							}
						}
					}
					else if (Global_4539561 == 13)
					{
						return 0;
					}
					else if (Global_4539561 == 14)
					{
					}
					else if (Global_4539561 == 15)
					{
						return 0;
					}
					else if (Global_4539561 == 16)
					{
					}
					else if (Global_4539561 == 71)
					{
					}
					else if (Global_4539561 == 72)
					{
					}
				}
			}
			break;
		case joaat("torsoDecal"):
			if (bParam7)
			{
				return 0;
			}
			break;
	}
	return 1;
}

int func_121(var uParam0, int iParam1)//Position - 0xE83F2
{
	int iVar0;
	if (__LIB_13__::func_113(&(uParam0->f_9158), &(uParam0->f_9159), &(uParam0->f_9167), 0, 0, __LIB_0__::func_591(), 0, 0, 0, 0, __LIB_0__::func_591(), 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, -1, -1, 0, 0, 0))
	{
		uParam0->f_9167 = 0;
		iVar0 = 15;
		iVar0 = HUD::GET_LENGTH_OF_LITERAL_STRING(MISC::GET_ONSCREEN_KEYBOARD_RESULT());
		StringCopy(&(Global_4718592.f_166222[iParam1 /*248*/].f_244), HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME(MISC::GET_ONSCREEN_KEYBOARD_RESULT(), 0, __LIB_22__::func_610(iVar0, 15)), 16);
		uParam0->f_9167 = 0;
		uParam0->f_9158 = 0;
		return 1;
	}
	if (uParam0->f_9158 == 2)
	{
		uParam0->f_9158 = 0;
		uParam0->f_9167 = 0;
		StringCopy(&(Global_4718592.f_166222[iParam1 /*248*/].f_244), "", 16);
		return 1;
	}
	return 0;
}

int func_122(int iParam0)//Position - 0x1095E8
{
	if ((((((((((((((((((((((((((__LIB_23__::func_509(iParam0, 30) || __LIB_23__::func_509(iParam0, 28)) || __LIB_23__::func_509(iParam0, 31)) || __LIB_23__::func_509(iParam0, 32)) || __LIB_23__::func_509(iParam0, 17)) || __LIB_23__::func_509(iParam0, 18)) || __LIB_23__::func_509(iParam0, 20)) || __LIB_23__::func_509(iParam0, 19)) || __LIB_23__::func_509(iParam0, 21)) || __LIB_23__::func_509(iParam0, 22)) || __LIB_23__::func_509(iParam0, 29)) || __LIB_23__::func_509(iParam0, 34)) || __LIB_23__::func_509(iParam0, 24)) || __LIB_23__::func_509(iParam0, 25)) || __LIB_23__::func_509(iParam0, 26)) || __LIB_23__::func_509(iParam0, 27)) || __LIB_23__::func_509(iParam0, 43)) || __LIB_23__::func_509(iParam0, 44)) || __LIB_23__::func_509(iParam0, 45)) || __LIB_23__::func_509(iParam0, 46)) || __LIB_23__::func_509(iParam0, 40)) || __LIB_23__::func_509(iParam0, 41)) || __LIB_23__::func_509(iParam0, 42)) || __LIB_23__::func_509(iParam0, 47)) || __LIB_23__::func_509(iParam0, 48)) || __LIB_23__::func_509(iParam0, 36)) || __LIB_23__::func_509(iParam0, 50))
	{
		return 1;
	}
	return 0;
}

int func_123(int iParam0)//Position - 0x10976C
{
	if ((__LIB_23__::func_509(iParam0, 30) && ((((iParam0 == joaat("stt_prop_stunt_bblock_qp3") || iParam0 == joaat("stt_prop_stunt_bblock_qp2")) || iParam0 == joaat("stt_prop_stunt_bblock_qp")) || iParam0 == joaat("stt_prop_stunt_bblock_hump_01")) || iParam0 == joaat("stt_prop_stunt_bblock_hump_02"))) || (__LIB_23__::func_509(iParam0, 31) && (iParam0 == joaat("stt_prop_stunt_landing_zone_01") || iParam0 == joaat("stt_prop_hoop_tyre_01a"))))
	{
		return 0;
	}
	if (((__LIB_23__::func_509(iParam0, 21) || __LIB_23__::func_509(iParam0, 31)) || __LIB_23__::func_509(iParam0, 30)) || __LIB_23__::func_509(iParam0, 22))
	{
		return 1;
	}
	return 0;
}

int func_124(int iParam0)//Position - 0x10A1A1
{
	if ((((__LIB_23__::func_509(iParam0, 17) || __LIB_23__::func_509(iParam0, 18)) || __LIB_23__::func_509(iParam0, 28)) || __LIB_23__::func_509(iParam0, 29)) || __LIB_23__::func_509(iParam0, 34))
	{
		return 1;
	}
	else if (((__LIB_23__::func_509(iParam0, 21) || __LIB_23__::func_509(iParam0, 22)) || __LIB_23__::func_509(iParam0, 24)) || __LIB_23__::func_509(iParam0, 25))
	{
		return 0;
	}
	else if (__LIB_23__::func_509(iParam0, 20))
	{
		return 2;
	}
	return -1;
}

int func_125(int iParam0, var uParam1, var uParam2)//Position - 0x10AC01
{
	if (!__LIB_0__::func_86(uParam2->f_706) && !__LIB_0__::func_86(uParam2->f_709))
	{
		ENTITY::SET_ENTITY_COORDS(iParam0, uParam2->f_706, true, false, false, true);
		ENTITY::SET_ENTITY_ROTATION(iParam0, uParam2->f_709, 2, true);
	}
	if (__LIB_23__::func_509(ENTITY::GET_ENTITY_MODEL(iParam0), 19))
	{
		uParam1->f_6 = 1;
	}
	uParam1->f_3 = uParam2->f_695;
	uParam1->f_4 = uParam1->f_3 + 10;
	if (uParam1->f_4 > uParam2->f_482)
	{
		uParam1->f_4 = uParam2->f_482;
		uParam2->f_695 = 0;
	}
	else
	{
		uParam2->f_695 = uParam1->f_4;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uParam2->f_272))
	{
		STREAMING::REQUEST_MODEL(joaat("stt_prop_stunt_tube_xxs"));
		if (STREAMING::HAS_MODEL_LOADED(joaat("stt_prop_stunt_tube_xxs")))
		{
			uParam2->f_272 = OBJECT::CREATE_OBJECT(joaat("stt_prop_stunt_tube_xxs"), ENTITY::GET_ENTITY_COORDS(iParam0, true), false, true, false);
			ENTITY::SET_ENTITY_VISIBLE(uParam2->f_272, false, false);
			ENTITY::SET_ENTITY_COLLISION(uParam2->f_272, false, false);
		}
		else
		{
			return 0;
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uParam2->f_273))
	{
		STREAMING::REQUEST_MODEL(joaat("prop_ld_test_01"));
		if (STREAMING::HAS_MODEL_LOADED(joaat("prop_ld_test_01")))
		{
			uParam2->f_273 = OBJECT::CREATE_OBJECT(joaat("prop_ld_test_01"), ENTITY::GET_ENTITY_COORDS(iParam0, true), false, true, false);
			ENTITY::SET_ENTITY_VISIBLE(uParam2->f_273, false, false);
			ENTITY::SET_ENTITY_COLLISION(uParam2->f_272, false, false);
		}
		else
		{
			return 0;
		}
	}
	if (!ENTITY::IS_ENTITY_VISIBLE(iParam0))
	{
		ENTITY::SET_ENTITY_VISIBLE(iParam0, true, false);
	}
	return 1;
}

Vector3 func_126(int iParam0)//Position - 0x10D40D
{
	if (__LIB_23__::func_509(iParam0, 23))
	{
		return -90f, 0f, 0f;
	}
	switch (iParam0)
	{
		case joaat("hei_prop_wall_light_10a_cr"):
			return -90f, 0f, 0f;
			break;
	}
	return 0f, 0f, 0f;
}

bool func_127(int iParam0)//Position - 0x10D5E2
{
	return __LIB_23__::func_509(iParam0, 50);
}

int func_128(int* iParam0)//Position - 0x11600C
{
	int iVar0;
	iVar0 = __LIB_22__::func_393(iParam0->f_893, iParam0->f_894);
	if (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((iVar0 == joaat("stt_prop_track_bend_l") || iVar0 == joaat("stt_prop_track_bend2_l")) || iVar0 == joaat("stt_prop_track_bend_bar_l")) || iVar0 == joaat("stt_prop_track_bend2_bar_l")) || iVar0 == joaat("ar_prop_ar_tube_crn")) || iVar0 == joaat("ar_prop_ar_tube_fork")) || iVar0 == joaat("ar_prop_ar_tube_cross")) || iVar0 == joaat("ar_prop_ar_tube_2x_crn")) || iVar0 == joaat("ar_prop_ar_tube_2x_crn2")) || iVar0 == joaat("ar_prop_ar_tube_2x_crn_15d")) || iVar0 == joaat("ar_prop_ar_tube_2x_crn_30d")) || iVar0 == joaat("ar_prop_ar_tube_4x_crn")) || iVar0 == joaat("ar_prop_ar_tube_4x_crn2")) || iVar0 == joaat("ar_prop_ar_tube_4x_crn_15d")) || iVar0 == joaat("ar_prop_ar_tube_4x_crn_30d")) || iVar0 == joaat("ar_prop_ar_stunt_block_01a")) || iVar0 == joaat("ar_prop_ar_stunt_block_01b")) || iVar0 == joaat("ar_prop_ar_tube_4x_speed")) || iVar0 == joaat("prop_container_ld_pu")) || iVar0 == joaat("p_ld_stinger_s")) || iVar0 == joaat("ba_prop_battle_ps_box_01")) || iVar0 == joaat("ba_prop_battle_track_exshort")) || iVar0 == joaat("ba_prop_battle_track_short")) || iVar0 == joaat("stt_prop_track_straight_lm")) || iVar0 == joaat("stt_prop_track_bend_l_b")) || iVar0 == joaat("xs_prop_arena_bomb_s")) || iVar0 == joaat("xs_prop_arena_bomb_m")) || iVar0 == joaat("xs_prop_arena_bomb_l")) || iVar0 == 11714146) || iVar0 == joaat("xs_prop_arena_turntable_b_01a_sf")) || iVar0 == joaat("xs_prop_arena_turntable_b_01a_wl")) || iVar0 == 11714146) || iVar0 == joaat("prop_sec_gate_01d")) || iVar0 == joaat("prop_vault_shutter")) || iVar0 == joaat("prop_wine_red")) || iVar0 == joaat("prop_drink_redwine")) || iVar0 == joaat("vw_prop_vw_barrier_rope_01a")) || iVar0 == joaat("vw_prop_vw_barrier_rope_02a")) || __LIB_19__::func_129(iVar0)) || iVar0 == joaat("ch_prop_ch_casino_shutter01x")) || iVar0 == joaat("ch_prop_stunt_landing_zone_01a")) || iVar0 == joaat("ch_prop_ch_tunnel_door01a")) || iVar0 == joaat("ch_prop_track_ch_bend_45")) || iVar0 == joaat("ch_prop_track_ch_bend_bar_45d")) || iVar0 == joaat("ch_prop_ch_room_trolly_01a")) || iVar0 == joaat("prop_bikerset")) || iVar0 == joaat("ch_prop_track_paddock_01")) || iVar0 == joaat("ch_prop_track_pit_garage_01a")) || iVar0 == joaat("sum_prop_ac_rock_01a")) || iVar0 == joaat("sum_prop_ac_rock_01b")) || iVar0 == joaat("sum_prop_ac_rock_01c")) || iVar0 == joaat("sum_prop_ac_rock_01d")) || iVar0 == joaat("sum_prop_ac_rock_01e")) || iVar0 == joaat("sum_prop_ac_ind_light_02a")) || iVar0 == joaat("sum_prop_ac_ind_light_03c")) || iVar0 == joaat("sum_prop_ac_ind_light_04")) || iVar0 == joaat("sum_prop_ac_wall_light_09a")) || iVar0 == joaat("ch_prop_track_ch_straight_bar_s_s")) || iVar0 == joaat("ch_prop_track_ch_straight_bar_s")) || iVar0 == joaat("ch_prop_track_ch_bend_bar_l_out")) || iVar0 == joaat("ch_prop_track_ch_bend_bar_l_b")) || iVar0 == joaat("ch_prop_track_ch_bend_bar_m_out")) || iVar0 == joaat("ch_prop_track_ch_bend_bar_m_in")) || iVar0 == joaat("ch_prop_track_ch_bend_180d")) || iVar0 == joaat("ch_prop_track_ch_bend_bar_135")) || iVar0 == joaat("ch_prop_track_ch_bend_135")) || iVar0 == joaat("ch_prop_track_pit_stop_01")) || iVar0 == joaat("h4_prop_h4_boxpile_01a")) || iVar0 == joaat("h4_prop_h4_tannoy_01a")) || iVar0 == joaat("h4_prop_h4_sign_cctv_01a")) || iVar0 == joaat("h4_prop_h4_sub_kos")) || iVar0 == joaat("h4_prop_h4_fence_seg_x1_01a")) || iVar0 == joaat("h4_prop_h4_fence_seg_x3_01a")) || iVar0 == joaat("h4_prop_h4_fence_seg_x5_01a")) || iVar0 == joaat("h4_prop_h4_fence_arches_x2_01a")) || iVar0 == joaat("h4_prop_h4_fence_arches_x3_01a")) || iVar0 == joaat("h4_prop_office_desk_01")) || iVar0 == joaat("h4_prop_h4_sec_cabinet_dum")) || iVar0 == joaat("h4_prop_h4_loch_monster")) || iVar0 == joaat("prop_box_wood02a_pu")) || iVar0 == joaat("h4_prop_h4_cctv_pole_04")) || iVar0 == joaat("h4_prop_h4_t_bottle_02a")) || iVar0 == joaat("h4_prop_h4_neck_disp_01a")) || iVar0 == joaat("h4_prop_h4_necklace_01a")) || iVar0 == joaat("h4_prop_h4_art_pant_01a")) || iVar0 == joaat("h4_prop_h4_diamond_disp_01a")) || iVar0 == joaat("h4_prop_h4_diamond_01a")) || iVar0 == joaat("gr_prop_inttruck_door_01")) || iVar0 == joaat("gr_prop_gr_trailer_tv")) || iVar0 == joaat("gr_prop_gr_trailer_tv_02")) || iVar0 == joaat("gr_prop_gr_trailer_monitor_01")) || iVar0 == joaat("gr_prop_gr_trailer_monitor_02")) || iVar0 == joaat("gr_prop_gr_trailer_monitor_03")) || iVar0 == joaat("tr_prop_tr_ramp_01a")) || iVar0 == joaat("tr_prop_tr_crates_sam_01a")) || iVar0 == joaat("tr_prop_tr_container_01a")) || iVar0 == joaat("tr_prop_tr_container_01b")) || iVar0 == joaat("tr_prop_tr_container_01c")) || iVar0 == joaat("tr_prop_tr_container_01d")) || iVar0 == joaat("tr_prop_tr_container_01e")) || iVar0 == joaat("tr_prop_tr_container_01f")) || iVar0 == joaat("tr_prop_tr_container_01g")) || iVar0 == joaat("tr_prop_tr_container_01h")) || iVar0 == joaat("tr_prop_tr_container_01i")) || iVar0 == joaat("prop_container_03_ld")) || iVar0 == joaat("tr_prop_tr_notice_01a"))
	{
		return 1;
	}
	return 0;
}

int func_129(int iParam0, int iParam1)//Position - 0x116A71
{
	int iVar0;
	iVar0 = __LIB_22__::func_393(iParam0, iParam1);
	if (!__LIB_0__::func_261())
	{
		if (iParam0 == 14)
		{
			if (((((((((iVar0 == -56302774 || iVar0 == -1924165356) || iVar0 == 1837927001) || iVar0 == -960602868) || iVar0 == -72825120) || iVar0 == -713058190) || iVar0 == joaat("prop_rock_4_big2")) || iVar0 == joaat("prop_rock_4_big")) || iVar0 == joaat("prop_rock_4_c_2")) || iVar0 == joaat("prop_barrel_02b"))
			{
				return 0;
			}
		}
		if (__LIB_18__::func_699() && __LIB_22__::func_837(iVar0))
		{
			return 0;
		}
	}
	if (iVar0 == joaat("prop_container_ld_pu") && Global_4718592.f_2 != 5)
	{
		return 0;
	}
	if (Global_262145.f_16115 /* Tunable: DISABLE_STUNT_FIREWORKS */)
	{
		if (iVar0 == joaat("prop_flare_01") || iVar0 == joaat("ind_prop_firework_03"))
		{
			return 0;
		}
	}
	if (!__LIB_0__::func_261())
	{
		if ((iVar0 == joaat("stt_prop_track_stop_sign") || iVar0 == joaat("ar_prop_ar_start_01a")) && Global_4718592 != 2)
		{
			return 0;
		}
		if (__LIB_19__::func_133(iVar0))
		{
			if (__LIB_1__::func_188(Global_4718592.f_107227) || !Global_262145.f_20322 /* Tunable: AC_ENABLE_SEAMINES_CREATORS */)
			{
				return 0;
			}
		}
		if (iVar0 == joaat("p_ld_stinger_s"))
		{
			return 0;
		}
	}
	if (iParam0 == 22 && iVar0 == 0)
	{
		return 0;
	}
	return 1;
}

void func_130(int iParam0, int iParam1, bool bParam2)//Position - 0x11FB2B
{
	var uVar0;
	var uVar1;
	struct<3> Var2;
	if ((VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, false)) && __LIB_23__::func_540(iParam1))
	{
		MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(iParam1), &uVar0, &uVar1);
		Var2.f_2 = (Var2.f_2 + 6f);
		ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iParam0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam1, Var2), false, false, true);
		if (bParam2)
		{
			ENTITY::ATTACH_ENTITY_TO_ENTITY(iParam0, iParam1, 0, Var2, 0f, 0f, 0f, false, false, true, false, 2, true, 0);
		}
	}
}

void func_131(int* iParam0)//Position - 0x15DD0E
{
	int iVar0;
	iParam0->f_270 = 279;
	__LIB_23__::func_384(iParam0);
	__LIB_1__::func_767("FMMC_TOF_TIT");
	__LIB_19__::func_185(iParam0->f_848);
	__LIB_1__::func_766(1, 1, 0, 0, 0);
	__LIB_1__::func_765(1, 2, 1, 1, 1);
	__LIB_12__::func_593(0, 1, 0, 0, 0);
	__LIB_23__::func_494(0, "FMMC_TOF_OF", 0, 1, 0, 0, 0);
	__LIB_23__::func_494(0, __LIB_19__::func_245(iParam0->f_2468), 0, 1, 0, 0, 0);
	iParam0->f_546 = 1;
	iVar0 = 0;
	while (iVar0 <= 132)
	{
		if (BitTest(Global_4718592.f_142671[iParam0->f_848 /*14*/][(iVar0 / 32)], (iVar0 % 32)))
		{
			__LIB_23__::func_494(iParam0->f_546, __LIB_19__::func_245(iVar0), 0, 1, 0, 0, 0);
			if (Global_4718592.f_142728[iParam0->f_848] == iVar0)
			{
				__LIB_23__::func_494(iParam0->f_546, "FMMC_TOUT_D", 0, 1, 0, 0, 0);
			}
			else
			{
				__LIB_23__::func_494(iParam0->f_546, "FMMC_TOUT_N", 0, 1, 0, 0, 0);
			}
			iParam0->f_546++;
		}
		iVar0++;
	}
}

void func_132(int* iParam0)//Position - 0x162A84
{
	bool bVar0;
	struct<8> Var1;
	struct<16> Var2;
	__LIB_23__::func_384(iParam0);
	__LIB_1__::func_767("FMMC_OTF_TEMT");
	__LIB_19__::func_185(iParam0->f_848);
	__LIB_1__::func_766(1, 1, 0, 0, 0);
	__LIB_1__::func_765(1, 2, 1, 1, 1);
	__LIB_12__::func_593(0, 0, 0, 0, 0);
	iParam0->f_270 = 764;
	bVar0 = false;
	while (bVar0 <= 1)
	{
		__LIB_23__::func_494(bVar0, "FMMC_TFS_STR", 1, 1, 0, 0, 0);
		__LIB_23__::func_517(bVar0, 0);
		Var2 = { Global_4718592.f_165874[iParam0->f_848 /*33*/][bVar0 /*16*/] };
		StringCopy(&Var1, __LIB_23__::func_498("STRING", &Var2, 1039516303, 0, 0), 64);
		if (!MISC::ARE_STRINGS_EQUAL(&Var1, &Var2))
		{
			__LIB_23__::func_494(bVar0, "FMMC_TRUNC" /* GXT: ~a~... */, 1, 1, 0, 0, 0);
		}
		else
		{
			__LIB_23__::func_494(bVar0, "STRING", 1, 1, 0, 0, 0);
		}
		__LIB_23__::func_495(&Var1, 0, 0, 0);
		bVar0++;
	}
	iParam0->f_546 = 2;
}

int func_133(int iParam0)//Position - 0x1D818C
{
	if ((((((((__LIB_23__::func_509(iParam0, 43) || __LIB_23__::func_509(iParam0, 44)) || __LIB_23__::func_509(iParam0, 45)) || __LIB_23__::func_509(iParam0, 40)) || __LIB_23__::func_509(iParam0, 41)) || __LIB_23__::func_509(iParam0, 42)) || __LIB_23__::func_509(iParam0, 46)) || __LIB_23__::func_509(iParam0, 47)) || __LIB_23__::func_509(iParam0, 48))
	{
		return 1;
	}
	return 0;
}

void func_134(int iParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, int iParam7)//Position - 0x23D8AD
{
	bool bVar0;
	*iParam1 = 17;
	*iParam2 = 1;
	StringCopy(sParam3, "", 24);
	StringCopy(sParam4, "", 64);
	*iParam5 = 40;
	*iParam6 = 0;
	bVar0 = false;
	if (iParam0->f_2 == PLAYER::PLAYER_ID())
	{
		if (__LIB_18__::func_436(iParam0))
		{
			bVar0 = true;
		}
	}
	switch (iParam0->f_2)
	{
		case 40:
			*iParam5 = 4;
			break;
		case 63:
			*iParam5 = 3;
			break;
		case 62:
			*iParam5 = 3;
			break;
		default:
			if (iParam0->f_2 == PLAYER::PLAYER_ID())
			{
				if (__LIB_18__::func_436(iParam0))
				{
					*iParam5 = 5;
				}
				else
				{
					*iParam5 = 4;
				}
			}
			else if (iParam0->f_2 < 32)
			{
				*iParam5 = 5;
			}
			break;
	}
	switch (*iParam0)
	{
		case 181:
			*iParam1 = 311;
			*iParam2 = 1;
			return;
		case 188:
			if (iParam0->f_2 == 63)
			{
				*iParam1 = 94;
				*iParam2 = 2;
				StringCopy(sParam3, "FMMC_RSTAR_BJ" /* GXT: Parachuting */, 24);
				*iParam6 = 1;
			}
			else if (iParam0->f_2 == 62)
			{
				*iParam1 = 94;
				*iParam2 = 2;
				StringCopy(sParam3, "FMMC_RSTAR_BJ" /* GXT: Parachuting */, 24);
				*iParam6 = 1;
			}
			else if (iParam0->f_2 < 32)
			{
				*iParam1 = 94;
				*iParam2 = 3;
				*iParam6 = 1;
				if (bVar0)
				{
					StringCopy(sParam3, "FMMC_BM_BASE" /* GXT: Bookmarked Parachuting */, 24);
				}
				else
				{
					StringCopy(sParam3, "FMMC_PL_BASE" /* GXT: ~a~ Parachuting */, 24);
					StringCopy(sParam4, __LIB_23__::func_504(iParam0), 64);
				}
			}
			return;
		case 182:
			*iParam1 = 103;
			*iParam2 = 1;
			return;
		case 186:
			*iParam1 = 90;
			*iParam2 = 1;
			StringCopy(sParam3, "HUD_MG_PILOT" /* GXT: San Andreas Flight School */, 24);
			return;
		case 189:
			*iParam1 = __LIB_13__::func_461(__LIB_17__::func_53(iParam0));
			if (iParam0->f_2 == 63)
			{
				*iParam2 = 2;
				*sParam3 = { __LIB_13__::func_441(__LIB_17__::func_53(iParam0), 1, 0) };
				*iParam6 = 1;
			}
			else if (iParam0->f_2 == 62)
			{
				*iParam2 = 2;
				*sParam3 = { __LIB_13__::func_441(__LIB_17__::func_53(iParam0), 1, 0) };
				*iParam6 = 1;
			}
			else if (iParam0->f_2 < 32)
			{
				*iParam2 = 3;
				*sParam3 = { __LIB_13__::func_441(__LIB_17__::func_53(iParam0), 0, bVar0) };
				StringCopy(sParam4, __LIB_23__::func_504(iParam0), 64);
				*iParam6 = 1;
			}
			return;
		case 190:
			*iParam5 = 1;
			if (iParam0->f_2 == 63)
			{
				*iParam1 = 406;
				*iParam2 = 2;
				StringCopy(sParam3, "FMMC_RSTAR_GA" /* GXT: Gang Attack */, 24);
				*iParam6 = 1;
			}
			else if (iParam0->f_2 == 62)
			{
				*iParam1 = 406;
				*iParam2 = 2;
				StringCopy(sParam3, "FMMC_RSTAR_GA" /* GXT: Gang Attack */, 24);
				*iParam6 = 1;
			}
			else if (iParam0->f_2 < 32)
			{
				*iParam1 = 406;
				*iParam2 = 3;
				*iParam6 = 1;
				if (bVar0)
				{
					StringCopy(sParam3, "FMMC_BM_GH" /* GXT: Bookmarked Gang Attack */, 24);
				}
				else
				{
					StringCopy(sParam3, "FMMC_PL_GH" /* GXT: ~a~ Gang Attack */, 24);
					StringCopy(sParam4, __LIB_23__::func_504(iParam0), 64);
				}
			}
			return;
		case 183:
			*iParam1 = 109;
			*iParam2 = 1;
			return;
		case 191:
			*iParam1 = __LIB_13__::func_462(__LIB_17__::func_53(iParam0), 0);
			if (iParam0->f_2 == 63)
			{
				if (__LIB_17__::func_53(iParam0) == 8)
				{
					*iParam1 = __LIB_18__::func_161(MISC::GET_HASH_KEY(&(iParam0->f_3)), *iParam1);
					*iParam5 = 60;
					*iParam2 = 2;
					*iParam7 = 0;
				}
				else
				{
					*iParam2 = 2;
				}
				*sParam3 = { __LIB_13__::func_442(__LIB_17__::func_53(iParam0), 1, 0, 0) };
				*iParam6 = 1;
			}
			else if (iParam0->f_2 == 62)
			{
				*iParam2 = 2;
				*sParam3 = { __LIB_13__::func_442(__LIB_17__::func_53(iParam0), 1, 0, 0) };
				*iParam6 = 1;
			}
			else if (iParam0->f_2 < 32)
			{
				*iParam2 = 3;
				*iParam6 = 1;
				StringCopy(sParam4, __LIB_23__::func_504(iParam0), 64);
				*sParam3 = { __LIB_13__::func_442(__LIB_17__::func_53(iParam0), 0, bVar0, 0) };
			}
			return;
		case 192:
			*iParam1 = __LIB_13__::func_460(__LIB_17__::func_53(iParam0));
			if (iParam0->f_2 == 63)
			{
				*iParam2 = 2;
				*sParam3 = { __LIB_13__::func_440(__LIB_17__::func_53(iParam0), 1, 0) };
				*iParam6 = 1;
			}
			else if (iParam0->f_2 == 62)
			{
				*iParam2 = 2;
				*sParam3 = { __LIB_13__::func_440(__LIB_17__::func_53(iParam0), 1, 0) };
				*iParam6 = 1;
			}
			else if (iParam0->f_2 < 32)
			{
				*iParam2 = 3;
				*sParam3 = { __LIB_13__::func_440(__LIB_17__::func_53(iParam0), 0, bVar0) };
				StringCopy(sParam4, __LIB_23__::func_504(iParam0), 64);
				*iParam6 = 1;
			}
			return;
		case 184:
			*iParam1 = 119;
			*iParam2 = 1;
			return;
		case 193:
			if (iParam0->f_2 == 63)
			{
				*iParam1 = 305;
				*iParam2 = 2;
				StringCopy(sParam3, "FMMC_RSTAR_HM" /* GXT: Survival */, 24);
				*iParam6 = 1;
			}
			else if (iParam0->f_2 == 62)
			{
				*iParam1 = 305;
				*iParam2 = 2;
				StringCopy(sParam3, "FMMC_RSTAR_HM" /* GXT: Survival */, 24);
				*iParam6 = 1;
			}
			else if (iParam0->f_2 < 32)
			{
				*iParam1 = 305;
				*iParam2 = 3;
				*iParam6 = 1;
				if (bVar0)
				{
					StringCopy(sParam3, "FMMC_BM_HM" /* GXT: Bookmarked Survival */, 24);
				}
				else
				{
					StringCopy(sParam3, "FMMC_PL_HM" /* GXT: ~a~ Survival */, 24);
					StringCopy(sParam4, __LIB_23__::func_504(iParam0), 64);
				}
			}
			return;
		case 185:
			*iParam1 = 122;
			*iParam2 = 1;
			return;
		default:
	}
}

void func_135(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7, int iParam8)//Position - 0x55B5
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	int iVar27;
	int iVar28;
	int iVar29;
	int iVar30;
	int iVar31;
	bool bVar32;
	bool bVar33;
	float fVar34;
	float fVar35;
	float fVar36;
	float fVar37;
	struct<3> Var38;
	bool bVar39;
	float fVar40;
	float fVar41;
	float fVar42;
	float fVar43;
	float fVar44;
	int* iVar45;
	int* iVar46;
	int* iVar47;
	int* iVar48;
	float fVar49;
	bool bVar50;
	bool bVar51;
	bool bVar52;
	bool bVar53;
	float fVar54;
	float fVar55;
	float fVar56;
	float fVar57;
	int* iVar58;
	int* iVar59;
	float fVar60;
	char cVar61[64];
	char cVar62[64];
	float fVar63;
	int iVar64;
	float fVar65;
	float fVar66;
	int iVar67;
	int iVar68;
	int iVar69;
	int iVar70;
	int iVar71;
	int iVar72;
	char cVar73[16];
	float fVar74;
	float fVar75;
	float fVar76;
	float fVar77;
	float fVar78;
	if (!__LIB_1__::func_23(&iVar0, 0, iParam1))
	{
		return;
	}
	if (iVar0 == -1)
	{
	}
	if (!__LIB_3__::func_66(0, bParam6))
	{
		return;
	}
	GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
	GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(-0.05f, -0.05f, 0f, 0f);
	fVar55 = 0f;
	if (Global_23150)
	{
		if (__LIB_3__::func_124(29, 1, 1, &fVar36, &fVar37, bParam7))
		{
			fVar56 = (fVar37 / fVar36);
		}
		else
		{
			Global_23150 = 0;
		}
	}
	if (fParam5 == -1f)
	{
		fParam5 = Global_23149;
	}
	fVar55 = (fParam5 * fVar56);
	if (MISC::GET_HASH_KEY(&(Global_23150.f_1)) == MISC::GET_HASH_KEY("HIDE"))
	{
		fVar57 = Global_23148;
	}
	else
	{
		fVar57 = (((Global_23148 + fVar55) + 0.034722f) + 0f);
	}
	fVar60 = 1f;
	__LIB_3__::func_65(bParam7, &iVar58, &iVar59, &fVar60);
	if (bParam3)
	{
		if (Global_23150.f_5609 <= 1)
		{
			__LIB_23__::func_494(Global_23150.f_5609 + 1, "DFLT_MNU_OPT" /* GXT: Exit */, 0, 1, 0, 0, 0);
			Global_23150.f_6405 = 1;
		}
	}
	iVar5 = 0;
	while (iVar5 < 2)
	{
		if (iVar5 == 1 && Global_23150.f_6119)
		{
			if (MISC::GET_HASH_KEY(&(Global_23150.f_1)) == MISC::GET_HASH_KEY("HIDE"))
			{
				fVar49 = Global_23148;
			}
			else
			{
				if (Global_23150)
				{
					StringCopy(&cVar61, __LIB_3__::func_49(29), 64);
					StringCopy(&cVar62, __LIB_3__::func_64(29, 1), 64);
					if (MISC::GET_HASH_KEY(&(Global_23150.f_7420[29 /*16*/])) == joaat("CREW_LOGO"))
					{
						__LIB_3__::func_48(Global_23147, Global_23148, fParam5, fVar55, 0, 0, 0, 255);
						GRAPHICS::DRAW_SPRITE(&cVar61, &cVar62, (Global_23147 + (fParam5 * 0.5f)), (Global_23148 + (fVar55 * 0.5f)), fParam5, fVar55, 0f, 255, 255, 255, 255, false, 0);
					}
					else
					{
						GRAPHICS::DRAW_SPRITE(&cVar61, &cVar62, (Global_23147 + (fParam5 * 0.5f)), (Global_23148 + (fVar55 * 0.5f)), fParam5, fVar55, 0f, 255, 255, 255, 255, false, 0);
					}
				}
				if (Global_23150.f_8778)
				{
					iVar1 = Global_23150.f_8774;
					iVar2 = Global_23150.f_8775;
					iVar3 = Global_23150.f_8776;
					iVar4 = Global_23150.f_8777;
				}
				else
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 255;
				}
				__LIB_3__::func_48(Global_23147, (Global_23148 + fVar55), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				fVar49 = (((Global_23148 + fVar55) + 0.034722f) + 0f);
				if (MISC::GET_HASH_KEY(&(Global_23150.f_1)) != 0)
				{
					__LIB_3__::func_47();
					HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_23150.f_1));
					iVar15 = 0;
					iVar16 = 0;
					iVar17 = 0;
					iVar18 = 0;
					iVar14 = 0;
					while (iVar14 < Global_23150.f_74)
					{
						if (Global_23150.f_5[iVar14] == 2)
						{
							HUD::ADD_TEXT_COMPONENT_INTEGER(Global_23150.f_10[iVar15]);
							iVar15++;
						}
						else if (Global_23150.f_5[iVar14] == 3)
						{
							HUD::ADD_TEXT_COMPONENT_FLOAT(Global_23150.f_14[iVar16], Global_23150.f_18[iVar16]);
							iVar16++;
						}
						else if (Global_23150.f_5[iVar14] == 1)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23150.f_22[iVar17 /*6*/]));
							iVar17++;
						}
						else if (Global_23150.f_5[iVar14] == 8)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23150.f_22[iVar17 /*6*/]));
							iVar17++;
						}
						else if (Global_23150.f_5[iVar14] == 5)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_23150.f_41[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_23150.f_5[iVar14] == 6)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23150.f_41[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_23150.f_5[iVar14] == 7)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_23150.f_41[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_23150.f_5[iVar14] == 9)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_23150.f_41[iVar18 /*16*/]));
							iVar18++;
						}
						iVar14++;
					}
					HUD::END_TEXT_COMMAND_DISPLAY_TEXT((Global_23147 + 0.00390625f), ((Global_23148 + fVar55) + 0.00416664f), 0);
				}
				if (Global_23150.f_6126)
				{
					__LIB_3__::func_47();
					__LIB_3__::func_46((((Global_23147 + fParam5) - 0.00390625f) - __LIB_3__::func_123("CM_ITEM_COUNT" /* GXT: ~1~ / ~1~ */, Global_23150.f_6127, Global_23150.f_6128)), ((Global_23148 + fVar55) + 0.00416664f), "CM_ITEM_COUNT" /* GXT: ~1~ / ~1~ */, Global_23150.f_6127, Global_23150.f_6128);
				}
				else if (Global_23150.f_6122 > Global_23150.f_5616)
				{
					if (Global_23150.f_6125 != 0)
					{
						__LIB_3__::func_47();
						__LIB_3__::func_46((((Global_23147 + fParam5) - 0.00390625f) - __LIB_3__::func_123("CM_ITEM_COUNT" /* GXT: ~1~ / ~1~ */, Global_23150.f_6125, Global_23150.f_6124)), ((Global_23148 + fVar55) + 0.00416664f), "CM_ITEM_COUNT" /* GXT: ~1~ / ~1~ */, Global_23150.f_6125, Global_23150.f_6124);
					}
				}
			}
			iVar6 = Global_23150.f_6129;
			iVar9 = 0;
			fVar63 = fVar49;
			if (Global_23150.f_8788)
			{
				iVar1 = Global_23150.f_8784;
				iVar2 = Global_23150.f_8785;
				iVar3 = Global_23150.f_8786;
				iVar4 = Global_23150.f_8787;
			}
			else
			{
				HUD::GET_HUD_COLOUR(140, &iVar1, &iVar2, &iVar3, &iVar4);
			}
			while (iVar9 < Global_23150.f_5616 && iVar6 <= Global_23150.f_5609)
			{
				if (iVar6 >= 0)
				{
					if (Global_23150.f_5876[iVar6])
					{
						if (Global_23150.f_5747[iVar6] && iVar6 != Global_23150.f_6129)
						{
							fVar49 = (fVar49 + 0.00277776f);
						}
						fVar54 = 0.034722f;
						if (Global_23150.f_6136[iVar6] != 0f)
						{
							fVar54 = Global_23150.f_6136[iVar6];
						}
						fVar49 = (fVar49 + fVar54);
						iVar9++;
					}
				}
				iVar6++;
			}
			GRAPHICS::DRAW_SPRITE("CommonMenu", "Gradient_Bgd", (Global_23147 + (fParam5 * 0.5f)), ((fVar63 + ((fVar49 - fVar63) * 0.5f)) - 0.00138888f), fParam5, (fVar49 - fVar63), 0f, 255, 255, 255, 255, false, 0);
			if (Global_23150.f_6122 > Global_23150.f_5616)
			{
				if (Global_23150.f_8793)
				{
					iVar1 = Global_23150.f_8789;
					iVar2 = Global_23150.f_8790;
					iVar3 = Global_23150.f_8791;
					iVar4 = Global_23150.f_8792;
				}
				else
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 204;
				}
				__LIB_3__::func_48(Global_23147, (fVar49 + 0f), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				Var38 = { GRAPHICS::GET_TEXTURE_RESOLUTION("CommonMenu", "shop_arrows_upANDdown") };
				Var38.f_0 = (Var38.f_0 * (0.5f / fVar60));
				Var38.f_1 = (Var38.f_1 * (0.5f / fVar60));
				if (Global_23150.f_8806)
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 255;
				}
				else
				{
					HUD::GET_HUD_COLOUR(1, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				GRAPHICS::DRAW_SPRITE("CommonMenu", "shop_arrows_upANDdown", (Global_23147 + (fParam5 * 0.5f)), ((fVar49 + 0f) + (0.034722f * 0.5f)), ((Var38.f_0 / 1280f) * fVar60), ((Var38.f_1 / 720f) * fVar60), 0f, iVar1, iVar2, iVar3, iVar4, false, 0);
				fVar49 = (fVar49 + (0f + 0.034722f));
			}
			if (MISC::GET_HASH_KEY(&(Global_23150.f_5081)) != 0 && Global_23150.f_5157 != -1)
			{
				fVar49 = (fVar49 + (0.00277776f * 2f));
				fVar40 = (Global_23147 + 0.0046875f);
				if (Global_23150.f_5159 != 0)
				{
					__LIB_3__::func_124(Global_23150.f_5159, 1, 1, &fVar36, &fVar37, bParam7);
					fVar40 = (((Global_23147 + fVar36) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				__LIB_3__::func_45(fVar40);
				HUD::BEGIN_TEXT_COMMAND_GET_NUMBER_OF_LINES_FOR_STRING(&(Global_23150.f_5081));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_23150.f_5153)
				{
					if (Global_23150.f_5087[iVar14] == 2)
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(Global_23150.f_5092[iVar15]);
						iVar15++;
					}
					else if (Global_23150.f_5087[iVar14] == 3)
					{
						HUD::ADD_TEXT_COMPONENT_FLOAT(Global_23150.f_5096[iVar16], Global_23150.f_5100[iVar16]);
						iVar16++;
					}
					else if (Global_23150.f_5087[iVar14] == 1)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23150.f_5104[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23150.f_5087[iVar14] == 5)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_23150.f_5104[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23150.f_5087[iVar14] == 6)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23150.f_5104[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23150.f_5087[iVar14] == 7)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_23150.f_5104[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23150.f_5087[iVar14] == 9)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_23150.f_5104[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = HUD::END_TEXT_COMMAND_GET_NUMBER_OF_LINES_FOR_STRING(fVar40, (fVar49 + 0.00277776f));
				HUD::GET_HUD_COLOUR(2, &iVar1, &iVar2, &iVar3, &iVar4);
				__LIB_3__::func_48(Global_23147, (fVar49 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_23150.f_8798)
				{
					iVar1 = Global_23150.f_8794;
					iVar2 = Global_23150.f_8795;
					iVar3 = Global_23150.f_8796;
					iVar4 = Global_23150.f_8797;
				}
				else
				{
					HUD::GET_HUD_COLOUR(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				GRAPHICS::DRAW_SPRITE("CommonMenu", "Gradient_Bgd", (Global_23147 + (fParam5 * 0.5f)), ((fVar49 + ((((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, false, 0);
				__LIB_3__::func_45(fVar40);
				HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_23150.f_5081));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_23150.f_5153)
				{
					if (Global_23150.f_5087[iVar14] == 2)
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(Global_23150.f_5092[iVar15]);
						iVar15++;
					}
					else if (Global_23150.f_5087[iVar14] == 3)
					{
						HUD::ADD_TEXT_COMPONENT_FLOAT(Global_23150.f_5096[iVar16], Global_23150.f_5100[iVar16]);
						iVar16++;
					}
					else if (Global_23150.f_5087[iVar14] == 1)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23150.f_5104[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23150.f_5087[iVar14] == 5)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_23150.f_5104[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23150.f_5087[iVar14] == 6)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23150.f_5104[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23150.f_5087[iVar14] == 7)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_23150.f_5104[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23150.f_5087[iVar14] == 9)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_23150.f_5104[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23150.f_5087[iVar14] == 8)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23150.f_5104[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fVar40, (fVar49 + 0.00277776f), 0);
				if (Global_23150.f_5159 != 0)
				{
					__LIB_3__::func_124(Global_23150.f_5159, 1, 1, &fVar36, &fVar37, bParam7);
					__LIB_3__::func_44(Global_23150.f_5159, 1, &iVar45, &iVar46, &iVar47, &iVar48);
					GRAPHICS::DRAW_SPRITE(__LIB_3__::func_49(Global_23150.f_5159), __LIB_3__::func_64(Global_23150.f_5159, 1), ((Global_23147 + (fVar36 * 0.5f)) + (0.00078125f * 2f)), ((fVar49 + (fVar37 * 0.5f)) - (0.00138888f * 4f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, false, 0);
				}
				fVar49 = (fVar49 + (((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				if (Global_23150.f_5157 > 0)
				{
					if ((MISC::GET_GAME_TIMER() - Global_23150.f_5158) > Global_23150.f_5157)
					{
						StringCopy(&(Global_23150.f_5081), "", 24);
						Global_23150.f_5157 = -1;
					}
				}
			}
			if (MISC::GET_HASH_KEY(&(Global_4539885.f_21)) != 0 && Global_4539885.f_65 != -1)
			{
				fVar49 = (fVar49 + (0.00277776f * 2f));
				fVar40 = (Global_23147 + 0.0046875f);
				if (Global_4539885.f_67 != 0)
				{
					__LIB_3__::func_124(Global_4539885.f_67, 1, 1, &fVar36, &fVar37, bParam7);
					fVar40 = (((Global_23147 + fVar36) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				__LIB_3__::func_45(fVar40);
				HUD::BEGIN_TEXT_COMMAND_GET_NUMBER_OF_LINES_FOR_STRING(&(Global_4539885.f_21));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_4539885.f_61)
				{
					if (Global_4539885.f_25[iVar14] == 2)
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(Global_4539885.f_30[iVar15]);
						iVar15++;
					}
					else if (Global_4539885.f_25[iVar14] == 3)
					{
						HUD::ADD_TEXT_COMPONENT_FLOAT(Global_4539885.f_34[iVar16], Global_4539885.f_38[iVar16]);
						iVar16++;
					}
					else if (Global_4539885.f_25[iVar14] == 1)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4539885.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4539885.f_25[iVar14] == 5)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4539885.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4539885.f_25[iVar14] == 6)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4539885.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4539885.f_25[iVar14] == 7)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4539885.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4539885.f_25[iVar14] == 9)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4539885.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4539885.f_25[iVar14] == 8)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4539885.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = HUD::END_TEXT_COMMAND_GET_NUMBER_OF_LINES_FOR_STRING(fVar40, (fVar49 + 0.00277776f));
				HUD::GET_HUD_COLOUR(2, &iVar1, &iVar2, &iVar3, &iVar4);
				__LIB_3__::func_48(Global_23147, (fVar49 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_23150.f_8798)
				{
					iVar1 = Global_23150.f_8794;
					iVar2 = Global_23150.f_8795;
					iVar3 = Global_23150.f_8796;
					iVar4 = Global_23150.f_8797;
				}
				else
				{
					HUD::GET_HUD_COLOUR(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				GRAPHICS::DRAW_SPRITE("CommonMenu", "Gradient_Bgd", (Global_23147 + (fParam5 * 0.5f)), ((fVar49 + ((((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, false, 0);
				__LIB_3__::func_45(fVar40);
				HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_4539885.f_21));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_4539885.f_61)
				{
					if (Global_4539885.f_25[iVar14] == 2)
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(Global_4539885.f_30[iVar15]);
						iVar15++;
					}
					else if (Global_4539885.f_25[iVar14] == 3)
					{
						HUD::ADD_TEXT_COMPONENT_FLOAT(Global_4539885.f_34[iVar16], Global_4539885.f_38[iVar16]);
						iVar16++;
					}
					else if (Global_4539885.f_25[iVar14] == 1)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4539885.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4539885.f_25[iVar14] == 8)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4539885.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4539885.f_25[iVar14] == 5)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4539885.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4539885.f_25[iVar14] == 6)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4539885.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4539885.f_25[iVar14] == 7)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4539885.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4539885.f_25[iVar14] == 9)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4539885.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					iVar14++;
				}
				HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fVar40, (fVar49 + 0.00277776f), 0);
				if (Global_4539885.f_67 != 0)
				{
					__LIB_3__::func_124(Global_4539885.f_67, 1, 1, &fVar36, &fVar37, bParam7);
					__LIB_3__::func_44(Global_4539885.f_67, 1, &iVar45, &iVar46, &iVar47, &iVar48);
					GRAPHICS::DRAW_SPRITE(__LIB_3__::func_49(Global_4539885.f_67), __LIB_3__::func_64(Global_4539885.f_67, 1), ((Global_23147 + (fVar36 * 0.5f)) + (0.00078125f * 2f)), ((fVar49 + (fVar37 * 0.5f)) - (0.00138888f * 4f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, false, 0);
				}
				fVar49 = (fVar49 + (((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				if (Global_4539885.f_65 > 0)
				{
					if ((MISC::GET_GAME_TIMER() - Global_4539885.f_66) > Global_4539885.f_65)
					{
						StringCopy(&(Global_4539885.f_21), "", 16);
						Global_4539885.f_65 = -1;
					}
				}
			}
			__LIB_3__::func_129(iVar58, iParam1, iParam8, 0, 0, 0, bParam4, 1, 0);
			GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
			GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(-0.05f, -0.05f, 0f, 0f);
		}
		if (iVar5 == 1 || !Global_23150.f_6119)
		{
			iVar19 = 0;
			iVar23 = 0;
			iVar20 = 0;
			iVar21 = 0;
			iVar22 = 0;
			iVar9 = 0;
			iVar10 = 0;
			iVar11 = 0;
			iVar12 = 0;
			iVar13 = 0;
			iVar64 = Global_23150.f_5609;
			if (Global_23150.f_6120)
			{
				iVar64 = (Global_23150.f_6123 - 1);
			}
			fVar65 = 0f;
			fVar66 = 0f;
			iVar7 = 0;
			while (iVar7 <= iVar64)
			{
				fVar54 = 0.034722f;
				if (Global_23150.f_6136[iVar6] != 0f)
				{
					fVar54 = Global_23150.f_6136[iVar6];
				}
				if (Global_23150.f_6120)
				{
					iVar6 = Global_23150.f_8429[iVar7];
				}
				else
				{
					iVar6 = iVar7;
				}
				iVar12 = iVar13;
				bVar33 = false;
				if (iVar6 >= Global_23150.f_6129 && iVar9 < Global_23150.f_5616)
				{
					bVar33 = true;
					if (Global_23150.f_6130 == iVar6)
					{
						fVar66 = fVar65;
					}
					if (Global_23150.f_5747[iVar6])
					{
						iVar12++;
					}
					fVar35 = (((fVar57 + fVar65) + (0.00277776f * IntToFloat(iVar12))) + 0.00277776f);
				}
				Global_23150.f_6270[iVar6] = fVar35;
				fVar34 = (Global_23147 + 0.0046875f);
				bVar39 = false;
				bVar32 = Global_23150.f_6130 == iVar6;
				if ((bVar32 && iVar5 == 1) && bVar33)
				{
					iVar68 = 255;
					iVar69 = 255;
					iVar70 = 255;
					iVar71 = 255;
					if (Global_23150.f_8800)
					{
						HUD::GET_HUD_COLOUR(Global_23150.f_8799, &iVar68, &iVar69, &iVar70, &iVar71);
					}
					else
					{
						HUD::GET_HUD_COLOUR(1, &iVar68, &iVar69, &iVar70, &iVar71);
					}
					GRAPHICS::DRAW_SPRITE("CommonMenu", "Gradient_Nav", (Global_23147 + (fParam5 * 0.5f)), (((fVar57 + fVar66) + (0.00277776f * IntToFloat(iVar12))) + (fVar54 * 0.5f)), fParam5, fVar54, 0f, iVar68, iVar69, iVar70, iVar71, false, 0);
					Global_23150.f_6268 = fVar35;
				}
				iVar8 = 0;
				while (iVar8 < Global_23150.f_5617)
				{
					if (BitTest(Global_23150.f_5480[iVar6], iVar8) || Global_23150.f_5447[iVar8] == 5)
					{
						if (Global_23150.f_6120)
						{
							iVar19 = Global_23150.f_8445[((iVar9 * Global_23150.f_5617) + iVar8)];
							iVar20 = Global_23150.f_8486[((iVar9 * Global_23150.f_5617) + iVar8)];
							iVar21 = Global_23150.f_8527[((iVar9 * Global_23150.f_5617) + iVar8)];
							iVar22 = Global_23150.f_8568[((iVar9 * Global_23150.f_5617) + iVar8)];
							iVar23 = Global_23150.f_8609[((iVar9 * Global_23150.f_5617) + iVar8)];
						}
						else
						{
							Global_23150.f_8445[((iVar9 * Global_23150.f_5617) + iVar8)] = iVar19;
							Global_23150.f_8486[((iVar9 * Global_23150.f_5617) + iVar8)] = iVar20;
							Global_23150.f_8527[((iVar9 * Global_23150.f_5617) + iVar8)] = iVar21;
							Global_23150.f_8568[((iVar9 * Global_23150.f_5617) + iVar8)] = iVar22;
							Global_23150.f_8609[((iVar9 * Global_23150.f_5617) + iVar8)] = iVar23;
						}
						iVar72 = 0;
						bVar53 = false;
						if (Global_23150.f_6402[0] != -1)
						{
							if ((iVar6 * 5 + iVar8) == Global_23150.f_6399[0])
							{
								bVar53 = true;
								iVar72 = 0;
							}
						}
						if (Global_23150.f_6402[1] != -1)
						{
							if ((iVar6 * 5 + iVar8) == Global_23150.f_6399[1])
							{
								bVar53 = true;
								iVar72 = 1;
							}
						}
						if (Global_23150.f_5453[iVar8] != -1f)
						{
							fVar34 = ((Global_23147 + 0.0046875f) + Global_23150.f_5453[iVar8]);
						}
						if ((iVar8 < 4 && Global_23150.f_5453[iVar8 + 1] != -1f) && fVar34 < Global_23150.f_5453[iVar8 + 1])
						{
							fVar44 = (Global_23150.f_5453[iVar8 + 1] - fVar34);
						}
						else
						{
							fVar44 = (((Global_23147 + Global_23149) - 0.0046875f) - fVar34);
						}
						if ((Global_23150.f_5466[iVar8] && Global_23150.f_6265) && bVar32)
						{
							bVar52 = true;
						}
						else
						{
							bVar52 = false;
						}
						switch (Global_23150.f_5447[iVar8])
						{
							case 0:
								break;
							case 1:
								iVar24 = iVar19;
								if (bVar33)
								{
									if (!Global_23150.f_6120)
									{
										fVar41 = 0f;
										fVar42 = 0f;
										iVar25 = 0;
										iVar26 = 0;
										iVar27 = 0;
										iVar28 = 0;
										iVar29 = 0;
										if (MISC::GET_HASH_KEY(&(Global_23150.f_79[iVar24 /*6*/])) != 0)
										{
											bVar50 = false;
											bVar51 = false;
											iVar14 = 0;
											while (iVar14 < 4)
											{
												if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 5 || Global_23150.f_2387[iVar24 /*5*/][iVar14] == 8)
												{
													bVar51 = true;
												}
												else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 9)
												{
													bVar50 = true;
												}
												iVar14++;
											}
											if (Global_23150.f_2130[iVar24])
											{
												bVar51 = true;
											}
											__LIB_3__::func_62(bVar32, Global_23150.f_1616[iVar24], Global_23150.f_1873[iVar24], bVar53, iVar72, bVar51, bVar50);
											HUD::BEGIN_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(&(Global_23150.f_79[iVar24 /*6*/]));
										}
										iVar14 = 0;
										while (iVar14 < 4)
										{
											if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 1)
											{
												iVar25++;
												if (MISC::GET_HASH_KEY(&(Global_23150.f_79[iVar24 /*6*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23150.f_79[(iVar24 + iVar25) /*6*/]));
												}
											}
											else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 8)
											{
												iVar25++;
												if (MISC::GET_HASH_KEY(&(Global_23150.f_79[iVar24 /*6*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23150.f_79[(iVar24 + iVar25) /*6*/]));
												}
											}
											else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 5)
											{
												if (MISC::GET_HASH_KEY(&(Global_23150.f_79[iVar24 /*6*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2725950[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
											}
											else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 6)
											{
												if (MISC::GET_HASH_KEY(&(Global_23150.f_79[iVar24 /*6*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_2725950[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
											}
											else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 7)
											{
												if (MISC::GET_HASH_KEY(&(Global_23150.f_79[iVar24 /*6*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2725950[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
											}
											else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 9)
											{
												if (MISC::GET_HASH_KEY(&(Global_23150.f_79[iVar24 /*6*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2725950[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
											}
											else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 2)
											{
												if (MISC::GET_HASH_KEY(&(Global_23150.f_79[iVar24 /*6*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_INTEGER(Global_23150.f_4309[(iVar20 + iVar26)]);
												}
												iVar26++;
											}
											else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 3)
											{
												if (MISC::GET_HASH_KEY(&(Global_23150.f_79[iVar24 /*6*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_FLOAT(Global_23150.f_4566[(iVar21 + iVar27)], Global_23150.f_4695[(iVar21 + iVar27)]);
												}
												iVar27++;
											}
											else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 4)
											{
												iVar28++;
											}
											iVar14++;
										}
										if (MISC::GET_HASH_KEY(&(Global_23150.f_79[iVar24 /*6*/])) != 0)
										{
											fVar41 = HUD::END_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(true);
										}
										if (iVar28 > 0)
										{
											iVar14 = 0;
											while (iVar14 < iVar28)
											{
												if (__LIB_3__::func_124(Global_23150.f_4824[(iVar22 + iVar14)], bVar32, 0, &fVar36, &fVar37, bParam7))
												{
													fVar42 = (fVar42 + fVar36);
													if (iVar14 > 0)
													{
														fVar42 = (fVar42 - (0.00078125f * 4f));
													}
													if ((Global_23150.f_4824[(iVar22 + iVar14)] == 2 || Global_23150.f_4824[(iVar22 + iVar14)] == 51) || Global_23150.f_4824[(iVar22 + iVar14)] == 61)
													{
														fVar42 = (fVar42 - (0.00078125f * 5f));
													}
												}
												iVar14++;
											}
										}
										fVar40 = 0f;
										if (Global_23150.f_5474[iVar8] == 2)
										{
											fVar40 = (fVar40 + ((fVar44 - (fVar41 + fVar42)) + (0.00078125f * 1f)));
										}
										else if (Global_23150.f_5474[iVar8] == 0)
										{
											fVar40 = (fVar40 + (((fVar44 - fVar34) * 0.5f) - ((fVar41 + fVar42) * 0.5f)));
										}
										Global_23150.f_8650[((iVar9 * Global_23150.f_5617) + iVar8)] = fVar40;
										Global_23150.f_8691[((iVar9 * Global_23150.f_5617) + iVar8)] = fVar41;
										Global_23150.f_8732[((iVar9 * Global_23150.f_5617) + iVar8)] = fVar42;
										if (Global_23150.f_5474[iVar8] == 2)
										{
											iVar67 = (iVar8 - 1);
											while (iVar67 >= 0)
											{
												if (Global_23150.f_5474[iVar67] == 2)
												{
													Global_23150.f_8650[((iVar9 * Global_23150.f_5617) + iVar67)] = (Global_23150.f_8650[((iVar9 * Global_23150.f_5617) + iVar67)] - Global_23150.f_5459[iVar8]);
												}
												iVar67 = (iVar67 + -1);
											}
										}
									}
									else
									{
										fVar40 = Global_23150.f_8650[((iVar9 * Global_23150.f_5617) + iVar8)];
										fVar41 = Global_23150.f_8691[((iVar9 * Global_23150.f_5617) + iVar8)];
										fVar42 = Global_23150.f_8732[((iVar9 * Global_23150.f_5617) + iVar8)];
									}
									if (bVar52)
									{
										if (__LIB_3__::func_124(26, 1, 0, &fVar36, &fVar37, bParam7))
										{
											if (Global_23150.f_5474[iVar8] == 2)
											{
												fVar40 = (fVar40 - (fVar36 * 2f));
											}
											fVar43 = (fVar36 * 0.5f);
											if (__LIB_3__::func_124(26, 1, 1, &fVar36, &fVar37, bParam7))
											{
												__LIB_3__::func_44(26, 1, &iVar45, &iVar46, &iVar47, &iVar48);
												if (iVar5 == 1)
												{
													GRAPHICS::DRAW_SPRITE(__LIB_3__::func_49(26), __LIB_3__::func_64(26, 1), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, false, 0);
												}
											}
										}
										if (__LIB_3__::func_124(27, 1, 0, &fVar36, &fVar37, bParam7))
										{
											fVar40 = (fVar40 + fVar36);
											fVar43 = (fVar36 * 0.5f);
											if (__LIB_3__::func_124(27, 1, 1, &fVar36, &fVar37, bParam7))
											{
												__LIB_3__::func_44(27, 1, &iVar45, &iVar46, &iVar47, &iVar48);
												if (iVar5 == 1)
												{
													GRAPHICS::DRAW_SPRITE(__LIB_3__::func_49(27), __LIB_3__::func_64(27, 1), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, false, 0);
												}
											}
										}
									}
									iVar25 = 0;
									iVar26 = 0;
									iVar27 = 0;
									iVar28 = 0;
									iVar29 = 0;
									iVar31 = 0;
									if (MISC::GET_HASH_KEY(&(Global_23150.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
									{
										bVar50 = false;
										bVar51 = false;
										iVar14 = 0;
										while (iVar14 < 4)
										{
											if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 5 || Global_23150.f_2387[iVar24 /*5*/][iVar14] == 8)
											{
												bVar51 = true;
											}
											else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 9)
											{
												bVar50 = true;
											}
											iVar14++;
										}
										if (Global_23150.f_2130[iVar24])
										{
											bVar51 = true;
										}
										__LIB_3__::func_62(bVar32, Global_23150.f_1616[iVar24], Global_23150.f_1873[iVar24], bVar53, 0, bVar51, bVar50);
										if (Global_23150.f_8804 && Global_23150.f_8805 == iVar6)
										{
											__LIB_3__::func_43(bVar32);
										}
										HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_23150.f_79[iVar24 /*6*/]));
									}
									iVar14 = 0;
									while (iVar14 < 4)
									{
										if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 1)
										{
											iVar25++;
											if (MISC::GET_HASH_KEY(&(Global_23150.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23150.f_79[(iVar24 + iVar25) /*6*/]));
											}
											iVar31 = 1;
										}
										else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 8)
										{
											iVar25++;
											if (MISC::GET_HASH_KEY(&(Global_23150.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23150.f_79[(iVar24 + iVar25) /*6*/]));
											}
											iVar31 = 8;
										}
										else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 5)
										{
											if (MISC::GET_HASH_KEY(&(Global_23150.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2725950[(iVar23 + iVar29) /*16*/]));
											}
											iVar29++;
											iVar31 = 5;
										}
										else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 6)
										{
											if (MISC::GET_HASH_KEY(&(Global_23150.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_2725950[(iVar23 + iVar29) /*16*/]));
											}
											iVar29++;
											iVar31 = 6;
										}
										else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 7)
										{
											if (MISC::GET_HASH_KEY(&(Global_23150.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2725950[(iVar23 + iVar29) /*16*/]));
											}
											iVar29++;
											iVar31 = 7;
										}
										else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 9)
										{
											if (MISC::GET_HASH_KEY(&(Global_23150.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2725950[(iVar23 + iVar29) /*16*/]));
											}
											iVar29++;
											iVar31 = 9;
										}
										else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 2)
										{
											if (MISC::GET_HASH_KEY(&(Global_23150.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												HUD::ADD_TEXT_COMPONENT_INTEGER(Global_23150.f_4309[(iVar20 + iVar26)]);
											}
											iVar26++;
											iVar31 = 2;
										}
										else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 3)
										{
											if (MISC::GET_HASH_KEY(&(Global_23150.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												HUD::ADD_TEXT_COMPONENT_FLOAT(Global_23150.f_4566[(iVar21 + iVar27)], Global_23150.f_4695[(iVar21 + iVar27)]);
											}
											iVar27++;
											iVar31 = 3;
										}
										else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 4)
										{
											if ((Global_23150.f_4824[(iVar22 + iVar28)] == 2 || Global_23150.f_4824[(iVar22 + iVar28)] == 51) || Global_23150.f_4824[(iVar22 + iVar28)] == 61)
											{
												if (__LIB_3__::func_124(Global_23150.f_4824[(iVar22 + iVar28)], bVar32, 0, &fVar36, &fVar37, bParam7))
												{
													fVar40 = (fVar40 + (fVar36 * 0.5f));
													if (__LIB_3__::func_124(Global_23150.f_4824[(iVar22 + iVar28)], bVar32, 1, &fVar36, &fVar37, bParam7))
													{
														__LIB_3__::func_44(Global_23150.f_4824[(iVar22 + iVar28)], bVar32, &iVar45, &iVar46, &iVar47, &iVar48);
														if (iVar5 == 1)
														{
															if (Global_23150.f_5474[iVar8] == 2)
															{
																GRAPHICS::DRAW_SPRITE(__LIB_3__::func_49(Global_23150.f_4824[(iVar22 + iVar28)]), __LIB_3__::func_64(Global_23150.f_4824[(iVar22 + iVar28)], bVar32), (((fVar34 + fVar40) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, false, 0);
															}
															else
															{
																GRAPHICS::DRAW_SPRITE(__LIB_3__::func_49(Global_23150.f_4824[(iVar22 + iVar28)]), __LIB_3__::func_64(Global_23150.f_4824[(iVar22 + iVar28)], bVar32), ((fVar34 + fVar40) - (0.00078125f * 8f)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, false, 0);
															}
														}
														fVar40 = (fVar40 + (0.00078125f * 3f));
													}
												}
											}
											iVar28++;
											iVar31 = 4;
										}
										iVar14++;
									}
									if (MISC::GET_HASH_KEY(&(Global_23150.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
									{
										if (iVar31 == 4 && Global_23150.f_5474[iVar8] == 2)
										{
											HUD::END_TEXT_COMMAND_DISPLAY_TEXT(((fVar34 + fVar40) + (0.00078125f * 7f)), fVar35, 0);
										}
										else
										{
											HUD::END_TEXT_COMMAND_DISPLAY_TEXT((fVar34 + fVar40), fVar35, 0);
											if (__LIB_0__::func_261() && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("fm_mission_creator")) > 0)
											{
												if (iVar8 == 0)
												{
													if (Global_23150.f_2130[iVar24])
													{
														bVar51 = true;
													}
													__LIB_3__::func_62(0, Global_23150.f_1616[iVar24], Global_23150.f_1873[iVar24], bVar53, 0, bVar51, bVar50);
													StringCopy(&cVar73, "TEST_LABEL", 16);
													fVar74 = 0f;
													fVar75 = 55f;
													fVar76 = 0.0185f;
													fVar77 = 0.004f;
													fVar78 = 0.02f;
													HUD::SET_TEXT_SCALE(0f, (0.35f * 0.7f));
													HUD::SET_TEXT_COLOUR(255, 255, 255, 150);
													GRAPHICS::DRAW_RECT((fVar34 - (fVar78 * 0.6f)), (fVar35 + (fVar76 * 0.75f)), 0.0175f, 0.035f, SYSTEM::FLOOR(fVar74), SYSTEM::FLOOR(fVar74), SYSTEM::FLOOR(fVar74), SYSTEM::FLOOR(fVar75), false);
													HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&cVar73);
													HUD::ADD_TEXT_COMPONENT_INTEGER((Global_23150.f_6129 + iVar30));
													HUD::END_TEXT_COMMAND_DISPLAY_TEXT((fVar34 - fVar78), (fVar35 + fVar77), 0);
													iVar30++;
												}
											}
										}
									}
									if (iVar28 > 0)
									{
										fVar40 = (fVar40 + (6f * 0.00078125f));
										iVar14 = 0;
										while (iVar14 < iVar28)
										{
											if ((Global_23150.f_4824[(iVar22 + iVar14)] != 2 && Global_23150.f_4824[(iVar22 + iVar14)] != 51) && Global_23150.f_4824[(iVar22 + iVar14)] != 61)
											{
												if (__LIB_3__::func_124(Global_23150.f_4824[(iVar22 + iVar14)], bVar32, 0, &fVar36, &fVar37, bParam7))
												{
													fVar40 = (fVar40 + (fVar36 * 0.5f));
													if (iVar5 == 1)
													{
														if (__LIB_3__::func_124(Global_23150.f_4824[(iVar22 + iVar14)], bVar32, 1, &fVar36, &fVar37, bParam7))
														{
															__LIB_3__::func_44(Global_23150.f_4824[(iVar22 + iVar14)], bVar32, &iVar45, &iVar46, &iVar47, &iVar48);
															if (Global_23150.f_4824[(iVar22 + iVar14)] == 30)
															{
																GRAPHICS::DRAW_SPRITE(__LIB_3__::func_49(Global_23150.f_4824[(iVar22 + iVar14)]), __LIB_3__::func_64(Global_23150.f_4824[(iVar22 + iVar14)], bVar32), (Global_23147 + (fVar36 * 0.5f)), (((fVar35 + 0.00277776f) + (fVar37 * 0.5f)) - (0.00078125f * 11f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, false, 0);
															}
															else if (Global_23150.f_5474[iVar8] == 2)
															{
																GRAPHICS::DRAW_SPRITE(__LIB_3__::func_49(Global_23150.f_4824[(iVar22 + iVar14)]), __LIB_3__::func_64(Global_23150.f_4824[(iVar22 + iVar14)], bVar32), ((((fVar34 + fVar40) + fVar41) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, false, 0);
															}
															else
															{
																GRAPHICS::DRAW_SPRITE(__LIB_3__::func_49(Global_23150.f_4824[(iVar22 + iVar14)]), __LIB_3__::func_64(Global_23150.f_4824[(iVar22 + iVar14)], bVar32), (((fVar34 + fVar40) + fVar41) - (0.00078125f * 12f)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, false, 0);
															}
														}
													}
													fVar40 = (fVar40 + (12f * 0.00078125f));
												}
											}
											iVar14++;
										}
									}
								}
								bVar39 = true;
								iVar19++;
								iVar14 = 0;
								while (iVar14 < 4)
								{
									if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 1)
									{
										iVar19++;
									}
									else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 8)
									{
										iVar19++;
									}
									else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 2)
									{
										iVar20++;
									}
									else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 3)
									{
										iVar21++;
									}
									else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 4)
									{
										iVar22++;
									}
									else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 5)
									{
										iVar23++;
									}
									else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 6)
									{
										iVar23++;
									}
									else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 7)
									{
										iVar23++;
									}
									else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 9)
									{
										iVar23++;
									}
									iVar14++;
								}
								break;
							case 2:
								if (bVar33)
								{
									if (!Global_23150.f_6120)
									{
										__LIB_3__::func_62(bVar32, Global_23150.f_1616[iVar24], Global_23150.f_1873[iVar24], bVar53, 0, 0, 0);
										if (Global_23150.f_8804 && Global_23150.f_8805 == iVar6)
										{
											__LIB_3__::func_43(bVar32);
										}
										HUD::BEGIN_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT("NUMBER");
										HUD::ADD_TEXT_COMPONENT_INTEGER(Global_23150.f_4309[iVar20]);
										fVar41 = HUD::END_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(true);
										fVar40 = 0f;
										if (Global_23150.f_5474[iVar8] == 2)
										{
											fVar40 = (fVar40 + ((fVar44 - fVar41) + (0.00078125f * 1f)));
										}
										else if (Global_23150.f_5474[iVar8] == 0)
										{
											fVar40 = (fVar40 + (((fVar44 - fVar34) * 0.5f) - (fVar41 * 0.5f)));
										}
										Global_23150.f_8650[((iVar9 * Global_23150.f_5617) + iVar8)] = fVar40;
										Global_23150.f_8691[((iVar9 * Global_23150.f_5617) + iVar8)] = fVar41;
									}
									else
									{
										fVar40 = Global_23150.f_8650[((iVar9 * Global_23150.f_5617) + iVar8)];
										fVar41 = Global_23150.f_8691[((iVar9 * Global_23150.f_5617) + iVar8)];
									}
									if (bVar52)
									{
										if (__LIB_3__::func_124(26, 1, 0, &fVar36, &fVar37, bParam7))
										{
											if (Global_23150.f_5474[iVar8] == 2)
											{
												fVar40 = (fVar40 - (fVar36 * 2f));
											}
											fVar43 = (fVar36 * 0.5f);
											if (__LIB_3__::func_124(26, 1, 1, &fVar36, &fVar37, bParam7))
											{
												__LIB_3__::func_44(26, 1, &iVar45, &iVar46, &iVar47, &iVar48);
												if (iVar5 == 1)
												{
													GRAPHICS::DRAW_SPRITE(__LIB_3__::func_49(26), __LIB_3__::func_64(26, 1), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, false, 0);
												}
											}
										}
										if (__LIB_3__::func_124(27, 1, 0, &fVar36, &fVar37, bParam7))
										{
											fVar40 = (fVar40 + fVar36);
											fVar43 = (fVar36 * 0.5f);
											if (__LIB_3__::func_124(27, 1, 1, &fVar36, &fVar37, bParam7))
											{
												__LIB_3__::func_44(27, 1, &iVar45, &iVar46, &iVar47, &iVar48);
												if (iVar5 == 1)
												{
													GRAPHICS::DRAW_SPRITE(__LIB_3__::func_49(27), __LIB_3__::func_64(27, 1), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, false, 0);
												}
											}
										}
									}
									if (iVar5 == 1)
									{
										__LIB_3__::func_62(bVar32, Global_23150.f_1616[iVar24], Global_23150.f_1873[iVar24], bVar53, 0, 0, 0);
										__LIB_3__::func_42((fVar34 + fVar40), fVar35, "NUMBER", Global_23150.f_4309[iVar20], 0);
									}
								}
								bVar39 = true;
								iVar20++;
								break;
							case 3:
								if (bVar33)
								{
									if (!Global_23150.f_6120)
									{
										__LIB_3__::func_62(bVar32, Global_23150.f_1616[iVar24], Global_23150.f_1873[iVar24], bVar53, 0, 0, 0);
										if (Global_23150.f_8804 && Global_23150.f_8805 == iVar6)
										{
											__LIB_3__::func_43(bVar32);
										}
										HUD::BEGIN_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT("NUMBER");
										HUD::ADD_TEXT_COMPONENT_FLOAT(Global_23150.f_4566[iVar21], Global_23150.f_4695[iVar21]);
										fVar41 = HUD::END_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(true);
										fVar40 = 0f;
										if (Global_23150.f_5474[iVar8] == 2)
										{
											fVar40 = (fVar40 + ((fVar44 - fVar41) + (0.00078125f * 1f)));
										}
										else if (Global_23150.f_5474[iVar8] == 0)
										{
											fVar40 = (fVar40 + (((fVar44 - fVar34) * 0.5f) - (fVar41 * 0.5f)));
										}
										Global_23150.f_8650[((iVar9 * Global_23150.f_5617) + iVar8)] = fVar40;
										Global_23150.f_8691[((iVar9 * Global_23150.f_5617) + iVar8)] = fVar41;
									}
									else
									{
										fVar40 = Global_23150.f_8650[((iVar9 * Global_23150.f_5617) + iVar8)];
										fVar41 = Global_23150.f_8691[((iVar9 * Global_23150.f_5617) + iVar8)];
									}
									if (bVar52)
									{
										if (__LIB_3__::func_124(26, 1, 0, &fVar36, &fVar37, 0))
										{
											if (Global_23150.f_5474[iVar8] == 2)
											{
												fVar40 = (fVar40 - (fVar36 * 2f));
											}
											fVar43 = (fVar36 * 0.5f);
											if (__LIB_3__::func_124(26, 1, 1, &fVar36, &fVar37, bParam7))
											{
												__LIB_3__::func_44(26, 1, &iVar45, &iVar46, &iVar47, &iVar48);
												if (iVar5 == 1)
												{
													GRAPHICS::DRAW_SPRITE(__LIB_3__::func_49(26), __LIB_3__::func_64(26, 1), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, false, 0);
												}
											}
										}
										if (__LIB_3__::func_124(27, 1, 0, &fVar36, &fVar37, bParam7))
										{
											fVar40 = (fVar40 + fVar36);
											fVar43 = (fVar36 * 0.5f);
											if (__LIB_3__::func_124(27, 1, 1, &fVar36, &fVar37, bParam7))
											{
												__LIB_3__::func_44(27, 1, &iVar45, &iVar46, &iVar47, &iVar48);
												if (iVar5 == 1)
												{
													GRAPHICS::DRAW_SPRITE(__LIB_3__::func_49(27), __LIB_3__::func_64(27, 1), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, false, 0);
												}
											}
										}
									}
									__LIB_3__::func_62(bVar32, Global_23150.f_1616[iVar24], Global_23150.f_1873[iVar24], bVar53, 0, 0, 0);
									__LIB_3__::func_41((fVar34 + fVar40), fVar35, "NUMBER", Global_23150.f_4566[iVar21], Global_23150.f_4695[iVar21]);
								}
								bVar39 = true;
								iVar21++;
								break;
							case 4:
								if (bVar33)
								{
									if (__LIB_3__::func_124(Global_23150.f_4824[iVar22], bVar32, 0, &fVar36, &fVar37, bParam7))
									{
										if (!Global_23150.f_6120)
										{
											fVar42 = fVar36;
											fVar40 = 0f;
											if (Global_23150.f_5474[iVar8] == 2)
											{
												fVar40 = (fVar40 + ((fVar44 - fVar42) + (0.00078125f * 1f)));
											}
											else if (Global_23150.f_5474[iVar8] == 0)
											{
												fVar40 = (fVar40 + (((fVar44 - fVar34) * 0.5f) - (fVar42 * 0.5f)));
											}
											Global_23150.f_8650[((iVar9 * Global_23150.f_5617) + iVar8)] = fVar40;
											Global_23150.f_8732[((iVar9 * Global_23150.f_5617) + iVar8)] = fVar42;
										}
										else
										{
											fVar40 = Global_23150.f_8650[((iVar9 * Global_23150.f_5617) + iVar8)];
											fVar42 = Global_23150.f_8732[((iVar9 * Global_23150.f_5617) + iVar8)];
										}
										if (bVar52)
										{
											if (__LIB_3__::func_124(26, 1, 0, &fVar36, &fVar37, bParam7))
											{
												if (Global_23150.f_5474[iVar8] == 2)
												{
													fVar40 = (fVar40 - (fVar36 * 2f));
												}
												fVar43 = (fVar36 * 0.5f);
												if (__LIB_3__::func_124(26, 1, 1, &fVar36, &fVar37, bParam7))
												{
													__LIB_3__::func_44(26, 1, &iVar45, &iVar46, &iVar47, &iVar48);
													if (iVar5 == 1)
													{
														GRAPHICS::DRAW_SPRITE(__LIB_3__::func_49(26), __LIB_3__::func_64(26, 1), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, false, 0);
													}
												}
											}
											if (__LIB_3__::func_124(27, 1, 0, &fVar36, &fVar37, bParam7))
											{
												fVar40 = (fVar40 + fVar36);
												fVar43 = (fVar36 * 0.5f);
												if (__LIB_3__::func_124(27, 1, 1, &fVar36, &fVar37, bParam7))
												{
													__LIB_3__::func_44(27, 1, &iVar45, &iVar46, &iVar47, &iVar48);
													if (iVar5 == 1)
													{
														GRAPHICS::DRAW_SPRITE(__LIB_3__::func_49(27), __LIB_3__::func_64(27, 1), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, false, 0);
													}
												}
											}
										}
										if (iVar5 == 1)
										{
											if (__LIB_3__::func_124(Global_23150.f_4824[iVar22], bVar32, 1, &fVar36, &fVar37, bParam7))
											{
												__LIB_3__::func_44(Global_23150.f_4824[iVar22], bVar32, &iVar45, &iVar46, &iVar47, &iVar48);
												GRAPHICS::DRAW_SPRITE(__LIB_3__::func_49(Global_23150.f_4824[iVar22]), __LIB_3__::func_64(Global_23150.f_4824[iVar22], bVar32), ((fVar34 + fVar40) + (fVar36 * 0.5f)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), (fVar36 * __LIB_3__::func_40(Global_23150.f_4824[iVar22])), (fVar37 * __LIB_3__::func_40(Global_23150.f_4824[iVar22])), 0f, iVar45, iVar46, iVar47, iVar48, false, 0);
											}
										}
									}
								}
								bVar39 = true;
								iVar22++;
								break;
							case 5:
								bVar39 = true;
								break;
						}
						if (Global_23150.f_5447[iVar8] == 5)
						{
							if (Global_23150.f_5459[iVar8] > 0.05f)
							{
								fVar34 = (fVar34 + Global_23150.f_5459[iVar8]);
							}
							else
							{
								fVar34 = (fVar34 + 0.05f);
							}
						}
						else
						{
							fVar34 = (fVar34 + Global_23150.f_5459[iVar8]);
							if (Global_23150.f_5466[iVar8])
							{
								if (__LIB_3__::func_124(26, 1, 1, &fVar36, &fVar37, bParam7))
								{
									fVar34 = (fVar34 - fVar36);
								}
							}
						}
					}
					else
					{
						fVar34 = (fVar34 + Global_23150.f_5459[iVar8]);
					}
					iVar8++;
				}
				if (bVar39)
				{
					if (bVar33)
					{
						Global_23150.f_8429[iVar9] = iVar6;
						Global_23150.f_6131 = iVar6;
						iVar9++;
						if (Global_23150.f_5747[iVar6])
						{
							iVar13++;
						}
						if (Global_23150.f_6136[iVar6] != 0f)
						{
							fVar65 = (fVar65 + Global_23150.f_6136[iVar6]);
						}
						else
						{
							fVar65 = (fVar65 + 0.034722f);
						}
					}
					if (!Global_23150.f_6119)
					{
						Global_23150.f_5876[iVar6] = 1;
						if (Global_23150.f_5618[iVar6])
						{
							if (bVar32)
							{
								Global_23150.f_6125 = 0;
							}
						}
						else
						{
							iVar11++;
							if (bVar32)
							{
								Global_23150.f_6125 = iVar11;
							}
						}
						iVar10++;
					}
				}
				iVar7++;
			}
			if (!Global_23150.f_6119)
			{
				Global_23150.f_6121 = ((fVar57 + fVar65) + (0.00277776f * IntToFloat(iVar12)));
				Global_23150.f_6124 = iVar11;
				Global_23150.f_6122 = iVar10;
				Global_23150.f_6119 = 1;
			}
		}
		if (!Global_23150.f_6120)
		{
			Global_23150.f_6123 = iVar9;
			Global_23150.f_6120 = 1;
		}
		iVar5++;
	}
	Global_23150.f_6267 = fVar49;
	Global_23150.f_6269 = MISC::GET_GAME_TIMER();
	HUD::THEFEED_SET_SCRIPTED_MENU_HEIGHT(Global_23150.f_6267);
	if (!Global_23150.f_8773)
	{
		__LIB_1__::func_33(0);
	}
	Global_23150.f_8773 = 0;
	if (bParam2)
	{
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(10);
	}
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(6);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
	if (bParam0)
	{
		__LIB_0__::func_876(1);
	}
	GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
}

void func_136(int iParam0, int iParam1, char* sParam2)//Position - 0x21D4A
{
	if (__LIB_22__::func_633(iParam0))
	{
		if (__LIB_1__::func_30(iParam1, 1))
		{
			*sParam2 = { __LIB_23__::func_515(iParam1) };
		}
	}
}

void func_137(int iParam0)//Position - 0x1DA68
{
	switch (Global_2703735.f_2724)
	{
		case 1:
			if (__LIB_14__::func_598(&(Global_2703735.f_2724.f_1), 0, 0))
			{
				if (iParam0 != -1)
				{
					__LIB_14__::func_551(&(Global_2703735.f_2724.f_1), 1, "BM_END_XP" /* GXT: RP */, "", iParam0, 0, 0, 0);
				}
				Global_2703735.f_2724 = 2;
			}
			break;
		case 2:
			Global_2703735.f_2724.f_1.f_570 = 1;
			__LIB_15__::func_253(&(Global_2703735.f_2724.f_1), 0, 1065353216, 0, 0, 0);
			break;
	}
}

int func_138(int iParam0)//Position - 0x22525
{
	if (Global_1574970)
	{
		return 6;
	}
	else if (iParam0 == PLAYER::PLAYER_ID())
	{
		return 1;
	}
	else if (__LIB_23__::func_354() && PLAYER::GET_PLAYER_TEAM(iParam0) != -1)
	{
		return __LIB_2__::func_585(PLAYER::GET_PLAYER_TEAM(iParam0), iParam0, 0);
	}
	else if (PLAYER::GET_PLAYER_TEAM(iParam0) == -1 || PLAYER::GET_PLAYER_TEAM(iParam0) != PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()))
	{
		return __LIB_2__::func_795(iParam0, PLAYER::GET_PLAYER_TEAM(iParam0), 1, 0, 0);
	}
	else
	{
		if (__LIB_1__::func_30(iParam0, 1))
		{
			return __LIB_19__::func_263(iParam0);
		}
		return 116;
	}
	return 1;
}

void func_139(char* sParam0)//Position - 0x2444A
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (!MISC::IS_STRING_NULL(&(Global_4539964[iVar0 /*104*/])))
		{
			if (MISC::ARE_STRINGS_EQUAL(&(Global_4539964[iVar0 /*104*/]), sParam0))
			{
				if (Global_4539964[iVar0 /*104*/].f_24 == 2)
				{
				}
				__LIB_0__::func_698();
				Global_4539964[iVar0 /*104*/].f_99[Global_20266] = 0;
				Global_4539964[iVar0 /*104*/].f_24 = 0;
				Global_4539964[iVar0 /*104*/].f_28 = 0;
				Global_4539964[iVar0 /*104*/].f_29 = 0;
				HUD::THEFEED_REMOVE_ITEM(Global_4539964[iVar0 /*104*/].f_16);
			}
		}
		iVar0++;
	}
}

void func_140(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0x6651A
{
	int iVar0;
	float fVar1;
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		if ((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0)) || !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
			if (PLAYER::PLAYER_ID() != __LIB_0__::func_162())
			{
				uParam1->f_100 = PLAYER::PLAYER_ID();
			}
			if (uParam1->f_70 == 0)
			{
				uParam1->f_70 = 1;
			}
			__LIB_1__::func_569(iParam0, uParam1, bParam2, bParam3);
			if (uParam1->f_102 != 0)
			{
				if (uParam1->f_102 == 2)
				{
					VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(iParam0, true);
					VEHICLE::SET_DRIFT_TYRES(iParam0, false);
				}
				else if (uParam1->f_102 == 1)
				{
					VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(iParam0, false);
					VEHICLE::SET_DRIFT_TYRES(iParam0, false);
				}
				else if (uParam1->f_102 == 3)
				{
					VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(iParam0, true);
					VEHICLE::SET_DRIFT_TYRES(iParam0, true);
				}
			}
			if (__LIB_0__::func_811(ENTITY::GET_ENTITY_MODEL(iParam0)))
			{
				if (uParam1->f_9[44] == 2)
				{
					VEHICLE::SET_VEHICLE_ALLOW_HOMING_MISSLE_LOCKON_SYNCED(iParam0, false, true);
				}
				else
				{
					VEHICLE::SET_VEHICLE_ALLOW_HOMING_MISSLE_LOCKON_SYNCED(iParam0, true, true);
				}
			}
			if (!uParam1->f_78 == -1 && uParam1->f_9[14] == -1)
			{
				AUDIO::OVERRIDE_VEH_HORN(iParam0, true, uParam1->f_78);
			}
			if (!uParam1->f_79 == -1)
			{
				AUDIO::SET_VEHICLE_HORN_SOUND_INDEX(iParam0, uParam1->f_79);
			}
			if (__LIB_0__::func_810(uParam1->f_66, &fVar1) && uParam1->f_80 != fVar1)
			{
				uParam1->f_80 = fVar1;
			}
			VEHICLE::SET_VEHICLE_ENVEFF_SCALE(iParam0, uParam1->f_80);
			VEHICLE::SET_VEHICLE_EXTRA_COLOUR_5(iParam0, uParam1->f_97);
			if (uParam1->f_99 >= 0)
			{
				VEHICLE::SET_VEHICLE_EXTRA_COLOUR_6(iParam0, uParam1->f_99);
			}
			if (__LIB_0__::func_809(iParam0))
			{
				__LIB_1__::func_525(iParam0, __LIB_1__::func_562(uParam1->f_74, uParam1->f_75, uParam1->f_76));
			}
			if (VEHICLE::GET_VEHICLE_LIVERY2_COUNT(iParam0) > 1 && uParam1->f_98 >= 0)
			{
				VEHICLE::SET_VEHICLE_LIVERY2(iParam0, uParam1->f_98);
			}
			if (BitTest(uParam1->f_95, 0))
			{
				__LIB_14__::func_511(iParam0, &(uParam1->f_81));
			}
			if ((!__LIB_2__::func_969(4) && !bParam4) && !NETWORK::NETWORK_IS_ACTIVITY_SESSION())
			{
				__LIB_2__::func_985(iParam0);
			}
			if (__LIB_0__::func_801(iVar0))
			{
				switch (uParam1->f_9[5])
				{
					case 0:
						VEHICLE::REMOVE_VEHICLE_MOD(iParam0, 16);
						break;
					case 1:
						VEHICLE::REMOVE_VEHICLE_MOD(iParam0, 16);
						if ((VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("scarab")) || VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("scarab2"))) || VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("scarab3")))
						{
							VEHICLE::SET_VEHICLE_MOD(iParam0, 16, 0, false);
						}
						else
						{
							VEHICLE::SET_VEHICLE_MOD(iParam0, 16, 2, false);
						}
						break;
					case 2:
						VEHICLE::REMOVE_VEHICLE_MOD(iParam0, 16);
						if ((VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("scarab")) || VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("scarab2"))) || VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("scarab3")))
						{
							VEHICLE::SET_VEHICLE_MOD(iParam0, 16, 1, false);
						}
						else
						{
							VEHICLE::SET_VEHICLE_MOD(iParam0, 16, 3, false);
						}
						break;
					case 3:
						VEHICLE::REMOVE_VEHICLE_MOD(iParam0, 16);
						if ((VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("scarab")) || VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("scarab2"))) || VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("scarab3")))
						{
							VEHICLE::SET_VEHICLE_MOD(iParam0, 16, 2, false);
						}
						else
						{
							VEHICLE::SET_VEHICLE_MOD(iParam0, 16, 4, false);
						}
						break;
					default:
						if (uParam1->f_9[5] != -1)
						{
							VEHICLE::REMOVE_VEHICLE_MOD(iParam0, 16);
							if ((VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("scarab")) || VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("scarab2"))) || VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("scarab3")))
							{
								VEHICLE::SET_VEHICLE_MOD(iParam0, 16, 2, false);
							}
							else
							{
								VEHICLE::SET_VEHICLE_MOD(iParam0, 16, 4, false);
							}
						}
						break;
					}
			}
			if (__LIB_1__::func_522(ENTITY::GET_ENTITY_MODEL(iParam0)))
			{
				switch (uParam1->f_9[5])
				{
					case 1:
						VEHICLE::SET_VEHICLE_EXPLODES_ON_HIGH_EXPLOSION_DAMAGE(iParam0, false);
						VEHICLE::SET_VEHICLE_STRONG(iParam0, true);
						if (uParam1->f_9[16] == 5)
						{
							VEHICLE::SET_VEHICLE_DAMAGE_SCALE(iParam0, (Global_262145.f_21791 /* Tunable: -1001087518 */ + 0.05f));
						}
						else
						{
							VEHICLE::SET_VEHICLE_DAMAGE_SCALE(iParam0, Global_262145.f_21791 /* Tunable: -1001087518 */);
						}
						VEHICLE::SET_VEHICLE_EXPLODES_ON_EXPLOSION_DAMAGE_AT_ZERO_BODY_HEALTH(iParam0, true);
						break;
					default:
						VEHICLE::SET_VEHICLE_EXPLODES_ON_HIGH_EXPLOSION_DAMAGE(iParam0, false);
						VEHICLE::SET_VEHICLE_DAMAGE_SCALE(iParam0, 1f);
						VEHICLE::SET_VEHICLE_EXPLODES_ON_EXPLOSION_DAMAGE_AT_ZERO_BODY_HEALTH(iParam0, true);
						break;
					}
			}
			switch (uParam1->f_94)
			{
				case 0:
					break;
				case 1:
					if (BitTest(uParam1->f_95, 1) && BitTest(uParam1->f_95, 2))
					{
						if (BitTest(uParam1->f_95, 3))
						{
						}
					}
					else if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("Player_Vehicle", 3))
					{
						DECORATOR::DECOR_SET_INT(iParam0, "Player_Vehicle", -1);
					}
					break;
				case 2:
					if (BitTest(uParam1->f_95, 1) && BitTest(uParam1->f_95, 2))
					{
						if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("Veh_Modded_By_Player", 3))
						{
							DECORATOR::DECOR_SET_INT(iParam0, "Veh_Modded_By_Player", NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(PLAYER::PLAYER_ID()));
						}
					}
					else if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("Veh_Modded_By_Player", 3))
					{
						if (__LIB_0__::func_800(uParam1->f_81) && NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(&(uParam1->f_81)))
						{
							DECORATOR::DECOR_SET_INT(iParam0, "Veh_Modded_By_Player", NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&(uParam1->f_81))));
						}
						else
						{
							DECORATOR::DECOR_SET_INT(iParam0, "Veh_Modded_By_Player", -1);
						}
					}
					break;
				case 3:
					break;
				case 4:
					break;
				}
		}
	}
}

void func_141(var uParam0)//Position - 0x1D3CB
{
	int iVar0;
	iVar0 = __LIB_23__::func_525(uParam0, uParam0->f_17, 1);
	if (uParam0->f_1 != 112)
	{
		if (__LIB_1__::func_256(uParam0->f_1))
		{
			if (__LIB_1__::func_375(1))
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "Shard_Disappear", "GTAO_Biker_FM_Shard_Sounds", false);
			}
			else
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "Shard_Disappear", "GTAO_Boss_Goons_FM_Shard_Sounds", false);
			}
		}
		else if (BitTest(Global_4718592.f_38, 3))
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "PowerupShard_Disappear", "Go_Kart_Death_Match_Soundset", false);
		}
		else
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "Shard_Disappear", "GTAO_FM_Events_Soundset", false);
		}
	}
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SHARD_ANIM_OUT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT((SYSTEM::TO_FLOAT(333) * 0.001f));
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
}

bool func_142()//Position - 0x6B1
{
	return Global_1573131.f_5;
}

bool func_143()//Position - 0x6F5
{
	return BitTest(Global_2714762, 19);
}

bool func_144()//Position - 0x84F
{
	return Global_2723612;
}

bool func_145()//Position - 0x878
{
	return Global_1835431.f_10;
}

void func_146(var uParam0)//Position - 0x25657
{
	struct<7> Var0;
	*uParam0 = { Var0 };
}

int func_147()//Position - 0x269DB
{
	if (Global_1574991 == 68)
	{
		return 1;
	}
	return 0;
}

bool func_148(var uParam0)//Position - 0x20314
{
	var uVar0;
	int iVar1;
	uVar0 = __LIB_24__::func_873(uParam0);
	iVar1 = uParam0;
	return BitTest(uVar0, __LIB_0__::func_160(iVar1));
}

void func_149(var uParam0, bool bParam1, int iParam2)//Position - 0x1FF31
{
	int iVar0;
	int iVar1;
	iVar0 = __LIB_24__::func_873(uParam0);
	iVar1 = uParam0;
	if (iVar1 > -1)
	{
		if (bParam1)
		{
			MISC::SET_BIT(&iVar0, __LIB_0__::func_160(iVar1));
		}
		else
		{
			MISC::CLEAR_BIT(&iVar0, __LIB_0__::func_160(iVar1));
		}
		__LIB_1__::func_354(__LIB_16__::func_399(uParam0), iVar0, iParam2, 1, 0);
	}
}

void func_150(var uParam0, var uParam1, bool bParam2, int iParam3)//Position - 0x22208
{
	var* uVar0;
	var* uVar1;
	int iVar2;
	struct<88> Var3;
	int iVar4;
	uVar0 = DATAFILE::DATAFILE_GET_FILE_DICT(0);
	uVar1 = DATAFILE::DATADICT_GET_DICT(uVar0, "mission");
	iVar2 = DATAFILE::DATADICT_GET_DICT(uVar1, "gen");
	Var3.f_65 = -1;
	Var3.f_66 = -1;
	Var3.f_67 = 2;
	uParam0->f_604[uParam1->f_9 /*88*/] = { Var3 };
	if (!__LIB_11__::func_730())
	{
		uParam0->f_604[uParam1->f_9 /*88*/].f_67 = __LIB_16__::func_643(uParam1->f_7);
		uParam0->f_604[uParam1->f_9 /*88*/].f_66 = NETWORK::UGC_GET_CONTENT_FILE_VERSION(uParam1->f_7, uParam0->f_604[uParam1->f_9 /*88*/].f_67);
		uParam0->f_9405[uParam1->f_9 /*13*/].f_6 = NETWORK::UGC_GET_CONTENT_LANGUAGE(uParam1->f_7);
	}
	uParam0->f_604[uParam1->f_9 /*88*/].f_56 = { __LIB_17__::func_939(iVar2) };
	uParam0->f_604[uParam1->f_9 /*88*/].f_59 = { __LIB_16__::func_646(iVar2, "cam") };
	uParam0->f_604[uParam1->f_9 /*88*/].f_62 = { __LIB_16__::func_645(iVar2) };
	if (DATAFILE::DATADICT_GET_TYPE(iVar2, "optbs") == 2)
	{
		uParam0->f_604[uParam1->f_9 /*88*/].f_76 = DATAFILE::DATADICT_GET_INT(iVar2, "optbs");
	}
	if (!__LIB_11__::func_730())
	{
		if (NETWORK::UGC_IS_LANGUAGE_SUPPORTED(NETWORK::UGC_GET_CONTENT_LANGUAGE(uParam1->f_7)))
		{
			uParam0->f_604[uParam1->f_9 /*88*/].f_54 = NETWORK::UGC_GET_CONTENT_DESCRIPTION_HASH(uParam1->f_7);
		}
		else
		{
			uParam0->f_604[uParam1->f_9 /*88*/].f_54 = -1;
		}
	}
	uParam0->f_604[uParam1->f_9 /*88*/].f_69 = DATAFILE::DATADICT_GET_INT(iVar2, "min");
	uParam0->f_604[uParam1->f_9 /*88*/].f_71 = DATAFILE::DATADICT_GET_INT(iVar2, "num");
	if (uParam0->f_604[uParam1->f_9 /*88*/].f_71 == -1)
	{
		uParam0->f_604[uParam1->f_9 /*88*/].f_71 = __LIB_2__::func_10();
	}
	StringCopy(&(uParam0->f_604[uParam1->f_9 /*88*/].f_22), NETWORK::UGC_GET_CONTENT_NAME(uParam1->f_7), 64);
	uParam0->f_604[uParam1->f_9 /*88*/].f_65 = DATAFILE::DATADICT_GET_INT(iVar2, "type");
	uParam0->f_604[uParam1->f_9 /*88*/].f_68 = DATAFILE::DATADICT_GET_INT(iVar2, "subtype");
	StringCopy(&(uParam0->f_604[uParam1->f_9 /*88*/].f_6), NETWORK::UGC_GET_CONTENT_USER_ID(uParam1->f_7), 64);
	StringCopy(&(uParam0->f_3[uParam1->f_9 /*6*/]), NETWORK::UGC_GET_CONTENT_USER_NAME(uParam1->f_7), 24);
	uParam0->f_604[uParam1->f_9 /*88*/].f_81 = iParam3;
	if (MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_3[uParam1->f_9 /*6*/])))
	{
		if (uParam0->f_604[uParam1->f_9 /*88*/].f_81 == 3 || uParam0->f_604[uParam1->f_9 /*88*/].f_81 == 4)
		{
			StringCopy(&(uParam0->f_3[uParam1->f_9 /*6*/]), __LIB_18__::func_189(), 24);
		}
		else
		{
			StringCopy(&(uParam0->f_3[uParam1->f_9 /*6*/]), __LIB_16__::func_651(), 24);
		}
	}
	uParam0->f_604[uParam1->f_9 /*88*/].f_70 = DATAFILE::DATADICT_GET_INT(iVar2, "rank");
	uParam0->f_9405[uParam1->f_9 /*13*/] = DATAFILE::DATADICT_GET_INT(iVar2, "tnum");
	if (!__LIB_11__::func_730())
	{
		uParam0->f_604[uParam1->f_9 /*88*/].f_73 = __LIB_16__::func_644(NETWORK::UGC_GET_CONTENT_RATING(uParam1->f_7, 0), NETWORK::UGC_GET_CONTENT_RATING_COUNT(uParam1->f_7, 0));
		uParam0->f_9405[uParam1->f_9 /*13*/].f_4 = NETWORK::UGC_GET_CONTENT_RATING_COUNT(uParam1->f_7, 0);
	}
	StringCopy(&(uParam0->f_604[uParam1->f_9 /*88*/]), NETWORK::UGC_GET_CONTENT_ID(uParam1->f_7), 24);
	iVar4 = MISC::GET_HASH_KEY(&(uParam0->f_604[uParam1->f_9 /*88*/]));
	uParam0->f_9405[uParam1->f_9 /*13*/].f_3 = iVar4;
	uParam0->f_1 = (uParam0->f_1 + iVar4);
	uParam0->f_604[uParam1->f_9 /*88*/].f_75 = DATAFILE::DATADICT_GET_INT(iVar2, "charcon");
	uParam0->f_604[uParam1->f_9 /*88*/].f_78 = DATAFILE::DATADICT_GET_INT(iVar2, "ltm");
	__LIB_16__::func_642(uParam0->f_604[uParam1->f_9 /*88*/].f_65, &(uParam0->f_604[uParam1->f_9 /*88*/].f_71), &(uParam0->f_604[uParam1->f_9 /*88*/].f_69));
	MISC::SET_BIT(&(uParam0->f_604[uParam1->f_9 /*88*/].f_76), 13);
	uParam0->f_10808[uParam0->f_604[uParam1->f_9 /*88*/].f_65]++;
	if (DATAFILE::DATAFILE_GET_FILE_DICT(0) != 0)
	{
		DATAFILE::DATAFILE_DELETE(0);
	}
	if (!__LIB_11__::func_730())
	{
		if (NETWORK::UGC_GET_CONTENT_HAS_PLAYER_RECORD(uParam1->f_7))
		{
			MISC::SET_BIT(&(uParam0->f_604[uParam1->f_9 /*88*/].f_76), 14);
			uParam0->f_9405[uParam1->f_9 /*13*/].f_7 = NETWORK::UGC_GET_CONTENT_HAS_PLAYER_BOOKMARKED(uParam1->f_7);
		}
		uParam0->f_10707[uParam1->f_9] = NETWORK::UGC_GET_CONTENT_IS_USING_SC_NICKNAME(uParam1->f_7);
		uParam0->f_9405[uParam1->f_9 /*13*/].f_1 = MISC::GET_HASH_KEY(NETWORK::UGC_GET_ROOT_CONTENT_ID(uParam1->f_7));
		MISC::SET_CONTENT_ID_INDEX(uParam0->f_9405[uParam1->f_9 /*13*/].f_1, uParam1->f_9 + 2018);
	}
	if (__LIB_0__::func_3() != 2)
	{
		if (uParam0->f_604[uParam1->f_9 /*88*/].f_71 > Global_262145.f_4605 /* Tunable: MAX_NG_TRANSITION_SESSION_SIZE */)
		{
			uParam0->f_604[uParam1->f_9 /*88*/].f_71 = Global_262145.f_4605 /* Tunable: MAX_NG_TRANSITION_SESSION_SIZE */;
		}
		if (uParam0->f_604[uParam1->f_9 /*88*/].f_69 > Global_262145.f_4605 /* Tunable: MAX_NG_TRANSITION_SESSION_SIZE */)
		{
			uParam0->f_604[uParam1->f_9 /*88*/].f_69 = Global_262145.f_4605 /* Tunable: MAX_NG_TRANSITION_SESSION_SIZE */;
		}
	}
	if (!bParam2)
	{
		__LIB_24__::func_874(uParam0->f_604[uParam1->f_9 /*88*/].f_65, uParam0->f_604[uParam1->f_9 /*88*/].f_68, BitTest(uParam0->f_604[uParam1->f_9 /*88*/].f_76, 14), uParam0->f_604[uParam1->f_9 /*88*/].f_70, 1);
		__LIB_25__::func_113(uParam0->f_604[uParam1->f_9 /*88*/].f_65, uParam0->f_604[uParam1->f_9 /*88*/].f_68, uParam0->f_604[uParam1->f_9 /*88*/].f_70, 1);
	}
	uParam1->f_9++;
	if (DATAFILE::DATAFILE_GET_FILE_DICT(0) != 0)
	{
		DATAFILE::DATAFILE_DELETE(0);
	}
}

void func_151(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x241CA
{
	int iVar0;
	int iVar1;
	if (!bParam4)
	{
		return;
	}
	if (!__LIB_22__::func_468(iParam0, iParam1, iParam2, &iVar0, iParam3))
	{
		return;
	}
	iVar1 = __LIB_18__::func_191(iVar0);
	if (iVar1 == -1)
	{
		return;
	}
	__LIB_13__::func_523(iVar1, 1);
}

void func_152(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x23AE9
{
	int iVar0;
	int iVar1;
	if (!__LIB_22__::func_468(iParam0, iParam1, iParam2, &iVar0, iParam3))
	{
		return;
	}
	iVar1 = __LIB_18__::func_190(iVar0);
	if (iVar1 == -1)
	{
		return;
	}
	__LIB_13__::func_523(iVar1, 1);
}

bool func_153(int iParam0)//Position - 0xAE7
{
	return (iParam0 > -1 && iParam0 < 2);
}

int func_154(int iParam0)//Position - 0xB11
{
	int iVar0;
	iVar0 = -1;
	switch (iParam0)
	{
		case -1:
			iVar0 = 0;
			break;
		case 0:
			iVar0 = 1;
			break;
	}
	return iVar0;
}

int func_155(int iParam0)//Position - 0xB3D
{
	int iVar0;
	iVar0 = -1;
	switch (iParam0)
	{
		case 2:
			iVar0 = 0;
			break;
		case 3:
			iVar0 = 1;
			break;
	}
	return iVar0;
}

bool func_156(int iParam0, int iParam1)//Position - 0xB69
{
	return (iParam0 == 999 && iParam1 == 999);
}

int func_157(var uParam0)//Position - 0xF33
{
	if (Global_4718592 == 2)
	{
		if ((*uParam0)[2] == 1)
		{
			return 1;
		}
	}
	return 0;
}

bool func_158()//Position - 0x1001
{
	return BitTest(Global_2715699.f_1.f_2809, 4);
}

bool func_159(int iParam0)//Position - 0x2B6A
{
	return iParam0 == 90;
}

bool func_160()//Position - 0x2B84
{
	return ((((((((((BitTest(Global_4718592.f_162497, 20) || BitTest(Global_4718592.f_162497, 21)) || BitTest(Global_4718592.f_162497, 22)) || BitTest(Global_4718592.f_162497, 23)) || BitTest(Global_4718592.f_162497, 24)) || BitTest(Global_4718592.f_162497, 25)) || BitTest(Global_4718592.f_162497, 26)) || BitTest(Global_4718592.f_162497, 27)) || BitTest(Global_4718592.f_162497, 28)) || BitTest(Global_4718592.f_162497, 29)) || BitTest(Global_4718592.f_162497, 30));
}

void func_161(int iParam0)//Position - 0x3594
{
	float fVar0;
	int iVar1;
	if (((((Global_4718592 == 0 || Global_4718592 == 1) && ((((Global_4718592.f_2 == 5 || Global_4718592.f_2 == 9) || Global_4718592.f_2 == 6) || Global_4718592.f_2 == 4) || Global_4718592 == 1)) && Global_4718592.f_593 == 2) && Global_4718592.f_142646 != 5) && iParam0 > 2)
	{
		fVar0 = (SYSTEM::TO_FLOAT(Global_4718592.f_142646) / 10f);
		iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iParam0) * fVar0));
		if (iVar1 == 0)
		{
			iVar1 = 1;
		}
		if (iVar1 == iParam0)
		{
			iVar1 = (iVar1 - 1);
		}
		Global_4718592.f_600[0] = iVar1;
		Global_4718592.f_600[1] = (iParam0 - iVar1);
		if (Global_4718592.f_600[0] == Global_4718592.f_600[1])
		{
			if (fVar0 > 0.5f)
			{
				Global_4718592.f_600[0] = 0;
			}
			else
			{
				Global_4718592.f_600[1] = 0;
			}
		}
	}
}

bool func_162()//Position - 0x39C0
{
	return BitTest(Global_2714762, 9);
}

void func_163(int iParam0)//Position - 0x3A6C
{
	Global_2788173 = iParam0;
}

void func_164(int iParam0)//Position - 0x3A7A
{
	Global_2788174 = iParam0;
}

void func_165()//Position - 0x3AC9
{
	MISC::CLEAR_BIT(&Global_2714762, 9);
}

void func_166()//Position - 0x3AED
{
	MISC::CLEAR_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_96.f_32), 0);
}

void func_167(int iParam0)//Position - 0x4674
{
	if (iParam0 == 1)
	{
		Global_1836590 = 1;
	}
	else
	{
		Global_1836590 = 0;
	}
}

struct<13> func_168(int iParam0)//Position - 0x28AD5
{
	return Global_2715699.f_1.f_845[iParam0 /*57*/];
}

int func_169(int iParam0)//Position - 0x2BA23
{
	switch (iParam0)
	{
		case 2:
			return __LIB_16__::func_699();
		case 1:
		case 0:
		case 3:
			return Global_4980736.f_69352;
		default:
	}
	return 0;
}

int func_170(int iParam0, int iParam1)//Position - 0x2BC6B
{
	if (__LIB_1__::func_117(221))
	{
		return 1;
	}
	if (iParam0 == 1)
	{
		if (iParam1 == 3 || iParam1 == 4)
		{
			return 1;
		}
	}
	return 0;
}

void func_171()//Position - 0x2C0A1
{
	MISC::CLEAR_BIT(&(Global_2714762.f_2), 1);
}

bool func_172()//Position - 0x2C0C7
{
	return BitTest(Global_2714762.f_2, 0);
}

void func_173()//Position - 0x2C0F9
{
	MISC::CLEAR_BIT(&(Global_2714762.f_2), 0);
}

Vector3 func_174()//Position - 0x2C1C3
{
	return -1366.41f, 56.71f, 53.1f;
}

bool func_175()//Position - 0x2C1DA
{
	return Global_262145.f_31703[0] == Global_4718592.f_116524;
}

int func_176(var uParam0)//Position - 0x2C3DE
{
	if (Global_4718592 == 0)
	{
		if (Global_4718592.f_593 > 1)
		{
			if ((*uParam0)[1] == 0)
			{
				return 1;
			}
		}
	}
	else if (Global_4718592 == 1)
	{
		if ((*uParam0)[0] == 1 || (*uParam0)[0] == 4)
		{
			if ((*uParam0)[2] == 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_177()//Position - 0x2C9AA
{
	return BitTest(Global_2711251[11], 0);
}

void func_178()//Position - 0x31A39
{
	Global_2715699.f_5982 = { 0f, 0f, 0f };
}

int func_179()//Position - 0x31FEA
{
	return Global_1966049.f_1;
}

void func_180()//Position - 0x32240
{
	Global_2788181 = NETWORK::GET_NETWORK_TIME();
}

char* func_181(int iParam0)//Position - 0x3228C
{
	switch (iParam0)
	{
		case 0:
			return "HBMB";
		case 1:
			return "BMBL";
		case 2:
			return "BZBT";
		case 3:
			return "FWAR";
		case 4:
			return "TGTM";
		case 5:
			return "WRCK";
		case 6:
			return "CRNG";
		case 7:
			return "HCTM";
		case 8:
			return "GMST";
		default:
	}
	return "ciARENA_JOB_TYPE_INVALID";
}

char* func_182(int iParam0)//Position - 0x32314
{
	switch (iParam0)
	{
		case 1:
			return "APOC";
		case 2:
			return "SCIFI";
		case 3:
			return "CONS";
		default:
	}
	return "";
}

int func_183()//Position - 0x323C3
{
	return Global_2788174;
}

int func_184()//Position - 0x323CF
{
	return Global_1946250.f_518;
}

bool func_185()//Position - 0x323DE
{
	return (Global_1946250.f_518 != 0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Global_1946250.f_518) > 0);
}

int func_186(int iParam0, var uParam1)//Position - 0x32823
{
	if (iParam0 != 0)
	{
		return 0;
	}
	return uParam1;
}

void func_187(int iParam0)//Position - 0x32D6F
{
	Global_1574628 = iParam0;
}

void func_188()//Position - 0x32D8D
{
	MISC::SET_BIT(&Global_1574589, 5);
}

void func_189()//Position - 0x32DAF
{
	MISC::SET_BIT(&Global_2714762, 19);
}

void func_190()//Position - 0x3347F
{
	Global_2714762.f_727 = 1;
}

var func_191()//Position - 0x33504
{
	return BitTest(Global_2714762, 23);
}

int func_192()//Position - 0x336B0
{
	return Global_1575015;
}

int func_193(int iParam0, int iParam1)//Position - 0x336BC
{
	int iVar0;
	iVar0 = __LIB_0__::func_3();
	if (iParam1 != 999)
	{
		iVar0 = iParam1;
	}
	switch (iVar0)
	{
		case 0:
			switch (32)
			{
				case 16:
					switch (iParam0)
					{
						case 8:
							return 0;
							break;
						case 9:
						default:
							return 16;
							break;
					}
					break;
				case 18:
					switch (iParam0)
					{
						case 8:
							return 2;
							break;
						case 9:
						default:
							return 16;
							break;
					}
					break;
				case 24:
					switch (iParam0)
					{
						case 8:
							return 2;
							break;
						case 9:
						default:
							return 22;
							break;
					}
					break;
				case 26:
					switch (iParam0)
					{
						case 8:
							return 2;
							break;
						case 9:
						default:
							return 24;
							break;
					}
					break;
				case 32:
					switch (iParam0)
					{
						case 8:
							return 2;
							break;
						case 9:
						default:
							return 30;
							break;
					}
					break;
			}
			break;
	}
	return 4;
}

void func_194(int iParam0)//Position - 0x33A2A
{
	Global_2727755 = iParam0;
}

int func_195()//Position - 0x33A38
{
	return Global_2727754;
}

var func_196()//Position - 0x33D8E
{
	return Global_2726795;
}

void func_197(int iParam0)//Position - 0x33EC7
{
	struct<3> Var0;
	if (iParam0 != 0)
	{
		Var0.f_1 = PLAYER::PLAYER_ID();
		Var0.f_0 = 936426042;
		Var0.f_2 = { __LIB_0__::func_808() };
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 15, iParam0);
	}
}

bool func_198()//Position - 0x33F64
{
	return Global_2714762.f_745;
}

void func_199()//Position - 0x33F96
{
	Global_2714762.f_748 = 0;
}

void func_200()//Position - 0x33FBA
{
	Global_2714762.f_696 = 1;
}

int func_201()//Position - 0x33FEA
{
	switch (Global_1575016)
	{
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 9:
		case 12:
			return 1;
		default:
	}
	return 0;
}

int func_202()//Position - 0x34175
{
	return Global_2715699.f_1.f_2825;
}

bool func_203(int iParam0)//Position - 0x34186
{
	return BitTest(Global_2715699.f_1.f_845[iParam0 /*57*/].f_51, 4);
}

void func_204()//Position - 0x3419F
{
	VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	PED::SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f);
}

bool func_205()//Position - 0x3446E
{
	return Global_2714762.f_893;
}

void func_206()//Position - 0x344BA
{
	if (HUD::IS_PAUSE_MENU_ACTIVE() || HUD::IS_PAUSE_MENU_RESTARTING())
	{
		HUD::DISPLAY_RADAR(false);
		HUD::SET_FRONTEND_ACTIVE(false);
	}
}

bool func_207(int iParam0)//Position - 0x348E0
{
	return BitTest(Global_2715699.f_1.f_845[iParam0 /*57*/].f_50, 0);
}

int func_208(int iParam0)//Position - 0x34AC8
{
	if ((((__LIB_2__::func_88(iParam0) == 40 || __LIB_2__::func_88(iParam0) == 43) || __LIB_2__::func_88(iParam0) == 37) || __LIB_2__::func_88(iParam0) == 38) || __LIB_2__::func_88(iParam0) == 39)
	{
		return 1;
	}
	return 0;
}

bool func_209()//Position - 0x34B1D
{
	return BitTest(Global_2714762, 13);
}

void func_210()//Position - 0x34C63
{
	Global_2715699.f_1.f_2824 = 0;
}

void func_211()//Position - 0x34C75
{
	Global_2715699.f_1.f_2799 = 0;
}

struct<35> func_212()//Position - 0x53DD
{
	struct<13> Var0;
	struct<35> Var1;
	Var0 = { __LIB_0__::func_808() };
	if (PLAYER::IS_PLAYER_ONLINE())
	{
		NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Var1, 0, &Var0);
	}
	return Var1;
}

int func_213()//Position - 0x2B791
{
	if (__LIB_1__::func_620() || __LIB_10__::func_301())
	{
		return 1;
	}
	return 0;
}

int func_214()//Position - 0x2C11F
{
	int iVar0;
	if (__LIB_0__::func_448(0))
	{
		iVar0 = 4;
	}
	return iVar0;
}

int func_215()//Position - 0x2C450
{
	if (Global_4718592 == 2)
	{
		if (__LIB_1__::func_187(Global_4718592.f_107227) || __LIB_1__::func_188(Global_4718592.f_107227))
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_216(int iParam0)//Position - 0x31AA3
{
	struct<3> Var0;
	if (__LIB_1__::func_749())
	{
		Var0 = { __LIB_17__::func_953() };
		return Var0;
	}
	if (__LIB_4__::func_90(Global_4718592.f_116524))
	{
		Var0 = { __LIB_17__::func_952() };
		return Var0;
	}
	if (__LIB_7__::func_163(Global_4718592.f_116524))
	{
		Var0 = { __LIB_17__::func_951() };
		return Var0;
	}
	if (__LIB_0__::func_447())
	{
		Var0 = { __LIB_17__::func_950() };
		return Var0;
	}
	if (__LIB_12__::func_223())
	{
		Var0 = { __LIB_17__::func_949() };
		return Var0;
	}
	if (__LIB_2__::func_714(Global_4718592.f_116524))
	{
		Var0 = { __LIB_17__::func_947() };
		return Var0;
	}
	switch (iParam0)
	{
		case 0:
			return -756.4f, 5538.6f, 56.3f;
		case 1:
			return 2197.8f, 5571.1f, 75.6f;
		case 2:
			return 311.4f, 4344.9f, 50.5f;
		case 3:
			return 3275.4f, 5149f, 30.3f;
		case 4:
			return 1632.4f, 4738.6f, 55.3f;
		case 5:
			return 41.9f, 2803.3f, 57.9f;
		case 6:
			return 2544.9f, 2621.5f, 37.9f;
		case 7:
			return 721.5f, 1282.1f, 360.3f;
		case 8:
			return -1911.3f, 2037.7f, 140.7f;
		case 9:
			return 2585f, 417.9f, 108.5f;
		case 10:
			return -1694.1f, -297.2f, 51.8f;
		case 11:
			return 278.9f, 944.2f, 211.1f;
		case 12:
			return 876.7f, -33.4f, 78.8f;
		case 13:
			return -241.3f, -264.8f, 49.1f;
		case 14:
			return -1484.9f, -1219.6f, 2.7f;
		case 15:
			return -179.8f, -1374.7f, 31.3f;
		case 16:
			return 731f, -2020f, 29.3f;
		case 17:
			return 796.6f, -3279.8f, 11.9f;
		case 18:
			return -263.2f, -1895.7f, 27.8f;
		case 19:
			return -923f, -2439.6f, 13.8f;
		default:
	}
	return 0f, 0f, 0f;
}

int func_217()//Position - 0x31D37
{
	if (__LIB_0__::func_448(0) || __LIB_7__::func_162(Global_4718592.f_116524))
	{
		return 1;
	}
	return 0;
}

int func_218(int iParam0, float fParam1)//Position - 0x321E5
{
	int iVar0;
	float fVar1;
	iVar0 = MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), iParam0));
	fVar1 = (IntToFloat(iVar0) / fParam1);
	return __LIB_0__::func_340(SYSTEM::ROUND(((255f * fVar1) * fVar1)), 0, 255);
}

void func_219()//Position - 0x340BC
{
	if (!__LIB_5__::func_133() && !__LIB_1__::func_117(68))
	{
		HUD::SUPPRESS_FRONTEND_RENDERING_THIS_FRAME();
	}
}

void func_220(int iParam0, bool bParam1, bool bParam2)//Position - 0x341B1
{
	if (__LIB_2__::func_443())
	{
		return;
	}
	if (bParam2)
	{
		HUD::THEFEED_HIDE_THIS_FRAME();
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(18);
	}
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(1);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(2);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(3);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(4);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(5);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(6);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(13);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(14);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(16);
	HUD::HIDE_SCRIPTED_HUD_COMPONENT_THIS_FRAME(19);
	if (bParam1)
	{
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(17);
	}
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(2);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(19);
	HUD::HIDE_STREET_AND_CAR_NAMES_THIS_FRAME();
	HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
	__LIB_18__::func_49(1);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 199 /*INPUT_FRONTEND_PAUSE*/, true);
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		__LIB_1__::func_733();
	}
	__LIB_10__::func_564();
	if (iParam0 && !__LIB_7__::func_170())
	{
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(10);
	}
	else
	{
		HUD::DISPLAY_HUD_WHEN_PAUSED_THIS_FRAME();
		HUD::SHOW_HUD_COMPONENT_THIS_FRAME(10);
	}
}

float func_221()//Position - 0x2C134
{
	if (__LIB_0__::func_448(0) || __LIB_2__::func_714(Global_4718592.f_116524))
	{
		return 300f;
	}
	return 60f;
}

int func_222()//Position - 0x337C5
{
	float fVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	fVar0 = __LIB_1__::func_680(133, -1);
	fVar1 = 0.07f;
	fVar2 = (fVar0 * fVar1);
	iVar3 = SYSTEM::ROUND(fVar2);
	return iVar3;
}

int func_223(int iParam0)//Position - 0x2A8A3
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = Global_4980736.f_69361[iParam0 /*151*/].f_15;
	if (Global_262145.f_21960 /* Tunable: ENABLE_CREATOR_BLOCK */)
	{
		if (!__LIB_0__::func_274())
		{
			iVar1 = OBJECT::GET_WEAPON_TYPE_FROM_PICKUP_TYPE(Global_4980736.f_69361[iParam0 /*151*/].f_15);
			if (__LIB_20__::func_861(iVar1) && !__LIB_0__::func_261())
			{
				Global_4980736.f_69361[iParam0 /*151*/].f_15 = joaat("PICKUP_VEHICLE_WEAPON_PISTOL");
			}
		}
	}
	if (((__LIB_1__::func_150() && __LIB_20__::func_357(iVar0) == 0) && __LIB_20__::func_356(iVar0) == 0) && __LIB_20__::func_362(iVar0) == 0)
	{
		iVar1 = __LIB_12__::func_612(Global_4980736.f_69355);
		if (iVar1 != joaat("WEAPON_UNARMED"))
		{
			iVar0 = __LIB_20__::func_361(iVar1);
		}
		return iVar0;
	}
	if (iVar0 == joaat("PICKUP_CUSTOM_SCRIPT"))
	{
		iVar1 = joaat("WEAPON_COUGAR");
	}
	else if (iVar0 == joaat("PICKUP_VEHICLE_CUSTOM_SCRIPT") && Global_4980736.f_69361[iParam0 /*151*/].f_25 != -1)
	{
		iVar1 = joaat("VEHICLE_WEAPON_TORPEDO");
	}
	else
	{
		iVar1 = OBJECT::GET_WEAPON_TYPE_FROM_PICKUP_TYPE(iVar0);
	}
	iVar2 = Global_1836583;
	if (Global_1922042 != -1)
	{
		iVar2 = Global_1922042;
	}
	if (iVar2 > -1)
	{
		if (iVar2 < __LIB_20__::func_360(iVar1))
		{
			if ((!__LIB_0__::func_361(PLAYER::PLAYER_ID(), 0) && !Global_1836572) && !__LIB_0__::func_80())
			{
				iVar0 = joaat("PICKUP_WEAPON_PISTOL");
			}
		}
	}
	return iVar0;
}

int func_224()//Position - 0x2CDB3
{
	bool bVar0;
	bVar0 = true;
	STREAMING::SET_ISLAND_ENABLED("HeistIsland", true);
	if (Global_2726595)
	{
		STREAMING::LOAD_GLOBAL_WATER_FILE(0);
	}
	if (!__LIB_18__::func_977())
	{
		bVar0 = false;
	}
	if (!__LIB_20__::func_782())
	{
		bVar0 = false;
	}
	if (!bVar0)
	{
		return 0;
	}
	__LIB_23__::func_506();
	return 1;
}

void func_225(bool bParam0)//Position - 0x13C3
{
	if (bParam0)
	{
		if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("dlc_aw_arena_speech_ducking_scene"))
		{
			AUDIO::START_AUDIO_SCENE("dlc_aw_arena_speech_ducking_scene");
		}
	}
	else if (AUDIO::IS_AUDIO_SCENE_ACTIVE("dlc_aw_arena_speech_ducking_scene"))
	{
		AUDIO::STOP_AUDIO_SCENE("dlc_aw_arena_speech_ducking_scene");
	}
}

int func_226()//Position - 0x2176
{
	if (Global_1965657[0] == 2)
	{
		return Global_1965654[0];
	}
	return -1;
}

int func_227(int iParam0)//Position - 0x2394
{
	if (iParam0 < 32)
	{
		return BitTest(Global_1965652, iParam0);
	}
	else
	{
		return BitTest(Global_1965653, (iParam0 - 32));
	}
	return 0;
}

int func_228(int iParam0)//Position - 0x23BE
{
	if (iParam0 < 32)
	{
		return BitTest(Global_1965650, iParam0);
	}
	else
	{
		return BitTest(Global_1965651, (iParam0 - 32));
	}
	return 0;
}

struct<4> func_229(int iParam0)//Position - 0x23E8
{
	struct<4> Var0;
	StringCopy(&Var0, "a", 16);
	switch (iParam0)
	{
		case 1:
			StringCopy(&Var0, "A", 16);
			break;
		case 2:
			StringCopy(&Var0, "B", 16);
			break;
		case 3:
			StringCopy(&Var0, "C", 16);
			break;
		case 4:
			StringCopy(&Var0, "D", 16);
			break;
		case 5:
			StringCopy(&Var0, "E", 16);
			break;
		case 6:
			StringCopy(&Var0, "F", 16);
			break;
		case 7:
			StringCopy(&Var0, "G", 16);
			break;
		case 8:
			StringCopy(&Var0, "H", 16);
			break;
		case 9:
			StringCopy(&Var0, "I", 16);
			break;
		case 10:
			StringCopy(&Var0, "J", 16);
			break;
		case 11:
			StringCopy(&Var0, "K", 16);
			break;
		case 12:
			StringCopy(&Var0, "L", 16);
			break;
		case 13:
			StringCopy(&Var0, "M", 16);
			break;
		case 14:
			StringCopy(&Var0, "N", 16);
			break;
		case 15:
			StringCopy(&Var0, "O", 16);
			break;
		case 16:
			StringCopy(&Var0, "P", 16);
			break;
		case 17:
			StringCopy(&Var0, "Q", 16);
			break;
		case 18:
			StringCopy(&Var0, "R", 16);
			break;
		case 19:
			StringCopy(&Var0, "S", 16);
			break;
		case 20:
			StringCopy(&Var0, "T", 16);
			break;
		case 21:
			StringCopy(&Var0, "U", 16);
			break;
		case 22:
			StringCopy(&Var0, "V", 16);
			break;
		case 23:
			StringCopy(&Var0, "W", 16);
			break;
		case 24:
			StringCopy(&Var0, "X", 16);
			break;
		case 25:
			StringCopy(&Var0, "Y", 16);
			break;
		case 26:
			StringCopy(&Var0, "Z", 16);
			break;
	}
	return Var0;
}

int func_230(int iParam0)//Position - 0x25BD
{
	if (iParam0 < 32)
	{
		return BitTest(Global_1965634, iParam0);
	}
	else
	{
		return BitTest(Global_1965635, (iParam0 - 32));
	}
	return 0;
}

int func_231(int iParam0)//Position - 0x25E7
{
	if (iParam0 < 32)
	{
		return BitTest(Global_1965632, iParam0);
	}
	else
	{
		return BitTest(Global_1965633, (iParam0 - 32));
	}
	return 0;
}

int func_232(int iParam0)//Position - 0x2708
{
	if (Global_1659814 == 1)
	{
		switch (iParam0)
		{
			case 0:
				return 3;
			default:
		}
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				return 3;
			}
		default:
	}
	return 2;
}

int func_233(int iParam0)//Position - 0x2774
{
	switch (iParam0)
	{
		case 0:
			return 3;
		default:
	}
	return 2;
}

int func_234(int iParam0)//Position - 0x27C2
{
	switch (iParam0)
	{
		case 0:
			return 3;
		case 1:
			return 3;
		default:
	}
	return 2;
}

int func_235(int iParam0)//Position - 0x27E6
{
	switch (iParam0)
	{
		case 0:
			return 3;
		case 21:
			return 1;
		default:
	}
	return 2;
}

int func_236(int iParam0)//Position - 0x280A
{
	switch (iParam0)
	{
		case 0:
			return 3;
		case 8:
			return 1;
		default:
	}
	return 2;
}

void func_237(bool bParam0)//Position - 0x2A60
{
	if (bParam0 < 32)
	{
		if (BitTest(Global_1965644, bParam0))
		{
			MISC::CLEAR_BIT(&Global_1965644, bParam0);
			MISC::CLEAR_BIT(&Global_1965650, bParam0);
			MISC::CLEAR_BIT(&Global_1965652, bParam0);
		}
	}
	else if (BitTest(Global_1965645, (bParam0 - 32)))
	{
		MISC::CLEAR_BIT(&Global_1965645, (bParam0 - 32));
		MISC::CLEAR_BIT(&Global_1965651, (bParam0 - 32));
		MISC::CLEAR_BIT(&Global_1965653, (bParam0 - 32));
	}
}

int func_238(int iParam0)//Position - 0x30B1
{
	switch (iParam0)
	{
		case 0:
			return 5;
		case 1:
			return 7;
		case 3:
			return 3;
		case 4:
			return 1;
		case 11:
			return 1;
		case 13:
			return 1;
		case 7:
			return 0;
		case 21:
			return 1;
		case 28:
			return 1;
		case 46:
			return 1;
		case 47:
			return 1;
		case 48:
			return 1;
		case 49:
			return 1;
		case 50:
			return 1;
		case 51:
			return 1;
		case 52:
			return 1;
		case 53:
			return 1;
		case 54:
			return 1;
		case 55:
			return 1;
		case 56:
			return 1;
		case 57:
			return 1;
		case 58:
			return 1;
		case 32:
			return 1;
		case 33:
			return 1;
		case 34:
			return 1;
		case 35:
			return 1;
		case 36:
			return 1;
		case 37:
			return 1;
		case 38:
			return 1;
		case 39:
			return 1;
		case 40:
			return 1;
		case 41:
			return 1;
		case 42:
			return 1;
		case 43:
			return 1;
		case 44:
			return 1;
		case 45:
			return 1;
		default:
	}
	return 3;
}

int func_239(int iParam0, bool bParam1)//Position - 0x329D
{
	switch (iParam0)
	{
		case 1:
			if ((Global_1965654[0] >= 46 && Global_1965654[0] <= 58) && Global_1965657[0] == 1)
			{
				return 0;
			}
			if (bParam1 < 32 && Global_1965654[0] >= 32)
			{
				return 0;
			}
			break;
		case 2:
			if ((Global_1965654[0] >= 46 && Global_1965654[0] <= 58) && Global_1965657[0] == 1)
			{
				return 0;
			}
			if (Global_1965654[0] >= 32 && Global_1965657[0] == 1)
			{
				return 0;
			}
			break;
	}
	return 1;
}

int func_240(int iParam0, bool bParam1)//Position - 0x3355
{
	if (bParam1 < 32)
	{
		return BitTest(Global_1965636[iParam0], bParam1);
	}
	else
	{
		return BitTest(Global_1965639[iParam0], (bParam1 - 32));
	}
	return 0;
}

int func_241(bool bParam0)//Position - 0x33E3
{
	switch (bParam0)
	{
		case 0:
			return 0;
		case 29:
			return 2;
		case 30:
			return 2;
		case 23:
			return 3;
		case 15:
			return 3;
		case 12:
			return 3;
		default:
	}
	return 0;
}

bool func_242()//Position - 0x4F1B
{
	return Global_1965529;
}

int func_243()//Position - 0x83F8
{
	if (HUD::IS_PAUSE_MENU_ACTIVE())
	{
		return 0;
	}
	if (PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 19 /*INPUT_CHARACTER_WHEEL*/))
	{
		return 0;
	}
	return 0;
}

int func_244()//Position - 0x859F
{
	int iVar0;
	iVar0 = 223;
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(0 /*PLAYER_CONTROL*/))
	{
		iVar0 = 237;
	}
	return iVar0;
}

int func_245()//Position - 0x8617
{
	int iVar0;
	iVar0 = 229;
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(0 /*PLAYER_CONTROL*/))
	{
		iVar0 = 22;
	}
	return iVar0;
}

int func_246()//Position - 0x8631
{
	int iVar0;
	iVar0 = 228;
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(0 /*PLAYER_CONTROL*/))
	{
		iVar0 = 44;
	}
	return iVar0;
}

int func_247()//Position - 0x864B
{
	int iVar0;
	iVar0 = 226;
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(0 /*PLAYER_CONTROL*/))
	{
		iVar0 = 36;
	}
	return iVar0;
}

int func_248()//Position - 0x8665
{
	int iVar0;
	iVar0 = 227;
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(0 /*PLAYER_CONTROL*/))
	{
		iVar0 = 21;
	}
	return iVar0;
}

int func_249()//Position - 0x867F
{
	int iVar0;
	iVar0 = 225;
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(0 /*PLAYER_CONTROL*/))
	{
		iVar0 = 238;
	}
	return iVar0;
}

int func_250()//Position - 0x87E6
{
	if ((Global_1965533 != PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/) || BitTest(Global_1965531, 24)) || PAD::HAVE_CONTROLS_CHANGED(0 /*PLAYER_CONTROL*/))
	{
		return 1;
	}
	return 0;
}

int func_251()//Position - 0xA510
{
	int iVar0;
	iVar0 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), (1000 * Global_4718592.f_170136));
	if (iVar0 == 0)
	{
		iVar0 = NETWORK::GET_TIME_OFFSET(iVar0, 1);
	}
	return iVar0;
}

var func_252(int iParam0)//Position - 0xA9DC
{
	if (iParam0 == Global_2788168.f_1)
	{
		return Global_2788168;
	}
	return Global_2681762.f_192[iParam0];
}

void func_253(float fParam0, float fParam1)//Position - 0xAE95
{
	MISC::SET_BIT(&Global_2788033, 1);
	Global_2787947.f_6.f_1 = fParam0;
	Global_2787947.f_6 = fParam1;
}

void func_254(var uParam0)//Position - 0xB140
{
	if (PLAYER::PLAYER_ID() == NETWORK::NETWORK_GET_HOST_OF_SCRIPT(__LIB_1__::func_834(), -1, 0))
	{
		Global_2681762.f_192[uParam0->f_2] = uParam0->f_3;
	}
}

int func_255(int iParam0)//Position - 0xB1A9
{
	if (iParam0 == -1 || Global_4718592.f_170136 == -1)
	{
		return 1;
	}
	if (iParam0 == Global_2788168.f_1 && (Global_2681762.f_192[iParam0] == 0 || NETWORK::IS_TIME_MORE_THAN(Global_2788168, Global_2681762.f_192[iParam0])))
	{
		return 0;
	}
	return 1;
}

void func_256()//Position - 0xB310
{
	if (!BitTest(Global_1965531, 22))
	{
		MISC::SET_BIT(&Global_1965531, 22);
	}
}

void func_257(bool bParam0)//Position - 0xB32D
{
	ENTITY::SET_ENTITY_ALPHA(PLAYER::PLAYER_PED_ID(), 0, false);
	ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), false, false);
	if (bParam0)
	{
		GRAPHICS::TOGGLE_PAUSED_RENDERPHASES(false);
	}
	MISC::SET_BIT(&Global_1965531, 10);
}

int func_258(int iParam0)//Position - 0xB9E1
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if ((Global_2689235[iVar0 /*453*/].f_426 == iParam0 && iVar0 != PLAYER::PLAYER_ID()) && iParam0 != -1)
		{
			if (Global_2689235[iVar0 /*453*/].f_427 < Global_1965573)
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

int func_259(bool bParam0)//Position - 0xBA3B
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if ((Global_2689235[iVar0 /*453*/].f_426 == bParam0 && iVar0 != PLAYER::PLAYER_ID()) && bParam0 != -1)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_260(var uParam0, float fParam1, float fParam2)//Position - 0xC33D
{
	float fVar0;
	if (fParam1 < 0f)
	{
		fVar0 = (*uParam0 - fParam1);
		if (*uParam0 > fParam1)
		{
			*uParam0 = (*uParam0 - (fVar0 * (MISC::GET_FRAME_TIME() * fParam2)));
		}
		else if (*uParam0 < fParam1)
		{
			fVar0 = (fParam1 - *uParam0);
			*uParam0 = (*uParam0 + (fVar0 * (MISC::GET_FRAME_TIME() * fParam2)));
		}
	}
	else if (fParam1 > 0f)
	{
		fVar0 = (fParam1 - *uParam0);
		if (*uParam0 < fParam1)
		{
			*uParam0 = (*uParam0 + (fVar0 * (MISC::GET_FRAME_TIME() * fParam2)));
		}
		else if (*uParam0 > fParam1)
		{
			fVar0 = (*uParam0 - fParam1);
			*uParam0 = (*uParam0 - (fVar0 * (MISC::GET_FRAME_TIME() * fParam2)));
		}
	}
	else if (*uParam0 > fParam1)
	{
		fVar0 = (*uParam0 - fParam1);
		*uParam0 = (*uParam0 - (fVar0 * (MISC::GET_FRAME_TIME() * fParam2)));
	}
	else if (*uParam0 < fParam1)
	{
		fVar0 = (fParam1 - *uParam0);
		*uParam0 = (*uParam0 + (fVar0 * (MISC::GET_FRAME_TIME() * fParam2)));
	}
}

Vector3 func_261(struct<3> Param0)//Position - 0xCA5B
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	int iVar6;
	fVar5 = (8f - (SYSTEM::TO_FLOAT(Global_1965579) * 1.25f));
	fVar0 = MISC::GET_RANDOM_FLOAT_IN_RANGE((fVar5 - 0.5f), (fVar5 + 0.5f));
	if (fVar0 < 0f)
	{
		fVar0 = 0f;
	}
	fVar3 = (-28f + (2.5f * IntToFloat(Global_1965578)));
	fVar4 = (28f - (2.5f * IntToFloat(Global_1965578)));
	iVar6 = MISC::GET_RANDOM_INT_IN_RANGE(0, 100);
	if (iVar6 >= 90)
	{
		fVar1 = MISC::GET_RANDOM_FLOAT_IN_RANGE((fVar4 - 5f), fVar4);
		fVar2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(fVar3, fVar4);
	}
	else if (iVar6 >= 80)
	{
		fVar1 = MISC::GET_RANDOM_FLOAT_IN_RANGE(fVar3, fVar4);
		fVar2 = MISC::GET_RANDOM_FLOAT_IN_RANGE((fVar4 - 5f), fVar4);
	}
	else if (iVar6 >= 60)
	{
		iVar6 = MISC::GET_RANDOM_INT_IN_RANGE(0, 100);
		if (iVar6 > 50)
		{
			fVar1 = MISC::GET_RANDOM_FLOAT_IN_RANGE((fVar4 - 5f), fVar4);
		}
		else
		{
			fVar1 = MISC::GET_RANDOM_FLOAT_IN_RANGE((fVar3 + 5f), fVar3);
		}
		fVar2 = 0f;
	}
	else if (iVar6 >= 52)
	{
		fVar1 = MISC::GET_RANDOM_FLOAT_IN_RANGE(fVar3, fVar4);
		fVar2 = MISC::GET_RANDOM_FLOAT_IN_RANGE((fVar4 - 5f), fVar4);
	}
	else if (iVar6 >= 45)
	{
		fVar1 = MISC::GET_RANDOM_FLOAT_IN_RANGE((fVar4 - 5f), fVar4);
		fVar2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(fVar3, (fVar3 + 5f));
	}
	else if (iVar6 >= 25)
	{
		fVar1 = 0f;
		iVar6 = MISC::GET_RANDOM_INT_IN_RANGE(0, 100);
		if (iVar6 > 50)
		{
			fVar2 = MISC::GET_RANDOM_FLOAT_IN_RANGE((fVar4 - 5f), fVar4);
		}
		else
		{
			fVar2 = MISC::GET_RANDOM_FLOAT_IN_RANGE((fVar3 + 5f), fVar3);
		}
	}
	else if (iVar6 >= 15)
	{
		fVar1 = MISC::GET_RANDOM_FLOAT_IN_RANGE((fVar4 - 5f), fVar4);
		fVar2 = MISC::GET_RANDOM_FLOAT_IN_RANGE((fVar4 - 5f), fVar4);
	}
	else
	{
		fVar1 = MISC::GET_RANDOM_FLOAT_IN_RANGE(fVar3, (fVar3 + 5f));
		fVar2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(fVar3, (-fVar3 + 5f));
	}
	Param0.f_0 = (Param0.f_0 + fVar1);
	Param0.f_1 = (Param0.f_1 + fVar2);
	Param0.f_2 = (Param0.f_2 + (2f + fVar0));
	return Param0;
}

Vector3 func_262(struct<3> Param0, int iParam1)//Position - 0xCC18
{
	struct<3> Var0;
	var uVar1;
	struct<3> Var2;
	MISC::GET_MODEL_DIMENSIONS(iParam1, &uVar1, &Var2);
	Var2.f_2 = (Var2.f_2 * 2f);
	Var2.f_2 = (Var2.f_2 + 1f);
	Var0 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Param0, 0f, 0f, 0f, Var2.f_2) };
	return Var0;
}

void func_263(struct<3> Param0, struct<3> Param1)//Position - 0xCC55
{
	int iVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	iVar0 = SHAPETEST::GET_SHAPE_TEST_RESULT(Global_1965537, &uVar3, &uVar1, &uVar2, &iVar4);
	if (iVar0 == 2)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iVar4))
		{
			MISC::CLEAR_BIT(&Global_1965531, 28);
			MISC::CLEAR_BIT(&Global_1965532, 1);
			MISC::CLEAR_BIT(&Global_1965532, 17);
			MISC::CLEAR_BIT(&Global_1965531, 27);
			MISC::SET_BIT(&Global_1965532, 16);
			MISC::SET_BIT(&Global_1965531, 26);
		}
		else
		{
			Global_1965578 = 0;
			Global_1965579 = 0;
			Global_1965537 = 0;
			MISC::SET_BIT(&Global_1965531, 28);
			MISC::SET_BIT(&Global_1965532, 1);
			MISC::SET_BIT(&Global_1965532, 17);
		}
	}
	else if (iVar0 == 0)
	{
		iVar5 = 497;
		Global_1965537 = SHAPETEST::START_SHAPE_TEST_CAPSULE(Param0, Param1, 1f, iVar5, 0, 4);
	}
}

int func_264(int iParam0)//Position - 0xCE96
{
	if ((iParam0 == joaat("xs_prop_arena_landmine_03a") || iParam0 == joaat("xs_prop_arena_landmine_03a_sf")) || iParam0 == joaat("xs_prop_arena_landmine_03a_wl"))
	{
		return 1;
	}
	return 0;
}

int func_265(int iParam0)//Position - 0xCECA
{
	if ((iParam0 == joaat("xs_prop_arena_barrel_01a") || iParam0 == joaat("xs_prop_arena_barrel_01a_sf")) || iParam0 == joaat("xs_prop_arena_barrel_01a_wl"))
	{
		return 1;
	}
	return 0;
}

void func_266(bool bParam0, int iParam1, float fParam2)//Position - 0xD3A6
{
	struct<6> Var0;
	int iVar1;
	if (!NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return;
	}
	Var0.f_5 = 1065353216;
	Var0.f_0 = 1466307086;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = bParam0;
	Var0.f_3 = iParam1;
	Var0.f_4 = NETWORK::GET_NETWORK_TIME();
	Var0.f_5 = fParam2;
	iVar1 = __LIB_4__::func_970(1);
	if (!iVar1 == 0)
	{
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 6, iVar1);
	}
}

void func_267()//Position - 0xD7E7
{
	if (!Global_1965529)
	{
		Global_1965529 = 1;
	}
}

int func_268(int iParam0)//Position - 0xDB3F
{
	if ((iParam0 == joaat("xs_prop_arena_spikes_01a") || iParam0 == joaat("xs_prop_arena_spikes_01a_sf")) || iParam0 == -1371372177)
	{
		return 0;
	}
	return 1;
}

int func_269(int iParam0)//Position - 0xE18C
{
	switch (iParam0)
	{
		case joaat("rcbandito"):
		case joaat("minitank"):
		case joaat("deity"):
		case joaat("granger2"):
		case joaat("buffalo4"):
		case joaat("jubilee"):
		case joaat("patriot3"):
		case joaat("champion"):
		case joaat("greenwood"):
		case joaat("omnisegt"):
			return 1;
			break;
	}
	return 0;
}

bool func_270()//Position - 0xEDEF
{
	return ((Global_4718592.f_162543.f_1 == 3 || Global_4718592.f_162543.f_1 == 3) || Global_4718592.f_162543.f_1 == 3);
}

int func_271(int iParam0)//Position - 0xEE54
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = PLAYER::PLAYER_ID();
	iVar1 = Global_1892703[iVar0 /*599*/].f_594;
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 <= 31)
	{
		if (iParam0 == Global_1892703[iVar2 /*599*/].f_593)
		{
			if (Global_1892703[iVar2 /*599*/].f_594 > -1 && Global_1892703[iVar2 /*599*/].f_594 < iVar1)
			{
				iVar0 = iVar2;
			}
		}
		iVar2++;
	}
	if (iVar0 == PLAYER::PLAYER_ID() || iVar0 == -1)
	{
		return 0;
	}
	return 1;
}

bool func_272()//Position - 0xF6A1
{
	return Global_2787906;
}

bool func_273()//Position - 0xF6D3
{
	return Global_2787910;
}

Vector3 func_274(int iParam0, var uParam1)//Position - 0x105D4
{
	struct<3> Var0;
	switch (iParam0)
	{
		case 0:
			*uParam1 = 357.7f;
			Var0 = { 2798.7449f, -3938.6604f, 185.5f };
			break;
		case 1:
			*uParam1 = 1.35f;
			Var0 = { 2796.0596f, -3935.254f, 185.5107f };
			break;
		case 2:
			*uParam1 = 355f;
			Var0 = { 2794.7393f, -3935.5466f, 185.5107f };
			break;
		case 3:
			*uParam1 = 349.5615f;
			Var0 = { 2794.6428f, -3936.7405f, 185.5107f };
			break;
		case 4:
			*uParam1 = 3.4171f;
			Var0 = { 2799.5942f, -3935.2976f, 185.5107f };
			break;
		case 5:
			*uParam1 = 6.0675f;
			Var0 = { 2801.9966f, -3935.275f, 185.5107f };
			break;
		case 6:
			*uParam1 = 16.6502f;
			Var0 = { 2804.3735f, -3935.2693f, 185.5107f };
			break;
		case 7:
			*uParam1 = 12.2188f;
			Var0 = { 2807.2727f, -3935.1836f, 185.5107f };
			break;
		case 8:
			*uParam1 = 357.1077f;
			Var0 = { 2808.812f, -3938.9521f, 185.5356f };
			break;
		case 9:
			*uParam1 = 8.7248f;
			Var0 = { 2799.678f, -3939.6902f, 185.5357f };
			break;
		case 10:
			*uParam1 = 352.6495f;
			Var0 = { 2798.6985f, -3941.112f, 185.5357f };
			break;
		case 11:
			*uParam1 = 357.2962f;
			Var0 = { 2795.593f, -3940.5688f, 185.5357f };
			break;
		case 12:
			*uParam1 = 349.1294f;
			Var0 = { 2793.865f, -3939.5042f, 185.5357f };
			break;
		case 13:
			*uParam1 = 354.4223f;
			Var0 = { 2790.926f, -3938.8413f, 185.58357f };
			break;
		case 14:
			*uParam1 = 21.2078f;
			Var0 = { 2802.9397f, -3930.8408f, 185.5357f };
			break;
		case 15:
			*uParam1 = 340.7448f;
			Var0 = { 2791.4568f, -3931.614f, 185.5357f };
			break;
		case 16:
			*uParam1 = 20.7956f;
			Var0 = { 2797.9585f, -3935.1934f, 185.5796f };
			break;
		case 17:
			*uParam1 = 20.7956f;
			Var0 = { 2797.9585f, -3935.1934f, 185.5796f };
			break;
		case 18:
			*uParam1 = 20.7956f;
			Var0 = { 2808.3604f, -3932.7432f, 185.5475f };
			break;
		case 19:
			*uParam1 = 20.7956f;
			Var0 = { 2804.234f, -3932.2532f, 185.5495f };
			break;
		case 20:
			*uParam1 = 20.7956f;
			Var0 = { 2800.6917f, -3930.9111f, 185.8687f };
			break;
		case 21:
			*uParam1 = 20.7956f;
			Var0 = { 2800.6917f, -3930.9111f, 185.8687f };
			break;
		case 22:
			*uParam1 = 20.7956f;
			Var0 = { 2800.572f, -3928.069f, 185.9161f };
			break;
		case 23:
			*uParam1 = 20.7956f;
			Var0 = { 2802.842f, -3928.0645f, 185.9162f };
			break;
		case 24:
			*uParam1 = 20.7956f;
			Var0 = { 2792.55f, -3928.1562f, 185.9131f };
			break;
		case 25:
			*uParam1 = 20.7956f;
			Var0 = { 2790.8086f, -3928.2773f, 185.9088f };
			break;
		case 26:
			*uParam1 = 20.7956f;
			Var0 = { 2796.947f, -3935.581f, 185.8195f };
			break;
		case 27:
			*uParam1 = 20.7956f;
			Var0 = { 2798.896f, -3936.6255f, 185.7206f };
			break;
		case 28:
			*uParam1 = 20.7956f;
			Var0 = { 2803.3577f, -3936.6587f, 185.7762f };
			break;
		case 29:
			*uParam1 = 20.7956f;
			Var0 = { 2803.3577f, -3936.6587f, 185.7762f };
			break;
		case 30:
			*uParam1 = 20.7956f;
			Var0 = { 2806.0461f, -3936.326f, 185.7744f };
			break;
		case 31:
			*uParam1 = 20.7956f;
			Var0 = { 2809.536f, -3935.324f, 185.0902f };
			break;
	}
	return Var0;
}

void func_275(int iParam0)//Position - 0x10CA6
{
	var uVar0;
	uVar0 = Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_230;
	Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_230 = iParam0;
	Global_2667225.f_2638 = NETWORK::GET_NETWORK_TIME_ACCURATE();
}

void func_276()//Position - 0x10FDE
{
	Global_2787917 = 1;
}

void func_277()//Position - 0x110CA
{
	if (BitTest(Global_1965531, 2) || __LIB_6__::func_522())
	{
		if (!BitTest(Global_1888862[PLAYER::PLAYER_ID() /*120*/].f_29, 18))
		{
			MISC::SET_BIT(&(Global_1888862[PLAYER::PLAYER_ID() /*120*/].f_29), 18);
		}
	}
	else if (BitTest(Global_1888862[PLAYER::PLAYER_ID() /*120*/].f_29, 18))
	{
		MISC::CLEAR_BIT(&(Global_1888862[PLAYER::PLAYER_ID() /*120*/].f_29), 18);
	}
	if (BitTest(Global_1965531, 3) || __LIB_18__::func_253())
	{
		if (!BitTest(Global_1888862[PLAYER::PLAYER_ID() /*120*/].f_29, 19))
		{
			MISC::SET_BIT(&(Global_1888862[PLAYER::PLAYER_ID() /*120*/].f_29), 19);
		}
	}
	else if (BitTest(Global_1888862[PLAYER::PLAYER_ID() /*120*/].f_29, 19))
	{
		MISC::CLEAR_BIT(&(Global_1888862[PLAYER::PLAYER_ID() /*120*/].f_29), 19);
	}
	if (BitTest(Global_1965531, 4))
	{
		if (!BitTest(Global_1888862[PLAYER::PLAYER_ID() /*120*/].f_29, 20))
		{
			MISC::SET_BIT(&(Global_1888862[PLAYER::PLAYER_ID() /*120*/].f_29), 20);
		}
		if (Global_1965572 > -1)
		{
			if (__LIB_19__::func_132(Global_4980736.f_63312[Global_1965572 /*183*/].f_7))
			{
				if (!BitTest(Global_1888862[PLAYER::PLAYER_ID() /*120*/].f_29, 22))
				{
					MISC::SET_BIT(&(Global_1888862[PLAYER::PLAYER_ID() /*120*/].f_29), 22);
				}
			}
		}
	}
	else
	{
		if (BitTest(Global_1888862[PLAYER::PLAYER_ID() /*120*/].f_29, 20))
		{
			MISC::CLEAR_BIT(&(Global_1888862[PLAYER::PLAYER_ID() /*120*/].f_29), 20);
		}
		if (BitTest(Global_1888862[PLAYER::PLAYER_ID() /*120*/].f_29, 22))
		{
			MISC::CLEAR_BIT(&(Global_1888862[PLAYER::PLAYER_ID() /*120*/].f_29), 22);
		}
	}
	if (BitTest(Global_1965531, 5))
	{
		if (!BitTest(Global_1888862[PLAYER::PLAYER_ID() /*120*/].f_29, 21))
		{
			MISC::SET_BIT(&(Global_1888862[PLAYER::PLAYER_ID() /*120*/].f_29), 21);
		}
	}
	else if (BitTest(Global_1888862[PLAYER::PLAYER_ID() /*120*/].f_29, 21))
	{
		MISC::CLEAR_BIT(&(Global_1888862[PLAYER::PLAYER_ID() /*120*/].f_29), 21);
	}
}

void func_278(int iParam0)//Position - 0x112E2
{
	Global_1965530 = iParam0;
}

void func_279(int iParam0)//Position - 0x117E6
{
	Global_1965623 = iParam0;
}

bool func_280()//Position - 0x11802
{
	return Global_1965622;
}

void func_281(int iParam0, int iParam1)//Position - 0x12D3C
{
	iParam0->f_104 = iParam1;
}

bool func_282(bool bParam0)//Position - 0x1AE9F
{
	return BitTest(Global_1853348[bParam0 /*834*/].f_36.f_18, 6);
}

bool func_283(int iParam0)//Position - 0x20373
{
	return iParam0 == 58;
}

bool func_284()//Position - 0x21E97
{
	return BitTest(Global_4718592.f_35, 19);
}

int func_285(int iParam0)//Position - 0x223EF
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 1:
			return 1;
		case 2:
			return 2;
		case 46:
			return 31;
		case 3:
			return 3;
		case 4:
			return 4;
		case 5:
			return 5;
		case 23:
			return 11;
		case 26:
			return 12;
		case 32:
			return 15;
		case 33:
			return 17;
		case 47:
			return 32;
		case 55:
			return 35;
		case 6:
			return 1;
		case 7:
			return 2;
		case 8:
			return 3;
		case 9:
			return 4;
		case 10:
			return 5;
		case 24:
			return 11;
		case 27:
			return 12;
		case 48:
			return 32;
		case 50:
			return 31;
		case 11:
			return 1;
		case 12:
			return 2;
		case 13:
			return 3;
		case 14:
			return 4;
		case 15:
			return 5;
		case 25:
			return 11;
		case 28:
			return 12;
		case 30:
			return 13;
		case 49:
			return 32;
		case 51:
			return 31;
		case 16:
			return 4;
		case 17:
			return 5;
		case 29:
			return 12;
		case 40:
			return 23;
		case 41:
			return 24;
		case 18:
			return 6;
		case 19:
			return 7;
		case 20:
			return 8;
		case 21:
			return 9;
		case 22:
			return 10;
		case 31:
			return 14;
		case 34:
			return 16;
		case 42:
			return 27;
		case 43:
			return 28;
		case 44:
			return 29;
		case 45:
			return 30;
		case 53:
			return 33;
		case 54:
			return 34;
		case 56:
			return 36;
		default:
	}
	return 0;
}

bool func_286()//Position - 0x2764A
{
	return Global_2714762.f_43.f_56;
}

void func_287()//Position - 0x280C8
{
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("freight"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("freightcar"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("freightcar2"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("freightgrain"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("freightcont1"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("freightcont2"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("tankercar"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("metrotrain"));
}

char* func_288(int iParam0)//Position - 0x28118
{
	switch (iParam0)
	{
		case 0:
			return "missfbi1";
		case 1:
			return "missfbi5ig_12";
		case 2:
			return "dead";
		case 3:
			return "dead";
		case 4:
			return "dead";
		case 5:
			return "dead";
		case 6:
			return "dead";
		case 7:
			return "dead";
		case 8:
			return "dead";
		case 9:
			return "dead";
		case 10:
			return "anim@GangOps@Morgue@Table@";
		default:
	}
	return "missfbi1";
}

int func_289()//Position - 0x2CD30
{
	if (__LIB_21__::func_747(3))
	{
		return 3;
	}
	if (__LIB_21__::func_747(2))
	{
		return 2;
	}
	if (__LIB_21__::func_747(1))
	{
		return 1;
	}
	return 0;
}

int func_290()//Position - 0x2CD9D
{
	bool bVar0;
	bVar0 = false;
	while (bVar0 <= 3)
	{
		if (BitTest(Global_2715699.f_3880, bVar0))
		{
			return 1;
		}
		bVar0++;
	}
	return 0;
}

int func_291(bool bParam0)//Position - 0x2F133
{
	return Global_1853348[bParam0 /*834*/].f_205.f_6;
}

int func_292()//Position - 0x30E1C
{
	return Global_4718592.f_168997;
}

int func_293(int iParam0, int iParam1, int iParam2, struct<3> Param3, float fParam4, bool bParam5, bool bParam6, bool bParam7)//Position - 0x31068
{
	int iVar0;
	if (!NETWORK::CAN_REGISTER_MISSION_PEDS(1))
	{
		return 0;
	}
	iVar0 = PED::CREATE_PED(iParam1, iParam2, Param3, fParam4, bParam6, bParam5);
	*iParam0 = NETWORK::PED_TO_NET(iVar0);
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*iParam0))
	{
		ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iVar0, bParam7);
		if (NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(iVar0))
		{
			if (bParam5)
			{
				NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*iParam0, true);
			}
		}
		return 1;
	}
	return 0;
}

int func_294(int iParam0)//Position - 0x456BC
{
	switch (iParam0)
	{
		case 0:
			return joaat("PLAYER");
		case 1:
			return joaat("CIVMALE");
		case 2:
			return joaat("CIVFEMALE");
		case 3:
			return joaat("COP");
		case 4:
			return joaat("HATES_PLAYER");
		case 5:
			return joaat("AMBIENT_GANG_LOST");
		case 6:
			return joaat("AMBIENT_GANG_MEXICAN");
		case 7:
			return joaat("AMBIENT_GANG_FAMILY");
		case 8:
			return joaat("ARMY");
		case 9:
			return joaat("SECURITY_GUARD");
		case 10:
			return joaat("AMBIENT_GANG_MARABUNTE");
		case 11:
			return joaat("AMBIENT_GANG_CULT");
		case 12:
			return joaat("AMBIENT_GANG_SALVA");
		case 13:
			return joaat("AMBIENT_GANG_WEICHENG");
		case 14:
			return joaat("AMBIENT_GANG_BALLAS");
		case 15:
			return joaat("AMBIENT_GANG_HILLBILLY");
		case 16:
			return joaat("AGGRESSIVE_INVESTIGATE");
		case 17:
			return joaat("NO_RELATIONSHIP");
		case 18:
			return joaat("SHARK");
		case 19:
			return joaat("PRIVATE_SECURITY");
		case 20:
			return joaat("CAT");
		default:
	}
	return joaat("NO_RELATIONSHIP");
}

void func_295(int iParam0, bool bParam1, bool bParam2)//Position - 0x457F6
{
	if (bParam2)
	{
		if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MC_ChasePedID", 3))
		{
			if (!DECORATOR::DECOR_EXIST_ON(iParam0, "MC_ChasePedID"))
			{
				DECORATOR::DECOR_SET_INT(iParam0, "MC_ChasePedID", bParam1);
			}
		}
	}
	else if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MC_EntityID", 3))
	{
		if (!DECORATOR::DECOR_EXIST_ON(iParam0, "MC_EntityID"))
		{
			DECORATOR::DECOR_SET_INT(iParam0, "MC_EntityID", bParam1);
		}
	}
}

bool func_296(bool bParam0)//Position - 0x45854
{
	return bParam0;
}

bool func_297(int iParam0)//Position - 0x46570
{
	return Global_262145.f_5032[0] == iParam0;
}

int func_298()//Position - 0x525FC
{
	STREAMING::REQUEST_ANIM_SET("ANIM_GROUP_MOVE_BALLISTIC");
	STREAMING::REQUEST_ANIM_SET("MOVE_STRAFE_BALLISTIC");
	STREAMING::REQUEST_CLIP_SET("move_ballistic_2h");
	if ((STREAMING::HAS_ANIM_SET_LOADED("ANIM_GROUP_MOVE_BALLISTIC") && STREAMING::HAS_ANIM_SET_LOADED("MOVE_STRAFE_BALLISTIC")) && STREAMING::HAS_CLIP_SET_LOADED("move_ballistic_2h"))
	{
		return 1;
	}
	return 0;
}

void func_299(var uParam0, var uParam1, var uParam2, var uParam3)//Position - 0x562F9
{
	*uParam0 = Global_1058372[12];
	if (*uParam0 == 255)
	{
		*uParam0 = -1;
	}
	*uParam1 = Global_1058372[13];
	if (*uParam1 == 255)
	{
		*uParam1 = -1;
	}
	*uParam2 = Global_1058372[14];
	if (*uParam2 == 255)
	{
		*uParam2 = -1;
	}
	*uParam3 = Global_1058372[15];
	if (*uParam3 == 255)
	{
		*uParam3 = -1;
	}
}

void func_300(var uParam0, var uParam1, var uParam2, var uParam3)//Position - 0x5635D
{
	*uParam0 = Global_1058372[8];
	if (*uParam0 == 255)
	{
		*uParam0 = -1;
	}
	*uParam1 = Global_1058372[9];
	if (*uParam1 == 255)
	{
		*uParam1 = -1;
	}
	*uParam2 = Global_1058372[10];
	if (*uParam2 == 255)
	{
		*uParam2 = -1;
	}
	*uParam3 = Global_1058372[11];
	if (*uParam3 == 255)
	{
		*uParam3 = -1;
	}
}

void func_301(var uParam0, var uParam1, var uParam2, var uParam3)//Position - 0x563C1
{
	*uParam0 = Global_1058372[4];
	if (*uParam0 == 255)
	{
		*uParam0 = -1;
	}
	*uParam1 = Global_1058372[5];
	if (*uParam1 == 255)
	{
		*uParam1 = -1;
	}
	*uParam2 = Global_1058372[6];
	if (*uParam2 == 255)
	{
		*uParam2 = -1;
	}
	*uParam3 = Global_1058372[7];
	if (*uParam3 == 255)
	{
		*uParam3 = -1;
	}
}

void func_302(var uParam0, var uParam1, var uParam2, var uParam3)//Position - 0x56421
{
	*uParam0 = Global_1058372[0];
	if (*uParam0 == 255)
	{
		*uParam0 = -1;
	}
	*uParam1 = Global_1058372[1];
	if (*uParam1 == 255)
	{
		*uParam1 = -1;
	}
	*uParam2 = Global_1058372[2];
	if (*uParam2 == 255)
	{
		*uParam2 = -1;
	}
	*uParam3 = Global_1058372[3];
	if (*uParam3 == 255)
	{
		*uParam3 = -1;
	}
}

int func_303(bool bParam0)//Position - 0x564EB
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 <= (Global_4718592.f_593 - 1))
	{
		if (BitTest(Global_4718592.f_658[iVar0 /*22957*/].f_12409, bParam0))
		{
			return 1;
		}
		iVar1 = 0;
		while (iVar1 <= (Global_4718592.f_658[iVar0 /*22957*/].f_59 - 1))
		{
			if (Global_4718592.f_658[iVar0 /*22957*/].f_12391[iVar1] == bParam0)
			{
				return 1;
			}
			iVar1++;
		}
		iVar0++;
	}
	return 0;
}

bool func_304(int iParam0)//Position - 0x59DEC
{
	return Global_262145.f_5023[0] == iParam0;
}

void func_305(int iParam0, var uParam1, int iParam2, int iParam3, var uParam4)//Position - 0x5A19C
{
	int iVar0;
	iVar0 = *uParam1;
	iVar0 = __LIB_0__::func_340(iVar0, -1, VEHICLE::GET_NUM_VEHICLE_MODS(iParam0, iParam2));
	if (VEHICLE::GET_NUM_VEHICLE_MODS(iParam0, iParam2) >= iVar0)
	{
		VEHICLE::SET_VEHICLE_MOD(iParam0, iParam2, iVar0, false);
	}
	else
	{
		*uParam1 = -1;
	}
}

int func_306(bool bParam0, var uParam1)//Position - 0x6ADCC
{
	int iVar0;
	int iVar1;
	bool bVar2;
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 <= 3)
	{
		bVar2 = false;
		while (bVar2 <= 16)
		{
			if (Global_4718592.f_658[iVar1 /*22957*/].f_6921[bVar2] == 3 && Global_4718592.f_658[iVar1 /*22957*/].f_6991[bVar2] == bParam0)
			{
				iVar0 = 1;
				if (!BitTest(Global_4718592.f_658[iVar1 /*22957*/].f_7081, bVar2) && BitTest(Global_4718592.f_658[iVar1 /*22957*/].f_7082, bVar2))
				{
					*uParam1 = 1;
					bVar2 = 17;
					iVar1 = 4;
				}
			}
			bVar2++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_307(int iParam0, int iParam1, int iParam2)//Position - 0x6AFED
{
	switch (iParam0)
	{
		case 2:
			return 1;
		case 5:
			if (BitTest(Global_4718592.f_658[iParam1 /*22957*/].f_7911[iParam2], 14))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_308()//Position - 0x6B474
{
	int iVar0;
	iVar0 = CLOCK::GET_CLOCK_HOURS();
	if (iVar0 <= 5 || iVar0 >= 21)
	{
		return 1;
	}
	return 0;
}

int func_309(bool bParam0)//Position - 0x75B3C
{
	if (bParam0)
	{
		return 1;
	}
	return 2;
}

bool func_310(bool bParam0)//Position - 0xCE6B6
{
	return BitTest(Global_1853348[bParam0 /*834*/].f_96.f_32, 5);
}

int func_311(int iParam0)//Position - 0xCE6CD
{
	switch (iParam0)
	{
		case 2:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
		case 42:
		case 43:
		case 44:
		case 45:
		case 46:
		case 47:
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
		case 59:
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
			return 1;
			break;
	}
	return 0;
}

void func_312(int iParam0)//Position - 0xD0B60
{
	Global_2715699.f_3479.f_32 = iParam0;
}

int func_313(int iParam0)//Position - 0xE3C52
{
	int iVar0;
	if (iParam0 == -1)
	{
		iParam0 = __LIB_0__::getGlobal_1574918();
	}
	switch (iParam0)
	{
		case 0:
			iVar0 = 940;
			break;
		case 1:
			iVar0 = 941;
			break;
	}
	return iVar0;
}

int func_314(int iParam0)//Position - 0xE3E10
{
	switch (iParam0)
	{
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
		case 42:
		case 43:
		case 44:
		case 45:
		case 46:
		case 58:
		case 61:
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
		case 70:
		case 73:
		case 74:
			return 1;
		default:
	}
	return 0;
}

int func_315(int iParam0, int iParam1)//Position - 0xE4A57
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 2:
					return Global_262145.f_23393 /* Tunable: H2_REPLAY_COOLDOWN_2_PLAYER_IAA */;
				case 3:
					return Global_262145.f_23396 /* Tunable: H2_REPLAY_COOLDOWN_3_PLAYER_IAA */;
				case 4:
					return Global_262145.f_23399 /* Tunable: H2_REPLAY_COOLDOWN_4_PLAYER_IAA */;
				default:
			}
			return Global_262145.f_23391 /* Tunable: H2_IAA_REPLAY_COOLDOWN_TIME */;
			break;
		case 1:
			switch (iParam1)
			{
				case 2:
					return Global_262145.f_23394 /* Tunable: H2_REPLAY_COOLDOWN_2_PLAYER_SUB */;
				case 3:
					return Global_262145.f_23397 /* Tunable: H2_REPLAY_COOLDOWN_3_PLAYER_SUB */;
				case 4:
					return Global_262145.f_23400 /* Tunable: H2_REPLAY_COOLDOWN_4_PLAYER_SUB */;
				default:
			}
			return Global_262145.f_23392 /* Tunable: H2_SUB_REPLAY_COOLDOWN_TIME */;
			break;
		case 2:
			switch (iParam1)
			{
				case 2:
					return Global_262145.f_23395 /* Tunable: H2_REPLAY_COOLDOWN_2_PLAYER_SILO */;
				case 3:
					return Global_262145.f_23398 /* Tunable: H2_REPLAY_COOLDOWN_3_PLAYER_SILO */;
				case 4:
					return Global_262145.f_23401 /* Tunable: H2_REPLAY_COOLDOWN_4_PLAYER_SILO */;
				default:
			}
			return Global_262145.f_23402 /* Tunable: H2_SILO_REPLAY_COOLDOWN_TIME */;
			break;
	}
	return 3600;
}

void func_316()//Position - 0xE4D4E
{
	if (BitTest(Global_2815059.f_1805, 5))
	{
		MISC::CLEAR_BIT(&(Global_2815059.f_1805), 5);
	}
	if (BitTest(Global_2815059.f_1804, 26))
	{
		MISC::CLEAR_BIT(&(Global_2815059.f_1804), 26);
	}
	if (BitTest(Global_2815059.f_1805, 6))
	{
		MISC::CLEAR_BIT(&(Global_2815059.f_1805), 6);
	}
	if (BitTest(Global_2815059.f_1804, 27))
	{
		MISC::CLEAR_BIT(&(Global_2815059.f_1804), 27);
	}
	if (BitTest(Global_2815059.f_1805, 8))
	{
		MISC::CLEAR_BIT(&(Global_2815059.f_1805), 8);
	}
	if (BitTest(Global_2815059.f_1804, 28))
	{
		MISC::CLEAR_BIT(&(Global_2815059.f_1804), 28);
	}
	if (BitTest(Global_2815059.f_1805, 11))
	{
		MISC::CLEAR_BIT(&(Global_2815059.f_1805), 11);
	}
	if (BitTest(Global_2815059.f_1804, 29))
	{
		MISC::CLEAR_BIT(&(Global_2815059.f_1804), 29);
	}
	if (BitTest(Global_2815059.f_1805, 9))
	{
		MISC::CLEAR_BIT(&(Global_2815059.f_1805), 9);
	}
	if (BitTest(Global_2815059.f_1806, 0))
	{
		MISC::CLEAR_BIT(&(Global_2815059.f_1806), 0);
	}
	if (BitTest(Global_2815059.f_1806, 1))
	{
		MISC::CLEAR_BIT(&(Global_2815059.f_1806), 1);
	}
	if (BitTest(Global_2815059.f_1806, 2))
	{
		MISC::CLEAR_BIT(&(Global_2815059.f_1806), 2);
	}
	if (BitTest(Global_2815059.f_1806, 3))
	{
		MISC::CLEAR_BIT(&(Global_2815059.f_1806), 3);
	}
	if (BitTest(Global_2815059.f_1806, 4))
	{
		MISC::CLEAR_BIT(&(Global_2815059.f_1806), 4);
	}
	if (BitTest(Global_2815059.f_1806, 5))
	{
		MISC::CLEAR_BIT(&(Global_2815059.f_1806), 5);
	}
	if (BitTest(Global_2815059.f_1806, 6))
	{
		MISC::CLEAR_BIT(&(Global_2815059.f_1806), 6);
	}
	if (BitTest(Global_2815059.f_1806, 7))
	{
		MISC::CLEAR_BIT(&(Global_2815059.f_1806), 7);
	}
	if (BitTest(Global_2815059.f_1806, 8))
	{
		MISC::CLEAR_BIT(&(Global_2815059.f_1806), 8);
	}
	if (BitTest(Global_2815059.f_1806, 9))
	{
		MISC::CLEAR_BIT(&(Global_2815059.f_1806), 9);
	}
	if (BitTest(Global_2815059.f_1806, 10))
	{
		MISC::CLEAR_BIT(&(Global_2815059.f_1806), 10);
	}
	if (BitTest(Global_2815059.f_1806, 11))
	{
		MISC::CLEAR_BIT(&(Global_2815059.f_1806), 11);
	}
	if (BitTest(Global_2815059.f_1806, 12))
	{
		MISC::CLEAR_BIT(&(Global_2815059.f_1806), 12);
	}
}

int func_317(bool bParam0)//Position - 0xE5C0B
{
	switch (bParam0)
	{
		case 0:
			return 14;
		case 1:
			return 15;
		case 2:
			return 16;
		case 3:
			return 17;
		case 4:
			return 18;
		case 5:
			return 19;
		case 6:
			return 20;
		case 7:
			return 21;
		case 8:
			return 22;
		case 9:
			return 23;
		case 10:
			return 24;
		case 11:
			return 25;
		case 12:
			return 26;
		case 13:
			return 27;
		default:
	}
	return -1;
}

bool func_318(int iParam0)//Position - 0xE9FB2
{
	return PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam0);
}

int func_319(int iParam0)//Position - 0xFBE4B
{
	switch (iParam0)
	{
		case 0:
			return -623391175;
		case 1:
			return -1801970482;
		case 2:
			return -589934703;
		case 3:
			return -1591493106;
		case 4:
			return 1511571939;
		case 5:
			return -590314610;
		case 6:
			return -439469264;
		case 7:
			return 1240484981;
		default:
	}
	return -623391175;
}

int func_320(int iParam0)//Position - 0xFD06F
{
	switch (iParam0)
	{
		case 1:
			return Global_262145.f_23331 /* Tunable: H2_FIRST_TIME_BONUS */;
		case 2:
			return Global_262145.f_23331 /* Tunable: H2_FIRST_TIME_BONUS */;
		case 6:
			return Global_262145.f_23331 /* Tunable: H2_FIRST_TIME_BONUS */;
		case 3:
			return Global_262145.f_23332 /* Tunable: H2_ORDER_BONUS */;
		case 4:
			return Global_262145.f_23335 /* Tunable: 1686795626 */;
		case 7:
			return Global_262145.f_23333 /* Tunable: -461618332 */;
		case 8:
			return Global_262145.f_23334 /* Tunable: -1940778575 */;
		case 5:
			return Global_262145.f_23338 /* Tunable: -203511919 */;
		case 9:
			return Global_262145.f_23336 /* Tunable: -1566570663 */;
		case 10:
			return Global_262145.f_23337 /* Tunable: -48087040 */;
		case 11:
			return Global_262145.f_23339 /* Tunable: 188001427 */;
		default:
	}
	return 0;
}

int func_321(int iParam0)//Position - 0xFD22A
{
	return (SYSTEM::ROUND(SYSTEM::POW(2f, SYSTEM::TO_FLOAT(iParam0))) - 1);
}

int func_322(int iParam0)//Position - 0xFD243
{
	switch (iParam0)
	{
		case 3:
			return joaat("MPPLY_GANGOPS_ALLINORDER");
		case 4:
			return joaat("MPPLY_GANGOPS_LOYALTY");
		case 7:
			return joaat("MPPLY_GANGOPS_LOYALTY2");
		case 8:
			return joaat("MPPLY_GANGOPS_LOYALTY3");
		case 5:
			return joaat("MPPLY_GANGOPS_CRIMMASMD");
		case 9:
			return joaat("MPPLY_GANGOPS_CRIMMASMD2");
		case 10:
			return joaat("MPPLY_GANGOPS_CRIMMASMD3");
		case 11:
			return joaat("MPPLY_GANGOPS_SUPPORT");
		default:
	}
	return joaat("MPPLY_GANGOPS_ALLINORDER");
}

int func_323(int iParam0)//Position - 0xFD51A
{
	switch (iParam0)
	{
		case 4:
			return 3;
		case 7:
			return 1;
		case 8:
			return 2;
		case 5:
			return 3;
		case 9:
			return 1;
		case 10:
			return 2;
		default:
	}
	return -1;
}

int func_324(int iParam0)//Position - 0xFD5DC
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 1:
			return 6;
		case 2:
			return 7;
		case 3:
			return 16;
		case 4:
			return 17;
		case 5:
			return 26;
		case 6:
			return 28;
		case 7:
			return 29;
		default:
	}
	return -1;
}

int func_325(int iParam0)//Position - 0xFD7E4
{
	switch (iParam0)
	{
		case 0:
			return 3;
		case 1:
			return 4;
		case 2:
			return 5;
		case 3:
			return 6;
		case 4:
			return 12;
		case 5:
			return 13;
		case 6:
			return 14;
		case 7:
			return 15;
		case 8:
			return 16;
		case 9:
			return 22;
		case 10:
			return 23;
		case 11:
			return 24;
		case 12:
			return 25;
		case 13:
			return 27;
		case 14:
		case 15:
			return 28;
		default:
	}
	return -1;
}

int func_326()//Position - 0x104D8B
{
	if (__LIB_7__::func_721(Global_4718592.f_116524) || __LIB_3__::func_339(Global_4718592.f_116524))
	{
		return 0;
	}
	return 1;
}

int func_327(int iParam0)//Position - 0x104DBD
{
	if (iParam0 >= 0 && iParam0 < 4)
	{
		return BitTest(Global_4718592.f_658[iParam0 /*22957*/].f_12180, 9);
	}
	return 0;
}

void func_328()//Position - 0x11EBDE
{
	if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("HeistCelebPass"))
	{
		GRAPHICS::ANIMPOSTFX_STOP("HeistCelebPass");
	}
	if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("HeistCelebPassBW"))
	{
		GRAPHICS::ANIMPOSTFX_STOP("HeistCelebPassBW");
	}
}

void func_329()//Position - 0x11EC10
{
	if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("HeistCelebFail"))
	{
		GRAPHICS::ANIMPOSTFX_STOP("HeistCelebFail");
	}
	if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("HeistCelebFailBW"))
	{
		GRAPHICS::ANIMPOSTFX_STOP("HeistCelebFailBW");
	}
}

void func_330()//Position - 0x11EC42
{
	if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("MP_Celeb_Preload_Fade"))
	{
		GRAPHICS::ANIMPOSTFX_STOP("MP_Celeb_Preload_Fade");
	}
	if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("SuccessNeutral"))
	{
		GRAPHICS::ANIMPOSTFX_STOP("SuccessNeutral");
	}
	if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("HeistCelebEnd"))
	{
		GRAPHICS::ANIMPOSTFX_STOP("HeistCelebEnd");
	}
}

int func_331()//Position - 0x131EB8
{
	int iVar0;
	if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
		if (!VEHICLE::IS_VEHICLE_SEAT_FREE(iVar0, -1, false))
		{
			if (PLAYER::PLAYER_PED_ID() == VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1, false))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_332()//Position - 0x131EF5
{
	return HUD::GET_GLOBAL_ACTIONSCRIPT_FLAG(10) == 3;
}

bool func_333()//Position - 0x131FC1
{
	return HUD::GET_GLOBAL_ACTIONSCRIPT_FLAG(10) == 1;
}

bool func_334()//Position - 0x131FD1
{
	return BitTest(Global_2621446, 24);
}

void func_335(var uParam0, char* sParam1, int iParam2)//Position - 0x13A98F
{
	float fVar0;
	fVar0 = (SYSTEM::TO_FLOAT(iParam2) / 1000f);
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "PAUSE");
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam1);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fVar0);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_1, "PAUSE");
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam1);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fVar0);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_2, "PAUSE");
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam1);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fVar0);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_336(var uParam0)//Position - 0x13AA25
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "ADD_INCREMENTAL_CASH_ANIMATION_TO_WALL");
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME("SUMMARY");
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME("CASH");
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_1, "ADD_INCREMENTAL_CASH_ANIMATION_TO_WALL");
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME("SUMMARY");
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME("CASH");
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_2, "ADD_INCREMENTAL_CASH_ANIMATION_TO_WALL");
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME("SUMMARY");
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME("CASH");
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

char* func_337(int iParam0)//Position - 0x13AAE6
{
	switch (iParam0)
	{
		case 1:
			return "AWD_GANGOP0d" /* GXT: Complete Act I of The Doomsday Heist for the first time. */;
		case 2:
			return "AWD_GANGOP1d" /* GXT: Complete Act II of The Doomsday Heist for the first time. */;
		case 6:
			return "AWD_GANGOP2d" /* GXT: Complete Act III of The Doomsday Heist for the first time. */;
		case 3:
			return "AWD_GANGOP3d" /* GXT: Complete The Doomsday Heist in order. */;
		case 4:
			return "AWD_GANGOP7d" /* GXT: Complete The Doomsday Heist in order with the same team of 4 players. */;
		case 5:
			return "AWD_GANGOP9d" /* GXT: Complete The Doomsday Heist in order, with the same team of 4 players, on hard difficulty, without losing any lives on Setups and Finales. */;
		case 7:
			return "AWD_GANGOP4d" /* GXT: Complete The Doomsday Heist in order with the same team of 2 players. */;
		case 8:
			return "AWD_GANGOP6d" /* GXT: Complete The Doomsday Heist in order with the same team of 3 players. */;
		case 9:
			return "AWD_GANGOP5d" /* GXT: Complete The Doomsday Heist in order, with the same team of 2 players, on hard difficulty, without losing any lives on Setups and Finales. */;
		case 10:
			return "AWD_GANGOP8d" /* GXT: Complete The Doomsday Heist in order, with the same team of 3 players, on hard difficulty, without losing any lives on Setups and Finales. */;
		case 11:
			return "AWD_GANGO10d" /* GXT: Complete all acts of The Doomsday Heist as a crew member, ending with completion of the Act III finale. */;
		default:
	}
	return "";
}

int func_338(bool bParam0)//Position - 0x13AC40
{
	if (bParam0)
	{
		return 6;
	}
	return 2;
}

char* func_339()//Position - 0x13AC52
{
	if (!Global_2715699.f_3479.f_133)
	{
		return "CELEB_EL_CH_F" /* GXT: ELITE CHALLENGE INCOMPLETE */;
	}
	return "CELEB_EL_CH_P" /* GXT: ELITE CHALLENGE COMPLETE */;
}

struct<16> func_340(int iParam0, bool bParam1)//Position - 0x13AC74
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	struct<16> Var5;
	iVar0 = 3600000;
	iVar1 = (iParam0 / iVar0);
	iVar2 = ((iParam0 - (iVar1 * iVar0)) / (iVar0 / 60));
	iVar3 = (((iParam0 - (iVar1 * iVar0)) - (iVar2 * (iVar0 / 60))) / 1000);
	iVar4 = (((iParam0 - (iVar1 * iVar0)) - (iVar2 * (iVar0 / 60))) - iVar3 * 1000);
	StringCopy(&Var5, "", 64);
	if (iVar1 != 0)
	{
		StringIntConCat(&Var5, iVar1, 64);
		StringConCat(&Var5, ":", 64);
	}
	if (iVar2 != 0)
	{
		if (iVar2 < 10)
		{
			StringConCat(&Var5, "0", 64);
		}
		StringIntConCat(&Var5, iVar2, 64);
	}
	else
	{
		StringConCat(&Var5, "00", 64);
	}
	StringConCat(&Var5, ":", 64);
	if (iVar3 != 0)
	{
		if (iVar3 < 10)
		{
			StringConCat(&Var5, "0", 64);
		}
		StringIntConCat(&Var5, iVar3, 64);
	}
	else
	{
		StringConCat(&Var5, "00", 64);
	}
	if (bParam1)
	{
		StringConCat(&Var5, ".", 64);
		if (iVar4 != 0)
		{
			if (iVar4 < 100)
			{
				StringConCat(&Var5, "0", 64);
			}
			if (iVar4 < 10)
			{
				StringConCat(&Var5, "0", 64);
			}
			StringIntConCat(&Var5, iVar4, 64);
		}
		else
		{
			StringConCat(&Var5, "000", 64);
		}
	}
	return Var5;
}

void func_341(var uParam0, int iParam1)//Position - 0x13AD84
{
	if (!*uParam0)
	{
		*iParam1 = 6;
		*uParam0 = 1;
	}
	else
	{
		*iParam1 = -1;
	}
}

void func_342(var uParam0, float fParam1, float fParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6, int iParam7, int iParam8, int iParam9)//Position - 0x13ADB4
{
	int iVar0;
	switch (iParam7)
	{
		case 1:
			iVar0 = 1;
			break;
		case 2:
			iVar0 = 2;
			break;
		case 3:
			iVar0 = 0;
			break;
		default:
			iVar0 = 0;
			break;
	}
	if (iParam9 != -1)
	{
		iVar0 = iParam9;
	}
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "ADD_INCREMENTAL_CASH_WON_STEP");
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME("SUMMARY");
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME("CASH");
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fParam2);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
	{
		GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam3);
		if (iParam8 != -1)
		{
			HUD::ADD_TEXT_COMPONENT_INTEGER(iParam8);
		}
		GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	}
	else
	{
		GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam3);
		GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	}
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam4);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam5))
	{
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam5);
	}
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam6);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam7);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_1, "ADD_INCREMENTAL_CASH_WON_STEP");
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME("SUMMARY");
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME("CASH");
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fParam2);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
	{
		GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam3);
		if (iParam8 != -1)
		{
			HUD::ADD_TEXT_COMPONENT_INTEGER(iParam8);
		}
		GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	}
	else
	{
		GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam3);
		GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	}
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam4);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam5))
	{
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam5);
	}
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam6);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam7);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_2, "ADD_INCREMENTAL_CASH_WON_STEP");
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME("SUMMARY");
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME("CASH");
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fParam2);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
	{
		GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam3);
		if (iParam8 != -1)
		{
			HUD::ADD_TEXT_COMPONENT_INTEGER(iParam8);
		}
		GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	}
	else
	{
		GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam3);
		GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	}
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam4);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam5))
	{
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam5);
	}
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam6);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam7);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_343(var uParam0)//Position - 0x13B021
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "CREATE_INCREMENTAL_CASH_ANIMATION");
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME("SUMMARY");
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME("CASH");
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_1, "CREATE_INCREMENTAL_CASH_ANIMATION");
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME("SUMMARY");
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME("CASH");
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_2, "CREATE_INCREMENTAL_CASH_ANIMATION");
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME("SUMMARY");
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME("CASH");
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_344(var uParam0, char* sParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)//Position - 0x13B0E2
{
	char* sVar0;
	if (bParam4)
	{
		sVar0 = "CELEB_CUT_TAKE";
	}
	else
	{
		sVar0 = "CELEB_PAYMENT" /* GXT: PAYMENT */;
	}
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "ADD_CASH_WON_TO_WALL");
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam1);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	__LIB_0__::func_700(sVar0);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
	if (bParam5)
	{
		__LIB_0__::func_700("left");
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_1, "ADD_CASH_WON_TO_WALL");
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam1);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	__LIB_0__::func_700(sVar0);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
	if (bParam5)
	{
		__LIB_0__::func_700("left");
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_2, "ADD_CASH_WON_TO_WALL");
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam1);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	__LIB_0__::func_700(sVar0);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
	if (bParam5)
	{
		__LIB_0__::func_700("left");
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

int func_345(int iParam0)//Position - 0x13B3D2
{
	int iVar0;
	iVar0 = (333 * iParam0);
	iVar0 = (iVar0 + (2333 * iParam0));
	iVar0 += 333;
	return iVar0;
}

void func_346()//Position - 0x13C033
{
	if (!__LIB_3__::func_144(PLAYER::PLAYER_ID(), 0, 0))
	{
		CAM::DISABLE_CINEMATIC_BONNET_CAMERA_THIS_UPDATE();
		CAM::DISABLE_ON_FOOT_FIRST_PERSON_VIEW_THIS_UPDATE();
	}
}

var func_347(int iParam0)//Position - 0x13D9DB
{
	var uVar0;
	int iVar1;
	bool bVar2;
	iVar1 = 0;
	while (iVar1 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1)))
		{
			bVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1));
			if (__LIB_1__::func_693(bVar2, 0, 0))
			{
				if (bVar2 != PLAYER::PLAYER_ID())
				{
					if (bVar2 != iParam0)
					{
						MISC::SET_BIT(&uVar0, bVar2);
					}
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

Vector3 func_348(int iParam0, int iParam1)//Position - 0x13E306
{
	return Global_4523275[iParam0 /*97*/].f_18[iParam1 /*3*/];
}

void func_349()//Position - 0x142DD8
{
	int iVar0;
	if (__LIB_0__::func_855(PLAYER::PLAYER_ID()))
	{
		iVar0 = PLAYER::PLAYER_ID();
		Global_2689235[iVar0 /*453*/].f_237 = 0;
		Global_2689235[iVar0 /*453*/].f_236 = 0;
	}
}

int func_350(int iParam0)//Position - 0x1441BC
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (iParam0 == __LIB_2__::func_277(iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_351(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x15711A
{
	int iVar0;
	int iVar1;
	if (!uParam0->f_505)
	{
		if (iParam1 == PLAYER::PLAYER_ID())
		{
			iVar0 = PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID());
			*iParam2 = iParam3;
			uParam0->f_505 = 1;
			iVar0++;
			iVar1 = (iVar0 * 2 - 1);
			uParam0->f_509 = iVar1;
		}
		else if (iParam3 >= (iParam4 - 1))
		{
			*iParam2 = 0;
			uParam0->f_505 = 1;
		}
	}
}

int func_352()//Position - 0x191C92
{
	if (__LIB_1__::func_515())
	{
		return 1;
	}
	if (__LIB_0__::func_194(12, -1))
	{
		return 1;
	}
	return 0;
}

void func_353(int iParam0, int iParam1)//Position - 0x19A475
{
	Global_4521801 = iParam0;
	Global_4521801.f_1 = iParam1;
}

int func_354()//Position - 0x1A8D55
{
	return Global_1931975.f_1;
}

struct<6> func_355()//Position - 0x1A9EDF
{
	return Global_2714762.f_43.f_18;
}

char* func_356(int iParam0)//Position - 0x1ACAFD
{
	switch (iParam0)
	{
		case 1:
			return "apa_v_mp_h_01";
		case 2:
			return "apa_v_mp_h_02";
		case 3:
			return "apa_v_mp_h_03";
		case 4:
			return "apa_v_mp_h_04";
		case 5:
			return "apa_v_mp_h_05";
		case 6:
			return "apa_v_mp_h_06";
		case 7:
			return "apa_v_mp_h_07";
		case 8:
			return "apa_v_mp_h_08";
		default:
	}
	return "";
}

int func_357()//Position - 0x1ACEF6
{
	return Global_2715699.f_6331;
}

void func_358(char* sParam0)//Position - 0x1B307A
{
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "HeistCelebPass"))
	{
		GRAPHICS::ANIMPOSTFX_STOP("MP_Celeb_Preload_Fade");
	}
	else if (MISC::ARE_STRINGS_EQUAL(sParam0, "HeistCelebPassBW"))
	{
		GRAPHICS::ANIMPOSTFX_STOP("MP_Celeb_Preload_Fade");
		GRAPHICS::ANIMPOSTFX_STOP("HeistCelebPass");
	}
	else if (MISC::ARE_STRINGS_EQUAL(sParam0, "HeistCelebEnd"))
	{
		GRAPHICS::ANIMPOSTFX_STOP("MP_Celeb_Preload_Fade");
		GRAPHICS::ANIMPOSTFX_STOP("HeistCelebPass");
		GRAPHICS::ANIMPOSTFX_STOP("HeistCelebPassBW");
	}
	else if (MISC::ARE_STRINGS_EQUAL(sParam0, "HeistCelebToast"))
	{
		GRAPHICS::ANIMPOSTFX_STOP("MP_Celeb_Preload_Fade");
		GRAPHICS::ANIMPOSTFX_STOP("HeistCelebPass");
		GRAPHICS::ANIMPOSTFX_STOP("HeistCelebPassBW");
		GRAPHICS::ANIMPOSTFX_STOP("HeistCelebEnd");
	}
	GRAPHICS::ANIMPOSTFX_PLAY(sParam0, 0, true);
}

Vector3 func_359()//Position - 0x1DD9F9
{
	struct<3> Var0;
	int iVar1;
	int iVar2;
	bool bVar3;
	iVar2 = 0;
	while (iVar2 < 32)
	{
		bVar3 = iVar2;
		if (__LIB_1__::func_693(bVar3, 1, 1))
		{
			if (!bVar3 == PLAYER::PLAYER_ID())
			{
				if (NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), bVar3))
				{
					if (__LIB_10__::func_813(PLAYER::PLAYER_ID(), bVar3, -2, 0))
					{
						Var0 = { Var0 + __LIB_1__::func_694(bVar3) };
						iVar1++;
					}
				}
			}
		}
		iVar2++;
	}
	if (iVar1 > 0)
	{
		Var0 = { Var0 / FtoV(SYSTEM::TO_FLOAT(iVar1)) };
	}
	else
	{
		Var0 = { __LIB_1__::func_694(PLAYER::PLAYER_ID()) };
	}
	return Var0;
}

bool func_360()//Position - 0x1DFBCA
{
	return BitTest(Global_2714762.f_43.f_4, 1);
}

void func_361(int iParam0)//Position - 0x1DFCDD
{
	Global_2714762.f_43 = iParam0;
}

int func_362()//Position - 0x1E1D1B
{
	return Global_4538824;
}

bool func_363()//Position - 0x1E1DB1
{
	if ((Global_4538805 && !MISC::IS_STRING_NULL_OR_EMPTY(&Global_4538806)) && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(MISC::GET_HASH_KEY(&Global_4538806)) == 0)
	{
		__LIB_1__::func_207(0);
	}
	return Global_4538805;
}

void func_364()//Position - 0x1E48BC
{
	struct<13> Var0;
	int iVar1;
	iVar1 = 0;
	while (iVar1 <= 3)
	{
		Global_2715699.f_6348[iVar1 /*16*/] = { Var0 };
		Global_2715699.f_6348[iVar1 /*16*/].f_13 = -1;
		Global_2715699.f_6348[iVar1 /*16*/].f_14 = -1;
		Global_2715699.f_6348[iVar1 /*16*/].f_15 = -1;
		iVar1++;
	}
}

void func_365(int iParam0)//Position - 0x1E4D72
{
	if (iParam0 == 24)
	{
		Global_1931975.f_2 = Global_1931975;
	}
	__LIB_18__::func_63(1);
	Global_1931975 = iParam0;
}

void func_366(var uParam0)//Position - 0x1E5030
{
	uParam0->f_405 = 0;
	uParam0->f_406 = 0;
	uParam0->f_407 = 0;
	uParam0->f_408 = 0;
	uParam0->f_409 = 0;
	uParam0->f_410 = 0;
	uParam0->f_411 = 0;
	uParam0->f_412 = 0;
	uParam0->f_413 = 0;
	uParam0->f_414 = 0;
	uParam0->f_417 = 0;
	uParam0->f_418 = 0;
	uParam0->f_419 = 0;
	uParam0->f_422 = 0;
	uParam0->f_423 = 0;
}

void func_367(var uParam0, int iParam1)//Position - 0x1E50A0
{
	uParam0->f_410 = iParam1;
}

bool func_368(var uParam0)//Position - 0x1E50AF
{
	return uParam0->f_410;
}

void func_369(var uParam0)//Position - 0x1E50BC
{
	int iVar0;
	char* sVar1;
	struct<16> Var2;
	StringCopy(&Var2, sVar1, 64);
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	uParam0->f_82 = 0;
	uParam0->f_84 = { Var2 };
	uParam0->f_100 = { Var2 };
	uParam0->f_116 = { Var2 };
	uParam0->f_310 = { Var2 };
	uParam0->f_294 = { Var2 };
	uParam0->f_326 = { Var2 };
	uParam0->f_342 = { Var2 };
	iVar0 = 0;
	while (iVar0 < 5)
	{
		MemCopy(&(uParam0->f_10[iVar0 /*13*/]), {Var2}, 8);
		uParam0->f_10[iVar0 /*13*/].f_8 = 0f;
		uParam0->f_10[iVar0 /*13*/].f_9 = { 0f, 0f, 0f };
		uParam0->f_10[iVar0 /*13*/].f_12 = 0;
		uParam0->f_76[iVar0] = 0;
		uParam0->f_132[iVar0 /*16*/] = { Var2 };
		uParam0->f_213[iVar0 /*16*/] = { Var2 };
		uParam0->f_358[iVar0] = 0;
		uParam0->f_371[iVar0 /*3*/] = { 0f, 0f, 0f };
		uParam0->f_387[iVar0 /*3*/] = { 0f, 0f, 0f };
		iVar0++;
	}
	uParam0->f_83 = 0;
	uParam0->f_364 = 0;
	uParam0->f_365 = { 0f, 0f, 0f };
	uParam0->f_368 = { 0f, 0f, 0f };
	uParam0->f_403 = 0;
	uParam0->f_404 = 0;
	uParam0->f_405 = 0;
	uParam0->f_406 = 0;
	uParam0->f_407 = 0;
	uParam0->f_408 = 0;
	uParam0->f_409 = 0;
	uParam0->f_410 = 0;
	uParam0->f_411 = 0;
	uParam0->f_412 = 0;
	uParam0->f_413 = 0;
	uParam0->f_414 = 0;
	uParam0->f_417 = 0;
	uParam0->f_418 = 0;
	uParam0->f_419 = 0;
	uParam0->f_422 = 0;
	uParam0->f_423 = 0;
}

bool func_370()//Position - 0x1E526F
{
	return Global_2815059.f_4598;
}

void func_371(bool bParam0)//Position - 0x1E527E
{
	NETWORK::NETWORK_SET_VOICE_ACTIVE(bParam0);
	Global_2715699.f_6319 = bParam0;
}

bool func_372()//Position - 0x1E5295
{
	return Global_2715699.f_6319;
}

void func_373(int iParam0)//Position - 0x1E5443
{
	Global_1931975.f_1774 = iParam0;
}

bool func_374()//Position - 0x1E5454
{
	return Global_1931975.f_1774;
}

void func_375()//Position - 0x1E6766
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	iVar0 = __LIB_0__::getGlobal_1574918();
	iVar2 = __LIB_1__::func_14(iVar0);
	iVar3 = MISC::GET_PROFILE_SETTING(iVar2);
	if (BitTest(iVar3, 20))
	{
		MISC::CLEAR_BIT(&iVar3, 20);
		bVar1 = true;
	}
	if (BitTest(iVar3, 21))
	{
		MISC::CLEAR_BIT(&iVar3, 21);
		bVar1 = true;
	}
	if (BitTest(iVar3, 22))
	{
		MISC::CLEAR_BIT(&iVar3, 22);
		bVar1 = true;
	}
	if (bVar1)
	{
		STATS::SET_FREEMODE_PROLOGUE_DONE(iVar3, iVar0);
	}
}

void func_376()//Position - 0x1E6D50
{
	Global_1931975.f_1766 = 0;
}

bool func_377()//Position - 0x1E6F07
{
	return BitTest(Global_2815059.f_4660, 4);
}

void func_378(int iParam0)//Position - 0x1E70F0
{
	if (Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_96.f_28 == __LIB_21__::func_804())
	{
		Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_96.f_28 = __LIB_21__::func_803();
		__LIB_2__::func_402();
	}
	else if (iParam0 && !BitTest(Global_1888862[PLAYER::PLAYER_ID() /*120*/].f_29, 16))
	{
		Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_96.f_28 = __LIB_21__::func_804();
		__LIB_23__::func_775();
	}
}

void func_379(var uParam0)//Position - 0x1E7F8A
{
	Global_2714762.f_43.f_40 = uParam0;
}

void func_380(char* sParam0)//Position - 0x1E7F9C
{
	StringCopy(&(Global_2714762.f_43.f_6), sParam0, 24);
}

int func_381()//Position - 0x1E7FB0
{
	return Global_2714762.f_43;
}

bool func_382()//Position - 0x1E9574
{
	return __LIB_0__::func_703(Global_112411, 2);
}

int func_383(int iParam0)//Position - 0x1EC965
{
	switch (iParam0)
	{
		case 421:
		case 424:
		case 423:
		case 426:
		case 427:
		case 533:
		case 534:
		case 558:
		case 562:
		case 460:
		case 572:
		case 573:
		case 575:
		case 577:
		case 578:
		case 579:
		case 580:
		case 581:
		case 582:
		case 583:
		case 584:
		case 585:
		case 598:
		case 600:
		case 601:
		case 633:
		case 634:
		case 640:
		case 667:
		case 646:
		case 613:
		case 742:
		case 760:
		case 404:
		case 758:
		case 747:
		case 748:
			return 1;
			break;
	}
	return 0;
}

void func_384(int* iParam0)//Position - 0x1ED558
{
	*iParam0 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("COUNTDOWN");
}

void func_385(int iParam0)//Position - 0x1ED643
{
	switch (iParam0)
	{
		case 1:
			if (!RECORDING::IS_REPLAY_RECORDING())
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "Nav_Arrow_Ahead", "DLC_HEISTS_GENERAL_FRONTEND_SOUNDS", true);
			}
			break;
		case 4:
			if (!RECORDING::IS_REPLAY_RECORDING())
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "Nav_Arrow_Behind", "DLC_HEISTS_GENERAL_FRONTEND_SOUNDS", true);
			}
			break;
		case 2:
			if (!RECORDING::IS_REPLAY_RECORDING())
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "Nav_Arrow_Left", "DLC_HEISTS_GENERAL_FRONTEND_SOUNDS", true);
			}
			break;
		case 3:
			if (!RECORDING::IS_REPLAY_RECORDING())
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "Nav_Arrow_Right", "DLC_HEISTS_GENERAL_FRONTEND_SOUNDS", true);
			}
			break;
		case 5:
			if (!RECORDING::IS_REPLAY_RECORDING())
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "Nav_Arrow_Ahead", "DLC_HEISTS_GENERAL_FRONTEND_SOUNDS", true);
			}
			break;
		case 6:
			if (!RECORDING::IS_REPLAY_RECORDING())
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "Nav_Arrow_Behind", "DLC_HEISTS_GENERAL_FRONTEND_SOUNDS", true);
			}
			break;
		case 7:
			if (!RECORDING::IS_REPLAY_RECORDING())
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "Nav_Arrow_Behind", "DLC_HEISTS_GENERAL_FRONTEND_SOUNDS", true);
			}
			break;
	}
}

void func_386(int iParam0)//Position - 0x1EE50B
{
	if (iParam0 == 1)
	{
		if (!BitTest(Global_2815059.f_4660, 28))
		{
			MISC::SET_BIT(&(Global_2815059.f_4660), 28);
		}
	}
	else if (BitTest(Global_2815059.f_4660, 28))
	{
		MISC::CLEAR_BIT(&(Global_2815059.f_4660), 28);
	}
}

int func_387(int iParam0)//Position - 0x1F7D22
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2703735.f_2400[iVar0 /*80*/].f_1 == iParam0)
		{
			return 1;
		}
		if (Global_2703735.f_2400[iVar0 /*80*/].f_1 == 0)
		{
			return 0;
		}
		iVar0++;
	}
	return 0;
}

bool func_388(int iParam0)//Position - 0x1F8D5D
{
	return Global_262145.f_5032[7] == iParam0;
}

bool func_389(int iParam0)//Position - 0x203754
{
	return Global_262145.f_5032[5] == iParam0;
}

void func_390(int iParam0)//Position - 0x2065AB
{
	Global_1946250.f_3371 = iParam0;
}

int func_391(int iParam0, struct<3> Param1, struct<3> Param2)//Position - 0x2065DD
{
	if (iParam0 == 114)
	{
		if ((((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -73.06738f, -689.2972f, 31.96555f, -68.41993f, -676.61975f, 36.637207f, 4.25f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 25.07854f, -664.3469f, 30.406733f, 14.144746f, -690.1883f, 38.617584f, 16f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 12.052811f, -689.5426f, 30.588087f, -44.429474f, -693.0777f, 38.33809f, 70f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -43.32302f, -693.9668f, 30.588087f, -72.39151f, -683.4483f, 39.483612f, 20f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -39.637825f, -686.18097f, 30.588087f, -39.304077f, -662.2571f, 39.480827f, 20f, false, true, 0))
		{
			return 1;
		}
	}
	else if (iParam0 == 127)
	{
		if ((((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1397.2491f, 3609.5845f, 33.98091f, 1395.3737f, 3615.067f, 37.54341f, 3.1f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1394.6075f, 3612.337f, 33.98091f, 1392.0453f, 3611.4053f, 37.48091f, 2.9375f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1391.9431f, 3612.024f, 33.98091f, 1385.8204f, 3609.7896f, 40.629475f, 1.5625f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1386.8076f, 3609.3362f, 37.306503f, 1385.4124f, 3613.4968f, 40.72715f, 1.75f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1387.2428f, 3605.9607f, 37.949646f, 1398.6206f, 3610.15f, 40.82697f, 15.6875f, false, true, 0))
		{
			return 1;
		}
	}
	if (ENTITY::IS_ENTITY_IN_AREA(PLAYER::PLAYER_PED_ID(), Param1, Param2, false, true, 0))
	{
		return 1;
	}
	return 0;
}

void func_392(int iParam0)//Position - 0x31CA72
{
	if (*iParam0 != -1)
	{
		GRAPHICS::DESTROY_TRACKED_POINT(*iParam0);
		*iParam0 = -1;
	}
}

struct<4> func_393(int iParam0, int iParam1)//Position - 0x330458
{
	struct<4> Var0;
	StringCopy(&Var0, "COR_ROLE_", 16);
	StringIntConCat(&Var0, Global_4718592.f_92565[iParam1], 16);
	if (iParam0 != -1)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_4718592.f_658[iParam0 /*22957*/].f_12305[iParam1 /*16*/])))
		{
			MemCopy(&Var0, {Global_4718592.f_658[iParam0 /*22957*/].f_12305[iParam1 /*16*/]}, 4);
		}
	}
	return Var0;
}

int func_394(int iParam0)//Position - 0x34F2AC
{
	switch (iParam0)
	{
		case 9:
			return 123;
			break;
	}
	return 1;
}

void func_395()//Position - 0x34F32C
{
	Global_1649593.f_1167 = 1;
}

int func_396(bool bParam0)//Position - 0x351157
{
	int iVar0;
	iVar0 = bParam0;
	if (HUD::DOES_BLIP_EXIST(Global_2678393[iVar0]))
	{
		return BitTest(Global_2678393.f_370, iVar0);
	}
	return 0;
}

bool func_397()//Position - 0x354FFA
{
	return Global_2703735.f_2400[0 /*80*/].f_2 == 3;
}

char* func_398(int iParam0, int iParam1)//Position - 0x35C579
{
	char* sVar0;
	switch (iParam0)
	{
		case 4:
			switch (iParam1)
			{
				case 1:
					sVar0 = "MP_MC_ACTION_2";
					break;
				case 2:
					sVar0 = "MP_MC_AIRBORNE_2";
					break;
				case 3:
					sVar0 = "MP_MC_SILENT";
					break;
				case 4:
					sVar0 = "MP_MC_SUSPENSE_2";
					break;
				case 5:
					sVar0 = "MP_MC_VEHICLE_CHASE_2";
					break;
			}
			break;
		case 5:
		case 6:
			switch (iParam1)
			{
				case 1:
					sVar0 = "MP_MC_ACTION_3";
					break;
				case 2:
					sVar0 = "MP_MC_AIRBORNE_3";
					break;
				case 3:
					sVar0 = "MP_MC_SILENT";
					break;
				case 4:
					sVar0 = "MP_MC_SUSPENSE_3";
					break;
				case 5:
					sVar0 = "MP_MC_VEHICLE_CHASE_3";
					break;
			}
			break;
		case 7:
		case 8:
		case 35:
			switch (iParam1)
			{
				case 1:
					sVar0 = "MP_MC_ACTION_4";
					break;
				case 2:
					sVar0 = "MP_MC_AIRBORNE_4";
					break;
				case 3:
					sVar0 = "MP_MC_SILENT";
					break;
				case 4:
					sVar0 = "MP_MC_SUSPENSE_4";
					break;
				case 5:
					sVar0 = "MP_MC_VEHICLE_CHASE_4";
					break;
			}
			break;
		case 33:
			switch (iParam1)
			{
				case 1:
					sVar0 = "MP_MC_ACTION_4";
					break;
				case 2:
					sVar0 = "MP_MC_AIRBORNE_4";
					break;
				case 3:
					sVar0 = "MP_MC_SILENT";
					break;
				case 4:
					sVar0 = "MP_MC_SUSPENSE_4";
					break;
				case 5:
					sVar0 = "MP_MC_VEHICLE_CHASE_4";
					break;
			}
			break;
		case 36:
			switch (iParam1)
			{
				case 1:
					sVar0 = "MP_MC_ACTION_HFIN";
					break;
				case 2:
					sVar0 = "MP_MC_AIRBORNE_HFIN";
					break;
				case 3:
					sVar0 = "MP_MC_SILENT";
					break;
				case 4:
					sVar0 = "MP_MC_SUSPENSE_HFIN";
					break;
				case 5:
					sVar0 = "MP_MC_VEHICLE_CHASE_HFIN";
					break;
			}
			break;
		case 37:
			switch (iParam1)
			{
				case 1:
					sVar0 = "MP_MC_ACTION_HPREP";
					break;
				case 2:
					sVar0 = "MP_MC_AIRBORNE_HPREP";
					break;
				case 3:
					sVar0 = "MP_MC_SILENT";
					break;
				case 4:
					sVar0 = "MP_MC_SUSPENSE_HPREP";
					break;
				case 5:
					sVar0 = "MP_MC_VEHICLE_CHASE_HPREP";
					break;
			}
			break;
		case 62:
			switch (iParam1)
			{
				case 1:
					sVar0 = "MP_MC_IMP_EXP_ACTION";
					break;
				case 2:
					sVar0 = "MP_MC_IMP_EXP_AIRBORNE";
					break;
				case 3:
					sVar0 = "MP_MC_IMP_EXP_SILENT";
					break;
				case 4:
					sVar0 = "MP_MC_IMP_EXP_SUSPENSE";
					break;
				case 5:
					sVar0 = "MP_MC_IMP_EXP_VEHICLE_CHASE";
					break;
			}
			break;
		case 63:
			switch (iParam1)
			{
				case 1:
					sVar0 = "MP_MC_GR_ACTION";
					break;
				case 2:
					sVar0 = "MP_MC_GR_AIRBORNE";
					break;
				case 3:
					sVar0 = "MP_MC_GR_SILENT";
					break;
				case 4:
					sVar0 = "MP_MC_GR_SUSPENSE";
					break;
				case 5:
					sVar0 = "MP_MC_GR_VEHICLE_CHASE";
					break;
			}
			break;
		case 66:
		case 67:
		case 68:
		case 69:
		case 70:
		case 71:
		case 72:
			switch (iParam1)
			{
				case 1:
					sVar0 = "MP_MC_CMH_ACTION";
					break;
				case 2:
					sVar0 = "MP_MC_CMH_AIRBORNE";
					break;
				case 3:
					sVar0 = "MP_MC_CMH_SILENT";
					break;
				case 4:
					sVar0 = "MP_MC_CMH_SUSPENSE";
					break;
				case 5:
					sVar0 = "MP_MC_CMH_VEHICLE_CHASE";
					break;
			}
			break;
		case 73:
			switch (iParam1)
			{
				case 1:
					sVar0 = "MP_MC_CMH_ADV_ACTION";
					break;
				case 2:
					sVar0 = "MP_MC_CMH_ADV_AIRBORNE";
					break;
				case 3:
					sVar0 = "MP_MC_CMH_ADV_SILENT";
					break;
				case 4:
					sVar0 = "MP_MC_CMH_ADV_SUSPENSE";
					break;
				case 5:
					sVar0 = "MP_MC_CMH_ADV_VEHICLE_CHASE";
					break;
			}
			break;
		case 74:
			switch (iParam1)
			{
				case 1:
					sVar0 = "MP_MC_ASSAULT_ADV_ACTION";
					break;
				case 2:
					sVar0 = "MP_MC_ASSAULT_ADV_AIRBORNE";
					break;
				case 3:
					sVar0 = "MP_MC_ASSAULT_ADV_SILENT";
					break;
				case 4:
					sVar0 = "MP_MC_ASSAULT_ADV_SUSPENSE";
					break;
				case 5:
					sVar0 = "MP_MC_ASSAULT_ADV_VEHICLE_CHASE";
					break;
			}
			break;
		case 75:
			switch (iParam1)
			{
				case 1:
					sVar0 = "MP_MC_CASINO_BRAWL_ACTION";
					break;
				case 2:
					sVar0 = "MP_MC_CASINO_BRAWL_AIRBORNE";
					break;
				case 3:
					sVar0 = "MP_MC_CASINO_BRAWL_SILENT";
					break;
				case 4:
					sVar0 = "MP_MC_CASINO_BRAWL_SUSPENSE";
					break;
				case 5:
					sVar0 = "MP_MC_CASINO_BRAWL_VEHICLE_CHASE";
					break;
			}
			break;
		case 64:
		case 65:
			switch (iParam1)
			{
				case 1:
					sVar0 = "MP_MC_SMG_ACTION";
					break;
				case 2:
					sVar0 = "MP_MC_SMG_AIRBORNE";
					break;
				case 3:
					sVar0 = "MP_MC_SMG_SILENT";
					break;
				case 4:
					sVar0 = "MP_MC_SMG_SUSPENSE";
					break;
				case 5:
					sVar0 = "MP_MC_SMG_VEHICLE_CHASE";
					break;
			}
			break;
		case 76:
			switch (iParam1)
			{
				case 1:
					sVar0 = "MP_CHF_ACTION";
					break;
				case 2:
					sVar0 = "MP_CHF_AIRBORNE";
					break;
				case 15:
					sVar0 = "MP_CHF_DRIVING";
					break;
				case 16:
					sVar0 = "MP_CHF_MED_INTENSITY";
					break;
				case 4:
				case 17:
					sVar0 = "MP_CHF_SUSPENSE_LOW";
					break;
				case 18:
					sVar0 = "MP_CHF_SUSPENSE_HIGH";
					break;
				case 5:
					sVar0 = "MP_CHF_VEHICLE_CHASE";
					break;
				case 3:
					sVar0 = "MP_CHF_SILENT";
					break;
			}
			break;
		case 77:
			switch (iParam1)
			{
				case 1:
					sVar0 = "MP_MC_SUM20_ACTION";
					break;
				case 2:
					sVar0 = "MP_MC_SUM20_AIRBORNE";
					break;
				case 3:
					sVar0 = "MP_MC_SUM20_SILENT";
					break;
				case 4:
					sVar0 = "MP_MC_SUM20_SUSPENSE";
					break;
				case 5:
					sVar0 = "MP_MC_SUM20_VEHICLE_CHASE";
					break;
			}
			break;
		case 78:
			switch (iParam1)
			{
				case 1:
					sVar0 = "HEI4_FIN_ACTION";
					break;
				case 2:
					sVar0 = "HEI4_FIN_AIRBORNE";
					break;
				case 15:
					sVar0 = "HEI4_FIN_DRIVING";
					break;
				case 16:
					sVar0 = "HEI4_FIN_MED_INTENSITY";
					break;
				case 4:
				case 17:
					sVar0 = "HEI4_FIN_SUSPENSE_LOW";
					break;
				case 18:
					sVar0 = "HEI4_FIN_SUSPENSE_HIGH";
					break;
				case 5:
					sVar0 = "HEI4_FIN_VEHICLE_CHASE";
					break;
				case 3:
					sVar0 = "HEI4_FIN_SILENT";
					break;
				case 19:
					sVar0 = "HEI4_FIN_SAFE_ROOM";
					break;
				case 20:
					sVar0 = "HEI4_FIN_SAFE_ROOM_AGRRO";
					break;
			}
			break;
		case 79:
			switch (iParam1)
			{
				case 1:
					sVar0 = "MP_MC_TUNER_ACTION";
					break;
				case 2:
					sVar0 = "MP_MC_TUNER_AIRBORNE";
					break;
				case 15:
					sVar0 = "MP_MC_TUNER_DRIVING";
					break;
				case 16:
					sVar0 = "MP_MC_TUNER_MED_INTENSITY";
					break;
				case 4:
				case 17:
					sVar0 = "MP_MC_TUNER_SUSPENSE";
					break;
				case 18:
					sVar0 = "HEI4_FIN_SUSPENSE_HIGH";
					break;
				case 5:
					sVar0 = "MP_MC_TUNER_VEHICLE_CHASE_A";
					break;
				case 3:
					sVar0 = "MP_MC_TUNER_SILENT";
					break;
				case 21:
					sVar0 = "MP_MC_TUNER_VEHICLE_CHASE_B";
					break;
			}
			break;
		case 80:
			switch (iParam1)
			{
				case 1:
					sVar0 = "MP_MC_FIXER_HOLDOUT_ACTION";
					break;
				case 2:
					sVar0 = "MP_MC_FIXER_HOLDOUT_AIRBORNE";
					break;
				case 4:
					sVar0 = "MP_MC_FIXER_HOLDOUT_SUSPENSE";
					break;
				case 5:
					sVar0 = "MP_MC_FIXER_HOLDOUT_VEHICLE_CHASE";
					break;
				case 3:
					sVar0 = "MP_MC_FIXER_HOLDOUT_SILENT";
					break;
			}
			break;
		case 81:
			switch (iParam1)
			{
				case 1:
					sVar0 = "MP_MC_FIXER_ACTION";
					break;
				case 2:
					sVar0 = "MP_MC_FIXER_AIRBORNE";
					break;
				case 15:
					sVar0 = "MP_MC_FIXER_DRIVING";
					break;
				case 16:
					sVar0 = "MP_MC_FIXER_MED_INTENSITY";
					break;
				case 4:
				case 17:
					sVar0 = "MP_MC_FIXER_SUSPENSE";
					break;
				case 5:
					sVar0 = "MP_MC_FIXER_VEHICLE_CHASE_A";
					break;
				case 3:
					sVar0 = "MP_MC_FIXER_SILENT";
					break;
				case 21:
					sVar0 = "MP_MC_FIXER_VEHICLE_CHASE_B";
					break;
			}
			break;
		case 82:
			switch (iParam1)
			{
				case 1:
					sVar0 = "DATA_LEAK_GOLF_ACTION";
					break;
				case 2:
					sVar0 = "DATA_LEAK_GOLF_AIRBORNE";
					break;
				case 15:
					sVar0 = "DATA_LEAK_GOLF_DRIVING";
					break;
				case 3:
					sVar0 = "DATA_LEAK_GOLF_SILENT";
					break;
				case 16:
					sVar0 = "DATA_LEAK_GOLF_MED_INTENSITY";
					break;
				case 4:
				case 17:
					sVar0 = "DATA_LEAK_GOLF_SUSPENSE";
					break;
				case 5:
					sVar0 = "DATA_LEAK_GOLF_VEHICLE_CHASE_A";
					break;
				case 21:
					sVar0 = "DATA_LEAK_GOLF_VEHICLE_CHASE_B";
					break;
			}
			break;
		case 83:
			switch (iParam1)
			{
				case 1:
					sVar0 = "DATA_LEAK_PARTY_PROMO_ACTION";
					break;
				case 2:
					sVar0 = "DATA_LEAK_PARTY_PROMO_AIRBORNE";
					break;
				case 15:
					sVar0 = "DATA_LEAK_PARTY_PROMO_DRIVING";
					break;
				case 16:
					sVar0 = "DATA_LEAK_PARTY_PROMO_MED_INTENSITY";
					break;
				case 4:
				case 17:
					sVar0 = "DATA_LEAK_PARTY_PROMO_SUSPENSE";
					break;
				case 5:
					sVar0 = "DATA_LEAK_PARTY_PROMO_VEHICLE_CHASE_A";
					break;
				case 21:
					sVar0 = "DATA_LEAK_PARTY_PROMO_VEHICLE_CHASE_B";
					break;
				case 3:
					sVar0 = "DATA_LEAK_PARTY_PROMO_SILENT";
					break;
			}
			break;
		case 84:
			switch (iParam1)
			{
				case 1:
					sVar0 = "DATA_LEAK_BILLIONAIRE_ACTION";
					break;
				case 2:
					sVar0 = "DATA_LEAK_BILLIONAIRE_AIRBORNE";
					break;
				case 15:
					sVar0 = "DATA_LEAK_BILLIONAIRE_DRIVING";
					break;
				case 16:
					sVar0 = "DATA_LEAK_BILLIONAIRE_MED_INTENSITY";
					break;
				case 4:
				case 17:
					sVar0 = "DATA_LEAK_BILLIONAIRE_SUSPENSE";
					break;
				case 5:
					sVar0 = "DATA_LEAK_BILLIONAIRE_VEHICLE_CHASE_A";
					break;
				case 21:
					sVar0 = "DATA_LEAK_BILLIONAIRE_VEHICLE_CHASE_B";
					break;
				case 3:
					sVar0 = "DATA_LEAK_BILLIONAIRE_SILENT";
					break;
			}
			break;
		case 85:
			switch (iParam1)
			{
				case 1:
					sVar0 = "DATA_LEAK_HOOD_PASS_ACTION";
					break;
				case 2:
					sVar0 = "DATA_LEAK_HOOD_PASS_AIRBORNE";
					break;
				case 15:
					sVar0 = "DATA_LEAK_HOOD_PASS_DRIVING";
					break;
				case 16:
					sVar0 = "DATA_LEAK_HOOD_PASS_MED_INTENSITY";
					break;
				case 4:
				case 17:
					sVar0 = "DATA_LEAK_HOOD_PASS_SUSPENSE";
					break;
				case 5:
					sVar0 = "DATA_LEAK_HOOD_PASS_VEHICLE_CHASE_A";
					break;
				case 21:
					sVar0 = "DATA_LEAK_HOOD_PASS_VEHICLE_CHASE_B";
					break;
				case 3:
					sVar0 = "DATA_LEAK_HOOD_PASS_SILENT";
					break;
			}
			break;
		case 86:
			switch (iParam1)
			{
				case 1:
					sVar0 = "DATA_LEAK_FIRE_ACTION";
					break;
				case 2:
					sVar0 = "DATA_LEAK_FIRE_AIRBORNE";
					break;
				case 15:
					sVar0 = "DATA_LEAK_FIRE_DRIVING";
					break;
				case 16:
					sVar0 = "DATA_LEAK_FIRE_MED_INTENSITY";
					break;
				case 4:
				case 17:
					sVar0 = "DATA_LEAK_FIRE_SUSPENSE";
					break;
				case 5:
					sVar0 = "DATA_LEAK_FIRE_VEHICLE_CHASE_A";
					break;
				case 21:
					sVar0 = "DATA_LEAK_FIRE_VEHICLE_CHASE_B";
					break;
				case 3:
					sVar0 = "DATA_LEAK_FIRE_SILENT";
					break;
			}
			break;
		case 87:
			switch (iParam1)
			{
				case 1:
					sVar0 = "DATA_LEAK_DFWD_ACTION";
					break;
				case 2:
					sVar0 = "DATA_LEAK_DFWD_AIRBORNE";
					break;
				case 15:
					sVar0 = "DATA_LEAK_DFWD_DRIVING";
					break;
				case 16:
					sVar0 = "DATA_LEAK_DFWD_MED_INTENSITY";
					break;
				case 4:
				case 17:
					sVar0 = "DATA_LEAK_DFWD_SUSPENSE";
					break;
				case 5:
					sVar0 = "DATA_LEAK_DFWD_VEHICLE_CHASE_A";
					break;
				case 21:
					sVar0 = "DATA_LEAK_DFWD_VEHICLE_CHASE_B";
					break;
				case 3:
					sVar0 = "DATA_LEAK_DFWD_SILENT";
					break;
			}
			break;
		case 88:
			switch (iParam1)
			{
				case 1:
					sVar0 = "MP_MC_MPSUM2_ACTION";
					break;
				case 2:
					sVar0 = "MP_MC_MPSUM2_AIRBORNE";
					break;
				case 15:
					sVar0 = "MP_MC_MPSUM2_DRIVING";
					break;
				case 16:
					sVar0 = "MP_MC_MPSUM2_MED_INTENSITY";
					break;
				case 4:
				case 17:
					sVar0 = "MP_MC_MPSUM2_SUSPENSE";
					break;
				case 5:
					sVar0 = "MP_MC_MPSUM2_VEHICLE_CHASE_A";
					break;
				case 21:
					sVar0 = "MP_MC_MPSUM2_VEHICLE_CHASE_B";
					break;
				case 3:
					sVar0 = "MP_MC_MPSUM2_SILENT";
					break;
			}
			break;
		case 89:
			switch (iParam1)
			{
				case 1:
					sVar0 = "MP_MC_H22_ADV_ACTION";
					break;
				case 2:
					sVar0 = "MP_MC_H22_ADV_AIRBORNE";
					break;
				case 4:
				case 17:
					sVar0 = "MP_MC_H22_ADV_SUSPENSE";
					break;
				case 5:
					sVar0 = "MP_MC_H22_ADV_VEHICLE_CHASE";
					break;
				case 3:
					sVar0 = "MP_MC_H22_ADV_SILENT";
					break;
			}
			break;
		default:
			switch (iParam1)
			{
				case 1:
					sVar0 = "MP_MC_ACTION";
					break;
				case 2:
					sVar0 = "MP_MC_AIRBORNE";
					break;
				case 3:
					sVar0 = "MP_MC_SILENT";
					break;
				case 4:
					sVar0 = "MP_MC_SUSPENSE";
					break;
				case 5:
					sVar0 = "MP_MC_VEHICLE_CHASE";
					break;
			}
			break;
	}
	return sVar0;
}

void func_399(int iParam0)//Position - 0x36DAEE
{
	if (iParam0 != Global_1951104)
	{
		Global_1951104 = iParam0;
	}
}

void func_400(var uParam0)//Position - 0x36DDFB
{
	struct<97> Var0;
	Var0 = 32;
	*uParam0 = { Var0 };
}

void func_401()//Position - 0x36DE15
{
	struct<3> Var0;
	Global_1941652.f_47.f_1009 = { Var0 };
}

void func_402()//Position - 0x36DE2C
{
	struct<9> Var0;
	Global_1941652.f_47.f_2188 = { Var0 };
}

void func_403()//Position - 0x36DE45
{
	int iVar0;
	struct<16> Var1;
	struct<4> Var2;
	Global_1941652.f_47.f_1474 = 0;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		Global_1941652.f_47.f_1474.f_1[iVar0 /*57*/] = { Var1 };
		Global_1941652.f_47.f_1474.f_1[iVar0 /*57*/].f_16 = { Var1 };
		Global_1941652.f_47.f_1474.f_1[iVar0 /*57*/].f_32 = { Var2 };
		Global_1941652.f_47.f_1474.f_1[iVar0 /*57*/].f_38 = { Var1 };
		Global_1941652.f_47.f_1474.f_1[iVar0 /*57*/].f_54 = 0;
		Global_1941652.f_47.f_1474.f_1[iVar0 /*57*/].f_36 = 0;
		Global_1941652.f_47.f_1474.f_1[iVar0 /*57*/].f_55 = 0;
		Global_1941652.f_47.f_1474.f_1[iVar0 /*57*/].f_56 = 0;
		iVar0++;
	}
	Global_1941652.f_47.f_1474.f_686 = 0;
	Global_1941652.f_47.f_1474.f_688 = 0;
	Global_1941652.f_47.f_1474.f_689 = 0;
	Global_1941652.f_47.f_1474.f_690 = 0;
	Global_1941652.f_47.f_1474.f_691 = 0;
	Global_1941652.f_47.f_1474.f_692 = 0;
	Global_1941652.f_47.f_1474.f_693 = 0;
	Global_1941652.f_47.f_1474.f_694 = 0;
	Global_1941652.f_47.f_1474.f_695 = 0f;
	Global_1941652.f_47.f_1474.f_696 = 0f;
	Global_1941652.f_47.f_1474.f_697 = 0f;
	Global_1941652.f_47.f_1474.f_698 = 0f;
	Global_1941652.f_47.f_1474.f_699 = 1f;
}

void func_404()//Position - 0x36DFBB
{
	struct<22> Var0;
	Var0.f_5 = 2;
	Global_1941652.f_47.f_1 = { Var0 };
}

void func_405(int* iParam0, bool bParam1)//Position - 0x36F6DD
{
	if (bParam1)
	{
		if (!BitTest(*iParam0, 8))
		{
			MISC::SET_BIT(iParam0, 8);
		}
	}
	else if (BitTest(*iParam0, 8))
	{
		MISC::CLEAR_BIT(iParam0, 8);
	}
}

void func_406()//Position - 0x37497C
{
	int iVar0;
	bool bVar1;
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (__LIB_2__::func_613(iVar0, &bVar1))
		{
			VEHICLE::SET_VEHICLE_FIXED(iVar0);
		}
		if (bVar1)
		{
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iVar0);
		}
	}
}

int func_407(int iParam0, int iParam1)//Position - 0x375681
{
	if (iParam0 > iParam1)
	{
		return iParam0;
	}
	else if (iParam1 > iParam0)
	{
		return iParam1;
	}
	return iParam0;
}

bool func_408()//Position - 0x37D7B7
{
	return Global_32184;
}

int func_409(bool bParam0)//Position - 0x387DF0
{
	if (bParam0)
	{
		return 25 + 1;
	}
	return 25 + 1;
}

int func_410()//Position - 0x3936C6
{
	return joaat("G_M_M_ChiGoon_02");
}

void func_411(bool bParam0)//Position - 0x398355
{
	if (bParam0)
	{
		if (!BitTest(Global_1946250.f_2, 14))
		{
			MISC::SET_BIT(&(Global_1946250.f_2), 14);
		}
	}
	else if (BitTest(Global_1946250.f_2, 14))
	{
		MISC::CLEAR_BIT(&(Global_1946250.f_2), 14);
	}
}

bool func_412()//Position - 0x398396
{
	return BitTest(Global_1946250.f_2, 14);
}

bool func_413(struct<3> Param0, struct<3> Param1, float fParam2, float fParam3, bool bParam4)//Position - 0x3A59C3
{
	struct<3> Var0;
	if (!bParam4)
	{
		Param1.f_2 = (Param1.f_2 - (0.5f * fParam3));
	}
	Var0 = { Param0 - Param1 };
	if (Var0.f_2 < 0f || Var0.f_2 > fParam3)
	{
		return 0;
	}
	return ((Var0.f_0 * Var0.f_0) + (Var0.f_1 * Var0.f_1)) <= (fParam2 * fParam2);
}

int func_414(int iParam0, int iParam1, int iParam2)//Position - 0x3A7037
{
	char* sVar0;
	char* sVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	sVar0 = "scr_indep_fireworks";
	sVar1 = "scr_indep_firework_starburst";
	STREAMING::REQUEST_NAMED_PTFX_ASSET(sVar0);
	if (STREAMING::HAS_NAMED_PTFX_ASSET_LOADED(sVar0))
	{
		switch (iParam0)
		{
			case 0:
				sVar1 = "scr_indep_firework_starburst";
				break;
			case 1:
				sVar1 = "scr_indep_firework_fountain";
				break;
			case 2:
				sVar1 = "scr_indep_firework_shotburst";
				break;
		}
		GRAPHICS::USE_PARTICLE_FX_ASSET(sVar0);
		if (iParam2 > 0)
		{
			HUD::GET_HUD_COLOUR(iParam2, &iVar2, &iVar3, &iVar4, &uVar5);
		}
		else
		{
			iParam2 = MISC::GET_RANDOM_INT_IN_RANGE(1, 8);
			switch (iParam2)
			{
				case 1:
					iVar2 = 255;
					iVar3 = 0;
					iVar4 = 0;
					break;
				case 2:
					iVar2 = 0;
					iVar3 = 255;
					iVar4 = 0;
					break;
				case 3:
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 255;
					break;
				case 4:
					iVar2 = 255;
					iVar3 = 255;
					iVar4 = 0;
					break;
				case 5:
					iVar2 = 0;
					iVar3 = 255;
					iVar4 = 255;
					break;
				case 6:
					iVar2 = 255;
					iVar3 = 0;
					iVar4 = 255;
					break;
				case 7:
					iVar2 = 255;
					iVar3 = 255;
					iVar4 = 255;
					break;
				}
		}
		GRAPHICS::SET_PARTICLE_FX_NON_LOOPED_COLOUR(SYSTEM::TO_FLOAT(iVar2), SYSTEM::TO_FLOAT(iVar3), SYSTEM::TO_FLOAT(iVar4));
		GRAPHICS::START_NETWORKED_PARTICLE_FX_NON_LOOPED_AT_COORD(sVar1, ENTITY::GET_ENTITY_COORDS(iParam1, true), 0f, 0f, 0.12f, 1f, false, false, false, false);
		return 1;
	}
	return 0;
}

void func_415(var uParam0, struct<3> Param1, int iParam2)//Position - 0x3ABBB1
{
	struct<7> Var0;
	int iVar1;
	Var0.f_0 = 362970257;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = uParam0;
	Var0.f_3 = { Param1 };
	Var0.f_6 = iParam2;
	iVar1 = __LIB_4__::func_970(1);
	if (!iVar1 == 0)
	{
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 7, iVar1);
	}
}

bool func_416(int iParam0, struct<3> Param1)//Position - 0x3ABBFA
{
	int iVar0;
	if (BitTest(Global_4980736.f_36356[iParam0 /*134*/].f_22, 3))
	{
		iVar0 = SYSTEM::FLOOR(MISC::ABSF((Param1.f_2 - Global_4980736.f_36356[iParam0 /*134*/].f_2)));
		if (iVar0 <= Global_4980736.f_36356[iParam0 /*134*/].f_66)
		{
			Param1.f_2 = Global_4980736.f_36356[iParam0 /*134*/].f_2;
		}
		else
		{
			return 0;
		}
	}
	return SYSTEM::VDIST2(Param1, Global_4980736.f_36356[iParam0 /*134*/]) < SYSTEM::POW(SYSTEM::TO_FLOAT(Global_4980736.f_36356[iParam0 /*134*/].f_65), 2f);
}

int func_417(int iParam0, char* sParam1)//Position - 0x3ABC92
{
	switch (iParam0)
	{
		case 0:
			StringCopy(sParam1, "Airhorn", 16);
			return 1;
		case 1:
			StringCopy(sParam1, "Roar", 16);
			return 1;
		case 2:
			StringCopy(sParam1, "Guitar", 16);
			return 1;
		case 3:
			StringCopy(sParam1, "Guitar_2", 16);
			return 1;
		case 4:
			StringCopy(sParam1, "Horn", 16);
			return 1;
		case 5:
			StringCopy(sParam1, "Thunder", 16);
			return 1;
		case 6:
			StringCopy(sParam1, "Klaxon", 16);
			return 1;
		default:
	}
	return 0;
}

char* func_418(int iParam0)//Position - 0x3ACF97
{
	switch (iParam0)
	{
		case 15:
			return "DLC_HEISTS_GENERIC_SOUNDS";
		case 16:
			return "DLC_PRISON_BREAK_HEIST_SOUNDS";
		case 17:
			return "DLC_PRISON_BREAK_HEIST_SOUNDS";
		case 19:
			return "dlc_xm_silo_finale_sounds";
		case 20:
			return "DLC_XM_Silo_Secret_Door_Sounds";
		case 21:
			return "dlc_xm_silo_finale_sounds";
		case 22:
			return "dlc_ch_heist_finale_security_alarms_sounds";
		case 23:
			return "dlc_xm_silo_finale_sounds";
		case 24:
			return "dlc_xm_silo_finale_sounds";
		default:
	}
	return "ALARMS_SOUNDSET";
}

char* func_419(int iParam0)//Position - 0x3AD029
{
	switch (iParam0)
	{
		case 0:
			return "Bell_01";
		case 1:
			return "Bell_02";
		case 2:
			return "Bell_03";
		case 3:
			return "Klaxon_01";
		case 4:
			return "Klaxon_02";
		case 5:
			return "Klaxon_03";
		case 6:
			return "Klaxon_04";
		case 7:
			return "Klaxon_05";
		case 8:
			return "Klaxon_06";
		case 9:
			return "Klaxon_07";
		case 10:
			return "Small_01";
		case 11:
			return "Small_02";
		case 12:
			return "Small_03";
		case 13:
			return "Small_04";
		case 14:
			return "Small_05";
		case 15:
			return "Sirens_Approach";
		case 16:
			return "Gate_Alarm_Open";
		case 17:
			return "Gate_Alarm_Close";
		case 18:
			return "Klaxon_07_Louder";
		case 19:
			return "launch_alarm_loop";
		case 20:
			return "Exit_Silo";
		case 21:
			return "missile_system_armed";
		case 22:
			return "Camera_Alarm";
		case 23:
			return "silo_alarm_loop";
		case 24:
			return "launch_alarm_loop";
		default:
	}
	return "";
}

int func_420(float fParam0)//Position - 0x3B2997
{
	int iVar0;
	float fVar1;
	float fVar2;
	iVar0 = 255;
	fVar1 = 3500f;
	if (Global_2787859)
	{
		fVar1 = 10000f;
	}
	if (fParam0 >= fVar1)
	{
		iVar0 = 0;
	}
	else if (fParam0 <= 1000f)
	{
		iVar0 = 255;
	}
	else
	{
		fVar2 = (1f - ((fParam0 - 1000f) / fVar1));
		iVar0 = SYSTEM::ROUND((IntToFloat(iVar0) * fVar2));
	}
	return iVar0;
}

float func_421(struct<2> Param0, var uParam1, struct<2> Param2, var uParam3)//Position - 0x3B29F5
{
	float fVar0;
	float fVar1;
	float fVar2;
	fVar1 = (Param2.f_0 - Param0.f_0);
	fVar2 = (Param2.f_1 - Param0.f_1);
	if (fVar2 != 0f)
	{
		fVar0 = MISC::ATAN2(fVar1, fVar2);
	}
	else if (fVar1 < 0f)
	{
		fVar0 = -90f;
	}
	else
	{
		fVar0 = 90f;
	}
	return fVar0;
}

void func_422(int iParam0, bool bParam1, int iParam2)//Position - 0x3B30EF
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(1);
	GRAPHICS::SET_DRAW_ORIGIN(ENTITY::GET_ENTITY_COORDS(iParam0, true), false);
	fVar0 = 0.015f;
	HUD::GET_HUD_COLOUR(iParam2, &iVar1, &iVar2, &iVar3, &iVar4);
	if (!bParam1)
	{
		GRAPHICS::DRAW_SPRITE("helicopterhud", "hud_corner", (-fVar0 * 0.6f), -fVar0, (fVar0 * 1.5f), (fVar0 * 1.5f), 0f, iVar1, iVar2, iVar3, iVar4, true, 0);
	}
	GRAPHICS::DRAW_SPRITE("helicopterhud", "hud_corner", (fVar0 * 0.6f), -fVar0, (fVar0 * 1.5f), (fVar0 * 1.5f), 90f, iVar1, iVar2, iVar3, iVar4, true, 0);
	GRAPHICS::DRAW_SPRITE("helicopterhud", "hud_corner", (-fVar0 * 0.6f), fVar0, (fVar0 * 1.5f), (fVar0 * 1.5f), 270f, iVar1, iVar2, iVar3, iVar4, true, 0);
	GRAPHICS::DRAW_SPRITE("helicopterhud", "hud_corner", (fVar0 * 0.6f), fVar0, (fVar0 * 1.5f), (fVar0 * 1.5f), 180f, iVar1, iVar2, iVar3, iVar4, true, 0);
	GRAPHICS::CLEAR_DRAW_ORIGIN();
}

bool func_423(bool bParam0)//Position - 0x3D91B0
{
	return __LIB_1__::func_906(bParam0, 24);
}

bool func_424(bool bParam0)//Position - 0x3D91C0
{
	return BitTest(Global_1888862[bParam0 /*120*/].f_29, 0);
}

void func_425(int iParam0)//Position - 0x3DA04D
{
	if (iParam0 > 21)
	{
	}
	else
	{
		Global_4541504 = iParam0;
	}
}

void func_426(bool bParam0)//Position - 0x3DA065
{
	if (bParam0)
	{
		MISC::SET_BIT(&Global_4541229, 4);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_4541229, 4);
	}
}

void func_427(int iParam0)//Position - 0x3DE96A
{
	if (iParam0 == 1)
	{
		Global_1836591 = 1;
	}
	else
	{
		Global_1836591 = 0;
	}
}

void func_428(int iParam0)//Position - 0x3EFBD2
{
	if (iParam0 == 1)
	{
		Global_1836606 = 1;
	}
	else
	{
		Global_1836606 = 0;
	}
}

void func_429(int iParam0)//Position - 0x3F0B07
{
	if (Global_1958711.f_6 != iParam0)
	{
		Global_1958711.f_6 = iParam0;
	}
}

void func_430(int iParam0)//Position - 0x3F28D9
{
	Global_1661003 = (MISC::GET_GAME_TIMER() + iParam0);
}

void func_431(var uParam0, char* sParam1)//Position - 0x3FB5AE
{
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE(sParam1))
	{
		AUDIO::STOP_AUDIO_SCENE(sParam1);
	}
	if (!AUDIO::HAS_SOUND_FINISHED(uParam0->f_739))
	{
		AUDIO::STOP_SOUND(uParam0->f_739);
	}
}

void func_432()//Position - 0x3FBBF2
{
	struct<4> Var0;
	Var0.f_3 = 255;
	Var0.f_0 = 0;
	Var0.f_1 = 0;
	Var0.f_2 = 0;
	Var0.f_3 = 215;
	GRAPHICS::DRAW_RECT(0.5f, 0.5f, 1f, 1f, Var0.f_0, Var0.f_1, Var0.f_2, Var0.f_3, false);
}

float func_433(int iParam0)//Position - 0x3FBD75
{
	float fVar0;
	switch (iParam0)
	{
		case 1:
			fVar0 = 0.581f;
			break;
		case 2:
			fVar0 = 0.707f;
			break;
		case 3:
			fVar0 = 0.833f;
			break;
		case 4:
			fVar0 = 0.959f;
			break;
	}
	return fVar0;
}

void func_434(int iParam0, var uParam1, var uParam2)//Position - 0x3FBFA8
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	*uParam1 = 0.182f;
	fVar0 = (0.358f + 0.07037f);
	fVar1 = (fVar0 + 0.07037f);
	fVar2 = (fVar1 + 0.07037f);
	fVar3 = (fVar2 + 0.07037f);
	fVar4 = (fVar3 + 0.07037f);
	fVar5 = (fVar4 + 0.07037f);
	fVar6 = (fVar5 + 0.07037f);
	switch (iParam0)
	{
		case 0:
			*uParam2 = 0.358f;
			break;
		case 1:
			*uParam2 = fVar0;
			break;
		case 2:
			*uParam2 = fVar1;
			break;
		case 3:
			*uParam2 = fVar2;
			break;
		case 4:
			*uParam2 = fVar3;
			break;
		case 5:
			*uParam2 = fVar4;
			break;
		case 6:
			*uParam2 = fVar5;
			break;
		case 7:
			*uParam2 = fVar6;
			break;
	}
}

int func_435(int iParam0, int iParam1, int iParam2)//Position - 0x3FC65D
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= (iParam2 - 1))
	{
		if ((*iParam0)[iVar0] == iParam1)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

var func_436(var uParam0, int iParam1)//Position - 0x3FC83E
{
	return BitTest(uParam0->f_766[uParam0->f_755 /*25*/][iParam1 /*3*/].f_1, 1);
}

bool func_437(var uParam0, int iParam1)//Position - 0x3FC85A
{
	return BitTest(uParam0->f_766[uParam0->f_755 /*25*/][iParam1 /*3*/].f_1, 0);
}

void func_438(var uParam0)//Position - 0x3FCBA4
{
	if (!BitTest(uParam0->f_752, 1) && uParam0->f_756 >= 4)
	{
		MISC::SET_BIT(&(uParam0->f_752), 1);
		MISC::SET_BIT(&(uParam0->f_752), 2);
	}
}

void func_439(var uParam0, int iParam1)//Position - 0x3FCBD7
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 7)
	{
		if (uParam0->f_766[uParam0->f_755 /*25*/][iVar0 /*3*/].f_2 == iParam1)
		{
			if (!BitTest(uParam0->f_766[uParam0->f_755 /*25*/][iVar0 /*3*/].f_1, 0))
			{
				if (uParam0->f_756 >= 4)
				{
					return;
				}
				uParam0->f_756++;
				MISC::SET_BIT(&(uParam0->f_766[uParam0->f_755 /*25*/][iVar0 /*3*/].f_1), 0);
				if (!BitTest(uParam0->f_752, 7))
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "Tile_select", uParam0->f_741, true);
				}
			}
			else
			{
				uParam0->f_756 = (uParam0->f_756 - 1);
				MISC::CLEAR_BIT(&(uParam0->f_766[uParam0->f_755 /*25*/][iVar0 /*3*/].f_1), 0);
				if (!BitTest(uParam0->f_752, 7))
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "Tile_select", uParam0->f_741, true);
				}
			}
		}
		iVar0++;
	}
}

int func_440(var uParam0)//Position - 0x3FCCAB
{
	if (*uParam0 != 4 && *uParam0 != 8)
	{
		return 0;
	}
	if (BitTest(uParam0->f_752, 1))
	{
		return 0;
	}
	if (BitTest(uParam0->f_752, 3))
	{
		return 0;
	}
	if (BitTest(uParam0->f_752, 4))
	{
		return 0;
	}
	if (BitTest(uParam0->f_752, 5))
	{
		return 0;
	}
	return 1;
}

void func_441(var uParam0)//Position - 0x3FCF3D
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 7)
	{
		if (BitTest(uParam0->f_766[uParam0->f_755 /*25*/][iVar0 /*3*/].f_1, 0))
		{
		}
		iVar0++;
	}
}

int func_442(var uParam0)//Position - 0x3FCF6E
{
	int iVar0;
	int iVar1;
	iVar0 = PAD::GET_CONTROL_VALUE(2 /*FRONTEND_CONTROL*/, 195 /*INPUT_FRONTEND_AXIS_X*/);
	iVar1 = PAD::GET_CONTROL_VALUE(2 /*FRONTEND_CONTROL*/, 196 /*INPUT_FRONTEND_AXIS_Y*/);
	if (iVar1 < 100 && !BitTest(uParam0->f_736, 0))
	{
		MISC::SET_BIT(&(uParam0->f_736), 0);
		return 188;
	}
	if (iVar1 > 150 && !BitTest(uParam0->f_736, 1))
	{
		MISC::SET_BIT(&(uParam0->f_736), 1);
		return 187;
	}
	if (iVar0 < 100 && !BitTest(uParam0->f_736, 2))
	{
		MISC::SET_BIT(&(uParam0->f_736), 2);
		return 189;
	}
	if (iVar0 > 150 && !BitTest(uParam0->f_736, 3))
	{
		MISC::SET_BIT(&(uParam0->f_736), 3);
		return 190;
	}
	if (((iVar1 > 100 && iVar1 < 150) && iVar0 > 100) && iVar0 < 150)
	{
		uParam0->f_736 = 0;
	}
	return 202;
}

struct<6> func_443(int iParam0)//Position - 0x3FD364
{
	struct<6> Var0;
	StringCopy(&Var0, "mpfclone_Retro_print", 24);
	StringIntConCat(&Var0, iParam0, 24);
	return Var0;
}

struct<8> func_444(int iParam0)//Position - 0x3FD37F
{
	struct<8> Var0;
	StringCopy(&Var0, "MPFClone_Retro_PrintFull", 32);
	StringIntConCat(&Var0, iParam0 + 1, 32);
	return Var0;
}

void func_445(var uParam0)//Position - 0x3FD417
{
	uParam0->f_766[0 /*25*/][4 /*3*/] = 4;
	uParam0->f_766[0 /*25*/][5 /*3*/] = 5;
	uParam0->f_766[0 /*25*/][6 /*3*/] = 6;
	uParam0->f_766[0 /*25*/][7 /*3*/] = 7;
	uParam0->f_766[1 /*25*/][5 /*3*/] = 5;
	uParam0->f_766[1 /*25*/][6 /*3*/] = 6;
	uParam0->f_766[1 /*25*/][7 /*3*/] = 7;
	uParam0->f_766[2 /*25*/][6 /*3*/] = 6;
	uParam0->f_766[2 /*25*/][7 /*3*/] = 7;
}

int func_446(int iParam0, int iParam1)//Position - 0x3FD4FB
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
				case 3:
				case 5:
				case 6:
					return 1;
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 2:
				case 4:
				case 5:
				case 7:
					return 1;
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 2:
				case 5:
				case 6:
				case 7:
					return 1;
					break;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 3:
				case 4:
				case 6:
				case 7:
					return 1;
					break;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 1:
				case 2:
				case 5:
				case 6:
					return 1;
					break;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 0:
				case 3:
				case 6:
				case 7:
					return 1;
					break;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 0:
				case 2:
				case 4:
				case 5:
					return 1;
					break;
			}
			break;
		case 7:
			switch (iParam1)
			{
				case 3:
				case 4:
				case 6:
				case 7:
					return 1;
					break;
			}
			break;
	}
	return 0;
}

void func_447(var uParam0, int iParam1)//Position - 0x3FD683
{
	if (iParam1 < 1)
	{
		uParam0->f_735 = 1;
	}
	else if (iParam1 > 4)
	{
		uParam0->f_735 = 4;
	}
	else
	{
		uParam0->f_735 = iParam1;
	}
}

void func_448(char* sParam0, int iParam1)//Position - 0x3FDF31
{
	StringCopy(sParam0, "FINGERPRINT_HACKING_MINIGAME_NUMBERS_0", 64);
	if (iParam1 > 9)
	{
		StringIntConCat(sParam0, 9, 64);
	}
	else if (iParam1 < 0)
	{
		StringIntConCat(sParam0, 0, 64);
	}
	else
	{
		StringIntConCat(sParam0, iParam1, 64);
	}
}

void func_449(var uParam0, char* sParam1)//Position - 0x3FDF81
{
	if (!AUDIO::IS_AUDIO_SCENE_ACTIVE(sParam1))
	{
		AUDIO::START_AUDIO_SCENE(sParam1);
	}
	if (*uParam0 > 2)
	{
		if (AUDIO::HAS_SOUND_FINISHED(uParam0->f_739))
		{
			AUDIO::PLAY_SOUND_FRONTEND(uParam0->f_739, "Background_Hum", uParam0->f_741, true);
		}
	}
}

float func_450(int iParam0)//Position - 0x3FE7C1
{
	float fVar0;
	switch (iParam0)
	{
		case 1:
			fVar0 = 0.536f;
			break;
		case 2:
			fVar0 = 0.662f;
			break;
		case 3:
			fVar0 = 0.782f;
			break;
		case 4:
			fVar0 = 0.905f;
			break;
	}
	return fVar0;
}

void func_451(int iParam0, var uParam1, var uParam2)//Position - 0x3FEB06
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = 0.105f;
			*uParam2 = 0.306f;
			break;
		case 1:
			*uParam1 = 0.239f;
			*uParam2 = 0.306f;
			break;
		case 2:
			*uParam1 = 0.105f;
			*uParam2 = 0.439f;
			break;
		case 3:
			*uParam1 = 0.239f;
			*uParam2 = 0.439f;
			break;
		case 4:
			*uParam1 = 0.105f;
			*uParam2 = 0.572f;
			break;
		case 5:
			*uParam1 = 0.239f;
			*uParam2 = 0.572f;
			break;
		case 6:
			*uParam1 = 0.105f;
			*uParam2 = 0.706f;
			break;
		case 7:
			*uParam1 = 0.239f;
			*uParam2 = 0.706f;
			break;
	}
}

void func_452(var uParam0, int iParam1)//Position - 0x3FF27E
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 7)
	{
		if (uParam0->f_766[uParam0->f_755 /*25*/][iVar0 /*3*/].f_2 == iParam1)
		{
			if (!BitTest(uParam0->f_766[uParam0->f_755 /*25*/][iVar0 /*3*/].f_1, 0))
			{
				if (uParam0->f_756 >= 4)
				{
					return;
				}
				AUDIO::PLAY_SOUND_FRONTEND(-1, "Select_Print_Tile", uParam0->f_741, true);
				uParam0->f_756++;
				MISC::SET_BIT(&(uParam0->f_766[uParam0->f_755 /*25*/][iVar0 /*3*/].f_1), 0);
			}
			else
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "Deselect_Print_Tile", uParam0->f_741, true);
				uParam0->f_756 = (uParam0->f_756 - 1);
				MISC::CLEAR_BIT(&(uParam0->f_766[uParam0->f_755 /*25*/][iVar0 /*3*/].f_1), 0);
			}
		}
		iVar0++;
	}
}

void func_453(var uParam0, int iParam1)//Position - 0x3FF33C
{
	switch (iParam1)
	{
		case 188:
			uParam0->f_753 = (uParam0->f_753 - 2);
			if (uParam0->f_753 < 0)
			{
				if (uParam0->f_753 == -1)
				{
					uParam0->f_753 = 7;
				}
				else
				{
					uParam0->f_753 = 6;
				}
			}
			break;
		case 187:
			uParam0->f_753 += 2;
			if (uParam0->f_753 >= 8)
			{
				if (uParam0->f_753 == 8)
				{
					uParam0->f_753 = 0;
				}
				else
				{
					uParam0->f_753 = 1;
				}
			}
			break;
		case 189:
			uParam0->f_753 = (uParam0->f_753 - 1);
			if (uParam0->f_753 < 0)
			{
				uParam0->f_753 = 7;
			}
			break;
		case 190:
			uParam0->f_753++;
			if (uParam0->f_753 >= 8)
			{
				uParam0->f_753 = 0;
			}
			break;
	}
	AUDIO::PLAY_SOUND_FRONTEND(-1, "Cursor_Move", uParam0->f_741, true);
}

struct<6> func_454(int iParam0)//Position - 0x3FF674
{
	struct<6> Var0;
	StringCopy(&Var0, "mpfclone_print", 24);
	StringIntConCat(&Var0, iParam0, 24);
	return Var0;
}

int func_455(int iParam0, int iParam1)//Position - 0x3FF771
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
				case 3:
				case 5:
				case 6:
					return 1;
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
				case 1:
				case 2:
				case 3:
					return 1;
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
				case 1:
				case 2:
				case 3:
					return 1;
					break;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
				case 1:
				case 2:
				case 3:
					return 1;
					break;
			}
			break;
	}
	return 0;
}

void func_456(var* uParam0)//Position - 0x3FFA1F
{
	int iVar0;
	uParam0->f_752 = 0;
	uParam0->f_3 = 6;
	uParam0->f_755 = 0;
	uParam0->f_993 = 255;
	uParam0->f_993.f_1 = 255;
	uParam0->f_993.f_2 = 255;
	uParam0->f_993.f_3 = 250;
	iVar0 = 0;
	while (iVar0 <= 7)
	{
		uParam0->f_971[iVar0] = 1;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 7)
	{
		uParam0->f_980[iVar0] = 255;
		iVar0++;
	}
	uParam0->f_989 = 0;
	uParam0->f_990 = MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
	uParam0->f_991 = MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
	uParam0->f_732 = 300000;
	uParam0->f_733 = 30000;
	uParam0->f_734 = 0;
	uParam0->f_1 = 1;
}

void func_457(char* sParam0, int iParam1)//Position - 0x4001B5
{
	StringCopy(sParam0, "Numbers_", 24);
	if (iParam1 > 9)
	{
		StringIntConCat(sParam0, 9, 24);
	}
	else if (iParam1 < 0)
	{
		StringIntConCat(sParam0, 0, 24);
	}
	else
	{
		StringIntConCat(sParam0, iParam1, 24);
	}
}

void func_458(var uParam0, int iParam1, int iParam2)//Position - 0x400307
{
	float fVar0;
	int iVar1;
	fVar0 = ((SYSTEM::TO_FLOAT(iParam1) / SYSTEM::TO_FLOAT(iParam2)) * 100f);
	iVar1 = SYSTEM::FLOOR(fVar0);
	if (iVar1 > 50)
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Scramble_Countdown_Low", uParam0->f_741, true);
	}
	else if (iVar1 < 17)
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Scramble_Countdown_High", uParam0->f_741, true);
	}
	else
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Scramble_Countdown_Med", uParam0->f_741, true);
	}
}

float func_459(int iParam0, bool bParam1)//Position - 0x400C10
{
	if (bParam1)
	{
		switch (iParam0)
		{
			case 1:
			case 4:
			case 7:
				return (0.878f - 0.0944f);
				break;
			case 0:
			case 2:
			case 5:
			case 8:
				return 0.878f;
				break;
			case 3:
			case 6:
			case 9:
				return (0.878f + 0.0944f);
				break;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				return (0.433f + (0.0944f * 2f));
				break;
			case 1:
			case 2:
			case 3:
				return (0.433f - 0.0944f);
				break;
			case 4:
			case 5:
			case 6:
				return 0.433f;
				break;
			case 7:
			case 8:
			case 9:
				return (0.433f + 0.0944f);
				break;
			}
	}
	return 0.878f;
}

bool func_460(var uParam0, int iParam1, int iParam2)//Position - 0x401159
{
	return (BitTest(uParam0->f_757[uParam0->f_755 /*37*/][iParam1 /*6*/][iParam2], 1) && !BitTest(uParam0->f_757[uParam0->f_755 /*37*/][iParam1 /*6*/][iParam2], 0));
}

void func_461(var uParam0, int iParam1, int iParam2)//Position - 0x401193
{
	MISC::CLEAR_BIT(&(uParam0->f_757[uParam0->f_755 /*37*/][iParam1 /*6*/][iParam2]), 2);
}

bool func_462(var uParam0, int iParam1, int iParam2)//Position - 0x4011B4
{
	return BitTest(uParam0->f_757[uParam0->f_755 /*37*/][iParam1 /*6*/][iParam2], 2);
}

bool func_463(var uParam0, int iParam1, int iParam2)//Position - 0x4011D2
{
	return BitTest(uParam0->f_757[uParam0->f_755 /*37*/][iParam1 /*6*/][iParam2], 0);
}

bool func_464(var uParam0, int iParam1, int iParam2)//Position - 0x4011F0
{
	return (BitTest(uParam0->f_757[uParam0->f_755 /*37*/][iParam1 /*6*/][iParam2], 1) && BitTest(uParam0->f_757[uParam0->f_755 /*37*/][iParam1 /*6*/][iParam2], 0));
}

void func_465(var uParam0)//Position - 0x401A12
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		iVar1 = 0;
		while (iVar1 <= 5)
		{
			iVar2 = 0;
			while (iVar2 <= 4)
			{
				MISC::CLEAR_BIT(&(uParam0->f_757[iVar0 /*37*/][iVar1 /*6*/][iVar2]), 2);
				iVar2++;
			}
			iVar1++;
		}
		iVar0++;
	}
}

bool func_466(var uParam0, int iParam1, int iParam2)//Position - 0x401A66
{
	return BitTest(uParam0->f_757[uParam0->f_755 /*37*/][iParam1 /*6*/][iParam2], 1);
}

void func_467(var uParam0, int iParam1)//Position - 0x401A84
{
	switch (iParam1)
	{
		case 188:
			uParam0->f_753 = (uParam0->f_753 - 1);
			if (uParam0->f_753 < 0)
			{
				uParam0->f_753 = 4;
			}
			break;
		case 187:
			uParam0->f_753++;
			if (uParam0->f_753 >= 5)
			{
				uParam0->f_753 = 0;
			}
			break;
	}
	AUDIO::PLAY_SOUND_FRONTEND(-1, "Cursor_Move", uParam0->f_741, true);
}

int func_468(var uParam0)//Position - 0x401AEB
{
	if (*uParam0 != 4 && *uParam0 != 8)
	{
		return 0;
	}
	if (BitTest(uParam0->f_752, 1))
	{
		return 0;
	}
	if (BitTest(uParam0->f_752, 3))
	{
		return 0;
	}
	if (BitTest(uParam0->f_752, 4))
	{
		return 0;
	}
	if (BitTest(uParam0->f_752, 5))
	{
		return 0;
	}
	if (BitTest(uParam0->f_752, 8))
	{
		return 0;
	}
	if (BitTest(uParam0->f_752, 7))
	{
		return 0;
	}
	if (BitTest(uParam0->f_752, 12))
	{
		return 0;
	}
	return 1;
}

void func_469(var uParam0)//Position - 0x401D8B
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4[6];
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		iVar3 = 0;
		while (iVar3 <= 5)
		{
			iVar4[iVar3] = -1;
			iVar3++;
		}
		iVar3 = 0;
		while (iVar3 <= 5)
		{
			iVar4[iVar3] = MISC::GET_RANDOM_INT_IN_RANGE(0, 5);
			iVar3++;
		}
		iVar3 = 1;
		while (iVar3 <= 4)
		{
			if (iVar4[iVar3] == iVar4[(iVar3 - 1)] || iVar4[iVar3] == iVar4[iVar3 + 1])
			{
				iVar4[iVar3] = MISC::GET_RANDOM_INT_IN_RANGE(0, 5);
			}
			iVar3++;
		}
		iVar1 = 0;
		while (iVar1 <= 5)
		{
			iVar2 = 0;
			while (iVar2 <= 4)
			{
				if (iVar2 == iVar4[iVar1])
				{
					MISC::SET_BIT(&(uParam0->f_757[iVar0 /*37*/][iVar1 /*6*/][iVar2]), 0);
				}
				iVar2++;
			}
			iVar1++;
		}
		iVar0++;
	}
}

void func_470(var* uParam0)//Position - 0x401FF2
{
	int iVar0;
	uParam0->f_752 = 0;
	uParam0->f_3 = 6;
	uParam0->f_926 = 255;
	uParam0->f_926.f_1 = 255;
	uParam0->f_926.f_2 = 255;
	uParam0->f_926.f_3 = 250;
	uParam0->f_732 = 300000;
	uParam0->f_733 = 30000;
	uParam0->f_1 = 1;
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		uParam0->f_911[iVar0] = MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
		iVar0++;
	}
}

float func_471(struct<2> Param0)//Position - 0x410A57
{
	return SYSTEM::SQRT((SYSTEM::POW(Param0.f_0, 2f) + SYSTEM::POW(Param0.f_1, 2f)));
}

void func_472(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4)//Position - 0x4207F2
{
	struct<7> Var0;
	int iVar1;
	Var0.f_0 = -1902798417;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = iParam0;
	if (iParam2 != 0)
	{
		Var0.f_4 = iParam2;
	}
	Var0.f_3 = uParam1;
	Var0.f_5 = iParam3;
	Var0.f_6 = iParam4;
	iVar1 = __LIB_4__::func_970(1);
	if (!iVar1 == 0)
	{
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 9, iVar1);
	}
}

int func_473(int* iParam0)//Position - 0x431DF3
{
	if (BitTest(*iParam0, 2))
	{
		return 1;
	}
	return 0;
}

void func_474(int* iParam0)//Position - 0x431E08
{
	TASK::CLEAR_SEQUENCE_TASK(&(iParam0->f_62));
	TASK::CLEAR_SEQUENCE_TASK(&(iParam0->f_63));
	TASK::CLEAR_SEQUENCE_TASK(&(iParam0->f_64));
	TASK::CLEAR_SEQUENCE_TASK(&(iParam0->f_65));
}

void func_475(var uParam0)//Position - 0x431F42
{
	if (CAM::DOES_CAM_EXIST(uParam0->f_51))
	{
		CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
		CAM::SET_CAM_ACTIVE(uParam0->f_51, false);
		CAM::DESTROY_ALL_CAMS(false);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
	}
}

int func_476(int* iParam0)//Position - 0x431F7E
{
	if (BitTest(*iParam0, 1))
	{
		return 1;
	}
	return 0;
}

void func_477(int* iParam0, int iParam1, var uParam2)//Position - 0x43217F
{
	struct<3> Var0;
	struct<3> Var1;
	if (*iParam0 == 0 || *uParam2 == 0)
	{
	}
	if (ENTITY::IS_ENTITY_ATTACHED(PLAYER::PLAYER_PED_ID()))
	{
		ENTITY::DETACH_ENTITY(PLAYER::PLAYER_PED_ID(), false, false);
	}
	Var1 = { 0f, 0f, (ENTITY::GET_ENTITY_HEADING(iParam1) + 90f) };
	Var0 = { ENTITY::GET_ENTITY_COORDS(iParam1, true) - PED::GET_ANIM_INITIAL_OFFSET_POSITION("mini@safe_cracking", "DOOR_OPEN_SUCCEED_STAND_SAFE", 0f, 0f, 0f, Var1, 0f, 2) };
	*uParam2 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(Var0, Var1, 2, false, false, 1f, 0f, 1f);
	NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), *uParam2, "mini@safe_cracking", "DOOR_OPEN_SUCCEED_STAND", 8f, -8f, 1421, 16, 1000f, 0);
	if (ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(iParam1, *uParam2, "mini@safe_cracking", "DOOR_OPEN_SUCCEED_STAND_SAFE", 8f, -8f, 137);
	}
	NETWORK::NETWORK_START_SYNCHRONISED_SCENE(*uParam2);
}

float func_478(int* iParam0)//Position - 0x4325AE
{
	return iParam0->f_72;
}

void func_479(int* iParam0)//Position - 0x432923
{
	TASK::TASK_PERFORM_SEQUENCE(PLAYER::PLAYER_PED_ID(), iParam0->f_64);
}

int func_480(int* iParam0)//Position - 0x432937
{
	return iParam0->f_73;
}

void func_481(int* iParam0)//Position - 0x432943
{
	TASK::TASK_PERFORM_SEQUENCE(PLAYER::PLAYER_PED_ID(), iParam0->f_63);
}

int func_482()//Position - 0x432957
{
	if ((ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "mini@safe_cracking", "idle_base", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "mini@safe_cracking", "idle_heavy_breathe", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "mini@safe_cracking", "idle_look_around", 3))
	{
		return 1;
	}
	return 0;
}

void func_483(int* iParam0)//Position - 0x432A6E
{
	TASK::TASK_PERFORM_SEQUENCE(PLAYER::PLAYER_PED_ID(), iParam0->f_65);
}

int func_484()//Position - 0x432D95
{
	int iVar0;
	iVar0 = (70 - SYSTEM::ROUND(0f));
	if (iVar0 > 70)
	{
		iVar0 = 70;
	}
	else if (iVar0 < 7)
	{
		iVar0 = 7;
	}
	return iVar0;
}

void func_485(var uParam0)//Position - 0x432E41
{
	if (!CAM::DOES_CAM_EXIST(uParam0->f_51))
	{
		uParam0->f_51 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", false);
		CAM::SET_CAM_ACTIVE(uParam0->f_51, true);
		CAM::SET_CAM_PARAMS(uParam0->f_51, uParam0->f_52, uParam0->f_55, uParam0->f_58, 0, 1, 1, 2);
		CAM::POINT_CAM_AT_ENTITY(uParam0->f_51, PLAYER::PLAYER_PED_ID(), 0.7f, 0f, 0.15f, true);
		CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
	}
}

void func_486(var uParam0)//Position - 0x432FA9
{
	uParam0->f_26 = 0.5f;
	uParam0->f_26.f_1 = 0.5f;
	uParam0->f_26.f_2 = 0.298f;
	uParam0->f_26.f_3 = 0.495f;
	uParam0->f_26.f_4 = 255;
	uParam0->f_26.f_5 = 255;
	uParam0->f_26.f_6 = 255;
	uParam0->f_26.f_7 = 255;
	uParam0->f_26.f_8 = 0f;
	uParam0->f_35 = 0.499f;
	uParam0->f_35.f_1 = 0.499f;
	uParam0->f_35.f_2 = 0.15f;
	uParam0->f_35.f_3 = 0.25f;
	uParam0->f_35.f_4 = 255;
	uParam0->f_35.f_5 = 255;
	uParam0->f_35.f_6 = 255;
	uParam0->f_35.f_7 = 255;
	uParam0->f_35.f_8 = 0f;
}

void func_487()//Position - 0x4331C9
{
	TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), "mini@safe_cracking", "step_out", 4f, -8f, -1, 1310720, 0f, false, false, false);
	PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), false, false);
}

int func_488(int* iParam0)//Position - 0x4331FC
{
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 37 /*INPUT_SELECT_WEAPON*/, true);
	if ((((((!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), iParam0->f_15, 0.75f, 0.75f, 1.5f, false, true, 1) || PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 51 /*INPUT_CONTEXT*/)) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || __LIB_0__::func_194(8, -1)) || HUD::IS_PAUSE_MENU_ACTIVE()) || PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), false)) || iParam0->f_71)
	{
		if (ENTITY::IS_ENTITY_ATTACHED(PLAYER::PLAYER_PED_ID()))
		{
			ENTITY::DETACH_ENTITY(PLAYER::PLAYER_PED_ID(), false, false);
		}
		return 1;
	}
	return 0;
}

int func_489()//Position - 0x433295
{
	if ((((((PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || __LIB_0__::func_194(8, -1)) || HUD::IS_PAUSE_MENU_ACTIVE()) || PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), false)) || __LIB_0__::func_193()) || Global_75485) || __LIB_0__::func_77(0))
	{
		return 0;
	}
	return 1;
}

char* func_490(int iParam0)//Position - 0x43372C
{
	switch (iParam0)
	{
		case 0:
			switch (MISC::GET_RANDOM_INT_IN_RANGE(1, 5))
			{
				case 1:
					return "dial_turn_succeed_1";
				case 2:
					return "dial_turn_succeed_2";
				case 3:
					return "dial_turn_succeed_3";
				case 4:
					return "dial_turn_succeed_4";
				default:
			}
			break;
		case 1:
			switch (MISC::GET_RANDOM_INT_IN_RANGE(1, 5))
			{
				case 1:
					return "dial_turn_fail_1";
				case 2:
					return "dial_turn_fail_2";
				case 3:
					return "dial_turn_fail_3";
				case 4:
					return "dial_turn_fail_4";
				default:
			}
			break;
	}
	return "idle_base";
}

void func_491(int iParam0, struct<3> Param1, float fParam2)//Position - 0x433A3C
{
	if (*iParam0 == -1)
	{
		*iParam0 = GRAPHICS::CREATE_TRACKED_POINT();
		GRAPHICS::SET_TRACKED_POINT_INFO(*iParam0, Param1, fParam2);
	}
}

void func_492(int iParam0, int iParam1)//Position - 0x43456A
{
	int iVar0;
	iVar0 = NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(iParam1);
	if (iVar0 != -1)
	{
		STREAMING::REQUEST_ANIM_DICT("mini@safe_cracking");
		if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iVar0))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0) || (!NETWORK::IS_NETWORK_ID_OWNED_BY_PARTICIPANT(NETWORK::OBJ_TO_NET(iParam0)) && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()))
			{
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iVar0) >= 0.95f)
				{
					if (ENTITY::DOES_ENTITY_EXIST(iParam0) && STREAMING::HAS_ANIM_DICT_LOADED("mini@safe_cracking"))
					{
						ENTITY::PLAY_ENTITY_ANIM(iParam0, "DOOR_OPEN_SUCCEED_STAND_SAFE", "mini@safe_cracking", 8f, false, true, false, 0.96f, 262144);
					}
					NETWORK::NETWORK_STOP_SYNCHRONISED_SCENE(iVar0);
				}
			}
		}
	}
}

void func_493(var uParam0, int iParam1, int iParam2)//Position - 0x43BA92
{
	if (iParam1 == iParam2)
	{
		if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uParam0->f_80[iParam2]))
		{
			if (uParam0->f_10 >= uParam0->f_16 && uParam0->f_10 <= uParam0->f_17)
			{
				if (uParam0->f_12 > 1f)
				{
					uParam0->f_12 = 1f;
				}
				GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(uParam0->f_80[iParam2], "power", uParam0->f_12, false);
			}
			else
			{
				GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(uParam0->f_80[iParam2], "power", 0f, false);
			}
		}
		if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uParam0->f_113[iParam2]))
		{
			if (uParam0->f_10 > uParam0->f_17 && uParam0->f_12 > 0f)
			{
				if (uParam0->f_19 > 1f)
				{
					uParam0->f_19 = 1f;
				}
				GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(uParam0->f_113[iParam2], "heat", uParam0->f_19, false);
			}
			else
			{
				GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(uParam0->f_113[iParam2], "heat", 0f, false);
			}
		}
	}
	else
	{
		if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uParam0->f_80[iParam2]))
		{
			GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(uParam0->f_80[iParam2], "power", 0.5f, false);
		}
		if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uParam0->f_113[iParam2]))
		{
			GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(uParam0->f_113[iParam2], "heat", 0.1f, false);
		}
	}
}

void func_494(var uParam0, int iParam1, int iParam2)//Position - 0x43BBB3
{
	if (iParam1 == iParam2)
	{
		if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uParam0->f_47[iParam2]))
		{
			if (uParam0->f_10 > 0f)
			{
				GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(uParam0->f_47[iParam2], "intensity", uParam0->f_12, false);
			}
			else
			{
				GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(uParam0->f_47[iParam2], "intensity", 0f, false);
			}
		}
		if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uParam0->f_80[iParam2]))
		{
			if (uParam0->f_10 > 0f)
			{
				GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(uParam0->f_80[iParam2], "intensity", uParam0->f_12, false);
			}
			else
			{
				GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(uParam0->f_80[iParam2], "intensity", 0f, false);
			}
		}
		if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uParam0->f_113[iParam2]))
		{
			if (uParam0->f_10 > uParam0->f_17 && uParam0->f_12 > 0f)
			{
				if (uParam0->f_19 > 1f)
				{
					uParam0->f_19 = 1f;
				}
				GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(uParam0->f_113[iParam2], "heat", uParam0->f_19, false);
			}
			else
			{
				GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(uParam0->f_113[iParam2], "heat", 0f, false);
			}
		}
	}
	else
	{
		if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uParam0->f_47[iParam2]))
		{
			GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(uParam0->f_47[iParam2], "intensity", 0.5f, false);
		}
		if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uParam0->f_80[iParam2]))
		{
			GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(uParam0->f_80[iParam2], "power", 0.5f, false);
		}
		if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uParam0->f_113[iParam2]))
		{
			GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(uParam0->f_113[iParam2], "heat", 0.1f, false);
		}
	}
}

void func_495(bool bParam0, int iParam1)//Position - 0x43BD8B
{
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("hei_prop_hei_drill_hole"));
	if (STREAMING::HAS_NAMED_PTFX_ASSET_LOADED("scr_ch_finale"))
	{
		STREAMING::REMOVE_NAMED_PTFX_ASSET("scr_ch_finale");
	}
	if (bParam0)
	{
		STREAMING::REMOVE_ANIM_DICT(__LIB_5__::func_94());
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("ch_prop_laserdrill_01a"));
		AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("DLC_HEIST3\HEIST_FINALE_LASER_DRILL");
	}
	else
	{
		AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("DLC_MPHEIST\HEIST_FLEECA_DRILL");
		AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("DLC_MPHEIST\HEIST_FLEECA_DRILL_2");
		STREAMING::REMOVE_ANIM_DICT(__LIB_5__::func_94());
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("ch_prop_ch_heist_drill"));
	}
	STREAMING::REMOVE_ANIM_DICT("anim@heists@fleeca_bank@drilling");
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iParam1);
}

int func_496(bool bParam0, int iParam1)//Position - 0x43BE05
{
	int iVar0;
	if (bParam0)
	{
		STREAMING::REQUEST_ANIM_DICT(__LIB_5__::func_93());
		STREAMING::REQUEST_MODEL(joaat("ch_prop_laserdrill_01a"));
		AUDIO::REQUEST_SCRIPT_AUDIO_BANK("DLC_HEIST3\HEIST_FINALE_LASER_DRILL", false, -1);
	}
	else
	{
		STREAMING::REQUEST_ANIM_DICT(__LIB_5__::func_94());
		STREAMING::REQUEST_MODEL(joaat("ch_prop_ch_heist_drill"));
		AUDIO::REQUEST_SCRIPT_AUDIO_BANK("DLC_MPHEIST\HEIST_FLEECA_DRILL", false, -1);
		AUDIO::REQUEST_SCRIPT_AUDIO_BANK("DLC_MPHEIST\HEIST_FLEECA_DRILL_2", false, -1);
	}
	STREAMING::REQUEST_MODEL(iParam1);
	STREAMING::REQUEST_MODEL(joaat("hei_prop_hei_drill_hole"));
	STREAMING::REQUEST_NAMED_PTFX_ASSET("scr_ch_finale");
	STREAMING::REQUEST_ANIM_DICT("anim@heists@fleeca_bank@drilling");
	iVar0 = 1;
	if (bParam0)
	{
		if (!STREAMING::HAS_ANIM_DICT_LOADED(__LIB_5__::func_93()) && !STREAMING::HAS_MODEL_LOADED(joaat("ch_prop_laserdrill_01a")))
		{
			iVar0 = 0;
		}
		if (!AUDIO::REQUEST_SCRIPT_AUDIO_BANK("DLC_HEIST3\HEIST_FINALE_LASER_DRILL", false, -1))
		{
			iVar0 = 0;
		}
	}
	else
	{
		if (!STREAMING::HAS_ANIM_DICT_LOADED(__LIB_5__::func_94()))
		{
			iVar0 = 0;
		}
		if (!STREAMING::HAS_MODEL_LOADED(joaat("ch_prop_ch_heist_drill")))
		{
			iVar0 = 0;
		}
		if (!AUDIO::REQUEST_SCRIPT_AUDIO_BANK("DLC_MPHEIST\HEIST_FLEECA_DRILL", false, -1))
		{
			iVar0 = 0;
		}
		if (!AUDIO::REQUEST_SCRIPT_AUDIO_BANK("DLC_MPHEIST\HEIST_FLEECA_DRILL_2", false, -1))
		{
			iVar0 = 0;
		}
	}
	if (!STREAMING::HAS_ANIM_DICT_LOADED("anim@heists@fleeca_bank@drilling"))
	{
		iVar0 = 0;
	}
	if (!STREAMING::HAS_MODEL_LOADED(iParam1))
	{
		iVar0 = 0;
	}
	if (!STREAMING::HAS_MODEL_LOADED(joaat("hei_prop_hei_drill_hole")))
	{
		iVar0 = 0;
	}
	if (!STREAMING::HAS_NAMED_PTFX_ASSET_LOADED("scr_ch_finale"))
	{
		iVar0 = 0;
	}
	if (!HUD::HAS_THIS_ADDITIONAL_TEXT_LOADED("HACK", 3))
	{
		iVar0 = 0;
	}
	return iVar0;
}

bool func_497()//Position - 0x442AB2
{
	return BitTest(Global_1946250.f_2, 25);
}

void func_498(var uParam0, int iParam1, int iParam2, int iParam3)//Position - 0x443211
{
	if (HUD::DOES_BLIP_EXIST(*uParam0))
	{
		HUD::SET_BLIP_SECONDARY_COLOUR(*uParam0, iParam1, iParam2, iParam3);
	}
}

void func_499(int iParam0, int iParam1, int iParam2)//Position - 0x4452E1
{
	switch (iParam0)
	{
		case 2:
			WEAPON::SET_CURRENT_PED_VEHICLE_WEAPON(iParam2, joaat("VEHICLE_WEAPON_RUINER_BULLET"));
			VEHICLE::DISABLE_VEHICLE_WEAPON(false, joaat("VEHICLE_WEAPON_RUINER_BULLET"), iParam1, iParam2);
			break;
		case 3:
			WEAPON::SET_CURRENT_PED_VEHICLE_WEAPON(iParam2, joaat("VEHICLE_WEAPON_CANNON_BLAZER"));
			VEHICLE::DISABLE_VEHICLE_WEAPON(false, joaat("VEHICLE_WEAPON_CANNON_BLAZER"), iParam1, iParam2);
			break;
	}
	VEHICLE::SET_VEHICLE_WEAPON_RESTRICTED_AMMO(iParam1, 0, Global_1574508.f_1);
}

void func_500(int iParam0, int iParam1, int iParam2)//Position - 0x445343
{
	switch (iParam0)
	{
		case 2:
			WEAPON::SET_CURRENT_PED_VEHICLE_WEAPON(iParam2, joaat("VEHICLE_WEAPON_RUINER_ROCKET"));
			VEHICLE::DISABLE_VEHICLE_WEAPON(false, joaat("VEHICLE_WEAPON_RUINER_ROCKET"), iParam1, iParam2);
			VEHICLE::SET_VEHICLE_WEAPON_RESTRICTED_AMMO(iParam1, 1, Global_1574492.f_3);
			break;
	}
}

void func_501(int iParam0, int iParam1, int iParam2)//Position - 0x4453C1
{
	switch (iParam0)
	{
		case 2:
			VEHICLE::DISABLE_VEHICLE_WEAPON(true, joaat("VEHICLE_WEAPON_RUINER_BULLET"), iParam1, iParam2);
			WEAPON::SET_CURRENT_PED_VEHICLE_WEAPON(iParam2, joaat("VEHICLE_WEAPON_RUINER_ROCKET"));
			break;
		case 3:
			VEHICLE::DISABLE_VEHICLE_WEAPON(true, joaat("VEHICLE_WEAPON_CANNON_BLAZER"), iParam1, iParam2);
			break;
	}
	VEHICLE::SET_VEHICLE_WEAPON_RESTRICTED_AMMO(iParam1, 0, 0);
}

void func_502(int iParam0, int iParam1, int iParam2)//Position - 0x445412
{
	switch (iParam0)
	{
		case 2:
			VEHICLE::DISABLE_VEHICLE_WEAPON(true, joaat("VEHICLE_WEAPON_RUINER_ROCKET"), iParam1, iParam2);
			VEHICLE::SET_VEHICLE_WEAPON_RESTRICTED_AMMO(iParam1, 1, -1);
			PLAYER::SET_PLAYER_LOCKON(PLAYER::GET_PLAYER_INDEX(), true);
			break;
	}
}

void func_503(int iParam0, int iParam1, int iParam2)//Position - 0x445449
{
	switch (iParam0)
	{
		case 2:
			VEHICLE::DISABLE_VEHICLE_WEAPON(true, joaat("VEHICLE_WEAPON_RUINER_ROCKET"), iParam1, iParam2);
			VEHICLE::SET_VEHICLE_WEAPON_RESTRICTED_AMMO(iParam1, 1, -1);
			break;
	}
}

void func_504(int iParam0, int iParam1, int iParam2)//Position - 0x445477
{
	switch (iParam0)
	{
		case 2:
			VEHICLE::DISABLE_VEHICLE_WEAPON(true, joaat("VEHICLE_WEAPON_PLAYER_LASER"), iParam1, iParam2);
			VEHICLE::DISABLE_VEHICLE_WEAPON(true, joaat("VEHICLE_WEAPON_RUINER_BULLET"), iParam1, iParam2);
			VEHICLE::DISABLE_VEHICLE_WEAPON(true, joaat("VEHICLE_WEAPON_RUINER_ROCKET"), iParam1, iParam2);
			break;
		case 3:
			VEHICLE::DISABLE_VEHICLE_WEAPON(true, joaat("VEHICLE_WEAPON_CANNON_BLAZER"), iParam1, iParam2);
			break;
	}
	VEHICLE::SET_VEHICLE_WEAPON_RESTRICTED_AMMO(iParam1, 0, 0);
}

int func_505()//Position - 0x4454D8
{
	if (((Global_1574485 == 1 || Global_1574492 == 1) || Global_1574481.f_3 == 1) || Global_1574508 == 1)
	{
		return 1;
	}
	return 0;
}

int func_506(int iParam0)//Position - 0x44AE43
{
	if (iParam0 != -1)
	{
		return BitTest(Global_1970897[iParam0 /*68*/].f_18, 20);
	}
	return 0;
}

int func_507(int iParam0, int iParam1)//Position - 0x44AEF1
{
	if (iParam0 != -1)
	{
		switch (iParam1)
		{
			case 1:
				return BitTest(Global_1970897[iParam0 /*68*/].f_18, 8);
			case 2:
				return BitTest(Global_1970897[iParam0 /*68*/].f_18, 10);
			case 3:
				return BitTest(Global_1970897[iParam0 /*68*/].f_18, 12);
			case 4:
				return BitTest(Global_1970897[iParam0 /*68*/].f_18, 14);
			}
		default:
	}
	return 0;
}

int func_508(int iParam0)//Position - 0x44B048
{
	if (iParam0 != -1)
	{
		return BitTest(Global_1970897[iParam0 /*68*/].f_18, 1);
	}
	return 0;
}

int func_509(int iParam0)//Position - 0x44B066
{
	if (iParam0 != -1)
	{
		return BitTest(Global_1970897[iParam0 /*68*/].f_40, 22);
	}
	return 0;
}

int func_510(int iParam0)//Position - 0x44B0C2
{
	if (iParam0 != -1)
	{
		return BitTest(Global_1970897[iParam0 /*68*/].f_18, 5);
	}
	return 0;
}

int func_511(int iParam0)//Position - 0x44B101
{
	if (iParam0 != -1)
	{
		return BitTest(Global_1970897[iParam0 /*68*/].f_18.f_1, 5);
	}
	return 0;
}

int func_512(int iParam0)//Position - 0x44B15F
{
	if (iParam0 != -1)
	{
		return BitTest(Global_1970897[iParam0 /*68*/].f_18.f_1, 8);
	}
	return 0;
}

bool func_513(bool bParam0)//Position - 0x44B9AD
{
	return Global_1977138[bParam0 /*57*/].f_26 == 1;
}

int func_514(int iParam0)//Position - 0x44CE9E
{
	if (BitTest(Global_1853348[iParam0 /*834*/].f_833, 3))
	{
		return 1;
	}
	return 0;
}

bool func_515(bool bParam0)//Position - 0x44CEBC
{
	return __LIB_15__::func_303(Global_2678393.f_624[bParam0], &(Global_2678393.f_389), bParam0);
}

int func_516(var uParam0, var uParam1, var uParam2, int iParam3)//Position - 0x44E27D
{
	if (BitTest(uParam0, 9))
	{
		if ((iParam3 == joaat("granger") || iParam3 == joaat("barracks")) || iParam3 == joaat("barracks3"))
		{
			return joaat("prop_box_ammo03a_set2");
		}
		else
		{
			return joaat("prop_box_ammo03a_set");
		}
	}
	else if (BitTest(uParam0, 10))
	{
		if ((iParam3 == joaat("granger") || iParam3 == joaat("barracks")) || iParam3 == joaat("barracks3"))
		{
			return joaat("hei_prop_crate_stack_01");
		}
		else
		{
			return joaat("prop_drop_crate_01_set");
		}
	}
	else if (BitTest(uParam0, 11))
	{
		if (iParam3 == joaat("granger"))
		{
			return 0;
		}
		else
		{
			return joaat("prop_mb_crate_01a_set");
		}
	}
	else if (BitTest(uParam1, 8))
	{
		return joaat("hei_prop_mini_sever_02");
	}
	else if (BitTest(uParam1, 27))
	{
		return joaat("hei_prop_mini_sever_03");
	}
	else if (BitTest(uParam1, 11))
	{
		return joaat("hei_prop_heist_tub_truck");
	}
	else if (BitTest(uParam1, 20))
	{
		return joaat("hei_prop_hei_ammo_pile");
	}
	else if (BitTest(uParam1, 21))
	{
		return joaat("hei_prop_hei_ammo_pile_02");
	}
	else if (BitTest(uParam1, 24))
	{
		return joaat("hei_prop_heist_weed_pallet_02");
	}
	else if (BitTest(uParam1, 25))
	{
		return joaat("hei_prop_drug_statue_stack");
	}
	else if (BitTest(uParam1, 26))
	{
		return joaat("hei_prop_heist_transponder");
	}
	else if (BitTest(uParam1, 28))
	{
		return joaat("hei_prop_heist_emp");
	}
	else if (BitTest(uParam2, 24))
	{
		return joaat("xm_prop_vancrate_01a");
	}
	return 0;
}

void func_517(var uParam0, int iParam1)//Position - 0x44F460
{
	int iVar0;
	iVar0 = 0;
	if (__LIB_18__::func_836(uParam0->f_1[0]))
	{
		iVar0++;
	}
	if (__LIB_18__::func_834(uParam0->f_1[0]))
	{
		iVar0++;
	}
	if (__LIB_18__::func_833(uParam0->f_1[iParam1]))
	{
		iVar0++;
	}
	if (__LIB_18__::func_839(uParam0->f_1[0]))
	{
		iVar0++;
	}
	if (__LIB_18__::func_838(uParam0->f_1[iParam1]))
	{
		iVar0++;
	}
	if (__LIB_18__::func_837(uParam0->f_1[iParam1]))
	{
		iVar0++;
	}
	if (iVar0 > 3)
	{
		iVar0 = 3;
	}
	uParam0->f_39 = iVar0;
}

int func_518(var uParam0, int iParam1)//Position - 0x44F4F5
{
	bool bVar0;
	switch (*uParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					if (uParam0->f_41 < 3)
					{
						return 25;
					}
					return 33;
				case 1:
					return 43;
				case 2:
					return 52;
				default:
			}
			break;
		case 1:
			if (uParam0->f_41 >= 2)
			{
				bVar0 = true;
			}
			switch (iParam1)
			{
				case 0:
					if (bVar0)
					{
						return 87;
					}
					return 127;
				case 1:
					if (bVar0)
					{
						return 107;
					}
					return 142;
				default:
			}
			break;
	}
	return 0;
}

int func_519(var uParam0, int iParam1)//Position - 0x44F589
{
	bool bVar0;
	switch (*uParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 0;
				case 1:
					return 33;
				case 2:
					return 43;
				default:
			}
			break;
		case 1:
			if (uParam0->f_41 >= 2)
			{
				bVar0 = true;
			}
			switch (iParam1)
			{
				case 0:
					if (bVar0)
					{
						return 67;
					}
					return 107;
				case 1:
					if (bVar0)
					{
						return 87;
					}
					return 127;
				default:
			}
			break;
	}
	return 0;
}

int func_520(int iParam0)//Position - 0x44F60F
{
	switch (iParam0)
	{
		case 31:
		case 27:
		case 28:
		case 29:
			return 1;
		default:
	}
	return 0;
}

int func_521(int iParam0, int iParam1)//Position - 0x44F63B
{
	switch (iParam0)
	{
		case 25:
			return 52;
		case 26:
			if (iParam1 == 1)
			{
				return 53;
			}
			return 60;
		case 27:
			if (iParam1 == 1)
			{
				return 54;
			}
			return 61;
		case 28:
			if (iParam1 == 1)
			{
				return 55;
			}
			return 62;
		case 29:
			if (iParam1 == 1)
			{
				return 56;
			}
			return 63;
		case 30:
			if (iParam1 == 1)
			{
				return 57;
			}
			return 64;
		case 31:
			if (iParam1 == 1)
			{
				return 58;
			}
			return 65;
		case 32:
			if (iParam1 == 1)
			{
				return 59;
			}
			return 66;
		case 80:
			return 100;
		case 81:
			return 101;
		case 82:
			return 102;
		case 83:
			return 103;
		case 84:
			return 104;
		case 85:
			return 105;
		case 86:
			return 106;
		case 67:
			return 87;
		case 68:
			return 88;
		case 69:
			return 89;
		case 70:
			return 90;
		case 71:
			return 91;
		case 72:
			return 92;
		case 73:
			return 93;
		case 74:
			return 94;
		case 75:
			return 95;
		case 76:
			return 96;
		case 77:
			return 97;
		case 78:
			return 98;
		case 79:
			return 99;
		default:
	}
	return -1;
}

int func_522(int iParam0)//Position - 0x454587
{
	if (iParam0 == 4)
	{
		return 1;
	}
	return 0;
}

int func_523(var uParam0, int iParam1)//Position - 0x45B791
{
	int iVar0;
	iVar0 = MISC::GET_GAME_TIMER();
	if ((iVar0 - *uParam0) > iParam1)
	{
		return 1;
	}
	return 0;
}

void func_524()//Position - 0x476FB3
{
	int iVar0[4];
	int iVar1;
	iVar0[0] = -1608031236;
	iVar0[1] = 1969557112;
	iVar0[2] = -2088850773;
	iVar0[3] = 1466913421;
	iVar1 = 0;
	while (iVar1 <= 3)
	{
		if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iVar0[iVar1]))
		{
			OBJECT::REMOVE_DOOR_FROM_SYSTEM(iVar0[iVar1], 0);
		}
		iVar1++;
	}
}

float func_525(float fParam0, float fParam1)//Position - 0x48C812
{
	if (fParam0 > fParam1)
	{
		return fParam0;
	}
	else if (fParam1 > fParam0)
	{
		return fParam1;
	}
	return fParam0;
}

void func_526(int iParam0)//Position - 0x48FF2B
{
	if (Global_1958711.f_4 != iParam0)
	{
		Global_1958711.f_4 = iParam0;
	}
}

int func_527()//Position - 0x48FF46
{
	if (Global_1958711.f_4 != -1 && Global_1958711.f_4 != 0)
	{
		return Global_1958711.f_4;
	}
	return Global_1837205;
}

float func_528(int iParam0)//Position - 0x49A0FA
{
	return SYSTEM::TO_FLOAT((iParam0 * iParam0));
}

Vector3 func_529(int iParam0)//Position - 0x4B240B
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	float fVar3;
	Var0 = { CAM::GET_GAMEPLAY_CAM_COORD() };
	Var1 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
	Var2 = { Var1 - Var0 };
	fVar3 = 5f;
	__LIB_0__::func_79(Var2);
	Var2.f_0 = (Var2.f_0 * fVar3);
	Var2.f_1 = (Var2.f_1 * fVar3);
	Var2.f_2 = (Var2.f_2 * fVar3);
	Var2 = { Var2 + Var0 };
	return Var2;
}

void func_530(var uParam0)//Position - 0x4B4D68
{
	if (BitTest(uParam0->f_1.f_1, 4))
	{
		MISC::CLEAR_BIT(&(uParam0->f_1.f_1), 4);
	}
}

void func_531(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0x4B6C3C
{
	PAD::DISABLE_ALL_CONTROL_ACTIONS(0 /*PLAYER_CONTROL*/);
	if (bParam0)
	{
		PAD::DISABLE_ALL_CONTROL_ACTIONS(1 /*CAMERA_CONTROL*/);
	}
	else
	{
		PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 1 /*INPUT_LOOK_LR*/, true);
		PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 2 /*INPUT_LOOK_UD*/, true);
		PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 26 /*INPUT_LOOK_BEHIND*/, true);
		PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 79 /*INPUT_VEH_LOOK_BEHIND*/, true);
		PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 286 /*INPUT_VEH_LOOK_LEFT*/, true);
		PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 287 /*INPUT_VEH_LOOK_RIGHT*/, true);
	}
	PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 86 /*INPUT_VEH_HORN*/, true);
	PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 65 /*INPUT_VEH_SPECIAL*/, true);
	PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 101 /*INPUT_VEH_ROOF*/, true);
	if (bParam2)
	{
		PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 81 /*INPUT_VEH_NEXT_RADIO*/, true);
		PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 82 /*INPUT_VEH_PREV_RADIO*/, true);
	}
	if (bParam1)
	{
		PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 71 /*INPUT_VEH_ACCELERATE*/, true);
	}
	if (bParam4)
	{
		PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 337 /*INPUT_VEH_HYDRAULICS_CONTROL_TOGGLE*/, true);
		PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 341 /*INPUT_VEH_HYDRAULICS_CONTROL_DOWN*/, true);
		PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 338 /*INPUT_VEH_HYDRAULICS_CONTROL_LEFT*/, true);
		PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 339 /*INPUT_VEH_HYDRAULICS_CONTROL_RIGHT*/, true);
		PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 340 /*INPUT_VEH_HYDRAULICS_CONTROL_UP*/, true);
		PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 343 /*INPUT_VEH_HYDRAULICS_CONTROL_UD*/, true);
		PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 342 /*INPUT_VEH_HYDRAULICS_CONTROL_LR*/, true);
	}
	PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 0 /*INPUT_NEXT_CAMERA*/, true);
	__LIB_23__::func_837(bParam3);
}

void func_532(bool bParam0)//Position - 0x4BE290
{
	if (!Global_2667225.f_26.f_2)
	{
		Global_2667225.f_26.f_3 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		Global_2667225.f_26.f_2 = 1;
	}
	if (!Global_2667225.f_26.f_1 == bParam0)
	{
		Global_2667225.f_26.f_1 = bParam0;
		Global_2667225.f_26.f_3 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	}
	if (!bParam0)
	{
		Global_2667225.f_26.f_4 = 1;
	}
}

bool func_533()//Position - 0x4BE449
{
	return Global_2667225.f_26.f_1;
}

int func_534()//Position - 0x4C193E
{
	if (!Global_2667225.f_676 == 0)
	{
		if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667225.f_679) < __LIB_0__::func_853(SCRIPT::GET_ID_OF_THIS_THREAD() == Global_2667225.f_675))
		{
			return 1;
		}
	}
	return 0;
}

void func_535()//Position - 0x4C5A00
{
	Global_2715699.f_6321 = 0;
}

int func_536()//Position - 0x4D04AE
{
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		if (STREAMING::GET_PLAYER_SWITCH_TYPE() != 3)
		{
			if (STREAMING::GET_PLAYER_SWITCH_STATE() >= 9)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_537(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4)//Position - 0x4D0E5C
{
	int iVar0;
	iVar0 = MISC::ABSI(iParam0);
	*uParam4 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) / 1000000f));
	iVar0 = (iVar0 - (*uParam4 * 1000000));
	*uParam3 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) / 100000f));
	iVar0 = (iVar0 - (*uParam3 * 100000));
	*uParam1 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) / 100f));
	iVar0 = (iVar0 - *uParam1 * 100);
	*uParam2 = iVar0;
}

int func_538()//Position - 0x4D31F0
{
	return 0;
	if (__LIB_0__::func_86(Global_4718592.f_165321))
	{
		return 0;
	}
	return 1;
}

void func_539(int iParam0)//Position - 0x4D99A0
{
	Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_274 = 0;
	switch (iParam0)
	{
		case 1:
			if (!BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_274, 13))
			{
				MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_274), 13);
			}
			break;
		case 2:
			if (!BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_274, 0))
			{
				MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_274), 0);
			}
			break;
		case 3:
			if (!BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_274, 1))
			{
				MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_274), 1);
			}
			break;
		case 4:
			if (!BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_274, 2))
			{
				MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_274), 2);
			}
			break;
		case 5:
			if (!BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_274, 3))
			{
				MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_274), 3);
			}
			break;
		case 6:
			if (!BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_274, 4))
			{
				MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_274), 4);
			}
			break;
		case 7:
			if (!BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_274, 5))
			{
				MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_274), 5);
			}
			break;
		case 8:
			if (!BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_274, 6))
			{
				MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_274), 6);
			}
			break;
		case 9:
			if (!BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_274, 7))
			{
				MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_274), 7);
			}
			break;
		case 10:
			if (!BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_274, 8))
			{
				MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_274), 8);
			}
			break;
		case 11:
			if (!BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_274, 9))
			{
				MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_274), 9);
			}
			break;
		case 12:
			if (!BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_274, 10))
			{
				MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_274), 10);
			}
			break;
		case 13:
			if (!BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_274, 11))
			{
				MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_274), 11);
			}
			break;
		case 14:
			if (!BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_274, 12))
			{
				MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_274), 12);
			}
			break;
		default:
			break;
	}
}

int func_540()//Position - 0x4D9CC4
{
	switch (Global_4718592.f_169366.f_3)
	{
		case 0:
			return 1;
		case 1:
			return 2;
		case 2:
			return 3;
		case 3:
			return 4;
		case 4:
			return 5;
		case 5:
			return 6;
		case 6:
			return 7;
		case 7:
			return 8;
		case 8:
			return 9;
		case 9:
			return 10;
		case 10:
			return 11;
		case 11:
			return 12;
		case 12:
			return 13;
		case 13:
			return 14;
		default:
	}
	return 0;
}

void func_541(int iParam0, int iParam1, int iParam2)//Position - 0x4D9D70
{
	Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_273 = 0;
	switch (iParam0)
	{
		case 1:
			if (!BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_273, 9))
			{
				MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_273), 9);
			}
			break;
		case 4:
			if (!BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_273, 6))
			{
				MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_273), 6);
			}
			break;
		default:
			break;
	}
	switch (iParam1)
	{
		case 4:
			if (!BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_273, 7))
			{
				MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_273), 7);
			}
			break;
		case 3:
			if (!BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_273, 1))
			{
				MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_273), 1);
			}
			break;
		case 2:
			if (!BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_273, 4))
			{
				MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_273), 4);
			}
			break;
		case 6:
			if (!BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_273, 19))
			{
				MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_273), 19);
			}
			break;
		case 5:
			if (!BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_273, 16))
			{
				MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_273), 16);
			}
			break;
		default:
			break;
	}
	switch (iParam2)
	{
		case 5:
			if (!BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_273, 17))
			{
				MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_273), 17);
			}
			break;
		case 4:
			if (!BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_273, 8))
			{
				MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_273), 8);
			}
			break;
		case 0:
			if (!BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_273, 23))
			{
				MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_273), 23);
			}
			break;
		default:
			break;
	}
}

int func_542(int iParam0)//Position - 0x4DA0A4
{
	switch (iParam0)
	{
		case 0:
			switch (Global_4718592.f_169366)
			{
				case 0:
					return 4;
				case 1:
					return 1;
				default:
			}
			break;
		case 1:
			switch (Global_4718592.f_169366.f_1)
			{
				case 0:
					return 5;
				case 1:
					return 4;
				case 2:
					return 2;
				case 3:
					return 3;
				default:
			}
			break;
		case 2:
			if (Global_4718592.f_169366.f_1 == 3)
			{
				return 0;
			}
			switch (Global_4718592.f_169366.f_2)
			{
				case 0:
					return 5;
				case 1:
					return 4;
				case 2:
					return 2;
				case 3:
					return 7;
				default:
			}
			break;
	}
	return 0;
}

int func_543()//Position - 0x4DA4B6
{
	int iVar0;
	iVar0 = 50;
	return iVar0;
}

bool func_544()//Position - 0x4DB76F
{
	return (__LIB_0__::func_991(joaat("MPPLY_HEISTNODEATHPROGREITSET")) > 0 && !__LIB_13__::func_412(19));
}

bool func_545()//Position - 0x4DB7AC
{
	return (__LIB_0__::func_991(joaat("MPPLY_HEISTFLOWORDERPROGRESS")) > 0 && !__LIB_13__::func_412(17));
}

int func_546(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x4DB837
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	if (!__LIB_13__::func_412(17))
	{
		iVar0 = __LIB_0__::func_991(joaat("MPPLY_HEISTFLOWORDERPROGRESS"));
	}
	else
	{
		iVar0 = __LIB_0__::func_991(joaat("MPPLY_HEISTNODEATHPROGREITSET"));
	}
	iParam1 = (iParam1 + iParam3);
	fVar2 = (SYSTEM::POW(2f, SYSTEM::TO_FLOAT(iParam1)) - 1f);
	fVar3 = (SYSTEM::POW(2f, SYSTEM::TO_FLOAT(iParam3)) - 1f);
	fVar4 = (SYSTEM::POW(2f, SYSTEM::TO_FLOAT(iParam0)) - 1f);
	fVar5 = (SYSTEM::POW(2f, SYSTEM::TO_FLOAT(iParam2)) - 1f);
	if (IntToFloat(iVar0) >= fVar2 || IntToFloat(iVar0) < fVar3)
	{
		iVar1 = 1;
	}
	else if (fVar4 < fVar2 && iParam0 >= iParam3)
	{
		if (IntToFloat(iVar0) >= fVar5)
		{
			if (iParam0 >= iParam2)
			{
				iVar1 = 1;
			}
		}
		else if (iParam0 < iParam2)
		{
			iVar1 = 1;
		}
	}
	return iVar1;
}

void func_547()//Position - 0x4DCDA9
{
	Global_2714762.f_834 = 1;
}

void func_548(int iParam0, bool bParam1)//Position - 0x4FB836
{
	Global_1659905 = iParam0;
	if (!bParam1)
	{
		Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_96 = iParam0;
	}
}

void func_549(int iParam0, int iParam1)//Position - 0x4FEBCE
{
	if (iParam0 <= -1)
	{
		return;
	}
	Global_2715699.f_6300[iParam0] = iParam1;
}

void func_550(int iParam0, int iParam1)//Position - 0x4FEED9
{
	if (iParam0 <= -1)
	{
		return;
	}
	Global_2715699.f_6295[iParam0] = iParam1;
}

int func_551()//Position - 0x501B2E
{
	int iVar0;
	int iVar1;
	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 < Global_4980736.f_36355)
	{
		if (Global_4980736.f_36356[iVar1 /*134*/].f_7 != 0)
		{
			if (Global_4980736.f_36356[iVar1 /*134*/].f_7 == joaat("hei_prop_heist_apecrate"))
			{
				STREAMING::REQUEST_MODEL(joaat("A_C_Rhesus"));
				STREAMING::REQUEST_ANIM_DICT("missfbi5ig_30Monkeys");
				if (!__LIB_2__::func_18(Global_4718592.f_168757))
				{
					AUDIO::REQUEST_SCRIPT_AUDIO_BANK("FBI_05_MONKEY_SCREAMS_01", false, -1);
				}
				AUDIO::REQUEST_SCRIPT_AUDIO_BANK("FBI_05_MONKEYS", false, -1);
			}
			if (Global_4980736.f_36356[iVar1 /*134*/].f_7 == joaat("stt_prop_stunt_tube_speed"))
			{
				if (!__LIB_0__::func_799(joaat("stt_prop_stunt_tube_speeda")) && !__LIB_0__::func_799(joaat("stt_prop_stunt_tube_speedb")))
				{
					iVar0 = 0;
				}
			}
			if (!__LIB_0__::func_799(Global_4980736.f_36356[iVar1 /*134*/].f_7))
			{
				iVar0 = 0;
			}
			if (Global_4980736.f_36356[iVar1 /*134*/].f_7 == joaat("xm_prop_x17_barge_01"))
			{
				if (!__LIB_0__::func_799(joaat("xm_prop_x17_barge_col_01")) && !__LIB_0__::func_799(joaat("xm_prop_x17_barge_col_02")))
				{
					iVar0 = 0;
				}
			}
			if (Global_4980736.f_36356[iVar1 /*134*/].f_7 == joaat("hei_prop_heist_apecrate"))
			{
				if ((!STREAMING::HAS_MODEL_LOADED(joaat("A_C_Rhesus")) || !STREAMING::HAS_ANIM_DICT_LOADED("missfbi5ig_30Monkeys")) || !AUDIO::REQUEST_SCRIPT_AUDIO_BANK("FBI_05_MONKEYS", false, -1))
				{
					iVar0 = 0;
				}
				if (!__LIB_2__::func_18(Global_4718592.f_168757))
				{
					if (!AUDIO::REQUEST_SCRIPT_AUDIO_BANK("FBI_05_MONKEY_SCREAMS_01", false, -1))
					{
						iVar0 = 0;
					}
				}
			}
		}
		iVar1++;
	}
	return iVar0;
}

int func_552()//Position - 0x502A89
{
	int iVar0;
	if (!__LIB_0__::func_625())
	{
		return 1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		Global_1965654[iVar0] = -1;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 61)
	{
		Global_1965849[iVar0] = -1;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 29)
	{
		Global_1965912[iVar0] = -1;
		iVar0++;
	}
	Global_1965846 = -1;
	if (__LIB_1__::func_135(Global_4718592.f_168757))
	{
		AUDIO::REQUEST_SCRIPT_AUDIO_BANK("DLC_AWXM2018/AJ_Interrupts", false, -1);
	}
	else if (__LIB_1__::func_134(Global_4718592.f_168757))
	{
		AUDIO::REQUEST_SCRIPT_AUDIO_BANK("DLC_AWXM2018/AV_Interrupts", false, -1);
	}
	else if (__LIB_1__::func_133(Global_4718592.f_168757))
	{
		AUDIO::REQUEST_SCRIPT_AUDIO_BANK("DLC_AWXM2018/AV_Interrupts", false, -1);
	}
	else if (__LIB_1__::func_132(Global_4718592.f_168757))
	{
		AUDIO::REQUEST_SCRIPT_AUDIO_BANK("DLC_AWXM2018/AV_Interrupts", false, -1);
	}
	else if (__LIB_1__::func_131(Global_4718592.f_168757))
	{
		AUDIO::REQUEST_SCRIPT_AUDIO_BANK("DLC_AWXM2018/AJ_Interrupts", false, -1);
	}
	else if (__LIB_1__::func_130())
	{
		AUDIO::REQUEST_SCRIPT_AUDIO_BANK("DLC_AWXM2018/AJ_Interrupts", false, -1);
	}
	else if (__LIB_1__::func_129())
	{
		AUDIO::REQUEST_SCRIPT_AUDIO_BANK("DLC_AWXM2018/AJ_Interrupts", false, -1);
	}
	else if (__LIB_1__::func_128(Global_4718592.f_168757))
	{
		if (Global_1659814 == 1)
		{
			AUDIO::REQUEST_SCRIPT_AUDIO_BANK("DLC_AWXM2018/AV_Interrupts", false, -1);
		}
		else
		{
			AUDIO::REQUEST_SCRIPT_AUDIO_BANK("DLC_AWXM2018/AJ_Interrupts", false, -1);
		}
	}
	else if (__LIB_1__::func_127(Global_4718592.f_168757))
	{
		if (Global_1659814 == 1)
		{
			AUDIO::REQUEST_SCRIPT_AUDIO_BANK("DLC_AWXM2018/AJ_Interrupts", false, -1);
		}
		else
		{
			AUDIO::REQUEST_SCRIPT_AUDIO_BANK("DLC_AWXM2018/AV_Interrupts", false, -1);
		}
	}
	return 1;
}

void func_553()//Position - 0x503661
{
	if (Global_2715699.f_6623 >= 0f)
	{
		if (Global_2715699.f_6624)
		{
			PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 46, true);
		}
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), Global_2715699.f_6623);
	}
}

void func_554(int iParam0, struct<3> Param1, int iParam2, bool bParam3)//Position - 0x50385A
{
	if (!bParam3)
	{
		if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iParam0))
		{
			OBJECT::REMOVE_DOOR_FROM_SYSTEM(iParam0, 0);
		}
		return;
	}
	if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iParam0))
	{
		OBJECT::ADD_DOOR_TO_SYSTEM(iParam0, iParam2, Param1, false, false, false);
	}
	if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iParam0))
	{
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iParam0, 0f, false, false);
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iParam0, 1, false, false);
	}
}

int func_555(var uParam0, var uParam1, var uParam2)//Position - 0x506508
{
	if (CAM::DOES_CAM_EXIST(*uParam1))
	{
		CAM::DESTROY_CAM(*uParam1, false);
	}
	if (CAM::DOES_CAM_EXIST(*uParam2))
	{
		CAM::DESTROY_CAM(*uParam2, false);
	}
	*uParam1 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", false);
	*uParam2 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", false);
	if (CAM::DOES_CAM_EXIST(*uParam1) && CAM::DOES_CAM_EXIST(*uParam2))
	{
		CAM::SET_CAM_COORD(*uParam1, *uParam0);
		CAM::SET_CAM_ROT(*uParam1, uParam0->f_3, 2);
		CAM::SET_CAM_FOV(*uParam1, uParam0->f_12);
		CAM::SET_CAM_COORD(*uParam2, uParam0->f_6);
		CAM::SET_CAM_ROT(*uParam2, uParam0->f_6.f_3, 2);
		CAM::SET_CAM_FOV(*uParam2, uParam0->f_12);
		CAM::SHAKE_CAM(*uParam1, "HAND_SHAKE", uParam0->f_13);
		CAM::SHAKE_CAM(*uParam2, "HAND_SHAKE", uParam0->f_13);
		if (uParam0->f_14 > 0.1f)
		{
			CAM::SET_CAM_ACTIVE_WITH_INTERP(*uParam2, *uParam1, SYSTEM::ROUND((uParam0->f_14 * 1000f)), 1, 1);
		}
		else
		{
			CAM::SET_CAM_ACTIVE(*uParam1, true);
		}
		CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
		return 1;
	}
	return 0;
}

void func_556(int* iParam0)//Position - 0x506950
{
	MISC::SET_BIT(iParam0, 0);
}

int func_557(int iParam0)//Position - 0x50D496
{
	switch (__LIB_0__::func_3())
	{
		case 0:
			if (!__LIB_10__::func_225(iParam0))
			{
				if (Global_1853348[iParam0 /*834*/] == 2 || Global_1853348[iParam0 /*834*/] == 8)
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_558(bool bParam0)//Position - 0x510CDA
{
	if (Global_1892703[bParam0 /*599*/] == 236 || Global_1892703[bParam0 /*599*/] == 150)
	{
		return __LIB_1__::func_17(bParam0);
	}
	return 0;
}

int func_559(bool bParam0)//Position - 0x5137E9
{
	switch (__LIB_10__::func_775(bParam0))
	{
		case 20:
		case 21:
		case 24:
		case 26:
		case 27:
		case 29:
		case 28:
		case 30:
		case 31:
		case 32:
		case 35:
		case 25:
		case 33:
		case 34:
			return 1;
		default:
	}
	return 0;
}

int func_560(int iParam0)//Position - 0x5175C2
{
	if (Global_1937518.f_57 == iParam0)
	{
		return 1;
	}
	return 0;
}

void func_561(int iParam0, char* sParam1, bool bParam2)//Position - 0x517D87
{
	int iVar0;
	iVar0 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(__LIB_7__::func_890(iParam0), __LIB_7__::func_952(iParam0));
	if (INTERIOR::IS_VALID_INTERIOR(iVar0))
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
		{
			if (!INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iVar0, sParam1))
			{
				INTERIOR::ACTIVATE_INTERIOR_ENTITY_SET(iVar0, sParam1);
			}
		}
	}
	if (bParam2)
	{
		INTERIOR::REFRESH_INTERIOR(iVar0);
	}
}

int func_562(int iParam0)//Position - 0x51DC81
{
	switch (iParam0)
	{
		case 189:
			return BitTest(Global_4718592.f_162496, 0);
		case 3:
			return BitTest(Global_4718592.f_162496, 1);
		case 23:
			return BitTest(Global_4718592.f_162496, 2);
		case 20:
			return BitTest(Global_4718592.f_162496, 3);
		case 45:
			return BitTest(Global_4718592.f_162496, 5);
		case 137:
			return BitTest(Global_4718592.f_162496, 6);
		case 138:
			return BitTest(Global_4718592.f_162496, 7);
		case 139:
			return BitTest(Global_4718592.f_162496, 8);
		case 140:
			return BitTest(Global_4718592.f_162496, 9);
		case 22:
			return BitTest(Global_4718592.f_162496, 10);
		case 141:
			return BitTest(Global_4718592.f_162496, 11);
		case 142:
			return BitTest(Global_4718592.f_162496, 12);
		case 143:
			return BitTest(Global_4718592.f_162496, 13);
		case 144:
			return BitTest(Global_4718592.f_162496, 14);
		case 145:
			return BitTest(Global_4718592.f_162496, 15);
		case 146:
			return BitTest(Global_4718592.f_162496, 16);
		case 147:
			return BitTest(Global_4718592.f_162496, 17);
		case 148:
			return BitTest(Global_4718592.f_162496, 18);
		case 149:
			return BitTest(Global_4718592.f_162496, 19);
		case 150:
			return BitTest(Global_4718592.f_162496, 20);
		case 151:
			return BitTest(Global_4718592.f_162496, 21);
		case 152:
			return BitTest(Global_4718592.f_162496, 22);
		case 153:
			return BitTest(Global_4718592.f_162496, 23);
		case 154:
			return BitTest(Global_4718592.f_162496, 24);
		case 155:
			return BitTest(Global_4718592.f_162496, 25);
		case 156:
			return BitTest(Global_4718592.f_162496, 26);
		case 157:
			return BitTest(Global_4718592.f_162496, 27);
		case 158:
			return BitTest(Global_4718592.f_162496, 28);
		case 159:
			return BitTest(Global_4718592.f_162496, 29);
		case 160:
			return BitTest(Global_4718592.f_162496, 30);
		case 161:
			return BitTest(Global_4718592.f_162496, 31);
		case 162:
			return BitTest(Global_4718592.f_162497, 0);
		case 163:
			return BitTest(Global_4718592.f_162497, 1);
		case 13:
			return BitTest(Global_4718592.f_162497, 2);
		case 12:
			return BitTest(Global_4718592.f_162497, 3);
		case 167:
			return BitTest(Global_4718592.f_162497, 5);
		case 168:
			return BitTest(Global_4718592.f_162497, 6);
		case 171:
			return BitTest(Global_4718592.f_162497, 7);
		case 174:
			return BitTest(Global_4718592.f_162497, 8);
		case 177:
			return BitTest(Global_4718592.f_162497, 9);
		case 182:
			return BitTest(Global_4718592.f_162497, 10);
		case 195:
			return BitTest(Global_4718592.f_162497, 13);
		case 223:
			return BitTest(Global_4718592.f_162498, 15);
		case 196:
			return BitTest(Global_4718592.f_162497, 14);
		case 197:
			return BitTest(Global_4718592.f_162497, 15);
		case 198:
			return BitTest(Global_4718592.f_162497, 16);
		case 199:
			return BitTest(Global_4718592.f_162497, 17);
		case 200:
			return BitTest(Global_4718592.f_162497, 18);
		case 201:
			return BitTest(Global_4718592.f_162497, 19);
		case 202:
			return BitTest(Global_4718592.f_162497, 20);
		case 203:
			return BitTest(Global_4718592.f_162497, 21);
		case 204:
			return BitTest(Global_4718592.f_162497, 22);
		case 205:
			return BitTest(Global_4718592.f_162497, 23);
		case 206:
			return BitTest(Global_4718592.f_162497, 25);
		case 207:
			return BitTest(Global_4718592.f_162497, 26);
		case 208:
			return BitTest(Global_4718592.f_162497, 27);
		case 209:
			return BitTest(Global_4718592.f_162497, 28);
		case 210:
			return BitTest(Global_4718592.f_162497, 29);
		case 211:
			return BitTest(Global_4718592.f_162497, 30);
		case 212:
			return BitTest(Global_4718592.f_162498, 3);
		case 213:
			return BitTest(Global_4718592.f_162498, 4);
		case 193:
			return BitTest(Global_4718592.f_162497, 12);
		case 214:
			return BitTest(Global_4718592.f_162498, 5);
		case 215:
			return BitTest(Global_4718592.f_162498, 6);
		case 216:
			return BitTest(Global_4718592.f_162498, 7);
		case 217:
			return BitTest(Global_4718592.f_162498, 8);
		case 218:
			return BitTest(Global_4718592.f_162498, 9);
		case 219:
			return BitTest(Global_4718592.f_162498, 10);
		case 221:
			return BitTest(Global_4718592.f_162498, 11);
		case 222:
			return BitTest(Global_4718592.f_162498, 12);
		case 224:
			return BitTest(Global_4718592.f_162495, 21);
		case 225:
			return BitTest(Global_4718592.f_162498, 20);
		case 14:
			return BitTest(Global_4718592.f_162498, 21);
		case 226:
			return BitTest(Global_4718592.f_162498, 22);
		case 227:
			return BitTest(Global_4718592.f_162498, 23);
		case 70:
			return BitTest(Global_4718592.f_162498, 24);
		default:
	}
	return 0;
}

void func_563(int iParam0)//Position - 0x521BE4
{
	switch (iParam0)
	{
		case 198:
			STREAMING::REQUEST_IPL("vw_casino_main");
			break;
		case 199:
			STREAMING::REQUEST_IPL("vw_casino_carpark");
			break;
		case 200:
			STREAMING::REQUEST_IPL("vw_casino_penthouse");
			break;
		case 201:
			STREAMING::REQUEST_IPL("vw_casino_garage");
			break;
		case 227:
			STREAMING::REQUEST_IPL("xs_arena_interior_mod_2");
			break;
		case 70:
			STREAMING::REQUEST_IPL("apa_v_mp_h_04_b");
			break;
	}
}

void func_564()//Position - 0x525B45
{
	if (BitTest(Global_2715699.f_6307, 0))
	{
		STREAMING::REMOVE_IPL("hei_carrier");
		STREAMING::REMOVE_IPL("hei_Carrier_int1");
		STREAMING::REMOVE_IPL("hei_Carrier_int2");
		STREAMING::REMOVE_IPL("hei_Carrier_int3");
		STREAMING::REMOVE_IPL("hei_Carrier_int4");
		STREAMING::REMOVE_IPL("hei_Carrier_int5");
		STREAMING::REMOVE_IPL("hei_Carrier_int6");
		STREAMING::REMOVE_IPL("hei_carrier_LODLights");
		AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_HEI_AIRCRAFT_CARRIER", false, true);
	}
	if (BitTest(Global_2715699.f_6307, 2))
	{
		STREAMING::REMOVE_IPL("smboat");
	}
	if (BitTest(Global_2715699.f_6307, 3))
	{
		STREAMING::REMOVE_IPL("hei_yacht_heist");
		STREAMING::REMOVE_IPL("hei_yacht_heist_enginrm");
		STREAMING::REMOVE_IPL("hei_yacht_heist_Lounge");
		STREAMING::REMOVE_IPL("hei_yacht_heist_Bridge");
		STREAMING::REMOVE_IPL("hei_yacht_heist_Bar");
		STREAMING::REMOVE_IPL("hei_yacht_heist_Bedrm");
		AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_DLC_HEI_MILO_YACHT_ZONES", false, true);
	}
	if (BitTest(Global_2715699.f_6307, 7))
	{
		STREAMING::REMOVE_IPL("gr_Heist_Yacht2");
		STREAMING::REMOVE_IPL("gr_Heist_Yacht2_Bridge");
		STREAMING::REMOVE_IPL("gr_Heist_Yacht2_Bar");
		STREAMING::REMOVE_IPL("gr_Heist_Yacht2_Bedrm");
		STREAMING::REMOVE_IPL("gr_Heist_Yacht2_Lounge");
		STREAMING::REMOVE_IPL("gr_Heist_Yacht2_enginrm");
	}
	if (BitTest(Global_2715699.f_6307, 5))
	{
		STREAMING::REMOVE_IPL("lr_cs6_08_grave_open");
		STREAMING::REQUEST_IPL("lr_cs6_08_grave_closed");
	}
	if (BitTest(Global_2715699.f_6307, 6))
	{
		STREAMING::REMOVE_IPL("CS1_02_cf_onmission1");
		STREAMING::REMOVE_IPL("CS1_02_cf_onmission2");
		STREAMING::REMOVE_IPL("CS1_02_cf_onmission3");
		STREAMING::REMOVE_IPL("CS1_02_cf_onmission4");
	}
	if (BitTest(Global_2715699.f_6307, 4))
	{
		STREAMING::REMOVE_IPL("hei_yacht_heist_DistantLights");
		STREAMING::REMOVE_IPL("hei_yacht_heist_LODLights");
	}
	if (BitTest(Global_2715699.f_6307, 8))
	{
		Global_2824571.f_181 = 1;
	}
	Global_2715699.f_6307 = 0;
}

float func_565(int iParam0, float fParam1)//Position - 0x526511
{
	float fVar0;
	fVar0 = __LIB_21__::func_629(iParam0);
	fParam1 = (fParam1 + fVar0);
	while (fParam1 < 0f)
	{
		fParam1 = (fParam1 + 360f);
	}
	while (fParam1 >= 360f)
	{
		fParam1 = (fParam1 - 360f);
	}
	return fParam1;
}

Vector3 func_566(int iParam0, struct<3> Param1)//Position - 0x526556
{
	return OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(__LIB_21__::func_626(iParam0), __LIB_21__::func_629(iParam0), Param1);
}

bool func_567()//Position - 0x526724
{
	return STREAMING::HAS_MODEL_LOADED(__LIB_21__::func_614());
}

int func_568(int iParam0)//Position - 0x526734
{
	int iVar0;
	int iVar1;
	iVar0 = 1;
	iVar1 = __LIB_21__::func_616(iParam0, 0);
	if (!iVar1 == 0)
	{
		if (!STREAMING::HAS_MODEL_LOADED(iVar1))
		{
			iVar0 = 0;
		}
	}
	if (!STREAMING::HAS_MODEL_LOADED(__LIB_21__::func_615()))
	{
		iVar0 = 0;
	}
	return iVar0;
}

int func_569(int iParam0, int iParam1)//Position - 0x52676E
{
	int iVar0;
	iVar0 = __LIB_21__::func_617(iParam0, iParam1);
	if (!iVar0 == 0)
	{
		return STREAMING::HAS_MODEL_LOADED(iVar0);
	}
	return 1;
}

int func_570(int iParam0, int iParam1)//Position - 0x526792
{
	int iVar0;
	iVar0 = __LIB_21__::func_618(iParam0, iParam1);
	if (!iVar0 == 0)
	{
		return STREAMING::HAS_MODEL_LOADED(iVar0);
	}
	return 1;
}

int func_571(int iParam0)//Position - 0x5267B6
{
	if (iParam0 > 0)
	{
		return STREAMING::HAS_MODEL_LOADED(__LIB_21__::func_619());
	}
	return 1;
}

int func_572(int iParam0)//Position - 0x5267D0
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (__LIB_21__::func_621(iParam0, iVar0))
		{
			iVar1 = __LIB_21__::func_620(iParam0, iVar0);
			if (!iVar1 == 0)
			{
				if (!STREAMING::HAS_MODEL_LOADED(iVar1))
				{
					return 0;
				}
			}
		}
		iVar0++;
	}
	return 1;
}

void func_573()//Position - 0x526850
{
	STREAMING::REQUEST_MODEL(__LIB_21__::func_614());
}

void func_574(int iParam0)//Position - 0x526860
{
	int iVar0;
	iVar0 = __LIB_21__::func_616(iParam0, 0);
	if (!iVar0 == 0)
	{
		STREAMING::REQUEST_MODEL(iVar0);
	}
	STREAMING::REQUEST_MODEL(__LIB_21__::func_615());
}

void func_575(int iParam0, int iParam1)//Position - 0x526887
{
	int iVar0;
	iVar0 = __LIB_21__::func_617(iParam0, iParam1);
	if (!iVar0 == 0)
	{
		STREAMING::REQUEST_MODEL(iVar0);
	}
}

void func_576(int iParam0, int iParam1)//Position - 0x5268A7
{
	int iVar0;
	iVar0 = __LIB_21__::func_618(iParam0, iParam1);
	if (!iVar0 == 0)
	{
		STREAMING::REQUEST_MODEL(iVar0);
	}
}

void func_577(int iParam0)//Position - 0x5268C7
{
	if (iParam0 > 0)
	{
		STREAMING::REQUEST_MODEL(__LIB_21__::func_619());
	}
}

void func_578(int iParam0)//Position - 0x5268DD
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (__LIB_21__::func_621(iParam0, iVar0))
		{
			iVar1 = __LIB_21__::func_620(iParam0, iVar0);
			if (!iVar1 == 0)
			{
				STREAMING::REQUEST_MODEL(iVar1);
			}
		}
		iVar0++;
	}
}

void func_579(struct<7> Param0, var uParam1, var uParam2, int iParam3)//Position - 0x52E504
{
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Param0.f_4))
	{
		Global_1966438[iParam3] = NETWORK::NET_TO_OBJ(Param0.f_4);
	}
	if (Param0.f_5)
	{
		MISC::SET_BIT(&(Global_1966339[iParam3]), 0);
		MISC::CLEAR_BIT(&(Global_1966339[iParam3]), 2);
		MISC::CLEAR_BIT(&(Global_1966339[iParam3]), 1);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_1966339[iParam3]), 0);
		MISC::CLEAR_BIT(&(Global_1966339[iParam3]), 1);
		MISC::SET_BIT(&(Global_1966339[iParam3]), 2);
	}
	if (Param0.f_6)
	{
		MISC::SET_BIT(&(Global_1966339[iParam3]), 3);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_1966339[iParam3]), 3);
	}
}

bool func_580(int iParam0, bool bParam1)//Position - 0x5305D2
{
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::GET_PLAYER_PED(iParam0), false) || !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::GET_PLAYER_PED(bParam1), false))
	{
		return 0;
	}
	return PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(iParam0), false) == PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(bParam1), false);
}

char* func_581(int iParam0)//Position - 0x532701
{
	switch (iParam0)
	{
		case 0:
			return "Airhorn";
		case 1:
			return "Roar";
		case 2:
			return "Guitar";
		case 3:
			return "Guitar_2";
		case 4:
			return "Horn";
		case 5:
			return "Thunder";
		case 6:
			return "Klaxon";
		default:
	}
	return "";
}

void func_582()//Position - 0x561967
{
	int iVar0;
	iVar0 = Global_4718592.f_162947 ^ 255;
	Global_1836145 = (Global_1836145 && iVar0);
}

void func_583(int iParam0)//Position - 0x561CFB
{
	Global_2715699.f_6310 = iParam0;
}

void func_584(bool bParam0)//Position - 0x561DB2
{
	bool bVar0;
	bVar0 = false;
	while (bVar0 <= (Global_2714762.f_43.f_427 - 1))
	{
		if ((BitTest(Global_2714762.f_43.f_429, bVar0) && ENTITY::DOES_ENTITY_EXIST(Global_2714762.f_43.f_430[bVar0])) && !PED::IS_PED_INJURED(Global_2714762.f_43.f_430[bVar0]))
		{
			if (bParam0)
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(Global_2714762.f_43.f_430[bVar0]))
				{
					if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(Global_2714762.f_43.f_430[bVar0]))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_2714762.f_43.f_430[bVar0], false, true);
						PED::DELETE_PED(&(Global_2714762.f_43.f_430[bVar0]));
					}
				}
			}
			else
			{
				NETWORK::SET_ENTITY_LOCALLY_INVISIBLE(Global_2714762.f_43.f_430[bVar0]);
			}
		}
		bVar0++;
	}
	bVar0 = false;
	while (bVar0 <= (Global_2714762.f_43.f_212 - 1))
	{
		if (BitTest(Global_2714762.f_43.f_214, bVar0) && ENTITY::DOES_ENTITY_EXIST(Global_2714762.f_43.f_215[bVar0]))
		{
			if (bParam0)
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(Global_2714762.f_43.f_215[bVar0]))
				{
					if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(Global_2714762.f_43.f_215[bVar0]))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_2714762.f_43.f_215[bVar0], false, true);
						OBJECT::DELETE_OBJECT(&(Global_2714762.f_43.f_215[bVar0]));
					}
				}
			}
			else
			{
				NETWORK::SET_ENTITY_LOCALLY_INVISIBLE(Global_2714762.f_43.f_215[bVar0]);
			}
		}
		bVar0++;
	}
	bVar0 = false;
	while (bVar0 <= (Global_2714762.f_43.f_136 - 1))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_2714762.f_43.f_140[bVar0]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_2714762.f_43.f_140[bVar0], false))
		{
			if (BitTest(Global_2714762.f_43.f_138, bVar0))
			{
				if (bParam0)
				{
					if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(Global_2714762.f_43.f_140[bVar0]))
					{
						if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(Global_2714762.f_43.f_140[bVar0]))
						{
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_2714762.f_43.f_140[bVar0], false, true);
							VEHICLE::DELETE_VEHICLE(&(Global_2714762.f_43.f_140[bVar0]));
						}
					}
				}
				else
				{
					NETWORK::SET_ENTITY_LOCALLY_INVISIBLE(Global_2714762.f_43.f_140[bVar0]);
				}
			}
		}
		bVar0++;
	}
	bVar0 = false;
	while (bVar0 <= (Global_2714762.f_43.f_61 - 1))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_2714762.f_43.f_64[bVar0]))
		{
			if (BitTest(Global_2714762.f_43.f_63, bVar0))
			{
				if (bParam0)
				{
					if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(Global_2714762.f_43.f_64[bVar0]))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_2714762.f_43.f_64[bVar0], false, true);
						ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(Global_2714762.f_43.f_64[bVar0]));
					}
				}
				else
				{
					ENTITY::SET_ENTITY_VISIBLE(Global_2714762.f_43.f_64[bVar0], false, false);
				}
			}
		}
		bVar0++;
	}
}

int func_585()//Position - 0x5621D3
{
	return Global_2715699.f_1.f_837;
}

void func_586(int* iParam0)//Position - 0x565F2E
{
	GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(iParam0);
}

void func_587()//Position - 0x5696BB
{
	if (Global_1965529)
	{
		Global_1965529 = 0;
	}
}

int func_588(int iParam0)//Position - 0x5696CF
{
	int iVar0;
	if (iParam0 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < 21)
	{
		if (Global_262145.f_6086[iVar0] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_589(var uParam0)//Position - 0x56A3CD
{
	Global_1836583 = uParam0;
}

void func_590()//Position - 0x56C5D4
{
	Global_2715699.f_3813 = 0;
	Global_2715699.f_3813.f_1 = 0;
	Global_2715699.f_3813.f_2 = 0;
	Global_2715699.f_3813.f_3 = 0;
	Global_2715699.f_3813.f_4 = 0;
	Global_2715699.f_3813.f_5 = 0;
	Global_2715699.f_3813.f_6 = 0;
	Global_2715699.f_3813.f_7 = 0;
	Global_2715699.f_3813.f_8 = 0;
	Global_2715699.f_3813.f_9 = 0;
}

bool func_591()//Position - 0x56C9F8
{
	return Global_1965623;
}

bool func_592()//Position - 0x56DA5F
{
	return BitTest(Global_2714762.f_2, 31);
}

void func_593()//Position - 0x56DDD5
{
	struct<8> Var0;
	Global_1941652.f_1.f_16 = { Var0 };
}

void func_594(bool bParam0)//Position - 0x1350
{
	if (!__LIB_0__::func_625())
	{
		return;
	}
	if (bParam0 < 32)
	{
		if (!BitTest(Global_1965648, bParam0))
		{
			MISC::SET_BIT(&Global_1965648, bParam0);
		}
	}
	else if (!BitTest(Global_1965649, (bParam0 - 32)))
	{
		MISC::SET_BIT(&Global_1965649, (bParam0 - 32));
	}
}

void func_595(bool bParam0)//Position - 0x13FB
{
	if (!__LIB_0__::func_625())
	{
		return;
	}
	if (bParam0 < 32)
	{
		if (!BitTest(Global_1965630, bParam0))
		{
			MISC::SET_BIT(&Global_1965630, bParam0);
		}
	}
	else if (!BitTest(Global_1965631, (bParam0 - 32)))
	{
		MISC::SET_BIT(&Global_1965631, (bParam0 - 32));
	}
}

struct<4> func_596()//Position - 0x2848
{
	struct<4> Var0;
	StringCopy(&Var0, "", 16);
	if (__LIB_1__::func_135(Global_4718592.f_168757))
	{
		StringCopy(&Var0, "ARAS_TT_", 16);
	}
	else if (__LIB_1__::func_134(Global_4718592.f_168757))
	{
		StringCopy(&Var0, "ARAS_GM_", 16);
	}
	else if (__LIB_1__::func_133(Global_4718592.f_168757))
	{
		StringCopy(&Var0, "ARAS_DT_", 16);
	}
	else if (__LIB_1__::func_132(Global_4718592.f_168757))
	{
		StringCopy(&Var0, "ARAS_MJ_", 16);
	}
	else if (__LIB_1__::func_131(Global_4718592.f_168757))
	{
		StringCopy(&Var0, "ARAS_CTF_", 16);
	}
	else if (__LIB_1__::func_130())
	{
		StringCopy(&Var0, "ARAS_AC_", 16);
	}
	else if (__LIB_1__::func_129())
	{
		StringCopy(&Var0, "ARAS_DD_", 16);
	}
	else if (__LIB_1__::func_128(Global_4718592.f_168757))
	{
		if (Global_1659814 == 1)
		{
			StringCopy(&Var0, "ARAS_CAT_", 16);
		}
		else
		{
			StringCopy(&Var0, "ARAS_CAR_", 16);
		}
	}
	else if (__LIB_1__::func_127(Global_4718592.f_168757))
	{
		if (Global_1659814 == 1)
		{
			StringCopy(&Var0, "ARAS_PBT_", 16);
		}
		else
		{
			StringCopy(&Var0, "ARAS_PBM_", 16);
		}
	}
	return Var0;
}

struct<4> func_597()//Position - 0x2967
{
	struct<4> Var0;
	StringCopy(&Var0, "", 16);
	if (__LIB_1__::func_135(Global_4718592.f_168757))
	{
		StringCopy(&Var0, "ARASAU", 16);
	}
	else if (__LIB_1__::func_134(Global_4718592.f_168757))
	{
		StringCopy(&Var0, "ARASAU", 16);
	}
	else if (__LIB_1__::func_133(Global_4718592.f_168757))
	{
		StringCopy(&Var0, "ARASAU", 16);
	}
	else if (__LIB_1__::func_132(Global_4718592.f_168757))
	{
		StringCopy(&Var0, "ARASAU", 16);
	}
	else if (__LIB_1__::func_131(Global_4718592.f_168757))
	{
		StringCopy(&Var0, "ARASAU", 16);
	}
	else if (__LIB_1__::func_130())
	{
		StringCopy(&Var0, "ARASAU", 16);
	}
	else if (__LIB_1__::func_129())
	{
		StringCopy(&Var0, "ARASAU", 16);
	}
	else if (__LIB_1__::func_128(Global_4718592.f_168757))
	{
		StringCopy(&Var0, "ARASAU", 16);
	}
	else if (__LIB_1__::func_127(Global_4718592.f_168757))
	{
		StringCopy(&Var0, "ARASAU", 16);
	}
	return Var0;
}

int func_598(bool bParam0)//Position - 0x2B30
{
	if (__LIB_1__::func_135(Global_4718592.f_168757))
	{
		switch (bParam0)
		{
			case 1:
				return 0;
			default:
		}
	}
	else if (__LIB_1__::func_134(Global_4718592.f_168757))
	{
		switch (bParam0)
		{
			case 1:
				return 4;
			default:
		}
	}
	else if (__LIB_1__::func_133(Global_4718592.f_168757))
	{
		switch (bParam0)
		{
			case 1:
				return 0;
			default:
		}
	}
	else if (__LIB_1__::func_132(Global_4718592.f_168757))
	{
		switch (bParam0)
		{
			case 1:
				return 0;
			default:
		}
	}
	else if (__LIB_1__::func_131(Global_4718592.f_168757))
	{
		switch (bParam0)
		{
			case 1:
				return 0;
			default:
		}
	}
	else if (__LIB_1__::func_130())
	{
		switch (bParam0)
		{
			case 1:
				return 0;
			default:
		}
	}
	else if (__LIB_1__::func_129())
	{
		switch (bParam0)
		{
			case 0:
				return 0;
			case 3:
				return 3;
			case 8:
				return 5;
			default:
		}
	}
	else if (__LIB_1__::func_128(Global_4718592.f_168757))
	{
		switch (bParam0)
		{
			case 1:
				return 0;
			default:
		}
	}
	else if (__LIB_1__::func_127(Global_4718592.f_168757))
	{
		switch (bParam0)
		{
			case 1:
				return 0;
			}
		default:
	}
	return 0;
}

int func_599(int iParam0)//Position - 0x2CE5
{
	if (__LIB_1__::func_129())
	{
		switch (iParam0)
		{
			case 5:
				return 3;
			}
		default:
	}
	return 10;
}

int func_600(int iParam0)//Position - 0x2F73
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (iParam0 == 1)
	{
		return 1;
	}
	if (__LIB_1__::func_135(Global_4718592.f_168757))
	{
		if (iParam0 == 2)
		{
			return 1;
		}
	}
	else if (__LIB_1__::func_134(Global_4718592.f_168757))
	{
		if (iParam0 == 3)
		{
			return 1;
		}
	}
	else if (__LIB_1__::func_133(Global_4718592.f_168757))
	{
		if (iParam0 == 3)
		{
			return 1;
		}
	}
	else if (__LIB_1__::func_132(Global_4718592.f_168757))
	{
		if (iParam0 == 3)
		{
			return 1;
		}
	}
	else if (__LIB_1__::func_131(Global_4718592.f_168757))
	{
		if (iParam0 == 2)
		{
			return 1;
		}
	}
	else if (__LIB_1__::func_130())
	{
		if (iParam0 == 2)
		{
			return 1;
		}
	}
	else if (__LIB_1__::func_129())
	{
		if (iParam0 == 2)
		{
			return 1;
		}
	}
	else if (__LIB_1__::func_128(Global_4718592.f_168757))
	{
		if (Global_1659814 == 1)
		{
			if (iParam0 == 3)
			{
				return 1;
			}
		}
		else if (iParam0 == 2)
		{
			return 1;
		}
	}
	else if (__LIB_1__::func_127(Global_4718592.f_168757))
	{
		if (Global_1659814 == 1)
		{
			if (iParam0 == 2)
			{
				return 1;
			}
		}
		else if (iParam0 == 3)
		{
			return 1;
		}
	}
	return 0;
}

void func_601(bool bParam0)//Position - 0x4D7D
{
	if (bParam0)
	{
		if (!__LIB_21__::func_659())
		{
			MISC::SET_BIT(&Global_1958736, 4);
		}
	}
	else if (__LIB_21__::func_659())
	{
		MISC::CLEAR_BIT(&Global_1958736, 4);
	}
}

void func_602(bool bParam0)//Position - 0x4DBC
{
	if (bParam0)
	{
		if (!__LIB_21__::func_660())
		{
			MISC::SET_BIT(&Global_1958736, 5);
		}
	}
	else if (__LIB_21__::func_660())
	{
		MISC::CLEAR_BIT(&Global_1958736, 5);
	}
}

void func_603()//Position - 0xA541
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = SYSTEM::ROUND((Global_4718592.f_170135 * 1000f));
	iVar1 = 3000;
	__LIB_21__::func_669(joaat("WEAPON_ARENA_MACHINE_GUN"), 20, 100, 1128792064, 0.6f, iVar0, iVar1);
	__LIB_21__::func_668(0);
	iVar2 = 1;
	if (Global_4718592.f_170136 == -1)
	{
		iVar2 = 4;
	}
	__LIB_21__::func_667(1, 2, 4, iVar2);
}

void func_604(int iParam0)//Position - 0xA680
{
	__LIB_21__::func_671(iParam0);
	__LIB_21__::func_668(3);
	__LIB_21__::func_667(1, 1, 4, 2);
}

void func_605()//Position - 0xD83D
{
	if (Global_1965572 > -1)
	{
		__LIB_22__::func_347(Global_1965572, 2);
	}
	MISC::CLEAR_BIT(&Global_1965531, 4);
	MISC::CLEAR_BIT(&Global_1965531, 16);
	MISC::CLEAR_BIT(&Global_1965531, 27);
	MISC::CLEAR_BIT(&Global_1965531, 28);
	MISC::CLEAR_BIT(&Global_1965532, 17);
	MISC::CLEAR_BIT(&Global_1965532, 16);
	CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
	if (CAM::DOES_CAM_EXIST(Global_1965538))
	{
		CAM::DESTROY_CAM(Global_1965538, false);
	}
	Global_1965561 = { 0f, 0f, 0f };
	Global_1965549 = { 0f, 0f, 0f };
	Global_1965558 = { 0f, 0f, 0f };
	Global_1965552 = { 0f, 0f, 0f };
	Global_1965555 = { 0f, 0f, 0f };
	Global_1965573 = 0;
	Global_1965572 = 0;
	Global_1965574 = 0f;
	Global_1965578 = 0;
	Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_426 = -1;
	HUD::UNLOCK_MINIMAP_ANGLE();
	HUD::UNLOCK_MINIMAP_POSITION();
	if (HUD::DOES_BLIP_EXIST(Global_1965539))
	{
		HUD::REMOVE_BLIP(&Global_1965539);
	}
	RECORDING::REPLAY_PREVENT_RECORDING_THIS_FRAME();
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("dlc_aw_arena_turret_scene"))
	{
		AUDIO::STOP_AUDIO_SCENE("dlc_aw_arena_turret_scene");
	}
}

void func_606(bool bParam0)//Position - 0xE13A
{
	if (bParam0)
	{
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(MISC::GET_HASH_KEY("AM_MP_RC_VEHICLE")) > 0)
		{
			if (!__LIB_21__::func_686())
			{
				MISC::SET_BIT(&Global_1958736, 0);
			}
		}
	}
	else if (__LIB_21__::func_686())
	{
		MISC::CLEAR_BIT(&Global_1958736, 0);
	}
}

Vector3 func_607(int iParam0, int iParam1)//Position - 0x1053F
{
	float fVar0;
	float fVar1;
	struct<3> Var2;
	float fVar3;
	struct<3> Var4;
	Var2 = { Global_4718592.f_170082[iParam1 /*3*/] };
	fVar3 = Global_4718592.f_170098[iParam1];
	fVar0 = __LIB_21__::func_688();
	fVar1 = __LIB_21__::func_688();
	fVar0 = (fVar0 * IntToFloat(iParam0));
	fVar1 = (fVar1 * IntToFloat((iParam0 / __LIB_4__::func_261())));
	fVar0 = (fVar0 - (IntToFloat(__LIB_4__::func_261()) * fVar1));
	Var4 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Var2, fVar3, fVar0, fVar1, 0f) };
	Var4.f_2 = (Var4.f_2 + 5f);
	MISC::GET_GROUND_Z_FOR_3D_COORD(Var4, &(Var4.f_2), false, false);
	return Var4;
}

Vector3 func_608(var uParam0)//Position - 0x10A67
{
	var uVar0;
	if (__LIB_0__::func_625())
	{
		*uParam0 = 0f;
		return 2819.3f, -3936f, 186f;
	}
	*uParam0 = 0f;
	MISC::GET_GROUND_Z_FOR_3D_COORD(0f, 0f, 0f, &uVar0, false, false);
	return 0f, 0f, uVar0;
}

int func_609(struct<3> Param0, float fParam1, float fParam2, float fParam3, float fParam4)//Position - 0x3F76B
{
	int iVar0;
	bool bVar1;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		bVar1 = iVar0;
		if (!PLAYER::PLAYER_ID() == bVar1)
		{
			if ((__LIB_1__::func_693(bVar1, 1, 1) && __LIB_1__::func_908(bVar1)) && NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), bVar1))
			{
				if (!__LIB_10__::func_813(PLAYER::PLAYER_ID(), bVar1, -2, 0))
				{
					if (__LIB_1__::func_429(__LIB_1__::func_694(bVar1), Param0, fParam1, fParam2, fParam3, fParam4))
					{
						return 1;
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

void func_610(var uParam0, bool bParam1, char* sParam2, int iParam3, int iParam4)//Position - 0x70602
{
	bool bVar0;
	bVar0 = false;
	switch (iParam3)
	{
		case 4:
			bVar0 = __LIB_19__::func_221(&(Global_4718592.f_162543.f_24), iParam4);
			break;
	}
	if (bParam1)
	{
		if (bVar0)
		{
			INTERIOR::ACTIVATE_INTERIOR_ENTITY_SET(*uParam0, sParam2);
		}
		else
		{
			INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(*uParam0, sParam2);
		}
	}
	else
	{
		INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(*uParam0, sParam2);
	}
}

int func_611(bool bParam0)//Position - 0x73B5B
{
	int iVar0;
	int iVar1;
	iVar0 = bParam0;
	if (Global_2681762.f_4[iVar0 /*2*/] == 3)
	{
		return 0;
	}
	iVar1 = Global_2681762.f_4[iVar0 /*2*/].f_1;
	if (iVar1 == -1)
	{
		return 0;
	}
	return __LIB_13__::func_452(iVar1);
}

void func_612()//Position - 0xE4C87
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	iVar0 = __LIB_0__::getGlobal_1574918();
	iVar2 = __LIB_1__::func_14(iVar0);
	iVar3 = MISC::GET_PROFILE_SETTING(iVar2);
	if (BitTest(iVar3, 24))
	{
		MISC::CLEAR_BIT(&iVar3, 24);
		bVar1 = true;
	}
	if (BitTest(iVar3, 25))
	{
		MISC::CLEAR_BIT(&iVar3, 25);
		bVar1 = true;
	}
	if (BitTest(iVar3, 26))
	{
		MISC::CLEAR_BIT(&iVar3, 26);
		bVar1 = true;
	}
	if (bVar1)
	{
		STATS::SET_FREEMODE_PROLOGUE_DONE(iVar3, iVar0);
	}
}

int func_613(int iParam0, int iParam1)//Position - 0xE4F91
{
	if (iParam0 != __LIB_0__::func_162())
	{
		switch (iParam1)
		{
			case 0:
				return BitTest(Global_1888862[iParam0 /*120*/].f_38.f_26, 3);
			case 1:
				return BitTest(Global_1888862[iParam0 /*120*/].f_38.f_26, 4);
			case 2:
				return BitTest(Global_1888862[iParam0 /*120*/].f_38.f_26, 5);
			}
		default:
	}
	return 0;
}

int func_614(bool bParam0, bool bParam1)//Position - 0xF9834
{
	if (bParam1)
	{
		return Global_1659905;
	}
	if (bParam0 != __LIB_0__::func_162())
	{
		return Global_1853348[bParam0 /*834*/].f_96;
	}
	return 0;
}

var func_615(bool bParam0)//Position - 0xFB46B
{
	return __LIB_1__::func_136(bParam0);
}

int func_616()//Position - 0xFC17B
{
	int iVar0;
	var uVar1;
	iVar0 = 0;
	uVar1 = Global_1659747[__LIB_1__::func_27(-1)];
	iVar0 = BitTest(uVar1, 9);
	if (iVar0 != __LIB_2__::func_909(PLAYER::PLAYER_ID()))
	{
	}
	return iVar0;
}

bool func_617()//Position - 0xFD7C0
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return __LIB_3__::func_719();
	}
	return __LIB_13__::func_524(Global_4718592.f_116524);
}

int func_618(bool bParam0)//Position - 0x12FFDC
{
	if (__LIB_12__::func_568(bParam0) == 236 || __LIB_12__::func_568(bParam0) == 150)
	{
		return __LIB_1__::func_958(bParam0);
	}
	return 0;
}

bool func_619(bool bParam0)//Position - 0x13D04E
{
	return __LIB_0__::func_624(&(Global_2689235[bParam0 /*453*/].f_434), 0);
}

char* func_620(bool bParam0, int iParam1)//Position - 0x1404F5
{
	int iVar0;
	if (bParam0 == __LIB_0__::func_162())
	{
		return "";
	}
	if (iParam1 == 1)
	{
		return "MPClubPreset1";
	}
	iVar0 = __LIB_2__::func_39(bParam0);
	if (iVar0 != __LIB_0__::func_162())
	{
		bParam0 = iVar0;
	}
	if (BitTest(Global_103224, bParam0) || iParam1 == 2)
	{
		return __LIB_0__::func_965(&(Global_102967[bParam0 /*8*/]));
	}
	return "";
}

void func_621(int iParam0)//Position - 0x1A8D2F
{
	Global_1931975.f_1 = iParam0;
	__LIB_18__::func_63(1);
}

void func_622(int iParam0)//Position - 0x1AE3B9
{
	if (iParam0 == 1)
	{
		if (BitTest(Global_2621446.f_1, 3))
		{
			PLAYER::SET_PLAYER_SPECTATED_VEHICLE_RADIO_OVERRIDE(false);
			AUDIO::SET_AUDIO_FLAG("AllowRadioDuringSwitch", false);
			AUDIO::SET_MOBILE_PHONE_RADIO_STATE(false);
			AUDIO::SET_AUDIO_FLAG("MobileRadioInGame", false);
		}
		__LIB_10__::func_845(1);
	}
	else
	{
		if (BitTest(Global_2621446.f_1, 3))
		{
			PLAYER::SET_PLAYER_SPECTATED_VEHICLE_RADIO_OVERRIDE(true);
			AUDIO::SET_AUDIO_FLAG("AllowRadioDuringSwitch", true);
			AUDIO::SET_MOBILE_PHONE_RADIO_STATE(true);
			AUDIO::SET_AUDIO_FLAG("MobileRadioInGame", true);
		}
		__LIB_10__::func_845(0);
	}
}

void func_623(int iParam0)//Position - 0x1AE426
{
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&(Global_2621446.f_1), 4);
		__LIB_10__::func_849();
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_2621446.f_1), 4);
		__LIB_10__::func_205();
	}
}

int func_624()//Position - 0x1E1D00
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return __LIB_1__::func_342(370, -1);
	}
	return 0;
}

void func_625(int iParam0, char* sParam1, int iParam2)//Position - 0x1E3E7E
{
	int iVar0;
	if (__LIB_0__::func_409())
	{
		iVar0 = Global_1659461[iParam0 /*3*/][__LIB_1__::func_27(iParam2)];
		if (iVar0 != 0)
		{
			STATS::STAT_SET_USER_ID(iVar0, sParam1, true);
		}
	}
}

void func_626(int iParam0, char* sParam1, int iParam2, bool bParam3)//Position - 0x1E3EAF
{
	int iVar0;
	if (__LIB_0__::func_409())
	{
		iVar0 = Global_2868353[iParam0 /*3*/][__LIB_1__::func_27(iParam2)];
		if (iVar0 != 0)
		{
			STATS::STAT_SET_STRING(iVar0, sParam1, bParam3);
		}
	}
}

void func_627(bool bParam0)//Position - 0x1E6F82
{
	if (__LIB_18__::func_771() || BitTest(Global_4718592.f_15, 17))
	{
		if (bParam0)
		{
			Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_96.f_28 = __LIB_21__::func_804();
			__LIB_23__::func_775();
		}
		else if (Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_96.f_28 == __LIB_21__::func_804())
		{
			Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_96.f_28 = __LIB_21__::func_803();
			__LIB_2__::func_402();
		}
	}
}

int func_628(bool bParam0, bool bParam1, bool bParam2, bool bParam3)//Position - 0x28F0FE
{
	if (__LIB_10__::func_774(bParam0, 1, 0) && __LIB_10__::func_774(bParam1, 1, 0))
	{
		if (Global_1853348[bParam0 /*834*/].f_267.f_33 == Global_1853348[bParam1 /*834*/].f_267.f_33 && Global_1853348[bParam0 /*834*/].f_267.f_32 == Global_1853348[bParam1 /*834*/].f_267.f_32)
		{
			if (!bParam2)
			{
				return 1;
			}
			else
			{
				if (BitTest(Global_1853348[bParam0 /*834*/].f_267.f_30, 3) && BitTest(Global_1853348[bParam1 /*834*/].f_267.f_30, 3))
				{
					return 1;
				}
				if (!BitTest(Global_1853348[bParam0 /*834*/].f_267.f_30, 3) && !BitTest(Global_1853348[bParam1 /*834*/].f_267.f_30, 3))
				{
					return 1;
				}
			}
		}
	}
	if (bParam3)
	{
		if ((((Global_2689235[bParam0 /*453*/].f_318.f_6 != -1 && Global_2689235[bParam0 /*453*/].f_318.f_7 > -1) && Global_2689235[bParam0 /*453*/].f_318.f_6 == Global_2689235[bParam1 /*453*/].f_318.f_6) && Global_2689235[bParam0 /*453*/].f_318.f_7 == Global_2689235[bParam1 /*453*/].f_318.f_7) && Global_2680265.f_903.f_168[bParam0] == Global_2680265.f_903.f_168[bParam1])
		{
			return 1;
		}
	}
	return 0;
}

int func_629(bool bParam0)//Position - 0x2C1782
{
	if (bParam0 != __LIB_0__::func_162())
	{
		return Global_1853348[bParam0 /*834*/].f_267.f_278 != 0;
	}
	return 0;
}

int func_630(int iParam0)//Position - 0x3414A9
{
	if (iParam0 == joaat("rallytruck"))
	{
		if (BitTest(Global_4718592.f_18, 31))
		{
			return 1;
		}
	}
	if (iParam0 == joaat("starling"))
	{
		if (__LIB_17__::func_992())
		{
			return 1;
		}
	}
	return 0;
}

int func_631()//Position - 0x374F97
{
	int iVar0;
	bool bVar1;
	if (__LIB_1__::func_693(PLAYER::PLAYER_ID(), 1, 1))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			if (!Global_2667225.f_2643)
			{
				if (__LIB_2__::func_917(iVar0, &bVar1))
				{
					if (ENTITY::IS_ENTITY_VISIBLE_TO_SCRIPT(iVar0))
					{
						NETWORK::NETWORK_FADE_OUT_ENTITY(iVar0, true, true);
					}
					Global_2667225.f_2643 = 1;
					Global_2667225.f_2644 = NETWORK::GET_NETWORK_TIME();
					if (bVar1)
					{
						ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iVar0);
					}
					return 0;
				}
			}
			else
			{
				if (ENTITY::IS_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID()))
				{
					ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), false, false);
				}
				if (ENTITY::IS_ENTITY_VISIBLE_TO_SCRIPT(iVar0))
				{
					if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667225.f_2644) < 2000)
					{
						return 0;
					}
					else
					{
						__LIB_21__::func_866(iVar0);
					}
				}
				else
				{
					__LIB_21__::func_866(iVar0);
				}
			}
		}
	}
	Global_2667225.f_2643 = 0;
	return 1;
}

void func_632(var uParam0, bool bParam1)//Position - 0x37C65C
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	if ((PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/) || (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/) && PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 237 /*INPUT_CURSOR_ACCEPT*/))) && !BitTest(uParam0->f_280, 1))
	{
		MISC::SET_BIT(&(uParam0->f_280), 1);
		if (!BitTest(uParam0->f_280, 14))
		{
			MISC::SET_BIT(&(uParam0->f_280), 14);
		}
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Start", "DLC_HEIST_HACKING_SNAKE_SOUNDS", true);
		AUDIO::PLAY_SOUND_FRONTEND(uParam0->f_20, "Trail_Custom", "DLC_HEIST_HACKING_SNAKE_SOUNDS", true);
		__LIB_20__::func_823(1, 150);
	}
	if (!AUDIO::HAS_SOUND_FINISHED(uParam0->f_20))
	{
		switch (uParam0->f_279)
		{
			case 0:
				AUDIO::SET_VARIABLE_ON_SOUND(uParam0->f_20, "SnakeSpeed", 0.16666667f);
				break;
			case 1:
				AUDIO::SET_VARIABLE_ON_SOUND(uParam0->f_20, "SnakeSpeed", 0.33333334f);
				break;
			case 2:
				AUDIO::SET_VARIABLE_ON_SOUND(uParam0->f_20, "SnakeSpeed", 0.5f);
				break;
			case 3:
				AUDIO::SET_VARIABLE_ON_SOUND(uParam0->f_20, "SnakeSpeed", 0.6666667f);
				break;
			case 4:
				AUDIO::SET_VARIABLE_ON_SOUND(uParam0->f_20, "SnakeSpeed", 0.8333333f);
				break;
			case 5:
				AUDIO::SET_VARIABLE_ON_SOUND(uParam0->f_20, "SnakeSpeed", 1f);
				break;
			}
	}
	if (BitTest(uParam0->f_280, 1))
	{
		iVar1 = uParam0->f_26.f_13;
		fVar2 = PAD::GET_CONTROL_NORMAL(2 /*FRONTEND_CONTROL*/, 218 /*INPUT_SCRIPT_LEFT_AXIS_X*/);
		fVar3 = PAD::GET_CONTROL_NORMAL(2 /*FRONTEND_CONTROL*/, 219 /*INPUT_SCRIPT_LEFT_AXIS_Y*/);
		if ((((fVar3 < 0f && MISC::ABSF(fVar3) > 0.8f) || PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 188 /*INPUT_FRONTEND_UP*/)) && uParam0->f_26.f_13 != 1) && !BitTest(uParam0->f_280, 3))
		{
			if (!BitTest(uParam0->f_280, 4))
			{
				MISC::SET_BIT(&(uParam0->f_280), 4);
			}
			uParam0->f_26.f_14 = 0;
		}
		else if ((((fVar3 > 0f && MISC::ABSF(fVar3) > 0.8f) || PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 187 /*INPUT_FRONTEND_DOWN*/)) && uParam0->f_26.f_13 != 0) && !BitTest(uParam0->f_280, 3))
		{
			if (!BitTest(uParam0->f_280, 4))
			{
				MISC::SET_BIT(&(uParam0->f_280), 4);
			}
			uParam0->f_26.f_14 = 1;
		}
		else if (((fVar2 < 0f && MISC::ABSF(fVar2) > 0.8f) || PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 189 /*INPUT_FRONTEND_LEFT*/)) && uParam0->f_26.f_13 != 3)
		{
			if (!BitTest(uParam0->f_280, 4))
			{
				MISC::SET_BIT(&(uParam0->f_280), 4);
			}
			uParam0->f_26.f_14 = 2;
		}
		else if (((fVar2 > 0f && MISC::ABSF(fVar2) > 0.8f) || PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 190 /*INPUT_FRONTEND_RIGHT*/)) && uParam0->f_26.f_13 != 2)
		{
			if (!BitTest(uParam0->f_280, 4))
			{
				MISC::SET_BIT(&(uParam0->f_280), 4);
			}
			uParam0->f_26.f_14 = 3;
		}
		if (BitTest(uParam0->f_280, 4) && uParam0->f_26.f_17 > 0)
		{
			__LIB_19__::func_914(uParam0->f_26.f_18[(uParam0->f_26.f_17 - 1)], &fVar4, &fVar5, uParam0->f_26.f_87);
			switch (uParam0->f_26.f_14)
			{
				case 0:
				case 1:
					if (MISC::ABSF((uParam0->f_26 - fVar4)) > ((uParam0->f_26.f_2 * uParam0->f_288) * 0.3f))
					{
						MISC::CLEAR_BIT(&(uParam0->f_280), 4);
						uParam0->f_26.f_13 = uParam0->f_26.f_14;
						AUDIO::PLAY_SOUND_FRONTEND(-1, "Turn", "DLC_HEIST_HACKING_SNAKE_SOUNDS", true);
					}
					break;
				case 2:
				case 3:
					if (MISC::ABSF((uParam0->f_26.f_1 - fVar5)) > ((uParam0->f_26.f_2 * uParam0->f_288) * (0.3f * uParam0->f_288)))
					{
						MISC::CLEAR_BIT(&(uParam0->f_280), 4);
						uParam0->f_26.f_13 = uParam0->f_26.f_14;
						AUDIO::PLAY_SOUND_FRONTEND(-1, "Turn", "DLC_HEIST_HACKING_SNAKE_SOUNDS", true);
					}
					break;
				}
		}
		if (uParam0->f_26.f_17 == 0)
		{
			uParam0->f_26.f_18[uParam0->f_26.f_17] = __LIB_19__::func_915(uParam0->f_26, uParam0->f_26.f_1, uParam0->f_26.f_87);
			uParam0->f_26.f_17++;
		}
		if (iVar1 != uParam0->f_26.f_13)
		{
			if (uParam0->f_26.f_17 >= 60)
			{
				iVar0 = 0;
				while (iVar0 <= 59)
				{
					if (iVar0 == 59)
					{
						uParam0->f_26.f_18[iVar0] = __LIB_19__::func_915(uParam0->f_26, uParam0->f_26.f_1, uParam0->f_26.f_87);
					}
					else
					{
						fVar6 = 0f;
						fVar7 = 0f;
						__LIB_19__::func_914(uParam0->f_26.f_18[iVar0 + 1], &fVar6, &fVar7, uParam0->f_26.f_87);
						uParam0->f_26.f_18[iVar0] = __LIB_19__::func_915(fVar6, fVar7, uParam0->f_26.f_87);
					}
					iVar0++;
				}
			}
			else
			{
				uParam0->f_26.f_18[uParam0->f_26.f_17] = __LIB_19__::func_915(uParam0->f_26, uParam0->f_26.f_1, uParam0->f_26.f_87);
				uParam0->f_26.f_17++;
			}
		}
		switch (uParam0->f_26.f_13)
		{
			case 0:
				uParam0->f_26.f_1 = (uParam0->f_26.f_1 - (uParam0->f_26.f_16 * SYSTEM::TIMESTEP()));
				uParam0->f_26.f_4 = 0f;
				break;
			case 1:
				uParam0->f_26.f_1 = (uParam0->f_26.f_1 + (uParam0->f_26.f_16 * SYSTEM::TIMESTEP()));
				uParam0->f_26.f_4 = 180f;
				break;
			case 2:
				uParam0->f_26 = (uParam0->f_26 - (uParam0->f_26.f_15 * SYSTEM::TIMESTEP()));
				uParam0->f_26.f_4 = 270f;
				break;
			case 3:
				uParam0->f_26 = (uParam0->f_26 + (uParam0->f_26.f_15 * SYSTEM::TIMESTEP()));
				uParam0->f_26.f_4 = 90f;
				break;
			}
	}
	if ((!BitTest(uParam0->f_280, 5) && BitTest(uParam0->f_280, 1)) && __LIB_19__::func_913((0.5f - ((0.5f - uParam0->f_26) * uParam0->f_289)), uParam0->f_26.f_1, ((uParam0->f_26.f_2 * uParam0->f_289) * 0.52f), (uParam0->f_26.f_3 * 0.52f), (0.5f - ((0.5f - uParam0->f_26.f_8) * uParam0->f_289)), uParam0->f_26.f_9, (uParam0->f_26.f_10 * uParam0->f_289), uParam0->f_26.f_11))
	{
		MISC::SET_BIT(&(uParam0->f_280), 5);
		if (BitTest(uParam0->f_280, 1))
		{
			MISC::CLEAR_BIT(&(uParam0->f_280), 1);
		}
		if (!BitTest(uParam0->f_280, 7))
		{
			MISC::SET_BIT(&(uParam0->f_280), 7);
		}
		__LIB_20__::func_823(500, 50);
		uParam0->f_282 = MISC::GET_GAME_TIMER();
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Goal", "DLC_HEIST_HACKING_SNAKE_SOUNDS", true);
		AUDIO::STOP_SOUND(uParam0->f_20);
		if (!bParam1)
		{
			uParam0->f_24 = 4;
		}
		else
		{
			if (BitTest(uParam0->f_280, 0))
			{
				MISC::CLEAR_BIT(&(uParam0->f_280), 0);
			}
			uParam0->f_281 = MISC::GET_GAME_TIMER();
			uParam0->f_24 = 7;
			MISC::SET_BIT(&(uParam0->f_280), 9);
		}
	}
	if (!BitTest(uParam0->f_280, 2))
	{
		if (!__LIB_19__::func_913((0.5f - ((0.5f - uParam0->f_26) * uParam0->f_289)), uParam0->f_26.f_1, ((uParam0->f_26.f_2 * uParam0->f_289) * 0.52f), (uParam0->f_26.f_3 * 0.52f), (0.5f - ((0.5f - uParam0->f_114[4 /*4*/]) * uParam0->f_289)), uParam0->f_114[4 /*4*/].f_1, (uParam0->f_114[4 /*4*/].f_2 * uParam0->f_289), uParam0->f_114[4 /*4*/].f_3))
		{
			MISC::SET_BIT(&(uParam0->f_280), 2);
			if (BitTest(uParam0->f_280, 3))
			{
				MISC::CLEAR_BIT(&(uParam0->f_280), 3);
			}
		}
	}
	if (BitTest(uParam0->f_280, 2))
	{
		iVar0 = 0;
		while (iVar0 <= 39)
		{
			if (__LIB_19__::func_913((0.5f - ((0.5f - uParam0->f_26) * uParam0->f_289)), uParam0->f_26.f_1, ((uParam0->f_26.f_2 * uParam0->f_289) * 0.52f), (uParam0->f_26.f_3 * 0.52f), (0.5f - ((0.5f - uParam0->f_114[iVar0 /*4*/]) * uParam0->f_289)), uParam0->f_114[iVar0 /*4*/].f_1, (uParam0->f_114[iVar0 /*4*/].f_2 * uParam0->f_289), uParam0->f_114[iVar0 /*4*/].f_3))
			{
				if (BitTest(uParam0->f_280, 1))
				{
					MISC::CLEAR_BIT(&(uParam0->f_280), 1);
				}
				AUDIO::STOP_SOUND(uParam0->f_20);
				AUDIO::PLAY_SOUND_FRONTEND(-1, "Crash", "DLC_HEIST_HACKING_SNAKE_SOUNDS", true);
				if (!BitTest(uParam0->f_280, 8))
				{
					MISC::SET_BIT(&(uParam0->f_280), 8);
				}
				__LIB_20__::func_823(1000, 100);
				uParam0->f_282 = MISC::GET_GAME_TIMER();
				uParam0->f_24 = 5;
			}
			iVar0++;
		}
	}
	if (uParam0->f_279 >= 3)
	{
		if (uParam0->f_7 >= 5 && uParam0->f_26.f_15 != (0.082f * uParam0->f_289))
		{
			uParam0->f_26.f_15 = (0.082f * uParam0->f_289);
			uParam0->f_26.f_16 = (uParam0->f_26.f_15 * uParam0->f_288);
		}
	}
}

void func_633(var uParam0)//Position - 0x37D5FB
{
	uParam0->f_288 = __LIB_20__::func_827(uParam0, 0);
	uParam0->f_289 = __LIB_19__::func_916(uParam0->f_288);
}

void func_634(bool bParam0, var uParam1, bool bParam2)//Position - 0x3AA967
{
	if (BitTest(Global_4980736.f_201076[bParam0 /*7*/].f_4, 2) && CUTSCENE::IS_CUTSCENE_PLAYING())
	{
		if (!__LIB_19__::func_221(&(uParam1->f_5), bParam0))
		{
			if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(Global_4980736.f_201076[bParam0 /*7*/], __LIB_19__::func_176(&(Global_4980736.f_201076[bParam0 /*7*/]), 1), Global_4980736.f_201076[bParam0 /*7*/].f_3, false))
			{
				if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_16[bParam0]))
				{
					if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
					{
						NETWORK::RESERVE_NETWORK_MISSION_OBJECTS(NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(false, 0) + 1);
					}
					else
					{
						NETWORK::RESERVE_LOCAL_NETWORK_MISSION_OBJECTS(NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(false, 0) + 1);
					}
					uParam1->f_16[bParam0] = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(Global_4980736.f_201076[bParam0 /*7*/], __LIB_19__::func_176(&(Global_4980736.f_201076[bParam0 /*7*/]), 1), Global_4980736.f_201076[bParam0 /*7*/].f_3, false, false, true);
					if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_16[bParam0]))
					{
						if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(uParam1->f_16[bParam0]))
						{
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uParam1->f_16[bParam0], false, false);
						}
						ENTITY::SET_ENTITY_VISIBLE(uParam1->f_16[bParam0], false, false);
						__LIB_23__::func_308(&(uParam1->f_5), bParam0);
						if (bParam2)
						{
						}
					}
					else if (bParam2)
					{
					}
				}
				else if (bParam2)
				{
				}
			}
			else if (bParam2)
			{
			}
		}
	}
	else if (__LIB_19__::func_221(&(uParam1->f_5), bParam0))
	{
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(uParam1->f_16[bParam0]));
		__LIB_22__::func_574(&(uParam1->f_5), bParam0);
		if (bParam2)
		{
		}
	}
}

void func_635(var uParam0, bool bParam1)//Position - 0x3AAAD0
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	struct<3> Var5;
	if (!BitTest(Global_4980736.f_201076[bParam1 /*7*/].f_4, 0))
	{
		return;
	}
	if (__LIB_19__::func_221(&(uParam0->f_11), bParam1))
	{
		return;
	}
	iVar0 = Global_4980736.f_201076[bParam1 /*7*/].f_3;
	Var1 = { Global_4980736.f_201076[bParam1 /*7*/] };
	if (__LIB_0__::func_86(Var1))
	{
		return;
	}
	if (!STREAMING::IS_MODEL_VALID(iVar0))
	{
		return;
	}
	MISC::GET_MODEL_DIMENSIONS(iVar0, &Var5, &Var4);
	Var5 = { Var5 * Vector(2f, 2f, 2f) };
	Var4 = { Var4 * Vector(2f, 2f, 2f) };
	if (Var4.f_0 > Var4.f_1)
	{
		Var4.f_1 = Var4.f_0;
	}
	else
	{
		Var4.f_0 = Var4.f_1;
	}
	if (Var5.f_0 > Var5.f_1)
	{
		Var5.f_0 = Var5.f_1;
	}
	else
	{
		Var5.f_1 = Var5.f_0;
	}
	Var2 = { Var1 + Var5 };
	Var3 = { Var1 + Var4 };
	Var2.f_2 = (Var2.f_2 - 0.5f);
	Var3.f_2 = (Var3.f_2 + 0.5f);
	TASK::ADD_COVER_BLOCKING_AREA(Var2, Var3, false, false, true, false);
	__LIB_23__::func_308(&(uParam0->f_11), bParam1);
}

void func_636(var uParam0)//Position - 0x3B9CE6
{
	int iVar0;
	iVar0 = joaat("w_ex_vehiclemissile_1");
	__LIB_21__::func_976(joaat("WEAPON_ARENA_HOMING_MISSILE"), iVar0, 50, 3000, 1133903872);
	__LIB_21__::func_668(2);
	__LIB_23__::func_916(uParam0->f_2);
}

void func_637(var uParam0)//Position - 0x3BAAA7
{
	int iVar0;
	int iVar1;
	iVar0 = NETWORK::GET_NETWORK_TIME();
	iVar1 = 0;
	while (iVar1 < Global_2788036)
	{
		if (__LIB_24__::func_160(2, 0, iVar1))
		{
			if ((*uParam0)[iVar1] == 0)
			{
				(*uParam0)[iVar1] = NETWORK::GET_TIME_OFFSET(iVar0, 60000);
			}
		}
		else
		{
			(*uParam0)[iVar1] = 0;
		}
		iVar1++;
	}
}

void func_638(bool bParam0, int iParam1, float fParam2, int iParam3, int iParam4, bool bParam5)//Position - 0x3D7485
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	if (__LIB_22__::func_671())
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			if (!bParam5)
			{
				if ((PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 230 /*INPUT_SCRIPT_LS*/) || PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 230 /*INPUT_SCRIPT_LS*/)) || (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 86 /*INPUT_VEH_HORN*/) && BitTest(Global_4718592.f_38, 3)))
				{
					GRAPHICS::ANIMPOSTFX_PLAY("RaceTurbo", 0, false);
					PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 86 /*INPUT_VEH_HORN*/, true);
					__LIB_22__::func_670(1f, bParam0, iParam1);
				}
			}
			else if (PAD::IS_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 209 /*INPUT_FRONTEND_LS*/) || (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 86 /*INPUT_VEH_HORN*/) && BitTest(Global_4718592.f_38, 3)))
			{
				GRAPHICS::ANIMPOSTFX_PLAY("RaceTurbo", 0, false);
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 86 /*INPUT_VEH_HORN*/, true);
				__LIB_22__::func_670(1f, bParam0, iParam1);
			}
		}
	}
	if (Global_1574481)
	{
		if (__LIB_1__::func_693(PLAYER::PLAYER_ID(), 1, 1) || !bParam0)
		{
			if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_1574481.f_1) < iParam1)
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
					{
						if (!VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(iVar0)))
						{
							fVar1 = ENTITY::GET_ENTITY_SPEED(iVar0);
							fVar2 = VEHICLE::GET_VEHICLE_ESTIMATED_MAX_SPEED(iVar0);
							fVar2 = (fVar2 + __LIB_22__::func_669(iVar0));
							if (fVar2 > __LIB_22__::func_668(iVar0))
							{
								fVar2 = __LIB_22__::func_668(iVar0);
							}
							if (fVar1 < fVar2 || iParam3)
							{
								if ((VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(iVar0) || !__LIB_22__::func_667(iVar0)) || iParam4)
								{
									ENTITY::APPLY_FORCE_TO_ENTITY(iVar0, iVar3, 0f, fParam2, 0f, 0f, 0f, 0f, 0, true, true, true, false, true);
								}
							}
						}
						else
						{
							__LIB_23__::func_366(bParam0);
						}
					}
					else
					{
						__LIB_23__::func_366(bParam0);
					}
				}
				else
				{
					__LIB_23__::func_366(bParam0);
				}
			}
			else
			{
				__LIB_23__::func_366(bParam0);
			}
		}
		else
		{
			__LIB_23__::func_366(bParam0);
		}
	}
}

void func_639()//Position - 0x3D7735
{
	int iVar0;
	struct<3> Var1;
	struct<2> Var2;
	float fVar3;
	struct<3> Var4;
	float fVar5;
	if (Global_1574492)
	{
		if (__LIB_1__::func_693(PLAYER::PLAYER_ID(), 1, 1) || (__LIB_0__::func_157(0) && PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
				MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(iVar0), &Var1, &Var2);
				if (((PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 230 /*INPUT_SCRIPT_LS*/) || PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 230 /*INPUT_SCRIPT_LS*/)) || (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 86 /*INPUT_VEH_HORN*/) && (BitTest(Global_4718592.f_19, 5) || BitTest(Global_4718592.f_38, 3)))) || Global_1574492.f_2)
				{
					Var4 = { __LIB_23__::func_365(ENTITY::GET_ENTITY_ROTATION(iVar0, 2)) * Vector(300f, 300f, 300f) };
					fVar5 = __LIB_22__::func_11(ENTITY::GET_ENTITY_MODEL(iVar0));
					if (PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 231 /*INPUT_SCRIPT_RS*/) || (PAD::IS_DISABLED_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 79 /*INPUT_VEH_LOOK_BEHIND*/) && (BitTest(Global_4718592.f_19, 5) || BitTest(Global_4718592.f_38, 3))))
					{
						Global_1574492.f_10 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar0, (Var1.f_0 - fVar5), (Var1.f_1 - 0.5f), (Var1.f_2 + 0.75f)) };
						Global_1574492.f_13 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar0, (Var2.f_0 + fVar5), (Var1.f_1 - 0.5f), (Var1.f_2 + 0.75f)) };
						Var4 = { -Var4 };
					}
					else
					{
						Global_1574492.f_10 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar0, (Var1.f_0 - fVar5), (Var2.f_1 + 0.5f), (Var1.f_2 + 0.75f)) };
						Global_1574492.f_13 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar0, (Var2.f_0 + fVar5), (Var2.f_1 + 0.5f), (Var1.f_2 + 0.75f)) };
					}
					Global_1574492.f_4 = { Global_1574492.f_10 + Var4 };
					Global_1574492.f_7 = { Global_1574492.f_13 + Var4 };
					if ((ENTITY::GET_ENTITY_SPEED(iVar0) * ENTITY::GET_ENTITY_SPEED(iVar0)) > 400f)
					{
						fVar3 = ((ENTITY::GET_ENTITY_SPEED(iVar0) * ENTITY::GET_ENTITY_SPEED(iVar0)) + 100f);
					}
					else
					{
						fVar3 = 400f;
					}
					if (!__LIB_0__::func_78(Global_1574492.f_10, Global_1574492.f_4, 0))
					{
						MISC::SHOOT_SINGLE_BULLET_BETWEEN_COORDS_IGNORE_ENTITY(Global_1574492.f_10, Global_1574492.f_4, 250, true, Global_1941596, PLAYER::PLAYER_PED_ID(), true, true, fVar3, iVar0, 0);
					}
					if (!__LIB_0__::func_78(Global_1574492.f_13, Global_1574492.f_7, 0))
					{
						MISC::SHOOT_SINGLE_BULLET_BETWEEN_COORDS_IGNORE_ENTITY(Global_1574492.f_13, Global_1574492.f_7, 250, true, Global_1941596, PLAYER::PLAYER_PED_ID(), true, true, fVar3, iVar0, 0);
					}
					if (__LIB_1__::func_319(Global_4718592.f_168757))
					{
						AUDIO::PLAY_SOUND_FROM_COORD(-1, "Rocket_Detonate", Global_1574492.f_4, "DLC_IE_VV_Rocket_Player_Sounds", true, 0, false);
					}
					Global_1574492 = 0;
					if (__LIB_0__::func_1("WT_V_SPACERKT" /* GXT: Rockets */))
					{
						__LIB_19__::func_8("WT_V_SPACERKT" /* GXT: Rockets */, 1);
					}
					PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 86 /*INPUT_VEH_HORN*/, true);
				}
			}
		}
	}
}

void func_640(var uParam0)//Position - 0x3E25BA
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_24[iVar0]))
		{
			__LIB_21__::func_625(uParam0->f_24[iVar0]);
			if (iVar0 == 0)
			{
				OBJECT::SET_OBJECT_TINT_INDEX(uParam0->f_24[iVar0], uParam0->f_2.f_1);
			}
		}
		iVar0++;
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_31))
	{
		__LIB_21__::func_625(uParam0->f_31);
		OBJECT::SET_OBJECT_TINT_INDEX(uParam0->f_31, uParam0->f_2.f_1);
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_34[iVar0]))
		{
			__LIB_21__::func_625(uParam0->f_34[iVar0]);
			OBJECT::SET_OBJECT_TINT_INDEX(uParam0->f_34[iVar0], uParam0->f_2.f_1);
		}
		iVar0++;
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_32))
	{
		__LIB_21__::func_625(uParam0->f_32);
		ENTITY::SET_ENTITY_WATER_REFLECTION_FLAG(uParam0->f_32, false);
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_33))
	{
		__LIB_21__::func_625(uParam0->f_33);
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_39))
	{
		__LIB_21__::func_625(uParam0->f_39);
		ENTITY::SET_ENTITY_VISIBLE(uParam0->f_39, false, false);
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_38))
	{
		__LIB_21__::func_625(uParam0->f_38);
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_41[iVar0]))
		{
			OBJECT::SET_OBJECT_TINT_INDEX(uParam0->f_41[iVar0], uParam0->f_2.f_1);
		}
		iVar0++;
	}
}

void func_641(var uParam0, var uParam1, var uParam2, int iParam3)//Position - 0x3E4642
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	if (ENTITY::DOES_ENTITY_EXIST(iParam3))
	{
		VEHICLE::GET_VEHICLE_CUSTOM_PRIMARY_COLOUR(iParam3, &iVar0, &iVar1, &iVar2);
	}
	else
	{
		__LIB_22__::func_581(__LIB_19__::func_216(3), &iVar0, &iVar1, &iVar2, &iVar3);
	}
	if ((iVar0 == iVar1 && iVar1 == iVar2) && iVar0 <= 15)
	{
		__LIB_22__::func_581(__LIB_19__::func_216(5), &iVar0, &iVar1, &iVar2, &iVar4);
	}
	*uParam0 = (SYSTEM::TO_FLOAT(iVar0) / 255f);
	*uParam1 = (SYSTEM::TO_FLOAT(iVar1) / 255f);
	*uParam2 = (SYSTEM::TO_FLOAT(iVar2) / 255f);
}

int func_642(bool bParam0, int iParam1)//Position - 0x44A8B9
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (__LIB_7__::func_177(iVar0) == iParam1)
		{
			return BitTest(Global_1977138[bParam0 /*57*/].f_25, iVar0);
		}
		iVar0++;
	}
	return 0;
}

int func_643(bool bParam0)//Position - 0x44B9C1
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (__LIB_7__::func_244(bParam0, iVar0))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_644(int iParam0)//Position - 0x44BEA7
{
	int iVar0;
	iVar0 = __LIB_4__::func_823(iParam0);
	if (iVar0 != __LIB_0__::func_162())
	{
		return Global_1892703[iVar0 /*599*/].f_10.f_463 == 639967857;
	}
	return 0;
}

int func_645(int iParam0)//Position - 0x44BED8
{
	int iVar0;
	iVar0 = __LIB_4__::func_823(iParam0);
	if (iVar0 != __LIB_0__::func_162())
	{
		return Global_1892703[iVar0 /*599*/].f_10.f_463 == 935751890;
	}
	return 0;
}

int func_646(int iParam0)//Position - 0x44BF09
{
	int iVar0;
	iVar0 = __LIB_4__::func_823(iParam0);
	if (iVar0 != __LIB_0__::func_162())
	{
		return Global_1892703[iVar0 /*599*/].f_10.f_463 == 1553945504;
	}
	return 0;
}

int func_647(int iParam0)//Position - 0x44BF3A
{
	int iVar0;
	iVar0 = __LIB_4__::func_823(iParam0);
	if (iVar0 != __LIB_0__::func_162())
	{
		return Global_1892703[iVar0 /*599*/].f_10.f_463 == 1160415507;
	}
	return 0;
}

int func_648(int iParam0)//Position - 0x44BF6B
{
	int iVar0;
	iVar0 = __LIB_4__::func_823(iParam0);
	if (iVar0 != __LIB_0__::func_162())
	{
		return Global_1892703[iVar0 /*599*/].f_10.f_463 == -1905128202;
	}
	return 0;
}

bool func_649()//Position - 0x44CA62
{
	return __LIB_1__::func_342(204, -1);
}

int func_650(int iParam0, int iParam1)//Position - 0x451A8E
{
	int iVar0;
	iVar0 = (iParam0 - (__LIB_16__::func_829(iParam0, iParam1) * SYSTEM::FLOOR((32f / IntToFloat(iParam1)))));
	return iVar0;
}

int func_651(int iParam0, int iParam1, bool bParam2, int iParam3)//Position - 0x45BB55
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bVar0 = NETWORK::NETWORK_IS_GAME_IN_PROGRESS();
	if (iParam3 == 0)
	{
		bVar0 = true;
	}
	else if (iParam3 == 1)
	{
		bVar0 = false;
	}
	iVar1 = -1;
	iVar2 = -1;
	if (!STREAMING::IS_MODEL_A_VEHICLE(iParam1))
	{
		bVar3 = false;
		if (iParam1 == 0)
		{
		}
		else if (iParam1 == Global_75446)
		{
		}
		else if (iParam1 == Global_75447)
		{
		}
		else if (iParam1 == Global_75448)
		{
			iVar1 = 500000;
			if (bVar0)
			{
				if (Global_262145.f_21615 /* Tunable: 982031447 */ >= 0)
				{
					iVar1 = Global_262145.f_21615 /* Tunable: 982031447 */;
				}
			}
			bVar3 = true;
		}
		else if (iParam1 == Global_75449)
		{
		}
		else if (iParam1 == Global_75450)
		{
		}
		else if (iParam1 == joaat("kosatka"))
		{
		}
		if (!bVar3)
		{
			return 0;
		}
	}
	switch (iParam1)
	{
		case joaat("adder"):
			iVar1 = 1000000;
			break;
		case joaat("akuma"):
			iVar1 = 9000;
			break;
		case joaat("asea"):
			iVar1 = 12000;
			break;
		case joaat("asterope"):
			iVar1 = 26000;
			break;
		case joaat("bagger"):
			iVar1 = 16000;
			if (bVar0)
			{
				if (Global_262145.f_17968 /* Tunable: -841706086 */ >= 0)
				{
					iVar1 = Global_262145.f_17968 /* Tunable: -841706086 */;
				}
			}
			break;
		case joaat("baller"):
			iVar1 = 90000;
			break;
		case joaat("baller2"):
			iVar1 = 90000;
			break;
		case joaat("banshee"):
			iVar1 = 90000;
			break;
		case joaat("bati"):
			iVar1 = 10000;
			break;
		case joaat("bati2"):
			iVar1 = 10000;
			break;
		case joaat("bfinjection"):
			iVar1 = 16000;
			break;
		case joaat("bison"):
			iVar1 = 30000;
			break;
		case joaat("bison2"):
			iVar1 = 30000;
			break;
		case joaat("bison3"):
			iVar1 = 30000;
			break;
		case joaat("bjxl"):
			iVar1 = 27000;
			if (bVar0)
			{
				if (Global_262145.f_24820 /* Tunable: BB_TRADE_PRICE_EXISTING_VEHICLES_BEEJAY_XL */ >= 0)
				{
					iVar1 = Global_262145.f_24820 /* Tunable: BB_TRADE_PRICE_EXISTING_VEHICLES_BEEJAY_XL */;
				}
			}
			break;
		case joaat("blazer"):
			iVar1 = 8000;
			break;
		case joaat("blazer2"):
			iVar1 = 62000;
			if (bVar0)
			{
				iVar1 = Global_262145.f_28575 /* Tunable: CH_SALE_PRICE_BLAZER2 */;
			}
			break;
		case joaat("blista"):
			iVar1 = 16000;
			break;
		case joaat("bobcatxl"):
			iVar1 = 23000;
			break;
		case joaat("bodhi2"):
			iVar1 = 12000;
			break;
		case joaat("boxville"):
			if (!bParam2)
			{
				iVar1 = 298500;
				if (bVar0)
				{
					iVar1 = Global_262145.f_28501 /* Tunable: CH_TRADE_PRICE_BOXVILLE */;
				}
			}
			else
			{
				iVar1 = 398000;
				if (bVar0)
				{
					iVar1 = Global_262145.f_28500 /* Tunable: CH_BIN_PRICE_BOXVILLE */;
				}
				iVar2 = 298500;
				if (bVar0)
				{
					iVar2 = Global_262145.f_28501 /* Tunable: CH_TRADE_PRICE_BOXVILLE */;
				}
			}
			break;
		case joaat("stockade"):
			if (!bParam2)
			{
				iVar1 = 1680000;
				if (bVar0)
				{
					iVar1 = Global_262145.f_28503 /* Tunable: CH_TRADE_PRICE_STOCKADE */;
				}
			}
			else
			{
				iVar1 = 2240000;
				if (bVar0)
				{
					iVar1 = Global_262145.f_28502 /* Tunable: CH_BIN_PRICE_STOCKADE */;
				}
				iVar2 = 1680000;
				if (bVar0)
				{
					iVar2 = Global_262145.f_28503 /* Tunable: CH_TRADE_PRICE_STOCKADE */;
				}
			}
			break;
		case joaat("boxville2"):
			iVar1 = 25000;
			break;
		case joaat("boxville3"):
			iVar1 = 25000;
			break;
		case joaat("buccaneer"):
			iVar1 = 28000;
			break;
		case joaat("buffalo"):
			iVar1 = 35000;
			break;
		case joaat("buffalo2"):
			iVar1 = 96000;
			break;
		case joaat("bullet"):
			iVar1 = 150000;
			break;
		case joaat("burrito"):
			iVar1 = 13000;
			break;
		case joaat("burrito2"):
			if (bParam2)
			{
				iVar1 = 450000;
				if (bVar0)
				{
					iVar1 = Global_262145.f_28499 /* Tunable: CH_TRADE_PRICE_BURRITO2 */;
				}
			}
			else
			{
				iVar1 = 598500;
				if (bVar0)
				{
					iVar1 = Global_262145.f_28498 /* Tunable: CH_BIN_PRICE_BURRITO2 */;
				}
				iVar2 = 450000;
				if (bVar0)
				{
					iVar2 = Global_262145.f_28499 /* Tunable: CH_TRADE_PRICE_BURRITO2 */;
				}
			}
			break;
		case joaat("burrito3"):
			iVar1 = 13000;
			break;
		case joaat("burrito4"):
			iVar1 = 13000;
			break;
		case joaat("carbonizzare"):
			iVar1 = 195000;
			break;
		case joaat("carbonrs"):
			iVar1 = 40000;
			break;
		case joaat("cavalcade"):
			iVar1 = 60000;
			break;
		case joaat("cavalcade2"):
			iVar1 = 70000;
			break;
		case joaat("cheetah"):
			iVar1 = 650000;
			break;
		case joaat("cogcabrio"):
			iVar1 = 185000;
			break;
		case joaat("comet2"):
			iVar1 = 85000;
			break;
		case joaat("coquette"):
			iVar1 = 55000;
			break;
		case joaat("daemon"):
			iVar1 = 20000;
			break;
		case joaat("dilettante"):
			iVar1 = 25000;
			break;
		case joaat("dominator"):
			iVar1 = 35000;
			if (bVar0 && Global_262145.f_7633 /* Tunable: DLC_VEHICLE_VAPID_DOMINATOR */ >= 0)
			{
				iVar1 = Global_262145.f_7633 /* Tunable: DLC_VEHICLE_VAPID_DOMINATOR */;
			}
			if (bParam2)
			{
				iVar2 = iVar1;
				iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(35000) * 0.75f));
				if (bVar0 && Global_262145.f_25928 /* Tunable: AW_TRADE_PRICE_DOMINATOR */ >= 0)
				{
					iVar1 = Global_262145.f_25928 /* Tunable: AW_TRADE_PRICE_DOMINATOR */;
				}
			}
			break;
		case joaat("double"):
			iVar1 = 12000;
			break;
		case joaat("dubsta"):
			iVar1 = 120000;
			break;
		case joaat("dubsta2"):
			iVar1 = 120000;
			break;
		case joaat("elegy2"):
			if (!bParam2)
			{
				iVar1 = 95000;
				if (bVar0)
				{
					if (Global_262145.f_19693 /* Tunable: IMPEXP_ELEGY_BASE_PRICE */ >= 0)
					{
						iVar1 = Global_262145.f_19693 /* Tunable: IMPEXP_ELEGY_BASE_PRICE */;
					}
				}
			}
			else
			{
				iVar1 = 0;
				if (bVar0)
				{
					if (Global_262145.f_8607 /* Tunable: ELEGY2_WEB_PRICE_MODIFIER */ >= 0)
					{
						iVar1 = Global_262145.f_8607 /* Tunable: ELEGY2_WEB_PRICE_MODIFIER */;
					}
				}
			}
			break;
		case joaat("emperor"):
			iVar1 = 8000;
			break;
		case joaat("emperor2"):
			iVar1 = 5000;
			break;
		case joaat("emperor3"):
			iVar1 = 5000;
			break;
		case joaat("entityxf"):
			iVar1 = 795000;
			break;
		case joaat("exemplar"):
			iVar1 = 205000;
			break;
		case joaat("f620"):
			iVar1 = 80000;
			break;
		case joaat("faggio2"):
			iVar1 = 5000;
			break;
		case joaat("felon"):
			iVar1 = 100000;
			break;
		case joaat("felon2"):
			iVar1 = 95000;
			break;
		case joaat("feltzer2"):
			iVar1 = 145000;
			break;
		case joaat("fq2"):
			iVar1 = 50000;
			if (bVar0)
			{
				if (Global_262145.f_24821 /* Tunable: BB_TRADE_PRICE_EXISTING_VEHICLES_FATHOM_FQ_2 */ >= 0)
				{
					iVar1 = Global_262145.f_24821 /* Tunable: BB_TRADE_PRICE_EXISTING_VEHICLES_FATHOM_FQ_2 */;
				}
			}
			break;
		case joaat("fugitive"):
			iVar1 = 24000;
			break;
		case joaat("fusilade"):
			iVar1 = 36000;
			break;
		case joaat("futo"):
			iVar1 = 9000;
			if (bVar0)
			{
				if (Global_262145.f_24814 /* Tunable: BB_TRADE_PRICE_EXISTING_VEHICLES_KARIN_FUTO */ >= 0)
				{
					iVar1 = Global_262145.f_24814 /* Tunable: BB_TRADE_PRICE_EXISTING_VEHICLES_KARIN_FUTO */;
				}
			}
			break;
		case joaat("gauntlet"):
			iVar1 = 32000;
			break;
		case joaat("gburrito"):
			iVar1 = 16000;
			break;
		case joaat("granger"):
			iVar1 = 35000;
			break;
		case joaat("gresley"):
			iVar1 = 29000;
			break;
		case joaat("habanero"):
			iVar1 = 42000;
			if (bVar0)
			{
				if (Global_262145.f_24822 /* Tunable: BB_TRADE_PRICE_EXISTING_VEHICLES_EMPEROR_HABANERO */ >= 0)
				{
					iVar1 = Global_262145.f_24822 /* Tunable: BB_TRADE_PRICE_EXISTING_VEHICLES_EMPEROR_HABANERO */;
				}
			}
			break;
		case joaat("hexer"):
			iVar1 = 15000;
			break;
		case joaat("hotknife"):
			iVar1 = 90000;
			break;
		case joaat("infernus"):
			iVar1 = 440000;
			break;
		case joaat("ingot"):
			iVar1 = 9000;
			break;
		case joaat("intruder"):
			iVar1 = 16000;
			break;
		case joaat("issi2"):
			iVar1 = 18000;
			break;
		case joaat("jackal"):
			iVar1 = 60000;
			break;
		case joaat("jb700"):
			iVar1 = 475000;
			break;
		case joaat("khamelion"):
			iVar1 = 100000;
			break;
		case joaat("landstalker"):
			iVar1 = 58000;
			break;
		case joaat("lguard"):
			iVar1 = 865000;
			if (bVar0)
			{
				iVar1 = Global_262145.f_28574 /* Tunable: CH_SALE_PRICE_LGUARD */;
			}
			break;
		case joaat("firetruk"):
			if (!bParam2)
			{
				iVar1 = 2471250;
				if (bVar0)
				{
					iVar1 = Global_262145.f_28497 /* Tunable: CH_TRADE_PRICE_FIRETRUCK */;
				}
			}
			else
			{
				iVar1 = 3295000;
				if (bVar0)
				{
					iVar1 = Global_262145.f_28496 /* Tunable: CH_BIN_PRICE_FIRETRUCK */;
				}
				iVar2 = 2471250;
				if (bVar0)
				{
					iVar2 = Global_262145.f_28497 /* Tunable: CH_TRADE_PRICE_FIRETRUCK */;
				}
			}
			break;
		case joaat("manana"):
			iVar1 = 10000;
			if (bVar0)
			{
				if (Global_262145.f_29365 /* Tunable: SUM_SALE_PRICE_MANANA */ >= 0)
				{
					iVar1 = Global_262145.f_29365 /* Tunable: SUM_SALE_PRICE_MANANA */;
				}
			}
			break;
		case joaat("mesa"):
			iVar1 = 30000;
			break;
		case joaat("minivan"):
			iVar1 = 30000;
			break;
		case joaat("monroe"):
			iVar1 = 490000;
			break;
		case joaat("nemesis"):
			iVar1 = 12000;
			break;
		case joaat("ninef"):
			iVar1 = 120000;
			break;
		case joaat("ninef2"):
			iVar1 = 130000;
			break;
		case joaat("oracle"):
			iVar1 = 82000;
			break;
		case joaat("oracle2"):
			iVar1 = 80000;
			break;
		case joaat("patriot"):
			iVar1 = 50000;
			if (bVar0)
			{
				if (Global_262145.f_24818 /* Tunable: BB_TRADE_PRICE_EXISTING_VEHICLES_MAMMOTH_PATRIOT */ >= 0)
				{
					iVar1 = Global_262145.f_24818 /* Tunable: BB_TRADE_PRICE_EXISTING_VEHICLES_MAMMOTH_PATRIOT */;
				}
			}
			break;
		case joaat("pcj"):
			iVar1 = 9000;
			break;
		case joaat("penumbra"):
			iVar1 = 24000;
			break;
		case joaat("peyote"):
			iVar1 = 12000;
			if (bVar0)
			{
				if (Global_262145.f_29366 /* Tunable: SUM_SALE_PRICE_PEYOTE */ >= 0)
				{
					iVar1 = Global_262145.f_29366 /* Tunable: SUM_SALE_PRICE_PEYOTE */;
				}
			}
			break;
		case joaat("phoenix"):
			iVar1 = 20000;
			break;
		case joaat("prairie"):
			iVar1 = 25000;
			if (bVar0)
			{
				if (Global_262145.f_24817 /* Tunable: BB_TRADE_PRICE_EXISTING_VEHICLES_BOLLOKAN_PRAIRIE */ >= 0)
				{
					iVar1 = Global_262145.f_24817 /* Tunable: BB_TRADE_PRICE_EXISTING_VEHICLES_BOLLOKAN_PRAIRIE */;
				}
			}
			break;
		case joaat("pranger"):
			iVar1 = 35000;
			break;
		case joaat("premier"):
			iVar1 = 10000;
			break;
		case joaat("primo"):
			iVar1 = 9000;
			break;
		case joaat("radi"):
			iVar1 = 32000;
			break;
		case joaat("rancherxl"):
			iVar1 = 9000;
			break;
		case joaat("rancherxl2"):
			iVar1 = 9000;
			break;
		case joaat("rapidgt"):
			iVar1 = 118000;
			break;
		case joaat("rapidgt2"):
			iVar1 = 136000;
			break;
		case joaat("ratloader"):
			iVar1 = 6000;
			break;
		case joaat("rebel"):
			iVar1 = 7000;
			break;
		case joaat("rebel2"):
			iVar1 = 22000;
			break;
		case joaat("regina"):
			iVar1 = 8000;
			break;
		case joaat("rocoto"):
			iVar1 = 85000;
			break;
		case joaat("ruffian"):
			iVar1 = 10000;
			break;
		case joaat("ruiner"):
			iVar1 = 10000;
			if (bVar0)
			{
				if (Global_262145.f_24815 /* Tunable: BB_TRADE_PRICE_EXISTING_VEHICLES_IMPONTE_RUINER */ >= 0)
				{
					iVar1 = Global_262145.f_24815 /* Tunable: BB_TRADE_PRICE_EXISTING_VEHICLES_IMPONTE_RUINER */;
				}
			}
			break;
		case joaat("rumpo"):
			iVar1 = 13000;
			break;
		case joaat("sabregt"):
			iVar1 = 15000;
			if (bVar0)
			{
				if (Global_262145.f_15026 /* Tunable: WEBSITE_BENNYS_DECLASSE_SABRE_TURBO */ >= 0)
				{
					iVar1 = Global_262145.f_15026 /* Tunable: WEBSITE_BENNYS_DECLASSE_SABRE_TURBO */;
				}
			}
			break;
		case joaat("sadler"):
			iVar1 = 35000;
			break;
		case joaat("sanchez"):
			iVar1 = 7000;
			break;
		case joaat("sandking"):
			iVar1 = 45000;
			break;
		case joaat("sandking2"):
			iVar1 = 45000;
			break;
		case joaat("schafter2"):
			iVar1 = 65000;
			break;
		case joaat("schwarzer"):
			iVar1 = 80000;
			break;
		case joaat("seashark"):
			iVar1 = 16899;
			break;
		case joaat("seminole"):
			iVar1 = 30000;
			break;
		case joaat("sentinel"):
			iVar1 = 60000;
			break;
		case joaat("sentinel2"):
			iVar1 = 60000;
			break;
		case joaat("serrano"):
			iVar1 = 60000;
			if (bVar0)
			{
				if (Global_262145.f_24819 /* Tunable: BB_TRADE_PRICE_EXISTING_VEHICLES_BENEFACTOR_SERRANO */ >= 0)
				{
					iVar1 = Global_262145.f_24819 /* Tunable: BB_TRADE_PRICE_EXISTING_VEHICLES_BENEFACTOR_SERRANO */;
				}
			}
			break;
		case joaat("speedo"):
			iVar1 = 15000;
			break;
		case joaat("speedo2"):
			iVar1 = 15000;
			break;
		case joaat("stanier"):
			iVar1 = 10000;
			break;
		case joaat("stinger"):
			iVar1 = 1000000;
			break;
		case joaat("stingergt"):
			iVar1 = 1000000;
			break;
		case joaat("stratum"):
			iVar1 = 10000;
			break;
		case joaat("stretch"):
			iVar1 = 30000;
			break;
		case joaat("sultan"):
			iVar1 = 12000;
			break;
		case joaat("superd"):
			iVar1 = 250000;
			break;
		case joaat("surano"):
			iVar1 = 99000;
			break;
		case joaat("surge"):
			iVar1 = 38000;
			break;
		case joaat("tailgater"):
			iVar1 = 55000;
			break;
		case joaat("taxi"):
			iVar1 = 13000;
			break;
		case joaat("tornado"):
			iVar1 = 30000;
			if (bVar0)
			{
				if (Global_262145.f_15027 /* Tunable: WEBSITE_BENNYS_DECLASSE_TORNADO */ >= 0)
				{
					iVar1 = Global_262145.f_15027 /* Tunable: WEBSITE_BENNYS_DECLASSE_TORNADO */;
				}
			}
			break;
		case joaat("tornado2"):
			iVar1 = 30000;
			if (bVar0)
			{
				if (Global_262145.f_15027 /* Tunable: WEBSITE_BENNYS_DECLASSE_TORNADO */ >= 0)
				{
					iVar1 = Global_262145.f_15027 /* Tunable: WEBSITE_BENNYS_DECLASSE_TORNADO */;
				}
			}
			break;
		case joaat("tornado3"):
			iVar1 = 30000;
			if (bVar0)
			{
				if (Global_262145.f_15027 /* Tunable: WEBSITE_BENNYS_DECLASSE_TORNADO */ >= 0)
				{
					iVar1 = Global_262145.f_15027 /* Tunable: WEBSITE_BENNYS_DECLASSE_TORNADO */;
				}
			}
			break;
		case joaat("tornado4"):
			iVar1 = 30000;
			if (bVar0)
			{
				if (Global_262145.f_15027 /* Tunable: WEBSITE_BENNYS_DECLASSE_TORNADO */ >= 0)
				{
					iVar1 = Global_262145.f_15027 /* Tunable: WEBSITE_BENNYS_DECLASSE_TORNADO */;
				}
			}
			break;
		case joaat("vacca"):
			iVar1 = 240000;
			break;
		case joaat("vader"):
			iVar1 = 9000;
			break;
		case joaat("vigero"):
			iVar1 = 21000;
			break;
		case joaat("voltic"):
			iVar1 = 80000;
			break;
		case joaat("voodoo2"):
			iVar1 = 5000;
			break;
		case joaat("washington"):
			iVar1 = 15000;
			break;
		case joaat("youga"):
			iVar1 = 16000;
			break;
		case joaat("zion"):
			iVar1 = 50000;
			break;
		case joaat("zion2"):
			iVar1 = 65000;
			break;
		case joaat("bmx"):
			iVar1 = 500;
			break;
		case joaat("scorcher"):
			iVar1 = 1000;
			break;
		case joaat("tribike"):
			iVar1 = 2500;
			break;
		case joaat("tribike2"):
			iVar1 = 2500;
			break;
		case joaat("tribike3"):
			iVar1 = 2500;
			break;
		case joaat("cruiser"):
			iVar1 = 3000;
			break;
		case joaat("ztype"):
			if (bVar0)
			{
				iVar1 = 1000000;
			}
			else
			{
				iVar1 = 10000000;
			}
			break;
	}
	if (bVar0 || iParam3 == 1)
	{
		switch (iParam1)
		{
			case joaat("adder"):
				iVar1 = 1000000;
				break;
			case joaat("airbus"):
				iVar1 = 550000;
				break;
			case joaat("akuma"):
				iVar1 = 9000;
				break;
			case joaat("annihilator"):
				iVar1 = 4000000;
				break;
			case joaat("baller2"):
				iVar1 = 90000;
				break;
			case joaat("banshee"):
				iVar1 = 105000;
				break;
			case joaat("barracks"):
				iVar1 = 450000;
				break;
			case joaat("bati"):
				iVar1 = 15000;
				break;
			case joaat("bati2"):
				iVar1 = 15000;
				break;
			case joaat("bfinjection"):
				iVar1 = 16000;
				break;
			case joaat("bison"):
				iVar1 = 30000;
				break;
			case joaat("blazer"):
				iVar1 = 8000;
				break;
			case joaat("bmx"):
				iVar1 = 800;
				break;
			case joaat("bullet"):
				iVar1 = 155000;
				break;
			case joaat("bus"):
				iVar1 = 500000;
				break;
			case joaat("buzzard"):
				iVar1 = 2000000;
				break;
			case joaat("carbonizzare"):
				iVar1 = 195000;
				break;
			case joaat("carbonrs"):
				iVar1 = 40000;
				break;
			case joaat("cargobob"):
				iVar1 = 185000;
				break;
			case joaat("cheetah"):
				iVar1 = 650000;
				break;
			case joaat("coach"):
				iVar1 = 525000;
				break;
			case joaat("cogcabrio"):
				iVar1 = 185000;
				break;
			case joaat("comet2"):
				iVar1 = 100000;
				break;
			case joaat("coquette"):
				iVar1 = 138000;
				break;
			case joaat("cruiser"):
				iVar1 = 800;
				break;
			case joaat("crusader"):
				iVar1 = 225000;
				break;
			case joaat("cuban800"):
				iVar1 = 240000;
				break;
			case joaat("dilettante"):
				iVar1 = 25000;
				break;
			case joaat("double"):
				iVar1 = 12000;
				break;
			case joaat("dubsta"):
				iVar1 = 70000;
				break;
			case joaat("dubsta2"):
				iVar1 = 70000;
				break;
			case joaat("dump"):
				iVar1 = 1000000;
				break;
			case joaat("duster"):
				iVar1 = 275000;
				break;
			case joaat("elegy2"):
				if (!bParam2)
				{
					iVar1 = 95000;
					if (bVar0)
					{
						if (Global_262145.f_19693 /* Tunable: IMPEXP_ELEGY_BASE_PRICE */ >= 0)
						{
							iVar1 = Global_262145.f_19693 /* Tunable: IMPEXP_ELEGY_BASE_PRICE */;
						}
					}
				}
				else
				{
					iVar1 = 0;
					if (bVar0)
					{
						if (Global_262145.f_8607 /* Tunable: ELEGY2_WEB_PRICE_MODIFIER */ >= 0)
						{
							iVar1 = Global_262145.f_8607 /* Tunable: ELEGY2_WEB_PRICE_MODIFIER */;
						}
					}
				}
				break;
			case joaat("entityxf"):
				iVar1 = 795000;
				break;
			case joaat("exemplar"):
				iVar1 = 205000;
				break;
			case joaat("faggio2"):
				iVar1 = 5000;
				break;
			case joaat("felon"):
				iVar1 = 90000;
				break;
			case joaat("felon2"):
				iVar1 = 95000;
				break;
			case joaat("feltzer2"):
				iVar1 = 145000;
				break;
			case joaat("frogger"):
				iVar1 = 1300000;
				break;
			case joaat("fugitive"):
				iVar1 = 24000;
				break;
			case joaat("gauntlet"):
				iVar1 = 32000;
				break;
			case joaat("hexer"):
				iVar1 = 15000;
				break;
			case joaat("hotknife"):
				iVar1 = 90000;
				break;
			case joaat("infernus"):
				iVar1 = 440000;
				break;
			case joaat("issi2"):
				iVar1 = 18000;
				break;
			case joaat("jb700"):
				iVar1 = 350000;
				break;
			case joaat("jetmax"):
				iVar1 = 299000;
				break;
			case joaat("journey"):
				iVar1 = 15000;
				break;
			case joaat("khamelion"):
				iVar1 = 100000;
				break;
			case joaat("luxor"):
				iVar1 = 1500000;
				break;
			case joaat("mammatus"):
				iVar1 = 300000;
				break;
			case joaat("marquis"):
				iVar1 = 413990;
				break;
			case joaat("maverick"):
				iVar1 = 780000;
				break;
			case joaat("monroe"):
				iVar1 = 490000;
				break;
			case joaat("mule"):
				iVar1 = 27000;
				break;
			case joaat("ninef"):
				iVar1 = 120000;
				break;
			case joaat("ninef2"):
				iVar1 = 130000;
				break;
			case joaat("oracle2"):
				iVar1 = 80000;
				break;
			case joaat("pcj"):
				iVar1 = 9000;
				break;
			case joaat("picador"):
				iVar1 = 9000;
				break;
			case joaat("rapidgt"):
				iVar1 = 132000;
				break;
			case joaat("rapidgt2"):
				iVar1 = 140000;
				break;
			case joaat("rentalbus"):
				iVar1 = 30000;
				break;
			case joaat("rocoto"):
				iVar1 = 85000;
				break;
			case joaat("ruffian"):
				iVar1 = 10000;
				break;
			case joaat("sanchez"):
				iVar1 = 7000;
				break;
			case joaat("sandking"):
				iVar1 = 45000;
				break;
			case joaat("schwarzer"):
				iVar1 = 80000;
				break;
			case joaat("scorcher"):
				iVar1 = 2000;
				break;
			case joaat("shamal"):
				iVar1 = 1150000;
				break;
			case joaat("squalo"):
				iVar1 = 196621;
				break;
			case joaat("stinger"):
				iVar1 = 850000;
				break;
			case joaat("stingergt"):
				iVar1 = 875000;
				break;
			case joaat("stretch"):
				iVar1 = 30000;
				break;
			case joaat("stunt"):
				iVar1 = 250000;
				break;
			case joaat("suntrap"):
				iVar1 = 25160;
				break;
			case joaat("superd"):
				iVar1 = 250000;
				break;
			case joaat("surano"):
				iVar1 = 110000;
				break;
			case joaat("titan"):
				iVar1 = 5000000;
				break;
			case joaat("tribike"):
				iVar1 = 10000;
				break;
			case joaat("tribike2"):
				iVar1 = 10000;
				break;
			case joaat("tribike3"):
				iVar1 = 10000;
				break;
			case joaat("tropic"):
				iVar1 = 22000;
				break;
			case joaat("vacca"):
				iVar1 = 240000;
				break;
			case joaat("vader"):
				iVar1 = 9000;
				break;
			case joaat("velum"):
				iVar1 = 450000;
				break;
			case joaat("vigero"):
				iVar1 = 21000;
				break;
			case joaat("voltic"):
				iVar1 = 150000;
				break;
			case joaat("zion"):
				iVar1 = 60000;
				break;
			case joaat("zion2"):
				iVar1 = 65000;
				break;
			case joaat("ztype"):
				iVar1 = 950000;
				break;
		}
		switch (iParam1)
		{
			case joaat("annihilator"):
				iVar1 = 1825000;
				break;
			case joaat("blazer3"):
				iVar1 = 69000;
				break;
			case joaat("bodhi2"):
				iVar1 = 25000;
				break;
			case joaat("buzzard"):
				iVar1 = 1750000;
				break;
			case joaat("dilettante2"):
				iVar1 = 25000;
				break;
			case joaat("dloader"):
				iVar1 = 15000;
				break;
			case joaat("dune2"):
				iVar1 = 1000000;
				break;
			case joaat("frogger"):
				iVar1 = 1300000;
				break;
			case joaat("luxor"):
				iVar1 = 1625000;
				break;
			case joaat("mesa3"):
				iVar1 = 87000;
				break;
			case joaat("peyote"):
				iVar1 = 38000;
				if (bVar0)
				{
					if (Global_262145.f_29366 /* Tunable: SUM_SALE_PRICE_PEYOTE */ >= 0)
					{
						iVar1 = Global_262145.f_29366 /* Tunable: SUM_SALE_PRICE_PEYOTE */;
					}
				}
				break;
			case joaat("rhino"):
				iVar1 = 1500000;
				if (bVar0)
				{
					if (Global_262145.f_4079 /* Tunable: RHINO_EXPENDITURE_MODIFIER */ >= 0)
					{
						iVar1 = Global_262145.f_4079 /* Tunable: RHINO_EXPENDITURE_MODIFIER */;
					}
				}
				break;
			case joaat("romero"):
				iVar1 = 45000;
				if (bVar0)
				{
					if (Global_262145.f_24816 /* Tunable: BB_TRADE_PRICE_EXISTING_VEHICLES_CHARIOT_ROMERO_HEARSE */ >= 0)
					{
						iVar1 = Global_262145.f_24816 /* Tunable: BB_TRADE_PRICE_EXISTING_VEHICLES_CHARIOT_ROMERO_HEARSE */;
					}
				}
				break;
			case joaat("sentinel2"):
				iVar1 = 95000;
				break;
			case joaat("shamal"):
				iVar1 = 1150000;
				break;
			case joaat("surfer"):
				iVar1 = 11000;
				break;
			case joaat("surfer2"):
				iVar1 = 5000;
				break;
			case joaat("titan"):
				iVar1 = 2000000;
				break;
			case joaat("towtruck2"):
				iVar1 = 32000;
				break;
		}
		switch (iParam1)
		{
			case joaat("bodhi2"):
				iVar1 = 25000;
				if (bVar0)
				{
					if (Global_262145.f_4740 /* Tunable: BODHI2_EXPENDITURE_MODIFIER */ >= 0)
					{
						iVar1 = Global_262145.f_4740 /* Tunable: BODHI2_EXPENDITURE_MODIFIER */;
					}
				}
				break;
			case joaat("dune"):
				iVar1 = 20000;
				if (bVar0 || iParam3 == 1)
				{
					iVar1 = 20000;
					if (Global_262145.f_4741 /* Tunable: DUNE_EXPENDITURE_MODIFIER */ >= 0 && bVar0)
					{
						iVar1 = Global_262145.f_4741 /* Tunable: DUNE_EXPENDITURE_MODIFIER */;
					}
				}
				break;
			case joaat("rebel"):
				iVar1 = 3000;
				break;
			case joaat("sadler"):
				iVar1 = 35000;
				break;
			case joaat("sanchez2"):
				iVar1 = 8000;
				break;
			case joaat("sandking2"):
				iVar1 = 38000;
				break;
		}
		switch (iParam1)
		{
			case joaat("asea"):
				iVar1 = 12000;
				break;
			case joaat("asterope"):
				iVar1 = 26000;
				if (bVar0)
				{
					if (Global_262145.f_7030 /* Tunable: BUSINESS_VEHICLES_ASTEROPE */ >= 0)
					{
						iVar1 = Global_262145.f_7030 /* Tunable: BUSINESS_VEHICLES_ASTEROPE */;
					}
				}
				break;
			case joaat("bobcatxl"):
				iVar1 = 23000;
				if (bVar0)
				{
					if (Global_262145.f_7031 /* Tunable: BUSINESS_VEHICLES_BOBCATXL */ >= 0)
					{
						iVar1 = Global_262145.f_7031 /* Tunable: BUSINESS_VEHICLES_BOBCATXL */;
					}
				}
				break;
			case joaat("cavalcade"):
				iVar1 = 60000;
				if (bVar0 || iParam3 == 1)
				{
					iVar1 = 60000;
					if (Global_262145.f_4036 /* Tunable: CAVALCADE_EXPENDITURE_MODIFIER */ >= 0 && bVar0)
					{
						iVar1 = Global_262145.f_4036 /* Tunable: CAVALCADE_EXPENDITURE_MODIFIER */;
					}
				}
				break;
			case joaat("cavalcade2"):
				iVar1 = 60000;
				if (bVar0 || iParam3 == 1)
				{
					iVar1 = 70000;
					if (Global_262145.f_7032 /* Tunable: BUSINESS_VEHICLES_CAVALCADE2 */ >= 0 && bVar0)
					{
						iVar1 = Global_262145.f_7032 /* Tunable: BUSINESS_VEHICLES_CAVALCADE2 */;
					}
				}
				break;
			case joaat("granger"):
				iVar1 = 35000;
				if (bVar0)
				{
					if (Global_262145.f_7033 /* Tunable: BUSINESS_VEHICLES_GRANGER */ >= 0)
					{
						iVar1 = Global_262145.f_7033 /* Tunable: BUSINESS_VEHICLES_GRANGER */;
					}
				}
				break;
			case joaat("ingot"):
				iVar1 = 9000;
				if (bVar0)
				{
					if (Global_262145.f_7034 /* Tunable: BUSINESS_VEHICLES_INGOT */ >= 0)
					{
						iVar1 = Global_262145.f_7034 /* Tunable: BUSINESS_VEHICLES_INGOT */;
					}
				}
				break;
			case joaat("intruder"):
				iVar1 = 16000;
				if (bVar0)
				{
					if (Global_262145.f_7035 /* Tunable: BUSINESS_VEHICLES_INTRUDER */ >= 0)
					{
						iVar1 = Global_262145.f_7035 /* Tunable: BUSINESS_VEHICLES_INTRUDER */;
					}
				}
				break;
			case joaat("minivan"):
				iVar1 = 30000;
				if (bVar0)
				{
					if (Global_262145.f_7036 /* Tunable: BUSINESS_VEHICLES_MINIVAN */ >= 0)
					{
						iVar1 = Global_262145.f_7036 /* Tunable: BUSINESS_VEHICLES_MINIVAN */;
					}
				}
				break;
			case joaat("premier"):
				iVar1 = 10000;
				if (bVar0)
				{
					if (Global_262145.f_7037 /* Tunable: BUSINESS_VEHICLES_PREMIER */ >= 0)
					{
						iVar1 = Global_262145.f_7037 /* Tunable: BUSINESS_VEHICLES_PREMIER */;
					}
				}
				break;
			case joaat("radi"):
				iVar1 = 32000;
				if (bVar0)
				{
					if (Global_262145.f_7038 /* Tunable: BUSINESS_VEHICLES_RADI */ >= 0)
					{
						iVar1 = Global_262145.f_7038 /* Tunable: BUSINESS_VEHICLES_RADI */;
					}
				}
				break;
			case joaat("rancherxl"):
				iVar1 = 9000;
				if (bVar0)
				{
					if (Global_262145.f_7039 /* Tunable: BUSINESS_VEHICLES_RANCHERXL */ >= 0)
					{
						iVar1 = Global_262145.f_7039 /* Tunable: BUSINESS_VEHICLES_RANCHERXL */;
					}
				}
				break;
			case joaat("ratloader"):
				iVar1 = 6000;
				if (bVar0)
				{
					if (Global_262145.f_7059 /* Tunable: VALENTINE_MODIFIER_VEHICLE_RATLOADER */ >= 0)
					{
						iVar1 = Global_262145.f_7059 /* Tunable: VALENTINE_MODIFIER_VEHICLE_RATLOADER */;
					}
				}
				break;
			case joaat("stanier"):
				iVar1 = 10000;
				if (bVar0)
				{
					if (Global_262145.f_7040 /* Tunable: BUSINESS_VEHICLES_STANIER */ >= 0)
					{
						iVar1 = Global_262145.f_7040 /* Tunable: BUSINESS_VEHICLES_STANIER */;
					}
				}
				break;
			case joaat("stratum"):
				iVar1 = 10000;
				if (bVar0)
				{
					if (Global_262145.f_7041 /* Tunable: BUSINESS_VEHICLES_STRATUM */ >= 0)
					{
						iVar1 = Global_262145.f_7041 /* Tunable: BUSINESS_VEHICLES_STRATUM */;
					}
				}
				break;
			case joaat("washington"):
				iVar1 = 15000;
				if (bVar0)
				{
					if (Global_262145.f_7042 /* Tunable: BUSINESS_VEHICLES_WASHINGTON */ >= 0)
					{
						iVar1 = Global_262145.f_7042 /* Tunable: BUSINESS_VEHICLES_WASHINGTON */;
					}
				}
				break;
			case joaat("cargobob"):
				iVar1 = 1790000;
				if (bVar0)
				{
					if (Global_262145.f_16621 /* Tunable: EXEC1_CARGOBOB */ >= 0)
					{
						iVar1 = Global_262145.f_16621 /* Tunable: EXEC1_CARGOBOB */;
					}
				}
				break;
			case joaat("cargobob2"):
				iVar1 = 1995000;
				if (bVar0)
				{
					if (Global_262145.f_16622 /* Tunable: EXEC1_CARGOBOB2 */ >= 0)
					{
						iVar1 = Global_262145.f_16622 /* Tunable: EXEC1_CARGOBOB2 */;
					}
				}
				break;
			case joaat("tug"):
				iVar1 = 1250000;
				if (bVar0)
				{
					if (Global_262145.f_16628 /* Tunable: EXEC1_TUG */ >= 0)
					{
						iVar1 = Global_262145.f_16628 /* Tunable: EXEC1_TUG */;
					}
				}
				break;
			case joaat("nimbus"):
				iVar1 = 1900000;
				if (bVar0)
				{
					if (Global_262145.f_16626 /* Tunable: EXEC1_BUCKINGHAM_NIMBUS */ >= 0)
					{
						iVar1 = Global_262145.f_16626 /* Tunable: EXEC1_BUCKINGHAM_NIMBUS */;
					}
				}
				break;
			case joaat("brickade"):
				iVar1 = 1110000;
				if (bVar0)
				{
					if (Global_262145.f_16624 /* Tunable: EXEC1_HVY_BRICKADE */ >= 0)
					{
						iVar1 = Global_262145.f_16624 /* Tunable: EXEC1_HVY_BRICKADE */;
					}
				}
				break;
			case joaat("windsor2"):
				iVar1 = 900000;
				if (bVar0)
				{
					if (Global_262145.f_16630 /* Tunable: EXEC1_ENUS_WINDSOR_DROP */ >= 0)
					{
						iVar1 = Global_262145.f_16630 /* Tunable: EXEC1_ENUS_WINDSOR_DROP */;
					}
				}
				break;
			case joaat("prototipo"):
				iVar1 = 2700000;
				if (bVar0)
				{
					if (Global_262145.f_16635 /* Tunable: EXEC1_PROGEN_X80_PROTO */ >= 0)
					{
						iVar1 = Global_262145.f_16635 /* Tunable: EXEC1_PROGEN_X80_PROTO */;
					}
				}
				break;
			case joaat("fmj"):
				iVar1 = 1750000;
				if (bVar0)
				{
					if (Global_262145.f_16625 /* Tunable: EXEC1_VAPID_FMJ */ >= 0)
					{
						iVar1 = Global_262145.f_16625 /* Tunable: EXEC1_VAPID_FMJ */;
					}
				}
				break;
			case joaat("bestiagts"):
				iVar1 = 610000;
				if (bVar0)
				{
					if (Global_262145.f_16623 /* Tunable: EXEC1_GROTTI_BESTIA */ >= 0)
					{
						iVar1 = Global_262145.f_16623 /* Tunable: EXEC1_GROTTI_BESTIA */;
					}
				}
				break;
			case joaat("xls"):
				iVar1 = 253000;
				if (bVar0)
				{
					if (Global_262145.f_16631 /* Tunable: EXEC1_BENEFACTOR_XLS */ >= 0)
					{
						iVar1 = Global_262145.f_16631 /* Tunable: EXEC1_BENEFACTOR_XLS */;
					}
				}
				break;
			case joaat("xls2"):
				iVar1 = 522000;
				if (bVar0)
				{
					if (Global_262145.f_16632 /* Tunable: EXEC1_BENEFACTOR_XLS_ARMORED */ >= 0)
					{
						iVar1 = Global_262145.f_16632 /* Tunable: EXEC1_BENEFACTOR_XLS_ARMORED */;
					}
				}
				break;
			case joaat("seven70"):
				iVar1 = 695000;
				if (bVar0)
				{
					if (Global_262145.f_16633 /* Tunable: EXEC1_DEWBAUCHEE_SEVEN70 */ >= 0)
					{
						iVar1 = Global_262145.f_16633 /* Tunable: EXEC1_DEWBAUCHEE_SEVEN70 */;
					}
				}
				break;
			case joaat("pfister811"):
				iVar1 = 1135000;
				if (bVar0)
				{
					if (Global_262145.f_16634 /* Tunable: EXEC1_PFISTER_811 */ >= 0)
					{
						iVar1 = Global_262145.f_16634 /* Tunable: EXEC1_PFISTER_811 */;
					}
				}
				break;
			case joaat("reaper"):
				iVar1 = 1595000;
				if (bVar0)
				{
					if (Global_262145.f_16098 /* Tunable: EXEC_VEH_PEGASUS_REAPER */ >= 0)
					{
						iVar1 = Global_262145.f_16098 /* Tunable: EXEC_VEH_PEGASUS_REAPER */;
					}
				}
				break;
			case joaat("rumpo3"):
				iVar1 = 130000;
				if (bVar0)
				{
					if (Global_262145.f_16627 /* Tunable: EXEC1_BRAVADO_RUMPO_CUSTOM */ >= 0)
					{
						iVar1 = Global_262145.f_16627 /* Tunable: EXEC1_BRAVADO_RUMPO_CUSTOM */;
					}
				}
				break;
			case joaat("volatus"):
				iVar1 = 2295000;
				if (bVar0)
				{
					if (Global_262145.f_16629 /* Tunable: EXEC1_BUCKINGHAM_VOLATUS */ >= 0)
					{
						iVar1 = Global_262145.f_16629 /* Tunable: EXEC1_BUCKINGHAM_VOLATUS */;
					}
				}
				break;
			case joaat("le7b"):
				iVar1 = 2475000;
				if (bVar0)
				{
					if (Global_262145.f_17402 /* Tunable: STUNT_ANNIS_RE7B */ >= 0)
					{
						iVar1 = Global_262145.f_17402 /* Tunable: STUNT_ANNIS_RE7B */;
					}
				}
				break;
			case joaat("omnis"):
				if (!bParam2)
				{
					iVar1 = 701000;
					if (bVar0)
					{
						if (Global_262145.f_17403 /* Tunable: STUNT_OBEY_OMNIS */ >= 0)
						{
							iVar1 = Global_262145.f_17403 /* Tunable: STUNT_OBEY_OMNIS */;
						}
					}
				}
				else
				{
					iVar1 = 0;
				}
				break;
			case joaat("tropos"):
				iVar1 = 816000;
				if (bVar0)
				{
					if (Global_262145.f_17404 /* Tunable: STUNT_LAMPADATI_TROPOS_RALLYE */ >= 0)
					{
						iVar1 = Global_262145.f_17404 /* Tunable: STUNT_LAMPADATI_TROPOS_RALLYE */;
					}
				}
				break;
			case joaat("brioso"):
				iVar1 = 155000;
				if (bVar0)
				{
					if (Global_262145.f_17405 /* Tunable: STUNT_GROTTI_BRIOSO_RA */ >= 0)
					{
						iVar1 = Global_262145.f_17405 /* Tunable: STUNT_GROTTI_BRIOSO_RA */;
					}
				}
				break;
			case joaat("trophytruck"):
				iVar1 = 550000;
				if (bVar0)
				{
					if (Global_262145.f_17406 /* Tunable: STUNT_VAPID_TROPHY_TRUCK */ >= 0)
					{
						iVar1 = Global_262145.f_17406 /* Tunable: STUNT_VAPID_TROPHY_TRUCK */;
					}
				}
				break;
			case joaat("trophytruck2"):
				iVar1 = 695000;
				if (bVar0)
				{
					if (Global_262145.f_17407 /* Tunable: STUNT_VAPID_DESERT_RAID */ >= 0)
					{
						iVar1 = Global_262145.f_17407 /* Tunable: STUNT_VAPID_DESERT_RAID */;
					}
				}
				break;
			case joaat("contender"):
				iVar1 = 250000;
				if (bVar0)
				{
					if (Global_262145.f_17408 /* Tunable: STUNT_BRAVADO_CONTENDER */ >= 0)
					{
						iVar1 = Global_262145.f_17408 /* Tunable: STUNT_BRAVADO_CONTENDER */;
					}
				}
				break;
			case joaat("cliffhanger"):
				iVar1 = 225000;
				if (bVar0)
				{
					if (Global_262145.f_17409 /* Tunable: STUNT_WESTERN_CLIFFHANGER */ >= 0)
					{
						iVar1 = Global_262145.f_17409 /* Tunable: STUNT_WESTERN_CLIFFHANGER */;
					}
				}
				break;
			case joaat("bf400"):
				iVar1 = 95000;
				if (bVar0)
				{
					if (Global_262145.f_17410 /* Tunable: STUNT_NAGASAKI_BF400 */ >= 0)
					{
						iVar1 = Global_262145.f_17410 /* Tunable: STUNT_NAGASAKI_BF400 */;
					}
				}
				break;
			case joaat("tyrus"):
				iVar1 = 2550000;
				if (bVar0)
				{
					if (Global_262145.f_17400 /* Tunable: STUNT_PROGEN_TYRUS */ >= 0)
					{
						iVar1 = Global_262145.f_17400 /* Tunable: STUNT_PROGEN_TYRUS */;
					}
				}
				break;
			case joaat("lynx"):
				iVar1 = 1735000;
				if (bVar0)
				{
					if (Global_262145.f_17411 /* Tunable: STUNT_OCELOT_LYNX */ >= 0)
					{
						iVar1 = Global_262145.f_17411 /* Tunable: STUNT_OCELOT_LYNX */;
					}
				}
				break;
			case joaat("sheava"):
				iVar1 = 1995000;
				if (bVar0)
				{
					if (Global_262145.f_17399 /* Tunable: STUNT_EMPEROR_SHEAVA */ >= 0)
					{
						iVar1 = Global_262145.f_17399 /* Tunable: STUNT_EMPEROR_SHEAVA */;
					}
				}
				break;
			case joaat("rallytruck"):
				if (!bParam2)
				{
					iVar1 = 1300000;
					if (bVar0)
					{
						if (Global_262145.f_17413 /* Tunable: STUNT_MTL_DUNE_LIVERY_1 */ >= 0)
						{
							iVar1 = Global_262145.f_17413 /* Tunable: STUNT_MTL_DUNE_LIVERY_1 */;
						}
					}
				}
				else
				{
					iVar1 = 1385000;
					if (bVar0)
					{
						if (Global_262145.f_17414 /* Tunable: STUNT_MTL_DUNE_LIVERY_2 */ >= 0)
						{
							iVar1 = Global_262145.f_17414 /* Tunable: STUNT_MTL_DUNE_LIVERY_2 */;
						}
					}
				}
				break;
			case joaat("tampa2"):
				iVar1 = 995000;
				if (bVar0)
				{
					if (Global_262145.f_17401 /* Tunable: STUNT_DECALSSE_DRIFT_TAMPA */ >= 0)
					{
						iVar1 = Global_262145.f_17401 /* Tunable: STUNT_DECALSSE_DRIFT_TAMPA */;
					}
				}
				break;
			case joaat("gargoyle"):
				iVar1 = 120000;
				if (bVar0 && Global_262145.f_17412 /* Tunable: STUNT_WESTERN_GARGOYLE */ >= 0)
				{
					iVar1 = Global_262145.f_17412 /* Tunable: STUNT_WESTERN_GARGOYLE */;
				}
				if (bParam2)
				{
					iVar2 = iVar1;
					iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(120000) * 0.75f));
					if (bVar0 && Global_262145.f_25931 /* Tunable: AW_TRADE_PRICE_GARGOYLE */ >= 0)
					{
						iVar1 = Global_262145.f_25931 /* Tunable: AW_TRADE_PRICE_GARGOYLE */;
					}
				}
				break;
			case joaat("esskey"):
				iVar1 = 264000;
				if (bVar0)
				{
					if (Global_262145.f_17973 /* Tunable: BIKER_WEBSITE_PEGASSI_ESSKEY */ >= 0)
					{
						iVar1 = Global_262145.f_17973 /* Tunable: BIKER_WEBSITE_PEGASSI_ESSKEY */;
					}
				}
				break;
			case joaat("nightblade"):
				iVar1 = 100000;
				if (bVar0)
				{
					if (Global_262145.f_17976 /* Tunable: BIKER_WEBSITE_WESTERN_NIGHTBLADE */ >= 0)
					{
						iVar1 = Global_262145.f_17976 /* Tunable: BIKER_WEBSITE_WESTERN_NIGHTBLADE */;
					}
				}
				break;
			case joaat("defiler"):
				if (bParam2)
				{
					iVar1 = 309000;
					if (bVar0)
					{
						if (Global_262145.f_28508 /* Tunable: CH_TRADE_PRICE_DEFILER */ >= 0)
						{
							iVar1 = Global_262145.f_28508 /* Tunable: CH_TRADE_PRICE_DEFILER */;
						}
					}
				}
				else
				{
					iVar1 = 412000;
					if (bVar0)
					{
						if (Global_262145.f_17972 /* Tunable: BIKER_WEBSITE_SHITZU_DEFILER */ >= 0)
						{
							iVar1 = Global_262145.f_17972 /* Tunable: BIKER_WEBSITE_SHITZU_DEFILER */;
						}
					}
					iVar2 = 309000;
					if (bVar0)
					{
						if (Global_262145.f_28508 /* Tunable: CH_TRADE_PRICE_DEFILER */ >= 0)
						{
							iVar2 = Global_262145.f_28508 /* Tunable: CH_TRADE_PRICE_DEFILER */;
						}
					}
				}
				break;
			case joaat("avarus"):
				iVar1 = 116000;
				if (bVar0)
				{
					if (Global_262145.f_17967 /* Tunable: BIKER_WEBSITE_LCC_AVARUS */ >= 0)
					{
						iVar1 = Global_262145.f_17967 /* Tunable: BIKER_WEBSITE_LCC_AVARUS */;
					}
				}
				break;
			case joaat("zombiea"):
				iVar1 = 99000;
				if (bVar0)
				{
					if (Global_262145.f_17983 /* Tunable: BIKER_WEBSITE_WESTERN_ZOMBIE_BOBBER */ >= 0)
					{
						iVar1 = Global_262145.f_17983 /* Tunable: BIKER_WEBSITE_WESTERN_ZOMBIE_BOBBER */;
					}
				}
				break;
			case joaat("zombieb"):
				if (!bParam2)
				{
					iVar1 = 122000;
					if (bVar0)
					{
						if (Global_262145.f_17984 /* Tunable: BIKER_WEBSITE_WESTERN_ZOMBIE_CHOPPER */ >= 0)
						{
							iVar1 = Global_262145.f_17984 /* Tunable: BIKER_WEBSITE_WESTERN_ZOMBIE_CHOPPER */;
						}
					}
				}
				else
				{
					iVar1 = 0;
				}
				break;
			case joaat("chimera"):
				iVar1 = 210000;
				if (bVar0)
				{
					if (Global_262145.f_17970 /* Tunable: BIKER_WEBSITE_NAGASAKI_CHIMERA */ >= 0)
					{
						iVar1 = Global_262145.f_17970 /* Tunable: BIKER_WEBSITE_NAGASAKI_CHIMERA */;
					}
				}
				break;
			case joaat("daemon2"):
				iVar1 = 145000;
				if (bVar0)
				{
					if (Global_262145.f_17971 /* Tunable: BIKER_WEBSITE_WESTERN_DAEMON_CUSTOM */ >= 0)
					{
						iVar1 = Global_262145.f_17971 /* Tunable: BIKER_WEBSITE_WESTERN_DAEMON_CUSTOM */;
					}
				}
				break;
			case joaat("ratbike"):
				iVar1 = 48000;
				if (bVar0)
				{
					if (Global_262145.f_17978 /* Tunable: BIKER_WEBSITE_WESTERN_RAT_BIKE */ >= 0)
					{
						iVar1 = Global_262145.f_17978 /* Tunable: BIKER_WEBSITE_WESTERN_RAT_BIKE */;
					}
				}
				break;
			case joaat("shotaro"):
				iVar1 = 2225000;
				if (bVar0)
				{
					if (Global_262145.f_17980 /* Tunable: BIKER_WEBSITE_NAGASAKI_SHOTARO */ >= 0)
					{
						iVar1 = Global_262145.f_17980 /* Tunable: BIKER_WEBSITE_NAGASAKI_SHOTARO */;
					}
				}
				break;
			case joaat("raptor"):
				iVar1 = 648000;
				if (bVar0)
				{
					if (Global_262145.f_17977 /* Tunable: BIKER_WEBSITE_BF_RAPTOR */ >= 0)
					{
						iVar1 = Global_262145.f_17977 /* Tunable: BIKER_WEBSITE_BF_RAPTOR */;
					}
				}
				break;
			case joaat("hakuchou2"):
				iVar1 = 976000;
				if (bVar0)
				{
					if (Global_262145.f_17974 /* Tunable: BIKER_WEBSITE_SHITZU_HAKUCHOU_DRAG */ >= 0)
					{
						iVar1 = Global_262145.f_17974 /* Tunable: BIKER_WEBSITE_SHITZU_HAKUCHOU_DRAG */;
					}
				}
				break;
			case joaat("blazer4"):
				iVar1 = 81000;
				if (bVar0)
				{
					if (Global_262145.f_17969 /* Tunable: BIKER_WEBSITE_NAGASAKI_STREET_BLAZER */ >= 0)
					{
						iVar1 = Global_262145.f_17969 /* Tunable: BIKER_WEBSITE_NAGASAKI_STREET_BLAZER */;
					}
				}
				break;
			case joaat("sanctus"):
				iVar1 = 1995000;
				if (bVar0)
				{
					if (Global_262145.f_17979 /* Tunable: BIKER_WEBSITE_LCC_SANCTUS */ >= 0)
					{
						iVar1 = Global_262145.f_17979 /* Tunable: BIKER_WEBSITE_LCC_SANCTUS */;
					}
				}
				break;
			case joaat("vortex"):
				if (!bParam2)
				{
					iVar1 = 356000;
					if (bVar0)
					{
						if (Global_262145.f_17981 /* Tunable: BIKER_WEBSITE_PEGASSI_VORTEX */ >= 0)
						{
							iVar1 = Global_262145.f_17981 /* Tunable: BIKER_WEBSITE_PEGASSI_VORTEX */;
						}
					}
				}
				else
				{
					iVar1 = 0;
				}
				break;
			case joaat("manchez"):
				if (bParam2)
				{
					iVar1 = 50250;
					if (bVar0)
					{
						if (Global_262145.f_28509 /* Tunable: CH_TRADE_PRICE_MANCHEZ */ >= 0)
						{
							iVar1 = Global_262145.f_28509 /* Tunable: CH_TRADE_PRICE_MANCHEZ */;
						}
					}
				}
				else
				{
					iVar1 = 67000;
					if (bVar0)
					{
						if (Global_262145.f_17975 /* Tunable: BIKER_WEBSITE_MAIBATSU_MANCHEZ */ >= 0)
						{
							iVar1 = Global_262145.f_17975 /* Tunable: BIKER_WEBSITE_MAIBATSU_MANCHEZ */;
						}
					}
					iVar2 = 50250;
					if (bVar0)
					{
						if (Global_262145.f_28509 /* Tunable: CH_TRADE_PRICE_MANCHEZ */ >= 0)
						{
							iVar2 = Global_262145.f_28509 /* Tunable: CH_TRADE_PRICE_MANCHEZ */;
						}
					}
				}
				break;
			case joaat("tornado6"):
				iVar1 = 378000;
				if (bVar0)
				{
					if (Global_262145.f_19042 /* Tunable: WEBSITE_DECLASSE_TORNADO_RAT_ROD */ >= 0)
					{
						iVar1 = Global_262145.f_19042 /* Tunable: WEBSITE_DECLASSE_TORNADO_RAT_ROD */;
					}
				}
				break;
			case joaat("youga2"):
				iVar1 = 195000;
				if (bVar0)
				{
					if (Global_262145.f_19045 /* Tunable: WEBSITE_VAPID_YOUGA_CLASSIC */ >= 0)
					{
						iVar1 = Global_262145.f_19045 /* Tunable: WEBSITE_VAPID_YOUGA_CLASSIC */;
					}
				}
				break;
			case joaat("wolfsbane"):
				if (bParam2)
				{
					iVar1 = 71250;
					if (bVar0)
					{
					}
				}
				else
				{
					iVar1 = 95000;
					if (bVar0)
					{
						if (Global_262145.f_17982 /* Tunable: BIKER_WEBSITE_WESTERN_WOLFSBANE */ >= 0)
						{
							iVar1 = Global_262145.f_17982 /* Tunable: BIKER_WEBSITE_WESTERN_WOLFSBANE */;
						}
					}
					iVar2 = 71250;
					if (bVar0)
					{
					}
				}
				break;
			case joaat("faggio3"):
				iVar1 = 55000;
				if (bVar0)
				{
					if (Global_262145.f_19043 /* Tunable: WEBSITE_PEGASSI_FAGGIO_MOD */ >= 0)
					{
						iVar1 = Global_262145.f_19043 /* Tunable: WEBSITE_PEGASSI_FAGGIO_MOD */;
					}
				}
				break;
			case joaat("faggio"):
				iVar1 = 47500;
				if (bVar0)
				{
					if (Global_262145.f_19044 /* Tunable: WEBSITE_PEGASSI_FAGGIO_SPORT */ >= 0)
					{
						iVar1 = Global_262145.f_19044 /* Tunable: WEBSITE_PEGASSI_FAGGIO_SPORT */;
					}
				}
				break;
			case joaat("dune5"):
				if (!bParam2)
				{
					iVar1 = 3192000;
					if (bVar0)
					{
						if (Global_262145.f_19663 /* Tunable: IMPEXP_DUNE5_BIN_PRICE */ >= 0)
						{
							iVar1 = Global_262145.f_19663 /* Tunable: IMPEXP_DUNE5_BIN_PRICE */;
						}
					}
				}
				else
				{
					iVar1 = 2400000;
					if (bVar0)
					{
						if (Global_262145.f_19664 /* Tunable: IMPEXP_DUNE5_SECUROSERV_PRICE */ >= 0)
						{
							iVar1 = Global_262145.f_19664 /* Tunable: IMPEXP_DUNE5_SECUROSERV_PRICE */;
						}
					}
				}
				break;
			case joaat("phantom2"):
				if (!bParam2)
				{
					iVar1 = 2553600;
					if (bVar0)
					{
						if (Global_262145.f_19665 /* Tunable: IMPEXP_PHANTOM2_BIN_PRICE */ >= 0)
						{
							iVar1 = Global_262145.f_19665 /* Tunable: IMPEXP_PHANTOM2_BIN_PRICE */;
						}
					}
				}
				else
				{
					iVar1 = 1920000;
					if (bVar0)
					{
						if (Global_262145.f_19666 /* Tunable: IMPEXP_PHANTOM2_SECUROSERV_PRICE */ >= 0)
						{
							iVar1 = Global_262145.f_19666 /* Tunable: IMPEXP_PHANTOM2_SECUROSERV_PRICE */;
						}
					}
				}
				break;
			case joaat("technical2"):
				if (!bParam2)
				{
					iVar1 = 1489600;
					if (bVar0)
					{
						if (Global_262145.f_19667 /* Tunable: IMPEXP_TECHNICAL2_BIN_PRICE */ >= 0)
						{
							iVar1 = Global_262145.f_19667 /* Tunable: IMPEXP_TECHNICAL2_BIN_PRICE */;
						}
					}
				}
				else
				{
					iVar1 = 1120000;
					if (bVar0)
					{
						if (Global_262145.f_19668 /* Tunable: IMPEXP_TECHNICAL2_SECUROSERV_PRICE */ >= 0)
						{
							iVar1 = Global_262145.f_19668 /* Tunable: IMPEXP_TECHNICAL2_SECUROSERV_PRICE */;
						}
					}
				}
				break;
			case joaat("blazer5"):
				if (!bParam2)
				{
					iVar1 = 1755600;
					if (bVar0)
					{
						if (Global_262145.f_19669 /* Tunable: IMPEXP_BLAZER5_BIN_PRICE */ >= 0)
						{
							iVar1 = Global_262145.f_19669 /* Tunable: IMPEXP_BLAZER5_BIN_PRICE */;
						}
					}
				}
				else
				{
					iVar1 = 1320000;
					if (bVar0)
					{
						if (Global_262145.f_19670 /* Tunable: IMPEXP_BLAZER5_SECUROSERV_PRICE */ >= 0)
						{
							iVar1 = Global_262145.f_19670 /* Tunable: IMPEXP_BLAZER5_SECUROSERV_PRICE */;
						}
					}
				}
				break;
			case joaat("boxville5"):
				if (!bParam2)
				{
					iVar1 = 2926000;
					if (bVar0)
					{
						if (Global_262145.f_19671 /* Tunable: IMPEXP_BOXVILLE5_BIN_PRICE */ >= 0)
						{
							iVar1 = Global_262145.f_19671 /* Tunable: IMPEXP_BOXVILLE5_BIN_PRICE */;
						}
					}
				}
				else
				{
					iVar1 = 2200000;
					if (bVar0)
					{
						if (Global_262145.f_19672 /* Tunable: IMPEXP_BOXVILLE5_SECUROSERV_PRICE */ >= 0)
						{
							iVar1 = Global_262145.f_19672 /* Tunable: IMPEXP_BOXVILLE5_SECUROSERV_PRICE */;
						}
					}
				}
				break;
			case joaat("wastelander"):
				if (!bParam2)
				{
					iVar1 = 658350;
					if (bVar0)
					{
						if (Global_262145.f_19673 /* Tunable: IMPEXP_WASTELANDER_BIN_PRICE */ >= 0)
						{
							iVar1 = Global_262145.f_19673 /* Tunable: IMPEXP_WASTELANDER_BIN_PRICE */;
						}
					}
				}
				else
				{
					iVar1 = 495000;
					if (bVar0)
					{
						if (Global_262145.f_19674 /* Tunable: IMPEXP_WASTELANDER_SECUROSERV_PRICE */ >= 0)
						{
							iVar1 = Global_262145.f_19674 /* Tunable: IMPEXP_WASTELANDER_SECUROSERV_PRICE */;
						}
					}
				}
				break;
			case joaat("ruiner2"):
				if (!bParam2)
				{
					iVar1 = 5745600;
					if (bVar0)
					{
						if (Global_262145.f_19675 /* Tunable: IMPEXP_RUINER2_BIN_PRICE */ >= 0)
						{
							iVar1 = Global_262145.f_19675 /* Tunable: IMPEXP_RUINER2_BIN_PRICE */;
						}
					}
				}
				else
				{
					iVar1 = 4320000;
					if (bVar0)
					{
						if (Global_262145.f_19676 /* Tunable: IMPEXP_RUINER2_SECUROSERV_PRICE */ >= 0)
						{
							iVar1 = Global_262145.f_19676 /* Tunable: IMPEXP_RUINER2_SECUROSERV_PRICE */;
						}
					}
				}
				break;
			case joaat("voltic2"):
				if (!bParam2)
				{
					iVar1 = 3830400;
					if (bVar0)
					{
						if (Global_262145.f_19677 /* Tunable: IMPEXP_VOLTIC2_BIN_PRICE */ >= 0)
						{
							iVar1 = Global_262145.f_19677 /* Tunable: IMPEXP_VOLTIC2_BIN_PRICE */;
						}
					}
				}
				else
				{
					iVar1 = 2880000;
					if (bVar0)
					{
						if (Global_262145.f_19678 /* Tunable: IMPEXP_VOLTIC2_SECUROSERV_PRICE */ >= 0)
						{
							iVar1 = Global_262145.f_19678 /* Tunable: IMPEXP_VOLTIC2_SECUROSERV_PRICE */;
						}
					}
				}
				break;
			case joaat("penetrator"):
				iVar1 = 880000;
				if (bVar0)
				{
					if (Global_262145.f_19691 /* Tunable: IMPEXP_PENETRATOR_PRICE */ >= 0)
					{
						iVar1 = Global_262145.f_19691 /* Tunable: IMPEXP_PENETRATOR_PRICE */;
					}
				}
				break;
			case joaat("tempesta"):
				iVar1 = 1329000;
				if (bVar0 && Global_262145.f_19692 /* Tunable: IMPEXP_TEMPESTA_PRICE */ >= 0)
				{
					iVar1 = Global_262145.f_19692 /* Tunable: IMPEXP_TEMPESTA_PRICE */;
				}
				if (bParam2)
				{
					iVar2 = iVar1;
					iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(1329000) * 0.75f));
				}
				break;
			case joaat("italigtb"):
				iVar1 = 1189000;
				if (bVar0)
				{
					if (Global_262145.f_19679 /* Tunable: IMPEXP_ITALIGTB_BASE_PRICE */ >= 0)
					{
						iVar1 = Global_262145.f_19679 /* Tunable: IMPEXP_ITALIGTB_BASE_PRICE */;
					}
				}
				break;
			case joaat("italigtb2"):
				iVar1 = (Global_262145.f_19679 /* Tunable: IMPEXP_ITALIGTB_BASE_PRICE */ + __LIB_2__::func_115(iParam1));
				break;
			case joaat("nero"):
				iVar1 = 1440000;
				if (bVar0)
				{
					if (Global_262145.f_19683 /* Tunable: IMPEXP_NERO_BASE_PRICE */ >= 0)
					{
						iVar1 = Global_262145.f_19683 /* Tunable: IMPEXP_NERO_BASE_PRICE */;
					}
				}
				break;
			case joaat("nero2"):
				iVar1 = (Global_262145.f_19683 /* Tunable: IMPEXP_NERO_BASE_PRICE */ + __LIB_2__::func_115(iParam1));
				break;
			case joaat("diablous"):
				iVar1 = 169000;
				if (bVar0)
				{
					if (Global_262145.f_19689 /* Tunable: IMPEXP_DIABLOUS_BASE_PRICE */ >= 0)
					{
						iVar1 = Global_262145.f_19689 /* Tunable: IMPEXP_DIABLOUS_BASE_PRICE */;
					}
				}
				break;
			case joaat("diablous2"):
				iVar1 = (Global_262145.f_19689 /* Tunable: IMPEXP_DIABLOUS_BASE_PRICE */ + __LIB_2__::func_115(iParam1));
				break;
			case joaat("fcr"):
				iVar1 = 135000;
				if (bVar0)
				{
					if (Global_262145.f_19687 /* Tunable: IMPEXP_FCR_BASE_PRICE */ >= 0)
					{
						iVar1 = Global_262145.f_19687 /* Tunable: IMPEXP_FCR_BASE_PRICE */;
					}
				}
				break;
			case joaat("fcr2"):
				iVar1 = (Global_262145.f_19687 /* Tunable: IMPEXP_FCR_BASE_PRICE */ + __LIB_2__::func_115(iParam1));
				break;
			case joaat("specter"):
				iVar1 = 599000;
				if (bVar0)
				{
					if (Global_262145.f_19681 /* Tunable: IMPEXP_SPECTER_BASE_PRICE */ >= 0)
					{
						iVar1 = Global_262145.f_19681 /* Tunable: IMPEXP_SPECTER_BASE_PRICE */;
					}
				}
				break;
			case joaat("specter2"):
				iVar1 = (Global_262145.f_19681 /* Tunable: IMPEXP_SPECTER_BASE_PRICE */ + __LIB_2__::func_115(iParam1));
				break;
			case joaat("comet3"):
				iVar1 = (85000 + __LIB_2__::func_115(iParam1));
				break;
			case joaat("elegy"):
				iVar1 = (Global_262145.f_19693 /* Tunable: IMPEXP_ELEGY_BASE_PRICE */ + __LIB_2__::func_115(iParam1));
				break;
			case joaat("infernus2"):
				iVar1 = 915000;
				if (bVar0)
				{
					if (Global_262145.f_20327 /* Tunable: SR_PEGASSI_INFERNUS2 */ >= 0)
					{
						iVar1 = Global_262145.f_20327 /* Tunable: SR_PEGASSI_INFERNUS2 */;
					}
				}
				break;
			case joaat("gp1"):
				iVar1 = 1260000;
				if (bVar0)
				{
					if (Global_262145.f_20326 /* Tunable: SR_PROGEN_GP1 */ >= 0)
					{
						iVar1 = Global_262145.f_20326 /* Tunable: SR_PROGEN_GP1 */;
					}
				}
				break;
			case joaat("ruston"):
				iVar1 = 430000;
				if (bVar0)
				{
					if (Global_262145.f_20328 /* Tunable: SR_HIJAK_RUSTON */ >= 0)
					{
						iVar1 = Global_262145.f_20328 /* Tunable: SR_HIJAK_RUSTON */;
					}
				}
				break;
			case joaat("turismo2"):
				iVar1 = 705000;
				if (bVar0)
				{
					if (Global_262145.f_20329 /* Tunable: SR_GROTTI_TURISMO2 */ >= 0)
					{
						iVar1 = Global_262145.f_20329 /* Tunable: SR_GROTTI_TURISMO2 */;
					}
				}
				break;
			case joaat("ardent"):
				iVar1 = 1150000;
				if (bVar0)
				{
					if (Global_262145.f_21416 /* Tunable: GR_BASIC_WEAPONIZED_VEHICLES_OCELOT_ARDENT */ >= 0)
					{
						iVar1 = Global_262145.f_21416 /* Tunable: GR_BASIC_WEAPONIZED_VEHICLES_OCELOT_ARDENT */;
					}
				}
				break;
			case joaat("cheetah2"):
				iVar1 = 865000;
				if (bVar0)
				{
					if (Global_262145.f_21419 /* Tunable: GR_NEW_SPORTS_CARS_GROTTI_CHEETAH_CLASSIC */ >= 0)
					{
						iVar1 = Global_262145.f_21419 /* Tunable: GR_NEW_SPORTS_CARS_GROTTI_CHEETAH_CLASSIC */;
					}
				}
				break;
			case joaat("nightshark"):
				iVar1 = 1245000;
				if (bVar0)
				{
					if (Global_262145.f_21417 /* Tunable: GR_BASIC_WEAPONIZED_VEHICLES_HVY_NIGHTSHARK */ >= 0)
					{
						iVar1 = Global_262145.f_21417 /* Tunable: GR_BASIC_WEAPONIZED_VEHICLES_HVY_NIGHTSHARK */;
					}
				}
				break;
			case joaat("torero"):
				iVar1 = 998000;
				if (bVar0)
				{
					if (Global_262145.f_21418 /* Tunable: GR_NEW_SPORTS_CARS_PEGASSI_TORERO */ >= 0)
					{
						iVar1 = Global_262145.f_21418 /* Tunable: GR_NEW_SPORTS_CARS_PEGASSI_TORERO */;
					}
				}
				break;
			case joaat("vagner"):
				iVar1 = 1535000;
				if (bVar0)
				{
					if (Global_262145.f_21420 /* Tunable: GR_NEW_SPORTS_CARS_DEWBAUCHEE_VAGNER */ >= 0)
					{
						iVar1 = Global_262145.f_21420 /* Tunable: GR_NEW_SPORTS_CARS_DEWBAUCHEE_VAGNER */;
					}
				}
				break;
			case joaat("xa21"):
				iVar1 = 2375000;
				if (bVar0)
				{
					if (Global_262145.f_21421 /* Tunable: GR_NEW_SPORTS_CARS_OCELOT_XA_21 */ >= 0)
					{
						iVar1 = Global_262145.f_21421 /* Tunable: GR_NEW_SPORTS_CARS_OCELOT_XA_21 */;
					}
				}
				break;
			case joaat("apc"):
				iVar1 = 2325000;
				if (bVar0)
				{
					if (Global_262145.f_21408 /* Tunable: GR_NEW_FULLY_WEAPONIZED_VEHICLES_HVY_APC */ >= 0)
					{
						iVar1 = Global_262145.f_21408 /* Tunable: GR_NEW_FULLY_WEAPONIZED_VEHICLES_HVY_APC */;
					}
				}
				iVar2 = iVar1;
				if (!bParam2)
				{
					iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * ((100f + SYSTEM::TO_FLOAT(Global_262145.f_21407 /* Tunable: -1237354304 */)) / 100f)));
				}
				break;
			case joaat("dune3"):
				iVar1 = 850000;
				if (bVar0)
				{
					if (Global_262145.f_21409 /* Tunable: GR_NEW_FULLY_WEAPONIZED_VEHICLES_BF_DUNE_FAV */ >= 0)
					{
						iVar1 = Global_262145.f_21409 /* Tunable: GR_NEW_FULLY_WEAPONIZED_VEHICLES_BF_DUNE_FAV */;
					}
				}
				iVar2 = iVar1;
				if (!bParam2)
				{
					iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * ((100f + SYSTEM::TO_FLOAT(Global_262145.f_21407 /* Tunable: -1237354304 */)) / 100f)));
				}
				break;
			case joaat("halftrack"):
				iVar1 = 1695000;
				if (bVar0)
				{
					if (Global_262145.f_21410 /* Tunable: GR_NEW_FULLY_WEAPONIZED_VEHICLES_BRAVADO_HALF_TRACK */ >= 0)
					{
						iVar1 = Global_262145.f_21410 /* Tunable: GR_NEW_FULLY_WEAPONIZED_VEHICLES_BRAVADO_HALF_TRACK */;
					}
				}
				iVar2 = iVar1;
				if (!bParam2)
				{
					iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * ((100f + SYSTEM::TO_FLOAT(Global_262145.f_21407 /* Tunable: -1237354304 */)) / 100f)));
				}
				break;
			case joaat("oppressor"):
				iVar1 = 2650000;
				if (bVar0)
				{
					if (Global_262145.f_21411 /* Tunable: GR_NEW_FULLY_WEAPONIZED_VEHICLES_PEGASSI_OPPRESSOR */ >= 0)
					{
						iVar1 = Global_262145.f_21411 /* Tunable: GR_NEW_FULLY_WEAPONIZED_VEHICLES_PEGASSI_OPPRESSOR */;
					}
				}
				iVar2 = iVar1;
				if (!bParam2)
				{
					iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * ((100f + SYSTEM::TO_FLOAT(Global_262145.f_21407 /* Tunable: -1237354304 */)) / 100f)));
				}
				break;
			case joaat("tampa3"):
				iVar1 = 1585000;
				if (bVar0)
				{
					if (Global_262145.f_21412 /* Tunable: GR_NEW_FULLY_WEAPONIZED_VEHICLES_DECLASSE_WEAPONIZED_TAMPA */ >= 0)
					{
						iVar1 = Global_262145.f_21412 /* Tunable: GR_NEW_FULLY_WEAPONIZED_VEHICLES_DECLASSE_WEAPONIZED_TAMPA */;
					}
				}
				iVar2 = iVar1;
				if (!bParam2)
				{
					iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * ((100f + SYSTEM::TO_FLOAT(Global_262145.f_21407 /* Tunable: -1237354304 */)) / 100f)));
				}
				break;
			case joaat("trailersmall2"):
				iVar1 = 1400000;
				if (bVar0)
				{
					if (Global_262145.f_21413 /* Tunable: -835343641 */ >= 0)
					{
						iVar1 = Global_262145.f_21413 /* Tunable: -835343641 */;
					}
				}
				iVar2 = iVar1;
				if (!bParam2)
				{
					iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * ((100f + SYSTEM::TO_FLOAT(Global_262145.f_21407 /* Tunable: -1237354304 */)) / 100f)));
				}
				break;
			case joaat("phantom3"):
				if (!bParam2)
				{
					iVar1 = 1225000;
					if (bVar0)
					{
						if (Global_262145.f_21485 /* Tunable: GR_TRUCK_PROPERTY_JOBUILT_PHANTOM_CUSTOM */ >= 0)
						{
							iVar1 = Global_262145.f_21485 /* Tunable: GR_TRUCK_PROPERTY_JOBUILT_PHANTOM_CUSTOM */;
						}
					}
				}
				else
				{
					iVar1 = 0;
				}
				break;
			case joaat("hauler2"):
				if (!bParam2)
				{
					iVar1 = 1400000;
					if (bVar0)
					{
						if (Global_262145.f_21486 /* Tunable: GR_TRUCK_PROPERTY_JOBUILT_HAULER_CUSTOM */ >= 0)
						{
							iVar1 = Global_262145.f_21486 /* Tunable: GR_TRUCK_PROPERTY_JOBUILT_HAULER_CUSTOM */;
						}
					}
				}
				else
				{
					iVar1 = 0;
				}
				break;
			case joaat("lazer"):
				iVar1 = 6500000;
				if (bVar0)
				{
					if (Global_262145.f_22587 /* Tunable: SMUG_VEHICLES_TRADE_PRICE_P996_LAZER */ >= 0)
					{
						iVar1 = Global_262145.f_22587 /* Tunable: SMUG_VEHICLES_TRADE_PRICE_P996_LAZER */;
					}
				}
				break;
			case joaat("microlight"):
				if (bParam2)
				{
					iVar1 = 500000;
					if (bVar0)
					{
						if (Global_262145.f_22586 /* Tunable: 821338091 */ >= 0)
						{
							iVar1 = Global_262145.f_22586 /* Tunable: 821338091 */;
						}
					}
				}
				else
				{
					iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(500000) * ((100f + SYSTEM::TO_FLOAT(33)) / 100f)));
					if (bVar0)
					{
						if (Global_262145.f_22606 /* Tunable: 1095639582 */ >= 0)
						{
							iVar1 = Global_262145.f_22606 /* Tunable: 1095639582 */;
						}
					}
				}
				break;
			case joaat("mogul"):
				if (bParam2)
				{
					iVar1 = 2350000;
					if (bVar0)
					{
						if (Global_262145.f_22579 /* Tunable: SMUG_VEHICLES_TRADE_PRICE_MOGUL */ >= 0)
						{
							iVar1 = Global_262145.f_22579 /* Tunable: SMUG_VEHICLES_TRADE_PRICE_MOGUL */;
						}
					}
				}
				else
				{
					iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(2350000) * ((100f + SYSTEM::TO_FLOAT(33)) / 100f)));
					if (bVar0)
					{
						if (Global_262145.f_22599 /* Tunable: SMUG_VEHICLES_BUY_IT_NOW_PRICE_MOGUL */ >= 0)
						{
							iVar1 = Global_262145.f_22599 /* Tunable: SMUG_VEHICLES_BUY_IT_NOW_PRICE_MOGUL */;
						}
					}
				}
				break;
			case joaat("rogue"):
				if (bParam2)
				{
					iVar1 = 1200000;
					if (bVar0)
					{
						if (Global_262145.f_22583 /* Tunable: SMUG_VEHICLES_TRADE_PRICE_ROGUE */ >= 0)
						{
							iVar1 = Global_262145.f_22583 /* Tunable: SMUG_VEHICLES_TRADE_PRICE_ROGUE */;
						}
					}
				}
				else
				{
					iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(1200000) * ((100f + SYSTEM::TO_FLOAT(33)) / 100f)));
					if (bVar0)
					{
						if (Global_262145.f_22603 /* Tunable: SMUG_VEHICLES_BUY_IT_NOW_PRICE_ROGUE */ >= 0)
						{
							iVar1 = Global_262145.f_22603 /* Tunable: SMUG_VEHICLES_BUY_IT_NOW_PRICE_ROGUE */;
						}
					}
				}
				break;
			case joaat("starling"):
				if (bParam2)
				{
					iVar1 = 2750000;
					if (bVar0)
					{
						if (Global_262145.f_22578 /* Tunable: SMUG_VEHICLES_TRADE_PRICE_STARLING */ >= 0)
						{
							iVar1 = Global_262145.f_22578 /* Tunable: SMUG_VEHICLES_TRADE_PRICE_STARLING */;
						}
					}
				}
				else
				{
					iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(2750000) * ((100f + SYSTEM::TO_FLOAT(33)) / 100f)));
					if (bVar0)
					{
						if (Global_262145.f_22598 /* Tunable: SMUG_VEHICLES_BUY_IT_NOW_PRICE_STARLING */ >= 0)
						{
							iVar1 = Global_262145.f_22598 /* Tunable: SMUG_VEHICLES_BUY_IT_NOW_PRICE_STARLING */;
						}
					}
				}
				break;
			case joaat("seabreeze"):
				if (bParam2)
				{
					iVar1 = 850000;
					if (bVar0)
					{
						if (Global_262145.f_22585 /* Tunable: SMUG_VEHICLES_TRADE_PRICE_WESTERN_SEABREEZE */ >= 0)
						{
							iVar1 = Global_262145.f_22585 /* Tunable: SMUG_VEHICLES_TRADE_PRICE_WESTERN_SEABREEZE */;
						}
					}
				}
				else
				{
					iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(850000) * ((100f + SYSTEM::TO_FLOAT(33)) / 100f)));
					if (bVar0)
					{
						if (Global_262145.f_22605 /* Tunable: SMUG_VEHICLES_BUY_IT_NOW_PRICE_WESTERN_SEABREEZE */ >= 0)
						{
							iVar1 = Global_262145.f_22605 /* Tunable: SMUG_VEHICLES_BUY_IT_NOW_PRICE_WESTERN_SEABREEZE */;
						}
					}
				}
				break;
			case joaat("tula"):
				if (bParam2)
				{
					iVar1 = 3890000;
					if (bVar0)
					{
						if (Global_262145.f_22574 /* Tunable: SMUG_VEHICLES_TRADE_PRICE_TULA */ >= 0)
						{
							iVar1 = Global_262145.f_22574 /* Tunable: SMUG_VEHICLES_TRADE_PRICE_TULA */;
						}
					}
				}
				else
				{
					iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(3890000) * ((100f + SYSTEM::TO_FLOAT(33)) / 100f)));
					if (bVar0)
					{
						if (Global_262145.f_22594 /* Tunable: SMUG_VEHICLES_BUY_IT_NOW_PRICE_TULA */ >= 0)
						{
							iVar1 = Global_262145.f_22594 /* Tunable: SMUG_VEHICLES_BUY_IT_NOW_PRICE_TULA */;
						}
					}
				}
				break;
			case joaat("pyro"):
				if (bParam2)
				{
					iVar1 = 3350000;
					if (bVar0)
					{
						if (Global_262145.f_22576 /* Tunable: SMUG_VEHICLES_TRADE_PRICE_PYRO */ >= 0)
						{
							iVar1 = Global_262145.f_22576 /* Tunable: SMUG_VEHICLES_TRADE_PRICE_PYRO */;
						}
					}
				}
				else
				{
					iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(3350000) * ((100f + SYSTEM::TO_FLOAT(33)) / 100f)));
					if (bVar0)
					{
						if (Global_262145.f_22596 /* Tunable: SMUG_VEHICLES_BUY_IT_NOW_PRICE_PYRO */ >= 0)
						{
							iVar1 = Global_262145.f_22596 /* Tunable: SMUG_VEHICLES_BUY_IT_NOW_PRICE_PYRO */;
						}
					}
				}
				break;
			case joaat("molotok"):
				if (bParam2)
				{
					iVar1 = 3600000;
					if (bVar0)
					{
						if (Global_262145.f_22575 /* Tunable: SMUG_VEHICLES_TRADE_PRICE_V65_MOLOTOK */ >= 0)
						{
							iVar1 = Global_262145.f_22575 /* Tunable: SMUG_VEHICLES_TRADE_PRICE_V65_MOLOTOK */;
						}
					}
				}
				else
				{
					iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(3600000) * ((100f + SYSTEM::TO_FLOAT(33)) / 100f)));
					if (bVar0)
					{
						if (Global_262145.f_22595 /* Tunable: SMUG_VEHICLES_BUY_IT_NOW_PRICE_V65_MOLOTOK */ >= 0)
						{
							iVar1 = Global_262145.f_22595 /* Tunable: SMUG_VEHICLES_BUY_IT_NOW_PRICE_V65_MOLOTOK */;
						}
					}
				}
				break;
			case joaat("nokota"):
				if (bParam2)
				{
					iVar1 = 1995000;
					if (bVar0)
					{
						if (Global_262145.f_22580 /* Tunable: SMUG_VEHICLES_TRADE_PRICE_P45_NOKOTA */ >= 0)
						{
							iVar1 = Global_262145.f_22580 /* Tunable: SMUG_VEHICLES_TRADE_PRICE_P45_NOKOTA */;
						}
					}
				}
				else
				{
					iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(1995000) * ((100f + SYSTEM::TO_FLOAT(33)) / 100f)));
					if (bVar0)
					{
						if (Global_262145.f_22600 /* Tunable: SMUG_VEHICLES_BUY_IT_NOW_PRICE_P45_NOKOTA */ >= 0)
						{
							iVar1 = Global_262145.f_22600 /* Tunable: SMUG_VEHICLES_BUY_IT_NOW_PRICE_P45_NOKOTA */;
						}
					}
				}
				break;
			case joaat("bombushka"):
				if (bParam2)
				{
					iVar1 = 4450000;
					if (bVar0)
					{
						if (Global_262145.f_22573 /* Tunable: SMUG_VEHICLES_TRADE_PRICE_BOMBUSHKA */ >= 0)
						{
							iVar1 = Global_262145.f_22573 /* Tunable: SMUG_VEHICLES_TRADE_PRICE_BOMBUSHKA */;
						}
					}
				}
				else
				{
					iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(4450000) * ((100f + SYSTEM::TO_FLOAT(33)) / 100f)));
					if (bVar0)
					{
						if (Global_262145.f_22593 /* Tunable: SMUG_VEHICLES_BUY_IT_NOW_PRICE_BOMBUSHKA */ >= 0)
						{
							iVar1 = Global_262145.f_22593 /* Tunable: SMUG_VEHICLES_BUY_IT_NOW_PRICE_BOMBUSHKA */;
						}
					}
				}
				break;
			case joaat("hunter"):
				if (bParam2)
				{
					iVar1 = 3100000;
					if (bVar0)
					{
						if (Global_262145.f_22577 /* Tunable: SMUG_VEHICLES_TRADE_PRICE_HUNTER */ >= 0)
						{
							iVar1 = Global_262145.f_22577 /* Tunable: SMUG_VEHICLES_TRADE_PRICE_HUNTER */;
						}
					}
				}
				else
				{
					iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(3100000) * ((100f + SYSTEM::TO_FLOAT(33)) / 100f)));
					if (bVar0)
					{
						if (Global_262145.f_22597 /* Tunable: SMUG_VEHICLES_BUY_IT_NOW_PRICE_HUNTER */ >= 0)
						{
							iVar1 = Global_262145.f_22597 /* Tunable: SMUG_VEHICLES_BUY_IT_NOW_PRICE_HUNTER */;
						}
					}
				}
				break;
			case joaat("havok"):
				if (bParam2)
				{
					iVar1 = 1730000;
					if (bVar0)
					{
						if (Global_262145.f_22581 /* Tunable: SMUG_VEHICLES_TRADE_PRICE_NAGASAKI_HAVOK */ >= 0)
						{
							iVar1 = Global_262145.f_22581 /* Tunable: SMUG_VEHICLES_TRADE_PRICE_NAGASAKI_HAVOK */;
						}
					}
				}
				else
				{
					iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(1730000) * ((100f + SYSTEM::TO_FLOAT(33)) / 100f)));
					if (bVar0)
					{
						if (Global_262145.f_22601 /* Tunable: SMUG_VEHICLES_BUY_IT_NOW_PRICE_NAGASAKI_HAVOK */ >= 0)
						{
							iVar1 = Global_262145.f_22601 /* Tunable: SMUG_VEHICLES_BUY_IT_NOW_PRICE_NAGASAKI_HAVOK */;
						}
					}
				}
				break;
			case joaat("howard"):
				if (bParam2)
				{
					iVar1 = 975000;
					if (bVar0)
					{
						if (Global_262145.f_22584 /* Tunable: SMUG_VEHICLES_TRADE_PRICE_HOWARD_NX25 */ >= 0)
						{
							iVar1 = Global_262145.f_22584 /* Tunable: SMUG_VEHICLES_TRADE_PRICE_HOWARD_NX25 */;
						}
					}
				}
				else
				{
					iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(975000) * ((100f + SYSTEM::TO_FLOAT(33)) / 100f)));
					if (bVar0)
					{
						if (Global_262145.f_22604 /* Tunable: SMUG_VEHICLES_BUY_IT_NOW_PRICE_HOWARD_NX25 */ >= 0)
						{
							iVar1 = Global_262145.f_22604 /* Tunable: SMUG_VEHICLES_BUY_IT_NOW_PRICE_HOWARD_NX25 */;
						}
					}
				}
				break;
			case joaat("alphaz1"):
				if (bParam2)
				{
					iVar1 = 1595000;
					if (bVar0)
					{
						if (Global_262145.f_22582 /* Tunable: SMUG_VEHICLES_TRADE_PRICE_ALPHAZ1 */ >= 0)
						{
							iVar1 = Global_262145.f_22582 /* Tunable: SMUG_VEHICLES_TRADE_PRICE_ALPHAZ1 */;
						}
					}
				}
				else
				{
					iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(1595000) * ((100f + SYSTEM::TO_FLOAT(33)) / 100f)));
					if (bVar0)
					{
						if (Global_262145.f_22602 /* Tunable: SMUG_VEHICLES_BUY_IT_NOW_PRICE_ALPHAZ1 */ >= 0)
						{
							iVar1 = Global_262145.f_22602 /* Tunable: SMUG_VEHICLES_BUY_IT_NOW_PRICE_ALPHAZ1 */;
						}
					}
				}
				break;
			case joaat("cyclone"):
				iVar1 = 1890000;
				if (bVar0)
				{
					if (Global_262145.f_22588 /* Tunable: SMUG_VEHICLES_CARS_TRADE_PRICE_COIL_CYCLONE */ >= 0)
					{
						iVar1 = Global_262145.f_22588 /* Tunable: SMUG_VEHICLES_CARS_TRADE_PRICE_COIL_CYCLONE */;
					}
				}
				break;
			case joaat("visione"):
				iVar1 = 2250000;
				if (bVar0)
				{
					if (Global_262145.f_22589 /* Tunable: SMUG_VEHICLES_CARS_TRADE_PRICE_GROTTI_VISIONE */ >= 0)
					{
						iVar1 = Global_262145.f_22589 /* Tunable: SMUG_VEHICLES_CARS_TRADE_PRICE_GROTTI_VISIONE */;
					}
				}
				break;
			case joaat("vigilante"):
				iVar1 = 3750000;
				if (bVar0)
				{
					if (Global_262145.f_22592 /* Tunable: SMUG_VEHICLES_CARS_TRADE_PRICE_GROTTI_VIGILANTE */ >= 0)
					{
						iVar1 = Global_262145.f_22592 /* Tunable: SMUG_VEHICLES_CARS_TRADE_PRICE_GROTTI_VIGILANTE */;
					}
				}
				break;
			case joaat("retinue"):
				iVar1 = 615000;
				if (bVar0)
				{
					if (Global_262145.f_22590 /* Tunable: SMUG_VEHICLES_CARS_TRADE_PRICE_VAPID_RETINUE */ >= 0)
					{
						iVar1 = Global_262145.f_22590 /* Tunable: SMUG_VEHICLES_CARS_TRADE_PRICE_VAPID_RETINUE */;
					}
				}
				break;
			case joaat("rapidgt3"):
				iVar1 = 885000;
				if (bVar0)
				{
					if (Global_262145.f_22591 /* Tunable: SMUG_VEHICLES_CARS_TRADE_PRICE_DEWBAUCHEE_RAPIDGT_CLASSIC */ >= 0)
					{
						iVar1 = Global_262145.f_22591 /* Tunable: SMUG_VEHICLES_CARS_TRADE_PRICE_DEWBAUCHEE_RAPIDGT_CLASSIC */;
					}
				}
				break;
		}
		switch (iParam1)
		{
			case joaat("deluxo"):
				if (bParam2)
				{
					iVar1 = 3550000;
					if (bVar0)
					{
						if (Global_262145.f_23921 /* Tunable: H2_VEHICLES_TRADE_PRICE_DELUXO */ >= 0)
						{
							iVar1 = Global_262145.f_23921 /* Tunable: H2_VEHICLES_TRADE_PRICE_DELUXO */;
						}
					}
				}
				else
				{
					iVar1 = 4721500;
					if (bVar0)
					{
						if (Global_262145.f_23912 /* Tunable: H2_VEHICLES_BUY_IT_NOW_PRICE_DELUXO */ >= 0)
						{
							iVar1 = Global_262145.f_23912 /* Tunable: H2_VEHICLES_BUY_IT_NOW_PRICE_DELUXO */;
						}
					}
					iVar2 = 3550000;
					if (bVar0)
					{
						if (Global_262145.f_23921 /* Tunable: H2_VEHICLES_TRADE_PRICE_DELUXO */ >= 0)
						{
							iVar2 = Global_262145.f_23921 /* Tunable: H2_VEHICLES_TRADE_PRICE_DELUXO */;
						}
					}
				}
				break;
			case joaat("stromberg"):
				if (bParam2)
				{
					iVar1 = 2395000;
					if (bVar0)
					{
						if (Global_262145.f_23922 /* Tunable: H2_VEHICLES_TRADE_PRICE_STROMBERG */ >= 0)
						{
							iVar1 = Global_262145.f_23922 /* Tunable: H2_VEHICLES_TRADE_PRICE_STROMBERG */;
						}
					}
				}
				else
				{
					iVar1 = 3185350;
					if (bVar0)
					{
						if (Global_262145.f_23913 /* Tunable: H2_VEHICLES_BUY_IT_NOW_PRICE_STROMBERG */ >= 0)
						{
							iVar1 = Global_262145.f_23913 /* Tunable: H2_VEHICLES_BUY_IT_NOW_PRICE_STROMBERG */;
						}
					}
					iVar2 = 2395000;
					if (bVar0)
					{
						if (Global_262145.f_23922 /* Tunable: H2_VEHICLES_TRADE_PRICE_STROMBERG */ >= 0)
						{
							iVar2 = Global_262145.f_23922 /* Tunable: H2_VEHICLES_TRADE_PRICE_STROMBERG */;
						}
					}
				}
				break;
			case joaat("riot2"):
				if (bParam2)
				{
					iVar1 = 2350000;
					if (bVar0)
					{
						if (Global_262145.f_23923 /* Tunable: H2_VEHICLES_TRADE_PRICE_RCV */ >= 0)
						{
							iVar1 = Global_262145.f_23923 /* Tunable: H2_VEHICLES_TRADE_PRICE_RCV */;
						}
					}
				}
				else
				{
					iVar1 = 3125500;
					if (bVar0)
					{
						if (Global_262145.f_23914 /* Tunable: H2_VEHICLES_BUY_IT_NOW_PRICE_RCV */ >= 0)
						{
							iVar1 = Global_262145.f_23914 /* Tunable: H2_VEHICLES_BUY_IT_NOW_PRICE_RCV */;
						}
					}
					iVar2 = 2350000;
					if (bVar0)
					{
						if (Global_262145.f_23923 /* Tunable: H2_VEHICLES_TRADE_PRICE_RCV */ >= 0)
						{
							iVar2 = Global_262145.f_23923 /* Tunable: H2_VEHICLES_TRADE_PRICE_RCV */;
						}
					}
				}
				break;
			case joaat("chernobog"):
				if (bParam2)
				{
					iVar1 = 2490000;
					if (bVar0)
					{
						if (Global_262145.f_23924 /* Tunable: H2_VEHICLES_TRADE_PRICE_CHERNOBOG */ >= 0)
						{
							iVar1 = Global_262145.f_23924 /* Tunable: H2_VEHICLES_TRADE_PRICE_CHERNOBOG */;
						}
					}
				}
				else
				{
					iVar1 = 3311700;
					if (bVar0)
					{
						if (Global_262145.f_23915 /* Tunable: H2_VEHICLES_BUY_IT_NOW_PRICE_CHERNOBOG */ >= 0)
						{
							iVar1 = Global_262145.f_23915 /* Tunable: H2_VEHICLES_BUY_IT_NOW_PRICE_CHERNOBOG */;
						}
					}
					iVar2 = 2490000;
					if (bVar0)
					{
						if (Global_262145.f_23924 /* Tunable: H2_VEHICLES_TRADE_PRICE_CHERNOBOG */ >= 0)
						{
							iVar2 = Global_262145.f_23924 /* Tunable: H2_VEHICLES_TRADE_PRICE_CHERNOBOG */;
						}
					}
				}
				break;
			case joaat("khanjali"):
				if (bParam2)
				{
					iVar1 = 2895000;
					if (bVar0)
					{
						if (Global_262145.f_23926 /* Tunable: H2_VEHICLES_TRADE_PRICE_KHANJALI */ >= 0)
						{
							iVar1 = Global_262145.f_23926 /* Tunable: H2_VEHICLES_TRADE_PRICE_KHANJALI */;
						}
					}
				}
				else
				{
					iVar1 = 3850350;
					if (bVar0)
					{
						if (Global_262145.f_23917 /* Tunable: H2_VEHICLES_BUY_IT_NOW_PRICE_KHANJALI */ >= 0)
						{
							iVar1 = Global_262145.f_23917 /* Tunable: H2_VEHICLES_BUY_IT_NOW_PRICE_KHANJALI */;
						}
					}
					iVar2 = 2895000;
					if (bVar0)
					{
						if (Global_262145.f_23926 /* Tunable: H2_VEHICLES_TRADE_PRICE_KHANJALI */ >= 0)
						{
							iVar2 = Global_262145.f_23926 /* Tunable: H2_VEHICLES_TRADE_PRICE_KHANJALI */;
						}
					}
				}
				break;
			case joaat("akula"):
				if (bParam2)
				{
					iVar1 = 2785000;
					if (bVar0)
					{
						if (Global_262145.f_23927 /* Tunable: H2_VEHICLES_TRADE_PRICE_AKULA */ >= 0)
						{
							iVar1 = Global_262145.f_23927 /* Tunable: H2_VEHICLES_TRADE_PRICE_AKULA */;
						}
					}
				}
				else
				{
					iVar1 = 3704050;
					if (bVar0)
					{
						if (Global_262145.f_23918 /* Tunable: H2_VEHICLES_BUY_IT_NOW_PRICE_AKULA */ >= 0)
						{
							iVar1 = Global_262145.f_23918 /* Tunable: H2_VEHICLES_BUY_IT_NOW_PRICE_AKULA */;
						}
					}
					iVar2 = 2785000;
					if (bVar0)
					{
						if (Global_262145.f_23927 /* Tunable: H2_VEHICLES_TRADE_PRICE_AKULA */ >= 0)
						{
							iVar2 = Global_262145.f_23927 /* Tunable: H2_VEHICLES_TRADE_PRICE_AKULA */;
						}
					}
				}
				break;
			case joaat("thruster"):
				if (bParam2)
				{
					iVar1 = 2750000;
					if (bVar0)
					{
						if (Global_262145.f_23920 /* Tunable: H2_VEHICLES_TRADE_PRICE_THRUSTER */ >= 0)
						{
							iVar1 = Global_262145.f_23920 /* Tunable: H2_VEHICLES_TRADE_PRICE_THRUSTER */;
						}
					}
				}
				else
				{
					iVar1 = 3657500;
					if (bVar0)
					{
						if (Global_262145.f_23911 /* Tunable: H2_VEHICLES_BUY_IT_NOW_PRICE_THRUSTER */ >= 0)
						{
							iVar1 = Global_262145.f_23911 /* Tunable: H2_VEHICLES_BUY_IT_NOW_PRICE_THRUSTER */;
						}
					}
					iVar2 = 2750000;
					if (bVar0)
					{
						if (Global_262145.f_23920 /* Tunable: H2_VEHICLES_TRADE_PRICE_THRUSTER */ >= 0)
						{
							iVar2 = Global_262145.f_23920 /* Tunable: H2_VEHICLES_TRADE_PRICE_THRUSTER */;
						}
					}
				}
				break;
			case joaat("barrage"):
				if (bParam2)
				{
					iVar1 = 1595000;
					if (bVar0)
					{
						if (Global_262145.f_23925 /* Tunable: H2_VEHICLES_TRADE_PRICE_BARRAGE */ >= 0)
						{
							iVar1 = Global_262145.f_23925 /* Tunable: H2_VEHICLES_TRADE_PRICE_BARRAGE */;
						}
					}
				}
				else
				{
					iVar1 = 2121350;
					if (bVar0)
					{
						if (Global_262145.f_23916 /* Tunable: H2_VEHICLES_BUY_IT_NOW_PRICE_BARRAGE */ >= 0)
						{
							iVar1 = Global_262145.f_23916 /* Tunable: H2_VEHICLES_BUY_IT_NOW_PRICE_BARRAGE */;
						}
					}
					iVar2 = 1595000;
					if (bVar0)
					{
						if (Global_262145.f_23925 /* Tunable: H2_VEHICLES_TRADE_PRICE_BARRAGE */ >= 0)
						{
							iVar2 = Global_262145.f_23925 /* Tunable: H2_VEHICLES_TRADE_PRICE_BARRAGE */;
						}
					}
				}
				break;
			case joaat("volatol"):
				if (bParam2)
				{
					iVar1 = 2800000;
					if (bVar0)
					{
						if (Global_262145.f_23928 /* Tunable: H2_VEHICLES_TRADE_PRICE_VOLATOL */ >= 0)
						{
							iVar1 = Global_262145.f_23928 /* Tunable: H2_VEHICLES_TRADE_PRICE_VOLATOL */;
						}
					}
				}
				else
				{
					iVar1 = 3724000;
					if (bVar0)
					{
						if (Global_262145.f_23919 /* Tunable: H2_VEHICLES_BUY_IT_NOW_PRICE_VOLATOL */ >= 0)
						{
							iVar1 = Global_262145.f_23919 /* Tunable: H2_VEHICLES_BUY_IT_NOW_PRICE_VOLATOL */;
						}
					}
					iVar2 = 2800000;
					if (bVar0)
					{
						if (Global_262145.f_23928 /* Tunable: H2_VEHICLES_TRADE_PRICE_VOLATOL */ >= 0)
						{
							iVar2 = Global_262145.f_23928 /* Tunable: H2_VEHICLES_TRADE_PRICE_VOLATOL */;
						}
					}
				}
				break;
			case joaat("comet4"):
				iVar1 = 710000;
				if (bVar0)
				{
					if (Global_262145.f_23929 /* Tunable: H2_VEHICLES_PRICE_COMET_SAFARI */ >= 0)
					{
						iVar1 = Global_262145.f_23929 /* Tunable: H2_VEHICLES_PRICE_COMET_SAFARI */;
					}
				}
				break;
			case joaat("neon"):
				iVar1 = 1500000;
				if (bVar0)
				{
					if (Global_262145.f_23941 /* Tunable: H2_VEHICLES_PRICE_NEON */ >= 0)
					{
						iVar1 = Global_262145.f_23941 /* Tunable: H2_VEHICLES_PRICE_NEON */;
					}
				}
				break;
			case joaat("streiter"):
				iVar1 = 500000;
				if (bVar0)
				{
					if (Global_262145.f_23934 /* Tunable: H2_VEHICLES_PRICE_STREITER */ >= 0)
					{
						iVar1 = Global_262145.f_23934 /* Tunable: H2_VEHICLES_PRICE_STREITER */;
					}
				}
				break;
			case joaat("sentinel3"):
				if (bParam2)
				{
					iVar1 = 487500;
					if (bVar0)
					{
						if (Global_262145.f_28505 /* Tunable: 256069819 */ >= 0)
						{
							iVar1 = Global_262145.f_28505 /* Tunable: 256069819 */;
						}
					}
				}
				else
				{
					iVar1 = 650000;
					if (bVar0)
					{
						if (Global_262145.f_23944 /* Tunable: H2_VEHICLES_PRICE_SENTINEL_CLASSIC */ >= 0)
						{
							iVar1 = Global_262145.f_23944 /* Tunable: H2_VEHICLES_PRICE_SENTINEL_CLASSIC */;
						}
					}
					iVar2 = 487500;
					if (bVar0)
					{
						if (Global_262145.f_28505 /* Tunable: 256069819 */ >= 0)
						{
							iVar2 = Global_262145.f_28505 /* Tunable: 256069819 */;
						}
					}
				}
				break;
			case joaat("yosemite"):
				iVar1 = 485000;
				if (bVar0)
				{
					if (Global_262145.f_23943 /* Tunable: H2_VEHICLES_PRICE_YOSEMITE */ >= 0)
					{
						iVar1 = Global_262145.f_23943 /* Tunable: H2_VEHICLES_PRICE_YOSEMITE */;
					}
				}
				break;
			case joaat("sc1"):
				iVar1 = 1603000;
				if (bVar0)
				{
					if (Global_262145.f_23933 /* Tunable: H2_VEHICLES_PRICE_SC1 */ >= 0)
					{
						iVar1 = Global_262145.f_23933 /* Tunable: H2_VEHICLES_PRICE_SC1 */;
					}
				}
				break;
			case joaat("autarch"):
				iVar1 = 1955000;
				if (bVar0)
				{
					if (Global_262145.f_23938 /* Tunable: H2_VEHICLES_PRICE_AUTARCH */ >= 0)
					{
						iVar1 = Global_262145.f_23938 /* Tunable: H2_VEHICLES_PRICE_AUTARCH */;
					}
				}
				break;
			case joaat("gt500"):
				iVar1 = 785000;
				if (bVar0)
				{
					if (Global_262145.f_23947 /* Tunable: H2_VEHICLES_PRICE_GT500 */ >= 0)
					{
						iVar1 = Global_262145.f_23947 /* Tunable: H2_VEHICLES_PRICE_GT500 */;
					}
				}
				break;
			case joaat("hustler"):
				iVar1 = 625000;
				if (bVar0)
				{
					if (Global_262145.f_23935 /* Tunable: H2_VEHICLES_PRICE_HUSTLER */ >= 0)
					{
						iVar1 = Global_262145.f_23935 /* Tunable: H2_VEHICLES_PRICE_HUSTLER */;
					}
				}
				break;
			case joaat("revolter"):
				iVar1 = 1610000;
				if (bVar0)
				{
					if (Global_262145.f_23931 /* Tunable: H2_VEHICLES_PRICE_REVOLTER */ >= 0)
					{
						iVar1 = Global_262145.f_23931 /* Tunable: H2_VEHICLES_PRICE_REVOLTER */;
					}
				}
				break;
			case joaat("pariah"):
				iVar1 = 1420000;
				if (bVar0)
				{
					if (Global_262145.f_23942 /* Tunable: H2_VEHICLES_PRICE_PARIAH */ >= 0)
					{
						iVar1 = Global_262145.f_23942 /* Tunable: H2_VEHICLES_PRICE_PARIAH */;
					}
				}
				break;
			case joaat("raiden"):
				iVar1 = 1375000;
				if (bVar0)
				{
					if (Global_262145.f_23945 /* Tunable: H2_VEHICLES_PRICE_RAIDEN */ >= 0)
					{
						iVar1 = Global_262145.f_23945 /* Tunable: H2_VEHICLES_PRICE_RAIDEN */;
					}
				}
				break;
			case joaat("savestra"):
				iVar1 = 990000;
				if (bVar0)
				{
					if (Global_262145.f_23930 /* Tunable: H2_VEHICLES_PRICE_SAVESTRA */ >= 0)
					{
						iVar1 = Global_262145.f_23930 /* Tunable: H2_VEHICLES_PRICE_SAVESTRA */;
					}
				}
				break;
			case joaat("riata"):
				iVar1 = 380000;
				if (bVar0)
				{
					if (Global_262145.f_23940 /* Tunable: H2_VEHICLES_PRICE_RIATA */ >= 0)
					{
						iVar1 = Global_262145.f_23940 /* Tunable: H2_VEHICLES_PRICE_RIATA */;
					}
				}
				break;
			case joaat("hermes"):
				iVar1 = 535000;
				if (bVar0)
				{
					if (Global_262145.f_23936 /* Tunable: H2_VEHICLES_PRICE_HERMES */ >= 0)
					{
						iVar1 = Global_262145.f_23936 /* Tunable: H2_VEHICLES_PRICE_HERMES */;
					}
				}
				break;
			case joaat("comet5"):
				iVar1 = 1145000;
				if (bVar0)
				{
					if (Global_262145.f_23939 /* Tunable: H2_VEHICLES_PRICE_COMET_GT */ >= 0)
					{
						iVar1 = Global_262145.f_23939 /* Tunable: H2_VEHICLES_PRICE_COMET_GT */;
					}
				}
				break;
			case joaat("z190"):
				iVar1 = 900000;
				if (bVar0)
				{
					if (Global_262145.f_23937 /* Tunable: H2_VEHICLES_PRICE_190Z */ >= 0)
					{
						iVar1 = Global_262145.f_23937 /* Tunable: H2_VEHICLES_PRICE_190Z */;
					}
				}
				break;
			case joaat("viseris"):
				iVar1 = 875000;
				if (bVar0)
				{
					if (Global_262145.f_23932 /* Tunable: H2_VEHICLES_PRICE_VISERIS */ >= 0)
					{
						iVar1 = Global_262145.f_23932 /* Tunable: H2_VEHICLES_PRICE_VISERIS */;
					}
				}
				break;
			case joaat("kamacho"):
				iVar1 = 345000;
				if (bVar0)
				{
					if (Global_262145.f_23946 /* Tunable: H2_VEHICLES_PRICE_KAMACHO */ >= 0)
					{
						iVar1 = Global_262145.f_23946 /* Tunable: H2_VEHICLES_PRICE_KAMACHO */;
					}
				}
				break;
			case joaat("gb200"):
				iVar1 = 940000;
				if (bVar0)
				{
					if (Global_262145.f_24146 /* Tunable: ASSAULT_VEHICLES_VAPID_GB200 */ >= 0)
					{
						iVar1 = Global_262145.f_24146 /* Tunable: ASSAULT_VEHICLES_VAPID_GB200 */;
					}
				}
				break;
			case joaat("fagaloa"):
				iVar1 = 335000;
				if (bVar0)
				{
					if (Global_262145.f_24152 /* Tunable: ASSAULT_VEHICLES_VULCAR_FAGALOA */ >= 0)
					{
						iVar1 = Global_262145.f_24152 /* Tunable: ASSAULT_VEHICLES_VULCAR_FAGALOA */;
					}
				}
				break;
			case joaat("ellie"):
				if (bParam2)
				{
					iVar1 = 423750;
					if (bVar0)
					{
						if (Global_262145.f_28507 /* Tunable: CH_TRADE_PRICE_ELLIE */ >= 0)
						{
							iVar1 = Global_262145.f_28507 /* Tunable: CH_TRADE_PRICE_ELLIE */;
						}
					}
				}
				else
				{
					iVar1 = 565000;
					if (bVar0)
					{
						if (Global_262145.f_24150 /* Tunable: ASSAULT_VEHICLES_VAPID_ELLIE */ >= 0)
						{
							iVar1 = Global_262145.f_24150 /* Tunable: ASSAULT_VEHICLES_VAPID_ELLIE */;
						}
					}
					iVar2 = 423750;
					if (bVar0)
					{
						if (Global_262145.f_28507 /* Tunable: CH_TRADE_PRICE_ELLIE */ >= 0)
						{
							iVar2 = Global_262145.f_28507 /* Tunable: CH_TRADE_PRICE_ELLIE */;
						}
					}
				}
				break;
			case joaat("issi3"):
				iVar1 = 360000;
				if (bVar0 && Global_262145.f_24151 /* Tunable: ASSAULT_VEHICLES_WEENY_ISSI_CLASSIC */ >= 0)
				{
					iVar1 = Global_262145.f_24151 /* Tunable: ASSAULT_VEHICLES_WEENY_ISSI_CLASSIC */;
				}
				if (bParam2)
				{
					iVar2 = iVar1;
					iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(360000) * 0.75f));
					if (bVar0 && Global_262145.f_25930 /* Tunable: AW_TRADE_PRICE_ISSI */ >= 0)
					{
						iVar1 = Global_262145.f_25930 /* Tunable: AW_TRADE_PRICE_ISSI */;
					}
				}
				break;
			case joaat("michelli"):
				iVar1 = 1225000;
				if (bVar0)
				{
					if (Global_262145.f_24145 /* Tunable: ASSAULT_VEHICLES_LAMPADATI_MICHELLI_GT */ >= 0)
					{
						iVar1 = Global_262145.f_24145 /* Tunable: ASSAULT_VEHICLES_LAMPADATI_MICHELLI_GT */;
					}
				}
				break;
			case joaat("flashgt"):
				iVar1 = 1675000;
				if (bVar0)
				{
					if (Global_262145.f_24144 /* Tunable: ASSAULT_VEHICLES_VAPID_FLASH_GT */ >= 0)
					{
						iVar1 = Global_262145.f_24144 /* Tunable: ASSAULT_VEHICLES_VAPID_FLASH_GT */;
					}
				}
				break;
			case joaat("hotring"):
				iVar1 = 830000;
				if (bVar0)
				{
					if (Global_262145.f_24147 /* Tunable: ASSAULT_VEHICLES_DECLASSE_HOTRING_SABRE */ >= 0)
					{
						iVar1 = Global_262145.f_24147 /* Tunable: ASSAULT_VEHICLES_DECLASSE_HOTRING_SABRE */;
					}
				}
				break;
			case joaat("tezeract"):
				iVar1 = 2825000;
				if (bVar0)
				{
					if (Global_262145.f_24140 /* Tunable: ASSAULT_VEHICLES_PEGASSI_TEZERACT */ >= 0)
					{
						iVar1 = Global_262145.f_24140 /* Tunable: ASSAULT_VEHICLES_PEGASSI_TEZERACT */;
					}
				}
				break;
			case joaat("tyrant"):
				iVar1 = 2515000;
				if (bVar0)
				{
					if (Global_262145.f_24141 /* Tunable: ASSAULT_VEHICLES_OVERFLOD_TYRANT */ >= 0)
					{
						iVar1 = Global_262145.f_24141 /* Tunable: ASSAULT_VEHICLES_OVERFLOD_TYRANT */;
					}
				}
				break;
			case joaat("dominator3"):
				iVar1 = 725000;
				if (bVar0 && Global_262145.f_24149 /* Tunable: ASSAULT_VEHICLES_VAPID_DOMINATOR_GTX */ >= 0)
				{
					iVar1 = Global_262145.f_24149 /* Tunable: ASSAULT_VEHICLES_VAPID_DOMINATOR_GTX */;
				}
				if (bParam2)
				{
					iVar2 = iVar1;
					iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(725000) * 0.75f));
				}
				break;
			case joaat("taipan"):
				iVar1 = 1980000;
				if (bVar0)
				{
					if (Global_262145.f_24143 /* Tunable: ASSAULT_VEHICLES_CHEVAL_TAIPAN */ >= 0)
					{
						iVar1 = Global_262145.f_24143 /* Tunable: ASSAULT_VEHICLES_CHEVAL_TAIPAN */;
					}
				}
				break;
			case joaat("entity2"):
				iVar1 = 2305000;
				if (bVar0)
				{
					if (Global_262145.f_24142 /* Tunable: ASSAULT_VEHICLES_OVERFLOD_ENTITY_XXR */ >= 0)
					{
						iVar1 = Global_262145.f_24142 /* Tunable: ASSAULT_VEHICLES_OVERFLOD_ENTITY_XXR */;
					}
				}
				break;
			case joaat("jester3"):
				iVar1 = 790000;
				if (bVar0)
				{
					if (Global_262145.f_24148 /* Tunable: ASSAULT_VEHICLES_DINKA_JESTER_CLASSIC */ >= 0)
					{
						iVar1 = Global_262145.f_24148 /* Tunable: ASSAULT_VEHICLES_DINKA_JESTER_CLASSIC */;
					}
				}
				break;
			case joaat("cheburek"):
				iVar1 = 145000;
				if (bVar0)
				{
					if (Global_262145.f_24153 /* Tunable: ASSAULT_VEHICLES_VULCAR_CHEBUREK */ >= 0)
					{
						iVar1 = Global_262145.f_24153 /* Tunable: ASSAULT_VEHICLES_VULCAR_CHEBUREK */;
					}
				}
				break;
			case joaat("caracara"):
				iVar1 = 1775000;
				if (bVar0)
				{
					if (Global_262145.f_24154 /* Tunable: ASSAULT_VEHICLES_VAPID_CARACARA */ >= 0)
					{
						iVar1 = Global_262145.f_24154 /* Tunable: ASSAULT_VEHICLES_VAPID_CARACARA */;
					}
				}
				break;
			case joaat("seasparrow"):
				iVar1 = 1815000;
				if (bVar0)
				{
					if (Global_262145.f_24155 /* Tunable: ASSAULT_VEHICLES_SEA_SPARROW */ >= 0)
					{
						iVar1 = Global_262145.f_24155 /* Tunable: ASSAULT_VEHICLES_SEA_SPARROW */;
					}
				}
				break;
			case joaat("terbyte"):
				if (!bParam2)
				{
					iVar1 = 1375000;
					if (bVar0)
					{
						if (Global_262145.f_24907 /* Tunable: BB_BENEFACTOR_TERRORBYTE */ >= 0)
						{
							iVar1 = Global_262145.f_24907 /* Tunable: BB_BENEFACTOR_TERRORBYTE */;
						}
					}
				}
				else
				{
					iVar1 = 0;
				}
				break;
			case joaat("mule4"):
				if (bParam2)
				{
					iVar1 = 72000;
					if (bVar0)
					{
						if (Global_262145.f_24824 /* Tunable: BB_TRADE_PRICE_WEAPONIZED_VEHICLES_MAIBATSU_MULE_CUSTOM */ >= 0)
						{
							iVar1 = Global_262145.f_24824 /* Tunable: BB_TRADE_PRICE_WEAPONIZED_VEHICLES_MAIBATSU_MULE_CUSTOM */;
						}
					}
				}
				else
				{
					iVar1 = 95760;
					if (bVar0)
					{
						if (Global_262145.f_24829 /* Tunable: BB_BUY_IT_NOW_PRICE_WEAPONIZED_VEHICLES_MAIBATSU_MULE_CUSTOM */ >= 0)
						{
							iVar1 = Global_262145.f_24829 /* Tunable: BB_BUY_IT_NOW_PRICE_WEAPONIZED_VEHICLES_MAIBATSU_MULE_CUSTOM */;
						}
					}
					iVar2 = 72000;
					if (bVar0)
					{
						if (Global_262145.f_24824 /* Tunable: BB_TRADE_PRICE_WEAPONIZED_VEHICLES_MAIBATSU_MULE_CUSTOM */ >= 0)
						{
							iVar2 = Global_262145.f_24824 /* Tunable: BB_TRADE_PRICE_WEAPONIZED_VEHICLES_MAIBATSU_MULE_CUSTOM */;
						}
					}
				}
				break;
			case joaat("pounder2"):
				if (bParam2)
				{
					iVar1 = 241000;
					if (bVar0)
					{
						if (Global_262145.f_24823 /* Tunable: BB_TRADE_PRICE_WEAPONIZED_VEHICLES_MTL_POUNDER_CUSTOM */ >= 0)
						{
							iVar1 = Global_262145.f_24823 /* Tunable: BB_TRADE_PRICE_WEAPONIZED_VEHICLES_MTL_POUNDER_CUSTOM */;
						}
					}
				}
				else
				{
					iVar1 = 320530;
					if (bVar0)
					{
						if (Global_262145.f_24828 /* Tunable: BB_BUY_IT_NOW_PRICE_WEAPONIZED_VEHICLES_MTL_POUNDER_CUSTOM */ >= 0)
						{
							iVar1 = Global_262145.f_24828 /* Tunable: BB_BUY_IT_NOW_PRICE_WEAPONIZED_VEHICLES_MTL_POUNDER_CUSTOM */;
						}
					}
					iVar2 = 241000;
					if (bVar0)
					{
						if (Global_262145.f_24823 /* Tunable: BB_TRADE_PRICE_WEAPONIZED_VEHICLES_MTL_POUNDER_CUSTOM */ >= 0)
						{
							iVar2 = Global_262145.f_24823 /* Tunable: BB_TRADE_PRICE_WEAPONIZED_VEHICLES_MTL_POUNDER_CUSTOM */;
						}
					}
				}
				break;
			case joaat("swinger"):
				iVar1 = 909000;
				if (bVar0)
				{
					if (Global_262145.f_24795 /* Tunable: BB_TRADE_PRICE_HIGH_END_VEHICLES_OCELOT_SWINGER */ >= 0)
					{
						iVar1 = Global_262145.f_24795 /* Tunable: BB_TRADE_PRICE_HIGH_END_VEHICLES_OCELOT_SWINGER */;
					}
				}
				break;
			case joaat("menacer"):
				iVar1 = 1775000;
				if (bVar0)
				{
					if (Global_262145.f_24826 /* Tunable: BB_TRADE_PRICE_WEAPONIZED_VEHICLES_PEGASSI_HVY_MENACER */ >= 0)
					{
						iVar1 = Global_262145.f_24826 /* Tunable: BB_TRADE_PRICE_WEAPONIZED_VEHICLES_PEGASSI_HVY_MENACER */;
					}
				}
				break;
			case joaat("scramjet"):
				iVar1 = 3480000;
				if (bVar0)
				{
					if (Global_262145.f_24831 /* Tunable: BB_BUY_IT_NOW_PRICE_WEAPONIZED_VEHICLES_DECLASSE_SCRAMJET */ >= 0)
					{
						iVar1 = Global_262145.f_24831 /* Tunable: BB_BUY_IT_NOW_PRICE_WEAPONIZED_VEHICLES_DECLASSE_SCRAMJET */;
					}
				}
				break;
			case joaat("strikeforce"):
				iVar1 = 3800000;
				if (bVar0)
				{
					if (Global_262145.f_24827 /* Tunable: BB_TRADE_PRICE_WEAPONIZED_VEHICLES_B_11_STRIKEFORCE */ >= 0)
					{
						iVar1 = Global_262145.f_24827 /* Tunable: BB_TRADE_PRICE_WEAPONIZED_VEHICLES_B_11_STRIKEFORCE */;
					}
				}
				break;
			case joaat("oppressor2"):
				if (bParam2)
				{
					iVar1 = 2925000;
					if (bVar0)
					{
						if (Global_262145.f_24825 /* Tunable: BB_TRADE_PRICE_WEAPONIZED_VEHICLES_PEGASSI_OPPRESSOR_MK_II */ >= 0)
						{
							iVar1 = Global_262145.f_24825 /* Tunable: BB_TRADE_PRICE_WEAPONIZED_VEHICLES_PEGASSI_OPPRESSOR_MK_II */;
						}
					}
				}
				else
				{
					iVar1 = 3890250;
					if (bVar0)
					{
						if (Global_262145.f_24830 /* Tunable: BB_BUY_IT_NOW_PRICE_WEAPONIZED_VEHICLES_PEGASSI_OPPRESSOR_MK_II */ >= 0)
						{
							iVar1 = Global_262145.f_24830 /* Tunable: BB_BUY_IT_NOW_PRICE_WEAPONIZED_VEHICLES_PEGASSI_OPPRESSOR_MK_II */;
						}
					}
					iVar2 = 2925000;
					if (bVar0)
					{
						if (Global_262145.f_24825 /* Tunable: BB_TRADE_PRICE_WEAPONIZED_VEHICLES_PEGASSI_OPPRESSOR_MK_II */ >= 0)
						{
							iVar2 = Global_262145.f_24825 /* Tunable: BB_TRADE_PRICE_WEAPONIZED_VEHICLES_PEGASSI_OPPRESSOR_MK_II */;
						}
					}
				}
				break;
			case joaat("patriot2"):
				if (bParam2)
				{
					iVar1 = 460000;
					if (bVar0)
					{
						if (Global_262145.f_24792 /* Tunable: BB_TRADE_PRICE_HIGH_END_VEHICLES_MAMMOTH_PATRIOT_STRETCH */ >= 0)
						{
							iVar1 = Global_262145.f_24792 /* Tunable: BB_TRADE_PRICE_HIGH_END_VEHICLES_MAMMOTH_PATRIOT_STRETCH */;
						}
					}
				}
				else
				{
					iVar1 = 611800;
					if (bVar0)
					{
						if (Global_262145.f_24832 /* Tunable: BB_BUY_IT_NOW_PRICE_HIGH_END_VEHICLES_MAMMOTH_PATRIOT_STRETCH */ >= 0)
						{
							iVar1 = Global_262145.f_24832 /* Tunable: BB_BUY_IT_NOW_PRICE_HIGH_END_VEHICLES_MAMMOTH_PATRIOT_STRETCH */;
						}
					}
					iVar2 = 460000;
					if (bVar0)
					{
						if (Global_262145.f_24792 /* Tunable: BB_TRADE_PRICE_HIGH_END_VEHICLES_MAMMOTH_PATRIOT_STRETCH */ >= 0)
						{
							iVar2 = Global_262145.f_24792 /* Tunable: BB_TRADE_PRICE_HIGH_END_VEHICLES_MAMMOTH_PATRIOT_STRETCH */;
						}
					}
				}
				break;
			case joaat("stafford"):
				iVar1 = 1272000;
				if (bVar0)
				{
					if (Global_262145.f_24793 /* Tunable: BB_TRADE_PRICE_HIGH_END_VEHICLES_ENUS_STAFFORD */ >= 0)
					{
						iVar1 = Global_262145.f_24793 /* Tunable: BB_TRADE_PRICE_HIGH_END_VEHICLES_ENUS_STAFFORD */;
					}
				}
				break;
			case joaat("freecrawler"):
				iVar1 = 597000;
				if (bVar0)
				{
					if (Global_262145.f_24794 /* Tunable: BB_TRADE_PRICE_HIGH_END_VEHICLES_CANIS_FREECRAWLER */ >= 0)
					{
						iVar1 = Global_262145.f_24794 /* Tunable: BB_TRADE_PRICE_HIGH_END_VEHICLES_CANIS_FREECRAWLER */;
					}
				}
				break;
			case joaat("blimp3"):
				if (bParam2)
				{
					iVar1 = 895000;
					if (bVar0)
					{
						if (Global_262145.f_24797 /* Tunable: BB_TRADE_PRICE_MISC_VEHICLES_BLIMP */ >= 0)
						{
							iVar1 = Global_262145.f_24797 /* Tunable: BB_TRADE_PRICE_MISC_VEHICLES_BLIMP */;
						}
					}
				}
				else
				{
					iVar1 = 1190350;
					if (bVar0)
					{
						if (Global_262145.f_24834 /* Tunable: BB_BUY_IT_NOW_PRICE_MISC_VEHICLES_BLIMP */ >= 0)
						{
							iVar1 = Global_262145.f_24834 /* Tunable: BB_BUY_IT_NOW_PRICE_MISC_VEHICLES_BLIMP */;
						}
					}
					iVar2 = 895000;
					if (bVar0)
					{
						if (Global_262145.f_24797 /* Tunable: BB_TRADE_PRICE_MISC_VEHICLES_BLIMP */ >= 0)
						{
							iVar2 = Global_262145.f_24797 /* Tunable: BB_TRADE_PRICE_MISC_VEHICLES_BLIMP */;
						}
					}
				}
				break;
			case joaat("pbus2"):
				if (bParam2)
				{
					iVar1 = 1385000;
					if (bVar0)
					{
						if (Global_262145.f_24796 /* Tunable: BB_TRADE_PRICE_MISC_VEHICLES_FESTIVAL_BUS */ >= 0)
						{
							iVar1 = Global_262145.f_24796 /* Tunable: BB_TRADE_PRICE_MISC_VEHICLES_FESTIVAL_BUS */;
						}
					}
				}
				else
				{
					iVar1 = 1842050;
					if (bVar0)
					{
						if (Global_262145.f_24833 /* Tunable: BB_BUY_IT_NOW_PRICE_MISC_VEHICLES_FESTIVAL_BUS */ >= 0)
						{
							iVar1 = Global_262145.f_24833 /* Tunable: BB_BUY_IT_NOW_PRICE_MISC_VEHICLES_FESTIVAL_BUS */;
						}
					}
					iVar2 = 1385000;
					if (bVar0)
					{
						if (Global_262145.f_24796 /* Tunable: BB_TRADE_PRICE_MISC_VEHICLES_FESTIVAL_BUS */ >= 0)
						{
							iVar2 = Global_262145.f_24796 /* Tunable: BB_TRADE_PRICE_MISC_VEHICLES_FESTIVAL_BUS */;
						}
					}
				}
				break;
			case joaat("cerberus"):
				iVar1 = 3870300;
				if (bVar0 && Global_262145.f_25996 /* Tunable: AW_BUY_IT_NOW_PRICE_APOCALYPSE_CERBERUS */ >= 0)
				{
					iVar1 = Global_262145.f_25996 /* Tunable: AW_BUY_IT_NOW_PRICE_APOCALYPSE_CERBERUS */;
				}
				if (bParam2)
				{
					iVar2 = iVar1;
					iVar1 = 2910000;
					if (bVar0 && Global_262145.f_26011 /* Tunable: AW_TRADE_PRICE_APOCALYPSE_CERBERUS */ >= 0)
					{
						iVar1 = Global_262145.f_26011 /* Tunable: AW_TRADE_PRICE_APOCALYPSE_CERBERUS */;
					}
				}
				break;
			case joaat("cerberus2"):
				iVar1 = 3870300;
				if (bVar0 && Global_262145.f_26001 /* Tunable: AW_BUY_IT_NOW_PRICE_SCIFI_CERBERUS */ >= 0)
				{
					iVar1 = Global_262145.f_26001 /* Tunable: AW_BUY_IT_NOW_PRICE_SCIFI_CERBERUS */;
				}
				if (bParam2)
				{
					iVar2 = iVar1;
					iVar1 = 2910000;
					if (bVar0 && Global_262145.f_26016 /* Tunable: AW_TRADE_PRICE_SCIFI_CERBERUS */ >= 0)
					{
						iVar1 = Global_262145.f_26016 /* Tunable: AW_TRADE_PRICE_SCIFI_CERBERUS */;
					}
				}
				break;
			case joaat("cerberus3"):
				iVar1 = 3870300;
				if (bVar0 && Global_262145.f_26006 /* Tunable: AW_BUY_IT_NOW_PRICE_CONSUMERISM_CERBERUS */ >= 0)
				{
					iVar1 = Global_262145.f_26006 /* Tunable: AW_BUY_IT_NOW_PRICE_CONSUMERISM_CERBERUS */;
				}
				if (bParam2)
				{
					iVar2 = iVar1;
					iVar1 = 2910000;
					if (bVar0 && Global_262145.f_26021 /* Tunable: AW_TRADE_PRICE_CONSUMERISM_CERBERUS */ >= 0)
					{
						iVar1 = Global_262145.f_26021 /* Tunable: AW_TRADE_PRICE_CONSUMERISM_CERBERUS */;
					}
				}
				break;
			case joaat("brutus"):
				iVar1 = 2666650;
				if (bVar0 && Global_262145.f_25997 /* Tunable: AW_BUY_IT_NOW_PRICE_APOCALYPSE_BRUTUS */ >= 0)
				{
					iVar1 = Global_262145.f_25997 /* Tunable: AW_BUY_IT_NOW_PRICE_APOCALYPSE_BRUTUS */;
				}
				if (bParam2)
				{
					iVar2 = iVar1;
					iVar1 = 2005000;
					if (bVar0 && Global_262145.f_26012 /* Tunable: AW_TRADE_PRICE_APOCALYPSE_BRUTUS */ >= 0)
					{
						iVar1 = Global_262145.f_26012 /* Tunable: AW_TRADE_PRICE_APOCALYPSE_BRUTUS */;
					}
				}
				break;
			case joaat("brutus2"):
				iVar1 = 2666650;
				if (bVar0 && Global_262145.f_26002 /* Tunable: AW_BUY_IT_NOW_PRICE_SCIFI_BRUTUS */ >= 0)
				{
					iVar1 = Global_262145.f_26002 /* Tunable: AW_BUY_IT_NOW_PRICE_SCIFI_BRUTUS */;
				}
				if (bParam2)
				{
					iVar2 = iVar1;
					iVar1 = 2005000;
					if (bVar0 && Global_262145.f_26017 /* Tunable: AW_TRADE_PRICE_SCIFI_BRUTUS */ >= 0)
					{
						iVar1 = Global_262145.f_26017 /* Tunable: AW_TRADE_PRICE_SCIFI_BRUTUS */;
					}
				}
				break;
			case joaat("brutus3"):
				iVar1 = 2666650;
				if (bVar0 && Global_262145.f_26007 /* Tunable: AW_BUY_IT_NOW_PRICE_CONSUMERISM_BRUTUS */ >= 0)
				{
					iVar1 = Global_262145.f_26007 /* Tunable: AW_BUY_IT_NOW_PRICE_CONSUMERISM_BRUTUS */;
				}
				if (bParam2)
				{
					iVar2 = iVar1;
					iVar1 = 2005000;
					if (bVar0 && Global_262145.f_26022 /* Tunable: AW_TRADE_PRICE_CONSUMERISM_BRUTUS */ >= 0)
					{
						iVar1 = Global_262145.f_26022 /* Tunable: AW_TRADE_PRICE_CONSUMERISM_BRUTUS */;
					}
				}
				break;
			case joaat("scarab"):
				iVar1 = 3076290;
				if (bVar0 && Global_262145.f_25998 /* Tunable: AW_BUY_IT_NOW_PRICE_APOCALYPSE_SCARAB */ >= 0)
				{
					iVar1 = Global_262145.f_25998 /* Tunable: AW_BUY_IT_NOW_PRICE_APOCALYPSE_SCARAB */;
				}
				if (bParam2)
				{
					iVar2 = iVar1;
					iVar1 = 2313000;
					if (bVar0 && Global_262145.f_26013 /* Tunable: AW_TRADE_PRICE_APOCALYPSE_SCARAB */ >= 0)
					{
						iVar1 = Global_262145.f_26013 /* Tunable: AW_TRADE_PRICE_APOCALYPSE_SCARAB */;
					}
				}
				break;
			case joaat("scarab2"):
				iVar1 = 3076290;
				if (bVar0 && Global_262145.f_26003 /* Tunable: AW_BUY_IT_NOW_PRICE_SCIFI_SCARAB */ >= 0)
				{
					iVar1 = Global_262145.f_26003 /* Tunable: AW_BUY_IT_NOW_PRICE_SCIFI_SCARAB */;
				}
				if (bParam2)
				{
					iVar2 = iVar1;
					iVar1 = 2313000;
					if (bVar0 && Global_262145.f_26018 /* Tunable: AW_TRADE_PRICE_SCIFI_SCARAB */ >= 0)
					{
						iVar1 = Global_262145.f_26018 /* Tunable: AW_TRADE_PRICE_SCIFI_SCARAB */;
					}
				}
				break;
			case joaat("scarab3"):
				iVar1 = 3076290;
				if (bVar0 && Global_262145.f_26008 /* Tunable: AW_BUY_IT_NOW_PRICE_CONSUMERISM_SCARAB */ >= 0)
				{
					iVar1 = Global_262145.f_26008 /* Tunable: AW_BUY_IT_NOW_PRICE_CONSUMERISM_SCARAB */;
				}
				if (bParam2)
				{
					iVar2 = iVar1;
					iVar1 = 2313000;
					if (bVar0 && Global_262145.f_26023 /* Tunable: AW_TRADE_PRICE_CONSUMERISM_SCARAB */ >= 0)
					{
						iVar1 = Global_262145.f_26023 /* Tunable: AW_TRADE_PRICE_CONSUMERISM_SCARAB */;
					}
				}
				break;
			case joaat("imperator"):
				iVar1 = 2284940;
				if (bVar0 && Global_262145.f_25999 /* Tunable: AW_BUY_IT_NOW_PRICE_APOCALYPSE_IMPERATOR */ >= 0)
				{
					iVar1 = Global_262145.f_25999 /* Tunable: AW_BUY_IT_NOW_PRICE_APOCALYPSE_IMPERATOR */;
				}
				if (bParam2)
				{
					iVar2 = iVar1;
					iVar1 = 1718000;
					if (bVar0 && Global_262145.f_26014 /* Tunable: AW_TRADE_PRICE_APOCALYPSE_IMPERATOR */ >= 0)
					{
						iVar1 = Global_262145.f_26014 /* Tunable: AW_TRADE_PRICE_APOCALYPSE_IMPERATOR */;
					}
				}
				break;
			case joaat("imperator2"):
				iVar1 = 2284940;
				if (bVar0 && Global_262145.f_26004 /* Tunable: AW_BUY_IT_NOW_PRICE_SCIFI_IMPERATOR */ >= 0)
				{
					iVar1 = Global_262145.f_26004 /* Tunable: AW_BUY_IT_NOW_PRICE_SCIFI_IMPERATOR */;
				}
				if (bParam2)
				{
					iVar2 = iVar1;
					iVar1 = 1718000;
					if (bVar0 && Global_262145.f_26019 /* Tunable: AW_TRADE_PRICE_SCIFI_IMPERATOR */ >= 0)
					{
						iVar1 = Global_262145.f_26019 /* Tunable: AW_TRADE_PRICE_SCIFI_IMPERATOR */;
					}
				}
				break;
			case joaat("imperator3"):
				iVar1 = 2284940;
				if (bVar0 && Global_262145.f_26009 /* Tunable: AW_BUY_IT_NOW_PRICE_CONSUMERISM_IMPERATOR */ >= 0)
				{
					iVar1 = Global_262145.f_26009 /* Tunable: AW_BUY_IT_NOW_PRICE_CONSUMERISM_IMPERATOR */;
				}
				if (bParam2)
				{
					iVar2 = iVar1;
					iVar1 = 1718000;
					if (bVar0 && Global_262145.f_26024 /* Tunable: AW_TRADE_PRICE_CONSUMERISM_IMPERATOR */ >= 0)
					{
						iVar1 = Global_262145.f_26024 /* Tunable: AW_TRADE_PRICE_CONSUMERISM_IMPERATOR */;
					}
				}
				break;
			case joaat("zr380"):
				iVar1 = 2138640;
				if (bVar0 && Global_262145.f_26000 /* Tunable: AW_BUY_IT_NOW_PRICE_APOCALYPSE_ZR380 */ >= 0)
				{
					iVar1 = Global_262145.f_26000 /* Tunable: AW_BUY_IT_NOW_PRICE_APOCALYPSE_ZR380 */;
				}
				if (bParam2)
				{
					iVar2 = iVar1;
					iVar1 = 1608000;
					if (bVar0 && Global_262145.f_26015 /* Tunable: AW_TRADE_PRICE_APOCALYPSE_ZR380 */ >= 0)
					{
						iVar1 = Global_262145.f_26015 /* Tunable: AW_TRADE_PRICE_APOCALYPSE_ZR380 */;
					}
				}
				break;
			case joaat("zr3802"):
				iVar1 = 2138640;
				if (bVar0 && Global_262145.f_26005 /* Tunable: AW_BUY_IT_NOW_PRICE_SCIFI_ZR380 */ >= 0)
				{
					iVar1 = Global_262145.f_26005 /* Tunable: AW_BUY_IT_NOW_PRICE_SCIFI_ZR380 */;
				}
				if (bParam2)
				{
					iVar2 = iVar1;
					iVar1 = 1608000;
					if (bVar0 && Global_262145.f_26020 /* Tunable: AW_TRADE_PRICE_SCIFI_ZR380 */ >= 0)
					{
						iVar1 = Global_262145.f_26020 /* Tunable: AW_TRADE_PRICE_SCIFI_ZR380 */;
					}
				}
				break;
			case joaat("zr3803"):
				iVar1 = 2138640;
				if (bVar0 && Global_262145.f_26010 /* Tunable: AW_BUY_IT_NOW_PRICE_CONSUMERISM_ZR380 */ >= 0)
				{
					iVar1 = Global_262145.f_26010 /* Tunable: AW_BUY_IT_NOW_PRICE_CONSUMERISM_ZR380 */;
				}
				if (bParam2)
				{
					iVar2 = iVar1;
					iVar1 = 1608000;
					if (bVar0 && Global_262145.f_26025 /* Tunable: AW_TRADE_PRICE_CONSUMERISM_ZR380 */ >= 0)
					{
						iVar1 = Global_262145.f_26025 /* Tunable: AW_TRADE_PRICE_CONSUMERISM_ZR380 */;
					}
				}
				break;
			case joaat("impaler"):
				iVar1 = 331835;
				if (bVar0 && Global_262145.f_25924 /* Tunable: AW_BUY_IT_NOW_PRICE_IMPALER */ >= 0)
				{
					iVar1 = Global_262145.f_25924 /* Tunable: AW_BUY_IT_NOW_PRICE_IMPALER */;
				}
				if (bParam2)
				{
					iVar2 = iVar1;
					iVar1 = 249500;
					if (bVar0 && Global_262145.f_25929 /* Tunable: AW_TRADE_PRICE_IMPALER */ >= 0)
					{
						iVar1 = Global_262145.f_25929 /* Tunable: AW_TRADE_PRICE_IMPALER */;
					}
				}
				break;
			case joaat("vamos"):
				iVar1 = 596000;
				if (bVar0 && Global_262145.f_26031 /* Tunable: AW_SALE_PRICE_VAMOS */ >= 0)
				{
					iVar1 = Global_262145.f_26031 /* Tunable: AW_SALE_PRICE_VAMOS */;
				}
				break;
			case joaat("tulip"):
				iVar1 = 718000;
				if (bVar0 && Global_262145.f_26033 /* Tunable: AW_SALE_PRICE_TULIP */ >= 0)
				{
					iVar1 = Global_262145.f_26033 /* Tunable: AW_SALE_PRICE_TULIP */;
				}
				break;
			case joaat("deveste"):
				iVar1 = 1795000;
				if (bVar0 && Global_262145.f_26026 /* Tunable: AW_SALE_PRICE_DEVESTE */ >= 0)
				{
					iVar1 = Global_262145.f_26026 /* Tunable: AW_SALE_PRICE_DEVESTE */;
				}
				break;
			case joaat("schlagen"):
				iVar1 = 1300000;
				if (bVar0 && Global_262145.f_26027 /* Tunable: AW_SALE_PRICE_SCHLAGEN */ >= 0)
				{
					iVar1 = Global_262145.f_26027 /* Tunable: AW_SALE_PRICE_SCHLAGEN */;
				}
				break;
			case joaat("toros"):
				iVar1 = 498000;
				if (bVar0 && Global_262145.f_26028 /* Tunable: AW_SALE_PRICE_TOROS */ >= 0)
				{
					iVar1 = Global_262145.f_26028 /* Tunable: AW_SALE_PRICE_TOROS */;
				}
				break;
			case joaat("deviant"):
				iVar1 = 512000;
				if (bVar0 && Global_262145.f_26029 /* Tunable: AW_SALE_PRICE_DEVIANT */ >= 0)
				{
					iVar1 = Global_262145.f_26029 /* Tunable: AW_SALE_PRICE_DEVIANT */;
				}
				break;
			case joaat("clique"):
				iVar1 = 909000;
				if (bVar0 && Global_262145.f_26030 /* Tunable: AW_SALE_PRICE_CLIQUE */ >= 0)
				{
					iVar1 = Global_262145.f_26030 /* Tunable: AW_SALE_PRICE_CLIQUE */;
				}
				break;
			case joaat("italigto"):
				iVar1 = 1965000;
				if (bVar0 && Global_262145.f_26032 /* Tunable: AW_SALE_PRICE_GTO */ >= 0)
				{
					iVar1 = Global_262145.f_26032 /* Tunable: AW_SALE_PRICE_GTO */;
				}
				break;
			case joaat("rcbandito"):
				iVar1 = 1590000;
				if (bVar0 && Global_262145.f_26034 /* Tunable: AW_SALE_PRICE_BANDITO */ >= 0)
				{
					iVar1 = Global_262145.f_26034 /* Tunable: AW_SALE_PRICE_BANDITO */;
				}
				break;
			case joaat("blista3"):
				iVar1 = 0;
				break;
			case joaat("slamvan4"):
				iVar1 = 0;
				break;
			case joaat("slamvan5"):
				iVar1 = 100000;
				break;
			case joaat("thrax"):
				iVar1 = 2325000;
				if (bVar0 && Global_262145.f_26881 /* Tunable: VC_SALE_PRICE_THRAX */ >= 0)
				{
					iVar1 = Global_262145.f_26881 /* Tunable: VC_SALE_PRICE_THRAX */;
				}
				break;
			case joaat("drafter"):
				iVar1 = 718000;
				if (bVar0 && Global_262145.f_26882 /* Tunable: VC_SALE_PRICE_DRAFTER_8F */ >= 0)
				{
					iVar1 = Global_262145.f_26882 /* Tunable: VC_SALE_PRICE_DRAFTER_8F */;
				}
				break;
			case joaat("locust"):
				iVar1 = 1625000;
				if (bVar0 && Global_262145.f_26878 /* Tunable: VC_SALE_PRICE_LOCUST */ >= 0)
				{
					iVar1 = Global_262145.f_26878 /* Tunable: VC_SALE_PRICE_LOCUST */;
				}
				break;
			case joaat("novak"):
				iVar1 = 608000;
				if (bVar0 && Global_262145.f_26884 /* Tunable: VC_SALE_PRICE_NOVAK */ >= 0)
				{
					iVar1 = Global_262145.f_26884 /* Tunable: VC_SALE_PRICE_NOVAK */;
				}
				break;
			case joaat("zorrusso"):
				iVar1 = 1925000;
				if (bVar0 && Global_262145.f_26883 /* Tunable: VC_SALE_PRICE_ZORRUSSO */ >= 0)
				{
					iVar1 = Global_262145.f_26883 /* Tunable: VC_SALE_PRICE_ZORRUSSO */;
				}
				break;
			case joaat("gauntlet3"):
				if (bParam2)
				{
					iVar1 = 461250;
					if (bVar0)
					{
						if (Global_262145.f_28506 /* Tunable: CH_TRADE_PRICE_GAUNTLET3 */ >= 0)
						{
							iVar1 = Global_262145.f_28506 /* Tunable: CH_TRADE_PRICE_GAUNTLET3 */;
						}
					}
				}
				else
				{
					iVar1 = 615000;
					if (bVar0)
					{
						if (Global_262145.f_26879 /* Tunable: VC_SALE_PRICE_GAUNTLET_CLASSIC */ >= 0)
						{
							iVar1 = Global_262145.f_26879 /* Tunable: VC_SALE_PRICE_GAUNTLET_CLASSIC */;
						}
					}
					iVar2 = 461250;
					if (bVar0)
					{
						if (Global_262145.f_28506 /* Tunable: CH_TRADE_PRICE_GAUNTLET3 */ >= 0)
						{
							iVar2 = Global_262145.f_28506 /* Tunable: CH_TRADE_PRICE_GAUNTLET3 */;
						}
					}
				}
				break;
			case joaat("issi7"):
				iVar1 = 897000;
				if (bVar0 && Global_262145.f_26885 /* Tunable: 1101391290 */ >= 0)
				{
					iVar1 = Global_262145.f_26885 /* Tunable: 1101391290 */;
				}
				break;
			case joaat("zion3"):
				iVar1 = 812000;
				if (bVar0 && Global_262145.f_26880 /* Tunable: VC_SALE_PRICE_ZION_CLASSIC */ >= 0)
				{
					iVar1 = Global_262145.f_26880 /* Tunable: VC_SALE_PRICE_ZION_CLASSIC */;
				}
				break;
			case joaat("nebula"):
				iVar1 = 797000;
				if (bVar0 && Global_262145.f_26887 /* Tunable: VC_SALE_PRICE_NEBULA */ >= 0)
				{
					iVar1 = Global_262145.f_26887 /* Tunable: VC_SALE_PRICE_NEBULA */;
				}
				break;
			case joaat("hellion"):
				iVar1 = 835000;
				if (bVar0 && Global_262145.f_26886 /* Tunable: VC_SALE_PRICE_HELLION */ >= 0)
				{
					iVar1 = Global_262145.f_26886 /* Tunable: VC_SALE_PRICE_HELLION */;
				}
				break;
			case joaat("dynasty"):
				iVar1 = 450000;
				if (bVar0 && Global_262145.f_26888 /* Tunable: VC_SALE_PRICE_DYNASTY */ >= 0)
				{
					iVar1 = Global_262145.f_26888 /* Tunable: VC_SALE_PRICE_DYNASTY */;
				}
				break;
			case joaat("rrocket"):
				iVar1 = 925000;
				if (bVar0 && Global_262145.f_26896 /* Tunable: VC_SALE_PRICE_RAMPANT_ROCKET */ >= 0)
				{
					iVar1 = Global_262145.f_26896 /* Tunable: VC_SALE_PRICE_RAMPANT_ROCKET */;
				}
				break;
			case joaat("peyote2"):
				iVar1 = 805000;
				if (bVar0 && Global_262145.f_26895 /* Tunable: VC_SALE_PRICE_GASSER */ >= 0)
				{
					iVar1 = Global_262145.f_26895 /* Tunable: VC_SALE_PRICE_GASSER */;
				}
				break;
			case joaat("gauntlet4"):
				iVar1 = 745000;
				if (bVar0 && Global_262145.f_26894 /* Tunable: VC_SALE_PRICE_GAUNTLET */ >= 0)
				{
					iVar1 = Global_262145.f_26894 /* Tunable: VC_SALE_PRICE_GAUNTLET */;
				}
				break;
			case joaat("caracara2"):
				iVar1 = 875000;
				if (bVar0 && Global_262145.f_26893 /* Tunable: VC_SALE_PRICE_CARACARA_4X4 */ >= 0)
				{
					iVar1 = Global_262145.f_26893 /* Tunable: VC_SALE_PRICE_CARACARA_4X4 */;
				}
				break;
			case joaat("jugular"):
				if (bParam2)
				{
					iVar1 = 918750;
					if (bVar0)
					{
						if (Global_262145.f_28504 /* Tunable: CH_TRADE_PRICE_JUGULAR */ >= 0)
						{
							iVar1 = Global_262145.f_28504 /* Tunable: CH_TRADE_PRICE_JUGULAR */;
						}
					}
				}
				else
				{
					iVar1 = 1225000;
					if (bVar0)
					{
						if (Global_262145.f_27206 /* Tunable: VC_SALE_PRICE_JUGULAR */ >= 0)
						{
							iVar1 = Global_262145.f_27206 /* Tunable: VC_SALE_PRICE_JUGULAR */;
						}
					}
					iVar2 = 918750;
					if (bVar0)
					{
						if (Global_262145.f_28504 /* Tunable: CH_TRADE_PRICE_JUGULAR */ >= 0)
						{
							iVar2 = Global_262145.f_28504 /* Tunable: CH_TRADE_PRICE_JUGULAR */;
						}
					}
				}
				break;
			case joaat("s80"):
				iVar1 = 2575000;
				if (bVar0 && Global_262145.f_26892 /* Tunable: VC_SALE_PRICE_S80RR */ >= 0)
				{
					iVar1 = Global_262145.f_26892 /* Tunable: VC_SALE_PRICE_S80RR */;
				}
				break;
			case joaat("krieger"):
				iVar1 = 2875000;
				if (bVar0 && Global_262145.f_26891 /* Tunable: VC_SALE_PRICE_KRIEGER */ >= 0)
				{
					iVar1 = Global_262145.f_26891 /* Tunable: VC_SALE_PRICE_KRIEGER */;
				}
				break;
			case joaat("emerus"):
				iVar1 = 2750000;
				if (bVar0 && Global_262145.f_26890 /* Tunable: VC_SALE_PRICE_EMERUS */ >= 0)
				{
					iVar1 = Global_262145.f_26890 /* Tunable: VC_SALE_PRICE_EMERUS */;
				}
				break;
			case joaat("neo"):
				iVar1 = 1875000;
				if (bVar0 && Global_262145.f_26889 /* Tunable: VC_SALE_PRICE_NEO */ >= 0)
				{
					iVar1 = Global_262145.f_26889 /* Tunable: VC_SALE_PRICE_NEO */;
				}
				break;
			case joaat("paragon"):
				iVar1 = 905000;
				if (bVar0 && Global_262145.f_27271 /* Tunable: VC_SALE_PRICE_PARAGON */ >= 0)
				{
					iVar1 = Global_262145.f_27271 /* Tunable: VC_SALE_PRICE_PARAGON */;
				}
				break;
		}
		switch (iParam1)
		{
			case joaat("asbo"):
				if (bParam2)
				{
					iVar1 = 306000;
					if (bVar0)
					{
						if (Global_262145.f_28471 /* Tunable: CH_TRADE_PRICE_ASBO */ >= 0)
						{
							iVar1 = Global_262145.f_28471 /* Tunable: CH_TRADE_PRICE_ASBO */;
						}
					}
				}
				else
				{
					iVar1 = 408000;
					if (bVar0)
					{
						if (Global_262145.f_28470 /* Tunable: CH_BIN_PRICE_ASBO */ >= 0)
						{
							iVar1 = Global_262145.f_28470 /* Tunable: CH_BIN_PRICE_ASBO */;
						}
					}
					iVar2 = 306000;
					if (bVar0)
					{
						if (Global_262145.f_28471 /* Tunable: CH_TRADE_PRICE_ASBO */ >= 0)
						{
							iVar2 = Global_262145.f_28471 /* Tunable: CH_TRADE_PRICE_ASBO */;
						}
					}
				}
				break;
			case joaat("kanjo"):
				if (bParam2)
				{
					iVar1 = 435000;
					if (bVar0)
					{
						if (Global_262145.f_28473 /* Tunable: CH_TRADE_PRICE_KANJO */ >= 0)
						{
							iVar1 = Global_262145.f_28473 /* Tunable: CH_TRADE_PRICE_KANJO */;
						}
					}
				}
				else
				{
					iVar1 = 580000;
					if (bVar0)
					{
						if (Global_262145.f_28472 /* Tunable: CH_BIN_PRICE_KANJO */ >= 0)
						{
							iVar1 = Global_262145.f_28472 /* Tunable: CH_BIN_PRICE_KANJO */;
						}
					}
					iVar2 = 435000;
					if (bVar0)
					{
						if (Global_262145.f_28473 /* Tunable: CH_TRADE_PRICE_KANJO */ >= 0)
						{
							iVar2 = Global_262145.f_28473 /* Tunable: CH_TRADE_PRICE_KANJO */;
						}
					}
				}
				break;
			case joaat("everon"):
				if (bParam2)
				{
					iVar1 = 1106250;
					if (bVar0)
					{
						if (Global_262145.f_28475 /* Tunable: CH_TRADE_PRICE_EVERON */ >= 0)
						{
							iVar1 = Global_262145.f_28475 /* Tunable: CH_TRADE_PRICE_EVERON */;
						}
					}
				}
				else
				{
					iVar1 = 1475000;
					if (bVar0)
					{
						if (Global_262145.f_28474 /* Tunable: CH_BIN_PRICE_EVERON */ >= 0)
						{
							iVar1 = Global_262145.f_28474 /* Tunable: CH_BIN_PRICE_EVERON */;
						}
					}
					iVar2 = 1106250;
					if (bVar0)
					{
						if (Global_262145.f_28475 /* Tunable: CH_TRADE_PRICE_EVERON */ >= 0)
						{
							iVar2 = Global_262145.f_28475 /* Tunable: CH_TRADE_PRICE_EVERON */;
						}
					}
				}
				break;
			case joaat("retinue2"):
				if (bParam2)
				{
					iVar1 = 1215000;
					if (bVar0)
					{
						if (Global_262145.f_28477 /* Tunable: CH_TRADE_PRICE_RETINUE2 */ >= 0)
						{
							iVar1 = Global_262145.f_28477 /* Tunable: CH_TRADE_PRICE_RETINUE2 */;
						}
					}
				}
				else
				{
					iVar1 = 1620000;
					if (bVar0)
					{
						if (Global_262145.f_28476 /* Tunable: CH_BIN_PRICE_RETINUE2 */ >= 0)
						{
							iVar1 = Global_262145.f_28476 /* Tunable: CH_BIN_PRICE_RETINUE2 */;
						}
					}
					iVar2 = 1215000;
					if (bVar0)
					{
						if (Global_262145.f_28477 /* Tunable: CH_TRADE_PRICE_RETINUE2 */ >= 0)
						{
							iVar2 = Global_262145.f_28477 /* Tunable: CH_TRADE_PRICE_RETINUE2 */;
						}
					}
				}
				break;
			case joaat("yosemite2"):
				if (bParam2)
				{
					iVar1 = 981000;
					if (bVar0)
					{
						if (Global_262145.f_28479 /* Tunable: CH_TRADE_PRICE_YOSEMITE2 */ >= 0)
						{
							iVar1 = Global_262145.f_28479 /* Tunable: CH_TRADE_PRICE_YOSEMITE2 */;
						}
					}
				}
				else
				{
					iVar1 = 1308000;
					if (bVar0)
					{
						if (Global_262145.f_28478 /* Tunable: CH_BIN_PRICE_YOSEMITE2 */ >= 0)
						{
							iVar1 = Global_262145.f_28478 /* Tunable: CH_BIN_PRICE_YOSEMITE2 */;
						}
					}
					iVar2 = 981000;
					if (bVar0)
					{
						if (Global_262145.f_28479 /* Tunable: CH_TRADE_PRICE_YOSEMITE2 */ >= 0)
						{
							iVar2 = Global_262145.f_28479 /* Tunable: CH_TRADE_PRICE_YOSEMITE2 */;
						}
					}
				}
				break;
			case joaat("sugoi"):
				if (bParam2)
				{
					iVar1 = 918000;
					if (bVar0)
					{
						if (Global_262145.f_28481 /* Tunable: CH_TRADE_PRICE_SUGOI */ >= 0)
						{
							iVar1 = Global_262145.f_28481 /* Tunable: CH_TRADE_PRICE_SUGOI */;
						}
					}
				}
				else
				{
					iVar1 = 1224000;
					if (bVar0)
					{
						if (Global_262145.f_28480 /* Tunable: CH_BIN_PRICE_SUGOI */ >= 0)
						{
							iVar1 = Global_262145.f_28480 /* Tunable: CH_BIN_PRICE_SUGOI */;
						}
					}
					iVar2 = 918000;
					if (bVar0)
					{
						if (Global_262145.f_28481 /* Tunable: CH_TRADE_PRICE_SUGOI */ >= 0)
						{
							iVar2 = Global_262145.f_28481 /* Tunable: CH_TRADE_PRICE_SUGOI */;
						}
					}
				}
				break;
			case joaat("sultan2"):
				if (bParam2)
				{
					iVar1 = 1288500;
					if (bVar0)
					{
						if (Global_262145.f_28483 /* Tunable: CH_TRADE_PRICE_SULTAN2 */ >= 0)
						{
							iVar1 = Global_262145.f_28483 /* Tunable: CH_TRADE_PRICE_SULTAN2 */;
						}
					}
				}
				else
				{
					iVar1 = 1718000;
					if (bVar0)
					{
						if (Global_262145.f_28482 /* Tunable: CH_BIN_PRICE_SULTAN2 */ >= 0)
						{
							iVar1 = Global_262145.f_28482 /* Tunable: CH_BIN_PRICE_SULTAN2 */;
						}
					}
					iVar2 = 1288500;
					if (bVar0)
					{
						if (Global_262145.f_28483 /* Tunable: CH_TRADE_PRICE_SULTAN2 */ >= 0)
						{
							iVar2 = Global_262145.f_28483 /* Tunable: CH_TRADE_PRICE_SULTAN2 */;
						}
					}
				}
				break;
			case joaat("outlaw"):
				if (bParam2)
				{
					iVar1 = 951000;
					if (bVar0)
					{
						if (Global_262145.f_28485 /* Tunable: CH_TRADE_PRICE_OUTLAW */ >= 0)
						{
							iVar1 = Global_262145.f_28485 /* Tunable: CH_TRADE_PRICE_OUTLAW */;
						}
					}
				}
				else
				{
					iVar1 = 1268000;
					if (bVar0)
					{
						if (Global_262145.f_28484 /* Tunable: CH_BIN_PRICE_OUTLAW */ >= 0)
						{
							iVar1 = Global_262145.f_28484 /* Tunable: CH_BIN_PRICE_OUTLAW */;
						}
					}
					iVar2 = 951000;
					if (bVar0)
					{
						if (Global_262145.f_28485 /* Tunable: CH_TRADE_PRICE_OUTLAW */ >= 0)
						{
							iVar2 = Global_262145.f_28485 /* Tunable: CH_TRADE_PRICE_OUTLAW */;
						}
					}
				}
				break;
			case joaat("vagrant"):
				if (bParam2)
				{
					iVar1 = 1660500;
					if (bVar0)
					{
						if (Global_262145.f_28487 /* Tunable: CH_TRADE_PRICE_VAGRANT */ >= 0)
						{
							iVar1 = Global_262145.f_28487 /* Tunable: CH_TRADE_PRICE_VAGRANT */;
						}
					}
				}
				else
				{
					iVar1 = 2214000;
					if (bVar0)
					{
						if (Global_262145.f_28486 /* Tunable: CH_BIN_PRICE_VAGRANT */ >= 0)
						{
							iVar1 = Global_262145.f_28486 /* Tunable: CH_BIN_PRICE_VAGRANT */;
						}
					}
					iVar2 = 1660500;
					if (bVar0)
					{
						if (Global_262145.f_28487 /* Tunable: CH_TRADE_PRICE_VAGRANT */ >= 0)
						{
							iVar2 = Global_262145.f_28487 /* Tunable: CH_TRADE_PRICE_VAGRANT */;
						}
					}
				}
				break;
			case joaat("komoda"):
				if (bParam2)
				{
					iVar1 = 1275000;
					if (bVar0)
					{
						if (Global_262145.f_28489 /* Tunable: CH_TRADE_PRICE_KOMODA */ >= 0)
						{
							iVar1 = Global_262145.f_28489 /* Tunable: CH_TRADE_PRICE_KOMODA */;
						}
					}
				}
				else
				{
					iVar1 = 1700000;
					if (bVar0)
					{
						if (Global_262145.f_28488 /* Tunable: CH_BIN_PRICE_KOMODA */ >= 0)
						{
							iVar1 = Global_262145.f_28488 /* Tunable: CH_BIN_PRICE_KOMODA */;
						}
					}
					iVar2 = 1275000;
					if (bVar0)
					{
						if (Global_262145.f_28489 /* Tunable: CH_TRADE_PRICE_KOMODA */ >= 0)
						{
							iVar2 = Global_262145.f_28489 /* Tunable: CH_TRADE_PRICE_KOMODA */;
						}
					}
				}
				break;
			case joaat("stryder"):
				if (bParam2)
				{
					iVar1 = 502500;
					if (bVar0)
					{
						if (Global_262145.f_28491 /* Tunable: CH_TRADE_PRICE_STRYDER */ >= 0)
						{
							iVar1 = Global_262145.f_28491 /* Tunable: CH_TRADE_PRICE_STRYDER */;
						}
					}
				}
				else
				{
					iVar1 = 670000;
					if (bVar0)
					{
						if (Global_262145.f_28490 /* Tunable: CH_BIN_PRICE_STRYDER */ >= 0)
						{
							iVar1 = Global_262145.f_28490 /* Tunable: CH_BIN_PRICE_STRYDER */;
						}
					}
					iVar2 = 502500;
					if (bVar0)
					{
						if (Global_262145.f_28491 /* Tunable: CH_TRADE_PRICE_STRYDER */ >= 0)
						{
							iVar2 = Global_262145.f_28491 /* Tunable: CH_TRADE_PRICE_STRYDER */;
						}
					}
				}
				break;
			case joaat("furia"):
				if (bParam2)
				{
					iVar1 = 2055000;
					if (bVar0)
					{
						if (Global_262145.f_28493 /* Tunable: CH_TRADE_PRICE_FURIA */ >= 0)
						{
							iVar1 = Global_262145.f_28493 /* Tunable: CH_TRADE_PRICE_FURIA */;
						}
					}
				}
				else
				{
					iVar1 = 2740000;
					if (bVar0)
					{
						if (Global_262145.f_28492 /* Tunable: CH_BIN_PRICE_FURIA */ >= 0)
						{
							iVar1 = Global_262145.f_28492 /* Tunable: CH_BIN_PRICE_FURIA */;
						}
					}
					iVar2 = 2055000;
					if (bVar0)
					{
						if (Global_262145.f_28493 /* Tunable: CH_TRADE_PRICE_FURIA */ >= 0)
						{
							iVar2 = Global_262145.f_28493 /* Tunable: CH_TRADE_PRICE_FURIA */;
						}
					}
				}
				break;
			case joaat("zhaba"):
				if (bParam2)
				{
					iVar1 = 1800000;
					if (bVar0)
					{
						if (Global_262145.f_28495 /* Tunable: CH_TRADE_PRICE_ZHABA */ >= 0)
						{
							iVar1 = Global_262145.f_28495 /* Tunable: CH_TRADE_PRICE_ZHABA */;
						}
					}
				}
				else
				{
					iVar1 = 2400000;
					if (bVar0)
					{
						if (Global_262145.f_28494 /* Tunable: CH_BIN_PRICE_ZHABA */ >= 0)
						{
							iVar1 = Global_262145.f_28494 /* Tunable: CH_BIN_PRICE_ZHABA */;
						}
					}
					iVar2 = 1800000;
					if (bVar0)
					{
						if (Global_262145.f_28495 /* Tunable: CH_TRADE_PRICE_ZHABA */ >= 0)
						{
							iVar2 = Global_262145.f_28495 /* Tunable: CH_TRADE_PRICE_ZHABA */;
						}
					}
				}
				break;
			case joaat("jb7002"):
				iVar1 = 1470000;
				if (bVar0)
				{
					if (Global_262145.f_28573 /* Tunable: CH_TRADE_PRICE_JB7002 */ >= 0)
					{
						iVar1 = Global_262145.f_28573 /* Tunable: CH_TRADE_PRICE_JB7002 */;
					}
				}
				break;
			case joaat("minitank"):
				iVar1 = 2275000;
				if (bVar0)
				{
					if (Global_262145.f_28564 /* Tunable: CH_SALE_PRICE_MINITANK */ >= 0)
					{
						iVar1 = Global_262145.f_28564 /* Tunable: CH_SALE_PRICE_MINITANK */;
					}
				}
				break;
			case joaat("formula"):
				iVar1 = 3515000;
				if (bVar0)
				{
					if (Global_262145.f_28643 /* Tunable: CH_TRADE_PRICE_FORMULA */ >= 0)
					{
						iVar1 = Global_262145.f_28643 /* Tunable: CH_TRADE_PRICE_FORMULA */;
					}
				}
				break;
			case joaat("formula2"):
				iVar1 = 3115000;
				if (bVar0)
				{
					if (Global_262145.f_28646 /* Tunable: CH_TRADE_PRICE_FORMULA2 */ >= 0)
					{
						iVar1 = Global_262145.f_28646 /* Tunable: CH_TRADE_PRICE_FORMULA2 */;
					}
				}
				break;
			case joaat("imorgon"):
				iVar1 = 2165000;
				if (bVar0)
				{
					if (Global_262145.f_28649 /* Tunable: CH_SALE_PRICE_IMORGEN */ >= 0)
					{
						iVar1 = Global_262145.f_28649 /* Tunable: CH_SALE_PRICE_IMORGEN */;
					}
				}
				break;
			case joaat("rebla"):
				iVar1 = 1175000;
				if (bVar0)
				{
					if (Global_262145.f_28650 /* Tunable: CH_SALE_PRICE_REBLA */ >= 0)
					{
						iVar1 = Global_262145.f_28650 /* Tunable: CH_SALE_PRICE_REBLA */;
					}
				}
				break;
			case joaat("vstr"):
				iVar1 = 1285000;
				if (bVar0)
				{
					if (Global_262145.f_28651 /* Tunable: CH_SALE_PRICE_VSTR */ >= 0)
					{
						iVar1 = Global_262145.f_28651 /* Tunable: CH_SALE_PRICE_VSTR */;
					}
				}
				break;
			case joaat("tigon"):
				iVar1 = 2310000;
				if (bVar0)
				{
					if (Global_262145.f_29352 /* Tunable: SUM_SALE_PRICE_TIGON */ >= 0)
					{
						iVar1 = Global_262145.f_29352 /* Tunable: SUM_SALE_PRICE_TIGON */;
					}
				}
				break;
			case joaat("openwheel1"):
				iVar1 = 3400000;
				if (bVar0)
				{
					if (Global_262145.f_29356 /* Tunable: SUM_SALE_PRICE_OPENWHEEL1 */ >= 0)
					{
						iVar1 = Global_262145.f_29356 /* Tunable: SUM_SALE_PRICE_OPENWHEEL1 */;
					}
				}
				break;
			case joaat("openwheel2"):
				iVar1 = 2997000;
				if (bVar0)
				{
					if (Global_262145.f_29357 /* Tunable: SUM_SALE_PRICE_OPENWHEEL2 */ >= 0)
					{
						iVar1 = Global_262145.f_29357 /* Tunable: SUM_SALE_PRICE_OPENWHEEL2 */;
					}
				}
				break;
			case joaat("coquette4"):
				iVar1 = 1510000;
				if (bVar0)
				{
					if (Global_262145.f_29358 /* Tunable: SUM_SALE_PRICE_COQUETTE4 */ >= 0)
					{
						iVar1 = Global_262145.f_29358 /* Tunable: SUM_SALE_PRICE_COQUETTE4 */;
					}
				}
				break;
			case joaat("peyote3"):
				iVar1 = 620000;
				if (bVar0)
				{
					iVar1 = (Global_262145.f_29366 /* Tunable: SUM_SALE_PRICE_PEYOTE */ + __LIB_2__::func_115(iParam1));
				}
				break;
			case joaat("yosemite3"):
				iVar1 = 700000;
				if (bVar0)
				{
					iVar1 = (Global_262145.f_23943 /* Tunable: H2_VEHICLES_PRICE_YOSEMITE */ + __LIB_2__::func_115(iParam1));
				}
				break;
			case joaat("gauntlet5"):
				iVar1 = 815000;
				if (bVar0)
				{
					iVar1 = (Global_262145.f_26879 /* Tunable: VC_SALE_PRICE_GAUNTLET_CLASSIC */ + __LIB_2__::func_115(iParam1));
				}
				break;
			case joaat("landstalker2"):
				iVar1 = 1220000;
				if (bVar0)
				{
					if (Global_262145.f_29348 /* Tunable: SUM_SALE_PRICE_LANDSTALKER2 */ >= 0)
					{
						iVar1 = Global_262145.f_29348 /* Tunable: SUM_SALE_PRICE_LANDSTALKER2 */;
					}
				}
				break;
			case joaat("glendale2"):
				iVar1 = 520000;
				if (bVar0)
				{
					iVar1 = (Global_262145.f_8105 /* Tunable: DLC_HIPSTER_CAR_MOD_BENEFACTOR_GLENDA */ + __LIB_2__::func_115(iParam1));
				}
				break;
			case joaat("club"):
				iVar1 = 1280000;
				if (bVar0)
				{
					if (Global_262145.f_29350 /* Tunable: SUM_SALE_PRICE_CLUB */ >= 0)
					{
						iVar1 = Global_262145.f_29350 /* Tunable: SUM_SALE_PRICE_CLUB */;
					}
				}
				break;
			case joaat("dukes3"):
				iVar1 = 378000;
				if (bVar0)
				{
					if (Global_262145.f_29344 /* Tunable: SUM_SALE_PRICE_DUKES3 */ >= 0)
					{
						iVar1 = Global_262145.f_29344 /* Tunable: SUM_SALE_PRICE_DUKES3 */;
					}
				}
				break;
			case joaat("youga3"):
				iVar1 = 1288000;
				if (bVar0)
				{
					iVar1 = (Global_262145.f_19045 /* Tunable: WEBSITE_VAPID_YOUGA_CLASSIC */ + __LIB_2__::func_115(iParam1));
				}
				break;
			case joaat("manana2"):
				iVar1 = 925000;
				if (bVar0)
				{
					iVar1 = (Global_262145.f_29365 /* Tunable: SUM_SALE_PRICE_MANANA */ + __LIB_2__::func_115(iParam1));
				}
				break;
			case joaat("penumbra2"):
				iVar1 = 1380000;
				if (bVar0)
				{
					if (Global_262145.f_29351 /* Tunable: SUM_SALE_PRICE_PENUMBRA2 */ >= 0)
					{
						iVar1 = Global_262145.f_29351 /* Tunable: SUM_SALE_PRICE_PENUMBRA2 */;
					}
				}
				break;
			case joaat("seminole2"):
				iVar1 = 678000;
				if (bVar0)
				{
					if (Global_262145.f_29346 /* Tunable: SUM_SALE_PRICE_SEMINOLE2 */ >= 0)
					{
						iVar1 = Global_262145.f_29346 /* Tunable: SUM_SALE_PRICE_SEMINOLE2 */;
					}
				}
				break;
			case joaat("manchez2"):
				iVar1 = 225000;
				if (bVar0)
				{
					if (Global_262145.f_30790 /* Tunable: IH_BIN_PRICE_MANCHEZ2 */ >= 0)
					{
						iVar1 = Global_262145.f_30790 /* Tunable: IH_BIN_PRICE_MANCHEZ2 */;
					}
				}
				break;
			case joaat("verus"):
				iVar1 = 192000;
				if (bVar0)
				{
					if (Global_262145.f_30791 /* Tunable: IH_BIN_PRICE_VERUS */ >= 0)
					{
						iVar1 = Global_262145.f_30791 /* Tunable: IH_BIN_PRICE_VERUS */;
					}
				}
				break;
			case joaat("veto"):
				iVar1 = 895000;
				if (bVar0)
				{
					if (Global_262145.f_30796 /* Tunable: IH_BIN_PRICE_VETO */ >= 0)
					{
						iVar1 = Global_262145.f_30796 /* Tunable: IH_BIN_PRICE_VETO */;
					}
				}
				break;
			case joaat("veto2"):
				iVar1 = 995000;
				if (bVar0)
				{
					if (Global_262145.f_30797 /* Tunable: IH_BIN_PRICE_VETO2 */ >= 0)
					{
						iVar1 = Global_262145.f_30797 /* Tunable: IH_BIN_PRICE_VETO2 */;
					}
				}
				break;
			case joaat("slamtruck"):
				iVar1 = 1310000;
				if (bVar0)
				{
					if (Global_262145.f_30795 /* Tunable: IH_BIN_PRICE_SLAMTRUCK */ >= 0)
					{
						iVar1 = Global_262145.f_30795 /* Tunable: IH_BIN_PRICE_SLAMTRUCK */;
					}
				}
				break;
			case joaat("toreador"):
				iVar1 = 3660000;
				if (bVar0)
				{
					if (Global_262145.f_30781 /* Tunable: IH_BIN_PRICE_TOREADOR */ >= 0)
					{
						iVar1 = Global_262145.f_30781 /* Tunable: IH_BIN_PRICE_TOREADOR */;
					}
				}
				break;
			case joaat("dinghy5"):
				iVar1 = 1850000;
				if (bVar0)
				{
					if (Global_262145.f_30786 /* Tunable: IH_BIN_PRICE_DINGHY5 */ >= 0)
					{
						iVar1 = Global_262145.f_30786 /* Tunable: IH_BIN_PRICE_DINGHY5 */;
					}
				}
				break;
			case joaat("squaddie"):
				iVar1 = 1130000;
				if (bVar0)
				{
					if (Global_262145.f_30789 /* Tunable: IH_BIN_PRICE_SQUADDIE */ >= 0)
					{
						iVar1 = Global_262145.f_30789 /* Tunable: IH_BIN_PRICE_SQUADDIE */;
					}
				}
				break;
			case joaat("winky"):
				iVar1 = 1100000;
				if (bVar0 && Global_262145.f_30787 /* Tunable: IH_BIN_PRICE_WINKY */ >= 0)
				{
					iVar1 = Global_262145.f_30787 /* Tunable: IH_BIN_PRICE_WINKY */;
				}
				if (bParam2)
				{
					iVar2 = iVar1;
					iVar1 = 825000;
					if (bVar0 && Global_262145.f_30802 /* Tunable: IH_TRADE_PRICE_WINKY */ >= 0)
					{
						iVar1 = Global_262145.f_30802 /* Tunable: IH_TRADE_PRICE_WINKY */;
					}
				}
				break;
			case joaat("annihilator2"):
				iVar1 = 3870000;
				if (bVar0 && Global_262145.f_30782 /* Tunable: IH_BIN_PRICE_ANNIHILATOR2 */ >= 0)
				{
					iVar1 = Global_262145.f_30782 /* Tunable: IH_BIN_PRICE_ANNIHILATOR2 */;
				}
				if (bParam2)
				{
					iVar2 = iVar1;
					iVar1 = 2902500;
					if (bVar0 && Global_262145.f_30798 /* Tunable: IH_TRADE_PRICE_ANNIHILATOR2 */ >= 0)
					{
						iVar1 = Global_262145.f_30798 /* Tunable: IH_TRADE_PRICE_ANNIHILATOR2 */;
					}
				}
				break;
			case joaat("alkonost"):
				iVar1 = 4350000;
				if (bVar0 && Global_262145.f_30783 /* Tunable: IH_BIN_PRICE_ALKONOST */ >= 0)
				{
					iVar1 = Global_262145.f_30783 /* Tunable: IH_BIN_PRICE_ALKONOST */;
				}
				if (bParam2)
				{
					iVar2 = iVar1;
					iVar1 = 3262500;
					if (bVar0 && Global_262145.f_30799 /* Tunable: IH_TRADE_PRICE_ALKONOST */ >= 0)
					{
						iVar1 = Global_262145.f_30799 /* Tunable: IH_TRADE_PRICE_ALKONOST */;
					}
				}
				break;
			case joaat("brioso2"):
				iVar1 = 610000;
				if (bVar0 && Global_262145.f_30793 /* Tunable: IH_BIN_PRICE_BRIOSO2 */ >= 0)
				{
					iVar1 = Global_262145.f_30793 /* Tunable: IH_BIN_PRICE_BRIOSO2 */;
				}
				if (bParam2)
				{
					iVar2 = iVar1;
					iVar1 = 457500;
					if (bVar0 && Global_262145.f_30805 /* Tunable: IH_TRADE_PRICE_BRIOSO2 */ >= 0)
					{
						iVar1 = Global_262145.f_30805 /* Tunable: IH_TRADE_PRICE_BRIOSO2 */;
					}
				}
				break;
			case joaat("weevil"):
				iVar1 = 870000;
				if (bVar0 && Global_262145.f_30792 /* Tunable: IH_BIN_PRICE_WEEVIL */ >= 0)
				{
					iVar1 = Global_262145.f_30792 /* Tunable: IH_BIN_PRICE_WEEVIL */;
				}
				if (bParam2)
				{
					iVar2 = iVar1;
					iVar1 = 652500;
					if (bVar0 && Global_262145.f_30804 /* Tunable: IH_TRADE_PRICE_WEEVIL */ >= 0)
					{
						iVar1 = Global_262145.f_30804 /* Tunable: IH_TRADE_PRICE_WEEVIL */;
					}
				}
				break;
			case joaat("italirsx"):
				iVar1 = 3465000;
				if (bVar0 && Global_262145.f_30794 /* Tunable: IH_BIN_PRICE_ITALIRSX */ >= 0)
				{
					iVar1 = Global_262145.f_30794 /* Tunable: IH_BIN_PRICE_ITALIRSX */;
				}
				if (bParam2)
				{
					iVar2 = iVar1;
					iVar1 = 2598750;
					if (bVar0 && Global_262145.f_30806 /* Tunable: IH_TRADE_PRICE_ITALIRSX */ >= 0)
					{
						iVar1 = Global_262145.f_30806 /* Tunable: IH_TRADE_PRICE_ITALIRSX */;
					}
				}
				break;
			case joaat("longfin"):
				iVar1 = 2125000;
				if (bVar0 && Global_262145.f_30785 /* Tunable: IH_BIN_PRICE_LONGFIN */ >= 0)
				{
					iVar1 = Global_262145.f_30785 /* Tunable: IH_BIN_PRICE_LONGFIN */;
				}
				if (bParam2)
				{
					iVar2 = iVar1;
					iVar1 = 1593750;
					if (bVar0 && Global_262145.f_30801 /* Tunable: IH_TRADE_PRICE_LONGFIN */ >= 0)
					{
						iVar1 = Global_262145.f_30801 /* Tunable: IH_TRADE_PRICE_LONGFIN */;
					}
				}
				break;
			case joaat("vetir"):
				iVar1 = 1630000;
				if (bVar0 && Global_262145.f_30788 /* Tunable: IH_BIN_PRICE_VETIR */ >= 0)
				{
					iVar1 = Global_262145.f_30788 /* Tunable: IH_BIN_PRICE_VETIR */;
				}
				if (bParam2)
				{
					iVar2 = iVar1;
					iVar1 = 1222500;
					if (bVar0 && Global_262145.f_30803 /* Tunable: IH_TRADE_PRICE_VETIR */ >= 0)
					{
						iVar1 = Global_262145.f_30803 /* Tunable: IH_TRADE_PRICE_VETIR */;
					}
				}
				break;
			case joaat("patrolboat"):
				iVar1 = 2955000;
				if (bVar0 && Global_262145.f_30784 /* Tunable: IH_BIN_PRICE_PATROLBOAT */ >= 0)
				{
					iVar1 = Global_262145.f_30784 /* Tunable: IH_BIN_PRICE_PATROLBOAT */;
				}
				if (bParam2)
				{
					iVar2 = iVar1;
					iVar1 = 2216250;
					if (bVar0 && Global_262145.f_30800 /* Tunable: IH_TRADE_PRICE_PATROLBOAT */ >= 0)
					{
						iVar1 = Global_262145.f_30800 /* Tunable: IH_TRADE_PRICE_PATROLBOAT */;
					}
				}
				break;
			case joaat("kosatka"):
				if (!bParam2)
				{
					iVar1 = 2200000;
					if (bVar0)
					{
						if (Global_262145.f_30609 /* Tunable: IH_SUB_SALE_KOSATKA */ >= 0)
						{
							iVar1 = Global_262145.f_30609 /* Tunable: IH_SUB_SALE_KOSATKA */;
						}
					}
				}
				else
				{
					iVar1 = 2200000;
					if (bVar0)
					{
						if (Global_262145.f_30479 /* Tunable: IH_SUB_BASE_KOSATKA */ >= 0)
						{
							iVar1 = Global_262145.f_30479 /* Tunable: IH_SUB_BASE_KOSATKA */;
						}
					}
				}
				break;
			case joaat("calico"):
				iVar1 = 1995000;
				if (bVar0 && Global_262145.f_31201 /* Tunable: TUNER_BIN_PRICE_CALICO */ >= 0)
				{
					iVar1 = Global_262145.f_31201 /* Tunable: TUNER_BIN_PRICE_CALICO */;
				}
				if (bParam2)
				{
					iVar2 = iVar1;
					iVar1 = 1496250;
					if (bVar0 && Global_262145.f_31218 /* Tunable: TUNER_TRADE_PRICE_CALICO */ >= 0)
					{
						iVar1 = Global_262145.f_31218 /* Tunable: TUNER_TRADE_PRICE_CALICO */;
					}
				}
				break;
			case joaat("comet6"):
				iVar1 = 1878000;
				if (bVar0 && Global_262145.f_31203 /* Tunable: TUNER_BIN_PRICE_COMET6 */ >= 0)
				{
					iVar1 = Global_262145.f_31203 /* Tunable: TUNER_BIN_PRICE_COMET6 */;
				}
				if (bParam2)
				{
					iVar2 = iVar1;
					iVar1 = 1408500;
					if (bVar0 && Global_262145.f_31220 /* Tunable: TUNER_TRADE_PRICE_COMET6 */ >= 0)
					{
						iVar1 = Global_262145.f_31220 /* Tunable: TUNER_TRADE_PRICE_COMET6 */;
					}
				}
				break;
			case joaat("cypher"):
				iVar1 = 1550000;
				if (bVar0 && Global_262145.f_31214 /* Tunable: TUNER_BIN_PRICE_CYPHER */ >= 0)
				{
					iVar1 = Global_262145.f_31214 /* Tunable: TUNER_BIN_PRICE_CYPHER */;
				}
				if (bParam2)
				{
					iVar2 = iVar1;
					iVar1 = 1162500;
					if (bVar0 && Global_262145.f_31231 /* Tunable: TUNER_TRADE_PRICE_CYPHER */ >= 0)
					{
						iVar1 = Global_262145.f_31231 /* Tunable: TUNER_TRADE_PRICE_CYPHER */;
					}
				}
				break;
			case joaat("dominator7"):
				iVar1 = 1775000;
				if (bVar0 && Global_262145.f_31216 /* Tunable: TUNER_BIN_PRICE_DOMINATOR7 */ >= 0)
				{
					iVar1 = Global_262145.f_31216 /* Tunable: TUNER_BIN_PRICE_DOMINATOR7 */;
				}
				if (bParam2)
				{
					iVar2 = iVar1;
					iVar1 = 1331250;
					if (bVar0 && Global_262145.f_31233 /* Tunable: TUNER_TRADE_PRICE_DOMINATOR7 */ >= 0)
					{
						iVar1 = Global_262145.f_31233 /* Tunable: TUNER_TRADE_PRICE_DOMINATOR7 */;
					}
				}
				break;
			case joaat("jester4"):
				iVar1 = 1970000;
				if (bVar0 && Global_262145.f_31205 /* Tunable: TUNER_BIN_PRICE_JESTER4 */ >= 0)
				{
					iVar1 = Global_262145.f_31205 /* Tunable: TUNER_BIN_PRICE_JESTER4 */;
				}
				if (bParam2)
				{
					iVar2 = iVar1;
					iVar1 = 1477500;
					if (bVar0 && Global_262145.f_31222 /* Tunable: TUNER_TRADE_PRICE_JESTER4 */ >= 0)
					{
						iVar1 = Global_262145.f_31222 /* Tunable: TUNER_TRADE_PRICE_JESTER4 */;
					}
				}
				break;
			case joaat("remus"):
				iVar1 = 1370000;
				if (bVar0 && Global_262145.f_31202 /* Tunable: TUNER_BIN_PRICE_REMUS */ >= 0)
				{
					iVar1 = Global_262145.f_31202 /* Tunable: TUNER_BIN_PRICE_REMUS */;
				}
				if (bParam2)
				{
					iVar2 = iVar1;
					iVar1 = 1027500;
					if (bVar0 && Global_262145.f_31219 /* Tunable: TUNER_TRADE_PRICE_REMUS */ >= 0)
					{
						iVar1 = Global_262145.f_31219 /* Tunable: TUNER_TRADE_PRICE_REMUS */;
					}
				}
				break;
			case joaat("vectre"):
				iVar1 = 1785000;
				if (bVar0 && Global_262145.f_31207 /* Tunable: TUNER_BIN_PRICE_VECTRE */ >= 0)
				{
					iVar1 = Global_262145.f_31207 /* Tunable: TUNER_BIN_PRICE_VECTRE */;
				}
				if (bParam2)
				{
					iVar2 = iVar1;
					iVar1 = 1338750;
					if (bVar0 && Global_262145.f_31224 /* Tunable: TUNER_TRADE_PRICE_VECTRE */ >= 0)
					{
						iVar1 = Global_262145.f_31224 /* Tunable: TUNER_TRADE_PRICE_VECTRE */;
					}
				}
				break;
			case joaat("zr350"):
				iVar1 = 1615000;
				if (bVar0 && Global_262145.f_31200 /* Tunable: TUNER_BIN_PRICE_ZR350 */ >= 0)
				{
					iVar1 = Global_262145.f_31200 /* Tunable: TUNER_BIN_PRICE_ZR350 */;
				}
				if (bParam2)
				{
					iVar2 = iVar1;
					iVar1 = 1211250;
					if (bVar0 && Global_262145.f_31217 /* Tunable: TUNER_TRADE_PRICE_ZR350 */ >= 0)
					{
						iVar1 = Global_262145.f_31217 /* Tunable: TUNER_TRADE_PRICE_ZR350 */;
					}
				}
				break;
			case joaat("warrener2"):
				iVar1 = 1260000;
				if (bVar0 && Global_262145.f_31208 /* Tunable: TUNER_BIN_PRICE_WARRENER2 */ >= 0)
				{
					iVar1 = Global_262145.f_31208 /* Tunable: TUNER_BIN_PRICE_WARRENER2 */;
				}
				if (bParam2)
				{
					iVar2 = iVar1;
					iVar1 = 945000;
					if (bVar0 && Global_262145.f_31225 /* Tunable: TUNER_TRADE_PRICE_WARRENER2 */ >= 0)
					{
						iVar1 = Global_262145.f_31225 /* Tunable: TUNER_TRADE_PRICE_WARRENER2 */;
					}
				}
				break;
			case joaat("rt3000"):
				iVar1 = 1715000;
				if (bVar0 && Global_262145.f_31210 /* Tunable: TUNER_BIN_PRICE_RT3000 */ >= 0)
				{
					iVar1 = Global_262145.f_31210 /* Tunable: TUNER_BIN_PRICE_RT3000 */;
				}
				if (bParam2)
				{
					iVar2 = iVar1;
					iVar1 = 1286250;
					if (bVar0 && Global_262145.f_31227 /* Tunable: TUNER_TRADE_PRICE_RT3000 */ >= 0)
					{
						iVar1 = Global_262145.f_31227 /* Tunable: TUNER_TRADE_PRICE_RT3000 */;
					}
				}
				break;
			case joaat("futo2"):
				iVar1 = 1590000;
				if (bVar0 && Global_262145.f_31211 /* Tunable: TUNER_BIN_PRICE_FUTO2 */ >= 0)
				{
					iVar1 = Global_262145.f_31211 /* Tunable: TUNER_BIN_PRICE_FUTO2 */;
				}
				if (bParam2)
				{
					iVar2 = iVar1;
					iVar1 = 1192500;
					if (bVar0 && Global_262145.f_31228 /* Tunable: TUNER_TRADE_PRICE_FUTO2 */ >= 0)
					{
						iVar1 = Global_262145.f_31228 /* Tunable: TUNER_TRADE_PRICE_FUTO2 */;
					}
				}
				break;
			case joaat("tailgater2"):
				iVar1 = 1495000;
				if (bVar0 && Global_262145.f_31213 /* Tunable: TUNER_BIN_PRICE_TAILGATER2 */ >= 0)
				{
					iVar1 = Global_262145.f_31213 /* Tunable: TUNER_BIN_PRICE_TAILGATER2 */;
				}
				if (bParam2)
				{
					iVar2 = iVar1;
					iVar1 = 1121250;
					if (bVar0 && Global_262145.f_31230 /* Tunable: TUNER_TRADE_PRICE_TAILGATER2 */ >= 0)
					{
						iVar1 = Global_262145.f_31230 /* Tunable: TUNER_TRADE_PRICE_TAILGATER2 */;
					}
				}
				break;
			case joaat("sultan3"):
				iVar1 = 1789000;
				if (bVar0 && Global_262145.f_31209 /* Tunable: TUNER_BIN_PRICE_SULTAN3 */ >= 0)
				{
					iVar1 = Global_262145.f_31209 /* Tunable: TUNER_BIN_PRICE_SULTAN3 */;
				}
				if (bParam2)
				{
					iVar2 = iVar1;
					iVar1 = 1341750;
					if (bVar0 && Global_262145.f_31226 /* Tunable: TUNER_TRADE_PRICE_SULTAN3 */ >= 0)
					{
						iVar1 = Global_262145.f_31226 /* Tunable: TUNER_TRADE_PRICE_SULTAN3 */;
					}
				}
				break;
			case joaat("dominator8"):
				iVar1 = 1220000;
				if (bVar0 && Global_262145.f_31215 /* Tunable: TUNER_BIN_PRICE_DOMINATOR8 */ >= 0)
				{
					iVar1 = Global_262145.f_31215 /* Tunable: TUNER_BIN_PRICE_DOMINATOR8 */;
				}
				if (bParam2)
				{
					iVar2 = iVar1;
					iVar1 = 915000;
					if (bVar0 && Global_262145.f_31232 /* Tunable: TUNER_TRADE_PRICE_DOMINATOR8 */ >= 0)
					{
						iVar1 = Global_262145.f_31232 /* Tunable: TUNER_TRADE_PRICE_DOMINATOR8 */;
					}
				}
				break;
			case joaat("euros"):
				iVar1 = 1800000;
				if (bVar0 && Global_262145.f_31204 /* Tunable: TUNER_BIN_PRICE_EUROS */ >= 0)
				{
					iVar1 = Global_262145.f_31204 /* Tunable: TUNER_BIN_PRICE_EUROS */;
				}
				if (bParam2)
				{
					iVar2 = iVar1;
					iVar1 = 1350000;
					if (bVar0 && Global_262145.f_31221 /* Tunable: TUNER_TRADE_PRICE_EUROS */ >= 0)
					{
						iVar1 = Global_262145.f_31221 /* Tunable: TUNER_TRADE_PRICE_EUROS */;
					}
				}
				break;
			case joaat("growler"):
				iVar1 = 1627000;
				if (bVar0 && Global_262145.f_31212 /* Tunable: TUNER_BIN_PRICE_GROWLER */ >= 0)
				{
					iVar1 = Global_262145.f_31212 /* Tunable: TUNER_BIN_PRICE_GROWLER */;
				}
				if (bParam2)
				{
					iVar2 = iVar1;
					iVar1 = 1220250;
					if (bVar0 && Global_262145.f_31229 /* Tunable: TUNER_TRADE_PRICE_GROWLER */ >= 0)
					{
						iVar1 = Global_262145.f_31229 /* Tunable: TUNER_TRADE_PRICE_GROWLER */;
					}
				}
				break;
			case joaat("previon"):
				iVar1 = 1490000;
				if (bVar0 && Global_262145.f_31206 /* Tunable: TUNER_BIN_PRICE_PREVION */ >= 0)
				{
					iVar1 = Global_262145.f_31206 /* Tunable: TUNER_BIN_PRICE_PREVION */;
				}
				if (bParam2)
				{
					iVar2 = iVar1;
					iVar1 = 1117500;
					if (bVar0 && Global_262145.f_31223 /* Tunable: TUNER_TRADE_PRICE_PREVION */ >= 0)
					{
						iVar1 = Global_262145.f_31223 /* Tunable: TUNER_TRADE_PRICE_PREVION */;
					}
				}
				break;
			case joaat("astron"):
				iVar1 = 1580000;
				if (bVar0)
				{
					if (Global_262145.f_32491 /* Tunable: FIXER_BIN_PRICE_ASTRON */ >= 0)
					{
						iVar1 = Global_262145.f_32491 /* Tunable: FIXER_BIN_PRICE_ASTRON */;
					}
				}
				break;
			case joaat("baller7"):
				iVar1 = 890000;
				if (bVar0 && Global_262145.f_32496 /* Tunable: FIXER_BIN_PRICE_BALLER7 */ >= 0)
				{
					iVar1 = Global_262145.f_32496 /* Tunable: FIXER_BIN_PRICE_BALLER7 */;
				}
				if (bParam2)
				{
					iVar2 = iVar1;
					iVar1 = 667500;
					if (bVar0 && Global_262145.f_32507 /* Tunable: FIXER_TRADE_PRICE_BALLER7 */ >= 0)
					{
						iVar1 = Global_262145.f_32507 /* Tunable: FIXER_TRADE_PRICE_BALLER7 */;
					}
				}
				break;
			case joaat("buffalo4"):
				iVar1 = 2150000;
				if (bVar0 && Global_262145.f_32489 /* Tunable: FIXER_BIN_PRICE_BUFFALO4 */ >= 0)
				{
					iVar1 = Global_262145.f_32489 /* Tunable: FIXER_BIN_PRICE_BUFFALO4 */;
				}
				if (bParam2)
				{
					iVar2 = iVar1;
					iVar1 = 1612500;
					if (bVar0 && Global_262145.f_32504 /* Tunable: FIXER_TRADE_PRICE_BUFFALO4 */ >= 0)
					{
						iVar1 = Global_262145.f_32504 /* Tunable: FIXER_TRADE_PRICE_BUFFALO4 */;
					}
				}
				break;
			case joaat("comet7"):
				iVar1 = 1797000;
				if (bVar0)
				{
					if (Global_262145.f_32498 /* Tunable: FIXER_BIN_PRICE_COMET7 */ >= 0)
					{
						iVar1 = Global_262145.f_32498 /* Tunable: FIXER_BIN_PRICE_COMET7 */;
					}
				}
				break;
			case joaat("cinquemila"):
				iVar1 = 1740000;
				if (bVar0)
				{
					if (Global_262145.f_32497 /* Tunable: FIXER_BIN_PRICE_CINQUEMILA */ >= 0)
					{
						iVar1 = Global_262145.f_32497 /* Tunable: FIXER_BIN_PRICE_CINQUEMILA */;
					}
				}
				break;
			case joaat("deity"):
				iVar1 = 1845000;
				if (bVar0 && Global_262145.f_32490 /* Tunable: FIXER_BIN_PRICE_DEITY */ >= 0)
				{
					iVar1 = Global_262145.f_32490 /* Tunable: FIXER_BIN_PRICE_DEITY */;
				}
				if (bParam2)
				{
					iVar2 = iVar1;
					iVar1 = 1383750;
					if (bVar0 && Global_262145.f_32505 /* Tunable: FIXER_TRADE_PRICE_DEITY */ >= 0)
					{
						iVar1 = Global_262145.f_32505 /* Tunable: FIXER_TRADE_PRICE_DEITY */;
					}
				}
				break;
			case joaat("granger2"):
				iVar1 = 1380000;
				if (bVar0 && Global_262145.f_32493 /* Tunable: FIXER_BIN_PRICE_GRANGER2 */ >= 0)
				{
					iVar1 = Global_262145.f_32493 /* Tunable: FIXER_BIN_PRICE_GRANGER2 */;
				}
				if (bParam2)
				{
					iVar2 = iVar1;
					iVar1 = 1035000;
					if (bVar0 && Global_262145.f_32508 /* Tunable: FIXER_TRADE_PRICE_GRANGER2 */ >= 0)
					{
						iVar1 = Global_262145.f_32508 /* Tunable: FIXER_TRADE_PRICE_GRANGER2 */;
					}
				}
				break;
			case joaat("ignus"):
				iVar1 = 2765000;
				if (bVar0)
				{
					if (Global_262145.f_32492 /* Tunable: FIXER_BIN_PRICE_IGNUS */ >= 0)
					{
						iVar1 = Global_262145.f_32492 /* Tunable: FIXER_BIN_PRICE_IGNUS */;
					}
				}
				break;
			case joaat("jubilee"):
				iVar1 = 1650000;
				if (bVar0 && Global_262145.f_32495 /* Tunable: FIXER_BIN_PRICE_JUBILEE */ >= 0)
				{
					iVar1 = Global_262145.f_32495 /* Tunable: FIXER_BIN_PRICE_JUBILEE */;
				}
				if (bParam2)
				{
					iVar2 = iVar1;
					iVar1 = 1237500;
					if (bVar0 && Global_262145.f_32506 /* Tunable: FIXER_TRADE_PRICE_JUBILEE */ >= 0)
					{
						iVar1 = Global_262145.f_32506 /* Tunable: FIXER_TRADE_PRICE_JUBILEE */;
					}
				}
				break;
			case joaat("patriot3"):
				iVar1 = 1710000;
				if (bVar0 && Global_262145.f_32494 /* Tunable: FIXER_BIN_PRICE_PATRIOT3 */ >= 0)
				{
					iVar1 = Global_262145.f_32494 /* Tunable: FIXER_BIN_PRICE_PATRIOT3 */;
				}
				if (bParam2)
				{
					iVar2 = iVar1;
					iVar1 = 1282500;
					if (bVar0 && Global_262145.f_32509 /* Tunable: FIXER_TRADE_PRICE_PATRIOT3 */ >= 0)
					{
						iVar1 = Global_262145.f_32509 /* Tunable: FIXER_TRADE_PRICE_PATRIOT3 */;
					}
				}
				break;
			case joaat("champion"):
				iVar1 = 2995000;
				if (bVar0 && Global_262145.f_32488 /* Tunable: FIXER_BIN_PRICE_CHAMPION */ >= 0)
				{
					iVar1 = Global_262145.f_32488 /* Tunable: FIXER_BIN_PRICE_CHAMPION */;
				}
				if (bParam2)
				{
					iVar2 = iVar1;
					iVar1 = 2246250;
					if (bVar0 && Global_262145.f_32503 /* Tunable: FIXER_TRADE_PRICE_CHAMPION */ >= 0)
					{
						iVar1 = Global_262145.f_32503 /* Tunable: FIXER_TRADE_PRICE_CHAMPION */;
					}
				}
				break;
			case joaat("reever"):
				iVar1 = 1900000;
				if (bVar0)
				{
					if (Global_262145.f_32500 /* Tunable: FIXER_BIN_PRICE_REEVER */ >= 0)
					{
						iVar1 = Global_262145.f_32500 /* Tunable: FIXER_BIN_PRICE_REEVER */;
					}
				}
				break;
			case joaat("shinobi"):
				iVar1 = 2480500;
				if (bVar0)
				{
					if (Global_262145.f_32502 /* Tunable: FIXER_BIN_PRICE_SHINOBI */ >= 0)
					{
						iVar1 = Global_262145.f_32502 /* Tunable: FIXER_BIN_PRICE_SHINOBI */;
					}
				}
				break;
			case joaat("zeno"):
				iVar1 = 2820000;
				if (bVar0)
				{
					if (Global_262145.f_32499 /* Tunable: FIXER_BIN_PRICE_ZENO */ >= 0)
					{
						iVar1 = Global_262145.f_32499 /* Tunable: FIXER_BIN_PRICE_ZENO */;
					}
				}
				break;
			case joaat("corsita"):
				iVar1 = 1795000;
				if (bVar0 && Global_262145.f_33530 /* Tunable: SU22_BIN_PRICE_CORSITA */ >= 0)
				{
					iVar1 = Global_262145.f_33530 /* Tunable: SU22_BIN_PRICE_CORSITA */;
				}
				break;
			case joaat("draugur"):
				iVar1 = 1870000;
				if (bVar0 && Global_262145.f_33532 /* Tunable: SU22_BIN_PRICE_DRAUGUR */ >= 0)
				{
					iVar1 = Global_262145.f_33532 /* Tunable: SU22_BIN_PRICE_DRAUGUR */;
				}
				if (bParam2)
				{
					iVar2 = iVar1;
					iVar1 = 1402500;
					if (bVar0 && Global_262145.f_33537 /* Tunable: SU22_TRADE_PRICE_DRAUGUR */ >= 0)
					{
						iVar1 = Global_262145.f_33537 /* Tunable: SU22_TRADE_PRICE_DRAUGUR */;
					}
				}
				break;
			case joaat("greenwood"):
				iVar1 = 1465000;
				if (bVar0 && Global_262145.f_33523 /* Tunable: SU22_BIN_PRICE_GREENWOOD */ >= 0)
				{
					iVar1 = Global_262145.f_33523 /* Tunable: SU22_BIN_PRICE_GREENWOOD */;
				}
				if (bParam2)
				{
					iVar2 = iVar1;
					iVar1 = 1098750;
					if (bVar0 && Global_262145.f_33536 /* Tunable: SU22_TRADE_PRICE_GREENWOOD */ >= 0)
					{
						iVar1 = Global_262145.f_33536 /* Tunable: SU22_TRADE_PRICE_GREENWOOD */;
					}
				}
				break;
			case joaat("kanjosj"):
				iVar1 = 1370000;
				if (bVar0 && Global_262145.f_33534 /* Tunable: SU22_BIN_PRICE_KANJOSJ */ >= 0)
				{
					iVar1 = Global_262145.f_33534 /* Tunable: SU22_BIN_PRICE_KANJOSJ */;
				}
				if (bParam2)
				{
					iVar2 = iVar1;
					iVar1 = 1027500;
					if (bVar0 && Global_262145.f_33539 /* Tunable: SU22_TRADE_PRICE_KANJOSJ */ >= 0)
					{
						iVar1 = Global_262145.f_33539 /* Tunable: SU22_TRADE_PRICE_KANJOSJ */;
					}
				}
				break;
			case joaat("lm87"):
				iVar1 = 2915000;
				if (bVar0 && Global_262145.f_33531 /* Tunable: SU22_BIN_PRICE_LM87 */ >= 0)
				{
					iVar1 = Global_262145.f_33531 /* Tunable: SU22_BIN_PRICE_LM87 */;
				}
				break;
			case joaat("postlude"):
				iVar1 = 1310000;
				if (bVar0 && Global_262145.f_33535 /* Tunable: SU22_BIN_PRICE_POSTLUDE */ >= 0)
				{
					iVar1 = Global_262145.f_33535 /* Tunable: SU22_BIN_PRICE_POSTLUDE */;
				}
				if (bParam2)
				{
					iVar2 = iVar1;
					iVar1 = 982500;
					if (bVar0 && Global_262145.f_33540 /* Tunable: SU22_TRADE_PRICE_POSTLUDE */ >= 0)
					{
						iVar1 = Global_262145.f_33540 /* Tunable: SU22_TRADE_PRICE_POSTLUDE */;
					}
				}
				break;
			case joaat("rhinehart"):
				iVar1 = 1598000;
				if (bVar0 && Global_262145.f_33529 /* Tunable: SU22_BIN_PRICE_RHINEHART */ >= 0)
				{
					iVar1 = Global_262145.f_33529 /* Tunable: SU22_BIN_PRICE_RHINEHART */;
				}
				break;
			case joaat("sm722"):
				iVar1 = 2115000;
				if (bVar0 && Global_262145.f_33524 /* Tunable: SU22_BIN_PRICE_SM722 */ >= 0)
				{
					iVar1 = Global_262145.f_33524 /* Tunable: SU22_BIN_PRICE_SM722 */;
				}
				break;
			case joaat("tenf"):
				iVar1 = 1675000;
				if (bVar0 && Global_262145.f_33528 /* Tunable: SU22_BIN_PRICE_TENF */ >= 0)
				{
					iVar1 = Global_262145.f_33528 /* Tunable: SU22_BIN_PRICE_TENF */;
				}
				break;
			case joaat("torero2"):
				iVar1 = 2890000;
				if (bVar0 && Global_262145.f_33527 /* Tunable: SU22_BIN_PRICE_TORERO2 */ >= 0)
				{
					iVar1 = Global_262145.f_33527 /* Tunable: SU22_BIN_PRICE_TORERO2 */;
				}
				break;
			case joaat("vigero2"):
				iVar1 = 1947000;
				if (bVar0 && Global_262145.f_33526 /* Tunable: SU22_BIN_PRICE_VIGERO2 */ >= 0)
				{
					iVar1 = Global_262145.f_33526 /* Tunable: SU22_BIN_PRICE_VIGERO2 */;
				}
				break;
			case joaat("ruiner4"):
				iVar1 = 1320000;
				if (bVar0 && Global_262145.f_33525 /* Tunable: SU22_BIN_PRICE_RUINER4 */ >= 0)
				{
					iVar1 = Global_262145.f_33525 /* Tunable: SU22_BIN_PRICE_RUINER4 */;
				}
				break;
			case joaat("conada"):
				iVar1 = 2450000;
				if (bVar0 && Global_262145.f_33533 /* Tunable: SU22_BIN_PRICE_CONADA */ >= 0)
				{
					iVar1 = Global_262145.f_33533 /* Tunable: SU22_BIN_PRICE_CONADA */;
				}
				if (bParam2)
				{
					iVar2 = iVar1;
					iVar1 = 1837500;
					if (bVar0 && Global_262145.f_33538 /* Tunable: SU22_TRADE_PRICE_CONADA */ >= 0)
					{
						iVar1 = Global_262145.f_33538 /* Tunable: SU22_TRADE_PRICE_CONADA */;
					}
				}
				break;
			case joaat("omnisegt"):
				iVar1 = 1795000;
				if (bVar0 && Global_262145.f_33522 /* Tunable: SU22_BIN_PRICE_OMNISEGT */ >= 0)
				{
					iVar1 = Global_262145.f_33522 /* Tunable: SU22_BIN_PRICE_OMNISEGT */;
				}
				break;
			case joaat("weevil2"):
				iVar1 = (Global_262145.f_30804 /* Tunable: IH_TRADE_PRICE_WEEVIL */ + __LIB_2__::func_115(iParam1));
				break;
			case joaat("tenf2"):
				iVar1 = (Global_262145.f_33528 /* Tunable: SU22_BIN_PRICE_TENF */ + __LIB_2__::func_115(iParam1));
				break;
			case joaat("brioso3"):
				iVar1 = (Global_262145.f_30805 /* Tunable: IH_TRADE_PRICE_BRIOSO2 */ + __LIB_2__::func_115(iParam1));
				break;
			case joaat("sentinel4"):
				iVar1 = (Global_262145.f_28505 /* Tunable: 256069819 */ + __LIB_2__::func_115(iParam1));
				break;
		}
		if (iParam1 == joaat("iwagen"))
		{
			iVar1 = 1720000;
			if (bVar0)
			{
				if (Global_262145.f_32501 /* Tunable: FIXER_BIN_PRICE_IWAGEN */ >= 0)
				{
					iVar1 = Global_262145.f_32501 /* Tunable: FIXER_BIN_PRICE_IWAGEN */;
				}
			}
		}
	}
	switch (iParam1)
	{
		case joaat("paradise"):
			iVar1 = 50000;
			if (bVar0 || iParam3 == 1)
			{
				iVar1 = 25000;
				if (Global_262145.f_7626 /* Tunable: DLC_VEHICLE_BRAVADO_PARADISE */ >= 0 && bVar0)
				{
					iVar1 = Global_262145.f_7626 /* Tunable: DLC_VEHICLE_BRAVADO_PARADISE */;
				}
			}
			break;
		case joaat("bifta"):
			iVar1 = 75000;
			if (bVar0)
			{
				if (Global_262145.f_7624 /* Tunable: DLC_VEHICLE_BF_BIFTA */ >= 0)
				{
					iVar1 = Global_262145.f_7624 /* Tunable: DLC_VEHICLE_BF_BIFTA */;
				}
			}
			break;
		case joaat("kalahari"):
			iVar1 = 40000;
			if (bVar0 || iParam3 == 1)
			{
				iVar1 = 40000;
				if (Global_262145.f_7625 /* Tunable: DLC_VEHICLE_CANIS_KALAHARI */ >= 0 && bVar0)
				{
					iVar1 = Global_262145.f_7625 /* Tunable: DLC_VEHICLE_CANIS_KALAHARI */;
				}
			}
			break;
		case joaat("speeder"):
			iVar1 = 325000;
			if (bVar0)
			{
				if (Global_262145.f_7627 /* Tunable: DLC_VEHICLE_PEGASSI_SPEEDER */ >= 0)
				{
					iVar1 = Global_262145.f_7627 /* Tunable: DLC_VEHICLE_PEGASSI_SPEEDER */;
				}
			}
			break;
		case joaat("btype"):
			iVar1 = 1150000;
			if (bVar0 || iParam3 == 1)
			{
				iVar1 = 750000;
				if (Global_262145.f_7054 /* Tunable: VALENTINE_MODIFIER_CADDY_SEDAN */ >= 0 && bVar0)
				{
					iVar1 = Global_262145.f_7054 /* Tunable: VALENTINE_MODIFIER_CADDY_SEDAN */;
				}
			}
			break;
		case joaat("jester"):
			iVar1 = 240000;
			if (bVar0)
			{
				if (Global_262145.f_7026 /* Tunable: BUSINESS_VEHICLES_JESTER */ >= 0)
				{
					iVar1 = Global_262145.f_7026 /* Tunable: BUSINESS_VEHICLES_JESTER */;
				}
			}
			break;
		case joaat("turismor"):
			if (!bParam2)
			{
				iVar1 = 500000;
				if (bVar0)
				{
					if (Global_262145.f_7028 /* Tunable: BUSINESS_VEHICLES_TURISMOR */ >= 0)
					{
						iVar1 = Global_262145.f_7028 /* Tunable: BUSINESS_VEHICLES_TURISMOR */;
					}
				}
			}
			else
			{
				iVar1 = 0;
			}
			break;
		case joaat("alpha"):
			iVar1 = 150000;
			if (bVar0)
			{
				if (Global_262145.f_7024 /* Tunable: BUSINESS_VEHICLES_ALPHA */ >= 0)
				{
					iVar1 = Global_262145.f_7024 /* Tunable: BUSINESS_VEHICLES_ALPHA */;
				}
			}
			break;
		case joaat("vestra"):
			iVar1 = 950000;
			if (bVar0)
			{
				if (Global_262145.f_7079 /* Tunable: BUSINESS_VEHICLE_VESTRA */ >= 0)
				{
					iVar1 = Global_262145.f_7079 /* Tunable: BUSINESS_VEHICLE_VESTRA */;
				}
			}
			break;
		case joaat("massacro"):
			iVar1 = 275000;
			if (bVar0)
			{
				if (Global_262145.f_7027 /* Tunable: BUSINESS_VEHICLES_MASSACRO */ >= 0)
				{
					iVar1 = Global_262145.f_7027 /* Tunable: BUSINESS_VEHICLES_MASSACRO */;
				}
			}
			break;
		case joaat("zentorno"):
			iVar1 = 725000;
			if (bVar0)
			{
				if (Global_262145.f_7029 /* Tunable: BUSINESS_VEHICLES_ZENTORNO */ >= 0)
				{
					iVar1 = Global_262145.f_7029 /* Tunable: BUSINESS_VEHICLES_ZENTORNO */;
				}
			}
			break;
		case joaat("huntley"):
			if (!bParam2)
			{
				iVar1 = 195000;
				if (bVar0)
				{
					if (Global_262145.f_7025 /* Tunable: BUSINESS_VEHICLES_HUNTLEY */ >= 0)
					{
						iVar1 = Global_262145.f_7025 /* Tunable: BUSINESS_VEHICLES_HUNTLEY */;
					}
				}
			}
			else
			{
				iVar1 = 0;
			}
			break;
		case joaat("thrust"):
			iVar1 = 75000;
			if (bVar0)
			{
				if (Global_262145.f_7628 /* Tunable: DLC_VEHICLE_DINKA_THRUST */ >= 0)
				{
					iVar1 = Global_262145.f_7628 /* Tunable: DLC_VEHICLE_DINKA_THRUST */;
				}
			}
			break;
		case joaat("blade"):
			iVar1 = 160000;
			if (bVar0)
			{
				if (Global_262145.f_8104 /* Tunable: DLC_HIPSTER_CAR_MOD_VAPID_BLADE */ >= 0)
				{
					iVar1 = Global_262145.f_8104 /* Tunable: DLC_HIPSTER_CAR_MOD_VAPID_BLADE */;
				}
			}
			break;
		case joaat("warrener"):
			iVar1 = 125000;
			if (bVar0 || iParam3 == 1)
			{
				iVar1 = 120000;
				if (Global_262145.f_8107 /* Tunable: DLC_HIPSTER_CAR_MOD_VULCAR_WARRENER */ >= 0 && bVar0)
				{
					iVar1 = Global_262145.f_8107 /* Tunable: DLC_HIPSTER_CAR_MOD_VULCAR_WARRENER */;
				}
			}
			break;
		case joaat("glendale"):
			iVar1 = 200000;
			if (bVar0 && Global_262145.f_8105 /* Tunable: DLC_HIPSTER_CAR_MOD_BENEFACTOR_GLENDA */ >= 0)
			{
				iVar1 = Global_262145.f_8105 /* Tunable: DLC_HIPSTER_CAR_MOD_BENEFACTOR_GLENDA */;
			}
			if (bParam2)
			{
				iVar2 = iVar1;
				iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(200000) * 0.75f));
				if (bVar0 && Global_262145.f_25926 /* Tunable: AW_TRADE_PRICE_GLENDALE */ >= 0)
				{
					iVar1 = Global_262145.f_25926 /* Tunable: AW_TRADE_PRICE_GLENDALE */;
				}
			}
			break;
		case joaat("rhapsody"):
			iVar1 = 100000;
			if (bVar0 || iParam3 == 1)
			{
				iVar1 = 140000;
				if (Global_262145.f_8106 /* Tunable: DLC_HIPSTER_CAR_MOD_DECLASSE_RHAPSODY */ >= 0 && bVar0)
				{
					iVar1 = Global_262145.f_8106 /* Tunable: DLC_HIPSTER_CAR_MOD_DECLASSE_RHAPSODY */;
				}
			}
			break;
		case joaat("panto"):
			iVar1 = 85000;
			if (bVar0)
			{
				if (Global_262145.f_8108 /* Tunable: DLC_HIPSTER_CAR_MOD_BENEFACTOR_PANTO */ >= 0)
				{
					iVar1 = Global_262145.f_8108 /* Tunable: DLC_HIPSTER_CAR_MOD_BENEFACTOR_PANTO */;
				}
			}
			break;
		case joaat("dubsta3"):
			iVar1 = 249000;
			if (bVar0)
			{
				if (Global_262145.f_8109 /* Tunable: DLC_HIPSTER_CAR_MOD_DUBSTA3 */ >= 0)
				{
					iVar1 = Global_262145.f_8109 /* Tunable: DLC_HIPSTER_CAR_MOD_DUBSTA3 */;
				}
			}
			break;
		case joaat("pigalle"):
			iVar1 = 400000;
			if (bVar0)
			{
				if (Global_262145.f_8103 /* Tunable: DLC_HIPSTER_MODIFIER_VULCAR_PIGALLE */ >= 0)
				{
					iVar1 = Global_262145.f_8103 /* Tunable: DLC_HIPSTER_MODIFIER_VULCAR_PIGALLE */;
				}
			}
			break;
		case joaat("besra"):
			iVar1 = 658000;
			if (bVar0 || iParam3 == 1)
			{
				iVar1 = 1150000;
				if (Global_262145.f_8535 /* Tunable: PS_WESTERN_BESRA */ >= 0 && bVar0)
				{
					iVar1 = Global_262145.f_8535 /* Tunable: PS_WESTERN_BESRA */;
				}
			}
			break;
		case joaat("miljet"):
			iVar1 = 1750000;
			if (bVar0 || iParam3 == 1)
			{
				iVar1 = 1700000;
				if (Global_262145.f_8536 /* Tunable: PS_BUCKINGHAM_MILJET */ >= 0 && bVar0)
				{
					iVar1 = Global_262145.f_8536 /* Tunable: PS_BUCKINGHAM_MILJET */;
				}
			}
			break;
		case joaat("swift"):
			if (!bParam2)
			{
				iVar1 = 1500000;
				if (bVar0)
				{
					if (Global_262145.f_8537 /* Tunable: PS_SWIFT_LIVERY_1 */ >= 0)
					{
						iVar1 = Global_262145.f_8537 /* Tunable: PS_SWIFT_LIVERY_1 */;
					}
				}
			}
			else
			{
				iVar1 = 1600000;
				if (bVar0)
				{
					if (Global_262145.f_8538 /* Tunable: PS_SWIFT_LIVERY_2 */ >= 0)
					{
						iVar1 = Global_262145.f_8538 /* Tunable: PS_SWIFT_LIVERY_2 */;
					}
				}
			}
			break;
		case joaat("coquette2"):
			if (bParam2)
			{
				iVar1 = 350000;
				if (bVar0 || iParam3 == 1)
				{
					iVar1 = 665000;
					if (Global_262145.f_8533 /* Tunable: PS_INVERTO_COQUETTE_CLASSIC */ >= 0 && bVar0)
					{
						iVar1 = Global_262145.f_8533 /* Tunable: PS_INVERTO_COQUETTE_CLASSIC */;
					}
				}
			}
			else
			{
				iVar1 = 395000;
				if (bVar0 || iParam3 == 1)
				{
					iVar1 = 665000;
					if (Global_262145.f_8534 /* Tunable: PS_INVERTO_COQUETTE_CLASSIC_TOPLESS */ >= 0 && bVar0)
					{
						iVar1 = Global_262145.f_8534 /* Tunable: PS_INVERTO_COQUETTE_CLASSIC_TOPLESS */;
					}
				}
			}
			break;
		case joaat("sovereign"):
			iVar1 = 120000;
			if (bVar0)
			{
				if (Global_262145.f_8278 /* Tunable: VEHICLE_INDEPENDENCEDAY_SOVEREIGN */ >= 0)
				{
					iVar1 = Global_262145.f_8278 /* Tunable: VEHICLE_INDEPENDENCEDAY_SOVEREIGN */;
				}
			}
			break;
		case joaat("monster"):
			iVar1 = 742000;
			if (bVar0 || iParam3 == 1)
			{
				iVar1 = 742014;
				if (Global_262145.f_8277 /* Tunable: VEHICLE_INDEPENDENCEDAY_MONSTER */ >= 0 && bVar0)
				{
					iVar1 = Global_262145.f_8277 /* Tunable: VEHICLE_INDEPENDENCEDAY_MONSTER */;
				}
			}
			break;
		case joaat("innovation"):
			iVar1 = 92500;
			if (bVar0)
			{
				if (Global_262145.f_8851 /* Tunable: LTS_LCC_INNOVATION */ >= 0)
				{
					iVar1 = Global_262145.f_8851 /* Tunable: LTS_LCC_INNOVATION */;
				}
			}
			break;
		case joaat("hakuchou"):
			iVar1 = 82000;
			if (bVar0)
			{
				if (Global_262145.f_8852 /* Tunable: LTS_SHITZU_HAKUCHOU */ >= 0)
				{
					iVar1 = Global_262145.f_8852 /* Tunable: LTS_SHITZU_HAKUCHOU */;
				}
			}
			break;
		case joaat("furoregt"):
			iVar1 = 448000;
			if (bVar0)
			{
				if (Global_262145.f_8853 /* Tunable: LTS_LAMPADATI_FURORE_GT */ >= 0)
				{
					iVar1 = Global_262145.f_8853 /* Tunable: LTS_LAMPADATI_FURORE_GT */;
				}
			}
			break;
		case joaat("boxville4"):
			if (!bParam2)
			{
				iVar1 = 45000;
				if (bVar0)
				{
					if (Global_262145.f_9084 /* Tunable: VEHICLES_HEIST_BRUTE_BOXVILLE */ >= 0)
					{
						iVar1 = Global_262145.f_9084 /* Tunable: VEHICLES_HEIST_BRUTE_BOXVILLE */;
					}
				}
			}
			else
			{
				iVar1 = 59850;
				if (bVar0)
				{
					if (Global_262145.f_20228 /* Tunable: VEHICLES_HEIST_BRUTE_BOXVILLE_BIN_PRICE */ >= 0)
					{
						iVar1 = Global_262145.f_20228 /* Tunable: VEHICLES_HEIST_BRUTE_BOXVILLE_BIN_PRICE */;
					}
				}
			}
			break;
		case joaat("casco"):
			if (!bParam2)
			{
				iVar1 = 680000;
				if (bVar0)
				{
					if (Global_262145.f_9085 /* Tunable: VEHICLES_HEIST_LAMPADATI_CASCO */ >= 0)
					{
						iVar1 = Global_262145.f_9085 /* Tunable: VEHICLES_HEIST_LAMPADATI_CASCO */;
					}
				}
			}
			else
			{
				iVar1 = 904400;
				if (bVar0)
				{
					if (Global_262145.f_20229 /* Tunable: VEHICLES_HEIST_LAMPADATI_CASCO_BIN_PRICE */ >= 0)
					{
						iVar1 = Global_262145.f_20229 /* Tunable: VEHICLES_HEIST_LAMPADATI_CASCO_BIN_PRICE */;
					}
				}
			}
			break;
		case joaat("dinghy3"):
			if (!bParam2)
			{
				iVar1 = 125000;
				if (bVar0)
				{
					if (Global_262145.f_9086 /* Tunable: VEHICLES_HEIST_NAGASAKI_DINGHY */ >= 0)
					{
						iVar1 = Global_262145.f_9086 /* Tunable: VEHICLES_HEIST_NAGASAKI_DINGHY */;
					}
				}
			}
			else
			{
				iVar1 = 166250;
				if (bVar0)
				{
					if (Global_262145.f_20230 /* Tunable: VEHICLES_HEIST_NAGASAKI_DINGHY_BIN_PRICE */ >= 0)
					{
						iVar1 = Global_262145.f_20230 /* Tunable: VEHICLES_HEIST_NAGASAKI_DINGHY_BIN_PRICE */;
					}
				}
			}
			break;
		case joaat("enduro"):
			iVar1 = 48000;
			if (bVar0)
			{
				if (Global_262145.f_9087 /* Tunable: VEHICLES_HEIST_DINKA_ENDURO */ >= 0)
				{
					iVar1 = Global_262145.f_9087 /* Tunable: VEHICLES_HEIST_DINKA_ENDURO */;
				}
			}
			break;
		case joaat("gburrito2"):
			if (!bParam2)
			{
				iVar1 = 65000;
				if (bVar0)
				{
					if (Global_262145.f_9088 /* Tunable: VEHICLES_HEIST_DECLASSE_GANG_BURRITO */ >= 0)
					{
						iVar1 = Global_262145.f_9088 /* Tunable: VEHICLES_HEIST_DECLASSE_GANG_BURRITO */;
					}
				}
			}
			else
			{
				iVar1 = 86450;
				if (bVar0)
				{
					if (Global_262145.f_20231 /* Tunable: VEHICLES_HEIST_DECLASSE_GANG_BURRITO_BIN_PRICE */ >= 0)
					{
						iVar1 = Global_262145.f_20231 /* Tunable: VEHICLES_HEIST_DECLASSE_GANG_BURRITO_BIN_PRICE */;
					}
				}
			}
			break;
		case joaat("guardian"):
			iVar1 = 375000;
			if (bVar0)
			{
				if (Global_262145.f_9089 /* Tunable: VEHICLES_HEIST_VAPID_GUADIAN */ >= 0)
				{
					iVar1 = Global_262145.f_9089 /* Tunable: VEHICLES_HEIST_VAPID_GUADIAN */;
				}
			}
			break;
		case joaat("hydra"):
			if (!bParam2)
			{
				iVar1 = 3000000;
				if (bVar0)
				{
					if (Global_262145.f_9090 /* Tunable: VEHICLES_HEIST_MAMMOTH_HYDRA */ >= 0)
					{
						iVar1 = Global_262145.f_9090 /* Tunable: VEHICLES_HEIST_MAMMOTH_HYDRA */;
					}
				}
			}
			else
			{
				iVar1 = 3990000;
				if (bVar0)
				{
					if (Global_262145.f_20232 /* Tunable: VEHICLES_HEIST_MAMMOTH_HYDRA_BIN_PRICE */ >= 0)
					{
						iVar1 = Global_262145.f_20232 /* Tunable: VEHICLES_HEIST_MAMMOTH_HYDRA_BIN_PRICE */;
					}
				}
			}
			break;
		case joaat("insurgent"):
			if (!bParam2)
			{
				iVar1 = 1350000;
				if (bVar0)
				{
					if (Global_262145.f_9091 /* Tunable: VEHICLES_HEIST_HVY_INSURGENT_PICKUP */ >= 0)
					{
						iVar1 = Global_262145.f_9091 /* Tunable: VEHICLES_HEIST_HVY_INSURGENT_PICKUP */;
					}
				}
			}
			else
			{
				iVar1 = 1795500;
				if (bVar0)
				{
					if (Global_262145.f_20233 /* Tunable: VEHICLES_HEIST_HVY_INSURGENT_PICKUP_BIN_PRICE */ >= 0)
					{
						iVar1 = Global_262145.f_20233 /* Tunable: VEHICLES_HEIST_HVY_INSURGENT_PICKUP_BIN_PRICE */;
					}
				}
			}
			break;
		case joaat("insurgent2"):
			if (!bParam2)
			{
				iVar1 = 675000;
				if (bVar0)
				{
					if (Global_262145.f_9092 /* Tunable: VEHICLES_HEIST_HVY_INSURGENT */ >= 0)
					{
						iVar1 = Global_262145.f_9092 /* Tunable: VEHICLES_HEIST_HVY_INSURGENT */;
					}
				}
			}
			else
			{
				iVar1 = 897750;
				if (bVar0)
				{
					if (Global_262145.f_20234 /* Tunable: VEHICLES_HEIST_HVY_INSURGENT_BIN_PRICE */ >= 0)
					{
						iVar1 = Global_262145.f_20234 /* Tunable: VEHICLES_HEIST_HVY_INSURGENT_BIN_PRICE */;
					}
				}
			}
			break;
		case joaat("kuruma"):
			if (!bParam2)
			{
				iVar1 = 95000;
				if (bVar0)
				{
					if (Global_262145.f_9093 /* Tunable: VEHICLES_HEIST_KARIN_KURUMA */ >= 0)
					{
						iVar1 = Global_262145.f_9093 /* Tunable: VEHICLES_HEIST_KARIN_KURUMA */;
					}
				}
			}
			else
			{
				iVar1 = 126350;
				if (bVar0)
				{
					if (Global_262145.f_20235 /* Tunable: VEHICLES_HEIST_KARIN_KURUMA_BIN_PRICE */ >= 0)
					{
						iVar1 = Global_262145.f_20235 /* Tunable: VEHICLES_HEIST_KARIN_KURUMA_BIN_PRICE */;
					}
				}
			}
			break;
		case joaat("kuruma2"):
			if (!bParam2)
			{
				iVar1 = 525000;
				if (bVar0)
				{
					if (Global_262145.f_9094 /* Tunable: VEHICLES_HEIST_KARIN_KURUMA_ARMORED */ >= 0)
					{
						iVar1 = Global_262145.f_9094 /* Tunable: VEHICLES_HEIST_KARIN_KURUMA_ARMORED */;
					}
				}
			}
			else
			{
				iVar1 = 698250;
				if (bVar0)
				{
					if (Global_262145.f_20236 /* Tunable: VEHICLES_HEIST_KARIN_KURUMA_ARMORED_BIN_PRICE */ >= 0)
					{
						iVar1 = Global_262145.f_20236 /* Tunable: VEHICLES_HEIST_KARIN_KURUMA_ARMORED_BIN_PRICE */;
					}
				}
			}
			break;
		case joaat("lectro"):
			if (!bParam2)
			{
				iVar1 = 750000;
				if (bVar0)
				{
					if (Global_262145.f_9095 /* Tunable: VEHICLES_HEIST_PRINCIPE_LECTRO */ >= 0)
					{
						iVar1 = Global_262145.f_9095 /* Tunable: VEHICLES_HEIST_PRINCIPE_LECTRO */;
					}
				}
			}
			else
			{
				iVar1 = 997500;
				if (bVar0)
				{
					if (Global_262145.f_20237 /* Tunable: VEHICLES_HEIST_PRINCIPE_LECTRO_BIN_PRICE */ >= 0)
					{
						iVar1 = Global_262145.f_20237 /* Tunable: VEHICLES_HEIST_PRINCIPE_LECTRO_BIN_PRICE */;
					}
				}
			}
			break;
		case joaat("pbus"):
			if (!bParam2)
			{
				iVar1 = 550000;
				if (bVar0)
				{
					if (Global_262145.f_9101 /* Tunable: VEHICLES_HEIST_PBUS */ >= 0)
					{
						iVar1 = Global_262145.f_9101 /* Tunable: VEHICLES_HEIST_PBUS */;
					}
				}
			}
			else
			{
				iVar1 = 731500;
				if (bVar0)
				{
					if (Global_262145.f_20243 /* Tunable: VEHICLES_HEIST_PBUS_BIN_PRICE */ >= 0)
					{
						iVar1 = Global_262145.f_20243 /* Tunable: VEHICLES_HEIST_PBUS_BIN_PRICE */;
					}
				}
			}
			break;
		case joaat("mule3"):
			if (!bParam2)
			{
				iVar1 = 32500;
				if (bVar0)
				{
					if (Global_262145.f_9096 /* Tunable: VEHICLES_HEIST_MAIBATSU_MULE */ >= 0)
					{
						iVar1 = Global_262145.f_9096 /* Tunable: VEHICLES_HEIST_MAIBATSU_MULE */;
					}
				}
			}
			else
			{
				iVar1 = 43225;
				if (bVar0)
				{
					if (Global_262145.f_20238 /* Tunable: VEHICLES_HEIST_MAIBATSU_MULE_BIN_PRICE */ >= 0)
					{
						iVar1 = Global_262145.f_20238 /* Tunable: VEHICLES_HEIST_MAIBATSU_MULE_BIN_PRICE */;
					}
				}
			}
			break;
		case joaat("savage"):
			if (!bParam2)
			{
				iVar1 = 1950000;
				if (bVar0)
				{
					if (Global_262145.f_9097 /* Tunable: VEHICLES_HEIST_SAVAGE */ >= 0)
					{
						iVar1 = Global_262145.f_9097 /* Tunable: VEHICLES_HEIST_SAVAGE */;
					}
				}
			}
			else
			{
				iVar1 = 2593500;
				if (bVar0)
				{
					if (Global_262145.f_20239 /* Tunable: VEHICLES_HEIST_SAVAGE_BIN_PRICE */ >= 0)
					{
						iVar1 = Global_262145.f_20239 /* Tunable: VEHICLES_HEIST_SAVAGE_BIN_PRICE */;
					}
				}
			}
			break;
		case joaat("valkyrie"):
			if (!bParam2)
			{
				iVar1 = 2850000;
				if (bVar0)
				{
					if (Global_262145.f_9099 /* Tunable: VEHICLES_HEIST_BUCKINGHAM_VALKYRIE */ >= 0)
					{
						iVar1 = Global_262145.f_9099 /* Tunable: VEHICLES_HEIST_BUCKINGHAM_VALKYRIE */;
					}
				}
			}
			else
			{
				iVar1 = 3790500;
				if (bVar0)
				{
					if (Global_262145.f_20241 /* Tunable: VEHICLES_HEIST_BUCKINGHAM_VALKYRIE_BIN_PRICE */ >= 0)
					{
						iVar1 = Global_262145.f_20241 /* Tunable: VEHICLES_HEIST_BUCKINGHAM_VALKYRIE_BIN_PRICE */;
					}
				}
			}
			break;
		case joaat("technical"):
			if (!bParam2)
			{
				iVar1 = 950000;
				if (bVar0)
				{
					if (Global_262145.f_9098 /* Tunable: VEHICLES_HEIST_KARIN_TECHNICAL */ >= 0)
					{
						iVar1 = Global_262145.f_9098 /* Tunable: VEHICLES_HEIST_KARIN_TECHNICAL */;
					}
				}
			}
			else
			{
				iVar1 = 1263500;
				if (bVar0)
				{
					if (Global_262145.f_20240 /* Tunable: VEHICLES_HEIST_KARIN_TECHNICAL_BIN_PRICE */ >= 0)
					{
						iVar1 = Global_262145.f_20240 /* Tunable: VEHICLES_HEIST_KARIN_TECHNICAL_BIN_PRICE */;
					}
				}
			}
			break;
		case joaat("velum2"):
			if (!bParam2)
			{
				iVar1 = 995000;
				if (bVar0)
				{
					if (Global_262145.f_9100 /* Tunable: VEHICLES_HEIST_VELUM */ >= 0)
					{
						iVar1 = Global_262145.f_9100 /* Tunable: VEHICLES_HEIST_VELUM */;
					}
				}
			}
			else
			{
				iVar1 = 1323350;
				if (bVar0)
				{
					if (Global_262145.f_20242 /* Tunable: VEHICLES_HEIST_VELUM_BIN_PRICE */ >= 0)
					{
						iVar1 = Global_262145.f_20242 /* Tunable: VEHICLES_HEIST_VELUM_BIN_PRICE */;
					}
				}
			}
			break;
		case joaat("dodo"):
			iVar1 = 500000;
			if (bVar0)
			{
				if (!bParam2)
				{
					if (Global_262145.f_9188 /* Tunable: CGTONG_DODO */ >= 0)
					{
						iVar1 = Global_262145.f_9188 /* Tunable: CGTONG_DODO */;
					}
				}
				else
				{
					iVar1 = Global_262145.f_20246 /* Tunable: RETURNING_PRICE_DODO */;
				}
			}
			break;
		case joaat("marshall"):
			iVar1 = 250000;
			if (bVar0 || iParam3 == 1)
			{
				if (!bParam2)
				{
					iVar1 = 500000;
					if (Global_262145.f_9190 /* Tunable: CGTONG_CHEVAL_MARSHALL */ >= 0 && bVar0)
					{
						iVar1 = Global_262145.f_9190 /* Tunable: CGTONG_CHEVAL_MARSHALL */;
					}
				}
				else
				{
					iVar1 = Global_262145.f_20245 /* Tunable: RETURNING_PRICE_MARSHALL */;
				}
			}
			break;
		case joaat("submersible2"):
			iVar1 = 1325000;
			if (bVar0)
			{
				if (!bParam2)
				{
					if (Global_262145.f_9192 /* Tunable: CGTONG_SUBMERSIBLE */ >= 0)
					{
						iVar1 = Global_262145.f_9192 /* Tunable: CGTONG_SUBMERSIBLE */;
					}
				}
				else
				{
					iVar1 = Global_262145.f_20247 /* Tunable: RETURNING_PRICE_KRAKEN */;
				}
			}
			break;
		case joaat("blista2"):
			iVar1 = 42000;
			if (bVar0)
			{
				if (!bParam2)
				{
					if (Global_262145.f_9187 /* Tunable: CGTONG_DINKA_BLISTA_COMPACT */ >= 0)
					{
						iVar1 = Global_262145.f_9187 /* Tunable: CGTONG_DINKA_BLISTA_COMPACT */;
					}
				}
				else
				{
					iVar1 = Global_262145.f_20250 /* Tunable: RETURNING_PRICE_BLISTA */;
				}
			}
			break;
		case joaat("stalion"):
			iVar1 = 71000;
			if (bVar0)
			{
				if (!bParam2)
				{
					if (Global_262145.f_9191 /* Tunable: CGTONG_DECLASSE_STALLION */ >= 0)
					{
						iVar1 = Global_262145.f_9191 /* Tunable: CGTONG_DECLASSE_STALLION */;
					}
				}
				else
				{
					iVar1 = Global_262145.f_20249 /* Tunable: RETURNING_PRICE_STALLION */;
				}
			}
			break;
		case joaat("dukes"):
			iVar1 = 62000;
			if (bVar0)
			{
				if (!bParam2)
				{
					iVar1 = 62000;
					if (Global_262145.f_9189 /* Tunable: CGTONG_IMPONTE_DUKES */ >= 0)
					{
						iVar1 = Global_262145.f_9189 /* Tunable: CGTONG_IMPONTE_DUKES */;
					}
				}
				else
				{
					iVar1 = Global_262145.f_20248 /* Tunable: RETURNING_PRICE_DUKES */;
				}
			}
			break;
		case joaat("dukes2"):
			iVar1 = 279000;
			if (bVar0 || iParam3 == 1)
			{
				if (!bParam2)
				{
					iVar1 = 665000;
					if (Global_262145.f_20244 /* Tunable: CGTONG_IMPONTE_DUKE_O_DEATH */ >= 0 && bVar0)
					{
						iVar1 = Global_262145.f_20244 /* Tunable: CGTONG_IMPONTE_DUKE_O_DEATH */;
					}
				}
				else
				{
					iVar1 = Global_262145.f_20251 /* Tunable: RETURNING_PRICE_DUKEODEATH */;
				}
			}
			break;
		case joaat("stalion2"):
			iVar1 = 277000;
			if (bVar0)
			{
				if (Global_262145.f_17418 /* Tunable: STUNT_DECLASSE_BURGER_SHOT_STALLION */ >= 0)
				{
					iVar1 = Global_262145.f_17418 /* Tunable: STUNT_DECLASSE_BURGER_SHOT_STALLION */;
				}
			}
			break;
		case joaat("dominator2"):
			iVar1 = 315000;
			if (bVar0 && Global_262145.f_17416 /* Tunable: STUNT_VAPID_PISSWASSER_DOMINATOR */ >= 0)
			{
				iVar1 = Global_262145.f_17416 /* Tunable: STUNT_VAPID_PISSWASSER_DOMINATOR */;
			}
			if (bParam2)
			{
				iVar2 = iVar1;
				iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(315000) * 0.75f));
			}
			break;
		case joaat("gauntlet2"):
			iVar1 = 230000;
			if (bVar0)
			{
				if (Global_262145.f_17417 /* Tunable: STUNT_BRAVADO_REDWOOD_GAUNTLET */ >= 0)
				{
					iVar1 = Global_262145.f_17417 /* Tunable: STUNT_BRAVADO_REDWOOD_GAUNTLET */;
				}
			}
			break;
		case joaat("buffalo3"):
			iVar1 = 535000;
			if (bVar0)
			{
				if (Global_262145.f_17415 /* Tunable: STUNT_BRAVADO_SPRUNK_BUFFALO */ >= 0)
				{
					iVar1 = Global_262145.f_17415 /* Tunable: STUNT_BRAVADO_SPRUNK_BUFFALO */;
				}
			}
			break;
		case joaat("slamvan"):
			iVar1 = 49500;
			if (bVar0 && Global_262145.f_9405 /* Tunable: VEHICLE_XMAS14_SLAMVAN */ >= 0)
			{
				iVar1 = Global_262145.f_9405 /* Tunable: VEHICLE_XMAS14_SLAMVAN */;
			}
			if (bParam2)
			{
				iVar2 = iVar1;
				iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(49500) * 0.75f));
				if (bVar0 && Global_262145.f_25927 /* Tunable: AW_TRADE_PRICE_SLAMVAN */ >= 0)
				{
					iVar1 = Global_262145.f_25927 /* Tunable: AW_TRADE_PRICE_SLAMVAN */;
				}
			}
			break;
		case joaat("ratloader2"):
			iVar1 = 37500;
			if (bVar0 && Global_262145.f_9404 /* Tunable: VEHICLE_XMAS14_RAT_TRUCK */ >= 0)
			{
				iVar1 = Global_262145.f_9404 /* Tunable: VEHICLE_XMAS14_RAT_TRUCK */;
			}
			if (bParam2)
			{
				iVar2 = iVar1;
				iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(37500) * 0.75f));
				if (bVar0 && Global_262145.f_25925 /* Tunable: AW_TRADE_PRICE_RATLOADER */ >= 0)
				{
					iVar1 = Global_262145.f_25925 /* Tunable: AW_TRADE_PRICE_RATLOADER */;
				}
			}
			break;
		case joaat("jester2"):
			iVar1 = 350000;
			if (bVar0)
			{
				if (Global_262145.f_9402 /* Tunable: VEHICLE_XMAS14_DINKA_JESTER_RACECAR */ >= 0)
				{
					iVar1 = Global_262145.f_9402 /* Tunable: VEHICLE_XMAS14_DINKA_JESTER_RACECAR */;
				}
			}
			break;
		case joaat("massacro2"):
			iVar1 = 385000;
			if (bVar0)
			{
				if (Global_262145.f_9403 /* Tunable: VEHICLE_XMAS14_DEWBAUCHEE_MASSACRO_RACECAR */ >= 0)
				{
					iVar1 = Global_262145.f_9403 /* Tunable: VEHICLE_XMAS14_DEWBAUCHEE_MASSACRO_RACECAR */;
				}
			}
			break;
		case joaat("feltzer3"):
			iVar1 = 975000;
			if (bVar0)
			{
				if (Global_262145.f_11060 /* Tunable: LUXE1_WEBSITE_BENEFACTOR_STIRLING_GT */ >= 0)
				{
					iVar1 = Global_262145.f_11060 /* Tunable: LUXE1_WEBSITE_BENEFACTOR_STIRLING_GT */;
				}
			}
			break;
		case joaat("luxor2"):
			iVar1 = 10000000;
			if (bVar0)
			{
				if (Global_262145.f_11061 /* Tunable: LUXE1_WEBSITE_BUCKINGHAM_LUXOR_DELUXE */ >= 0)
				{
					iVar1 = Global_262145.f_11061 /* Tunable: LUXE1_WEBSITE_BUCKINGHAM_LUXOR_DELUXE */;
				}
			}
			break;
		case joaat("osiris"):
			iVar1 = 1950000;
			if (bVar0)
			{
				if (Global_262145.f_11062 /* Tunable: LUXE1_WEBSITE_PEGASSI_OSIRIS */ >= 0)
				{
					iVar1 = Global_262145.f_11062 /* Tunable: LUXE1_WEBSITE_PEGASSI_OSIRIS */;
				}
			}
			break;
		case joaat("swift2"):
			iVar1 = 5150000;
			if (bVar0)
			{
				if (Global_262145.f_11063 /* Tunable: LUXE1_WEBSITE_BUCKINGHAM_SWIFT_DELUXE */ >= 0)
				{
					iVar1 = Global_262145.f_11063 /* Tunable: LUXE1_WEBSITE_BUCKINGHAM_SWIFT_DELUXE */;
				}
			}
			break;
		case joaat("virgo"):
			iVar1 = 195000;
			if (bVar0)
			{
				if (Global_262145.f_11064 /* Tunable: LUXE1_WEBSITE_ALBANY_VIRGO */ >= 0)
				{
					iVar1 = Global_262145.f_11064 /* Tunable: LUXE1_WEBSITE_ALBANY_VIRGO */;
				}
			}
			break;
		case joaat("windsor"):
			if (!bParam2)
			{
				iVar1 = 845000;
				if (bVar0)
				{
					if (Global_262145.f_11065 /* Tunable: LUXE1_WEBSITE_ENUS_WINDSOR */ >= 0)
					{
						iVar1 = Global_262145.f_11065 /* Tunable: LUXE1_WEBSITE_ENUS_WINDSOR */;
					}
				}
			}
			else
			{
				iVar1 = 0;
			}
			break;
		case joaat("brawler"):
			iVar1 = 715000;
			if (bVar0)
			{
				if (Global_262145.f_11357 /* Tunable: LUXE2_COIL_BRAWLER */ >= 0)
				{
					iVar1 = Global_262145.f_11357 /* Tunable: LUXE2_COIL_BRAWLER */;
				}
			}
			break;
		case joaat("chino"):
			iVar1 = 225000;
			if (bVar0)
			{
				if (Global_262145.f_11358 /* Tunable: LUXE2_VAPID_CHINO */ >= 0)
				{
					iVar1 = Global_262145.f_11358 /* Tunable: LUXE2_VAPID_CHINO */;
				}
			}
			break;
		case joaat("coquette3"):
			iVar1 = 695000;
			if (bVar0)
			{
				if (Global_262145.f_11359 /* Tunable: LUXE2_INVETERO_COQUETTE_BLACKFIN */ >= 0)
				{
					iVar1 = Global_262145.f_11359 /* Tunable: LUXE2_INVETERO_COQUETTE_BLACKFIN */;
				}
			}
			break;
		case joaat("t20"):
			iVar1 = 2200000;
			if (bVar0)
			{
				if (Global_262145.f_11360 /* Tunable: LUXE2_PROGEN_T20 */ >= 0)
				{
					iVar1 = Global_262145.f_11360 /* Tunable: LUXE2_PROGEN_T20 */;
				}
			}
			break;
		case joaat("toro"):
			iVar1 = 1750000;
			if (bVar0)
			{
				if (Global_262145.f_11361 /* Tunable: LUXE2_LAMPADATI_TORO */ >= 0)
				{
					iVar1 = Global_262145.f_11361 /* Tunable: LUXE2_LAMPADATI_TORO */;
				}
			}
			break;
		case joaat("vindicator"):
			iVar1 = 630000;
			if (bVar0)
			{
				if (Global_262145.f_11362 /* Tunable: LUXE2_DINKA_VINDICATOR */ >= 0)
				{
					iVar1 = Global_262145.f_11362 /* Tunable: LUXE2_DINKA_VINDICATOR */;
				}
			}
			break;
		case joaat("chino2"):
			iVar1 = 225000;
			iVar1 = (Global_262145.f_12339 /* Tunable: WEBSITE_VAPID_CHINO__BENNYS_WEBSITE_ */ + __LIB_2__::func_115(iParam1));
			break;
		case joaat("primo2"):
			iVar1 = 100000;
			if (bVar0 && Global_262145.f_12338 /* Tunable: WEBSITE_ALBANY_PRIMO */ >= 0)
			{
				iVar1 = (Global_262145.f_12338 /* Tunable: WEBSITE_ALBANY_PRIMO */ + __LIB_2__::func_115(iParam1));
			}
			break;
		case joaat("moonbeam"):
			iVar1 = 32500;
			if (bVar0 && Global_262145.f_12335 /* Tunable: WEBSITE_DECLASSE_MOONBEAM */ >= 0)
			{
				iVar1 = Global_262145.f_12335 /* Tunable: WEBSITE_DECLASSE_MOONBEAM */;
			}
			break;
		case joaat("moonbeam2"):
			iVar1 = (Global_262145.f_12335 /* Tunable: WEBSITE_DECLASSE_MOONBEAM */ + __LIB_2__::func_115(iParam1));
			break;
		case joaat("faction"):
			iVar1 = 36000;
			if (bVar0 && Global_262145.f_12334 /* Tunable: WEBSITE_WILLARD_FACTION */ >= 0)
			{
				iVar1 = Global_262145.f_12334 /* Tunable: WEBSITE_WILLARD_FACTION */;
			}
			break;
		case joaat("faction2"):
			iVar1 = 95000;
			iVar1 = (Global_262145.f_12334 /* Tunable: WEBSITE_WILLARD_FACTION */ + __LIB_2__::func_115(iParam1));
			break;
		case joaat("buccaneer"):
			iVar1 = 29000;
			if (bVar0 && Global_262145.f_12336 /* Tunable: WEBSITE_ALBANY_BUCCANEER */ >= 0)
			{
				iVar1 = Global_262145.f_12336 /* Tunable: WEBSITE_ALBANY_BUCCANEER */;
			}
			break;
		case joaat("buccaneer2"):
			iVar1 = 85000;
			iVar1 = (Global_262145.f_12336 /* Tunable: WEBSITE_ALBANY_BUCCANEER */ + __LIB_2__::func_115(iParam1));
			break;
		case joaat("voodoo2"):
			iVar1 = 5500;
			if (bVar0 && Global_262145.f_12337 /* Tunable: WEBSITE_DECLASSE_VOODOO */ >= 0)
			{
				iVar1 = Global_262145.f_12337 /* Tunable: WEBSITE_DECLASSE_VOODOO */;
			}
			break;
		case joaat("voodoo"):
			iVar1 = 105000;
			iVar1 = (Global_262145.f_12337 /* Tunable: WEBSITE_DECLASSE_VOODOO */ + __LIB_2__::func_115(iParam1));
			break;
		case joaat("dominator4"):
		case joaat("dominator5"):
		case joaat("dominator6"):
			iVar1 = (Global_262145.f_25928 /* Tunable: AW_TRADE_PRICE_DOMINATOR */ + __LIB_2__::func_115(iParam1));
			break;
		case joaat("slamvan4"):
		case joaat("slamvan5"):
		case joaat("slamvan6"):
			iVar1 = (Global_262145.f_9405 /* Tunable: VEHICLE_XMAS14_SLAMVAN */ + __LIB_2__::func_115(iParam1));
			break;
		case joaat("issi4"):
		case joaat("issi5"):
		case joaat("issi6"):
			iVar1 = (Global_262145.f_24151 /* Tunable: ASSAULT_VEHICLES_WEENY_ISSI_CLASSIC */ + __LIB_2__::func_115(iParam1));
			break;
		case joaat("impaler2"):
		case joaat("impaler3"):
		case joaat("impaler4"):
			iVar1 = (Global_262145.f_25929 /* Tunable: AW_TRADE_PRICE_IMPALER */ + __LIB_2__::func_115(iParam1));
			break;
		case joaat("deathbike"):
		case joaat("deathbike2"):
		case joaat("deathbike3"):
			iVar1 = (Global_262145.f_25931 /* Tunable: AW_TRADE_PRICE_GARGOYLE */ + __LIB_2__::func_115(iParam1));
			break;
		case joaat("monster3"):
		case joaat("monster4"):
		case joaat("monster5"):
			iVar1 = (Global_262145.f_25925 /* Tunable: AW_TRADE_PRICE_RATLOADER */ + __LIB_2__::func_115(iParam1));
			break;
		case joaat("bruiser"):
		case joaat("bruiser2"):
		case joaat("bruiser3"):
			iVar1 = (Global_262145.f_25926 /* Tunable: AW_TRADE_PRICE_GLENDALE */ + __LIB_2__::func_115(iParam1));
			break;
		case joaat("btype2"):
			iVar1 = 550000;
			if (bVar0 && Global_262145.f_12556 /* Tunable: HALLOWEEN_2015_ALBANY_FRANKEN_STANGE */ >= 0)
			{
				iVar1 = Global_262145.f_12556 /* Tunable: HALLOWEEN_2015_ALBANY_FRANKEN_STANGE */;
			}
			break;
		case joaat("lurcher"):
			iVar1 = 650000;
			if (bVar0 && Global_262145.f_12557 /* Tunable: HALLOWEEN_2015_CHARIOT_LURCHER */ >= 0)
			{
				iVar1 = Global_262145.f_12557 /* Tunable: HALLOWEEN_2015_CHARIOT_LURCHER */;
			}
			break;
		case joaat("baller3"):
			iVar1 = 149000;
			if (bVar0 && Global_262145.f_13253 /* Tunable: APARTMENT_WEBSITE_GALLIVANTER_BALLER_LE */ >= 0)
			{
				iVar1 = Global_262145.f_13253 /* Tunable: APARTMENT_WEBSITE_GALLIVANTER_BALLER_LE */;
			}
			break;
		case joaat("baller5"):
			iVar1 = 374000;
			if (bVar0 && Global_262145.f_13254 /* Tunable: APARTMENT_WEBSITE_GALLIVANTER_BALLER_LE_ARMORED */ >= 0)
			{
				iVar1 = Global_262145.f_13254 /* Tunable: APARTMENT_WEBSITE_GALLIVANTER_BALLER_LE_ARMORED */;
			}
			break;
		case joaat("baller4"):
			iVar1 = 247000;
			if (bVar0 && Global_262145.f_13255 /* Tunable: APARTMENT_WEBSITE_GALLIVANTER_BALLER_LE_LWB */ >= 0)
			{
				iVar1 = Global_262145.f_13255 /* Tunable: APARTMENT_WEBSITE_GALLIVANTER_BALLER_LE_LWB */;
			}
			break;
		case joaat("baller6"):
			iVar1 = 513000;
			if (bVar0 && Global_262145.f_13256 /* Tunable: APARTMENT_WEBSITE_GALLIVANTER_BALLER_LWB_ARMORED */ >= 0)
			{
				iVar1 = Global_262145.f_13256 /* Tunable: APARTMENT_WEBSITE_GALLIVANTER_BALLER_LWB_ARMORED */;
			}
			break;
		case joaat("cog55"):
			iVar1 = 154000;
			if (bVar0 && Global_262145.f_13257 /* Tunable: APARTMENT_WEBSITE_ENUS_COGNOSCENTI_55 */ >= 0)
			{
				iVar1 = Global_262145.f_13257 /* Tunable: APARTMENT_WEBSITE_ENUS_COGNOSCENTI_55 */;
			}
			break;
		case joaat("cog552"):
			iVar1 = 396000;
			if (bVar0 && Global_262145.f_13258 /* Tunable: APARTMENT_WEBSITE_ENUS_COGNOSCENTI_55_ARMORED */ >= 0)
			{
				iVar1 = Global_262145.f_13258 /* Tunable: APARTMENT_WEBSITE_ENUS_COGNOSCENTI_55_ARMORED */;
			}
			break;
		case joaat("cognoscenti"):
			iVar1 = 254000;
			if (bVar0 && Global_262145.f_13259 /* Tunable: APARTMENT_WEBSITE_ENUS_COGNOSCENTI */ >= 0)
			{
				iVar1 = Global_262145.f_13259 /* Tunable: APARTMENT_WEBSITE_ENUS_COGNOSCENTI */;
			}
			break;
		case joaat("cognoscenti2"):
			iVar1 = 558000;
			if (bVar0 && Global_262145.f_13260 /* Tunable: APARTMENT_WEBSITE_ENUS_COGNOSCENTI_ARMORED */ >= 0)
			{
				iVar1 = Global_262145.f_13260 /* Tunable: APARTMENT_WEBSITE_ENUS_COGNOSCENTI_ARMORED */;
			}
			break;
		case joaat("limo2"):
			iVar1 = 1650000;
			if (bVar0 && Global_262145.f_13261 /* Tunable: APARTMENT_WEBSITE_BENEFACTOR_SCHAFTER_TURRETED_LIMO */ >= 0)
			{
				iVar1 = Global_262145.f_13261 /* Tunable: APARTMENT_WEBSITE_BENEFACTOR_SCHAFTER_TURRETED_LIMO */;
			}
			break;
		case joaat("mamba"):
			iVar1 = 995000;
			if (bVar0 && Global_262145.f_13262 /* Tunable: APARTMENT_WEBSITE_DECLASSE_MAMBA */ >= 0)
			{
				iVar1 = Global_262145.f_13262 /* Tunable: APARTMENT_WEBSITE_DECLASSE_MAMBA */;
			}
			break;
		case joaat("nightshade"):
			iVar1 = 585000;
			if (bVar0 && Global_262145.f_13263 /* Tunable: APARTMENT_WEBSITE_IMPONTE_NIGHT_SHADE */ >= 0)
			{
				iVar1 = Global_262145.f_13263 /* Tunable: APARTMENT_WEBSITE_IMPONTE_NIGHT_SHADE */;
			}
			break;
		case joaat("schafter3"):
			iVar1 = 116000;
			if (bVar0 && Global_262145.f_13264 /* Tunable: APARTMENT_WEBSITE_BENEFACTOR_SCHAFTER_V12 */ >= 0)
			{
				iVar1 = Global_262145.f_13264 /* Tunable: APARTMENT_WEBSITE_BENEFACTOR_SCHAFTER_V12 */;
			}
			break;
		case joaat("schafter5"):
			iVar1 = 325000;
			if (bVar0 && Global_262145.f_13265 /* Tunable: APARTMENT_WEBSITE_BENEFACTOR_SCHAFTER_V12_ARMORED */ >= 0)
			{
				iVar1 = Global_262145.f_13265 /* Tunable: APARTMENT_WEBSITE_BENEFACTOR_SCHAFTER_V12_ARMORED */;
			}
			break;
		case joaat("schafter4"):
			iVar1 = 208000;
			if (bVar0 && Global_262145.f_13266 /* Tunable: APARTMENT_WEBSITE_BENEFACTOR_SCHAFTER_LWB */ >= 0)
			{
				iVar1 = Global_262145.f_13266 /* Tunable: APARTMENT_WEBSITE_BENEFACTOR_SCHAFTER_LWB */;
			}
			break;
		case joaat("schafter6"):
			iVar1 = 438000;
			if (bVar0 && Global_262145.f_13267 /* Tunable: APARTMENT_WEBSITE_BENEFACTOR_SCHAFTER_LWB_ARMORED */ >= 0)
			{
				iVar1 = Global_262145.f_13267 /* Tunable: APARTMENT_WEBSITE_BENEFACTOR_SCHAFTER_LWB_ARMORED */;
			}
			break;
		case joaat("verlierer2"):
			iVar1 = 695000;
			if (bVar0 && Global_262145.f_13268 /* Tunable: APARTMENT_WEBSITE_BRAVADO_VERLIERER */ >= 0)
			{
				iVar1 = Global_262145.f_13268 /* Tunable: APARTMENT_WEBSITE_BRAVADO_VERLIERER */;
			}
			break;
		case joaat("supervolito"):
			iVar1 = 2113000;
			if (bVar0 && Global_262145.f_13269 /* Tunable: APARTMENT_WEBSITE_BUCKINGHAM_SUPERVOLITO */ >= 0)
			{
				iVar1 = Global_262145.f_13269 /* Tunable: APARTMENT_WEBSITE_BUCKINGHAM_SUPERVOLITO */;
			}
			break;
		case joaat("supervolito2"):
			iVar1 = 3330000;
			if (bVar0 && Global_262145.f_13270 /* Tunable: APARTMENT_WEBSITE_BUCKINGHAM_SUPERVOLITO_CARBON */ >= 0)
			{
				iVar1 = Global_262145.f_13270 /* Tunable: APARTMENT_WEBSITE_BUCKINGHAM_SUPERVOLITO_CARBON */;
			}
			break;
		case joaat("tampa"):
			iVar1 = 375000;
			if (bVar0 && Global_262145.f_13330 /* Tunable: XMAS2015_DECLASSE_TAMPA */ >= 0)
			{
				iVar1 = Global_262145.f_13330 /* Tunable: XMAS2015_DECLASSE_TAMPA */;
			}
			break;
		case joaat("sultan"):
			if (bVar0 && Global_262145.f_13449 /* Tunable: BENNYSWEBSITE_KARIN_SULTAN_BENNYS */ >= 0)
			{
				iVar1 = Global_262145.f_13449 /* Tunable: BENNYSWEBSITE_KARIN_SULTAN_BENNYS */;
			}
			break;
		case joaat("sultanrs"):
			iVar1 = (Global_262145.f_13449 /* Tunable: BENNYSWEBSITE_KARIN_SULTAN_BENNYS */ + __LIB_2__::func_115(iParam1));
			break;
		case joaat("banshee"):
			if (bVar0 && Global_262145.f_13451 /* Tunable: UPGRADE_BRAVADO_BANSHEE_BENNYS */ >= 0)
			{
				iVar1 = Global_262145.f_13451 /* Tunable: UPGRADE_BRAVADO_BANSHEE_BENNYS */;
			}
			break;
		case joaat("banshee2"):
			iVar1 = (Global_262145.f_13451 /* Tunable: UPGRADE_BRAVADO_BANSHEE_BENNYS */ + __LIB_2__::func_115(iParam1));
			break;
		case joaat("btype3"):
			iVar1 = 982000;
			if (bVar0 && Global_262145.f_13479 /* Tunable: WEBSITE_VALENTINES2016_ALBANY_ROOSEVELT_VALOR */ >= 0)
			{
				iVar1 = Global_262145.f_13479 /* Tunable: WEBSITE_VALENTINES2016_ALBANY_ROOSEVELT_VALOR */;
			}
			break;
		case joaat("faction3"):
			iVar1 = (Global_262145.f_12334 /* Tunable: WEBSITE_WILLARD_FACTION */ + __LIB_2__::func_115(iParam1));
			break;
		case joaat("minivan2"):
			iVar1 = (Global_262145.f_7036 /* Tunable: BUSINESS_VEHICLES_MINIVAN */ + __LIB_2__::func_115(iParam1));
			break;
		case joaat("sabregt2"):
			iVar1 = (Global_262145.f_15026 /* Tunable: WEBSITE_BENNYS_DECLASSE_SABRE_TURBO */ + __LIB_2__::func_115(iParam1));
			break;
		case joaat("slamvan3"):
			iVar1 = (Global_262145.f_9405 /* Tunable: VEHICLE_XMAS14_SLAMVAN */ + __LIB_2__::func_115(iParam1));
			break;
		case joaat("tornado5"):
			iVar1 = (Global_262145.f_15027 /* Tunable: WEBSITE_BENNYS_DECLASSE_TORNADO */ + __LIB_2__::func_115(iParam1));
			break;
		case joaat("virgo3"):
			iVar1 = Global_262145.f_15025 /* Tunable: WEBSITE_BENNYS_DUNDREARY_VIRGO_CLASSIC */;
			break;
		case joaat("virgo2"):
			iVar1 = (Global_262145.f_15025 /* Tunable: WEBSITE_BENNYS_DUNDREARY_VIRGO_CLASSIC */ + __LIB_2__::func_115(iParam1));
			break;
		case joaat("technical3"):
			iVar1 = (950000 + __LIB_2__::func_115(iParam1));
			if (bVar0)
			{
				if (Global_262145.f_9098 /* Tunable: VEHICLES_HEIST_KARIN_TECHNICAL */ >= 0)
				{
					iVar1 = (Global_262145.f_9098 /* Tunable: VEHICLES_HEIST_KARIN_TECHNICAL */ + __LIB_2__::func_115(iParam1));
				}
			}
			break;
		case joaat("insurgent3"):
			iVar1 = (1350000 + __LIB_2__::func_115(iParam1));
			if (bVar0)
			{
				if (Global_262145.f_9091 /* Tunable: VEHICLES_HEIST_HVY_INSURGENT_PICKUP */ >= 0)
				{
					iVar1 = (Global_262145.f_9091 /* Tunable: VEHICLES_HEIST_HVY_INSURGENT_PICKUP */ + __LIB_2__::func_115(iParam1));
				}
			}
			break;
	}
	switch (iParam1)
	{
		case joaat("f620"):
			if (bVar0)
			{
				if (Global_262145.f_7634 /* Tunable: DLC_VEHICLE_OCELOT_F620 */ >= 0)
				{
					iVar1 = Global_262145.f_7634 /* Tunable: DLC_VEHICLE_OCELOT_F620 */;
				}
			}
			break;
		case joaat("fusilade"):
			if (bVar0)
			{
				if (Global_262145.f_7635 /* Tunable: DLC_VEHICLE_SCHYSTER_FUSILADE */ >= 0)
				{
					iVar1 = Global_262145.f_7635 /* Tunable: DLC_VEHICLE_SCHYSTER_FUSILADE */;
				}
			}
			break;
		case joaat("penumbra"):
			if (bVar0)
			{
				if (Global_262145.f_7636 /* Tunable: DLC_VEHICLE_MAIBATSU_PENUMBRA */ >= 0)
				{
					iVar1 = Global_262145.f_7636 /* Tunable: DLC_VEHICLE_MAIBATSU_PENUMBRA */;
				}
			}
			break;
		case joaat("sentinel"):
			if (bVar0)
			{
				if (Global_262145.f_7637 /* Tunable: DLC_VEHICLE_UBERMACHT_SENTINEL_XS */ >= 0)
				{
					iVar1 = Global_262145.f_7637 /* Tunable: DLC_VEHICLE_UBERMACHT_SENTINEL_XS */;
				}
			}
			break;
		case joaat("sentinel2"):
			if (bVar0)
			{
				if (Global_262145.f_7638 /* Tunable: DLC_VEHICLE_UBERMACHT_SENTINEL */ >= 0)
				{
					iVar1 = Global_262145.f_7638 /* Tunable: DLC_VEHICLE_UBERMACHT_SENTINEL */;
				}
			}
			break;
	}
	if (bVar0)
	{
		switch (iParam1)
		{
			case joaat("elegy2"):
				if (bParam2)
				{
					if (Global_262145.f_4049 /* Tunable: ELEGY2_EXPENDITURE_MODIFIER */ >= 0)
					{
						iVar1 = Global_262145.f_4049 /* Tunable: ELEGY2_EXPENDITURE_MODIFIER */;
					}
				}
				break;
			case joaat("khamelion"):
				if (Global_262145.f_4065 /* Tunable: KHAMELION_EXPENDITURE_MODIFIER */ >= 0)
				{
					iVar1 = Global_262145.f_4065 /* Tunable: KHAMELION_EXPENDITURE_MODIFIER */;
				}
				break;
			case joaat("hotknife"):
				if (Global_262145.f_4059 /* Tunable: HOTKNIFE_EXPENDITURE_MODIFIER */ >= 0)
				{
					iVar1 = Global_262145.f_4059 /* Tunable: HOTKNIFE_EXPENDITURE_MODIFIER */;
				}
				break;
			case joaat("carbonrs"):
				if (Global_262145.f_4035 /* Tunable: CARBONRS_EXPENDITURE_MODIFIER */ >= 0)
				{
					iVar1 = Global_262145.f_4035 /* Tunable: CARBONRS_EXPENDITURE_MODIFIER */;
				}
				break;
			}
	}
	if (bVar0 || iParam3 == 1)
	{
		if (bParam2)
		{
			switch (iParam1)
			{
				case joaat("coquette"):
					iVar1 = 138000;
					if (Global_262145.f_7631 /* Tunable: DLC_VEHICLE_INVERTO_COQUETTE_TOPLESS */ >= 0 && bVar0)
					{
						iVar1 = Global_262145.f_7631 /* Tunable: DLC_VEHICLE_INVERTO_COQUETTE_TOPLESS */;
					}
					break;
				case joaat("banshee"):
					iVar1 = 126000;
					if (Global_262145.f_7630 /* Tunable: DLC_VEHICLE_BRAVADO_BANSHEE_TOPLESS */ >= 0 && bVar0)
					{
						iVar1 = Global_262145.f_7630 /* Tunable: DLC_VEHICLE_BRAVADO_BANSHEE_TOPLESS */;
					}
					break;
				case joaat("stinger"):
					iVar1 = 850000;
					if (Global_262145.f_7632 /* Tunable: DLC_VEHICLE_GROTTI_STINGER_TOPLESS */ >= 0 && bVar0)
					{
						iVar1 = Global_262145.f_7632 /* Tunable: DLC_VEHICLE_GROTTI_STINGER_TOPLESS */;
					}
					break;
				case joaat("voltic"):
					iVar1 = 150000;
					if (Global_262145.f_4105 /* Tunable: VOLTIC_EXPENDITURE_MODIFIER */ >= 0 && bVar0)
					{
						iVar1 = Global_262145.f_4105 /* Tunable: VOLTIC_EXPENDITURE_MODIFIER */;
					}
					break;
				case joaat("chino"):
					iVar1 = 225000;
					if (Global_262145.f_12339 /* Tunable: WEBSITE_VAPID_CHINO__BENNYS_WEBSITE_ */ >= 0 && bVar0)
					{
						iVar1 = Global_262145.f_12339 /* Tunable: WEBSITE_VAPID_CHINO__BENNYS_WEBSITE_ */;
					}
					break;
				case joaat("kalahari"):
					iVar1 = 40000;
					if (Global_262145.f_8854 /* Tunable: LTS_CANIS_KALAHARI_TOPLESS */ >= 0 && bVar0)
					{
						iVar1 = Global_262145.f_8854 /* Tunable: LTS_CANIS_KALAHARI_TOPLESS */;
					}
					break;
				case joaat("slamvan"):
					iVar1 = 49500;
					if (Global_262145.f_15029 /* Tunable: WEBSITE_BENNYS_VAPID_SLAMVAN */ >= 0 && bVar0)
					{
						iVar1 = Global_262145.f_15029 /* Tunable: WEBSITE_BENNYS_VAPID_SLAMVAN */;
					}
					if (bParam2)
					{
						iVar2 = iVar1;
						iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * 0.75f));
						if (bVar0 && Global_262145.f_25927 /* Tunable: AW_TRADE_PRICE_SLAMVAN */ >= 0)
						{
							iVar1 = Global_262145.f_25927 /* Tunable: AW_TRADE_PRICE_SLAMVAN */;
						}
					}
					break;
				case joaat("minivan"):
					iVar1 = 30000;
					if (Global_262145.f_15028 /* Tunable: WEBSITE_BENNYS_VAPID_MINIVAN */ >= 0 && bVar0)
					{
						iVar1 = Global_262145.f_15028 /* Tunable: WEBSITE_BENNYS_VAPID_MINIVAN */;
					}
					break;
			}
		}
		else
		{
			switch (iParam1)
			{
				case joaat("voltic"):
					if (Global_262145.f_7629 /* Tunable: DLC_VEHICLE_COIL_VOLTIC_TOPLESS */ >= 0 && bVar0)
					{
						iVar1 = Global_262145.f_7629 /* Tunable: DLC_VEHICLE_COIL_VOLTIC_TOPLESS */;
					}
					break;
				case joaat("banshee"):
					if (Global_262145.f_13451 /* Tunable: UPGRADE_BRAVADO_BANSHEE_BENNYS */ >= 0 && bVar0)
					{
						iVar1 = Global_262145.f_13451 /* Tunable: UPGRADE_BRAVADO_BANSHEE_BENNYS */;
					}
					break;
				}
			}
	}
	if (iVar1 == -1)
	{
		return 0;
	}
	if (iVar2 == -1)
	{
		iVar2 = iVar1;
	}
	*iParam0 = iVar1;
	iParam0->f_3 = SYSTEM::FLOOR((IntToFloat(SYSTEM::FLOOR((IntToFloat(iVar1) * 0.5f))) * 0.1f));
	iParam0->f_5 = SYSTEM::FLOOR((IntToFloat(SYSTEM::FLOOR((IntToFloat(iVar1) * 0.5f))) * 0.25f));
	iParam0->f_1 = SYSTEM::FLOOR((IntToFloat(iVar1) * 0.5f));
	if (!__LIB_2__::func_134(iParam1))
	{
		iParam0->f_2 = SYSTEM::FLOOR((IntToFloat(SYSTEM::FLOOR((IntToFloat(iVar2) * 0.5f))) * 0.25f));
		iParam0->f_4 = SYSTEM::FLOOR((IntToFloat(iParam0->f_2) * 0.1f));
		if (iParam0->f_4 > Global_262145.f_16821 /* Tunable: VEINS_LOWER */ && iParam0->f_4 <= Global_262145.f_16822 /* Tunable: VEINS_UPPER */)
		{
			iParam0->f_4 = Global_262145.f_16821 /* Tunable: VEINS_LOWER */;
		}
	}
	else
	{
		iParam0->f_2 = SYSTEM::FLOOR((IntToFloat(iVar2) * 0.06f));
		iParam0->f_4 = SYSTEM::FLOOR((IntToFloat(iParam0->f_2) * 0.1f));
		if (iParam0->f_4 > Global_262145.f_24021 /* Tunable: WEAPONISEDVEHICLEINSURANCECAP */)
		{
			iParam0->f_4 = Global_262145.f_24021 /* Tunable: WEAPONISEDVEHICLEINSURANCECAP */;
		}
	}
	if (bVar0)
	{
		iParam0->f_3 = SYSTEM::FLOOR((IntToFloat(iParam0->f_1) * 0.2f));
	}
	return 1;
}

void func_652(int iParam0, struct<3> Param1, int iParam2, var uParam3, int iParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, bool bParam10)//Position - 0x4B2315
{
	int iVar0;
	var uVar1;
	var uVar2;
	iVar0 = __LIB_22__::func_647(uParam3);
	if (bParam10)
	{
		uVar1 = Param1.f_0;
		uVar2 = Param1.f_1;
	}
	else
	{
		GRAPHICS::GET_SCREEN_COORD_FROM_WORLD_COORD(Param1, &uVar1, &uVar2);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam5))
	{
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(sParam5, false);
	}
	(*uParam3)[iVar0 /*13*/] = uVar1;
	(uParam3[iVar0 /*13*/])->f_1 = uVar2;
	(uParam3[iVar0 /*13*/])->f_4 = 255;
	(uParam3[iVar0 /*13*/])->f_5 = iParam0;
	(uParam3[iVar0 /*13*/])->f_6 = 1;
	(uParam3[iVar0 /*13*/])->f_2 = 0f;
	(uParam3[iVar0 /*13*/])->f_3 = iParam2;
	(uParam3[iVar0 /*13*/])->f_7 = iParam4;
	(uParam3[iVar0 /*13*/])->f_8 = sParam5;
	(uParam3[iVar0 /*13*/])->f_9 = iParam6;
	(uParam3[iVar0 /*13*/])->f_10 = iParam7;
	(uParam3[iVar0 /*13*/])->f_11 = iParam8;
	(uParam3[iVar0 /*13*/])->f_12 = iParam9;
	__LIB_21__::func_691(uParam3);
}

void func_653(int iParam0, var uParam1, bool bParam2)//Position - 0x4B7E12
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	int iVar7;
	int iVar8;
	struct<2> Var9;
	struct<4> Var10;
	int iVar11;
	bool bVar12;
	int iVar13[44];
	int iVar14[66];
	if (!PED::IS_PED_INJURED(iParam0))
	{
		iVar7 = 0;
		while (iVar7 < 2)
		{
			iVar5 = 0;
			while (iVar5 <= (44 - 1))
			{
				iVar1 = __LIB_0__::func_292(iVar5);
				if (iVar1 != 0 && iVar1 != joaat("SLOT_UNARMED"))
				{
					iVar2 = WEAPON::GET_PED_WEAPONTYPE_IN_SLOT(iParam0, iVar1);
					if (iVar2 != 0 && iVar2 != joaat("WEAPON_UNARMED"))
					{
						if (__LIB_0__::func_539(iVar2))
						{
							if (iVar7 == 0)
							{
								iVar13[iVar5] = WEAPON::GET_AMMO_IN_PED_WEAPON(iParam0, iVar2);
							}
							else
							{
								WEAPON::SET_PED_AMMO(iParam0, iVar2, 0, false);
								WEAPON::SET_AMMO_IN_CLIP(iParam0, iVar2, 0);
							}
						}
						else
						{
							iVar13[iVar5] = 0;
							WEAPON::SET_PED_AMMO(iParam0, iVar2, 0, false);
							WEAPON::SET_AMMO_IN_CLIP(iParam0, iVar2, 0);
						}
					}
				}
				iVar5++;
			}
			iVar8 = 0;
			while (iVar8 < FILES::GET_NUM_DLC_WEAPONS())
			{
				if (FILES::GET_DLC_WEAPON_DATA(iVar8, &Var9))
				{
					if (!FILES::IS_CONTENT_ITEM_LOCKED(Var9.f_0) && !__LIB_0__::func_290(Var9.f_1))
					{
						if (iVar7 == 0)
						{
							iVar14[iVar8] = WEAPON::GET_AMMO_IN_PED_WEAPON(iParam0, Var9.f_1);
						}
						else
						{
							WEAPON::SET_PED_AMMO(iParam0, Var9.f_1, 0, false);
							WEAPON::SET_AMMO_IN_CLIP(iParam0, Var9.f_1, 0);
						}
					}
					else
					{
						iVar14[iVar8] = 0;
						WEAPON::SET_PED_AMMO(iParam0, Var9.f_1, 0, false);
						WEAPON::SET_AMMO_IN_CLIP(iParam0, Var9.f_1, 0);
					}
				}
				iVar8++;
			}
			iVar7++;
		}
		iVar5 = 0;
		while (iVar5 <= (44 - 1))
		{
			iVar1 = __LIB_0__::func_292(iVar5);
			if (iVar1 != 0 && iVar1 != joaat("SLOT_UNARMED"))
			{
				iVar2 = WEAPON::GET_PED_WEAPONTYPE_IN_SLOT(iParam0, iVar1);
				iVar3 = (*uParam1)[iVar5 /*5*/];
				iVar0 = (uParam1[iVar5 /*5*/])->f_1;
				if (!__LIB_0__::func_539(iVar3))
				{
					(*uParam1)[iVar5 /*5*/] = 0;
					iVar3 = 0;
				}
				if (iVar3 != 0)
				{
					if (iVar3 != joaat("WEAPON_UNARMED"))
					{
						if (!WEAPON::HAS_PED_GOT_WEAPON(iParam0, iVar3, false))
						{
							WEAPON::GIVE_WEAPON_TO_PED(iParam0, iVar3, 0, false, false);
						}
						if (WEAPON::GET_AMMO_IN_PED_WEAPON(iParam0, iVar3) < iVar0)
						{
							WEAPON::SET_PED_AMMO(iParam0, iVar3, iVar0, false);
						}
						if (iVar3 != joaat("WEAPON_PETROLCAN") && WEAPON::HAS_PED_GOT_WEAPON(iParam0, iVar3, false))
						{
							WEAPON::SET_PED_WEAPON_TINT_INDEX(iParam0, iVar3, (uParam1[iVar5 /*5*/])->f_3);
						}
						bVar6 = false;
						iVar4 = __LIB_0__::func_430(iVar3, bVar6);
						while (iVar4 != 0)
						{
							if (BitTest((uParam1[iVar5 /*5*/])->f_2, bVar6))
							{
								if (!WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(iParam0, iVar3, iVar4))
								{
									WEAPON::GIVE_WEAPON_COMPONENT_TO_PED(iParam0, iVar3, iVar4);
									__LIB_0__::func_475(iParam0, iVar3, iVar4);
									if (__LIB_0__::func_419(iVar4))
									{
										WEAPON::SET_PED_WEAPON_COMPONENT_TINT_INDEX(iParam0, iVar3, iVar4, (uParam1[iVar5 /*5*/])->f_4);
										__LIB_0__::func_474(iParam0, iVar3, iVar4, (uParam1[iVar5 /*5*/])->f_4);
									}
								}
							}
							else if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(iParam0, iVar3, iVar4))
							{
								WEAPON::REMOVE_WEAPON_COMPONENT_FROM_PED(iParam0, iVar3, iVar4);
								__LIB_0__::func_514(iParam0, iVar3, iVar4);
							}
							bVar6++;
							iVar4 = __LIB_0__::func_430(iVar3, bVar6);
						}
					}
				}
				else if (bParam2)
				{
					if ((iVar2 != 0 && iVar2 != joaat("WEAPON_UNARMED")) && iVar2 != joaat("OBJECT"))
					{
						WEAPON::REMOVE_WEAPON_FROM_PED(iParam0, iVar2);
						bVar6 = false;
						iVar4 = __LIB_0__::func_430(iVar2, bVar6);
						while (iVar4 != 0)
						{
							if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(iParam0, iVar2, iVar4))
							{
								WEAPON::REMOVE_WEAPON_COMPONENT_FROM_PED(iParam0, iVar2, iVar4);
								__LIB_0__::func_514(iParam0, iVar2, iVar4);
							}
							bVar6++;
							iVar4 = __LIB_0__::func_430(iVar2, bVar6);
						}
					}
				}
				if (!bParam2)
				{
					if (iVar2 != 0 && iVar2 != joaat("WEAPON_UNARMED"))
					{
						if (WEAPON::GET_AMMO_IN_PED_WEAPON(iParam0, iVar2) < iVar13[iVar5])
						{
							WEAPON::SET_PED_AMMO(iParam0, iVar2, iVar13[iVar5], false);
						}
					}
				}
			}
			iVar5++;
		}
		iVar11 = 0;
		while (iVar11 < uParam1->f_221)
		{
			iVar3 = uParam1->f_221[iVar11 /*5*/];
			iVar0 = uParam1->f_221[iVar11 /*5*/].f_1;
			iVar8 = __LIB_0__::func_289(iVar3, &Var9);
			if (iVar8 != -1 && !__LIB_0__::func_290(Var9.f_1))
			{
				if (FILES::IS_CONTENT_ITEM_LOCKED(Var9.f_0) || __LIB_0__::func_290(Var9.f_1))
				{
					uParam1->f_221[iVar11 /*5*/] = 0;
					iVar3 = 0;
				}
				if (iVar3 != 0)
				{
					if (iVar3 != joaat("WEAPON_UNARMED"))
					{
						if (!WEAPON::HAS_PED_GOT_WEAPON(iParam0, iVar3, false))
						{
							WEAPON::GIVE_WEAPON_TO_PED(iParam0, iVar3, 0, false, false);
						}
						if (WEAPON::GET_AMMO_IN_PED_WEAPON(iParam0, iVar3) < iVar0)
						{
							WEAPON::SET_PED_AMMO(iParam0, iVar3, iVar0, false);
						}
						if (WEAPON::HAS_PED_GOT_WEAPON(iParam0, iVar3, false))
						{
							WEAPON::SET_PED_WEAPON_TINT_INDEX(iParam0, iVar3, uParam1->f_221[iVar11 /*5*/].f_3);
						}
						bVar12 = false;
						bVar6 = false;
						while (bVar6 < FILES::GET_NUM_DLC_WEAPON_COMPONENTS(iVar8))
						{
							if (FILES::GET_DLC_WEAPON_COMPONENT_DATA(iVar8, bVar6, &Var10))
							{
								if (!__LIB_0__::func_288(Var10.f_3))
								{
									if (BitTest(uParam1->f_221[iVar11 /*5*/].f_2, bVar12))
									{
										if (!WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(iParam0, iVar3, Var10.f_3))
										{
											WEAPON::GIVE_WEAPON_COMPONENT_TO_PED(iParam0, iVar3, Var10.f_3);
											__LIB_0__::func_475(iParam0, iVar3, Var10.f_3);
											if (__LIB_0__::func_419(Var10.f_3))
											{
												WEAPON::SET_PED_WEAPON_COMPONENT_TINT_INDEX(iParam0, iVar3, Var10.f_3, uParam1->f_221[iVar11 /*5*/].f_4);
												__LIB_0__::func_474(iParam0, iVar3, Var10.f_3, uParam1->f_221[iVar11 /*5*/].f_4);
											}
										}
									}
									else if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(iParam0, iVar3, Var10.f_3))
									{
										WEAPON::REMOVE_WEAPON_COMPONENT_FROM_PED(iParam0, iVar3, Var10.f_3);
										__LIB_0__::func_514(iParam0, iVar3, Var10.f_3);
									}
									bVar12++;
								}
							}
							bVar6++;
						}
					}
				}
				else if (bParam2)
				{
					if ((iVar2 != 0 && iVar2 != joaat("WEAPON_UNARMED")) && iVar2 != joaat("OBJECT"))
					{
						WEAPON::REMOVE_WEAPON_FROM_PED(iParam0, iVar2);
						bVar6 = false;
						while (bVar6 < FILES::GET_NUM_DLC_WEAPON_COMPONENTS(iVar8))
						{
							if (FILES::GET_DLC_WEAPON_COMPONENT_DATA(iVar8, bVar6, &Var10))
							{
								if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(iParam0, iVar2, Var10.f_3))
								{
									WEAPON::REMOVE_WEAPON_COMPONENT_FROM_PED(iParam0, iVar2, Var10.f_3);
									__LIB_0__::func_514(iParam0, iVar2, Var10.f_3);
								}
							}
							bVar6++;
						}
					}
				}
				if (!bParam2)
				{
					if (iVar3 != 0 && iVar3 != joaat("WEAPON_UNARMED"))
					{
						if (WEAPON::GET_AMMO_IN_PED_WEAPON(iParam0, iVar3) < iVar14[iVar8])
						{
							WEAPON::SET_PED_AMMO(iParam0, iVar3, iVar14[iVar8], false);
						}
					}
				}
			}
			iVar11++;
		}
		if (((WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar2, true) && iVar2 != 0) && iVar2 != joaat("WEAPON_UNARMED")) && iVar2 != joaat("OBJECT"))
		{
			iVar0 = WEAPON::GET_AMMO_IN_PED_WEAPON(iParam0, iVar2);
			if (iVar0 > 1 && iVar0 > WEAPON::GET_MAX_AMMO_IN_CLIP(iParam0, iVar2, true))
			{
				WEAPON::SET_PED_AMMO(iParam0, iVar2, (iVar0 - WEAPON::GET_MAX_AMMO_IN_CLIP(iParam0, iVar2, true)), false);
				WEAPON::SET_AMMO_IN_CLIP(iParam0, iVar2, WEAPON::GET_MAX_AMMO_IN_CLIP(iParam0, iVar2, true));
			}
		}
	}
}

void func_654()//Position - 0x50559B
{
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_21__::func_614());
}

void func_655(int iParam0)//Position - 0x5055B8
{
	int iVar0;
	iVar0 = __LIB_21__::func_616(iParam0, 0);
	if (!iVar0 == 0)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_21__::func_615());
}

void func_656(int iParam0, int iParam1)//Position - 0x505926
{
	int iVar0;
	iVar0 = __LIB_21__::func_617(iParam0, iParam1);
	if (!iVar0 == 0)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
	}
}

void func_657(int iParam0, int iParam1)//Position - 0x5059DC
{
	int iVar0;
	iVar0 = __LIB_21__::func_618(iParam0, iParam1);
	if (!iVar0 == 0)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
	}
}

void func_658(int iParam0)//Position - 0x505C24
{
	if (iParam0 > 0)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_21__::func_619());
	}
}

void func_659(int iParam0)//Position - 0x505C47
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (__LIB_21__::func_621(iParam0, iVar0))
		{
			iVar1 = __LIB_21__::func_620(iParam0, iVar0);
			if (!iVar1 == 0)
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar1);
			}
		}
		iVar0++;
	}
}

void func_660(var uParam0)//Position - 0x505EF3
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_24[iVar0]))
		{
			__LIB_21__::func_622(&(uParam0->f_24[iVar0]));
		}
		iVar0++;
	}
	uParam0->f_46 = 0;
	uParam0->f_47 = 0;
}

void func_661(int iParam0, char* sParam1, bool bParam2)//Position - 0x517C04
{
	int iVar0;
	iVar0 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(__LIB_7__::func_890(iParam0), __LIB_7__::func_952(iParam0));
	if (INTERIOR::IS_VALID_INTERIOR(iVar0))
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
		{
			if (INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iVar0, sParam1))
			{
				INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(iVar0, sParam1);
			}
		}
	}
	if (bParam2)
	{
		INTERIOR::REFRESH_INTERIOR(iVar0);
	}
}

int func_662()//Position - 0x56A3DB
{
	int iVar0;
	int iVar1;
	if (__LIB_1__::func_200())
	{
		return Global_1922981.f_1345;
	}
	iVar1 = 0;
	while (iVar1 <= (Global_2715699.f_1.f_2805 - 1))
	{
		if (__LIB_22__::func_185(iVar1) > iVar0)
		{
			iVar0 = __LIB_22__::func_185(iVar1);
		}
		iVar1++;
	}
	return iVar0;
}

int func_663(int iParam0)//Position - 0x1C34
{
	int iVar0;
	int iVar1;
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (__LIB_17__::func_706(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_664(int iParam0)//Position - 0xC008
{
	if (((((((((((((((((((iParam0 == joaat("xs_prop_arena_pit_fire_03a_sf") || iParam0 == joaat("xs_prop_arena_pit_fire_04a_sf")) || iParam0 == joaat("xs_prop_arena_pit_fire_01a_sf")) || iParam0 == joaat("xs_prop_arena_pit_fire_02a_sf")) || iParam0 == joaat("xs_prop_arena_landmine_01a")) || iParam0 == joaat("xs_prop_arena_barrel_01a")) || iParam0 == joaat("xs_prop_arena_landmine_03a")) || iParam0 == joaat("xs_prop_arena_landmine_01c_sf")) || iParam0 == joaat("xs_prop_arena_landmine_01c_wl")) || iParam0 == joaat("xs_prop_arena_turntable_01a")) || iParam0 == joaat("xs_prop_arena_turntable_02a")) || iParam0 == joaat("xs_prop_arena_turntable_03a")) || iParam0 == joaat("xs_prop_arena_turntable_01a_sf")) || iParam0 == joaat("xs_prop_arena_turntable_01a_wl")) || iParam0 == -1255963777) || iParam0 == joaat("xs_prop_arena_flipper_small_01a_sf")) || iParam0 == joaat("xs_prop_arena_flipper_large_01a_sf")) || iParam0 == joaat("xs_prop_arena_flipper_xl_01a_sf")) || __LIB_19__::func_129(iParam0)) || __LIB_22__::func_195(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_665(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14)//Position - 0x15364
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	if (bParam6)
	{
		if (Global_1965461.f_1 != -1)
		{
			iVar4 = Global_1965461.f_1;
		}
		else
		{
			bParam6 = false;
		}
	}
	else if (bParam2)
	{
		if ((((((((((bParam3 || bParam4) || bParam5) || bParam7) || bParam8) || bParam9) || bParam10) || bParam11) || bParam12) || bParam13) || bParam14)
		{
			if (__LIB_2__::func_649())
			{
				if (bParam7)
				{
					iVar3 = 251;
				}
				else if (bParam5)
				{
					iVar3 = 246;
				}
				else if (bParam4)
				{
					iVar3 = 245;
				}
				else if (bParam3)
				{
					iVar3 = 202;
				}
				else if (bParam8)
				{
					iVar3 = 252;
				}
				else if (bParam9)
				{
					iVar3 = 253;
				}
				else if (bParam10)
				{
					iVar3 = 161;
				}
				else if (bParam11)
				{
					iVar3 = 278;
				}
				else if (bParam12)
				{
					iVar3 = 279;
				}
				else if (bParam13)
				{
					iVar3 = 302;
				}
				else if (bParam14)
				{
					iVar3 = 303;
				}
			}
			else
			{
				iVar3 = __LIB_18__::func_684(Global_4718592.f_116524);
			}
			iVar4 = __LIB_18__::func_440(__LIB_18__::func_211(iVar3));
			iVar5 = __LIB_21__::func_733(iVar3);
		}
		else
		{
			iVar4 = __LIB_19__::func_1();
			iVar5 = __LIB_18__::func_179();
		}
	}
	iVar0 = 0;
	while (iVar0 <= 17)
	{
		if (bParam6)
		{
			iVar2 = __LIB_18__::func_683(iVar4);
			iVar4++;
			if (iVar4 >= 6)
			{
				iVar4 = 0;
			}
		}
		else if (bParam2 && iVar4 != -1)
		{
			if ((((((((((bParam3 || bParam4) || bParam5) || bParam7) || bParam8) || bParam9) || bParam10) || bParam11) || bParam12) || bParam13) || bParam14)
			{
				iVar2 = Global_262145.f_5065[__LIB_18__::func_211(iVar3) /*51*/][iVar4];
			}
			else
			{
				iVar2 = Global_262145.f_4794[iVar4];
			}
			iVar4++;
			if (iVar4 >= iVar5)
			{
				iVar4 = 0;
			}
		}
		else
		{
			iVar2 = __LIB_23__::func_643(iParam1, iVar0);
		}
		if (iVar2 != -1)
		{
			if (bParam13)
			{
				iVar1 = 0;
				while (iVar1 <= 99)
				{
					if (iVar2 == Global_998606.f_9405[iVar1 /*13*/].f_1)
					{
						if (BitTest(Global_998606.f_604[iVar1 /*88*/].f_76, 13))
						{
							if (__LIB_23__::func_639(uParam0, iVar1, 1, bParam2))
							{
								return iVar1;
							}
						}
					}
					iVar1++;
				}
			}
			else
			{
				iVar1 = 0;
				while (iVar1 <= 1999)
				{
					if (iVar2 == Global_794709.f_177589[iVar1 /*13*/].f_1)
					{
						if (BitTest(Global_794709.f_4[iVar1 /*88*/].f_76, 13))
						{
							if (__LIB_23__::func_639(uParam0, iVar1, 0, bParam2))
							{
								return iVar1;
							}
						}
					}
					iVar1++;
				}
			}
		}
		iVar0++;
	}
	return -1;
}

int func_666(int iParam0)//Position - 0xCF97E
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	iVar3 = (iParam0 * __LIB_0__::func_138(__LIB_2__::func_443(), 5, 10));
	iVar0 = 0;
	while (iVar0 < Global_4980736.f_94384)
	{
		if (Global_4980736.f_94390[iVar0 /*1004*/].f_27 != 0)
		{
			if (iVar1 == iVar3)
			{
				iVar3++;
				STREAMING::REQUEST_MODEL(Global_4980736.f_94390[iVar0 /*1004*/].f_27);
				if (iVar2 >= __LIB_0__::func_138(__LIB_2__::func_443(), 5, 10))
				{
					return 0;
				}
				else
				{
					iVar2++;
				}
			}
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_4980736.f_78574)
	{
		if (Global_4980736.f_78578[iVar0 /*450*/].f_12 != 0)
		{
			if (iVar1 == iVar3)
			{
				iVar3++;
				STREAMING::REQUEST_MODEL(Global_4980736.f_78578[iVar0 /*450*/].f_12);
				if (iVar2 >= __LIB_0__::func_138(__LIB_2__::func_443(), 5, 10))
				{
					return 0;
				}
				else
				{
					iVar2++;
				}
			}
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_4980736.f_5739)
	{
		if (Global_4980736.f_5742[iVar0 /*442*/].f_15 != 0)
		{
			if (iVar1 == iVar3)
			{
				iVar3++;
				STREAMING::REQUEST_MODEL(Global_4980736.f_5742[iVar0 /*442*/].f_15);
				if (iVar2 >= __LIB_0__::func_138(__LIB_2__::func_443(), 5, 10))
				{
					return 0;
				}
				else
				{
					iVar2++;
				}
			}
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_4980736.f_63310)
	{
		if (Global_4980736.f_63312[iVar0 /*183*/].f_7 != 0)
		{
			if (iVar1 == iVar3)
			{
				iVar3++;
				STREAMING::REQUEST_MODEL(Global_4980736.f_63312[iVar0 /*183*/].f_7);
				if (iVar2 >= __LIB_0__::func_138(__LIB_2__::func_443(), 5, 10))
				{
					return 0;
				}
				else
				{
					iVar2++;
				}
			}
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_4980736.f_20329)
	{
		if (Global_4980736.f_20330[iVar0 /*234*/] != 0)
		{
			if (iVar1 == iVar3)
			{
				iVar3++;
				STREAMING::REQUEST_MODEL(Global_4980736.f_20330[iVar0 /*234*/]);
				if (iVar2 >= __LIB_0__::func_138(__LIB_2__::func_443(), 5, 10))
				{
					return 0;
				}
				else
				{
					iVar2++;
				}
			}
			iVar1++;
		}
		iVar0++;
	}
	return 1;
}

void func_667(bool bParam0, int iParam1)//Position - 0xE3EC6
{
	__LIB_1__::func_354(8804, 0, iParam1, 1, 0);
	if (bParam0)
	{
		__LIB_1__::func_333(-1713398555, 8, 0);
	}
}

void func_668()//Position - 0xE3EEB
{
	int iVar0;
	iVar0 = __LIB_1__::func_360(8726, -1, 0);
	if (BitTest(iVar0, 0))
	{
		MISC::CLEAR_BIT(&iVar0, 0);
		Global_1966471.f_24 = iVar0;
		__LIB_1__::func_354(8726, iVar0, -1, 1, 0);
		__LIB_1__::func_333(-1713398555, 28, 0);
	}
}

bool func_669()//Position - 0xE40F5
{
	int iVar0;
	iVar0 = __LIB_1__::func_360(8283, -1, 0);
	return BitTest(iVar0, 19);
}

void func_670()//Position - 0xE4F7E
{
	__LIB_1__::func_354(6520, 0, -1, 1, 0);
}

int func_671(int iParam0)//Position - 0xE6265
{
	bool bVar0;
	int iVar1;
	switch (iParam0)
	{
		case 0:
			return __LIB_1__::func_360(3977, -1, 0);
		case 1:
			return __LIB_1__::func_360(5463, -1, 0);
		case 2:
			iVar1 = __LIB_1__::func_360(5662, -1, 0);
			bVar0 = false;
			while (bVar0 < 16)
			{
				if (!BitTest(iVar1, bVar0))
				{
					return bVar0;
				}
				bVar0++;
			}
			return 16;
		default:
	}
	return -1;
}

bool func_672(var uParam0)//Position - 0xFA313
{
	if (*uParam0 != 191)
	{
		return 0;
	}
	return __LIB_17__::func_53(uParam0) == 1;
}

void func_673(int iParam0)//Position - 0xFC638
{
	if (__LIB_1__::func_360(10982, -1, 0) == iParam0)
	{
		return;
	}
	else if (__LIB_1__::func_360(10985, -1, 0) == iParam0)
	{
		return;
	}
	else if (__LIB_1__::func_360(10988, -1, 0) == iParam0)
	{
		return;
	}
	else if (__LIB_1__::func_360(10991, -1, 0) == iParam0)
	{
		return;
	}
	else if (__LIB_1__::func_360(10994, -1, 0) == iParam0)
	{
		return;
	}
	else if (__LIB_1__::func_360(10997, -1, 0) == iParam0)
	{
		return;
	}
	else if (__LIB_1__::func_360(11000, -1, 0) == iParam0)
	{
		return;
	}
	else if (__LIB_1__::func_360(11003, -1, 0) == iParam0)
	{
		return;
	}
	else if (__LIB_1__::func_360(11006, -1, 0) == iParam0)
	{
		return;
	}
	else if (__LIB_1__::func_360(11009, -1, 0) == iParam0)
	{
		return;
	}
	else if (__LIB_1__::func_360(10982, -1, 0) == 0)
	{
		__LIB_1__::func_354(10982, iParam0, -1, 1, 0);
	}
	else if (__LIB_1__::func_360(10985, -1, 0) == 0)
	{
		__LIB_1__::func_354(10985, iParam0, -1, 1, 0);
	}
	else if (__LIB_1__::func_360(10988, -1, 0) == 0)
	{
		__LIB_1__::func_354(10988, iParam0, -1, 1, 0);
	}
	else if (__LIB_1__::func_360(10991, -1, 0) == 0)
	{
		__LIB_1__::func_354(10991, iParam0, -1, 1, 0);
	}
	else if (__LIB_1__::func_360(10994, -1, 0) == 0)
	{
		__LIB_1__::func_354(10994, iParam0, -1, 1, 0);
	}
	else if (__LIB_1__::func_360(10997, -1, 0) == 0)
	{
		__LIB_1__::func_354(10997, iParam0, -1, 1, 0);
	}
	else if (__LIB_1__::func_360(11000, -1, 0) == 0)
	{
		__LIB_1__::func_354(11000, iParam0, -1, 1, 0);
	}
	else if (__LIB_1__::func_360(11003, -1, 0) == 0)
	{
		__LIB_1__::func_354(11003, iParam0, -1, 1, 0);
	}
	else if (__LIB_1__::func_360(11006, -1, 0) == 0)
	{
		__LIB_1__::func_354(11006, iParam0, -1, 1, 0);
	}
	else if (__LIB_1__::func_360(11009, -1, 0) == 0)
	{
		__LIB_1__::func_354(11009, iParam0, -1, 1, 0);
	}
}

void func_674(int iParam0, int iParam1)//Position - 0xFF1DB
{
	Global_1941273[iParam0 /*8*/].f_1 = iParam1;
	__LIB_1__::func_354(__LIB_18__::func_369(iParam0), iParam1, -1, 1, 0);
	__LIB_1__::func_333(-1830957326, 3, 0);
}

void func_675(var uParam0, var uParam1, char* sParam2, char* sParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, char* sParam20, bool bParam21, bool bParam22, int iParam23)//Position - 0x1226CB
{
	char* sVar0;
	if (bParam21)
	{
		sVar0 = "CELEB_WINNER" /* GXT: Winner */;
	}
	else
	{
		sVar0 = "CELEB_LOSER" /* GXT: Loser */;
	}
	if (uParam0->f_429 <= 1)
	{
		if (MISC::ARE_STRINGS_EQUAL(sVar0, "CELEB_WINNERS" /* GXT: WINNERS */))
		{
			sVar0 = "CELEB_WINNER" /* GXT: Winner */;
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "CELEB_WINNERS" /* GXT: WINNERS */))
		{
			sVar0 = "CELEB_LOSER" /* GXT: Loser */;
		}
	}
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam1, "ADD_WINNER_TO_WALL");
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam2);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	__LIB_0__::func_700(sVar0);
	__LIB_0__::func_700(sParam3);
	if (iParam23 <= 0)
	{
		__LIB_0__::func_700("");
	}
	else
	{
		GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(__LIB_23__::func_781());
		HUD::ADD_TEXT_COMPONENT_INTEGER(iParam23);
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam20);
		GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	}
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
	HUD::SET_TEXT_FONT(6);
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(__LIB_24__::func_33());
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&uParam4);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	HUD::SET_TEXT_FONT(0);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bParam22);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

bool func_676(var uParam0, var uParam1, struct<3> Param2, int iParam3, float fParam4)//Position - 0x12595E
{
	if (ENTITY::DOES_ENTITY_EXIST(*uParam1))
	{
		return 1;
	}
	if (NETWORK::CAN_REGISTER_MISSION_OBJECTS(1))
	{
		NETWORK::RESERVE_NETWORK_MISSION_OBJECTS(NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(false, 0) + 1);
		if (__LIB_24__::func_221(uParam0))
		{
			*uParam1 = OBJECT::CREATE_OBJECT(iParam3, Param2, false, false, false);
			ENTITY::SET_ENTITY_HEADING(*uParam1, fParam4);
		}
	}
	else
	{
		return 1;
	}
	return ENTITY::DOES_ENTITY_EXIST(*uParam1);
}

bool func_677()//Position - 0x14D719
{
	return __LIB_18__::func_39(PLAYER::PLAYER_ID());
}

int func_678(var uParam0, var uParam1)//Position - 0x19BF1F
{
	int iVar0;
	int iVar1;
	if (!__LIB_6__::func_297(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	iVar0 = uParam0;
	if (iVar0 == 1)
	{
		return 1;
	}
	if (iVar0 == 2)
	{
		iVar1 = uParam1;
		switch (iVar1)
		{
			case 1:
			case 4:
			case 6:
			case 7:
				return 1;
				break;
			}
	}
	return 0;
}

int func_679()//Position - 0x1E0E45
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	iVar5 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	if (iVar5 != -1)
	{
		iVar4 = Global_1853348[iVar5 /*834*/].f_96.f_28;
	}
	iVar0 = 0;
	while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			bVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0));
			iVar6 = bVar2;
			if (iVar3 != -1)
			{
				iVar3 = Global_1853348[iVar6 /*834*/].f_96.f_28;
			}
			if (iVar4 == iVar3)
			{
				if (!__LIB_2__::func_40(bVar2, 0))
				{
					if (!__LIB_10__::func_767(bVar2))
					{
						if (iVar0 < NETWORK::PARTICIPANT_ID_TO_INT())
						{
							iVar1++;
						}
					}
				}
			}
		}
		iVar0++;
	}
	return iVar1;
}

void func_680(int iParam0)//Position - 0x1E2632
{
	int iVar0;
	bool bVar1;
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (__LIB_2__::func_917(iVar0, &bVar1))
		{
			__LIB_22__::func_251(iVar0, iParam0);
		}
		if (bVar1)
		{
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iVar0);
		}
	}
	Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_252 = 0;
}

void func_681(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5)//Position - 0x1E4D27
{
	StringCopy(&(Global_1937518.f_10), "", 24);
	if (MISC::IS_STRING_NULL_OR_EMPTY(&cParam0) || MISC::ARE_STRINGS_EQUAL(&cParam0, "."))
	{
		__LIB_1__::func_354(10909, 0, -1, 1, 0);
		return;
	}
	__LIB_1__::func_354(10909, MISC::GET_HASH_KEY(&cParam0), -1, 1, 0);
}

int func_682(int iParam0, int iParam1)//Position - 0x1E5853
{
	int iVar0;
	int iVar1;
	bool bVar2;
	if (!Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_192 != 0 && NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 0;
	}
	iVar0 = -1;
	bVar2 = false;
	if (__LIB_12__::func_476(iParam0))
	{
		bVar2 = true;
		iVar0 = 0;
		iVar1 = __LIB_1__::func_360(11070, -1, 0);
	}
	if (__LIB_12__::func_475(iParam0))
	{
		bVar2 = true;
		iVar0 = 0;
		iVar1 = __LIB_1__::func_360(11066, -1, 0);
	}
	if (__LIB_12__::func_474(iParam0))
	{
		bVar2 = true;
		iVar0 = 0;
		iVar1 = __LIB_1__::func_360(11067, -1, 0);
	}
	if (__LIB_12__::func_473(iParam0))
	{
		bVar2 = true;
		iVar0 = 0;
		iVar1 = __LIB_1__::func_360(11068, -1, 0);
	}
	if (__LIB_12__::func_472(iParam0))
	{
		bVar2 = true;
		iVar0 = 1;
		iVar1 = __LIB_1__::func_360(11069, -1, 0);
	}
	if (!bVar2)
	{
		return 0;
	}
	if (iVar0 != -1)
	{
		if (iParam1 == iVar0)
		{
			if (iVar1 == 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_683(bool bParam0)//Position - 0x1E6E4C
{
	int iVar0;
	int iVar1;
	bool bVar2;
	iVar1 = 0;
	while (iVar1 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1)))
		{
			bVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1));
			if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(bVar2))
			{
				if (bParam0)
				{
					if (!__LIB_2__::func_40(bVar2, 0) && Global_1853348[PLAYER::PLAYER_ID() /*834*/] == 0)
					{
						iVar0++;
					}
				}
				else if (!BitTest(Global_1853348[bVar2 /*834*/].f_96.f_32, 5) && !__LIB_2__::func_40(bVar2, 0))
				{
					iVar0++;
				}
			}
		}
		iVar1++;
	}
	return iVar0;
}

void func_684(char* sParam0, bool bParam1)//Position - 0x1F82BA
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return;
	}
	if (HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam0) > 63)
	{
		return;
	}
	if (__LIB_2__::func_107(sParam0))
	{
		return;
	}
	__LIB_2__::func_777();
	Global_1574757 = 11;
	StringCopy(&(Global_1574757.f_1), SCRIPT::GET_THIS_SCRIPT_NAME(), 32);
	Global_1574757.f_9 = MISC::GET_HASH_KEY(&(Global_1574757.f_1));
	StringCopy(&(Global_1574757.f_12), "STRING", 16);
	StringCopy(&(Global_1574757.f_16), sParam0, 64);
	__LIB_1__::func_699();
	__LIB_1__::func_698(bParam1);
	if (!MISC::ARE_STRINGS_EQUAL(sParam0, " "))
	{
		__LIB_1__::func_697();
	}
}

int func_685(char* sParam0, char* sParam1, char* sParam2, bool bParam3, int iParam4)//Position - 0x1F8804
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	if (HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam0) > 23)
	{
		return 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return 0;
	}
	if (HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam1) > 63)
	{
		return 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		return 0;
	}
	if (HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam2) > 63)
	{
		return 0;
	}
	if (__LIB_2__::func_705(sParam0, sParam1, sParam2) && Global_1574757.f_56 == Global_1574757.f_58)
	{
		return 0;
	}
	__LIB_2__::func_777();
	Global_1574757 = 10;
	StringCopy(&(Global_1574757.f_1), SCRIPT::GET_THIS_SCRIPT_NAME(), 32);
	Global_1574757.f_9 = MISC::GET_HASH_KEY(&(Global_1574757.f_1));
	StringCopy(&(Global_1574757.f_12), sParam0, 16);
	StringCopy(&(Global_1574757.f_16), sParam1, 64);
	StringCopy(&(Global_1574757.f_32), sParam2, 64);
	Global_1574757.f_58 = iParam4;
	Global_1574757.f_56 = iParam4;
	__LIB_1__::func_699();
	__LIB_1__::func_698(bParam3);
	__LIB_1__::func_697();
	return 1;
}

void func_686(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)//Position - 0x320E1A
{
	int iVar0;
	if (__LIB_18__::func_246(iParam0) && iParam4 != 0)
	{
		iVar0 = __LIB_24__::func_245(iParam0, iParam1, bParam2, bParam3);
		WEAPON::ADD_PED_AMMO_BY_TYPE(PLAYER::PLAYER_PED_ID(), iParam4, iVar0);
	}
}

void func_687(int iParam0, char* sParam1, bool bParam2, int iParam3)//Position - 0x3329B8
{
	if (!__LIB_8__::func_168())
	{
		return;
	}
	STATS::PLAYSTATS_NPC_PHONE(iParam0, -1180597171, MISC::GET_HASH_KEY(sParam1), 0, bParam2, iParam3);
	if (bParam2)
	{
		Global_1973156 = -1;
	}
}

int func_688(int iParam0, int iParam1)//Position - 0x357DE9
{
	int iVar0;
	iVar0 = 0;
	if (WEAPON::IS_WEAPON_VALID(iParam0))
	{
		iVar0 = (WEAPON::GET_MAX_AMMO_IN_CLIP(PLAYER::PLAYER_PED_ID(), iParam0, true) * iParam1);
		if (__LIB_21__::func_869(iParam0))
		{
			iVar0 = __LIB_23__::func_359(iParam0);
		}
	}
	return iVar0;
}

void func_689(struct<3> Param0, struct<3> Param1, float fParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x367561
{
	struct<3> Var0;
	struct<3> Var1;
	var uVar2;
	var uVar3;
	struct<3> Var4[8];
	int iVar5;
	struct<3> Var6[4];
	Var0 = { Param0 - Param1 };
	Var1 = { __LIB_0__::func_835(Var0, Var0.f_0, Var0.f_1, 0f) };
	Var1 = { Var1 / FtoV(SYSTEM::VMAG(Var1)) };
	Var1 = { Var1 * FtoV((fParam2 * 0.5f)) };
	if (Param0.f_2 > Param1.f_2)
	{
		uVar2 = Param1.f_2;
		uVar3 = Param0.f_2;
	}
	else
	{
		uVar2 = Param0.f_2;
		uVar3 = Param1.f_2;
	}
	Var4[0 /*3*/] = { Vector(uVar2, Param0.f_1, Param0.f_0) + Var1 };
	Var4[1 /*3*/] = { Vector(uVar2, Param0.f_1, Param0.f_0) - Var1 };
	Var4[2 /*3*/] = { Vector(uVar3, Param0.f_1, Param0.f_0) - Var1 };
	Var4[3 /*3*/] = { Vector(uVar3, Param0.f_1, Param0.f_0) + Var1 };
	Var4[4 /*3*/] = { Vector(uVar2, Param1.f_1, Param1.f_0) + Var1 };
	Var4[5 /*3*/] = { Vector(uVar2, Param1.f_1, Param1.f_0) - Var1 };
	Var4[6 /*3*/] = { Vector(uVar3, Param1.f_1, Param1.f_0) - Var1 };
	Var4[7 /*3*/] = { Vector(uVar3, Param1.f_1, Param1.f_0) + Var1 };
	iVar5 = 0;
	while (iVar5 < Var4.f_0)
	{
		GRAPHICS::DRAW_DEBUG_SPHERE(Var4[iVar5 /*3*/], 0.1f, iParam3, iParam4, iParam5, iParam6);
		iVar5++;
	}
	Var6[0 /*3*/] = { __LIB_22__::func_588(Var4[0 /*3*/], Var4[1 /*3*/]) };
	Var6[1 /*3*/] = { __LIB_22__::func_588(Var4[2 /*3*/], Var4[3 /*3*/]) };
	Var6[2 /*3*/] = { __LIB_22__::func_588(Var4[4 /*3*/], Var4[5 /*3*/]) };
	Var6[3 /*3*/] = { __LIB_22__::func_588(Var4[6 /*3*/], Var4[7 /*3*/]) };
	iVar5 = 0;
	while (iVar5 < Var6.f_0)
	{
		GRAPHICS::DRAW_DEBUG_SPHERE(Var6[iVar5 /*3*/], 0.1f, iParam3, iParam4, iParam5, iParam6 + 100);
		iVar5++;
	}
	__LIB_24__::func_741(Var4[0 /*3*/], Var4[1 /*3*/], Var4[2 /*3*/], Var4[3 /*3*/], Var4[4 /*3*/], Var4[5 /*3*/], Var4[6 /*3*/], Var4[7 /*3*/], iParam3, iParam4, iParam5, iParam6);
}

void func_690()//Position - 0x37492D
{
	int iVar0;
	bool bVar1;
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (__LIB_2__::func_613(iVar0, &bVar1))
		{
			__LIB_3__::func_208(iVar0);
		}
		else
		{
			Global_2667225.f_16 = 1;
		}
		if (bVar1)
		{
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iVar0);
		}
	}
	else
	{
		Global_2667225.f_16 = 1;
	}
}

void func_691(int* iParam0, bool bParam1, bool bParam2, int* iParam3, var uParam4)//Position - 0x3A1048
{
	bool bVar0;
	int iVar1;
	float fVar2;
	bVar0 = (BitTest(iParam3->f_4, bParam1) || __LIB_19__::func_126(Global_4980736.f_63312[bParam1 /*183*/].f_7));
	iVar1 = __LIB_21__::func_345(uParam4->f_566);
	if (iVar1 == 0)
	{
		iVar1 = *uParam4;
	}
	if (bVar0 && !__LIB_21__::func_993(iParam0))
	{
		__LIB_21__::func_999(uParam4, bParam1, *iParam0, "Warning_Loop", "DLC_AW_Arena_Trap_Mines_Sounds");
	}
	else
	{
		__LIB_22__::func_612(uParam4, bParam1);
	}
	if (uParam4->f_236 == bParam1 || uParam4->f_203[bParam1] < (__LIB_23__::func_332(Global_4980736.f_63312[bParam1 /*183*/].f_7) * 4f))
	{
		fVar2 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(*iParam0, true), ENTITY::GET_ENTITY_COORDS(*uParam4, true));
		uParam4->f_203[bParam1] = fVar2;
	}
	else
	{
		fVar2 = uParam4->f_203[bParam1];
	}
	if (__LIB_21__::func_998())
	{
		if ((((ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_OBJECT(*iParam0) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(*iParam0)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(*iParam0)) || OBJECT::HAS_OBJECT_BEEN_BROKEN(*iParam0, 0)) || !__LIB_0__::func_490(ENTITY::GET_ENTITY_COORDS(*iParam0, true), Global_4980736.f_63312[bParam1 /*183*/], 0.2f, 0))
		{
			bParam2 = true;
			bVar0 = true;
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(*iParam0, *uParam4, true))
			{
				iVar1 = *uParam4;
			}
		}
	}
	if (!__LIB_21__::func_998())
	{
		bVar0 = false;
	}
	if (!ENTITY::IS_ENTITY_VISIBLE(*iParam0))
	{
		return;
	}
	if (fVar2 < __LIB_23__::func_332(Global_4980736.f_63312[bParam1 /*183*/].f_7) || bParam2)
	{
		if (!BitTest(uParam4->f_202, bParam1) || bParam2)
		{
			if (bVar0 || bParam2)
			{
				if (iVar1 == *uParam4)
				{
					if (__LIB_22__::func_3(*iParam0))
					{
						FIRE::ADD_OWNED_EXPLOSION(*uParam4, ENTITY::GET_ENTITY_COORDS(*iParam0, true), 71, 1f, true, false, 1f);
						ENTITY::SET_ENTITY_HEALTH(*iParam0, 0, *uParam4);
						OBJECT::DELETE_OBJECT(iParam0);
						if (ENTITY::GET_ENTITY_SPEED(*uParam4) > 15f)
						{
							__LIB_24__::func_117(31, 0, 0, 0, 1);
						}
					}
					else
					{
						NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(*iParam0);
					}
				}
				MISC::SET_BIT(&(uParam4->f_202), bParam1);
			}
			else if (__LIB_21__::func_998())
			{
				__LIB_22__::func_290(bParam1);
				MISC::SET_BIT(&(uParam4->f_202), bParam1);
			}
		}
	}
	else if (BitTest(uParam4->f_202, bParam1))
	{
		MISC::CLEAR_BIT(&(uParam4->f_202), bParam1);
	}
}

void func_692(var uParam0)//Position - 0x3B9BFA
{
	__LIB_21__::func_671(1000);
	__LIB_21__::func_668(3);
	__LIB_24__::func_157(uParam0->f_2);
}

struct<5> func_693(int iParam0, struct<3> Param1, int iParam2, int iParam3, int iParam4, bool bParam5)//Position - 0x435154
{
	struct<5> Var0;
	int iVar1;
	struct<5> Var2;
	int iVar3;
	if (__LIB_23__::func_532() == -1)
	{
		return Var0;
	}
	iVar1 = __LIB_23__::func_531(-1);
	if (iVar1 == -1)
	{
		return Var0;
	}
	Var2.f_0 = iParam0;
	Var2.f_1 = { Param1 };
	if (__LIB_23__::func_536(&Var2) != -1)
	{
		return Var0;
	}
	MISC::SET_BIT(&iParam2, 5);
	Var2.f_4 = OBJECT::CREATE_NON_NETWORKED_AMBIENT_PICKUP(iParam0, Param1, iParam2, iParam3, iParam4, bParam5, false);
	iVar3 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	if (bParam5)
	{
		Global_1911933[iVar3 /*260*/].f_94.f_21[iVar1 /*14*/].f_12 = SCRIPT::GET_HASH_OF_THIS_SCRIPT_NAME();
		Global_1911933[iVar3 /*260*/].f_94.f_21[iVar1 /*14*/].f_13 = NETWORK::NETWORK_GET_POSITION_HASH_OF_THIS_SCRIPT();
		if (Global_1911933[iVar3 /*260*/].f_94.f_21[iVar1 /*14*/].f_13 == 0)
		{
			Global_1911933[iVar3 /*260*/].f_94.f_21[iVar1 /*14*/].f_13 = NETWORK::NETWORK_GET_INSTANCE_ID_OF_THIS_SCRIPT();
			Global_1911933[iVar3 /*260*/].f_94.f_21[iVar1 /*14*/].f_11 = 1;
		}
		else
		{
			Global_1911933[iVar3 /*260*/].f_94.f_21[iVar1 /*14*/].f_11 = 2;
		}
	}
	Global_1911933[iVar3 /*260*/].f_94.f_21[iVar1 /*14*/] = { Var2 };
	Global_1911933[iVar3 /*260*/].f_94.f_21[iVar1 /*14*/].f_5 = { Param1 };
	Global_1911933[iVar3 /*260*/].f_94.f_21[iVar1 /*14*/].f_8 = iParam2;
	Global_1911933[iVar3 /*260*/].f_94.f_21[iVar1 /*14*/].f_9 = iParam3;
	Global_1911933[iVar3 /*260*/].f_94.f_21[iVar1 /*14*/].f_10 = iParam4;
	return Var2;
}

void func_694(var uParam0, var uParam1)//Position - 0x4B4D86
{
	int iVar0;
	var uVar1;
	int iVar2;
	struct<16> Var3;
	var uVar4;
	int iVar5;
	struct<16> Var6;
	int iVar7;
	int iVar8;
	bool bVar9;
	if (!__LIB_0__::func_261() || !__LIB_2__::func_40(PLAYER::PLAYER_ID(), 0))
	{
		return;
	}
	iVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(__LIB_1__::func_4());
	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		iVar8 = -1;
		if (Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_119 == 4 || Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_119 == 5)
		{
			bVar9 = true;
		}
		if ((uParam0[0 /*42*/])->f_1 == iVar0)
		{
			if (Global_4718592 == 1)
			{
				if (Global_1836576)
				{
					uVar1 = (uParam0[0 /*42*/])->f_4;
				}
				else
				{
					uVar1 = (uParam0[0 /*42*/])->f_9;
				}
			}
			else if (bVar9)
			{
				uVar1 = (uParam0[0 /*42*/])->f_5;
			}
			else
			{
				uVar1 = (uParam0[0 /*42*/])->f_7;
			}
			iVar2 = 1;
			if ((*uParam0)[1 /*42*/] != -1)
			{
				Var3 = { *(uParam1[(*uParam0)[0 /*42*/] /*16*/]) };
				if (Global_4718592 == 1)
				{
					if (Global_1836576)
					{
						uVar4 = (uParam0[1 /*42*/])->f_4;
					}
					else
					{
						uVar4 = (uParam0[1 /*42*/])->f_9;
					}
				}
				else if (bVar9)
				{
					uVar1 = (uParam0[1 /*42*/])->f_5;
				}
				else
				{
					uVar1 = (uParam0[1 /*42*/])->f_7;
				}
				iVar5 = 2;
				Var6 = { *(uParam1[(*uParam0)[1 /*42*/] /*16*/]) };
			}
		}
		else
		{
			if ((*uParam0)[0 /*42*/] != -1)
			{
				if (Global_4718592 == 1)
				{
					if (Global_1836576)
					{
						uVar1 = (uParam0[0 /*42*/])->f_4;
					}
					else
					{
						uVar1 = (uParam0[0 /*42*/])->f_9;
					}
				}
				else if (bVar9)
				{
					uVar1 = (uParam0[0 /*42*/])->f_5;
				}
				else
				{
					uVar1 = (uParam0[0 /*42*/])->f_7;
				}
				iVar2 = 1;
				Var3 = { *(uParam1[(*uParam0)[0 /*42*/] /*16*/]) };
			}
			iVar7 = 0;
			while (iVar7 <= (*uParam0 - 1))
			{
				if (iVar0 == (uParam0[iVar7 /*42*/])->f_1)
				{
					iVar8 = iVar7;
					iVar7 = (*uParam0 - 1);
				}
				iVar7++;
			}
			if (iVar8 != -1)
			{
				if ((*uParam0)[iVar8 /*42*/] != -1)
				{
					if (Global_4718592 == 1)
					{
						if (Global_1836576)
						{
							uVar4 = (uParam0[iVar8 /*42*/])->f_4;
						}
						else
						{
							uVar4 = (uParam0[iVar8 /*42*/])->f_9;
						}
					}
					else if (bVar9)
					{
						uVar4 = (uParam0[iVar8 /*42*/])->f_5;
					}
					else
					{
						uVar4 = (uParam0[iVar8 /*42*/])->f_7;
					}
					iVar5 = iVar8;
					Var6 = { *(uParam1[(*uParam0)[iVar8 /*42*/] /*16*/]) };
				}
			}
		}
		__LIB_23__::func_623(uVar1, iVar2, &Var3, uVar4, iVar5, &Var6);
	}
}

void func_695()//Position - 0x506772
{
	int iVar0;
	if (((((((__LIB_0__::func_448(0) && INTERIOR::IS_VALID_INTERIOR(Global_1966067)) && INTERIOR::IS_INTERIOR_READY(Global_1966067)) && !BitTest(Global_1965531, 0)) && !__LIB_0__::func_80()) && !__LIB_2__::func_40(PLAYER::PLAYER_ID(), 0)) && !Global_2787908) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
		}
		else
		{
			return;
		}
		if (INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) != Global_1966067 || INTERIOR::GET_INTERIOR_FROM_ENTITY(iVar0) != Global_1966067)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0, false))
			{
				INTERIOR::RETAIN_ENTITY_IN_INTERIOR(iVar0, Global_1966067);
				INTERIOR::FORCE_ROOM_FOR_ENTITY(iVar0, Global_1966067, joaat("Arena_Room"));
			}
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				INTERIOR::RETAIN_ENTITY_IN_INTERIOR(PLAYER::PLAYER_PED_ID(), Global_1966067);
				INTERIOR::FORCE_ROOM_FOR_ENTITY(PLAYER::PLAYER_PED_ID(), Global_1966067, joaat("Arena_Room"));
			}
		}
	}
}

int func_696()//Position - 0x50C9D4
{
	if (__LIB_10__::func_965())
	{
		if (__LIB_10__::func_260())
		{
			return 1;
		}
	}
	return 0;
}

int func_697()//Position - 0x5137AD
{
	if (__LIB_2__::func_40(PLAYER::PLAYER_ID(), 0))
	{
		if ((Global_1574964 == 1 || Global_1836598 == 1) || __LIB_10__::func_768(PLAYER::PLAYER_ID()))
		{
			return 1;
		}
	}
	return 0;
}

int func_698(int iParam0)//Position - 0x521767
{
	if (__LIB_15__::func_270(iParam0))
	{
		return 1;
	}
	else if (__LIB_15__::func_269(iParam0))
	{
		return 2;
	}
	else if (__LIB_15__::func_268(iParam0))
	{
		return 3;
	}
	return 1;
}

int func_699(char* sParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8)//Position - 0x530D70
{
	int iVar0;
	struct<16> Var1;
	bool bVar2;
	bool bVar3;
	iVar0 = -1;
	if (NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), bParam1) || iParam5)
	{
		if (!bParam4)
		{
			StringCopy(&Var1, PLAYER::GET_PLAYER_NAME(bParam1), 64);
		}
		else
		{
			StringCopy(&Var1, PLAYER::GET_PLAYER_NAME(bParam1), 64);
		}
		if (MISC::IS_STRING_NULL_OR_EMPTY(&Var1))
		{
		}
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(sParam0);
		HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(iParam2);
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(__LIB_2__::func_49(&Var1));
		HUD::ADD_TEXT_COMPONENT_INTEGER(iParam3);
		if (!bParam6)
		{
			iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(false, true);
		}
		else
		{
			Global_2787505 = { __LIB_1__::func_696(bParam1) };
			if (NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2787435, 35, &Global_2787505))
			{
				bVar2 = false;
				if (MISC::ARE_STRINGS_EQUAL(&(Global_2787435.f_22), "Leader") && Global_2787435.f_30 == 0)
				{
					bVar2 = true;
				}
				if (Global_2787435.f_21 > 0)
				{
					bVar3 = false;
				}
				else
				{
					bVar3 = true;
				}
				if (bParam7)
				{
					if (bParam8)
					{
						Var1 = { __LIB_2__::func_828(&Var1) };
					}
					iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_CREWTAG_WITH_GAME_NAME(bVar3, NETWORK::NETWORK_CLAN_IS_ROCKSTAR_CLAN(&Global_2787435, 35), &(Global_2787435.f_17), Global_2787435.f_30, bVar2, false, Global_2787435, &Var1, Global_1576215, Global_1576216, Global_1576217);
				}
				else
				{
					iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_CREWTAG(bVar3, NETWORK::NETWORK_CLAN_IS_ROCKSTAR_CLAN(&Global_2787435, 35), &(Global_2787435.f_17), Global_2787435.f_30, bVar2, false, Global_2787435, Global_1576215, Global_1576216, Global_1576217);
				}
			}
			else
			{
				iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(false, true);
			}
		}
		__LIB_2__::func_158(14, sParam0, 1, &Var1, 0, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

int func_700(char* sParam0, int iParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7)//Position - 0x5372DA
{
	int iVar0;
	struct<16> Var1;
	bool bVar2;
	bool bVar3;
	iVar0 = -1;
	if (NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), iParam1) || iParam4)
	{
		if (!bParam3)
		{
			StringCopy(&Var1, PLAYER::GET_PLAYER_NAME(iParam1), 64);
		}
		else
		{
			StringCopy(&Var1, PLAYER::GET_PLAYER_NAME(iParam1), 64);
		}
		if (MISC::IS_STRING_NULL_OR_EMPTY(&Var1))
		{
		}
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(sParam0);
		HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(iParam2);
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(__LIB_2__::func_49(&Var1));
		if (!bParam5)
		{
			iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(false, true);
		}
		else
		{
			Global_2787505 = { __LIB_1__::func_696(iParam1) };
			if (NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2787435, 35, &Global_2787505))
			{
				bVar2 = false;
				if (MISC::ARE_STRINGS_EQUAL(&(Global_2787435.f_22), "Leader") && Global_2787435.f_30 == 0)
				{
					bVar2 = true;
				}
				if (Global_2787435.f_21 > 0)
				{
					bVar3 = false;
				}
				else
				{
					bVar3 = true;
				}
				if (bParam6)
				{
					if (bParam7)
					{
						Var1 = { __LIB_2__::func_828(&Var1) };
					}
					iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_CREWTAG_WITH_GAME_NAME(bVar3, NETWORK::NETWORK_CLAN_IS_ROCKSTAR_CLAN(&Global_2787435, 35), &(Global_2787435.f_17), Global_2787435.f_30, bVar2, false, Global_2787435, &Var1, Global_1576215, Global_1576216, Global_1576217);
				}
				else
				{
					iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_CREWTAG(bVar3, NETWORK::NETWORK_CLAN_IS_ROCKSTAR_CLAN(&Global_2787435, 35), &(Global_2787435.f_17), Global_2787435.f_30, bVar2, false, Global_2787435, Global_1576215, Global_1576216, Global_1576217);
				}
			}
			else
			{
				iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(false, true);
			}
		}
		__LIB_2__::func_158(14, sParam0, 1, &Var1, 0, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_701()//Position - 0x54C70E
{
	if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_STUNGUN"), false))
	{
		WEAPON::REMOVE_WEAPON_FROM_PED(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_STUNGUN"));
	}
	if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_RAILGUN"), false))
	{
		WEAPON::REMOVE_WEAPON_FROM_PED(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_RAILGUN"));
	}
	if (!__LIB_9__::func_237(PLAYER::PLAYER_ID()))
	{
		if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_METALDETECTOR"), false))
		{
			WEAPON::REMOVE_WEAPON_FROM_PED(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_METALDETECTOR"));
		}
	}
}

void func_702()//Position - 0xD498
{
	__LIB_1__::func_33(0);
	__LIB_8__::func_878();
	if (!HUD::IS_PAUSE_MENU_ACTIVE())
	{
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 172 /*INPUT_CELLPHONE_UP*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 17 /*INPUT_SELECT_PREV_WEAPON*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 16 /*INPUT_SELECT_NEXT_WEAPON*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 15 /*INPUT_WEAPON_WHEEL_PREV*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 14 /*INPUT_WEAPON_WHEEL_NEXT*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 13 /*INPUT_WEAPON_WHEEL_LR*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 12 /*INPUT_WEAPON_WHEEL_UD*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 2 /*INPUT_LOOK_UD*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 1 /*INPUT_LOOK_LR*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 22 /*INPUT_JUMP*/, true);
		PAD::DISABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 206 /*INPUT_FRONTEND_RB*/, true);
		PAD::DISABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 205 /*INPUT_FRONTEND_LB*/, true);
		PAD::DISABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/, true);
		PAD::DISABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 0 /*INPUT_NEXT_CAMERA*/, true);
		PAD::DISABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 244 /*INPUT_INTERACTION_MENU*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 199 /*INPUT_FRONTEND_PAUSE*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 200 /*INPUT_FRONTEND_PAUSE_ALTERNATE*/, true);
	}
}

int func_703(int iParam0, bool bParam1)//Position - 0x60F53
{
	var uVar0;
	int iVar1;
	if (bParam1)
	{
		if (iParam0 == 15)
		{
			return 1;
		}
	}
	if (__LIB_5__::func_850(PLAYER::PLAYER_ID()))
	{
		switch (iParam0)
		{
			case 4:
			case 5:
			case 12:
			case 15:
				return 1;
				break;
			}
	}
	uVar0 = __LIB_23__::func_312(iParam0);
	iVar1 = iParam0;
	return BitTest(uVar0, __LIB_0__::func_160(iVar1));
}

int func_704(bool bParam0)//Position - 0xF0F3C
{
	if (__LIB_1__::func_155())
	{
		if (bParam0)
		{
			if (!Global_1836579 && !__LIB_10__::func_167(PLAYER::PLAYER_ID(), 2))
			{
				GRAPHICS::ANIMPOSTFX_PLAY("MinigameTransitionIn", 0, true);
				__LIB_2__::func_592(0, 0);
			}
		}
		return 1;
	}
	return 0;
}

void func_705(var uParam0, var uParam1, var uParam2, int iParam3, bool bParam4)//Position - 0x121004
{
	int iVar0;
	struct<8> Var1;
	char cVar2[64];
	int iVar3;
	struct<8> Var4;
	char cVar5[64];
	struct<8> Var6;
	char cVar7[64];
	struct<3> Var8;
	struct<3> Var9;
	struct<3> Var10;
	struct<3> Var11;
	iVar0 = 200;
	if (!PED::IS_PED_INJURED(*uParam2) && iParam3 >= 0)
	{
		PED::SET_PED_RESET_FLAG(*uParam2, 150, true);
		StringCopy(&Var1, "", 64);
		StringCopy(&cVar2, "", 64);
		StringCopy(&Var4, "", 64);
		StringCopy(&cVar5, "", 64);
		StringCopy(&Var6, "", 64);
		StringCopy(&cVar7, "", 64);
		if (iVar0 == iVar0)
		{
			iVar0 = iVar0;
		}
		__LIB_21__::func_823(uParam0, &Var1, &cVar2, bParam4);
		if (__LIB_22__::func_236(uParam0, uParam0->f_1[bParam4]))
		{
			__LIB_21__::func_817(uParam0, &Var6, &cVar7, bParam4);
		}
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var6))
		{
			STREAMING::REQUEST_ANIM_DICT(&Var6);
		}
		if (MISC::IS_STRING_NULL_OR_EMPTY(&Var1))
		{
		}
		else
		{
			__LIB_1__::func_57(uParam1, &Var4, &cVar5, PED::IS_PED_MALE(*uParam2));
			__LIB_24__::func_222(uParam0, uParam1, *uParam2);
			__LIB_24__::func_32(uParam0, uParam1, uParam2, bParam4);
			__LIB_22__::func_235(uParam0, uParam1);
			if (uParam1->f_449 != 0)
			{
				if ((!MISC::IS_STRING_NULL_OR_EMPTY(&Var1) && !MISC::IS_STRING_NULL_OR_EMPTY(&Var4)) && (MISC::IS_STRING_NULL_OR_EMPTY(&Var6) || STREAMING::HAS_ANIM_DICT_LOADED(&Var6)))
				{
					STREAMING::REQUEST_ANIM_DICT(&Var1);
					STREAMING::REQUEST_ANIM_DICT(&Var4);
					if (((STREAMING::HAS_ANIM_DICT_LOADED(&Var1) && STREAMING::HAS_ANIM_DICT_LOADED(&Var4)) && __LIB_1__::func_56(iVar3, 0)) && __LIB_24__::func_221(uParam0))
					{
						switch (uParam1->f_450)
						{
							case 0:
								if (iParam3 > -1)
								{
									if (!BitTest(uParam1->f_426, bParam4))
									{
										Global_1931427 = 1;
										__LIB_22__::func_361(uParam0, iParam3, &Var8, &Var9, bParam4);
										uParam1->f_438 = PED::CREATE_SYNCHRONIZED_SCENE(Var8, Var9, 2);
										Var10 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION(&Var1, &cVar2, Var8, Var9, 0f, 2) };
										Var11 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION(&Var1, &cVar2, Var8, Var9, 0f, 2) };
										if ((__LIB_22__::func_236(uParam0, uParam0->f_1[bParam4]) && ENTITY::DOES_ENTITY_EXIST(uParam1->f_442[bParam4])) && !MISC::IS_STRING_NULL_OR_EMPTY(&cVar7))
										{
											ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(uParam1->f_442[bParam4], uParam1->f_438, &cVar7, &Var6, 1000f, -1000f, 0, 1000f);
										}
										TASK::TASK_SYNCHRONIZED_SCENE(*uParam2, uParam1->f_438, &Var1, &cVar2, 1000f, -8f, 0, 0, 1000f, 31);
										if (bParam4 >= 0 && bParam4 < 32)
										{
											MISC::SET_BIT(&(uParam1->f_426), bParam4);
										}
									}
									else
									{
										uParam1->f_450++;
									}
								}
								else
								{
									uParam1->f_450 = 2;
								}
								break;
							case 1:
								if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uParam1->f_438))
								{
									if (iVar3 == 8)
									{
										__LIB_1__::func_51(uParam1, uParam2);
									}
									if (iVar3 == 9)
									{
										__LIB_1__::func_50(uParam1, uParam2);
									}
									if (uParam1->f_1196)
									{
										if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uParam1->f_438) < 0.98f)
										{
											if (iVar3 == 8)
											{
												__LIB_1__::func_51(uParam1, uParam2);
											}
											if (iVar3 == 9)
											{
												__LIB_1__::func_50(uParam1, uParam2);
											}
										}
										else
										{
											TASK::TASK_PLAY_ANIM_ADVANCED(*uParam2, &Var4, &cVar5, ENTITY::GET_ENTITY_COORDS(*uParam2, true), ENTITY::GET_ENTITY_ROTATION(*uParam2, 2), 2f, -8f, -1, 0, 0f, 2, 31);
											uParam1->f_450++;
										}
									}
								}
								break;
							case 2:
								break;
						}
					}
					else
					{
						if (!STREAMING::HAS_ANIM_DICT_LOADED(&Var1))
						{
						}
						if (!__LIB_1__::func_56(iVar3, 0))
						{
						}
						if (!STREAMING::HAS_ANIM_DICT_LOADED(&Var4))
						{
						}
						if (!__LIB_24__::func_221(uParam0))
						{
						}
					}
				}
			}
		}
	}
	else
	{
		if (PED::IS_PED_INJURED(*uParam2))
		{
		}
		if (iParam3 < 0)
		{
		}
	}
}

bool func_706(int iParam0, int iParam1)//Position - 0x1354D2
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = __LIB_24__::func_226(iParam0, iParam1);
	iVar1 = (iVar0 / 32);
	iVar2 = (iVar0 % 32);
	return BitTest(Global_1965427[iVar1], iVar2);
}

int func_707(int iParam0)//Position - 0x1380BE
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	if (__LIB_24__::func_44(iParam0))
	{
		return 3;
	}
	else if (__LIB_24__::func_43())
	{
		return 2;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = (iVar1 + __LIB_24__::func_229(iVar0));
		iVar0++;
	}
	iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(1, iVar1 + 1);
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar3 = iVar0;
		if (iVar2 <= __LIB_24__::func_229(iVar3))
		{
			return iVar3;
		}
		else
		{
			iVar2 = (iVar2 - __LIB_24__::func_229(iVar3));
		}
		iVar0++;
	}
	return 4;
}

void func_708(var uParam0)//Position - 0x196C87
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_122))
	{
		if (!__LIB_11__::func_155(*uParam0, uParam0->f_1))
		{
			STREAMING::REMOVE_ANIM_DICT(__LIB_24__::func_262(uParam0, 0, 0));
		}
		if (__LIB_16__::func_816(*uParam0, uParam0->f_1))
		{
			STREAMING::REMOVE_ANIM_DICT(__LIB_24__::func_262(uParam0, 1, 0));
		}
		if (__LIB_16__::func_815(*uParam0, uParam0->f_1))
		{
			STREAMING::REMOVE_ANIM_DICT(__LIB_24__::func_262(uParam0, 0, 1));
		}
	}
}

int func_709(var uParam0)//Position - 0x1974E5
{
	if (uParam0->f_124.f_425)
	{
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_122, false))
		{
			if (uParam0->f_105)
			{
				if (uParam0->f_103 == 2)
				{
					if (__LIB_18__::func_458(uParam0->f_122) && TASK::IS_PLAYING_PHONE_GESTURE_ANIM(uParam0->f_122))
					{
						return 1;
					}
				}
			}
			else if (ENTITY::IS_ENTITY_PLAYING_ANIM(uParam0->f_122, __LIB_24__::func_262(uParam0, 0, 0), &(uParam0->f_124.f_241), 3))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_710(var uParam0, int iParam1)//Position - 0x19762D
{
	if (uParam0->f_105)
	{
		if (iParam1 == uParam0->f_103)
		{
			if (__LIB_18__::func_458(uParam0->f_122) && TASK::IS_PLAYING_PHONE_GESTURE_ANIM(uParam0->f_122))
			{
				return 0;
			}
		}
	}
	else if (!ENTITY::HAS_ENTITY_ANIM_FINISHED(uParam0->f_122, __LIB_24__::func_262(uParam0, 0, 0), __LIB_22__::func_263(uParam0, iParam1), 3))
	{
		return 0;
	}
	return 1;
}

int func_711(var uParam0, int iParam1, bool bParam2, var uParam3, bool bParam4)//Position - 0x1976F6
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	char* sVar5;
	char* sVar6;
	float fVar7;
	int iVar8;
	sVar5 = __LIB_24__::func_262(uParam0, 0, 0);
	sVar6 = __LIB_22__::func_263(uParam0, iParam1);
	if (uParam0->f_105)
	{
		if (__LIB_18__::func_458(uParam0->f_122) && TASK::IS_PLAYING_PHONE_GESTURE_ANIM(uParam0->f_122))
		{
			fVar0 = TASK::GET_PHONE_GESTURE_ANIM_CURRENT_TIME(uParam0->f_122);
			fVar2 = TASK::GET_PHONE_GESTURE_ANIM_TOTAL_TIME(uParam0->f_122);
		}
		else
		{
			return 0;
		}
	}
	else if (ENTITY::IS_ENTITY_PLAYING_ANIM(uParam0->f_122, sVar5, sVar6, 3))
	{
		fVar0 = ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(uParam0->f_122, sVar5, sVar6);
		fVar2 = ENTITY::GET_ENTITY_ANIM_TOTAL_TIME(uParam0->f_122, sVar5, sVar6);
	}
	else
	{
		return 0;
	}
	if (fVar0 < 0f)
	{
		return 0;
	}
	fVar1 = (fVar0 * fVar2);
	if (fVar0 < *uParam3)
	{
		*uParam3 = fVar0;
	}
	fVar4 = ((fVar0 - *uParam3) * fVar2);
	*uParam3 = fVar0;
	if (*uParam3 < 0f)
	{
		*uParam3 = 0f;
	}
	fVar4 = (fVar4 + 0.001f);
	if (bParam4)
	{
		if (fVar1 < fVar4)
		{
			return 1;
		}
	}
	switch (uParam0->f_103)
	{
		case 0:
			fVar7 = 0f;
			break;
		case 1:
			if (!bParam2)
			{
				fVar7 = 0f;
			}
			else
			{
				fVar7 = 0.25f;
			}
			break;
		case 2:
			fVar7 = 0.25f;
			break;
	}
	if (uParam0->f_105)
	{
		iVar8 = 1;
	}
	else
	{
		iVar8 = 1;
	}
	fVar3 = ((fVar2 - (fVar7 * 1000f)) - (fVar4 * SYSTEM::TO_FLOAT(iVar8)));
	if (fVar1 >= fVar3)
	{
		return 1;
	}
	return 0;
}

int func_712(var uParam0)//Position - 0x19784E
{
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_122, false))
	{
		if (uParam0->f_105)
		{
			if (uParam0->f_103 == 1)
			{
				if (uParam0->f_124.f_425)
				{
					return 1;
				}
				else if (__LIB_18__::func_458(uParam0->f_122) && TASK::IS_PLAYING_PHONE_GESTURE_ANIM(uParam0->f_122))
				{
					return 1;
				}
			}
		}
		else if (ENTITY::IS_ENTITY_PLAYING_ANIM(uParam0->f_122, __LIB_24__::func_262(uParam0, 0, 0), &(uParam0->f_124.f_225), 3))
		{
			return 1;
		}
	}
	return 0;
}

int func_713(var uParam0)//Position - 0x1979A5
{
	if (uParam0->f_124.f_425)
	{
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_122, false))
		{
			if (uParam0->f_105)
			{
				if (uParam0->f_103 == 0)
				{
					if (uParam0->f_124.f_425)
					{
						return 1;
					}
					else if (__LIB_18__::func_458(uParam0->f_122) && TASK::IS_PLAYING_PHONE_GESTURE_ANIM(uParam0->f_122))
					{
						return 1;
					}
				}
			}
			else if (ENTITY::IS_ENTITY_PLAYING_ANIM(uParam0->f_122, __LIB_24__::func_262(uParam0, 0, 0), &(uParam0->f_124.f_209), 3))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_714(var uParam0)//Position - 0x197A42
{
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_122, false))
	{
		if (uParam0->f_105)
		{
			if (uParam0->f_103 == 3)
			{
				if (__LIB_18__::func_458(uParam0->f_122) && TASK::IS_PLAYING_PHONE_GESTURE_ANIM(uParam0->f_122))
				{
					return 1;
				}
			}
		}
		else if (ENTITY::IS_ENTITY_PLAYING_ANIM(uParam0->f_122, __LIB_24__::func_262(uParam0, 1, 0), &(uParam0->f_124.f_257), 3))
		{
			return 1;
		}
	}
	return 0;
}

float func_715(var uParam0)//Position - 0x197BB6
{
	int iVar0;
	char* sVar1;
	char* sVar2;
	float fVar3;
	if (uParam0->f_103 == 3)
	{
		iVar0 = 1;
	}
	sVar1 = __LIB_24__::func_262(uParam0, iVar0, uParam0->f_105);
	sVar2 = __LIB_24__::func_100(uParam0);
	fVar3 = 0f;
	if (uParam0->f_105)
	{
		if (__LIB_18__::func_458(uParam0->f_122))
		{
			if (__LIB_18__::func_458(uParam0->f_122) && TASK::IS_PLAYING_PHONE_GESTURE_ANIM(uParam0->f_122))
			{
				fVar3 = TASK::GET_PHONE_GESTURE_ANIM_CURRENT_TIME(uParam0->f_122);
			}
		}
	}
	else if (ENTITY::IS_ENTITY_PLAYING_ANIM(uParam0->f_122, sVar1, sVar2, 3))
	{
		fVar3 = ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(uParam0->f_122, sVar1, sVar2);
	}
	if (fVar3 < 0f)
	{
		fVar3 = uParam0->f_110;
	}
	return fVar3;
}

int func_716(var uParam0)//Position - 0x19A1F7
{
	char* sVar0;
	char* sVar1;
	int iVar2;
	if (uParam0->f_112)
	{
		if (uParam0->f_103 == 3)
		{
			iVar2 = 1;
		}
		sVar1 = __LIB_24__::func_262(uParam0, iVar2, uParam0->f_105);
		sVar0 = __LIB_24__::func_100(uParam0);
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(uParam0->f_122, sVar1, sVar0, 3))
		{
			if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(uParam0->f_122, sVar1, sVar0) >= uParam0->f_110)
			{
				return 1;
			}
			else
			{
				ENTITY::SET_ENTITY_ANIM_CURRENT_TIME(uParam0->f_122, sVar1, sVar0, uParam0->f_110);
			}
		}
	}
	return 0;
}

void func_717(var uParam0, int iParam1, bool bParam2, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8)//Position - 0x19A8CF
{
	struct<20> Var0;
	struct<22> Var1;
	char* sVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	int iVar8;
	float fVar9;
	var uVar10;
	float fVar11;
	float fVar12;
	int iVar13;
	char cVar14[64];
	Var0.f_4 = 1065353216;
	Var0.f_5 = 1065353216;
	Var0.f_9 = 1065353216;
	Var0.f_10 = 1065353216;
	Var0.f_14 = 1065353216;
	Var0.f_15 = 1065353216;
	Var0.f_17 = 1040187392;
	Var0.f_18 = 1040187392;
	Var0.f_19 = -1;
	Var1.f_4 = 1065353216;
	Var1.f_5 = 1065353216;
	Var1.f_9 = 1065353216;
	Var1.f_10 = 1065353216;
	Var1.f_14 = 1065353216;
	Var1.f_15 = 1065353216;
	Var1.f_17 = 1040187392;
	Var1.f_18 = 1040187392;
	Var1.f_19 = -1;
	iVar3 = 0;
	iVar4 = 0;
	uParam0->f_105 = 0;
	if (__LIB_16__::func_801() && uParam0->f_122 == PLAYER::PLAYER_PED_ID())
	{
		uParam0->f_105 = 1;
	}
	if (bParam6)
	{
		fParam3 = 0.01f;
	}
	uParam0->f_106 = 0;
	if (uParam0->f_122 == PLAYER::PLAYER_PED_ID())
	{
		if (!bParam6)
		{
			if (__LIB_7__::func_691())
			{
				uParam0->f_106 = 1;
			}
		}
	}
	Var1.f_0 = 1;
	Var1.f_3 = fParam3;
	Var1.f_8 = fParam3;
	Var1.f_13 = fParam3;
	Var1.f_4 = 1f;
	uParam0->f_103 = iParam1;
	bVar7 = true;
	if (__LIB_4__::func_358(PLAYER::PLAYER_ID()))
	{
		bVar7 = false;
	}
	if (bVar7)
	{
		iVar3 += 32;
	}
	iVar3 += 8192;
	if ((uParam0->f_124.f_425 && !uParam0->f_103 == 2) && !uParam0->f_103 == 3)
	{
		iVar3 += 2;
		bVar5 = true;
	}
	if (uParam0->f_124.f_425 && uParam0->f_103 == 1)
	{
		iVar3++;
		bVar6 = true;
	}
	if (uParam0->f_103 == 2)
	{
		iVar3 = (iVar3 + 536870912);
	}
	iVar8 = uParam0->f_124.f_489;
	if (uParam0->f_105)
	{
		if (*uParam0 == 3)
		{
			sVar2 = "BONEMASK_HEADONLY";
			Var1.f_16 = MISC::GET_HASH_KEY(sVar2);
		}
		else
		{
			sVar2 = "BONEMASK_HEAD_NECK_AND_L_ARM";
			Var1.f_16 = MISC::GET_HASH_KEY(sVar2);
		}
	}
	else if (uParam0->f_103 == 3)
	{
		Var1.f_16 = 0;
		if (!bParam8)
		{
			iVar3 = (iVar3 + 1048576);
		}
	}
	else if (iVar8 > -1)
	{
		if (*uParam0 == 3 && uParam0->f_1 == 0)
		{
			if (!__LIB_18__::func_284(uParam0->f_122))
			{
				sVar2 = "BONEMASK_HEAD_NECK_AND_L_ARM";
				Var1.f_16 = MISC::GET_HASH_KEY(sVar2);
			}
			else
			{
				sVar2 = "FORCED_BONEMASK_HEADONLY";
				Var1.f_16 = MISC::GET_HASH_KEY(sVar2);
			}
		}
		else
		{
			switch (iVar8)
			{
				case 0:
					sVar2 = "BONEMASK_HEADONLY";
					break;
				case 1:
					sVar2 = "BONEMASK_HEAD_NECK_AND_ARMS";
					break;
				case 2:
					sVar2 = "BONEMASK_HEAD_NECK_AND_L_ARM";
					break;
				case 3:
					sVar2 = "BONEMASK_HEAD_NECK_AND_R_ARM";
					break;
			}
			Var1.f_16 = MISC::GET_HASH_KEY(sVar2);
			if (__LIB_18__::func_284(uParam0->f_122))
			{
				if (!bParam8)
				{
					iVar3 = (iVar3 + 1048576);
				}
				iVar4 += 2;
			}
		}
	}
	else if ((uParam0->f_124.f_418 && !__LIB_18__::func_284(uParam0->f_122)) && !PED::IS_PED_IN_ANY_VEHICLE(uParam0->f_122, false))
	{
		if (iVar8 == -2)
		{
			sVar2 = "";
			Var1.f_16 = 0;
		}
		else
		{
			sVar2 = "BONEMASK_HEAD_NECK_AND_L_ARM";
			Var1.f_16 = MISC::GET_HASH_KEY(sVar2);
		}
	}
	else
	{
		if (__LIB_22__::func_267(uParam0->f_122))
		{
			sVar2 = "";
			Var1.f_16 = 0;
		}
		else if (iVar8 == -2)
		{
			sVar2 = "";
			Var1.f_16 = 0;
		}
		else if (iVar8 == -3 && __LIB_24__::func_261(uParam0->f_122))
		{
			sVar2 = "";
			Var1.f_16 = 0;
			uParam0->f_102 = 1;
		}
		else
		{
			uParam0->f_102 = 0;
			sVar2 = __LIB_18__::func_280(*uParam0, uParam0->f_1);
			Var1.f_16 = MISC::GET_HASH_KEY(sVar2);
		}
		iVar3 = (iVar3 + 1048576);
		iVar4 += 2;
	}
	if (__LIB_18__::func_266(uParam0))
	{
		if (!iVar4 & 2 == 0)
		{
			iVar4 = (iVar4 - 2);
		}
		if (!PED::IS_PED_IN_ANY_VEHICLE(uParam0->f_122, false))
		{
			Var1.f_16 = 0;
		}
		iVar4 += 1024;
		iVar4 += 2048;
		iVar3 = (iVar3 + 268435456);
		if (!PED::IS_PED_IN_ANY_VEHICLE(uParam0->f_122, false))
		{
			iVar3 += 16;
		}
		if (iVar3 & 1048576 == 0)
		{
			iVar3 = (iVar3 + 1048576);
		}
	}
	switch (uParam0->f_103)
	{
		case 1:
			Var1.f_2 = __LIB_1__::func_601(&(uParam0->f_124.f_225));
			break;
		case 0:
			Var1.f_2 = __LIB_1__::func_601(&(uParam0->f_124.f_209));
			break;
		case 2:
			Var1.f_2 = __LIB_1__::func_601(&(uParam0->f_124.f_241));
			break;
		case 3:
			Var1.f_2 = __LIB_1__::func_601(&(uParam0->f_124.f_257));
			break;
	}
	if (!uParam0->f_103 == 3)
	{
		Var1.f_1 = __LIB_24__::func_262(uParam0, 0, uParam0->f_105);
	}
	else
	{
		Var1.f_1 = __LIB_24__::func_262(uParam0, 1, 0);
	}
	if (!fParam3 > 0f)
	{
		if (ENTITY::FIND_ANIM_EVENT_PHASE(Var1.f_1, Var1.f_2, "START", &fVar9, &uVar10))
		{
			Var1.f_3 = fVar9;
		}
	}
	if (__LIB_4__::func_358(PLAYER::PLAYER_ID()))
	{
		if (Global_4521801.f_4 || uParam0->f_103 == 0)
		{
			Var1.f_3 = __LIB_11__::func_142(Var1.f_1, Var1.f_2);
		}
	}
	if (uParam0->f_124.f_419)
	{
		if (ENTITY::FIND_ANIM_EVENT_PHASE(Var1.f_1, Var1.f_2, "CREATE", &fVar9, &uVar10) || ENTITY::FIND_ANIM_EVENT_PHASE(Var1.f_1, Var1.f_2, "Create_whiskey_bottle", &fVar9, &uVar10))
		{
			if (fVar9 <= Var1.f_3)
			{
				uParam0->f_9 = 1;
			}
		}
		else if (bParam6)
		{
			uParam0->f_9 = 1;
		}
	}
	if ((bParam5 || bParam6) || bParam7)
	{
		Var1.f_4 = 0f;
		uParam0->f_111 = 1;
	}
	else
	{
		uParam0->f_111 = 0;
	}
	switch (uParam0->f_103)
	{
		case 0:
			if (PED::IS_PED_IN_ANY_VEHICLE(uParam0->f_122, false))
			{
				fVar11 = 0.25f;
			}
			else
			{
				fVar11 = 0.5f;
			}
			fVar12 = 0f;
			break;
		case 1:
			if (bParam4)
			{
				fVar11 = 0.25f;
			}
			else
			{
				fVar11 = 0f;
			}
			if (bParam2)
			{
				fVar12 = 0.25f;
			}
			else
			{
				fVar12 = 0f;
			}
			break;
		case 2:
			if (bParam2 || bParam4)
			{
				fVar11 = 0.25f;
			}
			else
			{
				fVar11 = 0f;
			}
			if (__LIB_4__::func_358(PLAYER::PLAYER_ID()))
			{
				fVar12 = (0.25f * 2f);
			}
			else
			{
				fVar12 = 0.25f;
			}
			break;
		case 3:
			fVar11 = 0.25f;
			if (__LIB_4__::func_358(PLAYER::PLAYER_ID()))
			{
				fVar12 = (0.25f * 2f);
			}
			else
			{
				fVar12 = 0.25f;
			}
			break;
	}
	if ((Var1.f_3 > 0f && bParam4 == 0) || uParam0->f_111)
	{
		fVar11 = 0f;
	}
	if (uParam0->f_105)
	{
		iVar4 += 4;
	}
	if (uParam0->f_103 == 3)
	{
		iVar4 = 2 + 4 + 8 + 16;
	}
	uParam0->f_110 = fParam3;
	uParam0->f_104 = bParam2;
	Var1.f_20 = iVar3;
	Var1.f_21 = iVar4;
	uParam0->f_107 = iVar3;
	if (!uParam0->f_105)
	{
		TASK::TASK_CLEAR_LOOK_AT(uParam0->f_122);
	}
	iVar13 = TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_122, joaat("SCRIPT_TASK_WANDER_STANDARD"));
	if (iVar13 == 7)
	{
		iVar13 = TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_122, joaat("SCRIPT_TASK_VEHICLE_DRIVE_WANDER"));
	}
	if (((uParam0->f_103 == 3 && !bParam5) && !bParam6) && !bParam7)
	{
		StringCopy(&cVar14, Var1.f_2, 64);
		StringConCat(&cVar14, "_Facial", 64);
		PED::PLAY_FACIAL_ANIM(uParam0->f_122, &cVar14, Var1.f_1);
	}
	if ((iVar13 == 7 && (!Global_78317 || Global_1931426)) && !uParam0->f_105)
	{
		TASK::OPEN_SEQUENCE_TASK(&(uParam0->f_118));
		TASK::TASK_SCRIPTED_ANIMATION(0, &Var1, &Var0, &Var0, fVar11, fVar12);
		TASK::CLOSE_SEQUENCE_TASK(uParam0->f_118);
		TASK::TASK_PERFORM_SEQUENCE(uParam0->f_122, uParam0->f_118);
		TASK::CLEAR_SEQUENCE_TASK(&(uParam0->f_118));
	}
	else if (uParam0->f_105)
	{
		TASK::TASK_PLAY_PHONE_GESTURE_ANIMATION(uParam0->f_122, Var1.f_1, Var1.f_2, sVar2, fVar11, fVar12, bVar6, bVar5);
	}
	else
	{
		TASK::TASK_SCRIPTED_ANIMATION(uParam0->f_122, &Var1, &Var0, &Var0, fVar11, fVar12);
	}
	if (uParam0->f_1 == 1 || uParam0->f_1 == 59)
	{
		if (uParam0->f_122 == PLAYER::PLAYER_PED_ID())
		{
			if (uParam0->f_103 == 0 || uParam0->f_103 == 1)
			{
				MISC::SET_BIT(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_35), 11);
			}
			if (uParam0->f_103 == 2)
			{
				MISC::CLEAR_BIT(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_35), 10);
				MISC::CLEAR_BIT(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_35), 11);
			}
		}
	}
	if (uParam0->f_1 == 39)
	{
		if (uParam0->f_122 == PLAYER::PLAYER_PED_ID())
		{
			if (uParam0->f_103 == 2)
			{
				MISC::CLEAR_BIT(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_35), 12);
			}
		}
	}
	if (uParam0->f_1 == 62)
	{
		if (uParam0->f_122 == PLAYER::PLAYER_PED_ID())
		{
			if (uParam0->f_103 == 2)
			{
				MISC::CLEAR_BIT(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_35), 13);
			}
		}
	}
	uParam0->f_112 = 1;
}

int func_718(var uParam0, var uParam1, bool bParam2)//Position - 0x19BAF3
{
	STREAMING::REQUEST_ANIM_DICT(__LIB_24__::func_262(uParam0, uParam1, bParam2));
	if (STREAMING::HAS_ANIM_DICT_LOADED(__LIB_24__::func_262(uParam0, uParam1, bParam2)))
	{
		return 1;
	}
	else
	{
		MISC::SET_BIT(&(Global_1940663[1]), 17);
	}
	return 0;
}

void func_719(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x1A9259
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	int iVar5;
	if (((((((((MISC::ARE_STRINGS_EQUAL(&Global_1940603, "MPH_HUM_INT") || MISC::ARE_STRINGS_EQUAL(&Global_1940603, "APA_PRI_INT")) || MISC::ARE_STRINGS_EQUAL(&Global_1940603, "MPH_PRI_FIN_INT")) || MISC::ARE_STRINGS_EQUAL(&Global_1940603, "MPH_PAC_FIN_INT")) || MISC::ARE_STRINGS_EQUAL(&Global_1940603, "MPH_TUT_INT")) || MISC::ARE_STRINGS_EQUAL(&Global_1940603, "MPH_NAR_FIN_INT")) || MISC::ARE_STRINGS_EQUAL(&Global_1940603, "MPH_PRI_UNF_EXT")) || MISC::ARE_STRINGS_EQUAL(&Global_1940603, "MPH_HUM_KEY_EXT")) || MISC::ARE_STRINGS_EQUAL(&Global_1940603, "mph_pri_sta_ext")) || MISC::ARE_STRINGS_EQUAL(&Global_1940603, "mph_pri_sta_mcs2"))
	{
		__LIB_7__::func_370(&Var0, 7, Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_32);
		Global_1940603.f_19 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(Var0, 4f, joaat("prop_off_chair_01"), false, false, true);
		if (Global_1940603.f_19 != 0)
		{
			ENTITY::SET_ENTITY_VISIBLE(Global_1940603.f_19, false, false);
		}
	}
	CUTSCENE::START_CUTSCENE(0);
	if (iParam1 == -1)
	{
		iParam1 = Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_32;
	}
	if (iParam2 == 1)
	{
		__LIB_7__::func_370(&Var1, 306, iParam1);
		__LIB_7__::func_369(&Var2, 306, iParam1);
	}
	else
	{
		__LIB_7__::func_370(&Var1, iParam3, iParam1);
		__LIB_7__::func_369(&Var2, iParam3, iParam1);
	}
	if (iParam0 > 0)
	{
		__LIB_7__::func_370(&Var3, 546, iParam1);
		__LIB_7__::func_369(&Var4, 546, iParam1);
	}
	else
	{
		iParam0 = 1;
	}
	iVar5 = 0;
	while (iVar5 <= (iParam0 - 1))
	{
		if (__LIB_18__::func_222(Global_1940603))
		{
			if ((iVar5 == 2 || iVar5 == 3) || iVar5 == 4)
			{
				CUTSCENE::SET_CUTSCENE_ORIGIN(Var3, Var4.f_2, iVar5);
			}
			else
			{
				CUTSCENE::SET_CUTSCENE_ORIGIN(Var1, Var2.f_2, iVar5);
			}
		}
		else if (__LIB_18__::func_50(Global_1940603))
		{
			if ((iVar5 == 3 || iVar5 == 4) || iVar5 == 5)
			{
				CUTSCENE::SET_CUTSCENE_ORIGIN(Var3, Var4.f_2, iVar5);
			}
			else
			{
				CUTSCENE::SET_CUTSCENE_ORIGIN(Var1, Var2.f_2, iVar5);
			}
		}
		else
		{
			CUTSCENE::SET_CUTSCENE_ORIGIN(Var1, Var2.f_2, iVar5);
		}
		iVar5++;
	}
}

int func_720(bool bParam0, int iParam1, float fParam2, bool bParam3)//Position - 0x1B42BF
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (__LIB_1__::func_778(iParam1))
	{
		if (!bParam3)
		{
			return __LIB_12__::func_718(__LIB_1__::func_694(bParam0), iParam1, fParam2);
		}
		else if (__LIB_12__::func_718(__LIB_1__::func_694(bParam0), iParam1, fParam2))
		{
			return 1;
		}
		else if (__LIB_12__::func_718(__LIB_1__::func_694(bParam0), iParam1, 15f))
		{
			if (__LIB_1__::func_693(bParam0, 1, 1))
			{
				iVar0 = PLAYER::GET_PLAYER_PED(bParam0);
				if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0, false))
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(iVar0, false))
					{
						iVar1 = PED::GET_VEHICLE_PED_IS_USING(iVar0);
						if (ENTITY::DOES_ENTITY_EXIST(iVar1) && !ENTITY::IS_ENTITY_DEAD(iVar1, false))
						{
							if (DECORATOR::DECOR_EXIST_ON(iVar1, "PYV_Yacht"))
							{
								iVar2 = DECORATOR::DECOR_GET_INT(iVar1, "PYV_Yacht");
								if (iVar2 == iParam1)
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
	}
	return 0;
}

void func_721(var uParam0)//Position - 0x1E52A4
{
	int iVar0[8];
	int iVar1;
	struct<3> Var2;
	int iVar3;
	iVar0[0] = joaat("v_ilev_mp_high_frontdoor");
	iVar0[1] = joaat("hei_heist_apart2_door");
	iVar0[2] = joaat("hei_v_ilev_fh_heistdoor2");
	iVar0[3] = joaat("apa_p_mp_door_apartfrt_door");
	iVar0[4] = joaat("apa_p_mp_door_mpa2_frnt");
	iVar0[5] = joaat("apa_p_mp_door_stilt_doorfrnt");
	iVar0[6] = joaat("apa_p_mp_door_apartfrt_door_black");
	iVar0[7] = joaat("apa_p_mp_door_mpa2_frnt");
	iVar1 = Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_32;
	__LIB_7__::func_370(&Var2, 93, iVar1);
	if (!__LIB_18__::func_50(Global_1940603))
	{
		iVar3 = 0;
		while (iVar3 <= (iVar0 - 1))
		{
			ENTITY::REMOVE_MODEL_HIDE(Var2, 2f, iVar0[iVar3], false);
			iVar3++;
		}
	}
	if (uParam0->f_82 != 0)
	{
		OBJECT::DELETE_OBJECT(&(uParam0->f_82));
		iVar3 = 0;
		while (iVar3 <= (iVar0 - 1))
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0[iVar3]);
			iVar3++;
		}
	}
}

int func_722(var uParam0, int iParam1)//Position - 0x243D44
{
	bool bVar0;
	if (BitTest(Global_1946250.f_7, 27) || __LIB_3__::func_909())
	{
		return 0;
	}
	if (iParam1 == -1)
	{
		if (__LIB_3__::func_956(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
	}
	if ((!NETWORK::NETWORK_IS_ACTIVITY_SESSION() && !__LIB_0__::func_983()) && BitTest(Global_1946250.f_506, 12))
	{
		return 1;
	}
	if (!BitTest(Global_1946250.f_506, 0))
	{
		if (Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_9 != __LIB_0__::func_162())
		{
			if (!__LIB_1__::func_693(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_9, 0, 1))
			{
				MISC::SET_BIT(&(Global_1946250.f_506), 7);
				Global_1946250.f_3377 = 2;
				return 1;
			}
		}
	}
	else if (BitTest(Global_1946250.f_506, 0))
	{
		if (__LIB_2__::func_72(PLAYER::PLAYER_ID(), 0))
		{
			bVar0 = __LIB_0__::func_797();
			if (bVar0 != __LIB_0__::func_162())
			{
				__LIB_3__::func_955(1);
				Global_1946250.f_3377 = 2;
				return 1;
			}
		}
	}
	if (Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_9 != __LIB_0__::func_162())
	{
		if (__LIB_3__::func_954(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_9))
		{
			if (!BitTest(Global_1946250.f_4523.f_1, 6))
			{
				MISC::SET_BIT(&(Global_1946250.f_506), 9);
			}
		}
		if (!BitTest(Global_1946250.f_506, 0))
		{
			if (__LIB_2__::func_72(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_9, 0))
			{
				MISC::SET_BIT(&(Global_1946250.f_506), 8);
				Global_1946250.f_3377 = 2;
				return 1;
			}
		}
		if ((__LIB_3__::func_952(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_9) && PLAYER::PLAYER_ID() != Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_9) || __LIB_3__::func_948(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_9))
		{
			if ((PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && __LIB_2__::func_749(PLAYER::PLAYER_ID())) && !__LIB_3__::func_925())
			{
				TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
				if (!BitTest(Global_1946250.f_506, 9))
				{
					MISC::SET_BIT(&(Global_1946250.f_506), 9);
				}
			}
			else if ((TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_LEAVE_VEHICLE")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_LEAVE_VEHICLE")) != 0) && !TASK::GET_IS_TASK_ACTIVE(PLAYER::PLAYER_PED_ID(), 2))
			{
				Global_1946250.f_3377 = 2;
				return 1;
			}
		}
		if (__LIB_3__::func_951(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_9) && PLAYER::PLAYER_ID() != Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_9)
		{
			if ((PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && __LIB_2__::func_749(PLAYER::PLAYER_ID())) && !__LIB_3__::func_925())
			{
				TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
			}
			else if ((TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_LEAVE_VEHICLE")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_LEAVE_VEHICLE")) != 0) && !TASK::GET_IS_TASK_ACTIVE(PLAYER::PLAYER_PED_ID(), 2))
			{
				Global_1946250.f_3377 = 2;
				return 1;
			}
		}
		if ((BitTest(Global_1946250.f_506, 9) && TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_LEAVE_VEHICLE")) != 1) && TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_LEAVE_VEHICLE")) != 0)
		{
			Global_1946250.f_3377 = 2;
			return 1;
		}
		if (Global_2815059.f_326 && Global_2815059.f_329)
		{
			Global_1946250.f_3377 = 2;
			return 1;
		}
	}
	if (Global_1835491 && !__LIB_18__::func_489(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_9))
	{
		Global_1946250.f_3377 = 2;
		return 1;
	}
	if (__LIB_3__::func_953())
	{
		Global_1946250.f_3377 = 2;
		return 1;
	}
	if (Global_1946244 == 35)
	{
		if (!__LIB_0__::func_893())
		{
			Global_1946250.f_3377 = 2;
			return 1;
		}
		if (__LIB_0__::func_983())
		{
			Global_1946250.f_3377 = 2;
			return 1;
		}
	}
	return 0;
}

void func_723(bool bParam0, bool bParam1)//Position - 0x313AC6
{
	GRAPHICS::SET_HIDOF_OVERRIDE(false, false, 0f, 0f, 0f, 0f);
	if (!__LIB_12__::func_675())
	{
		bParam0 = false;
	}
	if (bParam0)
	{
		CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, true, 0);
	}
	if (__LIB_12__::func_675() && !bParam1)
	{
		STREAMING::CLEAR_FOCUS();
	}
	NETWORK::NETWORK_SET_IN_FREE_CAM_MODE(false);
	if (GRAPHICS::IS_SCREENBLUR_FADE_RUNNING())
	{
		GRAPHICS::TRIGGER_SCREENBLUR_FADE_OUT(200f);
	}
	HUD::BUSYSPINNER_OFF();
	if (Global_4718592 == 1 || Global_4718592 == 0)
	{
		__LIB_4__::func_36();
	}
	Global_1931611 = 0;
	__LIB_1__::func_617();
	__LIB_2__::func_409();
}

void func_724(int iParam0, var uParam1, var uParam2, char* sParam3, int iParam4, int iParam5)//Position - 0x3AEFD6
{
	if (Global_4980736.f_69361[iParam0 /*151*/].f_15 != 76)
	{
		*uParam1 = __LIB_24__::func_270(iParam0);
		*uParam2 = __LIB_20__::func_860(*uParam1, iParam4, iParam5);
		StringCopy(sParam3, __LIB_20__::func_869(*uParam1, -1, -1), 16);
	}
}

int func_725(var uParam0)//Position - 0x4C65E2
{
	if (__LIB_18__::func_998(uParam0) == 0)
	{
		return 1;
	}
	if (Global_1836578 || __LIB_24__::func_255())
	{
		return 1;
	}
	return 0;
}

Vector3 func_726(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0x4CA064
{
	if (bParam3)
	{
		if (!bParam4)
		{
			if (iParam0 == 1)
			{
				if (iParam1 == 0)
				{
					if (bParam2)
					{
						return -0.3177f, 6.7548f, -5.4224f;
					}
					else
					{
						return -0.3707f, 4.4614f, -3.4891f;
					}
				}
				else if (iParam1 == 1)
				{
					if (bParam2)
					{
						return -4.5775f, 3.6249f, 10.4319f;
					}
					else
					{
						return -3.6188f, 3.2366f, 7.6158f;
					}
				}
				else if (bParam2)
				{
					return -5.328f, 3.0492f, -1.3252f;
				}
				else
				{
					return -2.5249f, 2.1846f, -0.6967f;
				}
			}
			else if (iParam1 == 0)
			{
				if (bParam2)
				{
					return -0.0075f, 5.9651f, -1.2332f;
				}
				else
				{
					return -0.51f, 3.0827f, -0.5702f;
				}
			}
			else if (iParam1 == 1)
			{
				if (bParam2)
				{
					return -3.8234f, -1.9832f, 10.5711f;
				}
				else
				{
					return -3.4482f, -1.3191f, 7.6697f;
				}
			}
			else if (bParam2)
			{
				return 4.1389f, 4.8157f, -0.4518f;
			}
			else
			{
				return 1.933f, 2.8129f, -0.102f;
			}
		}
		else if (iParam0 == 1)
		{
			if (iParam1 == 0)
			{
				if (bParam2)
				{
					return -12.8035f, 7.7778f, -12.606f;
				}
				else
				{
					return -11.0454f, 6.1969f, -10.7596f;
				}
			}
			else if (iParam1 == 1)
			{
				if (bParam2)
				{
					return 6.0643f, 4.2254f, 11.465f;
				}
				else
				{
					return 4.3287f, 3.6102f, 9.0967f;
				}
			}
			else if (iParam1 == 2)
			{
				if (bParam2)
				{
					return -2.4665f, 8.7807f, -0.6806f;
				}
				else
				{
					return -1.8111f, 5.9006f, -0.1563f;
				}
			}
			else if (bParam2)
			{
				return -1.7287f, -10.8275f, 2.5295f;
			}
			else
			{
				return -1.2056f, -7.9133f, 2.0458f;
			}
		}
		else if (iParam1 == 0)
		{
			if (bParam2)
			{
				return -10.1204f, 6.633f, -2.3314f;
			}
			else
			{
				return -7.894f, 4.7156f, -1.726f;
			}
		}
		else if (iParam1 == 1)
		{
			if (bParam2)
			{
				return -5.238f, 6.6418f, 8.3018f;
			}
			else
			{
				return -4.2166f, 4.8075f, 6.1589f;
			}
		}
		else if (iParam1 == 2)
		{
			if (bParam2)
			{
				return -3.5948f, 0.0975f, -0.2176f;
			}
			else
			{
				return -0.6293f, -0.0869f, 0.1983f;
			}
		}
		else if (bParam2)
		{
			return -3.5526f, -1.5618f, 0.4634f;
		}
		else
		{
			return -0.8803f, -0.2167f, 0.2442f;
		}
	}
	else if (__LIB_24__::func_255())
	{
		if (iParam0 == 1)
		{
			if (iParam1 == 0)
			{
				if (bParam2)
				{
					return 1.3015f, 5.2783f, 0.0878f;
				}
				else
				{
					return 0.5597f, 2.3777f, 0.2789f;
				}
			}
			else if (iParam1 == 1)
			{
				if (bParam2)
				{
					return 2.7647f, 4.4739f, 0.6398f;
				}
				else
				{
					return 0.9114f, 2.115f, 0.6153f;
				}
			}
			else if (bParam2)
			{
				return -1.7122f, 6.1183f, 0.8633f;
			}
			else
			{
				return 1.9024f, 2.8556f, 1.2344f;
			}
		}
		else if (iParam1 == 0)
		{
			if (bParam2)
			{
				return -0.5811f, 4.4837f, 0.7696f;
			}
			else
			{
				return 0.4665f, 1.676f, 0.6287f;
			}
		}
		else if (iParam1 == 1)
		{
			if (bParam2)
			{
				return -1.3625f, 4.5793f, 0.6336f;
			}
			else
			{
				return 0.0291f, 1.9218f, 0.6077f;
			}
		}
		else if (bParam2)
		{
			return 1.3784f, 6.1317f, 0.8623f;
		}
		else
		{
			return 0.0428f, 2.4647f, 0.6911f;
		}
	}
	else if (((((((((((((Global_4718592.f_107227 == 1 || Global_4718592.f_107227 == 0) || Global_4718592.f_107227 == 6) || Global_4718592.f_107227 == 7) || Global_4718592.f_107227 == 18) || Global_4718592.f_107227 == 19) || Global_4718592.f_107227 == 20) || Global_4718592.f_107227 == 21) || Global_4718592.f_107227 == 22) || Global_4718592.f_107227 == 23) || Global_4718592.f_107227 == 24) || Global_4718592.f_107227 == 25) || Global_4718592.f_107227 == 26) || Global_4718592.f_107227 == 27)
	{
		if (iParam0 == 1)
		{
			if (iParam1 == 0)
			{
				if (bParam2)
				{
					return 1.3015f, 5.2783f, 0.0878f;
				}
				else
				{
					return 0.5597f, 2.3777f, 0.2789f;
				}
			}
			else if (iParam1 == 1)
			{
				if (bParam2)
				{
					return 2.7647f, 4.4739f, 0.6398f;
				}
				else
				{
					return 0.9114f, 2.115f, 0.6153f;
				}
			}
			else if (bParam2)
			{
				return 3.695f, 5.0224f, 2.279f;
			}
			else
			{
				return 1.9024f, 2.8556f, 1.2344f;
			}
		}
		else if (iParam1 == 0)
		{
			if (bParam2)
			{
				return -0.5811f, 4.4837f, 0.7696f;
			}
			else
			{
				return 0.4665f, 1.676f, 0.6287f;
			}
		}
		else if (iParam1 == 1)
		{
			if (bParam2)
			{
				return -1.3625f, 4.5793f, 0.6336f;
			}
			else
			{
				return 0.0291f, 1.9218f, 0.6077f;
			}
		}
		else if (bParam2)
		{
			return -1.1639f, 5.1584f, 1.2274f;
		}
		else
		{
			return 0.0428f, 2.4647f, 0.6911f;
		}
	}
	else if (Global_4718592.f_107227 == 2 || Global_4718592.f_107227 == 3)
	{
		if (iParam0 == 1)
		{
			if (iParam1 == 0)
			{
				if (bParam2)
				{
					return 3.9496f, 9.4141f, 1.2105f;
				}
				else
				{
					return 2.4147f, 6.8387f, 1.1064f;
				}
			}
			else if (iParam1 == 1)
			{
				if (bParam2)
				{
					return 4.2482f, 6.9057f, 3.8491f;
				}
				else
				{
					return 2.6293f, 4.7454f, 2.5409f;
				}
			}
			else if (iParam1 == 2)
			{
				if (bParam2)
				{
					return 1.6264f, 13.2187f, 1.8138f;
				}
				else
				{
					return 1.0877f, 10.2711f, 1.67f;
				}
			}
			else if (bParam2)
			{
				return 1.8534f, 7.4125f, 0.1103f;
			}
			else
			{
				return 0.6756f, 4.6723f, 0.4336f;
			}
		}
		else if (iParam1 == 0)
		{
			if (bParam2)
			{
				return -1.5853f, 8.5167f, 1.2994f;
			}
			else
			{
				return -0.5283f, 5.7154f, 1.1112f;
			}
		}
		else if (iParam1 == 1)
		{
			if (bParam2)
			{
				return -1.3833f, 6.4975f, 1.4491f;
			}
			else
			{
				return -0.077f, 3.8379f, 0.9803f;
			}
		}
		else if (iParam1 == 2)
		{
			if (bParam2)
			{
				return -1.1768f, 6.5683f, 1.1242f;
			}
			else
			{
				return -0.0129f, 3.8189f, 0.8313f;
			}
		}
		else if (bParam2)
		{
			return -1.0962f, 5.3536f, 1.2973f;
		}
		else
		{
			return 0.0042f, 2.5856f, 0.942f;
		}
	}
	else if (Global_4718592.f_107227 == 12 || Global_4718592.f_107227 == 13)
	{
		if (iParam0 == 1)
		{
			if (iParam1 == 0)
			{
				if (bParam2)
				{
					return 1.7968f, 6.346f, -0.1782f;
				}
				else
				{
					return 0.9255f, 3.4824f, 0.0245f;
				}
			}
			else if (iParam1 == 1)
			{
				if (bParam2)
				{
					return 2.6753f, 4.2166f, 1.973f;
				}
				else
				{
					return 1.1443f, 1.9732f, 0.6988f;
				}
			}
			else if (bParam2)
			{
				return 1.4092f, 2.2796f, -0.0619f;
			}
			else
			{
				return -0.5304f, 0.0351f, 0.3853f;
			}
		}
		else if (iParam1 == 0)
		{
			if (bParam2)
			{
				return -1.5951f, 3.6231f, 0.8553f;
			}
			else
			{
				return -0.0475f, 1.1182f, 0.2807f;
			}
		}
		else if (iParam1 == 1)
		{
			if (bParam2)
			{
				return -0.5394f, 4.1109f, 0.8274f;
			}
			else
			{
				return 0.2626f, 1.2807f, 0.2385f;
			}
		}
		else if (bParam2)
		{
			return -1.3883f, 1.9402f, 0.6243f;
		}
		else
		{
			return 0.9488f, 0.1665f, -0.0014f;
		}
	}
	return 0f, 0f, 0f;
}

void func_727(var uParam0, char* sParam1, char* sParam2)//Position - 0x4CC5A8
{
	int iVar0;
	if (uParam0->f_49 == 0)
	{
		if (((BitTest(Global_4718592.f_11, 30) == 0 && !__LIB_4__::func_47()) && !__LIB_4__::func_46()) && !__LIB_1__::func_11())
		{
			if ((!STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() || __LIB_23__::func_609()) || STREAMING::GET_PLAYER_SWITCH_STATE() > 8)
			{
				__LIB_24__::func_259(1);
				if (__LIB_23__::func_608(uParam0))
				{
					__LIB_24__::func_258(uParam0, 1);
					__LIB_23__::func_607();
				}
				else
				{
					__LIB_24__::func_258(uParam0, 1);
					__LIB_23__::func_607();
					iVar0 = 524288;
					if (!__LIB_23__::func_691(uParam0))
					{
						iVar0 += 128;
					}
					if (((!__LIB_1__::func_24() && !__LIB_1__::func_614()) && !__LIB_1__::func_200()) && !__LIB_21__::func_909())
					{
						TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), sParam1, sParam2, 1000f, -2f, -1, iVar0, uParam0->f_51.f_17, false, false, false);
					}
					else
					{
						TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), sParam1, sParam2, 8f, -2f, -1, iVar0, uParam0->f_51.f_17, false, false, false);
					}
					if (__LIB_23__::func_691(uParam0))
					{
						if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_51.f_19)))
						{
							PED::PLAY_FACIAL_ANIM(PLAYER::PLAYER_PED_ID(), &(uParam0->f_51.f_19), sParam1);
						}
					}
				}
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), false, false);
				uParam0->f_49 = 1;
			}
		}
	}
}

void func_728(bool bParam0)//Position - 0x4DCE65
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	fVar0 = Global_262145.f_111 /* Tunable: MAX_ARMOR_MULTIPLIER */;
	iVar1 = __LIB_1__::func_360(817, -1, 0);
	iVar2 = 238;
	if (__LIB_24__::func_265(1))
	{
		iVar2 = 256;
	}
	if (__LIB_24__::func_265(2))
	{
		iVar2 = 274;
	}
	if (__LIB_24__::func_265(3))
	{
		iVar2 = 292;
	}
	if (__LIB_24__::func_265(4))
	{
		iVar2 = 310;
	}
	if (__LIB_24__::func_265(5))
	{
		iVar2 = 328;
	}
	iVar3 = SYSTEM::ROUND((50f * fVar0));
	iVar4 = 328;
	__LIB_21__::func_930(iVar1, iVar3);
	__LIB_23__::func_341(iVar2, iVar4, bParam0);
}

void func_729()//Position - 0x503649
{
	if (Global_1574975)
	{
		__LIB_13__::func_719();
		Global_1574975 = 0;
	}
}

void func_730(int iParam0, bool bParam1, int iParam2)//Position - 0x55222E
{
	if (bParam1)
	{
		if (!__LIB_24__::func_368(iParam0, -1))
		{
			__LIB_24__::func_322(iParam0, 1, iParam2);
		}
	}
	else if (__LIB_24__::func_368(iParam0, -1))
	{
		__LIB_24__::func_322(iParam0, 0, iParam2);
	}
}

void func_731()//Position - 0x552600
{
	float fVar0;
	PLAYER::SET_PLAYER_HEALTH_RECHARGE_MULTIPLIER(PLAYER::PLAYER_ID(), 1f);
	fVar0 = 1f;
	if (__LIB_24__::func_265(1))
	{
		fVar0 = 1.02f;
	}
	if (__LIB_24__::func_265(2))
	{
		fVar0 = 1.04f;
	}
	if (__LIB_24__::func_265(3))
	{
		fVar0 = 1.06f;
	}
	if (__LIB_24__::func_265(4))
	{
		fVar0 = 1.08f;
	}
	if (__LIB_24__::func_265(5))
	{
		fVar0 = 1.1f;
	}
	if (__LIB_24__::func_265(6))
	{
		fVar0 = 1.12f;
	}
	if (__LIB_24__::func_265(7))
	{
		fVar0 = 1.14f;
	}
	if (__LIB_24__::func_265(8))
	{
		fVar0 = 1.16f;
	}
	if (__LIB_24__::func_265(9))
	{
		fVar0 = 1.18f;
	}
	if (__LIB_24__::func_265(10))
	{
		fVar0 = 1.2f;
	}
	if (Global_262145.f_109 /* Tunable: HEALTH_REGEN_MAX_MULTIPLIER */ != 1f)
	{
		fVar0 = Global_262145.f_109 /* Tunable: HEALTH_REGEN_MAX_MULTIPLIER */;
	}
	fVar0 = (fVar0 * Global_262145.f_108 /* Tunable: HEALTH_REGEN_RATE_MULTIPLIER */);
	PLAYER::SET_PLAYER_HEALTH_RECHARGE_MULTIPLIER(PLAYER::PLAYER_ID(), fVar0);
}

void func_732(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0xE66C
{
	int iVar0;
	if (bParam5)
	{
	}
	if (iParam0 == 0)
	{
		if (!BitTest(Global_1965625, bParam1) || bParam5)
		{
			iVar0 = 1;
			__LIB_18__::func_738(bParam1);
		}
	}
	else if (iParam0 == 1)
	{
		if (((!__LIB_18__::func_737(bParam1) && !__LIB_18__::func_736(bParam1)) && Global_1965847 != bParam1) || bParam5)
		{
			iVar0 = 1;
			__LIB_24__::func_117(bParam1, bParam2, bParam3, bParam4, 0);
			if (bParam6)
			{
				__LIB_18__::func_354(0, bParam1);
			}
		}
	}
	else if (iParam0 == 2)
	{
		if (((!__LIB_18__::func_735(bParam1) && !__LIB_18__::func_734(bParam1)) && Global_1965848 != bParam1) || bParam5)
		{
			if (__LIB_19__::func_7())
			{
				iVar0 = 1;
				__LIB_23__::func_510(bParam1, bParam2, bParam3, bParam4, 0);
				if (bParam6)
				{
					__LIB_18__::func_354(1, bParam1);
				}
			}
		}
	}
	if (iVar0 || bParam5)
	{
		__LIB_24__::func_269(iParam0, bParam1, bParam2, bParam3, bParam4, bParam6);
	}
}

int func_733(int iParam0, int iParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, int iParam14, bool bParam15)//Position - 0x1AA9F
{
	int iVar0;
	int iVar1;
	if (bParam2)
	{
		iVar1 = 0;
		while (iVar1 <= 2017)
		{
			if (BitTest(Global_794709.f_4[iVar1 /*88*/].f_76, 13))
			{
				if (Global_794709.f_4[iVar1 /*88*/].f_65 == iParam0)
				{
					if (__LIB_23__::func_714(bParam2, iParam0, iVar1, iParam3, bParam5, bParam6, bParam7, bParam8, iParam1, iParam4, bParam9, bParam10, bParam11, bParam12, bParam13, iParam14, bParam15))
					{
						iVar0++;
					}
				}
			}
			iVar1++;
		}
	}
	else
	{
		iVar1 = 0;
		while (iVar1 <= 99)
		{
			if (BitTest(Global_998606.f_604[iVar1 /*88*/].f_76, 13) && Global_998606.f_604[iVar1 /*88*/].f_65 == iParam0)
			{
				if (__LIB_23__::func_714(bParam2, iParam0, iVar1, iParam3, bParam5, bParam6, bParam7, bParam8, iParam1, iParam4, bParam9, bParam10, bParam11, bParam12, bParam13, iParam14, bParam15))
				{
					iVar0++;
				}
			}
			iVar1++;
		}
	}
	return iVar0;
}

void func_734(var uParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, int iParam8, int iParam9, bool bParam10, int iParam11)//Position - 0x11F918
{
	struct<41> Var0;
	struct<8> Var1;
	char cVar2[64];
	int iVar3;
	int iVar4;
	int iVar5;
	struct<8> Var6;
	char cVar7[64];
	struct<3> Var8;
	struct<3> Var9;
	struct<3> Var10;
	struct<3> Var11;
	struct<3> Var12;
	struct<3> Var13;
	Var0 = -1;
	Var0.f_1 = 32;
	Var0.f_34 = 3;
	Var0.f_40 = -1;
	if (!PED::IS_PED_INJURED(*uParam1) && (bParam2 >= 0 || bParam4))
	{
		PED::SET_PED_RESET_FLAG(*uParam1, 150, true);
		StringCopy(&Var1, "", 64);
		StringCopy(&cVar2, "", 64);
		StringCopy(&Var6, "", 64);
		StringCopy(&cVar7, "", 64);
		if (iParam8 > -1)
		{
			iVar3 = iParam8;
		}
		else
		{
			iVar3 = Global_2689235[bParam2 /*453*/].f_258;
			iVar4 = Global_2689235[bParam2 /*453*/].f_257;
			iVar5 = Global_2689235[bParam2 /*453*/].f_259;
		}
		if (iParam9 == iParam9)
		{
			iParam9 = iParam9;
		}
		if (!bParam5)
		{
			__LIB_2__::func_421(iVar3, PED::IS_PED_MALE(*uParam1), bParam4, &Var1, &cVar2, iVar4, iVar5, bParam10, iParam11);
		}
		else
		{
			__LIB_1__::func_58(iParam7, Global_2689235[bParam2 /*453*/].f_260, *uParam1, bParam6, &Var1, &cVar2);
		}
		__LIB_1__::func_57(uParam0, &Var6, &cVar7, PED::IS_PED_MALE(*uParam1));
		if (uParam0->f_449 != 0)
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var1) && !MISC::IS_STRING_NULL_OR_EMPTY(&Var6))
			{
				STREAMING::REQUEST_ANIM_DICT(&Var1);
				STREAMING::REQUEST_ANIM_DICT(&Var6);
				if (((STREAMING::HAS_ANIM_DICT_LOADED(&Var1) && STREAMING::HAS_ANIM_DICT_LOADED(&Var6)) && __LIB_1__::func_56(iVar3, bParam5)) && __LIB_1__::func_55(iVar3, bParam5))
				{
					switch (uParam0->f_450)
					{
						case 0:
							if (bParam2 > -1 && ((bParam5 && bParam3 > -1) || !bParam5))
							{
								if (!BitTest(uParam0->f_426, bParam2) || (bParam5 && !BitTest(uParam0->f_426, bParam3)))
								{
									if (bParam5)
									{
										__LIB_24__::func_337(&Var0, 0, &Var8, &Var9, 1, 0, 1);
										Var9.f_2 = (Var9.f_2 + 90f);
										uParam0->f_438 = PED::CREATE_SYNCHRONIZED_SCENE(Var8, Var9, 2);
										Var10 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION(&Var1, &cVar2, Var8, Var9, 0f, 2) };
										Var11 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION(&Var1, &cVar2, Var8, Var9, 0f, 2) };
										if (ENTITY::DOES_ENTITY_EXIST(*uParam1))
										{
											if (!ENTITY::IS_ENTITY_DEAD(*uParam1, false))
											{
												ENTITY::SET_ENTITY_COORDS_NO_OFFSET(*uParam1, Var10, false, false, true);
												ENTITY::SET_ENTITY_ROTATION(*uParam1, Var11, 2, true);
											}
										}
									}
									else
									{
										Var12 = { ENTITY::GET_ENTITY_COORDS(*uParam1, true) };
										Var13 = { Var12 };
										__LIB_2__::func_413(&(uParam0->f_441), iVar3, bParam5, Var13);
										uParam0->f_438 = PED::CREATE_SYNCHRONIZED_SCENE(Var12, ENTITY::GET_ENTITY_ROTATION(*uParam1, 2), 2);
									}
									if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_441))
									{
										ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(uParam0->f_441, uParam0->f_438, &cVar2, &Var1, 1000f, -1000f, 0, 1000f);
									}
									TASK::TASK_SYNCHRONIZED_SCENE(*uParam1, uParam0->f_438, &Var1, &cVar2, 1000f, -8f, 0, 0, 1000f, 31);
									if (bParam5)
									{
										if (bParam6)
										{
											if (bParam2 >= 0 && bParam2 < 32)
											{
												MISC::SET_BIT(&(uParam0->f_426), bParam2);
											}
										}
										else if (bParam3 >= 0 && bParam3 < 32)
										{
											MISC::SET_BIT(&(uParam0->f_426), bParam3);
										}
									}
									else if (bParam2 >= 0 && bParam2 < 32)
									{
										MISC::SET_BIT(&(uParam0->f_426), bParam2);
									}
								}
								else
								{
									uParam0->f_450++;
								}
							}
							else
							{
								uParam0->f_450 = 2;
							}
							break;
						case 1:
							if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uParam0->f_438))
							{
								if (!bParam5)
								{
									if (iVar3 == 8)
									{
										__LIB_1__::func_51(uParam0, uParam1);
									}
									if (iVar3 == 9)
									{
										__LIB_1__::func_50(uParam0, uParam1);
									}
								}
								if (uParam0->f_1196)
								{
									if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uParam0->f_438) < 0.98f)
									{
										if (iVar3 == 8)
										{
											__LIB_1__::func_51(uParam0, uParam1);
										}
										if (iVar3 == 9)
										{
											__LIB_1__::func_50(uParam0, uParam1);
										}
									}
									else
									{
										TASK::TASK_PLAY_ANIM_ADVANCED(*uParam1, &Var6, &cVar7, ENTITY::GET_ENTITY_COORDS(*uParam1, true), ENTITY::GET_ENTITY_ROTATION(*uParam1, 2), 2f, -8f, -1, 0, 0f, 2, 31);
										uParam0->f_450++;
									}
								}
							}
							break;
						case 2:
							break;
					}
				}
				else
				{
					if (!STREAMING::HAS_ANIM_DICT_LOADED(&Var1))
					{
					}
					if (!__LIB_1__::func_56(iVar3, bParam5))
					{
					}
					if (!STREAMING::HAS_ANIM_DICT_LOADED(&Var6))
					{
					}
					if (!__LIB_1__::func_55(iVar3, bParam5))
					{
					}
				}
			}
		}
	}
	else
	{
		if (PED::IS_PED_INJURED(*uParam1))
		{
		}
		if (bParam2 < 0)
		{
		}
	}
}

struct<4> func_735(int iParam0, char* sParam1, int iParam2, int iParam3)//Position - 0x1328D3
{
	struct<4> Var0;
	struct<4> Var1;
	int iVar2;
	int iVar3;
	StringCopy(&Var0, "AC_UNLCK_", 16);
	Var1 = { __LIB_24__::func_341(iParam0, iParam3) };
	if (iParam2 && !MISC::IS_STRING_NULL_OR_EMPTY(&Var1))
	{
		*sParam1 = { Var1 };
	}
	else if (__LIB_22__::func_243(iParam0))
	{
		if (iParam0 == -3)
		{
			StringConCat(&Var0, "CASH", 16);
		}
		else
		{
			StringConCat(&Var0, "RP", 16);
		}
	}
	else if (__LIB_6__::func_139(iParam0))
	{
		StringCopy(&Var0, "AC_UNLCK_PEG" /* GXT: Pegasus Vehicle: ~a~ */, 16);
		StringCopy(sParam1, "AC_UNLCK_", 16);
		StringConCat(sParam1, "S", 16);
		StringIntConCat(sParam1, iParam0, 16);
	}
	else if (__LIB_6__::func_120(iParam0))
	{
		iVar2 = (iParam0 - 8);
		StringCopy(&Var0, __LIB_24__::func_340(iParam0), 16);
		StringCopy(sParam1, "AC_UNLCK_", 16);
		StringConCat(sParam1, "H", 16);
		StringIntConCat(sParam1, iVar2, 16);
	}
	else
	{
		iVar3 = (iParam0 - 102);
		StringCopy(&Var0, __LIB_24__::func_340(iParam0), 16);
		StringCopy(sParam1, "AC_UNLCK_", 16);
		StringConCat(sParam1, "L", 16);
		StringIntConCat(sParam1, iVar3, 16);
	}
	return Var0;
}

void func_736()//Position - 0x133BB8
{
	__LIB_24__::func_41();
	__LIB_22__::func_410();
}

void func_737(int iParam0)//Position - 0x32186D
{
	int iVar0;
	var uVar1;
	int iVar2;
	if (__LIB_0__::func_3() != 1 && __LIB_0__::func_3() != 2)
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			uVar1 = __LIB_6__::func_161(iParam0, iVar0);
			if (__LIB_22__::func_385(uVar1, -1) && __LIB_6__::func_353(iParam0))
			{
				WEAPON::SET_PED_WEAPON_TINT_INDEX(PLAYER::PLAYER_PED_ID(), iParam0, iVar0);
			}
			iVar0++;
		}
		if (__LIB_9__::func_768(&iVar2, iParam0))
		{
			iVar0 = 0;
			while (iVar0 < 32)
			{
				uVar1 = __LIB_6__::func_158(iParam0, iVar0);
				if (__LIB_22__::func_385(uVar1, -1) && __LIB_6__::func_353(iParam0))
				{
					WEAPON::SET_PED_WEAPON_COMPONENT_TINT_INDEX(PLAYER::PLAYER_PED_ID(), iParam0, iVar2, iVar0);
					__LIB_0__::func_474(PLAYER::PLAYER_PED_ID(), iParam0, iVar2, iVar0);
				}
				iVar0++;
			}
		}
	}
}

int func_738(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, bool bParam5)//Position - 0x34157E
{
	int iVar0;
	int iVar1;
	iVar0 = __LIB_2__::func_771(iParam2, iParam4);
	if ((iVar0 > 0 && iVar0 <= 128) && __LIB_3__::func_529(iVar0))
	{
		if (bParam3)
		{
			__LIB_7__::func_273(iParam1, &iVar1, iParam4);
		}
		else
		{
			__LIB_1__::func_660(iParam1, &iVar1);
		}
		if (iVar1 >= 0)
		{
			if (!__LIB_1__::func_819(iParam0))
			{
				if (bParam5)
				{
					if (((iVar1 - __LIB_4__::func_982(iParam2)) >= 0 && (iVar1 - __LIB_4__::func_982(iParam2)) < __LIB_3__::func_2(-1, iVar0, 0)) && iVar1 < 363)
					{
						return 1;
					}
				}
				else if (((iVar1 - __LIB_4__::func_982(iParam2)) >= 0 && (iVar1 - __LIB_4__::func_982(iParam2)) < __LIB_3__::func_2(iParam2, -1, 1)) && iVar1 < 363)
				{
					return 1;
				}
			}
			else
			{
				if (Global_1312193[iVar0 /*1951*/].f_33 == 2 && iVar1 == (10 + __LIB_4__::func_982(iParam2)))
				{
					return 1;
				}
				if ((Global_1312193[iVar0 /*1951*/].f_33 == 6 && iVar1 >= (10 + __LIB_4__::func_982(iParam2))) && iVar1 <= (11 + __LIB_4__::func_982(iParam2)))
				{
					return 1;
				}
				if ((Global_1312193[iVar0 /*1951*/].f_33 == 10 && iVar1 >= (10 + __LIB_4__::func_982(iParam2))) && iVar1 <= (12 + __LIB_4__::func_982(iParam2)))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_739(bool bParam0)//Position - 0x3B13E9
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 58)
	{
		__LIB_17__::func_921(iVar0, bParam0);
		iVar0++;
	}
}

void func_740()//Position - 0x54C56A
{
	PLAYER::SET_SWIM_MULTIPLIER_FOR_PLAYER(PLAYER::PLAYER_ID(), 1f);
	if (__LIB_24__::func_320(15))
	{
		PLAYER::SET_SWIM_MULTIPLIER_FOR_PLAYER(PLAYER::PLAYER_ID(), 1.1f);
	}
	else if (__LIB_24__::func_320(11))
	{
		PLAYER::SET_SWIM_MULTIPLIER_FOR_PLAYER(PLAYER::PLAYER_ID(), 1.075f);
	}
	else if (__LIB_24__::func_320(7))
	{
		PLAYER::SET_SWIM_MULTIPLIER_FOR_PLAYER(PLAYER::PLAYER_ID(), 1.05f);
	}
	else if (__LIB_24__::func_320(3))
	{
		PLAYER::SET_SWIM_MULTIPLIER_FOR_PLAYER(PLAYER::PLAYER_ID(), 1.025f);
	}
	if (__LIB_24__::func_320(16))
	{
		PLAYER::SET_RUN_SPRINT_MULTIPLIER_FOR_PLAYER(PLAYER::PLAYER_ID(), 1.15f);
	}
	else if (__LIB_24__::func_320(12))
	{
		PLAYER::SET_RUN_SPRINT_MULTIPLIER_FOR_PLAYER(PLAYER::PLAYER_ID(), 1.1f);
	}
	else if (__LIB_24__::func_320(8))
	{
		PLAYER::SET_RUN_SPRINT_MULTIPLIER_FOR_PLAYER(PLAYER::PLAYER_ID(), 1.075f);
	}
	else if (__LIB_24__::func_320(4))
	{
		PLAYER::SET_RUN_SPRINT_MULTIPLIER_FOR_PLAYER(PLAYER::PLAYER_ID(), 1.05f);
	}
	if (__LIB_24__::func_320(18))
	{
		PLAYER::SET_RUN_SPRINT_MULTIPLIER_FOR_PLAYER(PLAYER::PLAYER_ID(), 1.15f);
	}
}

void func_741(int iParam0, bool bParam1, bool bParam2, bool bParam3)//Position - 0x5576D9
{
	if (bParam1)
	{
		if (!__LIB_24__::func_323(iParam0))
		{
			__LIB_24__::func_198(iParam0, 1);
		}
		if (bParam2)
		{
			if (__LIB_23__::func_347(iParam0) == 0)
			{
				__LIB_12__::func_529(22, "", "", "", "", -1, 0, 0, 0, -1, 0);
				__LIB_22__::func_170(iParam0, 1);
			}
		}
		if (bParam3)
		{
			__LIB_22__::func_169(iParam0);
		}
	}
	else if (__LIB_24__::func_323(iParam0))
	{
		__LIB_24__::func_198(iParam0, 0);
	}
}

void func_742(int iParam0, int iParam1, bool bParam2)//Position - 0x55FAF3
{
	if (bParam2)
	{
		if (!__LIB_24__::func_200(iParam0, iParam1, -1))
		{
			__LIB_24__::func_325(iParam0, iParam1, 1);
		}
	}
	else if (__LIB_24__::func_200(iParam0, iParam1, -1))
	{
		__LIB_24__::func_325(iParam0, iParam1, 0);
	}
}

int func_743(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14, bool bParam15, int iParam16, bool bParam17)//Position - 0x1A2EB
{
	int iVar0;
	int iVar1;
	if (bParam4)
	{
		iVar0 = 0;
		while (iVar0 <= 2017)
		{
			if (BitTest(Global_794709.f_4[iVar0 /*88*/].f_76, 13) && Global_794709.f_4[iVar0 /*88*/].f_65 == iParam1)
			{
				if (__LIB_23__::func_714(bParam4, iParam1, iVar0, iParam5, bParam7, bParam8, bParam9, bParam10, iParam3, iParam6, bParam11, bParam12, bParam13, bParam14, bParam15, iParam16, bParam17))
				{
					if (iVar1 == iParam2)
					{
						return iVar0;
					}
					iVar1++;
				}
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 <= 99)
		{
			if (BitTest(Global_998606.f_604[iVar0 /*88*/].f_76, 13) && Global_998606.f_604[iVar0 /*88*/].f_65 == iParam1)
			{
				if (__LIB_23__::func_714(bParam4, iParam1, iVar0, iParam5, bParam7, bParam8, bParam9, bParam10, iParam3, iParam6, bParam11, bParam12, bParam13, bParam14, bParam15, iParam16, bParam17))
				{
					if (iVar1 == iParam2)
					{
						return iVar0;
					}
					iVar1++;
				}
			}
			iVar0++;
		}
	}
	return uParam0;
}

int func_744(int iParam0)//Position - 0xD3535
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar1 = 0;
	if (Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_124.f_6[iParam0 /*2*/].f_1 > 0)
	{
		iVar2 = (Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_124.f_6[iParam0 /*2*/].f_1 - Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_124.f_6[iParam0 /*2*/]);
		__LIB_2__::func_428(49, iVar2, -1);
		__LIB_24__::func_408(49, 9);
		__LIB_0__::func_186(7, 1, -1);
		__LIB_24__::func_240(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_124.f_6[iParam0 /*2*/].f_1, 0, Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_124.f_6[iParam0 /*2*/].f_1, 0);
		iVar1 = Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_124.f_6[iParam0 /*2*/].f_1;
		Global_1837286 = Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_124.f_6[iParam0 /*2*/];
		if (__LIB_0__::func_112())
		{
			__LIB_9__::func_512(joaat("SERVICE_EARN_BETTING"), iVar1, &iVar0, 0, 0, 0);
			Global_4534105[iVar0 /*85*/].f_14.f_34 = { Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_150 };
		}
		else
		{
			MONEY::NETWORK_EARN_FROM_BETTING(iVar1, &(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_150));
			__LIB_2__::func_561(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_124.f_6[iParam0 /*2*/].f_1, 0);
		}
	}
	return iVar1;
}

void func_745(int iParam0, bool bParam1, bool bParam2)//Position - 0xB93
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam1)
	{
		if (!bParam2)
		{
			*iParam0 = NETWORK::GET_NETWORK_TIME();
		}
		else
		{
			*iParam0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		}
	}
	else
	{
		*iParam0 = MISC::GET_GAME_TIMER();
	}
	iParam0->f_1 = 1;
}

bool func_746(int iParam0)//Position - 0xBD0
{
	return BitTest(iParam0->f_105, 3);
}

int func_747(int iParam0)//Position - 0xC9E
{
	if (iParam0->f_8 == 20)
	{
		return 1;
	}
	return 0;
}

int func_748(int iParam0, bool bParam1)//Position - 0xCB4
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = 0;
	while (iVar0 < 21)
	{
		if (iParam0->f_30[iVar0] >= iParam0->f_30[iVar1])
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (bParam1)
	{
		iVar0 = 0;
		while (iVar0 < 21)
		{
			if (iParam0->f_30[iVar0] >= iParam0->f_30[iVar2] && iVar0 != iVar1)
			{
				iVar2 = iVar0;
			}
			iVar0++;
		}
		return iVar2;
	}
	return iVar1;
}

bool func_749(int iParam0)//Position - 0xD27
{
	return BitTest(iParam0->f_105, 7);
}

bool func_750(int iParam0)//Position - 0xD35
{
	return BitTest(iParam0->f_105, 2);
}

bool func_751(int iParam0)//Position - 0xD43
{
	return BitTest(iParam0->f_105, 5);
}

void func_752(int iParam0, bool bParam1, bool bParam2)//Position - 0xE9D
{
	if (iParam0->f_1 == 0)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam1)
		{
			if (!bParam2)
			{
				*iParam0 = NETWORK::GET_NETWORK_TIME();
			}
			else
			{
				*iParam0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
			}
		}
		else
		{
			*iParam0 = MISC::GET_GAME_TIMER();
		}
		iParam0->f_1 = 1;
	}
}

void func_753(int iParam0)//Position - 0xF45
{
	if (iParam0->f_108 == 0)
	{
		if (!BitTest(iParam0->f_105, 2))
		{
			MISC::SET_BIT(&(iParam0->f_105), 2);
		}
	}
	else if (!BitTest(iParam0->f_105, 5))
	{
		MISC::SET_BIT(&(iParam0->f_105), 5);
	}
}

int func_754(int iParam0)//Position - 0xF7E
{
	if (iParam0->f_8 == 19)
	{
		return 1;
	}
	return 0;
}

int func_755(int iParam0)//Position - 0x715E
{
	return iParam0->f_104;
}

bool func_756(bool bParam0)//Position - 0x8202
{
	return BitTest(Global_1853348[bParam0 /*834*/].f_11.f_1, 0);
}

void func_757(int iParam0)//Position - 0x9E2F
{
	iParam0->f_1 = 0;
}

int func_758(bool bParam0, bool bParam1, bool bParam2)//Position - 0xF897
{
	if (bParam2 == 1)
	{
		if (bParam0 == bParam1)
		{
			return 1;
		}
		return 0;
	}
	if ((bParam0 > -1 && bParam1 > -1) && bParam0 == bParam1)
	{
		return 1;
	}
	switch (bParam0)
	{
		case 0:
			switch (bParam1)
			{
				case 0:
					return BitTest(Global_4718592.f_607, 0);
				case 1:
					return BitTest(Global_4718592.f_607, 1);
				case 2:
					return BitTest(Global_4718592.f_607, 2);
				case 3:
					return BitTest(Global_4718592.f_607, 3);
				default:
			}
			break;
		case 1:
			switch (bParam1)
			{
				case 0:
					return BitTest(Global_4718592.f_607, 4);
				case 1:
					return BitTest(Global_4718592.f_607, 5);
				case 2:
					return BitTest(Global_4718592.f_607, 6);
				case 3:
					return BitTest(Global_4718592.f_607, 7);
				default:
			}
			break;
		case 2:
			switch (bParam1)
			{
				case 0:
					return BitTest(Global_4718592.f_607, 8);
				case 1:
					return BitTest(Global_4718592.f_607, 9);
				case 2:
					return BitTest(Global_4718592.f_607, 10);
				case 3:
					return BitTest(Global_4718592.f_607, 11);
				default:
			}
			break;
		case 3:
			switch (bParam1)
			{
				case 0:
					return BitTest(Global_4718592.f_607, 12);
				case 1:
					return BitTest(Global_4718592.f_607, 13);
				case 2:
					return BitTest(Global_4718592.f_607, 14);
				case 3:
					return BitTest(Global_4718592.f_607, 15);
				default:
			}
			break;
	}
	return 0;
}

void func_759(int iParam0, int iParam1)//Position - 0x11655
{
	struct<4> Var0;
	int iVar1;
	Var0.f_0 = -1583378358;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = iParam0;
	Var0.f_3 = iParam1;
	iVar1 = __LIB_4__::func_970(1);
	if (!iVar1 == 0)
	{
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 4, iVar1);
	}
}

int func_760(int iParam0)//Position - 0x11C93
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 1:
			return 1;
		case 2:
			return 2;
		case 3:
			return 3;
		case 4:
			return 4;
		case 5:
			return 5;
		case 6:
			return 6;
		case 7:
			return 7;
		case 8:
			return 8;
		case 9:
			return 9;
		case 10:
			return 10;
		case 11:
			return 15;
		case 12:
			return 20;
		case 13:
			return 999;
		default:
	}
	return 0;
}

void func_761(struct<2> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, int iParam11)//Position - 0x11FD6
{
	Param0.f_0 = 136284527;
	Param0.f_1 = PLAYER::PLAYER_ID();
	if (!iParam11 == 0)
	{
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Param0, 12, iParam11);
	}
}

int func_762(int iParam0, bool bParam1, bool bParam2)//Position - 0x133D8
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam1)
	{
		if (!bParam2)
		{
			return NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *iParam0);
		}
		else
		{
			return NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME_ACCURATE(), *iParam0);
		}
	}
	return NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), *iParam0);
}

int func_763()//Position - 0x14488
{
	if (__LIB_0__::func_157(0))
	{
		return PLAYER::PLAYER_ID();
	}
	return Global_1922031;
}

bool func_764()//Position - 0x150F8
{
	return BitTest(Global_4718592.f_11, 5);
}

int func_765()//Position - 0x15211
{
	if (__LIB_13__::func_435(Global_4718592.f_168757))
	{
		return 1;
	}
	return BitTest(Global_4718592.f_11, 0);
}

int func_766()//Position - 0x15B49
{
	if (BitTest(Global_4718592.f_11, 0))
	{
		return 0;
	}
	if (BitTest(Global_4718592.f_11, 5))
	{
		return 0;
	}
	return 1;
}

int func_767(int iParam0)//Position - 0x15D49
{
	switch (iParam0)
	{
		case -1:
			return -1;
		case 0:
			return 60000;
		case 1:
			return 120000;
		case 2:
			return 300000;
		case 3:
			return 600000;
		case 4:
			return 900000;
		case 5:
			return 1200000;
		case 6:
			return 1800000;
		case 7:
			return 3600000;
		case 8:
			return 7200000;
		default:
	}
	return -1;
}

void func_768(int iParam0, bool bParam1, bool bParam2)//Position - 0x17B2B
{
	int iVar0;
	if (bParam2)
	{
		if (bParam1)
		{
		}
		NETWORK::SET_NETWORK_ID_CAN_MIGRATE(iParam0, !bParam1);
	}
	else
	{
		iVar0 = NETWORK::NET_TO_ENT(iParam0);
		if (bParam1)
		{
		}
		ENTITY::FREEZE_ENTITY_POSITION(iVar0, bParam1);
		NETWORK::SET_NETWORK_ID_CAN_MIGRATE(iParam0, !bParam1);
	}
}

int func_769(int iParam0)//Position - 0x18109
{
	if (((((((((iParam0 == joaat("ch_prop_vault_painting_01a") || iParam0 == joaat("ch_prop_vault_painting_01b")) || iParam0 == joaat("ch_prop_vault_painting_01c")) || iParam0 == joaat("ch_prop_vault_painting_01d")) || iParam0 == joaat("ch_prop_vault_painting_01e")) || iParam0 == joaat("ch_prop_vault_painting_01f")) || iParam0 == joaat("ch_prop_vault_painting_01g")) || iParam0 == joaat("ch_prop_vault_painting_01h")) || iParam0 == joaat("ch_prop_vault_painting_01i")) || iParam0 == joaat("ch_prop_vault_painting_01j"))
	{
		return 1;
	}
	return 0;
}

void func_770(bool bParam0, int iParam1, int iParam2)//Position - 0x1898C
{
	struct<5> Var0;
	int iVar1;
	Var0.f_0 = 1174241816;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = bParam0;
	Var0.f_4 = iParam1;
	Var0.f_3 = iParam2;
	iVar1 = __LIB_4__::func_970(1);
	if (!iVar1 == 0)
	{
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 5, iVar1);
	}
}

int func_771(int iParam0)//Position - 0x19314
{
	int iVar0;
	switch (iParam0)
	{
		case 30:
		case 32:
		case 9:
		case 50:
		case 80:
		case 81:
		case 82:
		case 83:
		case 84:
		case 85:
		case 86:
		case 87:
		case 107:
		case 108:
			iVar0 = 1;
			break;
	}
	return iVar0;
}

void func_772(bool bParam0, int iParam1, bool bParam2, int iParam3)//Position - 0x19715
{
	struct<6> Var0;
	int iVar1;
	Var0.f_0 = 1998125978;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = bParam0;
	Var0.f_3 = iParam1;
	Var0.f_4 = bParam2;
	Var0.f_5 = iParam3;
	iVar1 = __LIB_4__::func_970(1);
	if (!iVar1 == 0)
	{
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 6, iVar1);
	}
}

void func_773(var uParam0)//Position - 0x1A2F8
{
	struct<3> Var0;
	int iVar1;
	Var0.f_0 = 376123309;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = uParam0;
	iVar1 = __LIB_4__::func_970(1);
	if (!iVar1 == 0)
	{
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 3, iVar1);
	}
}

float func_774(int iParam0)//Position - 0x1A3C4
{
	float fVar0;
	switch (iParam0)
	{
		case 0:
			fVar0 = 0f;
			break;
		case 5:
			fVar0 = 0.1f;
			break;
		case 1:
			fVar0 = 0.2f;
			break;
		case 2:
			fVar0 = 0.5f;
			break;
		case 4:
			fVar0 = 0.85f;
			break;
		case 3:
			fVar0 = 1f;
			break;
		default:
			break;
	}
	return (1f * fVar0);
}

float func_775(int iParam0)//Position - 0x1A432
{
	float fVar0;
	switch (iParam0)
	{
		case 0:
			fVar0 = 0f;
			break;
		case 5:
			fVar0 = 0.1f;
			break;
		case 1:
			fVar0 = 0.2f;
			break;
		case 2:
			fVar0 = 0.5f;
			break;
		case 3:
			fVar0 = 1f;
			break;
		case 4:
			fVar0 = 0.85f;
			break;
		default:
			break;
	}
	return (fVar0 * 1f);
}

int func_776(int iParam0)//Position - 0x1BC96
{
	if (((((((((((((iParam0 == joaat("hei_prop_hei_cash_trolly_01") || iParam0 == joaat("imp_prop_impexp_coke_trolly")) || iParam0 == joaat("ch_prop_diamond_trolly_01a")) || iParam0 == joaat("ch_prop_diamond_trolly_01b")) || iParam0 == joaat("ch_prop_diamond_trolly_01c")) || iParam0 == joaat("ch_prop_cash_low_trolly_01a")) || iParam0 == joaat("ch_prop_cash_low_trolly_01b")) || iParam0 == joaat("ch_prop_cash_low_trolly_01c")) || iParam0 == joaat("ch_prop_gold_trolly_01a")) || iParam0 == joaat("ch_prop_gold_trolly_01b")) || iParam0 == joaat("ch_prop_gold_trolly_01c")) || iParam0 == joaat("ch_prop_ch_cash_trolly_01a")) || iParam0 == joaat("ch_prop_ch_cash_trolly_01b")) || iParam0 == joaat("ch_prop_ch_cash_trolly_01c"))
	{
		return 1;
	}
	return 0;
}

int func_777(bool bParam0)//Position - 0x1F410
{
	if (Global_4980736.f_5742[bParam0 /*442*/].f_163 > -1 && Global_4980736.f_5742[bParam0 /*442*/].f_155 > -1)
	{
		if (BitTest(Global_4980736.f_5742[bParam0 /*442*/].f_120, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_778(bool bParam0)//Position - 0x1FE95
{
	if (Global_4980736.f_78578[bParam0 /*450*/].f_55 > -1 && Global_4980736.f_78578[bParam0 /*450*/].f_56 > -1)
	{
		if (BitTest(Global_4980736.f_78578[bParam0 /*450*/].f_107, 17))
		{
			return 1;
		}
	}
	return 0;
}

int func_779(int iParam0)//Position - 0x201E4
{
	switch (iParam0)
	{
		case joaat("S_M_Y_Cop_01"):
		case joaat("S_F_Y_Cop_01"):
		case joaat("S_M_Y_Swat_01"):
		case joaat("S_M_M_FIBOffice_01"):
		case joaat("S_M_M_FIBOffice_02"):
		case joaat("S_M_M_FIBSec_01"):
		case joaat("S_M_Y_Sheriff_01"):
		case joaat("S_F_Y_Sheriff_01"):
		case joaat("S_M_Y_Ranger_01"):
		case joaat("S_F_Y_Ranger_01"):
		case joaat("S_M_Y_BlackOps_01"):
		case joaat("S_M_Y_BlackOps_02"):
		case joaat("S_M_Y_BlackOps_03"):
		case joaat("S_M_M_CCrew_01"):
		case joaat("S_M_M_Armoured_01"):
		case joaat("S_M_Y_Pilot_01"):
		case joaat("S_M_M_Pilot_02"):
		case joaat("S_M_Y_Marine_03"):
		case joaat("S_M_M_CIASec_01"):
		case joaat("S_M_M_ChemSec_01"):
		case joaat("S_M_M_PrisGuard_01"):
		case joaat("S_M_M_Security_01"):
		case joaat("S_M_M_HighSec_01"):
		case joaat("A_M_Y_Business_01"):
		case joaat("A_F_Y_Business_02"):
			return 1;
			break;
	}
	return 0;
}

int func_780(bool bParam0)//Position - 0x20532
{
	if (BitTest(Global_4980736.f_94390[bParam0 /*1004*/].f_542, 25))
	{
		return 1;
	}
	return 0;
}

int func_781()//Position - 0x20D29
{
	if (((__LIB_1__::func_200() || __LIB_1__::func_623()) && Global_1922981.f_1347 != 0) && Global_1922981.f_1348 != 0)
	{
		return 1;
	}
	if (STATS::PLAYSTATS_CREATE_MATCH_HISTORY_ID_2(&(Global_1922981.f_1347), &(Global_1922981.f_1348)))
	{
		return 1;
	}
	return 0;
}

bool func_782(var uParam0)//Position - 0x21D22
{
	int iVar0;
	bool bVar1;
	var uVar2;
	iVar0 = 0;
	while (iVar0 <= 11)
	{
		if (__LIB_0__::func_86(*(uParam0[iVar0 /*3*/])))
		{
			MISC::SET_BIT(&uVar2, iVar0);
		}
		iVar0++;
	}
	MISC::SET_RANDOM_SEED(NETWORK::GET_NETWORK_TIME());
	iVar0 = 0;
	while (iVar0 <= 150)
	{
		bVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, 12);
		if (!BitTest(uVar2, bVar1))
		{
		}
		else
		{
			iVar0++;
		}
	}
	return bVar1;
}

void func_783(int iParam0)//Position - 0x22A7A
{
	int iVar0;
	iVar0 = INTERIOR::GET_INTERIOR_FROM_COLLISION(ENTITY::GET_ENTITY_COORDS(iParam0, true));
	if (INTERIOR::IS_VALID_INTERIOR(iVar0) && INTERIOR::IS_INTERIOR_READY(iVar0))
	{
		INTERIOR::RETAIN_ENTITY_IN_INTERIOR(iParam0, iVar0);
	}
}

int func_784(var uParam0, bool bParam1)//Position - 0x2BE34
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	iVar0 = 0;
	iVar1 = 0;
	iVar2 = 1;
	iVar3 = 2;
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST((*uParam0)[iVar1]) && NETWORK::NETWORK_DOES_NETWORK_ID_EXIST((*uParam0)[iVar2]))
	{
		if (bParam1 && NETWORK::NETWORK_DOES_NETWORK_ID_EXIST((*uParam0)[iVar3]))
		{
			iVar0 = 1;
		}
		else if (!bParam1)
		{
			iVar0 = 1;
		}
	}
	return iVar0;
}

int func_785()//Position - 0x2BE89
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	iVar0 = 0;
	iVar1 = joaat("prop_container_ld");
	iVar2 = joaat("hei_prop_cntrdoor_mph_l");
	iVar3 = joaat("hei_prop_cntrdoor_mph_r");
	iVar4 = joaat("hei_prop_container_lock");
	STREAMING::REQUEST_MODEL(iVar1);
	STREAMING::REQUEST_MODEL(iVar2);
	STREAMING::REQUEST_MODEL(iVar3);
	STREAMING::REQUEST_MODEL(iVar4);
	if (((STREAMING::HAS_MODEL_LOADED(iVar1) && STREAMING::HAS_MODEL_LOADED(iVar2)) && STREAMING::HAS_MODEL_LOADED(iVar3)) && STREAMING::HAS_MODEL_LOADED(iVar4))
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_786(bool bParam0)//Position - 0x2BEF7
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 <= 3)
	{
		if (Global_4980736.f_5742[bParam0 /*442*/].f_15 == joaat("prop_container_ld") && Global_4980736.f_5742[bParam0 /*442*/].f_16[iVar1] == 13)
		{
			iVar0 = 1;
		}
		iVar1++;
	}
	return iVar0;
}

int func_787(bool bParam0)//Position - 0x2CE7B
{
	int iVar0;
	iVar0 = Global_4980736.f_5742[bParam0 /*442*/].f_15;
	if (((((iVar0 == joaat("prop_arena_icon_flag_white") || iVar0 == joaat("prop_arena_icon_flag_yellow")) || iVar0 == joaat("prop_arena_icon_flag_purple")) || iVar0 == joaat("prop_arena_icon_flag_green")) || iVar0 == joaat("prop_arena_icon_flag_pink")) || iVar0 == joaat("prop_arena_icon_flag_red"))
	{
		return 1;
	}
	return 0;
}

Vector3 func_788(int iParam0)//Position - 0x36A7E
{
	struct<3> Var0;
	struct<3> Var1;
	Var1 = { Global_4980736.f_5[iParam0 /*273*/].f_1[0 /*3*/] };
	if (__LIB_0__::func_86(Global_4980736.f_5[iParam0 /*273*/].f_57) || __LIB_0__::func_86(Global_4980736.f_5[iParam0 /*273*/].f_60))
	{
		Var0 = { Var1 };
	}
	else
	{
		Var0 = { Global_4980736.f_5[iParam0 /*273*/].f_57 + Global_4980736.f_5[iParam0 /*273*/].f_60 };
		Var0 = { Var0 * Vector(0.5f, 0.5f, 0.5f) };
	}
	return Var0;
}

char* func_789(int iParam0)//Position - 0x39AB6
{
	switch (iParam0)
	{
		case 0:
			return "cpr_pumpchest_idle";
		case 1:
			return "dead_c";
		case 2:
			return "dead_a";
		case 3:
			return "dead_b";
		case 4:
			return "dead_c";
		case 5:
			return "dead_d";
		case 6:
			return "dead_e";
		case 7:
			return "dead_f";
		case 8:
			return "dead_g";
		case 9:
			return "dead_h";
		case 10:
			return "Body_Search";
		default:
	}
	return "cpr_pumpchest_idle";
}

float func_790(int iParam0)//Position - 0x39CC7
{
	float fVar0;
	fVar0 = 90f;
	switch (iParam0)
	{
		case 6:
			fVar0 = 110f;
			break;
		case 7:
			fVar0 = 135f;
			break;
		case 8:
			fVar0 = 180f;
			break;
	}
	return fVar0;
}

char* func_791(int iParam0, char* sParam1)//Position - 0x39E76
{
	switch (iParam0)
	{
		case -1:
			return "Lester";
		case 0:
			return "Lester";
		case 1:
			return "Lester";
		case 2:
			return "Lester";
		case 3:
			if (MISC::ARE_STRINGS_EQUAL(sParam1, "MPSCI16") || MISC::ARE_STRINGS_EQUAL(sParam1, "MPSCI17"))
			{
				return "MELVINSCIENTIST";
			}
			else
			{
				return "Lester";
			}
			break;
		case 4:
			return "Lester";
		case 5:
			return "Lester";
		case 6:
			return "Lester";
		case 7:
			return "AGENT14" /* GXT: Agent 14 */;
		case 8:
			return "AGENT14" /* GXT: Agent 14 */;
		case 9:
			return "AGENT14" /* GXT: Agent 14 */;
		case 10:
			return "AGENT14" /* GXT: Agent 14 */;
		case 11:
			return "AGENT14" /* GXT: Agent 14 */;
		case 12:
			return "AGENT14" /* GXT: Agent 14 */;
	}
	return "NULL";
}

int func_792(int iParam0)//Position - 0x3A526
{
	int iVar0;
	iVar0 = 100;
	switch (iParam0)
	{
		case 0:
			iVar0 += 100;
			break;
		case 1:
			iVar0 += 150;
			break;
		case 2:
			iVar0 += 200;
			break;
		case 3:
			iVar0 += 300;
			break;
		case 4:
			iVar0 += 400;
			break;
		case 5:
			iVar0 += 500;
			break;
		case 6:
			iVar0 += 25;
			break;
		case 7:
			iVar0 += 50;
			break;
		case 8:
			iVar0 += 75;
			break;
		case 9:
			iVar0 += 600;
			break;
		case 10:
			iVar0 += 700;
			break;
		case 11:
			iVar0 += 800;
			break;
		case 12:
			iVar0 += 900;
			break;
		case 13:
			iVar0 += 1000;
			break;
		case 14:
			iVar0 += 250;
			break;
		case 15:
			iVar0 += 350;
			break;
		case 16:
			iVar0 += 450;
			break;
	}
	return iVar0;
}

int func_793(bool bParam0)//Position - 0x3B2C6
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_4980736.f_94390[bParam0 /*1004*/].f_40[iVar0] < 17)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

Vector3 func_794(int iParam0)//Position - 0x470E7
{
	struct<4> Var0;
	struct<3> Var1;
	Var0 = { Global_1312193[iParam0 /*1951*/].f_38[1 /*27*/] };
	Var1 = { Var0 + Var0.f_3 * Vector(0.5f, 0.5f, 0.5f) };
	if (Var0.f_2 < Var0.f_3.f_2)
	{
		Var1.f_2 = Var0.f_2;
	}
	else
	{
		Var1.f_2 = Var0.f_3.f_2;
	}
	return Var1;
}

int func_795(int iParam0)//Position - 0x4714B
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (!__LIB_0__::func_86(Global_4980736.f_94390[iParam0 /*1004*/].f_669[iVar0 /*3*/]))
		{
			iVar1++;
		}
		else
		{
			return iVar1;
		}
		iVar0++;
	}
	return iVar1;
}

int func_796(bool bParam0)//Position - 0x47505
{
	return (bParam0 / 31);
}

int func_797(bool bParam0)//Position - 0x47512
{
	if (Global_4980736.f_94390[bParam0 /*1004*/].f_85 > -1 && Global_4980736.f_94390[bParam0 /*1004*/].f_86 > -1)
	{
		if (BitTest(Global_4980736.f_94390[bParam0 /*1004*/].f_530, 8))
		{
			return 1;
		}
	}
	return 0;
}

bool func_798()//Position - 0x48A85
{
	return BitTest(Global_2714762.f_43.f_4, 11);
}

int func_799(int iParam0)//Position - 0x48BA1
{
	int iVar0;
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	switch (iVar0)
	{
		case joaat("benson"):
		case joaat("gburrito"):
		case joaat("gburrito2"):
		case joaat("youga2"):
		case joaat("caddy"):
			return 0;
		default:
	}
	return 1;
}

void func_800(int iParam0, bool bParam1, bool bParam2)//Position - 0x48FAE
{
	int iVar0;
	iVar0 = NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(bParam2, 0);
	if (bParam1)
	{
		iVar0 = 0;
	}
	NETWORK::RESERVE_NETWORK_MISSION_OBJECTS((iVar0 + iParam0));
}

char* func_801(int iParam0)//Position - 0x4AE4D
{
	if (iParam0 == -2)
	{
		return "HIDDEN_RADIO_09_HIPHOP_OLD";
	}
	else if (iParam0 == -3)
	{
		return "RADIO_36_AUDIOPLAYER" /* GXT: Media Player */;
	}
	else if (iParam0 == -4)
	{
		return "HIDDEN_RADIO_SEC_PROMOTER";
	}
	else if (iParam0 == -5)
	{
		return "HIDDEN_RADIO_SEC_PROMOTER_INTRO";
	}
	else if (iParam0 == -6)
	{
		return "HIDDEN_RADIO_SEC_BILLIONAIRE";
	}
	return AUDIO::GET_RADIO_STATION_NAME(iParam0);
}

void func_802(int iParam0)//Position - 0x4C1CA
{
	int iVar0;
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0))
		{
			if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("RespawnVeh", 3))
			{
				if (DECORATOR::DECOR_EXIST_ON(iParam0, "RespawnVeh"))
				{
					iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "RespawnVeh");
				}
				else
				{
					iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 65535);
					DECORATOR::DECOR_SET_INT(iParam0, "RespawnVeh", iVar0);
				}
			}
		}
	}
}

void func_803(int iParam0, bool bParam1)//Position - 0x4F9A9
{
	if (BitTest(Global_4980736.f_78578[bParam1 /*450*/].f_236, 0))
	{
		VEHICLE::SET_DOOR_ALLOWED_TO_BE_BROKEN_OFF(iParam0, 0, false);
	}
	if (BitTest(Global_4980736.f_78578[bParam1 /*450*/].f_236, 1))
	{
		VEHICLE::SET_DOOR_ALLOWED_TO_BE_BROKEN_OFF(iParam0, 1, false);
	}
	if (BitTest(Global_4980736.f_78578[bParam1 /*450*/].f_236, 2))
	{
		VEHICLE::SET_DOOR_ALLOWED_TO_BE_BROKEN_OFF(iParam0, 2, false);
	}
	if (BitTest(Global_4980736.f_78578[bParam1 /*450*/].f_236, 3))
	{
		VEHICLE::SET_DOOR_ALLOWED_TO_BE_BROKEN_OFF(iParam0, 3, false);
	}
	if (BitTest(Global_4980736.f_78578[bParam1 /*450*/].f_236, 4))
	{
		VEHICLE::SET_DOOR_ALLOWED_TO_BE_BROKEN_OFF(iParam0, 4, false);
	}
	if (BitTest(Global_4980736.f_78578[bParam1 /*450*/].f_236, 5))
	{
		VEHICLE::SET_DOOR_ALLOWED_TO_BE_BROKEN_OFF(iParam0, 5, false);
	}
}

void func_804(int iParam0, bool bParam1)//Position - 0x4FA5F
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0))
			{
				if (VEHICLE::GET_VEHICLE_HAS_KERS(iParam0))
				{
					VEHICLE::SET_VEHICLE_KERS_ALLOWED(iParam0, bParam1);
				}
			}
		}
	}
}

float func_805(int iParam0, int iParam1)//Position - 0x61098
{
	if (BitTest(Global_4980736.f_78578[iParam0 /*450*/].f_111, 18) && iParam1 > 0)
	{
		return (Global_4980736.f_78578[iParam0 /*450*/].f_42 * IntToFloat(iParam1));
	}
	return Global_4980736.f_78578[iParam0 /*450*/].f_42;
}

Vector3 func_806(int iParam0)//Position - 0x63C39
{
	switch (iParam0)
	{
		case 130:
			return -127.9808f, -1773.9374f, 28.8223f;
		case 133:
			return 720.7731f, -845.0633f, 23.3518f;
		case 131:
			return -618.3507f, 280.0032f, 80.6174f;
		case 132:
			return -1293.4572f, -257.7296f, 39.3748f;
		case 128:
			return -262.5771f, 6214.37f, 30.4892f;
		case 129:
			return 1683.5795f, 4778.221f, 40.872f;
		default:
	}
	return 0f, 0f, 0f;
}

Vector3 func_807(int iParam0, bool bParam1, int iParam2)//Position - 0x63CDB
{
	struct<3> Var0;
	Var0 = { 0f, 0f, 0f };
	switch (iParam0)
	{
		case 1:
			if (bParam1)
			{
				switch (iParam2)
				{
					case 0:
						Var0 = { 1269.7108f, 2810.263f, 46.3932f };
						break;
					case 1:
						Var0 = { 1283.6785f, 2807.432f, 45.8531f };
						break;
					case 2:
						Var0 = { 1293.9281f, 2801.2336f, 45.9045f };
						break;
					case 3:
						Var0 = { 1302.8928f, 2790.4263f, 45.9494f };
						break;
					}
			}
			break;
		case 2:
			if (bParam1)
			{
				switch (iParam2)
				{
					case 0:
						Var0 = { 108.2844f, 2682.8638f, 51.2655f };
						break;
					case 1:
						Var0 = { 100.8731f, 2690.2368f, 51.9237f };
						break;
					case 2:
						Var0 = { 92.608f, 2698.4973f, 52.6602f };
						break;
					case 3:
						Var0 = { 84.978f, 2706.2805f, 53.3393f };
						break;
					}
			}
			break;
		case 3:
			if (bParam1)
			{
				switch (iParam2)
				{
					case 0:
						Var0 = { 2703.9912f, 3941.3975f, 42.9278f };
						break;
					case 1:
						Var0 = { 2699.308f, 3948.511f, 42.9362f };
						break;
					case 2:
						Var0 = { 2693.9524f, 3956.0442f, 43.2208f };
						break;
					case 3:
						Var0 = { 2688.256f, 3963.2256f, 43.1996f };
						break;
					}
			}
			break;
		case 4:
			if (bParam1)
			{
				switch (iParam2)
				{
					case 0:
						Var0 = { 3339.8357f, 5495.4526f, 19.097f };
						break;
					case 1:
						Var0 = { 3344.867f, 5485.445f, 19.176f };
						break;
					case 2:
						Var0 = { 3340.1326f, 5471.9697f, 18.936f };
						break;
					case 3:
						Var0 = { 3325.696f, 5461.682f, 18.25f };
						break;
					}
			}
			break;
		case 5:
			if (bParam1)
			{
				switch (iParam2)
				{
					case 0:
						Var0 = { 94.7715f, 6807.0874f, 18.3168f };
						break;
					case 1:
						Var0 = { 103.9207f, 6808.7837f, 18.5372f };
						break;
					case 2:
						Var0 = { 113.5154f, 6808.481f, 18.3483f };
						break;
					case 3:
						Var0 = { 123.9375f, 6807.2734f, 18.1728f };
						break;
					}
			}
			break;
		case 6:
			if (bParam1)
			{
				switch (iParam2)
				{
					case 0:
						Var0 = { -2210.4165f, 2319.8657f, 31.789f };
						break;
					case 1:
						Var0 = { -2220.704f, 2315.8467f, 31.5612f };
						break;
					case 2:
						Var0 = { -2230.022f, 2310.1746f, 31.3209f };
						break;
					case 3:
						Var0 = { -2238.6804f, 2301.704f, 31.2985f };
						break;
					}
			}
			break;
		case 7:
			if (bParam1)
			{
				switch (iParam2)
				{
					case 0:
						Var0 = { 42.5677f, 3303.0054f, 37.5235f };
						break;
					case 1:
						Var0 = { 51.0444f, 3309.019f, 36.7843f };
						break;
					case 2:
						Var0 = { 60.0832f, 3315.3926f, 36.0527f };
						break;
					case 3:
						Var0 = { 70.9043f, 3323.2515f, 35.3186f };
						break;
					}
			}
			break;
		case 8:
			if (bParam1)
			{
				switch (iParam2)
				{
					case 0:
						Var0 = { 2126.9744f, 1758.8127f, 101.9554f };
						break;
					case 1:
						Var0 = { 2133.3003f, 1763.9292f, 102.0615f };
						break;
					case 2:
						Var0 = { 2140.1497f, 1768.0485f, 102.6124f };
						break;
					case 3:
						Var0 = { 2147.808f, 1771.8081f, 103.5514f };
						break;
					}
			}
			break;
		case 9:
			if (bParam1)
			{
				switch (iParam2)
				{
					case 0:
						Var0 = { 1811.5513f, 226.4673f, 172.2476f };
						break;
					case 1:
						Var0 = { 1807.7817f, 235.8754f, 172.0976f };
						break;
					case 2:
						Var0 = { 1803.7319f, 244.2342f, 171.9037f };
						break;
					case 3:
						Var0 = { 1799.6433f, 253.3166f, 172.2495f };
						break;
					}
			}
			break;
	}
	return Var0;
}

Vector3 func_808(int iParam0, bool bParam1, int iParam2)//Position - 0x641A3
{
	struct<3> Var0;
	Var0 = { 0f, 0f, 0f };
	switch (iParam0)
	{
		case 1:
			if (bParam1)
			{
				switch (iParam2)
				{
					case 0:
						Var0 = { 1257.9058f, 2816.7207f, 46.4744f };
						break;
					case 1:
						Var0 = { 1286.5487f, 2812.5867f, 45.138f };
						break;
					}
			}
			break;
		case 2:
			if (bParam1)
			{
				switch (iParam2)
				{
					case 0:
						Var0 = { 123.9581f, 2692.9766f, 51.0008f };
						break;
					case 1:
						Var0 = { 111.0356f, 2702.349f, 52.0286f };
						break;
					}
			}
			break;
		case 3:
			if (bParam1)
			{
				switch (iParam2)
				{
					case 0:
						Var0 = { 2665.121f, 3928.4866f, 41.3414f };
						break;
					case 1:
						Var0 = { 2678.1165f, 3938.6414f, 42.0821f };
						break;
					}
			}
			break;
		case 4:
			if (bParam1)
			{
				switch (iParam2)
				{
					case 0:
						Var0 = { 3343.3848f, 5506.638f, 19.4111f };
						break;
					case 1:
						Var0 = { 3338.3643f, 5483.511f, 18.9941f };
						break;
					}
			}
			break;
		case 5:
			if (bParam1)
			{
				switch (iParam2)
				{
					case 0:
						Var0 = { 84.8397f, 6802.9053f, 18.3797f };
						break;
					case 1:
						Var0 = { 70.6766f, 6796.9546f, 18.2857f };
						break;
					}
			}
			break;
		case 6:
			if (bParam1)
			{
				switch (iParam2)
				{
					case 0:
						Var0 = { -2196.4827f, 2318.5334f, 32.1881f };
						break;
					case 1:
						Var0 = { -2218.2546f, 2304.9778f, 31.8374f };
						break;
					}
			}
			break;
		case 7:
			if (bParam1)
			{
				switch (iParam2)
				{
					case 0:
						Var0 = { 79.5721f, 3329.2998f, 34.8155f };
						break;
					case 1:
						Var0 = { 52.3994f, 3333.052f, 35.9825f };
						break;
					}
			}
			break;
		case 8:
			if (bParam1)
			{
				switch (iParam2)
				{
					case 0:
						Var0 = { 2116.3918f, 1745.6737f, 102.1252f };
						break;
					case 1:
						Var0 = { 2109.0276f, 1735.5074f, 102.2097f };
						break;
					}
			}
			break;
		case 9:
			if (bParam1)
			{
				switch (iParam2)
				{
					case 0:
						Var0 = { 1826.1625f, 183.2551f, 171.1721f };
						break;
					case 1:
						Var0 = { 1825.2017f, 213.079f, 172.4278f };
						break;
					}
			}
			break;
	}
	return Var0;
}

int func_809(int iParam0)//Position - 0x644F9
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (!__LIB_0__::func_86(Global_4980736.f_78578[iParam0 /*450*/].f_237[iVar0 /*3*/]))
		{
			iVar1++;
		}
		else
		{
			return iVar1;
		}
		iVar0++;
	}
	return iVar1;
}

int func_810()//Position - 0x666C1
{
	return ((Global_4980736.f_5739 + Global_4980736.f_63310) + Global_4980736.f_20329);
}

int func_811(int iParam0)//Position - 0x6C591
{
	switch (iParam0)
	{
		case 1:
			return joaat("hauler");
		case 3:
			return joaat("hauler2");
		case 0:
			return joaat("phantom");
		case 2:
			return joaat("phantom2");
		case 4:
			return joaat("phantom3");
		case 5:
			return joaat("packer");
		case 6:
			return joaat("docktug");
		case 7:
			return joaat("barracks2");
		default:
	}
	return 0;
}

void func_812(var uParam0)//Position - 0x73F26
{
	struct<24> Var0;
	Var0.f_1 = 20;
	*uParam0 = { Var0 };
}

void func_813()//Position - 0x74D67
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = 0;
		while (iVar1 < 4)
		{
			if (iVar0 == iVar1)
			{
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, Global_1836871[iVar0], Global_1836871[iVar1]);
			}
			else if (BitTest(Global_4718592.f_607, (iVar0 * 4 + iVar1)))
			{
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, Global_1836871[iVar0], Global_1836871[iVar1]);
			}
			else
			{
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, Global_1836871[iVar0], Global_1836871[iVar1]);
			}
			iVar1++;
		}
		iVar0++;
	}
}

int func_814(int iParam0)//Position - 0x7524D
{
	int iVar0;
	char cVar1[24];
	if (iParam0 > 0)
	{
		return 1;
	}
	StringCopy(&cVar1, "rgFM_PlayerTeam", 24);
	iVar0 = 0;
	while (iVar0 < 4)
	{
		StringCopy(&cVar1, "rgFM_PlayerTeam", 24);
		StringIntConCat(&cVar1, iVar0, 24);
		if (PED::ADD_RELATIONSHIP_GROUP(&cVar1, &(Global_1836871[iVar0])))
		{
		}
		iVar0++;
	}
	return 1;
}

void func_815()//Position - 0x76C2B
{
	Global_2714762.f_700 = 1;
}

void func_816(int iParam0)//Position - 0x76C4E
{
	Global_2715699.f_3479.f_33 = iParam0;
}

void func_817(int iParam0)//Position - 0x791DF
{
	struct<43> Var0;
	Var0.f_0 = -2089726453;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = Global_2715699.f_3479.f_92;
	Var0.f_3 = Global_2715699.f_3479.f_93;
	Var0.f_4 = Global_2715699.f_3479.f_94;
	Var0.f_5 = Global_2715699.f_3479.f_95;
	Var0.f_6 = Global_2715699.f_3479.f_96;
	Var0.f_7 = Global_2715699.f_3479.f_97;
	Var0.f_8 = Global_2715699.f_3479.f_98;
	Var0.f_9 = Global_2715699.f_3479.f_99;
	Var0.f_10 = Global_2715699.f_3479.f_100;
	Var0.f_11 = Global_2715699.f_3479.f_101;
	Var0.f_12 = Global_2715699.f_3479.f_102;
	Var0.f_13 = Global_2715699.f_3479.f_103;
	Var0.f_14 = Global_2715699.f_3479.f_104;
	Var0.f_15 = Global_2715699.f_3479.f_105;
	Var0.f_16 = Global_2715699.f_3479.f_106;
	Var0.f_17 = Global_2715699.f_3479.f_107;
	Var0.f_18 = Global_2715699.f_3479.f_108;
	Var0.f_19 = Global_2715699.f_3479.f_109;
	Var0.f_20 = Global_2715699.f_3479.f_110;
	Var0.f_21 = Global_2715699.f_3479.f_111;
	Var0.f_22 = Global_2715699.f_3479.f_122;
	Var0.f_23 = Global_2715699.f_3479.f_123;
	Var0.f_24 = Global_2715699.f_3479.f_124;
	Var0.f_25 = Global_2715699.f_3479.f_125;
	Var0.f_26 = Global_2715699.f_3479.f_126;
	Var0.f_27 = Global_2715699.f_3479.f_127;
	Var0.f_28 = Global_2715699.f_3479.f_128;
	Var0.f_29 = Global_2715699.f_3479.f_129;
	Var0.f_30 = Global_2715699.f_3479.f_130;
	Var0.f_31 = Global_2715699.f_3479.f_131;
	Var0.f_32 = Global_2715699.f_3479.f_132;
	Var0.f_33 = Global_2715699.f_3479.f_112;
	Var0.f_34 = Global_2715699.f_3479.f_113;
	Var0.f_35 = Global_2715699.f_3479.f_114;
	Var0.f_36 = Global_2715699.f_3479.f_115;
	Var0.f_37 = Global_2715699.f_3479.f_118;
	Var0.f_38 = Global_2715699.f_3479.f_119;
	Var0.f_39 = Global_2715699.f_3479.f_120;
	Var0.f_40 = Global_2715699.f_3479.f_121;
	Var0.f_41 = Global_2715699.f_3479.f_116;
	Var0.f_42 = Global_2715699.f_3479.f_117;
	if (!iParam0 == 0)
	{
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 43, iParam0);
	}
}

void func_818(int iParam0)//Position - 0x79421
{
	struct<28> Var0;
	Var0.f_0 = -1850807674;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = Global_2715699.f_3479.f_9;
	Var0.f_3 = Global_2715699.f_3479.f_10;
	Var0.f_4 = Global_2715699.f_3479.f_11;
	Var0.f_5 = Global_2715699.f_3479.f_12;
	Var0.f_6 = Global_2715699.f_3479.f_13;
	Var0.f_7 = Global_2715699.f_3479.f_14;
	Var0.f_8 = Global_2715699.f_3479.f_76;
	Var0.f_9 = Global_2715699.f_3479.f_77;
	Var0.f_10 = Global_2715699.f_3479.f_78;
	Var0.f_11 = Global_2715699.f_3479.f_79;
	Var0.f_12 = Global_2715699.f_3479.f_90;
	Var0.f_13 = Global_2715699.f_3479.f_91;
	Var0.f_14 = Global_2715699.f_3479.f_133;
	Var0.f_15 = Global_2715699.f_3479.f_134;
	Var0.f_16 = Global_2715699.f_3479.f_135;
	Var0.f_17 = Global_2715699.f_3479.f_136;
	Var0.f_18 = Global_2715699.f_3479.f_137;
	Var0.f_19 = Global_2715699.f_3479.f_138;
	Var0.f_20 = Global_2715699.f_3479.f_139;
	Var0.f_21 = Global_2715699.f_3479.f_140;
	Var0.f_22 = Global_2715699.f_3479.f_141;
	Var0.f_23 = Global_2715699.f_3479.f_142;
	Var0.f_24 = Global_2715699.f_3479.f_143;
	Var0.f_25 = Global_2715699.f_3479.f_144;
	Var0.f_26 = Global_2715699.f_3479.f_279;
	Var0.f_27 = Global_2715699.f_3479.f_328;
	if (!iParam0 == 0)
	{
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 28, iParam0);
	}
}

void func_819(int iParam0)//Position - 0x795A2
{
	if (iParam0 != Global_2715699.f_3479.f_332)
	{
		Global_2715699.f_3479.f_332 = iParam0;
	}
}

int func_820(int iParam0)//Position - 0x87F5F
{
	int iVar0;
	iVar0 = -1;
	switch (iParam0)
	{
		case 12:
			iVar0 = 1;
			break;
		case 19:
			iVar0 = 2;
			break;
		case 31:
			iVar0 = 3;
			break;
		case 18:
			iVar0 = 4;
			break;
		case 2:
			iVar0 = 5;
			break;
		case 20:
			iVar0 = 6;
			break;
		case 86:
			iVar0 = 7;
			break;
	}
	return iVar0;
}

void func_821()//Position - 0x87FC7
{
	Global_2359296[__LIB_0__::func_155() /*5567*/].f_681.f_34 = 0;
}

int func_822()//Position - 0x87FE0
{
	return Global_2657431;
}

void func_823(int iParam0)//Position - 0x90CE7
{
	__LIB_1__::func_354(10392, iParam0, -1, 1, 0);
}

int func_824(int iParam0)//Position - 0xB768E
{
	if (iParam0 == Global_262145.f_31710[0])
	{
		return 0;
	}
	else if (iParam0 == Global_262145.f_31710[1])
	{
		return 1;
	}
	else if (iParam0 == Global_262145.f_31710[2])
	{
		return 2;
	}
	return -1;
}

void func_825(int iParam0, bool bParam1)//Position - 0xB7A99
{
	int iVar0;
	iVar0 = __LIB_1__::func_360(9915, -1, 0);
	if (bParam1)
	{
		MISC::SET_BIT(&iVar0, iParam0);
	}
	else
	{
		MISC::CLEAR_BIT(&iVar0, iParam0);
	}
	__LIB_1__::func_354(9915, iVar0, -1, 1, 0);
}

bool func_826(int iParam0)//Position - 0xB7AD0
{
	return BitTest(__LIB_1__::func_360(9915, -1, 0), iParam0);
}

void func_827(bool bParam0)//Position - 0xB7BA6
{
	int iVar0;
	iVar0 = __LIB_1__::func_360(9905, -1, 0);
	if (bParam0)
	{
		MISC::SET_BIT(&iVar0, 8);
	}
	else
	{
		MISC::CLEAR_BIT(&iVar0, 8);
	}
	__LIB_1__::func_354(9905, iVar0, -1, 1, 0);
}

void func_828(bool bParam0)//Position - 0xB7BDD
{
	int iVar0;
	iVar0 = __LIB_1__::func_360(9905, -1, 0);
	if (bParam0)
	{
		MISC::SET_BIT(&iVar0, 7);
	}
	else
	{
		MISC::CLEAR_BIT(&iVar0, 7);
	}
	__LIB_1__::func_354(9905, iVar0, -1, 1, 0);
}

void func_829(int iParam0, bool bParam1)//Position - 0xB7D36
{
	int iVar0;
	iVar0 = __LIB_1__::func_360(9907, -1, 0);
	if (bParam1)
	{
		MISC::SET_BIT(&iVar0, iParam0);
	}
	else
	{
		MISC::CLEAR_BIT(&iVar0, iParam0);
	}
	__LIB_1__::func_354(9907, iVar0, -1, 1, 0);
}

int func_830(int iParam0)//Position - 0xB7DB2
{
	if (iParam0 == Global_262145.f_31703[0])
	{
		return 0;
	}
	else if (iParam0 == Global_262145.f_31703[1])
	{
		return 4;
	}
	else if (iParam0 == Global_262145.f_31703[2])
	{
		return 7;
	}
	else if (iParam0 == Global_262145.f_31703[3])
	{
		return 10;
	}
	else if (iParam0 == Global_262145.f_31703[4])
	{
		return 11;
	}
	else if (iParam0 == Global_262145.f_31703[5])
	{
		return 12;
	}
	return -1;
}

void func_831(int iParam0, int iParam1)//Position - 0xB80F0
{
	switch (iParam1)
	{
		case 0:
			__LIB_1__::func_354(9634, iParam0, -1, 1, 0);
			break;
		case 1:
			__LIB_1__::func_354(9635, iParam0, -1, 1, 0);
			break;
		case 2:
			__LIB_1__::func_354(9636, iParam0, -1, 1, 0);
			break;
		default:
			break;
	}
}

int func_832(int iParam0)//Position - 0xB8141
{
	var uVar0[8];
	float fVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	uVar0[0] = Global_262145.f_31050[0];
	uVar0[1] = Global_262145.f_31050[1];
	uVar0[2] = Global_262145.f_31050[2];
	uVar0[3] = Global_262145.f_31050[3];
	uVar0[4] = Global_262145.f_31050[4];
	uVar0[5] = Global_262145.f_31050[5];
	uVar0[6] = Global_262145.f_31050[6];
	uVar0[7] = Global_262145.f_31050[7];
	iVar4 = 0;
	while (iVar4 < 8)
	{
		fVar1 = (fVar1 + uVar0[iVar4]);
		iVar4++;
	}
	fVar3 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, fVar1);
	iVar4 = 0;
	while (iVar4 < 8)
	{
		fVar2 = (fVar2 + uVar0[iVar4]);
		if (fVar3 < fVar2)
		{
			*iParam0 = iVar4;
			return 1;
		}
		iVar4++;
	}
	*iParam0 = -1;
	return 0;
}

void func_833(bool bParam0)//Position - 0xB8247
{
	int iVar0;
	iVar0 = __LIB_1__::func_360(9618, -1, 0);
	if (bParam0)
	{
		MISC::SET_BIT(&iVar0, 1);
	}
	else
	{
		MISC::CLEAR_BIT(&iVar0, 1);
	}
	__LIB_1__::func_354(9618, iVar0, -1, 1, 0);
}

void func_834(int iParam0, bool bParam1)//Position - 0xB899E
{
	int iVar0;
	iVar0 = __LIB_1__::func_360(9483, -1, 0);
	if (bParam1)
	{
		MISC::SET_BIT(&iVar0, iParam0);
		MISC::SET_BIT(&(Global_1975224[PLAYER::PLAYER_ID() /*53*/].f_5.f_2), iParam0);
	}
	else
	{
		MISC::CLEAR_BIT(&iVar0, iParam0);
		MISC::CLEAR_BIT(&(Global_1975224[PLAYER::PLAYER_ID() /*53*/].f_5.f_2), iParam0);
	}
	__LIB_1__::func_354(9483, iVar0, -1, 1, 0);
}

void func_835(bool bParam0)//Position - 0xB9071
{
	int iVar0;
	iVar0 = __LIB_1__::func_360(9511, -1, 0);
	if (bParam0)
	{
		MISC::SET_BIT(&iVar0, 5);
		MISC::SET_BIT(&(Global_1975224[PLAYER::PLAYER_ID() /*53*/].f_1), 5);
	}
	else
	{
		MISC::CLEAR_BIT(&iVar0, 5);
		MISC::CLEAR_BIT(&(Global_1975224[PLAYER::PLAYER_ID() /*53*/].f_1), 5);
	}
	__LIB_1__::func_354(9511, iVar0, -1, 1, 0);
}

void func_836(bool bParam0)//Position - 0xB91C6
{
	int iVar0;
	iVar0 = __LIB_1__::func_360(9482, -1, 0);
	if (bParam0)
	{
		MISC::SET_BIT(&iVar0, 12);
		MISC::SET_BIT(&(Global_1975224[PLAYER::PLAYER_ID() /*53*/].f_5), 12);
	}
	else
	{
		MISC::CLEAR_BIT(&iVar0, 12);
		MISC::CLEAR_BIT(&(Global_1975224[PLAYER::PLAYER_ID() /*53*/].f_5), 12);
	}
	__LIB_1__::func_354(9482, iVar0, -1, 1, 0);
}

int func_837(int iParam0)//Position - 0xB9A3F
{
	int iVar0;
	switch (iParam0)
	{
		case 0:
			iVar0 = 11088;
			break;
		case 1:
			iVar0 = 11089;
			break;
		case 2:
			iVar0 = 11090;
			break;
		case 3:
			iVar0 = 11091;
			break;
		case 4:
			iVar0 = 11092;
			break;
		case 5:
			iVar0 = 11093;
			break;
		case 6:
			iVar0 = 11094;
			break;
		case 7:
			iVar0 = 11095;
			break;
		case 9:
		case 10:
			iVar0 = 11096;
			break;
		case 11:
			iVar0 = 11097;
			break;
		case 12:
			iVar0 = 11098;
			break;
		case 8:
			iVar0 = 11099;
			break;
		case 13:
			iVar0 = 11100;
			break;
		case 14:
			iVar0 = 11101;
			break;
		case 17:
			iVar0 = 11102;
			break;
		case 18:
			iVar0 = 11103;
			break;
		case 15:
			iVar0 = 11104;
			break;
		case 19:
			iVar0 = 11105;
			break;
		case 16:
			iVar0 = 11106;
			break;
		case 20:
			iVar0 = 11107;
			break;
		case 21:
			iVar0 = 11108;
			break;
		case 25:
			iVar0 = 11109;
			break;
		case 24:
			iVar0 = 11110;
			break;
		case 23:
			iVar0 = 11111;
			break;
		case 22:
			iVar0 = 11112;
			break;
		case 26:
		case 27:
			iVar0 = 11113;
			break;
		case 29:
			iVar0 = 6377;
			break;
		case 30:
			iVar0 = 6378;
			break;
		case 31:
			iVar0 = 6379;
			break;
		case 32:
			iVar0 = 6380;
			break;
		case 33:
			iVar0 = 6381;
			break;
		case 34:
			iVar0 = 6382;
			break;
		case 35:
			iVar0 = 6383;
			break;
		case 36:
			iVar0 = 6384;
			break;
		case 37:
			iVar0 = 6385;
			break;
		case 38:
			iVar0 = 6386;
			break;
		case 39:
			iVar0 = 6387;
			break;
		case 40:
			iVar0 = 6388;
			break;
		case 41:
			iVar0 = 6389;
			break;
		case 42:
			iVar0 = 6390;
			break;
		case 43:
			iVar0 = 6391;
			break;
		case 44:
			iVar0 = 6392;
			break;
		case 45:
			iVar0 = 8918;
			break;
		case 46:
			iVar0 = 8919;
			break;
		case 47:
			iVar0 = 8920;
			break;
		case 48:
			iVar0 = 8921;
			break;
		case 49:
			iVar0 = 8922;
			break;
		case 50:
			iVar0 = 8923;
			break;
		case 51:
			iVar0 = 8924;
			break;
		case 52:
			iVar0 = 8925;
			break;
		case 53:
			iVar0 = 8926;
			break;
		case 54:
			iVar0 = 8927;
			break;
		case 55:
			iVar0 = 8928;
			break;
		case 56:
			iVar0 = 8929;
			break;
		case 57:
			iVar0 = 8930;
			break;
		case 58:
			iVar0 = 8931;
			break;
		case 59:
			iVar0 = 8932;
			break;
		case 60:
			iVar0 = 8933;
			break;
		case 61:
			iVar0 = 8934;
			break;
		case 62:
			iVar0 = 8935;
			break;
		case 63:
			iVar0 = 8936;
			break;
		case 64:
			iVar0 = 8937;
			break;
		case 65:
			iVar0 = 8938;
			break;
		case 66:
		case 67:
		case 68:
		case 69:
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
			iVar0 = 9588;
			break;
		default:
			break;
	}
	return iVar0;
}

void func_838(bool bParam0, int iParam1)//Position - 0xC62EF
{
	int iVar0;
	int iVar1;
	if (iParam1 == -1)
	{
		iParam1 = __LIB_0__::getGlobal_1574918();
	}
	iVar1 = __LIB_25__::func_313(iParam1);
	switch (bParam0)
	{
		case 0:
			STATS::SET_FREEMODE_STRAND_PROGRESSION_STATUS(iVar1, 0);
			break;
		default:
			iVar0 = MISC::GET_PROFILE_SETTING(iVar1);
			if (BitTest(iVar0, bParam0))
			{
				MISC::CLEAR_BIT(&iVar0, bParam0);
				STATS::SET_FREEMODE_STRAND_PROGRESSION_STATUS(iVar1, iVar0);
			}
			break;
	}
}

bool func_839(int iParam0, int iParam1)//Position - 0xC6348
{
	int iVar0;
	int iVar1;
	if (iParam1 == -1)
	{
		iParam1 = __LIB_0__::getGlobal_1574918();
	}
	iVar0 = __LIB_25__::func_313(iParam1);
	iVar1 = MISC::GET_PROFILE_SETTING(iVar0);
	return BitTest(iVar1, iParam0);
}

bool func_840(bool bParam0)//Position - 0xC66D3
{
	return (bParam0 >= 0 && bParam0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS());
}

int func_841()//Position - 0xC727F
{
	if (Global_262145.f_4739 /* Tunable: OVERWRITE_CLOUD_VS_MISSION_AWARDS */)
	{
		return 1;
	}
	return 0;
}

void func_842()//Position - 0xC7A2A
{
	Global_2666222 = 1;
}

var func_843(bool bParam0)//Position - 0xC7B57
{
	if (bParam0)
	{
		return Global_262145.f_31734 /* Tunable: FIXER_FINALE_GOON_CASH_REWARD */;
	}
	return Global_262145.f_31735 /* Tunable: FIXER_FINALE_LEADER_CASH_REWARD */;
}

int func_844(bool bParam0, int iParam1)//Position - 0xC94D5
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (Global_1922981[iVar0 /*42*/].f_2 == iParam1)
		{
			if (Global_1922981[iVar0 /*42*/].f_1 == bParam0)
			{
				iVar1 = iVar0;
				iVar0 = 32;
			}
		}
		else
		{
			iVar2++;
		}
		iVar0++;
	}
	iVar1 = (iVar1 - iVar2);
	return iVar1;
}

int func_845(bool bParam0)//Position - 0xC952B
{
	int iVar0;
	int iVar1;
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (Global_1922981[iVar0 /*42*/].f_1 == bParam0)
		{
			iVar1 = iVar0;
			iVar0 = 32;
		}
		iVar0++;
	}
	return iVar1;
}

void func_846()//Position - 0xC987F
{
	switch (Global_4718592.f_116976)
	{
		case 76:
			AUDIO::TRIGGER_MUSIC_EVENT("CH_FAIL");
			break;
		case 78:
			AUDIO::TRIGGER_MUSIC_EVENT("HEI4_FIN_FAIL");
			break;
		case 79:
			AUDIO::TRIGGER_MUSIC_EVENT("MP_MC_TUNER_FAIL");
			break;
		case 81:
			AUDIO::TRIGGER_MUSIC_EVENT("MP_MC_FAIL");
			break;
		case 82:
		case 83:
		case 84:
		case 85:
		case 86:
		case 87:
			AUDIO::TRIGGER_MUSIC_EVENT("MP_MC_FIXER_FAIL");
			break;
		case 88:
			AUDIO::TRIGGER_MUSIC_EVENT("MP_MC_MPSUM2_FAIL");
			break;
		default:
			AUDIO::TRIGGER_MUSIC_EVENT("MP_MC_FAIL");
			break;
	}
}

int func_847(int iParam0, int iParam1)//Position - 0xC9B21
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 4;
				case 1:
					return 5;
				case 2:
					return 6;
				case 3:
					return 7;
				case 4:
					return 8;
				case 5:
					return 9;
				case 6:
					return 10;
				case 7:
					return 11;
				default:
			}
			return 0;
		default:
	}
	return 0;
}

void func_848()//Position - 0xCA485
{
	Global_1922955.f_6 = 1;
}

char* func_849(char* sParam0)//Position - 0xCC4F2
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		if (HUD::GET_LENGTH_OF_LITERAL_STRING(sParam0) == 1)
		{
			if (MISC::ARE_STRINGS_EQUAL(sParam0, "a") || MISC::ARE_STRINGS_EQUAL(sParam0, "A"))
			{
				return "A";
			}
			else if (MISC::ARE_STRINGS_EQUAL(sParam0, "b") || MISC::ARE_STRINGS_EQUAL(sParam0, "B"))
			{
				return "B";
			}
			else if (MISC::ARE_STRINGS_EQUAL(sParam0, "c") || MISC::ARE_STRINGS_EQUAL(sParam0, "C"))
			{
				return "C";
			}
			else if (MISC::ARE_STRINGS_EQUAL(sParam0, "d") || MISC::ARE_STRINGS_EQUAL(sParam0, "D"))
			{
				return "D";
			}
			else if (MISC::ARE_STRINGS_EQUAL(sParam0, "e") || MISC::ARE_STRINGS_EQUAL(sParam0, "E"))
			{
				return "E";
			}
			else if (MISC::ARE_STRINGS_EQUAL(sParam0, "f") || MISC::ARE_STRINGS_EQUAL(sParam0, "F"))
			{
				return "F";
			}
			else if (MISC::ARE_STRINGS_EQUAL(sParam0, "g") || MISC::ARE_STRINGS_EQUAL(sParam0, "G"))
			{
				return "G";
			}
			else if (MISC::ARE_STRINGS_EQUAL(sParam0, "h") || MISC::ARE_STRINGS_EQUAL(sParam0, "H"))
			{
				return "H";
			}
			else if (MISC::ARE_STRINGS_EQUAL(sParam0, "i") || MISC::ARE_STRINGS_EQUAL(sParam0, "I"))
			{
				return "I";
			}
			else if (MISC::ARE_STRINGS_EQUAL(sParam0, "j") || MISC::ARE_STRINGS_EQUAL(sParam0, "J"))
			{
				return "J";
			}
			else if (MISC::ARE_STRINGS_EQUAL(sParam0, "k") || MISC::ARE_STRINGS_EQUAL(sParam0, "K"))
			{
				return "K";
			}
			else if (MISC::ARE_STRINGS_EQUAL(sParam0, "l") || MISC::ARE_STRINGS_EQUAL(sParam0, "L"))
			{
				return "L";
			}
			else if (MISC::ARE_STRINGS_EQUAL(sParam0, "m") || MISC::ARE_STRINGS_EQUAL(sParam0, "M"))
			{
				return "M";
			}
			else if (MISC::ARE_STRINGS_EQUAL(sParam0, "n") || MISC::ARE_STRINGS_EQUAL(sParam0, "N"))
			{
				return "N";
			}
			else if (MISC::ARE_STRINGS_EQUAL(sParam0, "o") || MISC::ARE_STRINGS_EQUAL(sParam0, "O"))
			{
				return "O";
			}
			else if (MISC::ARE_STRINGS_EQUAL(sParam0, "p") || MISC::ARE_STRINGS_EQUAL(sParam0, "P"))
			{
				return "P";
			}
			else if (MISC::ARE_STRINGS_EQUAL(sParam0, "q") || MISC::ARE_STRINGS_EQUAL(sParam0, "Q"))
			{
				return "Q";
			}
			else if (MISC::ARE_STRINGS_EQUAL(sParam0, "r") || MISC::ARE_STRINGS_EQUAL(sParam0, "R"))
			{
				return "R";
			}
			else if (MISC::ARE_STRINGS_EQUAL(sParam0, "s") || MISC::ARE_STRINGS_EQUAL(sParam0, "S"))
			{
				return "S";
			}
			else if (MISC::ARE_STRINGS_EQUAL(sParam0, "t") || MISC::ARE_STRINGS_EQUAL(sParam0, "T"))
			{
				return "T";
			}
			else if (MISC::ARE_STRINGS_EQUAL(sParam0, "u") || MISC::ARE_STRINGS_EQUAL(sParam0, "U"))
			{
				return "U";
			}
			else if (MISC::ARE_STRINGS_EQUAL(sParam0, "v") || MISC::ARE_STRINGS_EQUAL(sParam0, "V"))
			{
				return "V";
			}
			else if (MISC::ARE_STRINGS_EQUAL(sParam0, "w") || MISC::ARE_STRINGS_EQUAL(sParam0, "W"))
			{
				return "W";
			}
			else if (MISC::ARE_STRINGS_EQUAL(sParam0, "x") || MISC::ARE_STRINGS_EQUAL(sParam0, "X"))
			{
				return "X";
			}
			else if (MISC::ARE_STRINGS_EQUAL(sParam0, "y") || MISC::ARE_STRINGS_EQUAL(sParam0, "Y"))
			{
				return "Y";
			}
			else if (MISC::ARE_STRINGS_EQUAL(sParam0, "z") || MISC::ARE_STRINGS_EQUAL(sParam0, "Z"))
			{
				return "Z";
			}
		}
	}
	return sParam0;
}

void func_850()//Position - 0xCDC55
{
	Global_1941273.f_10 = 1;
}

void func_851(bool bParam0, int iParam1)//Position - 0xCDCBF
{
	int iVar0;
	iVar0 = 0;
	if (DECORATOR::DECOR_EXIST_ON(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(bParam0), "MPBitset"))
	{
		iVar0 = DECORATOR::DECOR_GET_INT(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(bParam0), "MPBitset");
	}
	MISC::SET_BIT(&iVar0, iParam1);
	DECORATOR::DECOR_SET_INT(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(bParam0), "MPBitset", iVar0);
}

void func_852()//Position - 0x11D4BB
{
	if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("InchPickup"))
	{
		GRAPHICS::ANIMPOSTFX_STOP("InchPickup");
	}
	else if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("PPOrange"))
	{
		GRAPHICS::ANIMPOSTFX_STOP("PPOrange");
	}
	else if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("PPPurple"))
	{
		GRAPHICS::ANIMPOSTFX_STOP("PPPurple");
	}
	else if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("PPGreen"))
	{
		GRAPHICS::ANIMPOSTFX_STOP("PPGreen");
	}
	else if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("PPPink"))
	{
		GRAPHICS::ANIMPOSTFX_STOP("PPPink");
	}
	else if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("DeadlineNeon"))
	{
		GRAPHICS::ANIMPOSTFX_STOP("DeadlineNeon");
	}
	else if (GRAPHICS::GET_TIMECYCLE_MODIFIER_INDEX() != -1)
	{
		GRAPHICS::SET_TRANSITION_OUT_OF_TIMECYCLE_MODIFIER(1f);
	}
}

void func_853()//Position - 0x11D6C1
{
	if (!BitTest(Global_2815059.f_4660, 14))
	{
		MISC::SET_BIT(&(Global_2815059.f_4660), 14);
	}
}

int func_854(var uParam0, bool bParam1)//Position - 0x11DBD6
{
	if (PED::IS_PED_INJURED(uParam0->f_23[1]) && bParam1 >= 0)
	{
		if (Global_2689235[bParam1 /*453*/].f_257 == 2)
		{
			if (((Global_2689235[bParam1 /*453*/].f_258 == 1 || Global_2689235[bParam1 /*453*/].f_258 == 3) || Global_2689235[bParam1 /*453*/].f_258 == 2) || Global_2689235[bParam1 /*453*/].f_258 == 4)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_855(bool bParam0)//Position - 0x11FDAC
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 1;
	}
	return Global_2689235[bParam0 /*453*/].f_238;
}

void func_856(var uParam0, char* sParam1, char* sParam2, int iParam3)//Position - 0x1281A1
{
	switch (uParam0->f_1[iParam3])
	{
		case default:
			break;
		case 0:
			StringCopy(sParam1, "anim@arena@celeb@podium@prop@", 64);
			StringCopy(sParam2, "trophy_a_1st", 64);
			break;
		case 1:
			StringCopy(sParam1, "anim@arena@celeb@podium@prop@", 64);
			StringCopy(sParam2, "trophy_b_1st", 64);
			break;
		case 2:
			StringCopy(sParam1, "anim@arena@celeb@podium@prop@", 64);
			StringCopy(sParam2, "trophy_c_1st", 64);
			break;
		case 3:
			StringCopy(sParam1, "anim@arena@celeb@podium@prop@", 64);
			StringCopy(sParam2, "trophy_d_1st", 64);
			break;
		case 4:
			StringCopy(sParam1, "anim@arena@celeb@podium@prop@", 64);
			StringCopy(sParam2, "trophy_e_1st", 64);
			break;
		case 5:
			StringCopy(sParam1, "anim@arena@celeb@podium@prop@", 64);
			StringCopy(sParam2, "trophy_f_1st", 64);
			break;
		case 6:
			StringCopy(sParam1, "anim@arena@celeb@podium@no_prop@", 64);
			StringCopy(sParam2, "cheer_a_1st", 64);
			break;
		case 7:
			StringCopy(sParam1, "anim@arena@celeb@podium@no_prop@", 64);
			StringCopy(sParam2, "clapping_a_1st", 64);
			break;
		case 8:
			StringCopy(sParam1, "anim@arena@celeb@podium@no_prop@", 64);
			StringCopy(sParam2, "cocky_a_1st", 64);
			break;
		case 9:
			StringCopy(sParam1, "anim@arena@celeb@podium@no_prop@", 64);
			StringCopy(sParam2, "crowd_point_a_1st", 64);
			break;
		case 10:
			StringCopy(sParam1, "anim@arena@celeb@podium@no_prop@", 64);
			StringCopy(sParam2, "dance_a_1st", 64);
			break;
		case 11:
			StringCopy(sParam1, "anim@arena@celeb@podium@no_prop@", 64);
			StringCopy(sParam2, "dance_b_1st", 64);
			break;
		case 12:
			StringCopy(sParam1, "anim@arena@celeb@podium@no_prop@", 64);
			StringCopy(sParam2, "finger_guns_a_1st", 64);
			break;
		case 13:
			StringCopy(sParam1, "anim@arena@celeb@podium@no_prop@", 64);
			StringCopy(sParam2, "finger_guns_b_1st", 64);
			break;
		case 14:
			StringCopy(sParam1, "anim@arena@celeb@podium@no_prop@", 64);
			StringCopy(sParam2, "fist_pump_a_1st", 64);
			break;
		case 15:
			StringCopy(sParam1, "anim@arena@celeb@podium@no_prop@", 64);
			StringCopy(sParam2, "flip_off_a_1st", 64);
			break;
		case 16:
			StringCopy(sParam1, "anim@arena@celeb@podium@no_prop@", 64);
			StringCopy(sParam2, "flip_off_b_1st", 64);
			break;
		case 17:
			StringCopy(sParam1, "anim@arena@celeb@podium@no_prop@", 64);
			StringCopy(sParam2, "flip_off_c_1st", 64);
			break;
		case 18:
			StringCopy(sParam1, "anim@arena@celeb@podium@no_prop@", 64);
			StringCopy(sParam2, "hands_air_b_1st", 64);
			break;
		case 19:
			StringCopy(sParam1, "anim@arena@celeb@podium@no_prop@", 64);
			StringCopy(sParam2, "hands_air_c_1st", 64);
			break;
		case 20:
			StringCopy(sParam1, "anim@arena@celeb@podium@no_prop@", 64);
			StringCopy(sParam2, "make_noise_a_1st", 64);
			break;
		case 21:
			StringCopy(sParam1, "anim@arena@celeb@podium@no_prop@", 64);
			StringCopy(sParam2, "regal_a_1st", 64);
			break;
		case 22:
			StringCopy(sParam1, "anim@arena@celeb@podium@no_prop@", 64);
			StringCopy(sParam2, "regal_b_1st", 64);
			break;
		case 23:
			StringCopy(sParam1, "anim@arena@celeb@podium@no_prop@", 64);
			StringCopy(sParam2, "regal_c_1st", 64);
			break;
		case 24:
			StringCopy(sParam1, "anim@arena@celeb@podium@no_prop@", 64);
			StringCopy(sParam2, "shrug_off_a_1st", 64);
			break;
		case 33:
			StringCopy(sParam1, "anim@arena@celeb@podium@no_prop@", 64);
			StringCopy(sParam2, "cheer_a_2nd", 64);
			break;
		case 34:
			StringCopy(sParam1, "anim@arena@celeb@podium@no_prop@", 64);
			StringCopy(sParam2, "cocky_a_2nd", 64);
			break;
		case 35:
			StringCopy(sParam1, "anim@arena@celeb@podium@no_prop@", 64);
			StringCopy(sParam2, "crowd_point_a_2nd", 64);
			break;
		case 36:
			StringCopy(sParam1, "anim@arena@celeb@podium@no_prop@", 64);
			StringCopy(sParam2, "finger_guns_a_2nd", 64);
			break;
		case 37:
			StringCopy(sParam1, "anim@arena@celeb@podium@no_prop@", 64);
			StringCopy(sParam2, "finger_guns_b_2nd", 64);
			break;
		case 38:
			StringCopy(sParam1, "anim@arena@celeb@podium@no_prop@", 64);
			StringCopy(sParam2, "flip_off_a_2nd", 64);
			break;
		case 39:
			StringCopy(sParam1, "anim@arena@celeb@podium@no_prop@", 64);
			StringCopy(sParam2, "flip_off_b_2nd", 64);
			break;
		case 40:
			StringCopy(sParam1, "anim@arena@celeb@podium@no_prop@", 64);
			StringCopy(sParam2, "flip_off_c_2nd", 64);
			break;
		case 41:
			StringCopy(sParam1, "anim@arena@celeb@podium@no_prop@", 64);
			StringCopy(sParam2, "make_noise_a_2nd", 64);
			break;
		case 42:
			StringCopy(sParam1, "anim@arena@celeb@podium@no_prop@", 64);
			StringCopy(sParam2, "shrug_off_a_2nd", 64);
			break;
		case 43:
			StringCopy(sParam1, "anim@arena@celeb@podium@no_prop@", 64);
			StringCopy(sParam2, "clapping_a_3rd", 64);
			break;
		case 44:
			StringCopy(sParam1, "anim@arena@celeb@podium@no_prop@", 64);
			StringCopy(sParam2, "dance_a_3rd", 64);
			break;
		case 45:
			StringCopy(sParam1, "anim@arena@celeb@podium@no_prop@", 64);
			StringCopy(sParam2, "dance_b_3rd", 64);
			break;
		case 46:
			StringCopy(sParam1, "anim@arena@celeb@podium@no_prop@", 64);
			StringCopy(sParam2, "fist_pump_a_3rd", 64);
			break;
		case 47:
			StringCopy(sParam1, "anim@arena@celeb@podium@no_prop@", 64);
			StringCopy(sParam2, "hands_air_b_3rd", 64);
			break;
		case 48:
			StringCopy(sParam1, "anim@arena@celeb@podium@no_prop@", 64);
			StringCopy(sParam2, "hands_air_c_3rd", 64);
			break;
		case 49:
			StringCopy(sParam1, "anim@arena@celeb@podium@no_prop@", 64);
			StringCopy(sParam2, "regal_a_3rd", 64);
			break;
		case 50:
			StringCopy(sParam1, "anim@arena@celeb@podium@no_prop@", 64);
			StringCopy(sParam2, "regal_b_3rd", 64);
			break;
		case 51:
			StringCopy(sParam1, "anim@arena@celeb@podium@no_prop@", 64);
			StringCopy(sParam2, "regal_c_3rd", 64);
			break;
		case 25:
			StringCopy(sParam1, "anim@arena@celeb@podium@no_prop@", 64);
			StringCopy(sParam2, "air_slap_a_1st", 64);
			break;
		case 52:
			StringCopy(sParam1, "anim@arena@celeb@podium@no_prop@", 64);
			StringCopy(sParam2, "air_slap_a_2nd", 64);
			break;
		case 26:
			StringCopy(sParam1, "anim@arena@celeb@podium@prop@", 64);
			StringCopy(sParam2, "cham_chug_a_1st", 64);
			break;
		case 27:
			StringCopy(sParam1, "anim@arena@celeb@podium@prop@", 64);
			StringCopy(sParam2, "cham_spray_a_1st", 64);
			break;
		case 28:
			StringCopy(sParam1, "anim@arena@celeb@podium@prop@", 64);
			StringCopy(sParam2, "cham_spray_b_1st", 64);
			break;
		case 29:
			StringCopy(sParam1, "anim@arena@celeb@podium@prop@", 64);
			StringCopy(sParam2, "cham_spray_c_1st", 64);
			break;
		case 30:
			StringCopy(sParam1, "anim@arena@celeb@podium@prop@", 64);
			StringCopy(sParam2, "confetti_canon_a_1st", 64);
			break;
		case 31:
			StringCopy(sParam1, "anim@arena@celeb@podium@prop@", 64);
			StringCopy(sParam2, "confetti_canon_c_1st", 64);
			break;
		case 32:
			StringCopy(sParam1, "anim@arena@celeb@podium@prop@", 64);
			StringCopy(sParam2, "confetti_canon_d_1st", 64);
			break;
		case 53:
			StringCopy(sParam1, "anim@arena@celeb@podium@prop@", 64);
			StringCopy(sParam2, "cham_chug_a_2nd", 64);
			break;
		case 54:
			StringCopy(sParam1, "anim@arena@celeb@podium@prop@", 64);
			StringCopy(sParam2, "cham_spray_a_2nd", 64);
			break;
		case 55:
			StringCopy(sParam1, "anim@arena@celeb@podium@prop@", 64);
			StringCopy(sParam2, "cham_spray_b_2nd", 64);
			break;
		case 56:
			StringCopy(sParam1, "anim@arena@celeb@podium@prop@", 64);
			StringCopy(sParam2, "cham_spray_c_2nd", 64);
			break;
		case 57:
			StringCopy(sParam1, "anim@arena@celeb@podium@prop@", 64);
			StringCopy(sParam2, "confetti_canon_a_2nd", 64);
			break;
		case 58:
			StringCopy(sParam1, "anim@arena@celeb@podium@prop@", 64);
			StringCopy(sParam2, "confetti_canon_c_2nd", 64);
			break;
		case 59:
			StringCopy(sParam1, "anim@arena@celeb@podium@prop@", 64);
			StringCopy(sParam2, "confetti_canon_d_2nd", 64);
			break;
		case 60:
			StringCopy(sParam1, "anim@arena@celeb@podium@prop@", 64);
			StringCopy(sParam2, "cham_chug_a_3rd", 64);
			break;
		case 61:
			StringCopy(sParam1, "anim@arena@celeb@podium@prop@", 64);
			StringCopy(sParam2, "cham_spray_a_3rd", 64);
			break;
		case 62:
			StringCopy(sParam1, "anim@arena@celeb@podium@prop@", 64);
			StringCopy(sParam2, "cham_spray_b_3rd", 64);
			break;
		case 63:
			StringCopy(sParam1, "anim@arena@celeb@podium@prop@", 64);
			StringCopy(sParam2, "cham_spray_c_3rd", 64);
			break;
		case 64:
			StringCopy(sParam1, "anim@arena@celeb@podium@prop@", 64);
			StringCopy(sParam2, "confetti_canon_a_3rd", 64);
			break;
		case 65:
			StringCopy(sParam1, "anim@arena@celeb@podium@prop@", 64);
			StringCopy(sParam2, "confetti_canon_c_3rd", 64);
			break;
		case 66:
			StringCopy(sParam1, "anim@arena@celeb@podium@prop@", 64);
			StringCopy(sParam2, "confetti_canon_d_3rd", 64);
			break;
		case 109:
			StringCopy(sParam1, "anim@arena@celeb@flat@solo@no_props@", 64);
			StringCopy(sParam2, "angry_clap_a_player_a", 64);
			break;
		case 110:
			StringCopy(sParam1, "anim@arena@celeb@flat@solo@no_props@", 64);
			StringCopy(sParam2, "angry_clap_b_player_a", 64);
			break;
		case 129:
			StringCopy(sParam1, "anim@arena@celeb@flat@solo@no_props@", 64);
			StringCopy(sParam2, "angry_clap_b_player_b", 64);
			break;
		case 111:
			StringCopy(sParam1, "anim@arena@celeb@flat@solo@no_props@", 64);
			StringCopy(sParam2, "cap_a_player_a", 64);
			break;
		case 112:
			StringCopy(sParam1, "anim@arena@celeb@flat@solo@no_props@", 64);
			StringCopy(sParam2, "flip_a_player_a", 64);
			break;
		case 113:
			StringCopy(sParam1, "anim@arena@celeb@flat@solo@no_props@", 64);
			StringCopy(sParam2, "giggle_a_player_a", 64);
			break;
		case 130:
			StringCopy(sParam1, "anim@arena@celeb@flat@solo@no_props@", 64);
			StringCopy(sParam2, "giggle_a_player_b", 64);
			break;
		case 114:
			StringCopy(sParam1, "anim@arena@celeb@flat@solo@no_props@", 64);
			StringCopy(sParam2, "jump_a_player_a", 64);
			break;
		case 115:
			StringCopy(sParam1, "anim@arena@celeb@flat@solo@no_props@", 64);
			StringCopy(sParam2, "jump_b_player_a", 64);
			break;
		case 116:
			StringCopy(sParam1, "anim@arena@celeb@flat@solo@no_props@", 64);
			StringCopy(sParam2, "jump_c_player_a", 64);
			break;
		case 117:
			StringCopy(sParam1, "anim@arena@celeb@flat@solo@no_props@", 64);
			StringCopy(sParam2, "jump_d_player_a", 64);
			break;
		case 118:
			StringCopy(sParam1, "anim@arena@celeb@flat@solo@no_props@", 64);
			StringCopy(sParam2, "pageant_a_player_a", 64);
			break;
		case 131:
			StringCopy(sParam1, "anim@arena@celeb@flat@solo@no_props@", 64);
			StringCopy(sParam2, "pageant_a_player_b", 64);
			break;
		case 119:
			StringCopy(sParam1, "anim@arena@celeb@flat@solo@no_props@", 64);
			StringCopy(sParam2, "slide_a_player_a", 64);
			break;
		case 120:
			StringCopy(sParam1, "anim@arena@celeb@flat@solo@no_props@", 64);
			StringCopy(sParam2, "slide_b_player_a", 64);
			break;
		case 121:
			StringCopy(sParam1, "anim@arena@celeb@flat@solo@no_props@", 64);
			StringCopy(sParam2, "slide_c_player_a", 64);
			break;
		case 122:
			StringCopy(sParam1, "anim@arena@celeb@flat@solo@no_props@", 64);
			StringCopy(sParam2, "slugger_a_player_a", 64);
			break;
		case 123:
			StringCopy(sParam1, "anim@arena@celeb@flat@solo@no_props@", 64);
			StringCopy(sParam2, "smug_a_player_a", 64);
			break;
		case 132:
			StringCopy(sParam1, "anim@arena@celeb@flat@solo@no_props@", 64);
			StringCopy(sParam2, "smug_a_player_b", 64);
			break;
		case 124:
			StringCopy(sParam1, "anim@arena@celeb@flat@solo@no_props@", 64);
			StringCopy(sParam2, "smug_b_player_a", 64);
			break;
		case 133:
			StringCopy(sParam1, "anim@arena@celeb@flat@solo@no_props@", 64);
			StringCopy(sParam2, "smug_b_player_b", 64);
			break;
		case 125:
			StringCopy(sParam1, "anim@arena@celeb@flat@solo@no_props@", 64);
			StringCopy(sParam2, "taunt_b_player_a", 64);
			break;
		case 134:
			StringCopy(sParam1, "anim@arena@celeb@flat@solo@no_props@", 64);
			StringCopy(sParam2, "taunt_b_player_b", 64);
			break;
		case 135:
			StringCopy(sParam1, "anim@arena@celeb@flat@solo@no_props@", 64);
			StringCopy(sParam2, "taunt_c_player_b", 64);
			break;
		case 136:
			StringCopy(sParam1, "anim@arena@celeb@flat@solo@no_props@", 64);
			StringCopy(sParam2, "taunt_d_player_b", 64);
			break;
		case 137:
			StringCopy(sParam1, "anim@arena@celeb@flat@solo@no_props@", 64);
			StringCopy(sParam2, "taunt_e_player_b", 64);
			break;
		case 126:
			StringCopy(sParam1, "anim@arena@celeb@flat@solo@no_props@", 64);
			StringCopy(sParam2, "thumbs_down_a_player_a", 64);
			break;
		case 138:
			StringCopy(sParam1, "anim@arena@celeb@flat@solo@no_props@", 64);
			StringCopy(sParam2, "thumbs_down_a_player_b", 64);
			break;
		case 139:
			StringCopy(sParam1, "anim@arena@celeb@flat@solo@no_props@", 64);
			StringCopy(sParam2, "wave_a_player_b", 64);
			break;
		case 140:
			StringCopy(sParam1, "anim@arena@celeb@flat@solo@no_props@", 64);
			StringCopy(sParam2, "wow_a_player_b", 64);
			break;
		case 141:
			StringCopy(sParam1, "anim@arena@celeb@flat@solo@no_props@", 64);
			StringCopy(sParam2, "wow_b_player_b", 64);
			break;
		case 80:
			StringCopy(sParam1, "anim@arena@celeb@flat@paired@props@", 64);
			StringCopy(sParam2, "cham_a_player_a", 64);
			break;
		case 100:
			StringCopy(sParam1, "anim@arena@celeb@flat@paired@props@", 64);
			StringCopy(sParam2, "cham_a_player_b", 64);
			break;
		case 81:
			StringCopy(sParam1, "anim@arena@celeb@flat@paired@props@", 64);
			StringCopy(sParam2, "cham_b_player_a", 64);
			break;
		case 101:
			StringCopy(sParam1, "anim@arena@celeb@flat@paired@props@", 64);
			StringCopy(sParam2, "cham_b_player_b", 64);
			break;
		case 82:
			StringCopy(sParam1, "anim@arena@celeb@flat@paired@props@", 64);
			StringCopy(sParam2, "cham_c_player_a", 64);
			break;
		case 102:
			StringCopy(sParam1, "anim@arena@celeb@flat@paired@props@", 64);
			StringCopy(sParam2, "cham_c_player_b", 64);
			break;
		case 83:
			StringCopy(sParam1, "anim@arena@celeb@flat@paired@props@", 64);
			StringCopy(sParam2, "cham_d_player_a", 64);
			break;
		case 103:
			StringCopy(sParam1, "anim@arena@celeb@flat@paired@props@", 64);
			StringCopy(sParam2, "cham_d_player_b", 64);
			break;
		case 84:
			StringCopy(sParam1, "anim@arena@celeb@flat@paired@props@", 64);
			StringCopy(sParam2, "trophy_a_player_a", 64);
			break;
		case 104:
			StringCopy(sParam1, "anim@arena@celeb@flat@paired@props@", 64);
			StringCopy(sParam2, "trophy_a_player_b", 64);
			break;
		case 85:
			StringCopy(sParam1, "anim@arena@celeb@flat@paired@props@", 64);
			StringCopy(sParam2, "trophy_b_player_a", 64);
			break;
		case 105:
			StringCopy(sParam1, "anim@arena@celeb@flat@paired@props@", 64);
			StringCopy(sParam2, "trophy_b_player_b", 64);
			break;
		case 86:
			StringCopy(sParam1, "anim@arena@celeb@flat@paired@props@", 64);
			StringCopy(sParam2, "trophy_c_player_a", 64);
			break;
		case 106:
			StringCopy(sParam1, "anim@arena@celeb@flat@paired@props@", 64);
			StringCopy(sParam2, "trophy_c_player_b", 64);
			break;
		case 67:
			StringCopy(sParam1, "anim@arena@celeb@flat@paired@no_props@", 64);
			StringCopy(sParam2, "baseball_a_player_a", 64);
			break;
		case 87:
			StringCopy(sParam1, "anim@arena@celeb@flat@paired@no_props@", 64);
			StringCopy(sParam2, "baseball_a_player_b", 64);
			break;
		case 68:
			StringCopy(sParam1, "anim@arena@celeb@flat@paired@no_props@", 64);
			StringCopy(sParam2, "daps_b_player_a", 64);
			break;
		case 88:
			StringCopy(sParam1, "anim@arena@celeb@flat@paired@no_props@", 64);
			StringCopy(sParam2, "daps_b_player_b", 64);
			break;
		case 69:
			StringCopy(sParam1, "anim@arena@celeb@flat@paired@no_props@", 64);
			StringCopy(sParam2, "did_you_see_a_player_a", 64);
			break;
		case 89:
			StringCopy(sParam1, "anim@arena@celeb@flat@paired@no_props@", 64);
			StringCopy(sParam2, "did_you_see_a_player_b", 64);
			break;
		case 70:
			StringCopy(sParam1, "anim@arena@celeb@flat@paired@no_props@", 64);
			StringCopy(sParam2, "high_five_b_player_a", 64);
			break;
		case 90:
			StringCopy(sParam1, "anim@arena@celeb@flat@paired@no_props@", 64);
			StringCopy(sParam2, "high_five_b_player_b", 64);
			break;
		case 71:
			StringCopy(sParam1, "anim@arena@celeb@flat@paired@no_props@", 64);
			StringCopy(sParam2, "high_five_c_player_a", 64);
			break;
		case 91:
			StringCopy(sParam1, "anim@arena@celeb@flat@paired@no_props@", 64);
			StringCopy(sParam2, "high_five_c_player_b", 64);
			break;
		case 72:
			StringCopy(sParam1, "anim@arena@celeb@flat@paired@no_props@", 64);
			StringCopy(sParam2, "hype_a_player_a", 64);
			break;
		case 92:
			StringCopy(sParam1, "anim@arena@celeb@flat@paired@no_props@", 64);
			StringCopy(sParam2, "hype_a_player_b", 64);
			break;
		case 73:
			StringCopy(sParam1, "anim@arena@celeb@flat@paired@no_props@", 64);
			StringCopy(sParam2, "laugh_a_player_a", 64);
			break;
		case 93:
			StringCopy(sParam1, "anim@arena@celeb@flat@paired@no_props@", 64);
			StringCopy(sParam2, "laugh_a_player_b", 64);
			break;
		case 74:
			StringCopy(sParam1, "anim@arena@celeb@flat@paired@no_props@", 64);
			StringCopy(sParam2, "laugh_b_player_a", 64);
			break;
		case 94:
			StringCopy(sParam1, "anim@arena@celeb@flat@paired@no_props@", 64);
			StringCopy(sParam2, "laugh_b_player_b", 64);
			break;
		case 75:
			StringCopy(sParam1, "anim@arena@celeb@flat@paired@no_props@", 64);
			StringCopy(sParam2, "piggyback_b_player_a", 64);
			break;
		case 95:
			StringCopy(sParam1, "anim@arena@celeb@flat@paired@no_props@", 64);
			StringCopy(sParam2, "piggyback_b_player_b", 64);
			break;
		case 76:
			StringCopy(sParam1, "anim@arena@celeb@flat@paired@no_props@", 64);
			StringCopy(sParam2, "piggyback_c_player_a", 64);
			break;
		case 96:
			StringCopy(sParam1, "anim@arena@celeb@flat@paired@no_props@", 64);
			StringCopy(sParam2, "piggyback_c_player_b", 64);
			break;
		case 77:
			StringCopy(sParam1, "anim@arena@celeb@flat@paired@no_props@", 64);
			StringCopy(sParam2, "the_bird_a_player_a", 64);
			break;
		case 97:
			StringCopy(sParam1, "anim@arena@celeb@flat@paired@no_props@", 64);
			StringCopy(sParam2, "the_bird_a_player_b", 64);
			break;
		case 78:
			StringCopy(sParam1, "anim@arena@celeb@flat@paired@no_props@", 64);
			StringCopy(sParam2, "this_guy_a_player_a", 64);
			break;
		case 98:
			StringCopy(sParam1, "anim@arena@celeb@flat@paired@no_props@", 64);
			StringCopy(sParam2, "this_guy_a_player_b", 64);
			break;
		case 79:
			StringCopy(sParam1, "anim@arena@celeb@flat@paired@no_props@", 64);
			StringCopy(sParam2, "this_guy_b_player_a", 64);
			break;
		case 99:
			StringCopy(sParam1, "anim@arena@celeb@flat@paired@no_props@", 64);
			StringCopy(sParam2, "this_guy_b_player_b", 64);
			break;
		case 107:
			StringCopy(sParam1, "anim@arena@celeb@flat@solo@props@", 64);
			StringCopy(sParam2, "chug_beer_a_player_a", 64);
			break;
		case 108:
			StringCopy(sParam1, "anim@arena@celeb@flat@solo@props@", 64);
			StringCopy(sParam2, "chug_beer_b_player_a", 64);
			break;
		case 127:
			StringCopy(sParam1, "anim@arena@celeb@flat@solo@props@", 64);
			StringCopy(sParam2, "make_it_rain_b_player_b", 64);
			break;
		case 128:
			StringCopy(sParam1, "anim@arena@celeb@flat@solo@props@", 64);
			StringCopy(sParam2, "smoking_b_player_b", 64);
			break;
	}
}

void func_857(var uParam0)//Position - 0x12939F
{
	int iVar0;
	bool bVar1;
	if (uParam0->f_1206)
	{
		iVar0 = 0;
		while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
		{
			bVar1 = iVar0;
			if (__LIB_1__::func_693(bVar1, 0, 1))
			{
				NETWORK::SET_PLAYER_INVISIBLE_LOCALLY(bVar1, false);
			}
			iVar0++;
		}
	}
}

void func_858()//Position - 0x129980
{
	bool bVar0;
	NETWORK::SET_LOCAL_PLAYER_INVISIBLE_LOCALLY(true);
	bVar0 = false;
	while (bVar0 < 32)
	{
		if (__LIB_1__::func_693(bVar0, 0, 1))
		{
			NETWORK::SET_PLAYER_INVISIBLE_LOCALLY(bVar0, true);
		}
		bVar0++;
	}
}

int func_859(int iParam0, bool bParam1, int iParam2)//Position - 0x12A263
{
	char cVar0[64];
	int iVar1;
	int iVar2;
	int iVar3;
	if (iParam2 == -1)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
		{
			iParam2 = NETWORK::NETWORK_GET_INSTANCE_ID_OF_THIS_SCRIPT();
		}
	}
	StringCopy(&cVar0, SCRIPT::GET_THIS_SCRIPT_NAME(), 64);
	StringIntConCat(&cVar0, iParam2, 64);
	iVar1 = MISC::GET_HASH_KEY(&cVar0);
	iVar3 = -1;
	iVar2 = 0;
	while (iVar2 < 6)
	{
		if (Global_23150.f_6112[iVar2] == iVar1)
		{
			*iParam0 = iVar2;
			return 1;
		}
		else if (Global_23150.f_6112[iVar2] == 0)
		{
			iVar3 = iVar2;
		}
		iVar2++;
	}
	if (bParam1)
	{
		if (iVar3 != -1)
		{
			Global_23150.f_6112[iVar3] = iVar1;
			*iParam0 = iVar3;
			return 1;
		}
	}
	return 0;
}

void func_860(int* iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x12A65A
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
	{
		if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "SET_ICON"))
		{
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
			if (iParam2 == 65)
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
			}
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
	}
}

int func_861()//Position - 0x12B910
{
	if (__LIB_1__::func_200())
	{
		if (__LIB_1__::func_153())
		{
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_862()//Position - 0x12C9D2
{
	struct<10> Var0;
	Global_2715699.f_3813 = { Var0 };
}

int func_863(int iParam0)//Position - 0x12E512
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1922981)
	{
		if (Global_1922981[iVar0 /*42*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return 0;
}

void func_864(int iParam0, bool bParam1, int iParam2)//Position - 0x134008
{
	struct<5> Var0;
	int iVar1;
	Var0.f_0 = 959710041;
	Var0.f_2 = iParam0;
	Var0.f_3 = bParam1;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_4 = iParam2;
	iVar1 = __LIB_4__::func_970(1);
	if (!iVar1 == 0)
	{
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 5, iVar1);
	}
}

bool func_865()//Position - 0x13580C
{
	return Global_2714762.f_43.f_58;
}

void func_866(int iParam0)//Position - 0x136809
{
	if (!Global_2667225.f_26 == iParam0)
	{
		Global_2667225.f_26 = iParam0;
	}
}

int func_867()//Position - 0x1368E4
{
	if (BitTest(Global_1574989, 9))
	{
		return 0;
	}
	if (BitTest(Global_1574989, 10))
	{
		return 1;
	}
	return BitTest(Global_4718592.f_12, 18);
}

int func_868(int iParam0)//Position - 0x1373E0
{
	if (iParam0 >= 0)
	{
		return 1;
	}
	return 0;
}

void func_869(bool bParam0, bool bParam1)//Position - 0x1387B3
{
	if (BitTest(*bParam0, bParam1))
	{
		MISC::CLEAR_BIT(bParam0, bParam1);
	}
	else
	{
		MISC::SET_BIT(bParam0, bParam1);
	}
}

void func_870(int iParam0)//Position - 0x138E30
{
	MISC::CLEAR_BIT(&(Global_2815059.f_282), iParam0);
}

var func_871(int iParam0)//Position - 0x138E45
{
	return BitTest(Global_2815059.f_282, iParam0);
}

float func_872(int iParam0, struct<3> Param1, bool bParam2)//Position - 0x13A7DC
{
	struct<3> Var0;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
	}
	else
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, false) };
	}
	if (!bParam2)
	{
		Var0.f_2 = 0f;
		Param1.f_2 = 0f;
	}
	return SYSTEM::VDIST2(Var0, Param1);
}

char* func_873(int iParam0)//Position - 0x13B4E1
{
	switch (iParam0)
	{
		case 1:
			return "orb_target_a";
		case 2:
			return "orb_target_b";
		case 3:
			return "orb_target_c";
		case 4:
			return "orb_target_d";
		case 5:
			return "orb_target_e";
		case 6:
			return "orb_target_f";
		case 7:
			return "orb_target_g";
		default:
	}
	return "invalid";
}

void func_874(int iParam0)//Position - 0x13B557
{
	var uVar0;
	struct<3> Var1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	struct<3> Var6;
	struct<3> Var7;
	float fVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	float fVar14;
	float fVar15;
	Var1 = { ENTITY::GET_ENTITY_COORDS(iParam0, false) };
	if (CAM::DOES_CAM_EXIST(CAM::GET_RENDERING_CAM()))
	{
		if (!GRAPHICS::GET_SCREEN_COORD_FROM_WORLD_COORD(Var1, &uVar0, &uVar0))
		{
			HUD::GET_HUD_COLOUR(18, &iVar2, &iVar3, &iVar4, &uVar5);
			Var6 = { CAM::GET_CAM_COORD(CAM::GET_RENDERING_CAM()) };
			Var7 = { -90f, 0f, 0f };
			fVar8 = MISC::GET_DISTANCE_BETWEEN_COORDS(Var6.f_0, Var6.f_1, 0f, Var1.f_0, Var1.f_1, 0f, true);
			fVar9 = (Var1.f_2 - Var6.f_2);
			if (fVar8 > 0f)
			{
				fVar10 = MISC::ATAN((fVar9 / fVar8));
			}
			else
			{
				fVar10 = 0f;
			}
			fVar11 = __LIB_25__::func_421(Var6, Var1);
			fVar12 = MISC::ATAN2(((SYSTEM::COS(Var7.f_0) * SYSTEM::SIN(fVar10)) - ((SYSTEM::SIN(Var7.f_0) * SYSTEM::COS(fVar10)) * SYSTEM::COS(((fVar11 * -1f) - Var7.f_2)))), (SYSTEM::SIN(((fVar11 * -1f) - Var7.f_2)) * SYSTEM::COS(fVar10)));
			fVar13 = (0.5f - (SYSTEM::COS(fVar12) * 0.19f));
			fVar14 = (0.5f - (SYSTEM::SIN(fVar12) * 0.19f));
			fVar15 = MISC::GET_DISTANCE_BETWEEN_COORDS(Var1, Var6, false);
			GRAPHICS::DRAW_SPRITE("helicopterhud", "hudArrow", fVar13, fVar14, 0.02f, 0.04f, (fVar12 - 90f), iVar2, iVar3, iVar4, __LIB_25__::func_420(fVar15), true, 0);
			HUD::SET_TEXT_CENTRE(true);
		}
	}
}

void func_875(int iParam0, bool bParam1, int iParam2)//Position - 0x13B6A1
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(1);
	GRAPHICS::SET_DRAW_ORIGIN(ENTITY::GET_ENTITY_COORDS(iParam0, true), false);
	fVar0 = 0.017f;
	HUD::GET_HUD_COLOUR(iParam2, &iVar1, &iVar2, &iVar3, &iVar4);
	if (!bParam1)
	{
		GRAPHICS::DRAW_SPRITE("helicopterhud", "hud_corner", (-fVar0 * 0.6f), -fVar0, (fVar0 * 1.5f), (fVar0 * 1.5f), 0f, iVar1, iVar2, iVar3, iVar4, true, 0);
	}
	GRAPHICS::DRAW_SPRITE("helicopterhud", "hud_corner", (fVar0 * 0.6f), -fVar0, (fVar0 * 1.5f), (fVar0 * 1.5f), 90f, iVar1, iVar2, iVar3, iVar4, true, 0);
	GRAPHICS::DRAW_SPRITE("helicopterhud", "hud_corner", (-fVar0 * 0.6f), fVar0, (fVar0 * 1.5f), (fVar0 * 1.5f), 270f, iVar1, iVar2, iVar3, iVar4, true, 0);
	GRAPHICS::DRAW_SPRITE("helicopterhud", "hud_corner", (fVar0 * 0.6f), fVar0, (fVar0 * 1.5f), (fVar0 * 1.5f), 180f, iVar1, iVar2, iVar3, iVar4, true, 0);
	GRAPHICS::CLEAR_DRAW_ORIGIN();
}

int func_876(int iParam0, int iParam1)//Position - 0x13B7C3
{
	if (NETWORK::IS_ENTITY_A_GHOST(iParam0) || BitTest(Global_4980736.f_78578[iParam1 /*450*/].f_113, 25))
	{
		return 0;
	}
	return 1;
}

int func_877(int iParam0, int iParam1)//Position - 0x13BCB6
{
	if ((NETWORK::IS_ENTITY_A_GHOST(iParam0) || (PED::IS_PED_IN_ANY_VEHICLE(iParam0, false) && BitTest(Global_4980736.f_94390[iParam1 /*1004*/].f_540, 22))) || BitTest(Global_4980736.f_94390[iParam1 /*1004*/].f_540, 21))
	{
		return 0;
	}
	return 1;
}

int func_878(int iParam0)//Position - 0x13D375
{
	return ENTITY::GET_ENTITY_MODEL(PLAYER::GET_PLAYER_PED(iParam0));
}

void func_879(float fParam0)//Position - 0x13E6C9
{
	int iVar0;
	int iVar1;
	iVar0 = (100 - SYSTEM::FLOOR(fParam0));
	if (iVar0 <= 0)
	{
		iVar1 = 9;
	}
	else
	{
		iVar1 = 9;
	}
	__LIB_7__::func_603(iVar0, 100, "STAMINA_LEFT" /* GXT: STAMINA */, iVar1, -1, 13, -1f, -1f, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 1, -1, 0, -1, -1082130432, -1082130432, 0, 1, 0, 0, 1, -1, 0, -1, 1);
}

int func_880(int iParam0)//Position - 0x13F44E
{
	int iVar0;
	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = 0;
			break;
		case 10:
			iVar0 = 1;
			break;
		case 20:
			iVar0 = 2;
			break;
		case 30:
			iVar0 = 3;
			break;
		case 40:
			iVar0 = 4;
			break;
		case 50:
			iVar0 = 5;
			break;
		case 60:
			iVar0 = 6;
			break;
		case 70:
			iVar0 = 7;
			break;
		case 80:
			iVar0 = 8;
			break;
		case 90:
			iVar0 = 9;
			break;
	}
	return iVar0;
}

bool func_881()//Position - 0x140ABB
{
	return BitTest(Global_4718592.f_20, 0);
}

void func_882(var uParam0, bool bParam1)//Position - 0x141BC6
{
	struct<4> Var0;
	int iVar1;
	Var0.f_0 = 110901056;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = bParam1;
	Var0.f_3 = uParam0;
	iVar1 = __LIB_4__::func_970(1);
	if (!iVar1 == 0)
	{
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 4, iVar1);
	}
}

float func_883(int iParam0, int iParam1)//Position - 0x141F7E
{
	struct<3> Var0;
	struct<3> Var1;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
	}
	else
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, false) };
	}
	if (!ENTITY::IS_ENTITY_DEAD(iParam1, false))
	{
		Var1 = { ENTITY::GET_ENTITY_COORDS(iParam1, true) };
	}
	else
	{
		Var1 = { ENTITY::GET_ENTITY_COORDS(iParam1, false) };
	}
	return SYSTEM::VDIST2(Var0, Var1);
}

struct<4> func_884()//Position - 0x1476C4
{
	struct<4> Var0;
	if (Global_2703735.f_2400[0 /*80*/].f_1 != 0)
	{
		Var0 = { Global_2703735.f_2400[0 /*80*/].f_21 };
	}
	return Var0;
}

void func_885(char* sParam0, char* sParam1, char* sParam2)//Position - 0x147A5A
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<16> Var3;
	char cVar4[64];
	iVar0 = HUD::GET_LENGTH_OF_LITERAL_STRING(sParam0);
	iVar1 = HUD::GET_LENGTH_OF_LITERAL_STRING(sParam1);
	StringCopy(&Var3, "", 64);
	iVar2 = 0;
	while (iVar2 < iVar0)
	{
		if (iVar2 <= (iVar0 - iVar1))
		{
			StringCopy(&cVar4, HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME(sParam0, iVar2, (iVar2 + iVar1)), 64);
			if (MISC::ARE_STRINGS_EQUAL(sParam1, &cVar4))
			{
				if (iVar2 != 0)
				{
					StringCopy(&Var3, HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME(sParam0, 0, iVar2), 64);
				}
				StringConCat(&Var3, sParam2, 64);
				StringConCat(&Var3, HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME(sParam0, (iVar2 + iVar1), iVar0), 64);
				*sParam0 = { Var3 };
			}
		}
		iVar2++;
	}
}

int func_886(int iParam0)//Position - 0x147D9A
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	bVar0 = PLAYER::GET_PLAYER_INDEX();
	iVar1 = PLAYER::PLAYER_PED_ID();
	iVar2 = 1;
	if (__LIB_1__::func_693(bVar0, 1, 1))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(iVar1, true))
		{
			iVar5 = PED::GET_VEHICLE_PED_IS_IN(iVar1, true);
			iVar3 = 0;
			while (iVar3 < 32)
			{
				bVar4 = PLAYER::INT_TO_PLAYERINDEX(iVar3);
				if (__LIB_1__::func_693(bVar4, 1, 1))
				{
					if (PLAYER::GET_PLAYER_PED(bVar4) != iVar1)
					{
						if (PED::IS_PED_IN_VEHICLE(PLAYER::GET_PLAYER_PED(bVar4), iVar5, true))
						{
							iVar2++;
						}
					}
				}
				iVar3++;
			}
		}
	}
	if (iVar2 == iParam0)
	{
		return 1;
	}
	return 0;
}

void func_887(int iParam0, int iParam1)//Position - 0x1495F0
{
	if (iParam0 != iParam1)
	{
		if (iParam1 == 0)
		{
			if (!BitTest(Global_4718592.f_95506, 0))
			{
				MISC::SET_BIT(&(Global_4718592.f_95506), 0);
			}
		}
		else if (iParam1 == 1)
		{
			if (!BitTest(Global_4718592.f_95506, 1))
			{
				MISC::SET_BIT(&(Global_4718592.f_95506), 1);
			}
		}
		else if (iParam1 == 2)
		{
			if (!BitTest(Global_4718592.f_95506, 2))
			{
				MISC::SET_BIT(&(Global_4718592.f_95506), 2);
			}
		}
		else if (iParam1 == 3)
		{
			if (!BitTest(Global_4718592.f_95506, 3))
			{
				MISC::SET_BIT(&(Global_4718592.f_95506), 3);
			}
		}
	}
}

int func_888(int iParam0, int iParam1)//Position - 0x14AA57
{
	if (BitTest(Global_4980736.f_94390[iParam0 /*1004*/].f_537, 11) && Global_4980736.f_94390[iParam0 /*1004*/].f_663 == iParam1)
	{
		return 1;
	}
	if (BitTest(Global_4980736.f_94390[iParam0 /*1004*/].f_537, 11) && Global_4980736.f_94390[iParam0 /*1004*/].f_663 == -1)
	{
		return 1;
	}
	return 0;
}

struct<2> func_889()//Position - 0x14ABC4
{
	return Global_1958636;
}

struct<2> func_890()//Position - 0x14ABD2
{
	return Global_1958638;
}

char* func_891(int iParam0)//Position - 0x14B31F
{
	char* sVar0;
	if (!(iParam0 >= 0 && iParam0 <= 28))
	{
		return "";
	}
	switch (iParam0)
	{
		case 5:
			sVar0 = "SHD_STR_LVL1" /* GXT: You have 3 minutes */;
			break;
		case 6:
			sVar0 = "SHD_STR_LVL2" /* GXT: You have 2 minutes */;
			break;
		case 7:
			sVar0 = "SHD_STR_LVL3" /* GXT: You have 1 minute 30 seconds */;
			break;
		case 8:
			sVar0 = "SHD_STR_LVL4" /* GXT: You have 1 minute 20 seconds */;
			break;
		case 9:
			sVar0 = "SHD_STR_LVL5" /* GXT: You have 1 minute 10 seconds */;
			break;
		case 10:
			sVar0 = "SHD_STR_LVL6" /* GXT: You have 1 minute */;
			break;
		case 11:
			sVar0 = "SHD_STR_LVL7" /* GXT: You have 50 seconds */;
			break;
		case 21:
			sVar0 = "SHD_TAG_ASTRONG";
			break;
		case 22:
			sVar0 = "SHD_TAG_DSTRONG";
			break;
		case 23:
			sVar0 = "SHD_TAG_AWEAK";
			break;
		case 24:
			sVar0 = "SHD_TAG_DWEAK";
			break;
		default:
			sVar0 = "";
			break;
	}
	return sVar0;
}

char* func_892(int iParam0)//Position - 0x14B400
{
	char* sVar0;
	if (!(iParam0 >= 0 && iParam0 <= 28))
	{
		return "";
	}
	switch (iParam0)
	{
		case 0:
			sVar0 = "FMMC_SEL_OFF";
			break;
		case 1:
			sVar0 = "SHD_FVJ_HUNTED";
			break;
		case 2:
			sVar0 = "SHD_FVJ_HUNTER";
			break;
		case 3:
			sVar0 = "SHD_SPR_FASTER";
			break;
		case 4:
			sVar0 = "SHD_SPR_SUDDEN";
			break;
		case 5:
		case 12:
			sVar0 = "SHD_LVL1" /* GXT: Level 1 */;
			break;
		case 6:
		case 13:
			sVar0 = "SHD_LVL2" /* GXT: Level 2 */;
			break;
		case 7:
		case 14:
			sVar0 = "SHD_LVL3" /* GXT: Level 3 */;
			break;
		case 8:
		case 15:
			sVar0 = "SHD_LVL4" /* GXT: Level 4 */;
			break;
		case 9:
		case 16:
			sVar0 = "SHD_LVL5" /* GXT: Level 5 */;
			break;
		case 10:
		case 17:
			sVar0 = "SHD_LVL6" /* GXT: Level 6 */;
			break;
		case 11:
		case 18:
			sVar0 = "SHD_LVL7" /* GXT: Level 7 */;
			break;
		case 19:
			sVar0 = "SHD_LVL8" /* GXT: Level 8 */;
			break;
		case 20:
			sVar0 = "SHD_LVL9" /* GXT: Level 9 */;
			break;
		case 21:
		case 25:
			sVar0 = "SHD_TAG_DAY";
			break;
		case 22:
			sVar0 = "SHD_TAG_NIGHT";
			break;
		case 26:
			sVar0 = "SHD_LVL10" /* GXT: Level 10 */;
			break;
		case 23:
			sVar0 = "SHD_TAG_NIGHT";
			break;
		case 24:
			sVar0 = "SHD_TAG_DAY";
			break;
		case 27:
			sVar0 = "SHD_NVEH" /* GXT: New Vehicle */;
			break;
		case 28:
			sVar0 = "SHD_TOTH" /* GXT: Take out the Hunted! */;
			break;
	}
	return sVar0;
}

bool func_893(bool bParam0, var uParam1)//Position - 0x14DD68
{
	return (BitTest(Global_4718592.f_166137[bParam0], uParam1) && !MISC::IS_STRING_NULL_OR_EMPTY(&(Global_4718592.f_166007[bParam0 /*16*/])));
}

void func_894()//Position - 0x14DDB8
{
	Global_1649593.f_1166 = 1;
}

bool func_895(bool bParam0)//Position - 0x14F27F
{
	return BitTest(Global_1648034.f_241.f_136[__LIB_0__::func_161(9) /*33*/][bParam0], __LIB_0__::func_160(9));
}

int func_896(struct<3> Param0, struct<3> Param1, float fParam2)//Position - 0x150CDF
{
	if (MISC::GET_DISTANCE_BETWEEN_COORDS(Param0, Param1, true) < fParam2)
	{
		return 1;
	}
	return 0;
}

void func_897(int iParam0)//Position - 0x151E78
{
	struct<3> Var0;
	int iVar1;
	Var0.f_0 = -1344471069;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = iParam0;
	iVar1 = __LIB_4__::func_970(1);
	if (!iVar1 == 0)
	{
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 3, iVar1);
	}
}

void func_898(int iParam0, int iParam1)//Position - 0x1527BC
{
	struct<4> Var0;
	int iVar1;
	Var0.f_0 = -1211233918;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = iParam0;
	Var0.f_3 = iParam1;
	iVar1 = __LIB_4__::func_970(1);
	if (!iVar1 == 0)
	{
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 4, iVar1);
	}
}

int func_899(bool bParam0)//Position - 0x153038
{
	int iVar0;
	iVar0 = 1;
	if (BitTest(Global_4718592.f_658[bParam0 /*22957*/].f_12180, 11))
	{
		iVar0 = 0;
	}
	return iVar0;
}

bool func_900(int iParam0)//Position - 0x1574AC
{
	return Global_4980736.f_5[iParam0 /*273*/].f_72[0] == 1;
}

int func_901(int iParam0)//Position - 0x158057
{
	int iVar0;
	iVar0 = 0;
	if ((BitTest(Global_4980736.f_5[iParam0 /*273*/].f_88, 9) || BitTest(Global_4980736.f_5[iParam0 /*273*/].f_88, 10)) || BitTest(Global_4980736.f_5[iParam0 /*273*/].f_89, 26))
	{
		iVar0 = 1;
	}
	return iVar0;
}

void func_902(var uParam0)//Position - 0x158151
{
	struct<3> Var0;
	int iVar1;
	Var0.f_0 = -1599357371;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = uParam0;
	iVar1 = __LIB_4__::func_970(1);
	if (!iVar1 == 0)
	{
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 3, iVar1);
	}
}

void func_903()//Position - 0x15818A
{
	struct<2> Var0;
	int iVar1;
	Var0.f_0 = -1681272815;
	Var0.f_1 = PLAYER::PLAYER_ID();
	iVar1 = __LIB_4__::func_970(1);
	if (!iVar1 == 0)
	{
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 2, iVar1);
	}
}

void func_904(var uParam0, bool bParam1, int iParam2)//Position - 0x1582D0
{
	struct<5> Var0;
	int iVar1;
	Var0.f_0 = 1823618518;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = uParam0;
	Var0.f_3 = bParam1;
	Var0.f_4 = iParam2;
	iVar1 = __LIB_4__::func_970(1);
	if (!iVar1 == 0)
	{
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 5, iVar1);
	}
}

void func_905(int iParam0, bool bParam1)//Position - 0x158535
{
	struct<4> Var0;
	int iVar1;
	Var0.f_0 = 81563277;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = iParam0;
	Var0.f_3 = bParam1;
	iVar1 = __LIB_4__::func_970(1);
	if (!iVar1 == 0)
	{
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 4, iVar1);
	}
}

int func_906(bool bParam0, bool bParam1)//Position - 0x158B9C
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	if (bParam1)
	{
		MISC::SET_BIT(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_35), 1);
	}
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		MISC::CLEAR_BIT(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_35), 1);
		MISC::CLEAR_BIT(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_35), 2);
		MISC::CLEAR_BIT(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_35), 0);
		return 1;
	}
	else
	{
		iVar2 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		MISC::SET_BIT(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_35), 2);
		if (!bParam0)
		{
			MISC::SET_BIT(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_35), 0);
			iVar0 = -1;
			while (iVar0 <= 2)
			{
				if (!VEHICLE::IS_VEHICLE_SEAT_FREE(iVar2, iVar0, false))
				{
					iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar2, iVar0, false);
					if (iVar1 != 0)
					{
						if (iVar1 != PLAYER::PLAYER_PED_ID())
						{
							if (PED::IS_PED_A_PLAYER(iVar1))
							{
								bVar3 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1);
								if (__LIB_1__::func_693(bVar3, 1, 1))
								{
									if (!BitTest(Global_2689235[bVar3 /*453*/].f_35, 0))
									{
										return 0;
									}
								}
							}
						}
					}
				}
				iVar0++;
			}
			MISC::CLEAR_BIT(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_35), 1);
			MISC::CLEAR_BIT(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_35), 2);
			MISC::CLEAR_BIT(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_35), 0);
			return 1;
		}
	}
	return 0;
}

bool func_907(int iParam0, int iParam1)//Position - 0x15B54F
{
	*iParam1 = -1;
	switch (iParam0)
	{
		case joaat("WEAPON_PISTOL"):
			*iParam1 = joaat("AMMO_PISTOL");
			break;
		case joaat("WEAPON_COMBATPISTOL"):
			*iParam1 = joaat("AMMO_PISTOL");
			break;
		case joaat("WEAPON_APPISTOL"):
			*iParam1 = joaat("AMMO_PISTOL");
			break;
		case joaat("WEAPON_PISTOL50"):
			*iParam1 = joaat("AMMO_PISTOL");
			break;
		case joaat("WEAPON_SNSPISTOL"):
			*iParam1 = joaat("AMMO_PISTOL");
			break;
		case joaat("WEAPON_HEAVYPISTOL"):
			*iParam1 = joaat("AMMO_PISTOL");
			break;
		case joaat("WEAPON_VINTAGEPISTOL"):
			*iParam1 = joaat("AMMO_PISTOL");
			break;
		case joaat("WEAPON_MICROSMG"):
			*iParam1 = joaat("AMMO_SMG");
			break;
		case joaat("WEAPON_SMG"):
			*iParam1 = joaat("AMMO_SMG");
			break;
		case joaat("WEAPON_ASSAULTSMG"):
			*iParam1 = joaat("AMMO_SMG");
			break;
		case joaat("WEAPON_COMBATPDW"):
			*iParam1 = joaat("AMMO_SMG");
			break;
		case joaat("WEAPON_ASSAULTRIFLE"):
			*iParam1 = joaat("AMMO_RIFLE");
			break;
		case joaat("WEAPON_CARBINERIFLE"):
			*iParam1 = joaat("AMMO_RIFLE");
			break;
		case joaat("WEAPON_ADVANCEDRIFLE"):
			*iParam1 = joaat("AMMO_RIFLE");
			break;
		case joaat("WEAPON_SPECIALCARBINE"):
			*iParam1 = joaat("AMMO_RIFLE");
			break;
		case joaat("WEAPON_BULLPUPRIFLE"):
			*iParam1 = joaat("AMMO_RIFLE");
			break;
		case joaat("WEAPON_MG"):
			*iParam1 = joaat("AMMO_MG");
			break;
		case joaat("WEAPON_COMBATMG"):
			*iParam1 = joaat("AMMO_MG");
			break;
		case joaat("WEAPON_ASSAULTMG"):
			*iParam1 = joaat("AMMO_MG");
			break;
		case joaat("WEAPON_GUSENBERG"):
			*iParam1 = joaat("AMMO_MG");
			break;
		case joaat("WEAPON_PUMPSHOTGUN"):
			*iParam1 = joaat("AMMO_SHOTGUN");
			break;
		case joaat("WEAPON_SAWNOFFSHOTGUN"):
			*iParam1 = joaat("AMMO_SHOTGUN");
			break;
		case joaat("WEAPON_ASSAULTSHOTGUN"):
			*iParam1 = joaat("AMMO_SHOTGUN");
			break;
		case joaat("WEAPON_BULLPUPSHOTGUN"):
			*iParam1 = joaat("AMMO_SHOTGUN");
			break;
		case joaat("WEAPON_HEAVYSHOTGUN"):
			*iParam1 = joaat("AMMO_SHOTGUN");
			break;
		case joaat("WEAPON_SNIPERRIFLE"):
			*iParam1 = joaat("AMMO_SNIPER");
			break;
		case joaat("WEAPON_HEAVYSNIPER"):
			*iParam1 = joaat("AMMO_SNIPER");
			break;
		case joaat("WEAPON_MUSKET"):
			*iParam1 = joaat("AMMO_SHOTGUN");
			break;
		case joaat("WEAPON_MARKSMANRIFLE"):
			*iParam1 = joaat("AMMO_SNIPER");
			break;
		case joaat("WEAPON_GRENADELAUNCHER"):
			*iParam1 = joaat("AMMO_GRENADELAUNCHER");
			break;
		case joaat("WEAPON_RPG"):
			*iParam1 = joaat("AMMO_RPG");
			break;
		case joaat("WEAPON_MINIGUN"):
			*iParam1 = joaat("AMMO_MINIGUN");
			break;
		case joaat("WEAPON_FIREWORK"):
			*iParam1 = joaat("AMMO_FIREWORK");
			break;
		case joaat("WEAPON_FLAREGUN"):
			*iParam1 = joaat("AMMO_FLAREGUN");
			break;
		case joaat("WEAPON_HOMINGLAUNCHER"):
			*iParam1 = joaat("AMMO_HOMINGLAUNCHER");
			break;
		case joaat("WEAPON_PROXMINE"):
			*iParam1 = joaat("AMMO_PROXMINE");
			break;
		case joaat("WEAPON_RAILGUN"):
			*iParam1 = joaat("AMMO_RAILGUN");
			break;
		case joaat("WEAPON_MARKSMANPISTOL"):
			*iParam1 = joaat("AMMO_PISTOL");
			break;
		case joaat("WEAPON_MACHINEPISTOL"):
			*iParam1 = joaat("AMMO_SMG");
			break;
		case joaat("WEAPON_REVOLVER"):
			*iParam1 = joaat("AMMO_PISTOL");
			break;
		case joaat("WEAPON_DBSHOTGUN"):
			*iParam1 = joaat("AMMO_SHOTGUN");
			break;
		case joaat("WEAPON_COMPACTRIFLE"):
			*iParam1 = joaat("AMMO_RIFLE");
			break;
		case joaat("WEAPON_AUTOSHOTGUN"):
			*iParam1 = joaat("AMMO_SHOTGUN");
			break;
		case joaat("WEAPON_COMPACTLAUNCHER"):
			*iParam1 = joaat("AMMO_GRENADELAUNCHER");
			break;
		case joaat("WEAPON_MINISMG"):
			*iParam1 = joaat("AMMO_SMG");
			break;
		case joaat("WEAPON_PIPEBOMB"):
			*iParam1 = joaat("AMMO_PIPEBOMB");
			break;
		case joaat("WEAPON_DOUBLEACTION"):
			*iParam1 = joaat("AMMO_PISTOL");
			break;
		case joaat("WEAPON_PISTOL_MK2"):
			*iParam1 = joaat("AMMO_PISTOL");
			if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_PISTOL_MK2_CLIP_FMJ")))
				{
					*iParam1 = joaat("AMMO_PISTOL_FMJ");
				}
				if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_PISTOL_MK2_CLIP_HOLLOWPOINT")))
				{
					*iParam1 = joaat("AMMO_PISTOL_HOLLOWPOINT");
				}
				if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_PISTOL_MK2_CLIP_INCENDIARY")))
				{
					*iParam1 = joaat("AMMO_PISTOL_INCENDIARY");
				}
				if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_PISTOL_MK2_CLIP_TRACER")))
				{
					*iParam1 = joaat("AMMO_PISTOL_TRACER");
				}
			}
			break;
		case joaat("WEAPON_SMG_MK2"):
			*iParam1 = joaat("AMMO_SMG");
			if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_SMG_MK2_CLIP_FMJ")))
				{
					*iParam1 = joaat("AMMO_SMG_FMJ");
				}
				if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_SMG_MK2_CLIP_HOLLOWPOINT")))
				{
					*iParam1 = joaat("AMMO_SMG_HOLLOWPOINT");
				}
				if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_SMG_MK2_CLIP_INCENDIARY")))
				{
					*iParam1 = joaat("AMMO_SMG_INCENDIARY");
				}
				if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_SMG_MK2_CLIP_TRACER")))
				{
					*iParam1 = joaat("AMMO_SMG_TRACER");
				}
			}
			break;
		case joaat("WEAPON_HEAVYSNIPER_MK2"):
			*iParam1 = joaat("AMMO_SNIPER");
			if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_ARMORPIERCING")))
				{
					*iParam1 = joaat("AMMO_SNIPER_ARMORPIERCING");
				}
				if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_EXPLOSIVE")))
				{
					*iParam1 = joaat("AMMO_SNIPER_EXPLOSIVE");
				}
				if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_FMJ")))
				{
					*iParam1 = joaat("AMMO_SNIPER_FMJ");
				}
				if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_INCENDIARY")))
				{
					*iParam1 = joaat("AMMO_SNIPER_INCENDIARY");
				}
			}
			break;
		case joaat("WEAPON_COMBATMG_MK2"):
			*iParam1 = joaat("AMMO_MG");
			if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_COMBATMG_MK2_CLIP_ARMORPIERCING")))
				{
					*iParam1 = joaat("AMMO_MG_ARMORPIERCING");
				}
				if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_COMBATMG_MK2_CLIP_FMJ")))
				{
					*iParam1 = joaat("AMMO_MG_FMJ");
				}
				if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_COMBATMG_MK2_CLIP_INCENDIARY")))
				{
					*iParam1 = joaat("AMMO_MG_INCENDIARY");
				}
				if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_COMBATMG_MK2_CLIP_TRACER")))
				{
					*iParam1 = joaat("AMMO_MG_TRACER");
				}
			}
			break;
		case joaat("WEAPON_ASSAULTRIFLE_MK2"):
			*iParam1 = joaat("AMMO_RIFLE");
			if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_ARMORPIERCING")))
				{
					*iParam1 = joaat("AMMO_RIFLE_ARMORPIERCING");
				}
				if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_FMJ")))
				{
					*iParam1 = joaat("AMMO_RIFLE_FMJ");
				}
				if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_INCENDIARY")))
				{
					*iParam1 = joaat("AMMO_RIFLE_INCENDIARY");
				}
				if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_TRACER")))
				{
					*iParam1 = joaat("AMMO_RIFLE_TRACER");
				}
			}
			break;
		case joaat("WEAPON_CARBINERIFLE_MK2"):
			*iParam1 = joaat("AMMO_RIFLE");
			if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_ARMORPIERCING")))
				{
					*iParam1 = joaat("AMMO_RIFLE_ARMORPIERCING");
				}
				if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_FMJ")))
				{
					*iParam1 = joaat("AMMO_RIFLE_FMJ");
				}
				if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_INCENDIARY")))
				{
					*iParam1 = joaat("AMMO_RIFLE_INCENDIARY");
				}
				if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_TRACER")))
				{
					*iParam1 = joaat("AMMO_RIFLE_TRACER");
				}
			}
			break;
		case joaat("WEAPON_PUMPSHOTGUN_MK2"):
			*iParam1 = joaat("AMMO_SHOTGUN");
			if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_PUMPSHOTGUN_MK2_CLIP_ARMORPIERCING")))
				{
					*iParam1 = joaat("AMMO_SHOTGUN_ARMORPIERCING");
				}
				if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_PUMPSHOTGUN_MK2_CLIP_EXPLOSIVE")))
				{
					*iParam1 = joaat("AMMO_SHOTGUN_EXPLOSIVE");
				}
				if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_PUMPSHOTGUN_MK2_CLIP_HOLLOWPOINT")))
				{
					*iParam1 = joaat("AMMO_SHOTGUN_HOLLOWPOINT");
				}
				if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_PUMPSHOTGUN_MK2_CLIP_INCENDIARY")))
				{
					*iParam1 = joaat("AMMO_SHOTGUN_INCENDIARY");
				}
			}
			break;
		case joaat("WEAPON_SPECIALCARBINE_MK2"):
			*iParam1 = joaat("AMMO_RIFLE");
			if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_SPECIALCARBINE_MK2_CLIP_ARMORPIERCING")))
				{
					*iParam1 = joaat("AMMO_RIFLE_ARMORPIERCING");
				}
				if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_SPECIALCARBINE_MK2_CLIP_FMJ")))
				{
					*iParam1 = joaat("AMMO_RIFLE_FMJ");
				}
				if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_SPECIALCARBINE_MK2_CLIP_INCENDIARY")))
				{
					*iParam1 = joaat("AMMO_RIFLE_INCENDIARY");
				}
				if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_SPECIALCARBINE_MK2_CLIP_TRACER")))
				{
					*iParam1 = joaat("AMMO_RIFLE_TRACER");
				}
			}
			break;
		case joaat("WEAPON_SNSPISTOL_MK2"):
			*iParam1 = joaat("AMMO_PISTOL");
			if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_SNSPISTOL_MK2_CLIP_FMJ")))
				{
					*iParam1 = joaat("AMMO_PISTOL_FMJ");
				}
				if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_SNSPISTOL_MK2_CLIP_HOLLOWPOINT")))
				{
					*iParam1 = joaat("AMMO_PISTOL_HOLLOWPOINT");
				}
				if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_SNSPISTOL_MK2_CLIP_INCENDIARY")))
				{
					*iParam1 = joaat("AMMO_PISTOL_INCENDIARY");
				}
				if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_SNSPISTOL_MK2_CLIP_TRACER")))
				{
					*iParam1 = joaat("AMMO_PISTOL_TRACER");
				}
			}
			break;
		case joaat("WEAPON_MARKSMANRIFLE_MK2"):
			*iParam1 = joaat("AMMO_SNIPER");
			if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_MARKSMANRIFLE_MK2_CLIP_ARMORPIERCING")))
				{
					*iParam1 = joaat("AMMO_SNIPER_ARMORPIERCING");
				}
				if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_MARKSMANRIFLE_MK2_CLIP_FMJ")))
				{
					*iParam1 = joaat("AMMO_SNIPER_FMJ");
				}
				if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_MARKSMANRIFLE_MK2_CLIP_INCENDIARY")))
				{
					*iParam1 = joaat("AMMO_SNIPER_INCENDIARY");
				}
				if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_MARKSMANRIFLE_MK2_CLIP_TRACER")))
				{
					*iParam1 = joaat("AMMO_SNIPER_TRACER");
				}
			}
			break;
		case joaat("WEAPON_REVOLVER_MK2"):
			*iParam1 = joaat("AMMO_PISTOL");
			if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_REVOLVER_MK2_CLIP_FMJ")))
				{
					*iParam1 = joaat("AMMO_PISTOL_FMJ");
				}
				if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_REVOLVER_MK2_CLIP_HOLLOWPOINT")))
				{
					*iParam1 = joaat("AMMO_PISTOL_HOLLOWPOINT");
				}
				if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_REVOLVER_MK2_CLIP_INCENDIARY")))
				{
					*iParam1 = joaat("AMMO_PISTOL_INCENDIARY");
				}
				if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_REVOLVER_MK2_CLIP_TRACER")))
				{
					*iParam1 = joaat("AMMO_PISTOL_TRACER");
				}
			}
			break;
		case joaat("WEAPON_BULLPUPRIFLE_MK2"):
			*iParam1 = joaat("AMMO_RIFLE");
			if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_BULLPUPRIFLE_MK2_CLIP_ARMORPIERCING")))
				{
					*iParam1 = joaat("AMMO_RIFLE_ARMORPIERCING");
				}
				if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_BULLPUPRIFLE_MK2_CLIP_FMJ")))
				{
					*iParam1 = joaat("AMMO_RIFLE_FMJ");
				}
				if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_BULLPUPRIFLE_MK2_CLIP_INCENDIARY")))
				{
					*iParam1 = joaat("AMMO_RIFLE_INCENDIARY");
				}
				if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_BULLPUPRIFLE_MK2_CLIP_TRACER")))
				{
					*iParam1 = joaat("AMMO_RIFLE_TRACER");
				}
			}
			break;
		case joaat("WEAPON_RAYPISTOL"):
			*iParam1 = joaat("AMMO_RAYPISTOL");
			break;
		case joaat("WEAPON_RAYCARBINE"):
			*iParam1 = joaat("AMMO_MG");
			break;
		case joaat("WEAPON_RAYMINIGUN"):
			*iParam1 = joaat("AMMO_MINIGUN");
			break;
		case joaat("WEAPON_CERAMICPISTOL"):
			*iParam1 = joaat("AMMO_PISTOL");
			break;
		case joaat("WEAPON_NAVYREVOLVER"):
			*iParam1 = joaat("AMMO_PISTOL");
			break;
		case joaat("WEAPON_MILITARYRIFLE"):
			*iParam1 = joaat("AMMO_RIFLE");
			break;
		case joaat("WEAPON_COMBATSHOTGUN"):
			*iParam1 = joaat("AMMO_SHOTGUN");
			break;
		case joaat("WEAPON_GADGETPISTOL"):
			*iParam1 = joaat("AMMO_PISTOL");
			break;
		case joaat("WEAPON_HEAVYRIFLE"):
			*iParam1 = joaat("AMMO_RIFLE");
			break;
		case joaat("WEAPON_EMPLAUNCHER"):
			*iParam1 = joaat("AMMO_EMPLAUNCHER");
			break;
		case joaat("WEAPON_STUNGUN_MP"):
			*iParam1 = joaat("AMMO_STUNGUN");
			break;
		case joaat("WEAPON_TACTICALRIFLE"):
			*iParam1 = joaat("AMMO_RIFLE");
			break;
		case joaat("WEAPON_PRECISIONRIFLE"):
			*iParam1 = joaat("AMMO_SNIPER");
			break;
	}
	return *iParam1 != -1;
}

void func_908(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, int iParam5)//Position - 0x167EF5
{
	struct<8> Var0;
	int iVar1;
	int iVar2;
	Var0.f_7 = 10;
	Var0.f_0 = -825442862;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = iParam0;
	Var0.f_3 = bParam1;
	Var0.f_4 = bParam2;
	Var0.f_5 = bParam3;
	Var0.f_6 = iParam4;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < *iParam5)
	{
		if (iVar1 < *iParam5)
		{
			Var0.f_7[iVar1] = (*iParam5)[iVar1];
		}
	else
	{
		}
		else
		{
			iVar1++;
		}
	}
	iVar2 = __LIB_4__::func_970(1);
	if (!iVar2 == 0)
	{
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 18, iVar2);
	}
}

int func_909(bool bParam0, int iParam1, int iParam2)//Position - 0x168420
{
	int iVar0;
	iVar0 = 0;
	if (iParam2 < 17 && BitTest(Global_4980736.f_94390[bParam0 /*1004*/].f_509[iParam1], iParam2))
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_910(bool bParam0, int iParam1)//Position - 0x168455
{
	switch (iParam1)
	{
		case 0:
			if (BitTest(Global_4980736.f_94390[bParam0 /*1004*/].f_531, 21))
			{
				return 1;
			}
			break;
		case 1:
			if (BitTest(Global_4980736.f_94390[bParam0 /*1004*/].f_531, 22))
			{
				return 1;
			}
			break;
		case 2:
			if (BitTest(Global_4980736.f_94390[bParam0 /*1004*/].f_531, 23))
			{
				return 1;
			}
			break;
		case 3:
			if (BitTest(Global_4980736.f_94390[bParam0 /*1004*/].f_531, 24))
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_911(bool bParam0, bool bParam1, bool bParam2)//Position - 0x1695C8
{
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 71 /*INPUT_VEH_ACCELERATE*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 72 /*INPUT_VEH_BRAKE*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 76 /*INPUT_VEH_HANDBRAKE*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 59 /*INPUT_VEH_MOVE_LR*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 60 /*INPUT_VEH_MOVE_UD*/, true);
	if (bParam0)
	{
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 75 /*INPUT_VEH_EXIT*/, true);
	}
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 80 /*INPUT_VEH_CIN_CAM*/, true);
	if (!bParam1)
	{
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 69 /*INPUT_VEH_ATTACK*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 70 /*INPUT_VEH_ATTACK2*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 68 /*INPUT_VEH_AIM*/, true);
	}
	if (bParam2)
	{
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 337 /*INPUT_VEH_HYDRAULICS_CONTROL_TOGGLE*/, true);
	}
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 74 /*INPUT_VEH_HEADLIGHT*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 86 /*INPUT_VEH_HORN*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 81 /*INPUT_VEH_NEXT_RADIO*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 82 /*INPUT_VEH_PREV_RADIO*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 114 /*INPUT_VEH_FLY_ATTACK*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 107 /*INPUT_VEH_FLY_ROLL_LR*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 110 /*INPUT_VEH_FLY_PITCH_UD*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 89 /*INPUT_VEH_FLY_YAW_LEFT*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 89 /*INPUT_VEH_FLY_YAW_LEFT*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 87 /*INPUT_VEH_FLY_THROTTLE_UP*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 88 /*INPUT_VEH_FLY_THROTTLE_DOWN*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 113 /*INPUT_VEH_FLY_UNDERCARRIAGE*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 115 /*INPUT_VEH_FLY_SELECT_NEXT_WEAPON*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 116 /*INPUT_VEH_FLY_SELECT_PREV_WEAPON*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 117 /*INPUT_VEH_FLY_SELECT_TARGET_LEFT*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 118 /*INPUT_VEH_FLY_SELECT_TARGET_RIGHT*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 119 /*INPUT_VEH_FLY_VERTICAL_FLIGHT_MODE*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 351 /*INPUT_VEH_ROCKET_BOOST*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 352 /*INPUT_VEH_FLY_BOOST*/, true);
}

int func_912(int iParam0)//Position - 0x16A794
{
	switch (iParam0)
	{
		case 1:
			return 6;
		case 54:
			return 11;
		case 3:
			return 9;
		case 2:
			return 18;
		case 5:
			return 12;
		case 4:
			return 1;
		case 842150655:
			return 2;
		case 50:
			return 21;
		default:
	}
	return 1;
}

void func_913()//Position - 0x16BB12
{
	MISC::SET_BIT(&(Global_2815059.f_4660), 2);
}

void func_914(int iParam0)//Position - 0x16BB26
{
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&(Global_2815059.f_4660), 4);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_2815059.f_4660), 4);
	}
}

void func_915(int iParam0)//Position - 0x16BB60
{
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&(Global_2815059.f_4660), 0);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_2815059.f_4660), 0);
	}
}

int func_916(int iParam0)//Position - 0x16BDE1
{
	int iVar0;
	iVar0 = 5;
	switch (iParam0)
	{
		case 2:
			iVar0 = 1;
			break;
		case 3:
			iVar0 = 2;
			break;
		case 4:
			iVar0 = 3;
			break;
		case 5:
			iVar0 = 4;
			break;
		case 6:
			iVar0 = 5;
			break;
	}
	return iVar0;
}

int func_917(int iParam0)//Position - 0x16C30F
{
	switch (iParam0)
	{
		case 1:
			return 6;
		case 2:
			return 11;
		case 3:
			return 10;
		case 4:
			return 18;
		case 5:
			return 12;
		case 6:
			return 0;
		case 7:
			return 2;
		case 8:
			return 21;
		case 9:
			return 15;
		default:
	}
	return 0;
}

int func_918(int iParam0)//Position - 0x16CE5E
{
	switch (iParam0)
	{
		case 0:
			return 10000;
		case 1:
			return 20000;
		case 2:
			return 30000;
		case 3:
			return 40000;
		case 4:
			return 50000;
		case 5:
			return 60000;
		case 6:
			return 9600000;
		default:
	}
	return 30000;
}

int func_919(int iParam0)//Position - 0x16CEC8
{
	if ((iParam0 == 17 || iParam0 == 18) || iParam0 == 19)
	{
		return 1;
	}
	return 0;
}

void func_920(int iParam0, int* iParam1)//Position - 0x16D731
{
	if (BitTest(Global_4980736.f_69361[iParam0 /*151*/].f_8, 9))
	{
		MISC::CLEAR_BIT(iParam1, 9);
	}
	else
	{
		MISC::SET_BIT(iParam1, 9);
	}
	if (BitTest(Global_4718592.f_22, 29))
	{
		MISC::CLEAR_BIT(iParam1, 9);
	}
	if (BitTest(Global_4980736.f_69361[iParam0 /*151*/].f_8, 10))
	{
		MISC::SET_BIT(iParam1, 16);
	}
	if (BitTest(Global_4980736.f_69361[iParam0 /*151*/].f_8, 14))
	{
		MISC::CLEAR_BIT(iParam1, 9);
		MISC::SET_BIT(iParam1, 4);
		MISC::SET_BIT(iParam1, 3);
		MISC::SET_BIT(iParam1, 8);
	}
}

bool func_921(var uParam0)//Position - 0x170499
{
	return BitTest(*uParam0, 8);
}

bool func_922(var uParam0)//Position - 0x17152A
{
	return BitTest(*uParam0, 12);
}

void func_923(int iParam0, int iParam1, int iParam2)//Position - 0x171657
{
	int iVar0;
	if (!__LIB_1__::func_823() && iParam2)
	{
		iVar0 = iParam0;
		switch (iVar0)
		{
			case 432:
				HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iParam1, "BLIP_630" /* GXT: Target */);
				break;
			case 735:
			case 736:
				HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iParam1, "CSH_BLIP_BUGGY" /* GXT: Buggy */);
				break;
			case 73:
				HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iParam1, "CSH_BLIP_CLTH" /* GXT: Clothes */);
				break;
			case 730:
			case 731:
			case 732:
			case 733:
				HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iParam1, "BLIP_619" /* GXT: Keypad */);
				break;
			case 326:
				HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iParam1, "CSG_ITEM_GETB" /* GXT: Getaway Vehicle */);
				break;
			case 458:
				HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iParam1, "CH_OPT_FIN_0" /* GXT: Decoy Gunman */);
				break;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 13:
				HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iParam1, "BLIP_630" /* GXT: Target */);
				break;
			case 19:
			case 25:
				HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iParam1, "SB_BIKE" /* GXT: Bike */);
				break;
			case 27:
			case 28:
				HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iParam1, "CSH_BLIP_BUGGY" /* GXT: Buggy */);
				break;
			case 16:
				HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iParam1, "CSH_BLIP_CLTH" /* GXT: Clothes */);
				break;
			case 20:
			case 21:
			case 22:
			case 23:
				HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iParam1, "BLIP_619" /* GXT: Keypad */);
				break;
			case 17:
				HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iParam1, "CSG_ITEM_GETB" /* GXT: Getaway Vehicle */);
				break;
			case 30:
				HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iParam1, "CH_OPT_FIN_0" /* GXT: Decoy Gunman */);
				break;
			}
	}
}

int func_924(int iParam0)//Position - 0x171D02
{
	int iVar0;
	float fVar1;
	iVar0 = 1000;
	if (iParam0 >= 0 && iParam0 < 4)
	{
		fVar1 = (IntToFloat(Global_4718592.f_110313[iParam0]) / 100f);
		iVar0 = SYSTEM::FLOOR((fVar1 * 1000f));
	}
	return iVar0;
}

void func_925(bool bParam0)//Position - 0x1720CD
{
	struct<3> Var0;
	int iVar1;
	Var0.f_0 = 285313418;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = bParam0;
	iVar1 = __LIB_4__::func_970(0);
	if (!iVar1 == 0)
	{
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 3, iVar1);
	}
}

void func_926(int iParam0, int iParam1, var uParam2, var uParam3)//Position - 0x173746
{
	switch (iParam0)
	{
		case 0:
			*iParam1 = joaat("prop_gate_airport_01");
			*uParam2 = { -1019.33044f, -2426.0234f, 13.008f };
			*uParam3 = 8f;
			break;
		case 1:
			*iParam1 = joaat("prop_gate_airport_01");
			*uParam2 = { -1004.44977f, -2400.376f, 13.08f };
			*uParam3 = 8f;
			break;
		case 2:
			*iParam1 = joaat("prop_gate_airport_01");
			*uParam2 = { -996.74f, -2826.1f, 12.99f };
			*uParam3 = 8f;
			break;
		case 3:
			*iParam1 = joaat("prop_gate_airport_01");
			*uParam2 = { -971.11f, -2840.98f, 13.07f };
			*uParam3 = 8f;
			break;
		case 5:
			*iParam1 = joaat("prop_gate_airport_01");
			*uParam2 = { -1157.67f, -2719.3f, 12.96f };
			*uParam3 = 8f;
			break;
		case 4:
			*iParam1 = joaat("prop_gate_airport_01");
			*uParam2 = { -1132.1f, -2734.17f, 13.01f };
			*uParam3 = 8f;
			break;
		case 6:
			*iParam1 = joaat("prop_gate_military_01");
			*uParam2 = { 2492.459f, -335.52747f, 92.119f };
			*uParam3 = 8f;
			break;
		case 7:
			*iParam1 = joaat("prop_gate_military_01");
			*uParam2 = { 2492.7598f, -432.71283f, 91.99274f };
			*uParam3 = 8f;
			break;
		default:
			*iParam1 = 0;
			*uParam2 = { 0f, 0f, 0f };
			*uParam3 = -1f;
			break;
	}
}

float func_927(bool bParam0)//Position - 0x173EF5
{
	if (Global_4980736.f_34611[bParam0 /*50*/].f_3 == joaat("ch_prop_ch_lobay_gate01"))
	{
		return 2f;
	}
	return 1f;
}

void func_928(bool bParam0, int iParam1, int iParam2, int iParam3)//Position - 0x173F34
{
	struct<6> Var0;
	int iVar1;
	Var0.f_0 = 696628190;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = bParam0;
	Var0.f_3 = iParam1;
	Var0.f_4 = iParam2;
	Var0.f_5 = iParam3;
	iVar1 = __LIB_4__::func_970(1);
	if (!iVar1 == 0)
	{
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 6, iVar1);
	}
}

float func_929(var uParam0)//Position - 0x174259
{
	float fVar0;
	float fVar1;
	if (uParam0->f_3 == joaat("v_ilev_garageliftdoor"))
	{
		return 0.5f;
	}
	else if (uParam0->f_3 == joaat("ch_prop_ch_tunnel_door_01_r"))
	{
		return 0.5f;
	}
	else if (uParam0->f_3 == joaat("ch_prop_ch_tunnel_door_01_l"))
	{
		return -0.5f;
	}
	else if (uParam0->f_3 == joaat("ch_prop_ch_lobay_gate01"))
	{
		return 1.75f;
	}
	else if (uParam0->f_3 == joaat("prop_gate_prison_01"))
	{
		return 3.25f;
	}
	if (__LIB_0__::func_995(5))
	{
		MISC::GET_MODEL_DIMENSIONS(uParam0->f_3, &fVar0, &fVar1);
		return ((fVar1 - fVar0) * 0.5f);
	}
	return 0.5f;
}

Vector3 func_930(var uParam0)//Position - 0x17433F
{
	if (uParam0->f_3 == joaat("v_ilev_garageliftdoor"))
	{
		return 0f, 0f, 0.7f;
	}
	else if (uParam0->f_3 == joaat("ch_prop_ch_tunnel_door_01_r") || uParam0->f_3 == joaat("ch_prop_ch_tunnel_door_01_l"))
	{
		return 0f, 0f, 0.7f;
	}
	else if (uParam0->f_3 == joaat("ch_prop_ch_lobay_gate01"))
	{
		return 0f, 0f, 1.5f;
	}
	else if (uParam0->f_3 == joaat("prop_gate_prison_01"))
	{
		return 0f, 0f, 1.95f;
	}
	return 0f, 0f, 0f;
}

void func_931(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x17685A
{
	struct<8> Var0;
	int iVar1;
	Var0.f_0 = -1787038574;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = bParam0;
	Var0.f_3 = iParam1;
	Var0.f_4 = iParam2;
	Var0.f_5 = iParam3;
	Var0.f_6 = iParam4;
	Var0.f_7 = iParam5;
	iVar1 = __LIB_4__::func_970(1);
	if (!iVar1 == 0)
	{
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 8, iVar1);
	}
}

void func_932(int iParam0)//Position - 0x1774D1
{
	int iVar0;
	iVar0 = 1;
	while (iVar0 <= 9)
	{
		if (VEHICLE::DOES_EXTRA_EXIST(iParam0, iVar0))
		{
			VEHICLE::SET_VEHICLE_EXTRA(iParam0, iVar0, false);
		}
		iVar0++;
	}
}

bool func_933(int iParam0)//Position - 0x1775E9
{
	return (VEHICLE::GET_TYRE_HEALTH(iParam0, 4) >= 950f && VEHICLE::GET_TYRE_HEALTH(iParam0, 5) >= 950f);
}

bool func_934(int iParam0)//Position - 0x177610
{
	return (VEHICLE::GET_TYRE_HEALTH(iParam0, 0) >= 950f && VEHICLE::GET_TYRE_HEALTH(iParam0, 1) >= 950f);
}

void func_935(int iParam0, int iParam1, float fParam2)//Position - 0x177637
{
	float fVar0;
	fVar0 = VEHICLE::GET_TYRE_HEALTH(iParam0, iParam1);
	if (fVar0 < 950f)
	{
		if (fVar0 < 350f)
		{
			VEHICLE::SET_TYRE_HEALTH(iParam0, iParam1, 360f);
		}
		else
		{
			VEHICLE::SET_TYRE_HEALTH(iParam0, iParam1, __LIB_0__::func_331((fVar0 + fParam2), 0f, 950f));
		}
	}
}

int func_936(int iParam0)//Position - 0x177686
{
	if (VEHICLE::GET_TYRE_HEALTH(iParam0, 0) < 950f)
	{
		return 0;
	}
	if (VEHICLE::GET_TYRE_HEALTH(iParam0, 1) < 950f)
	{
		return 0;
	}
	if (VEHICLE::GET_TYRE_HEALTH(iParam0, 4) < 950f)
	{
		return 0;
	}
	if (VEHICLE::GET_TYRE_HEALTH(iParam0, 5) < 950f)
	{
		return 0;
	}
	return 1;
}

void func_937(int iParam0)//Position - 0x1776DF
{
	VEHICLE::SET_VEHICLE_TYRE_FIXED(iParam0, 0);
	VEHICLE::SET_VEHICLE_TYRE_FIXED(iParam0, 1);
	VEHICLE::SET_VEHICLE_TYRE_FIXED(iParam0, 4);
	VEHICLE::SET_VEHICLE_TYRE_FIXED(iParam0, 5);
}

int func_938(int iParam0)//Position - 0x177703
{
	if (__LIB_0__::func_793(iParam0))
	{
		return 0;
	}
	if (ENTITY::GET_ENTITY_SPEED(iParam0) > 1f)
	{
		return 0;
	}
	if (PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 71 /*INPUT_VEH_ACCELERATE*/) || PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 72 /*INPUT_VEH_BRAKE*/))
	{
		return 0;
	}
	return 1;
}

int func_939(int iParam0)//Position - 0x177C02
{
	return (Global_4718592.f_174915[iParam0 /*24*/].f_18 * 3 + Global_4718592.f_174915[iParam0 /*24*/].f_19);
}

void func_940(struct<3> Param0, bool bParam1)//Position - 0x1789E9
{
	if (bParam1)
	{
		AUDIO::PLAY_SOUND_FROM_COORD(-1, "Metal_Detector_Big_Guns", Param0, "dlc_ch_heist_finale_security_alarms_sounds", false, 0, false);
	}
	else
	{
		AUDIO::PLAY_SOUND_FROM_COORD(-1, "Metal_Detector_Small_Guns", Param0, "dlc_ch_heist_finale_security_alarms_sounds", false, 0, false);
	}
}

void func_941(bool bParam0, bool bParam1, struct<3> Param2, var uParam3)//Position - 0x178A25
{
	struct<8> Var0;
	int iVar1;
	Var0.f_0 = 1227500260;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = bParam0;
	Var0.f_3 = bParam1;
	Var0.f_4 = { Param2 };
	Var0.f_7 = uParam3;
	iVar1 = __LIB_4__::func_970(1);
	if (!iVar1 == 0)
	{
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 8, iVar1);
	}
}

float func_942(float fParam0)//Position - 0x178F9C
{
	if (fParam0 >= 10f)
	{
		return 0f;
	}
	return __LIB_0__::func_504(10f, 0f, (fParam0 / 10f));
}

float func_943(float fParam0)//Position - 0x178FC5
{
	return __LIB_0__::func_504(30f, 0f, (fParam0 / 100f));
}

void func_944(bool bParam0)//Position - 0x1790E9
{
	struct<2> Var0;
	int iVar1;
	Var0.f_0 = -363714924;
	if (bParam0)
	{
		Var0.f_1 = PLAYER::PLAYER_ID();
	}
	else
	{
		Var0.f_1 = 0;
	}
	iVar1 = __LIB_4__::func_970(1);
	if (!iVar1 == 0)
	{
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 2, iVar1);
	}
}

void func_945(bool bParam0)//Position - 0x179568
{
	NETWORK::SET_LOCAL_PLAYER_AS_GHOST(bParam0, true);
	if (bParam0 == 1)
	{
		NETWORK::SET_GHOST_ALPHA(50);
	}
	else
	{
		NETWORK::RESET_GHOST_ALPHA();
	}
}

void func_946(bool bParam0, bool bParam1, bool bParam2)//Position - 0x17B47F
{
	if (!bParam2)
	{
		MISC::ENABLE_DISPATCH_SERVICE(1, bParam0);
		MISC::ENABLE_DISPATCH_SERVICE(4, bParam0);
		MISC::ENABLE_DISPATCH_SERVICE(7, bParam0);
		MISC::ENABLE_DISPATCH_SERVICE(8, bParam0);
		MISC::ENABLE_DISPATCH_SERVICE(9, bParam0);
		MISC::ENABLE_DISPATCH_SERVICE(10, bParam0);
		MISC::ENABLE_DISPATCH_SERVICE(13, bParam0);
		MISC::ENABLE_DISPATCH_SERVICE(14, bParam0);
	}
	MISC::BLOCK_DISPATCH_SERVICE_RESOURCE_CREATION(1, !bParam0);
	MISC::BLOCK_DISPATCH_SERVICE_RESOURCE_CREATION(4, !bParam0);
	MISC::BLOCK_DISPATCH_SERVICE_RESOURCE_CREATION(7, !bParam0);
	MISC::BLOCK_DISPATCH_SERVICE_RESOURCE_CREATION(8, !bParam0);
	MISC::BLOCK_DISPATCH_SERVICE_RESOURCE_CREATION(9, !bParam0);
	MISC::BLOCK_DISPATCH_SERVICE_RESOURCE_CREATION(10, !bParam0);
	MISC::BLOCK_DISPATCH_SERVICE_RESOURCE_CREATION(13, !bParam0);
	MISC::BLOCK_DISPATCH_SERVICE_RESOURCE_CREATION(14, !bParam0);
	if (bParam0 && !bParam1)
	{
		if (!bParam2)
		{
			MISC::ENABLE_DISPATCH_SERVICE(2, true);
			MISC::ENABLE_DISPATCH_SERVICE(12, true);
		}
		MISC::BLOCK_DISPATCH_SERVICE_RESOURCE_CREATION(2, false);
		MISC::BLOCK_DISPATCH_SERVICE_RESOURCE_CREATION(12, false);
	}
	else if (bParam0 && bParam1)
	{
		if (!bParam2)
		{
			MISC::ENABLE_DISPATCH_SERVICE(2, false);
			MISC::ENABLE_DISPATCH_SERVICE(12, false);
		}
		MISC::BLOCK_DISPATCH_SERVICE_RESOURCE_CREATION(2, true);
		MISC::BLOCK_DISPATCH_SERVICE_RESOURCE_CREATION(12, true);
	}
	else
	{
		if (!bParam2)
		{
			MISC::ENABLE_DISPATCH_SERVICE(2, false);
			MISC::ENABLE_DISPATCH_SERVICE(12, false);
		}
		MISC::BLOCK_DISPATCH_SERVICE_RESOURCE_CREATION(2, true);
		MISC::BLOCK_DISPATCH_SERVICE_RESOURCE_CREATION(12, true);
	}
}

void func_947()//Position - 0x17C1A2
{
	Global_2667225.f_26.f_10 = { 0f, 0f, 0f };
	Global_2667225.f_26.f_13 = { 0f, 0f, 0f };
	Global_2667225.f_26.f_16 = 0f;
	Global_2667225.f_26.f_17 = 0;
	Global_2667225.f_26.f_18 = 0;
}

void func_948(bool bParam0, bool bParam1, int* iParam2, int* iParam3, int iParam4, bool bParam5)//Position - 0x17C1DF
{
	struct<3> Var0;
	struct<3> Var1;
	int iVar2;
	int iVar3;
	if ((Global_4980736.f_195934[bParam0 /*111*/].f_10 != 0 && Global_4980736.f_195934[bParam0 /*111*/].f_10 != 2) && Global_4980736.f_195934[bParam0 /*111*/].f_10 != 29)
	{
		return;
	}
	Var0 = { Global_4980736.f_195934[bParam0 /*111*/][0 /*3*/] };
	Var1 = { Global_4980736.f_195934[bParam0 /*111*/][1 /*3*/] };
	if (Global_4980736.f_195934[bParam0 /*111*/].f_9 != 1)
	{
		Var0.f_2 = (Global_4980736.f_195934[bParam0 /*111*/][0 /*3*/].f_2 - 100f);
		Var1.f_2 = (Global_4980736.f_195934[bParam0 /*111*/][1 /*3*/].f_2 + 500f);
	}
	if (bParam1)
	{
		if (!BitTest(*iParam2, bParam0))
		{
			iVar2 = 1;
			MISC::SET_BIT(iParam2, bParam0);
		}
	}
	else if (BitTest(*iParam2, bParam0))
	{
		iVar2 = 1;
		MISC::CLEAR_BIT(iParam2, bParam0);
	}
	if (iVar2 || iParam4)
	{
		VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Var0, Var1, !bParam1, false);
	}
	if (bParam1)
	{
		if (!BitTest(*iParam3, bParam0))
		{
			iVar3 = 1;
			MISC::SET_BIT(iParam3, bParam0);
		}
	}
	else if (BitTest(*iParam3, bParam0))
	{
		iVar3 = 1;
		MISC::CLEAR_BIT(iParam3, bParam0);
	}
	if (iVar3 || iParam4)
	{
		if (!bParam5)
		{
			PATHFIND::SET_ROADS_IN_AREA(Var0, Var1, !bParam1, false);
		}
		else
		{
			PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(Var0, Var1, 0);
		}
	}
}

void func_949(struct<3> Param0, struct<3> Param1, float fParam2, int iParam3)//Position - 0x17DB11
{
	struct<3> Var0;
	struct<3> Var1;
	if (Param0.f_0 < Param1.f_0)
	{
		Var0.f_0 = Param0.f_0;
		Var1.f_0 = Param1.f_0;
	}
	else
	{
		Var0.f_0 = Param1.f_0;
		Var1.f_0 = Param0.f_0;
	}
	if (Param0.f_1 < Param1.f_1)
	{
		Var0.f_1 = Param0.f_1;
		Var1.f_1 = Param1.f_1;
	}
	else
	{
		Var0.f_1 = Param1.f_1;
		Var1.f_1 = Param0.f_1;
	}
	if (Param0.f_2 < Param1.f_2)
	{
		Var0.f_2 = Param0.f_2;
		Var1.f_2 = Param1.f_2;
	}
	else
	{
		Var0.f_2 = Param1.f_2;
		Var1.f_2 = Param0.f_2;
	}
	Global_2667225.f_26.f_10 = { Var0 };
	Global_2667225.f_26.f_13 = { Var1 };
	Global_2667225.f_26.f_16 = fParam2;
	Global_2667225.f_26.f_17 = iParam3;
	Global_2667225.f_26.f_18 = 1;
}

float func_950(float fParam0)//Position - 0x180A61
{
	if (fParam0 > 360f)
	{
		fParam0 = (fParam0 - 360f);
	}
	if (fParam0 < 0f)
	{
		fParam0 = (360f + fParam0);
	}
	return fParam0;
}

bool func_951(int iParam0, var uParam1)//Position - 0x184415
{
	return __LIB_1__::func_296(&(uParam1->f_69[Global_4980736.f_36356[iParam0 /*134*/].f_85 /*2*/]));
}

int func_952(int iParam0, int iParam1)//Position - 0x184526
{
	switch (iParam0)
	{
		case 1:
			return __LIB_24__::func_550(Global_4980736.f_94390[iParam1 /*1004*/].f_700);
		case 2:
			return __LIB_24__::func_550(Global_4980736.f_78578[iParam1 /*450*/].f_312);
		case 3:
			return __LIB_24__::func_550(Global_4980736.f_36356[iParam1 /*134*/].f_77);
		case 4:
			return __LIB_24__::func_550(Global_4980736.f_5742[iParam1 /*442*/].f_227);
		default:
	}
	return 1;
}

float func_953(struct<3> Param0)//Position - 0x184ADB
{
	return (((Param0.f_0 * Param0.f_0) + (Param0.f_1 * Param0.f_1)) + (Param0.f_2 * Param0.f_2));
}

int func_954()//Position - 0x184D2E
{
	if (__LIB_2__::func_815(Local_74, 200, 0))
	{
		return 1;
	}
	return 0;
}

void func_955(int iParam0, int iParam1)//Position - 0x187D41
{
	Global_4541482[iParam0] = iParam1;
}

bool func_956(int iParam0)//Position - 0x18DAE1
{
	return GRAPHICS::IS_TRACKED_POINT_VISIBLE(*iParam0);
}

bool func_957(int iParam0)//Position - 0x18DB13
{
	return *iParam0 != -1;
}

int func_958(int iParam0)//Position - 0x191BD6
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 1:
			return 1;
		case 2:
			return 2;
		case 3:
			return 3;
		case 4:
			return 12;
		case 5:
			return 5;
		case 6:
			return 6;
		case 7:
			return 7;
		case 8:
			return 8;
		case 9:
			return 9;
		case 10:
			return 10;
		case 11:
			return 11;
		case 12:
			return 13;
		case 13:
			return 14;
		default:
	}
	return 0;
}

struct<2> func_959(struct<2> Param0, struct<2> Param1)//Position - 0x192017
{
	struct<2> Var0;
	Var0.f_0 = (Param0.f_0 - Param1.f_0);
	Var0.f_1 = (Param0.f_1 - Param1.f_1);
	return Var0;
}

float func_960(struct<2> Param0, struct<2> Param1)//Position - 0x192037
{
	return SYSTEM::SQRT((SYSTEM::POW((Param1.f_0 - Param0.f_0), 2f) + SYSTEM::POW((Param1.f_1 - Param0.f_1), 2f)));
}

float func_961(float fParam0)//Position - 0x19205C
{
	return SYSTEM::SIN(fParam0);
}

float func_962(float fParam0)//Position - 0x19206A
{
	return SYSTEM::COS(fParam0);
}

float func_963(struct<2> Param0, struct<2> Param1)//Position - 0x192712
{
	return (SYSTEM::POW((Param1.f_0 - Param0.f_0), 2f) + SYSTEM::POW((Param1.f_1 - Param0.f_1), 2f));
}

struct<2> func_964(struct<2> Param0, struct<2> Param1, float fParam2)//Position - 0x1928ED
{
	struct<2> Var0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	fVar1 = SYSTEM::SIN(fParam2);
	fVar2 = SYSTEM::COS(fParam2);
	Var0.f_0 = (Param1.f_0 - Param0.f_0);
	Var0.f_1 = (Param1.f_1 - Param0.f_1);
	fVar3 = ((Var0.f_0 * fVar2) - (Var0.f_1 * fVar1));
	fVar4 = ((Var0.f_0 * fVar1) + (Var0.f_1 * fVar2));
	Var0.f_0 = (fVar3 + Param0.f_0);
	Var0.f_1 = (fVar4 + Param0.f_1);
	return Var0;
}

struct<2> func_965(struct<2> Param0)//Position - 0x1936A3
{
	struct<2> Var0;
	Var0.f_0 = Param0.f_1;
	Var0.f_1 = -Param0.f_0;
	return Var0;
}

void func_966(bool bParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x1936BC
{
	*iParam2 = 0;
	*iParam3 = 0;
	if (bParam4)
	{
		if (iParam1 == 1)
		{
			iParam1 = 3;
		}
		else if (iParam1 == 2)
		{
			iParam1 = 4;
		}
		else if (iParam1 == 3)
		{
			iParam1 = 1;
		}
		else if (iParam1 == 4)
		{
			iParam1 = 2;
		}
	}
	if (iParam1 == 1)
	{
		if (bParam0 == 0)
		{
			*iParam2 = 0;
			*iParam3 = 1;
		}
		else if (bParam0 == 1)
		{
			*iParam2 = 3;
			*iParam3 = 0;
		}
	}
	else if (iParam1 == 2)
	{
		if (bParam0 == 0)
		{
			*iParam2 = 2;
			*iParam3 = 3;
		}
		else if (bParam0 == 1)
		{
			*iParam2 = 3;
			*iParam3 = 0;
		}
	}
	else if (iParam1 == 3)
	{
		if (bParam0 == 0)
		{
			*iParam2 = 1;
			*iParam3 = 2;
		}
		else if (bParam0 == 1)
		{
			*iParam2 = 2;
			*iParam3 = 3;
		}
	}
	else if (iParam1 == 4)
	{
		if (bParam0 == 0)
		{
			*iParam2 = 0;
			*iParam3 = 1;
		}
		else if (bParam0 == 1)
		{
			*iParam2 = 1;
			*iParam3 = 2;
		}
	}
}

void func_967(int iParam0, int iParam1, int iParam2)//Position - 0x19379B
{
	*iParam1 = 0;
	*iParam2 = 0;
	if (iParam0 == 1 || iParam0 == 3)
	{
		*iParam1 = 1;
		*iParam2 = 3;
	}
	else if (iParam0 == 2 || iParam0 == 4)
	{
		*iParam1 = 0;
		*iParam2 = 2;
	}
}

int func_968(struct<2> Param0, struct<2> Param1, struct<2> Param2, int iParam3)//Position - 0x1938A7
{
	if (iParam3 == 1 || iParam3 == 2)
	{
		if (Param1.f_1 > Param0.f_1 && Param2.f_1 > Param0.f_1)
		{
			return 0;
		}
	}
	else if (iParam3 == 3 || iParam3 == 4)
	{
		if (Param1.f_1 < Param0.f_1 && Param2.f_1 < Param0.f_1)
		{
			return 0;
		}
	}
	if (iParam3 == 1 || iParam3 == 4)
	{
		if (Param1.f_0 < Param0.f_0 && Param2.f_0 < Param0.f_0)
		{
			return 0;
		}
	}
	else if (iParam3 == 2 || iParam3 == 3)
	{
		if (Param1.f_0 > Param0.f_0 && Param2.f_0 > Param0.f_0)
		{
			return 0;
		}
	}
	return 1;
}

int func_969(struct<2> Param0)//Position - 0x193962
{
	if (Param0.f_0 > -0.001f && Param0.f_1 <= 0f)
	{
		return 1;
	}
	if (Param0.f_0 <= -0.001f && Param0.f_1 <= 0f)
	{
		return 2;
	}
	if (Param0.f_0 <= -0.001f && Param0.f_1 > 0f)
	{
		return 3;
	}
	return 4;
}

bool func_970(struct<2> Param0)//Position - 0x193B3B
{
	return (Param0.f_0 == 0f && Param0.f_1 == 0f);
}

void func_971(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x19E870
{
	*iParam0 = iParam1;
	iParam0->f_1 = iParam2;
	iParam0->f_2 = iParam3;
	iParam0->f_3 = iParam4;
}

void func_972(var uParam0, int iParam1)//Position - 0x1AF1A0
{
	int iVar0[8];
	int iVar1;
	iVar1 = 0;
	while (iVar1 <= 7)
	{
		iVar0[iVar1] = -1;
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 <= 7)
	{
		iVar0[iVar1] = __LIB_16__::func_944(&iVar0, 8, 0, 8);
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 <= 7)
	{
		uParam0->f_766[iParam1 /*25*/][iVar1 /*3*/] = iVar0[iVar1];
		iVar1++;
	}
}

void func_973(var uParam0, int iParam1)//Position - 0x1B1A13
{
	int iVar0[8];
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	iVar3 = MISC::GET_RANDOM_INT_IN_RANGE(0, 100);
	if (iVar3 < uParam0->f_734)
	{
		uParam0->f_756 = 0;
		bVar4 = true;
	}
	iVar1 = 0;
	while (iVar1 <= 7)
	{
		iVar0[iVar1] = -1;
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 <= 7)
	{
		iVar0[iVar1] = __LIB_16__::func_944(&iVar0, 8, 0, 8);
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 <= 7)
	{
		if (iVar0[iVar1] == -1)
		{
			iVar2 = 0;
			while (iVar2 <= 7)
			{
				if (!__LIB_25__::func_435(&iVar0, iVar2, 8))
				{
					iVar0[iVar1] = iVar2;
				}
				else
				{
					iVar2++;
				}
			}
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 <= 7)
	{
		uParam0->f_766[iParam1 /*25*/][iVar1 /*3*/].f_2 = iVar0[iVar1];
		if (bVar4)
		{
			MISC::CLEAR_BIT(&(uParam0->f_766[iParam1 /*25*/][iVar1 /*3*/].f_1), 0);
		}
		iVar1++;
	}
}

int func_974(bool bParam0, bool bParam1)//Position - 0x1B211F
{
	if (bParam0 != -1)
	{
		if (Global_1970897[bParam0 /*68*/].f_18.f_14 != 0 || bParam1)
		{
			return Global_1970897[bParam0 /*68*/].f_18.f_14;
		}
	}
	if (bParam1)
	{
		return Global_1966500.f_17;
	}
	return 0;
}

void func_975(var uParam0)//Position - 0x1B42F1
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(0, 100);
	if (iVar2 < uParam0->f_734)
	{
		uParam0->f_756 = 0;
	}
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (iVar0 >= uParam0->f_756)
		{
			iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
			iVar1 = 0;
			while (iVar1 <= 4)
			{
				MISC::CLEAR_BIT(&(uParam0->f_757[uParam0->f_755 /*37*/][iVar0 /*6*/][iVar1]), 0);
				MISC::CLEAR_BIT(&(uParam0->f_757[uParam0->f_755 /*37*/][iVar0 /*6*/][iVar1]), 1);
				MISC::CLEAR_BIT(&(uParam0->f_757[uParam0->f_755 /*37*/][iVar0 /*6*/][iVar1]), 2);
				iVar1++;
			}
			MISC::SET_BIT(&(uParam0->f_757[uParam0->f_755 /*37*/][iVar0 /*6*/][iVar2]), 0);
			if (__LIB_25__::func_463(uParam0, iVar0, iVar2))
			{
			}
		}
		iVar0++;
	}
}

int func_976()//Position - 0x1B4DEC
{
	if (__LIB_0__::func_1("CH_EMP_HELP" /* GXT: Use the SecuroServ App to activate the EMP. Press ~INPUT_CELLPHONE_UP~ to open your phone and select the app. */))
	{
		return 1;
	}
	return 0;
}

void func_977(int iParam0, bool bParam1, int iParam2, struct<3> Param3, struct<3> Param4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)//Position - 0x1B7968
{
	struct<17> Var0;
	int iVar1;
	Var0.f_0 = -949119977;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = iParam0;
	Var0.f_3 = bParam1;
	Var0.f_4 = iParam2;
	Var0.f_5 = { Param3 };
	Var0.f_8 = { Param4 };
	Var0.f_11 = iParam5;
	Var0.f_12 = iParam6;
	Var0.f_13 = iParam7;
	Var0.f_14 = iParam8;
	Var0.f_15 = iParam9;
	Var0.f_16 = iParam10;
	iVar1 = __LIB_4__::func_970(1);
	if (!iVar1 == 0)
	{
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 17, iVar1);
	}
}

int func_978(var uParam0)//Position - 0x1B7CBE
{
	int iVar0;
	iVar0 = uParam0;
	switch (iVar0)
	{
		case 5:
		case 6:
		case 7:
		case 8:
			return 0;
		case 66:
			return 1;
		case 1:
		case 2:
		case 3:
		case 4:
			return 2;
		case 36:
		case 37:
		case 38:
		case 39:
			return 3;
		case 21:
		case 22:
		case 23:
		case 24:
			return 4;
		case 33:
		case 34:
		case 35:
			return 5;
		case 9:
		case 10:
		case 11:
		case 12:
			return 6;
		case 67:
			return 7;
		case 68:
			return 8;
		case 25:
		case 26:
		case 27:
		case 28:
			return 9;
		case 13:
		case 14:
		case 15:
		case 16:
			return 10;
		case 17:
		case 18:
		case 19:
		case 20:
			return 11;
		case 29:
		case 30:
		case 31:
		case 32:
			return 12;
		case 64:
		case 65:
			return 13;
		case 60:
		case 61:
		case 62:
		case 63:
			return 14;
		case 69:
		case 70:
		case 71:
		case 72:
			return 15;
		case 40:
		case 41:
		case 42:
		case 43:
			return 16;
		case 48:
		case 49:
		case 50:
		case 51:
			return 17;
		case 44:
		case 45:
		case 46:
		case 47:
			return 18;
		case 52:
		case 53:
		case 54:
		case 55:
			return 19;
		case 56:
		case 57:
		case 58:
		case 59:
			return 20;
		case 73:
		case 74:
		case 75:
		case 76:
			return 21;
		case 77:
		case 78:
		case 79:
		case 80:
			return 22;
		case 81:
		case 82:
		case 83:
		case 84:
			return 23;
		case 487:
		case 488:
		case 489:
		case 490:
		case 491:
		case 492:
		case 493:
		case 494:
			return 24;
		case 495:
		case 496:
		case 497:
		case 498:
			return 26;
		case 499:
		case 500:
		case 501:
		case 502:
			return 25;
		case 503:
		case 504:
		case 505:
		case 506:
			return 27;
		case 1194:
			return 28;
		case 1195:
		case 1196:
		case 1197:
		case 1198:
			return 29;
		case 1249:
		case 1250:
		case 1251:
		case 1252:
			return 30;
		case 1253:
		case 1254:
		case 1255:
		case 1256:
			return 31;
		case 1257:
		case 1258:
		case 1259:
		case 1260:
			return 32;
		case 1261:
		case 1262:
		case 1263:
		case 1264:
			return 33;
		case 1265:
		case 1266:
		case 1267:
		case 1268:
			return 34;
		case 1269:
		case 1270:
		case 1271:
		case 1272:
			return 35;
		case 1273:
		case 1274:
		case 1275:
		case 1276:
			return 36;
		case 1277:
		case 1278:
		case 1279:
		case 1280:
			return 37;
		case 1281:
		case 1282:
		case 1283:
		case 1284:
			return 38;
		case 1285:
		case 1286:
		case 1287:
		case 1288:
			return 39;
		case 1289:
		case 1290:
		case 1291:
		case 1292:
			return 40;
		case 1293:
		case 1294:
		case 1295:
		case 1296:
			return 41;
		case 1297:
		case 1298:
		case 1299:
		case 1300:
			return 42;
		case 1301:
		case 1302:
		case 1303:
		case 1304:
			return 43;
		case 1305:
		case 1306:
		case 1307:
		case 1308:
			return 44;
		case 1309:
		case 1310:
		case 1311:
		case 1312:
			return 45;
		case 1313:
		case 1314:
		case 1315:
		case 1316:
			return 46;
		case 1317:
		case 1318:
		case 1319:
		case 1320:
			return 47;
		default:
	}
	switch (iVar0)
	{
		case 1530:
		case 1531:
		case 1532:
		case 1533:
		case 1534:
		case 1535:
			return 48;
		case 1536:
		case 1537:
		case 1538:
		case 1539:
		case 1540:
		case 1541:
			return 49;
		case 1542:
		case 1543:
		case 1544:
		case 1545:
		case 1546:
		case 1547:
			return 50;
		case 1548:
		case 1549:
		case 1550:
		case 1551:
		case 1552:
		case 1553:
			return 51;
		case 1554:
		case 1555:
		case 1556:
		case 1557:
		case 1558:
		case 1559:
			return 52;
		case 1560:
		case 1561:
		case 1562:
		case 1563:
		case 1564:
		case 1565:
			return 53;
		case 1585:
		case 1586:
		case 1587:
		case 1588:
		case 1589:
		case 1590:
			return 54;
		case 1595:
		case 1596:
		case 1597:
		case 1598:
		case 1599:
		case 1600:
			return 55;
		case 1579:
		case 1580:
		case 1581:
		case 1582:
		case 1583:
		case 1584:
			return 56;
		case 1591:
		case 1592:
		case 1593:
		case 1594:
			return 57;
		case 1489:
		case 1490:
		case 1491:
		case 1492:
		case 1493:
		case 1494:
			return 58;
		case 1495:
		case 1496:
		case 1497:
		case 1498:
		case 1499:
		case 1500:
			return 59;
		case 1501:
		case 1502:
		case 1503:
		case 1504:
		case 1505:
		case 1506:
			return 60;
		case 1507:
		case 1508:
		case 1509:
		case 1510:
		case 1511:
		case 1512:
			return 61;
		case 1513:
		case 1514:
		case 1515:
		case 1516:
		case 1517:
		case 1518:
			return 62;
		case 1519:
		case 1520:
		case 1521:
		case 1522:
		case 1523:
		case 1524:
			return 63;
		default:
	}
	switch (iVar0)
	{
		case 1614:
		case 1615:
		case 1616:
		case 1617:
			return 64;
		case 1618:
		case 1619:
		case 1620:
		case 1621:
			return 65;
		case 1622:
		case 1623:
		case 1624:
		case 1625:
			return 66;
		case 1626:
		case 1627:
		case 1628:
		case 1629:
			return 67;
		case 1630:
		case 1631:
		case 1632:
		case 1633:
			return 68;
		case 1634:
		case 1635:
		case 1636:
		case 1637:
			return 69;
		case 1638:
		case 1639:
		case 1640:
		case 1641:
			return 70;
		case 1673:
		case 1674:
		case 1675:
		case 1676:
			return 71;
		case 1677:
		case 1678:
		case 1679:
		case 1680:
			return 72;
		case 1681:
		case 1682:
		case 1683:
		case 1684:
		case 1685:
		case 1686:
		case 1687:
		case 1688:
			return 73;
		case 1691:
		case 1692:
		case 1693:
		case 1694:
			return 74;
		default:
	}
	return 999;
}

void func_979(var uParam0, var uParam1)//Position - 0x1BA1FD
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	fVar0 = -0.1f;
	fVar1 = 1.1f;
	fVar2 = 0.175f;
	fVar3 = 0.845f;
	if (*uParam0 > fVar1)
	{
		*uParam0 = fVar1;
	}
	if (*uParam0 < fVar0)
	{
		*uParam0 = fVar0;
	}
	if (*uParam1 > fVar3)
	{
		*uParam1 = fVar3;
	}
	if (*uParam1 < fVar2)
	{
		*uParam1 = fVar2;
	}
}

struct<2> func_980(bool bParam0, int iParam1)//Position - 0x1BA82F
{
	switch (bParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 3:
					return __LIB_5__::func_403(0.984f, 0.289f);
				case 2:
					return __LIB_5__::func_403(0.95f, 0.289f);
				case 1:
					return __LIB_5__::func_403(0.915f, 0.289f);
				case 0:
					return __LIB_5__::func_403(0.88f, 0.289f);
				default:
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 3:
					return __LIB_5__::func_403(0.984f, 0.439f);
				case 2:
					return __LIB_5__::func_403(0.95f, 0.439f);
				case 1:
					return __LIB_5__::func_403(0.915f, 0.439f);
				case 0:
					return __LIB_5__::func_403(0.88f, 0.439f);
				default:
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 3:
					return __LIB_5__::func_403(0.984f, 0.589f);
				case 2:
					return __LIB_5__::func_403(0.95f, 0.589f);
				case 1:
					return __LIB_5__::func_403(0.915f, 0.589f);
				case 0:
					return __LIB_5__::func_403(0.88f, 0.589f);
				default:
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 3:
					return __LIB_5__::func_403(0.984f, 0.739f);
				case 2:
					return __LIB_5__::func_403(0.95f, 0.739f);
				case 1:
					return __LIB_5__::func_403(0.915f, 0.739f);
				case 0:
					return __LIB_5__::func_403(0.88f, 0.739f);
				default:
			}
			break;
	}
	return __LIB_5__::func_403(0f, 0f);
}

float func_981(int iParam0)//Position - 0x1BAA74
{
	switch (iParam0)
	{
		case 0:
			return 0.29f;
		case 1:
			return 0.44f;
		case 2:
			return 0.59f;
		case 3:
			return 0.74f;
		default:
	}
	return 0f;
}

void func_982(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, char* sParam7, var uParam8, var uParam9, var uParam10, var uParam11)//Position - 0x1BABCE
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					*uParam2 = 0.5f;
					*uParam3 = 0.29f;
					*uParam4 = 0.7f;
					*uParam5 = 0.004f;
					*uParam6 = 0f;
					StringCopy(sParam7, "line", 32);
					*uParam11 = 0;
					break;
				case 1:
					*uParam2 = (0.402f - 0.076f);
					*uParam3 = 0.372f;
					*uParam4 = 0.35f;
					*uParam5 = 0.17f;
					*uParam6 = 0f;
					StringCopy(sParam7, "line1", 32);
					*uParam8 = (0.599f + 0.076f);
					*uParam9 = 0.37f;
					*uParam10 = 180f;
					*uParam11 = 1;
					break;
				case 2:
					*uParam2 = 0.5f;
					*uParam3 = 0.36f;
					*uParam4 = 0.7f;
					*uParam5 = 0.17f;
					*uParam6 = 0f;
					StringCopy(sParam7, "line2", 32);
					*uParam8 = 0.5f;
					*uParam9 = 0.528f;
					*uParam10 = 180f;
					*uParam11 = 1;
					break;
				case 3:
					*uParam2 = 0.5f;
					*uParam3 = 0.392f;
					*uParam4 = 0.7f;
					*uParam5 = 0.25f;
					*uParam6 = 0f;
					StringCopy(sParam7, "line3", 32);
					*uParam8 = 0.5f;
					*uParam9 = 0.64f;
					*uParam10 = 180f;
					*uParam11 = 1;
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					*uParam2 = (0.402f - 0.076f);
					*uParam3 = 0.369f;
					*uParam4 = -0.35f;
					*uParam5 = 0.17f;
					*uParam6 = 180f;
					StringCopy(sParam7, "line1", 32);
					*uParam8 = (0.599f + 0.076f);
					*uParam9 = 0.371f;
					*uParam10 = 0f;
					*uParam11 = 1;
					break;
				case 1:
					*uParam2 = 0.5f;
					*uParam3 = 0.44f;
					*uParam4 = 0.7f;
					*uParam5 = 0.004f;
					*uParam6 = 0f;
					StringCopy(sParam7, "line", 32);
					*uParam11 = 0;
					break;
				case 2:
					*uParam2 = (0.402f - 0.076f);
					*uParam3 = 0.522f;
					*uParam4 = 0.35f;
					*uParam5 = 0.17f;
					*uParam6 = 0f;
					StringCopy(sParam7, "line1", 32);
					*uParam8 = (0.599f + 0.076f);
					*uParam9 = 0.52f;
					*uParam10 = 180f;
					*uParam11 = 1;
					break;
				case 3:
					*uParam2 = 0.5f;
					*uParam3 = 0.51f;
					*uParam4 = 0.7f;
					*uParam5 = 0.17f;
					*uParam6 = 0f;
					StringCopy(sParam7, "line2", 32);
					*uParam8 = 0.5f;
					*uParam9 = 0.678f;
					*uParam10 = 180f;
					*uParam11 = 1;
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					*uParam2 = 0.5f;
					*uParam3 = 0.36f;
					*uParam4 = -0.7f;
					*uParam5 = 0.17f;
					*uParam6 = 0f;
					StringCopy(sParam7, "line2", 32);
					*uParam8 = 0.5f;
					*uParam9 = 0.528f;
					*uParam10 = 180f;
					*uParam11 = 1;
					break;
				case 1:
					*uParam2 = (0.402f - 0.076f);
					*uParam3 = 0.519f;
					*uParam4 = -0.35f;
					*uParam5 = 0.17f;
					*uParam6 = 180f;
					StringCopy(sParam7, "line1", 32);
					*uParam8 = (0.599f + 0.076f);
					*uParam9 = 0.521f;
					*uParam10 = 0f;
					*uParam11 = 1;
					break;
				case 2:
					*uParam2 = 0.5f;
					*uParam3 = 0.59f;
					*uParam4 = 0.7f;
					*uParam5 = 0.004f;
					*uParam6 = 0f;
					StringCopy(sParam7, "line", 32);
					*uParam11 = 0;
					break;
				case 3:
					*uParam2 = (0.402f - 0.076f);
					*uParam3 = 0.672f;
					*uParam4 = 0.35f;
					*uParam5 = 0.17f;
					*uParam6 = 0f;
					StringCopy(sParam7, "line1", 32);
					*uParam8 = (0.599f + 0.076f);
					*uParam9 = 0.67f;
					*uParam10 = 180f;
					*uParam11 = 1;
					break;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					*uParam2 = 0.5f;
					*uParam3 = 0.392f;
					*uParam4 = -0.7f;
					*uParam5 = 0.25f;
					*uParam6 = 0f;
					StringCopy(sParam7, "line3", 32);
					*uParam8 = 0.5f;
					*uParam9 = 0.64f;
					*uParam10 = 180f;
					*uParam11 = 1;
					break;
				case 1:
					*uParam2 = 0.5f;
					*uParam3 = 0.51f;
					*uParam4 = -0.7f;
					*uParam5 = 0.17f;
					*uParam6 = 0f;
					StringCopy(sParam7, "line2", 32);
					*uParam8 = 0.5f;
					*uParam9 = 0.678f;
					*uParam10 = 180f;
					*uParam11 = 1;
					break;
				case 2:
					*uParam2 = (0.402f - 0.076f);
					*uParam3 = 0.669f;
					*uParam4 = -0.35f;
					*uParam5 = 0.17f;
					*uParam6 = 180f;
					StringCopy(sParam7, "line1", 32);
					*uParam8 = (0.599f + 0.076f);
					*uParam9 = 0.671f;
					*uParam10 = 0f;
					*uParam11 = 1;
					break;
				case 3:
					*uParam2 = 0.5f;
					*uParam3 = 0.74f;
					*uParam4 = 0.7f;
					*uParam5 = 0.004f;
					*uParam6 = 0f;
					StringCopy(sParam7, "line", 32);
					*uParam11 = 0;
					break;
			}
			break;
	}
}

void func_983(bool bParam0)//Position - 0x1BC391
{
	struct<3> Var0;
	int iVar1;
	Var0.f_0 = -893739527;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = bParam0;
	iVar1 = __LIB_4__::func_970(1);
	if (!iVar1 == 0)
	{
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 3, iVar1);
	}
}

void func_984(int iParam0, int iParam1)//Position - 0x1C1226
{
	int iVar0;
	int iVar1;
	iVar0 = INTERIOR::GET_INTERIOR_FROM_ENTITY(iParam0);
	if (INTERIOR::IS_VALID_INTERIOR(iVar0) && INTERIOR::IS_INTERIOR_READY(iVar0))
	{
		iVar1 = INTERIOR::GET_ROOM_KEY_FROM_ENTITY(iParam0);
		if (INTERIOR::GET_INTERIOR_FROM_ENTITY(iParam1) != iVar0 || INTERIOR::GET_ROOM_KEY_FROM_ENTITY(iParam1) != iVar1)
		{
			INTERIOR::RETAIN_ENTITY_IN_INTERIOR(iParam1, iVar0);
			INTERIOR::FORCE_ROOM_FOR_ENTITY(iParam1, iVar0, iVar1);
		}
	}
}

int func_985(int iParam0)//Position - 0x1C1F1F
{
	switch (iParam0)
	{
		case 2:
			return joaat("hei_p_m_bag_var22_arm_s");
		case 13:
		case 15:
			return joaat("ch_p_m_bag_var02_arm_s");
		case 17:
		case 19:
			return joaat("hei_p_m_bag_var22_arm_s");
		case 21:
		case 23:
			return joaat("hei_p_m_bag_var22_arm_s");
		case 25:
		case 27:
			return joaat("ch_p_m_bag_var03_arm_s");
		case 29:
		case 31:
			return joaat("hei_p_m_bag_var22_arm_s");
		case 33:
		case 35:
			return joaat("hei_p_m_bag_var22_arm_s");
		case 37:
		case 39:
			return joaat("hei_p_m_bag_var22_arm_s");
		case 41:
		case 43:
			return joaat("hei_p_m_bag_var22_arm_s");
		case 45:
		case 47:
			return joaat("ch_p_m_bag_var04_arm_s");
		case 49:
		case 51:
			return joaat("ch_p_m_bag_var01_arm_s");
		case 53:
		case 55:
			return joaat("ch_p_m_bag_var08_arm_s");
		case 57:
		case 59:
			return joaat("ch_p_m_bag_var09_arm_s");
		case 61:
		case 63:
			return joaat("ch_p_m_bag_var06_arm_s");
		case 65:
		case 67:
			return joaat("ch_p_m_bag_var05_arm_s");
		case 69:
		case 71:
			return joaat("ch_p_m_bag_var10_arm_s");
		case 73:
		case 75:
			return joaat("ch_p_m_bag_var07_arm_s");
		default:
	}
	return joaat("hei_p_m_bag_var22_arm_s");
}

int func_986(int iParam0)//Position - 0x1C23A9
{
	switch (iParam0)
	{
		case 15:
		case 27:
		case 47:
		case 51:
		case 55:
		case 59:
		case 63:
		case 67:
		case 71:
		case 75:
			return 1;
		default:
	}
	return 0;
}

int func_987(int iParam0)//Position - 0x1C23F9
{
	switch (iParam0)
	{
		case 13:
		case 15:
			return 15;
		case 25:
		case 27:
			return 27;
		case 45:
		case 47:
			return 47;
		case 49:
		case 51:
			return 51;
		case 53:
		case 55:
			return 55;
		case 57:
		case 59:
			return 59;
		case 61:
		case 63:
			return 63;
		case 65:
		case 67:
			return 67;
		case 69:
		case 71:
			return 71;
		case 73:
		case 75:
			return 75;
		default:
	}
	return -1;
}

void func_988(int iParam0, int iParam1, var uParam2)//Position - 0x1C4525
{
	struct<4> Var0;
	Var0.f_0 = -261919831;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_3 = iParam1;
	Var0.f_2 = uParam2;
	if (!iParam0 == 0)
	{
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 4, iParam0);
	}
}

int func_989(int iParam0, int iParam1)//Position - 0x1CA514
{
	if (__LIB_12__::func_568(iParam0) == iParam1)
	{
		return Global_1892703[iParam0 /*599*/].f_10.f_474;
	}
	return -1;
}

void func_990(var uParam0, int iParam1, var uParam2)//Position - 0x1CC2CC
{
	struct<5> Var0;
	int iVar1;
	Var0.f_0 = -1352397180;
	Var0.f_2 = uParam0;
	Var0.f_3 = iParam1;
	Var0.f_4 = uParam2;
	iVar1 = __LIB_4__::func_970(1);
	if (!iVar1 == 0)
	{
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 5, iVar1);
	}
}

void func_991(int* iParam0, bool bParam1, var uParam2, var uParam3, bool bParam4)//Position - 0x1CF216
{
	iParam0->f_37 = uParam2;
	iParam0->f_38 = uParam3;
	if (bParam1)
	{
		MISC::SET_BIT(iParam0, 8);
	}
	else
	{
		MISC::CLEAR_BIT(iParam0, 8);
	}
	if (bParam4)
	{
		MISC::SET_BIT(iParam0, 16);
	}
	else
	{
		MISC::CLEAR_BIT(iParam0, 16);
	}
}

void func_992(var uParam0)//Position - 0x1D0DA6
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0f;
	uParam0->f_21 = 0f;
	uParam0->f_22 = 0f;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_11 = 0f;
	uParam0->f_12 = 0.25f;
	uParam0->f_13 = 0f;
	uParam0->f_14 = 0f;
	uParam0->f_15 = 0f;
	uParam0->f_16 = 0f;
	uParam0->f_19 = 0f;
	uParam0->f_10 = 0f;
}

int func_993()//Position - 0x1D1C41
{
	if (Global_1922025)
	{
		return 1;
	}
	return 0;
}

void func_994()//Position - 0x1D1C61
{
	Global_1649593.f_1171 = 1;
}

void func_995(int* iParam0)//Position - 0x1D1C71
{
	PAD::SET_CONTROL_SHAKE(0 /*PLAYER_CONTROL*/, 2000, 220);
	MISC::SET_BIT(iParam0, 2);
	if (iParam0->f_8 <= 0f)
	{
		MISC::SET_BIT(iParam0, 4);
	}
	else
	{
		MISC::CLEAR_BIT(iParam0, 4);
	}
}

void func_996(int* iParam0)//Position - 0x1D1CA4
{
	if (iParam0->f_7 > iParam0->f_14)
	{
		if (MISC::ABSF((iParam0->f_23 - iParam0->f_22)) < 0.002f)
		{
			iParam0->f_23 = MISC::GET_RANDOM_FLOAT_IN_RANGE(-0.04f, 0f);
		}
	}
	else
	{
		iParam0->f_23 = 0f;
	}
	iParam0->f_22 = __LIB_0__::func_504(iParam0->f_22, iParam0->f_23, 1f);
}

int func_997(var uParam0)//Position - 0x1D2076
{
	STREAMING::REQUEST_ANIM_DICT("anim@heists@fleeca_bank@drilling");
	STREAMING::REQUEST_MODEL(joaat("hei_prop_heist_deposit_box"));
	STREAMING::REQUEST_MODEL(joaat("hei_prop_heist_drill"));
	STREAMING::REQUEST_MODEL(joaat("hei_p_m_bag_var22_arm_s"));
	if ((((((((STREAMING::HAS_ANIM_DICT_LOADED("anim@heists@fleeca_bank@drilling") && STREAMING::HAS_MODEL_LOADED(joaat("hei_prop_heist_deposit_box"))) && STREAMING::HAS_MODEL_LOADED(joaat("hei_prop_heist_drill"))) && STREAMING::HAS_MODEL_LOADED(joaat("hei_p_m_bag_var22_arm_s"))) && STREAMING::HAS_MODEL_LOADED(joaat("hei_prop_hei_drill_hole"))) && STREAMING::HAS_NAMED_PTFX_ASSET_LOADED("fm_mission_controler")) && GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_33)) && AUDIO::REQUEST_SCRIPT_AUDIO_BANK("DLC_MPHEIST\HEIST_FLEECA_DRILL", false, -1)) && AUDIO::REQUEST_SCRIPT_AUDIO_BANK("DLC_MPHEIST\HEIST_FLEECA_DRILL_2", false, -1))
	{
		return 1;
	}
	return 0;
}

void func_998(int* iParam0)//Position - 0x1D2126
{
	if (!BitTest(*iParam0, 2))
	{
		if (!BitTest(*iParam0, 5))
		{
			iParam0->f_11 = 0.08f;
			iParam0->f_6 = 0;
		}
		iParam0->f_15 = 0f;
	}
	iParam0->f_1 = 0;
	iParam0->f_2 = 0;
	iParam0->f_7 = 0f;
	iParam0->f_21 = 0f;
	iParam0->f_22 = 0f;
	iParam0->f_8 = 0f;
	iParam0->f_9 = 0f;
	iParam0->f_16 = 0f;
	iParam0->f_18 = 0f;
	iParam0->f_19 = 0f;
	iParam0->f_10 = 0f;
	iParam0->f_12 = 0.25f;
	iParam0->f_14 = iParam0->f_11;
	iParam0->f_13 = (iParam0->f_14 - 0.25f);
	if (iParam0->f_13 < 0f)
	{
		iParam0->f_13 = 0f;
	}
	MISC::CLEAR_BIT(iParam0, 1);
	MISC::CLEAR_BIT(iParam0, 2);
}

void func_999(var uParam0)//Position - 0x1D2228
{
	STREAMING::REQUEST_ANIM_DICT("anim@heists@fleeca_bank@drilling");
	STREAMING::REQUEST_MODEL(joaat("hei_prop_heist_deposit_box"));
	STREAMING::REQUEST_MODEL(joaat("hei_prop_heist_drill"));
	STREAMING::REQUEST_MODEL(joaat("hei_p_m_bag_var22_arm_s"));
	STREAMING::REQUEST_MODEL(joaat("hei_prop_hei_drill_hole"));
	AUDIO::REQUEST_SCRIPT_AUDIO_BANK("DLC_MPHEIST\HEIST_FLEECA_DRILL", false, -1);
	AUDIO::REQUEST_SCRIPT_AUDIO_BANK("DLC_MPHEIST\HEIST_FLEECA_DRILL_2", false, -1);
	STREAMING::REQUEST_NAMED_PTFX_ASSET("fm_mission_controler");
	if (uParam0->f_33 == 0)
	{
		uParam0->f_33 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("DRILLING");
	}
}
