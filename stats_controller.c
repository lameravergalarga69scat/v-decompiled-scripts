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
	int iLocal_21 = 0;
	float fLocal_22 = 0f;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	float fLocal_26 = 0f;
	float fLocal_27 = 0f;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
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
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	bool bLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	bool bLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	int iLocal_73 = 0;
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	int iLocal_77 = 0;
	int iLocal_78 = 0;
	int iLocal_79 = 0;
	int iLocal_80 = 0;
	int iLocal_81 = 0;
	int iLocal_82 = 0;
	int iLocal_83 = 0;
	int iLocal_84 = 0;
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
	iLocal_21 = 3;
	fLocal_22 = 0f;
	fLocal_26 = -0.0375f;
	fLocal_27 = 0.17f;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	iLocal_53 = 2;
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(32))
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	while (true)
	{
		func_104();
		switch (iLocal_54)
		{
			case 0:
				func_99();
				break;
			case 1:
				func_90();
				func_2();
				Global_97725 = 0;
				break;
			case 2:
				__LIB_31__::func_152();
				break;
		}
		SYSTEM::WAIT(0);
	}
}

void func_2()//Position - 0xD7
{
	int iVar0;
	bool bVar1;
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
	bool bVar13;
	int iVar14;
	int iVar15;
	bool bVar16;
	if (iLocal_60)
	{
		iLocal_60 = 0;
	}
	else
	{
		iLocal_55++;
	}
	bLocal_59 = false;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = 3;
	}
	else
	{
		iVar0 = __LIB_18__::func_173();
	}
	if (iVar0 != iLocal_58)
	{
		iLocal_58 = iVar0;
		bLocal_59 = true;
		iLocal_66 = 0;
		iLocal_67 = 0;
		iLocal_74 = 0;
		iLocal_80 = 0;
	}
	if (iLocal_58 == 145)
	{
		return;
	}
	bVar1 = false;
	if ((iLocal_55 == 6 && __LIB_1__::func_697(64)) || (iLocal_55 == 5 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("pilot_school")) > 0))
	{
		bVar1 = true;
		iLocal_60 = 1;
	}
	func_78();
	if (Global_97723 || (Global_97724 && !__LIB_6__::func_854(0)))
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			iVar2 = 0;
			while (iVar2 < 8)
			{
				__LIB_19__::func_810(iLocal_58, iVar2);
				iVar2++;
			}
			Global_97723 = 0;
		}
	}
	if (!bVar1)
	{
		if (((((((((PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) || (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !__LIB_0__::func_43(iLocal_58))) || STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS()) || __LIB_0__::func_198()) || CUTSCENE::IS_CUTSCENE_PLAYING()) || CAM::IS_SCREEN_FADED_OUT()) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) || Global_78317) || Global_97725) || iLocal_61)
		{
			iLocal_82 = 1;
			iLocal_83 = MISC::GET_GAME_TIMER();
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				iLocal_84 = NETWORK::GET_NETWORK_TIME();
			}
			return;
		}
		if (iLocal_82)
		{
			if ((!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && (MISC::GET_GAME_TIMER() - iLocal_83) > 3000) || (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::IS_TIME_MORE_THAN(NETWORK::GET_NETWORK_TIME(), NETWORK::GET_TIME_OFFSET(iLocal_84, 3000))))
			{
				iLocal_82 = 0;
			}
			else
			{
				return;
			}
		}
	}
	if (((!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && (MISC::GET_GAME_TIMER() - iLocal_56) > 2000) || (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::IS_TIME_MORE_THAN(NETWORK::GET_NETWORK_TIME(), NETWORK::GET_TIME_OFFSET(iLocal_57, 2000)))) || bLocal_59)
	{
		if (iLocal_55 >= 8)
		{
			iLocal_55 = 0;
			iLocal_56 = MISC::GET_GAME_TIMER();
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				iLocal_57 = NETWORK::GET_NETWORK_TIME();
			}
		}
		iVar11 = 1;
		if (bLocal_59)
		{
			iVar11 = 8;
		}
		iVar12 = 0;
		while (iVar12 < iVar11)
		{
			bVar13 = true;
			if (bLocal_59)
			{
				iVar8 = iVar12;
			}
			else
			{
				iVar8 = iLocal_55;
			}
			__LIB_0__::func_383(iLocal_58, iVar8, &iVar6, &iVar7);
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				iVar3 = __LIB_0__::func_534(iVar7, -1, 0);
			}
			else if (iVar8 == 0)
			{
				iVar3 = Global_113386.f_2363.f_539.f_2387[iLocal_58];
			}
			else
			{
				STATS::STAT_GET_INT(iVar6, &iVar3, -1);
			}
			iVar5 = iVar3;
			iVar3 = __LIB_0__::func_310(iVar3, 0, 100);
			if (func_56(iLocal_58, iVar8, iVar3, &iVar4))
			{
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					__LIB_0__::func_427(iVar7, iVar4, -1, 1, 0);
				}
				else if (iVar8 == 0)
				{
					if (Global_113386.f_2363.f_539.f_2387[iLocal_58] == 0)
					{
						bVar13 = false;
					}
					Global_113386.f_2363.f_539.f_2387[iLocal_58] = iVar4;
				}
				else
				{
					STATS::STAT_SET_INT(iVar6, iVar4, true);
				}
				if (iVar4 > __LIB_37__::func_767(iLocal_58, iVar8, -1))
				{
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
					{
						if (NETWORK::NETWORK_IS_ACTIVITY_SESSION() && BitTest(Global_4718592.f_39, 19))
						{
							bVar13 = false;
						}
					}
					else if ((!Global_113386.f_9085 && !__LIB_0__::func_2(0)) || !BitTest(Global_113386.f_9085.f_2[27 /*3*/], 2))
					{
						bVar13 = false;
					}
					iVar14 = iVar4;
					iVar15 = (iVar14 - (iVar14 % __LIB_12__::func_409(iLocal_58, iVar8)));
					if ((iVar14 % __LIB_12__::func_409(iLocal_58, iVar8)) >= 0)
					{
						iVar15 = (iVar15 + __LIB_12__::func_409(iLocal_58, iVar8));
					}
					if (iVar14 >= iVar15)
					{
						iVar14 = iVar15;
					}
					else
					{
						iVar14 = (iVar15 - __LIB_12__::func_409(iLocal_58, iVar8));
					}
					if (iVar4 > iVar14)
					{
						bVar13 = false;
					}
					if (__LIB_37__::func_371())
					{
						bVar13 = false;
					}
					if (bVar13)
					{
						if (!bLocal_59)
						{
							if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
							{
								if (__LIB_0__::func_421(117, -1) == 0)
								{
									if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() && func_9())
									{
										__LIB_0__::func_151("STAT_HELP2" /* GXT: ~s~Character stats represent skill levels for your character. Increase individual stats by performing that activity throughout the game. */, -1);
										__LIB_6__::func_796(117, 1, -1, 1);
									}
								}
							}
							iLocal_61 = 1;
							iLocal_64 = (iVar4 - iVar3);
							iLocal_64 = (iLocal_64 + (iVar3 % __LIB_12__::func_409(iLocal_58, iVar8)));
							iLocal_65 = iVar4;
							iLocal_62 = iLocal_58;
							iLocal_63 = iVar8;
						}
					}
					if (iVar4 >= 100)
					{
						if (func_3(iLocal_58, iVar8, &iVar9))
						{
							if (iLocal_58 == 0)
							{
								STATS::STAT_GET_INT(joaat("SP0_TOTAL_PLAYING_TIME"), &iVar10, -1);
								STATS::STAT_SET_INT(iVar9, iVar10, true);
							}
							else if (iLocal_58 == 1)
							{
								STATS::STAT_GET_INT(joaat("SP1_TOTAL_PLAYING_TIME"), &iVar10, -1);
								STATS::STAT_SET_INT(iVar9, iVar10, true);
							}
							else if (iLocal_58 == 2)
							{
								STATS::STAT_GET_INT(joaat("SP2_TOTAL_PLAYING_TIME"), &iVar10, -1);
								STATS::STAT_SET_INT(iVar9, iVar10, true);
							}
							else if (iLocal_58 == 3)
							{
							}
						}
					}
				}
				__LIB_19__::func_810(iLocal_58, iVar8);
			}
			else if (iVar4 < iVar5)
			{
				bVar16 = true;
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					__LIB_0__::func_427(iVar7, iVar4, -1, 1, 0);
				}
				else if (iVar8 == 0)
				{
					Global_113386.f_2363.f_539.f_2387[iLocal_58] = iVar4;
					bVar16 = false;
				}
				else
				{
					STATS::STAT_SET_INT(iVar6, iVar4, true);
				}
				if (bVar16)
				{
					__LIB_19__::func_810(iLocal_58, iVar8);
				}
			}
			iVar12++;
		}
	}
	else
	{
		iLocal_60 = 1;
	}
}

