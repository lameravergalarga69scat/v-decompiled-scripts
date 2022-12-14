bool func_0(int iParam0)//Position - 0x1E0444
{
	return iParam0 == joaat("h4_prop_h4_cash_stack_01a");
}

void func_1(var uParam0)//Position - 0x1E049A
{
	if (CAM::DOES_CAM_EXIST(uParam0->f_2))
	{
		CAM::DESTROY_CAM(uParam0->f_2, false);
	}
	HUD::DISPLAY_HUD(true);
	HUD::DISPLAY_RADAR(true);
	CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
}

void func_2()//Position - 0x1E0559
{
	AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("DLC_MPHEIST/HEIST_STASH_SWAG");
}

bool func_3(int iParam0)//Position - 0x1E0666
{
	return (((((((((((((((((iParam0 == joaat("ch_prop_vault_painting_01a") || iParam0 == joaat("ch_prop_vault_painting_01b")) || iParam0 == joaat("ch_prop_vault_painting_01c")) || iParam0 == joaat("ch_prop_vault_painting_01d")) || iParam0 == joaat("ch_prop_vault_painting_01e")) || iParam0 == joaat("ch_prop_vault_painting_01f")) || iParam0 == joaat("ch_prop_vault_painting_01g")) || iParam0 == joaat("ch_prop_vault_painting_01h")) || iParam0 == joaat("ch_prop_vault_painting_01i")) || iParam0 == joaat("ch_prop_vault_painting_01j")) || iParam0 == joaat("h4_prop_h4_painting_01a")) || iParam0 == joaat("h4_prop_h4_painting_01b")) || iParam0 == joaat("h4_prop_h4_painting_01c")) || iParam0 == joaat("h4_prop_h4_painting_01d")) || iParam0 == joaat("h4_prop_h4_painting_01e")) || iParam0 == joaat("h4_prop_h4_painting_01f")) || iParam0 == joaat("h4_prop_h4_painting_01g")) || iParam0 == joaat("h4_prop_h4_painting_01h"));
}

bool func_4(int iParam0)//Position - 0x1E0764
{
	return ((((((iParam0 == joaat("hei_prop_hei_cash_trolly_01") || iParam0 == joaat("ch_prop_cash_low_trolly_01a")) || iParam0 == joaat("ch_prop_ch_cash_trolly_01a")) || iParam0 == joaat("ch_prop_ch_cash_trolly_01b")) || iParam0 == joaat("ch_prop_ch_cash_trolly_01c")) || iParam0 == joaat("ch_prop_cash_low_trolly_01b")) || iParam0 == joaat("ch_prop_cash_low_trolly_01c"));
}

bool func_5(int iParam0)//Position - 0x1E07C8
{
	return (((iParam0 == joaat("prop_gold_trolly_full") || iParam0 == joaat("ch_prop_gold_trolly_01a")) || iParam0 == joaat("ch_prop_gold_trolly_01b")) || iParam0 == joaat("ch_prop_gold_trolly_01c"));
}

bool func_6(int iParam0)//Position - 0x1E0802
{
	return ((iParam0 == joaat("ch_prop_diamond_trolly_01a") || iParam0 == joaat("ch_prop_diamond_trolly_01b")) || iParam0 == joaat("ch_prop_diamond_trolly_01c"));
}

int func_7(int iParam0)//Position - 0x1E12DE
{
	int iVar0;
	int iVar1;
	float fVar2;
	switch (iParam0)
	{
		case 21:
			switch (Global_4718592.f_591)
			{
				case 0:
					fVar2 = Global_262145.f_9198 /* Tunable: HEIST_DIFFICULTY_EASY */;
					break;
				case 1:
					fVar2 = Global_262145.f_9199 /* Tunable: HEIST_DIFFICULTY_NORMAL */;
					break;
				case 2:
					fVar2 = Global_262145.f_9200 /* Tunable: HEIST_DIFFICULTY_HARD */;
					break;
				default:
					fVar2 = Global_262145.f_9199 /* Tunable: HEIST_DIFFICULTY_NORMAL */;
					break;
			}
			iVar0 = __LIB_18__::func_931(iParam0, 0);
			iVar1 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * fVar2));
			break;
		default:
			iVar1 = __LIB_18__::func_931(iParam0, 0);
			break;
	}
	if (__LIB_0__::func_848())
	{
		iVar1 = 10000000;
	}
	if (BitTest(Global_4718592.f_38, 9))
	{
		iVar1 = 10000000;
	}
	return iVar1;
}

bool func_8(int iParam0)//Position - 0x1E157D
{
	return iParam0 == joaat("imp_prop_impexp_coke_trolly");
}

bool func_9(int iParam0)//Position - 0x1E18D8
{
	return ((iParam0 == joaat("ch_prop_cash_low_trolly_01a") || iParam0 == joaat("ch_prop_cash_low_trolly_01b")) || iParam0 == joaat("ch_prop_cash_low_trolly_01c"));
}

void func_10(var uParam0)//Position - 0x1E1B44
{
	uParam0->f_14 = 1f;
	uParam0->f_15 = 1f;
}

bool func_11(int iParam0)//Position - 0x1E2AA0
{
	return iParam0 == joaat("h4_prop_h4_gold_stack_01a");
}

int func_12(int iParam0)//Position - 0x1E2C4D
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		switch (ENTITY::GET_ENTITY_MODEL(iParam0))
		{
			case joaat("hei_prop_hei_cash_trolly_01"):
				return 1;
				break;
			case joaat("prop_gold_trolly_full"):
				return AUDIO::REQUEST_SCRIPT_AUDIO_BANK("DLC_MPHEIST/HEIST_STASH_SWAG", false, -1);
				break;
			default:
				return AUDIO::REQUEST_SCRIPT_AUDIO_BANK("DLC_MPHEIST/HEIST_STASH_SWAG", false, -1);
				break;
		}
		if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("imp_prop_impexp_coke_trolly"))
		{
			return 1;
		}
	}
	return 0;
}

char* func_13(var uParam0, int iParam1)//Position - 0x1E3B29
{
	switch (iParam1)
	{
		case 0:
			return "MC_INTOBJ_CP_R";
			break;
		case 1:
			return "MC_INTOBJ_CP_D";
			break;
		case 2:
			return "MC_INTOBJ_CP_L";
			break;
		case 3:
			return "MC_INTOBJ_CP_D";
			break;
	}
	return "";
}

void func_14(var uParam0)//Position - 0x1F02C4
{
	if (*uParam0 > 150f)
	{
		*uParam0 = 145f;
	}
	if (uParam0->f_1 > 150f)
	{
		uParam0->f_1 = 145f;
	}
	if (uParam0->f_2 > 150f)
	{
		uParam0->f_2 = 145f;
	}
}

int func_15(int iParam0, int iParam1)//Position - 0x1F030C
{
	if (iParam1 == 2)
	{
		return VEHICLE::GET_VEHICLE_ATTACHED_TO_CARGOBOB(iParam0);
	}
	return VEHICLE::GET_ENTITY_ATTACHED_TO_CARGOBOB(iParam0);
}

int func_16(int iParam0, int iParam1)//Position - 0x1F18F4
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(iParam0), &Var0, &Var1);
	Var2 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, 0f, (Var0.f_1 - 2.8f), (Var0.f_2 - 1.2f)) };
	Var3 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, 0f, (Var1.f_1 + 2.8f), (Var1.f_2 + 1.2f)) };
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam1, Var2, Var3, ((Var1.f_0 + 2.1f) - (Var0.f_0 - 2.1f)), false, true, 0))
	{
		return 1;
	}
	return 0;
}

void func_17(float fParam0, var uParam1, var uParam2, var uParam3, var uParam4)//Position - 0x1FC068
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
	HUD::GET_HUD_COLOUR(1, &iVar0, &iVar1, &iVar2, &iVar3);
	iVar4 = 185;
	iVar5 = 48;
	iVar6 = 48;
	iVar7 = iVar3;
	fParam0 = (fParam0 / 100f);
	if (fParam0 > 1f)
	{
		fParam0 = 1f;
	}
	if (fParam0 < 0f)
	{
		fParam0 = 0f;
	}
	iVar8 = (iVar4 - iVar0);
	*uParam1 = (iVar0 + SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar8) * fParam0)));
	iVar8 = (iVar5 - iVar1);
	*uParam2 = (iVar1 + SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar8) * fParam0)));
	iVar8 = (iVar6 - iVar2);
	*uParam3 = (iVar2 + SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar8) * fParam0)));
	iVar8 = (iVar7 - iVar3);
	*uParam4 = (iVar3 + SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar8) * fParam0)));
}

int func_18()//Position - 0x1FC113
{
	if (SCRIPT::IS_THREAD_ACTIVE(Global_2678393.f_1317))
	{
		return 1;
	}
	return 0;
}

int func_19(bool bParam0)//Position - 0x1FC522
{
	if (bParam0 != -1)
	{
		return Global_1975224[bParam0 /*53*/].f_5.f_35;
	}
	return 0;
}

int func_20(bool bParam0, int iParam1)//Position - 0x1FC540
{
	if (bParam0 != -1)
	{
		return BitTest(Global_1975224[bParam0 /*53*/].f_5.f_1, iParam1);
	}
	return 0;
}

int func_21(bool bParam0)//Position - 0x1FC561
{
	if (bParam0 != -1)
	{
		switch (Global_1975224[bParam0 /*53*/].f_5.f_9)
		{
			case 4:
			case 2:
				return 11;
			default:
		}
		return 10;
	}
	return -1;
}

int func_22(int iParam0)//Position - 0x1FC597
{
	if (iParam0 == joaat("h4_prop_h4_bag_cutter_01a"))
	{
		return 10;
	}
	else if (iParam0 == joaat("h4_prop_h4_jammer_01a"))
	{
		return 7;
	}
	else if (iParam0 == joaat("h4_prop_h4_box_ammo03a"))
	{
		return 8;
	}
	else if (iParam0 == joaat("h4_prop_h4_gascutter_01a"))
	{
		return 9;
	}
	else if (iParam0 == joaat("h4_prop_h4_mb_crate_01a"))
	{
		return 13;
	}
	else if (iParam0 == joaat("h4_prop_h4_card_hack_01a"))
	{
		return 12;
	}
	return -1;
}

int func_23(bool bParam0)//Position - 0x1FC7DD
{
	if (bParam0 != -1)
	{
		return Global_1970897[bParam0 /*68*/].f_18.f_13;
	}
	return 0;
}

int func_24(bool bParam0, bool bParam1)//Position - 0x1FC7FB
{
	if (bParam0 != -1)
	{
		if (Global_1970897[bParam0 /*68*/].f_18.f_12 != 0 || !bParam1)
		{
			return Global_1970897[bParam0 /*68*/].f_18.f_12;
		}
	}
	if (bParam1)
	{
		return Global_1966500.f_15;
	}
	return 0;
}

int func_25(int iParam0)//Position - 0x1FCBCA
{
	if (iParam0 != -1)
	{
		return BitTest(Global_1970897[iParam0 /*68*/].f_18.f_1, 0);
	}
	return 0;
}

int func_26(int iParam0)//Position - 0x1FCBEA
{
	bool bVar0;
	if (iParam0 != -1)
	{
		bVar0 = false;
		while (bVar0 < 11)
		{
			if (!BitTest(Global_1970897[iParam0 /*68*/].f_18.f_2, bVar0))
			{
				return 0;
			}
			bVar0++;
		}
		return 1;
	}
	return 0;
}

int func_27(int iParam0)//Position - 0x1FCC64
{
	if (iParam0 != -1)
	{
		return BitTest(Global_1970897[iParam0 /*68*/].f_18, 2);
	}
	return 0;
}

int func_28(int iParam0)//Position - 0x1FCC82
{
	if (iParam0 != -1)
	{
		return BitTest(Global_1970897[iParam0 /*68*/].f_18, 19);
	}
	return 0;
}

int func_29(int iParam0)//Position - 0x1FCCBF
{
	if (iParam0 != -1)
	{
		return BitTest(Global_1970897[iParam0 /*68*/].f_18.f_1, 9);
	}
	return 0;
}

int func_30(int iParam0)//Position - 0x1FCDFD
{
	if (iParam0 != -1)
	{
		return BitTest(Global_1970897[iParam0 /*68*/].f_18.f_1, 2);
	}
	return 0;
}

int func_31(int iParam0)//Position - 0x1FCE45
{
	switch (iParam0)
	{
		case joaat("prop_box_guncase_03a"):
			return 1;
		default:
	}
	if (iParam0 == joaat("ch_prop_box_ammo01b"))
	{
		return 13;
	}
	if (iParam0 == joaat("ch_prop_box_ammo01a"))
	{
		return 7;
	}
	if (iParam0 == joaat("ch_prop_ch_security_case_02a"))
	{
		return 3;
	}
	if (iParam0 == joaat("ch_prop_adv_case_sm_flash"))
	{
		return 30;
	}
	if (iParam0 == joaat("ch_prop_vault_drill_01a"))
	{
		return 5;
	}
	if ((iParam0 == joaat("ch_prop_crate_stack_01a") || iParam0 == joaat("ch_prop_ch_case_sm_01x")) || iParam0 == joaat("ch_prop_ch_crate_01a"))
	{
		return 1;
	}
	if (iParam0 == joaat("ch_prop_ch_bag_01a"))
	{
		return 24;
	}
	if (iParam0 == joaat("ch_prop_laserdrill_01a"))
	{
		return 4;
	}
	if (iParam0 == joaat("ch_prop_ch_duffbag_stealth_01a"))
	{
		return 22;
	}
	if (iParam0 == joaat("ch_prop_heist_drill_bag_01a"))
	{
		return 6;
	}
	if (iParam0 == joaat("ch_prop_ch_duffbag_gruppe_01a"))
	{
		return 27;
	}
	if (iParam0 == joaat("ch_prop_ch_bag_02a"))
	{
		return 28;
	}
	return -1;
}

int func_32(bool bParam0)//Position - 0x1FCF2D
{
	if (bParam0 != -1)
	{
		return Global_1970897[bParam0 /*68*/].f_18.f_4;
	}
	return 0;
}

int func_33(int iParam0)//Position - 0x1FD549
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 16:
		case 17:
		case 18:
			return 0;
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
			return 1;
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
			return 2;
		default:
	}
	return -1;
}

int func_34(int iParam0)//Position - 0x1FD6D4
{
	switch (iParam0)
	{
		case 5:
			return 16;
		case 3:
			return 17;
		case 6:
			return 18;
		case 7:
			return 19;
		case 1:
			return 20;
		case 4:
			return 21;
		case 2:
			return 22;
		case 8:
			return 23;
		case 0:
			return 24;
		case 9:
			return 25;
		case 10:
			return 26;
		case 11:
			return 27;
		case 12:
			return 28;
		case 13:
			return 29;
		default:
	}
	return -1;
}

int func_35(int iParam0)//Position - 0x1FD77E
{
	switch (iParam0)
	{
		case joaat("xm_prop_x17_bag_01a"):
			return 0;
		case joaat("flatbed"):
			return 2;
		case joaat("deluxo"):
			return 3;
		case joaat("riot2"):
			return 4;
		case joaat("riot"):
			return 7;
		case joaat("ambulance"):
			return 5;
		case joaat("akula"):
			return 6;
		case joaat("wastelander"):
			return 2;
		case joaat("xm_prop_x17_flight_rec_01a"):
			return 13;
		case joaat("chernobog"):
			return 10;
		default:
	}
	if (iParam0 == joaat("xm_prop_x17_bag_01b"))
	{
		return 1;
	}
	if (iParam0 == joaat("xm_prop_x17_bag_01c"))
	{
		return 8;
	}
	if (iParam0 == joaat("xm_prop_x17_lap_top_01"))
	{
		return 12;
	}
	if (iParam0 == joaat("xm_prop_x17_ld_case_01"))
	{
		return 11;
	}
	return -1;
}

int func_36(bool bParam0)//Position - 0x1FD9B5
{
	if (bParam0 != -1)
	{
		return BitTest(Global_1977138[bParam0 /*57*/].f_27, 4);
	}
	return 0;
}

int func_37(bool bParam0)//Position - 0x1FDA8F
{
	if (bParam0 != -1)
	{
		return BitTest(Global_1975224[bParam0 /*53*/].f_1, 0);
	}
	return 0;
}

var func_38(int iParam0)//Position - 0x1FDC4D
{
	return Global_1892703[iParam0 /*599*/].f_10.f_179;
}

int func_39(bool bParam0)//Position - 0x1FDCBF
{
	return Global_1911933[bParam0 /*260*/].f_259;
}

bool func_40(bool bParam0)//Position - 0x1FDF93
{
	if (bParam0 == PLAYER::PLAYER_ID())
	{
		return __LIB_0__::func_945();
	}
	return BitTest(Global_1648034.f_241.f_136[__LIB_0__::func_161(10) /*33*/][bParam0], __LIB_0__::func_160(10));
}

int func_41(int iParam0)//Position - 0x1FDFC6
{
	switch (iParam0)
	{
		case 51:
		case 52:
			return 1;
		default:
	}
	return 0;
}

int func_42(int iParam0, bool bParam1, int iParam2)//Position - 0x1FE2CA
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = iParam0;
	iVar1 = bParam1;
	if (iVar0 == -1 || iVar1 == -1)
	{
		return 0;
	}
	iVar2 = 0;
	while (iVar2 < Global_1888817)
	{
		if (Global_1888862[iVar0 /*120*/].f_77.f_1[iVar2 /*3*/] == 2 && Global_1888862[iVar1 /*120*/].f_77.f_1[iVar2 /*3*/] == 2)
		{
			*iParam2 = iVar2;
			return 1;
		}
		iVar2++;
	}
	return 0;
}

bool func_43()//Position - 0x1FE755
{
	return BitTest(__LIB_1__::func_360(2484, -1, 0), 3);
}

bool func_44()//Position - 0x1FE92C
{
	return BitTest(__LIB_1__::func_360(2484, -1, 0), 2);
}

bool func_45()//Position - 0x1FEBAF
{
	return BitTest(__LIB_1__::func_360(2484, -1, 0), 1);
}

var func_46()//Position - 0x1FEE5E
{
	return Global_2678393.f_1647;
}

int func_47(int iParam0, var uParam1, int iParam2)//Position - 0x20B426
{
	if (iParam2 >= 12 || iParam2 <= -1)
	{
		return -1;
	}
	if (iParam0 > -1)
	{
		return Global_4718592.f_176813[iParam0 /*332*/].f_7[iParam2 /*27*/].f_7;
	}
	return uParam1->f_7[iParam2 /*27*/].f_7;
}

int func_48(int iParam0, var uParam1, int iParam2)//Position - 0x20B46D
{
	if (iParam2 >= 12 || iParam2 <= -1)
	{
		return -1;
	}
	if (iParam0 > -1)
	{
		return Global_4718592.f_176813[iParam0 /*332*/].f_7[iParam2 /*27*/].f_16;
	}
	return uParam1->f_7[iParam2 /*27*/].f_16;
}

int func_49(int iParam0, var uParam1)//Position - 0x20B887
{
	if (iParam0 > -1)
	{
		return Global_4718592.f_176813[iParam0 /*332*/].f_6;
	}
	return uParam1->f_6;
}

void func_50(bool bParam0, bool bParam1, bool bParam2)//Position - 0x20D0F1
{
	struct<4> Var0;
	int iVar1;
	Var0.f_0 = 437885653;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = bParam0;
	if (bParam1)
	{
		MISC::SET_BIT(&(Var0.f_3), 0);
	}
	if (bParam2)
	{
		MISC::SET_BIT(&(Var0.f_3), 1);
	}
	iVar1 = __LIB_4__::func_970(1);
	if (!iVar1 == 0)
	{
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 4, iVar1);
	}
}

int func_51(int iParam0, int iParam1)//Position - 0x20D146
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	if (BitTest(Global_4980736.f_94390[iParam0 /*1004*/].f_543, 28))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(iParam1, false))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(iParam1, false);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
			{
				iVar3 = VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(iVar0);
				iVar2 = -1;
				while (iVar2 <= (iVar3 - 1))
				{
					iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, iVar2, false);
					if (!PED::IS_PED_INJURED(iVar1))
					{
						if (PED::IS_PED_A_PLAYER(iVar1))
						{
							return 0;
						}
					}
					iVar2++;
				}
			}
		}
	}
	return 1;
}

bool func_52(int iParam0, bool bParam1, int iParam2, int iParam3)//Position - 0x21198D
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	iVar0 = 0;
	bVar1 = false;
	switch (iParam0)
	{
		case 1:
			if (((((bParam1 >= 0 && bParam1 < 80) && iParam2 >= 0) && iParam2 < 4) && iParam3 >= 0) && iParam3 < 17)
			{
				iVar0 = 1;
				if (Global_4980736.f_94390[bParam1 /*1004*/].f_40[iParam2] == iParam3)
				{
					bVar1 = true;
				}
			}
			break;
		case 2:
			if (((((bParam1 >= 0 && bParam1 < 32) && iParam2 >= 0) && iParam2 < 4) && iParam3 >= 0) && iParam3 < 17)
			{
				iVar0 = 1;
				if (Global_4980736.f_78578[bParam1 /*450*/].f_18[iParam2] == iParam3)
				{
					bVar1 = true;
				}
			}
			break;
		case 3:
			if (((((bParam1 >= 0 && bParam1 < 32) && iParam2 >= 0) && iParam2 < 4) && iParam3 >= 0) && iParam3 < 17)
			{
				iVar0 = 1;
				if (Global_4980736.f_5742[bParam1 /*442*/].f_21[iParam2] == iParam3)
				{
					bVar1 = true;
				}
			}
			break;
		case 4:
			if (((((bParam1 >= 0 && bParam1 < 20) && iParam2 >= 0) && iParam2 < 4) && iParam3 >= 0) && iParam3 < 17)
			{
				iVar0 = 1;
				if (Global_4980736.f_5742[bParam1 /*442*/].f_21[iParam2] == iParam3)
				{
					bVar1 = true;
				}
			}
			break;
	}
	if (iVar0 && !bVar1)
	{
		iVar2 = 0;
		while (iVar2 <= 29)
		{
			if (Global_4718592.f_111254[iVar2] == iParam0 && Global_4718592.f_111285[iVar2] == bParam1)
			{
				iVar3 = 0;
				while (iVar3 <= 12)
				{
					if (Global_4718592.f_113297[iVar2 /*66*/][iVar3 /*5*/][iParam2] == iParam3)
					{
						bVar1 = true;
						iVar3 = 13;
					}
					iVar3++;
				}
				iVar2 = 30;
			}
			iVar2++;
		}
	}
	return bVar1;
}

int func_53(bool bParam0)//Position - 0x2145D5
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (Global_4980736.f_5742[iVar0 /*442*/].f_67 == bParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_54(int iParam0)//Position - 0x2146A1
{
	int iVar0;
	iVar0 = 0;
	switch (iParam0)
	{
		case 25:
		case 26:
		case 36:
		case 34:
		case 48:
			iVar0 = 1;
			break;
	}
	return iVar0;
}

void func_55(bool bParam0)//Position - 0x214C1E
{
	struct<3> Var0;
	int iVar1;
	Var0.f_0 = -1695802831;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = bParam0;
	iVar1 = __LIB_4__::func_970(1);
	if (!iVar1 == 0)
	{
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 3, iVar1);
	}
}

void func_56(bool bParam0)//Position - 0x214F4A
{
	struct<3> Var0;
	int iVar1;
	Var0.f_0 = -1208645566;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = bParam0;
	iVar1 = __LIB_4__::func_970(1);
	if (!iVar1 == 0)
	{
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 3, iVar1);
	}
}

int func_57(var uParam0)//Position - 0x217F76
{
	switch (*uParam0)
	{
		case joaat("WEAPON_MOLOTOV"):
		case joaat("WEAPON_SMOKEGRENADE"):
		case joaat("WEAPON_GRENADE"):
		case joaat("WEAPON_STICKYBOMB"):
		case joaat("WEAPON_PIPEBOMB"):
		case joaat("WEAPON_PROXMINE"):
			return 1;
			break;
	}
	return 0;
}

void func_58(bool bParam0)//Position - 0x2182B3
{
	struct<3> Var0;
	int iVar1;
	Var0.f_0 = 571654886;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = bParam0;
	iVar1 = __LIB_4__::func_970(1);
	if (!iVar1 == 0)
	{
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 3, iVar1);
	}
}

void func_59(var uParam0, int iParam1)//Position - 0x219A72
{
	struct<4> Var0;
	int iVar1;
	Var0.f_0 = -1426675307;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = uParam0;
	Var0.f_3 = iParam1;
	iVar1 = __LIB_4__::func_970(1);
	if (!iVar1 == 0)
	{
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 4, iVar1);
	}
}

int func_60(int iParam0)//Position - 0x21A4FB
{
	int iVar0;
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(iParam0))
	{
		iVar0 = NETWORK::NET_TO_PED(iParam0);
	}
	return iVar0;
}

bool func_61()//Position - 0x22542C
{
	return ((((BitTest(Global_4718592.f_162497, 16) || BitTest(Global_4718592.f_162497, 17)) || BitTest(Global_4718592.f_162497, 18)) || BitTest(Global_4718592.f_162497, 19)) || __LIB_1__::func_125(Global_4718592.f_116524));
}

void func_62(var uParam0, int iParam1, char* sParam2, char* sParam3)//Position - 0x225C04
{
	struct<21> Var0;
	struct<20> Var1;
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
	Var0.f_1 = sParam2;
	Var0.f_2 = sParam3;
	Var0.f_0 = 1;
	Var0.f_20 = 49;
	Var0.f_16 = MISC::GET_HASH_KEY("BONEMASK_UPPERONLY");
	TASK::TASK_SCRIPTED_ANIMATION(iParam1, &Var0, &Var1, &Var1, 0.125f, 0.125f);
}

char* func_63(var uParam0, var uParam1, int iParam2, bool bParam3)//Position - 0x225E50
{
	if (bParam3)
	{
		switch (iParam2)
		{
			case 1:
				return "aim_med_loop";
			default:
		}
	}
	else
	{
		switch (iParam2)
		{
			case 1:
				return "idle_a";
			case 2:
				return "idle_d";
			}
		default:
	}
	return "INVALID";
}

char* func_64(var uParam0, var uParam1, int iParam2, bool bParam3)//Position - 0x225E9C
{
	if (bParam3)
	{
		switch (iParam2)
		{
			case 1:
				return "anim@weapons@flashlight@stealth";
			default:
		}
	}
	else
	{
		switch (iParam2)
		{
			case 1:
				return "AMB@CODE_HUMAN_POLICE_INVESTIGATE@idle_a";
			case 2:
				return "AMB@CODE_HUMAN_POLICE_INVESTIGATE@idle_b";
			}
		default:
	}
	return "INVALID";
}

void func_65(var uParam0, bool bParam1)//Position - 0x226FC5
{
	if (HUD::DOES_BLIP_EXIST(*uParam0))
	{
		HUD::SET_BLIP_SHOW_CONE(*uParam0, bParam1, 11);
	}
}

float func_66(int iParam0, float fParam1)//Position - 0x22760F
{
	switch (iParam0)
	{
		case 421:
		case 426:
			return 0.9f;
			break;
		case 424:
		case 423:
		case 422:
		case 353:
		case 64:
		case 427:
			return 1f;
			break;
		case 533:
		case 534:
			return 1f;
			break;
		case 589:
			return 1.2f;
			break;
		case 646:
			return 1f;
			break;
		case 833:
			return 1.2f;
			break;
		case 742:
			return 1f;
			break;
	}
	return fParam1;
}

int func_67(int iParam0, bool bParam1)//Position - 0x229698
{
	if (bParam1)
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
		{
			if (PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), PED::GET_VEHICLE_PED_IS_USING(iParam0)))
			{
				return 1;
			}
			if (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), PED::GET_VEHICLE_PED_IS_USING(iParam0)))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_68(int iParam0, int iParam1)//Position - 0x229EF0
{
	struct<3> Var0;
	Var0.f_0 = -2000694069;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = iParam1;
	if (!iParam0 == 0)
	{
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 3, iParam0);
	}
}

void func_69(bool bParam0)//Position - 0x231B30
{
	struct<3> Var0;
	int iVar1;
	Var0.f_0 = 710786563;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = bParam0;
	iVar1 = __LIB_4__::func_970(1);
	if (!iVar1 == 0)
	{
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 3, iVar1);
	}
}

void func_70(bool bParam0)//Position - 0x231B69
{
	struct<3> Var0;
	int iVar1;
	Var0.f_0 = -1431551210;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = bParam0;
	iVar1 = __LIB_4__::func_970(1);
	if (!iVar1 == 0)
	{
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 3, iVar1);
	}
}

float func_71(int iParam0, var uParam1)//Position - 0x2320DF
{
	if (iParam0 > -1)
	{
		return Global_4718592.f_176813[iParam0 /*332*/].f_4;
	}
	return uParam1->f_4;
}

float func_72(int iParam0, var uParam1, int iParam2)//Position - 0x232155
{
	if (iParam2 >= 12 || iParam2 <= -1)
	{
		return 0f;
	}
	if (iParam0 > -1)
	{
		return Global_4718592.f_176813[iParam0 /*332*/].f_7[iParam2 /*27*/].f_12;
	}
	return uParam1->f_7[iParam2 /*27*/].f_12;
}

void func_73(int iParam0, var uParam1)//Position - 0x2321FE
{
	struct<4> Var0;
	int iVar1;
	Var0.f_0 = -2029190504;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = iParam0;
	Var0.f_3 = uParam1;
	iVar1 = __LIB_4__::func_970(1);
	if (!iVar1 == 0)
	{
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 4, iVar1);
	}
}

float func_74(int iParam0, var uParam1, int iParam2)//Position - 0x232486
{
	if (iParam2 >= 12 || iParam2 <= -1)
	{
		return 0f;
	}
	if (iParam0 > -1)
	{
		return Global_4718592.f_176813[iParam0 /*332*/].f_7[iParam2 /*27*/].f_15;
	}
	return uParam1->f_7[iParam2 /*27*/].f_15;
}

int func_75(int iParam0)//Position - 0x233EAB
{
	int iVar0;
	switch (iParam0)
	{
		case 42:
		case 44:
		case 78:
			iVar0 = 1;
			break;
	}
	return iVar0;
}

int func_76(int iParam0)//Position - 0x233ED4
{
	int iVar0;
	switch (iParam0)
	{
		case 42:
		case 44:
		case 12:
		case 78:
			iVar0 = 1;
			break;
	}
	return iVar0;
}

void func_77(int iParam0)//Position - 0x239EDC
{
	struct<3> Var0;
	int iVar1;
	Var0.f_0 = -1949654184;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = iParam0;
	iVar1 = __LIB_4__::func_970(1);
	if (!iVar1 == 0)
	{
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 3, iVar1);
	}
}

void func_78(bool bParam0, bool bParam1, bool bParam2)//Position - 0x239FEA
{
	struct<4> Var0;
	int iVar1;
	Var0.f_0 = -1528294114;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = bParam0;
	if (bParam1)
	{
		MISC::SET_BIT(&(Var0.f_3), 0);
	}
	if (bParam2)
	{
		MISC::SET_BIT(&(Var0.f_3), 1);
	}
	iVar1 = __LIB_4__::func_970(1);
	if (!iVar1 == 0)
	{
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 4, iVar1);
	}
}

int func_79(int iParam0)//Position - 0x23E0B1
{
	int iVar0;
	iVar0 = 0;
	switch (iParam0)
	{
		case joaat("WEAPON_PISTOL"):
		case joaat("WEAPON_COMBATPISTOL"):
		case joaat("WEAPON_APPISTOL"):
		case joaat("WEAPON_MICROSMG"):
		case joaat("WEAPON_GRENADE"):
		case joaat("WEAPON_SMOKEGRENADE"):
		case joaat("WEAPON_STICKYBOMB"):
		case joaat("WEAPON_MOLOTOV"):
		case joaat("WEAPON_FLARE"):
		case joaat("WEAPON_STUNGUN"):
		case joaat("WEAPON_PETROLCAN"):
		case joaat("WEAPON_KNIFE"):
		case joaat("WEAPON_NIGHTSTICK"):
		case joaat("WEAPON_HAMMER"):
		case joaat("WEAPON_CROWBAR"):
		case joaat("WEAPON_PISTOL50"):
		case joaat("WEAPON_BOTTLE"):
		case joaat("WEAPON_HEAVYPISTOL"):
		case joaat("WEAPON_SNSPISTOL"):
		case joaat("WEAPON_DAGGER"):
		case joaat("WEAPON_VINTAGEPISTOL"):
		case joaat("WEAPON_FLAREGUN"):
		case joaat("WEAPON_PROXMINE"):
		case joaat("WEAPON_HATCHET"):
			iVar0 = 1;
			break;
	}
	return iVar0;
}

int func_80(int iParam0)//Position - 0x23E15B
{
	int iVar0;
	iVar0 = 0;
	switch (iParam0)
	{
		case joaat("WEAPON_GRENADE"):
		case joaat("WEAPON_MOLOTOV"):
		case joaat("WEAPON_STICKYBOMB"):
		case joaat("WEAPON_SMOKEGRENADE"):
		case joaat("WEAPON_PROXMINE"):
			iVar0 = 1;
			break;
	}
	return iVar0;
}

int func_81(int iParam0)//Position - 0x23E1CD
{
	if (ENTITY::GET_ENTITY_SPEED(iParam0) < 2f)
	{
		return 1;
	}
	return 0;
}

int func_82(struct<3> Param0, float fParam1)//Position - 0x23F055
{
	int iVar0;
	if ((((Param0.f_0 > (7000f + fParam1) || Param0.f_0 < (-7000f - fParam1)) || Param0.f_1 > (8000f + fParam1)) || Param0.f_1 < (-7000f - fParam1)) || Param0.f_2 > (2000f + fParam1))
	{
		iVar0 = 1;
	}
	return iVar0;
}

void func_83(bool bParam0)//Position - 0x23F3D1
{
	struct<3> Var0;
	int iVar1;
	Var0.f_0 = -1750184395;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = bParam0;
	iVar1 = __LIB_4__::func_970(1);
	if (!iVar1 == 0)
	{
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 3, iVar1);
	}
}

void func_84(bool bParam0)//Position - 0x240A75
{
	struct<3> Var0;
	int iVar1;
	Var0.f_0 = -487071400;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = bParam0;
	iVar1 = __LIB_4__::func_970(1);
	if (!iVar1 == 0)
	{
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 3, iVar1);
	}
}

char* func_85(int iParam0, bool bParam1)//Position - 0x240AAE
{
	if (Global_4980736.f_94390[bParam1 /*1004*/].f_589 == 16)
	{
		return "S_M_M_GENERICSECURITY_01_WHITE_MINI_01";
	}
	if (iParam0 > -1)
	{
		switch (iParam0)
		{
			case 0:
				return "S_M_Y_Cop_01_BLACK_FULL_01";
			case 1:
				return "S_M_Y_Cop_01_WHITE_FULL_01";
			}
		default:
	}
	return "";
}

void func_86(bool bParam0, int iParam1)//Position - 0x240BE2
{
	struct<5> Var0;
	int iVar1;
	Var0.f_0 = -1291405418;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = bParam0;
	Var0.f_4 = iParam1;
	iVar1 = __LIB_4__::func_970(1);
	if (!iVar1 == 0)
	{
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 5, iVar1);
	}
}

void func_87(bool bParam0)//Position - 0x240C21
{
	struct<3> Var0;
	int iVar1;
	Var0.f_0 = 328078533;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = bParam0;
	iVar1 = __LIB_4__::func_970(1);
	if (!iVar1 == 0)
	{
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 3, iVar1);
	}
}

void func_88(int iParam0, int iParam1)//Position - 0x240CB4
{
	int iVar0;
	iVar0 = NETWORK::GET_NETWORK_TIME();
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if ((iVar0 % iParam1 * 10) == 0)
		{
			AUDIO::PLAY_PAIN(iParam0, 25, 0f, 0);
		}
	}
}

void func_89(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x240EE2
{
	struct<6> Var0;
	int iVar1;
	Var0.f_0 = -371701203;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = iParam0;
	Var0.f_3 = iParam1;
	Var0.f_4 = iParam2;
	Var0.f_5 = iParam3;
	iVar1 = __LIB_4__::func_970(1);
	if (!iVar1 == 0)
	{
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 6, iVar1);
	}
}

char* func_90(int iParam0)//Position - 0x241DBD
{
	switch (iParam0)
	{
		case 0:
			return "move_m@drunk@lightlydrunk";
		case 1:
			return "move_m@drunk@moderatedrunk";
		case 2:
			return "move_m@drunk@verydrunk";
		case 3:
			return "move_m@flee@a";
		case 4:
			return "move_f@flee@a";
		case 5:
			return "AMB@WORLD_HUMAN_POWER_WALKER@BASE";
		case 6:
			return "move_M@TOUGH_GUY@";
		case 7:
			return "move_F@TOUGH_GUY@";
		case 8:
			return "move_injured_generic";
		case 9:
			return "move_injured_generic_female";
		default:
	}
	return "";
}

void func_91(int iParam0)//Position - 0x242F1D
{
	struct<3> Var0;
	int iVar1;
	Var0.f_0 = -555865863;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = iParam0;
	iVar1 = __LIB_4__::func_970(1);
	if (!iVar1 == 0)
	{
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 3, iVar1);
	}
}

void func_92(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x245297
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	if (ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		iVar3 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
		if (!PED::IS_PED_INJURED(iVar3))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(iVar3, false))
			{
				iParam0 = PED::GET_VEHICLE_PED_IS_IN(iVar3, false);
			}
		}
	}
	fVar2 = 1f;
	MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(iParam0), &Var0, &Var1);
	fVar4 = ((Var1.f_2 - Var0.f_2) / 2f);
	fVar5 = (Var1.f_2 - fVar4);
	if (fVar2 <= (fVar5 + 0.1f))
	{
		fVar2 = (fVar5 + 0.4f);
	}
	GRAPHICS::DRAW_MARKER(2, ENTITY::GET_ENTITY_COORDS(iParam0, true) + Vector((((Var1.f_2 - Var0.f_2) / 2f) + fVar2), 0f, 0f), 0f, 0f, 0f, 180f, 0f, 0f, 1f, 1f, 1f, iParam1, iParam2, iParam3, 200, true, true, 2, false, 0, 0, false);
}

float func_93(struct<3> Param0, struct<3> Param1, struct<3> Param2)//Position - 0x245A25
{
	float fVar0;
	float fVar1;
	struct<3> Var2;
	fVar0 = SYSTEM::VDIST2(Param0, Param1);
	if (fVar0 == 0f)
	{
		return MISC::GET_DISTANCE_BETWEEN_COORDS(Param2, Param0, true);
	}
	fVar1 = (__LIB_0__::func_158(Param2 - Param0, Param1 - Param0) / fVar0);
	if (fVar1 < 0f)
	{
		return MISC::GET_DISTANCE_BETWEEN_COORDS(Param2, Param0, true);
	}
	else if (fVar1 > 1f)
	{
		return MISC::GET_DISTANCE_BETWEEN_COORDS(Param2, Param1, true);
	}
	Var2 = { Param0 + Vector(fVar1, fVar1, fVar1) * Param1 - Param0 };
	return MISC::GET_DISTANCE_BETWEEN_COORDS(Param2, Var2, true);
}

struct<13> func_94(struct<3> Param0, struct<3> Param1, float fParam2)//Position - 0x245AC1
{
	struct<13> Var0;
	struct<3> Var1;
	float fVar2;
	Var0 = 4;
	Param0.f_2 = 0f;
	Param1.f_2 = 0f;
	Var1 = { __LIB_0__::func_79(Param1 - Param0) };
	Var0[0 /*3*/] = { Var1 };
	fVar2 = Var0[0 /*3*/];
	Var0[0 /*3*/] = Var0[0 /*3*/].f_1;
	Var0[0 /*3*/].f_1 = (0f - fVar2);
	Var0[0 /*3*/] = { Param0 + Var0[0 /*3*/] * FtoV((fParam2 / 2f)) };
	Var0[1 /*3*/] = { Var1 };
	fVar2 = Var0[1 /*3*/];
	Var0[1 /*3*/] = (0f - Var0[1 /*3*/].f_1);
	Var0[1 /*3*/].f_1 = fVar2;
	Var0[1 /*3*/] = { Param0 + Var0[1 /*3*/] * FtoV((fParam2 / 2f)) };
	Var0[2 /*3*/] = { Var1 };
	fVar2 = Var0[2 /*3*/];
	Var0[2 /*3*/] = Var0[2 /*3*/].f_1;
	Var0[2 /*3*/].f_1 = (0f - fVar2);
	Var0[2 /*3*/] = { Param1 + Var0[2 /*3*/] * FtoV((fParam2 / 2f)) };
	Var0[3 /*3*/] = { Var1 };
	fVar2 = Var0[3 /*3*/];
	Var0[3 /*3*/] = (0f - Var0[3 /*3*/].f_1);
	Var0[3 /*3*/].f_1 = fVar2;
	Var0[3 /*3*/] = { Param1 + Var0[3 /*3*/] * FtoV((fParam2 / 2f)) };
	return Var0;
}

int func_95(bool bParam0)//Position - 0x2467BF
{
	int iVar0;
	iVar0 = 0;
	if (BitTest(Global_4980736.f_5[bParam0 /*273*/].f_89, 6))
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_96(int iParam0)//Position - 0x246D1A
{
	int iVar0;
	iVar0 = 0;
	if ((((BitTest(Global_4980736.f_5[iParam0 /*273*/].f_89, 0) || BitTest(Global_4980736.f_5[iParam0 /*273*/].f_89, 1)) || BitTest(Global_4980736.f_5[iParam0 /*273*/].f_89, 2)) || BitTest(Global_4980736.f_5[iParam0 /*273*/].f_89, 3)) || BitTest(Global_4980736.f_5[iParam0 /*273*/].f_89, 4))
	{
		iVar0 = 1;
	}
	return iVar0;
}

void func_97(bool bParam0, bool bParam1)//Position - 0x246E4F
{
	struct<4> Var0;
	int iVar1;
	Var0.f_0 = -829655830;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = bParam0;
	Var0.f_3 = bParam1;
	iVar1 = __LIB_4__::func_970(1);
	if (!iVar1 == 0)
	{
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 4, iVar1);
	}
}

var func_98(struct<3> Param0)//Position - 0x24BD91
{
	var uVar0;
	struct<3> Var1;
	Var1.f_2 = (Param0.f_2 - 2f);
	if (MISC::GET_GROUND_Z_FOR_3D_COORD(Var1, &uVar0, false, false))
	{
		Param0.f_2 = uVar0;
	}
	return Param0.f_2;
}

Vector3 func_99(struct<3> Param0, struct<3> Param1, struct<3> Param2, float fParam3)//Position - 0x24BDBC
{
	struct<3> Var0;
	float fVar1;
	struct<3> Var2[4];
	int iVar3;
	struct<3> Var4[4];
	int iVar5;
	Param1.f_2 = __LIB_3__::func_480(Param1.f_2, Param2.f_2);
	Param2.f_2 = Param1.f_2;
	Var0 = { Param2 - Param1 };
	fVar1 = Var0.f_0;
	Var0.f_0 = Var0.f_1;
	Var0.f_1 = (0f - fVar1);
	Var0 = { __LIB_0__::func_79(Var0) };
	fParam3 = ((fParam3 / 2f) - 2f);
	Var2[0 /*3*/] = { Param1 + Var0 * Vector(fParam3, fParam3, fParam3) };
	Var2[1 /*3*/] = { Param1 + Var0 * Vector(-fParam3, -fParam3, -fParam3) };
	Var2[2 /*3*/] = { Param2 + Var0 * Vector(fParam3, fParam3, fParam3) };
	Var2[3 /*3*/] = { Param2 + Var0 * Vector(-fParam3, -fParam3, -fParam3) };
	iVar3 = 0;
	Var4[0 /*3*/] = { MISC::GET_CLOSEST_POINT_ON_LINE(Param0, Var2[0 /*3*/], Var2[1 /*3*/], true) };
	Var4[1 /*3*/] = { MISC::GET_CLOSEST_POINT_ON_LINE(Param0, Var2[0 /*3*/], Var2[2 /*3*/], true) };
	Var4[2 /*3*/] = { MISC::GET_CLOSEST_POINT_ON_LINE(Param0, Var2[2 /*3*/], Var2[3 /*3*/], true) };
	Var4[3 /*3*/] = { MISC::GET_CLOSEST_POINT_ON_LINE(Param0, Var2[1 /*3*/], Var2[3 /*3*/], true) };
	iVar5 = 1;
	while (iVar5 <= 3)
	{
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(Param0, Var4[iVar5 /*3*/], true) < MISC::GET_DISTANCE_BETWEEN_COORDS(Param0, Var4[iVar3 /*3*/], true))
		{
			iVar3 = iVar5;
		}
		iVar5++;
	}
	return Var4[iVar3 /*3*/];
}

void func_100(var uParam0, var uParam1, var uParam2)//Position - 0x24DC03
{
	if (Global_2714762.f_43.f_581 < 5)
	{
		Global_2714762.f_43.f_583[Global_2714762.f_43.f_581] = uParam0;
		Global_2714762.f_43.f_589[Global_2714762.f_43.f_581] = uParam2;
		Global_2714762.f_43.f_595[Global_2714762.f_43.f_581] = uParam1;
		MISC::SET_BIT(&(Global_2714762.f_43.f_582), Global_2714762.f_43.f_581);
		Global_2714762.f_43.f_581++;
	}
}

char* func_101(int iParam0)//Position - 0x24DC84
{
	switch (iParam0)
	{
		case 0:
			return "ALARM_BELL_01";
		case 1:
			return "ALARM_BELL_02";
		case 2:
			return "ALARM_BELL_03";
		case 3:
			return "ALARM_KLAXON_01";
		case 4:
			return "ALARM_KLAXON_02";
		case 5:
			return "ALARM_KLAXON_03";
		case 6:
			return "ALARM_KLAXON_04";
		case 7:
			return "ALARM_KLAXON_05";
		case 8:
			return "ALARM_KLAXON_06";
		case 9:
			return "ALARM_KLAXON_07";
		case 10:
			return "";
		case 11:
			return "";
		case 12:
			return "";
		case 13:
			return "";
		case 14:
			return "";
		case 15:
			return "";
		case 16:
			return "";
		case 17:
			return "";
		case 18:
			return "ALARM_KLAXON_07";
		case 19:
			return "DLC_CHRISTMAS2017/XM_SILO";
		case 22:
			return "DLC_HEIST3/CASINO_HEIST_FINALE_GENERAL_01";
		case 23:
			return "DLC_CHRISTMAS2017/XM_SILO";
		case 24:
			return "DLC_CHRISTMAS2017/XM_SILO";
		default:
	}
	return "";
}

int func_102(int iParam0)//Position - 0x24F2A0
{
	if (Global_4980736.f_36356[iParam0 /*134*/].f_7 == joaat("ch_prop_ch_cctv_wall_atta_01a"))
	{
		return 1;
	}
	return 0;
}

int func_103(int iParam0)//Position - 0x24FE48
{
	switch (iParam0)
	{
		case joaat("prop_fnclink_03gate1"):
		case 234679968:
		case -603321669:
		case joaat("prop_fnclink_03gate2"):
		case -633891736:
		case 407998623:
		case joaat("prop_fnclink_03gate3"):
		case -271779356:
		case joaat("prop_fnclink_03gate4"):
		case 33751332:
		case 1067023440:
		case joaat("prop_fnclink_03gate5"):
		case -747665783:
		case -1111467221:
		case joaat("prop_lrggate_04a"):
		case -219724389:
			return 1;
		default:
	}
	if (iParam0 == joaat("ch_prop_casino_door_01d"))
	{
		return 1;
	}
	return 0;
}

bool func_104(bool bParam0)//Position - 0x2500F9
{
	return __LIB_19__::func_141(bParam0) != 0;
}

int func_105(bool bParam0)//Position - 0x252008
{
	if (BitTest(Global_4980736.f_5742[bParam0 /*442*/].f_122, 0))
	{
		return 0;
	}
	return 1;
}

void func_106(bool bParam0, var uParam1, var uParam2)//Position - 0x252559
{
	struct<5> Var0;
	int iVar1;
	Var0.f_0 = 1169419726;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_3 = uParam1;
	Var0.f_2 = bParam0;
	Var0.f_4 = uParam2;
	iVar1 = __LIB_4__::func_970(1);
	if (!iVar1 == 0)
	{
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 5, iVar1);
	}
}

int func_107(int iParam0)//Position - 0x258C8D
{
	switch (iParam0)
	{
		case 422:
		case 64:
		case 528:
		case 529:
		case 530:
		case 531:
		case 532:
		case 533:
		case 534:
		case 512:
		case 558:
		case 559:
		case 560:
		case 561:
		case 562:
		case 563:
		case 595:
		case 596:
		case 597:
		case 598:
		case 599:
		case 600:
		case 601:
		case 602:
		case 603:
		case 589:
		case 631:
		case 632:
		case 633:
		case 634:
		case 635:
		case 636:
		case 637:
		case 640:
		case 658:
		case 659:
		case 660:
		case 661:
		case 662:
		case 663:
		case 664:
		case 665:
		case 666:
		case 667:
		case 668:
		case 669:
		case 646:
		case 742:
		case 746:
		case 753:
		case 758:
		case 348:
		case 749:
		case 757:
		case 754:
		case 745:
		case 755:
		case 759:
		case 747:
		case 748:
		case 750:
		case 760:
		case 824:
		case 825:
		case 823:
		case 820:
		case 821:
		case 818:
			return 1;
			break;
	}
	return 0;
}

int func_108(int iParam0, int iParam1)//Position - 0x25AC0E
{
	int iVar0;
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	if (iVar0 == joaat("ruiner2") || iVar0 == joaat("dune3"))
	{
		return 3000;
	}
	if (VEHICLE::IS_THIS_MODEL_A_BIKE(iVar0))
	{
		return 13000;
	}
	if (iParam1 > -1 && iParam1 < 32)
	{
		if (BitTest(Global_4980736.f_78578[iParam1 /*450*/].f_113, 29))
		{
			return 25000;
		}
	}
	return 0;
}

void func_109(bool bParam0)//Position - 0x25BB79
{
	if (bParam0)
	{
		if (!BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_292, 15))
		{
			MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_292), 15);
		}
	}
	else if (BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_292, 15))
	{
		MISC::CLEAR_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_292), 15);
	}
}

int func_110(int iParam0)//Position - 0x25BCB3
{
	if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("granger"))
	{
		return 5;
	}
	else if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("speedo"))
	{
		return 4;
	}
	else if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("gburrito"))
	{
		return 4;
	}
	else if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("barracks"))
	{
		return 2;
	}
	else if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("barracks3"))
	{
		return 2;
	}
	else if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("benson"))
	{
		return 5;
	}
	else if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("gburrito2"))
	{
		return 4;
	}
	else if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("mule"))
	{
		return 4;
	}
	else if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("mule3"))
	{
		return 4;
	}
	return 0;
}

int func_111(int iParam0, int iParam1)//Position - 0x25DC65
{
	struct<3> Var0;
	float fVar1;
	if (!PED::IS_PED_INJURED(iParam1))
	{
		if (!__LIB_0__::func_86(Global_4980736.f_5[iParam0 /*273*/].f_57) && !__LIB_0__::func_86(Global_4980736.f_5[iParam0 /*273*/].f_60))
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam1, Global_4980736.f_5[iParam0 /*273*/].f_57, Global_4980736.f_5[iParam0 /*273*/].f_60, Global_4980736.f_5[iParam0 /*273*/].f_63, false, true, 0))
			{
				return 1;
			}
		}
		else
		{
			Var0 = { Global_4980736.f_5[iParam0 /*273*/].f_1[0 /*3*/] };
			fVar1 = SYSTEM::POW(Global_4980736.f_5[iParam0 /*273*/].f_14[0], 2f);
			if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam1, true), Var0) < fVar1)
			{
				return 1;
			}
		}
	}
	return 0;
}

struct<16> func_112(bool bParam0)//Position - 0x260E36
{
	struct<13> Var0;
	struct<2> Var1;
	Var0 = { __LIB_1__::func_696(bParam0) };
	NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Var1, 0, &Var0);
	return Var1.f_1;
}

int func_113(int iParam0)//Position - 0x260F74
{
	if (Global_4718592.f_92543[iParam0] != 0)
	{
		return 1;
	}
	return 0;
}

int func_114(var uParam0)//Position - 0x2613B9
{
	if (Global_1931426)
	{
		return 0;
	}
	return BitTest(uParam0->f_1, 5);
}

void func_115(var uParam0, int iParam1)//Position - 0x264652
{
	if (uParam0->f_2 != iParam1)
	{
		uParam0->f_2 = iParam1;
	}
	if (*uParam0 > 0)
	{
		MISC::SET_BIT(&(uParam0->f_1), 7);
		MISC::SET_BIT(&(uParam0->f_1), 9);
	}
	if (*uParam0 > 1)
	{
		MISC::CLEAR_BIT(&(uParam0->f_1), 10);
		if (*uParam0 < 4)
		{
			uParam0->f_3 = 0f;
		}
		if (!BitTest(uParam0->f_1, 1))
		{
			uParam0->f_5 = 0;
		}
		uParam0->f_6 = 0;
		if (!BitTest(uParam0->f_1, 3))
		{
			uParam0->f_7 = 0;
		}
		if (!BitTest(uParam0->f_1, 4))
		{
			uParam0->f_8 = 0;
		}
	}
}

bool func_116(bool bParam0)//Position - 0x266297
{
	return __LIB_15__::func_303(Global_2678393.f_591[bParam0], &(Global_2678393.f_388), bParam0);
}

void func_117(int iParam0)//Position - 0x26ED99
{
	if (CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT())
	{
		if (!CAM::IS_SCREEN_FADING_IN())
		{
			CAM::DO_SCREEN_FADE_IN(iParam0);
		}
	}
}

void func_118(bool bParam0, bool bParam1)//Position - 0x27016E
{
	if (bParam1 < 0 || bParam1 > 7)
	{
		return;
	}
	if (!SCRIPT::IS_THREAD_ACTIVE(Global_2678393.f_1568[bParam1]) || Global_2678393.f_1568[bParam1] == SCRIPT::GET_ID_OF_THIS_THREAD())
	{
		if (bParam0)
		{
			Global_2678393.f_1568[bParam1] = SCRIPT::GET_ID_OF_THIS_THREAD();
			MISC::SET_BIT(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_71.f_2), (10 + bParam1));
		}
		else
		{
			Global_2678393.f_1568[bParam1] = -1;
			MISC::CLEAR_BIT(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_71.f_2), (10 + bParam1));
		}
	}
}

int func_119(var uParam0, int iParam1, int iParam2)//Position - 0x271000
{
	char* sVar0;
	char* sVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	int iVar6;
	sVar0 = "scr_ar_planes";
	sVar1 = "scr_ar_trail_smoke";
	STREAMING::REQUEST_NAMED_PTFX_ASSET(sVar0);
	if (STREAMING::HAS_NAMED_PTFX_ASSET_LOADED(sVar0))
	{
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
		if (!GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(*uParam0))
		{
			GRAPHICS::USE_PARTICLE_FX_ASSET(sVar0);
			iVar6 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iParam1, "rudder");
			if (iVar6 == -1)
			{
				*uParam0 = GRAPHICS::START_NETWORKED_PARTICLE_FX_LOOPED_ON_ENTITY(sVar1, iParam1, 0f, 0f, 0f, 0f, 0f, 0f, 1f, false, false, false, 1f, 1f, 1f, 0f);
			}
			else
			{
				*uParam0 = GRAPHICS::START_NETWORKED_PARTICLE_FX_LOOPED_ON_ENTITY_BONE(sVar1, iParam1, 0f, 0f, -0.8f, 0f, 0f, 0f, iVar6, 1f, false, false, false, 1f, 1f, 1f, 0f);
			}
			GRAPHICS::SET_PARTICLE_FX_LOOPED_COLOUR(*uParam0, SYSTEM::TO_FLOAT(iVar2), SYSTEM::TO_FLOAT(iVar3), SYSTEM::TO_FLOAT(iVar4), false);
		}
		return 1;
	}
	return 0;
}

int func_120()//Position - 0x2713A9
{
	int iVar0;
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
	{
		return 0;
	}
	iVar0 = PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
	if (TASK::GET_IS_TASK_ACTIVE(iVar0, 2))
	{
		return 0;
	}
	if (PED::IS_PED_GETTING_INTO_A_VEHICLE(iVar0))
	{
		return 0;
	}
	if (TASK::GET_SCRIPT_TASK_STATUS(iVar0, joaat("SCRIPT_TASK_ENTER_VEHICLE")) == 1 || TASK::GET_SCRIPT_TASK_STATUS(iVar0, joaat("SCRIPT_TASK_ENTER_VEHICLE")) == 0)
	{
		return 0;
	}
	if (PED::GET_VEHICLE_PED_IS_TRYING_TO_ENTER(iVar0) != 0 || PED::GET_VEHICLE_PED_IS_ENTERING(iVar0) != 0)
	{
		return 0;
	}
	return 1;
}

void func_121(var uParam0)//Position - 0x27142B
{
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(*uParam0))
	{
		GRAPHICS::STOP_PARTICLE_FX_LOOPED(*uParam0, false);
		GRAPHICS::REMOVE_PARTICLE_FX(*uParam0, false);
	}
}

void func_122()//Position - 0x27169E
{
	if (!__LIB_0__::func_73())
	{
		Global_20266.f_1 = 3;
	}
}

int func_123(int iParam0)//Position - 0x2716B4
{
	if (iParam0 == 1)
	{
		if (Global_20266.f_1 > 3)
		{
			if (BitTest(Global_8136, 14))
			{
				if (Global_20265 == 1)
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand")) > 0)
	{
		if (Global_20265 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (Global_20266.f_1 > 3)
	{
		if (Global_20265 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

void func_124(int iParam0)//Position - 0x271AED
{
	if (iParam0 == 1)
	{
		if (!BitTest(Global_2815059.f_4660, 7))
		{
			MISC::SET_BIT(&(Global_2815059.f_4660), 7);
		}
	}
	else if (BitTest(Global_2815059.f_4660, 7))
	{
		MISC::CLEAR_BIT(&(Global_2815059.f_4660), 7);
	}
}

void func_125(int iParam0, int iParam1, int iParam2)//Position - 0x27421D
{
	struct<5> Var0;
	int iVar1;
	Var0.f_0 = 72337390;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = iParam0;
	Var0.f_3 = iParam1;
	Var0.f_4 = iParam2;
	iVar1 = __LIB_4__::func_970(1);
	if (!iVar1 == 0)
	{
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 5, iVar1);
	}
}

int func_126(int iParam0)//Position - 0x274359
{
	if (iParam0 == joaat("WEAPON_STUNGUN"))
	{
		return 1;
	}
	return 0;
}

void func_127(int iParam0, int iParam1)//Position - 0x2745BD
{
	struct<4> Var0;
	int iVar1;
	Var0.f_0 = 542740201;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = iParam0;
	Var0.f_3 = iParam1;
	iVar1 = __LIB_4__::func_970(1);
	if (!iVar1 == 0)
	{
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 4, iVar1);
	}
}

void func_128(int iParam0)//Position - 0x274F97
{
	struct<3> Var0;
	int iVar1;
	Var0.f_0 = 1575618508;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = iParam0;
	iVar1 = __LIB_4__::func_970(1);
	if (!iVar1 == 0)
	{
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 3, iVar1);
	}
}

void func_129(bool bParam0)//Position - 0x2752AE
{
	if (bParam0)
	{
	}
	Global_1574969 = bParam0;
}

void func_130(int iParam0)//Position - 0x2752C4
{
	Global_2703735.f_2722 = iParam0;
}

int func_131(int iParam0)//Position - 0x275FCE
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	int iVar4;
	iVar4 = FILES::GET_SHOP_PED_APPAREL_VARIANT_PROP_COUNT(iParam0);
	iVar0 = 0;
	while (iVar0 < iVar4)
	{
		FILES::GET_VARIANT_PROP(iParam0, iVar0, &iVar1, &uVar2, &uVar3);
		if (iVar1 != 0 && iVar1 != joaat("0"))
		{
			return iVar1;
		}
		iVar0 = iVar4 + 1;
		iVar0++;
	}
	return 0;
}

bool func_132()//Position - 0x27601F
{
	if ((Global_4538824.f_1 && !MISC::IS_STRING_NULL_OR_EMPTY(&(Global_4538824.f_2))) && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(MISC::GET_HASH_KEY(&(Global_4538824.f_2))) == 0)
	{
		Global_4538824.f_1 = 0;
		StringCopy(&(Global_4538824.f_2), "", 32);
	}
	return Global_4538824.f_1;
}

int func_133()//Position - 0x27606D
{
	return Global_4538824.f_10;
}

int func_134()//Position - 0x276133
{
	if (__LIB_1__::func_732(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	if (Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_804)
	{
		return 0;
	}
	return 1;
}

void func_135()//Position - 0x276635
{
	Global_4521801.f_973 = 1;
}

int func_136(int iParam0, bool bParam1, int iParam2)//Position - 0x2768CA
{
	if (iParam0 == 0)
	{
		if (Global_4538824 != 0 && Global_4538824.f_1)
		{
			Global_4538824 = 0;
			Global_4538824.f_1 = 0;
			StringCopy(&(Global_4538824.f_2), "", 32);
			Global_4538824.f_10 = iParam2;
			return 1;
		}
	}
	else if (!bParam1)
	{
		Global_4538824 = iParam0;
		Global_4538824.f_1 = 0;
		StringCopy(&(Global_4538824.f_2), "", 32);
		Global_4538824.f_10 = iParam2;
		return 1;
	}
	else if (Global_4538824 != iParam0)
	{
		Global_4538824 = iParam0;
		Global_4538824.f_1 = 1;
		StringCopy(&(Global_4538824.f_2), SCRIPT::GET_THIS_SCRIPT_NAME(), 32);
		Global_4538824.f_10 = iParam2;
		return 1;
	}
	return 0;
}

int func_137()//Position - 0x276B2F
{
	if (GRAPHICS::GET_USINGNIGHTVISION())
	{
		return 2;
	}
	if (GRAPHICS::GET_USINGSEETHROUGH())
	{
		return 3;
	}
	return 1;
}

void func_138(int iParam0)//Position - 0x277221
{
	Global_2703735.f_833.f_15 = iParam0;
}

bool func_139(int iParam0)//Position - 0x278AB1
{
	int iVar0;
	iVar0 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 8, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 8), PED::GET_PED_TEXTURE_VARIATION(iParam0, 8));
	if (Global_1853203)
	{
		return 1;
	}
	return (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("OVER_JACKET"), 0) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("HEIST_DRAW_1"), 0));
}

void func_140(var uParam0, var uParam1)//Position - 0x27913C
{
	Global_2667225.f_22 = uParam0;
	Global_2667225.f_23 = uParam1;
}

void func_141(float fParam0)//Position - 0x2799D4
{
	Global_2667225.f_45.f_311 = fParam0;
}

void func_142(struct<3> Param0)//Position - 0x27A80A
{
	Global_1957699 = { Param0 };
}

Vector3 func_143(float fParam0, float fParam1, struct<3> Param2)//Position - 0x27A8C3
{
	struct<3> Var0;
	if (fParam1 < fParam0)
	{
		fParam1 = fParam0;
	}
	Var0 = { __LIB_0__::func_952(Param2, MISC::GET_RANDOM_FLOAT_IN_RANGE(fParam0, fParam1)) };
	return Var0;
}

float func_144(float fParam0, float fParam1)//Position - 0x27A8EF
{
	if (__LIB_0__::func_680())
	{
		return MISC::GET_RANDOM_FLOAT_IN_RANGE(fParam0, fParam1);
	}
	return MISC::GET_RANDOM_FLOAT_IN_RANGE(-fParam1, -fParam0);
}

int func_145(bool bParam0)//Position - 0x27BC89
{
	if (__LIB_12__::func_568(bParam0) == 146)
	{
		if (bParam0 == Global_2815059.f_5120)
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_146(bool bParam0)//Position - 0x27C5B4
{
	switch (bParam0)
	{
		case 0:
			return 0f, 0f, 0f;
		case 1:
			return 5f, 5f, 0f;
		case 2:
			return -5f, -5f, 0f;
		case 3:
			return -5f, 5f, 0f;
		case 4:
			return 5f, -5f, 0f;
		case 5:
			return 10f, 5f, 0f;
		case 6:
			return 10f, 10f, 0f;
		case 7:
			return -10f, -10f, 0f;
		case 8:
			return -10f, 10f, 0f;
		case 9:
			return 10f, -10f, 0f;
		default:
	}
	return 0f, 0f, 0f;
}

char* func_147(int iParam0)//Position - 0x27C9FF
{
	char* sVar0;
	sVar0 = "";
	switch (iParam0)
	{
		case 0:
			sVar0 = "SMALL_EXPLOSION_SHAKE";
			break;
		case 1:
			sVar0 = "MEDIUM_EXPLOSION_SHAKE";
			break;
		case 2:
			sVar0 = "LARGE_EXPLOSION_SHAKE";
			break;
		case 3:
			sVar0 = "HAND_SHAKE";
			break;
		case 4:
			sVar0 = "JOLT_SHAKE";
			break;
		case 5:
			sVar0 = "VIBRATE_SHAKE";
			break;
		case 6:
			sVar0 = "WOBBLY_SHAKE";
			break;
		case 7:
			sVar0 = "DRUNK_SHAKE";
			break;
		case 8:
			sVar0 = "WATER_BOB_SHAKE";
			break;
	}
	return sVar0;
}

void func_148(var uParam0)//Position - 0x27D6D6
{
	struct<3> Var0;
	int iVar1;
	int iVar2;
	Var0.f_2 = 6;
	Var0.f_0 = -480364226;
	Var0.f_1 = PLAYER::PLAYER_ID();
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 <= 5)
	{
		Var0.f_2[iVar1] = (*uParam0)[iVar1];
		iVar1++;
	}
	iVar2 = __LIB_4__::func_970(1);
	if (!iVar2 == 0)
	{
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 9, iVar2);
	}
}

int func_149(bool bParam0, int iParam1)//Position - 0x27D9EC
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	if (bParam0 != -1 && iParam1 != -1)
	{
		bVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(bParam0));
		bVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iParam1));
		if (__LIB_1__::func_693(bVar0, 1, 1) && __LIB_1__::func_693(bVar1, 1, 1))
		{
			iVar2 = PLAYER::GET_PLAYER_PED(bVar0);
			iVar3 = PLAYER::GET_PLAYER_PED(bVar1);
			if (!PED::IS_PED_INJURED(iVar2) && !PED::IS_PED_INJURED(iVar3))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(iVar2, false))
				{
					iVar4 = PED::GET_VEHICLE_PED_IS_IN(iVar2, false);
				}
				if (PED::IS_PED_IN_ANY_VEHICLE(iVar3, false))
				{
					iVar5 = PED::GET_VEHICLE_PED_IS_IN(iVar3, false);
				}
				if (iVar4 != iVar5)
				{
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
	}
	return 1;
}

void func_150(int iParam0, bool bParam1)//Position - 0x27DB5E
{
	Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_407[iParam0] = bParam1;
}

void func_151(int iParam0)//Position - 0x27DB7A
{
	Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_414 = iParam0;
}

void func_152(int iParam0)//Position - 0x27DBC8
{
	Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_415 = iParam0;
}

int func_153(int iParam0)//Position - 0x27EF71
{
	if (Global_2824571.f_136 > 0 || iParam0)
	{
		return STREAMING::HAS_MODEL_LOADED(__LIB_20__::func_781());
	}
	return 0;
}

void func_154(int iParam0, bool bParam1)//Position - 0x27F0A6
{
	if (MISC::IS_PC_VERSION())
	{
		if (iParam0 != -1)
		{
			if (iParam0 == 0)
			{
				HUD::OVERRIDE_MP_TEXT_CHAT_COLOR(1, 15);
			}
			else if (iParam0 == 1)
			{
				HUD::OVERRIDE_MP_TEXT_CHAT_COLOR(1, 18);
			}
			else if (iParam0 == 2)
			{
				HUD::OVERRIDE_MP_TEXT_CHAT_COLOR(1, 24);
			}
			else if (iParam0 == 4)
			{
				if (bParam1)
				{
					HUD::OVERRIDE_MP_TEXT_CHAT_COLOR(1, 21);
				}
				else
				{
					HUD::OVERRIDE_MP_TEXT_CHAT_COLOR(1, 6);
				}
			}
			else
			{
				HUD::OVERRIDE_MP_TEXT_CHAT_COLOR(1, iParam0);
			}
		}
		else
		{
			HUD::OVERRIDE_MP_TEXT_CHAT_COLOR(0, 1);
		}
	}
}

var func_155(int iParam0)//Position - 0x27F5E7
{
	return Global_4718592.f_110318[iParam0];
}

int func_156(int iParam0, int iParam1)//Position - 0x27F5FC
{
	int iVar0;
	float fVar1;
	iVar0 = 1000;
	if ((iParam0 >= 0 && iParam0 < 4) && iParam1 < 17)
	{
		fVar1 = (IntToFloat(Global_4718592.f_658[iParam0 /*22957*/].f_16510[iParam1]) / 100f);
		iVar0 = SYSTEM::FLOOR((fVar1 * 1000f));
	}
	return iVar0;
}

void func_157(bool bParam0, int iParam1)//Position - 0x27FB58
{
	if (bParam0)
	{
		Global_1958631 = 1;
		Global_1958632 = iParam1;
	}
	else
	{
		Global_1958631 = 0;
		Global_1958632 = 0;
	}
}

void func_158(bool bParam0, int iParam1)//Position - 0x27FB7D
{
	if (bParam0)
	{
		Global_1958633 = 1;
		Global_1958634 = iParam1;
	}
	else
	{
		Global_1958633 = 0;
		Global_1958634 = 0;
	}
}

void func_159(var uParam0, var uParam1)//Position - 0x27FBA2
{
	int iVar0;
	iVar0 = PLAYER::PLAYER_PED_ID();
	if ((((((((uParam0->f_4 == joaat("VEHICLE_WEAPON_PLANE_ROCKET") || uParam0->f_4 == joaat("VEHICLE_WEAPON_SPACE_ROCKET")) || uParam0->f_4 == joaat("WEAPON_VEHICLE_ROCKET")) || uParam0->f_4 == joaat("VEHICLE_WEAPON_DOGFIGHTER_MISSILE")) || uParam0->f_4 == joaat("VEHICLE_WEAPON_ROGUE_MISSILE")) || uParam0->f_4 == joaat("VEHICLE_WEAPON_HUNTER_MISSILE")) || uParam0->f_4 == joaat("VEHICLE_WEAPON_VIGILANTE_MISSILE")) || uParam0->f_4 == joaat("VEHICLE_WEAPON_TRAILER_MISSILE")) || uParam0->f_4 == joaat("VEHICLE_WEAPON_HUNTER_BARRAGE"))
	{
		if (WEAPON::SET_CURRENT_PED_VEHICLE_WEAPON(iVar0, joaat("VEHICLE_WEAPON_PLANE_ROCKET")))
		{
			return;
		}
		if (WEAPON::SET_CURRENT_PED_VEHICLE_WEAPON(iVar0, joaat("VEHICLE_WEAPON_SPACE_ROCKET")))
		{
			return;
		}
		if (WEAPON::SET_CURRENT_PED_VEHICLE_WEAPON(iVar0, joaat("WEAPON_VEHICLE_ROCKET")))
		{
			return;
		}
		if (WEAPON::SET_CURRENT_PED_VEHICLE_WEAPON(iVar0, joaat("VEHICLE_WEAPON_DOGFIGHTER_MISSILE")))
		{
			return;
		}
		if (WEAPON::SET_CURRENT_PED_VEHICLE_WEAPON(iVar0, joaat("VEHICLE_WEAPON_ROGUE_MISSILE")))
		{
			return;
		}
		if (WEAPON::SET_CURRENT_PED_VEHICLE_WEAPON(iVar0, joaat("VEHICLE_WEAPON_HUNTER_MISSILE")))
		{
			return;
		}
		if (WEAPON::SET_CURRENT_PED_VEHICLE_WEAPON(iVar0, joaat("VEHICLE_WEAPON_VIGILANTE_MISSILE")))
		{
			return;
		}
		if (WEAPON::SET_CURRENT_PED_VEHICLE_WEAPON(iVar0, joaat("VEHICLE_WEAPON_TRAILER_MISSILE")))
		{
			return;
		}
		if (WEAPON::SET_CURRENT_PED_VEHICLE_WEAPON(iVar0, joaat("VEHICLE_WEAPON_HUNTER_BARRAGE")))
		{
			return;
		}
	}
}

void func_160()//Position - 0x28174F
{
	if (Global_2815059.f_287 == 1)
	{
		if (PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID()) >= 1)
		{
			PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 177, false);
			Global_2815059.f_287 = 0;
			__LIB_0__::func_186(3782, 0, -1);
		}
		else
		{
			if (!__LIB_0__::func_137(3782, -1))
			{
				__LIB_0__::func_186(3782, 1, -1);
			}
			PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 177, true);
		}
	}
}

int func_161(int iParam0)//Position - 0x282589
{
	if (WEAPON::GET_BEST_PED_WEAPON(iParam0, true) == joaat("WEAPON_UNARMED") || WEAPON::GET_BEST_PED_WEAPON(iParam0, true) == 0)
	{
		return 0;
	}
	return 1;
}

bool func_162(struct<3> Param0, struct<3> Param1, float fParam2)//Position - 0x2835E1
{
	return SYSTEM::VDIST2(Param0, Param1) < SYSTEM::POW(fParam2, 2f);
}

void func_163(bool bParam0)//Position - 0x283E39
{
	if (bParam0)
	{
		PATHFIND::SET_IGNORE_NO_GPS_FLAG(true);
	}
	else
	{
		PATHFIND::SET_IGNORE_NO_GPS_FLAG(false);
	}
}

int func_164()//Position - 0x285DCD
{
	return Global_2667225.f_714;
}

int func_165(int iParam0)//Position - 0x2878BD
{
	switch (iParam0)
	{
		case 1:
			return 0;
			break;
		case 2:
			return 1;
			break;
		case 3:
			return 2;
			break;
		case 4:
			return 3;
			break;
		case 5:
			return 4;
			break;
		case 6:
			return 5;
			break;
		case 7:
			return 1;
			break;
		case 8:
			return 2;
			break;
		case 9:
			return 3;
			break;
		case 10:
			return 4;
			break;
		case 11:
			return 5;
			break;
		case 12:
			return -1;
			break;
		case 13:
			return -2;
			break;
		case 14:
			return -3;
			break;
		case 15:
			return -4;
			break;
	}
	return 0;
}

void func_166(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x28BAA0
{
	struct<8> Var0;
	int iVar1;
	Var0.f_0 = -1920455593;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = uParam0;
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

void func_167(int iParam0, int iParam1)//Position - 0x28EDF1
{
	int iVar0;
	if (iParam1 == joaat("stalion"))
	{
		iVar0 = 1;
		iVar0 = 1;
		while (iVar0 <= 5)
		{
			if (VEHICLE::DOES_EXTRA_EXIST(iParam0, iVar0))
			{
				if (VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, iVar0))
				{
					VEHICLE::SET_VEHICLE_EXTRA(iParam0, iVar0, true);
				}
			}
			iVar0++;
		}
	}
}

int func_168()//Position - 0x2AFD35
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2667225.f_45[iVar0 /*12*/].f_9)
		{
			if ((!__LIB_0__::func_86(Global_2667225.f_45[iVar0 /*12*/]) || !__LIB_0__::func_86(Global_2667225.f_45[iVar0 /*12*/].f_3)) || Global_2667225.f_45[iVar0 /*12*/].f_6 > 0f)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_169(int iParam0)//Position - 0x2B0F72
{
	if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iParam0))
	{
		if (iParam0 == PLAYER::INT_TO_PARTICIPANTINDEX(__LIB_2__::func_642(__LIB_2__::func_643())))
		{
			return 1;
		}
	}
	return 0;
}

int func_170(int iParam0)//Position - 0x2B0FC7
{
	if (Global_4718592.f_110323[iParam0] >= 1 && BitTest(Global_4718592.f_658[iParam0 /*22957*/].f_12181, 8))
	{
		return 1;
	}
	return 0;
}

void func_171()//Position - 0x2B2EB7
{
	Global_2667225.f_2876 = 0;
}

void func_172(int iParam0, int iParam1)//Position - 0x2B2EC7
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		Global_2667225.f_2876 = iParam0;
		Global_2667225.f_2877 = iParam1;
	}
}

void func_173(int iParam0)//Position - 0x2B2EF7
{
	Global_2667225.f_45.f_312 = iParam0;
}

void func_174(float fParam0)//Position - 0x2B2F0A
{
	Global_2667225.f_45.f_307 = fParam0;
}

int func_175(int iParam0)//Position - 0x2B6E53
{
	return DECORATOR::DECOR_GET_INT(iParam0, "Player_Vehicle");
}

void func_176(int iParam0)//Position - 0x2B714A
{
	if ((ENTITY::DOES_ENTITY_EXIST(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0, false)) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0))
	{
		if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("sanctus") || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("avarus"))
		{
			VEHICLE::SET_VEHICLE_DAMAGE_SCALE(iParam0, Global_262145.f_17321 /* Tunable: -1458062250 */);
		}
		else
		{
			VEHICLE::SET_VEHICLE_DAMAGE_SCALE(iParam0, Global_262145.f_17320 /* Tunable: 891045982 */);
		}
	}
}

void func_177(bool bParam0, var uParam1, int iParam2)//Position - 0x2B78F4
{
	struct<5> Var0;
	int iVar1;
	Var0.f_0 = -1023507784;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = bParam0;
	Var0.f_3 = uParam1;
	Var0.f_4 = iParam2;
	iVar1 = __LIB_4__::func_970(1);
	if (!iVar1 == 0)
	{
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 5, iVar1);
	}
}

int func_178(char* sParam0)//Position - 0x2B8338
{
	if ((MISC::ARE_STRINGS_EQUAL(sParam0, "DLC_SUM20/SUM20_Yacht_LAS_01") || MISC::ARE_STRINGS_EQUAL(sParam0, "DLC_VINEWOOD/VW_CASINO_FINALE")) || MISC::ARE_STRINGS_EQUAL(sParam0, "DLC_HEIST3/CASINO_HEIST_FINALE_GENERAL_01"))
	{
		return 0;
	}
	return 1;
}

var func_179(int iParam0)//Position - 0x2B9C2D
{
	return Global_4718592.f_173211[iParam0 /*58*/].f_23;
}

int func_180(bool bParam0)//Position - 0x2B9D97
{
	if (BitTest(Global_4718592.f_173211[bParam0 /*58*/].f_34, 13))
	{
		return 1;
	}
	else
	{
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			CAM::DO_SCREEN_FADE_IN(1000);
		}
		if (CAM::IS_SCREEN_FADED_IN())
		{
			return 1;
		}
	}
	return 0;
}

void func_181()//Position - 0x2BA834
{
	if (BitTest(Global_2815059.f_4660, 14))
	{
		MISC::CLEAR_BIT(&(Global_2815059.f_4660), 14);
	}
}

void func_182(var uParam0, var uParam1, int iParam2)//Position - 0x2DAB0F
{
	int iVar0;
	int iVar1;
	struct<13> Var2;
	bool bVar3;
	switch (uParam0->f_508)
	{
		case 0:
			iVar0 = 0;
			while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
			{
				(*uParam1)[iVar0] = -1;
				iVar0++;
			}
			uParam0->f_508 = 1;
			break;
		case 1:
			if (__LIB_21__::func_792(0))
			{
				iVar0 = 0;
				while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
				{
					if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
					{
						bVar3 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0));
						iVar1 = bVar3;
						if (__LIB_1__::func_693(bVar3, 0, 1))
						{
							if (Global_1836352 == (*uParam1)[iVar1] && Global_1836352 != iParam2)
							{
								Var2 = { __LIB_1__::func_696(bVar3) };
								NETWORK::NETWORK_SHOW_PROFILE_UI(&Var2);
								AUDIO::PLAY_SOUND_FRONTEND(-1, "SELECT" /* GXT: Filter List */, "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
							}
						}
					}
					iVar0++;
				}
			}
			break;
	}
}

bool func_183()//Position - 0x2DAECF
{
	return Global_1836571;
}

void func_184()//Position - 0x2DC676
{
	MISC::SET_BIT(&(Global_2714762.f_43.f_4), 1);
}

void func_185(int iParam0)//Position - 0x2DCF88
{
	Global_2714762.f_43.f_5 = iParam0;
}

void func_186()//Position - 0x2DCF9A
{
	MISC::SET_BIT(&(Global_2714762.f_43.f_4), 0);
}

char* func_187(int iParam0)//Position - 0x2FC202
{
	switch (iParam0)
	{
		case 1:
			return "LLIVEEXP";
			break;
		case 0:
			return "POUTBND";
			break;
	}
	return "PLYFAIL";
}

Vector3 func_188(int iParam0)//Position - 0x2FCF96
{
	if (iParam0 > -1)
	{
		return Global_4980736.f_5[iParam0 /*273*/].f_209[0 /*3*/];
	}
	return 0f, 0f, 0f;
}

void func_189(int iParam0)//Position - 0x2FD5E8
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0, false) && !PED::IS_PED_INJURED(iParam0))
		{
			PED::SET_PED_DIES_IN_WATER(iParam0, false);
			PED::SET_PED_MAX_TIME_UNDERWATER(iParam0, 10000f);
			PED::SET_PED_DIES_IN_SINKING_VEHICLE(iParam0, false);
		}
	}
}

void func_190()//Position - 0x2FE133
{
	MISC::CLEAR_BIT(&(Global_1924338[PLAYER::PLAYER_ID() /*199*/].f_198), 1);
}

Vector3 func_191(int iParam0)//Position - 0x2FE32A
{
	switch (iParam0)
	{
		case 1:
			return 2154.8835f, 2921.061f, -82.0755f;
		case 2:
			return 2154.9832f, 2920.958f, -62.9025f;
		case 3:
			return -182.216f, -1016.441f, 31.373f;
		case 4:
			return -182.9832f, -1016.958f, 115.51f;
		case 5:
			return -182.9832f, -1016.958f, 31.37f;
		case 6:
			return -182.216f, -1016.441f, 115.51f;
		case 7:
			return -158.778f, -942.255f, 31.37f;
		case 8:
			return -158.778f, -942.255f, 115.654f;
		case 9:
			return -158.778f, -942.255f, 270.9025f;
		case 10:
			return -158.778f, -942.958f, 31.37f;
		case 11:
			return -158.778f, -942.958f, 115.654f;
		case 12:
			return -158.778f, -942.958f, 270.9025f;
		default:
	}
	return 0f, 0f, 0f;
}

int func_192(bool bParam0)//Position - 0x2FF2CF
{
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("frogger"), bParam0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("frogger2"), bParam0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("valkyrie"), bParam0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("valkyrie2"), bParam0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("supervolito"), bParam0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("supervolito2"), bParam0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("swift"), bParam0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("swift2"), bParam0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("savage"), bParam0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("skylift"), bParam0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("maverick"), bParam0);
	return 11;
}

int func_193(int iParam0, int iParam1)//Position - 0x306551
{
	switch (iParam0)
	{
		case 2:
			switch (iParam1)
			{
				case 62:
					if (__LIB_1__::func_296(&Global_2788055))
					{
						return 1;
					}
					break;
			}
			break;
	}
	return 0;
}

bool func_194()//Position - 0x30C7D1
{
	return __LIB_2__::func_434() == 1;
}

void func_195(int iParam0, int iParam1)//Position - 0x30D6E6
{
	int iVar0;
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		return;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	if (((!VEHICLE::IS_THIS_MODEL_A_HELI(iVar0) && iVar0 != joaat("hydra")) && iVar0 != joaat("tula")) && iVar0 != joaat("avenger"))
	{
		return;
	}
	if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0))
	{
		return;
	}
	if (((iVar0 == joaat("hydra") || iVar0 == joaat("tula")) || iVar0 == joaat("avenger")) && VEHICLE::GET_VEHICLE_FLIGHT_NOZZLE_POSITION(iParam0) != 1f)
	{
		VEHICLE::SET_VEHICLE_FLIGHT_NOZZLE_POSITION_IMMEDIATE(iParam0, 1f);
	}
	VEHICLE::SET_VEHICLE_ENGINE_ON(iParam0, true, true, false);
	if (iParam1 && VEHICLE::GET_VEHICLE_HAS_LANDING_GEAR(iParam0))
	{
		VEHICLE::CONTROL_LANDING_GEAR(iParam0, 3);
	}
	VEHICLE::SET_VEHICLE_FORWARD_SPEED(iParam0, 1f);
	VEHICLE::SET_HELI_BLADES_FULL_SPEED(iParam0);
}

void func_196(int iParam0)//Position - 0x30E9FD
{
	ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iParam0, false, true);
	VEHICLE::DELETE_VEHICLE(&iParam0);
}

int func_197()//Position - 0x30EC28
{
	STREAMING::REQUEST_NAMED_PTFX_ASSET("scr_vw_oil");
	if (!STREAMING::HAS_NAMED_PTFX_ASSET_LOADED("scr_vw_oil"))
	{
		return 0;
	}
	return 1;
}

void func_198()//Position - 0x310616
{
	MISC::SET_BIT(&(Global_2714762.f_43.f_4), 2);
}

int func_199(int iParam0, bool bParam1, var uParam2)//Position - 0x310CE7
{
	switch (iParam0)
	{
		case 73:
		case 76:
			if (bParam1 == 1)
			{
				return 0;
			}
			break;
		case 74:
		case 77:
			if (bParam1 == 0)
			{
				return 0;
			}
			break;
		case 79:
			if (!BitTest(uParam2, bParam1))
			{
				return 0;
			}
			break;
	}
	return 1;
}

int func_200()//Position - 0x31241C
{
	if (BitTest(Global_4718592.f_161915.f_17, 30))
	{
		return 0;
	}
	return 1;
}

int func_201(int iParam0, bool bParam1)//Position - 0x31243A
{
	int iVar0;
	if ((iParam0 < 0 || (bParam1 && iParam0 >= __LIB_16__::func_729())) || (!bParam1 && iParam0 >= 5))
	{
		return 0;
	}
	if (bParam1)
	{
		iVar0 = BitTest(Global_4718592.f_142828[iParam0 /*1626*/].f_4, 2);
	}
	else
	{
		iVar0 = BitTest(Global_4718592.f_159089[iParam0 /*565*/].f_16, 2);
	}
	return iVar0;
}

int func_202(char* sParam0)//Position - 0x312540
{
	int iVar0;
	bool bVar1;
	SCRIPT::SCRIPT_THREAD_ITERATOR_RESET();
	while (!bVar1)
	{
		iVar0 = SCRIPT::SCRIPT_THREAD_ITERATOR_GET_NEXT_THREAD_ID();
		if (MISC::ARE_STRINGS_EQUAL(SCRIPT::GET_NAME_OF_SCRIPT_WITH_THIS_ID(iVar0), sParam0))
		{
			bVar1 = true;
		}
	}
	return iVar0;
}

void func_203(char* sParam0)//Position - 0x31256F
{
	StringCopy(&(Global_2714762.f_43.f_18), sParam0, 24);
}

void func_204(int iParam0)//Position - 0x312D1C
{
	Global_2714762.f_43.f_617 = iParam0;
}

void func_205()//Position - 0x31303F
{
	MISC::SET_BIT(&(Global_2714762.f_43.f_4), 3);
}

void func_206()//Position - 0x313054
{
	MISC::CLEAR_BIT(&(Global_2714762.f_43.f_4), 3);
}

void func_207(int iParam0)//Position - 0x31709A
{
	struct<3> Var0;
	int iVar1;
	Var0.f_0 = -860097505;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = iParam0;
	iVar1 = __LIB_4__::func_970(1);
	if (!iVar1 == 0)
	{
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 3, iVar1);
	}
}

bool func_208(bool bParam0)//Position - 0x31C5D0
{
	return __LIB_6__::func_65(bParam0, 16);
}

bool func_209(bool bParam0)//Position - 0x377E77
{
	return __LIB_6__::func_65(bParam0, 3);
}

char* func_210(int iParam0)//Position - 0x424ABD
{
	switch (iParam0)
	{
		case -1:
			return "NONE" /* GXT: None */;
		case 0:
			return "SMALL_EXPLOSION_SHAKE";
		case 1:
			return "MEDIUM_EXPLOSION_SHAKE";
		case 2:
			return "LARGE_EXPLOSION_SHAKE";
		case 3:
			return "HAND_SHAKE";
		case 4:
			return "JOLT_SHAKE";
		case 5:
			return "VIBRATE_SHAKE";
		case 6:
			return "WOBBLY_SHAKE";
		case 7:
			return "DRUNK_SHAKE";
		default:
	}
	return "";
}

void func_211()//Position - 0x424B4C
{
	int iVar0;
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
	switch (iVar0)
	{
		case 0:
			__LIB_25__::func_343(3, 4);
			break;
		case 1:
			__LIB_25__::func_343(3, 5);
			break;
		case 2:
			__LIB_25__::func_343(3, 6);
			break;
		case 3:
			__LIB_25__::func_343(3, 7);
			break;
	}
}

int func_212(int iParam0)//Position - 0x425415
{
	switch (iParam0)
	{
		case 1:
			return 144;
		case 2:
			return 139;
		default:
	}
	return 228;
}

char* func_213(int iParam0, int iParam1)//Position - 0x429AF6
{
	switch (iParam0)
	{
		case 1:
			switch (iParam1)
			{
				case 0:
					return "";
				default:
			}
			break;
	}
	return "";
}

void func_214(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4)//Position - 0x42AD63
{
	switch (iParam0)
	{
		case 1:
			*uParam1 = 90f;
			*uParam2 = 130f;
			*uParam3 = 50f;
			*uParam4 = 90f;
			break;
		case 2:
			*uParam1 = 270f;
			*uParam2 = 310f;
			*uParam3 = 230f;
			*uParam4 = 270f;
			break;
		case 3:
		case 4:
			*uParam1 = -110f;
			break;
		case 5:
		case 6:
			*uParam1 = -290f;
			break;
		case 7:
		case 8:
		case 9:
			*uParam1 = -200f;
			break;
		case 10:
		case 11:
		case 12:
			*uParam1 = -20f;
			break;
	}
}

void func_215()//Position - 0x42AE2C
{
	int iVar0;
	int iVar1;
	iVar0 = 21;
	while (iVar0 <= 104)
	{
		iVar1 = iVar0;
		if (iVar1 != 27)
		{
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, iVar1, true);
		}
		iVar0++;
	}
}

bool func_216(int iParam0)//Position - 0x42AE7D
{
	return BitTest(Global_4718592.f_142828[iParam0 /*1626*/].f_4, 12);
}

int func_217(int iParam0, bool bParam1)//Position - 0x42BBB2
{
	if (iParam0 == 0 || iParam0 == 3)
	{
		return 0;
	}
	if (bParam1)
	{
		switch (iParam0)
		{
			case 1:
				STREAMING::REQUEST_ANIM_DICT("anim@BUILDING_TRANS@HINGE_L");
				if (STREAMING::HAS_ANIM_DICT_LOADED("anim@BUILDING_TRANS@HINGE_L"))
				{
					return 1;
				}
				break;
			default:
				return 1;
				break;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 1:
				STREAMING::REMOVE_ANIM_DICT("anim@BUILDING_TRANS@HINGE_L");
				break;
		}
		return 1;
	}
	return 0;
}

void func_218()//Position - 0x42BC25
{
	MISC::SET_BIT(&(Global_1924338[PLAYER::PLAYER_ID() /*199*/].f_198), 1);
}

int func_219(int iParam0)//Position - 0x42BD9C
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (BitTest(Global_4718592.f_142828[iParam0 /*1626*/].f_441[iVar0], 0))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_220()//Position - 0x42DE44
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("mg_race_to_point")) > 0)
	{
		MISC::SET_BIT(&(Global_2815059.f_4660), 16);
	}
}

int func_221(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x42EB04
{
	switch (iParam2)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					switch (iParam3)
					{
						case 0:
							return BitTest(Global_4718592.f_159089[iParam1 /*565*/].f_16, 14);
						case 1:
							return BitTest(Global_4718592.f_159089[iParam1 /*565*/].f_16, 20);
						case 2:
							return BitTest(Global_4718592.f_159089[iParam1 /*565*/].f_17, 1);
						default:
					}
					break;
				case 1:
					switch (iParam3)
					{
						case 0:
							return BitTest(Global_4718592.f_159089[iParam1 /*565*/].f_16, 15);
						case 1:
							return BitTest(Global_4718592.f_159089[iParam1 /*565*/].f_16, 21);
						case 2:
							return BitTest(Global_4718592.f_159089[iParam1 /*565*/].f_17, 2);
						default:
					}
					break;
				case 2:
					switch (iParam3)
					{
						case 0:
							return BitTest(Global_4718592.f_159089[iParam1 /*565*/].f_16, 16);
						case 1:
							return BitTest(Global_4718592.f_159089[iParam1 /*565*/].f_16, 22);
						case 2:
							return BitTest(Global_4718592.f_159089[iParam1 /*565*/].f_17, 3);
						default:
					}
					break;
				case 3:
					switch (iParam3)
					{
						case 0:
							return BitTest(Global_4718592.f_159089[iParam1 /*565*/].f_16, 17);
						case 1:
							return BitTest(Global_4718592.f_159089[iParam1 /*565*/].f_16, 23);
						case 2:
							return BitTest(Global_4718592.f_159089[iParam1 /*565*/].f_17, 4);
						default:
					}
					break;
			}
			break;
		case 1:
			switch (iParam0)
			{
				case 0:
					switch (iParam3)
					{
						case 0:
							return BitTest(Global_4718592.f_161915.f_16, 14);
						case 1:
							return BitTest(Global_4718592.f_161915.f_16, 20);
						case 2:
							return BitTest(Global_4718592.f_161915.f_17, 1);
						default:
					}
					break;
				case 1:
					switch (iParam3)
					{
						case 0:
							return BitTest(Global_4718592.f_161915.f_16, 15);
						case 1:
							return BitTest(Global_4718592.f_161915.f_16, 21);
						case 2:
							return BitTest(Global_4718592.f_161915.f_17, 2);
						default:
					}
					break;
				case 2:
					switch (iParam3)
					{
						case 0:
							return BitTest(Global_4718592.f_161915.f_16, 16);
						case 1:
							return BitTest(Global_4718592.f_161915.f_16, 22);
						case 2:
							return BitTest(Global_4718592.f_161915.f_17, 3);
						default:
					}
					break;
				case 3:
					switch (iParam3)
					{
						case 0:
							return BitTest(Global_4718592.f_161915.f_16, 17);
						case 1:
							return BitTest(Global_4718592.f_161915.f_16, 23);
						case 2:
							return BitTest(Global_4718592.f_161915.f_17, 4);
						default:
					}
					break;
			}
			break;
	}
	return 0;
}

bool func_222()//Position - 0x42F95F
{
	if (ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), MISC::GET_HASH_KEY("MASK")))
	{
	}
	return ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), MISC::GET_HASH_KEY("MASK"));
}

bool func_223(var uParam0)//Position - 0x42F9B8
{
	return BitTest(uParam0->f_2, 1);
}

int func_224(int iParam0)//Position - 0x42FE02
{
	if (iParam0 == joaat("bodhi2"))
	{
		return 1;
	}
	return 0;
}

int func_225(int iParam0)//Position - 0x42FE19
{
	if (iParam0 == -1351130214 || iParam0 == -1348300917)
	{
		return 1;
	}
	return 0;
}

int func_226(int iParam0)//Position - 0x42FE3F
{
	if (((iParam0 == -1388248248 || iParam0 == 112541904) || iParam0 == joaat("clipset@veh@van@rds_rear@base")) || iParam0 == joaat("clipset@veh@van@rps_rear@base"))
	{
		return 1;
	}
	return 0;
}

int func_227(int iParam0)//Position - 0x42FE81
{
	if (((iParam0 == joaat("clipset@veh@low@ds@base") || iParam0 == joaat("clipset@veh@low@ps@base")) || iParam0 == -1773703166) || iParam0 == 809557572)
	{
		return 1;
	}
	return 0;
}

int func_228(int iParam0)//Position - 0x42FEC3
{
	if (((iParam0 == -961969251 || iParam0 == 2137025664) || iParam0 == -1773703166) || iParam0 == 809557572)
	{
		return 1;
	}
	return 0;
}

int func_229(int iParam0)//Position - 0x42FF05
{
	if (PED::IS_PED_ON_ANY_BIKE(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	if (PED::IS_PED_IN_ANY_BOAT(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	if (PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	if (PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	if (PED::IS_PED_IN_ANY_SUB(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	if (PED::IS_PED_IN_ANY_TRAIN(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	if (iParam0 == joaat("blazer"))
	{
		return 0;
	}
	if (iParam0 == joaat("blazer2"))
	{
		return 0;
	}
	if (iParam0 == joaat("blazer3"))
	{
		return 0;
	}
	return 1;
}

char* func_230()//Position - 0x42FF92
{
	return "put_on_mask";
}

int func_231()//Position - 0x4306E7
{
	int iVar0;
	if (__LIB_1__::func_823())
	{
		return 1;
	}
	iVar0 = FILES::GET_HASH_NAME_FOR_COMPONENT(PLAYER::PLAYER_PED_ID(), 1, PED::GET_PED_DRAWABLE_VARIATION(PLAYER::PLAYER_PED_ID(), 1), PED::GET_PED_TEXTURE_VARIATION(PLAYER::PLAYER_PED_ID(), 1));
	if ((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("EAR_PIECE"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("EAR_PIECE"), 2)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("EAR_PIECE"), 1))
	{
		return 0;
	}
	return 1;
}

bool func_232(var uParam0)//Position - 0x43074F
{
	return BitTest(uParam0->f_2, 0);
}

void func_233(var uParam0, int iParam1)//Position - 0x430F9C
{
	uParam0->f_11 = { Global_4718592.f_165298[iParam1 /*3*/] };
	uParam0->f_14 = Global_4718592.f_165316[iParam1];
	uParam0->f_15 = { Global_4718592.f_165272[iParam1 /*3*/] };
	uParam0->f_18 = { Global_4718592.f_165285[iParam1 /*3*/] };
	uParam0->f_21 = Global_4718592.f_165311[iParam1];
}

void func_234()//Position - 0x431977
{
	int iVar0;
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
			{
				if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1, false) == PLAYER::PLAYER_PED_ID())
				{
					VEHICLE::SET_VEHICLE_DOORS_LOCKED(iVar0, 1);
					ENTITY::SET_ENTITY_INVINCIBLE(iVar0, false);
				}
			}
		}
	}
}

void func_235(float fParam0)//Position - 0x4319E2
{
	int iVar0;
	iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
		{
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1, false) == PLAYER::PLAYER_PED_ID())
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_VEHICLE_DRIVE_WANDER")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_VEHICLE_DRIVE_WANDER")) != 0)
				{
					TASK::TASK_VEHICLE_DRIVE_WANDER(PLAYER::PLAYER_PED_ID(), iVar0, fParam0, 786603);
				}
			}
		}
	}
}

int func_236()//Position - 0x431B18
{
	int iVar0;
	iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
		{
			if (!ENTITY::IS_ENTITY_VISIBLE_TO_SCRIPT(iVar0))
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
				{
					NETWORK::NETWORK_FADE_IN_ENTITY(iVar0, true, 1);
				}
				return 0;
			}
			else if (NETWORK::NETWORK_IS_ENTITY_FADING(iVar0))
			{
				return 0;
			}
		}
	}
	return 1;
}

int func_237()//Position - 0x431B74
{
	int iVar0;
	iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
		{
			if (ENTITY::IS_ENTITY_VISIBLE_TO_SCRIPT(iVar0))
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
				{
					NETWORK::NETWORK_FADE_OUT_ENTITY(iVar0, true, true);
				}
				return 0;
			}
			else if (NETWORK::NETWORK_IS_ENTITY_FADING(iVar0))
			{
				return 0;
			}
		}
	}
	return 1;
}

void func_238()//Position - 0x431BCF
{
	CAM::STOP_GAMEPLAY_HINT(true);
}

int func_239(int iParam0)//Position - 0x431CDA
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		if (VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, -1, false))
		{
			return -1;
		}
		if (VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, 0, false))
		{
			return 0;
		}
		if (VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, 1, false))
		{
			return 1;
		}
		if (VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, 2, false))
		{
			return 2;
		}
		if (VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, 3, false))
		{
			return 3;
		}
		if (VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, 4, false))
		{
			return 4;
		}
		if (VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, 5, false))
		{
			return 5;
		}
		if (VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, 6, false))
		{
			return 6;
		}
		if (VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, 7, false))
		{
			return 7;
		}
		if (VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, 8, false))
		{
			return 8;
		}
	}
	return -2;
}

bool func_240()//Position - 0x431D88
{
	return !Global_2815059.f_4599;
}

void func_241(int iParam0, int iParam1)//Position - 0x431D98
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)), &Var0, &Var1);
		fVar2 = (Var1.f_2 - Var0.f_2);
		CAM::SET_GAMEPLAY_VEHICLE_HINT(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 0f, fLocal_78, 0f, true, iParam1, iParam0, 0);
		CAM::SET_GAMEPLAY_HINT_CAMERA_RELATIVE_VERTICAL_OFFSET((fLocal_75 * fVar2));
		CAM::SET_GAMEPLAY_HINT_BASE_ORBIT_PITCH_OFFSET(fLocal_76);
		CAM::SET_GAMEPLAY_HINT_FOLLOW_DISTANCE_SCALAR(fLocal_77);
	}
}

void func_242()//Position - 0x431E92
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
		{
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1, false) == PLAYER::PLAYER_PED_ID())
			{
				if (!BitTest(Global_4718592.f_12, 21))
				{
					iVar1 = 0;
					while (iVar1 < VEHICLE::GET_VEHICLE_NUMBER_OF_PASSENGERS(iVar0, false, true) + 1)
					{
						iVar2 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, (iVar1 - 1), false);
						if (iVar2 != 0)
						{
							if (!PED::IS_PED_INJURED(iVar2))
							{
								if (PED::IS_PED_A_PLAYER(iVar2))
								{
									if (PLAYER::PLAYER_PED_ID() != iVar2)
									{
										if (PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) != PLAYER::GET_PLAYER_TEAM(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar2)))
										{
											__LIB_1__::func_473(__LIB_1__::func_705(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar2)), 0, 0f, 0, 0, 0, -1);
										}
									}
								}
							}
						}
						iVar1++;
					}
				}
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(iVar0, 2);
				ENTITY::SET_ENTITY_INVINCIBLE(iVar0, true);
			}
		}
	}
}

int func_243(int iParam0)//Position - 0x432131
{
	int iVar0;
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
		if (__LIB_15__::func_289(iVar0) || iVar0 == joaat("stromberg"))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_244(bool bParam0)//Position - 0x43216D
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (__LIB_1__::func_693(bParam0, 1, 1))
	{
		if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::GET_PLAYER_PED(bParam0)))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(bParam0), false);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
			{
				if ((VEHICLE::IS_THIS_MODEL_A_CAR(ENTITY::GET_ENTITY_MODEL(iVar0)) || VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(iVar0))) || ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("stromberg"))
				{
					if (VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(iVar0) || (ENTITY::GET_ENTITY_HEIGHT_ABOVE_GROUND(iVar0) < 0.5f && ENTITY::GET_ENTITY_SPEED(iVar0) > 2f))
					{
						if (!BitTest(Global_4718592.f_12, 21))
						{
							iVar1 = 0;
							while (iVar1 < VEHICLE::GET_VEHICLE_NUMBER_OF_PASSENGERS(iVar0, false, true) + 1)
							{
								iVar2 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, (iVar1 - 1), false);
								if (iVar2 != 0)
								{
									if (!PED::IS_PED_INJURED(iVar2))
									{
										if (PED::IS_PED_A_PLAYER(iVar2))
										{
											if (PLAYER::GET_PLAYER_PED(bParam0) != iVar2)
											{
												if (PLAYER::GET_PLAYER_TEAM(bParam0) != PLAYER::GET_PLAYER_TEAM(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar2)))
												{
													return 0;
												}
											}
										}
									}
								}
								else if (iVar1 == 0)
								{
									return 0;
								}
								iVar1++;
							}
						}
					}
					else
					{
						return 0;
					}
				}
				else
				{
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	else
	{
		return 0;
	}
	return 1;
}

int func_245(var uParam0, var uParam1, struct<3> Param2)//Position - 0x432486
{
	if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), uParam0->f_11, 300f, 300f, 300f, false, true, 0))
	{
		if (!BitTest(uParam1->f_1, 6))
		{
			MISC::SET_BIT(&(uParam1->f_1), 6);
		}
		return 1;
	}
	if (!__LIB_0__::func_86(Param2))
	{
		if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Param2, 300f, 300f, 300f, false, true, 0))
		{
			if (!BitTest(uParam1->f_1, 6))
			{
				MISC::SET_BIT(&(uParam1->f_1), 6);
			}
			return 1;
		}
	}
	return 0;
}

int func_246(var uParam0)//Position - 0x4325AD
{
	float fVar0;
	fVar0 = __LIB_8__::func_286(MISC::GET_DISTANCE_BETWEEN_COORDS(__LIB_1__::func_694(PLAYER::PLAYER_ID()), uParam0->f_11, true));
	if (__LIB_0__::func_995(1))
	{
		if (fVar0 < IntToFloat(Global_262145.f_23431 /* Tunable: -647532692 */))
		{
			return Global_262145.f_23428 /* Tunable: -410008161 */;
		}
		else if (fVar0 >= IntToFloat(Global_262145.f_23432 /* Tunable: -915582564 */) && fVar0 <= IntToFloat(Global_262145.f_23433 /* Tunable: 599041078 */))
		{
			return Global_262145.f_23429 /* Tunable: -362232112 */;
		}
		else if (fVar0 > IntToFloat(Global_262145.f_23433 /* Tunable: 599041078 */))
		{
			return Global_262145.f_23430 /* Tunable: 1827742261 */;
		}
	}
	else if (!__LIB_0__::func_177())
	{
		if (fVar0 < 4f)
		{
			return 4000;
		}
		else if (fVar0 >= 10f)
		{
			return 10000;
		}
	}
	else if (fVar0 < IntToFloat(Global_262145.f_23424 /* Tunable: 940931043 */))
	{
		return Global_262145.f_23403 /* Tunable: -128173654 */;
	}
	else if (fVar0 >= IntToFloat(Global_262145.f_23425 /* Tunable: -648686294 */) && fVar0 <= IntToFloat(Global_262145.f_23426 /* Tunable: 518822185 */))
	{
		return Global_262145.f_23404 /* Tunable: 1138568799 */;
	}
	else if (fVar0 > IntToFloat(Global_262145.f_23426 /* Tunable: 518822185 */))
	{
		return Global_262145.f_23405 /* Tunable: 304858460 */;
	}
	return 7000;
}

void func_247()//Position - 0x4326C4
{
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 75 /*INPUT_VEH_EXIT*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 23 /*INPUT_ENTER*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 47 /*INPUT_DETONATE*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 69 /*INPUT_VEH_ATTACK*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 70 /*INPUT_VEH_ATTACK2*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 68 /*INPUT_VEH_AIM*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 80 /*INPUT_VEH_CIN_CAM*/, true);
}

int func_248(int iParam0)//Position - 0x43288B
{
	if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("blazer") || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("surfer"))
	{
		return 1;
	}
	return 0;
}

void func_249(int* iParam0, int iParam1)//Position - 0x432E71
{
	if (__LIB_1__::func_755())
	{
		if (!HUD::IS_HUD_COMPONENT_ACTIVE(16))
		{
			if (!Global_75485)
			{
				if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "SET_DIRECTION");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(*iParam0, 255, 255, 255, 255, 0);
				}
			}
		}
	}
}

bool func_250(int iParam0)//Position - 0x433211
{
	return __LIB_3__::func_174(iParam0);
}

void func_251(struct<3> Param0)//Position - 0x43361D
{
	struct<3> Var0;
	int iVar1;
	Var0.f_0 = 528926723;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = { Param0 };
	iVar1 = __LIB_4__::func_970(1);
	if (iVar1 != 0)
	{
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 5, iVar1);
	}
}

void func_252(int* iParam0, char* sParam1, char* sParam2, int iParam3)//Position - 0x43D028
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "SET_TITLE");
		if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
		{
			__LIB_0__::func_610(sParam1);
		}
		else if (__LIB_12__::func_568(PLAYER::PLAYER_ID()) == 133)
		{
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_BRACKT_C" /* GXT: ~a~ Challenge (~a~) */);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam2);
			GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
		}
		else
		{
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_BRACKT" /* GXT: ~a~ (~a~) */);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam2);
			GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
		}
		__LIB_0__::func_610("");
		if (iParam3 != -1)
		{
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
		}
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

int func_253()//Position - 0x43D275
{
	if (__LIB_12__::func_568(PLAYER::PLAYER_ID()) == 133)
	{
		return Global_2815059.f_5116;
	}
	return -1;
}

int func_254()//Position - 0x43D4C8
{
	if (__LIB_12__::func_568(PLAYER::PLAYER_ID()) == 132)
	{
		return Global_2815059.f_5114;
	}
	return -1;
}

int func_255()//Position - 0x43FE22
{
	if ((__LIB_1__::func_140() && Global_2714762.f_669.f_10 == 0) || !__LIB_1__::func_140())
	{
		return 1;
	}
	return 0;
}

char* func_256()//Position - 0x44186F
{
	if (MISC::IS_PC_VERSION() && PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
	{
		return "FLTR_PC_HELP" /* GXT: Press ~INPUT_VEH_HEADLIGHT~ to toggle between different filters. */;
	}
	return "FILTERS_HELP" /* GXT: Press ~INPUT_CONTEXT~ to toggle between different filters. */;
}

int func_257(int iParam0)//Position - 0x4455D8
{
	if (BitTest(Global_4718592.f_117098[iParam0 /*210*/].f_18, 2))
	{
		return 1;
	}
	return 0;
}

int func_258(var uParam0, int iParam1)//Position - 0x446DC3
{
	if (iParam1 == 0)
	{
		if (*uParam0 >= 3 && *uParam0 < 7)
		{
			return 1;
		}
	}
	else if (*uParam0 >= 3 && *uParam0 <= 7)
	{
		return 1;
	}
	return 0;
}

char* func_259(int iParam0)//Position - 0x447BD5
{
	switch (iParam0)
	{
		case 1:
			return "DLC_HEIST_MISSION_GUNFIGHT_SCENE";
		case 2:
			return "DLC_HEIST_MISSION_DRIVING_SCENE";
		default:
	}
	return "";
}

void func_260()//Position - 0x447C2E
{
	if (BitTest(Global_4718592.f_14, 7))
	{
		if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("Speed_Race_Airport_Scene"))
		{
			AUDIO::START_AUDIO_SCENE("Speed_Race_Airport_Scene");
		}
	}
}

void func_261(int iParam0)//Position - 0x4551E2
{
	if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("InchPickup") && iParam0 != 11)
	{
		GRAPHICS::ANIMPOSTFX_STOP("InchPickup");
		GRAPHICS::ANIMPOSTFX_PLAY("InchPickupOut", 0, false);
	}
	else if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("PPOrange") && iParam0 != 12)
	{
		GRAPHICS::ANIMPOSTFX_STOP("PPOrange");
		GRAPHICS::ANIMPOSTFX_PLAY("PPOrangeOut", 0, false);
	}
	else if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("PPPurple") && iParam0 != 13)
	{
		GRAPHICS::ANIMPOSTFX_STOP("PPPurple");
		GRAPHICS::ANIMPOSTFX_PLAY("PPPurpleOut", 0, false);
	}
	else if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("PPGreen") && iParam0 != 14)
	{
		GRAPHICS::ANIMPOSTFX_STOP("PPGreen");
		GRAPHICS::ANIMPOSTFX_PLAY("PPGreenOut", 0, false);
	}
	else if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("PPPink") && iParam0 != 15)
	{
		GRAPHICS::ANIMPOSTFX_STOP("PPPink");
		GRAPHICS::ANIMPOSTFX_PLAY("PPPinkOut", 0, false);
	}
	else if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("DeadlineNeon") && iParam0 != 16)
	{
		GRAPHICS::ANIMPOSTFX_STOP("DeadlineNeon");
	}
	else if ((GRAPHICS::GET_TIMECYCLE_MODIFIER_INDEX() != -1 && iParam0 < 1) && iParam0 > 10)
	{
		GRAPHICS::SET_TRANSITION_OUT_OF_TIMECYCLE_MODIFIER(1f);
	}
}

int func_262()//Position - 0x45530E
{
	if ((((((GRAPHICS::ANIMPOSTFX_IS_RUNNING("InchPickup") || GRAPHICS::ANIMPOSTFX_IS_RUNNING("PPOrange")) || GRAPHICS::ANIMPOSTFX_IS_RUNNING("PPPurple")) || GRAPHICS::ANIMPOSTFX_IS_RUNNING("PPGreen")) || GRAPHICS::ANIMPOSTFX_IS_RUNNING("PPPink")) || GRAPHICS::ANIMPOSTFX_IS_RUNNING("DeadlineNeon")) || GRAPHICS::GET_TIMECYCLE_MODIFIER_INDEX() != -1)
	{
		return 1;
	}
	return 0;
}

void func_263(bool bParam0)//Position - 0x45712D
{
	if (bParam0)
	{
		if (!Global_2678393.f_1539)
		{
			Global_2678393.f_1539 = 1;
			Global_2678393.f_1541 = SCRIPT::GET_ID_OF_THIS_THREAD();
		}
		else if (!Global_2678393.f_1541 == SCRIPT::GET_ID_OF_THIS_THREAD())
		{
			if (!SCRIPT::IS_THREAD_ACTIVE(Global_2678393.f_1541))
			{
				Global_2678393.f_1541 = SCRIPT::GET_ID_OF_THIS_THREAD();
			}
		}
	}
	else if (Global_2678393.f_1539)
	{
		if (Global_2678393.f_1541 == SCRIPT::GET_ID_OF_THIS_THREAD())
		{
			Global_2678393.f_1539 = 0;
			Global_2678393.f_1541 = -1;
		}
		else if (!SCRIPT::IS_THREAD_ACTIVE(Global_2678393.f_1541))
		{
			Global_2678393.f_1539 = 0;
			Global_2678393.f_1541 = -1;
		}
	}
	else
	{
		Global_2678393.f_1541 = -1;
	}
}

void func_264()//Position - 0x45733C
{
	HUD::SET_RADAR_AS_EXTERIOR_THIS_FRAME();
	HUD::SET_RADAR_ZOOM_PRECISE(50f);
}

void func_265(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, char* sParam16, char* sParam17, char* sParam18)//Position - 0x45911D
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&uParam0))
	{
		if (MISC::ARE_STRINGS_EQUAL(&uParam0, "scr_ch_finale_bug_infestation"))
		{
			StringCopy(sParam16, "DLC_HEIST3/CASINO_HEIST_FINALE_GENERAL_01", 64);
			StringCopy(sParam17, "bugs_infestation", 64);
			StringCopy(sParam18, "dlc_ch_heist_finale_sounds", 64);
		}
	}
}

Vector3 func_266(struct<3> Param0, struct<3> Param1)//Position - 0x45A2F4
{
	return Param0 + Param1 * Vector(0.5f, 0.5f, 0.5f);
}

bool func_267(bool bParam0)//Position - 0x45A500
{
	return BitTest(Global_1853348[bParam0 /*834*/].f_833, 7);
}

float func_268(int iParam0)//Position - 0x45AE16
{
	if (iParam0 == joaat("stt_prop_stunt_track_short") || iParam0 == joaat("stt_prop_stunt_track_straight"))
	{
		return 0.08f;
	}
	if ((((iParam0 == joaat("stt_prop_track_straight_s") || iParam0 == joaat("stt_prop_track_straight_m")) || iParam0 == joaat("stt_prop_track_straight_lm")) || iParam0 == joaat("stt_prop_track_straight_l")) || iParam0 == joaat("ba_prop_track_straight_lm"))
	{
		return 0.135f;
	}
	if (iParam0 == 868391675)
	{
		return 0.4f;
	}
	if (iParam0 == joaat("as_prop_as_stunt_target") || iParam0 == joaat("as_prop_as_stunt_target_small"))
	{
		return 1f;
	}
	return 0.5f;
}

float func_269(int iParam0)//Position - 0x45AEBE
{
	if (iParam0 == joaat("stt_prop_stunt_track_short") || iParam0 == joaat("stt_prop_stunt_track_straight"))
	{
		return 0.6f;
	}
	if (iParam0 == joaat("stt_prop_track_straight_s"))
	{
		return 0.1f;
	}
	if (iParam0 == joaat("stt_prop_track_straight_m"))
	{
		return 0.31f;
	}
	if (iParam0 == joaat("ba_prop_track_straight_lm"))
	{
		return 0.31f;
	}
	if (iParam0 == joaat("stt_prop_track_straight_lm"))
	{
		return 0.63f;
	}
	if (iParam0 == joaat("stt_prop_track_straight_l"))
	{
		return 0.95f;
	}
	if (iParam0 == 868391675)
	{
		return 0.5f;
	}
	if (iParam0 == joaat("as_prop_as_stunt_target") || iParam0 == joaat("as_prop_as_stunt_target_small"))
	{
		return 1f;
	}
	return 0.4f;
}

char* func_270(int iParam0)//Position - 0x45AF75
{
	if (((((((iParam0 == joaat("stt_prop_stunt_track_short") || iParam0 == joaat("stt_prop_stunt_track_straight")) || iParam0 == joaat("stt_prop_track_straight_s")) || iParam0 == joaat("stt_prop_track_straight_m")) || iParam0 == joaat("stt_prop_track_straight_lm")) || iParam0 == joaat("stt_prop_track_straight_l")) || iParam0 == 868391675) || iParam0 == joaat("ba_prop_track_straight_lm"))
	{
		return "scr_as_trap_zone_rectangle";
	}
	if (iParam0 == joaat("as_prop_as_stunt_target") || iParam0 == joaat("as_prop_as_stunt_target_small"))
	{
		return "scr_as_trap_zone_circle";
	}
	return "scr_as_trap_zone_rectangle";
}

var func_271(int iParam0)//Position - 0x45C45F
{
	return BitTest(Global_2689235[iParam0 /*453*/].f_71.f_2, 22);
}

void func_272(int iParam0)//Position - 0x45CBE7
{
	Global_2815059.f_443 = iParam0;
}

int func_273(int iParam0)//Position - 0x45D83B
{
	switch (iParam0)
	{
		case 5:
			return Global_262145.f_31059 /* Tunable: -922426998 */;
			break;
		case 6:
			return Global_262145.f_31060 /* Tunable: -1622052205 */;
			break;
		case 7:
			return Global_262145.f_31061 /* Tunable: -1654716417 */;
			break;
		case 8:
			return Global_262145.f_31062 /* Tunable: 1381034286 */;
			break;
	}
	return 0;
}

float func_274(int iParam0, bool bParam1)//Position - 0x45F015
{
	float fVar0;
	float fVar1;
	float fVar2;
	struct<3> Var3;
	float fVar4;
	fVar1 = VEHICLE::GET_VEHICLE_ESTIMATED_MAX_SPEED(iParam0);
	if (!bParam1)
	{
		fVar2 = ENTITY::GET_ENTITY_SPEED(iParam0);
		fVar0 = (fVar2 / fVar1);
	}
	else
	{
		Var3 = { NETWORK::NETWORK_GET_LAST_VEL_RECEIVED_OVER_NETWORK(iParam0) };
		fVar4 = ((MISC::ABSF(Var3.f_0) + MISC::ABSF(Var3.f_1)) + MISC::ABSF(Var3.f_2));
		fVar0 = (fVar4 / fVar1);
	}
	return fVar0;
}

void func_275(bool bParam0)//Position - 0x45FCBE
{
	if (bParam0)
	{
		if (!BitTest(Global_1946250.f_5, 19))
		{
			MISC::SET_BIT(&(Global_1946250.f_5), 19);
		}
	}
	else if (BitTest(Global_1946250.f_5, 19))
	{
		MISC::CLEAR_BIT(&(Global_1946250.f_5), 19);
	}
}

float func_276()//Position - 0x45FF9F
{
	return 142.1f;
}

Vector3 func_277()//Position - 0x45FFAC
{
	return 1100f, 220f, -49.45f;
}

int func_278()//Position - 0x45FFC3
{
	return joaat("thrax");
}

void func_279()//Position - 0x4606B2
{
	struct<2> Var0;
	int iVar1;
	Var0.f_0 = 1240056714;
	Var0.f_1 = PLAYER::PLAYER_ID();
	iVar1 = __LIB_4__::func_970(1);
	if (!iVar1 == 0)
	{
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 2, iVar1);
	}
}

void func_280(bool bParam0)//Position - 0x4609A1
{
	if (bParam0)
	{
		if (!BitTest(Global_1958711, 25))
		{
			MISC::SET_BIT(&Global_1958711, 25);
		}
	}
	else if (BitTest(Global_1958711, 25))
	{
		MISC::CLEAR_BIT(&Global_1958711, 25);
	}
}

void func_281(int* iParam0, bool bParam1)//Position - 0x460A1D
{
	if (HUD::DOES_BLIP_EXIST(*iParam0))
	{
		HUD::SET_BLIP_ROUTE(*iParam0, false);
		HUD::REMOVE_BLIP(iParam0);
	}
	if (bParam1)
	{
		*iParam0 = 0;
	}
}

void func_282(var uParam0)//Position - 0x4641D6
{
	struct<3> Var0;
	struct<3> Var1;
	Var0 = { -16000f, -16000f, -1700f };
	Var1 = { 16000f, 16000f, 2700f };
	if (PED::DOES_SCENARIO_BLOCKING_AREA_EXISTS(Var0, Var1))
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA(*uParam0, true);
	}
}

void func_283(var uParam0)//Position - 0x46421B
{
	struct<3> Var0;
	struct<3> Var1;
	Var0 = { -16000f, -16000f, -1700f };
	Var1 = { 16000f, 16000f, 2700f };
	if (!PED::DOES_SCENARIO_BLOCKING_AREA_EXISTS(Var0, Var1))
	{
		*uParam0 = PED::ADD_SCENARIO_BLOCKING_AREA(Var0, Var1, true, true, true, true);
	}
}

void func_284(int iParam0, var uParam1)//Position - 0x464310
{
	bool bVar0;
	struct<3> Var1;
	struct<3> Var2;
	bVar0 = true;
	Var1 = { -16000f, -16000f, -1700f };
	Var2 = { 16000f, 16000f, 2700f };
	if (*iParam0 > -1)
	{
		if (MISC::DOES_POP_MULTIPLIER_AREA_EXIST(*iParam0))
		{
			MISC::REMOVE_POP_MULTIPLIER_AREA(*iParam0, bVar0);
		}
		*iParam0 = -1;
	}
	if (*uParam1)
	{
		VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Var1, Var2, true, false);
		PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(Var1, Var2, !bVar0);
		*uParam1 = 0;
	}
}

void func_285()//Position - 0x4653C6
{
	if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("MP_Celeb_Preload_Fade"))
	{
		GRAPHICS::ANIMPOSTFX_STOP("MP_Celeb_Preload_Fade");
	}
	if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("MP_Celeb_Lose"))
	{
		GRAPHICS::ANIMPOSTFX_STOP("MP_Celeb_Lose");
	}
	GRAPHICS::ANIMPOSTFX_PLAY("MP_Celeb_Lose_Out", 0, false);
}

void func_286()//Position - 0x465403
{
	if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("MP_Celeb_Preload_Fade"))
	{
		GRAPHICS::ANIMPOSTFX_STOP("MP_Celeb_Preload_Fade");
	}
	if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("MP_Celeb_Win"))
	{
		GRAPHICS::ANIMPOSTFX_STOP("MP_Celeb_Win");
	}
	GRAPHICS::ANIMPOSTFX_PLAY("MP_Celeb_Win_Out", 0, false);
}

int func_287(int iParam0)//Position - 0x4697DB
{
	int iVar0;
	iVar0 = 0;
	if (BitTest(Global_4718592.f_162934, 11) && iParam0 == 0)
	{
		iVar0 = 1;
	}
	else if (BitTest(Global_4718592.f_162934, 12) && iParam0 == 1)
	{
		iVar0 = 1;
	}
	else if (BitTest(Global_4718592.f_162934, 13) && iParam0 == 2)
	{
		iVar0 = 1;
	}
	else if (BitTest(Global_4718592.f_162934, 14) && iParam0 == 3)
	{
		iVar0 = 1;
	}
	return iVar0;
}

struct<4> func_288(int iParam0)//Position - 0x469C5B
{
	struct<4> Var0;
	StringCopy(&Var0, "COR_TEAM_", 16);
	StringIntConCat(&Var0, Global_4718592.f_92543[iParam0], 16);
	if (Global_4718592.f_92543[iParam0] == 38)
	{
		return Global_4718592.f_92548[iParam0 /*4*/];
	}
	return Var0;
}

Vector3 func_289(int iParam0)//Position - 0x4719E9
{
	struct<3> Var0;
	var uVar1;
	MISC::GET_MODEL_DIMENSIONS(joaat("cargobob4"), &Var0, &uVar1);
	return ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, 0f, (Var0.f_1 * 0.45f), (Var0.f_2 + 1.5f));
}

void func_290(var uParam0)//Position - 0x472902
{
	uParam0->f_9 = Global_4718592.f_165332;
	uParam0->f_11 = { Global_4718592.f_165327 };
	uParam0->f_14 = Global_4718592.f_165331;
	uParam0->f_15 = { Global_4718592.f_165321 };
	uParam0->f_18 = { Global_4718592.f_165324 };
	uParam0->f_21 = Global_4718592.f_165330;
}

int func_291(bool bParam0)//Position - 0x47391F
{
	if ((((Global_4718592.f_107227 != 4 && Global_4718592.f_107227 != 5) && Global_4718592.f_107227 != 8) && Global_4718592.f_107227 != 9) && !bParam0)
	{
		return 1;
	}
	return 0;
}

void func_292()//Position - 0x473978
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	if (!__LIB_0__::func_86(Global_4718592.f_95507[0 /*58*/]))
	{
		Var0 = { Global_4718592.f_95507[0 /*58*/] };
	}
	else
	{
		Var0 = { Global_4718592.f_95507[Global_4718592.f_107224 /*58*/] };
	}
	if (__LIB_1__::func_693(PLAYER::PLAYER_ID(), 1, 1))
	{
		Var1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		Var2 = { Var1 + Var0 - Var1 / FtoV(SYSTEM::VMAG(Var0 - Var1)) * Vector(10f, 10f, 10f) };
		NETWORK::NETWORK_SET_LOCAL_PLAYER_SYNC_LOOK_AT(true);
		TASK::TASK_LOOK_AT_COORD(PLAYER::PLAYER_PED_ID(), Var0, -1, 67584, 4);
	}
}

void func_293(var uParam0)//Position - 0x473A1F
{
	if (CAM::DOES_CAM_EXIST(uParam0->f_3))
	{
		CAM::SET_CAM_ACTIVE(uParam0->f_3, false);
	}
	if (CAM::DOES_CAM_EXIST(uParam0->f_5))
	{
		CAM::SET_CAM_ACTIVE(uParam0->f_5, true);
	}
	CAM::SET_CAM_ACTIVE_WITH_INTERP(uParam0->f_6, uParam0->f_5, 4000, 3, 1);
}

void func_294(var uParam0)//Position - 0x473A60
{
	uParam0->f_3 = CAM::CREATE_CAMERA(joaat("DEFAULT_SCRIPTED_CAMERA"), true);
	uParam0->f_4 = CAM::CREATE_CAMERA(joaat("DEFAULT_SCRIPTED_CAMERA"), true);
	uParam0->f_5 = CAM::CREATE_CAMERA(joaat("DEFAULT_SCRIPTED_CAMERA"), true);
	uParam0->f_7 = CAM::CREATE_CAMERA(joaat("CUSTOM_TIMED_SPLINE_CAMERA"), false);
	CAM::ATTACH_CAM_TO_ENTITY(uParam0->f_3, PLAYER::PLAYER_PED_ID(), 5.6067f, 10.0166f, 1.0515f, true);
	CAM::POINT_CAM_AT_ENTITY(uParam0->f_3, PLAYER::PLAYER_PED_ID(), 0f, 0f, 0f, true);
	CAM::SET_CAM_FOV(uParam0->f_3, CAM::GET_GAMEPLAY_CAM_FOV());
	CAM::ATTACH_CAM_TO_ENTITY(uParam0->f_4, PLAYER::PLAYER_PED_ID(), 9.3797f, -0.749f, 1.6505f, true);
	CAM::POINT_CAM_AT_ENTITY(uParam0->f_4, PLAYER::PLAYER_PED_ID(), -0.0657f, -0.0099f, 0.5676f, true);
	CAM::SET_CAM_FOV(uParam0->f_4, CAM::GET_GAMEPLAY_CAM_FOV());
	CAM::ATTACH_CAM_TO_ENTITY(uParam0->f_5, PLAYER::PLAYER_PED_ID(), 6.9468f, -12.3196f, 2.4409f, true);
	CAM::POINT_CAM_AT_ENTITY(uParam0->f_5, PLAYER::PLAYER_PED_ID(), -0.0657f, 0f, 0.9709f, true);
	CAM::SET_CAM_FOV(uParam0->f_5, CAM::GET_GAMEPLAY_CAM_FOV());
	CAM::SET_CAM_FOV(uParam0->f_7, CAM::GET_GAMEPLAY_CAM_FOV());
	CAM::ADD_CAM_SPLINE_NODE_USING_CAMERA(uParam0->f_7, uParam0->f_3, 0, 2);
	CAM::ADD_CAM_SPLINE_NODE_USING_CAMERA(uParam0->f_7, uParam0->f_4, 3000, 2);
	CAM::ADD_CAM_SPLINE_NODE_USING_CAMERA(uParam0->f_7, uParam0->f_5, 2000, 2);
	CAM::ADD_CAM_SPLINE_NODE_USING_GAMEPLAY_FRAME(uParam0->f_7, 500, 2);
	CAM::OVERRIDE_CAM_SPLINE_VELOCITY(uParam0->f_7, 0, 0f, 4.5f);
	CAM::OVERRIDE_CAM_SPLINE_VELOCITY(uParam0->f_7, 1, 1.5f, 13f);
	CAM::OVERRIDE_CAM_SPLINE_VELOCITY(uParam0->f_7, 2, 2.7f, 8f);
	CAM::OVERRIDE_CAM_SPLINE_VELOCITY(uParam0->f_7, 3, 2.8f, 7f);
	CAM::OVERRIDE_CAM_SPLINE_VELOCITY(uParam0->f_7, 3, 2.9f, 5f);
	CAM::SET_CAM_SPLINE_SMOOTHING_STYLE(uParam0->f_7, 0);
	CAM::SET_CAM_ACTIVE(uParam0->f_7, true);
	CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
	if (!__LIB_1__::func_728(PLAYER::PLAYER_ID()))
	{
		GRAPHICS::ANIMPOSTFX_PLAY("MinigameTransitionOut", 0, false);
	}
}

void func_295(var uParam0, float fParam1, float fParam2)//Position - 0x4741E6
{
	if (*uParam0 >= fParam1 && fParam1 != -1f)
	{
		*uParam0 = fParam2;
	}
	else if (*uParam0 < fParam2)
	{
		*uParam0 = fParam2;
	}
}

void func_296()//Position - 0x474216
{
	__LIB_1__::func_733();
	__LIB_0__::func_612(6, -1);
	__LIB_0__::func_612(7, -1);
	__LIB_0__::func_612(3, -1);
	__LIB_0__::func_612(1, -1);
	__LIB_0__::func_612(2, -1);
	__LIB_0__::func_612(11, -1);
	__LIB_0__::func_612(13, -1);
	__LIB_0__::func_612(14, -1);
	__LIB_0__::func_612(16, -1);
}

int func_297()//Position - 0x47526C
{
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		if (STREAMING::GET_PLAYER_SWITCH_TYPE() != 3)
		{
			if (STREAMING::GET_PLAYER_SWITCH_STATE() == 8 && STREAMING::GET_PLAYER_SWITCH_JUMP_CUT_INDEX() == 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_298(int iParam0)//Position - 0x477179
{
	Global_2667225.f_45.f_319 = iParam0;
}

int func_299(int iParam0)//Position - 0x4774D4
{
	switch (iParam0)
	{
		case 0:
			return 21717007;
		case 1:
			return 161688748;
		case 2:
			return -1232657940;
		case 3:
			return 2039527798;
		case 4:
			return -1595019740;
		default:
	}
	return -1;
}

int func_300(int iParam0)//Position - 0x4779C7
{
	int iVar0;
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		iVar0 = -1;
		while (iVar0 <= (VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(iParam0) - 1))
		{
			if (VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, iVar0, false))
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

void func_301(bool bParam0)//Position - 0x479381
{
	if (bParam0)
	{
		if (!BitTest(Global_103905, 5))
		{
			MISC::SET_BIT(&Global_103905, 5);
		}
	}
	else if (BitTest(Global_103905, 5))
	{
		MISC::CLEAR_BIT(&Global_103905, 5);
	}
}

bool func_302(var uParam0, var uParam1, var uParam2)//Position - 0x479B53
{
	bool bVar0;
	bVar0 = false;
	if (*uParam0 == 0)
	{
		*uParam0 = 4;
		bVar0 = true;
		if (*uParam1 == 0)
		{
			*uParam1 = 5;
			bVar0 = true;
		}
	}
	switch (*uParam1)
	{
		case 5:
			if (*uParam2 != 5 && *uParam2 != 0)
			{
				*uParam1 = 8;
				bVar0 = true;
			}
			else
			{
				*uParam1 = 6;
				*uParam2 = 0;
				bVar0 = true;
			}
			break;
		case 3:
		case 6:
			if (*uParam2 != 0)
			{
				*uParam2 = 0;
				bVar0 = true;
			}
			break;
		case 2:
		case 4:
		case 8:
			if (*uParam2 == 0)
			{
				*uParam2 = 5;
				bVar0 = true;
			}
			break;
	}
	switch (*uParam2)
	{
		case 0:
			if (*uParam1 != 3 && *uParam1 != 6)
			{
				*uParam2 = 5;
				bVar0 = true;
			}
			break;
	}
	if (bVar0)
	{
	}
	return bVar0;
}

void func_303(int iParam0)//Position - 0x479D59
{
	Global_1946250.f_3634 = iParam0;
}

void func_304()//Position - 0x479D6A
{
	int iVar0;
	if (__LIB_1__::func_140())
	{
		if (Global_2714762.f_669.f_10 == 0)
		{
			iVar0 = 0;
			while (iVar0 < 32)
			{
				if (Global_1836388[iVar0] != 0)
				{
					Global_1836388[iVar0] = 0;
				}
				if (Global_1836421[iVar0] != 0)
				{
					Global_1836421[iVar0] = 0;
				}
				if (Global_1836454[iVar0] != 0)
				{
					Global_1836454[iVar0] = 0;
				}
				iVar0++;
			}
		}
	}
}

void func_305()//Position - 0x479DD8
{
	MISC::SET_BIT(&(Global_2714762.f_43.f_4), 5);
}

void func_306()//Position - 0x479F6B
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Global_4980736.f_36355)
	{
		if (Global_4980736.f_36356[iVar0 /*134*/].f_7 == joaat("hei_prop_heist_apecrate"))
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("A_C_Rhesus"));
		}
		if (Global_4980736.f_36356[iVar0 /*134*/].f_7 != 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Global_4980736.f_36356[iVar0 /*134*/].f_7);
		}
		iVar0++;
	}
}

void func_307(int iParam0)//Position - 0x47A02F
{
	if (SCRIPT::IS_THREAD_ACTIVE(Global_2667225.f_24.f_1) && !SCRIPT::GET_ID_OF_THIS_THREAD() == Global_2667225.f_24.f_1)
	{
	}
	else
	{
		Global_2667225.f_24.f_1 = SCRIPT::GET_ID_OF_THIS_THREAD();
		Global_2667225.f_24 = iParam0;
	}
}

bool func_308(int iParam0)//Position - 0x47A4F3
{
	return Global_4718592.f_117065[iParam0] == 2;
}

bool func_309(int iParam0)//Position - 0x47A50A
{
	return Global_4718592.f_117065[iParam0] == 0;
}

void func_310()//Position - 0x47A58B
{
	if (__LIB_1__::func_693(PLAYER::PLAYER_ID(), 1, 1))
	{
		WEAPON::REMOVE_ALL_PED_WEAPONS(PLAYER::PLAYER_PED_ID(), true);
	}
}

int func_311(int iParam0)//Position - 0x47A5AC
{
	if (BitTest(Global_4718592.f_11, 24))
	{
		return 1;
	}
	else if (BitTest(Global_4718592.f_162538, (1 + iParam0)))
	{
		return 1;
	}
	return 0;
}

void func_312()//Position - 0x47A7C5
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (__LIB_0__::func_625())
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
			iVar2 = PLAYER::GET_PLAYER_PED(iVar1);
			if (__LIB_0__::func_121(iVar2))
			{
				NETWORK::NETWORK_TRIGGER_DAMAGE_EVENT_FOR_ZERO_WEAPON_HASH(iVar2, true);
			}
			iVar0++;
		}
	}
}

void func_313(int iParam0)//Position - 0x47AA0F
{
	Global_2667225.f_45.f_310 = iParam0;
}

void func_314(int iParam0)//Position - 0x47AA22
{
	Global_2667225.f_45.f_309 = iParam0;
}

void func_315(int iParam0)//Position - 0x47AA58
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0, false) && !PED::IS_PED_INJURED(iParam0))
		{
			PED::SET_PED_DIES_IN_WATER(iParam0, true);
			PED::SET_PED_MAX_TIME_UNDERWATER(iParam0, -1f);
			PED::SET_PED_DIES_IN_SINKING_VEHICLE(iParam0, true);
		}
	}
}

void func_316(bool bParam0)//Position - 0x47AA95
{
	if (bParam0)
	{
		Global_1958630 = 1;
	}
	else
	{
		Global_1958630 = 0;
	}
}

int func_317()//Position - 0x47EC15
{
	if (((Global_1931426 && !Global_1853348[PLAYER::PLAYER_ID() /*834*/] == 6) && !Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_528 >= 0) && !Global_1931428)
	{
		return 1;
	}
	return 0;
}

var func_318()//Position - 0x47EC5C
{
	return Global_2714762.f_827;
}

int func_319()//Position - 0x47EC6B
{
	if (__LIB_0__::func_157(0))
	{
		return 1;
	}
	if ((Global_2667225.f_26.f_7 > 0 && !Global_2667225.f_26.f_8) && !Global_2667225.f_26.f_4)
	{
		return 1;
	}
	return 0;
}

var func_320()//Position - 0x47F0D7
{
	return Global_1931398;
}

var func_321()//Position - 0x47F0E3
{
	return Global_2703735.f_61.f_81;
}

int func_322(int iParam0)//Position - 0x47F13E
{
	return Global_2689235[iParam0 /*453*/];
}

int func_323(int iParam0, int iParam1)//Position - 0x481CC4
{
	int iVar0;
	int iVar1;
	iVar0 = (iParam1 % Global_4718592.f_110323[iParam0]);
	iVar1 = (iParam1 - iVar0);
	return iVar1;
}

bool func_324()//Position - 0x48282E
{
	return BitTest(Global_2714762.f_43.f_4, 4);
}

int func_325()//Position - 0x48347F
{
	if ((__LIB_25__::func_276() || __LIB_1__::func_232()) && BitTest(Global_2715699.f_3880, 4))
	{
		return 1;
	}
	if (__LIB_21__::func_737(4))
	{
		return 0;
	}
	if (__LIB_21__::func_737(3))
	{
		return 0;
	}
	if (__LIB_21__::func_737(1))
	{
		return 0;
	}
	if (__LIB_21__::func_737(0))
	{
		return 1;
	}
	return 0;
}

int func_326(int iParam0)//Position - 0x483B5F
{
	switch (iParam0)
	{
		case 0:
			return joaat("P_Franklin_02");
		case 1:
			return joaat("IG_LamarDavis_02");
		default:
	}
	return 0;
}

int func_327()//Position - 0x483BF0
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= (Global_4980736.f_5739 - 1))
	{
		if (Global_4980736.f_5742[iVar0 /*442*/].f_291 > -1)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_328()//Position - 0x484C99
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 19)
	{
		if (((BitTest(Global_4980736.f_5[iVar0 /*273*/].f_89, 9) || BitTest(Global_4980736.f_5[iVar0 /*273*/].f_89, 10)) || BitTest(Global_4980736.f_5[iVar0 /*273*/].f_89, 11)) || BitTest(Global_4980736.f_5[iVar0 /*273*/].f_89, 12))
		{
			GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("CrossTheLine", false);
			iVar0 = 20;
		}
		iVar0++;
	}
}

int func_329(int iParam0)//Position - 0x4855D1
{
	if (iParam0 == joaat("P_Franklin_02"))
	{
		return 3;
	}
	else if (iParam0 == joaat("IG_LamarDavis_02"))
	{
		return 1;
	}
	return -1;
}

int func_330()//Position - 0x48603C
{
	HUD::REQUEST_ADDITIONAL_TEXT("MC_PLAY", 0);
	HUD::REQUEST_ADDITIONAL_TEXT("HACK", 3);
	if (HUD::HAS_THIS_ADDITIONAL_TEXT_LOADED("MC_PLAY", 0) && HUD::HAS_ADDITIONAL_TEXT_LOADED(3))
	{
		return 1;
	}
	return 0;
}

void func_331(var uParam0, bool bParam1)//Position - 0x4869DA
{
	if (!BitTest(uParam0->f_1, 5))
	{
		if (bParam1 || __LIB_0__::func_157(0))
		{
			MISC::SET_BIT(&(uParam0->f_1), 5);
		}
	}
}

int func_332(int iParam0)//Position - 0x488212
{
	return Global_2683918.f_97[iParam0 /*33*/].f_3;
}

float func_333(int iParam0, float fParam1)//Position - 0x488435
{
	float fVar0;
	fVar0 = (fParam1 - __LIB_2__::func_609(iParam0));
	while (fVar0 < 0f)
	{
		fVar0 = (fVar0 + 360f);
	}
	while (fVar0 >= 360f)
	{
		fVar0 = (fVar0 - 360f);
	}
	return fVar0;
}

Vector3 func_334(int iParam0, struct<3> Param1)//Position - 0x488476
{
	struct<3> Var0;
	Var0 = { Param1 - __LIB_1__::func_776(iParam0) };
	__LIB_0__::func_817(&Var0, 0f, 0f, (__LIB_2__::func_609(iParam0) * -1f));
	return Var0;
}

int func_335(int iParam0, var uParam1)//Position - 0x4884DF
{
	switch (iParam0)
	{
		case -1:
		case default:
	}
	return 0;
	return 0;
}

void func_336(var uParam0)//Position - 0x4889C7
{
	if (uParam0->f_51.f_1 == 11 && (__LIB_1__::func_60(Global_4718592.f_168757) || __LIB_4__::func_44(Global_4718592.f_168757)))
	{
		PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 200, true);
	}
}

void func_337()//Position - 0x489584
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= (363 - 1))
	{
		if ((((((((((((((((((((((((((((((((((((((((((((((((((((((iVar0 != 0 && iVar0 != 1) && iVar0 != 2) && iVar0 != 79) && iVar0 != 80) && iVar0 != 170) && iVar0 != 19) && iVar0 != 166) && iVar0 != 167) && iVar0 != 168) && iVar0 != 169) && iVar0 != 20) && iVar0 != 48) && iVar0 != 46) && iVar0 != 81) && iVar0 != 82) && iVar0 != 85) && iVar0 != 86) && iVar0 != 113) && iVar0 != 156) && iVar0 != 27) && iVar0 != 172) && iVar0 != 173) && iVar0 != 174) && iVar0 != 175) && iVar0 != 176) && iVar0 != 177) && iVar0 != 178) && iVar0 != 179) && iVar0 != 180) && iVar0 != 181) && iVar0 != 199) && iVar0 != 201) && iVar0 != 202) && iVar0 != 217) && iVar0 != 203) && iVar0 != 204) && iVar0 != 205) && iVar0 != 206) && iVar0 != 207) && iVar0 != 208) && iVar0 != 209) && iVar0 != 210) && iVar0 != 187) && iVar0 != 188) && iVar0 != 189) && iVar0 != 190) && iVar0 != 191) && iVar0 != 192) && iVar0 != 193) && iVar0 != 194) && iVar0 != 195) && iVar0 != 196) && iVar0 != 197) && iVar0 != 198)
		{
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, iVar0, true);
		}
		iVar0++;
	}
}

void func_338(var uParam0, int iParam1, struct<3> Param2, struct<3> Param3)//Position - 0x49E28E
{
	uParam0->f_2[uParam0->f_1] = iParam1;
	uParam0->f_7[uParam0->f_1 /*3*/] = { Param2 };
	uParam0->f_20[uParam0->f_1 /*3*/] = { Param3 };
	uParam0->f_1++;
}

int func_339(var uParam0, int iParam1)//Position - 0x49E8F4
{
	int iVar0;
	iVar0 = 0;
	if (uParam0->f_1.f_9[iParam1] == 0)
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_340(bool bParam0)//Position - 0x4A7D91
{
	if (bParam0 > 0)
	{
		return 1;
	}
	return 0;
}

int func_341()//Position - 0x4A7FE6
{
	if (BitTest(Global_4718592.f_162510.f_14, 0))
	{
	}
	if (BitTest(Global_4718592.f_162510.f_14, 1))
	{
	}
	return 1;
}

int func_342()//Position - 0x4A8010
{
	if (BitTest(Global_4718592.f_162510.f_14, 0) || BitTest(Global_4718592.f_162510.f_14, 1))
	{
		return 1;
	}
	return 0;
}

void func_343(int iParam0, int iParam1)//Position - 0x4A8A2E
{
	int iVar0;
	struct<3> Var1;
	bool bVar2;
	if (*iParam0 == 0)
	{
		return;
	}
	iVar0 = joaat("ch_prop_ch_vault_wall_damage");
	Var1 = { 2504.961f, -240.3102f, -70.07f };
	bVar2 = !INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(*iParam0, "Set_Vault_Door");
	if (bVar2 || iParam1)
	{
		INTERIOR::ACTIVATE_INTERIOR_ENTITY_SET(*iParam0, "Set_Vault_Door");
		ENTITY::CREATE_MODEL_HIDE(Var1, 25f, iVar0, true);
	}
}

void func_344(int iParam0, char* sParam1)//Position - 0x4A8A92
{
	if (!INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iParam0, sParam1))
	{
		return;
	}
	INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(iParam0, sParam1);
	INTERIOR::REFRESH_INTERIOR(iParam0);
}

void func_345(int iParam0, char* sParam1)//Position - 0x4A8AB7
{
	if (INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iParam0, sParam1))
	{
		return;
	}
	INTERIOR::ACTIVATE_INTERIOR_ENTITY_SET(iParam0, sParam1);
	INTERIOR::REFRESH_INTERIOR(iParam0);
}

char* func_346()//Position - 0x4A8C6F
{
	if (BitTest(Global_4718592.f_162499.f_5, 0))
	{
		return "Set_Pent_Spa_Bar_Closed";
	}
	return "Set_Pent_Spa_Bar_Open";
}

char* func_347()//Position - 0x4A8DAD
{
	switch (Global_4718592.f_162499.f_3)
	{
		case 0:
			return "set_pent_bar_party_0";
		case 1:
			return "set_pent_bar_party_1";
		case 2:
			return "set_pent_bar_party_2";
		default:
	}
	return "";
}

char* func_348()//Position - 0x4A8DF2
{
	switch (Global_4718592.f_162499.f_2)
	{
		case 1:
			return "Set_Pent_Arcade_Retro";
		case 2:
			return "Set_Pent_Arcade_Modern";
		default:
	}
	return "";
}

char* func_349()//Position - 0x4A8E29
{
	switch (Global_4718592.f_162499)
	{
		case 1:
			return "set_pent_bar_light_0";
		case 2:
			return "set_pent_bar_light_01";
		case 3:
			return "set_pent_bar_light_02";
		default:
	}
	return "set_pent_bar_light_0";
}

char* func_350()//Position - 0x4A8E6F
{
	switch (Global_4718592.f_162499.f_1)
	{
		case 0:
			return "Set_Pent_Pattern_01";
		case 1:
			return "Set_Pent_Pattern_02";
		case 2:
			return "Set_Pent_Pattern_03";
		case 3:
			return "Set_Pent_Pattern_04";
		case 4:
			return "Set_Pent_Pattern_05";
		case 5:
			return "Set_Pent_Pattern_06";
		case 6:
			return "Set_Pent_Pattern_07";
		case 7:
			return "Set_Pent_Pattern_08";
		case 8:
			return "Set_Pent_Pattern_09";
		default:
	}
	return "Set_Pent_Pattern_01";
}

void func_351(int iParam0)//Position - 0x4A8F0A
{
	int iVar0;
	struct<3> Var1;
	int iVar2;
	Var1 = { 959.8186f, 38.5589f, 116.6799f };
	iVar2 = joaat("vw_prop_vw_door_slide_01a");
	iVar0 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(Var1, 0.1f, iVar2, false, false, false);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		OBJECT::SET_OBJECT_TINT_INDEX(iVar0, iParam0);
	}
	Var1 = { 957.835f, 39.7984f, 116.6799f };
	iVar0 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(Var1, 0.1f, iVar2, false, false, false);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		OBJECT::SET_OBJECT_TINT_INDEX(iVar0, iParam0);
	}
}

void func_352(bool bParam0, var uParam1, int iParam2)//Position - 0x4A9072
{
	if (*bParam0 + 1 < 10)
	{
		(*uParam1)[*bParam0] = iParam2;
		*bParam0++;
	}
}

char* func_353(int iParam0)//Position - 0x4A90D9
{
	switch (iParam0)
	{
		case 0:
			return "basic_style_set";
		case 1:
			return "branded_style_set";
		case 2:
			return "urban_style_set";
		case 3:
			return "pump_01";
		case 4:
			return "pump_02";
		case 5:
			return "pump_03";
		case 6:
			return "pump_04";
		case 7:
			return "pump_05";
		case 8:
			return "pump_06";
		case 9:
			return "pump_07";
		case 10:
			return "pump_08";
		case 11:
			return "door_blocker";
		case 12:
			return "car_floor_hatch";
		default:
	}
	return "";
}

void func_354(var uParam0, int iParam1)//Position - 0x4AE19C
{
	if (uParam0->f_2 != iParam1)
	{
		uParam0->f_2 = iParam1;
	}
}

int func_355()//Position - 0x4AE232
{
	return (Global_4718592.f_174964 * 3 + Global_4718592.f_174965);
}

var func_356(int iParam0)//Position - 0x4B126E
{
	return Global_2683918.f_97[iParam0 /*33*/].f_6.f_4;
}

void func_357(bool bParam0, int iParam1)//Position - 0x4B1E50
{
	int iVar0;
	int iVar1;
	if (iParam1 == -1)
	{
		iParam1 = __LIB_0__::func_5();
	}
	Global_1659608 = 0;
	if (MISC::ARE_PROFILE_SETTINGS_VALID() == 0)
	{
		return;
	}
	iVar1 = __LIB_25__::func_303(iParam1);
	switch (bParam0)
	{
		case 0:
			STATS::SET_FREEMODE_STRAND_PROGRESSION_STATUS(iVar1, 0);
			break;
		default:
			iVar0 = MISC::GET_PROFILE_SETTING(iVar1);
			if (!BitTest(iVar0, bParam0))
			{
				MISC::SET_BIT(&iVar0, bParam0);
				STATS::SET_FREEMODE_STRAND_PROGRESSION_STATUS(iVar1, iVar0);
			}
			break;
	}
}

int func_358()//Position - 0x4B1EBA
{
	if (__LIB_1__::func_623())
	{
		return 0;
	}
	if (!__LIB_2__::func_224())
	{
		return 0;
	}
	if (__LIB_1__::func_209() && !__LIB_1__::func_232())
	{
		return 0;
	}
	return 1;
}

void func_359()//Position - 0x4B2069
{
	MISC::CLEAR_BIT(&(Global_2715699.f_6925), 3);
	MISC::CLEAR_BIT(&(Global_2715699.f_6925), 4);
	MISC::CLEAR_BIT(&(Global_2715699.f_6925), 5);
}

int func_360(int iParam0)//Position - 0x4B5752
{
	switch (iParam0)
	{
		case 1:
		case 2:
			return 1;
			break;
		case 5:
			return 1;
			break;
		case 6:
			return 1;
			break;
		case 8:
			return 0;
			break;
		case 10:
			return 1;
			break;
	}
	return 0;
}

int func_361(int iParam0)//Position - 0x4B6F03
{
	int iVar0;
	iVar0 = iParam0;
	switch (iVar0)
	{
		case 3:
			return -251807494;
		case 1:
			return 1199442189;
		case 2:
			return 1486811039;
		case 4:
			return -181862273;
		case 0:
			return -39155154;
		case 5:
			return -1600998734;
		case 6:
			return 495696637;
		default:
	}
	return 0;
}

int func_362(int iParam0)//Position - 0x4B6F79
{
	int iVar0;
	iVar0 = iParam0;
	switch (iVar0)
	{
		case 3:
			return 30;
		case 1:
			return 15;
		case 2:
			return 5;
		case 4:
			return 20;
		case 0:
			return 10;
		case 5:
			return 10;
		case 6:
			return 10;
		default:
	}
	return 0;
}

int func_363(int iParam0)//Position - 0x4B6FD9
{
	int iVar0;
	iVar0 = iParam0;
	switch (iVar0)
	{
		case 3:
			return 1276;
		case 1:
			return 1277;
		case 2:
			return 1278;
		case 4:
			return 1098;
		case 0:
			return 62;
		case 5:
			return 63;
		case 6:
			return 10404;
		default:
	}
	return 13122;
}

void func_364(int iParam0)//Position - 0x4B709A
{
	Global_2788199.f_578 = iParam0;
}

int func_365(int iParam0)//Position - 0x4B7594
{
	if (iParam0 != -1)
	{
		return BitTest(Global_1977138[iParam0 /*57*/].f_27, 29);
	}
	return 0;
}

int func_366(int iParam0)//Position - 0x4B75B3
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	iVar0 = Global_262145.f_30184 /* Tunable: 560841710 */;
	iVar1 = (iParam0 - 1);
	iVar2 = (Global_262145.f_30185 /* Tunable: 411102202 */ * iVar1);
	iVar3 = (iVar2 + iVar0);
	return iVar3;
}

int func_367(int iParam0)//Position - 0x4BC3EF
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	if (ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
		if (PED::IS_PED_A_PLAYER(iVar0))
		{
			iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar0);
			if (NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar1))
			{
				iVar2 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar1);
				iVar3 = iVar2;
			}
		}
	}
	else
	{
		iVar3 = -1;
	}
	return iVar3;
}

int func_368(int iParam0)//Position - 0x4BC4F6
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
		case joaat("S_M_M_Armoured_01"):
		case joaat("S_M_Y_Marine_03"):
		case joaat("S_M_M_CIASec_01"):
		case joaat("S_M_M_Security_01"):
		case joaat("S_M_M_HighSec_01"):
		case joaat("S_M_M_PrisGuard_01"):
		case joaat("IG_Karen_Daniels"):
			return 1;
			break;
	}
	return 0;
}

void func_369(bool bParam0)//Position - 0x4BD769
{
	struct<3> Var0;
	int iVar1;
	Var0.f_0 = 187707610;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = bParam0;
	iVar1 = __LIB_4__::func_970(1);
	if (!iVar1 == 0)
	{
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 3, iVar1);
	}
}

void func_370(int iParam0)//Position - 0x4BEABB
{
	struct<3> Var0;
	int iVar1;
	Var0.f_0 = 86039676;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = iParam0;
	iVar1 = __LIB_4__::func_970(1);
	if (!iVar1 == 0)
	{
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 3, iVar1);
	}
}

void func_371(bool bParam0, int iParam1, int iParam2, int iParam3, var uParam4, var uParam5)//Position - 0x4BECE4
{
	struct<8> Var0;
	int iVar1;
	Var0.f_0 = 576730157;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = bParam0;
	Var0.f_3 = iParam1;
	Var0.f_4 = iParam2;
	Var0.f_5 = iParam3;
	Var0.f_7 = uParam4;
	Var0.f_6 = uParam5;
	iVar1 = __LIB_4__::func_970(1);
	if (!iVar1 == 0)
	{
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 8, iVar1);
	}
}

bool func_372(int iParam0)//Position - 0x4BF489
{
	return iParam0 == 1407524436;
}

void func_373(var uParam0, int iParam1)//Position - 0x4C6AA4
{
	struct<4> Var0;
	int iVar1;
	Var0.f_0 = 1344305462;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = uParam0;
	Var0.f_3 = iParam1;
	iVar1 = __LIB_4__::func_970(1);
	if (!iVar1 == 0)
	{
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 4, iVar1);
	}
}

void func_374(int iParam0)//Position - 0x4C72D4
{
	struct<3> Var0;
	int iVar1;
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 3))
	{
		if (Var0.f_0 == -2077915186)
		{
			if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(Var0.f_2))
			{
				iVar1 = PLAYER::GET_PLAYER_PED(Var0.f_2);
				if (ENTITY::DOES_ENTITY_EXIST(iVar1))
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(iVar1, false))
					{
						if (ENTITY::DOES_ENTITY_EXIST(PED::GET_VEHICLE_PED_IS_IN(iVar1, false)))
						{
							ENTITY::SET_ENTITY_MOTION_BLUR(PED::GET_VEHICLE_PED_IS_IN(iVar1, false), false);
						}
					}
				}
			}
		}
	}
}

void func_375(int iParam0, int iParam1)//Position - 0x4C8804
{
	struct<3> Var0;
	int iVar1;
	Var0.f_0 = 1326795812;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = iParam0;
	iVar1 = __LIB_1__::func_705(iParam1);
	if (!iVar1 == 0)
	{
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 3, iVar1);
	}
}

void func_376(int iParam0)//Position - 0x4C9DA7
{
	var uVar0;
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &uVar0, 2))
	{
		Global_2715699.f_6323 = 1;
	}
}

int func_377(bool bParam0)//Position - 0x4CADB7
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (__LIB_1__::func_693(bParam0, 1, 1) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1, false) == PLAYER::PLAYER_PED_ID())
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
			{
				iVar1 = 0;
				while (iVar1 < VEHICLE::GET_VEHICLE_NUMBER_OF_PASSENGERS(iVar0, false, true) + 1)
				{
					iVar2 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, (iVar1 - 1), false);
					if (iVar2 != 0)
					{
						if (!PED::IS_PED_INJURED(iVar2))
						{
							if (PED::IS_PED_A_PLAYER(iVar2))
							{
								if (iVar2 == PLAYER::GET_PLAYER_PED(bParam0))
								{
									return 1;
								}
							}
						}
					}
					iVar1++;
				}
			}
		}
	}
	return 0;
}

void func_378(int iParam0)//Position - 0x4CB597
{
	struct<5> Var0;
	int iVar1;
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 5))
	{
		iVar1 = Var0.f_1;
		Global_4521801.f_75[iVar1 /*25*/] = Var0.f_2;
		Global_4521801.f_75[iVar1 /*25*/].f_1 = Var0.f_3;
		if (Var0.f_4)
		{
			Global_4521801.f_75[iVar1 /*25*/].f_3 = Var0.f_4;
		}
		Global_4521801.f_75[iVar1 /*25*/].f_9 = Var0.f_4;
	}
}

void func_379(int iParam0)//Position - 0x4CB867
{
	int iVar0;
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &iVar0, 2))
	{
		if (iVar0 == 1877870806)
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "Bounds_Timer_Reset", "DLC_SM_VEHWA_Player_Sounds", false);
		}
	}
}

void func_380(int iParam0)//Position - 0x4CB8CF
{
	var uVar0;
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &uVar0, 2))
	{
		AUDIO::TRIGGER_MUSIC_EVENT("APT_PRE_COUNTDOWN_STOP");
	}
}

int func_381(int iParam0, int iParam1)//Position - 0x4CC1F6
{
	int iVar0;
	iVar0 = 1;
	if (iParam1 && !STREAMING::HAS_MODEL_LOADED(joaat("hei_prop_heist_safedeposit")))
	{
		iVar0 = 0;
	}
	if (iParam0 && !STREAMING::HAS_MODEL_LOADED(joaat("hei_prop_heist_safedepdoor")))
	{
		iVar0 = 0;
	}
	return iVar0;
}

int func_382()//Position - 0x4CEDA7
{
	return Global_1951101;
}

void func_383(int iParam0)//Position - 0x4D1EAA
{
	Global_2815059.f_444 = iParam0;
}

void func_384()//Position - 0x4D23F4
{
	Global_2824440 = 0;
	Global_2824440.f_1 = 0;
	Global_2824440.f_2 = 0;
}

void func_385()//Position - 0x4D243A
{
	int iVar0;
	iVar0 = 24;
	while (iVar0 < 35)
	{
		if (Global_113386.f_14141[iVar0 /*104*/].f_99[3] == 1)
		{
			Global_113386.f_14141[iVar0 /*104*/].f_24 = 0;
			Global_113386.f_14141[iVar0 /*104*/].f_28 = 0;
			Global_113386.f_14141[iVar0 /*104*/].f_99[3] = 0;
		}
		iVar0++;
	}
	Global_113386.f_14051[3 /*20*/].f_17 = 0;
	Global_113386.f_14051[3 /*20*/].f_18 = 0;
}

bool func_386()//Position - 0x4EC083
{
	return ((__LIB_1__::func_150() || __LIB_1__::func_149()) && __LIB_1__::func_623());
}

int func_387()//Position - 0x4EC62E
{
	return Global_2727744;
}

void func_388(int iParam0)//Position - 0x4ED7FE
{
	if (Global_1966062 != iParam0)
	{
		Global_1966062 = iParam0;
	}
}

void func_389(int iParam0)//Position - 0x4ED825
{
	if (iParam0 < 0 || iParam0 >= 4)
	{
		return;
	}
	MISC::SET_BIT(&(Global_2715699.f_3880), iParam0);
}

void func_390()//Position - 0x4ED84E
{
	if (HUD::IS_NAMED_RENDERTARGET_REGISTERED("tvscreen"))
	{
		HUD::RELEASE_NAMED_RENDERTARGET("tvscreen");
	}
}

void func_391(int iParam0)//Position - 0x4ED86C
{
	Global_2667225.f_45.f_303 = iParam0;
}

void func_392()//Position - 0x4EDD09
{
	Global_1958630 = 0;
	Global_1958631 = 0;
	Global_1958632 = 0;
	Global_1958633 = 0;
	Global_1958634 = 0;
}

void func_393()//Position - 0x4EF365
{
	Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_269.f_48 = -1;
	Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_269.f_46 = -1;
}

void func_394()//Position - 0x4EF38F
{
	Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_269.f_1 = { 0f, 0f, 0f };
	Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_269.f_46 = -1;
}

int func_395()//Position - 0x4EFAE4
{
	int iVar0;
	iVar0 = 0;
	if (__LIB_1__::func_140() && !__LIB_1__::func_153())
	{
		iVar0 = 1;
	}
	return iVar0;
}

void func_396(var uParam0)//Position - 0x4EFB05
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= (uParam0->f_1 - 1))
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_33[iVar0]))
		{
			ENTITY::DELETE_ENTITY(&(uParam0->f_33[iVar0]));
		}
		iVar0++;
	}
}

int func_397()//Position - 0x4F1E31
{
	int iVar0;
	char cVar1[24];
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

void func_398(int iParam0, bool bParam1)//Position - 0x4F1F1A
{
	struct<4> Var0;
	int iVar1;
	Var0.f_0 = -1684073224;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = iParam0;
	Var0.f_3 = bParam1;
	iVar1 = __LIB_4__::func_970(1);
	if (!iVar1 == 0)
	{
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 4, iVar1);
	}
}

void func_399()//Position - 0x4F5328
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		MISC::CLEAR_BIT(&(Global_2715699.f_3880), iVar0);
		Global_2715699.f_3881[iVar0] = 0;
		Global_2715699.f_3886[iVar0] = 0;
		iVar0++;
	}
}

Vector3 func_400(int iParam0)//Position - 0x4F7089
{
	switch (iParam0)
	{
		case 20:
			return 1256.18f, 4789.08f, -37.9707f;
		case 21:
			return 694.526f, 5899.05f, -149.322f;
		case 22:
			return 1316.63f, 5184.09f, -77.3217f;
		case 23:
			return 1248.2f, 5276.21f, -77.3218f;
		case 24:
			return 780.986f, 5703.54f, -133.678f;
		case 25:
			return 1049.49f, 5602.21f, -102.796f;
		default:
	}
	return 0f, 0f, 0f;
}

void func_401()//Position - 0x4F7300
{
	if (__LIB_1__::func_208(Global_4718592.f_142645))
	{
		if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(CAM::GET_CAM_ACTIVE_VIEW_MODE_CONTEXT()) == 4)
		{
			CAM::SET_CAM_VIEW_MODE_FOR_CONTEXT(CAM::GET_CAM_ACTIVE_VIEW_MODE_CONTEXT(), 1);
		}
	}
}

int func_402()//Position - 0xDFC1
{
	if (__LIB_0__::func_995(0))
	{
		if (__LIB_25__::func_274() || BitTest(Global_4718592.f_35, 17))
		{
			return 1;
		}
	}
	else if (__LIB_25__::func_274())
	{
		return 1;
	}
	return 0;
}

void func_403(var uParam0, int iParam1, var uParam2, int iParam3)//Position - 0x12AA7
{
	struct<6> Var0;
	int iVar1;
	Var0.f_0 = -1631498192;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = uParam0;
	Var0.f_3 = iParam1;
	Var0.f_4 = uParam2;
	Var0.f_5 = iParam3;
	iVar1 = __LIB_1__::func_705(Var0.f_2);
	if (!iVar1 == 0)
	{
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 6, iVar1);
	}
}

int func_404(int iParam0, int iParam1)//Position - 0x12C91
{
	if (__LIB_8__::func_875(Global_4718592.f_168757))
	{
		switch (iParam0)
		{
			case 20:
			case 21:
			case 22:
				return 6000;
			}
		default:
	}
	if (iParam0 == -1)
	{
		if (__LIB_25__::func_340(Global_4718592.f_116524) == 1)
		{
			switch (Global_4718592.f_591)
			{
				case 0:
					return 300000;
					break;
				case 1:
					if (iParam1 > 1)
					{
						return 480000;
					}
					else
					{
						return 240000;
					}
					break;
				case 2:
					return 360000;
					break;
				}
		}
		return 360000;
	}
	switch (iParam0)
	{
		case 0:
			return 0;
		case 20:
			return 1000;
		case 21:
			return 2000;
		case 22:
			return 3000;
		case 23:
			return 4000;
		case 24:
			return 5000;
		case 25:
			return 6000;
		case 26:
			return 7000;
		case 27:
			return 8000;
		case 28:
			return 9000;
		case 1:
			return 10000;
		case 29:
			return 11000;
		case 30:
			return 12000;
		case 31:
			return 13000;
		case 32:
			return 14000;
		case 33:
			return 15000;
		case 34:
			return 16000;
		case 35:
			return 17000;
		case 36:
			return 18000;
		case 37:
			return 19000;
		case 2:
			return 20000;
		case 63:
			return 25000;
		case 3:
			return 30000;
		case 64:
			return 35000;
		case 4:
			return 40000;
		case 65:
			return 45000;
		case 5:
			return 50000;
		case 66:
			return 55000;
		case 6:
			return 60000;
		case 67:
			return 65000;
		case 47:
			return 70000;
		case 68:
			return 75000;
		case 48:
			return 80000;
		case 69:
			return 85000;
		case 38:
			return 90000;
		case 70:
			return 95000;
		case 49:
			return 100000;
		case 71:
			return 105000;
		case 50:
			return 110000;
		case 72:
			return 115000;
		case 7:
			return 120000;
		case 51:
			return 130000;
		case 52:
			return 140000;
		case 39:
			return 150000;
		case 53:
			return 160000;
		case 54:
			return 170000;
		case 8:
			return 180000;
		case 55:
			return 190000;
		case 56:
			return 200000;
		case 40:
			return 210000;
		case 57:
			return 220000;
		case 58:
			return 230000;
		case 9:
			return 240000;
		case 59:
			return 250000;
		case 60:
			return 260000;
		case 41:
			return 270000;
		case 61:
			return 280000;
		case 62:
			return 290000;
		case 10:
			return 300000;
		case 42:
			return 330000;
		case 11:
			return 360000;
		case 43:
			return 390000;
		case 12:
			return 420000;
		case 44:
			return 450000;
		case 13:
			return 480000;
		case 45:
			return 510000;
		case 14:
			return 540000;
		case 46:
			return 570000;
		case 15:
			return 600000;
		case 16:
			return 900000;
		case 17:
			return 1200000;
		case 18:
			return 1500000;
		case 19:
			return 1800000;
		default:
	}
	return 0;
}

int func_405(int iParam0, var uParam1, var uParam2)//Position - 0x19A7A
{
	int iVar0;
	float fVar1;
	float fVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	iVar0 = -1;
	fVar1 = 1E+09f;
	bVar3 = false;
	while (bVar3 <= 3)
	{
		if (BitTest(uParam1, bVar3))
		{
			iVar4 = ENTITY::GET_NEAREST_PLAYER_TO_ENTITY_ON_TEAM(iParam0, bVar3);
			bVar5 = PLAYER::INT_TO_PLAYERINDEX(iVar4);
			if (bVar5 != __LIB_0__::func_162() && __LIB_1__::func_693(bVar5, 1, 1))
			{
				fVar2 = SYSTEM::VDIST2(__LIB_1__::func_694(bVar5), ENTITY::GET_ENTITY_COORDS(iParam0, true));
				if (fVar2 < fVar1)
				{
					fVar1 = fVar2;
					iVar0 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(bVar5);
				}
			}
		}
		bVar3++;
	}
	*uParam2 = fVar1;
	return iVar0;
}

void func_406()//Position - 0x19E42
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Global_4980736.f_94384)
	{
		if (Global_4980736.f_94390[iVar0 /*1004*/].f_27 != 0)
		{
			if (BitTest(Global_4980736.f_94390[iVar0 /*1004*/].f_534, 29))
			{
				STREAMING::REMOVE_ANIM_DICT(__LIB_25__::func_278(Global_4980736.f_94390[iVar0 /*1004*/].f_704));
			}
			if (BitTest(Global_4980736.f_94390[iVar0 /*1004*/].f_76, 0))
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_ld_case_01"));
				STREAMING::REMOVE_ANIM_DICT("weapons@misc@jerrycan@mp_male");
			}
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Global_4980736.f_94390[iVar0 /*1004*/].f_27);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_4980736.f_78574)
	{
		if (Global_4980736.f_78578[iVar0 /*450*/].f_12 != 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Global_4980736.f_78578[iVar0 /*450*/].f_12);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_4980736.f_5739)
	{
		if (Global_4980736.f_5742[iVar0 /*442*/].f_15 != 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Global_4980736.f_5742[iVar0 /*442*/].f_15);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_4980736.f_63310)
	{
		if (Global_4980736.f_63312[iVar0 /*183*/].f_7 != 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Global_4980736.f_63312[iVar0 /*183*/].f_7);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_4980736.f_36355)
	{
		if (Global_4980736.f_36356[iVar0 /*134*/].f_7 != 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Global_4980736.f_36356[iVar0 /*134*/].f_7);
		}
		iVar0++;
	}
	__LIB_25__::func_277();
}

int func_407(bool bParam0)//Position - 0x1AB28
{
	int iVar0;
	iVar0 = 0;
	if (BitTest(Global_4980736.f_94390[bParam0 /*1004*/].f_545, 24))
	{
		return 0;
	}
	if (Global_4980736.f_94390[bParam0 /*1004*/].f_84 != -1)
	{
		iVar0 = 1;
		if (BitTest(Global_4980736.f_94390[bParam0 /*1004*/].f_536, 16))
		{
			if (__LIB_1__::func_614() || __LIB_1__::func_24())
			{
				if (__LIB_21__::func_737(3))
				{
					if (!__LIB_0__::func_86(Global_4980736.f_94390[bParam0 /*1004*/].f_669[3 /*3*/]))
					{
						iVar0 = 0;
					}
				}
				else if (__LIB_21__::func_737(2))
				{
					if (!__LIB_0__::func_86(Global_4980736.f_94390[bParam0 /*1004*/].f_669[2 /*3*/]))
					{
						iVar0 = 0;
					}
				}
				else if (__LIB_21__::func_737(1))
				{
					if (!__LIB_0__::func_86(Global_4980736.f_94390[bParam0 /*1004*/].f_669[1 /*3*/]))
					{
						iVar0 = 0;
					}
				}
				else if (__LIB_21__::func_737(0))
				{
					if (!__LIB_0__::func_86(Global_4980736.f_94390[bParam0 /*1004*/].f_669[0 /*3*/]))
					{
						iVar0 = 0;
					}
				}
			}
		}
	}
	return iVar0;
}

int func_408()//Position - 0x1B4CF
{
	if (__LIB_25__::func_280())
	{
		return 1;
	}
	if ((__LIB_25__::func_276() || __LIB_1__::func_232()) && BitTest(Global_2715699.f_3880, 4))
	{
		return 1;
	}
	return 0;
}

int func_409(int iParam0)//Position - 0x1C88E
{
	int iVar0;
	iVar0 = __LIB_24__::func_810(iParam0);
	switch (iVar0)
	{
		case 1:
			return (MISC::ABSI(iParam0) - MISC::ABSI(-1000000));
			break;
	}
	return -1;
}

int func_410(char[24] cParam0, int iParam1, int iParam2)//Position - 0x39F67
{
	int iVar0;
	char cVar1[24];
	char* sVar2;
	int iVar3;
	cVar1 = { cParam0 };
	StringConCat(&cVar1, "SL", 24);
	iVar3 = HUD::GET_LENGTH_OF_LITERAL_STRING(HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&cVar1));
	if (iVar3 <= (1 + iParam2 * 3))
	{
		return 9999;
	}
	StringCopy(&sVar2, HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME(HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&cVar1), (0 + iParam2 * 3), (1 + iParam2 * 3)), 8);
	iVar0 = __LIB_13__::func_103(&sVar2);
	if (iParam1 != -1)
	{
		if (iVar0 >= iParam1)
		{
			iVar0 = 0;
		}
	}
	if (iVar0 < 0)
	{
		iVar0 = 0;
	}
	return iVar0;
}

float func_411(int iParam0, bool bParam1)//Position - 0x460DC
{
	float fVar0;
	int iVar1;
	fVar0 = Global_1312193[iParam0 /*1951*/].f_38[1 /*27*/].f_11;
	iVar1 = __LIB_2__::func_684(iParam0);
	switch (iVar1)
	{
		case 1:
			if (bParam1)
			{
				fVar0 = 96.8f;
			}
			else
			{
				fVar0 = 38f;
			}
			break;
		case 2:
			if (bParam1)
			{
				fVar0 = 158.96f;
			}
			else
			{
				fVar0 = 157.61f;
			}
			break;
		case 3:
			if (bParam1)
			{
				fVar0 = 118.44f;
			}
			else
			{
				fVar0 = 67.6f;
			}
			break;
		case 4:
			if (bParam1)
			{
				fVar0 = 27.61f;
			}
			else
			{
				fVar0 = -16f;
			}
			break;
		case 5:
			if (bParam1)
			{
				fVar0 = 341.65f;
			}
			else
			{
				fVar0 = -63.2f;
			}
			break;
		case 6:
			if (bParam1)
			{
				fVar0 = 116.69f;
			}
			else
			{
				fVar0 = 28.81f;
			}
			break;
		case 7:
			if (bParam1)
			{
				fVar0 = 0.36f;
			}
			else
			{
				fVar0 = -59.6f;
			}
			break;
		case 58:
			if (bParam1)
			{
				fVar0 = 281.9855f;
			}
			else
			{
				fVar0 = 357.586f;
			}
			break;
		case 59:
			if (bParam1)
			{
				fVar0 = 249.3812f;
			}
			else
			{
				fVar0 = 306.5797f;
			}
			break;
		case 60:
			if (bParam1)
			{
				fVar0 = 196.3931f;
			}
			else
			{
				fVar0 = 284.9932f;
			}
			break;
		case 61:
			if (bParam1)
			{
				fVar0 = -30.15f;
			}
			else
			{
				fVar0 = 136.3221f;
			}
			break;
		case 62:
			if (bParam1)
			{
				fVar0 = 91.3118f;
			}
			else
			{
				fVar0 = 332.5826f;
			}
			break;
		case 63:
			if (bParam1)
			{
				fVar0 = 253.1887f;
			}
			else
			{
				fVar0 = 337.3889f;
			}
			break;
		case 64:
			if (bParam1)
			{
				fVar0 = 220.3903f;
			}
			else
			{
				fVar0 = 302.7907f;
			}
			break;
		case 65:
			if (bParam1)
			{
				fVar0 = 272.9954f;
			}
			else
			{
				fVar0 = 355.795f;
			}
			break;
		case 66:
			if (bParam1)
			{
				fVar0 = 271.7972f;
			}
			else
			{
				fVar0 = 352.1943f;
			}
			break;
		case 67:
			if (bParam1)
			{
				fVar0 = 253.1781f;
			}
			else
			{
				fVar0 = 321.7783f;
			}
			break;
	}
	return fVar0;
}

float func_412(int iParam0)//Position - 0x631C2
{
	if (__LIB_6__::func_527(0))
	{
		if (iParam0 == 3 || iParam0 == 6)
		{
			return 180f;
		}
	}
	else if (__LIB_6__::func_527(1))
	{
		if (iParam0 == 3 || iParam0 == 6)
		{
			return 180f;
		}
	}
	else if (__LIB_6__::func_527(2))
	{
		if (((iParam0 == 2 || iParam0 == 6) || iParam0 == 7) || iParam0 == 8)
		{
			return 180f;
		}
	}
	else if (__LIB_6__::func_527(3))
	{
		if ((iParam0 == 3 || iParam0 == 6) || iParam0 == 9)
		{
			return 180f;
		}
	}
	else if (__LIB_6__::func_527(4))
	{
		if (iParam0 == 3 || iParam0 == 6)
		{
			return 180f;
		}
	}
	else if (__LIB_6__::func_527(5))
	{
		if (iParam0 == 3 || iParam0 == 6)
		{
			return 180f;
		}
	}
	else if (__LIB_6__::func_527(6))
	{
		if ((iParam0 == 3 || iParam0 == 6) || iParam0 == 9)
		{
			return 180f;
		}
	}
	else if (__LIB_6__::func_527(7))
	{
		if (iParam0 == 3 || iParam0 == 6)
		{
			return 180f;
		}
	}
	else if (__LIB_6__::func_527(8))
	{
		if ((iParam0 == 2 || iParam0 == 3) || iParam0 == 9)
		{
			return 180f;
		}
	}
	else if (__LIB_6__::func_527(9))
	{
		if (iParam0 == 3 || iParam0 == 6)
		{
			return 180f;
		}
	}
	else if (__LIB_6__::func_527(10))
	{
		if (iParam0 == 3 || iParam0 == 9)
		{
			return 180f;
		}
	}
	else if (__LIB_6__::func_527(11))
	{
		if (iParam0 == 3 || iParam0 == 6)
		{
			return 180f;
		}
	}
	else if (__LIB_6__::func_527(12))
	{
		if ((iParam0 == 3 || iParam0 == 6) || iParam0 == 9)
		{
			return 180f;
		}
	}
	else if (__LIB_6__::func_527(13))
	{
		if ((iParam0 == 3 || iParam0 == 6) || iParam0 == 9)
		{
			return 180f;
		}
	}
	else if (__LIB_6__::func_527(14))
	{
		if (((iParam0 == 2 || iParam0 == 3) || iParam0 == 6) || iParam0 == 9)
		{
			return 180f;
		}
	}
	else if (__LIB_6__::func_527(15))
	{
		if (((iParam0 == 2 || iParam0 == 3) || iParam0 == 6) || iParam0 == 9)
		{
			return 180f;
		}
	}
	return 0f;
}

int func_413(int iParam0)//Position - 0x6DC0E
{
	if (iParam0 == __LIB_0__::func_162())
	{
		return 0;
	}
	return BitTest(Global_1853348[iParam0 /*834*/].f_267.f_476, 4);
}

int func_414(int iParam0)//Position - 0x6DC8C
{
	if (iParam0 == __LIB_0__::func_162())
	{
		return 0;
	}
	return BitTest(Global_1853348[iParam0 /*834*/].f_267.f_476, 3);
}

int func_415(int iParam0)//Position - 0x6DD0A
{
	if (iParam0 == __LIB_0__::func_162())
	{
		return 0;
	}
	return BitTest(Global_1853348[iParam0 /*834*/].f_267.f_476, 2);
}

int func_416(int iParam0)//Position - 0x6DD88
{
	if (iParam0 == __LIB_0__::func_162())
	{
		return 0;
	}
	return BitTest(Global_1853348[iParam0 /*834*/].f_267.f_476, 1);
}

void func_417(int iParam0)//Position - 0x74ED2
{
	char cVar0[16];
	int iVar1;
	int iVar2;
	StringCopy(&cVar0, "rgFM_AiPed", 16);
	StringIntConCat(&cVar0, (*iParam0)[0], 16);
	StringIntConCat(&cVar0, (*iParam0)[1], 16);
	StringIntConCat(&cVar0, (*iParam0)[2], 16);
	StringIntConCat(&cVar0, (*iParam0)[3], 16);
	StringIntConCat(&cVar0, (*iParam0)[4], 16);
	if (PED::ADD_RELATIONSHIP_GROUP(&cVar0, &(Global_1836877[(*iParam0)[0] /*94*/][(*iParam0)[1] /*31*/][(*iParam0)[2] /*10*/][(*iParam0)[3] /*3*/][(*iParam0)[4]])))
	{
		iVar1 = Global_1836877[(*iParam0)[0] /*94*/][(*iParam0)[1] /*31*/][(*iParam0)[2] /*10*/][(*iParam0)[3] /*3*/][(*iParam0)[4]];
		iVar2 = 0;
		while (iVar2 < 4)
		{
			if ((*iParam0)[iVar2] == 0)
			{
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, Global_1836871[iVar2], iVar1);
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iVar1, Global_1836871[iVar2]);
				__LIB_12__::func_525(&iVar1);
			}
			else if ((*iParam0)[iVar2] == 1)
			{
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(3, Global_1836871[iVar2], iVar1);
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(3, iVar1, Global_1836871[iVar2]);
				__LIB_12__::func_525(&iVar1);
			}
			else
			{
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, Global_1836871[iVar2], iVar1);
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iVar1, Global_1836871[iVar2]);
			}
			if (((((*iParam0)[0] == 0 && (*iParam0)[1] == 0) && (*iParam0)[2] == 0) && (*iParam0)[3] == 0) && (*iParam0)[4] == 0)
			{
				if (iVar2 == 0)
				{
					PED::ADD_RELATIONSHIP_GROUP("rgFM_AiHatePlyrLikeAllAi", &Global_1837160);
					__LIB_12__::func_525(&Global_1837160);
					if (!PED::DOES_RELATIONSHIP_GROUP_EXIST(Global_1837201))
					{
						PED::ADD_RELATIONSHIP_GROUP("rgFM_AiHatedByCopsAndMercs", &Global_1837201);
						__LIB_12__::func_526(5, &Global_1837201);
					}
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, Global_1837160, Global_1837201);
				}
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, Global_1837160, Global_1836871[iVar2]);
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, Global_1836871[iVar2], Global_1837160);
			}
			iVar2++;
		}
		if ((*iParam0)[4] == 1)
		{
			__LIB_12__::func_526(1, &iVar1);
		}
		if ((((*iParam0)[0] != 2 && (*iParam0)[1] != 2) && (*iParam0)[2] != 2) && (*iParam0)[3] != 2)
		{
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, Global_1837160, iVar1);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iVar1, Global_1837160);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iVar1, Global_1837201);
		}
	}
}

int func_418(bool bParam0, int iParam1)//Position - 0x81B8C
{
	if (bParam0 != -1)
	{
		return __LIB_1__::func_168(bParam0, __LIB_1__::func_169(iParam1));
	}
	return 0;
}

void func_419(bool bParam0, var uParam1, int iParam2, int iParam3, int iParam4, var uParam5, var uParam6, var uParam7, int iParam8, int iParam9, int iParam10, var uParam11)//Position - 0x8880B
{
	int iVar0;
	int iVar1;
	if (__LIB_1__::func_140() && !__LIB_1__::func_153())
	{
		return;
	}
	if (!Global_2715699.f_5163.f_813)
	{
		iVar0 = 0;
		while (iVar0 <= 31)
		{
			Global_2715699.f_5163[iVar0] = __LIB_0__::func_162();
			Global_2715699.f_5163.f_714[iVar0] = 0;
			iVar0++;
		}
		Global_2715699.f_5163.f_813 = 1;
	}
	if (bParam0 != __LIB_0__::func_162())
	{
		iVar1 = bParam0;
		if (__LIB_1__::func_693(bParam0, 0, 1))
		{
			Global_2715699.f_5163[iVar1] = bParam0;
			Global_2715699.f_5163.f_33[iVar1 /*13*/] = { __LIB_1__::func_696(Global_2715699.f_5163[iVar1]) };
			Global_2715699.f_5163.f_483[iVar1] = uParam1;
			Global_2715699.f_5163.f_516[iVar1] = iParam2;
			Global_2715699.f_5163.f_615[iVar1] = uParam5;
			Global_2715699.f_5163.f_648[iVar1] = uParam6;
			Global_2715699.f_5163.f_681[iVar1] = uParam7;
			Global_2715699.f_5163.f_714[iVar1] = iParam8;
			Global_2715699.f_5163.f_747[iVar1] = iParam9;
			Global_2715699.f_5163.f_780[iVar1] = iParam10;
			Global_2715699.f_5163.f_549[iVar1] = iParam3;
			Global_2715699.f_5163.f_582[iVar1] = iParam4;
			Global_2715699.f_5163.f_450[iVar1] = uParam11;
		}
	}
}

void func_420(int iParam0, bool bParam1)//Position - 0xB7C71
{
	__LIB_1__::func_354(9908, iParam0, -1, 1, 0);
	if (bParam1)
	{
		__LIB_1__::func_333(-1713398555, 12, 0);
	}
}

void func_421(bool bParam0, bool bParam1)//Position - 0xB9005
{
	int iVar0;
	iVar0 = __LIB_1__::func_360(9511, -1, 0);
	if (bParam0)
	{
		MISC::SET_BIT(&iVar0, 12);
		MISC::SET_BIT(&(Global_1975224[PLAYER::PLAYER_ID() /*53*/].f_1), 12);
	}
	else
	{
		MISC::CLEAR_BIT(&iVar0, 12);
		MISC::CLEAR_BIT(&(Global_1975224[PLAYER::PLAYER_ID() /*53*/].f_1), 12);
	}
	__LIB_1__::func_354(9511, iVar0, -1, 1, 0);
	if (bParam1)
	{
		__LIB_1__::func_333(-1713398555, 18, 0);
	}
}

void func_422(bool bParam0)//Position - 0xB90C8
{
	int iVar0;
	iVar0 = __LIB_1__::func_360(9511, -1, 0);
	MISC::CLEAR_BIT(&iVar0, 0);
	MISC::CLEAR_BIT(&(Global_1975224[PLAYER::PLAYER_ID() /*53*/].f_1), 0);
	__LIB_1__::func_354(9511, iVar0, -1, 1, 0);
	if (bParam0)
	{
		__LIB_1__::func_333(-1713398555, 18, 0);
	}
}

int func_423()//Position - 0xC929C
{
	if (__LIB_3__::func_719())
	{
		if (__LIB_16__::func_272() == 14 || __LIB_16__::func_272() == 15)
		{
			if (Global_262145.f_9177 /* Tunable: H2_ELITE_TARGET_SILO_JOB_HEADSHOTS */ > -1)
			{
				return Global_262145.f_9177 /* Tunable: H2_ELITE_TARGET_SILO_JOB_HEADSHOTS */;
			}
		}
	}
	else if (__LIB_2__::func_306())
	{
		if (Global_1966500 == 3)
		{
			return Global_262145.f_28767 /* Tunable: 1974749370 */;
		}
	}
	return Global_4718592.f_162998;
}

int func_424()//Position - 0xC932B
{
	if (__LIB_3__::func_719())
	{
		if (__LIB_16__::func_272() == 14 || __LIB_16__::func_272() == 15)
		{
			if (Global_262145.f_9178 /* Tunable: H2_ELITE_TARGET_SILO_JOB_HACKING_MISTAKES */ > -1)
			{
				return Global_262145.f_9178 /* Tunable: H2_ELITE_TARGET_SILO_JOB_HACKING_MISTAKES */;
			}
		}
	}
	else if (__LIB_2__::func_306())
	{
		if (Global_1966500 == 1)
		{
			return Global_262145.f_28766 /* Tunable: -1372714135 */;
		}
	}
	return Global_4718592.f_162999;
}

var func_425(int iParam0)//Position - 0xC9BBD
{
	int iVar0;
	if (Global_1941273[iParam0 /*8*/].f_1 == -1)
	{
		iVar0 = __LIB_1__::func_360(__LIB_18__::func_359(iParam0), -1, 0);
		if (iVar0 == -1)
		{
			__LIB_25__::func_664(iParam0, 0);
			iVar0 = 0;
		}
		Global_1941273[iParam0 /*8*/].f_1 = iVar0;
	}
	return Global_1941273[iParam0 /*8*/].f_1;
}

void func_426(var uParam0, bool bParam1, var uParam2, var uParam3, int iParam4)//Position - 0xCA36D
{
	if (*uParam0 != -1 && BitTest((*uParam3)[__LIB_13__::func_437(bParam1)], __LIB_18__::func_400(bParam1)))
	{
		if (__LIB_10__::func_833(iParam4))
		{
			if (HUD::IS_MP_GAMER_TAG_ACTIVE(*uParam0))
			{
				HUD::SET_MP_GAMER_TAG_VISIBILITY(*uParam0, iParam4, false, 0);
				HUD::REMOVE_MP_GAMER_TAG(*uParam0);
				MISC::CLEAR_BIT(uParam2[__LIB_13__::func_437(bParam1)], __LIB_18__::func_400(bParam1));
				MISC::CLEAR_BIT(uParam3[__LIB_13__::func_437(bParam1)], __LIB_18__::func_400(bParam1));
			}
		}
	}
}

void func_427(var uParam0)//Position - 0xCA3ED
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		__LIB_0__::func_621(uParam0[iVar0 /*8*/]);
		iVar0++;
	}
}

void func_428()//Position - 0x112657
{
	__LIB_25__::func_320();
	__LIB_25__::func_319();
	__LIB_25__::func_318();
}

void func_429(var uParam0, char* sParam1, char* sParam2, bool bParam3, int iParam4)//Position - 0x11CF36
{
	if (bParam3)
	{
		sParam2 = "HUD_COLOUR_BLACK" /* GXT: Black */;
	}
	if (__LIB_0__::func_177())
	{
		if (Global_2715699.f_3479)
		{
			sParam2 = "HUD_COLOUR_HARK";
		}
	}
	__LIB_1__::func_62(uParam0, sParam1);
	HUD::RESET_GLOBAL_ACTIONSCRIPT_FLAG(10);
	if (*uParam0 != 0 && GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "CREATE_STAT_WALL");
		GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam1);
		GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
		GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam2);
		GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
		if (iParam4 > 0 && iParam4 <= 3)
		{
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam4);
		}
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
	if (uParam0->f_1 != 0 && GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_1))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_1, "CREATE_STAT_WALL");
		GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam1);
		GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
		GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam2);
		GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
		if (iParam4 > 0 && iParam4 <= 3)
		{
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam4);
		}
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
	if (uParam0->f_2 != 0 && GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_2))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_2, "CREATE_STAT_WALL");
		GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam1);
		GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
		GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam2);
		GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
		if (iParam4 > 0 && iParam4 <= 3)
		{
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam4);
		}
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

struct<16> func_430(bool bParam0)//Position - 0x11D099
{
	struct<16> Var0;
	struct<13> Var1;
	struct<35> Var2;
	if (__LIB_1__::func_693(bParam0, 0, 1))
	{
		Var1 = { __LIB_1__::func_696(bParam0) };
		if (__LIB_1__::func_87(&Var1))
		{
			Var2 = { __LIB_2__::func_60(bParam0) };
			Var0 = { Var2.f_1 };
		}
	}
	return Var0;
}

void func_431(var uParam0, int iParam1)//Position - 0x129692
{
	bool bVar0;
	struct<13> Var1;
	int iVar2;
	if (iParam1 > -1 && iParam1 < 16)
	{
		if (uParam0->f_402[iParam1] > -1 && uParam0->f_402[iParam1] < 32)
		{
			bVar0 = PLAYER::INT_TO_PLAYERINDEX(uParam0->f_402[iParam1]);
			if (__LIB_1__::func_693(bVar0, 0, 1))
			{
				Var1 = { __LIB_1__::func_696(bVar0) };
				if (NETWORK::NETWORK_CAN_COMMUNICATE_WITH_GAMER(&Var1))
				{
					if (NETWORK::NETWORK_IS_GAMER_TALKING(&Var1))
					{
						iVar2 = 2;
					}
					else
					{
						iVar2 = 3;
					}
				}
				else if (NETWORK::NETWORK_IS_GAMER_MUTED_BY_ME(&Var1))
				{
					iVar2 = 1;
				}
				else
				{
					iVar2 = 0;
				}
				if (uParam0->f_1179[iParam1] != iVar2)
				{
					switch (iVar2)
					{
						case 0:
							__LIB_1__::func_107(uParam0, 1, iParam1);
							break;
						case 1:
							__LIB_1__::func_107(uParam0, 4, iParam1);
							break;
						case 2:
							__LIB_1__::func_107(uParam0, 3, iParam1);
							break;
						case 3:
							__LIB_1__::func_107(uParam0, 2, iParam1);
							break;
					}
					uParam0->f_1179[iParam1] = iVar2;
				}
			}
		}
	}
}

bool func_432(int iParam0)//Position - 0x12B5FC
{
	bool bVar0;
	bVar0 = __LIB_0__::func_162();
	if (Global_1922981[iParam0 /*42*/] != -1)
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(Global_1922981[iParam0 /*42*/])))
		{
			bVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(Global_1922981[iParam0 /*42*/]));
		}
	}
	if (bVar0 != __LIB_0__::func_162())
	{
	}
	return bVar0;
}

void func_433(bool bParam0)//Position - 0x12C46A
{
	struct<16> Var0;
	Global_2715699.f_3479 = 0;
	Global_2715699.f_3479.f_1 = 0;
	Global_2715699.f_3479.f_2 = -1f;
	Global_2715699.f_3479.f_3 = -1f;
	Global_2715699.f_3479.f_4[0] = 1;
	Global_2715699.f_3479.f_4[1] = 1;
	Global_2715699.f_3479.f_4[2] = 1;
	Global_2715699.f_3479.f_4[3] = 1;
	Global_2715699.f_3479.f_9 = -1;
	Global_2715699.f_3479.f_10 = -1;
	Global_2715699.f_3479.f_11 = -1;
	Global_2715699.f_3479.f_12 = -1;
	Global_2715699.f_3479.f_13 = -1;
	Global_2715699.f_3479.f_14 = -1;
	Global_2715699.f_3479.f_15 = 0;
	Global_2715699.f_3479.f_16 = -1;
	Global_2715699.f_3479.f_17 = -1;
	Global_2715699.f_3479.f_18 = -1;
	Global_2715699.f_3479.f_19 = -1;
	MISC::CLEAR_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_833), 22);
	Global_2715699.f_3479.f_331 = 0;
	Global_2715699.f_3479.f_20 = 0;
	Global_2715699.f_3479.f_38 = 0;
	Global_2715699.f_3479.f_41 = 0;
	__LIB_18__::func_517(0);
	Global_2715699.f_3479.f_23 = -1;
	__LIB_21__::func_904(0);
	Global_2715699.f_3479.f_28[0] = 0;
	Global_2715699.f_3479.f_28[1] = 0;
	Global_2715699.f_3479.f_31 = 0;
	__LIB_25__::func_302(0);
	Global_2715699.f_3479.f_37 = 0;
	Global_2715699.f_3479.f_33 = 0;
	Global_2715699.f_3479.f_34 = 0;
	Global_2715699.f_3479.f_35 = 0;
	Global_2715699.f_3479.f_36 = 0;
	Global_2715699.f_3479.f_22 = 0;
	Global_2715699.f_3479.f_42[0] = 0;
	Global_2715699.f_3479.f_42[1] = 0;
	Global_2715699.f_3479.f_42[2] = 0;
	Global_2715699.f_3479.f_42[3] = 0;
	Global_2715699.f_3479.f_52 = 0;
	Global_2715699.f_3479.f_60 = { Var0 };
	Global_2715699.f_3479.f_76 = 0;
	Global_2715699.f_3479.f_77 = 0;
	Global_2715699.f_3479.f_78 = 0;
	Global_2715699.f_3479.f_79 = 0;
	Global_2715699.f_3479.f_90 = 1;
	Global_2715699.f_3479.f_91 = 0;
	Global_2715699.f_3479.f_92 = 0;
	Global_2715699.f_3479.f_93 = 0;
	Global_2715699.f_3479.f_94 = 0;
	Global_2715699.f_3479.f_95 = 0;
	Global_2715699.f_3479.f_96 = 0;
	Global_2715699.f_3479.f_97 = 0;
	Global_2715699.f_3479.f_98 = 0;
	Global_2715699.f_3479.f_99 = 0;
	Global_2715699.f_3479.f_100 = 0;
	Global_2715699.f_3479.f_101 = 0;
	Global_2715699.f_3479.f_102 = 0;
	Global_2715699.f_3479.f_103 = 0;
	Global_2715699.f_3479.f_104 = 0;
	Global_2715699.f_3479.f_105 = 0;
	Global_2715699.f_3479.f_106 = 0;
	Global_2715699.f_3479.f_107 = 0;
	Global_2715699.f_3479.f_108 = 0;
	Global_2715699.f_3479.f_109 = 0;
	Global_2715699.f_3479.f_110 = 0;
	Global_2715699.f_3479.f_111 = 0;
	Global_2715699.f_3479.f_122 = 0;
	Global_2715699.f_3479.f_123 = 0;
	Global_2715699.f_3479.f_112 = 0;
	Global_2715699.f_3479.f_113 = 0;
	Global_2715699.f_3479.f_114 = 0;
	Global_2715699.f_3479.f_115 = 0;
	Global_2715699.f_3479.f_116 = 0;
	Global_2715699.f_3479.f_117 = 0;
	Global_2715699.f_3479.f_118 = 0;
	Global_2715699.f_3479.f_119 = 0;
	Global_2715699.f_3479.f_120 = 0;
	Global_2715699.f_3479.f_121 = 0;
	Global_2715699.f_3479.f_124 = 0;
	Global_2715699.f_3479.f_125 = 0;
	Global_2715699.f_3479.f_126 = 0;
	Global_2715699.f_3479.f_127 = 0;
	Global_2715699.f_3479.f_128 = 0;
	Global_2715699.f_3479.f_129 = 0;
	Global_2715699.f_3479.f_130 = 0;
	Global_2715699.f_3479.f_131 = 0;
	Global_2715699.f_3479.f_132 = 0;
	Global_2715699.f_3479.f_133 = 0;
	Global_2715699.f_3479.f_134 = 0;
	Global_2715699.f_3479.f_135 = 0;
	Global_2715699.f_3479.f_136 = 0;
	Global_2715699.f_3479.f_137 = 0;
	Global_2715699.f_3479.f_138 = 0;
	Global_2715699.f_3479.f_139 = 0;
	Global_2715699.f_3479.f_140 = 0;
	Global_2715699.f_3479.f_141 = 0;
	Global_2715699.f_3479.f_142 = 0;
	Global_2715699.f_3479.f_143 = 0;
	Global_2715699.f_3479.f_144 = 0;
	Global_2715699.f_3479.f_147 = 0;
	Global_2715699.f_3479.f_148[0 /*16*/] = { Var0 };
	Global_2715699.f_3479.f_148[1 /*16*/] = { Var0 };
	Global_2715699.f_3479.f_148[2 /*16*/] = { Var0 };
	Global_2715699.f_3479.f_148[3 /*16*/] = { Var0 };
	Global_2715699.f_3479.f_213[0 /*16*/] = { Var0 };
	Global_2715699.f_3479.f_213[1 /*16*/] = { Var0 };
	Global_2715699.f_3479.f_213[2 /*16*/] = { Var0 };
	Global_2715699.f_3479.f_213[3 /*16*/] = { Var0 };
	Global_2715699.f_3479.f_278 = 0;
	Global_2715699.f_3479.f_279 = 0;
	Global_2715699.f_3479.f_280 = { Var0 };
	Global_2715699.f_3479.f_296 = { Var0 };
	Global_2715699.f_3479.f_312 = { Var0 };
	Global_2715699.f_3479.f_328 = -1;
	Global_2715699.f_3479.f_329 = 0;
	Global_2715699.f_3479.f_333 = 0;
	if (bParam0)
	{
		Global_2715699.f_3479.f_330 = 0;
	}
	Global_2715699.f_3479.f_332 = 1;
}

int func_434()//Position - 0x13FF5E
{
	if (Global_1835475 || (__LIB_1__::func_943() && __LIB_3__::func_185(PLAYER::PLAYER_ID(), -1)))
	{
		return 1;
	}
	return 0;
}

bool func_435(int iParam0)//Position - 0x14B763
{
	return __LIB_25__::func_373(HUD::GET_BLIP_SPRITE(iParam0));
}

void func_436(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x14F018
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		(*uParam0)[iVar0 /*2*/] = __LIB_0__::func_591();
		(uParam0[iVar0 /*2*/])->f_1 = -3;
		uParam0->f_70[iVar0] = __LIB_0__::func_162();
		uParam0->f_103[iVar0] = -3;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		uParam0->f_65[iVar0] = 0;
		uParam0->f_136[iVar0] = 0;
		iVar0++;
	}
	uParam0->f_141 = iParam1;
	uParam0->f_142 = iParam2;
	uParam0->f_143 = iParam3;
	uParam0->f_144 = iParam4;
}

void func_437(int iParam0, int iParam1, struct<3> Param2)//Position - 0x16A927
{
	float fVar0;
	float fVar1;
	struct<3> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_4718592.f_658[iParam0 /*22957*/].f_6781[iParam1 /*3*/], Global_4718592.f_658[iParam0 /*22957*/].f_6833[iParam1 /*3*/], true);
	fVar1 = __LIB_0__::func_932(Global_4718592.f_658[iParam0 /*22957*/].f_6781[iParam1 /*3*/], Global_4718592.f_658[iParam0 /*22957*/].f_6833[iParam1 /*3*/]);
	Var2 = { Global_4718592.f_658[iParam0 /*22957*/].f_6885[iParam1], fVar0, 0.85f };
	HUD::GET_HUD_COLOUR(12, &iVar3, &iVar4, &iVar5, &iVar6);
	GRAPHICS::DRAW_MARKER(43, Param2 + Vector(-0.25f, 0f, 0f), 0f, 0f, 0f, 0f, 0f, fVar1, Var2, iVar3, iVar4, iVar5, iVar6, false, false, 2, false, 0, 0, false);
}

void func_438(int iParam0, bool bParam1, bool bParam2)//Position - 0x16BD5E
{
	if (bParam1)
	{
		if (!__LIB_1__::func_686(iParam0, 8, 1))
		{
			__LIB_2__::func_911(iParam0, 8, 1);
		}
		if (bParam2)
		{
			if (!__LIB_1__::func_686(iParam0, 30, 1))
			{
				__LIB_2__::func_911(iParam0, 30, 1);
			}
		}
		else if (__LIB_1__::func_686(iParam0, 30, 1))
		{
			__LIB_2__::func_943(iParam0, 30, 1);
		}
	}
	else
	{
		if (__LIB_1__::func_686(iParam0, 8, 1))
		{
			__LIB_2__::func_943(iParam0, 8, 1);
		}
		if (__LIB_1__::func_686(iParam0, 30, 1))
		{
			__LIB_2__::func_943(iParam0, 30, 1);
		}
	}
}

void func_439(var uParam0, int iParam1, int iParam2, int iParam3)//Position - 0x1711B8
{
	__LIB_25__::func_488(uParam0, iParam1, iParam2, iParam3);
	HUD::SHOW_OUTLINE_INDICATOR_ON_BLIP(*uParam0, true);
}

void func_440(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0x182098
{
	if (!__LIB_0__::func_625())
	{
		return;
	}
	if (__LIB_18__::func_345(bParam0) || __LIB_18__::func_726(bParam0))
	{
		return;
	}
	if (Global_1965847 == bParam0)
	{
		return;
	}
	if (bParam0 < 32)
	{
		if (!BitTest(Global_1965626, bParam0))
		{
			MISC::SET_BIT(&Global_1965626, bParam0);
			if (bParam1)
			{
				MISC::SET_BIT(&Global_1965628, bParam0);
			}
			if (bParam2)
			{
				MISC::SET_BIT(&Global_1965632, bParam0);
			}
			if (bParam3)
			{
				MISC::SET_BIT(&Global_1965634, bParam0);
			}
			if (bParam4)
			{
				__LIB_18__::func_344(0, bParam0);
			}
			Global_1965943[bParam0] = NETWORK::GET_CLOUD_TIME_AS_INT();
		}
		else if (!bParam1)
		{
		}
	}
	else if (!BitTest(Global_1965627, (bParam0 - 32)))
	{
		MISC::SET_BIT(&Global_1965627, (bParam0 - 32));
		if (bParam1)
		{
			MISC::SET_BIT(&Global_1965629, (bParam0 - 32));
		}
		if (bParam2)
		{
			MISC::SET_BIT(&Global_1965633, (bParam0 - 32));
		}
		if (bParam3)
		{
			MISC::SET_BIT(&Global_1965635, (bParam0 - 32));
		}
		if (bParam4)
		{
			__LIB_18__::func_344(0, bParam0);
		}
		Global_1965943[bParam0] = NETWORK::GET_CLOUD_TIME_AS_INT();
	}
	else if (!bParam1)
	{
	}
}

int func_441(int iParam0, int iParam1)//Position - 0x1840B8
{
	char* sVar0;
	sVar0 = __LIB_19__::func_195(iParam0);
	STREAMING::REQUEST_NAMED_PTFX_ASSET(sVar0);
	if (STREAMING::HAS_NAMED_PTFX_ASSET_LOADED(sVar0))
	{
		GRAPHICS::USE_PARTICLE_FX_ASSET(sVar0);
		GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY(__LIB_19__::func_194(iParam0), iParam1, __LIB_19__::func_193(iParam0), __LIB_19__::func_192(iParam0), __LIB_19__::func_191(iParam0), false, false, false);
		return 1;
	}
	return 0;
}

int func_442(struct<3> Param0, float fParam1)//Position - 0x18DA54
{
	float fVar0;
	float fVar1;
	if (__LIB_3__::func_100())
	{
		if (!__LIB_9__::func_854())
		{
			if (CAM::IS_SPHERE_VISIBLE(Param0, fParam1))
			{
				if (GRAPHICS::GET_SCREEN_COORD_FROM_WORLD_COORD(Param0, &fVar0, &fVar1))
				{
					if (((fVar0 > 0.15f && fVar0 < 0.85f) && fVar1 > 0.1f) && fVar1 < 0.9f)
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

struct<2> func_443(struct<2> Param0)//Position - 0x191FBE
{
	struct<2> Var0;
	float fVar1;
	float fVar2;
	fVar1 = __LIB_25__::func_461(Param0);
	if (fVar1 != 0f)
	{
		fVar2 = (1f / fVar1);
		Var0 = { __LIB_16__::func_768(Param0, fVar2) };
	}
	else
	{
		Var0.f_0 = 0f;
		Var0.f_1 = 0f;
	}
	return Var0;
}

bool func_444(var uParam0, int iParam1)//Position - 0x1AF2C4
{
	return (__LIB_25__::func_426(uParam0, iParam1) && __LIB_25__::func_427(uParam0, iParam1));
}

void func_445(var uParam0, int iParam1)//Position - 0x1AF7A6
{
	int iVar0;
	int iVar1;
	switch (iParam1)
	{
		case 188:
			if (BitTest(uParam0->f_752, 7))
			{
				__LIB_25__::func_429(uParam0, uParam0->f_753);
			}
			uParam0->f_753 = (uParam0->f_753 - 1);
			if (uParam0->f_753 < 0)
			{
				if (uParam0->f_753 == -1)
				{
					uParam0->f_753 = 7;
				}
				else
				{
					uParam0->f_753 = 7;
				}
			}
			uParam0->f_1 = 1;
			if (BitTest(uParam0->f_752, 7))
			{
				__LIB_25__::func_429(uParam0, uParam0->f_753);
				__LIB_25__::func_431(uParam0);
			}
			AUDIO::PLAY_SOUND_FRONTEND(-1, "Cursor_Move", uParam0->f_741, true);
			break;
		case 187:
			if (BitTest(uParam0->f_752, 7))
			{
				__LIB_25__::func_429(uParam0, uParam0->f_753);
			}
			uParam0->f_753++;
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
			uParam0->f_1 = 1;
			if (BitTest(uParam0->f_752, 7))
			{
				__LIB_25__::func_429(uParam0, uParam0->f_753);
				__LIB_25__::func_431(uParam0);
			}
			AUDIO::PLAY_SOUND_FRONTEND(-1, "Cursor_Move", uParam0->f_741, true);
			break;
		case 189:
			if (BitTest(uParam0->f_752, 7))
			{
				iVar0 = 0;
				while (iVar0 <= 7)
				{
					if (BitTest(uParam0->f_766[uParam0->f_755 /*25*/][iVar0 /*3*/].f_1, 0))
					{
						uParam0->f_766[uParam0->f_755 /*25*/][iVar0 /*3*/] = (uParam0->f_766[uParam0->f_755 /*25*/][iVar0 /*3*/] - 1);
						if (uParam0->f_766[uParam0->f_755 /*25*/][iVar0 /*3*/] < 0)
						{
							uParam0->f_766[uParam0->f_755 /*25*/][iVar0 /*3*/] = 7;
						}
					}
					iVar0++;
				}
				__LIB_25__::func_431(uParam0);
				AUDIO::PLAY_SOUND_FRONTEND(-1, "Tile_select", uParam0->f_741, true);
			}
			break;
		case 190:
			if (BitTest(uParam0->f_752, 7))
			{
				iVar1 = 0;
				while (iVar1 <= 7)
				{
					if (BitTest(uParam0->f_766[uParam0->f_755 /*25*/][iVar1 /*3*/].f_1, 0))
					{
						uParam0->f_766[uParam0->f_755 /*25*/][iVar1 /*3*/]++;
						if (uParam0->f_766[uParam0->f_755 /*25*/][iVar1 /*3*/] >= 8)
						{
							uParam0->f_766[uParam0->f_755 /*25*/][iVar1 /*3*/] = 0;
						}
					}
					iVar1++;
				}
				__LIB_25__::func_431(uParam0);
				AUDIO::PLAY_SOUND_FRONTEND(-1, "Tile_Select", uParam0->f_741, true);
			}
			break;
	}
}

int func_446(var uParam0, var uParam1)//Position - 0x1AFDFB
{
	int iVar0;
	struct<8> Var1;
	if (!BitTest(uParam0->f_752, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 7)
	{
		if (BitTest(uParam0->f_752, 7))
		{
			Var1 = { __LIB_25__::func_434(uParam0->f_757[iVar0]) };
		}
		else
		{
			MemCopy(&Var1, {__LIB_25__::func_433(uParam0->f_757[iVar0])}, 8);
		}
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(&Var1, false);
		if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED(&Var1))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

void func_447(var uParam0, int iParam1)//Position - 0x1AFF93
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 7)
	{
		uParam0->f_766[iParam1 /*25*/][iVar0 /*3*/].f_2 = iVar0;
		uParam0->f_766[iParam1 /*25*/][iVar0 /*3*/] = iVar0;
		uParam0->f_766[iParam1 /*25*/][iVar0 /*3*/].f_1 = 0;
		if (__LIB_25__::func_436(uParam0->f_757[iParam1], iVar0))
		{
			MISC::SET_BIT(&(uParam0->f_766[iParam1 /*25*/][iVar0 /*3*/].f_1), 1);
		}
		iVar0++;
	}
}

int func_448(var uParam0, var uParam1)//Position - 0x1B2167
{
	int iVar0;
	struct<6> Var1;
	if (!BitTest(uParam0->f_752, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		Var1 = { __LIB_25__::func_444(uParam0->f_757[iVar0]) };
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(&Var1, false);
		if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED(&Var1))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

void func_449(var uParam0, int iParam1)//Position - 0x1B2244
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 7)
	{
		uParam0->f_766[iParam1 /*25*/][iVar0 /*3*/].f_2 = iVar0;
		uParam0->f_766[iParam1 /*25*/][iVar0 /*3*/] = iVar0;
		uParam0->f_766[iParam1 /*25*/][iVar0 /*3*/].f_1 = 0;
		if (__LIB_25__::func_445(uParam0->f_757[iParam1], iVar0))
		{
			MISC::SET_BIT(&(uParam0->f_766[iParam1 /*25*/][iVar0 /*3*/].f_1), 1);
		}
		iVar0++;
	}
}

void func_450(var uParam0)//Position - 0x1B4542
{
	if (!__LIB_25__::func_456(uParam0, uParam0->f_756, uParam0->f_753))
	{
		MISC::SET_BIT(&(uParam0->f_752), 1);
		__LIB_25__::func_455(uParam0);
	}
}

void func_451(var uParam0)//Position - 0x1CC0C1
{
	int iVar0;
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST((*uParam0)[0]))
	{
		iVar0 = NETWORK::NET_TO_OBJ((*uParam0)[0]);
		if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID((*uParam0)[0]))
		{
			OBJECT::DELETE_OBJECT(&iVar0);
		}
		else
		{
			__LIB_1__::func_518(uParam0[0]);
		}
		if (__LIB_6__::func_273(PLAYER::PLAYER_ID()))
		{
			NETWORK::RESERVE_LOCAL_NETWORK_MISSION_OBJECTS((NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(false, 1) - 1));
		}
		else
		{
			NETWORK::RESERVE_NETWORK_MISSION_OBJECTS((NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(false, 0) - 1));
		}
	}
}

int func_452(int* iParam0, int iParam1)//Position - 0x1CED2D
{
	int iVar0;
	if (BitTest(*iParam0, 8))
	{
		STREAMING::REQUEST_ANIM_DICT(__LIB_5__::func_93());
		STREAMING::REQUEST_MODEL(joaat("ch_prop_laserdrill_01a"));
	}
	else
	{
		STREAMING::REQUEST_ANIM_DICT(__LIB_5__::func_94());
		STREAMING::REQUEST_MODEL(joaat("ch_prop_ch_heist_drill"));
	}
	STREAMING::REQUEST_MODEL(joaat("hei_prop_hei_drill_hole"));
	STREAMING::REQUEST_MODEL(iParam1);
	iVar0 = 1;
	if (BitTest(*iParam0, 8))
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
	if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iParam0->f_40))
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

void func_453(int* iParam0, int iParam1)//Position - 0x1CF170
{
	if (BitTest(*iParam0, 8))
	{
		STREAMING::REQUEST_ANIM_DICT(__LIB_5__::func_93());
		STREAMING::REQUEST_MODEL(joaat("ch_prop_laserdrill_01a"));
		if (iParam0->f_40 == 0)
		{
			iParam0->f_40 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("VAULT_LASER");
		}
		AUDIO::REQUEST_SCRIPT_AUDIO_BANK("DLC_HEIST3\HEIST_FINALE_LASER_DRILL", false, -1);
	}
	else
	{
		STREAMING::REQUEST_ANIM_DICT(__LIB_5__::func_94());
		STREAMING::REQUEST_MODEL(joaat("ch_prop_ch_heist_drill"));
		if (iParam0->f_40 == 0)
		{
			iParam0->f_40 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("VAULT_DRILL");
		}
		AUDIO::REQUEST_SCRIPT_AUDIO_BANK("DLC_MPHEIST\HEIST_FLEECA_DRILL", false, -1);
		AUDIO::REQUEST_SCRIPT_AUDIO_BANK("DLC_MPHEIST\HEIST_FLEECA_DRILL_2", false, -1);
	}
	STREAMING::REQUEST_MODEL(iParam1);
	STREAMING::REQUEST_MODEL(joaat("hei_prop_hei_drill_hole"));
	STREAMING::REQUEST_NAMED_PTFX_ASSET("scr_ch_finale");
	HUD::REQUEST_ADDITIONAL_TEXT("HACK", 3);
}

float func_454()//Position - 0x1DE869
{
	return ((1920f / 1080f) / __LIB_20__::func_799());
}

void func_455(var uParam0, float fParam1, float fParam2)//Position - 0x1E1947
{
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
	{
		if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 237 /*INPUT_CURSOR_ACCEPT*/))
		{
			switch (uParam0->f_1)
			{
				case 0:
					uParam0->f_15 = __LIB_0__::func_331((uParam0->f_15 + 0.1f), fParam1, fParam2);
					break;
				case 1:
					uParam0->f_15 = __LIB_0__::func_331((uParam0->f_15 + 0.09f), fParam1, fParam2);
					break;
				case 2:
					uParam0->f_15 = __LIB_0__::func_331((uParam0->f_15 + 0.08f), fParam1, fParam2);
					break;
				}
		}
	}
	else if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/))
	{
		switch (uParam0->f_1)
		{
			case 0:
				uParam0->f_15 = __LIB_0__::func_331((uParam0->f_15 + 0.1f), fParam1, fParam2);
				break;
			case 1:
				uParam0->f_15 = __LIB_0__::func_331((uParam0->f_15 + 0.09f), fParam1, fParam2);
				break;
			case 2:
				uParam0->f_15 = __LIB_0__::func_331((uParam0->f_15 + 0.08f), fParam1, fParam2);
				break;
			}
	}
	switch (uParam0->f_1)
	{
		case 0:
			uParam0->f_15 = __LIB_0__::func_331((uParam0->f_15 - ((0.01f * 30f) * SYSTEM::TIMESTEP())), fParam1, fParam2);
			break;
		case 1:
			uParam0->f_15 = __LIB_0__::func_331((uParam0->f_15 - ((0.0125f * 30f) * SYSTEM::TIMESTEP())), fParam1, fParam2);
			break;
		case 2:
			uParam0->f_15 = __LIB_0__::func_331((uParam0->f_15 - ((0.0135f * 30f) * SYSTEM::TIMESTEP())), fParam1, fParam2);
			break;
	}
	__LIB_17__::func_208(&(uParam0->f_14), uParam0->f_15, 0.02f, 1);
	uParam0->f_14 = __LIB_0__::func_331(uParam0->f_14, fParam1, fParam2);
}

bool func_456(bool bParam0)//Position - 0x1FC01E
{
	return __LIB_15__::func_303(Global_2678393.f_855[bParam0], &(Global_2678393.f_396), bParam0);
}

int func_457(int iParam0, int iParam1)//Position - 0x1FCA41
{
	if (iParam0 != -1)
	{
		switch (iParam1)
		{
			case 1:
			case 2:
			case 3:
			case 4:
				if (__LIB_25__::func_497(iParam0, iParam1) && __LIB_18__::func_308(iParam0, iParam1))
				{
					return 1;
				}
				break;
			case 6:
				return BitTest(Global_1970897[iParam0 /*68*/].f_18, 16);
			case 7:
				return BitTest(Global_1970897[iParam0 /*68*/].f_18, 17);
			case 8:
				return BitTest(Global_1970897[iParam0 /*68*/].f_18, 18);
			}
	}
	return 0;
}

int func_458(bool bParam0, int iParam1, int iParam2)//Position - 0x1FCF4B
{
	var uVar0;
	int iVar1;
	int iVar2;
	iVar2 = bParam0;
	if (iVar2 != -1)
	{
		if (__LIB_10__::func_195(iParam1))
		{
			uVar0 = __LIB_1__::func_176(iParam1);
			if (bParam0 == PLAYER::PLAYER_ID() && iParam2)
			{
				iVar1 = __LIB_1__::func_360(5662, -1, 0);
			}
			else
			{
				iVar1 = Global_1888862[iVar2 /*120*/].f_38.f_23;
			}
		}
		else if (__LIB_10__::func_194(iParam1))
		{
			uVar0 = __LIB_10__::func_193(iParam1);
			if (bParam0 == PLAYER::PLAYER_ID() && iParam2)
			{
				iVar1 = __LIB_1__::func_360(6168, -1, 0);
			}
			else
			{
				iVar1 = Global_1888862[iVar2 /*120*/].f_38.f_24;
			}
		}
		return BitTest(iVar1, uVar0);
	}
	return 0;
}

int func_459(bool bParam0, int iParam1)//Position - 0x1FD619
{
	if (bParam0 != __LIB_0__::func_162())
	{
		if (bParam0 == PLAYER::PLAYER_ID() && iParam1)
		{
			if (BitTest(__LIB_1__::func_360(6427, -1, 0), 0))
			{
				return 0;
			}
			if (BitTest(__LIB_1__::func_360(6427, -1, 0), 1))
			{
				return 1;
			}
			if (BitTest(__LIB_1__::func_360(6427, -1, 0), 2))
			{
				return 2;
			}
		}
		else
		{
			if (BitTest(Global_1888862[bParam0 /*120*/].f_38.f_26, 0))
			{
				return 0;
			}
			if (BitTest(Global_1888862[bParam0 /*120*/].f_38.f_26, 1))
			{
				return 1;
			}
			if (BitTest(Global_1888862[bParam0 /*120*/].f_38.f_26, 2))
			{
				return 2;
			}
		}
	}
	return -1;
}

bool func_460(int iParam0)//Position - 0x1FDF56
{
	return Global_1892703[iParam0 /*599*/].f_10.f_177 != __LIB_0__::func_162();
}

bool func_461()//Position - 0x1FE41C
{
	return __LIB_4__::func_959(4);
}

int func_462(bool bParam0)//Position - 0x1FE565
{
	if (__LIB_0__::func_114())
	{
		return 0;
	}
	if (Global_262145.f_23136 /* Tunable: 922784477 */ == 1)
	{
		return 0;
	}
	if (Global_1946250.f_4519 != -1 && __LIB_0__::func_172(Global_1946250.f_4519) != 9)
	{
		return 0;
	}
	if (__LIB_2__::func_72(bParam0, 0))
	{
		if (__LIB_6__::func_63(__LIB_2__::func_39(bParam0)))
		{
			return 1;
		}
		return 0;
	}
	if (__LIB_6__::func_63(bParam0))
	{
		return 1;
	}
	return 0;
}

int func_463(bool bParam0)//Position - 0x1FE709
{
	if (bParam0 == __LIB_0__::func_162())
	{
		return 0;
	}
	return Global_1853348[bParam0 /*834*/].f_267.f_278.f_5;
}

int func_464(bool bParam0)//Position - 0x1FEE6D
{
	bool bVar0;
	if (__LIB_1__::func_744(bParam0))
	{
		bVar0 = bParam0;
		if (Global_2689235[bVar0 /*453*/].f_71.f_3 != 0)
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_465(struct<3> Param0, float fParam1)//Position - 0x217F0D
{
	struct<3> Var0;
	Var0 = { MISC::GET_RANDOM_FLOAT_IN_RANGE(-1f, 1f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-1f, 1f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-1f, 1f) };
	return Param0 + __LIB_0__::func_952(Var0, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, fParam1));
}

int func_466(int iParam0)//Position - 0x226F34
{
	switch (iParam0)
	{
		case 422:
		case 353:
		case 427:
		case 426:
		case 424:
		case 423:
		case 533:
		case 534:
		case 564:
		case 589:
		case 460:
		case 612:
		case 613:
		case 633:
		case 760:
			return 1;
			break;
	}
	if (iParam0 == __LIB_23__::func_461(__LIB_1__::func_839(), 0, 0))
	{
		return 1;
	}
	return 0;
}

int func_467(int iParam0)//Position - 0x2270C7
{
	int iVar0;
	iVar0 = PED::GET_VEHICLE_PED_IS_IN(iParam0, false);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return __LIB_23__::func_461(ENTITY::GET_ENTITY_MODEL(iVar0), !PED::IS_PED_A_PLAYER(iParam0), 0);
	}
	return HUD::GET_STANDARD_BLIP_ENUM_ID();
}

int func_468(var uParam0, bool bParam1, var uParam2, var uParam3, int iParam4, int iParam5, char* sParam6, int iParam7, int iParam8, bool bParam9)//Position - 0x241E76
{
	int iVar0;
	int iVar1;
	if (!HUD::IS_MP_GAMER_TAG_MOVIE_ACTIVE())
	{
		return 0;
	}
	if (__LIB_10__::func_833(iParam7))
	{
		if (__LIB_0__::func_951(iParam4))
		{
			if (BitTest((*uParam2)[__LIB_13__::func_437(bParam1)], __LIB_18__::func_400(bParam1)))
			{
				if (bParam9)
				{
					HUD::SET_MP_GAMER_TAG_VISIBILITY(*uParam0, iParam7, false, 0);
					MISC::CLEAR_BIT(uParam2[__LIB_13__::func_437(bParam1)], __LIB_18__::func_400(bParam1));
				}
			}
			if (bParam9)
			{
				return 0;
			}
		}
		if (!BitTest((*uParam3)[__LIB_13__::func_437(bParam1)], __LIB_18__::func_400(bParam1)))
		{
			if (*uParam0 != -1)
			{
				if (HUD::IS_MP_GAMER_TAG_ACTIVE(*uParam0))
				{
					HUD::REMOVE_MP_GAMER_TAG(*uParam0);
				}
				else if (HUD::IS_MP_GAMER_TAG_FREE(*uParam0))
				{
					*uParam0 = -1;
					MISC::SET_BIT(uParam3[__LIB_13__::func_437(bParam1)], __LIB_18__::func_400(bParam1));
				}
			}
		}
		if (*uParam0 < 0)
		{
			if (MISC::IS_STRING_NULL(sParam6) || MISC::ARE_STRINGS_EQUAL(sParam6, ""))
			{
				*uParam0 = HUD::CREATE_FAKE_MP_GAMER_TAG(NETWORK::NET_TO_PED(iParam4), "", false, false, "", 0);
			}
			else
			{
				*uParam0 = HUD::CREATE_FAKE_MP_GAMER_TAG(NETWORK::NET_TO_PED(iParam4), sParam6, false, false, "", 0);
			}
		}
		else if (HUD::IS_MP_GAMER_TAG_ACTIVE(*uParam0) && BitTest((*uParam3)[__LIB_13__::func_437(bParam1)], __LIB_18__::func_400(bParam1)))
		{
			iVar0 = 0;
			if (BitTest(Global_4980736.f_94390[bParam1 /*1004*/].f_538, 8))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(NETWORK::NET_TO_PED(iParam4), false))
				{
					iVar1 = PED::GET_VEHICLE_PED_IS_IN(NETWORK::NET_TO_PED(iParam4), false);
					if (!ENTITY::IS_ENTITY_OCCLUDED(iVar1))
					{
						iVar0 = 1;
					}
				}
			}
			if (!ENTITY::IS_ENTITY_OCCLUDED(NETWORK::NET_TO_ENT(iParam4)) || iVar0)
			{
				if (!BitTest((*uParam2)[__LIB_13__::func_437(bParam1)], __LIB_18__::func_400(bParam1)))
				{
					HUD::SET_MP_GAMER_TAG_VISIBILITY(*uParam0, iParam7, true, 0);
					if (iParam5 != -1 && iParam8 == 1)
					{
						HUD::SET_MP_GAMER_TAG_COLOUR(*uParam0, iParam7, __LIB_18__::func_205(iParam5));
					}
					else
					{
						HUD::SET_MP_GAMER_TAG_COLOUR(*uParam0, iParam7, iParam8);
					}
					MISC::SET_BIT(uParam2[__LIB_13__::func_437(bParam1)], __LIB_18__::func_400(bParam1));
					return 1;
				}
				else
				{
					return 1;
				}
			}
			else if (BitTest((*uParam2)[__LIB_13__::func_437(bParam1)], __LIB_18__::func_400(bParam1)))
			{
				HUD::SET_MP_GAMER_TAG_VISIBILITY(*uParam0, iParam7, false, 0);
				MISC::CLEAR_BIT(uParam2[__LIB_13__::func_437(bParam1)], __LIB_18__::func_400(bParam1));
				return 1;
			}
			else
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_469(bool bParam0, struct<3> Param1)//Position - 0x24CC5A
{
	char* sVar0;
	if (Global_4980736.f_36356[bParam0 /*134*/].f_7 == joaat("stt_prop_speakerstack_01a"))
	{
		if (__LIB_25__::func_407(Global_4980736.f_36356[bParam0 /*134*/].f_64, &sVar0))
		{
			if (__LIB_25__::func_406(bParam0, Param1))
			{
				if (Global_4718592 != 2)
				{
					if (BitTest(Global_4980736.f_36356[bParam0 /*134*/].f_21, 22))
					{
						MISC::CLEAR_BIT(&(Global_4980736.f_36356[bParam0 /*134*/].f_21), 22);
						MISC::CLEAR_BIT(&(Global_4980736.f_36356[bParam0 /*134*/].f_21), 23);
					}
				}
				if (!BitTest(Global_4980736.f_36356[bParam0 /*134*/].f_21, 21))
				{
					if (Global_4980736.f_36356[bParam0 /*134*/].f_68 < Global_4980736.f_36356[bParam0 /*134*/].f_67 || Global_4980736.f_36356[bParam0 /*134*/].f_67 == 0)
					{
						if (BitTest(Global_4980736.f_36356[bParam0 /*134*/].f_21, 23))
						{
							if (!BitTest(Global_4980736.f_36356[bParam0 /*134*/].f_21, 22))
							{
								if (__LIB_0__::func_157(0))
								{
									AUDIO::PLAY_SOUND_FROM_COORD(-1, &sVar0, Global_4980736.f_36356[bParam0 /*134*/], "DLC_Stunt_Race_Stinger_Sounds", false, 0, false);
									Global_4980736.f_36356[bParam0 /*134*/].f_68++;
								}
								else
								{
									__LIB_25__::func_405(Global_4980736.f_36356[bParam0 /*134*/].f_64, Global_4980736.f_36356[bParam0 /*134*/], bParam0);
								}
								MISC::SET_BIT(&(Global_4980736.f_36356[bParam0 /*134*/].f_21), 22);
							}
						}
						else if (__LIB_0__::func_157(0))
						{
							AUDIO::PLAY_SOUND_FROM_COORD(-1, &sVar0, Global_4980736.f_36356[bParam0 /*134*/], "DLC_Stunt_Race_Stinger_Sounds", false, 0, false);
							Global_4980736.f_36356[bParam0 /*134*/].f_68++;
						}
						else
						{
							__LIB_25__::func_405(Global_4980736.f_36356[bParam0 /*134*/].f_64, Global_4980736.f_36356[bParam0 /*134*/], bParam0);
						}
						MISC::SET_BIT(&(Global_4980736.f_36356[bParam0 /*134*/].f_21), 21);
					}
				}
			}
			else if (BitTest(Global_4980736.f_36356[bParam0 /*134*/].f_21, 21))
			{
				MISC::CLEAR_BIT(&(Global_4980736.f_36356[bParam0 /*134*/].f_21), 21);
			}
		}
	}
}

void func_470(var uParam0, var uParam1, var uParam2, int* iParam3, int iParam4, int iParam5)//Position - 0x24D7BF
{
	if (AUDIO::HAS_SOUND_FINISHED(*uParam1) && !BitTest(*iParam3, *uParam2))
	{
		if (!Global_1574964 || iParam5)
		{
			if (iParam5 && *uParam1 == -1)
			{
				*uParam1 = AUDIO::GET_SOUND_ID();
			}
			AUDIO::PLAY_SOUND_FROM_ENTITY(*uParam1, __LIB_25__::func_409(*uParam2), *uParam0, __LIB_25__::func_408(*uParam2), false, 0);
			if (__LIB_6__::func_527(15) && *uParam2 == 19)
			{
				if (*iParam4 == -1)
				{
					*iParam4 = AUDIO::GET_SOUND_ID();
				}
				AUDIO::PLAY_SOUND_FROM_COORD(*iParam4, "silo_alarm_loop", 305f, 6301f, -160f, "dlc_xm_silo_finale_sounds", false, 0, false);
			}
			if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("DLC_HEISTS_ALARM_INITIAL_BOOST_SCENE"))
			{
				AUDIO::START_AUDIO_SCENE("DLC_HEISTS_ALARM_INITIAL_BOOST_SCENE");
			}
			if ((MISC::ARE_STRINGS_EQUAL(__LIB_25__::func_409(*uParam2), "Gate_Alarm_Open") || MISC::ARE_STRINGS_EQUAL(__LIB_25__::func_409(*uParam2), "Gate_Alarm_Close")) || MISC::ARE_STRINGS_EQUAL(__LIB_25__::func_409(*uParam2), "missile_system_armed"))
			{
				MISC::SET_BIT(iParam3, *uParam2);
			}
		}
	}
}

int func_471(bool bParam0, var uParam1, bool bParam2)//Position - 0x24FECA
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	iVar0 = __LIB_19__::func_143(uParam1);
	iVar1 = __LIB_19__::func_142(bParam0);
	iVar2 = __LIB_19__::func_141(bParam0);
	if ((iVar0 > -1 && iVar1 != 0) && iVar2 != 0)
	{
		iVar3 = OBJECT::CREATE_OBJECT(iVar1, Global_4980736.f_36356[bParam0 /*134*/], false, false, true);
		ENTITY::SET_ENTITY_ROTATION(iVar3, Global_4980736.f_36356[bParam0 /*134*/].f_3, 2, true);
		(*uParam1)[iVar0] = OBJECT::CREATE_OBJECT(iVar2, Global_4980736.f_36356[bParam0 /*134*/], false, false, true);
		ENTITY::SET_ENTITY_ROTATION((*uParam1)[iVar0], ENTITY::GET_ENTITY_ROTATION(iVar3, 2), 2, true);
		if (Global_4980736.f_36356[bParam0 /*134*/].f_7 == joaat("xm_prop_x17_sub"))
		{
			iVar4 = joaat("xm_prop_x17_sub_extra");
			ENTITY::CREATE_MODEL_SWAP(Global_4980736.f_36356[bParam0 /*134*/], 25f, iVar2, iVar4, true);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar4);
		}
		ENTITY::ATTACH_ENTITY_TO_ENTITY((*uParam1)[iVar0], iVar3, 0, 0f, 0f, 0f, 0f, 0f, 0f, false, false, true, false, 2, true, 0);
		if (bParam2)
		{
			STREAMING::ADD_MODEL_TO_CREATOR_BUDGET(iVar2);
		}
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar2);
		return iVar3;
	}
	iVar5 = OBJECT::CREATE_OBJECT(Global_4980736.f_36356[bParam0 /*134*/].f_7, Global_4980736.f_36356[bParam0 /*134*/], false, false, true);
	return iVar5;
}

void func_472(var uParam0)//Position - 0x261058
{
	if (!BitTest(Global_2714762.f_43.f_4, 8))
	{
		if (__LIB_1__::func_209() || __LIB_1__::func_623())
		{
			if (__LIB_25__::func_371() == -1)
			{
				__LIB_25__::func_351(uParam0);
			}
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_4718592.f_116841[__LIB_25__::func_371() /*6*/])))
			{
				__LIB_25__::func_370(&(Global_4718592.f_116841[__LIB_25__::func_371() /*6*/]));
				__LIB_25__::func_369(Global_4718592.f_116878[__LIB_25__::func_371()]);
				MISC::SET_BIT(&(Global_2714762.f_43.f_4), 8);
			}
		}
	}
}

int func_473()//Position - 0x26111D
{
	if (!__LIB_25__::func_352() == 0 && Global_4538824.f_1)
	{
		return 1;
	}
	return Global_2703735.f_833.f_15;
}

void func_474(bool bParam0, int iParam1, bool bParam2, bool bParam3)//Position - 0x2666C3
{
	var uVar0;
	if (__LIB_3__::func_451(bParam0))
	{
		return;
	}
	if (__LIB_3__::func_440(&(Global_2678393.f_657[bParam0]), &(Global_2678393.f_1020[bParam0]), &(Global_2678393.f_390), bParam2, bParam0, bParam3, &uVar0))
	{
		if (bParam2)
		{
			Global_2678393.f_492[bParam0] = iParam1;
		}
	}
}

int func_475(bool bParam0)//Position - 0x273CD1
{
	if (bParam0 == PLAYER::PLAYER_ID() && !__LIB_10__::func_569())
	{
		return Global_2787940.f_1;
	}
	return Global_2680265.f_1399[bParam0 /*3*/].f_1;
}

int func_476()//Position - 0x27607B
{
	int iVar0;
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		return 0;
	}
	if (BitTest(Global_2815059.f_4660, 30))
	{
		return 0;
	}
	if (BitTest(Global_2815059.f_4660, 14))
	{
		return 0;
	}
	if (__LIB_25__::func_614())
	{
		if (__LIB_25__::func_352() == 0)
		{
			return 0;
		}
	}
	if (Global_100493.f_376 > 0)
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID());
		if (iVar0 >= 0 && iVar0 < 4)
		{
			if (BitTest(Global_4718592.f_658[iVar0 /*22957*/].f_12180, 8))
			{
				return 0;
			}
		}
	}
	if (__LIB_0__::func_983())
	{
		return 0;
	}
	return 1;
}

int func_477(bool bParam0)//Position - 0x27BD0D
{
	int iVar0;
	if (__LIB_2__::func_732(bParam0, 0))
	{
		iVar0 = Global_2689235[bParam0 /*453*/].f_318.f_9;
		if (iVar0 != __LIB_0__::func_162())
		{
			if (!__LIB_6__::func_58(iVar0))
			{
				return 1;
			}
		}
	}
	if (__LIB_2__::func_728(bParam0))
	{
		return 1;
	}
	return 0;
}

int func_478(bool bParam0)//Position - 0x27BD54
{
	int iVar0;
	if (__LIB_2__::func_730(bParam0))
	{
		iVar0 = Global_2689235[bParam0 /*453*/].f_318.f_9;
		if (iVar0 != __LIB_0__::func_162())
		{
			if (!__LIB_1__::func_659(iVar0))
			{
				return 1;
			}
		}
	}
	if (__LIB_2__::func_728(bParam0))
	{
		return 1;
	}
	return 0;
}

int func_479(bool bParam0)//Position - 0x27BD9A
{
	int iVar0;
	if (__LIB_2__::func_731(bParam0))
	{
		iVar0 = Global_2689235[bParam0 /*453*/].f_318.f_9;
		if (iVar0 != __LIB_0__::func_162())
		{
			if (!__LIB_6__::func_62(iVar0))
			{
				return 1;
			}
		}
	}
	if (__LIB_2__::func_729(bParam0))
	{
		return 1;
	}
	return 0;
}

void func_480()//Position - 0x2866C4
{
	struct<2> Var0;
	int iVar1;
	Var0.f_0 = -1358556922;
	Var0.f_1 = PLAYER::PLAYER_ID();
	iVar1 = __LIB_25__::func_337(PLAYER::PLAYER_ID());
	if (!iVar1 == 0)
	{
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 2, iVar1);
	}
}

void func_481(bool bParam0)//Position - 0x28D02D
{
	int iVar0;
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (__LIB_19__::func_376(iVar0))
		{
			MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_809), 3);
			if (bParam0)
			{
				if (VEHICLE::ARE_FOLDING_WINGS_DEPLOYED(iVar0))
				{
					VEHICLE::SET_DEPLOY_FOLDING_WINGS(iVar0, false, false);
				}
			}
			else if (!VEHICLE::ARE_FOLDING_WINGS_DEPLOYED(iVar0))
			{
				VEHICLE::SET_DEPLOY_FOLDING_WINGS(iVar0, true, false);
			}
		}
	}
}

int func_482(bool bParam0, int iParam1, bool bParam2)//Position - 0x28F4F2
{
	if (__LIB_10__::func_365() && __LIB_25__::func_604(bParam0, bParam2))
	{
		return Global_1585857[Global_1659903 /*142*/].f_5;
	}
	switch (iParam1)
	{
		case 0:
			return 0;
			break;
		case 1:
			return 2;
			break;
		case 2:
			return 4;
			break;
		case 3:
			return 27;
			break;
		case 4:
			return 33;
			break;
		case 5:
			return 135;
			break;
		case 6:
			return 38;
			break;
		case 7:
			return 90;
			break;
		case 8:
			return 89;
			break;
		case 9:
			return 50;
			break;
		case 10:
			return 53;
			break;
		case 11:
			return 64;
			break;
		case 12:
			return 74;
			break;
		case 13:
			return 95;
			break;
		case 14:
			return 145;
			break;
		case 15:
			return 111;
			break;
	}
	return 0;
}

int func_483(int iParam0)//Position - 0x28F6DE
{
	if (__LIB_25__::func_604(PLAYER::PLAYER_ID(), 1) && __LIB_0__::func_448(0))
	{
		return 0;
	}
	if ((((((((((((((iParam0 == joaat("luxor") || iParam0 == joaat("luxor2")) || iParam0 == joaat("lazer")) || iParam0 == joaat("tribike")) || iParam0 == joaat("tribike2")) || iParam0 == joaat("tribike3")) || iParam0 == joaat("burrito2")) || iParam0 == joaat("velum")) || iParam0 == joaat("carbonrs")) || iParam0 == joaat("hydra")) || iParam0 == joaat("sovereign")) || iParam0 == joaat("monster")) || iParam0 == joaat("swift2")) || iParam0 == joaat("marshall")) || iParam0 == joaat("crusader"))
	{
		return 0;
	}
	return 1;
}

int func_484(bool bParam0, int iParam1, bool bParam2, bool bParam3)//Position - 0x28FDB0
{
	int iVar0;
	if (!__LIB_25__::func_604(bParam0, bParam2) || (__LIB_25__::func_604(bParam0, bParam2) && __LIB_0__::func_448(0)))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1))
		{
			iVar0 = ENTITY::GET_ENTITY_MODEL(iParam1);
			if (((((((((((((((((iVar0 == joaat("omnis") || iVar0 == joaat("sheava")) || iVar0 == joaat("tyrus")) || iVar0 == joaat("le7b")) || iVar0 == joaat("lynx")) || iVar0 == joaat("tropos")) || iVar0 == joaat("brioso")) || iVar0 == joaat("trophytruck")) || iVar0 == joaat("trophytruck2")) || iVar0 == joaat("cliffhanger")) || iVar0 == joaat("bf400")) || iVar0 == joaat("gargoyle")) || iVar0 == joaat("rallytruck")) || iVar0 == joaat("tampa2")) || iVar0 == joaat("omnis")) || iVar0 == joaat("hotring")) || __LIB_2__::func_622(iVar0)) || ((__LIB_0__::func_448(0) && __LIB_1__::func_771(iVar0)) && __LIB_25__::func_604(bParam0, bParam2)))
			{
				if (bParam3)
				{
					return 1;
				}
				if (VEHICLE::GET_NUM_VEHICLE_MODS(iParam1, 48) > 1)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_485(int iParam0, var uParam1, float fParam2)//Position - 0x2AAE39
{
	struct<4> Var0[30];
	int iVar1;
	__LIB_3__::func_178(iParam0, &Var0, 0);
	iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, 30);
	*uParam1 = { Var0[iVar1 /*4*/] };
	*fParam2 = Var0[iVar1 /*4*/].f_3;
}

void func_486(int iParam0, float fParam1, float fParam2, int iParam3)//Position - 0x2B469F
{
	__LIB_5__::func_825(-1, iParam0, fParam1, fParam2, iParam3, 1);
}

bool func_487(bool bParam0)//Position - 0x2BC94B
{
	return __LIB_1__::func_918(bParam0, 1);
}

void func_488(bool bParam0, var uParam1)//Position - 0x2CF660
{
	int* iVar0;
	int* iVar1;
	int* iVar2;
	__LIB_19__::func_5(bParam0, &iVar0, &iVar1, &iVar2);
	uParam1->f_4 = iVar0;
	uParam1->f_5 = iVar1;
	uParam1->f_6 = iVar2;
}

int func_489(int iParam0, bool bParam1)//Position - 0x2E6734
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	if (iParam0 == 0)
	{
		iVar0 = 0;
		iVar1 = 1;
		iVar2 = 2;
		iVar3 = -1;
	}
	else if (iParam0 == 1)
	{
		iVar0 = 3;
		iVar1 = 4;
		iVar2 = 5;
		iVar3 = -1;
	}
	else if (iParam0 == 2)
	{
		iVar0 = 9;
		iVar1 = 10;
		iVar2 = 11;
		iVar3 = -1;
	}
	else if (iParam0 == 3)
	{
		iVar0 = 6;
		iVar1 = 7;
		iVar2 = 8;
		iVar3 = -1;
	}
	else if (iParam0 == 4)
	{
		iVar0 = 12;
		iVar1 = 13;
		iVar2 = 14;
		iVar3 = -1;
	}
	else if (iParam0 == 5)
	{
		iVar0 = 15;
		iVar1 = 16;
		iVar2 = 17;
		iVar3 = -1;
	}
	else if (iParam0 == 6)
	{
		iVar0 = 18;
		iVar1 = 19;
		iVar2 = 20;
		iVar3 = 21;
	}
	else
	{
		return 0;
	}
	iVar4 = __LIB_5__::func_108(iVar0, bParam1);
	if (__LIB_5__::func_108(iVar1, bParam1) < iVar4)
	{
		iVar4 = __LIB_5__::func_108(iVar1, bParam1);
	}
	if (__LIB_5__::func_108(iVar2, bParam1) < iVar4)
	{
		iVar4 = __LIB_5__::func_108(iVar2, bParam1);
	}
	if (iVar3 != -1)
	{
		if (__LIB_5__::func_108(iVar3, bParam1) < iVar4)
		{
			iVar4 = __LIB_5__::func_108(iVar3, bParam1);
		}
	}
	return iVar4;
}

void func_490()//Position - 0x2FC4ED
{
	int iVar0;
	var uVar1;
	var uVar2;
	struct<2> Var3;
	Global_1941652.f_47 = 0;
	__LIB_25__::func_394();
	__LIB_25__::func_393();
	__LIB_25__::func_392();
	__LIB_25__::func_391();
	Global_1941652.f_47.f_23 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		__LIB_25__::func_390(&(Global_1941652.f_47.f_24[iVar0 /*97*/]));
		__LIB_25__::func_390(&(Global_1941652.f_47.f_510[iVar0 /*97*/]));
		Global_1941652.f_47.f_996[iVar0] = 0;
		Global_1941652.f_47.f_1002[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		Global_1941652.f_47.f_1012[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		Global_1941652.f_47.f_1046[iVar0] = 0;
		iVar0++;
	}
	Global_1941652.f_47.f_1045 = 0;
	Global_1941652.f_47.f_1008 = 0;
	Global_1941652.f_47.f_1062 = 0;
	__LIB_25__::func_390(&(Global_1941652.f_47.f_1063));
	__LIB_25__::func_390(&(Global_1941652.f_47.f_1160));
	__LIB_25__::func_390(&(Global_1941652.f_47.f_1257));
	__LIB_25__::func_390(&(Global_1941652.f_47.f_1354));
	Global_1941652.f_47.f_1451 = uVar1;
	Global_1941652.f_47.f_1452 = uVar1;
	Global_1941652.f_47.f_1453 = uVar1;
	Global_1941652.f_47.f_1454 = 0f;
	Global_1941652.f_47.f_1455 = -1;
	Global_1941652.f_47.f_1456 = 1;
	Global_1941652.f_47.f_1457 = 1;
	Global_1941652.f_47.f_1458 = 0;
	Global_1941652.f_47.f_1459 = 0;
	Global_1941652.f_47.f_1460 = 0;
	Global_1941652.f_47.f_1461 = 30;
	Global_1941652.f_47.f_1462 = 0;
	Global_1941652.f_47.f_1463 = 0;
	Global_1941652.f_47.f_1464 = 0;
	Global_1941652.f_47.f_1465 = 0;
	Global_1941652.f_47.f_1466 = 0;
	Global_1941652.f_47.f_1467 = 0;
	Global_1941652.f_47.f_1468 = 0;
	Global_1941652.f_47.f_1469 = 0;
	Global_1941652.f_47.f_1470 = 0;
	Global_1941652.f_47.f_1471 = uVar2;
	Global_1941652.f_47.f_1472 = 0;
	Global_1941652.f_47.f_1473 = uVar2;
	Global_1941652.f_47.f_2174 = uVar2;
	Global_1941652.f_47.f_2175 = 0;
	Global_1941652.f_47.f_2178 = 0;
	Global_1941652.f_47.f_2179 = 0;
	Global_1941652.f_47.f_2180 = 0;
	Global_1941652.f_47.f_2181 = 0;
	Global_1941652.f_47.f_2176 = { Var3 };
	Global_1941652.f_47.f_2182 = { Var3 };
	Global_1941652.f_47.f_2186 = { Var3 };
	Global_1941652.f_47.f_2184 = 1;
	Global_1941652.f_47.f_2197 = 0;
}

void func_491()//Position - 0x2FC943
{
	int iVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	__LIB_25__::func_583();
	Global_1941652.f_1 = 0;
	Global_1941652.f_1.f_1 = 0;
	Global_1941652.f_1.f_2 = 0;
	Global_1941652.f_1.f_3 = 1;
	Global_1941652.f_1.f_4 = 0;
	Global_1941652.f_1.f_5 = 0;
	Global_1941652.f_1.f_6 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		Global_1941652.f_1.f_7[iVar0] = 0;
		iVar0++;
	}
	Global_1941652.f_1.f_13 = { 0f, 0f, 0f };
	Global_1941652.f_1.f_24 = uVar1;
	Global_1941652.f_1.f_25 = uVar1;
	Global_1941652.f_1.f_26 = uVar1;
	Global_1941652.f_1.f_27 = uVar1;
	Global_1941652.f_1.f_28 = uVar1;
	Global_1941652.f_1.f_29 = 0;
	Global_1941652.f_1.f_30 = { 0f, 0f, 0f };
	Global_1941652.f_1.f_33 = 0;
	Global_1941652.f_1.f_34 = 0;
	Global_1941652.f_1.f_35 = 0;
	Global_1941652.f_1.f_36 = 0;
	Global_1941652.f_1.f_37 = uVar2;
	Global_1941652.f_1.f_38 = uVar2;
	Global_1941652.f_1.f_39 = uVar3;
	Global_1941652.f_1.f_40 = 0;
	Global_1941652.f_1.f_41 = 0;
	Global_1941652.f_1.f_42 = -1;
	Global_1941652.f_1.f_43 = 0;
	Global_1941652.f_1.f_44 = 0;
	Global_1941652.f_1.f_45 = 0;
}

void func_492(var uParam0, bool bParam1, bool bParam2)//Position - 0x306184
{
	struct<3> Var0;
	if (uParam0->f_117 != -1 && GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uParam0->f_117))
	{
		GRAPHICS::STOP_PARTICLE_FX_LOOPED(uParam0->f_117, false);
	}
	if (bParam2)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(uParam0->f_114))
		{
			__LIB_6__::func_843(&(uParam0->f_114));
		}
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_113))
		{
			OBJECT::DELETE_OBJECT(&(uParam0->f_113));
		}
	}
	else if (!PED::IS_PED_INJURED(uParam0->f_122) && PED::IS_PED_IN_ANY_VEHICLE(uParam0->f_122, false))
	{
		if (__LIB_18__::func_287(uParam0->f_122))
		{
			__LIB_6__::func_843(&(uParam0->f_114));
		}
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_113))
		{
			OBJECT::DELETE_OBJECT(&(uParam0->f_113));
		}
	}
	else
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_113))
		{
			ENTITY::DETACH_ENTITY(uParam0->f_113, true, true);
			if (bParam1)
			{
				Var0 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_113, false) - uParam0->f_119 };
				Var0 = { Var0 / FtoV(SYSTEM::VMAG(Var0)) };
				Var0 = { Var0 * Vector(4f, 4f, 4f) };
				ENTITY::APPLY_FORCE_TO_ENTITY(uParam0->f_113, 1, Var0, 0f, 0f, 0f, 0, false, true, true, false, true);
			}
		}
		if (__LIB_18__::func_287(uParam0->f_122))
		{
			__LIB_1__::func_518(&(uParam0->f_114));
		}
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_113))
		{
			if (__LIB_10__::func_774(PLAYER::PLAYER_ID(), 1, 1) || __LIB_6__::func_196())
			{
				if (NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(uParam0->f_113))
				{
					NETWORK::NETWORK_UNREGISTER_NETWORKED_ENTITY(uParam0->f_113);
				}
			}
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(uParam0->f_113));
		}
	}
	uParam0->f_113 = -1;
	uParam0->f_12 = 0;
	uParam0->f_9 = 0;
	uParam0->f_618 = 1;
	uParam0->f_619 = 1;
}

void func_493(var uParam0, var uParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x3074F4
{
	if ((*uParam0 != *uParam1 || uParam0->f_1 != uParam1->f_1) || iParam2)
	{
		uParam0->f_1240 = { *uParam0 };
		*uParam0 = *uParam1;
		uParam0->f_1 = uParam1->f_1;
		uParam0->f_117 = -1;
		__LIB_18__::func_285(*uParam0, uParam0->f_1, &(uParam0->f_124), iParam3, bParam4);
		__LIB_22__::func_260(uParam0);
		uParam0->f_1860 = 0;
	}
}

void func_494(int iParam0, bool bParam1, bool bParam2)//Position - 0x310F87
{
	int iVar0;
	if (iParam0 == 0)
	{
		AUDIO::TRIGGER_MUSIC_EVENT("MP_MC_START");
	}
	else if (iParam0 == 1)
	{
		AUDIO::TRIGGER_MUSIC_EVENT("MP_MC_START_CITY");
	}
	else if (iParam0 == 2)
	{
		AUDIO::TRIGGER_MUSIC_EVENT("MP_MC_START_COUNTRY");
	}
	else if (iParam0 == 3)
	{
		AUDIO::TRIGGER_MUSIC_EVENT("MP_MC_START");
	}
	else if (iParam0 == 4)
	{
		AUDIO::TRIGGER_MUSIC_EVENT("MP_MC_START_CAR_STEAL_CHIPS_2");
	}
	else if (iParam0 == 5)
	{
		AUDIO::TRIGGER_MUSIC_EVENT("MP_MC_START_EYE_IN_SKY_3");
	}
	else if (iParam0 == 6)
	{
		AUDIO::TRIGGER_MUSIC_EVENT("MP_MC_START_FUNK_JAM_3");
	}
	else if (iParam0 == 7)
	{
		AUDIO::TRIGGER_MUSIC_EVENT("MP_MC_START_FUNK_JAM_TWO_4");
	}
	else if (iParam0 == 8)
	{
		AUDIO::TRIGGER_MUSIC_EVENT("MP_MC_START_BEYOND_4");
	}
	else if (iParam0 == 9)
	{
		AUDIO::TRIGGER_MUSIC_EVENT("MP_MC_START_BURNING_BAR_8");
	}
	else if (iParam0 == 10)
	{
		AUDIO::TRIGGER_MUSIC_EVENT("MP_MC_START_PB1_8");
	}
	else if (iParam0 == 11)
	{
		AUDIO::TRIGGER_MUSIC_EVENT("MP_MC_START_DARK_ROBBERY_8");
	}
	else if (iParam0 == 12)
	{
		AUDIO::TRIGGER_MUSIC_EVENT("MP_MC_START_DIAMOND_DIARY_8");
	}
	else if (iParam0 == 13)
	{
		AUDIO::TRIGGER_MUSIC_EVENT("MP_MC_START_DEBUNKED_8");
	}
	else if (iParam0 == 14)
	{
		AUDIO::TRIGGER_MUSIC_EVENT("MP_MC_START_PB2_PUSSYFACE_8");
	}
	else if (iParam0 == 15)
	{
		AUDIO::TRIGGER_MUSIC_EVENT("MP_MC_START_DR_DESTRUCTO_8");
	}
	else if (iParam0 == 16)
	{
		AUDIO::TRIGGER_MUSIC_EVENT("MP_MC_START_DRAGONER_8");
	}
	else if (iParam0 == 17)
	{
		AUDIO::TRIGGER_MUSIC_EVENT("MP_MC_START_GREYHOUND_8");
	}
	else if (iParam0 == 18)
	{
		AUDIO::TRIGGER_MUSIC_EVENT("MP_MC_START_MEATY_8");
	}
	else if (iParam0 == 19)
	{
		AUDIO::TRIGGER_MUSIC_EVENT("MP_MC_START_MISSION_SEVEN_8");
	}
	else if (iParam0 == 20)
	{
		AUDIO::TRIGGER_MUSIC_EVENT("MP_MC_START_NINE_BLURT_8");
	}
	else if (iParam0 == 21)
	{
		AUDIO::TRIGGER_MUSIC_EVENT("MP_MC_START_SCRAP_YARD_8");
	}
	else if (iParam0 == 22)
	{
		AUDIO::TRIGGER_MUSIC_EVENT("MP_MC_START_SILVER_PUSSY_8");
	}
	else if (iParam0 == 23)
	{
		AUDIO::TRIGGER_MUSIC_EVENT("MP_MC_START_VODKA_8");
	}
	else if (iParam0 == 24)
	{
		AUDIO::TRIGGER_MUSIC_EVENT("MP_MC_START_STREETS_OF_FORTUNE_8");
	}
	else if (iParam0 == 25)
	{
		AUDIO::TRIGGER_MUSIC_EVENT("MP_MC_START_TRACK_EIGHT_8");
	}
	else if (iParam0 == 26)
	{
		AUDIO::TRIGGER_MUSIC_EVENT("MP_MC_START_VACUUM_8");
	}
	else if (iParam0 == 27)
	{
		AUDIO::TRIGGER_MUSIC_EVENT("MP_MC_START_VINEGAR_TITS_8");
	}
	else if (iParam0 == 28)
	{
		AUDIO::TRIGGER_MUSIC_EVENT("MP_MC_START_CITY_8");
	}
	else if (iParam0 == 29)
	{
		AUDIO::TRIGGER_MUSIC_EVENT("MP_MC_START_GUN_NOVEL_8");
	}
	else if (iParam0 == 30)
	{
		AUDIO::TRIGGER_MUSIC_EVENT("MP_MC_START_CHOP_8");
	}
	else if (iParam0 == 31)
	{
		AUDIO::TRIGGER_MUSIC_EVENT("MP_MC_START_NT_ELC_8");
	}
	else if (iParam0 == 32)
	{
		AUDIO::TRIGGER_MUSIC_EVENT("MP_MC_START_NT_DEF_8");
	}
	else if (iParam0 == 35)
	{
		AUDIO::TRIGGER_MUSIC_EVENT("MP_MC_START_NT_TKB_4");
	}
	else if (iParam0 == 33)
	{
		AUDIO::TRIGGER_MUSIC_EVENT("MP_MC_START_HEIST_4");
	}
	else if (iParam0 == 34)
	{
		AUDIO::TRIGGER_MUSIC_EVENT("MP_MC_START_HEIST_8");
	}
	else if (iParam0 == 36)
	{
		AUDIO::TRIGGER_MUSIC_EVENT("MP_MC_START_HEIST_FIN_NEW");
	}
	else if (iParam0 == 37)
	{
		AUDIO::TRIGGER_MUSIC_EVENT("MP_MC_START_HEIST_PREP_NEW");
	}
	else if (iParam0 == 39)
	{
		AUDIO::TRIGGER_MUSIC_EVENT("START_RANDOM");
	}
	else if (iParam0 == 40)
	{
		AUDIO::TRIGGER_MUSIC_EVENT("START_URBAN");
	}
	else if (iParam0 == 41)
	{
		AUDIO::TRIGGER_MUSIC_EVENT("START_ROCK");
	}
	else if (iParam0 == 42)
	{
		AUDIO::TRIGGER_MUSIC_EVENT("START_ELECTRONIC");
	}
	else if (iParam0 == 43)
	{
		AUDIO::TRIGGER_MUSIC_EVENT("LOWRIDER_START_MUSIC");
	}
	else if (iParam0 == 44)
	{
		AUDIO::TRIGGER_MUSIC_EVENT("LOWRIDER_FINALE_START_MUSIC");
	}
	else if (iParam0 == 45)
	{
		AUDIO::TRIGGER_MUSIC_EVENT("HALLOWEEN_START_MUSIC");
	}
	else if (iParam0 == 46)
	{
		if (!bParam2)
		{
			AUDIO::TRIGGER_MUSIC_EVENT("EXEC1_MP_MC_START_CITY");
		}
		else
		{
			AUDIO::TRIGGER_MUSIC_EVENT("EXEC1_MP_MC_START_CITY_STA");
		}
	}
	else if (iParam0 == 47)
	{
		AUDIO::TRIGGER_MUSIC_EVENT("EXEC1_START_BESPOKE_BROKE");
	}
	else if (iParam0 == 48)
	{
		AUDIO::TRIGGER_MUSIC_EVENT("EXEC1_START_CAR_STEAL");
	}
	else if (iParam0 == 49)
	{
		AUDIO::TRIGGER_MUSIC_EVENT("EXEC1_START_CLIFF12");
	}
	else if (iParam0 == 50)
	{
		AUDIO::TRIGGER_MUSIC_EVENT("EXEC1_START_CLIFF18");
	}
	else if (iParam0 == 51)
	{
		AUDIO::TRIGGER_MUSIC_EVENT("EXEC1_START_CLIFF19");
	}
	else if (iParam0 == 52)
	{
		AUDIO::TRIGGER_MUSIC_EVENT("EXEC1_START_CLIFF33");
	}
	else if (iParam0 == 53)
	{
		AUDIO::TRIGGER_MUSIC_EVENT("EXEC1_START_GET_ON_THE_MOVE");
	}
	else if (iParam0 == 54)
	{
		AUDIO::TRIGGER_MUSIC_EVENT("EXEC1_START_PSYCHOPATH");
	}
	else if (iParam0 == 55)
	{
		AUDIO::TRIGGER_MUSIC_EVENT("EXEC1_START_RED_SQUARE");
	}
	else if (iParam0 == 56)
	{
		AUDIO::TRIGGER_MUSIC_EVENT("EXEC1_START_WHO_CALLED_POPO");
	}
	else if (iParam0 == 57)
	{
		AUDIO::TRIGGER_MUSIC_EVENT("BKR_GS_START");
	}
	else if (iParam0 == 58)
	{
		AUDIO::TRIGGER_MUSIC_EVENT("BKR_DEADLINE_START_MUSIC");
	}
	else if (iParam0 == 59)
	{
		AUDIO::TRIGGER_MUSIC_EVENT("BA_METZ_DEBUNKED");
	}
	else if (iParam0 == 60)
	{
		AUDIO::TRIGGER_MUSIC_EVENT("BIKER_LAD_START");
	}
	else if (iParam0 == 61)
	{
		AUDIO::TRIGGER_MUSIC_EVENT("IE_TW_START");
	}
	else if (iParam0 == 62)
	{
		AUDIO::TRIGGER_MUSIC_EVENT("IE_SVM_START");
	}
	else if (iParam0 == 63)
	{
		AUDIO::TRIGGER_MUSIC_EVENT("MP_MC_GR_START");
	}
	else if (iParam0 == 64)
	{
		AUDIO::TRIGGER_MUSIC_EVENT("MP_MC_SMG_START");
	}
	else if (iParam0 == 65)
	{
		AUDIO::TRIGGER_MUSIC_EVENT("MP_MC_SMGH_START");
	}
	else if (iParam0 == 66)
	{
		AUDIO::TRIGGER_MUSIC_EVENT("MP_MC_CMH_START");
	}
	else if (iParam0 == 67)
	{
		AUDIO::TRIGGER_MUSIC_EVENT("MP_MC_CMH_SUB_PREP_START");
	}
	else if (iParam0 == 68)
	{
		AUDIO::TRIGGER_MUSIC_EVENT("MP_MC_CMH_SUB_FINALE_START");
	}
	else if (iParam0 == 69)
	{
		AUDIO::TRIGGER_MUSIC_EVENT("MP_MC_CMH_SILO_PREP_START");
	}
	else if (iParam0 == 70)
	{
		AUDIO::TRIGGER_MUSIC_EVENT("MP_MC_CMH_SILO_FINALE_START");
	}
	else if (iParam0 == 71)
	{
		AUDIO::TRIGGER_MUSIC_EVENT("MP_MC_CMH_IAA_PREP_START");
	}
	else if (iParam0 == 72)
	{
		AUDIO::TRIGGER_MUSIC_EVENT("MP_MC_CMH_IAA_FINALE_START");
	}
	else if (iParam0 == 73)
	{
		AUDIO::TRIGGER_MUSIC_EVENT("CMH_ADV_START");
	}
	else if (iParam0 == 74)
	{
		AUDIO::TRIGGER_MUSIC_EVENT("MP_MC_ASSAULT_ADV_START");
	}
	else if (iParam0 == 75)
	{
		AUDIO::TRIGGER_MUSIC_EVENT("MP_MC_CASINO_BRAWL_START");
	}
	else if (iParam0 == 76)
	{
		AUDIO::TRIGGER_MUSIC_EVENT("MP_CHF_START");
	}
	else if (iParam0 == 77)
	{
		AUDIO::TRIGGER_MUSIC_EVENT("MP_MC_SUM20_START");
	}
	else if (iParam0 == 78)
	{
		AUDIO::TRIGGER_MUSIC_EVENT("HEI4_FIN_START_STA");
	}
	else if (iParam0 == 79)
	{
		AUDIO::TRIGGER_MUSIC_EVENT("MP_MC_TUNER_START_MUSIC");
	}
	else if (iParam0 == 80)
	{
		AUDIO::TRIGGER_MUSIC_EVENT("MP_MC_FIXER_HOLDOUT_START");
	}
	else if (iParam0 == 81)
	{
		AUDIO::TRIGGER_MUSIC_EVENT("MP_MC_FIXER_START_MUSIC");
	}
	else if (iParam0 == 82)
	{
		AUDIO::TRIGGER_MUSIC_EVENT("DATA_LEAK_GOLF_START_MUSIC");
	}
	else if (iParam0 == 83)
	{
		AUDIO::TRIGGER_MUSIC_EVENT("DATA_LEAK_PARTY_PROMO_START_MUSIC");
	}
	else if (iParam0 == 84)
	{
		AUDIO::TRIGGER_MUSIC_EVENT("DATA_LEAK_BILLIONAIRE_START_MUSIC");
	}
	else if (iParam0 == 85)
	{
		AUDIO::TRIGGER_MUSIC_EVENT("DATA_LEAK_HOOD_PASS_START_MUSIC");
	}
	else if (iParam0 == 86)
	{
		AUDIO::TRIGGER_MUSIC_EVENT("DATA_LEAK_FIRE_START_MUSIC");
	}
	else if (iParam0 == 87)
	{
		AUDIO::TRIGGER_MUSIC_EVENT("DATA_LEAK_DFWD_START_MUSIC");
	}
	else if (iParam0 == 88)
	{
		AUDIO::TRIGGER_MUSIC_EVENT("MP_MC_MPSUM2_START_MUSIC");
	}
	else if (iParam0 == 89)
	{
		AUDIO::TRIGGER_MUSIC_EVENT("MP_MC_H22_ADV_START");
	}
	else
	{
		AUDIO::TRIGGER_MUSIC_EVENT("MP_MC_START");
	}
	iVar0 = 4;
	if (Global_4718592.f_116977 > 0)
	{
		iVar0 = Global_4718592.f_116977;
	}
	if (bParam1)
	{
		AUDIO::TRIGGER_MUSIC_EVENT(__LIB_25__::func_388(iParam0, iVar0));
	}
}

int func_495(char* sParam0)//Position - 0x3127E6
{
	struct<6> Var0;
	Var0 = { __LIB_25__::func_345() };
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var0))
	{
		if (MISC::ARE_STRINGS_EQUAL(&Var0, "MPH_HUM_KEY_MCS1"))
		{
			if (((((((((MISC::ARE_STRINGS_EQUAL("Karen_Car", sParam0) || MISC::ARE_STRINGS_EQUAL("BALLER" /* GXT: Baller */, sParam0)) || MISC::ARE_STRINGS_EQUAL("EMPEROR" /* GXT: Emperor */, sParam0)) || MISC::ARE_STRINGS_EQUAL("Regina_1", sParam0)) || MISC::ARE_STRINGS_EQUAL("Zion_2", sParam0)) || MISC::ARE_STRINGS_EQUAL("Parked_Car", sParam0)) || MISC::ARE_STRINGS_EQUAL("Zion_1", sParam0)) || MISC::ARE_STRINGS_EQUAL("Regina_2", sParam0)) || MISC::ARE_STRINGS_EQUAL("KAREN", sParam0)) || MISC::ARE_STRINGS_EQUAL("Karen_Driver", sParam0))
			{
				return 0;
			}
		}
	}
	return 1;
}

int func_496(bool bParam0)//Position - 0x3131B4
{
	if (bParam0 != __LIB_0__::func_162())
	{
		return Global_1883784[bParam0 /*77*/].f_15;
	}
	return -1;
}

int func_497(var uParam0, struct<3> Param1)//Position - 0x31376C
{
	int iVar0;
	bool bVar1;
	int iVar2;
	if (*uParam0 == joaat("WEAPON_UNARMED"))
	{
		return 0;
	}
	iVar0 = WEAPON::CREATE_WEAPON_OBJECT(*uParam0, uParam0->f_1, Param1, false, 1f, 0, 0, 1);
	WEAPON::SET_WEAPON_OBJECT_TINT_INDEX(iVar0, uParam0->f_3);
	WEAPON::SET_WEAPON_OBJECT_CAMO_INDEX(iVar0, uParam0->f_4);
	iVar2 = __LIB_0__::func_430(*uParam0, bVar1);
	while (iVar2 != 0)
	{
		if (BitTest(uParam0->f_2, bVar1))
		{
			WEAPON::GIVE_WEAPON_COMPONENT_TO_WEAPON_OBJECT(iVar0, iVar2);
			__LIB_0__::func_707(iVar0, iVar2);
		}
		bVar1++;
		iVar2 = __LIB_0__::func_430(*uParam0, bVar1);
	}
	return iVar0;
}

void func_498(int iParam0, var uParam1, int iParam2, var uParam3, var uParam4)//Position - 0x3BFBC3
{
	struct<3> Var0;
	int iVar1;
	if (__LIB_6__::func_601(iParam0))
	{
		if (*uParam3 != 1 && *uParam3 != 2)
		{
			HUD::SET_BLIP_ROUTE(*uParam1, true);
			HUD::SET_BLIP_SCALE(*uParam1, 1.1f);
			HUD::SET_BLIP_PRIORITY(*uParam1, 7);
			HUD::SET_BLIP_FLASH_TIMER(*uParam1, 7000);
			*uParam3 = 1;
			return;
		}
		else if (*uParam3 == 1)
		{
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
			{
				HUD::SET_BLIP_ROUTE(*uParam1, false);
				*uParam3 = 2;
			}
		}
		else if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
		{
			HUD::SET_BLIP_ROUTE(*uParam1, true);
			*uParam3 = 1;
		}
	}
	else if (*uParam3 == 1)
	{
		HUD::SET_BLIP_ROUTE(*uParam1, false);
		HUD::SET_BLIP_SCALE(*uParam1, 1f);
		HUD::SET_BLIP_PRIORITY(*uParam1, 5);
		*uParam3 = 0;
	}
	if (__LIB_0__::func_172(iParam0) == 9)
	{
		if (__LIB_0__::func_109(iParam0))
		{
			if (HUD::DOES_BLIP_EXIST(*uParam1))
			{
				if (!HUD::DOES_BLIP_EXIST(*iParam2))
				{
					Var0 = { __LIB_4__::func_296(iParam0) };
					iVar1 = __LIB_4__::func_74(iParam0);
					*iParam2 = __LIB_0__::func_488(Var0, 0);
					HUD::SET_BLIP_SPRITE(*iParam2, iVar1);
					HUD::SET_BLIP_SCALE(*iParam2, 1f);
					HUD::SET_BLIP_PRIORITY(*iParam2, 5);
					__LIB_1__::func_540(iParam2, 166);
					HUD::SET_BLIP_AS_SHORT_RANGE(*iParam2, false);
					HUD::SET_BLIP_NAME_FROM_TEXT_FILE(*iParam2, "BASE_HEIST_BLIP" /* GXT: The Doomsday Heist */);
					HUD::SET_BLIP_HIDDEN_ON_LEGEND(*iParam2, true);
				}
			}
			else if (HUD::DOES_BLIP_EXIST(*iParam2))
			{
				HUD::REMOVE_BLIP(iParam2);
			}
		}
	}
}

int func_499(var uParam0, bool bParam1)//Position - 0x3E432B
{
	if (__LIB_2__::func_754(PLAYER::PLAYER_ID()))
	{
		if (__LIB_25__::func_618(PLAYER::PLAYER_ID(), bParam1, 0, 1) || __LIB_4__::func_289())
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_500(var uParam0, bool bParam1)//Position - 0x3F33A1
{
	if (__LIB_2__::func_754(PLAYER::PLAYER_ID()))
	{
		if (__LIB_25__::func_618(PLAYER::PLAYER_ID(), bParam1, 0, 1) || __LIB_4__::func_289())
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

int func_501(int iParam0, bool bParam1, bool bParam2)//Position - 0x3FABE6
{
	int iVar0;
	if (__LIB_4__::func_717(iParam0, 1) && VEHICLE::IS_VEHICLE_ATTACHED_TO_TRAILER(iParam0))
	{
		VEHICLE::GET_VEHICLE_TRAILER_VEHICLE(iParam0, &iVar0);
		if (__LIB_0__::func_872(iVar0, 1) && ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("trailersmall2"))
		{
			if (!bParam2)
			{
				return 1;
			}
			else if (__LIB_3__::func_251(iVar0) == bParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_502(int iParam0, int iParam1, int iParam2)//Position - 0x3FF487
{
	int iVar0;
	if (__LIB_5__::func_661(iParam0, iParam1))
	{
		iVar0 = __LIB_5__::func_368(iParam0, iParam1);
		return BitTest(Global_1853348[iParam0 /*834*/].f_267.f_191[iVar0 /*13*/].f_5, iParam2);
	}
	return 0;
}

void func_503(char* sParam0)//Position - 0x42D743
{
	int iVar0;
	struct<4> Var1;
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "MPCAS5_EXT"))
	{
		Var1 = { __LIB_10__::func_348(198) };
		iVar0 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(Var1, Var1.f_3);
		if (iVar0 == 0)
		{
		}
		if (INTERIOR::IS_VALID_INTERIOR(iVar0))
		{
			if (INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iVar0, "casino_manager_workout"))
			{
				INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(iVar0, "casino_manager_workout");
			}
		}
	}
}

bool func_504(var uParam0)//Position - 0x42FB75
{
	return __LIB_0__::func_404(uParam0) == 6;
}

char* func_505(var uParam0)//Position - 0x42FF9F
{
	switch (__LIB_0__::func_404(uParam0))
	{
		case 1:
			switch (__LIB_0__::func_864(uParam0))
			{
				case 1:
					return "mp_masks@standard_car@ds@";
				case 2:
					return "mp_masks@standard_car@ps@";
				case 3:
					return "mp_masks@standard_car@rds@";
				case 4:
					return "mp_masks@standard_car@rps@";
				default:
			}
			break;
		case 2:
			switch (__LIB_0__::func_864(uParam0))
			{
				case 1:
					return "mp_masks@low_car@ds@";
				case 2:
					return "mp_masks@low_car@ps@";
				default:
			}
			break;
		case 3:
			switch (__LIB_0__::func_864(uParam0))
			{
				case 1:
					return "mp_masks@van@ds@";
				case 2:
					return "mp_masks@van@ps@";
				case 3:
					return "mp_masks@van@rds@";
				case 4:
					return "mp_masks@van@rps@";
				default:
			}
			break;
		case 4:
			switch (__LIB_0__::func_864(uParam0))
			{
				case 1:
					return "mp_masks@truck@ds@";
				case 2:
					return "mp_masks@truck@ps@";
				default:
			}
			break;
		case 5:
			switch (__LIB_0__::func_864(uParam0))
			{
				case 1:
					return "mp_masks@van@ds@";
				case 2:
					return "mp_masks@van@ps@";
				case 3:
					return "mp_masks@jeep@rds@";
				case 4:
					return "mp_masks@jeep@rps@";
				default:
			}
			break;
		case 6:
			return "mp_masks@on_foot";
	}
	return "";
}

void func_506(var uParam0, int iParam1, int iParam2, int iParam3)//Position - 0x46160D
{
	bool bVar0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	struct<3> Var5;
	struct<3> Var6;
	struct<3> Var7;
	struct<3> Var8;
	struct<3> Var9;
	struct<3> Var10;
	if (BitTest(Global_1966339[iParam3], 0))
	{
		MISC::CLEAR_BIT(&(Global_1966339[iParam3]), 2);
		bVar0 = true;
		STREAMING::REQUEST_NAMED_PTFX_ASSET("scr_ch_finale");
		if (STREAMING::HAS_NAMED_PTFX_ASSET_LOADED("scr_ch_finale"))
		{
			if (BitTest(Global_1966339[iParam3], 3))
			{
				if ((uParam0->f_47[iParam3] == 0 && ENTITY::DOES_ENTITY_EXIST(Global_1966438[iParam3])) && !GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uParam0->f_47[iParam3]))
				{
					Var1 = { -0.00375f, -0.3f, 0.015f };
					GRAPHICS::USE_PARTICLE_FX_ASSET("scr_ch_finale");
					uParam0->f_47[iParam3] = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_ch_finale_laser", Global_1966438[iParam3], Var1, 0f, 0f, -90f, 1f, false, false, false);
					bVar0 = false;
				}
				if (uParam0->f_80[iParam3] == 0 && !GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uParam0->f_80[iParam3]))
				{
					GRAPHICS::USE_PARTICLE_FX_ASSET("scr_ch_finale");
					Var2 = { ENTITY::GET_ENTITY_COORDS(iParam1, true) };
					Var3 = { ENTITY::GET_ENTITY_COORDS(Global_1966438[iParam3], true) };
					Var2.f_2 = (Var3.f_2 + 0.0225f);
					Var4 = { ENTITY::GET_ENTITY_ROTATION(iParam1, 2) + Vector(0f, 0f, 90f) };
					uParam0->f_80[iParam3] = GRAPHICS::START_PARTICLE_FX_LOOPED_AT_COORD("scr_ch_finale_laser_sparks", Var2, Var4, 1f, false, false, false, true);
					GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(uParam0->f_80[iParam3], "power", 0f, false);
					bVar0 = false;
				}
			}
			else if (uParam0->f_80[iParam3] == 0 && !GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uParam0->f_80[iParam3]))
			{
				GRAPHICS::USE_PARTICLE_FX_ASSET("scr_ch_finale");
				Var5 = { ENTITY::GET_ENTITY_COORDS(iParam1, true) };
				Var6 = { ENTITY::GET_ENTITY_COORDS(Global_1966438[iParam3], true) };
				Var5.f_2 = (Var6.f_2 + 0.0225f);
				Var7 = { ENTITY::GET_ENTITY_ROTATION(iParam1, 2) + Vector(0f, 0f, 90f) };
				uParam0->f_80[iParam3] = GRAPHICS::START_PARTICLE_FX_LOOPED_AT_COORD("scr_ch_finale_drill_sparks", Var5, Var7, 1f, false, false, false, true);
				GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(uParam0->f_80[iParam3], "power", 0f, false);
				bVar0 = false;
			}
			if (uParam0->f_113[iParam3] == 0 && !GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uParam0->f_113[iParam3]))
			{
				GRAPHICS::USE_PARTICLE_FX_ASSET("scr_ch_finale");
				Var8 = { ENTITY::GET_ENTITY_COORDS(iParam1, true) };
				Var9 = { ENTITY::GET_ENTITY_COORDS(Global_1966438[iParam3], true) };
				Var8.f_2 = (Var9.f_2 + 0.0225f);
				Var10 = { ENTITY::GET_ENTITY_ROTATION(iParam1, 2) + Vector(0f, 0f, 90f) };
				uParam0->f_113[iParam3] = GRAPHICS::START_PARTICLE_FX_LOOPED_AT_COORD("scr_ch_finale_drill_overheat", Var8, Var10, 1f, false, false, false, true);
				GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(uParam0->f_113[iParam3], "heat", 0f, false);
				bVar0 = false;
			}
			if (bVar0)
			{
				MISC::CLEAR_BIT(&(Global_1966339[iParam3]), 0);
				MISC::SET_BIT(&(Global_1966339[iParam3]), 1);
			}
		}
		return;
	}
	if (BitTest(Global_1966339[iParam3], 1))
	{
		if (BitTest(Global_1966339[iParam3], 3))
		{
			__LIB_25__::func_484(uParam0, iParam2, iParam3);
		}
		else
		{
			__LIB_25__::func_483(uParam0, iParam2, iParam3);
		}
		return;
	}
	if (BitTest(Global_1966339[iParam3], 2))
	{
		__LIB_5__::func_72(uParam0, iParam3);
	}
}

void func_507()//Position - 0x462EDE
{
	char* sVar0;
	int iVar1;
	if ((Global_1574485 == 1 || Global_1574492 == 1) || Global_1574481.f_3 == 1)
	{
		if (Global_1574485 == 1)
		{
			sVar0 = "HUD_SPIKES" /* GXT: SPIKES */;
			iVar1 = 1;
		}
		else if (Global_1574492 == 1)
		{
			switch (Global_1574492.f_1)
			{
				case 0:
					iVar1 = 2;
					sVar0 = "HUD_ROCKET" /* GXT: ROCKETS */;
					break;
				case 1:
					iVar1 = 3;
					sVar0 = "HUD_ROCKET_H" /* GXT: HOMING MISSILES */;
					break;
				case 2:
					iVar1 = 2;
					sVar0 = "HUD_ROCKET_NH" /* GXT: NON-HOMING MISSILES */;
					break;
			}
		}
		else if (Global_1574481.f_3 == 1)
		{
			sVar0 = "HUD_BOOSTS" /* GXT: BOOSTS */;
			iVar1 = 4;
		}
		__LIB_2__::func_131(1, sVar0, -1, 1, 5, 0, "", 0, 0f, 0, 0, 0, 0, 0, 0, iVar1, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1);
	}
	else if (Global_1574508 == 1)
	{
		sVar0 = "HUD_VEH_GUN" /* GXT: MACHINE GUN */;
		iVar1 = 9;
		__LIB_2__::func_131(Global_1574508.f_1, sVar0, -1, 1, 5, 0, "", 0, 0f, 0, 0, 0, 0, 0, 0, iVar1, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1);
	}
}

void func_508(var uParam0, struct<3> Param1)//Position - 0x470D3F
{
	float fVar0;
	fVar0 = __LIB_23__::func_838(uParam0->f_25);
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_9))
	{
		OBJECT::DELETE_OBJECT(&(uParam0->f_9));
	}
	uParam0->f_9 = OBJECT::CREATE_OBJECT(joaat("prop_ld_test_01"), Param1, false, true, false);
	ENTITY::SET_ENTITY_COORDS(uParam0->f_9, Param1, true, false, false, true);
	ENTITY::SET_ENTITY_HEADING(uParam0->f_9, ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()));
	ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_9, true);
	ENTITY::SET_ENTITY_COLLISION(uParam0->f_9, false, false);
	ENTITY::SET_ENTITY_VISIBLE(uParam0->f_9, false, false);
	CAM::ATTACH_CAM_TO_ENTITY(uParam0->f_3, uParam0->f_9, __LIB_23__::func_837(1, uParam0->f_25, 1), true);
	CAM::POINT_CAM_AT_ENTITY(uParam0->f_3, uParam0->f_9, __LIB_23__::func_837(1, uParam0->f_25, 0), true);
	CAM::SET_CAM_FOV(uParam0->f_3, fVar0);
	CAM::SET_CAM_FOV(uParam0->f_4, fVar0);
	CAM::ATTACH_CAM_TO_ENTITY(uParam0->f_4, uParam0->f_9, __LIB_23__::func_837(2, uParam0->f_25, 1), true);
	CAM::POINT_CAM_AT_ENTITY(uParam0->f_4, uParam0->f_9, __LIB_23__::func_837(2, uParam0->f_25, 0), true);
	CAM::SET_CAM_ACTIVE(uParam0->f_3, true);
	CAM::SET_CAM_ACTIVE_WITH_INTERP(uParam0->f_4, uParam0->f_3, 6000, 0, 1);
	CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
	if (!__LIB_1__::func_728(PLAYER::PLAYER_ID()))
	{
		GRAPHICS::ANIMPOSTFX_PLAY("MinigameTransitionOut", 0, false);
	}
	CAM::SHAKE_CAM(uParam0->f_4, "HAND_SHAKE", 0.3f);
	CAM::SHAKE_CAM(uParam0->f_3, "HAND_SHAKE", 0.3f);
}

void func_509(int iParam0, bool bParam1)//Position - 0x47E0F7
{
	__LIB_10__::func_407();
	if (!__LIB_2__::func_637())
	{
		__LIB_1__::func_527(0);
		Global_2815059.f_962 = 1;
		Global_2815059.f_965 = iParam0;
		if (bParam1)
		{
			Global_2815059.f_963 = 1;
		}
		else
		{
			Global_2815059.f_963 = 0;
		}
	}
}

void func_510(bool bParam0, char[4] cParam1)//Position - 0x48E7DC
{
	struct<13> Var0;
	struct<35> Var1;
	StringCopy(cParam1, "", 16);
	Var0 = { __LIB_1__::func_696(bParam0) };
	if (__LIB_0__::func_53())
	{
		if (__LIB_0__::func_800(Var0))
		{
			if (!NETWORK::NETWORK_CAN_VIEW_GAMER_USER_CONTENT(&Var0))
			{
				return;
			}
		}
	}
	else if (!NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(0))
	{
		return;
	}
	if (__LIB_1__::func_87(&Var0))
	{
		Var1 = { __LIB_2__::func_60(bParam0) };
		__LIB_1__::func_825(&Var1, cParam1);
	}
}

void func_511(var uParam0)//Position - 0x490DB8
{
	struct<13> Var0;
	struct<35> Var1;
	char* sVar2;
	char* sVar3;
	int iVar4;
	__LIB_10__::func_295(&sVar2, &sVar3);
	iVar4 = __LIB_0__::func_162();
	if (ENTITY::DOES_ENTITY_EXIST(__LIB_1__::func_4()))
	{
		iVar4 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(__LIB_1__::func_4());
	}
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_47.f_1471, "SET_TEXT");
	switch (Global_1853348[PLAYER::PLAYER_ID() /*834*/])
	{
		case 1:
		case 2:
		case 3:
		case 0:
		case 8:
			__LIB_0__::func_610(__LIB_10__::func_442(Global_1853348[PLAYER::PLAYER_ID() /*834*/]));
			__LIB_0__::func_700(&(Global_4718592.f_116531));
			break;
		default:
			__LIB_0__::func_610("SPC_TXT_DFLT" /* GXT: GTA Online */);
			__LIB_0__::func_610("");
			break;
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_47.f_1471, "CLEAR_SCROLL_TEXT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	if (iVar4 != __LIB_0__::func_162() && NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar4))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_47.f_1471, "SET_SCROLL_TEXT");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(0f);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(0f);
		__LIB_10__::func_294("MPTV_TICK0" /* GXT: Suspect identified as known criminal going by the streetname "~a~". */, PLAYER::GET_PLAYER_NAME(iVar4));
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_47.f_1471, "SET_SCROLL_TEXT");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(0f);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(1f);
		Var0 = { __LIB_1__::func_696(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(__LIB_1__::func_4())) };
		if (__LIB_1__::func_87(&Var0))
		{
			Var1 = { __LIB_2__::func_60(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(__LIB_1__::func_4())) };
			__LIB_10__::func_292("MPTV_TICK1" /* GXT: Suspect thought to be affiliated with gangland outfit "~a~". */, __LIB_10__::func_293(&Var0, &Var1));
		}
		else
		{
			__LIB_0__::func_610("MPTV_TICK2" /* GXT: Efforts to identify the suspect's known gangland affiliations have so far been unsuccessful. */);
		}
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_47.f_1471, "SET_SCROLL_TEXT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(0f);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(2f);
	__LIB_0__::func_610(&sVar2);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_47.f_1471, "SET_SCROLL_TEXT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(0f);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(3f);
	__LIB_0__::func_610(&sVar3);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	if (!BitTest(Global_2621446, 18))
	{
		HUD::DISPLAY_RADAR(false);
	}
	uParam0->f_47.f_1454 = 0f;
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_47.f_1471, "DISPLAY_SCROLL_TEXT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(0f);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(uParam0->f_47.f_1454);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	uParam0->f_47.f_1453 = NETWORK::GET_NETWORK_TIME();
	__LIB_10__::func_291();
}

int func_512(bool bParam0)//Position - 0x4935AF
{
	if (__LIB_25__::func_548(PLAYER::PLAYER_ID()) && !__LIB_25__::func_548(bParam0))
	{
		return 0;
	}
	return 1;
}

int func_513(var uParam0)//Position - 0x4A3B17
{
	int iVar0;
	int iVar1;
	char* sVar2;
	int iVar3;
	iVar0 = 0;
	while (iVar0 <= __LIB_6__::func_581(*uParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_1.f_9[iVar0]))
		{
			OBJECT::DELETE_OBJECT(&(uParam0->f_1.f_9[iVar0]));
		}
		iVar0++;
	}
	iVar3 = 1;
	if (*uParam0 == __LIB_11__::func_219())
	{
		iVar3 = 4;
	}
	else if (*uParam0 == __LIB_3__::func_969())
	{
		iVar3 = 3;
	}
	iVar1 = 0;
	while (iVar1 < 61)
	{
		if (__LIB_7__::func_950(iVar3, iVar1, &sVar2))
		{
			__LIB_25__::func_651(*uParam0, &sVar2, 0);
		}
	else
	{
		}
		else
		{
			iVar1++;
		}
	}
	return 1;
}

void func_514(int iParam0, var uParam1)//Position - 0x4B191E
{
	struct<3> Var0;
	float fVar1;
	int iVar2;
	*uParam1 = iParam0;
	if (uParam1->f_46)
	{
		__LIB_25__::func_650(uParam1);
	}
	iVar2 = 0;
	while (iVar2 < 6)
	{
		if (__LIB_21__::func_611(uParam1->f_2, iVar2))
		{
			Var0 = { __LIB_21__::func_616(iParam0) };
			Var0.f_2 = 20f;
			fVar1 = __LIB_21__::func_619(iParam0);
			uParam1->f_24[iVar2] = OBJECT::CREATE_OBJECT_NO_OFFSET(__LIB_21__::func_610(uParam1->f_2, iVar2), Var0, false, false, false);
			ENTITY::SET_ENTITY_HEADING(uParam1->f_24[iVar2], fVar1);
			__LIB_21__::func_615(uParam1->f_24[iVar2]);
		}
		iVar2++;
	}
	uParam1->f_46 = 1;
}

void func_515(struct<5> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, bool bParam18)//Position - 0x4B1BA3
{
	__LIB_25__::func_568(Param0.f_0);
	if (!bParam18)
	{
		__LIB_25__::func_567(Param0.f_0);
		__LIB_25__::func_566(Param0.f_0, Param0.f_2);
		__LIB_25__::func_565(Param0.f_0, Param0.f_3);
		__LIB_25__::func_564(Param0.f_4);
		__LIB_25__::func_563();
	}
}

void func_516()//Position - 0x4B1D3C
{
	if (!Global_1835497)
	{
		__LIB_1__::func_862(1);
	}
}

void func_517(int iParam0, int iParam1)//Position - 0x4B2A9F
{
	struct<3> Var0;
	int iVar1;
	int iVar2;
	if (iParam1 > 0)
	{
		if (__LIB_0__::func_86(ENTITY::GET_ENTITY_COORDS(iParam0, false)))
		{
		}
		__LIB_1__::func_921(1);
		Var0 = { __LIB_2__::func_45(PLAYER::PLAYER_PED_ID(), 1) };
		iVar2 = -1;
		iVar1 = 0;
		while (iVar1 < 20)
		{
			if (Global_2703735.f_967[iVar1 /*30*/].f_6 == 0 || Global_2703735.f_967[iVar1 /*30*/].f_6 == 7)
			{
				iVar2 = iVar1;
				iVar1 = 20;
			}
			iVar1++;
		}
		if (iVar2 != -1)
		{
			Global_2703735.f_967[iVar2 /*30*/] = { Var0 };
			Global_2703735.f_967[iVar2 /*30*/].f_6 = 1;
			Global_2703735.f_967[iVar2 /*30*/].f_4 = __LIB_1__::func_924(Global_2703735.f_967[iVar2 /*30*/], &Global_1574479, &Global_1574480);
			Global_2703735.f_967[iVar2 /*30*/].f_7 = NETWORK::GET_NETWORK_TIME();
			Global_2703735.f_967[iVar2 /*30*/].f_3 = iParam1;
			Global_2703735.f_967[iVar2 /*30*/].f_8 = 1;
			Global_2703735.f_967[iVar2 /*30*/].f_9 = __LIB_1__::func_923();
			Global_2703735.f_967[iVar2 /*30*/].f_10 = __LIB_1__::func_922();
			Global_1941593 = 1;
			GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPHud", false);
		}
	}
}

void func_518(int iParam0)//Position - 0x4CB75B
{
	struct<7> Var0;
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 7))
	{
		if (Var0.f_0 == 362970257)
		{
			if (Global_4980736.f_36356[Var0.f_6 /*134*/].f_69 == -1)
			{
				Global_4980736.f_36356[Var0.f_6 /*134*/].f_69 = AUDIO::GET_SOUND_ID();
			}
			AUDIO::PLAY_SOUND_FROM_COORD(Global_4980736.f_36356[Var0.f_6 /*134*/].f_69, __LIB_25__::func_571(Var0.f_2), Var0.f_3, "DLC_Stunt_Race_Stinger_Sounds", false, 0, false);
			Global_4980736.f_36356[Var0.f_6 /*134*/].f_68++;
		}
	}
}

void func_519(int iParam0, bool bParam1)//Position - 0x4CD023
{
	int iVar0;
	if (bParam1)
	{
		__LIB_8__::func_277(iParam0);
	}
	else if ((ENTITY::DOES_ENTITY_EXIST(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0, false)) && VEHICLE::GET_NUM_MOD_KITS(iParam0) > 0)
	{
		VEHICLE::SET_VEHICLE_MOD_KIT(iParam0, 0);
		__LIB_8__::func_277(iParam0);
		iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
		if (iVar0 == joaat("tampa3"))
		{
			__LIB_18__::func_439(iParam0, 10, 0, 0);
			__LIB_18__::func_439(iParam0, 1, 0, 0);
			__LIB_18__::func_439(iParam0, 2, 1, 0);
			__LIB_18__::func_439(iParam0, 5, 2, 0);
			__LIB_18__::func_439(iParam0, 7, 2, 0);
			__LIB_18__::func_439(iParam0, 23, 15, 0);
			VEHICLE::RELEASE_PRELOAD_MODS(iParam0);
		}
		else if (__LIB_21__::func_734(iVar0))
		{
			__LIB_18__::func_439(iParam0, 10, 0, 0);
			__LIB_18__::func_439(iParam0, 1, 0, 0);
			__LIB_18__::func_439(iParam0, 2, 1, 0);
			__LIB_18__::func_439(iParam0, 5, 2, 0);
			__LIB_18__::func_439(iParam0, 7, 2, 0);
			__LIB_18__::func_439(iParam0, 23, 15, 0);
			VEHICLE::RELEASE_PRELOAD_MODS(iParam0);
		}
	}
}

void func_520()//Position - 0x4D2C04
{
	__LIB_1__::func_348(65, 0, -1, 1);
	__LIB_1__::func_348(67, 0, -1, 1);
	__LIB_1__::func_348(69, 0, -1, 1);
	__LIB_1__::func_348(71, 0, -1, 1);
	__LIB_1__::func_348(17, 0, -1, 1);
	__LIB_1__::func_348(19, 0, -1, 1);
	__LIB_1__::func_348(21, 0, -1, 1);
	__LIB_1__::func_348(23, 0, -1, 1);
	__LIB_1__::func_348(25, 0, -1, 1);
	__LIB_1__::func_348(27, 0, -1, 1);
	__LIB_1__::func_348(29, 0, -1, 1);
	__LIB_1__::func_348(31, 0, -1, 1);
	__LIB_1__::func_348(33, 0, -1, 1);
	__LIB_1__::func_348(35, 0, -1, 1);
	__LIB_1__::func_348(37, 0, -1, 1);
	__LIB_1__::func_348(41, 0, -1, 1);
	__LIB_1__::func_348(43, 0, -1, 1);
	__LIB_1__::func_348(45, 0, -1, 1);
	__LIB_1__::func_348(47, 0, -1, 1);
	__LIB_1__::func_348(49, 0, -1, 1);
	__LIB_1__::func_348(53, 0, -1, 1);
	__LIB_1__::func_348(55, 0, -1, 1);
	__LIB_1__::func_348(59, 0, -1, 1);
	__LIB_1__::func_348(61, 0, -1, 1);
	__LIB_1__::func_348(63, 0, -1, 1);
	__LIB_1__::func_348(51, 0, -1, 1);
	__LIB_1__::func_348(74, 0, -1, 1);
	__LIB_1__::func_348(57, 0, -1, 1);
	__LIB_1__::func_348(39, 0, -1, 1);
	__LIB_1__::func_348(348, 0, -1, 1);
	__LIB_1__::func_348(144, 0, -1, 1);
	__LIB_1__::func_348(346, 0, -1, 1);
	__LIB_1__::func_348(350, 0, -1, 1);
	__LIB_1__::func_348(352, 0, -1, 1);
	__LIB_1__::func_348(373, 0, -1, 1);
	__LIB_1__::func_348(375, 0, -1, 1);
	__LIB_1__::func_348(379, 0, -1, 1);
	__LIB_1__::func_348(367, 0, -1, 1);
	__LIB_1__::func_348(377, 0, -1, 1);
	__LIB_1__::func_348(397, 0, -1, 1);
	__LIB_1__::func_348(393, 0, -1, 1);
	__LIB_1__::func_348(391, 0, -1, 1);
	__LIB_1__::func_348(401, 0, -1, 1);
	__LIB_1__::func_348(403, 0, -1, 1);
	__LIB_1__::func_348(405, 0, -1, 1);
	__LIB_1__::func_348(407, 0, -1, 1);
	__LIB_1__::func_348(409, 0, -1, 1);
	__LIB_1__::func_348(412, 0, -1, 1);
	__LIB_1__::func_348(414, 0, -1, 1);
	__LIB_1__::func_348(416, 0, -1, 1);
	__LIB_1__::func_348(395, 0, -1, 1);
	__LIB_1__::func_348(419, 0, -1, 1);
	__LIB_1__::func_348(421, 0, -1, 1);
	__LIB_1__::func_348(426, 0, -1, 1);
	__LIB_1__::func_348(432, 0, -1, 1);
	__LIB_1__::func_348(430, 0, -1, 1);
	__LIB_1__::func_348(428, 0, -1, 1);
	__LIB_1__::func_348(434, 0, -1, 1);
	__LIB_1__::func_348(436, 0, -1, 1);
	__LIB_1__::func_348(9, 0, -1, 1);
	__LIB_1__::func_348(474, 0, -1, 1);
	__LIB_1__::func_348(478, 0, -1, 1);
	__LIB_1__::func_348(480, 0, -1, 1);
	__LIB_1__::func_348(484, 0, -1, 1);
	__LIB_1__::func_348(482, 0, -1, 1);
	__LIB_1__::func_348(496, 0, -1, 1);
	__LIB_1__::func_348(498, 0, -1, 1);
}

int func_521()//Position - 0x4EC56F
{
	switch (__LIB_25__::func_575())
	{
		case 2:
		case 3:
		case 4:
		case 5:
		case 8:
		case 9:
			return 0;
		default:
	}
	return 1;
}

void func_522(bool bParam0, int iParam1, bool bParam2, bool bParam3)//Position - 0x4EC5BA
{
	var uVar0;
	if (__LIB_3__::func_451(bParam0))
	{
		return;
	}
	if (iParam1 < 0 || iParam1 > 16)
	{
		bParam2 = false;
	}
	if (__LIB_3__::func_440(&(Global_2678393.f_690[bParam0]), &(Global_2678393.f_1053[bParam0]), &(Global_2678393.f_391), bParam2, bParam0, bParam3, &uVar0))
	{
		if (bParam2)
		{
			Global_2678393.f_525[bParam0] = iParam1;
		}
	}
}

int func_523()//Position - 0x70D9
{
	int iVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	iVar2 = 0;
	while (iVar2 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		iVar0 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar2);
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar0))
		{
			bVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar0);
			if (!__LIB_2__::func_40(bVar1, 0))
			{
				bVar3 = bVar1;
				if (Global_1853348[bVar3 /*834*/].f_136.f_1 != 0)
				{
					if (iVar4 == 0)
					{
						iVar4 = Global_1853348[bVar3 /*834*/].f_136.f_1;
					}
					else if (iVar4 != Global_1853348[bVar3 /*834*/].f_136.f_1)
					{
						return 1;
					}
				}
			}
		}
		iVar2++;
	}
	return 0;
}

int func_524()//Position - 0x9B75
{
	int iVar0;
	bool bVar1;
	int iVar2;
	iVar2 = 1;
	iVar0 = 0;
	while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			bVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0));
			if (__LIB_1__::func_693(bVar1, 0, 1))
			{
				if (Global_262145.f_4708 /* Tunable: DISABLE_2536151_FIX */ == 0 || ((!__LIB_2__::func_40(bVar1, 0) && !__LIB_10__::func_767(bVar1)) && !__LIB_25__::func_272(bVar1)))
				{
					if (!BitTest(Global_1888862[iVar0 /*120*/].f_5, 0))
					{
						iVar2 = 0;
					}
				}
			}
		}
		iVar0++;
	}
	return iVar2;
}

int func_525(bool bParam0)//Position - 0x169E1
{
	bool bVar0;
	bVar0 = PLAYER::INT_TO_PLAYERINDEX(bParam0);
	if ((((NETWORK::NETWORK_IS_PLAYER_ACTIVE(bVar0) && !__LIB_25__::func_300(bVar0)) && !__LIB_2__::func_40(bVar0, 0)) && !__LIB_10__::func_767(bVar0)) && !__LIB_25__::func_272(bVar0))
	{
		return 1;
	}
	return 0;
}

int func_526()//Position - 0x1DAF7
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	iVar0 = 0;
	while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		iVar3 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar0);
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar3))
		{
			iVar4 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar3);
			if (((!__LIB_2__::func_40(iVar4, 0) && !__LIB_25__::func_300(iVar4)) && !__LIB_10__::func_226(iVar4)) && !__LIB_10__::func_767(iVar4))
			{
				iVar2 = iVar4;
				if (Global_1853348[iVar2 /*834*/].f_96.f_28 + 1 > iVar1)
				{
					iVar1 = Global_1853348[iVar2 /*834*/].f_96.f_28 + 1;
				}
			}
		}
		iVar0++;
	}
	if (Global_4718592.f_592 > iVar1)
	{
		iVar1 = Global_4718592.f_592;
	}
	return iVar1;
}

int func_527(int iParam0)//Position - 0x72FFA
{
	if (((((((((__LIB_0__::func_971(PLAYER::PLAYER_ID()) || __LIB_0__::func_970(PLAYER::PLAYER_ID())) || iParam0) || __LIB_5__::func_873(PLAYER::PLAYER_ID())) || __LIB_0__::func_177()) || __LIB_1__::func_749()) || __LIB_2__::func_306()) || __LIB_1__::func_2()) || __LIB_0__::func_622()) || __LIB_12__::func_224())
	{
		if (Global_4718592.f_116524 == Global_262145.f_9048 /* Tunable: ROOT_ID_HASH_TUTORIAL_SCOPE_OUT */)
		{
			return 0;
		}
		else if (Global_4718592.f_116524 == Global_262145.f_9049 /* Tunable: ROOT_ID_HASH_TUTORIAL_CAR */)
		{
			return 1;
		}
		else if (Global_4718592.f_116524 == Global_262145.f_9050 /* Tunable: ROOT_ID_HASH_THE_FLECCA_JOB */)
		{
			return 2;
		}
		else if (Global_4718592.f_116524 == Global_262145.f_9051 /* Tunable: ROOT_ID_HASH_PRISON_BREAK_PLANE */)
		{
			return 3;
		}
		else if (Global_4718592.f_116524 == Global_262145.f_9052 /* Tunable: ROOT_ID_HASH_PRISON_BREAK_BUS */)
		{
			return 4;
		}
		else if (Global_4718592.f_116524 == Global_262145.f_9053 /* Tunable: ROOT_ID_HASH_PRISON_BREAK_STATION */)
		{
			return 5;
		}
		else if (Global_4718592.f_116524 == Global_262145.f_9054 /* Tunable: ROOT_ID_HASH_PRISON_BREAK_UNFSHD_BIZ */ || Global_4718592.f_116524 == Global_262145.f_9076 /* Tunable: ROOT_ID_HASH_PRISON_BREAK_UNFSHD_ALT */)
		{
			return 6;
		}
		else if (Global_4718592.f_116524 == Global_262145.f_9055 /* Tunable: ROOT_ID_HASH_THE_PRISON_BREAK */)
		{
			return 7;
		}
		else if (Global_4718592.f_116524 == Global_262145.f_9056 /* Tunable: ROOT_ID_HASH_HUMANE_LABS_VALKYRIE */)
		{
			return 8;
		}
		else if (Global_4718592.f_116524 == Global_262145.f_9057 /* Tunable: ROOT_ID_HASH_HUMANE_LABS_KEY_CODES */)
		{
			return 9;
		}
		else if (Global_4718592.f_116524 == Global_262145.f_9058 /* Tunable: ROOT_ID_HASH_HUMANE_LABS_KEY_CODES_2 */)
		{
			return 10;
		}
		else if (Global_4718592.f_116524 == Global_262145.f_9059 /* Tunable: ROOT_ID_HASH_HUMANE_LABS_INSURGENTS */)
		{
			return 11;
		}
		else if (Global_4718592.f_116524 == Global_262145.f_9060 /* Tunable: ROOT_ID_HASH_HUMANE_LABS_EMP */ || Global_4718592.f_116524 == Global_262145.f_9081 /* Tunable: ROOT_ID_HASH_HUMANE_LABS_EMP_V2 */)
		{
			return 12;
		}
		else if (Global_4718592.f_116524 == Global_262145.f_9061 /* Tunable: ROOT_ID_HASH_HUMANE_LABS_DELIVER_EMP */)
		{
			return 13;
		}
		else if (Global_4718592.f_116524 == Global_262145.f_9062 /* Tunable: ROOT_ID_HASH_THE_HUMANE_LABS_RAID */)
		{
			return 14;
		}
		else if ((Global_4718592.f_116524 == Global_262145.f_9063 /* Tunable: ROOT_ID_HASH_SERIES_A_BIKERS */ || Global_4718592.f_116524 == Global_262145.f_9079 /* Tunable: ROOT_ID_HASH_SERIES_A_BIKERS_2 */) || Global_4718592.f_116524 == Global_262145.f_9080 /* Tunable: ROOT_ID_HASH_SERIES_A_BIKERS_3 */)
		{
			return 15;
		}
		else if (Global_4718592.f_116524 == Global_262145.f_9064 /* Tunable: ROOT_ID_HASH_SERIES_A_STEAL_METH */)
		{
			return 16;
		}
		else if (Global_4718592.f_116524 == Global_262145.f_9065 /* Tunable: ROOT_ID_HASH_SERIES_A_COKE */)
		{
			return 17;
		}
		else if ((Global_4718592.f_116524 == Global_262145.f_9066 /* Tunable: ROOT_ID_HASH_SERIES_A_TRASH_TRUCK */ || Global_4718592.f_116524 == Global_262145.f_9077 /* Tunable: ROOT_ID_HASH_SERIES_A_TRASH_TRUCKV2 */) || Global_4718592.f_116524 == Global_262145.f_9078 /* Tunable: ROOT_ID_HASH_SERIES_A_TRASH_TRUCKV3 */)
		{
			return 18;
		}
		else if (Global_4718592.f_116524 == Global_262145.f_9067 /* Tunable: ROOT_ID_HASH_SERIES_A_WEED */)
		{
			return 19;
		}
		else if (Global_4718592.f_116524 == Global_262145.f_9068 /* Tunable: ROOT_ID_HASH_SERIES_A_FUNDING */)
		{
			return 20;
		}
		else if (Global_4718592.f_116524 == Global_262145.f_9069 /* Tunable: ROOT_ID_HASH_PACIFIC_STANDARD_VANS */)
		{
			return 21;
		}
		else if (Global_4718592.f_116524 == Global_262145.f_9070 /* Tunable: ROOT_ID_HASH_PACIFIC_STANDARD_CONVOY */)
		{
			return 22;
		}
		else if (Global_4718592.f_116524 == Global_262145.f_9071 /* Tunable: ROOT_ID_HASH_PACIFIC_STANDARD_BIKE */)
		{
			return 23;
		}
		else if (Global_4718592.f_116524 == Global_262145.f_9072 /* Tunable: ROOT_ID_HASH_PACIFIC_STANDARD_HACK */)
		{
			return 24;
		}
		else if (Global_4718592.f_116524 == Global_262145.f_9073 /* Tunable: ROOT_ID_HASH_PACIFIC_STANDARD_WITSEC */)
		{
			return 25;
		}
		else if (Global_4718592.f_116524 == Global_262145.f_9074 /* Tunable: ROOT_ID_HASH_THE_PACIFIC_STANDARD_JOB */)
		{
			return 26;
		}
		else if (Global_4718592.f_116524 == Global_262145.f_9075 /* Tunable: ROOT_ID_HASH_THE_PACIFIC_STANDARD_JOB2 */ || Global_4718592.f_116524 == Global_262145.f_9082 /* Tunable: ROOT_ID_HASH_THE_PACIFIC_STANDARD_JOB2A */)
		{
			return 27;
		}
		else if (Global_4718592.f_116524 == Global_262145.f_5041[0])
		{
			return 29;
		}
		else if (Global_4718592.f_116524 == Global_262145.f_5041[1])
		{
			return 30;
		}
		else if (Global_4718592.f_116524 == Global_262145.f_5041[2])
		{
			return 31;
		}
		else if (Global_4718592.f_116524 == Global_262145.f_5041[3])
		{
			return 32;
		}
		else if (Global_4718592.f_116524 == Global_262145.f_5041[4])
		{
			return 33;
		}
		else if (Global_4718592.f_116524 == Global_262145.f_5041[5])
		{
			return 34;
		}
		else if (Global_4718592.f_116524 == Global_262145.f_5041[6])
		{
			return 35;
		}
		else if (Global_4718592.f_116524 == Global_262145.f_5041[7])
		{
			return 36;
		}
		else if (Global_4718592.f_116524 == Global_262145.f_5041[8])
		{
			return 37;
		}
		else if (Global_4718592.f_116524 == Global_262145.f_5041[9])
		{
			return 38;
		}
		else if (Global_4718592.f_116524 == Global_262145.f_5041[10])
		{
			return 39;
		}
		else if (Global_4718592.f_116524 == Global_262145.f_5041[11])
		{
			return 40;
		}
		else if (Global_4718592.f_116524 == Global_262145.f_5041[12])
		{
			return 41;
		}
		else if (Global_4718592.f_116524 == Global_262145.f_5041[13])
		{
			return 42;
		}
		else if (Global_4718592.f_116524 == Global_262145.f_5041[14])
		{
			return 43;
		}
		else if (Global_4718592.f_116524 == Global_262145.f_5041[15])
		{
			return 44;
		}
		else if (Global_4718592.f_116524 == Global_262145.f_6086[0])
		{
			return 45;
		}
		else if (Global_4718592.f_116524 == Global_262145.f_6086[1])
		{
			return 46;
		}
		else if (Global_4718592.f_116524 == Global_262145.f_6086[2])
		{
			return 47;
		}
		else if (Global_4718592.f_116524 == Global_262145.f_6086[3])
		{
			return 48;
		}
		else if (Global_4718592.f_116524 == Global_262145.f_6086[4])
		{
			return 49;
		}
		else if (Global_4718592.f_116524 == Global_262145.f_6086[5])
		{
			return 50;
		}
		else if (Global_4718592.f_116524 == Global_262145.f_6086[6])
		{
			return 51;
		}
		else if (Global_4718592.f_116524 == Global_262145.f_6086[7])
		{
			return 52;
		}
		else if (Global_4718592.f_116524 == Global_262145.f_6086[8])
		{
			return 53;
		}
		else if (Global_4718592.f_116524 == Global_262145.f_6086[9])
		{
			return 54;
		}
		else if (Global_4718592.f_116524 == Global_262145.f_6086[10])
		{
			return 55;
		}
		else if (Global_4718592.f_116524 == Global_262145.f_6086[11])
		{
			return 56;
		}
		else if (Global_4718592.f_116524 == Global_262145.f_6086[12])
		{
			return 57;
		}
		else if (Global_4718592.f_116524 == Global_262145.f_6086[13])
		{
			return 58;
		}
		else if (Global_4718592.f_116524 == Global_262145.f_6086[14])
		{
			return 59;
		}
		else if (Global_4718592.f_116524 == Global_262145.f_6086[15])
		{
			return 60;
		}
		else if (Global_4718592.f_116524 == Global_262145.f_6086[16])
		{
			return 61;
		}
		else if (Global_4718592.f_116524 == Global_262145.f_6086[17])
		{
			return 62;
		}
		else if (Global_4718592.f_116524 == Global_262145.f_6086[18])
		{
			return 63;
		}
		else if (Global_4718592.f_116524 == Global_262145.f_6086[19])
		{
			return 64;
		}
		else if (Global_4718592.f_116524 == Global_262145.f_6086[20])
		{
			return 65;
		}
		else if (Global_4718592.f_116524 == Global_262145.f_29921[0])
		{
			return 66;
		}
		else if (Global_4718592.f_116524 == Global_262145.f_29921[1])
		{
			return 67;
		}
		else if (Global_4718592.f_116524 == Global_262145.f_29921[2])
		{
			return 68;
		}
		else if (Global_4718592.f_116524 == Global_262145.f_29921[3])
		{
			return 69;
		}
		else if (Global_4718592.f_116524 == Global_262145.f_29921[4])
		{
			return 70;
		}
		else if (Global_4718592.f_116524 == Global_262145.f_29921[5])
		{
			return 71;
		}
		else if (Global_4718592.f_116524 == Global_262145.f_29921[6])
		{
			return 72;
		}
		else if (Global_4718592.f_116524 == Global_262145.f_29921[7])
		{
			return 73;
		}
		else if (Global_4718592.f_116524 == Global_262145.f_29921[8])
		{
			return 74;
		}
		else if (Global_4718592.f_116524 == Global_262145.f_29921[9])
		{
			return 75;
		}
		else if (Global_4718592.f_116524 == Global_262145.f_29921[10])
		{
			return 76;
		}
		return -1;
	}
	return -1;
}

int func_528(bool bParam0)//Position - 0x77C55
{
	if (__LIB_10__::func_774(bParam0, 1, 0) && !__LIB_10__::func_774(bParam0, 0, 0))
	{
		return 1;
	}
	return 0;
}

void func_529()//Position - 0x78D46
{
	if (!__LIB_2__::func_733(0) == Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_769)
	{
		__LIB_1__::func_518(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_769));
	}
	else
	{
		Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_769 = 0;
	}
}

int func_530()//Position - 0xBDEFD
{
	int iVar0;
	bool bVar1;
	int iVar2;
	iVar2 = 0;
	while (iVar2 < 17)
	{
		iVar0 = __LIB_9__::func_8(iVar2);
		if (__LIB_9__::func_7(iVar0))
		{
			bVar1 = __LIB_10__::func_458(iVar0);
			if (!bVar1)
			{
				return 0;
			}
		}
		iVar2++;
	}
	return 1;
}

void func_531(char[4] cParam0, char* sParam1, int iParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)//Position - 0x11CB1F
{
	char* sVar0;
	if (iParam2 == 0)
	{
		if (bParam9)
		{
			sVar0 = "CELEB_FINCOMP" /* GXT: COMPLETE */;
		}
		else if (bParam8)
		{
			sVar0 = "CELEB_WINNERS" /* GXT: WINNERS */;
		}
		else
		{
			sVar0 = "CELEB_WINNER" /* GXT: Winner */;
		}
	}
	else if (iParam2 == 1)
	{
		sVar0 = "CELEB_LOSER" /* GXT: Loser */;
	}
	else if (iParam2 == 3)
	{
		sVar0 = "CELEB_PASSED" /* GXT: PASSED */;
	}
	else if (iParam2 == 4)
	{
		sVar0 = "CELEB_FAILED" /* GXT: FAILED */;
	}
	else
	{
		sVar0 = "CELEB_DRAW" /* GXT: Draw */;
		sParam3 = "";
		sParam4 = "";
	}
	if (!__LIB_1__::func_338() || !__LIB_18__::func_167(PLAYER::PLAYER_ID()))
	{
		sParam4 = "";
	}
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*cParam0, "ADD_WINNER_TO_WALL");
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam1);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	if (!bParam9)
	{
		__LIB_0__::func_700(sVar0);
	}
	else
	{
		GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sVar0);
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2715699.f_3479.f_60));
		GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	}
	__LIB_0__::func_700(sParam3);
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam4);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam6);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bParam7);
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam5);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	if (bParam10)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(cParam0->f_1, "ADD_WINNER_TO_WALL");
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam1);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	if (!bParam9)
	{
		__LIB_0__::func_700(sVar0);
	}
	else
	{
		GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sVar0);
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2715699.f_3479.f_60));
		GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	}
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam3);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam4);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam6);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bParam7);
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam5);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	if (bParam10)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(cParam0->f_2, "ADD_WINNER_TO_WALL");
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam1);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	if (!bParam9)
	{
		__LIB_0__::func_700(sVar0);
	}
	else
	{
		GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sVar0);
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2715699.f_3479.f_60));
		GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	}
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam3);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam4);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam6);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bParam7);
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam5);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	if (bParam10)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

bool func_532()//Position - 0x12F7A1
{
	return __LIB_25__::func_609(PLAYER::PLAYER_ID());
}

void func_533(bool bParam0, int iParam1, int iParam2)//Position - 0x132245
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		__LIB_1__::func_607();
		if (iParam2 == -1)
		{
			iParam2 = __LIB_1__::func_360(2042, -1, 0);
		}
		PLAYER::SET_PLAYER_PARACHUTE_VARIATION_OVERRIDE(bParam0, 5, __LIB_0__::func_533(PLAYER::GET_PLAYER_PED(bParam0), iParam2), __LIB_0__::func_242(PLAYER::GET_PLAYER_PED(bParam0), iParam2), false);
		PLAYER::SET_PLAYER_PARACHUTE_PACK_TINT_INDEX(bParam0, __LIB_0__::func_114(PLAYER::GET_PLAYER_PED(bParam0), iParam2));
		PED::SET_PED_COMPONENT_VARIATION(PLAYER::GET_PLAYER_PED(bParam0), 5, __LIB_0__::func_533(PLAYER::GET_PLAYER_PED(bParam0), iParam2), __LIB_0__::func_242(PLAYER::GET_PLAYER_PED(bParam0), iParam2), __LIB_0__::func_114(PLAYER::GET_PLAYER_PED(bParam0), iParam2));
		if (iParam1 == -1)
		{
			iParam1 = __LIB_1__::func_360(586, -1, 0);
		}
		if (__LIB_2__::func_159(1) && __LIB_5__::func_799(bParam0))
		{
			__LIB_6__::func_276(bParam0, __LIB_1__::func_715(Global_2824753), 0);
		}
		else
		{
			__LIB_6__::func_276(bParam0, iParam1, 0);
		}
		if (BitTest(Global_4718592.f_28, 4))
		{
			__LIB_6__::func_276(bParam0, Global_1836612, 1);
		}
		__LIB_0__::func_440(bParam0, iParam2);
		PED::SET_PED_RESET_FLAG(PLAYER::GET_PLAYER_PED(bParam0), 177, true);
	}
}

int func_534(bool bParam0, bool bParam1, bool bParam2)//Position - 0x139E49
{
	if (!__LIB_15__::func_614(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if (!PLAYER::IS_PLAYER_TARGETTING_ANYTHING(PLAYER::PLAYER_ID()))
		{
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 140 /*INPUT_MELEE_ATTACK_LIGHT*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 80 /*INPUT_VEH_CIN_CAM*/, true);
			if (PAD::IS_DISABLED_CONTROL_JUST_RELEASED(0 /*PLAYER_CONTROL*/, 80 /*INPUT_VEH_CIN_CAM*/))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_535(bool bParam0, bool bParam1, bool bParam2)//Position - 0x139E9B
{
	if (!__LIB_15__::func_614(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 80 /*INPUT_VEH_CIN_CAM*/, true);
		if (CAM::IS_FOLLOW_VEHICLE_CAM_ACTIVE())
		{
			if (PAD::IS_DISABLED_CONTROL_JUST_RELEASED(0 /*PLAYER_CONTROL*/, 80 /*INPUT_VEH_CIN_CAM*/))
			{
				CAM::SET_CINEMATIC_BUTTON_ACTIVE(false);
				return 1;
			}
		}
	}
	return 0;
}

int func_536(bool bParam0, bool bParam1, bool bParam2)//Position - 0x139EE4
{
	if (!__LIB_15__::func_614(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if (!PLAYER::IS_PLAYER_TARGETTING_ANYTHING(PLAYER::PLAYER_ID()))
		{
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 140 /*INPUT_MELEE_ATTACK_LIGHT*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 80 /*INPUT_VEH_CIN_CAM*/, true);
			if (PAD::IS_DISABLED_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 80 /*INPUT_VEH_CIN_CAM*/) && MISC::GET_GAME_TIMER() > Global_116)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_537(bool bParam0, bool bParam1, bool bParam2)//Position - 0x139F43
{
	if (!__LIB_15__::func_614(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 80 /*INPUT_VEH_CIN_CAM*/, true);
		if (CAM::IS_FOLLOW_VEHICLE_CAM_ACTIVE())
		{
			if (PAD::IS_DISABLED_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 80 /*INPUT_VEH_CIN_CAM*/) && MISC::GET_GAME_TIMER() > Global_116)
			{
				CAM::SET_CINEMATIC_BUTTON_ACTIVE(false);
				return 1;
			}
		}
	}
	return 0;
}

void func_538(struct<3> Param0, struct<3> Param1, float fParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x17A29B
{
	struct<3> Var0[64];
	struct<3> Var1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	__LIB_24__::func_890(Param0, Param1, fParam2, &Var0);
	Var1 = { __LIB_0__::func_835(Var0[1 /*3*/] - Var0[0 /*3*/], Var0[32 /*3*/] - Var0[0 /*3*/]) };
	bVar2 = __LIB_0__::func_158(Var1, Param0 - Var0[0 /*3*/]) < 0f;
	iVar3 = 0;
	while (iVar3 < 32)
	{
		iVar4 = iVar3 + 1;
		iVar5 = iVar3 + 32;
		iVar6 = iVar5 + 1;
		if (iVar3 + 1 >= 32)
		{
			iVar4 = 0;
			iVar6 = 32;
		}
		if (bVar2)
		{
			GRAPHICS::DRAW_POLY(Var0[iVar4 /*3*/], Var0[iVar3 /*3*/], Param0, iParam3, iParam4, iParam5, iParam6);
			GRAPHICS::DRAW_POLY(Var0[iVar5 /*3*/], Var0[iVar6 /*3*/], Param1, iParam3, iParam4, iParam5, iParam6);
			GRAPHICS::DRAW_POLY(Var0[iVar3 /*3*/], Var0[iVar4 /*3*/], Var0[iVar5 /*3*/], iParam3, iParam4, iParam5, iParam6);
			GRAPHICS::DRAW_POLY(Var0[iVar4 /*3*/], Var0[iVar6 /*3*/], Var0[iVar5 /*3*/], iParam3, iParam4, iParam5, iParam6);
		}
		else
		{
			GRAPHICS::DRAW_POLY(Var0[iVar4 /*3*/], Param0, Var0[iVar3 /*3*/], iParam3, iParam4, iParam5, iParam6);
			GRAPHICS::DRAW_POLY(Var0[iVar5 /*3*/], Param1, Var0[iVar6 /*3*/], iParam3, iParam4, iParam5, iParam6);
			GRAPHICS::DRAW_POLY(Var0[iVar3 /*3*/], Var0[iVar5 /*3*/], Var0[iVar4 /*3*/], iParam3, iParam4, iParam5, iParam6);
			GRAPHICS::DRAW_POLY(Var0[iVar4 /*3*/], Var0[iVar5 /*3*/], Var0[iVar6 /*3*/], iParam3, iParam4, iParam5, iParam6);
		}
		iVar3++;
	}
}

Vector3 func_539(int iParam0, int iParam1)//Position - 0x1866E7
{
	struct<3> Var0;
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		Var0 = { __LIB_24__::func_741(ENTITY::GET_ENTITY_ROTATION(iParam1, 2) - ENTITY::GET_ENTITY_ROTATION(iParam0, 2)) };
	}
	return Var0;
}

void func_540(var uParam0, bool bParam1)//Position - 0x1CB470
{
	PAD::ALLOW_ALTERNATIVE_SCRIPT_CONTROLS_LAYOUT(0 /*PLAYER_CONTROL*/);
	PAD::ALLOW_ALTERNATIVE_SCRIPT_CONTROLS_LAYOUT(2 /*FRONTEND_CONTROL*/);
	GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(false);
	__LIB_0__::func_876(1);
	__LIB_0__::func_612(4, -1);
	__LIB_0__::func_189();
	__LIB_1__::func_733();
	__LIB_0__::func_502();
	RECORDING::REPLAY_PREVENT_RECORDING_THIS_FRAME();
	if (!bParam1)
	{
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 75 /*INPUT_VEH_EXIT*/, true);
	}
	if (uParam0->f_24 > 2)
	{
		__LIB_1__::func_33(0);
	}
	__LIB_25__::func_623(uParam0);
	__LIB_20__::func_818(uParam0);
	if (!HUD::IS_PAUSE_MENU_ACTIVE() && uParam0->f_24 > 2)
	{
		HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
		GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(1);
	}
}

void func_541(var uParam0)//Position - 0x1CC017
{
	int iVar0;
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST((*uParam0)[1]))
	{
		iVar0 = NETWORK::NET_TO_OBJ((*uParam0)[1]);
		if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID((*uParam0)[1]))
		{
			OBJECT::DELETE_OBJECT(&iVar0);
		}
		else
		{
			__LIB_1__::func_518(uParam0[1]);
		}
		if (__LIB_6__::func_273(PLAYER::PLAYER_ID()))
		{
			NETWORK::RESERVE_LOCAL_NETWORK_MISSION_OBJECTS((NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(false, 1) - 1));
		}
		else
		{
			NETWORK::RESERVE_NETWORK_MISSION_OBJECTS((NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(false, 0) - 1));
		}
	}
}

int func_542(bool bParam0)//Position - 0x1CD5D5
{
	if (__LIB_10__::func_767(bParam0))
	{
		return 1;
	}
	if (__LIB_2__::func_40(bParam0, 0))
	{
		return 1;
	}
	return 0;
}

void func_543(int iParam0)//Position - 0x1CF145
{
	struct<3> Var0;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_0 = -525890435;
	Var0.f_2 = iParam0;
	SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 3, __LIB_3__::func_206(1, 1));
}

void func_544(int iParam0)//Position - 0x1D21FD
{
	struct<3> Var0;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_0 = 432342330;
	Var0.f_2 = iParam0;
	SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 3, __LIB_3__::func_206(1, 1));
}

void func_545()//Position - 0x1E2CB1
{
	struct<2> Var0;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_0 = -254870189;
	SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 2, __LIB_3__::func_206(1, 1));
}

int func_546(bool bParam0)//Position - 0x1FD832
{
	if (__LIB_3__::func_559() || __LIB_0__::func_833())
	{
		return 0;
	}
	if (__LIB_2__::func_72(bParam0, 0))
	{
		if (__LIB_6__::func_82(__LIB_2__::func_39(bParam0)))
		{
			if (__LIB_25__::func_633(__LIB_2__::func_39(bParam0)))
			{
				if (!__LIB_25__::func_503(__LIB_2__::func_39(bParam0)))
				{
					return 1;
				}
				return 0;
			}
			return 0;
		}
		return 0;
	}
	if (__LIB_6__::func_82(bParam0))
	{
		if (__LIB_25__::func_633(bParam0))
		{
			if (!__LIB_25__::func_503(bParam0))
			{
				return 1;
			}
			return 0;
		}
		return 0;
	}
	return 0;
}

int func_547(bool bParam0)//Position - 0x1FE127
{
	if (Global_1946250.f_4519 != -1 && __LIB_0__::func_172(Global_1946250.f_4519) != 17)
	{
		return 0;
	}
	if (__LIB_2__::func_72(bParam0, 0))
	{
		if (__LIB_6__::func_92(__LIB_2__::func_39(bParam0)))
		{
			return 1;
		}
		return 0;
	}
	if (__LIB_6__::func_92(bParam0))
	{
		return 1;
	}
	return 0;
}

bool func_548(bool bParam0)//Position - 0x1FE6B7
{
	return 0 == __LIB_8__::func_106(bParam0);
}

void func_549(bool bParam0)//Position - 0x239FB0
{
	struct<3> Var0;
	int iVar1;
	Var0.f_0 = -1254176817;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = bParam0;
	iVar1 = __LIB_3__::func_206(0, 1);
	if (!iVar1 == 0)
	{
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 3, iVar1);
	}
}

void func_550(bool bParam0, int iParam1)//Position - 0x240CE1
{
	struct<4> Var0;
	Var0.f_0 = -1559932937;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = iParam1;
	Var0.f_3 = bParam0;
	SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 4, __LIB_3__::func_206(1, 1));
}

void func_551(var uParam0)//Position - 0x252C67
{
	int iVar0;
	struct<3> Var1;
	iVar0 = __LIB_3__::func_206(1, 1);
	if (iVar0 != 0)
	{
		Var1.f_0 = -1928371445;
		Var1.f_1 = PLAYER::PLAYER_ID();
		Var1.f_2 = { *uParam0 };
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var1, 7, iVar0);
	}
}

void func_552()//Position - 0x2797A0
{
	CAM::SET_WIDESCREEN_BORDERS(false, -1);
	__LIB_13__::func_617();
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		WEAPON::HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE(PLAYER::PLAYER_PED_ID(), false);
		if (!Global_78319)
		{
			PLAYER::SET_EVERYONE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), false);
			PED::CLEAR_FACIAL_IDLE_ANIM_OVERRIDE(PLAYER::PLAYER_PED_ID());
		}
	}
	Global_102575 = 0;
	__LIB_5__::func_943(0, 1, 1, 0, 0, 0, 0);
}

void func_553(int iParam0)//Position - 0x27C7C0
{
	if (__LIB_7__::func_242(iParam0))
	{
		if (!__LIB_2__::func_154(PLAYER::PLAYER_ID()))
		{
			if (__LIB_1__::func_208(iParam0))
			{
				__LIB_25__::func_336();
			}
			else
			{
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 0 /*INPUT_NEXT_CAMERA*/, true);
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(CAM::GET_CAM_ACTIVE_VIEW_MODE_CONTEXT()) != 4)
				{
					CAM::SET_CAM_VIEW_MODE_FOR_CONTEXT(CAM::GET_CAM_ACTIVE_VIEW_MODE_CONTEXT(), 4);
				}
			}
		}
	}
	else if (Global_1659868 != CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(CAM::GET_CAM_ACTIVE_VIEW_MODE_CONTEXT()))
	{
		__LIB_2__::func_407();
	}
}

void func_554(var uParam0)//Position - 0x27EC51
{
	bool bVar0;
	bVar0 = false;
	if (((STREAMING::IS_NEW_LOAD_SCENE_ACTIVE() || PLAYER::IS_PLAYER_TELEPORT_ACTIVE()) || !__LIB_0__::func_893()) || uParam0->f_48)
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		__LIB_25__::func_630(uParam0);
	}
	uParam0->f_48 = 0;
}

void func_555(var uParam0, int iParam1)//Position - 0x28016E
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	struct<3> Var7;
	float fVar8;
	int iVar9;
	char* sVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	struct<3> Var15;
	var uVar16;
	struct<3> Var17;
	var uVar18;
	float fVar19;
	float fVar20;
	float fVar21;
	int iVar22;
	iVar0 = PLAYER::PLAYER_PED_ID();
	iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar0);
	bVar2 = __LIB_0__::func_121(iVar0);
	if (__LIB_21__::func_953(iParam1) && STREAMING::HAS_MODEL_LOADED(iParam1))
	{
		bVar3 = (ENTITY::DOES_ENTITY_EXIST(*uParam0) && __LIB_0__::func_121(*uParam0));
		if (bVar3)
		{
			ENTITY::SET_ENTITY_COLLISION(*uParam0, false, false);
		}
		uParam0->f_26 = VEHICLE::CREATE_VEHICLE(iParam1, uParam0->f_12.f_3, uParam0->f_12.f_12, !__LIB_0__::func_157(0), false, false);
		PED::SET_PED_RESET_FLAG(iVar0, 236, true);
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_26) && __LIB_0__::func_121(uParam0->f_26))
		{
			if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(1) == 4)
			{
				if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING("MP_TransformRaceFlash"))
				{
					GRAPHICS::ANIMPOSTFX_PLAY("MP_TransformRaceFlash", 2000, false);
				}
			}
			bVar4 = PED::IS_PED_IN_ANY_VEHICLE(iVar0, false);
			bVar5 = VEHICLE::IS_THIS_MODEL_A_HELI(iParam1);
			bVar6 = VEHICLE::IS_THIS_MODEL_A_PLANE(iParam1);
			__LIB_21__::func_955();
			CAM::SET_GAMEPLAY_CAM_IGNORE_ENTITY_COLLISION_THIS_UPDATE(uParam0->f_26);
			if (iParam1 == joaat("submersible") || iParam1 == joaat("submersible2"))
			{
				CAM::DISABLE_FIRST_PERSON_CAMERA_WATER_CLIPPING_TEST_THIS_UPDATE();
			}
			if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
			{
				CAM::SET_GAMEPLAY_CAM_IGNORE_ENTITY_COLLISION_THIS_UPDATE(*uParam0);
				if (iParam1 == joaat("thruster"))
				{
					Var7 = { ENTITY::GET_ENTITY_ROTATION(*uParam0, 2) };
					fVar8 = 150f;
					if (MISC::ABSF(Var7.f_1) > fVar8)
					{
						Var7.f_1 = 0f;
						ENTITY::SET_ENTITY_ROTATION(*uParam0, Var7, 2, true);
					}
				}
			}
			if (bVar4)
			{
				if (bVar3)
				{
					uParam0->f_12.f_3 = { ENTITY::GET_ENTITY_COORDS(*uParam0, true) };
					uParam0->f_12.f_12 = ENTITY::GET_ENTITY_HEADING(*uParam0);
					uParam0->f_12 = { ENTITY::GET_ENTITY_ROTATION(*uParam0, 2) };
					uParam0->f_12.f_9 = { ENTITY::GET_ENTITY_ROTATION_VELOCITY(*uParam0) };
					uParam0->f_12.f_6 = { ENTITY::GET_ENTITY_VELOCITY(*uParam0) };
				}
			}
			else if (bVar2)
			{
				uParam0->f_12.f_3 = { ENTITY::GET_ENTITY_COORDS(iVar0, true) };
				uParam0->f_12.f_12 = ENTITY::GET_ENTITY_HEADING(iVar0);
				uParam0->f_12 = { ENTITY::GET_ENTITY_ROTATION(iVar0, 2) };
				uParam0->f_12.f_9 = { ENTITY::GET_ENTITY_ROTATION_VELOCITY(iVar0) };
				if (PED::GET_PED_PARACHUTE_STATE(iVar0) == 2)
				{
					iVar9 = ENTITY::GET_ENTITY_ATTACHED_TO(iVar0);
					if (ENTITY::DOES_ENTITY_EXIST(iVar9))
					{
						uParam0->f_12.f_6 = { ENTITY::GET_ENTITY_VELOCITY(iVar9) };
					}
					else
					{
						uParam0->f_12.f_6 = { ENTITY::GET_ENTITY_VELOCITY(iVar0) };
					}
				}
				else
				{
					uParam0->f_12.f_6 = { ENTITY::GET_ENTITY_VELOCITY(iVar0) };
				}
				if (BitTest(uParam0->f_30, 0))
				{
					uParam0->f_12.f_6 = { uParam0->f_12.f_6, __LIB_3__::func_480(uParam0->f_12.f_6.f_1, uParam0->f_12.f_6.f_2), 0f };
					uParam0->f_12 = { 0f, uParam0->f_12.f_1, uParam0->f_12.f_2 };
				}
				__LIB_3__::func_375();
				PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 150, true);
			}
			if (bVar2)
			{
				uParam0->f_12.f_13 = ENTITY::GET_ENTITY_SPEED(iVar0);
			}
			if (bVar4)
			{
				ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(*uParam0, uParam0->f_26, false);
			}
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uParam0->f_26, false, true);
			ENTITY::SET_ENTITY_PROOFS(uParam0->f_26, false, false, true, false, false, false, false, false);
			if (__LIB_17__::func_982())
			{
				AUDIO::SET_USER_RADIO_CONTROL_ENABLED(false);
				AUDIO::SET_VEHICLE_RADIO_ENABLED(uParam0->f_26, false);
			}
			else
			{
				sVar10 = AUDIO::GET_RADIO_STATION_NAME(uParam0->f_3);
				AUDIO::SET_VEH_HAS_NORMAL_RADIO(uParam0->f_26);
				AUDIO::SET_VEH_RADIO_STATION(uParam0->f_26, sVar10);
			}
			if (iParam1 == joaat("hotring"))
			{
				VEHICLE::SET_VEHICLE_MOD_KIT(uParam0->f_26, 0);
				iVar11 = (VEHICLE::GET_NUM_VEHICLE_MODS(uParam0->f_26, 48) - 1);
				iVar12 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar11);
				VEHICLE::SET_VEHICLE_MOD(uParam0->f_26, 48, iVar12, false);
			}
			if (__LIB_1__::func_126() && __LIB_0__::func_157(0))
			{
				TASK::TASK_ENTER_VEHICLE(iVar0, uParam0->f_26, -1, -1, 2f, 16, 0);
			}
			else
			{
				PED::SET_PED_INTO_VEHICLE(iVar0, uParam0->f_26, -1);
			}
			if (bVar3)
			{
				ENTITY::SET_ENTITY_VISIBLE(*uParam0, false, false);
			}
			VEHICLE::SET_VEHICLE_ENGINE_ON(uParam0->f_26, true, true, false);
			HUD::RESET_RETICULE_VALUES();
			if (__LIB_1__::func_728(iVar1))
			{
				VEHICLE::GET_VEHICLE_COLOURS(*uParam0, &iVar13, &iVar14);
				__LIB_23__::func_527(uParam0->f_26, iVar13, -1, iVar14, -1, -1, -1082130432, -1);
			}
			if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("Not_Allow_As_Saved_Veh", 3))
			{
				DECORATOR::DECOR_SET_INT(uParam0->f_26, "Not_Allow_As_Saved_Veh", 1);
			}
			if (bVar5 || bVar6)
			{
				if (bVar5)
				{
					VEHICLE::SET_HELI_TURBULENCE_SCALAR(uParam0->f_26, 0.3f);
				}
				else
				{
					VEHICLE::SET_PLANE_TURBULENCE_MULTIPLIER(uParam0->f_26, 0f);
				}
				VEHICLE::SET_HELI_BLADES_FULL_SPEED(uParam0->f_26);
				if (VEHICLE::GET_VEHICLE_HAS_LANDING_GEAR(uParam0->f_26))
				{
					if (VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(*uParam0) && !__LIB_17__::func_982())
					{
						VEHICLE::CONTROL_LANDING_GEAR(uParam0->f_26, 2);
					}
					else
					{
						VEHICLE::CONTROL_LANDING_GEAR(uParam0->f_26, 3);
					}
				}
				if (iParam1 == joaat("hydra") || iParam1 == joaat("tula"))
				{
					VEHICLE::SET_VEHICLE_FLIGHT_NOZZLE_POSITION_IMMEDIATE(uParam0->f_26, 0f);
				}
			}
			if (!VEHICLE::GET_CAN_VEHICLE_BE_PLACED_HERE(uParam0->f_26, uParam0->f_12.f_3, uParam0->f_12, 2, 1) && !__LIB_0__::func_86(uParam0->f_6))
			{
				VEHICLE::GET_VEHICLE_SIZE(*uParam0, &Var15, &uVar16);
				VEHICLE::GET_VEHICLE_SIZE(uParam0->f_26, &Var17, &uVar18);
				fVar19 = SYSTEM::VDIST2(0f, 0f, Var15.f_2, 0f, 0f, Var17.f_2);
				uParam0->f_12.f_3.f_2 = (uParam0->f_12.f_3.f_2 + fVar19);
				if (!VEHICLE::GET_CAN_VEHICLE_BE_PLACED_HERE(uParam0->f_26, uParam0->f_12.f_3, uParam0->f_12, 2, 1))
				{
					uParam0->f_12.f_3 = { uParam0->f_6 };
					uParam0->f_12 = { uParam0->f_9 };
				}
			}
			if (VEHICLE::IS_THIS_MODEL_A_HELI(iParam1))
			{
				if (MISC::GET_GROUND_Z_FOR_3D_COORD(uParam0->f_12.f_3, &fVar20, true, false))
				{
					if ((uParam0->f_12.f_3.f_2 - fVar20) < 5f)
					{
						uParam0->f_12.f_3.f_2 = (uParam0->f_12.f_3.f_2 + 5f);
					}
				}
			}
			if (bVar6)
			{
				if (MISC::GET_GROUND_Z_FOR_3D_COORD(uParam0->f_12.f_3, &fVar21, true, false))
				{
					if ((uParam0->f_12.f_3.f_2 - fVar21) < 5f)
					{
						uParam0->f_12.f_3.f_2 = (uParam0->f_12.f_3.f_2 + 2.5f);
					}
				}
			}
			ENTITY::SET_ENTITY_COORDS_NO_OFFSET(uParam0->f_26, uParam0->f_12.f_3, false, false, true);
			ENTITY::SET_ENTITY_ROTATION(uParam0->f_26, uParam0->f_12, 2, true);
			if (bVar5)
			{
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(6) == 2)
				{
					CAM::SET_CAM_VIEW_MODE_FOR_CONTEXT(6, 1);
				}
			}
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iParam1);
			__LIB_1__::func_289(&(uParam0->f_2), 3);
		}
	}
	else if (__LIB_21__::func_953(iParam1))
	{
		STREAMING::REQUEST_MODEL(iParam1);
		if (!PED::IS_PED_IN_ANY_VEHICLE(iVar0, false))
		{
			if (__LIB_0__::func_121(iVar0))
			{
				PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 150, true);
			}
		}
	}
	else
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(iVar0, false))
		{
			if (__LIB_0__::func_121(*uParam0))
			{
				uParam0->f_12 = { ENTITY::GET_ENTITY_ROTATION(*uParam0, 2) };
				uParam0->f_12.f_6 = { ENTITY::GET_ENTITY_VELOCITY(*uParam0) };
				ENTITY::SET_ENTITY_COLLISION(*uParam0, false, false);
			}
		}
		else if (bVar2)
		{
			uParam0->f_12 = { ENTITY::GET_ENTITY_ROTATION(iVar0, 2) };
			if (PED::GET_PED_PARACHUTE_STATE(iVar0) == 2)
			{
				iVar22 = ENTITY::GET_ENTITY_ATTACHED_TO(iVar0);
				if (ENTITY::DOES_ENTITY_EXIST(iVar22))
				{
					uParam0->f_12.f_6 = { ENTITY::GET_ENTITY_VELOCITY(iVar22) };
				}
				else
				{
					uParam0->f_12.f_6 = { ENTITY::GET_ENTITY_VELOCITY(iVar0) };
				}
			}
			else
			{
				uParam0->f_12.f_6 = { ENTITY::GET_ENTITY_VELOCITY(iVar0) };
			}
		}
		if (bVar2)
		{
			if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(1) == 4)
			{
				GRAPHICS::ANIMPOSTFX_PLAY("MP_TransformRaceFlash", 2000, false);
			}
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(iVar0);
			PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), true, -1, 0);
			ENTITY::SET_ENTITY_ROTATION(iVar0, uParam0->f_12, 2, true);
			if (iParam1 == joaat("prop_cs_dildo_01"))
			{
				PHYSICS::ACTIVATE_PHYSICS(iVar0);
				if (BitTest(uParam0->f_30, 1) || __LIB_21__::func_957())
				{
					TASK::TASK_SKY_DIVE(iVar0, true);
				}
				else if (uParam0->f_12.f_6.f_2 > 1f)
				{
					PED::SET_PED_TO_RAGDOLL(iVar0, 0, 1000, 2, true, true, false);
				}
			}
			else if (iParam1 == joaat("v_res_d_dildo_b"))
			{
				PED::SET_PED_RESET_FLAG(iVar0, 217, true);
				MISC::SET_FORCED_JUMP_THIS_FRAME(iVar1);
				MISC::SET_BEAST_JUMP_THIS_FRAME(iVar1);
				AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "Beast_Attack", iVar0, "DLC_AR_Beast_Soundset", false, 0);
			}
			ENTITY::SET_ENTITY_VELOCITY(iVar0, uParam0->f_12.f_6);
			if (ENTITY::DOES_ENTITY_EXIST(*uParam0) && __LIB_0__::func_121(*uParam0))
			{
				ENTITY::SET_ENTITY_VISIBLE(*uParam0, false, false);
			}
			PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iVar0, false, false);
		}
		if (!BitTest(uParam0->f_30, 2))
		{
			NETWORK::SET_LOCAL_PLAYER_AS_GHOST(true, true);
		}
		else
		{
			NETWORK::SET_LOCAL_PLAYER_AS_GHOST(true, false);
		}
		ENTITY::SET_ENTITY_ALPHA(iVar0, 175, false);
		__LIB_1__::func_289(&(uParam0->f_2), 4);
	}
}

int func_556(bool bParam0, bool bParam1)//Position - 0x284F55
{
	if (__LIB_3__::func_294(bParam0, bParam1, -1))
	{
		if (BitTest(Global_1853348[bParam0 /*834*/].f_267.f_30, 3))
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_557(float fParam0, bool bParam1, int iParam2, int iParam3, int iParam4)//Position - 0x2859DC
{
	struct<3> Var0;
	float fVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	struct<3> Var6;
	struct<3> Var7;
	Var0 = { Global_4980736.f_179962[iParam2 /*3901*/][bParam1 /*65*/] };
	fVar1 = Global_4980736.f_179962[iParam2 /*3901*/][bParam1 /*65*/].f_3;
	if (iParam3 > -1)
	{
		iVar2 = Global_4980736.f_179962[iParam2 /*3901*/][bParam1 /*65*/].f_13;
		iVar3 = Global_4980736.f_179962[iParam2 /*3901*/][bParam1 /*65*/].f_14;
		uVar4 = Global_4980736.f_179962[iParam2 /*3901*/][bParam1 /*65*/].f_15;
		iVar5 = Global_4980736.f_179962[iParam2 /*3901*/][bParam1 /*65*/].f_16;
		if ((MISC::GET_FRAME_COUNT() % 60) == 0 || iParam4)
		{
		}
		switch (iVar2)
		{
			case 0:
				Var6 = { __LIB_24__::func_550(iParam3, uVar4, iVar3, Var0, fVar1) };
				break;
			case 1:
				Var6 = { __LIB_24__::func_549(iParam3, uVar4, iVar3, Var0, fVar1) };
				break;
			case 2:
				Var6 = { __LIB_24__::func_548(iParam3, uVar4, iVar3, Var0, fVar1) };
				break;
			case 3:
				Var6 = { __LIB_24__::func_727(iParam3, uVar4, iVar3, Var0, fVar1) };
				break;
		}
		if (iVar5 > 0)
		{
			Var7 = { Var6 };
			Var7 = { Var7 + Vector(__LIB_22__::func_881(iVar5), 0f, 0f) };
			MISC::GET_GROUND_Z_FOR_3D_COORD(Var7, &(Var6.f_2), false, false);
		}
		*fParam0 = fVar1;
		return Var6;
	}
	*fParam0 = fVar1;
	return Var0;
}

void func_558(int iParam0, bool bParam1)//Position - 0x28A35D
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	iVar0 = WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), *iParam0);
	iVar1 = __LIB_25__::func_678(*iParam0, 4);
	iVar2 = -1;
	if (__LIB_18__::func_921())
	{
		iVar2 = Global_4718592.f_92585[Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_96.f_28];
	}
	if (bParam1)
	{
		if (*iParam0 == __LIB_12__::func_842(iVar2) || iVar0 < iVar1)
		{
			iVar3 = 1;
		}
	}
	if (iVar0 == 0 || iVar3)
	{
		WEAPON::SET_PED_AMMO(PLAYER::PLAYER_PED_ID(), *iParam0, iVar1, false);
	}
}

void func_559(bool bParam0, bool bParam1, var uParam2, var uParam3, var uParam4)//Position - 0x28F649
{
	*uParam2 = 0;
	*uParam3 = 0;
	*uParam4 = 0;
	if (bParam1)
	{
		__LIB_14__::func_364(uParam2, uParam3, uParam4);
	}
	else if (Global_2689235[bParam0 /*453*/].f_23 != -1)
	{
		*uParam2 = Global_2689235[bParam0 /*453*/].f_23.f_7;
		*uParam3 = Global_2689235[bParam0 /*453*/].f_23.f_8;
		*uParam4 = Global_2689235[bParam0 /*453*/].f_23.f_9;
	}
}

int func_560(struct<3> Param0)//Position - 0x2AF4B6
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 42)
	{
		if (__LIB_12__::func_718(Param0, iVar0, 0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_561(int iParam0, int iParam1)//Position - 0x2AFF2B
{
	if (__LIB_0__::func_629())
	{
		return 0;
	}
	if (iParam0 > 0)
	{
		__LIB_22__::func_243();
	}
	if (!Global_2667225.f_2642)
	{
		if ((!CAM::IS_SCREEN_FADED_OUT() && __LIB_0__::func_893()) || (iParam1 == 1 && __LIB_25__::func_621() == 0))
		{
			if (!CAM::IS_SCREEN_FADING_OUT() && !CAM::IS_SCREEN_FADING_IN())
			{
				CAM::DO_SCREEN_FADE_OUT(iParam0);
			}
		}
		else
		{
			Global_2667225.f_2642 = 1;
		}
	}
	return Global_2667225.f_2642;
}

int func_562()//Position - 0x2C5155
{
	if (HUD::IS_PAUSE_MENU_ACTIVE() && !__LIB_25__::func_667())
	{
		return 1;
	}
	return 0;
}

int func_563()//Position - 0x2C73EC
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	if (Global_1931261)
	{
		return 0;
	}
	iVar0 = Global_4718592.f_589;
	if (!__LIB_1__::func_758())
	{
		if (BitTest(Global_4718592.f_607, 16) || BitTest(Global_4718592.f_15, 14))
		{
			iVar0 = 0;
			iVar1 = 0;
			while (iVar1 < Global_4718592.f_592)
			{
				iVar0 = (iVar0 + Global_4718592.f_595[iVar1]);
				iVar1++;
			}
		}
	}
	if (NETWORK::NETWORK_GET_NUM_PARTICIPANTS() >= iVar0)
	{
		iVar3 = 0;
		while (iVar3 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
		{
			if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar3)))
			{
				bVar4 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar3));
				if (!__LIB_2__::func_40(bVar4, 0))
				{
					iVar2++;
				}
			}
			iVar3++;
		}
		if (iVar2 >= iVar0)
		{
			return 1;
		}
	}
	return 0;
}

void func_564(var uParam0, bool bParam1, int iParam2, int iParam3)//Position - 0x2C8A57
{
	(*uParam0)[4 /*9*/] = 0.3775f;
	(uParam0[4 /*9*/])->f_1 = (0.2299f + (SYSTEM::TO_FLOAT(iParam2) * 0.03749976f));
	(uParam0[4 /*9*/])->f_2 = 0.0225625f;
	(uParam0[4 /*9*/])->f_3 = 0.04077776f;
	(uParam0[4 /*9*/])->f_7 = 255;
	(uParam0[4 /*9*/])->f_4 = 255;
	(uParam0[4 /*9*/])->f_5 = 255;
	(uParam0[4 /*9*/])->f_6 = 255;
	if (((__LIB_1__::func_693(bParam1, 0, 1) && NETWORK::NETWORK_PLAYER_HAS_HEADSET(bParam1)) && !NETWORK::NETWORK_IS_PLAYER_MUTED_BY_ME(bParam1)) && NETWORK::NETWORK_IS_PLAYER_TALKING(bParam1))
	{
		__LIB_6__::func_24("MPLeaderboard", "Leaderboard_Audio_3", uParam0[4 /*9*/], 0, 0, 7, 0);
		GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(7);
	}
	else if (!__LIB_0__::func_157(0))
	{
		__LIB_23__::func_674(iParam3, 0.3775f, (0.1975f + (SYSTEM::TO_FLOAT(iParam2) * 0.03749976f)), 3);
	}
}

int func_565(var uParam0)//Position - 0x2DF1E5
{
	int iVar0;
	int iVar1;
	bool bVar2;
	if (!__LIB_21__::func_755(uParam0))
	{
		if (MISC::IS_PC_VERSION() && NETWORK::NETWORK_TEXT_CHAT_IS_TYPING())
		{
			return 0;
		}
		switch (uParam0->f_28)
		{
			case 0:
				if (!__LIB_1__::func_202() && !uParam0->f_3)
				{
					if (__LIB_21__::func_745() && !HUD::IS_WARNING_MESSAGE_ACTIVE())
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "SELECT" /* GXT: Filter List */, "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
						uParam0->f_28 = 1;
					}
				}
				break;
			case 1:
				if (__LIB_21__::func_746(uParam0))
				{
					return 0;
				}
				iVar0 = 0;
				while (iVar0 < 32)
				{
					bVar2 = iVar0;
					if (!bVar2 == PLAYER::PLAYER_ID())
					{
						if (__LIB_1__::func_693(bVar2, 0, 1))
						{
							if (NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(bVar2))
							{
								iVar1++;
							}
						}
					}
					iVar0++;
				}
				if (((__LIB_1__::func_152() && !__LIB_19__::func_0()) && !__LIB_2__::func_40(PLAYER::PLAYER_ID(), 0)) && !__LIB_0__::func_80())
				{
					HUD::SET_WARNING_MESSAGE_WITH_HEADER("FM_CSC_QUIT" /* GXT: Confirm */, "FM_CSC_QUIT3" /* GXT: Are you sure you want to quit this Playlist? Your Bad Sport rating will increase. */, 36, 0, false, -1, 0, 0, true, 0);
				}
				else if (iVar1 > 1)
				{
					HUD::SET_WARNING_MESSAGE_WITH_HEADER("FM_CSC_QUIT" /* GXT: Confirm */, "FM_LBD_QUIT" /* GXT: Are you sure you want to quit the leaderboard? You will be separated from the current group of players. */, 36, 0, false, -1, 0, 0, true, 0);
				}
				else
				{
					HUD::SET_WARNING_MESSAGE_WITH_HEADER("FM_CSC_QUIT" /* GXT: Confirm */, "FM_LBD_1QUIT" /* GXT: Are you sure you want to quit the leaderboard? */, 36, 0, false, -1, 0, 0, true, 0);
				}
				if (__LIB_10__::func_260())
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "SELECT" /* GXT: Filter List */, "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
					uParam0->f_28 = 2;
					__LIB_19__::func_61();
					__LIB_2__::func_396();
					__LIB_18__::func_752();
					Global_1922955.f_9 = 6;
					__LIB_2__::func_184(6);
					return 1;
				}
				if (__LIB_21__::func_745())
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "BACK", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
					uParam0->f_28 = 0;
				}
				break;
			case 2:
				__LIB_19__::func_61();
				__LIB_2__::func_396();
				Global_1922955.f_9 = 6;
				__LIB_2__::func_184(6);
				return 1;
			}
	}
	return 0;
}

int func_566()//Position - 0x2F48C7
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
			if (__LIB_1__::func_693(bVar2, 0, 1))
			{
				if (__LIB_2__::func_148(bVar2))
				{
					iVar0++;
				}
			}
		}
		iVar1++;
	}
	if (iVar0 > 0)
	{
		return 1;
	}
	return 0;
}

void func_567(var uParam0, int iParam1, bool bParam2, bool bParam3)//Position - 0x2F5400
{
	char* sVar0;
	if (BitTest(Global_1853348[iParam1 /*834*/].f_36.f_18, 26) && !__LIB_24__::func_201())
	{
		__LIB_1__::func_792(202, "FMMC_NOVOTE" /* GXT: No Vote */, -1, 0);
		__LIB_1__::func_792(203, "FMMC_DISLIKE" /* GXT: Dislike */, -1, 0);
		if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
		{
			__LIB_1__::func_792(201, "FMMC_LIKE" /* GXT: Like */, -1, 0);
		}
		else
		{
			__LIB_1__::func_792(204, "FMMC_LIKE" /* GXT: Like */, -1, 0);
		}
		uParam0->f_27 = 0;
	}
	else
	{
		if (!bParam2 && !__LIB_24__::func_201())
		{
			if (bParam3)
			{
				__LIB_1__::func_792(204, "FMMC_END_SPEC" /* GXT: Spectate */, -1, 0);
				MISC::SET_BIT(&(Global_1853348[iParam1 /*834*/].f_11.f_1), 19);
			}
			else
			{
				__LIB_1__::func_792(201, "FMMC_END_CONT" /* GXT: Continue */, -1, 0);
				MISC::CLEAR_BIT(&(Global_1853348[iParam1 /*834*/].f_11.f_1), 19);
			}
		}
		__LIB_1__::func_792(202, "FMMC_END_QUIT" /* GXT: Quit */, -1, 0);
	}
	sVar0 = __LIB_7__::func_710();
	__LIB_1__::func_792(217, sVar0, -1, 0);
	if (uParam0->f_14 && uParam0->f_29 < 3)
	{
		__LIB_1__::func_792(205, "FMMC_ADDBK" /* GXT: Bookmark Job */, -1, 0);
	}
}

int func_568()//Position - 0x2FD97A
{
	int iVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	bVar5 = false;
	if (!__LIB_0__::func_157(0))
	{
		iVar2 = Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_96.f_28;
	}
	else
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (bVar5)
		{
		}
		bVar3 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if (__LIB_1__::func_693(bVar3, 0, 1))
		{
			if (bVar5)
			{
			}
			if (bVar3 != PLAYER::PLAYER_ID())
			{
				if (bVar5)
				{
				}
				if (((!__LIB_10__::func_767(bVar3) && !__LIB_25__::func_272(bVar3)) && !__LIB_2__::func_40(bVar3, 0)) && !__LIB_2__::func_154(bVar3))
				{
					bVar1 = bVar3;
					if (bVar5)
					{
					}
					if (bVar5)
					{
					}
					if (Global_1853348[bVar1 /*834*/].f_96.f_28 == iVar2)
					{
						iVar4++;
						if (bVar5)
						{
						}
					}
				}
			}
			else
			{
				if (bVar5)
				{
				}
				iVar0 = 32;
			}
		}
		iVar0++;
	}
	return iVar4;
}

void func_569(int iParam0, var uParam1)//Position - 0x35446A
{
	float fVar0;
	bool bVar1;
	fVar0 = 10000000f;
	if (__LIB_0__::func_121(iParam0) && __LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
	{
		fVar0 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iParam0, true));
	}
	if (fVar0 < 10000f)
	{
		if (*uParam1 == -1)
		{
			bVar1 = __LIB_6__::func_726(iParam0, 1);
			if (bVar1 != __LIB_0__::func_162())
			{
				*uParam1 = bVar1;
				if (!BitTest(Global_1946250.f_13, *uParam1))
				{
					AUDIO::HINT_SCRIPT_AUDIO_BANK("DLC_HEI4/DLC_HEI4_Submarine", 0, -1);
					AUDIO::REQUEST_SCRIPT_AUDIO_BANK(__LIB_3__::func_935(), false, -1);
					MISC::SET_BIT(&(Global_1946250.f_13), *uParam1);
				}
			}
		}
	}
	else if (*uParam1 != -1)
	{
		if (BitTest(Global_1946250.f_13, *uParam1))
		{
			MISC::CLEAR_BIT(&(Global_1946250.f_13), *uParam1);
			AUDIO::UNHINT_SCRIPT_AUDIO_BANK();
			AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK(__LIB_3__::func_935());
		}
		*uParam1 = -1;
	}
}

int func_570(bool bParam0, var uParam1)//Position - 0x357AE8
{
	bool bVar0;
	bVar0 = __LIB_6__::func_726(0, 1);
	if (__LIB_6__::func_88(PLAYER::PLAYER_ID()) && (BitTest(Global_1946250.f_506, 0) || bVar0 == PLAYER::PLAYER_ID()))
	{
		if (Global_1946250.f_3280 == -1)
		{
			return 1;
		}
	}
	if (Global_1946250.f_3280 == -1)
	{
		if ((__LIB_6__::func_88(PLAYER::PLAYER_ID()) && !__LIB_2__::func_72(PLAYER::PLAYER_ID(), 0)) || (BitTest(Global_1946250.f_506, 0) || bVar0 == PLAYER::PLAYER_ID()))
		{
			if (__LIB_1__::func_907(bParam0, 0) && !__LIB_3__::func_234(bParam0, PLAYER::PLAYER_ID()))
			{
				return 0;
			}
			return 1;
		}
	}
	return 0;
}

int func_571(bool bParam0)//Position - 0x381EF9
{
	var uVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	if (__LIB_2__::func_159(1))
	{
		iVar1 = 0;
		while (iVar1 < 32)
		{
			bVar3 = PLAYER::INT_TO_PLAYERINDEX(iVar1);
			if (__LIB_1__::func_693(bVar3, 0, 0))
			{
				if (__LIB_2__::func_50())
				{
					if (__LIB_2__::func_759(bVar3, PLAYER::PLAYER_ID(), bParam0))
					{
						MISC::SET_BIT(&uVar0, bVar3);
					}
				}
				else
				{
					iVar2 = __LIB_0__::func_797();
					if (iVar2 != __LIB_0__::func_162())
					{
						if (__LIB_2__::func_759(bVar3, iVar2, bParam0))
						{
							MISC::SET_BIT(&uVar0, bVar3);
						}
					}
				}
			}
			iVar1++;
		}
	}
	return uVar0;
}

void func_572(var uParam0, var uParam1)//Position - 0x3CFD75
{
	if (PLAYER::PLAYER_ID() == Global_1853190)
	{
		__LIB_8__::func_232(0);
	}
	if (BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318, 19))
	{
		MISC::CLEAR_BIT(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318), 19);
	}
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if (__LIB_3__::func_363(uParam0->f_22.f_94, 0))
		{
			HUD::CLEAR_HELP(true);
			__LIB_3__::func_122(&(uParam0->f_22.f_94));
		}
	}
	else if (!ENTITY::IS_ENTITY_DEAD(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false) && (ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)) == joaat("deluxo") || ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)) == joaat("oppressor2")))
	{
		if (__LIB_3__::func_185(PLAYER::PLAYER_ID(), -1))
		{
			if (VEHICLE::IS_VEHICLE_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), joaat("deluxo")) || VEHICLE::IS_VEHICLE_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), joaat("oppressor2")))
			{
				VEHICLE::SET_DISABLE_HOVER_MODE_FLIGHT(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false);
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_2815059.f_293))
	{
		Global_2815059.f_293 = 0;
	}
	if (__LIB_4__::func_524(PLAYER::PLAYER_ID()))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			if (__LIB_0__::func_336(PLAYER::PLAYER_PED_ID(), 1) == -1)
			{
				if (!ENTITY::IS_ENTITY_DEAD(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false))
				{
					ENTITY::SET_ENTITY_INVINCIBLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false);
					__LIB_4__::func_523(0);
				}
			}
		}
		else if (ENTITY::DOES_ENTITY_EXIST(Global_2815059.f_298))
		{
			if (!ENTITY::IS_ENTITY_DEAD(Global_2815059.f_298, false))
			{
				ENTITY::SET_ENTITY_INVINCIBLE(Global_2815059.f_298, false);
				__LIB_4__::func_523(0);
			}
		}
	}
	if (__LIB_1__::func_693(PLAYER::PLAYER_ID(), 1, 1))
	{
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 398, false);
		PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(PLAYER::PLAYER_PED_ID(), 0);
	}
	Global_2787785 = 0;
	MISC::CLEAR_BIT(&(Global_1946250.f_2), 11);
	__LIB_4__::func_522(0);
	__LIB_3__::func_638(0);
	Global_1946250.f_3636 = -1;
	__LIB_4__::func_400(0);
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		PED::SET_PED_CAN_SWITCH_WEAPON(PLAYER::PLAYER_PED_ID(), true);
		if (!NETWORK::NETWORK_IS_ACTIVITY_SESSION())
		{
			ENTITY::SET_ENTITY_PROOFS(PLAYER::PLAYER_PED_ID(), false, false, false, false, false, false, false, false);
			VEHICLE::SET_DISABLE_WEAPON_BLADE_FORCES(false);
		}
	}
}

void func_573(int iParam0, var uParam1, int iParam2, int iParam3)//Position - 0x3F694D
{
	int iVar0;
	uParam1->f_405 = { __LIB_4__::func_686(iParam0) };
	uParam1->f_21 = "AM_MP_ARMORY_TRUCK";
	uParam1->f_22.f_69[0] = "PUSH";
	uParam1->f_22.f_69[1] = "LIMIT";
	uParam1->f_22.f_72[0] = 0.271f;
	uParam1->f_22.f_72[1] = 0.411f;
	uParam1->f_22.f_75 = "GTAO_EXEC_WH_DOOR_GENERIC_SOUNDS";
	uParam1->f_3 = 0;
	uParam1->f_285[0 /*3*/] = { -2.3f, 9.69f, 0.06f };
	uParam1->f_285.f_28[0 /*3*/] = { 2.3f, 9.69f, 2.305f };
	uParam1->f_285.f_56[0] = 1f;
	uParam1->f_285.f_94[0] = 349.3822f;
	if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_22.f_105))
	{
		iVar0 = uParam1->f_22.f_105;
	}
	else
	{
		iVar0 = __LIB_6__::func_339();
	}
	switch (iParam0)
	{
		case 81:
			if (__LIB_3__::func_616() == 0 || __LIB_2__::func_754(PLAYER::PLAYER_ID()))
			{
			}
			else if (__LIB_3__::func_185(PLAYER::PLAYER_ID(), -1))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0, false))
				{
					if (BitTest(Global_1946250, 24))
					{
						if (BitTest(Global_1946250, 8) && !BitTest(Global_1946250, 10))
						{
							__LIB_4__::func_561(0);
						}
						uParam1->f_22.f_13 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(ENTITY::GET_ENTITY_COORDS(iVar0, true), ENTITY::GET_ENTITY_HEADING(iVar0), -7.0529f, -0.4481f, 0.6091f) };
						uParam1->f_22.f_16 = { -9.156f, -0.1534f, (ENTITY::GET_ENTITY_HEADING(iVar0) - 150.2327f) };
						uParam1->f_22.f_19 = 25.35f;
						uParam1->f_22.f_28 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(ENTITY::GET_ENTITY_COORDS(iVar0, true), ENTITY::GET_ENTITY_HEADING(iVar0), -7.0529f, -0.4481f, 0.6091f) };
						uParam1->f_22.f_31 = { -9.156f, -0.1534f, (ENTITY::GET_ENTITY_HEADING(iVar0) - 150.2327f) };
						uParam1->f_22.f_34 = 0.2f;
						uParam1->f_22.f_35 = 0.46f;
						uParam1->f_22.f_59 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(ENTITY::GET_ENTITY_COORDS(iVar0, true), ENTITY::GET_ENTITY_HEADING(iVar0), -6.8478f, -0.6934f, 0.6801f) };
						uParam1->f_22.f_62 = { -9.156f, -0.1534f, (ENTITY::GET_ENTITY_HEADING(iVar0) - 148.652f) };
						uParam1->f_22.f_65 = 25.35f;
						uParam1->f_22.f_95 = 5f;
						uParam1->f_22.f_66 = 0.7f;
					}
					else if (BitTest(Global_1946250, 23))
					{
						if (BitTest(Global_1946250, 8) && !BitTest(Global_1946250, 10))
						{
							__LIB_4__::func_561(0);
						}
						if (!__LIB_4__::func_649())
						{
							uParam1->f_22.f_13 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(ENTITY::GET_ENTITY_COORDS(iVar0, true), ENTITY::GET_ENTITY_HEADING(iVar0), 7.1157f, 0.6104f, -1.3546f) };
							uParam1->f_22.f_16 = { -3.0776f, -0.1478f, (ENTITY::GET_ENTITY_HEADING(iVar0) - 208.6628f) };
							uParam1->f_22.f_19 = 17.6665f;
							uParam1->f_22.f_28 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(ENTITY::GET_ENTITY_COORDS(iVar0, true), ENTITY::GET_ENTITY_HEADING(iVar0), 7.1157f, 0.6104f, -1.3546f) };
							uParam1->f_22.f_31 = { -3.0776f, -0.1478f, (ENTITY::GET_ENTITY_HEADING(iVar0) + 208.6628f) };
							uParam1->f_22.f_34 = 0.2f;
							uParam1->f_22.f_35 = 0.46f;
							uParam1->f_22.f_59 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(ENTITY::GET_ENTITY_COORDS(iVar0, true), ENTITY::GET_ENTITY_HEADING(iVar0), 6.484f, -0.2448f, -0.9f) };
							uParam1->f_22.f_62 = { -3.0776f, -0.1478f, (ENTITY::GET_ENTITY_HEADING(iVar0) - 213.1267f) };
							uParam1->f_22.f_65 = 17.6665f;
							uParam1->f_22.f_95 = 5f;
							uParam1->f_22.f_66 = 0.7f;
						}
						else if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
						{
							uParam1->f_22.f_13 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(ENTITY::GET_ENTITY_COORDS(iVar0, true), ENTITY::GET_ENTITY_HEADING(iVar0), 10.3856f, -2.1387f, -2.2365f) };
							uParam1->f_22.f_16 = { 6.5787f, -0.0233f, (ENTITY::GET_ENTITY_HEADING(iVar0) - 231.4331f) };
							uParam1->f_22.f_19 = 26.4029f;
							uParam1->f_22.f_28 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(ENTITY::GET_ENTITY_COORDS(iVar0, true), ENTITY::GET_ENTITY_HEADING(iVar0), 10.3856f, -2.1387f, -2.2365f) };
							uParam1->f_22.f_31 = { 6.5787f, -0.0233f, (ENTITY::GET_ENTITY_HEADING(iVar0) - 231.4331f) };
							uParam1->f_22.f_34 = 0.2f;
							uParam1->f_22.f_35 = 0.46f;
							uParam1->f_22.f_59 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(ENTITY::GET_ENTITY_COORDS(iVar0, true), ENTITY::GET_ENTITY_HEADING(iVar0), 9.9211f, -2.3221f, -2.1676f) };
							uParam1->f_22.f_62 = { 7.8365f, -0.0233f, (ENTITY::GET_ENTITY_HEADING(iVar0) + 110.5488f) };
							uParam1->f_22.f_65 = 26.4029f;
							uParam1->f_22.f_95 = 9f;
							uParam1->f_22.f_66 = 0.4f;
						}
					}
					else if (BitTest(Global_1946250, 25))
					{
						if (BitTest(Global_1946250, 8) && !BitTest(Global_1946250, 10))
						{
							__LIB_4__::func_561(0);
						}
						uParam1->f_22.f_13 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(ENTITY::GET_ENTITY_COORDS(iVar0, true), ENTITY::GET_ENTITY_HEADING(iVar0), -1.0858f, -3.2694f, 6.2579f) };
						uParam1->f_22.f_16 = { -37.5675f, -0.1538f, (ENTITY::GET_ENTITY_HEADING(iVar0) + 171.9186f) };
						uParam1->f_22.f_19 = 29.0636f;
						uParam1->f_22.f_28 = { 1831.551f, -1182.593f, 90.599f };
						uParam1->f_22.f_31 = { 0f, 0f, 98.5f };
						uParam1->f_22.f_34 = 0.2f;
						uParam1->f_22.f_35 = 0.46f;
						uParam1->f_22.f_59 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(ENTITY::GET_ENTITY_COORDS(iVar0, true), ENTITY::GET_ENTITY_HEADING(iVar0), -0.8503f, -3.3972f, 5.8824f) };
						uParam1->f_22.f_62 = { -43.3133f, -0.1538f, (ENTITY::GET_ENTITY_HEADING(iVar0) + 187.9544f) };
						uParam1->f_22.f_65 = 29.0636f;
						uParam1->f_22.f_95 = 5f;
						uParam1->f_22.f_66 = 0.7f;
					}
					else
					{
						if ((!BitTest(Global_1946250, 8) && !BitTest(Global_1946250, 10)) && !NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
						{
							__LIB_4__::func_561(1);
						}
						uParam1->f_22.f_13 = { 0f, 0f, 0f };
					}
				}
			}
			break;
	}
}

int func_574(var uParam0)//Position - 0x41D8C9
{
	bool bVar0;
	if (__LIB_5__::func_818(0))
	{
		return __LIB_1__::func_389(__LIB_7__::func_610(PLAYER::PLAYER_ID()));
	}
	else if (__LIB_2__::func_129(PLAYER::PLAYER_ID(), 0, 0))
	{
		bVar0 = __LIB_0__::func_797();
		return __LIB_1__::func_389(__LIB_7__::func_610(bVar0));
	}
	return 4;
}

int func_575()//Position - 0x43296C
{
	if (SCRIPT::IS_THREAD_ACTIVE(Global_2678393.f_1654) && !__LIB_2__::func_154(PLAYER::PLAYER_ID()))
	{
		if (Global_2678393.f_1656)
		{
			if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2678393.f_1655)) < 1000)
			{
				return Global_2678393.f_1657;
			}
			else
			{
				Global_2678393.f_1657 = !Global_2678393.f_1657;
				Global_2678393.f_1655 = NETWORK::GET_NETWORK_TIME();
			}
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

void func_576(int iParam0, var uParam1)//Position - 0x4330E7
{
	struct<5> Var0;
	int iVar1;
	Var0.f_0 = 1523231083;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = iParam0;
	Var0.f_3 = uParam1;
	Var0.f_4 = MISC::GET_FRAME_COUNT();
	iVar1 = __LIB_3__::func_206(1, 1);
	if (!iVar1 == 0)
	{
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 5, iVar1);
	}
}

void func_577(var uParam0)//Position - 0x4368D8
{
	bool bVar0;
	char* sVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	struct<13> Var6;
	int iVar7;
	int iVar8;
	iVar2 = 255;
	iVar3 = 255;
	iVar4 = 255;
	if (Global_1057830.f_97)
	{
		if (Global_1057830.f_95 != -1)
		{
			bVar0 = PLAYER::INT_TO_PLAYERINDEX(Global_1057830.f_95);
			sVar1 = PLAYER::GET_PLAYER_NAME(bVar0);
			iVar8 = __LIB_22__::func_56();
			if (__LIB_1__::func_693(bVar0, 0, 1))
			{
				Var6 = { __LIB_1__::func_696(bVar0) };
				iVar7 = __LIB_22__::func_55(&Var6);
				if (bVar0 != PLAYER::PLAYER_ID())
				{
					if (__LIB_23__::func_659(iVar7))
					{
						__LIB_14__::func_364(&iVar2, &iVar3, &iVar4);
						if ((iVar2 == 0 && iVar3 == 0) && iVar4 == 0)
						{
							iVar2 = 255;
							iVar3 = 255;
							iVar4 = 255;
						}
					}
					else if (NETWORK::NETWORK_IS_FRIEND(&Var6))
					{
						HUD::GET_HUD_COLOUR(9, &iVar2, &iVar3, &iVar4, &uVar5);
					}
					else
					{
						HUD::GET_HUD_COLOUR(28, &iVar2, &iVar3, &iVar4, &uVar5);
					}
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_106, "SHOW_PLAYER_VOTE");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar8);
					__LIB_0__::func_700(sVar1);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar2);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar3);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar4);
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					Global_1057830.f_97 = 0;
				}
			}
		}
	}
}

int func_578()//Position - 0x43F7F3
{
	if (__LIB_10__::func_169())
	{
		__LIB_0__::func_170(157, Global_20266, 1);
	}
	return 157;
}

char* func_579(var uParam0, int iParam1)//Position - 0x4687D0
{
	int iVar0;
	int iVar1;
	int iVar2;
	char* sVar3;
	char* sVar4;
	int iVar5;
	sVar3 = "";
	sVar4 = "";
	iVar0 = __LIB_25__::func_669();
	iVar5 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	if (iVar5 != -1)
	{
		iParam1 = Global_1853348[iVar5 /*834*/].f_96.f_28;
	}
	if (__LIB_18__::func_987(iVar0) && __LIB_18__::func_987(iParam1))
	{
		iVar1 = Global_4718592.f_658[iParam1 /*22957*/].f_895[iVar0];
		iVar2 = Global_4718592.f_658[iParam1 /*22957*/].f_900[iVar0];
		if (iVar1 > -1)
		{
			sVar3 = __LIB_23__::func_605(iVar1);
			return sVar3;
		}
		if (iVar2 > -1)
		{
			sVar4 = __LIB_23__::func_605(iVar2);
			return sVar4;
		}
	}
	return "";
}

void func_580(bool bParam0)//Position - 0x46AA1A
{
	int iVar0;
	bool bVar1;
	int iVar2;
	iVar0 = 0;
	while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			bVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0));
			if (__LIB_1__::func_693(bVar1, 1, 1))
			{
				if (!__LIB_2__::func_154(bVar1))
				{
					iVar2 = PLAYER::GET_PLAYER_PED(bVar1);
					NETWORK::SET_ENTITY_VISIBLE_IN_CUTSCENE(iVar2, bParam0, true);
				}
			}
		}
		iVar0++;
	}
}

int func_581()//Position - 0x4712B1
{
	int iVar0;
	int iVar1;
	bool bVar2;
	iVar1 = 1;
	iVar0 = 0;
	while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			bVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0));
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
		iVar0++;
	}
	return iVar1;
}

int func_582()//Position - 0x471AF5
{
	int iVar0;
	bool bVar1;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		bVar1 = iVar0;
		if (__LIB_1__::func_693(bVar1, 0, 1))
		{
			if (!__LIB_2__::func_154(bVar1))
			{
				if (!Global_2689235[iVar0 /*453*/].f_55)
				{
					return 0;
				}
			}
		}
		iVar0++;
	}
	return 1;
}

bool func_583(bool bParam0)//Position - 0x471C0B
{
	return ((BitTest(Global_4718592.f_30, 12) && !__LIB_2__::func_40(bParam0, 0)) && BitTest(Global_1853348[bParam0 /*834*/].f_36.f_18, 14));
}

void func_584(struct<5> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17)//Position - 0x4876AC
{
	__LIB_25__::func_649(Param0.f_0);
	__LIB_25__::func_648(Param0.f_0);
	__LIB_25__::func_647(Param0.f_0, Param0.f_2);
	__LIB_25__::func_646(Param0.f_0, Param0.f_3);
	__LIB_25__::func_645(Param0.f_4);
	__LIB_25__::func_644();
}

int func_585(int iParam0, int iParam1, float fParam2)//Position - 0x4884A1
{
	if (__LIB_1__::func_778(iParam1))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0, false))
		{
			if (__LIB_12__::func_718(ENTITY::GET_ENTITY_COORDS(iParam0, true), iParam1, fParam2))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_586(var uParam0)//Position - 0x493C0C
{
	if (CAM::DOES_CAM_EXIST(uParam0->f_1.f_39))
	{
		if (CAM::GET_RENDERING_CAM() == uParam0->f_1.f_39)
		{
			CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
		}
		CAM::DESTROY_CAM(uParam0->f_1.f_39, false);
		if (__LIB_12__::func_675() && !__LIB_0__::func_983())
		{
			STREAMING::CLEAR_FOCUS();
		}
		MISC::CLEAR_BIT(&(uParam0->f_1), 15);
		if ((!BitTest(Global_2621446, 18) && uParam0->f_47.f_1467 != 10) && uParam0->f_47.f_1467 != 11)
		{
			HUD::DISPLAY_RADAR(true);
		}
		uParam0->f_1.f_41 = 0;
		__LIB_5__::func_942(1, __LIB_1__::func_711(), 1);
		MISC::SET_BIT(&(uParam0->f_47), 1);
		__LIB_10__::func_204();
		__LIB_10__::func_340(0);
		__LIB_10__::func_339();
	}
	if (BitTest(uParam0->f_1, 16))
	{
		MISC::CLEAR_BIT(&(uParam0->f_1), 16);
	}
	if (BitTest(uParam0->f_1, 17))
	{
		MISC::CLEAR_BIT(&(uParam0->f_1), 17);
	}
}

int func_587()//Position - 0x49D9E6
{
	bool bVar0;
	int iVar1;
	iVar1 = NETWORK::NETWORK_GET_HOST_OF_THIS_SCRIPT();
	if (iVar1 != -1)
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar1))
		{
			bVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar1);
			if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(bVar0))
			{
				if ((__LIB_10__::func_767(bVar0) || __LIB_2__::func_40(bVar0, 0)) || __LIB_2__::func_154(bVar0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_588()//Position - 0x4A903A
{
	if (__LIB_19__::func_211(&(Global_4718592.f_162543.f_24), 20) || __LIB_19__::func_211(&(Global_4718592.f_162543.f_24), 21))
	{
		return 1;
	}
	return 0;
}

int func_589(int iParam0)//Position - 0x4ADACB
{
	int iVar0;
	int iVar1;
	if (!__LIB_19__::func_112(Global_4980736.f_201076[iParam0 /*7*/].f_5))
	{
		return 0;
	}
	iVar0 = MISC::GET_HASH_KEY(__LIB_24__::func_878(Global_4980736.f_201076[iParam0 /*7*/].f_5));
	iVar1 = iVar0;
	return iVar1;
}

int func_590(char* sParam0, char* sParam1, int iParam2, int iParam3)//Position - 0x4C79ED
{
	int iVar0;
	struct<8> Var1;
	iVar0 = -1;
	StringCopy(&Var1, PLAYER::GET_PLAYER_NAME(iParam2), 64);
	if (MISC::IS_STRING_NULL_OR_EMPTY(&Var1))
	{
	}
	HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(sParam0);
	HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(iParam3);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(__LIB_2__::func_49(&Var1));
	HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(iParam3);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam1);
	iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(false, true);
	__LIB_2__::func_158(34, sParam0, 1, &Var1, 0, 0, 0, 0f, 0, sParam1, 0, 0);
	return iVar0;
}

int func_591()//Position - 0x4F07C4
{
	if (Global_4718592 == 1)
	{
		return 29;
	}
	if (Global_4718592 == 2)
	{
		return __LIB_24__::func_592();
	}
	if (Global_4718592.f_2 == 6 || Global_4718592.f_2 == 5)
	{
		return 30;
	}
	if (Global_4718592 == 0)
	{
		return 31;
	}
	return 16;
}

int func_592(var uParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, var uParam10, bool bParam11)//Position - 0x2394
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	iVar1 = __LIB_21__::func_709(iParam4, !bParam2);
	iVar2 = __LIB_21__::func_708(iParam4, !bParam2);
	iVar3 = 1;
	if (iVar1 == 0)
	{
		if (iVar2 == 8 || (bParam2 && __LIB_1__::func_197(Global_794709.f_177589[iParam4 /*13*/].f_1)))
		{
			iVar3 = 0;
		}
	}
	if (iVar1 == 1)
	{
		if (__LIB_18__::func_220(iVar1, iVar2) != BitTest(uParam0->f_105, 18))
		{
			iVar3 = 0;
		}
	}
	if (BitTest(uParam0->f_105, 15))
	{
		bVar5 = true;
	}
	else
	{
		bVar5 = __LIB_21__::func_707(iParam4, !bParam2) >= iParam1;
	}
	if ((uParam10 || BitTest(uParam0->f_105, 11)) || bParam11)
	{
		iVar4 = 1;
	}
	else
	{
		iVar4 = __LIB_22__::func_193(__LIB_21__::func_706(iParam4, !bParam2), iParam1, uParam10);
	}
	if (((((((((iVar4 && iVar1 != 6) && iVar3) && bVar5) && __LIB_21__::func_705(iParam4, !bParam2) <= iParam6) && (bParam11 || !__LIB_22__::func_338(bParam2, bParam3, iParam4, 0, 1))) && __LIB_18__::func_672(bParam2, bParam3, iParam4, iParam5)) && __LIB_23__::func_555(uParam0, iParam7, iParam4, !bParam2)) && __LIB_23__::func_631(iParam8, iParam4, bParam3, bParam11)) && __LIB_23__::func_630(uParam0, iParam9, iParam4, !bParam2, iVar4))
	{
		MemCopy(&uVar0, {__LIB_21__::func_702(iParam4, !bParam2)}, 16);
		if (MISC::ARE_STRINGS_EQUAL(&uVar0, &(Global_4718592.f_116811)))
		{
			return 0;
		}
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

void func_593(var uParam0)//Position - 0x6E55
{
	int iVar0;
	bool bVar1;
	int iVar2;
	MISC::SET_BIT(&(uParam0->f_122), 0);
	MISC::SET_BIT(&(uParam0->f_122), 1);
	MISC::SET_BIT(&(uParam0->f_122), 2);
	iVar2 = 0;
	while (iVar2 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		iVar0 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar2);
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar0))
		{
			bVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar0);
			if (!__LIB_2__::func_40(bVar1, 0))
			{
				if (BitTest(Global_1853348[bVar1 /*834*/].f_36.f_18, 28))
				{
					MISC::SET_BIT(&(uParam0->f_122), 8);
				}
				if (BitTest(Global_1853348[bVar1 /*834*/].f_36.f_18, 27))
				{
					MISC::SET_BIT(&(uParam0->f_122), 3);
				}
			}
		}
		iVar2++;
	}
}

char* func_594(char* sParam0, char* sParam1, float fParam2, bool bParam3, bool bParam4)//Position - 0xCB93B
{
	float fVar0;
	int iVar1;
	int iVar2;
	char* sVar3;
	char cVar4[64];
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		fVar0 = __LIB_19__::func_218(sParam0, sParam1, bParam4);
		if (fVar0 < fParam2)
		{
			return sParam1;
		}
		sParam0 = "FMMC_TRUNC" /* GXT: ~a~... */;
		iVar2 = HUD::GET_LENGTH_OF_LITERAL_STRING(sParam1);
		iVar1 = 0;
		while (iVar1 <= iVar2)
		{
			sVar3 = HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME(sParam1, 0, (iVar2 - iVar1));
			fVar0 = __LIB_19__::func_218(sParam0, sVar3, bParam4);
			if (fVar0 < fParam2)
			{
				if (bParam3)
				{
					StringCopy(&cVar4, sVar3, 64);
					StringConCat(&cVar4, "...", 64);
					sVar3 = HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME(&cVar4, 0, HUD::GET_LENGTH_OF_LITERAL_STRING(&cVar4));
				}
				return sVar3;
			}
			iVar1++;
		}
	}
	return sParam1;
}

void func_595(bool bParam0, bool bParam1, int iParam2, int iParam3)//Position - 0x12CAAD
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	bool bVar13;
	bool bVar14;
	bool bVar15;
	bool bVar16;
	bool bVar17;
	bool bVar18;
	bool bVar19;
	bool bVar20;
	bool bVar21;
	bool bVar22;
	bool bVar23;
	bool bVar24;
	bool bVar25;
	bool bVar26;
	int iVar27;
	int iVar28;
	if (bParam1)
	{
		if (SCRIPT::GET_NO_LOADING_SCREEN())
		{
			SCRIPT::SET_NO_LOADING_SCREEN(false);
		}
	}
	if (__LIB_0__::func_862())
	{
		if (bParam1)
		{
			return;
		}
		else
		{
			iParam3 = 1;
		}
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = iParam2;
		PLAYER::SET_PLAYER_CONTROL(bParam0, bParam1, iVar0);
	}
	else
	{
		bVar1 = true;
		bVar2 = iParam2 & 2 != false;
		bVar3 = iParam2 & 4 != false;
		bVar4 = iParam2 & 8 != false;
		bVar5 = iParam2 & 16 != false;
		bVar6 = iParam2 & 32 != false;
		bVar7 = iParam2 & 64 != false;
		bVar8 = iParam2 & 128 != false;
		bVar9 = iParam2 & 256 != false;
		bVar10 = iParam2 & 512 != false;
		bVar11 = iParam2 & 1024 != false;
		bVar12 = iParam2 & 2048 != false;
		bVar13 = iParam2 & 4096 != false;
		bVar14 = iParam2 & 8192 != false;
		bVar15 = iParam2 & 16384 != false;
		bVar16 = iParam2 & 32768 != false;
		bVar17 = iParam2 & 65536 != false;
		bVar18 = iParam2 & 131072 != false;
		bVar19 = iParam2 & 262144 != false;
		bVar20 = iParam2 & 524288 != false;
		bVar21 = iParam2 & 1048576 != false;
		bVar22 = iParam2 & 2097152 != false;
		bVar23 = iParam2 & 4194304 != false;
		bVar24 = iParam2 & 8388608 != false;
		bVar25 = iParam2 & 16777216 != false;
		if (iParam2 & 33554432 != 0 || NETWORK::NETWORK_IS_ACTIVITY_SESSION())
		{
			bVar1 = false;
		}
		if (!__LIB_0__::func_893())
		{
			bVar26 = false;
			if (bParam1 == 1)
			{
				bVar26 = true;
			}
			if (bVar16 == 0 && !bVar21)
			{
				bVar26 = true;
			}
			if (bVar10 == 1)
			{
				bVar26 = true;
			}
			if (bVar26)
			{
				return;
			}
		}
		if (bVar18)
		{
		}
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(bParam0) && (PLAYER::IS_PLAYER_PLAYING(bParam0) || iParam3 == 1))
		{
			if (iParam3 && ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYER_PED(bParam0), false))
			{
				return;
			}
			iVar27 = PLAYER::GET_PLAYER_PED(bParam0);
			if (!bVar20)
			{
				if ((bVar19 && bParam1 == 0) && NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					NETWORK::FADE_OUT_LOCAL_PLAYER(true);
				}
				else if (bVar14 || (!__LIB_2__::func_40(PLAYER::PLAYER_ID(), 0) && !__LIB_0__::func_81()))
				{
					ENTITY::SET_ENTITY_VISIBLE(iVar27, !bVar14, false);
				}
				if (!bVar14)
				{
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bVar19)
					{
						NETWORK::FADE_OUT_LOCAL_PLAYER(false);
					}
					Global_2689235[bParam0 /*453*/].f_252 = 0;
				}
			}
			if (bParam1)
			{
				if (bVar1)
				{
					__LIB_5__::func_942(0, 0, 0);
					if (bVar25)
					{
						STREAMING::CLEAR_FOCUS();
					}
				}
				if (!__LIB_0__::func_859(iVar27) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(iVar27))
				{
					if (!bVar22)
					{
						ENTITY::SET_ENTITY_COLLISION(iVar27, true, false);
					}
				}
				if (!ENTITY::IS_ENTITY_ATTACHED(iVar27))
				{
					if (!bVar21)
					{
						ENTITY::FREEZE_ENTITY_POSITION(iVar27, false);
					}
					ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iVar27, true);
				}
				else if (!bVar21)
				{
					ENTITY::FREEZE_ENTITY_POSITION(iVar27, false);
				}
				PED::SET_PED_CAN_BE_TARGETTED(iVar27, true);
				PLAYER::SET_PLAYER_INVINCIBLE(bParam0, false);
				PLAYER::SET_PLAYER_INVINCIBLE_BUT_HAS_REACTIONS(bParam0, false);
				if (PED::HAS_PED_HEAD_BLEND_FINISHED(iVar27) && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(iVar27))
				{
					PED::FINALIZE_HEAD_BLEND(iVar27);
				}
				PED::SET_PED_CAN_RAGDOLL(iVar27, true);
				if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) == 0)
				{
					__LIB_0__::func_858();
					__LIB_0__::func_857();
				}
				if (PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
				{
					if (!bVar23)
					{
					}
				}
				if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
				{
				}
				Global_2689235[bParam0 /*453*/].f_253 = 0;
				if (!bVar24)
				{
					bVar3 = true;
				}
				if (Global_2667225.f_2681)
				{
					Global_2667225.f_2681 = 0;
				}
			}
			else
			{
				if (!__LIB_0__::func_859(iVar27) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(iVar27))
				{
					if (!bVar22)
					{
						ENTITY::SET_ENTITY_COLLISION(iVar27, !bVar15, false);
					}
					if (!ENTITY::IS_ENTITY_ATTACHED(iVar27))
					{
						if (!bVar21)
						{
							ENTITY::FREEZE_ENTITY_POSITION(iVar27, bVar16);
						}
						if (!bVar16)
						{
							ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iVar27, true);
						}
					}
					if (__LIB_0__::func_856(Global_4718592.f_168757))
					{
						ENTITY::FREEZE_ENTITY_POSITION(iVar27, true);
					}
				}
				if (Global_1575033)
				{
					bVar10 = false;
				}
				if (bVar10)
				{
					PLAYER::SET_PLAYER_INVINCIBLE(bParam0, false);
				}
				else
				{
					PLAYER::SET_PLAYER_INVINCIBLE(bParam0, true);
				}
				PED::SET_PED_CAN_BE_TARGETTED(iVar27, bVar17);
				if (bVar3)
				{
					if (!PED::IS_PED_FATALLY_INJURED(iVar27) && !PED::IS_PED_IN_ANY_VEHICLE(iVar27, false))
					{
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(iVar27);
					}
				}
			}
			iVar28 = 0;
			if (bVar2)
			{
				iVar28 |= 2;
			}
			if (bVar3)
			{
				iVar28 |= 4;
			}
			if (bVar4)
			{
				iVar28 |= 8;
			}
			if (bVar5)
			{
				iVar28 |= 16;
			}
			if (bVar6)
			{
				iVar28 |= 32;
			}
			if (bVar7)
			{
				iVar28 |= 64;
			}
			if (bVar8)
			{
				iVar28 |= 128;
			}
			if (bVar9)
			{
				iVar28 |= 256;
			}
			if (bVar10)
			{
				iVar28 |= 512;
			}
			if (bVar11)
			{
				iVar28 |= 1024;
			}
			if (bVar12)
			{
				iVar28 |= 2048;
			}
			if (bVar13)
			{
				iVar28 |= 4096;
			}
			PLAYER::SET_PLAYER_CONTROL(bParam0, bParam1, iVar28);
		}
	}
}

int func_596(char* sParam0)//Position - 0x13966D
{
	if (!__LIB_15__::func_614(1, 1, 0))
	{
		if ((!MISC::IS_STRING_NULL_OR_EMPTY(sParam0) && __LIB_0__::func_1(sParam0)) || __LIB_0__::func_1("CMN_HINT" /* GXT: ~s~Press ~INPUT_VEH_CIN_CAM~ to toggle focus on the target. */))
		{
			HUD::CLEAR_HELP(true);
		}
		return 0;
	}
	switch (Global_43052)
	{
		case 0:
		case 3:
			if (__LIB_0__::func_333(0) < 3)
			{
				return 1;
			}
			break;
		case 4:
			if (__LIB_0__::func_333(0) < 1)
			{
				return 1;
			}
			break;
		case 5:
		case 15:
			if (__LIB_0__::func_333(0) < 1)
			{
				return 1;
			}
			break;
		default:
			break;
	}
	return 0;
}

struct<5> func_597(int iParam0, struct<3> Param1, int iParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)//Position - 0x1D62AC
{
	struct<5> Var0;
	if (__LIB_3__::func_118() && __LIB_3__::func_117(iParam0))
	{
		Var0 = { __LIB_25__::func_683(iParam0, Param1, iParam2, iParam3, iParam4, bParam5) };
	}
	else
	{
		Var0.f_4 = OBJECT::CREATE_AMBIENT_PICKUP(iParam0, Param1, iParam2, iParam3, iParam4, bParam5, bParam6);
	}
	return Var0;
}

void func_598(int iParam0, int iParam1)//Position - 0x25AF4B
{
	struct<3> Var0;
	int iVar1;
	Var0.f_0 = -2077605454;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = iParam1;
	if (!NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		MISC::SET_BIT(&iVar1, iParam0);
	}
	else
	{
		iVar1 = __LIB_12__::func_307(1, 1);
	}
	if (iVar1 != 0)
	{
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 3, iVar1);
	}
}

void func_599()//Position - 0x27A0CE
{
	if (!HUD::IS_PAUSE_MENU_ACTIVE() && !__LIB_3__::func_100())
	{
		__LIB_25__::func_629();
	}
}

int func_600(struct<3> Param0)//Position - 0x2A6EEC
{
	if (__LIB_2__::func_727(Param0, 0.5f, PLAYER::PLAYER_ID(), 0, 0) || !__LIB_15__::func_653(Param0, 3f, 1f, 1f, 5f, 0, 0, 0, 0f, 1, -1, 0, 0f, 1, 0f, 0, 0))
	{
		return 0;
	}
	return 1;
}

int func_601(bool bParam0, float fParam1)//Position - 0x2AAEB4
{
	int iVar0;
	if (__LIB_1__::func_781(bParam0))
	{
		iVar0 = __LIB_1__::func_780(bParam0);
		if (__LIB_1__::func_778(iVar0))
		{
			return __LIB_25__::func_710(bParam0, iVar0, fParam1, 0);
		}
	}
	return 0;
}

int func_602(int iParam0)//Position - 0x2AF792
{
	bool bVar0;
	if (__LIB_2__::func_72(PLAYER::PLAYER_ID(), 0))
	{
		bVar0 = __LIB_0__::func_797();
		if (__LIB_1__::func_693(bVar0, 0, 0))
		{
			if (__LIB_25__::func_710(bVar0, iParam0, 0, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_603(var uParam0, var uParam1, int iParam2, var uParam3, var uParam4, int iParam5, int iParam6, bool bParam7, int iParam8)//Position - 0x2D51F8
{
	int iVar0;
	var uVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	int iVar6;
	iVar3 = 0;
	if (iParam5 > 1)
	{
		bVar2 = true;
	}
	if (bParam7 && !Global_1836382)
	{
		iVar3 = 1;
		iVar4 = (((iParam5 + iParam6) + (iParam6 - 1)) + iParam8);
	}
	else
	{
		iVar4 = iParam5;
	}
	bVar5 = (bParam7 && iParam6 == 1);
	iVar6 = __LIB_19__::func_12(uParam0);
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/) && !__LIB_1__::func_5())
	{
		HUD::SET_MOUSE_CURSOR_THIS_FRAME();
		PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 239 /*INPUT_CURSOR_X*/);
		PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 240 /*INPUT_CURSOR_Y*/);
		PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 237 /*INPUT_CURSOR_ACCEPT*/);
		if (Global_4539961 > -1)
		{
			if (Global_4539961 != *iParam2)
			{
				*iParam2 = Global_4539961;
				Global_4539961 = -1;
				AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_LEFT_RIGHT", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
			}
		}
	}
	else if (*iParam2 < iVar3)
	{
		*iParam2 = iVar3;
	}
	else if (*iParam2 >= iVar4)
	{
		*iParam2 = (iVar4 - 1);
	}
	if (__LIB_19__::func_65(uParam1, &iVar0, &uVar1, 0, 0, iVar6, bVar2, 0, 0))
	{
		if (iVar0 > 0)
		{
			if (*iParam2 > iVar3)
			{
				__LIB_18__::func_816(iParam2);
				if (bParam7 && !bVar5)
				{
					if (__LIB_18__::func_815(uParam3, *iParam2))
					{
						uParam0->f_509 = (uParam0->f_509 - 1);
						uParam0->f_509 = (uParam0->f_509 - 1);
						__LIB_18__::func_816(iParam2);
						__LIB_18__::func_816(iParam2);
					}
					if (__LIB_18__::func_815(uParam4, *iParam2))
					{
						uParam0->f_509 = (uParam0->f_509 - 1);
						uParam0->f_509 = (uParam0->f_509 - 1);
						__LIB_18__::func_816(iParam2);
						__LIB_18__::func_816(iParam2);
					}
				}
				if (*iParam2 < iVar3)
				{
					*iParam2 = iVar3;
				}
			}
		}
		else if (*iParam2 < (iVar4 - 1))
		{
			__LIB_18__::func_814(iParam2);
			if (bParam7 && !bVar5)
			{
				if (__LIB_18__::func_815(uParam3, *iParam2))
				{
					uParam0->f_509++;
					__LIB_18__::func_814(iParam2);
				}
				if (__LIB_18__::func_815(uParam4, *iParam2))
				{
					uParam0->f_509++;
					__LIB_18__::func_814(iParam2);
				}
			}
			if (*iParam2 >= iVar4)
			{
				*iParam2 = (iVar4 - 1);
			}
		}
	}
	Global_1836352 = *iParam2;
}

char* func_604(var uParam0, int iParam1)//Position - 0x2FDCC3
{
	int iVar0;
	int iVar1;
	int iVar2;
	char* sVar3;
	char* sVar4;
	int iVar5;
	sVar3 = "";
	sVar4 = "";
	iVar5 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	if (iVar5 != -1)
	{
		iParam1 = Global_1853348[iVar5 /*834*/].f_96.f_28;
	}
	iVar0 = __LIB_25__::func_669();
	if (__LIB_18__::func_987(iVar0) && __LIB_18__::func_987(iParam1))
	{
		iVar1 = Global_4718592.f_658[iParam1 /*22957*/].f_895[iVar0];
		iVar2 = Global_4718592.f_658[iParam1 /*22957*/].f_900[iVar0];
		if (iVar1 > -1)
		{
			sVar3 = __LIB_18__::func_986(iVar1);
			return sVar3;
		}
		if (iVar2 > -1)
		{
			sVar4 = __LIB_18__::func_986(iVar2);
			return sVar4;
		}
	}
	return "";
}

void func_605()//Position - 0x2FEFA2
{
	int iVar0;
	iVar0 = __LIB_25__::func_673(1);
	if ((__LIB_18__::func_761() || BitTest(Global_4718592.f_15, 17)) && iVar0 > Global_4718592.f_593)
	{
		return;
	}
	Global_2714762.f_669.f_14 = 1;
}

void func_606(bool bParam0, bool bParam1)//Position - 0x328665
{
	if (__LIB_2__::func_72(PLAYER::PLAYER_ID(), 1) && (bParam0 == PLAYER::PLAYER_ID() || __LIB_3__::func_234(bParam0, PLAYER::PLAYER_ID())))
	{
		if (!bParam1)
		{
			if (__LIB_1__::func_744(PLAYER::PLAYER_ID()))
			{
				MISC::SET_BIT(&(Global_1946250.f_506), 3);
				MISC::SET_BIT(&(Global_1946250.f_506), 31);
			}
			else
			{
				MISC::SET_BIT(&(Global_1946250.f_506), 4);
				if (__LIB_2__::func_778(PLAYER::PLAYER_ID(), 1))
				{
					MISC::SET_BIT(&(Global_1946250.f_506), 5);
				}
				else if (bParam0 != __LIB_0__::func_162() && __LIB_3__::func_673(bParam0))
				{
					MISC::SET_BIT(&(Global_1946250.f_506), 6);
				}
			}
		}
		else
		{
			MISC::SET_BIT(&(Global_1946250.f_506), 7);
		}
	}
	else
	{
		MISC::SET_BIT(&(Global_1946250.f_506), 8);
	}
}

char* func_607(var uParam0, var uParam1, var uParam2, var uParam3)//Position - 0x32875B
{
	if (__LIB_1__::func_2())
	{
		return "";
	}
	if (Global_1946250.f_506 == 0)
	{
		return "";
	}
	else if (__LIB_3__::func_674())
	{
		return "";
	}
	if (Global_1946250.f_506 == 0)
	{
		return "FHQ_P_KICK_A" /* GXT: You no longer have access to this Agency. */;
	}
	if (BitTest(Global_1946250.f_506, 1))
	{
		return "FHQ_P_KICK_B" /* GXT: You no longer have access to the Agency as the owner has left the game. */;
	}
	if (Global_1946250.f_3366)
	{
		return "FHQ_P_KICK_C" /* GXT: Owner has requested all to leave the Agency. */;
	}
	if (BitTest(Global_1946250.f_506, 2))
	{
		return "FHQ_P_KICK_D" /* GXT: You no longer have access to the Agency as you became the Beast. */;
	}
	if (__LIB_2__::func_159(0))
	{
		if (__LIB_2__::func_778(PLAYER::PLAYER_ID(), 1))
		{
			return "FHQ_P_KICK_F" /* GXT: You no longer have access to the Agency as you became a Prospect. */;
		}
		else if (__LIB_3__::func_673(__LIB_0__::func_797()))
		{
			return "FHQ_P_KICK_G" /* GXT: You no longer have access to the Agency as you became an Associate. */;
		}
		else
		{
			return "FHQ_P_KICK_E" /* GXT: You no longer have access to the Agency as you became a Bodyguard. */;
		}
	}
	return "";
}

int func_608(bool bParam0)//Position - 0x352C04
{
	int iVar0;
	bool bVar1;
	if (BitTest(Global_1946250.f_7, 19) || __LIB_0__::func_983())
	{
		return 0;
	}
	iVar0 = __LIB_6__::func_300();
	bVar1 = __LIB_0__::func_162();
	if (bParam0)
	{
		bVar1 = Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_9;
	}
	else if (__LIB_0__::func_121(iVar0))
	{
		bVar1 = __LIB_6__::func_726(iVar0, 1);
	}
	if (bVar1 == PLAYER::PLAYER_ID())
	{
		if (!__LIB_3__::func_916())
		{
			return 1;
		}
	}
	else if ((bVar1 != __LIB_0__::func_162() && __LIB_2__::func_159(0)) && __LIB_3__::func_234(PLAYER::PLAYER_ID(), Global_2689235[bVar1 /*453*/].f_318.f_9))
	{
		if (BitTest(Global_2689235[bVar1 /*453*/].f_318, 29))
		{
			return 1;
		}
	}
	return 0;
}

void func_609(bool bParam0, bool bParam1)//Position - 0x356DBF
{
	if (__LIB_2__::func_72(PLAYER::PLAYER_ID(), 1) && (bParam0 == PLAYER::PLAYER_ID() || __LIB_3__::func_234(bParam0, PLAYER::PLAYER_ID())))
	{
		if (!bParam1)
		{
			if (__LIB_1__::func_744(PLAYER::PLAYER_ID()))
			{
				MISC::SET_BIT(&(Global_1946250.f_506), 2);
				MISC::SET_BIT(&(Global_1946250.f_506), 0);
				Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_9 = PLAYER::PLAYER_ID();
			}
			else
			{
				MISC::SET_BIT(&(Global_1946250.f_506), 3);
				if (__LIB_2__::func_778(PLAYER::PLAYER_ID(), 1))
				{
					MISC::SET_BIT(&(Global_1946250.f_506), 4);
				}
				else if (bParam0 != __LIB_0__::func_162() && __LIB_3__::func_673(bParam0))
				{
					MISC::SET_BIT(&(Global_1946250.f_506), 5);
				}
				Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_9 = bParam0;
			}
		}
		else
		{
			MISC::SET_BIT(&(Global_1946250.f_506), 6);
			Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_9 = bParam0;
		}
	}
	else
	{
		MISC::SET_BIT(&(Global_1946250.f_506), 1);
	}
}

void func_610(bool bParam0, bool bParam1)//Position - 0x3ACE55
{
	if ((bParam0 == PLAYER::PLAYER_ID() && __LIB_2__::func_72(PLAYER::PLAYER_ID(), 1)) || __LIB_3__::func_234(bParam0, PLAYER::PLAYER_ID()))
	{
		if (!bParam1)
		{
			if (__LIB_1__::func_744(PLAYER::PLAYER_ID()))
			{
				MISC::SET_BIT(&(Global_1946250.f_506), 0);
				MISC::SET_BIT(&(Global_1946250.f_506), 30);
			}
			else
			{
				MISC::SET_BIT(&(Global_1946250.f_506), 1);
				if (__LIB_2__::func_778(PLAYER::PLAYER_ID(), 1))
				{
					MISC::SET_BIT(&(Global_1946250.f_506), 2);
				}
				else if (bParam0 != __LIB_0__::func_162() && __LIB_3__::func_673(bParam0))
				{
					MISC::SET_BIT(&(Global_1946250.f_506), 3);
				}
			}
		}
		else
		{
			MISC::SET_BIT(&(Global_1946250.f_506), 4);
		}
	}
	else
	{
		MISC::SET_BIT(&(Global_1946250.f_506), 5);
	}
}

char* func_611(var uParam0, var uParam1, char* sParam2, var uParam3)//Position - 0x3ACF18
{
	if (Global_1946250.f_506 == 0)
	{
		return "";
	}
	else if (__LIB_3__::func_674())
	{
		return "";
	}
	if (Global_1946250.f_506 == 0)
	{
		if (__LIB_6__::func_598() == 0)
		{
			return "CLUB_KICK_A" /* GXT: You no longer have access to this Nightclub. */;
		}
		else
		{
			return "HUB_KICK_A" /* GXT: You no longer have access to this Nightclub Warehouse. */;
		}
	}
	if (BitTest(Global_1946250.f_506, 6))
	{
		if (__LIB_6__::func_598() == 0)
		{
			return "CLUB_KICK_B" /* GXT: You no longer have access to the Nightclub as the owner has left the game. */;
		}
		else
		{
			return "HUB_KICK_B" /* GXT: You no longer have access to the Nightclub Warehouse as the owner has left the game. */;
		}
	}
	if (Global_1946250.f_3366 && !BitTest(Global_1946250, 18))
	{
		if (__LIB_6__::func_598() == 0)
		{
			return "CLUB_KICK_C" /* GXT: Owner has requested all to leave the Nightclub. */;
		}
		else
		{
			return "HUB_KICK_C" /* GXT: Owner has requested all to leave the Nightclub Warehouse. */;
		}
	}
	if (BitTest(Global_1946250, 18))
	{
		Global_1946250.f_3366 = 0;
		if (BitTest(Global_1946250.f_506, 30))
		{
			if (__LIB_6__::func_598() == 0)
			{
				return "CLUB_KICK_D" /* GXT: You no longer have access to this Nightclub as you have traded it in. */;
			}
			else
			{
				return "HUB_KICK_D" /* GXT: You no longer have access to this Nightclub Warehouse as you have traded it in. */;
			}
		}
		else if (__LIB_6__::func_598() == 0)
		{
			return "CLUB_KICK_E" /* GXT: You no longer have access to this Nightclub as the owner has traded it in. */;
		}
		else
		{
			return "HUB_KICK_E" /* GXT: You no longer have access to this Nightclub Warehouse as the owner has traded it in. */;
		}
	}
	if (BitTest(Global_1946250.f_506, 8))
	{
		if (__LIB_6__::func_598() == 0)
		{
			return "CLUB_KICK_F" /* GXT: You no longer have access to the Nightclub as the owner is undertaking confidential business. */;
		}
		else
		{
			return "HUB_KICK_F" /* GXT: You no longer have access to the Nightclub Warehouse as the owner is undertaking confidential business. */;
		}
	}
	if (BitTest(Global_1946250.f_506, 13))
	{
		StringCopy(sParam2, PLAYER::GET_PLAYER_NAME(__LIB_4__::func_369()), 32);
		return "CLUB_KICK_L" /* GXT: You have been temporarily banned from entering ~a~'s~s~ Nightclub due to being thrown out. */;
	}
	if (BitTest(Global_1946250.f_506, 10))
	{
		if (__LIB_6__::func_598() == 0)
		{
			return "CLUB_KICK_G" /* GXT: You no longer have access to this Nightclub as you have joined another gang. */;
		}
		else if (__LIB_2__::func_778(PLAYER::PLAYER_ID(), 1))
		{
			if (__LIB_1__::func_744(PLAYER::PLAYER_ID()))
			{
				return "HUB_KICK_H1" /* GXT: You no longer have access to this Nightclub Warehouse as you became an MC President. */;
			}
			else
			{
				return "HUB_KICK_H" /* GXT: You no longer have access to this Nightclub Warehouse as you became a Prospect. */;
			}
		}
		else if (__LIB_3__::func_673(__LIB_0__::func_797()))
		{
			if (__LIB_1__::func_744(PLAYER::PLAYER_ID()))
			{
				return "HUB_KICK_I1" /* GXT: You no longer have access to this Nightclub Warehouse as you became a CEO. */;
			}
			else
			{
				return "HUB_KICK_I" /* GXT: You no longer have access to this Nightclub Warehouse as you became an Associate. */;
			}
		}
		else if (__LIB_1__::func_744(PLAYER::PLAYER_ID()))
		{
			return "HUB_KICK_G1" /* GXT: You no longer have access to this Nightclub Warehouse as you became a VIP. */;
		}
		else
		{
			return "HUB_KICK_G" /* GXT: You no longer have access to this Nightclub Warehouse as you became a Bodyguard. */;
		}
	}
	if (BitTest(Global_1946250.f_506, 12))
	{
		if (__LIB_6__::func_598() == 0)
		{
			return "CLUB_KICK_K" /* GXT: You no longer have access to the Nightclub as you became the Beast. */;
		}
		else
		{
			return "HUB_KICK_K" /* GXT: You no longer have access to the Nightclub Warehouse as you became the Beast. */;
		}
	}
	return "";
}

void func_612(bool bParam0, bool bParam1)//Position - 0x3CC283
{
	if (__LIB_2__::func_72(PLAYER::PLAYER_ID(), 1) && (bParam0 == PLAYER::PLAYER_ID() || __LIB_3__::func_234(bParam0, PLAYER::PLAYER_ID())))
	{
		if (!bParam1)
		{
			if (__LIB_1__::func_744(PLAYER::PLAYER_ID()))
			{
				MISC::SET_BIT(&(Global_1946250.f_506), 0);
				MISC::SET_BIT(&(Global_1946250.f_506), 30);
			}
			else
			{
				MISC::SET_BIT(&(Global_1946250.f_506), 1);
				if (__LIB_2__::func_778(PLAYER::PLAYER_ID(), 1))
				{
					MISC::SET_BIT(&(Global_1946250.f_506), 2);
				}
				else if (bParam0 != __LIB_0__::func_162() && __LIB_3__::func_673(bParam0))
				{
					MISC::SET_BIT(&(Global_1946250.f_506), 3);
				}
			}
		}
		else
		{
			MISC::SET_BIT(&(Global_1946250.f_506), 4);
		}
	}
	else
	{
		MISC::SET_BIT(&(Global_1946250.f_506), 5);
	}
}

char* func_613(var uParam0, var uParam1, var uParam2, var uParam3)//Position - 0x3CC346
{
	bool bVar0;
	if (__LIB_0__::func_177() || __LIB_3__::func_719())
	{
		return "";
	}
	if (Global_1946250.f_506 == 0)
	{
		return "BASE_KICK_A" /* GXT: You no longer have access to this Facility. */;
	}
	if (BitTest(Global_1946250.f_506, 6))
	{
		return "BASE_KICK_B" /* GXT: You no longer have access to the Facility as the owner has left the game. */;
	}
	if (Global_1946250.f_3366 && !BitTest(Global_1946250, 18))
	{
		return "BASE_KICK_C" /* GXT: Owner has requested all to leave the Facility. */;
	}
	if (BitTest(Global_1946250, 18))
	{
		Global_1946250.f_3366 = 0;
		if (BitTest(Global_1946250.f_506, 30))
		{
			return "BASE_KICK_D" /* GXT: You no longer have access to this Facility as you have traded it in. */;
		}
		else
		{
			return "BASE_KICK_E" /* GXT: You no longer have access to this Facility as the owner has traded it in. */;
		}
	}
	if (BitTest(Global_1946250.f_506, 8))
	{
		return "BASE_KICK_G" /* GXT: You no longer have access to the Facility as the owner is undertaking confidential business. */;
	}
	if (BitTest(Global_1946250.f_506, 10))
	{
		return "BASE_KICK_H" /* GXT: Owner has requested all to leave the Facility. */;
	}
	if (BitTest(Global_1946250.f_506, 30))
	{
		if (__LIB_2__::func_778(PLAYER::PLAYER_ID(), 0))
		{
			return "BASE_KICK_I" /* GXT: You no longer have access to the Facility as you became a Prospect. */;
		}
		else if (__LIB_2__::func_72(PLAYER::PLAYER_ID(), 0))
		{
			bVar0 = __LIB_0__::func_797();
			if (bVar0 != __LIB_0__::func_162() && __LIB_3__::func_673(bVar0))
			{
				return "BASE_KICK_J" /* GXT: You no longer have access to the Facility. */;
			}
			else
			{
				return "BASE_KICK_K" /* GXT: You no longer have access to your Facility. */;
			}
		}
	}
	if (BitTest(Global_1946250.f_506, 12))
	{
		return "BASE_KICK_L" /* GXT: You no longer have access to the Facility as you became the Beast. */;
	}
	return "";
}

void func_614(bool bParam0, bool bParam1)//Position - 0x3D2B66
{
	if (__LIB_2__::func_72(PLAYER::PLAYER_ID(), 1) && (bParam0 == PLAYER::PLAYER_ID() || __LIB_3__::func_234(bParam0, PLAYER::PLAYER_ID())))
	{
		if (!bParam1)
		{
			if (__LIB_1__::func_744(PLAYER::PLAYER_ID()))
			{
				MISC::SET_BIT(&(Global_1946250.f_506), 0);
				MISC::SET_BIT(&(Global_1946250.f_506), 31);
			}
			else
			{
				MISC::SET_BIT(&(Global_1946250.f_506), 1);
				if (__LIB_2__::func_778(PLAYER::PLAYER_ID(), 1))
				{
					MISC::SET_BIT(&(Global_1946250.f_506), 2);
				}
				else if (bParam0 != __LIB_0__::func_162() && __LIB_3__::func_673(bParam0))
				{
					MISC::SET_BIT(&(Global_1946250.f_506), 3);
				}
			}
		}
		else
		{
			MISC::SET_BIT(&(Global_1946250.f_506), 4);
		}
	}
	else
	{
		MISC::SET_BIT(&(Global_1946250.f_506), 5);
	}
}

char* func_615(var uParam0, var uParam1, var uParam2, var uParam3)//Position - 0x3E0162
{
	bool bVar0;
	if (Global_1946250.f_506 == 0)
	{
		return "HANGAR_KICKj" /* GXT: You no longer have access to this Hangar. */;
	}
	if (BitTest(Global_1946250.f_506, 6))
	{
		return "HANGAR_KICKk" /* GXT: You no longer have access to the Hangar as the owner has left the game. */;
	}
	if (Global_1946250.f_3366 && !BitTest(Global_1946250, 18))
	{
		return "HANGAR_KICKg" /* GXT: Owner has requested all to leave the Hangar. */;
	}
	if (BitTest(Global_1946250, 18))
	{
		Global_1946250.f_3366 = 0;
		if (BitTest(Global_1946250.f_506, 30))
		{
			return "HANGAR_KICKh" /* GXT: You no longer have access to this Hangar as you have traded it in. */;
		}
		else
		{
			return "HANGAR_KICKi" /* GXT: You no longer have access to this Hangar as the owner has traded it in. */;
		}
	}
	if (BitTest(Global_1946250.f_506, 7))
	{
		return "";
	}
	if (BitTest(Global_1946250.f_506, 8))
	{
		return "HANGAR_KICKl" /* GXT: You no longer have access to the Hangar as the owner is undertaking confidential business. */;
	}
	if (BitTest(Global_1946250.f_506, 10))
	{
		return "HANGAR_KICKg" /* GXT: Owner has requested all to leave the Hangar. */;
	}
	if (BitTest(Global_1946250.f_506, 30))
	{
		if (__LIB_2__::func_778(PLAYER::PLAYER_ID(), 0))
		{
			return "HANGAR_KICKd" /* GXT: You no longer have access to the Hangar as you became a Prospect. */;
		}
		else if (__LIB_2__::func_72(PLAYER::PLAYER_ID(), 0))
		{
			bVar0 = __LIB_0__::func_797();
			if (bVar0 != __LIB_0__::func_162() && __LIB_3__::func_673(bVar0))
			{
				return "HANGAR_KICKe" /* GXT: You no longer have access to the Hangar as you became an Associate. */;
			}
			else
			{
				return "HANGAR_KICKf" /* GXT: You no longer have access to the Hangar as you became a Bodyguard. */;
			}
		}
	}
	return "";
}

void func_616(bool bParam0, bool bParam1)//Position - 0x3F2AB8
{
	if (__LIB_2__::func_72(PLAYER::PLAYER_ID(), 1) && (bParam0 == PLAYER::PLAYER_ID() || __LIB_3__::func_234(bParam0, PLAYER::PLAYER_ID())))
	{
		if (!bParam1)
		{
			if (__LIB_1__::func_744(PLAYER::PLAYER_ID()))
			{
				MISC::SET_BIT(&(Global_1946250.f_506), 2);
				MISC::SET_BIT(&(Global_1946250.f_506), 0);
				Global_1853185 = PLAYER::PLAYER_ID();
			}
			else
			{
				MISC::SET_BIT(&(Global_1946250.f_506), 3);
				if (__LIB_2__::func_778(PLAYER::PLAYER_ID(), 1))
				{
					MISC::SET_BIT(&(Global_1946250.f_506), 4);
				}
				else if (bParam0 != __LIB_0__::func_162() && __LIB_3__::func_673(bParam0))
				{
					MISC::SET_BIT(&(Global_1946250.f_506), 5);
				}
				Global_1853185 = bParam0;
			}
		}
		else
		{
			MISC::SET_BIT(&(Global_1946250.f_506), 6);
			Global_1853185 = bParam0;
		}
	}
	else
	{
		MISC::SET_BIT(&(Global_1946250.f_506), 1);
	}
}

char* func_617(var uParam0, var uParam1, var uParam2, var uParam3)//Position - 0x3F2B8E
{
	bool bVar0;
	if (BitTest(Global_1946250.f_506, 7))
	{
		return "MP_TRUCK_KICKi" /* GXT: You no longer have access to the Mobile Operations Center as the owner has left the game. */;
	}
	if (BitTest(Global_1946250.f_506, 0))
	{
		if (__LIB_2__::func_72(PLAYER::PLAYER_ID(), 0))
		{
			bVar0 = __LIB_0__::func_797();
			if (__LIB_2__::func_778(PLAYER::PLAYER_ID(), 0))
			{
				return "MP_TRUCK_KICKd" /* GXT: You no longer have access to the Mobile Operations Center as you became a Prospect. */;
			}
			else if (bVar0 != __LIB_0__::func_162() && __LIB_3__::func_673(bVar0))
			{
				return "MP_TRUCK_KICKa" /* GXT: You no longer have access to the Mobile Operations Center as you became an Associate. */;
			}
			else
			{
				return "MP_TRUCK_KICKb" /* GXT: You no longer have access to the Mobile Operations Center as you became a Bodyguard. */;
			}
		}
	}
	if (Global_1853185 != __LIB_0__::func_162())
	{
		if (BitTest(Global_2689235[Global_1853185 /*453*/].f_318.f_1, 20) && BitTest(Global_2689235[Global_1853185 /*453*/].f_318.f_1, 24))
		{
			if (PLAYER::PLAYER_ID() == Global_1853185)
			{
				return "MP_TRUCK_KICKe" /* GXT: You have been removed from your Mobile Operations Center due to renovations. */;
			}
			else
			{
				return "MP_TRUCK_KICKf" /* GXT: You have been removed from the Mobile Operations Center due to renovations. */;
			}
		}
		if (BitTest(Global_1946250.f_506, 8) || (BitTest(Global_2689235[Global_1853185 /*453*/].f_318, 12) && !BitTest(Global_1946250.f_506, 0)))
		{
			return "MP_TRUCK_KICKc" /* GXT: Owner has requested all to leave the Mobile Operations Center. */;
		}
	}
	return "";
}

char* func_618(var uParam0, var uParam1, var uParam2, var uParam3)//Position - 0x3FD039
{
	bool bVar0;
	if (Global_1946250.f_3366 && !BitTest(Global_1946250, 18))
	{
		Global_1946250.f_3366 = 0;
		return "MP_BUNKER_KICKe" /* GXT: Owner has requested all to leave the Bunker. */;
	}
	if (BitTest(Global_1946250, 18))
	{
		Global_1946250.f_3366 = 0;
		if (BitTest(Global_1946250.f_506, 31))
		{
			return "MP_BUNK_PUR_K1" /* GXT: You no longer have access to this Bunker as you have traded it in. */;
		}
		else
		{
			return "MP_BUNK_PUR_K2" /* GXT: You no longer have access to this Bunker as the owner has traded it in. */;
		}
	}
	if (Global_1946250.f_506 == 0)
	{
		return "MP_BUNKER_KICKc" /* GXT: You no longer have access to this Bunker. */;
	}
	if (BitTest(Global_1946250.f_506, 6))
	{
		return "MP_BUNKER_KICKi" /* GXT: You no longer have access to the Bunker as the owner has left the game. */;
	}
	if (BitTest(Global_1946250.f_506, 7))
	{
		return "";
	}
	if (BitTest(Global_1946250.f_506, 8))
	{
		return "MP_BUNKER_KICKj" /* GXT: You no longer have access to the Bunker as the owner is undertaking confidential business. */;
	}
	if (BitTest(Global_1946250.f_506, 10))
	{
		return "MP_BUNKER_KICKe" /* GXT: Owner has requested all to leave the Bunker. */;
	}
	if (BitTest(Global_1946250.f_506, 31))
	{
		if (__LIB_2__::func_778(PLAYER::PLAYER_ID(), 0))
		{
			return "MP_BUNKER_KICKd" /* GXT: You no longer have access to the Bunker as you became a Prospect. */;
		}
		else if (__LIB_2__::func_72(PLAYER::PLAYER_ID(), 0))
		{
			bVar0 = __LIB_0__::func_797();
			if (bVar0 != __LIB_0__::func_162() && __LIB_3__::func_673(bVar0))
			{
				return "MP_BUNKER_KICKa" /* GXT: You no longer have access to the Bunker as you became an Associate. */;
			}
			else
			{
				return "MP_BUNKER_KICKb" /* GXT: You no longer have access to the Bunker as you became a Bodyguard. */;
			}
		}
	}
	return "";
}

int func_619(bool bParam0, int iParam1)//Position - 0x412AA7
{
	if ((__LIB_2__::func_778(bParam0, 0) && __LIB_5__::func_661(__LIB_2__::func_39(bParam0), __LIB_4__::func_715(iParam1))) && !__LIB_1__::func_101(PLAYER::GET_PLAYER_PED(bParam0)))
	{
		return 1;
	}
	return 0;
}

int func_620()//Position - 0x412E13
{
	if (__LIB_2__::func_778(PLAYER::PLAYER_ID(), 1) && __LIB_1__::func_907(PLAYER::PLAYER_ID(), 0))
	{
		if (__LIB_5__::func_185(PLAYER::PLAYER_ID()) == 192 || __LIB_5__::func_185(PLAYER::PLAYER_ID()) == 225)
		{
			return 1;
		}
	}
	return 0;
}

int func_621(bool bParam0, int iParam1, int iParam2)//Position - 0x412E62
{
	int iVar0;
	iVar0 = __LIB_4__::func_715(iParam1);
	if (bParam0 != __LIB_0__::func_162())
	{
		if (__LIB_2__::func_778(bParam0, 1))
		{
			return __LIB_5__::func_661(__LIB_2__::func_39(bParam0), iVar0);
		}
		else if (__LIB_5__::func_661(bParam0, iVar0) && !__LIB_2__::func_72(PLAYER::PLAYER_ID(), 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_622(bool bParam0, int iParam1, int iParam2)//Position - 0x41C083
{
	if (Global_262145.f_15872 /* Tunable: EXEC_DISABLE_WAREHOUSE_ENTRY */)
	{
		return 0;
	}
	if (__LIB_2__::func_778(bParam0, 1))
	{
		return 0;
	}
	if (__LIB_2__::func_72(bParam0, 1))
	{
		return __LIB_5__::func_385(__LIB_2__::func_39(bParam0), __LIB_4__::func_815(iParam1));
	}
	else if (__LIB_5__::func_385(bParam0, __LIB_4__::func_815(iParam1)))
	{
		return 1;
	}
	return 0;
}

int func_623(bool bParam0, int iParam1, int iParam2)//Position - 0x422401
{
	if (Global_262145.f_15872 /* Tunable: EXEC_DISABLE_WAREHOUSE_ENTRY */)
	{
		return 0;
	}
	if (__LIB_2__::func_778(bParam0, 1))
	{
		return 0;
	}
	if (__LIB_2__::func_72(bParam0, 1))
	{
		return __LIB_5__::func_688(__LIB_2__::func_39(bParam0), __LIB_3__::func_481(iParam1));
	}
	else if (__LIB_5__::func_688(bParam0, __LIB_3__::func_481(iParam1)))
	{
		return 1;
	}
	return 0;
}

int func_624(int iParam0)//Position - 0x43F734
{
	int iVar0;
	iVar0 = __LIB_19__::func_252(iParam0);
	if (iVar0 == 0)
	{
		return 145;
	}
	return iVar0;
}

void func_625(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x468B74
{
	if ((iParam1 != 0 && iParam1 != 3) || iParam2 == 1)
	{
		if (CAM::DOES_CAM_EXIST(*uParam0))
		{
			CAM::SET_CAM_ACTIVE(*uParam0, false);
			if (bParam4)
			{
				CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, true, 0);
			}
			CAM::DESTROY_CAM(*uParam0, false);
			*uParam0 = 0;
			__LIB_7__::func_153();
			if (__LIB_12__::func_675())
			{
				STREAMING::CLEAR_FOCUS();
			}
			NETWORK::NETWORK_SET_IN_FREE_CAM_MODE(false);
			if (Global_1574534 == 0 && iParam3 == 1)
			{
				__LIB_2__::func_592(1, 0);
				__LIB_2__::func_592(1, 0);
			}
			if (!__LIB_7__::func_170())
			{
				if (__LIB_0__::func_53() || __LIB_0__::func_52())
				{
					if (!Global_2723612.f_7)
					{
						HUD::BUSYSPINNER_OFF();
					}
				}
				else
				{
					HUD::BUSYSPINNER_OFF();
				}
			}
		}
	}
}

void func_626(var uParam0, int iParam1)//Position - 0x46D3C3
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (!BitTest(uParam0->f_51.f_7, 7))
	{
		if (iParam1 == 2)
		{
			iVar0 = 10;
		}
		else if (__LIB_23__::func_647())
		{
			iVar0 = 7;
		}
		else
		{
			iVar0 = 8;
		}
		uParam0->f_25 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar0);
		if (__LIB_2__::func_440() || __LIB_1__::func_826(PLAYER::PLAYER_ID()))
		{
			iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, 10000);
			if (iVar1 <= 5000)
			{
				uParam0->f_25 = 0;
			}
			else
			{
				uParam0->f_25 = 1;
			}
		}
		if (__LIB_24__::func_245())
		{
			uParam0->f_25 = 1;
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				iVar2 = ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()));
			}
			switch (iVar2)
			{
				case joaat("cerberus"):
				case joaat("cerberus2"):
				case joaat("cerberus3"):
					uParam0->f_25 = 3;
					break;
				}
		}
		if (__LIB_0__::func_177() && (__LIB_1__::func_614() || __LIB_1__::func_24()))
		{
			if (INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) != 0)
			{
				uParam0->f_25 = 2;
			}
			else
			{
				iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, 10000);
				if (iVar1 <= 5000)
				{
					uParam0->f_25 = 0;
				}
				else
				{
					uParam0->f_25 = 1;
				}
			}
		}
		if (__LIB_1__::func_308() && BitTest(Global_4718592.f_170137.f_2808, 2))
		{
			uParam0->f_25 = 7;
		}
		MISC::SET_BIT(&(uParam0->f_51.f_7), 7);
	}
}

void func_627(float fParam0)//Position - 0x47A64D
{
	float fVar0;
	int iVar1;
	fVar0 = (Global_262145.f_106 /* Tunable: MAX_HEALTH_MULTIPLIER */ * fParam0);
	iVar1 = SYSTEM::ROUND((138f * fVar0));
	iVar1 += 100;
	if (__LIB_24__::func_255(1))
	{
		iVar1 = SYSTEM::ROUND((156f * fVar0));
		iVar1 += 100;
	}
	if (__LIB_24__::func_255(2))
	{
		iVar1 = SYSTEM::ROUND((174f * fVar0));
		iVar1 += 100;
	}
	if (__LIB_24__::func_255(3))
	{
		iVar1 = SYSTEM::ROUND((192f * fVar0));
		iVar1 += 100;
	}
	if (__LIB_24__::func_255(4))
	{
		iVar1 = SYSTEM::ROUND((210f * fVar0));
		iVar1 += 100;
	}
	if (__LIB_24__::func_255(5))
	{
		iVar1 = SYSTEM::ROUND((228f * fVar0));
		iVar1 += 100;
	}
	if (iVar1 < 101)
	{
		iVar1 = 101;
	}
	ENTITY::SET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID(), iVar1, 0);
}

int func_628(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)//Position - 0x47F14F
{
	if (((((((((((((__LIB_2__::func_771(0, -1) > 0 || __LIB_2__::func_771(6, -1) > 0) || (__LIB_2__::func_771(11, -1) > 0 && iParam0)) || __LIB_2__::func_771(8, -1) > 0) || ((iParam1 && __LIB_1__::func_360(5396, -1, 0) != 0) && __LIB_0__::func_253(15270, -1) == 7)) || (__LIB_2__::func_771(12, -1) > 0 && iParam2)) || (__LIB_2__::func_771(13, -1) > 0 && iParam3)) || (__LIB_2__::func_771(14, -1) > 0 && iParam4)) || (__LIB_2__::func_771(18, -1) > 0 && iParam5)) || (__LIB_2__::func_771(21, -1) > 0 && iParam6)) || ((__LIB_2__::func_771(22, -1) > 0 && iParam7) && __LIB_6__::func_996())) || (__LIB_1__::func_868(-1) && iParam8)) || ((__LIB_2__::func_771(25, -1) > 0 && iParam9) && __LIB_10__::func_457(1))) || (__LIB_2__::func_771(26, -1) > 0 && iParam10))
	{
		return 1;
	}
	return 0;
}

void func_629(var uParam0)//Position - 0x493D32
{
	__LIB_1__::func_553();
	__LIB_1__::func_7(1, 0, -1);
	__LIB_1__::func_320();
	if (((!__LIB_0__::func_983() && !__LIB_10__::func_343()) && !__LIB_10__::func_774(PLAYER::PLAYER_ID(), 1, 0)) && !Global_2621445)
	{
		if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
		{
			HUD::CLEAR_HELP(true);
		}
	}
	Global_2621445 = 0;
	if (BitTest(Global_2621446, 29))
	{
		HUD::DISPLAY_HUD(true);
		HUD::DISPLAY_RADAR(true);
		MISC::CLEAR_BIT(&Global_2621446, 29);
	}
	HUD::SET_FORCE_SHOW_GPS(false);
	HUD::RESET_HUD_COMPONENT_VALUES(15);
	__LIB_10__::func_252(0);
	__LIB_10__::func_342(&(uParam0->f_47));
	if (__LIB_5__::func_839(&(uParam0->f_1)) != 3)
	{
		if (!BitTest(uParam0->f_1.f_2, 5))
		{
			if (!__LIB_4__::func_962(PLAYER::PLAYER_PED_ID()) && !__LIB_10__::func_341())
			{
				if (GRAPHICS::GET_TIMECYCLE_MODIFIER_INDEX() != -1)
				{
					GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
					if (__LIB_10__::func_884())
					{
						if (!MISC::IS_STRING_NULL_OR_EMPTY(&Global_2789006))
						{
							GRAPHICS::SET_TIMECYCLE_MODIFIER(&Global_2789006);
						}
					}
					else if (__LIB_10__::func_883())
					{
						if (!MISC::IS_STRING_NULL_OR_EMPTY(&Global_2789022))
						{
							GRAPHICS::SET_TIMECYCLE_MODIFIER(&Global_2789022);
						}
					}
				}
			}
		}
	}
	if (!BitTest(Global_2621446, 18))
	{
		HUD::DISPLAY_RADAR(true);
	}
	GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&(uParam0->f_47.f_1471));
	GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&(uParam0->f_47.f_1473));
	if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()) && (FILES::DOES_CURRENT_PED_COMPONENT_HAVE_RESTRICTION_TAG(PLAYER::PLAYER_PED_ID(), 1, joaat("THERMAL_VISION")) || FILES::DOES_CURRENT_PED_PROP_HAVE_RESTRICTION_TAG(PLAYER::PLAYER_PED_ID(), 0, joaat("THERMAL_VISION"))))
	{
	}
	else
	{
		GRAPHICS::SET_SEETHROUGH(false);
	}
	__LIB_1__::func_403(&(uParam0->f_47.f_1474));
	GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&(uParam0->f_47.f_2174));
	uParam0->f_47.f_1467 = 0;
	uParam0->f_47.f_1468 = 0;
	uParam0->f_47.f_1469 = 99;
	uParam0->f_47.f_2185 = -1;
	__LIB_10__::func_384(&(uParam0->f_47));
	__LIB_10__::func_286(&(uParam0->f_47));
	__LIB_10__::func_389(&(uParam0->f_47), 0);
	MISC::CLEAR_BIT(&Global_2621446, 11);
	MISC::CLEAR_BIT(&Global_2621446, 0);
	MISC::CLEAR_BIT(&Global_2621446, 12);
	MISC::CLEAR_BIT(&(uParam0->f_47), 7);
	uParam0->f_47.f_1465 = 0;
	MISC::SET_FAKE_WANTED_LEVEL(uParam0->f_47.f_1465);
	uParam0->f_47.f_1466 = 0;
	HUD::FLASH_WANTED_DISPLAY(uParam0->f_47.f_1466);
	__LIB_10__::func_265(&(uParam0->f_47), 0);
}

void func_630(int iParam0)//Position - 0x4E399C
{
	__LIB_1__::func_354(1244, 0, -1, 1, 0);
	if (iParam0 >= __LIB_22__::func_163(28))
	{
		__LIB_24__::func_188(28, 1);
		__LIB_25__::func_731(28, 1, 0, 0);
	}
	if (iParam0 >= __LIB_22__::func_163(29))
	{
		__LIB_24__::func_188(29, 1);
		__LIB_25__::func_731(29, 1, 0, 0);
		__LIB_1__::func_746(1244, 1, -1);
	}
	if (iParam0 >= __LIB_22__::func_163(30))
	{
		__LIB_24__::func_188(30, 1);
		__LIB_25__::func_731(30, 1, 0, 0);
		__LIB_1__::func_746(1244, 1, -1);
	}
	if (iParam0 >= __LIB_22__::func_163(31))
	{
		__LIB_24__::func_188(31, 1);
		__LIB_25__::func_731(31, 1, 0, 0);
		__LIB_1__::func_746(1244, 1, -1);
	}
	if (iParam0 >= __LIB_22__::func_163(32))
	{
		__LIB_24__::func_188(32, 1);
		__LIB_25__::func_731(32, 1, 0, 0);
		__LIB_1__::func_746(1244, 1, -1);
	}
	if (iParam0 >= __LIB_22__::func_163(33))
	{
		__LIB_24__::func_188(33, 1);
		__LIB_25__::func_731(33, 1, 0, 0);
		__LIB_1__::func_746(1244, 1, -1);
	}
	if (iParam0 >= __LIB_22__::func_163(34))
	{
		__LIB_24__::func_188(34, 1);
		__LIB_25__::func_731(34, 1, 0, 0);
		__LIB_1__::func_746(1244, 1, -1);
	}
	if (iParam0 >= __LIB_22__::func_163(35))
	{
		__LIB_24__::func_188(35, 1);
		__LIB_25__::func_731(35, 1, 0, 0);
		__LIB_1__::func_746(1244, 1, -1);
	}
	if (iParam0 >= __LIB_22__::func_163(36))
	{
		__LIB_24__::func_188(36, 1);
		__LIB_25__::func_731(36, 1, 0, 0);
		__LIB_1__::func_746(1244, 1, -1);
	}
	if (iParam0 >= __LIB_22__::func_163(37))
	{
		__LIB_24__::func_188(37, 1);
		__LIB_25__::func_731(37, 1, 0, 0);
		__LIB_1__::func_746(1244, 1, -1);
	}
	if (iParam0 >= __LIB_22__::func_163(38))
	{
		__LIB_24__::func_188(38, 1);
		__LIB_25__::func_731(38, 1, 0, 0);
		__LIB_1__::func_746(1244, 1, -1);
	}
	if (iParam0 >= __LIB_22__::func_163(39))
	{
		__LIB_24__::func_188(39, 1);
		__LIB_25__::func_731(39, 1, 0, 0);
		__LIB_1__::func_746(1244, 1, -1);
	}
	if (iParam0 >= __LIB_22__::func_163(40))
	{
		__LIB_24__::func_188(40, 1);
		__LIB_25__::func_731(40, 1, 0, 0);
		__LIB_1__::func_746(1244, 1, -1);
	}
	if (iParam0 >= __LIB_22__::func_163(41))
	{
		__LIB_24__::func_188(41, 1);
		__LIB_25__::func_731(41, 1, 0, 0);
		__LIB_1__::func_746(1244, 1, -1);
	}
	if (iParam0 >= __LIB_22__::func_163(42))
	{
		__LIB_24__::func_188(42, 1);
		__LIB_25__::func_731(42, 1, 0, 0);
		__LIB_1__::func_746(1244, 1, -1);
	}
	if (iParam0 >= __LIB_22__::func_163(43))
	{
		__LIB_24__::func_188(43, 1);
		__LIB_25__::func_731(43, 1, 0, 0);
		__LIB_1__::func_746(1244, 1, -1);
	}
	if (iParam0 >= __LIB_22__::func_163(44))
	{
		__LIB_24__::func_188(44, 1);
		__LIB_25__::func_731(44, 1, 0, 0);
		__LIB_1__::func_746(1244, 1, -1);
	}
	if (iParam0 >= __LIB_22__::func_163(45))
	{
		__LIB_24__::func_188(45, 1);
		__LIB_25__::func_731(45, 1, 0, 0);
		__LIB_1__::func_746(1244, 1, -1);
	}
	if (iParam0 >= __LIB_22__::func_163(46))
	{
		__LIB_24__::func_188(46, 1);
		__LIB_25__::func_731(46, 1, 0, 0);
		__LIB_1__::func_746(1244, 1, -1);
	}
	if (iParam0 >= __LIB_22__::func_163(47))
	{
		__LIB_24__::func_188(47, 1);
		__LIB_25__::func_731(47, 1, 0, 0);
		__LIB_1__::func_746(1244, 1, -1);
	}
	if (iParam0 >= __LIB_22__::func_163(48))
	{
		__LIB_24__::func_188(48, 1);
		__LIB_25__::func_731(48, 1, 0, 0);
		__LIB_1__::func_746(1244, 1, -1);
	}
	if (iParam0 >= __LIB_22__::func_163(49))
	{
		__LIB_24__::func_188(49, 1);
		__LIB_25__::func_731(49, 1, 0, 0);
		__LIB_1__::func_746(1244, 1, -1);
	}
	if (iParam0 >= __LIB_22__::func_163(50))
	{
		__LIB_1__::func_746(1244, 1, -1);
		__LIB_24__::func_188(50, 1);
		__LIB_25__::func_731(50, 1, 0, 0);
	}
	if (iParam0 >= __LIB_22__::func_163(55))
	{
		__LIB_24__::func_188(55, 1);
		__LIB_25__::func_731(55, 1, 0, 0);
		__LIB_1__::func_746(1244, 1, -1);
	}
	if (iParam0 >= __LIB_22__::func_163(56))
	{
		__LIB_24__::func_188(56, 1);
		__LIB_25__::func_731(56, 1, 0, 0);
		__LIB_1__::func_746(1244, 1, -1);
	}
	if (iParam0 >= __LIB_22__::func_163(57))
	{
		__LIB_24__::func_188(57, 1);
		__LIB_25__::func_731(57, 1, 0, 0);
		__LIB_1__::func_746(1244, 1, -1);
	}
	if (iParam0 >= __LIB_22__::func_163(58))
	{
		__LIB_24__::func_188(58, 1);
		__LIB_25__::func_731(58, 1, 0, 0);
		__LIB_1__::func_746(1244, 1, -1);
	}
	if (iParam0 >= __LIB_22__::func_163(59))
	{
		__LIB_24__::func_188(59, 1);
		__LIB_25__::func_731(59, 1, 0, 0);
		__LIB_1__::func_746(1244, 1, -1);
	}
	if (iParam0 >= __LIB_22__::func_163(60))
	{
		__LIB_24__::func_188(60, 1);
		__LIB_25__::func_731(60, 1, 0, 0);
		__LIB_1__::func_746(1244, 1, -1);
	}
	if (iParam0 >= __LIB_22__::func_163(91))
	{
		__LIB_24__::func_188(91, 1);
		__LIB_25__::func_731(91, 1, 0, 0);
		__LIB_1__::func_746(1244, 1, -1);
	}
	if (iParam0 >= __LIB_22__::func_163(92))
	{
		__LIB_24__::func_188(92, 1);
		__LIB_25__::func_731(92, 1, 0, 0);
		__LIB_1__::func_746(1244, 1, -1);
	}
	if (iParam0 >= __LIB_22__::func_163(93))
	{
		__LIB_24__::func_188(93, 1);
		__LIB_25__::func_731(93, 1, 0, 0);
		__LIB_1__::func_746(1244, 1, -1);
	}
	if (iParam0 >= __LIB_22__::func_163(94))
	{
		__LIB_24__::func_188(94, 1);
		__LIB_25__::func_731(94, 1, 0, 0);
		__LIB_1__::func_746(1244, 1, -1);
	}
	if (iParam0 >= __LIB_22__::func_163(95))
	{
		__LIB_24__::func_188(95, 1);
		__LIB_25__::func_731(95, 1, 0, 0);
		__LIB_1__::func_746(1244, 1, -1);
	}
	if (iParam0 >= __LIB_22__::func_163(96))
	{
		__LIB_24__::func_188(96, 1);
		__LIB_25__::func_731(96, 1, 0, 0);
		__LIB_1__::func_746(1244, 1, -1);
	}
	if (iParam0 >= __LIB_22__::func_163(97))
	{
		__LIB_24__::func_188(97, 1);
		__LIB_25__::func_731(97, 1, 0, 0);
		__LIB_1__::func_746(1244, 1, -1);
	}
	if (iParam0 >= __LIB_22__::func_163(98))
	{
		__LIB_24__::func_188(98, 1);
		__LIB_25__::func_731(98, 1, 0, 0);
		__LIB_1__::func_746(1244, 1, -1);
	}
	if (iParam0 >= __LIB_22__::func_163(99))
	{
		__LIB_24__::func_188(99, 1);
		__LIB_25__::func_731(99, 1, 0, 0);
		__LIB_1__::func_746(1244, 1, -1);
	}
	if (iParam0 >= __LIB_22__::func_163(100))
	{
		__LIB_24__::func_188(100, 1);
		__LIB_25__::func_731(100, 1, 0, 0);
		__LIB_1__::func_746(1244, 1, -1);
	}
	if (iParam0 >= __LIB_22__::func_163(101))
	{
		__LIB_24__::func_188(101, 1);
		__LIB_25__::func_731(101, 1, 0, 0);
		__LIB_1__::func_746(1244, 1, -1);
	}
	if (iParam0 >= __LIB_22__::func_163(102))
	{
		__LIB_24__::func_188(102, 1);
		__LIB_25__::func_731(102, 1, 0, 0);
		__LIB_1__::func_746(1244, 1, -1);
	}
	if (iParam0 >= __LIB_22__::func_163(103))
	{
		__LIB_24__::func_188(103, 1);
		__LIB_25__::func_731(103, 1, 0, 0);
		__LIB_1__::func_746(1244, 1, -1);
	}
	if (iParam0 >= __LIB_22__::func_163(104))
	{
		__LIB_24__::func_188(104, 1);
		__LIB_25__::func_731(104, 1, 0, 0);
		__LIB_1__::func_746(1244, 1, -1);
	}
	if (iParam0 >= __LIB_22__::func_163(105))
	{
		__LIB_24__::func_188(105, 1);
		__LIB_25__::func_731(105, 1, 0, 0);
		__LIB_1__::func_746(1244, 1, -1);
	}
	if (iParam0 >= __LIB_22__::func_163(106))
	{
		__LIB_24__::func_188(106, 1);
		__LIB_25__::func_731(106, 1, 0, 0);
		__LIB_1__::func_746(1244, 1, -1);
	}
	if (iParam0 >= __LIB_22__::func_163(107))
	{
		__LIB_24__::func_188(107, 1);
		__LIB_25__::func_731(107, 1, 0, 0);
		__LIB_1__::func_746(1244, 1, -1);
	}
	if (iParam0 >= __LIB_22__::func_163(108))
	{
		__LIB_24__::func_188(108, 1);
		__LIB_25__::func_731(108, 1, 0, 0);
		__LIB_1__::func_746(1244, 1, -1);
	}
	if (iParam0 >= __LIB_22__::func_163(109))
	{
		__LIB_24__::func_188(109, 1);
		__LIB_25__::func_731(109, 1, 0, 0);
		__LIB_1__::func_746(1244, 1, -1);
	}
	if (iParam0 >= __LIB_22__::func_163(110))
	{
		__LIB_24__::func_188(110, 1);
		__LIB_25__::func_731(110, 1, 0, 0);
		__LIB_1__::func_746(1244, 1, -1);
	}
	if (iParam0 >= __LIB_22__::func_163(111))
	{
		__LIB_24__::func_188(111, 1);
		__LIB_25__::func_731(111, 1, 0, 0);
		__LIB_1__::func_746(1244, 1, -1);
	}
	if (iParam0 >= __LIB_22__::func_163(112))
	{
		__LIB_24__::func_188(112, 1);
		__LIB_25__::func_731(112, 1, 0, 0);
		__LIB_1__::func_746(1244, 1, -1);
	}
	if (iParam0 >= __LIB_22__::func_163(113))
	{
		__LIB_24__::func_188(113, 1);
		__LIB_25__::func_731(113, 1, 0, 0);
		__LIB_1__::func_746(1244, 1, -1);
	}
	if (iParam0 >= __LIB_22__::func_163(114))
	{
		__LIB_24__::func_188(114, 1);
		__LIB_25__::func_731(114, 1, 0, 0);
		__LIB_1__::func_746(1244, 1, -1);
	}
	if (iParam0 >= __LIB_22__::func_163(115))
	{
		__LIB_24__::func_188(115, 1);
		__LIB_25__::func_731(115, 1, 0, 0);
		__LIB_1__::func_746(1244, 1, -1);
	}
	if (iParam0 >= __LIB_22__::func_163(116))
	{
		__LIB_24__::func_188(116, 1);
		__LIB_25__::func_731(116, 1, 0, 0);
		__LIB_1__::func_746(1244, 1, -1);
	}
	if (iParam0 >= __LIB_22__::func_163(117))
	{
		__LIB_24__::func_188(117, 1);
		__LIB_25__::func_731(117, 1, 0, 0);
		__LIB_1__::func_746(1244, 1, -1);
	}
	if (iParam0 >= __LIB_22__::func_163(118))
	{
		__LIB_24__::func_188(118, 1);
		__LIB_25__::func_731(118, 1, 0, 0);
		__LIB_1__::func_746(1244, 1, -1);
	}
	if (iParam0 >= __LIB_22__::func_163(119))
	{
		__LIB_24__::func_188(119, 1);
		__LIB_25__::func_731(119, 1, 0, 0);
		__LIB_1__::func_746(1244, 1, -1);
	}
	if (iParam0 >= __LIB_22__::func_163(120))
	{
		__LIB_24__::func_188(120, 1);
		__LIB_25__::func_731(120, 1, 0, 0);
		__LIB_1__::func_746(1244, 1, -1);
	}
	if (iParam0 >= __LIB_22__::func_163(121))
	{
		__LIB_24__::func_188(121, 1);
		__LIB_25__::func_731(121, 1, 0, 0);
		__LIB_1__::func_746(1244, 1, -1);
	}
	if (iParam0 >= __LIB_22__::func_163(122))
	{
		__LIB_24__::func_188(122, 1);
		__LIB_25__::func_731(122, 1, 0, 0);
		__LIB_1__::func_746(1244, 1, -1);
	}
	if (iParam0 >= __LIB_22__::func_163(149))
	{
		__LIB_24__::func_188(149, 1);
		__LIB_25__::func_731(149, 1, 0, 0);
		__LIB_1__::func_746(1244, 1, -1);
	}
	if (iParam0 >= __LIB_22__::func_163(150))
	{
		__LIB_24__::func_188(150, 1);
		__LIB_25__::func_731(150, 1, 0, 0);
		__LIB_1__::func_746(1244, 1, -1);
	}
	if (iParam0 >= __LIB_22__::func_163(151))
	{
		__LIB_24__::func_188(151, 1);
		__LIB_25__::func_731(151, 1, 0, 0);
		__LIB_1__::func_746(1244, 1, -1);
	}
	if (iParam0 >= __LIB_22__::func_163(152))
	{
		__LIB_24__::func_188(152, 1);
		__LIB_25__::func_731(152, 1, 0, 0);
		__LIB_1__::func_746(1244, 1, -1);
	}
	if (iParam0 >= __LIB_22__::func_163(153))
	{
		__LIB_24__::func_188(153, 1);
		__LIB_25__::func_731(153, 1, 0, 0);
		__LIB_1__::func_746(1244, 1, -1);
	}
	if (iParam0 >= __LIB_22__::func_163(154))
	{
		__LIB_24__::func_188(154, 1);
		__LIB_25__::func_731(154, 1, 0, 0);
		__LIB_1__::func_746(1244, 1, -1);
	}
	if (iParam0 >= __LIB_22__::func_163(155))
	{
		__LIB_24__::func_188(155, 1);
		__LIB_25__::func_731(155, 1, 0, 0);
		__LIB_1__::func_746(1244, 1, -1);
	}
	if (iParam0 >= __LIB_22__::func_163(156))
	{
		__LIB_24__::func_188(156, 1);
		__LIB_25__::func_731(156, 1, 0, 0);
		__LIB_1__::func_746(1244, 1, -1);
	}
	if (iParam0 >= __LIB_22__::func_163(157))
	{
		__LIB_24__::func_188(157, 1);
		__LIB_25__::func_731(157, 1, 0, 0);
		__LIB_1__::func_746(1244, 1, -1);
	}
	if (iParam0 >= __LIB_22__::func_163(158))
	{
		__LIB_24__::func_188(158, 1);
		__LIB_25__::func_731(158, 1, 0, 0);
		__LIB_1__::func_746(1244, 1, -1);
	}
	if (iParam0 >= __LIB_22__::func_163(159))
	{
		__LIB_24__::func_188(159, 1);
		__LIB_25__::func_731(159, 1, 0, 0);
		__LIB_1__::func_746(1244, 1, -1);
	}
	if (iParam0 >= __LIB_22__::func_163(160))
	{
		__LIB_24__::func_188(160, 1);
		__LIB_25__::func_731(160, 1, 0, 0);
		__LIB_1__::func_746(1244, 1, -1);
	}
	if (iParam0 >= __LIB_22__::func_163(161))
	{
		__LIB_24__::func_188(161, 1);
		__LIB_25__::func_731(161, 1, 0, 0);
		__LIB_1__::func_746(1244, 1, -1);
	}
	if (iParam0 >= __LIB_22__::func_163(162))
	{
		__LIB_24__::func_188(162, 1);
		__LIB_25__::func_731(162, 1, 0, 0);
		__LIB_1__::func_746(1244, 1, -1);
	}
	if (iParam0 >= __LIB_22__::func_163(163))
	{
		__LIB_24__::func_188(163, 1);
		__LIB_25__::func_731(163, 1, 0, 0);
		__LIB_1__::func_746(1244, 1, -1);
	}
	if (iParam0 >= __LIB_22__::func_163(164))
	{
		__LIB_24__::func_188(164, 1);
		__LIB_25__::func_731(164, 1, 0, 0);
		__LIB_1__::func_746(1244, 1, -1);
	}
	if (iParam0 >= __LIB_22__::func_163(165))
	{
		__LIB_24__::func_188(165, 1);
		__LIB_25__::func_731(165, 1, 0, 0);
		__LIB_1__::func_746(1244, 1, -1);
	}
	if (iParam0 >= __LIB_22__::func_163(166))
	{
		__LIB_24__::func_188(166, 1);
		__LIB_25__::func_731(166, 1, 0, 0);
		__LIB_1__::func_746(1244, 1, -1);
	}
	if (iParam0 >= __LIB_22__::func_163(167))
	{
		__LIB_24__::func_188(167, 1);
		__LIB_25__::func_731(167, 1, 0, 0);
		__LIB_1__::func_746(1244, 1, -1);
	}
	if (iParam0 >= __LIB_22__::func_163(168))
	{
		__LIB_24__::func_188(168, 1);
		__LIB_25__::func_731(168, 1, 0, 0);
		__LIB_1__::func_746(1244, 1, -1);
	}
	if (iParam0 >= __LIB_22__::func_163(169))
	{
		__LIB_24__::func_188(169, 1);
		__LIB_25__::func_731(169, 1, 0, 0);
		__LIB_1__::func_746(1244, 1, -1);
	}
	if (iParam0 >= __LIB_22__::func_163(170))
	{
		__LIB_24__::func_188(170, 1);
		__LIB_25__::func_731(170, 1, 0, 0);
		__LIB_1__::func_746(1244, 1, -1);
	}
	if (iParam0 >= __LIB_22__::func_163(171))
	{
		__LIB_24__::func_188(171, 1);
		__LIB_25__::func_731(171, 1, 0, 0);
		__LIB_1__::func_746(1244, 1, -1);
	}
}

void func_631(int iParam0, bool bParam1, bool bParam2)//Position - 0x4E6B1B
{
	if (bParam1)
	{
		if (!__LIB_25__::func_693(iParam0, 0))
		{
			__LIB_24__::func_189(iParam0, 1);
		}
		if (bParam2)
		{
			if (__LIB_23__::func_339(iParam0) == 0)
			{
				__LIB_12__::func_529(28, __LIB_22__::func_166(iParam0), "", "", "", __LIB_22__::func_165(iParam0), 0, 0, 0, -1, 0);
				__LIB_22__::func_164(iParam0, 1);
			}
		}
	}
	else if (__LIB_25__::func_693(iParam0, 0))
	{
		__LIB_24__::func_189(iParam0, 0);
		__LIB_22__::func_164(iParam0, 0);
	}
}

void func_632()//Position - 0x4E6EC6
{
	int iVar0;
	iVar0 = 1;
	while (iVar0 <= 19)
	{
		if (__LIB_25__::func_693(iVar0, 0))
		{
			__LIB_22__::func_164(iVar0, 1);
		}
		else
		{
			__LIB_22__::func_164(iVar0, 0);
		}
		iVar0++;
	}
}

var func_633(int iParam0)//Position - 0x24831E
{
	var uVar0;
	var uVar1;
	char[] cVar2[8];
	__LIB_25__::func_714(iParam0, &uVar0, &uVar1, &cVar2, -1, -1);
	return uVar0;
}

int func_634(int* iParam0)//Position - 0x28CCB0
{
	int* iVar0;
	iVar0 = *iParam0;
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (!__LIB_18__::func_484(&iVar0))
		{
			Global_2667225.f_2666 = *iParam0;
			return 1;
		}
	}
	*iParam0 = 0;
	return 0;
}

void func_635(int iParam0)//Position - 0x290D2D
{
	int iVar0;
	float fVar1;
	int iVar2;
	iVar0 = PLAYER::PLAYER_ID();
	if (Global_2689235[iVar0 /*453*/].f_269.f_14 != -1)
	{
		if (__LIB_2__::func_867(Global_2689235[iVar0 /*453*/].f_269.f_14))
		{
			if (!__LIB_25__::func_710(PLAYER::PLAYER_ID(), Global_2689235[iVar0 /*453*/].f_269.f_14, 0, 0))
			{
				Global_2689235[iVar0 /*453*/].f_269.f_14 = -1;
			}
		}
		else
		{
			Global_2689235[iVar0 /*453*/].f_269.f_14 = -1;
		}
	}
	if (Global_2689235[iVar0 /*453*/].f_269.f_16 != -1)
	{
		if (__LIB_2__::func_867(Global_2689235[iVar0 /*453*/].f_269.f_16))
		{
			if (!__LIB_25__::func_710(PLAYER::PLAYER_ID(), Global_2689235[iVar0 /*453*/].f_269.f_16, 0, 1))
			{
				Global_2689235[iVar0 /*453*/].f_269.f_16 = -1;
			}
		}
		else
		{
			Global_2689235[iVar0 /*453*/].f_269.f_16 = -1;
		}
	}
	if (Global_2689235[iVar0 /*453*/].f_269.f_15 != -1)
	{
		if (!__LIB_25__::func_710(PLAYER::PLAYER_ID(), Global_2689235[iVar0 /*453*/].f_269.f_15, 0, 0))
		{
			Global_2689235[iVar0 /*453*/].f_269.f_15 = -1;
		}
	}
	if (__LIB_2__::func_867(iParam0))
	{
		if (__LIB_25__::func_710(PLAYER::PLAYER_ID(), iParam0, 0, 0))
		{
			if (!Global_2689235[iVar0 /*453*/].f_269.f_14 == iParam0)
			{
				Global_2689235[iVar0 /*453*/].f_269.f_14 = iParam0;
			}
		}
		if (__LIB_25__::func_710(PLAYER::PLAYER_ID(), iParam0, 0, 1))
		{
			if (!Global_2689235[iVar0 /*453*/].f_269.f_16 == iParam0)
			{
				Global_2689235[iVar0 /*453*/].f_269.f_16 = iParam0;
			}
		}
		iVar2 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iParam0) / 32f));
		if (__LIB_3__::func_204(PLAYER::PLAYER_ID(), iParam0, 1120403456))
		{
			MISC::SET_BIT(&(Global_2689235[iVar0 /*453*/].f_269.f_17[iVar2]), (iParam0 - iVar2 * 32));
		}
		else
		{
			MISC::CLEAR_BIT(&(Global_2689235[iVar0 /*453*/].f_269.f_17[iVar2]), (iParam0 - iVar2 * 32));
		}
		fVar1 = SYSTEM::VDIST(__LIB_1__::func_776(iParam0), __LIB_1__::func_694(PLAYER::PLAYER_ID()));
		if (iParam0 == Global_2689235[iVar0 /*453*/].f_269.f_20)
		{
			Global_2667225.f_2875 = fVar1;
		}
		else if (fVar1 < Global_2667225.f_2875 || Global_2667225.f_2875 <= 0f)
		{
			Global_2667225.f_2875 = fVar1;
			Global_2689235[iVar0 /*453*/].f_269.f_20 = iParam0;
		}
	}
	else if (iParam0 == Global_2689235[iVar0 /*453*/].f_269.f_20)
	{
		Global_2689235[iVar0 /*453*/].f_269.f_20 = -1;
		Global_2667225.f_2875 = -1f;
	}
	if (__LIB_25__::func_710(PLAYER::PLAYER_ID(), iParam0, 0, 0))
	{
		if (!Global_2689235[iVar0 /*453*/].f_269.f_15 == iParam0)
		{
			Global_2689235[iVar0 /*453*/].f_269.f_15 = iParam0;
		}
	}
}

int func_636(bool bParam0, int iParam1)//Position - 0x3300D1
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	var uVar8;
	var uVar9;
	var uVar10;
	bVar0 = false;
	bVar1 = false;
	if (iParam1 == 1)
	{
		bVar1 = true;
	}
	else if (iParam1 == 2)
	{
		bVar0 = true;
	}
	if (Global_1835493 != 0)
	{
		if (!bVar0 && iParam1 != 4)
		{
			if (bParam0)
			{
			}
			return 1;
		}
		else if (bVar0)
		{
			iVar2 = Global_1835493;
			MISC::CLEAR_BIT(&iVar2, 4);
			if (iVar2 > 0)
			{
				if (bParam0)
				{
				}
				return 1;
			}
		}
		else if (iParam1 == 4)
		{
			iVar3 = Global_1835493;
			MISC::CLEAR_BIT(&iVar3, 6);
			if (iVar3 > 0)
			{
				if (bParam0)
				{
				}
				return 1;
			}
		}
		else if (iParam1 == 6)
		{
			uVar4 = Global_1835493;
			MISC::CLEAR_BIT(&uVar4, 7);
			if (bParam0)
			{
			}
			return 1;
		}
		else if (iParam1 == 8)
		{
			uVar5 = Global_1835493;
			MISC::CLEAR_BIT(&uVar5, 8);
			if (bParam0)
			{
			}
			return 1;
		}
		else if (iParam1 == 9)
		{
			uVar6 = Global_1835493;
			MISC::CLEAR_BIT(&uVar6, 9);
			if (bParam0)
			{
			}
			return 1;
		}
		else if (iParam1 == 10)
		{
			uVar7 = Global_1835493;
			MISC::CLEAR_BIT(&uVar7, 10);
			if (bParam0)
			{
			}
			return 1;
		}
		else if (iParam1 == 11)
		{
			uVar8 = Global_1835493;
			MISC::CLEAR_BIT(&uVar8, 11);
			if (bParam0)
			{
			}
			return 1;
		}
		else if (iParam1 == 12)
		{
			uVar9 = Global_1835493;
			MISC::CLEAR_BIT(&uVar9, 12);
			if (bParam0)
			{
			}
			return 1;
		}
		else if (iParam1 == 13)
		{
			uVar10 = Global_1835493;
			MISC::CLEAR_BIT(&uVar10, 14);
			if (bParam0)
			{
			}
			return 1;
		}
	}
	if (((((((((((__LIB_6__::func_279(PLAYER::PLAYER_ID()) && !__LIB_7__::func_955()) && !(iParam1 == 4 && __LIB_10__::func_415(PLAYER::PLAYER_ID()))) && !(iParam1 == 3 && __LIB_6__::func_716())) && !(iParam1 == 6 && __LIB_6__::func_715())) && !(iParam1 == 7 && __LIB_6__::func_715())) && !(iParam1 == 8 && __LIB_6__::func_285())) && !(iParam1 == 9 && __LIB_6__::func_284())) && !(iParam1 == 10 && __LIB_5__::func_437())) && !(iParam1 == 11 && __LIB_7__::func_657())) && !(iParam1 == 12 && __LIB_6__::func_607())) && !(iParam1 == 13 && __LIB_7__::func_657()))
	{
		return 1;
	}
	if (__LIB_1__::func_101(PLAYER::PLAYER_PED_ID()))
	{
		return 1;
	}
	if (__LIB_10__::func_167(PLAYER::PLAYER_ID(), 21))
	{
		return 1;
	}
	if (__LIB_10__::func_167(PLAYER::PLAYER_ID(), 25))
	{
		return 1;
	}
	if (__LIB_1__::func_675() && NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		if (bParam0)
		{
		}
		return 1;
	}
	if (__LIB_1__::func_717())
	{
		return 1;
	}
	if (bVar1)
	{
		if (Global_1853348[PLAYER::PLAYER_ID() /*834*/] == 9 || Global_4718592.f_2 == 2)
		{
			if (bParam0)
			{
			}
			return 1;
		}
		if (Global_262145.f_15867 /* Tunable: EXEC_DISABLE_OFFICE_ENTRY */)
		{
			if (bParam0)
			{
			}
			return 1;
		}
		if (__LIB_0__::func_970(PLAYER::PLAYER_ID()) || __LIB_0__::func_971(PLAYER::PLAYER_ID()))
		{
			if (bParam0)
			{
			}
			return 1;
		}
	}
	return 0;
}

int func_637(int iParam0)//Position - 0x415861
{
	var uVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		return 0;
	}
	if (__LIB_4__::func_813())
	{
		return 0;
	}
	iVar1 = __LIB_6__::func_345(PLAYER::PLAYER_ID(), &uVar0, &uVar0);
	if (iVar1 == 0)
	{
		return 0;
	}
	if (__LIB_5__::func_931(iVar1))
	{
		return 0;
	}
	bVar2 = __LIB_6__::func_346(iVar1, 1);
	if (!bVar2)
	{
		if (!__LIB_2__::func_159(1))
		{
			if (iParam0 == __LIB_5__::func_680(3))
			{
				return 1;
			}
		}
		else
		{
			bVar3 = __LIB_0__::func_797();
			if (__LIB_3__::func_195(1))
			{
				if (iParam0 == __LIB_5__::func_680(5))
				{
					return 1;
				}
			}
			else
			{
				bVar4 = !BitTest(__LIB_5__::func_382(iVar1), 31);
				if (bVar4)
				{
					iVar5 = __LIB_5__::func_679(iVar1);
					if (__LIB_4__::func_809(bVar3, iVar5))
					{
						bVar4 = false;
					}
					else if (__LIB_6__::func_17(bVar3, __LIB_4__::func_808(bVar3)))
					{
						bVar4 = false;
					}
				}
				if (bVar4)
				{
					if (!__LIB_6__::func_16())
					{
						bVar4 = false;
					}
				}
				if (bVar4)
				{
					iVar6 = __LIB_4__::func_808(bVar3);
					if (iVar6 != 0)
					{
						if (__LIB_4__::func_814(iVar6) == iParam0)
						{
							return 1;
						}
					}
				}
				if (iParam0 == __LIB_5__::func_680(3))
				{
					return 1;
				}
			}
		}
	}
	else
	{
		if (__LIB_5__::func_677())
		{
			return 0;
		}
		iVar7 = __LIB_6__::func_15(iVar1);
		if (iVar7 == iParam0)
		{
			if ((__LIB_4__::func_803(iParam0) && __LIB_2__::func_159(1)) && __LIB_5__::func_675(__LIB_0__::func_797()))
			{
				if (!__LIB_4__::func_809(__LIB_0__::func_797(), __LIB_5__::func_679(iVar1)))
				{
					return 1;
				}
			}
			else
			{
				return 1;
			}
		}
	}
	return 0;
}

struct<16> func_638(bool bParam0)//Position - 0x416B48
{
	struct<16> Var0;
	bool bVar1;
	if (Global_1892703[bParam0 /*599*/].f_10.f_121 != Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_121)
	{
		StringCopy(&Var0, __LIB_3__::func_217(bParam0, 0), 64);
		return Var0;
	}
	if (((__LIB_1__::func_906(bParam0, 28) || __LIB_1__::func_906(PLAYER::PLAYER_ID(), 28)) || __LIB_2__::func_110(bParam0)) && !__LIB_2__::func_109(bParam0))
	{
		StringCopy(&Var0, __LIB_3__::func_217(bParam0, 0), 64);
		return Var0;
	}
	bVar1 = __LIB_2__::func_39(bParam0);
	if (bVar1 != PLAYER::PLAYER_ID())
	{
		if ((__LIB_1__::func_906(bVar1, 28) || __LIB_2__::func_110(bVar1)) && !__LIB_2__::func_109(bVar1))
		{
			StringCopy(&Var0, __LIB_3__::func_217(bParam0, 0), 64);
			return Var0;
		}
		if (!__LIB_0__::func_53() && !NETWORK::NETWORK_CHECK_USER_CONTENT_PRIVILEGES(0, -1, true))
		{
			StringCopy(&Var0, __LIB_3__::func_217(bParam0, 0), 64);
			return Var0;
		}
	}
	if (bVar1 != __LIB_0__::func_162())
	{
		return Global_1892703[bVar1 /*599*/].f_10.f_105;
	}
	StringCopy(&Var0, "", 64);
	return Var0;
}

void func_639()//Position - 0x486A05
{
	if (!__LIB_2__::func_443())
	{
		__LIB_25__::func_719();
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(&(Global_2715699.f_6909)))
	{
		__LIB_25__::func_719();
		return;
	}
	if (__LIB_2__::func_107(&(Global_2715699.f_6909)))
	{
		return;
	}
	__LIB_13__::func_719();
	__LIB_25__::func_674(&(Global_2715699.f_6909), 0);
	Global_1574975 = 1;
}

void func_640(var uParam0)//Position - 0x48CC4F
{
	int iVar0;
	bool bVar1;
	struct<13> Var2;
	if (NETWORK::NETWORK_TEXT_CHAT_IS_TYPING() || BitTest(uParam0->f_47, 19))
	{
		return;
	}
	if (__LIB_10__::func_207())
	{
		if (uParam0->f_47.f_1464 == 0 || uParam0->f_47.f_1464 == 1)
		{
			if (__LIB_2__::func_40(PLAYER::PLAYER_ID(), 0))
			{
				if (CAM::IS_SCREEN_FADED_IN())
				{
					if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, __LIB_10__::func_236(231)))
					{
						if (!BitTest(uParam0->f_47, 10))
						{
							HUD::SET_BIGMAP_ACTIVE(true, false);
							HUD::DISPLAY_PLAYER_NAME_TAGS_ON_BLIPS(true);
							__LIB_10__::func_255(1);
							MISC::SET_BIT(&(uParam0->f_47), 10);
						}
						else
						{
							HUD::SET_BIGMAP_ACTIVE(false, false);
							HUD::DISPLAY_PLAYER_NAME_TAGS_ON_BLIPS(false);
							__LIB_10__::func_255(0);
							MISC::CLEAR_BIT(&(uParam0->f_47), 10);
						}
					}
				}
			}
		}
	}
	if (uParam0->f_47.f_1008 > 8)
	{
		if (uParam0->f_47.f_23 != 3)
		{
			if (uParam0->f_47.f_1464 == 0 || uParam0->f_47.f_1464 == 1)
			{
				if (CAM::IS_SCREEN_FADED_IN())
				{
					if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, __LIB_10__::func_236(230)) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, __LIB_10__::func_236(230)))
					{
						if (!BitTest(uParam0->f_47, 12))
						{
							HUD::THEFEED_FLUSH_QUEUE();
							MISC::SET_BIT(&(uParam0->f_47), 12);
							MISC::SET_BIT(&(uParam0->f_47), 1);
						}
						else
						{
							MISC::CLEAR_BIT(&(uParam0->f_47), 12);
							MISC::SET_BIT(&(uParam0->f_47), 1);
						}
					}
				}
			}
		}
	}
	else if (BitTest(uParam0->f_47, 12))
	{
		HUD::THEFEED_FLUSH_QUEUE();
		MISC::CLEAR_BIT(&(uParam0->f_47), 12);
		MISC::SET_BIT(&(uParam0->f_47), 1);
	}
	if (uParam0->f_47.f_1464 == 0)
	{
		if (__LIB_2__::func_40(PLAYER::PLAYER_ID(), 0))
		{
			if (CAM::IS_SCREEN_FADED_IN())
			{
				if (__LIB_10__::func_207())
				{
					if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, __LIB_10__::func_236(227)))
					{
						if (__LIB_10__::func_254())
						{
							if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), uParam0->f_47.f_1451) >= 0)
							{
								switch (__LIB_10__::func_388())
								{
									case 1:
										__LIB_10__::func_854(2);
										uParam0->f_47.f_1451 = NETWORK::GET_NETWORK_TIME();
										MISC::SET_BIT(&(uParam0->f_47), 1);
										MISC::SET_BIT(&(uParam0->f_47), 6);
										break;
									case 2:
										if (__LIB_10__::func_234(&(uParam0->f_47)))
										{
											__LIB_10__::func_854(1);
											uParam0->f_47.f_1451 = NETWORK::GET_NETWORK_TIME();
											MISC::SET_BIT(&(uParam0->f_47), 1);
											MISC::SET_BIT(&(uParam0->f_47), 6);
										}
										break;
								}
								MISC::SET_BIT(&(Global_2621446.f_69.f_5), 6);
							}
						}
					}
					if ((PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, __LIB_10__::func_236(230)) && PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, __LIB_10__::func_236(231))) || (PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, __LIB_10__::func_236(231)) && PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, __LIB_10__::func_236(230))))
					{
						__LIB_10__::func_253(1);
					}
				}
			}
		}
		if (__LIB_10__::func_388() != 2)
		{
			if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, __LIB_10__::func_236(226)) && uParam0->f_47.f_23 != 3)
			{
				iVar0 = __LIB_13__::func_576(&(uParam0->f_47));
				if (ENTITY::DOES_ENTITY_EXIST(iVar0))
				{
					if (PED::IS_PED_A_PLAYER(iVar0))
					{
						bVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar0);
						if (__LIB_1__::func_693(bVar1, 0, 1))
						{
							AUDIO::PLAY_SOUND_FRONTEND(-1, "SELECT" /* GXT: Filter List */, "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
							Var2 = { __LIB_1__::func_696(bVar1) };
							NETWORK::NETWORK_SHOW_PROFILE_UI(&Var2);
						}
					}
				}
			}
		}
	}
	if (__LIB_5__::func_839(&(uParam0->f_1)) != 3 && __LIB_10__::func_388() != 2)
	{
		if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, __LIB_10__::func_236(234)))
		{
			if (!BitTest(uParam0->f_1, 18))
			{
				if (!__LIB_10__::func_916())
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_LEFT_RIGHT", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
					__LIB_11__::func_779(&(uParam0->f_47));
				}
			}
			else
			{
				__LIB_10__::func_252(1);
				__LIB_11__::func_778(-1);
				MISC::SET_BIT(&(uParam0->f_47), 1);
			}
		}
		if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, __LIB_10__::func_236(235)))
		{
			if (!BitTest(uParam0->f_1, 18))
			{
				if (!__LIB_10__::func_916())
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_LEFT_RIGHT", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
					__LIB_11__::func_834(&(uParam0->f_47));
				}
			}
			else
			{
				__LIB_10__::func_252(1);
				__LIB_11__::func_778(1);
				MISC::SET_BIT(&(uParam0->f_47), 1);
			}
		}
		if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, __LIB_10__::func_236(227)))
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "SELECT" /* GXT: Filter List */, "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
			if (!BitTest(uParam0->f_1, 18))
			{
				MISC::SET_BIT(&(uParam0->f_1), 18);
			}
			else
			{
				MISC::CLEAR_BIT(&(uParam0->f_1), 18);
			}
			MISC::SET_BIT(&(uParam0->f_47), 1);
		}
		if (__LIB_10__::func_388() != 2 && !BitTest(uParam0->f_47, 13))
		{
			switch (uParam0->f_47.f_1464)
			{
				case 0:
					if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, __LIB_10__::func_236(222)))
					{
						if (!BitTest(uParam0->f_1, 18))
						{
							AUDIO::PLAY_SOUND_FRONTEND(-1, "SELECT" /* GXT: Filter List */, "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
							__LIB_10__::func_389(&(uParam0->f_47), 1);
						}
						else
						{
							AUDIO::PLAY_SOUND_FRONTEND(-1, "SELECT" /* GXT: Filter List */, "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
							if (!BitTest(Global_2621446.f_1, 3))
							{
								__LIB_10__::func_252(1);
								__LIB_10__::func_921();
							}
							else
							{
								__LIB_10__::func_252(0);
							}
						}
						MISC::SET_BIT(&(uParam0->f_47), 1);
					}
					break;
				case 1:
					if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, __LIB_10__::func_236(222)))
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "SELECT" /* GXT: Filter List */, "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
						MISC::SET_BIT(&(uParam0->f_47), 1);
						__LIB_10__::func_389(&(uParam0->f_47), 2);
					}
					else if ((((((((((PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, __LIB_6__::func_207(1)) || PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, __LIB_6__::func_207(0))) || PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, __LIB_10__::func_236(233))) || PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, __LIB_10__::func_236(226))) || PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 199 /*INPUT_FRONTEND_PAUSE*/)) || PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, __LIB_10__::func_236(227))) || PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, __LIB_6__::func_207(1))) || PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, __LIB_10__::func_236(224))) || PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, __LIB_6__::func_207(0))) || PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, __LIB_10__::func_236(222))) || PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, __LIB_10__::func_236(232)))
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "SELECT" /* GXT: Filter List */, "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
						MISC::SET_BIT(&(uParam0->f_47), 1);
						__LIB_10__::func_389(&(uParam0->f_47), 0);
					}
					break;
				case 2:
					if ((((((((((PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, __LIB_6__::func_207(1)) || PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, __LIB_6__::func_207(0))) || PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, __LIB_10__::func_236(233))) || PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, __LIB_10__::func_236(226))) || PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 199 /*INPUT_FRONTEND_PAUSE*/)) || PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, __LIB_10__::func_236(227))) || PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, __LIB_6__::func_207(1))) || PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, __LIB_10__::func_236(224))) || PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, __LIB_6__::func_207(0))) || PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, __LIB_10__::func_236(222))) || PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, __LIB_10__::func_236(232)))
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "SELECT" /* GXT: Filter List */, "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
						MISC::SET_BIT(&(uParam0->f_47), 1);
						__LIB_10__::func_389(&(uParam0->f_47), 0);
					}
					break;
				}
			}
	}
}

void func_641(int iParam0)//Position - 0x4E2DA0
{
	if (iParam0 >= __LIB_22__::func_163(61))
	{
		__LIB_24__::func_188(61, 1);
		__LIB_25__::func_731(61, 1, 0, 0);
	}
	if (iParam0 >= __LIB_22__::func_163(62))
	{
		__LIB_24__::func_188(62, 1);
		__LIB_25__::func_731(62, 1, 0, 0);
	}
	if (iParam0 >= __LIB_22__::func_163(63))
	{
		__LIB_24__::func_188(63, 1);
		__LIB_25__::func_731(63, 1, 0, 0);
	}
	if (iParam0 >= __LIB_22__::func_163(64))
	{
		__LIB_24__::func_188(64, 1);
		__LIB_25__::func_731(64, 1, 0, 0);
	}
	if (iParam0 >= __LIB_22__::func_163(65))
	{
		__LIB_24__::func_188(65, 1);
		__LIB_25__::func_731(65, 1, 0, 0);
	}
	if (iParam0 >= __LIB_22__::func_163(66))
	{
		__LIB_24__::func_188(66, 1);
		__LIB_25__::func_731(66, 1, 0, 0);
	}
	if (iParam0 >= __LIB_22__::func_163(67))
	{
		__LIB_24__::func_188(67, 1);
		__LIB_25__::func_731(67, 1, 0, 0);
	}
	if (iParam0 >= __LIB_22__::func_163(68))
	{
		__LIB_24__::func_188(68, 1);
		__LIB_25__::func_731(68, 1, 0, 0);
	}
	if (iParam0 >= __LIB_22__::func_163(69))
	{
		__LIB_24__::func_188(69, 1);
		__LIB_25__::func_731(69, 1, 0, 0);
	}
	if (iParam0 >= __LIB_22__::func_163(70))
	{
		__LIB_24__::func_188(70, 1);
		__LIB_25__::func_731(70, 1, 0, 0);
	}
	if (iParam0 >= __LIB_22__::func_163(71))
	{
		__LIB_24__::func_188(71, 1);
		__LIB_25__::func_731(71, 1, 0, 0);
	}
	if (iParam0 >= __LIB_22__::func_163(72))
	{
		__LIB_24__::func_188(72, 1);
		__LIB_25__::func_731(72, 1, 0, 0);
	}
	if (iParam0 >= __LIB_22__::func_163(73))
	{
		__LIB_24__::func_188(73, 1);
		__LIB_25__::func_731(73, 1, 0, 0);
	}
	if (iParam0 >= __LIB_22__::func_163(74))
	{
		__LIB_24__::func_188(74, 1);
		__LIB_25__::func_731(74, 1, 0, 0);
	}
	if (iParam0 >= __LIB_22__::func_163(75))
	{
		__LIB_24__::func_188(75, 1);
		__LIB_25__::func_731(75, 1, 0, 0);
	}
	if (iParam0 >= __LIB_22__::func_163(76))
	{
		__LIB_24__::func_188(76, 1);
		__LIB_25__::func_731(76, 1, 0, 0);
	}
	if (iParam0 >= __LIB_22__::func_163(77))
	{
		__LIB_24__::func_188(77, 1);
		__LIB_25__::func_731(77, 1, 0, 0);
	}
	if (iParam0 >= __LIB_22__::func_163(78))
	{
		__LIB_24__::func_188(78, 1);
		__LIB_25__::func_731(78, 1, 0, 0);
	}
	if (iParam0 >= __LIB_22__::func_163(79))
	{
		__LIB_24__::func_188(79, 1);
		__LIB_25__::func_731(79, 1, 0, 0);
	}
	if (iParam0 >= __LIB_22__::func_163(80))
	{
		__LIB_24__::func_188(80, 1);
		__LIB_25__::func_731(80, 1, 0, 0);
	}
	if (iParam0 >= __LIB_22__::func_163(81))
	{
		__LIB_24__::func_188(81, 1);
		__LIB_25__::func_731(81, 1, 0, 0);
	}
	if (iParam0 >= __LIB_22__::func_163(82))
	{
		__LIB_24__::func_188(82, 1);
		__LIB_25__::func_731(82, 1, 0, 0);
	}
	if (iParam0 >= __LIB_22__::func_163(83))
	{
		__LIB_24__::func_188(83, 1);
		__LIB_25__::func_731(83, 1, 0, 0);
	}
	if (iParam0 >= __LIB_22__::func_163(84))
	{
		__LIB_24__::func_188(84, 1);
		__LIB_25__::func_731(84, 1, 0, 0);
	}
	if (iParam0 >= __LIB_22__::func_163(85))
	{
		__LIB_24__::func_188(85, 1);
		__LIB_25__::func_731(85, 1, 0, 0);
	}
	if (iParam0 >= __LIB_22__::func_163(86))
	{
		__LIB_24__::func_188(86, 1);
		__LIB_25__::func_731(86, 1, 0, 0);
	}
	if (iParam0 >= __LIB_22__::func_163(87))
	{
		__LIB_24__::func_188(87, 1);
		__LIB_25__::func_731(87, 1, 0, 0);
	}
	if (iParam0 >= __LIB_22__::func_163(88))
	{
		__LIB_24__::func_188(88, 1);
		__LIB_25__::func_731(88, 1, 0, 0);
	}
	if (iParam0 >= __LIB_22__::func_163(89))
	{
		__LIB_24__::func_188(89, 1);
		__LIB_25__::func_731(89, 1, 0, 0);
	}
	if (iParam0 >= __LIB_22__::func_163(90))
	{
		__LIB_24__::func_188(90, 1);
		__LIB_25__::func_731(90, 1, 0, 0);
	}
}

void func_642(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0x4EA328
{
	if (bParam2)
	{
		if (!__LIB_24__::func_191(iParam0, iParam1, -1))
		{
			__LIB_24__::func_317(iParam0, iParam1, 1);
		}
		if (bParam3)
		{
			if (__LIB_24__::func_316(iParam0, iParam1) == 0)
			{
				__LIB_12__::func_529(16, __LIB_19__::func_171(iParam0, 0), __LIB_22__::func_168(iParam0, 0), __LIB_20__::func_382(iParam1), __LIB_20__::func_381(iParam1), -1, 0, 0, 0, -1, 0);
				__LIB_23__::func_501(iParam0, iParam1, 1);
			}
		}
		if (bParam4)
		{
			__LIB_25__::func_732(iParam0, iParam1, 1);
		}
	}
	else if (__LIB_24__::func_191(iParam0, iParam1, -1))
	{
		__LIB_24__::func_317(iParam0, iParam1, 0);
	}
}

int func_643(int iParam0, var* uParam1)//Position - 0x5683D
{
	bool bVar0;
	bool bVar1;
	if (NETWORK::NETWORK_IS_HANDLE_VALID(uParam1, 13) && NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(uParam1))
	{
		bVar0 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(uParam1);
	}
	else
	{
		bVar0 = __LIB_0__::func_162();
	}
	bVar1 = false;
	if (bVar0 == PLAYER::PLAYER_ID())
	{
		if (__LIB_25__::func_693(15, 0))
		{
			bVar1 = true;
		}
		else if (__LIB_3__::func_195(1))
		{
			bVar1 = true;
		}
	}
	else
	{
		bVar1 = true;
	}
	if (((((((!(ENTITY::DOES_ENTITY_EXIST(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0, false)) || !NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0)) || !NETWORK::NETWORK_CHECK_USER_CONTENT_PRIVILEGES(0, -1, true)) || !((NETWORK::NETWORK_IS_HANDLE_VALID(uParam1, 13) && NETWORK::NETWORK_CLAN_SERVICE_IS_VALID()) && NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(uParam1))) || bVar0 == __LIB_0__::func_162()) || !__LIB_1__::func_693(bVar0, 0, 0)) || !bVar1) || __LIB_6__::func_709(iParam0))
	{
		return 0;
	}
	return 1;
}

void func_644(var uParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, bool bParam12, int iParam13)//Position - 0x11B050
{
	if (iParam8 == iParam8)
	{
		iParam8 = iParam8;
	}
	if (iParam11 == iParam11)
	{
		iParam11 = iParam11;
	}
	__LIB_18__::func_662(uParam0, uParam1, bParam2, bParam3, bParam4, bParam5, bParam6, iParam7, iParam9, iParam10, bParam12, iParam13);
}

int func_645(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x140F38
{
	if (Global_78319)
	{
		if (((iParam0 != 17 && iParam0 != 3) && iParam0 != 23) && iParam0 != 1)
		{
			return 0;
		}
		if (!BitTest(Global_4541229, 14))
		{
			if (iParam0 == 17)
			{
				MISC::SET_BIT(&Global_4541229, 14);
				MISC::SET_BIT(&Global_4541229, 16);
			}
			if (iParam0 == 3)
			{
				MISC::SET_BIT(&Global_4541229, 14);
				MISC::SET_BIT(&Global_4541229, 15);
			}
			if (iParam0 == 23)
			{
				MISC::SET_BIT(&Global_4541229, 14);
				MISC::SET_BIT(&Global_4541229, 27);
			}
			if (iParam0 == 1)
			{
				MISC::SET_BIT(&Global_4541229, 14);
				MISC::SET_BIT(&Global_4541229, 29);
			}
		}
		if (Global_8143[iParam0 /*15*/].f_9 == 0)
		{
			__LIB_16__::func_288();
		}
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Global_8143[iParam0 /*15*/].f_9) > 0)
		{
			MISC::CLEAR_BIT(&Global_4541229, 14);
			MISC::CLEAR_BIT(&Global_4541229, 16);
			MISC::CLEAR_BIT(&Global_4541229, 15);
			MISC::CLEAR_BIT(&Global_4541229, 27);
			MISC::CLEAR_BIT(&Global_4541229, 29);
			return 1;
		}
		else
		{
			return 0;
		}
	}
	__LIB_15__::func_120();
	if (Global_20266.f_1 == 9)
	{
		return 0;
	}
	if (iParam2 == 0)
	{
		if (__LIB_0__::func_77(0) == 1)
		{
			return 0;
		}
	}
	if (Global_20232 == 1)
	{
		return 0;
	}
	if (Global_20266.f_1 == 7)
	{
		return 0;
	}
	if (iParam1 == 1)
	{
	}
	if (!SCRIPT::IS_THREAD_ACTIVE(Global_20263))
	{
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand")) == 0)
		{
			if (Global_20266.f_1 < 4)
			{
				__LIB_10__::func_567("cellphone_flashhand");
				if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand")) == 0)
				{
					Global_20263 = SYSTEM::START_NEW_SCRIPT("cellphone_flashhand", 1424);
				}
				SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("cellphone_flashhand");
			}
		}
	}
	while (!Global_20248)
	{
		SYSTEM::WAIT(0);
	}
	__LIB_16__::func_288();
	__LIB_16__::func_287();
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Global_8143[iParam0 /*15*/].f_9) == 0)
	{
		Global_8742 = 0;
		Global_20266.f_1 = 7;
		__LIB_10__::func_567(&(Global_8143[iParam0 /*15*/].f_5));
		if (bParam3)
		{
			if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Global_8143[iParam0 /*15*/].f_9) == 0)
			{
				Global_20264 = SYSTEM::START_NEW_SCRIPT(&(Global_8143[iParam0 /*15*/].f_5), 4000);
			}
		}
		else if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Global_8143[iParam0 /*15*/].f_9) == 0)
		{
			Global_20264 = SYSTEM::START_NEW_SCRIPT(&(Global_8143[iParam0 /*15*/].f_5), 2552);
		}
		SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED(&(Global_8143[iParam0 /*15*/].f_5));
		return 1;
	}
	return 1;
}

int func_646(struct<3> Param0)//Position - 0x1F3041
{
	var uVar0;
	if (Global_2815059.f_924 && __LIB_7__::func_651(Param0, &uVar0))
	{
		return 1;
	}
	return 0;
}

int func_647(int iParam0, bool bParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x4459D6
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 29)
	{
		if (__LIB_2__::func_771(iVar0, iParam3) > 0 && __LIB_3__::func_529(__LIB_2__::func_771(iVar0, iParam3)))
		{
			if (iParam2 != 0)
			{
				if (__LIB_25__::func_728(iParam2, iParam0, iVar0, bParam1, iParam3, 0))
				{
					return 1;
				}
			}
			else if (__LIB_25__::func_728(Global_1585857[iParam0 /*142*/].f_66, iParam0, iVar0, bParam1, iParam3, 0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	if (__LIB_2__::func_771(0, iParam3) > 0)
	{
		return 0;
	}
	if (bParam4)
	{
		return 0;
	}
	return 1;
}

void func_648()//Position - 0x4D819D
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar1 = 95;
		iVar0 = 0;
		while (iVar0 <= iVar1)
		{
			iVar2 = __LIB_6__::func_155(iVar0, 0);
			if (__LIB_6__::func_154(iVar2))
			{
				if ((__LIB_7__::func_478(iVar2, -1, 0) && !__LIB_6__::func_163(iVar2)) || __LIB_6__::func_697(iVar2))
				{
					if (__LIB_6__::func_152(iVar2) && __LIB_8__::func_42(joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), iVar2, -1))
					{
						iVar2 = __LIB_6__::func_151(iVar2);
					}
					if (__LIB_0__::func_137(__LIB_6__::func_164(iVar2), -1) || __LIB_13__::func_254(WEAPON::GET_WEAPONTYPE_GROUP(iVar2), iVar2))
					{
						if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
						{
							WEAPON::REMOVE_WEAPON_FROM_PED(PLAYER::PLAYER_PED_ID(), iVar2);
							Global_2725434 = 1;
						}
					}
					else if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
					{
						WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), iVar2, 0, false, false);
						__LIB_10__::func_562(iVar2);
						__LIB_25__::func_727(iVar2);
					}
				}
			}
			iVar0++;
		}
	}
}

void func_649(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x4DD2C0
{
	int iVar0;
	if (WEAPON::IS_WEAPON_VALID(iParam0))
	{
		if (((__LIB_7__::func_478(iParam0, -1, iParam3) || __LIB_12__::func_312(iParam0, -1)) || __LIB_1__::func_342(__LIB_6__::func_150(iParam0), -1)) || (iParam0 == joaat("WEAPON_TACTICALRIFLE") && __LIB_20__::func_384()))
		{
			if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), iParam0, false))
			{
				if (bParam4)
				{
					iVar0 = WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), iParam0);
					if (iVar0 < __LIB_22__::func_443(iParam0, -1))
					{
						*iParam2 = 1;
						if (*iParam1 < __LIB_22__::func_443(iParam0, -1))
						{
							*iParam1 = __LIB_22__::func_443(iParam0, -1);
						}
					}
				}
			}
			else if (bParam4)
			{
				WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), iParam0, 0, false, true);
				*iParam2 = 1;
				if (*iParam1 < __LIB_22__::func_443(iParam0, -1))
				{
					*iParam1 = __LIB_22__::func_443(iParam0, -1);
				}
			}
			else
			{
				WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), iParam0, 1, false, true);
			}
			__LIB_10__::func_562(iParam0);
			__LIB_25__::func_727(iParam0);
		}
		else
		{
			if (!__LIB_7__::func_478(iParam0, -1, iParam3))
			{
			}
			if (!__LIB_12__::func_312(iParam0, -1))
			{
			}
			if (!__LIB_1__::func_342(__LIB_6__::func_150(iParam0), -1))
			{
			}
		}
	}
}

void func_650()//Position - 0x4F732E
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (((((((__LIB_3__::func_673(PLAYER::PLAYER_ID()) && __LIB_4__::func_931()) || (__LIB_8__::func_842(PLAYER::PLAYER_ID()) && __LIB_4__::func_930())) || (__LIB_5__::func_339(PLAYER::PLAYER_ID()) && __LIB_4__::func_929())) || (__LIB_7__::func_274() && __LIB_3__::func_928(PLAYER::PLAYER_ID()))) || (__LIB_6__::func_63(PLAYER::PLAYER_ID()) && __LIB_4__::func_928())) || (__LIB_1__::func_595(PLAYER::PLAYER_ID()) && __LIB_4__::func_927())) || __LIB_6__::func_87(PLAYER::PLAYER_ID()))
	{
		if (Global_2725434)
		{
			iVar1 = 95;
			iVar0 = 0;
			while (iVar0 <= iVar1)
			{
				iVar2 = __LIB_6__::func_155(iVar0, 0);
				if (__LIB_6__::func_154(iVar2))
				{
					if (!__LIB_6__::func_159(iVar2))
					{
						if (__LIB_6__::func_152(iVar2) && __LIB_8__::func_42(joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), iVar2, -1))
						{
							iVar2 = __LIB_6__::func_151(iVar2);
						}
						if (__LIB_7__::func_478(iVar2, -1, 0) || (iVar2 == joaat("WEAPON_MOLOTOV") && WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), iVar2) > 0))
						{
							if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
							{
								WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), iVar2, 0, false, false);
								__LIB_10__::func_562(iVar2);
								__LIB_25__::func_727(iVar2);
							}
						}
					}
				}
				iVar0++;
			}
			Global_2725434 = 0;
		}
	}
}

int func_651(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9, int iParam10, bool bParam11)//Position - 0x84E3
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	int iVar9;
	bool bVar10;
	bool bVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	bool bVar20;
	if (iParam6 < 3)
	{
		iParam6 = 3;
	}
	if (!bParam7)
	{
		iParam6 = __LIB_18__::func_676(iParam6);
	}
	if (iParam0 == 251)
	{
		iVar12 = 251;
		iParam0 = 0;
	}
	else if ((iParam0 == 202 || iParam0 == 203) || iParam0 == 204)
	{
		iVar12 = iParam0;
		iParam0 = 0;
	}
	else if (iParam0 == 7)
	{
		bVar4 = true;
		iParam0 = 0;
	}
	else if (iParam0 == 4)
	{
		bVar5 = true;
		iParam0 = 0;
	}
	else if (iParam0 == 10)
	{
		if (iParam6 < 12)
		{
			iParam6 = 12;
		}
		bVar6 = true;
		iParam0 = 0;
	}
	else if (iParam0 == 9)
	{
		bVar8 = true;
		iParam0 = 0;
	}
	else if (iParam0 == 165)
	{
		bVar11 = true;
		iParam0 = 0;
	}
	else if (iParam0 == 156)
	{
		bVar10 = true;
		iParam0 = 0;
	}
	else if (iParam0 == 129)
	{
		bVar7 = true;
		if (iParam6 < 12)
		{
			iParam6 = 12;
		}
		iParam0 = 0;
	}
	else if (iParam0 == 0)
	{
		iVar9 = 0;
		bVar8 = true;
	}
	else if (iParam0 == 184)
	{
		bParam8 = true;
		bParam9 = true;
		iParam0 = 2;
	}
	else if (iParam0 == 161)
	{
		iParam10 = 1;
		bParam9 = true;
		iParam0 = 2;
	}
	if (bParam11)
	{
		bVar7 = true;
	}
	if (((bParam8 && bParam9) && iParam0 == 2) && !Global_262145.f_10081 /* Tunable: 1123838161 */)
	{
		iVar13 = __LIB_18__::func_991();
		iVar14 = __LIB_6__::func_825(__LIB_18__::func_200(iVar13), 0);
		if (iVar14 != -1)
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_2714762.f_33)) && MISC::ARE_STRINGS_EQUAL(&(Global_794709.f_4[iVar14 /*88*/]), &(Global_2714762.f_33)))
			{
				iVar14++;
				if (iVar14 > __LIB_18__::func_169())
				{
					iVar14 = 0;
				}
			}
			*uParam2 = 1;
			*uParam1 = iVar14;
			return 1;
		}
		else
		{
			bParam9 = false;
		}
	}
	if ((iParam10 && bParam9) && iParam0 == 2)
	{
		iVar15 = __LIB_18__::func_430(13);
		iVar16 = __LIB_18__::func_168(iVar15, 13);
		iVar17 = __LIB_6__::func_825(iVar16, 0);
		if (iVar17 != -1)
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_2714762.f_33)) && MISC::ARE_STRINGS_EQUAL(&(Global_794709.f_4[iVar17 /*88*/]), &(Global_2714762.f_33)))
			{
				iVar17++;
				if (iVar17 > Global_262145.f_6210[13])
				{
					iVar17 = 0;
				}
			}
			*uParam2 = 1;
			*uParam1 = iVar17;
			return 1;
		}
		else
		{
			bParam9 = false;
		}
	}
	iVar18 = __LIB_25__::func_723(iParam0, iParam4, 1, iParam5, iParam6, bVar4, bVar5, bVar6, bVar8, bVar7, bParam8, bVar10, bVar11, bParam9, iVar12, bParam11);
	iVar19 = __LIB_25__::func_723(iParam0, iParam4, 0, iParam5, iParam6, bVar4, bVar5, bVar6, bVar8, bVar7, bParam8, bVar10, bVar11, bParam9, iVar12, bParam11);
	NETWORK::NETWORK_SEED_RANDOM_NUMBER_GENERATOR((NETWORK::GET_CLOUD_TIME_AS_INT() / Global_262145.f_4694 /* Tunable: NJVS_SYNC_WINDOW */));
	if (iVar18 == 0)
	{
		if (bVar4 == 1)
		{
			bVar4 = false;
		}
		if (bVar5 == 1)
		{
			bVar5 = false;
			iVar9 = 1;
		}
		if (iVar12 != 0)
		{
			iVar12 = 0;
			iVar9 = 1;
		}
		if (bVar6 == 1)
		{
			bVar6 = false;
			iVar9 = 1;
		}
		if (bVar7 == 1)
		{
			bVar6 = false;
			iVar9 = 1;
		}
		if (bVar10 == 1)
		{
			bVar10 = false;
			iVar9 = 1;
		}
		if (bVar11 == 1)
		{
			bVar11 = false;
			iVar9 = 1;
		}
		if (bVar8 == 1)
		{
			bVar8 = false;
			iVar9 = 1;
			bVar20 = true;
		}
		if (iVar9 == 1)
		{
			iVar9 = 0;
			iVar3 = NETWORK::NETWORK_GET_RANDOM_INT_RANGED(0, 4);
			if (iVar3 == 0)
			{
				bVar6 = true;
			}
			else if (iVar3 == 1)
			{
				bVar5 = true;
			}
			else if (iVar3 == 2)
			{
				bVar4 = true;
			}
			else if (bVar20)
			{
				bVar6 = true;
			}
			else
			{
				bVar8 = true;
			}
		}
		iVar18 = __LIB_25__::func_723(iParam0, iParam4, 1, iParam5, iParam6, bVar4, bVar5, bVar6, bVar8, bVar7, bParam8, bVar10, bVar11, bParam9, iVar12, bParam11);
	}
	*uParam1 = iParam3;
	while (*uParam1 == iParam3 && iVar0 < 8)
	{
		iVar3 = NETWORK::NETWORK_GET_RANDOM_INT_RANGED(0, 100);
		if (bParam7)
		{
			bVar2 = true;
		}
		else if (iVar3 < 66)
		{
			bVar2 = true;
		}
		else
		{
			bVar2 = false;
		}
		if (bParam8)
		{
			bVar2 = true;
		}
		if ((iParam0 != 2 && iParam0 != 1) || iVar19 == 0)
		{
			bVar2 = true;
		}
		if (bVar2)
		{
			iVar1 = NETWORK::NETWORK_GET_RANDOM_INT_RANGED(0, iVar18);
			*uParam1 = __LIB_25__::func_733(*uParam1, iParam0, iVar1, iParam4, 1, iParam5, iParam6, bVar4, bVar5, bVar6, bVar8, bVar7, bParam8, bVar10, bVar11, 0, iVar12, bParam11);
			*uParam2 = 1;
		}
		else
		{
			iVar1 = NETWORK::NETWORK_GET_RANDOM_INT_RANGED(0, iVar19);
			*uParam1 = __LIB_25__::func_733(*uParam1, iParam0, iVar1, iParam4, 0, iParam5, iParam6, bVar4, bVar5, bVar6, bVar8, bVar7, bParam8, bVar10, bVar11, 0, iVar12, bParam11);
			*uParam2 = 0;
		}
		iVar0++;
	}
	if (*uParam1 == iParam3)
	{
		return 0;
	}
	return 1;
}

void func_652(var uParam0, int iParam1)//Position - 0x158E0E
{
	int iVar0;
	int iVar1;
	if (!BitTest(uParam0->f_182, 2) && uParam0->f_181 != -2)
	{
		if (!BitTest(Global_4718592.f_12, 27))
		{
			if (uParam0->f_181 != -1)
			{
				iVar0 = (*uParam0)[uParam0->f_181 /*12*/];
				if (__LIB_6__::func_353(iVar0))
				{
					WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), iVar0, true);
					Global_1574580 = iVar0;
				}
				else
				{
					__LIB_23__::func_707(iParam1);
				}
			}
			else
			{
				iVar1 = __LIB_2__::func_85(PLAYER::PLAYER_PED_ID());
				if (iVar1 != 0)
				{
					WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), iVar1, true);
					Global_1574580 = iVar1;
				}
			}
		}
	}
	else
	{
		WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), false);
	}
}

void func_653(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, bool bParam6)//Position - 0x15E9E6
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	iVar0 = __LIB_23__::func_651(iParam0, iParam5, -1);
	iVar1 = __LIB_23__::func_682(iParam0, iParam5, -1);
	if (bParam2)
	{
		if (!bParam3 && !bParam4)
		{
			__LIB_10__::func_562(iParam0);
		}
		if (!__LIB_0__::func_157(0) && !bParam4)
		{
			__LIB_25__::func_727(iParam0);
		}
		if (!__LIB_0__::func_157(0))
		{
			__LIB_18__::func_498(iParam0, 1, -1);
		}
		if (!WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), iParam0, false))
		{
			if (iVar0 != 0 && iVar1 != 0)
			{
				iVar2 = 0;
				while (iVar2 <= 6)
				{
					if (WEAPON::IS_PED_WEAPON_COMPONENT_ACTIVE(PLAYER::PLAYER_PED_ID(), iParam0, __LIB_21__::func_864(iParam0, iVar2)))
					{
						WEAPON::REMOVE_WEAPON_COMPONENT_FROM_PED(PLAYER::PLAYER_PED_ID(), iParam0, __LIB_21__::func_864(iParam0, iVar2));
					}
					iVar2++;
				}
				WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), iParam0, 0, false, bParam6);
				WEAPON::GIVE_WEAPON_COMPONENT_TO_PED(PLAYER::PLAYER_PED_ID(), iParam0, iVar1);
				WEAPON::ADD_PED_AMMO_BY_TYPE(PLAYER::PLAYER_PED_ID(), iVar0, iParam1);
			}
			else
			{
				WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), iParam0, iParam1, false, bParam6);
			}
		}
		else
		{
			WEAPON::GET_MAX_AMMO(PLAYER::PLAYER_PED_ID(), iParam0, &iVar3);
			if (iParam1 > iVar3)
			{
				iParam1 = iVar3;
			}
			if (iVar0 != 0 && iVar1 != 0)
			{
				iVar4 = 0;
				while (iVar4 <= 6)
				{
					if (WEAPON::IS_PED_WEAPON_COMPONENT_ACTIVE(PLAYER::PLAYER_PED_ID(), iParam0, __LIB_23__::func_682(iParam0, iVar4, -1)))
					{
						WEAPON::REMOVE_WEAPON_COMPONENT_FROM_PED(PLAYER::PLAYER_PED_ID(), iParam0, __LIB_23__::func_682(iParam0, iVar4, -1));
					}
					iVar4++;
				}
				WEAPON::GIVE_WEAPON_COMPONENT_TO_PED(PLAYER::PLAYER_PED_ID(), iParam0, iVar1);
				WEAPON::ADD_PED_AMMO_BY_TYPE(PLAYER::PLAYER_PED_ID(), iVar0, iParam1);
			}
			else if (WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), iParam0) < iParam1)
			{
				WEAPON::SET_PED_AMMO(PLAYER::PLAYER_PED_ID(), iParam0, iParam1, false);
			}
		}
		if (!BitTest(Global_4718592.f_13, 13))
		{
			Global_1574580 = iParam0;
		}
		if (BitTest(Global_4718592.f_37, 9))
		{
			if (__LIB_21__::func_863(iParam0) != 0)
			{
				WEAPON::GIVE_WEAPON_COMPONENT_TO_PED(PLAYER::PLAYER_PED_ID(), iParam0, __LIB_21__::func_863(iParam0));
				if (!__LIB_0__::func_157(0))
				{
					__LIB_23__::func_504(__LIB_21__::func_863(iParam0), iParam0, 1);
				}
			}
		}
	}
	else if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), iParam0, false))
	{
		if (iVar0 != 0 && iVar1 != 0)
		{
			iVar5 = 0;
			while (iVar5 <= 6)
			{
				if (WEAPON::IS_PED_WEAPON_COMPONENT_ACTIVE(PLAYER::PLAYER_PED_ID(), iParam0, __LIB_21__::func_864(iParam0, iVar5)))
				{
					WEAPON::REMOVE_WEAPON_COMPONENT_FROM_PED(PLAYER::PLAYER_PED_ID(), iParam0, __LIB_21__::func_864(iParam0, iVar5));
				}
				iVar5++;
			}
			WEAPON::GIVE_WEAPON_COMPONENT_TO_PED(PLAYER::PLAYER_PED_ID(), iParam0, iVar1);
			WEAPON::ADD_PED_AMMO_BY_TYPE(PLAYER::PLAYER_PED_ID(), iVar0, iParam1);
		}
		else if (WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), iParam0) < iParam1)
		{
			WEAPON::SET_PED_AMMO(PLAYER::PLAYER_PED_ID(), iParam0, iParam1, false);
		}
	}
	if (iParam1 == -1)
	{
		if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), iParam0, false))
		{
			if (iVar0 != 0 && iVar1 != 0)
			{
				iVar6 = 0;
				while (iVar6 <= 6)
				{
					if (WEAPON::IS_PED_WEAPON_COMPONENT_ACTIVE(PLAYER::PLAYER_PED_ID(), iParam0, __LIB_21__::func_864(iParam0, iVar6)))
					{
						WEAPON::REMOVE_WEAPON_COMPONENT_FROM_PED(PLAYER::PLAYER_PED_ID(), iParam0, __LIB_21__::func_864(iParam0, iVar6));
					}
					iVar6++;
				}
				WEAPON::GIVE_WEAPON_COMPONENT_TO_PED(PLAYER::PLAYER_PED_ID(), iParam0, iVar1);
				WEAPON::ADD_PED_AMMO_BY_TYPE(PLAYER::PLAYER_PED_ID(), iVar0, iParam1);
				WEAPON::SET_PED_INFINITE_AMMO(PLAYER::PLAYER_PED_ID(), true, iParam0);
			}
			else
			{
				WEAPON::SET_PED_INFINITE_AMMO(PLAYER::PLAYER_PED_ID(), true, iParam0);
			}
		}
	}
}

var func_654(int iParam0, var uParam1, var uParam2)//Position - 0x8945
{
	if (!__LIB_0__::func_864(&Global_1965581))
	{
		__LIB_0__::func_795(&Global_1965581, 0, 0);
	}
	else if (__LIB_2__::func_815(Global_1965581, 25, 0))
	{
		__LIB_0__::func_794(&Global_1965581);
		__LIB_0__::func_795(&Global_1965581, 0, 0);
		if (Global_1965585 > 2f)
		{
			Global_1965587 = -0.03f;
		}
		else if (Global_1965585 < 1f)
		{
			Global_1965587 = 0.03f;
		}
		if (Global_1965589 > 100)
		{
			Global_1965590 = -3;
		}
		else if (Global_1965589 <= -25)
		{
			Global_1965590 = 3;
		}
		Global_1965589 = (Global_1965589 + Global_1965590);
		Global_1965585 = (Global_1965585 + Global_1965587);
	}
	if (!__LIB_0__::func_864(&Global_1965583))
	{
		__LIB_0__::func_795(&Global_1965583, 0, 0);
	}
	else if (__LIB_2__::func_815(Global_1965583, 70, 0))
	{
		__LIB_0__::func_794(&Global_1965583);
		__LIB_0__::func_795(&Global_1965583, 0, 0);
		if (Global_1965588 > 0.75f)
		{
			Global_1965586 = -0.075f;
		}
		else if (Global_1965588 < -0.75f)
		{
			Global_1965586 = 0.075f;
		}
		Global_1965588 = (Global_1965588 + Global_1965586);
	}
	if (iParam0 == 20)
	{
		uParam1->f_2 = (uParam1->f_2 + Global_1965588);
		uParam2->f_2 = (uParam2->f_2 + Global_1965588);
	}
	return Global_1965585;
}

int func_655(int iParam0, int iParam1)//Position - 0x9165
{
	if (iParam0 == -1)
	{
		iParam0 = __LIB_24__::func_13(iParam1, iParam0, 4);
	}
	switch (iParam0)
	{
		case 0:
			return 15;
		case 1:
			return 21;
		case 2:
			return 24;
		case 3:
			return 18;
		default:
	}
	return 28;
}

void func_656()//Position - 0x101D4
{
	MISC::CLEAR_BIT(&Global_1965531, 18);
	MISC::CLEAR_BIT(&Global_1965531, 1);
	MISC::CLEAR_BIT(&Global_1965531, 22);
	MISC::CLEAR_BIT(&Global_1965531, 29);
	MISC::CLEAR_BIT(&Global_1965531, 30);
	MISC::CLEAR_BIT(&Global_1965531, 31);
	MISC::CLEAR_BIT(&Global_1965532, 10);
	MISC::CLEAR_BIT(&Global_1965532, 11);
	__LIB_0__::func_794(&Global_1965610);
}

void func_657()//Position - 0x10A5E
{
	if (__LIB_0__::func_864(&Global_1965620) && __LIB_2__::func_815(Global_1965620, 3000, 0))
	{
		if (Global_1965591 > 1f)
		{
			STATS::PLAYSTATS_ARENA_WARS_SPECTATOR(Global_4718592.f_116524, MISC::GET_HASH_KEY("SPECTATOR_MODE"), 0, SYSTEM::ROUND((Global_1965591 * 1000f)), Global_1965593);
			Global_1965591 = 0f;
			Global_1965593 = 0;
			__LIB_0__::func_794(&Global_1965620);
		}
		else
		{
			__LIB_0__::func_794(&Global_1965620);
		}
	}
	if ((__LIB_0__::func_864(&Global_1965618) && __LIB_2__::func_815(Global_1965618, 3000, 0)) && BitTest(Global_1965624, 0))
	{
		if (Global_1965592 > 1f)
		{
			MISC::CLEAR_BIT(&Global_1965624, 0);
			STATS::PLAYSTATS_ARENA_WARS_SPECTATOR(Global_4718592.f_116524, MISC::GET_HASH_KEY("SPECTATOR_DRONE"), 0, SYSTEM::ROUND((Global_1965592 * 1000f)), Global_1965594);
			Global_1965592 = 0f;
			Global_1965594 = 0;
			__LIB_0__::func_794(&Global_1965618);
		}
		else
		{
			__LIB_0__::func_794(&Global_1965618);
		}
	}
	if ((__LIB_0__::func_864(&Global_1965618) && __LIB_2__::func_815(Global_1965618, 3000, 0)) && BitTest(Global_1965624, 1))
	{
		if (Global_1965592 > 1f)
		{
			MISC::CLEAR_BIT(&Global_1965624, 1);
			STATS::PLAYSTATS_ARENA_WARS_SPECTATOR(Global_4718592.f_116524, MISC::GET_HASH_KEY("SPECTATOR_TURRET"), 0, SYSTEM::ROUND((Global_1965592 * 1000f)), Global_1965594);
			Global_1965592 = 0f;
			Global_1965594 = 0;
			__LIB_0__::func_794(&Global_1965618);
		}
		else
		{
			__LIB_0__::func_794(&Global_1965618);
		}
	}
	if ((__LIB_0__::func_864(&Global_1965618) && __LIB_2__::func_815(Global_1965618, 3000, 0)) && BitTest(Global_1965624, 2))
	{
		if (Global_1965592 > 1f)
		{
			STATS::PLAYSTATS_ARENA_WARS_SPECTATOR(Global_4718592.f_116524, MISC::GET_HASH_KEY("SPECTATOR_DRONE"), 1, SYSTEM::ROUND((Global_1965592 * 1000f)), Global_1965594);
			Global_1965592 = 0f;
			Global_1965594 = 0;
			MISC::CLEAR_BIT(&Global_1965624, 2);
			__LIB_0__::func_794(&Global_1965618);
		}
		else
		{
			__LIB_0__::func_794(&Global_1965618);
		}
	}
	if ((__LIB_0__::func_864(&Global_1965618) && __LIB_2__::func_815(Global_1965618, 3000, 0)) && BitTest(Global_1965624, 3))
	{
		if (Global_1965592 > 1f)
		{
			STATS::PLAYSTATS_ARENA_WARS_SPECTATOR(Global_4718592.f_116524, MISC::GET_HASH_KEY("SPECTATOR_RCCAR"), 1, SYSTEM::ROUND((Global_1965592 * 1000f)), Global_1965594);
			Global_1965592 = 0f;
			Global_1965594 = 0;
			MISC::CLEAR_BIT(&Global_1965624, 3);
			__LIB_0__::func_794(&Global_1965618);
		}
		else
		{
			__LIB_0__::func_794(&Global_1965618);
		}
	}
	if ((__LIB_0__::func_864(&Global_1965618) && __LIB_2__::func_815(Global_1965618, 3000, 0)) && BitTest(Global_1965624, 4))
	{
		if (Global_1965592 > 1f)
		{
			STATS::PLAYSTATS_ARENA_WARS_SPECTATOR(Global_4718592.f_116524, MISC::GET_HASH_KEY("SPECTATOR_TRAPCAM"), 1, SYSTEM::ROUND((Global_1965592 * 1000f)), Global_1965594);
			Global_1965592 = 0f;
			Global_1965594 = 0;
			MISC::CLEAR_BIT(&Global_1965624, 4);
			__LIB_0__::func_794(&Global_1965618);
		}
		else
		{
			__LIB_0__::func_794(&Global_1965618);
		}
	}
	if ((__LIB_0__::func_864(&Global_1965618) && __LIB_2__::func_815(Global_1965618, 3000, 0)) && BitTest(Global_1965624, 5))
	{
		if (Global_1965592 > 1f)
		{
			STATS::PLAYSTATS_ARENA_WARS_SPECTATOR(Global_4718592.f_116524, MISC::GET_HASH_KEY("SPECTATOR_TURRET"), 1, SYSTEM::ROUND((Global_1965592 * 1000f)), Global_1965594);
			Global_1965592 = 0f;
			Global_1965594 = 0;
			MISC::CLEAR_BIT(&Global_1965624, 5);
			__LIB_0__::func_794(&Global_1965618);
		}
		else
		{
			__LIB_0__::func_794(&Global_1965618);
		}
	}
}

void func_658()//Position - 0x111E7
{
	if (!__LIB_0__::func_864(&Global_1966046))
	{
		return;
	}
	if (!__LIB_2__::func_815(Global_1966046, Global_1966045, 0))
	{
		return;
	}
	CAM::DO_SCREEN_FADE_IN(150);
	__LIB_0__::func_794(&Global_1966046);
	Global_1966045 = -1;
}

void func_659()//Position - 0x11227
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 199)
	{
		if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uLocal_1129[iVar0]))
		{
			GRAPHICS::SET_PARTICLE_FX_LOOPED_ALPHA(uLocal_1129[iVar0], 0f);
			GRAPHICS::REMOVE_PARTICLE_FX(uLocal_1129[iVar0], false);
		}
		iVar0++;
	}
}

bool func_660(var uParam0)//Position - 0x112E6
{
	return BitTest(uParam0->f_823, 23);
}

int func_661(var uParam0)//Position - 0x1A7A0
{
	if (uParam0->f_572 == 18)
	{
		return 1;
	}
	if (uParam0->f_572 == 19)
	{
		return 1;
	}
	return BitTest(uParam0->f_824, 15);
}

int func_662()//Position - 0x1AA5A
{
	int iVar0;
	iVar0 = 30000;
	if (Global_4718592.f_176799 != -1)
	{
		iVar0 = Global_4718592.f_176799 * 1000;
	}
	return iVar0;
}

int func_663(var uParam0, int iParam1)//Position - 0x1AAF8
{
	int iVar0;
	iVar0 = 0;
	if ((uParam0[iParam1 /*303*/])->f_9 != -1)
	{
		iVar0 = ((uParam0[(uParam0[iParam1 /*303*/])->f_9 /*303*/])->f_270 + (uParam0[(uParam0[iParam1 /*303*/])->f_9 /*303*/])->f_271);
	}
	return (((uParam0[iParam1 /*303*/])->f_271 + (uParam0[iParam1 /*303*/])->f_270) + iVar0);
}

int func_664(int iParam0)//Position - 0x1ACBF
{
	if (((((((((((((iParam0 == 1 || iParam0 == 3) || iParam0 == 5) || iParam0 == 7) || iParam0 == 19) || iParam0 == 9) || iParam0 == 8) || iParam0 == 11) || iParam0 == 13) || Global_4718592.f_107227 == 21) || Global_4718592.f_107227 == 23) || Global_4718592.f_107227 == 25) || Global_4718592.f_107227 == 26) || iLocal_21 == 1)
	{
		return 1;
	}
	return 0;
}

bool func_665(var uParam0)//Position - 0x1AD7E
{
	return BitTest(uParam0->f_824, 7);
}

int func_666(int iParam0)//Position - 0x1AD8D
{
	if ((iParam0 == 8 || iParam0 == 9) || iLocal_21 == 1)
	{
		return 1;
	}
	return 0;
}

int func_667(var uParam0)//Position - 0x1AE23
{
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam0->f_836))
	{
		return 0;
	}
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam0->f_831))
	{
		return 0;
	}
	return 1;
}

int func_668(var uParam0, int iParam1)//Position - 0x1AE7A
{
	var uVar0;
	if (iParam1 >= 0 && iParam1 < 32)
	{
		if (uParam0->f_883[iParam1 /*42*/].f_1 != __LIB_0__::func_162())
		{
			uVar0 = uParam0->f_883[iParam1 /*42*/].f_1;
		}
	}
	return uVar0;
}

int func_669(var uParam0, struct<3> Param1)//Position - 0x1B17F
{
	struct<3> Var0;
	struct<3> Var1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	Var0 = { (Param1.f_0 + 0.5f), (Param1.f_1 + 0.5f), (Param1.f_2 + 0.5f) };
	Var1 = { (Param1.f_0 - 0.5f), (Param1.f_1 - 0.5f), (Param1.f_2 - 0.5f) };
	if (__LIB_0__::func_864(&(uParam0->f_792)))
	{
		if (__LIB_0__::func_937(&(uParam0->f_792), 5000, 0))
		{
			return 1;
		}
	}
	bVar2 = false;
	bVar3 = true;
	bVar4 = false;
	bVar5 = false;
	bVar6 = false;
	if (MISC::IS_AREA_OCCUPIED(Var0, Var1, bVar2, bVar3, bVar4, bVar5, bVar6, 0, false))
	{
		MISC::CLEAR_AREA(Param1, 1f, false, false, false, false);
		if (!__LIB_0__::func_864(&(uParam0->f_792)))
		{
			__LIB_0__::func_795(&(uParam0->f_792), 0, 0);
		}
		return 0;
	}
	return 1;
}

int func_670(var uParam0)//Position - 0x1B23B
{
	return (uParam0[NETWORK::PARTICIPANT_ID_TO_INT() /*303*/])->f_4;
}

void func_671(var uParam0)//Position - 0x1C67C
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = NETWORK::NET_TO_ENT(uParam0->f_2);
	ENTITY::SET_ENTITY_PROOFS(iVar0, true, true, true, true, false, false, false, false);
	ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iVar0, false);
	iVar1 = NETWORK::NET_TO_VEH(uParam0->f_2);
	VEHICLE::SET_VEHICLE_ALLOW_HOMING_MISSLE_LOCKON(iVar1, false, false);
	VEHICLE::SET_VEHICLE_ALLOW_NO_PASSENGERS_LOCKON(iVar1, false);
	iVar2 = NETWORK::NET_TO_ENT(uParam0->f_3);
	ENTITY::SET_ENTITY_INVINCIBLE(iVar2, true);
	VEHICLE::SET_VEHICLE_ENGINE_ON(iVar1, true, true, false);
	VEHICLE::SET_HELI_TURBULENCE_SCALAR(iVar1, 0.3f);
	VEHICLE::SET_HELI_BLADES_FULL_SPEED(iVar1);
	PHYSICS::ACTIVATE_PHYSICS(iVar1);
	__LIB_18__::func_685(1);
}

bool func_672(var uParam0)//Position - 0x1CE28
{
	return BitTest(uParam0->f_824, 5);
}

bool func_673(var uParam0)//Position - 0x1CE78
{
	return BitTest(uParam0->f_727, 4);
}

bool func_674(var uParam0)//Position - 0x1CE87
{
	return BitTest(uParam0->f_727, 3);
}

bool func_675(var uParam0)//Position - 0x1CE96
{
	return BitTest(uParam0->f_727, 2);
}

bool func_676(var uParam0)//Position - 0x1CFB2
{
	return BitTest(uParam0->f_727, 1);
}

int func_677()//Position - 0x1CFC1
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (Global_262145.f_6281[iVar0] == 0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return 10;
}

int func_678(var uParam0, int iParam1)//Position - 0x1D094
{
	if (iParam1 < 0)
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iParam1)) && ((uParam0[iParam1 /*303*/])->f_4 <= 3 || (uParam0[iParam1 /*303*/])->f_4 == 11))
	{
		return 1;
	}
	return 0;
}

int func_679(int iParam0)//Position - 0x1D0DA
{
	if (iParam0 > 0)
	{
		return 1;
	}
	return 0;
}

bool func_680(var uParam0)//Position - 0x1D0ED
{
	return BitTest(uParam0->f_823, 18);
}

int func_681(int iParam0, int iParam1)//Position - 0x21063
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 6:
		case 7:
		case 18:
		case 19:
		case 12:
		case 13:
		case 22:
		case 23:
		case 20:
		case 21:
		case 24:
		case 25:
		case 26:
		case 27:
			switch (iParam1)
			{
				case 7:
					return joaat("MPPLY_VEHSUPER");
				case 6:
					return joaat("MPPLY_VEHSPORTS");
				case 3:
					return joaat("MPPLY_VEHEXEC");
				case 4:
					return joaat("MPPLY_VEHMUSCLE");
				case 5:
					return joaat("MPPLY_VEHCLASS");
				case 2:
					return joaat("MPPLY_VEHIMPORT");
				case 0:
					return joaat("MPPLY_VEHIARMO");
				case 9:
					return joaat("MPPLY_VEHIOFFRD");
				case 10:
					return joaat("MPPLY_VEHISWAG");
				case 11:
					return joaat("MPPLY_VEHISWAG");
				case 12:
					return joaat("MPPLY_VEHIVANS");
				case 8:
					return joaat("MPPLY_VEHIBIKES");
				case 13:
					return joaat("MPPLY_VEHICYC");
				default:
			}
			break;
		case 2:
		case 3:
			return joaat("MPPLY_VEHIBOAT");
		case 4:
		case 5:
			switch (iParam1)
			{
				case 0:
					return joaat("MPPLY_VEHIHELI");
				case 1:
					return joaat("MPPLY_VEHIPLN");
				case 2:
					return joaat("MPPLY_VEHIPLN");
				default:
			}
			break;
	}
	return joaat("MPPLY_VEHSUPER");
}

int func_682(var uParam0)//Position - 0x2124F
{
	if (__LIB_18__::func_689())
	{
		return (5500 + uParam0->f_2473);
	}
	return 3500;
}

bool func_683(var uParam0)//Position - 0x2126D
{
	return BitTest(uParam0->f_823, 4);
}

int func_684(int iParam0)//Position - 0x216DA
{
	switch (iParam0)
	{
		case 0:
			return 3;
		case 1:
			return 2;
		default:
	}
	return 0;
}

int func_685(bool bParam0)//Position - 0x3438A
{
	if (Global_4980736.f_63312[bParam0 /*183*/].f_39 != 0)
	{
		return 1;
	}
	return 0;
}

int func_686(bool bParam0)//Position - 0x34AF7
{
	if (!__LIB_13__::func_432())
	{
		if (Global_4980736.f_63312[bParam0 /*183*/].f_7 == joaat("prop_container_ld_pu") || Global_4980736.f_63312[bParam0 /*183*/].f_8 != -1)
		{
			return 1;
		}
	}
	return 0;
}

int func_687()//Position - 0x35919
{
	return joaat("emperor");
}

void func_688(var uParam0, int iParam1)//Position - 0x368B0
{
	uParam0->f_570 = iParam1;
}

int func_689(var uParam0)//Position - 0x369A5
{
	return uParam0->f_570;
}

void func_690(var uParam0, int iParam1)//Position - 0x36A19
{
	uParam0->f_825 = iParam1;
}

void func_691(var uParam0)//Position - 0x36AFC
{
	uParam0->f_730 = Global_4980736.f_69352;
}

float func_692()//Position - 0x36C9A
{
	if (Global_4718592.f_116982 == 1)
	{
		return 0f;
	}
	if (Global_4456449.f_21 == 0)
	{
		return 0.6f;
	}
	return 0.2f;
}

int func_693(var uParam0)//Position - 0x3701F
{
	if (uParam0->f_572 == 10)
	{
		return 1;
	}
	if (uParam0->f_572 == 11)
	{
		return 1;
	}
	return 0;
}

int func_694(var uParam0)//Position - 0x37044
{
	if (uParam0->f_571 == 1)
	{
		return 1;
	}
	return 0;
}

void func_695(var uParam0)//Position - 0x3705A
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		uParam0->f_652[iVar0] = __LIB_0__::func_162();
		uParam0->f_685[iVar0] = __LIB_0__::func_162();
		iVar0++;
	}
}

void func_696(var uParam0)//Position - 0x37BBF
{
	if (!BitTest(uParam0->f_823, 16))
	{
		if (__LIB_0__::func_864(&(uParam0->f_811)))
		{
			if (__LIB_0__::func_937(&(uParam0->f_811), 45000, 0))
			{
				MISC::SET_BIT(&(uParam0->f_823), 16);
			}
		}
	}
}

int func_697(var uParam0, int iParam1)//Position - 0x382B4
{
	var uVar0;
	if ((uParam0[iParam1 /*303*/])->f_9 == -1)
	{
		uVar0 = (uParam0[iParam1 /*303*/])->f_257;
	}
	else if ((uParam0[iParam1 /*303*/])->f_257 <= (uParam0[(uParam0[iParam1 /*303*/])->f_9 /*303*/])->f_257)
	{
		uVar0 = (uParam0[iParam1 /*303*/])->f_257;
	}
	else
	{
		uVar0 = (uParam0[(uParam0[iParam1 /*303*/])->f_9 /*303*/])->f_257;
	}
	return uVar0;
}

int func_698(float fParam0)//Position - 0x3831A
{
	int iVar0;
	iVar0 = SYSTEM::ROUND(fParam0);
	if (iVar0 > 100)
	{
		return 100;
	}
	return iVar0;
}

bool func_699(var uParam0, int iParam1)//Position - 0x38C90
{
	return BitTest((uParam0[iParam1 /*303*/])->f_229, 2);
}

int func_700(var uParam0, int iParam1, bool bParam2)//Position - 0x392FF
{
	int iVar0;
	if (iParam1 == -1)
	{
		iVar0 = (Global_4718592.f_170027 * 1000 - __LIB_1__::func_724(&((uParam0[NETWORK::PARTICIPANT_ID_TO_INT() /*303*/])->f_287), 0, 0));
	}
	else
	{
		iVar0 = (Global_4718592.f_170027 * 1000 - __LIB_1__::func_724(&((uParam0[iParam1 /*303*/])->f_287), 0, 0));
	}
	if (bParam2)
	{
		if (iVar0 < 0)
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_701(var uParam0, int iParam1)//Position - 0x39362
{
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return 0;
	}
	return ((uParam0[iParam1 /*303*/])->f_271 + (uParam0[iParam1 /*303*/])->f_270);
}

bool func_702()//Position - 0x39395
{
	return BitTest(Global_4718592.f_30, 3);
}

int func_703(var uParam0, int iParam1)//Position - 0x393BB
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if ((uParam0[iVar0 /*5*/])->f_1 == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_704(struct<3> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, int iParam8, bool bParam9)//Position - 0x3C506
{
	if (iParam8 > 2)
	{
		return;
	}
	if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Param0.f_2))
	{
		return;
	}
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Param0.f_2, "SET_PART_TO_DESTROYED");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam8);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bParam9);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

int func_705(float fParam0)//Position - 0x3C79A
{
	int iVar0;
	int iVar1;
	iVar0 = 650;
	fParam0 = (fParam0 - 350f);
	iVar1 = (100 - SYSTEM::ROUND(((fParam0 / IntToFloat(iVar0)) * 100f)));
	iVar1 = __LIB_0__::func_340(iVar1, 1, 100);
	return iVar1;
}

int func_706(int iParam0, bool bParam1)//Position - 0x3C85F
{
	int iVar0;
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && !__LIB_0__::func_793(iParam0))
	{
		iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
		switch (iVar0)
		{
			case joaat("formula"):
			case joaat("formula2"):
			case joaat("openwheel1"):
			case joaat("openwheel2"):
				if (bParam1 == 2 || bParam1 == 3)
				{
					return 1;
				}
				break;
			}
	}
	return 0;
}

void func_707(int iParam0)//Position - 0x3C8F3
{
	if (Local_66.f_0 != iParam0)
	{
		Local_66.f_0 = iParam0;
	}
}

void func_708(int iParam0)//Position - 0x3CAF5
{
	float fVar0;
	float fVar1;
	float fVar2;
	if (!__LIB_0__::func_793(iParam0))
	{
		if (Global_1659914 != -1)
		{
			fVar0 = Global_4718592.f_169008[Global_1659914];
			VEHICLE::SET_TYRE_WEAR_RATE(iParam0, 0, fVar0);
			VEHICLE::SET_TYRE_WEAR_RATE(iParam0, 1, fVar0);
			VEHICLE::SET_TYRE_WEAR_RATE(iParam0, 4, fVar0);
			VEHICLE::SET_TYRE_WEAR_RATE(iParam0, 5, fVar0);
			fVar1 = Global_4718592.f_169012[Global_1659914];
			VEHICLE::SET_TYRE_WEAR_RATE_SCALE(iParam0, 0, fVar1);
			VEHICLE::SET_TYRE_WEAR_RATE_SCALE(iParam0, 1, fVar1);
			VEHICLE::SET_TYRE_WEAR_RATE_SCALE(iParam0, 4, fVar1);
			VEHICLE::SET_TYRE_WEAR_RATE_SCALE(iParam0, 5, fVar1);
			fVar2 = Global_4718592.f_169016[Global_1659914];
			VEHICLE::SET_TYRE_MAXIMUM_GRIP_DIFFERENCE_DUE_TO_WEAR_RATE(iParam0, 0, fVar2);
			VEHICLE::SET_TYRE_MAXIMUM_GRIP_DIFFERENCE_DUE_TO_WEAR_RATE(iParam0, 1, fVar2);
			VEHICLE::SET_TYRE_MAXIMUM_GRIP_DIFFERENCE_DUE_TO_WEAR_RATE(iParam0, 4, fVar2);
			VEHICLE::SET_TYRE_MAXIMUM_GRIP_DIFFERENCE_DUE_TO_WEAR_RATE(iParam0, 5, fVar2);
		}
	}
}

var func_709(bool bParam0, bool bParam1)//Position - 0x6F618
{
	if (!bParam1)
	{
		return BitTest(Global_4718592.f_95507[bParam0 /*58*/].f_29, 5);
	}
	if (!__LIB_0__::func_86(Global_4718592.f_95507[bParam0 /*58*/].f_3))
	{
		return BitTest(Global_4718592.f_95507[bParam0 /*58*/].f_29, 6);
	}
	return BitTest(Global_4718592.f_95507[bParam0 /*58*/].f_29, 5);
}

bool func_710(bool bParam0, bool bParam1)//Position - 0x6F67E
{
	if (!bParam1)
	{
		return BitTest(Global_4718592.f_95507[bParam0 /*58*/].f_28, 7);
	}
	if (!__LIB_0__::func_86(Global_4718592.f_95507[bParam0 /*58*/].f_3))
	{
		return BitTest(Global_4718592.f_95507[bParam0 /*58*/].f_28, 8);
	}
	return BitTest(Global_4718592.f_95507[bParam0 /*58*/].f_28, 7);
}

bool func_711(bool bParam0, bool bParam1)//Position - 0x6F7E6
{
	if (!bParam1)
	{
		return BitTest(Global_4718592.f_95507[bParam0 /*58*/].f_28, 9);
	}
	if (!__LIB_0__::func_86(Global_4718592.f_95507[bParam0 /*58*/].f_3))
	{
		return BitTest(Global_4718592.f_95507[bParam0 /*58*/].f_28, 13);
	}
	return BitTest(Global_4718592.f_95507[bParam0 /*58*/].f_28, 9);
}

void func_712(bool bParam0)//Position - 0x6FAA1
{
	int iVar0;
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (VEHICLE::GET_HAS_RETRACTABLE_WHEELS(iVar0))
		{
			if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("blazer5"))
			{
				if (bParam0)
				{
					if (!VEHICLE::GET_IS_WHEELS_RETRACTED(iVar0))
					{
						Global_2667225.f_2890 = 1;
						Global_2667225.f_2891 = 0;
					}
				}
				else
				{
					Global_2667225.f_2891 = 1;
					Global_2667225.f_2890 = 0;
				}
			}
		}
	}
}

void func_713()//Position - 0x6FB09
{
	int iVar0;
	if (Global_2667225.f_490.f_5)
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			if (VEHICLE::GET_VEHICLE_HAS_PARACHUTE(iVar0))
			{
				if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("ruiner2"))
				{
					Global_2667225.f_2897 = 1;
				}
			}
			else if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("oppressor"))
			{
				Global_2667225.f_2897 = 1;
			}
		}
	}
}

int func_714()//Position - 0x6FB78
{
	if (BitTest(Global_1978994, 29))
	{
		return 0;
	}
	return 1;
}

bool func_715(int iParam0)//Position - 0x6FB8F
{
	if (Global_1836584)
	{
		if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("blazer5"))
		{
			return Global_2667225.f_490.f_4;
		}
	}
	return ENTITY::IS_ENTITY_IN_WATER(iParam0);
}

bool func_716(int iParam0, bool bParam1)//Position - 0x71546
{
	if (bParam1)
	{
		return Global_1659905;
	}
	return Global_1853348[iParam0 /*834*/].f_96;
}

int func_717(int iParam0)//Position - 0x7158C
{
	if (iParam0 != __LIB_0__::func_162())
	{
		return Global_1853348[iParam0 /*834*/].f_96.f_1;
	}
	return 0;
}

void func_718(var uParam0)//Position - 0x72AF7
{
	if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam0->f_5441))
	{
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_5441, false))
		{
			ENTITY::SET_ENTITY_HEALTH(uParam0->f_5441, 1000, 0);
			VEHICLE::SET_VEHICLE_ENGINE_HEALTH(uParam0->f_5441, 1000f);
			VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(uParam0->f_5441, 1000f);
			VEHICLE::SET_VEHICLE_FIXED(uParam0->f_5441);
			HUD::SET_ABILITY_BAR_VALUE(100f, 100f);
		}
	}
}

int func_719(int iParam0)//Position - 0x72F29
{
	switch (iParam0)
	{
		case joaat("technical"):
			return 1;
			break;
	}
	return 0;
}

int func_720()//Position - 0x72FF3
{
	int iVar0;
	int iVar1;
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			if (!VEHICLE::IS_VEHICLE_SEAT_FREE(iVar0, -1, false))
			{
				iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1, false);
				return iVar1 == PLAYER::PLAYER_PED_ID();
			}
		}
	}
	return 0;
}

int func_721(var uParam0)//Position - 0x7304D
{
	if (uParam0->f_582 == 1)
	{
		return 1;
	}
	return 0;
}

int func_722()//Position - 0x737B7
{
	if (BitTest(Global_4718592.f_18, 24) || __LIB_2__::func_649())
	{
		return 1;
	}
	return 0;
}

int func_723(int iParam0, int iParam1)//Position - 0xAAF1B
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iParam0))
		{
			if (NETWORK::NETWORK_GET_ENTITY_IS_LOCAL(iParam0))
			{
				if (!VEHICLE::IS_THIS_MODEL_A_TRAIN(ENTITY::GET_ENTITY_MODEL(iParam0)))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iParam0, false, true);
					*iParam1 = 1;
				}
			}
		}
		if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iParam0, false))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_724()//Position - 0xAB0BA
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 150, true);
	}
}

int func_725(var uParam0)//Position - 0xAB210
{
	if (uParam0->f_583 == 1)
	{
		return 1;
	}
	return 0;
}

void func_726(var uParam0, int iParam1)//Position - 0xAB4A6
{
	(uParam0[NETWORK::PARTICIPANT_ID_TO_INT() /*303*/])->f_218 = iParam1;
}

int func_727(int iParam0, int iParam1)//Position - 0xAB6DB
{
	if (__LIB_1__::func_606(iParam0, iParam1, -1))
	{
		return 0;
	}
	if (!ENTITY::IS_ENTITY_DEAD(iParam1, false))
	{
		if (PED::IS_PED_SITTING_IN_VEHICLE(iParam0, iParam1))
		{
			return 1;
		}
	}
	return 0;
}

bool func_728()//Position - 0xAB7CA
{
	return Global_1836592;
}

int func_729(var uParam0)//Position - 0xAB7D6
{
	return (uParam0[NETWORK::PARTICIPANT_ID_TO_INT() /*303*/])->f_218;
}

void func_730(int iParam0, var uParam1)//Position - 0xABDE2
{
	bool bVar0;
	if (!__LIB_0__::func_793(iParam0))
	{
		bVar0 = true;
		while (bVar0 <= 9)
		{
			if (BitTest(*uParam1, bVar0))
			{
				if (VEHICLE::DOES_EXTRA_EXIST(iParam0, bVar0))
				{
					VEHICLE::SET_VEHICLE_EXTRA(iParam0, bVar0, true);
				}
			}
			bVar0++;
		}
	}
}

void func_731(var uParam0)//Position - 0xABF45
{
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0) || (ENTITY::DOES_ENTITY_EXIST(*uParam0) && ENTITY::IS_ENTITY_DEAD(*uParam0, false)))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			*uParam0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), true);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		if (ENTITY::GET_ENTITY_MODEL(*uParam0) == joaat("ruiner2"))
		{
			if (__LIB_10__::func_365())
			{
				VEHICLE::VEHICLE_SET_PARACHUTE_MODEL_OVERRIDE(*uParam0, joaat("sr_prop_specraces_para_s_01"));
				VEHICLE::VEHICLE_SET_PARACHUTE_MODEL_TINT_INDEX(*uParam0, (PLAYER::PLAYER_ID() % 7));
			}
			else if (Global_1659912 < 8)
			{
				VEHICLE::VEHICLE_SET_PARACHUTE_MODEL_OVERRIDE(*uParam0, joaat("sr_prop_specraces_para_s_01"));
				VEHICLE::VEHICLE_SET_PARACHUTE_MODEL_TINT_INDEX(*uParam0, Global_1659912);
			}
		}
	}
}

void func_732(int iParam0)//Position - 0xABFE9
{
	if ((ENTITY::DOES_ENTITY_EXIST(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0, false)) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0))
	{
		if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("sanctus") || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("avarus"))
		{
			VEHICLE::SET_VEHICLE_DAMAGE_SCALE(iParam0, Global_262145.f_17321 /* Tunable: -1458062250 */);
		}
		else if (BitTest(Global_4718592.f_30, 27))
		{
			VEHICLE::SET_VEHICLE_DAMAGE_SCALE(iParam0, 1f);
		}
		else
		{
			VEHICLE::SET_VEHICLE_DAMAGE_SCALE(iParam0, Global_262145.f_17320 /* Tunable: 891045982 */);
		}
	}
}

void func_733(int iParam0)//Position - 0xAC06D
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
		{
			if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("hydra") || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("tula"))
			{
				VEHICLE::SET_VEHICLE_FLIGHT_NOZZLE_POSITION_IMMEDIATE(iParam0, 0f);
			}
		}
	}
}

void func_734(var uParam0)//Position - 0xAC189
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (iVar0 < *uParam0)
		{
			Global_2667225.f_45.f_202[iVar0 /*3*/] = { *(uParam0[iVar0 /*3*/]) };
		}
		else
		{
			Global_2667225.f_45.f_202[iVar0 /*3*/] = { 0f, 0f, 0f };
		}
		iVar0++;
	}
}

void func_735(var uParam0, var uParam1)//Position - 0xAC1D6
{
	if (HUD::DOES_BLIP_EXIST(uParam0->f_4))
	{
		HUD::REMOVE_BLIP(&(uParam0->f_4));
	}
	if (HUD::DOES_BLIP_EXIST(uParam1->f_4))
	{
		HUD::REMOVE_BLIP(&(uParam1->f_4));
	}
	GRAPHICS::DELETE_CHECKPOINT(uParam0->f_5);
}

void func_736(var uParam0, bool bParam1)//Position - 0xAC20C
{
	if (bParam1)
	{
		if (!BitTest((uParam0[NETWORK::PARTICIPANT_ID_TO_INT() /*303*/])->f_228, 21))
		{
			MISC::SET_BIT(&((uParam0[NETWORK::PARTICIPANT_ID_TO_INT() /*303*/])->f_228), 21);
			Global_1853348[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*834*/].f_810 = 1;
		}
	}
	else if (BitTest((uParam0[NETWORK::PARTICIPANT_ID_TO_INT() /*303*/])->f_228, 21))
	{
		MISC::CLEAR_BIT(&((uParam0[NETWORK::PARTICIPANT_ID_TO_INT() /*303*/])->f_228), 21);
		Global_1853348[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*834*/].f_810 = 0;
	}
}

char* func_737()//Position - 0xAC310
{
	return "GTAO_FM_Events_Knockout_Scene";
}

char* func_738()//Position - 0xAC31C
{
	return "DLC_GTAO_Explode_Last_Sounds";
}

int func_739(int iParam0)//Position - 0xAC5C8
{
	if (iParam0 != __LIB_0__::func_162())
	{
		if (Global_1853348[iParam0 /*834*/].f_810)
		{
			return 1;
		}
	}
	return 0;
}

int func_740(int iParam0, int iParam1)//Position - 0xAD441
{
	int iVar0;
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		iVar0 = 0;
		while (iVar0 < VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(iParam0))
		{
			if (VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, iVar0, false))
			{
				if (VEHICLE::IS_TURRET_SEAT(iParam0, iVar0))
				{
					*iParam1 = iVar0;
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_741(int iParam0, var uParam1)//Position - 0xADFD5
{
	int iVar0;
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		iVar0 = 0;
		while (iVar0 < VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(iParam0))
		{
			if (VEHICLE::IS_TURRET_SEAT(iParam0, iVar0))
			{
				*uParam1 = iVar0;
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_742(int iParam0)//Position - 0xAE11B
{
	if (iParam0 == joaat("technical3") || iParam0 == joaat("technical2"))
	{
		return 1;
	}
	return 0;
}

void func_743(int iParam0, var uParam1)//Position - 0xAE33B
{
	(uParam1[NETWORK::PARTICIPANT_ID_TO_INT() /*303*/])->f_286 = iParam0;
}

void func_744()//Position - 0xAE351
{
	PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 33 /*INPUT_MOVE_DOWN_ONLY*/, true);
	PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 34 /*INPUT_MOVE_LEFT_ONLY*/, true);
	PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 30 /*INPUT_MOVE_LR*/, true);
	PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 35 /*INPUT_MOVE_RIGHT_ONLY*/, true);
	PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 31 /*INPUT_MOVE_UD*/, true);
	PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 32 /*INPUT_MOVE_UP_ONLY*/, true);
}

void func_745(var uParam0)//Position - 0xAF53D
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	var uVar4;
	var uVar5;
	var uVar6;
	iVar0 = uParam0->f_5283.f_5;
	Var1 = { uParam0->f_5283 };
	if (uParam0->f_8557 == 0)
	{
		if (!__LIB_0__::func_86(Var1))
		{
			uParam0->f_8557 = SHAPETEST::START_SHAPE_TEST_LOS_PROBE(Var1 + Vector(1f, 0f, 0f), Var1 - Vector(1f, 0f, 0f), 16, 0, 5);
			GRAPHICS::SET_CHECKPOINT_RGBA(iVar0, 0, 0, 0, 0);
			GRAPHICS::SET_CHECKPOINT_RGBA2(iVar0, 0, 0, 0, 0);
		}
	}
	else if (SHAPETEST::GET_SHAPE_TEST_RESULT(uParam0->f_8557, &uVar6, &uVar4, &Var3, &uVar5) == 2)
	{
		Var2 = { Var3 };
		if (Var1.f_2 > 0f)
		{
			GRAPHICS::SET_CHECKPOINT_CLIPPLANE_WITH_POS_NORM(iVar0, Var1 - Vector(0.05f, 0f, 0f), Var2);
		}
		MISC::CLEAR_BIT(&(uParam0->f_5512), 18);
		MISC::SET_BIT(&(uParam0->f_5512), 21);
		uParam0->f_8557 = 0;
	}
}

void func_746(float fParam0, struct<3> Param1)//Position - 0xAF6E9
{
	if (fParam0 < 1500f)
	{
		fParam0 = 1500f;
	}
	Global_2667225.f_45.f_59 = fParam0;
	Global_2667225.f_45.f_60 = { Param1 };
}

int func_747(bool bParam0, bool bParam1)//Position - 0xAFAF7
{
	if (!bParam1)
	{
		if (BitTest(Global_4718592.f_95507[bParam0 /*58*/].f_28, 16) && !__LIB_0__::func_86(Global_4718592.f_95507[bParam0 /*58*/].f_32))
		{
			return 1;
		}
	}
	else if (!__LIB_0__::func_86(Global_4718592.f_95507[bParam0 /*58*/].f_3))
	{
		if (BitTest(Global_4718592.f_95507[bParam0 /*58*/].f_28, 17) && !__LIB_0__::func_86(Global_4718592.f_95507[bParam0 /*58*/].f_35))
		{
			return 1;
		}
	}
	else if (BitTest(Global_4718592.f_95507[bParam0 /*58*/].f_28, 16) && !__LIB_0__::func_86(Global_4718592.f_95507[bParam0 /*58*/].f_32))
	{
		return 1;
	}
	return 0;
}

void func_748(bool bParam0, var uParam1, bool bParam2)//Position - 0xAFE12
{
	if (bParam0 < (__LIB_16__::func_696() - 1))
	{
		if (bParam0 > -1)
		{
			if (bParam2)
			{
				*uParam1 = { Global_4718592.f_95507[bParam0 /*58*/].f_3 };
			}
			else
			{
				*uParam1 = { Global_4718592.f_95507[bParam0 /*58*/] };
			}
		}
	}
}

void func_749(bool bParam0, bool bParam1)//Position - 0xD8036
{
	if (bParam0)
	{
		NETWORK::SET_LOCAL_PLAYER_AS_GHOST(true, bParam1);
	}
	else
	{
		NETWORK::SET_LOCAL_PLAYER_AS_GHOST(false, bParam1);
	}
}

int func_750(int iParam0, bool bParam1)//Position - 0xD808E
{
	int iVar0;
	iVar0 = -1;
	if (bParam1)
	{
		iVar0 = Global_4718592.f_95507[iParam0 /*58*/].f_39;
	}
	else
	{
		iVar0 = Global_4718592.f_95507[iParam0 /*58*/].f_38;
	}
	return iVar0;
}

int func_751(int iParam0)//Position - 0xD80C5
{
	if (iParam0 == 1)
	{
		return 109;
	}
	if (iParam0 == 2)
	{
		return 108;
	}
	if (iParam0 == 3)
	{
		return 107;
	}
	return 1;
}

void func_752(int iParam0, int iParam1, var uParam2)//Position - 0xD80EF
{
	(uParam2[iParam0 /*303*/])->f_271 = ((uParam2[iParam0 /*303*/])->f_271 + iParam1);
}

int func_753(var uParam0)//Position - 0xD81B8
{
	return uParam0->f_3725;
}

void func_754(int iParam0)//Position - 0xD9F10
{
	STATS::PRESENCE_EVENT_UPDATESTAT_INT_WITH_STRING(joaat("MP0_CHAR_FM_RACE_RECORD_TIMES"), iParam0, 0, &(Global_4718592.f_116811));
}

void func_755(var uParam0, var uParam1, int iParam2)//Position - 0xD9F2D
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= (__LIB_16__::func_696() - 1))
	{
		uParam1->f_3746[iVar0] = (uParam0[NETWORK::PARTICIPANT_ID_TO_INT() /*303*/])->f_12[iVar0];
		iVar0++;
	}
	uParam1->f_3724 = iParam2;
	uParam1->f_3725 = uParam1->f_3724;
}

int func_756(int iParam0, int iParam1)//Position - 0xDA01D
{
	if (iParam0 > 0)
	{
		if (iParam0 < iParam1)
		{
			return 1;
		}
	}
	return 0;
}

int func_757(int iParam0)//Position - 0xDA04A
{
	if (iParam0 < 10000)
	{
		return 0;
	}
	return 1;
}

int func_758(var uParam0, int iParam1)//Position - 0xDA0E0
{
	if (iParam1 == -1)
	{
		return 0;
	}
	return (uParam0[iParam1 /*303*/])->f_251;
}

int func_759(var uParam0)//Position - 0xDA0FB
{
	return uParam0->f_3724;
}

bool func_760(var uParam0)//Position - 0xDA108
{
	return BitTest(uParam0->f_824, 9);
}

void func_761(var uParam0)//Position - 0xDA198
{
	if ((BitTest(Global_4718592.f_32, 26) || BitTest(Global_4718592.f_37, 19)) || BitTest(Global_4718592.f_40, 5))
	{
		__LIB_0__::func_627(&(uParam0->f_9938), 0, 0);
		if (BitTest(Global_4718592.f_32, 26))
		{
			MISC::CLEAR_BIT(&(uParam0->f_5514), 5);
			if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("CrossLine"))
			{
				GRAPHICS::ANIMPOSTFX_STOP("CrossLine");
				GRAPHICS::ANIMPOSTFX_PLAY("CrossLineOut", 0, false);
			}
			PAD::STOP_CONTROL_SHAKE(0 /*PLAYER_CONTROL*/);
		}
	}
}

int func_762(var uParam0)//Position - 0xDA34A
{
	if (uParam0->f_4657 == 1)
	{
		return 1;
	}
	return 0;
}

bool func_763(var uParam0, var uParam1)//Position - 0xDA66F
{
	return (uParam0[NETWORK::PARTICIPANT_ID_TO_INT() /*303*/])->f_234 + 1 > uParam1->f_585;
}

bool func_764(var uParam0, var uParam1)//Position - 0xDA68A
{
	return (uParam0[NETWORK::PARTICIPANT_ID_TO_INT() /*303*/])->f_235 + 1 == uParam1->f_729;
}

int func_765(int iParam0, var uParam1)//Position - 0xDA6A5
{
	int iVar0;
	int iVar1;
	iVar1 = 0;
	while (iVar1 <= iParam0)
	{
		iVar0 = (iVar0 + uParam1->f_3746[iVar1]);
		iVar1++;
	}
	return iVar0;
}

bool func_766()//Position - 0xDA700
{
	return BitTest(Global_4718592.f_31, 7);
}

var func_767(bool bParam0, bool bParam1)//Position - 0xDADB1
{
	if (!bParam1)
	{
		return Global_4718592.f_95507[bParam0 /*58*/].f_30;
	}
	if (!__LIB_0__::func_86(Global_4718592.f_95507[bParam0 /*58*/].f_3))
	{
		return Global_4718592.f_95507[bParam0 /*58*/].f_31;
	}
	return Global_4718592.f_95507[bParam0 /*58*/].f_30;
}

Vector3 func_768(bool bParam0, bool bParam1, struct<3> Param2, struct<3> Param3)//Position - 0xDAE11
{
	if ((bParam1 && !__LIB_0__::func_86(Global_4718592.f_95507[bParam0 /*58*/].f_35)) && !BitTest(Global_4718592.f_95507[bParam0 /*58*/].f_28, 17))
	{
		return Param2 + Global_4718592.f_95507[bParam0 /*58*/].f_35;
	}
	else if (!__LIB_0__::func_86(Global_4718592.f_95507[bParam0 /*58*/].f_32) && !BitTest(Global_4718592.f_95507[bParam0 /*58*/].f_28, 16))
	{
		return Param2 + Global_4718592.f_95507[bParam0 /*58*/].f_32;
	}
	return Param3;
}

bool func_769(bool bParam0, bool bParam1)//Position - 0xDB8BF
{
	if (!bParam1)
	{
		return BitTest(Global_4718592.f_95507[bParam0 /*58*/].f_28, 1);
	}
	if (!__LIB_0__::func_86(Global_4718592.f_95507[bParam0 /*58*/].f_3))
	{
		return BitTest(Global_4718592.f_95507[bParam0 /*58*/].f_28, 2);
	}
	return BitTest(Global_4718592.f_95507[bParam0 /*58*/].f_28, 1);
}

bool func_770(int iParam0, bool bParam1)//Position - 0xDB925
{
	if (!bParam1)
	{
		return BitTest(Global_4718592.f_95507[iParam0 /*58*/].f_29, 16);
	}
	if (!__LIB_0__::func_86(Global_4718592.f_95507[iParam0 /*58*/].f_3))
	{
		return BitTest(Global_4718592.f_95507[iParam0 /*58*/].f_29, 17);
	}
	return BitTest(Global_4718592.f_95507[iParam0 /*58*/].f_29, 16);
}

int func_771(int iParam0, bool bParam1)//Position - 0xDBAF4
{
	int iVar0;
	if (bParam1)
	{
		iVar0 = Global_4718592.f_95507[iParam0 /*58*/].f_39;
	}
	else
	{
		iVar0 = Global_4718592.f_95507[iParam0 /*58*/].f_38;
	}
	if (iVar0 == 0)
	{
		return 1;
	}
	return 0;
}

int func_772(int iParam0)//Position - 0xDBB31
{
	if ((((((((((((iParam0 == joaat("hauler") || iParam0 == joaat("hauler2")) || iParam0 == joaat("phantom")) || iParam0 == joaat("phantom2")) || iParam0 == joaat("phantom3")) || iParam0 == joaat("benson")) || iParam0 == joaat("biff")) || iParam0 == joaat("mule")) || iParam0 == joaat("mule2")) || iParam0 == joaat("mule3")) || iParam0 == joaat("packer")) || iParam0 == joaat("pounder")) || iParam0 == joaat("flatbed"))
	{
		return 1;
	}
	return 0;
}

float func_773(float fParam0)//Position - 0xDBBF1
{
	float fVar0;
	if (fParam0 > 1f)
	{
		fVar0 = (6f + (((fParam0 - 1f) * 10f) * 0.55f));
	}
	else
	{
		fVar0 = (6f - (((1f - fParam0) * 10f) * 0.55f));
	}
	return fVar0;
}

float func_774(int iParam0)//Position - 0xDBDC0
{
	if (iParam0 < 0 || iParam0 >= __LIB_16__::func_696())
	{
		return 0f;
	}
	return Global_4718592.f_95507[iParam0 /*58*/].f_52;
}

float func_775(int iParam0, bool bParam1)//Position - 0xDBE24
{
	if (iParam0 < 0 || iParam0 >= __LIB_16__::func_696())
	{
		return 0f;
	}
	if (bParam1)
	{
		return Global_4718592.f_95507[iParam0 /*58*/].f_45;
	}
	return Global_4718592.f_95507[iParam0 /*58*/].f_44;
}

void func_776(var uParam0, int iParam1)//Position - 0xDBE7E
{
	if (1f < 1f)
	{
		PLAYER::SET_AIR_DRAG_MULTIPLIER_FOR_PLAYERS_VEHICLE(PLAYER::PLAYER_ID(), 1f);
	}
	else
	{
		PLAYER::SET_AIR_DRAG_MULTIPLIER_FOR_PLAYERS_VEHICLE(PLAYER::PLAYER_ID(), 1f);
	}
	MISC::CLEAR_BIT(&(uParam0->f_5216), iParam1);
}

int func_777(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0xDBEAC
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	struct<3> Var5;
	struct<3> Var6;
	struct<3> Var7;
	struct<3> Var8;
	struct<3> Var9;
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		ENTITY::GET_ENTITY_MATRIX(iParam0, &Var0, &Var1, &Var2, &Var3);
		if (!bParam3)
		{
			Var7 = { Global_4718592.f_95507[iParam2 /*58*/] };
		}
		else
		{
			Var7 = { Global_4718592.f_95507[iParam2 /*58*/].f_3 };
		}
		if (BitTest(Global_4718592.f_95507[iParam2 /*58*/].f_28, 18))
		{
			if (!bParam3)
			{
				Var4 = { __LIB_3__::func_80(Global_4718592.f_95507[iParam2 /*58*/].f_46, 0f, Global_4718592.f_95507[iParam2 /*58*/].f_30) };
			}
			else
			{
				Var4 = { __LIB_3__::func_80(Global_4718592.f_95507[iParam2 /*58*/].f_47, 0f, Global_4718592.f_95507[iParam2 /*58*/].f_31) };
			}
		}
		else if (SYSTEM::VDIST2(Var3, Var7) > 20f)
		{
			Var4 = { __LIB_0__::func_79(Var7 - Var3) };
		}
		else
		{
			Var4 = { Var0 };
		}
		__LIB_0__::func_79(Var4);
		Var5 = { __LIB_0__::func_835(Var4, 0f, 0f, 1f) };
		Var6 = { -__LIB_0__::func_835(Var4, Var5) };
		__LIB_0__::func_79(Var6);
		__LIB_0__::func_79(Var5);
		switch (iParam1)
		{
			case 2:
				Var6 = { -Var6 };
				Var5 = { -Var5 };
				break;
			case 3:
				Var8 = { Var6 };
				Var9 = { Var5 };
				Var6 = { -Var9 };
				Var5 = { Var8 };
				break;
			case 1:
				Var8 = { Var6 };
				Var9 = { Var5 };
				Var6 = { Var9 };
				Var5 = { -Var8 };
				break;
		}
		if ((__LIB_0__::func_158(Var6, Var2) > (1f - 0.3f) && __LIB_0__::func_158(Var5, Var1) > (1f - (0.3f * 1.5f))) || (MISC::ABSF(Var4.f_2) > 0.95f && __LIB_0__::func_158(Var4, Var0) > (1f - 0.3f)))
		{
			return 1;
		}
	}
	return 0;
}

int func_778(int iParam0, bool bParam1)//Position - 0xDC0C8
{
	int iVar0;
	if (bParam1)
	{
		iVar0 = 4;
	}
	if (BitTest(Global_4718592.f_95507[iParam0 /*58*/].f_54, (0 + iVar0)))
	{
		return 0;
	}
	else if (BitTest(Global_4718592.f_95507[iParam0 /*58*/].f_54, (1 + iVar0)))
	{
		return 1;
	}
	else if (BitTest(Global_4718592.f_95507[iParam0 /*58*/].f_54, (2 + iVar0)))
	{
		return 2;
	}
	else if (BitTest(Global_4718592.f_95507[iParam0 /*58*/].f_54, (3 + iVar0)))
	{
		return 3;
	}
	return -1;
}

float func_779(int iParam0, var uParam1)//Position - 0xDC7C1
{
	if (BitTest(Global_4718592.f_95507[iParam0 /*58*/].f_29, 13) || (uParam1 && BitTest(Global_4718592.f_95507[iParam0 /*58*/].f_29, 14)))
	{
		return 2f;
	}
	else if (__LIB_18__::func_690())
	{
		return 9f;
	}
	return 28f;
}

var func_780(int iParam0, bool bParam1)//Position - 0xDC818
{
	if (!bParam1)
	{
		return BitTest(Global_4718592.f_95507[iParam0 /*58*/].f_29, 9);
	}
	if (!__LIB_0__::func_86(Global_4718592.f_95507[iParam0 /*58*/].f_3))
	{
		return BitTest(Global_4718592.f_95507[iParam0 /*58*/].f_29, 10);
	}
	return BitTest(Global_4718592.f_95507[iParam0 /*58*/].f_29, 9);
}

int func_781(int iParam0)//Position - 0xDC8EC
{
	if (iParam0 == 10 || iParam0 == 11)
	{
		return 1;
	}
	return 0;
}

int func_782(bool bParam0)//Position - 0xDCD65
{
	if (bParam0 >= 0)
	{
		if (Global_4718592.f_95507[bParam0 /*58*/].f_53 != -1 && Global_4718592.f_95507[bParam0 /*58*/].f_53 != 0)
		{
			return Global_4718592.f_95507[bParam0 /*58*/].f_53 * 1000;
		}
	}
	return 7500;
}

bool func_783(var uParam0)//Position - 0xDCDB5
{
	return (uParam0[NETWORK::PARTICIPANT_ID_TO_INT() /*303*/])->f_2;
}

int func_784()//Position - 0xDCDC8
{
	if (((((((__LIB_0__::func_1("RACE_RAL2") || __LIB_0__::func_1("RACE_RAL3")) || __LIB_0__::func_1("RACE_RAL4")) || __LIB_0__::func_1("RACE_RAL5")) || __LIB_0__::func_1("RACE_CHECK")) || __LIB_0__::func_1("FM_IHELP_XPL" /* GXT: You can still get RP for finishing a Race, even if you're not first. */)) || __LIB_0__::func_1("RACE_GTA1")) || __LIB_0__::func_1("FMMC_PL_STCL" /* GXT: Setting Challenge */))
	{
		return 1;
	}
	return 0;
}

int func_785(var uParam0)//Position - 0xDD16A
{
	return uParam0->f_3717;
}

void func_786(var uParam0, struct<3> Param1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16)//Position - 0xDDC93
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	if (uParam16->f_5322 == 0)
	{
		HUD::GET_HUD_COLOUR(1, &iVar1, &iVar2, &iVar3, &uVar4);
		iVar0 = 17;
		uParam16->f_5323 = 180;
		uParam16->f_5322 = GRAPHICS::CREATE_CHECKPOINT(iVar0, *uParam0 + Vector(2f, 0f, 0f), Param1 + Vector(5f, 0f, 0f), (7.5f * 3f), iVar1, iVar2, iVar3, uParam16->f_5323, 0);
	}
}

void func_787(var uParam0)//Position - 0xDDD13
{
	uParam0->f_5686 = 1;
	uParam0->f_5687 = 1;
	uParam0->f_5688 = 1;
	uParam0->f_5692 = 1;
	uParam0->f_5693 = 1;
	if (__LIB_0__::func_1("BASEJ_HELP3"))
	{
		HUD::CLEAR_HELP(true);
	}
	if (__LIB_0__::func_1("BASEJ_HELP2"))
	{
		HUD::CLEAR_HELP(true);
	}
	if (__LIB_0__::func_1("BASEJ_HELP1"))
	{
		HUD::CLEAR_HELP(true);
	}
	if (__LIB_0__::func_1("BASEJ_HELP1b"))
	{
		HUD::CLEAR_HELP(true);
	}
	if (__LIB_0__::func_1("BASEJ_HELP_FF"))
	{
		HUD::CLEAR_HELP(true);
	}
	if (__LIB_0__::func_1("BASEJ_HLP_START"))
	{
		HUD::CLEAR_HELP(true);
	}
}

void func_788(var uParam0)//Position - 0xDDD99
{
	(uParam0[NETWORK::PARTICIPANT_ID_TO_INT() /*303*/])->f_225 = 1;
}

void func_789(var uParam0)//Position - 0xDDF27
{
	(uParam0[NETWORK::PARTICIPANT_ID_TO_INT() /*303*/])->f_251 = 1;
}

int func_790(var uParam0, int iParam1)//Position - 0xDEF28
{
	if (BitTest(uParam0->f_5511, 30) && iParam1 == uParam0->f_27)
	{
		return 1;
	}
	return 0;
}

int func_791(float fParam0)//Position - 0xDF0EF
{
	if (fParam0 >= 300f)
	{
		return 1;
	}
	return 0;
}

int func_792(int iParam0)//Position - 0xDF328
{
	if (iParam0 < (Global_4718592.f_107224 - 2))
	{
		if (MISC::ARE_STRINGS_EQUAL(&(Global_4718592.f_116531), "Figure of Eight 5-KP") || MISC::ARE_STRINGS_EQUAL(&(Global_4718592.f_116531), "Figure of Eight"))
		{
			return 0;
		}
	}
	return 1;
}

void func_793(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, char* sParam5)//Position - 0xDF5EF
{
	Global_1940311.f_271[0 /*8*/] = iParam1;
	StringCopy(&(Global_1940311.f_271[0 /*8*/].f_2), sParam2, 24);
	Global_1940311.f_271[0 /*8*/].f_1 = iParam0;
	Global_1940311.f_271[1 /*8*/] = iParam4;
	StringCopy(&(Global_1940311.f_271[1 /*8*/].f_2), sParam5, 24);
	Global_1940311.f_271[1 /*8*/].f_1 = iParam3;
}

void func_794(int iParam0, int iParam1, int iParam2)//Position - 0xE0FDC
{
	int iVar0;
	int iVar1;
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (__LIB_0__::func_929(9, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1649593.f_1 = 1;
		__LIB_0__::func_928(9, iVar0);
		Global_1649593.f_5287[iVar0] = iParam0;
		Global_1649593.f_5287.f_11[iVar0] = iParam1;
		Global_1649593.f_5287.f_22[iVar0] = iParam2;
	}
}

void func_795(var uParam0, bool bParam1, bool bParam2)//Position - 0xE1050
{
	if (bParam1)
	{
		if (!BitTest(uParam0->f_5512, 27))
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "1st_Place_Gain", "DLC_Stunt_Race_Frontend_Sounds", true);
			MISC::SET_BIT(&(uParam0->f_5512), 27);
		}
	}
	else if (BitTest(uParam0->f_5512, 27))
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "1st_Place_Lose", "DLC_Stunt_Race_Frontend_Sounds", true);
		MISC::CLEAR_BIT(&(uParam0->f_5512), 27);
	}
	else if (bParam2)
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Place_Gain", "DLC_Stunt_Race_Frontend_Sounds", true);
	}
	else
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Place_Lose", "DLC_Stunt_Race_Frontend_Sounds", true);
	}
}

int func_796()//Position - 0xE10D0
{
	if ((Local_1131.f_2 == 0 && __LIB_0__::func_864(&(Local_1131.f_27))) || Local_1131.f_2 == 4)
	{
		return 1;
	}
	return 0;
}

void func_797(float fParam0, float fParam1)//Position - 0xE13D4
{
	float fVar0;
	float fVar1;
	float fVar2;
	fVar0 = GRAPHICS::GET_SAFE_ZONE_SIZE();
	fVar1 = 1f;
	fVar2 = ((100f * fVar1) - (100f * fVar0));
	if (Global_2678393.f_1593)
	{
		*fParam0 = (*fParam0 + 0.09f);
	}
	*fParam0 = (*fParam0 + (fVar2 * 0.005f));
	*fParam1 = (*fParam1 - (fVar2 * 0.005f));
}

void func_798(int iParam0)//Position - 0xE1E3C
{
	Local_66.f_1 = (Local_66.f_1 + iParam0);
	if (Local_66.f_1 < 0)
	{
		Local_66.f_1 = 2;
	}
	else if (Local_66.f_1 > 2)
	{
		Local_66.f_1 = 0;
	}
}

char* func_799(int iParam0)//Position - 0xE68AE
{
	switch (iParam0)
	{
		case 0:
			return "RCE_OW_TIRE_HH";
		case 1:
			return "RCE_OW_TIRE_MH";
		case 2:
			return "RCE_OW_TIRE_SH";
		default:
	}
	return "";
}

int func_800()//Position - 0xE7075
{
	return Local_66.f_0;
}

void func_801(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12)//Position - 0xE773E
{
	int iVar0;
	int iVar1;
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (__LIB_0__::func_929(5, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1649593.f_1 = 1;
		__LIB_0__::func_928(5, iVar0);
		Global_1649593.f_3705[iVar0] = iParam0;
		Global_1649593.f_3705.f_172[iVar0] = iParam1;
		StringCopy(&(Global_1649593.f_3705.f_11[iVar0 /*16*/]), sParam2, 64);
		Global_1649593.f_3705.f_194[iVar0] = iParam3;
		Global_1649593.f_3705.f_183[iVar0] = iParam4;
		Global_1649593.f_3705.f_216[iVar0] = iParam5;
		Global_1649593.f_3705.f_227[iVar0] = iParam6;
		Global_1649593.f_3705.f_270[iVar0] = iParam7;
		Global_1649593.f_3705.f_281[iVar0] = iParam8;
		Global_1649593.f_3705.f_292[iVar0] = iParam9;
		Global_1649593.f_3705.f_303[iVar0] = iParam10;
		Global_1649593.f_3705.f_314[iVar0] = iParam11;
		Global_1649593.f_3705.f_325[iVar0] = iParam12;
	}
}

struct<4> func_802(var uParam0, var uParam1, int iParam2)//Position - 0xE8470
{
	struct<4> Var0;
	StringCopy(&Var0, "MC_TRH_TM", 16);
	StringIntConCat(&Var0, iParam2 + 1, 16);
	return Var0;
}

int func_803(var uParam0)//Position - 0xE8846
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if ((uParam0[iVar0 /*5*/])->f_1 > -1)
		{
			if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX((uParam0[iVar0 /*5*/])->f_1)))
			{
				return (uParam0[iVar0 /*5*/])->f_1;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_804(var uParam0, int iParam1, int iParam2)//Position - 0xE8AE1
{
	int iVar0;
	int iVar1;
	struct<5> Var2;
	float fVar3;
	bool bVar4;
	iVar0 = iParam1;
	iVar1 = iParam2;
	Var2.f_4 = -2;
	fVar3 = (uParam0[((iParam1 + iParam2) / 2) /*5*/])->f_2;
	while (iVar0 <= iVar1)
	{
		while ((uParam0[iVar0 /*5*/])->f_2 > fVar3)
		{
			iVar0++;
		}
		while ((uParam0[iVar1 /*5*/])->f_2 < fVar3)
		{
			iVar1 = (iVar1 - 1);
		}
		if (iVar0 <= iVar1)
		{
			bVar4 = true;
			if ((uParam0[iVar0 /*5*/])->f_2 == (uParam0[iVar1 /*5*/])->f_2)
			{
				bVar4 = (uParam0[iVar0 /*5*/])->f_3 > (uParam0[iVar1 /*5*/])->f_3;
			}
			if (bVar4)
			{
				Var2 = { *(uParam0[iVar0 /*5*/]) };
				*(uParam0[iVar0 /*5*/]) = { *(uParam0[iVar1 /*5*/]) };
				*(uParam0[iVar1 /*5*/]) = { Var2 };
			}
			iVar0++;
			iVar1 = (iVar1 - 1);
		}
	}
	return iVar0;
}

void func_805(var uParam0, var uParam1)//Position - 0xE8BAF
{
	int iVar0;
	struct<5> Var1;
	Var1.f_4 = -2;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if ((uParam0[iVar0 /*5*/])->f_1 > -1)
		{
			if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX((uParam0[iVar0 /*5*/])->f_1)))
			{
				(uParam0[iVar0 /*5*/])->f_2 = (uParam1[(uParam0[iVar0 /*5*/])->f_1 /*303*/])->f_269;
				(uParam0[iVar0 /*5*/])->f_3 = (uParam1[(uParam0[iVar0 /*5*/])->f_1 /*303*/])->f_5;
				(uParam0[iVar0 /*5*/])->f_4 = (uParam1[iVar0 /*303*/])->f_252;
			}
			else
			{
				*(uParam0[iVar0 /*5*/]) = { Var1 };
				(uParam0[iVar0 /*5*/])->f_1 = -1;
			}
		}
		iVar0++;
	}
}

int func_806()//Position - 0xE92A7
{
	if (__LIB_1__::func_129() || __LIB_1__::func_130())
	{
		return 0;
	}
	return 1;
}

int func_807(int iParam0, int iParam1, bool bParam2, int iParam3)//Position - 0xEAAF3
{
	int iVar0;
	iVar0 = 0;
	if (!bParam2)
	{
		if (iParam0 != iParam3)
		{
			if (iParam1 != 0)
			{
				if (iParam1 < 0)
				{
					if (iParam3 < iParam0)
					{
						iVar0 = 1;
					}
				}
				else if (iParam1 > 0)
				{
					if (iParam3 > iParam0)
					{
						iVar0 = 2;
					}
				}
			}
		}
	}
	return iVar0;
}

int func_808(bool bParam0, var uParam1)//Position - 0xEE938
{
	if ((uParam1[bParam0 /*303*/])->f_9 == -1)
	{
		return __LIB_0__::func_162();
	}
	if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX((uParam1[bParam0 /*303*/])->f_9)))
	{
		return NETWORK::NETWORK_GET_PLAYER_INDEX((uParam1[bParam0 /*303*/])->f_9);
	}
	return __LIB_0__::func_162();
}

void func_809(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15)//Position - 0xEE982
{
	if (uParam0->f_764 != -1)
	{
		*uParam1 = 2;
	}
	if (uParam0->f_765 != -1)
	{
		*uParam2 = 2;
	}
	if (uParam0->f_766 != -1)
	{
		*uParam3 = 2;
	}
	if (uParam0->f_767 != -1)
	{
		*uParam4 = 2;
	}
	if (uParam0->f_768 != -1)
	{
		*uParam5 = 2;
	}
	if (uParam0->f_769 != -1)
	{
		*uParam6 = 2;
	}
	if (uParam0->f_770 != -1)
	{
		*uParam7 = 2;
	}
	if (uParam0->f_771 != -1)
	{
		*uParam8 = 2;
	}
	if (uParam0->f_772 != -1)
	{
		*uParam9 = 2;
	}
	if (uParam0->f_773 != -1)
	{
		*uParam10 = 2;
	}
	if (uParam0->f_774 != -1)
	{
		*uParam11 = 2;
	}
	if (uParam0->f_775 != -1)
	{
		*uParam12 = 2;
	}
	if (uParam0->f_776 != -1)
	{
		*uParam13 = 2;
	}
	if (uParam0->f_777 != -1)
	{
		*uParam14 = 2;
	}
	if (uParam0->f_778 != -1)
	{
		*uParam15 = 2;
	}
}

int func_810(var uParam0)//Position - 0xF00E4
{
	if (uParam0->f_572 == 6)
	{
		return 1;
	}
	if (uParam0->f_572 == 7)
	{
		return 1;
	}
	if (uParam0->f_572 == 18)
	{
		return 1;
	}
	if (uParam0->f_572 == 19)
	{
		return 1;
	}
	return 0;
}

void func_811(var uParam0, int iParam1, int iParam2)//Position - 0xF1272
{
	if (iParam2 == -1 || iParam2 == 4)
	{
		return;
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return;
	}
	(uParam0[iParam1 /*303*/])->f_280[iParam2]++;
}

char* func_812(int iParam0)//Position - 0xF12C1
{
	if (iParam0 == 3)
	{
		return "scr_as_target_shot_large";
	}
	else if (iParam0 == 2)
	{
		return "scr_as_target_shot_medium";
	}
	else if (iParam0 == 1)
	{
		return "scr_as_target_shot_small";
	}
	else if (iParam0 == 0)
	{
		return "scr_as_target_shot_extra_small";
	}
	return "scr_as_target_shot_large";
}

float func_813()//Position - 0xF188E
{
	return 9000f;
}

char* func_814(int iParam0)//Position - 0xF189B
{
	switch (iParam0)
	{
		case joaat("stt_prop_stunt_tube_jmp2"):
		case joaat("stt_prop_stunt_tube_fn_01"):
		case joaat("stt_prop_stunt_tube_fn_02"):
		case joaat("stt_prop_stunt_tube_fn_03"):
		case joaat("stt_prop_stunt_tube_fn_04"):
		case joaat("stt_prop_stunt_tube_fn_05"):
			return "stt_mp_stunt_tubes";
		case joaat("ba_prop_battle_tube_fn_01"):
		case joaat("ba_prop_battle_tube_fn_02"):
		case joaat("ba_prop_battle_tube_fn_03"):
		case joaat("ba_prop_battle_tube_fn_04"):
		case joaat("ba_prop_battle_tube_fn_05"):
			return "ba_prop_battle_bomb";
		case joaat("stt_prop_track_stop_sign"):
			return "stt_mp_stunt_course";
		default:
	}
	return "stt_mp_stunt_tubes";
}

char* func_815(int iParam0)//Position - 0xF190B
{
	switch (iParam0)
	{
		case joaat("stt_prop_stunt_tube_jmp2"):
			return "stt_prop_stunt_tube_jmp2";
		case joaat("stt_prop_stunt_tube_fn_01"):
			return "stt_prop_stunt_tube_fn_01";
		case joaat("stt_prop_stunt_tube_fn_02"):
			return "stt_prop_stunt_tube_fn_02";
		case joaat("stt_prop_stunt_tube_fn_03"):
			return "stt_prop_stunt_tube_fn_03";
		case joaat("stt_prop_stunt_tube_fn_04"):
			return "stt_prop_stunt_tube_fn_04";
		case joaat("stt_prop_stunt_tube_fn_05"):
			return "stt_prop_stunt_tube_fn_05";
		case joaat("ba_prop_battle_tube_fn_01"):
			return "ba_Prop_Battle_Tube_Fn_01";
		case joaat("ba_prop_battle_tube_fn_02"):
			return "ba_Prop_Battle_Tube_Fn_02";
		case joaat("ba_prop_battle_tube_fn_03"):
			return "ba_Prop_Battle_Tube_Fn_03";
		case joaat("ba_prop_battle_tube_fn_04"):
			return "ba_Prop_Battle_Tube_Fn_04";
		case joaat("ba_prop_battle_tube_fn_05"):
			return "ba_Prop_Battle_Tube_Fn_05";
		case joaat("stt_prop_track_stop_sign"):
			return "stt_prop_track_stop_sign";
		default:
	}
	return "";
}

int func_816(var uParam0, int iParam1, int iParam2)//Position - 0xFD5D7
{
	if (iParam2 == -1 || iParam2 == 4)
	{
		return 0;
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return 0;
	}
	return (uParam0[iParam1 /*303*/])->f_280[iParam2];
}

void func_817()//Position - 0xFD624
{
	PAD::CLEAR_CONTROL_LIGHT_EFFECT(0 /*PLAYER_CONTROL*/);
}

bool func_818(var uParam0)//Position - 0xFD6F5
{
	return BitTest(uParam0->f_823, 20);
}

int func_819(var uParam0)//Position - 0x11D034
{
	if (uParam0->f_1822.f_476 != -1 && uParam0->f_1822.f_476 == Global_1836352)
	{
		return 1;
	}
	return 0;
}

int func_820(var uParam0, int iParam1)//Position - 0x11F963
{
	var uVar0;
	if (iParam1 >= 0 && iParam1 < 32)
	{
		if (uParam0->f_883[iParam1 /*42*/] != -1)
		{
			uVar0 = uParam0->f_883[iParam1 /*42*/];
		}
	}
	return uVar0;
}

bool func_821(var uParam0)//Position - 0x132D93
{
	return uParam0->f_3669.f_4;
}

void func_822(var uParam0, int iParam1)//Position - 0x138850
{
	(uParam0[NETWORK::PARTICIPANT_ID_TO_INT() /*303*/])->f_266 = iParam1;
}

void func_823(var uParam0)//Position - 0x138D2D
{
	uParam0->f_4661 = -1;
	uParam0->f_4662 = -1;
}

int func_824(var uParam0)//Position - 0x138D91
{
	return (uParam0[NETWORK::PARTICIPANT_ID_TO_INT() /*303*/])->f_266;
}

int func_825(var uParam0)//Position - 0x15655A
{
	int iVar0;
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_2353.f_23[0]))
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_2353.f_23[1]))
		{
			if (!PED::IS_PED_INJURED(uParam0->f_2353.f_23[0]))
			{
				if (!PED::IS_PED_INJURED(uParam0->f_2353.f_23[1]))
				{
					if (PED::IS_PED_MALE(uParam0->f_2353.f_23[0]))
					{
						iVar0++;
					}
					if (PED::IS_PED_MALE(uParam0->f_2353.f_23[1]))
					{
						iVar0++;
					}
					switch (iVar0)
					{
						case 0:
							return 3;
						case 1:
							return 2;
						case 2:
							return 1;
						}
					}
				}
			}
		default:
	}
	return 1;
}

void func_826(var uParam0, char* sParam1, int iParam2)//Position - 0x162B3B
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "ADD_WORLD_RECORD_TO_WALL");
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam1);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_1, "ADD_WORLD_RECORD_TO_WALL");
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam1);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_2, "ADD_WORLD_RECORD_TO_WALL");
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam1);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_827(var uParam0, char* sParam1, int iParam2, int iParam3)//Position - 0x162BC0
{
	char* sVar0;
	int iVar1;
	if (iParam3 <= 0)
	{
		iParam3 = iParam2;
	}
	iVar1 = (iParam2 - iParam3);
	if (iVar1 < 0)
	{
		iVar1 = (iVar1 * -1);
	}
	if (iParam2 >= iParam3)
	{
		sVar0 = "CELEB_TIME" /* GXT: TIME */;
	}
	else
	{
		sVar0 = "CELEB_PERSONAL_BEST" /* GXT: PERSONAL BEST */;
	}
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "ADD_TIME_TO_WALL");
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam1);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
	__LIB_0__::func_700(sVar0);
	if (iParam2 < iParam3)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar1);
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_1, "ADD_TIME_TO_WALL");
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam1);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
	__LIB_0__::func_700(sVar0);
	if (iParam2 < iParam3)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar1);
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_2, "ADD_TIME_TO_WALL");
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam1);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
	__LIB_0__::func_700(sVar0);
	if (iParam2 < iParam3)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar1);
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

bool func_828(var uParam0)//Position - 0x162CDE
{
	return BitTest((uParam0[NETWORK::PARTICIPANT_ID_TO_INT() /*303*/])->f_228, 24);
}

void func_829(var uParam0, char* sParam1, int iParam2)//Position - 0x162CF4
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "ADD_SCORE_TO_WALL");
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam1);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	__LIB_0__::func_700("CELEB_SCORE" /* GXT: SCORE */);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_1, "ADD_SCORE_TO_WALL");
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam1);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	__LIB_0__::func_700("CELEB_SCORE" /* GXT: SCORE */);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_2, "ADD_SCORE_TO_WALL");
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam1);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	__LIB_0__::func_700("CELEB_SCORE" /* GXT: SCORE */);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_830()//Position - 0x16359C
{
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 25 /*INPUT_AIM*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 69 /*INPUT_VEH_ATTACK*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 70 /*INPUT_VEH_ATTACK2*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 114 /*INPUT_VEH_FLY_ATTACK*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 68 /*INPUT_VEH_AIM*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 24 /*INPUT_ATTACK*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 257 /*INPUT_ATTACK2*/, true);
	PAD::DISABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 230 /*INPUT_SCRIPT_LS*/, true);
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if (VEHICLE::DOES_VEHICLE_HAVE_WEAPONS(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))
		{
			VEHICLE::DISABLE_VEHICLE_WEAPON(false, joaat("VEHICLE_WEAPON_PLAYER_LASER"), PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), PLAYER::PLAYER_PED_ID());
		}
	}
}

void func_831(var uParam0)//Position - 0x16388D
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		uParam0->f_4576[iVar0] = -1;
		if (uParam0->f_4565[iVar0] >= 0)
		{
			AUDIO::STOP_SOUND(uParam0->f_4565[iVar0]);
			AUDIO::RELEASE_SOUND_ID(uParam0->f_4565[iVar0]);
			uParam0->f_4565[iVar0] = -1;
		}
		iVar0++;
	}
}

void func_832(var uParam0)//Position - 0x1638E3
{
	int iVar0;
	int iVar1;
	iVar0 = __LIB_0__::func_402(uParam0->f_5441);
	if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0, false))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, false, true);
			iVar1 = NETWORK::NETWORK_GET_NETWORK_ID_FROM_ENTITY(iVar0);
			NETWORK::SET_NETWORK_VEHICLE_RESPOT_TIMER(iVar1, 15000, 0, 0);
		}
	}
}

char* func_833(var uParam0)//Position - 0x163C37
{
	switch (*uParam0)
	{
		case 0:
			return "first_place";
			break;
		case 1:
			return "Middle";
			break;
		case 2:
			return "Lose";
			break;
	}
	return "";
}

void func_834(var uParam0)//Position - 0x163C7D
{
	if (CAM::DOES_CAM_EXIST(uParam0->f_5346))
	{
		if (CAM::IS_CAM_SHAKING(uParam0->f_5346))
		{
			CAM::STOP_CAM_SHAKING(uParam0->f_5346, false);
		}
	}
}

bool func_835(var uParam0)//Position - 0x163CA7
{
	return BitTest((uParam0[NETWORK::PARTICIPANT_ID_TO_INT() /*303*/])->f_229, 2);
}

float func_836(float fParam0, float fParam1)//Position - 0x164202
{
	float fVar0;
	fVar0 = (fParam1 / fParam0);
	if (fVar0 >= 0.75f)
	{
		return 0.75f;
	}
	if (fVar0 >= 0.5f)
	{
		return 0.5f;
	}
	if (fVar0 >= 0.25f)
	{
		return 0.25f;
	}
	return fVar0;
}

void func_837()//Position - 0x164255
{
	Global_1836751.f_3 = NETWORK::GET_CLOUD_TIME_AS_INT();
	Global_1836751.f_3 = (Global_1836751.f_3 + Global_262145.f_6887 /* Tunable: 1085662653 */);
	__LIB_1__::func_69(joaat("MPPLY_LAST_PROF_RACE_WON"), Global_1836751.f_3);
}

void func_838(int iParam0)//Position - 0x164C99
{
	struct<30> Var0;
	Var0.f_9 = 1;
	Global_2703735.f_967[iParam0 /*30*/] = { Var0 };
}

float func_839(float fParam0, float fParam1)//Position - 0x165187
{
	float fVar0;
	fVar0 = (fParam1 / fParam0);
	if (fVar0 >= 0.75f)
	{
		return 0.75f;
	}
	if (fVar0 >= 0.5f)
	{
		return 0.5f;
	}
	return 0.25f;
}

int func_840(int iParam0)//Position - 0x165658
{
	switch (iParam0)
	{
		case 1:
			return 1300;
		case 2:
			return 1050;
		case 3:
			return 900;
		default:
	}
	return 800;
}

int func_841(int iParam0)//Position - 0x16568E
{
	if (!__LIB_18__::func_729())
	{
		return iParam0;
	}
	return SYSTEM::ROUND((IntToFloat(iParam0) * Global_262145.f_31025 /* Tunable: -1089413511 */));
}

void func_842(var uParam0)//Position - 0x1659C0
{
	__LIB_0__::func_794(&(uParam0->f_9938));
	MISC::CLEAR_BIT(&(uParam0->f_5514), 5);
	if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("CrossLine"))
	{
		GRAPHICS::ANIMPOSTFX_STOP("CrossLine");
	}
	PAD::STOP_CONTROL_SHAKE(0 /*PLAYER_CONTROL*/);
}

void func_843(var uParam0)//Position - 0x165BED
{
	if (uParam0->f_16 == 1)
	{
		PAD::SHUTDOWN_PC_SCRIPTED_CONTROLS();
		uParam0->f_16 = 0;
	}
}

int func_844()//Position - 0x165C06
{
	int iVar0;
	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)) || !VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false))
	{
		return 0;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false));
	if (iVar0 == joaat("blazer5"))
	{
		return 1;
	}
	return 0;
}

int func_845(var uParam0)//Position - 0x165C8F
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return BitTest((uParam0[NETWORK::PARTICIPANT_ID_TO_INT() /*303*/])->f_228, 12);
	}
	return 0;
}

var func_846(var uParam0)//Position - 0x1662AD
{
	var uVar0;
	uVar0 = (uParam0[NETWORK::PARTICIPANT_ID_TO_INT() /*303*/])->f_262;
	return uVar0;
}

int func_847(var uParam0, var uParam1)//Position - 0x166345
{
	if (uParam0->f_840 <= 2 && __LIB_1__::func_130())
	{
		return 0;
	}
	if ((uParam1[NETWORK::PARTICIPANT_ID_TO_INT() /*303*/])->f_257 == 1 && __LIB_1__::func_130())
	{
		return 0;
	}
	if (__LIB_1__::func_129() && uParam0->f_840 <= 2)
	{
		return 0;
	}
	return 1;
}

int func_848(var uParam0, var uParam1, var uParam2)//Position - 0x1663C2
{
	if (BitTest((uParam1[NETWORK::PARTICIPANT_ID_TO_INT() /*303*/])->f_228, 24))
	{
		return 0;
	}
	if (uParam0->f_840 == 1)
	{
		return 0;
	}
	if (BitTest(uParam2->f_5514, 1))
	{
		return 0;
	}
	return 1;
}

bool func_849()//Position - 0x16668F
{
	return Global_1836601;
}

bool func_850(var uParam0)//Position - 0x166DE7
{
	return BitTest((uParam0[NETWORK::PARTICIPANT_ID_TO_INT() /*303*/])->f_228, 13);
}

void func_851(var uParam0, var uParam1, var uParam2)//Position - 0x166EF1
{
	if (HUD::DOES_BLIP_EXIST(uParam1->f_4))
	{
		HUD::REMOVE_BLIP(&(uParam1->f_4));
	}
	if (HUD::DOES_BLIP_EXIST(uParam2->f_4))
	{
		HUD::REMOVE_BLIP(&(uParam2->f_4));
	}
	GRAPHICS::DELETE_CHECKPOINT(uParam1->f_5);
	if (uParam0->f_5351 != 0)
	{
		GRAPHICS::DELETE_CHECKPOINT(uParam0->f_5351);
	}
}

bool func_852(var uParam0)//Position - 0x167628
{
	return BitTest((uParam0[NETWORK::PARTICIPANT_ID_TO_INT() /*303*/])->f_228, 23);
}

bool func_853(var uParam0)//Position - 0x167903
{
	return BitTest((uParam0[NETWORK::PARTICIPANT_ID_TO_INT() /*303*/])->f_228, 26);
}

bool func_854(var uParam0)//Position - 0x167A8C
{
	return BitTest(uParam0->f_824, 19);
}

void func_855(var uParam0)//Position - 0x1682E8
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_51.f_13))
	{
		if (ENTITY::IS_ENTITY_ATTACHED(uParam0->f_51.f_13))
		{
			ENTITY::DETACH_ENTITY(uParam0->f_51.f_13, true, true);
		}
	}
}

char* func_856()//Position - 0x169B0E
{
	return "Countdown";
}

void func_857()//Position - 0x169ECC
{
	int iVar0;
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (VEHICLE::GET_HAS_RETRACTABLE_WHEELS(iVar0) && VEHICLE::GET_IS_WHEELS_RETRACTED(iVar0))
		{
			VEHICLE::SET_WHEELS_EXTENDED_INSTANTLY(iVar0);
		}
	}
}

void func_858(bool bParam0)//Position - 0x16A048
{
	if (bParam0)
	{
		MISC::SET_BIT(&(Global_2815059.f_1795), 9);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_2815059.f_1795), 9);
	}
}

bool func_859()//Position - 0x16A072
{
	return BitTest(Global_2815059.f_1795, 9);
}

void func_860(int iParam0)//Position - 0x16C24F
{
	int iVar0;
	if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
	{
		HUD::CLEAR_HELP(true);
	}
	iVar0 = 7500;
	if (__LIB_10__::func_365())
	{
		iVar0 = 11000;
		AUDIO::PLAY_SOUND_FRONTEND(-1, "INFO", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
	}
	__LIB_0__::func_151(&(Global_4718592.f_94900[Global_4718592.f_95507[iParam0 /*58*/].f_55 /*6*/]), iVar0);
}

bool func_861(var uParam0)//Position - 0x16C37F
{
	return BitTest(uParam0->f_5513, 2);
}

bool func_862(var uParam0, int iParam1)//Position - 0x16C38E
{
	return ((uParam0[NETWORK::PARTICIPANT_ID_TO_INT() /*303*/])->f_234 == Global_4718592.f_95507[iParam1 /*58*/].f_56 || Global_4718592.f_95507[iParam1 /*58*/].f_56 == 0);
}

void func_863()//Position - 0x16C435
{
	int iVar0;
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (VEHICLE::IS_VEHICLE_A_CONVERTIBLE(iVar0, false))
		{
			Global_2667225.f_45.f_69.f_68 = VEHICLE::GET_CONVERTIBLE_ROOF_STATE(iVar0);
		}
	}
}

void func_864(var uParam0)//Position - 0x16C81B
{
	if (!BitTest(uParam0->f_5216, 3))
	{
		PLAYER::SET_AIR_DRAG_MULTIPLIER_FOR_PLAYERS_VEHICLE(PLAYER::PLAYER_ID(), 1f);
		MISC::SET_BIT(&(uParam0->f_5216), 3);
	}
}

void func_865()//Position - 0x16E0CA
{
	if (!BitTest(Global_4718592.f_32, 22))
	{
		return;
	}
	NETWORK::SET_LOCAL_PLAYER_AS_GHOST(true, true);
}

void func_866(struct<2> Param0, int iParam1)//Position - 0x16E723
{
	int iVar0;
	int iVar1;
	if (!BitTest(Global_4980736.f_195934[iParam1 /*111*/].f_22, 9))
	{
		return;
	}
	if (__LIB_0__::func_864(&Param0))
	{
		iVar0 = SYSTEM::ROUND((Global_4980736.f_195934[iParam1 /*111*/].f_24 * 1000f));
		if (!__LIB_2__::func_815(Param0, iVar0, 0))
		{
			iVar1 = (iVar0 + 1000 - __LIB_1__::func_724(&Param0, 0, 0));
			__LIB_18__::func_733(iVar1, "ZNE_OOA", 0, 0, -1, 0, 2, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1);
		}
	}
}

void func_867(int iParam0)//Position - 0x16EA9B
{
	char* sVar0;
	char* sVar1;
	sVar0 = "Frontend_Repair_Complete";
	sVar1 = "DLC_AW_General_Sounds";
	if (__LIB_18__::func_689())
	{
		sVar0 = "Pit_Stop_End";
		sVar1 = "DLC_H3_Circuit_Racing_Sounds";
		if (ENTITY::DOES_ENTITY_EXIST(iParam0))
		{
			AUDIO::PLAY_SOUND_FROM_ENTITY(-1, sVar0, iParam0, sVar1, false, 0);
		}
	}
	else
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, sVar0, sVar1, true);
	}
}

void func_868(var uParam0)//Position - 0x16EB1B
{
	char* sVar0;
	char* sVar1;
	sVar0 = "Frontend_Repair_Loop";
	sVar1 = "DLC_AW_General_Sounds";
	if (__LIB_18__::func_689())
	{
		sVar0 = "Pit_Stop_Loop";
		sVar1 = "DLC_H3_Circuit_Racing_Sounds";
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_5441) && uParam0->f_9974 == -1)
		{
			uParam0->f_9974 = AUDIO::GET_SOUND_ID();
			AUDIO::PLAY_SOUND_FROM_ENTITY(uParam0->f_9974, sVar0, uParam0->f_5441, sVar1, false, 0);
		}
	}
	else
	{
		uParam0->f_9974 = AUDIO::GET_SOUND_ID();
		AUDIO::PLAY_SOUND_FRONTEND(uParam0->f_9974, sVar0, sVar1, true);
	}
}

float func_869(struct<2> Param0, var uParam1, struct<2> Param2, var uParam3)//Position - 0x16ED78
{
	float fVar0;
	float fVar1;
	float fVar2;
	fVar0 = MISC::ABSF((Param0.f_0 - Param2.f_0));
	fVar1 = MISC::ABSF((Param0.f_1 - Param2.f_1));
	fVar2 = fVar0;
	if (fVar1 < fVar0)
	{
		fVar2 = fVar1;
	}
	return fVar2;
}

bool func_870()//Position - 0x16F106
{
	return BitTest(Global_4718592.f_32, 9);
}

void func_871(var uParam0, int iParam1)//Position - 0x16F4C5
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	float fVar3;
	struct<3> Var4;
	float fVar5;
	int iVar6;
	struct<3> Var7;
	bVar0 = -1;
	fVar3 = 99999f;
	iVar6 = uParam0->f_8628;
	bVar2 = false;
	while (bVar2 <= 31)
	{
		if (BitTest(iVar6, bVar2))
		{
			Var4 = { Global_4980736.f_195934[bVar2 /*111*/][1 /*3*/] - Global_4980736.f_195934[bVar2 /*111*/][0 /*3*/] };
			Var4.f_2 = 0f;
			fVar5 = SYSTEM::VMAG(Var4);
			if (fVar5 < (fVar3 * 0.9f))
			{
				fVar3 = fVar5;
				iVar1 = 0;
				MISC::SET_BIT(&iVar1, bVar2);
				bVar0 = bVar2;
			}
			else if (fVar5 >= (fVar3 * 0.9f) && fVar5 <= (fVar3 * 1.1f))
			{
				MISC::SET_BIT(&iVar1, bVar2);
				bVar0 = -1;
			}
			MISC::CLEAR_BIT(&iVar6, bVar2);
		}
		if (iVar6 == 0)
		{
			bVar2 = 32;
		}
		bVar2++;
	}
	if (bVar0 == -1 && iVar1 > 0)
	{
		Var7 = { ENTITY::GET_ENTITY_COORDS(iParam1, true) };
		fVar3 = 1E+09f;
		bVar2 = false;
		while (bVar2 <= 31)
		{
			if (BitTest(iVar1, bVar2))
			{
				fVar5 = SYSTEM::VDIST2(Var7, Global_4980736.f_195934[bVar2 /*111*/][0 /*3*/] + Global_4980736.f_195934[bVar2 /*111*/][1 /*3*/] * Vector(0.5f, 0.5f, 0.5f));
				if (fVar5 < fVar3)
				{
					fVar3 = fVar5;
					bVar0 = bVar2;
				}
				MISC::CLEAR_BIT(&iVar1, bVar2);
			}
			if (iVar1 == 0)
			{
				bVar2 = 32;
			}
			bVar2++;
		}
	}
	if (bVar0 != -1)
	{
		if (WATER::GET_DEEP_OCEAN_SCALER() != Global_4980736.f_195934[bVar0 /*111*/].f_25)
		{
			WATER::SET_DEEP_OCEAN_SCALER(Global_4980736.f_195934[bVar0 /*111*/].f_25);
		}
	}
	else if (WATER::GET_DEEP_OCEAN_SCALER() != 1f)
	{
		WATER::RESET_DEEP_OCEAN_SCALER();
	}
}

void func_872(int iParam0, var uParam1, var uParam2, var uParam3)//Position - 0x170758
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	if (iParam0 > -1)
	{
		HUD::GET_HUD_COLOUR(iParam0, &iVar0, &iVar1, &iVar2, &uVar3);
	}
	else
	{
		iParam0 = MISC::GET_RANDOM_INT_IN_RANGE(1, 8);
		switch (iParam0)
		{
			case 1:
				iVar0 = 255;
				iVar1 = 0;
				iVar2 = 0;
				break;
			case 2:
				iVar0 = 0;
				iVar1 = 255;
				iVar2 = 0;
				break;
			case 3:
				iVar0 = 0;
				iVar1 = 0;
				iVar2 = 255;
				break;
			case 4:
				iVar0 = 255;
				iVar1 = 255;
				iVar2 = 0;
				break;
			case 5:
				iVar0 = 0;
				iVar1 = 255;
				iVar2 = 255;
				break;
			case 6:
				iVar0 = 255;
				iVar1 = 0;
				iVar2 = 255;
				break;
			case 7:
				iVar0 = 255;
				iVar1 = 255;
				iVar2 = 255;
				break;
			}
	}
	*uParam1 = SYSTEM::TO_FLOAT(iVar0);
	*uParam1 = (*uParam1 / 255f);
	*uParam2 = SYSTEM::TO_FLOAT(iVar1);
	*uParam2 = (*uParam2 / 255f);
	*uParam3 = SYSTEM::TO_FLOAT(iVar2);
	*uParam3 = (*uParam3 / 255f);
}

int func_873(bool bParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x1762D1
{
	if (BitTest(Global_4980736.f_36356[bParam0 /*134*/].f_21, 15) || bParam3)
	{
		if (BitTest(Global_4980736.f_36356[bParam0 /*134*/].f_21, 16))
		{
			return 1;
		}
		else if (iParam1 == iParam2)
		{
			return 1;
		}
	}
	return 0;
}

int func_874(bool bParam0, int iParam1)//Position - 0x17631E
{
	struct<3> Var0;
	float fVar1;
	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
	fVar1 = 10000f;
	if (Global_4980736.f_36356[bParam0 /*134*/].f_41 > 0f)
	{
		fVar1 = Global_4980736.f_36356[bParam0 /*134*/].f_41;
	}
	fVar1 = (fVar1 + IntToFloat(iParam1));
	if (SYSTEM::VDIST2(Global_4980736.f_36356[bParam0 /*134*/], Var0) > SYSTEM::POW(fVar1, 2f))
	{
		return 0;
	}
	return 1;
}

int func_875(int iParam0)//Position - 0x17639D
{
	switch (iParam0)
	{
		case 0:
			return 6;
		case 1:
			return 6;
		case 2:
			return 9;
		case 3:
			return 21;
		case 4:
			return 2;
		case 5:
			return 1;
		case 6:
			return 3;
		case 7:
			return 12;
		case 8:
			return 15;
		case 9:
			return 18;
		case 10:
			return 24;
		case 11:
			return 9;
		case 12:
			return 2;
		case 13:
			return 15;
		case 14:
			return 18;
		case 15:
			return 24;
		default:
	}
	return 2;
}

void func_876(var uParam0, var uParam1)//Position - 0x176B9A
{
	int iVar0;
	if (!BitTest(uParam0->f_824, 13))
	{
		iVar0 = 0;
		while (iVar0 < Global_4980736.f_36355)
		{
			if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_4146[iVar0]))
			{
				switch (Global_4980736.f_36356[iVar0 /*134*/].f_7)
				{
					case joaat("stt_prop_track_speedup"):
					case joaat("stt_prop_track_speedup_t1"):
					case joaat("stt_prop_track_speedup_t2"):
					case joaat("stt_prop_stunt_tube_speedb"):
					case joaat("stt_prop_stunt_tube_speed"):
					case joaat("stt_prop_track_slowdown"):
					case joaat("stt_prop_track_slowdown_t1"):
					case joaat("stt_prop_track_slowdown_t2"):
					case joaat("ar_prop_ar_speed_ring"):
					case joaat("ar_prop_ar_tube_speed"):
					case joaat("ar_prop_ar_tube_2x_speed"):
					case joaat("ar_prop_ar_tube_4x_speed"):
						if (!BitTest(uParam0->f_824, 12))
						{
							MISC::SET_BIT(&(uParam0->f_824), 12);
						}
						break;
					case joaat("sr_mp_spec_races_blimp_sign"):
						if (!BitTest(uParam0->f_824, 21))
						{
							MISC::SET_BIT(&(uParam0->f_824), 21);
						}
						break;
					}
			}
			iVar0++;
		}
		MISC::SET_BIT(&(uParam0->f_824), 13);
	}
}

void func_877(var uParam0, var uParam1)//Position - 0x176C7A
{
	if ((MISC::GET_GAME_TIMER() - uParam1->f_8560) > 2000)
	{
		if (uParam0[NETWORK::PARTICIPANT_ID_TO_INT() /*303*/])->f_268 != PLAYER::GET_PLAYER_SPRINT_STAMINA_REMAINING(PLAYER::PLAYER_ID())
		{
			(uParam0[NETWORK::PARTICIPANT_ID_TO_INT() /*303*/])->f_268 = PLAYER::GET_PLAYER_SPRINT_STAMINA_REMAINING(PLAYER::PLAYER_ID());
		}
		uParam1->f_8560 = MISC::GET_GAME_TIMER();
	}
}

void func_878(var uParam0, var uParam1, var uParam2)//Position - 0x17711A
{
	if (__LIB_3__::func_833(uParam0->f_585))
	{
		if ((uParam1[NETWORK::PARTICIPANT_ID_TO_INT() /*303*/])->f_253 != (uParam1[NETWORK::PARTICIPANT_ID_TO_INT() /*303*/])->f_252)
		{
			(uParam1[NETWORK::PARTICIPANT_ID_TO_INT() /*303*/])->f_253 = (uParam1[NETWORK::PARTICIPANT_ID_TO_INT() /*303*/])->f_252;
			uParam2->f_3957 = (uParam1[NETWORK::PARTICIPANT_ID_TO_INT() /*303*/])->f_252;
		}
	}
}

void func_879(var uParam0, var uParam1)//Position - 0x17716D
{
	if (uParam1->f_3957 != -1)
	{
		if (uParam1->f_3957 < (uParam0[NETWORK::PARTICIPANT_ID_TO_INT() /*303*/])->f_253)
		{
			(uParam0[NETWORK::PARTICIPANT_ID_TO_INT() /*303*/])->f_253 = uParam1->f_3957;
		}
	}
}

void func_880()//Position - 0x1771FE
{
	HUD::SET_RACE_TRACK_RENDER(false);
	HUD::CLEAR_GPS_RACE_TRACK();
}

void func_881(var uParam0, int iParam1)//Position - 0x177233
{
	uParam0->f_5408 = iParam1;
}

int func_882(var uParam0)//Position - 0x1774E0
{
	return uParam0->f_5408;
}

void func_883()//Position - 0x1774ED
{
	if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0 && Global_1836597)
	{
		PLAYER::SET_MAX_WANTED_LEVEL(0);
		PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
	}
}

void func_884(var uParam0)//Position - 0x177AB9
{
	if (BitTest(uParam0->f_5516, 3))
	{
		AUDIO::STOP_SOUND(uParam0->f_5344);
		MISC::CLEAR_BIT(&(uParam0->f_5516), 3);
	}
}

int func_885(var uParam0, var uParam1)//Position - 0x177BCE
{
	if (!BitTest(uParam0->f_5515, 2))
	{
		if (uParam0->f_4658 >= 5 && uParam0->f_4658 < 10)
		{
			if (!BitTest(uParam0->f_5515, 0))
			{
				*uParam1 = 0;
				MISC::SET_BIT(&(uParam0->f_5515), 0);
				return 1;
			}
		}
		else if (uParam0->f_4658 >= 10 && uParam0->f_4658 < 15)
		{
			if (!BitTest(uParam0->f_5515, 1))
			{
				*uParam1 = 1;
				MISC::SET_BIT(&(uParam0->f_5515), 1);
				return 1;
			}
		}
		else if (uParam0->f_4658 >= 15)
		{
			*uParam1 = 2;
			MISC::SET_BIT(&(uParam0->f_5515), 2);
			return 1;
		}
	}
	return 0;
}

int func_886()//Position - 0x177C6D
{
	if (iLocal_178 == 1)
	{
		iLocal_178 = 0;
		return 1;
	}
	return 0;
}

void func_887()//Position - 0x178085
{
	bLocal_173 = false;
	bLocal_174 = false;
	iLocal_175 = 0;
	iLocal_176 = 0;
	iLocal_177 = 0;
	iLocal_172 = 0;
}

void func_888(int iParam0)//Position - 0x178135
{
	switch (iParam0)
	{
		case 0:
			Local_182 = { 1103.0139f, -233.03737f, 56.13004f };
			Local_183 = { 1073.1909f, -214.8478f, 66.059296f };
			fLocal_186 = 30f;
			Local_184 = { 1093.5886f, -248.5926f, 56.88639f };
			Local_185 = { 1063.7744f, -230.14253f, 66.67847f };
			break;
		case 1:
			Local_182 = { 1044.1819f, -324.59036f, 49.334076f };
			Local_183 = { 1016.7097f, -307.73825f, 64.81343f };
			fLocal_186 = 30f;
			Local_184 = { 1007.98315f, -320.61588f, 48.454296f };
			Local_185 = { 1036.0067f, -337.4204f, 64.4808f };
			break;
		case 2:
			Local_182 = { 916.599f, -419.8782f, 35.62748f };
			Local_183 = { 910.37933f, -383.88257f, 47.54339f };
			fLocal_186 = 7f;
			Local_184 = { 912.13617f, -420.51614f, 35.380337f };
			Local_185 = { 906.8952f, -384.6779f, 47.249256f };
			break;
		case 3:
			Local_182 = { 757.7189f, -472.92395f, 19.253498f };
			Local_183 = { 696.5936f, -420.21146f, 35.460842f };
			fLocal_186 = 20.75f;
			Local_184 = { 744.91144f, -480.73734f, 19.065138f };
			Local_185 = { 682.5614f, -429.55334f, 37.0266f };
			break;
		case 4:
			Local_182 = { 680.3677f, -581.1792f, 14.214504f };
			Local_183 = { 599.81006f, -528.3059f, 33.40958f };
			fLocal_186 = 45f;
			Local_184 = { 667.3692f, -610.53564f, 13.854013f };
			Local_185 = { 582.84326f, -556.7818f, 33.403355f };
			break;
		case 5:
			Local_182 = { 644.2497f, -844.7504f, 12.367073f };
			Local_183 = { 526.86084f, -845.2521f, 35.9896f };
			fLocal_186 = 25f;
			Local_184 = { 644.3659f, -859.38776f, 12.596766f };
			Local_185 = { 526.8615f, -857.52075f, 36.32857f };
			break;
		case 6:
			Local_182 = { 634.972f, -1011.6402f, 10.925943f };
			Local_183 = { 539.6501f, -1024.0171f, 35.958515f };
			fLocal_186 = 25f;
			Local_184 = { 634.96124f, -1029.123f, 10.618461f };
			Local_185 = { 543.4893f, -1038.2615f, 35.9593f };
			break;
		case 7:
			Local_182 = { 645.7223f, -1191.2153f, 10.451977f };
			Local_183 = { 524.30176f, -1197.1669f, 39.611725f };
			fLocal_186 = 50f;
			Local_184 = { 645.7223f, -1228.9664f, 10.98015f };
			Local_185 = { 521.93787f, -1217.6073f, 39.47172f };
			break;
		case 8:
			Local_182 = { 642.12164f, -1295.7301f, 9.005976f };
			Local_183 = { 568.17017f, -1375.3508f, 20.129887f };
			fLocal_186 = 7f;
			Local_184 = { 644.7772f, -1298.1683f, 9.128529f };
			Local_185 = { 571.63416f, -1378.6444f, 20.358023f };
			break;
		case 9:
			Local_182 = { 686.5675f, -1444.7098f, 9.065001f };
			Local_183 = { 598.9328f, -1444.438f, 25.688457f };
			fLocal_186 = 25f;
			Local_184 = { 682.3027f, -1429.872f, 9.890836f };
			Local_185 = { 593.82166f, -1432.9955f, 25.600723f };
			break;
		case 10:
			Local_182 = { 718.76166f, -1734.3129f, 9.082874f };
			Local_183 = { 615.0017f, -1725.8973f, 27.54585f };
			fLocal_186 = 30f;
			Local_184 = { 717.53546f, -1748.6456f, 9.363478f };
			Local_185 = { 614.21796f, -1734.8475f, 27.357079f };
			break;
		case 11:
			Local_182 = { 694.31647f, -2049.8057f, 0.009695f };
			Local_183 = { 618.6845f, -2040.0137f, 25.834118f };
			fLocal_186 = 30f;
			Local_184 = { 693.1836f, -2063.225f, 0.429037f };
			Local_185 = { 607.59436f, -2055.3264f, 26.918158f };
			break;
		case 12:
			Local_182 = { 642.66705f, -2494.5513f, 0.468485f };
			Local_183 = { 570.18066f, -2513.9587f, 11.787938f };
			fLocal_186 = 20f;
			Local_184 = { 647.0339f, -2506.2021f, 0.583701f };
			Local_185 = { 571.14154f, -2522.9753f, 10.450453f };
			break;
		case 13:
			Local_182 = { 691.82355f, -2558.2185f, 0.363352f };
			Local_183 = { 645.8863f, -2600.3113f, 9.898791f };
			fLocal_186 = 10.25f;
			Local_184 = { 695.79285f, -2561.0337f, 0.346731f };
			Local_185 = { 656.3919f, -2601.9717f, 9.643657f };
			break;
		case 14:
			Local_182 = { 723.6254f, -2562.1707f, 0.255647f };
			Local_183 = { 720.75195f, -2619.7695f, 15.732105f };
			fLocal_186 = 15f;
			Local_184 = { 735.76495f, -2561.935f, 0.311182f };
			Local_185 = { 736.1214f, -2618.7666f, 15.790609f };
			break;
		case 15:
			Local_182 = { 891.43866f, -2603.12f, 0f };
			Local_183 = { 704.49316f, -2634.7932f, 45f };
			fLocal_186 = 20f;
			Local_184 = { 893.2578f, -2616.235f, 0f };
			Local_185 = { 707.72614f, -2647.6956f, 45f };
			break;
		case 16:
			Local_182 = { -2669.587f, 2491.96f, 2.043799f };
			Local_183 = { -2617.7646f, 2841.5947f, 14.082197f };
			fLocal_186 = 26.5f;
			Local_184 = { -2687.6057f, 2494.8682f, 2.608733f };
			Local_185 = { -2637.0847f, 2846.8752f, 14.159884f };
			break;
		case 17:
			Local_182 = { -1986.1726f, 4521.799f, 0f };
			Local_183 = { -1809.9026f, 4699.5513f, 53.508797f };
			fLocal_186 = 17f;
			Local_184 = { -1995.6681f, 4531.2593f, 0f };
			Local_185 = { -1817.5435f, 4708.3945f, 53.50917f };
			break;
		case 18:
			Local_182 = { -526.0265f, 4472.4424f, 0f };
			Local_183 = { -505.57144f, 4335.7246f, 86.73311f };
			fLocal_186 = 10f;
			Local_184 = { -519.9281f, 4476.3457f, 0f };
			Local_185 = { -500.73132f, 4336.389f, 86.71289f };
			break;
		case 19:
			Local_182 = { 98.1615f, 3384.489f, 45.45169f };
			Local_183 = { 154.97403f, 3350.694f, 30.033585f };
			fLocal_186 = 8f;
			Local_184 = { 152.68018f, 3346.7935f, 45.021557f };
			Local_185 = { 95.57188f, 3380.0906f, 30.432842f };
			break;
		case 20:
			Local_182 = { 147.86061f, 3406.7961f, 38.036716f };
			Local_183 = { 126.132935f, 3416.9268f, 30.029865f };
			fLocal_186 = 14.5f;
			Local_184 = { 130.09163f, 3425.4172f, 38.056725f };
			Local_185 = { 151.87035f, 3415.3914f, 30.057804f };
			break;
		case 21:
			Local_182 = { 2830.9722f, 4967.1396f, 34.560127f };
			Local_183 = { 2818.7188f, 4992.2983f, 51.2909f };
			fLocal_186 = 10f;
			Local_184 = { 2826.7668f, 4964.185f, 34.10636f };
			Local_185 = { 2814.2163f, 4989.9834f, 51.21849f };
			break;
		case 22:
			Local_182 = { -151.57642f, 4264.417f, 31.047348f };
			Local_183 = { -193.19623f, 4224.604f, 43.87255f };
			fLocal_186 = 10f;
			Local_184 = { -148.38419f, 4261.0713f, 31.57409f };
			Local_185 = { -190.47188f, 4222.076f, 43.954426f };
			break;
		case 23:
			Local_182 = { -426.69186f, 2964.272f, 14.848002f };
			Local_183 = { -396.2298f, 2959.2776f, 23.506374f };
			fLocal_186 = 7f;
			Local_184 = { -425.0283f, 2967.8613f, 15.226991f };
			Local_185 = { -395.60727f, 2962.6067f, 24.38079f };
			break;
		case 24:
			Local_182 = { -192.34137f, 2864.9163f, 30.72595f };
			Local_183 = { -170.15094f, 2857.1282f, 43.941822f };
			fLocal_186 = 10f;
			Local_184 = { -192.01286f, 2871.6025f, 29.999426f };
			Local_185 = { -169.59575f, 2863.8384f, 44.032505f };
			break;
		case 25:
			Local_182 = { 2539.185f, 2228.7717f, 18.610205f };
			Local_183 = { 2574.3733f, 2169.4014f, 27.265978f };
			fLocal_186 = 10f;
			Local_184 = { 2543.7075f, 2231.4016f, 18.331003f };
			Local_185 = { 2578.0789f, 2171.5837f, 27.26057f };
			break;
		case 26:
			Local_182 = { 2954.0867f, 815.7209f, 0.037901f };
			Local_183 = { 2933.1892f, 796.4688f, 12.983917f };
			fLocal_186 = 35f;
			Local_184 = { 2966.1226f, 806.88885f, 0.544056f };
			Local_185 = { 2950.8013f, 786.78156f, 11.745959f };
			break;
		case 27:
			Local_182 = { 2329.6726f, -459.66476f, 70.24277f };
			Local_183 = { 2413.3838f, -361.21884f, 91.77886f };
			fLocal_186 = 12f;
			Local_184 = { 2324.752f, -455.52377f, 70.25145f };
			Local_185 = { 2407.4094f, -356.20032f, 91.43083f };
			break;
		case 28:
			Local_182 = { 1943.4285f, -753.251f, 80.17905f };
			Local_183 = { 1850.3645f, -760.95874f, 93.025215f };
			fLocal_186 = 7f;
			Local_184 = { 1943.366f, -758.28705f, 80.322914f };
			Local_185 = { 1851.3535f, -765.18066f, 92.935455f };
			break;
		case 29:
			Local_182 = { -271.2849f, -2414.9932f, -10f };
			Local_183 = { -542.9096f, -2225.856f, 52.650043f };
			fLocal_186 = 30f;
			Local_184 = { -279.83987f, -2427.2117f, -10f };
			Local_185 = { -551.26556f, -2237.7905f, 52.64634f };
			break;
		case 30:
			Local_182 = { -1483.0004f, 2691.4277f, -10f };
			Local_183 = { -1377.1682f, 2600.7688f, 15.955276f };
			fLocal_186 = 12f;
			Local_184 = { -1478.1521f, 2696.688f, -10f };
			Local_185 = { -1378.5032f, 2608.6978f, 15.609236f };
			break;
		case 31:
			Local_182 = { 222.15187f, -2343.4866f, 0.039199f };
			Local_183 = { 222.6849f, -2297.407f, 7.088753f };
			fLocal_186 = 12f;
			Local_184 = { 216.95901f, -2343.4866f, 0.207734f };
			Local_185 = { 216.60204f, -2295.445f, 7.424279f };
			break;
		case 32:
			Local_182 = { 346.46216f, -2244.374f, 0.159779f };
			Local_183 = { 346.83472f, -2389.5906f, 7.852059f };
			fLocal_186 = 20f;
			Local_184 = { 359.60904f, -2244.4678f, 0.129684f };
			Local_185 = { 355.40543f, -2390.2583f, 7.080691f };
			break;
		case 33:
			Local_182 = { -1859.6799f, -322.63574f, 56.16368f };
			Local_183 = { -1836.6136f, -335.41412f, 96.116104f };
			fLocal_186 = 7.5f;
			Local_184 = { -1860.2698f, -327.86343f, 57.543f };
			Local_185 = { -1837.2709f, -339.22272f, 95.69325f };
			break;
		case 34:
			Local_182 = { -680.26324f, -600.818f, 69.11289f };
			Local_183 = { -706.66125f, -600.7515f, 30.476036f };
			fLocal_186 = 31.5f;
			Local_184 = { -680.6077f, -618.36584f, 69.27496f };
			Local_185 = { -706.3596f, -618.23846f, 30.312347f };
			break;
		case 35:
			Local_182 = { -1468.0961f, -591.71576f, 67.055176f };
			Local_183 = { -1454.7f, -573.4518f, 29.56736f };
			fLocal_186 = 11.75f;
			Local_184 = { -1474.903f, -591.12146f, 67.08091f };
			Local_185 = { -1457.1731f, -568.1316f, 29.44059f };
			break;
		case 36:
			Local_182 = { -1544.9578f, -537.1475f, 72.443474f };
			Local_183 = { -1564.6162f, -551.1829f, 32.861633f };
			fLocal_186 = 11.75f;
			Local_184 = { -1541.0079f, -541.5494f, 71.61972f };
			Local_185 = { -1561.2189f, -555.86804f, 32.927902f };
			break;
		case 37:
			Local_182 = { 333.2108f, -2727.2737f, 20.716625f };
			Local_183 = { 333.4297f, -2791.609f, 41.990227f };
			fLocal_186 = 20f;
			Local_184 = { 343.11273f, -2727.2358f, 20.236126f };
			Local_185 = { 343.66782f, -2791.6023f, 41.379284f };
			break;
		case 38:
			Local_182 = { 1928.0713f, 6228.3555f, 43.493977f };
			Local_183 = { 2039.8823f, 6167.3975f, 55.46405f };
			fLocal_186 = 13f;
			Local_184 = { 1931.8202f, 6235.634f, 43.373817f };
			Local_185 = { 2039.5975f, 6176.5254f, 55.25597f };
			break;
		case 39:
			Local_182 = { -736.4309f, -1590.9208f, 10.808919f };
			Local_183 = { -710.81104f, -1516.3495f, -0.098598f };
			fLocal_186 = 15f;
			Local_184 = { -727.2307f, -1585.2212f, 11.78027f };
			Local_185 = { -700.02014f, -1511.7826f, -0.341655f };
			break;
		case 40:
			Local_182 = { -676.3775f, -1548.5526f, 12.337475f };
			Local_183 = { -659.329f, -1507.0629f, -0.788618f };
			fLocal_186 = 25f;
			Local_184 = { -654.203f, -1536.146f, 9.191055f };
			Local_185 = { -645.9954f, -1500.2194f, -2.406948f };
			break;
		case 41:
			Local_182 = { -624.2344f, -1537.0453f, 12.601933f };
			Local_183 = { -622.1749f, -1472.8766f, -0.292606f };
			fLocal_186 = 8f;
			Local_184 = { -615.4003f, -1536.65f, 12.402705f };
			Local_185 = { -619.7385f, -1472.9371f, -0.243267f };
			break;
		case 42:
			Local_182 = { -492.5057f, -1632.4572f, 24.3307f };
			Local_183 = { -418.2088f, -1487.4521f, 0f };
			fLocal_186 = 25f;
			Local_184 = { -486.2016f, -1636.095f, 24.208052f };
			Local_185 = { -398.76483f, -1490.4403f, 0f };
			break;
		case 43:
			Local_182 = { -359.3541f, -1639.6927f, 13.134555f };
			Local_183 = { -388.49548f, -1690.9452f, -0.183164f };
			fLocal_186 = 25f;
			Local_184 = { -378.15182f, -1705.6597f, 12.471957f };
			Local_185 = { -348.9591f, -1654.411f, 0.193478f };
			break;
		case 44:
			Local_182 = { -243.44357f, -1814.6228f, 25.694649f };
			Local_183 = { -183.99873f, -1780.6447f, -0.085802f };
			fLocal_186 = 25f;
			Local_184 = { -235.13191f, -1822.0938f, 25.865416f };
			Local_185 = { -175.51047f, -1788.2748f, -0.506062f };
			break;
		case 45:
			Local_182 = { 84.55537f, -2046.1588f, 13.307674f };
			Local_183 = { 17.93164f, -2045.1519f, -0.031946f };
			fLocal_186 = 25f;
			Local_184 = { 17.907875f, -2035.773f, 12.627057f };
			Local_185 = { 84.57207f, -2034.1838f, 0.048385f };
			break;
		case 46:
			Local_182 = { 221.50294f, -2232.7664f, 9.88676f };
			Local_183 = { 221.68253f, -2244.081f, 4.479149f };
			fLocal_186 = 8f;
			Local_184 = { 218.58301f, -2232.7664f, 9.886198f };
			Local_185 = { 218.72896f, -2244.081f, 4.535046f };
			break;
		case 47:
			Local_182 = { 221.65178f, -2184.6348f, 11.664567f };
			Local_183 = { 221.61394f, -2208.1372f, 5.876424f };
			fLocal_186 = 8f;
			Local_184 = { 217.89954f, -2184.6348f, 11.540504f };
			Local_185 = { 218.33266f, -2208.1372f, 5.864793f };
			break;
		case 48:
			Local_182 = { 2326.57f, 1096.0305f, 76.314575f };
			Local_183 = { 2290.332f, 1136.1307f, 58.857056f };
			fLocal_186 = 21f;
			Local_184 = { 2334.4534f, 1103.0668f, 76.26603f };
			Local_185 = { 2297.8457f, 1142.8969f, 58.84243f };
			break;
		case 49:
			Local_182 = { 2379.4421f, 1150.7755f, 58.796318f };
			Local_183 = { 2327.658f, 1212.3663f, 72.8333f };
			fLocal_186 = 12f;
			Local_184 = { 2374.0637f, 1146.2821f, 58.833305f };
			Local_185 = { 2320.8945f, 1209.5961f, 72.79299f };
			break;
		case 50:
			Local_182 = { -1179.4052f, -355.25543f, 56.53003f };
			Local_183 = { -1198.0641f, -357.8363f, 35.35551f };
			fLocal_186 = 12.5f;
			Local_184 = { -1178.3853f, -361.87842f, 56.150814f };
			Local_185 = { -1197.1038f, -364.70044f, 36.494755f };
			break;
		case 51:
			Local_182 = { -921.3846f, -384.93997f, 137.01813f };
			Local_183 = { -912.4324f, -429.22897f, 36.701126f };
			fLocal_186 = 16f;
			Local_184 = { -914.1658f, -387.94437f, 137.07936f };
			Local_185 = { -906.25336f, -424.69104f, 47.11882f };
			break;
		case 52:
			Local_182 = { -740.2564f, 246.45285f, 132.29219f };
			Local_183 = { -718.3602f, 201.00415f, 80.95571f };
			fLocal_186 = 22f;
			Local_184 = { -726.6429f, 253.06764f, 132.33194f };
			Local_185 = { -705.5858f, 210.43356f, 78.70573f };
			break;
		case 53:
			Local_182 = { -771.2068f, 268.2729f, 132.16891f };
			Local_183 = { -778.3417f, 313.1148f, 84.27054f };
			fLocal_186 = 16f;
			Local_184 = { -770.8035f, 310.86252f, 137.41614f };
			Local_185 = { -763.06805f, 269.04404f, 83.31474f };
			break;
		case 54:
			Local_182 = { 259.22052f, 135.41461f, 136.70827f };
			Local_183 = { 279.23962f, 128.13794f, 100.8233f };
			fLocal_186 = 16f;
			Local_184 = { 261.96936f, 142.96764f, 136.68892f };
			Local_185 = { 281.72034f, 134.95508f, 100.77042f };
			break;
		case 55:
			Local_182 = { 393.54797f, -30.871658f, 152.66345f };
			Local_183 = { 369.9622f, -23.884607f, 88.35776f };
			fLocal_186 = 8f;
			Local_184 = { 390.5358f, -36.088818f, 152.78125f };
			Local_185 = { 368.12747f, -28.818884f, 88.69447f };
			break;
		case 56:
			Local_182 = { 114.31391f, -648.42975f, 261.8488f };
			Local_183 = { 131.07816f, -733.7684f, 39.343933f };
			fLocal_186 = 20f;
			Local_184 = { 124.8467f, -646.65753f, 261.8488f };
			Local_185 = { 140.05025f, -737.427f, 39.349304f };
			break;
		case 57:
			Local_182 = { -215.91899f, -823.8436f, 126.02239f };
			Local_183 = { -193.22368f, -761.77814f, 27.913818f };
			fLocal_186 = 20f;
			Local_184 = { -225.39696f, -820.39374f, 126.08122f };
			Local_185 = { -202.94325f, -758.257f, 27.47734f };
			break;
		case 58:
			Local_182 = { -296.4725f, -802.08154f, 95.401085f };
			Local_183 = { -278.1352f, -747.7841f, 50.40046f };
			fLocal_186 = 20f;
			Local_184 = { -305.46024f, -798.8369f, 95.48194f };
			Local_185 = { -285.73764f, -745.0959f, 49.576508f };
			break;
		case 59:
			Local_182 = { -292.30344f, -823.3569f, 95.376205f };
			Local_183 = { -258.59906f, -835.56323f, 27.979462f };
			fLocal_186 = 20f;
			Local_184 = { -288.92062f, -814.02203f, 95.375565f };
			Local_185 = { -255.2116f, -826.25604f, 27.737495f };
			break;
		case 60:
			Local_182 = { -256.35886f, -714.78375f, 110.16166f };
			Local_183 = { -212.90544f, -730.53204f, 32.21946f };
			fLocal_186 = 20f;
			Local_184 = { -253.77232f, -705.6632f, 110.17357f };
			Local_185 = { -210.05878f, -722.6748f, 32.465363f };
			break;
		case 61:
			Local_182 = { 1808.2145f, 1949.2458f, 71.73707f };
			Local_183 = { 1837.9062f, 2127.2832f, 52.80491f };
			fLocal_186 = 9.75f;
			Local_184 = { 1802.7859f, 1950.2617f, 71.74002f };
			Local_185 = { 1831.9944f, 2127.4326f, 52.83893f };
			break;
		case 62:
			Local_182 = { 2388.733f, 2931.941f, 46.62681f };
			Local_183 = { 2426.6807f, 2883.0662f, 36.215237f };
			fLocal_186 = 10f;
			Local_184 = { 2392.5466f, 2934.8672f, 46.626797f };
			Local_185 = { 2430.3325f, 2885.9084f, 36.28148f };
			break;
		case 63:
			Local_182 = { 2700.0557f, 4836.381f, 42.078537f };
			Local_183 = { 2685.6733f, 4893.3804f, 30.908669f };
			fLocal_186 = 20.75f;
			Local_184 = { 2685.6719f, 4821.653f, 42.184708f };
			Local_185 = { 2672.8123f, 4880.3564f, 31.133106f };
			break;
		case 64:
			Local_182 = { -1053.4464f, 4766.245f, 234.32512f };
			Local_183 = { -1040.2634f, 4737.1567f, 204.49164f };
			fLocal_186 = 5f;
			Local_184 = { -1051.4143f, 4767.193f, 234.4293f };
			Local_185 = { -1037.9542f, 4738.3545f, 204.52815f };
			break;
	}
}

void func_889(var uParam0, var uParam1)//Position - 0x179A75
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	if (BitTest(uParam1->f_5517, 17))
	{
		if (!__LIB_0__::func_864(&(uParam1->f_8562)))
		{
			__LIB_0__::func_795(&(uParam1->f_8562), 0, 0);
		}
		else if (__LIB_0__::func_937(&(uParam1->f_8562), 5000, 0))
		{
			Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_235 = 0;
			__LIB_0__::func_794(&(uParam1->f_8562));
			MISC::CLEAR_BIT(&(uParam1->f_5517), 17);
		}
	}
	else if (!BitTest(uParam1->f_5517, 15))
	{
		if (Global_2689235[iLocal_1137 /*453*/].f_235)
		{
			MISC::SET_BIT(&(uParam1->f_5517), 15);
			MISC::SET_BIT(&(uParam1->f_5517), 16);
		}
		iLocal_1137++;
		if (iLocal_1137 >= 32)
		{
			iLocal_1137 = 0;
		}
	}
	if (BitTest(uParam1->f_5517, 15))
	{
		if ((uParam0[uParam1->f_8561 /*303*/])->f_218 == 0 || BitTest(uParam1->f_5517, 16))
		{
			iVar0 = 0;
			while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
			{
				if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
				{
					iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0));
					if (iVar1 != PLAYER::PLAYER_ID())
					{
						iVar2 = PLAYER::GET_PLAYER_PED(iVar1);
						if (PED::IS_PED_IN_ANY_VEHICLE(iVar2, false))
						{
							iVar3 = PED::GET_VEHICLE_PED_IS_IN(iVar2, false);
							AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iVar3, 0f);
							AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iVar3, "MP_RACE_NPC_CAR_Group", 0f);
						}
					}
				}
				iVar0++;
			}
			if (BitTest(uParam1->f_5517, 16))
			{
				MISC::SET_BIT(&(uParam1->f_5517), 17);
			}
			MISC::CLEAR_BIT(&(uParam1->f_5517), 15);
			MISC::CLEAR_BIT(&(uParam1->f_5517), 16);
		}
	}
}

void func_890(var uParam0)//Position - 0x179D46
{
	if (!BitTest(Global_4718592.f_32, 10))
	{
		return;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_5441))
		{
			uParam0->f_9931 = VEHICLE::GET_VEHICLE_BODY_HEALTH(uParam0->f_5441);
			if (__LIB_18__::func_689())
			{
				uParam0->f_10227[0] = VEHICLE::GET_TYRE_HEALTH(uParam0->f_5441, 0);
				uParam0->f_10227[1] = VEHICLE::GET_TYRE_HEALTH(uParam0->f_5441, 1);
				uParam0->f_10227[2] = VEHICLE::GET_TYRE_HEALTH(uParam0->f_5441, 4);
				uParam0->f_10227[3] = VEHICLE::GET_TYRE_HEALTH(uParam0->f_5441, 5);
			}
		}
	}
}

int func_891(var uParam0)//Position - 0x17A3BF
{
	if (uParam0->f_571 == 0)
	{
		return 1;
	}
	return 0;
}

int func_892(int iParam0, int iParam1)//Position - 0x17A436
{
	if (__LIB_1__::func_188(iParam0))
	{
		switch (iParam1)
		{
			case 1:
			case 2:
				return 1;
				break;
			}
	}
	return 0;
}

int func_893(bool bParam0)//Position - 0x17A4C8
{
	if (bParam0)
	{
		return 500;
	}
	return 3000;
}

float func_894(bool bParam0)//Position - 0x17A520
{
	if (bParam0)
	{
		return 0.1f;
	}
	return 0.7f;
}

bool func_895(int iParam0)//Position - 0x17A53A
{
	return ((VEHICLE::IS_THIS_MODEL_A_CAR(iParam0) || VEHICLE::IS_THIS_MODEL_A_BICYCLE(iParam0)) || VEHICLE::IS_THIS_MODEL_A_BIKE(iParam0));
}

int func_896(var uParam0, int iParam1)//Position - 0x17A690
{
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(*uParam0, false) || iParam1)
		{
			if (ENTITY::IS_ENTITY_IN_WATER(*uParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_897(var uParam0, int iParam1)//Position - 0x17B610
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (uParam0->f_883[iVar0 /*42*/].f_1 == iParam1)
		{
			return iVar0 + 1;
		}
		iVar0++;
	}
	return 0;
}

int func_898(var uParam0)//Position - 0x17B960
{
	return uParam0->f_543;
}

void func_899(var uParam0)//Position - 0x17B9F3
{
	uParam0->f_4127 = NETWORK::GET_NETWORK_TIME();
	uParam0->f_4129 = NETWORK::GET_NETWORK_TIME();
	uParam0->f_4131 = NETWORK::GET_NETWORK_TIME();
	uParam0->f_4133 = NETWORK::GET_NETWORK_TIME();
	uParam0->f_4135 = NETWORK::GET_NETWORK_TIME();
	uParam0->f_4141 = NETWORK::GET_NETWORK_TIME();
}

void func_900(var uParam0)//Position - 0x17BBF1
{
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_5443))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			uParam0->f_5443 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		}
		else
		{
			uParam0->f_5443 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		}
	}
}

void func_901()//Position - 0x17C66A
{
	if (PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 79 /*INPUT_VEH_LOOK_BEHIND*/) || PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 231 /*INPUT_SCRIPT_RS*/))
	{
		NETWORK::NETWORK_SET_LOCAL_PLAYER_SYNC_LOOK_AT(true);
	}
	else
	{
		NETWORK::NETWORK_SET_LOCAL_PLAYER_SYNC_LOOK_AT(false);
	}
}

void func_902(var uParam0, bool bParam1)//Position - 0x17C94E
{
	if (bParam1)
	{
		if (!BitTest(uParam0->f_5513, 1))
		{
			VEHICLE::SET_VEHICLE_USE_BOOST_BUTTON_FOR_WHEEL_RETRACT(true);
			MISC::SET_BIT(&(uParam0->f_5513), 1);
		}
	}
	else if (BitTest(uParam0->f_5513, 1))
	{
		VEHICLE::SET_VEHICLE_USE_BOOST_BUTTON_FOR_WHEEL_RETRACT(false);
		MISC::CLEAR_BIT(&(uParam0->f_5513), 1);
	}
}

void func_903(int iParam0)//Position - 0x17CE4E
{
	if (iParam0 == 1)
	{
		Global_1836592 = 1;
	}
	else
	{
		Global_1836592 = 0;
	}
}

void func_904()//Position - 0x17E5C0
{
	int iVar0;
	int iVar1;
	if ((((BitTest(Global_4718592.f_31, 1) && !Global_1574964) && !Global_1931426) && !__LIB_1__::func_129()) && !__LIB_1__::func_130())
	{
		iVar0 = PLAYER::PLAYER_PED_ID();
		if ((!PED::IS_PED_INJURED(iVar0) && ENTITY::DOES_ENTITY_EXIST(iVar0)) && PED::IS_PED_IN_ANY_VEHICLE(iVar0, false))
		{
			iVar1 = PED::GET_VEHICLE_PED_IS_IN(iVar0, false);
			if (ENTITY::DOES_ENTITY_EXIST(iVar1) && VEHICLE::GET_VEHICLE_BODY_HEALTH(iVar1) <= 0f)
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar1))
				{
					if (!__LIB_1__::func_11())
					{
						PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID(), false);
						ENTITY::SET_ENTITY_PROOFS(PLAYER::PLAYER_PED_ID(), false, false, false, false, false, false, false, false);
					}
					NETWORK::NETWORK_EXPLODE_VEHICLE(iVar1, true, true, -1);
				}
				else
				{
					NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(iVar1);
				}
			}
		}
	}
}

void func_905(var uParam0)//Position - 0x17EC3A
{
	if (PAD::IS_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 73 /*INPUT_VEH_DUCK*/))
	{
		if (uParam0->f_1 != 1)
		{
			uParam0->f_1 = 1;
		}
		else
		{
			uParam0->f_1 = 2;
		}
	}
}

void func_906(var uParam0)//Position - 0x17ED28
{
	if (NETWORK::PARTICIPANT_ID_TO_INT() > -1)
	{
		if (__LIB_1__::func_11())
		{
			if (!BitTest((uParam0[NETWORK::PARTICIPANT_ID_TO_INT() /*303*/])->f_229, 1))
			{
				MISC::SET_BIT(&((uParam0[NETWORK::PARTICIPANT_ID_TO_INT() /*303*/])->f_229), 1);
			}
		}
		else if (BitTest((uParam0[NETWORK::PARTICIPANT_ID_TO_INT() /*303*/])->f_229, 1))
		{
			MISC::CLEAR_BIT(&((uParam0[NETWORK::PARTICIPANT_ID_TO_INT() /*303*/])->f_229), 1);
		}
	}
}

bool func_907(int iParam0, bool bParam1)//Position - 0x17F532
{
	if (!bParam1)
	{
		return BitTest(Global_4718592.f_95507[iParam0 /*58*/].f_28, 10);
	}
	if (!__LIB_0__::func_86(Global_4718592.f_95507[iParam0 /*58*/].f_3))
	{
		return BitTest(Global_4718592.f_95507[iParam0 /*58*/].f_28, 11);
	}
	return BitTest(Global_4718592.f_95507[iParam0 /*58*/].f_28, 10);
}

int func_908(bool bParam0, var uParam1, var uParam2, bool bParam3)//Position - 0x17F78E
{
	bParam0 = bParam0;
	while (bParam0 >= 0)
	{
		if (uParam1 && !__LIB_0__::func_86(Global_4718592.f_95507[bParam0 /*58*/].f_3))
		{
			if (Global_4718592.f_95507[bParam0 /*58*/].f_39 > -1)
			{
				return Global_4718592.f_95507[bParam0 /*58*/].f_39;
			}
		}
		else if (Global_4718592.f_95507[bParam0 /*58*/].f_38 > -1)
		{
			return Global_4718592.f_95507[bParam0 /*58*/].f_38;
		}
		if (!BitTest(uParam2->f_5513, 22) && !bParam3)
		{
			if (bParam0 == 0)
			{
				bParam0 = Global_4718592.f_107224;
				if (bParam0 >= __LIB_16__::func_696())
				{
					bParam0 = (__LIB_16__::func_696() - 1);
				}
				MISC::SET_BIT(&(uParam2->f_5513), 22);
			}
		}
		bParam0 = (bParam0 + -1);
	}
	return -1;
}

void func_909(var uParam0)//Position - 0x17F9B1
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			(uParam0[iVar0 /*5*/])->f_1 = iVar0;
			(*uParam0)[iVar0 /*5*/] = PLAYER::GET_PLAYER_NAME(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)));
		}
		else
		{
			(uParam0[iVar0 /*5*/])->f_1 = -1;
		}
		iVar0++;
	}
}

void func_910(bool bParam0)//Position - 0x17FA03
{
	if (bParam0)
	{
		VEHICLE::SET_SPEED_BOOST_EFFECT_DISABLED(true);
		VEHICLE::SET_SLOW_DOWN_EFFECT_DISABLED(true);
	}
	else
	{
		VEHICLE::SET_SPEED_BOOST_EFFECT_DISABLED(false);
		VEHICLE::SET_SLOW_DOWN_EFFECT_DISABLED(false);
	}
}

void func_911(var uParam0)//Position - 0x17FC74
{
	__LIB_0__::func_795(&(uParam0->f_774), 0, 0);
}

void func_912()//Position - 0x17FC87
{
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 33 /*INPUT_MOVE_DOWN_ONLY*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 34 /*INPUT_MOVE_LEFT_ONLY*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 30 /*INPUT_MOVE_LR*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 35 /*INPUT_MOVE_RIGHT_ONLY*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 31 /*INPUT_MOVE_UD*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 32 /*INPUT_MOVE_UP_ONLY*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 142 /*INPUT_MELEE_ATTACK_ALTERNATE*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 141 /*INPUT_MELEE_ATTACK_HEAVY*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 140 /*INPUT_MELEE_ATTACK_LIGHT*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 263 /*INPUT_MELEE_ATTACK1*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 264 /*INPUT_MELEE_ATTACK2*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 143 /*INPUT_MELEE_BLOCK*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 25 /*INPUT_AIM*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 44 /*INPUT_COVER*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 55 /*INPUT_DIVE*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 36 /*INPUT_DUCK*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 37 /*INPUT_SELECT_WEAPON*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 21 /*INPUT_SPRINT*/, true);
}

int func_913(int iParam0)//Position - 0x17FF79
{
	int iVar0;
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar0 = VEHICLE::GET_VEHICLE_DOOR_LOCK_STATUS(iParam0);
		if (iVar0 == 4 || iVar0 == 2)
		{
			return 1;
		}
	}
	return 0;
}

void func_914(int iParam0, int iParam1)//Position - 0x180367
{
	float fVar0;
	if (((((((((((((!VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(iParam0) || iParam1 == joaat("submersible")) || iParam1 == joaat("submersible2")) || iParam1 == joaat("ruiner2")) || iParam1 == joaat("oppressor")) || iParam1 == joaat("swift")) || iParam1 == joaat("alphaz1")) || iParam1 == joaat("microlight")) || iParam1 == joaat("ruiner2")) || iParam1 == joaat("molotok")) || iParam1 == joaat("akula")) || iParam1 == joaat("miljet")) && iParam1 != joaat("deluxo")) && iParam1 != joaat("stromberg"))
	{
		fVar0 = 1f;
		if (PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID()))
		{
			fVar0 = 50f;
		}
		PHYSICS::ACTIVATE_PHYSICS(iParam0);
		VEHICLE::SET_VEHICLE_FORWARD_SPEED(iParam0, fVar0);
	}
}

void func_915(var uParam0, bool bParam1)//Position - 0x1804A9
{
	int iVar0;
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_5441))
	{
		iVar0 = __LIB_0__::func_402(uParam0->f_5441);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iVar0, false))
			{
				if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iVar0, true))
				{
					if (bParam1 && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam0->f_5441))
					{
						NETWORK::NETWORK_FADE_OUT_ENTITY(uParam0->f_5441, true, true);
					}
					else
					{
						ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(&iVar0);
					}
				}
			}
		}
	}
}

void func_916(var uParam0, var uParam1)//Position - 0x18050D
{
	if (!BitTest(uParam1->f_5511, 5))
	{
		uParam1->f_5380 = { uParam0->f_815 };
		MISC::SET_BIT(&(uParam1->f_5511), 5);
	}
}

void func_917()//Position - 0x1808D1
{
	bool bVar0;
	if (__LIB_1__::func_146() >= 0)
	{
		bVar0 = false;
		while (bVar0 < 32)
		{
			if (BitTest(Global_1659950[__LIB_1__::func_146() /*26*/].f_25, bVar0))
			{
				MISC::CLEAR_BIT(&(Global_1659950[__LIB_1__::func_146() /*26*/].f_25), bVar0);
			}
			bVar0++;
		}
	}
}

void func_918(var uParam0, bool bParam1)//Position - 0x1817CC
{
	if (bParam1)
	{
		if (!BitTest(uParam0->f_5512, 19))
		{
			MISC::SET_BIT(&(uParam0->f_5512), 19);
		}
	}
	else if (BitTest(uParam0->f_5512, 19))
	{
		MISC::CLEAR_BIT(&(uParam0->f_5512), 19);
	}
}

Vector3 func_919(int iParam0)//Position - 0x182CA4
{
	switch (iParam0)
	{
		case 0:
			return 0f, 0f, 2.5f;
		case 1:
			return (7.5f / 2f), 0f, 2.5f;
		case 2:
			return (-7.5f / 2f), 0f, 2.5f;
		case 3:
			return 0f, (7.5f / 2f), 2.5f;
		case 4:
			return 0f, (-7.5f / 2f), 2.5f;
		case 5:
			return (7.5f / 2f), (7.5f / 2f), 2.5f;
		case 6:
			return (-7.5f / 2f), (-7.5f / 2f), 2.5f;
		case 7:
			return (7.5f / 2f), (-7.5f / 2f), 2.5f;
		case 8:
			return (-7.5f / 2f), (7.5f / 2f), 2.5f;
		default:
	}
	return 0f, 0f, 0f;
}

float func_920(int iParam0, bool bParam1)//Position - 0x182D8E
{
	if ((!bParam1 && BitTest(Global_4718592.f_95507[iParam0 /*58*/].f_29, 20)) || (bParam1 && BitTest(Global_4718592.f_95507[iParam0 /*58*/].f_29, 21)))
	{
		if (bParam1)
		{
			return Global_4718592.f_95507[iParam0 /*58*/].f_41;
		}
		else
		{
			return Global_4718592.f_95507[iParam0 /*58*/].f_40;
		}
	}
	return 100f;
}

float func_921(int iParam0, bool bParam1)//Position - 0x182E03
{
	if ((!bParam1 && BitTest(Global_4718592.f_95507[iParam0 /*58*/].f_29, 18)) || (bParam1 && BitTest(Global_4718592.f_95507[iParam0 /*58*/].f_29, 19)))
	{
		return 6f;
	}
	if ((!bParam1 && BitTest(Global_4718592.f_95507[iParam0 /*58*/].f_29, 20)) || (bParam1 && BitTest(Global_4718592.f_95507[iParam0 /*58*/].f_29, 21)))
	{
		return 250f;
	}
	return 9.5f;
}

float func_922(int iParam0, bool bParam1)//Position - 0x182E94
{
	if ((!bParam1 && BitTest(Global_4718592.f_95507[iParam0 /*58*/].f_29, 18)) || (bParam1 && BitTest(Global_4718592.f_95507[iParam0 /*58*/].f_29, 19)))
	{
		return 6f;
	}
	return 9.5f;
}

void func_923(var uParam0)//Position - 0x182EE1
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	if (uParam0->f_5322 != 0)
	{
		uParam0->f_5323 = (uParam0->f_5323 - 25);
		if (uParam0->f_5323 > 0)
		{
			HUD::GET_HUD_COLOUR(1, &iVar0, &iVar1, &iVar2, &uVar3);
			GRAPHICS::SET_CHECKPOINT_RGBA(uParam0->f_5322, iVar0, iVar1, iVar2, uParam0->f_5323);
			GRAPHICS::SET_CHECKPOINT_RGBA2(uParam0->f_5322, iVar0, iVar1, iVar2, uParam0->f_5323);
		}
		else
		{
			GRAPHICS::DELETE_CHECKPOINT(uParam0->f_5322);
			uParam0->f_5322 = 0;
		}
	}
}

int func_924()//Position - 0x18309B
{
	int iVar0;
	iVar0 = CLOCK::GET_CLOCK_HOURS();
	if (iVar0 > 6 && iVar0 < 20)
	{
		return 1;
	}
	return 0;
}

void func_925(bool bParam0)//Position - 0x183B29
{
	char* sVar0;
	sVar0 = "321GO";
	if (bParam0)
	{
		sVar0 = "GO";
	}
	AUDIO::PLAY_SOUND_FRONTEND(-1, sVar0, "Open_Wheel_Racing_Start_Lights_Sounds", true);
}

void func_926(var uParam0, int iParam1)//Position - 0x183B51
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_COUNTDOWN_LIGHTS");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_927(bool bParam0)//Position - 0x1840D3
{
	int iVar0;
	if (bParam0)
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			Global_1648034.f_1064[1 /*33*/][iVar0] = 1;
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			Global_1648034.f_1064[1 /*33*/][iVar0] = 0;
			iVar0++;
		}
	}
}

bool func_928(var uParam0, var uParam1)//Position - 0x185F50
{
	if (uParam0->f_2472 == 1)
	{
		return 1;
	}
	return (uParam1[NETWORK::PARTICIPANT_ID_TO_INT() /*303*/])->f_254 == joaat("rcbandito");
}

void func_929(int iParam0, int iParam1, bool bParam2, bool bParam3)//Position - 0x189C8C
{
	switch (iParam0)
	{
		case 0:
			VEHICLE::SET_SPECIAL_FLIGHT_MODE_TARGET_RATIO(iParam1, 0f);
			__LIB_2__::func_652(iParam1, 0);
			if (bParam3)
			{
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 357 /*INPUT_VEH_TRANSFORM*/, true);
			}
			break;
		case 1:
			__LIB_2__::func_653(iParam1, 1);
			__LIB_2__::func_652(iParam1, 0);
			break;
		case 2:
			if (bParam3)
			{
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 357 /*INPUT_VEH_TRANSFORM*/, true);
			}
			VEHICLE::SET_SPECIAL_FLIGHT_MODE_TARGET_RATIO(iParam1, 1f);
			__LIB_2__::func_653(iParam1, 1);
			__LIB_2__::func_652(iParam1, 0);
			if (bParam2)
			{
				VEHICLE::SET_SPECIAL_FLIGHT_MODE_RATIO(iParam1, (0.75f - MISC::GET_FRAME_TIME()));
				bParam2 = false;
			}
			break;
		case 4:
			__LIB_2__::func_653(iParam1, 1);
			__LIB_2__::func_652(iParam1, 1);
			if (bParam2)
			{
				if (!VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(iParam1) || Global_2667225.f_2892)
				{
					VEHICLE::SET_SPECIAL_FLIGHT_MODE_TARGET_RATIO(iParam1, 1f);
					VEHICLE::SET_SPECIAL_FLIGHT_MODE_RATIO(iParam1, (0.75f - MISC::GET_FRAME_TIME()));
					bParam2 = false;
				}
			}
			break;
		case 3:
			__LIB_2__::func_653(iParam1, 1);
			__LIB_2__::func_652(iParam1, 1);
			VEHICLE::SET_SPECIAL_FLIGHT_MODE_TARGET_RATIO(iParam1, 1f);
			if (bParam3)
			{
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 357 /*INPUT_VEH_TRANSFORM*/, true);
			}
			if (bParam2)
			{
				VEHICLE::SET_SPECIAL_FLIGHT_MODE_RATIO(iParam1, (0.75f - MISC::GET_FRAME_TIME()));
				bParam2 = false;
			}
			break;
	}
}

bool func_930(var uParam0)//Position - 0x189E53
{
	return BitTest(uParam0->f_823, 14);
}

void func_931(var uParam0, int iParam1)//Position - 0x189EE7
{
	(uParam0[NETWORK::PARTICIPANT_ID_TO_INT() /*303*/])->f_264 = iParam1;
}

void func_932()//Position - 0x189EFD
{
	STREAMING::CLEAR_FOCUS();
	if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
	{
		STREAMING::NEW_LOAD_SCENE_STOP();
	}
}

int func_933()//Position - 0x189F14
{
	if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
	{
		if (STREAMING::IS_NEW_LOAD_SCENE_LOADED())
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

int func_934(var uParam0)//Position - 0x189F55
{
	if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
	{
		return 0;
	}
	return 1;
}

int func_935(var uParam0)//Position - 0x18A136
{
	return (uParam0[NETWORK::PARTICIPANT_ID_TO_INT() /*303*/])->f_264;
}

bool func_936(var uParam0)//Position - 0x18A20C
{
	return BitTest(uParam0->f_824, 14);
}

bool func_937(var uParam0, int iParam1)//Position - 0x18F2C0
{
	return BitTest((uParam0[iParam1 /*303*/])->f_7, 1);
}

bool func_938(var uParam0, int iParam1)//Position - 0x18F2EE
{
	return BitTest((uParam0[iParam1 /*303*/])->f_7, 0);
}

void func_939(var uParam0)//Position - 0x18F301
{
	if (uParam0->f_16 == 0)
	{
		PAD::INIT_PC_SCRIPTED_CONTROLS("NET GTA RACE");
		uParam0->f_16 = 1;
	}
}

void func_940(var uParam0)//Position - 0x18F621
{
	if (!STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
	{
		STREAMING::SET_FOCUS_POS_AND_VEL(*uParam0, 0f, 0f, 0f);
		STREAMING::NEW_LOAD_SCENE_START_SPHERE(*uParam0, 30f, 0);
	}
}

char* func_941(int iParam0)//Position - 0x19ECA3
{
	if (Global_1659931 >= 0 && Global_1659931 < AUDIO::GET_NUM_UNLOCKED_RADIO_STATIONS())
	{
		return AUDIO::GET_RADIO_STATION_NAME(Global_1659931);
	}
	if (iParam0 == 0)
	{
		return "RADIO_OFF" /* GXT: Off */;
	}
	return "OFF";
}

int func_942(var uParam0)//Position - 0x19FB3E
{
	return uParam0->f_4655;
}

float func_943(float fParam0)//Position - 0x19FFA2
{
	float fVar0;
	fVar0 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, fParam0);
	fVar0 = (fVar0 - (fParam0 / 2f));
	return fVar0;
}

void func_944(var uParam0, int iParam1)//Position - 0x1A0026
{
	uParam0->f_5407 = iParam1;
}

int func_945(var uParam0)//Position - 0x1A0035
{
	return uParam0->f_5407;
}

int func_946()//Position - 0x1A0042
{
	if ((__LIB_10__::func_365() && Global_4718592.f_94883 > -1) && __LIB_2__::func_624(Global_4718592.f_94884[Global_4718592.f_94883]))
	{
		return 1;
	}
	return 0;
}

void func_947(var uParam0)//Position - 0x1A00F6
{
	if (Global_4456449.f_5 == 8 || Global_4456449.f_5 == 9)
	{
		iLocal_21 = uParam0->f_2277;
	}
}

void func_948()//Position - 0x1A024F
{
	Global_1574492 = 0;
	Global_1574508 = 0;
	Global_1574485 = 0;
	Global_1574481.f_3 = 0;
}

int func_949(var uParam0)//Position - 0x1A027F
{
	if (uParam0->f_571 == 2)
	{
		return 1;
	}
	return 0;
}

void func_950(bool bParam0)//Position - 0x1A02DF
{
	struct<3> Var0;
	struct<3> Var1;
	int iVar2;
	struct<3> Var3;
	struct<3> Var4;
	iVar2 = (Global_4718592.f_107224 - 1);
	Var3 = { 200f, 200f, 20f };
	if (iVar2 >= 0)
	{
		Var4 = { Global_4718592.f_95507[iVar2 /*58*/] };
		Var0 = { Var4 + Var3 };
		Var1 = { Var4 - Var3 };
		if (!bParam0)
		{
			if (!__LIB_0__::func_86(Var4))
			{
				VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Var0, Var1, false, true);
			}
		}
		else
		{
			PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(Var0, Var1, 1);
		}
	}
}

int func_951()//Position - 0x1A03D6
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (Global_4980736.f_195934[iVar0 /*111*/].f_10 == 9)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_952(var uParam0)//Position - 0x1A05E1
{
	(uParam0[NETWORK::PARTICIPANT_ID_TO_INT() /*303*/])->f_218 = 0;
}

void func_953(bool bParam0)//Position - 0x1A0B20
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (bParam0)
		{
			NETWORK::NETWORK_DISABLE_VOICE_BANDWIDTH_RESTRICTION(PLAYER::PLAYER_ID());
		}
		else
		{
			NETWORK::NETWORK_ENABLE_VOICE_BANDWIDTH_RESTRICTION(PLAYER::PLAYER_ID());
		}
	}
}

void func_954(var uParam0)//Position - 0x1A15D2
{
	if (PED::GET_PED_ARMOUR(PLAYER::PLAYER_PED_ID()) != 0)
	{
		*uParam0 = PED::GET_PED_ARMOUR(PLAYER::PLAYER_PED_ID());
	}
}

int func_955(int iParam0, int iParam1)//Position - 0x1A17C1
{
	if (Global_262145.f_25747 /* Tunable: DISABLERACERESPAWNINSAMEVEHICLECHECK */)
	{
		return 1;
	}
	if (VEHICLE::IS_THIS_MODEL_A_BIKE(iParam0))
	{
		return 0;
	}
	if (!Global_262145.f_25748 /* Tunable: DISABLERACERESPAWNINSAMEVEHICLEDOORSCHECK */)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1) && VEHICLE::GET_NUMBER_OF_VEHICLE_DOORS(iParam1) == 0)
		{
			return 0;
		}
	}
	return 1;
}

void func_956(bool bParam0)//Position - 0x1A18D7
{
	if (bParam0)
	{
		if (!BitTest(Global_2703735.f_1571.f_756, 20))
		{
			MISC::SET_BIT(&(Global_2703735.f_1571.f_756), 20);
		}
	}
	else if (BitTest(Global_2703735.f_1571.f_756, 20))
	{
		MISC::CLEAR_BIT(&(Global_2703735.f_1571.f_756), 20);
	}
}

void func_957(int iParam0)//Position - 0x1A1AC3
{
	if (iParam0 == 1)
	{
		Global_1836586 = 1;
	}
	else
	{
		Global_1836586 = 0;
	}
}

void func_958(int iParam0)//Position - 0x1A1ADE
{
	if (iParam0 == 1)
	{
		Global_1836595 = 1;
	}
	else
	{
		Global_1836595 = 0;
	}
}

void func_959(int iParam0)//Position - 0x1A1AF9
{
	if (iParam0 == 1)
	{
		Global_1836594 = 1;
	}
	else
	{
		Global_1836594 = 0;
	}
}

void func_960(int iParam0)//Position - 0x1A1B2F
{
	if (iParam0 == 1)
	{
		Global_1836588 = 1;
	}
	else
	{
		Global_1836588 = 0;
	}
}

void func_961(int iParam0)//Position - 0x1A1B4A
{
	if (iParam0 == 1)
	{
		Global_1836589 = 1;
	}
	else
	{
		Global_1836589 = 0;
	}
}

void func_962(int iParam0, bool bParam1)//Position - 0x1A1B65
{
	if (iParam0 == 1)
	{
		Global_1836584 = 1;
	}
	else
	{
		Global_1836584 = 0;
	}
	Global_1836585 = bParam1;
}

void func_963(int iParam0)//Position - 0x1A1B86
{
	if (iParam0 == 1)
	{
		Global_1836601 = 1;
	}
	else
	{
		Global_1836601 = 0;
	}
}

int func_964(var uParam0)//Position - 0x1A1F8F
{
	return 0;
	if (uParam0->f_546 == 1)
	{
		return 0;
	}
	return 0;
}

Vector3 func_965(int iParam0, float fParam1)//Position - 0x1A20A0
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	iVar0 = SYSTEM::FLOOR(((Global_4718592.f_110275 * 2f) / Global_4718592.f_110273));
	iVar1 = SYSTEM::FLOOR((Global_4718592.f_110276 / Global_4718592.f_110274));
	if (iVar0 == 0)
	{
		iVar0 = 1;
	}
	if (iVar1 == 0)
	{
		iVar1 = 1;
	}
	iVar2 = (iParam0 % iVar0);
	iVar3 = (iParam0 / iVar0);
	fVar4 = (((-Global_4718592.f_110273 * (SYSTEM::TO_FLOAT(iVar0) / 2f)) + (Global_4718592.f_110273 * SYSTEM::TO_FLOAT(iVar2))) + (Global_4718592.f_110273 * 0.5f));
	return OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Global_4718592.f_95507[0 /*58*/], fParam1, fVar4, (-4.5f - (Global_4718592.f_110274 * IntToFloat(iVar3))), 1f);
}

void func_966(var uParam0, int iParam1)//Position - 0x1A23AC
{
	(uParam0[NETWORK::PARTICIPANT_ID_TO_INT() /*303*/])->f_4 = iParam1;
}

void func_967()//Position - 0x1A4F8A
{
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE();
	STREAMING::SET_VEHICLE_POPULATION_BUDGET(3);
	STREAMING::SET_REDUCE_VEHICLE_MODEL_BUDGET(false);
	GRAPHICS::DISABLE_VEHICLE_DISTANTLIGHTS(false);
}

int func_968()//Position - 0x1A5142
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar1 = __LIB_0__::func_162();
	iVar0 = 0;
	while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			iVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0));
			if (iVar2 != PLAYER::PLAYER_ID())
			{
				if (PLAYER::GET_PLAYER_TEAM(iVar2) == PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()))
				{
					iVar1 = iVar2;
				}
			}
		}
		iVar0++;
	}
	return iVar1;
}

void func_969()//Position - 0x1A576A
{
	Local_180[0 /*3*/] = { 1083f, -231f, 60f };
	Local_180[1 /*3*/] = { 1024f, -325f, 60f };
	Local_180[2 /*3*/] = { 910f, -401f, 43f };
	Local_180[3 /*3*/] = { 721f, -457f, 26f };
	Local_180[4 /*3*/] = { 643f, -579f, 26f };
	Local_180[5 /*3*/] = { 590f, -851f, 26f };
	Local_180[6 /*3*/] = { 590f, -1023f, 16f };
	Local_180[7 /*3*/] = { 582f, -1205f, 24f };
	Local_180[8 /*3*/] = { 608f, -1335f, 16f };
	Local_180[9 /*3*/] = { 640f, -1434f, 16f };
	Local_180[10 /*3*/] = { 671f, -1742f, 20f };
	Local_180[11 /*3*/] = { 651f, -2046f, 16f };
	Local_180[12 /*3*/] = { 603f, -2505f, 9f };
	Local_180[13 /*3*/] = { 673f, -2582f, 4f };
	Local_180[14 /*3*/] = { 728f, -2594f, 10f };
	Local_180[15 /*3*/] = { 794f, -2624f, 27f };
	Local_180[16 /*3*/] = { -2663f, 2594f, 7.5f };
	Local_180[17 /*3*/] = { -1902f, 4617f, 30f };
	Local_180[18 /*3*/] = { -513f, 4427f, 40f };
	Local_180[19 /*3*/] = { 126f, 3366f, 40f };
	Local_180[20 /*3*/] = { 143f, 3418f, 36f };
	Local_180[21 /*3*/] = { 2822f, 4978f, 40f };
	Local_180[22 /*3*/] = { -162f, 4249f, 40f };
	Local_180[23 /*3*/] = { -408f, 2964f, 20f };
	Local_180[24 /*3*/] = { -181f, 2862f, 38f };
	Local_180[25 /*3*/] = { 2558f, 2201f, 24f };
	Local_180[26 /*3*/] = { 2950f, 803f, 8f };
	Local_180[27 /*3*/] = { 2369f, -409f, 80f };
	Local_180[28 /*3*/] = { 1906f, -755f, 84f };
	Local_180[29 /*3*/] = { -403f, -2333f, 40f };
	Local_180[30 /*3*/] = { -1429f, 2649f, 10f };
	Local_180[31 /*3*/] = { 219f, -2315f, 5f };
	Local_180[32 /*3*/] = { 350f, -2315f, 5f };
	Local_180[33 /*3*/] = { -1848f, -333f, 75f };
	Local_180[34 /*3*/] = { -693f, -608f, 69f };
	Local_180[35 /*3*/] = { -1461f, -582f, 53f };
	Local_180[36 /*3*/] = { -1553f, -546f, 59f };
	Local_180[37 /*3*/] = { 338f, -2758f, 23f };
	Local_180[38 /*3*/] = { 1985f, 6201f, 53f };
	Local_180[39 /*3*/] = { -713f, -1538f, 13f };
	Local_180[40 /*3*/] = { -659f, -1518f, 13f };
	Local_180[41 /*3*/] = { -620f, -1502f, 16f };
	Local_180[42 /*3*/] = { -445f, -1575f, 26f };
	Local_180[43 /*3*/] = { -373f, -1680f, 19f };
	Local_180[44 /*3*/] = { -212f, -1805f, 29f };
	Local_180[45 /*3*/] = { 47f, -2040f, 18f };
	Local_180[46 /*3*/] = { 223f, -2240f, 6f };
	Local_180[47 /*3*/] = { 218f, -2189f, 6f };
	Local_180[48 /*3*/] = { 2308f, 1124f, 78f };
	Local_180[49 /*3*/] = { 2349f, 1174f, 79f };
	Local_180[50 /*3*/] = { -1186f, -365f, 46f };
	Local_180[51 /*3*/] = { -916f, -407f, 93f };
	Local_180[52 /*3*/] = { -726f, 235f, 105f };
	Local_180[53 /*3*/] = { -774f, 286f, 112f };
	Local_180[54 /*3*/] = { 271f, 134f, 125f };
	Local_180[55 /*3*/] = { 377f, -28f, 125f };
	Local_180[56 /*3*/] = { 121f, -703f, 150f };
	Local_180[57 /*3*/] = { -204f, -784f, 74f };
	Local_180[58 /*3*/] = { -287f, -774f, 72f };
	Local_180[59 /*3*/] = { -272f, -824f, 71f };
	Local_180[60 /*3*/] = { -230f, -723f, 80f };
	Local_180[61 /*3*/] = { 1822f, 2044f, 62f };
	Local_180[62 /*3*/] = { 2410f, 2907f, 44f };
	Local_180[63 /*3*/] = { 2686f, 4858f, 36f };
	Local_180[64 /*3*/] = { -1046f, 4751f, 244f };
}

void func_970(var uParam0, int iParam1)//Position - 0x1A5F96
{
	uParam0->f_5406 = iParam1;
}

bool func_971()//Position - 0x1A60CE
{
	return Global_4718592.f_608 != 0;
}

int func_972(var uParam0)//Position - 0x1A6670
{
	int iVar0;
	int iVar1;
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 7)
	{
		if (uParam0->f_8619[iVar1] == -1)
		{
			iVar0 = iVar1;
			iVar1 = 8;
		}
		iVar1++;
	}
	return iVar0;
}

int func_973(int iParam0)//Position - 0x1A6819
{
	if (!__LIB_0__::func_86(Global_4980736.f_195934[iParam0 /*111*/][0 /*3*/]))
	{
		return 1;
	}
	return 0;
}

void func_974()//Position - 0x1A6858
{
	AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("DLC_STUNT/STUNT_RACE_01");
	AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("DLC_STUNT/STUNT_RACE_02");
	AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("DLC_STUNT/STUNT_RACE_03");
	AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("HUD_321_GO");
	AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("MP_RACES_SLIPSTREAM");
	AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("DLC_AIRRACES/AIR_RACE_01");
	AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("DLC_AIRRACES/AIR_RACE_02");
	AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("DLC_HEIST3/Circuit_Racing");
	AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("DLC_MPSUM2/Island_Races");
}

int func_975()//Position - 0x1A68AF
{
	int iVar0;
	iVar0 = Global_4718592.f_107224;
	if (iVar0 == __LIB_16__::func_696())
	{
		iVar0 = (__LIB_16__::func_696() - 1);
	}
	return (iVar0 - 1);
}

int func_976()//Position - 0x1A6AB3
{
	HUD::REQUEST_ADDITIONAL_TEXT("RACES", 0);
	HUD::REQUEST_ADDITIONAL_TEXT("FMMC", 2);
	if (HUD::HAS_THIS_ADDITIONAL_TEXT_LOADED("RACES", 0) && HUD::HAS_THIS_ADDITIONAL_TEXT_LOADED("FMMC", 2))
	{
		return 1;
	}
	return 0;
}

int func_977(var uParam0)//Position - 0x1A6AFE
{
	return uParam0->f_5406;
}

int func_978(var uParam0)//Position - 0x1A7B0F
{
	if (__LIB_2__::func_815(uParam0->f_9216, 5000, 0) && __LIB_0__::func_864(&(uParam0->f_9216)))
	{
		return 1;
	}
	__LIB_0__::func_627(&(uParam0->f_9222), 0, 0);
	__LIB_0__::func_627(&(uParam0->f_9220), 0, 0);
	__LIB_0__::func_627(&(uParam0->f_9218), 0, 0);
	return 0;
}

int func_979(var uParam0)//Position - 0x1A7C0B
{
	return uParam0->f_530;
}

char* func_980()//Position - 0x1A7C18
{
	struct<3> Var0;
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
	}
	if (ZONE::GET_HASH_OF_MAP_AREA_AT_COORDS(Var0) == joaat("City"))
	{
		return "MP_MC_START_CITY";
	}
	if (ZONE::GET_HASH_OF_MAP_AREA_AT_COORDS(Var0) == joaat("countryside"))
	{
		return "MP_MC_START_COUNTRY";
	}
	return "MP_MC_START";
}

int func_981(var uParam0)//Position - 0x1A8816
{
	return uParam0->f_529;
}

void func_982(var uParam0)//Position - 0x1A9B6A
{
	if (!BitTest((uParam0[NETWORK::PARTICIPANT_ID_TO_INT() /*303*/])->f_228, 10))
	{
		MISC::SET_BIT(&((uParam0[NETWORK::PARTICIPANT_ID_TO_INT() /*303*/])->f_228), 10);
	}
}

void func_983(var uParam0)//Position - 0x1A9B95
{
	if (!BitTest((uParam0[NETWORK::PARTICIPANT_ID_TO_INT() /*303*/])->f_228, 9))
	{
		MISC::SET_BIT(&((uParam0[NETWORK::PARTICIPANT_ID_TO_INT() /*303*/])->f_228), 9);
	}
}

int func_984(int iParam0, int iParam1)//Position - 0x1A9BC0
{
	switch (iParam0)
	{
		case 0:
			if (iParam1 > 18)
			{
				return 1;
			}
			break;
		case 1:
			if (iParam1 > 26)
			{
				return 1;
			}
			break;
		case 2:
			if (iParam1 > 35)
			{
				return 1;
			}
			break;
		case 3:
			if (iParam1 > 47)
			{
				return 1;
			}
			break;
		case 4:
			if (iParam1 > 62)
			{
				return 1;
			}
			break;
		case 5:
			if (iParam1 > 88)
			{
				return 1;
			}
			break;
		case 6:
			if (iParam1 > 101)
			{
				return 1;
			}
			break;
		case 7:
			if (iParam1 > 109)
			{
				return 1;
			}
			break;
		case 8:
			if (iParam1 > 122)
			{
				return 1;
			}
			break;
		case 9:
			if (iParam1 > 133)
			{
				return 1;
			}
			break;
		case 10:
			if (iParam1 > 147)
			{
				return 1;
			}
			break;
		case 11:
			if (iParam1 > 157)
			{
				return 1;
			}
			break;
		case 12:
			if (iParam1 > 170)
			{
				return 1;
			}
			break;
		case 13:
			if (iParam1 > 186)
			{
				return 1;
			}
			break;
		case 14:
			if (iParam1 > 198)
			{
				return 1;
			}
			break;
		case 15:
			if (iParam1 > 207)
			{
				return 1;
			}
			break;
		case 16:
			if (iParam1 > 221)
			{
				return 1;
			}
			break;
		case 17:
			if (iParam1 > 240)
			{
				return 1;
			}
			break;
		case 18:
			if (iParam1 > 253)
			{
				return 1;
			}
			break;
		case 19:
			if (iParam1 > 268)
			{
				return 1;
			}
			break;
		case 20:
			if (iParam1 > 278)
			{
				return 1;
			}
			break;
		case 21:
			if (iParam1 > 290)
			{
				return 1;
			}
			break;
		case 22:
			if (iParam1 > 301)
			{
				return 1;
			}
			break;
		case 23:
			if (iParam1 > 312)
			{
				return 1;
			}
			break;
		case 24:
			if (iParam1 > 326)
			{
				return 1;
			}
			break;
		case 25:
			if (iParam1 > 337)
			{
				return 1;
			}
			break;
		case 26:
			if (iParam1 > 347)
			{
				return 1;
			}
			break;
		case 27:
			if (iParam1 > 355)
			{
				return 1;
			}
			break;
		case 28:
			if (iParam1 > 369)
			{
				return 1;
			}
			break;
		case 29:
			if (iParam1 > 375)
			{
				return 1;
			}
			break;
		case 30:
			if (iParam1 > 384)
			{
				return 1;
			}
			break;
		case 31:
			if (iParam1 > 400)
			{
				return 1;
			}
			break;
		case 32:
			if (iParam1 > 416)
			{
				return 1;
			}
			break;
		case 33:
			if (iParam1 > 430)
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_985(var uParam0, int iParam1)//Position - 0x1A9EDA
{
	struct<3> Var0;
	struct<3> Var1;
	Var0 = { ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_PED(uParam0->f_836), true) };
	Var1 = { Global_4718592.f_95507[iParam1 /*58*/] };
	if (MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Var1, true) < 8f)
	{
		return 1;
	}
	return 0;
}

void func_986(var uParam0, var uParam1)//Position - 0x1A9F77
{
	switch (uParam0->f_3960)
	{
		case 0:
			uParam0->f_4137 = NETWORK::GET_NETWORK_TIME();
			uParam0->f_3960 = 1;
			break;
		case 1:
			if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), uParam0->f_4137) > 2000)
			{
				uParam0->f_3960 = 2;
			}
			else
			{
				ENTITY::APPLY_FORCE_TO_ENTITY(NETWORK::NET_TO_VEH(uParam1->f_831), 0, 0f, 25f, 0f, 0f, 0f, 0f, 0, true, true, true, false, true);
			}
			break;
		case 2:
			break;
	}
}

void func_987(var uParam0, var uParam1)//Position - 0x1AA00C
{
	if ((uParam1[NETWORK::PARTICIPANT_ID_TO_INT() /*303*/])->f_219 != uParam0->f_827)
	{
		(uParam1[NETWORK::PARTICIPANT_ID_TO_INT() /*303*/])->f_219 = uParam0->f_827;
	}
	if ((uParam1[NETWORK::PARTICIPANT_ID_TO_INT() /*303*/])->f_221 != uParam0->f_826)
	{
		(uParam1[NETWORK::PARTICIPANT_ID_TO_INT() /*303*/])->f_221 = uParam0->f_826;
	}
	if ((uParam1[NETWORK::PARTICIPANT_ID_TO_INT() /*303*/])->f_222 != uParam0->f_829)
	{
		(uParam1[NETWORK::PARTICIPANT_ID_TO_INT() /*303*/])->f_222 = uParam0->f_829;
	}
}

bool func_988(var uParam0)//Position - 0x1B2B94
{
	return BitTest(uParam0->f_823, 30);
}

int func_989(var uParam0, var uParam1)//Position - 0x2A6C6D
{
	struct<3> Var0;
	struct<3> Var1;
	int iVar2;
	if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_109) && !ENTITY::IS_ENTITY_DEAD(uParam1->f_109, false))
	{
		VEHICLE::SET_FORCE_HD_VEHICLE(uParam1->f_109, true);
		GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(ENTITY::GET_ENTITY_COORDS(uParam1->f_109, true), 10f);
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_109.f_12) && !ENTITY::IS_ENTITY_DEAD(uParam1->f_109.f_12, false))
	{
		VEHICLE::SET_FORCE_HD_VEHICLE(uParam1->f_109.f_12, true);
	}
	if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
	{
	}
	Var0 = { Var0 };
	Var1 = { Var1 };
	Var0 = { 840.743f, -3238.231f, -98.529f };
	Var1 = { 834.221f, -3234.792f, -98.527f };
	if (Global_1946250.f_4073.f_382 == 0)
	{
		if (!BitTest(uParam1->f_188, 19))
		{
			if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_109) && !ENTITY::IS_ENTITY_DEAD(uParam1->f_109, false))
			{
				if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_109.f_12) && !ENTITY::IS_ENTITY_DEAD(uParam1->f_109.f_12, false))
				{
					VEHICLE::ATTACH_VEHICLE_TO_TRAILER(uParam1->f_109, uParam1->f_109.f_12, 1f);
				}
				if (!BitTest(uParam1->f_188, 10))
				{
					if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_109.f_1[0]) && !ENTITY::IS_ENTITY_DEAD(uParam1->f_109.f_1[0], false))
					{
						STREAMING::SET_FOCUS_POS_AND_VEL(Global_1946250.f_3638.f_18[0 /*36*/].f_1, 0f, 0f, 0f);
						TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(uParam1->f_109.f_1[0], uParam1->f_109, "gr_Bunker_AT_Tunnel", 262144, 0, 0, -1, -1f, false, 2f);
						MISC::SET_BIT(&(uParam1->f_188), 10);
					}
				}
			}
			MISC::SET_BIT(&(uParam1->f_188), 19);
		}
		if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_VEHICLE(uParam1->f_109))
		{
			TASK::VEHICLE_WAYPOINT_PLAYBACK_OVERRIDE_SPEED(uParam1->f_109, 15f);
		}
		if (!BitTest(uParam1->f_188, 20))
		{
			if (__LIB_0__::func_724(uParam1->f_109, 903.197f, -3245.255f, -97.743f, 0) <= 2f)
			{
				ENTITY::SET_ENTITY_COLLISION(uParam1->f_109, false, false);
				ENTITY::SET_ENTITY_COLLISION(uParam1->f_109.f_12, false, false);
				MISC::SET_BIT(&(uParam1->f_188), 20);
			}
		}
	}
	else if (__LIB_3__::func_630(&(Global_1946250.f_4073), 1))
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_109) && !ENTITY::IS_ENTITY_DEAD(uParam1->f_109, false))
		{
			if (!BitTest(uParam1->f_188, 21))
			{
				VEHICLE::SET_VEHICLE_FORWARD_SPEED_XY(uParam1->f_109, 1f);
				if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_140[1]) && !ENTITY::IS_ENTITY_DEAD(uParam1->f_140[1], false))
				{
					ENTITY::SET_ENTITY_COLLISION(uParam1->f_109, true, false);
					ENTITY::SET_ENTITY_COLLISION(uParam1->f_109.f_12, true, false);
					ENTITY::SET_ENTITY_COORDS_NO_OFFSET(uParam1->f_140[1], 835.203f, -3243.384f, -98.716f, false, false, true);
					ENTITY::SET_ENTITY_HEADING(uParam1->f_140[1], -21f);
				}
				ENTITY::SET_ENTITY_COORDS(uParam1->f_109, Var0, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(uParam1->f_109, 62.24f);
				TASK::VEHICLE_WAYPOINT_PLAYBACK_PAUSE(uParam1->f_109);
				if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_140[1]) && !ENTITY::IS_ENTITY_DEAD(uParam1->f_140[1], false))
				{
					TASK::OPEN_SEQUENCE_TASK(&iVar2);
					TASK::TASK_PLAY_ANIM(0, "amb@world_human_car_park_attendant@male@base", "base", 8f, -8f, -1, 0, 0f, false, false, false);
					TASK::TASK_PLAY_ANIM(0, "amb@world_human_car_park_attendant@male@base", "base", 8f, -4f, -1, 0, 0f, false, false, false);
					TASK::CLOSE_SEQUENCE_TASK(iVar2);
					TASK::TASK_PERFORM_SEQUENCE_LOCALLY(uParam1->f_140[1], iVar2);
				}
				MISC::SET_BIT(&(uParam1->f_188), 21);
			}
			if (!BitTest(uParam1->f_188, 22))
			{
				if ((ENTITY::DOES_ENTITY_EXIST(uParam1->f_109.f_1[0]) && !ENTITY::IS_ENTITY_DEAD(uParam1->f_109.f_1[0], false)) && VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(uParam1->f_109))
				{
					TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(uParam1->f_109.f_1[0], uParam1->f_109, "gr_Bunker_AT_Parking", 262144, 0, 0, -1, -1f, false, 2f);
				}
				MISC::SET_BIT(&(uParam1->f_188), 22);
			}
			if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_VEHICLE(uParam1->f_109))
			{
				TASK::VEHICLE_WAYPOINT_PLAYBACK_OVERRIDE_SPEED(uParam1->f_109, 5f);
			}
			if (__LIB_0__::func_724(uParam1->f_109, 834.228f, -3234.791f, -98.64f, 0) <= 2f)
			{
				VEHICLE::BRING_VEHICLE_TO_HALT(uParam1->f_109, 2f, 10, false);
			}
		}
	}
	if (!Global_1946250.f_4073.f_386)
	{
		if ((BitTest(uParam1->f_188, 23) && CAM::DOES_CAM_EXIST(iLocal_107)) && CAM::IS_CAM_RENDERING(iLocal_107))
		{
			CAM::RENDER_SCRIPT_CAMS(false, true, 3000, true, false, 0);
			CAM::DESTROY_CAM(iLocal_107, false);
			STREAMING::CLEAR_FOCUS();
			AUDIO::STOP_AUDIO_SCENE("DLC_GR_Bunker_Enter_Interior_Cutscene_Scene");
			return 1;
		}
		if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_109.f_12) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(uParam1->f_109.f_12))
		{
			ENTITY::SET_ENTITY_COORDS(uParam1->f_109.f_12, 50f, 50f, 0f, true, false, false, true);
		}
		if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_109))
		{
			ENTITY::SET_ENTITY_COORDS(uParam1->f_109, 50f, 50f, 0f, true, false, false, true);
		}
		if (!CAM::DOES_CAM_EXIST(iLocal_107))
		{
			iLocal_107 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", true);
			CAM::SET_CAM_PARAMS(iLocal_107, 825.9243f, -3236.6536f, -97.4617f, -5.0851f, 0f, -80.687f, 50f, 0, 1, 1, 2);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(-140.1253f);
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				switch (__LIB_0__::func_336(PLAYER::PLAYER_PED_ID(), 0))
				{
					case -1:
						CAM::SET_CAM_PARAMS(iLocal_107, 825.9243f, -3236.6536f, -97.4617f, -5.0851f, 0f, -80.687f, 50f, 0, 1, 1, 2);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(-140.1253f);
						break;
					case 0:
						CAM::SET_CAM_PARAMS(iLocal_107, 831.9871f, -3228.3909f, -98.0253f, 1.6649f, 0f, -159.9397f, 50f, 0, 1, 1, 2);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(145.3238f);
						break;
					default:
						CAM::SET_CAM_PARAMS(iLocal_107, 825.9243f, -3236.6536f, -97.4617f, -5.0851f, 0f, -80.687f, 50f, 0, 1, 1, 2);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(-140.1253f);
						break;
				}
			}
			CAM::SET_CAM_ACTIVE(iLocal_107, true);
			CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
		}
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
		}
		if (!BitTest(uParam1->f_188, 23))
		{
			MISC::SET_BIT(&(uParam1->f_188), 23);
		}
	}
	return 0;
}

int func_990()//Position - 0x2D3AD1
{
	STREAMING::REQUEST_NAMED_PTFX_ASSET("scr_sm");
	if (!STREAMING::HAS_NAMED_PTFX_ASSET_LOADED("scr_sm"))
	{
	}
	else
	{
		GRAPHICS::SET_PARTICLE_FX_OVERRIDE("ent_dst_polystyrene", "scr_dst_inflatable");
		return 1;
	}
	return 0;
}

void func_991(bool bParam0)//Position - 0x2D4E46
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "Vehicle_Transform", PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), "DLC_Air_Race_Sounds_Player", bParam0, 250);
		}
		else
		{
			AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "Vehicle_Transform", PLAYER::PLAYER_PED_ID(), "DLC_Air_Race_Sounds_Player", bParam0, 250);
		}
	}
}

int func_992(var uParam0)//Position - 0x2D62AD
{
	if (!__LIB_2__::func_624(Global_1659902))
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_5441))
		{
			if (ENTITY::IS_ENTITY_DEAD(uParam0->f_5441, false))
			{
				return 0;
			}
		}
	}
	return 1;
}

void func_993(var uParam0)//Position - 0x2D62DF
{
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_5446))
		{
			if (!ENTITY::IS_ENTITY_AT_COORD(uParam0->f_5446, 1983f, 3832f, 50f, 10f, 10f, 10f, false, true, 0))
			{
				uParam0->f_5446 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			}
		}
		else
		{
			uParam0->f_5446 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		}
	}
}

void func_994(var uParam0)//Position - 0x2DAC3E
{
	int iVar0;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = PLAYER::PLAYER_ID();
		if (!BitTest((uParam0[NETWORK::PARTICIPANT_ID_TO_INT() /*303*/])->f_228, 13))
		{
			if (iVar0 != -1)
			{
				if (BitTest(Global_1853348[iVar0 /*834*/].f_833, 7) == 1)
				{
					MISC::SET_BIT(&((uParam0[NETWORK::PARTICIPANT_ID_TO_INT() /*303*/])->f_228), 13);
				}
			}
		}
	}
}

int func_995(int iParam0)//Position - 0x2DCF98
{
	if (iParam0 == __LIB_0__::func_162())
	{
		return 0;
	}
	return Global_1853348[iParam0 /*834*/].f_267.f_476.f_1;
}

void func_996(var uParam0, var uParam1)//Position - 0x2DDE0E
{
	if ((uParam1[NETWORK::PARTICIPANT_ID_TO_INT() /*303*/])->f_217 == 1)
	{
		MISC::SET_BIT(&(Global_1946250.f_8), 30);
	}
	else if ((uParam1[NETWORK::PARTICIPANT_ID_TO_INT() /*303*/])->f_217 == uParam0->f_838)
	{
		MISC::SET_BIT(&(Global_1946250.f_8), 31);
	}
	else
	{
		MISC::SET_BIT(&(Global_1946250.f_9), 0);
	}
}

void func_997(int iParam0, int iParam1, int iParam2)//Position - 0x2E6753
{
	int iVar0;
	iVar0 = Global_262145.f_31112 /* Tunable: CAR_MEET_PRIZE_VEHICLE_CHALLENGE_PARAM_TWO */;
	if (iParam0 == 7)
	{
		iVar0 = Global_262145.f_31111 /* Tunable: CAR_MEET_PRIZE_VEHICLE_CHALLENGE_PARAM_ONE */;
	}
	STATS::PLAYSTATS_CARCLUB_CHALLENGE(iParam0, iParam1, iVar0, iParam2);
}

var func_998(var uParam0, int iParam1)//Position - 0x2E7058
{
	var uVar0;
	uVar0 = (uParam0[iParam1 /*303*/])->f_262;
	return uVar0;
}

int func_999(struct<13> Param0, var uParam1)//Position - 0x2E84F7
{
	int iVar0;
	if (__LIB_0__::func_800(Param0))
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			if (__LIB_0__::func_800(*(uParam1[iVar0 /*13*/])))
			{
				if (NETWORK::NETWORK_ARE_HANDLES_THE_SAME(&Param0, uParam1[iVar0 /*13*/]))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}
