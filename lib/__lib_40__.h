int func_0()//Position - 0x89E78
{
	if ((NETWORK::NETWORK_IS_SIGNED_ONLINE() && NETWORK::NETWORK_IS_SIGNED_IN()) && __LIB_1__::func_894())
	{
		return 1;
	}
	return 0;
}

void func_1(bool bParam0)//Position - 0x544B
{
	if (bParam0)
	{
		__LIB_1__::func_330(&Global_112411, 256);
	}
	else
	{
		__LIB_2__::func_712(&Global_112411, 256);
	}
}

void func_2(bool bParam0)//Position - 0xB987
{
	if (bParam0)
	{
		__LIB_1__::func_330(&uLocal_159, 32768);
	}
	else
	{
		__LIB_2__::func_712(&uLocal_159, 32768);
	}
}

void func_3(bool bParam0)//Position - 0x7BE7C
{
	if (bParam0)
	{
		__LIB_1__::func_330(&uLocal_159, 1024);
	}
	else
	{
		__LIB_2__::func_712(&uLocal_159, 1024);
	}
}

void func_4(bool bParam0)//Position - 0x7BEA0
{
	if (bParam0)
	{
		__LIB_1__::func_330(&uLocal_159, 128);
	}
	else
	{
		__LIB_2__::func_712(&uLocal_159, 128);
	}
}

void func_5(bool bParam0)//Position - 0x7C26D
{
	if (bParam0)
	{
		__LIB_1__::func_330(&uLocal_159, 4096);
	}
	else
	{
		__LIB_2__::func_712(&uLocal_159, 4096);
	}
}

bool func_6()//Position - 0x7E4DF
{
	return (((((((__LIB_0__::func_983() || __LIB_1__::func_736()) || __LIB_2__::func_715()) || __LIB_1__::func_192() == 16) || __LIB_1__::func_192() == 2) || __LIB_3__::func_126(PLAYER::PLAYER_ID())) || __LIB_10__::func_582()) || __LIB_0__::func_927(PLAYER::PLAYER_ID()));
}

void func_7(int iParam0)//Position - 0x8102D
{
	TASK::TASK_PLAY_ANIM(iParam0, __LIB_39__::func_843(4), __LIB_39__::func_833(4, 0), 1000f, -2f, -1, 1, 0f, false, false, false);
}

void func_8(bool bParam0)//Position - 0x831AE
{
	if (bParam0)
	{
		__LIB_1__::func_330(&uLocal_159, 65536);
	}
	else
	{
		__LIB_2__::func_712(&uLocal_159, 65536);
	}
}

void func_9(bool bParam0)//Position - 0x85C3C
{
	if (bParam0)
	{
		__LIB_1__::func_330(&uLocal_159, 512);
	}
	else
	{
		__LIB_2__::func_712(&uLocal_159, 512);
	}
}

void func_10()//Position - 0x85CB6
{
	__LIB_39__::func_844("SCLUB_LEAVE_M" /* GXT: Hold ~INPUT_CONTEXT~ to ask Michael to leave the club.~n~Press ~INPUT_CONTEXT~ to lean in for a better view. */);
	__LIB_39__::func_844("SCLUB_LEAVE_F" /* GXT: Hold ~INPUT_CONTEXT~ to ask Franklin to leave the club.~n~Press ~INPUT_CONTEXT~ to lean in for a better view. */);
	__LIB_39__::func_844("SCLUB_LEAVE_T" /* GXT: Hold ~INPUT_CONTEXT~ to ask Trevor to leave the club.~n~Press ~INPUT_CONTEXT~ to lean in for a better view. */);
	__LIB_39__::func_844("SCLUB_LEAVE_L" /* GXT: Hold ~INPUT_CONTEXT~ to ask Lamar to leave the club.~n~Press ~INPUT_CONTEXT~ to lean in for a better view. */);
	__LIB_39__::func_844("SCLUB_LEAVE_J" /* GXT: Hold ~INPUT_CONTEXT~ to ask Jimmy to leave the club.~n~Press ~INPUT_CONTEXT~ to lean in for a better view. */);
	__LIB_39__::func_841("SCLUB_LEAVHELP" /* GXT: Approach ~a~ to ask him to leave. */, __LIB_39__::func_831(2));
	__LIB_39__::func_841("SCLUB_LEAVHELP" /* GXT: Approach ~a~ to ask him to leave. */, __LIB_39__::func_831(0));
	__LIB_39__::func_841("SCLUB_LEAVHELP" /* GXT: Approach ~a~ to ask him to leave. */, __LIB_39__::func_831(1));
	__LIB_39__::func_841("SCLUB_LEAVHELP" /* GXT: Approach ~a~ to ask him to leave. */, __LIB_39__::func_831(19));
	__LIB_39__::func_841("SCLUB_LEAVHELP" /* GXT: Approach ~a~ to ask him to leave. */, __LIB_39__::func_831(14));
}

void func_11(bool bParam0)//Position - 0x862AF
{
	if (bParam0)
	{
		__LIB_1__::func_330(&uLocal_159, 8192);
	}
	else
	{
		__LIB_2__::func_712(&uLocal_159, 8192);
	}
}

bool func_12()//Position - 0x864A9
{
	return (__LIB_39__::func_822() && iLocal_190 == -1);
}

void func_13(bool bParam0)//Position - 0x86522
{
	if (bParam0)
	{
		__LIB_1__::func_330(&uLocal_159, 256);
	}
	else
	{
		__LIB_2__::func_712(&uLocal_159, 256);
	}
}

void func_14(bool bParam0)//Position - 0x86795
{
	if (bParam0)
	{
		__LIB_1__::func_330(&uLocal_159, 16);
	}
	else
	{
		__LIB_2__::func_712(&uLocal_159, 16);
	}
}

void func_15(var uParam0)//Position - 0x86A50
{
	__LIB_39__::func_459(uParam0, __LIB_39__::func_811(0, 0));
	__LIB_39__::func_459(uParam0, __LIB_39__::func_811(1, 0));
}

void func_16(bool bParam0)//Position - 0x87C04
{
	if (bParam0)
	{
		__LIB_1__::func_330(&uLocal_159, 8);
	}
	else
	{
		__LIB_2__::func_712(&uLocal_159, 8);
	}
}

void func_17(bool bParam0)//Position - 0x88038
{
	if (bParam0)
	{
		__LIB_1__::func_330(&uLocal_159, 64);
	}
	else
	{
		__LIB_2__::func_712(&uLocal_159, 64);
	}
}

void func_18(bool bParam0)//Position - 0x88237
{
	if (bParam0)
	{
		__LIB_1__::func_330(&uLocal_159, 32);
	}
	else
	{
		__LIB_2__::func_712(&uLocal_159, 32);
	}
}

int func_19(int iParam0)//Position - 0xA7DC
{
	if (__LIB_4__::func_962(PLAYER::PLAYER_PED_ID()) && __LIB_39__::func_838() > 3)
	{
		CAM::SHAKE_SCRIPT_GLOBAL("DRUNK_SHAKE", 1f);
		CAM::SHAKE_CAM(iParam0, "DRUNK_SHAKE", 1f);
		return 1;
	}
	else
	{
		if (CAM::IS_SCRIPT_GLOBAL_SHAKING())
		{
			CAM::STOP_SCRIPT_GLOBAL_SHAKING(false);
		}
		if (CAM::IS_CAM_SHAKING(iParam0))
		{
			CAM::STOP_CAM_SHAKING(iParam0, false);
		}
	}
	return 0;
}

void func_20(char* sParam0)//Position - 0x79D01
{
	struct<6> Var0;
	int iVar1;
	iVar1 = 0;
	while (iVar1 < 10)
	{
		MemCopy(&Var0, {__LIB_39__::func_832(iVar1)}, 6);
		__LIB_39__::func_841(sParam0, Var0);
		iVar1++;
	}
}

void func_21(int iParam0)//Position - 0x76069
{
	if (iParam0 != 0)
	{
		if (!__LIB_0__::func_703(uLocal_159, 1073741824))
		{
			__LIB_2__::func_820(0, 31, 5);
			__LIB_1__::func_330(&uLocal_159, 1073741824);
		}
	}
}

int func_22(int iParam0)//Position - 0x292F
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		switch (VEHICLE::GET_VEHICLE_LAYOUT_HASH(iParam0))
		{
			case joaat("LAYOUT_LOW"):
			case joaat("LAYOUT_LOW_ENTITYXF"):
			case joaat("LAYOUT_LOW_CHEETAH"):
			case joaat("LAYOUT_LOW_INFERNUS"):
			case joaat("LAYOUT_LOW_RESTRICTED"):
			case joaat("LAYOUT_LOW_SENTINEL2"):
			case joaat("LAYOUT_LOW_FURORE"):
			case joaat("LAYOUT_LOW_OSIRIS"):
			case joaat("LAYOUT_LOW_FELTZER3"):
			case joaat("LAYOUT_LOW_LOWRIDER"):
			case joaat("LAYOUT_LOW_LOWRIDER_FACTION"):
			case joaat("LAYOUT_LOW_VERLIERER"):
			case joaat("LAYOUT_LOW_LOWRIDER2"):
			case joaat("LAYOUT_LOW_LOWRIDER2_FACTION3"):
			case joaat("LAYOUT_LOW_LE7B"):
			case joaat("LAYOUT_LOW_RUINER2"):
			case joaat("LAYOUT_LOW_INFERNUS2"):
			case joaat("LAYOUT_LOW_SC1"):
			case joaat("LAYOUT_LOW_MICHELLI"):
			case joaat("LAYOUT_LOW_TEZERACT"):
			case joaat("LAYOUT_LOW_DOMINATOR3"):
			case joaat("LAYOUT_LOW_TAIPAN"):
			case joaat("LAYOUT_LOW_ITALIGTO"):
			case joaat("LAYOUT_LOW_RESTRICTED_SCHLAGEN"):
			case joaat("LAYOUT_LOW_RESTRICTED_GAUNTLET3"):
			case joaat("LAYOUT_LOW_PEYOTE2"):
			case joaat("LAYOUT_LOW_NEO"):
			case joaat("LAYOUT_LOW_PEYOTE3"):
			case joaat("LAYOUT_LOW_CALICO"):
			case joaat("LAYOUT_LOW_RESTRICTED_DOMINATOR8"):
			case joaat("LAYOUT_LOW_RESTRICTED_EUROS"):
			case joaat("LAYOUT_LOW_RESTRICTED_RT3000"):
			case joaat("LAYOUT_LOW_ZR350"):
			case joaat("LAYOUT_LOW_IGNUS"):
			case joaat("LAYOUT_LOW_ZENO"):
			case joaat("LAYOUT_LOW_RESTRICTED_POSTLUDE"):
			case joaat("LAYOUT_LOW_RESTRICTED_TENF2"):
			case joaat("LAYOUT_LOW_CORSITA"):
				return 1;
				break;
			}
	}
	return 0;
}

char* func_23()//Position - 0x2B01
{
	return "mini@prostitutes@sexnorm_veh_first_person";
}

char* func_24()//Position - 0x2B19
{
	return "mini@prostitutes@sexlow_veh_first_person";
}

char* func_25()//Position - 0x2B25
{
	return "mini@prostitutes@sexlow_veh";
}

int func_26(int iParam0)//Position - 0x38D1
{
	switch (iParam0)
	{
		case 0:
			return 10;
			break;
		case 1:
			return 8;
			break;
		case 2:
			return 9;
			break;
	}
	return -1;
}

int func_27(int iParam0)//Position - 0x390B
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		case 1:
			return 1;
			break;
		case 4:
			return 2;
			break;
		case 5:
			return 3;
			break;
		case 8:
			return 4;
			break;
		case 9:
			return 5;
			break;
	}
	return -1;
}

int func_28(int iParam0)//Position - 0x7421
{
	int iVar0;
	int iVar1;
	int iVar2;
	char cVar3[16];
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		if (VEHICLE::GET_NUM_MOD_KITS(iParam0) > 0)
		{
			iVar0 = 0;
			while (iVar0 < 49)
			{
				iVar1 = iVar0;
				if (((((iVar1 != 17 && iVar1 != 18) && iVar1 != 19) && iVar1 != 20) && iVar1 != 21) && iVar1 != 22)
				{
					if (VEHICLE::GET_VEHICLE_MOD(iParam0, iVar1) != -1)
					{
						StringCopy(&cVar3, VEHICLE::GET_MOD_TEXT_LABEL(iParam0, iVar1, VEHICLE::GET_VEHICLE_MOD(iParam0, iVar1)), 16);
						iVar2 = MISC::GET_HASH_KEY(&cVar3);
						if (iVar2 != 0)
						{
							if (iVar2 == MISC::GET_HASH_KEY("SABRE_CAG" /* GXT: Stunt Cage */))
							{
								return 0;
							}
						}
					}
				}
				iVar0++;
			}
		}
		switch (ENTITY::GET_ENTITY_MODEL(iParam0))
		{
			case joaat("peyote2"):
				if ((!VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, 2) && !VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, 3)) && !VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, 4))
				{
					return 0;
				}
				break;
			case joaat("peyote3"):
				if (((!VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, 2) && !VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, 3)) && !VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, 4)) && !VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, 1))
				{
					return 0;
				}
				break;
			case joaat("coquette4"):
				if (!VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, 1))
				{
					return 0;
				}
				break;
			case joaat("zorrusso"):
				if (VEHICLE::GET_VEHICLE_MOD(iParam0, 10) == -1)
				{
					return 0;
				}
				break;
			case joaat("manana2"):
				if (VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, 1))
				{
					return 0;
				}
				break;
			case joaat("rt3000"):
				if (VEHICLE::GET_VEHICLE_MOD(iParam0, 10) == -1 || VEHICLE::GET_VEHICLE_MOD(iParam0, 10) == 3)
				{
					return 0;
				}
				break;
		}
		switch (VEHICLE::GET_VEHICLE_LAYOUT_HASH(iParam0))
		{
			case joaat("LAYOUT_LOW"):
			case joaat("LAYOUT_LOW_CHEETAH"):
			case joaat("LAYOUT_LOW_INFERNUS"):
			case joaat("LAYOUT_LOW_RESTRICTED"):
			case joaat("LAYOUT_LOW_SENTINEL2"):
			case joaat("LAYOUT_STANDARD"):
			case joaat("LAYOUT_STD_EXITFIXUP"):
			case joaat("LAYOUT_STD_HABANERO"):
			case joaat("LAYOUT_STD_STRETCH"):
			case joaat("LAYOUT_STD_HIGHWINDOW"):
			case joaat("LAYOUT_RANGER"):
			case joaat("LAYOUT_RANGER_SWAT"):
			case joaat("LAYOUT_4X4"):
			case joaat("LAYOUT_BISON"):
			case joaat("LAYOUT_VAN_BODHI"):
			case joaat("LAYOUT_STD_LOWROOF"):
			case joaat("LAYOUT_STD_STRATUM"):
			case joaat("LAYOUT_VAN_ROOSEVELT"):
			case joaat("LAYOUT_STD_HUNTLEY"):
			case joaat("LAYOUT_STD_WARRENER"):
			case joaat("LAYOUT_LOW_BLADE"):
			case joaat("LAYOUT_LOW_FURORE"):
			case joaat("LAYOUT_STD_KURUMA"):
			case joaat("LAYOUT_STD_BLISTA2"):
			case joaat("LAYOUT_STD_CHINO"):
			case joaat("LAYOUT_LOW_OSIRIS"):
			case joaat("LAYOUT_LOW_FELTZER3"):
			case joaat("LAYOUT_LOW_LOWRIDER"):
			case joaat("LAYOUT_LOW_LOWRIDER_FACTION"):
			case joaat("LAYOUT_STD_LOWRIDER"):
			case joaat("LAYOUT_STD_LOWRIDER_CHINO"):
			case joaat("LAYOUT_STD_LOWRIDER_SIDEDOOR"):
			case joaat("LAYOUT_LOW_VERLIERER"):
			case joaat("LAYOUT_STD_BALLER4"):
			case joaat("LAYOUT_LOW_LOWRIDER2"):
			case joaat("LAYOUT_LOW_LOWRIDER2_FACTION3"):
			case joaat("LAYOUT_STD_LOWRIDER2"):
			case joaat("LAYOUT_STD_LOWRIDER2_SIDEDOOR"):
			case joaat("LAYOUT_STD_LOWRIDER2_SLAMVAN"):
			case joaat("LAYOUT_STD_WINDSOR2"):
			case joaat("LAYOUT_STD_XLS"):
			case joaat("LAYOUT_LOW_LE7B"):
			case joaat("LAYOUT_STD_OMNIS"):
			case joaat("LAYOUT_LOW_RUINER2"):
			case joaat("LAYOUT_LOW_INFERNUS2"):
			case joaat("LAYOUT_LOW_TORERO"):
			case joaat("LAYOUT_LOW_SC1"):
			case joaat("LAYOUT_STD_NEON"):
			case joaat("LAYOUT_LOW_MICHELLI"):
			case joaat("LAYOUT_LOW_TEZERACT"):
			case joaat("LAYOUT_LOW_DOMINATOR3"):
			case joaat("LAYOUT_LOW_TAIPAN"):
			case joaat("LAYOUT_LOW_ITALIGTO"):
			case joaat("LAYOUT_LOW_RESTRICTED_SCHLAGEN"):
			case joaat("LAYOUT_RANGER_TOROS"):
			case joaat("LAYOUT_STD_DEVIANT"):
			case joaat("LAYOUT_STD_DRAFTER"):
			case joaat("LAYOUT_STD_DYNASTY"):
			case joaat("LAYOUT_STD_PARAGON"):
			case joaat("LAYOUT_STD_ZION3"):
			case joaat("LAYOUT_LOW_RESTRICTED_GAUNTLET3"):
			case joaat("LAYOUT_LOW_PEYOTE2"):
			case joaat("LAYOUT_LOW_NEO"):
			case joaat("LAYOUT_RANGER_NOVAK"):
			case joaat("LAYOUT_RANGER_EVERON"):
			case joaat("LAYOUT_LOW_PEYOTE3"):
			case joaat("LAYOUT_RANGER_SEMINOLE2"):
			case joaat("LAYOUT_LOW_CALICO"):
			case joaat("LAYOUT_STD_CYPHER"):
			case joaat("LAYOUT_LOW_RESTRICTED_DOMINATOR8"):
			case joaat("LAYOUT_LOW_RESTRICTED_EUROS"):
			case joaat("LAYOUT_LOW_RESTRICTED_RT3000"):
			case joaat("LAYOUT_STANDARD_SULTAN3"):
			case joaat("LAYOUT_STD_WARRENER2"):
			case joaat("LAYOUT_LOW_ZR350"):
			case joaat("LAYOUT_LOW_IGNUS"):
			case joaat("LAYOUT_STANDARD_BUFFALO4"):
			case joaat("LAYOUT_STD_ASTRON"):
			case joaat("LAYOUT_STD_CINQUEMILA"):
			case joaat("LAYOUT_STD_DEITY"):
			case joaat("LAYOUT_STD_GRANGER2"):
			case joaat("LAYOUT_STD_I-WAGEN"):
			case joaat("LAYOUT_LOW_ZENO"):
			case joaat("LAYOUT_STD_S95"):
			case joaat("LAYOUT_LOW_RESTRICTED_POSTLUDE"):
			case joaat("LAYOUT_LOW_RESTRICTED_TENF2"):
			case joaat("LAYOUT_LOW_CORSITA"):
			case joaat("LAYOUT_STD_RHINEHART"):
			case joaat("LAYOUT_STANDARD_SENTINEL4"):
			case joaat("LAYOUT_LOW_TORERO2"):
			case joaat("LAYOUT_STD_GREENWOOD"):
				return 1;
				break;
		}
		if (VEHICLE::GET_VEHICLE_LAYOUT_HASH(iParam0) == joaat("LAYOUT_STD_RIPLEY") && ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("slamvan"))
		{
			return 1;
		}
		if ((VEHICLE::GET_VEHICLE_LAYOUT_HASH(iParam0) == joaat("LAYOUT_STD_ISSI3") && ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("weevil")) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("brioso2"))
		{
			return 1;
		}
		if (VEHICLE::GET_VEHICLE_LAYOUT_HASH(iParam0) == joaat("LAYOUT_STD_ISSI3") && ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("brioso3"))
		{
			return 1;
		}
	}
	return 0;
}

char* func_29(int iParam0, bool bParam1, bool bParam2, bool bParam3)//Position - 0x22D5
{
	char* sVar0;
	sVar0 = "";
	switch (iParam0)
	{
		case 0:
			if (bParam3)
			{
				if (bParam2)
				{
					if (bParam1)
					{
						sVar0 = __LIB_38__::func_894(18);
					}
					else
					{
						sVar0 = __LIB_38__::func_894(23);
					}
				}
				else if (bParam1)
				{
					sVar0 = __LIB_38__::func_894(8);
				}
				else
				{
					sVar0 = __LIB_38__::func_894(13);
				}
			}
			else if (bParam2)
			{
				if (bParam1)
				{
					sVar0 = __LIB_38__::func_893(18);
				}
				else
				{
					sVar0 = __LIB_38__::func_893(23);
				}
			}
			else if (bParam1)
			{
				sVar0 = __LIB_38__::func_893(8);
			}
			else
			{
				sVar0 = __LIB_38__::func_893(13);
			}
			break;
		case 1:
			if (bParam3)
			{
				if (bParam2)
				{
					if (bParam1)
					{
						sVar0 = __LIB_38__::func_894(19);
					}
					else
					{
						sVar0 = __LIB_38__::func_894(24);
					}
				}
				else if (bParam1)
				{
					sVar0 = __LIB_38__::func_894(9);
				}
				else
				{
					sVar0 = __LIB_38__::func_894(14);
				}
			}
			else if (bParam2)
			{
				if (bParam1)
				{
					sVar0 = __LIB_38__::func_893(19);
				}
				else
				{
					sVar0 = __LIB_38__::func_893(24);
				}
			}
			else if (bParam1)
			{
				sVar0 = __LIB_38__::func_893(9);
			}
			else
			{
				sVar0 = __LIB_38__::func_893(14);
			}
			break;
		case 2:
			if (bParam3)
			{
				if (bParam2)
				{
					if (bParam1)
					{
						sVar0 = __LIB_38__::func_894(20);
					}
					else
					{
						sVar0 = __LIB_38__::func_894(25);
					}
				}
				else if (bParam1)
				{
					sVar0 = __LIB_38__::func_894(10);
				}
				else
				{
					sVar0 = __LIB_38__::func_894(15);
				}
			}
			else if (bParam2)
			{
				if (bParam1)
				{
					sVar0 = __LIB_38__::func_893(20);
				}
				else
				{
					sVar0 = __LIB_38__::func_893(25);
				}
			}
			else if (bParam1)
			{
				sVar0 = __LIB_38__::func_893(10);
			}
			else
			{
				sVar0 = __LIB_38__::func_893(15);
			}
			break;
		case 3:
			if (bParam3)
			{
				if (bParam2)
				{
					if (bParam1)
					{
						sVar0 = __LIB_38__::func_894(21);
					}
					else
					{
						sVar0 = __LIB_38__::func_894(26);
					}
				}
				else if (bParam1)
				{
					sVar0 = __LIB_38__::func_894(11);
				}
				else
				{
					sVar0 = __LIB_38__::func_894(16);
				}
			}
			else if (bParam2)
			{
				if (bParam1)
				{
					sVar0 = __LIB_38__::func_893(21);
				}
				else
				{
					sVar0 = __LIB_38__::func_893(26);
				}
			}
			else if (bParam1)
			{
				sVar0 = __LIB_38__::func_893(11);
			}
			else
			{
				sVar0 = __LIB_38__::func_893(16);
			}
			break;
		case 4:
			if (bParam3)
			{
				if (bParam2)
				{
					if (bParam1)
					{
						sVar0 = __LIB_38__::func_894(22);
					}
					else
					{
						sVar0 = __LIB_38__::func_894(27);
					}
				}
				else if (bParam1)
				{
					sVar0 = __LIB_38__::func_894(12);
				}
				else
				{
					sVar0 = __LIB_38__::func_894(17);
				}
			}
			else if (bParam2)
			{
				if (bParam1)
				{
					sVar0 = __LIB_38__::func_893(22);
				}
				else
				{
					sVar0 = __LIB_38__::func_893(27);
				}
			}
			else if (bParam1)
			{
				sVar0 = __LIB_38__::func_893(12);
			}
			else
			{
				sVar0 = __LIB_38__::func_893(17);
			}
			break;
		case 5:
			if (bParam3)
			{
				if (bParam1)
				{
					sVar0 = __LIB_38__::func_894(3);
				}
				else
				{
					sVar0 = __LIB_38__::func_894(2);
				}
			}
			else if (bParam1)
			{
				sVar0 = __LIB_38__::func_893(3);
			}
			else
			{
				sVar0 = __LIB_38__::func_893(2);
			}
			break;
		case 6:
			break;
	}
	return sVar0;
}

int func_30()//Position - 0x4EA6
{
	var uVar0;
	__LIB_17__::func_865(&uVar0, CLOCK::GET_CLOCK_SECONDS());
	__LIB_17__::func_864(&uVar0, CLOCK::GET_CLOCK_MINUTES());
	__LIB_17__::func_863(&uVar0, CLOCK::GET_CLOCK_HOURS());
	__LIB_3__::func_425(&uVar0, CLOCK::GET_CLOCK_DAY_OF_MONTH());
	__LIB_0__::func_141(&uVar0, CLOCK::GET_CLOCK_MONTH());
	__LIB_0__::func_140(&uVar0, CLOCK::GET_CLOCK_YEAR());
	return uVar0;
}

int func_31(int iParam0, bool bParam1)//Position - 0x786D
{
	if ((((VEHICLE::IS_THIS_MODEL_A_BOAT(iParam0) || VEHICLE::IS_THIS_MODEL_A_PLANE(iParam0)) || VEHICLE::IS_THIS_MODEL_A_HELI(iParam0)) || VEHICLE::IS_THIS_MODEL_A_TRAIN(iParam0)) || VEHICLE::IS_THIS_MODEL_A_BIKE(iParam0))
	{
		return 0;
	}
	if (__LIB_12__::func_390(iParam0))
	{
		return 0;
	}
	if (!bParam1)
	{
		if (((((((iParam0 == joaat("police") || iParam0 == joaat("police2")) || iParam0 == joaat("police3")) || iParam0 == joaat("police4")) || iParam0 == joaat("fbi")) || iParam0 == joaat("fbi2")) || iParam0 == joaat("caddy")) || iParam0 == joaat("caddy2"))
		{
			return 0;
		}
	}
	if ((((((((((((((((((iParam0 == joaat("issi2") || iParam0 == joaat("hotknife")) || iParam0 == joaat("jb700")) || iParam0 == joaat("jester")) || iParam0 == joaat("jester2")) || iParam0 == joaat("stromberg")) || iParam0 == joaat("barrage")) || iParam0 == joaat("kamacho")) || iParam0 == joaat("gb200")) || iParam0 == joaat("fagaloa")) || iParam0 == joaat("tezeract")) || iParam0 == joaat("swinger")) || iParam0 == joaat("imperator")) || iParam0 == joaat("locust")) || iParam0 == joaat("schlagen")) || iParam0 == joaat("outlaw")) || iParam0 == joaat("comet7")) || iParam0 == joaat("youga4")) || iParam0 == joaat("sm722"))
	{
		return 0;
	}
	return 1;
}

void func_32(int iParam0, int iParam1, bool bParam2)//Position - 0xA08A
{
	bool bVar0;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		PED::SET_PED_DEFAULT_COMPONENT_VARIATION(iParam0);
		bVar0 = false;
		if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("MP_F_StripperLite"))
		{
			bVar0 = true;
		}
		switch (iParam1)
		{
			case 0:
				if (bVar0)
				{
					__LIB_39__::func_808(iParam0, 1, 0);
					__LIB_39__::func_807(iParam0, 1, 0);
					__LIB_39__::func_806(iParam0, 1, 0);
					__LIB_39__::func_805(iParam0, 1, 0);
					__LIB_39__::func_981(iParam0, 1, -1, -1);
				}
				else
				{
					__LIB_39__::func_808(iParam0, 1, 1);
					__LIB_39__::func_807(iParam0, 2, 0);
					__LIB_39__::func_806(iParam0, 0, 0);
					__LIB_39__::func_805(iParam0, 0, 0);
					__LIB_39__::func_804(iParam0, 1, 0);
					__LIB_39__::func_803(iParam0, 0, 0);
					__LIB_39__::func_981(iParam0, bParam2, -1, -1);
				}
				break;
			case 1:
				if (bVar0)
				{
					__LIB_39__::func_808(iParam0, 0, 0);
					__LIB_39__::func_807(iParam0, 0, 0);
					__LIB_39__::func_806(iParam0, 0, 0);
					__LIB_39__::func_805(iParam0, 0, 0);
					__LIB_39__::func_804(iParam0, 0, 0);
					__LIB_39__::func_981(iParam0, bParam2, -1, -1);
				}
				else
				{
					__LIB_39__::func_808(iParam0, 0, 0);
					__LIB_39__::func_807(iParam0, 0, 0);
					__LIB_39__::func_806(iParam0, 0, 0);
					__LIB_39__::func_805(iParam0, 0, 0);
					__LIB_39__::func_802(iParam0, 4, 0);
					__LIB_39__::func_804(iParam0, 0, 0);
					__LIB_39__::func_981(iParam0, bParam2, 0, 4);
				}
				break;
			case 2:
				if (bVar0)
				{
					__LIB_39__::func_808(iParam0, 1, 0);
					__LIB_39__::func_807(iParam0, 1, 1);
					__LIB_39__::func_806(iParam0, 1, 0);
					__LIB_39__::func_805(iParam0, 1, 0);
					__LIB_39__::func_981(iParam0, 1, -1, -1);
				}
				else
				{
					__LIB_39__::func_808(iParam0, 0, 1);
					__LIB_39__::func_807(iParam0, 1, 1);
					__LIB_39__::func_806(iParam0, 1, 0);
					__LIB_39__::func_805(iParam0, 1, 1);
					__LIB_39__::func_804(iParam0, 1, 0);
					__LIB_39__::func_803(iParam0, 1, 0);
					__LIB_39__::func_981(iParam0, bParam2, -1, -1);
				}
				break;
			case 3:
				if (bVar0)
				{
					__LIB_39__::func_808(iParam0, 0, 0);
					__LIB_39__::func_807(iParam0, 0, 1);
					__LIB_39__::func_806(iParam0, 0, 1);
					__LIB_39__::func_805(iParam0, 0, 1);
					__LIB_39__::func_804(iParam0, 0, 0);
					__LIB_39__::func_981(iParam0, bParam2, -1, -1);
				}
				else
				{
					__LIB_39__::func_808(iParam0, 0, 0);
					__LIB_39__::func_807(iParam0, 2, 0);
					__LIB_39__::func_806(iParam0, 0, 2);
					__LIB_39__::func_805(iParam0, 1, 1);
					__LIB_39__::func_802(iParam0, 0, 0);
					__LIB_39__::func_804(iParam0, 0, 0);
					__LIB_39__::func_981(iParam0, bParam2, 2, 0);
				}
				break;
			case 4:
				if (bVar0)
				{
					__LIB_39__::func_808(iParam0, 1, 0);
					__LIB_39__::func_807(iParam0, 1, 0);
					__LIB_39__::func_806(iParam0, 1, 0);
					__LIB_39__::func_805(iParam0, 1, 0);
					__LIB_39__::func_981(iParam0, 1, -1, -1);
				}
				else
				{
					__LIB_39__::func_808(iParam0, 1, 0);
					__LIB_39__::func_807(iParam0, 2, 1);
					__LIB_39__::func_806(iParam0, 1, 2);
					__LIB_39__::func_805(iParam0, 0, 2);
					__LIB_39__::func_804(iParam0, 1, 0);
					__LIB_39__::func_803(iParam0, 1, 2);
					__LIB_39__::func_981(iParam0, bParam2, -1, -1);
				}
				break;
			case 5:
				if (bVar0)
				{
					__LIB_39__::func_808(iParam0, 0, 0);
					__LIB_39__::func_807(iParam0, 0, 0);
					__LIB_39__::func_806(iParam0, 0, 0);
					__LIB_39__::func_805(iParam0, 0, 0);
					__LIB_39__::func_804(iParam0, 0, 0);
					__LIB_39__::func_981(iParam0, bParam2, -1, -1);
				}
				else
				{
					__LIB_39__::func_808(iParam0, 1, 1);
					__LIB_39__::func_807(iParam0, 1, 0);
					__LIB_39__::func_806(iParam0, 0, 1);
					__LIB_39__::func_805(iParam0, 0, 2);
					__LIB_39__::func_802(iParam0, 2, 0);
					__LIB_39__::func_804(iParam0, 0, 0);
					__LIB_39__::func_981(iParam0, bParam2, 1, 2);
				}
				break;
			case 6:
				if (bVar0)
				{
					__LIB_39__::func_808(iParam0, 1, 0);
					__LIB_39__::func_807(iParam0, 1, 0);
					__LIB_39__::func_806(iParam0, 1, 0);
					__LIB_39__::func_805(iParam0, 1, 0);
					__LIB_39__::func_981(iParam0, 1, -1, -1);
				}
				else
				{
					__LIB_39__::func_808(iParam0, 0, 0);
					__LIB_39__::func_807(iParam0, 1, 0);
					__LIB_39__::func_806(iParam0, 0, 1);
					__LIB_39__::func_805(iParam0, 0, 1);
					__LIB_39__::func_804(iParam0, 1, 0);
					__LIB_39__::func_803(iParam0, 0, 1);
					__LIB_39__::func_981(iParam0, bParam2, 0, 1);
				}
				break;
			case 7:
				if (bVar0)
				{
					__LIB_39__::func_808(iParam0, 0, 0);
					__LIB_39__::func_807(iParam0, 0, 1);
					__LIB_39__::func_806(iParam0, 0, 0);
					__LIB_39__::func_805(iParam0, 0, 0);
					__LIB_39__::func_804(iParam0, 0, 0);
					__LIB_39__::func_981(iParam0, bParam2, -1, -1);
				}
				else
				{
					__LIB_39__::func_808(iParam0, 1, 0);
					__LIB_39__::func_807(iParam0, 0, 2);
					__LIB_39__::func_806(iParam0, 1, 1);
					__LIB_39__::func_805(iParam0, 0, 1);
					__LIB_39__::func_802(iParam0, 0, 0);
					__LIB_39__::func_804(iParam0, 1, 0);
					__LIB_39__::func_981(iParam0, bParam2, 0, 0);
				}
				break;
			case 8:
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 3, 2, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 4, 0, 1, 0);
				break;
			case 9:
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 0, 0, 1, 0);
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 2, 0, 1, 0);
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 3, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 4, 0, 1, 0);
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 8, 1, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, 0, 0, 0);
				break;
			}
	}
}

void func_33(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x4ACB
{
	__LIB_17__::func_865(uParam0, iParam1);
	__LIB_17__::func_864(uParam0, iParam2);
	__LIB_17__::func_863(uParam0, iParam3);
	__LIB_0__::func_141(uParam0, iParam5);
	__LIB_3__::func_425(uParam0, iParam4);
	__LIB_0__::func_140(uParam0, iParam6);
}

void func_34(int iParam0, int iParam1)//Position - 0x4033
{
	Global_113386.f_243[__LIB_39__::func_393() /*53*/].f_2[iParam0 /*5*/].f_1 = iParam1;
}

void func_35(var uParam0)//Position - 0x42A2
{
	if (*uParam0 != 0)
	{
		GRAPHICS::DELETE_CHECKPOINT(*uParam0);
		*uParam0 = 0;
	}
}

bool func_36()//Position - 0xAC9A
{
	return PAD::IS_CONTROL_JUST_RELEASED(0 /*PLAYER_CONTROL*/, 80 /*INPUT_VEH_CIN_CAM*/);
}

void func_37(var uParam0)//Position - 0xDF83
{
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_9, false))
	{
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_8, false))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(uParam0->f_9))
			{
				VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(uParam0->f_9);
			}
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_8, true);
		}
	}
	uParam0->f_11 = 0;
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_9, false))
	{
		if (!VEHICLE::IS_THIS_MODEL_A_BIKE(uParam0->f_22))
		{
			VEHICLE::SET_VEHICLE_ENGINE_ON(uParam0->f_9, true, true, false);
		}
	}
}

void func_38(var uParam0)//Position - 0xDFFA
{
	uParam0->f_12 = uParam0->f_12;
}

int func_39(int iParam0, int iParam1)//Position - 0xE35E
{
	switch (iParam0)
	{
		case 0:
			return 6;
			break;
		case 1:
			return 10;
			break;
		case 2:
			return 37;
			break;
		case 3:
			if (iParam1 == 2)
			{
				return 38;
			}
			else if (iParam1 == 3)
			{
				return 39;
			}
			else if (iParam1 == 1)
			{
				return 40;
			}
			break;
		case 4:
			return 16;
			break;
		case 5:
			return 27;
			break;
		case 6:
			return 32;
			break;
		case 7:
			return 22;
			break;
		case 8:
			return 26;
			break;
		case 9:
			return 31;
			break;
		case 10:
			return 36;
			break;
	}
	return 6;
}

bool func_40(var uParam0)//Position - 0xE9AF
{
	if (uParam0->f_21 == 0)
	{
		return 0;
	}
	return STREAMING::HAS_MODEL_LOADED(uParam0->f_21);
}

void func_41(var uParam0)//Position - 0xEA2D
{
	if (uParam0->f_22 == 0)
	{
		return;
	}
	STREAMING::REQUEST_MODEL(uParam0->f_22);
}

int func_42(int iParam0)//Position - 0xEA73
{
	if (CAM::IS_SCREEN_FADED_IN())
	{
		CAM::DO_SCREEN_FADE_OUT(iParam0);
	}
	else if (CAM::IS_SCREEN_FADED_OUT())
	{
		return 1;
	}
	return 0;
}

void func_43(float fParam0, int iParam1)//Position - 0x1042E
{
	fParam0->f_4 = 255;
	fParam0->f_5 = 255;
	fParam0->f_6 = 255;
	if (iParam1 == 1)
	{
		fParam0->f_7 = 255;
	}
}

void func_44(var uParam0, int iParam1, int iParam2, int iParam3)//Position - 0x20375
{
	uParam0->f_20 = iParam1;
	uParam0->f_21 = iParam2;
	uParam0->f_22 = iParam3;
}

void func_45(var uParam0, struct<3> Param1, float fParam2)//Position - 0x2038F
{
	uParam0->f_16 = { Param1 };
	uParam0->f_19 = fParam2;
}

void func_46(char* sParam0, char* sParam1)//Position - 0x20914
{
	StringCopy(sParam0, sParam1, 32);
}

void func_47(var uParam0)//Position - 0x20922
{
	uParam0->f_10 = 0;
	uParam0->f_11 = -1;
	uParam0->f_12 = 0;
	uParam0->f_13 = 0f;
	uParam0->f_23 = 13;
}

void func_48(var uParam0)//Position - 0x21883
{
	__LIB_13__::func_808(&(uParam0->f_10));
}

int func_49(int iParam0)//Position - 0x21AFC
{
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		CAM::DO_SCREEN_FADE_IN(iParam0);
	}
	else if (CAM::IS_SCREEN_FADED_IN())
	{
		return 1;
	}
	return 0;
}

void func_50(int iParam0, char* sParam1, int iParam2, int iParam3, var uParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17)//Position - 0x2A0E
{
	int iVar0;
	int iVar1;
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (__LIB_0__::func_929(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1649593.f_1 = 1;
		__LIB_0__::func_928(7, iVar0);
		Global_1649593.f_4659[iVar0] = iParam0;
		StringCopy(&(Global_1649593.f_4659.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1649593.f_4659.f_172[iVar0] = iParam2;
		Global_1649593.f_4659.f_216[iVar0] = iParam3;
		Global_1649593.f_4659.f_183[iVar0] = uParam4;
		Global_1649593.f_4659.f_194[iVar0] = iParam5;
		Global_1649593.f_4659.f_249[iVar0] = iParam6;
		Global_1649593.f_4659.f_260[iVar0] = iParam7;
		Global_1649593.f_4659.f_205[iVar0] = iParam8;
		Global_1649593.f_4659.f_314[iVar0] = iParam9;
		Global_1649593.f_4659.f_325[iVar0] = iParam10;
		Global_1649593.f_4659.f_357[iVar0] = iParam11;
		Global_1649593.f_4659.f_238[iVar0] = iParam12;
		Global_1649593.f_4659.f_271[iVar0] = iParam13;
		Global_1649593.f_4659.f_368[iVar0] = iParam14;
		Global_1649593.f_4659.f_379[iVar0] = iParam15;
		Global_1649593.f_4659.f_390[iVar0] = iParam16;
		Global_1649593.f_4659.f_227[iVar0] = iParam17;
	}
}

void func_51(int iParam0, char* sParam1, var uParam2, var uParam3, int iParam4, int iParam5, char* sParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14)//Position - 0x2CAA
{
	int iVar0;
	int iVar1;
	if (__LIB_1__::func_76(sParam6))
	{
		sParam6 = "NUMBER";
	}
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (__LIB_0__::func_929(3, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1649593.f_1 = 1;
		__LIB_0__::func_928(3, iVar0);
		Global_1649593.f_2839[iVar0] = iParam0;
		StringCopy(&(Global_1649593.f_2839.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1649593.f_2839.f_183[iVar0] = uParam3;
		Global_1649593.f_2839.f_172[iVar0] = uParam2;
		Global_1649593.f_2839.f_205[iVar0] = iParam4;
		Global_1649593.f_2839.f_216[iVar0] = iParam5;
		StringCopy(&(Global_1649593.f_2839.f_259[iVar0 /*16*/]), sParam6, 64);
		Global_1649593.f_2839.f_420[iVar0] = iParam7;
		Global_1649593.f_2839.f_453[iVar0] = iParam8;
		Global_1649593.f_2839.f_431[iVar0] = iParam9;
		Global_1649593.f_2839.f_442[iVar0] = iParam10;
		Global_1649593.f_2839.f_464[iVar0] = iParam11;
		Global_1649593.f_2839.f_475[iVar0] = iParam12;
		Global_1649593.f_2839.f_486[iVar0] = iParam13;
		Global_1649593.f_2839.f_497[iVar0] = iParam14;
	}
}

int func_52(struct<3> Param0)//Position - 0xABF5
{
	float fVar0;
	fVar0 = ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID());
	if (SYSTEM::VDIST2(Param0, __LIB_0__::func_85(PLAYER::PLAYER_ID())) < (150f + (fVar0 * fVar0)))
	{
		return 1;
	}
	return 0;
}

void func_53(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, bool bParam5)//Position - 0xC1CC
{
	__LIB_38__::func_960(fParam0, fParam3, fParam4);
	__LIB_38__::func_959(fParam0, fParam1, fParam2, bParam5);
}

int func_54(int iParam0, struct<3> Param1, struct<3> Param2, struct<3> Param3)//Position - 0xE429
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	fVar3 = 180f;
	fVar4 = 140f;
	fVar5 = 80f;
	if (iParam0 == 0)
	{
		iVar6 = 6;
		iVar7 = 7;
		iVar8 = 8;
	}
	else if (iParam0 == 2)
	{
		iVar6 = 12;
		iVar7 = 13;
		iVar8 = 14;
	}
	else if (iParam0 == 5)
	{
		iVar6 = 27;
		iVar7 = 28;
		iVar8 = 29;
	}
	else if (iParam0 == 6)
	{
		iVar6 = 32;
		iVar7 = 33;
		iVar8 = 34;
	}
	else if (iParam0 == 7)
	{
		iVar6 = 22;
		iVar7 = 23;
		iVar8 = 24;
	}
	if (!__LIB_0__::func_78(Param1, 0f, 0f, 0f, 0))
	{
		Var0 = { Param1 - Param2 };
		Var1 = { Param3 - Param2 };
		fVar2 = MISC::GET_ANGLE_BETWEEN_2D_VECTORS(Var0.f_0, Var0.f_1, Var1.f_0, Var1.f_1);
		if (fVar2 > 180f)
		{
			fVar2 = (360f - fVar2);
		}
		if (fVar2 < fVar5)
		{
			return iVar8;
		}
		else if (fVar2 < fVar4)
		{
			return iVar7;
		}
		else if (fVar2 < fVar3)
		{
			return iVar6;
		}
	}
	return iVar6;
}

void func_55()//Position - 0x845C
{
	iLocal_41 = 0;
	iLocal_42 = 0;
	__LIB_0__::func_532(0, 1, 1, 0, 0, 0, 0);
	__LIB_0__::func_671(1);
}

void func_56(int iParam0, int iParam1)//Position - 0x847A
{
	if (iParam0 == 1)
	{
		__LIB_38__::func_995(0, 0);
		GRAPHICS::ANIMPOSTFX_PLAY("DeathFailOut", 0, false);
		MISC::SET_BIT(&iLocal_41, 1);
		__LIB_38__::func_909(1, 2, 0);
		CAM::SET_CAM_DEATH_FAIL_EFFECT_STATE(2);
	}
	else
	{
		if (BitTest(iLocal_41, 1) || iParam1)
		{
			GRAPHICS::ANIMPOSTFX_STOP("DeathFailOut");
			__LIB_38__::func_909(0, 2, 1);
			CAM::SET_CAM_DEATH_FAIL_EFFECT_STATE(0);
		}
		MISC::CLEAR_BIT(&iLocal_41, 1);
	}
}

void func_57(int iParam0)//Position - 0x521
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	iVar0 = CLOCK::GET_CLOCK_SECONDS();
	iVar1 = CLOCK::GET_CLOCK_MINUTES();
	iVar2 = CLOCK::GET_CLOCK_HOURS();
	iVar3 = CLOCK::GET_CLOCK_DAY_OF_MONTH();
	uVar4 = CLOCK::GET_CLOCK_MONTH() + 1;
	iVar5 = CLOCK::GET_CLOCK_YEAR();
	Global_22893[iParam0 /*9*/].f_2 = iVar0;
	Global_22893[iParam0 /*9*/].f_2.f_1 = iVar1;
	Global_22893[iParam0 /*9*/].f_2.f_2 = iVar2;
	Global_22893[iParam0 /*9*/].f_2.f_3 = iVar3;
	Global_22893[iParam0 /*9*/].f_2.f_4 = uVar4;
	Global_22893[iParam0 /*9*/].f_2.f_5 = iVar5;
}

int func_58()//Position - 0x5A3
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (Global_22893[iVar0 /*9*/].f_8 == 0)
		{
			Global_22723 = iVar0;
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	Global_22723 = 3;
	Global_22893[Global_22723 /*9*/].f_2 = -1;
	Global_22893[Global_22723 /*9*/].f_2.f_1 = 0;
	Global_22893[Global_22723 /*9*/].f_2.f_2 = 0;
	Global_22893[Global_22723 /*9*/].f_2.f_3 = 0;
	Global_22893[Global_22723 /*9*/].f_2.f_5 = 99999;
	while (iVar0 < 2)
	{
		if (Global_22893[iVar0 /*9*/].f_8 == 0 || Global_22893[iVar0 /*9*/].f_8 == 1)
		{
			if (!__LIB_2__::func_831(Global_22893[iVar0 /*9*/].f_2, Global_22893[Global_22723 /*9*/].f_2))
			{
				Global_22723 = iVar0;
			}
		}
		iVar0++;
	}
	if (Global_22723 == 3)
	{
		return 0;
	}
	return 1;
}

int func_59(int iParam0, int iParam1)//Position - 0x31018
{
	if (iParam0 == iParam1)
	{
		return 1;
	}
	if (iParam0 == -1 || iParam1 == -1)
	{
		return 0;
	}
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 1:
				case 2:
				case 3:
				case 4:
				case 5:
				case 6:
				case 7:
				case 8:
				case 9:
				case 10:
				case 11:
				case 27:
					return 1;
				default:
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
				case 2:
				case 3:
				case 4:
				case 5:
				case 6:
				case 7:
				case 8:
				case 9:
				case 11:
				case 27:
					return 1;
				default:
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
				case 1:
				case 3:
				case 4:
				case 5:
				case 11:
				case 27:
					return 1;
				default:
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
				case 1:
				case 2:
				case 5:
				case 11:
					return 1;
				default:
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
				case 1:
				case 2:
				case 11:
				case 27:
					return 1;
				default:
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 0:
				case 1:
				case 2:
				case 3:
					return 1;
				default:
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 0:
				case 1:
				case 7:
				case 8:
				case 9:
				case 10:
				case 11:
				case 27:
					return 1;
				default:
			}
			break;
		case 7:
			switch (iParam1)
			{
				case 0:
				case 1:
				case 6:
				case 8:
				case 11:
				case 27:
					return 1;
				default:
			}
			break;
		case 8:
			switch (iParam1)
			{
				case 0:
				case 1:
				case 6:
				case 7:
				case 10:
				case 11:
				case 27:
					return 1;
				default:
			}
			break;
		case 9:
			switch (iParam1)
			{
				case 0:
				case 1:
				case 6:
					return 1;
				default:
			}
			break;
		case 10:
			switch (iParam1)
			{
				case 0:
				case 6:
				case 8:
				case 27:
					return 1;
				default:
			}
			break;
		case 11:
			switch (iParam1)
			{
				case 0:
				case 1:
				case 2:
				case 3:
				case 4:
				case 6:
				case 7:
				case 8:
				case 27:
					return 1;
				default:
			}
			break;
		case 12:
			switch (iParam1)
			{
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
				case 27:
					return 1;
				default:
			}
			break;
		case 13:
			switch (iParam1)
			{
				case 12:
				case 14:
				case 15:
				case 16:
				case 17:
				case 18:
				case 19:
				case 20:
				case 21:
				case 23:
				case 27:
					return 1;
				default:
			}
			break;
		case 14:
			switch (iParam1)
			{
				case 12:
				case 13:
				case 15:
				case 16:
				case 17:
				case 23:
				case 27:
					return 1;
				default:
			}
			break;
		case 15:
			switch (iParam1)
			{
				case 12:
				case 13:
				case 14:
				case 17:
				case 23:
					return 1;
				default:
			}
			break;
		case 16:
			switch (iParam1)
			{
				case 12:
				case 13:
				case 14:
				case 23:
				case 27:
					return 1;
				default:
			}
			break;
		case 17:
			switch (iParam1)
			{
				case 12:
				case 13:
				case 14:
				case 15:
					return 1;
				default:
			}
			break;
		case 18:
			switch (iParam1)
			{
				case 12:
				case 13:
				case 18:
				case 19:
				case 20:
				case 21:
				case 22:
				case 23:
				case 27:
					return 1;
				default:
			}
			break;
		case 19:
			switch (iParam1)
			{
				case 12:
				case 13:
				case 18:
				case 19:
				case 20:
				case 23:
				case 27:
					return 1;
				default:
			}
			break;
		case 20:
			switch (iParam1)
			{
				case 12:
				case 13:
				case 18:
				case 19:
				case 20:
				case 22:
				case 23:
				case 27:
					return 1;
				default:
			}
			break;
		case 21:
			switch (iParam1)
			{
				case 12:
				case 13:
				case 18:
				case 21:
					return 1;
				default:
			}
			break;
		case 22:
			switch (iParam1)
			{
				case 12:
				case 18:
				case 20:
				case 22:
				case 27:
					return 1;
				default:
			}
			break;
		case 23:
			switch (iParam1)
			{
				case 12:
				case 13:
				case 14:
				case 15:
				case 16:
				case 18:
				case 19:
				case 20:
				case 23:
				case 27:
					return 1;
				default:
			}
			break;
		case 24:
			switch (iParam1)
			{
				case 24:
					return 1;
				default:
			}
			break;
		case 25:
			switch (iParam1)
			{
				case 25:
					return 1;
				default:
			}
			break;
		case 26:
			switch (iParam1)
			{
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
					return 1;
				default:
			}
			break;
		case 27:
			switch (iParam1)
			{
				case 27:
				case 26:
				case 28:
				case 29:
				case 30:
				case 31:
				case 32:
				case 33:
				case 34:
				case 35:
				case 36:
				case 0:
				case 1:
				case 2:
				case 4:
				case 6:
				case 7:
				case 8:
				case 10:
				case 11:
				case 12:
				case 13:
				case 14:
				case 16:
				case 18:
				case 19:
				case 20:
				case 22:
				case 23:
					return 1;
				default:
			}
			break;
		case 28:
			switch (iParam1)
			{
				case 26:
				case 27:
				case 28:
				case 29:
				case 30:
				case 31:
				case 32:
					return 1;
				default:
			}
			break;
		case 29:
			switch (iParam1)
			{
				case 26:
				case 27:
				case 28:
				case 29:
					return 1;
				default:
			}
			break;
		case 30:
			switch (iParam1)
			{
				case 26:
				case 27:
				case 28:
				case 30:
				case 31:
				case 32:
					return 1;
				default:
			}
			break;
		case 31:
			switch (iParam1)
			{
				case 26:
				case 27:
				case 28:
				case 30:
				case 31:
					return 1;
				default:
			}
			break;
		case 32:
			switch (iParam1)
			{
				case 26:
				case 27:
				case 28:
				case 30:
				case 32:
					return 1;
				default:
			}
			break;
		case 33:
			switch (iParam1)
			{
				case 26:
				case 27:
				case 33:
				case 34:
				case 35:
				case 36:
					return 1;
				default:
			}
			break;
		case 34:
			switch (iParam1)
			{
				case 26:
				case 27:
				case 33:
				case 34:
					return 1;
				default:
			}
			break;
		case 35:
			switch (iParam1)
			{
				case 26:
				case 27:
				case 33:
				case 35:
					return 1;
				default:
			}
			break;
		case 36:
			switch (iParam1)
			{
				case 26:
				case 27:
				case 33:
				case 36:
					return 1;
				default:
			}
			break;
		case 37:
			switch (iParam1)
			{
				case 37:
				case 38:
				case 39:
				case 40:
				case 41:
				case 42:
				case 43:
				case 44:
					return 1;
				default:
			}
			break;
		case 38:
			switch (iParam1)
			{
				case 37:
				case 38:
				case 39:
				case 40:
				case 42:
				case 44:
				case 47:
				case 48:
				case 49:
				case 50:
					return 1;
				default:
			}
			break;
		case 39:
			switch (iParam1)
			{
				case 37:
				case 38:
				case 39:
				case 40:
				case 41:
				case 42:
				case 43:
				case 44:
				case 47:
				case 54:
				case 55:
				case 48:
				case 49:
				case 50:
				case 51:
				case 52:
				case 53:
					return 1;
				default:
			}
			break;
		case 40:
			switch (iParam1)
			{
				case 37:
				case 38:
				case 39:
				case 40:
				case 41:
				case 44:
					return 1;
				default:
			}
			break;
		case 41:
			switch (iParam1)
			{
				case 39:
				case 37:
				case 40:
				case 41:
					return 1;
				default:
			}
			break;
		case 42:
			switch (iParam1)
			{
				case 37:
				case 38:
				case 39:
				case 42:
				case 43:
				case 44:
					return 1;
				default:
			}
			break;
		case 43:
			switch (iParam1)
			{
				case 39:
				case 37:
				case 42:
				case 43:
					return 1;
				default:
			}
			break;
		case 44:
			switch (iParam1)
			{
				case 37:
				case 38:
				case 39:
				case 40:
				case 42:
				case 44:
					return 1;
				default:
			}
			break;
		case 45:
			switch (iParam1)
			{
				case 45:
					return 1;
				default:
			}
			break;
		case 46:
			switch (iParam1)
			{
				case 46:
					return 1;
				default:
			}
			break;
		case 47:
			switch (iParam1)
			{
				case 38:
				case 39:
				case 47:
				case 48:
				case 49:
				case 50:
				case 51:
				case 52:
				case 53:
				case 54:
				case 55:
					return 1;
				default:
			}
			break;
		case 48:
			switch (iParam1)
			{
				case 38:
				case 39:
				case 47:
				case 48:
				case 49:
				case 50:
				case 54:
				case 55:
					return 1;
				default:
			}
			break;
		case 49:
			switch (iParam1)
			{
				case 38:
				case 39:
				case 47:
				case 48:
				case 49:
				case 54:
					return 1;
				default:
			}
			break;
		case 50:
			switch (iParam1)
			{
				case 38:
				case 39:
				case 47:
				case 48:
				case 50:
				case 55:
					return 1;
				default:
			}
			break;
		case 51:
			switch (iParam1)
			{
				case 39:
				case 47:
				case 51:
				case 52:
				case 53:
				case 54:
				case 55:
					return 1;
				default:
			}
			break;
		case 52:
			switch (iParam1)
			{
				case 39:
				case 47:
				case 51:
				case 52:
				case 54:
					return 1;
				default:
			}
			break;
		case 53:
			switch (iParam1)
			{
				case 39:
				case 47:
				case 51:
				case 53:
				case 55:
					return 1;
				default:
			}
			break;
		case 54:
			switch (iParam1)
			{
				case 39:
				case 47:
				case 51:
				case 52:
				case 48:
				case 49:
					return 1;
				default:
			}
			break;
		case 55:
			switch (iParam1)
			{
				case 39:
				case 47:
				case 51:
				case 53:
				case 48:
				case 50:
					return 1;
				default:
			}
			break;
		case 56:
			switch (iParam1)
			{
				case 56:
					return 1;
				default:
			}
			break;
		case 57:
			switch (iParam1)
			{
				case 57:
					return 1;
				default:
			}
			break;
		case 58:
			switch (iParam1)
			{
				case 58:
					return 1;
				default:
			}
			break;
		case 59:
			switch (iParam1)
			{
				case 59:
				case 61:
				case 63:
					return 1;
				default:
			}
			break;
		case 60:
			switch (iParam1)
			{
				case 60:
					return 1;
				default:
			}
			break;
		case 61:
			switch (iParam1)
			{
				case 59:
				case 61:
				case 62:
					return 1;
				default:
			}
			break;
		case 62:
			switch (iParam1)
			{
				case 61:
				case 62:
					return 1;
				default:
			}
			break;
		case 63:
			switch (iParam1)
			{
				case 59:
				case 63:
				case 64:
					return 1;
				default:
			}
			break;
		case 64:
			switch (iParam1)
			{
				case 63:
				case 64:
					return 1;
				default:
			}
			break;
		case 65:
			switch (iParam1)
			{
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
				case 76:
				case 77:
				case 78:
				case 79:
				case 80:
					return 1;
				default:
			}
			break;
		case 66:
			switch (iParam1)
			{
				case 65:
				case 66:
				case 68:
				case 69:
				case 71:
				case 72:
				case 73:
				case 74:
				case 76:
				case 77:
				case 78:
				case 79:
					return 1;
				default:
			}
			break;
		case 67:
			switch (iParam1)
			{
				case 65:
				case 67:
				case 68:
				case 70:
				case 71:
				case 72:
				case 73:
				case 75:
				case 76:
				case 77:
				case 79:
				case 80:
					return 1;
				default:
			}
			break;
		case 68:
			switch (iParam1)
			{
				case 65:
				case 66:
				case 67:
				case 68:
				case 69:
				case 70:
				case 71:
				case 72:
				case 78:
					return 1;
				default:
			}
			break;
		case 69:
			switch (iParam1)
			{
				case 65:
				case 66:
				case 68:
				case 69:
				case 71:
				case 72:
				case 78:
					return 1;
				default:
			}
			break;
		case 70:
			switch (iParam1)
			{
				case 65:
				case 67:
				case 68:
				case 70:
				case 71:
				case 72:
					return 1;
				default:
			}
			break;
		case 71:
			switch (iParam1)
			{
				case 65:
				case 66:
				case 67:
				case 68:
				case 69:
				case 70:
				case 71:
					return 1;
				default:
			}
			break;
		case 72:
			switch (iParam1)
			{
				case 65:
				case 66:
				case 67:
				case 68:
				case 69:
				case 70:
				case 72:
					return 1;
				default:
			}
			break;
		case 73:
			switch (iParam1)
			{
				case 65:
				case 66:
				case 67:
				case 73:
				case 74:
				case 75:
				case 76:
				case 77:
				case 78:
				case 79:
				case 80:
					return 1;
				default:
			}
			break;
		case 74:
			switch (iParam1)
			{
				case 65:
				case 66:
				case 73:
				case 74:
				case 76:
				case 77:
				case 78:
				case 79:
					return 1;
				default:
			}
			break;
		case 75:
			switch (iParam1)
			{
				case 65:
				case 67:
				case 73:
				case 75:
				case 76:
				case 77:
				case 79:
				case 80:
					return 1;
				default:
			}
			break;
		case 76:
			switch (iParam1)
			{
				case 65:
				case 66:
				case 67:
				case 73:
				case 74:
				case 75:
				case 76:
				case 80:
					return 1;
				default:
			}
			break;
		case 77:
			switch (iParam1)
			{
				case 65:
				case 66:
				case 67:
				case 73:
				case 74:
				case 75:
				case 77:
				case 80:
					return 1;
				default:
			}
			break;
		case 78:
			switch (iParam1)
			{
				case 65:
				case 66:
				case 68:
				case 69:
				case 73:
				case 74:
				case 78:
					return 1;
				default:
			}
			break;
		case 79:
			switch (iParam1)
			{
				case 65:
				case 66:
				case 67:
				case 73:
				case 74:
				case 75:
				case 79:
					return 1;
				default:
			}
			break;
		case 80:
			switch (iParam1)
			{
				case 65:
				case 67:
				case 73:
				case 75:
				case 76:
				case 77:
				case 80:
					return 1;
				default:
			}
			break;
		case 81:
			switch (iParam1)
			{
				case 81:
				case 82:
				case 83:
				case 84:
				case 85:
				case 86:
				case 87:
				case 88:
				case 89:
				case 90:
				case 91:
				case 92:
				case 93:
				case 94:
				case 95:
				case 96:
					return 1;
				default:
			}
			break;
		case 82:
			switch (iParam1)
			{
				case 81:
				case 82:
				case 84:
				case 85:
				case 87:
				case 88:
				case 89:
				case 90:
				case 92:
				case 93:
				case 94:
				case 95:
					return 1;
				default:
			}
			break;
		case 83:
			switch (iParam1)
			{
				case 81:
				case 83:
				case 84:
				case 86:
				case 87:
				case 88:
				case 89:
				case 91:
				case 92:
				case 93:
				case 95:
				case 96:
					return 1;
				default:
			}
			break;
		case 84:
			switch (iParam1)
			{
				case 81:
				case 82:
				case 83:
				case 84:
				case 85:
				case 86:
				case 87:
				case 88:
				case 94:
					return 1;
				default:
			}
			break;
		case 85:
			switch (iParam1)
			{
				case 81:
				case 82:
				case 84:
				case 85:
				case 87:
				case 88:
				case 94:
					return 1;
				default:
			}
			break;
		case 86:
			switch (iParam1)
			{
				case 81:
				case 83:
				case 84:
				case 86:
				case 87:
				case 88:
					return 1;
				default:
			}
			break;
		case 87:
			switch (iParam1)
			{
				case 81:
				case 82:
				case 83:
				case 84:
				case 85:
				case 86:
				case 87:
					return 1;
				default:
			}
			break;
		case 88:
			switch (iParam1)
			{
				case 81:
				case 82:
				case 83:
				case 84:
				case 85:
				case 86:
				case 88:
					return 1;
				default:
			}
			break;
		case 89:
			switch (iParam1)
			{
				case 81:
				case 82:
				case 83:
				case 89:
				case 90:
				case 91:
				case 92:
				case 93:
				case 94:
				case 95:
				case 96:
					return 1;
				default:
			}
			break;
		case 90:
			switch (iParam1)
			{
				case 81:
				case 82:
				case 89:
				case 90:
				case 92:
				case 93:
				case 94:
				case 95:
					return 1;
				default:
			}
			break;
		case 91:
			switch (iParam1)
			{
				case 81:
				case 83:
				case 89:
				case 91:
				case 92:
				case 93:
				case 95:
				case 96:
					return 1;
				default:
			}
			break;
		case 92:
			switch (iParam1)
			{
				case 81:
				case 82:
				case 83:
				case 89:
				case 90:
				case 91:
				case 92:
				case 96:
					return 1;
				default:
			}
			break;
		case 93:
			switch (iParam1)
			{
				case 81:
				case 82:
				case 83:
				case 89:
				case 90:
				case 91:
				case 93:
				case 96:
					return 1;
				default:
			}
			break;
		case 94:
			switch (iParam1)
			{
				case 81:
				case 82:
				case 84:
				case 85:
				case 89:
				case 90:
				case 94:
					return 1;
				default:
			}
			break;
		case 95:
			switch (iParam1)
			{
				case 81:
				case 82:
				case 83:
				case 89:
				case 90:
				case 91:
				case 95:
					return 1;
				default:
			}
			break;
		case 96:
			switch (iParam1)
			{
				case 81:
				case 83:
				case 89:
				case 91:
				case 92:
				case 93:
				case 96:
					return 1;
				default:
			}
			break;
		case 97:
			switch (iParam1)
			{
				case 97:
					return 1;
				default:
			}
			break;
		case 98:
			switch (iParam1)
			{
				case 98:
					return 1;
				default:
			}
			break;
		default:
			break;
	}
	return 0;
}

void func_60(bool bParam0)//Position - 0x52AE9
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	char cVar7[64];
	if (bParam0 == 8)
	{
		__LIB_0__::func_186(129, 1, -1);
		return;
	}
	if (bParam0 == 9)
	{
		__LIB_0__::func_186(135, 1, -1);
		return;
	}
	if (bParam0 == 10)
	{
		__LIB_0__::func_186(136, 1, -1);
		return;
	}
	if (bParam0 == 11)
	{
		__LIB_0__::func_186(137, 1, -1);
		return;
	}
	if (bParam0 == 12)
	{
		iVar0 = NETWORK::GET_CLOUD_TIME_AS_INT();
		__LIB_0__::func_413(8272, iVar0 + 2880, -1, 1, 0);
		return;
	}
	if (bParam0 == 13)
	{
		iVar1 = NETWORK::GET_CLOUD_TIME_AS_INT();
		__LIB_0__::func_413(8273, iVar1 + 2880, -1, 1, 0);
		return;
	}
	if (bParam0 == 14)
	{
		iVar2 = NETWORK::GET_CLOUD_TIME_AS_INT();
		__LIB_0__::func_413(8274, iVar2 + 2880, -1, 1, 0);
		return;
	}
	if (bParam0 == 15)
	{
		iVar3 = NETWORK::GET_CLOUD_TIME_AS_INT();
		__LIB_0__::func_413(8275, iVar3 + 2880, -1, 1, 0);
		return;
	}
	if (bParam0 == 16)
	{
		iVar4 = NETWORK::GET_CLOUD_TIME_AS_INT();
		__LIB_0__::func_413(8276, iVar4 + 2880, -1, 1, 0);
		return;
	}
	if (bParam0 == 17)
	{
		iVar5 = NETWORK::GET_CLOUD_TIME_AS_INT();
		__LIB_0__::func_413(8277, iVar5 + 2880, -1, 1, 0);
		return;
	}
	bVar6 = false;
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (!BitTest(Global_113386.f_20564.f_471, bParam0))
		{
			bVar6 = true;
			MISC::SET_BIT(&(Global_113386.f_20564.f_471), bParam0);
		}
	}
	else if (!BitTest(Global_113386.f_20564.f_471, bParam0) || !BitTest(Global_2359296[__LIB_0__::func_155() /*5567*/].f_681.f_10, bParam0))
	{
		bVar6 = true;
		MISC::SET_BIT(&(Global_113386.f_20564.f_471), bParam0);
		MISC::SET_BIT(&(Global_2359296[__LIB_0__::func_155() /*5567*/].f_681.f_10), bParam0);
	}
	if (bVar6)
	{
		StringCopy(&cVar7, "CHAR_LIFEINVADER", 64);
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("COUP_STR" /* GXT: You have received a new promotion for ~a~ */);
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(__LIB_0__::func_181(bParam0));
		HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&cVar7, &cVar7, true, 0, "", 0);
	}
}

void func_61(bool bParam0)//Position - 0x4A35
{
	Global_1660999 = bParam0;
	__LIB_0__::func_513(139, bParam0, -1, 1);
}

int func_62(int iParam0)//Position - 0x5706B
{
	if (iParam0 != __LIB_0__::func_162())
	{
		if (BitTest(Global_1853348[iParam0 /*834*/].f_267.f_465.f_2, 17))
		{
			return 1;
		}
		if (iParam0 == PLAYER::PLAYER_ID())
		{
			return __LIB_0__::func_369(9631, -1, 0) != 0;
		}
	}
	return 0;
}

int func_63()//Position - 0x570F9
{
	return __LIB_0__::func_369(9834, -1, 0);
}

void func_64(int iParam0, bool bParam1)//Position - 0x2EC0F
{
	if (bParam1)
	{
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
		if (!__LIB_0__::func_431(iParam0, 6, 1))
		{
			__LIB_13__::func_768(iParam0, 6, 1);
			Global_100493.f_376++;
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				PLAYER::FORCE_CLEANUP(8);
			}
		}
	}
	else if (__LIB_0__::func_431(iParam0, 6, 1))
	{
		__LIB_13__::func_776(iParam0, 6, 1);
		if (Global_100493.f_376 > 0)
		{
			Global_100493.f_376 = (Global_100493.f_376 - 1);
		}
		BRAIN::REACTIVATE_NAMED_WORLD_BRAINS_WAITING_TILL_OUT_OF_RANGE("act_cinema");
	}
}

void func_65(int iParam0, bool bParam1)//Position - 0x2EC8F
{
	if (bParam1)
	{
		Global_100493.f_472 = iParam0;
		if (!__LIB_0__::func_431(iParam0, 5, 1))
		{
			__LIB_13__::func_768(iParam0, 5, 1);
			__LIB_1__::func_714(iParam0);
			Global_100493.f_375++;
		}
	}
	else if (__LIB_0__::func_431(iParam0, 5, 1))
	{
		__LIB_13__::func_776(iParam0, 5, 1);
		__LIB_1__::func_714(iParam0);
		if (Global_100493.f_375 > 0)
		{
			Global_100493.f_375 = (Global_100493.f_375 - 1);
		}
	}
}

int func_66(int iParam0, int iParam1)//Position - 0x78C97
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	var uVar6;
	iVar5 = ENTITY::GET_ENTITY_MODEL(iParam0);
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		iVar2 = iVar1;
		iVar4 = __LIB_0__::func_453(iParam0, iVar2);
		if (__LIB_0__::func_233(iVar5, 14, iVar4, -1))
		{
			uVar6 = __LIB_0__::func_279(iVar5, 14, iVar1);
			Stack.Push(iParam0);
			Stack.Push(14);
			Stack.Push(uVar6);
			Stack.Push(0);
			Stack.Push(-1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Stack.Push(-1);
			Stack.Push(-1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Call_Loc(*iParam1);
		}
		iVar1++;
	}
	iVar0 = 0;
	while (iVar0 <= 14)
	{
		iVar3 = iVar0;
		if ((iVar3 != 12 && iVar3 != 13) && iVar3 != 14)
		{
			iVar4 = __LIB_0__::func_350(iParam0, iVar3);
			if (__LIB_0__::func_233(iVar5, iVar3, iVar4, -1))
			{
				uVar6 = __LIB_0__::func_279(iVar5, iVar3, -1);
				Stack.Push(iParam0);
				Stack.Push(iVar3);
				Stack.Push(uVar6);
				Stack.Push(0);
				Stack.Push(-1);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Stack.Push(-1);
				Stack.Push(-1);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Call_Loc(*iParam1);
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_67(int iParam0)//Position - 0x9936D
{
	return __LIB_0__::func_431(iParam0, 8, 1);
}

void func_68(int iParam0, bool bParam1)//Position - 0x9A9BE
{
	if (bParam1)
	{
		if (!__LIB_0__::func_431(iParam0, 1, 1))
		{
			__LIB_13__::func_768(iParam0, 1, 1);
		}
	}
	else if (__LIB_0__::func_431(iParam0, 1, 1))
	{
		__LIB_13__::func_776(iParam0, 1, 1);
	}
}

void func_69(int iParam0, bool bParam1)//Position - 0x9B46D
{
	if (bParam1)
	{
		if (!__LIB_0__::func_431(iParam0, 15, 1))
		{
			__LIB_13__::func_768(iParam0, 15, 1);
		}
	}
	else if (__LIB_0__::func_431(iParam0, 15, 1))
	{
		__LIB_13__::func_776(iParam0, 15, 1);
	}
}

void func_70(int iParam0, bool bParam1)//Position - 0x9B4E0
{
	if (bParam1)
	{
		if (!__LIB_0__::func_431(iParam0, 9, 0))
		{
			__LIB_13__::func_768(iParam0, 9, 0);
		}
	}
	else if (__LIB_0__::func_431(iParam0, 9, 0))
	{
		__LIB_13__::func_776(iParam0, 9, 0);
	}
}

void func_71(int iParam0, bool bParam1)//Position - 0x9BE2E
{
	int iVar0;
	int iVar1;
	if (bParam1)
	{
		if (!__LIB_0__::func_431(iParam0, 2, 0))
		{
			__LIB_13__::func_768(iParam0, 2, 0);
			__LIB_1__::func_714(iParam0);
			iVar0 = __LIB_0__::func_328(iParam0);
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (__LIB_0__::func_3() == 0)
				{
					iVar1 = __LIB_0__::func_369(827, -1, 0);
					MISC::SET_BIT(&iVar1, iVar0);
					__LIB_0__::func_413(827, iVar1, -1, 1, 0);
				}
			}
			else
			{
				MISC::SET_BIT(&(Global_113386.f_668.f_60), iVar0);
			}
		}
	}
	else if (__LIB_0__::func_431(iParam0, 2, 0))
	{
		__LIB_13__::func_776(iParam0, 2, 0);
	}
}

void func_72(int iParam0, bool bParam1)//Position - 0x9D5CF
{
	if (bParam1)
	{
		if (!__LIB_0__::func_431(iParam0, 18, 1))
		{
			__LIB_13__::func_768(iParam0, 18, 1);
		}
	}
	else if (__LIB_0__::func_431(iParam0, 18, 1))
	{
		__LIB_13__::func_776(iParam0, 18, 1);
	}
}

bool func_73(int iParam0)//Position - 0x9E3B4
{
	return __LIB_0__::func_431(iParam0, 14, 1);
}

bool func_74(int iParam0)//Position - 0x9EC14
{
	return __LIB_0__::func_431(iParam0, 15, 1);
}

bool func_75(int iParam0)//Position - 0x9EC25
{
	return __LIB_0__::func_431(iParam0, 4, 1);
}

bool func_76(int iParam0)//Position - 0x9F96A
{
	return __LIB_0__::func_431(iParam0, 3, 1);
}

bool func_77(int iParam0)//Position - 0x9FB04
{
	return __LIB_0__::func_431(iParam0, 18, 1);
}

int func_78(var uParam0)//Position - 0x3EF0
{
	if (uParam0->f_9)
	{
		if (__LIB_0__::func_431(*uParam0, 10, 1))
		{
			return 1;
		}
		if (uParam0->f_1 == 1)
		{
			if (__LIB_0__::func_431(*uParam0, 19, 1))
			{
				return 1;
			}
		}
		if (!Global_100493.f_16)
		{
			return 1;
		}
		if (Global_78319)
		{
			if (Global_1574654.f_4)
			{
				return 1;
			}
		}
		else if (uParam0->f_9 && uParam0->f_11 != 0)
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 82.34222f, -1310.2776f, 25.770123f, 142.89174f, -1274.1537f, 46.512486f, 62f, false, true, 0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_79(int iParam0, bool bParam1, bool bParam2, int iParam3)//Position - 0x957FC
{
	bool bVar0;
	int iVar1;
	int iVar2;
	if (__LIB_14__::func_404(1))
	{
		if (__LIB_13__::func_992(iParam0, iParam3))
		{
			if (!(ENTITY::DOES_ENTITY_EXIST(Global_2815059.f_304[0]) && __LIB_1__::func_659(PLAYER::PLAYER_ID())) && !ENTITY::DOES_ENTITY_EXIST(Global_103231))
			{
				return 0;
			}
			if (!(ENTITY::DOES_ENTITY_EXIST(Global_2815059.f_304[1]) && __LIB_1__::func_659(PLAYER::PLAYER_ID())) && !ENTITY::DOES_ENTITY_EXIST(Global_103231))
			{
				return 0;
			}
		}
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && __LIB_0__::func_328(iParam0) == 1)
		{
			if ((__LIB_1__::func_101(PLAYER::PLAYER_PED_ID()) || __LIB_12__::func_628(PLAYER::PLAYER_ID())) || __LIB_1__::func_748(PLAYER::PLAYER_ID()))
			{
				return 0;
			}
		}
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (__LIB_1__::func_832(PLAYER::PLAYER_ID()))
			{
				return 0;
			}
		}
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (__LIB_0__::func_927(PLAYER::PLAYER_ID()))
			{
				return 0;
			}
		}
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (iParam0 == 46 && ((Global_262145.f_21612 /* Tunable: 311722703 */ && __LIB_0__::func_389(PLAYER::PLAYER_ID())) || (Global_262145.f_21611 /* Tunable: GR_DISABLE_WEAPON_WORKSHOP */ && __LIB_0__::func_393(PLAYER::PLAYER_ID()))))
			{
				return 0;
			}
		}
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (iParam0 == 48 && (Global_262145.f_24709 /* Tunable: 1908565944 */ && __LIB_12__::func_512(PLAYER::PLAYER_ID())))
			{
				return 0;
			}
		}
		if (bParam1)
		{
			if ((!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) || ((!CAM::IS_GAMEPLAY_CAM_RENDERING() && !CAM::IS_AIM_CAM_ACTIVE()) && !bParam2)) || __LIB_0__::func_719())
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if ((!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) || !PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID())) && !__LIB_13__::func_992(iParam0, iParam3))
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 198.22726f, 5176.4146f, -89.99727f, 201.1166f, 5174.4595f, -87.24727f, 1.5f, false, true, 0) && __LIB_3__::func_145(iParam0, iParam3))
				{
				}
				else if (__LIB_13__::func_700(PLAYER::PLAYER_PED_ID()) && __LIB_13__::func_993(iParam0, iParam3))
				{
				}
				else if (__LIB_14__::func_287(iParam0, iParam3) && __LIB_13__::func_647())
				{
				}
				else
				{
					return 0;
				}
			}
			bVar0 = false;
			if (__LIB_13__::func_992(iParam0, iParam3))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Global_2815059.f_304[0]))
				{
					iVar1 = Global_2815059.f_304[0];
					bVar0 = true;
				}
			}
			else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 198.22726f, 5176.4146f, -89.99727f, 201.1166f, 5174.4595f, -87.24727f, 1.5f, false, true, 0) && __LIB_3__::func_145(iParam0, iParam3))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Global_1965535))
				{
					iVar1 = Global_1965535;
					bVar0 = true;
				}
			}
			else if (__LIB_13__::func_993(iParam0, iParam3) && __LIB_13__::func_700(PLAYER::PLAYER_PED_ID()))
			{
				if (__LIB_10__::func_575(PLAYER::PLAYER_PED_ID()))
				{
					iVar1 = Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_465.f_5[0];
				}
				else
				{
					iVar1 = Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_465.f_5[1];
				}
				if (ENTITY::DOES_ENTITY_EXIST(iVar1))
				{
					bVar0 = true;
				}
			}
			else if (__LIB_14__::func_287(iParam0, iParam3) && __LIB_13__::func_647())
			{
				iVar1 = Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_484;
				if (ENTITY::DOES_ENTITY_EXIST(iVar1))
				{
					bVar0 = true;
				}
			}
			else
			{
				iVar1 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			}
			if (ENTITY::DOES_ENTITY_EXIST(iVar1))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar1, false))
				{
					if (!ENTITY::IS_ENTITY_UPSIDEDOWN(iVar1))
					{
						if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar1, -1, false) == PLAYER::PLAYER_PED_ID())
						{
							if (!PED::IS_PED_BEING_JACKED(PLAYER::PLAYER_PED_ID()) && !TASK::GET_IS_TASK_ACTIVE(PLAYER::PLAYER_PED_ID(), 2))
							{
								if (!ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(iVar1) && !__LIB_13__::func_992(iParam0, iParam3))
								{
									bVar0 = true;
								}
							}
						}
					}
				}
			}
			if (!bVar0)
			{
				return 0;
			}
		}
		if (((((((((((((((((!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || TASK::IS_PED_GETTING_UP(PLAYER::PLAYER_PED_ID())) || FIRE::IS_ENTITY_ON_FIRE(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !bParam2)) || (!PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID()) && !bParam2)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(PLAYER::PLAYER_PED_ID())) || HUD::IS_HUD_COMPONENT_ACTIVE(19)) || CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE()) || __LIB_0__::func_134()) || __LIB_17__::func_595(iParam0)) || __LIB_0__::func_629()) || __LIB_0__::func_879()) || __LIB_0__::func_691())
		{
			return 0;
		}
		if ((((__LIB_0__::func_201() || __LIB_0__::func_629()) || Global_31962) || Global_1836610) || Global_1836746)
		{
			return 0;
		}
		if ((!__LIB_0__::func_719() && __LIB_0__::func_193()) && (__LIB_0__::func_328(iParam0) != 4 || MISC::GET_HASH_KEY(&(Global_23150.f_1)) != joaat("PIM_TITLE1")))
		{
			return 0;
		}
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (Global_1574964)
			{
				return 0;
			}
			if (BitTest(Global_2815059.f_428.f_5, 0))
			{
				return 0;
			}
			if (__LIB_0__::func_983())
			{
				return 0;
			}
			if (__LIB_2__::func_821(PLAYER::PLAYER_ID()))
			{
				if (__LIB_14__::func_407(iParam0, __LIB_0__::func_492(PLAYER::PLAYER_ID())))
				{
					if (__LIB_14__::func_286(iParam0))
					{
						return 0;
					}
				}
			}
			if (__LIB_0__::func_979(PLAYER::PLAYER_ID(), 21))
			{
				return 0;
			}
			if (__LIB_0__::func_979(PLAYER::PLAYER_ID(), 25))
			{
				return 0;
			}
			if (__LIB_1__::func_613(PLAYER::PLAYER_ID()) == 3)
			{
				if (__LIB_0__::func_525(PLAYER::PLAYER_ID()) == 8 || __LIB_0__::func_525(PLAYER::PLAYER_ID()) == 9)
				{
					return 0;
				}
			}
			if (Global_2815059.f_28.f_41)
			{
				if (__LIB_0__::func_328(iParam0) == 4)
				{
					return 0;
				}
			}
			if ((BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_30, 14) || BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_30, 11)) || Global_1946179)
			{
				if (__LIB_0__::func_328(iParam0) == 4)
				{
					return 0;
				}
			}
			if (Global_1574632.f_18 != 0)
			{
				return 0;
			}
			if (!__LIB_0__::func_796(PLAYER::PLAYER_ID()))
			{
				if ((__LIB_0__::func_315(PLAYER::PLAYER_ID()) && ((((__LIB_0__::func_492(PLAYER::PLAYER_ID()) == 159 || __LIB_0__::func_492(PLAYER::PLAYER_ID()) == 164) || __LIB_0__::func_492(PLAYER::PLAYER_ID()) == 142) || __LIB_0__::func_492(PLAYER::PLAYER_ID()) == 148) || __LIB_0__::func_492(PLAYER::PLAYER_ID()) == 153)) || __LIB_13__::func_703() != 0)
				{
					if (__LIB_0__::func_328(iParam0) == 1)
					{
						return 0;
					}
					if (__LIB_0__::func_328(iParam0) == 0)
					{
						return 0;
					}
				}
				else if ((((((__LIB_0__::func_492(PLAYER::PLAYER_ID()) == 167 || __LIB_0__::func_492(PLAYER::PLAYER_ID()) == 168) || __LIB_0__::func_492(PLAYER::PLAYER_ID()) == 169) || __LIB_0__::func_492(PLAYER::PLAYER_ID()) == 190) || __LIB_0__::func_492(PLAYER::PLAYER_ID()) == 191) || __LIB_0__::func_492(PLAYER::PLAYER_ID()) == 192) && __LIB_13__::func_703() == 0)
				{
					if (__LIB_0__::func_328(iParam0) == 1)
					{
						return 1;
					}
				}
			}
			else
			{
				if (__LIB_0__::func_315(PLAYER::PLAYER_ID()) && ((((__LIB_0__::func_492(PLAYER::PLAYER_ID()) == 159 || __LIB_0__::func_492(PLAYER::PLAYER_ID()) == 164) || __LIB_0__::func_492(PLAYER::PLAYER_ID()) == 142) || __LIB_0__::func_492(PLAYER::PLAYER_ID()) == 148) || __LIB_0__::func_492(PLAYER::PLAYER_ID()) == 153))
				{
					if (__LIB_0__::func_328(iParam0) == 3)
					{
						return 0;
					}
				}
				if ((__LIB_0__::func_315(PLAYER::PLAYER_ID()) && ((((__LIB_0__::func_492(PLAYER::PLAYER_ID()) == 159 || __LIB_0__::func_492(PLAYER::PLAYER_ID()) == 164) || __LIB_0__::func_492(PLAYER::PLAYER_ID()) == 142) || __LIB_0__::func_492(PLAYER::PLAYER_ID()) == 148) || __LIB_0__::func_492(PLAYER::PLAYER_ID()) == 153)) || __LIB_13__::func_703() != 0)
				{
					if (__LIB_0__::func_328(iParam0) == 1)
					{
						return 0;
					}
					if (__LIB_0__::func_328(iParam0) == 0)
					{
						return 0;
					}
				}
				else if ((((((__LIB_0__::func_492(PLAYER::PLAYER_ID()) == 167 || __LIB_0__::func_492(PLAYER::PLAYER_ID()) == 168) || __LIB_0__::func_492(PLAYER::PLAYER_ID()) == 169) || __LIB_0__::func_492(PLAYER::PLAYER_ID()) == 190) || __LIB_0__::func_492(PLAYER::PLAYER_ID()) == 191) || __LIB_0__::func_492(PLAYER::PLAYER_ID()) == 192) && __LIB_13__::func_703() == 0)
				{
					if (__LIB_0__::func_328(iParam0) == 1)
					{
						return 1;
					}
				}
			}
		}
		if (__LIB_1__::func_613(PLAYER::PLAYER_ID()) == 4 || __LIB_1__::func_727(PLAYER::PLAYER_ID(), 14))
		{
			if (__LIB_0__::func_328(iParam0) != 3)
			{
				return 0;
			}
			else
			{
				return 1;
			}
		}
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar2 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			if (__LIB_14__::func_408(iVar2))
			{
				if (__LIB_0__::func_328(iParam0) != 3)
				{
					return 0;
				}
				else
				{
					return 1;
				}
			}
		}
		if (iParam0 == 50)
		{
			if (__LIB_14__::func_406(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_9))
			{
				return 0;
			}
			if (((PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || __LIB_4__::func_850(PLAYER::PLAYER_PED_ID()) > 9) || Global_2667225.f_2681) || BitTest(Global_1946250.f_4, 2))
			{
				return 0;
			}
		}
		return 1;
	}
	return 0;
}

int func_80(var uParam0, int iParam1)//Position - 0x9FBEE
{
	char* sVar0;
	struct<3> Var1;
	int iVar2;
	int iVar3;
	char* sVar4;
	struct<3> Var5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	char* sVar10;
	struct<3> Var11;
	int iVar12;
	int iVar13;
	char* sVar14;
	struct<3> Var15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	char* sVar20;
	struct<3> Var21;
	int iVar22;
	int iVar23;
	char* sVar24;
	struct<3> Var25;
	int iVar26;
	int iVar27;
	int iVar28;
	char* sVar29;
	struct<3> Var30;
	int iVar31;
	int iVar32;
	if (Global_3)
	{
		uParam0->f_10 = 1;
		return 1;
	}
	if (Global_78319)
	{
		if (__LIB_0__::func_959())
		{
			uParam0->f_10 = 1;
			return 1;
		}
		if (!Global_100493.f_77[iParam1])
		{
			uParam0->f_10 = 1;
			return 1;
		}
		if (__LIB_14__::func_353(PLAYER::PLAYER_ID()))
		{
			uParam0->f_10 = 1;
			return 1;
		}
		if (iParam1 == 46)
		{
			if (!BitTest(Global_4718592.f_169366.f_4, 0))
			{
				sVar0 = __LIB_3__::func_285(iParam1);
				Var1 = { __LIB_0__::func_785(iParam1, 0) };
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
				{
					iVar2 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(Var1, sVar0);
					iVar3 = INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID());
					if (iVar2 != 0 && iVar3 != 0)
					{
						if (iVar3 != iVar2)
						{
							if (Global_1853185 != __LIB_0__::func_162())
							{
								if (((((BitTest(Global_1853348[Global_1853185 /*834*/].f_267.f_273, 3) || BitTest(Global_1853348[Global_1853185 /*834*/].f_267.f_273, 4)) || BitTest(Global_1853348[Global_1853185 /*834*/].f_267.f_273, 5)) || BitTest(Global_1853348[Global_1853185 /*834*/].f_267.f_273, 0)) || BitTest(Global_1853348[Global_1853185 /*834*/].f_267.f_273, 1)) || BitTest(Global_1853348[Global_1853185 /*834*/].f_267.f_273, 2))
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		else if (iParam1 == 47)
		{
			if (!Global_262145.f_23132 /* Tunable: 226347461 */)
			{
				if (!__LIB_1__::func_748(PLAYER::PLAYER_ID()) && !__LIB_1__::func_29(PLAYER::PLAYER_ID(), 1, 0))
				{
					sVar4 = __LIB_3__::func_285(iParam1);
					Var5 = { __LIB_0__::func_785(iParam1, 0) };
					if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar4))
					{
						iVar6 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(Var5, sVar4);
						iVar7 = INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID());
						if (iVar6 != 0 && iVar7 != 0)
						{
							if (iVar7 != iVar6)
							{
								if (Global_1853190 != __LIB_0__::func_162())
								{
									if (__LIB_3__::func_927(Global_1853190))
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
		else if (iParam1 == 48)
		{
			iVar8 = 1;
			if (__LIB_14__::func_471(iParam1, &iVar8, 0))
			{
				if (__LIB_12__::func_512(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_9))
				{
					return 1;
				}
			}
		}
		else if (iParam1 == 49)
		{
			iVar9 = 1;
			if (__LIB_14__::func_471(iParam1, &iVar9, 0))
			{
				if (__LIB_13__::func_701(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_9))
				{
					return 1;
				}
			}
		}
		else if (iParam1 == 50)
		{
			if (!__LIB_1__::func_748(PLAYER::PLAYER_ID()) && !__LIB_1__::func_29(PLAYER::PLAYER_ID(), 1, 0))
			{
				sVar10 = __LIB_3__::func_285(iParam1);
				Var11 = { __LIB_0__::func_785(iParam1, 0) };
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar10))
				{
					iVar12 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(Var11, sVar10);
					iVar13 = INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID());
					if (iVar12 != 0 && iVar13 != 0)
					{
						if (iVar13 != iVar12)
						{
							if (Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_9 != __LIB_0__::func_162())
							{
								if (__LIB_9__::func_547(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_9) && !Global_262145.f_26914 /* Tunable: VC_PENTHOUSE_DISABLE_BARBER */)
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		else if (iParam1 == 51)
		{
			if (!__LIB_1__::func_748(PLAYER::PLAYER_ID()) && !__LIB_1__::func_29(PLAYER::PLAYER_ID(), 1, 0))
			{
				sVar14 = __LIB_3__::func_285(iParam1);
				Var15 = { __LIB_0__::func_785(iParam1, 0) };
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar14))
				{
					iVar16 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(Var15, sVar14);
					iVar17 = INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID());
					if (iVar16 != 0 && iVar17 != 0)
					{
						if (iVar17 != iVar16)
						{
							return 1;
						}
					}
				}
			}
		}
		else if (iParam1 == 52)
		{
			iVar18 = 1;
			if (__LIB_14__::func_471(iParam1, &iVar18, 0))
			{
				if (__LIB_13__::func_706(PLAYER::PLAYER_ID()))
				{
					return 1;
				}
			}
		}
		else if (iParam1 == 53)
		{
			iVar19 = 1;
			if (__LIB_14__::func_471(iParam1, &iVar19, 0))
			{
				if (__LIB_3__::func_930(PLAYER::PLAYER_ID()))
				{
					return 1;
				}
			}
		}
		else if (iParam1 == 54)
		{
			if (!__LIB_1__::func_748(PLAYER::PLAYER_ID()) && !__LIB_1__::func_29(PLAYER::PLAYER_ID(), 1, 0))
			{
				sVar20 = __LIB_3__::func_285(iParam1);
				Var21 = { __LIB_0__::func_785(iParam1, 0) };
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar20))
				{
					iVar22 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(Var21, sVar20);
					iVar23 = INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID());
					if (iVar22 != 0 && iVar23 != 0)
					{
						if (iVar23 != iVar22)
						{
							return 1;
						}
						else if (__LIB_13__::func_721())
						{
							return 1;
						}
					}
				}
			}
		}
		else if (iParam1 == 55)
		{
			if (!__LIB_1__::func_748(PLAYER::PLAYER_ID()) && !__LIB_1__::func_29(PLAYER::PLAYER_ID(), 1, 0))
			{
				sVar24 = __LIB_3__::func_285(iParam1);
				Var25 = { __LIB_0__::func_785(iParam1, 0) };
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar24))
				{
					iVar26 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(Var25, sVar24);
					iVar27 = INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID());
					if (iVar26 != 0 && iVar27 != 0)
					{
						if (iVar27 != iVar26)
						{
							return 1;
						}
						else if (__LIB_13__::func_721())
						{
							return 1;
						}
					}
				}
			}
		}
		else if (iParam1 == 56)
		{
			iVar28 = 1;
			if (__LIB_14__::func_471(iParam1, &iVar28, 0))
			{
				if (__LIB_3__::func_637(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_9))
				{
					return 1;
				}
			}
		}
		else if (iParam1 == 57)
		{
			if (!__LIB_1__::func_748(PLAYER::PLAYER_ID()) && !__LIB_1__::func_29(PLAYER::PLAYER_ID(), 1, 0))
			{
				sVar29 = __LIB_3__::func_285(iParam1);
				Var30 = { __LIB_0__::func_785(iParam1, 0) };
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar29))
				{
					iVar31 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(Var30, sVar29);
					iVar32 = INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID());
					if (iVar31 != 0 && iVar32 != 0)
					{
						if (iVar32 != iVar31)
						{
							return 1;
						}
					}
				}
			}
		}
	}
	else if (Global_100493.f_77[iParam1])
	{
		uParam0->f_10 = 1;
		return 1;
	}
	if (__LIB_0__::func_431(iParam1, 9, 1))
	{
		uParam0->f_10 = 1;
		return 1;
	}
	return 0;
}

int func_81()//Position - 0x5371
{
	int iVar0;
	iVar0 = __LIB_0__::func_683();
	if (iVar0 == 0)
	{
		if (__LIB_0__::func_425(65))
		{
			return 1;
		}
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("ambient_solomon")) > 0)
		{
			return 1;
		}
	}
	else if (iVar0 == 1)
	{
		if (__LIB_0__::func_425(66))
		{
			return 1;
		}
	}
	else if (iVar0 == 2)
	{
		if (__LIB_0__::func_425(65))
		{
			return 1;
		}
	}
	return 0;
}

int func_82(int iParam0, int iParam1)//Position - 0x3A2
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
		{
			if (!PED::IS_PED_INJURED(iParam0))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1) == 1 || TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1) == 0)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

Vector3 func_83(int iParam0)//Position - 0x27F9
{
	struct<3> Var0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	Var0 = { 0f, 0f, 0f };
	iVar5 = HUD::GET_BLIP_INFO_ID_TYPE(iParam0);
	if (iVar5 == 1)
	{
		iVar1 = HUD::GET_BLIP_INFO_ID_ENTITY_INDEX(iParam0);
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar1, false))
		{
			Var0 = { ENTITY::GET_ENTITY_COORDS(iVar1, true) };
		}
	}
	else if (iVar5 == 2)
	{
		iVar2 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(HUD::GET_BLIP_INFO_ID_ENTITY_INDEX(iParam0));
		if (!PED::IS_PED_INJURED(iVar2))
		{
			Var0 = { ENTITY::GET_ENTITY_COORDS(iVar2, true) };
		}
	}
	else if (iVar5 == 3)
	{
		iVar3 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(HUD::GET_BLIP_INFO_ID_ENTITY_INDEX(iParam0));
		if (ENTITY::DOES_ENTITY_EXIST(iVar3))
		{
			Var0 = { ENTITY::GET_ENTITY_COORDS(iVar3, true) };
		}
	}
	else if (iVar5 == 4)
	{
		Var0 = { HUD::GET_BLIP_COORDS(iParam0) };
	}
	else if (iVar5 == 6)
	{
		iVar4 = HUD::GET_BLIP_INFO_ID_PICKUP_INDEX(iParam0);
		if (OBJECT::DOES_PICKUP_EXIST(iVar4))
		{
			Var0 = { OBJECT::GET_PICKUP_COORDS(iVar4) };
		}
	}
	else if (iVar5 == 5)
	{
		Var0 = { HUD::GET_BLIP_COORDS(iParam0) };
	}
	return Var0;
}

int func_84(int iParam0)//Position - 0x6996
{
	int iVar0;
	if (HUD::DOES_BLIP_EXIST(iParam0))
	{
		iVar0 = HUD::GET_BLIP_SPRITE(iParam0);
	}
	return iVar0;
}

int func_85(int iParam0)//Position - 0xE67D
{
	int iVar0;
	if (HUD::DOES_BLIP_EXIST(iParam0))
	{
		iVar0 = HUD::GET_BLIP_INFO_ID_DISPLAY(iParam0);
		if (!iVar0 == 0 && !iVar0 == 1)
		{
			return 1;
		}
	}
	return 0;
}

int func_86()//Position - 0xFA75
{
	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	if (Global_97361 == 1)
	{
		return 0;
	}
	if (CUTSCENE::IS_CUTSCENE_PLAYING())
	{
		return 0;
	}
	if (Global_112437)
	{
		return 0;
	}
	if (Global_4)
	{
		return 0;
	}
	if (REPLAY::REPLAY_SYSTEM_HAS_REQUESTED_A_SCRIPT_CLEANUP())
	{
		return 0;
	}
	return 1;
}

void func_87()//Position - 0xFBA8
{
	int iVar0;
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(Global_112417, false))
	{
		if (!VEHICLE::IS_VEHICLE_SEAT_FREE(Global_112417, 1, false))
		{
			iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(Global_112417, 1, false);
			if (PLAYER::PLAYER_PED_ID() != iVar0)
			{
				if (!PED::IS_PED_GROUP_MEMBER(iVar0, PLAYER::GET_PLAYER_GROUP(PLAYER::PLAYER_ID())))
				{
					TASK::TASK_SMART_FLEE_PED(iVar0, PLAYER::PLAYER_PED_ID(), 200f, -1, false, false);
				}
			}
		}
		if (!VEHICLE::IS_VEHICLE_SEAT_FREE(Global_112417, 2, false))
		{
			iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(Global_112417, 2, false);
			if (PLAYER::PLAYER_PED_ID() != iVar0)
			{
				if (!PED::IS_PED_GROUP_MEMBER(iVar0, PLAYER::GET_PLAYER_GROUP(PLAYER::PLAYER_ID())))
				{
					TASK::TASK_SMART_FLEE_PED(iVar0, PLAYER::PLAYER_PED_ID(), 200f, -1, false, false);
				}
			}
		}
	}
}

void func_88()//Position - 0xFD8E
{
	int iVar0;
	if (ENTITY::DOES_ENTITY_EXIST(Global_112418))
	{
		if (!PED::IS_PED_INJURED(Global_112418))
		{
			PED::SET_PED_CONFIG_FLAG(Global_112418, 251, false);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Global_112418, false);
			if (!PED::IS_PED_FLEEING(Global_112418) && !PED::IS_PED_IN_COMBAT(Global_112418, 0))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(Global_112418, false))
				{
					if (ENTITY::DOES_ENTITY_EXIST(Global_112417))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Global_112417, false))
						{
							if (PED::IS_PED_SITTING_IN_VEHICLE(Global_112418, Global_112417))
							{
								if (TASK::GET_SCRIPT_TASK_STATUS(Global_112418, joaat("SCRIPT_TASK_VEHICLE_DRIVE_WANDER")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(Global_112418, joaat("SCRIPT_TASK_VEHICLE_DRIVE_WANDER")) != 0)
								{
									TASK::OPEN_SEQUENCE_TASK(&iVar0);
									if ((!VEHICLE::IS_VEHICLE_SEAT_FREE(Global_112417, 1, false) || !VEHICLE::IS_VEHICLE_SEAT_FREE(Global_112417, 2, false)) || !VEHICLE::IS_VEHICLE_SEAT_FREE(Global_112417, 0, false))
									{
										TASK::TASK_PAUSE(0, 2000);
									}
									else
									{
										TASK::TASK_PAUSE(0, 500);
									}
									TASK::TASK_VEHICLE_DRIVE_WANDER(0, Global_112417, 12f, 790699);
									TASK::CLOSE_SEQUENCE_TASK(iVar0);
									TASK::TASK_PERFORM_SEQUENCE(Global_112418, iVar0);
									TASK::CLEAR_SEQUENCE_TASK(&iVar0);
								}
							}
							else
							{
								TASK::TASK_SMART_FLEE_PED(Global_112418, PLAYER::PLAYER_PED_ID(), 500f, -1, false, false);
							}
						}
						else
						{
							TASK::TASK_SMART_FLEE_PED(Global_112418, PLAYER::PLAYER_PED_ID(), 500f, -1, false, false);
						}
					}
				}
				else if (TASK::GET_SCRIPT_TASK_STATUS(Global_112418, joaat("SCRIPT_TASK_WANDER_STANDARD")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(Global_112418, joaat("SCRIPT_TASK_WANDER_STANDARD")) != 0)
				{
					TASK::TASK_WANDER_STANDARD(Global_112418, 40000f, 0);
				}
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_112418))
	{
		if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(Global_112418))
		{
			if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(Global_112418, false))
			{
				if (!PED::IS_PED_INJURED(Global_112418))
				{
					ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Global_112418, false, 1);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Global_112418, false);
				}
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&Global_112418);
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_112417))
	{
		if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(Global_112417))
		{
			if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(Global_112417, false))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Global_112417, false))
				{
					VEHICLE::SET_VEHICLE_HAS_BEEN_OWNED_BY_PLAYER(Global_112417, false);
					VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(Global_112417, true, 0);
					VEHICLE::SET_VEHICLE_WILL_FORCE_OTHER_VEHICLES_TO_STOP(Global_112417, false);
				}
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&Global_112417);
			}
		}
	}
	Global_112418 = 0;
	Global_112417 = 0;
	StringCopy(&Global_112448, "NULL", 24);
	Global_112454 = -1;
}

int func_89(int iParam0, int iParam1, int iParam2)//Position - 0xFFCC
{
	int iVar0;
	int iVar1;
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam0, false))
		{
			if (ENTITY::GET_ENTITY_MODEL(*iParam0) == iParam1)
			{
				iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(*iParam0, -1, false);
				if (ENTITY::DOES_ENTITY_EXIST(iVar0))
				{
					if (!PED::IS_PED_INJURED(iVar0))
					{
						if (!PED::IS_PED_FLEEING(iVar0))
						{
							if (!PED::IS_PED_IN_COMBAT(iVar0, 0))
							{
								if (PED::IS_PED_MODEL(iVar0, iParam2))
								{
									if (ENTITY::IS_ENTITY_UPRIGHT(*iParam0, 90f))
									{
										iVar1 = VEHICLE::GET_VEHICLE_DOOR_LOCK_STATUS(*iParam0);
										if (iVar1 != 3 && iVar1 != 2)
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
		}
	}
	return 0;
}

int func_90()//Position - 0x10061
{
	return joaat("A_M_Y_StLat_01");
}

int func_91(int iParam0)//Position - 0x102D9
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
		{
			if (!PED::IS_PED_INJURED(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_92()//Position - 0x435
{
	int iVar0;
	var uVar1;
	int iVar2;
	if (PED::DOES_GROUP_EXIST(__LIB_0__::func_495()))
	{
		PED::GET_GROUP_SIZE(__LIB_0__::func_495(), &uVar1, &iVar0);
		if (iVar0 > 0)
		{
			iVar2 = PED::GET_PED_AS_GROUP_MEMBER(__LIB_0__::func_495(), 0);
			if (!PED::IS_PED_INJURED(iVar2))
			{
				TASK::CLEAR_PED_TASKS(iVar2);
				if (!ENTITY::IS_ENTITY_DEAD(Global_112417, false))
				{
					if (PED::IS_PED_IN_VEHICLE(iVar2, Global_112417, false))
					{
						TASK::TASK_LEAVE_VEHICLE(iVar2, Global_112417, 64);
					}
				}
			}
			if (iVar0 > 1)
			{
				iVar2 = PED::GET_PED_AS_GROUP_MEMBER(__LIB_0__::func_495(), 1);
				if (!PED::IS_PED_INJURED(iVar2))
				{
					TASK::CLEAR_PED_TASKS(iVar2);
					if (!ENTITY::IS_ENTITY_DEAD(Global_112417, false))
					{
						if (PED::IS_PED_IN_VEHICLE(iVar2, Global_112417, false))
						{
							TASK::TASK_LEAVE_VEHICLE(iVar2, Global_112417, 64);
						}
					}
				}
			}
		}
	}
}

void func_93(int* iParam0, float fParam1)//Position - 0x627E
{
	if (__LIB_0__::func_702(iParam0))
	{
		__LIB_0__::func_706(iParam0, (__LIB_37__::func_602(iParam0) + fParam1));
	}
}

int func_94(struct<3> Param0, struct<3> Param1)//Position - 0x69B1
{
	float fVar0;
	float fVar1;
	fVar1 = (Param1.f_2 - Param0.f_2);
	if (fVar1 < 0f)
	{
		fVar1 = (fVar1 * -1f);
	}
	if (Param0.f_2 <= 1f)
	{
		__LIB_38__::func_718("\nIS_COORD_ON_SAME_LEVEL_AS_COORD - vCoord1.z <= 1, probably a waypoint blip - RETURN TRUE\n");
		return 1;
	}
	fVar0 = SYSTEM::VDIST(Param0, Param1);
	fVar0 = (fVar0 / 1.75f);
	if (fVar1 < fVar0)
	{
		__LIB_38__::func_718("\nIS_COORD_ON_SAME_LEVEL_AS_COORD - fTemp < acceptableHeight, RETURN TRUE\n");
		return 1;
	}
	return 0;
}

int func_95(int iParam0)//Position - 0xDD76
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = 0;
	while (iVar0 < 58)
	{
		iVar1 = iVar0;
		iVar2 = __LIB_15__::func_277(iVar1);
		if (Global_32338[iVar2 /*23*/].f_19 == iParam0)
		{
			return iVar1;
		}
		iVar0++;
	}
	return -1;
}

int func_96(int iParam0, bool bParam1)//Position - 0x2AE0
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (AUDIO::IS_AMBIENT_SPEECH_PLAYING(iParam0))
		{
			__LIB_38__::func_718("\ntaxi_functions - IS_ANY_DIALOGUE_PLAYING - IS_AMBIENT_SPEECH_PLAYING(DriverID)\n");
			return 1;
		}
	}
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (AUDIO::IS_AMBIENT_SPEECH_PLAYING(PLAYER::PLAYER_PED_ID()))
		{
			__LIB_38__::func_718("\ntaxi_functions - IS_ANY_DIALOGUE_PLAYING - IS_AMBIENT_SPEECH_PLAYING(PLAYER_PED_ID())\n");
			return 1;
		}
	}
	if (__LIB_0__::func_75())
	{
		__LIB_38__::func_718("\ntaxi_functions - IS_ANY_DIALOGUE_PLAYING - IS_ANY_CONVERSATION_ONGOING_OR_QUEUED()\n");
		return 1;
	}
	if (bParam1)
	{
		if (HUD::IS_MESSAGE_BEING_DISPLAYED())
		{
			__LIB_38__::func_718("\ntaxi_functions - IS_ANY_DIALOGUE_PLAYING - IS_MESSAGE_BEING_DISPLAYED()\n");
			return 1;
		}
	}
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (PED::DOES_GROUP_EXIST(__LIB_0__::func_495()))
		{
			PED::GET_GROUP_SIZE(__LIB_0__::func_495(), &iVar2, &iVar1);
			if (iVar1 > 0)
			{
				iVar2 = 0;
				while (iVar2 < iVar1)
				{
					iVar0 = PED::GET_PED_AS_GROUP_MEMBER(__LIB_0__::func_495(), iVar2);
					if (!PED::IS_PED_INJURED(iVar0))
					{
						if (AUDIO::IS_AMBIENT_SPEECH_PLAYING(iVar0))
						{
							__LIB_38__::func_718("\ntaxi_functions - IS_ANY_DIALOGUE_PLAYING - IS_AMBIENT_SPEECH_PLAYING(TempGroupPedID)\n");
							return 1;
						}
					}
					iVar2++;
				}
			}
		}
	}
	return 0;
}

int func_97()//Position - 0xC105
{
	if (__LIB_0__::func_39(14))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_113386.f_28050[0 /*29*/])
			{
				return 0;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_113386.f_28050[1 /*29*/])
			{
				return 1;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_113386.f_28050[2 /*29*/])
			{
				return 2;
			}
			else
			{
				return 3;
			}
		}
		else
		{
			return 3;
		}
	}
	return __LIB_0__::func_683();
}

int func_98(int iParam0)//Position - 0x2132
{
	int iVar0;
	switch (iParam0)
	{
		case 0:
			iVar0 = 199;
			break;
		case 1:
			iVar0 = 200;
			break;
		case 2:
			iVar0 = 201;
			break;
		case 3:
			iVar0 = 202;
			break;
		case 4:
			iVar0 = 203;
			break;
		case 5:
			iVar0 = 204;
			break;
		case 6:
			iVar0 = 205;
			break;
		case 7:
			iVar0 = 206;
			break;
		case 8:
			iVar0 = 207;
			break;
		case 9:
			break;
		default:
			iVar0 = 199;
			break;
	}
	return iVar0;
}

void func_99()//Position - 0x5153
{
	int iVar0;
	iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
	{
		AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "Radio_Off" /* GXT: Off */, iVar0, "TAXI_SOUNDS", false, 0);
	}
}

void func_100()//Position - 0x52B1
{
	int iVar0;
	iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
	{
		AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "Radio_On", iVar0, "TAXI_SOUNDS", false, 0);
	}
}

int func_101(int iParam0)//Position - 0x804D
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	if (!VEHICLE::IS_VEHICLE_TYRE_BURST(iParam0, 0, false))
	{
		iVar0++;
	}
	if (!VEHICLE::IS_VEHICLE_TYRE_BURST(iParam0, 1, false))
	{
		iVar0++;
	}
	if (!VEHICLE::IS_VEHICLE_TYRE_BURST(iParam0, 4, false))
	{
		iVar0++;
	}
	if (!VEHICLE::IS_VEHICLE_TYRE_BURST(iParam0, 5, false))
	{
		iVar0++;
	}
	if (iVar0 < 2)
	{
		return 0;
	}
	if (VEHICLE::IS_THIS_MODEL_A_CAR(ENTITY::GET_ENTITY_MODEL(iParam0)))
	{
		iVar1 = 0;
		if (!VEHICLE::IS_VEHICLE_DOOR_DAMAGED(iParam0, 0))
		{
			iVar1++;
		}
		if (!VEHICLE::IS_VEHICLE_DOOR_DAMAGED(iParam0, 1))
		{
			iVar1++;
		}
		if (!VEHICLE::IS_VEHICLE_DOOR_DAMAGED(iParam0, 2))
		{
			iVar1++;
		}
		if (!VEHICLE::IS_VEHICLE_DOOR_DAMAGED(iParam0, 3))
		{
			iVar1++;
		}
		if (iVar1 < 2)
		{
			return 0;
		}
	}
	return 1;
}

void func_102(char* sParam0, int iParam1, int iParam2)//Position - 0x88F1
{
	if (MISC::GET_GAME_TIMER() < (*iParam1 + iParam2))
	{
		return;
	}
	*iParam1 = MISC::GET_GAME_TIMER();
}

int func_103()//Position - 0x10D61
{
	int iVar0;
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
			{
				if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1, false) == PLAYER::PLAYER_PED_ID())
				{
					if (VEHICLE::IS_VEHICLE_MODEL(iVar0, __LIB_12__::func_850()))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_104(var uParam0, int iParam1)//Position - 0x818E
{
	__LIB_0__::func_989(uParam0, iParam1);
}

void func_105(var uParam0)//Position - 0x1FE
{
	int iVar0;
	char cVar1[64];
	iVar0 = __LIB_0__::func_216(PLAYER::PLAYER_PED_ID());
	if (iVar0 == 0)
	{
		__LIB_0__::func_222(uParam0, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
	}
	else if (iVar0 == 2)
	{
		__LIB_0__::func_222(uParam0, 0, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
	}
	else if (iVar0 == 1)
	{
		__LIB_0__::func_222(uParam0, 0, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
	}
	else
	{
		__LIB_0__::func_222(uParam0, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
		StringCopy(&cVar1, "Invalid enum passed to Taxi dialogue is: ", 64);
		StringIntConCat(&cVar1, iVar0, 64);
	}
	__LIB_0__::func_222(uParam0, 8, 0, "TaxiDispatch", 0, 1);
}

struct<8> func_106(int iParam0)//Position - 0x1FF3
{
	struct<8> Var0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var0, "TAXI_SC_N_NE", 32);
			break;
		case 1:
			StringCopy(&Var0, "TAXI_SC_N_TE", 32);
			break;
		case 2:
			StringCopy(&Var0, "TAXI_SC_N_DL", 32);
			break;
		case 3:
			StringCopy(&Var0, "TAXI_SC_N_GB", 32);
			break;
		case 4:
			StringCopy(&Var0, "TAXI_SC_N_TB", 32);
			break;
		case 5:
			StringCopy(&Var0, "TAXI_SC_N_CY", 32);
			break;
		case 6:
			StringCopy(&Var0, "TAXI_SC_N_GN", 32);
			break;
		case 7:
			StringCopy(&Var0, "TAXI_SC_N_CC", 32);
			break;
		case 8:
			StringCopy(&Var0, "TAXI_SC_N_FC", 32);
			break;
		case 9:
			StringCopy(&Var0, "TAXI_BLIP_CAR", 32);
			break;
		default:
			StringCopy(&Var0, "InvalidEnum", 32);
			break;
	}
	return Var0;
}

void func_107(var uParam0)//Position - 0x20BC
{
	VEHICLE::REMOVE_ROAD_NODE_SPEED_ZONE(uParam0->f_51[0]);
}

void func_108(var uParam0)//Position - 0x20D0
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_3))
	{
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_3, false))
		{
			if (!PED::IS_PED_IN_ANY_VEHICLE(uParam0->f_3, false))
			{
				PED::RESET_PED_LAST_VEHICLE(uParam0->f_3);
			}
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_3, false);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(255, uParam0->f_413, joaat("PLAYER"));
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_a", 3))
			{
				TASK::STOP_ANIM_TASK(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_a", -8f);
			}
			else if (ENTITY::IS_ENTITY_PLAYING_ANIM(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", 3))
			{
				TASK::STOP_ANIM_TASK(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", -8f);
			}
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(uParam0->f_3, "gestures@m@standing@casual", "gesture_nod_yes_hard", 3))
			{
				TASK::STOP_ANIM_TASK(uParam0->f_3, "gestures@m@standing@casual", "gesture_nod_yes_hard", -8f);
			}
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(uParam0->f_3, "gestures@m@standing@casual", "gesture_you_hard", 3))
			{
				TASK::STOP_ANIM_TASK(uParam0->f_3, "gestures@m@standing@casual", "gesture_you_hard", -8f);
			}
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(uParam0->f_3));
		}
	}
}

int func_109()//Position - 0x24DE
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("appinternet")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_110(var uParam0)//Position - 0x287D
{
	if (HUD::DOES_BLIP_EXIST(uParam0->f_8))
	{
		HUD::REMOVE_BLIP(&(uParam0->f_8));
	}
	if (HUD::DOES_BLIP_EXIST(uParam0->f_9))
	{
		HUD::REMOVE_BLIP(&(uParam0->f_9));
	}
	if (HUD::DOES_BLIP_EXIST(uParam0->f_10))
	{
		HUD::REMOVE_BLIP(&(uParam0->f_10));
	}
}

int func_111(var uParam0)//Position - 0x3039
{
	return uParam0->f_411;
}

char* func_112()//Position - 0x4893
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return "SHOW_COND_SHARD_MESSAGE";
	}
	return "SHOW_SHARD_MIDSIZED_MESSAGE";
}

char* func_113(var uParam0)//Position - 0x48AD
{
	char* sVar0;
	switch (uParam0->f_411)
	{
		case 0:
			sVar0 = "TAXI_SC_BN_02";
			break;
		case 1:
			sVar0 = "TAXI_SC_BN_01";
			break;
		case 2:
			sVar0 = "TAXI_SC_BN_03";
			break;
		case 3:
			sVar0 = "TAXI_SC_BN_12";
			break;
		case 4:
			sVar0 = "TAXI_SC_BN_08";
			break;
		case 5:
			sVar0 = "TAXI_SC_BN_07";
			break;
		case 6:
			sVar0 = "TAXI_SC_KO";
			break;
		case 7:
			sVar0 = "TAXI_SC_BN_10";
			break;
		case 8:
			sVar0 = "TAXI_SC_BN_04";
			break;
	}
	return sVar0;
}

void func_114()//Position - 0x4D63
{
	if (PLAYER::IS_SPECIAL_ABILITY_ACTIVE(PLAYER::PLAYER_ID(), 0))
	{
		PLAYER::SPECIAL_ABILITY_DEACTIVATE(PLAYER::PLAYER_ID(), 0);
	}
}

int func_115(var uParam0, var uParam1)//Position - 0x4E2E
{
	int iVar0;
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, false))
	{
		iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(uParam0->f_4, 1, false);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			*uParam1 = 1;
			return iVar0;
		}
		else
		{
			iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(uParam0->f_4, 2, false);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				*uParam1 = 2;
				return iVar0;
			}
			else
			{
				iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(uParam0->f_4, 0, false);
				if (ENTITY::DOES_ENTITY_EXIST(iVar0))
				{
					*uParam1 = 0;
					return iVar0;
				}
			}
		}
	}
	return 0;
}

void func_116(int iParam0)//Position - 0x5039
{
	Global_112096.f_221 = iParam0;
}

bool func_117(var uParam0, int iParam1)//Position - 0x52B3
{
	return __LIB_0__::func_702(&(uParam0->f_146[iParam1 /*3*/]));
}

void func_118(var uParam0, int iParam1, bool bParam2)//Position - 0x52C7
{
	int iVar0;
	if (iParam1 == 14)
	{
	}
	if (iParam1 == 32)
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			__LIB_1__::func_377(&(uParam0->f_146[iVar0 /*3*/]));
			iVar0++;
		}
	}
	else
	{
		__LIB_1__::func_377(&(uParam0->f_146[iParam1 /*3*/]));
	}
	if (bParam2)
	{
	}
}

void func_119(var uParam0, int iParam1)//Position - 0x5358
{
	if (iParam1 < 5)
	{
		MISC::SET_BIT(&(uParam0->f_60[iParam1 /*3*/]), 2);
		uParam0->f_105 = (uParam0->f_105 + uParam0->f_60[iParam1 /*3*/].f_1);
	}
}

void func_120(var uParam0, float* fParam1)//Position - 0x53B7
{
	STATS::STAT_GET_FLOAT(uParam0->f_428, fParam1, -1);
	uParam0->f_41 = (*fParam1 - uParam0->f_42);
}

void func_121(var uParam0, int iParam1, bool bParam2)//Position - 0x5C7B
{
	uParam0->f_414 = iParam1;
	if (bParam2)
	{
	}
}

void func_122(var uParam0)//Position - 0x5D91
{
	if (HUD::DOES_BLIP_EXIST(uParam0->f_8))
	{
		HUD::SET_BLIP_ROUTE(uParam0->f_8, false);
		HUD::REMOVE_BLIP(&(uParam0->f_8));
	}
}

bool func_123(var uParam0)//Position - 0x6C60
{
	return uParam0->f_120;
}

int func_124(var uParam0)//Position - 0x6F19
{
	return uParam0->f_106;
}

void func_125(var uParam0, int iParam1)//Position - 0x6F43
{
	if (uParam0->f_106 != iParam1)
	{
		uParam0->f_106 = iParam1;
	}
}

void func_126(var uParam0, int iParam1, bool bParam2)//Position - 0x6FE9
{
	if (bParam2)
	{
		*uParam0 = 0;
	}
	else
	{
		*uParam0 = -1;
	}
	if (iParam1 > -1)
	{
		uParam0->f_27 = iParam1;
	}
}

int func_127(var uParam0)//Position - 0x7081
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, false))
	{
		if (!PED::IS_PED_INJURED(uParam0->f_3))
		{
			if (PED::IS_PED_IN_VEHICLE(uParam0->f_3, uParam0->f_4, true))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_128(var uParam0)//Position - 0x70B6
{
	return uParam0->f_416;
}

void func_129(var uParam0, int iParam1)//Position - 0x7188
{
	if (CAM::DOES_CAM_EXIST(*uParam0))
	{
		CAM::DESTROY_CAM(*uParam0, false);
	}
	if (iParam1 > 0)
	{
		CAM::RENDER_SCRIPT_CAMS(false, true, iParam1, true, false, 0);
	}
	else
	{
		CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
	}
}

void func_130(struct<3> Param0, bool bParam1, float fParam2)//Position - 0x71C2
{
	struct<3> Var0;
	struct<3> Var1;
	Var0 = { __LIB_1__::func_657(Param0, 1f, -fParam2, -fParam2, -fParam2) };
	Var1 = { __LIB_1__::func_657(Param0, 1f, fParam2, fParam2, fParam2) };
	Var0.f_2 = (Var0.f_2 - 22f);
	Var1.f_2 = (Var1.f_2 + 22f);
	if (!bParam1)
	{
		PATHFIND::SET_ROADS_IN_AREA(Var0, Var1, false, true);
	}
	else
	{
		PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(Var0, Var1, 1);
		PED::CLEAR_PED_NON_CREATION_AREA();
	}
}

void func_131(char* sParam0)//Position - 0x738E
{
	StringConCat(sParam0, "F", 24);
}

int func_132(var uParam0, struct<3> Param1, struct<3> Param2, bool bParam3)//Position - 0x80E7
{
	var uVar0;
	var uVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	if (*uParam0 == 0)
	{
		*uParam0 = SHAPETEST::START_SHAPE_TEST_LOS_PROBE(Param1, Param2, 511, 0, 7);
		if (bParam3)
		{
		}
	}
	else
	{
		iVar4 = SHAPETEST::GET_SHAPE_TEST_RESULT(*uParam0, &iVar2, &uVar0, &uVar1, &uVar3);
		if (iVar4 == 2)
		{
			if (bParam3)
			{
			}
			if (iVar2 == 0)
			{
				*uParam0 = 0;
				return iVar2;
			}
			else
			{
				if (bParam3)
				{
				}
				*uParam0 = 0;
				return iVar2;
			}
		}
		else if (iVar4 == 0)
		{
			if (bParam3)
			{
			}
			*uParam0 = 0;
		}
	}
	return -1;
}

int func_133(var uParam0, bool bParam1)//Position - 0x83D0
{
	int iVar0[3];
	int iVar1;
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, false))
	{
		iVar0[0] = VEHICLE::GET_PED_IN_VEHICLE_SEAT(uParam0->f_4, 1, false);
		iVar0[1] = VEHICLE::GET_PED_IN_VEHICLE_SEAT(uParam0->f_4, 2, false);
		iVar0[2] = VEHICLE::GET_PED_IN_VEHICLE_SEAT(uParam0->f_4, 0, false);
		iVar1 = 0;
		while (iVar1 < 3)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iVar0[iVar1]))
			{
				if (ENTITY::IS_ENTITY_DEAD(iVar0[iVar1], false))
				{
					if (iVar1 == 0)
					{
						uParam0->f_7 = 1;
						if (bParam1)
						{
						}
					}
					else if (iVar1 == 1)
					{
						uParam0->f_7 = 2;
						if (bParam1)
						{
						}
					}
					else
					{
						uParam0->f_7 = 0;
						if (bParam1)
						{
						}
					}
					if (bParam1)
					{
					}
					return 0;
				}
			}
			iVar1++;
		}
		if ((MISC::GET_GAME_TIMER() % 1000) < 50)
		{
		}
	}
	return 1;
}

void func_134(var uParam0)//Position - 0x935E
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		__LIB_0__::func_988(&(uParam0->f_100), iVar0);
		iVar0++;
	}
}

void func_135(var uParam0, var uParam1)//Position - 0x9383
{
	int iVar0;
	if (*uParam1 <= 5)
	{
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			MISC::CLEAR_BIT(&(uParam0->f_60[iVar0 /*3*/]), 1);
			iVar0++;
		}
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < *uParam1)
		{
			uParam0->f_60[iVar0 /*3*/] = { *(uParam1[iVar0 /*3*/]) };
			MISC::SET_BIT(&(uParam0->f_60[iVar0 /*3*/]), 1);
			MISC::CLEAR_BIT(&(uParam0->f_60[iVar0 /*3*/]), 2);
			iVar0++;
		}
	}
}

void func_136(var uParam0, char* sParam1, int iParam2)//Position - 0x93FA
{
	*uParam0 = 0;
	uParam0->f_1 = iParam2;
	uParam0->f_2 = sParam1;
}

void func_137(var uParam0, int iParam1)//Position - 0x94BA
{
	uParam0->f_117 = 1;
	uParam0->f_118 = iParam1;
}

int func_138(int iParam0)//Position - 0x94CD
{
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		return 1;
	}
	if (VEHICLE::GET_VEHICLE_ENGINE_HEALTH(iParam0) < -100f)
	{
		return 1;
	}
	else if (VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iParam0, 0, 40000) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iParam0, 1, 40000))
	{
		return 1;
	}
	return 0;
}

int func_139(var uParam0)//Position - 0x9607
{
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_4, false))
	{
		if (VEHICLE::DOES_VEHICLE_HAVE_STUCK_VEHICLE_CHECK(uParam0->f_4))
		{
			if (VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(uParam0->f_4, 0, 40000) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(uParam0->f_4, 1, 40000))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_140(var uParam0)//Position - 0x9668
{
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_4, false))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, false))
		{
			if (VEHICLE::IS_VEHICLE_STOPPED(uParam0->f_4))
			{
				if (__LIB_0__::func_703(uParam0->f_86, 8))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_141(int iParam0)//Position - 0x96E7
{
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		return 1;
	}
	if (VEHICLE::GET_VEHICLE_ENGINE_HEALTH(iParam0) == 0f)
	{
		if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
		{
		}
		return 1;
	}
	else if (VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iParam0, 0, 40000) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iParam0, 1, 40000))
	{
		return 1;
	}
	return 0;
}

void func_142(int iParam0, int iParam1, bool bParam2)//Position - 0x9742
{
	if (Local_165.f_0 >= 16)
	{
		Local_165.f_0 = 16;
		return;
	}
	Local_165.f_1[Local_165.f_0 /*4*/] = 0;
	__LIB_0__::func_989(&(Local_165.f_1[Local_165.f_0 /*4*/]), 1);
	if (bParam2)
	{
		__LIB_0__::func_989(&(Local_165.f_1[Local_165.f_0 /*4*/]), 2);
	}
	Local_165.f_1[Local_165.f_0 /*4*/].f_2 = iParam0;
	Local_165.f_1[Local_165.f_0 /*4*/].f_3 = iParam1;
	Local_165.f_0++;
}

int func_143(var uParam0)//Position - 0x97C5
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_3))
	{
		if ((PED::IS_PED_INJURED(uParam0->f_3) || ENTITY::IS_ENTITY_DEAD(uParam0->f_3, false)) || FIRE::IS_ENTITY_ON_FIRE(uParam0->f_3))
		{
			return 1;
		}
	}
	return 0;
}

void func_144()//Position - 0x9805
{
	Local_162[5 /*10*/] = 5;
	Local_162[5 /*10*/].f_1 = 0;
	Local_162[5 /*10*/].f_2 = "TX_SPEED_N";
	Local_162[5 /*10*/].f_9 = 78;
	Local_162[0 /*10*/] = 5;
	Local_162[0 /*10*/].f_1 = 0;
	Local_162[0 /*10*/].f_2 = "TX_AIR_N";
	Local_162[0 /*10*/].f_9 = 76;
	Local_162[2 /*10*/] = 5;
	Local_162[2 /*10*/].f_1 = 0;
	Local_162[2 /*10*/].f_2 = "TX_QSTOP_N";
	Local_162[2 /*10*/].f_9 = 21;
	Local_162[1 /*10*/] = 10;
	Local_162[1 /*10*/].f_1 = 0;
	Local_162[1 /*10*/].f_2 = "TX_DRIFT_N";
	Local_162[1 /*10*/].f_9 = 71;
	Local_162[4 /*10*/] = 10;
	Local_162[4 /*10*/].f_1 = 0;
	Local_162[4 /*10*/].f_2 = "TX_SIDEWALK_N";
	Local_162[4 /*10*/].f_9 = 79;
	Local_162[6 /*10*/] = 10;
	Local_162[6 /*10*/].f_1 = 0;
	Local_162[6 /*10*/].f_2 = "TX_ONCOMING_N";
	Local_162[6 /*10*/].f_9 = 80;
	Local_162[9 /*10*/] = 15;
	Local_162[9 /*10*/].f_1 = 0;
	Local_162[9 /*10*/].f_2 = "TX_HITRUN_N";
	Local_162[9 /*10*/].f_9 = 82;
	Local_162[8 /*10*/] = 15;
	Local_162[8 /*10*/].f_1 = 0;
	Local_162[8 /*10*/].f_2 = "TX_RECKLESS_N";
	Local_162[8 /*10*/].f_9 = 72;
	Local_162[7 /*10*/] = 15;
	Local_162[7 /*10*/].f_1 = 0;
	Local_162[7 /*10*/].f_2 = "TX_ROLL_N";
	Local_162[7 /*10*/].f_9 = 74;
	Local_162[11 /*10*/] = 5;
	Local_162[11 /*10*/].f_1 = 0;
	Local_162[11 /*10*/].f_2 = "TX_SWERVE_N";
	Local_162[11 /*10*/].f_9 = 70;
	Local_162[12 /*10*/] = 5;
	Local_162[12 /*10*/].f_1 = 0;
	Local_162[12 /*10*/].f_2 = "TX_REVERSE_N";
	Local_162[12 /*10*/].f_9 = 69;
	Local_162[13 /*10*/] = 10;
	Local_162[13 /*10*/].f_1 = 0;
	Local_162[13 /*10*/].f_2 = "TX_OFFROAD_N";
	Local_162[13 /*10*/].f_9 = 67;
	Local_162[14 /*10*/] = 10;
	Local_162[14 /*10*/].f_1 = 0;
	Local_162[14 /*10*/].f_2 = "TX_NEARMIS_N";
	Local_162[14 /*10*/].f_9 = 75;
}

int func_145(int iParam0, bool bParam1)//Position - 0x9A50
{
	if (!STREAMING::HAS_MODEL_LOADED(__LIB_12__::func_850()))
	{
		__LIB_40__::func_102("TAXI_SHARED_ASSETS_STREAMED - TAXI MODEL Loading...", iParam0, 1000);
		return 0;
	}
	if (bParam1)
	{
		if (!STREAMING::HAS_ANIM_DICT_LOADED("gestures@m@standing@casual"))
		{
			__LIB_40__::func_102("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts gestures@m@standing@casual Loading...", iParam0, 1000);
			return 0;
		}
	}
	if (!STREAMING::HAS_ANIM_DICT_LOADED("oddjobs@taxi@"))
	{
		__LIB_40__::func_102("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts oddjobs@taxi@ Loading...", iParam0, 1000);
		return 0;
	}
	if (!STREAMING::HAS_ANIM_DICT_LOADED("oddjobs@towingcome_here"))
	{
		__LIB_40__::func_102("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts oddjobs@towingcome_here Loading...", iParam0, 1000);
		return 0;
	}
	if (!STREAMING::HAS_ANIM_DICT_LOADED("misscommon@response"))
	{
		__LIB_40__::func_102("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts misscommon@ Loading...", iParam0, 1000);
		return 0;
	}
	if (!HUD::HAS_ADDITIONAL_TEXT_LOADED(2))
	{
		__LIB_40__::func_102("TAXI_SHARED_ASSETS_STREAMED - Mission Text Loading...", iParam0, 1000);
		return 0;
	}
	return 1;
}

void func_146(var uParam0, int iParam1)//Position - 0x9B09
{
	switch (iParam1)
	{
		case 1:
			uParam0->f_123 = "TRS_STREAMING";
			break;
		case 2:
			uParam0->f_123 = " TRS_FINDING_LOCATION ";
			break;
		case 3:
			uParam0->f_123 = " TRS_SPAWNING ";
			break;
		case 4:
			uParam0->f_123 = " TRS_SPAWN_CAR ";
			break;
		case 5:
			uParam0->f_123 = " TRS_MANAGE_PICKUP ";
			break;
		case 6:
			uParam0->f_123 = " TRS_PASSENGER_ENTER ";
			break;
		case 7:
			uParam0->f_123 = " TRS_WAIT_FOR_TIME ";
			break;
		case 8:
			uParam0->f_123 = " TRS_WAIT_FOR_TAIL ";
			break;
		case 9:
			uParam0->f_123 = " TRS_DRIVING_PASSENGER ";
			break;
		case 10:
			uParam0->f_123 = " TRS_WAIT_FOR_FULL_STOP ";
			break;
		case 18:
			uParam0->f_123 = " TRS_PRE_CUTSCENE ";
			break;
		case 11:
			uParam0->f_123 = " TRS_SWITCH_JOB ";
			break;
		case 19:
			uParam0->f_123 = " TRS_CUTSCENE ";
			break;
		case 20:
			uParam0->f_123 = " TRS_CUTSCENE_02 ";
			break;
		case 13:
			uParam0->f_123 = " TRS_CHASE_DRIVER ";
			break;
		case 12:
			uParam0->f_123 = " TRS_SAVE_DAMSEL ";
			break;
		case 14:
			uParam0->f_123 = " TRS_REVEAL_DESTINATION ";
			break;
		case 15:
			uParam0->f_123 = " TRS_WAIT_PARK ";
			break;
		case 16:
			uParam0->f_123 = " TRS_SEND_TO_STORE ";
			break;
		case 17:
			uParam0->f_123 = " TRS_WAIT_1ST_STOP ";
			break;
		case 22:
			uParam0->f_123 = " TRS_DROPPING_OFF ";
			break;
		case 25:
			uParam0->f_123 = " TRS_ESCAPE_POLICE ";
			break;
		case 26:
			uParam0->f_123 = " TRS_POLICE_ESCAPED ";
			break;
		case 24:
			uParam0->f_123 = " TRS_TIE_UP_LOSE_ENDS ";
			break;
		case 27:
			uParam0->f_123 = " TRS_REGULAR_PAYMENT ";
			break;
		case 23:
			uParam0->f_123 = " TRS_ELIMATE_ALL_ENEMIES ";
			break;
		case 28:
			uParam0->f_123 = " TRS_SPECIAL_ENDING ";
			break;
		case 29:
			uParam0->f_123 = " TRS_SCORECARD_GRADE ";
			break;
		case 30:
			uParam0->f_123 = " TRS_CLEANUP ";
			break;
		case 21:
			uParam0->f_123 = " TRS_WAIT_FOR_PASSENGER ";
			break;
		default:
			uParam0->f_123 = " TRS IS UNIDENTIFIED - FIX THIS ";
			break;
	}
	uParam0->f_410 = iParam1;
}

int func_147(var uParam0)//Position - 0xB06A
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, false))
	{
		if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(uParam0->f_4, -1, false) == PLAYER::PLAYER_PED_ID())
		{
			return 1;
		}
	}
	return 0;
}

int func_148(var uParam0)//Position - 0xC017
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, false))
	{
		if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(uParam0->f_4, -1, false) == PLAYER::PLAYER_PED_ID())
		{
			if (PLAYER::HAS_PLAYER_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID()))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_149(var uParam0)//Position - 0xC04C
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, false))
	{
		if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(uParam0->f_4, -1, false) == PLAYER::PLAYER_PED_ID())
		{
			if (ENTITY::IS_ENTITY_UPSIDEDOWN(uParam0->f_4))
			{
				if (!iLocal_163)
				{
					if (ENTITY::GET_ENTITY_ROLL(uParam0->f_4) <= -145f || ENTITY::GET_ENTITY_ROLL(uParam0->f_4) >= 145f)
					{
						iLocal_163 = 1;
					}
				}
			}
			else if (iLocal_163)
			{
				if (ENTITY::GET_ENTITY_ROLL(uParam0->f_4) <= 35f && ENTITY::GET_ENTITY_ROLL(uParam0->f_4) >= -35f)
				{
					iLocal_163 = 0;
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_150(var uParam0, int iParam1)//Position - 0xC394
{
	uParam0->f_76 = (uParam0->f_76 + Local_162[iParam1 /*10*/]);
}

void func_151(var uParam0, int iParam1)//Position - 0xC3AB
{
	uParam0->f_104 = (uParam0->f_104 + iParam1);
}

void func_152(var uParam0)//Position - 0xD1F3
{
	int iVar0;
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_3, false))
	{
		if (__LIB_0__::func_78(__LIB_0__::func_613(), uParam0->f_29, 0))
		{
			if (uParam0->f_411 == 2)
			{
				ENTITY::SET_ENTITY_HEADING(uParam0->f_3, 84.9058f);
				PED::SET_PED_KEEP_TASK(uParam0->f_3, true);
			}
			else if (uParam0->f_411 == 4)
			{
				ENTITY::SET_ENTITY_HEADING(uParam0->f_3, 68.3138f);
				PED::SET_PED_KEEP_TASK(uParam0->f_3, true);
			}
			else
			{
				TASK::TASK_WANDER_STANDARD(uParam0->f_3, 40000f, 0);
			}
		}
		else
		{
			TASK::CLEAR_PED_TASKS(uParam0->f_3);
			TASK::CLEAR_SEQUENCE_TASK(&iVar0);
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
			TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, false);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, uParam0->f_29, 1f, -1, 0.25f, 0, 40000f);
			if (uParam0->f_411 == 2)
			{
				TASK::TASK_START_SCENARIO_IN_PLACE(0, "WORLD_HUMAN_AA_SMOKE", 0, false);
			}
			else if (uParam0->f_411 == 0)
			{
				TASK::TASK_CLIMB_LADDER(0, true);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 813.9421f, 1172.6809f, 329.7988f, 1f, -1, 0.25f, 0, 40000f);
				TASK::TASK_ACHIEVE_HEADING(0, 151.7794f, 0);
				TASK::TASK_START_SCENARIO_IN_PLACE(0, "WORLD_HUMAN_SMOKING_POT", 0, false);
			}
			else if (uParam0->f_411 == 4)
			{
				TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD(0, uParam0->f_29, 15f, 0);
			}
			else if (uParam0->f_411 == 1)
			{
				TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD(0, uParam0->f_29, 15f, 20000);
				TASK::TASK_WANDER_STANDARD(0, 40000f, 0);
			}
			else
			{
				TASK::TASK_PLAY_ANIM(0, "oddjobs@taxi@", "base", 8f, -8f, -1, 0, 0f, false, false, false);
				TASK::TASK_PLAY_ANIM(0, "gestures@m@standing@casual", "gesture_pleased", 8f, -8f, -1, 0, 0f, false, false, false);
			}
			if (TASK::DOES_SCENARIO_EXIST_IN_AREA(uParam0->f_29, 15f, true))
			{
				TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD(0, uParam0->f_29, 15f, 0);
			}
			else
			{
				TASK::TASK_WANDER_STANDARD(0, 40000f, 0);
			}
			TASK::CLOSE_SEQUENCE_TASK(iVar0);
			TASK::TASK_PERFORM_SEQUENCE(uParam0->f_3, iVar0);
			TASK::CLEAR_SEQUENCE_TASK(&iVar0);
		}
		PED::SET_PED_KEEP_TASK(uParam0->f_3, true);
	}
}

int func_153(var uParam0)//Position - 0xD402
{
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_3, false))
	{
		if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), uParam0->f_3, 1) < 40f && !ENTITY::IS_ENTITY_OCCLUDED(uParam0->f_3))
		{
			return 1;
		}
	}
	return 0;
}

int func_154(var uParam0)//Position - 0xD440
{
	return uParam0->f_118;
}

int func_155(var uParam0)//Position - 0xDA78
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (__LIB_0__::func_703((uParam0[iVar0 /*8*/])->f_7, 4))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_156(var uParam0)//Position - 0xDAEF
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (__LIB_0__::func_703((uParam0[iVar0 /*8*/])->f_7, 2))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_157(var uParam0)//Position - 0x10F26
{
	if ((((((uParam0->f_411 == 2 || uParam0->f_411 == 3) || uParam0->f_411 == 4) || uParam0->f_411 == 5) || uParam0->f_411 == 6) || uParam0->f_411 == 7) || uParam0->f_411 == 8)
	{
		return 1;
	}
	return 0;
}

int func_158(var uParam0)//Position - 0x11072
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(uParam0[iVar0 /*8*/]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_159(var uParam0, bool bParam1)//Position - 0x1109F
{
	switch (uParam0->f_411)
	{
		case 0:
			if (bParam1)
			{
				__LIB_0__::func_229("TX_OBJ_NEX_PU", 7500, 1);
			}
			else
			{
				__LIB_0__::func_229("TX_OBJ_NEX_DO", 7500, 1);
			}
			break;
		case 1:
			if (bParam1)
			{
				__LIB_0__::func_229("TX_OBJ_TIE_PU", 7500, 1);
			}
			else
			{
				__LIB_0__::func_229("TX_OBJ_TIE_DO", 7500, 1);
			}
			break;
		case 2:
			if (bParam1)
			{
				__LIB_0__::func_229("TX_OBJ_DL_PU", 7500, 1);
			}
			else
			{
				__LIB_0__::func_229("TX_OBJ_DL_DO", 7500, 1);
			}
			break;
		case 3:
			if (bParam1)
			{
				__LIB_0__::func_229("TX_OBJ_GYB_PU", 7500, 1);
			}
			else
			{
				__LIB_0__::func_229("TX_OBJ_GYB_DO", 7500, 1);
			}
			break;
		case 4:
			if (bParam1)
			{
				__LIB_0__::func_229("TX_OBJ_TTB_PU", 7500, 1);
			}
			else
			{
				__LIB_0__::func_229("TX_OBJ_TTB_DO", 7500, 1);
			}
			break;
		case 5:
			if (bParam1)
			{
				__LIB_0__::func_229("TX_OBJ_CYI_PU", 7500, 1);
			}
			else
			{
				__LIB_0__::func_229("TX_OBJ_CYI_DO", 7500, 1);
			}
			break;
		case 6:
			if (bParam1)
			{
				__LIB_0__::func_229("TX_OBJ_GYN_PU", 7500, 1);
			}
			else
			{
				__LIB_0__::func_229("TX_OBJ_GYN_DO", 7500, 1);
			}
			break;
		case 7:
			if (bParam1)
			{
				__LIB_0__::func_229("TX_OBJ_CC_PU", 7500, 1);
			}
			else
			{
				__LIB_0__::func_229("TAXI_OBJ_CC1", 7500, 1);
			}
			break;
		case 8:
			if (bParam1)
			{
				__LIB_0__::func_229("TX_OBJ_FC_PU", 7500, 1);
			}
			else
			{
				__LIB_0__::func_229("TAXI_OBJ_FTC1", 7500, 1);
			}
			break;
		case 9:
			if (bParam1)
			{
				__LIB_0__::func_229("TX_OBJ_PRO_PU", 7500, 1);
			}
			else
			{
				__LIB_0__::func_229("TX_OBJ_PRO_DO", 7500, 1);
			}
			break;
	}
	if (!bParam1)
	{
		uParam0->f_139 = 1;
	}
}

char* func_160(var uParam0)//Position - 0x112D5
{
	char* sVar0;
	switch (uParam0->f_411)
	{
		case 0:
			sVar0 = "TaxiFelipe";
			break;
		case 1:
			sVar0 = "TaxiOtis";
			break;
		case 2:
			sVar0 = "TaxiKwak";
			break;
		case 3:
			sVar0 = "TaxiWalter";
			break;
		case 4:
			sVar0 = "TaxiMiranda";
			break;
		case 5:
			sVar0 = "TaxiDerrick";
			break;
		case 6:
			sVar0 = "TaxiAlonzo";
			break;
		case 7:
			sVar0 = "TaxiDarren";
			break;
		case 8:
			sVar0 = "TaxiKeyla";
			break;
	}
	return sVar0;
}

char* func_161(var uParam0, int iParam1)//Position - 0x1136F
{
	switch (iParam1)
	{
		case 72:
			switch (uParam0->f_411)
			{
				case 0:
					return "_ACRH";
				case 1:
					return "_ACRH";
				case 2:
					return "_ACAA";
				case 3:
					return "_ACRH";
				case 4:
					return "_AEAA";
				case 5:
					return "_DKAA";
				case 6:
					return "_ACAA";
				case 7:
					return "_ACAA";
				case 8:
					return "_ACRH";
				default:
			}
			return "_ACRH";
			break;
		case 82:
			switch (uParam0->f_411)
			{
				case 0:
					return "_AHIT";
				case 1:
					return "_AHIT";
				case 2:
					return "_AEAA";
				case 3:
					return "_ADAA";
				case 4:
					return "_AFAA";
				case 5:
					return "_AFAA";
				case 6:
					return "_AEAA";
				case 7:
					return "_AHAA";
				case 8:
					return "_AEAA";
				default:
			}
			return "_AHIT";
			break;
		case 74:
			switch (uParam0->f_411)
			{
				case 0:
					return "_AROL";
				case 1:
					return "_AROL";
				case 2:
					return "_AHAA";
				case 3:
					return "_AROL";
				case 4:
					return "_AGAA";
				case 5:
					return "_AROL";
				case 6:
					return "_AROL";
				case 7:
					return "_AROL";
				case 8:
					return "_AROL";
				default:
			}
			return "_AROL";
			break;
		case 65:
			switch (uParam0->f_411)
			{
				case 0:
					return "_ABAA";
				case 1:
					return "_FUAA";
				case 2:
					return "_AFAA";
				case 3:
					return "_DBAA";
				case 4:
					return "_DLAA";
				case 5:
					return "_DKAA";
				case 6:
					if (uParam0->f_115)
					{
						return "_EEAA";
					}
					else
					{
						return "_EFAA";
					}
					break;
				case 7:
					return "_DBAA";
				case 8:
					return "_EFAA";
				default:
					return "_AROL";
			}
			break;
		case 66:
			switch (uParam0->f_411)
			{
				case 0:
					return "_AEAA";
				case 1:
					return "_ACAA";
				case 2:
					return "_AJAA";
				case 3:
					return "_AHAA";
				case 4:
					return "_AHAA";
				case 5:
					return "_AIAA";
				case 6:
					if (uParam0->f_115)
					{
						return "_AJAA";
					}
					else
					{
						return "_AGAA";
					}
					break;
				case 7:
					return "_AUAA";
				case 8:
					return "_AHAA";
				default:
					return "_AROL";
			}
			break;
		case 2:
			switch (uParam0->f_411)
			{
				case 0:
					return "_AAAA";
				case 1:
					return "_AAAA";
				case 2:
					return "_ADAA";
				case 3:
					return "_ABAA";
				case 4:
					return "_AAAA";
				case 5:
					return "_ABAA";
				case 6:
					if (uParam0->f_115)
					{
						return "_AHAA";
					}
					else
					{
						return "_ABAA";
					}
					break;
				case 7:
					return "_BUAA";
				case 8:
					return "_ADAA";
				default:
					return "_AAAA";
			}
			break;
	}
	return "_ACRH";
}

int func_162(var uParam0)//Position - 0x11E4A
{
	switch (uParam0->f_411)
	{
		case 0:
			if (__LIB_0__::func_501("TX_OBJ_NEX_DO", 0, 0))
			{
				return 1;
			}
			break;
		case 1:
			if (__LIB_0__::func_501("TX_OBJ_TIE_DO", 0, 0))
			{
				return 1;
			}
			break;
		case 2:
			if (__LIB_0__::func_501("TX_OBJ_DL_DO", 0, 0))
			{
				return 1;
			}
			break;
		case 3:
			if ((__LIB_0__::func_501("TX_OBJ_GYB_DO", 0, 0) || __LIB_0__::func_501("TAXI_OBJ_GYB", 0, 0)) || __LIB_0__::func_501("TAXI_OBJ_GYB_2", 0, 0))
			{
				return 1;
			}
			break;
		case 4:
			if (__LIB_0__::func_501("TX_OBJ_TTB_DO", 0, 0))
			{
				return 1;
			}
			break;
		case 5:
			if ((__LIB_0__::func_501("TX_OBJ_CYI_DO", 0, 0) || __LIB_0__::func_501("TAXI_OBJ_CYI_01", 0, 0)) || __LIB_0__::func_501("TAXI_OBJ_CYI_02", 0, 0))
			{
				return 1;
			}
			break;
		case 6:
			if (((__LIB_0__::func_501("TX_OBJ_GYN_DO", 0, 0) || __LIB_0__::func_501("TAXI_OBJ_GYN", 0, 0)) || __LIB_0__::func_501("TAXI_OBJ_GYN_TG", 0, 0)) || __LIB_0__::func_501("TAXI_OBJ_GYN_GF", 0, 0))
			{
				return 1;
			}
			break;
		case 7:
			if ((__LIB_0__::func_501("TAXI_OBJ_CC1", 0, 0) || __LIB_0__::func_501("TAXI_OBJ_CC2", 0, 0)) || __LIB_0__::func_501("TAXI_OBJ_CC3", 0, 0))
			{
				return 1;
			}
			break;
		case 8:
			if ((__LIB_0__::func_501("TAXI_OBJ_FTC1", 0, 0) || __LIB_0__::func_501("TAXI_OBJ_FTC2", 0, 0)) || __LIB_0__::func_501("TAXI_OBJ_FTC3", 0, 0))
			{
				return 1;
			}
			break;
		case 9:
			if (__LIB_0__::func_501("TX_OBJ_PRO_DO", 0, 0))
			{
				return 1;
			}
			break;
	}
	return (((((__LIB_0__::func_501("TAXI_OBJ_GETRUN", 0, 0) || __LIB_0__::func_501("TAXI_OBJ_DRIVE", 0, 0)) || __LIB_0__::func_501("TAXI_OBJ_RETURN", 0, 0)) || __LIB_0__::func_501("TAXI_OBJ_POL", 0, 0)) || __LIB_0__::func_501("TAXI_OBJ_RUNOUT", 0, 0)) || __LIB_0__::func_501("TAXI_OBJ_POL", 0, 0));
}

int func_163(char* sParam0)//Position - 0x1206A
{
	if (!MISC::IS_STRING_NULL(sParam0))
	{
		if (__LIB_0__::func_501(sParam0, 0, 0))
		{
			return 1;
		}
	}
	return 0;
}

bool func_164(var uParam0)//Position - 0x120ED
{
	return uParam0->f_117;
}

void func_165(var uParam0, var uParam1, bool bParam2)//Position - 0x1213A
{
	if (!__LIB_0__::func_703(uParam0->f_55, 1))
	{
		switch (*uParam1)
		{
			case 0:
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_124)) && __LIB_0__::func_75())
				{
					*uParam1++;
				}
				break;
			case 1:
				if (!__LIB_0__::func_75())
				{
					StringCopy(&(uParam0->f_124), __LIB_0__::func_591(), 24);
					uParam0->f_56 = (uParam0->f_56 + uParam0->f_57);
					if (uParam0->f_56 < 0)
					{
						uParam0->f_56 = 0;
					}
					uParam0->f_57 = 0;
					*uParam1 = 0;
					if (bParam2)
					{
					}
				}
				break;
			}
	}
}

int func_166(var uParam0)//Position - 0x1356B
{
	if (uParam0->f_109 && uParam0->f_410 < 29)
	{
		return 1;
	}
	return 0;
}

void func_167(var uParam0, int iParam1, int iParam2)//Position - 0x13604
{
	uParam0->f_58 = iParam1;
	uParam0->f_59 = iParam2;
}

int func_168(int iParam0)//Position - 0x1369A
{
	return Global_113386.f_19097.f_39[iParam0];
}

void func_169(var uParam0, char* sParam1, char* sParam2, char* sParam3)//Position - 0x13802
{
	uParam0->f_122 = sParam1;
	uParam0->f_143 = sParam2;
	uParam0->f_144 = sParam3;
}

void func_170(var uParam0)//Position - 0x13953
{
	switch (uParam0->f_418.f_2)
	{
		case 2:
		case 8:
			uParam0->f_418.f_3 = 1;
			break;
		case 0:
		case 3:
		case 5:
		case 9:
		case 15:
			uParam0->f_418.f_3 = 2;
			break;
		case 4:
		case 10:
			uParam0->f_418.f_3 = 3;
			break;
		case 1:
		case 6:
		case 13:
			uParam0->f_418.f_3 = 4;
			break;
		case 11:
			uParam0->f_418.f_3 = 5;
			break;
		case 12:
		case 14:
			uParam0->f_418.f_3 = 6;
			break;
		case 7:
			uParam0->f_418.f_3 = 7;
			break;
	}
}

void func_171(var uParam0, int iParam1)//Position - 0x13AB6
{
	uParam0->f_418.f_1 = iParam1;
}

void func_172(var uParam0, int iParam1)//Position - 0x13AC7
{
	uParam0->f_418.f_2 = iParam1;
}

void func_173(struct<3> Param0, bool bParam1)//Position - 0x2515
{
	struct<3> Var0;
	struct<3> Var1;
	if (!__LIB_0__::func_78(Param0, __LIB_0__::func_613(), 0))
	{
		Var0 = { __LIB_1__::func_657(Param0, 1f, -30f, -30f, -10f) };
		Var1 = { __LIB_1__::func_657(Param0, 1f, 30f, 30f, 10f) };
		VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Var0, Var1, bParam1, true);
	}
}

bool func_174(var uParam0, int iParam1)//Position - 0x4AF1
{
	if (iParam1 != 1073741824)
	{
		return (__LIB_0__::func_703(uParam0->f_81, iParam1) && !__LIB_0__::func_75());
	}
	return __LIB_0__::func_75();
}

void func_175(var uParam0, int iParam1)//Position - 0x5392
{
	__LIB_0__::func_988(uParam0, iParam1);
}

void func_176(int iParam0, int iParam1)//Position - 0x53D8
{
	switch (iParam0)
	{
		case 0:
			Global_113386.f_19097.f_22[0]++;
			__LIB_0__::func_467("Fares Completed ++ = ", Global_113386.f_19097.f_22[0]);
			break;
		case 1:
			Global_113386.f_19097.f_22[1]++;
			__LIB_0__::func_467("Fares Failed ++ = ", Global_113386.f_19097.f_22[1]);
			break;
		case 2:
			Global_113386.f_19097.f_22[2]++;
			__LIB_0__::func_467("Fares Accepted ++ ", Global_113386.f_19097.f_22[2]);
			break;
		case 3:
			Global_113386.f_19097.f_22[3]++;
			__LIB_0__::func_467("Fares Expired ++ ", Global_113386.f_19097.f_22[3]);
			break;
		case 13:
			Global_113386.f_19097.f_22[13]++;
			__LIB_0__::func_467("Passengers run ++ = ", Global_113386.f_19097.f_22[13]);
			break;
		case 14:
			Global_113386.f_19097.f_22[14]++;
			__LIB_0__::func_467("Passenger Forced to Pay ++ = ", Global_113386.f_19097.f_22[14]);
			break;
		case 4:
			if (iParam1 != 0)
			{
				if (iParam1 > Global_113386.f_19097.f_22[4])
				{
					Global_113386.f_19097.f_22[4] = iParam1;
					__LIB_0__::func_467("This distance ", iParam1);
					__LIB_0__::func_467(" is longer than current best", Global_113386.f_19097.f_22[4]);
				}
				else
				{
					__LIB_0__::func_467("Longest Distance Not Beat ", Global_113386.f_19097.f_22[4]);
				}
			}
			break;
		case 5:
			Global_113386.f_19097.f_22[5] = (Global_113386.f_19097.f_22[5] + iParam1);
			__LIB_0__::func_467("Total Distance w/ Passenger = ", Global_113386.f_19097.f_22[5]);
			break;
		case 6:
			if (iParam1 == 0)
			{
				Global_113386.f_19097.f_22[6]++;
			}
			else
			{
				Global_113386.f_19097.f_22[6] = (Global_113386.f_19097.f_22[6] + iParam1);
			}
			__LIB_0__::func_467("Wanted Levels ++ = ", Global_113386.f_19097.f_22[6]);
			break;
		case 7:
			if (iParam1 > 0)
			{
				Global_113386.f_19097.f_22[7] = (Global_113386.f_19097.f_22[7] + iParam1);
			}
			else
			{
				Global_113386.f_19097.f_22[7]++;
			}
			__LIB_0__::func_467("Wanted Levels Lost = ", Global_113386.f_19097.f_22[7]);
			break;
		case 8:
			Global_113386.f_19097.f_22[8]++;
			__LIB_0__::func_467("Taxis wrecked ++ = ", Global_113386.f_19097.f_22[8]);
			break;
		case 9:
			Global_113386.f_19097.f_22[9]++;
			__LIB_0__::func_467("Horn Honked ++ = ", Global_113386.f_19097.f_22[9]);
			break;
		case 10:
			Global_113386.f_19097.f_22[10] = (Global_113386.f_19097.f_22[10] + iParam1);
			__LIB_0__::func_467("Total Money Earned = ", Global_113386.f_19097.f_22[10]);
			break;
		case 11:
			Global_113386.f_19097.f_22[11] = (Global_113386.f_19097.f_22[11] + iParam1);
			__LIB_0__::func_467("Total Tips Earned = ", Global_113386.f_19097.f_22[11]);
			break;
		case 12:
			if (iParam1 > Global_113386.f_19097.f_22[12])
			{
				Global_113386.f_19097.f_22[12] = iParam1;
				__LIB_0__::func_467("New Highest Tip = ", Global_113386.f_19097.f_22[12]);
			}
			else
			{
				__LIB_0__::func_467("Highest Tip Not Reached = ", Global_113386.f_19097.f_22[12]);
			}
			break;
	}
}

void func_177(var uParam0, int iParam1)//Position - 0x62CB
{
	int iVar0;
	if (iParam1 == 32)
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			if (!__LIB_0__::func_701(&(uParam0->f_146[iVar0 /*3*/])))
			{
				__LIB_19__::func_923(&(uParam0->f_146[iVar0 /*3*/]));
			}
			iVar0++;
		}
	}
	else if (__LIB_0__::func_702(&(uParam0->f_146[iParam1 /*3*/])))
	{
		if (!__LIB_0__::func_701(&(uParam0->f_146[iParam1 /*3*/])))
		{
			__LIB_19__::func_923(&(uParam0->f_146[iParam1 /*3*/]));
		}
	}
}

void func_178(var uParam0, struct<3> Param1)//Position - 0x638D
{
	struct<3> Var0;
	struct<3> Var1;
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, false))
	{
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_3, false) && PED::IS_PED_SITTING_IN_VEHICLE(uParam0->f_3, uParam0->f_4))
		{
			Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_4, -1.78774f, -1.62399f, -0.6206f) };
			Var1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_4, 1.78498f, -1.24105f, -0.6422f) };
			if (__LIB_2__::func_837(uParam0->f_3, uParam0->f_4) == 0)
			{
				TASK::TASK_LEAVE_VEHICLE(uParam0->f_3, uParam0->f_4, 512);
			}
			else if (MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Param1, false) < MISC::GET_DISTANCE_BETWEEN_COORDS(Var1, Param1, false) && VEHICLE::IS_ENTRY_POINT_FOR_SEAT_CLEAR(uParam0->f_3, uParam0->f_4, 1, false, false))
			{
				TASK::TASK_LEAVE_VEHICLE(uParam0->f_3, uParam0->f_4, 131072);
			}
			else if (MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Param1, false) >= MISC::GET_DISTANCE_BETWEEN_COORDS(Var1, Param1, false) && VEHICLE::IS_ENTRY_POINT_FOR_SEAT_CLEAR(uParam0->f_3, uParam0->f_4, 2, false, false))
			{
				TASK::TASK_LEAVE_VEHICLE(uParam0->f_3, uParam0->f_4, 262144);
			}
			else
			{
				TASK::TASK_LEAVE_VEHICLE(uParam0->f_3, uParam0->f_4, 0);
			}
		}
	}
}

void func_179(var uParam0, int iParam1)//Position - 0x69BA
{
	__LIB_3__::func_128(&(uParam0->f_146[iParam1 /*3*/]));
}

void func_180(var uParam0)//Position - 0x700D
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		(uParam0[iVar0 /*8*/])->f_6 = 0;
		(uParam0[iVar0 /*8*/])->f_7 = 0;
		StringCopy(uParam0[iVar0 /*8*/], __LIB_0__::func_591(), 24);
		iVar0++;
	}
	HUD::CLEAR_PRINTS();
	__LIB_0__::func_429();
}

void func_181(var uParam0)//Position - 0x8C77
{
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_4, false))
	{
		if (__LIB_0__::func_680())
		{
		}
	}
}

int func_182(var uParam0)//Position - 0x9537
{
	if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
	{
		if (__LIB_0__::func_703(uParam0->f_85, 32))
		{
			return 1;
		}
	}
	return 0;
}

void func_183(var uParam0, int iParam1, float fParam2, bool bParam3)//Position - 0x9F68
{
	int iVar0;
	if (iParam1 == 32)
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			if (fParam2 > 0f)
			{
				__LIB_0__::func_706(&(uParam0->f_146[iVar0 /*3*/]), fParam2);
			}
			else
			{
				__LIB_1__::func_31(&(uParam0->f_146[iVar0 /*3*/]));
			}
			iVar0++;
		}
	}
	else if (fParam2 > 0f)
	{
		__LIB_0__::func_706(&(uParam0->f_146[iParam1 /*3*/]), fParam2);
	}
	else
	{
		__LIB_1__::func_31(&(uParam0->f_146[iParam1 /*3*/]));
	}
	if (bParam3)
	{
	}
}

void func_184(bool bParam0)//Position - 0xA01A
{
	STREAMING::REQUEST_MODEL(__LIB_12__::func_850());
	if (bParam0)
	{
		STREAMING::REQUEST_ANIM_DICT("gestures@m@standing@casual");
	}
	STREAMING::REQUEST_ANIM_DICT("oddjobs@taxi@");
	STREAMING::REQUEST_ANIM_DICT("oddjobs@towingcome_here");
	STREAMING::REQUEST_ANIM_DICT("misscommon@response");
	HUD::REQUEST_ADDITIONAL_TEXT("TAXI" /* GXT: Taxi */, 2);
	if (!__LIB_0__::func_703(Global_113386.f_19097, 128))
	{
		__LIB_40__::func_104(&(Global_113386.f_19097), 128);
	}
}

int func_185(struct<3> Param0, struct<3> Param1, struct<3> Param2, struct<3> Param3)//Position - 0xBE6F
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	Param0.f_2 = 0f;
	Param1.f_2 = 0f;
	Param2.f_2 = 0f;
	Param3.f_2 = 0f;
	Var0 = { __LIB_0__::func_79(Param2 - Param1) };
	Var1 = { __LIB_0__::func_79(Param3 - Param1) };
	fVar2 = __LIB_0__::func_158(Param0, Var0);
	fVar3 = __LIB_0__::func_158(Param1, Var0);
	fVar4 = __LIB_0__::func_158(Param2, Var0);
	fVar5 = __LIB_0__::func_158(Param0, Var1);
	fVar6 = __LIB_0__::func_158(Param1, Var1);
	fVar7 = __LIB_0__::func_158(Param3, Var1);
	if (fVar3 > fVar4)
	{
		fVar8 = fVar3;
		fVar3 = fVar4;
		fVar4 = fVar8;
	}
	if (fVar2 < fVar3 || fVar2 > fVar4)
	{
		return 0;
	}
	if (fVar6 > fVar7)
	{
		fVar9 = fVar6;
		fVar6 = fVar7;
		fVar7 = fVar9;
	}
	if (fVar5 < fVar6 || fVar5 > fVar7)
	{
		return 0;
	}
	return 1;
}

struct<6> func_186(var uParam0)//Position - 0xDAA8
{
	int iVar0;
	struct<6> Var1;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (__LIB_0__::func_703((uParam0[iVar0 /*8*/])->f_7, 2))
		{
			Var1 = { *(uParam0[iVar0 /*8*/]) };
			__LIB_40__::func_104(&((uParam0[iVar0 /*8*/])->f_7), 4);
		}
		iVar0++;
	}
	return Var1;
}

int func_187(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)//Position - 0x12EAB
{
	int iVar0;
	int iVar1;
	if (bParam3)
	{
		if (!bLocal_73)
		{
			iLocal_74 = ENTITY::GET_ENTITY_HEALTH(iParam0);
			bLocal_73 = true;
		}
		iLocal_75 = ENTITY::GET_ENTITY_HEALTH(iParam0);
		iLocal_76 = (iLocal_74 - iLocal_75);
		iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if (!ENTITY::IS_ENTITY_DEAD(iVar0, false))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iVar0, true))
			{
				if (IntToFloat(iLocal_76) > 100f)
				{
					return 1;
				}
			}
		}
		if (bLocal_73)
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, PLAYER::PLAYER_PED_ID(), true))
			{
				if (IntToFloat(iLocal_76) > 100f)
				{
					return 1;
				}
			}
		}
	}
	else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, PLAYER::PLAYER_PED_ID(), true))
	{
		return 1;
	}
	if (!bParam3)
	{
		iVar1 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if (!ENTITY::IS_ENTITY_DEAD(iVar1, false))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iVar1, true))
			{
				return 1;
			}
		}
	}
	if (bParam4)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
		{
			if (PED::IS_PED_BEING_JACKED(iParam0))
			{
				if (PED::GET_PEDS_JACKER(iParam0) == PLAYER::PLAYER_PED_ID())
				{
					return 1;
				}
			}
		}
	}
	if (bParam5)
	{
		if (PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()))
		{
			if (ENTITY::IS_ENTITY_AT_COORD(iParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 10f, 10f, 10f, false, true, 0))
			{
				if (PLAYER::HAS_PLAYER_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID()))
				{
					return 1;
				}
			}
		}
	}
	if (PED::IS_PED_PERFORMING_STEALTH_KILL(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::WAS_PED_KILLED_BY_STEALTH(iParam0))
		{
			return 1;
		}
	}
	if (__LIB_14__::func_536(PLAYER::PLAYER_PED_ID(), iParam0))
	{
		return 1;
	}
	if (bParam2)
	{
		if (PED::IS_PED_RAGDOLL(iParam0) && __LIB_14__::func_556(iParam0, 1) < 1.5f)
		{
			return 1;
		}
		else if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
		{
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), PED::GET_VEHICLE_PED_IS_IN(iParam0, false)))
			{
				return 1;
			}
		}
		else if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), iParam0))
		{
			return 1;
		}
		if (!ENTITY::IS_ENTITY_DEAD(iParam1, false))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam1, PLAYER::PLAYER_PED_ID(), true))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_188(var uParam0, int iParam1)//Position - 0x465F
{
	if (!__LIB_0__::func_702(&(uParam0->f_2)))
	{
		__LIB_1__::func_31(&(uParam0->f_2));
	}
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(14);
	GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(*uParam0, 255, 255, 255, 255, 0);
	if (iParam1 || uParam0->f_8)
	{
		if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/) || uParam0->f_8)
		{
			if (!__LIB_0__::func_702(&(uParam0->f_5)))
			{
				__LIB_1__::func_31(&(uParam0->f_5));
				__LIB_1__::func_216(uParam0, 1051260355);
			}
		}
		if (__LIB_0__::func_702(&(uParam0->f_5)))
		{
			if (__LIB_3__::func_108(&(uParam0->f_5)) > 0.33f)
			{
				__LIB_1__::func_377(&(uParam0->f_5));
				return 0;
			}
		}
	}
	if (uParam0->f_1 == -1)
	{
		return 1;
	}
	if (__LIB_3__::func_108(&(uParam0->f_2)) * 1000f) > SYSTEM::TO_FLOAT(uParam0->f_1)
	{
		if (!__LIB_0__::func_702(&(uParam0->f_5)))
		{
			__LIB_1__::func_31(&(uParam0->f_5));
			__LIB_1__::func_216(uParam0, 1051260355);
		}
		else if (__LIB_3__::func_108(&(uParam0->f_5)) > 0.33f)
		{
			__LIB_1__::func_377(&(uParam0->f_2));
			return 0;
		}
	}
	return 1;
}

void func_189(char* sParam0)//Position - 0xD0AC
{
	switch (__LIB_0__::func_216(PLAYER::PLAYER_PED_ID()))
	{
		case 0:
			StringConCat(sParam0, "M", 24);
			break;
		case 2:
			StringConCat(sParam0, "T", 24);
			break;
		case 1:
			StringConCat(sParam0, "F", 24);
			break;
		default:
			StringConCat(sParam0, "M", 24);
			break;
	}
}

int func_190()//Position - 0x1A6
{
	int iVar0;
	int iVar1;
	iVar1 = __LIB_0__::func_216(PLAYER::PLAYER_PED_ID());
	if (iVar1 == 0)
	{
		iVar0 = joaat("SP0_DIST_DRIVING_CAR");
	}
	else if (iVar1 == 2)
	{
		iVar0 = joaat("SP2_DIST_DRIVING_CAR");
	}
	else if (iVar1 == 1)
	{
		iVar0 = joaat("SP1_DIST_DRIVING_CAR");
	}
	else
	{
		iVar0 = joaat("SP0_DIST_DRIVING_CAR");
	}
	return iVar0;
}

void func_191(var uParam0)//Position - 0x56E5
{
	PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID());
	PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0);
	__LIB_40__::func_129(uParam0, 1000);
}

int func_192(var uParam0)//Position - 0x5C13
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, false))
	{
		if (!PED::IS_PED_INJURED(uParam0->f_3))
		{
			if ((PED::IS_PED_GETTING_INTO_A_VEHICLE(uParam0->f_3) && (MISC::GET_GAME_TIMER() - iLocal_81) > 500) || PED::IS_PED_IN_VEHICLE(uParam0->f_3, uParam0->f_4, true))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_193(int iParam0)//Position - 0x6706
{
	switch (iParam0)
	{
		case 1:
			return 2;
		case 2:
			return 3;
		case 0:
			return 1;
		case -1:
			return 0;
		default:
	}
	return 2;
}

void func_194(var uParam0, struct<3> Param1, struct<3> Param2, float fParam3)//Position - 0x673E
{
	if (!CAM::DOES_CAM_EXIST(*uParam0))
	{
		*uParam0 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), Param1, Param2, fParam3, false, 2);
	}
}

int func_195(int iParam0, int iParam1)//Position - 0x6C7C
{
	struct<3> Var0;
	int iVar1;
	int iVar2;
	iVar2 = VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(iParam0);
	Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iParam0, ENTITY::GET_ENTITY_COORDS(iParam1, true)) };
	if (ENTITY::GET_ENTITY_MODEL(iParam0) != joaat("vacca"))
	{
	}
	if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("sentinel2"))
	{
		iVar2 = 1;
	}
	if (iVar2 == 1)
	{
		iVar1 = 0;
	}
	else if (Var0.f_0 > 0f)
	{
		if (VEHICLE::IS_ENTRY_POINT_FOR_SEAT_CLEAR(iParam1, iParam0, 2, false, false))
		{
			iVar1 = 2;
		}
		else if (VEHICLE::IS_ENTRY_POINT_FOR_SEAT_CLEAR(iParam1, iParam0, 1, false, false))
		{
			iVar1 = 1;
		}
		else
		{
			iVar1 = -2;
		}
	}
	else if (VEHICLE::IS_ENTRY_POINT_FOR_SEAT_CLEAR(iParam1, iParam0, 1, false, false))
	{
		iVar1 = 1;
	}
	else if (VEHICLE::IS_ENTRY_POINT_FOR_SEAT_CLEAR(iParam1, iParam0, 2, false, false))
	{
		iVar1 = 2;
	}
	else
	{
		iVar1 = -2;
	}
	return iVar1;
}

float func_196(var uParam0, int iParam1)//Position - 0x72BC
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam1, false))
	{
		if (__LIB_40__::func_147(uParam0))
		{
			return __LIB_0__::func_76(uParam0->f_4, iParam1, 1);
		}
	}
	return 0f;
}

int func_197(var uParam0, var uParam1)//Position - 0x7D99
{
	uParam1 = uParam1;
	__LIB_40__::func_137(uParam0, 11);
	return 1;
}

void func_198(var uParam0, struct<3> Param1)//Position - 0x8779
{
	uParam0->f_51[0] = VEHICLE::ADD_ROAD_NODE_SPEED_ZONE(Param1, 20f, 5f, false);
}

void func_199(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, bool bParam5)//Position - 0xD6BC
{
	float fVar0;
	int iVar1;
	int iVar2;
	iVar2 = 0;
	while (iVar2 < iParam1)
	{
		fVar0 = SYSTEM::TO_FLOAT(iVar2);
		iVar1 = SYSTEM::ROUND(SYSTEM::POW(2f, fVar0));
		if (!__LIB_0__::func_703(*uParam0, iVar1))
		{
			__LIB_0__::func_989(uParam0, iVar1);
			if (bParam5)
			{
				StringConCat(sParam2, "_", 24);
			}
			StringIntConCat(sParam2, iVar2 + 1, 24);
			if ((*iParam3)[iVar2])
			{
				__LIB_40__::func_131(sParam2);
			}
			if (bParam4)
			{
				if (iVar2 == (iParam1 - 1))
				{
					*uParam0 = 0;
				}
			}
			return;
		}
		iVar2++;
	}
}

void func_200(var uParam0, int iParam1, char* sParam2, bool bParam3, bool bParam4, bool bParam5)//Position - 0xE4D9
{
	float fVar0;
	int iVar1;
	int iVar2;
	iVar2 = 0;
	while (iVar2 < iParam1)
	{
		fVar0 = SYSTEM::TO_FLOAT(iVar2);
		iVar1 = SYSTEM::ROUND(SYSTEM::POW(2f, fVar0));
		if (!__LIB_0__::func_703(*uParam0, iVar1))
		{
			__LIB_0__::func_989(uParam0, iVar1);
			if (bParam5)
			{
				if (!bParam4)
				{
					StringIntConCat(sParam2, iVar2 + 1, 24);
					__LIB_40__::func_131(sParam2);
				}
				else
				{
					__LIB_40__::func_131(sParam2);
				}
			}
			else
			{
				if (bParam4)
				{
					StringConCat(sParam2, "_", 24);
				}
				StringIntConCat(sParam2, iVar2 + 1, 24);
			}
			if (bParam3)
			{
				if (iVar2 == (iParam1 - 1))
				{
					*uParam0 = 0;
				}
			}
			return;
		}
		iVar2++;
	}
}

void func_201(int iParam0)//Position - 0x922
{
	var uVar0;
	if (iLocal_57[0] != 0)
	{
		MemCopy(&uVar0, {__LIB_40__::func_106(iParam0)}, 6);
		if (!MISC::IS_STRING_NULL(&uVar0))
		{
		}
	}
}

int func_202()//Position - 0xE1A
{
	if (!__LIB_40__::func_109() && !__LIB_3__::func_100())
	{
		if (!PLAYER::IS_PLAYER_SCRIPT_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
		{
			return 1;
		}
	}
	return 0;
}

void func_203(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, char* sParam6, char* sParam7, int iParam8, int iParam9)//Position - 0x35AD
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, __LIB_40__::func_112());
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(iParam9);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam7);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam3);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam6);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam5);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam4);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	__LIB_1__::func_31(&(uParam0->f_2));
	uParam0->f_1 = iParam8;
	uParam0->f_9 = 1;
}

void func_204(var uParam0)//Position - 0x36CC
{
	int iVar0;
	Local_161.f_1 = SYSTEM::TO_FLOAT(uParam0->f_50);
	Local_161.f_2 = SYSTEM::TO_FLOAT(uParam0->f_56);
	__LIB_40__::func_176(11, uParam0->f_56);
	__LIB_40__::func_176(12, uParam0->f_56);
	iLocal_57[1] = uParam0->f_56;
	iLocal_57[2] = uParam0->f_56;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_60)
	{
		Local_161.f_4[iVar0 /*3*/] = { uParam0->f_60[iVar0 /*3*/] };
		if (BitTest(Local_161.f_4[iVar0 /*3*/], 2))
		{
			Local_161.f_3 = (Local_161.f_3 + IntToFloat(uParam0->f_60[iVar0 /*3*/].f_1));
		}
		iVar0++;
	}
	Local_161.f_0 = uParam0->f_411;
	Local_161.f_20 = ((Local_161.f_1 + Local_161.f_2) + Local_161.f_3);
}

void func_205(var uParam0)//Position - 0x3EAF
{
	if (uParam0->f_56 >= uParam0->f_59)
	{
		uParam0->f_56 = SYSTEM::CEIL((IntToFloat(uParam0->f_50) * 0.4f));
	}
	else if (uParam0->f_56 < uParam0->f_59 && uParam0->f_56 >= uParam0->f_58)
	{
		uParam0->f_56 = SYSTEM::CEIL((IntToFloat(uParam0->f_50) * 0.15f));
	}
	else
	{
		uParam0->f_56 = 0;
	}
	if (!__LIB_0__::func_703(uParam0->f_55, 1))
	{
		__LIB_40__::func_104(&(uParam0->f_55), 1);
	}
}

void func_206(var uParam0)//Position - 0x3FDA
{
	float fVar0;
	fVar0 = uParam0->f_41;
	fVar0 = __LIB_27__::func_542(fVar0);
	iLocal_57[4] = SYSTEM::CEIL(fVar0);
	iLocal_57[5] = SYSTEM::CEIL(fVar0);
	__LIB_40__::func_176(4, SYSTEM::CEIL(fVar0));
	__LIB_40__::func_176(5, SYSTEM::CEIL(fVar0));
	uParam0->f_50 = SYSTEM::CEIL((fVar0 * 100f));
}

int func_207(var uParam0)//Position - 0x573D
{
	struct<3> Var0;
	struct<6> Var1;
	StringCopy(&Var0, uParam0->f_143, 24);
	if (__LIB_0__::func_75())
	{
		Var1 = { __LIB_0__::func_486() };
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var1))
		{
			StringConCat(&Var0, "_obj1", 24);
			if (MISC::ARE_STRINGS_EQUAL(&Var1, &Var0))
			{
				return 1;
			}
			StringCopy(&Var0, uParam0->f_143, 24);
			StringConCat(&Var0, "_gret1", 24);
			__LIB_40__::func_131(&Var0);
			if (MISC::ARE_STRINGS_EQUAL(&Var1, &Var0))
			{
				return 1;
			}
		}
	}
	return 0;
}

float func_208(var uParam0)//Position - 0x6769
{
	float fVar0;
	struct<3> Var1;
	fVar0 = 0f;
	Var1 = { __LIB_0__::func_613() };
	if (uParam0->f_7 == 2)
	{
		Var1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_4, 0.773f, -0.646f, -0.6422f) };
	}
	else
	{
		Var1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_4, -0.773f, -0.646f, -0.6422f) };
	}
	fVar0 = __LIB_0__::func_932(ENTITY::GET_ENTITY_COORDS(uParam0->f_3, true), Var1);
	return fVar0;
}

int func_209(var uParam0, int iParam1)//Position - 0x756D
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
			{
				iVar1 = ENTITY::GET_ENTITY_MODEL(iVar0);
				bVar2 = __LIB_40__::func_101(iVar0);
				bVar3 = true;
				if (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((iVar1 == joaat("rhino") || iVar1 == joaat("ratloader")) || iVar1 == joaat("surfer")) || iVar1 == joaat("surfer2")) || iVar1 == joaat("armytanker")) || iVar1 == joaat("barracks")) || iVar1 == joaat("barracks2")) || iVar1 == joaat("crusader")) || iVar1 == joaat("utillitruck")) || iVar1 == joaat("utillitruck2")) || iVar1 == joaat("utillitruck3")) || iVar1 == joaat("airtug")) || iVar1 == joaat("caddy")) || iVar1 == joaat("caddy2")) || iVar1 == joaat("dloader")) || iVar1 == joaat("docktug")) || iVar1 == joaat("flatbed")) || iVar1 == joaat("ripley")) || iVar1 == joaat("romero")) || iVar1 == joaat("towtruck")) || iVar1 == joaat("towtruck2")) || iVar1 == joaat("airbus")) || iVar1 == joaat("bus")) || iVar1 == joaat("coach")) || iVar1 == joaat("rentalbus")) || iVar1 == joaat("tourbus")) || iVar1 == joaat("riot")) || iVar1 == joaat("trash")) || iVar1 == joaat("benson")) || iVar1 == joaat("biff")) || iVar1 == joaat("hauler")) || iVar1 == joaat("packer")) || iVar1 == joaat("phantom")) || iVar1 == joaat("pounder")) || iVar1 == joaat("bulldozer")) || iVar1 == joaat("handler")) || iVar1 == joaat("tiptruck2")) || iVar1 == joaat("cutter")) || iVar1 == joaat("dump")) || iVar1 == joaat("mixer")) || iVar1 == joaat("mixer2")) || iVar1 == joaat("rubble")) || iVar1 == joaat("scrap")) || iVar1 == joaat("tiptruck")) || iVar1 == joaat("camper")) || iVar1 == joaat("taco")) || iVar1 == joaat("boxville")) || iVar1 == joaat("boxville2")) || iVar1 == joaat("boxville3")) || iVar1 == joaat("burrito")) || iVar1 == joaat("burrito2")) || iVar1 == joaat("burrito3")) || iVar1 == joaat("burrito4")) || iVar1 == joaat("gburrito")) || iVar1 == joaat("journey")) || iVar1 == joaat("mule")) || iVar1 == joaat("mule2")) || iVar1 == joaat("pony")) || iVar1 == joaat("rumpo")) || iVar1 == joaat("rumpo2")) || iVar1 == joaat("speedo")) || iVar1 == joaat("speedo2")) || iVar1 == joaat("youga")) || iVar1 == joaat("mower")) || iVar1 == joaat("tractor")) || iVar1 == joaat("tractor2")) || iVar1 == joaat("fbi")) || iVar1 == joaat("fbi2")) || iVar1 == joaat("pranger")) || iVar1 == joaat("ambulance")) || iVar1 == joaat("dilettante2")) || iVar1 == joaat("firetruk")) || iVar1 == joaat("lguard")) || iVar1 == joaat("dune")) || iVar1 == joaat("pbus")) || iVar1 == joaat("police")) || iVar1 == joaat("police2")) || iVar1 == joaat("police3")) || iVar1 == joaat("police4")) || iVar1 == joaat("policeb")) || iVar1 == joaat("policet")) || iVar1 == joaat("sheriff")) || iVar1 == joaat("sheriff2")) || iVar1 == joaat("stockade"))
				{
					bVar3 = false;
				}
				if (uParam0->f_411 == 7)
				{
					if (iVar1 == joaat("bodhi2"))
					{
						bVar3 = false;
					}
				}
				bVar4 = false;
				if (VEHICLE::IS_THIS_MODEL_A_CAR(iVar1))
				{
					if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1, false) == PLAYER::PLAYER_PED_ID())
					{
						bVar4 = true;
					}
				}
				bVar5 = true;
				if (VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(iVar0) < iParam1)
				{
					bVar5 = false;
				}
				if (!bVar2)
				{
					if (!__LIB_0__::func_703(uParam0->f_44, 64))
					{
						if (HUD::HAS_ADDITIONAL_TEXT_LOADED(2))
						{
							__LIB_0__::func_151("TX_VIP_DMGD", -1);
							if (__LIB_0__::func_1("TX_VIP_DMGD"))
							{
								__LIB_40__::func_104(&(uParam0->f_44), 64);
							}
						}
					}
					return 0;
				}
				else if (!bVar4 || !bVar3)
				{
					if (!__LIB_0__::func_703(uParam0->f_44, 32))
					{
						if (HUD::HAS_ADDITIONAL_TEXT_LOADED(2))
						{
							__LIB_0__::func_151("TX_VIP_CAR", -1);
							if (__LIB_0__::func_1("TX_VIP_CAR"))
							{
								__LIB_40__::func_104(&(uParam0->f_44), 32);
							}
						}
					}
					return 0;
				}
				else if (!bVar5)
				{
					if (!__LIB_0__::func_703(uParam0->f_44, 16))
					{
						if (HUD::HAS_ADDITIONAL_TEXT_LOADED(2))
						{
							__LIB_0__::func_151("TX_VIP_SMALL", -1);
							if (__LIB_0__::func_1("TX_VIP_SMALL"))
							{
								__LIB_40__::func_104(&(uParam0->f_44), 16);
							}
						}
					}
					return 0;
				}
				return 1;
			}
		}
		else
		{
			__LIB_40__::func_175(&(uParam0->f_44), 16);
			__LIB_40__::func_175(&(uParam0->f_44), 64);
			__LIB_40__::func_175(&(uParam0->f_44), 32);
		}
	}
	return 0;
}

int func_210(var uParam0)//Position - 0x7CBD
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_4))
	{
		if (__LIB_40__::func_138(uParam0->f_4))
		{
			__LIB_40__::func_137(uParam0, 1);
			return 1;
		}
	}
	return 0;
}

int func_211(var uParam0)//Position - 0x7EEA
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_4))
	{
		if (__LIB_40__::func_141(uParam0->f_4))
		{
			__LIB_40__::func_137(uParam0, 0);
			return 1;
		}
	}
	return 0;
}

void func_212(var uParam0, int iParam1, bool bParam2)//Position - 0x96A9
{
	int iVar0;
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_3, false))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_3, false);
		ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(uParam0->f_3);
		PED::SET_PED_FLEE_ATTRIBUTES(uParam0->f_3, 3, false);
		PED::SET_PED_COMBAT_ATTRIBUTES(uParam0->f_3, 17, true);
		TASK::CLEAR_PED_TASKS(uParam0->f_3);
		if ((__LIB_2__::func_485(uParam0->f_3, uParam0->f_29, 1) <= 200f && !__LIB_0__::func_86(uParam0->f_29)) && !bParam2)
		{
			__LIB_40__::func_152(uParam0);
		}
		else
		{
			PED::SET_PED_FLEE_ATTRIBUTES(uParam0->f_3, 1024, true);
			PED::SET_PED_FLEE_ATTRIBUTES(uParam0->f_3, 131072, true);
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, iParam1);
			if (uParam0->f_415 == 8)
			{
				TASK::TASK_WANDER_STANDARD(0, 40000f, 0);
			}
			else
			{
				TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 1000f, -1, false, false);
			}
			TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, false);
			TASK::CLOSE_SEQUENCE_TASK(iVar0);
			TASK::TASK_PERFORM_SEQUENCE(uParam0->f_3, iVar0);
			TASK::CLEAR_SEQUENCE_TASK(&iVar0);
		}
		PED::SET_PED_KEEP_TASK(uParam0->f_3, true);
	}
}

void func_213(var uParam0)//Position - 0x9EFF
{
	int iVar0;
	iVar0 = __LIB_40__::func_155(uParam0);
	if (iVar0 > -1)
	{
		__LIB_40__::func_175(&((uParam0[iVar0 /*8*/])->f_7), 2);
		__LIB_40__::func_175(&((uParam0[iVar0 /*8*/])->f_7), 4);
		__LIB_40__::func_104(&((uParam0[iVar0 /*8*/])->f_7), 8);
		StringCopy(uParam0[iVar0 /*8*/], __LIB_0__::func_591(), 24);
	}
}

void func_214(char[24] cParam0, var uParam1)//Position - 0xD73D
{
	int iVar0;
	iVar0 = __LIB_40__::func_158(uParam1);
	if (iVar0 > -1)
	{
		*(uParam1[iVar0 /*8*/]) = { cParam0 };
		__LIB_40__::func_104(&((uParam1[iVar0 /*8*/])->f_7), 2);
	}
}

void func_215(var uParam0, char[12] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char* sParam5)//Position - 0xD9BD
{
	__LIB_40__::func_183(uParam0, 16, 0, 0);
	__LIB_40__::func_183(uParam0, 17, 0f, 1);
	StringConCat(&cParam1, sParam5, 24);
	if (!PED::IS_PED_INJURED(uParam0->f_3))
	{
		AUDIO::INTERRUPT_CONVERSATION(uParam0->f_3, &cParam1, __LIB_40__::func_160(uParam0));
	}
}

void func_216(int iParam0, var uParam1, var uParam2, var uParam3, char[24] cParam4, bool bParam5)//Position - 0xDE7B
{
	if (iParam0 == 0)
	{
		if (__LIB_0__::func_703(*uParam2, 2))
		{
			if (!bParam5)
			{
				*uParam1 = (*uParam1 - 2);
			}
			else
			{
				*uParam1 += 3;
			}
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 8)
	{
		if (__LIB_0__::func_703(*uParam2, 1073741824))
		{
			*uParam1 += 2;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 1)
	{
		if (__LIB_0__::func_703(*uParam2, 4))
		{
			if (!__LIB_0__::func_703(*uParam2, 4096))
			{
				*uParam1 = (*uParam1 - 1);
				*uParam3 = { cParam4 };
			}
			else
			{
				__LIB_40__::func_175(uParam2, 4096);
			}
		}
		else if (__LIB_0__::func_703(*uParam2, 8))
		{
			*uParam1 += 3;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 5)
	{
		if (__LIB_0__::func_703(*uParam2, 512))
		{
			if (!__LIB_0__::func_703(*uParam2, 4096))
			{
				*uParam1 = (*uParam1 - 1);
				*uParam3 = { cParam4 };
			}
			else
			{
				__LIB_40__::func_175(uParam2, 4096);
			}
		}
	}
	else if (iParam0 == 2)
	{
		if (__LIB_0__::func_703(*uParam2, 16))
		{
			if (!__LIB_0__::func_703(*uParam2, 4096))
			{
				*uParam1 = (*uParam1 - 1);
				*uParam3 = { cParam4 };
			}
			else
			{
				__LIB_40__::func_175(uParam2, 4096);
			}
		}
		else if (__LIB_0__::func_703(*uParam2, 32))
		{
			*uParam1 += 3;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 3)
	{
		if (__LIB_0__::func_703(*uParam2, 64))
		{
			if (!__LIB_0__::func_703(*uParam2, 4096))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else
			{
				__LIB_40__::func_175(uParam2, 4096);
			}
		}
		else if (__LIB_0__::func_703(*uParam2, 128))
		{
			*uParam1 += 3;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 4)
	{
		if (__LIB_0__::func_703(*uParam2, 256))
		{
			*uParam1 = (*uParam1 - 1);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 6)
	{
		if (__LIB_0__::func_703(*uParam2, 1024))
		{
			*uParam1 += 2;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 7)
	{
		if (__LIB_0__::func_703(*uParam2, 2048))
		{
			*uParam1 = (*uParam1 - 1);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 9)
	{
		if (__LIB_0__::func_703(*uParam2, 8192))
		{
			if (__LIB_0__::func_703(*uParam2, 2097152))
			{
				*uParam1 += 3;
				*uParam3 = { cParam4 };
			}
			else if (__LIB_0__::func_703(*uParam2, 4194304))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 10)
	{
		if (__LIB_0__::func_703(*uParam2, 16384))
		{
			if (__LIB_0__::func_703(*uParam2, 4194304))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
			else
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 11)
	{
		if (__LIB_0__::func_703(*uParam2, 32768))
		{
			if (__LIB_0__::func_703(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else if (__LIB_0__::func_703(*uParam2, 4194304))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 12)
	{
		if (__LIB_0__::func_703(*uParam2, 65536))
		{
			if (__LIB_0__::func_703(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 13)
	{
		if (__LIB_0__::func_703(*uParam2, 131072))
		{
			if (__LIB_0__::func_703(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else if (__LIB_0__::func_703(*uParam2, 4194304))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 14)
	{
		if (__LIB_0__::func_703(*uParam2, 262144))
		{
			if (__LIB_0__::func_703(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else if (__LIB_0__::func_703(*uParam2, 4194304))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 15)
	{
		if (__LIB_0__::func_703(*uParam2, 524288))
		{
			if (__LIB_0__::func_703(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else if (__LIB_0__::func_703(*uParam2, 4194304))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 16)
	{
		if (__LIB_0__::func_703(*uParam2, 1048576))
		{
			if (__LIB_0__::func_703(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else if (__LIB_0__::func_703(*uParam2, 4194304))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 21)
	{
		if (__LIB_0__::func_703(*uParam2, 8388608))
		{
			*uParam1 = (*uParam1 - 2);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 22)
	{
		if (__LIB_0__::func_703(*uParam2, 16777216))
		{
			*uParam1 = (*uParam1 - 2);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 23)
	{
		if (__LIB_0__::func_703(*uParam2, 33554432))
		{
			*uParam1 += 2;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 17)
	{
		if (__LIB_0__::func_703(*uParam2, 67108864))
		{
			if (__LIB_0__::func_703(*uParam2, 67108864))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 18)
	{
		if (__LIB_0__::func_703(*uParam2, 134217728))
		{
			*uParam1 = (*uParam1 - 1);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 20)
	{
		if (__LIB_0__::func_703(*uParam2, 536870912))
		{
			*uParam1 = (*uParam1 - 1);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 19)
	{
		if (__LIB_0__::func_703(*uParam2, 268435456))
		{
			*uParam1++;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 25)
	{
		if (__LIB_0__::func_703(*uParam2, 32768))
		{
			*uParam1 = (*uParam1 - 2);
			*uParam3 = { cParam4 };
		}
	}
}

void func_217(var uParam0)//Position - 0x110B7
{
	if (!__LIB_0__::func_703(uParam0->f_98, 2))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, false))
		{
			if (__LIB_2__::func_485(uParam0->f_4, uParam0->f_17, 1) < 180f)
			{
				MISC::CLEAR_AREA_OF_VEHICLES(uParam0->f_17, 25f, false, false, false, false, false, false, 0);
				__LIB_40__::func_104(&(uParam0->f_98), 2);
			}
		}
	}
}

void func_218(var uParam0)//Position - 0x113A3
{
	switch (__LIB_40__::func_111(uParam0))
	{
		case 0:
			__LIB_40__::func_169(uParam0, "EXC", "Txm2" /* GXT: Taxi - I Need Excitement! */, "Txm2aud");
			uParam0->f_101 = 2;
			break;
		case 1:
			__LIB_40__::func_169(uParam0, "TIE", "Txm1" /* GXT: Taxi - Take It Easy */, "txm1aud");
			uParam0->f_101 = 1;
			break;
		case 2:
			__LIB_40__::func_169(uParam0, "DED", "Txm3" /* GXT: Taxi - Deadline */, "Txm3aud");
			uParam0->f_101 = 1;
			break;
		case 3:
			__LIB_40__::func_169(uParam0, "GYB", "Txm12" /* GXT: Taxi - Got Your Back */, "Txm12au");
			uParam0->f_101 = 2;
			break;
		case 4:
			__LIB_40__::func_169(uParam0, "TTB", "Txm6" /* GXT: Taxi - Take Me to the Best... */, "Txm6aud");
			uParam0->f_101 = 2;
			break;
		case 5:
			__LIB_40__::func_169(uParam0, "CUI", "Txm8" /* GXT: Taxi - I'll Cut You In */, "Txm8aud");
			uParam0->f_101 = 1;
			break;
		case 6:
			__LIB_40__::func_169(uParam0, "GYN", "Txm9" /* GXT: Taxi - Got You Now */, "Txm9aud");
			uParam0->f_101 = 1;
			break;
		case 7:
			__LIB_40__::func_169(uParam0, "TCC", "Txm10" /* GXT: Taxi - Clown Car */, "Txm10au");
			uParam0->f_101 = 2;
			break;
		case 8:
			__LIB_40__::func_169(uParam0, "TFC", "Txm4" /* GXT: Taxi - Follow That Car! */, "Txm4aud");
			uParam0->f_101 = 1;
			break;
		case 9:
			__LIB_40__::func_169(uParam0, "PRO", "txmP", "TxmPaud");
			uParam0->f_101 = 1;
			break;
	}
}

void func_219(var uParam0)//Position - 0x11510
{
	int iVar0;
	switch (uParam0->f_411)
	{
		case 0:
			__LIB_40__::func_172(uParam0, 3);
			__LIB_40__::func_171(uParam0, 14);
			break;
		case 1:
			__LIB_40__::func_172(uParam0, 14);
			__LIB_40__::func_171(uParam0, 8);
			break;
		case 2:
			__LIB_40__::func_172(uParam0, 8);
			__LIB_40__::func_171(uParam0, 7);
			break;
		case 3:
			__LIB_40__::func_172(uParam0, 15);
			__LIB_40__::func_171(uParam0, 6);
			break;
		case 4:
			__LIB_40__::func_172(uParam0, 0);
			__LIB_40__::func_171(uParam0, 3);
			break;
		case 5:
			__LIB_40__::func_172(uParam0, 6);
			__LIB_40__::func_171(uParam0, 7);
			break;
		case 6:
			__LIB_40__::func_172(uParam0, 8);
			__LIB_40__::func_171(uParam0, 15);
			break;
		case 7:
			__LIB_40__::func_172(uParam0, 8);
			__LIB_40__::func_171(uParam0, 14);
			break;
		case 8:
			__LIB_40__::func_172(uParam0, 7);
			__LIB_40__::func_171(uParam0, 15);
			break;
		case 9:
			__LIB_40__::func_172(uParam0, MISC::GET_RANDOM_INT_IN_RANGE(0, 17));
			iVar0 = __LIB_16__::func_333((uParam0->f_418.f_2 + MISC::GET_RANDOM_INT_IN_RANGE(1, 17)), 0, 16);
			__LIB_40__::func_171(uParam0, iVar0);
			__LIB_40__::func_170(uParam0);
			uParam0->f_418.f_7 = 1;
			uParam0->f_418.f_8 = 1;
			break;
	}
}

void func_220(var uParam0)//Position - 0x39F8
{
	struct<3> Var0;
	if (__LIB_0__::func_86(uParam0->f_29))
	{
		Var0 = { uParam0->f_17 };
	}
	else
	{
		Var0 = { uParam0->f_29 };
	}
	__LIB_40__::func_178(uParam0, Var0);
}

void func_221(var uParam0)//Position - 0x4F0F
{
	__LIB_40__::func_183(uParam0, 14, 0, 0);
	__LIB_40__::func_99();
}

void func_222()//Position - 0x6934
{
	if (__LIB_40__::func_109())
	{
		MISC::TERMINATE_ALL_SCRIPTS_WITH_THIS_NAME("appInternet");
	}
	if (__LIB_3__::func_100())
	{
		MISC::TERMINATE_ALL_SCRIPTS_WITH_THIS_NAME("appCamera");
	}
	if (__LIB_0__::func_77(1))
	{
		__LIB_0__::func_366(0);
	}
}

void func_223(var uParam0, int iParam1, bool bParam2)//Position - 0x737E
{
	uParam0->f_110 = iParam1;
	if (bParam2)
	{
		__LIB_0__::func_429();
		__LIB_40__::func_183(uParam0, 16, 4f, 0);
		HUD::CLEAR_PRINTS();
	}
}

int func_224(var uParam0)//Position - 0x85C2
{
	if (!PED::IS_PED_INJURED(uParam0->f_3))
	{
		uParam0->f_8 = __LIB_0__::func_639(uParam0->f_3, 0, 0);
		HUD::SET_GPS_FLAGS(1, 0f);
		HUD::SET_BLIP_ROUTE(uParam0->f_8, true);
		HUD::SET_BLIP_NAME_FROM_TEXT_FILE(uParam0->f_8, "TAXI_BLIP_PASS" /* GXT: Passenger */);
		TASK::TASK_LOOK_AT_ENTITY(uParam0->f_3, PLAYER::PLAYER_PED_ID(), -1, 2048, 4);
	}
	return 1;
}

bool func_225(int iParam0)//Position - 0xF34F
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
	float fVar9;
	PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE(ENTITY::GET_ENTITY_COORDS(iParam0, true), 1, &Var0, 1, 3f, 0f);
	PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE(ENTITY::GET_ENTITY_COORDS(iParam0, true), 2, &Var1, 1, 3f, 0f);
	PATHFIND::GET_POSITION_BY_SIDE_OF_ROAD(Var0, -1, &Var2);
	fVar9 = SYSTEM::VMAG(Var2 - Var0);
	Var3 = { __LIB_0__::func_79((Var1.f_0 - Var0.f_0), (Var1.f_1 - Var0.f_1), 0f) };
	Var4 = { __LIB_1__::func_302(Var3, 0) * Vector(fVar9, fVar9, fVar9) };
	Var3 = { Var3 * Vector(2f, 2f, 2f) };
	Var5 = { Var0 - Var3 + Var4 };
	Var6 = { Var0 - Var3 - Var4 };
	Var7 = { Var1 + Var3 + Var4 };
	Var8 = { Var1 + Var3 - Var4 };
	Var8 = { Var8 };
	return __LIB_40__::func_185(ENTITY::GET_ENTITY_COORDS(iParam0, true), Var5, Var6, Var7);
}

int func_226(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)//Position - 0x10A56
{
	int iVar0;
	bool bVar1;
	iVar0 = PLAYER::PLAYER_PED_ID();
	if (!ENTITY::IS_ENTITY_DEAD(iVar0, false) && !ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		if (!__LIB_0__::func_703(*uParam2, 1))
		{
			if (__LIB_14__::func_574(iParam0, uParam2))
			{
				*uParam3 = 1;
				return 1;
			}
		}
		if (!__LIB_0__::func_703(*uParam2, 2))
		{
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
			{
				*uParam3 = 2;
				return 1;
			}
		}
		if (!__LIB_0__::func_703(*uParam2, 4))
		{
			if (__LIB_14__::func_585(iVar0, iParam0, uParam2, bParam5))
			{
				*uParam3 = 4;
				return 1;
			}
		}
		if (!__LIB_0__::func_703(*uParam2, 8))
		{
			if (__LIB_14__::func_537(iVar0, iParam0, uParam2))
			{
				*uParam3 = 8;
				return 1;
			}
		}
		bVar1 = !__LIB_0__::func_703(*uParam2, 128);
		if (bParam4)
		{
			if (__LIB_40__::func_187(iParam0, iParam1, 1, bParam6, bVar1, 1))
			{
				*uParam3 = 32;
				return 1;
			}
		}
		else if (!__LIB_0__::func_703(*uParam2, 16))
		{
			if (__LIB_40__::func_187(iParam0, iParam1, 0, bParam6, bVar1, bParam8))
			{
				*uParam3 = 16;
				return 1;
			}
		}
	}
	else if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (iParam7 && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iVar0, true))
		{
			*uParam3 = 16;
			return 1;
		}
	}
	return 0;
}

void func_227(var uParam0)//Position - 0xF5
{
	uParam0->f_2 = PLAYER::PLAYER_PED_ID();
	__LIB_40__::func_105(&(uParam0->f_244));
	uParam0->f_428 = __LIB_40__::func_190();
}

void func_228(var uParam0, char* sParam1)//Position - 0x9982
{
	if (__LIB_40__::func_153(uParam0))
	{
		__LIB_2__::func_859(&(uParam0->f_244), uParam0->f_144, sParam1, 9, 0, 0, 0);
	}
}

void func_229(var uParam0, int iParam1, struct<3> Param2, var uParam3, var uParam4, var uParam5, char* sParam6, bool bParam7, int iParam8)//Position - 0xD4D8
{
	__LIB_40__::func_104(&(uParam0->f_82), iParam1);
	__LIB_40__::func_183(uParam0, 16, 0, 0);
	StringConCat(&Param2, sParam6, 24);
	if (bParam7)
	{
		__LIB_40__::func_131(&Param2);
	}
	__LIB_2__::func_859(&(uParam0->f_244), uParam0->f_144, &Param2, iParam8, 0, 0, 0);
}

void func_230(var uParam0, struct<6> Param1, int iParam2)//Position - 0xD519
{
	char cVar0[24];
	cVar0 = { Param1 };
	if (!__LIB_0__::func_703(uParam0->f_82, 64))
	{
		__LIB_40__::func_104(&(uParam0->f_82), 64);
		StringConCat(&cVar0, "_1", 24);
	}
	else if (!__LIB_0__::func_703(uParam0->f_82, 128))
	{
		__LIB_40__::func_104(&(uParam0->f_82), 128);
		StringConCat(&cVar0, "_2", 24);
	}
	else
	{
		StringConCat(&cVar0, "_", 24);
		StringIntConCat(&cVar0, MISC::GET_RANDOM_INT_IN_RANGE(1, 3), 24);
	}
	__LIB_14__::func_535(&(uParam0->f_244), uParam0->f_144, &Param1, &cVar0, iParam2, 0, 0);
	__LIB_40__::func_183(uParam0, 16, 0, 0);
}

void func_231(var uParam0, int iParam1, struct<3> Param2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char* sParam6, int iParam7, bool bParam8)//Position - 0xD5A0
{
	__LIB_40__::func_104(&(uParam0->f_82), iParam1);
	__LIB_40__::func_183(uParam0, 16, 0, 0);
	StringConCat(&Param2, sParam6, 24);
	if ((((uParam0->f_411 == 1 || uParam0->f_411 == 0) || uParam0->f_411 == 5) || uParam0->f_411 == 8) || uParam0->f_411 == 2)
	{
		if (bParam8)
		{
			__LIB_40__::func_131(&Param2);
		}
	}
	__LIB_2__::func_859(&(uParam0->f_244), uParam0->f_144, &Param2, iParam7, 0, 0, 0);
}

void func_232(var uParam0, int iParam1, struct<3> Param2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char* sParam6, int iParam7)//Position - 0xD686
{
	__LIB_40__::func_104(&(uParam0->f_81), iParam1);
	__LIB_40__::func_183(uParam0, 16, 0, 0);
	StringConCat(&Param2, sParam6, 24);
	__LIB_2__::func_859(&(uParam0->f_244), uParam0->f_144, &Param2, iParam7, 0, 0, 0);
}

void func_233(var uParam0, int iParam1, struct<3> Param2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char* sParam6, bool bParam7, int iParam8)//Position - 0xD950
{
	__LIB_40__::func_104(&(uParam0->f_81), iParam1);
	__LIB_40__::func_183(uParam0, 16, 0, 0);
	StringConCat(&Param2, sParam6, 24);
	if (bParam7)
	{
		__LIB_40__::func_131(&Param2);
	}
	__LIB_2__::func_859(&(uParam0->f_244), uParam0->f_144, &Param2, iParam8, 0, 0, 0);
}

void func_234(var uParam0)//Position - 0x1619
{
	__LIB_40__::func_176(0, 0);
	if (uParam0->f_411 != 9)
	{
		__LIB_39__::func_78(1);
		__LIB_0__::func_746(15, 1);
	}
	__LIB_40__::func_104(&(Global_113386.f_19097), 1024);
	if (!__LIB_0__::func_703(Global_113386.f_19097, 64))
	{
		__LIB_0__::func_716(__LIB_40__::func_98(__LIB_40__::func_111(uParam0)), 0, 0);
	}
}

void func_235(var uParam0)//Position - 0x21A1
{
	int iVar0;
	iVar0 = ((uParam0->f_50 + uParam0->f_56) + uParam0->f_105);
	if (iVar0 > 0)
	{
		__LIB_14__::func_593(__LIB_0__::func_683(), 21, iVar0, 0, 0);
		__LIB_40__::func_176(10, iVar0);
		iLocal_57[0] = iVar0;
	}
}

void func_236(var uParam0, int iParam1, int iParam2)//Position - 0x6F3B
{
	*uParam0 = iParam2;
	if (iParam1 > -1)
	{
		uParam0->f_27 = iParam1;
	}
}

int func_237(int iParam0, int iParam1)//Position - 0x72E4
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, false))
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_238(var uParam0, struct<3> Param1, struct<3> Param2, char* sParam3, int iParam4, float fParam5, float fParam6)//Position - 0xB717
{
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_3))
	{
		__LIB_40__::func_198(uParam0, uParam0->f_14);
		uParam0->f_11 = { Param1 };
		uParam0->f_14 = { Param2 };
		__LIB_40__::func_173(uParam0->f_14, 0);
		MISC::CLEAR_AREA_OF_PEDS(uParam0->f_14, 2f, 0);
		__LIB_40__::func_130(uParam0->f_14, 0, fParam6);
		if (iParam4 == 0)
		{
			uParam0->f_3 = PED::CREATE_RANDOM_PED(uParam0->f_11);
		}
		else if (ENTITY::DOES_ENTITY_EXIST(Global_112096.f_225[0]))
		{
			uParam0->f_3 = Global_112096.f_225[0];
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uParam0->f_3, true, true);
		}
		else
		{
			uParam0->f_3 = PED::CREATE_PED(26, iParam4, uParam0->f_11, fParam5, true, true);
		}
		__LIB_0__::func_222(&(uParam0->f_244), 3, uParam0->f_3, sParam3, 0, 1);
		AUDIO::SET_AMBIENT_VOICE_NAME(uParam0->f_3, sParam3);
		PED::SET_PED_RESET_FLAG(uParam0->f_3, 112, true);
		if (!PED::IS_PED_INJURED(uParam0->f_3))
		{
			ENTITY::SET_ENTITY_LOD_DIST(uParam0->f_3, 250);
			PED::SET_PED_CONFIG_FLAG(uParam0->f_3, 32, false);
			PED::SET_PED_CONFIG_FLAG(uParam0->f_3, 104, true);
			PED::SET_PED_CONFIG_FLAG(uParam0->f_3, 177, true);
			PED::SET_PED_CONFIG_FLAG(uParam0->f_3, 116, false);
			PED::ADD_RELATIONSHIP_GROUP("TAXI_Passenger", &(uParam0->f_413));
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, uParam0->f_413, joaat("PLAYER"));
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, uParam0->f_413, joaat("COP"));
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(uParam0->f_3, uParam0->f_413);
			return 1;
		}
	}
	return 0;
}

int func_239(var uParam0)//Position - 0xC186
{
	float fVar0;
	if (!PED::IS_PED_INJURED(uParam0->f_2))
	{
		if ((!PED::IS_PED_STOPPED(uParam0->f_2) && !__LIB_0__::func_702(&(Local_162[0 /*10*/].f_3))) && !__LIB_0__::func_702(&(Local_162[1 /*10*/].f_3)))
		{
			if (!__LIB_0__::func_702(&(Local_162[2 /*10*/].f_3)))
			{
				uParam0->f_37 = ENTITY::GET_ENTITY_SPEED(uParam0->f_2);
				if (uParam0->f_37 > 10f)
				{
					__LIB_3__::func_128(&(Local_162[2 /*10*/].f_3));
				}
			}
			else if (__LIB_3__::func_108(&(Local_162[2 /*10*/].f_3)) > 0.9f)
			{
				uParam0->f_38 = uParam0->f_37;
				uParam0->f_37 = ENTITY::GET_ENTITY_SPEED(uParam0->f_2);
				fVar0 = (uParam0->f_38 - uParam0->f_37);
				__LIB_1__::func_377(&(Local_162[2 /*10*/].f_3));
				if (fVar0 > 10f && uParam0->f_37 < 12f)
				{
					return 1;
				}
			}
		}
		else
		{
			__LIB_1__::func_377(&(Local_162[2 /*10*/].f_3));
		}
	}
	return 0;
}

int func_240(var uParam0)//Position - 0xC283
{
	struct<3> Var0;
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, false))
	{
		Var0 = { ENTITY::GET_ENTITY_SPEED_VECTOR(uParam0->f_4, true) };
		if (Var0.f_1 < -10f && !__LIB_0__::func_702(&(Local_162[0 /*10*/].f_3)))
		{
			if (!__LIB_0__::func_702(&(Local_162[12 /*10*/].f_3)))
			{
				__LIB_3__::func_128(&(Local_162[12 /*10*/].f_3));
			}
			else if (__LIB_3__::func_108(&(Local_162[12 /*10*/].f_3)) > 5f)
			{
				__LIB_1__::func_377(&(Local_162[12 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			__LIB_1__::func_377(&(Local_162[12 /*10*/].f_3));
		}
	}
	return 0;
}

int func_241(var uParam0)//Position - 0xC312
{
	struct<3> Var0;
	if ((((((VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, false) && !__LIB_0__::func_702(&(Local_162[0 /*10*/].f_3))) && !__LIB_0__::func_702(&(Local_162[1 /*10*/].f_3))) && !__LIB_0__::func_702(&(Local_162[5 /*10*/].f_3))) && !__LIB_0__::func_702(&(Local_162[9 /*10*/].f_3))) && !__LIB_0__::func_702(&(Local_162[7 /*10*/].f_3))) && !__LIB_0__::func_702(&(Local_162[8 /*10*/].f_3)))
	{
		Var0 = { ENTITY::GET_ENTITY_SPEED_VECTOR(uParam0->f_4, true) };
		if (MISC::ABSF(Var0.f_0) > 2.5f && !__LIB_0__::func_702(&(Local_162[0 /*10*/].f_3)))
		{
			if (!__LIB_0__::func_702(&(Local_162[11 /*10*/].f_3)))
			{
				__LIB_3__::func_128(&(Local_162[11 /*10*/].f_3));
				fLocal_164 = Var0.f_0;
			}
			else if (__LIB_3__::func_108(&(Local_162[11 /*10*/].f_3)) < 1.5f && (MISC::ABSF(fLocal_164) - MISC::ABSF(Var0.f_0)) < 0f)
			{
				__LIB_1__::func_377(&(Local_162[11 /*10*/].f_3));
				return 1;
			}
			else if (__LIB_3__::func_108(&(Local_162[11 /*10*/].f_3)) >= 1.5f)
			{
				__LIB_1__::func_377(&(Local_162[11 /*10*/].f_3));
				return 0;
			}
		}
	}
	return 0;
}

int func_242(var uParam0)//Position - 0xC442
{
	if (((((VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, false) && !__LIB_0__::func_702(&(Local_162[0 /*10*/].f_3))) && !__LIB_0__::func_702(&(Local_162[8 /*10*/].f_3))) && !__LIB_0__::func_702(&(Local_162[5 /*10*/].f_3))) && !__LIB_0__::func_702(&(Local_162[9 /*10*/].f_3))) && !__LIB_0__::func_702(&(Local_162[7 /*10*/].f_3)))
	{
		if (!__LIB_0__::func_702(&(Local_162[14 /*10*/].f_3)))
		{
			uParam0->f_5 = VEHICLE::GET_CLOSEST_VEHICLE(ENTITY::GET_ENTITY_COORDS(uParam0->f_4, true), 10f, 0, 260);
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_5))
			{
				if ((ENTITY::GET_ENTITY_SPEED(uParam0->f_4) > 15f && __LIB_0__::func_76(uParam0->f_5, uParam0->f_4, 1) < 3f) && (!ENTITY::IS_ENTITY_DEAD(uParam0->f_5, false) && !VEHICLE::IS_VEHICLE_SEAT_FREE(uParam0->f_5, -1, false)))
				{
					__LIB_3__::func_128(&(Local_162[14 /*10*/].f_3));
				}
			}
		}
		else if ((__LIB_3__::func_108(&(Local_162[14 /*10*/].f_3)) < 1.5f && __LIB_0__::func_76(uParam0->f_5, uParam0->f_4, 1) > 4.5f) && !ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(uParam0->f_5))
		{
			__LIB_1__::func_377(&(Local_162[14 /*10*/].f_3));
			return 1;
		}
		else if (__LIB_3__::func_108(&(Local_162[14 /*10*/].f_3)) >= 1.5f)
		{
			__LIB_1__::func_377(&(Local_162[14 /*10*/].f_3));
			return 0;
		}
		else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(uParam0->f_5))
		{
			__LIB_1__::func_377(&(Local_162[14 /*10*/].f_3));
			return 0;
		}
	}
	return 0;
}

int func_243(var uParam0)//Position - 0xC9D9
{
	int iVar0;
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, false))
	{
		iVar0 = PLAYER::GET_TIME_SINCE_PLAYER_DROVE_ON_PAVEMENT(PLAYER::PLAYER_ID());
		if (iVar0 == 0)
		{
			if (!__LIB_0__::func_702(&(Local_162[4 /*10*/].f_3)))
			{
				__LIB_3__::func_128(&(Local_162[4 /*10*/].f_3));
			}
			else if (__LIB_3__::func_108(&(Local_162[4 /*10*/].f_3)) > 2f)
			{
				__LIB_1__::func_377(&(Local_162[4 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			__LIB_1__::func_377(&(Local_162[4 /*10*/].f_3));
		}
	}
	return 0;
}

int func_244(var uParam0)//Position - 0xCA4B
{
	int iVar0;
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, false))
	{
		iVar0 = PLAYER::GET_TIME_SINCE_PLAYER_DROVE_AGAINST_TRAFFIC(PLAYER::PLAYER_ID());
		if (iVar0 == 0)
		{
			if (!__LIB_0__::func_702(&(Local_162[6 /*10*/].f_3)))
			{
				__LIB_3__::func_128(&(Local_162[6 /*10*/].f_3));
			}
			else if (__LIB_3__::func_108(&(Local_162[6 /*10*/].f_3)) > 3.5f)
			{
				__LIB_1__::func_377(&(Local_162[6 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			__LIB_1__::func_377(&(Local_162[6 /*10*/].f_3));
		}
	}
	return 0;
}

int func_245(var uParam0)//Position - 0xCB42
{
	struct<3> Var0;
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, false))
	{
		Var0 = { ENTITY::GET_ENTITY_SPEED_VECTOR(uParam0->f_4, true) };
		if (MISC::ABSF(Var0.f_0) > 3f && !__LIB_0__::func_702(&(Local_162[0 /*10*/].f_3)))
		{
			if (!__LIB_0__::func_702(&(Local_162[1 /*10*/].f_3)))
			{
				__LIB_3__::func_128(&(Local_162[1 /*10*/].f_3));
			}
			else if (__LIB_3__::func_108(&(Local_162[1 /*10*/].f_3)) > 1.2f)
			{
				__LIB_1__::func_377(&(Local_162[1 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			__LIB_1__::func_377(&(Local_162[1 /*10*/].f_3));
		}
	}
	return 0;
}

int func_246(var uParam0)//Position - 0xCBCE
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, false))
	{
		if (!VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(uParam0->f_4) && ENTITY::IS_ENTITY_IN_AIR(uParam0->f_4))
		{
			if (!__LIB_0__::func_702(&(Local_162[0 /*10*/].f_3)))
			{
				__LIB_3__::func_128(&(Local_162[0 /*10*/].f_3));
			}
			else if (__LIB_3__::func_108(&(Local_162[0 /*10*/].f_3)) > 0.7f)
			{
				__LIB_1__::func_377(&(Local_162[0 /*10*/].f_3));
				__LIB_1__::func_31(&(Local_162[1 /*10*/].f_6));
				return 1;
			}
		}
		else
		{
			__LIB_1__::func_377(&(Local_162[0 /*10*/].f_3));
		}
	}
	return 0;
}

void func_247(int iParam0, var uParam1)//Position - 0xCCA0
{
	Local_162[iParam0 /*10*/].f_1++;
	__LIB_40__::func_150(uParam1, iParam0);
	__LIB_1__::func_377(&(Local_162[iParam0 /*10*/].f_6));
	uParam1->f_112 = 1;
}

int func_248(var uParam0)//Position - 0xCCFD
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, false))
	{
		if (ENTITY::GET_ENTITY_SPEED(uParam0->f_4) > 25f)
		{
			if (!__LIB_0__::func_702(&(Local_162[5 /*10*/].f_3)))
			{
				__LIB_3__::func_128(&(Local_162[5 /*10*/].f_3));
			}
			else if (__LIB_3__::func_108(&(Local_162[5 /*10*/].f_3)) > 3.5f)
			{
				__LIB_1__::func_377(&(Local_162[5 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			__LIB_1__::func_377(&(Local_162[5 /*10*/].f_3));
		}
	}
	return 0;
}

int func_249(var uParam0, bool bParam1, float fParam2)//Position - 0x451B
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, false))
	{
		if (PED::IS_PED_IN_VEHICLE(uParam0->f_2, uParam0->f_4, false))
		{
			if (__LIB_0__::func_77(1))
			{
				__LIB_0__::func_366(0);
			}
			if (__LIB_40__::func_202())
			{
				__LIB_40__::func_114();
				return 1;
			}
			else if (__LIB_0__::func_213(uParam0->f_4, fParam2, 1, 1056964608, 0, 1, 0))
			{
				if (bParam1)
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), false, 256);
				}
				else
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), false, 0);
				}
			}
			VEHICLE::SET_VEHICLE_BRAKE_LIGHTS(uParam0->f_4, true);
		}
	}
	return 0;
}

char* func_250(int iParam0)//Position - 0x40F9
{
	char* sVar0;
	switch (iParam0->f_411)
	{
		case 0:
			sVar0 = "TAXI_SC_BN_02";
			break;
		case 1:
			sVar0 = "TAXI_SC_BN_01";
			break;
		case 2:
			sVar0 = "TAXI_SC_BN_03";
			break;
		case 3:
			sVar0 = "TAXI_SC_BN_12";
			break;
		case 4:
			sVar0 = "TAXI_SC_BN_08";
			break;
		case 5:
			sVar0 = "TAXI_SC_BN_07";
			break;
		case 6:
			sVar0 = "TAXI_SC_KO";
			break;
		case 7:
			sVar0 = "TAXI_SC_BN_10";
			break;
		case 8:
			sVar0 = "TAXI_SC_BN_04";
			break;
	}
	return sVar0;
}

void func_251(int iParam0, int iParam1, bool bParam2)//Position - 0x5149
{
	int iVar0;
	if (iParam1 == 14)
	{
	}
	if (iParam1 == 32)
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			__LIB_1__::func_377(&(iParam0->f_146[iVar0 /*3*/]));
			iVar0++;
		}
	}
	else
	{
		__LIB_1__::func_377(&(iParam0->f_146[iParam1 /*3*/]));
	}
	if (bParam2)
	{
	}
}

int func_252(int iParam0)//Position - 0x616C
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0->f_4, false))
	{
		if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0->f_4, -1, false) == PLAYER::PLAYER_PED_ID())
		{
			return 1;
		}
	}
	return 0;
}

bool func_253(int iParam0, int iParam1)//Position - 0x6C42
{
	return __LIB_0__::func_702(&(iParam0->f_146[iParam1 /*3*/]));
}

void func_254(var uParam0, struct<3> Param1, float fParam2, bool bParam3)//Position - 0x7C67
{
	struct<3> Var0;
	struct<3> Var1;
	Var0 = { __LIB_1__::func_657(Param1, 1f, -fParam2, -fParam2, -22f) };
	Var1 = { __LIB_1__::func_657(Param1, 1f, fParam2, fParam2, 44f) };
	Var0.f_2 = (Var0.f_2 - 22f);
	Var1.f_2 = (Var1.f_2 + 22f);
	if (!bParam3)
	{
		PED::SET_PED_NON_CREATION_AREA(Var0, Var1);
		*uParam0 = PED::ADD_SCENARIO_BLOCKING_AREA(Var0, Var1, false, true, true, true);
		MISC::CLEAR_AREA_OF_PEDS(Param1, fParam2, 0);
	}
	else
	{
		PED::CLEAR_PED_NON_CREATION_AREA();
		PED::REMOVE_SCENARIO_BLOCKING_AREA(*uParam0, false);
	}
}

void func_255(int iParam0, int iParam1)//Position - 0xA5D9
{
	switch (iParam1)
	{
		case 1:
			iParam0->f_123 = "TRS_STREAMING";
			break;
		case 2:
			iParam0->f_123 = " TRS_FINDING_LOCATION ";
			break;
		case 3:
			iParam0->f_123 = " TRS_SPAWNING ";
			break;
		case 4:
			iParam0->f_123 = " TRS_SPAWN_CAR ";
			break;
		case 5:
			iParam0->f_123 = " TRS_MANAGE_PICKUP ";
			break;
		case 6:
			iParam0->f_123 = " TRS_PASSENGER_ENTER ";
			break;
		case 7:
			iParam0->f_123 = " TRS_WAIT_FOR_TIME ";
			break;
		case 8:
			iParam0->f_123 = " TRS_WAIT_FOR_TAIL ";
			break;
		case 9:
			iParam0->f_123 = " TRS_DRIVING_PASSENGER ";
			break;
		case 10:
			iParam0->f_123 = " TRS_WAIT_FOR_FULL_STOP ";
			break;
		case 18:
			iParam0->f_123 = " TRS_PRE_CUTSCENE ";
			break;
		case 11:
			iParam0->f_123 = " TRS_SWITCH_JOB ";
			break;
		case 19:
			iParam0->f_123 = " TRS_CUTSCENE ";
			break;
		case 20:
			iParam0->f_123 = " TRS_CUTSCENE_02 ";
			break;
		case 13:
			iParam0->f_123 = " TRS_CHASE_DRIVER ";
			break;
		case 12:
			iParam0->f_123 = " TRS_SAVE_DAMSEL ";
			break;
		case 14:
			iParam0->f_123 = " TRS_REVEAL_DESTINATION ";
			break;
		case 15:
			iParam0->f_123 = " TRS_WAIT_PARK ";
			break;
		case 16:
			iParam0->f_123 = " TRS_SEND_TO_STORE ";
			break;
		case 17:
			iParam0->f_123 = " TRS_WAIT_1ST_STOP ";
			break;
		case 22:
			iParam0->f_123 = " TRS_DROPPING_OFF ";
			break;
		case 25:
			iParam0->f_123 = " TRS_ESCAPE_POLICE ";
			break;
		case 26:
			iParam0->f_123 = " TRS_POLICE_ESCAPED ";
			break;
		case 24:
			iParam0->f_123 = " TRS_TIE_UP_LOSE_ENDS ";
			break;
		case 27:
			iParam0->f_123 = " TRS_REGULAR_PAYMENT ";
			break;
		case 23:
			iParam0->f_123 = " TRS_ELIMATE_ALL_ENEMIES ";
			break;
		case 28:
			iParam0->f_123 = " TRS_SPECIAL_ENDING ";
			break;
		case 29:
			iParam0->f_123 = " TRS_SCORECARD_GRADE ";
			break;
		case 30:
			iParam0->f_123 = " TRS_CLEANUP ";
			break;
		case 21:
			iParam0->f_123 = " TRS_WAIT_FOR_PASSENGER ";
			break;
		default:
			iParam0->f_123 = " TRS IS UNIDENTIFIED - FIX THIS ";
			break;
	}
	iParam0->f_410 = iParam1;
}

void func_256(int iParam0)//Position - 0x4194
{
	int iVar0;
	Local_161.f_1 = SYSTEM::TO_FLOAT(iParam0->f_50);
	Local_161.f_2 = SYSTEM::TO_FLOAT(iParam0->f_56);
	__LIB_40__::func_176(11, iParam0->f_56);
	__LIB_40__::func_176(12, iParam0->f_56);
	iLocal_57[1] = iParam0->f_56;
	iLocal_57[2] = iParam0->f_56;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < iParam0->f_60)
	{
		Local_161.f_4[iVar0 /*3*/] = { iParam0->f_60[iVar0 /*3*/] };
		if (BitTest(Local_161.f_4[iVar0 /*3*/], 2))
		{
			Local_161.f_3 = (Local_161.f_3 + IntToFloat(iParam0->f_60[iVar0 /*3*/].f_1));
		}
		iVar0++;
	}
	Local_161.f_0 = iParam0->f_411;
	Local_161.f_20 = ((Local_161.f_1 + Local_161.f_2) + Local_161.f_3);
}

void func_257(int iParam0, int iParam1, float fParam2, bool bParam3)//Position - 0xA9BA
{
	int iVar0;
	if (iParam1 == 32)
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			if (fParam2 > 0f)
			{
				__LIB_0__::func_706(&(iParam0->f_146[iVar0 /*3*/]), fParam2);
			}
			else
			{
				__LIB_1__::func_31(&(iParam0->f_146[iVar0 /*3*/]));
			}
			iVar0++;
		}
	}
	else if (fParam2 > 0f)
	{
		__LIB_0__::func_706(&(iParam0->f_146[iParam1 /*3*/]), fParam2);
	}
	else
	{
		__LIB_1__::func_31(&(iParam0->f_146[iParam1 /*3*/]));
	}
	if (bParam3)
	{
	}
}

float func_258(int iParam0, int iParam1)//Position - 0x58F7
{
	if (!__LIB_0__::func_702(&(iParam0->f_146[iParam1 /*3*/])))
	{
		__LIB_3__::func_128(&(iParam0->f_146[iParam1 /*3*/]));
	}
	return __LIB_3__::func_108(&(iParam0->f_146[iParam1 /*3*/]));
}

int func_259(var uParam0, float fParam1)//Position - 0x6966
{
	if (__LIB_40__::func_111(uParam0) == 2)
	{
		if (ENTITY::IS_ENTITY_AT_COORD(uParam0->f_4, uParam0->f_17, (fParam1 + 1f), (fParam1 + 1f), 2f, !uParam0->f_140, true, 0))
		{
		}
		if (((__LIB_0__::func_724(uParam0->f_4, uParam0->f_17, 1) <= (fParam1 + 1f) && PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX()) < 1) && __LIB_0__::func_494(1, 1, 1)) && VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(uParam0->f_4))
		{
			return __LIB_40__::func_249(uParam0, 1, fParam1);
		}
	}
	else if (((ENTITY::IS_ENTITY_AT_COORD(uParam0->f_4, uParam0->f_17, (fParam1 + 1f), (fParam1 + 1f), 2f, !uParam0->f_140, true, 0) && PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX()) < 1) && __LIB_0__::func_494(1, 1, 1)) && VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(uParam0->f_4))
	{
		return __LIB_40__::func_249(uParam0, 1, fParam1);
	}
	return 0;
}

int func_260(var uParam0)//Position - 0xB6F9
{
	if (((VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, false) && !__LIB_0__::func_702(&(Local_162[9 /*10*/].f_3))) && !__LIB_0__::func_702(&(Local_162[7 /*10*/].f_3))) && !__LIB_0__::func_702(&(Local_162[4 /*10*/].f_3)))
	{
		if (!__LIB_40__::func_225(uParam0->f_4) && ENTITY::GET_ENTITY_SPEED(uParam0->f_4) > 15f)
		{
			if (!__LIB_0__::func_702(&(Local_162[13 /*10*/].f_3)))
			{
				__LIB_3__::func_128(&(Local_162[13 /*10*/].f_3));
			}
			else if (__LIB_3__::func_108(&(Local_162[13 /*10*/].f_3)) > 5f)
			{
				__LIB_1__::func_377(&(Local_162[13 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			__LIB_1__::func_377(&(Local_162[13 /*10*/].f_3));
		}
	}
	return 0;
}

void func_261(var uParam0, bool bParam1)//Position - 0x12A5
{
	__LIB_40__::func_110(uParam0);
	if (__LIB_0__::func_75())
	{
		__LIB_0__::func_429();
	}
	__LIB_16__::func_613();
	HUD::CLEAR_PRINTS();
	HUD::CLEAR_HELP(true);
	__LIB_0__::func_366(0);
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, false))
	{
		VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(uParam0->f_4, false);
		VEHICLE::REMOVE_VEHICLE_STUCK_CHECK(uParam0->f_4);
		VEHICLE::REMOVE_VEHICLE_UPSIDEDOWN_CHECK(uParam0->f_4);
	}
	__LIB_40__::func_173(uParam0->f_14, 1);
	__LIB_40__::func_130(uParam0->f_14, 1, 1114636288);
	__LIB_0__::func_221(&(uParam0->f_244), 3);
	PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 32, true);
	if (__LIB_40__::func_202())
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
	}
	CUTSCENE::SET_PAD_CAN_SHAKE_DURING_CUTSCENE(true);
	__LIB_0__::func_532(0, 1, 1, 0, 0, 0, 0);
	HUD::DISPLAY_RADAR(true);
	HUD::DISPLAY_HUD(true);
	if (CAM::DOES_CAM_EXIST(*uParam0))
	{
		CAM::DESTROY_CAM(*uParam0, false);
		CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
		CAM::SET_CINEMATIC_BUTTON_ACTIVE(true);
	}
	if (__LIB_0__::func_703(Global_113386.f_19097, 4))
	{
		__LIB_40__::func_175(&(Global_113386.f_19097), 4);
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(__LIB_12__::func_850(), false);
	}
	if (bParam1)
	{
		__LIB_40__::func_108(uParam0);
	}
	__LIB_40__::func_107(uParam0);
	STREAMING::REMOVE_ANIM_DICT("gestures@m@standing@casual");
	STREAMING::REMOVE_ANIM_DICT("oddjobs@taxi@");
	STREAMING::REMOVE_ANIM_DICT("oddjobs@towingcome_here");
	if (NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		__LIB_40__::func_201(uParam0->f_411);
	}
	if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0);
	}
	STATS::PLAYSTATS_ODDJOB_DONE(SYSTEM::ROUND((__LIB_9__::func_437(&iLocal_82) * 1000f)), 12, false);
}

int func_262(var uParam0, int iParam1, bool bParam2)//Position - 0x558E
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, false))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam1, uParam0->f_4, true))
			{
				return 1;
			}
		}
	}
	if (bParam2)
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			if (ENTITY::DOES_ENTITY_EXIST(iParam1))
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam1, PLAYER::PLAYER_PED_ID(), true))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

float func_263(var uParam0, int iParam1)//Position - 0x9F39
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam1, false))
	{
		if (__LIB_40__::func_252(uParam0))
		{
			return __LIB_0__::func_76(uParam0->f_4, iParam1, 1);
		}
	}
	return 0f;
}

void func_264(var uParam0, bool bParam1)//Position - 0x11F10
{
	uParam0->f_120 = 1;
	if (bParam1)
	{
	}
}

bool func_265(var uParam0, var uParam1)//Position - 0x11F90
{
	return ((*uParam1 == -1 && uParam0->f_412 == 0) && !__LIB_40__::func_253(uParam0, 9));
}

void func_266(var uParam0)//Position - 0x13F23
{
	uParam0->f_2 = PLAYER::PLAYER_PED_ID();
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_14 = { __LIB_0__::func_613() };
	uParam0->f_17 = { __LIB_0__::func_613() };
	uParam0->f_35 = 0f;
	uParam0->f_76 = 0;
	uParam0->f_49 = 0;
	uParam0->f_109 = 0;
	uParam0->f_36 = 0f;
	uParam0->f_410 = 2;
	uParam0->f_123 = "TRS_FINDING_LOCATION";
	__LIB_40__::func_251(uParam0, 32, 0);
}

void func_267(int iParam0)//Position - 0x3F36
{
	if (iParam0->f_56 >= iParam0->f_59)
	{
		iParam0->f_56 = SYSTEM::CEIL((IntToFloat(iParam0->f_50) * 0.4f));
	}
	else if (iParam0->f_56 < iParam0->f_59 && iParam0->f_56 >= iParam0->f_58)
	{
		iParam0->f_56 = SYSTEM::CEIL((IntToFloat(iParam0->f_50) * 0.15f));
	}
	else
	{
		iParam0->f_56 = 0;
	}
	if (!__LIB_0__::func_703(iParam0->f_55, 1))
	{
		__LIB_40__::func_104(&(iParam0->f_55), 1);
	}
}

void func_268(var uParam0)//Position - 0x7699
{
	__LIB_40__::func_251(uParam0, 14, 0);
	__LIB_40__::func_251(uParam0, 15, 0);
	__LIB_40__::func_100();
	if (__LIB_0__::func_568())
	{
		__LIB_0__::func_620(0);
	}
}

int func_269(var uParam0)//Position - 0xBE33
{
	float fVar0;
	if (!PED::IS_PED_INJURED(uParam0->f_2))
	{
		if ((!PED::IS_PED_STOPPED(uParam0->f_2) && !__LIB_0__::func_702(&(Local_162[0 /*10*/].f_3))) && !__LIB_0__::func_702(&(Local_162[1 /*10*/].f_3)))
		{
			if (!__LIB_0__::func_702(&(Local_162[2 /*10*/].f_3)))
			{
				uParam0->f_37 = ENTITY::GET_ENTITY_SPEED(uParam0->f_2);
				if (uParam0->f_37 > 10f)
				{
					__LIB_3__::func_128(&(Local_162[2 /*10*/].f_3));
				}
			}
			else if (__LIB_37__::func_602(&(Local_162[2 /*10*/].f_3)) > 0.9f)
			{
				uParam0->f_38 = uParam0->f_37;
				uParam0->f_37 = ENTITY::GET_ENTITY_SPEED(uParam0->f_2);
				fVar0 = (uParam0->f_38 - uParam0->f_37);
				__LIB_1__::func_377(&(Local_162[2 /*10*/].f_3));
				if (fVar0 > 10f && uParam0->f_37 < 12f)
				{
					return 1;
				}
			}
		}
		else
		{
			__LIB_1__::func_377(&(Local_162[2 /*10*/].f_3));
		}
	}
	return 0;
}

int func_270(var uParam0)//Position - 0xBF30
{
	struct<3> Var0;
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, false))
	{
		Var0 = { ENTITY::GET_ENTITY_SPEED_VECTOR(uParam0->f_4, true) };
		if (Var0.f_1 < -10f && !__LIB_0__::func_702(&(Local_162[0 /*10*/].f_3)))
		{
			if (!__LIB_0__::func_702(&(Local_162[12 /*10*/].f_3)))
			{
				__LIB_3__::func_128(&(Local_162[12 /*10*/].f_3));
			}
			else if (__LIB_37__::func_602(&(Local_162[12 /*10*/].f_3)) > 5f)
			{
				__LIB_1__::func_377(&(Local_162[12 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			__LIB_1__::func_377(&(Local_162[12 /*10*/].f_3));
		}
	}
	return 0;
}

int func_271(var uParam0)//Position - 0xBFBF
{
	struct<3> Var0;
	if ((((((VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, false) && !__LIB_0__::func_702(&(Local_162[0 /*10*/].f_3))) && !__LIB_0__::func_702(&(Local_162[1 /*10*/].f_3))) && !__LIB_0__::func_702(&(Local_162[5 /*10*/].f_3))) && !__LIB_0__::func_702(&(Local_162[9 /*10*/].f_3))) && !__LIB_0__::func_702(&(Local_162[7 /*10*/].f_3))) && !__LIB_0__::func_702(&(Local_162[8 /*10*/].f_3)))
	{
		Var0 = { ENTITY::GET_ENTITY_SPEED_VECTOR(uParam0->f_4, true) };
		if (MISC::ABSF(Var0.f_0) > 2.5f && !__LIB_0__::func_702(&(Local_162[0 /*10*/].f_3)))
		{
			if (!__LIB_0__::func_702(&(Local_162[11 /*10*/].f_3)))
			{
				__LIB_3__::func_128(&(Local_162[11 /*10*/].f_3));
				fLocal_164 = Var0.f_0;
			}
			else if (__LIB_37__::func_602(&(Local_162[11 /*10*/].f_3)) < 1.5f && (MISC::ABSF(fLocal_164) - MISC::ABSF(Var0.f_0)) < 0f)
			{
				__LIB_1__::func_377(&(Local_162[11 /*10*/].f_3));
				return 1;
			}
			else if (__LIB_37__::func_602(&(Local_162[11 /*10*/].f_3)) >= 1.5f)
			{
				__LIB_1__::func_377(&(Local_162[11 /*10*/].f_3));
				return 0;
			}
		}
	}
	return 0;
}

int func_272(var uParam0)//Position - 0xC0F0
{
	if (((((VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, false) && !__LIB_0__::func_702(&(Local_162[0 /*10*/].f_3))) && !__LIB_0__::func_702(&(Local_162[8 /*10*/].f_3))) && !__LIB_0__::func_702(&(Local_162[5 /*10*/].f_3))) && !__LIB_0__::func_702(&(Local_162[9 /*10*/].f_3))) && !__LIB_0__::func_702(&(Local_162[7 /*10*/].f_3)))
	{
		if (!__LIB_0__::func_702(&(Local_162[14 /*10*/].f_3)))
		{
			uParam0->f_5 = VEHICLE::GET_CLOSEST_VEHICLE(ENTITY::GET_ENTITY_COORDS(uParam0->f_4, true), 10f, 0, 260);
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_5))
			{
				if ((ENTITY::GET_ENTITY_SPEED(uParam0->f_4) > 15f && __LIB_0__::func_76(uParam0->f_5, uParam0->f_4, 1) < 3f) && (!ENTITY::IS_ENTITY_DEAD(uParam0->f_5, false) && !VEHICLE::IS_VEHICLE_SEAT_FREE(uParam0->f_5, -1, false)))
				{
					__LIB_3__::func_128(&(Local_162[14 /*10*/].f_3));
				}
			}
		}
		else if ((__LIB_37__::func_602(&(Local_162[14 /*10*/].f_3)) < 1.5f && __LIB_0__::func_76(uParam0->f_5, uParam0->f_4, 1) > 4.5f) && !ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(uParam0->f_5))
		{
			__LIB_1__::func_377(&(Local_162[14 /*10*/].f_3));
			return 1;
		}
		else if (__LIB_37__::func_602(&(Local_162[14 /*10*/].f_3)) >= 1.5f)
		{
			__LIB_1__::func_377(&(Local_162[14 /*10*/].f_3));
			return 0;
		}
		else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(uParam0->f_5))
		{
			__LIB_1__::func_377(&(Local_162[14 /*10*/].f_3));
			return 0;
		}
	}
	return 0;
}

int func_273(var uParam0)//Position - 0xC687
{
	int iVar0;
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, false))
	{
		iVar0 = PLAYER::GET_TIME_SINCE_PLAYER_DROVE_ON_PAVEMENT(PLAYER::PLAYER_ID());
		if (iVar0 == 0)
		{
			if (!__LIB_0__::func_702(&(Local_162[4 /*10*/].f_3)))
			{
				__LIB_3__::func_128(&(Local_162[4 /*10*/].f_3));
			}
			else if (__LIB_37__::func_602(&(Local_162[4 /*10*/].f_3)) > 2f)
			{
				__LIB_1__::func_377(&(Local_162[4 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			__LIB_1__::func_377(&(Local_162[4 /*10*/].f_3));
		}
	}
	return 0;
}

int func_274(var uParam0)//Position - 0xC6F9
{
	int iVar0;
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, false))
	{
		iVar0 = PLAYER::GET_TIME_SINCE_PLAYER_DROVE_AGAINST_TRAFFIC(PLAYER::PLAYER_ID());
		if (iVar0 == 0)
		{
			if (!__LIB_0__::func_702(&(Local_162[6 /*10*/].f_3)))
			{
				__LIB_3__::func_128(&(Local_162[6 /*10*/].f_3));
			}
			else if (__LIB_37__::func_602(&(Local_162[6 /*10*/].f_3)) > 3.5f)
			{
				__LIB_1__::func_377(&(Local_162[6 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			__LIB_1__::func_377(&(Local_162[6 /*10*/].f_3));
		}
	}
	return 0;
}

int func_275(var uParam0)//Position - 0xC7F0
{
	struct<3> Var0;
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, false))
	{
		Var0 = { ENTITY::GET_ENTITY_SPEED_VECTOR(uParam0->f_4, true) };
		if (MISC::ABSF(Var0.f_0) > 3f && !__LIB_0__::func_702(&(Local_162[0 /*10*/].f_3)))
		{
			if (!__LIB_0__::func_702(&(Local_162[1 /*10*/].f_3)))
			{
				__LIB_3__::func_128(&(Local_162[1 /*10*/].f_3));
			}
			else if (__LIB_37__::func_602(&(Local_162[1 /*10*/].f_3)) > 1.2f)
			{
				__LIB_1__::func_377(&(Local_162[1 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			__LIB_1__::func_377(&(Local_162[1 /*10*/].f_3));
		}
	}
	return 0;
}

int func_276(var uParam0)//Position - 0xC87C
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, false))
	{
		if (!VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(uParam0->f_4) && ENTITY::IS_ENTITY_IN_AIR(uParam0->f_4))
		{
			if (!__LIB_0__::func_702(&(Local_162[0 /*10*/].f_3)))
			{
				__LIB_3__::func_128(&(Local_162[0 /*10*/].f_3));
			}
			else if (__LIB_37__::func_602(&(Local_162[0 /*10*/].f_3)) > 0.7f)
			{
				__LIB_1__::func_377(&(Local_162[0 /*10*/].f_3));
				__LIB_1__::func_31(&(Local_162[1 /*10*/].f_6));
				return 1;
			}
		}
		else
		{
			__LIB_1__::func_377(&(Local_162[0 /*10*/].f_3));
		}
	}
	return 0;
}

void func_277(var uParam0)//Position - 0xC906
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (__LIB_0__::func_702(&(Local_162[iVar0 /*10*/].f_6)))
		{
			__LIB_1__::func_31(&(Local_162[iVar0 /*10*/].f_6));
		}
		iVar0++;
	}
	__LIB_40__::func_257(uParam0, 10, 0f, 1);
	PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID());
}

int func_278(var uParam0)//Position - 0xC9AB
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, false))
	{
		if (ENTITY::GET_ENTITY_SPEED(uParam0->f_4) > 25f)
		{
			if (!__LIB_0__::func_702(&(Local_162[5 /*10*/].f_3)))
			{
				__LIB_3__::func_128(&(Local_162[5 /*10*/].f_3));
			}
			else if (__LIB_37__::func_602(&(Local_162[5 /*10*/].f_3)) > 3.5f)
			{
				__LIB_1__::func_377(&(Local_162[5 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			__LIB_1__::func_377(&(Local_162[5 /*10*/].f_3));
		}
	}
	return 0;
}

void func_279(var uParam0, char[12] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char* sParam5)//Position - 0x113B1
{
	__LIB_40__::func_257(uParam0, 16, 0, 0);
	__LIB_40__::func_257(uParam0, 17, 0f, 1);
	StringConCat(&cParam1, sParam5, 24);
	if (!PED::IS_PED_INJURED(uParam0->f_3))
	{
		AUDIO::INTERRUPT_CONVERSATION(uParam0->f_3, &cParam1, __LIB_40__::func_160(uParam0));
	}
}

int func_280(var uParam0, int iParam1)//Position - 0x3AC1
{
	if (!__LIB_0__::func_702(&(uParam0->f_2)))
	{
		__LIB_1__::func_31(&(uParam0->f_2));
	}
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(14);
	GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(*uParam0, 255, 255, 255, 255, 0);
	if (iParam1 || uParam0->f_8)
	{
		if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/) || uParam0->f_8)
		{
			if (!__LIB_0__::func_702(&(uParam0->f_5)))
			{
				__LIB_1__::func_31(&(uParam0->f_5));
				__LIB_1__::func_216(uParam0, 1051260355);
			}
		}
		if (__LIB_0__::func_702(&(uParam0->f_5)))
		{
			if (__LIB_37__::func_602(&(uParam0->f_5)) > 0.33f)
			{
				__LIB_1__::func_377(&(uParam0->f_5));
				return 0;
			}
		}
	}
	if (uParam0->f_1 == -1)
	{
		return 1;
	}
	if (__LIB_37__::func_602(&(uParam0->f_2)) * 1000f) > SYSTEM::TO_FLOAT(uParam0->f_1)
	{
		if (!__LIB_0__::func_702(&(uParam0->f_5)))
		{
			__LIB_1__::func_31(&(uParam0->f_5));
			__LIB_1__::func_216(uParam0, 1051260355);
		}
		else if (__LIB_37__::func_602(&(uParam0->f_5)) > 0.33f)
		{
			__LIB_1__::func_377(&(uParam0->f_2));
			return 0;
		}
	}
	return 1;
}

void func_281(var uParam0)//Position - 0x7566
{
	__LIB_40__::func_257(uParam0, 14, 0, 0);
	__LIB_40__::func_99();
}

void func_282(int iParam0)//Position - 0x1CD
{
	iParam0->f_2 = PLAYER::PLAYER_PED_ID();
	__LIB_40__::func_105(&(iParam0->f_244));
	iParam0->f_428 = __LIB_40__::func_190();
}

void func_283(var uParam0, int iParam1, struct<3> Param2, var uParam3, var uParam4, var uParam5, char* sParam6, bool bParam7, int iParam8)//Position - 0x10ECC
{
	__LIB_40__::func_104(&(uParam0->f_82), iParam1);
	__LIB_40__::func_257(uParam0, 16, 0, 0);
	StringConCat(&Param2, sParam6, 24);
	if (bParam7)
	{
		__LIB_40__::func_131(&Param2);
	}
	__LIB_2__::func_859(&(uParam0->f_244), uParam0->f_144, &Param2, iParam8, 0, 0, 0);
}

void func_284(var uParam0, int iParam1, struct<3> Param2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char* sParam6, int iParam7, bool bParam8)//Position - 0x10F94
{
	__LIB_40__::func_104(&(uParam0->f_82), iParam1);
	__LIB_40__::func_257(uParam0, 16, 0, 0);
	StringConCat(&Param2, sParam6, 24);
	if ((((uParam0->f_411 == 1 || uParam0->f_411 == 0) || uParam0->f_411 == 5) || uParam0->f_411 == 8) || uParam0->f_411 == 2)
	{
		if (bParam8)
		{
			__LIB_40__::func_131(&Param2);
		}
	}
	__LIB_2__::func_859(&(uParam0->f_244), uParam0->f_144, &Param2, iParam7, 0, 0, 0);
}

void func_285(var uParam0, int iParam1, struct<3> Param2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char* sParam6, int iParam7)//Position - 0x1107A
{
	__LIB_40__::func_104(&(uParam0->f_81), iParam1);
	__LIB_40__::func_257(uParam0, 16, 0, 0);
	StringConCat(&Param2, sParam6, 24);
	__LIB_2__::func_859(&(uParam0->f_244), uParam0->f_144, &Param2, iParam7, 0, 0, 0);
}

void func_286(var uParam0, int iParam1, struct<3> Param2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char* sParam6, bool bParam7, int iParam8)//Position - 0x11344
{
	__LIB_40__::func_104(&(uParam0->f_81), iParam1);
	__LIB_40__::func_257(uParam0, 16, 0, 0);
	StringConCat(&Param2, sParam6, 24);
	if (bParam7)
	{
		__LIB_40__::func_131(&Param2);
	}
	__LIB_2__::func_859(&(uParam0->f_244), uParam0->f_144, &Param2, iParam8, 0, 0, 0);
}

void func_287(var uParam0, struct<6> Param1, int iParam2)//Position - 0x10F0D
{
	char cVar0[24];
	cVar0 = { Param1 };
	if (!__LIB_0__::func_703(uParam0->f_82, 64))
	{
		__LIB_40__::func_104(&(uParam0->f_82), 64);
		StringConCat(&cVar0, "_1", 24);
	}
	else if (!__LIB_0__::func_703(uParam0->f_82, 128))
	{
		__LIB_40__::func_104(&(uParam0->f_82), 128);
		StringConCat(&cVar0, "_2", 24);
	}
	else
	{
		StringConCat(&cVar0, "_", 24);
		StringIntConCat(&cVar0, MISC::GET_RANDOM_INT_IN_RANGE(1, 3), 24);
	}
	__LIB_14__::func_535(&(uParam0->f_244), uParam0->f_144, &Param1, &cVar0, iParam2, 0, 0);
	__LIB_40__::func_257(uParam0, 16, 0, 0);
}

void func_288(int iParam0)//Position - 0x28F0
{
	int iVar0;
	iVar0 = ((iParam0->f_50 + iParam0->f_56) + iParam0->f_105);
	if (iVar0 > 0)
	{
		__LIB_14__::func_593(__LIB_0__::func_683(), 21, iVar0, 0, 0);
		__LIB_40__::func_176(10, iVar0);
		iLocal_57[0] = iVar0;
	}
}

bool func_289(var uParam0, var uParam1)//Position - 0x10948
{
	return ((*uParam1 == -1 && uParam0->f_412 == 0) && !__LIB_40__::func_117(uParam0, 9));
}

void func_290(var uParam0)//Position - 0x12390
{
	uParam0->f_2 = PLAYER::PLAYER_PED_ID();
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_14 = { __LIB_0__::func_613() };
	uParam0->f_17 = { __LIB_0__::func_613() };
	uParam0->f_35 = 0f;
	uParam0->f_76 = 0;
	uParam0->f_49 = 0;
	uParam0->f_109 = 0;
	uParam0->f_36 = 0f;
	uParam0->f_410 = 2;
	uParam0->f_123 = "TRS_FINDING_LOCATION";
	__LIB_40__::func_118(uParam0, 32, 0);
}

void func_291(var uParam0)//Position - 0x70BF
{
	__LIB_40__::func_118(uParam0, 14, 0);
	__LIB_40__::func_118(uParam0, 15, 0);
	__LIB_40__::func_100();
	if (__LIB_0__::func_568())
	{
		__LIB_0__::func_620(0);
	}
}

void func_292(var uParam0)//Position - 0xB3A5
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (__LIB_0__::func_702(&(Local_162[iVar0 /*10*/].f_6)))
		{
			__LIB_1__::func_31(&(Local_162[iVar0 /*10*/].f_6));
		}
		iVar0++;
	}
	__LIB_40__::func_183(uParam0, 10, 0f, 1);
	PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID());
}

float func_293(var uParam0, int iParam1)//Position - 0x11C7B
{
	if (!__LIB_0__::func_702(&(uParam0->f_146[iParam1 /*3*/])))
	{
		__LIB_3__::func_128(&(uParam0->f_146[iParam1 /*3*/]));
	}
	return __LIB_37__::func_602(&(uParam0->f_146[iParam1 /*3*/]));
}

void func_294(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0x7395
{
	uParam0->f_416 = iParam1;
	if (bParam4)
	{
		__LIB_40__::func_183(uParam0, 16, 4f, 0);
		if (__LIB_40__::func_207(uParam0))
		{
			__LIB_0__::func_429();
		}
	}
	__LIB_40__::func_223(uParam0, iParam2, bParam3);
}

int func_295(var uParam0)//Position - 0xAD14
{
	if (((VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, false) && !__LIB_0__::func_702(&(Local_162[9 /*10*/].f_3))) && !__LIB_0__::func_702(&(Local_162[7 /*10*/].f_3))) && !__LIB_0__::func_702(&(Local_162[4 /*10*/].f_3)))
	{
		if (!__LIB_40__::func_225(uParam0->f_4) && ENTITY::GET_ENTITY_SPEED(uParam0->f_4) > 15f)
		{
			if (!__LIB_0__::func_702(&(Local_162[13 /*10*/].f_3)))
			{
				__LIB_3__::func_128(&(Local_162[13 /*10*/].f_3));
			}
			else if (__LIB_37__::func_602(&(Local_162[13 /*10*/].f_3)) > 5f)
			{
				__LIB_1__::func_377(&(Local_162[13 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			__LIB_1__::func_377(&(Local_162[13 /*10*/].f_3));
		}
	}
	return 0;
}

int func_296(var uParam0, char* sParam1, int iParam2, bool bParam3, int iParam4)//Position - 0x10301
{
	__LIB_40__::func_183(uParam0, 16, 0, 0);
	if (bParam3)
	{
		__LIB_40__::func_183(uParam0, 17, 0f, 1);
	}
	__LIB_40__::func_223(uParam0, iParam2, 0);
	return __LIB_2__::func_859(&(uParam0->f_244), uParam0->f_144, sParam1, iParam4, 0, 0, 0);
}

void func_297(var uParam0, char* sParam1, int iParam2)//Position - 0xB4EB
{
	struct<3> Var0;
	__LIB_0__::func_325();
	__LIB_39__::func_78(2);
	Var0 = { __LIB_13__::func_743() };
	if ((!MISC::IS_STRING_NULL_OR_EMPTY(&Var0) && __LIB_0__::func_75()) && !MISC::ARE_STRINGS_EQUAL(&Var0, "NULL"))
	{
	}
	else
	{
		HUD::CLEAR_PRINTS();
		HUD::CLEAR_HELP(true);
		StringCopy(&Var0, uParam0->f_143, 24);
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_3, false))
		{
			if (!__LIB_40__::func_127(uParam0))
			{
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_a", 3))
				{
					TASK::STOP_ANIM_TASK(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_a", -8f);
				}
				else if (ENTITY::IS_ENTITY_PLAYING_ANIM(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", 3))
				{
					TASK::STOP_ANIM_TASK(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", -8f);
				}
				else if (ENTITY::IS_ENTITY_PLAYING_ANIM(uParam0->f_3, "gestures@m@standing@casual", "gesture_nod_yes_hard", 3))
				{
					TASK::STOP_ANIM_TASK(uParam0->f_3, "gestures@m@standing@casual", "gesture_nod_yes_hard", -8f);
				}
			}
		}
		uParam0->f_109 = 1;
		uParam0->f_121 = sParam1;
		uParam0->f_415 = iParam2;
		__LIB_40__::func_183(uParam0, 3, 0, 0);
		if (iParam2 == 8 || iParam2 == 18)
		{
			if (uParam0->f_411 != 9)
			{
				if (uParam0->f_115)
				{
					StringConCat(&Var0, "_aband2", 24);
				}
				else
				{
					StringConCat(&Var0, "_aband1", 24);
				}
				__LIB_40__::func_228(uParam0, &Var0);
			}
			else if (!PED::IS_PED_INJURED(uParam0->f_3))
			{
				__LIB_0__::func_709(uParam0->f_3, "TAXI_FAIL", uParam0->f_145, 4);
			}
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_FAIL", 24);
		}
		else if (iParam2 == 10)
		{
			if (uParam0->f_115)
			{
				StringConCat(&Var0, "_aggro2", 24);
			}
			else
			{
				StringConCat(&Var0, "_aggro", 24);
			}
			__LIB_40__::func_228(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPK", 24);
		}
		else if (uParam0->f_415 == 15)
		{
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_DEAD", 24);
		}
		else if (iParam2 == 2)
		{
			StringConCat(&Var0, "_lost1", 24);
			__LIB_40__::func_228(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_FAIL", 24);
		}
		else if (iParam2 == 3)
		{
			StringConCat(&Var0, "_spotd1", 24);
			__LIB_40__::func_228(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPT", 24);
		}
		else if (iParam2 == 4)
		{
			StringConCat(&Var0, "_wntd1", 24);
			__LIB_40__::func_228(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPT", 24);
		}
		else if (iParam2 == 5)
		{
			StringConCat(&Var0, "_spook", 24);
			__LIB_40__::func_228(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPK", 24);
			if (__LIB_40__::func_127(uParam0))
			{
				if (VEHICLE::IS_VEHICLE_STOPPED(uParam0->f_4))
				{
					__LIB_40__::func_212(uParam0, 4096, 0);
				}
				else
				{
					__LIB_40__::func_212(uParam0, 0, 0);
				}
			}
		}
		else if (iParam2 == 6)
		{
			StringConCat(&Var0, "_hit2", 24);
			__LIB_40__::func_228(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPK", 24);
		}
		else if (iParam2 == 7)
		{
			StringConCat(&Var0, "_jak", 24);
			__LIB_40__::func_228(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPT", 24);
		}
		else if (iParam2 == 14)
		{
			if (uParam0->f_411 != 9)
			{
				if (uParam0->f_115)
				{
					StringConCat(&Var0, "_shot2", 24);
				}
				else
				{
					StringConCat(&Var0, "_shot1", 24);
				}
				__LIB_40__::func_228(uParam0, &Var0);
			}
			else if (!PED::IS_PED_INJURED(uParam0->f_3))
			{
				__LIB_0__::func_709(uParam0->f_3, "CALL_COPS_COMMIT", uParam0->f_145, 4);
			}
			PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 1, false);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SHT", 24);
		}
		else if (iParam2 == 12)
		{
			StringConCat(&Var0, "_shot1", 24);
			__LIB_40__::func_228(uParam0, &Var0);
			PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 1, false);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPT", 24);
		}
		else if (iParam2 == 13)
		{
			StringConCat(&Var0, "_shot1", 24);
			__LIB_40__::func_228(uParam0, &Var0);
			PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 1, false);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_CK", 24);
		}
		else if (iParam2 == 11)
		{
			__LIB_40__::func_176(8, 0);
			iLocal_57[3] = 1;
			if (uParam0->f_411 != 9)
			{
				if (uParam0->f_115)
				{
					StringConCat(&Var0, "_noDri2", 24);
				}
				else
				{
					StringConCat(&Var0, "_noDri1", 24);
				}
				__LIB_40__::func_228(uParam0, &Var0);
			}
			else if (!PED::IS_PED_INJURED(uParam0->f_3))
			{
				__LIB_0__::func_709(uParam0->f_3, "GENERIC_INSULT_MED", uParam0->f_145, 4);
			}
			__LIB_40__::func_212(uParam0, 0, 0);
			__LIB_40__::func_228(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_WAT", 24);
		}
		else if (iParam2 == 0)
		{
			__LIB_40__::func_176(8, 0);
			iLocal_57[3] = 1;
			if (uParam0->f_411 != 9)
			{
				if (uParam0->f_115)
				{
					StringConCat(&Var0, "_noDri2", 24);
				}
				else
				{
					StringConCat(&Var0, "_noDri1", 24);
				}
				__LIB_40__::func_228(uParam0, &Var0);
			}
			else if (!PED::IS_PED_INJURED(uParam0->f_3))
			{
				__LIB_0__::func_709(uParam0->f_3, "TAXI_FAIL", uParam0->f_145, 4);
			}
			__LIB_40__::func_228(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_DR", 24);
		}
		else if (iParam2 == 1)
		{
			__LIB_40__::func_176(8, 0);
			iLocal_57[3] = 1;
			if (uParam0->f_411 != 9)
			{
				if (uParam0->f_115)
				{
					StringConCat(&Var0, "_noDri2", 24);
				}
				else
				{
					StringConCat(&Var0, "_noDri1", 24);
				}
				__LIB_40__::func_228(uParam0, &Var0);
			}
			else if (!PED::IS_PED_INJURED(uParam0->f_3))
			{
				__LIB_0__::func_709(uParam0->f_3, "TAXI_FAIL", uParam0->f_145, 4);
			}
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_FIRE", 24);
		}
		else if (iParam2 == 19)
		{
			StringCopy(&Var0, "OJTX_QUIT_", 24);
			__LIB_40__::func_189(&Var0);
			__LIB_2__::func_859(&(uParam0->f_244), "OJTXAUD", &Var0, 7, 0, 0, 0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_CNCL", 24);
		}
		else if (iParam2 == 20)
		{
			if (uParam0->f_115)
			{
				StringConCat(&Var0, "_aband2", 24);
			}
			else
			{
				StringConCat(&Var0, "_fail1", 24);
			}
			__LIB_40__::func_228(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_FAIL", 24);
		}
		else
		{
			if (uParam0->f_411 != 9)
			{
				if (iParam2 != 21)
				{
					StringConCat(&Var0, "_Fail1", 24);
				}
				else
				{
					StringConCat(&Var0, "_aband1", 24);
				}
				if (uParam0->f_410 > 5)
				{
					__LIB_40__::func_228(uParam0, &Var0);
				}
			}
			else if (!PED::IS_PED_INJURED(uParam0->f_3))
			{
				__LIB_0__::func_709(uParam0->f_3, "TAXI_FAIL", uParam0->f_145, 4);
			}
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_FAIL", 24);
			__LIB_40__::func_176(3, 0);
		}
		__LIB_40__::func_183(uParam0, 3, 0f, 1);
	}
}

int func_298(int iParam0, int iParam1)//Position - 0x3AFF
{
	if (!PED::IS_PED_INJURED(iParam1))
	{
		if (!ENTITY::IS_ENTITY_AT_ENTITY(iParam0, iParam1, 100f, 100f, 50f, false, true, 0))
		{
			if (!CAM::IS_SPHERE_VISIBLE(ENTITY::GET_ENTITY_COORDS(iParam1, true), 15f))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_299(var uParam0)//Position - 0x104BE
{
	if (__LIB_0__::func_75())
	{
		return 1;
	}
	if (__LIB_40__::func_117(uParam0, 17))
	{
		return 1;
	}
	if (__LIB_40__::func_117(uParam0, 14))
	{
		return 1;
	}
	if (__LIB_21__::func_717(uParam0))
	{
		return 1;
	}
	return 0;
}

void func_300(var uParam0)//Position - 0x10524
{
	if (__LIB_40__::func_117(uParam0, 17))
	{
		if (!__LIB_40__::func_117(uParam0, 14))
		{
			if (!__LIB_21__::func_717(uParam0))
			{
				if (!__LIB_0__::func_75())
				{
					__LIB_40__::func_118(uParam0, 17, 1);
				}
			}
		}
	}
}

void func_301(var uParam0, var uParam1, char* sParam2, bool bParam3)//Position - 0x4BF9
{
	if (bParam3)
	{
		__LIB_40__::func_110(uParam0);
	}
	if (!HUD::DOES_BLIP_EXIST(uParam0->f_8))
	{
		uParam0->f_8 = __LIB_0__::func_511(*uParam1, 0, 0);
	}
	if (!MISC::IS_STRING_NULL(sParam2))
	{
		HUD::SET_BLIP_NAME_FROM_TEXT_FILE(uParam0->f_8, sParam2);
	}
}

float func_302(var uParam0, int iParam1)//Position - 0x11E7F
{
	if (!__LIB_0__::func_702(&(uParam0->f_146[iParam1 /*3*/])))
	{
		__LIB_3__::func_128(&(uParam0->f_146[iParam1 /*3*/]));
	}
	return __LIB_3__::func_108(&(uParam0->f_146[iParam1 /*3*/]));
}

void func_303(int iParam0, var uParam1, bool bParam2, int iParam3)//Position - 0x38FA
{
	struct<3> Var0;
	uParam1->f_1 = 0;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		uParam1->f_2 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
		PED::SET_PED_MONEY(iParam0, 0);
		*uParam1 = 0;
	}
	else
	{
		if (iParam3 <= 0)
		{
			*uParam1 = MISC::GET_RANDOM_INT_IN_RANGE(80, 200);
		}
		else
		{
			*uParam1 = iParam3;
		}
		uParam1->f_2 = { PED::GET_DEAD_PED_PICKUP_COORDS(iParam0, 1.2f, 1.5f) };
	}
	MISC::SET_BIT(&(uParam1->f_1), 3);
	MISC::SET_BIT(&(uParam1->f_1), 4);
	Var0 = { OBJECT::GET_SAFE_PICKUP_COORDS(uParam1->f_2, 1.2f, 1.5f) };
	uParam1->f_6 = OBJECT::CREATE_PICKUP(joaat("PICKUP_MONEY_VARIABLE"), Var0, uParam1->f_1, *uParam1, true, 0);
	if (bParam2)
	{
		if (!HUD::DOES_BLIP_EXIST(uParam1->f_5))
		{
			uParam1->f_5 = __LIB_16__::func_321(uParam1->f_6);
			HUD::SET_BLIP_NAME_FROM_TEXT_FILE(uParam1->f_5, "TAXI_BLIP_MONE");
		}
		else
		{
			HUD::SET_BLIP_NAME_FROM_TEXT_FILE(uParam1->f_5, "TAXI_BLIP_MONE");
		}
	}
}

void func_304(var uParam0)//Position - 0x6732
{
	__LIB_40__::func_129(uParam0, 1000);
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_3, false) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(uParam0->f_3);
		TASK::TASK_TURN_PED_TO_FACE_ENTITY(uParam0->f_3, PLAYER::PLAYER_PED_ID(), 0);
	}
	__LIB_0__::func_325();
	__LIB_40__::func_291(uParam0);
}

int func_305(var uParam0, bool bParam1)//Position - 0x504B
{
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_3, false))
	{
		if (__LIB_40__::func_127(uParam0) && __LIB_40__::func_249(uParam0, 1, 1084227584))
		{
			if (bParam1)
			{
				if (__LIB_40__::func_174(uParam0, 2097152))
				{
					__LIB_40__::func_220(uParam0);
				}
			}
			else
			{
				__LIB_40__::func_220(uParam0);
			}
		}
		else if (!__LIB_40__::func_127(uParam0))
		{
			if (bParam1)
			{
				if (__LIB_40__::func_174(uParam0, 2097152))
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_3, joaat("SCRIPT_TASK_LEAVE_VEHICLE")) == 7)
					{
						return 1;
					}
				}
			}
			else if (TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_3, joaat("SCRIPT_TASK_LEAVE_VEHICLE")) == 7)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_306(var uParam0, float fParam1)//Position - 0x8756
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	var uVar3;
	var uVar4;
	int iVar5;
	var uVar6;
	int iVar7;
	int iVar8;
	iVar8 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(uParam0->f_4, "windscreen");
	if (iVar8 == -1)
	{
		iVar8 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(uParam0->f_4, "windscreen_f");
	}
	if (iVar8 != -1)
	{
		Var2 = { ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(uParam0->f_4, iVar8) };
		Var2 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(uParam0->f_4, Var2) };
		Var2.f_1 = (Var2.f_1 + 1f);
	}
	else
	{
		Var2 = { 0f, 1f, 1f };
	}
	Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_4, Var2) };
	Var1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_3, 0f, 0.25f, 0.9f) };
	GRAPHICS::DRAW_DEBUG_LINE(Var0, Var1, 0, 0, 255, 255);
	switch (iLocal_79)
	{
		case 0:
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_3, true);
			iLocal_79 = 1;
			break;
		case 1:
			if ((__LIB_0__::func_76(uParam0->f_4, uParam0->f_3, 0) <= fParam1 && !uParam0->f_142) && MISC::ABSF((Var0.f_2 - Var1.f_2)) < 5f)
			{
				if (uParam0->f_409 == 0)
				{
					uParam0->f_409 = SHAPETEST::START_SHAPE_TEST_LOS_PROBE(Var0, Var1, 511, 0, 7);
				}
				else
				{
					iVar7 = SHAPETEST::GET_SHAPE_TEST_RESULT(uParam0->f_409, &iVar5, &uVar3, &uVar4, &uVar6);
					if (iVar7 == 2)
					{
						if (iVar5 == 0)
						{
							iLocal_79 = 2;
						}
						uParam0->f_409 = 0;
					}
					else if (iVar7 == 0)
					{
						uParam0->f_409 = 0;
					}
				}
			}
			else if (TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_3, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_3, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) != 0)
			{
				TASK::CLEAR_SEQUENCE_TASK(&(uParam0->f_243));
				TASK::OPEN_SEQUENCE_TASK(&(uParam0->f_243));
				TASK::TASK_PLAY_ANIM(0, "oddjobs@taxi@", "idle_a", 8f, -8f, -1, 0, 0f, false, false, false);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
				TASK::SET_SEQUENCE_TO_REPEAT(uParam0->f_243, true);
				TASK::CLOSE_SEQUENCE_TASK(uParam0->f_243);
				TASK::TASK_PERFORM_SEQUENCE(uParam0->f_3, uParam0->f_243);
			}
			break;
		case 2:
			HUD::CLEAR_PRINTS();
			if (uParam0->f_411 != 9)
			{
				if (!__LIB_0__::func_703(uParam0->f_44, 128))
				{
					__LIB_40__::func_294(uParam0, 4, 1, 0, 1);
				}
			}
			else
			{
				__LIB_0__::func_709(uParam0->f_3, "TAXI_HAIL", uParam0->f_145, 4);
			}
			TASK::CLEAR_PED_TASKS(uParam0->f_3);
			TASK::TASK_LOOK_AT_ENTITY(uParam0->f_3, uParam0->f_4, -1, 2048, 4);
			TASK::CLEAR_SEQUENCE_TASK(&(uParam0->f_243));
			TASK::OPEN_SEQUENCE_TASK(&(uParam0->f_243));
			if (uParam0->f_411 != 9)
			{
				TASK::TASK_PLAY_ANIM(0, "gestures@m@standing@casual", "gesture_nod_yes_hard", 8f, -8f, -1, 48, 0f, false, false, false);
			}
			else
			{
				TASK::TASK_PLAY_ANIM(0, "oddjobs@towingcome_here", "come_here_idle_c", 8f, -1.5f, -1, 48, 0f, false, false, false);
			}
			TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
			TASK::CLOSE_SEQUENCE_TASK(uParam0->f_243);
			TASK::TASK_PERFORM_SEQUENCE(uParam0->f_3, uParam0->f_243);
			TASK::CLEAR_SEQUENCE_TASK(&(uParam0->f_243));
			iLocal_79 = 3;
			break;
		case 3:
			iLocal_79 = 0;
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(uParam0->f_3, "gestures@m@standing@casual", "gesture_you_hard", 3))
			{
				ENTITY::SET_ENTITY_ANIM_SPEED(uParam0->f_3, "gestures@m@standing@casual", "gesture_you_hard", 0.8f);
			}
			return 1;
			break;
	}
	return 0;
}

int func_307(var uParam0, int iParam1, int iParam2)//Position - 0x117A1
{
	if (((uParam0->f_107 >= 2 && uParam0->f_410 < 29) || uParam0->f_410 <= 5) || (iParam1 && !uParam0->f_114))
	{
		return 1;
	}
	else if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_3, false))
	{
		if (!ENTITY::IS_ENTITY_OCCLUDED(uParam0->f_3))
		{
			if (iParam2 == 4)
			{
				__LIB_40__::func_294(uParam0, 66, 1, 0, 1);
			}
			else
			{
				__LIB_40__::func_294(uParam0, 65, 1, 0, 1);
			}
		}
	}
	return 0;
}

void func_308(var uParam0, bool bParam1, bool bParam2)//Position - 0x653A
{
	if (bParam1)
	{
		__LIB_40__::func_110(uParam0);
	}
	if (!HUD::DOES_BLIP_EXIST(uParam0->f_10))
	{
		uParam0->f_10 = __LIB_0__::func_511(uParam0->f_4, 1, 0);
		HUD::SET_BLIP_NAME_FROM_TEXT_FILE(uParam0->f_10, "TAXI_BLIP_CAR");
		HUD::SET_BLIP_ROUTE(uParam0->f_10, true);
		__LIB_40__::func_221(uParam0);
		if (bParam2)
		{
			HUD::CLEAR_PRINTS();
			__LIB_40__::func_294(uParam0, 3, 1, 0, 0);
		}
	}
}

void func_309(var uParam0, var uParam1, int iParam2, int iParam3)//Position - 0x65D4
{
	if (!__LIB_0__::func_703(*uParam1, iParam2))
	{
		HUD::CLEAR_PRINTS();
		__LIB_40__::func_294(uParam0, iParam3, 1, 0, 0);
		__LIB_40__::func_104(uParam1, iParam2);
	}
}

void func_310(bool bParam0, var uParam1, bool bParam2)//Position - 0x733
{
	if (bParam0)
	{
		__LIB_40__::func_234(uParam1);
		if (!PED::IS_PED_INJURED(uParam1->f_3))
		{
			PED::SET_PED_CONFIG_FLAG(uParam1->f_3, 317, true);
		}
	}
	else
	{
		__LIB_40__::func_176(1, 0);
	}
	__LIB_40__::func_261(uParam1, bParam2);
}

void func_311(var uParam0)//Position - 0x10885
{
	if (!__LIB_3__::func_423(uParam0->f_429))
	{
		uParam0->f_429 = __LIB_11__::func_762();
		__LIB_13__::func_726(&(uParam0->f_429), 0, 0, MISC::GET_RANDOM_INT_IN_RANGE(4, 7), 0, 0, 0);
	}
	else if (__LIB_14__::func_793(uParam0->f_429))
	{
		__LIB_40__::func_297(uParam0, "Player took too long to make pickup", 9);
	}
}

int func_312(var uParam0, var uParam1)//Position - 0x120A9
{
	uParam1 = uParam1;
	__LIB_40__::func_297(uParam0, "Taxi Not Driveable", 1);
	return 1;
}

int func_313(var uParam0, var uParam1)//Position - 0x1214D
{
	uParam1 = uParam1;
	__LIB_40__::func_297(uParam0, "Didn't lose police in time.", 9);
	return 1;
}

int func_314(var uParam0, var uParam1)//Position - 0x1220F
{
	uParam1 = uParam1;
	__LIB_40__::func_297(uParam0, "Taxi Is Flipped", 0);
	return 1;
}

int func_315(var uParam0, var uParam1)//Position - 0x1226F
{
	uParam1 = uParam1;
	__LIB_40__::func_297(uParam0, "Stayed stopped for too long.", 9);
	return 1;
}

int func_316(var uParam0, var uParam1)//Position - 0x122C6
{
	uParam1 = uParam1;
	__LIB_40__::func_297(uParam0, "Taxi Not Driveable", 0);
	return 1;
}

int func_317(var uParam0, var uParam1)//Position - 0x123CB
{
	uParam1 = uParam1;
	__LIB_40__::func_297(uParam0, "Passenger injured.", 15);
	return 1;
}

void func_318(var uParam0, int iParam1)//Position - 0x6621
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		if (!PED::IS_PED_INJURED(iParam1))
		{
			if (PLAYER::HAS_PLAYER_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID()))
			{
				if ((WEAPON::HAS_PED_BEEN_DAMAGED_BY_WEAPON(iParam1, joaat("WEAPON_STUNGUN"), 0) || WEAPON::HAS_PED_BEEN_DAMAGED_BY_WEAPON(iParam1, 0, 2)) || WEAPON::HAS_PED_BEEN_DAMAGED_BY_WEAPON(iParam1, 0, 1))
				{
					__LIB_40__::func_297(uParam0, "Passenger injured by player with weapon.", 14);
				}
				PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID());
			}
		}
	}
}

int func_319(var uParam0, int iParam1)//Position - 0x7690
{
	if (!PED::IS_PED_INJURED(uParam0->f_3))
	{
		if (PED::IS_PED_IN_VEHICLE(uParam0->f_3, uParam0->f_4, false))
		{
			if (VEHICLE::IS_VEHICLE_SEAT_FREE(uParam0->f_4, iParam1, false))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_3, joaat("SCRIPT_TASK_SHUFFLE_TO_NEXT_VEHICLE_SEAT")) != 1)
				{
					TASK::TASK_SHUFFLE_TO_NEXT_VEHICLE_SEAT(uParam0->f_3, uParam0->f_4, false);
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_320(var uParam0, int iParam1)//Position - 0x76E5
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, false))
	{
		if (!PED::IS_PED_INJURED(uParam0->f_3))
		{
			if (PED::IS_PED_IN_VEHICLE(uParam0->f_3, uParam0->f_4, false))
			{
				if (!VEHICLE::IS_VEHICLE_SEAT_FREE(uParam0->f_4, iParam1, false))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_321(var uParam0, char* sParam1)//Position - 0xCF5B
{
	if (MISC::ARE_STRINGS_EQUAL(&(uParam0->f_13), "txm3_bant1") || MISC::ARE_STRINGS_EQUAL(&(uParam0->f_13), "txm9_bant2"))
	{
		StringConCat(sParam1, "_resBn1", 24);
		return 1;
	}
	if ((MISC::ARE_STRINGS_EQUAL(&(uParam0->f_13), "txm6_bant3M") || MISC::ARE_STRINGS_EQUAL(&(uParam0->f_13), "txm6_bant3T")) || MISC::ARE_STRINGS_EQUAL(&(uParam0->f_13), "txm6_bant3F"))
	{
		__LIB_40__::func_104(&(uParam0->f_28), 1);
		StringConCat(sParam1, "_resBn1", 24);
		return 1;
	}
	return 0;
}

int func_322(var uParam0, bool bParam1)//Position - 0x12A03
{
	if (bParam1)
	{
		return 1;
	}
	if ((((!__LIB_0__::func_75() && __LIB_40__::func_302(uParam0, 3) > 1f) || uParam0->f_415 == 18) || uParam0->f_415 == 14) || uParam0->f_415 == 15)
	{
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_3, false))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, false))
			{
				if (PED::IS_PED_IN_VEHICLE(uParam0->f_3, uParam0->f_4, false))
				{
					if (__LIB_40__::func_111(uParam0) == 0 || __LIB_0__::func_703(uParam0->f_85, 32))
					{
						if (!VEHICLE::IS_VEHICLE_STOPPED(uParam0->f_4))
						{
							__LIB_40__::func_212(uParam0, 4160, 0);
						}
						else
						{
							__LIB_40__::func_212(uParam0, 0, 0);
						}
						return 1;
					}
					else
					{
						__LIB_40__::func_212(uParam0, 0, 0);
						return 1;
					}
				}
				else
				{
					__LIB_40__::func_212(uParam0, 0, 0);
					return 1;
				}
			}
			else
			{
				__LIB_40__::func_212(uParam0, 0, 0);
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	else if ((MISC::GET_GAME_TIMER() % 1000) < 50)
	{
	}
	return 0;
}

int func_323(var uParam0)//Position - 0x8F27
{
	if ((ENTITY::GET_ENTITY_SPEED(uParam0->f_4) > 3f && __LIB_40__::func_302(uParam0, 5) > 15f) || ENTITY::IS_ENTITY_UPSIDEDOWN(uParam0->f_4))
	{
		return 1;
	}
	return 0;
}

int func_324(var uParam0, int iParam1, float fParam2, float fParam3, float fParam4)//Position - 0x9204
{
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_3, false))
	{
		if (!ENTITY::IS_ENTITY_OCCLUDED(uParam0->f_3) && __LIB_14__::func_556(uParam0->f_3, 1) < fParam2)
		{
			if (!__LIB_40__::func_117(uParam0, 5))
			{
				__LIB_40__::func_183(uParam0, 5, 0, 0);
			}
		}
		else if (__LIB_40__::func_117(uParam0, 5))
		{
			__LIB_40__::func_118(uParam0, 5, 0);
		}
		if (((__LIB_40__::func_302(uParam0, 5) > IntToFloat(iParam1) && ENTITY::GET_ENTITY_SPEED(uParam0->f_4) < fParam4) && !ENTITY::IS_ENTITY_OCCLUDED(uParam0->f_3)) || __LIB_14__::func_556(uParam0->f_3, 1) <= fParam3)
		{
			return 1;
		}
	}
	return 0;
}

int func_325(var uParam0)//Position - 0xA255
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_4))
	{
		if (ENTITY::IS_ENTITY_IN_WATER(uParam0->f_4) && !VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(uParam0->f_4))
		{
			if (!__LIB_40__::func_117(uParam0, 25))
			{
				__LIB_40__::func_183(uParam0, 25, 0, 0);
			}
			else if (__LIB_40__::func_302(uParam0, 25) > 2f)
			{
				return 1;
			}
		}
		else if (__LIB_40__::func_117(uParam0, 25))
		{
			__LIB_40__::func_118(uParam0, 25, 0);
		}
	}
	return 0;
}

int func_326(var uParam0)//Position - 0xBF89
{
	int iVar0;
	int iVar1;
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, false))
	{
		if (ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(uParam0->f_4))
		{
			iVar0 = ENTITY::GET_ENTITY_HEALTH(uParam0->f_4);
			iVar1 = (uParam0->f_46 - iVar0);
			uParam0->f_46 = iVar0;
			ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(uParam0->f_4);
			if (IntToFloat(iVar1) > 10f)
			{
				if (uParam0->f_113)
				{
					__LIB_40__::func_294(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					__LIB_40__::func_294(uParam0, 72, 1, 0, 1);
				}
				__LIB_1__::func_377(&(Local_162[2 /*10*/].f_6));
				return 1;
			}
		}
	}
	return 0;
}

void func_327(var uParam0)//Position - 0x6BF1
{
	float fVar0;
	if ((__LIB_40__::func_127(uParam0) && __LIB_0__::func_703(uParam0->f_81, 67108864)) && PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
	{
		if ((MISC::GET_GAME_TIMER() - iLocal_89) >= 10000)
		{
			fVar0 = __LIB_14__::func_523(uParam0->f_17, 1);
			if (fVar0 > fLocal_87)
			{
				iLocal_88++;
			}
			else
			{
				iLocal_88 = 0;
			}
			fLocal_87 = fVar0;
			iLocal_89 = MISC::GET_GAME_TIMER();
		}
		if (iLocal_88 >= 2 && !__LIB_0__::func_75())
		{
			__LIB_40__::func_294(uParam0, 136, 1, 0, 1);
			iLocal_88 = 0;
		}
		if ((MISC::GET_GAME_TIMER() % 1000) < 50)
		{
		}
	}
	else
	{
		if ((MISC::GET_GAME_TIMER() % 4000) < 50)
		{
			if (!__LIB_40__::func_127(uParam0))
			{
			}
			if (!__LIB_0__::func_703(uParam0->f_81, 67108864))
			{
			}
		}
		if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
		{
			if (iLocal_88 > 0)
			{
				iLocal_88 = 0;
			}
		}
	}
}

void func_328(var uParam0)//Position - 0x6CE1
{
	if (PLAYER::IS_PLAYER_PRESSING_HORN(PLAYER::GET_PLAYER_INDEX()) && !__LIB_0__::func_703(uParam0->f_44, 2))
	{
		__LIB_40__::func_104(&(uParam0->f_44), 2);
	}
	else if (!PLAYER::IS_PLAYER_PRESSING_HORN(PLAYER::GET_PLAYER_INDEX()) && __LIB_0__::func_703(uParam0->f_44, 2))
	{
		__LIB_40__::func_175(&(uParam0->f_44), 2);
		uParam0->f_47++;
		__LIB_40__::func_176(9, 0);
	}
	if (uParam0->f_47 > 30)
	{
		__LIB_40__::func_294(uParam0, 47, 1, 0, 0);
		uParam0->f_47 = 0;
		uParam0->f_76 = (uParam0->f_76 + SYSTEM::CEIL(5f));
	}
}

void func_329(var uParam0)//Position - 0x7163
{
	if (AUDIO::IS_RADIO_RETUNING() && uParam0->f_418.f_4 != 0)
	{
		uParam0->f_418.f_4 = 0;
	}
	switch (uParam0->f_418.f_4)
	{
		case 0:
			uParam0->f_418 = AUDIO::GET_PLAYER_RADIO_STATION_INDEX();
			__LIB_40__::func_118(uParam0, 20, 0);
			uParam0->f_418.f_4++;
			break;
		case 1:
			if (uParam0->f_418.f_8 && !uParam0->f_418 == uParam0->f_418.f_2)
			{
				if (__LIB_40__::func_302(uParam0, 20) > 3f)
				{
					__LIB_40__::func_294(uParam0, 87, 1, 0, 0);
					uParam0->f_418.f_8 = 0;
					uParam0->f_418.f_4++;
				}
			}
			else if (uParam0->f_418 == uParam0->f_418.f_1)
			{
				if (!__LIB_0__::func_703(uParam0->f_81, 262144) || !__LIB_0__::func_703(uParam0->f_81, 1048576))
				{
					if (__LIB_40__::func_302(uParam0, 20) > 5f)
					{
						uParam0->f_418.f_5 = 1;
						__LIB_40__::func_294(uParam0, 84, 1, 0, 0);
						uParam0->f_418.f_4++;
					}
				}
			}
			else if (uParam0->f_418 == uParam0->f_418.f_2)
			{
				if (!__LIB_0__::func_703(uParam0->f_82, 67108864))
				{
					if (__LIB_40__::func_302(uParam0, 20) > 5f)
					{
						uParam0->f_418.f_6 = 1;
						uParam0->f_418.f_8 = 0;
						__LIB_40__::func_294(uParam0, 85, 1, 0, 0);
						__LIB_40__::func_118(uParam0, 22, 0);
						uParam0->f_418.f_4++;
					}
				}
			}
			else if (uParam0->f_418.f_7)
			{
				if (__LIB_40__::func_302(uParam0, 20) > 8f)
				{
					__LIB_40__::func_294(uParam0, 86, 1, 0, 0);
					uParam0->f_418.f_4++;
				}
			}
			break;
		case 2:
			if (__LIB_0__::func_703(uParam0->f_81, 262144) || __LIB_0__::func_703(uParam0->f_82, 67108864))
			{
				if (!__LIB_40__::func_117(uParam0, 22))
				{
					__LIB_40__::func_179(uParam0, 22);
				}
			}
			if (__LIB_40__::func_117(uParam0, 22) && __LIB_40__::func_302(uParam0, 22) > 15f)
			{
				if (uParam0->f_418 == uParam0->f_418.f_1)
				{
					if (!__LIB_0__::func_703(uParam0->f_81, 1048576))
					{
						__LIB_40__::func_294(uParam0, 84, 1, 0, 0);
						__LIB_40__::func_118(uParam0, 22, 0);
					}
				}
				else if (uParam0->f_418 == uParam0->f_418.f_2)
				{
					if (!__LIB_0__::func_703(uParam0->f_82, 134217728))
					{
						__LIB_40__::func_294(uParam0, 85, 1, 0, 0);
						__LIB_40__::func_118(uParam0, 22, 0);
					}
				}
			}
			break;
	}
}

void func_330(var uParam0, bool bParam1)//Position - 0x5B9D
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, false))
	{
		if (bParam1)
		{
			if (HUD::DOES_BLIP_EXIST(uParam0->f_8))
			{
				HUD::SET_BLIP_ALPHA(uParam0->f_8, 0);
				HUD::SET_BLIP_ROUTE(uParam0->f_8, false);
				__LIB_40__::func_309(uParam0, &(uParam0->f_98), 4, 3);
			}
			else if (HUD::DOES_BLIP_EXIST(uParam0->f_9))
			{
				HUD::SET_BLIP_ALPHA(uParam0->f_9, 0);
				HUD::SET_BLIP_ROUTE(uParam0->f_9, false);
				HUD::CLEAR_PRINTS();
				if (__LIB_40__::func_127(uParam0))
				{
					__LIB_40__::func_294(uParam0, 2, 1, 0, 0);
				}
				else
				{
					__LIB_40__::func_309(uParam0, &(uParam0->f_98), 4, 3);
				}
			}
			__LIB_40__::func_308(uParam0, 0, 0);
		}
		else if (HUD::DOES_BLIP_EXIST(uParam0->f_10))
		{
			HUD::REMOVE_BLIP(&(uParam0->f_10));
			if (HUD::DOES_BLIP_EXIST(uParam0->f_8))
			{
				HUD::SET_BLIP_ALPHA(uParam0->f_8, 255);
				HUD::SET_BLIP_ROUTE(uParam0->f_8, true);
			}
			else if (HUD::DOES_BLIP_EXIST(uParam0->f_9))
			{
				if (uParam0->f_411 == 5 && uParam0->f_410 == 17)
				{
					HUD::SET_BLIP_ALPHA(uParam0->f_9, 0);
					HUD::SET_BLIP_ROUTE(uParam0->f_9, false);
				}
				else if (uParam0->f_411 != 4)
				{
					HUD::SET_BLIP_ALPHA(uParam0->f_9, 255);
					HUD::SET_BLIP_ROUTE(uParam0->f_9, true);
				}
			}
			HUD::CLEAR_PRINTS();
		}
	}
}

void func_331(var uParam0, var uParam1)//Position - 0xD395
{
	struct<3> Var0;
	char cVar1[48];
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5[8];
	bool bVar6;
	if (__LIB_40__::func_162(uParam0))
	{
	}
	else if (!uParam0->f_110)
	{
	}
	else if (__LIB_40__::func_117(uParam0, 14))
	{
		StringCopy(&Var0, uParam0->f_143, 24);
		switch (__LIB_40__::func_128(uParam0))
		{
			case 55:
				StringConCat(&Var0, "_lvMe1", 24);
				cVar1 = { Var0 };
				__LIB_40__::func_200(&(uParam0->f_93), 3, &cVar1, 0, 1, 0);
				__LIB_14__::func_535(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar1, 8, 0, 0);
				__LIB_40__::func_183(uParam0, 16, 0, 0);
				__LIB_40__::func_216(4, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				__LIB_40__::func_223(uParam0, 0, 0);
				break;
			case 2:
				if (!__LIB_0__::func_75())
				{
					if (uParam0->f_115)
					{
						StringConCat(&Var0, "_retrn2", 24);
					}
					else
					{
						StringConCat(&Var0, "_retrn1", 24);
					}
					if (uParam0->f_411 != 9)
					{
						__LIB_40__::func_296(uParam0, &Var0, 0, 0, 8);
					}
				}
				else
				{
					__LIB_40__::func_215(uParam0, Var0, __LIB_40__::func_161(uParam0, 2));
				}
				if (__LIB_0__::func_703(uParam0->f_98, 4))
				{
					__LIB_40__::func_183(uParam0, 16, 0, 0);
					__LIB_40__::func_223(uParam0, 0, 0);
				}
				__LIB_40__::func_309(uParam0, &(uParam0->f_98), 4, 3);
				break;
			case 3:
				if (__LIB_40__::func_302(uParam0, 16) > 1f)
				{
					__LIB_0__::func_620(1);
					if (uParam0->f_411 == 9)
					{
						__LIB_0__::func_229("TAXI_OBJ_RETURN", 7500, 1);
					}
					else
					{
						__LIB_0__::func_229("TAXI_VIP_RETURN", 7500, 1);
					}
					__LIB_40__::func_183(uParam0, 16, 0, 0);
					__LIB_40__::func_223(uParam0, 0, 0);
				}
				break;
			case 65:
				if (uParam0->f_115)
				{
					StringConCat(&Var0, "_aggro2", 24);
				}
				else
				{
					StringConCat(&Var0, "_aggro", 24);
				}
				uParam0->f_107++;
				if (uParam0->f_411 != 9)
				{
					__LIB_40__::func_296(uParam0, &Var0, 0, 1, 8);
				}
				else if (!PED::IS_PED_INJURED(uParam0->f_3))
				{
					__LIB_0__::func_709(uParam0->f_3, "TAXI_WHAT_THE_HELL", uParam0->f_145, 4);
				}
				break;
		}
	}
	else if ((__LIB_40__::func_302(uParam0, 16) > __LIB_0__::func_373(uParam0->f_411 == 0, 1f, 4f) && !uParam0->f_142) && (((uParam0->f_411 == 0 || uParam0->f_411 == 1) && !__LIB_0__::func_75()) || (uParam0->f_411 != 0 && uParam0->f_411 != 1)))
	{
		StringCopy(&Var0, uParam0->f_143, 24);
		switch (__LIB_40__::func_128(uParam0))
		{
			case 142:
				if (uParam0->f_115)
				{
					StringConCat(&Var0, "_noDri2", 24);
				}
				else
				{
					StringConCat(&Var0, "_noDri1", 24);
				}
				__LIB_40__::func_296(uParam0, &Var0, 1, 0, 8);
				break;
			case 56:
				StringConCat(&Var0, "_lvMe2", 24);
				cVar1 = { Var0 };
				__LIB_40__::func_200(&(uParam0->f_93), 3, &cVar1, 0, 1, 0);
				__LIB_14__::func_535(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar1, 8, 0, 0);
				__LIB_40__::func_183(uParam0, 16, 0, 0);
				__LIB_40__::func_216(4, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				__LIB_40__::func_223(uParam0, 0, 0);
				break;
			case 0:
				if (uParam0->f_411 == 9)
				{
					__LIB_2__::func_859(&(uParam0->f_244), "OJTXAUD", "OJTX_PRO_CON", 8, 0, 0, 0);
				}
				__LIB_40__::func_294(uParam0, 1, 1, 0, 0);
				break;
			case 1:
				__LIB_40__::func_183(uParam0, 16, 0, 0);
				__LIB_40__::func_294(uParam0, 4, 0, 0, 0);
				break;
			case 4:
				StringConCat(&Var0, "_hail1", 24);
				cVar1 = { Var0 };
				if (!__LIB_0__::func_703(uParam0->f_44, 128))
				{
					if ((uParam0->f_411 == 0 || uParam0->f_411 == 1) || uParam0->f_411 == 4)
					{
						__LIB_40__::func_200(&(uParam0->f_99), 4, &cVar1, 0, 1, 0);
						__LIB_14__::func_535(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar1, 8, 0, 0);
					}
					else
					{
						__LIB_40__::func_296(uParam0, &Var0, 0, 0, 8);
					}
				}
				__LIB_40__::func_183(uParam0, 16, 4f, 0);
				uParam0->f_141 = 1;
				__LIB_40__::func_183(uParam0, 16, 0, 0);
				__LIB_40__::func_223(uParam0, 0, 0);
				break;
			case 5:
				if (uParam0->f_411 == 7)
				{
					__LIB_0__::func_229("TAXI_OBJ_GPCKUP", 7500, 1);
				}
				else
				{
					__LIB_0__::func_229("TAXI_OBJ_PICKUP", 7500, 1);
				}
				uParam0->f_141 = 1;
				__LIB_40__::func_183(uParam0, 16, 0, 0);
				__LIB_40__::func_223(uParam0, 0, 0);
				break;
			case 8:
				StringConCat(&Var0, "_obj1", 24);
				__LIB_40__::func_296(uParam0, &Var0, 0, 0, 8);
				if (uParam0->f_411 != 7 && uParam0->f_411 != 4)
				{
					if (!HUD::DOES_BLIP_EXIST(uParam0->f_9))
					{
						uParam0->f_9 = __LIB_0__::func_488(uParam0->f_17, 1);
					}
					else if (HUD::GET_BLIP_ALPHA(uParam0->f_9) == 0)
					{
						HUD::SET_BLIP_ALPHA(uParam0->f_9, 255);
						HUD::SET_BLIP_COORDS(uParam0->f_9, uParam0->f_17);
						HUD::SET_BLIP_ROUTE(uParam0->f_9, true);
					}
				}
				__LIB_40__::func_294(uParam0, 10, 1, 0, 0);
				uParam0->f_417 = 10;
				break;
			case 9:
				if ((uParam0->f_101 == 1 || uParam0->f_411 == 2) || uParam0->f_411 == 0)
				{
					StringConCat(&Var0, "_gret1", 24);
				}
				else
				{
					switch (uParam0->f_102)
					{
						case 1:
							StringConCat(&Var0, "_gret1", 24);
							break;
						case 0:
							StringConCat(&Var0, "_gret2", 24);
							break;
						case 2:
							StringConCat(&Var0, "_gret3", 24);
							break;
						default:
							StringConCat(&Var0, "_gret4", 24);
							break;
						}
				}
				__LIB_40__::func_131(&Var0);
				if (uParam0->f_411 != 9)
				{
					__LIB_40__::func_296(uParam0, &Var0, 0, 0, 8);
				}
				else
				{
					__LIB_0__::func_709(uParam0->f_3, "TAXI_START", uParam0->f_145, 4);
				}
				if (uParam0->f_411 != 7 && uParam0->f_411 != 4)
				{
					if (!HUD::DOES_BLIP_EXIST(uParam0->f_9))
					{
						uParam0->f_9 = __LIB_0__::func_488(uParam0->f_17, 1);
					}
					else if (HUD::GET_BLIP_ALPHA(uParam0->f_9) == 0)
					{
						HUD::SET_BLIP_ALPHA(uParam0->f_9, 255);
						HUD::SET_BLIP_COORDS(uParam0->f_9, uParam0->f_17);
						HUD::SET_BLIP_ROUTE(uParam0->f_9, true);
					}
				}
				__LIB_40__::func_294(uParam0, 10, 1, 0, 0);
				uParam0->f_417 = 10;
				break;
			case 7:
				StringConCat(&Var0, "_dest2", 24);
				__LIB_40__::func_233(uParam0, 33554432, Var0, "", 1, 8);
				__LIB_40__::func_183(uParam0, 16, 0, 0);
				__LIB_40__::func_294(uParam0, 10, 1, 0, 0);
				uParam0->f_417 = 10;
				break;
			case 10:
				if (!__LIB_0__::func_75())
				{
					__LIB_40__::func_159(uParam0, 0);
					__LIB_40__::func_104(&(uParam0->f_44), 4);
					__LIB_40__::func_183(uParam0, 16, 0, 0);
					__LIB_40__::func_294(uParam0, 13, 0, 0, 0);
				}
				break;
			case 14:
				switch (uParam0->f_102)
				{
					case 0:
						StringConCat(&Var0, "_bant2", 24);
						break;
					case 1:
						StringConCat(&Var0, "_bant1", 24);
						break;
					case 2:
						StringConCat(&Var0, "_bant3", 24);
						break;
					default:
						StringConCat(&Var0, "_bant1", 24);
						break;
				}
				__LIB_40__::func_131(&Var0);
				__LIB_40__::func_214(Var0, uParam1);
				__LIB_40__::func_183(uParam0, 16, 0, 0);
				__LIB_40__::func_183(uParam0, 11, 0, 0);
				__LIB_40__::func_223(uParam0, 0, 0);
				break;
			case 15:
				if (__LIB_40__::func_302(uParam0, 11) > uParam0->f_36)
				{
					if (uParam0->f_411 == 0)
					{
						StringConCat(&Var0, "_ban1", 24);
					}
					else
					{
						StringConCat(&Var0, "_bant1", 24);
						__LIB_40__::func_131(&Var0);
					}
					__LIB_40__::func_214(Var0, uParam1);
					__LIB_40__::func_104(&(uParam0->f_81), 67108864);
					__LIB_40__::func_183(uParam0, 16, 0, 0);
					__LIB_40__::func_183(uParam0, 11, 0, 0);
					__LIB_40__::func_223(uParam0, 0, 0);
				}
				break;
			case 16:
				if (__LIB_40__::func_302(uParam0, 11) > uParam0->f_36)
				{
					if (uParam0->f_411 == 0)
					{
						StringConCat(&Var0, "_ban2", 24);
					}
					else if (uParam0->f_411 == 1)
					{
						StringConCat(&Var0, "_banter", 24);
					}
					else
					{
						StringConCat(&Var0, "_bant2", 24);
						if (uParam0->f_411 != 6)
						{
							__LIB_40__::func_131(&Var0);
						}
					}
					__LIB_40__::func_214(Var0, uParam1);
					__LIB_40__::func_183(uParam0, 11, 0, 0);
					__LIB_40__::func_183(uParam0, 16, 0, 0);
					__LIB_40__::func_223(uParam0, 0, 0);
				}
				break;
			case 17:
				if (uParam0->f_411 == 0)
				{
					StringConCat(&Var0, "_ban3", 24);
				}
				else
				{
					StringConCat(&Var0, "_bant3", 24);
					__LIB_40__::func_131(&Var0);
				}
				__LIB_40__::func_214(Var0, uParam1);
				__LIB_40__::func_183(uParam0, 16, 0, 0);
				__LIB_40__::func_223(uParam0, 0, 0);
				break;
			case 18:
				if (uParam0->f_411 == 0)
				{
					StringConCat(&Var0, "_BAN4", 24);
				}
				else
				{
					StringConCat(&Var0, "_bant4", 24);
				}
				__LIB_40__::func_131(&Var0);
				__LIB_40__::func_214(Var0, uParam1);
				__LIB_40__::func_183(uParam0, 16, 0, 0);
				__LIB_40__::func_223(uParam0, 0, 0);
				break;
			case 19:
				if (uParam0->f_411 == 0)
				{
					StringConCat(&Var0, "_BAN5", 24);
				}
				else
				{
					StringConCat(&Var0, "_bant5", 24);
				}
				__LIB_40__::func_131(&Var0);
				__LIB_40__::func_214(Var0, uParam1);
				__LIB_40__::func_183(uParam0, 16, 0, 0);
				__LIB_40__::func_223(uParam0, 0, 0);
				break;
			case 20:
				StringConCat(&Var0, "_dest2b", 24);
				__LIB_40__::func_131(&Var0);
				__LIB_40__::func_214(Var0, uParam1);
				__LIB_40__::func_183(uParam0, 16, 0, 0);
				__LIB_40__::func_183(uParam0, 11, 0, 0);
				__LIB_40__::func_223(uParam0, 0, 0);
				__LIB_40__::func_104(&(uParam0->f_82), 262144);
				uParam0->f_36 = 20f;
				break;
			case 23:
				StringConCat(&Var0, "_seePt1", 24);
				__LIB_40__::func_296(uParam0, &Var0, 0, 0, 8);
				__LIB_40__::func_294(uParam0, 24, 1, 0, 0);
				break;
			case 24:
				uParam0->f_417 = 24;
				__LIB_40__::func_183(uParam0, 16, 0, 0);
				__LIB_40__::func_223(uParam0, 0, 0);
				break;
			case 90:
				StringConCat(&Var0, "_talk", 24);
				StringIntConCat(&Var0, 1, 24);
				__LIB_40__::func_131(&Var0);
				__LIB_40__::func_296(uParam0, &Var0, 1, 0, 8);
				break;
			case 89:
				switch (uParam0->f_102)
				{
					case 0:
						StringConCat(&Var0, "_deal1", 24);
						break;
					case 1:
						StringConCat(&Var0, "_deal1", 24);
						break;
					default:
						StringConCat(&Var0, "_deal1", 24);
						break;
				}
				__LIB_40__::func_296(uParam0, &Var0, 0, 0, 8);
				break;
			case 91:
				StringConCat(&Var0, "_ig1c", 24);
				__LIB_40__::func_296(uParam0, &Var0, 0, 0, 8);
				break;
			case 27:
				StringConCat(&Var0, "_bTime", 24);
				if (uParam0->f_411 == 2)
				{
					iVar3 = 8;
				}
				else
				{
					iVar3 = 3;
				}
				iVar2 = 0;
				while (iVar2 < iVar3)
				{
					switch (uParam0->f_411)
					{
						case 2:
							switch (iVar2)
							{
								case 3:
								case 5:
								case 6:
								case 7:
									iVar5[iVar2] = 0;
									break;
								default:
									iVar5[iVar2] = 1;
									break;
							}
							break;
						default:
							iVar5[iVar2] = 1;
							break;
					}
					iVar2++;
				}
				if (uParam0->f_411 == 2)
				{
					__LIB_40__::func_199(&(uParam0->f_90), 8, &Var0, &iVar5, 1, 0);
				}
				else
				{
					__LIB_40__::func_199(&(uParam0->f_90), 3, &Var0, &iVar5, 1, 0);
				}
				__LIB_40__::func_214(Var0, uParam1);
				__LIB_40__::func_216(0, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				__LIB_40__::func_183(uParam0, 16, 0, 0);
				__LIB_40__::func_183(uParam0, 6, 0f, 1);
				__LIB_40__::func_223(uParam0, 0, 0);
				break;
			case 26:
				StringConCat(&Var0, "_gTime", 24);
				iVar2 = 0;
				while (iVar2 < 8)
				{
					switch (uParam0->f_411)
					{
						case 2:
							switch (iVar2)
							{
								case 3:
								case 4:
								case 5:
								case 7:
									iVar5[iVar2] = 0;
									break;
								default:
									iVar5[iVar2] = 1;
									break;
							}
							break;
						default:
							iVar5[iVar2] = 1;
							break;
					}
					iVar2++;
				}
				if (uParam0->f_411 == 2)
				{
					__LIB_40__::func_199(&(uParam0->f_89), 8, &Var0, &iVar5, 1, 0);
				}
				else
				{
					__LIB_40__::func_199(&(uParam0->f_89), 3, &Var0, &iVar5, 1, 0);
				}
				__LIB_40__::func_214(Var0, uParam1);
				__LIB_40__::func_216(0, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 1);
				__LIB_40__::func_183(uParam0, 16, 0, 0);
				__LIB_40__::func_183(uParam0, 6, 0f, 1);
				__LIB_40__::func_223(uParam0, 0, 0);
				break;
			case 12:
				__LIB_0__::func_229("TAXI_OBJ_GYB", 3500, 1);
				__LIB_40__::func_183(uParam0, 16, 0, 0);
				__LIB_40__::func_223(uParam0, 0, 0);
				break;
			case 11:
				if (uParam0->f_410 == 12 || uParam0->f_410 == 18)
				{
					__LIB_0__::func_229("TAXI_OBJ_GYN_TG", 7500, 1);
				}
				else if (uParam0->f_410 < 21)
				{
					__LIB_0__::func_229("TAXI_OBJ_GYN", 7500, 1);
				}
				else
				{
					__LIB_0__::func_229("TAXI_OBJ_GYN_GF", 7500, 1);
				}
				uParam0->f_417 = 11;
				uParam0->f_141 = 1;
				__LIB_40__::func_183(uParam0, 16, 0, 0);
				__LIB_40__::func_223(uParam0, 0, 0);
				break;
			case 28:
				switch (uParam0->f_102)
				{
					case 0:
						StringConCat(&Var0, "_dest1A", 24);
						break;
					case 1:
						StringConCat(&Var0, "_dest1B", 24);
						break;
					default:
						StringConCat(&Var0, "_dest1A", 24);
						break;
				}
				__LIB_40__::func_296(uParam0, &Var0, 0, 0, 8);
				__LIB_40__::func_294(uParam0, 29, 1, 0, 0);
				break;
			case 29:
				if (!__LIB_0__::func_703(uParam0->f_98, 268435456))
				{
					__LIB_0__::func_229("TAXI_OBJ_CYI_01", 7500, 1);
					__LIB_40__::func_104(&(uParam0->f_98), 268435456);
				}
				uParam0->f_417 = 29;
				__LIB_40__::func_183(uParam0, 16, 0, 0);
				__LIB_40__::func_223(uParam0, 0, 0);
				break;
			case 30:
				StringConCat(&Var0, "_rCar1", 24);
				__LIB_40__::func_131(&Var0);
				__LIB_40__::func_214(Var0, uParam1);
				uParam0->f_124 = { Var0 };
				__LIB_40__::func_183(uParam0, 16, 0, 0);
				__LIB_40__::func_223(uParam0, 0, 0);
				break;
			case 31:
				StringConCat(&Var0, "_rCar2", 24);
				__LIB_40__::func_131(&Var0);
				__LIB_40__::func_214(Var0, uParam1);
				uParam0->f_124 = { Var0 };
				__LIB_40__::func_183(uParam0, 16, 0, 0);
				__LIB_40__::func_223(uParam0, 0, 0);
				break;
			case 32:
				StringConCat(&Var0, "_rCar3", 24);
				__LIB_40__::func_131(&Var0);
				__LIB_40__::func_214(Var0, uParam1);
				uParam0->f_124 = { Var0 };
				__LIB_40__::func_183(uParam0, 16, 0, 0);
				__LIB_40__::func_223(uParam0, 0, 0);
				break;
			case 33:
				__LIB_0__::func_229("TAXI_OBJ_CYI_02", 7500, 1);
				uParam0->f_417 = 33;
				__LIB_40__::func_183(uParam0, 16, 0, 0);
				__LIB_40__::func_223(uParam0, 0, 0);
				break;
			case 34:
				if (!__LIB_0__::func_703(uParam0->f_82, 8192))
				{
					if (__LIB_40__::func_302(uParam0, 11) > uParam0->f_36)
					{
						StringConCat(&Var0, "_airBr1", 24);
						__LIB_40__::func_131(&Var0);
						if (uParam0->f_411 == 5)
						{
							__LIB_40__::func_214(Var0, uParam1);
						}
						else
						{
							__LIB_40__::func_296(uParam0, &Var0, 0, 0, 8);
						}
						__LIB_40__::func_104(&(uParam0->f_82), 8192);
						__LIB_40__::func_183(uParam0, 16, 0, 0);
						__LIB_40__::func_183(uParam0, 11, 0, 0);
						__LIB_40__::func_223(uParam0, 0, 0);
					}
				}
				break;
			case 35:
				if (!__LIB_0__::func_703(uParam0->f_82, 16384))
				{
					StringConCat(&Var0, "_seeD1", 24);
					__LIB_40__::func_131(&Var0);
					__LIB_40__::func_296(uParam0, &Var0, 0, 0, 8);
					__LIB_40__::func_104(&(uParam0->f_82), 16384);
				}
				break;
			case 36:
				if (!__LIB_0__::func_703(uParam0->f_82, 32768))
				{
					StringConCat(&Var0, "_seeD2", 24);
					__LIB_40__::func_131(&Var0);
					__LIB_40__::func_296(uParam0, &Var0, 0, 0, 8);
					__LIB_40__::func_104(&(uParam0->f_82), 32768);
				}
				break;
			case 37:
				StringConCat(&Var0, "_done1", 24);
				__LIB_40__::func_296(uParam0, &Var0, 0, 0, 8);
				__LIB_40__::func_294(uParam0, 46, 1, 0, 0);
				break;
			case 138:
				if (uParam0->f_101 == 1)
				{
					StringConCat(&Var0, "_ftc1", 24);
				}
				else
				{
					switch (uParam0->f_102)
					{
						case 1:
							StringConCat(&Var0, "_ftc1", 24);
							break;
						case 0:
							StringConCat(&Var0, "_ftc2", 24);
							break;
						case 2:
							StringConCat(&Var0, "_ftc3", 24);
							break;
						default:
							StringConCat(&Var0, "_ftc3", 24);
							break;
						}
				}
				__LIB_40__::func_131(&Var0);
				__LIB_40__::func_296(uParam0, &Var0, 0, 0, 8);
				__LIB_40__::func_294(uParam0, 139, 1, 0, 0);
				uParam0->f_417 = 139;
				__LIB_40__::func_223(uParam0, 0, 0);
				break;
			case 139:
				__LIB_0__::func_229("TAXI_OBJ_FTC2", 7500, 1);
				uParam0->f_417 = 13;
				__LIB_40__::func_294(uParam0, 13, 0, 0, 0);
				break;
			case 38:
				StringConCat(&Var0, "_dOff1", 24);
				cVar1 = { Var0 };
				iVar4 = MISC::GET_RANDOM_INT_IN_RANGE(0, 120);
				if (!__LIB_0__::func_703(uParam0->f_82, 268435456))
				{
					if (iVar4 > 80)
					{
						StringConCat(&cVar1, "_1", 24);
					}
					else if (iVar4 > 40)
					{
						StringConCat(&cVar1, "_2", 24);
					}
					else
					{
						StringConCat(&cVar1, "_3", 24);
					}
					__LIB_40__::func_104(&(uParam0->f_82), 268435456);
				}
				else if (iVar4 > 80)
				{
					StringConCat(&cVar1, "_4", 24);
				}
				else if (iVar4 > 40)
				{
					StringConCat(&cVar1, "_5", 24);
				}
				else
				{
					StringConCat(&cVar1, "_6", 24);
				}
				__LIB_14__::func_535(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar1, 8, 0, 0);
				__LIB_40__::func_183(uParam0, 16, 0, 0);
				__LIB_40__::func_223(uParam0, 0, 0);
				break;
			case 39:
				StringConCat(&Var0, "_bdOff1", 24);
				cVar1 = { Var0 };
				iVar4 = MISC::GET_RANDOM_INT_IN_RANGE(0, 100);
				if (!__LIB_0__::func_703(uParam0->f_82, 268435456))
				{
					if (iVar4 < 50)
					{
						StringConCat(&cVar1, "_1", 24);
					}
					else
					{
						StringConCat(&cVar1, "_2", 24);
					}
					__LIB_40__::func_104(&(uParam0->f_82), 268435456);
				}
				else if (iVar4 < 50)
				{
					StringConCat(&cVar1, "_3", 24);
				}
				else
				{
					StringConCat(&cVar1, "_4", 24);
				}
				__LIB_14__::func_535(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar1, 8, 0, 0);
				__LIB_40__::func_183(uParam0, 16, 0, 0);
				__LIB_40__::func_223(uParam0, 0, 0);
				break;
			case 41:
				StringConCat(&Var0, "_dr2P", 24);
				__LIB_40__::func_296(uParam0, &Var0, 0, 0, 8);
				__LIB_40__::func_183(uParam0, 16, 0, 0);
				__LIB_40__::func_223(uParam0, 0, 0);
				break;
			case 42:
				StringConCat(&Var0, "_dr2N", 24);
				__LIB_40__::func_296(uParam0, &Var0, 0, 0, 8);
				__LIB_40__::func_183(uParam0, 16, 0, 0);
				__LIB_40__::func_223(uParam0, 0, 0);
				break;
			case 40:
				StringConCat(&Var0, "_dOff2", 24);
				__LIB_40__::func_296(uParam0, &Var0, 0, 0, 8);
				__LIB_40__::func_294(uParam0, 44, 1, 0, 0);
				break;
			case 44:
				__LIB_0__::func_229("TAXI_OBJ_CC2", 7500, 1);
				uParam0->f_417 = 44;
				__LIB_40__::func_223(uParam0, 0, 0);
				__LIB_40__::func_294(uParam0, 97, 1, 0, 0);
				break;
			case 43:
				StringConCat(&Var0, "_dOff3", 24);
				__LIB_40__::func_296(uParam0, &Var0, 0, 0, 8);
				__LIB_40__::func_294(uParam0, 45, 1, 0, 0);
				break;
			case 45:
				if (!__LIB_0__::func_75())
				{
					__LIB_0__::func_229("TAXI_OBJ_CC3", 7500, 1);
					uParam0->f_417 = 45;
					__LIB_40__::func_223(uParam0, 0, 0);
					__LIB_40__::func_294(uParam0, 98, 1, 0, 0);
				}
				break;
			case 46:
				__LIB_0__::func_229("TAXI_OBJ_FTC3", 7500, 1);
				uParam0->f_417 = 46;
				__LIB_40__::func_223(uParam0, 0, 0);
				break;
			case 21:
				if (!__LIB_0__::func_703(uParam0->f_81, 1))
				{
					__LIB_40__::func_232(uParam0, 1, Var0, "_sick1", 8);
					__LIB_40__::func_175(&(uParam0->f_81), 2);
				}
				else if (!__LIB_0__::func_703(uParam0->f_81, 2))
				{
					__LIB_40__::func_232(uParam0, 2, Var0, "_sick2", 8);
					__LIB_40__::func_175(&(uParam0->f_81), 1);
				}
				__LIB_40__::func_216(12, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				__LIB_40__::func_223(uParam0, 0, 0);
				break;
			case 22:
				if (!__LIB_0__::func_703(uParam0->f_82, 2097152))
				{
					StringConCat(&Var0, "_nopke1", 24);
				}
				else if (!__LIB_0__::func_703(uParam0->f_82, 4194304))
				{
					StringConCat(&Var0, "_nopke2", 24);
				}
				__LIB_40__::func_104(&(uParam0->f_81), 2097152);
				__LIB_40__::func_296(uParam0, &Var0, 0, 0, 8);
				__LIB_40__::func_183(uParam0, 16, 0, 0);
				__LIB_40__::func_216(17, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 1);
				__LIB_40__::func_223(uParam0, 0, 0);
				break;
			case 61:
				StringConCat(&Var0, "_Puke1", 24);
				__LIB_40__::func_296(uParam0, &Var0, 0, 0, 8);
				__LIB_40__::func_216(18, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				break;
			case 63:
				StringConCat(&Var0, "_PkStp2", 24);
				__LIB_40__::func_296(uParam0, &Var0, 0, 0, 8);
				__LIB_40__::func_216(20, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				__LIB_40__::func_183(uParam0, 16, 0, 0);
				__LIB_40__::func_223(uParam0, 0, 0);
				break;
			case 62:
				StringConCat(&Var0, "_PkStp1", 24);
				__LIB_40__::func_296(uParam0, &Var0, 0, 0, 8);
				__LIB_40__::func_216(19, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				break;
			case 64:
				StringConCat(&Var0, "_PukeR1", 24);
				__LIB_40__::func_131(&Var0);
				__LIB_40__::func_296(uParam0, &Var0, 0, 0, 8);
				break;
			case 71:
				if (!__LIB_0__::func_703(uParam0->f_81, 4))
				{
					__LIB_40__::func_232(uParam0, 4, Var0, "_turns1", 8);
				}
				else if (!__LIB_0__::func_703(uParam0->f_81, 8))
				{
					__LIB_40__::func_232(uParam0, 8, Var0, "_turns2", 8);
				}
				else
				{
					__LIB_40__::func_232(uParam0, 8, Var0, "_turns3", 8);
					__LIB_40__::func_175(&(uParam0->f_81), 4);
					__LIB_40__::func_175(&(uParam0->f_81), 8);
				}
				__LIB_40__::func_216(13, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				__LIB_40__::func_223(uParam0, 0, 0);
				break;
			case 72:
				if (__LIB_40__::func_157(uParam0))
				{
					__LIB_40__::func_215(uParam0, Var0, __LIB_40__::func_161(uParam0, 72));
				}
				else if (uParam0->f_411 == 9)
				{
					if (!PED::IS_PED_INJURED(uParam0->f_3))
					{
						__LIB_0__::func_709(uParam0->f_3, "CRASH_GENERIC", uParam0->f_145, 4);
					}
				}
				else if (uParam0->f_411 == 1)
				{
					StringConCat(&Var0, "_carHt", 24);
					cVar1 = { Var0 };
					__LIB_40__::func_200(&(uParam0->f_95), 5, &cVar1, 1, 0, 1);
					__LIB_2__::func_859(&(uParam0->f_244), uParam0->f_144, &cVar1, 8, 0, 0, 0);
				}
				else
				{
					StringConCat(&Var0, "_carHt1", 24);
					cVar1 = { Var0 };
					if (uParam0->f_411 == 0)
					{
						__LIB_40__::func_200(&(uParam0->f_95), 8, &cVar1, 1, 1, 0);
					}
					else
					{
						__LIB_40__::func_200(&(uParam0->f_95), 5, &cVar1, 1, 1, 0);
					}
					__LIB_14__::func_535(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar1, 8, 0, 0);
				}
				__LIB_40__::func_216(2, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), cVar1, 0);
				__LIB_40__::func_183(uParam0, 16, 0, 0);
				__LIB_40__::func_223(uParam0, 0, 0);
				break;
			case 73:
				StringConCat(&Var0, "_genPnHi", 24);
				__LIB_40__::func_296(uParam0, &Var0, 0, 0, 8);
				break;
			case 75:
				if (!__LIB_0__::func_703(uParam0->f_83, 128))
				{
					StringConCat(&Var0, "_nMiss1", 24);
					__LIB_2__::func_859(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					__LIB_40__::func_104(&(uParam0->f_83), 128);
					__LIB_40__::func_175(&(uParam0->f_83), 256);
					__LIB_40__::func_183(uParam0, 16, 0, 0);
				}
				else if (!__LIB_0__::func_703(uParam0->f_83, 256))
				{
					StringConCat(&Var0, "_nMiss2", 24);
					__LIB_2__::func_859(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					__LIB_40__::func_104(&(uParam0->f_83), 256);
					__LIB_40__::func_175(&(uParam0->f_83), 512);
					__LIB_40__::func_183(uParam0, 16, 0, 0);
				}
				else if (!__LIB_0__::func_703(uParam0->f_83, 512))
				{
					StringConCat(&Var0, "_nMiss3", 24);
					__LIB_2__::func_859(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					__LIB_40__::func_104(&(uParam0->f_83), 512);
					__LIB_40__::func_175(&(uParam0->f_83), 128);
					__LIB_40__::func_183(uParam0, 16, 0, 0);
				}
				__LIB_40__::func_223(uParam0, 0, 0);
				break;
			case 76:
				if (uParam0->f_411 == 1 || uParam0->f_411 == 0)
				{
					bVar6 = true;
				}
				if (!__LIB_0__::func_703(uParam0->f_83, 1))
				{
					StringConCat(&Var0, "_air1", 24);
					if (bVar6)
					{
						__LIB_40__::func_131(&Var0);
					}
					__LIB_2__::func_859(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					__LIB_40__::func_104(&(uParam0->f_83), 1);
					__LIB_40__::func_175(&(uParam0->f_83), 2);
					__LIB_40__::func_183(uParam0, 16, 0, 0);
				}
				else if (!__LIB_0__::func_703(uParam0->f_83, 2))
				{
					StringConCat(&Var0, "_air2", 24);
					if (bVar6)
					{
						__LIB_40__::func_131(&Var0);
					}
					__LIB_2__::func_859(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					__LIB_40__::func_104(&(uParam0->f_83), 2);
					if (uParam0->f_411 == 0)
					{
						__LIB_40__::func_175(&(uParam0->f_83), 4);
					}
					else
					{
						__LIB_40__::func_175(&(uParam0->f_83), 1);
					}
					__LIB_40__::func_183(uParam0, 16, 0, 0);
				}
				else if (!__LIB_0__::func_703(uParam0->f_83, 4))
				{
					StringConCat(&Var0, "_air3", 24);
					if (bVar6)
					{
						__LIB_40__::func_131(&Var0);
					}
					__LIB_2__::func_859(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					__LIB_40__::func_104(&(uParam0->f_83), 4);
					__LIB_40__::func_175(&(uParam0->f_83), 1);
					__LIB_40__::func_183(uParam0, 16, 0, 0);
				}
				__LIB_40__::func_216(11, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				__LIB_40__::func_223(uParam0, 0, 0);
				break;
			case 79:
				if (uParam0->f_411 == 1 || uParam0->f_411 == 0)
				{
					bVar6 = true;
				}
				if (!__LIB_0__::func_703(uParam0->f_81, 4096))
				{
					__LIB_40__::func_233(uParam0, 4096, Var0, "_sideW1", bVar6, 8);
				}
				else if (!__LIB_0__::func_703(uParam0->f_81, 8192))
				{
					__LIB_40__::func_233(uParam0, 8192, Var0, "_sideW2", bVar6, 8);
				}
				__LIB_40__::func_216(15, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				__LIB_40__::func_223(uParam0, 0, 0);
				break;
			case 80:
				if (uParam0->f_411 == 1 || uParam0->f_411 == 0)
				{
					bVar6 = true;
				}
				if (!__LIB_0__::func_703(uParam0->f_81, 16384))
				{
					__LIB_40__::func_233(uParam0, 16384, Var0, "_opLne1", bVar6, 8);
				}
				else if (!__LIB_0__::func_703(uParam0->f_81, 32768))
				{
					__LIB_40__::func_233(uParam0, 32768, Var0, "_opLne2", bVar6, 8);
				}
				__LIB_40__::func_216(14, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				__LIB_40__::func_223(uParam0, 0, 0);
				break;
			case 83:
				if (uParam0->f_411 == 0)
				{
					if (!__LIB_0__::func_703(uParam0->f_82, 8))
					{
						__LIB_40__::func_231(uParam0, 8, Var0, "_bored1", 8, 0);
					}
					else if (!__LIB_0__::func_703(uParam0->f_82, 16))
					{
						__LIB_40__::func_231(uParam0, 16, Var0, "_bored2", 8, 0);
					}
					else if (!__LIB_0__::func_703(uParam0->f_82, 32))
					{
						__LIB_40__::func_231(uParam0, 32, Var0, "_bored3", 8, 0);
					}
					__LIB_40__::func_216(9, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
					__LIB_40__::func_223(uParam0, 0, 0);
				}
				if (uParam0->f_411 == 1)
				{
					StringConCat(&Var0, "_good1", 24);
					cVar1 = { Var0 };
					__LIB_40__::func_200(&(uParam0->f_93), 6, &cVar1, 0, 1, 0);
					__LIB_14__::func_535(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar1, 8, 0, 0);
					__LIB_40__::func_216(9, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
					__LIB_40__::func_183(uParam0, 16, 0, 0);
					__LIB_40__::func_223(uParam0, 0, 0);
				}
				break;
			case 92:
				StringConCat(&Var0, "_EtoB1", 24);
				cVar1 = { Var0 };
				__LIB_40__::func_200(&(uParam0->f_96), 2, &cVar1, 0, 1, 0);
				__LIB_14__::func_535(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar1, 8, 0, 0);
				__LIB_40__::func_216(9, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				__LIB_40__::func_183(uParam0, 16, 0, 0);
				__LIB_40__::func_223(uParam0, 0, 0);
				break;
			case 93:
				StringConCat(&Var0, "_BtoE1", 24);
				cVar1 = { Var0 };
				__LIB_40__::func_200(&(uParam0->f_97), 2, &cVar1, 0, 1, 0);
				__LIB_14__::func_535(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar1, 8, 0, 0);
				__LIB_40__::func_216(12, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				__LIB_40__::func_183(uParam0, 16, 0, 0);
				__LIB_40__::func_223(uParam0, 0, 0);
				break;
			case 81:
				if (!__LIB_0__::func_703(uParam0->f_81, 65536))
				{
					__LIB_40__::func_233(uParam0, 65536, Var0, "_runLit1", 1, 8);
				}
				else if (!__LIB_0__::func_703(uParam0->f_81, 131072))
				{
					__LIB_40__::func_233(uParam0, 131072, Var0, "_runLit2", 1, 8);
				}
				__LIB_40__::func_223(uParam0, 0, 0);
				break;
			case 82:
				if (__LIB_40__::func_157(uParam0))
				{
					__LIB_40__::func_215(uParam0, Var0, __LIB_40__::func_161(uParam0, 82));
				}
				else if (uParam0->f_411 == 9)
				{
					if (!PED::IS_PED_INJURED(uParam0->f_3))
					{
						__LIB_0__::func_709(uParam0->f_3, "CAR_HIT_PED_DRIVEN", uParam0->f_145, 4);
					}
				}
				else if (!__LIB_0__::func_703(uParam0->f_83, 8))
				{
					StringConCat(&Var0, "_hitR1", 24);
					__LIB_40__::func_131(&Var0);
					__LIB_2__::func_859(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					__LIB_40__::func_104(&(uParam0->f_83), 8);
					__LIB_40__::func_175(&(uParam0->f_83), 16);
					__LIB_40__::func_183(uParam0, 16, 0, 0);
				}
				else if (!__LIB_0__::func_703(uParam0->f_83, 16))
				{
					StringConCat(&Var0, "_hitR2", 24);
					__LIB_40__::func_131(&Var0);
					__LIB_2__::func_859(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					__LIB_40__::func_104(&(uParam0->f_83), 16);
					__LIB_40__::func_175(&(uParam0->f_83), 32);
					__LIB_40__::func_183(uParam0, 16, 0, 0);
				}
				else if (!__LIB_0__::func_703(uParam0->f_83, 32))
				{
					StringConCat(&Var0, "_hitR3", 24);
					__LIB_40__::func_131(&Var0);
					__LIB_2__::func_859(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					__LIB_40__::func_104(&(uParam0->f_83), 32);
					if (uParam0->f_411 == 0)
					{
						__LIB_40__::func_175(&(uParam0->f_83), 64);
					}
					else
					{
						__LIB_40__::func_175(&(uParam0->f_83), 8);
					}
					__LIB_40__::func_183(uParam0, 16, 0, 0);
				}
				else if (!__LIB_0__::func_703(uParam0->f_83, 64))
				{
					StringConCat(&Var0, "_hitR4", 24);
					__LIB_40__::func_131(&Var0);
					__LIB_2__::func_859(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					__LIB_40__::func_104(&(uParam0->f_83), 64);
					__LIB_40__::func_175(&(uParam0->f_83), 8);
					__LIB_40__::func_183(uParam0, 16, 0, 0);
				}
				__LIB_40__::func_216(1, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				__LIB_40__::func_223(uParam0, 0, 0);
				break;
			case 65:
				if (!__LIB_0__::func_75())
				{
					if (uParam0->f_115)
					{
						StringConCat(&Var0, "_aggro2", 24);
					}
					else
					{
						StringConCat(&Var0, "_aggro", 24);
					}
					__LIB_40__::func_296(uParam0, &Var0, 0, 1, 8);
				}
				else
				{
					__LIB_40__::func_215(uParam0, Var0, __LIB_40__::func_161(uParam0, 65));
					__LIB_40__::func_223(uParam0, 0, 0);
				}
				uParam0->f_107++;
				break;
			case 66:
				if (!__LIB_0__::func_75())
				{
					if (uParam0->f_411 == 4)
					{
						StringCopy(&Var0, "tm6_shoot", 24);
					}
					else if (uParam0->f_115)
					{
						StringConCat(&Var0, "_shootlz", 24);
					}
					else
					{
						StringConCat(&Var0, "_shoot", 24);
					}
					__LIB_40__::func_296(uParam0, &Var0, 0, 1, 8);
				}
				else
				{
					__LIB_40__::func_215(uParam0, Var0, __LIB_40__::func_161(uParam0, 66));
					__LIB_40__::func_223(uParam0, 0, 0);
				}
				uParam0->f_107++;
				break;
			case 13:
				if (uParam0->f_411 == 8)
				{
					if (!uParam0->f_109 && !__LIB_0__::func_75())
					{
						switch (uParam0->f_414)
						{
							case 3:
								StringConCat(&Var0, "_warnC1", 24);
								__LIB_40__::func_296(uParam0, &Var0, 0, 0, 8);
								break;
							case 6:
								StringConCat(&Var0, "_warnF1", 24);
								__LIB_40__::func_296(uParam0, &Var0, 0, 0, 8);
								break;
							case 1:
								StringConCat(&Var0, "_far1", 24);
								__LIB_40__::func_296(uParam0, &Var0, 0, 0, 8);
								__LIB_40__::func_216(21, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
								break;
							case 2:
								StringConCat(&Var0, "_close1", 24);
								__LIB_40__::func_296(uParam0, &Var0, 0, 0, 8);
								__LIB_40__::func_216(22, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
								break;
							case 10:
								StringConCat(&Var0, "_hit1", 24);
								__LIB_40__::func_296(uParam0, &Var0, 0, 0, 8);
								break;
							case 8:
								StringConCat(&Var0, "_good1", 24);
								cVar1 = { Var0 };
								__LIB_40__::func_200(&(uParam0->f_93), 6, &cVar1, 1, 1, 0);
								__LIB_14__::func_535(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar1, 8, 0, 0);
								__LIB_40__::func_216(23, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), cVar1, 0);
								__LIB_40__::func_183(uParam0, 16, 0, 0);
								__LIB_40__::func_223(uParam0, 0, 0);
								break;
							case 9:
								if (!iLocal_58)
								{
									StringConCat(&Var0, "_sBant1", 24);
									cVar1 = { Var0 };
									__LIB_40__::func_296(uParam0, &Var0, 0, 0, 8);
									__LIB_40__::func_183(uParam0, 16, 0, 0);
									__LIB_40__::func_183(uParam0, 11, 0, 0);
									__LIB_40__::func_223(uParam0, 0, 0);
									if (!iLocal_60)
									{
										iLocal_58 = 1;
									}
								}
								else
								{
									if (!iLocal_59)
									{
										StringConCat(&Var0, "_bant3", 24);
										iLocal_59 = 1;
									}
									else
									{
										StringConCat(&Var0, "_bant2", 24);
										iLocal_60 = 1;
									}
									__LIB_40__::func_131(&Var0);
									__LIB_40__::func_296(uParam0, &Var0, 0, 0, 8);
									__LIB_40__::func_183(uParam0, 16, 0, 0);
									__LIB_40__::func_183(uParam0, 11, 0, 0);
									__LIB_40__::func_223(uParam0, 0, 0);
									iLocal_58 = 0;
								}
								break;
							case 7:
								StringConCat(&Var0, "_done1", 24);
								__LIB_40__::func_296(uParam0, &Var0, 0, 0, 8);
								break;
						}
						__LIB_40__::func_294(uParam0, 143, 0, 0, 0);
					}
				}
				break;
			case 78:
				StringConCat(&Var0, "_speed1", 24);
				cVar1 = { Var0 };
				__LIB_40__::func_200(&(uParam0->f_87), 6, &cVar1, 1, 1, 0);
				__LIB_14__::func_535(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar1, 8, 0, 0);
				__LIB_40__::func_216(10, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				__LIB_40__::func_183(uParam0, 16, 0, 0);
				__LIB_40__::func_223(uParam0, 0, 0);
				break;
			case 25:
				if (!__LIB_0__::func_703(uParam0->f_82, 1))
				{
					__LIB_40__::func_231(uParam0, 1, Var0, "_close1", 8, 0);
				}
				else if (!__LIB_0__::func_703(uParam0->f_82, 2))
				{
					__LIB_40__::func_231(uParam0, 2, Var0, "_close2", 8, 0);
				}
				else if (!__LIB_0__::func_703(uParam0->f_82, 4))
				{
					__LIB_40__::func_231(uParam0, 4, Var0, "_close3", 8, 0);
				}
				__LIB_40__::func_223(uParam0, 0, 0);
				break;
			case 48:
				if (uParam0->f_115)
				{
					StringConCat(&Var0, "_stop2", 24);
				}
				else
				{
					StringConCat(&Var0, "_stop1", 24);
				}
				cVar1 = { Var0 };
				__LIB_40__::func_200(&(uParam0->f_86), 4, &cVar1, 0, 1, 0);
				if (uParam0->f_411 != 9)
				{
					__LIB_14__::func_535(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar1, 8, 0, 0);
				}
				else if (!PED::IS_PED_INJURED(uParam0->f_3))
				{
					__LIB_0__::func_709(uParam0->f_3, "TAXI_STOPPED", uParam0->f_145, 4);
				}
				__LIB_40__::func_183(uParam0, 16, 0, 0);
				__LIB_40__::func_216(5, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				__LIB_40__::func_223(uParam0, 0, 0);
				break;
			case 74:
				if (__LIB_40__::func_157(uParam0))
				{
					__LIB_40__::func_215(uParam0, Var0, __LIB_40__::func_161(uParam0, 74));
				}
				else if (uParam0->f_411 == 9)
				{
					if (!PED::IS_PED_INJURED(uParam0->f_3))
					{
						__LIB_0__::func_709(uParam0->f_3, "VEHICLE_FLIPPED", uParam0->f_145, 4);
					}
				}
				else
				{
					StringConCat(&Var0, "_roll1", 24);
					__LIB_40__::func_230(uParam0, Var0, 8);
				}
				__LIB_40__::func_216(3, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				__LIB_40__::func_183(uParam0, 16, 0, 0);
				__LIB_40__::func_223(uParam0, 0, 0);
				break;
			case 70:
				if (!__LIB_0__::func_703(uParam0->f_83, 1024))
				{
					__LIB_40__::func_104(&(uParam0->f_83), 1024);
					__LIB_40__::func_183(uParam0, 16, 0, 0);
					StringConCat(&Var0, "_swrv1", 24);
					__LIB_40__::func_131(&Var0);
					__LIB_2__::func_859(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
				}
				else if (!__LIB_0__::func_703(uParam0->f_83, 2048))
				{
					__LIB_40__::func_104(&(uParam0->f_83), 2048);
					__LIB_40__::func_183(uParam0, 16, 0, 0);
					StringConCat(&Var0, "_swrv2", 24);
					__LIB_40__::func_131(&Var0);
					__LIB_2__::func_859(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
				}
				else if (!__LIB_0__::func_703(uParam0->f_83, 4096))
				{
					__LIB_40__::func_104(&(uParam0->f_83), 4096);
					__LIB_40__::func_183(uParam0, 16, 0, 0);
					StringConCat(&Var0, "_swrv3", 24);
					__LIB_40__::func_131(&Var0);
					__LIB_2__::func_859(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
				}
				__LIB_40__::func_223(uParam0, 0, 0);
				break;
			case 69:
				if (!__LIB_0__::func_703(uParam0->f_82, 1024))
				{
					__LIB_40__::func_231(uParam0, 1024, Var0, "_rvrs1", 8, 1);
					__LIB_40__::func_175(&(uParam0->f_82), 2048);
				}
				else if (!__LIB_0__::func_703(uParam0->f_82, 2048))
				{
					__LIB_40__::func_231(uParam0, 2048, Var0, "_rvrs2", 8, 1);
				}
				__LIB_40__::func_223(uParam0, 0, 0);
				break;
			case 67:
				StringConCat(&Var0, "_ofrd1", 24);
				cVar1 = { Var0 };
				__LIB_40__::func_200(&(uParam0->f_88), 4, &cVar1, 0, 1, 0);
				__LIB_14__::func_535(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar1, 8, 0, 0);
				__LIB_40__::func_216(16, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), cVar1, 0);
				__LIB_40__::func_183(uParam0, 16, 0, 0);
				__LIB_40__::func_223(uParam0, 0, 0);
				break;
			case 68:
				StringConCat(&Var0, "_ofrdch1", 24);
				__LIB_2__::func_859(&(uParam0->f_244), uParam0->f_144, &Var0, 9, 0, 0, 0);
				__LIB_40__::func_183(uParam0, 16, 0, 0);
				__LIB_40__::func_223(uParam0, 0, 0);
				break;
			case 49:
				StringConCat(&Var0, "_losPol1", 24);
				__LIB_40__::func_296(uParam0, &Var0, 0, 0, 8);
				__LIB_40__::func_294(uParam0, 52, 1, 0, 0);
				break;
			case 50:
				if (uParam0->f_115)
				{
					StringConCat(&Var0, "_lsPo2", 24);
				}
				else
				{
					StringConCat(&Var0, "_lsPo1", 24);
				}
				if (uParam0->f_411 != 9)
				{
					__LIB_40__::func_296(uParam0, &Var0, 0, 0, 8);
				}
				else if (!PED::IS_PED_INJURED(uParam0->f_3))
				{
					__LIB_0__::func_709(uParam0->f_3, "POLICE_PURSUIT_DRIVEN", uParam0->f_145, 4);
				}
				__LIB_40__::func_183(uParam0, 16, 0, 0);
				__LIB_40__::func_223(uParam0, 0, 0);
				break;
			case 51:
				if (__LIB_40__::func_157(uParam0))
				{
					if (uParam0->f_411 == 2)
					{
						StringConCat(&Var0, "_copBa1", 24);
						cVar1 = { Var0 };
						cVar1 = { Var0 };
						__LIB_40__::func_296(uParam0, &Var0, 0, 0, 8);
						__LIB_40__::func_294(uParam0, 52, 1, 0, 0);
						__LIB_40__::func_183(uParam0, 16, 0, 0);
					}
					else
					{
						if (uParam0->f_411 == 5 && uParam0->f_410 > 9)
						{
							StringConCat(&Var0, "_copBa2", 24);
						}
						else
						{
							StringConCat(&Var0, "_copBa1", 24);
						}
						cVar1 = { Var0 };
						__LIB_40__::func_296(uParam0, &Var0, 0, 0, 8);
						__LIB_40__::func_183(uParam0, 16, 0, 0);
					}
				}
				else
				{
					StringConCat(&Var0, "_copBa1", 24);
					cVar1 = { Var0 };
					__LIB_40__::func_200(&(uParam0->f_85), 6, &cVar1, 1, 1, 0);
					__LIB_14__::func_535(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar1, 8, 0, 0);
					__LIB_40__::func_183(uParam0, 16, 0, 0);
					__LIB_40__::func_223(uParam0, 0, 0);
				}
				break;
			case 53:
				StringConCat(&Var0, "_evdeP1", 24);
				__LIB_40__::func_216(8, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				__LIB_40__::func_296(uParam0, &Var0, 0, 0, 8);
				__LIB_40__::func_183(uParam0, 10, 0f, 1);
				break;
			case 52:
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX()) >= 1)
				{
					__LIB_0__::func_229("TAXI_OBJ_POL", 7500, 1);
					uParam0->f_417 = 52;
				}
				__LIB_40__::func_223(uParam0, 0, 0);
				break;
			case 54:
				StringConCat(&Var0, "_cpFz1", 24);
				__LIB_40__::func_131(&Var0);
				__LIB_40__::func_296(uParam0, &Var0, 0, 0, 8);
				break;
			case 84:
				if (!__LIB_0__::func_703(uParam0->f_81, 262144))
				{
					__LIB_40__::func_233(uParam0, 262144, Var0, "_rdCh1", 1, 8);
				}
				else if (!__LIB_0__::func_703(uParam0->f_81, 1048576))
				{
					if (uParam0->f_411 == 0 || uParam0->f_411 == 1)
					{
						__LIB_40__::func_233(uParam0, 1048576, Var0, "_rdCh2", 1, 8);
					}
					else
					{
						__LIB_40__::func_233(uParam0, 1048576, Var0, "_rdCh2", 0, 8);
					}
				}
				__LIB_40__::func_216(7, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				__LIB_40__::func_223(uParam0, 0, 0);
				break;
			case 85:
				if (!__LIB_0__::func_703(uParam0->f_82, 67108864))
				{
					if (uParam0->f_418.f_6)
					{
						__LIB_40__::func_229(uParam0, 67108864, Var0, "_rdLk1", 1, 7);
					}
				}
				else if (!__LIB_0__::func_703(uParam0->f_82, 134217728))
				{
					__LIB_40__::func_229(uParam0, 134217728, Var0, "_rdFv1", 0, 7);
				}
				__LIB_40__::func_216(6, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				__LIB_40__::func_223(uParam0, 0, 0);
				break;
			case 86:
				StringConCat(&Var0, "_rdneu1", 24);
				__LIB_40__::func_296(uParam0, &Var0, 0, 0, 8);
				break;
			case 87:
				StringConCat(&Var0, "_rdtip1", 24);
				cVar1 = { Var0 };
				StringConCat(&cVar1, "_", 24);
				StringIntConCat(&cVar1, uParam0->f_418.f_3, 24);
				__LIB_14__::func_535(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar1, 8, 0, 0);
				__LIB_40__::func_183(uParam0, 16, 0, 0);
				__LIB_40__::func_223(uParam0, 0, 0);
				break;
			case 100:
				__LIB_0__::func_229("TAXI_OBJ_GYB_2", 7500, 1);
				uParam0->f_417 = 100;
				__LIB_40__::func_223(uParam0, 0, 0);
				break;
			case 47:
				if (uParam0->f_411 == 1)
				{
					StringConCat(&Var0, "_horn", 24);
					__LIB_40__::func_296(uParam0, &Var0, 0, 0, 8);
				}
				break;
			case 101:
				StringConCat(&Var0, "_thank1", 24);
				if ((uParam0->f_411 == 1 || uParam0->f_411 == 5) || uParam0->f_411 == 0)
				{
					__LIB_40__::func_131(&Var0);
				}
				__LIB_40__::func_104(&(uParam0->f_81), 2097152);
				if (uParam0->f_411 != 9)
				{
					__LIB_40__::func_296(uParam0, &Var0, 0, 0, 8);
				}
				break;
			case 102:
				StringConCat(&Var0, "_thank2", 24);
				if ((uParam0->f_411 == 1 || uParam0->f_411 == 5) || uParam0->f_411 == 0)
				{
					__LIB_40__::func_131(&Var0);
				}
				__LIB_40__::func_104(&(uParam0->f_81), 2097152);
				if (uParam0->f_411 != 9)
				{
					__LIB_40__::func_296(uParam0, &Var0, 0, 0, 8);
				}
				break;
			case 103:
				if (uParam0->f_411 == 4)
				{
					StringConCat(&Var0, "_pissed1", 24);
				}
				else
				{
					StringConCat(&Var0, "_thank3", 24);
				}
				if ((uParam0->f_411 == 1 || uParam0->f_411 == 5) || uParam0->f_411 == 0)
				{
					__LIB_40__::func_131(&Var0);
				}
				__LIB_40__::func_104(&(uParam0->f_81), 2097152);
				if (uParam0->f_411 != 9)
				{
					__LIB_40__::func_296(uParam0, &Var0, 0, 0, 8);
				}
				break;
			case 97:
				if (!__LIB_0__::func_703(uParam0->f_82, 65536))
				{
					if (__LIB_40__::func_302(uParam0, 11) > uParam0->f_36)
					{
						switch (uParam0->f_102)
						{
							case 0:
								StringConCat(&Var0, "_ccba2", 24);
								break;
							case 1:
								StringConCat(&Var0, "_ccba1", 24);
								break;
							default:
								StringConCat(&Var0, "_ccba1", 24);
								break;
						}
						__LIB_40__::func_131(&Var0);
						__LIB_40__::func_214(Var0, uParam1);
						__LIB_40__::func_104(&(uParam0->f_82), 65536);
						__LIB_40__::func_183(uParam0, 16, 0, 0);
						__LIB_40__::func_183(uParam0, 11, 0, 0);
						__LIB_40__::func_223(uParam0, 0, 0);
					}
				}
				break;
			case 98:
				if (!__LIB_0__::func_703(uParam0->f_82, 131072))
				{
					if (__LIB_40__::func_302(uParam0, 11) > uParam0->f_36)
					{
						StringConCat(&Var0, "_ccbb1", 24);
						__LIB_40__::func_131(&Var0);
						__LIB_40__::func_214(Var0, uParam1);
						__LIB_40__::func_104(&(uParam0->f_82), 131072);
						__LIB_40__::func_183(uParam0, 16, 0, 0);
						__LIB_40__::func_183(uParam0, 11, 0, 0);
						__LIB_40__::func_223(uParam0, 0, 0);
					}
				}
				break;
			case 99:
				if (!__LIB_0__::func_703(uParam0->f_82, 8388608))
				{
					StringConCat(&Var0, "_close1", 24);
					__LIB_40__::func_104(&(uParam0->f_82), 8388608);
				}
				else if (!__LIB_0__::func_703(uParam0->f_82, 16777216))
				{
					StringConCat(&Var0, "_close2", 24);
					__LIB_40__::func_104(&(uParam0->f_82), 16777216);
				}
				else if (!__LIB_0__::func_703(uParam0->f_82, 33554432))
				{
					StringConCat(&Var0, "_close3", 24);
					__LIB_40__::func_104(&(uParam0->f_82), 33554432);
				}
				__LIB_40__::func_214(Var0, uParam1);
				__LIB_40__::func_183(uParam0, 16, 0, 0);
				__LIB_40__::func_223(uParam0, 0, 0);
				break;
			case 58:
				if (uParam0->f_411 == 6)
				{
					StringConCat(&Var0, "_kill1", 24);
					cVar1 = { Var0 };
					__LIB_40__::func_200(&(uParam0->f_93), 6, &cVar1, 1, 1, 1);
					__LIB_40__::func_131(&Var0);
					__LIB_14__::func_535(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar1, 8, 0, 0);
				}
				else if (uParam0->f_411 == 8)
				{
					StringConCat(&Var0, "_cheat1", 24);
					__LIB_40__::func_296(uParam0, &Var0, 0, 0, 8);
				}
				else
				{
					StringConCat(&Var0, "_kill1", 24);
					__LIB_40__::func_296(uParam0, &Var0, 0, 0, 8);
				}
				__LIB_40__::func_183(uParam0, 16, 0, 0);
				__LIB_40__::func_223(uParam0, 0, 0);
				break;
			case 95:
				StringConCat(&Var0, "_wndw2", 24);
				__LIB_40__::func_214(Var0, uParam1);
				__LIB_40__::func_183(uParam0, 16, 0, 0);
				__LIB_40__::func_183(uParam0, 11, 0, 0);
				__LIB_40__::func_223(uParam0, 0, 0);
				break;
			case 94:
				StringConCat(&Var0, "_wndw0", 24);
				__LIB_40__::func_214(Var0, uParam1);
				__LIB_40__::func_183(uParam0, 16, 0, 0);
				__LIB_40__::func_183(uParam0, 11, 0, 0);
				__LIB_40__::func_223(uParam0, 0, 0);
				break;
			case 96:
				StringConCat(&Var0, "_wndw1", 24);
				__LIB_40__::func_214(Var0, uParam1);
				__LIB_40__::func_183(uParam0, 16, 0, 0);
				__LIB_40__::func_183(uParam0, 11, 0, 0);
				__LIB_40__::func_223(uParam0, 0, 0);
				break;
			case 113:
				StringConCat(&Var0, "_csite1", 24);
				__LIB_40__::func_131(&Var0);
				__LIB_40__::func_296(uParam0, &Var0, 0, 0, 8);
				break;
			case 119:
				StringConCat(&Var0, "_fair1", 24);
				__LIB_40__::func_131(&Var0);
				__LIB_40__::func_296(uParam0, &Var0, 0, 0, 8);
				break;
			case 115:
				StringConCat(&Var0, "_AlCk1", 24);
				cVar1 = { Var0 };
				__LIB_40__::func_200(&(uParam0->f_91), 5, &cVar1, 1, 1, 0);
				__LIB_14__::func_535(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar1, 8, 0, 0);
				__LIB_40__::func_183(uParam0, 16, 0, 0);
				__LIB_40__::func_223(uParam0, 0, 0);
				break;
			case 116:
				StringConCat(&Var0, "_eggG1", 24);
				cVar1 = { Var0 };
				__LIB_40__::func_200(&(uParam0->f_92), 5, &cVar1, 1, 1, 0);
				__LIB_14__::func_535(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar1, 8, 0, 0);
				__LIB_40__::func_183(uParam0, 16, 0, 0);
				__LIB_40__::func_223(uParam0, 0, 0);
				break;
			case 114:
				StringConCat(&Var0, "_goons1", 24);
				__LIB_40__::func_296(uParam0, &Var0, 0, 0, 8);
				break;
			case 59:
				StringConCat(&Var0, "_oRun1", 24);
				__LIB_40__::func_296(uParam0, &Var0, 0, 0, 8);
				break;
			case 117:
				StringConCat(&Var0, "_gotG1", 24);
				__LIB_40__::func_296(uParam0, &Var0, 0, 0, 8);
				break;
			case 118:
				StringConCat(&Var0, "_getA1", 24);
				__LIB_40__::func_296(uParam0, &Var0, 0, 0, 8);
				break;
			case 120:
				StringConCat(&Var0, "_gnawy1", 24);
				__LIB_40__::func_296(uParam0, &Var0, 0, 0, 8);
				break;
			case 121:
				StringConCat(&Var0, "_grl1", 24);
				__LIB_40__::func_131(&Var0);
				__LIB_40__::func_296(uParam0, &Var0, 0, 0, 8);
				break;
			case 122:
				StringConCat(&Var0, "_figt1", 24);
				__LIB_40__::func_296(uParam0, &Var0, 0, 0, 8);
				break;
			case 123:
				StringConCat(&Var0, "_gEgg1", 24);
				__LIB_40__::func_296(uParam0, &Var0, 0, 0, 8);
				break;
			case 124:
				StringConCat(&Var0, "_gEgg3", 24);
				__LIB_40__::func_296(uParam0, &Var0, 0, 0, 8);
				break;
			case 125:
				StringConCat(&Var0, "_gEgg2", 24);
				__LIB_40__::func_296(uParam0, &Var0, 0, 0, 8);
				break;
			case 126:
				StringConCat(&Var0, "_gLeav1", 24);
				__LIB_40__::func_296(uParam0, &Var0, 0, 0, 8);
				break;
			case 127:
				StringConCat(&Var0, "_aKill1", 24);
				__LIB_40__::func_296(uParam0, &Var0, 0, 0, 8);
				break;
			case 129:
				StringConCat(&Var0, "_gHelp1", 24);
				__LIB_40__::func_131(&Var0);
				__LIB_40__::func_296(uParam0, &Var0, 0, 0, 8);
				break;
			case 130:
				StringConCat(&Var0, "_gDest1", 24);
				__LIB_40__::func_296(uParam0, &Var0, 0, 0, 8);
				__LIB_40__::func_294(uParam0, 11, 1, 0, 0);
				break;
			case 128:
				StringConCat(&Var0, "_gKO1", 24);
				__LIB_40__::func_296(uParam0, &Var0, 0, 0, 8);
				break;
			case 132:
				StringConCat(&Var0, "_gThank1", 24);
				__LIB_40__::func_104(&(uParam0->f_81), 2097152);
				__LIB_40__::func_296(uParam0, &Var0, 0, 0, 8);
				break;
			case 131:
				StringConCat(&Var0, "_gDriv1", 24);
				__LIB_40__::func_131(&Var0);
				__LIB_40__::func_214(Var0, uParam1);
				__LIB_40__::func_104(&(uParam0->f_81), 67108864);
				__LIB_40__::func_183(uParam0, 16, 0, 0);
				__LIB_40__::func_183(uParam0, 11, 0, 0);
				__LIB_40__::func_223(uParam0, 0, 0);
				break;
			case 60:
				StringConCat(&Var0, "_cash1", 24);
				__LIB_40__::func_296(uParam0, &Var0, 0, 0, 8);
				break;
			case 105:
				if (!__LIB_0__::func_703(uParam0->f_81, 33554432) && uParam0->f_411 != 9)
				{
					__LIB_40__::func_233(uParam0, 33554432, Var0, "_noPay1", 1, 8);
				}
				else if (uParam0->f_411 == 9)
				{
					if (!PED::IS_PED_INJURED(uParam0->f_3))
					{
						__LIB_0__::func_709(uParam0->f_3, "TAXI_NO_PAY", uParam0->f_145, 4);
					}
				}
				__LIB_40__::func_294(uParam0, 108, 1, 0, 0);
				break;
			case 106:
				StringConCat(&Var0, "_foot", 24);
				__LIB_2__::func_859(&(uParam0->f_244), uParam0->f_144, &Var0, 9, 0, 0, 0);
				__LIB_40__::func_183(uParam0, 16, 0, 0);
				__LIB_40__::func_223(uParam0, 0, 0);
				break;
			case 107:
				if (!__LIB_0__::func_703(uParam0->f_81, 268435456))
				{
					__LIB_40__::func_233(uParam0, 268435456, Var0, "_kPay1", 1, 8);
				}
				__LIB_40__::func_294(uParam0, 52, 1, 0, 0);
				break;
			case 108:
				__LIB_0__::func_229("TAXI_OBJ_RUNOUT", 7500, 1);
				uParam0->f_417 = 108;
				__LIB_40__::func_223(uParam0, 0, 0);
				break;
			case 109:
				if (!__LIB_0__::func_703(uParam0->f_81, 4194304))
				{
					if (uParam0->f_411 == 2 || uParam0->f_411 == 6)
					{
						__LIB_40__::func_233(uParam0, 4194304, Var0, "_mPay1", 0, 8);
					}
					else if (uParam0->f_411 == 9)
					{
						if (!PED::IS_PED_INJURED(uParam0->f_3))
						{
							__LIB_0__::func_709(uParam0->f_3, "APOLOGY_NO_TROUBLE", uParam0->f_145, 4);
						}
					}
					else
					{
						__LIB_40__::func_233(uParam0, 4194304, Var0, "_mPay1", 1, 8);
					}
				}
				__LIB_40__::func_294(uParam0, 111, 1, 0, 0);
				break;
			case 111:
				__LIB_0__::func_229("TAXI_OBJ_GETRUN", 7500, 1);
				uParam0->f_417 = 111;
				__LIB_40__::func_223(uParam0, 0, 0);
				break;
			case 110:
				StringConCat(&Var0, "_runoff", 24);
				__LIB_2__::func_859(&(uParam0->f_244), uParam0->f_144, &Var0, 9, 0, 0, 0);
				__LIB_40__::func_183(uParam0, 16, 0, 0);
				__LIB_40__::func_223(uParam0, 0, 0);
				break;
			case 141:
				if (!__LIB_0__::func_703(uParam0->f_81, 16777216))
				{
					__LIB_40__::func_233(uParam0, 16777216, Var0, "_ret1", 1, 8);
				}
				__LIB_40__::func_223(uParam0, 0, 0);
				break;
			case 88:
				__LIB_0__::func_229("TAXI_TIEFLEE", 7500, 1);
				__LIB_40__::func_223(uParam0, 0, 0);
				break;
			case 57:
				if (!__LIB_0__::func_703(uParam0->f_98, 536870912))
				{
					__LIB_0__::func_229("TAXI_OBJ_CYI_1B", 7500, 1);
					__LIB_40__::func_104(&(uParam0->f_98), 536870912);
				}
				uParam0->f_417 = 57;
				__LIB_40__::func_223(uParam0, 0, 0);
				break;
			case 104:
				StringConCat(&Var0, "_joke1", 24);
				__LIB_40__::func_131(&Var0);
				__LIB_40__::func_296(uParam0, &Var0, 0, 0, 8);
				break;
			case 136:
				if (uParam0->f_115)
				{
					StringConCat(&Var0, "_wronglz", 24);
				}
				else if (uParam0->f_116)
				{
					StringConCat(&Var0, "_wrong2", 24);
				}
				else
				{
					StringConCat(&Var0, "_wrong", 24);
				}
				__LIB_40__::func_296(uParam0, &Var0, 0, 0, 8);
				__LIB_40__::func_223(uParam0, 0, 0);
				break;
			case 140:
				StringConCat(&Var0, "_shout", 24);
				__LIB_40__::func_296(uParam0, &Var0, 0, 0, 8);
				__LIB_40__::func_223(uParam0, 0, 0);
				break;
			case 135:
				if (uParam0->f_411 == 4)
				{
					StringCopy(&Var0, "tm6_jack", 24);
				}
				else
				{
					StringConCat(&Var0, "_jack", 24);
				}
				__LIB_40__::func_296(uParam0, &Var0, 0, 0, 8);
				__LIB_40__::func_223(uParam0, 0, 0);
				break;
			case 133:
				StringConCat(&Var0, "_getCar", 24);
				__LIB_40__::func_296(uParam0, &Var0, 1, 0, 8);
				__LIB_40__::func_294(uParam0, 134, 1, 0, 0);
				break;
			case 134:
				__LIB_0__::func_229("TX_VIP", 7500, 0);
				uParam0->f_417 = 134;
				__LIB_40__::func_294(uParam0, 0, 0, 0, 0);
				__LIB_40__::func_223(uParam0, 0, 0);
				break;
			}
	}
}

void func_332(var uParam0)//Position - 0x116A1
{
	int iVar0;
	if (uParam0->f_410 >= 5)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_4))
		{
			if (Local_165.f_0 > 0 && !__LIB_0__::func_703(Local_165.f_1[4 /*4*/], 4))
			{
				iVar0 = 0;
				iVar0 = 0;
				while (iVar0 <= (Local_165.f_0 - 1))
				{
					if (__LIB_0__::func_703(Local_165.f_1[iVar0 /*4*/], 2))
					{
						Stack.Push(uParam0);
						Call_Loc(Local_165.f_1[iVar0 /*4*/].f_2);
						if (StackVal)
						{
							if (!__LIB_0__::func_703(Local_165.f_1[iVar0 /*4*/], 4))
							{
								__LIB_0__::func_989(&(Local_165.f_1[iVar0 /*4*/]), 4);
								Local_165.f_1[iVar0 /*4*/].f_1 = MISC::GET_GAME_TIMER();
							}
						}
						else
						{
							__LIB_0__::func_988(&(Local_165.f_1[iVar0 /*4*/]), 12);
						}
						if (__LIB_0__::func_703(Local_165.f_1[iVar0 /*4*/], 4) && !__LIB_0__::func_703(Local_165.f_1[iVar0 /*4*/], 8))
						{
							Stack.Push(uParam0);
							Stack.Push(Local_165.f_1[iVar0 /*4*/].f_1);
							Call_Loc(Local_165.f_1[iVar0 /*4*/].f_3);
							if (StackVal)
							{
								__LIB_0__::func_989(&(Local_165.f_1[iVar0 /*4*/]), 8);
							}
						}
					}
					iVar0++;
				}
			}
		}
		else
		{
			__LIB_40__::func_297(uParam0, "Taxi Garbage Collected", 18);
		}
	}
}

void func_333(var uParam0, var uParam1, var uParam2)//Position - 0x12190
{
	switch (*uParam1)
	{
		case 1:
			if (__LIB_40__::func_307(uParam0, 0, 1))
			{
				__LIB_40__::func_297(uParam0, "Aggro Aiming", 5);
			}
			break;
		case 4:
			if (__LIB_40__::func_307(uParam0, 0, 4))
			{
				__LIB_40__::func_297(uParam0, "Aggro Shot Near", 8);
			}
			break;
		case 8:
			if (__LIB_40__::func_307(uParam0, 0, 8))
			{
				__LIB_40__::func_297(uParam0, "Aggro Heard Shot", 8);
			}
			break;
		case 16:
			if (__LIB_40__::func_307(uParam0, 1, 1))
			{
				__LIB_40__::func_297(uParam0, "Aggro Attacked", 14);
			}
			break;
		case 32:
			if (__LIB_40__::func_307(uParam0, 0, 1))
			{
				__LIB_40__::func_297(uParam0, "Aggro Minor Attacked", 8);
			}
			break;
		case 2:
			if (!__LIB_0__::func_703(*uParam2, 2) && __LIB_40__::func_127(uParam0))
			{
				__LIB_40__::func_297(uParam0, "Aggro Went Wanted", 5);
			}
			break;
	}
}

void func_334(var uParam0, float fParam1, float fParam2)//Position - 0x6D6A
{
	if (__LIB_40__::func_127(uParam0) && __LIB_0__::func_703(uParam0->f_44, 4))
	{
		if ((VEHICLE::IS_VEHICLE_STOPPED(uParam0->f_4) || ENTITY::GET_ENTITY_SPEED(uParam0->f_4) < 3f) && __LIB_40__::func_147(uParam0))
		{
			if (!__LIB_40__::func_117(uParam0, 2))
			{
				__LIB_40__::func_179(uParam0, 2);
			}
			else if (__LIB_40__::func_127(uParam0))
			{
				if (__LIB_40__::func_302(uParam0, 2) > fParam1 && !__LIB_40__::func_117(uParam0, 14))
				{
					if (__LIB_40__::func_109())
					{
						__LIB_40__::func_294(uParam0, 48, 1, 0, 0);
					}
					else
					{
						__LIB_40__::func_294(uParam0, 48, 1, 0, 0);
					}
					__LIB_40__::func_183(uParam0, 2, 0, 0);
					if (__LIB_40__::func_117(uParam0, 10))
					{
						__LIB_40__::func_183(uParam0, 10, 0, 0);
					}
				}
				if (!__LIB_40__::func_117(uParam0, 3))
				{
					__LIB_40__::func_183(uParam0, 3, 0, 0);
				}
				else if (__LIB_40__::func_302(uParam0, 3) >= fParam2)
				{
					__LIB_40__::func_118(uParam0, 3, 0);
					__LIB_40__::func_297(uParam0, "Car not moving", 20);
				}
			}
		}
		else
		{
			if (__LIB_40__::func_117(uParam0, 2))
			{
				__LIB_40__::func_118(uParam0, 2, 0);
			}
			if (__LIB_40__::func_117(uParam0, 3))
			{
				__LIB_40__::func_118(uParam0, 3, 0);
			}
		}
	}
}

int func_335(var uParam0)//Position - 0x8635
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	struct<3> Var7;
	__LIB_40__::func_102("UPDATE_PASSENGER_ENTER_CUTSCENE", &(uParam0->f_78), 1000);
	iVar6 = -1;
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_3, false) && !ENTITY::IS_ENTITY_DEAD(uParam0->f_4, false))
	{
		__LIB_40__::func_222();
	}
	if (bLocal_86)
	{
		iLocal_78 = 10;
	}
	if ((iLocal_78 < 7 && iLocal_78 > 0) && !bLocal_86)
	{
		if (__LIB_14__::func_562(iLocal_80))
		{
			iLocal_78 = 7;
		}
	}
	switch (iLocal_78)
	{
		case 0:
			if (__LIB_40__::func_249(uParam0, 0, 1084227584) && __LIB_0__::func_494(1, 1, 1))
			{
				if (__LIB_40__::func_133(uParam0, 1))
				{
					iLocal_80 = MISC::GET_GAME_TIMER();
					SYSTEM::SETTIMERA(0);
					iLocal_78 = 1;
				}
				else
				{
					__LIB_40__::func_297(uParam0, "You had a dead body in your back seat.", 5);
				}
			}
			break;
		case 1:
			if (SYSTEM::TIMERA() > 500)
			{
				uParam0->f_7 = __LIB_40__::func_195(uParam0->f_4, uParam0->f_3);
				iVar3 = __LIB_40__::func_115(uParam0, &iVar4);
				if (!ENTITY::IS_ENTITY_DEAD(iVar3, false))
				{
					if (iVar4 == uParam0->f_7)
					{
						if (uParam0->f_7 == 1)
						{
							iVar5 = 262144;
						}
						else
						{
							iVar5 = 131072;
						}
						TASK::TASK_LEAVE_ANY_VEHICLE(iVar3, 0, iVar5);
					}
					else
					{
						TASK::TASK_LEAVE_ANY_VEHICLE(iVar3, 0, 0);
					}
				}
				if (uParam0->f_411 == 0)
				{
					if (VEHICLE::IS_ENTRY_POINT_FOR_SEAT_CLEAR(uParam0->f_3, uParam0->f_4, 0, false, false))
					{
						uParam0->f_7 = 0;
						if (!ENTITY::IS_ENTITY_DEAD(iVar3, false))
						{
							TASK::TASK_LEAVE_ANY_VEHICLE(iVar3, 0, 4096);
						}
					}
				}
				iLocal_78 = 2;
			}
			break;
		case 2:
			if (uParam0->f_7 == 0)
			{
				Var2 = { 1.5f, 0f, -0.6422f };
				Var0 = { -1.4309f, 3.958f, 3.5037f };
				Var1 = { 0.1017f, 1.3354f, -0.0925f };
			}
			else if (uParam0->f_7 == 2)
			{
				Var2 = { 1.5f, -1f, -0.6422f };
				Var0 = { 1.4309f, 3.958f, 0.5037f };
				Var1 = { 0.1017f, 1.3354f, -0.0925f };
			}
			else
			{
				Var2 = { -1.5f, -1f, -0.6422f };
				Var0 = { -1.4823f, 4.2333f, 0.5939f };
				Var1 = { -0.4718f, 1.4282f, 0.3619f };
			}
			iVar6 = __LIB_40__::func_132(&(uParam0->f_409), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_4, 0f, 2.2f, 0.275f), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_4, Var0), 1);
			if (iVar6 == 1)
			{
				Var0.f_2 = (Var0.f_2 + 1.5f);
				if (uParam0->f_7 == 2)
				{
					Var1 = { 0.7632f, 1.4884f, 0.4369f };
				}
			}
			if (iVar6 != -1)
			{
				__LIB_14__::func_563(0, 0, 1);
				MISC::CLEAR_AREA_OF_PEDS(ENTITY::GET_ENTITY_COORDS(uParam0->f_4, true), 3f, 0);
				MISC::CLEAR_AREA_OF_OBJECTS(ENTITY::GET_ENTITY_COORDS(uParam0->f_4, true), 25f, 0);
				HUD::CLEAR_HELP(true);
				HUD::CLEAR_PRINTS();
				__LIB_0__::func_638();
				__LIB_40__::func_223(uParam0, 0, 0);
				Var7 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_4, Var2) };
				ENTITY::SET_ENTITY_COORDS(uParam0->f_3, Var7, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(uParam0->f_3, __LIB_40__::func_208(uParam0));
				__LIB_40__::func_194(uParam0, 1f, 1f, 1f, 0f, 0f, 0f, 1112014848);
				CAM::SET_CAM_COORD(*uParam0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_4, Var0));
				CAM::POINT_CAM_AT_ENTITY(*uParam0, uParam0->f_4, Var1, true);
				CAM::SET_CAM_ACTIVE(*uParam0, true);
				CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(uParam0->f_3, false, false);
				TASK::TASK_ENTER_VEHICLE(uParam0->f_3, uParam0->f_4, 20000, uParam0->f_7, uParam0->f_6, 3, 0);
				iLocal_78 = 5;
			}
			break;
		case 5:
			__LIB_40__::func_102("TAXI_PED_ENTER_CUT_WAIT", &(uParam0->f_78), 1000);
			if (SYSTEM::TIMERA() > 3500)
			{
				iLocal_78 = 9;
			}
			break;
		case 6:
			break;
		case 7:
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_3, false) && !ENTITY::IS_ENTITY_DEAD(uParam0->f_4, false))
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE(uParam0->f_3, false))
				{
					PED::SET_PED_INTO_VEHICLE(uParam0->f_3, uParam0->f_4, uParam0->f_7);
					VEHICLE::SET_VEHICLE_DOOR_SHUT(uParam0->f_4, __LIB_40__::func_193(uParam0->f_7), true);
				}
				CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
				CAM::DESTROY_CAM(*uParam0, false);
				CAM::DESTROY_CAM(uParam0->f_1, false);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
				CAM::DO_SCREEN_FADE_IN(800);
				HUD::CLEAR_HELP(true);
				HUD::CLEAR_PRINTS();
				__LIB_0__::func_638();
				__LIB_40__::func_223(uParam0, 0, 0);
				iLocal_78 = 8;
			}
			break;
		case 8:
			if (CAM::IS_SCREEN_FADED_IN() && !CAM::IS_SCREEN_FADING_IN())
			{
				__LIB_14__::func_565(1, 1, 1);
				return 1;
			}
			break;
		case 9:
			CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
			CAM::DESTROY_CAM(*uParam0, false);
			CAM::DESTROY_CAM(uParam0->f_1, false);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
			__LIB_14__::func_565(1, 1, 1);
			return 1;
			break;
		case 10:
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_3, false) && !ENTITY::IS_ENTITY_DEAD(uParam0->f_4, false))
			{
				if (PED::IS_PED_GETTING_INTO_A_VEHICLE(uParam0->f_3) || PED::IS_PED_IN_ANY_VEHICLE(uParam0->f_3, true))
				{
					return 1;
				}
				else if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_ENTER_VEHICLE")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_ENTER_VEHICLE")) != 0)
				{
					TASK::TASK_ENTER_VEHICLE(uParam0->f_3, uParam0->f_4, 20000, uParam0->f_7, uParam0->f_6, 1, 0);
				}
			}
			break;
	}
	return 0;
}

void func_336(var uParam0)//Position - 0x97B8
{
	__LIB_40__::func_318(uParam0, uParam0->f_3);
	if (__LIB_40__::func_147(uParam0))
	{
		if (__LIB_40__::func_117(uParam0, 14))
		{
			__LIB_40__::func_291(uParam0);
			if (HUD::DOES_BLIP_EXIST(uParam0->f_10))
			{
				HUD::REMOVE_BLIP(&(uParam0->f_10));
			}
		}
	}
	if (!__LIB_40__::func_117(uParam0, 9))
	{
		if (HUD::DOES_BLIP_EXIST(uParam0->f_8))
		{
			HUD::SET_BLIP_ALPHA(uParam0->f_8, 0);
			HUD::SET_BLIP_ROUTE(uParam0->f_8, false);
		}
		__LIB_40__::func_183(uParam0, 9, 0, 0);
		__LIB_0__::func_229("TAXI_OBJ_POL", 7500, 1);
	}
}

int func_337(var uParam0, int iParam1)//Position - 0x9874
{
	if (!HUD::HAS_ADDITIONAL_TEXT_LOADED(2))
	{
		return 0;
	}
	__LIB_37__::func_600(12);
	if (__LIB_0__::func_703(uParam0->f_44, 8))
	{
		if (!__LIB_0__::func_703(uParam0->f_44, 128))
		{
			if (PED::IS_PED_JACKING(PLAYER::PLAYER_PED_ID()) && !__LIB_0__::func_703(uParam0->f_44, 256))
			{
				__LIB_40__::func_104(&(uParam0->f_44), 256);
			}
			if (__LIB_0__::func_703(uParam0->f_44, 256) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				__LIB_40__::func_294(uParam0, 135, 1, 0, 1);
				__LIB_40__::func_104(&(uParam0->f_44), 128);
			}
		}
	}
	if (!__LIB_40__::func_209(uParam0, iParam1))
	{
		if (__LIB_14__::func_556(uParam0->f_3, 1) < 35f)
		{
			if (!__LIB_0__::func_703(uParam0->f_44, 8))
			{
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(uParam0->f_3, PLAYER::PLAYER_PED_ID(), 0);
				__LIB_40__::func_294(uParam0, 133, 1, 0, 1);
				__LIB_40__::func_104(&(uParam0->f_44), 8);
			}
		}
		if ((PED::IS_PED_INJURED(uParam0->f_3) || PED::IS_PED_FLEEING(uParam0->f_3)) || __LIB_14__::func_556(uParam0->f_3, 1) > 400f)
		{
			__LIB_40__::func_297(uParam0, "ped is fleeing or injured", 5);
		}
	}
	else
	{
		uParam0->f_4 = PED::GET_VEHICLE_PED_IS_IN(uParam0->f_2, false);
		VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(uParam0->f_4, true);
		if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(uParam0->f_4, -1, false) == uParam0->f_2)
		{
			VEHICLE::ADD_VEHICLE_UPSIDEDOWN_CHECK(uParam0->f_4);
			__LIB_40__::func_181(uParam0);
			__LIB_40__::func_176(2, 0);
			bLocal_86 = true;
			__LIB_3__::func_128(&iLocal_82);
			return 1;
		}
		else
		{
			__LIB_40__::func_297(uParam0, "No Taxi", 21);
			__LIB_0__::func_151("TAXI_DBG_NTAXI", -1);
		}
	}
	return 0;
}

void func_338(var uParam0)//Position - 0x129E4
{
	__LIB_40__::func_310(0, uParam0, 1);
	if (uParam0->f_411 != 9)
	{
		__LIB_39__::func_78(2);
	}
}

int func_339(var uParam0, var uParam1, int* iParam2, var uParam3, bool bParam4)//Position - 0x3A39
{
	int iVar0;
	switch (*uParam0)
	{
		case 0:
			if (!ENTITY::IS_ENTITY_DEAD(*iParam2, false))
			{
				__LIB_40__::func_212(uParam1, 320, bParam4);
				PED::SET_PED_MONEY(*iParam2, MISC::GET_RANDOM_INT_IN_RANGE(100, 300));
				__LIB_40__::func_301(uParam1, iParam2, "TAXI_BLIP_PASS" /* GXT: Passenger */, 1);
				__LIB_40__::func_176(13, 0);
				*uParam0 = 1;
			}
			else
			{
				*uParam0 = 5;
			}
			break;
		case 1:
			if (!ENTITY::IS_ENTITY_DEAD(*iParam2, false))
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE(*iParam2, false))
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0);
					*uParam0 = 2;
				}
			}
			else
			{
				*uParam0 = 2;
			}
			break;
		case 2:
			if (!ENTITY::IS_ENTITY_DEAD(*iParam2, false))
			{
				__LIB_14__::func_615(&uLocal_45, *iParam2, 0, 0, 1, 1, 1);
				if (!__LIB_40__::func_298(uParam1->f_2, *iParam2))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam1->f_4, false))
					{
						if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(*iParam2, uParam1->f_4, true))
						{
							*uParam0 = 3;
						}
					}
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(*iParam2, uParam1->f_2, true))
					{
						*uParam0 = 3;
					}
					if (*uParam0 != 3)
					{
						if (!PED::IS_PED_IN_ANY_VEHICLE(uParam1->f_2, false))
						{
							if (ENTITY::IS_ENTITY_AT_ENTITY(uParam1->f_2, *iParam2, 20f, 20f, 10f, false, true, 0))
							{
								if (PED::IS_PED_SHOOTING(uParam1->f_2))
								{
									*uParam0 = 3;
								}
								else
								{
									if (ENTITY::IS_ENTITY_AT_ENTITY(uParam1->f_2, *iParam2, 2f, 2f, 10f, false, true, 0))
									{
										*uParam0 = 3;
									}
									if (WEAPON::IS_PED_ARMED(uParam1->f_2, 6))
									{
										if (CAM::IS_AIM_CAM_ACTIVE())
										{
											*uParam0 = 3;
										}
									}
								}
							}
							else if (ENTITY::IS_ENTITY_AT_ENTITY(uParam1->f_2, *iParam2, 50f, 50f, 10f, false, true, 0))
							{
								if (PED::IS_PED_SHOOTING(uParam1->f_2))
								{
									*uParam0 = 3;
								}
							}
						}
						else if (ENTITY::IS_ENTITY_AT_ENTITY(uParam1->f_2, *iParam2, 50f, 50f, 25f, false, true, 0))
						{
							if (PED::IS_PED_SHOOTING(uParam1->f_2))
							{
								*uParam0 = 3;
							}
						}
					}
				}
				else
				{
					__LIB_0__::func_345(&uLocal_45, 0, 0);
					uParam1->f_109 = 1;
					*uParam0 = 5;
				}
			}
			else
			{
				__LIB_0__::func_345(&uLocal_45, 0, 0);
				*uParam0 = 5;
			}
			break;
		case 3:
			__LIB_0__::func_345(&uLocal_45, 0, 0);
			if (!ENTITY::IS_ENTITY_DEAD(*iParam2, false))
			{
				if (HUD::DOES_BLIP_EXIST(uParam1->f_8))
				{
					HUD::REMOVE_BLIP(&(uParam1->f_8));
				}
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam2, true);
				TASK::OPEN_SEQUENCE_TASK(&iVar0);
				TASK::TASK_COWER(0, 5000);
				TASK::TASK_SMART_FLEE_PED(0, uParam1->f_2, 1000f, -1, false, false);
				TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, false);
				TASK::CLOSE_SEQUENCE_TASK(iVar0);
				TASK::TASK_PERFORM_SEQUENCE(*iParam2, iVar0);
				TASK::CLEAR_SEQUENCE_TASK(&iVar0);
				PED::SET_PED_KEEP_TASK(*iParam2, true);
				__LIB_40__::func_294(uParam1, 109, 1, 0, 0);
				*uParam0 = 4;
				HUD::CLEAR_PRINTS();
			}
			else
			{
				*uParam0 = 4;
				HUD::CLEAR_PRINTS();
			}
			if (HUD::DOES_BLIP_EXIST(uParam1->f_8))
			{
				HUD::REMOVE_BLIP(&(uParam1->f_8));
			}
			__LIB_40__::func_303(*iParam2, uParam3, 1, -1);
			break;
		case 4:
			if (OBJECT::HAS_PICKUP_BEEN_COLLECTED(uParam3->f_6))
			{
				if (HUD::DOES_BLIP_EXIST(uParam3->f_5))
				{
					HUD::REMOVE_BLIP(&(uParam3->f_5));
				}
				__LIB_40__::func_206(uParam1);
				__LIB_40__::func_176(14, 0);
				uParam1->f_56 = 0;
				*uParam0 = 5;
			}
			break;
		case 5:
			if (!ENTITY::IS_ENTITY_DEAD(*iParam2, false))
			{
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(iParam2);
				if (HUD::DOES_BLIP_EXIST(uParam1->f_8))
				{
					HUD::REMOVE_BLIP(&(uParam1->f_8));
				}
			}
			else
			{
				PLAYER::SET_PLAYER_WANTED_LEVEL_NO_DROP(PLAYER::GET_PLAYER_INDEX(), 2, false);
				PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::GET_PLAYER_INDEX(), false);
			}
			return 1;
			break;
	}
	return 0;
}

void func_340(int iParam0, bool bParam1)//Position - 0x726A
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 263)
	{
		if (Global_32338[iVar0 /*23*/].f_16 == iParam0)
		{
			__LIB_38__::func_295(iVar0, bParam1);
		}
		iVar0++;
	}
}

void func_341(var uParam0, int iParam1)//Position - 0x13278
{
	__LIB_0__::func_424(1);
	__LIB_40__::func_100();
	__LIB_40__::func_105(&(uParam0->f_244));
	__LIB_40__::func_290(uParam0);
	uParam0->f_411 = iParam1;
	if (!__LIB_0__::func_703(Global_113386.f_19097, 4))
	{
		__LIB_40__::func_104(&(Global_113386.f_19097), 4);
	}
	__LIB_40__::func_219(uParam0);
	__LIB_40__::func_218(uParam0);
	PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 32, false);
	uParam0->f_102 = (__LIB_40__::func_168(uParam0->f_411) % uParam0->f_101);
	uParam0->f_80 = 0;
	uParam0->f_428 = __LIB_40__::func_190();
	HUD::REQUEST_ADDITIONAL_TEXT("TAXI" /* GXT: Taxi */, 2);
}

void func_342(var uParam0)//Position - 0x3DC4
{
	__LIB_0__::func_638();
	HUD::CLEAR_PRINTS();
	if (uParam0->f_56 < uParam0->f_58)
	{
		if (uParam0->f_411 == 0)
		{
			__LIB_40__::func_294(uParam0, 105, 1, 0, 0);
		}
		else
		{
			__LIB_40__::func_294(uParam0, 103, 1, 0, 0);
		}
		__LIB_40__::func_116(1);
	}
	else if (uParam0->f_56 >= uParam0->f_59)
	{
		__LIB_40__::func_294(uParam0, 101, 1, 0, 0);
	}
	else
	{
		__LIB_40__::func_294(uParam0, 102, 1, 0, 0);
	}
	__LIB_40__::func_183(uParam0, 16, 4f, 0);
}

void func_343(var uParam0)//Position - 0x47F9
{
	if (!__LIB_0__::func_703(uParam0->f_44, 1))
	{
		switch (uParam0->f_412)
		{
			case 0:
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX()) >= 1)
				{
					if (__LIB_40__::func_302(uParam0, 9) > 1f)
					{
						__LIB_40__::func_125(uParam0, PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX()));
						if (uParam0->f_410 != 22)
						{
							__LIB_40__::func_294(uParam0, 50, 1, 1, 0);
						}
						__LIB_40__::func_183(uParam0, 9, 0, 0);
						if (HUD::DOES_BLIP_EXIST(uParam0->f_9))
						{
							HUD::SET_BLIP_ALPHA(uParam0->f_9, 0);
							HUD::SET_BLIP_ROUTE(uParam0->f_9, false);
						}
						uParam0->f_140 = 1;
						uParam0->f_412 = 1;
					}
				}
				break;
			case 1:
				if (!__LIB_0__::func_75() && __LIB_40__::func_302(uParam0, 9) > 4f)
				{
					__LIB_40__::func_294(uParam0, 52, 1, 0, 0);
					uParam0->f_412 = 2;
				}
				break;
			case 2:
				if (__LIB_0__::func_501("TAXI_OBJ_POL", 0, 0))
				{
					if (uParam0->f_410 != 22)
					{
						__LIB_40__::func_294(uParam0, 51, 0, 0, 0);
					}
					uParam0->f_412 = 3;
				}
				else if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX()) < 1)
				{
					uParam0->f_412 = 3;
				}
				break;
			case 3:
				if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::GET_PLAYER_INDEX(), __LIB_40__::func_124(uParam0)))
				{
					__LIB_40__::func_125(uParam0, PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX()));
					__LIB_40__::func_176(6, 0);
				}
				if (!__LIB_21__::func_717(uParam0))
				{
					if (!AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						if (__LIB_40__::func_302(uParam0, 16) > 10f)
						{
							if (uParam0->f_410 != 22)
							{
								__LIB_40__::func_294(uParam0, 51, 1, 0, 0);
							}
						}
					}
				}
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX()) < 1)
				{
					if (__LIB_0__::func_501("TAXI_OBJ_POL", 0, 0))
					{
						HUD::CLEAR_PRINTS();
					}
					if (HUD::DOES_BLIP_EXIST(uParam0->f_9))
					{
						HUD::SET_BLIP_ALPHA(uParam0->f_9, 255);
						HUD::SET_BLIP_ROUTE(uParam0->f_9, true);
					}
					uParam0->f_140 = 0;
					uParam0->f_412 = 4;
				}
				break;
			case 4:
				if (!__LIB_0__::func_75())
				{
					if (uParam0->f_410 != 22)
					{
						__LIB_40__::func_294(uParam0, 53, 1, 0, 1);
					}
					__LIB_40__::func_176(7, __LIB_40__::func_124(uParam0));
					__LIB_40__::func_125(uParam0, 0);
					uParam0->f_412 = 5;
				}
				break;
			case 5:
				if (!__LIB_0__::func_75())
				{
					__LIB_40__::func_118(uParam0, 9, 0);
					__LIB_40__::func_183(uParam0, 11, 0, 0);
					uParam0->f_412 = 0;
				}
				break;
			}
	}
}

void func_344(var uParam0, int iParam1, bool bParam2)//Position - 0xAC26
{
	if (uParam0->f_411 == 0)
	{
		if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
		{
			if (bParam2)
			{
				if (__LIB_40__::func_302(uParam0, 10) > (20f + 10f))
				{
					if (uParam0->f_112)
					{
						__LIB_40__::func_294(uParam0, 92, 1, 0, 0);
						uParam0->f_112 = 0;
					}
					else
					{
						__LIB_40__::func_294(uParam0, 83, 1, 0, 0);
					}
					uParam0->f_113 = 1;
					__LIB_40__::func_183(uParam0, 10, 0f, 1);
				}
			}
			else if (__LIB_40__::func_302(uParam0, 10) > 20f)
			{
				if (uParam0->f_112)
				{
					__LIB_40__::func_294(uParam0, 92, 1, 0, 0);
					uParam0->f_112 = 0;
				}
				else
				{
					__LIB_40__::func_294(uParam0, 83, 1, 0, 0);
				}
				uParam0->f_113 = 1;
				__LIB_40__::func_183(uParam0, 10, 0f, 1);
			}
		}
	}
	if (uParam0->f_411 == 1)
	{
		if (__LIB_40__::func_302(uParam0, 10) > 30f)
		{
			if (!__LIB_0__::func_75())
			{
				if (uParam0->f_112)
				{
					__LIB_40__::func_294(uParam0, 92, 1, 0, 0);
					uParam0->f_112 = 0;
				}
				else
				{
					__LIB_40__::func_294(uParam0, 83, 1, 0, 0);
				}
				uParam0->f_113 = 1;
				__LIB_40__::func_183(uParam0, 10, 0f, 1);
			}
		}
	}
	if (__LIB_0__::func_703(uParam0->f_100, 64))
	{
		if (!__LIB_0__::func_702(&(Local_162[5 /*10*/].f_6)))
		{
			__LIB_3__::func_128(&(Local_162[5 /*10*/].f_6));
		}
		else if (__LIB_3__::func_108(&(Local_162[5 /*10*/].f_6)) > 6f)
		{
			if (__LIB_40__::func_248(uParam0))
			{
				if (uParam0->f_113)
				{
					__LIB_40__::func_294(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					__LIB_40__::func_294(uParam0, Local_162[5 /*10*/].f_9, 1, 0, 0);
				}
				__LIB_40__::func_151(uParam0, 1);
				__LIB_40__::func_247(5, uParam0);
				__LIB_40__::func_292(uParam0);
			}
		}
	}
	if (__LIB_0__::func_703(uParam0->f_100, 1))
	{
		if (!__LIB_0__::func_702(&(Local_162[0 /*10*/].f_6)))
		{
			__LIB_3__::func_128(&(Local_162[0 /*10*/].f_6));
		}
		else if (__LIB_3__::func_108(&(Local_162[0 /*10*/].f_6)) > 5f)
		{
			if (__LIB_40__::func_246(uParam0))
			{
				__LIB_40__::func_151(uParam0, 1);
				__LIB_40__::func_247(0, uParam0);
				if (uParam0->f_113)
				{
					__LIB_40__::func_294(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					__LIB_40__::func_294(uParam0, Local_162[0 /*10*/].f_9, 1, 0, 0);
				}
				__LIB_40__::func_292(uParam0);
			}
		}
	}
	if (__LIB_0__::func_703(uParam0->f_100, 2))
	{
		if (!__LIB_0__::func_702(&(Local_162[1 /*10*/].f_6)))
		{
			__LIB_3__::func_128(&(Local_162[1 /*10*/].f_6));
		}
		else if (__LIB_3__::func_108(&(Local_162[1 /*10*/].f_6)) > 5f)
		{
			if (__LIB_40__::func_245(uParam0))
			{
				__LIB_40__::func_151(uParam0, 1);
				__LIB_40__::func_247(1, uParam0);
				if (uParam0->f_113)
				{
					__LIB_40__::func_294(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					__LIB_40__::func_294(uParam0, Local_162[1 /*10*/].f_9, 1, 0, 0);
				}
				__LIB_40__::func_292(uParam0);
			}
		}
	}
	if (__LIB_0__::func_703(uParam0->f_100, 2048))
	{
		if (!__LIB_0__::func_702(&(Local_162[8 /*10*/].f_6)))
		{
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_4))
			{
				uParam0->f_46 = ENTITY::GET_ENTITY_HEALTH(uParam0->f_4);
				__LIB_3__::func_128(&(Local_162[8 /*10*/].f_6));
			}
		}
		else if (__LIB_3__::func_108(&(Local_162[8 /*10*/].f_6)) > 7f || Local_162[8 /*10*/].f_1 == 0)
		{
			if (__LIB_40__::func_326(uParam0))
			{
				__LIB_40__::func_151(uParam0, 1);
				__LIB_40__::func_247(8, uParam0);
				__LIB_40__::func_292(uParam0);
			}
		}
	}
	if (__LIB_0__::func_703(uParam0->f_100, 128))
	{
		if (!__LIB_0__::func_702(&(Local_162[6 /*10*/].f_6)))
		{
			__LIB_3__::func_128(&(Local_162[6 /*10*/].f_6));
		}
		else if (__LIB_3__::func_108(&(Local_162[6 /*10*/].f_6)) > 5f)
		{
			if (__LIB_40__::func_244(uParam0))
			{
				__LIB_40__::func_151(uParam0, 1);
				__LIB_40__::func_247(6, uParam0);
				if (uParam0->f_113)
				{
					__LIB_40__::func_294(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					__LIB_40__::func_294(uParam0, Local_162[6 /*10*/].f_9, 1, 0, 0);
				}
				__LIB_40__::func_292(uParam0);
			}
		}
	}
	if (__LIB_0__::func_703(uParam0->f_100, 32))
	{
		if (!__LIB_0__::func_702(&(Local_162[4 /*10*/].f_6)))
		{
			__LIB_3__::func_128(&(Local_162[4 /*10*/].f_6));
		}
		else if (__LIB_3__::func_108(&(Local_162[4 /*10*/].f_6)) > 4f)
		{
			if (__LIB_40__::func_243(uParam0))
			{
				__LIB_40__::func_151(uParam0, 1);
				__LIB_40__::func_247(4, uParam0);
				if (uParam0->f_113)
				{
					__LIB_40__::func_294(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					__LIB_40__::func_294(uParam0, Local_162[4 /*10*/].f_9, 1, 0, 0);
				}
				__LIB_40__::func_292(uParam0);
			}
		}
	}
	if (__LIB_0__::func_703(uParam0->f_100, 256))
	{
		if (!__LIB_0__::func_702(&(Local_162[7 /*10*/].f_6)))
		{
			__LIB_3__::func_128(&(Local_162[7 /*10*/].f_6));
		}
		else if (__LIB_3__::func_108(&(Local_162[7 /*10*/].f_6)) > 5f || Local_162[7 /*10*/].f_1 == 0)
		{
			if (__LIB_40__::func_149(uParam0))
			{
				__LIB_40__::func_247(7, uParam0);
				__LIB_40__::func_151(uParam0, 1);
				if (uParam0->f_113)
				{
					__LIB_40__::func_294(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					__LIB_40__::func_294(uParam0, Local_162[7 /*10*/].f_9, 1, 0, 1);
				}
				__LIB_40__::func_292(uParam0);
			}
		}
	}
	if (__LIB_0__::func_703(uParam0->f_100, 8))
	{
		if (!__LIB_0__::func_702(&(Local_162[9 /*10*/].f_6)))
		{
			__LIB_3__::func_128(&(Local_162[9 /*10*/].f_6));
		}
		else if (__LIB_3__::func_108(&(Local_162[9 /*10*/].f_6)) <= 7f)
		{
			PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID());
		}
		else if (__LIB_3__::func_108(&(Local_162[9 /*10*/].f_6)) > 7f || Local_162[9 /*10*/].f_1 == 0)
		{
			if (__LIB_40__::func_148(uParam0))
			{
				__LIB_40__::func_151(uParam0, 1);
				__LIB_40__::func_247(9, uParam0);
				if (uParam0->f_113)
				{
					__LIB_40__::func_294(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					__LIB_40__::func_294(uParam0, Local_162[9 /*10*/].f_9, 1, 0, 1);
				}
				__LIB_40__::func_292(uParam0);
			}
		}
	}
	if (__LIB_0__::func_703(uParam0->f_100, 16384))
	{
		if (!__LIB_0__::func_702(&(Local_162[13 /*10*/].f_6)))
		{
			__LIB_3__::func_128(&(Local_162[13 /*10*/].f_6));
		}
		else if (__LIB_3__::func_108(&(Local_162[13 /*10*/].f_6)) > 10f)
		{
			if (__LIB_40__::func_260(uParam0))
			{
				__LIB_40__::func_151(uParam0, 1);
				__LIB_40__::func_247(13, uParam0);
				if (uParam0->f_113)
				{
					__LIB_40__::func_294(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					__LIB_40__::func_294(uParam0, Local_162[13 /*10*/].f_9, 1, 0, 0);
				}
				__LIB_40__::func_292(uParam0);
			}
		}
	}
	if (__LIB_0__::func_703(uParam0->f_100, 32768))
	{
		if (!__LIB_0__::func_702(&(Local_162[14 /*10*/].f_6)))
		{
			__LIB_3__::func_128(&(Local_162[14 /*10*/].f_6));
		}
		else if (__LIB_3__::func_108(&(Local_162[14 /*10*/].f_6)) > 7f)
		{
			if (__LIB_40__::func_242(uParam0))
			{
				__LIB_40__::func_151(uParam0, 1);
				__LIB_40__::func_247(14, uParam0);
				if (uParam0->f_113)
				{
					__LIB_40__::func_294(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					__LIB_40__::func_294(uParam0, Local_162[14 /*10*/].f_9, 1, 0, 0);
				}
				__LIB_40__::func_292(uParam0);
			}
		}
	}
	if (__LIB_0__::func_703(uParam0->f_100, 4096))
	{
		if (!__LIB_0__::func_702(&(Local_162[11 /*10*/].f_6)))
		{
			__LIB_3__::func_128(&(Local_162[11 /*10*/].f_6));
		}
		else if (__LIB_3__::func_108(&(Local_162[11 /*10*/].f_6)) > 8f)
		{
			if (__LIB_40__::func_241(uParam0))
			{
				__LIB_40__::func_151(uParam0, 1);
				__LIB_40__::func_247(11, uParam0);
				if (uParam0->f_113)
				{
					__LIB_40__::func_294(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					__LIB_40__::func_294(uParam0, Local_162[11 /*10*/].f_9, 1, 0, 0);
				}
				__LIB_40__::func_292(uParam0);
			}
		}
	}
	if (__LIB_0__::func_703(uParam0->f_100, 8192))
	{
		if (!__LIB_0__::func_702(&(Local_162[12 /*10*/].f_6)))
		{
			__LIB_3__::func_128(&(Local_162[12 /*10*/].f_6));
		}
		else if (__LIB_3__::func_108(&(Local_162[12 /*10*/].f_6)) > 5f)
		{
			if (__LIB_40__::func_240(uParam0))
			{
				__LIB_40__::func_151(uParam0, 1);
				__LIB_40__::func_247(12, uParam0);
				if (uParam0->f_113)
				{
					__LIB_40__::func_294(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					__LIB_40__::func_294(uParam0, Local_162[12 /*10*/].f_9, 1, 0, 0);
				}
				__LIB_40__::func_292(uParam0);
			}
		}
	}
	if (__LIB_0__::func_703(uParam0->f_100, 4))
	{
		if (!__LIB_0__::func_702(&(Local_162[2 /*10*/].f_6)))
		{
			__LIB_39__::func_264(&(Local_162[2 /*10*/].f_6), 0f);
		}
		else if (__LIB_3__::func_108(&(Local_162[2 /*10*/].f_6)) > 5f)
		{
			if (__LIB_40__::func_239(uParam0))
			{
				if (uParam0->f_113)
				{
					__LIB_40__::func_294(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					__LIB_40__::func_294(uParam0, Local_162[2 /*10*/].f_9, 1, 0, 0);
				}
				__LIB_40__::func_151(uParam0, 1);
				__LIB_40__::func_247(2, uParam0);
				__LIB_40__::func_292(uParam0);
			}
		}
	}
}

void func_345(var uParam0)//Position - 0x44D2
{
	if (__LIB_40__::func_123(uParam0))
	{
		__LIB_40__::func_329(uParam0);
	}
}

int func_346(var uParam0)//Position - 0x4FC0
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, false))
	{
		if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(uParam0->f_4, -1, false) == uParam0->f_2)
		{
			if (__LIB_40__::func_117(uParam0, 14))
			{
				__LIB_40__::func_291(uParam0);
			}
			__LIB_40__::func_330(uParam0, 0);
			return 1;
		}
	}
	return 0;
}

void func_347(var uParam0)//Position - 0x1272E
{
	var uVar0;
	if (uParam0->f_410 < 7 && !uParam0->f_138)
	{
		if (((uParam0->f_411 == 9 && __LIB_40__::func_103()) && !__LIB_40__::func_147(uParam0)) || ((uParam0->f_411 != 9 && __LIB_40__::func_209(uParam0, 1)) && !__LIB_40__::func_147(uParam0)))
		{
			uVar0 = __LIB_1__::func_601(uParam0->f_4);
			ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(&uVar0);
			uParam0->f_4 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uParam0->f_4, true, false);
			__LIB_40__::func_291(uParam0);
			__LIB_40__::func_330(uParam0, 0);
		}
	}
}

void func_348(var uParam0)//Position - 0x8D24
{
	int iVar0;
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, false))
	{
		if (!PED::IS_PED_INJURED(uParam0->f_3))
		{
			if (__LIB_14__::func_556(uParam0->f_3, 1) > 30f || __LIB_40__::func_323(uParam0))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_3, joaat("SCRIPT_TASK_ENTER_VEHICLE")) == 1 || TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_3, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) == 1)
				{
					TASK::CLEAR_SEQUENCE_TASK(&iVar0);
					TASK::OPEN_SEQUENCE_TASK(&iVar0);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, uParam0->f_4, 0);
					TASK::TASK_PLAY_ANIM(0, "misscommon@response", "screw_you", 8f, -8f, -1, 0, 0f, false, false, false);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, uParam0->f_11, uParam0->f_6, 20000, 0.25f, 0, 40000f);
					TASK::CLOSE_SEQUENCE_TASK(iVar0);
					TASK::TASK_PERFORM_SEQUENCE(uParam0->f_3, iVar0);
					__LIB_40__::func_297(uParam0, "Player abandoned passenger on pickup.", 8);
				}
			}
		}
	}
}

void func_349(var uParam0, bool bParam1)//Position - 0x4B1A
{
	__LIB_40__::func_318(uParam0, uParam0->f_3);
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, false))
	{
		if (!PED::IS_PED_IN_VEHICLE(uParam0->f_2, uParam0->f_4, false))
		{
			if (!__LIB_40__::func_117(uParam0, 14))
			{
				if (__LIB_0__::func_75())
				{
					__LIB_0__::func_620(1);
				}
				__LIB_40__::func_121(uParam0, 11, 1);
				__LIB_40__::func_330(uParam0, 1);
				__LIB_40__::func_183(uParam0, 14, 0f, 1);
				if (uParam0->f_410 < 15)
				{
				}
			}
			else if (bParam1)
			{
				if (!__LIB_40__::func_127(uParam0))
				{
					if ((MISC::GET_GAME_TIMER() % 1000) < 50)
					{
					}
					if (PED::IS_PED_IN_ANY_VEHICLE(uParam0->f_2, false))
					{
						if (__LIB_40__::func_302(uParam0, 15) > 5f)
						{
							__LIB_40__::func_183(uParam0, 15, 0f, 1);
						}
					}
					if (__LIB_40__::func_302(uParam0, 14) > 20f)
					{
						__LIB_40__::func_297(uParam0, "Player not in taxi. - YELL RETURN", 8);
					}
				}
				else if (__LIB_40__::func_302(uParam0, 14) > 20f)
				{
					if (__LIB_14__::func_556(uParam0->f_4, 1) > 40f)
					{
						__LIB_40__::func_297(uParam0, "Player not in taxi.", 21);
					}
					else
					{
						__LIB_40__::func_297(uParam0, "Player not in taxi. - YELL RETURN 2", 8);
					}
				}
			}
		}
	}
}

int func_350(var uParam0, int iParam1)//Position - 0x21C5
{
	switch (iLocal_160)
	{
		case 0:
			if (!__LIB_0__::func_75() && __LIB_40__::func_302(uParam0, 0) > 1f)
			{
				if (__LIB_40__::func_202())
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
				}
				__LIB_40__::func_204(uParam0);
				__LIB_40__::func_175(&(Global_113386.f_19097), 4096);
				__LIB_40__::func_203(iParam1, "TAXI_FARE_TITLE", uParam0->f_50, uParam0->f_56, ((uParam0->f_50 + uParam0->f_56) + uParam0->f_105), uParam0->f_105, __LIB_40__::func_113(uParam0), "TAXI_FARE_MID", 4000, 1);
				iParam1->f_1 = 4000;
				AUDIO::PLAY_SOUND_FRONTEND(-1, "CHECKPOINT_UNDER_THE_BRIDGE", "HUD_MINI_GAME_SOUNDSET", false);
				__LIB_0__::func_704(1);
				iLocal_160 = 6;
			}
			break;
		case 6:
			if (!__LIB_40__::func_188(iParam1, 0))
			{
				__LIB_40__::func_235(uParam0);
				__LIB_40__::func_183(uParam0, 0, 0, 0);
				__LIB_0__::func_704(0);
				iLocal_160 = 7;
				return 1;
			}
			break;
	}
	return 0;
}

Vector3 func_351(var uParam0)//Position - 0x2A76
{
	return uParam0->f_49;
}

int func_352(var uParam0)//Position - 0x30B1
{
	return uParam0->f_30;
}

void func_353(var uParam0, int iParam1)//Position - 0x13661
{
	uParam0->f_25 = iParam1;
}

int func_354(int iParam0)//Position - 0x17327
{
	int iVar0;
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	switch (iVar0)
	{
		case joaat("blimp"):
			return 1;
		case joaat("blimp2"):
			return 1;
		case joaat("cargobob"):
			return 1;
		case joaat("cargobob2"):
			return 1;
		case joaat("cargobob3"):
			return 1;
		case joaat("buzzard"):
			return 1;
		case joaat("buzzard2"):
			return 1;
		case joaat("maverick"):
			return 1;
		case joaat("polmav"):
			return 1;
		case joaat("swift"):
			return 1;
		case joaat("valkyrie"):
			return 1;
		case joaat("annihilator"):
			return 1;
		case joaat("frogger"):
			return 1;
		case joaat("frogger2"):
			return 1;
		case joaat("dodo"):
			return 1;
		default:
	}
	return 0;
}

int func_355(var uParam0)//Position - 0x18F29
{
	return uParam0->f_55;
}

int func_356(var uParam0)//Position - 0x1AA0D
{
	return uParam0->f_77;
}

int func_357(var uParam0)//Position - 0x20467
{
	return uParam0->f_281;
}

void func_358(var uParam0)//Position - 0x21BB7
{
	uParam0->f_22 = 0;
}

var func_359(var uParam0)//Position - 0x4287A
{
	return uParam0->f_67;
}

var func_360(var uParam0)//Position - 0x42886
{
	return uParam0->f_70;
}

void func_361(int iParam0)//Position - 0x470CF
{
	Global_112472 = (Global_112472 || iParam0);
}

int func_362(var uParam0)//Position - 0x476E7
{
	return uParam0->f_76;
}

void func_363(var uParam0, int iParam1)//Position - 0x4773A
{
	uParam0->f_76 = iParam1;
}

void func_364()//Position - 0x4A039
{
	if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
	{
		HUD::CLEAR_HELP(true);
	}
}

void func_365(var uParam0, int iParam1)//Position - 0x4D5FD
{
	uParam0->f_24 = iParam1;
}

void func_366(var uParam0, int iParam1)//Position - 0x4D60B
{
	uParam0->f_28 = iParam1;
}

int func_367(struct<3> Param0, struct<3> Param1)//Position - 0x4E73D
{
	PED::SET_PED_NON_CREATION_AREA(Param0, Param1);
	PATHFIND::DISABLE_NAVMESH_IN_AREA(Param0, Param1, true);
	return PED::ADD_SCENARIO_BLOCKING_AREA(Param0, Param1, false, true, true, true);
}

void func_368(int iParam0, struct<3> Param1, struct<3> Param2)//Position - 0x54D5D
{
	PED::REMOVE_SCENARIO_BLOCKING_AREA(iParam0, false);
	PED::CLEAR_PED_NON_CREATION_AREA();
	PATHFIND::DISABLE_NAVMESH_IN_AREA(Param1, Param2, false);
}

void func_369(int* iParam0)//Position - 0x10AFB
{
	if (__LIB_1__::func_13(iParam0))
	{
		if (!__LIB_0__::func_701(iParam0))
		{
			iParam0->f_2 = (__LIB_0__::func_616(BitTest(*iParam0, 4)) - iParam0->f_1);
			MISC::SET_BIT(iParam0, 2);
		}
	}
}

void func_370(var uParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6)//Position - 0x2ED8
{
	char* sVar0;
	sVar0 = __LIB_1__::func_221(iParam5);
	if (iParam5 != 5)
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "RESET_MOVIE");
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, sVar0);
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam3);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	__LIB_1__::func_31(&(uParam0->f_2));
	uParam0->f_1 = iParam4;
	uParam0->f_9 = iParam6;
}

void func_371()//Position - 0x4A15C
{
	__LIB_11__::func_266(1, -1, 1, 0, 1, -1082130432, 0, 0, -1);
}

void func_372(var uParam0)//Position - 0x2D59
{
	if (ENTITY::DOES_ENTITY_EXIST((uParam0[0 /*94*/])->f_33))
	{
		(uParam0[0 /*94*/])->f_46 = { ENTITY::GET_ENTITY_COORDS((uParam0[0 /*94*/])->f_33, true) };
	}
	if (ENTITY::DOES_ENTITY_EXIST((uParam0[1 /*94*/])->f_33))
	{
		(uParam0[1 /*94*/])->f_46 = { ENTITY::GET_ENTITY_COORDS((uParam0[1 /*94*/])->f_33, true) };
	}
}

var func_373(var uParam0)//Position - 0x314B
{
	return uParam0->f_71;
}

void func_374(var uParam0, float fParam1)//Position - 0x318A
{
	uParam0->f_67 = fParam1;
}

int func_375(int iParam0, int iParam1)//Position - 0x3198
{
	if (iParam1 < 0)
	{
		return 0;
	}
	if (iParam0 == 54)
	{
		return 0;
	}
	if (iParam0 == 56)
	{
		return 0;
	}
	if (iParam0 == 55)
	{
		return 0;
	}
	if (iParam0 == 57)
	{
		return 0;
	}
	if (iParam0 == 59)
	{
		return 0;
	}
	if (iParam0 == 58)
	{
		return 0;
	}
	return 1;
}

int func_376(int iParam0)//Position - 0x31ED
{
	float fVar0;
	float fVar1;
	fVar0 = (SYSTEM::TO_FLOAT(iParam0) * 0.033333335f);
	fVar1 = (fVar0 / MISC::GET_FRAME_TIME());
	return SYSTEM::ROUND(fVar1);
}

int func_377(var uParam0)//Position - 0x3212
{
	return uParam0->f_53;
}

int func_378(var uParam0, int iParam1)//Position - 0x321E
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < iParam1 + 1)
	{
		iVar0 = (iVar0 + (uParam0[0 /*8*/])->f_1[iVar1]);
		iVar0 = (iVar0 + (uParam0[1 /*8*/])->f_1[iVar1]);
		iVar1++;
	}
	if ((iVar0 % 2) == 0)
	{
		return 0;
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_379(var uParam0)//Position - 0x334F
{
	return uParam0->f_1674;
}

void func_380(var uParam0, var uParam1)//Position - 0x335C
{
	uParam0->f_1674 = uParam1;
}

void func_381(var uParam0, int iParam1)//Position - 0x336B
{
	uParam0->f_1673 = (uParam0->f_1673 || iParam1);
}

void func_382(var uParam0)//Position - 0x3380
{
	uParam0->f_25 = 0;
}

void func_383(var uParam0, var uParam1)//Position - 0x3712
{
	uParam0->f_1678 = uParam1;
}

void func_384(var uParam0)//Position - 0x3721
{
	uParam0->f_23 = 0f;
	uParam0->f_21 = 0f;
	uParam0->f_22 = 0f;
}

void func_385(var uParam0, int iParam1)//Position - 0x3A9A
{
	uParam0->f_26 = iParam1;
}

int func_386(var uParam0)//Position - 0x3B8B
{
	return uParam0->f_34;
}

void func_387(var uParam0)//Position - 0x3DBC
{
	uParam0->f_60 = 0f;
}

void func_388(var uParam0)//Position - 0x416B
{
	uParam0->f_23 = (uParam0->f_23 - 0.5f);
	uParam0->f_23 = __LIB_0__::func_331(uParam0->f_23, -1.5f, 1.5f);
}

void func_389(var uParam0)//Position - 0x4197
{
	uParam0->f_23 = (uParam0->f_23 + 0.5f);
	uParam0->f_23 = __LIB_0__::func_331(uParam0->f_23, -1.5f, 1.5f);
}

void func_390(var uParam0, bool bParam1)//Position - 0x4370
{
	float fVar0;
	switch (uParam0->f_20)
	{
		case 0:
			fVar0 = 0.1f;
			break;
		case 1:
			fVar0 = 0.1f;
			break;
		case 2:
			fVar0 = 0.1f;
			break;
	}
	if (!bParam1)
	{
		fVar0 = (fVar0 * -1f);
	}
	uParam0->f_22 = (uParam0->f_22 + fVar0);
	uParam0->f_22 = __LIB_0__::func_331(uParam0->f_22, -2f, 2f);
}

void func_391(var uParam0)//Position - 0x43DA
{
	float fVar0;
	switch (uParam0->f_20)
	{
		case 0:
			fVar0 = 0.5f;
			break;
		case 1:
			fVar0 = 0.25f;
			break;
		case 2:
			fVar0 = 0.05f;
			break;
	}
	uParam0->f_21 = (uParam0->f_21 - fVar0);
	uParam0->f_21 = __LIB_0__::func_331(uParam0->f_21, -2f, 2f);
}

void func_392(var uParam0)//Position - 0x4438
{
	float fVar0;
	switch (uParam0->f_20)
	{
		case 0:
			fVar0 = 0.5f;
			break;
		case 1:
			fVar0 = 0.25f;
			break;
		case 2:
			fVar0 = 0.05f;
			break;
	}
	uParam0->f_21 = (uParam0->f_21 + fVar0);
	uParam0->f_21 = __LIB_0__::func_331(uParam0->f_21, -2f, 2f);
}

bool func_393(struct<3> Param0, struct<3> Param1, struct<3> Param2, float fParam3)//Position - 0x44A2
{
	Param1.f_2 = (Param1.f_2 + 30f);
	Param2.f_2 = (Param2.f_2 - 5f);
	return OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, Param1, Param2, fParam3, false, true);
}

void func_394(var uParam0)//Position - 0x44E2
{
	if (uParam0->f_20 == 0)
	{
		uParam0->f_24 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 0.4f);
	}
	else if (uParam0->f_20 == 1)
	{
		uParam0->f_24 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 0.2f);
	}
	else if (uParam0->f_20 == 2)
	{
		uParam0->f_24 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 0.01f);
	}
}

void func_395(var uParam0, float fParam1)//Position - 0x4532
{
	uParam0->f_24 = fParam1;
}

void func_396(var uParam0, struct<3> Param1)//Position - 0x4552
{
	*uParam0 = { Param1 };
}

float func_397(var uParam0, struct<3> Param1, float fParam2, float fParam3)//Position - 0x465C
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	float fVar3;
	Var0 = { Param1 - uParam0->f_37 };
	*fParam3 = SYSTEM::VMAG(Var0);
	if (*fParam3 > 5f)
	{
		Var0 = { Var0 * FtoV((5f / *fParam3)) };
	}
	Var1 = { ENTITY::GET_ENTITY_VELOCITY(uParam0->f_32) };
	fVar2 = ((SYSTEM::VDIST(Var0, Var1) * 2f) / 5f);
	fVar3 = ((fParam2 * 5f) - fVar2);
	if (fVar3 < 0f)
	{
		fVar3 = 0f;
	}
	return fVar3;
}

float func_398(int iParam0)//Position - 0x46C8
{
	switch (iParam0)
	{
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
			return 0.05f;
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
		case 59:
			return 0.05f;
		case 72:
		case 73:
			return 0.4f;
		default:
	}
	return 0f;
}

Vector3 func_399(var uParam0, struct<3> Param1)//Position - 0x4768
{
	struct<3> Var0;
	Var0 = { Vector(Param1.f_0, Param1.f_0, Param1.f_0) * uParam0->f_43 };
	Var0 = { Var0 + Vector(Param1.f_1, Param1.f_1, Param1.f_1) * uParam0->f_40 };
	Var0.f_2 = (Var0.f_2 + Param1.f_2);
	return Var0;
}

Vector3 func_400(var uParam0, struct<3> Param1)//Position - 0x47A4
{
	struct<3> Var0;
	float fVar1;
	struct<3> Var2;
	Var0 = { Param1 - uParam0->f_37 };
	fVar1 = __LIB_0__::func_158(Var0, uParam0->f_40);
	Var2 = { uParam0->f_40 * Vector(fVar1, fVar1, fVar1) };
	return uParam0->f_37 + Var2;
}

void func_401(var uParam0, var uParam1)//Position - 0x4893
{
	uParam0->f_49 = { *uParam1 };
}

void func_402(var uParam0)//Position - 0x4962
{
	uParam0->f_1++;
}

void func_403(var uParam0)//Position - 0x4CCC
{
	uParam0->f_6 = 0f;
}

struct<8> func_404(var uParam0)//Position - 0x59CE
{
	return uParam0->f_86;
}

void func_405(int iParam0, bool bParam1)//Position - 0x5AB2
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if ((ENTITY::IS_ENTITY_VISIBLE(iParam0) && !bParam1) || (!ENTITY::IS_ENTITY_VISIBLE(iParam0) && bParam1))
		{
			ENTITY::SET_ENTITY_VISIBLE(iParam0, bParam1, false);
			OBJECT::SET_ENTITY_FLAG_RENDER_SMALL_SHADOW(iParam0, bParam1);
		}
	}
}

float func_406(var uParam0)//Position - 0x64CA
{
	return uParam0->f_66;
}

int func_407(int iParam0)//Position - 0x64D6
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		case 1:
			if (MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f) < 0.3f)
			{
				if (MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f) < 0.5f)
				{
					return 1;
				}
				else
				{
					return 2;
				}
			}
			else
			{
				return 0;
			}
			break;
		case 2:
			if (MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f) < 0.2f)
			{
				if (MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f) < 0.6f)
				{
					return 1;
				}
				else
				{
					return 2;
				}
			}
			else
			{
				return 0;
			}
			break;
	}
	return 0;
}

void func_408(var uParam0, int iParam1)//Position - 0x6575
{
	uParam0->f_22 = iParam1;
}

void func_409(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4, int iParam5)//Position - 0x6583
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	if (iParam5 == 0)
	{
		if (bParam4)
		{
			fVar0 = PAD::GET_CONTROL_NORMAL(0 /*PLAYER_CONTROL*/, 218 /*INPUT_SCRIPT_LEFT_AXIS_X*/);
			fVar1 = PAD::GET_CONTROL_NORMAL(0 /*PLAYER_CONTROL*/, 219 /*INPUT_SCRIPT_LEFT_AXIS_Y*/);
			fVar2 = PAD::GET_CONTROL_NORMAL(0 /*PLAYER_CONTROL*/, 220 /*INPUT_SCRIPT_RIGHT_AXIS_X*/);
			fVar3 = PAD::GET_CONTROL_NORMAL(0 /*PLAYER_CONTROL*/, 221 /*INPUT_SCRIPT_RIGHT_AXIS_Y*/);
		}
		else
		{
			fVar0 = PAD::GET_DISABLED_CONTROL_NORMAL(0 /*PLAYER_CONTROL*/, 218 /*INPUT_SCRIPT_LEFT_AXIS_X*/);
			fVar1 = PAD::GET_DISABLED_CONTROL_NORMAL(0 /*PLAYER_CONTROL*/, 219 /*INPUT_SCRIPT_LEFT_AXIS_Y*/);
			fVar2 = PAD::GET_DISABLED_CONTROL_NORMAL(0 /*PLAYER_CONTROL*/, 220 /*INPUT_SCRIPT_RIGHT_AXIS_X*/);
			fVar3 = PAD::GET_DISABLED_CONTROL_NORMAL(0 /*PLAYER_CONTROL*/, 221 /*INPUT_SCRIPT_RIGHT_AXIS_Y*/);
		}
	}
	else if (bParam4)
	{
		fVar0 = PAD::GET_CONTROL_UNBOUND_NORMAL(0 /*PLAYER_CONTROL*/, 218 /*INPUT_SCRIPT_LEFT_AXIS_X*/);
		fVar1 = PAD::GET_CONTROL_UNBOUND_NORMAL(0 /*PLAYER_CONTROL*/, 219 /*INPUT_SCRIPT_LEFT_AXIS_Y*/);
		fVar2 = PAD::GET_CONTROL_UNBOUND_NORMAL(0 /*PLAYER_CONTROL*/, 220 /*INPUT_SCRIPT_RIGHT_AXIS_X*/);
		fVar3 = PAD::GET_CONTROL_UNBOUND_NORMAL(0 /*PLAYER_CONTROL*/, 221 /*INPUT_SCRIPT_RIGHT_AXIS_Y*/);
	}
	else
	{
		fVar0 = PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0 /*PLAYER_CONTROL*/, 218 /*INPUT_SCRIPT_LEFT_AXIS_X*/);
		fVar1 = PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0 /*PLAYER_CONTROL*/, 219 /*INPUT_SCRIPT_LEFT_AXIS_Y*/);
		fVar2 = PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0 /*PLAYER_CONTROL*/, 220 /*INPUT_SCRIPT_RIGHT_AXIS_X*/);
		fVar3 = PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0 /*PLAYER_CONTROL*/, 221 /*INPUT_SCRIPT_RIGHT_AXIS_Y*/);
	}
	*iParam0 = SYSTEM::ROUND((128f * fVar0));
	*iParam1 = SYSTEM::ROUND((128f * fVar1));
	*uParam2 = SYSTEM::ROUND((128f * fVar2));
	*uParam3 = SYSTEM::ROUND((128f * fVar3));
}

void func_410(var uParam0)//Position - 0x675E
{
	uParam0->f_63 = 0f;
}

int func_411(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4)//Position - 0x69CD
{
	struct<3> Var0;
	var uVar1;
	var uVar2;
	struct<3> Var3;
	float fVar4;
	struct<3> Var5;
	float fVar6;
	bool bVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		ENTITY::GET_ENTITY_MATRIX(iParam0, &uVar2, &uVar1, &Var3, &Var0);
		Var0 = { Var0 + Var3 * Vector(0.4f, 0.4f, 0.4f) };
		fVar4 = MISC::GET_FRAME_TIME();
		*uParam3 = { *uParam3 + *uParam4 * Vector(fVar4, fVar4, fVar4) };
		Var5 = { *uParam1 };
		fVar6 = __LIB_0__::func_158(*uParam3 - Var5, *uParam2);
		bVar7 = fVar6 < 0.35f;
		if (bVar7)
		{
			fVar8 = __LIB_0__::func_158(*uParam4, *uParam2);
			if (fVar8 < 0f)
			{
				fVar9 = (fVar6 / fVar8);
				fVar9 = __LIB_0__::func_331(fVar9, 0f, fVar4);
				*uParam3 = { *uParam3 - *uParam4 * Vector(fVar9, fVar9, fVar9) };
				fVar10 = __LIB_0__::func_158(*uParam3 - Var0, *uParam2);
				if (fVar10 < -0.1f)
				{
					*uParam3 = { *uParam3 - *uParam2 * Vector(fVar10, fVar10, fVar10) };
				}
			}
			else
			{
				*uParam3 = { *uParam3 - *uParam2 * Vector(fVar6, fVar6, fVar6) };
			}
		}
		return bVar7;
	}
	return 0;
}

Vector3 func_412(var uParam0)//Position - 0x6AC2
{
	struct<3> Var0;
	var uVar1;
	var uVar2;
	struct<3> Var3;
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_33))
	{
		ENTITY::PROCESS_ENTITY_ATTACHMENTS(uParam0->f_33);
		ENTITY::GET_ENTITY_MATRIX(uParam0->f_33, &uVar2, &uVar1, &Var3, &Var0);
		Var0 = { Var0 + Var3 * Vector(0.4f, 0.4f, 0.4f) };
	}
	return Var0;
}

int func_413(var uParam0)//Position - 0x6B05
{
	return uParam0->f_56;
}

void func_414(var uParam0, var uParam1)//Position - 0x6CA1
{
	uParam0->f_65 = uParam1;
}

void func_415(var uParam0, int iParam1)//Position - 0x6E93
{
	uParam0->f_52 = iParam1;
}

void func_416(var uParam0, float fParam1)//Position - 0x6EA1
{
	uParam0->f_71 = fParam1;
}

void func_417(var uParam0, float fParam1)//Position - 0x6EAF
{
	uParam0->f_70 = fParam1;
}

int func_418(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, bool bParam6, float fParam7, float fParam8, var uParam9)//Position - 0x6EBD
{
	float fVar0;
	struct<3> Var1;
	struct<3> Var2;
	float fVar3;
	var uVar4;
	struct<3> Var5;
	fVar0 = 0f;
	MISC::GET_LINE_PLANE_INTERSECTION(*uParam1, *uParam2, uParam0->f_37, uParam0->f_40, &fVar0);
	if (fVar0 < 0f || fVar0 > 1f)
	{
		return 0;
	}
	Var1 = { *uParam1 + *uParam2 - *uParam1 * Vector(fVar0, fVar0, fVar0) };
	Var2 = { Var1 - uParam0->f_37 };
	fVar3 = __LIB_0__::func_158(Var2, uParam0->f_43);
	if (MISC::ABSF(fVar3) < 2.85f)
	{
		return 0;
	}
	uVar4 = Var2.f_2;
	Var5 = { fVar3, 0f, uVar4 };
	*fParam7 = MISC::GET_RATIO_OF_CLOSEST_POINT_ON_LINE(Var5, *uParam5, *uParam3, false);
	*fParam8 = MISC::GET_RATIO_OF_CLOSEST_POINT_ON_LINE(Var5, __LIB_1__::func_287(bParam6, *uParam5, *uParam4), __LIB_1__::func_287(bParam6, *uParam4, *uParam5), false);
	if (((*fParam7 < 0f || *fParam7 > 2f) || *fParam8 < 0f) || *fParam8 > 2f)
	{
		return 0;
	}
	*uParam9 = { Var1 };
	return 2;
}

void func_419(var uParam0, var uParam1)//Position - 0x726D
{
	uParam0->f_56 = uParam1;
}

void func_420(var uParam0, int iParam1)//Position - 0x727B
{
	uParam0->f_53 = iParam1;
}

int func_421(var uParam0)//Position - 0x778C
{
	if (uParam0->f_31 == 4)
	{
		return 0;
	}
	return 1;
}

bool func_422(var uParam0)//Position - 0x77EF
{
	return uParam0->f_64 > 0.5f;
}

void func_423(var uParam0)//Position - 0x7801
{
	uParam0->f_64 = 0f;
}

void func_424(var uParam0)//Position - 0x780E
{
	uParam0->f_64 = (uParam0->f_64 + MISC::GET_FRAME_TIME());
}

void func_425(var uParam0)//Position - 0x7823
{
	uParam0->f_60 = (uParam0->f_60 + MISC::GET_FRAME_TIME());
}

void func_426(var uParam0)//Position - 0x7838
{
	uParam0->f_61 = (uParam0->f_61 + MISC::GET_FRAME_TIME());
}

void func_427(var uParam0)//Position - 0x784D
{
	uParam0->f_61 = 0f;
}

float func_428(var uParam0)//Position - 0x785A
{
	return uParam0->f_61;
}

int func_429(var uParam0, var uParam1, bool bParam2)//Position - 0x7935
{
	if (__LIB_0__::func_158(uParam1->f_40, uParam0->f_247.f_10) > 0f)
	{
		return 0;
	}
	if (__LIB_0__::func_158(uParam1->f_40, uParam0->f_1583[1 /*3*/] - uParam1->f_37) > 0f)
	{
		return 0;
	}
	if (__LIB_10__::func_197(uParam1) != 75)
	{
		return 0;
	}
	if (!bParam2)
	{
		return 0;
	}
	return 1;
}

bool func_430(var uParam0)//Position - 0x7996
{
	return uParam0->f_63 > 3f;
}

int func_431(var uParam0)//Position - 0x79A4
{
	return uParam0->f_65;
}

void func_432(var uParam0)//Position - 0x79B0
{
	uParam0->f_68 = 0f;
}

float func_433(var uParam0)//Position - 0x7A2B
{
	return uParam0->f_69;
}

float func_434(var uParam0)//Position - 0x7A37
{
	return uParam0->f_68;
}

void func_435(var uParam0)//Position - 0x7A43
{
	uParam0->f_68 = (uParam0->f_68 + MISC::GET_FRAME_TIME());
}

void func_436(var uParam0, struct<3> Param1, var uParam2, var uParam3, var uParam4, var uParam5)//Position - 0x7B84
{
	uParam0->f_78 = { Param1 };
	uParam0->f_81 = uParam2;
	uParam0->f_82 = uParam3;
	uParam0->f_83 = uParam4;
	uParam0->f_84 = uParam5;
}

void func_437(var uParam0, float fParam1)//Position - 0x7BD8
{
	uParam0->f_69 = fParam1;
}

void func_438(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5)//Position - 0x7BE6
{
	*uParam1 = { uParam0->f_78 };
	*uParam2 = uParam0->f_81;
	*uParam3 = uParam0->f_82;
	*uParam4 = uParam0->f_83;
	*uParam5 = uParam0->f_84;
}

bool func_439(var uParam0)//Position - 0x7CF8
{
	return uParam0->f_26;
}

int func_440(var uParam0, var uParam1, int iParam2, int iParam3)//Position - 0x8820
{
	float fVar0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	struct<3> Var5;
	struct<3> Var6;
	float fVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	int iVar12;
	Var1 = { 0f, 0f, 0f };
	fVar8 = 1f;
	Var6 = { ENTITY::GET_ENTITY_COORDS(uParam1->f_247, true) };
	if (MISC::ABSI(iParam3) > 125)
	{
		fVar9 = 2.5f;
		fVar10 = 0.5f;
		fVar11 = 0.75f;
		iVar12 = 0;
	}
	else
	{
		fVar9 = 0.55f;
		fVar10 = 0f;
		fVar11 = 0f;
		iVar12 = 1;
	}
	Var5 = { __LIB_0__::func_79(uParam1->f_1661) };
	fVar7 = ((SYSTEM::TO_FLOAT(iParam3) + 128f) / 256f);
	if (uParam0->f_1 == 0)
	{
		if (iParam2 == 1)
		{
			Var3 = { uParam1->f_189.f_16[3 /*3*/] - Var5 * Vector(fVar9, fVar9, fVar9) };
			Var4 = { uParam1->f_189.f_16[3 /*3*/] + uParam1->f_1661 * Vector(0.5f, 0.5f, 0.5f) + Var5 * Vector(fVar10, fVar10, fVar10) };
			Var1 = { __LIB_1__::func_576(Var3, Var4, fVar7) };
			if (__LIB_0__::func_158(uParam0->f_43, Var1 - Var6) > 0f)
			{
				fVar8 = -1f;
			}
		}
		else if (iParam2 == 0)
		{
			Var4 = { uParam1->f_189.f_16[2 /*3*/] + Var5 * Vector(fVar9, fVar9, fVar9) };
			Var3 = { uParam1->f_189.f_16[2 /*3*/] - uParam1->f_1661 * Vector(0.5f, 0.5f, 0.5f) - Var5 * Vector(fVar11, fVar11, fVar11) };
			Var1 = { __LIB_1__::func_576(Var3, Var4, fVar7) };
			if (__LIB_0__::func_158(uParam0->f_43, Var1 - Var6) < 0f)
			{
				fVar8 = -1f;
			}
		}
	}
	else if (iParam2 == 1)
	{
		Var3 = { uParam1->f_189.f_16[1 /*3*/] + Var5 * Vector(fVar9, fVar9, fVar9) };
		Var4 = { uParam1->f_189.f_16[1 /*3*/] - uParam1->f_1661 * Vector(0.5f, 0.5f, 0.5f) - Var5 * Vector(fVar10, fVar10, fVar10) };
		Var1 = { __LIB_1__::func_576(Var3, Var4, fVar7) };
		if (__LIB_0__::func_158(uParam0->f_43, Var1 - Var6) > 0f)
		{
			fVar8 = -1f;
		}
	}
	else if (iParam2 == 0)
	{
		Var4 = { uParam1->f_189.f_16[0 /*3*/] - Var5 * Vector(fVar9, fVar9, fVar9) };
		Var3 = { uParam1->f_189.f_16[0 /*3*/] + uParam1->f_1661 * Vector(0.5f, 0.5f, 0.5f) + Var5 * Vector(fVar11, fVar11, fVar11) };
		Var1 = { __LIB_1__::func_576(Var3, Var4, fVar7) };
		if (__LIB_0__::func_158(uParam0->f_43, Var1 - Var6) < 0f)
		{
			fVar8 = -1f;
		}
	}
	Var1.f_2 = uParam0->f_37.f_2;
	Var2 = { __LIB_0__::func_79(Var1 - Var6) };
	fVar0 = MISC::GET_ANGLE_BETWEEN_2D_VECTORS(uParam0->f_40, uParam0->f_40.f_1, Var2.f_0, Var2.f_1);
	fVar0 = (fVar0 * fVar8);
	*uParam0 = fVar0;
	if (iParam2 == 0)
	{
		*uParam0 = (*uParam0 * -1f);
	}
	return iVar12;
}

float func_441(var uParam0)//Position - 0x8ACA
{
	return uParam0->f_60;
}

void func_442(var uParam0, int iParam1)//Position - 0x8DA1
{
	uParam0->f_1672 = iParam1;
}

void func_443(var uParam0, int iParam1)//Position - 0x92BD
{
	uParam0->f_55 = iParam1;
}

void func_444(var uParam0, int iParam1, bool bParam2)//Position - 0x92CB
{
	if (bParam2)
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY((uParam0[iParam1 /*94*/])->f_32);
	}
	else
	{
		TASK::CLEAR_PED_TASKS((uParam0[iParam1 /*94*/])->f_32);
	}
}

bool func_445(var uParam0, int iParam1)//Position - 0x97AB
{
	return (uParam0->f_1673 && iParam1) != 0;
}

void func_446(var uParam0, int iParam1)//Position - 0x97BD
{
	uParam0->f_34 = iParam1;
}

void func_447(var uParam0, int iParam1)//Position - 0x97CB
{
	uParam0->f_1673 = (uParam0->f_1673 - (uParam0->f_1673 && iParam1));
}

void func_448(int iParam0, bool bParam1)//Position - 0x97E6
{
	if (iParam0 != 1)
	{
		if (bParam1)
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0);
			}
		}
		else if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), false, 0);
		}
	}
}

void func_449(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4)//Position - 0x9DF5
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	if (bParam4)
	{
		fVar0 = PAD::GET_CONTROL_NORMAL(0 /*PLAYER_CONTROL*/, 30 /*INPUT_MOVE_LR*/);
		fVar1 = PAD::GET_CONTROL_NORMAL(0 /*PLAYER_CONTROL*/, 31 /*INPUT_MOVE_UD*/);
		fVar2 = PAD::GET_CONTROL_NORMAL(0 /*PLAYER_CONTROL*/, 1 /*INPUT_LOOK_LR*/);
		fVar3 = PAD::GET_CONTROL_NORMAL(0 /*PLAYER_CONTROL*/, 2 /*INPUT_LOOK_UD*/);
	}
	else
	{
		fVar0 = PAD::GET_DISABLED_CONTROL_NORMAL(0 /*PLAYER_CONTROL*/, 30 /*INPUT_MOVE_LR*/);
		fVar1 = PAD::GET_DISABLED_CONTROL_NORMAL(0 /*PLAYER_CONTROL*/, 31 /*INPUT_MOVE_UD*/);
		fVar2 = PAD::GET_DISABLED_CONTROL_NORMAL(0 /*PLAYER_CONTROL*/, 1 /*INPUT_LOOK_LR*/);
		fVar3 = PAD::GET_DISABLED_CONTROL_NORMAL(0 /*PLAYER_CONTROL*/, 2 /*INPUT_LOOK_UD*/);
	}
	*uParam0 = ((fVar0 + 1f) / 2f);
	*uParam1 = ((fVar1 + 1f) / 2f);
	*uParam2 = ((fVar2 + 1f) / 2f);
	*uParam3 = ((fVar3 + 1f) / 2f);
}

void func_450(var uParam0)//Position - 0xA548
{
	uParam0->f_24 = (uParam0->f_24 - MISC::GET_FRAME_TIME());
}

int func_451(var uParam0)//Position - 0xA602
{
	float fVar0;
	fVar0 = SYSTEM::VDIST(*uParam0, uParam0->f_3);
	if (fVar0 > 0.1f)
	{
		return 1;
	}
	return 0;
}

void func_452(var uParam0, var uParam1)//Position - 0xA691
{
	uParam0->f_26 = uParam1;
}

void func_453(var uParam0)//Position - 0xA738
{
	uParam0->f_63 = (uParam0->f_63 + MISC::GET_FRAME_TIME());
}

void func_454(var uParam0, float fParam1)//Position - 0xA74D
{
	uParam0->f_72 = fParam1;
}

float func_455(var uParam0)//Position - 0xA75B
{
	return uParam0->f_72;
}

int func_456(var uParam0)//Position - 0xA7EE
{
	return uParam0->f_1672;
}

void func_457(var uParam0, int iParam1)//Position - 0xAA70
{
	uParam0->f_32 = iParam1;
}

int func_458(var uParam0)//Position - 0xAB1F
{
	if (!AUDIO::REQUEST_SCRIPT_AUDIO_BANK("SCRIPT\Tennis", false, -1))
	{
		if (uParam0->f_1657 != 1)
		{
		}
		return 0;
	}
	if (!AUDIO::REQUEST_SCRIPT_AUDIO_BANK("SCRIPT\TENNIS_VER2_A", false, -1))
	{
		if (uParam0->f_1657 != 1)
		{
		}
		return 0;
	}
	if (!STREAMING::HAS_MODEL_LOADED(joaat("prop_tennis_ball")))
	{
		if (uParam0->f_1657 != 1)
		{
		}
		return 0;
	}
	if (!STREAMING::HAS_MODEL_LOADED(uParam0->f_1668))
	{
		if (uParam0->f_1657 != 1)
		{
		}
		return 0;
	}
	if (uParam0->f_1657 == 1 && !STREAMING::HAS_MODEL_LOADED(uParam0->f_1669))
	{
		if (uParam0->f_1657 != 1)
		{
		}
		return 0;
	}
	if (!STREAMING::HAS_MODEL_LOADED(joaat("prop_tennis_rack_01b")))
	{
		if (uParam0->f_1657 != 1)
		{
		}
		return 0;
	}
	if (!STREAMING::HAS_ANIM_DICT_LOADED("mini@tennis"))
	{
		if (uParam0->f_1657 != 1)
		{
		}
		return 0;
	}
	if (uParam0->f_1657 == 1)
	{
		if (!STREAMING::HAS_ANIM_DICT_LOADED("mini@tennis@female"))
		{
			if (uParam0->f_1657 != 1)
			{
			}
			return 0;
		}
	}
	if (uParam0->f_1657 != 1)
	{
		if (uParam0->f_1657 != 1 && !STREAMING::HAS_MODEL_LOADED(joaat("prop_vb_34_tencrt_lighting")))
		{
			return 0;
		}
		if (uParam0->f_1657 != 1 && !STREAMING::HAS_ANIM_DICT_LOADED("mini@triathlon"))
		{
		}
	}
	if (!STREAMING::HAS_ANIM_DICT_LOADED("weapons@tennis@male"))
	{
		return 0;
	}
	return 1;
}

Vector3 func_459(var uParam0, int iParam1, struct<3> Param2, struct<3> Param3, bool bParam4, int iParam5)//Position - 0xAC98
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	float fVar3;
	int iVar4;
	iVar4 = iParam5;
	if ((bParam4 && iParam1 == 1) && iVar4 == 0)
	{
		fVar2 = 0.75f;
		fVar3 = -0.025f;
		Var1 = { uParam0->f_3[0 /*3*/] };
	}
	else if ((bParam4 && iParam1 == 0) && iVar4 == 0)
	{
		fVar2 = 0.25f;
		fVar3 = -0.025f;
		Var1 = { uParam0->f_3[0 /*3*/] };
	}
	else if ((bParam4 && iParam1 == 1) && iVar4 == 1)
	{
		fVar2 = 0.25f;
		fVar3 = 0.025f;
		Var1 = { uParam0->f_3[3 /*3*/] };
	}
	else if ((bParam4 && iParam1 == 0) && iVar4 == 1)
	{
		fVar2 = 0.75f;
		fVar3 = 0.025f;
		Var1 = { uParam0->f_3[3 /*3*/] };
	}
	else if ((!bParam4 && iParam1 == 1) && iVar4 == 0)
	{
		fVar2 = 0.75f;
		fVar3 = 0f;
		Var1 = { uParam0->f_3[0 /*3*/] };
	}
	else if ((!bParam4 && iParam1 == 0) && iVar4 == 0)
	{
		fVar2 = 0.25f;
		fVar3 = 0f;
		Var1 = { uParam0->f_3[0 /*3*/] };
	}
	else if ((!bParam4 && iParam1 == 1) && iVar4 == 1)
	{
		fVar2 = 0.25f;
		fVar3 = 0f;
		Var1 = { uParam0->f_3[3 /*3*/] };
	}
	else if ((!bParam4 && iParam1 == 0) && iVar4 == 1)
	{
		fVar2 = 0.75f;
		fVar3 = 0f;
		Var1 = { uParam0->f_3[3 /*3*/] };
	}
	Var0 = { Var1 + Param2 * Vector(fVar2, fVar2, fVar2) + Param3 * Vector(fVar3, fVar3, fVar3) };
	return Var0;
}

bool func_460(var uParam0)//Position - 0xAFB6
{
	return GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uParam0->f_23);
}

Vector3 func_461(struct<3> Param0, float fParam1)//Position - 0xB376
{
	struct<3> Var0;
	float fVar1;
	struct<3> Var2;
	Var0 = { 0f, 0f, -9.8f };
	fVar1 = SYSTEM::VMAG(Param0);
	Var2 = { -Param0 * FtoV((fVar1 * 0.065f)) };
	Var2 = { Var2 + Var0 };
	Var2 = { Var2 * Vector(fParam1, fParam1, fParam1) };
	return Var2;
}

Vector3 func_462(struct<3> Param0)//Position - 0xB3C3
{
	Param0 = { Param0 * Vector(1f, 1f, 1f) };
	Param0.f_2 = -Param0.f_2;
	if (Param0.f_2 < 0.01f)
	{
		Param0.f_2 = 0f;
	}
	return Param0;
}

int func_463(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, float fParam6)//Position - 0xB3F5
{
	float fVar0;
	struct<3> Var1;
	struct<3> Var2;
	float fVar3;
	float fVar4;
	float fVar5;
	struct<3> Var6;
	float fVar7;
	MISC::GET_LINE_PLANE_INTERSECTION(*uParam1, *uParam2, uParam0->f_29, *uParam3, &fVar0);
	if (fVar0 >= 0f && fVar0 <= 1f)
	{
		Var1 = { *uParam1 + *uParam2 - *uParam1 * Vector(fVar0, fVar0, fVar0) };
		fVar3 = MISC::GET_RATIO_OF_CLOSEST_POINT_ON_LINE(Var1, uParam0->f_39[0 /*3*/], uParam0->f_39[1 /*3*/], false);
		fVar4 = MISC::GET_RATIO_OF_CLOSEST_POINT_ON_LINE(Var1, uParam0->f_39[1 /*3*/], uParam0->f_39[2 /*3*/], false);
		if (fVar3 > 0f && fVar3 < 1f)
		{
			Var2 = { uParam0->f_39[0 /*3*/] + uParam0->f_39[1 /*3*/] - uParam0->f_39[0 /*3*/] * Vector(fVar3, fVar3, fVar3) };
		}
		else if ((fVar4 > 0f && fVar4 < 1f) && fVar3 > 0f)
		{
			Var2 = { uParam0->f_39[1 /*3*/] + uParam0->f_39[2 /*3*/] - uParam0->f_39[1 /*3*/] * Vector(fVar4, fVar4, fVar4) };
		}
		fVar5 = (Var1.f_2 - Var2.f_2);
		if (fVar5 <= __LIB_0__::func_331((0.025f - fParam6), -1f, 0f))
		{
			return 2;
		}
		else if (fVar5 > 0f && fVar5 <= (0.025f - fParam6))
		{
			Var6 = { *uParam3 / FtoV(SYSTEM::VMAG(*uParam3)) };
			if (__LIB_0__::func_158(*uParam2 - *uParam1, Var6) > 0f)
			{
				Var6 = { Var6 * Vector(-1f, -1f, -1f) };
			}
			fVar7 = SYSTEM::SQRT(((0.025f * 0.025f) - (fVar5 * fVar5)));
			*uParam4 = { Var1 + Var6 * Vector(fVar7, fVar7, fVar7) };
			*uParam5 = { *uParam4 - Var2 };
			*uParam5 = { *uParam5 / FtoV(SYSTEM::VMAG(*uParam5)) };
			return 3;
		}
	}
	return 0;
}

bool func_464(var uParam0, int iParam1)//Position - 0xB709
{
	return __LIB_0__::func_703(uParam0->f_24, iParam1);
}

void func_465(var uParam0)//Position - 0xB71B
{
	uParam0->f_1667 = !uParam0->f_1667;
}

void func_466(var uParam0)//Position - 0xBC86
{
	uParam0->f_6 = (uParam0->f_6 + MISC::GET_FRAME_TIME());
}

void func_467(var uParam0)//Position - 0xC020
{
	uParam0->f_1672 = (uParam0->f_1672 + SYSTEM::ROUND((MISC::GET_FRAME_TIME() * 1000f)));
}

void func_468(var uParam0, struct<3> Param1, struct<3> Param2, struct<3> Param3, struct<3> Param4)//Position - 0xC1F7
{
	uParam0->f_6[0 /*3*/] = { Param1 + Param2 * Vector(1f, 1f, 1f) + Param3 * Vector(4f, 4f, 4f) };
	uParam0->f_6[1 /*3*/] = { Param1 + Param2 * Vector(8f, 8f, 8f) + Param3 * Vector(2.165f, 2.165f, 2.165f) };
	uParam0->f_6[2 /*3*/] = { Param1 + Param2 * Vector(8f, 8f, 8f) + Param3 * Vector(6f, 6f, 6f) };
	uParam0->f_6[3 /*3*/] = { Param4 + Param2 * Vector(0.5f, 0.5f, 0.5f) + Param3 * Vector(4f, 4f, 4f) };
}

void func_469(var uParam0)//Position - 0xC283
{
	uParam0->f_535[3 /*12*/] = 0f;
	uParam0->f_535[3 /*12*/].f_1 = 0.167f;
	uParam0->f_535[3 /*12*/].f_2 = 0.633f;
	uParam0->f_535[3 /*12*/].f_3 = 48;
	StringCopy(&(uParam0->f_535[3 /*12*/].f_4), "backhand_bs_hi", 32);
	uParam0->f_535[5 /*12*/] = 0f;
	uParam0->f_535[5 /*12*/].f_1 = 0.143f;
	uParam0->f_535[5 /*12*/].f_2 = 0.633f;
	uParam0->f_535[5 /*12*/].f_3 = 56;
	StringCopy(&(uParam0->f_535[5 /*12*/].f_4), "backhand_bs_lo", 32);
	uParam0->f_535[4 /*12*/] = 0f;
	uParam0->f_535[4 /*12*/].f_1 = 0.15f;
	uParam0->f_535[4 /*12*/].f_2 = 0.633f;
	uParam0->f_535[4 /*12*/].f_3 = 46;
	StringCopy(&(uParam0->f_535[4 /*12*/].f_4), "backhand_bs_md", 32);
	uParam0->f_535[0 /*12*/] = 0f;
	uParam0->f_535[0 /*12*/].f_1 = 0.14f;
	uParam0->f_535[0 /*12*/].f_2 = 0.53f;
	uParam0->f_535[0 /*12*/].f_3 = 58;
	StringCopy(&(uParam0->f_535[0 /*12*/].f_4), "backhand_ts_hi", 32);
	uParam0->f_535[2 /*12*/] = 0f;
	uParam0->f_535[2 /*12*/].f_1 = 0.15f;
	uParam0->f_535[2 /*12*/].f_2 = 0.535f;
	uParam0->f_535[2 /*12*/].f_3 = 54;
	StringCopy(&(uParam0->f_535[2 /*12*/].f_4), "backhand_ts_lo", 32);
	uParam0->f_535[1 /*12*/] = 0f;
	uParam0->f_535[1 /*12*/].f_1 = 0.17f;
	uParam0->f_535[1 /*12*/].f_2 = 0.665f;
	uParam0->f_535[1 /*12*/].f_3 = 46;
	StringCopy(&(uParam0->f_535[1 /*12*/].f_4), "backhand_ts_md", 32);
	uParam0->f_535[9 /*12*/] = 0.125f;
	uParam0->f_535[9 /*12*/].f_1 = 0.167f;
	uParam0->f_535[9 /*12*/].f_2 = 0.633f;
	uParam0->f_535[9 /*12*/].f_3 = 48;
	StringCopy(&(uParam0->f_535[9 /*12*/].f_4), "backhand_bs_hi", 32);
	uParam0->f_535[11 /*12*/] = 0.089f;
	uParam0->f_535[11 /*12*/].f_1 = 0.143f;
	uParam0->f_535[11 /*12*/].f_2 = 0.633f;
	uParam0->f_535[11 /*12*/].f_3 = 56;
	StringCopy(&(uParam0->f_535[11 /*12*/].f_4), "backhand_bs_lo", 32);
	uParam0->f_535[10 /*12*/] = 0.108f;
	uParam0->f_535[10 /*12*/].f_1 = 0.15f;
	uParam0->f_535[10 /*12*/].f_2 = 0.633f;
	uParam0->f_535[10 /*12*/].f_3 = 46;
	StringCopy(&(uParam0->f_535[10 /*12*/].f_4), "backhand_bs_md", 32);
	uParam0->f_535[6 /*12*/] = 0.086f;
	uParam0->f_535[6 /*12*/].f_1 = 0.12f;
	uParam0->f_535[6 /*12*/].f_2 = 0.53f;
	uParam0->f_535[6 /*12*/].f_3 = 58;
	StringCopy(&(uParam0->f_535[6 /*12*/].f_4), "backhand_ts_hi", 32);
	uParam0->f_535[8 /*12*/] = 0.0925f;
	uParam0->f_535[8 /*12*/].f_1 = 0.15f;
	uParam0->f_535[8 /*12*/].f_2 = 0.535f;
	uParam0->f_535[8 /*12*/].f_3 = 54;
	StringCopy(&(uParam0->f_535[8 /*12*/].f_4), "backhand_ts_lo", 32);
	uParam0->f_535[7 /*12*/] = 0.108f;
	uParam0->f_535[7 /*12*/].f_1 = 0.16f;
	uParam0->f_535[7 /*12*/].f_2 = 0.665f;
	uParam0->f_535[7 /*12*/].f_3 = 46;
	StringCopy(&(uParam0->f_535[7 /*12*/].f_4), "backhand_ts_md", 32);
	uParam0->f_535[35 /*12*/] = 0f;
	uParam0->f_535[35 /*12*/].f_1 = 0.3f;
	uParam0->f_535[35 /*12*/].f_2 = 0.58f;
	uParam0->f_535[35 /*12*/].f_3 = 46;
	StringCopy(&(uParam0->f_535[35 /*12*/].f_4), "close_bh_bs_lo", 32);
	uParam0->f_535[34 /*12*/] = 0f;
	uParam0->f_535[34 /*12*/].f_1 = 0.3f;
	uParam0->f_535[34 /*12*/].f_2 = 0.585f;
	uParam0->f_535[34 /*12*/].f_3 = 46;
	StringCopy(&(uParam0->f_535[34 /*12*/].f_4), "close_bh_bs_md", 32);
	uParam0->f_535[33 /*12*/] = 0f;
	uParam0->f_535[33 /*12*/].f_1 = 0.29f;
	uParam0->f_535[33 /*12*/].f_2 = 0.63f;
	uParam0->f_535[33 /*12*/].f_3 = 48;
	StringCopy(&(uParam0->f_535[33 /*12*/].f_4), "close_bh_bs_hi", 32);
	uParam0->f_535[32 /*12*/] = 0f;
	uParam0->f_535[32 /*12*/].f_1 = 0.28f;
	uParam0->f_535[32 /*12*/].f_2 = 0.708f;
	uParam0->f_535[32 /*12*/].f_3 = 50;
	StringCopy(&(uParam0->f_535[32 /*12*/].f_4), "close_bh_ts_lo", 32);
	uParam0->f_535[31 /*12*/] = 0f;
	uParam0->f_535[31 /*12*/].f_1 = 0.26f;
	uParam0->f_535[31 /*12*/].f_2 = 0.71f;
	uParam0->f_535[31 /*12*/].f_3 = 54;
	StringCopy(&(uParam0->f_535[31 /*12*/].f_4), "close_bh_ts_md", 32);
	uParam0->f_535[30 /*12*/] = 0f;
	uParam0->f_535[30 /*12*/].f_1 = 0.26f;
	uParam0->f_535[30 /*12*/].f_2 = 0.643f;
	uParam0->f_535[30 /*12*/].f_3 = 54;
	StringCopy(&(uParam0->f_535[30 /*12*/].f_4), "close_bh_ts_hi", 32);
	uParam0->f_535[47 /*12*/] = 0.174f;
	uParam0->f_535[47 /*12*/].f_1 = uParam0->f_535[35 /*12*/].f_1;
	uParam0->f_535[47 /*12*/].f_2 = uParam0->f_535[35 /*12*/].f_2;
	uParam0->f_535[47 /*12*/].f_3 = uParam0->f_535[35 /*12*/].f_3;
	StringCopy(&(uParam0->f_535[47 /*12*/].f_4), "close_bh_bs_lo", 32);
	uParam0->f_535[46 /*12*/] = 0.217f;
	uParam0->f_535[46 /*12*/].f_1 = uParam0->f_535[34 /*12*/].f_1;
	uParam0->f_535[46 /*12*/].f_2 = uParam0->f_535[34 /*12*/].f_2;
	uParam0->f_535[46 /*12*/].f_3 = uParam0->f_535[34 /*12*/].f_3;
	StringCopy(&(uParam0->f_535[46 /*12*/].f_4), "close_bh_bs_md", 32);
	uParam0->f_535[45 /*12*/] = 0.208f;
	uParam0->f_535[45 /*12*/].f_1 = uParam0->f_535[33 /*12*/].f_1;
	uParam0->f_535[45 /*12*/].f_2 = uParam0->f_535[33 /*12*/].f_2;
	uParam0->f_535[45 /*12*/].f_3 = uParam0->f_535[33 /*12*/].f_3;
	StringCopy(&(uParam0->f_535[45 /*12*/].f_4), "close_bh_bs_hi", 32);
	uParam0->f_535[44 /*12*/] = 0.12f;
	uParam0->f_535[44 /*12*/].f_1 = uParam0->f_535[32 /*12*/].f_1;
	uParam0->f_535[44 /*12*/].f_2 = uParam0->f_535[32 /*12*/].f_2;
	uParam0->f_535[44 /*12*/].f_3 = uParam0->f_535[32 /*12*/].f_3;
	StringCopy(&(uParam0->f_535[44 /*12*/].f_4), "close_bh_ts_lo", 32);
	uParam0->f_535[43 /*12*/] = 0.148f;
	uParam0->f_535[43 /*12*/].f_1 = uParam0->f_535[31 /*12*/].f_1;
	uParam0->f_535[43 /*12*/].f_2 = uParam0->f_535[31 /*12*/].f_2;
	uParam0->f_535[43 /*12*/].f_3 = uParam0->f_535[31 /*12*/].f_3;
	StringCopy(&(uParam0->f_535[43 /*12*/].f_4), "close_bh_ts_md", 32);
	uParam0->f_535[42 /*12*/] = 0.09f;
	uParam0->f_535[42 /*12*/].f_1 = uParam0->f_535[30 /*12*/].f_1;
	uParam0->f_535[42 /*12*/].f_2 = uParam0->f_535[30 /*12*/].f_2;
	uParam0->f_535[42 /*12*/].f_3 = uParam0->f_535[30 /*12*/].f_3;
	StringCopy(&(uParam0->f_535[42 /*12*/].f_4), "close_bh_ts_hi", 32);
	uParam0->f_535[41 /*12*/] = 0f;
	uParam0->f_535[41 /*12*/].f_1 = 0.27f;
	uParam0->f_535[41 /*12*/].f_2 = 0.613f;
	uParam0->f_535[41 /*12*/].f_3 = 56;
	StringCopy(&(uParam0->f_535[41 /*12*/].f_4), "close_fh_bs_lo", 32);
	uParam0->f_535[40 /*12*/] = 0f;
	uParam0->f_535[40 /*12*/].f_1 = 0.27f;
	uParam0->f_535[40 /*12*/].f_2 = 0.533f;
	uParam0->f_535[40 /*12*/].f_3 = 57;
	StringCopy(&(uParam0->f_535[40 /*12*/].f_4), "close_fh_bs_md", 32);
	uParam0->f_535[39 /*12*/] = 0f;
	uParam0->f_535[39 /*12*/].f_1 = 0.28f;
	uParam0->f_535[39 /*12*/].f_2 = 0.69f;
	uParam0->f_535[39 /*12*/].f_3 = 53;
	StringCopy(&(uParam0->f_535[39 /*12*/].f_4), "close_fh_bs_hi", 32);
	uParam0->f_535[38 /*12*/] = 0f;
	uParam0->f_535[38 /*12*/].f_1 = 0.26f;
	uParam0->f_535[38 /*12*/].f_2 = 0.665f;
	uParam0->f_535[38 /*12*/].f_3 = 57;
	StringCopy(&(uParam0->f_535[38 /*12*/].f_4), "close_fh_ts_lo", 32);
	uParam0->f_535[37 /*12*/] = 0f;
	uParam0->f_535[37 /*12*/].f_1 = 0.28f;
	uParam0->f_535[37 /*12*/].f_2 = 0.782f;
	uParam0->f_535[37 /*12*/].f_3 = 55;
	StringCopy(&(uParam0->f_535[37 /*12*/].f_4), "close_fh_ts_md", 32);
	uParam0->f_535[36 /*12*/] = 0f;
	uParam0->f_535[36 /*12*/].f_1 = 0.24f;
	uParam0->f_535[36 /*12*/].f_2 = 0.698f;
	uParam0->f_535[36 /*12*/].f_3 = 62;
	StringCopy(&(uParam0->f_535[36 /*12*/].f_4), "close_fh_ts_hi", 32);
	uParam0->f_535[53 /*12*/] = 0.135f;
	uParam0->f_535[53 /*12*/].f_1 = uParam0->f_535[41 /*12*/].f_1;
	uParam0->f_535[53 /*12*/].f_2 = uParam0->f_535[41 /*12*/].f_2;
	uParam0->f_535[53 /*12*/].f_3 = uParam0->f_535[41 /*12*/].f_3;
	StringCopy(&(uParam0->f_535[53 /*12*/].f_4), "close_fh_bs_lo", 32);
	uParam0->f_535[52 /*12*/] = 0.173f;
	uParam0->f_535[52 /*12*/].f_1 = uParam0->f_535[40 /*12*/].f_1;
	uParam0->f_535[52 /*12*/].f_2 = uParam0->f_535[40 /*12*/].f_2;
	uParam0->f_535[52 /*12*/].f_3 = uParam0->f_535[40 /*12*/].f_3;
	StringCopy(&(uParam0->f_535[52 /*12*/].f_4), "close_fh_bs_md", 32);
	uParam0->f_535[51 /*12*/] = 0.12f;
	uParam0->f_535[51 /*12*/].f_1 = uParam0->f_535[39 /*12*/].f_1;
	uParam0->f_535[51 /*12*/].f_2 = uParam0->f_535[39 /*12*/].f_2;
	uParam0->f_535[51 /*12*/].f_3 = uParam0->f_535[39 /*12*/].f_3;
	StringCopy(&(uParam0->f_535[51 /*12*/].f_4), "close_fh_bs_hi", 32);
	uParam0->f_535[50 /*12*/] = 0.148f;
	uParam0->f_535[50 /*12*/].f_1 = uParam0->f_535[38 /*12*/].f_1;
	uParam0->f_535[50 /*12*/].f_2 = uParam0->f_535[38 /*12*/].f_2;
	uParam0->f_535[50 /*12*/].f_3 = uParam0->f_535[38 /*12*/].f_3;
	StringCopy(&(uParam0->f_535[50 /*12*/].f_4), "close_fh_ts_lo", 32);
	uParam0->f_535[49 /*12*/] = 0.16f;
	uParam0->f_535[49 /*12*/].f_1 = uParam0->f_535[37 /*12*/].f_1;
	uParam0->f_535[49 /*12*/].f_2 = uParam0->f_535[37 /*12*/].f_2;
	uParam0->f_535[49 /*12*/].f_3 = uParam0->f_535[37 /*12*/].f_3;
	StringCopy(&(uParam0->f_535[49 /*12*/].f_4), "close_fh_ts_md", 32);
	uParam0->f_535[48 /*12*/] = 0.155f;
	uParam0->f_535[48 /*12*/].f_1 = uParam0->f_535[36 /*12*/].f_1;
	uParam0->f_535[48 /*12*/].f_2 = uParam0->f_535[36 /*12*/].f_2;
	uParam0->f_535[48 /*12*/].f_3 = uParam0->f_535[36 /*12*/].f_3;
	StringCopy(&(uParam0->f_535[48 /*12*/].f_4), "close_fh_ts_hi", 32);
	uParam0->f_535[15 /*12*/] = 0f;
	uParam0->f_535[15 /*12*/].f_1 = 0.21f;
	uParam0->f_535[15 /*12*/].f_2 = 0.7f;
	uParam0->f_535[15 /*12*/].f_3 = 43;
	StringCopy(&(uParam0->f_535[15 /*12*/].f_4), "forehand_bs_hi", 32);
	uParam0->f_535[17 /*12*/] = 0f;
	uParam0->f_535[17 /*12*/].f_1 = 0.16f;
	uParam0->f_535[17 /*12*/].f_2 = 0.67f;
	uParam0->f_535[17 /*12*/].f_3 = 46;
	StringCopy(&(uParam0->f_535[17 /*12*/].f_4), "forehand_bs_lo", 32);
	uParam0->f_535[16 /*12*/] = 0f;
	uParam0->f_535[16 /*12*/].f_1 = 0.18f;
	uParam0->f_535[16 /*12*/].f_2 = 0.6f;
	uParam0->f_535[16 /*12*/].f_3 = 46;
	StringCopy(&(uParam0->f_535[16 /*12*/].f_4), "forehand_bs_md", 32);
	uParam0->f_535[24 /*12*/] = 0.136f;
	uParam0->f_535[24 /*12*/].f_1 = 0.21f;
	uParam0->f_535[24 /*12*/].f_2 = 0.7f;
	uParam0->f_535[24 /*12*/].f_3 = 43;
	StringCopy(&(uParam0->f_535[24 /*12*/].f_4), "forehand_bs_hi", 32);
	uParam0->f_535[26 /*12*/] = 0.108f;
	uParam0->f_535[26 /*12*/].f_1 = 0.16f;
	uParam0->f_535[26 /*12*/].f_2 = 0.67f;
	uParam0->f_535[26 /*12*/].f_3 = 46;
	StringCopy(&(uParam0->f_535[26 /*12*/].f_4), "forehand_bs_lo", 32);
	uParam0->f_535[25 /*12*/] = 0.108f;
	uParam0->f_535[25 /*12*/].f_1 = 0.18f;
	uParam0->f_535[25 /*12*/].f_2 = 0.6f;
	uParam0->f_535[25 /*12*/].f_3 = 46;
	StringCopy(&(uParam0->f_535[25 /*12*/].f_4), "forehand_bs_md", 32);
	uParam0->f_535[18 /*12*/] = 0f;
	uParam0->f_535[18 /*12*/].f_1 = 0.17f;
	uParam0->f_535[18 /*12*/].f_2 = 0.722f;
	uParam0->f_535[18 /*12*/].f_3 = 46;
	StringCopy(&(uParam0->f_535[18 /*12*/].f_4), "forehand_smash", 32);
	uParam0->f_535[19 /*12*/] = 0f;
	uParam0->f_535[19 /*12*/].f_1 = 0.17f;
	uParam0->f_535[19 /*12*/].f_2 = 0.614f;
	uParam0->f_535[19 /*12*/].f_3 = 46;
	StringCopy(&(uParam0->f_535[19 /*12*/].f_4), "forehand_smash_lt", 32);
	uParam0->f_535[20 /*12*/] = 0f;
	uParam0->f_535[20 /*12*/].f_1 = 0.17f;
	uParam0->f_535[20 /*12*/].f_2 = 0.7f;
	uParam0->f_535[20 /*12*/].f_3 = 46;
	StringCopy(&(uParam0->f_535[20 /*12*/].f_4), "forehand_smash_rt", 32);
	uParam0->f_535[27 /*12*/] = 0.108f;
	uParam0->f_535[27 /*12*/].f_1 = 0.17f;
	uParam0->f_535[27 /*12*/].f_2 = 0.722f;
	uParam0->f_535[27 /*12*/].f_3 = 46;
	StringCopy(&(uParam0->f_535[27 /*12*/].f_4), "forehand_smash", 32);
	uParam0->f_535[28 /*12*/] = 0.108f;
	uParam0->f_535[28 /*12*/].f_1 = 0.17f;
	uParam0->f_535[28 /*12*/].f_2 = 0.614f;
	uParam0->f_535[28 /*12*/].f_3 = 46;
	StringCopy(&(uParam0->f_535[28 /*12*/].f_4), "forehand_smash_lt", 32);
	uParam0->f_535[29 /*12*/] = 0.108f;
	uParam0->f_535[29 /*12*/].f_1 = 0.17f;
	uParam0->f_535[29 /*12*/].f_2 = 0.7f;
	uParam0->f_535[29 /*12*/].f_3 = 46;
	StringCopy(&(uParam0->f_535[29 /*12*/].f_4), "forehand_smash_rt", 32);
	uParam0->f_535[12 /*12*/] = 0f;
	uParam0->f_535[12 /*12*/].f_1 = 0.14f;
	uParam0->f_535[12 /*12*/].f_2 = 0.615f;
	uParam0->f_535[12 /*12*/].f_3 = 62;
	StringCopy(&(uParam0->f_535[12 /*12*/].f_4), "forehand_ts_hi", 32);
	uParam0->f_535[14 /*12*/] = 0f;
	uParam0->f_535[14 /*12*/].f_1 = 0.16f;
	uParam0->f_535[14 /*12*/].f_2 = 0.643f;
	uParam0->f_535[14 /*12*/].f_3 = 52;
	StringCopy(&(uParam0->f_535[14 /*12*/].f_4), "forehand_ts_lo", 32);
	uParam0->f_535[13 /*12*/] = 0f;
	uParam0->f_535[13 /*12*/].f_1 = 0.18f;
	uParam0->f_535[13 /*12*/].f_2 = 0.779f;
	uParam0->f_535[13 /*12*/].f_3 = 45;
	StringCopy(&(uParam0->f_535[13 /*12*/].f_4), "forehand_ts_md", 32);
	uParam0->f_535[21 /*12*/] = 0.08f;
	uParam0->f_535[21 /*12*/].f_1 = 0.14f;
	uParam0->f_535[21 /*12*/].f_2 = 0.615f;
	uParam0->f_535[21 /*12*/].f_3 = 62;
	StringCopy(&(uParam0->f_535[21 /*12*/].f_4), "forehand_ts_hi", 32);
	uParam0->f_535[23 /*12*/] = 0.094f;
	uParam0->f_535[23 /*12*/].f_1 = 0.16f;
	uParam0->f_535[23 /*12*/].f_2 = 0.643f;
	uParam0->f_535[23 /*12*/].f_3 = 52;
	StringCopy(&(uParam0->f_535[23 /*12*/].f_4), "forehand_ts_lo", 32);
	uParam0->f_535[22 /*12*/] = 0.108f;
	uParam0->f_535[22 /*12*/].f_1 = 0.18f;
	uParam0->f_535[22 /*12*/].f_2 = 0.779f;
	uParam0->f_535[22 /*12*/].f_3 = 45;
	StringCopy(&(uParam0->f_535[22 /*12*/].f_4), "forehand_ts_md", 32);
	uParam0->f_535[54 /*12*/] = 0.28f;
	uParam0->f_535[54 /*12*/].f_1 = 0.37f;
	uParam0->f_535[54 /*12*/].f_2 = 0.708f;
	uParam0->f_535[54 /*12*/].f_3 = 57;
	StringCopy(&(uParam0->f_535[54 /*12*/].f_4), "lunge_bh_hi", 32);
	uParam0->f_535[56 /*12*/] = 0.275f;
	uParam0->f_535[56 /*12*/].f_1 = 0.37f;
	uParam0->f_535[56 /*12*/].f_2 = 0.695f;
	uParam0->f_535[56 /*12*/].f_3 = 58;
	StringCopy(&(uParam0->f_535[56 /*12*/].f_4), "lunge_bh_lo", 32);
	uParam0->f_535[55 /*12*/] = 0.27f;
	uParam0->f_535[55 /*12*/].f_1 = 0.37f;
	uParam0->f_535[55 /*12*/].f_2 = 0.688f;
	uParam0->f_535[55 /*12*/].f_3 = 58;
	StringCopy(&(uParam0->f_535[55 /*12*/].f_4), "lunge_bh_mid", 32);
	uParam0->f_535[57 /*12*/] = 0.26f;
	uParam0->f_535[57 /*12*/].f_1 = 0.41f;
	uParam0->f_535[57 /*12*/].f_2 = 0.705f;
	uParam0->f_535[57 /*12*/].f_3 = 54;
	StringCopy(&(uParam0->f_535[57 /*12*/].f_4), "lunge_fh_hi", 32);
	uParam0->f_535[59 /*12*/] = 0.26f;
	uParam0->f_535[59 /*12*/].f_1 = 0.42f;
	uParam0->f_535[59 /*12*/].f_2 = 0.738f;
	uParam0->f_535[59 /*12*/].f_3 = 52;
	StringCopy(&(uParam0->f_535[59 /*12*/].f_4), "lunge_fh_lo", 32);
	uParam0->f_535[58 /*12*/] = 0.263f;
	uParam0->f_535[58 /*12*/].f_1 = 0.43f;
	uParam0->f_535[58 /*12*/].f_2 = 0.695f;
	uParam0->f_535[58 /*12*/].f_3 = 50;
	StringCopy(&(uParam0->f_535[58 /*12*/].f_4), "lunge_fh_mid", 32);
	uParam0->f_535[72 /*12*/] = 0.073f;
	uParam0->f_535[72 /*12*/].f_1 = 0.17f;
	uParam0->f_535[72 /*12*/].f_2 = 0.77f;
	uParam0->f_535[72 /*12*/].f_3 = 102;
	StringCopy(&(uParam0->f_535[72 /*12*/].f_4), "dive_bh", 32);
	uParam0->f_535[73 /*12*/] = 0.053f;
	uParam0->f_535[73 /*12*/].f_1 = 0.17f;
	uParam0->f_535[73 /*12*/].f_2 = 0.781f;
	uParam0->f_535[73 /*12*/].f_3 = 102;
	StringCopy(&(uParam0->f_535[73 /*12*/].f_4), "dive_fh", 32);
	uParam0->f_535[60 /*12*/] = 0f;
	uParam0->f_535[60 /*12*/].f_1 = 0.15f;
	uParam0->f_535[60 /*12*/].f_2 = 0.95f;
	uParam0->f_535[60 /*12*/].f_3 = 65;
	StringCopy(&(uParam0->f_535[60 /*12*/].f_4), "forehand_ts_lo_far", 32);
	uParam0->f_535[61 /*12*/] = 0f;
	uParam0->f_535[61 /*12*/].f_1 = 0.17f;
	uParam0->f_535[61 /*12*/].f_2 = 0.95f;
	uParam0->f_535[61 /*12*/].f_3 = 58;
	StringCopy(&(uParam0->f_535[61 /*12*/].f_4), "forehand_ts_md_far", 32);
	uParam0->f_535[62 /*12*/] = 0f;
	uParam0->f_535[62 /*12*/].f_1 = 0.13f;
	uParam0->f_535[62 /*12*/].f_2 = 0.95f;
	uParam0->f_535[62 /*12*/].f_3 = 74;
	StringCopy(&(uParam0->f_535[62 /*12*/].f_4), "forehand_ts_hi_far", 32);
	uParam0->f_535[63 /*12*/] = 0f;
	uParam0->f_535[63 /*12*/].f_1 = 0.2f;
	uParam0->f_535[63 /*12*/].f_2 = 0.95f;
	uParam0->f_535[63 /*12*/].f_3 = 40;
	StringCopy(&(uParam0->f_535[63 /*12*/].f_4), "close_bh_lo", 32);
	uParam0->f_535[64 /*12*/] = 0f;
	uParam0->f_535[64 /*12*/].f_1 = 0.2f;
	uParam0->f_535[64 /*12*/].f_2 = 0.95f;
	uParam0->f_535[64 /*12*/].f_3 = 40;
	StringCopy(&(uParam0->f_535[64 /*12*/].f_4), "close_bh_md", 32);
	uParam0->f_535[65 /*12*/] = 0f;
	uParam0->f_535[65 /*12*/].f_1 = 0.2f;
	uParam0->f_535[65 /*12*/].f_2 = 0.95f;
	uParam0->f_535[65 /*12*/].f_3 = 40;
	StringCopy(&(uParam0->f_535[65 /*12*/].f_4), "close_bh_hi", 32);
	uParam0->f_535[66 /*12*/] = 0f;
	uParam0->f_535[66 /*12*/].f_1 = 0.174f;
	uParam0->f_535[66 /*12*/].f_2 = 0.95f;
	uParam0->f_535[66 /*12*/].f_3 = 46;
	StringCopy(&(uParam0->f_535[66 /*12*/].f_4), "close_fh_lo", 32);
	uParam0->f_535[67 /*12*/] = 0f;
	uParam0->f_535[67 /*12*/].f_1 = 0.174f;
	uParam0->f_535[67 /*12*/].f_2 = 0.95f;
	uParam0->f_535[67 /*12*/].f_3 = 46;
	StringCopy(&(uParam0->f_535[67 /*12*/].f_4), "close_fh_md", 32);
	uParam0->f_535[68 /*12*/] = 0f;
	uParam0->f_535[68 /*12*/].f_1 = 0.174f;
	uParam0->f_535[68 /*12*/].f_2 = 0.95f;
	uParam0->f_535[68 /*12*/].f_3 = 46;
	StringCopy(&(uParam0->f_535[68 /*12*/].f_4), "close_fh_hi", 32);
	uParam0->f_535[69 /*12*/] = 0f;
	uParam0->f_535[69 /*12*/].f_1 = 0.25f;
	uParam0->f_535[69 /*12*/].f_2 = 0.95f;
	uParam0->f_535[69 /*12*/].f_3 = 48;
	StringCopy(&(uParam0->f_535[69 /*12*/].f_4), "mid_bh_lo", 32);
	uParam0->f_535[70 /*12*/] = 0f;
	uParam0->f_535[70 /*12*/].f_1 = 0.231f;
	uParam0->f_535[70 /*12*/].f_2 = 0.95f;
	uParam0->f_535[70 /*12*/].f_3 = 52;
	StringCopy(&(uParam0->f_535[70 /*12*/].f_4), "mid_bh_md", 32);
	uParam0->f_535[71 /*12*/] = 0f;
	uParam0->f_535[71 /*12*/].f_1 = 0.231f;
	uParam0->f_535[71 /*12*/].f_2 = 0.95f;
	uParam0->f_535[71 /*12*/].f_3 = 52;
	StringCopy(&(uParam0->f_535[71 /*12*/].f_4), "mid_bh_hi", 32);
}

void func_470(var uParam0)//Position - 0xD885
{
	int iVar0;
	int iVar1;
	uParam0->f_303[5 /*3*/] = { -0.8036f, 0.6726f, -0.6097f };
	uParam0->f_303[4 /*3*/] = { -0.8147f, 0.6746f, -0.0154f };
	uParam0->f_303[3 /*3*/] = { -0.8298f, 0.6483f, 0.615f };
	uParam0->f_303[2 /*3*/] = { -0.8254f, 0.6648f, -0.6352f };
	uParam0->f_303[1 /*3*/] = { -0.8217f, 0.6774f, -0.012f };
	uParam0->f_303[0 /*3*/] = { -0.8072f, 0.6576f, 0.5741f };
	uParam0->f_303[17 /*3*/] = { 0.813f, 0.6795f, -0.5939f };
	uParam0->f_303[16 /*3*/] = { 0.8651f, 0.6928f, 0.0177f };
	uParam0->f_303[15 /*3*/] = { 0.8592f, 0.6398f, 0.585f };
	uParam0->f_303[14 /*3*/] = { 0.8073f, 0.6708f, -0.5718f };
	uParam0->f_303[13 /*3*/] = { 0.831f, 0.6645f, 0.0059f };
	uParam0->f_303[12 /*3*/] = { 0.8462f, 0.6823f, 0.6137f };
	uParam0->f_303[18 /*3*/] = { 0.0038f, 0.571f, 1.4844f };
	uParam0->f_303[19 /*3*/] = { -0.6106f, 0.6003f, 1.4926f };
	uParam0->f_303[20 /*3*/] = { 0.5791f, 0.6003f, 1.4524f };
	uParam0->f_303[35 /*3*/] = { -0.1276f, 0.6496f, -0.6081f };
	uParam0->f_303[34 /*3*/] = { -0.1219f, 0.6858f, -0.0039f };
	uParam0->f_303[33 /*3*/] = { -0.158f, 0.6565f, 0.5989f };
	uParam0->f_303[32 /*3*/] = { -0.1302f, 0.6646f, -0.6002f };
	uParam0->f_303[31 /*3*/] = { -0.1243f, 0.6686f, 0.0104f };
	uParam0->f_303[30 /*3*/] = { -0.1614f, 0.6659f, 0.6349f };
	uParam0->f_303[41 /*3*/] = { 0.2654f, 0.7156f, -0.6474f };
	uParam0->f_303[40 /*3*/] = { 0.2594f, 0.6587f, -0.0193f };
	uParam0->f_303[39 /*3*/] = { 0.2755f, 0.6588f, 0.5959f };
	uParam0->f_303[38 /*3*/] = { 0.2617f, 0.701f, -0.6222f };
	uParam0->f_303[37 /*3*/] = { 0.2718f, 0.6637f, -0.0077f };
	uParam0->f_303[36 /*3*/] = { 0.269f, 0.6677f, 0.6025f };
	uParam0->f_303[11 /*3*/] = { -0.7118f, 0.5888f, -0.6097f };
	uParam0->f_303[10 /*3*/] = { -0.7944f, 0.5983f, -0.0154f };
	uParam0->f_303[9 /*3*/] = { -0.7291f, 0.5708f, 0.615f };
	uParam0->f_303[8 /*3*/] = { -0.6591f, 0.4535f, -0.6352f };
	uParam0->f_303[7 /*3*/] = { -0.7722f, 0.6042f, -0.012f };
	uParam0->f_303[6 /*3*/] = { -0.8057f, 0.6484f, 0.5741f };
	uParam0->f_303[26 /*3*/] = { 0.7679f, 0.5793f, -0.5939f };
	uParam0->f_303[25 /*3*/] = { 0.7837f, 0.616f, 0.0177f };
	uParam0->f_303[24 /*3*/] = { 0.6994f, 0.5786f, 0.585f };
	uParam0->f_303[23 /*3*/] = { 0.8024f, 0.5107f, -0.5718f };
	uParam0->f_303[22 /*3*/] = { 0.8475f, 0.4297f, 0.0059f };
	uParam0->f_303[21 /*3*/] = { 0.8012f, 0.6051f, 0.6137f };
	uParam0->f_303[27 /*3*/] = { -0.0045f, 0.4354f, 1.4844f };
	uParam0->f_303[28 /*3*/] = { -0.5737f, 0.4354f, 1.4926f };
	uParam0->f_303[29 /*3*/] = { 0.5691f, 0.4354f, 1.4524f };
	uParam0->f_303[47 /*3*/] = { -0.4511f, 0.4966f, -0.6081f };
	uParam0->f_303[46 /*3*/] = { -0.5103f, 0.51f, -0.0039f };
	uParam0->f_303[45 /*3*/] = { -0.4779f, 0.3857f, 0.5989f };
	uParam0->f_303[44 /*3*/] = { -0.3778f, 0.5049f, -0.6002f };
	uParam0->f_303[43 /*3*/] = { -0.3224f, 0.5942f, 0.0104f };
	uParam0->f_303[42 /*3*/] = { -0.3764f, 0.6902f, 0.6349f };
	uParam0->f_303[53 /*3*/] = { 0.4805f, 0.7156f, -0.6474f };
	uParam0->f_303[52 /*3*/] = { 0.7625f, 0.6532f, -0.0193f };
	uParam0->f_303[51 /*3*/] = { 0.6043f, 0.6588f, 0.5959f };
	uParam0->f_303[50 /*3*/] = { 0.473f, 0.6992f, -0.6222f };
	uParam0->f_303[49 /*3*/] = { 0.5413f, 0.6353f, -0.0077f };
	uParam0->f_303[48 /*3*/] = { 0.714f, 0.6593f, 0.6025f };
	uParam0->f_303[56 /*3*/] = { -1.3525f, 0.6005f, -0.7221f };
	uParam0->f_303[55 /*3*/] = { -1.5755f, 0.4699f, -0.0379f };
	uParam0->f_303[54 /*3*/] = { -1.318f, 0.4631f, 0.7024f };
	uParam0->f_303[59 /*3*/] = { 1.9622f, 0.2122f, -0.6432f };
	uParam0->f_303[58 /*3*/] = { 1.9598f, 0.5945f, -0.0585f };
	uParam0->f_303[57 /*3*/] = { 1.8166f, 0.3588f, 0.7322f };
	uParam0->f_303[73 /*3*/] = { 2.2269f, -0.0119f, 0.0417f };
	uParam0->f_303[72 /*3*/] = { -2.2644f, -0.1467f, 0.0997f };
	uParam0->f_303[60 /*3*/] = { 1.4174f, 0.6731f, -0.5824f };
	uParam0->f_303[61 /*3*/] = { 1.4134f, 0.6671f, 0.0059f };
	uParam0->f_303[62 /*3*/] = { 1.4031f, 0.6845f, 0.6133f };
	uParam0->f_303[63 /*3*/] = { -0.1726f, 0.6642f, -0.6095f };
	uParam0->f_303[64 /*3*/] = { -0.2261f, 0.7049f, 0.0018f };
	uParam0->f_303[65 /*3*/] = { -0.1558f, 0.6787f, 0.6703f };
	uParam0->f_303[66 /*3*/] = { 0.2443f, 0.6567f, -0.5885f };
	uParam0->f_303[67 /*3*/] = { 0.2594f, 0.6587f, -0.0193f };
	uParam0->f_303[68 /*3*/] = { 0.2594f, 0.6387f, 0.6221f };
	uParam0->f_303[69 /*3*/] = { -0.4975f, 0.6646f, -0.6002f };
	uParam0->f_303[70 /*3*/] = { -0.4998f, 0.6686f, 0.0104f };
	uParam0->f_303[71 /*3*/] = { -0.4952f, 0.6659f, 0.6349f };
	uParam0->f_303[74 /*3*/] = { 1000f, 1000f, 1000f };
	uParam0->f_303[76 /*3*/] = { 1000f, 1000f, 1000f };
	uParam0->f_303[75 /*3*/] = { 1000f, 1000f, 1000f };
	uParam0->f_1571[0] = -2.2644f;
	uParam0->f_1571[1] = -0.826f;
	uParam0->f_1571[2] = -0.6969f;
	uParam0->f_1571[3] = -0.4494f;
	uParam0->f_1571[4] = -0.2019f;
	uParam0->f_1571[5] = 0.0456f;
	uParam0->f_1571[6] = 0.2931f;
	uParam0->f_1571[7] = 0.5406f;
	uParam0->f_1571[8] = 0.7881f;
	uParam0->f_1571[9] = 1.0356f;
	uParam0->f_1571[10] = 2.6669f;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		iVar1 = 0;
		while (iVar1 < 10)
		{
			uParam0->f_1460[iVar0 /*11*/][iVar1] = 75;
			iVar1++;
		}
		iVar0++;
	}
	uParam0->f_1460[0 /*11*/][0] = 3;
	uParam0->f_1460[0 /*11*/][1] = 54;
	uParam0->f_1460[0 /*11*/][2] = 55;
	uParam0->f_1460[0 /*11*/][3] = 56;
	uParam0->f_1460[0 /*11*/][4] = 72;
	uParam0->f_1460[1 /*11*/][0] = 0;
	uParam0->f_1460[1 /*11*/][1] = 1;
	uParam0->f_1460[1 /*11*/][2] = 2;
	uParam0->f_1460[1 /*11*/][3] = 4;
	uParam0->f_1460[1 /*11*/][4] = 5;
	uParam0->f_1460[1 /*11*/][5] = 6;
	uParam0->f_1460[1 /*11*/][6] = 7;
	uParam0->f_1460[1 /*11*/][7] = 9;
	uParam0->f_1460[1 /*11*/][8] = 10;
	uParam0->f_1460[1 /*11*/][9] = 11;
	uParam0->f_1460[2 /*11*/][0] = 8;
	uParam0->f_1460[2 /*11*/][1] = 19;
	uParam0->f_1460[2 /*11*/][2] = 28;
	uParam0->f_1460[2 /*11*/][3] = 45;
	uParam0->f_1460[2 /*11*/][4] = 46;
	uParam0->f_1460[2 /*11*/][5] = 47;
	uParam0->f_1460[2 /*11*/][6] = 69;
	uParam0->f_1460[2 /*11*/][7] = 70;
	uParam0->f_1460[2 /*11*/][8] = 71;
	uParam0->f_1460[3 /*11*/][0] = 42;
	uParam0->f_1460[3 /*11*/][1] = 43;
	uParam0->f_1460[3 /*11*/][2] = 44;
	uParam0->f_1460[3 /*11*/][3] = 64;
	uParam0->f_1460[4 /*11*/][0] = 18;
	uParam0->f_1460[4 /*11*/][1] = 27;
	uParam0->f_1460[4 /*11*/][2] = 30;
	uParam0->f_1460[4 /*11*/][3] = 31;
	uParam0->f_1460[4 /*11*/][4] = 32;
	uParam0->f_1460[4 /*11*/][5] = 33;
	uParam0->f_1460[4 /*11*/][6] = 34;
	uParam0->f_1460[4 /*11*/][7] = 35;
	uParam0->f_1460[4 /*11*/][8] = 63;
	uParam0->f_1460[4 /*11*/][9] = 65;
	uParam0->f_1460[5 /*11*/][0] = 36;
	uParam0->f_1460[5 /*11*/][1] = 37;
	uParam0->f_1460[5 /*11*/][2] = 38;
	uParam0->f_1460[5 /*11*/][3] = 39;
	uParam0->f_1460[5 /*11*/][4] = 40;
	uParam0->f_1460[5 /*11*/][5] = 41;
	uParam0->f_1460[5 /*11*/][6] = 66;
	uParam0->f_1460[5 /*11*/][7] = 67;
	uParam0->f_1460[5 /*11*/][8] = 68;
	uParam0->f_1460[6 /*11*/][0] = 50;
	uParam0->f_1460[6 /*11*/][1] = 53;
	uParam0->f_1460[7 /*11*/][0] = 20;
	uParam0->f_1460[7 /*11*/][1] = 24;
	uParam0->f_1460[7 /*11*/][2] = 25;
	uParam0->f_1460[7 /*11*/][3] = 26;
	uParam0->f_1460[7 /*11*/][4] = 29;
	uParam0->f_1460[7 /*11*/][5] = 48;
	uParam0->f_1460[7 /*11*/][6] = 49;
	uParam0->f_1460[7 /*11*/][7] = 51;
	uParam0->f_1460[7 /*11*/][8] = 52;
	uParam0->f_1460[8 /*11*/][0] = 12;
	uParam0->f_1460[8 /*11*/][1] = 13;
	uParam0->f_1460[8 /*11*/][2] = 14;
	uParam0->f_1460[8 /*11*/][3] = 15;
	uParam0->f_1460[8 /*11*/][4] = 16;
	uParam0->f_1460[8 /*11*/][5] = 17;
	uParam0->f_1460[8 /*11*/][6] = 21;
	uParam0->f_1460[8 /*11*/][7] = 22;
	uParam0->f_1460[8 /*11*/][8] = 23;
	uParam0->f_1460[9 /*11*/][0] = 57;
	uParam0->f_1460[9 /*11*/][1] = 58;
	uParam0->f_1460[9 /*11*/][2] = 59;
	uParam0->f_1460[9 /*11*/][3] = 60;
	uParam0->f_1460[9 /*11*/][4] = 61;
	uParam0->f_1460[9 /*11*/][5] = 62;
	uParam0->f_1460[9 /*11*/][6] = 73;
}

void func_471(var uParam0)//Position - 0xE4E7
{
	uParam0->f_282[0 /*2*/] = 45;
	uParam0->f_282[1 /*2*/] = 40;
	uParam0->f_282[2 /*2*/] = 35;
	uParam0->f_282[3 /*2*/] = 30;
	uParam0->f_282[4 /*2*/] = 25;
	uParam0->f_282[5 /*2*/] = 20;
	uParam0->f_282[6 /*2*/] = 30;
	uParam0->f_282[7 /*2*/] = 35;
	uParam0->f_282[8 /*2*/] = 24;
	uParam0->f_282[9 /*2*/] = 27;
	uParam0->f_282[0 /*2*/].f_1 = 355;
	uParam0->f_282[1 /*2*/].f_1 = 356;
	uParam0->f_282[2 /*2*/].f_1 = 358;
	uParam0->f_282[3 /*2*/].f_1 = 2;
	uParam0->f_282[4 /*2*/].f_1 = 5;
	uParam0->f_282[5 /*2*/].f_1 = 9;
	uParam0->f_282[6 /*2*/].f_1 = 354;
	uParam0->f_282[7 /*2*/].f_1 = 2;
	uParam0->f_282[8 /*2*/].f_1 = 15;
	uParam0->f_282[9 /*2*/].f_1 = 4;
}

void func_472(var uParam0, float fParam1)//Position - 0xFFBB
{
	uParam0->f_2 = fParam1;
}

void func_473(var uParam0, float fParam1)//Position - 0xFFD6
{
	uParam0->f_1 = fParam1;
}

void func_474(var uParam0, char* sParam1, float fParam2)//Position - 0x3604
{
	if (!((!PED::IS_PED_INJURED(__LIB_38__::func_713(uParam0)) && TASK::IS_TASK_MOVE_NETWORK_ACTIVE(__LIB_38__::func_713(uParam0))) && MISC::ARE_STRINGS_EQUAL(TASK::GET_TASK_MOVE_NETWORK_STATE(__LIB_38__::func_713(uParam0)), "running")))
	{
		TASK::TASK_MOVE_NETWORK_BY_NAME(__LIB_38__::func_713(uParam0), sParam1, fParam2, false, "mini@tennis", 4);
	}
}

bool func_475(var uParam0, int iParam1)//Position - 0x4D28
{
	return __LIB_0__::func_703(uParam0->f_2, iParam1);
}

void func_476(var uParam0, bool bParam1)//Position - 0x5AFC
{
	struct<3> Var0;
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		Var0 = { __LIB_1__::func_287(bParam1, __LIB_7__::func_147(uParam0), ENTITY::GET_ENTITY_COORDS(*uParam0, true)) };
	}
	uParam0->f_27 = { Var0 };
	uParam0->f_30 = { Var0 };
	uParam0->f_25 = 0f;
	uParam0->f_26 = 0f;
}

void func_477(var uParam0)//Position - 0x7289
{
	float fVar0;
	float fVar1;
	switch (__LIB_1__::func_44(uParam0))
	{
		case 3:
		case 4:
			break;
		default:
			fVar0 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f);
			fVar1 = __LIB_0__::func_373(uParam0->f_20 == 2, 0.6f, 0.75f);
			if (fVar0 < fVar1)
			{
				__LIB_6__::func_205(uParam0, 3);
			}
			else
			{
				__LIB_6__::func_205(uParam0, 4);
			}
			break;
	}
}

void func_478(var uParam0, var uParam1, bool bParam2)//Position - 0x7D10
{
	if (ENTITY::DOES_ENTITY_EXIST(*uParam1))
	{
		if (bParam2)
		{
			if (!PED::IS_PED_INJURED(__LIB_38__::func_713(uParam0)))
			{
				TASK::TASK_LOOK_AT_ENTITY(__LIB_38__::func_713(uParam0), *uParam1, -1, 6, 2);
			}
		}
		else if (!PED::IS_PED_INJURED(__LIB_38__::func_713(uParam0)))
		{
			TASK::TASK_CLEAR_LOOK_AT(__LIB_38__::func_713(uParam0));
		}
	}
}

int func_479(var uParam0, var uParam1)//Position - 0x928D
{
	if (__LIB_0__::func_404(&(uParam0->f_189)) != 2)
	{
		return 0;
	}
	if (uParam1->f_1 != 1)
	{
		return 0;
	}
	return 1;
}

bool func_480(var uParam0, int iParam1)//Position - 0x9799
{
	return __LIB_0__::func_703(uParam0->f_25, iParam1);
}

void func_481(var uParam0, int iParam1, int iParam2)//Position - 0x9E6D
{
	if ((MISC::GET_RAIN_LEVEL() <= 0f && MISC::GET_SNOW_LEVEL() <= 0f) && __LIB_10__::func_197(uParam0) == 75)
	{
		if (MISC::ABSF(SYSTEM::TO_FLOAT(iParam1)) >= MISC::ABSF(SYSTEM::TO_FLOAT(iParam2)))
		{
			if (iParam1 > 15)
			{
				if (uParam0->f_35 != 3 && MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f) < 0.08f)
				{
					AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "TENNIS_FOOT_SQUEAKS_MASTER", __LIB_38__::func_713(uParam0), 0, false, 0);
				}
				else if (MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f) < 0.1f)
				{
					AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "TENNIS_FOOT_SQUEAKS_MASTER", __LIB_38__::func_713(uParam0), 0, false, 0);
				}
				uParam0->f_35 = 3;
			}
			else if (iParam1 < -15)
			{
				if (uParam0->f_35 != 2 && MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f) < 0.08f)
				{
					AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "TENNIS_FOOT_SQUEAKS_MASTER", __LIB_38__::func_713(uParam0), 0, false, 0);
				}
				else if (MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f) < 0.1f)
				{
					AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "TENNIS_FOOT_SQUEAKS_MASTER", __LIB_38__::func_713(uParam0), 0, false, 0);
				}
				uParam0->f_35 = 2;
			}
			else
			{
				if (uParam0->f_35 != 4 && MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f) < 0.08f)
				{
					AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "TENNIS_FOOT_SQUEAKS_MASTER", __LIB_38__::func_713(uParam0), 0, false, 0);
				}
				uParam0->f_35 = 4;
			}
		}
		else if (MISC::ABSF(SYSTEM::TO_FLOAT(iParam1)) < MISC::ABSF(SYSTEM::TO_FLOAT(iParam2)))
		{
			if (iParam2 > 15)
			{
				if (uParam0->f_35 != 1 && MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f) < 0.08f)
				{
					AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "TENNIS_FOOT_SQUEAKS_MASTER", __LIB_38__::func_713(uParam0), 0, false, 0);
				}
				else if (MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f) < 0.1f)
				{
					AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "TENNIS_FOOT_SQUEAKS_MASTER", __LIB_38__::func_713(uParam0), 0, false, 0);
				}
				uParam0->f_35 = 1;
			}
			else if (iParam2 < -15)
			{
				if (uParam0->f_35 != 0 && MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f) < 0.08f)
				{
					AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "TENNIS_FOOT_SQUEAKS_MASTER", __LIB_38__::func_713(uParam0), 0, false, 0);
				}
				else if (MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f) < 0.1f)
				{
					AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "TENNIS_FOOT_SQUEAKS_MASTER", __LIB_38__::func_713(uParam0), 0, false, 0);
				}
				uParam0->f_35 = 0;
			}
			else
			{
				if (uParam0->f_35 != 4 && MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f) < 0.08f)
				{
					AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "TENNIS_FOOT_SQUEAKS_MASTER", __LIB_38__::func_713(uParam0), 0, false, 0);
				}
				uParam0->f_35 = 4;
			}
		}
	}
}

void func_482(var uParam0)//Position - 0xA848
{
	__LIB_39__::func_38(&((uParam0[0 /*94*/])->f_32), joaat("PLAYER"));
	__LIB_39__::func_38(&((uParam0[1 /*94*/])->f_32), joaat("PLAYER"));
}

void func_483(var uParam0, int iParam1)//Position - 0xAC58
{
	if (iParam1 == 21 || __LIB_15__::func_243(uParam0) == 21)
	{
	}
	else if (__LIB_15__::func_243(uParam0) != iParam1)
	{
		uParam0->f_5 = __LIB_15__::func_243(uParam0);
		uParam0->f_4 = iParam1;
	}
}

void func_484(var uParam0, int iParam1)//Position - 0xAFD8
{
	__LIB_2__::func_712(&(uParam0->f_2), iParam1);
}

void func_485(var uParam0, int iParam1)//Position - 0xAFEA
{
	__LIB_1__::func_330(&(uParam0->f_24), iParam1);
}

void func_486(var uParam0, int iParam1)//Position - 0xB6F7
{
	__LIB_2__::func_712(&(uParam0->f_24), iParam1);
}

int func_487(int iParam0)//Position - 0xBFB4
{
	int iVar0;
	if (iParam0 == -1)
	{
		iVar0 = PLAYER::PLAYER_ID();
	}
	else
	{
		iVar0 = PLAYER::INT_TO_PLAYERINDEX(iParam0);
	}
	if (__LIB_0__::func_361(iVar0, 0))
	{
		return 1;
	}
	if (__LIB_1__::func_201(iVar0))
	{
		return 1;
	}
	return 0;
}

void func_488(var uParam0)//Position - 0xE676
{
	__LIB_6__::func_205(uParam0, 0);
	__LIB_11__::func_573(uParam0, 0);
}

var func_489(var uParam0)//Position - 0xFFE4
{
	float fVar0;
	float fVar1;
	struct<3> Var2;
	bool bVar3;
	fVar0 = 100000000f;
	bVar3 = ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false);
	if (__LIB_0__::func_361(PLAYER::PLAYER_ID(), 0))
	{
		bVar3 = ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYER_PED(NETWORK::NETWORK_GET_PLAYER_INDEX(NETWORK::NETWORK_GET_HOST_OF_THIS_SCRIPT())), false);
	}
	if (!bVar3)
	{
		if (__LIB_0__::func_361(PLAYER::PLAYER_ID(), 0))
		{
			Var2 = { ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(NETWORK::NETWORK_GET_PLAYER_INDEX(NETWORK::NETWORK_GET_HOST_OF_THIS_SCRIPT())), true) };
		}
		else
		{
			Var2 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		}
		fVar1 = SYSTEM::VDIST2(Var2, -769.058f, 165.294f, 66.474f);
		if (fVar1 < fVar0)
		{
			fVar0 = fVar1;
			*uParam0 = 16;
		}
		fVar1 = SYSTEM::VDIST2(Var2, -1171.28f, -1599.59f, 3.34f);
		if (fVar1 < fVar0)
		{
			fVar0 = fVar1;
			*uParam0 = 13;
		}
		fVar1 = SYSTEM::VDIST2(Var2, 487.5186f, -217.7697f, 52.7864f);
		if (fVar1 < fVar0)
		{
			fVar0 = fVar1;
			*uParam0 = 19;
		}
		fVar1 = SYSTEM::VDIST2(Var2, -49.912f, 942.5634f, 231.1741f);
		if (fVar1 < fVar0)
		{
			fVar0 = fVar1;
			*uParam0 = 23;
		}
		fVar1 = SYSTEM::VDIST2(Var2, -1225.4536f, 344.8268f, 78.9859f);
		if (fVar1 < fVar0)
		{
			fVar0 = fVar1;
			*uParam0 = 17;
		}
		fVar1 = SYSTEM::VDIST2(Var2, -1623.4541f, 257.1566f, 58.5552f);
		if (fVar1 < fVar0)
		{
			fVar0 = fVar1;
			*uParam0 = 15;
		}
		fVar1 = SYSTEM::VDIST2(Var2, -939.6168f, -1255.7323f, 6.9773f);
		if (fVar1 < fVar0)
		{
			fVar0 = fVar1;
			*uParam0 = 18;
		}
		fVar1 = SYSTEM::VDIST2(Var2, -1371.2748f, -107.9437f, 49.7046f);
		if (fVar1 < fVar0)
		{
			fVar0 = fVar1;
			*uParam0 = 20;
		}
		fVar1 = SYSTEM::VDIST2(Var2, -2869.9915f, 9.2297f, 10.6083f);
		if (fVar1 < fVar0)
		{
			fVar0 = fVar1;
			*uParam0 = 14;
		}
	}
	return *uParam0;
}

void func_490(var uParam0, var uParam1)//Position - 0x3272
{
	(*uParam0)[0 /*8*/] = 0;
	(*uParam0)[1 /*8*/] = 0;
	__LIB_1__::func_330(uParam1, 2);
}

void func_491(var uParam0, var uParam1, var uParam2, int iParam3)//Position - 0x328D
{
	if (*uParam1 + 1 < iParam3)
	{
		*uParam1++;
		(*uParam0)[0 /*8*/] = 0;
		(*uParam0)[1 /*8*/] = 0;
		(uParam0[0 /*8*/])->f_1[*uParam1] = 0;
		(uParam0[1 /*8*/])->f_1[*uParam1] = 0;
	}
	__LIB_1__::func_330(uParam2, 2);
}

void func_492(var uParam0, int iParam1, int iParam2, int iParam3, var uParam4, bool bParam5)//Position - 0x3AA8
{
	if ((uParam0[iParam2 /*8*/])->f_1[iParam1] == -1)
	{
		(uParam0[iParam2 /*8*/])->f_1[iParam1] = 1;
	}
	else
	{
		(uParam0[iParam2 /*8*/])->f_1[iParam1]++;
	}
	if (((((uParam0[iParam2 /*8*/])->f_1[iParam1] > 5 && ((uParam0[iParam2 /*8*/])->f_1[iParam1] - (uParam0[iParam3 /*8*/])->f_1[iParam1]) >= 2) && (*uParam0)[iParam2 /*8*/] >= 3) && !bParam5) || bParam5)
	{
		(uParam0[iParam2 /*8*/])->f_7++;
	}
	__LIB_1__::func_330(uParam4, 2);
}

void func_493(var uParam0, var uParam1)//Position - 0x3B74
{
	*uParam0++;
	__LIB_1__::func_330(uParam1, 2);
}

void func_494(var uParam0, int iParam1)//Position - 0x3EB2
{
	__LIB_1__::func_330(&(uParam0->f_2), iParam1);
}

void func_495(var uParam0, int iParam1)//Position - 0x4540
{
	__LIB_1__::func_330(&(uParam0->f_25), iParam1);
}

void func_496(var uParam0, int iParam1)//Position - 0x491A
{
	__LIB_2__::func_712(uParam0, 67108864);
	__LIB_2__::func_712(uParam0, 134217728);
	__LIB_2__::func_712(uParam0, 16777216);
	__LIB_2__::func_712(uParam0, 33554432);
	__LIB_1__::func_330(uParam0, iParam1);
}

void func_497(var uParam0)//Position - 0x4D00
{
	__LIB_1__::func_330(uParam0, 2048);
	__LIB_1__::func_330(uParam0, 16384);
}

void func_498(var uParam0, char* sParam1, char* sParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, int iParam10)//Position - 0x579A
{
	if (!PED::IS_PED_INJURED(__LIB_38__::func_713(uParam0)))
	{
		__LIB_0__::func_709(__LIB_38__::func_713(uParam0), sParam1, &sParam2, iParam10);
	}
}

Vector3 func_499(float fParam0, float fParam1, float fParam2, var uParam3, var uParam4)//Position - 0x8106
{
	struct<3> Var0;
	struct<3> Var1;
	Var0 = { __LIB_0__::func_79(*uParam3) };
	__LIB_37__::func_36(&Var0, fParam2, 0f, 0f, 1f);
	Var1 = { __LIB_0__::func_79(*uParam4) };
	__LIB_37__::func_36(&Var0, fParam1, Var1);
	Var0 = { Var0 * Vector(fParam0, fParam0, fParam0) };
	return Var0;
}

bool func_500(var uParam0)//Position - 0x830C
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (uParam0->f_59 == 2)
	{
		iVar0 = __LIB_38__::func_713(uParam0);
		iVar1 = __LIB_0__::func_216(iVar0);
		if (iVar1 == 145)
		{
			iVar1 = __LIB_16__::func_747(iVar0);
		}
		iVar2 = PLAYER::PLAYER_PED_ID();
		if (((iVar1 == 0 || iVar1 == 1) || iVar1 == 2) || iVar0 == iVar2)
		{
			uParam0->f_59 = 1;
		}
		else if (PED::IS_PED_MALE(iVar0) && iVar1 != 14)
		{
			uParam0->f_59 = 1;
		}
		else
		{
			uParam0->f_59 = 0;
		}
	}
	return uParam0->f_59 == 1;
}

void func_501(var uParam0, int iParam1)//Position - 0x8DBD
{
	__LIB_2__::func_712(&(uParam0->f_25), iParam1);
}

void func_502(int iParam0, bool bParam1)//Position - 0xA8A6
{
	int iVar0;
	bool bVar1;
	int iVar2;
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && !PED::IS_PED_INJURED(iParam0))
	{
		iVar0 = __LIB_0__::func_216(iParam0);
		if (iVar0 == 145)
		{
			iVar0 = __LIB_16__::func_747(iParam0);
		}
		iVar2 = PLAYER::PLAYER_PED_ID();
		if (((iVar0 == 0 || iVar0 == 1) || iVar0 == 2) || iParam0 == iVar2)
		{
			bVar1 = false;
		}
		else if (PED::IS_PED_MALE(iParam0) && iVar0 != 14)
		{
			bVar1 = false;
		}
		else
		{
			bVar1 = true;
		}
		MISC::ENABLE_TENNIS_MODE(iParam0, bParam1, bVar1);
	}
}

void func_503()//Position - 0xB95B
{
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 22 /*INPUT_JUMP*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 21 /*INPUT_SPRINT*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 24 /*INPUT_ATTACK*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 36 /*INPUT_DUCK*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 25 /*INPUT_AIM*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 140 /*INPUT_MELEE_ATTACK_LIGHT*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 141 /*INPUT_MELEE_ATTACK_HEAVY*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 143 /*INPUT_MELEE_BLOCK*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 44 /*INPUT_COVER*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 27 /*INPUT_PHONE*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 37 /*INPUT_SELECT_WEAPON*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 12 /*INPUT_WEAPON_WHEEL_UD*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 13 /*INPUT_WEAPON_WHEEL_LR*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 14 /*INPUT_WEAPON_WHEEL_NEXT*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 15 /*INPUT_WEAPON_WHEEL_PREV*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 16 /*INPUT_SELECT_NEXT_WEAPON*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 17 /*INPUT_SELECT_PREV_WEAPON*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 26 /*INPUT_LOOK_BEHIND*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 19 /*INPUT_CHARACTER_WHEEL*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 20 /*INPUT_MULTIPLAYER_INFO*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 0 /*INPUT_NEXT_CAMERA*/, true);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(2);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(19);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(1);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(18);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(3);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(4);
	if (!__LIB_1__::func_861())
	{
		__LIB_0__::func_671(1);
	}
}

void func_504(int iParam0, int iParam1)//Position - 0x3744
{
	int iVar0;
	iVar0 = __LIB_0__::func_683();
	__LIB_17__::func_216(iVar0, iParam0, iParam1);
}

int func_505(int iParam0)//Position - 0xE48
{
	return Global_95447[iParam0];
}

void func_506(var uParam0, var uParam1)//Position - 0x30A6
{
	uParam0->f_77 = uParam1;
}

void func_507(int iParam0, int iParam1)//Position - 0x3F00
{
	uLocal_175[iParam0] = iParam1;
}

int func_508(int iParam0)//Position - 0x3F10
{
	return uLocal_175[iParam0];
}

void func_509(var uParam0)//Position - 0x5AD3
{
	uParam0->f_4 = 0f;
	uParam0->f_5 = 0f;
	__LIB_40__::func_403(uParam0);
}

bool func_510(var uParam0, var uParam1, struct<3> Param2)//Position - 0x66DF
{
	struct<3> Var0;
	struct<3> Var1;
	var uVar2;
	Var0 = { uParam1->f_16[0 /*3*/] + Param2 * Vector(0.5f, 0.5f, 0.5f) };
	Var1 = { uParam1->f_16[3 /*3*/] + Param2 * Vector(0.5f, 0.5f, 0.5f) };
	uVar2 = __LIB_40__::func_393(uParam0->f_37, Var0, Var1, __LIB_0__::func_864(uParam1));
	return uVar2;
}

bool func_511(var uParam0, var uParam1, var uParam2, var uParam3)//Position - 0xB5CE
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	float fVar3;
	Var0 = { uParam1->f_3[0 /*3*/] + *uParam3 * Vector(0.5f, 0.5f, 0.5f) };
	Var1 = { uParam1->f_3[3 /*3*/] + *uParam3 * Vector(0.5f, 0.5f, 0.5f) };
	Var2 = { *uParam2 * Vector(0.191f, 0.191f, 0.191f) };
	fVar3 = (uParam1->f_1 * 1.8f);
	Var0 = { Var0 - Var2 };
	Var1 = { Var1 + Var2 };
	return __LIB_40__::func_393(__LIB_7__::func_147(uParam0), Var0, Var1, fVar3);
}

void func_512(var uParam0, struct<3> Param1)//Position - 0xB83B
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	if (__LIB_40__::func_464(uParam0, 1))
	{
		if (!__LIB_40__::func_460(uParam0))
		{
			uParam0->f_23 = GRAPHICS::START_PARTICLE_FX_LOOPED_AT_COORD("scr_tennis_ball_trail", Param1, 0f, 0f, 0f, 1f, false, false, false, true);
			HUD::GET_HUD_COLOUR(12, &iVar0, &iVar1, &iVar2, &uVar3);
			GRAPHICS::SET_PARTICLE_FX_LOOPED_COLOUR(uParam0->f_23, (SYSTEM::TO_FLOAT(iVar0) / 255f), (SYSTEM::TO_FLOAT(iVar1) / 255f), (SYSTEM::TO_FLOAT(iVar2) / 255f), false);
			uVar3 = uVar3;
		}
		GRAPHICS::SET_PARTICLE_FX_LOOPED_OFFSETS(uParam0->f_23, Param1, 0f, 0f, 0f);
	}
}

void func_513(int iParam0, var uParam1, var uParam2, int iParam3)//Position - 0x3255
{
	if ((((iParam0 > 6 && iParam0 < 22) && !__LIB_0__::func_703(uParam2, 4194304)) && iParam0 != 16) || iParam3)
	{
		if (ENTITY::DOES_ENTITY_EXIST(__LIB_38__::func_713(uParam1)))
		{
			if (MISC::IS_TENNIS_MODE(__LIB_38__::func_713(uParam1)))
			{
				PED::SET_PED_RESET_FLAG(__LIB_38__::func_713(uParam1), 69, true);
			}
			PED::SET_PED_RESET_FLAG(__LIB_38__::func_713(uParam1), 102, true);
		}
	}
}

bool func_514(struct<3> Param0, var uParam1)//Position - 0x3BEE
{
	float fVar0;
	float fVar1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	switch (*uParam1)
	{
		case 7:
			fVar0 = 2.031f;
			fVar1 = 2.16f;
			break;
		case 1:
			fVar0 = 6.955f;
			fVar1 = 1.6f;
			break;
		case 4:
			fVar0 = 6.715f;
			fVar1 = 2.043f;
			break;
		case 0:
			fVar0 = 4.8f;
			fVar1 = 2.433f;
			break;
		case 3:
			fVar0 = 6.1f;
			fVar1 = 2.395f;
			break;
		case 5:
			fVar0 = 2.9f;
			fVar1 = 2.005f;
			break;
		case 2:
			fVar0 = 7f;
			fVar1 = 2.533f;
			break;
		case 6:
			fVar0 = 7.7f;
			fVar1 = 2.775f;
			break;
		default:
			fVar0 = 10f;
			fVar1 = 3f;
			break;
	}
	Var2 = { uParam1->f_3[1 /*3*/] - uParam1->f_3[0 /*3*/] * Vector(0.5f, 0.5f, 0.5f) };
	Var3 = { uParam1->f_3[0 /*3*/] + Var2 - uParam1->f_49 * Vector(fVar0, fVar0, fVar0) };
	Var4 = { uParam1->f_3[3 /*3*/] + Var2 + uParam1->f_49 * Vector(fVar0, fVar0, fVar0) };
	return !__LIB_40__::func_393(Param0, Var3, Var4, (__LIB_0__::func_864(uParam1) * fVar1));
}

void func_515(var uParam0, var uParam1, struct<3> Param2)//Position - 0x3D3E
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var2;
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
	if (uParam0->f_4.f_20 == 2)
	{
		iVar0 = __LIB_0__::func_138(MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f) < 0.5f, 0, 3);
		__LIB_40__::func_396(&(uParam0->f_4), uParam0->f_4.f_6[iVar0 /*3*/]);
	}
	else if (uParam0->f_4.f_20 == 0)
	{
		Var1 = { uParam1->f_3[0 /*3*/] + Param2 * Vector(0.5f, 0.5f, 0.5f) };
		Var2 = { uParam1->f_3[3 /*3*/] + Param2 * Vector(0.5f, 0.5f, 0.5f) };
		if (!__LIB_40__::func_393(uParam0->f_37, Var1, Var2, __LIB_0__::func_864(uParam1)))
		{
			Var1 = { uParam1->f_29 - uParam0->f_40 * Vector(6f, 6f, 6f) };
			__LIB_40__::func_396(&(uParam0->f_4), Var1);
		}
		else
		{
			__LIB_40__::func_396(&(uParam0->f_4), uParam0->f_37);
		}
	}
	else
	{
		__LIB_40__::func_396(&(uParam0->f_4), uParam0->f_4.f_6[iVar0 /*3*/]);
	}
}

bool func_516(struct<3> Param0, var uParam1, var uParam2, var uParam3)//Position - 0x3E39
{
	struct<3> Var0;
	struct<3> Var1;
	bool bVar2;
	struct<3> Var3;
	float fVar4;
	Var0 = { uParam1->f_3[0 /*3*/] + *uParam3 * Vector(0.5f, 0.5f, 0.5f) };
	Var1 = { uParam1->f_3[3 /*3*/] + *uParam3 * Vector(0.5f, 0.5f, 0.5f) };
	bVar2 = __LIB_40__::func_393(Param0, Var0, Var1, uParam1->f_1);
	Var3 = { *uParam2 * Vector(0.018f, 0.018f, 0.018f) };
	fVar4 = (uParam1->f_1 * 1.038f);
	Var0 = { Var0 - Var3 };
	Var1 = { Var1 + Var3 };
	return (!bVar2 && __LIB_40__::func_393(Param0, Var0, Var1, fVar4));
}

int func_517(int iParam0, var uParam1, bool bParam2, bool bParam3)//Position - 0x3F7E
{
	struct<3> Var0;
	Var0 = { uParam1->f_247.f_13 };
	if (!bParam2)
	{
		Var0 = { __LIB_7__::func_147(&(uParam1->f_247)) };
	}
	if (bParam3)
	{
	}
	if ((uParam1[iParam0 /*94*/])->f_1 == 1)
	{
		if (bParam3)
		{
		}
		return __LIB_40__::func_393(Var0, uParam1->f_189.f_3[0 /*3*/] + uParam1->f_1661 * Vector(0.5f, 0.5f, 0.5f), uParam1->f_189.f_32[0 /*3*/] + uParam1->f_1661 * Vector(0.5f, 0.5f, 0.5f), __LIB_0__::func_864(&(uParam1->f_189)));
	}
	else
	{
		if (bParam3)
		{
		}
		return __LIB_40__::func_393(Var0, uParam1->f_189.f_3[3 /*3*/] + uParam1->f_1661 * Vector(0.5f, 0.5f, 0.5f), uParam1->f_189.f_32[0 /*3*/] + uParam1->f_1661 * Vector(0.5f, 0.5f, 0.5f), __LIB_0__::func_864(&(uParam1->f_189)));
	}
	return 0;
}

void func_518(var uParam0, int iParam1)//Position - 0x4053
{
	float fVar0;
	fVar0 = __LIB_0__::func_158(uParam0->f_43, __LIB_0__::func_404(&(uParam0->f_4)) - uParam0->f_37);
	if (fVar0 > 0f && iParam1 == 1)
	{
		__LIB_40__::func_389(&(uParam0->f_4));
	}
	else if (fVar0 <= 0f && iParam1 == 1)
	{
		__LIB_40__::func_388(&(uParam0->f_4));
	}
	else if (fVar0 > 0f && iParam1 == 0)
	{
		__LIB_40__::func_388(&(uParam0->f_4));
	}
	else if (fVar0 <= 0f && iParam1 == 0)
	{
		__LIB_40__::func_389(&(uParam0->f_4));
	}
}

void func_519(var uParam0, struct<3> Param1, struct<3> Param2)//Position - 0x4164
{
	if (__LIB_0__::func_158(uParam0->f_43, __LIB_0__::func_404(&(uParam0->f_4)) - uParam0->f_37) > 0f)
	{
		__LIB_40__::func_392(&(uParam0->f_4));
	}
	else
	{
		__LIB_40__::func_391(&(uParam0->f_4));
	}
	if (__LIB_0__::func_158(uParam0->f_40, __LIB_0__::func_404(&(uParam0->f_4)) - uParam0->f_37) > 0f)
	{
		__LIB_40__::func_390(&(uParam0->f_4), 0);
	}
	else
	{
		__LIB_40__::func_390(&(uParam0->f_4), 1);
	}
	uParam0->f_4.f_6[0 /*3*/] = { Param1 + uParam0->f_40 * Vector(1f, 1f, 1f) + uParam0->f_40 * Vector(uParam0->f_4.f_22, uParam0->f_4.f_22, uParam0->f_4.f_22) + uParam0->f_43 * Vector(4f, 4f, 4f) + uParam0->f_43 * Vector(uParam0->f_4.f_21, uParam0->f_4.f_21, uParam0->f_4.f_21) };
	uParam0->f_4.f_6[1 /*3*/] = { Param1 + uParam0->f_40 * Vector(8f, 8f, 8f) + uParam0->f_40 * Vector(uParam0->f_4.f_22, uParam0->f_4.f_22, uParam0->f_4.f_22) + uParam0->f_43 * Vector(2.165f, 2.165f, 2.165f) + uParam0->f_43 * Vector(uParam0->f_4.f_21, uParam0->f_4.f_21, uParam0->f_4.f_21) };
	uParam0->f_4.f_6[2 /*3*/] = { Param1 + uParam0->f_40 * Vector(8f, 8f, 8f) + uParam0->f_40 * Vector(uParam0->f_4.f_22, uParam0->f_4.f_22, uParam0->f_4.f_22) + uParam0->f_43 * Vector(6f, 6f, 6f) + uParam0->f_43 * Vector(uParam0->f_4.f_21, uParam0->f_4.f_21, uParam0->f_4.f_21) };
	uParam0->f_4.f_6[3 /*3*/] = { Param2 + uParam0->f_40 * Vector(0.5f, 0.5f, 0.5f) + uParam0->f_40 * Vector(uParam0->f_4.f_22, uParam0->f_4.f_22, uParam0->f_4.f_22) + uParam0->f_43 * Vector(4f, 4f, 4f) + uParam0->f_43 * Vector(uParam0->f_4.f_21, uParam0->f_4.f_21, uParam0->f_4.f_21) };
}

Vector3 func_520(var uParam0, var uParam1, struct<3> Param2, var uParam3, float fParam4)//Position - 0x44D6
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	float fVar4;
	float fVar5;
	struct<3> Var6;
	float fVar7;
	bool bVar8;
	bool bVar9;
	struct<3> Var10;
	float fVar11;
	float fVar12;
	iVar0 = 0;
	fVar4 = 100f;
	Var6 = { __LIB_40__::func_400(uParam0, Param2) };
	fVar7 = __LIB_0__::func_158(Param2 - uParam0->f_37, uParam0->f_43);
	bVar8 = fVar7 > 0f;
	while (iVar0 < 75)
	{
		bVar9 = (*uParam1)[iVar0 /*3*/] > 0f;
		if (bVar8 == bVar9)
		{
			Var1 = { __LIB_40__::func_399(uParam0, *(uParam1[iVar0 /*3*/])) };
			fVar5 = MISC::ABSF(((Var1.f_2 + Var6.f_2) - Param2.f_2));
			if (fVar5 < 0.15f)
			{
				fVar5 = 0f;
			}
			fVar5 = (fVar5 + __LIB_40__::func_398(iVar0));
			Var10 = { Param2 - Var1 };
			fVar11 = 0f;
			fVar12 = __LIB_40__::func_397(uParam0, Var10, fParam4, &fVar11);
			if (fVar12 < fVar11)
			{
				fVar5 = (fVar5 + (fVar11 - fVar12));
			}
			if (fVar5 < fVar4)
			{
				fVar4 = fVar5;
				Var3 = { Var1 };
			}
		}
		iVar0++;
	}
	Var2 = { Param2 - Var3 };
	Var2.f_2 = uParam3;
	return Var2;
}

int func_521(var uParam0, var uParam1, int iParam2, int iParam3)//Position - 0x48E8
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	Var0 = { __LIB_7__::func_147(&(uParam1->f_247)) };
	if (MISC::ABSF((Var0.f_2 - uParam0->f_3[0 /*3*/].f_2)) <= 0.6f)
	{
		Var1 = { uParam1->f_247.f_13 };
		if (iParam2 == 0)
		{
			if (iParam3 == 1)
			{
				Var2 = { uParam0->f_32[0 /*3*/] + uParam1->f_1661 * Vector(0.25f, 0.25f, 0.25f) };
				Var3 = { uParam0->f_16[3 /*3*/] + uParam1->f_1661 * Vector(0.25f, 0.25f, 0.25f) };
			}
			else
			{
				Var2 = { uParam0->f_32[0 /*3*/] + uParam1->f_1661 * Vector(0.75f, 0.75f, 0.75f) };
				Var3 = { uParam0->f_16[3 /*3*/] + uParam1->f_1661 * Vector(0.75f, 0.75f, 0.75f) };
			}
		}
		else if (iParam2 == 1)
		{
			if (iParam3 == 1)
			{
				Var2 = { uParam0->f_32[0 /*3*/] + uParam1->f_1661 * Vector(0.75f, 0.75f, 0.75f) };
				Var3 = { uParam0->f_16[0 /*3*/] + uParam1->f_1661 * Vector(0.75f, 0.75f, 0.75f) };
			}
			else
			{
				Var2 = { uParam0->f_32[0 /*3*/] + uParam1->f_1661 * Vector(0.25f, 0.25f, 0.25f) };
				Var3 = { uParam0->f_16[0 /*3*/] + uParam1->f_1661 * Vector(0.25f, 0.25f, 0.25f) };
			}
		}
		return __LIB_40__::func_393(Var1, Var2, Var3, 4.153f);
	}
	else
	{
		return 0;
	}
	return 0;
}

Vector3 func_522(var uParam0, var uParam1, struct<3> Param2, int iParam3)//Position - 0x6287
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	int iVar3;
	int iVar4;
	struct<3> Var5;
	float fVar6;
	struct<3> Var7;
	float fVar8;
	struct<3> Var9;
	Var1 = { 0f, 0f, 0f };
	Var2 = { 0f, 0f, 0f };
	iVar3 = __LIB_0__::func_138(uParam0->f_1 == 0, 3, 1);
	iVar4 = __LIB_0__::func_138(uParam0->f_1 == 0, 2, 0);
	Var5 = { uParam1->f_3[1 /*3*/] - uParam1->f_3[0 /*3*/] * Vector(0.5f, 0.5f, 0.5f) };
	if (!__LIB_40__::func_393(Param2, uParam1->f_3[0 /*3*/] + Var5, uParam1->f_3[3 /*3*/] + Var5, __LIB_0__::func_864(uParam1)))
	{
		fVar6 = __LIB_0__::func_504(0.4f, 1f, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f));
		if (__LIB_0__::func_158(uParam0->f_43, uParam0->f_37 - uParam1->f_3[0 /*3*/]) < 0f)
		{
			Var1 = { uParam0->f_43 * Vector(fVar6, fVar6, fVar6) };
		}
		if (__LIB_0__::func_158(uParam0->f_43, uParam0->f_37 - uParam1->f_3[1 /*3*/]) >= 0f)
		{
			Var2 = { uParam0->f_43 * Vector(fVar6, fVar6, fVar6) * Vector(-1f, -1f, -1f) };
		}
	}
	Var7 = { MISC::GET_CLOSEST_POINT_ON_LINE(uParam0->f_37, uParam1->f_3[iVar3 /*3*/], uParam1->f_3[iVar4 /*3*/], true) };
	if (MISC::ABSI(iParam3) > 15)
	{
		if (iParam3 > 0)
		{
			fVar8 = (SYSTEM::TO_FLOAT(iParam3) / SYSTEM::TO_FLOAT(128));
			Var9 = { __LIB_1__::func_576(Var7, uParam1->f_3[iVar4 /*3*/] + Var2, fVar8) };
		}
		else
		{
			fVar8 = (SYSTEM::TO_FLOAT(iParam3) / SYSTEM::TO_FLOAT(-128));
			Var9 = { __LIB_1__::func_576(Var7, uParam1->f_3[iVar3 /*3*/] + Var1, fVar8) };
		}
		Var0 = { Var9 - Param2 };
	}
	else
	{
		Var0 = { Var7 - Param2 };
	}
	return Var0;
}

int func_523(var uParam0, var uParam1, var uParam2, var uParam3)//Position - 0x65E4
{
	struct<3> Var0;
	float fVar1;
	if (uParam2->f_31 == 4)
	{
		return 0;
	}
	if (__LIB_40__::func_386(uParam3) != 2)
	{
		return 0;
	}
	if (__LIB_40__::func_386(uParam2) == 2)
	{
		return 0;
	}
	if (__LIB_0__::func_864(uParam0) >= 1)
	{
		return 0;
	}
	Var0 = { __LIB_7__::func_147(uParam0) };
	fVar1 = (Var0.f_2 - uParam1->f_29.f_2);
	if (fVar1 < 0.1f)
	{
		return 0;
	}
	return 1;
}

int func_524(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4)//Position - 0x6C23
{
	int iVar0;
	float fVar1;
	float fVar2;
	struct<3> Var3;
	struct<3> Var4;
	float fVar5;
	struct<3> Var6;
	struct<3> Var7;
	float fVar8;
	int iVar9;
	float fVar10;
	int iVar11;
	struct<3> Var12;
	struct<3> Var13;
	var uVar14;
	float fVar15;
	float fVar16;
	iVar0 = 75;
	fVar1 = 1000f;
	MISC::GET_LINE_PLANE_INTERSECTION(*uParam3, *uParam4, uParam0->f_37, uParam0->f_40, &fVar2);
	fVar5 = __LIB_0__::func_373(uParam0->f_31 != 4, 0.5f, 1.2f);
	if (fVar2 <= fVar5)
	{
		return 75;
	}
	Var6 = { *uParam4 - *uParam3 * Vector(fVar2, fVar2, fVar2) };
	Var7 = { *uParam3 + Var6 };
	Var7.f_2 = uParam3->f_2;
	fVar8 = (Var7.f_2 - uParam0->f_37.f_2);
	if (fVar8 > 2f)
	{
		return 75;
	}
	iVar9 = 0;
	while (iVar9 < (77 - 1))
	{
		if (((uParam2[iVar9 /*12*/])->f_1 >= 0f && iVar9 != 72) && iVar9 != 73)
		{
			Var3 = { __LIB_40__::func_399(uParam0, *(uParam1[iVar9 /*3*/])) };
			Var4 = { uParam0->f_37 + Var3 };
			fVar10 = SYSTEM::VDIST2(Var4, Var7);
			if (fVar10 < fVar1)
			{
				fVar1 = fVar10;
				iVar0 = iVar9;
			}
		}
		iVar9++;
	}
	Var12 = { Var7 + uParam0->f_40 };
	Var13 = { Var7 - uParam0->f_40 };
	if (iVar0 == 72)
	{
		iVar11 = __LIB_40__::func_418(uParam0, &Var12, &Var13, &Local_168, &Local_170, &Local_171, 0, &fVar15, &fVar16, &uVar14);
		if (iVar11 == 0)
		{
			__LIB_40__::func_417(uParam0, 0.5f);
			__LIB_40__::func_416(uParam0, 1f);
			__LIB_40__::func_415(uParam0, 2);
		}
		else
		{
			__LIB_40__::func_417(uParam0, fVar15);
			__LIB_40__::func_416(uParam0, fVar16);
			__LIB_40__::func_415(uParam0, iVar11);
			iVar0 = 75;
		}
	}
	else if (iVar0 == 73)
	{
		iVar11 = __LIB_40__::func_418(uParam0, &Var12, &Var13, &Local_164, &Local_166, &Local_167, 1, &fVar15, &fVar16, &uVar14);
		if (iVar11 == 0)
		{
			__LIB_40__::func_417(uParam0, 0.5f);
			__LIB_40__::func_416(uParam0, 1f);
			__LIB_40__::func_415(uParam0, 2);
		}
		else
		{
			__LIB_40__::func_417(uParam0, fVar15);
			__LIB_40__::func_416(uParam0, fVar16);
			__LIB_40__::func_415(uParam0, iVar11);
			iVar0 = 75;
		}
	}
	return iVar0;
}

void func_525(var uParam0, var uParam1, var uParam2)//Position - 0x70F8
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	struct<3> Var5;
	struct<3> Var6;
	struct<3> Var7;
	if (__LIB_11__::func_576(&(uParam0->f_4)) != 2)
	{
		if (__LIB_1__::func_44(&(uParam0->f_4)) == 3)
		{
			__LIB_40__::func_446(uParam0, 0);
		}
		else if (__LIB_1__::func_44(&(uParam0->f_4)) == 4)
		{
			__LIB_40__::func_446(uParam0, 2);
		}
		else
		{
			__LIB_40__::func_446(uParam0, 0);
		}
	}
	else
	{
		Var5 = { uParam1->f_3[1 /*3*/] - uParam1->f_3[0 /*3*/] * Vector(0.5f, 0.5f, 0.5f) };
		Var6 = { uParam1->f_3[0 /*3*/] + Var5 };
		Var7 = { uParam1->f_3[3 /*3*/] + Var5 };
		fVar0 = SYSTEM::VDIST(Var6, uParam2->f_37);
		fVar1 = SYSTEM::VDIST(Var7, uParam2->f_37);
		fVar2 = MISC::ABSF((fVar0 - fVar1));
		fVar3 = __LIB_0__::func_504(0.15f, 0.5f, (fVar2 / 570f));
		fVar4 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f);
		if (fVar4 < fVar3)
		{
			__LIB_40__::func_446(uParam0, 2);
		}
		else
		{
			__LIB_40__::func_446(uParam0, 0);
		}
	}
}

int func_526(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)//Position - 0x7274
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	struct<3> Var4;
	struct<3> Var5;
	float fVar6;
	struct<3> Var7;
	struct<3> Var8;
	struct<3> Var9;
	float fVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	struct<3> Var15;
	struct<3> Var16;
	int iVar17;
	int iVar18;
	float fVar19;
	float fVar20;
	int iVar21;
	float fVar22;
	int iVar23;
	float fVar24;
	float fVar25;
	float fVar26;
	struct<3> Var27;
	struct<3> Var28;
	struct<3> Var29;
	struct<3> Var30;
	float fVar31;
	float fVar32;
	int iVar33;
	float fVar34;
	struct<3> Var35;
	float fVar36;
	float fVar37;
	iVar0 = 75;
	fVar1 = 0.75f;
	fVar2 = 100f;
	MISC::GET_LINE_PLANE_INTERSECTION(*(uParam4[0 /*3*/]), *(uParam4[1 /*3*/]), uParam0->f_37, uParam0->f_40, &fVar6);
	Var7 = { *(uParam4[1 /*3*/]) - *(uParam4[0 /*3*/]) * Vector(fVar6, fVar6, fVar6) };
	Var8 = { *(uParam4[0 /*3*/]) + Var7 };
	Var9 = { Var8 - uParam0->f_37 };
	fVar10 = __LIB_0__::func_158(Var9, uParam0->f_43);
	iVar11 = -1;
	iVar12 = -1;
	iVar13 = 0;
	while (iVar13 < 10)
	{
		if (iVar11 == -1 && (fVar10 - 0.2f) <= uParam1->f_1571[iVar13 + 1])
		{
			iVar11 = iVar13;
		}
		if (iVar12 == -1 && (fVar10 + 0.2f) <= uParam1->f_1571[iVar13 + 1])
		{
			iVar12 = iVar13;
		}
		iVar13++;
	}
	if (iVar11 == -1)
	{
		iVar11 = __LIB_0__::func_138(fVar10 > 0f, 9, 0);
	}
	if (iVar12 == -1)
	{
		iVar12 = __LIB_0__::func_138(fVar10 > 0f, 9, 0);
	}
	Var15 = { uParam0->f_37 };
	iVar14 = 0;
	while (iVar14 <= 3)
	{
		iVar13 = iVar11;
		while (iVar13 <= iVar12)
		{
			iVar17 = 0;
			while (iVar17 < 10)
			{
				iVar18 = uParam1->f_1460[iVar13 /*11*/][iVar17];
				iVar17++;
				if ((uParam3[iVar18 /*12*/])->f_1 >= 0f)
				{
					fVar19 = ((((uParam3[iVar18 /*12*/])->f_1 - (*uParam3)[iVar18 /*12*/]) * IntToFloat((uParam3[iVar18 /*12*/])->f_3)) * 0.033333335f);
					fVar20 = ((fVar19 - uParam1->f_247.f_33) / 0.033333335f);
					iVar21 = SYSTEM::FLOOR(fVar20);
					fVar22 = (fVar20 - SYSTEM::TO_FLOAT(iVar21));
					iVar3 = (iVar14 + iVar21) - 2;
					if (iVar3 < (*uParam4 - 2) && iVar3 >= 0)
					{
						if (iVar14 == 0 && (iVar18 == 72 || iVar18 == 73))
						{
							fVar24 = -1f;
							fVar25 = -1f;
							if (iVar18 == 72)
							{
								iVar23 = __LIB_40__::func_418(uParam0, uParam4[8 /*3*/], uParam4[9 /*3*/], &Local_168, &Local_170, &Local_171, 0, &fVar24, &fVar25, &Var16);
							}
							else
							{
								iVar23 = __LIB_40__::func_418(uParam0, uParam4[8 /*3*/], uParam4[9 /*3*/], &Local_164, &Local_166, &Local_167, 1, &fVar24, &fVar25, &Var16);
							}
							if (iVar23 != 0)
							{
								fVar26 = __LIB_40__::func_398(iVar18);
								if (fVar26 < fVar1)
								{
									fVar1 = fVar26;
									iVar0 = iVar18;
									__LIB_40__::func_417(uParam0, fVar24);
									__LIB_40__::func_416(uParam0, fVar25);
									__LIB_40__::func_415(uParam0, iVar23);
									Var5 = { Var16 };
								}
							}
						}
						else if (iVar18 != 72 && iVar18 != 73)
						{
							Var4 = { __LIB_40__::func_399(uParam0, *(uParam2[iVar18 /*3*/])) };
							Var27 = { Var15 + Var4 };
							Var28 = { __LIB_1__::func_576(*(uParam4[iVar3 /*3*/]), *(uParam4[iVar3 + 1 /*3*/]), fVar22) };
							Var29 = { Var28 - Var4 };
							Var29.f_2 = uParam0->f_37.f_2;
							Var30 = { Var27 - Var28 };
							fVar31 = __LIB_0__::func_158(Var30, uParam0->f_40);
							fVar32 = __LIB_0__::func_158(uParam0->f_40, __LIB_7__::func_147(&(uParam1->f_247)) - uParam0->f_37);
							iVar33 = 0;
							while (((fVar31 > 0f && (iVar3 - iVar33) > 2) && __LIB_40__::func_421(uParam0)) && fVar32 > 0f)
							{
								iVar33++;
								Var28 = { MISC::GET_CLOSEST_POINT_ON_LINE(Var27, *(uParam4[(iVar3 - iVar33) /*3*/]), *(uParam4[((iVar3 - iVar33) - 1) /*3*/]), true) };
								Var30 = { Var27 - Var28 };
								fVar31 = __LIB_0__::func_158(Var30, uParam0->f_40);
							}
							if (MISC::ABSF(fVar31) > 0.3f)
							{
								fVar31 = (fVar31 * (0.3f / MISC::ABSF(fVar31)));
							}
							Var30 = { Var30 - uParam0->f_40 * Vector(fVar31, fVar31, fVar31) };
							fVar34 = SYSTEM::VMAG(Var30);
							if (fVar34 < 0.15f)
							{
								fVar34 = 0f;
							}
							fVar34 = (fVar34 + __LIB_40__::func_398(iVar18));
							if (fVar34 < fVar1)
							{
								Var35 = { uParam0->f_37 - Var28 };
								fVar36 = __LIB_0__::func_158(Var30, Var35);
								if (fVar36 > 0f)
								{
									if (fVar34 > 0.25f)
									{
										fVar37 = (2.5f * (fVar34 - 0.25f));
										fVar34 = (fVar34 + fVar37);
									}
								}
							}
							if (fVar34 < fVar2)
							{
								fVar2 = fVar34;
								Var5 = { Var28 };
							}
							if (fVar34 < fVar1)
							{
								if (iVar14 > 0)
								{
								}
								fVar1 = fVar34;
								iVar0 = iVar18;
								*uParam5 = { Var29 };
								*uParam6 = (iVar33 - iVar14);
								Var5 = { Var28 };
							}
						}
					}
				}
			}
			iVar13++;
		}
		*uParam7 = { Var5 };
		if (fVar1 <= 0.4f)
		{
			return iVar0;
		}
		if (iVar0 != 75)
		{
			return iVar0;
		}
		if (uParam0->f_31 == 4)
		{
			return 75;
		}
		iVar14++;
	}
	return iVar0;
}

void func_527(var uParam0, var uParam1)//Position - 0x8234
{
	int iVar0;
	iVar0 = __LIB_38__::func_713(uParam0);
	if (ENTITY::DOES_ENTITY_EXIST(*uParam1) && ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		ENTITY::ATTACH_ENTITY_TO_ENTITY(*uParam1, iVar0, PED::GET_PED_BONE_INDEX(iVar0, 60309), 0f, 0f, 0f, 0f, 0f, 0f, true, false, false, false, 2, true, 0);
		__LIB_40__::func_405(*uParam1, 1);
	}
}

int func_528(var uParam0, var uParam1, var uParam2)//Position - 0xA4E1
{
	if (__LIB_40__::func_475(uParam0, 1024))
	{
		return 0;
	}
	if (__LIB_40__::func_480(&(uParam0->f_4), 256))
	{
		return 0;
	}
	if (__LIB_40__::func_480(&(uParam0->f_4), 4))
	{
		return 0;
	}
	if (__LIB_40__::func_480(&(uParam0->f_4), 16))
	{
		return 0;
	}
	if (PED::IS_PED_INJURED(__LIB_38__::func_713(uParam0)))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_AT_COORD(uParam0->f_32, *uParam1, *uParam2, false, true, 0))
	{
		return 0;
	}
	if (!__LIB_40__::func_451(&(uParam0->f_4)))
	{
		return 0;
	}
	return 1;
}

int func_529(var uParam0, var uParam1)//Position - 0xA611
{
	float fVar0;
	if (uParam0->f_31 == 4)
	{
		return 0;
	}
	if (!__LIB_40__::func_475(uParam0, 512))
	{
		return 0;
	}
	if (__LIB_40__::func_475(uParam0, 1024))
	{
		return 0;
	}
	if (!__LIB_40__::func_475(uParam0, 16))
	{
		return 0;
	}
	if (SYSTEM::VDIST2(__LIB_0__::func_404(&(uParam0->f_4)) + Vector(1f, 0f, 0f), uParam0->f_37) > (4f * 4f))
	{
		return 0;
	}
	fVar0 = __LIB_0__::func_158(uParam0->f_40, __LIB_7__::func_147(&(uParam1->f_247)) - uParam0->f_37);
	if (fVar0 < 0f)
	{
		return 0;
	}
	return 1;
}

int func_530(var uParam0, int iParam1, int iParam2)//Position - 0xA6CD
{
	int iVar0;
	iVar0 = 0;
	if (__LIB_40__::func_475(uParam0[iParam1 /*94*/], 1024))
	{
		iVar0 = 5000;
		if (__LIB_10__::func_197(uParam0[iParam1 /*94*/]) == 72 || __LIB_10__::func_197(uParam0[iParam1 /*94*/]) == 73)
		{
			iVar0 = 2500;
		}
	}
	if (__LIB_40__::func_475(uParam0[iParam2 /*94*/], 1024))
	{
		iVar0 = 5000;
		if (__LIB_10__::func_197(uParam0[iParam2 /*94*/]) == 72 || __LIB_10__::func_197(uParam0[iParam2 /*94*/]) == 73)
		{
			iVar0 = 2500;
		}
	}
	return iVar0;
}

void func_531(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0xA898
{
	if (!PED::IS_PED_INJURED(__LIB_38__::func_713(uParam0[iParam1 /*94*/])) && !PED::IS_PED_INJURED(__LIB_38__::func_713(uParam0[iParam2 /*94*/])))
	{
		if (!bParam3)
		{
			if (!bParam4)
			{
				ENTITY::ATTACH_ENTITY_TO_ENTITY((uParam0[iParam1 /*94*/])->f_33, __LIB_38__::func_713(uParam0[iParam1 /*94*/]), PED::GET_PED_BONE_INDEX(__LIB_38__::func_713(uParam0[iParam1 /*94*/]), 28422), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
			}
			ENTITY::ATTACH_ENTITY_TO_ENTITY((uParam0[iParam2 /*94*/])->f_33, __LIB_38__::func_713(uParam0[iParam2 /*94*/]), PED::GET_PED_BONE_INDEX(__LIB_38__::func_713(uParam0[iParam2 /*94*/]), 28422), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
		}
		else
		{
			if (!bParam4)
			{
				ENTITY::ATTACH_ENTITY_TO_ENTITY((uParam0[iParam1 /*94*/])->f_33, __LIB_38__::func_713(uParam0[iParam1 /*94*/]), PED::GET_PED_BONE_INDEX(__LIB_38__::func_713(uParam0[iParam1 /*94*/]), 28422), Local_162, Local_163, false, false, false, false, 2, true, 0);
			}
			ENTITY::ATTACH_ENTITY_TO_ENTITY((uParam0[iParam2 /*94*/])->f_33, __LIB_38__::func_713(uParam0[iParam2 /*94*/]), PED::GET_PED_BONE_INDEX(__LIB_38__::func_713(uParam0[iParam2 /*94*/]), 28422), Local_162, Local_163, false, false, false, false, 2, true, 0);
		}
	}
}

int func_532(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, int iParam7, bool bParam8, float fParam9, bool bParam10, float fParam11, bool bParam12)//Position - 0xAF62
{
	struct<3> Var0;
	float fVar1;
	int iVar2;
	float fVar3;
	struct<3> Var4;
	struct<3> Var5;
	struct<3> Var6;
	struct<3> Var7;
	struct<3> Var8;
	struct<3> Var9;
	float fVar10;
	struct<3> Var11;
	struct<3> Var12;
	struct<3> Var13;
	float fVar14;
	struct<3> Var15;
	Var0 = { 0f, 0f, 1f };
	fVar1 = __LIB_0__::func_373(fParam9 == -1f, MISC::GET_FRAME_TIME(), fParam9);
	iVar2 = 0;
	fVar3 = (fVar1 / 0.033333335f);
	Var0 = { Var0 * Vector(fVar3, fVar3, fVar3) };
	if (bParam10)
	{
		fVar1 = (fVar1 + (fVar1 * 0.75f));
		Var0 = { Var0 + Var0 * Vector(0.75f, 0.75f, 0.75f) };
	}
	if ((*uParam5 == 1 && *uParam4 > 0.455f) && *uParam6 < 0.1f)
	{
		Var0 = { Var0 * Vector(-1f, -1f, -1f) };
		*uParam6 = (*uParam6 + fVar1);
		*uParam2 = { *uParam2 + Var0 };
	}
	else if (*uParam5 == 2)
	{
		if (*uParam4 > 0.05f && *iParam7 < 1)
		{
			Var0 = { *uParam2 * Vector(fVar3, fVar3, fVar3) * Vector(0.015f, 0.015f, 0.015f) };
			Var0.f_2 = 0f;
			*uParam2 = { *uParam2 + Var0 };
		}
		else if (*iParam7 >= 1)
		{
			Var0 = { *uParam2 * Vector(fVar3, fVar3, fVar3) * Vector(-0.1f, -0.1f, -0.1f) };
			*uParam2 = { *uParam2 + Var0 };
			*uParam5 = 0;
		}
	}
	*uParam4 = (*uParam4 + fVar1);
	Var4 = { *uParam3 / FtoV(SYSTEM::VMAG(*uParam3)) };
	GRAPHICS::DRAW_DEBUG_LINE(uParam0->f_29 + Vector(1f, 0f, 0f), uParam0->f_29 + Vector(1f, 0f, 0f) + Var4, 0, 0, 255, 255);
	GRAPHICS::DRAW_DEBUG_LINE(uParam0->f_29 + Vector(1f, 0f, 0f), uParam0->f_29 + Vector(2f, 0f, 0f), 0, 255, 0, 255);
	Var5 = { *uParam1 + *uParam2 * Vector(fVar1, fVar1, fVar1) };
	iVar2 = __LIB_40__::func_463(uParam0, uParam1, &Var5, uParam3, &Var7, &Var6, fParam11);
	if (iVar2 == 2)
	{
		if (bParam8)
		{
			AUDIO::PLAY_SOUND_FROM_COORD(-1, "TENNIS_NET_BALL_MEDIUM_MASTER", *uParam1, 0, false, 0, true);
			Var8 = { *uParam1 + *uParam2 };
			PHYSICS::APPLY_IMPULSE_TO_CLOTH(*uParam1, Var8, 2f);
		}
		Var9 = { *uParam3 / FtoV(SYSTEM::VMAG(*uParam3)) };
		fVar10 = __LIB_0__::func_158(Var9, *uParam2);
		Var11 = { Var9 * Vector(fVar10, fVar10, fVar10) };
		*uParam2 = { *uParam2 - Var11 * Vector(1.4f, 1.4f, 1.4f) };
		uParam2->f_2 = (uParam2->f_2 * 0.4f);
	}
	else if (iVar2 == 3 && !bParam12)
	{
		if (bParam8)
		{
			AUDIO::PLAY_SOUND_FROM_COORD(-1, "TENNIS_NET_BALL_SKIM_MASTER", *uParam1, 0, false, 0, true);
			Var12 = { *uParam1 + *uParam2 };
			PHYSICS::APPLY_IMPULSE_TO_CLOTH(*uParam1, Var12, 2f);
		}
		*uParam1 = { Var7 };
		*uParam2 = { *uParam2 - Var6 * FtoV(__LIB_0__::func_158(Var6, *uParam2)) * Vector(1.4f, 1.4f, 1.4f) };
	}
	Var13 = { *uParam1 };
	*uParam1 = { *uParam1 + *uParam2 * Vector(fVar1, fVar1, fVar1) };
	if (uParam1->f_2 < uParam0->f_29.f_2)
	{
		MISC::GET_LINE_PLANE_INTERSECTION(Var13, *uParam1, uParam0->f_29, 0f, 0f, 1f, &fVar14);
		Var15 = { *uParam2 * Vector(fVar1, fVar1, fVar1) * Vector(fVar14, fVar14, fVar14) };
		*uParam1 = { Var13 + Var15 };
		uParam1->f_2 = (uParam1->f_2 + 0.05f);
		*uParam2 = { __LIB_40__::func_462(*uParam2) };
		*iParam7++;
		iVar2 = 1;
		if (bParam8 && *iParam7 == 1)
		{
			AUDIO::PLAY_SOUND_FROM_COORD(-1, "TENNIS_CLS_BALL_HARD_MASTER", *uParam1, 0, false, 0, true);
		}
		else if ((bParam8 && *iParam7 > 1) && *iParam7 < 4)
		{
			AUDIO::PLAY_SOUND_FROM_COORD(-1, "TENNIS_CLS_BALL_MASTER", *uParam1, 0, false, 0, true);
		}
	}
	*uParam2 = { *uParam2 + __LIB_40__::func_461(*uParam2, fVar1) };
	GRAPHICS::DRAW_DEBUG_TEXT("ScriptedMotion", *uParam1, 0, 0, 255, 255);
	return iVar2;
}

int func_533(var uParam0, int iParam1, int iParam2)//Position - 0xC107
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = __LIB_38__::func_713(uParam0[iParam1 /*94*/]);
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
	{
		if (!PED::IS_PED_INJURED(iVar0))
		{
			TASK::TASK_SEEK_COVER_FROM_PED(iVar0, PLAYER::PLAYER_PED_ID(), -1, false);
		}
		if (!PED::IS_PED_INJURED(__LIB_38__::func_713(uParam0[(1 - iParam1) /*94*/])))
		{
			TASK::TASK_SEEK_COVER_FROM_PED(__LIB_38__::func_713(uParam0[(1 - iParam1) /*94*/]), PLAYER::PLAYER_PED_ID(), -1, false);
		}
		return 1;
	}
	if (PED::IS_PED_INJURED(iVar0))
	{
		return 1;
	}
	if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(iVar0))
	{
		return 1;
	}
	if (PED::IS_PED_IN_MELEE_COMBAT(iVar0))
	{
		return 1;
	}
	if ((!ENTITY::IS_ENTITY_DEAD(iVar0, false) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false)) && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iVar0, PLAYER::PLAYER_PED_ID(), true))
	{
		return 1;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 1;
	}
	if (uParam0->f_1657 != 1 && PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
	{
		__LIB_0__::func_229("TENN_WANTED", 7500, 0);
		__LIB_1__::func_330(iParam2, 1073741824);
		return 1;
	}
	if (PED::IS_PED_RAGDOLL(iVar0))
	{
		return 1;
	}
	iVar2 = (1 - iParam1);
	iVar1 = __LIB_38__::func_713(uParam0[iVar2 /*94*/]);
	if (PED::IS_PED_INJURED(iVar1))
	{
		return 1;
	}
	if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(iVar1))
	{
		return 1;
	}
	if (PED::IS_PED_IN_MELEE_COMBAT(iVar1))
	{
		return 1;
	}
	if ((!ENTITY::IS_ENTITY_DEAD(iVar1, false) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false)) && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iVar1, PLAYER::PLAYER_PED_ID(), true))
	{
		return 1;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		return 1;
	}
	if (PED::IS_PED_RAGDOLL(iVar1))
	{
		return 1;
	}
	if (uParam0->f_1657 == 1 && (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), iVar0) || ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), iVar1)))
	{
		return 1;
	}
	return 0;
}

void func_534(var uParam0, var uParam1, float fParam2, float fParam3, bool bParam4)//Position - 0x10131
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	uParam1->f_1658 = { uParam0->f_3[3 /*3*/] - uParam0->f_3[0 /*3*/] * Vector(fParam2, fParam2, fParam2) };
	uParam1->f_1661 = { uParam0->f_3[1 /*3*/] - uParam0->f_3[0 /*3*/] };
	uParam1->f_1664 = { __LIB_0__::func_835(uParam1->f_1661, uParam1->f_1658) };
	uParam0->f_49 = { uParam1->f_1658 / FtoV(SYSTEM::VMAG(uParam1->f_1658)) };
	uParam0->f_52 = { uParam1->f_1661 / FtoV(SYSTEM::VMAG(uParam1->f_1661)) };
	uParam0->f_16[0 /*3*/] = { uParam0->f_3[0 /*3*/] + uParam1->f_1658 * Vector(fParam3, fParam3, fParam3) };
	uParam0->f_16[1 /*3*/] = { uParam0->f_3[1 /*3*/] + uParam1->f_1658 * Vector(fParam3, fParam3, fParam3) };
	uParam0->f_16[2 /*3*/] = { uParam0->f_3[2 /*3*/] - uParam1->f_1658 * Vector(fParam3, fParam3, fParam3) };
	uParam0->f_16[3 /*3*/] = { uParam0->f_3[3 /*3*/] - uParam1->f_1658 * Vector(fParam3, fParam3, fParam3) };
	uParam0->f_29 = { uParam0->f_3[0 /*3*/] + uParam0->f_3[2 /*3*/] * Vector(0.5f, 0.5f, 0.5f) };
	uParam0->f_32[0 /*3*/] = { uParam0->f_3[0 /*3*/] + uParam1->f_1658 };
	uParam0->f_32[1 /*3*/] = { uParam0->f_3[1 /*3*/] + uParam1->f_1658 };
	__LIB_40__::func_473(uParam0, SYSTEM::VMAG(uParam1->f_1661));
	__LIB_40__::func_472(uParam0, fParam3);
	if (bParam4)
	{
		fVar0 = -0.694f;
		fVar1 = 0.693f;
		fVar2 = 1.075f;
		fVar3 = 0.87f;
	}
	else
	{
		fVar0 = -0.834f;
		fVar1 = 0.834f;
		fVar2 = 1.148f;
		fVar3 = 0.928f;
	}
	uParam0->f_39[0 /*3*/] = { uParam0->f_29 + uParam1->f_1661 * Vector(fVar0, fVar0, fVar0) };
	uParam0->f_39[0 /*3*/].f_2 = (uParam0->f_39[0 /*3*/].f_2 + fVar2);
	uParam0->f_39[1 /*3*/] = { uParam0->f_29 };
	uParam0->f_39[1 /*3*/].f_2 = (uParam0->f_39[1 /*3*/].f_2 + fVar3);
	uParam0->f_39[2 /*3*/] = { uParam0->f_29 + uParam1->f_1661 * Vector(fVar1, fVar1, fVar1) };
	uParam0->f_39[2 /*3*/].f_2 = (uParam0->f_39[2 /*3*/].f_2 + fVar2);
}

int func_535(var uParam0, int iParam1, var uParam2)//Position - 0x4A44
{
	int iVar0;
	if (ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(*uParam0) || __LIB_40__::func_464(uParam0, 16))
	{
		iVar0 = ENTITY::GET_LAST_MATERIAL_HIT_BY_ENTITY(*uParam0);
		if (iVar0 == 122789469)
		{
		}
		if ((((((((((((((((((((iVar0 == 1907048430 || iVar0 == 1187676648) || iVar0 == 282940568) || iVar0 == 435688960) || iVar0 == 762193613) || iVar0 == -145735917) || iVar0 == 233925547) || iVar0 == -2098049209) || iVar0 == 450003561) || iVar0 == 1394765188) || iVar0 == 125958708) || iVar0 == -1625995479) || iVar0 == -365631240) || iVar0 == -642658848) || iVar0 == 592446772) || iVar0 == 669292054) || iVar0 == 1144315879) || iVar0 == -1286696947) || iVar0 == 1849540536) && (iParam1 - uParam0->f_2) > 4) && iVar0 != 0)
		{
			__LIB_4__::func_896(uParam0, iParam1);
			uParam0->f_13 = { __LIB_7__::func_147(uParam0) };
			__LIB_40__::func_486(uParam0, 32);
			__LIB_40__::func_486(uParam0, 16);
			return 1;
		}
		if (__LIB_40__::func_464(uParam0, 16) && (iParam1 - uParam0->f_2) > 4)
		{
			__LIB_40__::func_486(uParam0, 16);
			__LIB_4__::func_896(uParam0, iParam1);
			uParam0->f_13 = { __LIB_7__::func_147(uParam0) };
			__LIB_40__::func_486(uParam0, 32);
			return 1;
		}
		if (SYSTEM::VDIST2(*uParam2, __LIB_7__::func_147(uParam0)) > (26.75f * 26.75f))
		{
			return 1;
		}
	}
	if (__LIB_1__::func_285(uParam0) > 5f)
	{
		__LIB_40__::func_403(uParam0);
		__LIB_40__::func_485(uParam0, 128);
		return 1;
	}
	return 0;
}

void func_536(var uParam0)//Position - 0x5AF9
{
	__LIB_40__::func_485(uParam0, 1);
}

int func_537(var uParam0, var uParam1, struct<3> Param2, bool bParam3)//Position - 0x6735
{
	struct<3> Var0;
	float fVar1;
	float fVar2;
	struct<3> Var3;
	struct<3> Var4;
	float fVar5;
	float fVar6;
	float fVar7;
	struct<3> Var8;
	struct<3> Var9;
	float fVar10;
	float fVar11;
	if (!bParam3)
	{
		return 0;
	}
	if (__LIB_10__::func_197(uParam0) == 75)
	{
		return 0;
	}
	if (!PED::IS_PED_INJURED(__LIB_38__::func_713(uParam0)) && MISC::GET_TENNIS_SWING_ANIM_SWUNG(__LIB_38__::func_713(uParam0)))
	{
		return 0;
	}
	if (__LIB_40__::func_413(uParam0) > MISC::GET_FRAME_COUNT())
	{
		return 0;
	}
	if (!__LIB_40__::func_475(uParam0, 1024))
	{
		return 0;
	}
	if (!__LIB_40__::func_475(uParam0, 512))
	{
		return 0;
	}
	if (__LIB_40__::func_475(uParam0, 8))
	{
		return 0;
	}
	if (__LIB_40__::func_480(&(uParam0->f_4), 16))
	{
		return 0;
	}
	Var0 = { __LIB_7__::func_147(uParam1) };
	if (__LIB_0__::func_158(uParam0->f_40, Var0 - Param2) > 0f)
	{
		return 0;
	}
	fVar1 = 2f;
	if (__LIB_10__::func_197(uParam0) == 72 || __LIB_10__::func_197(uParam0) == 73)
	{
		fVar1 = 0.45f;
	}
	else if (__LIB_40__::func_377(uParam0) > 5)
	{
		fVar1 = 1.5f;
	}
	fVar2 = SYSTEM::VDIST2(Var0, __LIB_40__::func_412(uParam0));
	if (fVar2 > (fVar1 * fVar1))
	{
		return 0;
	}
	Var3 = { __LIB_40__::func_412(uParam0) };
	Var4 = { Var0 - Var3 };
	fVar5 = __LIB_0__::func_158(uParam0->f_43, Var4);
	fVar6 = __LIB_0__::func_158(uParam0->f_40, Var4);
	fVar7 = __LIB_0__::func_158(0f, 0f, 1f, Var4);
	Var8 = { PED::GET_PED_BONE_COORDS(__LIB_38__::func_713(uParam0), 60309, 0f, 0f, 0f) };
	Var9 = { Var0 - Var8 };
	fVar10 = __LIB_0__::func_158(uParam0->f_43, Var9);
	fVar11 = (MISC::ABSF(fVar5) - MISC::ABSF(fVar10));
	fVar11 = (fVar11 * 0.3f);
	if (!__LIB_40__::func_411(uParam0->f_33, &Var8, &(uParam0->f_40), &Var0, &(uParam1->f_10)))
	{
		return 0;
	}
	if (MISC::ABSF(fVar5) > (0.65f + fVar11))
	{
		return 0;
	}
	if (fVar6 < -0.9f)
	{
		return 0;
	}
	if (fVar7 > 0.9f)
	{
		return 0;
	}
	__LIB_36__::func_741(uParam1, Var0);
	ENTITY::SET_ENTITY_COORDS(*uParam1, Var0, true, false, false, true);
	return 1;
}

int func_538(var uParam0, var uParam1, var uParam2, struct<3> Param3, var uParam4)//Position - 0x6F4C
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	float fVar3;
	float fVar4;
	if (ENTITY::IS_ENTITY_ATTACHED(*uParam2))
	{
		return 0;
	}
	if (__LIB_40__::func_386(uParam1) == 2 && __LIB_0__::func_864(uParam2) <= 1)
	{
		return 0;
	}
	if (uParam0->f_31 != 4)
	{
		if (!__LIB_40__::func_475(uParam0, 512))
		{
			return 0;
		}
		if (SYSTEM::VDIST2(uParam0->f_37, __LIB_7__::func_147(uParam2)) > (20f * 20f))
		{
			return 0;
		}
		if (__LIB_40__::func_480(&(uParam0->f_4), 1))
		{
			return 0;
		}
		*uParam4 = 0f;
		*uParam4 = __LIB_0__::func_158(uParam0->f_40, __LIB_7__::func_147(uParam2) - uParam0->f_37);
		Var0 = { uParam2->f_10 };
		Var1 = { __LIB_7__::func_147(uParam2) };
		Var0.f_2 = 0f;
		Var1.f_2 = Param3.f_2;
		Var2 = { Param3 - Var1 };
		fVar3 = __LIB_0__::func_158(Var0, Var2);
		if (*uParam4 > 2f && fVar3 < 0f)
		{
			return 0;
		}
		if (*uParam4 > 2f && *uParam4 < 7.6f)
		{
			return 0;
		}
		if (*uParam4 < 0.5f)
		{
			return 1;
		}
		if (((!PAD::IS_CONTROL_JUST_RELEASED(0 /*PLAYER_CONTROL*/, 223 /*INPUT_SCRIPT_RDOWN*/) && !PAD::IS_CONTROL_JUST_RELEASED(0 /*PLAYER_CONTROL*/, 224 /*INPUT_SCRIPT_RLEFT*/)) && !PAD::IS_CONTROL_JUST_RELEASED(0 /*PLAYER_CONTROL*/, 225 /*INPUT_SCRIPT_RRIGHT*/)) && !PAD::IS_CONTROL_JUST_RELEASED(0 /*PLAYER_CONTROL*/, 222 /*INPUT_SCRIPT_RUP*/))
		{
			return 0;
		}
	}
	else
	{
		if (!__LIB_40__::func_480(&(uParam0->f_4), 64))
		{
			return 0;
		}
		if (__LIB_40__::func_480(&(uParam0->f_4), 1))
		{
			return 0;
		}
		if (__LIB_40__::func_480(&(uParam0->f_4), 16))
		{
			return 0;
		}
		fVar4 = __LIB_0__::func_158(uParam0->f_40, __LIB_7__::func_147(uParam2) - uParam0->f_37);
		if (fVar4 > 1.2f)
		{
			return 0;
		}
	}
	return 1;
}

int func_539(var uParam0, struct<3> Param1, bool bParam2)//Position - 0x772C
{
	if (!bParam2)
	{
		return 0;
	}
	if (__LIB_10__::func_197(uParam0) != 75)
	{
		return 0;
	}
	if (SYSTEM::VDIST(uParam0->f_37, Param1) > 100f)
	{
		return 0;
	}
	if (__LIB_40__::func_480(&(uParam0->f_4), 32))
	{
		return 0;
	}
	return 1;
}

void func_540(var uParam0, var uParam1, bool bParam2, bool bParam3)//Position - 0x77F1
{
	float fVar0;
	float fVar1;
	*bParam2 = 0;
	*bParam3 = 0;
	switch (__LIB_1__::func_44(&(uParam0->f_4)))
	{
		case 2:
			if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_247) && __LIB_0__::func_864(&(uParam1->f_247)) > 0)
			{
				fVar0 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f);
				fVar1 = __LIB_0__::func_373(uParam0->f_4.f_20 == 2, 0.6f, 0.75f);
				if (fVar0 < fVar1)
				{
					if (!__LIB_40__::func_480(&(uParam0->f_4), 2))
					{
						*bParam2 = 1;
						__LIB_40__::func_495(&(uParam0->f_4), 2);
					}
					__LIB_6__::func_205(&(uParam0->f_4), 3);
				}
				else
				{
					if (!__LIB_40__::func_480(&(uParam0->f_4), 2))
					{
						*bParam3 = 1;
						__LIB_40__::func_495(&(uParam0->f_4), 2);
					}
					__LIB_6__::func_205(&(uParam0->f_4), 4);
				}
			}
			break;
		case 3:
			*bParam2 = 1;
			break;
		case 4:
			*bParam3 = 1;
			break;
	}
}

void func_541(int* iParam0)//Position - 0x86E9
{
	__LIB_19__::func_923(iParam0);
}

void func_542(var uParam0)//Position - 0x97A9
{
	__LIB_40__::func_501(&(uParam0->f_4), 2);
	__LIB_40__::func_501(&(uParam0->f_4), 32);
	__LIB_40__::func_501(&(uParam0->f_4), 64);
	__LIB_40__::func_501(&(uParam0->f_4), 8);
	__LIB_40__::func_501(&(uParam0->f_4), 128);
	__LIB_40__::func_501(&(uParam0->f_4), 1);
	__LIB_40__::func_501(&(uParam0->f_4), 512);
	__LIB_40__::func_484(uParam0, 16);
	__LIB_40__::func_484(uParam0, 256);
	__LIB_40__::func_484(uParam0, 8);
	__LIB_40__::func_484(uParam0, 128);
	__LIB_40__::func_484(uParam0, 2);
	__LIB_40__::func_484(uParam0, 512);
	__LIB_40__::func_484(uParam0, 4);
}

void func_543(var uParam0, int iParam1)//Position - 0x982E
{
	if (uParam0->f_36 == 75 && iParam1 != 75)
	{
		uParam0->f_36 = iParam1;
		__LIB_40__::func_484(uParam0, 128);
	}
	else if (uParam0->f_36 != 75 && iParam1 == 75)
	{
		uParam0->f_36 = iParam1;
	}
}

void func_544(var uParam0, var uParam1)//Position - 0xA593
{
	int iVar0;
	if (MISC::GET_GAME_TIMER() > __LIB_40__::func_439(&(uParam0->f_4)))
	{
		iVar0 = __LIB_40__::func_386(uParam1);
		if (iVar0 == 3 || iVar0 == 4)
		{
			__LIB_40__::func_396(&(uParam0->f_4), uParam0->f_4.f_6[0 /*3*/]);
			__LIB_6__::func_205(&(uParam0->f_4), 5);
			__LIB_40__::func_501(&(uParam0->f_4), 4);
		}
		__LIB_40__::func_452(&(uParam0->f_4), MISC::GET_GAME_TIMER() + 500);
	}
}

void func_545(var uParam0, var uParam1, var uParam2, var uParam3)//Position - 0xADDB
{
	int iVar0;
	int iVar1;
	iVar0 = __LIB_0__::func_404(uParam1);
	iVar1 = (1 - iVar0);
	if (!PED::IS_PED_INJURED(__LIB_38__::func_713(uParam0[iVar0 /*94*/])) && TASK::GET_SCRIPT_TASK_STATUS(__LIB_38__::func_713(uParam0[iVar0 /*94*/]), joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) == 1)
	{
		*uParam2 = TASK::GET_SEQUENCE_PROGRESS(__LIB_38__::func_713(uParam0[iVar0 /*94*/]));
	}
	if (!PED::IS_PED_INJURED(__LIB_38__::func_713(uParam0[iVar1 /*94*/])) && TASK::GET_SCRIPT_TASK_STATUS(__LIB_38__::func_713(uParam0[iVar1 /*94*/]), joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) == 1)
	{
		*uParam3 = TASK::GET_SEQUENCE_PROGRESS(__LIB_38__::func_713(uParam0[iVar1 /*94*/]));
	}
	if (__LIB_40__::func_475(uParam0[iVar0 /*94*/], 16384) && *uParam2 > 0)
	{
		__LIB_40__::func_484(uParam0[iVar0 /*94*/], 16384);
		__LIB_40__::func_502(__LIB_38__::func_713(uParam0[iVar0 /*94*/]), 0);
		PED::SET_PED_WEAPON_MOVEMENT_CLIPSET(__LIB_38__::func_713(uParam0[iVar0 /*94*/]), "weapons@tennis@male");
	}
	if (__LIB_40__::func_475(uParam0[iVar1 /*94*/], 16384) && *uParam3 > 0)
	{
		__LIB_40__::func_484(uParam0[iVar1 /*94*/], 16384);
		__LIB_40__::func_502(__LIB_38__::func_713(uParam0[iVar1 /*94*/]), 0);
		PED::SET_PED_WEAPON_MOVEMENT_CLIPSET(__LIB_38__::func_713(uParam0[iVar1 /*94*/]), "weapons@tennis@male");
	}
}

void func_546(var uParam0)//Position - 0xAEFB
{
	if (__LIB_40__::func_460(uParam0))
	{
		GRAPHICS::STOP_PARTICLE_FX_LOOPED(uParam0->f_23, true);
		__LIB_40__::func_486(uParam0, 1);
	}
}

void func_547(var uParam0)//Position - 0xC2F0
{
	if (ENTITY::DOES_ENTITY_EXIST((uParam0[0 /*94*/])->f_33))
	{
		ENTITY::DETACH_ENTITY((uParam0[0 /*94*/])->f_33, true, true);
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&((uParam0[0 /*94*/])->f_33));
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_247))
	{
		ENTITY::DETACH_ENTITY(uParam0->f_247, true, true);
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(uParam0->f_247));
	}
	if (ENTITY::DOES_ENTITY_EXIST((uParam0[1 /*94*/])->f_33))
	{
		ENTITY::DETACH_ENTITY((uParam0[1 /*94*/])->f_33, true, true);
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&((uParam0[1 /*94*/])->f_33));
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_tennis_ball"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(uParam0->f_1668);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(uParam0->f_1669);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_tennis_rack_01b"));
	STREAMING::REMOVE_ANIM_DICT("mini@tennis");
	STREAMING::REMOVE_ANIM_DICT("mini@tennis@female");
	if (__LIB_2__::func_274(1))
	{
		__LIB_2__::func_270(1);
	}
	if (__LIB_2__::func_274(2))
	{
		__LIB_2__::func_270(2);
	}
	if (!__LIB_40__::func_487(-1))
	{
		PLAYER::SET_PLAYER_LEAVE_PED_BEHIND(PLAYER::PLAYER_ID(), true);
	}
	else
	{
		PLAYER::SET_PLAYER_LEAVE_PED_BEHIND(PLAYER::PLAYER_ID(), false);
	}
	if (!ENTITY::IS_ENTITY_DEAD((uParam0[0 /*94*/])->f_32, false) && !PED::IS_PED_BEING_STEALTH_KILLED((uParam0[0 /*94*/])->f_32))
	{
		__LIB_40__::func_444(uParam0, 0, 1);
	}
	if (!ENTITY::IS_ENTITY_DEAD((uParam0[1 /*94*/])->f_32, false) && !PED::IS_PED_BEING_STEALTH_KILLED((uParam0[1 /*94*/])->f_32))
	{
		__LIB_40__::func_444(uParam0, 1, 1);
	}
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_548(var uParam0, int iParam1, int iParam2, struct<3> Param3, struct<3> Param4)//Position - 0xE984
{
	uParam0->f_36 = 75;
	uParam0->f_1 = iParam1;
	uParam0->f_40 = { Param3 / FtoV(SYSTEM::VMAG(Param3)) };
	uParam0->f_43 = { Param4 / FtoV(SYSTEM::VMAG(Param4)) };
	uParam0->f_63 = (3f + 1f);
	switch (iParam2)
	{
		case 0:
			uParam0->f_31 = iParam2;
			break;
		case 1:
			uParam0->f_31 = iParam2;
			break;
		case 2:
			uParam0->f_31 = iParam2;
			break;
		case 3:
			uParam0->f_31 = iParam2;
			break;
		case 4:
			__LIB_40__::func_488(&(uParam0->f_4));
			uParam0->f_31 = iParam2;
			break;
	}
}

int func_549(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6)//Position - 0x3302
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	iVar0 = 1;
	iVar1 = __LIB_38__::func_713(uParam0[iParam1 /*94*/]);
	iVar2 = __LIB_38__::func_713(uParam0[iParam2 /*94*/]);
	if (!PED::IS_PED_INJURED(iVar1) && TASK::GET_SCRIPT_TASK_STATUS(iVar1, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) != 7)
	{
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(iVar1, "mini@tennis", "idle_2_serve", 3))
		{
		}
		iVar0 = 0;
		if (MISC::IS_TENNIS_MODE(iVar1))
		{
			__LIB_40__::func_494(uParam0[iParam1 /*94*/], 16384);
		}
	}
	else if ((!PED::IS_PED_INJURED(iVar1) && (bParam5 || iParam4 == 1)) && !__LIB_40__::func_475(uParam0[iParam1 /*94*/], 8192))
	{
		if (iParam1 == iParam3)
		{
			__LIB_40__::func_474(uParam0[iParam1 /*94*/], "TennisServeSet", 0f);
		}
		__LIB_40__::func_502(iVar1, 1);
		PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iVar1, false, false);
		__LIB_40__::func_494(uParam0[iParam1 /*94*/], 8192);
	}
	else if (__LIB_40__::func_475(uParam0[iParam1 /*94*/], 8192) && iParam1 == iParam3)
	{
		if (!PED::IS_PED_INJURED(iVar1) && TASK::IS_TASK_MOVE_NETWORK_ACTIVE(iVar1))
		{
			if (MISC::ARE_STRINGS_EQUAL(TASK::GET_TASK_MOVE_NETWORK_STATE(iVar1), "Intro") && TASK::IS_TASK_MOVE_NETWORK_READY_FOR_TRANSITION(iVar1))
			{
				TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(iVar1, "running");
			}
		}
	}
	bVar3 = (((iParam2 != iParam3 && iParam6 >= (__LIB_40__::func_355(uParam0[iParam2 /*94*/]) - 1)) && iVar0) && 1);
	if (!PED::IS_PED_INJURED(iVar2) && (TASK::GET_SCRIPT_TASK_STATUS(iVar2, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) != 7 && !bVar3))
	{
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(iVar2, "mini@tennis", "idle_2_serve", 3))
		{
		}
		if (MISC::IS_TENNIS_MODE(iVar2))
		{
			__LIB_40__::func_494(uParam0[iParam2 /*94*/], 16384);
		}
		iVar0 = 0;
	}
	else if (((!PED::IS_PED_INJURED(iVar2) && ((bParam5 || iParam4 == 4) || iParam4 == 1)) && !__LIB_40__::func_475(uParam0[iParam2 /*94*/], 8192)) && TASK::GET_SCRIPT_TASK_STATUS(iVar2, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) == 7)
	{
		if (iParam2 == iParam3)
		{
			__LIB_40__::func_474(uParam0[iParam2 /*94*/], "TennisServeSet", 0f);
		}
		__LIB_40__::func_502(iVar2, 1);
		PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iVar2, false, false);
		__LIB_40__::func_494(uParam0[iParam2 /*94*/], 8192);
	}
	else if (__LIB_40__::func_475(uParam0[iParam2 /*94*/], 8192) && iParam2 == iParam3)
	{
		if (!PED::IS_PED_INJURED(iVar2) && TASK::IS_TASK_MOVE_NETWORK_ACTIVE(iVar2))
		{
			if (MISC::ARE_STRINGS_EQUAL(TASK::GET_TASK_MOVE_NETWORK_STATE(iVar2), "Intro") && TASK::IS_TASK_MOVE_NETWORK_READY_FOR_TRANSITION(iVar2))
			{
				TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(iVar2, "running");
			}
		}
	}
	return iVar0;
}

void func_550(int iParam0, int iParam1, var uParam2, var uParam3)//Position - 0x35E1
{
	if (iParam0 == iParam1)
	{
		if (__LIB_40__::func_480(&((uParam2[iParam1 /*94*/])->f_4), 16))
		{
			__LIB_40__::func_496(uParam3, 33554432);
			__LIB_1__::func_330(uParam3, 32);
		}
		else
		{
			__LIB_40__::func_496(uParam3, 67108864);
			__LIB_1__::func_330(uParam3, 64);
		}
	}
	else if (iParam0 != iParam1)
	{
		if (__LIB_40__::func_475(uParam2[iParam1 /*94*/], 2) || __LIB_40__::func_480(&((uParam2[iParam0 /*94*/])->f_4), 16))
		{
			__LIB_40__::func_496(uParam3, 134217728);
		}
		else if (!__LIB_40__::func_475(uParam2[iParam1 /*94*/], 2))
		{
			__LIB_40__::func_496(uParam3, 16777216);
		}
		__LIB_1__::func_330(uParam3, 1024);
	}
}

void func_551(var uParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)//Position - 0x556D
{
	int iVar0;
	bool bVar1;
	if (__LIB_0__::func_216(__LIB_38__::func_713(uParam0)) == 17 && MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f) < 0.5f)
	{
		__LIB_40__::func_498(uParam0, "TENNIS_EXHERT", __LIB_40__::func_404(uParam0), 9);
	}
	bVar1 = (bParam5 || bParam4);
	if (bParam2 || bParam3)
	{
		if (__LIB_1__::func_45(uParam1) == 0)
		{
			AUDIO::PLAY_SOUND_FROM_ENTITY(-1, __LIB_1__::func_295(uParam0->f_31 != 4, "TENNIS_PLYR_SMASH_MASTER", "TENNIS_NPC_SMASH_MASTER"), __LIB_38__::func_713(uParam0), 0, false, 0);
		}
		else if (__LIB_1__::func_45(uParam1) == 2)
		{
			AUDIO::PLAY_SOUND_FROM_ENTITY(-1, __LIB_1__::func_295(uParam0->f_31 != 4, "TENNIS_PLYR_SMASH_BACKSLICE_MASTER", "TENNIS_NPC_SMASH_BACKSLICE_MASTER"), __LIB_38__::func_713(uParam0), 0, false, 0);
		}
		else if (__LIB_1__::func_45(uParam1) == 1)
		{
			AUDIO::PLAY_SOUND_FROM_ENTITY(-1, __LIB_1__::func_295(uParam0->f_31 != 4, "TENNIS_PLYR_SMASH_MASTER", "TENNIS_NPC_SMASH_MASTER"), __LIB_38__::func_713(uParam0), 0, false, 0);
		}
		iVar0 = 100;
	}
	else if (bVar1)
	{
		AUDIO::PLAY_SOUND_FROM_ENTITY(-1, __LIB_1__::func_295(uParam0->f_31 != 4, "TENNIS_PLYR_LOB_MASTER", "TENNIS_NPC_LOB_MASTER"), __LIB_38__::func_713(uParam0), 0, false, 0);
		iVar0 = 60;
	}
	else
	{
		if (__LIB_1__::func_45(uParam1) == 0)
		{
			AUDIO::PLAY_SOUND_FROM_ENTITY(-1, __LIB_1__::func_295(uParam0->f_31 != 4, "TENNIS_PLYR_FOREARM_MASTER", "TENNIS_NPC_FOREARM_MASTER"), __LIB_38__::func_713(uParam0), 0, false, 0);
		}
		else if (__LIB_1__::func_45(uParam1) == 2)
		{
			AUDIO::PLAY_SOUND_FROM_ENTITY(-1, __LIB_1__::func_295(uParam0->f_31 != 4, "TENNIS_PLYR_BACKSLICE_MASTER", "TENNIS_NPC_BACKSLICE_MASTER"), __LIB_38__::func_713(uParam0), 0, false, 0);
		}
		else if (__LIB_1__::func_45(uParam1) == 1)
		{
			AUDIO::PLAY_SOUND_FROM_ENTITY(-1, __LIB_1__::func_295(uParam0->f_31 != 4, "TENNIS_PLYR_TOPSPIN_MASTER", "TENNIS_NPC_TOPSPIN_MASTER"), __LIB_38__::func_713(uParam0), 0, false, 0);
		}
		iVar0 = 80;
	}
	if (uParam0->f_31 != 4)
	{
		PAD::SET_CONTROL_SHAKE(0 /*PLAYER_CONTROL*/, iVar0, 256);
	}
}

int func_552(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x8BCB
{
	if (!PED::IS_PED_INJURED(__LIB_38__::func_713(uParam0[iParam1 /*94*/])) && TASK::GET_SCRIPT_TASK_STATUS(__LIB_38__::func_713(uParam0[iParam1 /*94*/]), joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) != 7)
	{
		return 0;
	}
	else if ((!PED::IS_PED_INJURED(__LIB_38__::func_713(uParam0[iParam1 /*94*/])) && ((bParam4 || iParam3 == 4) || iParam3 == 1)) && !__LIB_40__::func_475(uParam0[iParam1 /*94*/], 8192))
	{
		if (iParam1 == iParam2)
		{
			__LIB_40__::func_474(uParam0[iParam1 /*94*/], "TennisServeSet", 0f);
		}
		__LIB_40__::func_502(__LIB_38__::func_713(uParam0[iParam1 /*94*/]), 1);
		PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(__LIB_38__::func_713(uParam0[iParam1 /*94*/]), false, false);
		__LIB_40__::func_494(uParam0[iParam1 /*94*/], 8192);
	}
	else if (__LIB_40__::func_475(uParam0[iParam1 /*94*/], 8192) && iParam1 == iParam2)
	{
		if (!PED::IS_PED_INJURED(__LIB_38__::func_713(uParam0[iParam1 /*94*/])) && TASK::IS_TASK_MOVE_NETWORK_ACTIVE(__LIB_38__::func_713(uParam0[iParam1 /*94*/])))
		{
			if (MISC::ARE_STRINGS_EQUAL(TASK::GET_TASK_MOVE_NETWORK_STATE(__LIB_38__::func_713(uParam0[iParam1 /*94*/])), "Intro") && TASK::IS_TASK_MOVE_NETWORK_READY_FOR_TRANSITION(__LIB_38__::func_713(uParam0[iParam1 /*94*/])))
			{
				TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(__LIB_38__::func_713(uParam0[iParam1 /*94*/]), "running");
			}
		}
	}
	return 1;
}

void func_553(var uParam0, var uParam1, var uParam2)//Position - 0x5501
{
	float fVar0;
	struct<3> Var1;
	struct<3> Var2;
	fVar0 = (MISC::GET_HEADING_FROM_VECTOR_2D(*uParam1, uParam1->f_1) + 27f);
	Var1 = { *uParam2 + Vector(10f, 0f, 0f) };
	Var2 = { -15f, 0f, fVar0 };
	CAM::SET_CAM_PARAMS(uParam0->f_3, Var1, Var2, 45f, 0, 1, 1, 2);
}

void func_554(var uParam0, int iParam1)//Position - 0x5551
{
	uParam0->f_13 = (uParam0->f_13 - (uParam0->f_13 && iParam1));
}

void func_555(bool bParam0)//Position - 0x5569
{
	GRAPHICS::CASCADE_SHADOWS_SET_DYNAMIC_DEPTH_MODE(bParam0);
	if (bParam0)
	{
		GRAPHICS::CASCADE_SHADOWS_SET_CASCADE_BOUNDS_SCALE(0.25f);
	}
}

void func_556(var uParam0, int iParam1)//Position - 0x5585
{
	uParam0->f_13 = (uParam0->f_13 || iParam1);
}

void func_557(var uParam0, var uParam1)//Position - 0x353EA
{
	(uParam0[0 /*94*/])->f_43 = { (uParam0[0 /*94*/])->f_43 * Vector(-1f, -1f, -1f) };
	(uParam0[0 /*94*/])->f_40 = { (uParam0[0 /*94*/])->f_40 * Vector(-1f, -1f, -1f) };
	(uParam0[1 /*94*/])->f_43 = { (uParam0[1 /*94*/])->f_43 * Vector(-1f, -1f, -1f) };
	(uParam0[1 /*94*/])->f_40 = { (uParam0[1 /*94*/])->f_40 * Vector(-1f, -1f, -1f) };
	if (uParam1->f_10 == 1)
	{
		uParam1->f_10 = 2;
	}
	else if (uParam1->f_10 == 2)
	{
		uParam1->f_10 = 1;
	}
	if (uParam1->f_9 == 1)
	{
		uParam1->f_9 = 2;
	}
	else if (uParam1->f_9 == 2)
	{
		uParam1->f_9 = 1;
	}
}

void func_558(var uParam0)//Position - 0x35893
{
	if ((uParam0[0 /*94*/])->f_1 == 0)
	{
		(uParam0[0 /*94*/])->f_1 = 1;
		(uParam0[1 /*94*/])->f_1 = 0;
	}
	else
	{
		(uParam0[0 /*94*/])->f_1 = 0;
		(uParam0[1 /*94*/])->f_1 = 1;
	}
}

char* func_559()//Position - 0x35A74
{
	char* sVar0;
	sVar0 = "b_44";
	return sVar0;
}

void func_560(var uParam0, var uParam1)//Position - 0x3AC8E
{
	uParam0->f_10 = uParam1;
}

int func_561(var uParam0, int iParam1, bool bParam2)//Position - 0x3B9B7
{
	if (bParam2)
	{
		return 0;
	}
	if (((*uParam0)[0 /*8*/] + (*uParam0)[1 /*8*/]) >= 2)
	{
		return 0;
	}
	if ((uParam0[0 /*8*/])->f_1[iParam1] > 0)
	{
		return 0;
	}
	if ((uParam0[1 /*8*/])->f_1[iParam1] > 0)
	{
		return 0;
	}
	if ((uParam0[0 /*8*/])->f_7 > 0)
	{
		return 0;
	}
	if ((uParam0[1 /*8*/])->f_7 > 0)
	{
		return 0;
	}
	return 1;
}

void func_562(int iParam0, bool bParam1, bool bParam2)//Position - 0x3CA34
{
	if (bParam2)
	{
		__LIB_0__::func_704(bParam1);
	}
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "DISPLAY_SCOREBOARD");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bParam1);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_563(int iParam0, bool bParam1)//Position - 0x3CA5C
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "DISPLAY_PLAYER_CARD");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bParam1);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

int func_564(var uParam0)//Position - 0x3D9AB
{
	return uParam0->f_1678;
}

void func_565(struct<3> Param0, var uParam1, bool bParam2)//Position - 0x3D9B8
{
	struct<3> Var0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	Param0.f_2 = (Param0.f_2 + 0.05f);
	Var0 = { 0.673f, 0.673f, 0.65f };
	if (!bParam2)
	{
		switch (*uParam1)
		{
			case 1:
				HUD::GET_HUD_COLOUR(6, &iVar1, &iVar2, &iVar3, &iVar4);
				break;
			case 2:
				HUD::GET_HUD_COLOUR(12, &iVar1, &iVar2, &iVar3, &iVar4);
				break;
			default:
				HUD::GET_HUD_COLOUR(1, &iVar1, &iVar2, &iVar3, &iVar4);
				break;
		}
		GRAPHICS::DRAW_MARKER(23, Param0, 0f, 0f, 0f, 0f, 0f, 0f, Var0, iVar1, iVar2, iVar3, iVar4, false, false, 2, false, 0, 0, false);
	}
	else
	{
		GRAPHICS::DRAW_MARKER(23, Param0, 0f, 0f, 0f, 0f, 0f, 0f, Var0, 64, 255, 64, 255, false, false, 2, false, 0, 0, false);
	}
}

char* func_566(int iParam0)//Position - 0x3E058
{
	switch (iParam0)
	{
		case 1:
			return "VESP_HEADER";
		case 0:
			return "MIKE_HEADER";
		case 5:
			return "VESP_APTS";
		case 2:
			return "VINE_APTS";
		case 4:
			return "LSU_COURT";
		case 6:
			return "WEAZEL_COURT";
		case 7:
			return "CHUMASH_HOTEL";
		case 3:
			return "RICHMAN_HOTEL";
		default:
	}
	return "VESP_HEADER";
}

void func_567(int iParam0, float fParam1)//Position - 0x3E181
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SWING_METER_TRANSITION_OUT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fParam1);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_568(int iParam0)//Position - 0x3E19E
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SWING_METER_TRANSITION_IN");
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_569(int iParam0, float fParam1, float fParam2)//Position - 0x3E1B5
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SWING_METER_POSITION");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fParam2);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_570(int iParam0, bool bParam1, float fParam2, bool bParam3, float fParam4)//Position - 0x3E449
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SWING_METER_SET_APEX_MARKER");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fParam2);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bParam3);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fParam4);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_571(int iParam0, bool bParam1, float fParam2, bool bParam3, float fParam4)//Position - 0x3E478
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SWING_METER_SET_MARKER");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fParam2);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bParam3);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fParam4);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_572(var uParam0)//Position - 0x5C206
{
	GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(*uParam0, 255, 255, 255, 0, 0);
}

bool func_573()//Position - 0x5C370
{
	return Global_2715699.f_2846.f_26;
}

void func_574(int iParam0)//Position - 0x5D8CE
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_SCOREBOARD_SLOT");
}

void func_575(int iParam0)//Position - 0x5D8E2
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_SCOREBOARD_TITLE");
}

void func_576(int iParam0)//Position - 0x5D930
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_PLAYERCARD_SLOT");
}

void func_577(char* sParam0, int iParam1)//Position - 0x5D950
{
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "NUMBER") && iParam1 == -1)
	{
		GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("");
		GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	}
	else
	{
		GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
		HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
		GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	}
}

void func_578(int iParam0)//Position - 0x5D98D
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_PLAYERCARD_TITLE");
}

float func_579(char* sParam0)//Position - 0x5D9F8
{
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "react_lose_01"))
	{
		return (125f * 0.033f);
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "react_lose_02"))
	{
		return (155f * 0.033f);
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "react_lose_03"))
	{
		return (135f * 0.033f);
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "react_lose_04"))
	{
		return (195f * 0.033f);
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "react_lose_05"))
	{
		return (135f * 0.033f);
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "react_win_01"))
	{
		return (114f * 0.033f);
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "react_win_02"))
	{
		return (144f * 0.033f);
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "react_win_03"))
	{
		return (155f * 0.033f);
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "react_win_04"))
	{
		return (139f * 0.033f);
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "react_win_05"))
	{
		return (150f * 0.033f);
	}
	return 3.55f;
}

void func_580(var uParam0, int iParam1, bool bParam2)//Position - 0x6BC58
{
	if (bParam2)
	{
		uParam0->f_10 = iParam1;
	}
	uParam0->f_9 = iParam1;
	uParam0->f_27 = bParam2;
}

bool func_581(var uParam0, int iParam1)//Position - 0x6BC77
{
	return (uParam0->f_13 && iParam1) != 0;
}

void func_582(int iParam0, float fParam1, float fParam2)//Position - 0x6BD7B
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SWING_METER_SET_FILL");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fParam2);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_583(int iParam0, float fParam1, float fParam2)//Position - 0x6BD9F
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SWING_METER_SET_TARGET");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fParam2);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_584(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8)//Position - 0x6C0D3
{
	switch (iParam0)
	{
		case 5:
			*uParam4 = 6.871f;
			break;
		case 1:
			*uParam4 = 6.116f;
			break;
		case 3:
			*uParam4 = 6.374f;
			break;
		case 4:
			*uParam4 = 6.454f;
			break;
		case 7:
			*uParam4 = 6.439f;
			break;
		case 2:
			*uParam4 = 6.521f;
			break;
		default:
			*uParam4 = 6.116f;
			break;
	}
	switch (iParam0)
	{
		case 5:
			*uParam2 = -7.003f;
			break;
		case 1:
			*uParam2 = -7.003f;
			break;
		case 3:
			*uParam2 = -6.656f;
			break;
		case 4:
			*uParam2 = -6.621f;
			break;
		case 7:
			*uParam2 = -6.608f;
			break;
		case 2:
			*uParam2 = -6.681f;
			break;
		default:
			*uParam2 = -6.008f;
			break;
	}
	switch (iParam0)
	{
		case 5:
			*uParam1 = 6.851f;
			break;
		case 1:
			*uParam1 = 6.701f;
			break;
		default:
			*uParam1 = 6.566f;
			break;
	}
	switch (iParam0)
	{
		case 1:
			*uParam6 = 4.538f;
			break;
		default:
			*uParam6 = 4.538f;
			break;
	}
	switch (iParam0)
	{
		case 5:
			*uParam3 = 45f;
			break;
		case 1:
			*uParam3 = 45f;
			break;
		case 3:
			*uParam3 = 45f;
			break;
		case 4:
			*uParam3 = 45f;
			break;
		case 7:
			*uParam3 = 45f;
			break;
		case 2:
			*uParam3 = 45f;
			break;
		default:
			*uParam3 = 50f;
			break;
	}
	switch (iParam0)
	{
		case 5:
			*uParam5 = 11.2f;
			break;
		default:
			*uParam5 = 11.2f;
			break;
	}
	*uParam7 = 18.6f;
	*uParam8 = 15.543f;
}

struct<16> func_585()//Position - 0x6CA2E
{
	return Global_1574992;
}

void func_586()//Position - 0x981A5
{
	GRAPHICS::DRAW_DEBUG_TEXT_2D("Disabling First Person Cam", 0.5f, 0.8f, 0f, 0, 0, 255, 255);
	CAM::DISABLE_ON_FOOT_FIRST_PERSON_VIEW_THIS_UPDATE();
}

void func_587(var uParam0, int iParam1)//Position - 0x981CA
{
	uParam0->f_16 = iParam1;
}

void func_588(var uParam0, struct<3> Param1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, int iParam27)//Position - 0xA0377
{
	int iVar0;
	float fVar1;
	float fVar2;
	iVar0 = __LIB_0__::func_138(iParam27 == 0, 0, 2);
	fVar1 = __LIB_0__::func_373(__LIB_0__::func_404(&(uParam0->f_189)) == 1, -7.003f, -6.008f);
	fVar2 = __LIB_0__::func_373(__LIB_0__::func_404(&(uParam0->f_189)) == 1, 6.701f, 6.566f);
	CAM::SET_CAM_COORD(Param1.f_2, uParam0->f_189.f_3[iVar0 /*3*/] + (uParam0[iParam27 /*94*/])->f_43 * (uParam0[iParam27 /*94*/])->f_43 + (uParam0[iParam27 /*94*/])->f_40 * Vector(fVar1, fVar1, fVar1) + Vector(1f, 0f, 0f) * Vector(fVar2, fVar2, fVar2));
}

void func_589(var uParam0, int iParam1)//Position - 0xA067C
{
	uParam0->f_14 = 0.063f;
	uParam0->f_15 = 0.491f;
	uParam0->f_16 = 0.484f;
	uParam0->f_17 = 50f;
	if (iParam1 == 1)
	{
		uParam0->f_14 = 0.033f;
		uParam0->f_15 = 0.588f;
		uParam0->f_16 = 0.461f;
		uParam0->f_17 = 45f;
	}
	else if (iParam1 == 5)
	{
		uParam0->f_14 = 0.039f;
		uParam0->f_15 = 0.401f;
		uParam0->f_16 = 0.334f;
		uParam0->f_17 = 50f;
	}
	else if (iParam1 == 3)
	{
		uParam0->f_14 = 0.032f;
		uParam0->f_15 = 0.588f;
		uParam0->f_16 = 0.442f;
		uParam0->f_17 = 45f;
	}
	else if (iParam1 == 4)
	{
		uParam0->f_14 = 0.036f;
		uParam0->f_15 = 0.606f;
		uParam0->f_16 = 0.468f;
		uParam0->f_17 = 45f;
	}
	else if (iParam1 == 6)
	{
		uParam0->f_14 = 0.037f;
		uParam0->f_15 = 0.506f;
		uParam0->f_16 = 0.428f;
		uParam0->f_17 = 45f;
	}
	else if (iParam1 == 7)
	{
		uParam0->f_14 = 0.032f;
		uParam0->f_15 = 0.42f;
		uParam0->f_16 = 0.341f;
		uParam0->f_17 = 50f;
	}
	else if (iParam1 == 2)
	{
		uParam0->f_14 = 0.034f;
		uParam0->f_15 = 0.503f;
		uParam0->f_16 = 0.418f;
		uParam0->f_17 = 45f;
	}
}

Vector3 func_590(struct<3> Param0, var uParam1, struct<3> Param2, struct<3> Param3, var uParam4, var uParam5, var uParam6, var uParam7, int iParam8, var uParam9, float fParam10)//Position - 0x6880
{
	struct<3> Var0;
	int iVar1;
	int iVar2;
	iVar1 = 0;
	iVar2 = 0;
	while (iVar2 < 180 && iVar1 < 2)
	{
		Var0 = { Param2 };
		__LIB_40__::func_532(uParam1, &Param2, &Param3, &uParam4, &uParam7, &iParam8, &uParam9, &iVar1, 0, -1082130432, 0, 0, 0);
		if (SYSTEM::VDIST(Param0, Var0) < SYSTEM::VDIST(Param0, Param2))
		{
			*fParam10 = (IntToFloat(iVar2) * MISC::GET_FRAME_TIME());
			return Param2;
		}
		if (iVar1 > 0 && Param3.f_2 < 0f)
		{
			*fParam10 = (IntToFloat(iVar2) * MISC::GET_FRAME_TIME());
			return Var0;
		}
		iVar2++;
	}
	*fParam10 = (IntToFloat(iVar2) * MISC::GET_FRAME_TIME());
	return Param2;
}

Vector3 func_591(var uParam0, struct<3> Param1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, int iParam9, var uParam10)//Position - 0x6941
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 180)
	{
		__LIB_40__::func_532(uParam0, &Param1, &uParam2, &uParam5, &uParam8, &iParam9, &uParam10, &iVar0, 0, 0.033333335f, 0, 0.1f, 0);
		if (iVar0 > 0)
		{
			return Param1;
		}
		iVar1++;
	}
	return Param1;
}

struct<16> func_592(bool bParam0, bool bParam1, bool bParam2)//Position - 0x36DE7
{
	struct<16> Var0;
	StringCopy(&Var0, "facials@", 64);
	if (bParam0)
	{
		if (__LIB_0__::func_216(PLAYER::PLAYER_PED_ID()) == 0)
		{
			StringConCat(&Var0, "p_m_zero", 64);
		}
		else if (__LIB_0__::func_216(PLAYER::PLAYER_PED_ID()) == 2)
		{
			StringConCat(&Var0, "p_m_two", 64);
		}
	}
	else if (bParam2)
	{
		StringConCat(&Var0, "gen_female", 64);
	}
	else
	{
		StringConCat(&Var0, "gen_male", 64);
	}
	if (bParam1)
	{
		StringConCat(&Var0, "@variations@happy", 64);
	}
	else
	{
		StringConCat(&Var0, "@base", 64);
	}
	return Var0;
}

void func_593(var uParam0, bool bParam1, bool bParam2, int iParam3)//Position - 0x3B88C
{
	char[] cVar0[8];
	cVar0 = __LIB_1__::func_295(bParam1, "CUC_STOP_METER", "CUC_BEGIN_SERVE");
	__LIB_1__::func_214(&(uParam0->f_1), 0, 0, 0, 0);
	__LIB_0__::func_990(&(uParam0->f_1), cVar0, 2, 223, 0, 1, 0);
	if (bParam2)
	{
		__LIB_0__::func_990(&(uParam0->f_1), "CUC_CAM", 2, 236, 1, 1, 0);
		__LIB_0__::func_990(&(uParam0->f_1), "CUC_QUIT", 2, 235, 1, 1, 0);
		if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
		{
			__LIB_0__::func_990(&(uParam0->f_1), "CUC_AIM_KM", 0, 239, 1, 1, 0);
			__LIB_0__::func_990(&(uParam0->f_1), "CUC_MOVE_KM", 0, 218, 1, 1, 0);
			__LIB_0__::func_990(&(uParam0->f_1), "TEN_SB_PLAIN", 2, 227, 1, 1, 0);
		}
		else
		{
			__LIB_2__::func_492(&(uParam0->f_1), "CUC_MOVEAIM", 0, 20, 1, 0);
			__LIB_0__::func_990(&(uParam0->f_1), "TEN_SB_PLAIN", 2, 227, 1, 1, 0);
		}
	}
	else
	{
		__LIB_0__::func_990(&(uParam0->f_1), "CUC_QUIT", 2, 235, 1, 1, 0);
		if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
		{
			__LIB_0__::func_990(&(uParam0->f_1), "CUC_AIM_KM", 0, 239, 1, 1, 0);
			__LIB_0__::func_990(&(uParam0->f_1), "CUC_MOVE_KM", 0, 218, 1, 1, 0);
		}
		else
		{
			__LIB_2__::func_492(&(uParam0->f_1), "CUC_MOVEAIM", 0, 20, 1, 0);
		}
	}
	__LIB_1__::func_213(&(uParam0->f_1), 1);
}

bool func_594(var uParam0)//Position - 0x5C351
{
	return __LIB_0__::func_703(uParam0->f_137, 4);
}

void func_595(var uParam0)//Position - 0x5CA88
{
	if (__LIB_0__::func_703(uParam0->f_137, 4194304))
	{
		HUD::SET_WARNING_MESSAGE_WITH_HEADER("TENNIS_QUIT", "FAR_FROM_COURT", 0, 0, false, -1, 0, 0, true, 0);
	}
	else
	{
		HUD::SET_WARNING_MESSAGE_WITH_HEADER("TENNIS_QUIT", "TENNIS_Q_MSG", 36, 0, false, -1, 0, 0, true, 0);
	}
}

void func_596()//Position - 0xAA341
{
	__LIB_0__::func_734(1, 0);
	__LIB_0__::func_210();
}

int func_597(var uParam0, int iParam1, var uParam2, int iParam3)//Position - 0x6A7F
{
	if (iParam3 < 8)
	{
		return 0;
	}
	if (__LIB_40__::func_445(uParam0, 1))
	{
		return 0;
	}
	if (iParam1 >= 2)
	{
		return 0;
	}
	if (__LIB_0__::func_703(uParam2, 4194304))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_247))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_ATTACHED(uParam0->f_247))
	{
		return 0;
	}
	if (!__LIB_40__::func_511(&(uParam0->f_247), &(uParam0->f_189), &(uParam0->f_1658), &(uParam0->f_1661)))
	{
		if (!__LIB_40__::func_464(&(uParam0->f_247), 16))
		{
			__LIB_40__::func_485(&(uParam0->f_247), 16);
		}
		return 0;
	}
	if (__LIB_40__::func_464(&(uParam0->f_247), 2))
	{
		return 0;
	}
	if (__LIB_40__::func_464(&(uParam0->f_247), 4))
	{
		return 0;
	}
	return 1;
}

void func_598(var uParam0, var uParam1)//Position - 0x379C8
{
	struct<3> Var0;
	float fVar1;
	if (uParam0->f_31 != 4)
	{
		if (!__LIB_40__::func_480(&(uParam0->f_4), 256) && !__LIB_40__::func_480(&(uParam0->f_4), 16))
		{
			if (__LIB_10__::func_197(uParam0) == 75)
			{
				if (((PAD::IS_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 223 /*INPUT_SCRIPT_RDOWN*/) || PAD::IS_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 224 /*INPUT_SCRIPT_RLEFT*/)) || PAD::IS_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 225 /*INPUT_SCRIPT_RRIGHT*/)) || PAD::IS_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 222 /*INPUT_SCRIPT_RUP*/))
				{
					Var0 = { __LIB_7__::func_147(uParam1) - uParam0->f_37 };
					fVar1 = __LIB_0__::func_158(uParam0->f_43, Var0);
					if (fVar1 >= 0f)
					{
						__LIB_40__::func_543(uParam0, 13);
					}
					else
					{
						__LIB_40__::func_543(uParam0, 1);
					}
					__LIB_40__::func_420(uParam0, 0);
					__LIB_40__::func_494(uParam0, 65536);
				}
			}
		}
	}
}

void func_599(var uParam0, struct<3> Param1)//Position - 0x3883F
{
	struct<3> Var0;
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_247))
	{
		if (uParam0->f_1657 != 1 && !__LIB_40__::func_460(&(uParam0->f_247)))
		{
			__LIB_40__::func_546(&(uParam0->f_247));
			__LIB_40__::func_536(&(uParam0->f_247));
		}
		uParam0->f_247.f_10 = { Param1 };
		Var0 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_247, true) };
		if (Var0.f_2 < uParam0->f_189.f_29.f_2)
		{
			Var0.f_2 = uParam0->f_189.f_29.f_2;
		}
		__LIB_36__::func_741(&(uParam0->f_247), Var0);
		uParam0->f_247.f_16 = { __LIB_7__::func_147(&(uParam0->f_247)) };
		__LIB_1__::func_273(&(uParam0->f_247), MISC::GET_FRAME_COUNT() + 5);
		__LIB_40__::func_509(&(uParam0->f_247));
		__LIB_40__::func_476(&(uParam0->f_247), 1);
		__LIB_4__::func_896(&(uParam0->f_247), __LIB_40__::func_357(uParam0));
		__LIB_40__::func_405(uParam0->f_247, 1);
	}
	__LIB_40__::func_486(&(uParam0->f_247), 4);
	__LIB_40__::func_486(&(uParam0->f_247), 16);
}

Vector3 func_600(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4)//Position - 0x38B3F
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var3;
	struct<3> Var4;
	float fVar5;
	struct<3> Var6;
	struct<3> Var7;
	struct<3> Var8;
	struct<3> Var9;
	struct<3> Var10;
	struct<3> Var11;
	bool bVar12;
	float fVar13;
	float fVar14;
	float fVar15;
	float fVar16;
	float fVar17;
	int iVar18;
	int iVar19;
	iVar0 = __LIB_0__::func_138(uParam0->f_1 == 0, 3, 1);
	iVar1 = __LIB_0__::func_138(uParam0->f_1 == 0, 2, 0);
	iVar2 = (1 - iParam4);
	if (uParam0->f_4.f_20 == 0 || __LIB_40__::func_464(&(uParam1->f_247), 64))
	{
		Var4 = { FtoV(MISC::GET_RANDOM_FLOAT_IN_RANGE(-1f, 1f)) * uParam0->f_43 };
		Var3 = { *uParam2 + Var4 - uParam0->f_37 };
		if (__LIB_40__::func_464(&(uParam1->f_247), 64))
		{
			__LIB_40__::func_486(&(uParam1->f_247), 64);
		}
	}
	else if (uParam0->f_4.f_20 == 1)
	{
		fVar5 = MISC::GET_RANDOM_FLOAT_IN_RANGE(-0.15f, 1.15f);
		Var8 = { uParam1->f_189.f_3[iVar1 /*3*/] - uParam1->f_189.f_3[iVar0 /*3*/] * Vector(0.5f, 0.5f, 0.5f) };
		if (SYSTEM::VDIST2(*uParam3, uParam1->f_189.f_3[iVar0 /*3*/]) > SYSTEM::VDIST2(*uParam3, uParam1->f_189.f_3[iVar1 /*3*/]))
		{
			Var6 = { uParam1->f_189.f_3[iVar0 /*3*/] };
			Var7 = { Var6 + Var8 };
		}
		else
		{
			Var6 = { uParam1->f_189.f_3[iVar0 /*3*/] + Var8 };
			Var7 = { uParam1->f_189.f_3[iVar1 /*3*/] };
		}
		Var9 = { __LIB_1__::func_576(Var6, Var7, fVar5) };
		Var3 = { Var9 - __LIB_7__::func_147(&(uParam1->f_247)) };
	}
	else if (uParam0->f_4.f_20 == 2)
	{
		bVar12 = false;
		fVar13 = SYSTEM::VDIST2(uParam1->f_189.f_3[0 /*3*/], *uParam3);
		fVar14 = SYSTEM::VDIST2(uParam1->f_189.f_3[1 /*3*/], *uParam3);
		fVar15 = MISC::ABSF((fVar13 - fVar14));
		fVar16 = __LIB_0__::func_504(0.75f, 0.05f, (fVar15 / 90f));
		fVar17 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f);
		switch (__LIB_40__::func_386(uParam0))
		{
			case 0:
				Var11 = { uParam0->f_40 * Vector(-1f, -1f, -1f) };
				break;
			case 1:
				Var11 = { uParam0->f_40 * Vector(-2f, -2f, -2f) };
				break;
			case 3:
				Var11 = { uParam0->f_40 * Vector(0f, 0f, 0f) };
				break;
		}
		if (fVar17 < fVar16 && __LIB_40__::func_480(&(uParam0->f_4), 128))
		{
			bVar12 = true;
			__LIB_40__::func_409(&iVar18, &iVar19, &iVar19, &iVar19, 1, 1);
			if (iVar18 > 15)
			{
				iVar19 = __LIB_0__::func_138(uParam0->f_1 == 0, 2, 0);
				Var10 = { uParam1->f_189.f_3[iVar19 /*3*/] + Var11 };
			}
			else if (iVar18 < -15)
			{
				iVar19 = __LIB_0__::func_138(uParam0->f_1 == 0, 3, 1);
				Var10 = { uParam1->f_189.f_3[iVar19 /*3*/] + Var11 };
			}
			else
			{
				bVar12 = false;
			}
		}
		if (fVar13 > fVar14 && !bVar12)
		{
			if (uParam0->f_1 == 0)
			{
				fVar13 = SYSTEM::VDIST2(uParam1->f_189.f_3[0 /*3*/], uParam0->f_37);
				fVar14 = SYSTEM::VDIST2(uParam1->f_189.f_3[1 /*3*/], uParam0->f_37);
				if (__LIB_40__::func_517(iVar2, uParam1, 0, 0))
				{
					Var10 = { uParam1->f_189.f_3[3 /*3*/] + Var11 };
				}
				else if (fVar13 < fVar14)
				{
					Var10 = { uParam1->f_189.f_3[3 /*3*/] + uParam0->f_43 * Vector(1.5f, 1.5f, 1.5f) + Var11 };
				}
				else
				{
					Var10 = { uParam1->f_189.f_3[3 /*3*/] + Var11 };
				}
			}
			else
			{
				fVar13 = SYSTEM::VDIST2(uParam1->f_189.f_3[3 /*3*/], uParam0->f_37);
				fVar14 = SYSTEM::VDIST2(uParam1->f_189.f_3[2 /*3*/], uParam0->f_37);
				if (__LIB_40__::func_517(iVar2, uParam1, 0, 0))
				{
					Var10 = { uParam1->f_189.f_3[0 /*3*/] + Var11 };
				}
				else if (fVar13 < fVar14)
				{
					Var10 = { uParam1->f_189.f_3[0 /*3*/] - uParam0->f_43 * Vector(1.5f, 1.5f, 1.5f) + Var11 };
				}
				else
				{
					Var10 = { uParam1->f_189.f_3[0 /*3*/] + Var11 };
				}
			}
		}
		else if (!bVar12)
		{
			if (uParam0->f_1 == 0)
			{
				fVar13 = SYSTEM::VDIST2(uParam1->f_189.f_3[1 /*3*/], uParam0->f_37);
				fVar14 = SYSTEM::VDIST2(uParam1->f_189.f_3[0 /*3*/], uParam0->f_37);
				if (__LIB_40__::func_517(iVar2, uParam1, 0, 0))
				{
					Var10 = { uParam1->f_189.f_3[2 /*3*/] + Var11 };
				}
				else if (fVar13 < fVar14)
				{
					Var10 = { uParam1->f_189.f_3[2 /*3*/] - uParam0->f_43 * Vector(1.5f, 1.5f, 1.5f) + Var11 };
				}
				else
				{
					Var10 = { uParam1->f_189.f_3[2 /*3*/] + Var11 };
				}
			}
			else
			{
				fVar13 = SYSTEM::VDIST2(uParam1->f_189.f_3[2 /*3*/], uParam0->f_37);
				fVar14 = SYSTEM::VDIST2(uParam1->f_189.f_3[3 /*3*/], uParam0->f_37);
				if (__LIB_40__::func_517(iVar2, uParam1, 0, 0))
				{
					Var10 = { uParam1->f_189.f_3[1 /*3*/] + Var11 };
				}
				else if (fVar13 < fVar14)
				{
					Var10 = { uParam1->f_189.f_3[1 /*3*/] + uParam0->f_43 * Vector(1.5f, 1.5f, 1.5f) + Var11 };
				}
				else
				{
					Var10 = { uParam1->f_189.f_3[1 /*3*/] + Var11 };
				}
			}
		}
		Var3 = { Var10 - __LIB_7__::func_147(&(uParam1->f_247)) };
	}
	else
	{
		Var3 = { *uParam2 - uParam0->f_37 };
	}
	return Var3;
}

void func_601(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, int iParam7)//Position - 0x3A885
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	uParam1->f_247.f_33 = (uParam1->f_247.f_33 - MISC::GET_FRAME_TIME());
	while (uParam1->f_247.f_33 <= 0f)
	{
		uParam1->f_247.f_33 = (uParam1->f_247.f_33 + 0.033333335f);
		iVar0 = 0;
		while (iVar0 <= 22)
		{
			uParam1->f_1583[iVar0 /*3*/] = { uParam1->f_1583[iVar0 + 1 /*3*/] };
			iVar0++;
		}
		*uParam2 = { uParam1->f_1583[iVar0 /*3*/] };
		__LIB_40__::func_438(uParam0, uParam3, uParam4, uParam5, uParam6, iParam7);
		iVar1 = __LIB_40__::func_532(&(uParam1->f_189), uParam2, uParam3, &(uParam1->f_1658), uParam4, uParam5, uParam6, iParam7, 0, 0.033333335f, 0, 0.1f, 0);
		if (iVar1 == 1)
		{
			if (__LIB_40__::func_480(&(uParam0->f_4), 32) && __LIB_40__::func_434(uParam0) == 0f)
			{
				__LIB_40__::func_432(uParam0);
				__LIB_40__::func_437(uParam0, (SYSTEM::TO_FLOAT(iVar0) * MISC::GET_FRAME_TIME()));
			}
		}
		if (!__LIB_0__::func_86(*uParam2))
		{
			uParam1->f_1583[iVar0 /*3*/] = { *uParam2 };
		}
		else
		{
			uParam1->f_1583[iVar0 /*3*/] = { __LIB_7__::func_147(&(uParam1->f_247)) };
		}
		__LIB_40__::func_436(uParam0, *uParam3, *uParam4, *uParam5, *uParam6, *iParam7);
	}
}

void func_602(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, int iParam7)//Position - 0x3AA17
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 24)
	{
		iVar1 = __LIB_40__::func_532(&(uParam1->f_189), uParam2, uParam3, &(uParam1->f_1658), uParam4, uParam5, uParam6, iParam7, 0, 0.033333335f, 0, 0.1f, 0);
		if (iVar1 == 1)
		{
			if (__LIB_40__::func_480(&(uParam0->f_4), 32) && __LIB_40__::func_434(uParam0) == 0f)
			{
				__LIB_40__::func_432(uParam0);
				__LIB_40__::func_437(uParam0, (SYSTEM::TO_FLOAT(iVar0) * MISC::GET_FRAME_TIME()));
			}
		}
		if (!__LIB_0__::func_86(*uParam2))
		{
			uParam1->f_1583[iVar0 /*3*/] = { *uParam2 };
		}
		else
		{
			uParam1->f_1583[iVar0 /*3*/] = { __LIB_7__::func_147(&(uParam1->f_247)) };
		}
		iVar0++;
	}
	__LIB_40__::func_436(uParam0, *uParam3, *uParam4, *uParam5, *uParam6, *iParam7);
	if (!__LIB_40__::func_475(uParam0, 32768))
	{
		__LIB_40__::func_494(uParam0, 32768);
		uParam1->f_247.f_33 = 0.033333335f;
	}
}

int func_603(var uParam0, bool bParam1)//Position - 0x3AAFB
{
	if (PAD::HAVE_CONTROLS_CHANGED(0 /*PLAYER_CONTROL*/))
	{
		return 1;
	}
	if (bParam1 && !__LIB_0__::func_703(uParam0->f_137, 268435456))
	{
		__LIB_1__::func_330(&(uParam0->f_137), 268435456);
		return 1;
	}
	else if (!bParam1 && __LIB_0__::func_703(uParam0->f_137, 268435456))
	{
		__LIB_2__::func_712(&(uParam0->f_137), 268435456);
		return 1;
	}
	return 0;
}

void func_604(var uParam0, bool bParam1, bool bParam2, int iParam3)//Position - 0x3B686
{
	char[] cVar0[8];
	cVar0 = __LIB_1__::func_295(bParam1, "CUC_LOB", "CUC_DROP");
	__LIB_1__::func_214(&(uParam0->f_1), 0, 0, 0, 1);
	__LIB_0__::func_990(&(uParam0->f_1), "CUC_BASE_SWING", 2, 223, 0, 1, 0);
	__LIB_0__::func_990(&(uParam0->f_1), "CUC_TOPSPIN", 2, 225, 0, 1, 0);
	__LIB_0__::func_990(&(uParam0->f_1), cVar0, 2, 222, 1, 1, 0);
	__LIB_0__::func_990(&(uParam0->f_1), "CUC_BACKSPIN", 2, 224, 1, 1, 0);
	if (bParam2)
	{
		__LIB_0__::func_990(&(uParam0->f_1), "CUC_CAM", 2, 236, 1, 1, 0);
		__LIB_0__::func_990(&(uParam0->f_1), "CUC_QUIT", 2, 235, 1, 1, 0);
		__LIB_2__::func_492(&(uParam0->f_1), "CUC_MOVEAIM", 0, 20, 1, 0);
		__LIB_0__::func_990(&(uParam0->f_1), "TEN_SB_PLAIN", 2, 227, 1, 1, 0);
	}
	else
	{
		__LIB_0__::func_990(&(uParam0->f_1), "CUC_QUIT", 2, 235, 1, 1, 0);
		__LIB_2__::func_492(&(uParam0->f_1), "CUC_MOVEAIM", 0, 20, 1, 0);
	}
	__LIB_1__::func_213(&(uParam0->f_1), 1);
}

void func_605(int iParam0, struct<3> Param1, char[24] cParam2)//Position - 0x3E952
{
	if (iParam0 == 0)
	{
		iParam0 = 1;
	}
	__LIB_1__::func_245();
	__LIB_1__::func_244();
	__LIB_1__::func_243();
	__LIB_1__::func_242();
	__LIB_1__::func_241();
	__LIB_1__::func_240();
	Global_1922955.f_9 = iParam0;
	switch (Global_1922955.f_9)
	{
		case 1:
			Global_1922955 = 0;
			Global_1922955.f_23 = { 0f, 0f, 0f };
			MISC::CLEAR_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_833), 1);
			__LIB_2__::func_426();
			break;
		case 2:
			Global_1922955 = 1;
			Global_1922955.f_23 = { Param1 };
			Global_1922955.f_17 = { cParam2 };
			MISC::CLEAR_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_833), 1);
			break;
		case 3:
			if (Global_1853348[PLAYER::PLAYER_ID() /*834*/] == 0 || Global_1853348[PLAYER::PLAYER_ID() /*834*/] == 1)
			{
				__LIB_1__::func_237(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_96.f_28);
			}
			__LIB_1__::func_236();
			Global_1922955 = 1;
			Global_1922955.f_23 = { Param1 };
			if (__LIB_1__::func_235())
			{
				Global_1922955.f_17 = { cParam2 };
			}
			MISC::CLEAR_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_833), 1);
			break;
		case 4:
			__LIB_1__::func_234();
			__LIB_1__::func_236();
			Global_1922955 = 1;
			if (__LIB_0__::func_971(PLAYER::PLAYER_ID()) || __LIB_0__::func_970(PLAYER::PLAYER_ID()))
			{
				__LIB_1__::func_233(1);
			}
			if ((__LIB_1__::func_209() || __LIB_1__::func_232()) && __LIB_1__::func_231())
			{
				Global_1922955.f_17 = { __LIB_1__::func_230() };
				cParam2 = { Global_1922955.f_17 };
				Global_1922955.f_23 = { __LIB_1__::func_229() };
			}
			else if (__LIB_1__::func_209() || __LIB_1__::func_232())
			{
				if (__LIB_1__::func_228())
				{
					Global_1922955.f_23 = { __LIB_1__::func_227() };
				}
				else
				{
					Global_1922955.f_23 = { Param1 };
				}
			}
			else
			{
				Global_1922955.f_23 = { Param1 };
			}
			MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_833), 1);
			break;
		case 5:
			__LIB_1__::func_234();
			__LIB_1__::func_226();
			__LIB_1__::func_236();
			if (__LIB_0__::func_971(PLAYER::PLAYER_ID()) || __LIB_0__::func_970(PLAYER::PLAYER_ID()))
			{
				__LIB_1__::func_233(1);
			}
			Global_1922955 = 1;
			Global_1922955.f_23 = { Param1 };
			MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_833), 1);
			break;
		case 8:
			Global_1922955 = 0;
			Global_1922955.f_23 = { Param1 };
			Global_1922955.f_17 = { cParam2 };
			MISC::CLEAR_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_833), 1);
			break;
		case 9:
			__LIB_1__::func_236();
			Global_1922955 = 1;
			Global_1922955.f_23 = { Param1 };
			MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_833), 1);
			break;
		case 10:
			Global_1922955 = 0;
			Global_1922955.f_23 = { 0f, 0f, 0f };
			MISC::CLEAR_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_833), 1);
			break;
	}
	__LIB_1__::func_225();
	__LIB_1__::func_224();
	__LIB_2__::func_184(Global_1922955.f_9);
	Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_221 = { Global_1922955.f_23 };
	Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_224 = { cParam2 };
}

void func_606(var uParam0, int iParam1)//Position - 0x5DF58
{
	struct<3> Var0;
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_247))
	{
		if (iParam1 || !ENTITY::IS_ENTITY_VISIBLE(uParam0->f_247))
		{
			OBJECT::DELETE_OBJECT(&(uParam0->f_247));
		}
		else
		{
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(uParam0->f_247));
		}
	}
	Var0 = { uParam0->f_189.f_29 };
	uParam0->f_247 = OBJECT::CREATE_OBJECT(joaat("prop_tennis_ball"), Var0, false, false, false);
	OBJECT::SET_ENTITY_FLAG_RENDER_SMALL_SHADOW(uParam0->f_247, true);
	ENTITY::SET_ENTITY_RECORDS_COLLISIONS(uParam0->f_247, true);
	__LIB_40__::func_405(uParam0->f_247, 0);
	ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_247, false);
	__LIB_36__::func_741(&(uParam0->f_247), uParam0->f_189.f_29);
	if (__LIB_40__::func_460(&(uParam0->f_247)))
	{
		__LIB_40__::func_546(&(uParam0->f_247));
	}
}

void func_607(var uParam0, var uParam1)//Position - 0x9F4D4
{
	struct<3> Var0;
	if (!__LIB_40__::func_475(uParam0, 2048) && __LIB_40__::func_514(uParam0->f_37, uParam1))
	{
		if (TASK::GET_SCRIPT_TASK_STATUS(__LIB_38__::func_713(uParam0), joaat("SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(__LIB_38__::func_713(uParam0), joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) != 1)
		{
			Var0 = { uParam0->f_37 - uParam1->f_29 * Vector(0.93f, 0.93f, 0.93f) };
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(__LIB_38__::func_713(uParam0), uParam1->f_29 + Var0, 2f, 20000, 0.25f, 0, 40000f);
			__LIB_40__::func_494(uParam0, 2048);
			__LIB_0__::func_151("FAR_FROM_COURT", -1);
		}
	}
	else if (__LIB_40__::func_475(uParam0, 2048) && TASK::GET_SCRIPT_TASK_STATUS(__LIB_38__::func_713(uParam0), joaat("SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD")) != 1)
	{
		__LIB_40__::func_484(uParam0, 2048);
	}
}

void func_608(var uParam0, var uParam1, var uParam2)//Position - 0x37497
{
	float fVar0;
	struct<3> Var1;
	fVar0 = *uParam1;
	Var1 = { __LIB_40__::func_499(SYSTEM::TO_FLOAT(*uParam2), SYSTEM::TO_FLOAT(uParam2->f_1), fVar0, &(uParam1->f_40), &(uParam1->f_43)) };
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_247))
	{
		if (uParam0->f_1657 != 1 && !__LIB_40__::func_460(&(uParam0->f_247)))
		{
			__LIB_40__::func_546(&(uParam0->f_247));
			__LIB_40__::func_536(&(uParam0->f_247));
		}
		uParam0->f_247.f_10 = { Var1 };
		__LIB_36__::func_741(&(uParam0->f_247), ENTITY::GET_ENTITY_COORDS(uParam0->f_247, true));
		uParam0->f_247.f_16 = { __LIB_7__::func_147(&(uParam0->f_247)) };
		__LIB_1__::func_273(&(uParam0->f_247), MISC::GET_FRAME_COUNT() + 5);
		__LIB_40__::func_509(&(uParam0->f_247));
		__LIB_40__::func_476(&(uParam0->f_247), 1);
		__LIB_40__::func_405(uParam0->f_247, 1);
	}
	__LIB_40__::func_486(&(uParam0->f_247), 4);
}

void func_609(var uParam0, int iParam1, int iParam2, var uParam3, var uParam4)//Position - 0x3C277
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	float fVar3;
	struct<3> Var4;
	struct<3> Var5;
	struct<3> Var6;
	struct<3> Var7;
	float fVar8;
	struct<3> Var9;
	struct<3> Var10;
	float fVar11;
	float fVar12;
	bool bVar13;
	bool bVar14;
	Var1 = { __LIB_0__::func_404(&(uParam0->f_4)) };
	if (__LIB_40__::func_455(uParam3) > 0.5f && !__LIB_40__::func_480(&(uParam0->f_4), 128))
	{
		__LIB_40__::func_495(&(uParam0->f_4), 128);
	}
	else if (__LIB_40__::func_480(&(uParam0->f_4), 128))
	{
		__LIB_40__::func_501(&(uParam0->f_4), 128);
	}
	switch (__LIB_1__::func_44(&(uParam0->f_4)))
	{
		case 0:
			*iParam1 = 0;
			*iParam2 = 0;
			if (__LIB_11__::func_576(&(uParam0->f_4)) == 2)
			{
				__LIB_40__::func_544(uParam0, uParam3);
			}
			break;
		case 5:
			if (__LIB_10__::func_197(uParam0) == 75)
			{
				Var2 = { 0.1f, 0.1f, 0.5f };
				if (__LIB_40__::func_528(uParam0, &Var1, &Var2))
				{
					TASK::TASK_GO_STRAIGHT_TO_COORD(__LIB_38__::func_713(uParam0), Var1, 2f, -1, 40000f, 0.5f);
					__LIB_1__::func_301(&(uParam0->f_4), Var1);
					__LIB_40__::func_495(&(uParam0->f_4), 4);
					Var0 = { Var1 - uParam0->f_37 };
					Var0 = { Var0 / FtoV(SYSTEM::VMAG(Var0)) };
					*iParam1 = SYSTEM::ROUND((Var0.f_0 * 128f));
					*iParam2 = SYSTEM::ROUND((Var0.f_1 * 128f));
				}
				else if ((ENTITY::IS_ENTITY_AT_COORD(uParam0->f_32, __LIB_0__::func_404(&(uParam0->f_4)), Var2, false, true, 0) || TASK::GET_SCRIPT_TASK_STATUS(__LIB_38__::func_713(uParam0), joaat("SCRIPT_TASK_GO_STRAIGHT_TO_COORD")) == 7) && !__LIB_40__::func_480(&(uParam0->f_4), 256))
				{
					__LIB_6__::func_205(&(uParam0->f_4), 0);
					__LIB_40__::func_501(&(uParam0->f_4), 4);
				}
				else if (uParam0->f_4.f_20 == 0 && !__LIB_40__::func_480(&(uParam0->f_4), 256))
				{
					__LIB_6__::func_205(&(uParam0->f_4), 0);
					__LIB_40__::func_501(&(uParam0->f_4), 4);
				}
				if (__LIB_11__::func_576(&(uParam0->f_4)) == 2)
				{
					__LIB_40__::func_544(uParam0, uParam3);
				}
			}
			break;
		case 6:
			if (__LIB_36__::func_748(&(uParam0->f_4)) <= 0f)
			{
				__LIB_40__::func_501(&(uParam0->f_4), 4);
				__LIB_6__::func_205(&(uParam0->f_4), 1);
			}
			__LIB_40__::func_450(&(uParam0->f_4));
			break;
		case 1:
			if (__LIB_10__::func_197(uParam0) == 75)
			{
				MISC::GET_LINE_PLANE_INTERSECTION(__LIB_7__::func_147(uParam4), __LIB_7__::func_147(uParam4) + uParam4->f_10, uParam0->f_37, uParam0->f_40, &fVar3);
				Var7 = { __LIB_7__::func_147(uParam4) - __LIB_7__::func_147(uParam4) + uParam4->f_10 * Vector(fVar3, fVar3, fVar3) };
				Var6 = { __LIB_7__::func_147(uParam4) + Var7 };
				Var4 = { Var1 - uParam0->f_37 };
				fVar8 = __LIB_0__::func_158(Var4, uParam0->f_40);
				if (!__LIB_40__::func_480(&(uParam0->f_4), 4))
				{
					if (__LIB_40__::func_386(uParam3) != 2)
					{
						if (fVar8 < 0f)
						{
							Var9 = { uParam0->f_37 - Var6 };
							Var10 = { Var6 + Var9 * Vector(0.15f, 0.15f, 0.15f) };
							__LIB_40__::func_396(&(uParam0->f_4), Var10);
							__LIB_1__::func_301(&(uParam0->f_4), Var10);
							fVar8 = 0f;
						}
					}
				}
				if (__LIB_40__::func_386(uParam3) != 2)
				{
					Var5 = { Var6 - uParam0->f_37 };
					fVar11 = __LIB_0__::func_158(Var4, uParam0->f_43);
					fVar12 = __LIB_0__::func_158(Var5, uParam0->f_43);
					bVar13 = fVar11 > 0f;
					bVar14 = fVar12 > 0f;
					if ((SYSTEM::VDIST2(uParam0->f_37, Var1) < 50f && bVar13 != bVar14) && fVar8 < 0f)
					{
						TASK::CLEAR_PED_TASKS(__LIB_38__::func_713(uParam0));
						__LIB_40__::func_495(&(uParam0->f_4), 4);
					}
				}
				if (((!PED::IS_PED_INJURED(__LIB_38__::func_713(uParam0)) && !SYSTEM::VDIST2(uParam0->f_37, Var1) <= (0f * 0f)) && !__LIB_40__::func_480(&(uParam0->f_4), 4)) && !__LIB_40__::func_475(uParam0, 1024))
				{
					TASK::TASK_GO_STRAIGHT_TO_COORD(uParam0->f_32, __LIB_0__::func_404(&(uParam0->f_4)), 2f, -1, 40000f, 0.5f);
					Var1 = { __LIB_0__::func_404(&(uParam0->f_4)) };
					__LIB_1__::func_301(&(uParam0->f_4), Var1);
					__LIB_40__::func_495(&(uParam0->f_4), 4);
					Var0 = { __LIB_0__::func_404(&(uParam0->f_4)) - uParam0->f_37 };
					Var0 = { Var0 / FtoV(SYSTEM::VMAG(Var0)) };
					*iParam1 = SYSTEM::ROUND((Var0.f_0 * 128f));
					*iParam2 = SYSTEM::ROUND((Var0.f_1 * 128f));
				}
				else if (SYSTEM::VDIST2(uParam0->f_37, Var1) <= (0f * 0f) || TASK::GET_SCRIPT_TASK_STATUS(__LIB_38__::func_713(uParam0), joaat("SCRIPT_TASK_GO_STRAIGHT_TO_COORD")) == 7)
				{
					__LIB_6__::func_205(&(uParam0->f_4), 2);
					__LIB_40__::func_501(&(uParam0->f_4), 4);
				}
			}
			break;
		case 2:
			*iParam1 = 0;
			*iParam2 = 0;
			break;
	}
}

void func_610(int iParam0, var uParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, bool bParam15, var uParam16, int iParam17, int iParam18, int iParam19)//Position - 0x5EDF1
{
	char cVar0[32];
	struct<8> Var1;
	int iVar2;
	int iVar3;
	int iVar4;
	struct<8> Var5;
	int iVar6;
	bool bVar7;
	int iVar8;
	var uVar9;
	struct<35> Var10;
	bool bVar11;
	struct<47> Var12;
	struct<25> Var13;
	struct<6> Var14;
	struct<6> Var15;
	struct<33> Var16;
	struct<6> Var17;
	if (iParam17 == 0)
	{
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	switch (iParam0)
	{
		case 6:
		case 8:
		case 1:
		case 3:
		case 0:
		case 2:
			MemCopy(&cVar0, {Global_4718592.f_116525}, 8);
			MemCopy(&Var1, {Global_4718592.f_116811}, 8);
			break;
		case 32:
		case 25:
		case 19:
		case 31:
			StringCopy(&cVar0, "ROCKSTAR_AMBIANT", 32);
			__LIB_1__::func_204(&Var1, iParam0, iParam4);
			break;
		case 11:
		case 13:
		case 12:
		case 15:
		case 14:
		case 122:
		case 5:
		case 148:
			StringCopy(&cVar0, "ROCKSTAR_MINIGAME", 32);
			__LIB_1__::func_203(&Var1, iParam0, iParam4);
			break;
	}
	iVar2 = 0;
	iVar3 = 0;
	if (iParam0 == 1)
	{
		iVar2 = iParam19;
	}
	else if (iParam0 == 2)
	{
		if (__LIB_1__::func_202())
		{
			iParam0 += 100;
		}
		iVar3 = Global_4456449.f_34;
		if (__LIB_0__::func_361(PLAYER::PLAYER_ID(), 0) || __LIB_1__::func_201(PLAYER::PLAYER_ID()))
		{
			iParam11 = 0;
		}
		if (iParam11 < 0)
		{
			iParam11 = 32;
		}
	}
	else if (iParam0 == 0)
	{
		if (__LIB_1__::func_202())
		{
			iParam0 += 100;
		}
	}
	else if (iParam0 == 3)
	{
		if (!__LIB_1__::func_345())
		{
			iParam0 += 100;
		}
	}
	if (bParam3)
	{
		if (__LIB_1__::func_200() && __LIB_1__::func_199())
		{
			return;
		}
		Global_1057161 = NETWORK::GET_NETWORK_TIME();
		__LIB_1__::func_198();
		Global_1837284 = 0;
		if (iParam0 == 0 || iParam0 == 1)
		{
			Global_1837298 = 1;
		}
		Global_1057153 = { Var1 };
		SOCIALCLUB::SC_PRESENCE_ATTR_SET_STRING(1603298962, &(Global_1880037[PLAYER::PLAYER_ID() /*16*/]));
		SOCIALCLUB::SC_PRESENCE_ATTR_SET_INT(591312727, Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_36.f_16);
		SOCIALCLUB::SC_PRESENCE_ATTR_SET_STRING(-1404245366, &Global_1057153);
		SOCIALCLUB::SC_PRESENCE_ATTR_SET_INT(2034665250, PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()));
		if (__LIB_1__::func_675())
		{
			iParam0 = 222;
		}
		else if (__LIB_2__::func_438())
		{
			iParam0 = 228;
		}
		else if (__LIB_1__::func_195(PLAYER::PLAYER_ID()))
		{
			iParam0 = 7;
		}
		else if (__LIB_1__::func_194(PLAYER::PLAYER_ID()))
		{
			iParam0 = 4;
		}
		else if (__LIB_1__::func_193(PLAYER::PLAYER_ID()))
		{
			iParam0 = 165;
		}
		if ((iParam0 == 5 || iParam0 == 6) || iParam0 == 148)
		{
			iVar4 = 17;
		}
		else if (__LIB_1__::func_192() != -1)
		{
			iVar4 = __LIB_1__::func_192();
		}
		Var5.f_0 = iParam0;
		Var5.f_1 = iParam2;
		Var5.f_2 = uParam1;
		Var5.f_3 = Global_1837295;
		Var5.f_4 = Global_1837296;
		Var5.f_5 = uParam16;
		Var5.f_6 = iVar4;
		Var5.f_7 = Global_4718592.f_116524;
		STATS::PLAYSTATS_MATCH_STARTED(&cVar0, &Var1, &Var5);
		__LIB_1__::func_191();
		if (!__LIB_0__::func_936(PLAYER::PLAYER_ID()))
		{
			Global_2715699.f_3475.f_2 = iParam2;
			Global_2715699.f_3475.f_3 = uParam1;
			if (Global_2715699.f_3475 == 0 || Global_2715699.f_3475.f_1 == 0)
			{
				Global_2715699.f_3475 = iParam2;
				Global_2715699.f_3475.f_1 = uParam1;
			}
		}
		else if (Global_2715699.f_3475 == 0 || Global_2715699.f_3475.f_1 == 0)
		{
			Global_2715699.f_3475 = iParam2;
			Global_2715699.f_3475.f_1 = uParam1;
		}
		Global_1057406.f_1 = __LIB_1__::func_190();
		if (Global_1837291)
		{
			iVar6 = Global_1837287;
			if (Global_4718592 == 2)
			{
				if (__LIB_1__::func_189(PLAYER::PLAYER_ID(), 0) || __LIB_36__::func_729())
				{
					Global_1837287 = (Global_1837287 - Global_262145.f_2352 /* Tunable: VEHICLE_RENTAL_PRICE_MODIFIER */);
				}
				else
				{
					bVar7 = true;
					iVar6 = (iVar6 - Global_262145.f_2352 /* Tunable: VEHICLE_RENTAL_PRICE_MODIFIER */);
				}
			}
			if ((((Global_1837287 > 0 && !__LIB_0__::func_80()) && !__LIB_0__::func_361(PLAYER::PLAYER_ID(), 0)) && !__LIB_2__::func_581()) && MONEY::NETWORK_CAN_SPEND_MONEY(Global_1837287, false, false, true, -1, 0))
			{
				if (!bVar7)
				{
					if (Global_1837287 > 0)
					{
						if (__LIB_0__::func_112())
						{
							__LIB_2__::func_604(joaat("SERVICE_SPEND_MATCH_ENTRY_FEE"), Global_1837287, &iVar8, 0, 1, 0);
							Global_4534105[iVar8 /*85*/].f_14.f_26 = { Var1 };
						}
						else
						{
							MONEY::NETWORK_PAY_MATCH_ENTRY_FEE(Global_1837287, &Var1, false, true);
						}
					}
				}
				else
				{
					if (iVar6 > 0)
					{
						if (__LIB_0__::func_112())
						{
							__LIB_2__::func_604(joaat("SERVICE_SPEND_MATCH_ENTRY_FEE"), iVar6, &iVar8, 0, 1, 0);
							Global_4534105[iVar8 /*85*/].f_14.f_26 = { Var1 };
						}
					}
					if (__LIB_0__::func_112())
					{
						__LIB_2__::func_604(joaat("SERVICE_SPEND_RACE_VEHICLE_RENTAL"), Global_262145.f_2352 /* Tunable: VEHICLE_RENTAL_PRICE_MODIFIER */, &iVar8, 0, 1, 0);
						Global_4534105[iVar8 /*85*/].f_14.f_26 = { Var1 };
					}
					else
					{
						MONEY::NETWORK_PAY_MATCH_ENTRY_FEE(Global_1837287, &Var1, false, true);
					}
				}
			}
			Global_1837291 = 0;
		}
		__LIB_1__::func_156();
	}
	else
	{
		if (__LIB_2__::func_434() == 1)
		{
			uVar9 = Global_4521801.f_915;
		}
		else
		{
			uVar9 = __LIB_2__::func_433();
		}
		StringCopy(&Global_1057153, "", 32);
		Var10 = { __LIB_1__::func_892(PLAYER::PLAYER_ID()) };
		if (Var10.f_0 < 0)
		{
			Var10.f_0 = 0;
		}
		iParam12 = iParam12;
		if (__LIB_15__::func_485(0))
		{
			bVar11 = true;
		}
		else if (!__LIB_0__::func_936(PLAYER::PLAYER_ID()))
		{
			Global_1837290++;
			__LIB_1__::func_354(1914, Global_1837290, -1, 1, 0);
		}
		if (__LIB_1__::func_675())
		{
			iParam0 = 222;
		}
		else if (__LIB_2__::func_438())
		{
			iParam0 = 228;
		}
		else if (__LIB_1__::func_195(PLAYER::PLAYER_ID()))
		{
			iParam0 = 7;
		}
		else if (__LIB_1__::func_194(PLAYER::PLAYER_ID()))
		{
			iParam0 = 4;
		}
		else if (__LIB_1__::func_193(PLAYER::PLAYER_ID()))
		{
			iParam0 = 165;
		}
		Var12.f_0 = Global_1837284;
		Var12.f_1 = Global_1837285;
		if (Var12.f_1 < 0)
		{
			Var12.f_1 = 0;
		}
		Var12.f_2 = Global_1837282;
		Var12.f_9 = iParam18;
		Var12.f_3 = (__LIB_1__::func_154(PLAYER::PLAYER_ID()) + MONEY::NETWORK_GET_VC_BANK_BALANCE());
		if ((iParam0 == 5 || iParam0 == 6) || iParam0 == 148)
		{
			Var12.f_4 = 17;
		}
		else if (__LIB_1__::func_192() != -1)
		{
			Var12.f_4 = __LIB_1__::func_192();
		}
		if (Global_1837299 >= 0)
		{
			Var12.f_39 = Global_1837299;
		}
		if (Global_1837300 >= 0)
		{
			Var12.f_38 = Global_1837300;
		}
		if ((((__LIB_1__::func_200() && !__LIB_1__::func_153()) && !bParam15) && Global_2714762.f_669.f_9 != 0) && !__LIB_0__::func_448(0))
		{
			Global_2714762.f_669.f_15 = 1;
			Var13.f_0 = Global_1888862[PLAYER::PLAYER_ID() /*120*/].f_3;
			Var13.f_1 = Global_2714762.f_669.f_10;
			Var13.f_2 = Global_1837284;
			Var13.f_3 = Global_1837285;
			if (Var13.f_3 < 0)
			{
				Var13.f_3 = 0;
			}
			Var13.f_4 = Global_1837282;
			Var13.f_5 = (__LIB_1__::func_154(PLAYER::PLAYER_ID()) + MONEY::NETWORK_GET_VC_BANK_BALANCE());
			Var13.f_6 = Var12.f_4;
			if (__LIB_0__::func_936(PLAYER::PLAYER_ID()))
			{
				Var13.f_21 = Global_2715699.f_3475;
				Var13.f_22 = Global_2715699.f_3475.f_1 + 1;
			}
			else
			{
				Var13.f_7 = Global_2715699.f_3475;
				Var13.f_8 = Global_2715699.f_3475.f_1;
			}
			Var13.f_9 = (__LIB_1__::func_335(PLAYER::PLAYER_ID()) - Global_1837283);
			Var13.f_10 = iParam5;
			Var13.f_11 = iParam6;
			Var13.f_12 = iParam7;
			Var13.f_13 = iParam11;
			Var13.f_14 = Var10.f_0;
			Var13.f_15 = Global_1837286;
			Var13.f_16 = iParam9;
			Var13.f_17 = iParam10;
			Var13.f_18 = (__LIB_1__::func_190() - Global_1057406.f_1);
			if (__LIB_1__::func_152() || __LIB_0__::func_936(PLAYER::PLAYER_ID()))
			{
				Var13.f_19 = MISC::GET_HASH_KEY(&(Global_1048576.f_44));
			}
			Var13.f_20 = bVar11;
			if (Global_1837299 >= 0)
			{
				Var13.f_23 = Global_1837299;
			}
			else if (Global_1837299 == -2)
			{
				Var13.f_23 = 998;
			}
			else
			{
				Var13.f_23 = 999;
			}
			if (Global_1837300 >= 0)
			{
				Var13.f_24 = Global_1837300;
			}
			else if (Global_1837300 == -2)
			{
				Var13.f_24 = 998;
			}
			else
			{
				Var13.f_24 = 999;
			}
			StringCopy(&Var14, "", 24);
			if (__LIB_1__::func_152() || __LIB_0__::func_936(PLAYER::PLAYER_ID()))
			{
				Var14 = { Global_1048576.f_44 };
			}
			STATS::PLAYSTATS_JOB_LTS_ROUND_END(&cVar0, &Var1, &Var13, &Var14);
			return;
		}
		if (!NETWORK::NETWORK_IS_ACTIVITY_SESSION())
		{
			Global_1837293 = NETWORK::NETWORK_SESSION_IS_VISIBLE();
		}
		Var12.f_7 = iVar2;
		Var12.f_8 = bVar11;
		Var12.f_11 = (__LIB_1__::func_335(PLAYER::PLAYER_ID()) - Global_1837283);
		Var12.f_12 = iParam8;
		Var12.f_13 = iParam5;
		Var12.f_14 = iParam6;
		Var12.f_15 = iParam7;
		Var12.f_16 = iParam11;
		Var12.f_17 = Var10.f_0;
		Var12.f_18 = iParam13;
		Var12.f_19 = Global_1837286;
		Var12.f_20 = iParam14;
		Var12.f_21 = iParam9;
		Var12.f_22 = iParam0;
		Var12.f_23 = Global_4718592.f_107227;
		if (__LIB_2__::func_581())
		{
			if (Var12.f_23 == 6)
			{
				Var12.f_23 = 14;
			}
			else if (Var12.f_23 == 7)
			{
				Var12.f_23 = 15;
			}
		}
		else if (__LIB_1__::func_151(Global_4718592.f_116524))
		{
			if (Var12.f_23 == 6)
			{
				Var12.f_23 = 16;
			}
			else if (Var12.f_23 == 7)
			{
				Var12.f_23 = 17;
			}
		}
		Var12.f_24 = iVar3;
		Var12.f_25 = iParam10;
		Var12.f_34 = Global_1837292;
		Var12.f_26 = (__LIB_1__::func_190() - Global_1057406.f_1);
		Var12.f_29 = __LIB_1__::func_360(1301, -1, 0);
		if (__LIB_0__::func_936(PLAYER::PLAYER_ID()))
		{
			Var12.f_40 = Global_2715699.f_3475;
			Var12.f_41 = Global_2715699.f_3475.f_1 + 1;
		}
		else
		{
			Var12.f_5 = Global_2715699.f_3475;
			Var12.f_6 = Global_2715699.f_3475.f_1;
		}
		Var12.f_36 = Global_1837293;
		Var12.f_37 = uParam16;
		Var12.f_30 = uVar9;
		if (__LIB_1__::func_150() || __LIB_1__::func_149())
		{
			Var12.f_35 = 1;
		}
		if (iParam0 == 2)
		{
			Var12.f_27 = Global_4456449.f_8;
			Var12.f_10 = Global_4456484.f_31;
			if (((__LIB_2__::func_580(0) && Global_1837297 != -1) && !__LIB_1__::func_152()) && !__LIB_0__::func_936(PLAYER::PLAYER_ID()))
			{
				Var12.f_31 = Global_1837297;
			}
			Global_1837297 = -1;
			Var12.f_42 = Global_1659950[__LIB_1__::func_146() /*26*/].f_20;
			Var12.f_43 = Global_1659950[__LIB_1__::func_146() /*26*/].f_21;
			Var12.f_44 = Global_1659950[__LIB_1__::func_146() /*26*/].f_22;
			Var12.f_45 = Global_1659950[__LIB_1__::func_146() /*26*/].f_23;
			Var12.f_46 = Global_1659950[__LIB_1__::func_146() /*26*/].f_24;
		}
		if (__LIB_1__::func_152() || __LIB_0__::func_936(PLAYER::PLAYER_ID()))
		{
			Var12.f_28 = MISC::GET_HASH_KEY(&(Global_1048576.f_44));
			if (__LIB_1__::func_145() || __LIB_1__::func_144())
			{
				Var12.f_32 = 1;
			}
			else if (__LIB_1__::func_143() || __LIB_1__::func_142())
			{
				Var12.f_33 = 1;
			}
		}
		if (__LIB_1__::func_152() || __LIB_0__::func_936(PLAYER::PLAYER_ID()))
		{
			Var15 = { Global_1048576.f_44 };
		}
		SOCIALCLUB::SC_PRESENCE_ATTR_SET_STRING(1603298962, "");
		SOCIALCLUB::SC_PRESENCE_ATTR_SET_INT(591312727, 0);
		SOCIALCLUB::SC_PRESENCE_ATTR_SET_STRING(-1404245366, "");
		SOCIALCLUB::SC_PRESENCE_ATTR_SET_INT(2034665250, 0);
		if (!__LIB_1__::func_141())
		{
			if ((__LIB_1__::func_140() || __LIB_1__::func_153()) || bParam15)
			{
				Var16.f_0 = Global_2714762.f_669.f_9;
				Var16.f_1 = Global_2714762.f_669.f_10;
				Global_2714762.f_669.f_15 = 0;
				Var16.f_2 = Global_1837284;
				Var16.f_3 = Global_1837285;
				if (Var16.f_3 < 0)
				{
					Var16.f_3 = 0;
				}
				Var16.f_4 = Global_1837282;
				Var16.f_5 = (__LIB_1__::func_154(PLAYER::PLAYER_ID()) + MONEY::NETWORK_GET_VC_BANK_BALANCE());
				Var16.f_6 = Var12.f_4;
				if (__LIB_0__::func_936(PLAYER::PLAYER_ID()))
				{
					Var16.f_29 = Global_2715699.f_3475;
					Var16.f_30 = Global_2715699.f_3475.f_1 + 1;
				}
				else
				{
					Var16.f_7 = Global_2715699.f_3475;
					Var16.f_8 = Global_2715699.f_3475.f_1;
				}
				Var16.f_9 = (__LIB_1__::func_335(PLAYER::PLAYER_ID()) - Global_1837283);
				Var16.f_10 = iParam8;
				Var16.f_11 = iParam5;
				Var16.f_12 = iParam6;
				Var16.f_13 = iParam7;
				Var16.f_14 = iParam11;
				Var16.f_15 = Var10.f_0;
				Var16.f_16 = Global_1837286;
				Var16.f_17 = iParam9;
				Var16.f_18 = iParam10;
				Var16.f_19 = (__LIB_1__::func_190() - Global_1057406.f_1);
				if (__LIB_1__::func_152() || __LIB_0__::func_936(PLAYER::PLAYER_ID()))
				{
					Var16.f_20 = MISC::GET_HASH_KEY(&(Global_1048576.f_44));
					Var16.f_23 = (__LIB_1__::func_145() || __LIB_1__::func_144());
					Var16.f_24 = (__LIB_1__::func_143() || __LIB_1__::func_142());
				}
				Var16.f_21 = __LIB_1__::func_360(1301, -1, 0);
				Var16.f_22 = uVar9;
				Var16.f_25 = Global_1837292;
				Var16.f_26 = (__LIB_1__::func_150() || __LIB_1__::func_149());
				Var16.f_27 = Global_1837293;
				Var16.f_28 = bVar11;
				if (Global_1837299 >= 0)
				{
					Var16.f_31 = Global_1837299;
				}
				else if (Global_1837299 == -2)
				{
					Var16.f_31 = 998;
				}
				else
				{
					Var16.f_31 = 999;
				}
				if (Global_1837300 >= 0)
				{
					Var16.f_32 = Global_1837300;
				}
				else if (Global_1837300 == -2)
				{
					Var16.f_32 = 998;
				}
				else
				{
					Var16.f_32 = 999;
				}
				StringCopy(&Var17, "", 24);
				if (__LIB_1__::func_152() || __LIB_0__::func_936(PLAYER::PLAYER_ID()))
				{
					Var17 = { Global_1048576.f_44 };
				}
				STATS::PLAYSTATS_JOB_LTS_END(&cVar0, &Var1, &Var16, &Var17);
				__LIB_1__::func_139();
				Global_1837298 = 0;
				return;
			}
		}
		if (__LIB_0__::func_970(PLAYER::PLAYER_ID()) || __LIB_0__::func_971(PLAYER::PLAYER_ID()))
		{
			Global_786435.f_3 = Var12.f_13;
			Global_786435.f_4 = Var12.f_14;
			Global_786435.f_6 = Global_1837284;
			Global_786435.f_7 = Global_1837282;
			Global_786435.f_8 = (__LIB_1__::func_154(PLAYER::PLAYER_ID()) + MONEY::NETWORK_GET_VC_BANK_BALANCE());
			Global_786435.f_9 = Var12.f_4;
			Global_786435.f_10 = (__LIB_1__::func_335(PLAYER::PLAYER_ID()) - Global_1837283);
			Global_786435.f_11 = iParam7;
			Global_786435.f_12 = iParam11;
			Global_786435.f_13 = Var10.f_0;
			Global_786435.f_14 = iParam9;
			Global_786435.f_15 = iParam10;
			Global_786435.f_16 = (__LIB_1__::func_190() - Global_1057406.f_1);
			Global_786435.f_17 = __LIB_1__::func_360(1301, -1, 0);
			Global_786435.f_18 = uVar9;
			Global_786435.f_19 = Global_1837293;
			Global_786435.f_20 = bVar11;
			Global_786435.f_28 = uParam16;
			Global_786435.f_43 = Global_786547;
			Global_786435.f_44 = Global_786547.f_1;
			Global_786435.f_23 = Global_786547.f_2;
			if (__LIB_2__::func_104(96, 0, 0))
			{
				Global_786435.f_22 = 1;
			}
			else
			{
				Global_786435.f_22 = 0;
			}
			STATS::PLAYSTATS_JOB_BEND(&cVar0, &Var1, &Global_786435, &Var15);
			__LIB_1__::func_139();
			Global_1837298 = 0;
			return;
		}
		if (__LIB_0__::func_177())
		{
			Global_786481.f_3 = Var12.f_13;
			Global_786481.f_4 = Var12.f_14;
			Global_786481.f_6 = Global_1837284;
			Global_786481.f_7 = Global_1837282;
			Global_786481.f_8 = (__LIB_1__::func_154(PLAYER::PLAYER_ID()) + MONEY::NETWORK_GET_VC_BANK_BALANCE());
			Global_786481.f_9 = Var12.f_4;
			Global_786481.f_10 = (__LIB_1__::func_335(PLAYER::PLAYER_ID()) - Global_1837283);
			Global_786481.f_11 = iParam7;
			Global_786481.f_12 = iParam11;
			Global_786481.f_13 = Var10.f_0;
			Global_786481.f_14 = iParam9;
			Global_786481.f_15 = iParam10;
			Global_786481.f_19 = Global_1837293;
			Global_786481.f_20 = bVar11;
			Global_786481.f_28 = uParam16;
			Global_786481.f_43 = Global_786547;
			Global_786481.f_44 = Global_786547.f_1;
			Global_786481.f_23 = __LIB_1__::func_138();
			STATS::PLAYSTATS_INSTANCED_HEIST_ENDED(&cVar0, &Var1, &Var15, &Global_786481);
			__LIB_1__::func_139();
			Global_1837298 = 0;
			return;
		}
		if (__LIB_1__::func_141())
		{
			Global_2714762.f_669.f_15 = 0;
			Global_1944345 = iParam2;
			Global_1944345.f_4 = __LIB_1__::func_137(bVar11);
			Global_1944345.f_5 = (__LIB_1__::func_335(PLAYER::PLAYER_ID()) - Global_1837283);
			Global_1944345.f_6 = iParam5;
			Global_1944345.f_7 = iParam6;
			Global_1944345.f_8 = iParam7;
			Global_1944345.f_9 = __LIB_1__::func_136(PLAYER::PLAYER_ID());
			Global_1944345.f_10 = iParam13;
			Global_1944345.f_11 = iParam17;
			Global_1944345.f_13 = iParam10;
			Global_1944345.f_15 = __LIB_1__::func_360(7849, -1, 0);
			Global_1944345.f_19 = iParam0;
			Global_1944345.f_20 = Global_4718592.f_116524;
			if (__LIB_2__::func_430())
			{
				Global_1944345.f_24 = 1;
			}
			else
			{
				Global_1944345.f_24 = 0;
			}
			Global_1944345.f_25 = iParam9;
			Global_1944345.f_40 = Global_1659922;
			Global_1944345.f_41 = Global_1659923;
			Global_1944345.f_42 = Global_1659924;
			Global_1944345.f_43 = Global_1659925;
			Global_1659922 = -2;
			Global_1659923 = -2;
			Global_1659924 = -2;
			Global_1659925 = -2;
			Global_1944345.f_3 = __LIB_1__::func_192();
			Global_1944345.f_26 = __LIB_0__::func_138(__LIB_1__::func_189(PLAYER::PLAYER_ID(), 0), 1, 0);
			__LIB_1__::func_139();
			Global_1837298 = 0;
			STATS::PLAYSTATS_ARENA_WARS_ENDED(&Global_1944345);
			__LIB_1__::func_156();
			return;
		}
		if (__LIB_1__::func_125(Global_4718592.f_116524))
		{
			Global_2714762.f_669.f_15 = 0;
			Global_1944421.f_17 = bVar11;
			Global_1944421.f_20 = (__LIB_1__::func_335(PLAYER::PLAYER_ID()) - Global_1837283);
			Global_1944421.f_3 = iParam5;
			Global_1944421.f_4 = iParam6;
			Global_1944421.f_21 = iParam7;
			Global_1944421.f_22 = __LIB_1__::func_136(PLAYER::PLAYER_ID());
			Global_1944421.f_24 = iParam10;
			if (iParam10 == 0)
			{
				Global_1944421.f_13 = 0;
			}
			Global_1944421.f_16 = Global_1837293;
			Global_1944421.f_5 = Global_1837284;
			Global_1944421.f_6 = Global_1837282;
			Global_1944421.f_7 = (__LIB_1__::func_154(PLAYER::PLAYER_ID()) + MONEY::NETWORK_GET_VC_BANK_BALANCE());
			Global_1944421.f_8 = Var12.f_4;
			Global_1944421.f_9 = uParam16;
			Global_1944421.f_10 = CAM::GET_FOLLOW_PED_CAM_VIEW_MODE();
			Global_1944421.f_38 = __LIB_1__::func_124(PLAYER::PLAYER_ID());
			Global_1944421.f_39 = __LIB_1__::func_123(PLAYER::PLAYER_ID());
			Global_1944421.f_40 = __LIB_1__::func_341(PLAYER::PLAYER_ID());
			Global_1944421.f_17 = bVar11;
			Global_1944421.f_27 = Global_786547.f_1;
			Global_1944421.f_16 = Global_1837293;
			Global_1944421.f_23 = Var10.f_0;
			Global_1944421.f_25 = (__LIB_1__::func_190() - Global_1057406.f_1);
			Global_1944421.f_26 = NETWORK::NETWORK_HAS_HEADSET();
			Global_1944421.f_28 = 0;
			Global_1944421.f_29 = 0;
			if (Global_1575016 == 8 || __LIB_1__::func_122())
			{
				Global_1944421.f_30 = 1;
			}
			else
			{
				Global_1944421.f_30 = 0;
			}
			Global_1944421.f_31 = __LIB_1__::func_122();
			Global_1944421.f_41 = 0;
			__LIB_1__::func_139();
			Global_1837298 = 0;
			STATS::PLAYSTATS_CASINO_STORY_MISSION_ENDED(&Global_1944421, &Var1);
			__LIB_1__::func_121();
			return;
		}
		if (__LIB_1__::func_120(Global_4718592.f_116524))
		{
			Global_2714762.f_669.f_15 = 0;
			Global_1944501 = __LIB_1__::func_360(8916, -1, 0);
			Global_1944501.f_1 = Global_4718592.f_116524;
			Global_1944501.f_10 = iParam2;
			Global_1944501.f_18 = (__LIB_1__::func_464(PLAYER::PLAYER_ID(), 1) - Global_1837283);
			STATS::PLAYSTATS_HEIST3_FINALE(&Global_1944501);
			__LIB_1__::func_139();
			Global_1837298 = 0;
		}
		if (__LIB_1__::func_119(Global_4718592.f_116524))
		{
			Global_2714762.f_669.f_15 = 0;
			Global_1944587 = __LIB_1__::func_360(9572, -1, 0);
			IntToString(&(Global_1944587.f_3), MISC::GET_HASH_KEY(&(Global_4718592.f_116811)), 32);
			Global_1944587.f_11 = iParam2;
			Global_1944587.f_19 = (__LIB_1__::func_464(PLAYER::PLAYER_ID(), 1) - Global_1837283);
			STATS::PLAYSTATS_HEIST4_FINALE(&Global_1944587);
			__LIB_1__::func_139();
			Global_1837298 = 0;
		}
		if ((__LIB_0__::func_273(Global_4718592.f_116524) || __LIB_0__::func_976(Global_4718592.f_116524)) || (__LIB_2__::func_429() && __LIB_1__::func_117(249)))
		{
			Global_2714762.f_669.f_15 = 0;
			Global_1944719 = Global_786547.f_1;
			Global_1944719.f_1 = Global_4718592.f_116524;
			Global_1944719.f_2 = Global_786547.f_1;
			if (__LIB_0__::func_273(Global_4718592.f_116524))
			{
				Global_1944719.f_3 = __LIB_1__::func_116(Global_4718592.f_116524);
			}
			IntToString(&(Global_1944719.f_4), MISC::GET_HASH_KEY(&(Global_4718592.f_116811)), 32);
			Global_1944719.f_32 = iParam2;
			Global_1944719.f_19 = (__LIB_1__::func_464(PLAYER::PLAYER_ID(), 1) - Global_1837283);
			STATS::PLAYSTATS_ROBBERY_FINALE(&Global_1944719);
			__LIB_1__::func_139();
			Global_1837298 = 0;
		}
		if (__LIB_1__::func_115(5) || __LIB_2__::func_429())
		{
			Global_2714762.f_669.f_15 = 0;
			Global_1944783.f_25 = (__LIB_1__::func_464(PLAYER::PLAYER_ID(), 1) - Global_1837283);
			IntToString(&(Global_1944783.f_7), MISC::GET_HASH_KEY(&(Global_4718592.f_116811)), 32);
			STATS::PLAYSTATS_INST_MISSION_END(&Global_1944783);
			__LIB_1__::func_139();
			Global_1837298 = 0;
		}
		Global_2714762.f_669.f_15 = 0;
		STATS::PLAYSTATS_JOB_ACTIVITY_END(&cVar0, &Var1, &Var12, &Var15);
		__LIB_1__::func_139();
		Global_1837298 = 0;
	}
}

void func_611()//Position - 0x796
{
	AUDIO::STOP_SCRIPTED_CONVERSATION(false);
	HUD::CLEAR_PRINTS();
}

int func_612(int iParam0, int iParam1, int iParam2, bool bParam3, var uParam4, var uParam5, var uParam6, int iParam7, int iParam8)//Position - 0x34802
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	struct<3> Var5;
	int iVar6;
	int iVar7;
	int iVar8;
	bVar0 = false;
	iVar2 = iParam1;
	if (!WEAPON::HAS_PED_GOT_WEAPON(iParam0, iParam1, false))
	{
		bVar0 = true;
	}
	if (iVar2 == joaat("WEAPON_UNARMED"))
	{
		return 0;
	}
	iVar3 = 0;
	if (iParam2 == 1)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
		{
			iVar3 = WEAPON::GET_AMMO_IN_PED_WEAPON(iParam0, iVar2);
		}
		if (iVar3 == -1)
		{
			iVar4 = WEAPON::GET_WEAPON_CLIP_SIZE(iVar2);
			if (iVar4 > 0)
			{
				iVar3 = iVar4;
			}
			else
			{
				WEAPON::GET_MAX_AMMO(iParam0, iVar2, &iVar3);
			}
		}
	}
	Var5 = { ENTITY::GET_ENTITY_COORDS(iParam0, false) - Vector(10f, 0f, 0f) };
	if (bParam3)
	{
		Var5 = { uParam4, uParam5, uParam6 };
	}
	while (__LIB_0__::func_722(iVar2, iVar6) != 0)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
		{
			if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(iParam0, iVar2, __LIB_0__::func_722(iVar2, iVar6)))
			{
				if (__LIB_0__::func_705(__LIB_0__::func_722(iVar2, iVar6)))
				{
					iVar7 = WEAPON::GET_WEAPON_COMPONENT_TYPE_MODEL(__LIB_0__::func_722(iVar2, iVar6));
				}
			}
		}
		iVar6++;
	}
	iVar1 = WEAPON::CREATE_WEAPON_OBJECT(iVar2, iVar3, Var5, bVar0, 1f, iVar7, iParam7, iParam8);
	while (__LIB_0__::func_722(iVar2, iVar8) != 0)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
		{
			if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(iParam0, iVar2, __LIB_0__::func_722(iVar2, iVar8)))
			{
				WEAPON::GIVE_WEAPON_COMPONENT_TO_WEAPON_OBJECT(iVar1, __LIB_0__::func_722(iVar2, iVar8));
				__LIB_0__::func_707(iVar1, __LIB_0__::func_722(iVar2, iVar8));
			}
		}
		iVar8++;
	}
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		if (WEAPON::HAS_PED_GOT_WEAPON(iParam0, iVar2, false))
		{
			WEAPON::SET_WEAPON_OBJECT_TINT_INDEX(iVar1, WEAPON::GET_PED_WEAPON_TINT_INDEX(iParam0, iVar2));
		}
	}
	return iVar1;
}

char* func_613()//Position - 0x8056
{
	return "anim_casino_b@amb@casino@games@threecardpoker@dealer";
}

int func_614(int iParam0, int iParam1)//Position - 0x88CB
{
	if ((iParam0 == 2 || iParam0 == 3) || iParam1 == 1)
	{
		return 1;
	}
	return 0;
}

char* func_615()//Position - 0x9215
{
	return "anim_casino_b@amb@casino@games@shared@dealer@";
}

void func_616(int iParam0, int iParam1)//Position - 0x955D
{
	switch (iParam0)
	{
		case 0:
			AUDIO::SET_PED_VOICE_GROUP(*iParam1, MISC::GET_HASH_KEY("S_M_Y_Casino_01_WHITE_01"));
			break;
		case 1:
			AUDIO::SET_PED_VOICE_GROUP(*iParam1, MISC::GET_HASH_KEY("S_M_Y_Casino_01_ASIAN_01"));
			break;
		case 2:
			AUDIO::SET_PED_VOICE_GROUP(*iParam1, MISC::GET_HASH_KEY("S_M_Y_Casino_01_ASIAN_02"));
			break;
		case 3:
			AUDIO::SET_PED_VOICE_GROUP(*iParam1, MISC::GET_HASH_KEY("S_M_Y_Casino_01_ASIAN_01"));
			break;
		case 4:
			AUDIO::SET_PED_VOICE_GROUP(*iParam1, MISC::GET_HASH_KEY("S_M_Y_Casino_01_WHITE_01"));
			break;
		case 5:
			AUDIO::SET_PED_VOICE_GROUP(*iParam1, MISC::GET_HASH_KEY("S_M_Y_Casino_01_WHITE_02"));
			break;
		case 6:
			AUDIO::SET_PED_VOICE_GROUP(*iParam1, MISC::GET_HASH_KEY("S_M_Y_Casino_01_WHITE_01"));
			break;
		case 7:
			AUDIO::SET_PED_VOICE_GROUP(*iParam1, MISC::GET_HASH_KEY("S_F_Y_Casino_01_ASIAN_01"));
			break;
		case 8:
			AUDIO::SET_PED_VOICE_GROUP(*iParam1, MISC::GET_HASH_KEY("S_F_Y_Casino_01_ASIAN_02"));
			break;
		case 9:
			AUDIO::SET_PED_VOICE_GROUP(*iParam1, MISC::GET_HASH_KEY("S_F_Y_Casino_01_ASIAN_01"));
			break;
		case 10:
			AUDIO::SET_PED_VOICE_GROUP(*iParam1, MISC::GET_HASH_KEY("S_F_Y_Casino_01_ASIAN_02"));
			break;
		case 11:
			AUDIO::SET_PED_VOICE_GROUP(*iParam1, MISC::GET_HASH_KEY("S_F_Y_Casino_01_LATINA_01"));
			break;
		case 12:
			AUDIO::SET_PED_VOICE_GROUP(*iParam1, MISC::GET_HASH_KEY("S_F_Y_Casino_01_LATINA_02"));
			break;
		case 13:
			AUDIO::SET_PED_VOICE_GROUP(*iParam1, MISC::GET_HASH_KEY("S_F_Y_Casino_01_LATINA_01"));
			break;
	}
}

void func_617(int iParam0, int iParam1)//Position - 0x96BC
{
	switch (iParam0)
	{
		case 0:
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(*iParam1);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 0, 3, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 1, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 2, 3, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 3, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 4, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 6, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 7, 2, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 8, 3, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 10, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 11, 1, 0, 0);
			break;
		case 1:
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(*iParam1);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 0, 2, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 1, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 2, 4, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 3, 0, 3, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 4, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 6, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 7, 2, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 8, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 10, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 11, 1, 0, 0);
			break;
		case 2:
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(*iParam1);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 0, 2, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 1, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 2, 2, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 3, 0, 3, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 4, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 6, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 7, 2, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 8, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 10, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 11, 1, 0, 0);
			break;
		case 3:
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(*iParam1);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 0, 2, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 1, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 2, 3, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 3, 1, 3, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 4, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 6, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 7, 2, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 8, 3, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 10, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 11, 1, 0, 0);
			break;
		case 4:
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(*iParam1);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 0, 4, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 1, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 2, 3, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 3, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 4, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 6, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 7, 2, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 8, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 10, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 11, 1, 0, 0);
			break;
		case 5:
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(*iParam1);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 0, 4, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 1, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 2, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 3, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 4, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 6, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 7, 2, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 8, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 10, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 11, 1, 0, 0);
			break;
		case 6:
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(*iParam1);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 0, 4, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 1, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 2, 4, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 3, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 4, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 6, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 7, 2, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 8, 3, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 10, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 11, 1, 0, 0);
			break;
		case 7:
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(*iParam1);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 0, 1, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 1, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 2, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 3, 0, 3, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 4, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 6, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 7, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 8, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 10, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 11, 0, 0, 0);
			break;
		case 8:
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(*iParam1);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 0, 1, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 1, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 2, 1, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 3, 1, 3, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 4, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 6, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 7, 2, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 8, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 10, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 11, 0, 0, 0);
			break;
		case 9:
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(*iParam1);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 0, 2, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 1, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 2, 2, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 3, 2, 3, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 4, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 6, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 7, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 8, 2, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 10, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 11, 0, 0, 0);
			break;
		case 10:
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(*iParam1);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 0, 2, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 1, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 2, 2, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 3, 3, 3, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 4, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 6, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 7, 2, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 8, 3, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 10, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 11, 0, 0, 0);
			break;
		case 11:
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(*iParam1);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 0, 3, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 1, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 2, 3, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 3, 0, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 4, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 6, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 7, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 8, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 10, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 11, 0, 0, 0);
			PED::SET_PED_PROP_INDEX(*iParam1, 1, 0, 0, false);
			break;
		case 12:
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(*iParam1);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 0, 3, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 1, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 2, 3, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 3, 1, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 4, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 6, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 7, 2, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 8, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 10, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 11, 0, 0, 0);
			break;
		case 13:
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(*iParam1);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 0, 4, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 1, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 2, 4, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 3, 2, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 4, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 6, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 7, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 8, 2, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 10, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 11, 0, 0, 0);
			PED::SET_PED_PROP_INDEX(*iParam1, 1, 0, 0, false);
			break;
	}
}

char* func_618(int iParam0)//Position - 0xB2FA
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 4:
		case 5:
		case 8:
		case 9:
		case 12:
		case 13:
			return "sit_exit_left";
		default:
	}
	return "sit_exit_left";
}

void func_619(char* sParam0, char* sParam1, int iParam2)//Position - 0x10801
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, true, false, -1);
}

char* func_620()//Position - 0x1228D
{
	if (__LIB_1__::func_394())
	{
		switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 5))
		{
			case 0:
				return "female_reaction_great_var_01";
			case 1:
				return "female_reaction_great_var_02";
			case 2:
				return "female_reaction_great_var_03";
			case 3:
				return "female_reaction_great_var_04";
			case 4:
				return "female_reaction_great_var_05";
			default:
		}
	}
	else
	{
		switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 4))
		{
			case 0:
				return "reaction_great_var_01";
			case 1:
				return "reaction_great_var_02";
			case 2:
				return "reaction_great_var_03";
			case 3:
				return "reaction_great_var_04";
			}
		default:
	}
	return "";
}

char* func_621(int iParam0)//Position - 0x160D3
{
	switch (iParam0)
	{
		case 0:
			return "sit_enter_left";
		case 1:
			return "sit_enter_left_side";
		case 2:
			return "sit_enter_right_side";
		default:
	}
	return "sit_enter_left";
}

char* func_622()//Position - 0x1610D
{
	return "anim_casino_b@amb@casino@games@shared@player@";
}

int func_623(int iParam0)//Position - 0x1CD08
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
			return 0;
		case 4:
		case 5:
		case 6:
		case 7:
			return 1;
		case 8:
		case 9:
		case 10:
		case 11:
			return 2;
		case 12:
		case 13:
		case 14:
		case 15:
			return 3;
		default:
	}
	return 0;
}

char* func_624(int iParam0)//Position - 0x1D911
{
	switch (iParam0)
	{
		case 10:
			return "DLC_VW_CHIP_BET_SML_SINGLE";
		case 20:
			return "DLC_VW_CHIP_BET_SML_SMALL";
		case 30:
			return "DLC_VW_CHIP_BET_SML_SMALL";
		case 40:
			return "DLC_VW_CHIP_BET_SML_MEDIUM";
		case 50:
			return "DLC_VW_CHIP_BET_SML_MEDIUM";
		case 60:
			return "DLC_VW_CHIP_BET_SML_MEDIUM";
		case 70:
			return "DLC_VW_CHIP_BET_SML_LARGE";
		case 80:
			return "DLC_VW_CHIP_BET_SML_LARGE";
		case 90:
			return "DLC_VW_CHIP_BET_SML_LARGE";
		case 100:
			return "DLC_VW_CHIP_BET_SML_SINGLE";
		case 150:
			return "DLC_VW_CHIP_BET_SML_SMALL";
		case 200:
			return "DLC_VW_CHIP_BET_SML_SMALL";
		case 250:
			return "DLC_VW_CHIP_BET_SML_MEDIUM";
		case 300:
			return "DLC_VW_CHIP_BET_SML_SMALL";
		case 350:
			return "DLC_VW_CHIP_BET_SML_LARGE";
		case 400:
			return "DLC_VW_CHIP_BET_SML_MEDIUM";
		case 450:
			return "DLC_VW_CHIP_BET_SML_LARGE";
		case 500:
			return "DLC_VW_CHIP_BET_SML_SINGLE";
		case 1000:
			return "DLC_VW_CHIP_BET_SML_SINGLE";
		case 1500:
			return "DLC_VW_CHIP_BET_SML_SMALL";
		case 2000:
			return "DLC_VW_CHIP_BET_SML_SMALL";
		case 2500:
			return "DLC_VW_CHIP_BET_SML_MEDIUM";
		case 3000:
			return "DLC_VW_CHIP_BET_SML_SMALL";
		case 3500:
			return "DLC_VW_CHIP_BET_SML_MEDIUM";
		case 4000:
			return "DLC_VW_CHIP_BET_SML_MEDIUM";
		case 4500:
			return "DLC_VW_CHIP_BET_SML_LARGE";
		case 5000:
			return "DLC_VW_CHIP_BET_LRG_SINGLE";
		case 6000:
			return "DLC_VW_CHIP_BET_SML_MEDIUM";
		case 7000:
			return "DLC_VW_CHIP_BET_SML_LARGE";
		case 8000:
			return "DLC_VW_CHIP_BET_SML_LARGE";
		case 9000:
			return "DLC_VW_CHIP_BET_SML_LARGE";
		case 10000:
			return "DLC_VW_CHIP_BET_LRG_SINGLE";
		case 15000:
			return "DLC_VW_CHIP_BET_LRG_SMALL";
		case 20000:
			return "DLC_VW_CHIP_BET_LRG_SMALL";
		case 25000:
			return "DLC_VW_CHIP_BET_LRG_MEDIUM";
		case 30000:
			return "DLC_VW_CHIP_BET_LRG_SMALL";
		case 35000:
			return "DLC_VW_CHIP_BET_LRG_MEDIUM";
		case 40000:
			return "DLC_VW_CHIP_BET_LRG_MEDIUM";
		case 45000:
			return "DLC_VW_CHIP_BET_LRG_LARGE";
		case 50000:
			return "DLC_VW_CHIP_BET_LRG_MEDIUM";
		default:
	}
	return "";
}

int func_625(int iParam0, bool bParam1)//Position - 0x1E896
{
	if (!bParam1)
	{
		switch (iParam0)
		{
			case 10:
				return joaat("vw_prop_chip_10dollar_x1");
			case 20:
				return joaat("vw_prop_chip_10dollar_st");
			case 30:
				return joaat("vw_prop_chip_10dollar_st");
			case 40:
				return joaat("vw_prop_chip_10dollar_st");
			case 50:
				return joaat("vw_prop_chip_50dollar_x1");
			case 60:
				return joaat("vw_prop_chip_10dollar_st");
			case 70:
				return joaat("vw_prop_chip_10dollar_st");
			case 80:
				return joaat("vw_prop_chip_10dollar_st");
			case 90:
				return joaat("vw_prop_chip_10dollar_st");
			case 100:
				return joaat("vw_prop_chip_100dollar_x1");
			case 150:
				return joaat("vw_prop_chip_50dollar_st");
			case 200:
				return joaat("vw_prop_chip_100dollar_st");
			case 250:
				return joaat("vw_prop_chip_50dollar_st");
			case 300:
				return joaat("vw_prop_chip_100dollar_st");
			case 350:
				return joaat("vw_prop_chip_50dollar_st");
			case 400:
				return joaat("vw_prop_chip_100dollar_st");
			case 450:
				return joaat("vw_prop_chip_50dollar_st");
			case 500:
				return joaat("vw_prop_chip_500dollar_x1");
			case 1000:
				return joaat("vw_prop_chip_1kdollar_x1");
			case 1500:
				return joaat("vw_prop_chip_500dollar_st");
			case 2000:
				return joaat("vw_prop_chip_1kdollar_st");
			case 2500:
				return joaat("vw_prop_chip_500dollar_st");
			case 3000:
				return joaat("vw_prop_chip_1kdollar_st");
			case 3500:
				return joaat("vw_prop_chip_500dollar_st");
			case 4000:
				return joaat("vw_prop_chip_1kdollar_st");
			case 4500:
				return joaat("vw_prop_chip_500dollar_st");
			case 5000:
				return joaat("vw_prop_chip_5kdollar_x1");
			case 6000:
				return joaat("vw_prop_chip_1kdollar_st");
			case 7000:
				return joaat("vw_prop_chip_1kdollar_st");
			case 8000:
				return joaat("vw_prop_chip_1kdollar_st");
			case 9000:
				return joaat("vw_prop_chip_1kdollar_st");
			case 10000:
				return joaat("vw_prop_chip_10kdollar_x1");
			case 15000:
				return joaat("vw_prop_chip_5kdollar_st");
			case 20000:
				return joaat("vw_prop_chip_10kdollar_st");
			case 25000:
				return joaat("vw_prop_chip_5kdollar_st");
			case 30000:
				return joaat("vw_prop_chip_10kdollar_st");
			case 35000:
				return joaat("vw_prop_chip_5kdollar_st");
			case 40000:
				return joaat("vw_prop_chip_10kdollar_st");
			case 45000:
				return joaat("vw_prop_chip_5kdollar_st");
			case 50000:
				return joaat("vw_prop_chip_10kdollar_st");
			default:
		}
	}
	else
	{
		switch (iParam0)
		{
			case 10:
				return joaat("vw_prop_chip_10dollar_x1");
			case 20:
				return joaat("vw_prop_chip_10dollar_st");
			case 30:
				return joaat("vw_prop_chip_10dollar_st");
			case 40:
				return joaat("vw_prop_chip_10dollar_st");
			case 50:
				return joaat("vw_prop_chip_50dollar_x1");
			case 60:
				return joaat("vw_prop_chip_10dollar_st");
			case 70:
				return joaat("vw_prop_chip_10dollar_st");
			case 80:
				return joaat("vw_prop_chip_10dollar_st");
			case 90:
				return joaat("vw_prop_chip_10dollar_st");
			case 100:
				return joaat("vw_prop_chip_100dollar_x1");
			case 150:
				return joaat("vw_prop_chip_50dollar_st");
			case 200:
				return joaat("vw_prop_chip_100dollar_st");
			case 250:
				return joaat("vw_prop_chip_50dollar_st");
			case 300:
				return joaat("vw_prop_chip_100dollar_st");
			case 350:
				return joaat("vw_prop_chip_50dollar_st");
			case 400:
				return joaat("vw_prop_chip_100dollar_st");
			case 450:
				return joaat("vw_prop_chip_50dollar_st");
			case 500:
				return joaat("vw_prop_chip_500dollar_x1");
			case 1000:
				return joaat("vw_prop_chip_1kdollar_x1");
			case 1500:
				return joaat("vw_prop_chip_500dollar_st");
			case 2000:
				return joaat("vw_prop_chip_1kdollar_st");
			case 2500:
				return joaat("vw_prop_chip_500dollar_st");
			case 3000:
				return joaat("vw_prop_chip_1kdollar_st");
			case 3500:
				return joaat("vw_prop_chip_500dollar_st");
			case 4000:
				return joaat("vw_prop_chip_1kdollar_st");
			case 4500:
				return joaat("vw_prop_chip_500dollar_st");
			case 5000:
				return joaat("vw_prop_plaq_5kdollar_x1");
			case 6000:
				return joaat("vw_prop_chip_1kdollar_st");
			case 7000:
				return joaat("vw_prop_chip_1kdollar_st");
			case 8000:
				return joaat("vw_prop_chip_1kdollar_st");
			case 9000:
				return joaat("vw_prop_chip_1kdollar_st");
			case 10000:
				return joaat("vw_prop_plaq_10kdollar_x1");
			case 15000:
				return joaat("vw_prop_plaq_5kdollar_st");
			case 20000:
				return joaat("vw_prop_plaq_10kdollar_st");
			case 25000:
				return joaat("vw_prop_plaq_5kdollar_st");
			case 30000:
				return joaat("vw_prop_plaq_10kdollar_st");
			case 35000:
				return joaat("vw_prop_plaq_5kdollar_st");
			case 40000:
				return joaat("vw_prop_plaq_10kdollar_st");
			case 45000:
				return joaat("vw_prop_plaq_5kdollar_st");
			case 50000:
				return joaat("vw_prop_plaq_10kdollar_st");
			}
		default:
	}
	return 0;
}

int func_626(int iParam0)//Position - 0x1ED55
{
	switch (iParam0)
	{
		case 0:
			return joaat("vw_prop_chip_10dollar_x1");
		case 1:
			return joaat("vw_prop_chip_50dollar_x1");
		case 2:
			return joaat("vw_prop_chip_100dollar_x1");
		case 3:
			return joaat("vw_prop_chip_500dollar_x1");
		case 4:
			return joaat("vw_prop_chip_1kdollar_x1");
		case 5:
			return joaat("vw_prop_chip_5kdollar_x1");
		case 6:
			return joaat("vw_prop_chip_10kdollar_x1");
		case 7:
			return joaat("vw_prop_chip_10dollar_st");
		case 8:
			return joaat("vw_prop_chip_50dollar_st");
		case 9:
			return joaat("vw_prop_chip_100dollar_st");
		case 10:
			return joaat("vw_prop_chip_500dollar_st");
		case 11:
			return joaat("vw_prop_chip_1kdollar_st");
		case 12:
			return joaat("vw_prop_chip_5kdollar_st");
		case 13:
			return joaat("vw_prop_chip_10kdollar_st");
		case 14:
			return joaat("vw_prop_plaq_5kdollar_x1");
		case 15:
			return joaat("vw_prop_plaq_5kdollar_st");
		case 16:
			return joaat("vw_prop_plaq_10kdollar_x1");
		case 17:
			return joaat("vw_prop_plaq_10kdollar_st");
		default:
	}
	return 0;
}

int func_627()//Position - 0x1F0A8
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return 1;
	}
	return 0;
}

char* func_628()//Position - 0x121DC
{
	if (__LIB_1__::func_394())
	{
		switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 5))
		{
			case 0:
				return "female_reaction_terrible_var_01";
			case 1:
				return "female_reaction_terrible_var_02";
			case 2:
				return "female_reaction_terrible_var_03";
			case 3:
				return "female_reaction_terrible_var_04";
			case 4:
				return "female_reaction_terrible_var_05";
			default:
		}
	}
	else
	{
		switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 4))
		{
			case 0:
				return "reaction_terrible_var_01";
			case 1:
				return "reaction_terrible_var_02";
			case 2:
				return "reaction_terrible_var_03";
			case 3:
				return "reaction_terrible_var_04";
			}
		default:
	}
	return "";
}

int func_629()//Position - 0x1538A
{
	if (NETWORK::NETWORK_GET_HOST_OF_THIS_SCRIPT() != __LIB_0__::func_162())
	{
		return NETWORK::NETWORK_GET_PLAYER_ACCOUNT_ID(NETWORK::NETWORK_GET_PLAYER_INDEX(NETWORK::NETWORK_GET_HOST_OF_THIS_SCRIPT()));
	}
	return 0;
}

int func_630(int iParam0)//Position - 0x15FCE
{
	int iVar0;
	if (iParam0 == __LIB_0__::func_162())
	{
		return 0;
	}
	iVar0 = __LIB_0__::func_818(iParam0);
	if (iVar0 != __LIB_0__::func_162())
	{
		return __LIB_4__::func_153(iVar0);
	}
	return 0;
}

void func_631(bool bParam0)//Position - 0x1C847
{
	if (bParam0)
	{
		__LIB_3__::func_570(1);
		__LIB_0__::func_366(1);
	}
	if (!PLAYER::IS_SYSTEM_UI_BEING_DISPLAYED() && !HUD::IS_PAUSE_MENU_ACTIVE())
	{
		HUD::DISABLE_FRONTEND_THIS_FRAME();
		PAD::DISABLE_ALL_CONTROL_ACTIONS(0 /*PLAYER_CONTROL*/);
		PAD::ENABLE_ALL_CONTROL_ACTIONS(1 /*CAMERA_CONTROL*/);
		PAD::DISABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 200 /*INPUT_FRONTEND_PAUSE_ALTERNATE*/, true);
		PAD::DISABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 199 /*INPUT_FRONTEND_PAUSE*/, true);
		PAD::SET_INPUT_EXCLUSIVE(0 /*PLAYER_CONTROL*/, 200 /*INPUT_FRONTEND_PAUSE_ALTERNATE*/);
		PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 200 /*INPUT_FRONTEND_PAUSE_ALTERNATE*/);
		PAD::SET_INPUT_EXCLUSIVE(0 /*PLAYER_CONTROL*/, 199 /*INPUT_FRONTEND_PAUSE*/);
		PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 199 /*INPUT_FRONTEND_PAUSE*/);
		PAD::SET_INPUT_EXCLUSIVE(0 /*PLAYER_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/);
		PAD::SET_INPUT_EXCLUSIVE(0 /*PLAYER_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/);
		PAD::SET_INPUT_EXCLUSIVE(0 /*PLAYER_CONTROL*/, 187 /*INPUT_FRONTEND_DOWN*/);
	}
}

int func_632()//Position - 0x1EEAA
{
	return __LIB_0__::func_369(8251, -1, 0);
}

void func_633(var uParam0, var uParam1, char* sParam2, int iParam3, int iParam4, int iParam5, bool bParam6)//Position - 0x6273
{
	char* sVar0;
	sVar0 = sParam2;
	if (!__LIB_1__::func_76(sVar0))
	{
		if (__LIB_1__::func_755())
		{
			__LIB_1__::func_111(uParam1, 0);
			HUD::SET_TEXT_CENTRE(bParam6);
			HUD::SET_TEXT_JUSTIFICATION(iParam5);
			__LIB_3__::func_46(__LIB_1__::func_110(*uParam0), __LIB_1__::func_109(uParam0->f_1), sVar0, iParam3, iParam4);
		}
	}
}

void func_634(var uParam0, struct<3> Param1, int iParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)//Position - 0x3BF10
{
	int iVar0;
	if (uParam0->f_1 && CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		if (MISC::GET_GAME_TIMER() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	iVar0 = iParam2;
	if (MISC::IS_STRING_NULL(iVar0))
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			iVar0 = "CMN_HINT" /* GXT: ~s~Press ~INPUT_VEH_CIN_CAM~ to toggle focus on the target. */;
		}
		else
		{
			iVar0 = "FM_IHELP_HNT" /* GXT: ~s~Press ~INPUT_VEH_CIN_CAM~ to toggle focus. */;
		}
	}
	if (__LIB_0__::func_1(iVar0))
	{
		__LIB_0__::func_187();
	}
	if (!CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		if (__LIB_13__::func_796(uParam0, bParam4, bParam6, 0))
		{
			__LIB_13__::func_800(uParam0, Param1, iParam3);
		}
		if (*uParam0)
		{
			*uParam0 = 0;
		}
		else if (uParam0->f_6 == 2)
		{
			if (__LIB_13__::func_769(iVar0))
			{
				if ((MISC::IS_STRING_NULL(uParam0->f_3) && !MISC::IS_STRING_NULL(iVar0)) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					if ((CAM::IS_SPHERE_VISIBLE(Param1, 1f) && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && iParam5)
					{
						if (!__LIB_0__::func_1(iVar0))
						{
							__LIB_0__::func_151(iVar0, -1);
							uParam0->f_3 = iVar0;
							if (MISC::ARE_STRINGS_EQUAL("CMN_HINT" /* GXT: ~s~Press ~INPUT_VEH_CIN_CAM~ to toggle focus on the target. */, iVar0))
							{
								__LIB_0__::func_333(1);
							}
						}
					}
				}
			}
		}
		else if (__LIB_13__::func_769(iVar0))
		{
			if (MISC::IS_STRING_NULL(uParam0->f_3) && !MISC::IS_STRING_NULL(iVar0))
			{
				if ((CAM::IS_SPHERE_VISIBLE(Param1, 1f) && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && iParam5)
				{
					if (!__LIB_0__::func_1(iVar0))
					{
						__LIB_0__::func_151(iVar0, -1);
						uParam0->f_3 = iVar0;
						if (MISC::ARE_STRINGS_EQUAL("CMN_HINT" /* GXT: ~s~Press ~INPUT_VEH_CIN_CAM~ to toggle focus on the target. */, iVar0))
						{
							__LIB_0__::func_333(1);
						}
					}
				}
			}
		}
	}
	else
	{
		if (!MISC::IS_STRING_NULL(iVar0))
		{
			if (__LIB_0__::func_1(iVar0) && HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
			{
				HUD::CLEAR_HELP(true);
			}
		}
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
		{
			if (PED::IS_PED_IN_ANY_BOAT(PLAYER::PLAYER_PED_ID()))
			{
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(3) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(3) == 4)
				{
					__LIB_0__::func_345(uParam0, iVar0, 1);
				}
			}
			else if (PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()))
			{
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(6) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(6) == 4)
				{
					__LIB_0__::func_345(uParam0, iVar0, 1);
				}
			}
			else if (PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID()))
			{
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(4) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(4) == 4)
				{
					__LIB_0__::func_345(uParam0, iVar0, 1);
				}
			}
			else if (PED::IS_PED_IN_ANY_SUB(PLAYER::PLAYER_PED_ID()))
			{
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(5) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(5) == 4)
				{
					__LIB_0__::func_345(uParam0, iVar0, 1);
				}
			}
			else if (PED::IS_PED_ON_ANY_BIKE(PLAYER::PLAYER_PED_ID()))
			{
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(2) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(2) == 4)
				{
					__LIB_0__::func_345(uParam0, iVar0, 1);
				}
			}
			else if (CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == 3 || CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == 4)
			{
				__LIB_0__::func_345(uParam0, iVar0, 1);
			}
		}
		if (!__LIB_13__::func_796(uParam0, bParam4, bParam6, 0))
		{
			if ((!*uParam0 && !uParam0->f_1) && !__LIB_0__::func_332(uParam0))
			{
				__LIB_0__::func_644(uParam0);
			}
		}
	}
}

int func_635()//Position - 0x278EF
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("tonya3")) == 1 || SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("tonya4")) == 1)
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_565[0 /*20*/], false) && !ENTITY::IS_ENTITY_DEAD(Local_565[0 /*20*/].f_6, false))
		{
			if (PED::IS_PED_IN_VEHICLE(Local_565[0 /*20*/], Local_565[0 /*20*/].f_6, false))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_636()//Position - 0x279C1
{
	if (((VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_674, 2, false) && VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_674, 3, false)) && VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_674, 1, false)) && VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_674, 0, false))
	{
		return 1;
	}
	if (((VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_674, 4, false) && VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_674, 5, false)) && VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_674, 1, false)) && VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_674, 0, false))
	{
		return 1;
	}
	if (((VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_674, 4, false) && VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_674, 5, false)) && VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_674, 2, false)) && VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_674, 3, false))
	{
		return 1;
	}
	return 0;
}

int func_637(var uParam0)//Position - 0x284EC
{
	switch (iLocal_453)
	{
		case 1:
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0 && !PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
			{
				iLocal_214 = 0;
				return 1;
			}
			break;
		case 2:
			break;
		case 4:
			break;
		case 6:
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false) && !ENTITY::IS_ENTITY_DEAD(*uParam0, false))
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), *uParam0, false))
				{
					iLocal_214 = 0;
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_638(var uParam0, var uParam1)//Position - 0x28ECE
{
	if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0 || PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
	{
		if (PLAYER::HAS_PLAYER_DAMAGED_AT_LEAST_ONE_NON_ANIMAL_PED(PLAYER::PLAYER_ID()))
		{
			PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_NON_ANIMAL_PED(PLAYER::PLAYER_ID());
		}
		iLocal_453 = 1;
		return 1;
	}
	if ((ENTITY::DOES_ENTITY_EXIST((uParam0[0 /*20*/])->f_6) && !ENTITY::IS_ENTITY_DEAD((uParam0[0 /*20*/])->f_6, false)) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		if (!bLocal_178)
		{
			if ((ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY((uParam0[0 /*20*/])->f_6, PLAYER::PLAYER_PED_ID(), true) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_OBJECT((uParam0[0 /*20*/])->f_6)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED((uParam0[0 /*20*/])->f_6))
			{
				iLocal_453 = 2;
				return 1;
			}
		}
	}
	if ((ENTITY::DOES_ENTITY_EXIST((*uParam0)[0 /*20*/]) && !ENTITY::IS_ENTITY_DEAD((*uParam0)[0 /*20*/], false)) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(PLAYER::PLAYER_PED_ID(), (*uParam0)[0 /*20*/], true))
		{
			iLocal_453 = 4;
			return 1;
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false) && !ENTITY::IS_ENTITY_DEAD(*uParam1, false))
	{
		if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), *uParam1, false))
		{
			iLocal_453 = 6;
			return 1;
		}
	}
	return 0;
}

void func_639()//Position - 0x29D08
{
	PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 71 /*INPUT_VEH_ACCELERATE*/, true);
	PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 72 /*INPUT_VEH_BRAKE*/, true);
	PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 76 /*INPUT_VEH_HANDBRAKE*/, true);
	PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 73 /*INPUT_VEH_DUCK*/, true);
	PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 59 /*INPUT_VEH_MOVE_LR*/, true);
	PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 60 /*INPUT_VEH_MOVE_UD*/, true);
	PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 75 /*INPUT_VEH_EXIT*/, true);
	PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 80 /*INPUT_VEH_CIN_CAM*/, true);
	PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 69 /*INPUT_VEH_ATTACK*/, true);
	PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 70 /*INPUT_VEH_ATTACK2*/, true);
	PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 68 /*INPUT_VEH_AIM*/, true);
	PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 74 /*INPUT_VEH_HEADLIGHT*/, true);
	PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 86 /*INPUT_VEH_HORN*/, true);
	PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 81 /*INPUT_VEH_NEXT_RADIO*/, true);
	PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 82 /*INPUT_VEH_PREV_RADIO*/, true);
}

void func_640()//Position - 0x2B05F
{
	Global_113386.f_19973.f_3++;
	Global_113386.f_19973.f_2 = iLocal_171;
	switch (iLocal_171)
	{
		case 2:
			Global_113386.f_19973.f_4++;
			break;
		case 3:
			Global_113386.f_19973.f_7++;
			break;
		case 0:
			Global_113386.f_19973.f_6++;
			break;
		case 1:
			Global_113386.f_19973.f_5++;
			break;
		case 4:
			Global_113386.f_19973.f_8++;
			break;
	}
}

void func_641()//Position - 0x2B279
{
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 71 /*INPUT_VEH_ACCELERATE*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 72 /*INPUT_VEH_BRAKE*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 76 /*INPUT_VEH_HANDBRAKE*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 73 /*INPUT_VEH_DUCK*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 59 /*INPUT_VEH_MOVE_LR*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 60 /*INPUT_VEH_MOVE_UD*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 80 /*INPUT_VEH_CIN_CAM*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 69 /*INPUT_VEH_ATTACK*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 70 /*INPUT_VEH_ATTACK2*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 68 /*INPUT_VEH_AIM*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 74 /*INPUT_VEH_HEADLIGHT*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 86 /*INPUT_VEH_HORN*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 81 /*INPUT_VEH_NEXT_RADIO*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 82 /*INPUT_VEH_PREV_RADIO*/, true);
}

void func_642()//Position - 0x2B511
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false) && !ENTITY::IS_ENTITY_DEAD(iLocal_674, false))
	{
		if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_674, false))
		{
			if (HUD::DOES_BLIP_EXIST(iLocal_559))
			{
				HUD::REMOVE_BLIP(&iLocal_559);
			}
			if (!HUD::DOES_BLIP_EXIST(iLocal_557))
			{
				iLocal_557 = HUD::ADD_BLIP_FOR_ENTITY(iLocal_674);
				HUD::SET_BLIP_COLOUR(iLocal_557, 3);
			}
		}
		else
		{
			if (!HUD::DOES_BLIP_EXIST(iLocal_559))
			{
				__LIB_38__::func_603(iLocal_559);
				iLocal_559 = HUD::ADD_BLIP_FOR_COORD(406.3804f, -1635.8673f, 28.2928f);
				HUD::SET_BLIP_ROUTE(iLocal_559, true);
			}
			if (HUD::DOES_BLIP_EXIST(iLocal_557))
			{
				HUD::REMOVE_BLIP(&iLocal_557);
			}
		}
	}
}

void func_643()//Position - 0x2C1B4
{
	struct<3> Var0;
	int iVar1;
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
	}
	if (iLocal_171 == 0)
	{
		if (SYSTEM::VDIST2(Var0, Local_394[iLocal_451 /*23*/].f_1) > 22500f)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_565[0 /*20*/]) && !ENTITY::IS_ENTITY_DEAD(Local_565[0 /*20*/], false))
			{
				if (ENTITY::IS_ENTITY_OCCLUDED(Local_565[0 /*20*/]))
				{
					PED::DELETE_PED(&(Local_565[0 /*20*/]));
				}
				else
				{
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_565[0 /*20*/]));
				}
			}
			STREAMING::REMOVE_ANIM_DICT("oddjobs@towing");
			STREAMING::REMOVE_ANIM_DICT("oddjobs@towingangryidle_a");
			STREAMING::REMOVE_ANIM_DICT("oddjobs@towingpleadingidle_b");
			STREAMING::REMOVE_ANIM_DICT("oddjobs@towingpleadingidle_a");
			STREAMING::REMOVE_ANIM_DICT("RANDOM@BICYCLE_THIEF@IDLE_A");
			STREAMING::REMOVE_ANIM_DICT("move_m@JOG@");
		}
	}
	else if (iLocal_171 == 1)
	{
		if (SYSTEM::VDIST2(Var0, Local_394[iLocal_451 /*23*/].f_1) > 22500f)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_555) && !ENTITY::IS_ENTITY_DEAD(iLocal_555, false))
			{
				if (ENTITY::IS_ENTITY_OCCLUDED(iLocal_555))
				{
					PED::DELETE_PED(&iLocal_555);
				}
				else
				{
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_555);
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_565[0 /*20*/].f_7) && !ENTITY::IS_ENTITY_DEAD(Local_565[0 /*20*/].f_7, false))
			{
				if (ENTITY::IS_ENTITY_OCCLUDED(Local_565[0 /*20*/].f_7))
				{
					VEHICLE::DELETE_MISSION_TRAIN(&(Local_565[0 /*20*/].f_7));
				}
				else
				{
					VEHICLE::SET_VEHICLE_STAYS_FROZEN_WHEN_CLEANED_UP(Local_565[0 /*20*/].f_7, true);
					VEHICLE::SET_MISSION_TRAIN_AS_NO_LONGER_NEEDED(&(Local_565[0 /*20*/].f_7), false);
				}
			}
		}
	}
	else if (iLocal_171 == 4)
	{
		iVar1 = 0;
		while (iVar1 < 2)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_565[0 /*20*/].f_2[iVar1]) && !ENTITY::IS_ENTITY_DEAD(Local_565[0 /*20*/].f_2[iVar1], false))
			{
				if (ENTITY::IS_ENTITY_OCCLUDED(Local_565[0 /*20*/].f_2[iVar1]))
				{
					PED::DELETE_PED(&(Local_565[0 /*20*/].f_2[iVar1]));
				}
				else
				{
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_565[0 /*20*/].f_2[iVar1]));
				}
			}
			iVar1++;
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_676))
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_676);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_675))
		{
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_675);
		}
		STREAMING::REMOVE_ANIM_DICT("REACTION@MALE_STAND@BIG_VARIATIONS@A");
		STREAMING::REMOVE_ANIM_DICT("move_m@JOG@");
	}
}

int func_644()//Position - 0x2C64C
{
	if (bLocal_505)
	{
		if (bLocal_449)
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

void func_645(int iParam0, var uParam1)//Position - 0x2CB6F
{
	if (__LIB_0__::func_86(Local_46[0 /*3*/]))
	{
	}
	switch (iParam0)
	{
		case 0:
			*uParam1 = { -230.85141f, -1181.0723f, 21.06031f };
			uParam1->f_3 = { -230.46584f, -1163.1604f, 28.996408f };
			uParam1->f_6 = 22.25f;
			uParam1->f_17 = { Local_46[0 /*3*/] };
			break;
		case 1:
			*uParam1 = { -204.06029f, -1390.0239f, 30.253416f };
			uParam1->f_3 = { -207.56654f, -1382.5823f, 33.469368f };
			uParam1->f_6 = 17f;
			uParam1->f_17 = { Local_46[1 /*3*/] };
			break;
		case 2:
			*uParam1 = { -204.06029f, -1390.0239f, 30.253416f };
			uParam1->f_3 = { -207.56654f, -1382.5823f, 33.469368f };
			uParam1->f_6 = 17f;
			uParam1->f_17 = { Local_46[2 /*3*/] };
			break;
		case 3:
			*uParam1 = { 538.747f, -177.535f, 74.484f };
			uParam1->f_3 = { 528.747f, -177.535f, 34.484f };
			uParam1->f_6 = 28f;
			uParam1->f_17 = { Local_46[3 /*3*/] };
			break;
		case 4:
			*uParam1 = { 1158.944f, -776.686f, 77.608f };
			uParam1->f_3 = { 1118.944f, -776.686f, 37.608f };
			uParam1->f_6 = 10f;
			uParam1->f_17 = { Local_46[4 /*3*/] };
			break;
		case 5:
			*uParam1 = { 798.455f, -821.201f, 46.186f };
			uParam1->f_3 = { 813.455f, -821.201f, 6.186f };
			uParam1->f_6 = 20f;
			uParam1->f_17 = { Local_46[5 /*3*/] };
			break;
		case 6:
			*uParam1 = { 2504.934f, 4085.125f, 58.636f };
			uParam1->f_3 = { 2500.285f, 4075.156f, 18.636f };
			uParam1->f_6 = 12f;
			uParam1->f_17 = { Local_46[6 /*3*/] };
			break;
		case 7:
			*uParam1 = { 256.56226f, 2600.4578f, 43.3306f };
			uParam1->f_3 = { 268.67007f, 2602.716f, 46.74961f };
			uParam1->f_6 = 5f;
			uParam1->f_17 = { Local_46[7 /*3*/] };
			break;
		case 8:
			*uParam1 = { 398.74713f, -1650.8059f, 27.293236f };
			uParam1->f_3 = { 434.1311f, -1610.0115f, 33.342937f };
			uParam1->f_6 = 40.5f;
			uParam1->f_14 = { 400.28537f, -1632.597f, 28.29278f };
			uParam1->f_17 = { Local_47[0 /*3*/] };
			uParam1->f_7 = { 396.83475f, -1639.0447f, 27.292776f };
			uParam1->f_10 = { 408.0073f, -1625.6083f, 33.292774f };
			uParam1->f_13 = 10f;
			break;
	}
}

void func_646()//Position - 0x2CE4F
{
	struct<3> Var0;
	struct<3> Var1;
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
	}
	if (!ENTITY::IS_ENTITY_DEAD(Local_565[0 /*20*/].f_6, false))
	{
		Var1 = { ENTITY::GET_ENTITY_COORDS(Local_565[0 /*20*/].f_6, true) };
	}
	if (SYSTEM::VDIST2(Var0, Var1) < 100f)
	{
		if (!iLocal_553)
		{
			if (HUD::DOES_BLIP_EXIST(Local_565[0 /*20*/].f_8))
			{
				HUD::REMOVE_BLIP(&(Local_565[0 /*20*/].f_8));
				iLocal_553 = 1;
			}
		}
		if (!HUD::DOES_BLIP_EXIST(Local_565[0 /*20*/].f_8))
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_565[0 /*20*/].f_6))
			{
				Local_565[0 /*20*/].f_8 = HUD::ADD_BLIP_FOR_ENTITY(Local_565[0 /*20*/].f_6);
				HUD::SET_BLIP_COLOUR(Local_565[0 /*20*/].f_8, 3);
				HUD::SET_BLIP_ROUTE(Local_565[0 /*20*/].f_8, true);
			}
		}
	}
}

void func_647(int iParam0)//Position - 0x2D6FC
{
	int iVar0;
	bLocal_504 = true;
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (iVar0 != iParam0)
		{
			if (HUD::DOES_BLIP_EXIST(Local_565[iVar0 /*20*/].f_8))
			{
				HUD::REMOVE_BLIP(&(Local_565[iVar0 /*20*/].f_8));
			}
		}
		iVar0++;
	}
}

int func_648()//Position - 0x2D73E
{
	float fVar0;
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_674, false) && !ENTITY::IS_ENTITY_DEAD(Local_565[0 /*20*/].f_6, false))
	{
		if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(iLocal_674, Local_565[0 /*20*/].f_6))
		{
			fVar0 = ENTITY::GET_ENTITY_SPEED(iLocal_674);
			if (fVar0 > 1f)
			{
				if (!iLocal_550)
				{
					__LIB_0__::func_151("TOWT_HELP_SL", -1);
					iLocal_550 = 1;
				}
				return 1;
			}
		}
	}
	return 0;
}

int func_649(var uParam0, struct<3> Param1, float fParam2)//Position - 0x2D8EB
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	iVar1 = 0;
	fVar2 = 1E+09f;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (!__LIB_0__::func_86(*(uParam0[iVar0 /*3*/])))
		{
			fVar3 = SYSTEM::VDIST2(*(uParam0[iVar0 /*3*/]), Param1);
			if (fVar3 < fVar2 && fVar3 > fParam2)
			{
				fVar2 = fVar3;
				iVar1 = iVar0;
			}
		}
		iVar0++;
	}
	if (iVar1 == -1)
	{
	}
	return iVar1;
}

int func_650(int iParam0)//Position - 0x2E022
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if ((iParam0[iVar0 /*20*/])->f_6 == 0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_651(int iParam0, var uParam1, var uParam2)//Position - 0x2E04E
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		*uParam1 = ENTITY::GET_ENTITY_HEALTH(iParam0);
		*uParam2 = *uParam1;
	}
}

void func_652(var uParam0, char* sParam1, int iParam2, bool bParam3)//Position - 0x2E74A
{
	var uVar0;
	if (bParam3)
	{
		MISC::SET_BIT(&uVar0, 26);
	}
	__LIB_14__::func_576(uParam0, 8, iParam2, sParam1, uVar0);
}

void func_653()//Position - 0x2E88A
{
	if (iLocal_171 == 2)
	{
		STREAMING::REQUEST_MODEL(joaat("primo"));
	}
	else if (iLocal_171 == 0)
	{
		STREAMING::REQUEST_MODEL(joaat("landstalker"));
		STREAMING::REQUEST_MODEL(joaat("A_M_M_GenFat_01"));
	}
	else if (iLocal_171 == 1)
	{
		STREAMING::REQUEST_MODEL(joaat("schwarzer"));
		STREAMING::REQUEST_MODEL(joaat("A_M_M_BevHills_02"));
	}
	else if (iLocal_171 == 3)
	{
		STREAMING::REQUEST_MODEL(joaat("tailgater"));
		STREAMING::REQUEST_MODEL(joaat("A_M_M_Tourist_01"));
	}
	else if (iLocal_171 == 4)
	{
		STREAMING::REQUEST_MODEL(joaat("intruder"));
		STREAMING::REQUEST_MODEL(joaat("S_M_M_Paramedic_01"));
		STREAMING::REQUEST_MODEL(joaat("A_M_Y_GenStreet_02"));
		STREAMING::REQUEST_MODEL(joaat("A_M_M_BevHills_02"));
	}
	if (iLocal_171 == 2)
	{
		while (!STREAMING::HAS_MODEL_LOADED(joaat("primo")))
		{
			SYSTEM::WAIT(0);
		}
	}
	else if (iLocal_171 == 0)
	{
		while (!STREAMING::HAS_MODEL_LOADED(joaat("landstalker")) || !STREAMING::HAS_MODEL_LOADED(joaat("A_M_M_GenFat_01")))
		{
			SYSTEM::WAIT(0);
		}
	}
	else if (iLocal_171 == 1)
	{
		while (!STREAMING::HAS_MODEL_LOADED(joaat("schwarzer")) || !STREAMING::HAS_MODEL_LOADED(joaat("A_M_M_BevHills_02")))
		{
			SYSTEM::WAIT(0);
		}
	}
	else if (iLocal_171 == 3)
	{
		while (!STREAMING::HAS_MODEL_LOADED(joaat("tailgater")) || !STREAMING::HAS_MODEL_LOADED(joaat("A_M_M_Tourist_01")))
		{
			SYSTEM::WAIT(0);
		}
	}
	else if (iLocal_171 == 4)
	{
		while (((!STREAMING::HAS_MODEL_LOADED(joaat("intruder")) || !STREAMING::HAS_MODEL_LOADED(joaat("S_M_M_Paramedic_01"))) || !STREAMING::HAS_MODEL_LOADED(joaat("A_M_Y_GenStreet_02"))) || !STREAMING::HAS_MODEL_LOADED(joaat("A_M_M_BevHills_02")))
		{
			SYSTEM::WAIT(0);
		}
	}
}

int func_654(var uParam0, float* fParam1, var* uParam2, var uParam3)//Position - 0x354C3
{
	struct<3> Var0;
	var uVar1;
	var uVar2;
	struct<3> Var3;
	float fVar4;
	float fVar5;
	int iVar6;
	fVar4 = 0f;
	fVar5 = 0f;
	iVar6 = (MISC::GET_RANDOM_INT_IN_RANGE(0, 3999) / 1000);
	if (iVar6 == 0)
	{
		fVar4 = -MISC::GET_RANDOM_FLOAT_IN_RANGE(450f, 700f);
		fVar5 = MISC::GET_RANDOM_FLOAT_IN_RANGE(-100f, 100f);
	}
	else if (iVar6 == 1)
	{
		fVar4 = MISC::GET_RANDOM_FLOAT_IN_RANGE(450f, 700f);
		fVar5 = MISC::GET_RANDOM_FLOAT_IN_RANGE(100f, 100f);
	}
	else if (iVar6 == 2)
	{
		fVar5 = MISC::GET_RANDOM_FLOAT_IN_RANGE(450f, 700f);
		fVar4 = MISC::GET_RANDOM_FLOAT_IN_RANGE(-100f, 100f);
	}
	else
	{
		fVar5 = -MISC::GET_RANDOM_FLOAT_IN_RANGE(450f, 700f);
		fVar4 = MISC::GET_RANDOM_FLOAT_IN_RANGE(-100f, 100f);
	}
	Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), fVar4, fVar5, 0f) };
	if (!PATHFIND::GET_RANDOM_VEHICLE_NODE(Var0, 10f, true, true, true, &Var3, &uVar2))
	{
		return 0;
	}
	PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_WITH_HEADING(Var3, 2, uParam2, fParam1, &uVar1, 1, 3f, 0f);
	*uParam0 = { Var3 };
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("tonya4")) == 1)
	{
		*uParam0 = { -476.1537f, 132.6556f, 62.9586f };
		*fParam1 = 87.951f;
	}
	if (__LIB_0__::func_78(*uParam0, 0f, 0f, 0f, 0))
	{
		return 0;
	}
	return 1;
}

void func_655()//Position - 0x3B7A0
{
	VEHICLE::SET_RANDOM_TRAINS(false);
	__LIB_0__::func_62(0, 0);
	__LIB_0__::func_62(1, 0);
	__LIB_0__::func_62(2, 0);
	__LIB_0__::func_62(3, 0);
	__LIB_0__::func_62(4, 0);
	__LIB_0__::func_62(5, 0);
	__LIB_0__::func_62(6, 0);
	__LIB_0__::func_62(7, 0);
	__LIB_0__::func_62(8, 0);
	__LIB_0__::func_62(9, 0);
	__LIB_0__::func_62(10, 0);
	__LIB_0__::func_62(11, 0);
}

int func_656(bool bParam0)//Position - 0x3CB79
{
	if (bLocal_216 || iLocal_215)
	{
		return 0;
	}
	if (bParam0)
	{
		if (bLocal_217)
		{
			return 0;
		}
	}
	return 1;
}

int func_657()//Position - 0x3DDD7
{
	if (!ENTITY::IS_ENTITY_DEAD(Local_565[0 /*20*/], false))
	{
		if (bLocal_178)
		{
			switch (iLocal_601)
			{
				case 0:
					if (TASK::GET_SEQUENCE_PROGRESS(Local_565[0 /*20*/]) == 1)
					{
						iLocal_601 = 1;
					}
					break;
				case 1:
					if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_565[0 /*20*/], "oddjobs@towingpleadingidle_b", "idle_d", 3))
					{
						iLocal_601 = 2;
					}
					break;
				case 2:
					return 1;
					break;
				}
			}
	}
	return 0;
}

void func_658(int iParam0)//Position - 0x3DE4A
{
	iParam0->f_1 = 0;
	CAM::DESTROY_CAM(*iParam0, false);
	CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
}

void func_659(var uParam0)//Position - 0x3E427
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if ((*uParam0)[iVar0] != 0)
		{
			GRAPHICS::STOP_PARTICLE_FX_LOOPED((*uParam0)[iVar0], false);
			(*uParam0)[iVar0] = 0;
		}
		iVar0++;
	}
}

void func_660(var uParam0, int iParam1)//Position - 0x3E45E
{
	(*uParam0)[0] = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_ojtt_train_sparks", iParam1, -0.771f, 6.515f, -1.507f, 0f, 0f, -20f, 1.15f, true, false, false);
	(*uParam0)[1] = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_ojtt_train_sparks", iParam1, 0.771f, 6.515f, -1.507f, 0f, 0f, 20f, 1.15f, false, false, false);
	(*uParam0)[2] = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_ojtt_train_sparks", iParam1, -0.771f, 3.781f, -1.507f, 0f, 0f, -20f, 1.15f, true, false, false);
	(*uParam0)[3] = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_ojtt_train_sparks", iParam1, 0.771f, 3.781f, -1.507f, 0f, 0f, 20f, 1.15f, false, false, false);
	(*uParam0)[4] = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_ojtt_train_sparks", iParam1, -0.771f, -3.743f, -1.507f, 0f, 0f, -20f, 1.15f, true, false, false);
	(*uParam0)[5] = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_ojtt_train_sparks", iParam1, 0.7711f, -3.743f, -1.507f, 0f, 0f, 20f, 1.15f, false, false, false);
	(*uParam0)[6] = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_ojtt_train_sparks", iParam1, -0.771f, -6.537f, -1.507f, 0f, 0f, -20f, 1.15f, true, false, false);
	(*uParam0)[7] = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_ojtt_train_sparks", iParam1, 0.771f, -6.537f, -1.507f, 0f, 0f, 20f, 1.15f, false, false, false);
}

void func_661()//Position - 0x3E65B
{
	if (!ENTITY::IS_ENTITY_DEAD(Local_565[0 /*20*/].f_7, false) && !ENTITY::IS_ENTITY_DEAD(Local_565[0 /*20*/].f_6, false))
	{
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(Local_565[0 /*20*/].f_7, Local_565[0 /*20*/].f_6))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_674, false) && !ENTITY::IS_ENTITY_DEAD(Local_565[0 /*20*/].f_6, false))
			{
				if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(iLocal_674, Local_565[0 /*20*/].f_6))
				{
					VEHICLE::DETACH_VEHICLE_FROM_TOW_TRUCK(iLocal_674, Local_565[0 /*20*/].f_6);
				}
			}
			VEHICLE::EXPLODE_VEHICLE(Local_565[0 /*20*/].f_6, true, false);
		}
	}
}

void func_662(struct<165> Param0, char* sParam1, char* sParam2, bool bParam3)//Position - 0x3F0B5
{
	if (bParam3)
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
	}
	StringCopy(&cLocal_64, sParam1, 16);
	StringCopy(&cLocal_67, sParam2, 16);
	Local_52 = { Param0 };
}

int func_663(int iParam0, int iParam1, int iParam2)//Position - 0x3F260
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (Local_70[iVar0 /*3*/] == iParam0 && !HUD::DOES_BLIP_EXIST(Local_70[iVar0 /*3*/].f_1))
		{
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (!HUD::DOES_BLIP_EXIST(Local_70[iVar0 /*3*/].f_1))
		{
			Local_70[iVar0 /*3*/] = iParam0;
			Local_70[iVar0 /*3*/].f_1 = iParam1;
			Local_70[iVar0 /*3*/].f_2 = iParam2;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_664(int iParam0)//Position - 0x3F2E3
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
		{
			PED::SET_PED_COMBAT_ABILITY(iParam0, 1);
			PED::SET_PED_COMBAT_RANGE(iParam0, 1);
			PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 23, false);
			PED::SET_PED_COMBAT_MOVEMENT(iParam0, 2);
			WEAPON::GIVE_WEAPON_TO_PED(iParam0, joaat("WEAPON_MICROSMG"), 1000, true, true);
			PED::SET_PED_SHOOT_RATE(iParam0, 500);
		}
	}
}

void func_665(char* sParam0)//Position - 0x3FA64
{
	SYSTEM::SETTIMERA(0);
	__LIB_0__::func_151(sParam0, -1);
}

void func_666(struct<7> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14, int iParam15)//Position - 0x3FA78
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam14) || !ENTITY::DOES_ENTITY_EXIST(iParam15))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam14, false) || ENTITY::IS_ENTITY_DEAD(iParam15, false))
	{
		return;
	}
	if (!__LIB_0__::func_86(Param0.f_14))
	{
		Var0 = { Param0.f_7 };
		Var1 = { Param0.f_10 };
		fVar2 = Param0.f_13;
	}
	else
	{
		Var0 = { Param0 };
		Var1 = { Param0.f_3 };
		fVar2 = Param0.f_6;
	}
	if (!iLocal_194)
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam15, Var0, Var1, fVar2, false, true, 0))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iParam14, false) && !ENTITY::IS_ENTITY_DEAD(iParam15, false))
			{
				if (!VEHICLE::IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(iParam14, iParam15))
				{
					HUD::CLEAR_HELP(true);
					HUD::CLEAR_PRINTS();
					iLocal_448 = 12;
					iLocal_194 = 1;
				}
			}
		}
	}
}

void func_667()//Position - 0x3FD1F
{
	if (iLocal_681 < 16)
	{
		switch (iLocal_625)
		{
			case 2:
				sLocal_455 = "TOW_FAIL_05";
				break;
			case 0:
				sLocal_455 = "TOW_FAIL_10";
				break;
			case 6:
				sLocal_455 = "DTRSHRD_FAIL_03";
				break;
			case 1:
				sLocal_455 = "TOW_FAIL_08";
				break;
			case 10:
				sLocal_455 = "TOW_FAIL_17";
				break;
			case 11:
				sLocal_455 = "TOW_FAIL_08";
				break;
			case 12:
				sLocal_455 = "TOW_FAIL_08a";
				break;
			case 13:
				sLocal_455 = "TOW_FAIL_16";
				break;
			case 4:
				sLocal_455 = "TOW_FAIL_12";
				break;
			case 5:
				sLocal_455 = "TOW_FAIL_01";
				break;
			case 3:
				sLocal_455 = "TOW_FAIL_03a";
				break;
			case 8:
				sLocal_455 = "TOW_FAIL_04";
				break;
			case 9:
				sLocal_455 = "TOW_FAIL_04a";
				break;
			case 14:
				sLocal_455 = "TOW_FAIL_06";
				break;
			case 15:
				sLocal_455 = "TOW_FAIL_07";
				break;
			case 16:
				sLocal_455 = "TOW_FAIL_09";
				break;
			case 17:
				sLocal_455 = "TOW_FAIL_09a";
				break;
			case 18:
				sLocal_455 = "TOW_FAIL_02";
				break;
			case 19:
				sLocal_455 = "TOW_FAIL_02b";
				break;
			case 20:
				sLocal_455 = "TOW_FAIL_02b";
				break;
			case 21:
				sLocal_455 = "TOW_FAIL_11";
				break;
			case 22:
				sLocal_455 = "TOW_FAIL_13";
				break;
			case 23:
				sLocal_455 = "TOW_FAIL_14";
				break;
		}
		if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			sLocal_455 = "TOW_FAIL_15";
		}
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_455))
		{
			__LIB_0__::func_381(sLocal_455);
		}
		bLocal_480 = true;
	}
}

int func_668(var uParam0)//Position - 0x40580
{
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				if (PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false) != *uParam0)
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

void func_669(var uParam0)//Position - 0x405D5
{
	if (*uParam0 != 0)
	{
		if (!uParam0->f_7)
		{
			if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(*uParam0))
			{
				OBJECT::REMOVE_DOOR_FROM_SYSTEM(*uParam0, 0);
			}
		}
	}
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0f;
	uParam0->f_3 = 0f;
	uParam0->f_4 = 0;
	uParam0->f_6 = 0;
	uParam0->f_5 = 0;
	uParam0->f_7 = 0;
}

void func_670(var uParam0, bool bParam1, float fParam2, int iParam3)//Position - 0x4062E
{
	if (*uParam0 != 0)
	{
		if (iParam3 <= 0)
		{
			if (fParam2 != 99.9f)
			{
				OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(*uParam0, fParam2, false, true);
			}
			if (bParam1)
			{
				OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(*uParam0, 1, false, true);
			}
			else
			{
				OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(*uParam0, 0, false, true);
			}
			uParam0->f_6 = 0;
			uParam0->f_5 = 0;
		}
		else if (fParam2 != 99.9f)
		{
			uParam0->f_1 = 1;
			uParam0->f_4 = bParam1;
			uParam0->f_2 = fParam2;
			uParam0->f_6 = MISC::GET_GAME_TIMER();
			uParam0->f_5 = iParam3;
			uParam0->f_3 = OBJECT::DOOR_SYSTEM_GET_OPEN_RATIO(*uParam0);
		}
	}
}

void func_671()//Position - 0x406BA
{
	switch (iLocal_171)
	{
		case 2:
			if ((Global_113386.f_19973.f_4 % 2) == 0)
			{
				sLocal_459 = "TOWABDBITCHM";
				iLocal_599 = 2;
			}
			else
			{
				sLocal_459 = "TOWABDATTACKM";
				iLocal_599 = 2;
			}
			break;
		case 4:
			break;
		case 3:
			sLocal_459 = "TOWBREAKDOWN1";
			iLocal_599 = 3;
			break;
		case 0:
			sLocal_459 = "TOWHANDIBEGM";
			iLocal_599 = 5;
			break;
		case 1:
			sLocal_459 = "TOWTRAINM";
			iLocal_599 = 3;
			break;
	}
}

int func_672()//Position - 0x40743
{
	return Local_394[iLocal_451 /*23*/].f_22;
}

void func_673()//Position - 0x408D6
{
	Local_46[0 /*3*/] = { -227.6f, -1172.1f, 21.8963f };
	Local_46[1 /*3*/] = { -205.6866f, -1384.3333f, 30.2585f };
	Local_46[2 /*3*/] = { -205.6866f, -1384.3333f, 30.2585f };
	Local_46[3 /*3*/] = { 532.4957f, -172.2088f, 53.6835f };
	Local_46[4 /*3*/] = { 1151.5066f, -773.4066f, 56.61f };
	Local_46[5 /*3*/] = { 808.4329f, -822.9456f, 25.1821f };
	Local_46[6 /*3*/] = { 2502.613f, 4080.141f, 37.6307f };
	Local_46[7 /*3*/] = { 263.4725f, 2601.8423f, 43.8197f };
	Local_47[0 /*3*/] = { 401.6046f, -1632.7806f, 28.2928f };
}

void func_674(var uParam0)//Position - 0x409A4
{
	*(uParam0[0 /*28*/][0 /*3*/]) = { 568.8983f, -1698.723f, 28.2631f };
	*(uParam0[0 /*28*/][1 /*3*/]) = { 575.1474f, -1697.5486f, 28.2631f };
	*(uParam0[0 /*28*/][2 /*3*/]) = { 584.8786f, -1703.8748f, 28.2631f };
	(uParam0[0 /*28*/])->f_27 = 3;
	(uParam0[0 /*28*/])->f_23 = { 565.9069f, -1702.8134f, 28.2227f };
	(uParam0[0 /*28*/])->f_26 = 58.4094f;
	(uParam0[0 /*28*/])->f_17 = { 564.5385f, -1689.7069f, 38.2854f };
	(uParam0[0 /*28*/])->f_20 = { 605.4141f, -1715.2214f, 18.0923f };
	*(uParam0[1 /*28*/][0 /*3*/]) = { 240.0033f, -1141.4331f, 28.3033f };
	*(uParam0[1 /*28*/][1 /*3*/]) = { 240.5303f, -1137.7504f, 28.3091f };
	*(uParam0[1 /*28*/][2 /*3*/]) = { 229.8743f, -1145.7627f, 28.3013f };
	(uParam0[1 /*28*/])->f_27 = 3;
	(uParam0[1 /*28*/])->f_23 = { 239.0778f, -1134.1409f, 28.2367f };
	(uParam0[1 /*28*/])->f_26 = 266.7983f;
	(uParam0[1 /*28*/])->f_17 = { 242.7403f, -1124.7528f, 38.3223f };
	(uParam0[1 /*28*/])->f_20 = { 225.7671f, -1152.415f, 18.2047f };
	(uParam0[1 /*28*/])->f_10[0 /*3*/] = { 232.3824f, -1137.8553f, 28.1944f };
	(uParam0[1 /*28*/])->f_10[1 /*3*/] = { 230.8579f, -1136.2522f, 28.0348f };
	*(uParam0[2 /*28*/][0 /*3*/]) = { -95.1473f, -1716.6565f, 28.4491f };
	*(uParam0[2 /*28*/][1 /*3*/]) = { -93.1677f, -1717.8398f, 28.4239f };
	(uParam0[2 /*28*/])->f_27 = 2;
	(uParam0[2 /*28*/])->f_23 = { -102.9092f, -1729.668f, 28.7511f };
	(uParam0[2 /*28*/])->f_26 = 105.1153f;
	(uParam0[2 /*28*/])->f_10[0 /*3*/] = { -99.8953f, -1726.702f, 28.4622f };
	(uParam0[2 /*28*/])->f_10[1 /*3*/] = { -101.1025f, -1728.6892f, 28.6286f };
	*(uParam0[3 /*28*/][0 /*3*/]) = { -117.7085f, -1321.0688f, 28.2857f };
	*(uParam0[3 /*28*/][1 /*3*/]) = { -116.6308f, -1325.3618f, 28.3192f };
	(uParam0[3 /*28*/])->f_27 = 2;
	(uParam0[3 /*28*/])->f_23 = { -112.3024f, -1329.2186f, 28.2685f };
	(uParam0[3 /*28*/])->f_26 = 179.9845f;
	(uParam0[3 /*28*/])->f_10[0 /*3*/] = { -113.1683f, -1319.4591f, 28.2125f };
	(uParam0[3 /*28*/])->f_10[1 /*3*/] = { -112.2886f, -1322.4221f, 28.2633f };
	*(uParam0[4 /*28*/][0 /*3*/]) = { 308.2367f, -1706.0255f, 28.3827f };
	*(uParam0[4 /*28*/][1 /*3*/]) = { 298.1392f, -1700.7681f, 28.3234f };
	(uParam0[4 /*28*/])->f_27 = 2;
	(uParam0[4 /*28*/])->f_23 = { 314.1078f, -1704.3053f, 28.3111f };
	(uParam0[4 /*28*/])->f_26 = 227.316f;
	(uParam0[4 /*28*/])->f_10[0 /*3*/] = { 304.5671f, -1697.5216f, 28.2629f };
	(uParam0[4 /*28*/])->f_10[1 /*3*/] = { 308.3995f, -1699.6951f, 28.3051f };
	*(uParam0[5 /*28*/][0 /*3*/]) = { 776.3322f, -2046.0779f, 28.2818f };
	*(uParam0[5 /*28*/][1 /*3*/]) = { 776.0253f, -2048.3916f, 28.2653f };
	(uParam0[5 /*28*/])->f_27 = 2;
	(uParam0[5 /*28*/])->f_23 = { 787.8897f, -2034.5416f, 28.2393f };
	(uParam0[5 /*28*/])->f_26 = 348.1702f;
	(uParam0[5 /*28*/])->f_10[0 /*3*/] = { 782.5989f, -2047.4797f, 28.159f };
	(uParam0[5 /*28*/])->f_10[1 /*3*/] = { 783.3265f, -2051.1829f, 28.1589f };
	*(uParam0[6 /*28*/][0 /*3*/]) = { 28.2787f, -986.7457f, 28.5094f };
	*(uParam0[6 /*28*/][1 /*3*/]) = { 35.6153f, -988.3468f, 28.4971f };
	*(uParam0[6 /*28*/][2 /*3*/]) = { 38.553f, -985.1667f, 28.5576f };
	(uParam0[6 /*28*/])->f_27 = 3;
	(uParam0[6 /*28*/])->f_23 = { 43.6799f, -982.0863f, 28.4103f };
	(uParam0[6 /*28*/])->f_26 = 251.1427f;
	(uParam0[6 /*28*/])->f_10[0 /*3*/] = { 30.5244f, -980.0237f, 28.4037f };
	(uParam0[6 /*28*/])->f_10[1 /*3*/] = { 34.0509f, -979.3044f, 28.4079f };
	*(uParam0[7 /*28*/][0 /*3*/]) = { 99.1579f, -1521.9631f, 28.3247f };
	*(uParam0[7 /*28*/][1 /*3*/]) = { 105.699f, -1527.331f, 28.3186f };
	(uParam0[7 /*28*/])->f_27 = 2;
	(uParam0[7 /*28*/])->f_23 = { 95.4077f, -1529.4733f, 28.3325f };
	(uParam0[7 /*28*/])->f_26 = 51.3731f;
	(uParam0[7 /*28*/])->f_10[0 /*3*/] = { 100.3829f, -1529.7828f, 28.2238f };
	(uParam0[7 /*28*/])->f_10[1 /*3*/] = { 97.5322f, -1531.5796f, 28.3374f };
	*(uParam0[8 /*28*/][0 /*3*/]) = { 370.2508f, -871.9623f, 28.2916f };
	*(uParam0[8 /*28*/][1 /*3*/]) = { 364.377f, -872.4929f, 28.2916f };
	(uParam0[8 /*28*/])->f_27 = 2;
	(uParam0[8 /*28*/])->f_23 = { 370.0709f, -865.2366f, 28.2507f };
	(uParam0[8 /*28*/])->f_26 = 271.3831f;
	(uParam0[8 /*28*/])->f_10[0 /*3*/] = { 363.9474f, -865.3307f, 28.2621f };
	(uParam0[8 /*28*/])->f_10[1 /*3*/] = { 361.2415f, -866.9158f, 28.1908f };
	*(uParam0[9 /*28*/][0 /*3*/]) = { 258.1324f, -2035.0984f, 17.2524f };
	*(uParam0[9 /*28*/][1 /*3*/]) = { 263.1343f, -2026.3652f, 17.7171f };
	(uParam0[9 /*28*/])->f_27 = 2;
	(uParam0[9 /*28*/])->f_23 = { 260.0068f, -2041.8058f, 16.9454f };
	(uParam0[9 /*28*/])->f_26 = 140.9065f;
	(uParam0[9 /*28*/])->f_10[0 /*3*/] = { 264.5263f, -2036.1978f, 17.2682f };
	(uParam0[9 /*28*/])->f_10[1 /*3*/] = { 264.3815f, -2032.3785f, 17.329f };
	*(uParam0[10 /*28*/][0 /*3*/]) = { 411.4076f, -1869.4333f, 25.5691f };
	*(uParam0[10 /*28*/][1 /*3*/]) = { 416.1884f, -1862.589f, 26.0458f };
	(uParam0[10 /*28*/])->f_27 = 2;
	(uParam0[10 /*28*/])->f_23 = { 412.9648f, -1876.9008f, 25.3104f };
	(uParam0[10 /*28*/])->f_26 = 135.5291f;
	(uParam0[10 /*28*/])->f_10[0 /*3*/] = { 418.299f, -1872.5396f, 25.6552f };
	(uParam0[10 /*28*/])->f_10[1 /*3*/] = { 419.0923f, -1869.0394f, 25.6907f };
	*(uParam0[11 /*28*/][0 /*3*/]) = { 500.9577f, -1664.8811f, 28.7134f };
	*(uParam0[11 /*28*/][1 /*3*/]) = { 501.1261f, -1668.809f, 28.7152f };
	(uParam0[11 /*28*/])->f_27 = 2;
	(uParam0[11 /*28*/])->f_23 = { 503.8388f, -1661.2373f, 28.4841f };
	(uParam0[11 /*28*/])->f_26 = 50.8842f;
	(uParam0[11 /*28*/])->f_10[0 /*3*/] = { 507.0525f, -1670.2535f, 28.7152f };
	(uParam0[11 /*28*/])->f_10[1 /*3*/] = { 507.7841f, -1665.1162f, 28.4902f };
	*(uParam0[12 /*28*/][0 /*3*/]) = { -208.9247f, -660.1125f, 32.629f };
	*(uParam0[12 /*28*/][1 /*3*/]) = { -204.0615f, -660.8978f, 32.7011f };
	*(uParam0[12 /*28*/][2 /*3*/]) = { -198.1905f, -664.2867f, 32.8159f };
	(uParam0[12 /*28*/])->f_27 = 3;
	(uParam0[12 /*28*/])->f_23 = { -213.0429f, -666.7334f, 32.6039f };
	(uParam0[12 /*28*/])->f_26 = 70.1131f;
	(uParam0[12 /*28*/])->f_10[0 /*3*/] = { -210.6179f, -667.8796f, 32.6494f };
	(uParam0[12 /*28*/])->f_10[1 /*3*/] = { -204.9018f, -667.8836f, 32.6425f };
	*(uParam0[13 /*28*/][0 /*3*/]) = { -310.1606f, -869.7873f, 30.6891f };
	*(uParam0[13 /*28*/][1 /*3*/]) = { -315.0338f, -869.8134f, 30.6555f };
	*(uParam0[13 /*28*/][2 /*3*/]) = { -319.5981f, -868.6276f, 30.6449f };
	(uParam0[13 /*28*/])->f_27 = 3;
	(uParam0[13 /*28*/])->f_23 = { -309.987f, -864.1183f, 30.6228f };
	(uParam0[13 /*28*/])->f_26 = 261.3995f;
	(uParam0[13 /*28*/])->f_10[0 /*3*/] = { -316.0121f, -862.7733f, 30.6267f };
	(uParam0[13 /*28*/])->f_10[1 /*3*/] = { -317.526f, -863.8655f, 30.5453f };
	*(uParam0[14 /*28*/][0 /*3*/]) = { 407.2907f, -1479.6372f, 28.2895f };
	*(uParam0[14 /*28*/][1 /*3*/]) = { 404.6483f, -1483.5702f, 28.2895f };
	(uParam0[14 /*28*/])->f_27 = 2;
	(uParam0[14 /*28*/])->f_23 = { 403.5326f, -1475.1968f, 28.2951f };
	(uParam0[14 /*28*/])->f_26 = 301.9695f;
	(uParam0[14 /*28*/])->f_10[0 /*3*/] = { 399.232f, -1477.7832f, 28.2928f };
	(uParam0[14 /*28*/])->f_10[1 /*3*/] = { 401.2551f, -1479.7366f, 28.1369f };
	*(uParam0[15 /*28*/][0 /*3*/]) = { -686.6597f, -851.2509f, 22.9054f };
	*(uParam0[15 /*28*/][1 /*3*/]) = { -696.9954f, -852.1266f, 22.6746f };
	(uParam0[15 /*28*/])->f_27 = 2;
	(uParam0[15 /*28*/])->f_23 = { -674.3848f, -844.9825f, 23.1517f };
	(uParam0[15 /*28*/])->f_26 = 269.1391f;
	(uParam0[15 /*28*/])->f_10[0 /*3*/] = { -692.3451f, -845.8392f, 22.7217f };
	(uParam0[15 /*28*/])->f_10[1 /*3*/] = { -692.3451f, -845.8392f, 22.7217f };
}

void func_675(var uParam0)//Position - 0x413CD
{
	(uParam0[0 /*23*/])->f_1 = { 123.999f, -1081.6178f, 28.1919f };
	(uParam0[0 /*23*/])->f_4 = 180.477f;
	(uParam0[0 /*23*/])->f_6 = { 97.7377f, -1072.4927f, 28.2717f };
	(uParam0[0 /*23*/])->f_9 = 253.9961f;
	(*uParam0)[0 /*23*/] = 0;
	(uParam0[1 /*23*/])->f_1 = { 123.999f, -1081.6178f, 28.1919f };
	(uParam0[1 /*23*/])->f_4 = 180.477f;
	(uParam0[1 /*23*/])->f_6 = { 97.7377f, -1072.4927f, 28.2717f };
	(uParam0[1 /*23*/])->f_9 = 253.9961f;
	(*uParam0)[1 /*23*/] = 0;
	(uParam0[2 /*23*/])->f_1 = { -301.9741f, -898.8075f, 30.0813f };
	(uParam0[2 /*23*/])->f_4 = 168.6079f;
	(uParam0[2 /*23*/])->f_6 = { -301.0894f, -934.515f, 30.0813f };
	(uParam0[2 /*23*/])->f_9 = 66.2119f;
	(*uParam0)[2 /*23*/] = 0;
	(uParam0[3 /*23*/])->f_1 = { -359.0859f, -965.5469f, 30.0701f };
	(uParam0[3 /*23*/])->f_4 = 145.3635f;
	(*uParam0)[3 /*23*/] = 2;
	(uParam0[4 /*23*/])->f_1 = { 4.5819f, -1762.4952f, 28.2918f };
	(uParam0[4 /*23*/])->f_4 = 51.8577f;
	(*uParam0)[4 /*23*/] = 2;
	(uParam0[5 /*23*/])->f_1 = { 260.5293f, -1872.3273f, 25.8171f };
	(uParam0[5 /*23*/])->f_4 = 55f;
	(*uParam0)[5 /*23*/] = 1;
	(uParam0[5 /*23*/])->f_6 = { 209.1288f, -2149.0547f, 13.3765f };
	(uParam0[5 /*23*/])->f_5 = 1;
	(uParam0[5 /*23*/])->f_13 = { 331.456f, -1789.7f, 26.817f };
	(uParam0[5 /*23*/])->f_16 = { 190.235f, -1957.1f, 26.816f };
	(uParam0[5 /*23*/])->f_19 = 7.2f;
	(uParam0[6 /*23*/])->f_1 = { 967.3045f, -1873.7893f, 30.1425f };
	(uParam0[6 /*23*/])->f_4 = 41.1599f;
	(*uParam0)[6 /*23*/] = 2;
	(uParam0[7 /*23*/])->f_1 = { -607.5065f, -1216.3397f, 13.4082f };
	(uParam0[7 /*23*/])->f_4 = 131.5235f;
	(*uParam0)[7 /*23*/] = 2;
	(uParam0[8 /*23*/])->f_1 = { 432.3639f, -619.0512f, 27.5112f };
	(uParam0[8 /*23*/])->f_4 = 263.5155f;
	(uParam0[8 /*23*/])->f_6 = { 435.9689f, -662.4229f, 27.8383f };
	(uParam0[8 /*23*/])->f_9 = 62.5486f;
	(*uParam0)[8 /*23*/] = 0;
	(uParam0[9 /*23*/])->f_1 = { -136.0945f, -785.4554f, 31.4112f };
	(uParam0[9 /*23*/])->f_4 = 276.5309f;
	(*uParam0)[9 /*23*/] = 2;
	(uParam0[10 /*23*/])->f_1 = { -32.488f, -1354.8672f, 28.1676f };
	(uParam0[10 /*23*/])->f_4 = 90.8486f;
	(*uParam0)[10 /*23*/] = 2;
	(uParam0[11 /*23*/])->f_1 = { -33.8858f, -1602.9177f, 28.2902f };
	(uParam0[11 /*23*/])->f_4 = 142.2298f;
	(*uParam0)[11 /*23*/] = 1;
	(uParam0[11 /*23*/])->f_6 = { 216.8692f, -1814.2551f, 24.6812f };
	(uParam0[11 /*23*/])->f_5 = 0;
	(uParam0[11 /*23*/])->f_13 = { -111.725f, -1538.781f, -29.292f };
	(uParam0[11 /*23*/])->f_16 = { 41.484f, -1667.339f, 29.292f };
	(uParam0[11 /*23*/])->f_19 = 7.8f;
	(uParam0[12 /*23*/])->f_1 = { 220.6214f, -852.1f, 29.1084f };
	(uParam0[12 /*23*/])->f_4 = 249.5924f;
	(*uParam0)[12 /*23*/] = 2;
	(uParam0[13 /*23*/])->f_1 = { 337.0184f, -1156.9297f, 28.2919f };
	(uParam0[13 /*23*/])->f_4 = 270.3139f;
	(*uParam0)[13 /*23*/] = 2;
	(uParam0[14 /*23*/])->f_1 = { 953.1846f, -2113.2559f, 29.5516f };
	(uParam0[14 /*23*/])->f_4 = 265.591f;
	(*uParam0)[14 /*23*/] = 2;
	(uParam0[15 /*23*/])->f_1 = { -88.9769f, -2003.448f, 17.0168f };
	(uParam0[15 /*23*/])->f_4 = 352.601f;
	(*uParam0)[15 /*23*/] = 2;
	(uParam0[16 /*23*/])->f_1 = { 211.0682f, -791.7485f, 29.9f };
	(uParam0[16 /*23*/])->f_4 = 68.5508f;
	(*uParam0)[16 /*23*/] = 2;
	(uParam0[17 /*23*/])->f_1 = { -327.4179f, -1529.1274f, 26.5696f };
	(uParam0[17 /*23*/])->f_4 = 179.9431f;
	(*uParam0)[17 /*23*/] = 2;
	(uParam0[18 /*23*/])->f_1 = { -596.5739f, -889.578f, 24.4759f };
	(uParam0[18 /*23*/])->f_4 = 269.5022f;
	(uParam0[18 /*23*/])->f_6 = { -584.4996f, -872.2784f, 24.8909f };
	(uParam0[18 /*23*/])->f_9 = 83.1267f;
	(*uParam0)[18 /*23*/] = 0;
	(uParam0[19 /*23*/])->f_1 = { 408.6235f, -989.5519f, 28.2665f };
	(uParam0[19 /*23*/])->f_4 = 233.0824f;
	(*uParam0)[19 /*23*/] = 2;
	(uParam0[20 /*23*/])->f_1 = { -33.8858f, -1602.9177f, 28.2902f };
	(uParam0[20 /*23*/])->f_4 = 142.2298f;
	(*uParam0)[20 /*23*/] = 1;
	(uParam0[20 /*23*/])->f_6 = { 216.8692f, -1814.2551f, 24.6812f };
	(uParam0[20 /*23*/])->f_5 = 0;
	(uParam0[20 /*23*/])->f_13 = { -111.725f, -1538.781f, -29.292f };
	(uParam0[20 /*23*/])->f_16 = { 41.484f, -1667.339f, 29.292f };
	(uParam0[20 /*23*/])->f_19 = 7.8f;
	(uParam0[21 /*23*/])->f_1 = { 432.3639f, -619.0512f, 27.5112f };
	(uParam0[21 /*23*/])->f_4 = 263.5155f;
	(uParam0[21 /*23*/])->f_6 = { 435.9689f, -662.4229f, 27.8383f };
	(uParam0[21 /*23*/])->f_9 = 62.5486f;
	(*uParam0)[21 /*23*/] = 0;
	(uParam0[22 /*23*/])->f_1 = { -310.2984f, -686.4995f, 32.1219f };
	(uParam0[22 /*23*/])->f_4 = 269.6159f;
	(uParam0[22 /*23*/])->f_6 = { -373.468f, -672.849f, 30.4925f };
	(uParam0[22 /*23*/])->f_9 = 274.2857f;
	(*uParam0)[22 /*23*/] = 0;
	(uParam0[23 /*23*/])->f_1 = { -316.4254f, -895.1236f, 30.0701f };
	(uParam0[23 /*23*/])->f_4 = 347.1421f;
	(*uParam0)[23 /*23*/] = 2;
	(uParam0[24 /*23*/])->f_1 = { 53.578f, -1417.2264f, 28.3517f };
	(uParam0[24 /*23*/])->f_4 = 224.8985f;
	(*uParam0)[24 /*23*/] = 2;
	(uParam0[25 /*23*/])->f_1 = { 401.6395f, -2054.6584f, 20.575f };
	(uParam0[25 /*23*/])->f_4 = 168.9083f;
	(*uParam0)[25 /*23*/] = 2;
	(uParam0[26 /*23*/])->f_1 = { 146.2919f, -2051.0713f, 17.3217f };
	(uParam0[26 /*23*/])->f_4 = 265.1393f;
	(*uParam0)[26 /*23*/] = 1;
	(uParam0[26 /*23*/])->f_6 = { 339.577f, -1779.0023f, 28.1454f };
	(uParam0[26 /*23*/])->f_5 = 0;
	(uParam0[26 /*23*/])->f_13 = { 149.063f, -2005.992f, -18.327f };
	(uParam0[26 /*23*/])->f_16 = { 144.98f, -2095.9f, 18.327f };
	(uParam0[26 /*23*/])->f_19 = 8.5f;
	(uParam0[27 /*23*/])->f_1 = { 363.1678f, -1749.9573f, 28.2073f };
	(uParam0[27 /*23*/])->f_4 = 229.6858f;
	(*uParam0)[27 /*23*/] = 1;
	(uParam0[27 /*23*/])->f_6 = { 150.5184f, -2010.4971f, 17.7098f };
	(uParam0[27 /*23*/])->f_5 = 1;
	(uParam0[27 /*23*/])->f_13 = { 428.271f, -1674.163f, -29.211f };
	(uParam0[27 /*23*/])->f_16 = { 299.18f, -1826.923f, 29.211f };
	(uParam0[27 /*23*/])->f_19 = 9f;
	(uParam0[28 /*23*/])->f_1 = { 171.3444f, -1776.831f, 28.0622f };
	(uParam0[28 /*23*/])->f_4 = 321.1031f;
	(*uParam0)[28 /*23*/] = 1;
	(uParam0[28 /*23*/])->f_6 = { -92.782f, -1554.6067f, 32.2626f };
	(uParam0[28 /*23*/])->f_5 = 1;
	(uParam0[28 /*23*/])->f_13 = { 94.446f, -1712.766f, -29.071f };
	(uParam0[28 /*23*/])->f_16 = { 248.549f, -1840.251f, 29.211f };
	(uParam0[28 /*23*/])->f_19 = 8f;
	(uParam0[29 /*23*/])->f_1 = { 421.2757f, -1277.6182f, 29.2671f };
	(uParam0[29 /*23*/])->f_4 = 359.101f;
	(uParam0[29 /*23*/])->f_6 = { 455.9831f, -1267.6547f, 29.0609f };
	(uParam0[29 /*23*/])->f_9 = 97.7539f;
	(*uParam0)[29 /*23*/] = 0;
	(uParam0[30 /*23*/])->f_1 = { 211.0559f, -1371.6879f, 29.5776f };
	(uParam0[30 /*23*/])->f_4 = 52.932f;
	(uParam0[30 /*23*/])->f_6 = { 209.6618f, -1406.5208f, 28.2921f };
	(uParam0[30 /*23*/])->f_9 = 263.4376f;
	(*uParam0)[30 /*23*/] = 0;
	(uParam0[31 /*23*/])->f_1 = { -219.3074f, -1491.8456f, 30.2593f };
	(uParam0[31 /*23*/])->f_4 = 322.6262f;
	(*uParam0)[31 /*23*/] = 0;
	(uParam0[31 /*23*/])->f_6 = { -177.2324f, -1506.01f, 31.6696f };
	(uParam0[32 /*23*/])->f_1 = { 538.7713f, -1524.8258f, 28.168f };
	(uParam0[32 /*23*/])->f_4 = 50.4239f;
	(*uParam0)[32 /*23*/] = 1;
	(uParam0[32 /*23*/])->f_6 = { 535.2374f, -1093.3301f, 27.4652f };
	(uParam0[32 /*23*/])->f_5 = 0;
	(uParam0[32 /*23*/])->f_13 = { 557.229f, -1501.367f, -29.273f };
	(uParam0[32 /*23*/])->f_16 = { 518.983f, -1547.597f, 29.273f };
	(uParam0[32 /*23*/])->f_19 = 8.2f;
	(uParam0[33 /*23*/])->f_1 = { 497.2474f, -1199.3268f, 28.3046f };
	(uParam0[33 /*23*/])->f_4 = 212.2787f;
	(*uParam0)[33 /*23*/] = 1;
	(uParam0[33 /*23*/])->f_6 = { 516.6573f, -926.7039f, 14.6979f };
	(uParam0[33 /*23*/])->f_5 = 0;
	(uParam0[33 /*23*/])->f_13 = { 512.849f, -1198.747f, -29.311f };
	(uParam0[33 /*23*/])->f_16 = { 483.086f, -1202.507f, 29.311f };
	(uParam0[33 /*23*/])->f_19 = 8f;
	(uParam0[34 /*23*/])->f_1 = { 576.4442f, -1705.2592f, 28.0895f };
	(uParam0[34 /*23*/])->f_4 = 43.2791f;
	(*uParam0)[34 /*23*/] = 4;
	(uParam0[34 /*23*/])->f_20 = joaat("tailgater");
	(uParam0[34 /*23*/])->f_21 = 0;
	(uParam0[34 /*23*/])->f_22 = 0;
	(uParam0[34 /*23*/])->f_10 = { 585.9758f, -1707.7788f, 28.2677f };
	(uParam0[35 /*23*/])->f_1 = { 233.0704f, -1138.8818f, 28.2302f };
	(uParam0[35 /*23*/])->f_4 = 311.5479f;
	(*uParam0)[35 /*23*/] = 4;
	(uParam0[35 /*23*/])->f_20 = joaat("emperor");
	(uParam0[35 /*23*/])->f_21 = 0;
	(uParam0[35 /*23*/])->f_22 = 1;
	(uParam0[36 /*23*/])->f_1 = { -100.5493f, -1724.9733f, 28.3857f };
	(uParam0[36 /*23*/])->f_4 = 81.5938f;
	(*uParam0)[36 /*23*/] = 4;
	(uParam0[36 /*23*/])->f_20 = joaat("intruder");
	(uParam0[36 /*23*/])->f_21 = 1;
	(uParam0[36 /*23*/])->f_22 = 2;
	(uParam0[36 /*23*/])->f_10 = { -92.7179f, -1721.0925f, 28.3288f };
	(uParam0[37 /*23*/])->f_1 = { -114.5507f, -1318.9116f, 28.1481f };
	(uParam0[37 /*23*/])->f_4 = 157.6585f;
	(*uParam0)[37 /*23*/] = 4;
	(uParam0[37 /*23*/])->f_20 = joaat("asterope");
	(uParam0[37 /*23*/])->f_21 = 0;
	(uParam0[37 /*23*/])->f_22 = 3;
	(uParam0[37 /*23*/])->f_10 = { -111.4177f, -1293.5677f, 28.2889f };
	(uParam0[38 /*23*/])->f_1 = { 303.2563f, -1699.0979f, 28.1861f };
	(uParam0[38 /*23*/])->f_4 = 213.8354f;
	(*uParam0)[38 /*23*/] = 4;
	(uParam0[38 /*23*/])->f_20 = joaat("emperor2");
	(uParam0[38 /*23*/])->f_21 = 0;
	(uParam0[38 /*23*/])->f_22 = 4;
	(uParam0[38 /*23*/])->f_10 = { 284.1822f, -1679.6572f, 28.3083f };
	(uParam0[39 /*23*/])->f_1 = { 784.1456f, -2046.7025f, 28.1368f };
	(uParam0[39 /*23*/])->f_4 = 12.6961f;
	(*uParam0)[39 /*23*/] = 4;
	(uParam0[39 /*23*/])->f_20 = joaat("blista");
	(uParam0[39 /*23*/])->f_21 = 1;
	(uParam0[39 /*23*/])->f_22 = 5;
	(uParam0[39 /*23*/])->f_10 = { 784.365f, -2070.9988f, 28.3414f };
	(uParam0[40 /*23*/])->f_1 = { 29.4785f, -980.7521f, 28.4051f };
	(uParam0[40 /*23*/])->f_4 = 221.9553f;
	(*uParam0)[40 /*23*/] = 4;
	(uParam0[40 /*23*/])->f_20 = joaat("emperor");
	(uParam0[40 /*23*/])->f_21 = 0;
	(uParam0[40 /*23*/])->f_22 = 6;
	(uParam0[40 /*23*/])->f_10 = { 10.3525f, -970.0844f, 28.4022f };
	(uParam0[41 /*23*/])->f_1 = { 101.5021f, -1529.5457f, 28.2147f };
	(uParam0[41 /*23*/])->f_4 = 31.1362f;
	(*uParam0)[41 /*23*/] = 4;
	(uParam0[41 /*23*/])->f_20 = joaat("premier");
	(uParam0[41 /*23*/])->f_21 = 1;
	(uParam0[41 /*23*/])->f_22 = 7;
	(uParam0[41 /*23*/])->f_10 = { 117.6439f, -1547.8854f, 28.2914f };
	(uParam0[42 /*23*/])->f_1 = { 360.6348f, -867.98f, 28.1345f };
	(uParam0[42 /*23*/])->f_4 = 249.799f;
	(*uParam0)[42 /*23*/] = 4;
	(uParam0[42 /*23*/])->f_20 = joaat("buffalo");
	(uParam0[42 /*23*/])->f_21 = 0;
	(uParam0[42 /*23*/])->f_22 = 8;
	(uParam0[42 /*23*/])->f_10 = { 324.7404f, -864.9786f, 28.2923f };
	(uParam0[43 /*23*/])->f_1 = { 261.1898f, -2035.0508f, 17.2895f };
	(uParam0[43 /*23*/])->f_4 = 339.6013f;
	(*uParam0)[43 /*23*/] = 4;
	(uParam0[43 /*23*/])->f_20 = joaat("premier");
	(uParam0[43 /*23*/])->f_21 = 1;
	(uParam0[43 /*23*/])->f_22 = 9;
	(uParam0[43 /*23*/])->f_10 = { 279.2888f, -2017.8461f, 18.4895f };
	(uParam0[44 /*23*/])->f_1 = { 418.623f, -1867.9032f, 25.6724f };
	(uParam0[44 /*23*/])->f_4 = 103.9975f;
	(*uParam0)[44 /*23*/] = 4;
	(uParam0[44 /*23*/])->f_20 = joaat("intruder");
	(uParam0[44 /*23*/])->f_21 = 0;
	(uParam0[44 /*23*/])->f_22 = 10;
	(uParam0[44 /*23*/])->f_10 = { 443.8106f, -1847.2933f, 26.8106f };
	(uParam0[45 /*23*/])->f_1 = { 507.4709f, -1668.5927f, 28.6539f };
	(uParam0[45 /*23*/])->f_4 = 78.9463f;
	(*uParam0)[45 /*23*/] = 4;
	(uParam0[45 /*23*/])->f_20 = joaat("tailgater");
	(uParam0[45 /*23*/])->f_21 = 1;
	(uParam0[45 /*23*/])->f_22 = 11;
	(uParam0[45 /*23*/])->f_10 = { 525.0562f, -1678.7812f, 28.4452f };
	(uParam0[46 /*23*/])->f_1 = { -203.7249f, -667.237f, 32.6054f };
	(uParam0[46 /*23*/])->f_4 = 34.4328f;
	(*uParam0)[46 /*23*/] = 4;
	(uParam0[46 /*23*/])->f_20 = joaat("asterope");
	(uParam0[46 /*23*/])->f_21 = 0;
	(uParam0[46 /*23*/])->f_22 = 12;
	(uParam0[46 /*23*/])->f_10 = { -179.7505f, -678.1224f, 33.1625f };
	(uParam0[47 /*23*/])->f_1 = { -318.031f, -865.0022f, 30.482f };
	(uParam0[47 /*23*/])->f_4 = 238.9396f;
	(*uParam0)[47 /*23*/] = 4;
	(uParam0[47 /*23*/])->f_20 = joaat("emperor2");
	(uParam0[47 /*23*/])->f_21 = 0;
	(uParam0[47 /*23*/])->f_22 = 13;
	(uParam0[47 /*23*/])->f_10 = { -338.2523f, -859.7131f, 30.5587f };
	(uParam0[48 /*23*/])->f_1 = { 401.2838f, -1480.8701f, 28.3058f };
	(uParam0[48 /*23*/])->f_4 = 281.6565f;
	(*uParam0)[48 /*23*/] = 4;
	(uParam0[48 /*23*/])->f_20 = joaat("blista");
	(uParam0[48 /*23*/])->f_21 = 2;
	(uParam0[48 /*23*/])->f_22 = 14;
	(uParam0[48 /*23*/])->f_10 = { 369.6188f, -1495.7296f, 28.2385f };
	(uParam0[49 /*23*/])->f_1 = { 2912.9065f, 4410.6245f, 47.9319f };
	(uParam0[49 /*23*/])->f_4 = 51.9751f;
	(*uParam0)[49 /*23*/] = 4;
	(uParam0[49 /*23*/])->f_20 = joaat("emperor2");
	(uParam0[49 /*23*/])->f_21 = 0;
	(uParam0[49 /*23*/])->f_22 = 15;
	(uParam0[49 /*23*/])->f_10 = { 2929.2373f, 4389.6006f, 49.1801f };
	(uParam0[50 /*23*/])->f_1 = { 1684.6714f, 4789.85f, 40.9384f };
	(uParam0[50 /*23*/])->f_4 = 337.6293f;
	(*uParam0)[50 /*23*/] = 4;
	(uParam0[50 /*23*/])->f_20 = joaat("tailgater");
	(uParam0[50 /*23*/])->f_21 = 1;
	(uParam0[50 /*23*/])->f_22 = 16;
	(uParam0[50 /*23*/])->f_10 = { 1677.4445f, 4772.6963f, 40.9936f };
	(uParam0[51 /*23*/])->f_1 = { 217.386f, -2545.0613f, 5.1932f };
	(uParam0[51 /*23*/])->f_4 = 95.5124f;
	(*uParam0)[51 /*23*/] = 1;
	(uParam0[51 /*23*/])->f_6 = { 150.731f, -2066.6626f, 17.2342f };
	(uParam0[51 /*23*/])->f_5 = 0;
	(uParam0[51 /*23*/])->f_13 = { 217.88295f, -2593.5479f, 4.174078f };
	(uParam0[51 /*23*/])->f_16 = { 217.1816f, -2499.7786f, 12.43667f };
	(uParam0[51 /*23*/])->f_19 = 8f;
	(uParam0[52 /*23*/])->f_1 = { -692.027f, -847.6826f, 22.6477f };
	(uParam0[52 /*23*/])->f_4 = 245.055f;
	(*uParam0)[52 /*23*/] = 4;
	(uParam0[52 /*23*/])->f_20 = joaat("tailgater");
	(uParam0[52 /*23*/])->f_21 = 0;
	(uParam0[52 /*23*/])->f_22 = 15;
	(uParam0[52 /*23*/])->f_10 = { -723.7541f, -844.7679f, 21.9551f };
}

int func_676(int* iParam0, bool bParam1, int iParam2)//Position - 0x42A2B
{
	int iVar0;
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0, false))
			{
				if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("towtruck") || ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("towtruck2"))
				{
					if (bParam1)
					{
						if ((ENTITY::DOES_ENTITY_EXIST(iParam2) && !ENTITY::IS_ENTITY_DEAD(iParam2, false)) && !ENTITY::IS_ENTITY_DEAD(iVar0, false))
						{
							if (PED::IS_PED_IN_VEHICLE(iParam2, iVar0, false) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar0, false))
							{
								if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
								{
									if (ENTITY::IS_ENTITY_OCCLUDED(*iParam0))
									{
										VEHICLE::DELETE_VEHICLE(iParam0);
									}
									else
									{
										ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(iParam0);
									}
								}
								*iParam0 = iVar0;
								return 1;
							}
						}
					}
					else
					{
						if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
						{
							if (ENTITY::IS_ENTITY_OCCLUDED(*iParam0))
							{
								VEHICLE::DELETE_VEHICLE(iParam0);
							}
							else
							{
								ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(iParam0);
							}
						}
						*iParam0 = iVar0;
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_677()//Position - 0x42D57
{
	int iVar0;
	if (!bLocal_1001)
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				if ((!ENTITY::IS_ENTITY_DEAD(iLocal_556, false) && ENTITY::DOES_ENTITY_EXIST(iLocal_674)) && !ENTITY::IS_ENTITY_DEAD(iLocal_674, false))
				{
					if (PED::IS_PED_IN_GROUP(iLocal_556))
					{
						PED::REMOVE_PED_FROM_GROUP(iLocal_556);
					}
					TASK::OPEN_SEQUENCE_TASK(&iVar0);
					if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_556, false))
					{
						TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
					}
					TASK::TASK_ENTER_VEHICLE(0, iLocal_674, -1, 0, 1f, 1, 0);
					TASK::CLOSE_SEQUENCE_TASK(iVar0);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_556, iVar0);
					TASK::CLEAR_SEQUENCE_TASK(&iVar0);
					bLocal_1001 = true;
				}
			}
		}
	}
	if (bLocal_1001)
	{
		if (!PED::IS_PED_INJURED(iLocal_556) && !ENTITY::IS_ENTITY_DEAD(iLocal_674, false))
		{
			if (!PED::IS_PED_IN_VEHICLE(iLocal_556, iLocal_674, false))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_556, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_556, joaat("SCRIPT_TASK_ENTER_VEHICLE")) != 1)
				{
					TASK::TASK_ENTER_VEHICLE(iLocal_556, iLocal_674, 20000, 0, 1f, 1, 0);
				}
			}
		}
	}
}

void func_678(var uParam0, int iParam1, float fParam2)//Position - 0x4335E
{
	int iVar0;
	if (*uParam0 != 0)
	{
		*fParam2 = OBJECT::DOOR_SYSTEM_GET_OPEN_RATIO(*uParam0);
		iVar0 = OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(*uParam0);
		if ((iVar0 == 1 || iVar0 == 4) || iVar0 == 2)
		{
			*iParam1 = 1;
		}
		else
		{
			*iParam1 = 0;
		}
	}
}

void func_679(var uParam0, int iParam1, struct<3> Param2, int iParam3, bool bParam4)//Position - 0x433A6
{
	var uVar0;
	*uParam0 = iParam1;
	if (*uParam0 != 0)
	{
		if (!OBJECT::DOOR_SYSTEM_FIND_EXISTING_DOOR(Param2, iParam3, &uVar0))
		{
			if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(*uParam0))
			{
				OBJECT::ADD_DOOR_TO_SYSTEM(*uParam0, iParam3, Param2, false, true, false);
			}
		}
		else
		{
			*uParam0 = uVar0;
			uParam0->f_7 = 1;
		}
		if (bParam4)
		{
			OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(*uParam0, 0f, false, true);
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(*uParam0, 6, true, false);
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(*uParam0, 4, true, false);
		}
	}
}

void func_680()//Position - 0x44723
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	if (iLocal_982 < 3)
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		}
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_556, false))
		{
			Var1 = { ENTITY::GET_ENTITY_COORDS(iLocal_556, true) };
		}
		fVar2 = SYSTEM::VDIST(Var0, Var1);
		if (fVar2 < 3f)
		{
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
				TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_556, -1, 0, 4);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_556, 0);
			}
		}
	}
}

void func_681()//Position - 0x46B3F
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_556) && !ENTITY::IS_ENTITY_DEAD(iLocal_556, false))
	{
		if (PED::IS_PED_IN_GROUP(iLocal_556))
		{
			PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
		}
	}
}

void func_682()//Position - 0x46B71
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_556) && !ENTITY::IS_ENTITY_DEAD(iLocal_556, false))
	{
		PED::SET_PED_RESET_FLAG(iLocal_556, 328, true);
	}
}

void func_683()//Position - 0x46B9C
{
	struct<3> Var0;
	struct<3> Var1;
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_556))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_556, false))
	{
		Var1 = { ENTITY::GET_ENTITY_COORDS(iLocal_556, true) };
	}
	if (SYSTEM::VDIST2(Var0, Var1) < 25f)
	{
		PED::SET_FORCE_FOOTSTEP_UPDATE(iLocal_556, true);
	}
	else
	{
		PED::SET_FORCE_FOOTSTEP_UPDATE(iLocal_556, false);
	}
}

void func_684(bool bParam0)//Position - 0x47E00
{
	if (bLocal_511)
	{
		bLocal_511 = false;
		if (HUD::DOES_BLIP_EXIST(iLocal_176))
		{
			HUD::REMOVE_BLIP(&iLocal_176);
		}
		if (!HUD::DOES_BLIP_EXIST(iLocal_557))
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_674) && !ENTITY::IS_ENTITY_DEAD(iLocal_674, false))
			{
				if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_674, false))
				{
					iLocal_557 = HUD::ADD_BLIP_FOR_ENTITY(iLocal_674);
					if (iLocal_681 == 1)
					{
						HUD::SET_BLIP_COLOUR(iLocal_557, 3);
						HUD::SET_BLIP_ROUTE(iLocal_557, true);
					}
				}
			}
		}
		if (bParam0)
		{
			if (!HUD::DOES_BLIP_EXIST(Local_565[0 /*20*/].f_8))
			{
				if (!__LIB_0__::func_86(Local_460[0 /*3*/]))
				{
					Local_565[0 /*20*/].f_8 = HUD::ADD_BLIP_FOR_COORD(Local_460[0 /*3*/]);
					if (bLocal_217)
					{
						HUD::SET_BLIP_COLOUR(Local_565[0 /*20*/].f_8, 5);
						HUD::SET_BLIP_ROUTE(Local_565[0 /*20*/].f_8, true);
						HUD::SET_BLIP_ROUTE_COLOUR(Local_565[0 /*20*/].f_8, 5);
					}
					else
					{
						HUD::SET_BLIP_COLOUR(Local_565[0 /*20*/].f_8, 3);
						HUD::SET_BLIP_ROUTE(Local_565[0 /*20*/].f_8, true);
						HUD::SET_BLIP_ROUTE_COLOUR(Local_565[0 /*20*/].f_8, 3);
					}
				}
			}
		}
	}
}

int func_685()//Position - 0x2B5B6
{
	switch (iLocal_600)
	{
		case 0:
			HUD::CLEAR_HELP(true);
			if (!HUD::DOES_BLIP_EXIST(iLocal_559))
			{
				__LIB_38__::func_603(iLocal_559);
				iLocal_559 = HUD::ADD_BLIP_FOR_COORD(406.3804f, -1635.8673f, 28.2928f);
				HUD::SET_BLIP_ROUTE(iLocal_559, true);
			}
			__LIB_0__::func_229("TOWT_DRIVE", 7500, 1);
			iLocal_600 = 1;
			break;
		case 1:
			if ((!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false) && !ENTITY::IS_ENTITY_DEAD(iLocal_556, false)) && !ENTITY::IS_ENTITY_DEAD(iLocal_674, false))
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_674, false) && PED::IS_PED_IN_VEHICLE(iLocal_556, iLocal_674, false))
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 398.9666f, -1641.2327f, 27.292774f, 411.13815f, -1626.6887f, 33.29278f, 15f, false, true, 0))
					{
						if (HUD::DOES_BLIP_EXIST(iLocal_559))
						{
							HUD::REMOVE_BLIP(&iLocal_559);
						}
						VEHICLE::BRING_VEHICLE_TO_HALT(iLocal_674, 5f, 1, false);
						VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_674, 1);
						iLocal_600 = 2;
					}
				}
			}
			break;
		case 2:
			return 1;
			break;
	}
	return 0;
}

void func_686(int* iParam0)//Position - 0x2C5B0
{
	__LIB_1__::func_12(iParam0);
	StringCopy(&cLocal_71, "", 32);
}

int func_687(int iParam0, int iParam1, int iParam2, int iParam3, float fParam4, float fParam5, bool bParam6)//Position - 0x2D7C1
{
	int iVar0;
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (ENTITY::IS_ENTITY_A_PED(iParam0))
		{
			iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iVar0, false) && PED::IS_PED_INJURED(iVar0))
		{
			return 0;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0, false) && !ENTITY::IS_ENTITY_DEAD(iParam1, false))
		{
			if (bParam6)
			{
			}
			if (!ENTITY::IS_ENTITY_OCCLUDED(iParam0) && __LIB_14__::func_556(iParam0, 1) < fParam4)
			{
				*iParam2++;
			}
			else
			{
				*iParam2 = 0;
			}
			if (((*iParam2 > iParam3 || __LIB_14__::func_556(iParam0, 1) < 8f) && ENTITY::GET_ENTITY_SPEED(iParam1) < fParam5) && !ENTITY::IS_ENTITY_OCCLUDED(iParam0))
			{
				*iParam2 = 0;
				return 1;
			}
		}
	}
	if (bParam6)
	{
	}
	return 0;
}

void func_688()//Position - 0x3BA31
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (HUD::DOES_BLIP_EXIST(Local_70[iVar0 /*3*/].f_1))
		{
			if (ENTITY::IS_ENTITY_DEAD(Local_70[iVar0 /*3*/], false))
			{
				HUD::REMOVE_BLIP(&(Local_70[iVar0 /*3*/].f_1));
			}
			else if (Local_70[iVar0 /*3*/].f_2 && __LIB_14__::func_556(Local_70[iVar0 /*3*/], 1) > 200f)
			{
				HUD::REMOVE_BLIP(&(Local_70[iVar0 /*3*/].f_1));
			}
		}
		iVar0++;
	}
}

int func_689(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)//Position - 0x3CCDE
{
	int iVar0;
	int iVar1;
	if (bParam3)
	{
		if (!bLocal_146)
		{
			iLocal_147 = ENTITY::GET_ENTITY_HEALTH(iParam0);
			bLocal_146 = true;
		}
		iLocal_148 = ENTITY::GET_ENTITY_HEALTH(iParam0);
		iLocal_149 = (iLocal_147 - iLocal_148);
		iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if (!ENTITY::IS_ENTITY_DEAD(iVar0, false))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iVar0, true))
			{
				if (IntToFloat(iLocal_149) > 100f)
				{
					return 1;
				}
			}
		}
		if (bLocal_146)
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, PLAYER::PLAYER_PED_ID(), true))
			{
				if (IntToFloat(iLocal_149) > 100f)
				{
					return 1;
				}
			}
		}
	}
	else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, PLAYER::PLAYER_PED_ID(), true))
	{
		return 1;
	}
	if (!bParam3)
	{
		iVar1 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if (!ENTITY::IS_ENTITY_DEAD(iVar1, false))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iVar1, true))
			{
				return 1;
			}
		}
	}
	if (bParam4)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
		{
			if (PED::IS_PED_BEING_JACKED(iParam0))
			{
				if (PED::GET_PEDS_JACKER(iParam0) == PLAYER::PLAYER_PED_ID())
				{
					return 1;
				}
			}
		}
	}
	if (bParam5)
	{
		if (PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()))
		{
			if (ENTITY::IS_ENTITY_AT_COORD(iParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 10f, 10f, 10f, false, true, 0))
			{
				if (PLAYER::HAS_PLAYER_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID()))
				{
					return 1;
				}
			}
		}
	}
	if (PED::IS_PED_PERFORMING_STEALTH_KILL(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::WAS_PED_KILLED_BY_STEALTH(iParam0))
		{
			return 1;
		}
	}
	if (__LIB_14__::func_536(PLAYER::PLAYER_PED_ID(), iParam0))
	{
		return 1;
	}
	if (bParam2)
	{
		if (PED::IS_PED_RAGDOLL(iParam0) && __LIB_14__::func_556(iParam0, 1) < 1.5f)
		{
			return 1;
		}
		else if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
		{
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), PED::GET_VEHICLE_PED_IS_IN(iParam0, false)))
			{
				return 1;
			}
		}
		else if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), iParam0))
		{
			return 1;
		}
		if (!ENTITY::IS_ENTITY_DEAD(iParam1, false))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam1, PLAYER::PLAYER_PED_ID(), true))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_690(var uParam0)//Position - 0x3D7F7
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 1)
	{
		Local_439[iVar0 /*18*/].f_2 = { *(uParam0[iVar0 /*3*/]) };
		Local_439[iVar0 /*18*/].f_5 = { 0f, 0f, -1f };
		if (iVar0 == 0)
		{
			Local_439[iVar0 /*18*/].f_8 = { __LIB_0__::func_79(MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f), MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f), 0f) };
		}
		else
		{
			Local_439[iVar0 /*18*/].f_8 = { __LIB_0__::func_79(0.5f, 1f, 0f) };
		}
		Local_439[iVar0 /*18*/].f_11 = 2f;
		Local_439[iVar0 /*18*/].f_12 = 1f;
		Local_439[iVar0 /*18*/].f_13 = 1f;
		Local_439[iVar0 /*18*/].f_14 = -1f;
		Local_439[iVar0 /*18*/].f_15 = 0.1f;
		Local_439[iVar0 /*18*/].f_17 = 0;
		Local_439[iVar0 /*18*/].f_1 = 1110;
		Local_439[iVar0 /*18*/] = GRAPHICS::ADD_DECAL(Local_439[iVar0 /*18*/].f_1, Local_439[iVar0 /*18*/].f_2, Local_439[iVar0 /*18*/].f_5, Local_439[iVar0 /*18*/].f_8, Local_439[iVar0 /*18*/].f_11, Local_439[iVar0 /*18*/].f_12, 0.196f, 0f, 0f, 1f, -1f, false, false, false);
		iVar0++;
	}
}

void func_691(bool bParam0)//Position - 0x3EF29
{
	int iVar0;
	float fVar1;
	iVar0 = 0;
	fVar1 = __LIB_0__::func_76(Local_565[0 /*20*/], Local_565[0 /*20*/].f_6, 1);
	if (bParam0)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_674, false) && !ENTITY::IS_ENTITY_DEAD(Local_565[0 /*20*/].f_6, false))
		{
			if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(iLocal_674, Local_565[0 /*20*/].f_6) && !PED::IS_PED_IN_VEHICLE(Local_565[0 /*20*/], Local_565[0 /*20*/].f_6, false))
			{
				iVar0 = 1;
			}
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(Local_565[0 /*20*/], false))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_565[0 /*20*/], PLAYER::PLAYER_PED_ID(), true) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(PLAYER::PLAYER_PED_ID(), Local_565[0 /*20*/], true))
		{
			__LIB_1__::func_31(&iLocal_638);
			ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_565[0 /*20*/]);
			ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(PLAYER::PLAYER_PED_ID());
		}
	}
	if (ENTITY::IS_ENTITY_DEAD(Local_565[0 /*20*/], false))
	{
		iLocal_684 = 8;
	}
	else if (((fVar1 > 25f || (__LIB_2__::func_572(&iLocal_638) > 30f && fVar1 > 5f)) || iVar0) || (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false) && WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6)))
	{
		Local_554[0] = Local_565[0 /*20*/];
		Local_554[1] = Local_565[0 /*20*/].f_1;
		bLocal_514 = true;
		Local_554 = { Local_554 };
		HUD::REMOVE_BLIP(&(Local_565[0 /*20*/].f_9));
		if (!ENTITY::IS_ENTITY_DEAD(Local_565[0 /*20*/], false))
		{
			TASK::CLEAR_PED_TASKS(Local_565[0 /*20*/]);
			TASK::TASK_SMART_FLEE_PED(Local_565[0 /*20*/], PLAYER::PLAYER_PED_ID(), 1000f, -1, false, false);
		}
		iLocal_684 = 8;
	}
}

int func_692(float fParam0, int iParam1, int iParam2)//Position - 0x407F0
{
	float fVar0;
	int iVar1;
	float fVar2;
	int iVar3[53];
	int iVar4;
	int iVar5;
	fVar0 = 500f;
	iVar1 = -1;
	iVar4 = 0;
	iVar5 = 0;
	while (iVar5 < 53)
	{
		fVar2 = __LIB_14__::func_523(Local_394[iVar5 /*23*/].f_1, 1);
		if (!__LIB_0__::func_86(Local_394[iVar5 /*23*/].f_1))
		{
			if ((fVar2 < fParam0 && fVar2 > fVar0) && iVar5 != iParam2)
			{
				if (iParam1 == -1)
				{
					iVar3[iVar4] = iVar5;
					iVar4++;
				}
				else if (Local_394[iVar5 /*23*/] == iParam1)
				{
					iVar3[iVar4] = iVar5;
					iVar4++;
				}
			}
		}
		iVar5++;
	}
	if (iVar4 > 1)
	{
		iVar1 = iVar3[MISC::GET_RANDOM_INT_IN_RANGE(0, (iVar4 - 1))];
	}
	else if (iVar4 == 1)
	{
		iVar1 = iVar3[0];
	}
	else
	{
		return 0;
	}
	return iVar1;
}

void func_693(int* iParam0)//Position - 0x42E58
{
	int iVar0;
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		}
		else if (!bLocal_511)
		{
			HUD::CLEAR_THIS_PRINT("TOWT_WAIT");
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
			{
				if (!HUD::DOES_BLIP_EXIST(iLocal_557))
				{
					iLocal_557 = HUD::ADD_BLIP_FOR_ENTITY(*iParam0);
					HUD::SET_BLIP_COLOUR(iLocal_557, 3);
					HUD::SET_BLIP_ROUTE(iLocal_557, true);
				}
			}
			if (HUD::DOES_BLIP_EXIST(iLocal_176))
			{
				HUD::REMOVE_BLIP(&iLocal_176);
			}
		}
	}
	if (((!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false) && !ENTITY::IS_ENTITY_DEAD(iLocal_556, false)) && ENTITY::DOES_ENTITY_EXIST(iVar0)) && !ENTITY::IS_ENTITY_DEAD(iVar0, false))
	{
		if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar0, false) && !PED::IS_PED_IN_VEHICLE(iLocal_556, iVar0, false))
		{
			HUD::CLEAR_THIS_PRINT("TOW_TUT_INTRUCK");
			if (HUD::DOES_BLIP_EXIST(iLocal_557))
			{
				HUD::REMOVE_BLIP(&iLocal_557);
			}
			if (!HUD::DOES_BLIP_EXIST(iLocal_176))
			{
				iLocal_176 = HUD::ADD_BLIP_FOR_ENTITY(iLocal_556);
				HUD::SET_BLIP_COLOUR(iLocal_176, 3);
				HUD::SET_BLIP_SCALE(iLocal_176, 0.7f);
			}
			if (!iLocal_539)
			{
				__LIB_0__::func_382("TOWT_WAIT", 7500, 1);
				iLocal_539 = 1;
			}
		}
		else if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar0, false) && PED::IS_PED_IN_VEHICLE(iLocal_556, iVar0, false))
		{
			if (HUD::DOES_BLIP_EXIST(iLocal_176))
			{
				HUD::REMOVE_BLIP(&iLocal_176);
			}
			HUD::CLEAR_THIS_PRINT("TOWT_WAIT");
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
			{
				if (!HUD::DOES_BLIP_EXIST(iLocal_557))
				{
					iLocal_557 = HUD::ADD_BLIP_FOR_ENTITY(*iParam0);
					HUD::SET_BLIP_COLOUR(iLocal_557, 3);
					HUD::SET_BLIP_ROUTE(iLocal_557, true);
				}
			}
			iLocal_539 = 0;
		}
	}
}

void func_694()//Position - 0x42FF4
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_556) && !ENTITY::IS_ENTITY_DEAD(iLocal_556, false))
	{
		if (!PED::IS_PED_IN_GROUP(iLocal_556))
		{
			PED::SET_PED_AS_GROUP_MEMBER(iLocal_556, __LIB_0__::func_495());
			PED::SET_PED_NEVER_LEAVES_GROUP(iLocal_556, true);
			PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(iLocal_556, 0);
			PED::SET_PED_CONFIG_FLAG(iLocal_556, 206, true);
			PED::SET_GROUP_FORMATION_SPACING(__LIB_0__::func_495(), 2f, -1f, -1f);
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				TASK::TASK_LOOK_AT_ENTITY(iLocal_556, PLAYER::PLAYER_PED_ID(), -1, 0, 4);
			}
		}
	}
}

void func_695()//Position - 0x2C5DB
{
	__LIB_12__::func_300("TOW_TUT_03");
	__LIB_12__::func_300("TOW_TUT_02");
	__LIB_12__::func_300("TOW_TUT_01");
	HUD::CLEAR_THIS_PRINT("TOWT_OBJ_03");
	HUD::CLEAR_THIS_PRINT("TOWT_OBJ_03a");
	HUD::CLEAR_THIS_PRINT("TOWT_OBJ_03G");
	HUD::CLEAR_THIS_PRINT("TOWT_OBJ_03Ga");
	HUD::CLEAR_THIS_PRINT("TOWT_OBJS_03");
}

void func_696()//Position - 0x2C718
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var2;
	bool bVar3;
	if (((!ENTITY::IS_ENTITY_DEAD(iLocal_674, false) && !ENTITY::IS_ENTITY_DEAD(Local_565[0 /*20*/].f_6, false)) && VEHICLE::IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(iLocal_674, Local_565[0 /*20*/].f_6)) || (Global_113386.f_19973.f_3 == 0 || Global_113386.f_19973.f_3 > 2))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_674, false))
	{
		Var1 = { ENTITY::GET_ENTITY_COORDS(iLocal_674, true) };
	}
	if (!ENTITY::IS_ENTITY_DEAD(Local_565[0 /*20*/].f_6, false))
	{
		Var2 = { ENTITY::GET_ENTITY_COORDS(Local_565[0 /*20*/].f_6, true) };
	}
	bVar3 = false;
	if (SYSTEM::VDIST2(Var1, Var2) < 900f)
	{
		if (!__LIB_1__::func_13(&iLocal_647))
		{
			__LIB_1__::func_362(&iLocal_647);
		}
		else if (__LIB_2__::func_572(&iLocal_647) > 1f)
		{
			bVar3 = true;
		}
	}
	else if (SYSTEM::VDIST2(Var1, Var2) > 2500f)
	{
		__LIB_1__::func_31(&iLocal_647);
	}
	if (bVar3)
	{
		switch (iLocal_593)
		{
			case 0:
				if (!HUD::IS_HELP_MESSAGE_ON_SCREEN())
				{
					__LIB_0__::func_151("TOW_TUT_02", -1);
					__LIB_1__::func_31(&iLocal_647);
					iLocal_593 = 1;
				}
				break;
			case 1:
				if (__LIB_1__::func_13(&iLocal_647))
				{
					if (__LIB_2__::func_572(&iLocal_647) > 14f)
					{
						if (!HUD::IS_HELP_MESSAGE_ON_SCREEN())
						{
							__LIB_0__::func_151("TOW_TUT_03", 10000);
							__LIB_1__::func_31(&iLocal_647);
							iLocal_593 = 2;
						}
					}
				}
				break;
			case 2:
				if (__LIB_1__::func_13(&iLocal_647))
				{
					if (__LIB_2__::func_572(&iLocal_647) > 14f)
					{
						if (!HUD::IS_HELP_MESSAGE_ON_SCREEN())
						{
							iVar0 = (MISC::GET_RANDOM_INT_IN_RANGE(0, 65535) % 2);
							if (iVar0 == 0)
							{
								__LIB_0__::func_151("TOW_TUT_04C", -1);
							}
							else if (iVar0 == 1)
							{
								__LIB_0__::func_151("TOWT_HELP_CR", -1);
							}
							iLocal_593 = 3;
						}
					}
				}
				break;
			case 3:
				break;
			}
	}
}

void func_697()//Position - 0x2CADB
{
	if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_461, 30f, 30f, 2f, false, true, 0))
	{
		if (!__LIB_1__::func_13(&iLocal_650))
		{
			__LIB_1__::func_362(&iLocal_650);
		}
		else if ((!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false) && !ENTITY::IS_ENTITY_DEAD(iLocal_674, false)) && !ENTITY::IS_ENTITY_DEAD(Local_565[0 /*20*/].f_6, false))
		{
			if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(iLocal_674, Local_565[0 /*20*/].f_6))
			{
				if (__LIB_2__::func_572(&iLocal_650) > 30f)
				{
					__LIB_0__::func_151("TOWT_HELP_DP", -1);
				}
			}
		}
	}
}

int func_698(var uParam0, int iParam1, int iParam2, int iParam3)//Position - 0x2D5FB
{
	struct<3> Var0;
	struct<3> Var1;
	iParam2 = iParam2;
	iParam3 = iParam3;
	switch (*uParam0)
	{
		case 0:
			uParam0->f_1 = MISC::GET_GAME_TIMER();
			uParam0->f_2 = __LIB_14__::func_556(iParam1, 1);
			*uParam0 = 1;
			break;
		case 1:
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
			}
			if (!ENTITY::IS_ENTITY_DEAD(iParam1, false))
			{
				Var1 = { ENTITY::GET_ENTITY_COORDS(iParam1, true) };
			}
			if (SYSTEM::VDIST2(Var0, Var1) > 22500f)
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_699()//Position - 0x3B7F9
{
	int iVar0;
	if (!bLocal_489)
	{
		iVar0 = SYSTEM::ROUND(((300f - __LIB_2__::func_559(&iLocal_641)) * 1000f));
		if (iLocal_171 == 3)
		{
			if ((iVar0 / 1000) < 60)
			{
				__LIB_1__::func_350(iVar0, "TOW_TIME", 0, 0, -1, 0, 2, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, -1);
			}
			else
			{
				__LIB_1__::func_350(iVar0, "TOW_TIME", 0, 0, -1, 0, 2, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1);
			}
		}
	}
}

int func_700(int iParam0)//Position - 0x3E5D6
{
	float fVar0;
	if (!__LIB_1__::func_13(&iLocal_440))
	{
		__LIB_1__::func_362(&iLocal_440);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
		{
			fVar0 = ENTITY::GET_ENTITY_SPEED(iParam0);
		}
		else
		{
			return 0;
		}
	}
	if (__LIB_15__::func_251(&iLocal_440, 0.15f))
	{
		fLocal_447 = (fVar0 - 0.35f);
		if (fLocal_447 < 8f)
		{
			fLocal_447 = 8f;
		}
		__LIB_1__::func_31(&iLocal_440);
		VEHICLE::SET_TRAIN_CRUISE_SPEED(iParam0, fLocal_447);
		VEHICLE::SET_TRAIN_SPEED(iParam0, fLocal_447);
	}
	return 1;
}

void func_701(var uParam0, bool bParam1, var uParam2, int* iParam3, int* iParam4, int iParam5, int iParam6, int iParam7)//Position - 0x46CEF
{
	bParam1 = bParam1;
	if (!bLocal_210)
	{
		if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::GET_PLAYER_INDEX(), 0))
		{
			if (__LIB_0__::func_75())
			{
				__LIB_0__::func_429();
			}
			if (iParam7 != 0)
			{
				if (!ENTITY::IS_ENTITY_DEAD(iParam7, false))
				{
					__LIB_0__::func_709(iParam7, "GET_WANTED_LEVEL", "TONYA", 34);
				}
			}
			if (HUD::DOES_BLIP_EXIST((uParam0[0 /*20*/])->f_8))
			{
				HUD::REMOVE_BLIP(&((uParam0[0 /*20*/])->f_8));
			}
			if (HUD::DOES_BLIP_EXIST((uParam0[0 /*20*/])->f_9))
			{
				HUD::REMOVE_BLIP(&((uParam0[0 /*20*/])->f_9));
			}
			if (HUD::DOES_BLIP_EXIST(*iParam3))
			{
				HUD::REMOVE_BLIP(iParam3);
			}
			if (HUD::DOES_BLIP_EXIST(*iParam4))
			{
				HUD::REMOVE_BLIP(iParam4);
			}
			bLocal_210 = true;
			__LIB_0__::func_229("TOW_OBJ_06", 7500, 1);
		}
	}
	else if (!PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::GET_PLAYER_INDEX(), 0) && bLocal_210)
	{
		if (__LIB_0__::func_501("TOW_OBJ_06", 0, 0))
		{
			HUD::CLEAR_PRINTS();
		}
		if (!HUD::DOES_BLIP_EXIST((uParam0[0 /*20*/])->f_8))
		{
			if (iParam6 > 1)
			{
				if (bLocal_216)
				{
					*iParam3 = HUD::ADD_BLIP_FOR_ENTITY(*iParam5);
					HUD::SET_BLIP_COLOUR(*iParam3, 3);
					return;
				}
				if (iParam6 >= 9 && iParam6 < 11)
				{
					if ((!ENTITY::IS_ENTITY_DEAD(*iParam5, false) && !ENTITY::IS_ENTITY_DEAD((uParam0[0 /*20*/])->f_6, false)) && VEHICLE::IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(*iParam5, (uParam0[0 /*20*/])->f_6))
					{
						__LIB_38__::func_603(*iParam4);
						*iParam4 = HUD::ADD_BLIP_FOR_COORD(*(uParam2[0 /*3*/]));
						HUD::SET_BLIP_COLOUR(*iParam4, 5);
						HUD::SET_BLIP_ROUTE(*iParam4, true);
					}
					else
					{
						(uParam0[0 /*20*/])->f_8 = HUD::ADD_BLIP_FOR_ENTITY((uParam0[0 /*20*/])->f_6);
						HUD::SET_BLIP_COLOUR((uParam0[0 /*20*/])->f_8, 3);
						HUD::SET_BLIP_ROUTE((uParam0[0 /*20*/])->f_8, true);
					}
				}
				else if (iParam6 < 11)
				{
					(uParam0[0 /*20*/])->f_8 = HUD::ADD_BLIP_FOR_COORD(*(uParam2[0 /*3*/]));
					HUD::SET_BLIP_COLOUR((uParam0[0 /*20*/])->f_8, 3);
					HUD::SET_BLIP_ROUTE((uParam0[0 /*20*/])->f_8, true);
				}
			}
			else if (!HUD::DOES_BLIP_EXIST(*iParam3))
			{
				*iParam3 = HUD::ADD_BLIP_FOR_ENTITY(*iParam5);
				HUD::SET_BLIP_COLOUR(*iParam3, 3);
				HUD::SET_BLIP_ROUTE(*iParam3, true);
			}
		}
		fLocal_181 = __LIB_14__::func_523(*(uParam2[0 /*3*/]), 0);
		bLocal_210 = false;
	}
}

void func_702()//Position - 0x48BA2
{
	__LIB_1__::func_330(&uLocal_163, 8);
	__LIB_1__::func_330(&uLocal_163, 16);
	__LIB_1__::func_330(&uLocal_163, 2);
}

void func_703(int* iParam0, float fParam1, bool bParam2)//Position - 0x3BAE1
{
	if (__LIB_17__::func_336(iParam0, fParam1))
	{
		if (bParam2)
		{
			__LIB_0__::func_151(&cLocal_71, -1);
		}
		else
		{
			__LIB_0__::func_229(&cLocal_71, 7500, 1);
		}
	}
}

void func_704()//Position - 0x48B74
{
	HUD::REQUEST_ADDITIONAL_TEXT("TOW", 2);
	while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(2))
	{
		__LIB_14__::func_862();
		SYSTEM::WAIT(0);
	}
}

void func_705(var uParam0, struct<3> Param1, int iParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)//Position - 0x3CB43
{
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
	{
		__LIB_0__::func_345(uParam0, 0, 0);
	}
	uParam0->f_6 = 2;
	__LIB_40__::func_634(uParam0, Param1, iParam2, iParam3, bParam4, iParam5, bParam6);
}

int func_706()//Position - 0x27680
{
	if (!bLocal_499)
	{
		if (__LIB_15__::func_251(&iLocal_641, 180f))
		{
			bLocal_499 = true;
			__LIB_0__::func_222(&Local_397, 4, 0, "TOWDISPATCH", 0, 1);
			__LIB_0__::func_222(&Local_397, 4, 0, "TOWDISPATCH", 0, 1);
			__LIB_2__::func_859(&Local_397, "TOWAUD", "TOW_DISP3", 9, 0, 0, 0);
		}
	}
	if (!iLocal_544)
	{
		if (iLocal_681 == 9)
		{
			if (bLocal_499)
			{
				if (!__LIB_0__::func_75())
				{
					__LIB_0__::func_151("TOWT_HELP_TM", -1);
					iLocal_544 = 1;
				}
			}
		}
	}
	if (__LIB_15__::func_251(&iLocal_641, 300f))
	{
		iLocal_625 = 14;
		return 1;
	}
	return 0;
}

void func_707(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, var uParam85, var uParam86, var uParam87, var uParam88, var uParam89, var uParam90, var uParam91, var uParam92, var uParam93, var uParam94, var uParam95, var uParam96, var uParam97, var uParam98, var uParam99, var uParam100, var uParam101, var uParam102, var uParam103, var uParam104, var uParam105, var uParam106, var uParam107, var uParam108, var uParam109, var uParam110, var uParam111, var uParam112, var uParam113, var uParam114, var uParam115, var uParam116, var uParam117, var uParam118, var uParam119, var uParam120, var uParam121, var uParam122, var uParam123, var uParam124, var uParam125, var uParam126, var uParam127, var uParam128, var uParam129, var uParam130, var uParam131, var uParam132, var uParam133, var uParam134, var uParam135, var uParam136, var uParam137, var uParam138, var uParam139, var uParam140, var uParam141, var uParam142, var uParam143, var uParam144, var uParam145, var uParam146, var uParam147, var uParam148, var uParam149, var uParam150, var uParam151, var uParam152, var uParam153, var uParam154, var uParam155, var uParam156, var uParam157, var uParam158, var uParam159, var uParam160, var uParam161, var uParam162, var uParam163, var uParam164, var uParam165)//Position - 0x28576
{
	switch (iLocal_453)
	{
		case 1:
			if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("towing")) == 0)
			{
				if (iLocal_171 == 1)
				{
					if (!iLocal_214)
					{
						if (__LIB_2__::func_859(&uParam0, "TOWAUD", "TOW_SHOCK", 7, 1, 0, 0))
						{
							PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_NON_ANIMAL_PED(PLAYER::PLAYER_ID());
							iLocal_214 = 1;
						}
					}
				}
				else if (iLocal_171 == 3)
				{
					if (!iLocal_214)
					{
						if (__LIB_2__::func_859(&uParam0, "TOWAUD", "TOW_SHOCK2", 7, 1, 0, 0))
						{
							PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_NON_ANIMAL_PED(PLAYER::PLAYER_ID());
							iLocal_214 = 1;
						}
					}
				}
			}
			else if (iLocal_171 == 1)
			{
				if (Global_113386.f_19973.f_5 == 0 || Global_113386.f_19973.f_5 == 1)
				{
					__LIB_0__::func_222(&Local_397, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
					__LIB_0__::func_222(&Local_397, 5, (*uParam165)[0 /*20*/], "TOWTRAINF", 0, 1);
					if (!iLocal_214)
					{
						if (__LIB_2__::func_859(&uParam0, "TOWAUD", "TOW_SHOCKGEN", 7, 1, 0, 0))
						{
							iLocal_214 = 1;
						}
					}
				}
				else if (Global_113386.f_19973.f_5 == 2)
				{
					__LIB_0__::func_222(&Local_397, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
					__LIB_0__::func_222(&Local_397, 6, (*uParam165)[0 /*20*/], "TOWILLEGALMAN2", 0, 1);
					if (!iLocal_214)
					{
						if (__LIB_2__::func_859(&uParam0, "TOWAUD", "TOW_GENSHOCK", 7, 1, 0, 0))
						{
							iLocal_214 = 1;
						}
					}
				}
			}
			else if (iLocal_171 == 3)
			{
				if (Global_113386.f_19973.f_7 == 0 || Global_113386.f_19973.f_7 == 1)
				{
					__LIB_0__::func_222(&Local_397, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
					__LIB_0__::func_222(&Local_397, 5, (*uParam165)[0 /*20*/], "TOWBREAKM", 0, 1);
					if (!iLocal_214)
					{
						if (__LIB_2__::func_859(&uParam0, "TOWAUD", "TOW_BRK_SHK", 7, 1, 0, 0))
						{
							iLocal_214 = 1;
						}
					}
				}
				else if (Global_113386.f_19973.f_7 == 2)
				{
					__LIB_0__::func_222(&Local_397, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
					__LIB_0__::func_222(&Local_397, 6, (*uParam165)[0 /*20*/], "TOWBREAKHIPM", 0, 1);
					if (!iLocal_214)
					{
						if (__LIB_2__::func_859(&uParam0, "TOWAUD", "TOW_BRK_SHK2", 7, 1, 0, 0))
						{
							iLocal_214 = 1;
						}
					}
				}
			}
			break;
		case 2:
			if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("towing")) == 0)
			{
				if (iLocal_171 == 1)
				{
					if (!iLocal_214)
					{
						if (__LIB_2__::func_859(&uParam0, "TOWAUD", "TOW_DAMAGE", 7, 1, 0, 0))
						{
							iLocal_214 = 1;
						}
					}
				}
				else if (iLocal_171 == 3)
				{
					if (!iLocal_214)
					{
						if (__LIB_2__::func_859(&uParam0, "TOWAUD", "TOW_DAMAGE2", 7, 1, 0, 0))
						{
							iLocal_214 = 1;
						}
					}
				}
			}
			else if (iLocal_171 == 1)
			{
				if (Global_113386.f_19973.f_5 == 0 || Global_113386.f_19973.f_5 == 1)
				{
					__LIB_0__::func_222(&Local_397, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
					__LIB_0__::func_222(&Local_397, 5, (*uParam165)[0 /*20*/], "TOWTRAINF", 0, 1);
					if (!iLocal_214)
					{
						if (__LIB_2__::func_859(&uParam0, "TOWAUD", "TOW_DAMCAR", 7, 1, 0, 0))
						{
							iLocal_214 = 1;
						}
					}
				}
				else if (Global_113386.f_19973.f_5 == 2)
				{
					__LIB_0__::func_222(&Local_397, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
					__LIB_0__::func_222(&Local_397, 6, (*uParam165)[0 /*20*/], "TOWILLEGALMAN2", 0, 1);
					if (!iLocal_214)
					{
						if (__LIB_2__::func_859(&uParam0, "TOWAUD", "TOW_CARDAM", 7, 1, 0, 0))
						{
							iLocal_214 = 1;
						}
					}
				}
			}
			else if (iLocal_171 == 3)
			{
				if (Global_113386.f_19973.f_7 == 0 || Global_113386.f_19973.f_7 == 1)
				{
					__LIB_0__::func_222(&Local_397, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
					__LIB_0__::func_222(&Local_397, 5, (*uParam165)[0 /*20*/], "TOWBREAKM", 0, 1);
					if (!iLocal_214)
					{
						if (__LIB_2__::func_859(&uParam0, "TOWAUD", "TOW_BRK_DMG", 7, 1, 0, 0))
						{
							iLocal_214 = 1;
						}
					}
				}
				else if (Global_113386.f_19973.f_7 == 2)
				{
					__LIB_0__::func_222(&Local_397, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
					__LIB_0__::func_222(&Local_397, 6, (*uParam165)[0 /*20*/], "TOWBREAKHIPM", 0, 1);
					if (!iLocal_214)
					{
						if (__LIB_2__::func_859(&uParam0, "TOWAUD", "TOW_BRK_DMG2", 7, 1, 0, 0))
						{
							iLocal_214 = 1;
						}
					}
				}
			}
			break;
		case 4:
			if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("towing")) == 0)
			{
				if (iLocal_171 == 1)
				{
					if (!iLocal_214)
					{
						if (__LIB_2__::func_859(&uParam0, "TOWAUD", "TOW_HARM", 7, 0, 0, 0))
						{
							iLocal_214 = 1;
						}
					}
				}
				else if (iLocal_171 == 3)
				{
					if (!iLocal_214)
					{
						if (__LIB_2__::func_859(&uParam0, "TOWAUD", "TOW_HARM_PED", 7, 0, 0, 0))
						{
							iLocal_214 = 1;
						}
					}
				}
			}
			else if (iLocal_171 == 1)
			{
				if (Global_113386.f_19973.f_5 == 0 || Global_113386.f_19973.f_5 == 1)
				{
					__LIB_0__::func_222(&Local_397, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
					__LIB_0__::func_222(&Local_397, 5, (*uParam165)[0 /*20*/], "TOWTRAINF", 0, 1);
					if (!iLocal_214)
					{
						if (__LIB_2__::func_859(&uParam0, "TOWAUD", "TOW_HARMED", 7, 0, 0, 0))
						{
							iLocal_214 = 1;
						}
					}
				}
				else if (Global_113386.f_19973.f_5 == 2)
				{
					__LIB_0__::func_222(&Local_397, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
					__LIB_0__::func_222(&Local_397, 6, (*uParam165)[0 /*20*/], "TOWILLEGALMAN2", 0, 1);
					if (!iLocal_214)
					{
						if (__LIB_2__::func_859(&uParam0, "TOWAUD", "TOW_HARM2", 7, 0, 0, 0))
						{
							iLocal_214 = 1;
						}
					}
				}
			}
			else if (iLocal_171 == 3)
			{
				if (Global_113386.f_19973.f_7 == 0 || Global_113386.f_19973.f_7 == 1)
				{
					__LIB_0__::func_222(&Local_397, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
					__LIB_0__::func_222(&Local_397, 5, (*uParam165)[0 /*20*/], "TOWBREAKM", 0, 1);
					if (!iLocal_214)
					{
						if (__LIB_2__::func_859(&uParam0, "TOWAUD", "TOW_BRK_HRM", 7, 0, 0, 0))
						{
							iLocal_214 = 1;
						}
					}
				}
				else if (Global_113386.f_19973.f_7 == 2)
				{
					__LIB_0__::func_222(&Local_397, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
					__LIB_0__::func_222(&Local_397, 6, (*uParam165)[0 /*20*/], "TOWBREAKHIPM", 0, 1);
					if (!iLocal_214)
					{
						if (__LIB_2__::func_859(&uParam0, "TOWAUD", "TOW_BRK_HRM2", 7, 0, 0, 0))
						{
							iLocal_214 = 1;
						}
					}
				}
			}
			break;
		case 6:
			if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("towing")) == 0)
			{
				if (iLocal_171 == 1)
				{
					if (!iLocal_214)
					{
						if (__LIB_2__::func_859(&uParam0, "TOWAUD", "TOW_DESERT", 7, 1, 0, 0))
						{
							iLocal_214 = 1;
						}
					}
				}
				else if (iLocal_171 == 3)
				{
					if (!iLocal_214)
					{
						if (__LIB_2__::func_859(&uParam0, "TOWAUD", "TOW_DESERT2", 7, 1, 0, 0))
						{
							iLocal_214 = 1;
						}
					}
				}
			}
			else if (iLocal_171 == 1)
			{
				if (Global_113386.f_19973.f_5 == 0 || Global_113386.f_19973.f_5 == 1)
				{
					__LIB_0__::func_222(&Local_397, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
					__LIB_0__::func_222(&Local_397, 5, (*uParam165)[0 /*20*/], "TOWTRAINF", 0, 1);
					if (!iLocal_214)
					{
						if (__LIB_2__::func_859(&uParam0, "TOWAUD", "TOW_DESERTED", 7, 1, 0, 0))
						{
							iLocal_214 = 1;
						}
					}
				}
				else if (Global_113386.f_19973.f_5 == 2)
				{
					__LIB_0__::func_222(&Local_397, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
					__LIB_0__::func_222(&Local_397, 6, (*uParam165)[0 /*20*/], "TOWILLEGALMAN2", 0, 1);
					if (!iLocal_214)
					{
						if (__LIB_2__::func_859(&uParam0, "TOWAUD", "TOW_DESERTD2", 7, 1, 0, 0))
						{
							iLocal_214 = 1;
						}
					}
				}
			}
			else if (iLocal_171 == 3)
			{
				if (Global_113386.f_19973.f_7 == 0 || Global_113386.f_19973.f_7 == 1)
				{
					__LIB_0__::func_222(&Local_397, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
					__LIB_0__::func_222(&Local_397, 5, (*uParam165)[0 /*20*/], "TOWBREAKM", 0, 1);
					if (!iLocal_214)
					{
						if (__LIB_2__::func_859(&uParam0, "TOWAUD", "TOW_BRK_DSRT", 7, 1, 0, 0))
						{
							iLocal_214 = 1;
						}
					}
				}
				else if (Global_113386.f_19973.f_7 == 2)
				{
					__LIB_0__::func_222(&Local_397, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
					__LIB_0__::func_222(&Local_397, 6, (*uParam165)[0 /*20*/], "TOWBREAKHIPM", 0, 1);
					if (!iLocal_214)
					{
						if (__LIB_2__::func_859(&uParam0, "TOWAUD", "TOW_BRK_DESR", 7, 1, 0, 0))
						{
							iLocal_214 = 1;
						}
					}
				}
			}
			break;
	}
}

void func_708(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, var uParam85, var uParam86, var uParam87, var uParam88, var uParam89, var uParam90, var uParam91, var uParam92, var uParam93, var uParam94, var uParam95, var uParam96, var uParam97, var uParam98, var uParam99, var uParam100, var uParam101, var uParam102, var uParam103, var uParam104, var uParam105, var uParam106, var uParam107, var uParam108, var uParam109, var uParam110, var uParam111, var uParam112, var uParam113, var uParam114, var uParam115, var uParam116, var uParam117, var uParam118, var uParam119, var uParam120, var uParam121, var uParam122, var uParam123, var uParam124, var uParam125, var uParam126, var uParam127, var uParam128, var uParam129, var uParam130, var uParam131, var uParam132, var uParam133, var uParam134, var uParam135, var uParam136, var uParam137, var uParam138, var uParam139, var uParam140, var uParam141, var uParam142, var uParam143, var uParam144, var uParam145, var uParam146, var uParam147, var uParam148, var uParam149, var uParam150, var uParam151, var uParam152, var uParam153, var uParam154, var uParam155, var uParam156, var uParam157, var uParam158, var uParam159, var uParam160, var uParam161, var uParam162, var uParam163, var uParam164, var uParam165)//Position - 0x28D96
{
	int iVar0;
	iVar0 = (MISC::GET_RANDOM_INT_IN_RANGE(0, 65535) % 4);
	if (iVar0 == 0)
	{
		__LIB_0__::func_222(&uParam0, 3, (*uParam165)[0 /*20*/], "TOWPEDA", 0, 1);
		__LIB_2__::func_859(&uParam0, "TOWAUD", "TOW_GEN_MCH", 7, 0, 0, 0);
		sLocal_227 = "TOW_GEN_MCH";
	}
	else if (iVar0 == 1)
	{
		__LIB_0__::func_222(&uParam0, 3, (*uParam165)[0 /*20*/], "TOWPEDB", 0, 1);
		__LIB_2__::func_859(&uParam0, "TOWAUD", "TOW_GEN_MCH1", 7, 0, 0, 0);
		sLocal_227 = "TOW_GEN_MCH1";
	}
	else if (iVar0 == 2)
	{
		__LIB_0__::func_222(&uParam0, 3, (*uParam165)[0 /*20*/], "TOWPEDD", 0, 1);
		__LIB_2__::func_859(&uParam0, "TOWAUD", "TOW_GEN_MCH3", 7, 0, 0, 0);
		sLocal_227 = "TOW_GEN_MCH3";
	}
	else if (iVar0 == 3)
	{
		__LIB_0__::func_222(&uParam0, 3, (*uParam165)[0 /*20*/], "TOWPEDE", 0, 1);
		__LIB_2__::func_859(&uParam0, "TOWAUD", "TOW_GEN_MCH4", 7, 0, 0, 0);
		sLocal_227 = "TOW_GEN_MCH4";
	}
}

void func_709(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, var uParam85, var uParam86, var uParam87, var uParam88, var uParam89, var uParam90, var uParam91, var uParam92, var uParam93, var uParam94, var uParam95, var uParam96, var uParam97, var uParam98, var uParam99, var uParam100, var uParam101, var uParam102, var uParam103, var uParam104, var uParam105, var uParam106, var uParam107, var uParam108, var uParam109, var uParam110, var uParam111, var uParam112, var uParam113, var uParam114, var uParam115, var uParam116, var uParam117, var uParam118, var uParam119, var uParam120, var uParam121, var uParam122, var uParam123, var uParam124, var uParam125, var uParam126, var uParam127, var uParam128, var uParam129, var uParam130, var uParam131, var uParam132, var uParam133, var uParam134, var uParam135, var uParam136, var uParam137, var uParam138, var uParam139, var uParam140, var uParam141, var uParam142, var uParam143, var uParam144, var uParam145, var uParam146, var uParam147, var uParam148, var uParam149, var uParam150, var uParam151, var uParam152, var uParam153, var uParam154, var uParam155, var uParam156, var uParam157, var uParam158, var uParam159, var uParam160, var uParam161, var uParam162, var uParam163, var uParam164, var uParam165)//Position - 0x28E7C
{
	__LIB_0__::func_222(&uParam0, 3, (*uParam165)[0 /*20*/], "TOWPEDC", 0, 1);
	__LIB_2__::func_859(&uParam0, "TOWAUD", "TOW_GEN_MCH2", 7, 0, 0, 0);
	sLocal_227 = "TOW_GEN_MCH2";
}

void func_710()//Position - 0x28FF7
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("tonya3")) == 1 || SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("tonya4")) == 1)
	{
		return;
	}
	if ((!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false) && !ENTITY::IS_ENTITY_DEAD(iLocal_556, false)) && !ENTITY::IS_ENTITY_DEAD(Local_565[0 /*20*/].f_6, false))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_565[0 /*20*/].f_6, PLAYER::PLAYER_PED_ID(), true))
		{
			if (!__LIB_0__::func_75())
			{
				if (!iLocal_548)
				{
					if (__LIB_2__::func_859(&Local_397, "TOWAUD", "TONYA_CARDAM", 8, 1, 0, 0))
					{
						iLocal_548 = 1;
					}
				}
			}
		}
	}
}

int func_711()//Position - 0x2B120
{
	if (!__LIB_1__::func_13(&iLocal_662))
	{
		__LIB_1__::func_362(&iLocal_662);
	}
	if (__LIB_1__::func_13(&iLocal_662))
	{
		if (__LIB_2__::func_572(&iLocal_662) > 7f)
		{
			if (!iLocal_521)
			{
				if (!__LIB_0__::func_75())
				{
					if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
					{
						WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), true);
					}
					__LIB_0__::func_222(&Local_397, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
					__LIB_0__::func_222(&Local_397, 3, 0, "TONYA", 0, 1);
					if (Global_113386.f_19973.f_3 == 2)
					{
						__LIB_14__::func_569(&Local_397, 103, "TOWAUD", "TONYA_WRAP3", 14, 1, 0, 0, 0);
					}
					else if (Global_113386.f_19973.f_3 == 3)
					{
						__LIB_14__::func_569(&Local_397, 103, "TOWAUD", "TONYA_WRAP4", 14, 1, 0, 0, 0);
					}
					iLocal_521 = 1;
				}
			}
		}
	}
	if (iLocal_521 && __LIB_14__::func_521())
	{
		return 1;
	}
	return 0;
}

void func_712()//Position - 0x2BCA9
{
	struct<3> Var0;
	struct<3> Var1;
	if (iLocal_541)
	{
		return;
	}
	if (bLocal_505)
	{
		return;
	}
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("tonya1")) == 1 || SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("tonya2")) == 1)
	{
		if (!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 402.5694f, -1632.3905f, 28.2928f, 50f, 50f, 50f, false, true, 0))
		{
			return;
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
	}
	if (!ENTITY::IS_ENTITY_DEAD(Local_565[0 /*20*/].f_6, false))
	{
		Var1 = { ENTITY::GET_ENTITY_COORDS(Local_565[0 /*20*/].f_6, true) };
	}
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("tonya5")) == 1)
	{
		if (!iLocal_541)
		{
			if (SYSTEM::VDIST2(Var0, -227.7806f, -1170.6628f, 21.8945f) < 400f)
			{
				if (__LIB_2__::func_572(&iLocal_668) > 90f)
				{
					if (__LIB_2__::func_859(&Local_397, "TOWAUD", "TOW_WAITING3", 9, 0, 0, 0))
					{
						iLocal_541 = 1;
					}
				}
			}
		}
	}
	if (SYSTEM::VDIST2(Var0, Var1) < 400f)
	{
		if (!__LIB_1__::func_13(&iLocal_668))
		{
			__LIB_1__::func_362(&iLocal_668);
		}
		else
		{
			if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("tonya1")) == 1)
			{
				if (__LIB_2__::func_572(&iLocal_668) > 25f)
				{
					if (!iLocal_541)
					{
						if (__LIB_2__::func_859(&Local_397, "TOWAUD", "TOW_WAIT", 9, 0, 0, 0))
						{
							iLocal_541 = 1;
						}
					}
				}
			}
			if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("tonya2")) == 1)
			{
				if (__LIB_2__::func_572(&iLocal_668) > 20f)
				{
					if (!iLocal_541)
					{
						if (__LIB_2__::func_859(&Local_397, "TOWAUD", "TOW_WAIT3", 9, 0, 0, 0))
						{
							iLocal_541 = 1;
						}
					}
				}
			}
		}
	}
}

void func_713()//Position - 0x2BE55
{
	if (!iLocal_530)
	{
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("tonya2")) == 1)
		{
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 399.88535f, -1649.8346f, 27.294472f, 432.559f, -1612.3158f, 35.34176f, 35f, false, true, 0))
				{
					if (__LIB_2__::func_859(&Local_397, "TOWAUD", "TOW_DROP", 8, 0, 0, 0))
					{
						iLocal_530 = 1;
					}
				}
			}
		}
		else if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("tonya5")) == 1)
		{
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -233.33939f, -1183.5979f, 21.073008f, -232.13821f, -1141.9463f, 29.08136f, 29.25f, false, true, 0))
				{
					if (__LIB_2__::func_859(&Local_397, "TOWAUD", "TOW_SHOP", 8, 0, 0, 0))
					{
						iLocal_530 = 1;
					}
				}
			}
		}
	}
}

void func_714()//Position - 0x2BF33
{
	struct<3> Var0;
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
	}
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("tonya5")) == 1)
	{
		if (!bLocal_532)
		{
			if (__LIB_2__::func_859(&Local_397, "TOWAUD", "TOW_REPAIR", 9, 0, 0, 0))
			{
				bLocal_532 = true;
			}
		}
		else if (bLocal_532)
		{
			if (!iLocal_535)
			{
				if (!__LIB_0__::func_75())
				{
					__LIB_0__::func_229("TOWT_OBJ_04", 7500, 1);
					iLocal_535 = 1;
				}
			}
		}
	}
	if (SYSTEM::VDIST2(Local_609, Var0) > 10000f)
	{
		switch (Global_113386.f_19973.f_3)
		{
			case 0:
				if ((!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false) && !ENTITY::IS_ENTITY_DEAD(iLocal_556, false)) && !ENTITY::IS_ENTITY_DEAD(iLocal_674, false))
				{
					if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_674, false) && PED::IS_PED_IN_VEHICLE(iLocal_556, iLocal_674, false))
					{
						if (!iLocal_522)
						{
							if (!__LIB_0__::func_75())
							{
								if (__LIB_2__::func_859(&Local_397, "TOWAUD", "TOW_TALK", 8, 0, 0, 0))
								{
									iLocal_522 = 1;
								}
							}
						}
						else if (iLocal_526)
						{
							if (__LIB_14__::func_782(&Local_397, "TOWAUD", "TOW_TALK", &Local_624, 8, 0, 0))
							{
								iLocal_526 = 0;
							}
						}
					}
				}
				break;
			case 1:
				if ((!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false) && !ENTITY::IS_ENTITY_DEAD(iLocal_556, false)) && !ENTITY::IS_ENTITY_DEAD(iLocal_674, false))
				{
					if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_674, false) && PED::IS_PED_IN_VEHICLE(iLocal_556, iLocal_674, false))
					{
						if (!iLocal_522)
						{
							if (!__LIB_0__::func_75())
							{
								if (__LIB_2__::func_859(&Local_397, "TOWAUD", "TOW_TALK2", 8, 0, 0, 0))
								{
									iLocal_522 = 1;
								}
							}
						}
						else if (iLocal_526)
						{
							if (__LIB_14__::func_782(&Local_397, "TOWAUD", "TOW_TALK2", &Local_624, 8, 0, 0))
							{
								iLocal_526 = 0;
							}
						}
					}
				}
				break;
			case 4:
				if ((!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false) && !ENTITY::IS_ENTITY_DEAD(iLocal_556, false)) && !ENTITY::IS_ENTITY_DEAD(iLocal_674, false))
				{
					if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_674, false) && PED::IS_PED_IN_VEHICLE(iLocal_556, iLocal_674, false))
					{
						if (!iLocal_522)
						{
							if (!__LIB_0__::func_75())
							{
								if (__LIB_2__::func_859(&Local_397, "TOWAUD", "TOW_CHAT2", 8, 0, 0, 0))
								{
									iLocal_522 = 1;
								}
							}
						}
						else if (iLocal_526)
						{
							if (__LIB_14__::func_782(&Local_397, "TOWAUD", "TOW_CHAT2", &Local_624, 8, 0, 0))
							{
								iLocal_526 = 0;
							}
						}
					}
				}
				break;
			}
	}
}

void func_715()//Position - 0x2C66C
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("tonya2")) == 1)
	{
		if (((!ENTITY::IS_ENTITY_DEAD(iLocal_556, false) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false)) && !ENTITY::IS_ENTITY_DEAD(iLocal_674, false)) && !ENTITY::IS_ENTITY_DEAD(Local_565[0 /*20*/].f_6, false))
		{
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_674, false) && PED::IS_PED_IN_VEHICLE(iLocal_556, iLocal_674, false))
			{
				if (!__LIB_0__::func_75())
				{
					if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(iLocal_674, Local_565[0 /*20*/].f_6))
					{
						if (!iLocal_549)
						{
							if (__LIB_2__::func_859(&Local_397, "TOWAUD", "TOW_CANGO", 9, 1, 0, 0))
							{
								iLocal_549 = 1;
							}
						}
					}
				}
			}
		}
	}
}

void func_716()//Position - 0x2EA1C
{
	float fVar0;
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_674, false))
	{
		fVar0 = ENTITY::GET_ENTITY_SPEED(iLocal_674);
	}
	if (fVar0 < 1f && ((!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false) && !ENTITY::IS_ENTITY_DEAD(iLocal_674, false)) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_674, true)))
	{
		if (!__LIB_1__::func_13(&iLocal_671))
		{
			__LIB_1__::func_362(&iLocal_671);
		}
		else if (!iLocal_545)
		{
			if (__LIB_2__::func_572(&iLocal_671) > 30f)
			{
				if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("tonya3")) == 1 || SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("tonya4")) == 1)
				{
					if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("tonya3")) == 1)
					{
						if (!ENTITY::IS_ENTITY_DEAD(Local_565[0 /*20*/], false) && PED::IS_PED_IN_VEHICLE(Local_565[0 /*20*/], iLocal_674, true))
						{
							if (__LIB_2__::func_859(&Local_397, "TOWAUD", "TOW_DAWDLE", 9, 0, 0, 0))
							{
								iLocal_545 = 1;
							}
						}
						else if (__LIB_1__::func_13(&iLocal_671))
						{
							__LIB_1__::func_31(&iLocal_671);
						}
					}
					else if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("tonya4")) == 1)
					{
						if (!ENTITY::IS_ENTITY_DEAD(Local_565[0 /*20*/], false) && PED::IS_PED_IN_VEHICLE(Local_565[0 /*20*/], iLocal_674, true))
						{
							if (__LIB_2__::func_859(&Local_397, "TOWAUD", "TOW_DAWDLE2", 9, 0, 0, 0))
							{
								iLocal_545 = 1;
							}
						}
						else if (__LIB_1__::func_13(&iLocal_671))
						{
							__LIB_1__::func_31(&iLocal_671);
						}
					}
				}
				else if (!ENTITY::IS_ENTITY_DEAD(iLocal_556, false) && PED::IS_PED_IN_VEHICLE(iLocal_556, iLocal_674, true))
				{
					if (__LIB_2__::func_859(&Local_397, "TOWAUD", "TONYA_STOP", 9, 1, 0, 0))
					{
						iLocal_545 = 1;
					}
				}
				else if (__LIB_1__::func_13(&iLocal_671))
				{
					__LIB_1__::func_31(&iLocal_671);
				}
			}
		}
	}
	else if (__LIB_1__::func_13(&iLocal_671))
	{
		__LIB_1__::func_31(&iLocal_671);
	}
}

void func_717()//Position - 0x353C5
{
	int iVar0;
	if (bLocal_534)
	{
		if (!iLocal_537)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_674) && !ENTITY::IS_ENTITY_DEAD(iLocal_674, false))
			{
				iVar0 = VEHICLE::GET_ENTITY_ATTACHED_TO_TOW_TRUCK(iLocal_674);
				if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0, false))
				{
					if (ENTITY::IS_ENTITY_A_VEHICLE(iVar0))
					{
						if (ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iVar0) != Local_565[0 /*20*/].f_6)
						{
							if (!iLocal_515)
							{
								__LIB_0__::func_222(&Local_397, 3, iLocal_556, "TONYA", 0, 1);
								__LIB_0__::func_151("TOW_TUT_07", -1);
								if (__LIB_2__::func_859(&uLocal_228, "TOWAUD", "TONYA_WRONG", 9, 0, 0, 0))
								{
									iLocal_515 = 1;
								}
							}
						}
					}
				}
				else
				{
					iLocal_515 = 0;
				}
			}
		}
	}
}

void func_718()//Position - 0x3BAAB
{
	if (!MISC::ARE_STRINGS_EQUAL(&cLocal_64, ""))
	{
		if (!__LIB_0__::func_75())
		{
			__LIB_2__::func_859(&Local_52, &cLocal_64, &cLocal_67, 9, 0, 0, 0);
			StringCopy(&cLocal_64, "", 16);
		}
	}
}

int func_719()//Position - 0x3F0E0
{
	struct<6> Var0;
	switch (iLocal_687)
	{
		case 0:
			if (TASK::GET_SEQUENCE_PROGRESS(Local_565[0 /*20*/]) >= 1 && !HUD::IS_MESSAGE_BEING_DISPLAYED())
			{
				iLocal_687 = 1;
			}
			break;
		case 1:
			Var0 = { __LIB_13__::func_743() };
			if (uLocal_516 && !iLocal_517)
			{
				if (!__LIB_0__::func_75())
				{
					if (!iLocal_518)
					{
						__LIB_0__::func_229("TOWT_OBJ_06", 7500, 1);
						iLocal_518 = 1;
					}
					if (iLocal_518 && !HUD::IS_MESSAGE_BEING_DISPLAYED())
					{
						if (__LIB_2__::func_859(&Local_397, "TOWAUD", "TOW_SEX_SCAR", 9, 0, 0, 0))
						{
							iLocal_517 = 1;
							iLocal_687 = 2;
						}
					}
				}
			}
			if (MISC::ARE_STRINGS_EQUAL(&Var0, "TOW_SEX_SCAR_2"))
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_565[0 /*20*/], false))
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(Local_565[0 /*20*/], joaat("SCRIPT_TASK_TURN_PED_TO_FACE_ENTITY")) != 1)
					{
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_565[0 /*20*/], Local_565[0 /*20*/].f_1, 0);
					}
				}
			}
			if (__LIB_14__::func_556(Local_565[0 /*20*/], 1) > 20f)
			{
				AUDIO::STOP_SCRIPTED_CONVERSATION(true);
				return 1;
			}
			break;
		case 2:
			if (__LIB_14__::func_556(Local_565[0 /*20*/], 1) > 20f)
			{
				AUDIO::STOP_SCRIPTED_CONVERSATION(true);
				return 1;
			}
			if (!__LIB_0__::func_75())
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_720()//Position - 0x3F94C
{
	switch (iLocal_225)
	{
		case 0:
			if (!__LIB_1__::func_13(&iLocal_410))
			{
				__LIB_1__::func_362(&iLocal_410);
			}
			else if (__LIB_2__::func_572(&iLocal_410) > 10f)
			{
				if (__LIB_2__::func_859(&uLocal_228, "TOWAUD", "TOW_SUGG2", 9, 0, 0, 0))
				{
					iLocal_225 = 1;
				}
			}
			break;
		case 1:
			if (!__LIB_0__::func_75())
			{
				if (__LIB_2__::func_859(&uLocal_228, "TOWAUD", "TOW_RESP", 9, 0, 0, 0))
				{
					__LIB_1__::func_31(&iLocal_410);
					iLocal_225 = 2;
				}
			}
			break;
		case 2:
			if (__LIB_1__::func_13(&iLocal_410))
			{
				if (__LIB_2__::func_572(&iLocal_410) > 15f)
				{
					if (!__LIB_0__::func_75())
					{
						if (__LIB_2__::func_859(&uLocal_228, "TOWAUD", "TOW_WAIT", 9, 0, 0, 0))
						{
							iLocal_225 = 3;
						}
					}
				}
			}
			break;
		case 3:
			break;
	}
}

void func_721()//Position - 0x3FA29
{
	if (!iLocal_208)
	{
		if (!HUD::IS_MESSAGE_BEING_DISPLAYED())
		{
			if (!__LIB_0__::func_75())
			{
				if (__LIB_2__::func_859(&uLocal_228, "TOWAUD", "TONYA_UNHOOK", 9, 0, 0, 0))
				{
					iLocal_208 = 1;
				}
			}
		}
	}
}

int func_722(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4)//Position - 0x3FB4A
{
	int iVar0;
	if (ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		iVar0 = (*uParam2 - ENTITY::GET_ENTITY_HEALTH(iParam1));
	}
	if (fLocal_179 == 0f)
	{
	}
	if (iVar0 > 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iParam1, false))
			{
				if ((PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iParam1, false)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam1, PLAYER::PLAYER_PED_ID(), true))
				{
					*uParam3 = (*uParam3 + iVar0);
				}
				else if (ENTITY::DOES_ENTITY_EXIST(iParam1))
				{
					*uParam2 = ENTITY::GET_ENTITY_HEALTH(iParam1);
					iVar0 = 0;
				}
			}
		}
	}
	switch (*uParam0)
	{
		case 0:
			if (*uParam3 > 250)
			{
				if (bParam4)
				{
					if (__LIB_2__::func_859(&Local_397, "TOWAUD", "TOW_DISP_DMA", 8, 0, 0, 0))
					{
						*uParam0 = 1;
					}
				}
				else if (__LIB_2__::func_859(&Local_397, "TOWAUD", "TOW_DISP_DMT", 8, 0, 0, 0))
				{
					*uParam0 = 1;
				}
				if (bParam4)
				{
					fLocal_179 = (fLocal_179 + 25f);
				}
			}
			break;
		case 1:
			if (*uParam3 > 500)
			{
				if (bParam4)
				{
					if (__LIB_2__::func_859(&Local_397, "TOWAUD", "TOW_DISP_DMA", 8, 0, 0, 0))
					{
						*uParam0 = 2;
					}
				}
				else if (__LIB_2__::func_859(&Local_397, "TOWAUD", "TOW_DISP_DT2", 8, 0, 0, 0))
				{
					*uParam0 = 2;
				}
				if (bParam4)
				{
					fLocal_179 = (fLocal_179 + 25f);
				}
			}
			break;
		case 2:
			if (*uParam3 > 900)
			{
				if (bParam4)
				{
					__LIB_2__::func_859(&Local_397, "TOWAUD", "TOW_DISP_DMB", 8, 0, 0, 0);
					*uParam0 = 3;
				}
				else
				{
					__LIB_2__::func_859(&Local_397, "TOWAUD", "TOW_DISP_DT2", 8, 0, 0, 0);
					*uParam0 = 3;
				}
				if (bParam4)
				{
					fLocal_179 = (fLocal_179 + 75f);
				}
			}
			break;
		case 3:
			break;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		*uParam2 = ENTITY::GET_ENTITY_HEALTH(iParam1);
	}
	return 0;
}

void func_723(struct<3> Param0, float fParam1)//Position - 0x44BE4
{
	int iVar0;
	if (__LIB_13__::func_821())
	{
		bLocal_512 = true;
	}
	if (bLocal_512)
	{
		__LIB_14__::func_532();
		while (!__LIB_14__::func_531())
		{
			SYSTEM::WAIT(0);
		}
	}
	if (bLocal_512)
	{
		iVar0 = __LIB_14__::func_616(Param0, fParam1);
		if (((!VEHICLE::IS_THIS_MODEL_A_BOAT(ENTITY::GET_ENTITY_MODEL(iVar0)) && !VEHICLE::IS_THIS_MODEL_A_PLANE(ENTITY::GET_ENTITY_MODEL(iVar0))) && !VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(iVar0))) && ENTITY::GET_ENTITY_MODEL(iVar0) != joaat("towtruck"))
		{
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar0, 5f);
		}
		else
		{
			if (ENTITY::GET_ENTITY_MODEL(iVar0) != joaat("towtruck"))
			{
			}
			VEHICLE::DELETE_VEHICLE(&iVar0);
		}
	}
}

void func_724()//Position - 0x2EBDC
{
	struct<3> Var0;
	struct<3> Var1;
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_177) && !ENTITY::IS_ENTITY_DEAD(iLocal_177, false))
	{
		Var1 = { ENTITY::GET_ENTITY_COORDS(iLocal_177, true) };
		if (!iLocal_551)
		{
			if (SYSTEM::VDIST2(Var0, Var1) > 40000f)
			{
				if ((((!ENTITY::IS_ENTITY_ON_SCREEN(iLocal_177) && !VEHICLE::IS_BIG_VEHICLE(iLocal_177)) && !VEHICLE::IS_THIS_MODEL_A_BOAT(ENTITY::GET_ENTITY_MODEL(iLocal_177))) && !VEHICLE::IS_THIS_MODEL_A_PLANE(ENTITY::GET_ENTITY_MODEL(iLocal_177))) && !VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(iLocal_177)))
				{
					if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("tonya1")) == 1)
					{
						ENTITY::SET_ENTITY_COORDS(iLocal_177, 417.5827f, -1645.5754f, 28.2928f, true, false, false, true);
						ENTITY::SET_ENTITY_HEADING(iLocal_177, 230.2828f);
						VEHICLE::SET_VEHICLE_HAS_BEEN_DRIVEN_FLAG(iLocal_177, false);
						ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_177, true, 1);
						__LIB_14__::func_775(iLocal_177, 417.5827f, -1645.5754f, 28.2928f, 230.2828f, 24, 0);
					}
					else if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("tonya2")) == 1)
					{
						ENTITY::SET_ENTITY_COORDS(iLocal_177, 417.5827f, -1645.5754f, 28.2928f, true, false, false, true);
						ENTITY::SET_ENTITY_HEADING(iLocal_177, 230.2828f);
						VEHICLE::SET_VEHICLE_HAS_BEEN_DRIVEN_FLAG(iLocal_177, false);
						ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_177, true, 1);
						__LIB_14__::func_775(iLocal_177, 417.5827f, -1645.5754f, 28.2928f, 230.2828f, 24, 0);
					}
					else if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("tonya3")) == 1)
					{
						ENTITY::SET_ENTITY_COORDS(iLocal_177, -214.5613f, -1397.9072f, 30.2688f, true, false, false, true);
						ENTITY::SET_ENTITY_HEADING(iLocal_177, 176.0831f);
						VEHICLE::SET_VEHICLE_HAS_BEEN_DRIVEN_FLAG(iLocal_177, false);
						ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_177, true, 1);
						__LIB_14__::func_775(iLocal_177, -214.5613f, -1397.9072f, 30.2688f, 176.0831f, 24, 0);
					}
					else if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("tonya4")) == 1)
					{
						ENTITY::SET_ENTITY_COORDS(iLocal_177, 537.5104f, -168.8889f, 53.5066f, true, false, false, true);
						ENTITY::SET_ENTITY_HEADING(iLocal_177, 358.4492f);
						VEHICLE::SET_VEHICLE_HAS_BEEN_DRIVEN_FLAG(iLocal_177, false);
						ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_177, true, 1);
						__LIB_14__::func_775(iLocal_177, 537.5104f, -168.8889f, 53.5066f, 358.4492f, 24, 0);
					}
					else if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("tonya5")) == 1)
					{
						ENTITY::SET_ENTITY_COORDS(iLocal_177, 417.5827f, -1645.5754f, 28.2928f, true, false, false, true);
						ENTITY::SET_ENTITY_HEADING(iLocal_177, 230.2828f);
						VEHICLE::SET_VEHICLE_HAS_BEEN_DRIVEN_FLAG(iLocal_177, false);
						ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_177, true, 1);
						__LIB_14__::func_775(iLocal_177, 417.5827f, -1645.5754f, 28.2928f, 230.2828f, 24, 0);
					}
					iLocal_551 = 1;
				}
			}
		}
	}
}

int func_725(var uParam0, int iParam1, int iParam2, var uParam3, var uParam4, bool bParam5)//Position - 0x3FEE8
{
	int iVar0;
	if (ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		iVar0 = (*uParam3 - ENTITY::GET_ENTITY_HEALTH(iParam1));
	}
	if (bParam5)
	{
		if (iVar0 > 0)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iParam1) && ENTITY::DOES_ENTITY_EXIST(iParam2))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iParam1, false) && !ENTITY::IS_ENTITY_DEAD(iParam2, false))
				{
					if ((ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam1, iParam2) || VEHICLE::IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(iParam2, iParam1)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam1, PLAYER::PLAYER_PED_ID(), true))
					{
						*uParam4 = (*uParam4 + iVar0);
					}
					else if (ENTITY::DOES_ENTITY_EXIST(iParam1))
					{
						*uParam3 = ENTITY::GET_ENTITY_HEALTH(iParam1);
						iVar0 = 0;
					}
				}
			}
		}
		switch (*uParam0)
		{
			case 0:
				if (*uParam4 > 250)
				{
					*uParam0 = 1;
					__LIB_5__::func_832("TOW_DMG_01", 25, -1);
					__LIB_15__::func_811(__LIB_0__::func_683(), 1, 25);
					fLocal_179 = (fLocal_179 + 25f);
				}
				break;
			case 1:
				if (*uParam4 > 500)
				{
					*uParam0 = 2;
					__LIB_5__::func_832("TOW_DMG_01", 75, -1);
					__LIB_15__::func_811(__LIB_0__::func_683(), 1, 75);
					fLocal_179 = (fLocal_179 + 75f);
				}
				break;
			case 2:
				if (*uParam4 > 550)
				{
					*uParam0 = 3;
					__LIB_0__::func_151("TOW_DMG_03", -1);
				}
				break;
			case 3:
				if (*uParam4 > 900)
				{
					return 0;
				}
				break;
			}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		*uParam3 = ENTITY::GET_ENTITY_HEALTH(iParam1);
	}
	return 1;
}

int func_726()//Position - 0x27826
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("tonya3")) == 1 || SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("tonya4")) == 1)
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_605[0 /*20*/], false) && !ENTITY::IS_ENTITY_DEAD(Local_605[0 /*20*/].f_6, false))
		{
			if (PED::IS_PED_IN_VEHICLE(Local_605[0 /*20*/], Local_605[0 /*20*/].f_6, false))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_727()//Position - 0x278F8
{
	if (((VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_714, 2, false) && VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_714, 3, false)) && VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_714, 1, false)) && VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_714, 0, false))
	{
		return 1;
	}
	if (((VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_714, 4, false) && VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_714, 5, false)) && VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_714, 1, false)) && VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_714, 0, false))
	{
		return 1;
	}
	if (((VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_714, 4, false) && VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_714, 5, false)) && VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_714, 2, false)) && VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_714, 3, false))
	{
		return 1;
	}
	return 0;
}

int func_728(var uParam0)//Position - 0x28424
{
	switch (iLocal_493)
	{
		case 1:
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0 && !PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
			{
				iLocal_254 = 0;
				return 1;
			}
			break;
		case 2:
			break;
		case 4:
			break;
		case 6:
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false) && !ENTITY::IS_ENTITY_DEAD(*uParam0, false))
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), *uParam0, false))
				{
					iLocal_254 = 0;
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_729(var uParam0, var uParam1)//Position - 0x28E06
{
	if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0 || PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
	{
		if (PLAYER::HAS_PLAYER_DAMAGED_AT_LEAST_ONE_NON_ANIMAL_PED(PLAYER::PLAYER_ID()))
		{
			PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_NON_ANIMAL_PED(PLAYER::PLAYER_ID());
		}
		iLocal_493 = 1;
		return 1;
	}
	if ((ENTITY::DOES_ENTITY_EXIST((uParam0[0 /*20*/])->f_6) && !ENTITY::IS_ENTITY_DEAD((uParam0[0 /*20*/])->f_6, false)) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		if (!bLocal_218)
		{
			if ((ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY((uParam0[0 /*20*/])->f_6, PLAYER::PLAYER_PED_ID(), true) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_OBJECT((uParam0[0 /*20*/])->f_6)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED((uParam0[0 /*20*/])->f_6))
			{
				iLocal_493 = 2;
				return 1;
			}
		}
	}
	if ((ENTITY::DOES_ENTITY_EXIST((*uParam0)[0 /*20*/]) && !ENTITY::IS_ENTITY_DEAD((*uParam0)[0 /*20*/], false)) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(PLAYER::PLAYER_PED_ID(), (*uParam0)[0 /*20*/], true))
		{
			iLocal_493 = 4;
			return 1;
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false) && !ENTITY::IS_ENTITY_DEAD(*uParam1, false))
	{
		if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), *uParam1, false))
		{
			iLocal_493 = 6;
			return 1;
		}
	}
	return 0;
}

void func_730()//Position - 0x2AF97
{
	Global_113386.f_19973.f_3++;
	Global_113386.f_19973.f_2 = iLocal_211;
	switch (iLocal_211)
	{
		case 2:
			Global_113386.f_19973.f_4++;
			break;
		case 3:
			Global_113386.f_19973.f_7++;
			break;
		case 0:
			Global_113386.f_19973.f_6++;
			break;
		case 1:
			Global_113386.f_19973.f_5++;
			break;
		case 4:
			Global_113386.f_19973.f_8++;
			break;
	}
}

void func_731()//Position - 0x2B449
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false) && !ENTITY::IS_ENTITY_DEAD(iLocal_714, false))
	{
		if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_714, false))
		{
			if (HUD::DOES_BLIP_EXIST(iLocal_599))
			{
				HUD::REMOVE_BLIP(&iLocal_599);
			}
			if (!HUD::DOES_BLIP_EXIST(iLocal_597))
			{
				iLocal_597 = HUD::ADD_BLIP_FOR_ENTITY(iLocal_714);
				HUD::SET_BLIP_COLOUR(iLocal_597, 3);
			}
		}
		else
		{
			if (!HUD::DOES_BLIP_EXIST(iLocal_599))
			{
				__LIB_38__::func_603(iLocal_599);
				iLocal_599 = HUD::ADD_BLIP_FOR_COORD(406.3804f, -1635.8673f, 28.2928f);
				HUD::SET_BLIP_ROUTE(iLocal_599, true);
			}
			if (HUD::DOES_BLIP_EXIST(iLocal_597))
			{
				HUD::REMOVE_BLIP(&iLocal_597);
			}
		}
	}
}

void func_732()//Position - 0x2C0ED
{
	struct<3> Var0;
	int iVar1;
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
	}
	if (iLocal_211 == 0)
	{
		if (SYSTEM::VDIST2(Var0, Local_434[iLocal_491 /*23*/].f_1) > 22500f)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_605[0 /*20*/]) && !ENTITY::IS_ENTITY_DEAD(Local_605[0 /*20*/], false))
			{
				if (ENTITY::IS_ENTITY_OCCLUDED(Local_605[0 /*20*/]))
				{
					PED::DELETE_PED(&(Local_605[0 /*20*/]));
				}
				else
				{
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_605[0 /*20*/]));
				}
			}
			STREAMING::REMOVE_ANIM_DICT("oddjobs@towing");
			STREAMING::REMOVE_ANIM_DICT("oddjobs@towingangryidle_a");
			STREAMING::REMOVE_ANIM_DICT("oddjobs@towingpleadingidle_b");
			STREAMING::REMOVE_ANIM_DICT("oddjobs@towingpleadingidle_a");
			STREAMING::REMOVE_ANIM_DICT("RANDOM@BICYCLE_THIEF@IDLE_A");
			STREAMING::REMOVE_ANIM_DICT("move_m@JOG@");
		}
	}
	else if (iLocal_211 == 1)
	{
		if (SYSTEM::VDIST2(Var0, Local_434[iLocal_491 /*23*/].f_1) > 22500f)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_595) && !ENTITY::IS_ENTITY_DEAD(iLocal_595, false))
			{
				if (ENTITY::IS_ENTITY_OCCLUDED(iLocal_595))
				{
					PED::DELETE_PED(&iLocal_595);
				}
				else
				{
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_595);
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_605[0 /*20*/].f_7) && !ENTITY::IS_ENTITY_DEAD(Local_605[0 /*20*/].f_7, false))
			{
				if (ENTITY::IS_ENTITY_OCCLUDED(Local_605[0 /*20*/].f_7))
				{
					VEHICLE::DELETE_MISSION_TRAIN(&(Local_605[0 /*20*/].f_7));
				}
				else
				{
					VEHICLE::SET_VEHICLE_STAYS_FROZEN_WHEN_CLEANED_UP(Local_605[0 /*20*/].f_7, true);
					VEHICLE::SET_MISSION_TRAIN_AS_NO_LONGER_NEEDED(&(Local_605[0 /*20*/].f_7), false);
				}
			}
		}
	}
	else if (iLocal_211 == 4)
	{
		iVar1 = 0;
		while (iVar1 < 2)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_605[0 /*20*/].f_2[iVar1]) && !ENTITY::IS_ENTITY_DEAD(Local_605[0 /*20*/].f_2[iVar1], false))
			{
				if (ENTITY::IS_ENTITY_OCCLUDED(Local_605[0 /*20*/].f_2[iVar1]))
				{
					PED::DELETE_PED(&(Local_605[0 /*20*/].f_2[iVar1]));
				}
				else
				{
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_605[0 /*20*/].f_2[iVar1]));
				}
			}
			iVar1++;
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_716))
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_716);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_715))
		{
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_715);
		}
		STREAMING::REMOVE_ANIM_DICT("REACTION@MALE_STAND@BIG_VARIATIONS@A");
		STREAMING::REMOVE_ANIM_DICT("move_m@JOG@");
	}
}

int func_733()//Position - 0x2C585
{
	if (bLocal_545)
	{
		if (bLocal_489)
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

void func_734(int iParam0, var uParam1)//Position - 0x2CAA8
{
	if (__LIB_0__::func_86(Local_86[0 /*3*/]))
	{
	}
	switch (iParam0)
	{
		case 0:
			*uParam1 = { -230.85141f, -1181.0723f, 21.06031f };
			uParam1->f_3 = { -230.46584f, -1163.1604f, 28.996408f };
			uParam1->f_6 = 22.25f;
			uParam1->f_17 = { Local_86[0 /*3*/] };
			break;
		case 1:
			*uParam1 = { -204.06029f, -1390.0239f, 30.253416f };
			uParam1->f_3 = { -207.56654f, -1382.5823f, 33.469368f };
			uParam1->f_6 = 17f;
			uParam1->f_17 = { Local_86[1 /*3*/] };
			break;
		case 2:
			*uParam1 = { -204.06029f, -1390.0239f, 30.253416f };
			uParam1->f_3 = { -207.56654f, -1382.5823f, 33.469368f };
			uParam1->f_6 = 17f;
			uParam1->f_17 = { Local_86[2 /*3*/] };
			break;
		case 3:
			*uParam1 = { 538.747f, -177.535f, 74.484f };
			uParam1->f_3 = { 528.747f, -177.535f, 34.484f };
			uParam1->f_6 = 28f;
			uParam1->f_17 = { Local_86[3 /*3*/] };
			break;
		case 4:
			*uParam1 = { 1158.944f, -776.686f, 77.608f };
			uParam1->f_3 = { 1118.944f, -776.686f, 37.608f };
			uParam1->f_6 = 10f;
			uParam1->f_17 = { Local_86[4 /*3*/] };
			break;
		case 5:
			*uParam1 = { 798.455f, -821.201f, 46.186f };
			uParam1->f_3 = { 813.455f, -821.201f, 6.186f };
			uParam1->f_6 = 20f;
			uParam1->f_17 = { Local_86[5 /*3*/] };
			break;
		case 6:
			*uParam1 = { 2504.934f, 4085.125f, 58.636f };
			uParam1->f_3 = { 2500.285f, 4075.156f, 18.636f };
			uParam1->f_6 = 12f;
			uParam1->f_17 = { Local_86[6 /*3*/] };
			break;
		case 7:
			*uParam1 = { 256.56226f, 2600.4578f, 43.3306f };
			uParam1->f_3 = { 268.67007f, 2602.716f, 46.74961f };
			uParam1->f_6 = 5f;
			uParam1->f_17 = { Local_86[7 /*3*/] };
			break;
		case 8:
			*uParam1 = { 398.74713f, -1650.8059f, 27.293236f };
			uParam1->f_3 = { 434.1311f, -1610.0115f, 33.342937f };
			uParam1->f_6 = 40.5f;
			uParam1->f_14 = { 400.28537f, -1632.597f, 28.29278f };
			uParam1->f_17 = { Local_87[0 /*3*/] };
			uParam1->f_7 = { 396.83475f, -1639.0447f, 27.292776f };
			uParam1->f_10 = { 408.0073f, -1625.6083f, 33.292774f };
			uParam1->f_13 = 10f;
			break;
	}
}

void func_735()//Position - 0x2CD88
{
	struct<3> Var0;
	struct<3> Var1;
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
	}
	if (!ENTITY::IS_ENTITY_DEAD(Local_605[0 /*20*/].f_6, false))
	{
		Var1 = { ENTITY::GET_ENTITY_COORDS(Local_605[0 /*20*/].f_6, true) };
	}
	if (SYSTEM::VDIST2(Var0, Var1) < 100f)
	{
		if (!iLocal_593)
		{
			if (HUD::DOES_BLIP_EXIST(Local_605[0 /*20*/].f_8))
			{
				HUD::REMOVE_BLIP(&(Local_605[0 /*20*/].f_8));
				iLocal_593 = 1;
			}
		}
		if (!HUD::DOES_BLIP_EXIST(Local_605[0 /*20*/].f_8))
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_605[0 /*20*/].f_6))
			{
				Local_605[0 /*20*/].f_8 = HUD::ADD_BLIP_FOR_ENTITY(Local_605[0 /*20*/].f_6);
				HUD::SET_BLIP_COLOUR(Local_605[0 /*20*/].f_8, 3);
				HUD::SET_BLIP_ROUTE(Local_605[0 /*20*/].f_8, true);
			}
		}
	}
}

void func_736(int iParam0)//Position - 0x2D635
{
	int iVar0;
	bLocal_544 = true;
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (iVar0 != iParam0)
		{
			if (HUD::DOES_BLIP_EXIST(Local_605[iVar0 /*20*/].f_8))
			{
				HUD::REMOVE_BLIP(&(Local_605[iVar0 /*20*/].f_8));
			}
		}
		iVar0++;
	}
}

int func_737()//Position - 0x2D677
{
	float fVar0;
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_714, false) && !ENTITY::IS_ENTITY_DEAD(Local_605[0 /*20*/].f_6, false))
	{
		if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(iLocal_714, Local_605[0 /*20*/].f_6))
		{
			fVar0 = ENTITY::GET_ENTITY_SPEED(iLocal_714);
			if (fVar0 > 1f)
			{
				if (!iLocal_590)
				{
					__LIB_0__::func_151("TOWT_HELP_SL", -1);
					iLocal_590 = 1;
				}
				return 1;
			}
		}
	}
	return 0;
}

void func_738()//Position - 0x2E7C3
{
	if (iLocal_211 == 2)
	{
		STREAMING::REQUEST_MODEL(joaat("primo"));
	}
	else if (iLocal_211 == 0)
	{
		STREAMING::REQUEST_MODEL(joaat("landstalker"));
		STREAMING::REQUEST_MODEL(joaat("A_M_M_GenFat_01"));
	}
	else if (iLocal_211 == 1)
	{
		STREAMING::REQUEST_MODEL(joaat("schwarzer"));
		STREAMING::REQUEST_MODEL(joaat("A_M_M_BevHills_02"));
	}
	else if (iLocal_211 == 3)
	{
		STREAMING::REQUEST_MODEL(joaat("tailgater"));
		STREAMING::REQUEST_MODEL(joaat("A_M_M_Tourist_01"));
	}
	else if (iLocal_211 == 4)
	{
		STREAMING::REQUEST_MODEL(joaat("intruder"));
		STREAMING::REQUEST_MODEL(joaat("S_M_M_Paramedic_01"));
		STREAMING::REQUEST_MODEL(joaat("A_M_Y_GenStreet_02"));
		STREAMING::REQUEST_MODEL(joaat("A_M_M_BevHills_02"));
	}
	if (iLocal_211 == 2)
	{
		while (!STREAMING::HAS_MODEL_LOADED(joaat("primo")))
		{
			SYSTEM::WAIT(0);
		}
	}
	else if (iLocal_211 == 0)
	{
		while (!STREAMING::HAS_MODEL_LOADED(joaat("landstalker")) || !STREAMING::HAS_MODEL_LOADED(joaat("A_M_M_GenFat_01")))
		{
			SYSTEM::WAIT(0);
		}
	}
	else if (iLocal_211 == 1)
	{
		while (!STREAMING::HAS_MODEL_LOADED(joaat("schwarzer")) || !STREAMING::HAS_MODEL_LOADED(joaat("A_M_M_BevHills_02")))
		{
			SYSTEM::WAIT(0);
		}
	}
	else if (iLocal_211 == 3)
	{
		while (!STREAMING::HAS_MODEL_LOADED(joaat("tailgater")) || !STREAMING::HAS_MODEL_LOADED(joaat("A_M_M_Tourist_01")))
		{
			SYSTEM::WAIT(0);
		}
	}
	else if (iLocal_211 == 4)
	{
		while (((!STREAMING::HAS_MODEL_LOADED(joaat("intruder")) || !STREAMING::HAS_MODEL_LOADED(joaat("S_M_M_Paramedic_01"))) || !STREAMING::HAS_MODEL_LOADED(joaat("A_M_Y_GenStreet_02"))) || !STREAMING::HAS_MODEL_LOADED(joaat("A_M_M_BevHills_02")))
		{
			SYSTEM::WAIT(0);
		}
	}
}

int func_739(bool bParam0)//Position - 0x3CAF2
{
	if (bLocal_256 || iLocal_255)
	{
		return 0;
	}
	if (bParam0)
	{
		if (bLocal_257)
		{
			return 0;
		}
	}
	return 1;
}

int func_740()//Position - 0x3DD50
{
	if (!ENTITY::IS_ENTITY_DEAD(Local_605[0 /*20*/], false))
	{
		if (bLocal_218)
		{
			switch (iLocal_641)
			{
				case 0:
					if (TASK::GET_SEQUENCE_PROGRESS(Local_605[0 /*20*/]) == 1)
					{
						iLocal_641 = 1;
					}
					break;
				case 1:
					if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_605[0 /*20*/], "oddjobs@towingpleadingidle_b", "idle_d", 3))
					{
						iLocal_641 = 2;
					}
					break;
				case 2:
					return 1;
					break;
				}
			}
	}
	return 0;
}

void func_741()//Position - 0x3E5D4
{
	if (!ENTITY::IS_ENTITY_DEAD(Local_605[0 /*20*/].f_7, false) && !ENTITY::IS_ENTITY_DEAD(Local_605[0 /*20*/].f_6, false))
	{
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(Local_605[0 /*20*/].f_7, Local_605[0 /*20*/].f_6))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_714, false) && !ENTITY::IS_ENTITY_DEAD(Local_605[0 /*20*/].f_6, false))
			{
				if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(iLocal_714, Local_605[0 /*20*/].f_6))
				{
					VEHICLE::DETACH_VEHICLE_FROM_TOW_TRUCK(iLocal_714, Local_605[0 /*20*/].f_6);
				}
			}
			VEHICLE::EXPLODE_VEHICLE(Local_605[0 /*20*/].f_6, true, false);
		}
	}
}

void func_742(struct<165> Param0, char* sParam1, char* sParam2, bool bParam3)//Position - 0x3F02E
{
	if (bParam3)
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
	}
	StringCopy(&cLocal_104, sParam1, 16);
	StringCopy(&cLocal_107, sParam2, 16);
	Local_92 = { Param0 };
}

int func_743(int iParam0, int iParam1, int iParam2)//Position - 0x3F1D9
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (Local_110[iVar0 /*3*/] == iParam0 && !HUD::DOES_BLIP_EXIST(Local_110[iVar0 /*3*/].f_1))
		{
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (!HUD::DOES_BLIP_EXIST(Local_110[iVar0 /*3*/].f_1))
		{
			Local_110[iVar0 /*3*/] = iParam0;
			Local_110[iVar0 /*3*/].f_1 = iParam1;
			Local_110[iVar0 /*3*/].f_2 = iParam2;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_744(struct<7> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14, int iParam15)//Position - 0x3F9F1
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam14) || !ENTITY::DOES_ENTITY_EXIST(iParam15))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam14, false) || ENTITY::IS_ENTITY_DEAD(iParam15, false))
	{
		return;
	}
	if (!__LIB_0__::func_86(Param0.f_14))
	{
		Var0 = { Param0.f_7 };
		Var1 = { Param0.f_10 };
		fVar2 = Param0.f_13;
	}
	else
	{
		Var0 = { Param0 };
		Var1 = { Param0.f_3 };
		fVar2 = Param0.f_6;
	}
	if (!iLocal_234)
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam15, Var0, Var1, fVar2, false, true, 0))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iParam14, false) && !ENTITY::IS_ENTITY_DEAD(iParam15, false))
			{
				if (!VEHICLE::IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(iParam14, iParam15))
				{
					HUD::CLEAR_HELP(true);
					HUD::CLEAR_PRINTS();
					iLocal_488 = 12;
					iLocal_234 = 1;
				}
			}
		}
	}
}

void func_745()//Position - 0x3FC98
{
	if (iLocal_721 < 16)
	{
		switch (iLocal_665)
		{
			case 2:
				sLocal_495 = "TOW_FAIL_05";
				break;
			case 0:
				sLocal_495 = "TOW_FAIL_10";
				break;
			case 6:
				sLocal_495 = "DTRSHRD_FAIL_03";
				break;
			case 1:
				sLocal_495 = "TOW_FAIL_08";
				break;
			case 10:
				sLocal_495 = "TOW_FAIL_17";
				break;
			case 11:
				sLocal_495 = "TOW_FAIL_08";
				break;
			case 12:
				sLocal_495 = "TOW_FAIL_08a";
				break;
			case 13:
				sLocal_495 = "TOW_FAIL_16";
				break;
			case 4:
				sLocal_495 = "TOW_FAIL_12";
				break;
			case 5:
				sLocal_495 = "TOW_FAIL_01";
				break;
			case 3:
				sLocal_495 = "TOW_FAIL_03a";
				break;
			case 8:
				sLocal_495 = "TOW_FAIL_04";
				break;
			case 9:
				sLocal_495 = "TOW_FAIL_04a";
				break;
			case 14:
				sLocal_495 = "TOW_FAIL_06";
				break;
			case 15:
				sLocal_495 = "TOW_FAIL_07";
				break;
			case 16:
				sLocal_495 = "TOW_FAIL_09";
				break;
			case 17:
				sLocal_495 = "TOW_FAIL_09a";
				break;
			case 18:
				sLocal_495 = "TOW_FAIL_02";
				break;
			case 19:
				sLocal_495 = "TOW_FAIL_02b";
				break;
			case 20:
				sLocal_495 = "TOW_FAIL_02b";
				break;
			case 21:
				sLocal_495 = "TOW_FAIL_11";
				break;
			case 22:
				sLocal_495 = "TOW_FAIL_13";
				break;
			case 23:
				sLocal_495 = "TOW_FAIL_14";
				break;
		}
		if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			sLocal_495 = "TOW_FAIL_15";
		}
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_495))
		{
			__LIB_0__::func_381(sLocal_495);
		}
		bLocal_520 = true;
	}
}

void func_746()//Position - 0x40633
{
	switch (iLocal_211)
	{
		case 2:
			if ((Global_113386.f_19973.f_4 % 2) == 0)
			{
				sLocal_499 = "TOWABDBITCHM";
				iLocal_639 = 2;
			}
			else
			{
				sLocal_499 = "TOWABDATTACKM";
				iLocal_639 = 2;
			}
			break;
		case 4:
			break;
		case 3:
			sLocal_499 = "TOWBREAKDOWN1";
			iLocal_639 = 3;
			break;
		case 0:
			sLocal_499 = "TOWHANDIBEGM";
			iLocal_639 = 5;
			break;
		case 1:
			sLocal_499 = "TOWTRAINM";
			iLocal_639 = 3;
			break;
	}
}

int func_747()//Position - 0x406BC
{
	return Local_434[iLocal_491 /*23*/].f_22;
}

void func_748()//Position - 0x4084F
{
	Local_86[0 /*3*/] = { -227.6f, -1172.1f, 21.8963f };
	Local_86[1 /*3*/] = { -205.6866f, -1384.3333f, 30.2585f };
	Local_86[2 /*3*/] = { -205.6866f, -1384.3333f, 30.2585f };
	Local_86[3 /*3*/] = { 532.4957f, -172.2088f, 53.6835f };
	Local_86[4 /*3*/] = { 1151.5066f, -773.4066f, 56.61f };
	Local_86[5 /*3*/] = { 808.4329f, -822.9456f, 25.1821f };
	Local_86[6 /*3*/] = { 2502.613f, 4080.141f, 37.6307f };
	Local_86[7 /*3*/] = { 263.4725f, 2601.8423f, 43.8197f };
	Local_87[0 /*3*/] = { 401.6046f, -1632.7806f, 28.2928f };
}

int func_749()//Position - 0x44F2E
{
	if (iLocal_1021 != 4)
	{
		if (bLocal_520)
		{
			sLocal_1024 = sLocal_495;
			return 1;
		}
	}
	return 0;
}

int func_750()//Position - 0x2B4EE
{
	switch (iLocal_640)
	{
		case 0:
			HUD::CLEAR_HELP(true);
			if (!HUD::DOES_BLIP_EXIST(iLocal_599))
			{
				__LIB_38__::func_603(iLocal_599);
				iLocal_599 = HUD::ADD_BLIP_FOR_COORD(406.3804f, -1635.8673f, 28.2928f);
				HUD::SET_BLIP_ROUTE(iLocal_599, true);
			}
			__LIB_0__::func_229("TOWT_DRIVE", 7500, 1);
			iLocal_640 = 1;
			break;
		case 1:
			if ((!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false) && !ENTITY::IS_ENTITY_DEAD(iLocal_596, false)) && !ENTITY::IS_ENTITY_DEAD(iLocal_714, false))
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_714, false) && PED::IS_PED_IN_VEHICLE(iLocal_596, iLocal_714, false))
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 398.9666f, -1641.2327f, 27.292774f, 411.13815f, -1626.6887f, 33.29278f, 15f, false, true, 0))
					{
						if (HUD::DOES_BLIP_EXIST(iLocal_599))
						{
							HUD::REMOVE_BLIP(&iLocal_599);
						}
						VEHICLE::BRING_VEHICLE_TO_HALT(iLocal_714, 5f, 1, false);
						VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_714, 1);
						iLocal_640 = 2;
					}
				}
			}
			break;
		case 2:
			return 1;
			break;
	}
	return 0;
}

void func_751(int* iParam0)//Position - 0x2C4E9
{
	__LIB_1__::func_12(iParam0);
	StringCopy(&cLocal_111, "", 32);
}

void func_752()//Position - 0x3B9BF
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (HUD::DOES_BLIP_EXIST(Local_110[iVar0 /*3*/].f_1))
		{
			if (ENTITY::IS_ENTITY_DEAD(Local_110[iVar0 /*3*/], false))
			{
				HUD::REMOVE_BLIP(&(Local_110[iVar0 /*3*/].f_1));
			}
			else if (Local_110[iVar0 /*3*/].f_2 && __LIB_14__::func_556(Local_110[iVar0 /*3*/], 1) > 200f)
			{
				HUD::REMOVE_BLIP(&(Local_110[iVar0 /*3*/].f_1));
			}
		}
		iVar0++;
	}
}

int func_753(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)//Position - 0x3CC57
{
	int iVar0;
	int iVar1;
	if (bParam3)
	{
		if (!bLocal_186)
		{
			iLocal_187 = ENTITY::GET_ENTITY_HEALTH(iParam0);
			bLocal_186 = true;
		}
		iLocal_188 = ENTITY::GET_ENTITY_HEALTH(iParam0);
		iLocal_189 = (iLocal_187 - iLocal_188);
		iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if (!ENTITY::IS_ENTITY_DEAD(iVar0, false))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iVar0, true))
			{
				if (IntToFloat(iLocal_189) > 100f)
				{
					return 1;
				}
			}
		}
		if (bLocal_186)
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, PLAYER::PLAYER_PED_ID(), true))
			{
				if (IntToFloat(iLocal_189) > 100f)
				{
					return 1;
				}
			}
		}
	}
	else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, PLAYER::PLAYER_PED_ID(), true))
	{
		return 1;
	}
	if (!bParam3)
	{
		iVar1 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if (!ENTITY::IS_ENTITY_DEAD(iVar1, false))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iVar1, true))
			{
				return 1;
			}
		}
	}
	if (bParam4)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
		{
			if (PED::IS_PED_BEING_JACKED(iParam0))
			{
				if (PED::GET_PEDS_JACKER(iParam0) == PLAYER::PLAYER_PED_ID())
				{
					return 1;
				}
			}
		}
	}
	if (bParam5)
	{
		if (PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()))
		{
			if (ENTITY::IS_ENTITY_AT_COORD(iParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 10f, 10f, 10f, false, true, 0))
			{
				if (PLAYER::HAS_PLAYER_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID()))
				{
					return 1;
				}
			}
		}
	}
	if (PED::IS_PED_PERFORMING_STEALTH_KILL(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::WAS_PED_KILLED_BY_STEALTH(iParam0))
		{
			return 1;
		}
	}
	if (__LIB_14__::func_536(PLAYER::PLAYER_PED_ID(), iParam0))
	{
		return 1;
	}
	if (bParam2)
	{
		if (PED::IS_PED_RAGDOLL(iParam0) && __LIB_14__::func_556(iParam0, 1) < 1.5f)
		{
			return 1;
		}
		else if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
		{
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), PED::GET_VEHICLE_PED_IS_IN(iParam0, false)))
			{
				return 1;
			}
		}
		else if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), iParam0))
		{
			return 1;
		}
		if (!ENTITY::IS_ENTITY_DEAD(iParam1, false))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam1, PLAYER::PLAYER_PED_ID(), true))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_754(var uParam0)//Position - 0x3D770
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 1)
	{
		Local_479[iVar0 /*18*/].f_2 = { *(uParam0[iVar0 /*3*/]) };
		Local_479[iVar0 /*18*/].f_5 = { 0f, 0f, -1f };
		if (iVar0 == 0)
		{
			Local_479[iVar0 /*18*/].f_8 = { __LIB_0__::func_79(MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f), MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f), 0f) };
		}
		else
		{
			Local_479[iVar0 /*18*/].f_8 = { __LIB_0__::func_79(0.5f, 1f, 0f) };
		}
		Local_479[iVar0 /*18*/].f_11 = 2f;
		Local_479[iVar0 /*18*/].f_12 = 1f;
		Local_479[iVar0 /*18*/].f_13 = 1f;
		Local_479[iVar0 /*18*/].f_14 = -1f;
		Local_479[iVar0 /*18*/].f_15 = 0.1f;
		Local_479[iVar0 /*18*/].f_17 = 0;
		Local_479[iVar0 /*18*/].f_1 = 1110;
		Local_479[iVar0 /*18*/] = GRAPHICS::ADD_DECAL(Local_479[iVar0 /*18*/].f_1, Local_479[iVar0 /*18*/].f_2, Local_479[iVar0 /*18*/].f_5, Local_479[iVar0 /*18*/].f_8, Local_479[iVar0 /*18*/].f_11, Local_479[iVar0 /*18*/].f_12, 0.196f, 0f, 0f, 1f, -1f, false, false, false);
		iVar0++;
	}
}

void func_755(bool bParam0)//Position - 0x3EEA2
{
	int iVar0;
	float fVar1;
	iVar0 = 0;
	fVar1 = __LIB_0__::func_76(Local_605[0 /*20*/], Local_605[0 /*20*/].f_6, 1);
	if (bParam0)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_714, false) && !ENTITY::IS_ENTITY_DEAD(Local_605[0 /*20*/].f_6, false))
		{
			if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(iLocal_714, Local_605[0 /*20*/].f_6) && !PED::IS_PED_IN_VEHICLE(Local_605[0 /*20*/], Local_605[0 /*20*/].f_6, false))
			{
				iVar0 = 1;
			}
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(Local_605[0 /*20*/], false))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_605[0 /*20*/], PLAYER::PLAYER_PED_ID(), true) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(PLAYER::PLAYER_PED_ID(), Local_605[0 /*20*/], true))
		{
			__LIB_1__::func_31(&iLocal_678);
			ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_605[0 /*20*/]);
			ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(PLAYER::PLAYER_PED_ID());
		}
	}
	if (ENTITY::IS_ENTITY_DEAD(Local_605[0 /*20*/], false))
	{
		iLocal_724 = 8;
	}
	else if (((fVar1 > 25f || (__LIB_2__::func_572(&iLocal_678) > 30f && fVar1 > 5f)) || iVar0) || (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false) && WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6)))
	{
		Local_594[0] = Local_605[0 /*20*/];
		Local_594[1] = Local_605[0 /*20*/].f_1;
		bLocal_554 = true;
		Local_594 = { Local_594 };
		HUD::REMOVE_BLIP(&(Local_605[0 /*20*/].f_9));
		if (!ENTITY::IS_ENTITY_DEAD(Local_605[0 /*20*/], false))
		{
			TASK::CLEAR_PED_TASKS(Local_605[0 /*20*/]);
			TASK::TASK_SMART_FLEE_PED(Local_605[0 /*20*/], PLAYER::PLAYER_PED_ID(), 1000f, -1, false, false);
		}
		iLocal_724 = 8;
	}
}

void func_756(int iParam0, int* iParam1, var uParam2, var uParam3, char* sParam4, var uParam5, int iParam6, bool bParam7, var uParam8, bool bParam9, var uParam10, bool bParam11, int iParam12, bool bParam13)//Position - 0x40166
{
	int iVar0;
	uParam10 = uParam10;
	if (bParam11)
	{
		if (HUD::DOES_BLIP_EXIST(*iParam1))
		{
			HUD::REMOVE_BLIP(iParam1);
		}
		*uParam5 = MISC::GET_GAME_TIMER();
		bLocal_256 = !__LIB_40__::func_668(iParam0);
		return;
	}
	else if (!HUD::DOES_BLIP_EXIST(*iParam1) && bLocal_256)
	{
		*iParam1 = HUD::ADD_BLIP_FOR_ENTITY(*iParam0);
		HUD::SET_BLIP_COLOUR(*iParam1, 3);
		HUD::SET_BLIP_ROUTE(*iParam1, true);
	}
	if (!bParam9)
	{
		if (!bLocal_256)
		{
			if (!__LIB_40__::func_668(iParam0))
			{
				HUD::CLEAR_SMALL_PRINTS();
				*uParam5 = MISC::GET_GAME_TIMER();
				if (bParam13)
				{
					if (iLocal_229)
					{
						__LIB_0__::func_229("DTRSHRD_03", 7500, 1);
						iLocal_229 = 0;
					}
					if (!HUD::DOES_BLIP_EXIST(*iParam1))
					{
						*iParam1 = HUD::ADD_BLIP_FOR_ENTITY(*iParam0);
						HUD::SET_BLIP_COLOUR(*iParam1, 3);
						HUD::SET_BLIP_ROUTE(*iParam1, true);
					}
				}
				iVar0 = 0;
				while (iVar0 < 1)
				{
					if (HUD::DOES_BLIP_EXIST((uParam2[iVar0 /*20*/])->f_8))
					{
						HUD::SET_BLIP_ROUTE((uParam2[iVar0 /*20*/])->f_8, false);
						HUD::REMOVE_BLIP(&((uParam2[iVar0 /*20*/])->f_8));
						*uParam8 = 0;
					}
					iVar0++;
				}
				if (HUD::DOES_BLIP_EXIST((uParam2[0 /*20*/])->f_9))
				{
					HUD::REMOVE_BLIP(&((uParam2[0 /*20*/])->f_9));
				}
				bLocal_256 = true;
			}
		}
		else if (__LIB_40__::func_668(iParam0))
		{
			if (HUD::DOES_BLIP_EXIST(*iParam1))
			{
				HUD::REMOVE_BLIP(iParam1);
			}
			if (!PED::IS_PED_INJURED((*uParam2)[0 /*20*/]))
			{
				if (!PED::IS_PED_IN_VEHICLE((*uParam2)[0 /*20*/], *iParam0, false) && !PED::IS_PED_IN_VEHICLE((*uParam2)[0 /*20*/], (uParam2[iParam6 /*20*/])->f_6, false))
				{
					if (!HUD::DOES_BLIP_EXIST((uParam2[0 /*20*/])->f_9))
					{
						(uParam2[0 /*20*/])->f_9 = HUD::ADD_BLIP_FOR_ENTITY((*uParam2)[iVar0 /*20*/]);
						HUD::SET_BLIP_COLOUR((uParam2[0 /*20*/])->f_9, 3);
						HUD::SET_BLIP_SCALE((uParam2[0 /*20*/])->f_9, 0.7f);
					}
				}
			}
			if (iLocal_230)
			{
				__LIB_0__::func_229(sParam4, 7500, 1);
				iLocal_230 = 0;
			}
			if (!__LIB_0__::func_86(*(uParam3[0 /*3*/])) && iParam12 == 9)
			{
				if (!HUD::DOES_BLIP_EXIST((uParam2[0 /*20*/])->f_8))
				{
					(uParam2[0 /*20*/])->f_8 = HUD::ADD_BLIP_FOR_COORD(*(uParam3[0 /*3*/]));
					HUD::SET_BLIP_ROUTE((uParam2[0 /*20*/])->f_8, true);
				}
			}
			else if (bParam7)
			{
				if (!ENTITY::IS_ENTITY_DEAD((uParam2[iParam6 /*20*/])->f_6, false))
				{
					if (!HUD::DOES_BLIP_EXIST((uParam2[iParam6 /*20*/])->f_8))
					{
						(uParam2[iParam6 /*20*/])->f_8 = HUD::ADD_BLIP_FOR_ENTITY((uParam2[iParam6 /*20*/])->f_6);
						HUD::SET_BLIP_COLOUR((uParam2[iParam6 /*20*/])->f_8, 3);
						HUD::SET_BLIP_ROUTE((uParam2[0 /*20*/])->f_8, true);
					}
				}
				else
				{
					if (iLocal_211 == 3)
					{
						Local_434[iLocal_491 /*23*/].f_1 = { -476.1537f, 132.6556f, 62.9586f };
					}
					if (!HUD::DOES_BLIP_EXIST((uParam2[0 /*20*/])->f_8))
					{
						(uParam2[0 /*20*/])->f_8 = HUD::ADD_BLIP_FOR_COORD(Local_434[iLocal_491 /*23*/].f_1);
						HUD::SET_BLIP_COLOUR((uParam2[0 /*20*/])->f_8, 3);
						HUD::SET_BLIP_ROUTE((uParam2[0 /*20*/])->f_8, true);
					}
				}
			}
			else
			{
				iVar0 = 0;
				while (iVar0 < 1)
				{
					if (!ENTITY::IS_ENTITY_DEAD((uParam2[iVar0 /*20*/])->f_6, false))
					{
						if (!HUD::DOES_BLIP_EXIST((uParam2[iVar0 /*20*/])->f_8))
						{
							(uParam2[iVar0 /*20*/])->f_8 = HUD::ADD_BLIP_FOR_ENTITY((uParam2[iVar0 /*20*/])->f_6);
							HUD::SET_BLIP_COLOUR((uParam2[iVar0 /*20*/])->f_8, 3);
							HUD::SET_BLIP_ROUTE((uParam2[iVar0 /*20*/])->f_8, true);
						}
					}
					else
					{
						if (iLocal_211 == 3)
						{
							Local_434[iLocal_491 /*23*/].f_1 = { -476.1537f, 132.6556f, 62.9586f };
						}
						if (!HUD::DOES_BLIP_EXIST((uParam2[0 /*20*/])->f_8))
						{
							(uParam2[0 /*20*/])->f_8 = HUD::ADD_BLIP_FOR_COORD(Local_434[iLocal_491 /*23*/].f_1);
							HUD::SET_BLIP_COLOUR((uParam2[0 /*20*/])->f_8, 3);
							HUD::SET_BLIP_ROUTE((uParam2[0 /*20*/])->f_8, true);
						}
					}
					iVar0++;
				}
			}
			*uParam5 = 0;
			bLocal_256 = false;
		}
	}
}

int func_757(float fParam0, int iParam1, int iParam2)//Position - 0x40769
{
	float fVar0;
	int iVar1;
	float fVar2;
	int iVar3[53];
	int iVar4;
	int iVar5;
	fVar0 = 500f;
	iVar1 = -1;
	iVar4 = 0;
	iVar5 = 0;
	while (iVar5 < 53)
	{
		fVar2 = __LIB_14__::func_523(Local_434[iVar5 /*23*/].f_1, 1);
		if (!__LIB_0__::func_86(Local_434[iVar5 /*23*/].f_1))
		{
			if ((fVar2 < fParam0 && fVar2 > fVar0) && iVar5 != iParam2)
			{
				if (iParam1 == -1)
				{
					iVar3[iVar4] = iVar5;
					iVar4++;
				}
				else if (Local_434[iVar5 /*23*/] == iParam1)
				{
					iVar3[iVar4] = iVar5;
					iVar4++;
				}
			}
		}
		iVar5++;
	}
	if (iVar4 > 1)
	{
		iVar1 = iVar3[MISC::GET_RANDOM_INT_IN_RANGE(0, (iVar4 - 1))];
	}
	else if (iVar4 == 1)
	{
		iVar1 = iVar3[0];
	}
	else
	{
		return 0;
	}
	return iVar1;
}

void func_758()//Position - 0x2C651
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var2;
	bool bVar3;
	if (((!ENTITY::IS_ENTITY_DEAD(iLocal_714, false) && !ENTITY::IS_ENTITY_DEAD(Local_605[0 /*20*/].f_6, false)) && VEHICLE::IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(iLocal_714, Local_605[0 /*20*/].f_6)) || (Global_113386.f_19973.f_3 == 0 || Global_113386.f_19973.f_3 > 2))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_714, false))
	{
		Var1 = { ENTITY::GET_ENTITY_COORDS(iLocal_714, true) };
	}
	if (!ENTITY::IS_ENTITY_DEAD(Local_605[0 /*20*/].f_6, false))
	{
		Var2 = { ENTITY::GET_ENTITY_COORDS(Local_605[0 /*20*/].f_6, true) };
	}
	bVar3 = false;
	if (SYSTEM::VDIST2(Var1, Var2) < 900f)
	{
		if (!__LIB_1__::func_13(&iLocal_687))
		{
			__LIB_1__::func_362(&iLocal_687);
		}
		else if (__LIB_2__::func_572(&iLocal_687) > 1f)
		{
			bVar3 = true;
		}
	}
	else if (SYSTEM::VDIST2(Var1, Var2) > 2500f)
	{
		__LIB_1__::func_31(&iLocal_687);
	}
	if (bVar3)
	{
		switch (iLocal_633)
		{
			case 0:
				if (!HUD::IS_HELP_MESSAGE_ON_SCREEN())
				{
					__LIB_0__::func_151("TOW_TUT_02", -1);
					__LIB_1__::func_31(&iLocal_687);
					iLocal_633 = 1;
				}
				break;
			case 1:
				if (__LIB_1__::func_13(&iLocal_687))
				{
					if (__LIB_2__::func_572(&iLocal_687) > 14f)
					{
						if (!HUD::IS_HELP_MESSAGE_ON_SCREEN())
						{
							__LIB_0__::func_151("TOW_TUT_03", 10000);
							__LIB_1__::func_31(&iLocal_687);
							iLocal_633 = 2;
						}
					}
				}
				break;
			case 2:
				if (__LIB_1__::func_13(&iLocal_687))
				{
					if (__LIB_2__::func_572(&iLocal_687) > 14f)
					{
						if (!HUD::IS_HELP_MESSAGE_ON_SCREEN())
						{
							iVar0 = (MISC::GET_RANDOM_INT_IN_RANGE(0, 65535) % 2);
							if (iVar0 == 0)
							{
								__LIB_0__::func_151("TOW_TUT_04C", -1);
							}
							else if (iVar0 == 1)
							{
								__LIB_0__::func_151("TOWT_HELP_CR", -1);
							}
							iLocal_633 = 3;
						}
					}
				}
				break;
			case 3:
				break;
			}
	}
}

void func_759()//Position - 0x2CA14
{
	if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_501, 30f, 30f, 2f, false, true, 0))
	{
		if (!__LIB_1__::func_13(&iLocal_690))
		{
			__LIB_1__::func_362(&iLocal_690);
		}
		else if ((!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false) && !ENTITY::IS_ENTITY_DEAD(iLocal_714, false)) && !ENTITY::IS_ENTITY_DEAD(Local_605[0 /*20*/].f_6, false))
		{
			if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(iLocal_714, Local_605[0 /*20*/].f_6))
			{
				if (__LIB_2__::func_572(&iLocal_690) > 30f)
				{
					__LIB_0__::func_151("TOWT_HELP_DP", -1);
				}
			}
		}
	}
}

int func_760(struct<3> Param0, float fParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0x2DCDF
{
	float fVar0;
	float fVar1;
	float fVar2;
	*iParam2 = __LIB_40__::func_650(&Local_605);
	if (*iParam2 == -1)
	{
		return 0;
	}
	if (iLocal_622 >= 2)
	{
		iLocal_622 = 0;
	}
	if (iLocal_211 == 2)
	{
		iLocal_600[0] = joaat("primo");
	}
	else if (iLocal_211 == 0)
	{
		iLocal_600[0] = joaat("landstalker");
	}
	else if (iLocal_211 == 1)
	{
		iLocal_600[0] = joaat("schwarzer");
	}
	else if (iLocal_211 == 3)
	{
		iLocal_600[0] = joaat("tailgater");
	}
	else if (iLocal_211 == 4)
	{
		iLocal_600[0] = joaat("intruder");
	}
	Local_605[*iParam2 /*20*/].f_6 = VEHICLE::CREATE_VEHICLE(iLocal_600[0], Param0, fParam1, true, true, false);
	ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_605[*iParam2 /*20*/].f_6, true, 1);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_600[0]);
	if (iLocal_211 == 3)
	{
		VEHICLE::SET_VEHICLE_COLOURS(Local_605[*iParam2 /*20*/].f_6, 27, 27);
	}
	iLocal_622++;
	fLocal_221 = __LIB_14__::func_523(Param0, 0);
	if (iLocal_211 == 1)
	{
		fVar0 = 20f;
		fVar1 = 40f;
		fVar2 = 60f;
	}
	else
	{
		fVar0 = 4f;
		fVar1 = 20f;
		fVar2 = 40f;
	}
	if (!__LIB_0__::func_86(Local_434[iLocal_491 /*23*/].f_10))
	{
		Local_605[*iParam2 /*20*/].f_17 = VEHICLE::ADD_ROAD_NODE_SPEED_ZONE(Local_434[iLocal_491 /*23*/].f_10, fVar0, 0f, false);
	}
	else
	{
		Local_605[*iParam2 /*20*/].f_17 = VEHICLE::ADD_ROAD_NODE_SPEED_ZONE(Param0, fVar0, 0f, false);
	}
	Local_605[*iParam2 /*20*/].f_18 = VEHICLE::ADD_ROAD_NODE_SPEED_ZONE(Param0, fVar1, 2.5f, false);
	Local_605[*iParam2 /*20*/].f_19 = VEHICLE::ADD_ROAD_NODE_SPEED_ZONE(Param0, fVar2, 4f, false);
	if (bParam3)
	{
		if (Local_605[*iParam2 /*20*/].f_15)
		{
			VEHICLE::SET_DISABLE_VEHICLE_PETROL_TANK_FIRES(Local_605[*iParam2 /*20*/].f_6, true);
			VEHICLE::SET_VEHICLE_ENGINE_HEALTH(Local_605[*iParam2 /*20*/].f_6, 1f);
			VEHICLE::SET_VEHICLE_ENGINE_CAN_DEGRADE(Local_605[*iParam2 /*20*/].f_6, false);
		}
		else
		{
			VEHICLE::SET_DISABLE_VEHICLE_PETROL_TANK_FIRES(Local_605[*iParam2 /*20*/].f_6, true);
			VEHICLE::SET_VEHICLE_ENGINE_HEALTH(Local_605[*iParam2 /*20*/].f_6, 1f);
			VEHICLE::SET_VEHICLE_ENGINE_CAN_DEGRADE(Local_605[*iParam2 /*20*/].f_6, false);
		}
	}
	if (!bLocal_544 && bParam4)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_605[*iParam2 /*20*/].f_6))
		{
			Local_605[*iParam2 /*20*/].f_8 = HUD::ADD_BLIP_FOR_ENTITY(Local_605[*iParam2 /*20*/].f_6);
			HUD::SET_BLIP_COLOUR(Local_605[*iParam2 /*20*/].f_8, 3);
		}
	}
	else
	{
		if (bLocal_544)
		{
		}
		if (bParam4)
		{
		}
	}
	iLocal_621++;
	__LIB_1__::func_362(&(Local_605[*iParam2 /*20*/].f_11));
	return 1;
}

void func_761()//Position - 0x2E955
{
	__LIB_1__::func_330(&uLocal_203, 8);
	__LIB_1__::func_330(&uLocal_203, 16);
	__LIB_1__::func_330(&uLocal_203, 2);
}

void func_762()//Position - 0x3B787
{
	int iVar0;
	if (!bLocal_529)
	{
		iVar0 = SYSTEM::ROUND(((300f - __LIB_2__::func_559(&iLocal_681)) * 1000f));
		if (iLocal_211 == 3)
		{
			if ((iVar0 / 1000) < 60)
			{
				__LIB_1__::func_350(iVar0, "TOW_TIME", 0, 0, -1, 0, 2, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, -1);
			}
			else
			{
				__LIB_1__::func_350(iVar0, "TOW_TIME", 0, 0, -1, 0, 2, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1);
			}
		}
	}
}

int func_763(int iParam0)//Position - 0x3E54F
{
	float fVar0;
	if (!__LIB_1__::func_13(&iLocal_480))
	{
		__LIB_1__::func_362(&iLocal_480);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
		{
			fVar0 = ENTITY::GET_ENTITY_SPEED(iParam0);
		}
		else
		{
			return 0;
		}
	}
	if (__LIB_15__::func_251(&iLocal_480, 0.15f))
	{
		fLocal_487 = (fVar0 - 0.35f);
		if (fLocal_487 < 8f)
		{
			fLocal_487 = 8f;
		}
		__LIB_1__::func_31(&iLocal_480);
		VEHICLE::SET_TRAIN_CRUISE_SPEED(iParam0, fLocal_487);
		VEHICLE::SET_TRAIN_SPEED(iParam0, fLocal_487);
	}
	return 1;
}

void func_764(var uParam0, var uParam1, var uParam2, int* iParam3, int* iParam4, int iParam5, int iParam6, int iParam7)//Position - 0x44ABD
{
	uParam1 = uParam1;
	if (!bLocal_250)
	{
		if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::GET_PLAYER_INDEX(), 0))
		{
			if (__LIB_0__::func_75())
			{
				__LIB_0__::func_429();
			}
			if (iParam7 != 0)
			{
				if (!ENTITY::IS_ENTITY_DEAD(iParam7, false))
				{
					__LIB_0__::func_709(iParam7, "GET_WANTED_LEVEL", "TONYA", 34);
				}
			}
			if (HUD::DOES_BLIP_EXIST((uParam0[0 /*20*/])->f_8))
			{
				HUD::REMOVE_BLIP(&((uParam0[0 /*20*/])->f_8));
			}
			if (HUD::DOES_BLIP_EXIST((uParam0[0 /*20*/])->f_9))
			{
				HUD::REMOVE_BLIP(&((uParam0[0 /*20*/])->f_9));
			}
			if (HUD::DOES_BLIP_EXIST(*iParam3))
			{
				HUD::REMOVE_BLIP(iParam3);
			}
			if (HUD::DOES_BLIP_EXIST(*iParam4))
			{
				HUD::REMOVE_BLIP(iParam4);
			}
			bLocal_250 = true;
			__LIB_0__::func_229("TOW_OBJ_06", 7500, 1);
		}
	}
	else if (!PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::GET_PLAYER_INDEX(), 0) && bLocal_250)
	{
		if (__LIB_0__::func_501("TOW_OBJ_06", 0, 0))
		{
			HUD::CLEAR_PRINTS();
		}
		if (!HUD::DOES_BLIP_EXIST((uParam0[0 /*20*/])->f_8))
		{
			if (iParam6 > 1)
			{
				if (bLocal_256)
				{
					*iParam3 = HUD::ADD_BLIP_FOR_ENTITY(*iParam5);
					HUD::SET_BLIP_COLOUR(*iParam3, 3);
					return;
				}
				if (iParam6 >= 9 && iParam6 < 11)
				{
					if ((!ENTITY::IS_ENTITY_DEAD(*iParam5, false) && !ENTITY::IS_ENTITY_DEAD((uParam0[0 /*20*/])->f_6, false)) && VEHICLE::IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(*iParam5, (uParam0[0 /*20*/])->f_6))
					{
						__LIB_38__::func_603(*iParam4);
						*iParam4 = HUD::ADD_BLIP_FOR_COORD(*(uParam2[0 /*3*/]));
						HUD::SET_BLIP_COLOUR(*iParam4, 5);
						HUD::SET_BLIP_ROUTE(*iParam4, true);
					}
					else
					{
						(uParam0[0 /*20*/])->f_8 = HUD::ADD_BLIP_FOR_ENTITY((uParam0[0 /*20*/])->f_6);
						HUD::SET_BLIP_COLOUR((uParam0[0 /*20*/])->f_8, 3);
						HUD::SET_BLIP_ROUTE((uParam0[0 /*20*/])->f_8, true);
					}
				}
				else if (iParam6 < 11)
				{
					(uParam0[0 /*20*/])->f_8 = HUD::ADD_BLIP_FOR_COORD(*(uParam2[0 /*3*/]));
					HUD::SET_BLIP_COLOUR((uParam0[0 /*20*/])->f_8, 3);
					HUD::SET_BLIP_ROUTE((uParam0[0 /*20*/])->f_8, true);
				}
			}
			else if (!HUD::DOES_BLIP_EXIST(*iParam3))
			{
				*iParam3 = HUD::ADD_BLIP_FOR_ENTITY(*iParam5);
				HUD::SET_BLIP_COLOUR(*iParam3, 3);
				HUD::SET_BLIP_ROUTE(*iParam3, true);
			}
		}
		fLocal_221 = __LIB_14__::func_523(*(uParam2[0 /*3*/]), 0);
		bLocal_250 = false;
	}
}

void func_765(int* iParam0, float fParam1, bool bParam2)//Position - 0x3BA6F
{
	if (__LIB_17__::func_336(iParam0, fParam1))
	{
		if (bParam2)
		{
			__LIB_0__::func_151(&cLocal_111, -1);
		}
		else
		{
			__LIB_0__::func_229(&cLocal_111, 7500, 1);
		}
	}
}

int func_766()//Position - 0x275B7
{
	if (!bLocal_539)
	{
		if (__LIB_15__::func_251(&iLocal_681, 180f))
		{
			bLocal_539 = true;
			__LIB_0__::func_222(&Local_437, 4, 0, "TOWDISPATCH", 0, 1);
			__LIB_0__::func_222(&Local_437, 4, 0, "TOWDISPATCH", 0, 1);
			__LIB_2__::func_859(&Local_437, "TOWAUD", "TOW_DISP3", 9, 0, 0, 0);
		}
	}
	if (!iLocal_584)
	{
		if (iLocal_721 == 9)
		{
			if (bLocal_539)
			{
				if (!__LIB_0__::func_75())
				{
					__LIB_0__::func_151("TOWT_HELP_TM", -1);
					iLocal_584 = 1;
				}
			}
		}
	}
	if (__LIB_15__::func_251(&iLocal_681, 300f))
	{
		iLocal_665 = 14;
		return 1;
	}
	return 0;
}

void func_767(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, var uParam85, var uParam86, var uParam87, var uParam88, var uParam89, var uParam90, var uParam91, var uParam92, var uParam93, var uParam94, var uParam95, var uParam96, var uParam97, var uParam98, var uParam99, var uParam100, var uParam101, var uParam102, var uParam103, var uParam104, var uParam105, var uParam106, var uParam107, var uParam108, var uParam109, var uParam110, var uParam111, var uParam112, var uParam113, var uParam114, var uParam115, var uParam116, var uParam117, var uParam118, var uParam119, var uParam120, var uParam121, var uParam122, var uParam123, var uParam124, var uParam125, var uParam126, var uParam127, var uParam128, var uParam129, var uParam130, var uParam131, var uParam132, var uParam133, var uParam134, var uParam135, var uParam136, var uParam137, var uParam138, var uParam139, var uParam140, var uParam141, var uParam142, var uParam143, var uParam144, var uParam145, var uParam146, var uParam147, var uParam148, var uParam149, var uParam150, var uParam151, var uParam152, var uParam153, var uParam154, var uParam155, var uParam156, var uParam157, var uParam158, var uParam159, var uParam160, var uParam161, var uParam162, var uParam163, var uParam164, var uParam165)//Position - 0x284AE
{
	switch (iLocal_493)
	{
		case 1:
			if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("towing")) == 0)
			{
				if (iLocal_211 == 1)
				{
					if (!iLocal_254)
					{
						if (__LIB_2__::func_859(&uParam0, "TOWAUD", "TOW_SHOCK", 7, 1, 0, 0))
						{
							PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_NON_ANIMAL_PED(PLAYER::PLAYER_ID());
							iLocal_254 = 1;
						}
					}
				}
				else if (iLocal_211 == 3)
				{
					if (!iLocal_254)
					{
						if (__LIB_2__::func_859(&uParam0, "TOWAUD", "TOW_SHOCK2", 7, 1, 0, 0))
						{
							PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_NON_ANIMAL_PED(PLAYER::PLAYER_ID());
							iLocal_254 = 1;
						}
					}
				}
			}
			else if (iLocal_211 == 1)
			{
				if (Global_113386.f_19973.f_5 == 0 || Global_113386.f_19973.f_5 == 1)
				{
					__LIB_0__::func_222(&Local_437, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
					__LIB_0__::func_222(&Local_437, 5, (*uParam165)[0 /*20*/], "TOWTRAINF", 0, 1);
					if (!iLocal_254)
					{
						if (__LIB_2__::func_859(&uParam0, "TOWAUD", "TOW_SHOCKGEN", 7, 1, 0, 0))
						{
							iLocal_254 = 1;
						}
					}
				}
				else if (Global_113386.f_19973.f_5 == 2)
				{
					__LIB_0__::func_222(&Local_437, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
					__LIB_0__::func_222(&Local_437, 6, (*uParam165)[0 /*20*/], "TOWILLEGALMAN2", 0, 1);
					if (!iLocal_254)
					{
						if (__LIB_2__::func_859(&uParam0, "TOWAUD", "TOW_GENSHOCK", 7, 1, 0, 0))
						{
							iLocal_254 = 1;
						}
					}
				}
			}
			else if (iLocal_211 == 3)
			{
				if (Global_113386.f_19973.f_7 == 0 || Global_113386.f_19973.f_7 == 1)
				{
					__LIB_0__::func_222(&Local_437, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
					__LIB_0__::func_222(&Local_437, 5, (*uParam165)[0 /*20*/], "TOWBREAKM", 0, 1);
					if (!iLocal_254)
					{
						if (__LIB_2__::func_859(&uParam0, "TOWAUD", "TOW_BRK_SHK", 7, 1, 0, 0))
						{
							iLocal_254 = 1;
						}
					}
				}
				else if (Global_113386.f_19973.f_7 == 2)
				{
					__LIB_0__::func_222(&Local_437, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
					__LIB_0__::func_222(&Local_437, 6, (*uParam165)[0 /*20*/], "TOWBREAKHIPM", 0, 1);
					if (!iLocal_254)
					{
						if (__LIB_2__::func_859(&uParam0, "TOWAUD", "TOW_BRK_SHK2", 7, 1, 0, 0))
						{
							iLocal_254 = 1;
						}
					}
				}
			}
			break;
		case 2:
			if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("towing")) == 0)
			{
				if (iLocal_211 == 1)
				{
					if (!iLocal_254)
					{
						if (__LIB_2__::func_859(&uParam0, "TOWAUD", "TOW_DAMAGE", 7, 1, 0, 0))
						{
							iLocal_254 = 1;
						}
					}
				}
				else if (iLocal_211 == 3)
				{
					if (!iLocal_254)
					{
						if (__LIB_2__::func_859(&uParam0, "TOWAUD", "TOW_DAMAGE2", 7, 1, 0, 0))
						{
							iLocal_254 = 1;
						}
					}
				}
			}
			else if (iLocal_211 == 1)
			{
				if (Global_113386.f_19973.f_5 == 0 || Global_113386.f_19973.f_5 == 1)
				{
					__LIB_0__::func_222(&Local_437, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
					__LIB_0__::func_222(&Local_437, 5, (*uParam165)[0 /*20*/], "TOWTRAINF", 0, 1);
					if (!iLocal_254)
					{
						if (__LIB_2__::func_859(&uParam0, "TOWAUD", "TOW_DAMCAR", 7, 1, 0, 0))
						{
							iLocal_254 = 1;
						}
					}
				}
				else if (Global_113386.f_19973.f_5 == 2)
				{
					__LIB_0__::func_222(&Local_437, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
					__LIB_0__::func_222(&Local_437, 6, (*uParam165)[0 /*20*/], "TOWILLEGALMAN2", 0, 1);
					if (!iLocal_254)
					{
						if (__LIB_2__::func_859(&uParam0, "TOWAUD", "TOW_CARDAM", 7, 1, 0, 0))
						{
							iLocal_254 = 1;
						}
					}
				}
			}
			else if (iLocal_211 == 3)
			{
				if (Global_113386.f_19973.f_7 == 0 || Global_113386.f_19973.f_7 == 1)
				{
					__LIB_0__::func_222(&Local_437, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
					__LIB_0__::func_222(&Local_437, 5, (*uParam165)[0 /*20*/], "TOWBREAKM", 0, 1);
					if (!iLocal_254)
					{
						if (__LIB_2__::func_859(&uParam0, "TOWAUD", "TOW_BRK_DMG", 7, 1, 0, 0))
						{
							iLocal_254 = 1;
						}
					}
				}
				else if (Global_113386.f_19973.f_7 == 2)
				{
					__LIB_0__::func_222(&Local_437, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
					__LIB_0__::func_222(&Local_437, 6, (*uParam165)[0 /*20*/], "TOWBREAKHIPM", 0, 1);
					if (!iLocal_254)
					{
						if (__LIB_2__::func_859(&uParam0, "TOWAUD", "TOW_BRK_DMG2", 7, 1, 0, 0))
						{
							iLocal_254 = 1;
						}
					}
				}
			}
			break;
		case 4:
			if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("towing")) == 0)
			{
				if (iLocal_211 == 1)
				{
					if (!iLocal_254)
					{
						if (__LIB_2__::func_859(&uParam0, "TOWAUD", "TOW_HARM", 7, 0, 0, 0))
						{
							iLocal_254 = 1;
						}
					}
				}
				else if (iLocal_211 == 3)
				{
					if (!iLocal_254)
					{
						if (__LIB_2__::func_859(&uParam0, "TOWAUD", "TOW_HARM_PED", 7, 0, 0, 0))
						{
							iLocal_254 = 1;
						}
					}
				}
			}
			else if (iLocal_211 == 1)
			{
				if (Global_113386.f_19973.f_5 == 0 || Global_113386.f_19973.f_5 == 1)
				{
					__LIB_0__::func_222(&Local_437, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
					__LIB_0__::func_222(&Local_437, 5, (*uParam165)[0 /*20*/], "TOWTRAINF", 0, 1);
					if (!iLocal_254)
					{
						if (__LIB_2__::func_859(&uParam0, "TOWAUD", "TOW_HARMED", 7, 0, 0, 0))
						{
							iLocal_254 = 1;
						}
					}
				}
				else if (Global_113386.f_19973.f_5 == 2)
				{
					__LIB_0__::func_222(&Local_437, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
					__LIB_0__::func_222(&Local_437, 6, (*uParam165)[0 /*20*/], "TOWILLEGALMAN2", 0, 1);
					if (!iLocal_254)
					{
						if (__LIB_2__::func_859(&uParam0, "TOWAUD", "TOW_HARM2", 7, 0, 0, 0))
						{
							iLocal_254 = 1;
						}
					}
				}
			}
			else if (iLocal_211 == 3)
			{
				if (Global_113386.f_19973.f_7 == 0 || Global_113386.f_19973.f_7 == 1)
				{
					__LIB_0__::func_222(&Local_437, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
					__LIB_0__::func_222(&Local_437, 5, (*uParam165)[0 /*20*/], "TOWBREAKM", 0, 1);
					if (!iLocal_254)
					{
						if (__LIB_2__::func_859(&uParam0, "TOWAUD", "TOW_BRK_HRM", 7, 0, 0, 0))
						{
							iLocal_254 = 1;
						}
					}
				}
				else if (Global_113386.f_19973.f_7 == 2)
				{
					__LIB_0__::func_222(&Local_437, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
					__LIB_0__::func_222(&Local_437, 6, (*uParam165)[0 /*20*/], "TOWBREAKHIPM", 0, 1);
					if (!iLocal_254)
					{
						if (__LIB_2__::func_859(&uParam0, "TOWAUD", "TOW_BRK_HRM2", 7, 0, 0, 0))
						{
							iLocal_254 = 1;
						}
					}
				}
			}
			break;
		case 6:
			if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("towing")) == 0)
			{
				if (iLocal_211 == 1)
				{
					if (!iLocal_254)
					{
						if (__LIB_2__::func_859(&uParam0, "TOWAUD", "TOW_DESERT", 7, 1, 0, 0))
						{
							iLocal_254 = 1;
						}
					}
				}
				else if (iLocal_211 == 3)
				{
					if (!iLocal_254)
					{
						if (__LIB_2__::func_859(&uParam0, "TOWAUD", "TOW_DESERT2", 7, 1, 0, 0))
						{
							iLocal_254 = 1;
						}
					}
				}
			}
			else if (iLocal_211 == 1)
			{
				if (Global_113386.f_19973.f_5 == 0 || Global_113386.f_19973.f_5 == 1)
				{
					__LIB_0__::func_222(&Local_437, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
					__LIB_0__::func_222(&Local_437, 5, (*uParam165)[0 /*20*/], "TOWTRAINF", 0, 1);
					if (!iLocal_254)
					{
						if (__LIB_2__::func_859(&uParam0, "TOWAUD", "TOW_DESERTED", 7, 1, 0, 0))
						{
							iLocal_254 = 1;
						}
					}
				}
				else if (Global_113386.f_19973.f_5 == 2)
				{
					__LIB_0__::func_222(&Local_437, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
					__LIB_0__::func_222(&Local_437, 6, (*uParam165)[0 /*20*/], "TOWILLEGALMAN2", 0, 1);
					if (!iLocal_254)
					{
						if (__LIB_2__::func_859(&uParam0, "TOWAUD", "TOW_DESERTD2", 7, 1, 0, 0))
						{
							iLocal_254 = 1;
						}
					}
				}
			}
			else if (iLocal_211 == 3)
			{
				if (Global_113386.f_19973.f_7 == 0 || Global_113386.f_19973.f_7 == 1)
				{
					__LIB_0__::func_222(&Local_437, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
					__LIB_0__::func_222(&Local_437, 5, (*uParam165)[0 /*20*/], "TOWBREAKM", 0, 1);
					if (!iLocal_254)
					{
						if (__LIB_2__::func_859(&uParam0, "TOWAUD", "TOW_BRK_DSRT", 7, 1, 0, 0))
						{
							iLocal_254 = 1;
						}
					}
				}
				else if (Global_113386.f_19973.f_7 == 2)
				{
					__LIB_0__::func_222(&Local_437, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
					__LIB_0__::func_222(&Local_437, 6, (*uParam165)[0 /*20*/], "TOWBREAKHIPM", 0, 1);
					if (!iLocal_254)
					{
						if (__LIB_2__::func_859(&uParam0, "TOWAUD", "TOW_BRK_DESR", 7, 1, 0, 0))
						{
							iLocal_254 = 1;
						}
					}
				}
			}
			break;
	}
}

void func_768(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, var uParam85, var uParam86, var uParam87, var uParam88, var uParam89, var uParam90, var uParam91, var uParam92, var uParam93, var uParam94, var uParam95, var uParam96, var uParam97, var uParam98, var uParam99, var uParam100, var uParam101, var uParam102, var uParam103, var uParam104, var uParam105, var uParam106, var uParam107, var uParam108, var uParam109, var uParam110, var uParam111, var uParam112, var uParam113, var uParam114, var uParam115, var uParam116, var uParam117, var uParam118, var uParam119, var uParam120, var uParam121, var uParam122, var uParam123, var uParam124, var uParam125, var uParam126, var uParam127, var uParam128, var uParam129, var uParam130, var uParam131, var uParam132, var uParam133, var uParam134, var uParam135, var uParam136, var uParam137, var uParam138, var uParam139, var uParam140, var uParam141, var uParam142, var uParam143, var uParam144, var uParam145, var uParam146, var uParam147, var uParam148, var uParam149, var uParam150, var uParam151, var uParam152, var uParam153, var uParam154, var uParam155, var uParam156, var uParam157, var uParam158, var uParam159, var uParam160, var uParam161, var uParam162, var uParam163, var uParam164, var uParam165)//Position - 0x28CCE
{
	int iVar0;
	iVar0 = (MISC::GET_RANDOM_INT_IN_RANGE(0, 65535) % 4);
	if (iVar0 == 0)
	{
		__LIB_0__::func_222(&uParam0, 3, (*uParam165)[0 /*20*/], "TOWPEDA", 0, 1);
		__LIB_2__::func_859(&uParam0, "TOWAUD", "TOW_GEN_MCH", 7, 0, 0, 0);
		sLocal_267 = "TOW_GEN_MCH";
	}
	else if (iVar0 == 1)
	{
		__LIB_0__::func_222(&uParam0, 3, (*uParam165)[0 /*20*/], "TOWPEDB", 0, 1);
		__LIB_2__::func_859(&uParam0, "TOWAUD", "TOW_GEN_MCH1", 7, 0, 0, 0);
		sLocal_267 = "TOW_GEN_MCH1";
	}
	else if (iVar0 == 2)
	{
		__LIB_0__::func_222(&uParam0, 3, (*uParam165)[0 /*20*/], "TOWPEDD", 0, 1);
		__LIB_2__::func_859(&uParam0, "TOWAUD", "TOW_GEN_MCH3", 7, 0, 0, 0);
		sLocal_267 = "TOW_GEN_MCH3";
	}
	else if (iVar0 == 3)
	{
		__LIB_0__::func_222(&uParam0, 3, (*uParam165)[0 /*20*/], "TOWPEDE", 0, 1);
		__LIB_2__::func_859(&uParam0, "TOWAUD", "TOW_GEN_MCH4", 7, 0, 0, 0);
		sLocal_267 = "TOW_GEN_MCH4";
	}
}

void func_769(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, var uParam85, var uParam86, var uParam87, var uParam88, var uParam89, var uParam90, var uParam91, var uParam92, var uParam93, var uParam94, var uParam95, var uParam96, var uParam97, var uParam98, var uParam99, var uParam100, var uParam101, var uParam102, var uParam103, var uParam104, var uParam105, var uParam106, var uParam107, var uParam108, var uParam109, var uParam110, var uParam111, var uParam112, var uParam113, var uParam114, var uParam115, var uParam116, var uParam117, var uParam118, var uParam119, var uParam120, var uParam121, var uParam122, var uParam123, var uParam124, var uParam125, var uParam126, var uParam127, var uParam128, var uParam129, var uParam130, var uParam131, var uParam132, var uParam133, var uParam134, var uParam135, var uParam136, var uParam137, var uParam138, var uParam139, var uParam140, var uParam141, var uParam142, var uParam143, var uParam144, var uParam145, var uParam146, var uParam147, var uParam148, var uParam149, var uParam150, var uParam151, var uParam152, var uParam153, var uParam154, var uParam155, var uParam156, var uParam157, var uParam158, var uParam159, var uParam160, var uParam161, var uParam162, var uParam163, var uParam164, var uParam165)//Position - 0x28DB4
{
	__LIB_0__::func_222(&uParam0, 3, (*uParam165)[0 /*20*/], "TOWPEDC", 0, 1);
	__LIB_2__::func_859(&uParam0, "TOWAUD", "TOW_GEN_MCH2", 7, 0, 0, 0);
	sLocal_267 = "TOW_GEN_MCH2";
}

void func_770()//Position - 0x28F2F
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("tonya3")) == 1 || SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("tonya4")) == 1)
	{
		return;
	}
	if ((!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false) && !ENTITY::IS_ENTITY_DEAD(iLocal_596, false)) && !ENTITY::IS_ENTITY_DEAD(Local_605[0 /*20*/].f_6, false))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_605[0 /*20*/].f_6, PLAYER::PLAYER_PED_ID(), true))
		{
			if (!__LIB_0__::func_75())
			{
				if (!iLocal_588)
				{
					if (__LIB_2__::func_859(&Local_437, "TOWAUD", "TONYA_CARDAM", 8, 1, 0, 0))
					{
						iLocal_588 = 1;
					}
				}
			}
		}
	}
}

int func_771()//Position - 0x2B058
{
	if (!__LIB_1__::func_13(&iLocal_702))
	{
		__LIB_1__::func_362(&iLocal_702);
	}
	if (__LIB_1__::func_13(&iLocal_702))
	{
		if (__LIB_2__::func_572(&iLocal_702) > 7f)
		{
			if (!iLocal_561)
			{
				if (!__LIB_0__::func_75())
				{
					if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
					{
						WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), true);
					}
					__LIB_0__::func_222(&Local_437, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
					__LIB_0__::func_222(&Local_437, 3, 0, "TONYA", 0, 1);
					if (Global_113386.f_19973.f_3 == 2)
					{
						__LIB_14__::func_569(&Local_437, 103, "TOWAUD", "TONYA_WRAP3", 14, 1, 0, 0, 0);
					}
					else if (Global_113386.f_19973.f_3 == 3)
					{
						__LIB_14__::func_569(&Local_437, 103, "TOWAUD", "TONYA_WRAP4", 14, 1, 0, 0, 0);
					}
					iLocal_561 = 1;
				}
			}
		}
	}
	if (iLocal_561 && __LIB_14__::func_521())
	{
		return 1;
	}
	return 0;
}

void func_772()//Position - 0x2BBE1
{
	struct<3> Var0;
	struct<3> Var1;
	if (iLocal_581)
	{
		return;
	}
	if (bLocal_545)
	{
		return;
	}
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("tonya1")) == 1 || SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("tonya2")) == 1)
	{
		if (!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 402.5694f, -1632.3905f, 28.2928f, 50f, 50f, 50f, false, true, 0))
		{
			return;
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
	}
	if (!ENTITY::IS_ENTITY_DEAD(Local_605[0 /*20*/].f_6, false))
	{
		Var1 = { ENTITY::GET_ENTITY_COORDS(Local_605[0 /*20*/].f_6, true) };
	}
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("tonya5")) == 1)
	{
		if (!iLocal_581)
		{
			if (SYSTEM::VDIST2(Var0, -227.7806f, -1170.6628f, 21.8945f) < 400f)
			{
				if (__LIB_2__::func_572(&iLocal_708) > 90f)
				{
					if (__LIB_2__::func_859(&Local_437, "TOWAUD", "TOW_WAITING3", 9, 0, 0, 0))
					{
						iLocal_581 = 1;
					}
				}
			}
		}
	}
	if (SYSTEM::VDIST2(Var0, Var1) < 400f)
	{
		if (!__LIB_1__::func_13(&iLocal_708))
		{
			__LIB_1__::func_362(&iLocal_708);
		}
		else
		{
			if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("tonya1")) == 1)
			{
				if (__LIB_2__::func_572(&iLocal_708) > 25f)
				{
					if (!iLocal_581)
					{
						if (__LIB_2__::func_859(&Local_437, "TOWAUD", "TOW_WAIT", 9, 0, 0, 0))
						{
							iLocal_581 = 1;
						}
					}
				}
			}
			if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("tonya2")) == 1)
			{
				if (__LIB_2__::func_572(&iLocal_708) > 20f)
				{
					if (!iLocal_581)
					{
						if (__LIB_2__::func_859(&Local_437, "TOWAUD", "TOW_WAIT3", 9, 0, 0, 0))
						{
							iLocal_581 = 1;
						}
					}
				}
			}
		}
	}
}

void func_773()//Position - 0x2BD8D
{
	if (!iLocal_570)
	{
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("tonya2")) == 1)
		{
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 399.88535f, -1649.8346f, 27.294472f, 432.559f, -1612.3158f, 35.34176f, 35f, false, true, 0))
				{
					if (__LIB_2__::func_859(&Local_437, "TOWAUD", "TOW_DROP", 8, 0, 0, 0))
					{
						iLocal_570 = 1;
					}
				}
			}
		}
		else if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("tonya5")) == 1)
		{
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -233.33939f, -1183.5979f, 21.073008f, -232.13821f, -1141.9463f, 29.08136f, 29.25f, false, true, 0))
				{
					if (__LIB_2__::func_859(&Local_437, "TOWAUD", "TOW_SHOP", 8, 0, 0, 0))
					{
						iLocal_570 = 1;
					}
				}
			}
		}
	}
}

void func_774()//Position - 0x2BE6B
{
	struct<3> Var0;
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
	}
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("tonya5")) == 1)
	{
		if (!bLocal_572)
		{
			if (__LIB_2__::func_859(&Local_437, "TOWAUD", "TOW_REPAIR", 9, 0, 0, 0))
			{
				bLocal_572 = true;
			}
		}
		else if (bLocal_572)
		{
			if (!iLocal_575)
			{
				if (!__LIB_0__::func_75())
				{
					__LIB_0__::func_229("TOWT_OBJ_04", 7500, 1);
					iLocal_575 = 1;
				}
			}
		}
	}
	if (SYSTEM::VDIST2(Local_649, Var0) > 10000f)
	{
		switch (Global_113386.f_19973.f_3)
		{
			case 0:
				if ((!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false) && !ENTITY::IS_ENTITY_DEAD(iLocal_596, false)) && !ENTITY::IS_ENTITY_DEAD(iLocal_714, false))
				{
					if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_714, false) && PED::IS_PED_IN_VEHICLE(iLocal_596, iLocal_714, false))
					{
						if (!iLocal_562)
						{
							if (!__LIB_0__::func_75())
							{
								if (__LIB_2__::func_859(&Local_437, "TOWAUD", "TOW_TALK", 8, 0, 0, 0))
								{
									iLocal_562 = 1;
								}
							}
						}
						else if (iLocal_566)
						{
							if (__LIB_14__::func_782(&Local_437, "TOWAUD", "TOW_TALK", &Local_664, 8, 0, 0))
							{
								iLocal_566 = 0;
							}
						}
					}
				}
				break;
			case 1:
				if ((!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false) && !ENTITY::IS_ENTITY_DEAD(iLocal_596, false)) && !ENTITY::IS_ENTITY_DEAD(iLocal_714, false))
				{
					if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_714, false) && PED::IS_PED_IN_VEHICLE(iLocal_596, iLocal_714, false))
					{
						if (!iLocal_562)
						{
							if (!__LIB_0__::func_75())
							{
								if (__LIB_2__::func_859(&Local_437, "TOWAUD", "TOW_TALK2", 8, 0, 0, 0))
								{
									iLocal_562 = 1;
								}
							}
						}
						else if (iLocal_566)
						{
							if (__LIB_14__::func_782(&Local_437, "TOWAUD", "TOW_TALK2", &Local_664, 8, 0, 0))
							{
								iLocal_566 = 0;
							}
						}
					}
				}
				break;
			case 4:
				if ((!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false) && !ENTITY::IS_ENTITY_DEAD(iLocal_596, false)) && !ENTITY::IS_ENTITY_DEAD(iLocal_714, false))
				{
					if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_714, false) && PED::IS_PED_IN_VEHICLE(iLocal_596, iLocal_714, false))
					{
						if (!iLocal_562)
						{
							if (!__LIB_0__::func_75())
							{
								if (__LIB_2__::func_859(&Local_437, "TOWAUD", "TOW_CHAT2", 8, 0, 0, 0))
								{
									iLocal_562 = 1;
								}
							}
						}
						else if (iLocal_566)
						{
							if (__LIB_14__::func_782(&Local_437, "TOWAUD", "TOW_CHAT2", &Local_664, 8, 0, 0))
							{
								iLocal_566 = 0;
							}
						}
					}
				}
				break;
			}
	}
}

void func_775()//Position - 0x2C5A5
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("tonya2")) == 1)
	{
		if (((!ENTITY::IS_ENTITY_DEAD(iLocal_596, false) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false)) && !ENTITY::IS_ENTITY_DEAD(iLocal_714, false)) && !ENTITY::IS_ENTITY_DEAD(Local_605[0 /*20*/].f_6, false))
		{
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_714, false) && PED::IS_PED_IN_VEHICLE(iLocal_596, iLocal_714, false))
			{
				if (!__LIB_0__::func_75())
				{
					if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(iLocal_714, Local_605[0 /*20*/].f_6))
					{
						if (!iLocal_589)
						{
							if (__LIB_2__::func_859(&Local_437, "TOWAUD", "TOW_CANGO", 9, 1, 0, 0))
							{
								iLocal_589 = 1;
							}
						}
					}
				}
			}
		}
	}
}

void func_776()//Position - 0x2E998
{
	float fVar0;
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_714, false))
	{
		fVar0 = ENTITY::GET_ENTITY_SPEED(iLocal_714);
	}
	if (fVar0 < 1f && ((!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false) && !ENTITY::IS_ENTITY_DEAD(iLocal_714, false)) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_714, true)))
	{
		if (!__LIB_1__::func_13(&iLocal_711))
		{
			__LIB_1__::func_362(&iLocal_711);
		}
		else if (!iLocal_585)
		{
			if (__LIB_2__::func_572(&iLocal_711) > 30f)
			{
				if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("tonya3")) == 1 || SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("tonya4")) == 1)
				{
					if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("tonya3")) == 1)
					{
						if (!ENTITY::IS_ENTITY_DEAD(Local_605[0 /*20*/], false) && PED::IS_PED_IN_VEHICLE(Local_605[0 /*20*/], iLocal_714, true))
						{
							if (__LIB_2__::func_859(&Local_437, "TOWAUD", "TOW_DAWDLE", 9, 0, 0, 0))
							{
								iLocal_585 = 1;
							}
						}
						else if (__LIB_1__::func_13(&iLocal_711))
						{
							__LIB_1__::func_31(&iLocal_711);
						}
					}
					else if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("tonya4")) == 1)
					{
						if (!ENTITY::IS_ENTITY_DEAD(Local_605[0 /*20*/], false) && PED::IS_PED_IN_VEHICLE(Local_605[0 /*20*/], iLocal_714, true))
						{
							if (__LIB_2__::func_859(&Local_437, "TOWAUD", "TOW_DAWDLE2", 9, 0, 0, 0))
							{
								iLocal_585 = 1;
							}
						}
						else if (__LIB_1__::func_13(&iLocal_711))
						{
							__LIB_1__::func_31(&iLocal_711);
						}
					}
				}
				else if (!ENTITY::IS_ENTITY_DEAD(iLocal_596, false) && PED::IS_PED_IN_VEHICLE(iLocal_596, iLocal_714, true))
				{
					if (__LIB_2__::func_859(&Local_437, "TOWAUD", "TONYA_STOP", 9, 1, 0, 0))
					{
						iLocal_585 = 1;
					}
				}
				else if (__LIB_1__::func_13(&iLocal_711))
				{
					__LIB_1__::func_31(&iLocal_711);
				}
			}
		}
	}
	else if (__LIB_1__::func_13(&iLocal_711))
	{
		__LIB_1__::func_31(&iLocal_711);
	}
}

void func_777()//Position - 0x3533E
{
	int iVar0;
	if (bLocal_574)
	{
		if (!iLocal_577)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_714) && !ENTITY::IS_ENTITY_DEAD(iLocal_714, false))
			{
				iVar0 = VEHICLE::GET_ENTITY_ATTACHED_TO_TOW_TRUCK(iLocal_714);
				if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0, false))
				{
					if (ENTITY::IS_ENTITY_A_VEHICLE(iVar0))
					{
						if (ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iVar0) != Local_605[0 /*20*/].f_6)
						{
							if (!iLocal_555)
							{
								__LIB_0__::func_222(&Local_437, 3, iLocal_596, "TONYA", 0, 1);
								__LIB_0__::func_151("TOW_TUT_07", -1);
								if (__LIB_2__::func_859(&uLocal_268, "TOWAUD", "TONYA_WRONG", 9, 0, 0, 0))
								{
									iLocal_555 = 1;
								}
							}
						}
					}
				}
				else
				{
					iLocal_555 = 0;
				}
			}
		}
	}
}

void func_778()//Position - 0x3BA39
{
	if (!MISC::ARE_STRINGS_EQUAL(&cLocal_104, ""))
	{
		if (!__LIB_0__::func_75())
		{
			__LIB_2__::func_859(&Local_92, &cLocal_104, &cLocal_107, 9, 0, 0, 0);
			StringCopy(&cLocal_104, "", 16);
		}
	}
}

int func_779()//Position - 0x3F059
{
	struct<6> Var0;
	switch (iLocal_727)
	{
		case 0:
			if (TASK::GET_SEQUENCE_PROGRESS(Local_605[0 /*20*/]) >= 1 && !HUD::IS_MESSAGE_BEING_DISPLAYED())
			{
				iLocal_727 = 1;
			}
			break;
		case 1:
			Var0 = { __LIB_13__::func_743() };
			if (uLocal_556 && !iLocal_557)
			{
				if (!__LIB_0__::func_75())
				{
					if (!iLocal_558)
					{
						__LIB_0__::func_229("TOWT_OBJ_06", 7500, 1);
						iLocal_558 = 1;
					}
					if (iLocal_558 && !HUD::IS_MESSAGE_BEING_DISPLAYED())
					{
						if (__LIB_2__::func_859(&Local_437, "TOWAUD", "TOW_SEX_SCAR", 9, 0, 0, 0))
						{
							iLocal_557 = 1;
							iLocal_727 = 2;
						}
					}
				}
			}
			if (MISC::ARE_STRINGS_EQUAL(&Var0, "TOW_SEX_SCAR_2"))
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_605[0 /*20*/], false))
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(Local_605[0 /*20*/], joaat("SCRIPT_TASK_TURN_PED_TO_FACE_ENTITY")) != 1)
					{
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_605[0 /*20*/], Local_605[0 /*20*/].f_1, 0);
					}
				}
			}
			if (__LIB_14__::func_556(Local_605[0 /*20*/], 1) > 20f)
			{
				AUDIO::STOP_SCRIPTED_CONVERSATION(true);
				return 1;
			}
			break;
		case 2:
			if (__LIB_14__::func_556(Local_605[0 /*20*/], 1) > 20f)
			{
				AUDIO::STOP_SCRIPTED_CONVERSATION(true);
				return 1;
			}
			if (!__LIB_0__::func_75())
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_780()//Position - 0x3F8C5
{
	switch (iLocal_265)
	{
		case 0:
			if (!__LIB_1__::func_13(&iLocal_450))
			{
				__LIB_1__::func_362(&iLocal_450);
			}
			else if (__LIB_2__::func_572(&iLocal_450) > 10f)
			{
				if (__LIB_2__::func_859(&uLocal_268, "TOWAUD", "TOW_SUGG2", 9, 0, 0, 0))
				{
					iLocal_265 = 1;
				}
			}
			break;
		case 1:
			if (!__LIB_0__::func_75())
			{
				if (__LIB_2__::func_859(&uLocal_268, "TOWAUD", "TOW_RESP", 9, 0, 0, 0))
				{
					__LIB_1__::func_31(&iLocal_450);
					iLocal_265 = 2;
				}
			}
			break;
		case 2:
			if (__LIB_1__::func_13(&iLocal_450))
			{
				if (__LIB_2__::func_572(&iLocal_450) > 15f)
				{
					if (!__LIB_0__::func_75())
					{
						if (__LIB_2__::func_859(&uLocal_268, "TOWAUD", "TOW_WAIT", 9, 0, 0, 0))
						{
							iLocal_265 = 3;
						}
					}
				}
			}
			break;
		case 3:
			break;
	}
}

void func_781()//Position - 0x3F9A2
{
	if (!iLocal_248)
	{
		if (!HUD::IS_MESSAGE_BEING_DISPLAYED())
		{
			if (!__LIB_0__::func_75())
			{
				if (__LIB_2__::func_859(&uLocal_268, "TOWAUD", "TONYA_UNHOOK", 9, 0, 0, 0))
				{
					iLocal_248 = 1;
				}
			}
		}
	}
}

int func_782(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4)//Position - 0x3FAC3
{
	int iVar0;
	if (ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		iVar0 = (*uParam2 - ENTITY::GET_ENTITY_HEALTH(iParam1));
	}
	if (fLocal_219 == 0f)
	{
	}
	if (iVar0 > 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iParam1, false))
			{
				if ((PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iParam1, false)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam1, PLAYER::PLAYER_PED_ID(), true))
				{
					*uParam3 = (*uParam3 + iVar0);
				}
				else if (ENTITY::DOES_ENTITY_EXIST(iParam1))
				{
					*uParam2 = ENTITY::GET_ENTITY_HEALTH(iParam1);
					iVar0 = 0;
				}
			}
		}
	}
	switch (*uParam0)
	{
		case 0:
			if (*uParam3 > 250)
			{
				if (bParam4)
				{
					if (__LIB_2__::func_859(&Local_437, "TOWAUD", "TOW_DISP_DMA", 8, 0, 0, 0))
					{
						*uParam0 = 1;
					}
				}
				else if (__LIB_2__::func_859(&Local_437, "TOWAUD", "TOW_DISP_DMT", 8, 0, 0, 0))
				{
					*uParam0 = 1;
				}
				if (bParam4)
				{
					fLocal_219 = (fLocal_219 + 25f);
				}
			}
			break;
		case 1:
			if (*uParam3 > 500)
			{
				if (bParam4)
				{
					if (__LIB_2__::func_859(&Local_437, "TOWAUD", "TOW_DISP_DMA", 8, 0, 0, 0))
					{
						*uParam0 = 2;
					}
				}
				else if (__LIB_2__::func_859(&Local_437, "TOWAUD", "TOW_DISP_DT2", 8, 0, 0, 0))
				{
					*uParam0 = 2;
				}
				if (bParam4)
				{
					fLocal_219 = (fLocal_219 + 25f);
				}
			}
			break;
		case 2:
			if (*uParam3 > 900)
			{
				if (bParam4)
				{
					__LIB_2__::func_859(&Local_437, "TOWAUD", "TOW_DISP_DMB", 8, 0, 0, 0);
					*uParam0 = 3;
				}
				else
				{
					__LIB_2__::func_859(&Local_437, "TOWAUD", "TOW_DISP_DT2", 8, 0, 0, 0);
					*uParam0 = 3;
				}
				if (bParam4)
				{
					fLocal_219 = (fLocal_219 + 75f);
				}
			}
			break;
		case 3:
			break;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		*uParam2 = ENTITY::GET_ENTITY_HEALTH(iParam1);
	}
	return 0;
}

void func_783(struct<3> Param0, float fParam1)//Position - 0x42B53
{
	int iVar0;
	if (__LIB_13__::func_821())
	{
		bLocal_552 = true;
	}
	if (bLocal_552)
	{
		__LIB_14__::func_532();
		while (!__LIB_14__::func_531())
		{
			SYSTEM::WAIT(0);
		}
	}
	if (bLocal_552)
	{
		iVar0 = __LIB_14__::func_616(Param0, fParam1);
		if (((!VEHICLE::IS_THIS_MODEL_A_BOAT(ENTITY::GET_ENTITY_MODEL(iVar0)) && !VEHICLE::IS_THIS_MODEL_A_PLANE(ENTITY::GET_ENTITY_MODEL(iVar0))) && !VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(iVar0))) && ENTITY::GET_ENTITY_MODEL(iVar0) != joaat("towtruck"))
		{
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar0, 5f);
		}
		else
		{
			if (ENTITY::GET_ENTITY_MODEL(iVar0) != joaat("towtruck"))
			{
			}
			VEHICLE::DELETE_VEHICLE(&iVar0);
		}
	}
}

void func_784()//Position - 0x2EB57
{
	struct<3> Var0;
	struct<3> Var1;
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_217) && !ENTITY::IS_ENTITY_DEAD(iLocal_217, false))
	{
		Var1 = { ENTITY::GET_ENTITY_COORDS(iLocal_217, true) };
		if (!iLocal_591)
		{
			if (SYSTEM::VDIST2(Var0, Var1) > 40000f)
			{
				if ((((!ENTITY::IS_ENTITY_ON_SCREEN(iLocal_217) && !VEHICLE::IS_BIG_VEHICLE(iLocal_217)) && !VEHICLE::IS_THIS_MODEL_A_BOAT(ENTITY::GET_ENTITY_MODEL(iLocal_217))) && !VEHICLE::IS_THIS_MODEL_A_PLANE(ENTITY::GET_ENTITY_MODEL(iLocal_217))) && !VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(iLocal_217)))
				{
					if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("tonya1")) == 1)
					{
						ENTITY::SET_ENTITY_COORDS(iLocal_217, 417.5827f, -1645.5754f, 28.2928f, true, false, false, true);
						ENTITY::SET_ENTITY_HEADING(iLocal_217, 230.2828f);
						VEHICLE::SET_VEHICLE_HAS_BEEN_DRIVEN_FLAG(iLocal_217, false);
						ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_217, true, 1);
						__LIB_14__::func_775(iLocal_217, 417.5827f, -1645.5754f, 28.2928f, 230.2828f, 24, 0);
					}
					else if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("tonya2")) == 1)
					{
						ENTITY::SET_ENTITY_COORDS(iLocal_217, 417.5827f, -1645.5754f, 28.2928f, true, false, false, true);
						ENTITY::SET_ENTITY_HEADING(iLocal_217, 230.2828f);
						VEHICLE::SET_VEHICLE_HAS_BEEN_DRIVEN_FLAG(iLocal_217, false);
						ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_217, true, 1);
						__LIB_14__::func_775(iLocal_217, 417.5827f, -1645.5754f, 28.2928f, 230.2828f, 24, 0);
					}
					else if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("tonya3")) == 1)
					{
						ENTITY::SET_ENTITY_COORDS(iLocal_217, -214.5613f, -1397.9072f, 30.2688f, true, false, false, true);
						ENTITY::SET_ENTITY_HEADING(iLocal_217, 176.0831f);
						VEHICLE::SET_VEHICLE_HAS_BEEN_DRIVEN_FLAG(iLocal_217, false);
						ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_217, true, 1);
						__LIB_14__::func_775(iLocal_217, -214.5613f, -1397.9072f, 30.2688f, 176.0831f, 24, 0);
					}
					else if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("tonya4")) == 1)
					{
						ENTITY::SET_ENTITY_COORDS(iLocal_217, 537.5104f, -168.8889f, 53.5066f, true, false, false, true);
						ENTITY::SET_ENTITY_HEADING(iLocal_217, 358.4492f);
						VEHICLE::SET_VEHICLE_HAS_BEEN_DRIVEN_FLAG(iLocal_217, false);
						ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_217, true, 1);
						__LIB_14__::func_775(iLocal_217, 537.5104f, -168.8889f, 53.5066f, 358.4492f, 24, 0);
					}
					else if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("tonya5")) == 1)
					{
						ENTITY::SET_ENTITY_COORDS(iLocal_217, 417.5827f, -1645.5754f, 28.2928f, true, false, false, true);
						ENTITY::SET_ENTITY_HEADING(iLocal_217, 230.2828f);
						VEHICLE::SET_VEHICLE_HAS_BEEN_DRIVEN_FLAG(iLocal_217, false);
						ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_217, true, 1);
						__LIB_14__::func_775(iLocal_217, 417.5827f, -1645.5754f, 28.2928f, 230.2828f, 24, 0);
					}
					iLocal_591 = 1;
				}
			}
		}
	}
}

int func_785(var uParam0, int iParam1, int iParam2, var uParam3, var uParam4, bool bParam5)//Position - 0x3FE61
{
	int iVar0;
	if (ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		iVar0 = (*uParam3 - ENTITY::GET_ENTITY_HEALTH(iParam1));
	}
	if (bParam5)
	{
		if (iVar0 > 0)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iParam1) && ENTITY::DOES_ENTITY_EXIST(iParam2))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iParam1, false) && !ENTITY::IS_ENTITY_DEAD(iParam2, false))
				{
					if ((ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam1, iParam2) || VEHICLE::IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(iParam2, iParam1)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam1, PLAYER::PLAYER_PED_ID(), true))
					{
						*uParam4 = (*uParam4 + iVar0);
					}
					else if (ENTITY::DOES_ENTITY_EXIST(iParam1))
					{
						*uParam3 = ENTITY::GET_ENTITY_HEALTH(iParam1);
						iVar0 = 0;
					}
				}
			}
		}
		switch (*uParam0)
		{
			case 0:
				if (*uParam4 > 250)
				{
					*uParam0 = 1;
					__LIB_5__::func_832("TOW_DMG_01", 25, -1);
					__LIB_15__::func_811(__LIB_0__::func_683(), 1, 25);
					fLocal_219 = (fLocal_219 + 25f);
				}
				break;
			case 1:
				if (*uParam4 > 500)
				{
					*uParam0 = 2;
					__LIB_5__::func_832("TOW_DMG_01", 75, -1);
					__LIB_15__::func_811(__LIB_0__::func_683(), 1, 75);
					fLocal_219 = (fLocal_219 + 75f);
				}
				break;
			case 2:
				if (*uParam4 > 550)
				{
					*uParam0 = 3;
					__LIB_0__::func_151("TOW_DMG_03", -1);
				}
				break;
			case 3:
				if (*uParam4 > 900)
				{
					return 0;
				}
				break;
			}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		*uParam3 = ENTITY::GET_ENTITY_HEALTH(iParam1);
	}
	return 1;
}

void func_786()//Position - 0x2D7DC
{
	int iVar0;
	iVar0 = __LIB_40__::func_649(&Local_46, Local_460[0 /*3*/], 400f);
	if (iVar0 != -1)
	{
		Local_461 = { Local_46[iVar0 /*3*/] };
		__LIB_40__::func_645(iVar0, &Local_566);
	}
	else
	{
		Local_461 = { Local_46[0 /*3*/] };
	}
}

void func_787(int iParam0, int* iParam1, var uParam2, var uParam3, char* sParam4, var uParam5, int iParam6, bool bParam7, var uParam8, bool bParam9, var uParam10, bool bParam11, int iParam12, bool bParam13)//Position - 0x4010E
{
	int iVar0;
	uParam10 = uParam10;
	if (bParam11)
	{
		if (HUD::DOES_BLIP_EXIST(*iParam1))
		{
			HUD::REMOVE_BLIP(iParam1);
		}
		*uParam5 = MISC::GET_GAME_TIMER();
		bLocal_216 = !__LIB_40__::func_668(iParam0);
		return;
	}
	else if (!HUD::DOES_BLIP_EXIST(*iParam1) && bLocal_216)
	{
		*iParam1 = HUD::ADD_BLIP_FOR_ENTITY(*iParam0);
		HUD::SET_BLIP_COLOUR(*iParam1, 3);
		HUD::SET_BLIP_ROUTE(*iParam1, true);
	}
	if (!bParam9)
	{
		if (!bLocal_216)
		{
			if (!__LIB_40__::func_668(iParam0))
			{
				HUD::CLEAR_SMALL_PRINTS();
				*uParam5 = MISC::GET_GAME_TIMER();
				if (bParam13)
				{
					if (iLocal_189)
					{
						__LIB_0__::func_229("DTRSHRD_03", 7500, 1);
						iLocal_189 = 0;
					}
					if (!HUD::DOES_BLIP_EXIST(*iParam1))
					{
						*iParam1 = HUD::ADD_BLIP_FOR_ENTITY(*iParam0);
						HUD::SET_BLIP_COLOUR(*iParam1, 3);
						HUD::SET_BLIP_ROUTE(*iParam1, true);
					}
				}
				iVar0 = 0;
				while (iVar0 < 1)
				{
					if (HUD::DOES_BLIP_EXIST((uParam2[iVar0 /*20*/])->f_8))
					{
						HUD::SET_BLIP_ROUTE((uParam2[iVar0 /*20*/])->f_8, false);
						HUD::REMOVE_BLIP(&((uParam2[iVar0 /*20*/])->f_8));
						*uParam8 = 0;
					}
					iVar0++;
				}
				if (HUD::DOES_BLIP_EXIST((uParam2[0 /*20*/])->f_9))
				{
					HUD::REMOVE_BLIP(&((uParam2[0 /*20*/])->f_9));
				}
				bLocal_216 = true;
			}
		}
		else if (__LIB_40__::func_668(iParam0))
		{
			if (HUD::DOES_BLIP_EXIST(*iParam1))
			{
				HUD::REMOVE_BLIP(iParam1);
			}
			if (!PED::IS_PED_INJURED((*uParam2)[0 /*20*/]))
			{
				if (!PED::IS_PED_IN_VEHICLE((*uParam2)[0 /*20*/], *iParam0, false) && !PED::IS_PED_IN_VEHICLE((*uParam2)[0 /*20*/], (uParam2[iParam6 /*20*/])->f_6, false))
				{
					if (!HUD::DOES_BLIP_EXIST((uParam2[0 /*20*/])->f_9))
					{
						(uParam2[0 /*20*/])->f_9 = HUD::ADD_BLIP_FOR_ENTITY((*uParam2)[iVar0 /*20*/]);
						HUD::SET_BLIP_COLOUR((uParam2[0 /*20*/])->f_9, 3);
						HUD::SET_BLIP_SCALE((uParam2[0 /*20*/])->f_9, 0.7f);
					}
				}
			}
			if (iLocal_190)
			{
				__LIB_0__::func_229(sParam4, 7500, 1);
				iLocal_190 = 0;
			}
			if (!__LIB_0__::func_86(*(uParam3[0 /*3*/])) && iParam12 == 9)
			{
				if (!HUD::DOES_BLIP_EXIST((uParam2[0 /*20*/])->f_8))
				{
					(uParam2[0 /*20*/])->f_8 = HUD::ADD_BLIP_FOR_COORD(*(uParam3[0 /*3*/]));
					HUD::SET_BLIP_ROUTE((uParam2[0 /*20*/])->f_8, true);
				}
			}
			else if (bParam7)
			{
				if (!ENTITY::IS_ENTITY_DEAD((uParam2[iParam6 /*20*/])->f_6, false))
				{
					if (!HUD::DOES_BLIP_EXIST((uParam2[iParam6 /*20*/])->f_8))
					{
						(uParam2[iParam6 /*20*/])->f_8 = HUD::ADD_BLIP_FOR_ENTITY((uParam2[iParam6 /*20*/])->f_6);
						HUD::SET_BLIP_COLOUR((uParam2[iParam6 /*20*/])->f_8, 3);
						HUD::SET_BLIP_ROUTE((uParam2[0 /*20*/])->f_8, true);
					}
				}
				else
				{
					if (iLocal_171 == 3)
					{
						Local_394[iLocal_451 /*23*/].f_1 = { -476.1537f, 132.6556f, 62.9586f };
					}
					if (!HUD::DOES_BLIP_EXIST((uParam2[0 /*20*/])->f_8))
					{
						(uParam2[0 /*20*/])->f_8 = HUD::ADD_BLIP_FOR_COORD(Local_394[iLocal_451 /*23*/].f_1);
						HUD::SET_BLIP_COLOUR((uParam2[0 /*20*/])->f_8, 3);
						HUD::SET_BLIP_ROUTE((uParam2[0 /*20*/])->f_8, true);
					}
				}
			}
			else
			{
				iVar0 = 0;
				while (iVar0 < 1)
				{
					if (!ENTITY::IS_ENTITY_DEAD((uParam2[iVar0 /*20*/])->f_6, false))
					{
						if (!HUD::DOES_BLIP_EXIST((uParam2[iVar0 /*20*/])->f_8))
						{
							(uParam2[iVar0 /*20*/])->f_8 = HUD::ADD_BLIP_FOR_ENTITY((uParam2[iVar0 /*20*/])->f_6);
							HUD::SET_BLIP_COLOUR((uParam2[iVar0 /*20*/])->f_8, 3);
							HUD::SET_BLIP_ROUTE((uParam2[iVar0 /*20*/])->f_8, true);
						}
					}
					else
					{
						if (iLocal_171 == 3)
						{
							Local_394[iLocal_451 /*23*/].f_1 = { -476.1537f, 132.6556f, 62.9586f };
						}
						if (!HUD::DOES_BLIP_EXIST((uParam2[0 /*20*/])->f_8))
						{
							(uParam2[0 /*20*/])->f_8 = HUD::ADD_BLIP_FOR_COORD(Local_394[iLocal_451 /*23*/].f_1);
							HUD::SET_BLIP_COLOUR((uParam2[0 /*20*/])->f_8, 3);
							HUD::SET_BLIP_ROUTE((uParam2[0 /*20*/])->f_8, true);
						}
					}
					iVar0++;
				}
			}
			*uParam5 = 0;
			bLocal_216 = false;
		}
	}
}

void func_788(var uParam0)//Position - 0x43089
{
	int iVar0;
	bool bVar1;
	float fVar2;
	float fVar3;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0 /*8*/] != 0 && (uParam0[iVar0 /*8*/])->f_1)
		{
			bVar1 = false;
			fVar2 = 0f;
			__LIB_40__::func_678(uParam0[iVar0 /*8*/], &bVar1, &fVar2);
			if (bVar1 != (uParam0[iVar0 /*8*/])->f_4 || fVar2 != (uParam0[iVar0 /*8*/])->f_2)
			{
				if ((uParam0[iVar0 /*8*/])->f_5 > 0 && (uParam0[iVar0 /*8*/])->f_6 > 0)
				{
					fVar3 = __LIB_0__::func_331((IntToFloat((MISC::GET_GAME_TIMER() - (uParam0[iVar0 /*8*/])->f_6)) / SYSTEM::TO_FLOAT((uParam0[iVar0 /*8*/])->f_5)), 0f, 1f);
					if (fVar3 != 1f)
					{
						fVar2 = ((uParam0[iVar0 /*8*/])->f_3 + (fVar3 * ((uParam0[iVar0 /*8*/])->f_2 - (uParam0[iVar0 /*8*/])->f_3)));
						bVar1 = true;
					}
					else
					{
						bVar1 = (uParam0[iVar0 /*8*/])->f_4;
						fVar2 = (uParam0[iVar0 /*8*/])->f_2;
						(uParam0[iVar0 /*8*/])->f_1 = 0;
						(uParam0[iVar0 /*8*/])->f_5 = 0;
						(uParam0[iVar0 /*8*/])->f_6 = 0;
						(uParam0[iVar0 /*8*/])->f_1 = 0;
					}
				}
				else
				{
					if ((uParam0[iVar0 /*8*/])->f_4)
					{
						bVar1 = true;
					}
					else
					{
						bVar1 = false;
					}
					fVar2 = (uParam0[iVar0 /*8*/])->f_2;
					(uParam0[iVar0 /*8*/])->f_5 = 0;
					(uParam0[iVar0 /*8*/])->f_6 = 0;
					(uParam0[iVar0 /*8*/])->f_1 = 0;
				}
				if (fVar2 != 99.9f)
				{
					OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO((*uParam0)[iVar0 /*8*/], fVar2, false, true);
				}
				if (bVar1)
				{
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE((*uParam0)[iVar0 /*8*/], 1, false, true);
				}
				else
				{
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE((*uParam0)[iVar0 /*8*/], 0, false, true);
				}
			}
			else
			{
				OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO((*uParam0)[iVar0 /*8*/], fVar2, false, true);
				if (bVar1)
				{
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE((*uParam0)[iVar0 /*8*/], 1, false, true);
				}
				else
				{
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE((*uParam0)[iVar0 /*8*/], 0, false, true);
				}
				(uParam0[iVar0 /*8*/])->f_5 = 0;
				(uParam0[iVar0 /*8*/])->f_6 = 0;
				(uParam0[iVar0 /*8*/])->f_1 = 0;
			}
		}
		iVar0++;
	}
}

int func_789(struct<3> Param0, float fParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0x2DCDF
{
	float fVar0;
	float fVar1;
	float fVar2;
	*iParam2 = __LIB_40__::func_650(&Local_565);
	if (*iParam2 == -1)
	{
		return 0;
	}
	if (iLocal_582 >= 2)
	{
		iLocal_582 = 0;
	}
	if (iLocal_171 == 2)
	{
		iLocal_560[0] = joaat("primo");
	}
	else if (iLocal_171 == 0)
	{
		iLocal_560[0] = joaat("landstalker");
	}
	else if (iLocal_171 == 1)
	{
		iLocal_560[0] = joaat("schwarzer");
	}
	else if (iLocal_171 == 3)
	{
		iLocal_560[0] = joaat("tailgater");
	}
	else if (iLocal_171 == 4)
	{
		iLocal_560[0] = joaat("intruder");
	}
	Local_565[*iParam2 /*20*/].f_6 = VEHICLE::CREATE_VEHICLE(iLocal_560[0], Param0, fParam1, true, true, false);
	ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_565[*iParam2 /*20*/].f_6, true, 1);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_560[0]);
	if (iLocal_171 == 3)
	{
		VEHICLE::SET_VEHICLE_COLOURS(Local_565[*iParam2 /*20*/].f_6, 27, 27);
	}
	iLocal_582++;
	fLocal_181 = __LIB_14__::func_523(Param0, 0);
	if (iLocal_171 == 1)
	{
		fVar0 = 20f;
		fVar1 = 40f;
		fVar2 = 60f;
	}
	else
	{
		fVar0 = 4f;
		fVar1 = 20f;
		fVar2 = 40f;
	}
	if (!__LIB_0__::func_86(Local_394[iLocal_451 /*23*/].f_10))
	{
		Local_565[*iParam2 /*20*/].f_17 = VEHICLE::ADD_ROAD_NODE_SPEED_ZONE(Local_394[iLocal_451 /*23*/].f_10, fVar0, 0f, false);
	}
	else
	{
		Local_565[*iParam2 /*20*/].f_17 = VEHICLE::ADD_ROAD_NODE_SPEED_ZONE(Param0, fVar0, 0f, false);
	}
	Local_565[*iParam2 /*20*/].f_18 = VEHICLE::ADD_ROAD_NODE_SPEED_ZONE(Param0, fVar1, 2.5f, false);
	Local_565[*iParam2 /*20*/].f_19 = VEHICLE::ADD_ROAD_NODE_SPEED_ZONE(Param0, fVar2, 4f, false);
	if (bParam3)
	{
		if (Local_565[*iParam2 /*20*/].f_15)
		{
			VEHICLE::SET_DISABLE_VEHICLE_PETROL_TANK_FIRES(Local_565[*iParam2 /*20*/].f_6, true);
			VEHICLE::SET_VEHICLE_ENGINE_HEALTH(Local_565[*iParam2 /*20*/].f_6, 1f);
			VEHICLE::SET_VEHICLE_ENGINE_CAN_DEGRADE(Local_565[*iParam2 /*20*/].f_6, false);
		}
		else
		{
			VEHICLE::SET_DISABLE_VEHICLE_PETROL_TANK_FIRES(Local_565[*iParam2 /*20*/].f_6, true);
			VEHICLE::SET_VEHICLE_ENGINE_HEALTH(Local_565[*iParam2 /*20*/].f_6, 1f);
			VEHICLE::SET_VEHICLE_ENGINE_CAN_DEGRADE(Local_565[*iParam2 /*20*/].f_6, false);
		}
	}
	if (!bLocal_504 && bParam4)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_565[*iParam2 /*20*/].f_6))
		{
			Local_565[*iParam2 /*20*/].f_8 = HUD::ADD_BLIP_FOR_ENTITY(Local_565[*iParam2 /*20*/].f_6);
			HUD::SET_BLIP_COLOUR(Local_565[*iParam2 /*20*/].f_8, 3);
		}
	}
	else
	{
		if (bLocal_504)
		{
		}
		if (bParam4)
		{
		}
	}
	iLocal_581++;
	__LIB_1__::func_362(&(Local_565[*iParam2 /*20*/].f_11));
	return 1;
}

int func_790(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)//Position - 0x3CAD5
{
	int iVar0;
	bool bVar1;
	iVar0 = PLAYER::PLAYER_PED_ID();
	if (!ENTITY::IS_ENTITY_DEAD(iVar0, false) && !ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		if (!__LIB_0__::func_703(*uParam2, 1))
		{
			if (__LIB_14__::func_574(iParam0, uParam2))
			{
				*iParam3 = 1;
				return 1;
			}
		}
		if (!__LIB_0__::func_703(*uParam2, 2))
		{
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
			{
				*iParam3 = 2;
				return 1;
			}
		}
		if (!__LIB_0__::func_703(*uParam2, 4))
		{
			if (__LIB_14__::func_585(iVar0, iParam0, uParam2, bParam5))
			{
				*iParam3 = 4;
				return 1;
			}
		}
		if (!__LIB_0__::func_703(*uParam2, 8))
		{
			if (__LIB_14__::func_537(iVar0, iParam0, uParam2))
			{
				*iParam3 = 8;
				return 1;
			}
		}
		bVar1 = !__LIB_0__::func_703(*uParam2, 128);
		if (bParam4)
		{
			if (__LIB_40__::func_689(iParam0, iParam1, 1, bParam6, bVar1, 1))
			{
				*iParam3 = 32;
				return 1;
			}
		}
		else if (!__LIB_0__::func_703(*uParam2, 16))
		{
			if (__LIB_40__::func_689(iParam0, iParam1, 0, bParam6, bVar1, bParam8))
			{
				*iParam3 = 16;
				return 1;
			}
		}
	}
	else if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (iParam7 && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iVar0, true))
		{
			*iParam3 = 16;
			return 1;
		}
	}
	return 0;
}

int func_791(var uParam0, var uParam1, struct<3> Param2, var uParam3, var uParam4, var uParam5, float fParam6, char* sParam7, var uParam8, int iParam9)//Position - 0x3D4AF
{
	var uVar0;
	int iVar1;
	int iVar2;
	struct<3> Var3;
	int iVar4;
	Var3 = { *(uParam0[0 /*3*/]) };
	Var3.f_2 = (Var3.f_2 + 1f);
	if (MISC::GET_GROUND_Z_FOR_3D_COORD(Var3, &uVar0, false, false) || __LIB_14__::func_523(*(uParam0[0 /*3*/]), 0) < 60f)
	{
		__LIB_40__::func_690(uParam1);
		MISC::CLEAR_AREA_OF_PEDS(Param2, 28f, 0);
		(uParam0[0 /*3*/])->f_2 = uVar0;
		iVar2 = 0;
		while (iVar2 < iParam9)
		{
			if (fParam6 == -1f)
			{
				fParam6 = __LIB_0__::func_932(*(uParam0[iVar2 /*3*/]), Param2);
			}
			else
			{
				fParam6 = (fParam6 + 180f);
			}
			if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("tonya4")) == 1)
			{
				iVar1 = PED::CREATE_PED(4, joaat("A_M_M_Tourist_01"), *(uParam0[iVar2 /*3*/]), fParam6, true, true);
				PED::SET_PED_COMPONENT_VARIATION(iVar1, 0, 0, 1, 0);
				PED::SET_PED_COMPONENT_VARIATION(iVar1, 2, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iVar1, 3, 0, 2, 0);
				PED::SET_PED_COMPONENT_VARIATION(iVar1, 4, 1, 2, 0);
				PED::SET_PED_COMPONENT_VARIATION(iVar1, 8, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iVar1, 10, 1, 1, 0);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("A_M_M_Tourist_01"));
			}
			else if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("tonya5")) == 1)
			{
				if (iVar2 == 0)
				{
					iVar1 = PED::CREATE_PED(4, joaat("A_M_Y_GenStreet_02"), *(uParam0[iVar2 /*3*/]), fParam6, true, true);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("A_M_Y_GenStreet_02"));
				}
				else
				{
					iVar1 = PED::CREATE_PED(4, joaat("A_M_M_BevHills_02"), *(uParam0[iVar2 /*3*/]), fParam6, true, true);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("A_M_M_BevHills_02"));
				}
			}
			else
			{
				iVar1 = PED::CREATE_PED(4, (*uParam5)[(iVar2 % 2)], *(uParam0[iVar2 /*3*/]), fParam6, true, true);
			}
			ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iVar1, true, 1);
			fParam6 = -1f;
			if (iParam9 > 1)
			{
				(*uParam4)[iVar2] = iVar1;
			}
			else
			{
				*uParam3 = iVar1;
			}
			sParam7 = sParam7;
			(*uParam8)[iVar2] = (*uParam8)[iVar2];
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar1, true);
			PED::SET_PED_CONFIG_FLAG(iVar1, 42, true);
			PED::SET_PED_MOVEMENT_CLIPSET(iVar1, "move_m@JOG@", 0.25f);
			PED::SET_PED_RESET_FLAG(iVar1, 109, true);
			if (iLocal_171 == 3)
			{
				TASK::CLEAR_SEQUENCE_TASK(&iVar4);
				TASK::OPEN_SEQUENCE_TASK(&iVar4);
				TASK::TASK_PLAY_ANIM(0, "oddjobs@towingcome_here", "come_here_idle_a", 4f, -4f, -1, 49, 0f, false, false, false);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1);
				TASK::CLOSE_SEQUENCE_TASK(iVar4);
				if (!ENTITY::IS_ENTITY_DEAD(iVar1, false))
				{
					TASK::TASK_PERFORM_SEQUENCE(iVar1, iVar4);
				}
				TASK::CLEAR_SEQUENCE_TASK(&iVar4);
			}
			iVar2++;
		}
		bLocal_191 = true;
		return 1;
	}
	else if (__LIB_14__::func_523(*(uParam0[0 /*3*/]), 0) < 70f)
	{
	}
	return 0;
}

int func_792(var uParam0, var uParam1, var uParam2)//Position - 0x2C81F
{
	if (iLocal_580 != -1)
	{
		if (!__LIB_0__::func_86(Local_566.f_14))
		{
			Local_461 = { Local_566.f_14 };
			*uParam0 = { Local_566.f_7 };
			*uParam1 = { Local_566.f_10 };
			*uParam2 = Local_566.f_13;
		}
		else
		{
			*uParam0 = { Local_566 };
			*uParam1 = { Local_566.f_3 };
			*uParam2 = Local_566.f_6;
		}
		if ((!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false) && !ENTITY::IS_ENTITY_DEAD(iLocal_674, false)) && !ENTITY::IS_ENTITY_DEAD(Local_565[0 /*20*/].f_6, false))
		{
			if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(iLocal_674, Local_565[0 /*20*/].f_6))
			{
				bLocal_552 = true;
			}
			else
			{
				bLocal_552 = false;
			}
		}
		if (!bLocal_505)
		{
			if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_461, 30f, 30f, 2f, bLocal_552, true, 0))
			{
				if (iLocal_171 == 0 || iLocal_171 == 4)
				{
					if (!ENTITY::IS_ENTITY_DEAD(Local_565[0 /*20*/].f_6, false))
					{
					}
				}
			}
			else if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_461, 3f, 3f, 2f, false, true, 0))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_674, false))
				{
					VEHICLE::BRING_VEHICLE_TO_HALT(iLocal_674, 1f, 0, false);
				}
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_565[iLocal_580 /*20*/].f_6))
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_565[iLocal_580 /*20*/].f_6, *uParam0, *uParam1, *uParam2, false, false, 0))
			{
				if (iLocal_490)
				{
					__LIB_0__::func_151("TOWT_HELP_UH", -1);
				}
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_674, false) && !ENTITY::IS_ENTITY_DEAD(Local_565[iLocal_580 /*20*/].f_6, false))
				{
					if (!VEHICLE::IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(iLocal_674, Local_565[iLocal_580 /*20*/].f_6) || (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_565[iLocal_580 /*20*/].f_6, false) && !VEHICLE::IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(iLocal_674, Local_565[iLocal_580 /*20*/].f_6)))
					{
						if (__LIB_0__::func_75())
						{
							__LIB_0__::func_325();
						}
						HUD::CLEAR_HELP(true);
						iLocal_537 = 1;
						return 1;
					}
				}
			}
			else
			{
				__LIB_40__::func_697();
			}
		}
	}
	iLocal_537 = 0;
	return 0;
}

int func_793()//Position - 0x3DE03
{
	struct<3> Var0;
	if (!ENTITY::IS_ENTITY_DEAD(Local_565[0 /*20*/], false) && !ENTITY::IS_ENTITY_DEAD(iLocal_674, false))
	{
		if (PED::IS_PED_IN_VEHICLE(Local_565[0 /*20*/], iLocal_674, false))
		{
			if (HUD::DOES_BLIP_EXIST(Local_565[0 /*20*/].f_10))
			{
				HUD::REMOVE_BLIP(&(Local_565[0 /*20*/].f_10));
				__LIB_2__::func_814(&iLocal_445);
			}
		}
		else if (!PED::IS_PED_IN_VEHICLE(Local_565[0 /*20*/], Local_565[0 /*20*/].f_6, false))
		{
			__LIB_2__::func_814(&iLocal_445);
		}
	}
	__LIB_40__::func_661();
	switch (iLocal_685)
	{
		case 0:
			if (__LIB_14__::func_523(Local_394[iLocal_451 /*23*/].f_1, 1) < 100f)
			{
				Local_565[0 /*20*/].f_7 = VEHICLE::CREATE_MISSION_TRAIN(6, Local_394[iLocal_451 /*23*/].f_6, Local_394[iLocal_451 /*23*/].f_5, 0, 0);
				if (ENTITY::DOES_ENTITY_EXIST(Local_565[0 /*20*/].f_7))
				{
					Local_565[0 /*20*/].f_10 = HUD::ADD_BLIP_FOR_ENTITY(Local_565[0 /*20*/].f_7);
				}
				iLocal_555 = PED::CREATE_PED_INSIDE_VEHICLE(Local_565[0 /*20*/].f_7, 4, joaat("S_M_M_LSMetro_01"), -1, true, true);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_555, true);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("S_M_M_LSMetro_01"));
				if (!ENTITY::IS_ENTITY_DEAD(Local_565[0 /*20*/].f_7, false))
				{
					VEHICLE::SET_TRAIN_CRUISE_SPEED(Local_565[0 /*20*/].f_7, 0f);
				}
				__LIB_0__::func_229("TOW_OBJ_05", 7500, 1);
				SYSTEM::SETTIMERA(0);
				__LIB_14__::func_601("CROSSING_BELL", &iLocal_446, 1, 0, 226.8878f, -2538.421f, 4.8665f, "TONYA_03_SOUNDSET");
				iLocal_685 = 1;
			}
			break;
		case 1:
			if (__LIB_14__::func_523(Local_394[iLocal_451 /*23*/].f_1, 1) < 80f || SYSTEM::TIMERA() > 10000)
			{
				if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("TOWING_ONCOMING_TRAIN_SCENE"))
				{
					AUDIO::START_AUDIO_SCENE("TOWING_ONCOMING_TRAIN_SCENE");
				}
				iLocal_685 = 2;
			}
			break;
		case 2:
			if (!ENTITY::IS_ENTITY_DEAD(Local_565[0 /*20*/].f_7, false))
			{
				VEHICLE::SET_TRAIN_CRUISE_SPEED(Local_565[0 /*20*/].f_7, 26f);
				VEHICLE::SET_TRAIN_SPEED(Local_565[0 /*20*/].f_7, 22f);
			}
			iLocal_685 = 3;
			break;
		case 3:
			if (!ENTITY::IS_ENTITY_DEAD(Local_565[0 /*20*/].f_7, false) && !ENTITY::IS_ENTITY_DEAD(Local_565[0 /*20*/].f_6, false))
			{
				if (__LIB_2__::func_485(Local_565[0 /*20*/].f_7, Local_394[iLocal_451 /*23*/].f_1, 1) < 175f)
				{
					__LIB_40__::func_700(Local_565[0 /*20*/].f_7);
					__LIB_14__::func_601("TRAIN_BREAKS", &iLocal_444, 1, Local_565[0 /*20*/].f_7, 0f, 0f, 0f, "TONYA_03_SOUNDSET");
					__LIB_40__::func_660(&uLocal_693, Local_565[0 /*20*/].f_7);
					__LIB_14__::func_601("TRAIN_HORN", &iLocal_443, 1, Local_565[0 /*20*/].f_7, 0f, 0f, 0f, "TONYA_03_SOUNDSET");
					iLocal_685 = 4;
				}
			}
			else
			{
				iLocal_685 = 8;
			}
			break;
		case 4:
			if (!ENTITY::IS_ENTITY_DEAD(Local_565[0 /*20*/].f_7, false) && !ENTITY::IS_ENTITY_DEAD(Local_565[0 /*20*/].f_6, false))
			{
				__LIB_40__::func_700(Local_565[0 /*20*/].f_7);
				if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_565[0 /*20*/].f_6, Local_394[iLocal_451 /*23*/].f_13, Local_394[iLocal_451 /*23*/].f_16, Local_394[iLocal_451 /*23*/].f_19, false, true, 0))
				{
					__LIB_40__::func_659(&uLocal_693);
				}
				Var0 = { ENTITY::GET_ENTITY_COORDS(Local_565[0 /*20*/].f_7, true) };
				if (__LIB_2__::func_485(Local_565[0 /*20*/].f_7, Local_394[iLocal_451 /*23*/].f_1, 1) < 3f)
				{
					iLocal_485 = 1;
				}
				if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(Local_565[0 /*20*/].f_7, Local_565[0 /*20*/].f_6))
				{
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_674, false) && !ENTITY::IS_ENTITY_DEAD(Local_565[0 /*20*/].f_6, false))
					{
						if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(iLocal_674, Local_565[0 /*20*/].f_6))
						{
							VEHICLE::DETACH_VEHICLE_FROM_TOW_TRUCK(iLocal_674, Local_565[0 /*20*/].f_6);
						}
					}
					VEHICLE::EXPLODE_VEHICLE(Local_565[0 /*20*/].f_6, true, false);
					iLocal_685 = 6;
				}
				else if (__LIB_2__::func_485(Local_565[0 /*20*/].f_6, Var0, 1) < 10f && ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_565[0 /*20*/].f_6, Local_394[iLocal_451 /*23*/].f_13, Local_394[iLocal_451 /*23*/].f_16, Local_394[iLocal_451 /*23*/].f_19, false, true, 0))
				{
					iLocal_485 = 1;
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_674, false) && !ENTITY::IS_ENTITY_DEAD(Local_565[0 /*20*/].f_6, false))
					{
						if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(iLocal_674, Local_565[0 /*20*/].f_6))
						{
							VEHICLE::DETACH_VEHICLE_FROM_TOW_TRUCK(iLocal_674, Local_565[0 /*20*/].f_6);
						}
					}
					VEHICLE::EXPLODE_VEHICLE(Local_565[0 /*20*/].f_6, true, false);
				}
				if (iLocal_485 && __LIB_2__::func_485(Local_565[0 /*20*/].f_7, Local_394[iLocal_451 /*23*/].f_1, 1) > 4f)
				{
					iLocal_685 = 6;
				}
			}
			else
			{
				iLocal_685 = 6;
			}
			break;
		case 6:
			if (!bLocal_216)
			{
				if (!bLocal_217)
				{
					__LIB_0__::func_229("TOWT_OBJ_03G", 7500, 1);
				}
			}
			else
			{
				StringCopy(&cLocal_615, "TOWT_OBJ_03G", 64);
			}
			__LIB_2__::func_814(&iLocal_443);
			__LIB_2__::func_814(&iLocal_444);
			__LIB_40__::func_659(&uLocal_693);
			__LIB_2__::func_814(&iLocal_445);
			__LIB_2__::func_814(&iLocal_446);
			iLocal_685 = 7;
			break;
		case 7:
			if (!__LIB_0__::func_75())
			{
				if (!bLocal_216)
				{
					if (!bLocal_217)
					{
						__LIB_0__::func_229("TOWT_OBJ_03G", 7500, 1);
					}
				}
				else
				{
					StringCopy(&cLocal_615, "TOWT_OBJ_03G", 64);
				}
				if (AUDIO::IS_AUDIO_SCENE_ACTIVE("TOWING_ONCOMING_TRAIN_SCENE"))
				{
					AUDIO::STOP_AUDIO_SCENE("TOWING_ONCOMING_TRAIN_SCENE");
				}
				iLocal_685 = 8;
			}
			break;
		case 8:
			break;
	}
	return 0;
}

int func_794(bool bParam0)//Position - 0x47B55
{
	struct<3> Var0;
	struct<3> Var1;
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0 || bLocal_216)
		{
			return 0;
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_556) && !ENTITY::IS_ENTITY_DEAD(iLocal_556, false))
	{
		Var1 = { ENTITY::GET_ENTITY_COORDS(iLocal_556, true) };
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_556) && !ENTITY::IS_ENTITY_DEAD(iLocal_556, false))
	{
		if (SYSTEM::VDIST2(Var0, Var1) > 400f)
		{
			if (!bLocal_511)
			{
				HUD::CLEAR_PRINTS();
				if (__LIB_0__::func_75())
				{
					__LIB_0__::func_638();
				}
				__LIB_0__::func_382("TOW_TUT_RETONYA", 7500, 1);
				bLocal_511 = true;
				if (!HUD::DOES_BLIP_EXIST(iLocal_176))
				{
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_556, false))
					{
						iLocal_176 = __LIB_0__::func_639(iLocal_556, 0, 0);
						HUD::SET_BLIP_COLOUR(iLocal_176, 3);
					}
				}
				if (HUD::DOES_BLIP_EXIST(iLocal_557))
				{
					HUD::REMOVE_BLIP(&iLocal_557);
				}
				if (bParam0)
				{
					if (HUD::DOES_BLIP_EXIST(Local_565[0 /*20*/].f_8))
					{
						HUD::REMOVE_BLIP(&(Local_565[0 /*20*/].f_8));
					}
				}
				bLocal_538 = true;
			}
			if (!iLocal_547)
			{
				if (!__LIB_0__::func_75())
				{
					if (__LIB_2__::func_859(&uLocal_228, "TOWAUD", "TONYA_ABAN", 9, 1, 0, 0))
					{
						iLocal_547 = 1;
					}
				}
			}
		}
		else if (SYSTEM::VDIST2(Var0, Var1) < 400f)
		{
			iLocal_547 = 0;
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_556, false))
				{
					__LIB_40__::func_684(1);
					bLocal_538 = false;
				}
			}
			else
			{
				__LIB_40__::func_684(1);
				bLocal_538 = false;
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_556) && !ENTITY::IS_ENTITY_DEAD(iLocal_556, false))
	{
		if (SYSTEM::VDIST2(Var0, Var1) > 22500f)
		{
			if (bLocal_511)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_795(var uParam0, bool bParam1)//Position - 0x48F67
{
	int iVar0;
	HUD::CLEAR_HELP(true);
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_674, false))
	{
		VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_674, 1);
		VEHICLE::SET_VEHICLE_SIREN(iLocal_674, false);
	}
	VEHICLE::REMOVE_ROAD_NODE_SPEED_ZONE(iLocal_591);
	VEHICLE::REMOVE_ROAD_NODE_SPEED_ZONE(iLocal_592);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_677, false);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_678, false);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Local_608 - Vector(15f, 15f, 15f), Local_608 + Vector(15f, 15f, 15f), true, true);
	iVar0 = 0;
	while (iVar0 < 1)
	{
		VEHICLE::REMOVE_ROAD_NODE_SPEED_ZONE(Local_565[iVar0 /*20*/].f_17);
		VEHICLE::REMOVE_ROAD_NODE_SPEED_ZONE(Local_565[iVar0 /*20*/].f_18);
		VEHICLE::REMOVE_ROAD_NODE_SPEED_ZONE(Local_565[iVar0 /*20*/].f_19);
		iVar0++;
	}
	if (!__LIB_0__::func_86(Local_395[__LIB_40__::func_672() /*28*/].f_17))
	{
		__LIB_40__::func_368(iLocal_396, Local_395[__LIB_40__::func_672() /*28*/].f_17, Local_395[__LIB_40__::func_672() /*28*/].f_20);
	}
	ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Local_565[0 /*20*/].f_6));
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_556, false))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_556))
		{
			if (PED::IS_PED_IN_GROUP(iLocal_556))
			{
				PED::REMOVE_PED_FROM_GROUP(iLocal_556);
			}
		}
		if (bParam1)
		{
			PED::SET_PED_KEEP_TASK(iLocal_556, true);
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_556);
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(Local_565[0 /*20*/], false))
	{
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_565[0 /*20*/]));
		if (ENTITY::DOES_ENTITY_EXIST(Local_565[0 /*20*/]))
		{
			if (PED::IS_PED_IN_GROUP(Local_565[0 /*20*/]))
			{
				PED::REMOVE_PED_FROM_GROUP(Local_565[0 /*20*/]);
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_555))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_555, false))
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_555);
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_674, false))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_674, true, true);
		ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_674);
	}
	if (iLocal_507)
	{
		VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Local_462, Local_463, true, true);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_565[0 /*20*/].f_7) && !ENTITY::IS_ENTITY_DEAD(Local_565[0 /*20*/].f_7, false))
	{
		VEHICLE::SET_VEHICLE_STAYS_FROZEN_WHEN_CLEANED_UP(Local_565[0 /*20*/].f_7, true);
		VEHICLE::SET_MISSION_TRAIN_AS_NO_LONGER_NEEDED(&(Local_565[0 /*20*/].f_7), false);
	}
	if (iLocal_171 == 1)
	{
		VEHICLE::SET_RANDOM_TRAINS(true);
		__LIB_0__::func_62(0, 1);
		__LIB_0__::func_62(1, 0);
		__LIB_0__::func_62(2, 0);
		__LIB_0__::func_62(3, 1);
		__LIB_0__::func_62(4, 0);
		__LIB_0__::func_62(5, 0);
		__LIB_0__::func_62(6, 0);
		__LIB_0__::func_62(7, 0);
		__LIB_0__::func_62(8, 0);
		__LIB_0__::func_62(9, 0);
		__LIB_0__::func_62(10, 0);
		__LIB_0__::func_62(11, 0);
	}
	__LIB_2__::func_814(&iLocal_443);
	__LIB_2__::func_814(&iLocal_444);
	__LIB_40__::func_659(&uLocal_693);
	__LIB_2__::func_814(&iLocal_445);
	__LIB_0__::func_345(&uLocal_150, 0, 0);
	if (CAM::DOES_CAM_EXIST(Local_563.f_0))
	{
		__LIB_40__::func_658(&Local_563);
	}
	__LIB_38__::func_901(uParam0, 0);
	__LIB_16__::func_613();
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("towtruck"), false);
	if (bParam1)
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
}

int func_796()//Position - 0x27736
{
	bool bVar0;
	bool bVar1;
	char* sVar2;
	bVar0 = false;
	bVar1 = false;
	if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
	{
		return 0;
	}
	if (iLocal_171 == 3)
	{
		bVar0 = true;
	}
	if (iLocal_681 < 9)
	{
		bVar1 = true;
	}
	if (bVar1)
	{
		sVar2 = "TOW_DISP_CAR";
	}
	else if (bVar0)
	{
		sVar2 = "TOW_DISP_GAR";
	}
	else
	{
		sVar2 = "TOW_DISP_IMP";
	}
	if (!__LIB_0__::func_86(Local_460[0 /*3*/]))
	{
		if (!iLocal_500)
		{
			if (__LIB_14__::func_523(Local_460[0 /*3*/], 0) > (fLocal_181 + 250f))
			{
				if (!iLocal_500)
				{
					if (__LIB_0__::func_75())
					{
						__LIB_0__::func_638();
					}
				}
				if (!__LIB_40__::func_635())
				{
					if (__LIB_2__::func_859(&Local_397, "TOWAUD", sVar2, 9, 0, 0, 0))
					{
						iLocal_500 = 1;
					}
				}
			}
		}
		if (__LIB_14__::func_523(Local_460[0 /*3*/], 0) > (fLocal_181 + 450f))
		{
			if (__LIB_40__::func_635())
			{
				iLocal_625 = 12;
				return 1;
			}
			else
			{
				iLocal_625 = 11;
				return 1;
			}
		}
	}
	return 0;
}

int func_797()//Position - 0x2B229
{
	__LIB_40__::func_642();
	switch (iLocal_597)
	{
		case 0:
			Local_460[0 /*3*/] = { 406.3804f, -1635.8673f, 28.2928f };
			fLocal_181 = __LIB_14__::func_523(Local_460[0 /*3*/], 0);
			__LIB_38__::func_603(iLocal_559);
			iLocal_559 = HUD::ADD_BLIP_FOR_COORD(406.3804f, -1635.8673f, 28.2928f);
			HUD::SET_BLIP_ROUTE(iLocal_559, true);
			if (!__LIB_1__::func_13(&iLocal_659))
			{
				__LIB_1__::func_362(&iLocal_659);
			}
			else
			{
				__LIB_1__::func_31(&iLocal_659);
			}
			iLocal_597 = 1;
			break;
		case 1:
			if (!bLocal_525)
			{
				if (!HUD::IS_MESSAGE_BEING_DISPLAYED())
				{
					if (__LIB_2__::func_859(&Local_397, "TOWAUD", "TOW_DROPS", 9, 0, 0, 0))
					{
						bLocal_525 = true;
					}
				}
			}
			else if (!iLocal_533)
			{
				if (!__LIB_0__::func_75())
				{
					__LIB_0__::func_229("TOWT_DRIVE", 7500, 1);
					iLocal_533 = 1;
				}
			}
			if (!iLocal_531 && bLocal_525)
			{
				if (__LIB_1__::func_13(&iLocal_659))
				{
					if (__LIB_2__::func_572(&iLocal_659) > 25f)
					{
						if (__LIB_2__::func_859(&Local_397, "TOWAUD", "TOW_LASTCHAT", 9, 0, 0, 0))
						{
							iLocal_531 = 1;
						}
					}
				}
			}
			if ((!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false) && !ENTITY::IS_ENTITY_DEAD(iLocal_556, false)) && !ENTITY::IS_ENTITY_DEAD(iLocal_674, false))
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_674, false) && PED::IS_PED_IN_VEHICLE(iLocal_556, iLocal_674, false))
				{
					if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 406.3804f, -1635.8673f, 28.2928f, 5f, 5f, 2f, true, true, 0))
					{
						if (HUD::DOES_BLIP_EXIST(iLocal_559))
						{
							HUD::REMOVE_BLIP(&iLocal_559);
						}
						VEHICLE::BRING_VEHICLE_TO_HALT(iLocal_674, 5f, 1, false);
						VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_674, 1);
						__LIB_2__::func_859(&Local_397, "TOWAUD", "TOW_TUT_ENDC", 9, 0, 0, 0);
						return 1;
					}
				}
			}
			break;
		case 2:
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_556, false) && !ENTITY::IS_ENTITY_DEAD(iLocal_674, false))
			{
				if (!PED::IS_PED_IN_VEHICLE(iLocal_556, iLocal_674, false))
				{
					return 1;
				}
			}
			break;
		case 3:
			break;
	}
	return 0;
}

int func_798(int iParam0, int iParam1, char* sParam2)//Position - 0x2CE57
{
	struct<3> Var0;
	struct<3> Var1;
	switch (*iParam0)
	{
		case 0:
			if (!bLocal_504)
			{
				if ((__LIB_40__::func_687(Local_565[iParam1 /*20*/].f_6, iLocal_674, &iLocal_450, 10, 150f, 2f, 1) || iLocal_501) || bLocal_217)
				{
					if (!bLocal_487)
					{
						iLocal_450 = 0;
						__LIB_2__::func_814(&iLocal_445);
						if (!ENTITY::IS_ENTITY_DEAD(Local_565[iParam1 /*20*/], false))
						{
							if (TASK::GET_SCRIPT_TASK_STATUS(Local_565[iParam1 /*20*/], joaat("SCRIPT_TASK_TURN_PED_TO_FACE_ENTITY")) != 1)
							{
								TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_565[iParam1 /*20*/], PLAYER::PLAYER_PED_ID(), -1);
							}
						}
						bLocal_487 = true;
					}
					if (bLocal_487)
					{
						if (ENTITY::IS_ENTITY_AT_COORD(iLocal_674, ENTITY::GET_ENTITY_COORDS(Local_565[iParam1 /*20*/], true), 25f, 25f, 25f, false, true, 0))
						{
							if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_565[iParam1 /*20*/], "oddjobs@towingcome_here", "come_here_idle_a", 3))
							{
								TASK::STOP_ANIM_TASK(Local_565[iParam1 /*20*/], "oddjobs@towingcome_here", "come_here_idle_a", -4f);
							}
							if (!__LIB_40__::func_648())
							{
								if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("tonya3")) == 1)
								{
									__LIB_0__::func_222(&Local_397, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
									__LIB_0__::func_222(&Local_397, 3, Local_565[iParam1 /*20*/], "TOWTRAINM", 0, 1);
									__LIB_2__::func_859(&Local_397, "TOWAUD", "TOW_TRAIN1", 9, 1, 0, 0);
									PED::SET_PED_MOVEMENT_CLIPSET(Local_565[iParam1 /*20*/], "move_m@JOG@", 0.25f);
									HUD::CLEAR_HELP(true);
									if (!ENTITY::IS_ENTITY_DEAD(Local_565[iParam1 /*20*/], false))
									{
										VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_674, 1);
										TASK::TASK_ENTER_VEHICLE(Local_565[iParam1 /*20*/], iLocal_674, -1, 0, 2f, 1048577, 0);
									}
								}
								else if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("tonya4")) == 1)
								{
									__LIB_0__::func_222(&Local_397, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
									__LIB_0__::func_222(&Local_397, 3, Local_565[iParam1 /*20*/], "TOWBREAKDOWN1", 0, 1);
									__LIB_2__::func_859(&Local_397, "TOWAUD", sParam2, 9, 1, 0, 0);
									HUD::CLEAR_HELP(true);
									if (!ENTITY::IS_ENTITY_DEAD(Local_565[iParam1 /*20*/], false))
									{
										VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_674, 1);
										TASK::TASK_ENTER_VEHICLE(Local_565[iParam1 /*20*/], iLocal_674, -1, 0, 1f, 1048577, 0);
									}
								}
								else
								{
									__LIB_0__::func_222(&Local_397, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
									__LIB_0__::func_222(&Local_397, iLocal_599, Local_565[iParam1 /*20*/], sLocal_459, 0, 1);
									__LIB_2__::func_859(&Local_397, "TOWAUD", sParam2, 9, 1, 0, 0);
									PED::SET_PED_MOVEMENT_CLIPSET(Local_565[iParam1 /*20*/], "move_m@JOG@", 0.25f);
									HUD::CLEAR_HELP(true);
									if (!ENTITY::IS_ENTITY_DEAD(Local_565[iParam1 /*20*/], false))
									{
										VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_674, 1);
										TASK::TASK_ENTER_VEHICLE(Local_565[iParam1 /*20*/], iLocal_674, 20000, 0, 2f, 1048577, 0);
									}
								}
								if (iLocal_501)
								{
									if (HUD::DOES_BLIP_EXIST(Local_565[iParam1 /*20*/].f_8))
									{
										HUD::REMOVE_BLIP(&(Local_565[iParam1 /*20*/].f_8));
									}
									if (!HUD::DOES_BLIP_EXIST(Local_565[iParam1 /*20*/].f_8))
									{
										if (ENTITY::DOES_ENTITY_EXIST(Local_565[iParam1 /*20*/]))
										{
											if (HUD::DOES_BLIP_EXIST(Local_565[0 /*20*/].f_9))
											{
												HUD::REMOVE_BLIP(&(Local_565[0 /*20*/].f_9));
											}
											Local_565[iParam1 /*20*/].f_8 = HUD::ADD_BLIP_FOR_ENTITY(Local_565[iParam1 /*20*/]);
											HUD::SET_BLIP_COLOUR(Local_565[iParam1 /*20*/].f_8, 3);
											HUD::SET_BLIP_SCALE(Local_565[iParam1 /*20*/].f_8, 0.7f);
										}
									}
								}
								SYSTEM::SETTIMERA(0);
								*iParam0 = 1;
							}
						}
						else if (ENTITY::IS_ENTITY_AT_COORD(iLocal_674, ENTITY::GET_ENTITY_COORDS(Local_565[iParam1 /*20*/], true), 50f, 50f, 50f, false, true, 0))
						{
							if (!iLocal_536)
							{
								if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("tonya4")) == 1)
								{
									__LIB_0__::func_222(&Local_397, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
									__LIB_0__::func_222(&Local_397, 3, Local_565[iParam1 /*20*/], "TOWBREAKDOWN1", 0, 1);
									if (__LIB_2__::func_859(&Local_397, "TOWAUD", "TOW_CALLOUT", 9, 1, 0, 0))
									{
										iLocal_536 = 1;
									}
								}
							}
						}
					}
				}
			}
			break;
		case 1:
			bLocal_489 = true;
			__LIB_1__::func_31(&iLocal_641);
			__LIB_1__::func_31(&iLocal_626);
			__LIB_38__::func_603(Local_565[iParam1 /*20*/].f_8);
			if (!HUD::DOES_BLIP_EXIST(Local_565[0 /*20*/].f_9))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_565[iParam1 /*20*/]))
				{
					Local_565[0 /*20*/].f_9 = HUD::ADD_BLIP_FOR_ENTITY(Local_565[iParam1 /*20*/]);
					HUD::SET_BLIP_COLOUR(Local_565[0 /*20*/].f_9, 3);
					HUD::SET_BLIP_SCALE(Local_565[0 /*20*/].f_9, 0.7f);
				}
			}
			__LIB_0__::func_229("TOWT_OBJ_02", 7500, 1);
			*iParam0 = 2;
			break;
		case 2:
			PED::ADD_RELATIONSHIP_GROUP("TOWBUDDIES", &iLocal_564);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_564, joaat("PLAYER"));
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_565[iParam1 /*20*/], iLocal_564);
			__LIB_40__::func_647(iParam1);
			*iParam0 = 3;
			break;
		case 3:
			if (!PED::IS_PED_IN_VEHICLE(Local_565[iParam1 /*20*/], iLocal_674, false))
			{
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
				{
					Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
				}
				if (!ENTITY::IS_ENTITY_DEAD(Local_565[0 /*20*/], false))
				{
					Var1 = { ENTITY::GET_ENTITY_COORDS(Local_565[0 /*20*/], true) };
				}
				if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("tonya4")) == 1)
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(Local_565[0 /*20*/], joaat("SCRIPT_TASK_ENTER_VEHICLE")) != 1)
					{
						TASK::TASK_ENTER_VEHICLE(Local_565[iParam1 /*20*/], iLocal_674, -1, 0, 2f, 1048577, 0);
					}
				}
				if (!iLocal_542)
				{
					if (SYSTEM::VDIST2(Var0, Var1) > 2500f)
					{
						__LIB_0__::func_229("TOW_OBJ_REOWNER", 7500, 1);
						iLocal_542 = 1;
					}
				}
				if (__LIB_40__::func_698(&uLocal_690, Local_565[iParam1 /*20*/], 1125515264, 30000))
				{
					iLocal_625 = 11;
					__LIB_40__::func_667();
				}
			}
			if (PED::IS_PED_IN_VEHICLE(Local_565[iParam1 /*20*/], iLocal_674, false))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_674, false))
				{
					VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_674, 9);
					__LIB_38__::func_603(Local_565[0 /*20*/].f_9);
				}
			}
			if (PED::IS_PED_IN_VEHICLE(Local_565[iParam1 /*20*/], iLocal_674, false) && !AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				if (iLocal_501)
				{
					__LIB_2__::func_859(&Local_397, "TOWAUD", "TOW_TRAIN2", 9, 1, 0, 0);
				}
				else
				{
					__LIB_2__::func_859(&Local_397, "TOWAUD", "TOW_BREAKS", 9, 1, 0, 0);
				}
				*iParam0 = 4;
			}
			break;
		case 4:
			if (PED::IS_PED_IN_VEHICLE(Local_565[iParam1 /*20*/], iLocal_674, false))
			{
				__LIB_40__::func_647(iParam1);
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_674, false) && !ENTITY::IS_ENTITY_DEAD(Local_565[0 /*20*/].f_6, false))
				{
					if (iLocal_501 && VEHICLE::IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(iLocal_674, Local_565[0 /*20*/].f_6))
					{
						return 1;
					}
				}
				if (!HUD::DOES_BLIP_EXIST(Local_565[0 /*20*/].f_8))
				{
					if (ENTITY::DOES_ENTITY_EXIST(Local_565[iParam1 /*20*/].f_6) && !ENTITY::IS_ENTITY_DEAD(Local_565[iParam1 /*20*/].f_6, false))
					{
						Local_565[0 /*20*/].f_8 = HUD::ADD_BLIP_FOR_ENTITY(Local_565[iParam1 /*20*/].f_6);
						HUD::SET_BLIP_COLOUR(Local_565[iParam1 /*20*/].f_8, 3);
					}
				}
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_674, false) && !ENTITY::IS_ENTITY_DEAD(Local_565[0 /*20*/].f_6, false))
				{
					if (!VEHICLE::IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(iLocal_674, Local_565[0 /*20*/].f_6))
					{
						__LIB_0__::func_229("TOWT_OBJ_03", 7500, 1);
						StringCopy(&cLocal_615, "TOWT_OBJ_03", 64);
					}
				}
				__LIB_1__::func_31(&iLocal_626);
				*iParam0 = 0;
				return 1;
			}
			break;
	}
	return 0;
}

int func_799(var uParam0, var uParam1)//Position - 0x2E0C1
{
	__LIB_40__::func_702();
	__LIB_40__::func_653();
	if (uParam0->f_3 == 3)
	{
		sLocal_458[0] = "base";
		__LIB_14__::func_603(&uLocal_472, "amb@world_human_smoking@male@male_a@base");
		__LIB_14__::func_603(&uLocal_472, "oddjobs@towingcome_here");
		__LIB_14__::func_603(&uLocal_472, "move_m@JOG@");
	}
	else if ((uParam0->f_3 == 0 || uParam0->f_3 == 2) && !bLocal_505)
	{
		__LIB_14__::func_603(&uLocal_472, "Ped");
		__LIB_14__::func_603(&uLocal_472, "oddjobs@towing");
		__LIB_14__::func_603(&uLocal_472, "oddjobs@towingangryidle_a");
		__LIB_14__::func_603(&uLocal_472, "oddjobs@towingpleadingidle_b");
		__LIB_14__::func_603(&uLocal_472, "oddjobs@towingpleadingidle_a");
		__LIB_14__::func_603(&uLocal_472, "RANDOM@BICYCLE_THIEF@IDLE_A");
		__LIB_14__::func_603(&uLocal_472, "move_m@JOG@");
	}
	if (uParam0->f_3 == 4)
	{
		cLocal_457 = "REACTION@MALE_STAND@BIG_VARIATIONS@A";
		__LIB_14__::func_603(&uLocal_472, cLocal_457);
		__LIB_14__::func_526(&uLocal_464, joaat("ambulance"));
		__LIB_14__::func_526(&uLocal_464, joaat("S_M_M_Paramedic_01"));
		__LIB_14__::func_603(&uLocal_472, "move_m@JOG@");
		sLocal_458[0] = "react_big_variations_a";
		sLocal_458[1] = "react_big_variations_b";
		sLocal_458[2] = "react_big_variations_c";
	}
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("towtruck"), true);
	if (uParam0->f_3 == 1)
	{
		STREAMING::REQUEST_PTFX_ASSET();
		__LIB_14__::func_603(&uLocal_472, "oddjobs@towing");
		__LIB_14__::func_603(&uLocal_472, "amb@world_human_smoking@male@male_a@base");
		__LIB_14__::func_603(&uLocal_472, "oddjobs@towingpleadingidle_b");
		__LIB_14__::func_603(&uLocal_472, "move_m@JOG@");
		__LIB_14__::func_526(&uLocal_464, joaat("freightcont1"));
		__LIB_14__::func_526(&uLocal_464, joaat("tankercar"));
		__LIB_14__::func_526(&uLocal_464, joaat("freight"));
		__LIB_14__::func_526(&uLocal_464, joaat("freightcar"));
		__LIB_14__::func_526(&uLocal_464, joaat("S_M_M_LSMetro_01"));
	}
	Local_50 = { Local_50 };
	Local_49 = { Local_49 };
	__LIB_14__::func_526(&uLocal_464, iLocal_393);
	__LIB_40__::func_652(uParam1, "TOW", 2, 0);
	__LIB_40__::func_652(uParam1, "DTRSHRD", 3, 0);
	__LIB_1__::func_298(&uLocal_464);
	__LIB_33__::func_275(&uLocal_472, uParam1);
	if (uParam0->f_3 == 0)
	{
		while (!STREAMING::HAS_MODEL_LOADED(joaat("A_M_M_GenFat_01")))
		{
			__LIB_33__::func_281(uParam1);
			SYSTEM::WAIT(0);
		}
	}
	while (!__LIB_38__::func_900(uParam1))
	{
		__LIB_33__::func_281(uParam1);
		SYSTEM::WAIT(0);
	}
	while (!__LIB_1__::func_297(&uLocal_464))
	{
		__LIB_33__::func_281(uParam1);
		SYSTEM::WAIT(0);
	}
	if (uParam0->f_3 == 1)
	{
		while (!AUDIO::REQUEST_SCRIPT_AUDIO_BANK("SCRIPT\TOWING_TRAIN", false, -1) || !STREAMING::HAS_PTFX_ASSET_LOADED())
		{
			__LIB_33__::func_281(uParam1);
			SYSTEM::WAIT(0);
		}
	}
	while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(2) || !HUD::HAS_ADDITIONAL_TEXT_LOADED(3))
	{
		__LIB_33__::func_281(uParam1);
		SYSTEM::WAIT(0);
	}
	return 1;
}

void func_800(struct<165> Param0, int iParam1, int iParam2)//Position - 0x279C0
{
	if (!iLocal_212)
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			if (iLocal_452 > 1)
			{
				if (__LIB_40__::func_638(iParam1, iParam2))
				{
					if (__LIB_0__::func_75())
					{
						Local_226 = { __LIB_0__::func_485() };
						__LIB_0__::func_638();
						iLocal_212 = 1;
						iLocal_452 = 3;
					}
					else
					{
						iLocal_212 = 1;
						iLocal_452 = 3;
					}
				}
			}
		}
	}
	switch (iLocal_452)
	{
		case 0:
			if (!__LIB_0__::func_75())
			{
				SYSTEM::SETTIMERA(0);
				iLocal_452 = 1;
			}
			break;
		case 1:
			if ((SYSTEM::TIMERA() > 3000 && bLocal_217) && !__LIB_0__::func_501("TOWT_OBJ_04", 0, 0))
			{
				if (!__LIB_0__::func_75())
				{
					__LIB_0__::func_222(&Param0, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
					if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("tonya3")) == 1 || SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("tonya4")) == 1)
					{
						if (iLocal_171 == 1)
						{
							__LIB_2__::func_859(&Param0, "TOWAUD", "TOW_TRN_C1", 7, 0, 0, 0);
							sLocal_227 = "TOW_TRN_C1";
						}
						else if (iLocal_171 == 3)
						{
							__LIB_2__::func_859(&Param0, "TOWAUD", "TOW_BRK_C", 7, 0, 0, 0);
							sLocal_227 = "TOW_BRK_C";
						}
						bLocal_213 = true;
					}
					else if (iLocal_171 == 1)
					{
						if (Global_113386.f_19973.f_5 == 0 || Global_113386.f_19973.f_5 == 1)
						{
							__LIB_0__::func_222(&Param0, 5, (*iParam1)[0 /*20*/], "TOWTRAINF", 0, 1);
							__LIB_2__::func_859(&Param0, "TOWAUD", "TOW_MECH", 7, 0, 0, 0);
							sLocal_227 = "TOW_MECH";
						}
						else if (Global_113386.f_19973.f_5 == 2)
						{
							__LIB_0__::func_222(&Param0, 6, (*iParam1)[0 /*20*/], "TOWILLEGALMAN2", 0, 1);
							__LIB_2__::func_859(&Param0, "TOWAUD", "TOW_MECH2", 7, 0, 0, 0);
							sLocal_227 = "TOW_MECH2";
						}
						else
						{
							__LIB_40__::func_709(Param0, iParam1);
						}
						bLocal_213 = true;
					}
					else if (iLocal_171 == 3)
					{
						if (Global_113386.f_19973.f_7 == 0 || Global_113386.f_19973.f_7 == 1)
						{
							__LIB_0__::func_222(&Param0, 5, (*iParam1)[0 /*20*/], "TOWBREAKM", 0, 1);
							__LIB_2__::func_859(&Param0, "TOWAUD", "TOW_BRK_CONV", 7, 0, 0, 0);
							sLocal_227 = "TOW_BRK_CONV";
						}
						else if (Global_113386.f_19973.f_7 == 2)
						{
							__LIB_0__::func_222(&Param0, 6, (*iParam1)[0 /*20*/], "TOWBREAKHIPM", 0, 1);
							__LIB_2__::func_859(&Param0, "TOWAUD", "TOW_BRK_CON2", 7, 0, 0, 0);
							sLocal_227 = "TOW_BRK_CON2";
						}
						else
						{
							__LIB_40__::func_708(Param0, iParam1);
						}
						bLocal_213 = true;
					}
				}
				else if (__LIB_17__::func_157(sLocal_227))
				{
					iLocal_452 = 2;
				}
			}
			break;
		case 3:
			__LIB_40__::func_707(Param0, iParam1);
			if (iLocal_214)
			{
				iLocal_452 = 2;
			}
			break;
		case 2:
			if (__LIB_40__::func_637(iParam2))
			{
				if (bLocal_213)
				{
					if (iLocal_212)
					{
						if (!__LIB_0__::func_75())
						{
							if (__LIB_14__::func_782(&Local_397, "TOWAUD", sLocal_227, &Local_226, 8, 0, 0))
							{
								iLocal_212 = 0;
								iLocal_452 = 4;
							}
						}
					}
				}
			}
			break;
		case 4:
			__LIB_40__::func_637(iParam2);
			break;
	}
}

int func_801(char* sParam0, struct<3> Param1)//Position - 0x2C305
{
	bool bVar0;
	int iVar1;
	bVar0 = true;
	__LIB_40__::func_717();
	iVar1 = 0;
	while (iVar1 < 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_565[iVar1 /*20*/].f_6))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_674, false) && !ENTITY::IS_ENTITY_DEAD(Local_565[iVar1 /*20*/].f_6, false))
			{
				if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(iLocal_674, Local_565[iVar1 /*20*/].f_6) && __LIB_40__::func_644())
				{
					if (!iLocal_543)
					{
						HUD::CLEAR_PRINTS();
						iLocal_543 = 1;
					}
					RECORDING::REPLAY_RECORD_BACK_FOR_TIME(3f, 3f, 0);
					VEHICLE::SET_VEHICLE_SIREN(iLocal_674, true);
					__LIB_40__::func_695();
					__LIB_0__::func_345(&uLocal_150, 0, 0);
					bLocal_217 = true;
					if (iLocal_506 && !PED::IS_PED_IN_VEHICLE(Local_565[iVar1 /*20*/], iLocal_674, false))
					{
						bVar0 = false;
						if (iLocal_686 < 4)
						{
							SYSTEM::SETTIMERB(0);
							iLocal_686 = 5;
						}
					}
					if (bVar0)
					{
						__LIB_40__::func_686(&iLocal_635);
						if (HUD::DOES_BLIP_EXIST(Local_565[iVar1 /*20*/].f_8))
						{
							HUD::SET_BLIP_ROUTE(Local_565[iVar1 /*20*/].f_8, false);
						}
						iLocal_510 = 0;
						__LIB_38__::func_603(Local_565[iVar1 /*20*/].f_8);
						Local_565[iVar1 /*20*/].f_14 = __LIB_2__::func_572(&(Local_565[iVar1 /*20*/].f_11));
						if (iLocal_562 == 0)
						{
							Local_565[iVar1 /*20*/].f_8 = HUD::ADD_BLIP_FOR_COORD(Param1);
							fLocal_181 = __LIB_14__::func_523(Param1, 0);
							Local_460[0 /*3*/] = { Param1 };
						}
						if (iLocal_171 == 4)
						{
							VEHICLE::SET_VEHICLE_DOOR_SHUT(Local_565[0 /*20*/].f_6, 0, false);
						}
						__LIB_1__::func_31(&iLocal_641);
						if (HUD::DOES_BLIP_EXIST(Local_565[iVar1 /*20*/].f_8))
						{
							HUD::SET_BLIP_COLOUR(Local_565[iVar1 /*20*/].f_8, 5);
							HUD::SET_BLIP_ROUTE(Local_565[iVar1 /*20*/].f_8, true);
						}
						if (!bLocal_505 && !SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("tonya5")) == 1)
						{
							if (iLocal_483)
							{
								__LIB_0__::func_229(sParam0, 7500, 1);
								iLocal_483 = 0;
							}
						}
						StringCopy(&cLocal_615, sParam0, 64);
						MISC::CLEAR_AREA_OF_VEHICLES(Local_460[0 /*3*/], 6f, false, false, false, false, false, false, 0);
						iLocal_580 = iVar1;
						return 1;
					}
				}
			}
		}
		iVar1++;
	}
	return 0;
}

int func_802()//Position - 0x3E60D
{
	switch (iLocal_684)
	{
		case 0:
			if (bLocal_509)
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_565[0 /*20*/].f_6, false))
				{
					Local_565[0 /*20*/] = PED::CREATE_PED_INSIDE_VEHICLE(Local_565[0 /*20*/].f_6, 26, uLocal_561[0], 0, true, true);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(uLocal_561[0]);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_565[0 /*20*/], true);
					PED::SET_PED_CONFIG_FLAG(Local_565[0 /*20*/], 42, true);
					__LIB_0__::func_222(&Local_397, iLocal_599, Local_565[0 /*20*/], sLocal_459, 0, 1);
					TASK::TASK_PLAY_ANIM(Local_565[0 /*20*/], "RANDOM@CAR_SLEEPING", "Sleeping_Idle", 8f, -8f, -1, 1, 0f, false, false, false);
					bLocal_191 = true;
				}
			}
			else if (__LIB_0__::func_680())
			{
				bLocal_508 = false;
			}
			else
			{
				bLocal_508 = false;
			}
			iLocal_684 = 1;
			break;
		case 1:
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_674, false) && !ENTITY::IS_ENTITY_DEAD(Local_565[0 /*20*/].f_6, false))
			{
				if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(iLocal_674, Local_565[0 /*20*/].f_6))
				{
					if (!bLocal_509)
					{
						__LIB_1__::func_327(&iLocal_644, 1f);
					}
					else
					{
						__LIB_1__::func_362(&iLocal_644);
					}
				}
			}
			if (__LIB_1__::func_13(&iLocal_644) && __LIB_2__::func_572(&iLocal_644) > 1f)
			{
				if (__LIB_1__::func_13(&iLocal_644))
				{
					if (bLocal_509)
					{
						if ((Global_113386.f_19973.f_4 % 2) == 0)
						{
							if (!ENTITY::IS_ENTITY_DEAD(Local_565[0 /*20*/], false))
							{
								TASK::OPEN_SEQUENCE_TASK(&iLocal_172);
								TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
								TASK::TASK_GO_TO_ENTITY(0, iLocal_674, 20000, 9f, 1f, 2f, 0);
								TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
								TASK::TASK_PLAY_ANIM(0, "oddjobs@towingangryidle_a", "idle_b", -8f, 0.25f, 7000, 0, 0f, false, false, false);
								TASK::TASK_WANDER_STANDARD(0, 40000f, 0);
								TASK::CLOSE_SEQUENCE_TASK(iLocal_172);
								if (!ENTITY::IS_ENTITY_DEAD(Local_565[0 /*20*/], false))
								{
									TASK::TASK_PERFORM_SEQUENCE(Local_565[0 /*20*/], iLocal_172);
								}
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_172);
							}
							__LIB_2__::func_859(&Local_397, "TOWAUD", "TOW_HOM_ANGR", 9, 0, 0, 0);
						}
						else
						{
							if (!ENTITY::IS_ENTITY_DEAD(Local_565[0 /*20*/], false))
							{
								__LIB_40__::func_664(Local_565[0 /*20*/]);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_565[0 /*20*/], 0, false);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_565[0 /*20*/], 1, false);
								TASK::OPEN_SEQUENCE_TASK(&iLocal_172);
								TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
								TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
								TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
								TASK::CLOSE_SEQUENCE_TASK(iLocal_172);
								if (!ENTITY::IS_ENTITY_DEAD(Local_565[0 /*20*/], false))
								{
									TASK::TASK_PERFORM_SEQUENCE(Local_565[0 /*20*/], iLocal_172);
								}
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_172);
								if (ENTITY::DOES_ENTITY_EXIST(Local_565[0 /*20*/]))
								{
									iLocal_558 = HUD::ADD_BLIP_FOR_ENTITY(Local_565[0 /*20*/]);
									HUD::SET_BLIP_COLOUR(iLocal_558, 1);
									HUD::SET_BLIP_SCALE(iLocal_558, 0.7f);
									__LIB_40__::func_663(Local_565[0 /*20*/], iLocal_558, 1);
								}
								bLocal_508 = true;
							}
							__LIB_2__::func_859(&Local_397, "TOWAUD", "TOW_HOM_DRG", 9, 0, 0, 0);
						}
						iLocal_684 = 2;
					}
					else if (bLocal_508)
					{
						Local_565[0 /*20*/] = PED::CREATE_PED(4, uLocal_561[0], Local_394[iLocal_451 /*23*/].f_6, Local_394[iLocal_451 /*23*/].f_9, true, true);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_565[0 /*20*/], true);
						PED::SET_PED_CONFIG_FLAG(Local_565[0 /*20*/], 42, true);
						bLocal_191 = true;
						sLocal_456 = "TOW_PED_ANGR";
						bLocal_191 = false;
						if (!ENTITY::IS_ENTITY_DEAD(Local_565[0 /*20*/], false))
						{
							TASK::OPEN_SEQUENCE_TASK(&iLocal_172);
							TASK::TASK_GO_TO_ENTITY(0, iLocal_674, 20000, 15f, 3f, 2f, 0);
							TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_172);
							TASK::TASK_PERFORM_SEQUENCE(Local_565[0 /*20*/], iLocal_172);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_172);
						}
						iLocal_684 = 3;
					}
					else
					{
						Local_565[0 /*20*/] = PED::CREATE_PED(4, joaat("A_M_M_GenFat_01"), Local_394[iLocal_451 /*23*/].f_6, Local_394[iLocal_451 /*23*/].f_9, true, true);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_565[0 /*20*/], true);
						PED::SET_PED_CONFIG_FLAG(Local_565[0 /*20*/], 42, true);
						ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_565[0 /*20*/], true, 1);
						PED::SET_PED_MOVEMENT_CLIPSET(Local_565[0 /*20*/], "move_m@JOG@", 0.25f);
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("A_M_M_GenFat_01"));
						__LIB_0__::func_222(&Local_397, 6, Local_565[0 /*20*/], "TOWILLEGALMAN1", 0, 1);
						bLocal_191 = true;
						sLocal_456 = "TOW_ILLEG2";
						if (!ENTITY::IS_ENTITY_DEAD(Local_565[0 /*20*/], false))
						{
							TASK::OPEN_SEQUENCE_TASK(&iLocal_172);
							TASK::TASK_GOTO_ENTITY_OFFSET(0, PLAYER::PLAYER_PED_ID(), 20000, 8f, 0f, 2f, 0);
							TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_172);
							if (!ENTITY::IS_ENTITY_DEAD(Local_565[0 /*20*/], false))
							{
								TASK::TASK_PERFORM_SEQUENCE(Local_565[0 /*20*/], iLocal_172);
							}
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_172);
						}
						iLocal_684 = 3;
					}
				}
			}
			break;
		case 2:
			if (!ENTITY::IS_ENTITY_DEAD(Local_565[0 /*20*/], false))
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE(Local_565[0 /*20*/], false))
				{
					if (bLocal_509)
					{
						if (!__LIB_0__::func_75())
						{
							if (TASK::GET_SCRIPT_TASK_STATUS(Local_565[0 /*20*/], joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) == 1)
							{
								if (TASK::GET_SEQUENCE_PROGRESS(Local_565[0 /*20*/]) == 2)
								{
									if ((Global_113386.f_19973.f_4 % 2) == 0)
									{
										__LIB_2__::func_859(&Local_397, "TOWAUD", "TOW_HOM_ANG1", 9, 0, 0, 0);
									}
									else
									{
										__LIB_2__::func_859(&Local_397, "TOWAUD", "TOW_HOM_ANG2", 9, 0, 0, 0);
									}
									iLocal_684 = 8;
								}
							}
						}
					}
					else if (!ENTITY::IS_ENTITY_DEAD(iLocal_674, false) && !ENTITY::IS_ENTITY_DEAD(Local_565[0 /*20*/].f_6, false))
					{
						if (__LIB_40__::func_719() || !VEHICLE::IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(iLocal_674, Local_565[0 /*20*/].f_6))
						{
							__LIB_0__::func_325();
							iLocal_684 = 5;
						}
					}
				}
			}
			break;
		case 3:
			if (!ENTITY::IS_ENTITY_DEAD(Local_565[0 /*20*/], false))
			{
				if (__LIB_0__::func_76(Local_565[0 /*20*/], PLAYER::PLAYER_PED_ID(), 1) < 12f)
				{
					if (!ENTITY::IS_ENTITY_DEAD(Local_565[0 /*20*/], false))
					{
						TASK::CLEAR_PED_TASKS(Local_565[0 /*20*/]);
					}
					if (bLocal_508)
					{
						TASK::TASK_COMBAT_PED(Local_565[0 /*20*/], PLAYER::PLAYER_PED_ID(), 0, 16);
					}
					else if (!ENTITY::IS_ENTITY_DEAD(Local_565[0 /*20*/], false))
					{
						TASK::OPEN_SEQUENCE_TASK(&iLocal_172);
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
						TASK::TASK_PLAY_ANIM(0, "oddjobs@towingpleadingidle_a", "idle_c", -8f, 0.25f, -1, 1, 0f, false, false, false);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_172);
						if (!ENTITY::IS_ENTITY_DEAD(Local_565[0 /*20*/], false))
						{
							TASK::TASK_PERFORM_SEQUENCE(Local_565[0 /*20*/], iLocal_172);
						}
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_172);
					}
					iLocal_497 = 1;
					SYSTEM::SETTIMERB(0);
					__LIB_1__::func_31(&iLocal_638);
					iLocal_684 = 4;
				}
			}
			break;
		case 4:
			__LIB_0__::func_222(&Local_397, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
			__LIB_0__::func_222(&Local_397, iLocal_599, Local_565[0 /*20*/], sLocal_459, 0, 1);
			bLocal_503 = true;
			__LIB_40__::func_662(Local_397, "TOWAUD", sLocal_456, 0);
			SYSTEM::SETTIMERA(0);
			if (bLocal_508)
			{
				__LIB_1__::func_31(&iLocal_638);
				iLocal_684 = 6;
			}
			else
			{
				iLocal_684 = 6;
			}
			break;
		case 5:
			if (!__LIB_0__::func_75())
			{
				__LIB_1__::func_31(&iLocal_638);
				if ((!ENTITY::IS_ENTITY_DEAD(Local_565[0 /*20*/], false) && !ENTITY::IS_ENTITY_DEAD(Local_565[0 /*20*/].f_6, false)) && !ENTITY::IS_ENTITY_DEAD(iLocal_674, false))
				{
					if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(iLocal_674, Local_565[0 /*20*/].f_6))
					{
						TASK::TASK_FOLLOW_TO_OFFSET_OF_ENTITY(Local_565[0 /*20*/], Local_565[0 /*20*/].f_6, 0f, 0f, 0f, 2f, -1, 10f, true);
					}
				}
				iLocal_684 = 6;
			}
			break;
		case 6:
			__LIB_40__::func_691(0);
			if (!bLocal_514)
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_674, false) && !ENTITY::IS_ENTITY_DEAD(Local_565[0 /*20*/].f_6, false))
				{
					if (!VEHICLE::IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(iLocal_674, Local_565[0 /*20*/].f_6))
					{
						iLocal_684 = 7;
					}
					else
					{
						iLocal_684 = 7;
					}
				}
			}
			break;
		case 7:
			__LIB_40__::func_691(0);
			if (ENTITY::DOES_ENTITY_EXIST(Local_565[0 /*20*/]))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(Local_565[0 /*20*/], false) && ((!ENTITY::IS_ENTITY_DEAD(iLocal_674, false) && !ENTITY::IS_ENTITY_DEAD(Local_565[0 /*20*/].f_6, false)) && !VEHICLE::IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(iLocal_674, Local_565[0 /*20*/].f_6)))
				{
					if (bLocal_508)
					{
						sLocal_456 = "TOW_PED_ANTH";
					}
					bLocal_513 = true;
					__LIB_2__::func_859(&Local_397, "TOWAUD", sLocal_456, 9, 0, 0, 0);
					bLocal_503 = false;
					TASK::TASK_VEHICLE_DRIVE_WANDER(Local_565[0 /*20*/], Local_565[0 /*20*/].f_6, 5f, 786597);
					iLocal_684 = 8;
					return 1;
				}
			}
			break;
		case 8:
			iLocal_497 = 0;
			bLocal_503 = false;
			if (HUD::DOES_BLIP_EXIST(Local_565[0 /*20*/].f_9))
			{
				HUD::REMOVE_BLIP(&(Local_565[0 /*20*/].f_9));
			}
			break;
	}
	return 0;
}

int func_803(int iParam0, int iParam1, struct<7> Param2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, int* iParam16, var uParam17, char* sParam18, var uParam19, bool bParam20, int iParam21)//Position - 0x3F28F
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	if (iLocal_448 != 12)
	{
		__LIB_40__::func_666(Param2, iParam0, iParam1);
	}
	if (!bLocal_216)
	{
		if (iLocal_448 >= 6 && iLocal_448 <= 11)
		{
			if (bParam20)
			{
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
				{
					if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 400.28537f, -1632.597f, 28.29278f, 5f, 5f, 2f, true, true, 0))
					{
					}
				}
			}
		}
		switch (iLocal_448)
		{
			case 0:
				if (__LIB_40__::func_687(iParam1, iParam0, &iLocal_450, 10, 90f, 100f, 0))
				{
					VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(iParam1, false);
					__LIB_0__::func_222(&Local_397, 3, *iParam21, "TONYA", 0, 1);
					__LIB_0__::func_222(&Local_397, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
					__LIB_2__::func_859(&Local_397, "TOWAUD", "TOW_TUT_INS1", 9, 0, 0, 0);
					iLocal_448 = 1;
				}
				break;
			case 1:
				if (!__LIB_0__::func_75())
				{
					__LIB_0__::func_151("TOW_TUT_03", -1);
					SYSTEM::SETTIMERA(0);
					iLocal_448 = 2;
				}
				break;
			case 2:
				if (bLocal_217)
				{
					HUD::CLEAR_HELP(true);
					iLocal_448 = 4;
				}
				if (SYSTEM::TIMERA() > 5000)
				{
					if (((SYSTEM::TIMERA() > 12000 || __LIB_0__::func_76(iParam0, iParam1, 1) < 15f) && __LIB_0__::func_76(iParam0, iParam1, 1) < 30f) && !__LIB_0__::func_75())
					{
						__LIB_2__::func_859(&Local_397, "TOWAUD", "TOW_TUT_INS2", 9, 0, 0, 0);
						iLocal_448 = 3;
					}
				}
				break;
			case 3:
				if (!bLocal_217)
				{
					if (!__LIB_0__::func_75() && !__LIB_0__::func_1("TOW_TUT_03"))
					{
						__LIB_40__::func_665("TOW_TUT_02");
						iLocal_448 = 4;
					}
				}
				else
				{
					iLocal_448 = 4;
				}
				break;
			case 4:
				if (SYSTEM::TIMERA() > 5000 || bLocal_217)
				{
					if ((SYSTEM::TIMERA() > 12000 || __LIB_0__::func_76(iParam0, iParam1, 1) < 7.5f) || (bLocal_217 && __LIB_0__::func_76(iParam0, iParam1, 1) < 30f))
					{
						iLocal_192 = 1;
						iLocal_192 = iLocal_192;
						__LIB_40__::func_665("TOW_TUT_01");
						iLocal_448 = 5;
					}
				}
				break;
			case 5:
				if (SYSTEM::TIMERA() > 8000)
				{
					iLocal_448 = 6;
				}
				break;
			case 6:
				if ((!__LIB_0__::func_75() && !HUD::IS_MESSAGE_BEING_DISPLAYED()) && SYSTEM::TIMERA() > 12000)
				{
					if (!iLocal_209)
					{
						__LIB_0__::func_151("TOWT_HELP_CR", -1);
						iLocal_209 = 1;
					}
				}
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, Param2, Param2.f_3, Param2.f_6, false, false, 0))
				{
					__LIB_2__::func_859(&Local_397, "TOWAUD", "TOW_TUT_INS4", 9, 0, 0, 0);
					if (HUD::DOES_BLIP_EXIST(*iParam16))
					{
						HUD::SET_BLIP_ROUTE(*iParam16, false);
						HUD::REMOVE_BLIP(iParam16);
					}
					StringCopy(sParam18, "TOW_TUT_04A", 64);
					*(uParam17[0 /*3*/]) = { Param2.f_14 };
					fLocal_181 = __LIB_14__::func_523(Param2.f_14, 0);
					*iParam16 = HUD::ADD_BLIP_FOR_COORD(Param2.f_14);
					SYSTEM::SETTIMERB(0);
					iLocal_448 = 7;
				}
				break;
			case 7:
				if (!__LIB_0__::func_75())
				{
					if (SYSTEM::TIMERB() > 6000)
					{
						SYSTEM::SETTIMERA(0);
						__LIB_0__::func_229("TOW_TUT_04A", 7500, 1);
						iLocal_448 = 9;
					}
				}
				break;
			case 9:
				if (__LIB_0__::func_86(Param2.f_14))
				{
					iLocal_448 = 10;
				}
				if (!__LIB_0__::func_75())
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, Param2, Param2.f_3, Param2.f_6, false, true, 0))
					{
						iLocal_219 = MISC::GET_GAME_TIMER();
						if (bLocal_193)
						{
							HUD::SET_BLIP_ROUTE(*iParam16, false);
							HUD::REMOVE_BLIP(iParam16);
							*(uParam17[0 /*3*/]) = { Param2.f_14 };
							fLocal_181 = __LIB_14__::func_523(Param2.f_14, 0);
							*iParam16 = HUD::ADD_BLIP_FOR_COORD(Param2.f_14);
						}
						if (HUD::DOES_BLIP_EXIST(*iParam16))
						{
							HUD::SET_BLIP_COLOUR(*iParam16, 5);
						}
						iLocal_448 = 10;
					}
				}
				break;
			case 10:
				if (!__LIB_0__::func_86(Param2.f_14))
				{
					Var0 = { Param2.f_7 };
					Var1 = { Param2.f_10 };
					fVar2 = Param2.f_13;
				}
				else
				{
					Var0 = { Param2 };
					Var1 = { Param2.f_3 };
					fVar2 = Param2.f_6;
				}
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam1, Var0, Var1, fVar2, false, true, 0))
				{
					__LIB_0__::func_151("TOWT_HELP_UH", -1);
					__LIB_40__::func_721();
					if (!ENTITY::IS_ENTITY_DEAD(iParam0, false) && !ENTITY::IS_ENTITY_DEAD(iParam1, false))
					{
						if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(iParam0, iParam1))
						{
							iLocal_448 = 11;
						}
					}
				}
				else
				{
					__LIB_40__::func_720();
				}
				break;
			case 11:
				if (!__LIB_0__::func_86(Param2.f_14))
				{
					Var0 = { Param2.f_7 };
					Var1 = { Param2.f_10 };
					fVar2 = Param2.f_13;
				}
				else
				{
					Var0 = { Param2 };
					Var1 = { Param2.f_3 };
					fVar2 = Param2.f_6;
				}
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam1, Var0, Var1, fVar2, false, true, 0))
				{
					__LIB_0__::func_151("TOWT_HELP_UH", -1);
					__LIB_40__::func_721();
				}
				if (((ENTITY::DOES_ENTITY_EXIST(iParam0) && ENTITY::DOES_ENTITY_EXIST(iParam1)) && !ENTITY::IS_ENTITY_DEAD(iParam0, false)) && !ENTITY::IS_ENTITY_DEAD(iParam1, false))
				{
					if (!VEHICLE::IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(iParam0, iParam1))
					{
						HUD::CLEAR_HELP(true);
						HUD::CLEAR_PRINTS();
						__LIB_0__::func_345(&uLocal_150, 0, 0);
						iLocal_448 = 12;
					}
				}
				break;
			case 12:
				break;
		}
		if (bParam20)
		{
			if (((ENTITY::DOES_ENTITY_EXIST(iParam0) && ENTITY::DOES_ENTITY_EXIST(iParam1)) && !ENTITY::IS_ENTITY_DEAD(iParam0, false)) && !ENTITY::IS_ENTITY_DEAD(iParam1, false))
			{
				if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(iParam0, iParam1) && !bLocal_449)
				{
					if (__LIB_0__::func_75())
					{
						if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
						{
							HUD::CLEAR_HELP(true);
						}
						__LIB_0__::func_325();
						iLocal_448 = 6;
					}
					else
					{
						__LIB_38__::func_603(*iParam16);
						SYSTEM::SETTIMERA(0);
						iLocal_448 = 6;
						__LIB_2__::func_859(&Local_397, "TOWAUD", "TOW_TUT_INS3", 9, 0, 0, 0);
						bLocal_449 = true;
					}
				}
			}
			if (!iLocal_211)
			{
				if (bLocal_449)
				{
					if (!__LIB_0__::func_75())
					{
						HUD::CLEAR_HELP(true);
						__LIB_0__::func_229("TOWT_OBJ_06", 7500, 1);
						iLocal_211 = 1;
					}
				}
			}
		}
	}
	return 0;
}

float func_804(bool bParam0)//Position - 0xF28
{
	if (bParam0)
	{
		return -1f;
	}
	else
	{
		return 1f;
	}
	return 1f;
}

int func_805()//Position - 0x1179A
{
	if (CLOCK::GET_CLOCK_HOURS() >= 20 || CLOCK::GET_CLOCK_HOURS() < 6)
	{
		return 1;
	}
	return 0;
}

int func_806(int iParam0)//Position - 0x14F1B
{
	CAM::DO_SCREEN_FADE_IN(iParam0);
	while (!CAM::IS_SCREEN_FADED_IN())
	{
		SYSTEM::WAIT(0);
	}
	return 1;
}

void func_807(var uParam0, float fParam1, int iParam2, bool bParam3, bool bParam4, float fParam5)//Position - 0x702F
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	if (((CAM::IS_SCREEN_FADING_OUT() || CAM::IS_SCREEN_FADING_IN()) || CAM::IS_SCREEN_FADED_OUT()) || MISC::IS_FRONTEND_FADING())
	{
		if (!bParam3)
		{
			return;
		}
	}
	if (!__LIB_1__::func_206(uParam0))
	{
		return;
	}
	HUD::HIDE_LOADING_ON_FADE_THIS_FRAME();
	GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(iParam2);
	if (!__LIB_0__::func_703(uParam0->f_1, 256))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_CLEAR_SPACE");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fParam1);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_MAX_WIDTH");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fParam5);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_DATA_SLOT_EMPTY");
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		if (MISC::IS_PC_VERSION())
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "TOGGLE_MOUSE_BUTTONS");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(uParam0->f_111);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
		fVar0 = 0f;
		iVar1 = 0;
		while (iVar1 < 8)
		{
			iVar2 = iVar1 * 4;
			if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_11[iVar2]))
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_DATA_SLOT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fVar0);
				if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_77[iVar2]))
				{
					__LIB_0__::func_610(uParam0->f_77[iVar2]);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_11[iVar2]))
				{
					__LIB_0__::func_700(uParam0->f_11[iVar2]);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_77[iVar2 + 1]))
				{
					__LIB_0__::func_610(uParam0->f_77[iVar2 + 1]);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_11[iVar2 + 1]))
				{
					__LIB_0__::func_700(uParam0->f_11[iVar2 + 1]);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_77[iVar2 + 2]))
				{
					__LIB_0__::func_610(uParam0->f_77[iVar2 + 2]);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_11[iVar2 + 2]))
				{
					__LIB_0__::func_700(uParam0->f_11[iVar2 + 2]);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_77[iVar2 + 3]))
				{
					__LIB_0__::func_610(uParam0->f_77[iVar2 + 3]);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_11[iVar2 + 3]))
				{
					__LIB_0__::func_700(uParam0->f_11[iVar2 + 3]);
				}
				if (!__LIB_2__::func_525(uParam0->f_2[iVar1]))
				{
					__LIB_0__::func_610(uParam0->f_2[iVar1]);
				}
				__LIB_36__::func_877(uParam0->f_111, uParam0->f_44[iVar2]);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				fVar0 = (fVar0 + 1f);
			}
			iVar1++;
		}
		fVar3 = __LIB_0__::func_373(bParam4, __LIB_0__::func_373(__LIB_0__::func_703(uParam0->f_1, 32), 1f, 0f), -1f);
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "DRAW_INSTRUCTIONAL_BUTTONS");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fVar3);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_BACKGROUND_COLOUR");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(0f);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(0f);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(0f);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(80f);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		__LIB_0__::func_989(&(uParam0->f_1), 256);
		__LIB_0__::func_988(&(uParam0->f_1), 128);
	}
	GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(*uParam0, 255, 255, 255, 0, 0);
}

void func_808(bool bParam0, bool bParam1, int iParam2)//Position - 0x4526
{
	if (bParam0)
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0);
	}
	CUTSCENE::SET_PAD_CAN_SHAKE_DURING_CUTSCENE(true);
	__LIB_37__::func_615(0, 1, iParam2, 0, 0, 0, 0);
	if (bParam1)
	{
		HUD::DISPLAY_RADAR(true);
		HUD::DISPLAY_HUD(true);
	}
	__LIB_12__::func_849(23, 0);
}

void func_809(int iParam0, int iParam1)//Position - 0x22A9
{
	int iVar0;
	__LIB_14__::func_593(Global_113386.f_24904[iParam0 /*4*/], __LIB_37__::func_730(iParam0), iParam1, 0, 0);
	switch (iParam0)
	{
		case 3:
			Global_113386.f_24904.f_69 = (Global_113386.f_24904.f_69 + iParam1);
			break;
		case 2:
			Global_113386.f_24904.f_70 = (Global_113386.f_24904.f_70 + iParam1);
			break;
		case 0:
			Global_113386.f_24904.f_71 = (Global_113386.f_24904.f_71 + iParam1);
			break;
	}
	STATS::STAT_GET_INT(__LIB_37__::func_731(iParam0, 1), &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	STATS::STAT_SET_INT(__LIB_37__::func_731(iParam0, 1), iVar0, true);
}

int func_810()//Position - 0x18C86
{
	int iVar0;
	iVar0 = (MISC::GET_RANDOM_INT_IN_RANGE(0, 65535) % 3);
	switch (iVar0)
	{
		case 0:
			return joaat("bison");
			break;
		case 1:
			return joaat("dloader");
			break;
		case 2:
			return joaat("rebel");
			break;
		default:
			return joaat("bison");
			break;
	}
	return joaat("bison");
}

void func_811()//Position - 0x1A7
{
	VEHICLE::SET_RANDOM_TRAINS(true);
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_812()//Position - 0x98E03
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 22)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_161[iVar0]))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_161[iVar0], false))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_161[iVar0]))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_161[iVar0]);
				}
				iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_161[iVar0], -1, false);
				if (ENTITY::DOES_ENTITY_EXIST(iVar1) && iVar1 != PLAYER::PLAYER_PED_ID())
				{
					if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar1))
					{
						PED::DELETE_PED(&iVar1);
					}
				}
			}
			if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_161[iVar0]))
			{
				VEHICLE::DELETE_VEHICLE(&(iLocal_161[iVar0]));
			}
		}
		iLocal_106[iVar0] = 0;
		if (!bLocal_40 && !bLocal_53)
		{
			if (iLocal_105[iVar0] > 0)
			{
				VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_105[iVar0], &cLocal_142);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 22)
	{
		if (!iLocal_154[iVar0] == 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_154[iVar0]);
		}
		iVar0++;
	}
}

int func_813(int iParam0)//Position - 0x99F1F
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (bLocal_54)
	{
		iVar1 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if (!ENTITY::IS_ENTITY_DEAD(iVar1, false))
		{
			iVar2 = ENTITY::GET_ENTITY_MODEL(iVar1);
			if (iVar2 == joaat("phantom"))
			{
				if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TRAILER(iVar1))
				{
					if (VEHICLE::GET_VEHICLE_TRAILER_VEHICLE(iVar1, &iVar0))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
						{
							if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iVar0, iParam0))
							{
								return 1;
							}
						}
					}
				}
			}
		}
	}
	return 0;
}

int func_814(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x9CF87
{
	int iVar0[16];
	int iVar1;
	iVar1 = 0;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		PED::GET_PED_NEARBY_PEDS(iParam0, &iVar0, -1);
		iVar1 = 0;
		while (iVar1 <= (iVar0 - 1))
		{
			if (ENTITY::DOES_ENTITY_EXIST(iVar0[iVar1]))
			{
				if (!PED::IS_PED_INJURED(iVar0[iVar1]))
				{
					if (PED::GET_PED_RELATIONSHIP_GROUP_HASH(iVar0[iVar1]) == iParam1)
					{
						if (iParam2 <= 0)
						{
							if (iParam3 == 1)
							{
								if (ENTITY::IS_ENTITY_ON_SCREEN(iVar0[iVar1]))
								{
									return iVar0[iVar1];
								}
							}
							else
							{
								return iVar0[iVar1];
							}
						}
						else if (iVar1 + iParam2) <= (iVar0 - 1)
						{
							if (ENTITY::DOES_ENTITY_EXIST(iVar0[(iVar1 + iParam2)]))
							{
								if (!PED::IS_PED_INJURED(iVar0[(iVar1 + iParam2)]))
								{
									if (PED::GET_PED_RELATIONSHIP_GROUP_HASH(iVar0[(iVar1 + iParam2)]) == iParam1)
									{
										if (iParam3 == 1)
										{
											if (ENTITY::IS_ENTITY_ON_SCREEN(iVar0[(iVar1 + iParam2)]))
											{
												return iVar0[(iVar1 + iParam2)];
											}
											return iVar0[(iVar1 + iParam2)];
										}
									}
								}
							}
						}
					}
				}
			}
			iVar1++;
		}
	}
	return 0;
}

void func_815()//Position - 0x99C55
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 22)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_161[iVar0]))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_161[iVar0], false))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_161[iVar0]))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_161[iVar0]);
				}
			}
			__LIB_17__::func_481(iLocal_161[iVar0]);
			__LIB_15__::func_906(iLocal_161[iVar0]);
		}
		iLocal_106[iVar0] = 0;
		iLocal_107[iVar0] = 0;
		if (!bLocal_40 && !bLocal_53)
		{
			if (iLocal_105[iVar0] > 0)
			{
				VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_105[iVar0], &cLocal_142);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 22)
	{
		if (!iLocal_154[iVar0] == 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_154[iVar0]);
		}
		iVar0++;
	}
	iLocal_115 = 0;
}

void func_816(int iParam0, var uParam1, int iParam2, int iParam3)//Position - 0x2731C
{
	bool bVar0;
	int iVar1;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		bVar0 = __LIB_0__::func_650(iParam0);
		iVar1 = 0;
		while (iVar1 < 12)
		{
			__LIB_35__::func_570(iParam0, iVar1, &(uParam1->f_13[iVar1]), uParam1[iVar1], &(uParam1->f_26[iVar1]), iParam2, 145);
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 9)
		{
			__LIB_35__::func_569(iParam0, iVar1, &(uParam1->f_39[iVar1]), &(uParam1->f_49[iVar1]), iParam2, 145);
			iVar1++;
		}
		if (__LIB_0__::func_374(bVar0))
		{
			uParam1->f_59 = Global_113386.f_2363.f_539[bVar0 /*65*/].f_59;
			uParam1->f_60 = Global_113386.f_2363.f_539[bVar0 /*65*/].f_60;
			uParam1->f_61 = Global_113386.f_2363.f_539[bVar0 /*65*/].f_61;
			uParam1->f_62 = Global_113386.f_2363.f_539[bVar0 /*65*/].f_62;
			uParam1->f_63 = Global_113386.f_2363.f_539[bVar0 /*65*/].f_63;
			uParam1->f_64 = Global_113386.f_2363.f_539[bVar0 /*65*/].f_64;
		}
		else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && ENTITY::GET_ENTITY_MODEL(iParam0) == ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			if (__LIB_0__::func_351(161, iParam3))
			{
				uParam1->f_59 = __LIB_0__::func_369(2053, iParam3, 0);
			}
			else
			{
				uParam1->f_59 = __LIB_0__::func_369(753, iParam3, 0);
			}
			uParam1->f_60 = __LIB_0__::func_369(754, iParam3, 0);
			uParam1->f_61 = __LIB_0__::func_369(755, iParam3, 0);
		}
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && iParam0 == PLAYER::PLAYER_PED_ID())
		{
			if (__LIB_0__::func_351(161, iParam3))
			{
				uParam1->f_59 = __LIB_0__::func_369(2053, iParam3, 0);
			}
			else
			{
				uParam1->f_59 = __LIB_0__::func_369(753, iParam3, 0);
			}
		}
	}
}

void func_817(int iParam0, bool bParam1)//Position - 0xAA95A
{
	__LIB_17__::func_648(iParam0);
	__LIB_33__::func_594(iParam0, bParam1);
	__LIB_13__::func_761(iParam0);
	__LIB_13__::func_760(iParam0);
	__LIB_13__::func_759(iParam0);
	__LIB_13__::func_758(iParam0);
	__LIB_13__::func_757(iParam0);
}

void func_818(int iParam0, int iParam1, bool bParam2)//Position - 0x77F50
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_ON_SCREEN(iParam0))
		{
			if (bParam2)
			{
				VEHICLE::DELETE_VEHICLE(&iParam0);
			}
			else
			{
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iParam0);
			}
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iParam1);
		}
	}
}

void func_819(int* iParam0, int iParam1, int iParam2)//Position - 0x78710
{
	if (iParam1 == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
		{
			if (iParam2 == 1)
			{
				if (!VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam0, false) || ENTITY::IS_ENTITY_DEAD(*iParam0, false))
				{
					VEHICLE::REMOVE_VEHICLE_STUCK_CHECK(*iParam0);
					VEHICLE::REMOVE_VEHICLE_UPSIDEDOWN_CHECK(*iParam0);
					AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(*iParam0, 0f);
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(iParam0);
				}
				if (HUD::DOES_BLIP_EXIST(iParam0->f_1))
				{
					HUD::REMOVE_BLIP(&(iParam0->f_1));
				}
			}
			else if (iParam2 == 0)
			{
				if (!ENTITY::IS_ENTITY_DEAD(*iParam0, false))
				{
					VEHICLE::REMOVE_VEHICLE_STUCK_CHECK(*iParam0);
					VEHICLE::REMOVE_VEHICLE_UPSIDEDOWN_CHECK(*iParam0);
					AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(*iParam0, 0f);
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(iParam0);
				}
				if (HUD::DOES_BLIP_EXIST(iParam0->f_1))
				{
					HUD::REMOVE_BLIP(&(iParam0->f_1));
				}
			}
		}
	}
	else if (iParam1 == 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
		{
			if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(*iParam0))
			{
				if (ENTITY::IS_ENTITY_DEAD(*iParam0, false) || !ENTITY::IS_ENTITY_DEAD(*iParam0, false))
				{
					VEHICLE::REMOVE_VEHICLE_STUCK_CHECK(*iParam0);
					VEHICLE::REMOVE_VEHICLE_UPSIDEDOWN_CHECK(*iParam0);
					AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(*iParam0, 0f);
					VEHICLE::DELETE_VEHICLE(iParam0);
				}
			}
		}
		if (HUD::DOES_BLIP_EXIST(iParam0->f_1))
		{
			HUD::REMOVE_BLIP(&(iParam0->f_1));
		}
		iParam0->f_7 = 0;
		iParam0->f_16 = 0;
		iParam0->f_17 = 0;
		iParam0->f_18 = 0;
	}
}

int func_820(bool bParam0)//Position - 0x7B557
{
	if (!__LIB_0__::func_75())
	{
		if (bParam0)
		{
			return 1;
		}
		else if (!HUD::IS_MESSAGE_BEING_DISPLAYED() && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
		{
			return 1;
		}
	}
	return 0;
}

void func_821(int* iParam0, bool bParam1, bool bParam2)//Position - 0x4458
{
	int iVar0;
	if (BitTest(iParam0->f_13, 30))
	{
		bParam1 = true;
	}
	__LIB_16__::func_898(iParam0);
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (HUD::DOES_BLIP_EXIST(iParam0->f_1[iVar0]))
		{
			HUD::REMOVE_BLIP(&(iParam0->f_1[iVar0]));
		}
		__LIB_0__::func_560(iVar0, iParam0);
		__LIB_15__::func_987(iVar0, iParam0);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 31)
	{
		if (iVar0 != 8)
		{
			MISC::CLEAR_BIT(&(iParam0->f_13), iVar0);
			MISC::CLEAR_BIT(&(iParam0->f_14), iVar0);
		}
		iVar0++;
	}
	if (HUD::DOES_BLIP_EXIST(*iParam0))
	{
		HUD::REMOVE_BLIP(iParam0);
	}
	iParam0->f_6 = 0;
	iParam0->f_12 = 0;
	iParam0->f_15 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!PED::IS_PED_INJURED(iParam0->f_17[iVar0]))
		{
			PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(iParam0->f_17[iVar0], true);
			PED::SET_PED_CAN_PLAY_AMBIENT_BASE_ANIMS(iParam0->f_17[iVar0], true);
			if (bParam2)
			{
				PED::SET_PED_CONFIG_FLAG(iParam0->f_17[iVar0], 32, true);
				PED::SET_PED_CONFIG_FLAG(iParam0->f_17[iVar0], 305, false);
			}
			PED::SET_PED_CONFIG_FLAG(iParam0->f_17[iVar0], 268, false);
			if (bParam1)
			{
				if (PED::IS_PED_GROUP_MEMBER(iParam0->f_17[iVar0], __LIB_0__::func_495()) && iParam0->f_17[iVar0] != PLAYER::PLAYER_PED_ID())
				{
					PED::REMOVE_PED_FROM_GROUP(iParam0->f_17[iVar0]);
				}
			}
			if (!BitTest(iParam0->f_13, 29))
			{
				PED::SET_PED_USING_ACTION_MODE(iParam0->f_17[iVar0], false, -1, 0);
			}
			iParam0->f_17[iVar0] = 0;
		}
		iVar0++;
	}
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(PLAYER::PLAYER_PED_ID(), true);
		PED::SET_PED_CAN_PLAY_AMBIENT_BASE_ANIMS(PLAYER::PLAYER_PED_ID(), true);
	}
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (bParam2)
		{
			PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 32, true);
		}
	}
	iParam0->f_21 = 0;
}

void func_822(bool bParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x917BA
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (__LIB_0__::func_374(bParam0))
	{
		iVar0 = __LIB_38__::func_349(bParam0, iParam1, iParam2);
		iVar1 = __LIB_6__::func_350(iParam2, iParam1);
		iVar2 = __LIB_0__::func_160(iVar1);
		if (bParam3)
		{
			MISC::SET_BIT(&iVar0, iVar2);
		}
		else
		{
			MISC::CLEAR_BIT(&iVar0, iVar2);
		}
		__LIB_38__::func_364(bParam0, iParam1, iParam2, iVar0);
	}
}

bool func_823(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x8F2EE
{
	struct<2> Var0;
	__LIB_17__::func_91(iParam0, &Var0);
	__LIB_13__::func_812(iParam0, &Var0, &(Var0.f_1));
	return __LIB_17__::func_631(uParam1, &Var0, bParam2, bParam3, bParam4, bParam5, bParam6);
}

float func_824(float fParam0, float fParam1, float fParam2)//Position - 0xB0A8
{
	if (fParam0 < fParam1)
	{
		return fParam1;
	}
	if (fParam0 > fParam2)
	{
		return fParam2;
	}
	return fParam0;
}

int func_825()//Position - 0xB720
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	iVar1 = -1;
	TASK::TASK_PLAY_ANIM(0, "misschinese2_bank1", "reaction_forward_big_intro_a", 4f, -2f, 1400, 0, 0f, false, false, false);
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
		iVar3 = MISC::GET_RANDOM_INT_IN_RANGE(1100, 1800);
		iVar4 = (iVar4 + iVar3);
		if (iVar2 == iVar1)
		{
			iVar2++;
			if (iVar2 > 2)
			{
				iVar2 = 0;
			}
		}
		iVar1 = iVar2;
		switch (iVar2)
		{
			case 0:
				iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
				switch (iVar2)
				{
					case 0:
						TASK::TASK_PLAY_ANIM(0, "reaction@male_stand@big_intro@left", "reaction_left_big_intro_a", 4f, -2f, iVar3, 0, 0f, false, false, false);
						break;
					case 1:
						TASK::TASK_PLAY_ANIM(0, "reaction@male_stand@big_intro@left", "reaction_left_big_intro_b", 4f, -2f, iVar3, 0, 0f, false, false, false);
						break;
					case 2:
						TASK::TASK_PLAY_ANIM(0, "reaction@male_stand@big_intro@left", "reaction_left_big_intro_c", 4f, -2f, iVar3, 0, 0f, false, false, false);
						break;
				}
				break;
			case 1:
				iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
				switch (iVar2)
				{
					case 0:
						TASK::TASK_PLAY_ANIM(0, "reaction@male_stand@big_intro@right", "reaction_right_big_intro_a", 4f, -2f, iVar3, 0, 0f, false, false, false);
						break;
					case 1:
						TASK::TASK_PLAY_ANIM(0, "reaction@male_stand@big_intro@right", "reaction_right_big_intro_b", 4f, -2f, iVar3, 0, 0f, false, false, false);
						break;
					case 2:
						TASK::TASK_PLAY_ANIM(0, "reaction@male_stand@big_intro@right", "reaction_right_big_intro_c", 4f, -2f, iVar3, 0, 0f, false, false, false);
						break;
				}
				break;
			case 2:
				iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
				switch (iVar2)
				{
					case 0:
						TASK::TASK_PLAY_ANIM(0, "reaction@male_stand@big_intro@backward", "reaction_backward_big_intro_a", 4f, -2f, iVar3, 0, 0f, false, false, false);
						break;
					case 1:
						TASK::TASK_PLAY_ANIM(0, "reaction@male_stand@big_intro@backward", "reaction_backward_big_intro_b", 4f, -2f, iVar3, 0, 0f, false, false, false);
						break;
					case 2:
						TASK::TASK_PLAY_ANIM(0, "reaction@male_stand@big_intro@backward", "reaction_backward_big_intro_c", 4f, -2f, iVar3, 0, 0f, false, false, false);
						break;
				}
				break;
		}
		iVar0++;
	}
	return iVar4;
}

int func_826(int iParam0)//Position - 0xC203
{
	if (ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, "misschinese2_bank1", "alert_gunshot", 3))
	{
		return 1;
	}
	if (ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, "misschinese2_bank1", "buddy_shot_b", 3))
	{
		return 1;
	}
	if (ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, "misschinese2_bank1", "reaction_forward_big_intro_a", 3))
	{
		return 1;
	}
	if (ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, "misschinese2_bank1", "alert_body", 3))
	{
		return 1;
	}
	if (ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, "misschinese2_bank1", "react_forward_small_intro_a", 3))
	{
		return 1;
	}
	if (ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, "misschinese2_bank1", "react_backward_small_intro_a", 3))
	{
		return 1;
	}
	if (ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, "misschinese2_bank1", "react_left_small_intro_a", 3))
	{
		return 1;
	}
	if (ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, "misschinese2_bank1", "react_right_small_intro_a", 3))
	{
		return 1;
	}
	return 0;
}

int func_827(int iParam0)//Position - 0x3A2ED
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
		{
			return 1;
		}
	}
	return 0;
}

int func_828(int iParam0)//Position - 0x48EAB
{
	if (VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("taxi")))
	{
		return 1;
	}
	return 0;
}

var func_829()//Position - 0x4BB76
{
	return Global_106934.f_2884.f_3;
}

void func_830()//Position - 0x580F4
{
	EVENT::UNBLOCK_DECISION_MAKER_EVENT(joaat("DEFAULT"), 31 /*EVENT_INJURED_CRY_FOR_HELP*/);
}

void func_831(var uParam0, char* sParam1, int iParam2, char* sParam3)//Position - 0x583FC
{
	*uParam0 = sParam3;
	uParam0->f_1 = sParam1;
	uParam0->f_2 = iParam2;
}

int func_832(struct<3> Param0, struct<3> Param1, struct<3> Param2, struct<3> Param3)//Position - 0x44B4A
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	Var0 = { Param3 - Param1 };
	Var1 = { Param2 - Param1 };
	Var2 = { Param0 - Param1 };
	fVar3 = __LIB_0__::func_158(Var0, Var0);
	fVar4 = __LIB_0__::func_158(Var0, Var1);
	fVar5 = __LIB_0__::func_158(Var0, Var2);
	fVar6 = __LIB_0__::func_158(Var1, Var1);
	fVar7 = __LIB_0__::func_158(Var1, Var2);
	fVar8 = (1f / ((fVar3 * fVar6) - (fVar4 * fVar4)));
	fVar9 = (((fVar6 * fVar5) - (fVar4 * fVar7)) * fVar8);
	fVar10 = (((fVar3 * fVar7) - (fVar4 * fVar5)) * fVar8);
	if ((fVar9 >= 0f && fVar10 >= 0f) && (fVar9 + fVar10) < 1f)
	{
		return 1;
	}
	return 0;
}

int func_833(int iParam0, var uParam1, bool bParam2)//Position - 0xB59D
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	fVar1 = 1000f;
	iVar3 = -1;
	if (!PED::IS_PED_DEAD_OR_DYING((*uParam1)[iParam0 /*24*/], true))
	{
		iVar0 = 0;
		while (iVar0 < *uParam1)
		{
			if (PED::IS_PED_DEAD_OR_DYING((*uParam1)[iVar0 /*24*/], true) && ENTITY::DOES_ENTITY_EXIST((*uParam1)[iVar0 /*24*/]))
			{
				fVar2 = __LIB_0__::func_76((*uParam1)[iVar0 /*24*/], (*uParam1)[iParam0 /*24*/], 1);
				if (fVar2 < fVar1)
				{
					fVar1 = fVar2;
					iVar3 = iVar0;
				}
			}
			iVar0++;
		}
		if (iVar3 == -1)
		{
			return 0;
		}
		else
		{
			(uParam1[iParam0 /*24*/])->f_18 = __LIB_16__::func_322((*uParam1)[iParam0 /*24*/], (*uParam1)[iVar3 /*24*/]);
			if (MISC::ABSF((uParam1[iParam0 /*24*/])->f_18) > 20f)
			{
				if (bParam2)
				{
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, (*uParam1)[iVar3 /*24*/], 0);
				}
				else
				{
					TASK::TASK_TURN_PED_TO_FACE_ENTITY((*uParam1)[iParam0 /*24*/], (*uParam1)[iVar3 /*24*/], 0);
				}
				(uParam1[iParam0 /*24*/])->f_18 = __LIB_16__::func_864((*uParam1)[iParam0 /*24*/], (*uParam1)[iVar3 /*24*/], 1);
				return 1;
			}
		}
	}
	return 0;
}

int func_834(var uParam0, bool bParam1, bool bParam2, int iParam3)//Position - 0x462C
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	char cVar6[64];
	int iVar7;
	var uVar8;
	char* sVar9;
	if (!uParam0->f_39)
	{
		if (uParam0->f_7 == 4)
		{
			return 1;
		}
	}
	if (*uParam0)[uParam0->f_7] != PLAYER::PLAYER_PED_ID()
	{
	}
	if ((!PED::IS_PED_INJURED((*uParam0)[uParam0->f_7]) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())) && (*uParam0)[uParam0->f_7] != PLAYER::PLAYER_PED_ID())
	{
		if (!bParam2)
		{
			if ((PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) && !FIRE::IS_ENTITY_ON_FIRE(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()))
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
			}
			else
			{
				TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
			}
			if ((PED::IS_PED_RAGDOLL((*uParam0)[uParam0->f_7]) && !FIRE::IS_ENTITY_ON_FIRE((*uParam0)[uParam0->f_7])) && !PED::IS_PED_GETTING_INTO_A_VEHICLE((*uParam0)[uParam0->f_7]))
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY((*uParam0)[uParam0->f_7]);
			}
			else
			{
				TASK::CLEAR_PED_TASKS((*uParam0)[uParam0->f_7]);
			}
		}
		iVar0 = PLAYER::PLAYER_PED_ID();
		iVar1 = __LIB_14__::func_466();
		if (!uParam0->f_23)
		{
			__LIB_16__::func_935(iVar0, 0);
		}
		__LIB_13__::func_813(iVar1, &iVar0);
		PED::SET_PED_CONFIG_FLAG(iVar0, 32, true);
		PED::SET_PED_CONFIG_FLAG(iVar0, 250, true);
		iVar2 = __LIB_0__::func_484(uParam0->f_7);
		__LIB_16__::func_935((*uParam0)[uParam0->f_7], 0);
		fVar3 = (((SYSTEM::TO_FLOAT(ENTITY::GET_ENTITY_HEALTH((*uParam0)[uParam0->f_7])) - 100f) / (SYSTEM::TO_FLOAT(PED::GET_PED_MAX_HEALTH((*uParam0)[uParam0->f_7])) - 100f)) * 100f);
		switch (__LIB_13__::func_716(PLAYER::PLAYER_PED_ID()))
		{
			case 0:
				if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("BulletTime"))
				{
					GRAPHICS::ANIMPOSTFX_STOP("BulletTime");
				}
				if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("BulletTimeOut"))
				{
					GRAPHICS::ANIMPOSTFX_STOP("BulletTimeOut");
				}
				break;
			case 1:
				if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("DrivingFocus"))
				{
					GRAPHICS::ANIMPOSTFX_STOP("DrivingFocus");
				}
				if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("DrivingFocusOut"))
				{
					GRAPHICS::ANIMPOSTFX_STOP("DrivingFocusOut");
				}
				break;
			case 2:
				if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("REDMIST"))
				{
					GRAPHICS::ANIMPOSTFX_STOP("REDMIST");
				}
				if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("REDMISTOut"))
				{
					GRAPHICS::ANIMPOSTFX_STOP("REDMISTOut");
				}
				break;
		}
		if (__LIB_0__::func_374(__LIB_14__::func_466()))
		{
			if (PLAYER::IS_SPECIAL_ABILITY_ACTIVE(PLAYER::PLAYER_ID(), 0))
			{
				PLAYER::SPECIAL_ABILITY_DEACTIVATE_FAST(PLAYER::PLAYER_ID(), 0);
			}
		}
		PLAYER::CHANGE_PLAYER_PED(PLAYER::PLAYER_ID(), (*uParam0)[uParam0->f_7], bParam2, false);
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(3);
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(13);
		if (iParam3 & 1 != 0)
		{
			PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 210, false);
		}
		if (__LIB_0__::func_540(0) || __LIB_0__::func_540(3))
		{
			if (Global_23011.f_13)
			{
				iVar4 = 0;
				while (iVar4 < 7)
				{
					if (BitTest(Global_91193[iVar4 /*5*/].f_1, 2))
					{
						iVar5 = Global_91193[iVar4 /*5*/];
						StringCopy(&cVar6, "MISS_SWITCH_", 64);
						StringConCat(&cVar6, &(Global_91229[Global_78588.f_109[iVar5 /*4*/] /*34*/]), 64);
						STATS::STAT_INCREMENT(MISC::GET_HASH_KEY(&cVar6), 1f);
					}
					iVar4++;
				}
			}
		}
		Global_23011.f_13 = 0;
		uParam0->f_5 = __LIB_0__::func_682(iVar1);
		if (uParam0->f_5 == 4)
		{
			uParam0->f_5 = 3;
		}
		(*uParam0)[uParam0->f_5] = iVar0;
		(*uParam0)[uParam0->f_7] = 0;
		uParam0->f_6 = __LIB_0__::func_682(iVar2);
		uParam0->f_7 = 4;
		iVar7 = PLAYER::PLAYER_PED_ID();
		ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), true, false);
		__LIB_15__::func_972(iVar7);
		PED::SET_PED_CAN_LOSE_PROPS_ON_DAMAGE(iVar7, false, 0);
		if (fVar3 < 25f && !PED::IS_PED_SWIMMING_UNDER_WATER(PLAYER::PLAYER_PED_ID()))
		{
			ENTITY::SET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID(), SYSTEM::ROUND((((25f / 100f) * (SYSTEM::TO_FLOAT(PED::GET_PED_MAX_HEALTH(PLAYER::PLAYER_PED_ID())) - 100f)) + 100f)), 0);
		}
		if (bParam1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				ENTITY::SET_ENTITY_VISIBLE(iVar0, true, false);
				__LIB_15__::func_972(iVar0);
				PED::SET_PED_CAN_LOSE_PROPS_ON_DAMAGE(iVar0, false, 0);
				PED::SET_PED_STEALTH_MOVEMENT(iVar0, false, 0);
			}
		}
		else if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			sVar9 = ENTITY::GET_ENTITY_SCRIPT(iVar0, &uVar8);
			if (!MISC::IS_STRING_NULL(sVar9))
			{
				if (!MISC::ARE_STRINGS_EQUAL(sVar9, SCRIPT::GET_THIS_SCRIPT_NAME()))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, false, true);
				}
				PED::DELETE_PED(&iVar0);
			}
		}
		Global_97723 = 1;
		__LIB_0__::func_481(PLAYER::PLAYER_PED_ID());
		__LIB_15__::func_977();
		__LIB_13__::func_799(iVar2);
		__LIB_15__::func_981();
		__LIB_13__::func_822(iVar2);
		__LIB_16__::func_896(__LIB_0__::func_517(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 145, 0));
		PLAYER::RESET_PLAYER_STAMINA(PLAYER::PLAYER_ID());
		ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(PLAYER::PLAYER_PED_ID(), false);
		PED::SET_PED_CAN_BE_DRAGGED_OUT(PLAYER::PLAYER_PED_ID(), true);
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			PLAYER::SET_AUTO_GIVE_PARACHUTE_WHEN_ENTER_PLANE(PLAYER::PLAYER_ID(), __LIB_0__::func_425(67));
		}
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			PLAYER::SET_AUTO_GIVE_SCUBA_GEAR_WHEN_EXIT_VEHICLE(PLAYER::PLAYER_ID(), __LIB_0__::func_425(68));
		}
		__LIB_13__::func_818(iVar2, &iVar7);
		if (((__LIB_0__::func_39(0) || __LIB_0__::func_39(3)) || __LIB_0__::func_39(2)) || __LIB_0__::func_39(4))
		{
			PED::SET_PED_CONFIG_FLAG(iVar7, 32, false);
			PED::SET_PED_CONFIG_FLAG(iVar7, 250, false);
		}
		else
		{
			PED::SET_PED_CONFIG_FLAG(iVar7, 32, true);
			PED::SET_PED_CONFIG_FLAG(iVar7, 250, true);
		}
		if (!__LIB_0__::func_477())
		{
			__LIB_16__::func_890();
		}
		Global_97360 = 0;
		return 1;
	}
	else
	{
		if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
		}
		if (PED::IS_PED_INJURED((*uParam0)[uParam0->f_7]))
		{
		}
		if (PLAYER::PLAYER_PED_ID() == (*uParam0)[uParam0->f_7])
		{
		}
	}
	return 0;
}

void func_835(struct<3> Param0, float fParam1, int iParam2, int iParam3)//Position - 0x6FEB5
{
	struct<3> Var0;
	var uVar1;
	if (ENTITY::DOES_ENTITY_EXIST(Global_103950.f_4))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Global_103950.f_4, false))
		{
			if (__LIB_0__::func_343(24) != Global_103950.f_4)
			{
				if (iParam2 == 1)
				{
					if (__LIB_14__::func_665(ENTITY::GET_ENTITY_COORDS(Global_103950.f_4, true), iParam3, &Var0, &uVar1))
					{
						Param0 = { Var0 };
						fParam1 = uVar1;
					}
				}
				__LIB_17__::func_506(Global_103950.f_4, Param0, fParam1, 24, 0);
			}
		}
	}
}

int func_836(int* iParam0)//Position - 0x6513A
{
	return iParam0->f_7;
}

void func_837(var uParam0)//Position - 0x7C387
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_8))
	{
		if (uParam0->f_8 != PLAYER::PLAYER_PED_ID())
		{
			PED::DELETE_PED(&(uParam0->f_8));
		}
	}
}

void func_838(var uParam0, int iParam1, char* sParam2, var uParam3, var uParam4, int iParam5, int iParam6, int iParam7)//Position - 0x88694
{
	uParam0->f_549 = iParam1;
	StringCopy(&(uParam0->f_550), sParam2, 16);
	StringCopy(&(uParam0->f_554), "", 16);
	uParam0->f_558 = uParam3;
	uParam0->f_559 = uParam4;
	uParam0->f_560 = iParam5;
	uParam0->f_561 = iParam6;
	uParam0->f_580 = iParam7;
}

void func_839(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4)//Position - 0x93DE6
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { -1285.2881f, -2039.9432f, 1.60045f };
					*uParam3 = { 4f, 10.2f, 10f };
					*uParam4 = 2.3168f;
					break;
				case 1:
					*uParam2 = { -1268.6672f, -2024.7797f, 1.5678f };
					*uParam3 = { 4f, 10.2f, 10f };
					*uParam4 = 2.4f;
					break;
				case 2:
					*uParam2 = { -1227.0847f, -2053.458f, 12.98837f };
					*uParam3 = { 5f, 14f, 10f };
					*uParam4 = 2.6f;
					break;
				case 3:
					*uParam2 = { -1210.865f, -2052.2888f, 13f };
					*uParam3 = { 1.96f, 3f, 10f };
					*uParam4 = 2.865f;
					break;
				case 4:
					*uParam2 = { -1215.4523f, -2065.881f, 13f };
					*uParam3 = { 1.63f, 2.9f, 10f };
					*uParam4 = 2.685f;
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { 2384.317f, 4268.876f, 30.44363f };
					*uParam3 = { 4f, 10f, 10f };
					*uParam4 = 6.047f;
					break;
				case 1:
					*uParam2 = { 2384.9753f, 4289.719f, 30.32816f };
					*uParam3 = { 4f, 10f, 10f };
					*uParam4 = 3.238f;
					break;
				case 2:
					*uParam2 = { 2436.907f, 4282.8496f, 35.5872f };
					*uParam3 = { 4.5f, 13f, 10f };
					*uParam4 = 3.019f;
					break;
				case 3:
					*uParam2 = { 2411.2502f, 4298.0063f, 34.98311f };
					*uParam3 = { 2.1f, 3.2f, 10f };
					*uParam4 = 1.19f;
					break;
				case 4:
					*uParam2 = { 0f, 0f, 0f };
					*uParam3 = { 1.63f, 2.9f, 0f };
					*uParam4 = 2.685f;
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { 1568.879f, 3829.782f, 30.95098f };
					*uParam3 = { 4f, 9.9f, 10f };
					*uParam4 = 2.107f;
					break;
				case 1:
					*uParam2 = { 1586.192f, 3842.765f, 30.538f };
					*uParam3 = { 4f, 9.9f, 10f };
					*uParam4 = 2.295f;
					break;
				case 2:
					*uParam2 = { 1594.0022f, 3810.7175f, 33.55904f };
					*uParam3 = { 4f, 12f, 10f };
					*uParam4 = 2.251f;
					break;
				case 3:
					*uParam2 = { 1604.679f, 3828.3079f, 33.82485f };
					*uParam3 = { 1.96f, 3f, 10f };
					*uParam4 = 0.876f;
					break;
				case 4:
					*uParam2 = { 1607.1351f, 3824.388f, 33.06039f };
					*uParam3 = { 1.63f, 2.9f, 0f };
					*uParam4 = 0f;
					break;
			}
			break;
	}
}

int func_840(var uParam0, var uParam1, char* sParam2, char* sParam3, var uParam4, int iParam5, int iParam6, bool bParam7, float fParam8, bool bParam9)//Position - 0x7B7AC
{
	switch (*uParam1)
	{
		case 0:
			if (!CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT())
			{
				CAM::DO_SCREEN_FADE_OUT(2500);
				RECORDING::REPLAY_PREVENT_RECORDING_THIS_FRAME();
			}
			if (bParam9)
			{
				SCRIPT::SET_NO_LOADING_SCREEN(true);
			}
			MISC::SET_TIME_SCALE(0.2f);
			if (__LIB_0__::func_703(iParam5, 4))
			{
				if (AUDIO::REQUEST_SCRIPT_AUDIO_BANK("generic_failed", false, -1))
				{
					*uParam1 = 1;
				}
			}
			else
			{
				*uParam1 = 1;
			}
			break;
		case 1:
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SHOW_CENTERED_MP_MESSAGE_LARGE");
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(6);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam2);
			GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			__LIB_0__::func_610(sParam3);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(100);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
			if (__LIB_0__::func_703(iParam5, 32))
			{
				if (!uParam1->f_136)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "TRANSITION_UP");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(uParam1->f_134);
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					uParam1->f_136 = 1;
				}
			}
			if (!__LIB_0__::func_703(iParam5, 1))
			{
				PAD::DISABLE_ALL_CONTROL_ACTIONS(0 /*PLAYER_CONTROL*/);
			}
			__LIB_1__::func_214(&(uParam1->f_10), 0, 1, 1, 1);
			__LIB_0__::func_990(&(uParam1->f_10), "IB_RETRY" /* GXT: Retry */, 2, 201, 1, 1, 0);
			__LIB_0__::func_990(&(uParam1->f_10), "FE_HLP16" /* GXT: Exit */, 2, 202, 1, 1, 0);
			if (__LIB_0__::func_703(iParam5, 4))
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "ScreenFlash", "MissionFailedSounds", true);
			}
			if (__LIB_0__::func_703(iParam5, 8))
			{
				switch (__LIB_0__::func_683())
				{
					case 0:
						GRAPHICS::ANIMPOSTFX_PLAY("MinigameEndMichael", 500, false);
						break;
					case 1:
						GRAPHICS::ANIMPOSTFX_PLAY("MinigameEndFranklin", 500, false);
						break;
					case 2:
						GRAPHICS::ANIMPOSTFX_PLAY("MinigameEndTrevor", 500, false);
						break;
					}
			}
			if (!__LIB_1__::func_13(&(uParam1->f_1)))
			{
				__LIB_1__::func_362(&(uParam1->f_1));
			}
			if (__LIB_0__::func_703(iParam5, 2))
			{
				if (!__LIB_1__::func_13(&(uParam1->f_4)))
				{
					__LIB_1__::func_362(&(uParam1->f_4));
				}
			}
			*uParam1 = 2;
			break;
		case 2:
			HUD::HIDE_LOADING_ON_FADE_THIS_FRAME();
			if (__LIB_0__::func_703(iParam5, 32))
			{
				if (!uParam1->f_136)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "TRANSITION_UP");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(uParam1->f_134);
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					uParam1->f_136 = 1;
				}
			}
			GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(iParam6);
			__LIB_16__::func_751(uParam0, 0, 0);
			if (!__LIB_0__::func_703(iParam5, 16) && (__LIB_2__::func_572(&(uParam1->f_1)) >= uParam1->f_135 || CAM::IS_SCREEN_FADED_OUT()))
			{
				__LIB_2__::func_439(&(uParam1->f_10), 1128792064, iParam6, bParam7, 1, 1065353216);
				HUD::SET_MOUSE_CURSOR_THIS_FRAME();
				if (PAD::IS_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/))
				{
					uParam1->f_138 = 1;
					AUDIO::PLAY_SOUND_FRONTEND(-1, "YES", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
					if (!__LIB_0__::func_703(iParam5, 1))
					{
						PAD::ENABLE_ALL_CONTROL_ACTIONS(0 /*PLAYER_CONTROL*/);
					}
					__LIB_2__::func_540(&(uParam1->f_10));
					*uParam1 = 3;
					return 0;
				}
				else if (PAD::IS_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/))
				{
					uParam1->f_138 = 0;
					AUDIO::PLAY_SOUND_FRONTEND(-1, "NO", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
					if (!__LIB_0__::func_703(iParam5, 1))
					{
						PAD::ENABLE_ALL_CONTROL_ACTIONS(0 /*PLAYER_CONTROL*/);
					}
					__LIB_2__::func_540(&(uParam1->f_10));
					*uParam1 = 3;
					return 0;
				}
			}
			if (__LIB_0__::func_703(iParam5, 2))
			{
				if (__LIB_2__::func_572(&(uParam1->f_4)) >= fParam8)
				{
					uParam1->f_138 = 0;
					AUDIO::PLAY_SOUND_FRONTEND(-1, "NO", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
					if (!__LIB_0__::func_703(iParam5, 1))
					{
						PAD::ENABLE_ALL_CONTROL_ACTIONS(0 /*PLAYER_CONTROL*/);
					}
					__LIB_2__::func_540(&(uParam1->f_10));
					*uParam1 = 3;
					return 0;
				}
			}
			break;
		case 3:
			__LIB_16__::func_751(uParam0, 0, 0);
			MISC::SET_TIME_SCALE(1f);
			if (uParam1->f_138 || !((MISC::ARE_STRINGS_EQUAL("stunt_plane_races", SCRIPT::GET_THIS_SCRIPT_NAME()) || MISC::ARE_STRINGS_EQUAL("pilot_school", SCRIPT::GET_THIS_SCRIPT_NAME())) || (MISC::ARE_STRINGS_EQUAL("bj", SCRIPT::GET_THIS_SCRIPT_NAME()) && PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))))
			{
				CAM::DO_SCREEN_FADE_IN(2500);
			}
			if (__LIB_0__::func_703(iParam5, 64) && uParam1->f_138)
			{
				CAM::DO_SCREEN_FADE_OUT(500);
			}
			__LIB_1__::func_31(&(uParam1->f_4));
			if (bParam9)
			{
				SCRIPT::SET_NO_LOADING_SCREEN(false);
			}
			*uParam1 = 4;
			break;
		case 4:
			if (__LIB_2__::func_572(&(uParam1->f_4)) <= 0.1f)
			{
				__LIB_16__::func_751(uParam0, 0, 0);
			}
			else
			{
				*uParam4 = uParam1->f_138;
				return 1;
			}
			break;
	}
	return 0;
}

int func_841(int iParam0, bool bParam1)//Position - 0xBBA
{
	if (bParam1)
	{
		return Global_262145.f_31029 /* Tunable: TUNER_ROBBERY_GOON_CASH_REWARD */;
	}
	if (iParam0 <= -1 || iParam0 >= 8)
	{
		return 0;
	}
	return Global_262145.f_31030[iParam0];
}

void func_842(var uParam0)//Position - 0x13CC
{
	uParam0->f_726.f_5 = 1;
}

void func_843(var uParam0, int iParam1)//Position - 0x13DC
{
	if (uParam0->f_820 != iParam1)
	{
	}
	uParam0->f_820 = iParam1;
}

int func_844(var uParam0)//Position - 0x1D50
{
	switch (uParam0->f_1082)
	{
		case 0:
		case 1:
			return 1;
		default:
	}
	return 0;
}

int func_845()//Position - 0x2015
{
	if (__LIB_0__::func_1("H4PREP_UNVLB" /* GXT: Freemode Prep mission currently unavailable. Please wait or look for rival crews transporting the Heist Prep Equipment ~HUD_COLOUR_GREEN~~BLIP_ISLAND_HEIST_PREP~~s~ to steal from instead. */))
	{
		return 1;
	}
	return 0;
}

void func_846()//Position - 0x6B76
{
	MISC::SET_BIT(&(Global_1888862[PLAYER::PLAYER_ID() /*120*/].f_29), 28);
}

void func_847()//Position - 0x6B90
{
	MISC::SET_BIT(&(Global_2714762.f_3), 13);
}

void func_848()//Position - 0x6BA4
{
	MISC::SET_BIT(&(Global_1888862[PLAYER::PLAYER_ID() /*120*/].f_29), 27);
}

void func_849()//Position - 0x6BBE
{
	MISC::SET_BIT(&(Global_2714762.f_3), 11);
}

void func_850(var uParam0)//Position - 0x9563
{
	MISC::CLEAR_BIT(&(uParam0->f_726.f_4), uParam0->f_726.f_1);
}

void func_851(var uParam0)//Position - 0x96B4
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_712))
	{
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&(uParam0->f_712));
	}
}

void func_852(var uParam0, int iParam1)//Position - 0x96D1
{
	if (uParam0->f_704 != iParam1)
	{
	}
	uParam0->f_704 = iParam1;
}

bool func_853(var uParam0)//Position - 0x974C
{
	return !BitTest(uParam0->f_726.f_4, uParam0->f_726.f_1);
}

void func_854(var uParam0)//Position - 0x9848
{
	int iVar0;
	uParam0->f_726.f_1 = uParam0->f_726;
	MISC::SET_BIT(&(uParam0->f_726.f_4), uParam0->f_726.f_1);
	MISC::CLEAR_BIT(&(uParam0->f_726.f_3), uParam0->f_726.f_1);
	iVar0 = uParam0->f_726;
	iVar0 = (iVar0 - 1);
	uParam0->f_726 = iVar0;
	if (uParam0->f_726 == 0)
	{
		uParam0->f_726 = 1;
	}
}

void func_855()//Position - 0x98F0
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(iVar0)))
		{
			iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
			if (iVar1 != __LIB_0__::func_162() && iVar1 != PLAYER::PLAYER_ID())
			{
				NETWORK::SET_PLAYER_INVISIBLE_LOCALLY(iVar1, false);
			}
		}
		iVar0++;
	}
}

void func_856(var uParam0)//Position - 0xA6AC
{
	uParam0->f_726.f_5 = 0;
}

var func_857(var uParam0)//Position - 0xA6BC
{
	return uParam0->f_820;
}

int func_858(var uParam0, int iParam1, bool bParam2)//Position - 0xA835
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = 0;
	switch (iParam1)
	{
		case 0:
			iVar1 = SYSTEM::FLOOR((PAD::GET_CONTROL_NORMAL(2 /*FRONTEND_CONTROL*/, 218 /*INPUT_SCRIPT_LEFT_AXIS_X*/) * 127f));
			iVar2 = SYSTEM::FLOOR((PAD::GET_CONTROL_NORMAL(2 /*FRONTEND_CONTROL*/, 219 /*INPUT_SCRIPT_LEFT_AXIS_Y*/) * 127f));
			switch (bParam2)
			{
				case 0:
					if (iVar2 <= -110)
					{
						if (!BitTest(uParam0->f_820.f_1, bParam2))
						{
							iVar0 = 1;
							MISC::SET_BIT(&(uParam0->f_820.f_1), bParam2);
						}
					}
					else
					{
						MISC::CLEAR_BIT(&(uParam0->f_820.f_1), bParam2);
					}
					break;
				case 1:
					if (iVar2 >= 110)
					{
						if (!BitTest(uParam0->f_820.f_1, bParam2))
						{
							iVar0 = 1;
							MISC::SET_BIT(&(uParam0->f_820.f_1), bParam2);
						}
					}
					else
					{
						MISC::CLEAR_BIT(&(uParam0->f_820.f_1), bParam2);
					}
					break;
				case 2:
					if (iVar1 <= -110)
					{
						if (!BitTest(uParam0->f_820.f_1, bParam2))
						{
							iVar0 = 1;
							MISC::SET_BIT(&(uParam0->f_820.f_1), bParam2);
						}
					}
					else
					{
						MISC::CLEAR_BIT(&(uParam0->f_820.f_1), bParam2);
					}
					break;
				case 3:
					if (iVar1 >= 110)
					{
						if (!BitTest(uParam0->f_820.f_1, bParam2))
						{
							iVar0 = 1;
							MISC::SET_BIT(&(uParam0->f_820.f_1), bParam2);
						}
					}
					else
					{
						MISC::CLEAR_BIT(&(uParam0->f_820.f_1), bParam2);
					}
					break;
			}
			break;
		case 1:
			iVar1 = SYSTEM::FLOOR((PAD::GET_CONTROL_NORMAL(2 /*FRONTEND_CONTROL*/, 220 /*INPUT_SCRIPT_RIGHT_AXIS_X*/) * 127f));
			iVar2 = SYSTEM::FLOOR((PAD::GET_CONTROL_NORMAL(2 /*FRONTEND_CONTROL*/, 221 /*INPUT_SCRIPT_RIGHT_AXIS_Y*/) * 127f));
			switch (bParam2)
			{
				case 0:
					if (iVar2 <= -110)
					{
						if (!BitTest(uParam0->f_820.f_2, bParam2))
						{
							iVar0 = 1;
							MISC::SET_BIT(&(uParam0->f_820.f_2), bParam2);
						}
					}
					else
					{
						MISC::CLEAR_BIT(&(uParam0->f_820.f_2), bParam2);
					}
					break;
				case 1:
					if (iVar2 >= 110)
					{
						if (!BitTest(uParam0->f_820.f_2, bParam2))
						{
							iVar0 = 1;
							MISC::SET_BIT(&(uParam0->f_820.f_2), bParam2);
						}
					}
					else
					{
						MISC::CLEAR_BIT(&(uParam0->f_820.f_2), bParam2);
					}
					break;
				case 2:
					if (iVar1 <= -110)
					{
						if (!BitTest(uParam0->f_820.f_2, bParam2))
						{
							iVar0 = 1;
							MISC::SET_BIT(&(uParam0->f_820.f_2), bParam2);
						}
					}
					else
					{
						MISC::CLEAR_BIT(&(uParam0->f_820.f_2), bParam2);
					}
					break;
				case 3:
					if (iVar1 >= 110)
					{
						if (!BitTest(uParam0->f_820.f_2, bParam2))
						{
							iVar0 = 1;
							MISC::SET_BIT(&(uParam0->f_820.f_2), bParam2);
						}
					}
					else
					{
						MISC::CLEAR_BIT(&(uParam0->f_820.f_2), bParam2);
					}
					break;
			}
			break;
	}
	return iVar0;
}

void func_859(var uParam0, var uParam1)//Position - 0xB495
{
	uParam0->f_741.f_1.f_7 = uParam1;
	uParam0->f_741.f_1.f_20 = 15;
	uParam0->f_741.f_1.f_21 = 10;
	uParam0->f_741.f_1.f_22 = 1;
	uParam0->f_741.f_1.f_19 = 10f;
}

void func_860(var uParam0, var uParam1)//Position - 0xB581
{
	uParam0->f_741.f_32 = uParam1;
}

bool func_861(var uParam0)//Position - 0xB6FE
{
	return uParam0->f_726.f_5;
}

void func_862(var uParam0, int iParam1)//Position - 0xC0BD
{
	if (uParam0->f_707 != iParam1)
	{
	}
	uParam0->f_707 = iParam1;
}

bool func_863(var uParam0)//Position - 0xC1EF
{
	return uParam0->f_704;
}

bool func_864(var uParam0)//Position - 0xC2DC
{
	return uParam0->f_702;
}

int func_865(var uParam0)//Position - 0xC2F7
{
	if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_711))
	{
		return 0;
	}
	if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_712))
	{
		return 0;
	}
	return 1;
}

void func_866(var uParam0)//Position - 0xC322
{
	int iVar0;
	uParam0->f_726.f_1 = uParam0->f_726;
	MISC::SET_BIT(&(uParam0->f_726.f_4), uParam0->f_726.f_1);
	MISC::CLEAR_BIT(&(uParam0->f_726.f_3), uParam0->f_726.f_1);
	iVar0 = uParam0->f_726;
	iVar0++;
	uParam0->f_726 = iVar0;
	if (uParam0->f_726 == 7)
	{
		uParam0->f_726 = 5;
	}
}

void func_867(var uParam0)//Position - 0xC37D
{
	MISC::SET_BIT(&(uParam0->f_726.f_3), uParam0->f_726);
}

void func_868(var uParam0, int iParam1)//Position - 0xC5CF
{
	uParam0->f_741.f_33 = iParam1;
}

bool func_869(var uParam0)//Position - 0xC649
{
	return BitTest(uParam0->f_726.f_3, uParam0->f_726);
}

char* func_870(var uParam0)//Position - 0xD03F
{
	return "TUN_SESSANTA";
}

void func_871(var uParam0, int iParam1)//Position - 0x16E44
{
	if (uParam0->f_726 != iParam1)
	{
		uParam0->f_726.f_1 = uParam0->f_726;
		MISC::SET_BIT(&(uParam0->f_726.f_4), uParam0->f_726.f_1);
		MISC::CLEAR_BIT(&(uParam0->f_726.f_3), uParam0->f_726.f_1);
		uParam0->f_726 = iParam1;
		if (uParam0->f_726 == 7)
		{
			uParam0->f_726 = 5;
		}
	}
}

int func_872()//Position - 0x16E9C
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 1;
	}
	if (__LIB_1__::func_16() && __LIB_1__::func_212() == 1)
	{
		return 1;
	}
	if (Global_1973321.f_1095)
	{
		return 1;
	}
	return 0;
}

void func_873(var uParam0)//Position - 0x17042
{
	struct<65> Var0;
	Var0.f_63 = 500;
	Var0.f_64 = 2;
	*uParam0 = { Var0 };
}

void func_874(var uParam0)//Position - 0x17087
{
	struct<726> Var0;
	Var0.f_1 = 12;
	Var0.f_699 = 1065353216;
	Var0.f_701 = 1;
	Var0.f_702 = 1;
	*uParam0 = { Var0 };
}

void func_875(var uParam0)//Position - 0x170F3
{
	if (uParam0->f_1080)
	{
		if (uParam0->f_1080.f_1 != -1)
		{
			AUDIO::STOP_SOUND(uParam0->f_1080.f_1);
			AUDIO::RELEASE_SOUND_ID(uParam0->f_1080.f_1);
			uParam0->f_1080.f_1 = -1;
			uParam0->f_1080 = 0;
		}
	}
}

void func_876(var uParam0)//Position - 0x95FF
{
	__LIB_11__::func_684(&(uParam0->f_741.f_1), 0, 1);
	CAM::SET_WIDESCREEN_BORDERS(false, 0);
}

void func_877()//Position - 0xC673
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION() && __LIB_1__::func_19() == 25)
	{
		Global_1974423[PLAYER::PLAYER_ID() /*25*/].f_20 = 1;
	}
}

int func_878(int iParam0, int iParam1, int iParam2)//Position - 0xDE22
{
	int iVar0;
	if (!__LIB_28__::func_416(iParam0))
	{
		return 0;
	}
	if (!__LIB_28__::func_415(iParam0, iParam1))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (iVar0 != iParam2)
		{
			if (__LIB_28__::func_414(iParam0, iVar0) == iParam1)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void func_879(var uParam0, bool bParam1, int iParam2)//Position - 0x96EA
{
	if (bParam1)
	{
		if ((uParam0->f_1092 && !__LIB_0__::func_890(PLAYER::PLAYER_ID())) || iParam2)
		{
			__LIB_1__::func_376(PLAYER::PLAYER_ID(), 1, 0, 0);
			ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
			uParam0->f_1092 = 0;
		}
	}
	else
	{
		__LIB_1__::func_376(PLAYER::PLAYER_ID(), 0, 0, 0);
		ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), true);
		uParam0->f_1092 = 1;
	}
}

void func_880(var uParam0, bool bParam1)//Position - 0x1491
{
	if (bParam1)
	{
		if (uParam0->f_1092)
		{
			__LIB_1__::func_376(PLAYER::PLAYER_ID(), 1, 0, 0);
			ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
			uParam0->f_1092 = 0;
		}
	}
	else if (!uParam0->f_1092)
	{
		__LIB_1__::func_376(PLAYER::PLAYER_ID(), 0, 0, 0);
		ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), true);
		uParam0->f_1092 = 1;
	}
}

void func_881(var uParam0)//Position - 0xF20
{
	if (BitTest(uParam0->f_1085, 0))
	{
		if (BitTest(uParam0->f_1085, 9))
		{
			__LIB_13__::func_531(&(Global_2714762.f_781), -1, 0, 1, 1);
			MISC::CLEAR_BIT(&(uParam0->f_1085), 5);
			MISC::CLEAR_BIT(&(uParam0->f_1085), 6);
			MISC::CLEAR_BIT(&(uParam0->f_1085), 3);
			MISC::CLEAR_BIT(&(uParam0->f_1085), 4);
			MISC::CLEAR_BIT(&(uParam0->f_1085), 9);
		}
	}
	else if (BitTest(uParam0->f_1085, 9))
	{
		MISC::CLEAR_BIT(&(uParam0->f_1085), 9);
	}
}

bool func_882(int iParam0, int iParam1)//Position - 0xB9B
{
	return __LIB_0__::func_316(&(Local_198.f_38.f_1[iParam0 /*21*/]), iParam1);
}

bool func_883(int iParam0)//Position - 0x11AD
{
	return __LIB_0__::func_316(&(Local_198.f_16), iParam0);
}

var func_884(int iParam0)//Position - 0x28E5
{
	return Local_198.f_38.f_23[Local_198.f_38.f_1[iParam0 /*21*/].f_14 /*5*/];
}

bool func_885(int iParam0, int iParam1)//Position - 0x31C2
{
	return __LIB_0__::func_316(&(Local_198.f_85.f_1[iParam0 /*12*/]), iParam1);
}

bool func_886(int iParam0, int iParam1)//Position - 0x36B2
{
	return __LIB_0__::func_316(&(Local_198.f_67.f_1[iParam0 /*15*/]), iParam1);
}

int func_887(int iParam0, int iParam1)//Position - 0x3DE7
{
	int iVar0;
	int iVar1;
	switch (iParam1)
	{
		case 0:
			iVar0 = 0;
			break;
		case 1:
			iVar0 = 4;
			break;
		case 2:
			iVar0 = 8;
			break;
		case 3:
			iVar0 = 12;
			break;
		case 4:
			iVar0 = 16;
			break;
		case 5:
			iVar0 = 20;
			break;
	}
	iVar1 = 0;
	while (iVar1 < 4)
	{
		if (BitTest(Local_198.f_67.f_1[iParam0 /*15*/].f_10, (iVar0 + iVar1)))
		{
			return iVar1;
		}
		iVar1++;
	}
	return -1;
}

void func_888(int iParam0, int iParam1)//Position - 0x4030
{
	if (Local_198.f_67.f_1[iParam0 /*15*/].f_8 != -1)
	{
		VEHICLE::SET_VEHICLE_COLOURS(iParam1, Local_198.f_67.f_1[iParam0 /*15*/].f_8, Local_198.f_67.f_1[iParam0 /*15*/].f_8);
		VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iParam1, Local_198.f_67.f_1[iParam0 /*15*/].f_8, Local_198.f_67.f_1[iParam0 /*15*/].f_8);
	}
}

bool func_889(int iParam0, int iParam1)//Position - 0x2152B
{
	return __LIB_0__::func_316(&(Local_198.f_19.f_5[iParam0 /*13*/]), iParam1);
}

int func_890()//Position - 0x21F05
{
	int iVar0;
	int iVar1;
	iVar1 = 0;
	while (iVar1 < 4)
	{
		iVar0++;
		iVar1++;
	}
	return iVar0;
}

void func_891(int iParam0, int iParam1)//Position - 0x23325
{
	struct<3> Var0;
	if (iParam0 == 0)
	{
		return;
	}
	Var0.f_2 = -1;
	Var0.f_0 = 500306788;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = iParam1;
	SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 3, iParam0);
}

int func_892(int iParam0)//Position - 0x2D71A
{
	int iVar0;
	bool bVar1;
	iVar0 = 0;
	bVar1 = false;
	bVar1 = false;
	while (bVar1 <= 31)
	{
		if (BitTest(iParam0, bVar1))
		{
			iVar0++;
		}
		bVar1++;
	}
	return iVar0;
}

bool func_893(bool bParam0)//Position - 0x2DAF7
{
	return Global_1892703[bParam0 /*599*/].f_10.f_58 != __LIB_0__::func_162();
}

int func_894(int iParam0)//Position - 0x3578F
{
	switch (iParam0)
	{
		case 0:
			return 1;
		case 1:
			return 1;
		default:
	}
	return 0;
}

void func_895(var uParam0, int iParam1, int iParam2)//Position - 0x35CC6
{
	int iVar0;
	if (iParam1 == -1)
	{
		iParam1 = *uParam0;
	}
	iVar0 = 0;
	while (iVar0 < iParam1)
	{
		(*uParam0)[iVar0] = iParam2;
		iVar0++;
	}
}

int func_896()//Position - 0x38ECC
{
	int iVar0;
	iVar0 = __LIB_2__::func_608(PLAYER::PLAYER_ID());
	if (__LIB_0__::func_845(Global_1852994.f_19, -1))
	{
		if (iVar0 == 293)
		{
			return 1;
		}
	}
	return 0;
}

int func_897()//Position - 0xBE06C
{
	if (Local_199.f_15.f_18.f_5 != 0)
	{
		Call_Loc(Local_199.f_15.f_18.f_5);
		return StackVal;
	}
	return 0;
}

int func_898()//Position - 0xBE08F
{
	if (Local_199.f_15.f_18.f_4 != 0)
	{
		Call_Loc(Local_199.f_15.f_18.f_4);
		return StackVal;
	}
	return 0;
}

int func_899()//Position - 0xBE34D
{
	if (Local_199.f_15.f_2 != 0)
	{
		Call_Loc(Local_199.f_15.f_2);
		return StackVal;
	}
	return 3;
}

int func_900()//Position - 0xBE435
{
	if (Local_199.f_15.f_13.f_4 != 0)
	{
		Call_Loc(Local_199.f_15.f_13.f_4);
		return StackVal;
	}
	return 0;
}

int func_901()//Position - 0xBE544
{
	if (Local_199.f_15.f_13.f_2 != 0)
	{
		Call_Loc(Local_199.f_15.f_13.f_2);
		return StackVal;
	}
	return 0;
}

float func_902()//Position - 0xBE7C0
{
	if (Local_199.f_15.f_13.f_1 != 0)
	{
		Call_Loc(Local_199.f_15.f_13.f_1);
		return StackVal;
	}
	return 5f;
}

Vector3 func_903()//Position - 0xBE8BF
{
	if (Local_199.f_15.f_6.f_6 != 0)
	{
		Call_Loc(Local_199.f_15.f_6.f_6);
		return StackVal, StackVal, StackVal;
	}
	return 0f, 0f, 0f;
}

int func_904()//Position - 0xBE8E4
{
	if (Local_199.f_15.f_6.f_5 != 0)
	{
		Call_Loc(Local_199.f_15.f_6.f_5);
		return StackVal;
	}
	return 0;
}

float func_905()//Position - 0xBE907
{
	if (Local_199.f_15.f_6.f_4 != 0)
	{
		Call_Loc(Local_199.f_15.f_6.f_4);
		return StackVal;
	}
	return 0.3f;
}

int func_906()//Position - 0xBE965
{
	if (Local_199.f_15.f_6.f_2 != 0)
	{
		Call_Loc(Local_199.f_15.f_6.f_2);
		return StackVal;
	}
	return 0;
}

int func_907()//Position - 0xBE988
{
	if (Local_199.f_15.f_6.f_1 != 0)
	{
		Call_Loc(Local_199.f_15.f_6.f_1);
		return StackVal;
	}
	return 0;
}

int func_908()//Position - 0xBE9AB
{
	if (Local_199.f_15.f_6 != 0)
	{
		Call_Loc(Local_199.f_15.f_6);
		return StackVal;
	}
	return 0;
}

int func_909(int iParam0)//Position - 0xC4DC4
{
	switch (iParam0)
	{
		case 0:
			return 1;
		case 1:
			return 6;
		default:
	}
	return 1;
}

void func_910(int iParam0, char* sParam1)//Position - 0xC5654
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	HUD::GET_HUD_COLOUR(18, &iVar0, &iVar1, &iVar2, &uVar3);
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_MESSAGE");
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar2);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

int func_911(int iParam0)//Position - 0xC9B74
{
	return Local_198.f_38.f_23[Local_198.f_38.f_1[iParam0 /*21*/].f_14 /*5*/].f_3;
}

void func_912(int iParam0, int iParam1)//Position - 0xCAB6E
{
	if (__LIB_16__::func_755(&(Local_205[iParam0 /*19*/]), iParam1))
	{
	}
}

void func_913(int iParam0, int iParam1)//Position - 0xCAB86
{
	if (__LIB_1__::func_458(&(Local_205[iParam0 /*19*/]), iParam1))
	{
	}
}

Vector3 func_914(int iParam0)//Position - 0xD5A19
{
	struct<3> Var0;
	Var0 = { Local_198.f_67.f_1[Local_198.f_38.f_1[iParam0 /*21*/].f_8 /*15*/].f_4 };
	switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 4))
	{
		case 0:
			Var0 = { Var0 + Vector(0f, 0f, 1000f) };
			break;
		case 1:
			Var0 = { Var0 - Vector(0f, 0f, 1000f) };
			break;
		case 2:
			Var0 = { Var0 + Vector(0f, 1000f, 0f) };
			break;
		case 3:
			Var0 = { Var0 - Vector(0f, 1000f, 0f) };
			break;
	}
	return Var0;
}

void func_915(int iParam0, int iParam1)//Position - 0xD9D31
{
	Local_205[iParam0 /*19*/].f_10[Local_205[iParam0 /*19*/].f_16] = iParam1;
	Local_205[iParam0 /*19*/].f_16++;
}

int func_916(int iParam0)//Position - 0xDFF63
{
	if (__LIB_2__::func_608(PLAYER::PLAYER_ID()) == 238 || __LIB_2__::func_608(PLAYER::PLAYER_ID()) == 249)
	{
		return Global_1892703[iParam0 /*599*/].f_10.f_477;
	}
	return -1;
}

int func_917(int iParam0)//Position - 0xDFF9C
{
	if (__LIB_2__::func_608(PLAYER::PLAYER_ID()) == 237 || __LIB_2__::func_608(PLAYER::PLAYER_ID()) == 250)
	{
		return Global_1892703[iParam0 /*599*/].f_10.f_476;
	}
	return -1;
}

void func_918()//Position - 0x242C2
{
	int iVar0;
	iVar0 = __LIB_0__::func_253(30513, -1);
	if (!Global_1966155 && iVar0 < 3)
	{
		if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() && !__LIB_19__::func_378(PLAYER::PLAYER_ID()))
		{
			MISC::CLEAR_BIT(&(Global_1946250.f_9), 1);
			__LIB_1__::func_379(30513, iVar0 + 1, -1);
			Global_1966155 = 1;
			__LIB_0__::func_151("CCR_INC_HT" /* GXT: Increasing your reputation with the LS Car Meet unlocks vehicle trade prices, exclusive items for purchase at the Merch Shop and Mod Shop, and additional bonus rewards. */, -1);
		}
		else if (!BitTest(Global_1946250.f_9, 1))
		{
			MISC::SET_BIT(&(Global_1946250.f_9), 1);
		}
	}
}

int func_919(int iParam0)//Position - 0x9A57F
{
	if (Global_1965458)
	{
		switch (Global_1585857[iParam0 /*142*/].f_66)
		{
			case joaat("avenger"):
			case joaat("terbyte"):
				return 0;
				break;
			}
	}
	if (__LIB_2__::func_608(PLAYER::PLAYER_ID()) == 276 && __LIB_21__::func_816(PLAYER::PLAYER_ID()) == 3)
	{
		return 0;
	}
	return 1;
}

int func_920(int iParam0)//Position - 0x9E002
{
	if (__LIB_2__::func_608(iParam0) == 229 || __LIB_2__::func_608(iParam0) == 230)
	{
		return __LIB_21__::func_816(iParam0);
	}
	return -1;
}

int func_921(int iParam0)//Position - 0xC2C62
{
	if (!__LIB_1__::func_693(iParam0, 0, 1))
	{
		return 0;
	}
	if (!__LIB_1__::func_693(PLAYER::PLAYER_ID(), 0, 1))
	{
		return 0;
	}
	if (!__LIB_2__::func_76(iParam0))
	{
		return 0;
	}
	if ((NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(iParam0, PLAYER::PLAYER_ID()) || __LIB_2__::func_608(iParam0) == 233) || __LIB_2__::func_608(iParam0) == 271)
	{
		return 1;
	}
	return 0;
}

float func_922(struct<3> Param0, struct<3> Param1)//Position - 0xC5034
{
	Param0 = { __LIB_0__::func_79(Param0) };
	Param1 = { __LIB_0__::func_79(Param1) };
	return MISC::ACOS(((((Param0.f_0 * Param1.f_0) + (Param0.f_1 * Param1.f_1)) + (Param0.f_2 * Param1.f_2)) / (SYSTEM::SQRT((((Param0.f_0 * Param0.f_0) + (Param0.f_1 * Param0.f_1)) + (Param0.f_2 * Param0.f_2))) * SYSTEM::SQRT((((Param1.f_0 * Param1.f_0) + (Param1.f_1 * Param1.f_1)) + (Param1.f_2 * Param1.f_2))))));
}

int func_923(int iParam0)//Position - 0xD019A
{
	if (__LIB_2__::func_608(iParam0) == 237 || __LIB_2__::func_608(iParam0) == 250)
	{
		return __LIB_21__::func_816(iParam0);
	}
	return -1;
}

int func_924(int iParam0)//Position - 0xD0D2E
{
	if (__LIB_2__::func_608(iParam0) == 225 || __LIB_2__::func_608(iParam0) == 226)
	{
		return __LIB_21__::func_816(iParam0);
	}
	return -1;
}

int func_925(int iParam0)//Position - 0xDEB66
{
	if (__LIB_2__::func_608(iParam0) == 262)
	{
		return __LIB_21__::func_816(iParam0);
	}
	return -1;
}

int func_926(int iParam0)//Position - 0xDEBE8
{
	if (__LIB_2__::func_608(iParam0) == 263)
	{
		return __LIB_21__::func_816(iParam0);
	}
	return -1;
}

int func_927(int iParam0)//Position - 0xDED32
{
	if (__LIB_2__::func_608(iParam0) == 243)
	{
		return __LIB_21__::func_816(iParam0);
	}
	return -1;
}

int func_928(int iParam0, int iParam1)//Position - 0xDFF0A
{
	if (__LIB_2__::func_608(iParam0) == iParam1)
	{
		return __LIB_21__::func_816(iParam0);
	}
	return -1;
}

int func_929(int iParam0)//Position - 0xDFF27
{
	if (__LIB_2__::func_608(iParam0) == 300)
	{
		return __LIB_21__::func_816(iParam0);
	}
	return -1;
}

int func_930(int iParam0)//Position - 0xDFF45
{
	if (__LIB_2__::func_608(iParam0) == 299)
	{
		return __LIB_21__::func_816(iParam0);
	}
	return -1;
}

int func_931(int iParam0)//Position - 0xAC49
{
	if (__LIB_2__::func_608(iParam0) == 233)
	{
		return __LIB_21__::func_816(iParam0);
	}
	return -1;
}

int func_932(char* sParam0, int iParam1, bool bParam2)//Position - 0x36CFF
{
	int iVar0;
	char* sVar1;
	iVar0 = -1;
	HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(sParam0);
	if (!bParam2)
	{
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam1, 7);
	}
	else
	{
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam1, 2055);
	}
	iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(false, true);
	__LIB_2__::func_158(17, sParam0, 1, &sVar1, iParam1, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

void func_933(int iParam0, int iParam1, int iParam2)//Position - 0x3282F
{
	if (iParam1 <= iParam2)
	{
		__LIB_35__::func_369(iParam0, 0);
	}
}

void func_934(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x32D16
{
	if (__LIB_27__::func_218(iParam1, iParam2, iParam3))
	{
		__LIB_35__::func_369(iParam0, 1);
		__LIB_1__::func_333(1733209241, 3, 0);
	}
	else if (*iParam3)
	{
		__LIB_27__::func_217(iParam0);
		__LIB_1__::func_333(1733209241, 3, 0);
	}
}

void func_935(int iParam0, bool bParam1)//Position - 0x254C8
{
	int iVar0;
	bool bVar1;
	char* sVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	iVar0 = __LIB_9__::func_11(iParam0);
	if (!__LIB_9__::func_10(iVar0))
	{
		return;
	}
	bVar1 = !__LIB_1__::func_394();
	sVar2 = "";
	switch (iVar0)
	{
		case 7:
			iVar4 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
			bVar3 = 14;
			if (iVar4 == 1)
			{
				bVar3 = 15;
			}
			__LIB_9__::func_125(bVar3);
			if (bParam1)
			{
				sVar2 = __LIB_13__::func_686(iParam0, bVar1, iVar4, 0);
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar2))
				{
					__LIB_15__::func_643("CCR_UNL_VD" /* GXT: LS Car Meet Vehicle Discount Unlocked: ~a~ */, sVar2, 0, 0, 0);
				}
			}
			break;
		case 1:
			iVar5 = 0;
			if (__LIB_14__::func_509(&iVar5))
			{
				if (bParam1)
				{
					sVar2 = __LIB_13__::func_686(iParam0, bVar1, -1, iVar5);
					if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar2))
					{
						__LIB_15__::func_643("CCR_UNL_TP" /* GXT: LS Car Meet Trade Price Unlocked: ~a~ */, sVar2, 0, 0, 0);
					}
				}
			}
			break;
		case 3:
			if (iParam0 == 12)
			{
				MISC::SET_BIT(&(Global_1946250.f_9), 16);
				__LIB_0__::func_151("CCR_INC_FA" /* GXT: Your increased LS Car Meet reputation has earned you the ability to call in other car meet members for help during the final mission of any Auto Shop contract job. This can be accessed via the LS Car Meet Support section of the Interaction Menu while on the job. */, -1);
			}
			break;
		case 2:
			if (iParam0 == 6)
			{
				MISC::SET_BIT(&(Global_1946250.f_9), 15);
				MISC::SET_BIT(&(Global_1946250.f_9), 18);
			}
			break;
		case 4:
			if (iParam0 == 24)
			{
				MISC::SET_BIT(&(Global_1946250.f_9), 17);
				MISC::SET_BIT(&(Global_1946250.f_9), 19);
			}
			break;
	}
}

void func_936(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5)//Position - 0x1509
{
	fParam2 = ((fParam2 - fParam3) / (fParam4 - fParam3));
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_ALT_FOV_HEADING");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fParam2);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fParam5);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_937(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x153E
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_WEAPON_VALUES");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_938(int iParam0, bool bParam1)//Position - 0x1566
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_ZOOM_VISIBLE");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bParam1);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_939(bool bParam0)//Position - 0x1E34
{
	if (bParam0)
	{
		if (!BitTest(Global_1958711.f_2, 4))
		{
			Global_1958711.f_2 = 0;
			MISC::SET_BIT(&(Global_1958711.f_2), 4);
		}
	}
	else if (BitTest(Global_1958711.f_2, 4))
	{
		MISC::CLEAR_BIT(&(Global_1958711.f_2), 4);
	}
}

void func_940(int iParam0)//Position - 0x3D31
{
	int iVar0;
	if (Global_2667225.f_2690 == 1)
	{
		Global_2667225.f_2690 = 0;
		return;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if (!Global_2667225.f_2692.f_1)
		{
			if (!Global_2667225.f_2688 == -1)
			{
				if (((Global_2667225.f_2688 < 255 && !__LIB_4__::func_41()) && !BitTest(Global_4718592.f_168795, 0)) && !(AUDIO::AUDIO_IS_SCRIPTED_MUSIC_PLAYING() && (Global_2667225.f_2689 == 0 && iParam0 == 0)))
				{
					AUDIO::SET_RADIO_TO_STATION_INDEX(Global_2667225.f_2688);
				}
				else if (Global_2667225.f_2688 >= 255)
				{
					AUDIO::SET_RADIO_TO_STATION_NAME("OFF");
					iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
					if (ENTITY::DOES_ENTITY_EXIST(iVar0))
					{
						if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
						{
							AUDIO::SET_VEH_RADIO_STATION(iVar0, "OFF");
						}
					}
				}
			}
			Global_2667225.f_2688 = -1;
			Global_2667225.f_2692.f_1 = 1;
		}
	}
}

int func_941()//Position - 0x4424
{
	if (((MISC::IS_NEXT_WEATHER_TYPE("RAIN") || MISC::IS_NEXT_WEATHER_TYPE("THUNDER")) || MISC::IS_PREV_WEATHER_TYPE("RAIN")) || MISC::IS_PREV_WEATHER_TYPE("THUNDER"))
	{
		return 1;
	}
	return 0;
}

void func_942(bool bParam0)//Position - 0x3C7
{
	if (bParam0)
	{
		MISC::SET_BIT(&(Global_113386.f_10016.f_25), 22);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_113386.f_10016.f_25), 22);
	}
}

int func_943(int iParam0, int iParam1)//Position - 0x4F2
{
	int iVar0;
	if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 36 /*INPUT_DUCK*/))
	{
		MISC::SET_BIT(&(Global_113386.f_10016.f_25), 22);
	}
	iVar0 = BitTest(Global_113386.f_10016.f_25, 22);
	if (iParam0 && iVar0)
	{
		MISC::CLEAR_BIT(&(Global_113386.f_10016.f_25), 22);
	}
	iParam1 = iParam1;
	return iVar0;
}

int func_944(var uParam0, int iParam1, int iParam2)//Position - 0x560
{
	return SYSTEM::SHIFT_RIGHT((uParam0 && iParam1), iParam2);
}

int func_945(int iParam0, int iParam1, int iParam2)//Position - 0x27C50
{
	int iVar0;
	int iVar1;
	if (iParam2 < 1)
	{
		return 0;
	}
	if (Global_54979 == 8)
	{
		return 0;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 7)
	{
		if (Global_53557[iVar1 /*203*/].f_2 == iParam0)
		{
			if (Global_53557[iVar1 /*203*/].f_1 > 0)
			{
				iVar0 = Global_53557[iVar1 /*203*/].f_1;
			}
		}
		iVar1++;
	}
	if (iVar0 == 0)
	{
		return 0;
	}
	iVar1 = 0;
	while (iVar1 < 8)
	{
		if (Global_54980[iVar1 /*53*/].f_52 == 0)
		{
			Global_54980[iVar1 /*53*/].f_52 = iVar0;
			Global_54980[iVar1 /*53*/] = iParam0;
			Global_54980[iVar1 /*53*/].f_1 = iParam1;
			Global_54980[iVar1 /*53*/].f_2 = iParam2;
			Global_113386.f_21037.f_310++;
			if (Global_113386.f_21037.f_310 == 0)
			{
				Global_113386.f_21037.f_310 = 1;
			}
			Global_54980[iVar1 /*53*/].f_10 = 0;
			Global_54980[iVar1 /*53*/].f_3 = Global_113386.f_21037.f_310;
			Global_54980[iVar1 /*53*/].f_4 = 1;
			Global_54979++;
			return Global_54980[iVar1 /*53*/].f_3;
		}
		iVar1++;
	}
	return 0;
}

int func_946(int iParam0)//Position - 0x2BE95
{
	switch (iParam0)
	{
		case 17:
			return joaat("U_M_Y_Cyclist_01");
		case 49:
			return joaat("dune");
		default:
	}
	return 0;
}

bool func_947(bool bParam0)//Position - 0x2C00B
{
	if (bParam0)
	{
		return Global_110134.f_2 > 0.5f;
	}
	return Global_110134.f_2 >= 255f;
}

void func_948(int iParam0)//Position - 0x2C367
{
	PED::APPLY_PED_BLOOD_SPECIFIC(iParam0, 1, 0.431f, 0.667f, 179.593f, 0.889f, 2, 0f, "BasicSlash");
	PED::APPLY_PED_BLOOD_SPECIFIC(iParam0, 1, 0.556f, 0.292f, 161.805f, 1f, 1, 0f, "ShotgunLargeMonolithic");
	PED::APPLY_PED_BLOOD_SPECIFIC(iParam0, 1, 0.708f, 0.688f, 167.897f, 0f, 1, 0f, "ShotgunLargeMonolithic");
	PED::APPLY_PED_BLOOD_SPECIFIC(iParam0, 2, 0.472f, 0.347f, 146.133f, 1f, 1, 0f, "ShotgunLargeMonolithic");
	PED::APPLY_PED_BLOOD_SPECIFIC(iParam0, 2, 0.799f, 0.451f, 158.294f, 1f, 1, 0f, "ShotgunLargeMonolithic");
	PED::APPLY_PED_BLOOD_SPECIFIC(iParam0, 0, 0.681f, 0.507f, 158.707f, 1f, 1, 0f, "ShotgunLargeMonolithic");
	PED::APPLY_PED_BLOOD_SPECIFIC(iParam0, 0, 0.819f, 0.813f, 174.811f, 0.056f, 1, 0f, "ShotgunLargeMonolithic");
	PED::APPLY_PED_BLOOD_SPECIFIC(iParam0, 0, 0.174f, 0.438f, 211.521f, 1f, 1, 0f, "ShotgunLargeMonolithic");
	PED::APPLY_PED_BLOOD_SPECIFIC(iParam0, 0, 0.174f, 0.486f, 213.237f, 1f, 1, 0f, "ShotgunLargeMonolithic");
	PED::APPLY_PED_BLOOD_SPECIFIC(iParam0, 0, 0.174f, 0.542f, 215.168f, 1f, 0, 0f, "ShotgunLargeMonolithic");
	PED::APPLY_PED_BLOOD_SPECIFIC(iParam0, 0, 0.236f, 0.542f, 213.752f, 1f, 0, 0f, "ShotgunLargeMonolithic");
	PED::APPLY_PED_BLOOD_SPECIFIC(iParam0, 0, 0.278f, 0.542f, 212.851f, 1f, 0, 0f, "ShotgunLargeMonolithic");
	PED::APPLY_PED_BLOOD_SPECIFIC(iParam0, 0, 0.313f, 0.542f, 212.127f, 1f, 0, 0f, "ShotgunLargeMonolithic");
	PED::APPLY_PED_BLOOD_SPECIFIC(iParam0, 5, 0.639f, 0.313f, 149.248f, 1f, 1, 0f, "stab");
	PED::APPLY_PED_BLOOD_SPECIFIC(iParam0, 5, 0.792f, 0.424f, 182.625f, 1f, 1, 0f, "stab");
	PED::APPLY_PED_BLOOD_SPECIFIC(iParam0, 5, 0.792f, 0.424f, 182.625f, 1f, 1, 0f, "BasicSlash");
	PED::APPLY_PED_BLOOD_SPECIFIC(iParam0, 3, 0.618f, 0.451f, 204.207f, 1f, 1, 0f, "ShotgunLargeMonolithic");
	PED::APPLY_PED_BLOOD_SPECIFIC(iParam0, 3, 0.785f, 0.597f, 206.103f, 1f, 1, 0f, "ShotgunLargeMonolithic");
	PED::APPLY_PED_BLOOD_SPECIFIC(iParam0, 4, 0.688f, 0.438f, 202.91f, 1f, 1, 0f, "BasicSlash");
	PED::APPLY_PED_BLOOD_SPECIFIC(iParam0, 4, 0.688f, 0.424f, 202.492f, 1f, 1, 0f, "BasicSlash");
	PED::APPLY_PED_BLOOD_SPECIFIC(iParam0, 4, 0.688f, 0.347f, 200.181f, 1f, 1, 0f, "BasicSlash");
	PED::APPLY_PED_BLOOD_SPECIFIC(iParam0, 4, 0.688f, 0.278f, 198.043f, 1f, 1, 0f, "BasicSlash");
	PED::APPLY_PED_BLOOD_SPECIFIC(iParam0, 4, 0.688f, 0.222f, 196.275f, 1f, 1, 0f, "BasicSlash");
	PED::APPLY_PED_BLOOD_SPECIFIC(iParam0, 4, 0.653f, 0.222f, 196.609f, 1f, 3, 0f, "BasicSlash");
	PED::APPLY_PED_BLOOD_SPECIFIC(iParam0, 4, 0.75f, 0.222f, 195.716f, 1f, 2, 0f, "BasicSlash");
	PED::APPLY_PED_BLOOD_SPECIFIC(iParam0, 4, 1f, 0.326f, 196.621f, 1f, 0, 0f, "ShotgunLargeMonolithic");
	PED::APPLY_PED_BLOOD_SPECIFIC(iParam0, 4, 0.93f, 0.451f, 200.584f, 1f, 1, 0f, "ShotgunLargeMonolithic");
	PED::APPLY_PED_BLOOD_SPECIFIC(iParam0, 4, 0.618f, 0.451f, 204.207f, 1f, 0, 0f, "ShotgunLargeMonolithic");
}

void func_949(var uParam0, struct<3> Param1, float fParam2, bool bParam3)//Position - 0x2CFD7
{
	int iVar0;
	struct<3> Var1;
	iVar0 = __LIB_39__::func_12(28);
	if (STREAMING::HAS_MODEL_LOADED(iVar0))
	{
		*uParam0 = PED::CREATE_PED(28, iVar0, Param1, fParam2, true, true);
		AUDIO::DISABLE_PED_PAIN_AUDIO(*uParam0, true);
		PED::SET_PED_CONFIG_FLAG(*uParam0, 227, true);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
		ENTITY::SET_ENTITY_HEALTH(*uParam0, 0, 0);
		PHYSICS::ACTIVATE_PHYSICS(*uParam0);
		Var1 = { 0.02f, -0.01f, 0f };
		GRAPHICS::ADD_DECAL(1110, Param1 + Var1, 0f, 0f, -1f, __LIB_0__::func_79(0f, 1f, 0f), 0.6f, 0.4f, 0.196f, 0f, 0f, 1f, -1f, true, false, false);
		Var1 = { -0.03f, 0.04f, 0f };
		GRAPHICS::ADD_DECAL(1110, Param1 + Var1, 0f, 0f, -1f, __LIB_0__::func_79(0f, 1f, 0f), 0.8f, 0.6f, 0.196f, 0f, 0f, 1f, -1f, true, false, false);
		Var1 = { -0.05f, -0.01f, 0f };
		GRAPHICS::ADD_DECAL(1110, Param1 + Var1, 0f, 0f, -1f, __LIB_0__::func_79(0f, 1f, 0f), 0.8f, 1.1f, 0.196f, 0f, 0f, 1f, -1f, true, false, false);
		Var1 = { 0.01f, -0.06f, 0f };
		GRAPHICS::ADD_DECAL(1110, Param1 + Var1, 0f, 0f, -1f, __LIB_0__::func_79(0f, 1f, 0f), 0.9f, 0.8f, 0.196f, 0f, 0f, 1f, -1f, true, false, false);
		if (bParam3)
		{
			Var1 = { 0.5206f, 0f, 0.003f };
			GRAPHICS::ADD_DECAL(2020, Param1 + Var1, 0f, 0f, -1f, 0.309f, -0.9511f, 0f, 0.19f, 0.33f, 0.113f, 0f, 0f, 1f, -1f, true, false, false);
			Var1 = { 1.1258f, 0.0362f, -0.0837f };
			GRAPHICS::ADD_DECAL(2020, Param1 + Var1, 0f, 0f, -1f, 0.5036f, -0.8639f, 0f, 0.19f, 0.33f, 0.119f, 0f, 0f, 1f, -1f, true, false, false);
			Var1 = { 1.6107f, 0.4678f, -0.0815f };
			GRAPHICS::ADD_DECAL(2020, Param1 + Var1, 0f, 0f, -1f, 0.5036f, -0.8639f, 0f, 0.19f, 0.33f, 0.119f, 0f, 0f, 0.8f, -1f, true, false, false);
		}
		return;
	}
}

void func_950(var uParam0, struct<3> Param1, float fParam2, bool bParam3)//Position - 0x2D20B
{
	int iVar0;
	struct<3> Var1;
	iVar0 = __LIB_39__::func_12(35);
	if (STREAMING::HAS_MODEL_LOADED(iVar0))
	{
		*uParam0 = VEHICLE::CREATE_VEHICLE(iVar0, Param1, fParam2, true, true, false);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
		ENTITY::SET_ENTITY_ROTATION(*uParam0, 0f, 170f, 0f, 2, true);
		VEHICLE::SET_VEHICLE_ENGINE_HEALTH(*uParam0, 1f);
		VEHICLE::SET_VEHICLE_BODY_HEALTH(*uParam0, 1f);
		VEHICLE::SET_VEHICLE_DIRT_LEVEL(*uParam0, 15f);
		VEHICLE::SET_VEHICLE_DOOR_BROKEN(*uParam0, 0, __LIB_0__::func_680());
		VEHICLE::SET_VEHICLE_DOOR_BROKEN(*uParam0, 1, __LIB_0__::func_680());
		VEHICLE::SET_VEHICLE_DOOR_BROKEN(*uParam0, 2, __LIB_0__::func_680());
		VEHICLE::SET_VEHICLE_DOOR_BROKEN(*uParam0, 3, __LIB_0__::func_680());
		VEHICLE::SET_VEHICLE_DOOR_BROKEN(*uParam0, 4, __LIB_0__::func_680());
		VEHICLE::SET_VEHICLE_DOOR_BROKEN(*uParam0, 5, __LIB_0__::func_680());
		VEHICLE::SET_VEHICLE_HEADLIGHT_SHADOWS(*uParam0, 3);
		VEHICLE::SET_VEHICLE_LIGHTS(*uParam0, 2);
		VEHICLE::SET_VEHICLE_UNDRIVEABLE(*uParam0, true);
		PHYSICS::ACTIVATE_PHYSICS(*uParam0);
		if (bParam3)
		{
			Var1 = { 0.4947f, 2.3632f, 0.1294f };
			GRAPHICS::ADD_DECAL(2020, Param1 + Var1, 0f, 0f, -1f, 0.3798f, -0.9251f, 0f, 0.19f, 0.33f, 0f, 0f, 0f, 0.7f, -1f, true, false, false);
			Var1 = { 0.9243f, 2.6606f, 0.1951f };
			GRAPHICS::ADD_DECAL(2020, Param1 + Var1, 0f, 0f, -1f, 0.3798f, -0.9251f, 0f, 0.19f, 0.33f, 0f, 0f, 0f, 0.66f, -1f, true, false, false);
			Var1 = { 1.5467f, 2.5044f, 0.2418f };
			GRAPHICS::ADD_DECAL(2020, Param1 + Var1, 0f, 0f, -1f, 0.3798f, -0.9251f, 0f, 0.19f, 0.33f, 0f, 0f, 0f, 0.58f, -1f, true, false, false);
			Var1 = { 1.357f, 3.8779f, 0.3259f };
			GRAPHICS::ADD_DECAL(2020, Param1 + Var1, 0f, 0f, -1f, 0.3798f, -0.9251f, 0f, 0.19f, 0.33f, 0f, 0f, 0f, 0.48f, -1f, true, false, false);
		}
		return;
	}
}

void func_951(var uParam0, struct<3> Param1, float fParam2, bool bParam3)//Position - 0x2D3F7
{
	int iVar0;
	struct<3> Var1;
	iVar0 = __LIB_39__::func_12(43);
	if (STREAMING::HAS_MODEL_LOADED(iVar0))
	{
		*uParam0 = PED::CREATE_PED(28, iVar0, Param1, fParam2, true, true);
		AUDIO::DISABLE_PED_PAIN_AUDIO(*uParam0, true);
		PED::SET_PED_CONFIG_FLAG(*uParam0, 227, true);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
		ENTITY::SET_ENTITY_HEALTH(*uParam0, 0, 0);
		PHYSICS::ACTIVATE_PHYSICS(*uParam0);
		Var1 = { 0.12f, -0.01f, 0f };
		GRAPHICS::ADD_DECAL(1110, Param1 + Var1, 0f, 0f, -1f, __LIB_0__::func_79(0f, 1f, 0f), 1f, 0.9f, 0.196f, 0f, 0f, 1f, -1f, true, false, false);
		Var1 = { -0.03f, 0.04f, 0f };
		GRAPHICS::ADD_DECAL(1110, Param1 + Var1, 0f, 0f, -1f, __LIB_0__::func_79(0f, 1f, 0f), 0.9f, 0.8f, 0.196f, 0f, 0f, 1f, -1f, true, false, false);
		Var1 = { -0.2f, -0.01f, 0f };
		GRAPHICS::ADD_DECAL(1110, Param1 + Var1, 0f, 0f, -1f, __LIB_0__::func_79(0f, 1f, 0f), 0.7f, 0.9f, 0.196f, 0f, 0f, 1f, -1f, true, false, false);
		Var1 = { -0.05f, -0.15f, 0f };
		GRAPHICS::ADD_DECAL(1110, Param1 + Var1, 0f, 0f, -1f, __LIB_0__::func_79(0f, 1f, 0f), 0.9f, 0.7f, 0.196f, 0f, 0f, 1f, -1f, true, false, false);
		if (bParam3)
		{
			Var1 = { 0.4125f, -0.5815f, -0.2056f };
			GRAPHICS::ADD_DECAL(2020, Param1 + Var1, 0f, 0f, -1f, -0.5358f, -0.8443f, 0f, 0.19f, 0.33f, 0.234f, 0f, 0f, 0.9f, -1f, true, false, false);
			Var1 = { 0.6332f, -1.1758f, -0.7106f };
			GRAPHICS::ADD_DECAL(2020, Param1 + Var1, 0f, 0f, -1f, -0.7026f, -0.7115f, 0f, 0.19f, 0.33f, 0.26f, 0f, 0f, 0.75f, -1f, true, false, false);
		}
		return;
	}
}

void func_952()//Position - 0x2DBA8
{
	if (Global_110134.f_3 == MISC::GET_FRAME_COUNT())
	{
		return;
	}
	Global_110134.f_3 = MISC::GET_FRAME_COUNT();
	if (Global_110134.f_2 == 0f && Global_110134.f_1 == 0f)
	{
		return;
	}
	if (Global_110134.f_2 != Global_110134.f_1)
	{
		Global_110134.f_2 = (Global_110134.f_2 + Global_110134);
		if (Global_110134 <= 0f)
		{
			if (Global_110134.f_2 < Global_110134.f_1)
			{
				Global_110134.f_2 = Global_110134.f_1;
			}
		}
		else if (Global_110134.f_2 > Global_110134.f_1)
		{
			Global_110134.f_2 = Global_110134.f_1;
		}
	}
	GRAPHICS::DRAW_RECT(0.5f, 0.5f, 1f, 1f, 255, 255, 255, SYSTEM::ROUND(Global_110134.f_2), false);
}

void func_953(int iParam0, int iParam1)//Position - 0x2DC69
{
	float fVar0;
	float fVar1;
	float fVar2;
	fVar0 = SYSTEM::TO_FLOAT(iParam0);
	if (iParam1 <= 0)
	{
		Global_110134 = 0f;
		Global_110134.f_1 = fVar0;
		Global_110134.f_2 = fVar0;
	}
	else
	{
		fVar1 = (fVar0 - Global_110134.f_2);
		fVar2 = (SYSTEM::TO_FLOAT(iParam1) / (MISC::GET_FRAME_TIME() * 1000f));
		Global_110134 = (fVar1 / fVar2);
		Global_110134.f_1 = fVar0;
	}
}

void func_954(var uParam0, int iParam1, int iParam2, int iParam3)//Position - 0x2DCE2
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam2));
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, iParam3));
}

var func_955()//Position - 0x30D8A
{
	return Global_77137.f_138;
}

void func_956(int iParam0, int iParam1, bool bParam2)//Position - 0x10538
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	if (Global_23150.f_5609 > iParam0)
	{
		return;
	}
	if (Global_23150.f_5609 >= 128)
	{
		return;
	}
	if (Global_23150.f_5615 >= 256)
	{
		return;
	}
	if (Global_23150.f_6134 < Global_23150.f_6132)
	{
		return;
	}
	if (Global_23150.f_5609 != iParam0)
	{
		Global_23150.f_5609 = iParam0;
		Global_23150.f_5610 = 0;
	}
	iVar0 = Global_23150.f_5447[Global_23150.f_5610];
	if (iVar0 != 4)
	{
		while (Global_23150.f_5610 < 4 && iVar0 != 4)
		{
			Global_23150.f_5610++;
			iVar0 = Global_23150.f_5447[Global_23150.f_5610];
		}
		if (iVar0 != 4)
		{
			return;
		}
	}
	Global_23150.f_4824[Global_23150.f_5615] = iParam1;
	Global_23150.f_5615++;
	if (iParam1 != 0)
	{
		__LIB_3__::func_124(iParam1, 1, 0, &fVar1, &fVar2, 0);
		if (Global_23150.f_5466[Global_23150.f_5610])
		{
			__LIB_3__::func_124(26, 1, 0, &fVar3, &fVar4, 0);
			fVar1 = (fVar1 + (fVar3 * 2f));
		}
		if (fVar1 > Global_23150.f_5459[Global_23150.f_5610])
		{
			Global_23150.f_5459[Global_23150.f_5610] = fVar1;
		}
		if (bParam2)
		{
			if (fVar2 > Global_23150.f_6136[iParam0])
			{
				Global_23150.f_6136[iParam0] = fVar2;
			}
		}
	}
	MISC::SET_BIT(&(Global_23150.f_5480[iParam0]), Global_23150.f_5610);
	Global_23150.f_5610++;
	Global_23150.f_6135 = 4;
}

int func_957(int iParam0)//Position - 0x21397
{
	__LIB_14__::func_527(&(Global_77137.f_555[0 /*21*/]), iParam0);
	switch (iParam0)
	{
		case 21:
			if (Global_77137.f_555[0 /*21*/].f_4 == 0)
			{
				return iParam0;
			}
			if (!__LIB_17__::func_164(26))
			{
				return 26;
			}
			if (!__LIB_17__::func_164(29))
			{
				return 29;
			}
			if (!__LIB_17__::func_164(32))
			{
				return 32;
			}
			break;
		case 22:
			if (Global_77137.f_555[0 /*21*/].f_4 == 0)
			{
				return iParam0;
			}
			if (!__LIB_17__::func_164(27))
			{
				return 27;
			}
			if (!__LIB_17__::func_164(30))
			{
				return 30;
			}
			if (!__LIB_17__::func_164(33))
			{
				return 33;
			}
			break;
		case 23:
			if (Global_77137.f_555[0 /*21*/].f_4 == 0)
			{
				return iParam0;
			}
			if (!__LIB_17__::func_164(28))
			{
				return 28;
			}
			if (!__LIB_17__::func_164(31))
			{
				return 31;
			}
			if (!__LIB_17__::func_164(34))
			{
				return 34;
			}
			break;
	}
	return -1;
}

void func_958()//Position - 0x8A8
{
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 24 /*INPUT_ATTACK*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 66 /*INPUT_VEH_GUN_LR*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 67 /*INPUT_VEH_GUN_UD*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 68 /*INPUT_VEH_AIM*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 114 /*INPUT_VEH_FLY_ATTACK*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 69 /*INPUT_VEH_ATTACK*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 70 /*INPUT_VEH_ATTACK2*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 91 /*INPUT_VEH_PASSENGER_AIM*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 92 /*INPUT_VEH_PASSENGER_ATTACK*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 99 /*INPUT_VEH_SELECT_NEXT_WEAPON*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 100 /*INPUT_VEH_SELECT_PREV_WEAPON*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 37 /*INPUT_SELECT_WEAPON*/, true);
}

int func_959(int iParam0)//Position - 0x116D
{
	switch (iParam0)
	{
		case joaat("akula"):
		case joaat("annihilator2"):
			return 1;
		default:
	}
	return 0;
}

bool func_960(int iParam0)//Position - 0x1337
{
	return (iParam0 != -1 && BitTest(Global_1853348[iParam0 /*834*/].f_809, 1));
}

void func_961()//Position - 0x4B714
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if (__LIB_1__::func_693(iVar1, 1, 1) && PLAYER::PLAYER_ID() != iVar1)
		{
			NETWORK::SET_ENTITY_LOCALLY_INVISIBLE(PLAYER::GET_PLAYER_PED(iVar1));
		}
		iVar0++;
	}
}

void func_962(int* iParam0, int* iParam1, int* iParam2, int iParam3, int iParam4)//Position - 0x183706
{
	Global_23150.f_8783 = iParam4;
	Global_23150.f_8779 = iParam0;
	Global_23150.f_8780 = iParam1;
	Global_23150.f_8781 = iParam2;
	Global_23150.f_8782 = iParam3;
}

void func_963(int iParam0)//Position - 0x183B75
{
	Global_23150.f_8806 = iParam0;
}

void func_964(int* iParam0, int* iParam1, int* iParam2, int iParam3, int iParam4)//Position - 0x183B85
{
	Global_23150.f_8793 = iParam4;
	Global_23150.f_8789 = iParam0;
	Global_23150.f_8790 = iParam1;
	Global_23150.f_8791 = iParam2;
	Global_23150.f_8792 = iParam3;
}

Vector3 func_965(int iParam0)//Position - 0x18620C
{
	switch (iParam0)
	{
		case 0:
			return -811.8961f, 175.2218f, 76.7308f;
			break;
		case 1:
			return 1969.4883f, 3815.0303f, 33.4337f;
			break;
		case 2:
			return 1969.4883f, 3815.0303f, 33.4337f;
			break;
		case 3:
			return -1150.4913f, -1513.347f, 10.6394f;
			break;
		case 4:
			return 105.3011f, -1303.3383f, 27.7688f;
			break;
		case 5:
			return -17.9973f, -1438.911f, 31.1065f;
			break;
		case 6:
			return 9.0157f, 528.7267f, 170.6221f;
			break;
		case 7:
			return 259.791f, -1004.398f, -100.004f;
			break;
	}
	return 0f, 0f, 0f;
}

void func_966(int* iParam0)//Position - 0x348D5
{
	float fVar0;
	float fVar1;
	struct<3> Var2;
	fVar0 = 0f;
	fVar1 = 0.5f;
	Var2 = { 0f, 0f, 0f };
	if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
	{
		*iParam0 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("MP_MENU_GLARE");
	}
	else
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			Var2 = { CAM::GET_FINAL_RENDERED_CAM_ROT(2) };
			fVar0 = __LIB_1__::func_9(Var2.f_2, 0f, 360f);
			if ((iParam0->f_1 == 0f || (iParam0->f_1 - fVar0) > fVar1) || (iParam0->f_1 - fVar0) < -fVar1)
			{
				iParam0->f_1 = fVar0;
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "SET_DATA_SLOT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(iParam0->f_1);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
		}
		GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(*iParam0, 255, 255, 255, 255, 0);
	}
}

void func_967(bool bParam0, char* sParam1, char* sParam2)//Position - 0x81944
{
	Global_23150 = bParam0;
	__LIB_3__::func_111(29, sParam1, sParam2);
}

int func_968(int iParam0)//Position - 0x1D64
{
	if (__LIB_2__::func_730(iParam0) && __LIB_1__::func_644(iParam0) == iParam0)
	{
		return 1;
	}
	return 0;
}

int func_969(var uParam0, var uParam1, var uParam2, int* iParam3, int* iParam4, int* iParam5)//Position - 0x183BE5
{
	int iVar0;
	var uVar1;
	iVar0 = 0;
	switch (__LIB_0__::func_683())
	{
		case 0:
			HUD::GET_HUD_COLOUR(143, iParam3, iParam4, iParam5, &uVar1);
			*uParam0 = 15;
			*uParam1 = 27;
			*uParam2 = 32;
			iVar0 = 1;
			break;
		case 1:
			HUD::GET_HUD_COLOUR(144, iParam3, iParam4, iParam5, &uVar1);
			*uParam0 = 25;
			*uParam1 = 35;
			*uParam2 = 25;
			iVar0 = 1;
			break;
		case 2:
			HUD::GET_HUD_COLOUR(145, iParam3, iParam4, iParam5, &uVar1);
			*uParam0 = 38;
			*uParam1 = 24;
			*uParam2 = 13;
			iVar0 = 1;
			break;
	}
	return iVar0;
}

char* func_970()//Position - 0x185CDC
{
	switch (__LIB_0__::func_683())
	{
		case 0:
			return "ShopUI_Title_Graphics_Michael";
			break;
		case 1:
			return "ShopUI_Title_Graphics_Franklin";
			break;
		case 2:
			return "ShopUI_Title_Graphics_Trevor";
			break;
	}
	return "";
}

void func_971()//Position - 0x2AB51
{
	struct<50> Var0;
	if ((PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) || !__LIB_0__::func_43(__LIB_0__::func_683())) || !__LIB_0__::func_438())
	{
		return;
	}
	Var0 = 12;
	Var0.f_13 = 12;
	Var0.f_26 = 12;
	Var0.f_39 = 9;
	Var0.f_49 = 9;
	__LIB_11__::func_998(PLAYER::PLAYER_PED_ID(), &Var0, 1, -1);
	__LIB_1__::func_379(1306, Var0[0], -1);
	__LIB_1__::func_379(1307, Var0[1], -1);
	__LIB_1__::func_379(1308, Var0[2], -1);
	__LIB_1__::func_379(1309, Var0[3], -1);
	__LIB_1__::func_379(1310, Var0[4], -1);
	__LIB_1__::func_379(1311, Var0[5], -1);
	__LIB_1__::func_379(1312, Var0[6], -1);
	__LIB_1__::func_379(1313, Var0[7], -1);
	__LIB_1__::func_379(1314, Var0[8], -1);
	__LIB_1__::func_379(1315, Var0[9], -1);
	__LIB_1__::func_379(1316, Var0[10], -1);
	__LIB_1__::func_379(1317, Var0[11], -1);
	__LIB_1__::func_379(1318, Var0.f_13[0], -1);
	__LIB_1__::func_379(1319, Var0.f_13[1], -1);
	__LIB_1__::func_379(1320, Var0.f_13[2], -1);
	__LIB_1__::func_379(1321, Var0.f_13[3], -1);
	__LIB_1__::func_379(1322, Var0.f_13[4], -1);
	__LIB_1__::func_379(1323, Var0.f_13[5], -1);
	__LIB_1__::func_379(1324, Var0.f_13[6], -1);
	__LIB_1__::func_379(1325, Var0.f_13[7], -1);
	__LIB_1__::func_379(1326, Var0.f_13[8], -1);
	__LIB_1__::func_379(1327, Var0.f_13[9], -1);
	__LIB_1__::func_379(1328, Var0.f_13[10], -1);
	__LIB_1__::func_379(1329, Var0.f_13[11], -1);
	__LIB_1__::func_379(1330, Var0.f_26[0], -1);
	__LIB_1__::func_379(1331, Var0.f_26[1], -1);
	__LIB_1__::func_379(1332, Var0.f_26[2], -1);
	__LIB_1__::func_379(1333, Var0.f_26[3], -1);
	__LIB_1__::func_379(1334, Var0.f_26[4], -1);
	__LIB_1__::func_379(1335, Var0.f_26[5], -1);
	__LIB_1__::func_379(1336, Var0.f_26[6], -1);
	__LIB_1__::func_379(1337, Var0.f_26[7], -1);
	__LIB_1__::func_379(1338, Var0.f_26[8], -1);
	__LIB_1__::func_379(1339, Var0.f_26[9], -1);
	__LIB_1__::func_379(1340, Var0.f_26[10], -1);
	__LIB_1__::func_379(1341, Var0.f_26[11], -1);
	__LIB_1__::func_379(1342, Var0.f_39[0], -1);
	__LIB_1__::func_379(1343, Var0.f_39[1], -1);
	__LIB_1__::func_379(1344, Var0.f_39[2], -1);
	__LIB_1__::func_379(1345, Var0.f_39[3], -1);
	__LIB_1__::func_379(1346, Var0.f_39[4], -1);
	__LIB_1__::func_379(1347, Var0.f_39[5], -1);
	__LIB_1__::func_379(1348, Var0.f_39[6], -1);
	__LIB_1__::func_379(1349, Var0.f_39[7], -1);
	__LIB_1__::func_379(1350, Var0.f_39[8], -1);
	__LIB_1__::func_379(1351, Var0.f_49[0], -1);
	__LIB_1__::func_379(1352, Var0.f_49[1], -1);
	__LIB_1__::func_379(1353, Var0.f_49[2], -1);
	__LIB_1__::func_379(1354, Var0.f_49[3], -1);
	__LIB_1__::func_379(1355, Var0.f_49[4], -1);
	__LIB_1__::func_379(1356, Var0.f_49[5], -1);
	__LIB_1__::func_379(1357, Var0.f_49[6], -1);
	__LIB_1__::func_379(1358, Var0.f_49[7], -1);
	__LIB_1__::func_379(1359, Var0.f_49[8], -1);
	__LIB_1__::func_379(1360, __LIB_0__::func_683(), -1);
	STATS::STAT_SET_BOOL(joaat("CLO_STORED_INITIAL"), true, true);
	Global_113386.f_2363.f_539.f_4315 = 1;
}

void func_972(var uParam0)//Position - 0x349C4
{
	if (__LIB_2__::func_429() && NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		__LIB_38__::func_220(uParam0);
	}
	else
	{
		__LIB_38__::func_221(uParam0);
	}
}

int func_973(int iParam0)//Position - 0x37A52
{
	if (iParam0 != 78)
	{
		return 0;
	}
	if (__LIB_4__::func_900(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 0;
	}
	if (!__LIB_4__::func_936())
	{
		return 0;
	}
	if (!__LIB_16__::func_548(PLAYER::PLAYER_ID(), 0))
	{
		return 0;
	}
	if (__LIB_18__::func_311(0) != 0)
	{
		return 0;
	}
	return 1;
}

void func_974(var uParam0)//Position - 0x2879
{
	if (STREAMING::IS_MODEL_IN_CDIMAGE(uParam0->f_38))
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(uParam0->f_38);
	}
	if (STREAMING::IS_MODEL_IN_CDIMAGE(uParam0->f_39))
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(uParam0->f_39);
	}
}

void func_975()//Position - 0x4F48C
{
	if (iLocal_110)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_109))
		{
			GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED(sLocal_109);
		}
		iLocal_110 = 0;
	}
}

int func_976(int iParam0, int iParam1, int iParam2)//Position - 0x5D306
{
	switch (iParam0)
	{
		case joaat("MP_M_Freemode_01"):
			switch (iParam1)
			{
				case 14:
					if ((iParam2 >= 131 && iParam2 <= 138) || (iParam2 >= 147 && iParam2 <= 154))
					{
						return 1;
					}
					break;
			}
			break;
		case joaat("MP_F_Freemode_01"):
			switch (iParam1)
			{
				case 14:
					if ((iParam2 >= 131 && iParam2 <= 138) || (iParam2 >= 147 && iParam2 <= 154))
					{
						return 1;
					}
					break;
			}
			break;
	}
	return 0;
}

void func_977(var uParam0)//Position - 0x61050
{
	if (uParam0->f_5.f_23.f_2 < uParam0->f_197)
	{
		uParam0->f_5.f_23.f_2 = uParam0->f_197;
	}
	if (uParam0->f_5.f_23.f_2 > uParam0->f_198)
	{
		uParam0->f_5.f_23.f_2 = uParam0->f_198;
	}
}

void func_978(var uParam0)//Position - 0x61956
{
	switch (uParam0->f_5.f_11)
	{
		case 0:
		case 7:
			uParam0->f_5.f_27 = { 0.1198f, 2.2929f, 0.3112f };
			uParam0->f_5.f_26 = 33f;
			uParam0->f_5.f_30 = 51.60055f;
			uParam0->f_5.f_31 = -0.1f;
			break;
		case 1:
			uParam0->f_5.f_27 = { 0.0948f, 1.8239f, 0.2271f };
			uParam0->f_5.f_26 = 25f;
			uParam0->f_5.f_30 = 62.94939f;
			uParam0->f_5.f_31 = -0.1f;
			break;
		case 3:
			uParam0->f_5.f_27 = { 0.1198f, 2.2929f, 0.3112f };
			uParam0->f_5.f_26 = 33f;
			uParam0->f_5.f_30 = 51.60055f;
			uParam0->f_5.f_31 = -0.1f;
			break;
		case 2:
			uParam0->f_5.f_27 = { 0.0948f, 1.8239f, 0.2271f };
			uParam0->f_5.f_26 = 25f;
			uParam0->f_5.f_30 = 62.94939f;
			uParam0->f_5.f_31 = -0.1f;
			break;
		case 4:
			uParam0->f_5.f_27 = { 0.1198f, 2.2929f, 0.3112f };
			uParam0->f_5.f_26 = 33f;
			uParam0->f_5.f_30 = 51.60055f;
			uParam0->f_5.f_31 = -0.1f;
			break;
		case 5:
			uParam0->f_5.f_27 = { 0.1198f, 2.2929f, 0.3112f };
			uParam0->f_5.f_26 = 30f;
			uParam0->f_5.f_30 = 51.60055f;
			uParam0->f_5.f_31 = -0.1f;
			break;
		case 6:
			uParam0->f_5.f_27 = { 0.1198f, 2.2929f, 0.3112f };
			uParam0->f_5.f_26 = 33f;
			uParam0->f_5.f_30 = 51.60055f;
			uParam0->f_5.f_31 = -0.1f;
			break;
	}
}

void func_979(var uParam0)//Position - 0x61B36
{
	switch (uParam0->f_5.f_11)
	{
		case 0:
		case 7:
			uParam0->f_5.f_27 = { 0.0377f, 0.8535f, 0.6971f };
			uParam0->f_5.f_26 = 45f;
			uParam0->f_5.f_30 = 43.63401f;
			uParam0->f_5.f_31 = 0.6f;
			break;
		case 1:
			uParam0->f_5.f_27 = { 0.0377f, 0.8035f, 0.6971f };
			uParam0->f_5.f_26 = 45f;
			uParam0->f_5.f_30 = 43.43401f;
			uParam0->f_5.f_31 = 0.6f;
			break;
		case 3:
			uParam0->f_5.f_27 = { 0.0377f, 0.8035f, 0.6971f };
			uParam0->f_5.f_26 = 45f;
			uParam0->f_5.f_30 = 43.43401f;
			uParam0->f_5.f_31 = 0.6f;
			break;
		case 2:
			uParam0->f_5.f_27 = { 0.0377f, 0.8035f, 0.6971f };
			uParam0->f_5.f_26 = 40f;
			uParam0->f_5.f_30 = 43.43401f;
			uParam0->f_5.f_31 = 0.6f;
			break;
		case 4:
			uParam0->f_5.f_27 = { 0.0377f, 0.8035f, 0.6971f };
			uParam0->f_5.f_26 = 45f;
			uParam0->f_5.f_30 = 43.43401f;
			uParam0->f_5.f_31 = 0.6f;
			break;
		case 5:
			uParam0->f_5.f_27 = { 0.0377f, 0.8035f, 0.6971f };
			uParam0->f_5.f_26 = 30f;
			uParam0->f_5.f_30 = 43.43401f;
			uParam0->f_5.f_31 = 0.6f;
			break;
		case 6:
			uParam0->f_5.f_27 = { 0.0377f, 0.8035f, 0.6971f };
			uParam0->f_5.f_26 = 45f;
			uParam0->f_5.f_30 = 43.43401f;
			uParam0->f_5.f_31 = 0.6f;
			break;
	}
}

void func_980(var uParam0)//Position - 0x61E6F
{
	uParam0->f_5.f_31 = 0.25f;
	switch (uParam0->f_5.f_11)
	{
		case 0:
		case 7:
			uParam0->f_5.f_27 = { 0.076f, 1.6244f, -0.0675f };
			uParam0->f_5.f_26 = 45f;
			uParam0->f_5.f_30 = 43.43401f;
			uParam0->f_5.f_31 = -0.5f;
			break;
		case 1:
			uParam0->f_5.f_27 = { 0.076f, 1.6244f, -0.0675f };
			uParam0->f_5.f_26 = 45f;
			uParam0->f_5.f_30 = 43.43401f;
			uParam0->f_5.f_31 = -0.5f;
			break;
		case 3:
			uParam0->f_5.f_27 = { 0.076f, 1.6244f, -0.0675f };
			uParam0->f_5.f_26 = 45f;
			uParam0->f_5.f_30 = 43.43401f;
			uParam0->f_5.f_31 = -0.5f;
			break;
		case 2:
			uParam0->f_5.f_27 = { 0.076f, 1.6244f, -0.0675f };
			uParam0->f_5.f_26 = 35f;
			uParam0->f_5.f_30 = 43.43401f;
			uParam0->f_5.f_31 = -0.5f;
			break;
		case 4:
			uParam0->f_5.f_27 = { 0.076f, 1.6244f, -0.0675f };
			uParam0->f_5.f_26 = 45f;
			uParam0->f_5.f_30 = 43.43401f;
			uParam0->f_5.f_31 = -0.5f;
			break;
		case 5:
			uParam0->f_5.f_27 = { 0.076f, 1.6244f, -0.0675f };
			uParam0->f_5.f_26 = 28f;
			uParam0->f_5.f_30 = 43.43401f;
			uParam0->f_5.f_31 = -0.5f;
			break;
		case 6:
			uParam0->f_5.f_27 = { 0.076f, 1.6244f, -0.0675f };
			uParam0->f_5.f_26 = 45f;
			uParam0->f_5.f_30 = 43.43401f;
			uParam0->f_5.f_31 = -0.5f;
			break;
	}
}

void func_981(var uParam0)//Position - 0x62101
{
	switch (uParam0->f_5.f_11)
	{
		case 0:
		case 7:
			uParam0->f_5.f_27 = { 0.077f, 1.6468f, -0.5692f };
			uParam0->f_5.f_26 = 45f;
			uParam0->f_5.f_30 = 43.43401f;
			uParam0->f_5.f_31 = -0.5f;
			break;
		case 1:
			uParam0->f_5.f_27 = { 0.076f, 1.6244f, -0.0675f };
			uParam0->f_5.f_26 = 35f;
			uParam0->f_5.f_30 = 43.43401f;
			uParam0->f_5.f_31 = -0.5f;
			break;
		case 3:
			uParam0->f_5.f_27 = { -0.2476f, 1.4693f, -0.5625f };
			uParam0->f_5.f_26 = 45f;
			uParam0->f_5.f_30 = 47.679413f;
			uParam0->f_5.f_31 = -0.5f;
			break;
		case 2:
			uParam0->f_5.f_27 = { 0.076f, 1.6244f, -0.0675f };
			uParam0->f_5.f_26 = 35f;
			uParam0->f_5.f_30 = 43.43401f;
			uParam0->f_5.f_31 = -0.5f;
			break;
		case 4:
			uParam0->f_5.f_27 = { 0.077f, 1.6468f, -0.5692f };
			uParam0->f_5.f_26 = 45f;
			uParam0->f_5.f_30 = 43.43401f;
			uParam0->f_5.f_31 = -0.5f;
			break;
		case 5:
			uParam0->f_5.f_27 = { 0.5624f, 1.162f, -0.5542f };
			uParam0->f_5.f_26 = 28f;
			uParam0->f_5.f_30 = 52.507298f;
			uParam0->f_5.f_31 = -0.5f;
			break;
		case 6:
			uParam0->f_5.f_27 = { 0.077f, 1.6468f, -0.5692f };
			uParam0->f_5.f_26 = 45f;
			uParam0->f_5.f_30 = 43.43401f;
			uParam0->f_5.f_31 = -0.5f;
			break;
	}
}

void func_982(var uParam0)//Position - 0x624C4
{
	switch (uParam0->f_5.f_11)
	{
		case 0:
		case 7:
			uParam0->f_5.f_27 = { 0.0784f, 1.6781f, 0.2271f };
			uParam0->f_5.f_26 = 45f;
			uParam0->f_5.f_30 = 43.43401f;
			uParam0->f_5.f_31 = 0.25f;
			break;
		case 1:
			uParam0->f_5.f_27 = { 0.0784f, 1.6781f, 0.2271f };
			uParam0->f_5.f_26 = 45f;
			uParam0->f_5.f_30 = 43.43401f;
			uParam0->f_5.f_31 = 0.25f;
			break;
		case 3:
			uParam0->f_5.f_27 = { 0.0784f, 1.6781f, 0.2271f };
			uParam0->f_5.f_26 = 45f;
			uParam0->f_5.f_30 = 43.43401f;
			uParam0->f_5.f_31 = 0.25f;
			break;
		case 2:
			uParam0->f_5.f_27 = { 0.0784f, 1.6781f, 0.2271f };
			uParam0->f_5.f_26 = 40f;
			uParam0->f_5.f_30 = 43.43401f;
			uParam0->f_5.f_31 = 0.25f;
			break;
		case 4:
			uParam0->f_5.f_27 = { 0.0784f, 1.6781f, 0.2271f };
			uParam0->f_5.f_26 = 45f;
			uParam0->f_5.f_30 = 43.43401f;
			uParam0->f_5.f_31 = 0.25f;
			break;
		case 5:
			uParam0->f_5.f_27 = { 0.0784f, 1.6781f, 0.2271f };
			uParam0->f_5.f_26 = 28f;
			uParam0->f_5.f_30 = 43.43401f;
			uParam0->f_5.f_31 = 0.25f;
			break;
		case 6:
			uParam0->f_5.f_27 = { 0.0784f, 1.6781f, 0.2271f };
			uParam0->f_5.f_26 = 45f;
			uParam0->f_5.f_30 = 43.43401f;
			uParam0->f_5.f_31 = 0.25f;
			break;
	}
}

bool func_983()//Position - 0x18EF8B
{
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 984.617f, 60.0772f, 116.9142f, true) < 2f;
}

bool func_984()//Position - 0x18EFB2
{
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 976.412f, 64.7793f, 116.9141f, true) < 2f;
}

int func_985(var uParam0)//Position - 0x190314
{
	STREAMING::REQUEST_MODEL(uParam0->f_38);
	STREAMING::REQUEST_MODEL(uParam0->f_39);
	if (STREAMING::HAS_MODEL_LOADED(uParam0->f_38) && STREAMING::HAS_MODEL_LOADED(uParam0->f_39))
	{
		return 1;
	}
	return 0;
}

void func_986(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4)//Position - 0x195536
{
	Global_23150.f_8778 = iParam4;
	Global_23150.f_8774 = uParam0;
	Global_23150.f_8775 = uParam1;
	Global_23150.f_8776 = uParam2;
	Global_23150.f_8777 = iParam3;
}

int func_987()//Position - 0x195F6B
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_109))
	{
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(sLocal_109, false);
		iLocal_110 = 1;
		return GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED(sLocal_109);
	}
	return 1;
}

int func_988(var uParam0)//Position - 0x197297
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("armenian1")) > 0)
	{
		uParam0->f_201 = 1;
		uParam0->f_202 = 0;
		uParam0->f_203 = { 0f, 0f, 0f };
	}
	else if (uParam0->f_201)
	{
		if (__LIB_0__::func_78(uParam0->f_203, 0f, 0f, 0f, 0))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				uParam0->f_203 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
			}
		}
		if (Global_78579)
		{
			uParam0->f_202 = 1;
		}
		else if (uParam0->f_202)
		{
			if (ENTITY::IS_ENTITY_IN_AREA(PLAYER::PLAYER_PED_ID(), uParam0->f_203 - Vector(3f, 0.75f, 0.75f), uParam0->f_203 + Vector(3f, 0.75f, 0.75f), false, true, 0))
			{
				return 1;
			}
			else
			{
				uParam0->f_201 = 0;
			}
		}
	}
	return 0;
}

int func_989(int iParam0, int iParam1)//Position - 0x1CC82A
{
	int iVar0;
	if (iParam0 == 153)
	{
		if ((((((((((((((((((__LIB_0__::func_137(110, -1) || __LIB_0__::func_137(111, -1)) || __LIB_0__::func_137(112, -1)) || __LIB_0__::func_137(25022, -1)) || __LIB_0__::func_137(25023, -1)) || __LIB_0__::func_137(25024, -1)) || __LIB_0__::func_137(25025, -1)) || __LIB_0__::func_137(25026, -1)) || __LIB_0__::func_137(25027, -1)) || __LIB_0__::func_137(25028, -1)) || __LIB_0__::func_137(25019, -1)) || __LIB_0__::func_137(25029, -1)) || __LIB_0__::func_137(25021, -1)) || __LIB_0__::func_137(25018, -1)) || __LIB_0__::func_137(25020, -1)) || __LIB_0__::func_137(25030, -1)) || __LIB_0__::func_137(25031, -1)) || __LIB_0__::func_137(32307, -1)) || __LIB_0__::func_137(32308, -1))
		{
			iVar0 = 1;
		}
	}
	if (iParam1 == joaat("MP_M_Freemode_01"))
	{
		switch (iParam0)
		{
			case 5:
			case 7:
			case 8:
			case 10:
			case 11:
			case 12:
			case 13:
			case 14:
			case 15:
			case 16:
			case 17:
			case 23:
			case 25:
			case 26:
			case 27:
			case 28:
			case 29:
			case 30:
			case 31:
			case 34:
			case 35:
			case 36:
			case 37:
			case 41:
			case 44:
			case 46:
			case 47:
			case 48:
			case 49:
			case 52:
			case 53:
			case 54:
			case 55:
			case 58:
			case 59:
			case 62:
			case 63:
			case 64:
			case 65:
			case 66:
			case 68:
			case 69:
			case 70:
			case 71:
			case 74:
			case 75:
			case 76:
			case 77:
			case 78:
			case 80:
			case 81:
			case 82:
			case 83:
			case 84:
			case 85:
			case 86:
			case 89:
			case 88:
			case 91:
			case 92:
			case 98:
			case 95:
			case 113:
			case 114:
			case 115:
			case 116:
			case 117:
			case 118:
			case 119:
			case 120:
			case 121:
			case 122:
			case 123:
			case 124:
			case 125:
			case 126:
			case 127:
			case 128:
			case 129:
			case 130:
			case 131:
			case 132:
			case 133:
			case 135:
			case 136:
			case 137:
			case 138:
			case 139:
			case 140:
			case 141:
			case 142:
			case 143:
			case 144:
			case 145:
			case 146:
			case 147:
			case 148:
			case 149:
			case 150:
			case 151:
			case 152:
			case 158:
			case 159:
			case 160:
			case 166:
			case 161:
			case 167:
			case 168:
			case 169:
			case 170:
			case 171:
			case 172:
			case 174:
			case 175:
			case 179:
			case 181:
			case 182:
			case 183:
			case 184:
			case 188:
			case 189:
			case 190:
			case 191:
			case 192:
			case 193:
			case 195:
			case 196:
			case 197:
			case 198:
			case 199:
			case 200:
			case 201:
			case 202:
			case 203:
			case 204:
			case 205:
			case 206:
			case 207:
			case 165:
			case 209:
			case 208:
			case 210:
			case 213:
			case 214:
			case 215:
			case 217:
			case 218:
			case 219:
			case 220:
			case 222:
			case 223:
			case 224:
			case 226:
			case 227:
			case 228:
			case 229:
			case 230:
			case 231:
			case 232:
			case 234:
			case 235:
			case 236:
			case 237:
			case 238:
			case 239:
				return 1;
				break;
			case 177:
			case 178:
				if (Global_262145.f_13393 /* Tunable: TURN_ON_VALENTINE_2016_CLOTHING */)
				{
					return 1;
				}
				break;
			case 153:
				if (!Global_262145.f_9396 /* Tunable: DISABLE_CHRISTMAS_CLOTHING */ || iVar0)
				{
					return 1;
				}
				break;
			case 154:
			case 155:
			case 156:
			case 157:
				if (!Global_262145.f_9396 /* Tunable: DISABLE_CHRISTMAS_CLOTHING */)
				{
					return 1;
				}
				break;
			case 176:
				if (Global_262145.f_12709 /* Tunable: XMAS2015_COSTUME */)
				{
					return 1;
				}
				break;
			case 211:
				if (Global_262145.f_19302 /* Tunable: ENABLE_2016_OUTFITS */)
				{
					return 1;
				}
				break;
			case 212:
				return 1;
				break;
			case 67:
			case 73:
			case 216:
			case 221:
				return 1;
				break;
		}
		switch (iParam0)
		{
			case 247:
			case 248:
			case 249:
			case 250:
			case 251:
			case 252:
			case 253:
			case 254:
			case 255:
			case 163:
			case 164:
			case 240:
			case 241:
			case 242:
			case 243:
			case 162:
			case 256:
			case 257:
			case 246:
			case 245:
			case 244:
			case 258:
			case 259:
			case 260:
			case 261:
			case 262:
			case 265:
			case 266:
			case 267:
			case 268:
			case 269:
			case 271:
			case 270:
				return 1;
				break;
		}
	}
	else if (iParam1 == joaat("MP_F_Freemode_01"))
	{
		switch (iParam0)
		{
			case 5:
			case 7:
			case 8:
			case 9:
			case 10:
			case 11:
			case 12:
			case 13:
			case 14:
			case 16:
			case 17:
			case 19:
			case 20:
			case 21:
			case 22:
			case 23:
			case 27:
			case 25:
			case 26:
			case 28:
			case 30:
			case 31:
			case 34:
			case 36:
			case 37:
			case 39:
			case 40:
			case 41:
			case 43:
			case 42:
			case 44:
			case 45:
			case 46:
			case 47:
			case 48:
			case 49:
			case 54:
			case 55:
			case 57:
			case 59:
			case 60:
			case 58:
			case 52:
			case 62:
			case 63:
			case 64:
			case 65:
			case 66:
			case 68:
			case 67:
			case 70:
			case 71:
			case 72:
			case 73:
			case 75:
			case 76:
			case 77:
			case 78:
			case 80:
			case 81:
			case 82:
			case 83:
			case 84:
			case 85:
			case 86:
			case 89:
			case 90:
			case 91:
			case 92:
			case 93:
			case 94:
			case 95:
			case 98:
			case 88:
			case 111:
			case 112:
			case 113:
			case 114:
			case 115:
			case 116:
			case 117:
			case 118:
			case 119:
			case 120:
			case 121:
			case 122:
			case 123:
			case 103:
			case 124:
			case 125:
			case 126:
			case 127:
			case 128:
			case 129:
			case 130:
			case 131:
			case 132:
			case 133:
			case 135:
			case 136:
			case 137:
			case 138:
			case 139:
			case 140:
			case 141:
			case 142:
			case 143:
			case 144:
			case 145:
			case 146:
			case 147:
			case 148:
			case 149:
			case 150:
			case 151:
			case 152:
			case 158:
			case 159:
			case 160:
			case 161:
			case 165:
			case 166:
			case 168:
			case 169:
			case 170:
			case 171:
			case 172:
			case 173:
			case 167:
			case 174:
			case 175:
			case 185:
			case 180:
			case 186:
			case 187:
			case 181:
			case 182:
			case 183:
			case 184:
			case 188:
			case 189:
			case 190:
			case 191:
			case 192:
			case 193:
			case 194:
			case 197:
			case 198:
			case 199:
			case 200:
			case 201:
			case 202:
			case 203:
			case 204:
			case 205:
			case 206:
			case 207:
			case 74:
			case 209:
			case 195:
			case 208:
			case 210:
			case 69:
			case 213:
			case 214:
			case 215:
			case 216:
			case 217:
			case 218:
			case 219:
			case 221:
			case 222:
			case 223:
			case 224:
			case 225:
			case 226:
			case 227:
			case 228:
			case 229:
			case 230:
				return 1;
				break;
			case 177:
			case 178:
				if (Global_262145.f_13393 /* Tunable: TURN_ON_VALENTINE_2016_CLOTHING */)
				{
					return 1;
				}
				break;
			case 153:
				if (!Global_262145.f_9396 /* Tunable: DISABLE_CHRISTMAS_CLOTHING */ || iVar0)
				{
					return 1;
				}
				break;
			case 154:
			case 155:
			case 156:
			case 157:
				if (!Global_262145.f_9396 /* Tunable: DISABLE_CHRISTMAS_CLOTHING */)
				{
					return 1;
				}
				break;
			case 176:
				if (Global_262145.f_12709 /* Tunable: XMAS2015_COSTUME */)
				{
					return 1;
				}
				break;
			case 211:
				if (Global_262145.f_19302 /* Tunable: ENABLE_2016_OUTFITS */)
				{
					return 1;
				}
				break;
			case 212:
				return 1;
				break;
		}
		switch (iParam0)
		{
			case 231:
			case 232:
			case 233:
			case 234:
			case 235:
			case 236:
			case 237:
			case 238:
			case 239:
			case 247:
			case 248:
			case 249:
			case 250:
			case 251:
			case 252:
			case 253:
			case 254:
			case 255:
			case 163:
			case 164:
			case 240:
			case 241:
			case 242:
			case 243:
			case 162:
			case 256:
			case 257:
			case 246:
			case 245:
			case 244:
			case 258:
			case 259:
			case 260:
			case 261:
			case 262:
			case 265:
			case 266:
			case 267:
			case 268:
			case 269:
			case 271:
			case 270:
			case 272:
				return 1;
				break;
			}
	}
	return 0;
}

void func_990(var uParam0)//Position - 0x1CD5AF
{
	if (uParam0->f_5)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (NETWORK::IS_TIME_LESS_THAN(NETWORK::GET_NETWORK_TIME(), NETWORK::GET_TIME_OFFSET(uParam0->f_4, 1000)))
			{
				PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/);
			}
			else
			{
				uParam0->f_5 = 0;
			}
		}
		else if ((MISC::GET_GAME_TIMER() - uParam0->f_3) < 1000)
		{
			PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/);
		}
		else
		{
			uParam0->f_5 = 0;
		}
	}
}

void func_991(var uParam0)//Position - 0x1CDA64
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (uParam0->f_228)
			{
				if (uParam0->f_5.f_7 != 2 || uParam0->f_46.f_9 > 2)
				{
					if (PED::HAS_PED_HEAD_BLEND_FINISHED(PLAYER::PLAYER_PED_ID()))
					{
						if (PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(PLAYER::PLAYER_PED_ID()))
						{
							PED::FINALIZE_HEAD_BLEND(PLAYER::PLAYER_PED_ID());
							uParam0->f_228 = 0;
						}
					}
				}
			}
			else if (uParam0->f_5.f_7 == 2 && uParam0->f_46.f_9 <= 2)
			{
				uParam0->f_228 = 1;
			}
		}
	}
	else
	{
		uParam0->f_228 = 0;
	}
}

void func_992(var uParam0)//Position - 0x56633
{
	int iVar0;
	bool bVar1;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = 0;
		bVar1 = __LIB_16__::func_546(PLAYER::PLAYER_PED_ID(), &iVar0, -99);
		if (uParam0->f_236 != bVar1)
		{
			uParam0->f_236 = bVar1;
			uParam0->f_237 = uParam0->f_46;
			Stack.Push(&Global_4537616);
			Stack.Push(uParam0->f_46.f_10);
			Stack.Push(uParam0->f_46.f_11);
			Stack.Push(&(uParam0->f_96));
			Stack.Push(&(uParam0->f_104));
			Call_Loc(uParam0->f_102);
			uParam0->f_46 = -1;
			__LIB_33__::func_406(&Global_4537616, uParam0->f_46.f_10, &(uParam0->f_46));
			uParam0->f_114 = 1;
		}
	}
}

int func_993(int iParam0)//Position - 0x192A4C
{
	int iVar0;
	if (((!__LIB_16__::func_454(iParam0) && !__LIB_16__::func_446(iParam0)) && iParam0 != 3) && iParam0 != 4)
	{
		return iParam0;
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return iParam0;
	}
	iVar0 = -1;
	if (__LIB_5__::func_203(PLAYER::PLAYER_ID()))
	{
		switch (iParam0)
		{
			case 259:
				return 1;
				break;
			case 262:
				return 2;
				break;
			case 231:
				return 3;
				break;
			case 230:
				return 4;
				break;
			case 260:
				return 5;
				break;
			case 201:
				return 6;
				break;
			}
	}
	switch (iParam0)
	{
		case 256:
			return 0;
			break;
		case 235:
			return 1;
			break;
		case 7:
			return 2;
			break;
		case 195:
			return 3;
			break;
		case 8:
			return 4;
			break;
		case 9:
			return 5;
			break;
		case 203:
			return 6;
			break;
		case 204:
			return 7;
			break;
		case 201:
			return 8;
			break;
		case 193:
			return 9;
			break;
		case 182:
			return 10;
			break;
		case 222:
			return 11;
			break;
		case 167:
			return 12;
			break;
		case 230:
			return 13;
			break;
		case 249:
			return 14;
			break;
		case 206:
			return 15;
			break;
		case 250:
			return 16;
			break;
		case 260:
			return 17;
			break;
		case 10:
			return 18;
			break;
		case 168:
			return 19;
			break;
		case 210:
			return 20;
			break;
		case 175:
			return 21;
			break;
		case 189:
			return 22;
			break;
		case 153:
			return 23;
			break;
		case 122:
			return 24;
			break;
		case 11:
			return 25;
			break;
		case 248:
			return 27;
			break;
		case 259:
			return 28;
			break;
		case 220:
			return 29;
			break;
		case 213:
			return 30;
			break;
		case 205:
			return 31;
			break;
		case 184:
			return 32;
			break;
		case 173:
			return 33;
			break;
		case 171:
			return 34;
			break;
		case 169:
			return 35;
			break;
		case 12:
			return 36;
			break;
		case 232:
			return 37;
			break;
		case 229:
			return 38;
			break;
		case 215:
			return 39;
			break;
		case 241:
			return 40;
			break;
		case 183:
			return 41;
			break;
		case 194:
			return 42;
			break;
		case 13:
			return 43;
			break;
		case 231:
			return 44;
			break;
		case 252:
			return 45;
			break;
		case 262:
			return 46;
			break;
		case 202:
			return 47;
			break;
		case 170:
			return 48;
			break;
		case 181:
			return 49;
			break;
		case 172:
			return 50;
			break;
		case 251:
			return 51;
			break;
		case 14:
			return 52;
			break;
		case 233:
			return 53;
			break;
		case 15:
			return 54;
			break;
		case 16:
			return 55;
			break;
		case 192:
			return 56;
			break;
		case 17:
			return 57;
			break;
		case 19:
			return 58;
			break;
		case 20:
			return 59;
			break;
		case 21:
			return 60;
			break;
		case 22:
			return 61;
			break;
		case 187:
			return 62;
			break;
		case 23:
			return 63;
			break;
		case 27:
			return 64;
			break;
		case 25:
			return 65;
			break;
		case 162:
			return 66;
			break;
		case 26:
			return 67;
			break;
		case 101:
			return 68;
			break;
		case 103:
			return 69;
			break;
		case 272:
			return 70;
			break;
		case 129:
			return 71;
			break;
		case 136:
			return 72;
			break;
		case 158:
			return 73;
			break;
		case 138:
			return 74;
			break;
		case 3:
			return 75;
			break;
		case 4:
			return 76;
			break;
	}
	switch (iParam0)
	{
		case 257:
			return 0;
			break;
		case 61:
			return 1;
			break;
		case 62:
			return 2;
			break;
		case 63:
			return 3;
			break;
		case 64:
			return 4;
			break;
		case 65:
			return 5;
			break;
		case 66:
			return 6;
			break;
		case 67:
			return 7;
			break;
		case 68:
			return 8;
			break;
		case 69:
			return 9;
			break;
		case 70:
			return 10;
			break;
		case 71:
			return 11;
			break;
		case 72:
			return 12;
			break;
		case 73:
			return 13;
			break;
		case 74:
			return 14;
			break;
		case 75:
			return 15;
			break;
		case 76:
			return 16;
			break;
		case 77:
			return 17;
			break;
		case 123:
		case 126:
			return 19;
			break;
		case 128:
			return 20;
			break;
		case 156:
			return 21;
			break;
		case 190:
			return 22;
			break;
		case 207:
			return 23;
			break;
		case 217:
			return 24;
			break;
		case 218:
			return 25;
			break;
		case 224:
			return 26;
			break;
		case 239:
			return 27;
			break;
		case 255:
			return 28;
			break;
		case 240:
			return 29;
			break;
		case 266:
			return 30;
			break;
		case 267:
			return 31;
			break;
	}
	if (iVar0 == -1)
	{
	}
	return iVar0;
}

int func_994(var uParam0, var uParam1)//Position - 0x19795C
{
	struct<41> Var0;
	Var0.f_12 = 2;
	Var0 = { __LIB_40__::func_965(*uParam1) };
	Var0.f_11 = *uParam1;
	switch (*uParam1)
	{
		case 0:
			Var0.f_8 = 0;
			Var0.f_9 = 0;
			Var0.f_34 = { -811.8961f, 175.2218f, 76.7453f };
			Var0.f_37 = 116.4959f;
			Var0.f_3 = { -811.4418f, 179.3454f, 75.7407f };
			Var0.f_7 = 0;
			Var0.f_6 = 0;
			Var0.f_12[0 /*3*/] = { -812.4563f, 176.5301f, 78.00086f };
			Var0.f_12[1 /*3*/] = { -811.3436f, 173.68346f, 75.61574f };
			Var0.f_19 = 2.125f;
			Var0.f_40 = 1;
			Var0.f_38 = joaat("v_lirg_michael_ward_main");
			Var0.f_39 = joaat("v_lirg_michael_ward_face");
			break;
		case 1:
			Var0.f_8 = 0;
			Var0.f_9 = 1;
			Var0.f_34 = { 1969.11f, 3814.7168f, 33.428f };
			Var0.f_37 = 323.1107f;
			Var0.f_3 = { 1974.291f, 3819.0266f, 32.4363f };
			Var0.f_7 = 0;
			Var0.f_6 = 0;
			Var0.f_12[0 /*3*/] = { 1969.7008f, 3814.0334f, 32.592842f };
			Var0.f_12[1 /*3*/] = { 1968.7482f, 3815.676f, 34.553722f };
			Var0.f_19 = 1f;
			Var0.f_40 = 1;
			Var0.f_38 = joaat("v_lirg_trevtrail_ward_main");
			Var0.f_39 = joaat("v_lirg_trevtrail_ward_face");
			break;
		case 2:
			Var0.f_8 = 2;
			Var0.f_9 = 2;
			Var0.f_34 = { 1969.11f, 3814.7168f, 33.428f };
			Var0.f_37 = 323.1107f;
			Var0.f_3 = { 1974.291f, 3819.0266f, 32.4363f };
			Var0.f_7 = 0;
			Var0.f_6 = 0;
			Var0.f_12[0 /*3*/] = { 1969.7008f, 3814.0334f, 32.592842f };
			Var0.f_12[1 /*3*/] = { 1968.7482f, 3815.676f, 34.553722f };
			Var0.f_19 = 1f;
			Var0.f_40 = 1;
			Var0.f_38 = joaat("v_lirg_trevtrail_ward_main");
			Var0.f_39 = joaat("v_lirg_trevtrail_ward_face");
			break;
		case 3:
			Var0.f_8 = 2;
			Var0.f_9 = 3;
			Var0.f_34 = { -1150.4913f, -1513.347f, 10.6394f };
			Var0.f_37 = 245.9826f;
			Var0.f_3 = { -1157.02f, -1518.3557f, 9.6327f };
			Var0.f_7 = 0;
			Var0.f_6 = 0;
			Var0.f_12[0 /*3*/] = { -1150.4495f, -1514.14f, 9.634556f };
			Var0.f_12[1 /*3*/] = { -1151.558f, -1512.4274f, 11.759556f };
			Var0.f_19 = 1f;
			Var0.f_40 = 1;
			Var0.f_38 = joaat("v_lirg_trevapt_ward_main");
			Var0.f_39 = joaat("v_lirg_trevapt_ward_face");
			break;
		case 4:
			Var0.f_8 = 2;
			Var0.f_9 = 4;
			Var0.f_34 = { 105.3011f, -1303.3383f, 28.7688f };
			Var0.f_37 = 306.5809f;
			Var0.f_3 = { 100.6848f, -1294.5472f, 29.2668f };
			Var0.f_7 = 0;
			Var0.f_6 = 0;
			Var0.f_12[0 /*3*/] = { 105.68353f, -1304.5522f, 27.581297f };
			Var0.f_12[1 /*3*/] = { 104.31466f, -1302.3434f, 30.143797f };
			Var0.f_19 = 2.3125f;
			Var0.f_40 = 1;
			Var0.f_38 = joaat("v_lirg_trevstrip_ward_main");
			Var0.f_39 = joaat("v_lirg_trevstrip_ward_face");
			break;
		case 5:
			Var0.f_8 = 1;
			Var0.f_9 = 5;
			Var0.f_34 = { -17.9973f, -1438.911f, 31.1018f };
			Var0.f_37 = 200.2377f;
			Var0.f_3 = { -13.5733f, -1445.6842f, 29.6473f };
			Var0.f_7 = 0;
			Var0.f_6 = 0;
			Var0.f_12[0 /*3*/] = { -18.429632f, -1439.6272f, 30.101538f };
			Var0.f_12[1 /*3*/] = { -18.462055f, -1438.0292f, 32.345192f };
			Var0.f_19 = 1f;
			Var0.f_40 = 1;
			Var0.f_38 = joaat("v_lirg_frankaunt_ward_main");
			Var0.f_39 = joaat("v_lirg_frankaunt_ward_face");
			break;
		case 6:
			Var0.f_8 = 1;
			Var0.f_9 = 6;
			Var0.f_34 = { 9.0157f, 528.7267f, 170.6347f };
			Var0.f_37 = 120.8883f;
			Var0.f_3 = { 6.5471f, 536.3779f, 169.6173f };
			Var0.f_7 = 0;
			Var0.f_6 = 0;
			Var0.f_12[0 /*3*/] = { 8.094527f, 530.6814f, 169.61716f };
			Var0.f_12[1 /*3*/] = { 9.471528f, 527.5735f, 171.61716f };
			Var0.f_19 = 2.8125f;
			Var0.f_40 = 1;
			Var0.f_38 = joaat("v_lirg_frankhill_ward_main");
			Var0.f_39 = joaat("v_lirg_frankhill_ward_face");
			break;
		case 7:
			Var0.f_8 = 145;
			Var0.f_9 = 10;
			Var0.f_34 = { uParam1->f_1 };
			Var0.f_37 = uParam1->f_4;
			Var0.f_7 = 0;
			Var0.f_6 = 0;
			Var0.f_40 = 1;
			if (__LIB_6__::func_846(PLAYER::PLAYER_ID()))
			{
				Var0.f_38 = joaat("sm_prop_smug_hangar_wardrobe_lrig");
			}
			else
			{
				Var0.f_38 = joaat("v_lirg_mphigh_ward_main");
			}
			Var0.f_39 = joaat("v_lirg_mphigh_ward_face");
			break;
	}
	uParam0->f_5 = { Var0 };
	return 1;
}

void func_995(int iParam0, bool bParam1, int iParam2)//Position - 0x5C01E
{
	int iVar0;
	int iVar1;
	iVar0 = __LIB_16__::func_646(iParam0);
	iVar1 = iParam0;
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
		__LIB_1__::func_354(__LIB_16__::func_396(iParam0), iVar0, iParam2, 1, 0);
	}
}

int func_996(int iParam0, var uParam1, var uParam2)//Position - 0x5C550
{
	int iVar0;
	iVar0 = __LIB_33__::func_387(iParam0);
	if (iVar0 != -99)
	{
		if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("MP_M_Freemode_01") && !__LIB_0__::func_451(ENTITY::GET_ENTITY_MODEL(iParam0), __LIB_0__::func_350(iParam0, 4), iVar0))
		{
			iVar0 = 236;
		}
		Stack.Push(iParam0);
		Stack.Push(11);
		Stack.Push(iVar0);
		Stack.Push(0);
		Stack.Push(-1);
		Stack.Push(0);
		Stack.Push(uParam2);
		Stack.Push(0);
		Stack.Push(-1);
		Stack.Push(-1);
		Stack.Push(-1);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam1);
	}
	return iVar0;
}

void func_997(var uParam0, int iParam1)//Position - 0x60BD7
{
	if (uParam0->f_5.f_11 == 7)
	{
		if ((((((((((((__LIB_7__::func_685(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_32) || __LIB_4__::func_952(PLAYER::PLAYER_ID())) || __LIB_40__::func_968(PLAYER::PLAYER_ID())) || __LIB_4__::func_955(PLAYER::PLAYER_ID())) || __LIB_4__::func_946(PLAYER::PLAYER_ID(), 0)) || __LIB_4__::func_947(PLAYER::PLAYER_ID())) || __LIB_4__::func_914(PLAYER::PLAYER_ID())) || __LIB_4__::func_899(PLAYER::PLAYER_ID())) || __LIB_4__::func_900(PLAYER::PLAYER_ID())) || __LIB_5__::func_409(PLAYER::PLAYER_ID())) || __LIB_7__::func_690(PLAYER::PLAYER_ID())) || __LIB_5__::func_186(PLAYER::PLAYER_ID())) || __LIB_5__::func_188(PLAYER::PLAYER_ID()))
		{
			return;
		}
	}
	if (iParam1 == 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_231))
		{
			OBJECT::DELETE_OBJECT(&(uParam0->f_231));
		}
		uParam0->f_231 = OBJECT::CREATE_OBJECT_NO_OFFSET(uParam0->f_5.f_38, uParam0->f_5.f_34 + Vector(-1f, 0f, 0f), false, false, false);
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_231))
		{
			ENTITY::SET_ENTITY_HEADING(uParam0->f_231, uParam0->f_5.f_37);
			ENTITY::SET_ENTITY_COLLISION(uParam0->f_231, false, false);
			ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_231, true);
		}
	}
	else if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_231))
	{
		OBJECT::DELETE_OBJECT(&(uParam0->f_231));
	}
}

float func_998(int iParam0, var uParam1)//Position - 0x1CDE81
{
	float fVar0;
	struct<3> Var1;
	int iVar2;
	int iVar3;
	float fVar4;
	fVar0 = 1000f;
	iVar3 = 0;
	while (iVar3 < 3)
	{
		iVar2 = iVar3;
		if (__LIB_4__::func_634(iVar2, iParam0) == 4 || __LIB_4__::func_634(iVar2, iParam0) == 1)
		{
			__LIB_0__::func_667(44, iVar2, &Var1, 0, 0);
			fVar4 = MISC::GET_DISTANCE_BETWEEN_COORDS(Var1, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), true);
			if (fVar4 < fVar0)
			{
				fVar0 = fVar4;
				*uParam1 = iVar2;
			}
		}
		iVar3++;
	}
	return fVar0;
}

void func_999(var uParam0, int iParam1)//Position - 0x28A7
{
	if (uParam0->f_5.f_11 == 7)
	{
		if ((((((((((((__LIB_7__::func_685(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_32) || __LIB_4__::func_952(PLAYER::PLAYER_ID())) || __LIB_40__::func_968(PLAYER::PLAYER_ID())) || __LIB_4__::func_955(PLAYER::PLAYER_ID())) || __LIB_4__::func_946(PLAYER::PLAYER_ID(), 0)) || __LIB_4__::func_947(PLAYER::PLAYER_ID())) || __LIB_4__::func_914(PLAYER::PLAYER_ID())) || __LIB_4__::func_899(PLAYER::PLAYER_ID())) || __LIB_4__::func_900(PLAYER::PLAYER_ID())) || __LIB_5__::func_409(PLAYER::PLAYER_ID())) || __LIB_7__::func_690(PLAYER::PLAYER_ID())) || __LIB_5__::func_186(PLAYER::PLAYER_ID())) || __LIB_5__::func_188(PLAYER::PLAYER_ID()))
		{
			return;
		}
	}
	if (iParam1 == 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_232))
		{
			OBJECT::DELETE_OBJECT(&(uParam0->f_232));
		}
		uParam0->f_232 = OBJECT::CREATE_OBJECT_NO_OFFSET(uParam0->f_5.f_39, uParam0->f_5.f_34 + Vector(-1f, 0f, 0f), false, false, false);
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_232))
		{
			ENTITY::SET_ENTITY_HEADING(uParam0->f_232, uParam0->f_5.f_37);
			ENTITY::SET_ENTITY_COLLISION(uParam0->f_232, false, false);
			ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_232, true);
		}
	}
	else if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_232))
	{
		OBJECT::DELETE_OBJECT(&(uParam0->f_232));
	}
}