bool func_3(int iParam0, int iParam1, var uParam2)//Position - 0x5CD
{
	*uParam2 = joaat("LAST_PLAYING_TIME");
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					*uParam2 = joaat("SP0_SPECIAL_ABILITY_MAXED");
					break;
				case 1:
					*uParam2 = joaat("SP0_STAMINA_MAXED");
					break;
				case 3:
					*uParam2 = joaat("SP0_LUNG_CAPACITY_MAXED");
					break;
				case 2:
					*uParam2 = joaat("SP0_STRENGTH_MAXED");
					break;
				case 4:
					*uParam2 = joaat("SP0_WHEELIE_ABILITY_MAXED");
					break;
				case 5:
					*uParam2 = joaat("SP0_FLYING_ABILITY_MAXED");
					break;
				case 6:
					*uParam2 = joaat("SP0_SHOOTING_ABILITY_MAXED");
					break;
				case 7:
					*uParam2 = joaat("SP0_STEALTH_ABILITY_MAXED");
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					*uParam2 = joaat("SP1_SPECIAL_ABILITY_MAXED");
					break;
				case 1:
					*uParam2 = joaat("SP1_STAMINA_MAXED");
					break;
				case 3:
					*uParam2 = joaat("SP1_LUNG_CAPACITY_MAXED");
					break;
				case 2:
					*uParam2 = joaat("SP1_STRENGTH_MAXED");
					break;
				case 4:
					*uParam2 = joaat("SP1_WHEELIE_ABILITY_MAXED");
					break;
				case 5:
					*uParam2 = joaat("SP1_FLYING_ABILITY_MAXED");
					break;
				case 6:
					*uParam2 = joaat("SP1_SHOOTING_ABILITY_MAXED");
					break;
				case 7:
					*uParam2 = joaat("SP1_STEALTH_ABILITY_MAXED");
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					*uParam2 = joaat("SP2_SPECIAL_ABILITY_MAXED");
					break;
				case 1:
					*uParam2 = joaat("SP2_STAMINA_MAXED");
					break;
				case 3:
					*uParam2 = joaat("SP2_LUNG_CAPACITY_MAXED");
					break;
				case 2:
					*uParam2 = joaat("SP2_STRENGTH_MAXED");
					break;
				case 4:
					*uParam2 = joaat("SP2_WHEELIE_ABILITY_MAXED");
					break;
				case 5:
					*uParam2 = joaat("SP2_FLYING_ABILITY_MAXED");
					break;
				case 6:
					*uParam2 = joaat("SP2_SHOOTING_ABILITY_MAXED");
					break;
				case 7:
					*uParam2 = joaat("SP2_STEALTH_ABILITY_MAXED");
					break;
			}
			break;
	}
	return *uParam2 != joaat("LAST_PLAYING_TIME");
}

int func_9()//Position - 0x84B
{
	int iVar0;
	iVar0 = MISC::GET_FRAME_COUNT();
	if (Global_1931615 == iVar0)
	{
		return Global_1931616;
	}
	else
	{
		Global_1931615 = iVar0;
		Global_1931616 = 0;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (NETWORK::NETWORK_IS_ACTIVITY_SESSION() && BitTest(Global_4718592.f_39, 19))
		{
			return 0;
		}
	}
	if ((HUD::IS_HUD_HIDDEN() && HUD::IS_RADAR_HIDDEN()) && !__LIB_3__::func_139(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (Global_1931617 == 1)
	{
		return 0;
	}
	if (Global_1931426 == 1)
	{
		return 0;
	}
	if (__LIB_1__::func_288())
	{
		return 0;
	}
	if (MISC::IS_STUNT_JUMP_MESSAGE_SHOWING())
	{
		return 0;
	}
	if (Global_1836571 == 1)
	{
		return 0;
	}
	if (MISC::IS_STUNT_JUMP_IN_PROGRESS())
	{
		return 0;
	}
	if (Global_1057410)
	{
		return 0;
	}
	if (BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_833, 16))
	{
		return 0;
	}
	if (__LIB_0__::func_706())
	{
		return 0;
	}
	if (__LIB_0__::func_497())
	{
		return 0;
	}
	if (__LIB_0__::func_116())
	{
		if (!__LIB_0__::func_497())
		{
			if (!__LIB_2__::func_56(3, -1))
			{
				if (__LIB_2__::func_173(&Global_2727875, 300000, 0) == 1)
				{
					__LIB_0__::func_579(&Global_2727873);
					__LIB_37__::func_608(3, -1);
				}
				else if (__LIB_2__::func_173(&Global_2727873, 7000, 0) == 0)
				{
					return 0;
				}
			}
		}
		else
		{
			return 0;
		}
	}
	if (__LIB_4__::func_79())
	{
		return 0;
	}
	if (__LIB_2__::func_283())
	{
		return 0;
	}
	if (__LIB_2__::func_282())
	{
		return 0;
	}
	if (__LIB_0__::func_739())
	{
		return 0;
	}
	if (__LIB_6__::func_169())
	{
		return 0;
	}
	if (__LIB_3__::func_778())
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
	{
		return 0;
	}
	if (HUD::IS_PAUSE_MENU_ACTIVE())
	{
		return 0;
	}
	if (CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE())
	{
		if (__LIB_1__::func_562(PLAYER::PLAYER_PED_ID()) == joaat("WEAPON_SNIPERRIFLE") || __LIB_1__::func_562(PLAYER::PLAYER_PED_ID()) == joaat("WEAPON_HEAVYSNIPER"))
		{
			return 0;
		}
	}
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		return 0;
	}
	if (__LIB_0__::func_191(8, -1))
	{
		return 0;
	}
	if (__LIB_13__::func_145(12, -1))
	{
		return 0;
	}
	if (HUD::IS_HUD_COMPONENT_ACTIVE(19))
	{
		return 0;
	}
	if (__LIB_1__::func_159())
	{
		return 0;
	}
	if (__LIB_31__::func_153())
	{
		return 0;
	}
	if (BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_833, 2))
	{
		return 0;
	}
	if (Global_1836363)
	{
		return 0;
	}
	if (Global_1836367)
	{
		return 0;
	}
	if (Global_1836369)
	{
		return 0;
	}
	if (Global_2703735.f_3580.f_39)
	{
		return 0;
	}
	if (__LIB_0__::func_77(0))
	{
		return 0;
	}
	if (__LIB_2__::func_174())
	{
		return 0;
	}
	if (Global_2815059.f_4032)
	{
		return 0;
	}
	if (Global_2703735.f_3446)
	{
		return 0;
	}
	if (!__LIB_0__::func_154(PLAYER::PLAYER_ID(), 1, 0))
	{
		return 0;
	}
	if (__LIB_5__::func_585(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (Global_2703735.f_3580.f_39 == 1)
	{
		return 0;
	}
	if (Global_2715699.f_2846.f_26 == 1)
	{
		return 0;
	}
	if (__LIB_0__::func_104(1))
	{
		return 0;
	}
	if (__LIB_7__::func_280())
	{
		return 0;
	}
	if (HUD::IS_HUD_COMPONENT_ACTIVE(16))
	{
		return 0;
	}
	if (__LIB_2__::func_101())
	{
		return 0;
	}
	if (__LIB_6__::func_342())
	{
		return 0;
	}
	if (HUD::IS_HELP_MESSAGE_ON_SCREEN())
	{
		if (__LIB_0__::func_1("FHU_HELP3" /* GXT: Shout through your headset to make the store clerk fill the bag with cash faster. */))
		{
			return 0;
		}
	}
	if (BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_833, 6))
	{
		return 0;
	}
	if (__LIB_4__::func_81(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	Global_1931616 = 1;
	return 1;
}

int func_56(int iParam0, int iParam1, int iParam2, var uParam3)//Position - 0x1767
{
	*uParam3 = func_57(iParam0, iParam1, 0, -1);
	if (*uParam3 > iParam2)
	{
		return 1;
	}
	return 0;
}

int func_57(int iParam0, int iParam1, bool bParam2, int iParam3)//Position - 0x1789
{
	float fVar0;
	float fVar1;
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
	float fVar12;
	iVar2 = 0;
	switch (iParam1)
	{
		case 0:
			if (iParam0 == 0)
			{
				STATS::STAT_GET_INT(joaat("SP0_SPECIAL_ABILITY_UNLOCKED"), &iVar3, -1);
				fVar0 = SYSTEM::TO_FLOAT(iVar3);
			}
			else if (iParam0 == 1)
			{
				STATS::STAT_GET_INT(joaat("SP1_SPECIAL_ABILITY_UNLOCKED"), &iVar3, -1);
				fVar0 = SYSTEM::TO_FLOAT(iVar3);
			}
			else if (iParam0 == 2)
			{
				STATS::STAT_GET_INT(joaat("SP2_SPECIAL_ABILITY_UNLOCKED"), &iVar3, -1);
				fVar0 = SYSTEM::TO_FLOAT(iVar3);
			}
			else if (iParam0 == 3)
			{
				fVar0 = SYSTEM::TO_FLOAT(__LIB_0__::func_534(64, iParam3, 0));
			}
			break;
		case 1:
			if (iParam0 == 0)
			{
				STATS::STAT_GET_FLOAT(joaat("SP0_DIST_RUNNING"), &fVar1, -1);
				fVar0 = ((fVar1 - Global_113386.f_2363.f_539.f_2355[iParam0]) / 175f);
			}
			else if (iParam0 == 1)
			{
				STATS::STAT_GET_FLOAT(joaat("SP1_DIST_RUNNING"), &fVar1, -1);
				fVar0 = ((fVar1 - Global_113386.f_2363.f_539.f_2355[iParam0]) / 175f);
			}
			else if (iParam0 == 2)
			{
				STATS::STAT_GET_FLOAT(joaat("SP2_DIST_RUNNING"), &fVar1, -1);
				fVar0 = ((fVar1 - Global_113386.f_2363.f_539.f_2355[iParam0]) / 175f);
			}
			else if (iParam0 == 3)
			{
				fVar0 = (__LIB_0__::func_424(20, iParam3) / 175f);
				__LIB_39__::func_597(&fVar0);
			}
			if (iParam0 == 0)
			{
				fVar0 = (fVar0 + SYSTEM::TO_FLOAT(__LIB_12__::func_414(joaat("SP0_TIME_SWIMMING"))));
			}
			else if (iParam0 == 1)
			{
				fVar0 = (fVar0 + SYSTEM::TO_FLOAT(__LIB_12__::func_414(joaat("SP1_TIME_SWIMMING"))));
			}
			else if (iParam0 == 2)
			{
				fVar0 = (fVar0 + SYSTEM::TO_FLOAT(__LIB_12__::func_414(joaat("SP2_TIME_SWIMMING"))));
			}
			else if (iParam0 == 3)
			{
				fVar0 = (fVar0 + SYSTEM::TO_FLOAT(__LIB_12__::func_414(func_63(50, iParam3))));
				__LIB_39__::func_597(&fVar0);
			}
			if (iParam0 == 0)
			{
				fVar0 = (fVar0 + SYSTEM::TO_FLOAT(__LIB_12__::func_414(joaat("SP0_TIME_DRIVING_BICYCLE"))));
			}
			else if (iParam0 == 1)
			{
				fVar0 = (fVar0 + SYSTEM::TO_FLOAT(__LIB_12__::func_414(joaat("SP1_TIME_DRIVING_BICYCLE"))));
			}
			else if (iParam0 == 2)
			{
				fVar0 = (fVar0 + SYSTEM::TO_FLOAT(__LIB_12__::func_414(joaat("SP2_TIME_DRIVING_BICYCLE"))));
			}
			else if (iParam0 == 3)
			{
				fVar0 = (fVar0 + SYSTEM::TO_FLOAT(__LIB_12__::func_414(func_63(47, iParam3))));
				__LIB_39__::func_597(&fVar0);
			}
			if (iParam0 == 3)
			{
				fVar0 = (fVar0 + ((4f * Global_262145.f_24361 /* Tunable: -624142803 */) * IntToFloat(__LIB_0__::func_534(7237, -1, 0))));
			}
			if (iParam0 == 3)
			{
				fVar0 = (fVar0 * 0.25f);
			}
			break;
		case 3:
			if (iParam0 == 0)
			{
				fVar0 = (SYSTEM::TO_FLOAT(__LIB_12__::func_412(joaat("SP0_TIME_UNDERWATER"))) / 30f);
			}
			else if (iParam0 == 1)
			{
				fVar0 = (SYSTEM::TO_FLOAT(__LIB_12__::func_412(joaat("SP1_TIME_UNDERWATER"))) / 30f);
			}
			else if (iParam0 == 2)
			{
				fVar0 = (SYSTEM::TO_FLOAT(__LIB_12__::func_412(joaat("SP2_TIME_UNDERWATER"))) / 30f);
			}
			else if (iParam0 == 3)
			{
				fVar0 = (SYSTEM::TO_FLOAT(__LIB_12__::func_412(func_63(52, iParam3))) / 30f);
				__LIB_39__::func_597(&fVar0);
			}
			break;
		case 2:
			if (iParam0 == 0)
			{
				STATS::STAT_GET_INT(joaat("SP0_UNARMED_HITS"), &iVar3, -1);
				fVar0 = (SYSTEM::TO_FLOAT((iVar3 - Global_113386.f_2363.f_539.f_2359[iParam0])) / 20f);
			}
			else if (iParam0 == 1)
			{
				STATS::STAT_GET_INT(joaat("SP1_UNARMED_HITS"), &iVar3, -1);
				fVar0 = (SYSTEM::TO_FLOAT((iVar3 - Global_113386.f_2363.f_539.f_2359[iParam0])) / 20f);
			}
			else if (iParam0 == 2)
			{
				STATS::STAT_GET_INT(joaat("SP2_UNARMED_HITS"), &iVar3, -1);
				fVar0 = (SYSTEM::TO_FLOAT((iVar3 - Global_113386.f_2363.f_539.f_2359[iParam0])) / 20f);
			}
			else if (iParam0 == 3)
			{
				fVar0 = (SYSTEM::TO_FLOAT(__LIB_0__::func_534(1500, iParam3, 0)) / 20f);
				__LIB_39__::func_597(&fVar0);
			}
			break;
		case 4:
			if (iParam0 == 0)
			{
				STATS::STAT_GET_INT(joaat("SP0_NUMBER_NEAR_MISS"), &iVar3, -1);
				fVar0 = (fVar0 + (SYSTEM::TO_FLOAT((iVar3 - Global_113386.f_2363.f_539.f_2363[iParam0])) / 50f));
			}
			else if (iParam0 == 1)
			{
				STATS::STAT_GET_INT(joaat("SP1_NUMBER_NEAR_MISS"), &iVar3, -1);
				fVar0 = (fVar0 + (SYSTEM::TO_FLOAT((iVar3 - Global_113386.f_2363.f_539.f_2363[iParam0])) / 50f));
			}
			else if (iParam0 == 2)
			{
				STATS::STAT_GET_INT(joaat("SP2_NUMBER_NEAR_MISS"), &iVar3, -1);
				fVar0 = (fVar0 + (SYSTEM::TO_FLOAT((iVar3 - Global_113386.f_2363.f_539.f_2363[iParam0])) / 50f));
			}
			else if (iParam0 == 3)
			{
				fVar0 = (fVar0 + IntToFloat((__LIB_0__::func_534(113, iParam3, 0) / 50)));
				__LIB_39__::func_597(&fVar0);
			}
			break;
		case 5:
			if (iParam0 == 0)
			{
				fVar0 = (SYSTEM::TO_FLOAT(__LIB_12__::func_414(joaat("SP0_TIME_DRIVING_PLANE"))) / 10f);
			}
			else if (iParam0 == 1)
			{
				fVar0 = (SYSTEM::TO_FLOAT(__LIB_12__::func_414(joaat("SP1_TIME_DRIVING_PLANE"))) / 10f);
			}
			else if (iParam0 == 2)
			{
				fVar0 = (SYSTEM::TO_FLOAT(__LIB_12__::func_414(joaat("SP2_TIME_DRIVING_PLANE"))) / 10f);
			}
			else if (iParam0 == 3)
			{
				fVar0 = (SYSTEM::TO_FLOAT(__LIB_12__::func_414(func_63(43, iParam3))) / 10f);
			}
			if (iParam0 == 0)
			{
				fVar0 = (fVar0 + (SYSTEM::TO_FLOAT(__LIB_12__::func_414(joaat("SP0_TIME_DRIVING_HELI"))) / 10f));
			}
			else if (iParam0 == 1)
			{
				fVar0 = (fVar0 + (SYSTEM::TO_FLOAT(__LIB_12__::func_414(joaat("SP1_TIME_DRIVING_HELI"))) / 10f));
			}
			else if (iParam0 == 2)
			{
				fVar0 = (fVar0 + (SYSTEM::TO_FLOAT(__LIB_12__::func_414(joaat("SP2_TIME_DRIVING_HELI"))) / 10f));
			}
			else if (iParam0 == 3)
			{
				fVar0 = (fVar0 + (SYSTEM::TO_FLOAT(__LIB_12__::func_414(func_63(45, iParam3))) / 10f));
			}
			if (iParam0 == 0)
			{
				STATS::STAT_GET_INT(joaat("SP0_PLANE_LANDINGS"), &iVar3, -1);
				fVar0 = (fVar0 + SYSTEM::TO_FLOAT(iVar3));
			}
			else if (iParam0 == 1)
			{
				STATS::STAT_GET_INT(joaat("SP1_PLANE_LANDINGS"), &iVar3, -1);
				fVar0 = (fVar0 + SYSTEM::TO_FLOAT(iVar3));
			}
			else if (iParam0 == 2)
			{
				STATS::STAT_GET_INT(joaat("SP2_PLANE_LANDINGS"), &iVar3, -1);
				fVar0 = (fVar0 + SYSTEM::TO_FLOAT(iVar3));
			}
			else if (iParam0 == 3)
			{
				fVar0 = (fVar0 + IntToFloat(__LIB_0__::func_534(61, iParam3, 0)));
				__LIB_39__::func_597(&fVar0);
			}
			if ((iParam0 == 0 || iParam0 == 1) || iParam0 == 2)
			{
				iVar4 = __LIB_11__::func_711(iParam0, 0);
				if (iParam0 == 2)
				{
					if (iVar4 == 3)
					{
						fVar0 = (fVar0 + 10f);
					}
					else if (iVar4 == 2)
					{
						fVar0 = (fVar0 + 7f);
					}
					else if (iVar4 == 1)
					{
						fVar0 = (fVar0 + 5f);
					}
				}
				else if (iVar4 == 3)
				{
					fVar0 = (fVar0 + 12f);
				}
				else if (iVar4 == 2)
				{
					fVar0 = (fVar0 + 9f);
				}
				else if (iVar4 == 1)
				{
					fVar0 = (fVar0 + 7f);
				}
				iVar4 = __LIB_11__::func_711(iParam0, 1);
				if (iParam0 == 2)
				{
					if (iVar4 == 3)
					{
						fVar0 = (fVar0 + 10f);
					}
					else if (iVar4 == 2)
					{
						fVar0 = (fVar0 + 7f);
					}
					else if (iVar4 == 1)
					{
						fVar0 = (fVar0 + 5f);
					}
				}
				else if (iVar4 == 3)
				{
					fVar0 = (fVar0 + 12f);
				}
				else if (iVar4 == 2)
				{
					fVar0 = (fVar0 + 9f);
				}
				else if (iVar4 == 1)
				{
					fVar0 = (fVar0 + 7f);
				}
				iVar4 = __LIB_11__::func_711(iParam0, 2);
				if (iVar4 == 3)
				{
					fVar0 = (fVar0 + 12f);
				}
				else if (iVar4 == 2)
				{
					fVar0 = (fVar0 + 9f);
				}
				else if (iVar4 == 1)
				{
					fVar0 = (fVar0 + 7f);
				}
				iVar4 = __LIB_11__::func_711(iParam0, 3);
				if (iVar4 == 3)
				{
					fVar0 = (fVar0 + 12f);
				}
				else if (iVar4 == 2)
				{
					fVar0 = (fVar0 + 9f);
				}
				else if (iVar4 == 1)
				{
					fVar0 = (fVar0 + 7f);
				}
				iVar4 = __LIB_11__::func_711(iParam0, 6);
				if (iVar4 == 3)
				{
					fVar0 = (fVar0 + 12f);
				}
				else if (iVar4 == 2)
				{
					fVar0 = (fVar0 + 9f);
				}
				else if (iVar4 == 1)
				{
					fVar0 = (fVar0 + 7f);
				}
				iVar4 = __LIB_11__::func_711(iParam0, 4);
				if (iVar4 == 3)
				{
					fVar0 = (fVar0 + 5f);
				}
				else if (iVar4 == 2)
				{
					fVar0 = (fVar0 + 3f);
				}
				else if (iVar4 == 1)
				{
					fVar0 = (fVar0 + 2f);
				}
				iVar4 = __LIB_11__::func_711(iParam0, 5);
				if (iVar4 == 3)
				{
					fVar0 = (fVar0 + 12f);
				}
				else if (iVar4 == 2)
				{
					fVar0 = (fVar0 + 9f);
				}
				else if (iVar4 == 1)
				{
					fVar0 = (fVar0 + 7f);
				}
				iVar4 = __LIB_11__::func_711(iParam0, 7);
				if (iVar4 == 3)
				{
					fVar0 = (fVar0 + 12f);
				}
				else if (iVar4 == 2)
				{
					fVar0 = (fVar0 + 9f);
				}
				else if (iVar4 == 1)
				{
					fVar0 = (fVar0 + 7f);
				}
				iVar4 = __LIB_11__::func_711(iParam0, 8);
				if (iVar4 == 3)
				{
					fVar0 = (fVar0 + 12f);
				}
				else if (iVar4 == 2)
				{
					fVar0 = (fVar0 + 9f);
				}
				else if (iVar4 == 1)
				{
					fVar0 = (fVar0 + 7f);
				}
				iVar4 = __LIB_11__::func_711(iParam0, 11);
				if (iVar4 == 3)
				{
					fVar0 = (fVar0 + 12f);
				}
				else if (iVar4 == 2)
				{
					fVar0 = (fVar0 + 9f);
				}
				else if (iVar4 == 1)
				{
					fVar0 = (fVar0 + 7f);
				}
			}
			break;
		case 7:
			if (iParam0 == 0)
			{
				STATS::STAT_GET_FLOAT(joaat("SP0_DIST_WALK_ST"), &fVar1, -1);
				fVar0 = ((fVar1 - Global_113386.f_2363.f_539.f_2367[iParam0]) / 45f);
			}
			else if (iParam0 == 1)
			{
				STATS::STAT_GET_FLOAT(joaat("SP1_DIST_WALK_ST"), &fVar1, -1);
				fVar0 = ((fVar1 - Global_113386.f_2363.f_539.f_2367[iParam0]) / 45f);
			}
			else if (iParam0 == 2)
			{
				STATS::STAT_GET_FLOAT(joaat("SP2_DIST_WALK_ST"), &fVar1, -1);
				fVar0 = ((fVar1 - Global_113386.f_2363.f_539.f_2367[iParam0]) / 45f);
			}
			else if (iParam0 == 3)
			{
				fVar0 = (__LIB_0__::func_424(19, iParam3) / 45f);
			}
			if (iParam0 == 0)
			{
				STATS::STAT_GET_INT(joaat("SP0_KILLS_STEALTH"), &iVar3, -1);
				fVar0 = (fVar0 + ((SYSTEM::TO_FLOAT((iVar3 - Global_113386.f_2363.f_539.f_2371[iParam0])) / 2f) * 1.5f));
			}
			else if (iParam0 == 1)
			{
				STATS::STAT_GET_INT(joaat("SP1_KILLS_STEALTH"), &iVar3, -1);
				fVar0 = (fVar0 + ((SYSTEM::TO_FLOAT((iVar3 - Global_113386.f_2363.f_539.f_2371[iParam0])) / 2f) * 1.5f));
			}
			else if (iParam0 == 2)
			{
				STATS::STAT_GET_INT(joaat("SP2_KILLS_STEALTH"), &iVar3, -1);
				fVar0 = (fVar0 + ((SYSTEM::TO_FLOAT((iVar3 - Global_113386.f_2363.f_539.f_2371[iParam0])) / 2f) * 1.5f));
			}
			else if (iParam0 == 3)
			{
				iVar3 = __LIB_0__::func_534(34, iParam3, 0);
				fVar0 = (fVar0 + ((SYSTEM::TO_FLOAT(iVar3) / 2f) * 1.5f));
				__LIB_39__::func_597(&fVar0);
			}
			break;
		case 6:
			if (iParam0 == 0)
			{
				STATS::STAT_GET_INT(joaat("SP0_HITS_MISSION"), &iVar5, -1);
				STATS::STAT_GET_INT(joaat("SP0_HITS_PEDS_VEHICLES"), &iVar6, -1);
				iVar6 = (iVar6 - iVar5);
				fVar0 = (SYSTEM::TO_FLOAT((iVar5 - Global_113386.f_2363.f_539.f_2375[iParam0])) / 40f);
				fVar0 = (fVar0 + (SYSTEM::TO_FLOAT((iVar6 - Global_113386.f_2363.f_539.f_2379[iParam0])) / 80f));
			}
			else if (iParam0 == 1)
			{
				STATS::STAT_GET_INT(joaat("SP1_HITS_MISSION"), &iVar5, -1);
				STATS::STAT_GET_INT(joaat("SP1_HITS_PEDS_VEHICLES"), &iVar6, -1);
				iVar6 = (iVar6 - iVar5);
				fVar0 = (SYSTEM::TO_FLOAT((iVar5 - Global_113386.f_2363.f_539.f_2375[iParam0])) / 40f);
				fVar0 = (fVar0 + (SYSTEM::TO_FLOAT((iVar6 - Global_113386.f_2363.f_539.f_2379[iParam0])) / 80f));
			}
			else if (iParam0 == 2)
			{
				STATS::STAT_GET_INT(joaat("SP2_HITS_MISSION"), &iVar5, -1);
				STATS::STAT_GET_INT(joaat("SP2_HITS_PEDS_VEHICLES"), &iVar6, -1);
				iVar6 = (iVar6 - iVar5);
				fVar0 = (SYSTEM::TO_FLOAT((iVar5 - Global_113386.f_2363.f_539.f_2375[iParam0])) / 40f);
				fVar0 = (fVar0 + (SYSTEM::TO_FLOAT((iVar6 - Global_113386.f_2363.f_539.f_2379[iParam0])) / 80f));
			}
			else if (iParam0 == 3)
			{
				iVar6 = __LIB_0__::func_534(172, iParam3, 0);
				fVar0 = (fVar0 + (SYSTEM::TO_FLOAT(iVar6) / 80f));
			}
			if ((iParam0 == 0 || iParam0 == 1) || iParam0 == 2)
			{
				iVar7 = 0;
				while (iVar7 < 22)
				{
					switch (__LIB_3__::func_774(iVar7, iParam0))
					{
						case 3:
							iVar8++;
							break;
						case 2:
							iVar9++;
							break;
						case 1:
							iVar10++;
							break;
					}
					iVar7++;
				}
				fVar0 = (fVar0 + IntToFloat(iVar8 * 3));
				fVar0 = (fVar0 + IntToFloat(iVar9 * 2));
				fVar0 = (fVar0 + IntToFloat(iVar10 * 1));
			}
			else if (iParam0 == 3)
			{
				fVar0 = (fVar0 + IntToFloat(__LIB_0__::func_714(joaat("MPPLY_SHOOTINGRANGE_WINS")) * 1));
				__LIB_39__::func_597(&fVar0);
			}
			break;
	}
	if (iParam1 != 0)
	{
		iVar11 = __LIB_37__::func_767(iParam0, iParam1, iParam3);
		fVar0 = (fVar0 + IntToFloat(iVar11));
		fVar0 = (fVar0 + IntToFloat(func_58(iParam0, iParam1, iParam3)));
	}
	if (bParam2)
	{
		fVar12 = (fVar0 - (fVar0 % IntToFloat(__LIB_12__::func_409(iParam0, iParam1))));
		if ((fVar0 % IntToFloat(__LIB_12__::func_409(iParam0, iParam1))) >= 0f)
		{
			fVar12 = (fVar12 + IntToFloat(__LIB_12__::func_409(iParam0, iParam1)));
		}
		if (fVar0 >= fVar12)
		{
			fVar0 = fVar12;
		}
		else
		{
			fVar0 = (fVar12 - IntToFloat(__LIB_12__::func_409(iParam0, iParam1)));
		}
	}
	iVar2 = SYSTEM::FLOOR(fVar0);
	iVar2 = __LIB_0__::func_310(iVar2, 0, 100);
	return iVar2;
}

int func_58(int iParam0, int iParam1, int iParam2)//Position - 0x249C
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
			switch (iParam1)
			{
				case 1:
				case 3:
				case 2:
				case 4:
				case 5:
				case 6:
				case 7:
					return Global_113386.f_2363.f_539.f_2247[iParam1 /*4*/][iParam0];
					break;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 1:
					return __LIB_0__::func_534(72, iParam2, 0);
					break;
				case 3:
					return __LIB_0__::func_534(74, iParam2, 0);
					break;
				case 2:
					return __LIB_0__::func_534(73, iParam2, 0);
					break;
				case 4:
					return __LIB_0__::func_534(75, iParam2, 0);
					break;
				case 5:
					return __LIB_0__::func_534(76, iParam2, 0);
					break;
				case 6:
					return __LIB_0__::func_534(77, iParam2, 0);
					break;
				case 7:
					return __LIB_0__::func_534(78, iParam2, 0);
					break;
			}
			break;
	}
	return 0;
}

int func_63(int iParam0, int iParam1)//Position - 0x265B
{
	return Global_2826809[iParam0 /*3*/][__LIB_0__::func_330(iParam1)];
}

void func_78()//Position - 0x2D49
{
	int iVar0;
	int iVar1;
	iVar1 = 0;
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (((ENTITY::DOES_ENTITY_EXIST(iVar0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false)) && VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1, false) == PLAYER::PLAYER_PED_ID()) && (((VEHICLE::IS_THIS_MODEL_A_CAR(ENTITY::GET_ENTITY_MODEL(iVar0)) || VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(iVar0))) || VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(iVar0))) || VEHICLE::IS_THIS_MODEL_A_QUADBIKE(ENTITY::GET_ENTITY_MODEL(iVar0))))
		{
			iVar1 = 1;
		}
	}
	func_83(&iVar0, &iVar1);
	func_82(&iVar0, &iVar1);
	func_79();
}

void func_79()//Position - 0x2DE8
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (!iLocal_80)
	{
		if (iLocal_58 == 3)
		{
			if (Global_2359296[__LIB_0__::func_153() /*5567*/].f_681.f_7)
			{
				iLocal_77 = __LIB_12__::func_412(func_63(148, -1));
				Global_2359296[__LIB_0__::func_153() /*5567*/].f_681.f_7 = 0;
			}
			else
			{
				iLocal_77 = Global_2359296[__LIB_0__::func_153() /*5567*/].f_681.f_6;
			}
			if (Global_2359296[__LIB_0__::func_153() /*5567*/].f_681.f_4 == 0)
			{
				Global_2359296[__LIB_0__::func_153() /*5567*/].f_681.f_4 = NETWORK::GET_CLOUD_TIME_AS_INT();
			}
			iLocal_79 = Global_2359296[__LIB_0__::func_153() /*5567*/].f_681.f_4;
			iLocal_78 = Global_2359296[__LIB_0__::func_153() /*5567*/].f_681.f_5;
		}
		else
		{
			if (Global_113386.f_2363.f_539.f_2292[iLocal_58])
			{
				switch (iLocal_58)
				{
					case 0:
						iLocal_77 = __LIB_12__::func_412(joaat("SP0_TOTAL_WHEELIE_TIME"));
						break;
					case 1:
						iLocal_77 = __LIB_12__::func_412(joaat("SP1_TOTAL_WHEELIE_TIME"));
						break;
					case 2:
						iLocal_77 = __LIB_12__::func_412(joaat("SP2_TOTAL_WHEELIE_TIME"));
						break;
				}
				Global_113386.f_2363.f_539.f_2292[iLocal_58] = 0;
			}
			else
			{
				iLocal_77 = Global_113386.f_2363.f_539.f_2288[iLocal_58];
			}
			if (Global_113386.f_2363.f_539.f_2280[iLocal_58] == 0)
			{
				Global_113386.f_2363.f_539.f_2280[iLocal_58] = NETWORK::GET_CLOUD_TIME_AS_INT();
			}
			iLocal_79 = Global_113386.f_2363.f_539.f_2280[iLocal_58];
			iLocal_78 = Global_113386.f_2363.f_539.f_2284[iLocal_58];
		}
		iLocal_80 = 1;
		iLocal_81 = 1;
	}
	else if ((NETWORK::GET_CLOUD_TIME_AS_INT() - iLocal_79) > 86400)
	{
		iLocal_80 = 0;
		iLocal_81 = 0;
		iLocal_79 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iLocal_78 = 0;
		if (iLocal_58 == 3)
		{
			Global_2359296[__LIB_0__::func_153() /*5567*/].f_681.f_7 = 1;
		}
		else
		{
			Global_113386.f_2363.f_539.f_2292[iLocal_58] = 1;
		}
	}
	if (iLocal_81)
	{
		switch (iLocal_58)
		{
			case 0:
				iVar0 = __LIB_12__::func_412(joaat("SP0_TOTAL_WHEELIE_TIME"));
				break;
			case 1:
				iVar0 = __LIB_12__::func_412(joaat("SP1_TOTAL_WHEELIE_TIME"));
				break;
			case 2:
				iVar0 = __LIB_12__::func_412(joaat("SP2_TOTAL_WHEELIE_TIME"));
				break;
			case 3:
				iVar0 = __LIB_12__::func_412(func_63(148, -1));
				break;
		}
		iVar1 = (iVar0 - iLocal_77);
		iVar2 = (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar1) / 15f)) - iLocal_78);
		if (iVar2 > 0)
		{
			__LIB_26__::func_515(iLocal_58, 4, iVar2);
			iLocal_78 = (iLocal_78 + iVar2);
		}
		if (iVar0 > (iLocal_77 + (CLOCK::GET_MILLISECONDS_PER_GAME_MINUTE() / 1000) * 60))
		{
			iLocal_81 = 0;
		}
	}
	if (iLocal_58 == 3)
	{
		Global_2359296[__LIB_0__::func_153() /*5567*/].f_681.f_4 = iLocal_79;
		Global_2359296[__LIB_0__::func_153() /*5567*/].f_681.f_5 = iLocal_78;
	}
	else
	{
		Global_113386.f_2363.f_539.f_2280[iLocal_58] = iLocal_79;
		Global_113386.f_2363.f_539.f_2284[iLocal_58] = iLocal_78;
	}
}

void func_82(int iParam0, int iParam1)//Position - 0x31A7
{
	bool bVar0;
	if (iLocal_74)
	{
		bVar0 = true;
		if ((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && *iParam1) && !ENTITY::IS_ENTITY_IN_AIR(*iParam0))
		{
			bVar0 = false;
			if (ENTITY::GET_ENTITY_SPEED(*iParam0) >= 53f)
			{
				__LIB_26__::func_515(iLocal_58, 4, 2);
				bVar0 = true;
			}
		}
		if (bVar0)
		{
			iLocal_74 = 0;
			iLocal_75 = MISC::GET_GAME_TIMER();
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				iLocal_76 = NETWORK::GET_NETWORK_TIME();
			}
		}
	}
	else if (((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && *iParam1) && ENTITY::GET_ENTITY_SPEED(*iParam0) < 20f) && !ENTITY::IS_ENTITY_IN_AIR(*iParam0))
	{
		if ((!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && (MISC::GET_GAME_TIMER() - iLocal_75) > 10000) || (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::IS_TIME_MORE_THAN(NETWORK::GET_NETWORK_TIME(), NETWORK::GET_TIME_OFFSET(iLocal_76, 10000))))
		{
			iLocal_74 = 1;
		}
	}
}

void func_83(int iParam0, int iParam1)//Position - 0x3282
{
	bool bVar0;
	char cVar1[64];
	bVar0 = false;
	if (*iParam1)
	{
		if (iLocal_66)
		{
			if (!ENTITY::IS_ENTITY_IN_AIR(*iParam0))
			{
				if ((!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && (MISC::GET_GAME_TIMER() - iLocal_68) > 1500) || (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::IS_TIME_MORE_THAN(NETWORK::GET_NETWORK_TIME(), NETWORK::GET_TIME_OFFSET(iLocal_69, 1500))))
				{
					iLocal_70 = MISC::GET_GAME_TIMER();
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
					{
						iLocal_71 = NETWORK::GET_NETWORK_TIME();
					}
					iLocal_67 = 1;
				}
				iLocal_66 = 0;
			}
		}
		if (iLocal_67)
		{
			if (!ENTITY::IS_ENTITY_IN_AIR(*iParam0))
			{
				if (VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(*iParam0))
				{
					if ((((!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && (MISC::GET_GAME_TIMER() - iLocal_70) > 20) || (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && (MISC::GET_GAME_TIMER() - iLocal_70) == 0)) || (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::IS_TIME_MORE_THAN(NETWORK::GET_NETWORK_TIME(), NETWORK::GET_TIME_OFFSET(iLocal_71, 20)))) || (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::IS_TIME_EQUAL_TO(NETWORK::GET_NETWORK_TIME(), iLocal_71)))
					{
					}
					else
					{
						__LIB_26__::func_515(iLocal_58, 4, 1);
					}
					StringCopy(&cVar1, "Player landed on all wheels in ", 64);
					StringIntConCat(&cVar1, (MISC::GET_GAME_TIMER() - iLocal_70), 64);
					StringConCat(&cVar1, "ms", 64);
					bVar0 = true;
				}
			}
			else
			{
				bVar0 = true;
			}
		}
		if (!iLocal_66 && !iLocal_67)
		{
			if ((!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && (MISC::GET_GAME_TIMER() - iLocal_72) > 1000) || (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::IS_TIME_MORE_THAN(NETWORK::GET_NETWORK_TIME(), NETWORK::GET_TIME_OFFSET(iLocal_73, 1000))))
			{
				if (ENTITY::IS_ENTITY_IN_AIR(*iParam0))
				{
					if (!iLocal_66)
					{
						iLocal_68 = MISC::GET_GAME_TIMER();
						if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
						{
							iLocal_69 = NETWORK::GET_NETWORK_TIME();
						}
						iLocal_66 = 1;
					}
				}
			}
		}
	}
	else if (iLocal_66 || iLocal_67)
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		iLocal_72 = MISC::GET_GAME_TIMER();
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			iLocal_73 = NETWORK::GET_NETWORK_TIME();
		}
		iLocal_66 = 0;
		iLocal_67 = 0;
	}
}

void func_90()//Position - 0x35D8
{
	char* sVar0;
	int iVar1;
	if (iLocal_61)
	{
		if (iLocal_62 != iLocal_58)
		{
			iLocal_61 = 0;
			return;
		}
		sVar0 = "CHAR_DEFAULT";
		switch (iLocal_62)
		{
			case 0:
				sVar0 = "CHAR_MICHAEL";
				break;
			case 1:
				sVar0 = "CHAR_FRANKLIN";
				break;
			case 2:
				sVar0 = "CHAR_TREVOR";
				break;
			case 3:
				iVar1 = __LIB_31__::func_929(PLAYER::PLAYER_ID());
				if (iVar1 == 0)
				{
					return;
				}
				else
				{
					sVar0 = PED::GET_PEDHEADSHOT_TXD_STRING(iVar1);
				}
				break;
		}
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("PS_UPDATE" /* GXT: ~1~/100 */);
		HUD::ADD_TEXT_COMPONENT_INTEGER(iLocal_65);
		HUD::END_TEXT_COMMAND_THEFEED_POST_STATS(func_92(iLocal_63), func_91(iLocal_63), iLocal_64, (iLocal_65 - iLocal_64), false, sVar0, sVar0);
		iLocal_82 = 1;
		iLocal_83 = MISC::GET_GAME_TIMER() + 5000;
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			iLocal_84 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), 5000);
		}
		iLocal_61 = 0;
	}
}

int func_91(int iParam0)//Position - 0x369C
{
	switch (iParam0)
	{
		case 0:
			return 23;
			break;
		case 1:
			return 2;
			break;
		case 3:
			return 24;
			break;
		case 2:
			return 25;
			break;
		case 4:
			return 14;
			break;
		case 5:
			return 27;
			break;
		case 6:
			return 17;
			break;
		case 7:
			return 28;
			break;
	}
	return -1;
}

char* func_92(int iParam0)//Position - 0x371B
{
	switch (iParam0)
	{
		case 0:
			return "PSF_SPEC_AB" /* GXT: Special capacity + */;
			break;
		case 1:
			return "PSF_STAMINA" /* GXT: Stamina + */;
			break;
		case 3:
			return "PSF_LUNG" /* GXT: Lung Capacity + */;
			break;
		case 2:
			return "PSF_STRENGTH" /* GXT: Strength + */;
			break;
		case 4:
			return "PSF_DRIVING" /* GXT: Driving + */;
			break;
		case 5:
			return "PSF_FLYING" /* GXT: Flying + */;
			break;
		case 6:
			return "PSF_SHOOTING" /* GXT: Shooting + */;
			break;
		case 7:
			return "PSF_STEALTH" /* GXT: Stealth + */;
			break;
	}
	return "ERROR";
}

void func_99()//Position - 0x39DA
{
	float fVar0;
	int iVar1;
	if (MISC::GET_INDEX_OF_CURRENT_LEVEL() != 1)
	{
		return;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (!__LIB_0__::func_640(PLAYER::PLAYER_ID()))
		{
			return;
		}
		if (__LIB_0__::func_3() != 0)
		{
			return;
		}
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (__LIB_0__::func_3() == 0)
		{
			iLocal_53 = 1;
		}
	}
	else
	{
		iLocal_53 = 0;
	}
	if (!func_101())
	{
		func_100();
	}
	iLocal_55 = 0;
	iLocal_56 = 0;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iLocal_57 = NETWORK::GET_NETWORK_TIME();
	}
	iLocal_72 = MISC::GET_GAME_TIMER();
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iLocal_73 = NETWORK::GET_NETWORK_TIME();
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (!BitTest(Global_2359296[__LIB_0__::func_153() /*5567*/].f_681.f_1274, 2))
		{
			fVar0 = (SYSTEM::TO_FLOAT(__LIB_0__::func_534(193, -1, 0)) / 20f);
			iVar1 = SYSTEM::FLOOR(fVar0);
			iVar1 = __LIB_0__::func_310(iVar1, 0, 100);
			__LIB_26__::func_515(3, 2, iVar1);
			MISC::SET_BIT(&(Global_2359296[__LIB_0__::func_153() /*5567*/].f_681.f_1274), 2);
		}
	}
	bLocal_59 = true;
	iLocal_54 = 1;
}

void func_100()//Position - 0x3AC1
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	var uVar6;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = 0;
		while (iVar0 < 8)
		{
			if (iVar0 != 0)
			{
				__LIB_0__::func_383(3, iVar0, &uVar1, &iVar2);
				__LIB_0__::func_427(iVar2, __LIB_37__::func_767(3, iVar0, -1), -1, 1, 0);
			}
			iVar0++;
		}
		__LIB_6__::func_796(0, 1, -1, 1);
		Global_97723 = 1;
	}
	else
	{
		iVar3 = 0;
		while (iVar3 < 3)
		{
			iVar4 = 0;
			while (iVar4 < 8)
			{
				if (iVar4 != 0)
				{
					__LIB_0__::func_383(iVar3, iVar4, &iVar5, &uVar6);
					STATS::STAT_SET_INT(iVar5, __LIB_37__::func_767(iVar3, iVar4, -1), true);
				}
				iVar4++;
			}
			iVar3++;
		}
		Global_113386.f_2363.f_539.f_2387[0] = __LIB_37__::func_767(0, 0, -1);
		Global_113386.f_2363.f_539.f_2387[1] = __LIB_37__::func_767(1, 0, -1);
		Global_113386.f_2363.f_539.f_2387[2] = __LIB_37__::func_767(2, 0, -1);
		Global_113386.f_2363.f_539.f_2354 = 1;
		Global_97723 = 1;
	}
}

int func_101()//Position - 0x3BB5
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 1;
	}
	return Global_113386.f_2363.f_539.f_2354;
}

void func_104()//Position - 0x3C05
{
	if (iLocal_54 != 0 && iLocal_53 != 2)
	{
		if (iLocal_53 == 0)
		{
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				iLocal_53 = 2;
			}
			if (!func_101())
			{
				iLocal_53 = 2;
			}
		}
		else if (iLocal_53 == 1)
		{
			if ((!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() || !__LIB_0__::func_640(PLAYER::PLAYER_ID())) || __LIB_0__::func_3() != 0)
			{
				iLocal_53 = 2;
			}
		}
		if (iLocal_53 == 2)
		{
			iLocal_54 = 2;
		}
	}
}

