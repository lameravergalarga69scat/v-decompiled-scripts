namespace __LIB_10__ {
	
bool func_0(char* sParam0)//Position - 0x2C34B
{
	bool bVar0;
	bVar0 = CUTSCENE::HAS_THIS_CUTSCENE_LOADED(sParam0);
	if (!Global_78318)
	{
		if (!bVar0)
		{
			Global_78318 = 1;
		}
	}
	return bVar0;
}

void func_1(int iParam0)//Position - 0x7836D
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		Global_113386.f_2363.f_539[iParam0 /*65*/].f_13[iVar0] = 0;
		Global_113386.f_2363.f_539[iParam0 /*65*/][iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		Global_113386.f_2363.f_539[iParam0 /*65*/].f_39[iVar0] = -1;
		Global_113386.f_2363.f_539[iParam0 /*65*/].f_49[iVar0] = -1;
		iVar0++;
	}
	switch (iParam0)
	{
		case 0:
			Global_113386.f_2363.f_539[iParam0 /*65*/].f_59 = 0;
			break;
		case 1:
			Global_113386.f_2363.f_539[1 /*65*/].f_13[3] = 8;
			Global_113386.f_2363.f_539[1 /*65*/].f_13[4] = 8;
			Global_113386.f_2363.f_539[1 /*65*/].f_13[6] = 6;
			Global_113386.f_2363.f_539[1 /*65*/].f_13[8] = 14;
			Global_113386.f_2363.f_539[1 /*65*/].f_13[2] = 0;
			Global_113386.f_2363.f_539[1 /*65*/][2] = 0;
			Global_113386.f_2363.f_539[iParam0 /*65*/].f_59 = 0;
			break;
		case 2:
			Global_113386.f_2363.f_539[2 /*65*/].f_13[3] = 0;
			Global_113386.f_2363.f_539[2 /*65*/].f_13[4] = 23;
			Global_113386.f_2363.f_539[2 /*65*/].f_13[6] = 10;
			Global_113386.f_2363.f_539[iParam0 /*65*/].f_59 = 0;
			break;
	}
	Global_113386.f_2363.f_539[iParam0 /*65*/].f_60 = -99;
	Global_113386.f_2363.f_539[iParam0 /*65*/].f_61 = 2;
	Global_113386.f_2363.f_539[iParam0 /*65*/].f_62 = 0;
	Global_113386.f_2363.f_539[iParam0 /*65*/].f_63 = -99;
	Global_113386.f_2363.f_539[iParam0 /*65*/].f_64 = 1;
	Global_100166[0 /*65*/] = { Global_113386.f_2363.f_539[0 /*65*/] };
	Global_100166[1 /*65*/] = { Global_113386.f_2363.f_539[1 /*65*/] };
	Global_100166[2 /*65*/] = { Global_113386.f_2363.f_539[2 /*65*/] };
}

void func_2(int iParam0, int iParam1)//Position - 0x78597
{
	if (!__LIB_0__::func_317(iParam0))
	{
		return;
	}
	Global_113386.f_2363.f_539.f_2332[iParam0] = iParam1;
}

int func_3(int iParam0)//Position - 0x785BF
{
	if (!__LIB_0__::func_317(iParam0))
	{
		return 0;
	}
	return Global_113386.f_2363.f_539.f_2332[iParam0];
}

int func_4(int iParam0)//Position - 0x78678
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		case 1:
			return 1;
			break;
		case 2:
			return 2;
			break;
	}
	return 0;
}

int func_5(int iParam0)//Position - 0x7B056
{
	if (iParam0 != -1)
	{
		if (Global_32020[iParam0 /*11*/].f_6)
		{
			return 1;
		}
	}
	return 0;
}

int func_6(int iParam0)//Position - 0x7B147
{
	if (iParam0 != -1)
	{
		if (Global_32020[iParam0 /*11*/].f_2)
		{
			return 1;
		}
	}
	return 0;
}

void func_7(int* iParam0)//Position - 0x9106B
{
	if (HUD::DOES_BLIP_EXIST(*iParam0))
	{
		HUD::REMOVE_BLIP(iParam0);
	}
}

void func_8(var uParam0, struct<3> Param1, var uParam2)//Position - 0x915B4
{
	*uParam0 = { Param1 };
	uParam0->f_6 = uParam2;
}

int func_9()//Position - 0x9AABB
{
	if (Global_20266.f_1 == 10 || Global_20266.f_1 == 9)
	{
		return 1;
	}
	return 0;
}

int func_10()//Position - 0x9CADA
{
	int iVar0;
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		return 0;
	}
	if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
	if (!ENTITY::IS_ENTITY_DEAD(iVar0, false))
	{
		return 0;
	}
	AUDIO::SET_VEH_RADIO_STATION(iVar0, "OFF");
	return 1;
}

void func_11(int iParam0, var uParam1, var uParam2)//Position - 0x9D358
{
	switch (iParam0)
	{
		case 65:
			*uParam1 = 20;
			*uParam2 = 22;
			break;
		case 27:
			*uParam1 = 20;
			*uParam2 = 20;
			break;
		default:
			*uParam1 = Global_91229[iParam0 /*34*/].f_14;
			*uParam2 = Global_91229[iParam0 /*34*/].f_13;
			break;
	}
}

int func_12()//Position - 0x77C
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 0;
	}
	if (Local_124.f_0 == 45)
	{
		if (Local_124.f_675 == 18)
		{
			return 1;
		}
	}
	return 0;
}

void func_13()//Position - 0x818
{
	if (BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_197, 4))
	{
		MISC::CLEAR_BIT(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_197), 4);
		MISC::CLEAR_BIT(&uLocal_390, 26);
	}
}

void func_14()//Position - 0x84D
{
	if (!BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_197, 4))
	{
		MISC::SET_BIT(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_197), 4);
		MISC::CLEAR_BIT(&uLocal_390, 26);
	}
}

int func_15(int iParam0, int iParam1)//Position - 0x387A
{
	switch (iParam0)
	{
		case 0:
			if (iParam1 == 0)
			{
				return 6;
			}
			if (iParam1 == 1)
			{
				return 7;
			}
			break;
		case 1:
			if (iParam1 == 0)
			{
				return 0;
			}
			break;
		case 2:
			if (iParam1 == 0)
			{
				return 1;
			}
			break;
		case 3:
			if (iParam1 == 0)
			{
				return 2;
			}
			break;
		case 4:
			if (iParam1 == 0)
			{
				return 3;
			}
			break;
		case 5:
			if (iParam1 == 0)
			{
				return 4;
			}
			break;
		case 6:
			if (iParam1 == 0)
			{
				return 5;
			}
			break;
		case 7:
			if (iParam1 == 0)
			{
				return 8;
			}
			if (iParam1 == 1)
			{
				return 9;
			}
			break;
		case 8:
			if (iParam1 == 0)
			{
				return 10;
			}
			if (iParam1 == 1)
			{
				return 11;
			}
			break;
		case 9:
			if (iParam1 == 0)
			{
				return 12;
			}
			if (iParam1 == 1)
			{
				return 13;
			}
			break;
		case 10:
			if (iParam1 == 0)
			{
				return 14;
			}
			if (iParam1 == 1)
			{
				return 15;
			}
			break;
		case 11:
			if (iParam1 == 0)
			{
				return 16;
			}
			if (iParam1 == 1)
			{
				return 17;
			}
			break;
		case 12:
			if (iParam1 == 0)
			{
				return 18;
			}
			if (iParam1 == 1)
			{
				return 19;
			}
			break;
		case 13:
			if (iParam1 == 0)
			{
				return 20;
			}
			if (iParam1 == 1)
			{
				return 21;
			}
			break;
		case 14:
			if (iParam1 == 0)
			{
				return 22;
			}
			break;
		case 15:
			if (iParam1 == 0)
			{
				return 23;
			}
			break;
		case 16:
			if (iParam1 == 0)
			{
				return 24;
			}
			break;
		case 17:
			if (iParam1 == 0)
			{
				return 25;
			}
			break;
		case 18:
			if (iParam1 == 0)
			{
				return 26;
			}
			if (iParam1 == 1)
			{
				return 27;
			}
			break;
		case 19:
			if (iParam1 == 0)
			{
				return 28;
			}
			if (iParam1 == 1)
			{
				return 29;
			}
			break;
		case 20:
			if (iParam1 == 0)
			{
				return 30;
			}
			if (iParam1 == 1)
			{
				return 31;
			}
			break;
		case 22:
			if (iParam1 == 0)
			{
				return 32;
			}
			break;
		case 23:
			if (iParam1 == 0)
			{
				return 33;
			}
			break;
		case 24:
			if (iParam1 == 0)
			{
				return 34;
			}
			break;
		case 25:
			if (iParam1 == 0)
			{
				return 35;
			}
			break;
		case 26:
			if (iParam1 == 0)
			{
				return 36;
			}
			break;
		case 27:
			if (iParam1 == 0)
			{
				return 37;
			}
			break;
		case 39:
			if (iParam1 == 0)
			{
				return 54;
			}
			break;
		case 40:
			if (iParam1 == 0)
			{
				return 55;
			}
			break;
		case 41:
			if (iParam1 == 0)
			{
				return 56;
			}
			break;
		case 42:
			if (iParam1 == 0)
			{
				return 58;
			}
			if (iParam1 == 1)
			{
				return 57;
			}
			break;
		case 43:
			if (iParam1 == 0)
			{
				return 60;
			}
			if (iParam1 == 1)
			{
				return 59;
			}
			break;
		case 44:
			if (iParam1 == 0)
			{
				return 225;
			}
			break;
		case 28:
			if (iParam1 == 0)
			{
				return 162;
			}
			if (iParam1 == 1)
			{
				return 163;
			}
			break;
		case 29:
			if (iParam1 == 0)
			{
				return 165;
			}
			if (iParam1 == 1)
			{
				return 166;
			}
			break;
		case 30:
			if (iParam1 == 0)
			{
				return 167;
			}
			if (iParam1 == 1)
			{
				return 168;
			}
			break;
		case 31:
			if (iParam1 == 0)
			{
				return 169;
			}
			if (iParam1 == 1)
			{
				return 170;
			}
			break;
		case 32:
			if (iParam1 == 0)
			{
				return 171;
			}
			if (iParam1 == 1)
			{
				return 172;
			}
			break;
		case 33:
			if (iParam1 == 0)
			{
				return 173;
			}
			if (iParam1 == 1)
			{
				return 174;
			}
			break;
		case 34:
			if (iParam1 == 0)
			{
				return 175;
			}
			if (iParam1 == 1)
			{
				return 176;
			}
			break;
		case 35:
			if (iParam1 == 0)
			{
				return 177;
			}
			if (iParam1 == 1)
			{
				return 178;
			}
			break;
		case 36:
			if (iParam1 == 0)
			{
				return 179;
			}
			if (iParam1 == 1)
			{
				return 180;
			}
			break;
		case 37:
			if (iParam1 == 0)
			{
				return 181;
			}
			if (iParam1 == 1)
			{
				return 182;
			}
			break;
		case 38:
			if (iParam1 == 0)
			{
				return 183;
			}
			if (iParam1 == 1)
			{
				return 184;
			}
			break;
	}
	return 226;
}

int func_16(int iParam0, int iParam1)//Position - 0x3D70
{
	switch (iParam0)
	{
		case 0:
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (iParam1 == 0)
				{
					return 183249434;
				}
				else if (iParam1 == 1)
				{
					return 758345384;
				}
			}
			break;
		case 1:
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (iParam1 == 0)
				{
					return 1804701345;
				}
			}
			break;
		case 2:
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (iParam1 == 0)
				{
					return 1403601067;
				}
			}
			break;
		case 3:
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (iParam1 == 0)
				{
					return -2031139496;
				}
			}
			break;
		case 4:
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (iParam1 == 0)
				{
					return 1796834809;
				}
			}
			break;
		case 5:
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (iParam1 == 0)
				{
					return 96153298;
				}
			}
			break;
		case 6:
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (iParam1 == 0)
				{
					return -281080954;
				}
			}
			break;
		case 7:
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (iParam1 == 0)
				{
					return -1069262641;
				}
				else if (iParam1 == 1)
				{
					return 1968521986;
				}
			}
			break;
		case 8:
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (iParam1 == 0)
				{
					return -2143706301;
				}
				else if (iParam1 == 1)
				{
					return -1403421822;
				}
			}
			break;
		case 9:
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (iParam1 == 0)
				{
					return -1950137670;
				}
				else if (iParam1 == 1)
				{
					return 1226259807;
				}
			}
			break;
		case 10:
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (iParam1 == 0)
				{
					return 1090833557;
				}
				else if (iParam1 == 1)
				{
					return 897332612;
				}
			}
			break;
		case 11:
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (iParam1 == 0)
				{
					return 1095946640;
				}
				else if (iParam1 == 1)
				{
					return 801975945;
				}
			}
			break;
		case 12:
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (iParam1 == 0)
				{
					return -167996547;
				}
				else if (iParam1 == 1)
				{
					return -1935818563;
				}
			}
			break;
		case 13:
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (iParam1 == 0)
				{
					return 1891185217;
				}
				else if (iParam1 == 1)
				{
					return 1236591681;
				}
			}
			break;
		case 14:
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (iParam1 == 0)
				{
					return 1980808685;
				}
			}
			break;
		case 15:
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (iParam1 == 0)
				{
					return 1352749757;
				}
			}
			break;
		case 16:
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (iParam1 == 0)
				{
					return -566554453;
				}
			}
			break;
		case 17:
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (iParam1 == 0)
				{
					return 1284749450;
				}
			}
			break;
		case 18:
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (iParam1 == 0)
				{
					return 261851994;
				}
				else if (iParam1 == 1)
				{
					return 217646625;
				}
			}
			break;
		case 19:
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (iParam1 == 0)
				{
					return 1801139578;
				}
				else if (iParam1 == 1)
				{
					return -2123275866;
				}
			}
			break;
		case 20:
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (iParam1 == 0)
				{
					return 1312689981;
				}
				else if (iParam1 == 1)
				{
					return -595055661;
				}
			}
			break;
		case 22:
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (iParam1 == 0)
				{
					return -265260897;
				}
			}
			break;
		case 23:
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (iParam1 == 0)
				{
					return -1284867488;
				}
			}
			break;
		case 24:
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (iParam1 == 0)
				{
					return 302307081;
				}
			}
			break;
		case 25:
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (iParam1 == 0)
				{
					return -681886015;
				}
			}
			break;
		case 26:
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (iParam1 == 0)
				{
					return -2086556500;
				}
			}
			break;
		case 27:
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (iParam1 == 0)
				{
					return -1496386696;
				}
			}
			break;
		case 39:
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (iParam1 == 0)
				{
					return -1871080926;
				}
			}
			else if (iParam1 == 0)
			{
				return -1871080926;
			}
			break;
		case 40:
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (iParam1 == 0)
				{
					return 1168079979;
				}
			}
			else if (iParam1 == 0)
			{
				return 1168079979;
			}
			break;
		case 41:
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (iParam1 == 0)
				{
					return 1206354175;
				}
			}
			else if (iParam1 == 0)
			{
				return 1206354175;
			}
			break;
		case 42:
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (iParam1 == 0)
				{
					return 1200466273;
				}
				else if (iParam1 == 1)
				{
					return -1038180727;
				}
			}
			else if (iParam1 == 0)
			{
				return 1200466273;
			}
			else if (iParam1 == 1)
			{
				return -1038180727;
			}
			break;
		case 43:
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (iParam1 == 0)
				{
					return -459199009;
				}
				else if (iParam1 == 1)
				{
					return 1391004277;
				}
			}
			else if (iParam1 == 0)
			{
				return -459199009;
			}
			else if (iParam1 == 1)
			{
				return 1391004277;
			}
			break;
		case 44:
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (iParam1 == 0)
				{
					return -288764223;
				}
			}
			else if (iParam1 == 0)
			{
				return -288764223;
			}
			break;
		case 28:
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (iParam1 == 0)
				{
					return 1071759151;
				}
				else if (iParam1 == 1)
				{
					return -2119023917;
				}
			}
			break;
		case 29:
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (iParam1 == 0)
				{
					return -1488490473;
				}
				else if (iParam1 == 1)
				{
					return -511187813;
				}
			}
			break;
		case 30:
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (iParam1 == 0)
				{
					return -248569395;
				}
				else if (iParam1 == 1)
				{
					return 989443413;
				}
			}
			break;
		case 31:
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (iParam1 == 0)
				{
					return 2022251829;
				}
				else if (iParam1 == 1)
				{
					return 649820567;
				}
			}
			break;
		case 32:
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (iParam1 == 0)
				{
					return 537455378;
				}
				else if (iParam1 == 1)
				{
					return 1121431731;
				}
			}
			break;
		case 33:
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (iParam1 == 0)
				{
					return -1437380438;
				}
				else if (iParam1 == 1)
				{
					return -946336965;
				}
			}
			break;
		case 34:
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (iParam1 == 0)
				{
					return 1893144650;
				}
				else if (iParam1 == 1)
				{
					return 435841678;
				}
			}
			break;
		case 35:
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (iParam1 == 0)
				{
					return 948508314;
				}
				else if (iParam1 == 1)
				{
					return -1796714665;
				}
			}
			break;
		case 36:
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (iParam1 == 0)
				{
					return -1155247245;
				}
				else if (iParam1 == 1)
				{
					return 782482084;
				}
			}
			break;
		case 37:
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (iParam1 == 0)
				{
					return -1194470801;
				}
				else if (iParam1 == 1)
				{
					return -2129698061;
				}
			}
			break;
		case 38:
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (iParam1 == 0)
				{
					return -675817295;
				}
				else if (iParam1 == 1)
				{
					return 2121442868;
				}
			}
			break;
	}
	return 0;
}

int func_17()//Position - 0x44F4
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 0;
	}
	if (Local_124.f_0 == 45)
	{
		if (Local_124.f_675 == 13)
		{
			return 1;
		}
	}
	return 0;
}

void func_18(char* sParam0, int iParam1)//Position - 0x4520
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return;
	}
	if (iParam1 == -1)
	{
	}
}

bool func_19(int iParam0)//Position - 0x453D
{
	if (7 == iParam0)
	{
		return (Global_4718592.f_116524 == Global_262145.f_9493[iParam0] || Global_4718592.f_116524 == Global_262145.f_9502[iParam0]);
	}
	return Global_4718592.f_116524 == Global_262145.f_9493[iParam0];
}

void func_20(var uParam0)//Position - 0x46EE
{
	uParam0->f_1 = { 0f, 0f, 0f };
	StringCopy(&(uParam0->f_7), "", 16);
	uParam0->f_31 = { 0f, 0f, 0f };
	uParam0->f_34 = 0f;
	uParam0->f_35 = { 0f, 0f, 0f };
	uParam0->f_38 = 0f;
	uParam0->f_39 = { 0f, 0f, 0f };
	uParam0->f_42 = { 0f, 0f, 0f };
	uParam0->f_45 = { 0f, 0f, 0f };
}

void func_21(var uParam0)//Position - 0x473F
{
	*uParam0 = -1;
	uParam0->f_1 = -1;
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
}

void func_22(var uParam0)//Position - 0x475A
{
	int iVar0;
	*uParam0 = -1;
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_108 = 0;
	uParam0->f_9 = 0;
	uParam0->f_11 = 0;
	uParam0->f_100 = 0;
	uParam0->f_12.f_3 = 0;
	uParam0->f_12.f_6 = { 0f, 0f, 0f };
	uParam0->f_12.f_15 = 0f;
	uParam0->f_12.f_18 = { 0f, 0f, 0f };
	uParam0->f_12.f_21 = 0f;
	uParam0->f_12.f_22 = { 0f, 0f, 0f };
	uParam0->f_12.f_25 = 0f;
	uParam0->f_12.f_29 = 0;
	uParam0->f_12.f_26 = 0;
	uParam0->f_43.f_2 = { 0f, 0f, 0f };
	uParam0->f_43.f_5 = 0f;
	uParam0->f_43.f_6 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		uParam0->f_51[iVar0 /*12*/].f_11 = 0;
		uParam0->f_51[iVar0 /*12*/] = 0;
		iVar0++;
	}
}

void func_23(var uParam0)//Position - 0x481D
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	StringCopy(&(uParam0->f_11), "", 16);
	uParam0->f_30 = 0;
	uParam0->f_15 = 0;
	uParam0->f_16 = 0;
	uParam0->f_17 = 0;
	uParam0->f_18 = 0;
	uParam0->f_19 = 0;
	uParam0->f_20 = 0;
	uParam0->f_21 = 0;
	uParam0->f_22 = 0;
	uParam0->f_23 = 0;
	uParam0->f_31 = 0;
}

int func_24(int iParam0)//Position - 0x83E6
{
	if ((((((((((((iParam0 == __LIB_3__::func_664(joaat("luxe_horn_1")) || iParam0 == __LIB_3__::func_664(joaat("luxe_horn_2"))) || iParam0 == __LIB_3__::func_664(joaat("luxe_horn_3"))) || iParam0 == __LIB_3__::func_664(joaat("LOWRIDER_HORN_1"))) || iParam0 == __LIB_3__::func_664(joaat("LOWRIDER_HORN_2"))) || iParam0 == __LIB_3__::func_664(joaat("ORGAN_HORN_LOOP_01"))) || iParam0 == __LIB_3__::func_664(joaat("ORGAN_HORN_LOOP_02"))) || iParam0 == __LIB_3__::func_664(joaat("XM15_HORN_01"))) || iParam0 == __LIB_3__::func_664(joaat("XM15_HORN_02"))) || iParam0 == __LIB_3__::func_664(joaat("XM15_HORN_03"))) || iParam0 == __LIB_3__::func_664(joaat("dlc_aw_airhorn_01"))) || iParam0 == __LIB_3__::func_664(joaat("dlc_aw_airhorn_02"))) || iParam0 == __LIB_3__::func_664(joaat("dlc_aw_airhorn_03")))
	{
		return 1;
	}
	return 0;
}

int func_25(int iParam0, int iParam1, int iParam2)//Position - 0x8F52
{
	switch (iParam0)
	{
		case joaat("apc"):
			if (iParam1 == 10)
			{
				if (iParam2 == 1)
				{
					return 0;
				}
			}
			if (iParam1 == 9)
			{
				if (iParam2 == 11)
				{
					return 42;
				}
			}
			break;
		case joaat("halftrack"):
			if (iParam1 == 10)
			{
				if (iParam2 == 1)
				{
					return 2;
				}
			}
			if (iParam1 == 9)
			{
				if (iParam2 == 11)
				{
					return 42;
				}
			}
			break;
		case joaat("dune3"):
			if (iParam1 == 10)
			{
				if (iParam2 == 1)
				{
					return 7;
				}
				else if (iParam2 == 2)
				{
					return 8;
				}
			}
			if (iParam1 == 9)
			{
				if (iParam2 == 11)
				{
					return 42;
				}
			}
			break;
		case joaat("tampa3"):
			if (iParam1 == 1)
			{
				if (iParam2 == 1)
				{
					return 5;
				}
			}
			else if (iParam1 == 2)
			{
				if (iParam2 == 1)
				{
					return 4;
				}
			}
			else if (iParam1 == 10)
			{
				if (iParam2 == 1)
				{
					return 3;
				}
			}
			if (iParam1 == 9)
			{
				if (iParam2 == 11)
				{
					return 42;
				}
			}
			if (iParam1 == 5)
			{
				if (iParam2 > 2)
				{
					return 6;
				}
			}
			break;
		case joaat("insurgent3"):
			if (iParam1 == 10)
			{
				if (iParam2 == 1)
				{
					return 9;
				}
			}
			if (iParam1 == 5)
			{
				if (iParam2 == 3)
				{
					return 10;
				}
			}
			if (iParam1 == 9)
			{
				if (iParam2 == 11)
				{
					return 42;
				}
			}
			break;
		case joaat("technical3"):
			if (iParam1 == 10)
			{
				if (iParam2 == 1)
				{
					return 11;
				}
			}
			if (iParam1 == 5)
			{
				if (iParam2 == 3)
				{
					return 14;
				}
			}
			if (iParam1 == 6)
			{
				if (iParam2 == 4)
				{
					return 12;
				}
				else if (iParam2 == 5)
				{
					return 13;
				}
			}
			if (iParam1 == 9)
			{
				if (iParam2 == 11)
				{
					return 42;
				}
			}
			break;
		case joaat("oppressor"):
			if (iParam1 == 10)
			{
				if (iParam2 == 1)
				{
					return 15;
				}
			}
			break;
		case joaat("trailersmall2"):
			if (iParam1 == 10)
			{
				if (iParam2 == 1)
				{
					return 22;
				}
				else if (iParam2 == 2)
				{
					return 21;
				}
			}
			break;
		case joaat("trailerlarge"):
			if (iParam1 == 10)
			{
				if (iParam2 == 2)
				{
					return 23;
				}
			}
			break;
	}
	if ((((((((((((((((((((((((((((((iParam0 == joaat("apc") || iParam0 == joaat("halftrack")) || iParam0 == joaat("dune3")) || iParam0 == joaat("tampa3")) || iParam0 == joaat("insurgent3")) || iParam0 == joaat("technical3")) || iParam0 == joaat("nightshark")) || iParam0 == joaat("ardent")) || iParam0 == joaat("trailersmall2")) || iParam0 == joaat("oppressor")) || iParam0 == joaat("khanjali")) || iParam0 == joaat("chernobog")) || iParam0 == joaat("thruster")) || iParam0 == joaat("barrage")) || iParam0 == joaat("riot2")) || iParam0 == joaat("akula")) || iParam0 == joaat("avenger")) || iParam0 == joaat("revolter")) || iParam0 == joaat("caracara")) || iParam0 == joaat("speedo4")) || iParam0 == joaat("mule4")) || iParam0 == joaat("pounder2")) || iParam0 == joaat("menacer")) || iParam0 == joaat("oppressor2")) || iParam0 == joaat("patriot2")) || iParam0 == joaat("patriot")) || iParam0 == joaat("verus")) || iParam0 == joaat("squaddie")) || iParam0 == joaat("manchez2")) || iParam0 == joaat("winky")) || iParam0 == joaat("annihilator2"))
	{
		if (iParam1 == 48)
		{
			if (iParam2 == 10)
			{
				return 19;
			}
			if (iParam2 == 11)
			{
				return 20;
			}
			if (iParam2 >= 12 && iParam2 <= 15)
			{
				return 18;
			}
			if (iParam2 >= 16 && iParam2 <= 17)
			{
				return 16;
			}
			if (iParam2 >= 18 && iParam2 <= 20)
			{
				return 17;
			}
		}
	}
	return -1;
}

void func_26()//Position - 0x9B88
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		Global_102577[iVar0] = 0;
		iVar0++;
	}
}

void func_27()//Position - 0x9BAB
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		Local_183[iVar0] = -1;
		Local_183.f_4[iVar0] = -1;
		iVar0++;
	}
}

void func_28(bool bParam0)//Position - 0x9BDA
{
	if (bParam0)
	{
		if (!BitTest(Global_103905, 10))
		{
			MISC::SET_BIT(&Global_103905, 10);
		}
	}
	else if (BitTest(Global_103905, 10))
	{
		MISC::CLEAR_BIT(&Global_103905, 10);
	}
}

void func_29()//Position - 0x9C13
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		Local_177[iVar0] = -1;
		Local_177.f_4[iVar0] = -1;
		iVar0++;
	}
}

void func_30(bool bParam0)//Position - 0x9C42
{
	if (bParam0)
	{
		if (!BitTest(Global_103905, 7))
		{
			MISC::SET_BIT(&Global_103905, 7);
		}
	}
	else if (BitTest(Global_103905, 7))
	{
		MISC::CLEAR_BIT(&Global_103905, 7);
	}
}

bool func_31(int iParam0)//Position - 0xA139
{
	return BitTest(Local_124.f_447[(iParam0 / 32)], (iParam0 % 32));
}

void func_32(bool bParam0)//Position - 0xA567
{
	if (bParam0)
	{
		if (!BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_197, 25))
		{
			MISC::SET_BIT(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_197), 25);
		}
	}
	else if (BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_197, 25))
	{
		MISC::CLEAR_BIT(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_197), 25);
	}
}

void func_33(bool bParam0)//Position - 0xA67A
{
	if (bParam0)
	{
		if (!BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_197, 16))
		{
			MISC::SET_BIT(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_197), 16);
		}
	}
	else if (BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_197, 16))
	{
		MISC::CLEAR_BIT(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_197), 16);
	}
}

void func_34(bool bParam0)//Position - 0xA734
{
	if (bParam0)
	{
		if (!BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_197, 13))
		{
			MISC::SET_BIT(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_197), 13);
		}
	}
	else if (BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_197, 13))
	{
		MISC::CLEAR_BIT(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_197), 13);
	}
}

void func_35(bool bParam0)//Position - 0xA791
{
	if (bParam0)
	{
		if (!BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_197, 14))
		{
			MISC::SET_BIT(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_197), 14);
		}
	}
	else if (BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_197, 14))
	{
		MISC::CLEAR_BIT(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_197), 14);
	}
}

void func_36(int iParam0)//Position - 0xA7EE
{
	if (!__LIB_0__::func_154(PLAYER::PLAYER_ID(), 1, 1))
	{
		return;
	}
	if (iParam0 != Local_104[PLAYER::PLAYER_ID() /*17*/].f_8)
	{
		Local_104[PLAYER::PLAYER_ID() /*17*/].f_8 = iParam0;
		Local_124.f_676 = iParam0;
	}
}

void func_37(bool bParam0)//Position - 0xA867
{
	if (bParam0)
	{
		if (!BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_197, 11))
		{
			MISC::SET_BIT(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_197), 11);
		}
	}
	else if (BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_197, 11))
	{
		MISC::CLEAR_BIT(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_197), 11);
	}
}

void func_38(bool bParam0)//Position - 0xA9F8
{
	if (bParam0)
	{
		if (!BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_198, 9))
		{
			MISC::SET_BIT(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_198), 9);
		}
	}
	else if (BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_198, 9))
	{
		MISC::CLEAR_BIT(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_198), 9);
	}
}

int func_39(int iParam0)//Position - 0xD5C6
{
	switch (iParam0)
	{
		case 39:
			return joaat("v_ilev_carmodlamps");
			break;
		case 40:
			return joaat("v_ilev_carmodlamps");
			break;
		case 41:
			return joaat("v_ilev_carmodlamps");
			break;
		case 42:
			return joaat("v_ilev_carmod3lamp");
			break;
		case 43:
			return joaat("v_ilev_carmod3lamp");
			break;
		case 44:
			return joaat("lr_prop_supermod_lframe");
			break;
	}
	return joaat("v_ilev_carmodlamps");
}

void func_40(int iParam0)//Position - 0xD996
{
	int iVar0;
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		iVar0 = 0;
		while (iVar0 < 49)
		{
			if ((((iVar0 == 21 || iVar0 == 17) || iVar0 == 19) || iVar0 == 18) || iVar0 == 20)
			{
				if (VEHICLE::IS_TOGGLE_MOD_ON(iParam0, iVar0))
				{
					iLocal_484[iVar0] = 1;
				}
				else
				{
					iLocal_484[iVar0] = 0;
				}
			}
			else if (iVar0 == 22)
			{
				if (VEHICLE::IS_TOGGLE_MOD_ON(iParam0, iVar0))
				{
					switch (VEHICLE::GET_VEHICLE_XENON_LIGHT_COLOR_INDEX(iParam0))
					{
						case 255:
							iLocal_484[iVar0] = 1;
							break;
						case 0:
							iLocal_484[iVar0] = 2;
							break;
						case 1:
							iLocal_484[iVar0] = 3;
							break;
						case 2:
							iLocal_484[iVar0] = 4;
							break;
						case 3:
							iLocal_484[iVar0] = 5;
							break;
						case 4:
							iLocal_484[iVar0] = 6;
							break;
						case 5:
							iLocal_484[iVar0] = 7;
							break;
						case 6:
							iLocal_484[iVar0] = 8;
							break;
						case 7:
							iLocal_484[iVar0] = 9;
							break;
						case 8:
							iLocal_484[iVar0] = 10;
							break;
						case 9:
							iLocal_484[iVar0] = 11;
							break;
						case 10:
							iLocal_484[iVar0] = 12;
							break;
						case 11:
							iLocal_484[iVar0] = 13;
							break;
						case 12:
							iLocal_484[iVar0] = 14;
							break;
					}
				}
				else
				{
					iLocal_484[iVar0] = 0;
				}
			}
			else
			{
				iLocal_484[iVar0] = VEHICLE::GET_VEHICLE_MOD(iParam0, iVar0);
			}
			iVar0++;
		}
	}
}

void func_41(int iParam0)//Position - 0xDB4A
{
	if (GRAPHICS::DOES_VEHICLE_HAVE_CREW_EMBLEM(iParam0, 0))
	{
		GRAPHICS::REMOVE_VEHICLE_CREW_EMBLEM(iParam0, 0);
	}
	if (GRAPHICS::DOES_VEHICLE_HAVE_CREW_EMBLEM(iParam0, 1))
	{
		GRAPHICS::REMOVE_VEHICLE_CREW_EMBLEM(iParam0, 1);
	}
}

int func_42(int iParam0)//Position - 0x161CB
{
	if (!__LIB_0__::func_114() && func_210(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_43()//Position - 0x16853
{
	if (ENTITY::DOES_ENTITY_EXIST(Local_124.f_406) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_124.f_406, false))
	{
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("finale_heist_prepc")) > 0 && ENTITY::GET_ENTITY_MODEL(Local_124.f_406) == joaat("gauntlet"))
		{
			return 1;
		}
	}
	return 0;
}

void func_44()//Position - 0x1737D
{
	if (BitTest(uLocal_390, 3))
	{
		GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("MPShops");
	}
	MISC::CLEAR_BIT(&uLocal_390, 3);
}

void func_45(var uParam0)//Position - 0x1739D
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		if (CAM::DOES_CAM_EXIST((*uParam0)[iVar0 /*12*/]))
		{
			CAM::DESTROY_CAM((*uParam0)[iVar0 /*12*/], false);
		}
		iVar0++;
	}
}

void func_46(bool bParam0)//Position - 0x1AC35
{
	if (bParam0)
	{
		if (!BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_2, 0))
		{
			MISC::SET_BIT(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_2), 0);
		}
	}
	else if (BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_2, 0))
	{
		MISC::CLEAR_BIT(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_2), 0);
	}
}

void func_47(bool bParam0)//Position - 0x1AD07
{
	if (bParam0)
	{
		if (!BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_293, 15))
		{
			MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_293), 15);
		}
	}
	else if (BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_293, 15))
	{
		MISC::CLEAR_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_293), 15);
	}
}

void func_48(bool bParam0)//Position - 0x1AD74
{
	if (bParam0)
	{
		if (!BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_293, 13))
		{
			MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_293), 13);
		}
	}
	else if (BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_293, 13))
	{
		MISC::CLEAR_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_293), 13);
	}
}

void func_49(bool bParam0)//Position - 0x1ADE1
{
	if (bParam0)
	{
		if (!BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_292, 17))
		{
			MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_292), 17);
		}
	}
	else if (BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_292, 17))
	{
		MISC::CLEAR_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_292), 17);
	}
}

void func_50(bool bParam0)//Position - 0x1AE4E
{
	if (bParam0)
	{
		if (!BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_292, 16))
		{
			MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_292), 16);
		}
	}
	else if (BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_292, 16))
	{
		MISC::CLEAR_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_292), 16);
	}
}

int func_51(int iParam0, int iParam1)//Position - 0x1BC3A
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	bVar4 = false;
	if (iParam1 && NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar2))
	{
		iVar1 = NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS();
		bVar4 = true;
	}
	else
	{
		iVar1 = 32;
	}
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (bVar4)
		{
			if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
			{
				iVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0));
			}
		}
		else
		{
			iVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		}
		if (iVar2 != PLAYER::PLAYER_ID())
		{
			if (__LIB_0__::func_154(iVar2, 1, 1))
			{
				iVar3 = PLAYER::GET_PLAYER_PED(iVar2);
				if (PED::IS_PED_IN_VEHICLE(iVar3, iParam0, false))
				{
				}
				else
				{
					if ((((((((PED::IS_PED_IN_VEHICLE(iVar3, iParam0, true) || (ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(iVar3, iParam0) && !VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(iParam0)))) || TASK::GET_SCRIPT_TASK_STATUS(iVar3, joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE")) == 1) || TASK::GET_SCRIPT_TASK_STATUS(iVar3, joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE")) == 0) || TASK::GET_SCRIPT_TASK_STATUS(iVar3, joaat("SCRIPT_TASK_ENTER_VEHICLE")) == 1) || TASK::GET_SCRIPT_TASK_STATUS(iVar3, joaat("SCRIPT_TASK_ENTER_VEHICLE")) == 0) || TASK::GET_SCRIPT_TASK_STATUS(iVar3, joaat("SCRIPT_TASK_LEAVE_VEHICLE")) == 1) || TASK::GET_SCRIPT_TASK_STATUS(iVar3, joaat("SCRIPT_TASK_LEAVE_VEHICLE")) == 0) || TASK::GET_IS_TASK_ACTIVE(iVar3, 2))
					{
						return 0;
					}
					if ((PED::IS_PED_IN_VEHICLE(iVar3, iParam0, true) && !PED::IS_PED_SITTING_IN_VEHICLE(iVar3, iParam0)) && !PED::IS_PED_GETTING_INTO_A_VEHICLE(iVar3))
					{
						return 0;
					}
				}
			}
		}
		iVar0++;
	}
	return 1;
}

int func_52()//Position - 0x1BDA4
{
	if (Local_124.f_676 == -1)
	{
		return 0;
	}
	return BitTest(Local_103.f_10[Local_124.f_676], 1);
}

int func_53()//Position - 0x1BF53
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0));
			if (BitTest(Global_2689235[iVar1 /*453*/].f_197, 12))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_54(var uParam0)//Position - 0x338F9
{
	int iVar0;
	int iVar1;
	iVar0 = uParam0;
	iVar1 = __LIB_0__::func_159(iVar0);
	if ((__LIB_0__::func_3() == 0 || func_443() == 0) || (__LIB_0__::func_3() == 999 && func_443() == 999))
	{
		switch (iVar1)
		{
			case 0:
				return 1039;
				break;
			case 1:
				return 1040;
				break;
			case 2:
				return 1041;
				break;
			case 3:
				return 1042;
				break;
			case 4:
				return 1043;
				break;
			case 5:
				return 1503;
				break;
			case 6:
				return 1758;
				break;
			case 7:
				return 1952;
				break;
			case 8:
				return 1953;
				break;
			case 9:
				return 1954;
				break;
			case 10:
				return 1955;
				break;
			case 11:
				return 1956;
				break;
			case 12:
				return 1957;
				break;
			case 13:
				return 2424;
				break;
			case 14:
				return 2444;
				break;
			case 15:
				return 2447;
				break;
			case 16:
				return 2450;
				break;
			case 17:
				return 2614;
				break;
			case 18:
				return 2617;
				break;
			case 19:
				return 2620;
				break;
			case 20:
				return 3786;
				break;
			case 21:
				return 3789;
				break;
			case 22:
				return 3864;
				break;
			case 23:
				return 3867;
				break;
			case 24:
				return 3870;
				break;
			case 25:
				return 3873;
				break;
			case 26:
				return 5364;
				break;
			case 27:
				return 5367;
				break;
			case 28:
				return 5469;
				break;
			case 29:
				return 5472;
				break;
			case 30:
				return 6431;
				break;
			case 31:
				return 6434;
				break;
			case 32:
				return 7255;
				break;
			case 33:
				return 7258;
				break;
			case 34:
				return 7261;
				break;
			case 35:
				return 7970;
				break;
			case 36:
				return 7973;
				break;
			case 37:
				return 7976;
				break;
			case 38:
				return 7979;
				break;
			case 39:
				return 8501;
				break;
			case 40:
				return 8504;
				break;
			case 41:
				return 8507;
				break;
			case 42:
				return 8510;
				break;
			case 43:
				return 8906;
				break;
			case 44:
				return 8909;
				break;
			case 45:
				return 8912;
				break;
			case 46:
				return 10287;
				break;
			case 47:
				return 10290;
				break;
			case 48:
				return 10413;
				break;
			case 49:
				return 10416;
				break;
		}
	}
	return 13122;
}

bool func_55(int iParam0, int iParam1)//Position - 0x36B2C
{
	return __LIB_0__::func_137(func_452(iParam0), iParam1);
}

void func_56(int iParam0, int iParam1, int iParam2)//Position - 0x76F4E
{
	if (iParam1 <= 255)
	{
		__LIB_1__::func_39(func_633(iParam0), iParam1, iParam2);
		__LIB_1__::func_39(func_632(iParam0), 0, iParam2);
	}
	else
	{
		__LIB_1__::func_39(func_633(iParam0), 255, iParam2);
		__LIB_1__::func_39(func_632(iParam0), (iParam1 - 255), iParam2);
	}
}

int func_57(struct<3> Param0)//Position - 0x96C88
{
	if (__LIB_1__::func_82(Param0, 0.5f, PLAYER::PLAYER_ID(), 0, 0) || !func_736(Param0, 3f, 1f, 1f, 5f, 0, 0, 0, 0f, 1, -1, 0, 0f, 1, 0f, 0, 0))
	{
		return 0;
	}
	return 1;
}

int func_58()//Position - 0xA215B
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	if (bLocal_473)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_395.f_2) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_395.f_2, false))
		{
			iVar1 = Local_395.f_2;
		}
		else
		{
			iVar1 = Local_124.f_406;
		}
		iVar0 = GRAPHICS::GET_VEHICLE_CREW_EMBLEM_REQUEST_STATE(iVar1, 0);
		if (iVar0 == 3 || iVar0 >= 4)
		{
			bLocal_473 = false;
		}
		else if (iVar0 == 1)
		{
			if ((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::IS_TIME_MORE_THAN(NETWORK::GET_NETWORK_TIME(), NETWORK::GET_TIME_OFFSET(iLocal_479, 5000))) || (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && (MISC::GET_GAME_TIMER() - iLocal_478) > 5000))
			{
				GRAPHICS::ABORT_VEHICLE_CREW_EMBLEM_REQUEST(iVar1);
				iVar0 = 5;
				bLocal_473 = false;
			}
		}
	}
	if (iLocal_476)
	{
		if ((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::IS_TIME_LESS_THAN(NETWORK::GET_NETWORK_TIME(), NETWORK::GET_TIME_OFFSET(iLocal_479, 1500))) || (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && (MISC::GET_GAME_TIMER() - iLocal_478) < 1500))
		{
			return 2;
		}
		else
		{
			iLocal_476 = 0;
		}
	}
	return iVar0;
}

int func_59(int iParam0)//Position - 0xA5363
{
	switch (iParam0)
	{
		case joaat("buzzard"):
		case joaat("savage"):
		case joaat("valkyrie"):
		case joaat("hydra"):
		case joaat("cargobob"):
		case joaat("cargobob2"):
		case joaat("volatus"):
		case joaat("supervolito"):
		case joaat("supervolito2"):
		case joaat("swift2"):
		case joaat("frogger"):
		case joaat("maverick"):
		case joaat("annihilator"):
		case joaat("lazer"):
		case joaat("nimbus"):
		case joaat("luxor2"):
		case joaat("velum2"):
		case joaat("dodo"):
		case joaat("miljet"):
		case joaat("besra"):
		case joaat("vestra"):
		case joaat("duster"):
		case joaat("shamal"):
		case joaat("cuban800"):
		case joaat("luxor"):
		case joaat("stunt"):
		case joaat("mammatus"):
		case joaat("titan"):
		case joaat("velum"):
		case joaat("swift"):
			return 1;
		default:
	}
	return 0;
}

void func_60(int iParam0)//Position - 0xA7DC4
{
	Global_60333 = 1;
	Global_60334 = iParam0;
}

int func_61(int iParam0)//Position - 0xA8914
{
	int iVar0;
	int iVar1;
	iVar0 = (iParam0 - 0);
	iVar1 = 41;
	return (iVar0 + iVar1);
}

int func_62(var uParam0, int iParam1, var uParam2, int iParam3)//Position - 0xA8A5E
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] == iParam1 && (*uParam2)[iVar0] == iParam3)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_63(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)//Position - 0xA8D20
{
	return MISC::GET_HASH_KEY(&uParam0) == MISC::GET_HASH_KEY(&uParam4);
}

void func_64(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)//Position - 0xB1D3E
{
	int iVar0;
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_DATE(iVar0, &uParam1, 7, true);
	}
}

int func_65(var uParam0)//Position - 0xB1E86
{
	if ((((((*uParam0 != 0 || uParam0->f_1 != 0) || uParam0->f_2 != 0) || uParam0->f_3 != 0) || uParam0->f_4 != 0) || uParam0->f_5 != 0) || uParam0->f_6 != 0)
	{
		return 1;
	}
	return 0;
}

int func_66(int iParam0)//Position - 0xB204A
{
	if ((iParam0 % 4) == 0)
	{
		if ((iParam0 % 100) == 0)
		{
			if ((iParam0 % 400) == 0)
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
			return 1;
		}
	}
	return 0;
}

int func_67(int iParam0)//Position - 0xB20E4
{
	switch (iParam0)
	{
		case 1:
			return 13;
		case 2:
			return 14;
		case 3:
			return 15;
		case 4:
			return 16;
		case 5:
			return 17;
		case 6:
			return 18;
		case 7:
			return 19;
		case 8:
			return 20;
		case 9:
			return 21;
		case 10:
			return 22;
		case 11:
			return 23;
		case 12:
			return 24;
		case 13:
			return 25;
		case 14:
			return 26;
		case 15:
			return 27;
		case 16:
			return 28;
		case 17:
			return 29;
		case 18:
			return 30;
		case 19:
			return 31;
		case 20:
			return 32;
		default:
	}
	return 13;
}

int func_68(var uParam0, int iParam1)//Position - 0xB227D
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] == iParam1)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_69(int iParam0, int iParam1)//Position - 0xB22A9
{
	switch (iParam0)
	{
		case 0:
			__LIB_0__::func_779(joaat("MPPLY_SOLDZOLAPUMA0"), iParam1);
			break;
		case 1:
			__LIB_0__::func_779(joaat("MPPLY_SOLDZOLAPUMA1"), iParam1);
			break;
		case 2:
			__LIB_0__::func_779(joaat("MPPLY_SOLDZOLAPUMA2"), iParam1);
			break;
		case 3:
			__LIB_0__::func_779(joaat("MPPLY_SOLDZOLAPUMA3"), iParam1);
			break;
		case 4:
			__LIB_0__::func_779(joaat("MPPLY_SOLDZOLAPUMA4"), iParam1);
			break;
	}
	Global_1585126[iParam0] = iParam1;
}

int func_70(var uParam0, var uParam1, var uParam2, var uParam3)//Position - 0xB24BB
{
	if (!Global_1585125 == 0 && !Global_1585125 == -1)
	{
		if (MISC::GET_HASH_KEY(&uParam0) == Global_1585125)
		{
			return 1;
		}
	}
	return 0;
}

int func_71(char[16] cParam0, struct<4> Param1)//Position - 0xB24EB
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	char cVar4[16];
	struct<4> Var5;
	iVar0 = HUD::GET_LENGTH_OF_LITERAL_STRING(&cParam0);
	iVar1 = HUD::GET_LENGTH_OF_LITERAL_STRING(&Param1);
	if (iVar0 == iVar1)
	{
		return MISC::ARE_STRINGS_EQUAL(&cParam0, &Param1);
	}
	iVar3 = MISC::ABSI((iVar1 - iVar0));
	if (iVar0 < iVar1)
	{
		cVar4 = { cParam0 };
	}
	else
	{
		cVar4 = { Param1 };
	}
	iVar2 = 0;
	while (iVar2 < (iVar3 / 2))
	{
		StringCopy(&Var5, " ", 16);
		StringConCat(&Var5, &cVar4, 16);
		StringConCat(&Var5, " ", 16);
		cVar4 = { Var5 };
		iVar2++;
	}
	if ((iVar3 % 2) == 1)
	{
		StringConCat(&cVar4, " ", 16);
	}
	if (iVar0 < iVar1)
	{
		return MISC::ARE_STRINGS_EQUAL(&cVar4, &Param1);
	}
	else
	{
		return MISC::ARE_STRINGS_EQUAL(&cVar4, &cParam0);
	}
	return 0;
}

bool func_72()//Position - 0xB259E
{
	return Global_110086;
}

void func_73(char* sParam0)//Position - 0xB26A8
{
	int iVar0;
	struct<4> Var1;
	struct<4> Var2;
	int iVar3;
	int iVar4;
	iVar0 = HUD::GET_LENGTH_OF_LITERAL_STRING(sParam0);
	if (iVar0 < 8)
	{
		Var1 = { *sParam0 };
		iVar4 = MISC::ABSI((8 - iVar0));
		iVar3 = 0;
		while (iVar3 < (iVar4 / 2))
		{
			StringCopy(&Var2, " ", 16);
			StringConCat(&Var2, &Var1, 16);
			StringConCat(&Var2, " ", 16);
			Var1 = { Var2 };
			iVar3++;
		}
		if ((iVar4 % 2) == 1)
		{
			StringConCat(&Var1, " ", 16);
		}
		*sParam0 = { Var1 };
	}
}

void func_74(int iParam0, int iParam1)//Position - 0xB28E5
{
	switch (iParam0)
	{
		case 0:
			__LIB_0__::func_779(joaat("MPPLY_KNOWNDOZERSOLD0"), iParam1);
			break;
		case 1:
			__LIB_0__::func_779(joaat("MPPLY_KNOWNDOZERSOLD1"), iParam1);
			break;
		case 2:
			__LIB_0__::func_779(joaat("MPPLY_KNOWNDOZERSOLD2"), iParam1);
			break;
		case 3:
			__LIB_0__::func_779(joaat("MPPLY_KNOWNDOZERSOLD3"), iParam1);
			break;
		case 4:
			__LIB_0__::func_779(joaat("MPPLY_KNOWNDOZERSOLD4"), iParam1);
			break;
		case 5:
			__LIB_0__::func_779(joaat("MPPLY_KNOWNDOZERSOLD5"), iParam1);
			break;
		case 6:
			__LIB_0__::func_779(joaat("MPPLY_KNOWNDOZERSOLD6"), iParam1);
			break;
		case 7:
			__LIB_0__::func_779(joaat("MPPLY_KNOWNDOZERSOLD7"), iParam1);
			break;
		case 8:
			__LIB_0__::func_779(joaat("MPPLY_KNOWNDOZERSOLD8"), iParam1);
			break;
		case 9:
			__LIB_0__::func_779(joaat("MPPLY_KNOWNDOZERSOLD9"), iParam1);
			break;
	}
	Global_1585164[iParam0] = iParam1;
}

void func_75(int iParam0, int iParam1)//Position - 0xB29C6
{
	switch (iParam0)
	{
		case 0:
			__LIB_0__::func_779(joaat("MPPLY_KNOWNDOZERPUMA0"), iParam1);
			break;
		case 1:
			__LIB_0__::func_779(joaat("MPPLY_KNOWNDOZERPUMA1"), iParam1);
			break;
		case 2:
			__LIB_0__::func_779(joaat("MPPLY_KNOWNDOZERPUMA2"), iParam1);
			break;
		case 3:
			__LIB_0__::func_779(joaat("MPPLY_KNOWNDOZERPUMA3"), iParam1);
			break;
		case 4:
			__LIB_0__::func_779(joaat("MPPLY_KNOWNDOZERPUMA4"), iParam1);
			break;
		case 5:
			__LIB_0__::func_779(joaat("MPPLY_KNOWNDOZERPUMA5"), iParam1);
			break;
		case 6:
			__LIB_0__::func_779(joaat("MPPLY_KNOWNDOZERPUMA6"), iParam1);
			break;
		case 7:
			__LIB_0__::func_779(joaat("MPPLY_KNOWNDOZERPUMA7"), iParam1);
			break;
		case 8:
			__LIB_0__::func_779(joaat("MPPLY_KNOWNDOZERPUMA8"), iParam1);
			break;
		case 9:
			__LIB_0__::func_779(joaat("MPPLY_KNOWNDOZERPUMA9"), iParam1);
			break;
	}
	Global_1585153[iParam0] = iParam1;
}

int func_76(char* sParam0)//Position - 0xB2F43
{
	int iVar0;
	if ((MISC::STRING_TO_INT(sParam0, &iVar0) && iVar0 >= 0) && iVar0 <= 9)
	{
		return 1;
	}
	return 0;
}

void func_77(int iParam0)//Position - 0xB30B3
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("Veh_Modded_By_Player", 3))
		{
			DECORATOR::DECOR_SET_INT(iParam0, "Veh_Modded_By_Player", NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(PLAYER::PLAYER_ID()));
		}
	}
}

int func_78(int iParam0, int iParam1, int iParam2)//Position - 0xBDE73
{
	switch (iParam0)
	{
		case 33:
			return 12;
			break;
		case 60:
			return 7;
			break;
		case 15:
			return 22;
			break;
		case 95:
			return 22;
			break;
		case 57:
			return 45;
			break;
		case 29:
			return 17;
			break;
		case 58:
			return 41;
			break;
		case 92:
			return 50;
			break;
		case 90:
			return 17;
			break;
		case 27:
			return 56;
			break;
		case 8:
			return 45;
			break;
		case 36:
			return 15;
			break;
		case 18:
			return 15;
			break;
		case 30:
			if (iParam2 == 1)
			{
				return 8;
			}
			else if (iParam2 == 2)
			{
				return 45;
			}
			break;
		case 91:
			if (iParam2 == 1)
			{
				return 16;
			}
			else if (iParam2 == 2)
			{
				return 68;
			}
			break;
		case 45:
			return 15;
			break;
	}
	switch (iParam1)
	{
		case 1:
			return 15;
			break;
		case 2:
			return 25;
			break;
		case 0:
			return 30;
			break;
		case 3:
			return 30;
			break;
		case 4:
			return 23;
			break;
		case 5:
			return 33;
			break;
		case 6:
			return 17;
			break;
		case 7:
			return 30;
			break;
		case 8:
			return 22;
			break;
		case 9:
			return 42;
			break;
		case 10:
			return 30;
			break;
		case 11:
			return 11;
			break;
		case 12:
			return 11;
			break;
		case 13:
			return 11;
			break;
		case 15:
			return 11;
			break;
		case 16:
			return 11;
			break;
		case 18:
			return 2;
			break;
		case 25:
			return 30;
			break;
		case 26:
			return 30;
			break;
		case 27:
			return 30;
			break;
		case 28:
			return 60;
			break;
		case 29:
			return 30;
			break;
		case 30:
			return 30;
			break;
		case 31:
			return 30;
			break;
		case 32:
			return 30;
			break;
		case 33:
			return 30;
			break;
		case 34:
			return 30;
			break;
		case 35:
			return 30;
			break;
		case 36:
			return 30;
			break;
		case 37:
			return 30;
			break;
		case 38:
			return 30;
			break;
		case 39:
			return 30;
			break;
		case 40:
			return 30;
			break;
		case 41:
			return 30;
			break;
		case 42:
			return 30;
			break;
		case 43:
			return 30;
			break;
		case 44:
			return 30;
			break;
		case 45:
			return 30;
			break;
		case 46:
			return 30;
			break;
		case 47:
			return 30;
			break;
		case 48:
			return 37;
			break;
		case 22:
			return 17;
			break;
	}
	return 5;
}

bool func_79(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4)//Position - 0xBE1DC
{
	*uParam1 = -1;
	*uParam2 = -1;
	*uParam3 = 0;
	*uParam4 = -1;
	switch (iParam0)
	{
		case 0:
			*uParam1 = 33;
			*uParam3 = 1;
			break;
		case 1:
			*uParam1 = 60;
			*uParam3 = 1;
			break;
		case 2:
			*uParam1 = 15;
			*uParam3 = 1;
			break;
		case 3:
			*uParam1 = 57;
			*uParam3 = 1;
			break;
		case 4:
			*uParam1 = 29;
			*uParam3 = 1;
			break;
		case 5:
			*uParam1 = 58;
			*uParam3 = 1;
			break;
		case 6:
			*uParam1 = 92;
			*uParam3 = 1;
			break;
		case 7:
			*uParam1 = 90;
			*uParam3 = 1;
			break;
		case 8:
			*uParam1 = 27;
			*uParam3 = 1;
			break;
		case 9:
			*uParam1 = 8;
			*uParam3 = 1;
			break;
		case 10:
			*uParam1 = 30;
			*uParam3 = 1;
			*uParam4 = 1;
			break;
		case 11:
			*uParam1 = 30;
			*uParam3 = 1;
			*uParam4 = 2;
			break;
		case 12:
			if (joaat("TOP_SUNST") == MISC::GET_HASH_KEY(VEHICLE::GET_MOD_SLOT_NAME(Local_124.f_406, 27)) || joaat("TOP_SUNST") == MISC::GET_HASH_KEY(VEHICLE::GET_MOD_SLOT_NAME(Local_124.f_406, 6)))
			{
				*uParam1 = 45;
				*uParam3 = 1;
			}
			else
			{
				*uParam1 = 91;
				*uParam3 = 1;
				*uParam4 = 1;
			}
			break;
		case 13:
			if (joaat("TOP_SUNST") == MISC::GET_HASH_KEY(VEHICLE::GET_MOD_SLOT_NAME(Local_124.f_406, 27)) || joaat("TOP_SUNST") == MISC::GET_HASH_KEY(VEHICLE::GET_MOD_SLOT_NAME(Local_124.f_406, 6)))
			{
				*uParam1 = 45;
				*uParam3 = 1;
			}
			else
			{
				*uParam1 = 91;
				*uParam3 = 1;
				*uParam4 = 2;
			}
			break;
		case 14:
			*uParam2 = 0;
			break;
		case 15:
			*uParam2 = 3;
			break;
		case 16:
			*uParam2 = 4;
			break;
		case 17:
			*uParam2 = 5;
			break;
		case 18:
			*uParam2 = 6;
			break;
		case 19:
			*uParam2 = 7;
			break;
		case 20:
			*uParam2 = 8;
			break;
		case 21:
			*uParam2 = 9;
			break;
		case 22:
			*uParam2 = 10;
			break;
		case 23:
			*uParam2 = 11;
			break;
		case 24:
			*uParam2 = 12;
			break;
		case 25:
			*uParam2 = 13;
			break;
		case 26:
			*uParam2 = 15;
			break;
		case 27:
			*uParam2 = 16;
			break;
		case 28:
			*uParam2 = 18;
			break;
		case 29:
			*uParam2 = 23;
			break;
		case 30:
			*uParam2 = 24;
			break;
		case 31:
			*uParam2 = 25;
			break;
		case 32:
			*uParam2 = 26;
			break;
		case 33:
			*uParam2 = 28;
			break;
		case 34:
			*uParam2 = 29;
			break;
		case 35:
			*uParam2 = 31;
			break;
		case 36:
			*uParam2 = 32;
			break;
		case 37:
			*uParam2 = 33;
			break;
		case 38:
			*uParam2 = 34;
			break;
		case 39:
			*uParam2 = 35;
			break;
		case 40:
			*uParam2 = 36;
			break;
		case 41:
			*uParam2 = 37;
			break;
		case 42:
			*uParam2 = 38;
			break;
		case 43:
			*uParam2 = 39;
			break;
		case 44:
			*uParam2 = 40;
			break;
		case 45:
			*uParam2 = 41;
			break;
		case 46:
			*uParam2 = 42;
			break;
		case 47:
			*uParam2 = 43;
			break;
		case 48:
			*uParam2 = 44;
			break;
		case 49:
			*uParam2 = 45;
			break;
		case 50:
			*uParam2 = 46;
			break;
		case 51:
			*uParam2 = 47;
			break;
		case 52:
			*uParam2 = 48;
			break;
		case 53:
			*uParam2 = 1;
			break;
		case 54:
			*uParam2 = 2;
			break;
	}
	return (*uParam1 != -1 || *uParam2 != -1);
}

int func_80(int iParam0)//Position - 0xBE773
{
	switch (iParam0)
	{
		case 29:
		case 80:
		case 9:
		case 15:
		case 77:
		case 78:
		case 85:
		case 8:
		case 12:
		case 26:
		case 72:
		case 23:
		case 44:
		case 95:
		case 40:
		case 39:
		case 63:
		case 18:
		case 46:
		case 45:
			return 1;
			break;
	}
	return 0;
}

bool func_81(int iParam0)//Position - 0xC0A48
{
	return __LIB_0__::func_137(func_1364(iParam0), -1);
}

void func_82(char* sParam0, int iParam1, bool bParam2)//Position - 0xC39A9
{
	int iVar0;
	__LIB_9__::func_458(iParam1, &iVar0);
	switch (iVar0)
	{
		case 15271:
			StringCopy(sParam0, "PACKED_MP_INT_TRUCK_MOD_SLOT_1_v", 64);
			break;
		case 15272:
			StringCopy(sParam0, "PACKED_MP_INT_TRUCK_MOD_SLOT_2_v", 64);
			break;
		case 15273:
			StringCopy(sParam0, "PACKED_MP_INT_TRUCK_MOD_SLOT_3_v", 64);
			break;
		case 15274:
			StringCopy(sParam0, "PACKED_MP_INT_TRUCK_MOD_SLOT_4_v", 64);
			break;
		case 15275:
			StringCopy(sParam0, "PACKED_MP_INT_TRUCK_MOD_SLOT_5_v", 64);
			break;
		case 15276:
			StringCopy(sParam0, "PACKED_MP_INT_TRUCK_MOD_SLOT_6_v", 64);
			break;
		case 15277:
			StringCopy(sParam0, "PACKED_MP_INT_TRUCK_MOD_SLOT_7_v", 64);
			break;
		case 15278:
			StringCopy(sParam0, "PACKED_MP_INT_TRUCK_MOD_SLOT_8_v", 64);
			break;
		case 15279:
			StringCopy(sParam0, "PACKED_MP_INT_TRUCK_MOD_SLOT_9_v", 64);
			break;
		case 15280:
			StringCopy(sParam0, "PACKED_MP_INT_TRUCK_MOD_SLOT_10_v", 64);
			break;
		default:
			return;
			break;
	}
	if (bParam2)
	{
		StringConCat(sParam0, "0", 64);
	}
}

bool func_83(int iParam0, int iParam1)//Position - 0xC52EB
{
	*iParam1 = -1;
	switch (iParam0)
	{
		case 0:
			*iParam1 = 0;
			break;
		case 1:
			*iParam1 = 1;
			break;
		case 2:
			*iParam1 = 11;
			break;
		case 3:
			*iParam1 = 2;
			break;
		case 4:
			*iParam1 = 3;
			break;
		case 5:
			*iParam1 = 5;
			break;
		case 6:
			*iParam1 = 6;
			break;
		case 7:
			*iParam1 = 7;
			break;
		case 8:
			*iParam1 = 8;
			break;
		case 9:
			*iParam1 = 9;
			break;
		case 10:
			*iParam1 = 10;
			break;
		case 11:
			*iParam1 = 27;
			break;
		case 12:
			*iParam1 = 28;
			break;
		case 13:
			*iParam1 = 150;
			break;
		case 14:
			*iParam1 = 30;
			break;
		case 15:
			*iParam1 = 31;
			break;
		case 16:
			*iParam1 = 32;
			break;
		case 17:
			*iParam1 = 33;
			break;
		case 18:
			*iParam1 = 34;
			break;
		case 19:
			*iParam1 = 143;
			break;
		case 20:
			*iParam1 = 35;
			break;
		case 21:
			*iParam1 = 137;
			break;
		case 22:
			*iParam1 = 136;
			break;
		case 23:
			*iParam1 = 36;
			break;
		case 24:
			*iParam1 = 38;
			break;
		case 25:
			*iParam1 = 138;
			break;
		case 26:
			*iParam1 = 90;
			break;
		case 27:
			*iParam1 = 88;
			break;
		case 28:
			*iParam1 = 89;
			break;
		case 29:
			*iParam1 = 91;
			break;
		case 30:
			*iParam1 = 49;
			break;
		case 31:
			*iParam1 = 50;
			break;
		case 32:
			*iParam1 = 51;
			break;
		case 33:
			*iParam1 = 52;
			break;
		case 34:
			*iParam1 = 53;
			break;
		case 35:
			*iParam1 = 54;
			break;
		case 36:
			*iParam1 = 92;
			break;
		case 37:
			*iParam1 = 141;
			break;
		case 38:
			*iParam1 = 61;
			break;
		case 39:
			*iParam1 = 62;
			break;
		case 40:
			*iParam1 = 63;
			break;
		case 41:
			*iParam1 = 65;
			break;
		case 42:
			*iParam1 = 66;
			break;
		case 43:
			*iParam1 = 67;
			break;
		case 44:
			*iParam1 = 68;
			break;
		case 45:
			*iParam1 = 69;
			break;
		case 46:
			*iParam1 = 73;
			break;
		case 47:
			*iParam1 = 70;
			break;
		case 48:
			*iParam1 = 74;
			break;
		case 49:
			*iParam1 = 96;
			break;
		case 50:
			*iParam1 = 101;
			break;
		case 51:
			*iParam1 = 95;
			break;
		case 52:
			*iParam1 = 94;
			break;
		case 53:
			*iParam1 = 97;
			break;
		case 54:
			*iParam1 = 103;
			break;
		case 55:
			*iParam1 = 104;
			break;
		case 56:
			*iParam1 = 98;
			break;
		case 57:
			*iParam1 = 100;
			break;
		case 58:
			*iParam1 = 102;
			break;
		case 59:
			*iParam1 = 99;
			break;
		case 60:
			*iParam1 = 105;
			break;
		case 61:
			*iParam1 = 106;
			break;
		case 62:
			*iParam1 = 72;
			break;
		case 63:
			*iParam1 = 146;
			break;
		case 64:
			*iParam1 = 145;
			break;
		case 65:
			*iParam1 = 107;
			break;
		case 66:
			*iParam1 = 111;
			break;
		case 67:
			*iParam1 = 112;
			break;
	}
	return *iParam1 != -1;
}

bool func_84(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4)//Position - 0xC5B81
{
	*iParam2 = -1;
	*iParam3 = -1;
	*iParam4 = -1;
	switch (iParam0)
	{
		case 0:
			StringCopy(sParam1, "BR BLACK_STEEL" /* GXT: Brushed Black Steel */, 16);
			*iParam2 = 3;
			*iParam3 = 118;
			*iParam4 = 3;
			break;
		case 1:
			StringCopy(sParam1, "BLACK_GRAPHITE" /* GXT: Carbon Black */, 16);
			*iParam2 = 0;
			*iParam3 = 147;
			*iParam4 = 4;
			break;
		case 2:
			StringCopy(sParam1, "CHOCOLATE_BROWN" /* GXT: Chocolate Brown */, 16);
			*iParam2 = 1;
			*iParam3 = 96;
			*iParam4 = 0;
			break;
		case 3:
			StringCopy(sParam1, "PURPLE" /* GXT: Schafter Purple */, 16);
			*iParam2 = 0;
			*iParam3 = 71;
			*iParam4 = 145;
			break;
		case 4:
			StringCopy(sParam1, "HOT PINK" /* GXT: Hot Pink */, 16);
			*iParam2 = 0;
			*iParam3 = 135;
			*iParam4 = 135;
			break;
		case 5:
			StringCopy(sParam1, "FORMULA_RED" /* GXT: Formula Red */, 16);
			*iParam2 = 0;
			*iParam3 = 29;
			*iParam4 = 28;
			break;
		case 6:
			StringCopy(sParam1, "BLUE" /* GXT: Blue */, 16);
			*iParam2 = 0;
			*iParam3 = 64;
			*iParam4 = 68;
			break;
		case 7:
			StringCopy(sParam1, "ULTRA_BLUE" /* GXT: Ultra Blue */, 16);
			*iParam2 = 1;
			*iParam3 = 70;
			*iParam4 = 0;
			break;
		case 8:
			StringCopy(sParam1, "RACING_GREEN" /* GXT: Racing Green */, 16);
			*iParam2 = 1;
			*iParam3 = 50;
			*iParam4 = 0;
			break;
		case 9:
			StringCopy(sParam1, "LIME_GREEN" /* GXT: Lime Green */, 16);
			*iParam2 = 2;
			*iParam3 = 55;
			*iParam4 = 0;
			break;
		case 10:
			StringCopy(sParam1, "RACE_YELLOW" /* GXT: Race Yellow */, 16);
			*iParam2 = 1;
			*iParam3 = 89;
			*iParam4 = 0;
			break;
		case 11:
			StringCopy(sParam1, "ORANGE" /* GXT: Orange */, 16);
			*iParam2 = 1;
			*iParam3 = 38;
			*iParam4 = 0;
			break;
		case 12:
			StringCopy(sParam1, "GOLD" /* GXT: Gold */, 16);
			*iParam2 = 0;
			*iParam3 = 37;
			*iParam4 = 106;
			break;
		case 13:
			StringCopy(sParam1, "SILVER" /* GXT: Silver */, 16);
			*iParam2 = 0;
			*iParam3 = 4;
			*iParam4 = 111;
			break;
		case 14:
			StringCopy(sParam1, "CHROME" /* GXT: Chrome */, 16);
			*iParam2 = 4;
			*iParam3 = 120;
			*iParam4 = 0;
			break;
		case 15:
			StringCopy(sParam1, "WHITE" /* GXT: Ice White */, 16);
			*iParam2 = 1;
			*iParam3 = 111;
			*iParam4 = 0;
			break;
		case 16:
			StringCopy(sParam1, "BLACK" /* GXT: Black */, 16);
			*iParam2 = 0;
			*iParam3 = 0;
			*iParam4 = 10;
			break;
		case 17:
			StringCopy(sParam1, "GRAPHITE" /* GXT: Graphite */, 16);
			*iParam2 = 0;
			*iParam3 = 1;
			*iParam4 = 5;
			break;
		case 18:
			StringCopy(sParam1, "ANTHR_BLACK" /* GXT: Anthracite Black */, 16);
			*iParam2 = 0;
			*iParam3 = 11;
			*iParam4 = 2;
			break;
		case 19:
			StringCopy(sParam1, "BLACK_STEEL" /* GXT: Black Steel */, 16);
			*iParam2 = 0;
			*iParam3 = 2;
			*iParam4 = 5;
			break;
		case 20:
			StringCopy(sParam1, "DARK_SILVER" /* GXT: Dark Steel */, 16);
			*iParam2 = 0;
			*iParam3 = 3;
			*iParam4 = 6;
			break;
		case 21:
			StringCopy(sParam1, "BLUE_SILVER" /* GXT: Bluish Silver */, 16);
			*iParam2 = 0;
			*iParam3 = 5;
			*iParam4 = 111;
			break;
		case 22:
			StringCopy(sParam1, "ROLLED_STEEL" /* GXT: Rolled Steel */, 16);
			*iParam2 = 0;
			*iParam3 = 6;
			*iParam4 = 4;
			break;
		case 23:
			StringCopy(sParam1, "SHADOW_SILVER" /* GXT: Shadow Silver */, 16);
			*iParam2 = 0;
			*iParam3 = 7;
			*iParam4 = 5;
			break;
		case 24:
			StringCopy(sParam1, "STONE_SILVER" /* GXT: Stone Silver */, 16);
			*iParam2 = 0;
			*iParam3 = 8;
			*iParam4 = 5;
			break;
		case 25:
			StringCopy(sParam1, "MIDNIGHT_SILVER" /* GXT: Midnight Silver */, 16);
			*iParam2 = 0;
			*iParam3 = 9;
			*iParam4 = 7;
			break;
		case 26:
			StringCopy(sParam1, "CAST_IRON_SIL" /* GXT: Cast Iron Silver */, 16);
			*iParam2 = 0;
			*iParam3 = 10;
			*iParam4 = 7;
			break;
		case 27:
			StringCopy(sParam1, "RED" /* GXT: Red */, 16);
			*iParam2 = 0;
			*iParam3 = 27;
			*iParam4 = 36;
			break;
		case 28:
			StringCopy(sParam1, "TORINO_RED" /* GXT: Torino Red */, 16);
			*iParam2 = 0;
			*iParam3 = 28;
			*iParam4 = 28;
			break;
		case 29:
			StringCopy(sParam1, "LAVA_RED" /* GXT: Lava Red */, 16);
			*iParam2 = 0;
			*iParam3 = 150;
			*iParam4 = 42;
			break;
		case 30:
			StringCopy(sParam1, "BLAZE_RED" /* GXT: Blaze Red */, 16);
			*iParam2 = 0;
			*iParam3 = 30;
			*iParam4 = 36;
			break;
		case 31:
			StringCopy(sParam1, "GRACE_RED" /* GXT: Grace Red */, 16);
			*iParam2 = 0;
			*iParam3 = 31;
			*iParam4 = 27;
			break;
		case 32:
			StringCopy(sParam1, "GARNET_RED" /* GXT: Garnet Red */, 16);
			*iParam2 = 0;
			*iParam3 = 32;
			*iParam4 = 25;
			break;
		case 33:
			StringCopy(sParam1, "SUNSET_RED" /* GXT: Sunset Red */, 16);
			*iParam2 = 0;
			*iParam3 = 33;
			*iParam4 = 47;
			break;
		case 34:
			StringCopy(sParam1, "CABERNET_RED" /* GXT: Cabernet Red */, 16);
			*iParam2 = 0;
			*iParam3 = 34;
			*iParam4 = 47;
			break;
		case 35:
			StringCopy(sParam1, "WINE_RED" /* GXT: Wine Red */, 16);
			*iParam2 = 0;
			*iParam3 = 143;
			*iParam4 = 31;
			break;
		case 36:
			StringCopy(sParam1, "CANDY_RED" /* GXT: Candy Red */, 16);
			*iParam2 = 0;
			*iParam3 = 35;
			*iParam4 = 25;
			break;
		case 37:
			StringCopy(sParam1, "PINK" /* GXT: Pfister Pink */, 16);
			*iParam2 = 0;
			*iParam3 = 137;
			*iParam4 = 3;
			break;
		case 38:
			StringCopy(sParam1, "SALMON_PINK" /* GXT: Salmon Pink */, 16);
			*iParam2 = 0;
			*iParam3 = 136;
			*iParam4 = 5;
			break;
		case 39:
			StringCopy(sParam1, "SUNRISE_ORANGE" /* GXT: Sunrise Orange */, 16);
			*iParam2 = 0;
			*iParam3 = 36;
			*iParam4 = 26;
			break;
		case 40:
			StringCopy(sParam1, "ORANGE" /* GXT: Orange */, 16);
			*iParam2 = 0;
			*iParam3 = 38;
			*iParam4 = 37;
			break;
		case 41:
			StringCopy(sParam1, "BRIGHT_ORANGE" /* GXT: Bright Orange */, 16);
			*iParam2 = 0;
			*iParam3 = 138;
			*iParam4 = 89;
			break;
		case 42:
			StringCopy(sParam1, "BRONZE" /* GXT: Bronze */, 16);
			*iParam2 = 0;
			*iParam3 = 90;
			*iParam4 = 102;
			break;
		case 43:
			StringCopy(sParam1, "YELLOW" /* GXT: Yellow */, 16);
			*iParam2 = 0;
			*iParam3 = 88;
			*iParam4 = 88;
			break;
		case 44:
			StringCopy(sParam1, "RACE_YELLOW" /* GXT: Race Yellow */, 16);
			*iParam2 = 0;
			*iParam3 = 89;
			*iParam4 = 88;
			break;
		case 45:
			StringCopy(sParam1, "FLUR_YELLOW" /* GXT: Dew Yellow */, 16);
			*iParam2 = 0;
			*iParam3 = 91;
			*iParam4 = 91;
			break;
		case 46:
			StringCopy(sParam1, "DARK_GREEN" /* GXT: Dark Green */, 16);
			*iParam2 = 0;
			*iParam3 = 49;
			*iParam4 = 52;
			break;
		case 47:
			StringCopy(sParam1, "RACING_GREEN" /* GXT: Racing Green */, 16);
			*iParam2 = 0;
			*iParam3 = 50;
			*iParam4 = 53;
			break;
		case 48:
			StringCopy(sParam1, "SEA_GREEN" /* GXT: Sea Green */, 16);
			*iParam2 = 0;
			*iParam3 = 51;
			*iParam4 = 66;
			break;
		case 49:
			StringCopy(sParam1, "OLIVE_GREEN" /* GXT: Olive Green */, 16);
			*iParam2 = 0;
			*iParam3 = 52;
			*iParam4 = 59;
			break;
		case 50:
			StringCopy(sParam1, "BRIGHT_GREEN" /* GXT: Bright Green */, 16);
			*iParam2 = 0;
			*iParam3 = 53;
			*iParam4 = 59;
			break;
		case 51:
			StringCopy(sParam1, "PETROL_GREEN" /* GXT: Gasoline Green */, 16);
			*iParam2 = 0;
			*iParam3 = 54;
			*iParam4 = 60;
			break;
		case 52:
			StringCopy(sParam1, "LIME_GREEN" /* GXT: Lime Green */, 16);
			*iParam2 = 0;
			*iParam3 = 92;
			*iParam4 = 92;
			break;
		case 53:
			StringCopy(sParam1, "MIDNIGHT_BLUE" /* GXT: Midnight Blue */, 16);
			*iParam2 = 0;
			*iParam3 = 141;
			*iParam4 = 73;
			break;
		case 54:
			StringCopy(sParam1, "GALAXY_BLUE" /* GXT: Galaxy Blue */, 16);
			*iParam2 = 0;
			*iParam3 = 61;
			*iParam4 = 63;
			break;
		case 55:
			StringCopy(sParam1, "DARK_BLUE" /* GXT: Dark Blue */, 16);
			*iParam2 = 0;
			*iParam3 = 62;
			*iParam4 = 68;
			break;
		case 56:
			StringCopy(sParam1, "SAXON_BLUE" /* GXT: Saxon Blue */, 16);
			*iParam2 = 0;
			*iParam3 = 63;
			*iParam4 = 87;
			break;
		case 57:
			StringCopy(sParam1, "MARINER_BLUE" /* GXT: Mariner Blue */, 16);
			*iParam2 = 0;
			*iParam3 = 65;
			*iParam4 = 87;
			break;
		case 58:
			StringCopy(sParam1, "HARBOR_BLUE" /* GXT: Harbor Blue */, 16);
			*iParam2 = 0;
			*iParam3 = 66;
			*iParam4 = 60;
			break;
		case 59:
			StringCopy(sParam1, "DIAMOND_BLUE" /* GXT: Diamond Blue */, 16);
			*iParam2 = 0;
			*iParam3 = 67;
			*iParam4 = 67;
			break;
		case 60:
			StringCopy(sParam1, "SURF_BLUE" /* GXT: Surf Blue */, 16);
			*iParam2 = 0;
			*iParam3 = 68;
			*iParam4 = 68;
			break;
		case 61:
			StringCopy(sParam1, "NAUTICAL_BLUE" /* GXT: Nautical Blue */, 16);
			*iParam2 = 0;
			*iParam3 = 69;
			*iParam4 = 74;
			break;
		case 62:
			StringCopy(sParam1, "RACING_BLUE" /* GXT: Racing Blue */, 16);
			*iParam2 = 0;
			*iParam3 = 73;
			*iParam4 = 73;
			break;
		case 63:
			StringCopy(sParam1, "ULTRA_BLUE" /* GXT: Ultra Blue */, 16);
			*iParam2 = 0;
			*iParam3 = 70;
			*iParam4 = 70;
			break;
		case 64:
			StringCopy(sParam1, "LIGHT_BLUE" /* GXT: Light Blue */, 16);
			*iParam2 = 0;
			*iParam3 = 74;
			*iParam4 = 74;
			break;
		case 65:
			StringCopy(sParam1, "CHOCOLATE_BROWN" /* GXT: Chocolate Brown */, 16);
			*iParam2 = 0;
			*iParam3 = 96;
			*iParam4 = 95;
			break;
		case 66:
			StringCopy(sParam1, "BISON_BROWN" /* GXT: Bison Brown */, 16);
			*iParam2 = 0;
			*iParam3 = 101;
			*iParam4 = 95;
			break;
		case 67:
			StringCopy(sParam1, "CREEK_BROWN" /* GXT: Creek Brown */, 16);
			*iParam2 = 0;
			*iParam3 = 95;
			*iParam4 = 97;
			break;
		case 68:
			StringCopy(sParam1, "UMBER_BROWN" /* GXT: Feltzer Brown */, 16);
			*iParam2 = 0;
			*iParam3 = 94;
			*iParam4 = 104;
			break;
		case 69:
			StringCopy(sParam1, "MAPLE_BROWN" /* GXT: Maple Brown */, 16);
			*iParam2 = 0;
			*iParam3 = 97;
			*iParam4 = 98;
			break;
		case 70:
			StringCopy(sParam1, "BEECHWOOD_BROWN" /* GXT: Beechwood Brown */, 16);
			*iParam2 = 0;
			*iParam3 = 103;
			*iParam4 = 104;
			break;
		case 71:
			StringCopy(sParam1, "SIENNA_BROWN" /* GXT: Sienna Brown */, 16);
			*iParam2 = 0;
			*iParam3 = 104;
			*iParam4 = 104;
			break;
		case 72:
			StringCopy(sParam1, "SADDLE_BROWN" /* GXT: Saddle Brown */, 16);
			*iParam2 = 0;
			*iParam3 = 98;
			*iParam4 = 95;
			break;
		case 73:
			StringCopy(sParam1, "MOSS_BROWN" /* GXT: Moss Brown */, 16);
			*iParam2 = 0;
			*iParam3 = 100;
			*iParam4 = 100;
			break;
		case 74:
			StringCopy(sParam1, "WOODBEECH_BROWN" /* GXT: Woodbeech Brown */, 16);
			*iParam2 = 0;
			*iParam3 = 102;
			*iParam4 = 105;
			break;
		case 75:
			StringCopy(sParam1, "STRAW_BROWN" /* GXT: Straw Brown */, 16);
			*iParam2 = 0;
			*iParam3 = 99;
			*iParam4 = 106;
			break;
		case 76:
			StringCopy(sParam1, "SANDY_BROWN" /* GXT: Sandy Brown */, 16);
			*iParam2 = 0;
			*iParam3 = 105;
			*iParam4 = 105;
			break;
		case 77:
			StringCopy(sParam1, "BLEECHED_BROWN" /* GXT: Bleached Brown */, 16);
			*iParam2 = 0;
			*iParam3 = 106;
			*iParam4 = 106;
			break;
		case 78:
			StringCopy(sParam1, "SPIN_PURPLE" /* GXT: Spinnaker Purple */, 16);
			*iParam2 = 0;
			*iParam3 = 72;
			*iParam4 = 64;
			break;
		case 79:
			StringCopy(sParam1, "MIGHT_PURPLE" /* GXT: Midnight Purple */, 16);
			*iParam2 = 0;
			*iParam3 = 146;
			*iParam4 = 145;
			break;
		case 80:
			StringCopy(sParam1, "BRIGHT_PURPLE" /* GXT: Bright Purple */, 16);
			*iParam2 = 0;
			*iParam3 = 145;
			*iParam4 = 74;
			break;
		case 81:
			StringCopy(sParam1, "CREAM" /* GXT: Cream */, 16);
			*iParam2 = 0;
			*iParam3 = 107;
			*iParam4 = 107;
			break;
		case 82:
			StringCopy(sParam1, "WHITE" /* GXT: Ice White */, 16);
			*iParam2 = 0;
			*iParam3 = 111;
			*iParam4 = 0;
			break;
		case 83:
			StringCopy(sParam1, "FROST_WHITE" /* GXT: Frost White */, 16);
			*iParam2 = 0;
			*iParam3 = 112;
			*iParam4 = 0;
			break;
		case 84:
			StringCopy(sParam1, "BLACK" /* GXT: Black */, 16);
			*iParam2 = 1;
			*iParam3 = 0;
			*iParam4 = 0;
			break;
		case 85:
			StringCopy(sParam1, "BLACK_GRAPHITE" /* GXT: Carbon Black */, 16);
			*iParam2 = 1;
			*iParam3 = 147;
			*iParam4 = 0;
			break;
		case 86:
			StringCopy(sParam1, "GRAPHITE" /* GXT: Graphite */, 16);
			*iParam2 = 1;
			*iParam3 = 1;
			*iParam4 = 0;
			break;
		case 87:
			StringCopy(sParam1, "ANTHR_BLACK" /* GXT: Anthracite Black */, 16);
			*iParam2 = 1;
			*iParam3 = 11;
			*iParam4 = 0;
			break;
		case 88:
			StringCopy(sParam1, "BLACK_STEEL" /* GXT: Black Steel */, 16);
			*iParam2 = 1;
			*iParam3 = 2;
			*iParam4 = 0;
			break;
		case 89:
			StringCopy(sParam1, "DARK_SILVER" /* GXT: Dark Steel */, 16);
			*iParam2 = 1;
			*iParam3 = 3;
			*iParam4 = 2;
			break;
		case 90:
			StringCopy(sParam1, "SILVER" /* GXT: Silver */, 16);
			*iParam2 = 1;
			*iParam3 = 4;
			*iParam4 = 4;
			break;
		case 91:
			StringCopy(sParam1, "BLUE_SILVER" /* GXT: Bluish Silver */, 16);
			*iParam2 = 1;
			*iParam3 = 5;
			*iParam4 = 5;
			break;
		case 92:
			StringCopy(sParam1, "ROLLED_STEEL" /* GXT: Rolled Steel */, 16);
			*iParam2 = 1;
			*iParam3 = 6;
			*iParam4 = 0;
			break;
		case 93:
			StringCopy(sParam1, "SHADOW_SILVER" /* GXT: Shadow Silver */, 16);
			*iParam2 = 1;
			*iParam3 = 7;
			*iParam4 = 0;
			break;
		case 94:
			StringCopy(sParam1, "STONE_SILVER" /* GXT: Stone Silver */, 16);
			*iParam2 = 1;
			*iParam3 = 8;
			*iParam4 = 0;
			break;
		case 95:
			StringCopy(sParam1, "MIDNIGHT_SILVER" /* GXT: Midnight Silver */, 16);
			*iParam2 = 1;
			*iParam3 = 9;
			*iParam4 = 0;
			break;
		case 96:
			StringCopy(sParam1, "CAST_IRON_SIL" /* GXT: Cast Iron Silver */, 16);
			*iParam2 = 1;
			*iParam3 = 10;
			*iParam4 = 0;
			break;
		case 97:
			StringCopy(sParam1, "RED" /* GXT: Red */, 16);
			*iParam2 = 1;
			*iParam3 = 27;
			*iParam4 = 0;
			break;
		case 98:
			StringCopy(sParam1, "TORINO_RED" /* GXT: Torino Red */, 16);
			*iParam2 = 1;
			*iParam3 = 28;
			*iParam4 = 0;
			break;
		case 99:
			StringCopy(sParam1, "FORMULA_RED" /* GXT: Formula Red */, 16);
			*iParam2 = 1;
			*iParam3 = 29;
			*iParam4 = 0;
			break;
		case 100:
			StringCopy(sParam1, "LAVA_RED" /* GXT: Lava Red */, 16);
			*iParam2 = 1;
			*iParam3 = 150;
			*iParam4 = 0;
			break;
		case 101:
			StringCopy(sParam1, "BLAZE_RED" /* GXT: Blaze Red */, 16);
			*iParam2 = 1;
			*iParam3 = 30;
			*iParam4 = 0;
			break;
		case 102:
			StringCopy(sParam1, "GRACE_RED" /* GXT: Grace Red */, 16);
			*iParam2 = 1;
			*iParam3 = 31;
			*iParam4 = 0;
			break;
		case 103:
			StringCopy(sParam1, "GARNET_RED" /* GXT: Garnet Red */, 16);
			*iParam2 = 1;
			*iParam3 = 32;
			*iParam4 = 0;
			break;
		case 104:
			StringCopy(sParam1, "SUNSET_RED" /* GXT: Sunset Red */, 16);
			*iParam2 = 1;
			*iParam3 = 33;
			*iParam4 = 0;
			break;
		case 105:
			StringCopy(sParam1, "CABERNET_RED" /* GXT: Cabernet Red */, 16);
			*iParam2 = 1;
			*iParam3 = 34;
			*iParam4 = 0;
			break;
		case 106:
			StringCopy(sParam1, "WINE_RED" /* GXT: Wine Red */, 16);
			*iParam2 = 1;
			*iParam3 = 143;
			*iParam4 = 0;
			break;
		case 107:
			StringCopy(sParam1, "CANDY_RED" /* GXT: Candy Red */, 16);
			*iParam2 = 1;
			*iParam3 = 35;
			*iParam4 = 0;
			break;
		case 108:
			StringCopy(sParam1, "HOT PINK" /* GXT: Hot Pink */, 16);
			*iParam2 = 1;
			*iParam3 = 135;
			*iParam4 = 0;
			break;
		case 109:
			StringCopy(sParam1, "PINK" /* GXT: Pfister Pink */, 16);
			*iParam2 = 1;
			*iParam3 = 137;
			*iParam4 = 0;
			break;
		case 110:
			StringCopy(sParam1, "SALMON_PINK" /* GXT: Salmon Pink */, 16);
			*iParam2 = 1;
			*iParam3 = 136;
			*iParam4 = 0;
			break;
		case 111:
			StringCopy(sParam1, "SUNRISE_ORANGE" /* GXT: Sunrise Orange */, 16);
			*iParam2 = 1;
			*iParam3 = 36;
			*iParam4 = 0;
			break;
		case 112:
			StringCopy(sParam1, "BRIGHT_ORANGE" /* GXT: Bright Orange */, 16);
			*iParam2 = 1;
			*iParam3 = 138;
			*iParam4 = 0;
			break;
		case 113:
			StringCopy(sParam1, "GOLD" /* GXT: Gold */, 16);
			*iParam2 = 1;
			*iParam3 = 99;
			*iParam4 = 99;
			break;
		case 114:
			StringCopy(sParam1, "BRONZE" /* GXT: Bronze */, 16);
			*iParam2 = 1;
			*iParam3 = 90;
			*iParam4 = 102;
			break;
		case 115:
			StringCopy(sParam1, "YELLOW" /* GXT: Yellow */, 16);
			*iParam2 = 1;
			*iParam3 = 88;
			*iParam4 = 0;
			break;
		case 116:
			StringCopy(sParam1, "FLUR_YELLOW" /* GXT: Dew Yellow */, 16);
			*iParam2 = 1;
			*iParam3 = 91;
			*iParam4 = 0;
			break;
		case 117:
			StringCopy(sParam1, "DARK_GREEN" /* GXT: Dark Green */, 16);
			*iParam2 = 1;
			*iParam3 = 49;
			*iParam4 = 0;
			break;
		case 118:
			StringCopy(sParam1, "SEA_GREEN" /* GXT: Sea Green */, 16);
			*iParam2 = 1;
			*iParam3 = 51;
			*iParam4 = 0;
			break;
		case 119:
			StringCopy(sParam1, "OLIVE_GREEN" /* GXT: Olive Green */, 16);
			*iParam2 = 1;
			*iParam3 = 52;
			*iParam4 = 0;
			break;
		case 120:
			StringCopy(sParam1, "BRIGHT_GREEN" /* GXT: Bright Green */, 16);
			*iParam2 = 1;
			*iParam3 = 53;
			*iParam4 = 0;
			break;
		case 121:
			StringCopy(sParam1, "PETROL_GREEN" /* GXT: Gasoline Green */, 16);
			*iParam2 = 1;
			*iParam3 = 54;
			*iParam4 = 0;
			break;
		case 122:
			StringCopy(sParam1, "LIME_GREEN" /* GXT: Lime Green */, 16);
			*iParam2 = 1;
			*iParam3 = 92;
			*iParam4 = 0;
			break;
		case 123:
			StringCopy(sParam1, "MIDNIGHT_BLUE" /* GXT: Midnight Blue */, 16);
			*iParam2 = 1;
			*iParam3 = 141;
			*iParam4 = 0;
			break;
		case 124:
			StringCopy(sParam1, "GALAXY_BLUE" /* GXT: Galaxy Blue */, 16);
			*iParam2 = 1;
			*iParam3 = 61;
			*iParam4 = 0;
			break;
		case 125:
			StringCopy(sParam1, "DARK_BLUE" /* GXT: Dark Blue */, 16);
			*iParam2 = 1;
			*iParam3 = 62;
			*iParam4 = 0;
			break;
		case 126:
			StringCopy(sParam1, "SAXON_BLUE" /* GXT: Saxon Blue */, 16);
			*iParam2 = 1;
			*iParam3 = 63;
			*iParam4 = 0;
			break;
		case 127:
			StringCopy(sParam1, "BLUE" /* GXT: Blue */, 16);
			*iParam2 = 1;
			*iParam3 = 64;
			*iParam4 = 0;
			break;
		case 128:
			StringCopy(sParam1, "MARINER_BLUE" /* GXT: Mariner Blue */, 16);
			*iParam2 = 1;
			*iParam3 = 65;
			*iParam4 = 0;
			break;
		case 129:
			StringCopy(sParam1, "HARBOR_BLUE" /* GXT: Harbor Blue */, 16);
			*iParam2 = 1;
			*iParam3 = 66;
			*iParam4 = 0;
			break;
		case 130:
			StringCopy(sParam1, "DIAMOND_BLUE" /* GXT: Diamond Blue */, 16);
			*iParam2 = 1;
			*iParam3 = 67;
			*iParam4 = 0;
			break;
		case 131:
			StringCopy(sParam1, "SURF_BLUE" /* GXT: Surf Blue */, 16);
			*iParam2 = 1;
			*iParam3 = 68;
			*iParam4 = 0;
			break;
		case 132:
			StringCopy(sParam1, "NAUTICAL_BLUE" /* GXT: Nautical Blue */, 16);
			*iParam2 = 1;
			*iParam3 = 69;
			*iParam4 = 0;
			break;
		case 133:
			StringCopy(sParam1, "RACING_BLUE" /* GXT: Racing Blue */, 16);
			*iParam2 = 1;
			*iParam3 = 73;
			*iParam4 = 0;
			break;
		case 134:
			StringCopy(sParam1, "LIGHT_BLUE" /* GXT: Light Blue */, 16);
			*iParam2 = 1;
			*iParam3 = 74;
			*iParam4 = 0;
			break;
		case 135:
			StringCopy(sParam1, "BISON_BROWN" /* GXT: Bison Brown */, 16);
			*iParam2 = 1;
			*iParam3 = 101;
			*iParam4 = 0;
			break;
		case 136:
			StringCopy(sParam1, "CREEK_BROWN" /* GXT: Creek Brown */, 16);
			*iParam2 = 1;
			*iParam3 = 95;
			*iParam4 = 0;
			break;
		case 137:
			StringCopy(sParam1, "UMBER_BROWN" /* GXT: Feltzer Brown */, 16);
			*iParam2 = 1;
			*iParam3 = 94;
			*iParam4 = 0;
			break;
		case 138:
			StringCopy(sParam1, "MAPLE_BROWN" /* GXT: Maple Brown */, 16);
			*iParam2 = 1;
			*iParam3 = 97;
			*iParam4 = 0;
			break;
		case 139:
			StringCopy(sParam1, "BEECHWOOD_BROWN" /* GXT: Beechwood Brown */, 16);
			*iParam2 = 1;
			*iParam3 = 103;
			*iParam4 = 0;
			break;
		case 140:
			StringCopy(sParam1, "SIENNA_BROWN" /* GXT: Sienna Brown */, 16);
			*iParam2 = 1;
			*iParam3 = 104;
			*iParam4 = 0;
			break;
		case 141:
			StringCopy(sParam1, "SADDLE_BROWN" /* GXT: Saddle Brown */, 16);
			*iParam2 = 1;
			*iParam3 = 98;
			*iParam4 = 0;
			break;
		case 142:
			StringCopy(sParam1, "MOSS_BROWN" /* GXT: Moss Brown */, 16);
			*iParam2 = 1;
			*iParam3 = 100;
			*iParam4 = 0;
			break;
		case 143:
			StringCopy(sParam1, "WOODBEECH_BROWN" /* GXT: Woodbeech Brown */, 16);
			*iParam2 = 1;
			*iParam3 = 102;
			*iParam4 = 0;
			break;
		case 144:
			StringCopy(sParam1, "STRAW_BROWN" /* GXT: Straw Brown */, 16);
			*iParam2 = 1;
			*iParam3 = 99;
			*iParam4 = 0;
			break;
		case 145:
			StringCopy(sParam1, "SANDY_BROWN" /* GXT: Sandy Brown */, 16);
			*iParam2 = 1;
			*iParam3 = 105;
			*iParam4 = 0;
			break;
		case 146:
			StringCopy(sParam1, "BLEECHED_BROWN" /* GXT: Bleached Brown */, 16);
			*iParam2 = 1;
			*iParam3 = 106;
			*iParam4 = 0;
			break;
		case 147:
			StringCopy(sParam1, "PURPLE" /* GXT: Schafter Purple */, 16);
			*iParam2 = 1;
			*iParam3 = 71;
			*iParam4 = 0;
			break;
		case 148:
			StringCopy(sParam1, "SPIN_PURPLE" /* GXT: Spinnaker Purple */, 16);
			*iParam2 = 1;
			*iParam3 = 72;
			*iParam4 = 0;
			break;
		case 149:
			StringCopy(sParam1, "MIGHT_PURPLE" /* GXT: Midnight Purple */, 16);
			*iParam2 = 1;
			*iParam3 = 142;
			*iParam4 = 0;
			break;
		case 150:
			StringCopy(sParam1, "BRIGHT_PURPLE" /* GXT: Bright Purple */, 16);
			*iParam2 = 1;
			*iParam3 = 145;
			*iParam4 = 0;
			break;
		case 151:
			StringCopy(sParam1, "CREAM" /* GXT: Cream */, 16);
			*iParam2 = 1;
			*iParam3 = 107;
			*iParam4 = 0;
			break;
		case 152:
			StringCopy(sParam1, "FROST_WHITE" /* GXT: Frost White */, 16);
			*iParam2 = 1;
			*iParam3 = 112;
			*iParam4 = 0;
			break;
		case 153:
			StringCopy(sParam1, "BLACK" /* GXT: Black */, 16);
			*iParam2 = 2;
			*iParam3 = 12;
			*iParam4 = 0;
			break;
		case 154:
			StringCopy(sParam1, "GREY" /* GXT: Gray */, 16);
			*iParam2 = 2;
			*iParam3 = 13;
			*iParam4 = 0;
			break;
		case 155:
			StringCopy(sParam1, "LIGHT_GREY" /* GXT: Light Gray */, 16);
			*iParam2 = 2;
			*iParam3 = 14;
			*iParam4 = 0;
			break;
		case 156:
			StringCopy(sParam1, "WHITE" /* GXT: Ice White */, 16);
			*iParam2 = 2;
			*iParam3 = 131;
			*iParam4 = 0;
			break;
		case 157:
			StringCopy(sParam1, "BLUE" /* GXT: Blue */, 16);
			*iParam2 = 2;
			*iParam3 = 83;
			*iParam4 = 0;
			break;
		case 158:
			StringCopy(sParam1, "DARK_BLUE" /* GXT: Dark Blue */, 16);
			*iParam2 = 2;
			*iParam3 = 82;
			*iParam4 = 0;
			break;
		case 159:
			StringCopy(sParam1, "MIDNIGHT_BLUE" /* GXT: Midnight Blue */, 16);
			*iParam2 = 2;
			*iParam3 = 84;
			*iParam4 = 0;
			break;
		case 160:
			StringCopy(sParam1, "MIGHT_PURPLE" /* GXT: Midnight Purple */, 16);
			*iParam2 = 2;
			*iParam3 = 149;
			*iParam4 = 0;
			break;
		case 161:
			StringCopy(sParam1, "Purple" /* GXT: Schafter Purple */, 16);
			*iParam2 = 2;
			*iParam3 = 148;
			*iParam4 = 0;
			break;
		case 162:
			StringCopy(sParam1, "RED" /* GXT: Red */, 16);
			*iParam2 = 2;
			*iParam3 = 39;
			*iParam4 = 0;
			break;
		case 163:
			StringCopy(sParam1, "DARK_RED" /* GXT: Dark Red */, 16);
			*iParam2 = 2;
			*iParam3 = 40;
			*iParam4 = 0;
			break;
		case 164:
			StringCopy(sParam1, "ORANGE" /* GXT: Orange */, 16);
			*iParam2 = 2;
			*iParam3 = 41;
			*iParam4 = 0;
			break;
		case 165:
			StringCopy(sParam1, "YELLOW" /* GXT: Yellow */, 16);
			*iParam2 = 2;
			*iParam3 = 42;
			*iParam4 = 0;
			break;
		case 166:
			StringCopy(sParam1, "GREEN" /* GXT: Green */, 16);
			*iParam2 = 2;
			*iParam3 = 128;
			*iParam4 = 0;
			break;
		case 167:
			StringCopy(sParam1, "MATTE_FOR" /* GXT: Forest Green */, 16);
			*iParam2 = 2;
			*iParam3 = 151;
			*iParam4 = 0;
			break;
		case 168:
			StringCopy(sParam1, "MATTE_FOIL" /* GXT: Foliage Green */, 16);
			*iParam2 = 2;
			*iParam3 = 155;
			*iParam4 = 0;
			break;
		case 169:
			StringCopy(sParam1, "MATTE_OD" /* GXT: Olive Drab */, 16);
			*iParam2 = 2;
			*iParam3 = 152;
			*iParam4 = 0;
			break;
		case 170:
			StringCopy(sParam1, "MATTE_DIRT" /* GXT: Dark Earth */, 16);
			*iParam2 = 2;
			*iParam3 = 153;
			*iParam4 = 0;
			break;
		case 171:
			StringCopy(sParam1, "MATTE_DESERT" /* GXT: Desert Tan */, 16);
			*iParam2 = 2;
			*iParam3 = 154;
			*iParam4 = 0;
			break;
		case 172:
			StringCopy(sParam1, "BR_STEEL" /* GXT: Brushed Steel */, 16);
			*iParam2 = 3;
			*iParam3 = 117;
			*iParam4 = 18;
			break;
		case 173:
			StringCopy(sParam1, "BR_ALUMINIUM" /* GXT: Brushed Aluminum */, 16);
			*iParam2 = 3;
			*iParam3 = 119;
			*iParam4 = 5;
			break;
		case 174:
			StringCopy(sParam1, "GOLD_P" /* GXT: Pure Gold */, 16);
			*iParam2 = 3;
			*iParam3 = 158;
			*iParam4 = 160;
			break;
		case 175:
			StringCopy(sParam1, "GOLD_S" /* GXT: Brushed Gold */, 16);
			*iParam2 = 3;
			*iParam3 = 159;
			*iParam4 = 160;
			break;
	}
	return *iParam2 != -1;
}

int func_85(int iParam0)//Position - 0xC9C76
{
	if (!__LIB_0__::func_114() && func_1412(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_86(int iParam0)//Position - 0xCA6BE
{
	char cVar0[64];
	if (iParam0 == -1)
	{
		iParam0 = 0;
	}
	switch (iParam0)
	{
		case 0:
			StringCopy(&cVar0, "PACKED_NG_VEHICLE_INSURANCE_v0", 64);
			break;
		case 1:
			StringCopy(&cVar0, "PACKED_NG_VEHICLE_INSURANCE_v1", 64);
			break;
		case 2:
			StringCopy(&cVar0, "PACKED_NG_VEHICLE_INSURANCE_v2", 64);
			break;
		case 3:
			StringCopy(&cVar0, "PACKED_NG_VEHICLE_INSURANCE_v3", 64);
			break;
		case 4:
			StringCopy(&cVar0, "PACKED_NG_VEHICLE_INSURANCE_v4", 64);
			break;
		case 5:
			StringCopy(&cVar0, "PACKED_NG_VEHICLE_INSURANCE_v5", 64);
			break;
		case 6:
			StringCopy(&cVar0, "PACKED_NG_VEHICLE_INSURANCE_v6", 64);
			break;
		case 7:
			StringCopy(&cVar0, "PACKED_NG_VEHICLE_INSURANCE_v7", 64);
			break;
		case 8:
			StringCopy(&cVar0, "PACKED_NG_VEHICLE_INSURANCE_v8", 64);
			break;
		case 9:
			StringCopy(&cVar0, "PACKED_NG_VEHICLE_INSURANCE_v9", 64);
			break;
	}
	if (iParam0 >= 10)
	{
		StringCopy(&cVar0, "PACKED_NG_VEHICLE_INSURANCE_v", 64);
		StringIntConCat(&cVar0, iParam0, 64);
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar0))
	{
		return -1;
	}
	return MISC::GET_HASH_KEY(&cVar0);
}

int func_87()//Position - 0xCB5E2
{
	if ((((((__LIB_0__::func_633() || func_1454()) || __LIB_0__::func_175()) || func_1453()) || func_1452()) || func_472()) || func_1450())
	{
		return 1;
	}
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION() && BitTest(Global_4718592.f_36, 1))
	{
		return 1;
	}
	return 0;
}

void func_88(char[16] cParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0xCCA28
{
	Global_100493.f_1384 = { cParam0 };
	Global_100493.f_1388 = uParam1;
	Global_100493.f_1389 = iParam2;
	Global_100493.f_1390 = iParam3;
	Global_100493.f_1391 = iParam4;
	Global_100493.f_1392 = iParam5;
}

void func_89(char* sParam0, var uParam1, int iParam2)//Position - 0xCCA6A
{
	if (iParam2 >= 0 && iParam2 < 128)
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(&(Global_100493.f_1557[iParam2 /*4*/])))
		{
			*sParam0 = { Global_100493.f_484[iParam2 /*4*/] };
		}
		else
		{
			*sParam0 = { Global_100493.f_1557[iParam2 /*4*/] };
		}
		*uParam1 = Global_100493.f_997[iParam2];
	}
	else
	{
		StringCopy(sParam0, "", 16);
		*uParam1 = 0;
	}
}

void func_90(bool bParam0)//Position - 0xCCAD6
{
	if (bParam0)
	{
		if (!BitTest(uLocal_203, 1))
		{
			MISC::SET_BIT(&uLocal_203, 1);
		}
	}
	else if (BitTest(uLocal_203, 1))
	{
		MISC::CLEAR_BIT(&uLocal_203, 1);
	}
}

void func_91(int iParam0)//Position - 0xCCD55
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && iParam0 != -1)
	{
		if (Local_124.f_443 == 27)
		{
			switch (MISC::GET_HASH_KEY(&(Global_100493.f_484[iParam0 /*4*/])))
			{
				case joaat("HORN_HWEEN1"):
					__LIB_0__::func_521(4324, 1, -1);
					break;
				case joaat("HORN_HWEEN2"):
					__LIB_0__::func_521(4325, 1, -1);
					break;
			}
		}
		else if (Local_124.f_443 == 65)
		{
			switch (MISC::GET_HASH_KEY(&(Global_100493.f_484[iParam0 /*4*/])))
			{
				case joaat("BOBBLE_BRD1"):
					__LIB_0__::func_521(4300, 1, -1);
					break;
				case joaat("BOBBLE_BRD2"):
					__LIB_0__::func_521(4301, 1, -1);
					break;
				case joaat("BOBBLE_BRD3"):
					__LIB_0__::func_521(4302, 1, -1);
					break;
				case joaat("BOBBLE_SLH1"):
					__LIB_0__::func_521(4303, 1, -1);
					break;
				case joaat("BOBBLE_SLH2"):
					__LIB_0__::func_521(4304, 1, -1);
					break;
				case joaat("BOBBLE_SLH3"):
					__LIB_0__::func_521(4305, 1, -1);
					break;
				case joaat("BOBBLE_ZOM1"):
					__LIB_0__::func_521(4306, 1, -1);
					break;
				case joaat("BOBBLE_ZOM2"):
					__LIB_0__::func_521(4307, 1, -1);
					break;
				case joaat("BOBBLE_ZOM3"):
					__LIB_0__::func_521(4308, 1, -1);
					break;
				case joaat("BOBBLE_GC1"):
					__LIB_0__::func_521(4309, 1, -1);
					break;
				case joaat("BOBBLE_GC2"):
					__LIB_0__::func_521(4310, 1, -1);
					break;
				case joaat("BOBBLE_GC3"):
					__LIB_0__::func_521(4311, 1, -1);
					break;
				case joaat("BOBBLE_FRNK1"):
					__LIB_0__::func_521(4312, 1, -1);
					break;
				case joaat("BOBBLE_FRNK2"):
					__LIB_0__::func_521(4313, 1, -1);
					break;
				case joaat("BOBBLE_FRNK3"):
					__LIB_0__::func_521(4314, 1, -1);
					break;
				case joaat("BOBBLE_MUM1"):
					__LIB_0__::func_521(4315, 1, -1);
					break;
				case joaat("BOBBLE_MUM2"):
					__LIB_0__::func_521(4316, 1, -1);
					break;
				case joaat("BOBBLE_MUM3"):
					__LIB_0__::func_521(4317, 1, -1);
					break;
				case joaat("BOBBLE_WOLF1"):
					__LIB_0__::func_521(4318, 1, -1);
					break;
				case joaat("BOBBLE_WOLF2"):
					__LIB_0__::func_521(4319, 1, -1);
					break;
				case joaat("BOBBLE_WOLF3"):
					__LIB_0__::func_521(4320, 1, -1);
					break;
				case joaat("BOBBLE_VAMP1"):
					__LIB_0__::func_521(4321, 1, -1);
					break;
				case joaat("BOBBLE_VAMP2"):
					__LIB_0__::func_521(4322, 1, -1);
					break;
				case joaat("BOBBLE_VAMP3"):
					__LIB_0__::func_521(4323, 1, -1);
					break;
				}
			}
	}
}

int func_92(var uParam0, int iParam1, int iParam2)//Position - 0xCE3D3
{
	if (*uParam0 != -1)
	{
		if (uParam0->f_4 > iParam2)
		{
			return 0;
		}
	}
	*uParam0 = iParam1;
	uParam0->f_4 = iParam2;
	return 1;
}

void func_93(struct<3> Param0, var uParam1, var uParam2)//Position - 0xCE3FB
{
	__LIB_2__::func_0(Param0, uParam1, uParam2);
}

void func_94(char* sParam0, char* sParam1)//Position - 0xD0D79
{
	int iVar0;
	char* sVar1;
	char* sVar2;
	char* sVar3;
	iVar0 = Local_124.f_12;
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return;
	}
	sVar1 = sParam0;
	sVar2 = sParam1;
	sVar3 = "ARENA_MECH";
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_INJURED(iVar0))
		{
			AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iVar0, "MP_CAR_MOD_SHOP_MECHANIC_GROUP", 0f);
		}
	}
	if ((ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_INJURED(iVar0)) && !MISC::IS_STRING_NULL_OR_EMPTY(sVar3))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
		{
			AUDIO::PLAY_PED_AMBIENT_SPEECH_WITH_VOICE_NATIVE(iVar0, sVar1, sVar3, sVar2, true);
		}
		else
		{
			NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(NETWORK::PED_TO_NET(iVar0));
		}
	}
}

void func_95()//Position - 0xD0E6D
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
	}
}

void func_96(var uParam0)//Position - 0xD0E81
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		if (CAM::DOES_CAM_EXIST((*uParam0)[iVar0 /*12*/]))
		{
			CAM::SET_CAM_ACTIVE((*uParam0)[iVar0 /*12*/], false);
		}
		iVar0++;
	}
}

void func_97(bool bParam0)//Position - 0xD1361
{
	if (bParam0)
	{
		if (!BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_198, 20))
		{
			MISC::SET_BIT(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_198), 20);
		}
	}
	else if (BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_198, 20))
	{
		MISC::CLEAR_BIT(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_198), 20);
	}
}

int func_98(int iParam0)//Position - 0xD5443
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		switch (ENTITY::GET_ENTITY_MODEL(Local_124.f_406))
		{
			case joaat("youga3"):
				return 1;
				break;
		}
		if (((((__LIB_0__::func_174(ENTITY::GET_ENTITY_MODEL(iParam0), 0) && ENTITY::GET_ENTITY_MODEL(Local_124.f_406) != joaat("fcr2")) && !__LIB_1__::func_323(ENTITY::GET_ENTITY_MODEL(iParam0))) && !__LIB_0__::func_594(iParam0)) || ENTITY::GET_ENTITY_MODEL(Local_124.f_406) == joaat("rcbandito")) || ENTITY::GET_ENTITY_MODEL(Local_124.f_406) == joaat("minitank"))
		{
			return 0;
		}
	}
	return 1;
}

bool func_99()//Position - 0xD9D9A
{
	return DLC::IS_DLC_PRESENT(-1357982869);
}

float func_100(int iParam0)//Position - 0xDA169
{
	switch (iParam0)
	{
		case 0:
			return Global_262145.f_20217 /* Tunable: -480955863 */;
		case 1:
			return Global_262145.f_20218 /* Tunable: 1102868234 */;
		case 2:
			return Global_262145.f_20219 /* Tunable: 270240713 */;
		case 3:
			return Global_262145.f_20220 /* Tunable: 577941623 */;
		case 4:
			return Global_262145.f_20221 /* Tunable: 2024299745 */;
		case 5:
			return Global_262145.f_20222 /* Tunable: -153036456 */;
		default:
	}
	return Global_262145.f_20222 /* Tunable: -153036456 */;
}

void func_101(int iParam0, int iParam1, var uParam2)//Position - 0xF655F
{
	Global_1585308 = iParam0;
	Global_1585309 = iParam1;
	Global_1585310 = uParam2;
}

int func_102(int iParam0, int iParam1)//Position - 0xF6A65
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		if (iParam0 == Local_124.f_406)
		{
			return iLocal_484[iParam1];
		}
		else if ((((iParam1 == 21 || iParam1 == 17) || iParam1 == 19) || iParam1 == 18) || iParam1 == 20)
		{
			if (VEHICLE::IS_TOGGLE_MOD_ON(iParam0, iParam1))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else if (iParam1 == 22)
		{
			if (VEHICLE::IS_TOGGLE_MOD_ON(iParam0, iParam1))
			{
				switch (VEHICLE::GET_VEHICLE_XENON_LIGHT_COLOR_INDEX(iParam0))
				{
					case 255:
						return 1;
					case 0:
						return 2;
					case 1:
						return 3;
					case 2:
						return 4;
					case 3:
						return 5;
					case 4:
						return 6;
					case 5:
						return 7;
					case 6:
						return 8;
					case 7:
						return 9;
					case 8:
						return 10;
					case 9:
						return 11;
					case 10:
						return 12;
					case 11:
						return 13;
					case 12:
						return 14;
					default:
				}
			}
			else
			{
				return 0;
			}
		}
		else
		{
			return VEHICLE::GET_VEHICLE_MOD(iParam0, iParam1);
		}
	}
	return -1;
}

int func_103(int iParam0)//Position - 0xF74FA
{
	switch (iParam0)
	{
		case joaat("slamvan"):
		case joaat("glendale"):
			return 1;
			break;
	}
	return 0;
}

int func_104(int iParam0)//Position - 0xF7C41
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		switch (ENTITY::GET_ENTITY_MODEL(iParam0))
		{
			case joaat("futo"):
				if (Global_262145.f_24222 /* Tunable: ENABLE_FUTO_MODS */)
				{
					return 1;
				}
				break;
			case joaat("penumbra"):
				if (Global_262145.f_24228 /* Tunable: ENABLE_PENUMBRA_MODS */)
				{
					return 1;
				}
				break;
			case joaat("coquette2"):
				if (Global_262145.f_24230 /* Tunable: ENABLE_COQUETTE_MODS */)
				{
					return 1;
				}
				break;
			case joaat("mamba"):
				if (Global_262145.f_24229 /* Tunable: ENABLE_MAMBA_MODS */)
				{
					return 1;
				}
				break;
			case joaat("ruiner"):
				if (Global_262145.f_24223 /* Tunable: ENABLE_RUINER_MODS */)
				{
					return 1;
				}
				break;
			case joaat("prairie"):
				if (Global_262145.f_24225 /* Tunable: ENABLE_PRAIRIE_MODS */)
				{
					return 1;
				}
				break;
			case joaat("jester3"):
				if (Global_262145.f_24227 /* Tunable: ENABLE_JESTER_MODS */)
				{
					return 1;
				}
				break;
			case joaat("romero"):
				if (Global_262145.f_24224 /* Tunable: ENABLE_HEARSE_MODS */)
				{
					return 1;
				}
				break;
			case joaat("patriot"):
				if (Global_262145.f_24226 /* Tunable: ENABLE_PATRIOT_MODS */)
				{
					return 1;
				}
				break;
			}
	}
	return 0;
}

int func_105(int iParam0)//Position - 0xF7DC8
{
	int iVar0;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		return 0;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	if (__LIB_4__::func_566(iVar0))
	{
		if (VEHICLE::GET_VEHICLE_MOD(iParam0, 36) == -1)
		{
			return 1;
		}
	}
	return 0;
}

int func_106()//Position - 0xF7E6D
{
	switch (ENTITY::GET_ENTITY_MODEL(Local_124.f_406))
	{
		case joaat("btype3"):
		case joaat("calico"):
		case joaat("comet6"):
		case joaat("cypher"):
		case joaat("dominator7"):
		case joaat("jester4"):
		case joaat("remus"):
		case joaat("vectre"):
		case joaat("zr350"):
		case joaat("warrener2"):
		case joaat("rt3000"):
		case joaat("futo2"):
		case joaat("tailgater2"):
		case joaat("sultan3"):
		case joaat("dominator8"):
		case joaat("euros"):
		case joaat("growler"):
		case joaat("previon"):
		case joaat("torero2"):
		case joaat("corsita"):
		case joaat("kanjosj"):
		case joaat("postlude"):
		case joaat("draugur"):
		case joaat("greenwood"):
		case joaat("lm87"):
		case joaat("sentinel4"):
		case joaat("picador"):
			return 1;
			break;
	}
	return 0;
}

bool func_107(int iParam0)//Position - 0xF7F2E
{
	int iVar0;
	int iVar1;
	iVar0 = (iParam0 % 32);
	iVar1 = (iParam0 / 32);
	return BitTest(Global_102577[iVar1], iVar0);
}

int func_108()//Position - 0xFB39A
{
	if (ENTITY::DOES_ENTITY_EXIST(Global_1585308))
	{
		switch (ENTITY::GET_ENTITY_MODEL(Global_1585308))
		{
			case joaat("apc"):
			case joaat("halftrack"):
			case joaat("dune3"):
			case joaat("tampa3"):
			case joaat("trailersmall2"):
			case joaat("insurgent3"):
			case joaat("technical3"):
			case joaat("oppressor"):
			case joaat("comet4"):
			case joaat("deluxo"):
			case joaat("revolter"):
			case joaat("savestra"):
			case joaat("viseris"):
			case joaat("caracara"):
			case joaat("oppressor2"):
			case joaat("cerberus"):
			case joaat("monster3"):
			case joaat("slamvan4"):
			case joaat("issi4"):
			case joaat("deathbike"):
			case joaat("imperator"):
			case joaat("deathbike2"):
			case joaat("deathbike3"):
			case joaat("slamvan5"):
			case joaat("issi5"):
			case joaat("monster4"):
			case joaat("cerberus2"):
			case joaat("dominator5"):
			case joaat("slamvan6"):
			case joaat("issi6"):
			case joaat("monster5"):
			case joaat("cerberus3"):
			case joaat("dominator6"):
			case joaat("imperator2"):
			case joaat("imperator3"):
			case joaat("jb7002"):
			case joaat("minitank"):
				return 1;
			}
		default:
	}
	return 0;
}

int func_109()//Position - 0xFB49D
{
	if (ENTITY::DOES_ENTITY_EXIST(Global_1585308))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Global_1585308, false))
		{
			if ((((ENTITY::GET_ENTITY_MODEL(Global_1585308) == joaat("nero2") || ENTITY::GET_ENTITY_MODEL(Global_1585308) == joaat("comet3")) || ENTITY::GET_ENTITY_MODEL(Global_1585308) == joaat("elegy")) || ENTITY::GET_ENTITY_MODEL(Global_1585308) == joaat("italigtb2")) || ENTITY::GET_ENTITY_MODEL(Global_1585308) == joaat("specter2"))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_110()//Position - 0xFB522
{
	int iVar0;
	if (ENTITY::DOES_ENTITY_EXIST(Global_1585308))
	{
		iVar0 = ENTITY::GET_ENTITY_MODEL(Global_1585308);
		switch (iVar0)
		{
			case joaat("apc"):
			case joaat("dune3"):
			case joaat("halftrack"):
			case joaat("tampa3"):
			case joaat("insurgent3"):
			case joaat("technical3"):
			case joaat("oppressor"):
				return 1;
				break;
			default:
				if (__LIB_0__::func_596(iVar0))
				{
					return 1;
				}
				break;
			}
	}
	return 0;
}

int func_111()//Position - 0xFB6A0
{
	int iVar0;
	if (ENTITY::DOES_ENTITY_EXIST(Global_1585308))
	{
		iVar0 = ENTITY::GET_ENTITY_MODEL(Global_1585308);
		switch (iVar0)
		{
			case joaat("apc"):
			case joaat("halftrack"):
			case joaat("dune3"):
			case joaat("tampa3"):
			case joaat("trailersmall2"):
			case joaat("insurgent3"):
			case joaat("technical3"):
			case joaat("pounder2"):
			case joaat("speedo4"):
			case joaat("mule4"):
			case joaat("imperator"):
			case joaat("deathbike"):
			case joaat("cerberus"):
			case joaat("bruiser"):
			case joaat("dominator4"):
			case joaat("zr380"):
			case joaat("issi4"):
			case joaat("imperator2"):
			case joaat("deathbike2"):
			case joaat("cerberus2"):
			case joaat("bruiser2"):
			case joaat("dominator5"):
			case joaat("zr3802"):
			case joaat("issi5"):
			case joaat("imperator3"):
			case joaat("deathbike3"):
			case joaat("cerberus3"):
			case joaat("bruiser3"):
			case joaat("dominator6"):
			case joaat("zr3803"):
			case joaat("issi6"):
			case joaat("brutus"):
			case joaat("brutus2"):
			case joaat("brutus3"):
				return 1;
				break;
			default:
				if (__LIB_0__::func_596(iVar0))
				{
					return 1;
				}
				break;
			}
	}
	return 0;
}

int func_112()//Position - 0xFB7A8
{
	if (ENTITY::DOES_ENTITY_EXIST(Global_1585308))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Global_1585308, false))
		{
			switch (ENTITY::GET_ENTITY_MODEL(Global_1585308))
			{
				case joaat("monster3"):
				case joaat("cerberus"):
				case joaat("bruiser"):
				case joaat("brutus"):
				case joaat("scarab"):
				case joaat("dominator4"):
				case joaat("impaler2"):
				case joaat("imperator"):
				case joaat("imperator2"):
				case joaat("imperator3"):
				case joaat("zr380"):
				case joaat("issi4"):
				case joaat("slamvan4"):
				case joaat("rcbandito"):
				case joaat("impaler3"):
				case joaat("brutus2"):
				case joaat("bruiser2"):
				case joaat("slamvan5"):
				case joaat("issi5"):
				case joaat("monster4"):
				case joaat("scarab2"):
				case joaat("cerberus2"):
				case joaat("dominator5"):
				case joaat("zr3802"):
				case joaat("impaler4"):
				case joaat("brutus3"):
				case joaat("bruiser3"):
				case joaat("slamvan6"):
				case joaat("issi6"):
				case joaat("monster5"):
				case joaat("scarab3"):
				case joaat("cerberus3"):
				case joaat("dominator6"):
				case joaat("zr3803"):
				case joaat("deathbike"):
				case joaat("deathbike2"):
				case joaat("deathbike3"):
					return 1;
					break;
				}
			}
	}
	return 0;
}

int func_113()//Position - 0xFB8BA
{
	if (ENTITY::DOES_ENTITY_EXIST(Global_1585308))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Global_1585308, false))
		{
			switch (ENTITY::GET_ENTITY_MODEL(Global_1585308))
			{
				case joaat("monster3"):
				case joaat("cerberus"):
				case joaat("bruiser"):
				case joaat("brutus"):
				case joaat("scarab"):
				case joaat("dominator4"):
				case joaat("impaler2"):
				case joaat("imperator"):
				case joaat("imperator2"):
				case joaat("imperator3"):
				case joaat("zr380"):
				case joaat("issi4"):
				case joaat("deathbike"):
				case joaat("deathbike2"):
				case joaat("deathbike3"):
				case joaat("slamvan4"):
				case joaat("impaler3"):
				case joaat("brutus2"):
				case joaat("bruiser2"):
				case joaat("slamvan5"):
				case joaat("issi5"):
				case joaat("monster4"):
				case joaat("scarab2"):
				case joaat("cerberus2"):
				case joaat("dominator5"):
				case joaat("zr3802"):
				case joaat("impaler4"):
				case joaat("brutus3"):
				case joaat("bruiser3"):
				case joaat("slamvan6"):
				case joaat("issi6"):
				case joaat("monster5"):
				case joaat("scarab3"):
				case joaat("cerberus3"):
				case joaat("dominator6"):
				case joaat("zr3803"):
					return 1;
					break;
				}
			}
	}
	return 0;
}

int func_114()//Position - 0xFC71D
{
	if (((AUDIO::IS_AMBIENT_SPEECH_PLAYING(Local_124.f_12) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Local_124.f_12)) || AUDIO::IS_ANY_SPEECH_PLAYING(Local_124.f_12)) || AUDIO::IS_PED_IN_CURRENT_CONVERSATION(Local_124.f_12))
	{
		return 0;
	}
	if (CAM::IS_SCREEN_FADING_OUT() || CAM::IS_SCREEN_FADED_OUT())
	{
		return 0;
	}
	if (__LIB_1__::func_154(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	return 1;
}

void func_115()//Position - 0xFCD54
{
	Global_100493.f_7 = 3;
}

bool func_116()//Position - 0xFCD79
{
	return Global_100493.f_7 <= 0;
}

int func_117(bool bParam0)//Position - 0xFCE0C
{
	if (bParam0)
	{
		if ((((((((ENTITY::GET_ENTITY_MODEL(Local_124.f_406) == joaat("feltzer3") || ENTITY::GET_ENTITY_MODEL(Local_124.f_406) == joaat("coquette3")) || ENTITY::GET_ENTITY_MODEL(Local_124.f_406) == joaat("buccaneer2")) || ENTITY::GET_ENTITY_MODEL(Local_124.f_406) == joaat("faction2")) || ENTITY::GET_ENTITY_MODEL(Local_124.f_406) == joaat("moonbeam2")) || ENTITY::GET_ENTITY_MODEL(Local_124.f_406) == joaat("btype")) || ENTITY::GET_ENTITY_MODEL(Local_124.f_406) == joaat("btype2")) || ENTITY::GET_ENTITY_MODEL(Local_124.f_406) == joaat("btype3")) || ENTITY::GET_ENTITY_MODEL(Local_124.f_406) == joaat("banshee2"))
		{
			return 1;
		}
	}
	else if (((((ENTITY::GET_ENTITY_MODEL(Local_124.f_406) == joaat("buccaneer2") || ENTITY::GET_ENTITY_MODEL(Local_124.f_406) == joaat("faction2")) || ENTITY::GET_ENTITY_MODEL(Local_124.f_406) == joaat("moonbeam2")) || ENTITY::GET_ENTITY_MODEL(Local_124.f_406) == joaat("btype")) || ENTITY::GET_ENTITY_MODEL(Local_124.f_406) == joaat("btype2")) || ENTITY::GET_ENTITY_MODEL(Local_124.f_406) == joaat("btype3"))
	{
		return 1;
	}
	return 0;
}

bool func_118()//Position - 0xFFB70
{
	return NETWORK::NETWORK_IS_CABLE_CONNECTED();
}

int func_119()//Position - 0xFFE90
{
	if (Local_124.f_676 == 2)
	{
		return 1;
	}
	return 0;
}

int func_120(int iParam0)//Position - 0x10002E
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
	}
	return 0;
}

void func_121(bool bParam0)//Position - 0x10007C
{
	if (bParam0)
	{
		bLocal_427 = true;
	}
	else
	{
		bLocal_427 = false;
	}
}

void func_122(int iParam0, int iParam1)//Position - 0x102140
{
	MISC::CLEAR_BIT(&(Global_1649593.f_7057[iParam0]), iParam1);
}

void func_123(int iParam0, int iParam1)//Position - 0x102159
{
	MISC::SET_BIT(&(Global_1649593.f_7057[iParam0]), iParam1);
}

char* func_124(int iParam0)//Position - 0x102172
{
	switch (iParam0)
	{
		case 31:
			return "PERSO_MOD_SER" /* GXT: Service */;
		case 38:
			return "CMOD_MOD_COL";
		case 89:
			return "TUN_CLIENT_CHECP" /* GXT: Performance */;
		case 55:
			return "CMOD_MOD_WHEM";
		case 86:
			return "TOP_BODY" /* GXT: Bodywork */;
		case 0:
			return "TUN_CLIENT_CHECT" /* GXT: CHECKLIST */;
		default:
	}
	return "";
}

int func_125()//Position - 0x1021D8
{
	return 34780;
}

void func_126(char* sParam0)//Position - 0x1021F2
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam0);
	}
}

char* func_127(int iParam0)//Position - 0x10220A
{
	switch (iParam0)
	{
		case 0:
			return "CMOD_WHE1_5";
		case 1:
			return "CMOD_WHE1_3";
		case 2:
			return "CMOD_WHE1_2";
		case 3:
			return "CMOD_WHE1_6";
		case 4:
			return "CMOD_WHE1_4";
		case 5:
			return "CMOD_WHE1_7";
		case 6:
			return "CMOD_WHE1_0";
		case 7:
			return "CMOD_WHE1_1";
		case 8:
			return "CMOD_WHE1_8";
		case 9:
			return "CMOD_WHE1_9";
		case 10:
			return "CMOD_WHE1_10";
		case 11:
			return "CMOD_WHE1_11";
		case 12:
			return "CMOD_WHE1_12";
		default:
	}
	return "";
}

int func_128(int iParam0)//Position - 0x102303
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 1:
			return 147;
		case 2:
			return 1;
		case 3:
			return 11;
		case 4:
			return 2;
		case 5:
			return 3;
		case 6:
			return 4;
		case 7:
			return 5;
		case 8:
			return 6;
		case 9:
			return 7;
		case 10:
			return 8;
		case 11:
			return 9;
		case 12:
			return 10;
		case 13:
			return 27;
		case 14:
			return 28;
		case 15:
			return 29;
		case 16:
			return 150;
		case 17:
			return 30;
		case 18:
			return 31;
		case 19:
			return 32;
		case 20:
			return 33;
		case 21:
			return 34;
		case 22:
			return 143;
		case 23:
			return 35;
		case 24:
			return 135;
		case 25:
			return 137;
		case 26:
			return 136;
		case 27:
			return 36;
		case 28:
			return 38;
		case 29:
			return 138;
		case 30:
			return 37;
		case 31:
			return 90;
		case 32:
			return 88;
		case 33:
			return 89;
		case 34:
			return 91;
		case 35:
			return 49;
		case 36:
			return 50;
		case 37:
			return 51;
		case 38:
			return 52;
		case 39:
			return 53;
		case 40:
			return 54;
		case 41:
			return 92;
		case 42:
			return 141;
		case 43:
			return 61;
		case 44:
			return 62;
		case 45:
			return 63;
		case 46:
			return 64;
		case 47:
			return 65;
		case 48:
			return 66;
		case 49:
			return 67;
		case 50:
			return 68;
		case 51:
			return 69;
		case 52:
			return 73;
		case 53:
			return 70;
		case 54:
			return 74;
		case 55:
			return 96;
		case 56:
			return 101;
		case 57:
			return 95;
		case 58:
			return 94;
		case 59:
			return 97;
		case 60:
			return 103;
		case 61:
			return 104;
		case 62:
			return 98;
		case 63:
			return 100;
		case 64:
			return 102;
		case 65:
			return 99;
		case 66:
			return 105;
		case 67:
			return 106;
		case 68:
			return 71;
		case 69:
			return 72;
		case 70:
			return 146;
		case 71:
			return 145;
		case 72:
			return 107;
		case 73:
			return 111;
		case 74:
			return 112;
		default:
	}
	return 0;
}

void func_129(int iParam0)//Position - 0x102644
{
	if (iParam0 > -1)
	{
		HUD::ADD_TEXT_COMPONENT_INTEGER(iParam0);
	}
}

char* func_130(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x102658
{
	bool bVar0;
	int iVar1;
	bVar0 = false;
	if (iParam1 != -1 && iParam1 != -99)
	{
		bVar0 = true;
		iVar1++;
	}
	if (iParam2 != -1 && iParam2 != -99)
	{
		bVar0 = true;
		iVar1++;
	}
	if (iParam3 != -1 && iParam3 != -99)
	{
		bVar0 = true;
		iVar1++;
	}
	switch (iParam0)
	{
		case 1:
			if (!bVar0)
			{
				return "TUN_CLIENT_OB14" /* GXT: Requested upgrade: ~a~ (~a~). */;
			}
			else
			{
				return "TUN_CLIENT_OB17" /* GXT: Requested upgrade: ~a~ (~a~~1~). */;
			}
			break;
		case 2:
			if (!bVar0)
			{
				return "TUN_CLIENT_OB13" /* GXT: Requested upgrades: ~a~ (~a~), ~a~ (~a~). */;
			}
			else if (iVar1 == 2)
			{
				return "TUN_CLIENT_OB16" /* GXT: Requested upgrades: ~a~ (~a~~1~), ~a~ (~a~~1~). */;
			}
			else if ((iParam3 != -1 && iParam3 != -99) || (iParam2 != -1 && iParam3 == -99))
			{
				return "TUN_CLIENT_OB18" /* GXT: Requested upgrades: ~a~ (~a~), ~a~ (~a~~1~). */;
			}
			else
			{
				return "TUN_CLIENT_OB19" /* GXT: Requested upgrades: ~a~ (~a~~1~), ~a~ (~a~). */;
			}
			break;
		case 3:
			if (!bVar0)
			{
				return "TUN_CLIENT_OB12" /* GXT: Requested upgrades: ~a~ (~a~), ~a~ (~a~), ~a~ (~a~). */;
			}
			else if (iVar1 == 3)
			{
				return "TUN_CLIENT_OB15" /* GXT: Requested upgrades: ~a~ (~a~~1~), ~a~ (~a~~1~), ~a~ (~a~~1~). */;
			}
			else if (iVar1 == 2)
			{
				if (iParam1 != -1)
				{
					return "TUN_CLIENT_OB23" /* GXT: Requested upgrades: ~a~ (~a~), ~a~ (~a~~1~), ~a~ (~a~~1~). */;
				}
				else if (iParam2 != -1)
				{
					return "TUN_CLIENT_OB24" /* GXT: Requested upgrades: ~a~ (~a~~1~), ~a~ (~a~), ~a~ (~a~~1~). */;
				}
				else
				{
					return "TUN_CLIENT_OB25" /* GXT: Requested upgrades: ~a~ (~a~~1~), ~a~ (~a~~1~), ~a~ (~a~). */;
				}
			}
			else if (iParam1 != -1)
			{
				return "TUN_CLIENT_OB20" /* GXT: Requested upgrades: ~a~ (~a~~1~), ~a~ (~a~), ~a~ (~a~). */;
			}
			else if (iParam2 != -1)
			{
				return "TUN_CLIENT_OB21" /* GXT: Requested upgrades: ~a~ (~a~), ~a~ (~a~~1~), ~a~ (~a~). */;
			}
			else
			{
				return "TUN_CLIENT_OB22" /* GXT: Requested upgrades: ~a~ (~a~), ~a~ (~a~), ~a~ (~a~~1~). */;
			}
			break;
	}
	return "";
}

int func_131(char* sParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x1027CD
{
	if (ENTITY::DOES_ENTITY_EXIST(Local_124.f_406) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_124.f_406, false))
	{
		if (iParam1 == 14)
		{
			StringCopy(sParam0, __LIB_3__::func_663(iParam2), 16);
			return !MISC::IS_STRING_NULL_OR_EMPTY(sParam0);
		}
		else
		{
			iParam2 = (iParam2 - 1);
			if (!bParam3)
			{
				if (Local_124.f_443 == 8 && iParam1 == 2)
				{
					iParam2 = (iParam2 - 20);
				}
				else if (Local_124.f_443 == 15 && iParam1 == 9)
				{
					iParam2 = (iParam2 - 21);
				}
			}
			if (iParam2 >= 0)
			{
				if ((iParam1 == 23 || iParam1 == 24) && VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(Local_124.f_406)))
				{
					if (iParam2 < 26)
					{
						StringCopy(sParam0, VEHICLE::GET_MOD_TEXT_LABEL(Local_124.f_406, iParam1, iParam2), 16);
					}
					else if ((iParam2 >= 26 && iParam2 < 49) && Local_124.f_605 == 0)
					{
						StringCopy(sParam0, "BIKEW_", 16);
						StringIntConCat(sParam0, (iParam2 - 12), 16);
					}
					else if (iParam2 >= 49 && Local_124.f_605 == 1)
					{
						StringCopy(sParam0, "RWD_BIKEW_", 16);
						StringIntConCat(sParam0, (iParam2 - 35), 16);
					}
					if (MISC::GET_HASH_KEY(sParam0) != 0)
					{
						return 1;
					}
				}
				else
				{
					StringCopy(sParam0, VEHICLE::GET_MOD_TEXT_LABEL(Local_124.f_406, iParam1, iParam2), 16);
					if (MISC::GET_HASH_KEY(sParam0) != 0)
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_132(int iParam0)//Position - 0x10292D
{
	switch (iParam0)
	{
		case 0:
			return 34776;
		case 1:
			return 34777;
		case 2:
			return 34778;
		default:
	}
	return 0;
}

char* func_133(int iParam0)//Position - 0x1029E7
{
	switch (iParam0)
	{
		case 1:
			return "TUN_CLIENT_OBJ7" /* GXT: Requested upgrades: ~a~ (~a~). */;
		case 2:
			return "TUN_CLIENT_OBJ6" /* GXT: Requested upgrades: ~a~ (~a~), ~a~ (~a~). */;
		case 3:
			return "TUN_CLIENT_OBJ5" /* GXT: Requested upgrades: ~a~ (~a~), ~a~ (~a~), ~a~ (~a~). */;
		default:
	}
	return "";
}

int func_134(int iParam0)//Position - 0x1054DB
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		switch (ENTITY::GET_ENTITY_MODEL(iParam0))
		{
			case joaat("tampa3"):
			case joaat("barrage"):
			case joaat("pounder2"):
			case joaat("mule4"):
			case joaat("speedo4"):
			case joaat("oppressor2"):
			case joaat("imperator"):
			case joaat("bruiser"):
			case joaat("cerberus"):
			case joaat("monster3"):
			case joaat("scarab"):
			case joaat("slamvan4"):
			case joaat("dominator4"):
			case joaat("impaler2"):
			case joaat("zr380"):
			case joaat("brutus"):
			case joaat("issi4"):
			case joaat("deathbike"):
			case joaat("deathbike2"):
			case joaat("deathbike3"):
			case joaat("impaler3"):
			case joaat("brutus2"):
			case joaat("bruiser2"):
			case joaat("slamvan5"):
			case joaat("issi5"):
			case joaat("monster4"):
			case joaat("scarab2"):
			case joaat("cerberus2"):
			case joaat("dominator5"):
			case joaat("zr3802"):
			case joaat("impaler4"):
			case joaat("brutus3"):
			case joaat("bruiser3"):
			case joaat("slamvan6"):
			case joaat("issi6"):
			case joaat("monster5"):
			case joaat("scarab3"):
			case joaat("cerberus3"):
			case joaat("dominator6"):
			case joaat("zr3803"):
			case joaat("imperator2"):
			case joaat("imperator3"):
				return 1;
				break;
			}
	}
	return 0;
}

int func_135(int iParam0)//Position - 0x105663
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		switch (ENTITY::GET_ENTITY_MODEL(iParam0))
		{
			case joaat("imperator"):
			case joaat("torero"):
			case joaat("nightshark"):
			case joaat("barrage"):
			case joaat("bruiser"):
			case joaat("cerberus"):
			case joaat("monster3"):
			case joaat("scarab"):
			case joaat("slamvan4"):
			case joaat("dominator4"):
			case joaat("impaler2"):
			case joaat("zr380"):
			case joaat("brutus"):
			case joaat("issi4"):
			case joaat("deathbike"):
			case joaat("deathbike2"):
			case joaat("deathbike3"):
			case joaat("impaler3"):
			case joaat("brutus2"):
			case joaat("bruiser2"):
			case joaat("slamvan5"):
			case joaat("issi5"):
			case joaat("monster4"):
			case joaat("scarab2"):
			case joaat("cerberus2"):
			case joaat("dominator5"):
			case joaat("zr3802"):
			case joaat("impaler4"):
			case joaat("brutus3"):
			case joaat("bruiser3"):
			case joaat("slamvan6"):
			case joaat("issi6"):
			case joaat("monster5"):
			case joaat("scarab3"):
			case joaat("cerberus3"):
			case joaat("dominator6"):
			case joaat("zr3803"):
			case joaat("imperator2"):
			case joaat("imperator3"):
				return 1;
			}
		default:
	}
	return 0;
}

int func_136()//Position - 0x10576F
{
	if (ENTITY::DOES_ENTITY_EXIST(Local_124.f_406))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_124.f_406, false))
		{
			if (ENTITY::GET_ENTITY_MODEL(Local_124.f_406) == joaat("diablous2") || ENTITY::GET_ENTITY_MODEL(Local_124.f_406) == joaat("fcr2"))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_137(int iParam0)//Position - 0x1057C0
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		switch (ENTITY::GET_ENTITY_MODEL(iParam0))
		{
			case joaat("sultanrs"):
			case joaat("elegy"):
			case joaat("nero2"):
			case joaat("gauntlet5"):
			case joaat("youga3"):
			case joaat("warrener2"):
			case joaat("euros"):
			case joaat("tenf2"):
				return 1;
			}
		default:
	}
	return 0;
}

int func_138(int iParam0)//Position - 0x105812
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		switch (ENTITY::GET_ENTITY_MODEL(iParam0))
		{
			case joaat("sultanrs"):
			case joaat("elegy"):
			case joaat("comet3"):
			case joaat("italigtb2"):
			case joaat("slamvan4"):
			case joaat("slamvan5"):
			case joaat("slamvan6"):
			case joaat("youga3"):
			case joaat("yosemite3"):
			case joaat("vectre"):
			case joaat("comet6"):
			case joaat("cypher"):
			case joaat("previon"):
			case joaat("euros"):
			case joaat("sultan3"):
			case joaat("kanjosj"):
				return 1;
			}
		default:
	}
	return 0;
}

int func_139(int iParam0)//Position - 0x105894
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		switch (ENTITY::GET_ENTITY_MODEL(iParam0))
		{
			case joaat("sultanrs"):
			case joaat("elegy"):
			case joaat("bruiser"):
			case joaat("bruiser2"):
			case joaat("bruiser3"):
			case joaat("brutus"):
			case joaat("brutus2"):
			case joaat("brutus3"):
			case joaat("cerberus"):
			case joaat("cerberus2"):
			case joaat("cerberus3"):
			case joaat("deathbike"):
			case joaat("deathbike2"):
			case joaat("deathbike3"):
			case joaat("dominator4"):
			case joaat("dominator5"):
			case joaat("dominator6"):
			case joaat("impaler2"):
			case joaat("impaler3"):
			case joaat("impaler4"):
			case joaat("imperator"):
			case joaat("imperator2"):
			case joaat("imperator3"):
			case joaat("issi4"):
			case joaat("issi5"):
			case joaat("issi6"):
			case joaat("monster3"):
			case joaat("monster4"):
			case joaat("monster5"):
			case joaat("scarab"):
			case joaat("scarab2"):
			case joaat("scarab3"):
			case joaat("slamvan4"):
			case joaat("slamvan5"):
			case joaat("slamvan6"):
			case joaat("zr380"):
			case joaat("zr3802"):
			case joaat("zr3803"):
			case joaat("kanjo"):
			case joaat("calico"):
			case joaat("comet6"):
			case joaat("sultan3"):
			case joaat("remus"):
			case joaat("rt3000"):
			case joaat("brioso3"):
			case joaat("sentinel4"):
				return 1;
				break;
			}
	}
	return 0;
}

int func_140(int iParam0)//Position - 0x105A61
{
	switch (iParam0)
	{
		case joaat("sultanrs"):
		case joaat("elegy"):
		case joaat("calico"):
		case joaat("warrener2"):
		case joaat("remus"):
		case joaat("jester4"):
		case joaat("vectre"):
		case joaat("rt3000"):
		case joaat("dominator7"):
		case joaat("sultan3"):
		case joaat("tailgater2"):
		case joaat("previon"):
		case joaat("futo2"):
		case joaat("euros"):
			return 1;
			break;
	}
	return 0;
}

char* func_141(int iParam0)//Position - 0x105ACC
{
	switch (iParam0)
	{
		case 0:
			return "CMM_MOD_BOM";
			break;
		case 1:
			return "CMM_MOD_UWE";
			break;
		case 2:
			return "CMM_MOD_ARW";
			break;
	}
	return "CMM_MOD_BOM";
}

int func_142(int iParam0, int iParam1)//Position - 0x105B13
{
	switch (iParam0)
	{
		case joaat("slamvan"):
		case joaat("glendale"):
			if (iParam1 == 0)
			{
				return 0;
			}
			else
			{
				return 2;
			}
			break;
		case joaat("technical"):
		case joaat("insurgent"):
			return 1;
			break;
		case joaat("ratloader"):
		case joaat("ratloader2"):
		case joaat("deveste"):
		case joaat("issi3"):
		case joaat("gargoyle"):
		case joaat("monster3"):
		case joaat("bruiser"):
		case joaat("bruiser2"):
		case joaat("bruiser3"):
		case joaat("impaler2"):
		case joaat("impaler"):
		case joaat("impaler3"):
		case joaat("impaler4"):
		case joaat("vamos"):
		case joaat("issi4"):
		case joaat("deathbike"):
		case joaat("deathbike2"):
		case joaat("deathbike3"):
		case joaat("dominator"):
		case joaat("dominator2"):
		case joaat("dominator4"):
		case joaat("dominator5"):
		case joaat("dominator6"):
		case joaat("slamvan4"):
		case joaat("imperator"):
		case joaat("zr380"):
		case joaat("cerberus"):
		case joaat("scarab"):
		case joaat("brutus"):
		case joaat("imperator2"):
		case joaat("imperator3"):
		case joaat("zr3802"):
		case joaat("zr3803"):
		case joaat("cerberus2"):
		case joaat("scarab2"):
		case joaat("brutus2"):
		case joaat("cerberus3"):
		case joaat("scarab3"):
		case joaat("brutus3"):
		case joaat("slamvan5"):
		case joaat("slamvan6"):
		case joaat("monster4"):
		case joaat("monster5"):
		case joaat("issi5"):
		case joaat("issi6"):
			return 2;
			break;
	}
	return 0;
}

int func_143(int iParam0)//Position - 0x105C6B
{
	switch (iParam0)
	{
		case joaat("gauntlet3"):
		case joaat("euros"):
		case joaat("growler"):
			return 1;
			break;
	}
	return 0;
}

int func_144(int iParam0)//Position - 0x105C94
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		switch (ENTITY::GET_ENTITY_MODEL(iParam0))
		{
			case joaat("blazer4"):
			case joaat("deluxo"):
			case joaat("sc1"):
			case joaat("ellie"):
			case joaat("flashgt"):
			case joaat("dominator3"):
			case joaat("swinger"):
			case joaat("freecrawler"):
			case joaat("imperator"):
			case joaat("scarab"):
			case joaat("issi4"):
			case joaat("dominator4"):
			case joaat("dominator5"):
			case joaat("dominator6"):
			case joaat("zorrusso"):
			case joaat("locust"):
			case joaat("asbo"):
			case joaat("vstr"):
			case joaat("formula"):
			case joaat("formula2"):
			case joaat("dukes3"):
			case joaat("manana2"):
			case joaat("seminole2"):
			case joaat("openwheel1"):
			case joaat("openwheel2"):
			case joaat("slamtruck"):
			case joaat("buffalo4"):
				return 1;
				break;
			}
	}
	return 0;
}

int func_145()//Position - 0x105D5B
{
	if (ENTITY::DOES_ENTITY_EXIST(Global_103231))
	{
		return 1;
	}
	return 0;
}

bool func_146()//Position - 0x105D73
{
	return BitTest(uLocal_202, 19);
}

bool func_147()//Position - 0x105D81
{
	return BitTest(uLocal_202, 14);
}

int func_148(int iParam0)//Position - 0x105D8F
{
	switch (iParam0)
	{
		case 0:
			return 34770;
		case 1:
			return 34771;
		case 2:
			return 34772;
		default:
	}
	return 0;
}

char* func_149(int iParam0)//Position - 0x105FEF
{
	switch (iParam0)
	{
		case 1:
			return "BLACK" /* GXT: Black */;
			break;
		case 2:
			return "BLACK_GRAPHITE" /* GXT: Carbon Black */;
			break;
		case 3:
			return "GRAPHITE" /* GXT: Graphite */;
			break;
		case 4:
			return "ANTHR_BLACK" /* GXT: Anthracite Black */;
			break;
		case 5:
			return "BLACK_STEEL" /* GXT: Black Steel */;
			break;
		case 6:
			return "DARK_SILVER" /* GXT: Dark Steel */;
			break;
		case 8:
			return "SILVER" /* GXT: Silver */;
			break;
		case 9:
			return "BLUE_SILVER" /* GXT: Bluish Silver */;
			break;
		case 10:
			return "ROLLED_STEEL" /* GXT: Rolled Steel */;
			break;
		case 11:
			return "SHADOW_SILVER" /* GXT: Shadow Silver */;
			break;
		case 12:
			return "STONE_SILVER" /* GXT: Stone Silver */;
			break;
		case 13:
			return "MIDNIGHT_SILVER" /* GXT: Midnight Silver */;
			break;
		case 14:
			return "CAST_IRON_SIL" /* GXT: Cast Iron Silver */;
			break;
		case 15:
			return "RED" /* GXT: Red */;
			break;
		case 16:
			return "TORINO_RED" /* GXT: Torino Red */;
			break;
		case 17:
			return "FORMULA_RED" /* GXT: Formula Red */;
			break;
		case 18:
			return "LAVA_RED" /* GXT: Lava Red */;
			break;
		case 19:
			return "BLAZE_RED" /* GXT: Blaze Red */;
			break;
		case 20:
			return "GRACE_RED" /* GXT: Grace Red */;
			break;
		case 21:
			return "GARNET_RED" /* GXT: Garnet Red */;
			break;
		case 22:
			return "SUNSET_RED" /* GXT: Sunset Red */;
			break;
		case 24:
			return "CABERNET_RED" /* GXT: Cabernet Red */;
			break;
		case 23:
			return "WINE_RED" /* GXT: Wine Red */;
			break;
		case 25:
			return "CANDY_RED" /* GXT: Candy Red */;
			break;
		case 26:
			return "HOT PINK" /* GXT: Hot Pink */;
			break;
		case 27:
			return "PINK" /* GXT: Pfister Pink */;
			break;
		case 28:
			return "SALMON_PINK" /* GXT: Salmon Pink */;
			break;
		case 29:
			return "SUNRISE_ORANGE" /* GXT: Sunrise Orange */;
			break;
		case 30:
			return "ORANGE" /* GXT: Orange */;
			break;
		case 31:
			return "BRIGHT_ORANGE" /* GXT: Bright Orange */;
			break;
		case 32:
			return "GOLD" /* GXT: Gold */;
			break;
		case 33:
			return "BRONZE" /* GXT: Bronze */;
			break;
		case 34:
			return "YELLOW" /* GXT: Yellow */;
			break;
		case 35:
			return "RACE_YELLOW" /* GXT: Race Yellow */;
			break;
		case 85:
			return "FLUR_YELLOW" /* GXT: Dew Yellow */;
			break;
		case 37:
			return "DARK_GREEN" /* GXT: Dark Green */;
			break;
		case 38:
			return "RACING_GREEN" /* GXT: Racing Green */;
			break;
		case 39:
			return "SEA_GREEN" /* GXT: Sea Green */;
			break;
		case 40:
			return "OLIVE_GREEN" /* GXT: Olive Green */;
			break;
		case 41:
			return "BRIGHT_GREEN" /* GXT: Bright Green */;
			break;
		case 42:
			return "PETROL_GREEN" /* GXT: Gasoline Green */;
			break;
		case 43:
			return "LIME_GREEN" /* GXT: Lime Green */;
			break;
		case 44:
			return "MIDNIGHT_BLUE" /* GXT: Midnight Blue */;
			break;
		case 45:
			return "GALAXY_BLUE" /* GXT: Galaxy Blue */;
			break;
		case 46:
			return "DARK_BLUE" /* GXT: Dark Blue */;
			break;
		case 47:
			return "SAXON_BLUE" /* GXT: Saxon Blue */;
			break;
		case 48:
			return "BLUE" /* GXT: Blue */;
			break;
		case 49:
			return "MARINER_BLUE" /* GXT: Mariner Blue */;
			break;
		case 50:
			return "HARBOR_BLUE" /* GXT: Harbor Blue */;
			break;
		case 51:
			return "DIAMOND_BLUE" /* GXT: Diamond Blue */;
			break;
		case 52:
			return "SURF_BLUE" /* GXT: Surf Blue */;
			break;
		case 53:
			return "NAUTICAL_BLUE" /* GXT: Nautical Blue */;
			break;
		case 54:
			return "RACING_BLUE" /* GXT: Racing Blue */;
			break;
		case 55:
			return "ULTRA_BLUE" /* GXT: Ultra Blue */;
			break;
		case 56:
			return "LIGHT_BLUE" /* GXT: Light Blue */;
			break;
		case 57:
			return "CHOCOLATE_BROWN" /* GXT: Chocolate Brown */;
			break;
		case 58:
			return "BISON_BROWN" /* GXT: Bison Brown */;
			break;
		case 59:
			return "CREEK_BROWN" /* GXT: Creek Brown */;
			break;
		case 60:
			return "UMBER_BROWN" /* GXT: Feltzer Brown */;
			break;
		case 61:
			return "MAPLE_BROWN" /* GXT: Maple Brown */;
			break;
		case 62:
			return "BEECHWOOD_BROWN" /* GXT: Beechwood Brown */;
			break;
		case 63:
			return "SIENNA_BROWN" /* GXT: Sienna Brown */;
			break;
		case 64:
			return "SADDLE_BROWN" /* GXT: Saddle Brown */;
			break;
		case 65:
			return "MOSS_BROWN" /* GXT: Moss Brown */;
			break;
		case 66:
			return "WOODBEECH_BROWN" /* GXT: Woodbeech Brown */;
			break;
		case 67:
			return "STRAW_BROWN" /* GXT: Straw Brown */;
			break;
		case 68:
			return "SANDY_BROWN" /* GXT: Sandy Brown */;
			break;
		case 69:
			return "BLEECHED_BROWN" /* GXT: Bleached Brown */;
			break;
		case 70:
			return "PURPLE" /* GXT: Schafter Purple */;
			break;
		case 71:
			return "SPIN_PURPLE" /* GXT: Spinnaker Purple */;
			break;
		case 72:
			return "MIGHT_PURPLE" /* GXT: Midnight Purple */;
			break;
		case 73:
			return "BRIGHT_PURPLE" /* GXT: Bright Purple */;
			break;
		case 74:
			return "CREAM" /* GXT: Cream */;
			break;
		case 75:
			return "WHITE" /* GXT: Ice White */;
			break;
		case 76:
			return "FROST_WHITE" /* GXT: Frost White */;
			break;
	}
	return "";
}

int func_150(int iParam0)//Position - 0x1064B1
{
	switch (iParam0)
	{
		case 0:
			return 1;
			break;
		case 1:
			return 2;
			break;
		case 2:
			return 3;
			break;
		case 3:
			return 4;
			break;
		case 4:
			return 5;
			break;
		case 5:
			return 6;
			break;
		case 6:
			return 8;
			break;
		case 7:
			return 9;
			break;
		case 8:
			return 10;
			break;
		case 9:
			return 11;
			break;
		case 10:
			return 12;
			break;
		case 11:
			return 13;
			break;
		case 12:
			return 14;
			break;
		case 13:
			return 15;
			break;
		case 14:
			return 16;
			break;
		case 15:
			return 17;
			break;
		case 16:
			return 18;
			break;
		case 17:
			return 19;
			break;
		case 18:
			return 20;
			break;
		case 19:
			return 21;
			break;
		case 20:
			return 22;
			break;
		case 21:
			return 24;
			break;
		case 22:
			return 23;
			break;
		case 23:
			return 25;
			break;
		case 24:
			return 26;
			break;
		case 25:
			return 27;
			break;
		case 26:
			return 28;
			break;
		case 27:
			return 29;
			break;
		case 28:
			return 30;
			break;
		case 29:
			return 31;
			break;
		case 30:
			return 32;
			break;
		case 31:
			return 33;
			break;
		case 32:
			return 34;
			break;
		case 33:
			return 35;
			break;
		case 34:
			return 85;
			break;
		case 35:
			return 37;
			break;
		case 36:
			return 38;
			break;
		case 37:
			return 39;
			break;
		case 38:
			return 40;
			break;
		case 39:
			return 41;
			break;
		case 40:
			return 42;
			break;
		case 41:
			return 43;
			break;
		case 42:
			return 44;
			break;
		case 43:
			return 45;
			break;
		case 44:
			return 46;
			break;
		case 45:
			return 47;
			break;
		case 46:
			return 48;
			break;
		case 47:
			return 49;
			break;
		case 48:
			return 50;
			break;
		case 49:
			return 51;
			break;
		case 50:
			return 52;
			break;
		case 51:
			return 53;
			break;
		case 52:
			return 54;
			break;
		case 53:
			return 55;
			break;
		case 54:
			return 56;
			break;
		case 55:
			return 57;
			break;
		case 56:
			return 58;
			break;
		case 57:
			return 59;
			break;
		case 58:
			return 60;
			break;
		case 59:
			return 61;
			break;
		case 60:
			return 62;
			break;
		case 61:
			return 63;
			break;
		case 62:
			return 64;
			break;
		case 63:
			return 65;
			break;
		case 64:
			return 66;
			break;
		case 65:
			return 67;
			break;
		case 66:
			return 68;
			break;
		case 67:
			return 69;
			break;
		case 68:
			return 70;
			break;
		case 69:
			return 71;
			break;
		case 70:
			return 72;
			break;
		case 71:
			return 73;
			break;
		case 72:
			return 74;
			break;
		case 73:
			return 75;
			break;
		case 74:
			return 76;
			break;
	}
	return 0;
}

int func_151(int iParam0)//Position - 0x1076D5
{
	switch (iParam0)
	{
		case 0:
			return 31703;
			break;
		case 1:
			return 31705;
			break;
	}
	return 0;
}

int func_152(int iParam0, int iParam1)//Position - 0x10779D
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 31685;
				case 1:
					return 31686;
				case 2:
					return 31687;
				default:
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return 31698;
				case 1:
					return 31699;
				case 2:
					return 31700;
				default:
			}
			break;
	}
	return 0;
}

int func_153(int iParam0, int iParam1)//Position - 0x107938
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 31679;
				case 1:
					return 31680;
				case 2:
					return 31681;
				default:
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return 31692;
				case 1:
					return 31693;
				case 2:
					return 31694;
				default:
			}
			break;
	}
	return 0;
}

int func_154()//Position - 0x107C50
{
	switch (ENTITY::GET_ENTITY_MODEL(Local_124.f_406))
	{
		case joaat("tornado5"):
		case joaat("infernus2"):
		case joaat("cheetah2"):
		case joaat("xa21"):
		case joaat("dominator3"):
		case joaat("italigto"):
		case joaat("brioso2"):
		case joaat("greenwood"):
		case joaat("sentinel4"):
			return 1;
			break;
		case joaat("z190"):
			if (VEHICLE::GET_VEHICLE_MOD(Local_124.f_406, 7) != 0)
			{
				return 1;
			}
			break;
	}
	if (__LIB_1__::func_932(ENTITY::GET_ENTITY_MODEL(Local_124.f_406)))
	{
		return 1;
	}
	return 0;
}

int func_155(int iParam0)//Position - 0x107CEB
{
	if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(Local_124.f_406)))
	{
		return 0;
	}
	switch (ENTITY::GET_ENTITY_MODEL(Local_124.f_406))
	{
		case joaat("youga3"):
			return 0;
			break;
	}
	switch (iParam0)
	{
		case 82:
			return 1;
			break;
	}
	if (fLocal_172 > 0f)
	{
		if (!BitTest(uLocal_517, 2))
		{
			return 1;
		}
	}
	return 0;
}

int func_156(int iParam0, int iParam1, bool bParam2)//Position - 0x107D4E
{
	switch (iParam0)
	{
		case 68:
			if (ENTITY::GET_ENTITY_MODEL(iParam1) != joaat("yosemite3"))
			{
				return 1;
			}
			break;
		case 83:
			switch (ENTITY::GET_ENTITY_MODEL(iParam1))
			{
				case joaat("elegy"):
					if (bParam2)
					{
						return 1;
					}
					break;
			}
			break;
		case 84:
			if (ENTITY::GET_ENTITY_MODEL(iParam1) == joaat("weevil2"))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_157(int iParam0)//Position - 0x107DBA
{
	switch (ENTITY::GET_ENTITY_MODEL(Local_124.f_406))
	{
		case joaat("cheetah2"):
		case joaat("xa21"):
		case joaat("dominator3"):
		case joaat("z190"):
			if (VEHICLE::GET_VEHICLE_MOD(Local_124.f_406, 7) != 0)
			{
				return 1;
			}
			break;
	}
	switch (iParam0)
	{
		case 84:
			switch (ENTITY::GET_ENTITY_MODEL(Local_124.f_406))
			{
				case joaat("dominator7"):
				case joaat("futo2"):
				case joaat("rt3000"):
				case joaat("postlude"):
					return 1;
					break;
			}
			break;
		case 79:
			switch (ENTITY::GET_ENTITY_MODEL(Local_124.f_406))
			{
				case joaat("previon"):
					return 1;
					break;
			}
			break;
		case 82:
			switch (ENTITY::GET_ENTITY_MODEL(Local_124.f_406))
			{
				case joaat("dominator8"):
					return 1;
					break;
			}
			break;
		case 9:
			switch (ENTITY::GET_ENTITY_MODEL(Local_124.f_406))
			{
				case joaat("z190"):
				case joaat("dominator3"):
				case joaat("italigto"):
				case joaat("brioso2"):
				case joaat("rt3000"):
				case joaat("tailgater2"):
					return 1;
					break;
			}
			break;
		case 63:
			switch (ENTITY::GET_ENTITY_MODEL(Local_124.f_406))
			{
				case joaat("remus"):
					return 1;
					break;
			}
			break;
		case 76:
			switch (ENTITY::GET_ENTITY_MODEL(Local_124.f_406))
			{
				case joaat("kanjosj"):
				case joaat("postlude"):
					return 1;
					break;
			}
			break;
		case 77:
			switch (ENTITY::GET_ENTITY_MODEL(Local_124.f_406))
			{
				case joaat("greenwood"):
				case joaat("kanjosj"):
					return 1;
					break;
			}
			break;
		case 78:
			switch (ENTITY::GET_ENTITY_MODEL(Local_124.f_406))
			{
				case joaat("kanjosj"):
				case joaat("postlude"):
					return 1;
					break;
			}
			break;
		case 23:
			switch (ENTITY::GET_ENTITY_MODEL(Local_124.f_406))
			{
				case joaat("lm87"):
					return 1;
					break;
			}
			break;
	}
	return 0;
}

int func_158(int iParam0)//Position - 0x1082F6
{
	switch (iParam0)
	{
		case 2:
			switch (ENTITY::GET_ENTITY_MODEL(Local_124.f_406))
			{
				case joaat("lm87"):
					return 1;
					break;
			}
			break;
		case 23:
			switch (ENTITY::GET_ENTITY_MODEL(Local_124.f_406))
			{
				case joaat("lm87"):
					return 1;
					break;
			}
			break;
	}
	return 0;
}

int func_159(int iParam0, int iParam1)//Position - 0x108350
{
	int iVar0;
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam1);
	switch (iParam0)
	{
		case 74:
		case 75:
			switch (iVar0)
			{
				case joaat("remus"):
				case joaat("brioso3"):
					return 0;
					break;
			}
			return 1;
			break;
		case 78:
			switch (iVar0)
			{
				case joaat("comet3"):
					return 1;
					break;
			}
			break;
		case 52:
			if (iVar0 == joaat("asbo"))
			{
				return 1;
			}
			break;
		case 23:
			if (iVar0 == joaat("lm87"))
			{
				return 1;
			}
			break;
		case 76:
			if (iVar0 == joaat("brioso3") && Local_124.f_116.f_1 >= 2)
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_160(char* sParam0)//Position - 0x108566
{
	MemCopy(sParam0, {Global_23150.f_5081}, 4);
}

int func_161(char* sParam0)//Position - 0x1090B2
{
	int iVar0;
	char* sVar1;
	iVar0 = 0;
	while (iVar0 <= (HUD::GET_LENGTH_OF_LITERAL_STRING(sParam0) - 1))
	{
		sVar1 = HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME(sParam0, iVar0, iVar0 + 1);
		if (MISC::ARE_STRINGS_EQUAL(".", sVar1) || MISC::ARE_STRINGS_EQUAL(",", sVar1))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

void func_162()//Position - 0x10A3CC
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Local_124.f_447)
	{
		Local_124.f_447[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_124.f_468)
	{
		Local_124.f_468[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_100493.f_484)
	{
		StringCopy(&(Global_100493.f_484[iVar0 /*4*/]), "", 16);
		StringCopy(&(Global_100493.f_1557[iVar0 /*4*/]), "", 16);
		iVar0++;
	}
}

void func_163(var uParam0, bool bParam1)//Position - 0x10CCF4
{
	int iVar0;
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	if (bParam1)
	{
		iVar0 = (uParam0->f_653 - 1);
		MISC::SET_BIT(&(uParam0->f_653[iVar0]), 31);
	}
	else
	{
		iVar0 = (uParam0->f_663 - 1);
		MISC::SET_BIT(&(uParam0->f_663[iVar0]), 31);
	}
}

int func_164(var uParam0, bool bParam1)//Position - 0x10CD3F
{
	int iVar0;
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 1;
	}
	if (bParam1)
	{
		iVar0 = (uParam0->f_653 - 1);
		return BitTest(uParam0->f_653[iVar0], 31);
	}
	else
	{
		iVar0 = (uParam0->f_663 - 1);
		return BitTest(uParam0->f_663[iVar0], 31);
	}
	return 0;
}

int func_165(int iParam0, int iParam1)//Position - 0x10CEC6
{
	if (iParam0 == 4)
	{
		if (iParam1 == 3 || iParam1 == 4)
		{
			return 1;
		}
	}
	return 0;
}

void func_166(int iParam0, bool bParam1, bool bParam2)//Position - 0x10D040
{
	int iVar0;
	iVar0 = 0;
	if (!bParam1)
	{
		iVar0 = 10;
	}
	if (iParam0 == 1)
	{
		if (bParam2)
		{
			MISC::SET_BIT(&uLocal_497, iVar0);
		}
		else
		{
			MISC::CLEAR_BIT(&uLocal_497, iVar0);
		}
		return;
	}
	if (iParam0 == 0)
	{
		if (bParam2)
		{
			MISC::SET_BIT(&uLocal_497, iVar0 + 1);
		}
		else
		{
			MISC::CLEAR_BIT(&uLocal_497, iVar0 + 1);
		}
		return;
	}
	if (iParam0 == 2)
	{
		if (bParam2)
		{
			MISC::SET_BIT(&uLocal_497, iVar0 + 2);
		}
		else
		{
			MISC::CLEAR_BIT(&uLocal_497, iVar0 + 2);
		}
		return;
	}
	if (iParam0 == 5)
	{
		if (bParam2)
		{
			MISC::SET_BIT(&uLocal_497, iVar0 + 3);
		}
		else
		{
			MISC::CLEAR_BIT(&uLocal_497, iVar0 + 3);
		}
		return;
	}
	if (iParam0 == 3)
	{
		if (bParam2)
		{
			MISC::SET_BIT(&uLocal_497, iVar0 + 4);
		}
		else
		{
			MISC::CLEAR_BIT(&uLocal_497, iVar0 + 4);
		}
		return;
	}
	if (iParam0 == 4)
	{
		if (bParam2)
		{
			MISC::SET_BIT(&uLocal_497, iVar0 + 5);
		}
		else
		{
			MISC::CLEAR_BIT(&uLocal_497, iVar0 + 5);
		}
		return;
	}
}

void func_167(int iParam0)//Position - 0x10D29A
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		if (!DECORATOR::DECOR_EXIST_ON(iParam0, "Sprayed_Vehicle_Decorator"))
		{
			DECORATOR::DECOR_SET_BOOL(iParam0, "Sprayed_Vehicle_Decorator", true);
			if (!DECORATOR::DECOR_EXIST_ON(iParam0, "Sprayed_Vehicle_Timer_Dec"))
			{
				DECORATOR::DECOR_SET_TIME(iParam0, "Sprayed_Vehicle_Timer_Dec", NETWORK::GET_NETWORK_TIME());
			}
		}
	}
}

char* func_168(int iParam0)//Position - 0x10F680
{
	switch (iParam0)
	{
		case joaat("bruiser"):
			return "bruiser_APOC";
			break;
		case joaat("bruiser2"):
			return "bruiser_SCIFI";
			break;
		case joaat("bruiser3"):
			return "bruiser_CONS";
			break;
		case joaat("deathbike"):
			return "deathbike_APOC";
			break;
		case joaat("deathbike2"):
			return "deathbike_SCIFI";
			break;
		case joaat("deathbike3"):
			return "deathbike_CONS";
			break;
		case joaat("issi4"):
			return "issi_APOC";
			break;
		case joaat("issi5"):
			return "issi_SCIFI";
			break;
		case joaat("issi6"):
			return "issi_CONS";
			break;
		case joaat("monster3"):
			return "sasquatch_APOC";
			break;
		case joaat("monster4"):
			return "sasquatch_SCIFI";
			break;
		case joaat("monster5"):
			return "sasquatch_CONS";
			break;
		case joaat("slamvan4"):
			return "slamvan_APOC";
			break;
		case joaat("slamvan5"):
			return "slamvan_SCIFI";
			break;
		case joaat("slamvan6"):
			return "slamvan_CONS";
			break;
		case joaat("dominator4"):
			return "dominator_APOC";
			break;
		case joaat("dominator5"):
			return "dominator_SCIFI";
			break;
		case joaat("dominator6"):
			return "dominator_CONS";
			break;
		case joaat("impaler2"):
			return "Impaler_APOC";
			break;
		case joaat("impaler3"):
			return "Impaler_SCIFI";
			break;
		case joaat("impaler4"):
			return "Impaler_CONS";
			break;
	}
	return "";
}

int func_169(char* sParam0)//Position - 0x113845
{
	int iVar0;
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 1;
	}
	iVar0 = MISC::GET_HASH_KEY(HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME(sParam0, 0, 6));
	switch (iVar0)
	{
		case 0:
			return 0;
			break;
	}
	return 0;
}

int func_170(char* sParam0)//Position - 0x11387D
{
	int iVar0;
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 1;
	}
	iVar0 = MISC::GET_HASH_KEY(HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME(sParam0, 0, 6));
	switch (iVar0)
	{
		case joaat("CLO_HA"):
		case joaat("TAT_HA"):
			return 1;
			break;
	}
	iVar0 = MISC::GET_HASH_KEY(sParam0);
	switch (iVar0)
	{
		case joaat("CC_MKUP_42"):
		case joaat("CC_MKUP_43"):
		case joaat("CC_MKUP_44"):
		case joaat("CC_MKUP_45"):
		case joaat("CC_MKUP_46"):
		case joaat("CC_MKUP_47"):
		case joaat("CC_MKUP_48"):
		case joaat("CC_MKUP_49"):
		case joaat("CC_MKUP_50"):
		case joaat("CC_MKUP_51"):
		case joaat("CC_MKUP_52"):
		case joaat("CC_MKUP_53"):
		case joaat("CC_MKUP_54"):
		case joaat("CC_MKUP_55"):
		case joaat("CC_MKUP_56"):
		case joaat("CC_MKUP_57"):
		case joaat("CC_MKUP_58"):
		case joaat("CC_MKUP_59"):
		case joaat("CC_MKUP_60"):
		case joaat("CC_MKUP_61"):
		case joaat("CC_MKUP_62"):
		case joaat("CC_MKUP_63"):
		case joaat("CC_MKUP_64"):
		case joaat("CC_MKUP_65"):
		case joaat("CC_MKUP_66"):
		case joaat("CC_MKUP_67"):
		case joaat("CC_MKUP_68"):
		case joaat("CC_MKUP_69"):
		case joaat("CC_MKUP_70"):
		case joaat("CC_MKUP_71"):
			return 1;
			break;
	}
	return 0;
}

int func_171(char* sParam0)//Position - 0x113985
{
	int iVar0;
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 1;
	}
	iVar0 = MISC::GET_HASH_KEY(HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME(sParam0, 0, 6));
	switch (iVar0)
	{
		case joaat("CLO_S1"):
		case joaat("TAT_S1"):
			return 1;
			break;
		case joaat("CLO_AP"):
		case joaat("TAT_AP"):
			return 1;
			break;
		case joaat("CLO_X3"):
		case joaat("TAT_X3"):
			return 1;
			break;
		case joaat("CLO_X4"):
			return 1;
			break;
		case joaat("CLO_V2"):
			return 1;
			break;
		case joaat("CLO_S2"):
		case joaat("TAT_S2"):
			return 1;
			break;
		case joaat("CLO_EX"):
			return 1;
			break;
		case joaat("CLO_ST"):
		case joaat("TAT_ST"):
			return 1;
			break;
		case joaat("CLO_BI"):
		case joaat("TAT_BI"):
			return 1;
			break;
		case joaat("CLO_IE"):
		case joaat("TAT_IE"):
			return 1;
			break;
		case joaat("CLO_GR"):
		case joaat("TAT_GR"):
			return 1;
			break;
		case joaat("CLO_SM"):
		case joaat("TAT_SM"):
			return 1;
			break;
		case joaat("CLO_AR"):
		case joaat("TAT_AR"):
			return 1;
			break;
		case joaat("CLO_H2"):
		case joaat("TAT_H2"):
			return 1;
			break;
		case joaat("CLO_X1"):
		case joaat("TAT_X1"):
			return 1;
			break;
		case joaat("CLO_AS"):
			return 1;
			break;
		case joaat("CLO_BH"):
		case joaat("TAT_BH"):
			return 1;
			break;
		case joaat("CLO_AW"):
		case joaat("TAT_AW"):
			return 1;
			break;
		case joaat("CLO_X5"):
		case joaat("TAT_X5"):
			return 1;
			break;
		case joaat("CLO_VW"):
		case joaat("TAT_VW"):
			return 1;
			break;
		case joaat("CLO_H3"):
		case joaat("TAT_H3"):
			return 1;
			break;
		case joaat("CLO_SU"):
		case joaat("TAT_SU"):
			return 1;
			break;
		case joaat("CLO_H4"):
		case joaat("TAT_H4"):
			return 1;
			break;
		case joaat("CLO_TR"):
		case joaat("TAT_TR"):
			return 1;
			break;
		case joaat("CLO_FX"):
		case joaat("TAT_FX"):
			return 1;
			break;
		case joaat("CLO_SB"):
		case joaat("TAT_SB"):
			return 1;
			break;
	}
	iVar0 = MISC::GET_HASH_KEY(sParam0);
	switch (iVar0)
	{
		case joaat("CC_BLUSH_7"):
		case joaat("CC_BLUSH_8"):
		case joaat("CC_BLUSH_9"):
		case joaat("CC_BLUSH_10"):
		case joaat("CC_BLUSH_11"):
		case joaat("CC_BLUSH_12"):
		case joaat("CC_BLUSH_13"):
		case joaat("CC_BLUSH_14"):
		case joaat("CC_BLUSH_15"):
		case joaat("CC_BLUSH_16"):
		case joaat("CC_BLUSH_17"):
		case joaat("CC_BLUSH_18"):
		case joaat("CC_BLUSH_19"):
		case joaat("CC_BLUSH_20"):
		case joaat("CC_BLUSH_21"):
		case joaat("CC_BLUSH_22"):
		case joaat("CC_BLUSH_23"):
		case joaat("CC_BLUSH_24"):
		case joaat("CC_BLUSH_25"):
		case joaat("CC_BLUSH_26"):
		case joaat("CC_BLUSH_27"):
		case joaat("CC_BLUSH_28"):
		case joaat("CC_BLUSH_29"):
		case joaat("CC_BLUSH_30"):
		case joaat("CC_BLUSH_31"):
		case joaat("CC_BLUSH_32"):
			return 1;
			break;
		case joaat("XMAS_CAMO06"):
		case joaat("XMAS_CAMO07"):
		case joaat("XMAS_CAMO08"):
		case joaat("XMAS_CAMO09"):
		case joaat("XMAS_CAMO10"):
			return 1;
			break;
		case joaat("CC_MKUP_72"):
		case joaat("CC_MKUP_73"):
		case joaat("CC_MKUP_74"):
		case joaat("CC_MKUP_75"):
		case joaat("CC_MKUP_76"):
		case joaat("CC_MKUP_77"):
		case joaat("CC_MKUP_78"):
		case joaat("CC_MKUP_79"):
		case joaat("CC_MKUP_80"):
			return 1;
			break;
		case joaat("CC_MKUP_81"):
		case joaat("CC_MKUP_82"):
		case joaat("CC_MKUP_83"):
		case joaat("CC_MKUP_84"):
		case joaat("CC_MKUP_85"):
		case joaat("CC_MKUP_86"):
		case joaat("CC_MKUP_87"):
		case joaat("CC_MKUP_88"):
		case joaat("CC_MKUP_89"):
		case joaat("CC_MKUP_90"):
		case joaat("CC_MKUP_91"):
		case joaat("CC_MKUP_92"):
		case joaat("CC_MKUP_93"):
		case joaat("CC_MKUP_94"):
			return 1;
			break;
	}
	return 0;
}

int func_172(char* sParam0)//Position - 0x113CF5
{
	int iVar0;
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 1;
	}
	iVar0 = MISC::GET_HASH_KEY(HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME(sParam0, 0, 6));
	switch (iVar0)
	{
		case joaat("CLO_XM"):
		case joaat("CLO_X2"):
		case joaat("TAT_X2"):
			return 1;
			break;
	}
	return 0;
}

int func_173(char* sParam0)//Position - 0x113D39
{
	int iVar0;
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 1;
	}
	iVar0 = MISC::GET_HASH_KEY(HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME(sParam0, 0, 6));
	switch (iVar0)
	{
		case joaat("CLO_IN"):
			return 1;
			break;
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "CC_MKUP_33" /* GXT: Stars n Stripes */))
	{
		return 1;
	}
	return 0;
}

int func_174(char* sParam0)//Position - 0x113D83
{
	int iVar0;
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 1;
	}
	if (HUD::GET_LENGTH_OF_LITERAL_STRING(sParam0) < 6)
	{
		return 1;
	}
	iVar0 = MISC::GET_HASH_KEY(HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME(sParam0, 0, 6));
	switch (iVar0)
	{
		case joaat("CLO_BB"):
		case joaat("TAT_BB"):
			return 1;
			break;
		case joaat("CLO_BU"):
		case joaat("TAT_BU"):
			return 0;
			break;
		case joaat("CLO_XM"):
		case joaat("CLO_X2"):
		case joaat("TAT_X2"):
			return 0;
			break;
		case joaat("CLO_VA"):
			return 1;
			break;
		case joaat("CLO_HI"):
			return 0;
			break;
		case joaat("CLO_HP"):
		case joaat("TAT_HP"):
		case joaat("BRD_HP"):
			return 0;
			break;
		case joaat("CLO_IN"):
			return 0;
			break;
		case joaat("CLO_PI"):
			return 0;
			break;
		case joaat("CLO_LT"):
			return 0;
			break;
		case joaat("CLO_HS"):
			return 0;
			break;
		case joaat("CLO_VE"):
			return 0;
			break;
		case joaat("CLO_LX"):
		case joaat("TAT_LX"):
			return 0;
			break;
		case joaat("CLO_L2"):
		case joaat("TAT_L2"):
			return 0;
			break;
		case joaat("CLO_HA"):
		case joaat("TAT_HA"):
			return 0;
			break;
		case joaat("CLO_S1"):
		case joaat("TAT_S1"):
			return 0;
			break;
		case joaat("CLO_AP"):
		case joaat("TAT_AP"):
			return 0;
			break;
		case joaat("CLO_X3"):
		case joaat("TAT_X3"):
			return 0;
			break;
		case joaat("CLO_X4"):
			return 0;
			break;
		case joaat("CLO_JA"):
			return 1;
			break;
		case joaat("CLO_V2"):
			return 0;
			break;
		case joaat("CLO_S2"):
		case joaat("TAT_S2"):
			return 0;
			break;
		case joaat("CLO_EX"):
			return 0;
			break;
		case joaat("CLO_ST"):
		case joaat("TAT_ST"):
			return 0;
			break;
		case joaat("CLO_BI"):
		case joaat("TAT_BI"):
			return 0;
			break;
		case joaat("CLO_IE"):
		case joaat("TAT_IE"):
			return 0;
			break;
		case joaat("CLO_GR"):
		case joaat("TAT_GR"):
			return 0;
			break;
		case joaat("CLO_SM"):
		case joaat("TAT_SM"):
			return 0;
			break;
		case joaat("CLO_H2"):
		case joaat("TAT_H2"):
			return 0;
			break;
		case joaat("CLO_X1"):
		case joaat("TAT_X1"):
			return 0;
			break;
		case joaat("CLO_AS"):
			return 0;
			break;
		case joaat("CLO_BH"):
		case joaat("TAT_BH"):
			return 0;
			break;
		case joaat("CLO_AW"):
		case joaat("TAT_AW"):
			return 0;
			break;
		case joaat("CLO_X5"):
		case joaat("TAT_X5"):
			return 0;
			break;
		case joaat("CLO_VW"):
		case joaat("TAT_VW"):
			return 0;
			break;
		case joaat("CLO_H3"):
		case joaat("TAT_H3"):
			return 0;
			break;
		case joaat("CLO_SU"):
		case joaat("TAT_SU"):
			return 0;
			break;
		case joaat("CLO_H4"):
		case joaat("TAT_H4"):
			return 0;
			break;
		case joaat("CLO_TR"):
		case joaat("TAT_TR"):
			return 0;
			break;
		case joaat("CLO_FX"):
		case joaat("TAT_FX"):
			return 0;
			break;
		case joaat("CLO_SB"):
		case joaat("TAT_SB"):
			return 0;
			break;
	}
	iVar0 = MISC::GET_HASH_KEY(sParam0);
	switch (iVar0)
	{
		case joaat("CC_MKUP_33"):
			return 0;
			break;
		case joaat("CC_MKUP_42"):
		case joaat("CC_MKUP_43"):
		case joaat("CC_MKUP_44"):
		case joaat("CC_MKUP_45"):
		case joaat("CC_MKUP_46"):
		case joaat("CC_MKUP_47"):
		case joaat("CC_MKUP_48"):
		case joaat("CC_MKUP_49"):
		case joaat("CC_MKUP_50"):
		case joaat("CC_MKUP_51"):
		case joaat("CC_MKUP_52"):
		case joaat("CC_MKUP_53"):
		case joaat("CC_MKUP_54"):
		case joaat("CC_MKUP_55"):
		case joaat("CC_MKUP_56"):
		case joaat("CC_MKUP_57"):
		case joaat("CC_MKUP_58"):
		case joaat("CC_MKUP_59"):
		case joaat("CC_MKUP_60"):
		case joaat("CC_MKUP_61"):
		case joaat("CC_MKUP_62"):
		case joaat("CC_MKUP_63"):
		case joaat("CC_MKUP_64"):
		case joaat("CC_MKUP_65"):
		case joaat("CC_MKUP_66"):
		case joaat("CC_MKUP_67"):
		case joaat("CC_MKUP_68"):
		case joaat("CC_MKUP_69"):
		case joaat("CC_MKUP_70"):
		case joaat("CC_MKUP_71"):
			return 0;
			break;
		case joaat("CC_BLUSH_7"):
		case joaat("CC_BLUSH_8"):
		case joaat("CC_BLUSH_9"):
		case joaat("CC_BLUSH_10"):
		case joaat("CC_BLUSH_11"):
		case joaat("CC_BLUSH_12"):
		case joaat("CC_BLUSH_13"):
		case joaat("CC_BLUSH_14"):
		case joaat("CC_BLUSH_15"):
		case joaat("CC_BLUSH_16"):
		case joaat("CC_BLUSH_17"):
		case joaat("CC_BLUSH_18"):
		case joaat("CC_BLUSH_19"):
		case joaat("CC_BLUSH_20"):
		case joaat("CC_BLUSH_21"):
		case joaat("CC_BLUSH_22"):
		case joaat("CC_BLUSH_23"):
		case joaat("CC_BLUSH_24"):
		case joaat("CC_BLUSH_25"):
		case joaat("CC_BLUSH_26"):
		case joaat("CC_BLUSH_27"):
		case joaat("CC_BLUSH_28"):
		case joaat("CC_BLUSH_29"):
		case joaat("CC_BLUSH_30"):
		case joaat("CC_BLUSH_31"):
		case joaat("CC_BLUSH_32"):
			return 0;
			break;
		case joaat("XMAS_CAMO06"):
		case joaat("XMAS_CAMO07"):
		case joaat("XMAS_CAMO08"):
		case joaat("XMAS_CAMO09"):
		case joaat("XMAS_CAMO10"):
			return 0;
			break;
		case joaat("CC_MKUP_72"):
		case joaat("CC_MKUP_73"):
		case joaat("CC_MKUP_74"):
		case joaat("CC_MKUP_75"):
		case joaat("CC_MKUP_76"):
		case joaat("CC_MKUP_77"):
		case joaat("CC_MKUP_78"):
		case joaat("CC_MKUP_79"):
		case joaat("CC_MKUP_80"):
			return 0;
			break;
		case joaat("CC_MKUP_81"):
		case joaat("CC_MKUP_82"):
		case joaat("CC_MKUP_83"):
		case joaat("CC_MKUP_84"):
		case joaat("CC_MKUP_85"):
		case joaat("CC_MKUP_86"):
		case joaat("CC_MKUP_87"):
		case joaat("CC_MKUP_88"):
		case joaat("CC_MKUP_89"):
		case joaat("CC_MKUP_90"):
		case joaat("CC_MKUP_91"):
		case joaat("CC_MKUP_92"):
		case joaat("CC_MKUP_93"):
		case joaat("CC_MKUP_94"):
			return 0;
			break;
	}
	return 1;
}

char* func_175(char* sParam0, bool bParam1)//Position - 0x1142B1
{
	int iVar0;
	int iVar1;
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return "";
	}
	if (HUD::GET_LENGTH_OF_LITERAL_STRING(sParam0) < 6)
	{
		return "";
	}
	iVar0 = MISC::GET_HASH_KEY(sParam0);
	iVar1 = MISC::GET_HASH_KEY(HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME(sParam0, 0, 6));
	switch (iVar1)
	{
		case joaat("CLO_BB"):
		case joaat("TAT_BB"):
			return "SHOP_CONTENT_1" /* GXT: Beach Bum */;
			break;
		case joaat("CLO_BU"):
		case joaat("TAT_BU"):
			return "SHOP_CONTENT_2" /* GXT: Business Update */;
			break;
		case joaat("CLO_XM"):
		case joaat("CLO_X2"):
		case joaat("TAT_X2"):
			if (!bParam1)
			{
				return "SHOP_CONTENT_3" /* GXT: Festive */;
			}
			else
			{
				return "SHOP_CONTENT_3b" /* GXT: Festive Surprise */;
			}
			break;
		case joaat("CLO_VA"):
			return "SHOP_CONTENT_4" /* GXT: Valentine's */;
			break;
		case joaat("CLO_HI"):
			return "SHOP_CONTENT_5" /* GXT: High Life Update */;
			break;
		case joaat("CLO_HP"):
		case joaat("TAT_HP"):
		case joaat("BRD_HP"):
			if (!bParam1)
			{
				return "SHOP_CONTENT_6" /* GXT: "I'm Not a Hipster" */;
			}
			else
			{
				return "SHOP_CONTENT_6b" /* GXT: "I'm Not a Hipster" Update */;
			}
			break;
		case joaat("CLO_HS"):
			if (!bParam1)
			{
				return "SHOP_CONTENT_7" /* GXT: Heists */;
			}
			else
			{
				return "SHOP_CONTENT_7b" /* GXT: Heists Update */;
			}
			break;
		case joaat("CLO_IN"):
			if (!bParam1)
			{
				return "SHOP_CONTENT_8" /* GXT: Independence Day */;
			}
			else
			{
				return "SHOP_CONTENT_8b" /* GXT: Independence Day Special */;
			}
			break;
		case joaat("CLO_PI"):
			return "SHOP_CONTENT_9" /* GXT: San Andreas Flight School */;
			break;
		case joaat("CLO_LT"):
			if (!bParam1)
			{
				return "SHOP_CONTENT_10" /* GXT: Last Team Standing */;
			}
			else
			{
				return "SHOP_CONTENT_10b" /* GXT: Last Team Standing Update */;
			}
			break;
		case joaat("CLO_LX"):
		case joaat("TAT_LX"):
			if (((((iVar0 == joaat("CLO_LXM_DEC_30") || iVar0 == joaat("CLO_LXM_DEC_33")) || iVar0 == joaat("CLO_LXM_DEC_38")) || iVar0 == joaat("CLO_LXF_DEC_30")) || iVar0 == joaat("CLO_LXF_DEC_33")) || iVar0 == joaat("CLO_LXF_DEC_38"))
			{
				return "SHOP_CONTENT_14" /* GXT: Ill-Gotten Gains Update Part 2 */;
			}
			return "SHOP_CONTENT_12" /* GXT: Ill-Gotten Gains Update Part 1 */;
			break;
		case joaat("CLO_VE"):
			switch (iVar0)
			{
				case joaat("CLO_VEM_DEC_44"):
				case joaat("CLO_VEM_DEC_45"):
				case joaat("CLO_VEM_DEC_46"):
				case joaat("CLO_VEM_DEC_48"):
				case joaat("CLO_VEF_DEC_44"):
				case joaat("CLO_VEF_DEC_45"):
				case joaat("CLO_VEF_DEC_46"):
				case joaat("CLO_VEF_DEC_48"):
					return "";
					break;
			}
			return "SHOP_CONTENT_13" /* GXT: Video Editor */;
			break;
		case joaat("CLO_L2"):
		case joaat("TAT_L2"):
			return "SHOP_CONTENT_14" /* GXT: Ill-Gotten Gains Update Part 2 */;
			break;
		case joaat("CLO_S1"):
		case joaat("TAT_S1"):
			return "SHOP_CONTENT_15" /* GXT: Lowriders */;
			break;
		case joaat("CLO_HA"):
		case joaat("TAT_HA"):
			return "SHOP_CONTENT_16" /* GXT: Halloween */;
			break;
		case joaat("CLO_S2"):
		case joaat("TAT_S2"):
			return "SHOP_CONTENT_17" /* GXT: Lowriders: Custom Classics */;
			break;
		case joaat("CLO_AP"):
		case joaat("TAT_AP"):
			return "SHOP_CONTENT_18" /* GXT: Executives and Other Criminals */;
			break;
		case joaat("CLO_X3"):
		case joaat("TAT_X3"):
			if (iVar0 == joaat("CLO_X3F_DEC_00") || iVar0 == joaat("CLO_X3M_DEC_00"))
			{
				return "";
			}
			return "SHOP_CONTENT_19" /* GXT: Festive Surprise 2015 */;
			break;
		case joaat("CLO_X4"):
			return "SHOP_CONTENT_26" /* GXT: Festive Surprise 2016 */;
			break;
		case joaat("CLO_V2"):
			return "SHOP_CONTENT_21" /* GXT: Be My Valentine */;
			break;
		case joaat("CLO_EX"):
			return "SHOP_CONTENT_22" /* GXT: Further Adventures in Finance and Felony */;
			break;
		case joaat("CLO_ST"):
		case joaat("TAT_ST"):
			return "SHOP_CONTENT_23" /* GXT: Cunning Stunts */;
			break;
		case joaat("CLO_BI"):
		case joaat("TAT_BI"):
			return "SHOP_CONTENT_24" /* GXT: Bikers */;
			break;
		case joaat("CLO_IE"):
		case joaat("TAT_IE"):
			return "SHOP_CONTENT_25" /* GXT: Import/Export */;
			break;
		case joaat("CLO_GR"):
		case joaat("TAT_GR"):
			return "SHOP_CONTENT_27" /* GXT: Gunrunning */;
			break;
		case joaat("CLO_SM"):
		case joaat("TAT_SM"):
			return "SHOP_CONTENT_28" /* GXT: Smuggler's Run */;
			break;
		case joaat("CLO_AR"):
		case joaat("TAT_AR"):
			return "SHOP_CONTENT_29" /* GXT: Smuggler's Run */;
			break;
		case joaat("CLO_H2"):
		case joaat("TAT_H2"):
			return "SHOP_CONTENT_30" /* GXT: The Doomsday Heist */;
			break;
		case joaat("CLO_X1"):
		case joaat("TAT_X1"):
			return "SHOP_CONTENT_31" /* GXT: Festive Surprise 2017 */;
			break;
		case joaat("CLO_AS"):
			return "SHOP_CONTENT_32" /* GXT: S.A. Super Sport Series */;
			break;
		case joaat("CLO_BH"):
		case joaat("TAT_BH"):
			if (!bParam1)
			{
				return "SHOP_CONTENT_33" /* GXT: After Hours */;
			}
			else
			{
				return "SHOP_CONTENT_33" /* GXT: After Hours */;
			}
			break;
		case joaat("CLO_AW"):
		case joaat("TAT_AW"):
			if (iVar0 == joaat("TAT_AW_000"))
			{
				return "";
			}
			if (((iVar0 == joaat("CLO_AWM_O_J_0") || iVar0 == joaat("CLO_AWM_T_0")) || iVar0 == joaat("CLO_AWF_O_J_0")) || iVar0 == joaat("CLO_AWF_T_0"))
			{
				return "";
			}
			return "SHOP_CONTENT_34" /* GXT: Arena War */;
			break;
		case joaat("CLO_X5"):
		case joaat("TAT_X5"):
			return "SHOP_CONTENT_35" /* GXT: Festive Surprise 2018 */;
			break;
		case joaat("CLO_VW"):
		case joaat("TAT_VW"):
			return "SHOP_CONTENT_38" /* GXT: The Diamond Casino & Resort */;
			break;
		case joaat("CLO_H3"):
		case joaat("TAT_H3"):
			return "SHOP_CONTENT_39" /* GXT: The Diamond Casino Heist */;
			break;
		case joaat("CLO_SU"):
		case joaat("TAT_SU"):
			return "SHOP_CONTENT_40" /* GXT: Los Santos Summer Special */;
			break;
		case joaat("CLO_H4"):
		case joaat("TAT_H4"):
			return "SHOP_CONTENT_41" /* GXT: The Cayo Perico Heist */;
			break;
		case joaat("CLO_TR"):
		case joaat("TAT_TR"):
			return "SHOP_CONTENT_42" /* GXT: Los Santos Tuners */;
			break;
		case joaat("CLO_FX"):
		case joaat("TAT_FX"):
			return "SHOP_CONTENT_44" /* GXT: The Contract */;
			break;
		case joaat("CLO_SB"):
		case joaat("TAT_SB"):
			return "SHOP_CONTENT_45" /* GXT: The Criminal Enterprises */;
			break;
	}
	switch (iVar0)
	{
		case joaat("CC_M_HS_16"):
		case joaat("CC_M_HS_17"):
		case joaat("CC_F_HS_17"):
		case joaat("CC_F_HS_16"):
			return "SHOP_CONTENT_1" /* GXT: Beach Bum */;
			break;
		case joaat("CC_M_HS_18"):
		case joaat("CC_M_HS_19"):
		case joaat("CC_F_HS_18"):
		case joaat("CC_F_HS_19"):
			return "SHOP_CONTENT_2" /* GXT: Business Update */;
			break;
		case joaat("CC_F_HS_23"):
			return "SHOP_CONTENT_4" /* GXT: Valentine's */;
			break;
		case joaat("CC_M_HS_20"):
		case joaat("CC_M_HS_21"):
		case joaat("CC_F_HS_20"):
		case joaat("CC_F_HS_21"):
			if (!bParam1)
			{
				return "SHOP_CONTENT_6" /* GXT: "I'm Not a Hipster" */;
			}
			else
			{
				return "SHOP_CONTENT_6b" /* GXT: "I'm Not a Hipster" Update */;
			}
			break;
		case joaat("CC_M_HS_22"):
		case joaat("CC_F_HS_22"):
		case joaat("CC_MKUP_33"):
			if (!bParam1)
			{
				return "SHOP_CONTENT_8" /* GXT: Independence Day */;
			}
			else
			{
				return "SHOP_CONTENT_8b" /* GXT: Independence Day Special */;
			}
			break;
	}
	switch (iVar0)
	{
		case joaat("CC_MKUP_42"):
		case joaat("CC_MKUP_43"):
		case joaat("CC_MKUP_44"):
		case joaat("CC_MKUP_45"):
		case joaat("CC_MKUP_46"):
		case joaat("CC_MKUP_47"):
		case joaat("CC_MKUP_48"):
		case joaat("CC_MKUP_49"):
		case joaat("CC_MKUP_50"):
		case joaat("CC_MKUP_51"):
		case joaat("CC_MKUP_52"):
		case joaat("CC_MKUP_53"):
		case joaat("CC_MKUP_54"):
		case joaat("CC_MKUP_55"):
		case joaat("CC_MKUP_56"):
		case joaat("CC_MKUP_57"):
		case joaat("CC_MKUP_58"):
		case joaat("CC_MKUP_59"):
		case joaat("CC_MKUP_60"):
		case joaat("CC_MKUP_61"):
		case joaat("CC_MKUP_62"):
		case joaat("CC_MKUP_63"):
		case joaat("CC_MKUP_64"):
		case joaat("CC_MKUP_65"):
		case joaat("CC_MKUP_66"):
		case joaat("CC_MKUP_67"):
		case joaat("CC_MKUP_68"):
		case joaat("CC_MKUP_69"):
		case joaat("CC_MKUP_70"):
		case joaat("CC_MKUP_71"):
			return "SHOP_CONTENT_16" /* GXT: Halloween */;
			break;
	}
	switch (iVar0)
	{
		case joaat("CC_BLUSH_7"):
		case joaat("CC_BLUSH_8"):
		case joaat("CC_BLUSH_9"):
		case joaat("CC_BLUSH_10"):
		case joaat("CC_BLUSH_11"):
		case joaat("CC_BLUSH_12"):
		case joaat("CC_BLUSH_13"):
		case joaat("CC_BLUSH_14"):
		case joaat("CC_BLUSH_15"):
		case joaat("CC_BLUSH_16"):
		case joaat("CC_BLUSH_17"):
		case joaat("CC_BLUSH_18"):
		case joaat("CC_BLUSH_19"):
		case joaat("CC_BLUSH_20"):
		case joaat("CC_BLUSH_21"):
		case joaat("CC_BLUSH_22"):
		case joaat("CC_BLUSH_23"):
		case joaat("CC_BLUSH_24"):
		case joaat("CC_BLUSH_25"):
		case joaat("CC_BLUSH_26"):
		case joaat("CC_BLUSH_27"):
		case joaat("CC_BLUSH_28"):
		case joaat("CC_BLUSH_29"):
		case joaat("CC_BLUSH_30"):
		case joaat("CC_BLUSH_31"):
		case joaat("CC_BLUSH_32"):
			return "SHOP_CONTENT_30" /* GXT: The Doomsday Heist */;
			break;
	}
	switch (iVar0)
	{
		case joaat("XMAS_CAMO06"):
		case joaat("XMAS_CAMO07"):
		case joaat("XMAS_CAMO08"):
		case joaat("XMAS_CAMO09"):
		case joaat("XMAS_CAMO10"):
			return "SHOP_CONTENT_31" /* GXT: Festive Surprise 2017 */;
			break;
	}
	switch (iVar0)
	{
		case joaat("CC_MKUP_72"):
		case joaat("CC_MKUP_73"):
		case joaat("CC_MKUP_74"):
		case joaat("CC_MKUP_75"):
		case joaat("CC_MKUP_76"):
		case joaat("CC_MKUP_77"):
		case joaat("CC_MKUP_78"):
		case joaat("CC_MKUP_79"):
		case joaat("CC_MKUP_80"):
			return "SHOP_CONTENT_41" /* GXT: The Cayo Perico Heist */;
			break;
	}
	switch (iVar0)
	{
		case joaat("CC_MKUP_81"):
		case joaat("CC_MKUP_82"):
		case joaat("CC_MKUP_83"):
		case joaat("CC_MKUP_84"):
		case joaat("CC_MKUP_85"):
		case joaat("CC_MKUP_86"):
		case joaat("CC_MKUP_87"):
		case joaat("CC_MKUP_88"):
		case joaat("CC_MKUP_89"):
		case joaat("CC_MKUP_90"):
		case joaat("CC_MKUP_91"):
		case joaat("CC_MKUP_92"):
		case joaat("CC_MKUP_93"):
		case joaat("CC_MKUP_94"):
			return "SHOP_CONTENT_44" /* GXT: The Contract */;
			break;
	}
	return "";
}

int func_176(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x114ED9
{
	int iVar0;
	iVar0 = 0;
	if (iParam0 == joaat("btype2"))
	{
		if (Global_262145.f_12042 /* Tunable: TURN_ON_HALLOWEEN_BOBBLEHEADS */)
		{
			if ((iParam3 == 65 && iParam1 >= 1) && iParam1 <= 45)
			{
				return (iVar0 + iParam1);
			}
			iVar0 += 46;
		}
		else
		{
			if ((iParam3 == 65 && iParam1 >= 1) && iParam1 <= 21)
			{
				return (iVar0 + iParam1);
			}
			iVar0 += 46;
		}
		if ((iParam3 == 85 && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
	}
	else
	{
		iVar0 += 51;
	}
	if (iParam0 == joaat("lurcher"))
	{
		if (Global_262145.f_12042 /* Tunable: TURN_ON_HALLOWEEN_BOBBLEHEADS */)
		{
			if ((iParam3 == 65 && iParam1 >= 1) && iParam1 <= 45)
			{
				return (iVar0 + iParam1);
			}
			iVar0 += 46;
		}
		else
		{
			if ((iParam3 == 65 && iParam1 >= 1) && iParam1 <= 21)
			{
				return (iVar0 + iParam1);
			}
			iVar0 += 46;
		}
		if ((iParam3 == 85 && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
	}
	else
	{
		iVar0 += 49;
	}
	if (iParam0 == joaat("faction2"))
	{
		if ((iParam3 == 70 && iParam1 >= 1) && iParam1 <= 16)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 17;
		if ((iParam3 == 71 && iParam1 >= 1) && iParam1 <= 15)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 16;
		if ((iParam3 == 72 && iParam1 >= 1) && iParam1 <= 22)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 23;
		if ((iParam3 == 73 && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (Global_262145.f_12042 /* Tunable: TURN_ON_HALLOWEEN_BOBBLEHEADS */)
		{
			if ((iParam3 == 65 && iParam1 >= 1) && iParam1 <= 45)
			{
				return (iVar0 + iParam1);
			}
			iVar0 += 46;
		}
		else
		{
			if ((iParam3 == 65 && iParam1 >= 1) && iParam1 <= 21)
			{
				return (iVar0 + iParam1);
			}
			iVar0 += 46;
		}
		if (((iParam3 == 91 && (iParam2 == 0 || iParam2 == 1)) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 91 && (iParam2 == 0 || iParam2 == 2)) && iParam1 >= 0) && iParam1 <= 67)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 68;
		if (((iParam3 == 90 && (iParam2 == 0 || iParam2 == 1)) && iParam1 >= 1) && iParam1 <= 14)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 15;
		if ((iParam3 == 92 && iParam1 >= 0) && iParam1 <= 48)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 49;
		if ((iParam3 == 75 && iParam1 >= 2) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if ((iParam3 == 85 && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if ((iParam3 == 74 && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if ((iParam3 == 76 && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if ((iParam3 == 77 && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
	}
	else
	{
		iVar0 += 268;
	}
	if (iParam0 == joaat("buccaneer2"))
	{
		if ((iParam3 == 82 && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if ((iParam3 == 76 && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if ((iParam3 == 77 && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if ((iParam3 == 75 && iParam1 >= 2) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 91 && (iParam2 == 0 || iParam2 == 1)) && iParam1 >= 1) && iParam1 <= 12)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 13;
		if (((iParam3 == 91 && (iParam2 == 0 || iParam2 == 2)) && iParam1 >= 1) && iParam1 <= 67)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 68;
		if (Global_262145.f_12042 /* Tunable: TURN_ON_HALLOWEEN_BOBBLEHEADS */)
		{
			if ((iParam3 == 65 && iParam1 >= 1) && iParam1 <= 45)
			{
				return (iVar0 + iParam1);
			}
			iVar0 += 46;
		}
		else
		{
			if ((iParam3 == 65 && iParam1 >= 1) && iParam1 <= 21)
			{
				return (iVar0 + iParam1);
			}
			iVar0 += 46;
		}
		if (((iParam3 == 90 && (iParam2 == 0 || iParam2 == 1)) && iParam1 >= 1) && iParam1 <= 14)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 15;
		if ((iParam3 == 92 && iParam1 >= 0) && iParam1 <= 48)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 49;
		if ((iParam3 == 70 && iParam1 >= 1) && iParam1 <= 16)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 17;
		if ((iParam3 == 71 && iParam1 >= 1) && iParam1 <= 15)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 16;
		if ((iParam3 == 72 && iParam1 >= 1) && iParam1 <= 22)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 23;
		if ((iParam3 == 73 && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if ((iParam3 == 85 && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
		if ((iParam3 == 62 && iParam1 >= 1) && iParam1 <= 13)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 14;
		if ((iParam3 == 63 && iParam1 >= 1) && iParam1 <= 16)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 17;
		if ((iParam3 == 74 && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
	}
	else
	{
		iVar0 += 319;
	}
	if (iParam0 == joaat("chino2"))
	{
		if ((iParam3 == 82 && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if ((iParam3 == 76 && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if ((iParam3 == 77 && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if ((iParam3 == 75 && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 91 && (iParam2 == 0 || iParam2 == 1)) && iParam1 >= 1) && iParam1 <= 12)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 13;
		if (((iParam3 == 91 && (iParam2 == 0 || iParam2 == 2)) && iParam1 >= 1) && iParam1 <= 67)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 68;
		if (Global_262145.f_12042 /* Tunable: TURN_ON_HALLOWEEN_BOBBLEHEADS */)
		{
			if ((iParam3 == 65 && iParam1 >= 1) && iParam1 <= 45)
			{
				return (iVar0 + iParam1);
			}
			iVar0 += 46;
		}
		else
		{
			if ((iParam3 == 65 && iParam1 >= 1) && iParam1 <= 21)
			{
				return (iVar0 + iParam1);
			}
			iVar0 += 46;
		}
		if (((iParam3 == 90 && (iParam2 == 0 || iParam2 == 1)) && iParam1 >= 1) && iParam1 <= 14)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 15;
		if ((iParam3 == 92 && iParam1 >= 0) && iParam1 <= 48)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 49;
		if ((iParam3 == 70 && iParam1 >= 1) && iParam1 <= 16)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 17;
		if ((iParam3 == 71 && iParam1 >= 1) && iParam1 <= 15)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 16;
		if ((iParam3 == 72 && iParam1 >= 1) && iParam1 <= 22)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 23;
		if ((iParam3 == 85 && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if ((iParam3 == 62 && iParam1 >= 1) && iParam1 <= 13)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 14;
		if ((iParam3 == 63 && iParam1 >= 1) && iParam1 <= 16)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 17;
		if ((iParam3 == 74 && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
	}
	else
	{
		iVar0 += 315;
	}
	if (iParam0 == joaat("moonbeam2"))
	{
		if ((iParam3 == 6 && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if ((iParam3 == 76 && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if ((iParam3 == 77 && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if ((iParam3 == 75 && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 91 && (iParam2 == 0 || iParam2 == 1)) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 91 && (iParam2 == 0 || iParam2 == 2)) && iParam1 >= 1) && iParam1 <= 67)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 68;
		if (Global_262145.f_12042 /* Tunable: TURN_ON_HALLOWEEN_BOBBLEHEADS */)
		{
			if ((iParam3 == 65 && iParam1 >= 1) && iParam1 <= 45)
			{
				return (iVar0 + iParam1);
			}
			iVar0 += 46;
		}
		else
		{
			if ((iParam3 == 65 && iParam1 >= 1) && iParam1 <= 21)
			{
				return (iVar0 + iParam1);
			}
			iVar0 += 46;
		}
		if (((iParam3 == 90 && (iParam2 == 0 || iParam2 == 1)) && iParam1 >= 1) && iParam1 <= 14)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 15;
		if ((iParam3 == 92 && iParam1 >= 0) && iParam1 <= 48)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 49;
		if ((iParam3 == 68 && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if ((iParam3 == 69 && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if ((iParam3 == 70 && iParam1 >= 1) && iParam1 <= 16)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 17;
		if ((iParam3 == 71 && iParam1 >= 1) && iParam1 <= 15)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 16;
		if ((iParam3 == 72 && iParam1 >= 1) && iParam1 <= 22)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 23;
		if ((iParam3 == 85 && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if ((iParam3 == 62 && iParam1 >= 1) && iParam1 <= 13)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 14;
		if ((iParam3 == 63 && iParam1 >= 1) && iParam1 <= 16)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 17;
		if ((iParam3 == 74 && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
	}
	else
	{
		iVar0 += 308;
	}
	if (iParam0 == joaat("primo2"))
	{
		if ((iParam3 == 80 && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if ((iParam3 == 81 && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if ((iParam3 == 82 && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if ((iParam3 == 76 && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if ((iParam3 == 77 && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if ((iParam3 == 75 && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 91 && (iParam2 == 0 || iParam2 == 1)) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 91 && (iParam2 == 0 || iParam2 == 2)) && iParam1 >= 1) && iParam1 <= 67)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 68;
		if (Global_262145.f_12042 /* Tunable: TURN_ON_HALLOWEEN_BOBBLEHEADS */)
		{
			if ((iParam3 == 65 && iParam1 >= 1) && iParam1 <= 45)
			{
				return (iVar0 + iParam1);
			}
			iVar0 += 46;
		}
		else
		{
			if ((iParam3 == 65 && iParam1 >= 1) && iParam1 <= 21)
			{
				return (iVar0 + iParam1);
			}
			iVar0 += 46;
		}
		if ((iParam3 == 92 && iParam1 >= 0) && iParam1 <= 48)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 49;
		if ((iParam3 == 70 && iParam1 >= 1) && iParam1 <= 16)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 17;
		if ((iParam3 == 71 && iParam1 >= 1) && iParam1 <= 15)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 16;
		if ((iParam3 == 72 && iParam1 >= 1) && iParam1 <= 22)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 23;
		if ((iParam3 == 73 && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if ((iParam3 == 85 && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if ((iParam3 == 62 && iParam1 >= 1) && iParam1 <= 13)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 14;
		if ((iParam3 == 63 && iParam1 >= 1) && iParam1 <= 16)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 17;
		if ((iParam3 == 74 && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
	}
	else
	{
		iVar0 += 309;
	}
	if (iParam0 == joaat("voodoo"))
	{
		if ((iParam3 == 79 && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if ((iParam3 == 80 && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if ((iParam3 == 81 && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if ((iParam3 == 82 && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if ((iParam3 == 6 && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if ((iParam3 == 76 && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if ((iParam3 == 77 && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if ((iParam3 == 75 && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 91 && (iParam2 == 0 || iParam2 == 1)) && iParam1 >= 1) && iParam1 <= 12)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 13;
		if (((iParam3 == 91 && (iParam2 == 0 || iParam2 == 2)) && iParam1 >= 1) && iParam1 <= 67)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 68;
		if (Global_262145.f_12042 /* Tunable: TURN_ON_HALLOWEEN_BOBBLEHEADS */)
		{
			if ((iParam3 == 65 && iParam1 >= 1) && iParam1 <= 45)
			{
				return (iVar0 + iParam1);
			}
			iVar0 += 46;
		}
		else
		{
			if ((iParam3 == 65 && iParam1 >= 1) && iParam1 <= 21)
			{
				return (iVar0 + iParam1);
			}
			iVar0 += 46;
		}
		if (((iParam3 == 90 && (iParam2 == 0 || iParam2 == 1)) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if ((iParam3 == 92 && iParam1 >= 0) && iParam1 <= 48)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 49;
		if ((iParam3 == 70 && iParam1 >= 1) && iParam1 <= 16)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 17;
		if ((iParam3 == 71 && iParam1 >= 1) && iParam1 <= 15)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 16;
		if ((iParam3 == 72 && iParam1 >= 1) && iParam1 <= 22)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 23;
		if ((iParam3 == 85 && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if ((iParam3 == 62 && iParam1 >= 1) && iParam1 <= 13)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 14;
		if ((iParam3 == 63 && iParam1 >= 1) && iParam1 <= 16)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 17;
		if ((iParam3 == 74 && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
	}
	else
	{
		iVar0 += 326;
	}
	if (iParam0 == joaat("faction"))
	{
		if (iParam3 == 61 && iParam1 == 0)
		{
			return (iVar0 + iParam1);
		}
		iVar0++;
	}
	else
	{
		iVar0++;
	}
	if (iParam0 == joaat("buccaneer"))
	{
		if (iParam3 == 61 && iParam1 == 0)
		{
			return (iVar0 + iParam1);
		}
		iVar0++;
	}
	else
	{
		iVar0++;
	}
	if (iParam0 == joaat("chino"))
	{
		if (iParam3 == 61 && iParam1 == 0)
		{
			return (iVar0 + iParam1);
		}
		iVar0++;
	}
	else
	{
		iVar0++;
	}
	if (iParam0 == joaat("moonbeam"))
	{
		if (iParam3 == 61 && iParam1 == 0)
		{
			return (iVar0 + iParam1);
		}
		iVar0++;
	}
	else
	{
		iVar0++;
	}
	if (iParam0 == joaat("primo"))
	{
		if (iParam3 == 61 && iParam1 == 0)
		{
			return (iVar0 + iParam1);
		}
		iVar0++;
	}
	else
	{
		iVar0++;
	}
	if (iParam0 == joaat("voodoo2"))
	{
		if (iParam3 == 61 && iParam1 == 0)
		{
			return (iVar0 + iParam1);
		}
		iVar0++;
	}
	else
	{
		iVar0++;
	}
	if (iParam0 == joaat("sultan"))
	{
		if (iParam3 == 61 && iParam1 == 0)
		{
			return (iVar0 + iParam1);
		}
		iVar0++;
	}
	else
	{
		iVar0++;
	}
	if (iParam0 == joaat("banshee"))
	{
		if (iParam3 == 61 && iParam1 == 0)
		{
			return (iVar0 + iParam1);
		}
		iVar0++;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 15)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 16;
	}
	else
	{
		iVar0 += 17;
	}
	if (iParam0 == joaat("banshee2"))
	{
		if (((iParam3 == 76 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 78 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 11)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 12;
		if (iParam3 == 65)
		{
			if (Global_262145.f_12042 /* Tunable: TURN_ON_HALLOWEEN_BOBBLEHEADS */)
			{
				if ((iParam3 == 65 && iParam1 >= 1) && iParam1 <= 45)
				{
					return (iVar0 + iParam1);
				}
				iVar0 += 46;
			}
			else
			{
				if ((iParam3 == 65 && iParam1 >= 1) && iParam1 <= 21)
				{
					return (iVar0 + iParam1);
				}
				iVar0 += 46;
			}
		}
		if (((iParam3 == 66 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 68 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 69 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 14)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 15;
		if (((iParam3 == 70 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 16)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 17;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
	}
	else
	{
		iVar0 += 114;
	}
	if (iParam0 == joaat("sultanrs"))
	{
		if (((iParam3 == 79 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 80 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 81 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 83 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 76 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 77 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 78 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 12)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 13;
		if (((iParam3 == 91 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 91 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 67)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 68;
		if (iParam3 == 65)
		{
			if (Global_262145.f_12042 /* Tunable: TURN_ON_HALLOWEEN_BOBBLEHEADS */)
			{
				if ((iParam3 == 65 && iParam1 >= 1) && iParam1 <= 45)
				{
					return (iVar0 + iParam1);
				}
				iVar0 += 46;
			}
			else
			{
				if ((iParam3 == 65 && iParam1 >= 1) && iParam1 <= 21)
				{
					return (iVar0 + iParam1);
				}
				iVar0 += 46;
			}
		}
		if (((iParam3 == 66 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 90 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 68 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 69 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 14)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 14;
		if (((iParam3 == 70 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 16)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 17;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
	}
	else
	{
		iVar0 += 221;
	}
	if (iParam0 == joaat("btype3"))
	{
		if (((iParam3 == 79 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 80 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 81 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 83 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 93 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 94 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
	}
	else
	{
		iVar0 += 16;
	}
	if (iParam0 == joaat("faction"))
	{
		if (iParam3 == 61 && iParam1 == 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0++;
	}
	else
	{
		iVar0++;
	}
	if (iParam0 == joaat("sabregt"))
	{
		if (iParam3 == 61 && iParam1 == 0)
		{
			return (iVar0 + iParam1);
		}
		iVar0++;
	}
	else
	{
		iVar0++;
	}
	if (iParam0 == joaat("tornado"))
	{
		if (iParam3 == 61 && iParam1 == 0)
		{
			return (iVar0 + iParam1);
		}
		iVar0++;
	}
	else
	{
		iVar0++;
	}
	if (iParam0 == joaat("tornado2"))
	{
		if (iParam3 == 61 && iParam1 == 0)
		{
			return (iVar0 + iParam1);
		}
		iVar0++;
	}
	else
	{
		iVar0++;
	}
	if (iParam0 == joaat("tornado3"))
	{
		if (iParam3 == 61 && iParam1 == 0)
		{
			return (iVar0 + iParam1);
		}
		iVar0++;
	}
	else
	{
		iVar0++;
	}
	if (iParam0 == joaat("virgo3"))
	{
		if (iParam3 == 61 && iParam1 == 0)
		{
			return (iVar0 + iParam1);
		}
		iVar0++;
	}
	else
	{
		iVar0++;
	}
	if (iParam0 == joaat("minivan"))
	{
		if (iParam3 == 61 && iParam1 == 0)
		{
			return (iVar0 + iParam1);
		}
		iVar0++;
	}
	else
	{
		iVar0++;
	}
	if (iParam0 == joaat("slamvan"))
	{
		if (iParam3 == 61 && iParam1 == 0)
		{
			return (iVar0 + iParam1);
		}
		iVar0++;
	}
	else
	{
		iVar0++;
	}
	if (iParam0 == joaat("faction3"))
	{
		if (((iParam3 == 76 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 77 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 91 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 91 && iParam2 == 2) && iParam1 >= 0) && iParam1 <= 67)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 68;
		if (iParam3 == 65)
		{
			if (Global_262145.f_12042 /* Tunable: TURN_ON_HALLOWEEN_BOBBLEHEADS */)
			{
				if ((iParam3 == 65 && iParam1 >= 1) && iParam1 <= 45)
				{
					return (iVar0 + iParam1);
				}
				iVar0 += 46;
			}
			else
			{
				if ((iParam3 == 65 && iParam1 >= 1) && iParam1 <= 21)
				{
					return (iVar0 + iParam1);
				}
				iVar0 += 46;
			}
		}
		if (((iParam3 == 90 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 14)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 15;
		if (((iParam3 == 70 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 16)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 17;
		if (((iParam3 == 71 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 15)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 16;
		if (((iParam3 == 72 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 22)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 23;
		if (((iParam3 == 73 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 74 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 92 && iParam2 == 0) && iParam1 >= 0) && iParam1 <= 48)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 49;
	}
	else
	{
		iVar0 += 272;
	}
	if (iParam0 == joaat("minivan2"))
	{
		if (((iParam3 == 76 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 77 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 75 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 91 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 91 && iParam2 == 2) && iParam1 >= 0) && iParam1 <= 67)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 68;
		if (Global_262145.f_12042 /* Tunable: TURN_ON_HALLOWEEN_BOBBLEHEADS */)
		{
			if ((iParam3 == 65 && iParam1 >= 1) && iParam1 <= 45)
			{
				return (iVar0 + iParam1);
			}
			iVar0 += 46;
		}
		else
		{
			if ((iParam3 == 65 && iParam1 >= 1) && iParam1 <= 21)
			{
				return (iVar0 + iParam1);
			}
			iVar0 += 46;
		}
		if (((iParam3 == 90 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 14)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 15;
		if (((iParam3 == 68 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 69 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 70 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 16)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 17;
		if (((iParam3 == 71 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 15)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 16;
		if (((iParam3 == 72 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 22)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 23;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 92 && iParam2 == 0) && iParam1 >= 0) && iParam1 <= 48)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 49;
		if (((iParam3 == 74 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
	}
	else
	{
		iVar0 += 281;
	}
	if (iParam0 == joaat("sabregt2"))
	{
		if (((iParam3 == 76 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 77 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 75 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (Global_262145.f_12042 /* Tunable: TURN_ON_HALLOWEEN_BOBBLEHEADS */)
		{
			if ((iParam3 == 65 && iParam1 >= 1) && iParam1 <= 45)
			{
				return (iVar0 + iParam1);
			}
			iVar0 += 46;
		}
		else
		{
			if ((iParam3 == 65 && iParam1 >= 1) && iParam1 <= 21)
			{
				return (iVar0 + iParam1);
			}
			iVar0 += 46;
		}
		if (((iParam3 == 90 && (iParam2 == 0 || iParam2 == 1)) && iParam1 >= 1) && iParam1 <= 14)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 15;
		if (((iParam3 == 70 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 16)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 17;
		if (((iParam3 == 71 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 15)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 16;
		if (((iParam3 == 72 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 22)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 23;
		if (((iParam3 == 73 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 92 && iParam2 == 0) && iParam1 >= 0) && iParam1 <= 48)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 49;
		if (((iParam3 == 62 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 13)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 14;
		if (((iParam3 == 63 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 16)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 17;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 74 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
	}
	else
	{
		iVar0 += 234;
	}
	if (iParam0 == joaat("slamvan3"))
	{
		if (((iParam3 == 82 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 83 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 76 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 77 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 75 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 91 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 91 && iParam2 == 2) && iParam1 >= 0) && iParam1 <= 67)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 68;
		if (Global_262145.f_12042 /* Tunable: TURN_ON_HALLOWEEN_BOBBLEHEADS */)
		{
			if ((iParam3 == 65 && iParam1 >= 1) && iParam1 <= 45)
			{
				return (iVar0 + iParam1);
			}
			iVar0 += 46;
		}
		else
		{
			if ((iParam3 == 65 && iParam1 >= 1) && iParam1 <= 21)
			{
				return (iVar0 + iParam1);
			}
			iVar0 += 46;
		}
		if (((iParam3 == 66 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 90 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 14)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 15;
		if (((iParam3 == 69 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 11)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 12;
		if (((iParam3 == 70 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 16)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 17;
		if (((iParam3 == 71 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 15)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 16;
		if (((iParam3 == 72 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 22)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 23;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 92 && iParam2 == 0) && iParam1 >= 0) && iParam1 <= 48)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 49;
		if (((iParam3 == 62 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 13)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 14;
		if (((iParam3 == 63 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 16)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 17;
	}
	else
	{
		iVar0 += 315;
	}
	if (iParam0 == joaat("tornado5"))
	{
		if (((iParam3 == 79 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 80 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 81 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 82 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 76 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 77 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 75 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 91 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 14)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 15;
		if (((iParam3 == 91 && iParam2 == 2) && iParam1 >= 0) && iParam1 <= 67)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 68;
		if (((iParam3 == 91 && iParam2 == 3) && iParam1 >= 0) && iParam1 <= 67)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 68;
		if (Global_262145.f_12042 /* Tunable: TURN_ON_HALLOWEEN_BOBBLEHEADS */)
		{
			if ((iParam3 == 65 && iParam1 >= 1) && iParam1 <= 45)
			{
				return (iVar0 + iParam1);
			}
			iVar0 += 46;
		}
		else
		{
			if ((iParam3 == 65 && iParam1 >= 1) && iParam1 <= 21)
			{
				return (iVar0 + iParam1);
			}
			iVar0 += 46;
		}
		if (((iParam3 == 66 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 90 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 14)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 15;
		if (((iParam3 == 70 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 16)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 17;
		if (((iParam3 == 71 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 15)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 16;
		if (((iParam3 == 72 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 22)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 23;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 74 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 92 && iParam2 == 0) && iParam1 >= 0) && iParam1 <= 48)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 49;
	}
	else
	{
		iVar0 += 382;
	}
	if (iParam0 == joaat("virgo2"))
	{
		if (((iParam3 == 80 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 81 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 82 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 76 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 77 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 75 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 91 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 91 && iParam2 == 2) && iParam1 >= 0) && iParam1 <= 67)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 68;
		if (Global_262145.f_12042 /* Tunable: TURN_ON_HALLOWEEN_BOBBLEHEADS */)
		{
			if ((iParam3 == 65 && iParam1 >= 1) && iParam1 <= 45)
			{
				return (iVar0 + iParam1);
			}
			iVar0 += 46;
		}
		else
		{
			if ((iParam3 == 65 && iParam1 >= 1) && iParam1 <= 21)
			{
				return (iVar0 + iParam1);
			}
			iVar0 += 46;
		}
		if (((iParam3 == 90 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 14)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 15;
		if (((iParam3 == 70 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 16)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 17;
		if (((iParam3 == 71 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 15)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 16;
		if (((iParam3 == 72 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 22)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 23;
		if (((iParam3 == 73 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 74 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 92 && iParam2 == 0) && iParam1 >= 0) && iParam1 <= 48)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 49;
	}
	else
	{
		iVar0 += 290;
	}
	if (iParam0 == joaat("avarus"))
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 18)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 19;
	}
	else
	{
		iVar0 += 19;
	}
	if (iParam0 == joaat("chimera"))
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 18)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 19;
	}
	else
	{
		iVar0 += 19;
	}
	if (iParam0 == joaat("daemon2"))
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 18)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 19;
	}
	else
	{
		iVar0 += 19;
	}
	if (iParam0 == joaat("zombiea"))
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 18)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 19;
	}
	else
	{
		iVar0 += 19;
	}
	if (iParam0 == joaat("zombieb"))
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 18)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 19;
	}
	else
	{
		iVar0 += 19;
	}
	if (iParam0 == joaat("sanctus"))
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 18)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 19;
	}
	else
	{
		iVar0 += 19;
	}
	if (iParam0 == joaat("wolfsbane"))
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 28)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 29;
	}
	else
	{
		iVar0 += 29;
	}
	if (iParam0 == joaat("blazer4"))
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 18)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 19;
	}
	else
	{
		iVar0 += 19;
	}
	if (iParam0 == joaat("youga2"))
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 18)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 19;
		if (iParam3 == 61 && iParam1 == 0)
		{
			return (iVar0 + iParam1);
		}
		iVar0++;
	}
	else
	{
		iVar0 += 20;
	}
	if (iParam0 == joaat("fcr2"))
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 18)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 19;
		if (((iParam3 == 92 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 48)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 49;
	}
	else
	{
		iVar0 += 59;
	}
	if (iParam0 == joaat("diablous2"))
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 18)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 19;
	}
	else
	{
		iVar0 += 19;
	}
	if (iParam0 == joaat("nightblade"))
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 12)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 13;
	}
	else
	{
		iVar0 += 13;
	}
	if (iParam0 == joaat("faggio3"))
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 12)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 13;
	}
	else
	{
		iVar0 += 13;
	}
	if (iParam0 == joaat("faggio"))
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 12)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 13;
	}
	else
	{
		iVar0 += 13;
	}
	if (iParam0 == joaat("defiler"))
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 12)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 13;
	}
	else
	{
		iVar0 += 13;
	}
	if (iParam0 == joaat("esskey"))
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 12)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 13;
	}
	else
	{
		iVar0 += 13;
	}
	if (iParam0 == joaat("hakuchou2"))
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 12)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 13;
	}
	else
	{
		iVar0 += 13;
	}
	if (iParam0 == joaat("manchez"))
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 12)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 13;
	}
	else
	{
		iVar0 += 13;
	}
	if (iParam0 == joaat("vortex"))
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 12)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 13;
	}
	else
	{
		iVar0 += 13;
	}
	if (iParam0 == joaat("apc"))
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 20)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 21;
	}
	else
	{
		iVar0 += 21;
	}
	if (iParam0 == joaat("halftrack"))
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 20)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 21;
	}
	else
	{
		iVar0 += 21;
	}
	if (iParam0 == joaat("dune3"))
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 20)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 21;
	}
	else
	{
		iVar0 += 21;
	}
	if (iParam0 == joaat("tampa3"))
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 20)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 21;
	}
	else
	{
		iVar0 += 21;
	}
	if (iParam0 == joaat("nightshark"))
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 20)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 21;
	}
	else
	{
		iVar0 += 21;
	}
	if (iParam0 == joaat("trailersmall2"))
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 20)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 21;
	}
	else
	{
		iVar0 += 21;
	}
	if (iParam0 == joaat("oppressor"))
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 20)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 21;
	}
	else
	{
		iVar0 += 21;
	}
	if (iParam0 == joaat("insurgent3"))
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 20)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 21;
	}
	else
	{
		iVar0 += 21;
	}
	if (iParam0 == joaat("technical3"))
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 20)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 21;
	}
	else
	{
		iVar0 += 21;
	}
	if (iParam0 == joaat("ardent"))
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 20)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 21;
	}
	else
	{
		iVar0 += 21;
	}
	if (iParam0 == joaat("specter2"))
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 66 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 67 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if ((iParam3 == 68 && iParam2 == 0) && iParam1 == 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 69 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 14)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 15;
		if (((iParam3 == 70 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 16)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 17;
		if (((iParam3 == 92 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 48)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 49;
		if (((iParam3 == 90 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
	}
	else
	{
		iVar0 += 116;
	}
	if (iParam0 == joaat("comet3"))
	{
		if (((iParam3 == 80 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 91 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 91 && iParam2 == 2) && iParam1 >= 0) && iParam1 <= 67)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 68;
		if (((iParam3 == 66 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 90 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if ((iParam3 == 68 && iParam2 == 0) && iParam1 == 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 69 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 14)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 15;
		if (((iParam3 == 70 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 16)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 17;
		if (((iParam3 == 92 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 48)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 49;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 78 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 12)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 13;
	}
	else
	{
		iVar0 += 200;
	}
	if (iParam0 == joaat("elegy"))
	{
		if (((iParam3 == 63 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 82 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 80 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 11)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 12;
		if ((iParam3 == 91 && iParam2 == 1) && iParam1 == 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 91 && iParam2 == 2) && iParam1 >= 0) && iParam1 <= 67)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 68;
		if (((iParam3 == 66 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 90 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 15)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 16;
		if ((iParam3 == 68 && iParam2 == 0) && iParam1 == 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 69 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 14)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 15;
		if (((iParam3 == 70 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 16)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 17;
		if (((iParam3 == 92 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 48)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 49;
		if (((iParam3 == 81 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 79 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 83 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 76 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 77 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 78 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 12)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 13;
	}
	else
	{
		iVar0 += 252;
	}
	if (iParam0 == joaat("italigtb2"))
	{
		if (((iParam3 == 80 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 66 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 67 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 90 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 69 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 13)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 14;
		if (((iParam3 == 70 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 16)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 17;
		if (((iParam3 == 92 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 48)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 49;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 68 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
	}
	else
	{
		iVar0 += 122;
	}
	if (iParam0 == joaat("nero2"))
	{
		if (((iParam3 == 63 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 80 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 66 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 67 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 68 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 69 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 70 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 16)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 17;
		if (((iParam3 == 92 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 48)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 49;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if ((iParam3 == 81 && iParam2 == 0) && iParam1 == 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 76 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 83 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
	}
	else
	{
		iVar0 += 105;
	}
	if (iParam0 == joaat("starling"))
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 11;
	}
	if (iParam0 == joaat("nokota"))
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 11;
	}
	if (iParam0 == joaat("rogue"))
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 11;
	}
	if (iParam0 == joaat("molotok"))
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 11;
	}
	if (iParam0 == joaat("bombushka"))
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 11;
	}
	if (iParam0 == joaat("tula"))
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
	}
	else
	{
		iVar0 += 9;
	}
	if (iParam0 == joaat("hunter"))
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
	}
	else
	{
		iVar0 += 9;
	}
	if (iParam0 == joaat("seabreeze"))
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
	}
	else
	{
		iVar0 += 9;
	}
	if (iParam0 == joaat("alphaz1"))
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
	}
	else
	{
		iVar0 += 9;
	}
	if (iParam0 == joaat("havok"))
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
	}
	else
	{
		iVar0 += 9;
	}
	if (iParam0 == joaat("retinue"))
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
	}
	else
	{
		iVar0 += 9;
	}
	if (iParam0 == joaat("microlight"))
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 11;
	}
	if (iParam0 == joaat("visione"))
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
	}
	else
	{
		iVar0 += 9;
	}
	if (iParam0 == joaat("comet4"))
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 11;
	}
	if (iParam0 == joaat("barrage"))
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 20)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 21;
	}
	else
	{
		iVar0 += 21;
	}
	if (iParam0 == joaat("avenger"))
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 20)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 21;
	}
	else
	{
		iVar0 += 21;
	}
	if (iParam0 == joaat("gb200"))
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 32 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 52 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 53;
	}
	if (iParam0 == joaat("fagaloa"))
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 32 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 14 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 6 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 25 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 65;
	}
	if (iParam0 == joaat("michelli"))
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 58;
	}
	if (iParam0 == joaat("ellie"))
	{
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 27;
	}
	if (iParam0 == joaat("issi3"))
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 13)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 14;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 12)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 13;
		if (((iParam3 == 6 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 114;
	}
	if (iParam0 == joaat("tezeract"))
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 43;
	}
	if (iParam0 == joaat("flashgt"))
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 56;
	}
	if (iParam0 == joaat("caracara"))
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 20)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 21;
	}
	else
	{
		iVar0 += 21;
	}
	if (iParam0 == joaat("cheburek"))
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 25 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 32 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 62;
	}
	if (iParam0 == joaat("dominator3"))
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 17)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 18;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 36 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 14)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 15;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 16)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 17;
		if (((iParam3 == 95 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 19)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 20;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
	}
	else
	{
		iVar0 += 115;
	}
	if (iParam0 == joaat("tyrant"))
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
	}
	else
	{
		iVar0 += 12;
	}
	if (iParam0 == joaat("taipan"))
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 32 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
	}
	else
	{
		iVar0 += 47;
	}
	if (iParam0 == joaat("entity2"))
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
	}
	else
	{
		iVar0 += 26;
	}
	if (iParam0 == joaat("hotring"))
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 31)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 32;
	}
	else
	{
		iVar0 += 32;
	}
	if (iParam0 == joaat("jester3"))
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 12)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 13;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 14 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 77;
	}
	if (iParam0 == joaat("stafford"))
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
	}
	else
	{
		iVar0 += 8;
	}
	if (iParam0 == joaat("speedo4"))
	{
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 20)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 21;
	}
	else
	{
		iVar0 += 31;
	}
	if (iParam0 == joaat("mule4"))
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 20)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 21;
	}
	else
	{
		iVar0 += 32;
	}
	if (iParam0 == joaat("pounder2"))
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 20)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 21;
	}
	else
	{
		iVar0 += 35;
	}
	if (iParam0 == joaat("swinger"))
	{
		if (((iParam3 == 25 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 11)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 12;
		if (((iParam3 == 52 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 55;
	}
	if (iParam0 == joaat("patriot2"))
	{
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 95 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 20)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 21;
	}
	else
	{
		iVar0 += 43;
	}
	if (iParam0 == joaat("oppressor2"))
	{
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 12)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 13;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 20)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 21;
	}
	else
	{
		iVar0 += 39;
	}
	if (iParam0 == joaat("menacer"))
	{
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 14)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 15;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 16)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 17;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 12)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 13;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 21)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 22;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 20)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 21;
	}
	else
	{
		iVar0 += 115;
	}
	if (iParam0 == joaat("freecrawler"))
	{
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 36 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 11)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 12;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 95 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
	}
	else
	{
		iVar0 += 61;
	}
	if (iParam0 == joaat("scramjet"))
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 11;
	}
	if (iParam0 == joaat("strikeforce"))
	{
		if (((iParam3 == 18 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 12)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 13;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 11)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 12;
	}
	else
	{
		iVar0 += 30;
	}
	if (iParam0 == joaat("patriot"))
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 20)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 21;
	}
	else
	{
		iVar0 += 21;
	}
	if (iParam0 == joaat("prairie"))
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 11;
	}
	if (iParam0 == joaat("clique"))
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 32 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 6 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 43;
	}
	if (iParam0 == joaat("deveste"))
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 48;
	}
	if (iParam0 == joaat("deviant"))
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 11)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 12;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 66;
	}
	if (iParam0 == joaat("impaler"))
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 39;
	}
	if (iParam0 == joaat("schlagen"))
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
		if (((iParam3 == 95 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 32 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 86;
	}
	if (iParam0 == joaat("toros"))
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 12)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 13;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 14)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 15;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 14)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 15;
		if (((iParam3 == 95 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 96;
	}
	if (iParam0 == joaat("vamos"))
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 39 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 12)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 13;
	}
	else
	{
		iVar0 += 67;
	}
	if (iParam0 == joaat("tulip"))
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 11)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 12;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 45;
	}
	if (iParam0 == joaat("impaler2"))
	{
		if (((iParam3 == 52 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 95 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 63 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 39 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 59 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 77 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 78 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 79 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 80 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 72 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 82 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
	}
	else
	{
		iVar0 += 75;
	}
	if (iParam0 == joaat("italigto"))
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
		if (((iParam3 == 32 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 11)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 12;
	}
	else
	{
		iVar0 += 77;
	}
	if (iParam0 == joaat("dominator4"))
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 66 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 72 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 77 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 78 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 79 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 80 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 82 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
	}
	else
	{
		iVar0 += 71;
	}
	if (iParam0 == joaat("scarab"))
	{
		if (((iParam3 == 18 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 11)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 12;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 39 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 72 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 77 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 78 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 79 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 80 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 82 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
	}
	else
	{
		iVar0 += 90;
	}
	if (iParam0 == joaat("cerberus"))
	{
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 11)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 12;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 72 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
		if (((iParam3 == 77 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 78 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 79 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 80 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
	}
	else
	{
		iVar0 += 76;
	}
	if (iParam0 == joaat("cerberus2"))
	{
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 72 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 77 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 78 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 79 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 80 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 18)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 19;
	}
	else
	{
		iVar0 += 80;
	}
	if (iParam0 == joaat("bruiser"))
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 13)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 14;
		if (((iParam3 == 95 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 72 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 77 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 78 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 79 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 80 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 82 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
	}
	else
	{
		iVar0 += 69;
	}
	if (iParam0 == joaat("monster3"))
	{
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 77 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 78 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 79 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 82 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
	}
	else
	{
		iVar0 += 46;
	}
	if (iParam0 == joaat("slamvan4"))
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 72 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 77 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 78 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 79 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 80 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 81 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 82 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
	}
	else
	{
		iVar0 += 59;
	}
	if (iParam0 == joaat("imperator"))
	{
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 72 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 77 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 78 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
		if (((iParam3 == 79 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 80 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 81 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 82 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 39 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
	}
	else
	{
		iVar0 += 79;
	}
	if (iParam0 == joaat("zr380"))
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 95 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 39 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 77 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 78 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 79 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 80 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 81 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 82 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
	}
	else
	{
		iVar0 += 63;
	}
	if (iParam0 == joaat("issi4"))
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 12)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 13;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 70 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 16)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 17;
		if (((iParam3 == 71 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 15)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 16;
		if (((iParam3 == 74 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 77 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 78 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 81 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 80 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 82 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 79 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 63 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 11)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 12;
		if (((iParam3 == 72 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
	}
	else
	{
		iVar0 += 123;
	}
	if (iParam0 == joaat("deathbike"))
	{
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 77 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 78 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 80 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 81 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 82 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
	}
	else
	{
		iVar0 += 23;
	}
	if (iParam0 == joaat("brutus"))
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 95 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 77 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 78 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 79 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 81 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 82 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
	}
	else
	{
		iVar0 += 70;
	}
	if (iParam0 == joaat("zr3802"))
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 95 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 39 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 77 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 78 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 79 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 80 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 81 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 82 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 18)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 19;
	}
	else
	{
		iVar0 += 86;
	}
	if (iParam0 == joaat("dominator5"))
	{
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 77 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 78 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 79 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 80 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 82 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 18)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 19;
	}
	else
	{
		iVar0 += 69;
	}
	if (iParam0 == joaat("deathbike2"))
	{
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 77 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 78 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 80 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 81 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 82 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 18)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 19;
	}
	else
	{
		iVar0 += 40;
	}
	if (iParam0 == joaat("issi6"))
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 12)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 13;
		if (((iParam3 == 95 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 63 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 11)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 12;
		if (((iParam3 == 39 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 72 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 77 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 78 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 79 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 80 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 82 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
	}
	else
	{
		iVar0 += 98;
	}
	if (iParam0 == joaat("zr3803"))
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 95 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 39 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 77 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 78 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 79 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 80 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 81 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 82 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
	}
	else
	{
		iVar0 += 63;
	}
	if (iParam0 == joaat("dominator6"))
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 36 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 72 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 77 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 78 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 79 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 80 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 82 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
	}
	else
	{
		iVar0 += 71;
	}
	if (iParam0 == joaat("deathbike3"))
	{
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 77 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 80 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 81 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 82 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
	}
	else
	{
		iVar0 += 14;
	}
	if (iParam0 == joaat("rcbandito"))
	{
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 20)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 21;
		if (((iParam3 == 95 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 78 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
	}
	else
	{
		iVar0 += 39;
	}
	if (iParam0 == joaat("monster5"))
	{
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 72 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 77 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 78 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 79 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 82 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
	}
	else
	{
		iVar0 += 55;
	}
	if (iParam0 == joaat("scarab2"))
	{
		if (((iParam3 == 18 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
		if (((iParam3 == 36 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 16)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 17;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 39 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 77 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 78 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 79 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 80 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 82 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 18)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 19;
	}
	else
	{
		iVar0 += 108;
	}
	if (iParam0 == joaat("impaler3"))
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 79 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 80 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 82 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 18)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 19;
	}
	else
	{
		iVar0 += 50;
	}
	if (iParam0 == joaat("impaler4"))
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 63 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 39 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 77 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 78 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 79 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 80 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 82 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 52 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
	}
	else
	{
		iVar0 += 69;
	}
	if (iParam0 == joaat("brutus3"))
	{
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 95 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 72 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 77 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 78 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 79 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 81 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 82 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
	}
	else
	{
		iVar0 += 72;
	}
	if (iParam0 == joaat("monster4"))
	{
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 77 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 78 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 79 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 82 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 18)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 19;
	}
	else
	{
		iVar0 += 62;
	}
	if (iParam0 == joaat("bruiser2"))
	{
		if (((iParam3 == 45 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 77 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 78 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 79 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 80 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 82 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 18)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 19;
	}
	else
	{
		iVar0 += 73;
	}
	if (iParam0 == joaat("bruiser3"))
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 13)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 14;
		if (((iParam3 == 95 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 77 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 78 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 79 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 80 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 82 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 72 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
	}
	else
	{
		iVar0 += 75;
	}
	if (iParam0 == joaat("issi5"))
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 14)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 15;
		if (((iParam3 == 95 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 39 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 66 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 77 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 78 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 79 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 80 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 82 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 18)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 19;
	}
	else
	{
		iVar0 += 129;
	}
	if (iParam0 == joaat("cerberus3"))
	{
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 11)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 12;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 72 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
		if (((iParam3 == 77 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 78 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 79 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 80 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
	}
	else
	{
		iVar0 += 76;
	}
	if (iParam0 == joaat("slamvan5"))
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 77 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 78 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 79 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 80 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 81 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 82 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 22)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 23;
	}
	else
	{
		iVar0 += 66;
	}
	if (iParam0 == joaat("imperator2"))
	{
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 39 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 77 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 78 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 79 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 80 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 81 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 82 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 18)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 19;
	}
	else
	{
		iVar0 += 68;
	}
	if (iParam0 == joaat("imperator3"))
	{
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 39 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 72 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 77 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 78 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 79 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 80 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 81 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 82 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
	}
	else
	{
		iVar0 += 69;
	}
	if (iParam0 == joaat("brutus2"))
	{
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 95 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 77 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 78 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 79 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 81 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 82 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 18)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 19;
	}
	else
	{
		iVar0 += 68;
	}
	if (iParam0 == joaat("scarab3"))
	{
		if (((iParam3 == 18 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 11)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 12;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 39 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 72 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 77 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 78 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 79 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 80 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 82 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
	}
	else
	{
		iVar0 += 90;
	}
	if (iParam0 == joaat("slamvan6"))
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 72 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 77 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 78 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 79 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 80 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 81 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 82 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
	}
	else
	{
		iVar0 += 59;
	}
	if (iParam0 == joaat("caracara2"))
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 58;
	}
	if (iParam0 == joaat("drafter"))
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 32 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 95 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 71;
	}
	if (iParam0 == joaat("dynasty"))
	{
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 32 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 95 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 81;
	}
	if (iParam0 == joaat("gauntlet3"))
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 15)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 16;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 95 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
		if (iParam3 == 61 && iParam1 == 0)
		{
			return (iVar0 + iParam1);
		}
		iVar0++;
	}
	else
	{
		iVar0 += 87;
	}
	if (iParam0 == joaat("gauntlet4"))
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 39 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
		if (((iParam3 == 36 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 12)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 13;
	}
	else
	{
		iVar0 += 86;
	}
	if (iParam0 == joaat("hellion"))
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 16)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 17;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 39 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 94;
	}
	if (iParam0 == joaat("issi7"))
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
		if (((iParam3 == 95 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 65;
	}
	if (iParam0 == joaat("krieger"))
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 12)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 13;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 37;
	}
	if (iParam0 == joaat("locust"))
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 39 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 12)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 13;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 70;
	}
	if (iParam0 == joaat("nebula"))
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 39 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 36 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 61;
	}
	if (iParam0 == joaat("neo"))
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 13)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 14;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 12)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 13;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
		if (((iParam3 == 95 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 87;
	}
	if (iParam0 == joaat("novak"))
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 53;
	}
	if (iParam0 == joaat("s80"))
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 52 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 32;
	}
	if (iParam0 == joaat("thrax"))
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 15)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 16;
		if (((iParam3 == 39 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 80;
	}
	if (iParam0 == joaat("zion3"))
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 25 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 32 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 78;
	}
	if (iParam0 == joaat("zorrusso"))
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 38;
	}
	if (iParam0 == joaat("emerus"))
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 23)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 24;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 12)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 13;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 32 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 72;
	}
	if (iParam0 == joaat("peyote"))
	{
		if (iParam3 == 61 && iParam1 == 0)
		{
			return (iVar0 + iParam1);
		}
		iVar0++;
	}
	else
	{
		iVar0++;
	}
	if (iParam0 == joaat("peyote2"))
	{
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 11)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 12;
		if (((iParam3 == 39 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 17)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 18;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
	}
	else
	{
		iVar0 += 57;
	}
	if (iParam0 == joaat("rrocket"))
	{
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 16;
	}
	if (iParam0 == joaat("jugular"))
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 54;
	}
	if (iParam0 == joaat("paragon"))
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 39 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
		if (((iParam3 == 95 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 12)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 13;
	}
	else
	{
		iVar0 += 71;
	}
	if (iParam0 == joaat("paragon2"))
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 39 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
		if (((iParam3 == 95 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 12)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 13;
	}
	else
	{
		iVar0 += 71;
	}
	if (iParam0 == joaat("rebla"))
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 13)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 14;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 32 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 94;
	}
	if (iParam0 == joaat("imorgon"))
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 14)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 15;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 20)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 21;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 24)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 25;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 95 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 15)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 16;
		if (((iParam3 == 32 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 12)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 13;
	}
	else
	{
		iVar0 += 125;
	}
	if (iParam0 == joaat("asbo"))
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 15)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 16;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 12)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 13;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 52 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 14 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 11)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 12;
		if (((iParam3 == 6 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 25 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 93;
	}
	if (iParam0 == joaat("sugoi"))
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 14)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 15;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 14)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 15;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 12)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 13;
		if (((iParam3 == 32 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 100;
	}
	if (iParam0 == joaat("komoda"))
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 24)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 25;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 12)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 13;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 18)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 19;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 17)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 18;
		if (((iParam3 == 95 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 32 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 11)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 12;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 115;
	}
	if (iParam0 == joaat("zhaba"))
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 30)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 31;
	}
	else
	{
		iVar0 += 87;
	}
	if (iParam0 == joaat("vstr"))
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 17)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 18;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 13)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 14;
		if (((iParam3 == 95 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 32 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 83;
	}
	if (iParam0 == joaat("everon"))
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 22)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 23;
		if (((iParam3 == 95 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 39 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 17)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 18;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 81;
	}
	if (iParam0 == joaat("sultan2"))
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 16)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 17;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 25 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 15)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 16;
		if (((iParam3 == 52 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 95 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
		if (iParam3 == 61 && iParam1 == 0)
		{
			return (iVar0 + iParam1);
		}
		iVar0++;
	}
	else
	{
		iVar0 += 102;
	}
	if (iParam0 == joaat("kanjo"))
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 18)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 19;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 12)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 13;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 13)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 14;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 11)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 12;
		if (((iParam3 == 39 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 15)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 16;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 52 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 95 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 25 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 83 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 13)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 14;
	}
	else
	{
		iVar0 += 275;
	}
	if (iParam0 == joaat("outlaw"))
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 20)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 21;
	}
	else
	{
		iVar0 += 21;
	}
	if (iParam0 == joaat("formula"))
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 12)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 13;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 6 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 47;
	}
	if (iParam0 == joaat("stryder"))
	{
		if (((iParam3 == 36 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 23;
	}
	if (iParam0 == joaat("jb7002"))
	{
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
	}
	else
	{
		iVar0 += 5;
	}
	if (iParam0 == joaat("vagrant"))
	{
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 95 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 52 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 32 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 30)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 31;
	}
	else
	{
		iVar0 += 60;
	}
	if (iParam0 == joaat("retinue2"))
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 39 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 25 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 64;
	}
	if (iParam0 == joaat("yosemite2"))
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 11)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 12;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 51 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 11)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 12;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 39 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 95 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 71;
	}
	if (iParam0 == joaat("furia"))
	{
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 14)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 15;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 14)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 15;
		if (((iParam3 == 32 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 84;
	}
	if (iParam0 == joaat("formula2"))
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 6 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 39;
	}
	if (iParam0 == joaat("minitank"))
	{
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 15;
	}
	if (iParam0 == joaat("gauntlet5"))
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 17)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 18;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 13)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 14;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 22) && iParam1 <= 23)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 52 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 63 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 59 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 14 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 76 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 32 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 39 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 80 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 54 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 12)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 13;
		if (((iParam3 == 95 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 66 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 90 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 68 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 69 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 70 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 13)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 14;
		if (((iParam3 == 68 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
	}
	else
	{
		iVar0 += 207;
	}
	if (iParam0 == joaat("manana2"))
	{
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 82 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 79 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 95 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 14 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 74 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 75 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 12)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 13;
		if (((iParam3 == 76 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 77 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 65 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 21)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 22;
		if (((iParam3 == 90 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 14)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 15;
		if (((iParam3 == 70 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 16)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 17;
		if (((iParam3 == 71 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 15)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 16;
		if (((iParam3 == 72 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 22)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 23;
		if (((iParam3 == 62 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 13)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 14;
		if (((iParam3 == 63 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 16)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 17;
	}
	else
	{
		iVar0 += 204;
	}
	if (iParam0 == joaat("manana"))
	{
		if (iParam3 == 61 && iParam1 == 0)
		{
			return (iVar0 + iParam1);
		}
		iVar0++;
	}
	else
	{
		iVar0++;
	}
	if (iParam0 == joaat("yosemite"))
	{
		if (iParam3 == 61 && iParam1 == 0)
		{
			return (iVar0 + iParam1);
		}
		iVar0++;
	}
	else
	{
		iVar0++;
	}
	if (iParam0 == joaat("dukes3"))
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
		if (((iParam3 == 59 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 36 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 39 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 12)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 13;
		if (((iParam3 == 32 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 26)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 27;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 13)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 14;
	}
	else
	{
		iVar0 += 114;
	}
	if (iParam0 == joaat("club"))
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 54 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 14 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 22) && iParam1 <= 27)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
	}
	else
	{
		iVar0 += 85;
	}
	if (iParam0 == joaat("youga3"))
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 43 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 95 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 74 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 81 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 32 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 36 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 16)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 17;
		if (((iParam3 == 24 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 7 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 82 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 91 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 15)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 16;
		if (((iParam3 == 66 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 68 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 69 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 70 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 16)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 17;
		if (((iParam3 == 14 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 76 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
	}
	else
	{
		iVar0 += 182;
	}
	if (iParam0 == joaat("peyote3"))
	{
		if (((iParam3 == 91 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 13)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 14;
		if (((iParam3 == 65 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 21)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 22;
		if (((iParam3 == 90 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 70 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 16)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 17;
		if (((iParam3 == 71 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 15)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 16;
		if (((iParam3 == 72 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 22)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 23;
		if (((iParam3 == 73 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 74 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 75 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
		if (((iParam3 == 45 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 80 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 82 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 62 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 13)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 14;
		if (((iParam3 == 63 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 16)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 17;
		if (((iParam3 == 76 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
	}
	else
	{
		iVar0 += 207;
	}
	if (iParam0 == joaat("glendale2"))
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
		if (((iParam3 == 36 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 74 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 75 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
		if (((iParam3 == 82 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 91 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 12)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 13;
		if (((iParam3 == 65 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 21)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 22;
		if (((iParam3 == 90 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 14)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 15;
		if (((iParam3 == 70 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 16)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 17;
		if (((iParam3 == 71 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 15)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 16;
		if (((iParam3 == 72 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 22)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 23;
		if (((iParam3 == 73 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 62 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 13)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 14;
		if (((iParam3 == 63 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 16)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 17;
		if (((iParam3 == 76 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
	}
	else
	{
		iVar0 += 207;
	}
	if (iParam0 == joaat("yosemite3"))
	{
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 14)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 15;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 43 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 14)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 15;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 7 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 15)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 16;
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 74 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 84 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 18)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 19;
		if (((iParam3 == 65 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 21)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 22;
		if (((iParam3 == 90 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 14)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 15;
		if (((iParam3 == 69 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
		if (((iParam3 == 70 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 16)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 17;
		if (((iParam3 == 71 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 15)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 16;
		if (((iParam3 == 83 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 51 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 39 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 80 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 81 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 82 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
		if (((iParam3 == 76 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 77 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 68 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
	}
	else
	{
		iVar0 += 264;
	}
	if (iParam0 == joaat("seminole2"))
	{
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 36 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 43 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 39 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 95 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 32 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
	}
	else
	{
		iVar0 += 75;
	}
	if (iParam0 == joaat("penumbra2"))
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 22)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 23;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 15)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 16;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 19 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 15)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 16;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 16)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 17;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 14)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 15;
		if (((iParam3 == 95 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 32 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 12)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 13;
	}
	else
	{
		iVar0 += 145;
	}
	if (iParam0 == joaat("glendale"))
	{
		if (iParam3 == 61 && iParam1 == 0)
		{
			return (iVar0 + iParam1);
		}
		iVar0++;
	}
	else
	{
		iVar0++;
	}
	if (iParam0 == joaat("landstalker2"))
	{
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 32 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
	}
	else
	{
		iVar0 += 62;
	}
	if (iParam0 == joaat("coquette4"))
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 54 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 60;
	}
	if (iParam0 == joaat("openwheel1"))
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 28;
	}
	if (iParam0 == joaat("openwheel2"))
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 6 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 32 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 57;
	}
	if (iParam0 == joaat("tigon"))
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 11)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 12;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 51;
	}
	if (iParam0 == joaat("brioso2"))
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 6 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 52 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 95 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 11)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 12;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 61;
	}
	if (iParam0 == joaat("manchez2"))
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 18 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 6 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 20)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 21;
	}
	else
	{
		iVar0 += 45;
	}
	if (iParam0 == joaat("seasparrow2"))
	{
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
	}
	else
	{
		iVar0 += 3;
	}
	if (iParam0 == joaat("slamtruck"))
	{
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 32 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 95 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 18)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 19;
	}
	else
	{
		iVar0 += 59;
	}
	if (iParam0 == joaat("italirsx"))
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 20)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 21;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 14)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 15;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 13)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 14;
		if (((iParam3 == 32 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 112;
	}
	if (iParam0 == joaat("toreador"))
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 36 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 12)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 13;
	}
	else
	{
		iVar0 += 58;
	}
	if (iParam0 == joaat("winky"))
	{
		if (((iParam3 == 6 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 14 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 7 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 29)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 30;
	}
	else
	{
		iVar0 += 86;
	}
	if (iParam0 == joaat("weevil"))
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 16)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 17;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 11)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 12;
		if (((iParam3 == 39 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 22) && iParam1 <= 27)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 16)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 17;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 15)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 16;
	}
	else
	{
		iVar0 += 117;
	}
	if (iParam0 == joaat("squaddie"))
	{
		if (((iParam3 == 6 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 13)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 14;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 13)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 14;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 14)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 15;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 19)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 20;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 14)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 15;
		if (((iParam3 == 32 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 16)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 17;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 20)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 21;
	}
	else
	{
		iVar0 += 159;
	}
	if (iParam0 == joaat("veto"))
	{
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 12)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 13;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 12)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 13;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 12)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 13;
	}
	else
	{
		iVar0 += 55;
	}
	if (iParam0 == joaat("alkonost"))
	{
		if (((iParam3 == 18 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 19;
	}
	if (iParam0 == joaat("annihilator2"))
	{
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 20)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 21;
	}
	else
	{
		iVar0 += 24;
	}
	if (iParam0 == joaat("veto2"))
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 12)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 13;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 12)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 13;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 30)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 31;
	}
	else
	{
		iVar0 += 69;
	}
	if (iParam0 == joaat("verus"))
	{
		if (((iParam3 == 41 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 7 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 20)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 21;
	}
	else
	{
		iVar0 += 42;
	}
	if (iParam0 == joaat("kuruma"))
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 15)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 16;
	}
	else
	{
		iVar0 += 16;
	}
	if (iParam0 == joaat("hermes"))
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 11)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 12;
	}
	else
	{
		iVar0 += 12;
	}
	if (iVar0 > 20000)
	{
	}
	return 0;
}

int func_177(int iParam0)//Position - 0x12C1A4
{
	switch (iParam0)
	{
		case joaat("adder"):
			return 0;
			break;
		case joaat("akuma"):
			return 1;
			break;
		case joaat("asea"):
			return 2;
			break;
		case joaat("asterope"):
			return 3;
			break;
		case joaat("bagger"):
			return 4;
			break;
		case joaat("baller"):
			return 5;
			break;
		case joaat("banshee"):
		case joaat("banshee2"):
			return 6;
			break;
		case joaat("bati"):
			return 7;
			break;
		case joaat("bati2"):
			return 8;
			break;
		case joaat("bfinjection"):
			return 9;
			break;
		case joaat("bison"):
			return 10;
			break;
		case joaat("bison2"):
			return 11;
			break;
		case joaat("bison3"):
			return 12;
			break;
		case joaat("bjxl"):
			return 13;
			break;
		case joaat("btype"):
			return 14;
			break;
		case joaat("blazer"):
			return 15;
			break;
		case joaat("blazer2"):
			return 15;
			break;
		case joaat("blazer3"):
			return 15;
			break;
		case joaat("blista"):
			return 16;
			break;
		case joaat("bobcatxl"):
			return 17;
			break;
		case joaat("bodhi2"):
			return 18;
			break;
		case joaat("boxville"):
			return 19;
			break;
		case joaat("boxville2"):
			return 20;
			break;
		case joaat("boxville3"):
			return 21;
			break;
		case joaat("buccaneer"):
		case joaat("buccaneer2"):
			return 22;
			break;
		case joaat("buffalo"):
			return 23;
			break;
		case joaat("buffalo2"):
			return 24;
			break;
		case joaat("bullet"):
			return 25;
			break;
		case joaat("burrito"):
			return 26;
			break;
		case joaat("paradise"):
			return 27;
			break;
		case joaat("bifta"):
			return 28;
			break;
		case joaat("kalahari"):
			return 29;
			break;
		case joaat("carbonizzare"):
			return 30;
			break;
		case joaat("carbonrs"):
			return 31;
			break;
		case joaat("cavalcade"):
			return 32;
			break;
		case joaat("cavalcade2"):
			return 33;
			break;
		case joaat("cheetah"):
			return 34;
			break;
		case joaat("cogcabrio"):
			return 35;
			break;
		case joaat("comet2"):
			return 36;
			break;
		case joaat("coquette"):
		case joaat("coquette2"):
			return 37;
			break;
		case joaat("daemon"):
			return 38;
			break;
		case joaat("dilettante"):
			return 39;
			break;
		case joaat("dominator"):
			return 40;
			break;
		case joaat("double"):
			return 41;
			break;
		case joaat("dubsta"):
			return 42;
			break;
		case joaat("dubsta2"):
			return 43;
			break;
		case joaat("elegy2"):
			return 44;
			break;
		case joaat("emperor"):
			return 45;
			break;
		case joaat("emperor2"):
			return 46;
			break;
		case joaat("emperor3"):
			return 47;
			break;
		case joaat("entityxf"):
			return 48;
			break;
		case joaat("exemplar"):
			return 49;
			break;
		case joaat("f620"):
			return 50;
			break;
		case joaat("faggio2"):
			return 51;
			break;
		case joaat("felon"):
			return 52;
			break;
		case joaat("felon2"):
			return 53;
			break;
		case joaat("feltzer2"):
			return 54;
			break;
		case joaat("fq2"):
			return 55;
			break;
		case joaat("fugitive"):
			return 56;
			break;
		case joaat("fusilade"):
			return 57;
			break;
		case joaat("futo"):
			return 58;
			break;
		case joaat("gauntlet"):
			return 59;
			break;
		case joaat("gburrito"):
			return 60;
			break;
		case joaat("granger"):
			return 61;
			break;
		case joaat("gresley"):
			return 62;
			break;
		case joaat("habanero"):
			return 63;
			break;
		case joaat("hexer"):
			return 64;
			break;
		case joaat("hotknife"):
			return 65;
			break;
		case joaat("infernus"):
			return 66;
			break;
		case joaat("ingot"):
			return 67;
			break;
		case joaat("intruder"):
			return 68;
			break;
		case joaat("issi2"):
			return 69;
			break;
		case joaat("jackal"):
			return 70;
			break;
		case joaat("jb700"):
			return 71;
			break;
		case joaat("khamelion"):
			return 72;
			break;
		case joaat("landstalker"):
			return 73;
			break;
		case joaat("lguard"):
			return 74;
			break;
		case joaat("manana"):
			return 75;
			break;
		case joaat("mesa"):
			return 76;
			break;
		case joaat("minivan"):
		case joaat("minivan2"):
			return 77;
			break;
		case joaat("monroe"):
			return 78;
			break;
		case joaat("nemesis"):
			return 79;
			break;
		case joaat("ninef"):
			return 80;
			break;
		case joaat("ninef2"):
			return 81;
			break;
		case joaat("oracle"):
			return 82;
			break;
		case joaat("oracle2"):
			return 83;
			break;
		case joaat("patriot"):
			return 84;
			break;
		case joaat("pcj"):
			return 85;
			break;
		case joaat("penumbra"):
			return 86;
			break;
		case joaat("peyote"):
			return 87;
			break;
		case joaat("phoenix"):
			return 88;
			break;
		case joaat("prairie"):
			return 89;
			break;
		case joaat("pranger"):
			return 90;
			break;
		case joaat("premier"):
			return 91;
			break;
		case joaat("primo"):
		case joaat("primo2"):
			return 92;
			break;
		case joaat("radi"):
			return 93;
			break;
		case joaat("rancherxl"):
			return 94;
			break;
		case joaat("rancherxl2"):
			return 95;
			break;
		case joaat("rapidgt"):
			return 96;
			break;
		case joaat("rapidgt2"):
			return 97;
			break;
		case joaat("ratloader"):
			return 98;
			break;
		case joaat("rebel"):
			return 99;
			break;
		case joaat("rebel2"):
			return 100;
			break;
		case joaat("regina"):
			return 101;
			break;
		case joaat("rocoto"):
			return 102;
			break;
		case joaat("ruffian"):
			return 103;
			break;
		case joaat("ruiner"):
			return 104;
			break;
		case joaat("rumpo"):
			return 105;
			break;
		case joaat("sabregt"):
		case joaat("sabregt2"):
			return 106;
			break;
		case joaat("sadler"):
			return 107;
			break;
		case joaat("sanchez"):
			return 108;
			break;
		case joaat("sandking"):
			return 109;
			break;
		case joaat("sandking2"):
			return 110;
			break;
		case joaat("schafter2"):
			return 111;
			break;
		case joaat("schwarzer"):
			return 112;
			break;
		case joaat("seminole"):
			return 113;
			break;
		case joaat("sentinel"):
			return 114;
			break;
		case joaat("sentinel2"):
			return 115;
			break;
		case joaat("serrano"):
			return 116;
			break;
		case joaat("speedo"):
			return 117;
			break;
		case joaat("speedo2"):
			return 118;
			break;
		case joaat("stanier"):
			return 119;
			break;
		case joaat("stinger"):
			return 120;
			break;
		case joaat("stingergt"):
			return 121;
			break;
		case joaat("stratum"):
			return 122;
			break;
		case joaat("stretch"):
			return 123;
			break;
		case joaat("sultan"):
		case joaat("sultanrs"):
			return 124;
			break;
		case joaat("superd"):
			return 125;
			break;
		case joaat("surano"):
			return 126;
			break;
		case joaat("surge"):
			return 127;
			break;
		case joaat("tailgater"):
			return 128;
			break;
		case joaat("jester"):
			return 129;
			break;
		case joaat("tornado"):
		case joaat("tornado2"):
		case joaat("tornado3"):
		case joaat("tornado4"):
		case joaat("tornado5"):
			return 133;
			break;
		case joaat("vacca"):
			return 134;
			break;
		case joaat("vader"):
			return 135;
			break;
		case joaat("vigero"):
			return 136;
			break;
		case joaat("voltic"):
			return 137;
			break;
		case joaat("voodoo2"):
		case joaat("voodoo"):
			return 138;
			break;
		case joaat("washington"):
			return 139;
			break;
		case joaat("youga"):
			return 140;
			break;
		case joaat("zion"):
			return 141;
			break;
		case joaat("zion2"):
			return 142;
			break;
		case joaat("ztype"):
			return 143;
			break;
		case joaat("massacro"):
			return 144;
			break;
		case joaat("turismor"):
			return 145;
			break;
		case joaat("zentorno"):
			return 146;
			break;
		case joaat("huntley"):
			return 147;
			break;
		case joaat("alpha"):
			return 148;
			break;
		case joaat("cruiser"):
			return 149;
			break;
		case joaat("surfer"):
			return 150;
			break;
		case joaat("faction"):
		case joaat("faction2"):
			return 151;
			break;
		case joaat("chino"):
		case joaat("chino2"):
			return 152;
			break;
		case joaat("moonbeam"):
		case joaat("moonbeam2"):
			return 153;
			break;
		case joaat("btype2"):
			return 154;
			break;
		case joaat("lurcher"):
			return 155;
			break;
		case joaat("btype3"):
			return 156;
			break;
		case joaat("faction3"):
			return 157;
			break;
		case joaat("slamvan"):
		case joaat("slamvan2"):
		case joaat("slamvan3"):
			return 158;
			break;
		case joaat("virgo2"):
			return 159;
			break;
		case joaat("virgo3"):
			return 160;
			break;
		case joaat("bestiagts"):
			return 161;
			break;
		case joaat("brickade"):
			return 162;
			break;
		case joaat("fmj"):
			return 163;
			break;
		case joaat("nimbus"):
			return 164;
			break;
		case joaat("pfister811"):
			return 165;
			break;
		case joaat("prototipo"):
			return 166;
			break;
		case joaat("rumpo3"):
			return 167;
			break;
		case joaat("seven70"):
			return 168;
			break;
		case joaat("tug"):
			return 169;
			break;
		case joaat("volatus"):
			return 170;
			break;
		case joaat("windsor2"):
			return 171;
			break;
		case joaat("xls"):
			return 172;
			break;
		case joaat("xls2"):
			return 173;
			break;
		case joaat("reaper"):
			return 174;
			break;
		case joaat("le7b"):
			return 175;
			break;
	}
	switch (iParam0)
	{
		case joaat("buffalo3"):
			return 176;
			break;
		case joaat("dominator2"):
			return 177;
			break;
		case joaat("gauntlet2"):
			return 178;
			break;
		case joaat("stalion2"):
			return 179;
			break;
		case joaat("omnis"):
			return 180;
			break;
		case joaat("tropos"):
			return 181;
			break;
		case joaat("brioso"):
			return 182;
			break;
		case joaat("trophytruck"):
			return 183;
			break;
		case joaat("trophytruck2"):
			return 184;
			break;
		case joaat("contender"):
			return 185;
			break;
		case joaat("cliffhanger"):
			return 186;
			break;
		case joaat("bf400"):
			return 187;
			break;
		case joaat("tyrus"):
			return 188;
			break;
		case joaat("rallytruck"):
			return 189;
			break;
		case joaat("tampa2"):
			return 190;
			break;
		case joaat("gargoyle"):
			return 191;
			break;
		case joaat("lynx"):
			return 192;
			break;
		case joaat("sheava"):
			return 193;
			break;
		case joaat("avarus"):
			return 194;
			break;
		case joaat("chimera"):
			return 195;
			break;
		case joaat("daemon2"):
			return 196;
			break;
		case joaat("defiler"):
			return 197;
			break;
		case joaat("esskey"):
			return 198;
			break;
		case joaat("nightblade"):
			return 199;
			break;
		case joaat("ratbike"):
			return 200;
			break;
		case joaat("zombiea"):
			return 202;
			break;
		case joaat("zombieb"):
			return 203;
			break;
		case joaat("shotaro"):
			return 204;
			break;
		case joaat("raptor"):
			return 205;
			break;
		case joaat("hakuchou2"):
			return 206;
			break;
		case joaat("blazer4"):
			return 207;
			break;
		case joaat("sanctus"):
			return 208;
			break;
		case joaat("vortex"):
			return 209;
			break;
		case joaat("manchez"):
			return 210;
			break;
		case joaat("tornado6"):
			return 211;
			break;
		case joaat("youga2"):
			return 212;
			break;
		case joaat("wolfsbane"):
			return 213;
			break;
		case joaat("faggio3"):
			return 214;
			break;
		case joaat("faggio"):
			return 215;
			break;
		case joaat("dune5"):
			return 216;
			break;
		case joaat("phantom2"):
			return 217;
			break;
		case joaat("technical2"):
			return 218;
			break;
		case joaat("blazer5"):
			return 219;
			break;
		case joaat("boxville5"):
			return 220;
			break;
		case joaat("wastelander"):
			return 221;
			break;
		case joaat("ruiner2"):
			return 222;
			break;
		case joaat("voltic2"):
			return 223;
			break;
		case joaat("penetrator"):
			return 224;
			break;
		case joaat("tempesta"):
			return 225;
			break;
		case joaat("italigtb2"):
			return 226;
			break;
		case joaat("nero2"):
			return 227;
			break;
		case joaat("diablous2"):
			return 228;
			break;
		case joaat("fcr2"):
			return 229;
			break;
		case joaat("elegy"):
			return 230;
			break;
		case joaat("comet3"):
			return 232;
			break;
		case joaat("specter2"):
			return 232;
			break;
		case joaat("nero"):
			return 233;
			break;
		case joaat("italigtb"):
			return 234;
			break;
		case joaat("fcr"):
			return 235;
			break;
		case joaat("specter"):
			return 236;
			break;
		case joaat("diablous"):
			return 237;
			break;
		case joaat("infernus2"):
			return 238;
			break;
		case joaat("gp1"):
			return 239;
			break;
		case joaat("ruston"):
			return 240;
			break;
		case joaat("turismo2"):
			return 241;
			break;
		case joaat("cheetah2"):
			return 242;
			break;
		case joaat("torero"):
			return 243;
			break;
		case joaat("vagner"):
			return 244;
			break;
		case joaat("xa21"):
			return 245;
			break;
		case joaat("nightshark"):
			return 246;
			break;
		case joaat("ardent"):
			return 247;
			break;
		case joaat("tampa3"):
			return 248;
			break;
		case joaat("apc"):
			return 249;
			break;
		case joaat("dune3"):
			return 250;
			break;
		case joaat("halftrack"):
			return 251;
			break;
		case joaat("oppressor"):
			return 252;
			break;
		case joaat("trailersmall2"):
			return 253;
			break;
		case joaat("insurgent3"):
			return 254;
			break;
		case joaat("technical3"):
			return 255;
			break;
		case joaat("hauler2"):
			return 256;
			break;
		case joaat("phantom3"):
			return 257;
			break;
		case joaat("trailerlarge"):
			return 258;
			break;
		case joaat("lazer"):
			return 259;
			break;
		case joaat("microlight"):
			return 260;
			break;
		case joaat("mogul"):
			return 261;
			break;
		case joaat("rogue"):
			return 262;
			break;
		case joaat("starling"):
			return 263;
			break;
		case joaat("seabreeze"):
			return 264;
			break;
		case joaat("tula"):
			return 265;
			break;
		case joaat("pyro"):
			return 266;
			break;
		case joaat("molotok"):
			return 267;
			break;
		case joaat("nokota"):
			return 268;
			break;
		case joaat("bombushka"):
			return 269;
			break;
		case joaat("hunter"):
			return 270;
			break;
		case joaat("havok"):
			return 271;
			break;
		case joaat("howard"):
			return 272;
			break;
		case joaat("alphaz1"):
			return 273;
			break;
		case joaat("cyclone"):
			return 274;
			break;
		case joaat("visione"):
			return 275;
			break;
		case joaat("vigilante"):
			return 276;
			break;
		case joaat("retinue"):
			return 277;
			break;
		case joaat("rapidgt3"):
			return 278;
			break;
		case joaat("deluxo"):
			return 277;
			break;
		case joaat("stromberg"):
			return 278;
			break;
		case joaat("riot2"):
			return 279;
			break;
		case joaat("chernobog"):
			return 280;
			break;
		case joaat("khanjali"):
			return 281;
			break;
		case joaat("akula"):
			return 282;
			break;
		case joaat("thruster"):
			return 283;
			break;
		case joaat("avenger"):
			return 284;
			break;
		case joaat("barrage"):
			return 285;
			break;
		case joaat("volatol"):
			return 286;
			break;
		case joaat("comet4"):
			return 287;
			break;
		case joaat("neon"):
			return 288;
			break;
		case joaat("streiter"):
			return 289;
			break;
		case joaat("sentinel3"):
			return 290;
			break;
		case joaat("yosemite"):
			return 291;
			break;
		case joaat("hustler"):
			return 292;
			break;
		case joaat("riata"):
			return 293;
			break;
		case joaat("revolter"):
			return 294;
			break;
		case joaat("hermes"):
			return 295;
			break;
		case joaat("comet5"):
			return 296;
			break;
		case joaat("z190"):
			return 297;
			break;
		case joaat("viseris"):
			return 298;
			break;
		case joaat("kamacho"):
			return 299;
			break;
		case joaat("autarch"):
			return 300;
			break;
		case joaat("pariah"):
			return 301;
			break;
		case joaat("raiden"):
			return 302;
			break;
		case joaat("sc1"):
			return 303;
			break;
		case joaat("gt500"):
			return 304;
			break;
		case joaat("savestra"):
			return 305;
			break;
	}
	return -1;
}

int func_178(int iParam0)//Position - 0x12D309
{
	switch (iParam0)
	{
		case joaat("CMOD_TYR_10"):
		case joaat("CMOD_SMOKE_10"):
			return 0;
			break;
		case joaat("CMOD_TYR_11"):
		case joaat("CMOD_SMOKE_11"):
			return 1;
			break;
		case joaat("HORN_CLAS1"):
		case joaat("CMOD_SMOKE_4"):
			return 2;
			break;
		case joaat("HORN_CLAS2"):
		case joaat("CMOD_SMOKE_5"):
			return 3;
			break;
		case joaat("HORN_CLAS3"):
		case joaat("CMOD_SMOKE_6"):
			return 4;
			break;
		case joaat("HORN_CLAS4"):
		case joaat("CMOD_SMOKE_7"):
			return 5;
			break;
		case joaat("HORN_CLAS5"):
			return 6;
			break;
		case joaat("HORN_CLAS6"):
		case joaat("CMOD_SMOKE_3"):
			return 7;
			break;
		case joaat("HORN_CLAS7"):
		case joaat("CMOD_SMOKE_8"):
			return 8;
			break;
		case joaat("HORN_CNOTE_C0"):
			return 9;
			break;
		case joaat("HORN_CNOTE_D0"):
			return 10;
			break;
		case joaat("HORN_CNOTE_E0"):
			return 11;
			break;
		case joaat("HORN_CNOTE_F0"):
			return 12;
			break;
		case joaat("HORN_CNOTE_G0"):
			return 13;
			break;
		case joaat("HORN_CNOTE_A0"):
			return 14;
			break;
		case joaat("HORN_CNOTE_B0"):
			return 15;
			break;
		case joaat("HORN_CNOTE_C1"):
			return 16;
			break;
		case joaat("CMOD_WIN_5"):
			return 17;
			break;
		case joaat("CMOD_TYR_12"):
		case joaat("CMOD_SMOKE_12"):
			return 18;
			break;
		case joaat("CMOD_TYR_13"):
		case joaat("CMOD_SMOKE_13"):
			return 19;
			break;
		case joaat("HORN_HIPS1"):
			return 20;
			break;
		case joaat("HORN_HIPS2"):
			return 22;
			break;
		case joaat("HORN_HIPS3"):
			return 22;
			break;
		case joaat("HORN_HIPS4"):
			return 23;
			break;
		case joaat("HORN_INDI_1"):
			return 24;
			break;
		case joaat("HORN_INDI_2"):
			return 25;
			break;
		case joaat("HORN_INDI_3"):
			return 26;
			break;
		case joaat("HORN_INDI_4"):
			return 27;
			break;
		case joaat("CMOD_TYR_PAT"):
			return 28;
			break;
		case joaat("HORN_LUXE1"):
			return 29;
			break;
		case joaat("HORN_LUXE2"):
			return 30;
			break;
		case joaat("HORN_LUXE3"):
			return 31;
			break;
		case joaat("HORN_LOWRDER1"):
			return 32;
			break;
		case joaat("HORN_LOWRDER2"):
			return 33;
			break;
		case joaat("HORN_HWEEN1"):
			return 34;
			break;
		case joaat("HORN_HWEEN2"):
			return 35;
			break;
		case joaat("HORN_XM15_1"):
			return 36;
			break;
		case joaat("HORN_XM15_2"):
			return 37;
			break;
		case joaat("HORN_XM15_3"):
			return 38;
			break;
	}
	return -1;
}

int func_179(int iParam0)//Position - 0x12D56F
{
	switch (iParam0)
	{
		case joaat("club"):
		case joaat("gauntlet5"):
		case joaat("weevil"):
		case joaat("zr350"):
		case joaat("remus"):
		case joaat("dominator7"):
		case joaat("tailgater2"):
		case joaat("previon"):
		case joaat("rt3000"):
			return 1;
		default:
	}
	return 0;
}

int func_180(var uParam0)//Position - 0x12D9CF
{
	int iVar0;
	int iVar1;
	iVar0 = uParam0;
	iVar1 = __LIB_0__::func_159(iVar0);
	if ((__LIB_0__::func_3() == 0 || __LIB_0__::func_63() == 0) || (__LIB_0__::func_3() == 999 && __LIB_0__::func_63() == 999))
	{
		switch (iVar1)
		{
			case 0:
				return 730;
				break;
			case 1:
				return 731;
				break;
			case 2:
				return 732;
				break;
			case 3:
				return 733;
				break;
			case 4:
				return 734;
				break;
			case 5:
				return 735;
				break;
			case 6:
				return 736;
				break;
		}
	}
	return 13122;
}

int func_181(int iParam0, int iParam1)//Position - 0x12DCB1
{
	if (iParam0 == 45)
	{
		if (iParam1 == 16)
		{
			return 1;
		}
	}
	return 0;
}

int func_182(int iParam0, int iParam1)//Position - 0x12DCCC
{
	if (iParam0 == 45)
	{
		if (iParam1 == 14)
		{
			return 1;
		}
	}
	return 0;
}

int func_183(int iParam0, int iParam1)//Position - 0x12DCE7
{
	if (iParam0 == 45)
	{
		if (iParam1 == 11)
		{
			return 1;
		}
	}
	return 0;
}

int func_184(int iParam0, int iParam1)//Position - 0x12DD02
{
	if (iParam0 == 45)
	{
		if (iParam1 == 19)
		{
			return 1;
		}
	}
	return 0;
}

int func_185(int iParam0)//Position - 0x12DD1D
{
	switch (iParam0)
	{
		case joaat("gb200"):
		case joaat("issi3"):
		case joaat("fagaloa"):
		case joaat("ellie"):
		case joaat("michelli"):
		case joaat("flashgt"):
		case joaat("hotring"):
		case joaat("tezeract"):
		case joaat("tyrant"):
		case joaat("dominator3"):
		case joaat("taipan"):
		case joaat("entity2"):
		case joaat("jester3"):
		case joaat("cheburek"):
		case joaat("caracara"):
		case joaat("seasparrow"):
		case joaat("mule4"):
		case joaat("speedo4"):
		case joaat("pounder2"):
		case joaat("swinger"):
		case joaat("patriot2"):
		case joaat("oppressor2"):
		case joaat("menacer"):
		case joaat("freecrawler"):
		case joaat("stafford"):
		case joaat("scramjet"):
		case joaat("terbyte"):
		case joaat("strikeforce"):
		case joaat("clique"):
		case joaat("deveste"):
		case joaat("deviant"):
		case joaat("impaler"):
		case joaat("scarab"):
		case joaat("schlagen"):
		case joaat("toros"):
		case joaat("vamos"):
		case joaat("tulip"):
		case joaat("monster3"):
		case joaat("impaler2"):
		case joaat("bruiser"):
		case joaat("cerberus"):
		case joaat("dominator4"):
		case joaat("imperator"):
		case joaat("issi4"):
		case joaat("italigto"):
		case joaat("deathbike"):
		case joaat("slamvan4"):
		case joaat("brutus"):
		case joaat("imperator2"):
		case joaat("imperator3"):
		case joaat("deathbike2"):
		case joaat("deathbike3"):
		case joaat("impaler3"):
		case joaat("brutus2"):
		case joaat("bruiser2"):
		case joaat("slamvan5"):
		case joaat("issi5"):
		case joaat("monster4"):
		case joaat("scarab2"):
		case joaat("cerberus2"):
		case joaat("dominator5"):
		case joaat("zr3802"):
		case joaat("impaler4"):
		case joaat("brutus3"):
		case joaat("bruiser3"):
		case joaat("slamvan6"):
		case joaat("issi6"):
		case joaat("monster5"):
		case joaat("scarab3"):
		case joaat("cerberus3"):
		case joaat("dominator6"):
		case joaat("zr3803"):
		case joaat("zr380"):
		case joaat("rcbandito"):
		case joaat("caracara2"):
		case joaat("drafter"):
		case joaat("dynasty"):
		case joaat("gauntlet3"):
		case joaat("gauntlet4"):
		case joaat("hellion"):
		case joaat("issi7"):
		case joaat("krieger"):
		case joaat("locust"):
		case joaat("nebula"):
		case joaat("neo"):
		case joaat("novak"):
		case joaat("s80"):
		case joaat("thrax"):
		case joaat("zion3"):
		case joaat("zorrusso"):
		case joaat("emerus"):
		case joaat("peyote2"):
		case joaat("rrocket"):
		case joaat("jugular"):
		case joaat("paragon"):
		case joaat("paragon2"):
		case joaat("asbo"):
		case joaat("kanjo"):
		case joaat("formula"):
		case joaat("imorgon"):
		case joaat("komoda"):
		case joaat("manana2"):
		case joaat("gauntlet5"):
		case joaat("yosemite3"):
		case joaat("peyote3"):
		case joaat("club"):
		case joaat("glendale2"):
		case joaat("penumbra2"):
		case joaat("landstalker2"):
		case joaat("seminole2"):
		case joaat("tigon"):
		case joaat("openwheel1"):
		case joaat("openwheel2"):
		case joaat("coquette4"):
		case joaat("dukes3"):
		case joaat("rebla"):
		case joaat("sugoi"):
		case joaat("youga3"):
		case joaat("zhaba"):
		case joaat("vstr"):
		case joaat("everon"):
		case joaat("sultan2"):
		case joaat("jb7002"):
		case joaat("outlaw"):
		case joaat("stryder"):
		case joaat("firetruk"):
		case joaat("burrito2"):
		case joaat("boxville"):
		case joaat("stockade"):
		case joaat("lguard"):
		case joaat("blazer2"):
		case joaat("vagrant"):
		case joaat("formula2"):
		case joaat("furia"):
		case joaat("yosemite2"):
		case joaat("retinue2"):
		case joaat("minitank"):
		case joaat("manchez2"):
		case joaat("brioso2"):
		case joaat("winky"):
		case joaat("verus"):
		case joaat("alkonost"):
		case joaat("avisa"):
		case joaat("longfin"):
		case joaat("patrolboat"):
		case joaat("seasparrow2"):
		case joaat("seasparrow3"):
		case joaat("slamtruck"):
		case joaat("vetir"):
		case joaat("kosatka"):
		case joaat("italirsx"):
		case joaat("toreador"):
		case joaat("weevil"):
		case joaat("dinghy5"):
		case joaat("annihilator2"):
		case joaat("squaddie"):
		case joaat("veto"):
		case joaat("veto2"):
		case joaat("calico"):
		case joaat("comet6"):
		case joaat("cypher"):
		case joaat("dominator7"):
		case joaat("jester4"):
		case joaat("remus"):
		case joaat("vectre"):
		case joaat("zr350"):
		case joaat("warrener2"):
		case joaat("rt3000"):
		case joaat("futo2"):
		case joaat("tailgater2"):
		case joaat("sultan3"):
		case joaat("dominator8"):
		case joaat("euros"):
		case joaat("growler"):
		case joaat("previon"):
		case joaat("astron"):
		case joaat("baller7"):
		case joaat("buffalo4"):
		case joaat("comet7"):
		case joaat("deity"):
		case joaat("granger2"):
		case joaat("ignus"):
		case joaat("jubilee"):
		case joaat("patriot3"):
		case joaat("champion"):
		case joaat("youga4"):
		case joaat("zeno"):
		case joaat("cinquemila"):
		case joaat("reever"):
		case joaat("shinobi"):
		case joaat("iwagen"):
			return 1;
			break;
	}
	switch (iParam0)
	{
		case joaat("brioso3"):
		case joaat("corsita"):
		case joaat("draugur"):
		case joaat("greenwood"):
		case joaat("kanjosj"):
		case joaat("lm87"):
		case joaat("postlude"):
		case joaat("rhinehart"):
		case joaat("sm722"):
		case joaat("tenf"):
		case joaat("tenf2"):
		case joaat("torero2"):
		case joaat("vigero2"):
		case joaat("weevil2"):
		case joaat("ruiner4"):
		case joaat("sentinel4"):
		case joaat("omnisegt"):
			return 1;
			break;
	}
	return 0;
}

int func_186(int iParam0)//Position - 0x12E748
{
	switch (iParam0)
	{
		case joaat("calico"):
		case joaat("comet6"):
		case joaat("cypher"):
		case joaat("dominator7"):
		case joaat("jester4"):
		case joaat("remus"):
		case joaat("vectre"):
		case joaat("zr350"):
		case joaat("warrener2"):
		case joaat("rt3000"):
		case joaat("futo2"):
		case joaat("tailgater2"):
		case joaat("sultan3"):
		case joaat("dominator8"):
		case joaat("euros"):
		case joaat("growler"):
		case joaat("previon"):
			return 1;
			break;
	}
	return 0;
}

int func_187(int iParam0)//Position - 0x12E910
{
	switch (iParam0)
	{
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
			return 5;
		case 7:
			return 6;
		case 8:
			return 7;
		case 9:
			return 8;
		case 10:
			return 9;
		case 11:
			return 10;
		case 12:
			return 10;
		case 13:
			return 11;
		case 14:
			return 12;
		case 15:
			return 13;
		case 16:
			return 14;
		case 17:
			return 15;
		case 18:
			return 15;
		case 19:
			return 16;
		case 20:
			return 17;
		case 21:
			return 18;
		case 22:
			return 19;
		case 23:
			return 20;
		case 24:
			return 20;
		case 25:
			return 21;
		case 26:
			return 22;
		case 27:
			return 23;
		case 28:
			return 24;
		case 29:
			return 25;
		case 30:
			return 25;
		case 31:
			return 26;
		case 32:
			return 27;
		case 33:
			return 28;
		case 34:
			return 29;
		case 35:
			return 30;
		case 36:
			return 30;
		case 37:
			return 31;
		case 38:
			return 32;
		case 39:
			return 33;
		case 40:
			return 34;
		case 41:
			return 35;
		case 42:
			return 36;
		case 43:
			return 37;
		case 44:
			return 38;
		case 45:
			return 39;
		case 46:
			return 40;
		case 47:
			return 41;
		case 48:
			return 42;
		case 49:
			return 43;
		case 50:
			return 44;
		case 51:
			return 45;
		case 52:
			return 46;
		case 53:
			return 47;
		case 54:
			return 48;
		case 55:
			return 49;
		case 56:
			return 50;
		case 57:
			return 50;
		case 58:
			return 51;
		case 59:
			return 52;
		case 60:
			return 53;
		case 61:
			return 54;
		case 62:
			return 55;
		case 63:
			return 55;
		case 64:
			return 56;
		case 65:
			return 57;
		case 66:
			return 58;
		case 67:
			return 59;
		case 68:
			return 60;
		case 69:
			return 60;
		case 70:
			return 61;
		case 71:
			return 62;
		case 72:
			return 63;
		case 73:
			return 64;
		case 74:
			return 65;
		case 75:
			return 65;
		case 76:
			return 66;
		case 77:
			return 67;
		case 78:
			return 68;
		case 79:
			return 69;
		case 80:
			return 70;
		case 81:
			return 70;
		case 82:
			return 71;
		case 83:
			return 72;
		case 84:
			return 73;
		case 85:
			return 74;
		case 86:
			return 75;
		case 87:
			return 75;
		case 88:
			return 76;
		case 89:
			return 77;
		case 90:
			return 78;
		case 91:
			return 79;
		case 92:
			return 80;
		case 93:
			return 80;
		case 94:
			return 81;
		case 95:
			return 82;
		case 96:
			return 83;
		case 97:
			return 84;
		case 98:
			return 85;
		case 99:
			return 85;
		case 100:
			return 86;
		case 101:
			return 87;
		case 102:
			return 88;
		case 103:
			return 89;
		case 104:
			return 90;
		case 105:
			return 91;
		case 106:
			return 92;
		case 107:
			return 93;
		case 108:
			return 94;
		case 109:
			return 95;
		case 110:
			return 96;
		case 111:
			return 97;
		case 112:
			return 98;
		case 113:
			return 99;
		case 114:
			return 100;
		default:
	}
	switch (iParam0)
	{
		case 115:
			return 101;
		case 116:
			return 102;
		case 117:
			return 103;
		case 118:
			return 104;
		case 119:
			return 105;
		case 120:
			return 106;
		case 121:
			return 107;
		case 122:
			return 108;
		case 123:
			return 109;
		case 124:
			return 110;
		case 125:
			return 111;
		case 126:
			return 112;
		case 127:
			return 113;
		case 128:
			return 114;
		case 129:
			return 115;
		case 130:
			return 116;
		case 131:
			return 117;
		case 132:
			return 118;
		case 133:
			return 119;
		case 134:
			return 120;
		case 135:
			return 121;
		case 136:
			return 122;
		case 137:
			return 123;
		case 138:
			return 124;
		case 139:
			return 125;
		case 140:
			return 126;
		case 141:
			return 127;
		case 142:
			return 128;
		case 143:
			return 129;
		case 144:
			return 130;
		case 145:
			return 131;
		case 146:
			return 132;
		case 147:
			return 133;
		case 148:
			return 134;
		case 149:
			return 135;
		case 150:
			return 136;
		case 151:
			return 137;
		case 152:
			return 138;
		case 153:
			return 139;
		case 154:
			return 140;
		case 155:
			return 141;
		case 156:
			return 142;
		case 157:
			return 143;
		case 158:
			return 144;
		case 159:
			return 145;
		case 160:
			return 146;
		case 161:
			return 147;
		case 162:
			return 148;
		case 163:
			return 149;
		case 164:
			return 150;
		case 165:
			return 151;
		case 166:
			return 152;
		case 167:
			return 153;
		case 168:
			return 154;
		case 169:
			return 155;
		case 170:
			return 156;
		case 171:
			return 157;
		case 172:
			return 158;
		case 173:
			return 159;
		case 174:
			return 160;
		case 175:
			return 161;
		case 176:
			return 162;
		case 177:
			return 163;
		case 178:
			return 164;
		case 179:
			return 165;
		case 180:
			return 166;
		case 181:
			return 167;
		case 182:
			return 168;
		case 183:
			return 169;
		case 184:
			return 170;
		case 185:
			return 171;
		case 186:
			return 172;
		case 187:
			return 173;
		case 188:
			return 174;
		case 189:
			return 175;
		case 190:
			return 176;
		case 191:
			return 177;
		case 192:
			return 178;
		case 193:
			return 179;
		case 194:
			return 180;
		case 195:
			return 181;
		case 196:
			return 182;
		case 197:
			return 183;
		case 198:
			return 184;
		case 199:
			return 185;
		case 200:
			return 186;
		case 201:
			return 187;
		case 202:
			return 188;
		case 203:
			return 189;
		case 204:
			return 190;
		case 205:
			return 191;
		case 206:
			return 192;
		case 207:
			return 193;
		case 208:
			return 194;
		case 209:
			return 195;
		case 210:
			return 196;
		case 211:
			return 197;
		case 212:
			return 198;
		case 213:
			return 199;
		case 214:
			return 200;
		default:
	}
	switch (iParam0)
	{
		case 215:
			return 201;
		case 216:
			return 202;
		case 217:
			return 203;
		case 218:
			return 204;
		case 219:
			return 205;
		case 220:
			return 206;
		case 221:
			return 207;
		case 222:
			return 208;
		case 223:
			return 209;
		case 224:
			return 210;
		case 225:
			return 211;
		case 226:
			return 212;
		case 227:
			return 213;
		case 228:
			return 214;
		case 229:
			return 215;
		case 230:
			return 216;
		case 231:
			return 217;
		case 232:
			return 218;
		case 233:
			return 219;
		case 234:
			return 220;
		case 235:
			return 221;
		case 236:
			return 222;
		case 237:
			return 223;
		case 238:
			return 224;
		case 239:
			return 225;
		case 240:
			return 226;
		case 241:
			return 227;
		case 242:
			return 228;
		case 243:
			return 229;
		case 244:
			return 230;
		case 245:
			return 231;
		case 246:
			return 232;
		case 247:
			return 233;
		case 248:
			return 234;
		case 249:
			return 235;
		case 250:
			return 236;
		case 251:
			return 237;
		case 252:
			return 238;
		case 253:
			return 239;
		case 254:
			return 240;
		case 255:
			return 241;
		case 256:
			return 242;
		case 257:
			return 243;
		case 258:
			return 244;
		case 259:
			return 245;
		case 260:
			return 246;
		case 261:
			return 247;
		case 262:
			return 248;
		case 263:
			return 249;
		case 264:
			return 250;
		case 265:
			return 255;
		case 266:
			return 260;
		case 267:
			return 265;
		case 268:
			return 270;
		case 269:
			return 275;
		case 270:
			return 280;
		case 271:
			return 285;
		case 272:
			return 290;
		case 273:
			return 295;
		case 274:
			return 300;
		default:
	}
	switch (iParam0)
	{
		case 275:
			return 305;
		case 276:
			return 310;
		case 277:
			return 315;
		case 278:
			return 320;
		case 279:
			return 325;
		case 280:
			return 330;
		case 281:
			return 335;
		case 282:
			return 340;
		case 283:
			return 345;
		case 284:
			return 350;
		case 285:
			return 355;
		case 286:
			return 360;
		case 287:
			return 365;
		case 288:
			return 370;
		case 289:
			return 375;
		case 290:
			return 380;
		case 291:
			return 385;
		case 292:
			return 390;
		case 293:
			return 395;
		case 294:
			return 400;
		case 295:
			return 405;
		case 296:
			return 410;
		case 297:
			return 415;
		case 298:
			return 420;
		case 299:
			return 425;
		case 300:
			return 430;
		case 301:
			return 435;
		case 302:
			return 440;
		case 303:
			return 445;
		case 304:
			return 450;
		case 305:
			return 455;
		case 306:
			return 460;
		case 307:
			return 465;
		case 308:
			return 470;
		case 309:
			return 475;
		case 310:
			return 480;
		case 311:
			return 485;
		case 312:
			return 490;
		case 313:
			return 495;
		case 314:
			return 500;
		default:
	}
	switch (iParam0)
	{
		case 315:
			return 505;
		case 316:
			return 510;
		case 317:
			return 515;
		case 318:
			return 520;
		case 319:
			return 525;
		case 320:
			return 530;
		case 321:
			return 535;
		case 322:
			return 540;
		case 323:
			return 545;
		case 324:
			return 550;
		case 325:
			return 555;
		case 326:
			return 560;
		case 327:
			return 565;
		case 328:
			return 570;
		case 329:
			return 575;
		case 330:
			return 580;
		case 331:
			return 585;
		case 332:
			return 590;
		case 333:
			return 595;
		case 334:
			return 600;
		case 335:
			return 605;
		case 336:
			return 610;
		case 337:
			return 615;
		case 338:
			return 620;
		case 339:
			return 625;
		case 340:
			return 630;
		case 341:
			return 635;
		case 342:
			return 640;
		case 343:
			return 645;
		case 344:
			return 650;
		case 345:
			return 655;
		case 346:
			return 660;
		case 347:
			return 665;
		case 348:
			return 670;
		case 349:
			return 675;
		case 350:
			return 680;
		case 351:
			return 685;
		case 352:
			return 690;
		case 353:
			return 695;
		case 354:
			return 700;
		case 355:
			return 705;
		case 356:
			return 710;
		case 357:
			return 715;
		case 358:
			return 720;
		case 359:
			return 725;
		case 360:
			return 730;
		case 361:
			return 735;
		case 362:
			return 740;
		case 363:
			return 745;
		case 364:
			return 750;
		case 365:
			return 755;
		case 366:
			return 760;
		case 367:
			return 765;
		case 368:
			return 770;
		case 369:
			return 775;
		case 370:
			return 780;
		case 371:
			return 785;
		case 372:
			return 790;
		case 373:
			return 795;
		case 374:
			return 800;
		case 375:
			return 805;
		case 376:
			return 810;
		case 377:
			return 815;
		case 378:
			return 820;
		case 379:
			return 825;
		case 380:
			return 830;
		case 381:
			return 835;
		case 382:
			return 840;
		case 383:
			return 845;
		case 384:
			return 850;
		case 385:
			return 855;
		case 386:
			return 860;
		case 387:
			return 865;
		case 388:
			return 870;
		case 389:
			return 875;
		case 390:
			return 880;
		case 391:
			return 885;
		case 392:
			return 890;
		case 393:
			return 895;
		case 394:
			return 900;
		case 395:
			return 905;
		case 396:
			return 910;
		case 397:
			return 915;
		case 398:
			return 920;
		case 399:
			return 925;
		case 400:
			return 930;
		case 401:
			return 935;
		case 402:
			return 940;
		case 403:
			return 945;
		case 404:
			return 950;
		case 405:
			return 955;
		case 406:
			return 960;
		case 407:
			return 965;
		case 408:
			return 970;
		case 409:
			return 975;
		case 410:
			return 980;
		case 411:
			return 985;
		case 412:
			return 990;
		case 413:
			return 995;
		case 414:
			return 1000;
		case 415:
			return 1000;
		default:
	}
	return -1;
}

int func_188(int iParam0, int iParam1)//Position - 0x12FB9F
{
	switch (iParam0)
	{
		case joaat("tailgater2"):
			switch (iParam1)
			{
				case 11:
					return 89;
				case 12:
					return 131;
				case 13:
					return 156;
				case 14:
					return 181;
				case 15:
					return 206;
				default:
			}
			break;
		case joaat("euros"):
			switch (iParam1)
			{
				case 11:
					return 14;
				case 12:
					return 95;
				case 13:
					return 133;
				case 14:
					return 158;
				case 15:
					return 183;
				default:
			}
			break;
		case joaat("rt3000"):
			switch (iParam1)
			{
				case 11:
					return 32;
				case 12:
					return 106;
				case 13:
					return 138;
				case 14:
					return 163;
				case 15:
					return 188;
				default:
			}
			break;
		case joaat("zr350"):
			switch (iParam1)
			{
				case 11:
					return 48;
				case 12:
					return 116;
				case 13:
					return 143;
				case 14:
					return 168;
				case 15:
					return 193;
				default:
			}
			break;
		case joaat("warrener2"):
			switch (iParam1)
			{
				case 11:
					return 53;
				case 12:
					return 121;
				case 13:
					return 146;
				case 14:
					return 171;
				case 15:
					return 196;
				default:
			}
			break;
		case joaat("calico"):
			switch (iParam1)
			{
				case 11:
					return 65;
				case 12:
					return 123;
				case 13:
					return 148;
				case 14:
					return 173;
				case 15:
					return 198;
				default:
			}
			break;
		case joaat("remus"):
			switch (iParam1)
			{
				case 11:
					return 71;
				case 12:
					return 126;
				case 13:
					return 151;
				case 14:
					return 176;
				case 15:
					return 201;
				default:
			}
			break;
		case joaat("jester4"):
			switch (iParam1)
			{
				case 11:
					return 38;
				case 12:
					return 111;
				case 13:
					return 141;
				case 14:
					return 166;
				case 15:
					return 191;
				default:
			}
			break;
		case joaat("futo2"):
			switch (iParam1)
			{
				case 11:
					return 20;
				case 12:
					return 101;
				case 13:
					return 136;
				case 14:
					return 161;
				case 15:
					return 186;
				default:
			}
			break;
		case joaat("dominator8"):
			switch (iParam1)
			{
				case 11:
					return 83;
				case 12:
					return 128;
				case 13:
					return 153;
				case 14:
					return 178;
				case 15:
					return 203;
				default:
			}
			break;
	}
	return 0;
}

int func_189(int iParam0)//Position - 0x12FEEE
{
	switch (iParam0)
	{
		case 21:
			return 2;
			break;
		case 22:
			return 4;
			break;
		case 23:
			return 6;
			break;
		case 24:
			return 8;
			break;
		case 25:
			return 10;
			break;
		case 26:
			return 12;
			break;
		case 27:
			return 14;
			break;
		case 28:
			return 16;
			break;
		case 29:
			return 18;
			break;
		case 30:
			return 20;
			break;
	}
	return -1;
}

int func_190(int iParam0)//Position - 0x13002A
{
	switch (iParam0)
	{
		case 1:
			return 0;
			break;
		case 2:
			return 12;
			break;
		case 3:
			return 26;
			break;
		case 4:
			return 40;
			break;
		case 5:
			return 0;
			break;
		case 6:
			return 18;
			break;
		case 7:
			return 36;
			break;
		case 8:
			return 46;
			break;
		case 9:
			return 0;
			break;
		case 10:
			return 14;
			break;
		case 11:
			return 24;
			break;
		case 12:
			return 32;
			break;
		case 13:
			return 42;
			break;
		case 14:
			return 0;
			break;
		case 15:
			return 22;
			break;
		case 16:
			return 28;
			break;
		case 17:
			return 34;
			break;
		case 18:
			return 50;
			break;
		case 19:
			return 0;
			break;
		case 20:
			return 16;
			break;
		case 21:
			return 44;
			break;
		case 22:
			return 0;
			break;
		case 23:
			return 20;
			break;
		case 24:
			return 38;
			break;
		case 25:
			return 48;
			break;
		case 26:
			return 0;
			break;
		case 27:
			return 30;
			break;
		case 28:
			return 0;
			break;
		case 29:
			return 10;
			break;
		case 30:
			return 25;
			break;
		case 31:
			return 0;
			break;
		case 32:
			return 0;
			break;
		case 33:
			return 0;
			break;
		case 34:
			return 1;
			break;
		case 35:
			return 1;
			break;
		case 36:
			return 1;
			break;
		case 37:
			return 7;
			break;
		case 38:
			return 9;
			break;
		case 39:
			return 11;
			break;
		case 40:
			return 13;
			break;
		case 41:
			return 15;
			break;
		case 42:
			return 17;
			break;
		case 43:
			return 19;
			break;
		case 44:
			return 21;
			break;
		case 45:
			return 23;
			break;
		case 46:
			return 25;
			break;
		case 47:
			return 7;
			break;
		case 48:
			return 9;
			break;
		case 49:
			return 13;
			break;
		case 50:
			return 17;
			break;
		case 51:
			return 21;
			break;
		case 52:
			return 25;
			break;
		case 53:
			return 5;
			break;
		case 54:
			return 10;
			break;
		case 55:
			return 25;
			break;
		case 56:
			return 50;
			break;
		case 57:
			return 5;
			break;
		case 58:
			return 10;
			break;
		case 59:
			return 25;
			break;
		case 60:
			return 5;
			break;
		case 61:
			return 10;
			break;
		case 62:
			return 25;
			break;
		case 63:
			return 50;
			break;
		case 64:
			return 25;
			break;
		case 65:
			return 50;
			break;
		case 66:
			return 100;
			break;
		case 67:
			return 5;
			break;
		case 68:
			return 10;
			break;
		case 69:
			return 25;
			break;
		case 70:
			return 50;
			break;
	}
	return 0;
}

int func_191(int iParam0)//Position - 0x1303FA
{
	switch (iParam0)
	{
		case 1:
			return 7;
			break;
		case 2:
			return 7;
			break;
		case 3:
			return 7;
			break;
		case 4:
			return 7;
			break;
		case 5:
			return 7;
			break;
		case 6:
			return 7;
			break;
		case 7:
			return 7;
			break;
		case 8:
			return 7;
			break;
		case 9:
			return 7;
			break;
		case 10:
			return 7;
			break;
		case 11:
			return 7;
			break;
		case 12:
			return 7;
			break;
		case 13:
			return 7;
			break;
		case 14:
			return 7;
			break;
		case 15:
			return 7;
			break;
		case 16:
			return 7;
			break;
		case 17:
			return 7;
			break;
		case 18:
			return 7;
			break;
		case 19:
			return 7;
			break;
		case 20:
			return 7;
			break;
		case 21:
			return 7;
			break;
		case 22:
			return 7;
			break;
		case 23:
			return 7;
			break;
		case 24:
			return 7;
			break;
		case 25:
			return 7;
			break;
		case 26:
			return 7;
			break;
		case 27:
			return 7;
			break;
		case 28:
			return 7;
			break;
		case 29:
			return 7;
			break;
		case 30:
			return 7;
			break;
		case 31:
			return 7;
			break;
		case 32:
			return 7;
			break;
		case 33:
			return 7;
			break;
		case 34:
			return 9;
			break;
		case 35:
			return 10;
			break;
		case 36:
			return 7;
			break;
		case 37:
			return 7;
			break;
		case 38:
			return 7;
			break;
		case 39:
			return 7;
			break;
		case 40:
			return 7;
			break;
		case 41:
			return 7;
			break;
		case 42:
			return 7;
			break;
		case 43:
			return 7;
			break;
		case 44:
			return 7;
			break;
		case 45:
			return 7;
			break;
		case 46:
			return 7;
			break;
		case 47:
			return 7;
			break;
		case 48:
			return 7;
			break;
		case 49:
			return 7;
			break;
		case 50:
			return 7;
			break;
		case 51:
			return 7;
			break;
		case 52:
			return 7;
			break;
		case 53:
			return 8;
			break;
		case 54:
			return 8;
			break;
		case 55:
			return 8;
			break;
		case 56:
			return 8;
			break;
		case 57:
			return 5;
			break;
		case 58:
			return 5;
			break;
		case 59:
			return 5;
			break;
		case 60:
			return 6;
			break;
		case 61:
			return 6;
			break;
		case 62:
			return 6;
			break;
		case 63:
			return 6;
			break;
		case 64:
			return 3;
			break;
		case 65:
			return 3;
			break;
		case 66:
			return 3;
			break;
		case 67:
			return 4;
			break;
		case 68:
			return 4;
			break;
		case 69:
			return 4;
			break;
		case 70:
			return 4;
			break;
	}
	return 7;
}

int func_192(int iParam0)//Position - 0x13079E
{
	int iVar0;
	iVar0 = 31;
	switch (iParam0)
	{
		case 0:
			iVar0 = 31;
			break;
		case 1:
			iVar0 = 31;
			break;
		case 2:
			iVar0 = 47;
			break;
		case 3:
			iVar0 = 47;
			break;
		case 4:
			iVar0 = 31;
			break;
		case 5:
			iVar0 = 68;
			break;
		case 6:
			iVar0 = 31;
			break;
		case 7:
			iVar0 = 31;
			break;
		case 8:
			iVar0 = 47;
			break;
		case 9:
			iVar0 = 31;
			break;
		case 10:
			iVar0 = 56;
			break;
		case 11:
			iVar0 = 48;
			break;
		case 12:
			iVar0 = 31;
			break;
		case 13:
			iVar0 = 63;
			break;
		case 14:
			iVar0 = 57;
			break;
		case 15:
			iVar0 = 31;
			break;
		case 16:
			iVar0 = 48;
			break;
		case 17:
			iVar0 = 69;
			break;
		case 18:
			iVar0 = 31;
			break;
		case 19:
			iVar0 = 48;
			break;
		case 20:
			iVar0 = 49;
			break;
		case 21:
			iVar0 = 31;
			break;
		case 22:
			iVar0 = 49;
			break;
		case 23:
			iVar0 = 49;
			break;
		case 24:
			iVar0 = 50;
			break;
		case 25:
			iVar0 = 31;
			break;
		case 26:
			iVar0 = 50;
			break;
		case 27:
			iVar0 = 50;
			break;
		case 28:
			iVar0 = 59;
			break;
		case 29:
			iVar0 = 31;
			break;
		case 30:
			iVar0 = 31;
			break;
		case 31:
			iVar0 = 51;
			break;
		case 32:
			iVar0 = 51;
			break;
		case 33:
			iVar0 = 54;
			break;
		case 34:
			iVar0 = 31;
			break;
		case 35:
			iVar0 = 31;
			break;
		case 36:
			iVar0 = 51;
			break;
		case 37:
			iVar0 = 52;
			break;
		case 38:
			iVar0 = 52;
			break;
		case 39:
			iVar0 = 31;
			break;
		case 40:
			iVar0 = 52;
			break;
	}
	return iVar0;
}

int func_193(int iParam0)//Position - 0x1309C8
{
	switch (iParam0)
	{
		case 13:
			return 25;
			break;
		case 14:
			return 50;
			break;
		case 15:
			return 80;
			break;
		case 16:
			return 80;
			break;
		case 38:
			return 20;
			break;
		case 39:
			return 40;
			break;
		case 40:
			return 70;
			break;
		case 41:
			return 70;
			break;
		case 47:
			return 15;
			break;
		case 48:
			return 30;
			break;
		case 49:
			return 60;
			break;
		case 50:
			return 90;
			break;
		case 61:
			return 100;
			break;
		case 33:
			return 100;
		case 29:
			return 10;
		case 30:
			return 30;
		case 31:
			return 50;
		case 32:
			return 80;
		case 66:
			return 0;
		case 67:
			return 23;
		case 68:
			return 33;
		case 69:
			return 41;
		case 70:
			return 53;
		case 71:
			return 67;
		case 46:
			return 20;
		case 21:
			return 0;
		case 22:
			return 26;
		case 23:
			return 50;
		case 24:
			return 75;
		case 99:
			return 7;
		case 44:
			return 31;
		case 77:
			return 9;
		case 78:
			return 30;
		case 79:
			return 52;
		case 80:
			return 61;
		case 100:
			return 72;
		case 17:
			return 6;
		case 18:
			return 21;
	}
	switch (iParam0)
	{
		case 19:
			return 45;
		case 20:
			return 64;
		case 101:
			return 73;
		case 102:
			return 73;
		case 1:
			return 0;
		case 2:
			return 15;
		case 3:
			return 34;
		case 4:
			return 54;
		case 103:
			return 62;
		case 5:
			return 10;
		case 6:
			return 11;
		case 7:
			return 12;
		case 8:
			return 13;
		case 9:
			return 14;
		case 10:
			return 16;
		case 11:
			return 18;
		case 12:
			return 19;
		case 90:
			return 25;
		case 91:
			return 19;
		case 92:
			return 33;
		case 93:
			return 59;
		case 94:
			return 70;
		case 43:
			return 8;
		case 45:
			return 49;
		case 34:
			return 0;
		case 35:
			return 0;
		case 36:
			return 0;
		case 37:
			return 0;
		case 62:
			return 8;
		case 63:
			return 39;
		case 64:
			return 58;
		case 65:
			return 68;
		case 95:
			return 22;
		case 96:
			return 43;
		case 97:
			return 61;
		case 98:
			return 89;
		case 85:
			return 8;
		case 86:
			return 27;
		case 87:
			return 37;
		case 88:
			return 57;
		case 104:
			return 66;
		case 25:
			return 9;
		default:
	}
	switch (iParam0)
	{
		case 26:
			return 29;
		case 27:
			return 47;
		case 28:
			return 69;
		case 72:
			return 0;
		case 73:
			return 11;
		case 74:
			return 31;
		case 75:
			return 51;
		case 76:
			return 63;
		case 81:
			return 17;
		case 82:
			return 36;
		case 83:
			return 56;
		case 84:
			return 71;
		case 105:
			return 74;
		case 89:
			return 50;
		case 60:
			return 15;
		case 59:
			return 25;
		case 56:
			return 55;
		case 57:
			return 65;
		case 55:
			return 0;
		case 58:
			return 43;
		case 51:
			return 21;
		default:
	}
	return 0;
}

int func_194(int iParam0)//Position - 0x130E59
{
	switch (iParam0)
	{
		case 4:
			return 1;
		case 2:
			return 1;
		case 1:
			return 1;
		case 9:
			return 2;
		case 10:
			return 2;
		case 11:
			return 2;
		case 12:
			return 3;
		case 5:
			return 3;
		case 3:
			return 3;
		case 6:
			return 4;
		case 7:
			return 4;
		case 8:
			return 4;
		case 40:
			return 5;
		case 38:
			return 5;
		case 37:
			return 5;
		case 46:
			return 6;
		case 45:
			return 6;
		case 47:
			return 6;
		case 48:
			return 7;
		case 41:
			return 7;
		case 39:
			return 7;
		case 42:
			return 8;
		case 43:
			return 8;
		case 44:
			return 8;
		case 16:
			return 9;
		case 14:
			return 9;
		case 13:
			return 9;
		case 21:
			return 10;
		case 22:
			return 10;
		case 23:
			return 10;
		case 24:
			return 11;
		case 17:
			return 11;
		case 15:
			return 11;
		case 18:
			return 12;
		case 19:
			return 12;
		case 20:
			return 12;
		case 27:
			return 13;
		case 26:
			return 13;
		case 25:
			return 13;
		case 32:
			return 14;
		case 34:
			return 14;
		case 35:
			return 14;
		case 36:
			return 15;
		case 28:
			return 15;
		case 33:
			return 15;
		case 29:
			return 16;
		case 30:
			return 16;
		case 31:
			return 16;
		case 52:
			return 17;
		case 50:
			return 17;
		case 49:
			return 17;
		case 57:
			return 18;
		case 58:
			return 18;
		case 59:
			return 18;
		case 60:
			return 19;
		case 53:
			return 19;
		case 51:
			return 19;
		case 54:
			return 20;
		case 55:
			return 20;
		case 56:
			return 20;
		case 85:
			return 21;
		case 86:
			return 21;
		case 87:
			return 21;
		case 88:
			return 22;
		case 89:
			return 22;
		case 90:
			return 22;
		case 91:
			return 23;
		case 92:
			return 23;
		case 93:
			return 23;
		case 94:
			return 24;
		case 95:
			return 24;
		case 96:
			return 24;
		case 97:
			return 25;
		case 98:
			return 25;
		case 99:
			return 25;
		case 100:
			return 26;
		case 101:
			return 26;
		case 102:
			return 26;
		case 103:
			return 27;
		case 104:
			return 27;
		case 105:
			return 27;
		case 106:
			return 28;
		case 107:
			return 28;
		case 108:
			return 28;
		case 64:
			return 29;
		case 62:
			return 29;
		case 61:
			return 29;
		case 69:
			return 30;
		case 70:
			return 30;
		case 71:
			return 30;
		case 72:
			return 31;
		case 65:
			return 31;
		case 63:
			return 31;
		case 66:
			return 32;
		case 67:
			return 32;
		case 68:
			return 32;
		case 109:
			return 33;
		case 110:
			return 33;
		case 111:
			return 33;
		case 112:
			return 34;
		case 113:
			return 34;
		case 114:
			return 34;
		case 115:
			return 35;
		case 116:
			return 35;
		case 117:
			return 35;
		case 118:
			return 36;
		case 119:
			return 36;
		case 120:
			return 36;
		case 121:
			return 37;
		case 122:
			return 37;
		case 123:
			return 37;
		case 124:
			return 38;
		case 125:
			return 38;
		case 126:
			return 38;
		case 127:
			return 39;
		case 128:
			return 39;
		case 129:
			return 39;
		case 131:
			return 40;
		case 130:
			return 40;
		case 132:
			return 40;
		case 76:
			return 41;
		case 74:
			return 41;
		case 73:
			return 41;
		case 81:
			return 42;
		case 82:
			return 42;
		case 83:
			return 42;
		case 84:
			return 43;
		case 77:
			return 43;
		case 75:
			return 43;
		case 78:
			return 44;
		case 79:
			return 44;
		case 80:
			return 44;
		default:
	}
	return -1;
}

int func_195(int iParam0)//Position - 0x131E8D
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		case 1:
			return 1;
			break;
		case 2:
			return 2;
			break;
		case 3:
			return 3;
			break;
		case 4:
			return 4;
			break;
		case 5:
			return 5;
			break;
		case 6:
			return 6;
			break;
		case 7:
			return 7;
			break;
		case 8:
			return 8;
			break;
		case 9:
			return 9;
			break;
		case 10:
			return 10;
			break;
		case 11:
			return 11;
			break;
		case 12:
			return 12;
			break;
		case 13:
			return 13;
			break;
		case 18:
			return 22;
			break;
	}
	return 0;
}

int func_196(int iParam0, int iParam1)//Position - 0x131F9C
{
	switch (iParam0)
	{
		case 7:
			switch (iParam1)
			{
				case 0:
					return joaat("adder");
				case 1:
					return joaat("bullet");
				case 2:
					return joaat("cheetah");
				case 3:
					return joaat("entityxf");
				case 4:
					return joaat("infernus");
				case 5:
					return joaat("vacca");
				case 6:
					return joaat("voltic");
				case 7:
					return joaat("banshee2");
				case 8:
					return joaat("fmj");
				case 9:
					return joaat("osiris");
				case 10:
					return joaat("pfister811");
				case 11:
					return joaat("prototipo");
				case 12:
					return joaat("reaper");
				case 13:
					return joaat("sultanrs");
				case 14:
					return joaat("t20");
				case 15:
					return joaat("turismor");
				case 16:
					return joaat("zentorno");
				case 17:
					return joaat("le7b");
				case 18:
					return joaat("tyrus");
				case 19:
					return joaat("sheava");
				default:
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 0:
					return joaat("ninef2");
				case 1:
					return joaat("banshee");
				case 2:
					return joaat("carbonizzare");
				case 3:
					return joaat("comet2");
				case 4:
					return joaat("coquette");
				case 5:
					return joaat("feltzer2");
				case 6:
					return joaat("fusilade");
				case 7:
					return joaat("rapidgt2");
				case 8:
					return joaat("sultan");
				case 9:
					return joaat("alpha");
				case 10:
					return joaat("bestiagts");
				case 11:
					return joaat("blista2");
				case 12:
					return joaat("blista3");
				case 13:
					return joaat("buffalo");
				case 14:
					return joaat("buffalo2");
				case 15:
					return joaat("buffalo3");
				case 16:
					return joaat("carbonizzare");
				case 17:
					return joaat("elegy2");
				case 18:
					return joaat("feltzer3");
				case 19:
					return joaat("furoregt");
				case 20:
					return joaat("futo");
				case 21:
					return joaat("jester");
				case 22:
					return joaat("jester2");
				case 23:
					return joaat("khamelion");
				case 24:
					return joaat("kuruma");
				case 25:
					return joaat("kuruma2");
				case 26:
					return joaat("massacro");
				case 27:
					return joaat("massacro2");
				case 28:
					return joaat("ninef");
				case 29:
					return joaat("penumbra");
				case 30:
					return joaat("rapidgt");
				case 31:
					return joaat("schwarzer");
				case 32:
					return joaat("seven70");
				case 33:
					return joaat("surano");
				case 34:
					return joaat("verlierer2");
				case 35:
					return joaat("tropos");
				case 36:
					return joaat("tampa2");
				case 37:
					return joaat("omnis");
				case 38:
					return joaat("lynx");
				default:
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return joaat("cogcabrio");
				case 1:
					return joaat("exemplar");
				case 2:
					return joaat("f620");
				case 3:
					return joaat("felon");
				case 4:
					return joaat("felon2");
				case 5:
					return joaat("jackal");
				case 6:
					return joaat("oracle");
				case 7:
					return joaat("oracle2");
				case 8:
					return joaat("sentinel");
				case 9:
					return joaat("sentinel2");
				case 10:
					return joaat("windsor");
				case 11:
					return joaat("windsor2");
				case 12:
					return joaat("zion");
				case 13:
					return joaat("zion2");
				default:
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					return joaat("buccaneer");
				case 1:
					return joaat("dominator");
				case 2:
					return joaat("gauntlet");
				case 3:
					return joaat("phoenix");
				case 4:
					return joaat("picador");
				case 5:
					return joaat("ruiner");
				case 6:
					return joaat("sabregt");
				case 7:
					return joaat("vigero");
				case 8:
					return joaat("blade");
				case 9:
					return joaat("buccaneer2");
				case 10:
					return joaat("chino");
				case 11:
					return joaat("chino2");
				case 12:
					return joaat("coquette3");
				case 13:
					return joaat("dominator2");
				case 14:
					return joaat("dukes");
				case 15:
					return joaat("dukes2");
				case 16:
					return joaat("faction");
				case 17:
					return joaat("faction2");
				case 18:
					return joaat("faction3");
				case 19:
					return joaat("gauntlet2");
				case 20:
					return joaat("hotknife");
				case 21:
					return joaat("lurcher");
				case 22:
					return joaat("moonbeam");
				case 23:
					return joaat("moonbeam2");
				case 24:
					return joaat("nightshade");
				case 25:
					return joaat("ratloader");
				case 26:
					return joaat("ratloader2");
				case 27:
					return joaat("sabregt2");
				case 28:
					return joaat("slamvan");
				case 29:
					return joaat("slamvan2");
				case 30:
					return joaat("slamvan3");
				case 31:
					return joaat("stalion");
				case 32:
					return joaat("stalion2");
				case 33:
					return joaat("tampa");
				case 34:
					return joaat("virgo");
				case 35:
					return joaat("virgo2");
				case 36:
					return joaat("virgo3");
				case 37:
					return joaat("voodoo");
				case 38:
					return joaat("voodoo2");
				default:
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 0:
					return joaat("jb700");
				case 1:
					return joaat("monroe");
				case 2:
					return joaat("stinger");
				case 3:
					return joaat("ztype");
				case 4:
					return joaat("btype");
				case 5:
					return joaat("btype2");
				case 6:
					return joaat("btype3");
				case 7:
					return joaat("casco");
				case 8:
					return joaat("coquette2");
				case 9:
					return joaat("mamba");
				case 10:
					return joaat("manana");
				case 11:
					return joaat("peyote");
				case 12:
					return joaat("pigalle");
				case 13:
					return joaat("stinger");
				case 14:
					return joaat("stingergt");
				case 15:
					return joaat("tornado");
				case 16:
					return joaat("tornado2");
				case 17:
					return joaat("tornado3");
				case 18:
					return joaat("tornado4");
				case 19:
					return joaat("tornado5");
				default:
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return joaat("asea");
				case 1:
					return joaat("asterope");
				case 2:
					return joaat("fugitive");
				case 3:
					return joaat("premier");
				case 4:
					return joaat("primo");
				case 5:
					return joaat("schafter2");
				case 6:
					return joaat("stanier");
				case 7:
					return joaat("superd");
				case 8:
					return joaat("surge");
				case 9:
					return joaat("tailgater");
				case 10:
					return joaat("washington");
				case 11:
					return joaat("cog55");
				case 12:
					return joaat("cognoscenti");
				case 13:
					return joaat("cognoscenti2");
				case 14:
					return joaat("emperor");
				case 15:
					return joaat("emperor2");
				case 16:
					return joaat("emperor3");
				case 17:
					return joaat("glendale");
				case 18:
					return joaat("asea2");
				case 19:
					return joaat("cog552");
				case 20:
					return joaat("ingot");
				case 21:
					return joaat("intruder");
				case 22:
					return joaat("limo2");
				case 23:
					return joaat("primo2");
				case 24:
					return joaat("regina");
				case 25:
					return joaat("romero");
				case 26:
					return joaat("schafter3");
				case 27:
					return joaat("schafter4");
				case 28:
					return joaat("schafter5");
				case 29:
					return joaat("schafter6");
				case 30:
					return joaat("stratum");
				case 31:
					return joaat("stretch");
				case 32:
					return joaat("warrener");
				default:
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return joaat("baller");
				case 1:
					return joaat("baller2");
				case 2:
					return joaat("bjxl");
				case 3:
					return joaat("cavalcade");
				case 4:
					return joaat("cavalcade2");
				case 5:
					return joaat("crusader");
				case 6:
					return joaat("dubsta");
				case 7:
					return joaat("granger");
				case 8:
					return joaat("gresley");
				case 9:
					return joaat("landstalker");
				case 10:
					return joaat("mesa");
				case 11:
					return joaat("pranger");
				case 12:
					return joaat("radi");
				case 13:
					return joaat("seminole");
				case 14:
					return joaat("serrano");
				case 15:
					return joaat("baller3");
				case 16:
					return joaat("baller4");
				case 17:
					return joaat("baller5");
				case 18:
					return joaat("baller6");
				case 19:
					return joaat("dubsta2");
				case 20:
					return joaat("fq2");
				case 21:
					return joaat("habanero");
				case 22:
					return joaat("huntley");
				case 23:
					return joaat("mesa2");
				case 24:
					return joaat("patriot");
				case 25:
					return joaat("rocoto");
				case 26:
					return joaat("xls");
				case 27:
					return joaat("xls2");
				case 28:
					return joaat("contender");
				default:
			}
			break;
		case 0:
			switch (iParam1)
			{
				case 0:
					return joaat("blista");
				case 1:
					return joaat("dilettante");
				case 2:
					return joaat("issi2");
				case 3:
					return joaat("prairie");
				case 4:
					return joaat("dilettante2");
				case 5:
					return joaat("panto");
				case 6:
					return joaat("rhapsody");
				case 7:
					return joaat("brioso");
				default:
			}
			break;
		case 9:
			switch (iParam1)
			{
				case 0:
					return joaat("bfinjection");
				case 1:
					return joaat("baller");
				case 2:
					return joaat("blazer");
				case 3:
					return joaat("dloader");
				case 4:
					return joaat("dune");
				case 5:
					return joaat("patriot");
				case 6:
					return joaat("sanchez");
				case 7:
					return joaat("sandking");
				case 8:
					return joaat("paradise");
				case 9:
					return joaat("sanchez2");
				case 10:
					return joaat("guardian");
				case 11:
					return joaat("bifta");
				case 12:
					return joaat("blazer2");
				case 13:
					return joaat("blazer3");
				case 14:
					return joaat("bodhi2");
				case 15:
					return joaat("brawler");
				case 16:
					return joaat("dubsta3");
				case 17:
					return joaat("insurgent2");
				case 18:
					return joaat("kalahari");
				case 19:
					return joaat("marshall");
				case 20:
					return joaat("mesa3");
				case 21:
					return joaat("monster");
				case 22:
					return joaat("rancherxl");
				case 23:
					return joaat("rancherxl2");
				case 24:
					return joaat("rebel");
				case 25:
					return joaat("rebel2");
				case 26:
					return joaat("sandking2");
				case 28:
					return joaat("trophytruck");
				case 29:
					return joaat("trophytruck2");
				case 30:
					return joaat("bf400");
				default:
			}
			break;
		case 10:
			switch (iParam1)
			{
				case 0:
					return joaat("bulldozer");
				case 1:
					return joaat("cutter");
				case 2:
					return joaat("dump");
				case 3:
					return joaat("handler");
				case 4:
					return joaat("mixer");
				case 5:
					return joaat("flatbed");
				case 6:
					return joaat("guardian");
				case 7:
					return joaat("mixer2");
				case 8:
					return joaat("rubble");
				case 9:
					return joaat("tiptruck");
				case 10:
					return joaat("tiptruck2");
				default:
			}
			break;
		case 11:
			switch (iParam1)
			{
				case 0:
					return joaat("airtug");
				case 1:
					return joaat("caddy");
				case 2:
					return joaat("faggio2");
				case 3:
					return joaat("tractor2");
				case 4:
					return joaat("forklift");
				case 5:
					return joaat("mower");
				case 6:
					return joaat("ripley");
				case 7:
					return joaat("armytanker");
				case 8:
					return joaat("sadler");
				case 9:
					return joaat("sadler2");
				case 10:
					return joaat("scrap");
				case 11:
					return joaat("towtruck");
				case 12:
					return joaat("towtruck2");
				default:
			}
			break;
		case 12:
			switch (iParam1)
			{
				case 0:
					return joaat("boxville");
				case 1:
					return joaat("burrito2");
				case 2:
					return joaat("camper");
				case 3:
					return joaat("speedo2");
				case 4:
					return joaat("journey");
				case 5:
					return joaat("pony");
				case 6:
					return joaat("rumpo");
				case 7:
					return joaat("surfer");
				case 8:
					return joaat("taco");
				case 9:
					return joaat("youga");
				case 10:
					return joaat("bison");
				case 11:
					return joaat("bison2");
				case 12:
					return joaat("bison3");
				case 13:
					return joaat("bobcatxl");
				case 14:
					return joaat("boxville2");
				case 15:
					return joaat("boxville3");
				case 16:
					return joaat("boxville4");
				case 17:
					return joaat("burrito");
				case 18:
					return joaat("burrito3");
				case 19:
					return joaat("burrito4");
				case 20:
					return joaat("burrito5");
				case 21:
					return joaat("gburrito");
				case 22:
					return joaat("gburrito2");
				case 23:
					return joaat("minivan");
				case 24:
					return joaat("minivan2");
				case 25:
					return joaat("paradise");
				case 26:
					return joaat("pony2");
				case 27:
					return joaat("rumpo2");
				case 28:
					return joaat("rumpo3");
				case 29:
					return joaat("speedo");
				case 30:
					return joaat("surfer2");
				default:
			}
			break;
		case 8:
			switch (iParam1)
			{
				case 0:
					return joaat("akuma");
				case 1:
					return joaat("bagger");
				case 2:
					return joaat("bati");
				case 3:
					return joaat("bati2");
				case 4:
					return joaat("blazer");
				case 5:
					return joaat("daemon");
				case 6:
					return joaat("double");
				case 7:
					return joaat("nemesis");
				case 8:
					return joaat("pcj");
				case 9:
					return joaat("ruffian");
				case 10:
					return joaat("sanchez");
				case 11:
					return joaat("sanchez2");
				case 12:
					return joaat("vader");
				case 13:
					return joaat("carbonrs");
				case 14:
					return joaat("enduro");
				case 15:
					return joaat("faggio2");
				case 16:
					return joaat("hakuchou");
				case 17:
					return joaat("hexer");
				case 18:
					return joaat("innovation");
				case 19:
					return joaat("lectro");
				case 20:
					return joaat("sovereign");
				case 21:
					return joaat("thrust");
				case 22:
					return joaat("vindicator");
				case 23:
					return joaat("gargoyle");
				case 24:
					return joaat("cliffhanger");
				case 25:
					return joaat("bf400");
				default:
			}
			break;
		case 13:
			switch (iParam1)
			{
				case 0:
					return joaat("bmx");
				case 1:
					return joaat("cruiser");
				case 2:
					return joaat("scorcher");
				case 3:
					return joaat("tribike");
				case 4:
					return joaat("tribike2");
				case 5:
					return joaat("tribike3");
				default:
			}
			break;
	}
	return 0;
}

int func_197(int iParam0)//Position - 0x1331FC
{
	switch (iParam0)
	{
		case 7:
			return 20;
		case 6:
			return 39;
		case 3:
			return 14;
		case 4:
			return 39;
		case 5:
			return 20;
		case 1:
			return 32;
		case 2:
			return 29;
		case 0:
			return 8;
		case 9:
			return 31;
		case 10:
			return 11;
		case 11:
			return 13;
		case 12:
			return 31;
		case 8:
			return 26;
		case 13:
			return 6;
		default:
	}
	return 39;
}

int func_198(int iParam0, int iParam1)//Position - 0x133B43
{
	switch (iParam0)
	{
		case 12:
			switch (iParam1)
			{
				case 21:
					return 8;
				case 22:
					return 26;
				case 23:
					return 43;
				case 24:
					return 59;
				case 25:
					return 77;
				case 26:
					return 93;
				case 27:
					return 99;
				case 28:
					return 104;
				case 29:
					return 109;
				case 30:
					return 114;
				default:
			}
			break;
	}
	return 0;
}

void func_199(char[4] cParam0)//Position - 0x133C69
{
	*cParam0 = { Global_4539885.f_21 };
}

int func_200(char* sParam0, int iParam1, int iParam2, int iParam3)//Position - 0x133C7D
{
	*iParam3 = 0;
	switch (iParam1)
	{
		case 1:
			StringCopy(sParam0, "CMOD_UNLOKR_RAT", 16);
			if (iParam2 == 1)
			{
				StringCopy(sParam0, "CMOD_UNLOKR_RT1", 16);
				*iParam3 = 1;
			}
			break;
		case 2:
			StringCopy(sParam0, "CMOD_UNLOKR_RAM", 16);
			if (iParam2 == 1)
			{
				StringCopy(sParam0, "CMOD_UNLOKR_RM1", 16);
				*iParam3 = 1;
			}
			break;
		case 3:
			StringCopy(sParam0, "CMOD_UNLOKR_SLI", 16);
			if (iParam2 == 1)
			{
				StringCopy(sParam0, "CMOD_UNLOKR_SL1", 16);
				*iParam3 = 1;
			}
			break;
		case 4:
			StringCopy(sParam0, "CMOD_UNLOKR_RAW", 16);
			if (iParam2 == 1)
			{
				StringCopy(sParam0, "CMOD_UNLOKR_RW1", 16);
				*iParam3 = 1;
			}
			break;
		case 5:
			StringCopy(sParam0, "CMOD_UNLOKR_USJ", 16);
			if (iParam2 == 1)
			{
				StringCopy(sParam0, "CMOD_UNLOKR_US1", 16);
				*iParam3 = 1;
			}
			break;
		case 6:
			StringCopy(sParam0, "CMOD_UNLOKR_TBS", 16);
			if (iParam2 == 1)
			{
				StringCopy(sParam0, "CMOD_UNLOKR_TB1", 16);
				*iParam3 = 1;
			}
			break;
		case 7:
			if (iParam2 <= 1)
			{
				return 0;
			}
			StringCopy(sParam0, "CMOD_UNLOKR_RNK", 16);
			break;
		case 8:
			StringCopy(sParam0, "CMOD_UNLOKR_BL", 16);
			if (iParam2 == 1)
			{
				StringCopy(sParam0, "CMOD_UNLOKR_BL1", 16);
				*iParam3 = 1;
			}
			break;
		case 10:
			StringCopy(sParam0, "CMOD_UNLOKR_AIR", 16);
			break;
		case 11:
			StringCopy(sParam0, "CMOD_UNLOKR_SEA", 16);
			break;
		case 9:
			StringCopy(sParam0, "CMOD_UNLOKR_RAL", 16);
			break;
		case 12:
			StringCopy(sParam0, "CMOD_UNLOKR_T3", 16);
			break;
		default:
			return 0;
	}
	return 1;
}

int func_201(char* sParam0, int iParam1, int iParam2, var uParam3)//Position - 0x13411B
{
	*uParam3 = 0;
	switch (iParam1)
	{
		case 1:
			StringCopy(sParam0, "CMOD_UNLOCK_RAT", 16);
			if (iParam2 == 1)
			{
				StringCopy(sParam0, "CMOD_UNLOCK_RT1", 16);
				*uParam3 = 1;
			}
			break;
		case 2:
			StringCopy(sParam0, "CMOD_UNLOCK_RAM", 16);
			if (iParam2 == 1)
			{
				StringCopy(sParam0, "CMOD_UNLOCK_RM1", 16);
				*uParam3 = 1;
			}
			break;
		case 3:
			StringCopy(sParam0, "CMOD_UNLOCK_SLI", 16);
			if (iParam2 == 1)
			{
				StringCopy(sParam0, "CMOD_UNLOCK_SL1", 16);
				*uParam3 = 1;
			}
			break;
		case 4:
			StringCopy(sParam0, "CMOD_UNLOCK_RAW", 16);
			if (iParam2 == 1)
			{
				StringCopy(sParam0, "CMOD_UNLOCK_RW1", 16);
				*uParam3 = 1;
			}
			break;
		case 5:
			StringCopy(sParam0, "CMOD_UNLOCK_USJ", 16);
			if (iParam2 == 1)
			{
				StringCopy(sParam0, "CMOD_UNLOCK_US1", 16);
				*uParam3 = 1;
			}
			break;
		case 6:
			StringCopy(sParam0, "CMOD_UNLOCK_TBS", 16);
			if (iParam2 == 1)
			{
				StringCopy(sParam0, "CMOD_UNLOCK_TB1", 16);
				*uParam3 = 1;
			}
			break;
		case 7:
			StringCopy(sParam0, "CMOD_UNLOCK_RNK", 16);
			break;
		case 8:
			StringCopy(sParam0, "CMOD_UNLOCK_BL" /* GXT: This item will unlock when you achieve ~1~ more best laps. */, 16);
			if (iParam2 == 1)
			{
				StringCopy(sParam0, "CMOD_UNLOCK_BL1" /* GXT: This item will unlock when you achieve a best lap. */, 16);
				*uParam3 = 1;
			}
			break;
		case 10:
			StringCopy(sParam0, "CMOD_UNLOCK_AIR" /* GXT: This item will unlock when you win an Air Race. */, 16);
			break;
		case 11:
			StringCopy(sParam0, "CMOD_UNLOCK_SEA" /* GXT: This item will unlock when you win a Sea Race. */, 16);
			break;
		case 9:
			StringCopy(sParam0, "CMOD_UNLOCK_RAL" /* GXT: This item will unlock when you win a Rally Race. */, 16);
			break;
		case 12:
			StringCopy(sParam0, "CMOD_UNLOCK_T3" /* GXT: This item will unlock when you finish a Race in the top 3. */, 16);
			break;
		default:
			return 0;
	}
	return 1;
}

int func_202(int iParam0, int iParam1)//Position - 0x134290
{
	if (iParam0 == 3)
	{
		switch (iParam1)
		{
			case 134:
				return 0;
				break;
			case 136:
				return 1;
				break;
			case 137:
				return 1;
				break;
			case 169:
				return 1;
				break;
		}
	}
	else if (iParam0 == 1)
	{
		switch (iParam1)
		{
			case 133:
				return 0;
				break;
		}
	}
	else if (iParam0 == 4)
	{
		switch (iParam1)
		{
			case 135:
				return 1;
				break;
			case 170:
				return 100;
				break;
			}
	}
	switch (iParam1)
	{
		case 148:
			return 5;
			break;
		case 149:
			return 10;
			break;
		case 150:
			return 25;
			break;
		case 151:
			return 50;
			break;
		case 155:
			return 5;
			break;
		case 156:
			return 10;
			break;
		case 157:
			return 25;
			break;
		case 158:
			return 50;
			break;
		case 152:
			return 5;
			break;
		case 153:
			return 10;
			break;
		case 154:
			return 25;
			break;
		case 159:
			return 25;
			break;
		case 160:
			return 50;
			break;
		case 161:
			return 100;
			break;
		case 162:
			return 5;
			break;
		case 163:
			return 10;
			break;
		case 164:
			return 25;
			break;
		case 165:
			return 50;
			break;
	}
	if ((iParam0 == 1 || iParam0 == 2) || iParam0 == 0)
	{
		switch (iParam1)
		{
			case 138:
				return 7;
			case 139:
				return 9;
			case 140:
				return 11;
			case 141:
				return 13;
			case 142:
				return 15;
			case 143:
				return 17;
			case 144:
				return 19;
			case 145:
				return 21;
			case 146:
				return 23;
			case 147:
				return 25;
			case 166:
				return 1;
			case 167:
				return 1;
			case 168:
				return 1;
			}
		default:
	}
	return 0;
}

int func_203(int iParam0)//Position - 0x1344CE
{
	switch (iParam0)
	{
		case 134:
			return 7;
		case 136:
			return 10;
		case 137:
			return 7;
		case 133:
			return 7;
		case 135:
			return 9;
		case 170:
			return 7;
		case 148:
			return 8;
		case 149:
			return 8;
		case 150:
			return 8;
		case 151:
			return 8;
		case 152:
			return 5;
		case 153:
			return 5;
		case 154:
			return 5;
		case 155:
			return 6;
		case 156:
			return 6;
		case 157:
			return 6;
		case 158:
			return 6;
		case 159:
			return 3;
		case 160:
			return 3;
		case 161:
			return 3;
		case 162:
			return 4;
		case 163:
			return 4;
		case 164:
			return 4;
		case 165:
			return 4;
		case 138:
			return 7;
		case 139:
			return 7;
		case 140:
			return 7;
		case 141:
			return 7;
		case 142:
			return 7;
		case 143:
			return 7;
		case 144:
			return 7;
		case 145:
			return 7;
		case 146:
			return 7;
		case 147:
			return 7;
		case 166:
			return 7;
		case 167:
			return 7;
		case 168:
			return 7;
		case 169:
			return 7;
		default:
	}
	return 7;
}

int func_204(int iParam0, int iParam1, bool bParam2)//Position - 0x134660
{
	if (iParam0 == 3)
	{
		switch (iParam1)
		{
			case 1:
			case 75:
			case 48:
			case 15:
			case 30:
			case 78:
			case 77:
			case 34:
			case 46:
			case 80:
				if (bParam2)
				{
					return 134;
				}
				else
				{
					return 169;
				}
				break;
			case 87:
			case 90:
			case 86:
			case 88:
			case 89:
				return 136;
				break;
			case 70:
			case 72:
			case 43:
			case 44:
			case 79:
				return 137;
				break;
			}
	}
	if (iParam0 == 1)
	{
		switch (iParam1)
		{
			case 1:
			case 6:
			case 8:
			case 14:
			case 15:
			case 21:
			case 30:
			case 35:
			case 40:
			case 41:
			case 48:
			case 50:
			case 56:
			case 59:
			case 64:
			case 69:
			case 73:
			case 75:
				if (bParam2)
				{
					return 133;
				}
				else
				{
					return 166;
				}
				break;
			}
	}
	if (iParam0 == 0)
	{
		switch (iParam1)
		{
			case 1:
			case 6:
			case 8:
			case 14:
			case 15:
			case 21:
			case 30:
			case 35:
			case 40:
			case 41:
			case 48:
			case 50:
			case 56:
			case 59:
			case 64:
			case 69:
			case 73:
			case 75:
				if (!bParam2)
				{
					return 167;
				}
				break;
			}
	}
	if (iParam0 == 2)
	{
		switch (iParam1)
		{
			case 1:
			case 6:
			case 8:
			case 14:
			case 15:
			case 21:
			case 30:
			case 35:
			case 40:
			case 41:
			case 48:
			case 50:
			case 56:
			case 59:
			case 64:
			case 69:
			case 73:
			case 75:
				if (!bParam2)
				{
					return 168;
				}
				break;
			}
	}
	if (iParam0 == 4)
	{
		switch (iParam1)
		{
			case 81:
			case 82:
			case 83:
				return 135;
				break;
			case 32:
			case 91:
				return 170;
				break;
			}
	}
	switch (iParam1)
	{
		case 58:
			return 148;
			break;
		case 44:
			return 149;
			break;
		case 55:
			return 150;
			break;
		case 25:
			return 151;
			break;
		case 29:
			return 152;
			break;
		case 85:
			return 153;
			break;
		case 43:
			return 154;
			break;
		case 23:
			return 155;
			break;
		case 38:
			return 156;
			break;
		case 71:
			return 157;
			break;
		case 26:
			return 158;
			break;
		case 24:
			return 159;
			break;
		case 42:
			return 160;
			break;
		case 18:
			return 161;
			break;
		case 62:
			return 162;
			break;
		case 12:
			return 163;
			break;
		case 32:
			return 164;
			break;
		case 84:
			return 165;
			break;
	}
	switch (iParam0)
	{
		case 1:
		case 2:
		case 0:
			switch (iParam1)
			{
				case 2:
				case 3:
				case 4:
				case 5:
					return 138;
					break;
				case 9:
				case 10:
				case 11:
				case 13:
					return 139;
					break;
				case 16:
				case 17:
				case 19:
				case 20:
					return 140;
					break;
				case 22:
				case 27:
				case 28:
				case 31:
					return 141;
					break;
				case 33:
				case 34:
				case 37:
				case 39:
					return 142;
					break;
				case 45:
				case 46:
				case 47:
				case 49:
					return 143;
					break;
				case 51:
				case 52:
				case 53:
				case 54:
					return 144;
					break;
				case 57:
				case 60:
				case 61:
				case 63:
					return 145;
					break;
				case 65:
				case 66:
				case 67:
				case 68:
					return 146;
					break;
				case 70:
				case 72:
				case 74:
				case 76:
					return 147;
					break;
			}
			break;
	}
	return 0;
}

float func_205(int iParam0)//Position - 0x134C38
{
	float fVar0;
	fVar0 = 1f;
	if (iParam0 == 1)
	{
		if (((((((((((((Global_1585307 == 3 || Global_1585307 == 27) || Global_1585307 == 26) || Global_1585307 == 29) || Global_1585307 == 30) || Global_1585307 == 31) || Global_1585307 == 32) || Global_1585307 == 33) || Global_1585307 == 34) || Global_1585307 == 35) || Global_1585307 == 36) || Global_1585307 == 37) || Global_1585307 == 38) || Global_1585307 == 39)
		{
			fVar0 = Global_262145.f_3435 /* Tunable: CARMOD_UNLOCK_SECONDARYCOLORCLASSIC_EXPENDITURE_TUNABLE_SPECIAL */;
		}
		else if (Global_1585307 == 1)
		{
			fVar0 = Global_262145.f_3298 /* Tunable: CARMOD_UNLOCK_SECONDARYCOLORCLASSIC_EXPENDITURE_TUNABLE_SPORT */;
		}
		else if (Global_1585307 == 2)
		{
			fVar0 = Global_262145.f_3161 /* Tunable: CARMOD_UNLOCK_SECONDARYCOLORCLASSIC_EXPENDITURE_TUNABLE_SUV */;
		}
		else if (Global_1585307 == 4)
		{
			fVar0 = Global_262145.f_3572 /* Tunable: CARMOD_UNLOCK_SECONDARYCOLORCLASSIC_EXPENDITURE_TUNABLE_BIKE */;
		}
		else
		{
			fVar0 = Global_262145.f_3024 /* Tunable: CARMOD_UNLOCK_SECONDARYCOLORCLASSIC_EXPENDITURE_TUNABLE */;
		}
	}
	else if (iParam0 == 3)
	{
		if (((((((((((((Global_1585307 == 3 || Global_1585307 == 27) || Global_1585307 == 26) || Global_1585307 == 29) || Global_1585307 == 30) || Global_1585307 == 31) || Global_1585307 == 32) || Global_1585307 == 33) || Global_1585307 == 34) || Global_1585307 == 35) || Global_1585307 == 36) || Global_1585307 == 37) || Global_1585307 == 38) || Global_1585307 == 39)
		{
			fVar0 = Global_262145.f_3436 /* Tunable: CARMOD_UNLOCK_SECONDARYCOLORMATTE_EXPENDITURE_TUNABLE_SPECIAL */;
		}
		else if (Global_1585307 == 1)
		{
			fVar0 = Global_262145.f_3299 /* Tunable: CARMOD_UNLOCK_SECONDARYCOLORMATTE_EXPENDITURE_TUNABLE_SPORT */;
		}
		else if (Global_1585307 == 2)
		{
			fVar0 = Global_262145.f_3162 /* Tunable: CARMOD_UNLOCK_SECONDARYCOLORMATTE_EXPENDITURE_TUNABLE_SUV */;
		}
		else if (Global_1585307 == 4)
		{
			fVar0 = Global_262145.f_3573 /* Tunable: CARMOD_UNLOCK_SECONDARYCOLORMATTE_EXPENDITURE_TUNABLE_BIKE */;
		}
		else
		{
			fVar0 = Global_262145.f_3025 /* Tunable: CARMOD_UNLOCK_SECONDARYCOLORMATTE_EXPENDITURE_TUNABLE */;
		}
	}
	else if (iParam0 == 2)
	{
		if (((((((((((((Global_1585307 == 3 || Global_1585307 == 27) || Global_1585307 == 26) || Global_1585307 == 29) || Global_1585307 == 30) || Global_1585307 == 31) || Global_1585307 == 32) || Global_1585307 == 33) || Global_1585307 == 34) || Global_1585307 == 35) || Global_1585307 == 36) || Global_1585307 == 37) || Global_1585307 == 38) || Global_1585307 == 39)
		{
			fVar0 = Global_262145.f_3439 /* Tunable: CARMOD_UNLOCK_SECONDARYCOLORPEARLESCENT_EXPENDITURE_TUNABLE_SPECIAL */;
		}
		else if (Global_1585307 == 1)
		{
			fVar0 = Global_262145.f_3302 /* Tunable: CARMOD_UNLOCK_SECONDARYCOLORPEARLESCENT_EXPENDITURE_TUNABLE_SPORT */;
		}
		else if (Global_1585307 == 2)
		{
			fVar0 = Global_262145.f_3165 /* Tunable: CARMOD_UNLOCK_SECONDARYCOLORPEARLESCENT_EXPENDITURE_TUNABLE_SUV */;
		}
		else if (Global_1585307 == 4)
		{
			fVar0 = Global_262145.f_3576 /* Tunable: CARMOD_UNLOCK_SECONDARYCOLORPEARLESCENT_EXPENDITURE_TUNABLE_BIKE */;
		}
		else
		{
			fVar0 = Global_262145.f_3028 /* Tunable: CARMOD_UNLOCK_SECONDARYCOLORPEARLESCENT_EXPENDITURE_TUNABLE */;
		}
	}
	else if (iParam0 == 0)
	{
		if (((((((((((((Global_1585307 == 3 || Global_1585307 == 27) || Global_1585307 == 26) || Global_1585307 == 29) || Global_1585307 == 30) || Global_1585307 == 31) || Global_1585307 == 32) || Global_1585307 == 33) || Global_1585307 == 34) || Global_1585307 == 35) || Global_1585307 == 36) || Global_1585307 == 37) || Global_1585307 == 38) || Global_1585307 == 39)
		{
			fVar0 = Global_262145.f_3437 /* Tunable: CARMOD_UNLOCK_SECONDARYCOLORMETALLIC_EXPENDITURE_TUNABLE_SPECIAL */;
		}
		else if (Global_1585307 == 1)
		{
			fVar0 = Global_262145.f_3300 /* Tunable: CARMOD_UNLOCK_SECONDARYCOLORMETALLIC_EXPENDITURE_TUNABLE_SPORT */;
		}
		else if (Global_1585307 == 2)
		{
			fVar0 = Global_262145.f_3163 /* Tunable: CARMOD_UNLOCK_SECONDARYCOLORMETALLIC_EXPENDITURE_TUNABLE_SUV */;
		}
		else if (Global_1585307 == 4)
		{
			fVar0 = Global_262145.f_3574 /* Tunable: CARMOD_UNLOCK_SECONDARYCOLORMETALLIC_EXPENDITURE_TUNABLE_BIKE */;
		}
		else
		{
			fVar0 = Global_262145.f_3026 /* Tunable: CARMOD_UNLOCK_SECONDARYCOLORMETALLIC_EXPENDITURE_TUNABLE */;
		}
	}
	else if (iParam0 == 4)
	{
		if (((((((((((((Global_1585307 == 3 || Global_1585307 == 27) || Global_1585307 == 26) || Global_1585307 == 29) || Global_1585307 == 30) || Global_1585307 == 31) || Global_1585307 == 32) || Global_1585307 == 33) || Global_1585307 == 34) || Global_1585307 == 35) || Global_1585307 == 36) || Global_1585307 == 37) || Global_1585307 == 38) || Global_1585307 == 39)
		{
			fVar0 = Global_262145.f_3438 /* Tunable: CARMOD_UNLOCK_SECONDARYCOLORMETALS_EXPENDITURE_TUNABLE_SPECIAL */;
		}
		else if (Global_1585307 == 1)
		{
			fVar0 = Global_262145.f_3301 /* Tunable: CARMOD_UNLOCK_SECONDARYCOLORMETALS_EXPENDITURE_TUNABLE_SPORT */;
		}
		else if (Global_1585307 == 2)
		{
			fVar0 = Global_262145.f_3164 /* Tunable: CARMOD_UNLOCK_SECONDARYCOLORMETALS_EXPENDITURE_TUNABLE_SUV */;
		}
		else if (Global_1585307 == 4)
		{
			fVar0 = Global_262145.f_3575 /* Tunable: CARMOD_UNLOCK_SECONDARYCOLORMETALS_EXPENDITURE_TUNABLE_BIKE */;
		}
		else
		{
			fVar0 = Global_262145.f_3027 /* Tunable: CARMOD_UNLOCK_SECONDARYCOLORMETALS_EXPENDITURE_TUNABLE */;
		}
	}
	else if (iParam0 == 5)
	{
		if (((((((((((((Global_1585307 == 3 || Global_1585307 == 27) || Global_1585307 == 26) || Global_1585307 == 29) || Global_1585307 == 30) || Global_1585307 == 31) || Global_1585307 == 32) || Global_1585307 == 33) || Global_1585307 == 34) || Global_1585307 == 35) || Global_1585307 == 36) || Global_1585307 == 37) || Global_1585307 == 38) || Global_1585307 == 39)
		{
			fVar0 = Global_262145.f_3434 /* Tunable: CARMOD_UNLOCK_SECONDARYCOLORCHROME_EXPENDITURE_TUNABLE_SPECIAL */;
		}
		else if (Global_1585307 == 1)
		{
			fVar0 = Global_262145.f_3297 /* Tunable: CARMOD_UNLOCK_SECONDARYCOLORCHROME_EXPENDITURE_TUNABLE_SPORT */;
		}
		else if (Global_1585307 == 2)
		{
			fVar0 = Global_262145.f_3160 /* Tunable: CARMOD_UNLOCK_SECONDARYCOLORCHROME_EXPENDITURE_TUNABLE_SUV */;
		}
		else if (Global_1585307 == 4)
		{
			fVar0 = Global_262145.f_3571 /* Tunable: CARMOD_UNLOCK_SECONDARYCOLORCHROME_EXPENDITURE_TUNABLE_BIKE */;
		}
		else
		{
			fVar0 = Global_262145.f_3023 /* Tunable: CARMOD_UNLOCK_SECONDARYCOLORCHROME_EXPENDITURE_TUNABLE */;
		}
	}
	return fVar0;
}

float func_206(int iParam0)//Position - 0x13528A
{
	float fVar0;
	fVar0 = 1f;
	if (iParam0 == 1)
	{
		if (((((((((((((Global_1585307 == 3 || Global_1585307 == 27) || Global_1585307 == 26) || Global_1585307 == 29) || Global_1585307 == 30) || Global_1585307 == 31) || Global_1585307 == 32) || Global_1585307 == 33) || Global_1585307 == 34) || Global_1585307 == 35) || Global_1585307 == 36) || Global_1585307 == 37) || Global_1585307 == 38) || Global_1585307 == 39)
		{
			fVar0 = Global_262145.f_3428 /* Tunable: CARMOD_UNLOCK_PRIMARYCOLORCLASSIC_EXPENDITURE_TUNABLE_SPECIAL */;
		}
		else if (Global_1585307 == 1)
		{
			fVar0 = Global_262145.f_3291 /* Tunable: CARMOD_UNLOCK_PRIMARYCOLORCLASSIC_EXPENDITURE_TUNABLE_SPORT */;
		}
		else if (Global_1585307 == 2)
		{
			fVar0 = Global_262145.f_3154 /* Tunable: CARMOD_UNLOCK_PRIMARYCOLORCLASSIC_EXPENDITURE_TUNABLE_SUV */;
		}
		else if (Global_1585307 == 4)
		{
			fVar0 = Global_262145.f_3565 /* Tunable: CARMOD_UNLOCK_PRIMARYCOLORCLASSIC_EXPENDITURE_TUNABLE_BIKE */;
		}
		else
		{
			fVar0 = Global_262145.f_3017 /* Tunable: CARMOD_UNLOCK_PRIMARYCOLORCLASSIC_EXPENDITURE_TUNABLE */;
		}
	}
	else if (iParam0 == 3)
	{
		if (((((((((((((Global_1585307 == 3 || Global_1585307 == 27) || Global_1585307 == 26) || Global_1585307 == 29) || Global_1585307 == 30) || Global_1585307 == 31) || Global_1585307 == 32) || Global_1585307 == 33) || Global_1585307 == 34) || Global_1585307 == 35) || Global_1585307 == 36) || Global_1585307 == 37) || Global_1585307 == 38) || Global_1585307 == 39)
		{
			fVar0 = Global_262145.f_3429 /* Tunable: CARMOD_UNLOCK_PRIMARYCOLORMATTE_EXPENDITURE_TUNABLE_SPECIAL */;
		}
		else if (Global_1585307 == 1)
		{
			fVar0 = Global_262145.f_3292 /* Tunable: CARMOD_UNLOCK_PRIMARYCOLORMATTE_EXPENDITURE_TUNABLE_SPORT */;
		}
		else if (Global_1585307 == 2)
		{
			fVar0 = Global_262145.f_3155 /* Tunable: CARMOD_UNLOCK_PRIMARYCOLORMATTE_EXPENDITURE_TUNABLE_SUV */;
		}
		else if (Global_1585307 == 4)
		{
			fVar0 = Global_262145.f_3566 /* Tunable: CARMOD_UNLOCK_PRIMARYCOLORMATTE_EXPENDITURE_TUNABLE_BIKE */;
		}
		else
		{
			fVar0 = Global_262145.f_3018 /* Tunable: CARMOD_UNLOCK_PRIMARYCOLORMATTE_EXPENDITURE_TUNABLE */;
		}
	}
	else if (iParam0 == 2)
	{
		if (((((((((((((Global_1585307 == 3 || Global_1585307 == 27) || Global_1585307 == 26) || Global_1585307 == 29) || Global_1585307 == 30) || Global_1585307 == 31) || Global_1585307 == 32) || Global_1585307 == 33) || Global_1585307 == 34) || Global_1585307 == 35) || Global_1585307 == 36) || Global_1585307 == 37) || Global_1585307 == 38) || Global_1585307 == 39)
		{
			fVar0 = Global_262145.f_3432 /* Tunable: CARMOD_UNLOCK_PRIMARYCOLORPEARLESCENT_EXPENDITURE_TUNABLE_SPECIAL */;
		}
		else if (Global_1585307 == 1)
		{
			fVar0 = Global_262145.f_3295 /* Tunable: CARMOD_UNLOCK_PRIMARYCOLORPEARLESCENT_EXPENDITURE_TUNABLE_SPORT */;
		}
		else if (Global_1585307 == 2)
		{
			fVar0 = Global_262145.f_3158 /* Tunable: CARMOD_UNLOCK_PRIMARYCOLORPEARLESCENT_EXPENDITURE_TUNABLE_SUV */;
		}
		else if (Global_1585307 == 4)
		{
			fVar0 = Global_262145.f_3569 /* Tunable: CARMOD_UNLOCK_PRIMARYCOLORPEARLESCENT_EXPENDITURE_TUNABLE_BIKE */;
		}
		else
		{
			fVar0 = Global_262145.f_3021 /* Tunable: CARMOD_UNLOCK_PRIMARYCOLORPEARLESCENT_EXPENDITURE_TUNABLE */;
		}
	}
	else if (iParam0 == 0)
	{
		if (((((((((((((Global_1585307 == 3 || Global_1585307 == 27) || Global_1585307 == 26) || Global_1585307 == 29) || Global_1585307 == 30) || Global_1585307 == 31) || Global_1585307 == 32) || Global_1585307 == 33) || Global_1585307 == 34) || Global_1585307 == 35) || Global_1585307 == 36) || Global_1585307 == 37) || Global_1585307 == 38) || Global_1585307 == 39)
		{
			fVar0 = Global_262145.f_3430 /* Tunable: CARMOD_UNLOCK_PRIMARYCOLORMETALLIC_EXPENDITURE_TUNABLE_SPECIAL */;
		}
		else if (Global_1585307 == 1)
		{
			fVar0 = Global_262145.f_3293 /* Tunable: CARMOD_UNLOCK_PRIMARYCOLORMETALLIC_EXPENDITURE_TUNABLE_SPORT */;
		}
		else if (Global_1585307 == 2)
		{
			fVar0 = Global_262145.f_3156 /* Tunable: CARMOD_UNLOCK_PRIMARYCOLORMETALLIC_EXPENDITURE_TUNABLE_SUV */;
		}
		else if (Global_1585307 == 4)
		{
			fVar0 = Global_262145.f_3567 /* Tunable: CARMOD_UNLOCK_PRIMARYCOLORMETALLIC_EXPENDITURE_TUNABLE_BIKE */;
		}
		else
		{
			fVar0 = Global_262145.f_3019 /* Tunable: CARMOD_UNLOCK_PRIMARYCOLORMETALLIC_EXPENDITURE_TUNABLE */;
		}
	}
	else if (iParam0 == 4)
	{
		if (((((((((((((Global_1585307 == 3 || Global_1585307 == 27) || Global_1585307 == 26) || Global_1585307 == 29) || Global_1585307 == 30) || Global_1585307 == 31) || Global_1585307 == 32) || Global_1585307 == 33) || Global_1585307 == 34) || Global_1585307 == 35) || Global_1585307 == 36) || Global_1585307 == 37) || Global_1585307 == 38) || Global_1585307 == 39)
		{
			fVar0 = Global_262145.f_3431 /* Tunable: CARMOD_UNLOCK_PRIMARYCOLORMETALS_EXPENDITURE_TUNABLE_SPECIAL */;
		}
		else if (Global_1585307 == 1)
		{
			fVar0 = Global_262145.f_3294 /* Tunable: CARMOD_UNLOCK_PRIMARYCOLORMETALS_EXPENDITURE_TUNABLE_SPORT */;
		}
		else if (Global_1585307 == 2)
		{
			fVar0 = Global_262145.f_3157 /* Tunable: CARMOD_UNLOCK_PRIMARYCOLORMETALS_EXPENDITURE_TUNABLE_SUV */;
		}
		else if (Global_1585307 == 4)
		{
			fVar0 = Global_262145.f_3568 /* Tunable: CARMOD_UNLOCK_PRIMARYCOLORMETALS_EXPENDITURE_TUNABLE_BIKE */;
		}
		else
		{
			fVar0 = Global_262145.f_3020 /* Tunable: CARMOD_UNLOCK_PRIMARYCOLORMETALS_EXPENDITURE_TUNABLE */;
		}
	}
	else if (iParam0 == 5)
	{
		if (((((((((((((Global_1585307 == 3 || Global_1585307 == 27) || Global_1585307 == 26) || Global_1585307 == 29) || Global_1585307 == 30) || Global_1585307 == 31) || Global_1585307 == 32) || Global_1585307 == 33) || Global_1585307 == 34) || Global_1585307 == 35) || Global_1585307 == 36) || Global_1585307 == 37) || Global_1585307 == 38) || Global_1585307 == 39)
		{
			fVar0 = Global_262145.f_3427 /* Tunable: CARMOD_UNLOCK_PRIMARYCOLORCHROME_EXPENDITURE_TUNABLE_SPECIAL */;
		}
		else if (Global_1585307 == 1)
		{
			fVar0 = Global_262145.f_3290 /* Tunable: CARMOD_UNLOCK_PRIMARYCOLORCHROME_EXPENDITURE_TUNABLE_SPORT */;
		}
		else if (Global_1585307 == 2)
		{
			fVar0 = Global_262145.f_3153 /* Tunable: CARMOD_UNLOCK_PRIMARYCOLORCHROME_EXPENDITURE_TUNABLE_SUV */;
		}
		else if (Global_1585307 == 4)
		{
			fVar0 = Global_262145.f_3564 /* Tunable: CARMOD_UNLOCK_PRIMARYCOLORCHROME_EXPENDITURE_TUNABLE_BIKE */;
		}
		else
		{
			fVar0 = Global_262145.f_3016 /* Tunable: CARMOD_UNLOCK_PRIMARYCOLORCHROME_EXPENDITURE_TUNABLE */;
		}
	}
	return fVar0;
}

int func_207(char* sParam0)//Position - 0x1359DB
{
	int iVar0;
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	if (!HUD::DOES_TEXT_LABEL_EXIST(sParam0))
	{
		return 0;
	}
	iVar0 = MISC::GET_HASH_KEY(sParam0);
	switch (iVar0)
	{
		case joaat("BLACK"):
			return 2520;
			break;
		case joaat("BLACK_GRAPHITE"):
			return 2430;
			break;
		case joaat("GRAPHITE"):
			return 2370;
			break;
		case joaat("ANTHR_BLACK"):
			return 2490;
			break;
		case joaat("BLACK_STEEL"):
			return 2580;
			break;
		case joaat("DARK_SILVER"):
			return 2340;
			break;
		case joaat("SILVER"):
			return 2460;
			break;
		case joaat("BLUE_SILVER"):
			return 3200;
			break;
		case joaat("ROLLED_STEEL"):
			return 2340;
			break;
		case joaat("SHADOW_SILVER"):
			return 2580;
			break;
		case joaat("STONE_SILVER"):
			return 2610;
			break;
		case joaat("MIDNIGHT_SILVER"):
			return 2700;
			break;
		case joaat("CAST_IRON_SIL"):
			return 2640;
			break;
		case joaat("RED"):
			return 4200;
			break;
		case joaat("TORINO_RED"):
			return 15250;
			break;
		case joaat("FORMULA_RED"):
			return 15000;
			break;
		case joaat("LAVA_RED"):
			return 19550;
			break;
		case joaat("BLAZE_RED"):
			return 5400;
			break;
		case joaat("GRACE_RED"):
			return 2850;
			break;
		case joaat("GARNET_RED"):
			return 2670;
			break;
		case joaat("SUNSET_RED"):
			return 18100;
			break;
		case joaat("CABERNET_RED"):
			return 16240;
			break;
		case joaat("WINE_RED"):
			return 8200;
			break;
		case joaat("CANDY_RED"):
			return 19800;
			break;
		case joaat("HOT PINK"):
			return 20000;
			break;
		case joaat("PINK"):
			return 19200;
			break;
		case joaat("SALMON_PINK"):
			return 17600;
			break;
		case joaat("SUNRISE_ORANGE"):
			return 15800;
			break;
		case joaat("ORANGE"):
			return 15480;
			break;
		case joaat("BRIGHT_ORANGE"):
			return 15620;
			break;
		case joaat("GOLD"):
			return 3500;
			break;
		case joaat("BRONZE"):
			return 3450;
			break;
		case joaat("YELLOW"):
			return 15590;
			break;
		case joaat("RACE_YELLOW"):
			return 15860;
			break;
		case joaat("FLUR_YELLOW"):
			return 16000;
			break;
		case joaat("DARK_GREEN"):
			return 2610;
			break;
		case joaat("RACING_GREEN"):
			return 15760;
			break;
		case joaat("SEA_GREEN"):
			return 2850;
			break;
		case joaat("OLIVE_GREEN"):
			return 2550;
			break;
		case joaat("BRIGHT_GREEN"):
			return 15970;
			break;
		case joaat("PETROL_GREEN"):
			return 16850;
			break;
		case joaat("LIME_GREEN"):
			return 20000;
			break;
		case joaat("MIDNIGHT_BLUE"):
			return 7500;
			break;
		case joaat("GALAXY_BLUE"):
			return 3030;
			break;
		case joaat("DARK_BLUE"):
			return 2790;
			break;
		case joaat("SAXON_BLUE"):
			return 2700;
			break;
		case joaat("BLUE"):
			return 3840;
			break;
		case joaat("MARINER_BLUE"):
			return 2610;
			break;
		case joaat("HARBOR_BLUE"):
			return 2520;
			break;
		case joaat("DIAMOND_BLUE"):
			return 15700;
			break;
		case joaat("SURF_BLUE"):
			return 3900;
			break;
		case joaat("NAUTICAL_BLUE"):
			return 3610;
			break;
		case joaat("RACING_BLUE"):
			return 15340;
			break;
		case joaat("ULTRA_BLUE"):
			return 18750;
			break;
		case joaat("LIGHT_BLUE"):
			return 3450;
			break;
		case joaat("CHOCOLATE_BROWN"):
			return 6300;
			break;
		case joaat("BISON_BROWN"):
			return 5800;
			break;
		case joaat("CREEK_BROWN"):
			return 2340;
			break;
		case joaat("UMBER_BROWN"):
			return 2430;
			break;
		case joaat("MAPLE_BROWN"):
			return 2550;
			break;
		case joaat("BEECHWOOD_BROWN"):
			return 2700;
			break;
		case joaat("SIENNA_BROWN"):
			return 2760;
			break;
		case joaat("SADDLE_BROWN"):
			return 2490;
			break;
		case joaat("MOSS_BROWN"):
			return 2580;
			break;
		case joaat("WOODBEECH_BROWN"):
			return 2700;
			break;
		case joaat("STRAW_BROWN"):
			return 2640;
			break;
		case joaat("SANDY_BROWN"):
			return 2610;
			break;
		case joaat("BLEECHED_BROWN"):
			return 2340;
			break;
		case joaat("PURPLE"):
			return 5650;
			break;
		case joaat("SPIN_PURPLE"):
			return 10000;
			break;
		case joaat("MIGHT_PURPLE"):
			return 9400;
			break;
		case joaat("BRIGHT_PURPLE"):
			return 20000;
			break;
		case joaat("CREAM"):
			return 2340;
			break;
		case joaat("WHITE"):
			return 2430;
			break;
		case joaat("FROST_WHITE"):
			return 2610;
			break;
	}
	return 0;
}

int func_208(char* sParam0)//Position - 0x135E73
{
	int iVar0;
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	if (!HUD::DOES_TEXT_LABEL_EXIST(sParam0))
	{
		return 0;
	}
	iVar0 = MISC::GET_HASH_KEY(sParam0);
	switch (iVar0)
	{
		case joaat("BLACK"):
			return 2200;
			break;
		case joaat("GREY"):
			return 2050;
			break;
		case joaat("LIGHT_GREY"):
			return 2000;
			break;
		case joaat("WHITE"):
			return 2120;
			break;
		case joaat("BLUE"):
			return 14250;
			break;
		case joaat("DARK_BLUE"):
			return 2150;
			break;
		case joaat("MIDNIGHT_BLUE"):
			return 10000;
			break;
		case joaat("MIGHT_PURPLE"):
			return 13750;
			break;
		case joaat("PURPLE"):
			return 17000;
			break;
		case joaat("RED"):
			return 12500;
			break;
		case joaat("DARK_RED"):
			return 15000;
			break;
		case joaat("ORANGE"):
			return 14000;
			break;
		case joaat("YELLOW"):
			return 11600;
			break;
		case joaat("LIME_GREEN"):
			return 17500;
			break;
		case joaat("GREEN"):
			return 2130;
			break;
		case joaat("MATTE_FOR"):
			return 2150;
			break;
		case joaat("MATTE_FOIL"):
			return 2100;
			break;
		case joaat("MATTE_OD"):
			return 2250;
			break;
		case joaat("MATTE_DIRT"):
			return 2240;
			break;
		case joaat("MATTE_DESERT"):
			return 2170;
			break;
	}
	return 0;
}

int func_209(char* sParam0)//Position - 0x135FD2
{
	int iVar0;
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	if (!HUD::DOES_TEXT_LABEL_EXIST(sParam0))
	{
		return 0;
	}
	iVar0 = MISC::GET_HASH_KEY(sParam0);
	switch (iVar0)
	{
		case joaat("BLACK"):
			return 1400;
			break;
		case joaat("BLACK_GRAPHITE"):
			return 1350;
			break;
		case joaat("GRAPHITE"):
			return 1320;
			break;
		case joaat("ANTHR_BLACK"):
			return 1380;
			break;
		case joaat("BLACK_STEEL"):
			return 1440;
			break;
		case joaat("DARK_SILVER"):
			return 1300;
			break;
		case joaat("SILVER"):
			return 1370;
			break;
		case joaat("BLUE_SILVER"):
			return 1340;
			break;
		case joaat("ROLLED_STEEL"):
			return 1300;
			break;
		case joaat("SHADOW_SILVER"):
			return 1430;
			break;
		case joaat("STONE_SILVER"):
			return 1450;
			break;
		case joaat("MIDNIGHT_SILVER"):
			return 1500;
			break;
		case joaat("CAST_IRON_SIL"):
			return 1470;
			break;
		case joaat("RED"):
			return 1530;
			break;
		case joaat("TORINO_RED"):
			return 9260;
			break;
		case joaat("FORMULA_RED"):
			return 8890;
			break;
		case joaat("LAVA_RED"):
			return 14500;
			break;
		case joaat("BLAZE_RED"):
			return 5000;
			break;
		case joaat("GRACE_RED"):
			return 1590;
			break;
		case joaat("GARNET_RED"):
			return 1480;
			break;
		case joaat("SUNSET_RED"):
			return 13250;
			break;
		case joaat("CABERNET_RED"):
			return 12000;
			break;
		case joaat("WINE_RED"):
			return 13000;
			break;
		case joaat("CANDY_RED"):
			return 14750;
			break;
		case joaat("HOT PINK"):
			return 15000;
			break;
		case joaat("PINK"):
			return 13750;
			break;
		case joaat("SALMON_PINK"):
			return 13000;
			break;
		case joaat("SUNRISE_ORANGE"):
			return 11000;
			break;
		case joaat("ORANGE"):
			return 7500;
			break;
		case joaat("BRIGHT_ORANGE"):
			return 9000;
			break;
		case joaat("GOLD"):
			return 1650;
			break;
		case joaat("BRONZE"):
			return 1550;
			break;
		case joaat("YELLOW"):
			return 8500;
			break;
		case joaat("RACE_YELLOW"):
			return 11500;
			break;
		case joaat("FLUR_YELLOW"):
			return 12000;
			break;
		case joaat("DARK_GREEN"):
			return 1450;
			break;
		case joaat("RACING_GREEN"):
			return 10500;
			break;
		case joaat("SEA_GREEN"):
			return 1580;
			break;
		case joaat("OLIVE_GREEN"):
			return 1420;
			break;
		case joaat("BRIGHT_GREEN"):
			return 12000;
			break;
		case joaat("PETROL_GREEN"):
			return 13000;
			break;
		case joaat("LIME_GREEN"):
			return 15000;
			break;
		case joaat("MIDNIGHT_BLUE"):
			return 12250;
			break;
		case joaat("GALAXY_BLUE"):
			return 1690;
			break;
		case joaat("DARK_BLUE"):
			return 1550;
			break;
		case joaat("SAXON_BLUE"):
			return 1500;
			break;
		case joaat("BLUE"):
			return 1430;
			break;
		case joaat("MARINER_BLUE"):
			return 1450;
			break;
		case joaat("HARBOR_BLUE"):
			return 1400;
			break;
		case joaat("DIAMOND_BLUE"):
			return 10890;
			break;
		case joaat("SURF_BLUE"):
			return 1530;
			break;
		case joaat("NAUTICAL_BLUE"):
			return 1480;
			break;
		case joaat("RACING_BLUE"):
			return 7500;
			break;
		case joaat("ULTRA_BLUE"):
			return 13750;
			break;
		case joaat("LIGHT_BLUE"):
			return 1350;
			break;
		case joaat("CHOCOLATE_BROWN"):
			return 11250;
			break;
		case joaat("BISON_BROWN"):
			return 10000;
			break;
		case joaat("CREEK_BROWN"):
			return 1300;
			break;
		case joaat("UMBER_BROWN"):
			return 1350;
			break;
		case joaat("MAPLE_BROWN"):
			return 1420;
			break;
		case joaat("BEECHWOOD_BROWN"):
			return 1500;
			break;
		case joaat("SIENNA_BROWN"):
			return 1530;
			break;
		case joaat("SADDLE_BROWN"):
			return 1380;
			break;
		case joaat("MOSS_BROWN"):
			return 1430;
			break;
		case joaat("WOODBEECH_BROWN"):
			return 1500;
			break;
		case joaat("STRAW_BROWN"):
			return 1470;
			break;
		case joaat("SANDY_BROWN"):
			return 1450;
			break;
		case joaat("BLEECHED_BROWN"):
			return 1300;
			break;
		case joaat("PURPLE"):
			return 7500;
			break;
		case joaat("SPIN_PURPLE"):
			return 14250;
			break;
		case joaat("MIGHT_PURPLE"):
			return 13750;
			break;
		case joaat("BRIGHT_PURPLE"):
			return 15000;
			break;
		case joaat("CREAM"):
			return 1300;
			break;
		case joaat("WHITE"):
			return 1350;
			break;
		case joaat("FROST_WHITE"):
			return 1450;
			break;
	}
	return 0;
}

int func_210(char* sParam0)//Position - 0x13646A
{
	int iVar0;
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	if (!HUD::DOES_TEXT_LABEL_EXIST(sParam0))
	{
		return 0;
	}
	iVar0 = MISC::GET_HASH_KEY(sParam0);
	switch (iVar0)
	{
		case joaat("BR_STEEL"):
			return 12500;
			break;
		case joaat("BR BLACK_STEEL"):
			return 11500;
			break;
		case joaat("BR_ALUMINIUM"):
			return 10250;
			break;
		case joaat("GOLD_P"):
			return Global_262145.f_8230 /* Tunable: HIPSTER_VEHICLE_PURE_GOLD_METAL_RESPRAY */;
			break;
		case joaat("GOLD_S"):
			return Global_262145.f_8231 /* Tunable: HIPSTER_VEHICLE_BRUSHED_GOLD_METAL_RESPRAY */;
			break;
	}
	return 0;
}

int func_211(char* sParam0)//Position - 0x1364F0
{
	int iVar0;
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	if (!HUD::DOES_TEXT_LABEL_EXIST(sParam0))
	{
		return 0;
	}
	iVar0 = MISC::GET_HASH_KEY(sParam0);
	switch (iVar0)
	{
		case joaat("BLACK"):
			return 840;
			break;
		case joaat("BLACK_GRAPHITE"):
			return 810;
			break;
		case joaat("GRAPHITE"):
			return 790;
			break;
		case joaat("ANTHR_BLACK"):
			return 830;
			break;
		case joaat("BLACK_STEEL"):
			return 860;
			break;
		case joaat("DARK_SILVER"):
			return 780;
			break;
		case joaat("SILVER"):
			return 820;
			break;
		case joaat("BLUE_SILVER"):
			return 800;
			break;
		case joaat("ROLLED_STEEL"):
			return 780;
			break;
		case joaat("SHADOW_SILVER"):
			return 860;
			break;
		case joaat("STONE_SILVER"):
			return 870;
			break;
		case joaat("MIDNIGHT_SILVER"):
			return 900;
			break;
		case joaat("CAST_IRON_SIL"):
			return 880;
			break;
		case joaat("RED"):
			return 920;
			break;
		case joaat("TORINO_RED"):
			return 5600;
			break;
		case joaat("FORMULA_RED"):
			return 5200;
			break;
		case joaat("LAVA_RED"):
			return 11600;
			break;
		case joaat("BLAZE_RED"):
			return 3800;
			break;
		case joaat("GRACE_RED"):
			return 950;
			break;
		case joaat("GARNET_RED"):
			return 890;
			break;
		case joaat("SUNSET_RED"):
			return 10600;
			break;
		case joaat("CABERNET_RED"):
			return 9600;
			break;
		case joaat("WINE_RED"):
			return 10400;
			break;
		case joaat("CANDY_RED"):
			return 12150;
			break;
		case joaat("HOT PINK"):
			return 12500;
			break;
		case joaat("PINK"):
			return 11000;
			break;
		case joaat("SALMON_PINK"):
			return 10400;
			break;
		case joaat("SUNRISE_ORANGE"):
			return 8800;
			break;
		case joaat("ORANGE"):
			return 4500;
			break;
		case joaat("BRIGHT_ORANGE"):
			return 5400;
			break;
		case joaat("GOLD"):
			return 990;
			break;
		case joaat("BRONZE"):
			return 930;
			break;
		case joaat("YELLOW"):
			return 5100;
			break;
		case joaat("RACE_YELLOW"):
			return 9200;
			break;
		case joaat("FLUR_YELLOW"):
			return 9600;
			break;
		case joaat("DARK_GREEN"):
			return 870;
			break;
		case joaat("RACING_GREEN"):
			return 8400;
			break;
		case joaat("SEA_GREEN"):
			return 950;
			break;
		case joaat("OLIVE_GREEN"):
			return 850;
			break;
		case joaat("BRIGHT_GREEN"):
			return 9600;
			break;
		case joaat("PETROL_GREEN"):
			return 10400;
			break;
		case joaat("LIME_GREEN"):
			return 12500;
			break;
		case joaat("MIDNIGHT_BLUE"):
			return 9800;
			break;
		case joaat("GALAXY_BLUE"):
			return 1010;
			break;
		case joaat("DARK_BLUE"):
			return 930;
			break;
		case joaat("SAXON_BLUE"):
			return 900;
			break;
		case joaat("BLUE"):
			return 860;
			break;
		case joaat("MARINER_BLUE"):
			return 870;
			break;
		case joaat("HARBOR_BLUE"):
			return 840;
			break;
		case joaat("DIAMOND_BLUE"):
			return 8650;
			break;
		case joaat("SURF_BLUE"):
			return 920;
			break;
		case joaat("NAUTICAL_BLUE"):
			return 890;
			break;
		case joaat("RACING_BLUE"):
			return 4500;
			break;
		case joaat("ULTRA_BLUE"):
			return 11000;
			break;
		case joaat("LIGHT_BLUE"):
			return 810;
			break;
		case joaat("CHOCOLATE_BROWN"):
			return 9050;
			break;
		case joaat("BISON_BROWN"):
			return 8000;
			break;
		case joaat("CREEK_BROWN"):
			return 780;
			break;
		case joaat("UMBER_BROWN"):
			return 810;
			break;
		case joaat("MAPLE_BROWN"):
			return 850;
			break;
		case joaat("BEECHWOOD_BROWN"):
			return 900;
			break;
		case joaat("SIENNA_BROWN"):
			return 920;
			break;
		case joaat("SADDLE_BROWN"):
			return 830;
			break;
		case joaat("MOSS_BROWN"):
			return 860;
			break;
		case joaat("WOODBEECH_BROWN"):
			return 900;
			break;
		case joaat("STRAW_BROWN"):
			return 880;
			break;
		case joaat("SANDY_BROWN"):
			return 870;
			break;
		case joaat("BLEECHED_BROWN"):
			return 780;
			break;
		case joaat("PURPLE"):
			return 4500;
			break;
		case joaat("SPIN_PURPLE"):
			return 11400;
			break;
		case joaat("MIGHT_PURPLE"):
			return 11000;
			break;
		case joaat("BRIGHT_PURPLE"):
			return 12500;
			break;
		case joaat("CREAM"):
			return 780;
			break;
		case joaat("WHITE"):
			return 810;
			break;
		case joaat("FROST_WHITE"):
			return 870;
			break;
	}
	return 0;
}

int func_212(int iParam0, int iParam1, int iParam2)//Position - 0x1377C9
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					return -1;
					break;
				case 1:
					return 72;
					break;
				case 2:
					return 73;
					break;
				case 3:
					return 74;
					break;
				case 4:
					return 75;
					break;
				default:
					if (VEHICLE::GET_NUM_VEHICLE_MODS(iParam2, iParam1) >= iParam0)
					{
						return 76;
					}
					break;
			}
			break;
		case 1:
			switch (iParam0)
			{
				case 0:
					return -1;
					break;
				case 1:
					return 17;
					break;
				case 2:
					return 18;
					break;
				case 3:
					return 19;
					break;
				case 4:
					return 20;
					break;
				default:
					if (VEHICLE::GET_NUM_VEHICLE_MODS(iParam2, iParam1) >= iParam0)
					{
						if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
						{
							return 101;
						}
						else
						{
							return 20;
						}
					}
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 0:
					return -1;
					break;
				case 1:
					return 62;
					break;
				case 2:
					return 63;
					break;
				case 3:
					return 64;
					break;
				default:
					if (VEHICLE::GET_NUM_VEHICLE_MODS(iParam2, iParam1) >= iParam0)
					{
						return 65;
					}
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 0:
					return -1;
					break;
				case 1:
					return 25;
					break;
				case 2:
					return 26;
					break;
				case 3:
					return 27;
					break;
				default:
					if (VEHICLE::GET_NUM_VEHICLE_MODS(iParam2, iParam1) >= iParam0)
					{
						return 28;
					}
					break;
			}
			break;
		case 4:
			switch (iParam0)
			{
				case 0:
					return -1;
					break;
				case 1:
					return 77;
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
				default:
					if (VEHICLE::GET_NUM_VEHICLE_MODS(iParam2, iParam1) >= iParam0)
					{
						if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
						{
							return 100;
						}
						else
						{
							return 80;
						}
					}
					break;
			}
			break;
		case 5:
			switch (iParam0)
			{
				case 0:
					return -1;
					break;
				case 1:
					return 21;
					break;
				case 2:
					return 22;
					break;
				case 3:
					return 23;
					break;
				default:
					if (VEHICLE::GET_NUM_VEHICLE_MODS(iParam2, iParam1) >= iParam0)
					{
						return 24;
					}
					break;
			}
			break;
		case 6:
			switch (iParam0)
			{
				case 0:
					return -1;
					break;
				case 1:
					return 1;
					break;
				case 2:
					return 2;
					break;
				case 3:
					return 3;
					break;
				case 4:
					return 4;
					break;
				default:
					if (VEHICLE::GET_NUM_VEHICLE_MODS(iParam2, iParam1) >= iParam0)
					{
						if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
						{
							return 103;
						}
						else
						{
							return 4;
						}
					}
					break;
			}
			break;
		case 7:
			switch (iParam0)
			{
				case 0:
					return -1;
					break;
				case 1:
					return 66;
					break;
				case 2:
					return 67;
					break;
				case 3:
					return 68;
					break;
				case 4:
					return 69;
					break;
				case 5:
					return 70;
					break;
				default:
					if (VEHICLE::GET_NUM_VEHICLE_MODS(iParam2, iParam1) >= iParam0)
					{
						return 71;
					}
					break;
			}
			break;
		case 10:
			if (ENTITY::GET_ENTITY_MODEL(iParam2) == joaat("dukes"))
			{
				switch (iParam0)
				{
					case 0:
						return -1;
						break;
					case 1:
						return 85;
						break;
					default:
						return -1;
						break;
				}
			}
			else
			{
				switch (iParam0)
				{
					case 0:
						return -1;
						break;
					case 1:
						return 85;
						break;
					case 2:
						return 86;
						break;
					case 3:
						return 87;
						break;
					case 4:
						return 88;
						break;
					default:
						if (VEHICLE::GET_NUM_VEHICLE_MODS(iParam2, iParam1) >= iParam0)
						{
							if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
							{
								return 104;
							}
							else
							{
								return 88;
							}
						}
						break;
					}
			}
			break;
		case 11:
			switch (iParam0)
			{
				case 0:
					return -1;
					break;
				case 1:
					return 47;
					break;
				case 2:
					return 48;
					break;
				case 3:
					return 49;
					break;
				default:
					if (VEHICLE::GET_NUM_VEHICLE_MODS(iParam2, iParam1) >= iParam0)
					{
						return 49;
					}
					break;
			}
			break;
		case 12:
			switch (iParam0)
			{
				case 0:
					return -1;
					break;
				case 1:
					return 13;
					break;
				case 2:
					return 14;
					break;
				case 3:
					return 15;
					break;
				default:
					if (VEHICLE::GET_NUM_VEHICLE_MODS(iParam2, iParam1) >= iParam0)
					{
						return 16;
					}
					break;
			}
			break;
		case 13:
			switch (iParam0)
			{
				case 0:
					return -1;
					break;
				case 1:
					return 38;
					break;
				case 2:
					return 39;
					break;
				case 3:
					return 40;
					break;
				default:
					if (VEHICLE::GET_NUM_VEHICLE_MODS(iParam2, iParam1) >= iParam0)
					{
						return 41;
					}
					break;
			}
			break;
		case 15:
			switch (iParam0)
			{
				case 0:
					return -1;
					break;
				case 1:
					return 81;
					break;
				case 2:
					return 82;
					break;
				case 3:
					return 83;
					break;
				case 4:
					return 84;
					break;
				default:
					if (VEHICLE::GET_NUM_VEHICLE_MODS(iParam2, iParam1) >= iParam0)
					{
						if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
						{
							return 105;
						}
						else
						{
							return 84;
						}
					}
					break;
			}
			break;
		case 8:
			switch (iParam0)
			{
				case 0:
					return -1;
					break;
				case 1:
					return 91;
					break;
				case 2:
					return 92;
					break;
				case 3:
					return 93;
					break;
				default:
					return 94;
					break;
			}
			break;
		case 9:
			switch (iParam0)
			{
				case 0:
					return -1;
					break;
				case 1:
					return 95;
					break;
				case 2:
					return 96;
					break;
				case 3:
					return 97;
					break;
				default:
					return 98;
					break;
			}
			break;
	}
	return -1;
}

int func_213(int iParam0)//Position - 0x137E13
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		if ((((((((((((((((ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("avarus") || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("chimera")) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("daemon2")) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("defiler")) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("esskey")) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("nightblade")) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("ratbike")) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("zombiea")) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("zombieb")) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("sanctus")) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("manchez")) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("vortex")) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("wolfsbane")) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("faggio3")) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("faggio")) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("hakuchou2")) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("blazer4"))
		{
			return 1;
		}
	}
	return 0;
}

bool func_214(int iParam0, var uParam1)//Position - 0x138034
{
	*uParam1 = -1;
	switch (iParam0)
	{
		case 84:
			*uParam1 = 0;
			break;
	}
	return *uParam1 != -1;
}

bool func_215(int iParam0, var uParam1)//Position - 0x138059
{
	*uParam1 = -1;
	switch (iParam0)
	{
		case 81:
			*uParam1 = 0;
			break;
		case 82:
			*uParam1 = 1;
			break;
		case 83:
			*uParam1 = 2;
			break;
		case 32:
			*uParam1 = 3;
			break;
		case 91:
			*uParam1 = 4;
			break;
	}
	return *uParam1 != -1;
}

bool func_216(int iParam0, var uParam1)//Position - 0x1380B2
{
	*uParam1 = -1;
	switch (iParam0)
	{
		case 1:
			*uParam1 = 0;
			break;
		case 77:
			*uParam1 = 1;
			break;
		case 78:
			*uParam1 = 2;
			break;
		case 75:
			*uParam1 = 3;
			break;
		case 48:
			*uParam1 = 4;
			break;
		case 46:
			*uParam1 = 5;
			break;
		case 44:
			*uParam1 = 6;
			break;
		case 72:
			*uParam1 = 7;
			break;
		case 70:
			*uParam1 = 8;
			break;
		case 15:
			*uParam1 = 9;
			break;
		case 79:
			*uParam1 = 10;
			break;
		case 30:
			*uParam1 = 11;
			break;
		case 34:
			*uParam1 = 12;
			break;
		case 43:
			*uParam1 = 13;
			break;
		case 80:
			*uParam1 = 14;
			break;
		case 87:
			*uParam1 = 15;
			break;
		case 88:
			*uParam1 = 16;
			break;
		case 86:
			*uParam1 = 17;
			break;
		case 89:
			*uParam1 = 18;
			break;
		case 90:
			*uParam1 = 19;
			break;
	}
	return *uParam1 != -1;
}

bool func_217(int iParam0, var uParam1)//Position - 0x1381DA
{
	*uParam1 = -1;
	switch (iParam0)
	{
		case 1:
			*uParam1 = 0;
			break;
		case 2:
			*uParam1 = 1;
			break;
		case 3:
			*uParam1 = 2;
			break;
		case 4:
			*uParam1 = 3;
			break;
		case 5:
			*uParam1 = 4;
			break;
		case 6:
			*uParam1 = 5;
			break;
		case 8:
			*uParam1 = 6;
			break;
		case 9:
			*uParam1 = 7;
			break;
		case 10:
			*uParam1 = 8;
			break;
		case 11:
			*uParam1 = 9;
			break;
		case 12:
			*uParam1 = 10;
			break;
		case 13:
			*uParam1 = 11;
			break;
		case 14:
			*uParam1 = 12;
			break;
		case 15:
			*uParam1 = 13;
			break;
		case 16:
			*uParam1 = 14;
			break;
		case 17:
			*uParam1 = 15;
			break;
		case 18:
			*uParam1 = 16;
			break;
		case 19:
			*uParam1 = 17;
			break;
		case 20:
			*uParam1 = 18;
			break;
		case 21:
			*uParam1 = 19;
			break;
		case 22:
			*uParam1 = 20;
			break;
		case 24:
			*uParam1 = 21;
			break;
		case 23:
			*uParam1 = 22;
			break;
		case 25:
			*uParam1 = 23;
			break;
		case 26:
			*uParam1 = 24;
			break;
		case 27:
			*uParam1 = 25;
			break;
		case 28:
			*uParam1 = 26;
			break;
		case 29:
			*uParam1 = 27;
			break;
		case 30:
			*uParam1 = 28;
			break;
		case 31:
			*uParam1 = 29;
			break;
		case 32:
			*uParam1 = 30;
			break;
		case 33:
			*uParam1 = 31;
			break;
		case 34:
			*uParam1 = 32;
			break;
		case 35:
			*uParam1 = 33;
			break;
		case 85:
			*uParam1 = 34;
			break;
		case 37:
			*uParam1 = 35;
			break;
		case 38:
			*uParam1 = 36;
			break;
		case 39:
			*uParam1 = 37;
			break;
		case 40:
			*uParam1 = 38;
			break;
		case 41:
			*uParam1 = 39;
			break;
		case 42:
			*uParam1 = 40;
			break;
		case 43:
			*uParam1 = 41;
			break;
		case 44:
			*uParam1 = 42;
			break;
		case 45:
			*uParam1 = 43;
			break;
		case 46:
			*uParam1 = 44;
			break;
		case 47:
			*uParam1 = 45;
			break;
		case 48:
			*uParam1 = 46;
			break;
		case 49:
			*uParam1 = 47;
			break;
		case 50:
			*uParam1 = 48;
			break;
		case 51:
			*uParam1 = 49;
			break;
		case 52:
			*uParam1 = 50;
			break;
		case 53:
			*uParam1 = 51;
			break;
		case 54:
			*uParam1 = 52;
			break;
		case 55:
			*uParam1 = 53;
			break;
		case 56:
			*uParam1 = 54;
			break;
		case 57:
			*uParam1 = 55;
			break;
		case 58:
			*uParam1 = 56;
			break;
		case 59:
			*uParam1 = 57;
			break;
		case 60:
			*uParam1 = 58;
			break;
		case 61:
			*uParam1 = 59;
			break;
		case 62:
			*uParam1 = 60;
			break;
		case 63:
			*uParam1 = 61;
			break;
		case 64:
			*uParam1 = 62;
			break;
		case 65:
			*uParam1 = 63;
			break;
		case 66:
			*uParam1 = 64;
			break;
		case 67:
			*uParam1 = 65;
			break;
		case 68:
			*uParam1 = 66;
			break;
		case 69:
			*uParam1 = 67;
			break;
		case 70:
			*uParam1 = 68;
			break;
		case 71:
			*uParam1 = 69;
			break;
		case 72:
			*uParam1 = 70;
			break;
		case 73:
			*uParam1 = 71;
			break;
		case 74:
			*uParam1 = 72;
			break;
		case 75:
			*uParam1 = 73;
			break;
		case 76:
			*uParam1 = 74;
			break;
	}
	return *uParam1 != -1;
}

int func_218(char* sParam0)//Position - 0x13899D
{
	int iVar0;
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	if (!HUD::DOES_TEXT_LABEL_EXIST(sParam0))
	{
		return 0;
	}
	iVar0 = MISC::GET_HASH_KEY(sParam0);
	switch (iVar0)
	{
		case joaat("BLACK"):
			return 1;
			break;
		case joaat("BLACK_GRAPHITE"):
			return 2;
			break;
		case joaat("GRAPHITE"):
			return 3;
			break;
		case joaat("ANTHR_BLACK"):
			return 4;
			break;
		case joaat("BLACK_STEEL"):
			return 5;
			break;
		case joaat("DARK_SILVER"):
			return 6;
			break;
		case joaat("SILVER_STEEL"):
			return 7;
			break;
		case joaat("SILVER"):
			return 8;
			break;
		case joaat("BLUE_SILVER"):
			return 9;
			break;
		case joaat("ROLLED_STEEL"):
			return 10;
			break;
		case joaat("SHADOW_SILVER"):
			return 11;
			break;
		case joaat("STONE_SILVER"):
			return 12;
			break;
		case joaat("MIDNIGHT_SILVER"):
			return 13;
			break;
		case joaat("CAST_IRON_SIL"):
			return 14;
			break;
		case joaat("RED"):
			return 15;
			break;
		case joaat("TORINO_RED"):
			return 16;
			break;
		case joaat("FORMULA_RED"):
			return 17;
			break;
		case joaat("LAVA_RED"):
			return 18;
			break;
		case joaat("BLAZE_RED"):
			return 19;
			break;
		case joaat("GRACE_RED"):
			return 20;
			break;
		case joaat("GARNET_RED"):
			return 21;
			break;
		case joaat("SUNSET_RED"):
			return 22;
			break;
		case joaat("WINE_RED"):
			return 23;
			break;
		case joaat("CABERNET_RED"):
			return 24;
			break;
		case joaat("CANDY_RED"):
			return 25;
			break;
		case joaat("HOT PINK"):
			return 26;
			break;
		case joaat("PINK"):
			return 27;
			break;
		case joaat("SALMON_PINK"):
			return 28;
			break;
		case joaat("SUNRISE_ORANGE"):
			return 29;
			break;
		case joaat("ORANGE"):
			return 30;
			break;
		case joaat("BRIGHT_ORANGE"):
			return 31;
			break;
		case joaat("GOLD"):
			return 32;
			break;
		case joaat("BRONZE"):
			return 33;
			break;
		case joaat("YELLOW"):
			return 34;
			break;
		case joaat("RACE_YELLOW"):
			return 35;
			break;
		case joaat("RACE_YELLOW1"):
			return 36;
			break;
		case joaat("DARK_GREEN"):
			return 37;
			break;
		case joaat("RACING_GREEN"):
			return 38;
			break;
		case joaat("SEA_GREEN"):
			return 39;
			break;
		case joaat("OLIVE_GREEN"):
			return 40;
			break;
		case joaat("BRIGHT_GREEN"):
			return 41;
			break;
		case joaat("PETROL_GREEN"):
			return 42;
			break;
		case joaat("LIME_GREEN"):
			return 43;
			break;
		case joaat("MIDNIGHT_BLUE"):
			return 44;
			break;
		case joaat("GALAXY_BLUE"):
			return 45;
			break;
		case joaat("DARK_BLUE"):
			return 46;
			break;
		case joaat("SAXON_BLUE"):
			return 47;
			break;
		case joaat("BLUE"):
			return 48;
			break;
		case joaat("MARINER_BLUE"):
			return 49;
			break;
		case joaat("HARBOR_BLUE"):
			return 50;
			break;
		case joaat("DIAMOND_BLUE"):
			return 51;
			break;
		case joaat("SURF_BLUE"):
			return 52;
			break;
		case joaat("NAUTICAL_BLUE"):
			return 53;
			break;
		case joaat("RACING_BLUE"):
			return 54;
			break;
		case joaat("ULTRA_BLUE"):
			return 55;
			break;
		case joaat("LIGHT_BLUE"):
			return 56;
			break;
		case joaat("CHOCOLATE_BROWN"):
			return 57;
			break;
		case joaat("BISON_BROWN"):
			return 58;
			break;
		case joaat("CREEK_BROWN"):
			return 59;
			break;
		case joaat("UMBER_BROWN"):
			return 60;
			break;
		case joaat("MAPLE_BROWN"):
			return 61;
			break;
		case joaat("BEECHWOOD_BROWN"):
			return 62;
			break;
		case joaat("SIENNA_BROWN"):
			return 63;
			break;
		case joaat("SADDLE_BROWN"):
			return 64;
			break;
		case joaat("MOSS_BROWN"):
			return 65;
			break;
		case joaat("WOODBEECH_BROWN"):
			return 66;
			break;
		case joaat("STRAW_BROWN"):
			return 67;
			break;
		case joaat("SANDY_BROWN"):
			return 68;
			break;
		case joaat("BLEECHED_BROWN"):
			return 69;
			break;
		case joaat("PURPLE"):
			return 70;
			break;
		case joaat("SPIN_PURPLE"):
			return 71;
			break;
		case joaat("MIGHT_PURPLE"):
			return 72;
			break;
		case joaat("BRIGHT_PURPLE"):
			return 73;
			break;
		case joaat("CREAM"):
			return 74;
			break;
		case joaat("WHITE"):
			return 75;
			break;
		case joaat("FROST_WHITE"):
			return 76;
			break;
		case joaat("GREY"):
			return 77;
			break;
		case joaat("LIGHT_GREY"):
			return 78;
			break;
		case joaat("DARK_RED"):
			return 79;
			break;
		case joaat("GREEN"):
			return 80;
			break;
		case joaat("BR_STEEL"):
			return 81;
			break;
		case joaat("BR BLACK_STEEL"):
			return 82;
			break;
		case joaat("BR_ALUMINIUM"):
			return 83;
			break;
		case joaat("CHROME"):
			return 84;
			break;
		case joaat("FLUR_YELLOW"):
			return 85;
			break;
		case joaat("MATTE_OD"):
			return 86;
			break;
		case joaat("MATTE_FOR"):
			return 87;
			break;
		case joaat("MATTE_FOIL"):
			return 88;
			break;
		case joaat("MATTE_DESERT"):
			return 89;
			break;
		case joaat("MATTE_DIRT"):
			return 90;
			break;
		case joaat("GOLD_S"):
			return 91;
			break;
		case joaat("GOLD_P"):
			return 32;
			break;
	}
	return 0;
}

int func_219(char* sParam0, bool bParam1)//Position - 0x138ED1
{
	if (ENTITY::DOES_ENTITY_EXIST(Local_124.f_406) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_124.f_406, false))
	{
		if (bParam1)
		{
			StringCopy(sParam0, VEHICLE::GET_VEHICLE_MOD_COLOR_1_NAME(Local_124.f_406, false), 16);
		}
		else
		{
			StringCopy(sParam0, VEHICLE::GET_VEHICLE_MOD_COLOR_2_NAME(Local_124.f_406), 16);
		}
		if (MISC::GET_HASH_KEY(sParam0) != 0)
		{
			return 1;
		}
	}
	return 0;
}

void func_220(int iParam0)//Position - 0x138F2A
{
	if (*iParam0 > 122)
	{
		*iParam0 = 122;
	}
}

int func_221()//Position - 0x139ECF
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 0;
	}
	if (Local_124.f_0 == 44)
	{
		return 0;
	}
	if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(Local_124.f_406)))
	{
		return 0;
	}
	if (__LIB_1__::func_926(ENTITY::GET_ENTITY_MODEL(Local_124.f_406)))
	{
		return 0;
	}
	return 1;
}

void func_222(int iParam0, bool bParam1)//Position - 0x139FDF
{
	if (bParam1)
	{
		MISC::SET_BIT(&(Local_124.f_447[(iParam0 / 32)]), (iParam0 % 32));
	}
	else
	{
		MISC::CLEAR_BIT(&(Local_124.f_447[(iParam0 / 32)]), (iParam0 % 32));
	}
}

void func_223(int iParam0, var uParam1)//Position - 0x13A2E7
{
	Global_102587[iParam0] = uParam1;
}

void func_224()//Position - 0x13A2F9
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 123)
	{
		Global_102587[iVar0] = -1;
		iVar0++;
	}
}

void func_225(struct<103> Param0, int iParam1)//Position - 0x13ACBC
{
	if (iParam1 >= 0 && iParam1 < 4)
	{
		Global_1835008[iParam1 /*103*/] = { Param0 };
	}
}

int func_226()//Position - 0x13B151
{
	int iVar0;
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(1, 101);
	if (iVar0 <= 25)
	{
		return Global_262145.f_32598 /* Tunable: -1475506624 */;
	}
	else if (iVar0 <= 50)
	{
		return Global_262145.f_32599 /* Tunable: -1210307107 */;
	}
	else if (iVar0 <= 75)
	{
		return Global_262145.f_32600 /* Tunable: -977745514 */;
	}
	return Global_262145.f_32601 /* Tunable: 1103872446 */;
}

void func_227(int iParam0, int iParam1)//Position - 0x13B347
{
	switch (iParam0)
	{
		case 0:
			__LIB_1__::func_39(30511, iParam1, -1);
			break;
		case 1:
			__LIB_1__::func_39(30512, iParam1, -1);
			break;
	}
}

int func_228(int iParam0)//Position - 0x13B37C
{
	switch (iParam0)
	{
		case joaat("weevil"):
			return 1;
		case joaat("brioso2"):
			return 1;
		case joaat("rhapsody"):
			return 1;
		case joaat("club"):
			return 1;
		case joaat("issi3"):
			return 1;
		case joaat("nebula"):
			return 1;
		case joaat("dynasty"):
			return 1;
		case joaat("fagaloa"):
			return 1;
		case joaat("futo"):
			return 1;
		case joaat("asbo"):
			return 1;
		case joaat("sentinel"):
			return 2;
		case joaat("dominator3"):
			return 2;
		case joaat("vamos"):
			return 2;
		case joaat("hermes"):
			return 2;
		case joaat("coquette3"):
			return 2;
		case joaat("riata"):
			return 2;
		case joaat("everon"):
			return 2;
		case joaat("glendale2"):
			return 2;
		case joaat("schafter3"):
			return 2;
		case joaat("warrener"):
			return 2;
		case joaat("primo2"):
			return 2;
		case joaat("seminole2"):
			return 2;
		case joaat("rebla"):
			return 2;
		case joaat("swinger"):
			return 2;
		case joaat("flashgt"):
			return 2;
		case joaat("raiden"):
			return 2;
		case joaat("surano"):
			return 2;
		case joaat("penumbra2"):
			return 2;
		case joaat("vstr"):
			return 2;
		case joaat("jugular"):
			return 2;
		case joaat("toros"):
			return 3;
		case joaat("entity2"):
			return 3;
		case joaat("tempesta"):
			return 3;
		case joaat("thrax"):
			return 3;
		case joaat("sc1"):
			return 3;
		case joaat("gp1"):
			return 3;
		case joaat("cheetah2"):
			return 3;
		case joaat("neo"):
			return 3;
		case joaat("comet2"):
			return 3;
		case joaat("paragon"):
			return 3;
		default:
	}
	return 0;
}

int func_229(int iParam0)//Position - 0x13B51C
{
	if (iParam0 < 0 || iParam0 >= 2)
	{
		return 0;
	}
	return Global_2789409[iParam0];
}

void func_230(int iParam0, var uParam1, var uParam2)//Position - 0x13B5C8
{
	*uParam1 = 0;
	*uParam2 = 0;
	switch (iParam0)
	{
		case 0:
			*uParam1 = 100;
			*uParam2 = 100;
			break;
		case 1:
			*uParam1 = 61;
			*uParam2 = 90;
			break;
		case 2:
			*uParam1 = 41;
			*uParam2 = 60;
			break;
		case 3:
			*uParam1 = 30;
			*uParam2 = 40;
			break;
	}
}

float func_231(int iParam0)//Position - 0x13B62B
{
	float fVar0;
	fVar0 = 0f;
	switch (iParam0)
	{
		case 0:
			fVar0 = Global_262145.f_31127 /* Tunable: -1478504584 */;
			break;
		case 1:
			fVar0 = Global_262145.f_31128 /* Tunable: -1335847969 */;
			break;
		case 2:
			fVar0 = Global_262145.f_31129 /* Tunable: -995337040 */;
			break;
		case 3:
			fVar0 = Global_262145.f_31130 /* Tunable: 771613533 */;
			break;
	}
	return fVar0;
}

void func_232(int iParam0, int iParam1)//Position - 0x13B70F
{
	switch (iParam0)
	{
		case 1:
			switch (iParam1)
			{
				case 0:
					if (!BitTest(Global_1946250.f_9, 6))
					{
						MISC::SET_BIT(&(Global_1946250.f_9), 6);
					}
					break;
				case 1:
					if (!BitTest(Global_1946250.f_9, 7))
					{
						MISC::SET_BIT(&(Global_1946250.f_9), 7);
					}
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					if (!BitTest(Global_1946250.f_9, 8))
					{
						MISC::SET_BIT(&(Global_1946250.f_9), 8);
					}
					break;
				case 1:
					if (!BitTest(Global_1946250.f_9, 9))
					{
						MISC::SET_BIT(&(Global_1946250.f_9), 9);
					}
					break;
			}
			break;
	}
}

int func_233(int iParam0)//Position - 0x13B839
{
	switch (iParam0)
	{
		case 0:
			return 30509;
		case 1:
			return 30510;
		default:
	}
	return 30509;
}

void func_234(bool bParam0)//Position - 0x13B863
{
	if (!bParam0)
	{
		if (BitTest(Global_103317, 2))
		{
			MISC::CLEAR_BIT(&Global_103317, 2);
		}
	}
	else if (!BitTest(Global_103317, 2))
	{
		MISC::SET_BIT(&Global_103317, 2);
	}
}

void func_235(int iParam0)//Position - 0x13B899
{
	if (Global_103316 != iParam0)
	{
		Global_103316 = iParam0;
	}
}

int func_236(int iParam0)//Position - 0x13B9CC
{
	int iVar0;
	if (iParam0 < 0 || iParam0 >= 2)
	{
		iVar0 = 0;
		return iVar0;
	}
	iVar0 = Global_2789412[iParam0 /*106*/].f_66;
	return iVar0;
}

int func_237()//Position - 0x13BAD1
{
	int iVar0;
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(1, 101);
	if (iVar0 <= 25)
	{
		return Global_262145.f_31136 /* Tunable: 267785185 */;
	}
	else if (iVar0 <= 50)
	{
		return Global_262145.f_31137 /* Tunable: -1880058920 */;
	}
	else if (iVar0 <= 75)
	{
		return Global_262145.f_31138 /* Tunable: -1582287017 */;
	}
	return Global_262145.f_31139 /* Tunable: 1937627891 */;
}

bool func_238()//Position - 0x13BB71
{
	return BitTest(Global_103317, 1);
}

int func_239()//Position - 0x13C0F1
{
	return Global_103316;
}

char* func_240(int iParam0)//Position - 0x13C89C
{
	switch (iParam0)
	{
		case 0:
			return "REPRAIR";
			break;
		case 1:
			return "ARMOUR";
			break;
		case 2:
			return "BRAKE";
			break;
		case 34:
			return "BUMPER_F";
			break;
		case 35:
			return "BUMPER_R";
			break;
		case 4:
			return "CHASSIS";
			break;
		case 5:
			return "ENGINE";
			break;
		case 6:
			return "EXHAUST";
			break;
		case 36:
			return "FENDER_L";
			break;
		case 37:
			return "FENDER_R";
			break;
		case 8:
			return "GRILL";
			break;
		case 9:
			return "HOOD";
			break;
		case 10:
			return "HORN";
			break;
		case 11:
			return "HLIGHT";
			break;
		case 12:
			return "ROOF";
			break;
		case 13:
			return "SKIRT";
			break;
		case 14:
			return "SPOILER";
			break;
		case 15:
			return "SUSPENSION";
			break;
		case 16:
			return "TRANS";
			break;
		case 17:
			return "TURBO";
			break;
		case 18:
			return "T_SMOKE";
			break;
		case 19:
			return "WHEEL";
			break;
		case 20:
			return "EXPLOSIVE";
			break;
		case 21:
			return "NLIGHT";
			break;
		case 22:
			return "INSURANCE";
			break;
		case 23:
			return "PLATE";
			break;
		case 24:
			return "R_PRIMARY";
			break;
		case 25:
			return "R_SECONDARY";
			break;
		case 26:
			return "R_LIVERY";
			break;
		case 39:
			return "R_LIVERY2";
			break;
		case 27:
			return "R_CREW";
			break;
		case 28:
			return "TRACKER";
			break;
		case 29:
			return "W_COLOUR";
			break;
		case 30:
			return "T_BULLETP";
			break;
		case 31:
			return "T_STOCK";
			break;
		case 32:
			return "T_CUSTOM";
			break;
		case 33:
			return "W_TINT";
			break;
		case 41:
			return "SUPERMOD_0";
			break;
		case 42:
			return "SUPERMOD_1";
			break;
		case 43:
			return "SUPERMOD_2";
			break;
		case 44:
			return "SUPERMOD_3";
			break;
		case 45:
			return "SUPERMOD_4";
			break;
		case 46:
			return "SUPERMOD_5";
			break;
		case 47:
			return "SUPERMOD_6";
			break;
		case 48:
			return "SUPERMOD_7";
			break;
		case 49:
			return "SUPERMOD_8";
			break;
		case 50:
			return "SUPERMOD_9";
			break;
		case 51:
			return "SUPERMOD_10";
			break;
		case 52:
			return "SUPERMOD_11";
			break;
		case 53:
			return "SUPERMOD_12";
			break;
		case 54:
			return "SUPERMOD_13";
			break;
		case 55:
			return "SUPERMOD_14";
			break;
		case 56:
			return "SUPERMOD_15";
			break;
		case 57:
			return "SUPERMOD_16";
			break;
		case 58:
			return "SUPERMOD_17";
			break;
		case 59:
			return "SUPERMOD_18";
			break;
		case 60:
			return "SUPERMOD_19";
			break;
		case 61:
			return "SUPERMOD_20";
			break;
		case 62:
			return "SUPERMOD_21";
			break;
		case 63:
			return "SUPERMOD_22";
			break;
		case 64:
			return "SUPERMOD_23";
			break;
	}
	return "DUMM";
}

int func_241()//Position - 0x13CCBD
{
	switch (MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()))
	{
		case joaat("carmod_shop"):
		case joaat("personal_carmod_shop"):
		case joaat("hangar_carmod"):
		case joaat("base_carmod"):
		case joaat("armory_aircraft_carmod"):
		case joaat("business_hub_carmod"):
		case joaat("hacker_truck_carmod"):
		case joaat("arena_carmod"):
		case joaat("fmmc_launcher"):
		case joaat("tuner_property_carmod"):
		case joaat("car_meet_carmod"):
		case joaat("fixer_hq_carmod"):
			return 1;
			break;
	}
	return 0;
}

int func_242(int iParam0)//Position - 0x13D2E2
{
	return Global_113386.f_24904[iParam0 /*4*/];
}

char* func_243(int iParam0)//Position - 0x140B31
{
	switch (iParam0)
	{
		case 25:
			return "LR_UPGRADE_PLATEHOLDER";
			break;
		case 26:
			return "LR_SELL_VANITYPLATE";
			break;
		case 27:
			return "LR_SELL_SUPERMOD_INTERIOR";
			break;
		case 28:
			return "LR_SELL_DOLL";
			break;
		case 29:
			return "LR_SELL_SUPERMOD_INTERIOR";
			break;
		case 30:
			return "LR_SELL_SUPERMOD_INTERIOR";
			break;
		case 31:
			return "LR_SELL_SUPERMOD_INTERIOR";
			break;
		case 32:
			return "LR_UPGRADE_GENERIC";
			break;
		case 33:
			return "LR_UPGRADE_WHEEL";
			break;
		case 34:
			return "LR_UPGRADE_GEARKNOB";
			break;
		case 35:
			return "LR_UPGRADE_PLAQUE";
			break;
		case 36:
			return "LR_UPGRADE_ICE";
			break;
		case 37:
			return "LR_UPGRADE_TRUNK";
			break;
		case 38:
			return "LR_UPGRADE_HYDRAULICS";
			break;
		case 39:
			if (VEHICLE::IS_VEHICLE_MODEL(Local_124.f_406, joaat("gauntlet5")))
			{
				return "LR_UPGRADE_GENERIC";
			}
			else
			{
				return "LR_UPGRADE_ENGINE";
			}
			break;
		case 40:
			return "LR_UPGRADE_ENGINE";
			break;
		case 41:
			return "LR_UPGRADE_ENGINE";
			break;
		case 42:
			return "LR_SELL_EXCHASSIS_MOD";
			break;
		case 43:
			return "LR_SELL_EXCHASSIS_MOD";
			break;
		case 44:
			return "LR_SELL_EXCHASSIS_MOD";
			break;
		case 45:
			return "LR_SELL_EXCHASSIS_MOD";
			break;
		case 46:
			return "LR_UPGRADE_GENERIC";
			break;
		case 47:
			return "LR_UPGRADE_GENERIC";
			break;
		case 48:
			return "LR_SELL_LIVERY";
			break;
	}
	return "";
}

int func_244(int iParam0)//Position - 0x140E5C
{
	switch (iParam0)
	{
		case 0:
			return 14;
			break;
		case 1:
			return 34;
			break;
		case 2:
			return 35;
			break;
		case 3:
			return 13;
			break;
		case 4:
			return 6;
			break;
		case 5:
			return 4;
			break;
		case 6:
			return 8;
			break;
		case 7:
			return 9;
			break;
		case 8:
			return 36;
			break;
		case 9:
			return 37;
			break;
		case 10:
			return 12;
			break;
		case 11:
			return 5;
			break;
		case 12:
			return 2;
			break;
		case 13:
			return 16;
			break;
		case 14:
			return 10;
			break;
		case 15:
			return 15;
			break;
		case 16:
			return 1;
			break;
		case 18:
			return 17;
			break;
		case 20:
			return 18;
			break;
		case 22:
			return 11;
			break;
		case 23:
			return 19;
			break;
		case 24:
			return 19;
			break;
		case 25:
			return 41;
			break;
		case 26:
			return 42;
			break;
		case 27:
			return 43;
			break;
		case 28:
			return 44;
			break;
		case 29:
			return 45;
			break;
		case 30:
			return 46;
			break;
		case 31:
			return 47;
			break;
		case 32:
			return 48;
			break;
		case 33:
			return 49;
			break;
		case 34:
			return 50;
			break;
		case 35:
			return 51;
			break;
		case 36:
			return 52;
			break;
		case 37:
			return 53;
			break;
		case 38:
			return 54;
			break;
		case 39:
			return 55;
			break;
		case 40:
			return 56;
			break;
		case 41:
			return 57;
			break;
		case 42:
			return 58;
			break;
		case 43:
			return 59;
			break;
		case 44:
			return 60;
			break;
		case 45:
			return 61;
			break;
		case 46:
			return 62;
			break;
		case 47:
			return 63;
			break;
		case 48:
			return 64;
			break;
	}
	return 67;
}

int func_245(int iParam0)//Position - 0x142909
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		switch (ENTITY::GET_ENTITY_MODEL(iParam0))
		{
			case joaat("autarch"):
			case joaat("gauntlet5"):
			case joaat("weevil"):
			case joaat("zr350"):
			case joaat("remus"):
			case joaat("rt3000"):
			case joaat("previon"):
				return 1;
			}
		default:
	}
	return 0;
}

int func_246(int iParam0)//Position - 0x142955
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("btype3"))
		{
			return 1;
		}
	}
	return 0;
}

int func_247(int iParam0)//Position - 0x14297A
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		if ((ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("tornado") || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("tornado2")) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("tornado5"))
		{
			return 1;
		}
	}
	return 0;
}

int func_248(int iParam0)//Position - 0x142A0E
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		switch (ENTITY::GET_ENTITY_MODEL(iParam0))
		{
			case joaat("bodhi2"):
			case joaat("ratloader"):
			case joaat("ratloader2"):
			case joaat("manana"):
			case joaat("peyote"):
			case joaat("feltzer2"):
			case joaat("coquette"):
			case joaat("tailgater"):
			case joaat("massacro"):
			case joaat("osiris"):
			case joaat("chino"):
			case joaat("virgo"):
			case joaat("buccaneer2"):
			case joaat("chino2"):
			case joaat("verlierer2"):
			case joaat("banshee2"):
			case joaat("sultanrs"):
			case joaat("ardent"):
			case joaat("nightshark"):
			case joaat("retinue"):
			case joaat("savestra"):
			case joaat("comet4"):
			case joaat("comet5"):
			case joaat("hermes"):
			case joaat("dominator3"):
			case joaat("jester3"):
			case joaat("seminole2"):
			case joaat("calico"):
			case joaat("comet7"):
				return 1;
				break;
			}
	}
	return 0;
}

int func_249(int iParam0)//Position - 0x142AE1
{
	switch (iParam0)
	{
		case joaat("freecrawler"):
		case joaat("yosemite3"):
		case joaat("seminole2"):
		case joaat("granger2"):
			return 1;
			break;
	}
	return 0;
}

int func_250(int iParam0)//Position - 0x142B10
{
	switch (iParam0)
	{
		case joaat("gauntlet5"):
		case default:
	}
	return 0;
	return 0;
}

void func_251()//Position - 0x142B2D
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Local_124.f_447)
	{
		Local_124.f_447[iVar0] = (Local_124.f_447[iVar0] && Global_102577[iVar0] ^ -1);
		iVar0++;
	}
}

int func_252(int iParam0)//Position - 0x14357E
{
	switch (iParam0)
	{
		case joaat("banshee"):
		case joaat("stinger"):
		case joaat("coquette2"):
		case joaat("coquette3"):
		case joaat("banshee2"):
		case joaat("contender"):
		case joaat("kamacho"):
			return 1;
			break;
		case joaat("chino"):
		case joaat("voltic"):
		case joaat("coquette"):
		case joaat("stalion"):
		case joaat("chino2"):
		case joaat("faction"):
		case joaat("faction2"):
		case joaat("faction3"):
		case joaat("mamba"):
		case joaat("pfister811"):
			return 2;
			break;
		case joaat("buccaneer2"):
		case joaat("peyote2"):
		case joaat("peyote3"):
		case joaat("manana2"):
			return 3;
			break;
		default:
			if (__LIB_9__::func_238(iParam0))
			{
				return 4;
			}
			break;
	}
	return 0;
}

int func_253(int iParam0, int iParam1, int iParam2)//Position - 0x1495DF
{
	int iVar0;
	if (iParam2 == 85)
	{
		iVar0 = __LIB_0__::func_714(joaat("MPPLY_XMASLIVERIES19"));
		switch (iParam1)
		{
			case joaat("PREV_LIV11"):
				switch (iParam0)
				{
					case joaat("previon"):
						if (!BitTest(Global_262145.f_23105 /* Tunable: VEHXMAS_CAMO25 */, 6) && !BitTest(iVar0, 6))
						{
							return 1;
						}
						break;
				}
				break;
			case joaat("PREV_LIV12"):
				switch (iParam0)
				{
					case joaat("previon"):
						if (!BitTest(Global_262145.f_23105 /* Tunable: VEHXMAS_CAMO25 */, 7) && !BitTest(iVar0, 7))
						{
							return 1;
						}
						break;
				}
				break;
			case joaat("PREV_LIV13"):
				switch (iParam0)
				{
					case joaat("previon"):
						if (!BitTest(Global_262145.f_23105 /* Tunable: VEHXMAS_CAMO25 */, 8) && !BitTest(iVar0, 8))
						{
							return 1;
						}
						break;
				}
				break;
			case joaat("PREV_LIV14"):
				switch (iParam0)
				{
					case joaat("previon"):
						if (!BitTest(Global_262145.f_23105 /* Tunable: VEHXMAS_CAMO25 */, 9) && !BitTest(iVar0, 9))
						{
							return 1;
						}
						break;
				}
				break;
			case joaat("PREV_LIV15"):
				switch (iParam0)
				{
					case joaat("previon"):
						if (!BitTest(Global_262145.f_23105 /* Tunable: VEHXMAS_CAMO25 */, 10) && !BitTest(iVar0, 10))
						{
							return 1;
						}
						break;
				}
				break;
			case joaat("SULTAN3_LIV11"):
				switch (iParam0)
				{
					case joaat("sultan3"):
						if (!BitTest(Global_262145.f_23105 /* Tunable: VEHXMAS_CAMO25 */, 11) && !BitTest(iVar0, 11))
						{
							return 1;
						}
						break;
				}
				break;
			case joaat("SULTAN3_LIV12"):
				switch (iParam0)
				{
					case joaat("sultan3"):
						if (!BitTest(Global_262145.f_23105 /* Tunable: VEHXMAS_CAMO25 */, 12) && !BitTest(iVar0, 12))
						{
							return 1;
						}
						break;
				}
				break;
			case joaat("SULTAN3_LIV13"):
				switch (iParam0)
				{
					case joaat("sultan3"):
						if (!BitTest(Global_262145.f_23105 /* Tunable: VEHXMAS_CAMO25 */, 13) && !BitTest(iVar0, 13))
						{
							return 1;
						}
						break;
				}
				break;
			case joaat("SULTAN3_LIV14"):
				switch (iParam0)
				{
					case joaat("sultan3"):
						if (!BitTest(Global_262145.f_23105 /* Tunable: VEHXMAS_CAMO25 */, 14) && !BitTest(iVar0, 14))
						{
							return 1;
						}
						break;
				}
				break;
			case joaat("SULTAN3_LIV15"):
				switch (iParam0)
				{
					case joaat("sultan3"):
						if (!BitTest(Global_262145.f_23105 /* Tunable: VEHXMAS_CAMO25 */, 15) && !BitTest(iVar0, 15))
						{
							return 1;
						}
						break;
				}
				break;
			case joaat("COMET7_LIV11"):
				switch (iParam0)
				{
					case joaat("comet7"):
						if (!BitTest(Global_262145.f_23105 /* Tunable: VEHXMAS_CAMO25 */, 16) && !BitTest(iVar0, 16))
						{
							return 1;
						}
						break;
				}
				break;
			case joaat("DEITY_LIVERY12"):
				switch (iParam0)
				{
					case joaat("deity"):
						if (!BitTest(Global_262145.f_23105 /* Tunable: VEHXMAS_CAMO25 */, 17) && !BitTest(iVar0, 17))
						{
							return 1;
						}
						break;
				}
				break;
			case joaat("BALL7_LIV_13"):
				switch (iParam0)
				{
					case joaat("baller7"):
						if (!BitTest(Global_262145.f_23105 /* Tunable: VEHXMAS_CAMO25 */, 18) && !BitTest(iVar0, 18))
						{
							return 1;
						}
						break;
				}
				break;
			case joaat("CORSITA_LIV10"):
				switch (iParam0)
				{
					case joaat("corsita"):
						if (!BitTest(Global_262145.f_23105 /* Tunable: VEHXMAS_CAMO25 */, 19) && !BitTest(iVar0, 19))
						{
							return 1;
						}
						break;
				}
				break;
			case joaat("VIGR2_LIV_10"):
				switch (iParam0)
				{
					case joaat("vigero2"):
						if (!BitTest(Global_262145.f_23105 /* Tunable: VEHXMAS_CAMO25 */, 20) && !BitTest(iVar0, 20))
						{
							return 1;
						}
						break;
				}
				break;
			}
	}
	return 0;
}

int func_254(int iParam0)//Position - 0x14995E
{
	switch (iParam0)
	{
		case joaat("peyote2"):
		case joaat("peyote3"):
			return 1;
			break;
		default:
			break;
	}
	return 0;
}

bool func_255(int iParam0, int iParam1)//Position - 0x14A4D5
{
	if (iParam0 == 0)
	{
		return 1;
	}
	switch (iParam1)
	{
		case joaat("indep_horn_1"):
			return iParam0 == 2;
			break;
		case joaat("indep_horn_2"):
			return iParam0 == 2;
			break;
		case joaat("indep_horn_3"):
			return iParam0 == 2;
			break;
		case joaat("indep_horn_4"):
			return iParam0 == 2;
			break;
		case joaat("hipster_horn_1"):
			return iParam0 == 2;
			break;
		case joaat("hipster_horn_2"):
			return iParam0 == 2;
			break;
		case joaat("hipster_horn_3"):
			return iParam0 == 2;
			break;
		case joaat("hipster_horn_4"):
			return iParam0 == 3;
			break;
		case joaat("dlc_busi2_c_major_notes_c0"):
			return iParam0 == 2;
			break;
		case joaat("dlc_busi2_c_major_notes_d0"):
			return iParam0 == 2;
			break;
		case joaat("dlc_busi2_c_major_notes_e0"):
			return iParam0 == 2;
			break;
		case joaat("dlc_busi2_c_major_notes_f0"):
			return iParam0 == 2;
			break;
		case joaat("dlc_busi2_c_major_notes_g0"):
			return iParam0 == 2;
			break;
		case joaat("dlc_busi2_c_major_notes_a0"):
			return iParam0 == 2;
			break;
		case joaat("dlc_busi2_c_major_notes_b0"):
			return iParam0 == 2;
			break;
		case joaat("dlc_busi2_c_major_notes_c1"):
			return iParam0 == 2;
			break;
		case joaat("musical_horn_business_1"):
			return iParam0 == 2;
			break;
		case joaat("musical_horn_business_2"):
			return iParam0 == 2;
			break;
		case joaat("musical_horn_business_3"):
			return iParam0 == 2;
			break;
		case joaat("musical_horn_business_4"):
			return iParam0 == 2;
			break;
		case joaat("musical_horn_business_5"):
			return iParam0 == 2;
			break;
		case joaat("musical_horn_business_6"):
			return iParam0 == 2;
			break;
		case joaat("musical_horn_business_7"):
			return iParam0 == 2;
			break;
		case joaat("luxe_horn_2"):
			return iParam0 == 2;
			break;
		case joaat("luxe_horn_1"):
			return iParam0 == 3;
			break;
		case joaat("luxe_horn_3"):
			return iParam0 == 3;
			break;
		case joaat("luxury_horn_2"):
			return iParam0 == 2;
			break;
		case joaat("luxory_horn_1"):
			return iParam0 == 3;
			break;
		case joaat("luxury_horn_3"):
			return iParam0 == 3;
			break;
		case joaat("LOWRIDER_HORN_1"):
			return iParam0 == 3;
			break;
		case joaat("LOWRIDER_HORN_2"):
			return iParam0 == 3;
			break;
		case joaat("LOWRIDER_HORN_1_PREVIEW"):
			return iParam0 == 3;
			break;
		case joaat("LOWRIDER_HORN_2_PREVIEW"):
			return iParam0 == 3;
			break;
		case joaat("ORGAN_HORN_LOOP_01"):
			return iParam0 == 3;
			break;
		case joaat("ORGAN_HORN_LOOP_02"):
			return iParam0 == 3;
			break;
		case joaat("ORGAN_HORN_LOOP_01_PREVIEW"):
			return iParam0 == 3;
			break;
		case joaat("ORGAN_HORN_LOOP_02_PREVIEW"):
			return iParam0 == 3;
			break;
		case joaat("XM15_HORN_01"):
			return iParam0 == 3;
			break;
		case joaat("XM15_HORN_02"):
			return iParam0 == 3;
			break;
		case joaat("XM15_HORN_03"):
			return iParam0 == 3;
			break;
		case joaat("XM15_HORN_01_PREVIEW"):
			return iParam0 == 3;
			break;
		case joaat("XM15_HORN_02_PREVIEW"):
			return iParam0 == 3;
			break;
		case joaat("XM15_HORN_03_PREVIEW"):
			return iParam0 == 3;
			break;
		case joaat("HORN_CLOWN"):
			return iParam0 == 1;
			break;
		case joaat("HORN_COP"):
			return iParam0 == 1;
			break;
		case joaat("HORN_TRUCK"):
			return iParam0 == 1;
			break;
		case joaat("HORN_MUSICAL_1"):
			return iParam0 == 2;
			break;
		case joaat("HORN_MUSICAL_2"):
			return iParam0 == 2;
			break;
		case joaat("HORN_MUSICAL_3"):
			return iParam0 == 2;
			break;
		case joaat("HORN_MUSICAL_4"):
			return iParam0 == 2;
			break;
		case joaat("HORN_MUSICAL_5"):
			return iParam0 == 2;
			break;
		case joaat("HORN_SAD_TROMBONE"):
			return iParam0 == 2;
			break;
		case joaat("dlc_aw_airhorn_01"):
			return iParam0 == 1;
			break;
		case joaat("dlc_aw_airhorn_02"):
			return iParam0 == 1;
			break;
		case joaat("dlc_aw_airhorn_03"):
			return iParam0 == 1;
			break;
		case joaat("dlc_aw_airhorn_01_preview"):
			return iParam0 == 1;
			break;
		case joaat("dlc_aw_airhorn_02_preview"):
			return iParam0 == 1;
			break;
		case joaat("dlc_aw_airhorn_03_preview"):
			return iParam0 == 1;
			break;
	}
	return iParam0 == 1;
}

int func_256(int iParam0)//Position - 0x14A892
{
	if ((((((((((((iParam0 == __LIB_3__::func_664(joaat("luxory_horn_1")) || iParam0 == __LIB_3__::func_664(joaat("luxury_horn_2"))) || iParam0 == __LIB_3__::func_664(joaat("luxury_horn_3"))) || iParam0 == __LIB_3__::func_664(joaat("LOWRIDER_HORN_1_PREVIEW"))) || iParam0 == __LIB_3__::func_664(joaat("LOWRIDER_HORN_2_PREVIEW"))) || iParam0 == __LIB_3__::func_664(joaat("ORGAN_HORN_LOOP_01_PREVIEW"))) || iParam0 == __LIB_3__::func_664(joaat("ORGAN_HORN_LOOP_02_PREVIEW"))) || iParam0 == __LIB_3__::func_664(joaat("XM15_HORN_01_PREVIEW"))) || iParam0 == __LIB_3__::func_664(joaat("XM15_HORN_02_PREVIEW"))) || iParam0 == __LIB_3__::func_664(joaat("XM15_HORN_03_PREVIEW"))) || iParam0 == __LIB_3__::func_664(joaat("dlc_aw_airhorn_01_preview"))) || iParam0 == __LIB_3__::func_664(joaat("dlc_aw_airhorn_02_preview"))) || iParam0 == __LIB_3__::func_664(joaat("dlc_aw_airhorn_03_preview")))
	{
		return 1;
	}
	return 0;
}

int func_257(var uParam0)//Position - 0x14AAFD
{
	int iVar0;
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 1;
	}
	iVar0 = (uParam0->f_653 - 1);
	return BitTest(uParam0->f_653[iVar0], 30);
}

int func_258(int iParam0)//Position - 0x14AEF2
{
	switch (iParam0)
	{
		case joaat("dominator3"):
		case joaat("speedo4"):
		case joaat("mule4"):
		case joaat("pounder2"):
		case joaat("strikeforce"):
		case joaat("rcbandito"):
		case joaat("jb7002"):
		case joaat("alkonost"):
		case joaat("veto"):
		case joaat("veto2"):
		case joaat("squaddie"):
			return 1;
			break;
		default:
			if (__LIB_1__::func_323(iParam0))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_259(var uParam0)//Position - 0x14B0EC
{
	int iVar0;
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 1;
	}
	iVar0 = (uParam0->f_663 - 1);
	return BitTest(uParam0->f_663[iVar0], 30);
}

int func_260(int iParam0, var uParam1)//Position - 0x14B49B
{
	int iVar0;
	int iVar1;
	if ((iParam0 < 0 || iParam0 > 63) || !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 1;
	}
	iVar0 = (iParam0 % 32);
	iVar1 = (iParam0 / 32);
	return BitTest(uParam1->f_650[iVar1], iVar0);
}

int func_261(int iParam0)//Position - 0x14B70E
{
	int iVar0;
	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = 24;
			break;
		case 1:
			iVar0 = 17;
			break;
		case 2:
			iVar0 = 14;
			break;
		case 3:
			iVar0 = 18;
			break;
		case 4:
			iVar0 = 19;
			break;
		case 5:
			iVar0 = 23;
			break;
		case 6:
			iVar0 = 35;
			break;
		case 7:
			iVar0 = 19;
			break;
		case 12:
		case 11:
			iVar0 = 29;
			break;
		case 8:
		case 9:
		case 10:
			iVar0 = 22;
			break;
	}
	iVar0++;
	return iVar0;
}

int func_262(int iParam0)//Position - 0x14D2F4
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		switch (ENTITY::GET_ENTITY_MODEL(iParam0))
		{
			case joaat("imperator2"):
			case joaat("deathbike2"):
			case joaat("impaler3"):
			case joaat("brutus2"):
			case joaat("bruiser2"):
			case joaat("slamvan5"):
			case joaat("issi5"):
			case joaat("monster4"):
			case joaat("scarab2"):
			case joaat("cerberus2"):
			case joaat("dominator5"):
			case joaat("zr3802"):
				return 1;
				break;
			}
	}
	return 0;
}

int func_263(int iParam0)//Position - 0x14D36C
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		switch (ENTITY::GET_ENTITY_MODEL(iParam0))
		{
			case joaat("imperator3"):
			case joaat("deathbike3"):
			case joaat("impaler4"):
			case joaat("brutus3"):
			case joaat("bruiser3"):
			case joaat("slamvan6"):
			case joaat("issi6"):
			case joaat("monster5"):
			case joaat("scarab3"):
			case joaat("cerberus3"):
			case joaat("dominator6"):
			case joaat("zr3803"):
				return 1;
				break;
			}
	}
	return 0;
}

int func_264(int iParam0, int iParam1)//Position - 0x14EB42
{
	switch (ENTITY::GET_ENTITY_MODEL(iParam0))
	{
		case joaat("slamvan4"):
		case joaat("slamvan5"):
		case joaat("slamvan6"):
		case joaat("deathbike2"):
			if (iParam1 == 23)
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_265(int iParam0, int iParam1, bool bParam2)//Position - 0x14FC69
{
	int iVar0;
	if (PED::IS_PED_IN_VEHICLE(iParam0, iParam1, bParam2))
	{
		iVar0 = ENTITY::GET_ENTITY_MODEL(iParam1);
		if (VEHICLE::IS_THIS_MODEL_A_BOAT(iVar0) || (iVar0 == joaat("submersible") || iVar0 == joaat("submersible2")))
		{
			if (ENTITY::IS_ENTITY_IN_WATER(iParam1))
			{
				return 0;
			}
			return 1;
		}
		if ((VEHICLE::IS_THIS_MODEL_A_PLANE(iVar0) || VEHICLE::IS_THIS_MODEL_A_HELI(iVar0)) || iVar0 == joaat("blimp"))
		{
			if (ENTITY::IS_ENTITY_IN_AIR(iParam1))
			{
				return 0;
			}
			return 1;
		}
		return 1;
	}
	return 0;
}

void func_266(int iParam0, int iParam1, int iParam2)//Position - 0x151874
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (ENTITY::DOES_ENTITY_EXIST(*iParam1) && VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam1, false))
	{
		if (iParam0 == 17)
		{
			iVar0 = 0;
		}
		else if (iParam0 == 15)
		{
			iVar0 = 1;
		}
		else
		{
			return;
		}
		if (iParam2 > Global_113386.f_2363.f_539.f_3618)
		{
			return;
		}
		if (iParam2 == 0)
		{
		}
		if (VEHICLE::GET_NUM_MOD_KITS(*iParam1) != 0)
		{
			VEHICLE::SET_VEHICLE_MOD_KIT(*iParam1, 0);
		}
		Global_113386.f_2363.f_539.f_3618[iParam2 /*197*/][iVar0 /*98*/] = ENTITY::GET_ENTITY_MODEL(*iParam1);
		if (VEHICLE::GET_VEHICLE_TRAILER_VEHICLE(*iParam1, &iVar1))
		{
			Global_113386.f_2363.f_539.f_3618[iParam2 /*197*/][iVar0 /*98*/].f_1 = ENTITY::GET_ENTITY_MODEL(iVar1);
		}
		Global_113386.f_2363.f_539.f_3618[iParam2 /*197*/][iVar0 /*98*/].f_2 = VEHICLE::GET_VEHICLE_DIRT_LEVEL(*iParam1);
		Global_113386.f_2363.f_539.f_3618[iParam2 /*197*/][iVar0 /*98*/].f_3 = ENTITY::GET_ENTITY_HEALTH(*iParam1);
		Global_113386.f_2363.f_539.f_3618[iParam2 /*197*/][iVar0 /*98*/].f_11[0] = VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 1);
		Global_113386.f_2363.f_539.f_3618[iParam2 /*197*/][iVar0 /*98*/].f_11[1] = VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 2);
		Global_113386.f_2363.f_539.f_3618[iParam2 /*197*/][iVar0 /*98*/].f_11[2] = VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 3);
		Global_113386.f_2363.f_539.f_3618[iParam2 /*197*/][iVar0 /*98*/].f_11[3] = VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 4);
		Global_113386.f_2363.f_539.f_3618[iParam2 /*197*/][iVar0 /*98*/].f_11[4] = VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 5);
		Global_113386.f_2363.f_539.f_3618[iParam2 /*197*/][iVar0 /*98*/].f_11[5] = VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 6);
		Global_113386.f_2363.f_539.f_3618[iParam2 /*197*/][iVar0 /*98*/].f_11[6] = VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 7);
		Global_113386.f_2363.f_539.f_3618[iParam2 /*197*/][iVar0 /*98*/].f_11[7] = VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 8);
		Global_113386.f_2363.f_539.f_3618[iParam2 /*197*/][iVar0 /*98*/].f_11[8] = VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 9);
		Global_113386.f_2363.f_539.f_3618[iParam2 /*197*/][iVar0 /*98*/].f_11[9] = VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 10);
		Global_113386.f_2363.f_539.f_3618[iParam2 /*197*/][iVar0 /*98*/].f_11[10] = VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 11);
		Global_113386.f_2363.f_539.f_3618[iParam2 /*197*/][iVar0 /*98*/].f_11[11] = VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 12);
		if (VEHICLE::IS_VEHICLE_A_CONVERTIBLE(*iParam1, false))
		{
			iVar2 = VEHICLE::GET_CONVERTIBLE_ROOF_STATE(*iParam1);
			if (iVar2 == 0 || iVar2 == 5)
			{
				Global_113386.f_2363.f_539.f_3618[iParam2 /*197*/][iVar0 /*98*/].f_24 = 1;
			}
			else
			{
				Global_113386.f_2363.f_539.f_3618[iParam2 /*197*/][iVar0 /*98*/].f_24 = 0;
			}
		}
		else
		{
			Global_113386.f_2363.f_539.f_3618[iParam2 /*197*/][iVar0 /*98*/].f_24 = 0;
		}
		Global_113386.f_2363.f_539.f_3618[iParam2 /*197*/][iVar0 /*98*/].f_25 = AUDIO::GET_PLAYER_RADIO_STATION_INDEX();
		StringCopy(&(Global_113386.f_2363.f_539.f_3618[iParam2 /*197*/][iVar0 /*98*/].f_27), VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(*iParam1), 16);
		Global_113386.f_2363.f_539.f_3618[iParam2 /*197*/][iVar0 /*98*/].f_26 = VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(*iParam1);
		VEHICLE::GET_VEHICLE_COLOURS(*iParam1, &(Global_113386.f_2363.f_539.f_3618[iParam2 /*197*/][iVar0 /*98*/].f_5), &(Global_113386.f_2363.f_539.f_3618[iParam2 /*197*/][iVar0 /*98*/].f_6));
		VEHICLE::GET_VEHICLE_EXTRA_COLOURS(*iParam1, &(Global_113386.f_2363.f_539.f_3618[iParam2 /*197*/][iVar0 /*98*/].f_7), &(Global_113386.f_2363.f_539.f_3618[iParam2 /*197*/][iVar0 /*98*/].f_8));
		VEHICLE::GET_VEHICLE_TYRE_SMOKE_COLOR(*iParam1, &(Global_113386.f_2363.f_539.f_3618[iParam2 /*197*/][iVar0 /*98*/].f_84), &(Global_113386.f_2363.f_539.f_3618[iParam2 /*197*/][iVar0 /*98*/].f_85), &(Global_113386.f_2363.f_539.f_3618[iParam2 /*197*/][iVar0 /*98*/].f_86));
		Global_113386.f_2363.f_539.f_3618[iParam2 /*197*/][iVar0 /*98*/].f_88 = VEHICLE::GET_VEHICLE_TYRES_CAN_BURST(*iParam1);
		Global_113386.f_2363.f_539.f_3618[iParam2 /*197*/][iVar0 /*98*/].f_87 = VEHICLE::GET_VEHICLE_WINDOW_TINT(*iParam1);
		Global_113386.f_2363.f_539.f_3618[iParam2 /*197*/][iVar0 /*98*/].f_89 = VEHICLE::GET_VEHICLE_LIVERY(*iParam1);
		Global_113386.f_2363.f_539.f_3618[iParam2 /*197*/][iVar0 /*98*/].f_90 = VEHICLE::GET_VEHICLE_WHEEL_TYPE(*iParam1);
		VEHICLE::GET_VEHICLE_NEON_COLOUR(*iParam1, &(Global_113386.f_2363.f_539.f_3618[iParam2 /*197*/][iVar0 /*98*/].f_93), &(Global_113386.f_2363.f_539.f_3618[iParam2 /*197*/][iVar0 /*98*/].f_94), &(Global_113386.f_2363.f_539.f_3618[iParam2 /*197*/][iVar0 /*98*/].f_95));
		if (VEHICLE::GET_VEHICLE_NEON_ENABLED(*iParam1, 2))
		{
			MISC::SET_BIT(&(Global_113386.f_2363.f_539.f_3618[iParam2 /*197*/][iVar0 /*98*/].f_92), 28);
		}
		else
		{
			MISC::CLEAR_BIT(&(Global_113386.f_2363.f_539.f_3618[iParam2 /*197*/][iVar0 /*98*/].f_92), 28);
		}
		if (VEHICLE::GET_VEHICLE_NEON_ENABLED(*iParam1, 3))
		{
			MISC::SET_BIT(&(Global_113386.f_2363.f_539.f_3618[iParam2 /*197*/][iVar0 /*98*/].f_92), 29);
		}
		else
		{
			MISC::CLEAR_BIT(&(Global_113386.f_2363.f_539.f_3618[iParam2 /*197*/][iVar0 /*98*/].f_92), 29);
		}
		if (VEHICLE::GET_VEHICLE_NEON_ENABLED(*iParam1, 0))
		{
			MISC::SET_BIT(&(Global_113386.f_2363.f_539.f_3618[iParam2 /*197*/][iVar0 /*98*/].f_92), 30);
		}
		else
		{
			MISC::CLEAR_BIT(&(Global_113386.f_2363.f_539.f_3618[iParam2 /*197*/][iVar0 /*98*/].f_92), 30);
		}
		if (VEHICLE::GET_VEHICLE_NEON_ENABLED(*iParam1, 1))
		{
			MISC::SET_BIT(&(Global_113386.f_2363.f_539.f_3618[iParam2 /*197*/][iVar0 /*98*/].f_92), 31);
		}
		else
		{
			MISC::CLEAR_BIT(&(Global_113386.f_2363.f_539.f_3618[iParam2 /*197*/][iVar0 /*98*/].f_92), 31);
		}
		if (VEHICLE::GET_VEHICLE_MOD_KIT(*iParam1) >= 0)
		{
			__LIB_0__::func_107(iParam1, &(Global_113386.f_2363.f_539.f_3618[iParam2 /*197*/][iVar0 /*98*/].f_31), &(Global_113386.f_2363.f_539.f_3618[iParam2 /*197*/][iVar0 /*98*/].f_81));
		}
	}
}

void func_267(int iParam0, var uParam1, int iParam2)//Position - 0x151EEC
{
	int iVar0;
	struct<98> Var1;
	Var1.f_11 = 12;
	Var1.f_31 = 49;
	Var1.f_81 = 2;
	Var1.f_88 = 1;
	Var1.f_84 = 255;
	Var1.f_85 = 255;
	Var1.f_86 = 255;
	Var1.f_3 = 1000;
	Var1.f_1 = 0;
	switch (iParam0)
	{
		case 14:
			if (iParam2 == 1)
			{
				iVar0 = joaat("issi2");
			}
			else if (iParam2 == 2)
			{
				iVar0 = joaat("tribike");
			}
			else
			{
				iVar0 = joaat("tribike");
			}
			switch (iVar0)
			{
				case joaat("issi2"):
					Var1.f_0 = iVar0;
					Var1.f_2 = 0f;
					Var1.f_5 = 88;
					Var1.f_6 = 7;
					Var1.f_9 = 0;
					StringCopy(&(Var1.f_27), "P3RSEUS", 16);
					break;
				case joaat("tribike"):
					Var1.f_0 = iVar0;
					Var1.f_2 = 0f;
					Var1.f_4 = 0;
					Var1.f_9 = 1;
					break;
			}
			break;
		case 15:
			if (iParam2 == 1)
			{
				iVar0 = joaat("issi2");
			}
			else if (iParam2 == 2)
			{
				iVar0 = joaat("sanchez");
			}
			else
			{
				iVar0 = joaat("issi2");
			}
			switch (iVar0)
			{
				case joaat("issi2"):
					Var1.f_0 = iVar0;
					Var1.f_2 = 0f;
					Var1.f_5 = 88;
					Var1.f_6 = 7;
					Var1.f_9 = 0;
					StringCopy(&(Var1.f_27), "P3RSEUS", 16);
					break;
				case joaat("sanchez"):
					Var1.f_0 = iVar0;
					Var1.f_2 = 0f;
					Var1.f_4 = 0;
					Var1.f_9 = 1;
					break;
			}
			break;
		case 17:
			if (iParam2 == 1)
			{
				iVar0 = joaat("sentinel2");
			}
			else if (iParam2 == 2)
			{
				iVar0 = joaat("faggio2");
			}
			else
			{
				iVar0 = joaat("sentinel2");
			}
			switch (iVar0)
			{
				case joaat("sentinel2"):
					Var1.f_0 = iVar0;
					Var1.f_5 = 28;
					Var1.f_6 = 28;
					Var1.f_9 = 0;
					StringCopy(&(Var1.f_27), "KRYST4L", 16);
					break;
				case joaat("faggio2"):
					Var1.f_0 = iVar0;
					Var1.f_2 = 0f;
					Var1.f_4 = 0;
					Var1.f_9 = 1;
					break;
			}
			break;
		case 19:
			if (iParam2 == 1)
			{
				iVar0 = joaat("speedo");
			}
			else if (iParam2 == 3)
			{
				iVar0 = joaat("emperor");
			}
			else
			{
				iVar0 = joaat("speedo");
			}
			switch (iVar0)
			{
				case joaat("speedo"):
					Var1.f_0 = iVar0;
					Var1.f_4 = 5;
					Var1.f_2 = 10f;
					Var1.f_9 = 1;
					StringCopy(&(Var1.f_27), "LAMAR G", 16);
					break;
				case joaat("emperor"):
					Var1.f_0 = iVar0;
					Var1.f_2 = 8f;
					Var1.f_5 = 62;
					Var1.f_6 = 21;
					Var1.f_7 = 0;
					Var1.f_8 = 156;
					Var1.f_10 = 1;
					StringCopy(&(Var1.f_27), "07KZF345", 16);
					break;
			}
			break;
		case 29:
			Var1.f_0 = joaat("adder");
			Var1.f_5 = 62;
			Var1.f_6 = 4;
			Var1.f_7 = 68;
			Var1.f_8 = 156;
			Var1.f_10 = 1;
			Var1.f_9 = 0;
			StringCopy(&(Var1.f_27), "N4M4ST3", 16);
			break;
		case 30:
			Var1.f_0 = joaat("oracle2");
			Var1.f_9 = 1;
			Var1.f_4 = 7;
			StringCopy(&(Var1.f_27), "81TDS937", 16);
			break;
		case 18:
		case 20:
		case 21:
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 31:
		case 32:
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
		case 39:
		case 40:
		case 46:
		case 47:
		case 65:
			if (iParam2 == 1)
			{
				iVar0 = joaat("asterope");
			}
			else if (iParam2 == 2)
			{
				iVar0 = joaat("sanchez");
			}
			else
			{
				iVar0 = joaat("asterope");
			}
			switch (iVar0)
			{
				case joaat("asterope"):
					Var1.f_0 = iVar0;
					Var1.f_2 = 0f;
					Var1.f_4 = 0;
					Var1.f_9 = 1;
					break;
				case joaat("sanchez"):
					Var1.f_0 = iVar0;
					Var1.f_2 = 0f;
					Var1.f_4 = 0;
					Var1.f_9 = 1;
					break;
			}
			break;
		default:
			break;
	}
	*uParam1 = { Var1 };
}

int func_268(int iParam0)//Position - 0x1522E7
{
	int iVar0;
	if (PED::IS_PED_INJURED(iParam0))
	{
		return 0;
	}
	if (!PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_97802[iVar0]))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Global_97802[iVar0], false))
			{
				if (PED::IS_PED_IN_VEHICLE(iParam0, Global_97802[iVar0], false))
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

void func_269(int iParam0)//Position - 0x152607
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && iParam0 >= 0)
	{
		if (iLocal_121 != 7 && iLocal_121 != 2)
		{
			Global_1585857[iParam0 /*142*/].f_138 = -1;
			switch (iLocal_121)
			{
				case 0:
					Global_2789625.f_103 = 0;
					break;
				case 1:
					Global_2789625.f_103 = 1;
					break;
				case 3:
					Global_2789625.f_103 = 2;
					break;
				case 4:
					Global_2789625.f_103 = 3;
					break;
				case 5:
					Global_2789625.f_103 = 4;
					break;
				}
		}
		if (iLocal_122 != 7 && iLocal_122 != 2)
		{
			Global_1585857[iParam0 /*142*/].f_139 = -1;
			switch (iLocal_122)
			{
				case 0:
					Global_2789625.f_104 = 0;
					break;
				case 1:
					Global_2789625.f_104 = 1;
					break;
				case 3:
					Global_2789625.f_104 = 2;
					break;
				case 4:
					Global_2789625.f_104 = 3;
					break;
				case 5:
					Global_2789625.f_104 = 4;
					break;
				}
			}
	}
}

void func_270(int iParam0)//Position - 0x152B82
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && iParam0 >= 0)
	{
		if (iLocal_121 != 7 && iLocal_121 != 2)
		{
			Global_1585857[iParam0 /*142*/].f_138 = -1;
			switch (iLocal_121)
			{
				case 0:
					Global_2789412[iParam0 /*106*/].f_103 = 0;
					break;
				case 1:
					Global_2789412[iParam0 /*106*/].f_103 = 1;
					break;
				case 3:
					Global_2789412[iParam0 /*106*/].f_103 = 2;
					break;
				case 4:
					Global_2789412[iParam0 /*106*/].f_103 = 3;
					break;
				case 5:
					Global_2789412[iParam0 /*106*/].f_103 = 4;
					break;
				}
		}
		if (iLocal_122 != 7 && iLocal_122 != 2)
		{
			Global_1585857[iParam0 /*142*/].f_139 = -1;
			switch (iLocal_122)
			{
				case 0:
					Global_2789412[iParam0 /*106*/].f_104 = 0;
					break;
				case 1:
					Global_2789412[iParam0 /*106*/].f_104 = 1;
					break;
				case 3:
					Global_2789412[iParam0 /*106*/].f_104 = 2;
					break;
				case 4:
					Global_2789412[iParam0 /*106*/].f_104 = 3;
					break;
				case 5:
					Global_2789412[iParam0 /*106*/].f_104 = 4;
					break;
				}
			}
	}
}

int func_271(var uParam0, int iParam1)//Position - 0x157369
{
	Global_2703735.f_61.f_64 = iParam1;
	Global_2703735.f_61.f_50 = 1;
	if (Global_2703735.f_61.f_63 != 0)
	{
		*uParam0 = Global_2703735.f_61.f_63;
		Global_2703735.f_61.f_63 = 0;
		Global_2703735.f_61.f_50 = 0;
		return 1;
	}
	return 0;
}

void func_272()//Position - 0x1573B2
{
	Global_2703735.f_61.f_81 = 1;
}

int func_273(int iParam0, int iParam1)//Position - 0x1573C3
{
	switch (iParam0)
	{
		case joaat("technical3"):
		case joaat("insurgent3"):
			if (iParam1 == 1)
			{
				return 1;
			}
			break;
		case joaat("monster3"):
		case joaat("bruiser"):
		case joaat("bruiser2"):
		case joaat("bruiser3"):
		case joaat("glendale"):
		case joaat("impaler2"):
		case joaat("impaler"):
		case joaat("impaler3"):
		case joaat("impaler4"):
		case joaat("vamos"):
		case joaat("issi4"):
		case joaat("deathbike"):
		case joaat("deathbike2"):
		case joaat("deathbike3"):
		case joaat("dominator"):
		case joaat("dominator2"):
		case joaat("dominator4"):
		case joaat("dominator5"):
		case joaat("dominator6"):
		case joaat("slamvan4"):
		case joaat("imperator"):
		case joaat("zr380"):
		case joaat("cerberus"):
		case joaat("scarab"):
		case joaat("brutus"):
		case joaat("imperator2"):
		case joaat("imperator3"):
		case joaat("zr3802"):
		case joaat("zr3803"):
		case joaat("cerberus2"):
		case joaat("scarab2"):
		case joaat("brutus2"):
		case joaat("cerberus3"):
		case joaat("scarab3"):
		case joaat("brutus3"):
		case joaat("slamvan5"):
		case joaat("slamvan6"):
		case joaat("monster4"):
		case joaat("monster5"):
		case joaat("issi5"):
		case joaat("issi6"):
			if (iParam1 == 2)
			{
				return 1;
			}
			break;
		default:
			if (iParam1 == 0)
			{
				return 1;
			}
			break;
	}
	return 0;
}

char* func_274(int iParam0)//Position - 0x1574FC
{
	switch (iParam0)
	{
		case 0:
			return "CMM_MOD_BOMT";
			break;
		case 1:
			return "CMM_MOD_UWET";
			break;
		case 2:
			return "CMM_MOD_ARWT";
			break;
	}
	return "CMM_MOD_BOMT";
}

int func_275()//Position - 0x157BB0
{
	return Global_262145.f_32597 /* Tunable: -173577921 */;
}

int func_276(int iParam0)//Position - 0x15B4C7
{
	if (__LIB_9__::func_238(ENTITY::GET_ENTITY_MODEL(iParam0)))
	{
		return 0;
	}
	if (((((((((((ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("sanchez") || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("sanchez2")) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("bati2")) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("akuma")) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("double")) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("bati2")) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("blazer2")) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("blazer3")) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("ratloader")) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("ratloader2")) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("vader")) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("btype2"))
	{
		return 0;
	}
	return 1;
}

void func_277()//Position - 0x15D238
{
	int iVar0;
	iVar0 = __LIB_0__::func_228(9359, -1);
	__LIB_1__::func_39(9359, iVar0 + 1, -1);
}

int func_278()//Position - 0x15D398
{
	int iVar0;
	iVar0 = ENTITY::GET_ENTITY_MODEL(Local_124.f_406);
	switch (iVar0)
	{
		case joaat("gp1"):
		case joaat("xa21"):
		case joaat("cheetah2"):
		case joaat("torero"):
		case joaat("comet4"):
		case joaat("z190"):
		case joaat("dominator3"):
		case joaat("pounder2"):
		case joaat("patriot2"):
		case joaat("freecrawler"):
		case joaat("toros"):
		case joaat("schlagen"):
		case joaat("impaler2"):
		case joaat("rcbandito"):
		case joaat("impaler3"):
		case joaat("impaler4"):
		case joaat("dynasty"):
		case joaat("issi7"):
		case joaat("nebula"):
		case joaat("drafter"):
		case joaat("neo"):
		case joaat("gauntlet3"):
		case joaat("gauntlet4"):
		case joaat("paragon"):
		case joaat("paragon2"):
		case joaat("imorgon"):
		case joaat("vstr"):
		case joaat("komoda"):
		case joaat("everon"):
		case joaat("sultan2"):
		case joaat("kanjo"):
		case joaat("vagrant"):
		case joaat("yosemite2"):
		case joaat("jb7002"):
		case joaat("manana2"):
		case joaat("gauntlet5"):
		case joaat("youga3"):
		case joaat("peyote3"):
		case joaat("yosemite3"):
		case joaat("seminole2"):
		case joaat("penumbra2"):
		case joaat("coquette4"):
		case joaat("brioso2"):
		case joaat("slamtruck"):
		case joaat("zr350"):
		case joaat("jester4"):
		case joaat("rt3000"):
		case joaat("comet6"):
		case joaat("sultan3"):
		case joaat("futo2"):
		case joaat("baller7"):
		case joaat("cinquemila"):
		case joaat("deity"):
		case joaat("sentinel"):
		case joaat("kanjosj"):
		case joaat("lm87"):
		case joaat("greenwood"):
		case joaat("ruiner4"):
			return 1;
			break;
	}
	if (__LIB_4__::func_534(Local_124.f_406))
	{
		return 1;
	}
	return 0;
}

bool func_279(int iParam0, int iParam1)//Position - 0x15DC09
{
	*iParam1 = -1;
	if (ENTITY::GET_ENTITY_MODEL(Local_124.f_406) == joaat("granger") && iParam0 == 0)
	{
		*iParam1 = -1;
		return 1;
	}
	switch (iParam0)
	{
		case 0:
			*iParam1 = 0;
			break;
		case 1:
			*iParam1 = 3;
			break;
		case 2:
			*iParam1 = 2;
			break;
		case 3:
			*iParam1 = 1;
			break;
		case 4:
			*iParam1 = 4;
			break;
		case 5:
			*iParam1 = 5;
			break;
	}
	return *iParam1 != -1;
}

void func_280(var uParam0, int iParam1, bool bParam2)//Position - 0x15E7B7
{
	int iVar0;
	int iVar1;
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	iVar0 = (iParam1 % 32);
	iVar1 = (iParam1 / 32);
	if (bParam2)
	{
		MISC::SET_BIT(&(uParam0->f_650[iVar1]), iVar0);
	}
	else
	{
		MISC::CLEAR_BIT(&(uParam0->f_650[iVar1]), iVar0);
	}
}

float func_281()//Position - 0x15EA88
{
	var uVar0;
	uVar0 = Global_262145.f_2998 /* Tunable: CARMOD_UNLOCK_WHEELCOLOURS_EXPENDITURE_TUNABLE */;
	if (((((((((((((Global_1585307 == 3 || Global_1585307 == 27) || Global_1585307 == 26) || Global_1585307 == 29) || Global_1585307 == 30) || Global_1585307 == 31) || Global_1585307 == 32) || Global_1585307 == 33) || Global_1585307 == 34) || Global_1585307 == 35) || Global_1585307 == 36) || Global_1585307 == 37) || Global_1585307 == 38) || Global_1585307 == 39)
	{
		uVar0 = Global_262145.f_3409 /* Tunable: CARMOD_UNLOCK_WHEELCOLOURS_EXPENDITURE_TUNABLE_SPECIAL */;
	}
	else if (Global_1585307 == 1)
	{
		uVar0 = Global_262145.f_3272 /* Tunable: CARMOD_UNLOCK_WHEELCOLOURS_EXPENDITURE_TUNABLE_SPORT */;
	}
	else if (Global_1585307 == 2)
	{
		uVar0 = Global_262145.f_3135 /* Tunable: CARMOD_UNLOCK_WHEELCOLOURS_EXPENDITURE_TUNABLE_SUV */;
	}
	else if (Global_1585307 == 4)
	{
		uVar0 = Global_262145.f_3546 /* Tunable: CARMOD_UNLOCK_WHEELCOLOURS_EXPENDITURE_TUNABLE_BIKE */;
	}
	return uVar0;
}

bool func_282(int iParam0, int iParam1)//Position - 0x15EB92
{
	*iParam1 = -1;
	switch (iParam0)
	{
		case 0:
			*iParam1 = 156;
			break;
		case 1:
			*iParam1 = 0;
			break;
		case 2:
			*iParam1 = 1;
			break;
		case 3:
			*iParam1 = 11;
			break;
		case 4:
			*iParam1 = 2;
			break;
		case 5:
			*iParam1 = 8;
			break;
		case 6:
			*iParam1 = 122;
			break;
		case 7:
			*iParam1 = 27;
			break;
		case 8:
			*iParam1 = 30;
			break;
		case 9:
			*iParam1 = 45;
			break;
		case 10:
			*iParam1 = 35;
			break;
		case 11:
			*iParam1 = 33;
			break;
		case 12:
			*iParam1 = 136;
			break;
		case 13:
			*iParam1 = 135;
			break;
		case 14:
			*iParam1 = 36;
			break;
		case 15:
			*iParam1 = 41;
			break;
		case 16:
			*iParam1 = 138;
			break;
		case 17:
			*iParam1 = 37;
			break;
		case 18:
			*iParam1 = 99;
			break;
		case 19:
			*iParam1 = 90;
			break;
		case 20:
			*iParam1 = 95;
			break;
		case 21:
			*iParam1 = 115;
			break;
		case 22:
			*iParam1 = 109;
			break;
		case 23:
			*iParam1 = 153;
			break;
		case 24:
			*iParam1 = 154;
			break;
		case 25:
			*iParam1 = 88;
			break;
		case 26:
			*iParam1 = 89;
			break;
		case 27:
			*iParam1 = 91;
			break;
		case 28:
			*iParam1 = 55;
			break;
		case 29:
			*iParam1 = 125;
			break;
		case 30:
			*iParam1 = 53;
			break;
		case 31:
			*iParam1 = 56;
			break;
		case 32:
			*iParam1 = 151;
			break;
		case 33:
			*iParam1 = 82;
			break;
		case 34:
			*iParam1 = 64;
			break;
		case 35:
			*iParam1 = 87;
			break;
		case 36:
			*iParam1 = 70;
			break;
		case 37:
			*iParam1 = 140;
			break;
		case 38:
			*iParam1 = 81;
			break;
		case 39:
			*iParam1 = 145;
			break;
		case 40:
			*iParam1 = 142;
			break;
	}
	return *iParam1 != -1;
}

void func_283(var uParam0)//Position - 0x160CBC
{
	int iVar0;
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	iVar0 = (uParam0->f_663 - 1);
	MISC::SET_BIT(&(uParam0->f_663[iVar0]), 30);
}

void func_284(int iParam0, bool bParam1)//Position - 0x160CE7
{
	int iVar0;
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
		{
			if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", 3))
			{
				if (DECORATOR::DECOR_EXIST_ON(iParam0, "MPBitset"))
				{
					iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "MPBitset");
				}
				if (bParam1)
				{
					MISC::SET_BIT(&iVar0, 4);
				}
				else
				{
					MISC::CLEAR_BIT(&iVar0, 4);
				}
				DECORATOR::DECOR_SET_INT(iParam0, "MPBitset", iVar0);
			}
		}
	}
}

int func_285(int iParam0)//Position - 0x160D9B
{
	switch (iParam0)
	{
		case 0:
			return 255;
			break;
		case 12:
			return 1;
			break;
		case 1:
			return 2;
			break;
		case 11:
			return 3;
			break;
		case 6:
			return 4;
			break;
		case 4:
			return 5;
			break;
		case 3:
			return 6;
			break;
		case 8:
			return 7;
			break;
		case 2:
			return 8;
			break;
		case 5:
			return 9;
			break;
		case 7:
			return 10;
			break;
		case 9:
			return 11;
			break;
		case 10:
			return 12;
			break;
	}
	return 255;
}

int func_286(int iParam0)//Position - 0x160EB2
{
	int iVar0;
	iVar0 = 0;
	switch (iParam0)
	{
		case 29:
			iVar0 = 1;
			break;
		case 30:
			iVar0 = 2;
			break;
		case 31:
			iVar0 = 3;
			break;
		case 32:
			iVar0 = 4;
			break;
		case 33:
			iVar0 = 5;
			break;
		case 34:
			iVar0 = 6;
			break;
		case 35:
			iVar0 = 7;
			break;
		case 36:
			iVar0 = 8;
			break;
		case 37:
			iVar0 = 9;
			break;
		case 38:
			iVar0 = 10;
			break;
		case 39:
			iVar0 = 11;
			break;
		case 40:
			iVar0 = 12;
			break;
	}
	return iVar0;
}

int func_287(int iParam0, int iParam1)//Position - 0x1610F8
{
	switch (iParam1)
	{
		case 8:
			return 31;
			break;
		case 9:
			return 31;
			break;
		case 10:
			if (__LIB_1__::func_926(ENTITY::GET_ENTITY_MODEL(iParam0)))
			{
				return 20;
			}
			break;
		case 11:
			return 30;
			break;
		case 12:
			return 30;
			break;
	}
	return VEHICLE::GET_NUM_VEHICLE_MODS(iParam0, 23);
}

int func_288()//Position - 0x161183
{
	switch (ENTITY::GET_ENTITY_MODEL(Local_124.f_406))
	{
		case joaat("rcbandito"):
		case joaat("minitank"):
		case joaat("veto"):
		case joaat("veto2"):
		case joaat("kuruma2"):
			return 1;
			break;
	}
	return 0;
}

int func_289()//Position - 0x1611C0
{
	switch (ENTITY::GET_ENTITY_MODEL(Local_124.f_406))
	{
		case joaat("chimera"):
		case joaat("trailerlarge"):
		case joaat("phantom3"):
		case joaat("hauler2"):
		case joaat("vigilante"):
		case joaat("riot2"):
		case joaat("chernobog"):
		case joaat("mule4"):
		case joaat("pounder2"):
		case joaat("slamvan4"):
		case joaat("cerberus"):
		case joaat("deathbike2"):
		case joaat("cerberus2"):
		case joaat("cerberus3"):
		case joaat("rrocket"):
		case joaat("zhaba"):
		case joaat("stryder"):
		case joaat("veto"):
		case joaat("veto2"):
			return 1;
			break;
	}
	return 0;
}

void func_290(var uParam0, int iParam1, int iParam2)//Position - 0x162F68
{
	int iVar0;
	iVar0 = iParam1;
	if (iVar0 < 0 || iVar0 >= 13)
	{
		return;
	}
	if ((iParam2 < 0 || iParam2 > 31) && iParam1 != 6)
	{
		return;
	}
	if (iParam1 == 6)
	{
		if (iParam2 > 31 && iParam2 < 64)
		{
			iParam2 = (iParam2 - 32);
			iVar0 = 8;
		}
		else if (iParam2 >= 64 && iParam2 < 75)
		{
			iParam2 = (iParam2 - 64);
			iVar0 = 9;
		}
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		MISC::SET_BIT(&(uParam0->f_636[iVar0]), iParam2);
	}
}

bool func_291()//Position - 0x1631EF
{
	return DLC::IS_DLC_PRESENT(joaat("mpheist"));
}

int func_292(int iParam0)//Position - 0x163307
{
	switch (iParam0)
	{
		case joaat("buffalo3"):
		case joaat("dominator2"):
		case joaat("gauntlet2"):
		case joaat("stalion2"):
		case joaat("jester2"):
			return 1;
			break;
	}
	return 0;
}

int func_293(int iParam0)//Position - 0x163D26
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		iVar1 = -1;
		if (iVar0 == 0)
		{
			if (__LIB_0__::func_305(iParam0, 23) && VEHICLE::GET_VEHICLE_MOD(iParam0, 23) != -1)
			{
				iVar1 = MISC::GET_HASH_KEY(VEHICLE::GET_MOD_TEXT_LABEL(iParam0, 23, VEHICLE::GET_VEHICLE_MOD(iParam0, 23)));
			}
		}
		else if (__LIB_0__::func_305(iParam0, 24) && VEHICLE::GET_VEHICLE_MOD(iParam0, 24) != -1)
		{
			iVar1 = MISC::GET_HASH_KEY(VEHICLE::GET_MOD_TEXT_LABEL(iParam0, 23, VEHICLE::GET_VEHICLE_MOD(iParam0, 24)));
		}
		switch (iVar1)
		{
			case joaat("RWD_HIEND_01"):
			case joaat("RWD_HIEND_02"):
			case joaat("RWD_HIEND_03"):
			case joaat("RWD_HIEND_04"):
			case joaat("RWD_HIEND_05"):
			case joaat("RWD_HIEND_06"):
			case joaat("RWD_HIEND_07"):
			case joaat("RWD_HIEND_08"):
			case joaat("RWD_HIEND_09"):
			case joaat("RWD_HIEND_10"):
			case joaat("RWD_HIEND_11"):
			case joaat("RWD_HIEND_12"):
			case joaat("RWD_HIEND_13"):
			case joaat("RWD_HIEND_14"):
			case joaat("RWD_HIEND_15"):
			case joaat("RWD_HIEND_16"):
			case joaat("RWD_HIEND_17"):
			case joaat("RWD_HIEND_18"):
			case joaat("RWD_HIEND_19"):
			case joaat("RWD_HIEND_20"):
			case joaat("RWD_SPT_01"):
			case joaat("RWD_SPT_02"):
			case joaat("RWD_SPT_03"):
			case joaat("RWD_SPT_04"):
			case joaat("RWD_SPT_05"):
			case joaat("RWD_SPT_06"):
			case joaat("RWD_SPT_07"):
			case joaat("RWD_SPT_08"):
			case joaat("RWD_SPT_09"):
			case joaat("RWD_SPT_10"):
			case joaat("RWD_SPT_11"):
			case joaat("RWD_SPT_12"):
			case joaat("RWD_SPT_13"):
			case joaat("RWD_SPT_14"):
			case joaat("RWD_SPT_15"):
			case joaat("RWD_SPT_16"):
			case joaat("RWD_SPT_17"):
			case joaat("RWD_SPT_18"):
			case joaat("RWD_SPT_19"):
			case joaat("RWD_SPT_20"):
			case joaat("RWD_SPT_21"):
			case joaat("RWD_SPT_22"):
			case joaat("RWD_SPT_23"):
			case joaat("RWD_SPT_24"):
			case joaat("RWD_SPT_25"):
			case joaat("RWD_MUSC_01"):
			case joaat("RWD_MUSC_02"):
			case joaat("RWD_MUSC_03"):
			case joaat("RWD_MUSC_04"):
			case joaat("RWD_MUSC_05"):
			case joaat("RWD_MUSC_06"):
			case joaat("RWD_MUSC_07"):
			case joaat("RWD_MUSC_08"):
			case joaat("RWD_MUSC_09"):
			case joaat("RWD_MUSC_10"):
			case joaat("RWD_MUSC_11"):
			case joaat("RWD_MUSC_12"):
			case joaat("RWD_MUSC_13"):
			case joaat("RWD_MUSC_14"):
			case joaat("RWD_MUSC_15"):
			case joaat("RWD_MUSC_16"):
			case joaat("RWD_MUSC_17"):
			case joaat("RWD_MUSC_18"):
			case joaat("RWD_MUSC_19"):
			case joaat("RWD_MUSC_20"):
			case joaat("RWD_LORIDE_01"):
			case joaat("RWD_LORIDE_02"):
			case joaat("RWD_LORIDE_03"):
			case joaat("RWD_LORIDE_04"):
			case joaat("RWD_LORIDE_05"):
			case joaat("RWD_LORIDE_06"):
			case joaat("RWD_LORIDE_07"):
			case joaat("RWD_LORIDE_08"):
			case joaat("RWD_LORIDE_09"):
			case joaat("RWD_LORIDE_10"):
			case joaat("RWD_LORIDE_11"):
			case joaat("RWD_LORIDE_12"):
			case joaat("RWD_LORIDE_13"):
			case joaat("RWD_LORIDE_14"):
			case joaat("RWD_LORIDE_15"):
			case joaat("RWD_SUV_01"):
			case joaat("RWD_SUV_02"):
			case joaat("RWD_SUV_03"):
			case joaat("RWD_SUV_04"):
			case joaat("RWD_SUV_05"):
			case joaat("RWD_SUV_06"):
			case joaat("RWD_SUV_07"):
			case joaat("RWD_SUV_08"):
			case joaat("RWD_SUV_09"):
			case joaat("RWD_SUV_10"):
			case joaat("RWD_SUV_11"):
			case joaat("RWD_SUV_12"):
			case joaat("RWD_SUV_13"):
			case joaat("RWD_SUV_14"):
			case joaat("RWD_SUV_15"):
			case joaat("RWD_SUV_16"):
			case joaat("RWD_SUV_17"):
			case joaat("RWD_SUV_18"):
			case joaat("RWD_SUV_19"):
			case joaat("RWD_SUV_20"):
			case joaat("RWD_OFFR_01"):
			case joaat("RWD_OFFR_02"):
			case joaat("RWD_OFFR_03"):
			case joaat("RWD_OFFR_04"):
			case joaat("RWD_OFFR_05"):
			case joaat("RWD_OFFR_06"):
			case joaat("RWD_OFFR_07"):
			case joaat("RWD_OFFR_08"):
			case joaat("RWD_OFFR_09"):
			case joaat("RWD_OFFR_10"):
			case joaat("RWD_DRFT_01"):
			case joaat("RWD_DRFT_02"):
			case joaat("RWD_DRFT_03"):
			case joaat("RWD_DRFT_04"):
			case joaat("RWD_DRFT_05"):
			case joaat("RWD_DRFT_06"):
			case joaat("RWD_DRFT_07"):
			case joaat("RWD_DRFT_08"):
			case joaat("RWD_DRFT_09"):
			case joaat("RWD_DRFT_10"):
			case joaat("RWD_DRFT_11"):
			case joaat("RWD_DRFT_12"):
			case joaat("RWD_DRFT_13"):
			case joaat("RWD_DRFT_14"):
			case joaat("RWD_DRFT_15"):
			case joaat("RWD_DRFT_16"):
			case joaat("RWD_DRFT_17"):
			case joaat("RWD_DRFT_18"):
			case joaat("RWD_DRFT_19"):
			case joaat("RWD_DRFT_20"):
			case joaat("RWD_DRFT_21"):
			case joaat("RWD_DRFT_22"):
			case joaat("RWD_DRFT_23"):
			case joaat("RWD_DRFT_24"):
			case joaat("RWD_BIKEW_01"):
			case joaat("RWD_BIKEW_02"):
			case joaat("RWD_BIKEW_03"):
			case joaat("RWD_BIKEW_04"):
			case joaat("RWD_BIKEW_05"):
			case joaat("RWD_BIKEW_06"):
			case joaat("RWD_BIKEW_07"):
			case joaat("RWD_BIKEW_08"):
			case joaat("RWD_BIKEW_09"):
			case joaat("RWD_BIKEW_10"):
			case joaat("RWD_BIKEW_11"):
			case joaat("RWD_BIKEW_12"):
			case joaat("RWD_BIKEW_13"):
			case joaat("RWD_BIKEW_14"):
			case joaat("RWD_BIKEW_15"):
			case joaat("RWD_BIKEW_16"):
			case joaat("RWD_BIKEW_17"):
			case joaat("RWD_BIKEW_18"):
			case joaat("RWD_BIKEW_19"):
			case joaat("RWD_BIKEW_20"):
			case joaat("RWD_BIKEW_21"):
			case joaat("RWD_BIKEW_22"):
			case joaat("RWD_BIKEW_23"):
			case joaat("RWD_BIKEW_24"):
			case joaat("RWD_BIKEW_25"):
			case joaat("RWD_BIKEW_26"):
			case joaat("RWD_BIKEW_27"):
			case joaat("RWD_BIKEW_28"):
			case joaat("RWD_BIKEW_29"):
			case joaat("RWD_BIKEW_30"):
			case joaat("RWD_BIKEW_31"):
			case joaat("RWD_BIKEW_32"):
			case joaat("RWD_BIKEW_33"):
			case joaat("RWD_BIKEW_34"):
			case joaat("RWD_BIKEW_35"):
			case joaat("RWD_BIKEW_36"):
				return 1;
				break;
		}
		iVar0++;
	}
	return 0;
}

bool func_294()//Position - 0x16664F
{
	return BitTest(uLocal_203, 1);
}

void func_295(bool bParam0)//Position - 0x16665C
{
	if (bParam0)
	{
		if (!BitTest(uLocal_203, 2))
		{
			MISC::SET_BIT(&uLocal_203, 2);
		}
	}
	else if (BitTest(uLocal_203, 2))
	{
		MISC::CLEAR_BIT(&uLocal_203, 2);
	}
}

int func_296()//Position - 0x16668D
{
	if (((((HUD::GET_PAUSE_MENU_STATE() != 0 || PLAYER::IS_SYSTEM_UI_BEING_DISPLAYED()) || HUD::IS_WARNING_MESSAGE_ACTIVE()) || Global_100493.f_1458) || STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS()) || NETWORK::NETWORK_TEXT_CHAT_IS_TYPING())
	{
		return 0;
	}
	return 1;
}

int func_297(int iParam0)//Position - 0x1666D8
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		switch (ENTITY::GET_ENTITY_MODEL(iParam0))
		{
			case joaat("comet2"):
			case joaat("kuruma"):
			case joaat("kuruma2"):
			case joaat("omnis"):
			case joaat("tyrus"):
			case joaat("sheava"):
			case joaat("le7b"):
			case joaat("nero2"):
			case joaat("gp1"):
			case joaat("tyrant"):
			case joaat("taipan"):
			case joaat("entity2"):
			case joaat("schlagen"):
			case joaat("locust"):
			case joaat("novak"):
			case joaat("emerus"):
			case joaat("issi7"):
			case joaat("gauntlet4"):
			case joaat("jugular"):
			case joaat("imorgon"):
			case joaat("vstr"):
			case joaat("openwheel1"):
			case joaat("openwheel2"):
			case joaat("remus"):
			case joaat("dominator7"):
			case joaat("calico"):
			case joaat("sultan3"):
			case joaat("comet6"):
			case joaat("comet7"):
			case joaat("buffalo4"):
			case joaat("jubilee"):
			case joaat("lm87"):
			case joaat("vigero2"):
				return 1;
				break;
			}
	}
	return 0;
}

int func_298()//Position - 0x167FB8
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (HUD::IS_PAUSE_MENU_ACTIVE())
		{
			return 1;
		}
		if (HUD::IS_WARNING_MESSAGE_ACTIVE())
		{
			return 1;
		}
	}
	return 0;
}

int func_299(int iParam0)//Position - 0x1680B2
{
	if (Global_2815059.f_5130)
	{
		return Global_2815059.f_5131;
	}
	switch (iParam0)
	{
		case 0:
			return Global_262145.f_10678 /* Tunable: CAP_FOR_EXPLOIT_LEVEL_0 */;
		case 1:
			return Global_262145.f_10679 /* Tunable: CAP_FOR_EXPLOIT_LEVEL_1 */;
		case 2:
			return Global_262145.f_10680 /* Tunable: CAP_FOR_EXPLOIT_LEVEL_2 */;
		case 3:
			return Global_262145.f_10681 /* Tunable: CAP_FOR_EXPLOIT_LEVEL_3 */;
		case 4:
			return Global_262145.f_10682 /* Tunable: CAP_FOR_EXPLOIT_LEVEL_4 */;
		case 5:
			return Global_262145.f_10683 /* Tunable: CAP_FOR_EXPLOIT_LEVEL_5 */;
		case 6:
			return Global_262145.f_10684 /* Tunable: CAP_FOR_EXPLOIT_LEVEL_6 */;
		case 7:
			return Global_262145.f_10685 /* Tunable: CAP_FOR_EXPLOIT_LEVEL_7 */;
		default:
	}
	return 0;
}

void func_300(int iParam0)//Position - 0x168390
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (Global_2815059.f_5167)
	{
		return;
	}
	iVar0 = __LIB_0__::func_714(joaat("MPPLY_PREVSEASONEXPLOITLEVEL"));
	iVar1 = __LIB_0__::func_714(joaat("MPPLY_PREVSEASON2EXPLOITLEVEL"));
	iVar2 = __LIB_0__::func_714(joaat("MPPLY_PREVSEASON3EXPLOITLEVEL"));
	__LIB_0__::func_779(joaat("MPPLY_PREVSEASONEXPLOITLEVEL"), iParam0);
	__LIB_0__::func_779(joaat("MPPLY_PREVSEASON2EXPLOITLEVEL"), iVar0);
	__LIB_0__::func_779(joaat("MPPLY_PREVSEASON3EXPLOITLEVEL"), iVar1);
	__LIB_0__::func_779(joaat("MPPLY_PREVSEASON4EXPLOITLEVEL"), iVar2);
}

void func_301(int iParam0)//Position - 0x1683F2
{
	if (Global_2815059.f_5166)
	{
		return;
	}
	switch (iParam0)
	{
		case 1:
			__LIB_0__::func_779(joaat("MPPLY_PREVSEASONEXPLOITLEVEL"), 0);
			break;
		case 2:
			__LIB_0__::func_779(joaat("MPPLY_PREVSEASON2EXPLOITLEVEL"), 0);
			break;
		case 3:
			__LIB_0__::func_779(joaat("MPPLY_PREVSEASON3EXPLOITLEVEL"), 0);
			break;
		case 4:
			__LIB_0__::func_779(joaat("MPPLY_PREVSEASON4EXPLOITLEVEL"), 0);
			break;
		default:
			__LIB_0__::func_779(joaat("MPPLY_PREVSEASONEXPLOITLEVEL"), 0);
			__LIB_0__::func_779(joaat("MPPLY_PREVSEASON2EXPLOITLEVEL"), 0);
			__LIB_0__::func_779(joaat("MPPLY_PREVSEASON3EXPLOITLEVEL"), 0);
			__LIB_0__::func_779(joaat("MPPLY_PREVSEASON4EXPLOITLEVEL"), 0);
			break;
	}
}

void func_302(char* sParam0)//Position - 0x1697C6
{
	if (ENTITY::DOES_ENTITY_EXIST(Local_124.f_406))
	{
		switch (ENTITY::GET_ENTITY_MODEL(Local_124.f_406))
		{
			case joaat("technical3"):
			case joaat("insurgent3"):
			case joaat("dune3"):
			case joaat("caracara"):
				StringCopy(sParam0, "WT_V_PLRBUL" /* GXT: Machine Gun */, 16);
				break;
			case joaat("tampa3"):
				StringCopy(sParam0, "CMOD_MINIG_S", 16);
				break;
			case joaat("apc"):
			case joaat("halftrack"):
			case joaat("trailersmall2"):
			case joaat("oppressor"):
				StringCopy(sParam0, "CMOD_WEAPO_S", 16);
				break;
			case joaat("trailerlarge"):
				StringCopy(sParam0, "SVM_MOD_T_1" /* GXT: No Turret */, 16);
				break;
			case joaat("rogue"):
			case joaat("microlight"):
			case joaat("seabreeze"):
			case joaat("havok"):
			case joaat("deluxo"):
			case joaat("comet4"):
			case joaat("revolter"):
			case joaat("savestra"):
			case joaat("viseris"):
			case joaat("thruster"):
			case joaat("seasparrow"):
			case joaat("pounder2"):
			case joaat("speedo4"):
			case joaat("seasparrow2"):
				StringCopy(sParam0, "CMOD_NO_WEAP" /* GXT: No Weapon */, 16);
				break;
			case joaat("vigilante"):
			case joaat("nokota"):
			case joaat("pyro"):
			case joaat("molotok"):
				StringCopy(sParam0, "CMOD_NO_MISSI" /* GXT: No Missiles */, 16);
				break;
			case joaat("mogul"):
				StringCopy(sParam0, "WTD_V_MOG_TURR" /* GXT: Single .50 Cal Turret */, 16);
				break;
			case joaat("hunter"):
				StringCopy(sParam0, "WTD_V_HUNT_MG" /* GXT: Gunner .50 Cal Turret */, 16);
				break;
			case joaat("bombushka"):
				StringCopy(sParam0, "WTD_V_BSHK_DUAL" /* GXT: Dual .50 Cal Turret */, 16);
				break;
			case joaat("tula"):
				StringCopy(sParam0, "WTD_V_TUL_MG" /* GXT: Single .50 Cal Turret */, 16);
				break;
			case joaat("akula"):
				StringCopy(sParam0, "WTD_V_AKU_TS" /* GXT: .50 Cal Minigun Turret */, 16);
				break;
			case joaat("khanjali"):
				StringCopy(sParam0, "WTD_V_KHA_CA" /* GXT: Standard Tank Cannon */, 16);
				break;
			case joaat("barrage"):
				StringCopy(sParam0, "WTD_V_BAR_TMG" /* GXT: Top .50 Cal Machine Gun */, 16);
				break;
			case joaat("mule4"):
				StringCopy(sParam0, "CMOD_SEWEAP_S", 16);
				break;
			case joaat("oppressor2"):
				StringCopy(sParam0, "OP_WEAP0" /* GXT: Stock Machine Guns */, 16);
				break;
			default:
				StringCopy(sParam0, "CMOD_WEAPO_S", 16);
				break;
			}
	}
}

int func_303(int iParam0, int iParam1, var uParam2)//Position - 0x16A1D7
{
	switch (iParam0)
	{
		case joaat("mamba"):
			if (BitTest(uParam2, 1))
			{
				VEHICLE::SET_VEHICLE_EXTRA(iParam1, 1, true);
			}
			if (BitTest(uParam2, 2))
			{
				VEHICLE::SET_VEHICLE_EXTRA(iParam1, 2, true);
			}
			if (BitTest(uParam2, 3))
			{
				VEHICLE::SET_VEHICLE_EXTRA(iParam1, 3, true);
			}
			return 1;
			break;
	}
	return 0;
}

void func_304(int iParam0, int iParam1)//Position - 0x16A221
{
	switch (ENTITY::GET_ENTITY_MODEL(iParam0))
	{
		case joaat("banshee"):
		case joaat("banshee2"):
			if (iParam1 == 0)
			{
				VEHICLE::SET_VEHICLE_EXTRA(iParam0, 1, true);
				VEHICLE::SET_VEHICLE_EXTRA(iParam0, 2, false);
			}
			else
			{
				VEHICLE::SET_VEHICLE_EXTRA(iParam0, 1, false);
				VEHICLE::SET_VEHICLE_EXTRA(iParam0, 2, true);
			}
			break;
		case joaat("stinger"):
		case joaat("coquette3"):
			if (iParam1 == 0)
			{
				VEHICLE::SET_VEHICLE_EXTRA(iParam0, 2, false);
			}
			else
			{
				VEHICLE::SET_VEHICLE_EXTRA(iParam0, 2, true);
			}
			break;
		case joaat("coquette2"):
			if (iParam1 == 0)
			{
				VEHICLE::SET_VEHICLE_EXTRA(iParam0, 1, true);
				VEHICLE::SET_VEHICLE_EXTRA(iParam0, 2, false);
			}
			else
			{
				VEHICLE::SET_VEHICLE_EXTRA(iParam0, 1, false);
				VEHICLE::SET_VEHICLE_EXTRA(iParam0, 2, true);
			}
			break;
		case joaat("chino"):
		case joaat("voltic"):
		case joaat("chino2"):
		case joaat("faction"):
		case joaat("faction2"):
		case joaat("faction3"):
			if (iParam1 == 0)
			{
				VEHICLE::SET_VEHICLE_EXTRA(iParam0, 2, false);
				VEHICLE::SET_VEHICLE_EXTRA(iParam0, 3, true);
			}
			else if (iParam1 == 1)
			{
				VEHICLE::SET_VEHICLE_EXTRA(iParam0, 2, true);
				VEHICLE::SET_VEHICLE_EXTRA(iParam0, 3, true);
			}
			else if (iParam1 == 2)
			{
				VEHICLE::SET_VEHICLE_EXTRA(iParam0, 2, true);
				VEHICLE::SET_VEHICLE_EXTRA(iParam0, 3, false);
			}
			break;
		case joaat("buccaneer2"):
		case joaat("peyote2"):
		case joaat("peyote3"):
			if (iParam1 == 0)
			{
				VEHICLE::SET_VEHICLE_EXTRA(iParam0, 2, true);
				VEHICLE::SET_VEHICLE_EXTRA(iParam0, 3, true);
				VEHICLE::SET_VEHICLE_EXTRA(iParam0, 4, false);
			}
			else if (iParam1 == 1)
			{
				VEHICLE::SET_VEHICLE_EXTRA(iParam0, 2, true);
				VEHICLE::SET_VEHICLE_EXTRA(iParam0, 3, true);
				VEHICLE::SET_VEHICLE_EXTRA(iParam0, 4, true);
			}
			else if (iParam1 == 2)
			{
				VEHICLE::SET_VEHICLE_EXTRA(iParam0, 2, false);
				VEHICLE::SET_VEHICLE_EXTRA(iParam0, 3, true);
				VEHICLE::SET_VEHICLE_EXTRA(iParam0, 4, true);
			}
			else if (iParam1 == 3)
			{
				VEHICLE::SET_VEHICLE_EXTRA(iParam0, 2, true);
				VEHICLE::SET_VEHICLE_EXTRA(iParam0, 3, false);
				VEHICLE::SET_VEHICLE_EXTRA(iParam0, 4, true);
			}
			break;
		case joaat("manana2"):
			if (iParam1 == 0)
			{
				VEHICLE::SET_VEHICLE_EXTRA(iParam0, 1, true);
				VEHICLE::SET_VEHICLE_EXTRA(iParam0, 2, false);
				VEHICLE::SET_VEHICLE_EXTRA(iParam0, 3, true);
				VEHICLE::SET_VEHICLE_EXTRA(iParam0, 4, true);
			}
			else if (iParam1 == 1)
			{
				VEHICLE::SET_VEHICLE_EXTRA(iParam0, 1, false);
				VEHICLE::SET_VEHICLE_EXTRA(iParam0, 2, true);
				VEHICLE::SET_VEHICLE_EXTRA(iParam0, 3, true);
				VEHICLE::SET_VEHICLE_EXTRA(iParam0, 4, true);
			}
			else if (iParam1 == 2)
			{
				VEHICLE::SET_VEHICLE_EXTRA(iParam0, 1, true);
				VEHICLE::SET_VEHICLE_EXTRA(iParam0, 2, true);
				VEHICLE::SET_VEHICLE_EXTRA(iParam0, 3, false);
				VEHICLE::SET_VEHICLE_EXTRA(iParam0, 4, true);
			}
			else if (iParam1 == 3)
			{
				VEHICLE::SET_VEHICLE_EXTRA(iParam0, 1, true);
				VEHICLE::SET_VEHICLE_EXTRA(iParam0, 2, true);
				VEHICLE::SET_VEHICLE_EXTRA(iParam0, 3, true);
				VEHICLE::SET_VEHICLE_EXTRA(iParam0, 4, false);
			}
			break;
		case joaat("stalion"):
			if (iParam1 == 0)
			{
				VEHICLE::SET_VEHICLE_EXTRA(iParam0, 1, true);
				VEHICLE::SET_VEHICLE_EXTRA(iParam0, 2, false);
				VEHICLE::SET_VEHICLE_EXTRA(iParam0, 3, true);
			}
			else if (iParam1 == 1)
			{
				VEHICLE::SET_VEHICLE_EXTRA(iParam0, 1, false);
				VEHICLE::SET_VEHICLE_EXTRA(iParam0, 2, true);
				VEHICLE::SET_VEHICLE_EXTRA(iParam0, 3, true);
			}
			else if (iParam1 == 2)
			{
				VEHICLE::SET_VEHICLE_EXTRA(iParam0, 1, true);
				VEHICLE::SET_VEHICLE_EXTRA(iParam0, 2, true);
				VEHICLE::SET_VEHICLE_EXTRA(iParam0, 3, false);
			}
			break;
		case joaat("coquette"):
			if (iParam1 == 0)
			{
				VEHICLE::REMOVE_VEHICLE_MOD(iParam0, 10);
				VEHICLE::SET_VEHICLE_EXTRA(iParam0, 2, false);
			}
			else if (iParam1 == 1)
			{
				VEHICLE::REMOVE_VEHICLE_MOD(iParam0, 10);
				VEHICLE::SET_VEHICLE_EXTRA(iParam0, 2, true);
			}
			else if (iParam1 == 2)
			{
				VEHICLE::SET_VEHICLE_MOD(iParam0, 10, 0, false);
				VEHICLE::SET_VEHICLE_EXTRA(iParam0, 2, false);
			}
			break;
		case joaat("mamba"):
			if (iParam1 == 0)
			{
				VEHICLE::SET_VEHICLE_EXTRA(iParam0, 1, true);
				VEHICLE::SET_VEHICLE_EXTRA(iParam0, 2, false);
				VEHICLE::SET_VEHICLE_EXTRA(iParam0, 3, false);
			}
			else if (iParam1 == 1)
			{
				VEHICLE::SET_VEHICLE_EXTRA(iParam0, 1, true);
				VEHICLE::SET_VEHICLE_EXTRA(iParam0, 2, false);
				VEHICLE::SET_VEHICLE_EXTRA(iParam0, 3, true);
			}
			else if (iParam1 == 2)
			{
				VEHICLE::SET_VEHICLE_EXTRA(iParam0, 1, false);
				VEHICLE::SET_VEHICLE_EXTRA(iParam0, 2, true);
				VEHICLE::SET_VEHICLE_EXTRA(iParam0, 3, true);
			}
			break;
		case joaat("pfister811"):
			if (iParam1 == 0)
			{
				VEHICLE::REMOVE_VEHICLE_MOD(iParam0, 10);
				VEHICLE::SET_VEHICLE_EXTRA(iParam0, 1, false);
			}
			else if (iParam1 == 1)
			{
				VEHICLE::REMOVE_VEHICLE_MOD(iParam0, 10);
				VEHICLE::SET_VEHICLE_EXTRA(iParam0, 1, true);
			}
			else if (iParam1 == 2)
			{
				VEHICLE::SET_VEHICLE_MOD(iParam0, 10, 0, false);
				VEHICLE::SET_VEHICLE_EXTRA(iParam0, 1, false);
			}
			break;
		case joaat("contender"):
		case joaat("kamacho"):
			if (iParam1 == 0)
			{
				VEHICLE::SET_VEHICLE_EXTRA(iParam0, 1, false);
			}
			else
			{
				VEHICLE::SET_VEHICLE_EXTRA(iParam0, 1, true);
			}
			break;
		default:
			if (__LIB_9__::func_238(ENTITY::GET_ENTITY_MODEL(iParam0)))
			{
				switch (iParam1)
				{
					case 0:
						VEHICLE::SET_VEHICLE_EXTRA(iParam0, 1, true);
						VEHICLE::SET_VEHICLE_EXTRA(iParam0, 2, true);
						VEHICLE::SET_VEHICLE_EXTRA(iParam0, 3, true);
						VEHICLE::SET_VEHICLE_EXTRA(iParam0, 4, true);
						break;
					case 1:
						VEHICLE::SET_VEHICLE_EXTRA(iParam0, 1, false);
						VEHICLE::SET_VEHICLE_EXTRA(iParam0, 2, true);
						VEHICLE::SET_VEHICLE_EXTRA(iParam0, 3, true);
						VEHICLE::SET_VEHICLE_EXTRA(iParam0, 4, true);
						break;
					case 2:
						VEHICLE::SET_VEHICLE_EXTRA(iParam0, 1, true);
						VEHICLE::SET_VEHICLE_EXTRA(iParam0, 2, false);
						VEHICLE::SET_VEHICLE_EXTRA(iParam0, 3, true);
						VEHICLE::SET_VEHICLE_EXTRA(iParam0, 4, true);
						break;
					case 3:
						VEHICLE::SET_VEHICLE_EXTRA(iParam0, 1, true);
						VEHICLE::SET_VEHICLE_EXTRA(iParam0, 2, true);
						VEHICLE::SET_VEHICLE_EXTRA(iParam0, 3, false);
						VEHICLE::SET_VEHICLE_EXTRA(iParam0, 4, true);
						break;
					case 4:
						VEHICLE::SET_VEHICLE_EXTRA(iParam0, 1, true);
						VEHICLE::SET_VEHICLE_EXTRA(iParam0, 2, true);
						VEHICLE::SET_VEHICLE_EXTRA(iParam0, 3, true);
						VEHICLE::SET_VEHICLE_EXTRA(iParam0, 4, false);
						break;
					}
			}
			break;
	}
}

int func_305(int iParam0, var uParam1, int iParam2)//Position - 0x16A6F9
{
	switch (iParam0)
	{
		case joaat("banshee"):
		case joaat("banshee2"):
			if (!BitTest(uParam1, 1))
			{
				return 1;
			}
			break;
		case joaat("stinger"):
		case joaat("coquette2"):
		case joaat("coquette3"):
			if (!BitTest(uParam1, 1))
			{
				return 1;
			}
			break;
		case joaat("chino"):
		case joaat("voltic"):
		case joaat("stalion"):
		case joaat("chino2"):
		case joaat("faction"):
		case joaat("faction2"):
		case joaat("faction3"):
			if (!BitTest(uParam1, 1) && !BitTest(uParam1, 2))
			{
				return 1;
			}
			break;
		case joaat("buccaneer2"):
		case joaat("peyote2"):
		case joaat("peyote3"):
			if ((!BitTest(uParam1, 1) && !BitTest(uParam1, 2)) && !BitTest(uParam1, 3))
			{
				return 1;
			}
			break;
		case joaat("manana2"):
			if (BitTest(uParam1, 0))
			{
				return 1;
			}
			break;
		case joaat("coquette"):
			if (!BitTest(uParam1, 1) && iParam2 != 1)
			{
				return 1;
			}
			break;
		case joaat("mamba"):
			if ((!BitTest(uParam1, 0) && BitTest(uParam1, 1)) && !BitTest(uParam1, 2))
			{
				return 1;
			}
			break;
		case joaat("pfister811"):
			if (!BitTest(uParam1, 0) && iParam2 != 1)
			{
				return 1;
			}
			break;
		case joaat("contender"):
		case joaat("kamacho"):
			if (!BitTest(uParam1, 0))
			{
				return 1;
			}
			break;
		default:
			if (__LIB_9__::func_238(iParam0))
			{
				if (BitTest(uParam1, 0))
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_306(int iParam0, var uParam1, int iParam2, int iParam3)//Position - 0x16A867
{
	switch (iParam0)
	{
		case joaat("banshee"):
		case joaat("banshee2"):
			if (BitTest(uParam1, 1))
			{
				return 1;
			}
			break;
		case joaat("stinger"):
		case joaat("coquette2"):
		case joaat("coquette3"):
			if (BitTest(uParam1, 1))
			{
				return 1;
			}
			break;
		case joaat("chino"):
		case joaat("voltic"):
		case joaat("stalion"):
		case joaat("chino2"):
		case joaat("faction"):
		case joaat("faction2"):
		case joaat("faction3"):
			if (iParam2 == 0)
			{
				if (BitTest(uParam1, 1))
				{
					return 1;
				}
			}
			else if (iParam2 == 1)
			{
				if (BitTest(uParam1, 2))
				{
					return 1;
				}
			}
			break;
		case joaat("buccaneer2"):
		case joaat("peyote2"):
		case joaat("peyote3"):
			if (iParam2 == 0)
			{
				if (BitTest(uParam1, 3))
				{
					return 1;
				}
			}
			else if (iParam2 == 1)
			{
				if (BitTest(uParam1, 1))
				{
					return 1;
				}
			}
			else if (iParam2 == 2)
			{
				if (BitTest(uParam1, 2))
				{
					return 1;
				}
			}
			break;
		case joaat("manana2"):
			if (iParam2 == 0)
			{
				if (BitTest(uParam1, 1))
				{
					return 1;
				}
			}
			else if (iParam2 == 1)
			{
				if (BitTest(uParam1, 2))
				{
					return 1;
				}
			}
			else if (iParam2 == 2)
			{
				if (BitTest(uParam1, 3))
				{
					return 1;
				}
			}
			break;
		case joaat("coquette"):
			if (iParam2 == 0)
			{
				if (BitTest(uParam1, 1) && iParam3 != 1)
				{
					return 1;
				}
			}
			else if (iParam2 == 1)
			{
				if (iParam3 == 1)
				{
					return 1;
				}
			}
			break;
		case joaat("mamba"):
			if (iParam2 == 0)
			{
				if ((!BitTest(uParam1, 0) && BitTest(uParam1, 1)) && BitTest(uParam1, 2))
				{
					return 1;
				}
			}
			else if (iParam2 == 1)
			{
				if ((BitTest(uParam1, 0) && !BitTest(uParam1, 1)) && !BitTest(uParam1, 2))
				{
					return 1;
				}
			}
			break;
		case joaat("pfister811"):
			if (iParam2 == 0)
			{
				if (BitTest(uParam1, 0) && iParam3 != 1)
				{
					return 1;
				}
			}
			else if (iParam2 == 1)
			{
				if (iParam3 == 1)
				{
					return 1;
				}
			}
			break;
		case joaat("contender"):
		case joaat("kamacho"):
			if (BitTest(uParam1, 0))
			{
				return 1;
			}
			break;
		default:
			if (__LIB_9__::func_238(iParam0))
			{
				switch (iParam2)
				{
					case 0:
						if (((!BitTest(uParam1, 0) && !BitTest(uParam1, 1)) && !BitTest(uParam1, 2)) && !BitTest(uParam1, 3))
						{
							return 1;
						}
						break;
					case 1:
						if (BitTest(uParam1, 1))
						{
							return 1;
						}
						break;
					case 2:
						if (BitTest(uParam1, 2))
						{
							return 1;
						}
						break;
					case 3:
						if (BitTest(uParam1, 3))
						{
							return 1;
						}
						break;
					}
			}
			break;
	}
	return 0;
}

int func_307(int iParam0)//Position - 0x16AAF0
{
	switch (iParam0)
	{
		case joaat("banshee"):
		case joaat("stinger"):
		case joaat("coquette"):
		case joaat("coquette2"):
		case joaat("coquette3"):
		case joaat("chino"):
		case joaat("voltic"):
		case joaat("stalion"):
		case joaat("chino2"):
		case joaat("faction"):
		case joaat("faction2"):
		case joaat("faction3"):
		case joaat("buccaneer2"):
		case joaat("mamba"):
		case joaat("banshee2"):
		case joaat("pfister811"):
		case joaat("contender"):
		case joaat("kamacho"):
		case joaat("peyote2"):
		case joaat("peyote3"):
		case joaat("manana2"):
			return 1;
			break;
		default:
			if (__LIB_9__::func_238(iParam0))
			{
				return 1;
			}
			break;
	}
	return 0;
}

bool func_308(int iParam0, int iParam1, char* sParam2)//Position - 0x16AEC6
{
	StringCopy(sParam2, "", 16);
	switch (ENTITY::GET_ENTITY_MODEL(iParam0))
	{
		case joaat("tornado5"):
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "T5_ROOF0" /* GXT: Stock Roof */, 16);
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "T5_ROOF1" /* GXT: Leopard Roof */, 16);
			}
			else if (iParam1 == 2)
			{
				StringCopy(sParam2, "T5_ROOF2" /* GXT: Tiger Roof */, 16);
			}
			else if (iParam1 == 3)
			{
				StringCopy(sParam2, "T5_ROOF3" /* GXT: Zebra Roof */, 16);
			}
			else if (iParam1 == 4)
			{
				StringCopy(sParam2, "T5_ROOF4" /* GXT: Croc Roof */, 16);
			}
			else if (iParam1 == 5)
			{
				StringCopy(sParam2, "T5_ROOF5" /* GXT: Camo Roof */, 16);
			}
			else if (iParam1 == 6)
			{
				StringCopy(sParam2, "T5_ROOF6" /* GXT: Digital Camo Roof */, 16);
			}
			break;
		case joaat("bati2"):
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "BATI_lV1" /* GXT: Redwood */, 16);
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "BATI_lV2" /* GXT: Barracho */, 16);
			}
			else if (iParam1 == 2)
			{
				StringCopy(sParam2, "BATI_lV3" /* GXT: Stronzo */, 16);
			}
			else if (iParam1 == 3)
			{
				StringCopy(sParam2, "BATI_lV4" /* GXT: Sprunk */, 16);
			}
			break;
		case joaat("sanchez"):
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "SANC_lV1" /* GXT: Sprunk Xtreme */, 16);
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "SANC_lV2" /* GXT: Atomic Tires */, 16);
			}
			else if (iParam1 == 2)
			{
				StringCopy(sParam2, "SANC_lV3" /* GXT: Patriot Beer */, 16);
			}
			else if (iParam1 == 3)
			{
				StringCopy(sParam2, "SANC_lV4" /* GXT: Shrewsbury */, 16);
			}
			else if (iParam1 == 4)
			{
				StringCopy(sParam2, "SANC_lV5" /* GXT: Fort Zancudo */, 16);
			}
			break;
		case joaat("paradise"):
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "SSS_SURF" /* GXT: Surf */, 16);
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "SSS_SHARK" /* GXT: Shark */, 16);
			}
			else if (iParam1 == 2)
			{
				StringCopy(sParam2, "SSS_LOGGER" /* GXT: Logger */, 16);
			}
			else if (iParam1 == 3)
			{
				StringCopy(sParam2, "SSS_OCTOPUS" /* GXT: Octopus */, 16);
			}
			break;
		case joaat("windsor"):
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "WINDSOR_LV1" /* GXT: Blank Canvas */, 16);
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "WINDSOR_LV2" /* GXT: Sessanta Nove Monogram */, 16);
			}
			else if (iParam1 == 2)
			{
				StringCopy(sParam2, "WINDSOR_LV3" /* GXT: Sessanta Nove Multi-Color */, 16);
			}
			else if (iParam1 == 3)
			{
				StringCopy(sParam2, "WINDSOR_LV4" /* GXT: Sessanta Nove Geometric */, 16);
			}
			else if (iParam1 == 4)
			{
				StringCopy(sParam2, "WINDSOR_LV5" /* GXT: Perseus Wings Monogram */, 16);
			}
			else if (iParam1 == 5)
			{
				StringCopy(sParam2, "WINDSOR_LV6" /* GXT: Perseus Green Wings Monogram */, 16);
			}
			else if (iParam1 == 6)
			{
				StringCopy(sParam2, "WINDSOR_LV7" /* GXT: Santo Capra Python */, 16);
			}
			else if (iParam1 == 7)
			{
				StringCopy(sParam2, "WINDSOR_LV8" /* GXT: Santo Capra Cheetah */, 16);
			}
			else if (iParam1 == 8)
			{
				StringCopy(sParam2, "WINDSOR_LV9" /* GXT: Yeti Mall Ninja */, 16);
			}
			break;
	}
	return !MISC::IS_STRING_NULL_OR_EMPTY(sParam2);
}

int func_309()//Position - 0x16C211
{
	return Global_103233;
}

int func_310()//Position - 0x16C21D
{
	return Global_103232;
}

void func_311(int iParam0, int iParam1)//Position - 0x16C285
{
	switch (iParam0)
	{
		case 0:
			__LIB_0__::func_779(joaat("MPPLY_PERSZOLAPUMA0"), iParam1);
			break;
		case 1:
			__LIB_0__::func_779(joaat("MPPLY_PERSZOLAPUMA1"), iParam1);
			break;
		case 2:
			__LIB_0__::func_779(joaat("MPPLY_PERSZOLAPUMA2"), iParam1);
			break;
		case 3:
			__LIB_0__::func_779(joaat("MPPLY_PERSZOLAPUMA3"), iParam1);
			break;
		case 4:
			__LIB_0__::func_779(joaat("MPPLY_PERSZOLAPUMA4"), iParam1);
			break;
	}
	Global_1585098[iParam0] = iParam1;
}

int func_312(int iParam0)//Position - 0x16C326
{
	switch (iParam0)
	{
		case 0:
			return __LIB_0__::func_714(joaat("MPPLY_PERSZOLAPUMA0"));
		case 1:
			return __LIB_0__::func_714(joaat("MPPLY_PERSZOLAPUMA1"));
		case 2:
			return __LIB_0__::func_714(joaat("MPPLY_PERSZOLAPUMA2"));
		case 3:
			return __LIB_0__::func_714(joaat("MPPLY_PERSZOLAPUMA3"));
		case 4:
			return __LIB_0__::func_714(joaat("MPPLY_PERSZOLAPUMA4"));
		default:
	}
	return 0;
}

int func_313()//Position - 0x16C6CD
{
	if (Global_2359296[0 /*5567*/].f_593.f_61 > 0)
	{
		return 1;
	}
	return 0;
}

int func_314()//Position - 0x16C6EB
{
	if (Global_262145.f_10592 /* Tunable: DISABLE_SC_NUMBER_PLATE_APPLY */ || iLocal_171 >= Global_1585301)
	{
		return 1;
	}
	return 0;
}

int func_315(int iParam0, int iParam1)//Position - 0x16E1BD
{
	switch (iParam0)
	{
		case 0:
			break;
		case 1:
			if (iParam1 == 2)
			{
				return 1;
			}
			break;
		case 2:
			if (iParam1 == 3)
			{
				return 1;
			}
			break;
		case 3:
			if (iParam1 == 0 || iParam1 == 1)
			{
				return 1;
			}
			break;
		case 4:
			if (iParam1 == 2 || iParam1 == 3)
			{
				return 1;
			}
			break;
		case 5:
			if ((iParam1 == 2 || iParam1 == 0) || iParam1 == 1)
			{
				return 1;
			}
			break;
		case 6:
			if ((iParam1 == 3 || iParam1 == 0) || iParam1 == 1)
			{
				return 1;
			}
			break;
		case 7:
			if (((iParam1 == 2 || iParam1 == 3) || iParam1 == 0) || iParam1 == 1)
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_316(int iParam0, int iParam1, int iParam2)//Position - 0x16E2BA
{
	if ((iParam0 == 222 && iParam1 == 222) && iParam2 == 255)
	{
		return 2;
	}
	else if ((iParam0 == 2 && iParam1 == 21) && iParam2 == 255)
	{
		return 3;
	}
	else if ((iParam0 == 3 && iParam1 == 83) && iParam2 == 255)
	{
		return 4;
	}
	else if ((iParam0 == 0 && iParam1 == 255) && iParam2 == 140)
	{
		return 5;
	}
	else if ((iParam0 == 94 && iParam1 == 255) && iParam2 == 1)
	{
		return 6;
	}
	else if ((iParam0 == 255 && iParam1 == 255) && iParam2 == 0)
	{
		return 7;
	}
	else if ((iParam0 == 255 && iParam1 == 150) && iParam2 == 5)
	{
		return 8;
	}
	else if ((iParam0 == 255 && iParam1 == 62) && iParam2 == 0)
	{
		return 9;
	}
	else if ((iParam0 == 255 && iParam1 == 1) && iParam2 == 1)
	{
		return 10;
	}
	else if ((iParam0 == 255 && iParam1 == 50) && iParam2 == 100)
	{
		return 11;
	}
	else if ((iParam0 == 255 && iParam1 == 5) && iParam2 == 190)
	{
		return 12;
	}
	else if ((iParam0 == 35 && iParam1 == 1) && iParam2 == 255)
	{
		return 13;
	}
	else if ((iParam0 == 15 && iParam1 == 3) && iParam2 == 255)
	{
		return 14;
	}
	else if ((iParam0 == Global_1576215 && iParam1 == Global_1576216) && iParam2 == Global_1576217)
	{
		return 1;
	}
	return 255;
}

int func_317(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x16E4AC
{
	switch (iParam0)
	{
		case 0:
			*iParam1 = 222;
			*iParam2 = 222;
			*iParam3 = 255;
			return 1;
			break;
		case 1:
			*iParam1 = 2;
			*iParam2 = 21;
			*iParam3 = 255;
			return 1;
			break;
		case 2:
			*iParam1 = 3;
			*iParam2 = 83;
			*iParam3 = 255;
			return 1;
			break;
		case 3:
			*iParam1 = 0;
			*iParam2 = 255;
			*iParam3 = 140;
			return 1;
			break;
		case 4:
			*iParam1 = 94;
			*iParam2 = 255;
			*iParam3 = 1;
			return 1;
			break;
		case 5:
			*iParam1 = 255;
			*iParam2 = 255;
			*iParam3 = 0;
			return 1;
			break;
		case 6:
			*iParam1 = 255;
			*iParam2 = 150;
			*iParam3 = 5;
			return 1;
			break;
		case 7:
			*iParam1 = 255;
			*iParam2 = 62;
			*iParam3 = 0;
			return 1;
			break;
		case 8:
			*iParam1 = 255;
			*iParam2 = 1;
			*iParam3 = 1;
			return 1;
			break;
		case 9:
			*iParam1 = 255;
			*iParam2 = 50;
			*iParam3 = 100;
			return 1;
			break;
		case 10:
			*iParam1 = 255;
			*iParam2 = 5;
			*iParam3 = 190;
			return 1;
			break;
		case 11:
			*iParam1 = 35;
			*iParam2 = 1;
			*iParam3 = 255;
			return 1;
			break;
		case 12:
			*iParam1 = 15;
			*iParam2 = 3;
			*iParam3 = 255;
			return 1;
			break;
		case 13:
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				*iParam1 = Global_1576215;
				*iParam2 = Global_1576216;
				*iParam3 = Global_1576217;
				return 1;
			}
			break;
	}
	return 0;
}

int func_318()//Position - 0x17018E
{
	if ((__LIB_0__::func_52() || __LIB_0__::func_53()) || MISC::IS_PC_VERSION())
	{
		return 1;
	}
	return 0;
}

int func_319(int iParam0)//Position - 0x1701B6
{
	if (((((((((((((((((((iParam0 == __LIB_3__::func_664(joaat("LOWRIDER_HORN_1")) || iParam0 == __LIB_3__::func_664(joaat("LOWRIDER_HORN_2"))) || iParam0 == __LIB_3__::func_664(joaat("LOWRIDER_HORN_1_PREVIEW"))) || iParam0 == __LIB_3__::func_664(joaat("LOWRIDER_HORN_2_PREVIEW"))) || iParam0 == __LIB_3__::func_664(joaat("ORGAN_HORN_LOOP_01"))) || iParam0 == __LIB_3__::func_664(joaat("ORGAN_HORN_LOOP_02"))) || iParam0 == __LIB_3__::func_664(joaat("ORGAN_HORN_LOOP_01_PREVIEW"))) || iParam0 == __LIB_3__::func_664(joaat("ORGAN_HORN_LOOP_02_PREVIEW"))) || iParam0 == __LIB_3__::func_664(joaat("XM15_HORN_01"))) || iParam0 == __LIB_3__::func_664(joaat("XM15_HORN_02"))) || iParam0 == __LIB_3__::func_664(joaat("XM15_HORN_03"))) || iParam0 == __LIB_3__::func_664(joaat("XM15_HORN_01_PREVIEW"))) || iParam0 == __LIB_3__::func_664(joaat("XM15_HORN_02_PREVIEW"))) || iParam0 == __LIB_3__::func_664(joaat("XM15_HORN_03_PREVIEW"))) || iParam0 == __LIB_3__::func_664(joaat("dlc_aw_airhorn_01"))) || iParam0 == __LIB_3__::func_664(joaat("dlc_aw_airhorn_02"))) || iParam0 == __LIB_3__::func_664(joaat("dlc_aw_airhorn_03"))) || iParam0 == __LIB_3__::func_664(joaat("dlc_aw_airhorn_01_preview"))) || iParam0 == __LIB_3__::func_664(joaat("dlc_aw_airhorn_02_preview"))) || iParam0 == __LIB_3__::func_664(joaat("dlc_aw_airhorn_03_preview")))
	{
		return 1;
	}
	return 0;
}

int func_320(int iParam0)//Position - 0x172ACC
{
	switch (iParam0)
	{
		case 38:
		case 39:
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
		case 65:
			return 1;
			break;
	}
	return 0;
}

int func_321(int iParam0)//Position - 0x172B7F
{
	switch (iParam0)
	{
		case 11:
		case 38:
			return 1;
			break;
		case 34:
			break;
	}
	return 0;
}

int func_322()//Position - 0x173517
{
	if (((((ENTITY::GET_ENTITY_MODEL(Local_124.f_406) != joaat("gauntlet") || Local_470.f_9[15] == -1) || Local_470.f_9[12] != VEHICLE::GET_NUM_VEHICLE_MODS(Local_124.f_406, 12)) || Local_470.f_9[11] != VEHICLE::GET_NUM_VEHICLE_MODS(Local_124.f_406, 11)) || Local_470.f_69 != 4) || Local_470.f_9[23] != 9)
	{
		return 0;
	}
	return 1;
}

int func_323()//Position - 0x1745EB
{
	switch (ENTITY::GET_ENTITY_MODEL(Local_124.f_406))
	{
		case joaat("cheetah2"):
		case joaat("comet4"):
		case joaat("z190"):
		case joaat("fagaloa"):
		case joaat("issi3"):
		case joaat("dynasty"):
		case joaat("nebula"):
		case joaat("gauntlet3"):
		case joaat("rebla"):
		case joaat("kanjo"):
		case joaat("retinue2"):
		case joaat("youga3"):
		case joaat("yosemite3"):
		case joaat("seminole2"):
		case joaat("comet6"):
		case joaat("sultan3"):
		case joaat("dominator8"):
		case joaat("futo2"):
		case joaat("tenf"):
		case joaat("kanjosj"):
		case joaat("zentorno"):
		case joaat("draugur"):
		case joaat("tenf2"):
		case joaat("picador"):
		case joaat("brioso3"):
			return 1;
		default:
	}
	return 0;
}

int func_324()//Position - 0x17469D
{
	if (__LIB_4__::func_533(Local_124.f_406))
	{
		return 1;
	}
	if (__LIB_4__::func_534(Local_124.f_406))
	{
		return 1;
	}
	switch (ENTITY::GET_ENTITY_MODEL(Local_124.f_406))
	{
		case joaat("gp1"):
		case joaat("rapidgt3"):
		case joaat("dominator3"):
		case joaat("oppressor2"):
		case joaat("impaler2"):
		case joaat("rcbandito"):
		case joaat("impaler3"):
		case joaat("impaler4"):
		case joaat("zion3"):
		case joaat("issi7"):
		case joaat("drafter"):
		case joaat("gauntlet4"):
		case joaat("asbo"):
		case joaat("vstr"):
		case joaat("sultan2"):
		case joaat("vagrant"):
		case joaat("dukes3"):
		case joaat("brioso2"):
		case joaat("squaddie"):
		case joaat("cypher"):
		case joaat("growler"):
		case joaat("patriot3"):
		case joaat("granger2"):
		case joaat("buffalo4"):
		case joaat("deity"):
		case joaat("vigero2"):
		case joaat("torero2"):
		case joaat("draugur"):
		case joaat("greenwood"):
		case joaat("omnisegt"):
			return 1;
		default:
	}
	return 0;
}

void func_325()//Position - 0x175A9B
{
	int iVar0;
	iVar0 = ENTITY::GET_ENTITY_MODEL(Local_124.f_406);
	if (__LIB_0__::func_596(iVar0))
	{
		if (Local_124.f_443 == 81)
		{
			if (Local_124.f_116.f_1 == 2)
			{
				VEHICLE::SET_VEHICLE_ALLOW_HOMING_MISSLE_LOCKON_SYNCED(Local_124.f_406, false, true);
			}
			else
			{
				VEHICLE::SET_VEHICLE_ALLOW_HOMING_MISSLE_LOCKON_SYNCED(Local_124.f_406, true, true);
			}
		}
	}
}

int func_326()//Position - 0x176060
{
	if (ENTITY::DOES_ENTITY_EXIST(Local_124.f_406))
	{
		switch (ENTITY::GET_ENTITY_MODEL(Local_124.f_406))
		{
			case joaat("slamvan3"):
			case joaat("youga3"):
			case joaat("sentinel4"):
				return 0;
				break;
			default:
				if (__LIB_1__::func_932(ENTITY::GET_ENTITY_MODEL(Local_124.f_406)))
				{
					return 0;
				}
				break;
			}
	}
	return 1;
}

int func_327()//Position - 0x1760B6
{
	if (ENTITY::DOES_ENTITY_EXIST(Local_124.f_406))
	{
		switch (ENTITY::GET_ENTITY_MODEL(Local_124.f_406))
		{
			case joaat("asbo"):
				return 1;
				break;
			}
	}
	return 0;
}

int func_328()//Position - 0x1760E8
{
	if (ENTITY::DOES_ENTITY_EXIST(Local_124.f_406))
	{
		switch (ENTITY::GET_ENTITY_MODEL(Local_124.f_406))
		{
			case joaat("gauntlet5"):
			case joaat("weevil2"):
				if (Local_124.f_443 == 14)
				{
					return 1;
				}
				break;
			case joaat("tenf2"):
				if (Local_124.f_443 == 14)
				{
					return 1;
				}
				break;
			}
	}
	return 0;
}

int func_329(int iParam0)//Position - 0x176143
{
	if (Local_124.f_443 != 85)
	{
		return 0;
	}
	switch (ENTITY::GET_ENTITY_MODEL(Local_124.f_406))
	{
		case joaat("trailerlarge"):
			if (iParam0 > 0 && !Global_262145.f_21234 /* Tunable: ENABLE_TRAILERLARGE_LIVERIES */)
			{
				return 1;
			}
			break;
		case joaat("revolter"):
			if (iParam0 > 20 && iParam0 < 31)
			{
				return 1;
			}
			break;
		case joaat("streiter"):
			if (iParam0 > 9 && iParam0 < 21)
			{
				return 1;
			}
			break;
		case joaat("drafter"):
			if (iParam0 > 9)
			{
				return 1;
			}
			break;
		case joaat("formula2"):
			if (iParam0 == 1 || iParam0 == 5)
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_330()//Position - 0x1761FB
{
	int iVar0;
	iVar0 = ENTITY::GET_ENTITY_MODEL(Local_124.f_406);
	switch (iVar0)
	{
		case joaat("blazer4"):
		case joaat("oppressor"):
		case joaat("barrage"):
		case joaat("issi3"):
			return 1;
			break;
	}
	return 0;
}

int func_331(int iParam0)//Position - 0x177063
{
	switch (iParam0)
	{
		case joaat("peyote3"):
		case joaat("previon"):
		case joaat("tailgater2"):
		case joaat("vectre"):
		case joaat("jester4"):
		case joaat("euros"):
		case joaat("sm722"):
		case joaat("torero2"):
		case joaat("lm87"):
		case joaat("tenf"):
		case joaat("tenf2"):
		case joaat("ruiner4"):
		case joaat("draugur"):
		case joaat("sentinel4"):
			return 1;
			break;
	}
	return 0;
}

bool func_332(struct<3> Param0, struct<3> Param1, struct<3> Param2)//Position - 0x177D59
{
	float fVar0;
	fVar0 = __LIB_0__::func_156(Param2 - Param1, Param0);
	return fVar0 >= 0f;
}

void func_333(var uParam0)//Position - 0x17C41C
{
	int iVar0;
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	iVar0 = (uParam0->f_653 - 1);
	MISC::SET_BIT(&(uParam0->f_653[iVar0]), 30);
}

void func_334(int iParam0)//Position - 0x183081
{
	if ((ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false)) && iParam0 == Global_78042)
	{
		Global_113386.f_32749.f_5588 = 0;
		Global_78042 = 0;
	}
}

void func_335(bool bParam0)//Position - 0x1830BA
{
	if (bParam0)
	{
		if (!BitTest(uLocal_202, 21))
		{
			MISC::SET_BIT(&uLocal_202, 21);
		}
	}
	else if (BitTest(uLocal_202, 21))
	{
		MISC::CLEAR_BIT(&uLocal_202, 21);
	}
}

void func_336(bool bParam0)//Position - 0x1830EF
{
	if (bParam0)
	{
		if (!BitTest(uLocal_202, 22))
		{
			MISC::SET_BIT(&uLocal_202, 22);
		}
	}
	else if (BitTest(uLocal_202, 22))
	{
		MISC::CLEAR_BIT(&uLocal_202, 22);
	}
}

void func_337(bool bParam0)//Position - 0x183124
{
	if (bParam0)
	{
		if (!BitTest(uLocal_202, 15))
		{
			MISC::SET_BIT(&uLocal_202, 15);
		}
	}
	else if (BitTest(uLocal_202, 15))
	{
		MISC::CLEAR_BIT(&uLocal_202, 15);
	}
}

void func_338(bool bParam0)//Position - 0x183159
{
	if (bParam0)
	{
		if (!BitTest(uLocal_202, 16))
		{
			MISC::SET_BIT(&uLocal_202, 16);
		}
	}
	else if (BitTest(uLocal_202, 16))
	{
		MISC::CLEAR_BIT(&uLocal_202, 16);
	}
}

void func_339(bool bParam0)//Position - 0x18318E
{
	if (bParam0)
	{
		if (!BitTest(uLocal_202, 20))
		{
			MISC::SET_BIT(&uLocal_202, 20);
		}
	}
	else if (BitTest(uLocal_202, 20))
	{
		MISC::CLEAR_BIT(&uLocal_202, 20);
	}
}

void func_340(bool bParam0)//Position - 0x1831C3
{
	if (bParam0)
	{
		if (!BitTest(uLocal_202, 17))
		{
			MISC::SET_BIT(&uLocal_202, 17);
		}
	}
	else if (BitTest(uLocal_202, 17))
	{
		MISC::CLEAR_BIT(&uLocal_202, 17);
	}
}

bool func_341()//Position - 0x1831F8
{
	return BitTest(uLocal_202, 20);
}

int func_342(int iParam0)//Position - 0x1833E1
{
	if (!ENTITY::DOES_ENTITY_EXIST(Local_124.f_406) || !VEHICLE::IS_VEHICLE_DRIVEABLE(Local_124.f_406, false))
	{
		return 0;
	}
	if (iParam0 == 3)
	{
		return 1;
	}
	return 1;
}

bool func_343()//Position - 0x183418
{
	return BitTest(uLocal_202, 17);
}

int func_344()//Position - 0x183584
{
	char cVar0[64];
	StringCopy(&cVar0, "BCM_VEH_0_t0_v0_SELL", 64);
	return MISC::GET_HASH_KEY(&cVar0);
}

int func_345()//Position - 0x18359B
{
	char cVar0[64];
	StringCopy(&cVar0, "MP_STAT_MISSION_BIKER_CLIENT_v0", 64);
	return MISC::GET_HASH_KEY(&cVar0);
}

int func_346(int iParam0, int iParam1)//Position - 0x183726
{
	char cVar0[64];
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 1:
					StringCopy(&cVar0, "TS_VEH_0_t0_v0_SELL", 64);
					break;
				case 2:
					StringCopy(&cVar0, "TS_VEH_1_t0_v0_SELL", 64);
					break;
				case 3:
					StringCopy(&cVar0, "TS_VEH_2_t0_v0_SELL", 64);
					break;
			}
			break;
		case 1:
			switch (iParam0)
			{
				case 1:
					StringCopy(&cVar0, "TS_VEH_0_t0_v1_SELL", 64);
					break;
				case 2:
					StringCopy(&cVar0, "TS_VEH_1_t0_v1_SELL", 64);
					break;
				case 3:
					StringCopy(&cVar0, "TS_VEH_2_t0_v1_SELL", 64);
					break;
			}
			break;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar0))
	{
		return -1;
	}
	return MISC::GET_HASH_KEY(&cVar0);
}

int func_347(int iParam0)//Position - 0x1837D4
{
	char cVar0[64];
	switch (iParam0)
	{
		case 0:
			StringCopy(&cVar0, "MP_STAT_MISSION_TUNER_CLIENT_0_v0", 64);
			break;
		case 1:
			StringCopy(&cVar0, "MP_STAT_MISSION_TUNER_CLIENT_1_v0", 64);
			break;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar0))
	{
		return -1;
	}
	return MISC::GET_HASH_KEY(&cVar0);
}

int func_348(int iParam0)//Position - 0x185A46
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (__LIB_0__::func_640(PLAYER::PLAYER_ID()))
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_124.f_406) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_124.f_406, false))
			{
				if (DECORATOR::DECOR_EXIST_ON(iParam0, "Player_Vehicle"))
				{
					if (DECORATOR::DECOR_GET_INT(iParam0, "Player_Vehicle") != NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(PLAYER::PLAYER_ID()))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_349()//Position - 0x185AA4
{
	if (BitTest(Global_1574989, 6))
	{
		return 1;
	}
	if (BitTest(Global_4718592.f_39, 7))
	{
		return 1;
	}
	return 0;
}

int func_350(int iParam0)//Position - 0x185AC9
{
	switch (iParam0)
	{
		case joaat("slamvan"):
		case joaat("glendale"):
			return 2;
			break;
	}
	return 1;
}

bool func_351()//Position - 0x185C5A
{
	return BitTest(Global_103905, 9);
}

bool func_352()//Position - 0x185D83
{
	return BitTest(uLocal_202, 21);
}

bool func_353()//Position - 0x185D91
{
	return BitTest(uLocal_202, 22);
}

bool func_354()//Position - 0x185E4C
{
	return BitTest(uLocal_202, 16);
}

bool func_355()//Position - 0x185E5A
{
	return BitTest(uLocal_202, 15);
}

void func_356(bool bParam0)//Position - 0x1861EC
{
	if (bParam0)
	{
		if (!BitTest(uLocal_202, 19))
		{
			MISC::SET_BIT(&uLocal_202, 19);
		}
	}
	else if (BitTest(uLocal_202, 19))
	{
		MISC::CLEAR_BIT(&uLocal_202, 19);
	}
}

void func_357(bool bParam0)//Position - 0x186221
{
	if (bParam0)
	{
		if (!BitTest(uLocal_202, 14))
		{
			MISC::SET_BIT(&uLocal_202, 14);
		}
	}
	else if (BitTest(uLocal_202, 14))
	{
		MISC::CLEAR_BIT(&uLocal_202, 14);
	}
}

int func_358(int iParam0, bool bParam1)//Position - 0x186DAC
{
	int iVar0;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		return 0;
	}
	if (!STREAMING::IS_MODEL_A_VEHICLE(ENTITY::GET_ENTITY_MODEL(iParam0)))
	{
		return 0;
	}
	if (VEHICLE::IS_BIG_VEHICLE(iParam0))
	{
		return 0;
	}
	if (((((!VEHICLE::IS_THIS_MODEL_A_CAR(ENTITY::GET_ENTITY_MODEL(iParam0)) && !VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(iParam0))) && ENTITY::GET_ENTITY_MODEL(iParam0) != joaat("blazer")) && ENTITY::GET_ENTITY_MODEL(iParam0) != joaat("blazer3")) && ENTITY::GET_ENTITY_MODEL(iParam0) != joaat("blazer4")) && ENTITY::GET_ENTITY_MODEL(iParam0) != joaat("chimera"))
	{
		return 0;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	if (!bParam1)
	{
		if ((((((((((((((iVar0 == joaat("police") || iVar0 == joaat("policeold1")) || iVar0 == joaat("policeold2")) || iVar0 == joaat("police2")) || iVar0 == joaat("police3")) || iVar0 == joaat("police4")) || iVar0 == joaat("fbi")) || iVar0 == joaat("fbi2")) || iVar0 == joaat("polmav")) || iVar0 == joaat("policeb")) || iVar0 == joaat("policet")) || iVar0 == joaat("riot")) || iVar0 == joaat("sheriff")) || iVar0 == joaat("sheriff2")) || iVar0 == joaat("pranger"))
		{
			return 0;
		}
	}
	if ((((iVar0 == joaat("ambulance") || iVar0 == joaat("firetruk")) || iVar0 == joaat("ripley")) || iVar0 == joaat("airbus")) || iVar0 == joaat("airtug"))
	{
		return 0;
	}
	if (((iVar0 == joaat("scorcher") || iVar0 == joaat("bmx")) || iVar0 == joaat("cruiser")) || iVar0 == joaat("fixter"))
	{
		return 0;
	}
	if (((((((((((((iVar0 == joaat("caddy") || iVar0 == joaat("forklift")) || iVar0 == joaat("caddy2")) || iVar0 == joaat("tribike")) || iVar0 == joaat("tribike2")) || iVar0 == joaat("tribike3")) || iVar0 == joaat("tractor")) || iVar0 == joaat("tractor2")) || iVar0 == joaat("mower")) || iVar0 == joaat("docktug")) || iVar0 == joaat("stretch")) || iVar0 == joaat("benson")) || iVar0 == joaat("pounder")) || iVar0 == joaat("emperor3"))
	{
		return 0;
	}
	if (iVar0 == joaat("monster"))
	{
		return 0;
	}
	if (iVar0 == joaat("romero") && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(-1418693708) > 0)
	{
		return 0;
	}
	return 1;
}

int func_359(int iParam0, bool bParam1)//Position - 0x187DC0
{
	int iVar0;
	if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", 3))
	{
		iVar0 = 0;
		if (DECORATOR::DECOR_EXIST_ON(iParam0, "MPBitset"))
		{
			iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "MPBitset");
		}
		if (BitTest(iVar0, bParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_360(int iParam0)//Position - 0x187E45
{
	int iVar0;
	int iVar1;
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	if (__LIB_1__::func_185(iVar0))
	{
		return Global_262145.f_20216 /* Tunable: TOTALMODVALUETHRESHOLDHIGH */;
	}
	iVar1 = 0;
	while (iVar1 < 15)
	{
		if (Global_1585217[iVar1] == iVar0)
		{
			return Global_262145.f_20216 /* Tunable: TOTALMODVALUETHRESHOLDHIGH */;
		}
		iVar1++;
	}
	return Global_262145.f_20215 /* Tunable: TOTALMODVALUETHRESHOLDLOW */;
}

int func_361(int iParam0)//Position - 0x187E99
{
	bool bVar0;
	if (!Global_262145.f_20189 /* Tunable: -1205783322 */)
	{
		return 1;
	}
	if (Global_262145.f_20196 /* Tunable: 302913409 */)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0, false))
		{
			if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iParam0))
			{
				return 1;
			}
			if (!BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_30, 3))
			{
				bVar0 = false;
				if (DECORATOR::DECOR_EXIST_ON(iParam0, "Player_Vehicle") && DECORATOR::DECOR_GET_INT(iParam0, "Player_Vehicle") == NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(PLAYER::PLAYER_ID()))
				{
					bVar0 = true;
				}
				if (DECORATOR::DECOR_EXIST_ON(iParam0, "Veh_Modded_By_Player") && DECORATOR::DECOR_GET_INT(iParam0, "Veh_Modded_By_Player") == NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(PLAYER::PLAYER_ID()))
				{
					bVar0 = true;
				}
				if (DECORATOR::DECOR_EXIST_ON(iParam0, "Player_Truck") && DECORATOR::DECOR_GET_INT(iParam0, "Player_Truck") == NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(PLAYER::PLAYER_ID()))
				{
					bVar0 = true;
				}
				if (DECORATOR::DECOR_EXIST_ON(iParam0, "Player_Avenger") && DECORATOR::DECOR_GET_INT(iParam0, "Player_Avenger") == NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(PLAYER::PLAYER_ID()))
				{
					bVar0 = true;
				}
				if (!bVar0)
				{
					return 0;
				}
			}
		}
	}
	return 1;
}

int func_362(int iParam0)//Position - 0x187FE1
{
	int iVar0;
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		if (DECORATOR::DECOR_EXIST_ON(iParam0, "Player_Vehicle"))
		{
			iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "Player_Vehicle");
			if (iVar0 != -1 && iVar0 != NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(PLAYER::PLAYER_ID()))
			{
				return 1;
			}
		}
		if (DECORATOR::DECOR_EXIST_ON(iParam0, "Veh_Modded_By_Player"))
		{
			iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "Veh_Modded_By_Player");
			if (iVar0 != -1 && iVar0 != NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(PLAYER::PLAYER_ID()))
			{
				return 1;
			}
		}
		if (DECORATOR::DECOR_EXIST_ON(iParam0, "Player_Truck"))
		{
			iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "Player_Truck");
			if (iVar0 != -1 && iVar0 != NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(PLAYER::PLAYER_ID()))
			{
				return 1;
			}
		}
		if (DECORATOR::DECOR_EXIST_ON(iParam0, "Player_Avenger"))
		{
			iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "Player_Avenger");
			if (iVar0 != -1 && iVar0 != NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(PLAYER::PLAYER_ID()))
			{
				return 1;
			}
		}
	}
	return 0;
}

var func_363(int iParam0)//Position - 0x188751
{
	switch (iParam0)
	{
		case 9:
		case -1:
			return Global_152058.f_9;
			break;
		case 8:
			return Global_152138.f_9;
			break;
	}
	return Global_152058.f_9;
}

int func_364()//Position - 0x188790
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = 1000;
	iVar2 = (iVar0 + iVar1);
	return iVar2;
}

int func_365()//Position - 0x1887A6
{
	if (!__LIB_1__::func_190(0) && !BitTest(Global_1585857[0 /*142*/].f_103, 1))
	{
		return 1;
	}
	return 0;
}

int func_366(char* sParam0)//Position - 0x189496
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 37;
	}
	if (MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY("A"))
	{
		return 0;
	}
	else if (MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY("B"))
	{
		return 1;
	}
	else if (MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY("C"))
	{
		return 2;
	}
	else if (MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY("D"))
	{
		return 3;
	}
	else if (MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY("E"))
	{
		return 4;
	}
	else if (MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY("F"))
	{
		return 5;
	}
	else if (MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY("G"))
	{
		return 6;
	}
	else if (MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY("H"))
	{
		return 7;
	}
	else if (MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY("I"))
	{
		return 8;
	}
	else if (MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY("J"))
	{
		return 9;
	}
	else if (MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY("K"))
	{
		return 10;
	}
	else if (MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY("L"))
	{
		return 11;
	}
	else if (MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY("M"))
	{
		return 12;
	}
	else if (MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY("N"))
	{
		return 13;
	}
	else if (MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY("O"))
	{
		return 14;
	}
	else if (MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY("P"))
	{
		return 15;
	}
	else if (MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY("Q"))
	{
		return 16;
	}
	else if (MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY("R"))
	{
		return 17;
	}
	else if (MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY("S"))
	{
		return 18;
	}
	else if (MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY("T"))
	{
		return 19;
	}
	else if (MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY("U"))
	{
		return 20;
	}
	else if (MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY("V"))
	{
		return 21;
	}
	else if (MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY("W"))
	{
		return 22;
	}
	else if (MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY("X"))
	{
		return 23;
	}
	else if (MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY("Y"))
	{
		return 24;
	}
	else if (MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY("Z"))
	{
		return 25;
	}
	else if (MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY("0"))
	{
		return 26;
	}
	else if (MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY("1"))
	{
		return 27;
	}
	else if (MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY("2"))
	{
		return 28;
	}
	else if (MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY("3"))
	{
		return 29;
	}
	else if (MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY("4"))
	{
		return 30;
	}
	else if (MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY("5"))
	{
		return 31;
	}
	else if (MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY("6"))
	{
		return 32;
	}
	else if (MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY("7"))
	{
		return 33;
	}
	else if (MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY("8"))
	{
		return 34;
	}
	else if (MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY("9"))
	{
		return 35;
	}
	else if (MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY(" "))
	{
		return 36;
	}
	return 37;
}

void func_367(var uParam0, int iParam1)//Position - 0x18985E
{
	uParam0->f_36 = 0;
	uParam0->f_35 = 0;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		Global_2359296[__LIB_0__::func_153() /*5567*/].f_593.f_54 = 1;
		Global_2359296[__LIB_0__::func_153() /*5567*/].f_593.f_55 = 1;
		Global_2359296[__LIB_0__::func_153() /*5567*/].f_593.f_60 = uParam0->f_32;
		Global_2359296[__LIB_0__::func_153() /*5567*/].f_593.f_56 = { uParam0->f_28 };
		Global_2359296[__LIB_0__::func_153() /*5567*/].f_593.f_61++;
	}
	else
	{
		Global_113386.f_20118.f_265 = 1;
		Global_113386.f_20118.f_266 = iParam1;
		Global_113386.f_20118.f_261 = 1;
		Global_113386.f_20118.f_271 = uParam0->f_32;
		Global_113386.f_20118.f_267 = { uParam0->f_28 };
		if ((iParam1 == 0 || iParam1 == 1) || iParam1 == 2)
		{
			Global_113386.f_20118.f_281[iParam1] = 1;
			Global_113386.f_20118.f_285[iParam1]++;
			STATS::STAT_INCREMENT(joaat("SP_CAR_APP_ORDER_COUNT"), 1f);
		}
	}
}

int func_368(int iParam0)//Position - 0x189D7D
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
			return 1;
			break;
	}
	return 0;
}

void func_369(var uParam0)//Position - 0x18A0A8
{
	uParam0->f_36 = 0;
	uParam0->f_35 = 0;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		Global_2359296[__LIB_0__::func_153() /*5567*/].f_593.f_54 = 1;
	}
	else
	{
		__LIB_0__::func_181(94, 1);
		Global_113386.f_20118.f_265 = 1;
	}
}

int func_370(char* sParam0)//Position - 0x18BC55
{
	int iVar0;
	int iVar1;
	iVar1 = Global_109919;
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_109919[iVar0 /*4*/])))
		{
			if (MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY(&(Global_109919[iVar0 /*4*/])))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_371(char* sParam0)//Position - 0x18BCA0
{
	int iVar0;
	int iVar1;
	iVar1 = Global_109919;
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_109919[iVar0 /*4*/])))
		{
			if (MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY(&(Global_109919[iVar0 /*4*/])) && (Global_110040[iVar0] || iVar0 == 0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void func_372()//Position - 0x18BE47
{
	bool bVar0;
	int iVar1;
	bVar0 = false;
	iVar1 = 0;
	while (iVar1 < Local_124.f_447)
	{
		if (Global_102577[iVar1] != uLocal_560[iVar1])
		{
			uLocal_560[iVar1] = Global_102577[iVar1];
			bVar0 = true;
		}
		iVar1++;
	}
	if (bVar0)
	{
		Local_124.f_592 = 0;
	}
}

int func_373(var uParam0, int iParam1, int iParam2)//Position - 0x18C01F
{
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
	{
		if (Global_4539961 == -3)
		{
			if ((PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 237 /*INPUT_CURSOR_ACCEPT*/) && uParam0) || PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 237 /*INPUT_CURSOR_ACCEPT*/))
			{
				return 1;
			}
		}
		if (iParam2 == 0)
		{
			if (PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 242 /*INPUT_CURSOR_SCROLL_DOWN*/) || (PAD::IS_DISABLED_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 242 /*INPUT_CURSOR_SCROLL_DOWN*/) && iParam1))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_374(var uParam0, int iParam1, int iParam2)//Position - 0x18C084
{
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
	{
		if (Global_4539961 == -2)
		{
			if ((PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 237 /*INPUT_CURSOR_ACCEPT*/) && uParam0) || PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 237 /*INPUT_CURSOR_ACCEPT*/))
			{
				return 1;
			}
		}
		if (iParam2 == 0)
		{
			if (PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 241 /*INPUT_CURSOR_SCROLL_UP*/) || (PAD::IS_DISABLED_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 241 /*INPUT_CURSOR_SCROLL_UP*/) && iParam1))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_375()//Position - 0x18C466
{
	return BitTest(uLocal_203, 2);
}

bool func_376()//Position - 0x18C473
{
	return BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_198, 20);
}

void func_377()//Position - 0x18C48B
{
	if (MISC::IS_PC_VERSION())
	{
		if (HUD::IS_PAUSE_MENU_ACTIVE() || HUD::IS_WARNING_MESSAGE_ACTIVE())
		{
			if (iLocal_21 == 1)
			{
				HUD::SET_MOUSE_CURSOR_STYLE(1);
				iLocal_21 = 0;
			}
		}
		else
		{
			iLocal_21 = 1;
		}
	}
}

int func_378(int iParam0)//Position - 0x18CDB0
{
	switch (__LIB_0__::func_299(iParam0))
	{
		case 4:
			return 10;
			break;
		case 1:
			return 8;
			break;
		case 3:
			return 7;
			break;
		case 0:
			return 9;
			break;
		case 2:
			return 11;
			break;
		case 5:
			return 12;
			break;
	}
	return 0;
}

var func_379(var uParam0)//Position - 0x18CE17
{
	int iVar0;
	if (((PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 204 /*INPUT_FRONTEND_Y*/) && HUD::GET_PAUSE_MENU_STATE() == 0) && !PLAYER::IS_SYSTEM_UI_BEING_DISPLAYED()) && !HUD::IS_WARNING_MESSAGE_ACTIVE())
	{
		iVar0 = 0;
		while (iVar0 < 12)
		{
			if ((MISC::GET_HASH_KEY(&(Global_23150.f_5355[iVar0 /*4*/])) == joaat("ITEM_PSSTORE") || MISC::GET_HASH_KEY(&(Global_23150.f_5355[iVar0 /*4*/])) == joaat("ITEM_MARKET")) || MISC::GET_HASH_KEY(&(Global_23150.f_5355[iVar0 /*4*/])) == joaat("ITEM_STORE"))
			{
				uParam0->f_1 = 1;
			}
			iVar0++;
		}
	}
	return uParam0->f_1;
}

void func_380()//Position - 0x18CEAF
{
	if (Local_124.f_443 == 2)
	{
		Local_124.f_116.f_31 = 8;
	}
	MISC::SET_BIT(&iLocal_420, 4);
}

void func_381()//Position - 0x18CED2
{
	Global_4535621 = 0;
}

bool func_382()//Position - 0x18CEDF
{
	return Global_4535621;
}

int func_383(int iParam0)//Position - 0x18D7A4
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
			return 7;
		case 7:
			return 11;
		case 8:
			return 12;
		default:
	}
	return -1;
}

int func_384(int iParam0)//Position - 0x18D810
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
			return 48;
		default:
	}
	return -1;
}

int func_385(int iParam0)//Position - 0x18D9ED
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (__LIB_0__::func_228(__LIB_9__::func_916(iVar0), -1) == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_386(int iParam0, int iParam1)//Position - 0x18DA1C
{
	int iVar0;
	int iVar1;
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	iVar1 = VEHICLE::GET_NUM_VEHICLE_MODS(iParam0, iParam1);
	switch (iParam1)
	{
		case 0:
		case 48:
			if (__LIB_4__::func_566(iVar0))
			{
				iVar1 = (iVar1 - 2);
			}
			break;
		default:
			if (__LIB_4__::func_566(iVar0))
			{
				iVar1 = (iVar1 - 1);
			}
			break;
	}
	return iVar1;
}

int func_387(int iParam0)//Position - 0x18DA6F
{
	switch (iParam0)
	{
		case 0:
			return 11;
		case 1:
			return 12;
		case 2:
			return 18;
		case 3:
			return 13;
		case 4:
			return 15;
		default:
	}
	return -1;
}

int func_388(int iParam0)//Position - 0x18DC19
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (__LIB_0__::func_228(__LIB_9__::func_918(iVar0), -1) == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_389(int iParam0)//Position - 0x18DE2A
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
		default:
	}
	return -1;
}

int func_390(int iParam0, int iParam1)//Position - 0x18E015
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (__LIB_0__::func_228(__LIB_9__::func_921(iParam1, iVar0), -1) == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_391(int iParam0, int iParam1)//Position - 0x18E1F8
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (__LIB_0__::func_228(__LIB_9__::func_922(iParam1, iVar0), -1) == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

struct<103> func_392(int iParam0)//Position - 0x18E229
{
	struct<103> Var0;
	Var0.f_9 = 49;
	Var0.f_59 = 2;
	Var0.f_78 = -1;
	Var0.f_79 = -1;
	Var0.f_96 = -1;
	Var0.f_97 = 1;
	Var0.f_99 = 132;
	Var0.f_100 = -1;
	if (iParam0 < 0 || iParam0 >= 2)
	{
		return Var0;
	}
	Var0 = { Global_2789412[iParam0 /*106*/] };
	return Var0;
}

void func_393()//Position - 0x18E622
{
	CAM::SET_WIDESCREEN_BORDERS(false, -1);
}

void func_394()//Position - 0x18E630
{
	Global_4521801.f_944 = NETWORK::GET_NETWORK_TIME_ACCURATE();
}

int func_395()//Position - 0x18E70A
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 0;
	}
	if (Local_124.f_0 == 45)
	{
		if (Local_124.f_675 == 20)
		{
			return 1;
		}
	}
	return 0;
}

void func_396()//Position - 0x18F93D
{
	int iVar0;
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	MISC::CLEAR_BIT(&uLocal_390, 3);
	iVar0 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), 10000);
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPShops", false);
	while (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPShops"))
	{
		if (NETWORK::IS_TIME_MORE_THAN(NETWORK::GET_NETWORK_TIME(), iVar0))
		{
			return;
		}
		SYSTEM::WAIT(0);
	}
	MISC::SET_BIT(&uLocal_390, 3);
}

void func_397(bool bParam0)//Position - 0x18FC66
{
	if (bParam0)
	{
		MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_143), 19);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_143), 19);
	}
}

void func_398(int iParam0, var uParam1, var uParam2, var uParam3)//Position - 0x18FC9C
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam3, false))
	{
		if (iParam0 == 39 || iParam0 == 41)
		{
			if (iParam0 == 39)
			{
				CAM::SET_CAM_COORD(*uParam1, -1158.7845f, -2002.6505f, 13.1136f);
				CAM::SET_CAM_ROT(*uParam1, 0.3965f, 0f, -155.939f, 2);
			}
			else
			{
				CAM::ATTACH_CAM_TO_ENTITY(*uParam1, *uParam3, 3.5569f, -3.9627f, 0.2956f, true);
				CAM::POINT_CAM_AT_ENTITY(*uParam1, *uParam3, 1.2638f, -2.0284f, 0.3151f, true);
			}
			CAM::SET_CAM_FOV(*uParam1, 42.5f);
			CAM::SET_CAM_ACTIVE(*uParam1, true);
			if (iParam0 == 39)
			{
				CAM::SET_CAM_COORD(*uParam2, -1155.5131f, -2001.8219f, 13.1178f);
				CAM::SET_CAM_ROT(*uParam2, -0.48f, -0.0366f, 169.3799f, 2);
			}
			else
			{
				CAM::ATTACH_CAM_TO_ENTITY(*uParam2, *uParam3, 0.9628f, -6.1841f, 0.3001f, true);
				CAM::POINT_CAM_AT_ENTITY(*uParam2, *uParam3, 0.1866f, -3.2866f, 0.258f, true);
			}
			CAM::SET_CAM_FOV(*uParam2, 42.5f);
			CAM::SET_CAM_ACTIVE_WITH_INTERP(*uParam2, *uParam1, 17000, 3, 1);
			CAM::SHAKE_CAM(*uParam2, "Hand_shake", 0.3f);
		}
		else if (iParam0 == 40)
		{
			CAM::ATTACH_CAM_TO_ENTITY(*uParam1, *uParam3, 7.9955f, -0.9546f, 0.1849f, true);
			CAM::POINT_CAM_AT_ENTITY(*uParam1, *uParam3, 5.0836f, -0.2909f, 0.4681f, true);
			CAM::SET_CAM_FOV(*uParam1, 42.5f);
			CAM::SET_CAM_ACTIVE(*uParam1, true);
			CAM::ATTACH_CAM_TO_ENTITY(*uParam2, *uParam3, 6.1134f, -4.4929f, 0.272f, true);
			CAM::POINT_CAM_AT_ENTITY(*uParam2, *uParam3, 3.7491f, -2.6562f, 0.4633f, true);
			CAM::SET_CAM_FOV(*uParam2, 42.5f);
			CAM::SET_CAM_ACTIVE_WITH_INTERP(*uParam2, *uParam1, 17000, 3, 1);
			CAM::SHAKE_CAM(*uParam2, "Hand_shake", 0.3f);
		}
	}
}

void func_399(int iParam0, var uParam1, var uParam2, var uParam3)//Position - 0x18FE86
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam3, false))
	{
		if (iParam0 == 39 || iParam0 == 41)
		{
			if (iParam0 == 39)
			{
				CAM::SET_CAM_COORD(*uParam2, -1161.0054f, -2015.7675f, 13.1356f);
				CAM::SET_CAM_ROT(*uParam2, 1.0601f, 0.0767f, -24.7507f, 2);
			}
			else
			{
				CAM::SET_CAM_COORD(*uParam2, -328.647f, -137.504f, 38.9674f);
				CAM::SET_CAM_ROT(*uParam2, 1.1252f, 0.085f, 88.6557f, 2);
			}
			CAM::SET_CAM_FOV(*uParam2, 42.5f);
			CAM::SET_CAM_ACTIVE_WITH_INTERP(*uParam2, *uParam1, 21000, 0, 1);
			CAM::SHAKE_CAM(*uParam2, "Hand_shake", 0.3f);
		}
		else if (iParam0 == 40)
		{
			CAM::SET_CAM_COORD(*uParam2, 732.2752f, -1076.6061f, 22.1154f);
			CAM::SET_CAM_ROT(*uParam2, 2.307f, -0.0399f, -175.026f, 2);
			CAM::SET_CAM_FOV(*uParam2, 42.5f);
			CAM::SET_CAM_ACTIVE_WITH_INTERP(*uParam2, *uParam1, 21000, 2, 1);
			CAM::SHAKE_CAM(*uParam2, "Hand_shake", 0.3f);
		}
	}
}

Vector3 func_400(int iParam0, bool bParam1)//Position - 0x18FF9F
{
	switch (iParam0)
	{
		case 4:
			if (bParam1)
			{
				return 1116.6921f, -3156.5132f, -38.0628f;
			}
			else
			{
				return 1106.1117f, -3155.762f, -38.5186f;
			}
			break;
		case 5:
			if (bParam1)
			{
				return 1008.4782f, -3163.779f, -39.9087f;
			}
			else
			{
				return 999.7539f, -3164.9182f, -39.9076f;
			}
			break;
	}
	return 0f, 0f, 0f;
}

int func_401()//Position - 0x190273
{
	int iVar0;
	int iVar1;
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar0 = PLAYER::INT_TO_PLAYERINDEX(iVar1);
		if (__LIB_0__::func_154(iVar0, 0, 1))
		{
			if (NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar0))
			{
				if (BitTest(Local_104[iVar0 /*17*/].f_6, 2))
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::GET_PLAYER_PED(iVar0), joaat("SCRIPT_TASK_GO_STRAIGHT_TO_COORD")) == 1 || TASK::GET_SCRIPT_TASK_STATUS(PLAYER::GET_PLAYER_PED(iVar0), joaat("SCRIPT_TASK_GO_STRAIGHT_TO_COORD")) == 0)
					{
						return 0;
					}
				}
			}
		}
		iVar1++;
	}
	return 1;
}

void func_402(int iParam0, var uParam1, var uParam2, bool bParam3)//Position - 0x1A14E5
{
	switch (iParam0)
	{
		case 4:
			if (bParam3)
			{
				*uParam1 = { 1100.0337f, -3152.1204f, -38.5186f };
				*uParam2 = 177.4256f;
			}
			else
			{
				*uParam1 = { 1099.1144f, -3163.649f, -38.5186f };
				*uParam2 = -4.0169f;
			}
			break;
		case 5:
			if (bParam3)
			{
				*uParam1 = { 999.3533f, -3163.8474f, -39.9075f };
				*uParam2 = 2.0957f;
			}
			else
			{
				*uParam1 = { 999.9908f, -3148.4473f, -39.8879f };
				*uParam2 = 180.6142f;
			}
			break;
	}
}

Vector3 func_403(int iParam0)//Position - 0x1A21D0
{
	switch (iParam0)
	{
		case 0:
			return -2169.811f, 1155.823f, -25f;
			break;
		case 1:
			return -2163.881f, 1155.823f, -25f;
			break;
		case 2:
			return -2158.131f, 1155.823f, -25f;
			break;
		case 3:
			return -2150.341f, 1155.823f, -25f;
			break;
	}
	return 0f, 0f, 0f;
}

void func_404(var uParam0, struct<3> Param1, struct<3> Param2, float fParam3, int iParam4)//Position - 0x1A224E
{
	uParam0->f_1 = { Param1 };
	uParam0->f_4 = { Param2 };
	uParam0->f_7 = fParam3;
	uParam0->f_11 = iParam4;
}

void func_405(int iParam0, bool bParam1)//Position - 0x1A3216
{
	int iVar0;
	iVar0 = iParam0;
	if (iVar0 > -1)
	{
		if (bParam1)
		{
			MISC::SET_BIT(&(Global_2825435.f_1023[__LIB_0__::func_159(iVar0)]), __LIB_0__::func_158(iVar0));
		}
		else
		{
			MISC::CLEAR_BIT(&(Global_2825435.f_1023[__LIB_0__::func_159(iVar0)]), __LIB_0__::func_158(iVar0));
		}
	}
}

char* func_406(int iParam0)//Position - 0x1A3330
{
	char* sVar0;
	sVar0 = "MpAwards1";
	if (iParam0 == -1)
	{
	}
	return sVar0;
}

char* func_407(int iParam0)//Position - 0x1A3347
{
	char* sVar0;
	sVar0 = "Carmod";
	if (iParam0 == -1)
	{
	}
	return sVar0;
}

char* func_408(int iParam0)//Position - 0x1A335E
{
	char* sVar0;
	sVar0 = "";
	switch (iParam0)
	{
		case 81:
			return "CMOD_SUS_0_D" /* GXT: Choose your aircraft's handling to fit your flying style. */;
			break;
		case 82:
			return "CMOD_SUS_0_D" /* GXT: Choose your aircraft's handling to fit your flying style. */;
			break;
		case 83:
			return "CMOD_SUS_0_D" /* GXT: Choose your aircraft's handling to fit your flying style. */;
			break;
		case 84:
			return "CMOD_SUS_0_D" /* GXT: Choose your aircraft's handling to fit your flying style. */;
			break;
		case 1:
			return "CMOD_MOD_11_D" /* GXT: Improved engine cooling. */;
			break;
		case 2:
			return "CMOD_MOD_11_D" /* GXT: Improved engine cooling. */;
			break;
		case 3:
			return "CMOD_MOD_11_D" /* GXT: Improved engine cooling. */;
			break;
		case 4:
			return "CMOD_MOD_11_D" /* GXT: Improved engine cooling. */;
			break;
		case 5:
			return "CMOD_MOD_14_D" /* GXT: Custom air horns. */;
			break;
		case 6:
			return "CMOD_MOD_14_D" /* GXT: Custom air horns. */;
			break;
		case 7:
			return "CMOD_MOD_14_D" /* GXT: Custom air horns. */;
			break;
		case 8:
			return "CMOD_MOD_14_D" /* GXT: Custom air horns. */;
			break;
		case 9:
			return "CMOD_MOD_14_D" /* GXT: Custom air horns. */;
			break;
		case 10:
			return "CMOD_MOD_14_D" /* GXT: Custom air horns. */;
			break;
		case 11:
			return "CMOD_MOD_14_D" /* GXT: Custom air horns. */;
			break;
		case 12:
			return "CMOD_MOD_14_D" /* GXT: Custom air horns. */;
			break;
		case 13:
			return "CMOD_MOD_3_D" /* GXT: Increase stopping power and eliminate brake fade. */;
			break;
		case 14:
			return "CMOD_MOD_3_D" /* GXT: Increase stopping power and eliminate brake fade. */;
			break;
		case 15:
			return "CMOD_MOD_3_D" /* GXT: Increase stopping power and eliminate brake fade. */;
			break;
		case 16:
			return "CMOD_MOD_3_D" /* GXT: Increase stopping power and eliminate brake fade. */;
			break;
		case 17:
			return "CMOD_MOD_4_D" /* GXT: Custom front and rear bumpers. */;
			break;
		case 18:
			return "CMOD_MOD_4_D" /* GXT: Custom front and rear bumpers. */;
			break;
		case 19:
			return "CMOD_MOD_4_D" /* GXT: Custom front and rear bumpers. */;
			break;
		case 20:
			return "CMOD_MOD_4_D" /* GXT: Custom front and rear bumpers. */;
			break;
		case 21:
			return "CMOD_MOD_5_D" /* GXT: The internal framework of the vehicle. */;
			break;
		case 22:
			return "CMOD_MOD_5_D" /* GXT: The internal framework of the vehicle. */;
			break;
		case 23:
			return "CMOD_MOD_5_D" /* GXT: The internal framework of the vehicle. */;
			break;
		case 24:
			return "CMOD_MOD_5_D" /* GXT: The internal framework of the vehicle. */;
			break;
		case 25:
			return "CMOD_MOD_21_D" /* GXT: Enhance your vehicle's look with custom side skirts. */;
			break;
		case 26:
			return "CMOD_MOD_21_D" /* GXT: Enhance your vehicle's look with custom side skirts. */;
			break;
		case 27:
			return "CMOD_MOD_21_D" /* GXT: Enhance your vehicle's look with custom side skirts. */;
			break;
		case 28:
			return "CMOD_MOD_21_D" /* GXT: Enhance your vehicle's look with custom side skirts. */;
			break;
		case 29:
			return "CMOD_MOD_1_D1";
			break;
		case 30:
			return "CMOD_MOD_1_D1";
			break;
		case 31:
			return "CMOD_MOD_1_D1";
			break;
		case 32:
			return "CMOD_MOD_1_D1";
			break;
		case 33:
			return "CMOD_MOD_1_D1";
			break;
		case 34:
			return "CMOD_MOD_18_D" /* GXT: Customize license plate. */;
			break;
		case 35:
			return "CMOD_MOD_18_D" /* GXT: Customize license plate. */;
			break;
		case 36:
			return "CMOD_MOD_18_D" /* GXT: Customize license plate. */;
			break;
		case 37:
			return "CMOD_MOD_18_D" /* GXT: Customize license plate. */;
			break;
		case 38:
			return "CMOD_MOD_26_D" /* GXT: Improved acceleration with close ratio transmission. */;
			break;
		case 39:
			return "CMOD_MOD_26_D" /* GXT: Improved acceleration with close ratio transmission. */;
			break;
		case 40:
			return "CMOD_MOD_26_D" /* GXT: Improved acceleration with close ratio transmission. */;
			break;
		case 41:
			return "CMOD_MOD_26_D" /* GXT: Improved acceleration with close ratio transmission. */;
			break;
		case 42:
			return "CMOD_MOD_29_D" /* GXT: A selection of tinted windows. */;
			break;
		case 43:
			return "CMOD_MOD_29_D" /* GXT: A selection of tinted windows. */;
			break;
		case 44:
			return "CMOD_MOD_29_D" /* GXT: A selection of tinted windows. */;
			break;
		case 45:
			return "CMOD_MOD_29_D" /* GXT: A selection of tinted windows. */;
			break;
		case 46:
			return "CMOD_MOD_25_D" /* GXT: Bulletproof tires and custom burnout smoke. */;
			break;
		case 47:
			return "CMOD_MOD_7_D" /* GXT: Increases brake horsepower. */;
			break;
		case 48:
			return "CMOD_MOD_7_D" /* GXT: Increases brake horsepower. */;
			break;
		case 49:
			return "CMOD_MOD_7_D" /* GXT: Increases brake horsepower. */;
			break;
		case 50:
			return "CMOD_MOD_7_D" /* GXT: Increases brake horsepower. */;
			break;
		case 51:
			return "CMOD_MOD_15_D" /* GXT: Improved night time visibility and decorative lighting. */;
			break;
		case 56:
			return "CMOD_MOD_25_D" /* GXT: Bulletproof tires and custom burnout smoke. */;
			break;
		case 57:
			return "CMOD_MOD_25_D" /* GXT: Bulletproof tires and custom burnout smoke. */;
			break;
		case 58:
			return "CMOD_MOD_25_D" /* GXT: Bulletproof tires and custom burnout smoke. */;
			break;
		case 59:
			return "CMOD_MOD_25_D" /* GXT: Bulletproof tires and custom burnout smoke. */;
			break;
		case 60:
			return "CMOD_MOD_25_D" /* GXT: Bulletproof tires and custom burnout smoke. */;
			break;
		case 61:
			return "CMOD_MOD_27_D" /* GXT: Reduced lag turbocharger. */;
			break;
		case 77:
			return "CMOD_MOD_16_D" /* GXT: Customized sports exhausts. */;
			break;
		case 72:
			return "CMOD_MOD_22_D" /* GXT: Increase downforce. */;
			break;
		case 73:
			return "CMOD_MOD_22_D" /* GXT: Increase downforce. */;
			break;
		case 74:
			return "CMOD_MOD_22_D" /* GXT: Increase downforce. */;
			break;
		case 75:
			return "CMOD_MOD_22_D" /* GXT: Increase downforce. */;
			break;
		case 76:
			return "CMOD_MOD_22_D" /* GXT: Increase downforce. */;
			break;
		case 66:
			return "CMOD_MOD_13_D" /* GXT: Enhance car engine cooling. */;
			break;
		case 67:
			return "CMOD_MOD_13_D" /* GXT: Enhance car engine cooling. */;
			break;
		case 68:
			return "CMOD_MOD_13_D" /* GXT: Enhance car engine cooling. */;
			break;
		case 69:
			return "CMOD_MOD_13_D" /* GXT: Enhance car engine cooling. */;
			break;
		case 70:
			return "CMOD_MOD_13_D" /* GXT: Enhance car engine cooling. */;
			break;
		case 71:
			return "CMOD_MOD_13_D" /* GXT: Enhance car engine cooling. */;
			break;
		case 62:
			return "CMOD_MOD_4_D" /* GXT: Custom front and rear bumpers. */;
			break;
		case 63:
			return "CMOD_MOD_4_D" /* GXT: Custom front and rear bumpers. */;
			break;
		case 64:
			return "CMOD_MOD_4_D" /* GXT: Custom front and rear bumpers. */;
			break;
		case 65:
			return "CMOD_MOD_4_D" /* GXT: Custom front and rear bumpers. */;
			break;
	}
	return sVar0;
}

char* func_409(int iParam0)//Position - 0x1A3891
{
	char* sVar0;
	sVar0 = "";
	switch (iParam0)
	{
		case 81:
			return "CMOD_SUS_0" /* GXT: Stock Suspension */;
			break;
		case 82:
			return "CMOD_SUS_1" /* GXT: Lowered Suspension */;
			break;
		case 83:
			return "CMOD_SUS_2" /* GXT: Street Suspension */;
			break;
		case 84:
			return "CMOD_SUS_3" /* GXT: Sport Suspension */;
			break;
		case 1:
			return "CMOD_GRL_V_1" /* GXT: Mesh Grille */;
			break;
		case 2:
			return "CMOD_GRL_3" /* GXT: Custom Grille 3 */;
			break;
		case 3:
			return "CMOD_GRL_4" /* GXT: Custom Grille 4 */;
			break;
		case 4:
			return "CMOD_GRL_5" /* GXT: Custom Grille 5 */;
			break;
		case 5:
			return "CMOD_HRN_1";
			break;
		case 6:
			return "CMOD_HRN_2";
			break;
		case 7:
			return "CMOD_HRN_3";
			break;
		case 8:
			return "CMOD_HRN_4";
			break;
		case 9:
			return "CMOD_HRN_4";
			break;
		case 10:
			return "CMOD_HRN_4";
			break;
		case 11:
			return "CMOD_HRN_4";
			break;
		case 12:
			return "CMOD_HRN_4";
			break;
		case 13:
			return "CMOD_BRA_1" /* GXT: Street Brakes */;
			break;
		case 14:
			return "CMOD_BRA_2" /* GXT: Sport Brakes */;
			break;
		case 15:
			return "CMOD_BRA_3" /* GXT: Race Brakes */;
			break;
		case 16:
			return "CMOD_BRA_4" /* GXT: Super Brakes */;
			break;
		case 17:
			return "CMOD_BUM_1" /* GXT: Custom Front Bumper */;
			break;
		case 18:
			return "CMOD_BUM_6" /* GXT: Custom Front Bumper 2 */;
			break;
		case 19:
			return "CMOD_BUM_7" /* GXT: Front Bumper 4 */;
			break;
		case 20:
			return "CMOD_BUM_8" /* GXT: Front Bumper 5 */;
			break;
		case 21:
			return "CMOD_CHS_1" /* GXT: Sports Chassis */;
			break;
		case 22:
			return "CMOD_CHS_2" /* GXT: Performance Chassis */;
			break;
		case 23:
			return "CMOD_CHS_3";
			break;
		case 24:
			return "CMOD_CHS_4";
			break;
		case 25:
			return "CMOD_SKI_1" /* GXT: Custom Skirts */;
			break;
		case 26:
			return "CMOD_SKI_3" /* GXT: Custom Skirts 2 */;
			break;
		case 27:
			return "CMOD_SKI_4" /* GXT: Custom Skirts 3 */;
			break;
		case 28:
			return "CMOD_SKI_5" /* GXT: Custom Skirts 4 */;
			break;
		case 29:
			return "CMOD_ARM_1" /* GXT: Armor Upgrade 20% */;
			break;
		case 30:
			return "CMOD_ARM_2" /* GXT: Armor Upgrade 40% */;
			break;
		case 31:
			return "CMOD_ARM_3" /* GXT: Armor Upgrade 60% */;
			break;
		case 32:
			return "CMOD_ARM_4" /* GXT: Armor Upgrade 80% */;
			break;
		case 33:
			return "CMOD_ARM_5" /* GXT: Armor Upgrade 100% */;
			break;
		case 34:
			return "CMOD_PLA_1" /* GXT: Blue on White 2 */;
			break;
		case 35:
			return "CMOD_PLA_2" /* GXT: Blue on White 3 */;
			break;
		case 36:
			return "CMOD_PLA_3" /* GXT: Yellow on Blue */;
			break;
		case 37:
			return "CMOD_PLA_4" /* GXT: Yellow on Black */;
			break;
		case 38:
			return "CMOD_GBX_1" /* GXT: Street Transmission */;
			break;
		case 39:
			return "CMOD_GBX_3" /* GXT: Race Transmission */;
			break;
		case 40:
			return "CMOD_GBX_4" /* GXT: Super Transmission */;
			break;
		case 41:
			return "CMOD_GBX_5";
			break;
		case 42:
			return "CMOD_WIN_4" /* GXT: Tinted */;
			break;
		case 43:
			return "CMOD_WIN_1" /* GXT: Light Smoke */;
			break;
		case 44:
			return "CMOD_WIN_2" /* GXT: Dark Smoke */;
			break;
		case 45:
			return "CMOD_WIN_3" /* GXT: Limo */;
			break;
		case 46:
			return "CMOD_TYR_0" /* GXT: Stock Tires */;
			break;
		case 47:
			return "CMOD_ENG_1" /* GXT: EMS Upgrade */;
			break;
		case 48:
			return "CMOD_ENG_3" /* GXT: EMS Upgrade, Level 2 */;
			break;
		case 49:
			return "CMOD_ENG_4" /* GXT: EMS Upgrade, Level 3 */;
			break;
		case 50:
			return "CMOD_ENG_5" /* GXT: EMS Upgrade, Level 4 */;
			break;
		case 51:
			return "CMOD_LGT_1" /* GXT: Xenon Lights */;
			break;
		case 56:
			return "CMOD_TYR_1" /* GXT: Custom Tires */;
			break;
		case 57:
			return "CMOD_TYR_4" /* GXT: Black Tire Smoke */;
			break;
		case 58:
			return "CMOD_TYR_2" /* GXT: Bulletproof Tires */;
			break;
		case 59:
			return "CMOD_TYR_3" /* GXT: White Tire Smoke */;
			break;
		case 60:
			return "CMOD_TYR_5" /* GXT: Blue Tire Smoke */;
			break;
		case 61:
			return "CMOD_TUR_1" /* GXT: Turbo Tuning */;
			break;
		case 77:
			return "CMOD_EXH_MP_1" /* GXT: Performance Exhaust */;
			break;
		case 72:
			return "CMOD_SPO_3" /* GXT: Custom Spoiler 1 */;
			break;
		case 73:
			return "CMOD_SPO_4" /* GXT: Custom Spoiler 2 */;
			break;
		case 74:
			return "CMOD_SPO_5" /* GXT: Custom Spoiler 3 */;
			break;
		case 75:
			return "CMOD_SPO_6" /* GXT: Custom Spoiler 4 */;
			break;
		case 76:
			return "CMOD_SPO_7" /* GXT: Custom Spoiler 5 */;
			break;
		case 66:
			return "CMOD_BON_3" /* GXT: Air Intake Hood */;
			break;
		case 67:
			return "CMOD_BON_4";
			break;
		case 68:
			return "CMOD_BON_5";
			break;
		case 69:
			return "CMOD_BON_6";
			break;
		case 70:
			return "CMOD_BON_7";
			break;
		case 71:
			return "CMOD_BON_7";
			break;
		case 62:
			return "CMOD_BUM_6" /* GXT: Custom Front Bumper 2 */;
			break;
		case 63:
			return "CMOD_BUM_7" /* GXT: Front Bumper 4 */;
			break;
		case 64:
			return "CMOD_BUM_8" /* GXT: Front Bumper 5 */;
			break;
		case 65:
			return "CMOD_BUM_9" /* GXT: Custom Rear Bumper 2 */;
			break;
	}
	return sVar0;
}

var func_410(int iParam0)//Position - 0x1A3DE1
{
	var uVar0;
	uVar0 = Global_2825435.f_1023[__LIB_0__::func_159(iParam0)];
	return uVar0;
}

bool func_411(int iParam0, int iParam1)//Position - 0x1A3E4A
{
	*iParam1 = -1;
	switch (iParam0)
	{
		case 4:
		case 2:
		case 1:
		case 9:
		case 10:
		case 11:
		case 12:
		case 5:
		case 3:
		case 6:
		case 7:
		case 8:
			*iParam1 = 47;
			break;
	}
	switch (iParam0)
	{
		case 25:
		case 26:
		case 33:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 34:
		case 35:
		case 36:
			*iParam1 = 48;
			break;
	}
	switch (iParam0)
	{
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
			*iParam1 = 49;
			break;
	}
	switch (iParam0)
	{
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case 79:
		case 80:
		case 81:
		case 82:
		case 83:
		case 84:
			*iParam1 = 50;
			break;
	}
	switch (iParam0)
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
		case 24:
			*iParam1 = 13;
			break;
	}
	switch (iParam0)
	{
		case 99:
		case 98:
		case 105:
		case 97:
		case 104:
		case 106:
		case 107:
		case 108:
		case 100:
		case 101:
		case 102:
		case 103:
			*iParam1 = 14;
			break;
	}
	switch (iParam0)
	{
		case 123:
		case 122:
		case 129:
		case 121:
		case 128:
		case 130:
		case 131:
		case 132:
		case 124:
		case 125:
		case 126:
		case 127:
			*iParam1 = 15;
			break;
	}
	switch (iParam0)
	{
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
			*iParam1 = 38;
			break;
	}
	switch (iParam0)
	{
		case 87:
		case 86:
		case 93:
		case 85:
		case 92:
		case 94:
		case 95:
		case 96:
		case 88:
		case 89:
		case 90:
		case 91:
			*iParam1 = 39;
			break;
	}
	switch (iParam0)
	{
		case 111:
		case 110:
		case 117:
		case 109:
		case 116:
		case 118:
		case 119:
		case 120:
		case 112:
		case 113:
		case 114:
		case 115:
			*iParam1 = 40;
			break;
	}
	switch (iParam0)
	{
		case 52:
		case 50:
		case 49:
		case 57:
		case 58:
		case 59:
		case 60:
		case 53:
		case 51:
		case 54:
		case 55:
		case 56:
			*iParam1 = 61;
			break;
	}
	return *iParam1 != -1;
}

void func_412()//Position - 0x1A423B
{
	if ((!__LIB_0__::func_706() && !func_2756()) && Global_2715698)
	{
		Global_4718592.f_116524 = 0;
	}
}

bool func_413(var uParam0)//Position - 0x1A4501
{
	return (*uParam0 >= 0 && *uParam0 < 212);
}

bool func_414(int iParam0, var uParam1)//Position - 0x1A4EC2
{
	int iVar0;
	*uParam1 = 0;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
		{
			iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, -1, false);
			if ((ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_INJURED(iVar0)) && PED::IS_PED_A_PLAYER(iVar0))
			{
				*uParam1 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar0) + 32;
			}
		}
	}
	return *uParam1 != 0;
}

int func_415(int iParam0)//Position - 0x1B1C01
{
	switch (iParam0)
	{
		case joaat("minitank"):
		case joaat("rcbandito"):
			return 1;
			break;
	}
	return 0;
}

int func_416(int iParam0)//Position - 0x1B1C2D
{
	switch (iParam0)
	{
		case joaat("prototipo"):
		case joaat("diablous2"):
		case joaat("vagner"):
		case joaat("deathbike2"):
		case joaat("deathbike"):
		case joaat("deathbike3"):
		case joaat("impaler2"):
		case joaat("impaler3"):
		case joaat("impaler4"):
		case joaat("issi5"):
		case joaat("scarab2"):
		case joaat("dominator5"):
		case joaat("bruiser2"):
		case joaat("zr3802"):
		case joaat("monster4"):
		case joaat("slamvan5"):
		case joaat("cerberus2"):
		case joaat("brutus2"):
		case joaat("imperator2"):
		case joaat("locust"):
		case joaat("postlude"):
			return 1;
			break;
	}
	return 0;
}

int func_417(int iParam0)//Position - 0x1B1CC2
{
	switch (iParam0)
	{
		case joaat("windsor2"):
		case joaat("prototipo"):
		case joaat("youga2"):
		case joaat("diablous2"):
		case joaat("vagner"):
		case joaat("khanjali"):
		case joaat("locust"):
		case joaat("vagrant"):
		case joaat("veto"):
		case joaat("veto2"):
		case joaat("patriot2"):
			return 1;
			break;
	}
	return 0;
}

int func_418(int iParam0)//Position - 0x1B1DBC
{
	if (Local_124.f_443 == 9)
	{
		switch (ENTITY::GET_ENTITY_MODEL(iParam0))
		{
			case joaat("bombushka"):
				return 0;
				break;
			}
	}
	if (iLocal_469 != iLocal_468)
	{
		return 0;
	}
	return 1;
}

float func_419(float fParam0, float fParam1)//Position - 0x1B1DF5
{
	float fVar0;
	fVar0 = (fParam1 - fParam0);
	while (fVar0 < -180f)
	{
		fVar0 = (fVar0 + 360f);
	}
	while (fVar0 > 180f)
	{
		fVar0 = (fVar0 - 360f);
	}
	return fVar0;
}

int func_420(int iParam0)//Position - 0x1B3196
{
	if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("sabregt") || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("sabregt2"))
	{
		return 1;
	}
	if (fLocal_490 >= 5.5f || fLocal_491 > 2.6f)
	{
		return 1;
	}
	return 0;
}

int func_421(int iParam0, int iParam1, float fParam2, float fParam3)//Position - 0x1B31E3
{
	switch (iParam1)
	{
		case 69:
			if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("sultanrs") || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("weevil2"))
			{
				*fParam2 = 57.8448f;
				*fParam3 = (*fParam2 - 10f);
				return 1;
			}
			break;
		case 91:
			if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("youga3"))
			{
				*fParam2 = 56.4595f;
				*fParam3 = (*fParam2 - 10f);
				return 1;
			}
			break;
	}
	return 0;
}

int func_422(int iParam0)//Position - 0x1B34E7
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		switch (ENTITY::GET_ENTITY_MODEL(iParam0))
		{
			case joaat("yosemite3"):
			case joaat("remus"):
				return 1;
				break;
			}
	}
	return 0;
}

int func_423(int iParam0)//Position - 0x1B3518
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		switch (ENTITY::GET_ENTITY_MODEL(iParam0))
		{
			case joaat("sultanrs"):
			case joaat("nero2"):
			case joaat("kanjo"):
			case joaat("yosemite3"):
			case joaat("comet6"):
			case joaat("futo2"):
			case joaat("sentinel4"):
				return 1;
				break;
			}
	}
	return 0;
}

int func_424(int iParam0)//Position - 0x1B3567
{
	int iVar0;
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
		switch (iVar0)
		{
			case joaat("bruiser"):
			case joaat("bruiser2"):
			case joaat("bruiser3"):
			case joaat("deathbike"):
			case joaat("deathbike2"):
			case joaat("deathbike3"):
			case joaat("dominator4"):
			case joaat("dominator5"):
			case joaat("dominator6"):
			case joaat("impaler2"):
			case joaat("impaler3"):
			case joaat("impaler4"):
			case joaat("issi4"):
			case joaat("issi5"):
			case joaat("issi6"):
			case joaat("imperator"):
			case joaat("imperator2"):
			case joaat("imperator3"):
			case joaat("scarab"):
			case joaat("scarab2"):
			case joaat("scarab3"):
			case joaat("zr380"):
			case joaat("zr3802"):
			case joaat("zr3803"):
			case joaat("monster3"):
			case joaat("monster4"):
			case joaat("monster5"):
			case joaat("slamvan4"):
			case joaat("slamvan5"):
			case joaat("slamvan6"):
			case joaat("yosemite3"):
			case joaat("zr350"):
			case joaat("jester4"):
			case joaat("comet6"):
			case joaat("warrener2"):
			case joaat("remus"):
			case joaat("tailgater2"):
			case joaat("previon"):
			case joaat("dominator8"):
			case joaat("futo2"):
			case joaat("sentinel4"):
				return 1;
				break;
			default:
				if (__LIB_0__::func_596(iVar0))
				{
					return 1;
				}
				break;
			}
	}
	return 0;
}

int func_425(int iParam0)//Position - 0x1B3696
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		switch (ENTITY::GET_ENTITY_MODEL(iParam0))
		{
			case joaat("primo2"):
			case joaat("btype3"):
			case joaat("virgo2"):
			case joaat("bruiser"):
			case joaat("bruiser2"):
			case joaat("bruiser3"):
			case joaat("deathbike"):
			case joaat("deathbike2"):
			case joaat("deathbike3"):
			case joaat("impaler2"):
			case joaat("impaler3"):
			case joaat("impaler4"):
			case joaat("imperator"):
			case joaat("imperator2"):
			case joaat("imperator3"):
			case joaat("cerberus"):
			case joaat("cerberus2"):
			case joaat("cerberus3"):
			case joaat("issi4"):
			case joaat("issi5"):
			case joaat("issi6"):
			case joaat("zr380"):
			case joaat("zr3802"):
			case joaat("zr3803"):
				return 0;
				break;
			}
	}
	return 1;
}

int func_426(int iParam0)//Position - 0x1B374B
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("weevil2"))
		{
			return 1;
		}
	}
	return 0;
}

int func_427(int iParam0)//Position - 0x1B3795
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		switch (ENTITY::GET_ENTITY_MODEL(iParam0))
		{
			case joaat("nero2"):
			case joaat("gauntlet5"):
			case joaat("warrener2"):
			case joaat("zr350"):
			case joaat("comet6"):
			case joaat("remus"):
			case joaat("cypher"):
			case joaat("dominator8"):
			case joaat("growler"):
			case joaat("dominator7"):
			case joaat("tailgater2"):
			case joaat("calico"):
			case joaat("tenf2"):
			case joaat("sentinel4"):
				return 1;
				break;
			}
	}
	return 0;
}

int func_428(int iParam0)//Position - 0x1B380E
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		switch (ENTITY::GET_ENTITY_MODEL(iParam0))
		{
			case joaat("cypher"):
			case joaat("tenf"):
				return 1;
				break;
			default:
				return 0;
				break;
			}
	}
	return 0;
}

int func_429(int iParam0)//Position - 0x1B3846
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		switch (ENTITY::GET_ENTITY_MODEL(iParam0))
		{
			case joaat("banshee2"):
			case joaat("warrener2"):
			case joaat("sentinel4"):
				return 1;
				break;
			}
	}
	return 0;
}

int func_430(int iParam0)//Position - 0x1B387D
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		switch (ENTITY::GET_ENTITY_MODEL(iParam0))
		{
			case joaat("growler"):
				return 1;
				break;
			}
	}
	return 0;
}

int func_431(int iParam0)//Position - 0x1B38A8
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		switch (ENTITY::GET_ENTITY_MODEL(iParam0))
		{
			case joaat("brioso3"):
				if (Local_124.f_116.f_1 < 2)
				{
					return 1;
				}
				break;
			}
	}
	return 0;
}

int func_432(int iParam0, int iParam1)//Position - 0x1B38DE
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		switch (ENTITY::GET_ENTITY_MODEL(iParam0))
		{
			case joaat("nero2"):
				return 1;
				break;
			case joaat("comet3"):
				if (iParam1 != 78)
				{
					return 1;
				}
				break;
			}
	}
	return 0;
}

int func_433(int iParam0)//Position - 0x1B391D
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		switch (ENTITY::GET_ENTITY_MODEL(iParam0))
		{
			case joaat("bruiser"):
			case joaat("bruiser2"):
			case joaat("bruiser3"):
			case joaat("dominator4"):
			case joaat("dominator5"):
			case joaat("dominator6"):
			case joaat("cerberus"):
			case joaat("cerberus2"):
			case joaat("cerberus3"):
			case joaat("issi4"):
			case joaat("issi5"):
			case joaat("issi6"):
			case joaat("impaler2"):
			case joaat("impaler3"):
			case joaat("impaler4"):
			case joaat("gauntlet5"):
				return 1;
				break;
			}
	}
	return 0;
}

int func_434(int iParam0)//Position - 0x1B39A2
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		switch (ENTITY::GET_ENTITY_MODEL(iParam0))
		{
			case joaat("issi4"):
			case joaat("issi5"):
			case joaat("issi6"):
			case joaat("gauntlet5"):
			case joaat("futo2"):
				return 1;
				break;
			}
	}
	return 0;
}

int func_435(int iParam0)//Position - 0x1B39E5
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("moonbeam2"))
		{
			return 1;
		}
	}
	return 0;
}

int func_436(int iParam0)//Position - 0x1B3A0A
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("tornado5"))
		{
			return 0;
		}
	}
	return 1;
}

int func_437(int iParam0)//Position - 0x1B3A2F
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		switch (ENTITY::GET_ENTITY_MODEL(iParam0))
		{
			case joaat("gauntlet4"):
			case joaat("nebula"):
			case joaat("sultan3"):
			case joaat("draugur"):
			case joaat("schwarzer"):
				return 1;
				break;
			}
	}
	return 0;
}

int func_438(int iParam0)//Position - 0x1B3A72
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		switch (ENTITY::GET_ENTITY_MODEL(iParam0))
		{
			case joaat("btype3"):
			case joaat("gp1"):
			case joaat("torero"):
			case joaat("rapidgt3"):
			case joaat("comet4"):
			case joaat("mule4"):
			case joaat("pounder2"):
			case joaat("patriot2"):
			case joaat("dynasty"):
			case joaat("gauntlet4"):
			case joaat("retinue2"):
			case joaat("youga3"):
			case joaat("slamtruck"):
			case joaat("comet6"):
			case joaat("growler"):
			case joaat("corsita"):
				return 1;
			}
		default:
	}
	return 0;
}

int func_439(int iParam0)//Position - 0x1B3AF4
{
	int iVar0;
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
		switch (iVar0)
		{
			case joaat("chino"):
			case joaat("xa21"):
			case joaat("bombushka"):
			case joaat("sultan2"):
			case joaat("club"):
				return 1;
				break;
			}
	}
	return 0;
}

int func_440(int iParam0)//Position - 0x1B3B3B
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		switch (ENTITY::GET_ENTITY_MODEL(iParam0))
		{
			case joaat("infernus2"):
			case joaat("turismo2"):
			case joaat("xa21"):
			case joaat("cheetah2"):
			case joaat("cinquemila"):
			case joaat("draugur"):
				return 1;
				break;
			}
	}
	return 0;
}

int func_441(int iParam0)//Position - 0x1B3B84
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		switch (ENTITY::GET_ENTITY_MODEL(iParam0))
		{
			case joaat("osiris"):
			case joaat("btype3"):
			case joaat("nero2"):
			case joaat("z190"):
			case joaat("schlagen"):
			case joaat("bruiser"):
			case joaat("bruiser2"):
			case joaat("bruiser3"):
			case joaat("impaler2"):
			case joaat("impaler3"):
			case joaat("impaler4"):
			case joaat("zr380"):
			case joaat("zr3802"):
			case joaat("zr3803"):
			case joaat("dynasty"):
			case joaat("issi7"):
			case joaat("gauntlet4"):
			case joaat("neo"):
			case joaat("paragon"):
			case joaat("paragon2"):
			case joaat("imorgon"):
			case joaat("vstr"):
			case joaat("yosemite2"):
			case joaat("club"):
			case joaat("penumbra2"):
			case joaat("youga3"):
			case joaat("brioso2"):
			case joaat("winky"):
			case joaat("weevil"):
			case joaat("baller7"):
			case joaat("lm87"):
			case joaat("kanjosj"):
			case joaat("sentinel"):
			case joaat("omnisegt"):
				return 1;
			}
		default:
	}
	return 0;
}

int func_442(int iParam0)//Position - 0x1B3C72
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		switch (ENTITY::GET_ENTITY_MODEL(iParam0))
		{
			case joaat("barrage"):
			case joaat("swinger"):
				return 1;
				break;
			}
	}
	return 0;
}

int func_443()//Position - 0x1B3CA3
{
	switch (ENTITY::GET_ENTITY_MODEL(Local_124.f_406))
	{
		case joaat("warrener2"):
		case joaat("comet6"):
		case joaat("vectre"):
		case joaat("remus"):
		case joaat("jester4"):
		case joaat("rt3000"):
		case joaat("cypher"):
		case joaat("dominator8"):
		case joaat("futo2"):
		case joaat("dominator7"):
		case joaat("zr350"):
		case joaat("previon"):
		case joaat("tailgater2"):
		case joaat("growler"):
		case joaat("euros"):
		case joaat("sultan3"):
		case joaat("astron"):
		case joaat("rhinehart"):
		case joaat("corsita"):
		case joaat("zentorno"):
		case joaat("sentinel"):
		case joaat("tenf2"):
		case joaat("kanjosj"):
		case joaat("weevil2"):
		case joaat("postlude"):
		case joaat("ruiner4"):
		case joaat("sentinel4"):
		case joaat("picador"):
		case joaat("brioso3"):
			return 1;
			break;
	}
	return 0;
}

int func_444(int iParam0)//Position - 0x1B3D70
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		switch (ENTITY::GET_ENTITY_MODEL(iParam0))
		{
			case joaat("infernus2"):
			case joaat("turismo2"):
			case joaat("xa21"):
			case joaat("cheetah2"):
			case joaat("furia"):
			case joaat("brioso2"):
				return 1;
			}
		default:
	}
	return 0;
}

int func_445(int iParam0)//Position - 0x1B3DB6
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		if ((((((ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("esskey") || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("fagaloa")) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("pounder2")) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("mule4")) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("toros")) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("seminole2")) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("granger2"))
		{
			return 1;
		}
	}
	return 0;
}

void func_446(int iParam0, int iParam1)//Position - 0x1B3E48
{
	float fVar0;
	float fVar1;
	float fVar2;
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("speedo4"))
		{
			Local_396.f_4 = 4.675f;
			Local_396.f_2 = 2.5f;
			Local_396.f_3 = 3f;
		}
		else if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("mule4"))
		{
			Local_396.f_4 = 5.675f;
			Local_396.f_2 = 4.5f;
			Local_396.f_3 = 5f;
		}
		else if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("pounder2"))
		{
			fVar0 = 8.225f;
			fVar1 = 0.8f;
			fVar2 = 2.5f;
			if ((iParam1 == 0 || iParam1 == 1) || iParam1 == 2)
			{
				fVar1 = 0.8f;
				fVar2 = 2.5f;
			}
			else
			{
				fVar1 = 4.5f;
				fVar2 = 5f;
			}
			Local_396.f_4 = fVar0;
			if (Local_396.f_1 >= fVar1)
			{
				Local_396.f_2 = fVar1;
			}
			else
			{
				Local_396.f_2 = (Local_396.f_1 + 0.05f);
			}
			if (Local_396.f_1 <= fVar2)
			{
				Local_396.f_3 = fVar2;
			}
			else
			{
				Local_396.f_3 = (Local_396.f_1 - 0.05f);
			}
		}
	}
}

int func_447(int iParam0)//Position - 0x1B3F5A
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		switch (ENTITY::GET_ENTITY_MODEL(iParam0))
		{
			case joaat("btype3"):
			case joaat("virgo2"):
			case joaat("dune3"):
			case joaat("tampa3"):
			case joaat("pounder2"):
			case joaat("menacer"):
			case joaat("brutus"):
			case joaat("brutus2"):
			case joaat("brutus3"):
			case joaat("dominator4"):
			case joaat("dominator5"):
			case joaat("dominator6"):
			case joaat("deathbike"):
			case joaat("deathbike2"):
			case joaat("deathbike3"):
			case joaat("issi4"):
			case joaat("issi5"):
			case joaat("issi6"):
			case joaat("zr380"):
			case joaat("zr3802"):
			case joaat("zr3803"):
			case joaat("draugur"):
			case joaat("greenwood"):
				return 0;
				break;
			}
	}
	return 1;
}

int func_448(int iParam0)//Position - 0x1B400A
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		switch (ENTITY::GET_ENTITY_MODEL(iParam0))
		{
			case joaat("police3"):
			case joaat("ratloader"):
			case joaat("ratloader2"):
			case joaat("bodhi2"):
			case joaat("bifta"):
			case joaat("btype3"):
			case joaat("virgo2"):
			case joaat("dune3"):
			case joaat("halftrack"):
			case joaat("tampa3"):
			case joaat("technical3"):
			case joaat("insurgent3"):
			case joaat("gb200"):
			case joaat("ellie"):
			case joaat("issi3"):
			case joaat("tezeract"):
			case joaat("flashgt"):
			case joaat("dominator3"):
			case joaat("pounder2"):
			case joaat("mule4"):
			case joaat("freecrawler"):
			case joaat("menacer"):
			case joaat("italigto"):
			case joaat("brutus"):
			case joaat("brutus2"):
			case joaat("brutus3"):
			case joaat("bruiser"):
			case joaat("bruiser2"):
			case joaat("bruiser3"):
			case joaat("dominator4"):
			case joaat("dominator5"):
			case joaat("dominator6"):
			case joaat("deathbike"):
			case joaat("deathbike2"):
			case joaat("deathbike3"):
			case joaat("issi4"):
			case joaat("issi5"):
			case joaat("issi6"):
			case joaat("scarab"):
			case joaat("scarab2"):
			case joaat("scarab3"):
			case joaat("zr380"):
			case joaat("zr3802"):
			case joaat("zr3803"):
			case joaat("gauntlet3"):
			case joaat("rrocket"):
			case joaat("imorgon"):
			case joaat("zhaba"):
			case joaat("vagrant"):
			case joaat("coquette4"):
			case joaat("openwheel2"):
			case joaat("rt3000"):
			case joaat("tailgater2"):
			case joaat("vigero2"):
			case joaat("rhinehart"):
			case joaat("feltzer3"):
			case joaat("draugur"):
			case joaat("greenwood"):
			case joaat("weevil2"):
				return 1;
				break;
			case joaat("sultan2"):
				if (Local_124.f_116.f_1 > 2)
				{
					return 1;
				}
				break;
			}
	}
	return 0;
}

int func_449(int iParam0)//Position - 0x1B41A9
{
	switch (iParam0)
	{
		case joaat("champion"):
		case joaat("jubilee"):
			return 1;
			break;
	}
	return 0;
}

int func_450(int iParam0)//Position - 0x1B41CC
{
	switch (iParam0)
	{
		case joaat("diablous2"):
		case joaat("infernus2"):
		case joaat("taipan"):
		case joaat("thrax"):
		case joaat("peyote2"):
		case joaat("manana2"):
		case joaat("veto"):
		case joaat("veto2"):
		case joaat("patriot3"):
		case joaat("buffalo4"):
		case joaat("granger2"):
		case joaat("deity"):
		case joaat("ruiner4"):
		case joaat("zentorno"):
			return 1;
			break;
	}
	return 0;
}

int func_451(int iParam0)//Position - 0x1B4237
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		if (__LIB_1__::func_932(ENTITY::GET_ENTITY_MODEL(iParam0)))
		{
			return 1;
		}
		switch (ENTITY::GET_ENTITY_MODEL(iParam0))
		{
			case joaat("barrage"):
			case joaat("dukes3"):
			case joaat("youga3"):
			case joaat("glendale2"):
			case joaat("toreador"):
			case joaat("buffalo4"):
			case joaat("ignus"):
			case joaat("vigero2"):
			case joaat("greenwood"):
			case joaat("sentinel4"):
				return 1;
				break;
			}
	}
	return 0;
}

int func_452(int iParam0, int iParam1)//Position - 0x1B42B2
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("tornado5"))
		{
			if (iParam1 == 63)
			{
				return 0;
			}
			else
			{
				return 1;
			}
		}
		else if (((ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("faction2") && iParam1 == 33) || (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("moonbeam") && iParam1 == 33)) || (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("moonbeam2") && iParam1 == 33))
		{
			return 1;
		}
		else if ((ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("faction2") || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("moonbeam")) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("moonbeam2"))
		{
			return 0;
		}
		if (iParam1 == 62)
		{
			switch (ENTITY::GET_ENTITY_MODEL(iParam0))
			{
				case joaat("futo2"):
					return 0;
					break;
				}
		}
		if (iParam1 == 62 || iParam1 == 88)
		{
			switch (ENTITY::GET_ENTITY_MODEL(iParam0))
			{
				case joaat("virgo2"):
				case joaat("elegy"):
				case joaat("comet6"):
				case joaat("calico"):
				case joaat("tailgater2"):
					return 0;
					break;
			}
		}
		else if (iParam1 == 33)
		{
			switch (ENTITY::GET_ENTITY_MODEL(iParam0))
			{
				case joaat("comet6"):
					if (VEHICLE::GET_VEHICLE_MOD(iParam0, 2) == 2 || VEHICLE::GET_VEHICLE_MOD(iParam0, 2) == 1)
					{
						return 0;
					}
					break;
				}
		}
		if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("slamtruck") && iParam1 == 33)
		{
			return 0;
		}
		if (VEHICLE::GET_VEHICLE_PLATE_TYPE(iParam0) == 2 || VEHICLE::GET_VEHICLE_PLATE_TYPE(iParam0) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_453()//Position - 0x1B4450
{
	int iVar0;
	if (__LIB_4__::func_533(Local_124.f_406))
	{
		return 0;
	}
	if (!__LIB_0__::func_121(Local_124.f_406))
	{
		return 0;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(Local_124.f_406);
	switch (iVar0)
	{
		case joaat("tropos"):
		case joaat("tornado6"):
		case joaat("comet3"):
		case joaat("fagaloa"):
		case joaat("michelli"):
		case joaat("flashgt"):
		case joaat("brutus"):
		case joaat("brutus2"):
		case joaat("brutus3"):
		case joaat("impaler"):
		case joaat("impaler2"):
		case joaat("impaler3"):
		case joaat("impaler4"):
		case joaat("imperator"):
		case joaat("imperator2"):
		case joaat("imperator3"):
		case joaat("issi4"):
		case joaat("issi5"):
		case joaat("issi6"):
		case joaat("slamvan4"):
		case joaat("slamvan5"):
		case joaat("slamvan6"):
		case joaat("tulip"):
		case joaat("zion3"):
		case joaat("s80"):
		case joaat("gauntlet3"):
		case joaat("dynasty"):
		case joaat("nebula"):
		case joaat("asbo"):
		case joaat("sugoi"):
		case joaat("sultan2"):
		case joaat("stryder"):
		case joaat("gauntlet5"):
		case joaat("club"):
		case joaat("yosemite3"):
		case joaat("brioso2"):
		case joaat("weevil"):
		case joaat("winky"):
		case joaat("verus"):
		case joaat("comet6"):
		case joaat("vectre"):
		case joaat("sultan3"):
		case joaat("dominator8"):
		case joaat("euros"):
		case joaat("jubilee"):
		case joaat("astron"):
		case joaat("granger2"):
		case joaat("deity"):
		case joaat("comet7"):
		case joaat("cinquemila"):
		case joaat("reever"):
		case joaat("brioso3"):
		case joaat("corsita"):
		case joaat("draugur"):
		case joaat("greenwood"):
		case joaat("kanjosj"):
		case joaat("lm87"):
		case joaat("postlude"):
		case joaat("rhinehart"):
		case joaat("sm722"):
		case joaat("tenf"):
		case joaat("tenf2"):
		case joaat("torero2"):
		case joaat("vigero2"):
		case joaat("weevil2"):
		case joaat("ruiner4"):
		case joaat("sentinel4"):
		case joaat("omnisegt"):
			return 0;
			break;
	}
	return 1;
}

int func_454(int iParam0, int iParam1)//Position - 0x1B462E
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		switch (ENTITY::GET_ENTITY_MODEL(iParam0))
		{
			case joaat("dubsta"):
			case joaat("dubsta2"):
				if (Local_124.f_116.f_1 == 3)
				{
					return 1;
				}
				break;
			case joaat("ratloader"):
			case joaat("ratloader2"):
			case joaat("tornado6"):
			case joaat("rapidgt3"):
			case joaat("ellie"):
				return 1;
				break;
			case joaat("cerberus"):
			case joaat("cerberus3"):
				if ((((((((((iParam1 == 0 || iParam1 == 1) || iParam1 == 2) || iParam1 == 3) || iParam1 == 4) || iParam1 == 5) || iParam1 == 6) || iParam1 == 7) || iParam1 == 8) || iParam1 == 9) || iParam1 == 10)
				{
					return 1;
				}
				else if (iParam1 == 11)
				{
					return 0;
				}
				return 1;
				break;
			case joaat("cerberus2"):
				if ((((((iParam1 == 0 || iParam1 == 1) || iParam1 == 2) || iParam1 == 3) || iParam1 == 4) || iParam1 == 5) || iParam1 == 6)
				{
					return 1;
				}
				else if (iParam1 == 7)
				{
					return 0;
				}
				return 1;
				break;
			case joaat("hellion"):
				if (iParam1 == 0)
				{
					return 0;
				}
				return 1;
				break;
			}
	}
	return 0;
}

int func_455(int iParam0, int iParam1)//Position - 0x1B479A
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		switch (ENTITY::GET_ENTITY_MODEL(iParam0))
		{
			case joaat("tornado5"):
			case joaat("slamvan3"):
			case joaat("specter2"):
			case joaat("bombushka"):
			case joaat("mogul"):
			case joaat("volatol"):
			case joaat("patriot"):
			case joaat("brutus"):
			case joaat("brutus2"):
			case joaat("brutus3"):
			case joaat("impaler2"):
			case joaat("impaler3"):
			case joaat("impaler4"):
			case joaat("dominator4"):
			case joaat("dominator5"):
			case joaat("dominator6"):
			case joaat("schlagen"):
			case joaat("peyote2"):
				return 1;
				break;
			case joaat("ellie"):
				if (((iParam1 == 0 || iParam1 == 1) || iParam1 == 2) || iParam1 == 3)
				{
					return 1;
				}
				break;
			case joaat("gauntlet3"):
			case joaat("gauntlet4"):
				if (iParam1 == 5 || iParam1 == 4)
				{
					return 1;
				}
				break;
			case joaat("issi7"):
				if (iParam1 == 3)
				{
					return 1;
				}
				break;
			case joaat("vstr"):
				if (iParam1 >= 12)
				{
					return 1;
				}
				break;
			case joaat("gauntlet5"):
				if (iParam1 > 4)
				{
					return 1;
				}
				break;
			case joaat("dukes3"):
				if (iParam1 > 1 && iParam1 < 5)
				{
					return 1;
				}
				break;
			case joaat("youga3"):
				if (iParam1 > 4)
				{
					return 1;
				}
				break;
			case joaat("warrener2"):
				if (iParam1 > 7)
				{
					return 1;
				}
				break;
			}
	}
	return 0;
}

int func_456(int iParam0, int iParam1)//Position - 0x1B48FE
{
	if (iParam1 == 0)
	{
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		switch (ENTITY::GET_ENTITY_MODEL(iParam0))
		{
			case joaat("banshee"):
			case joaat("feltzer3"):
			case joaat("mamba"):
			case joaat("sultanrs"):
			case joaat("sheava"):
			case joaat("hustler"):
			case joaat("barrage"):
			case joaat("patriot2"):
			case joaat("issi4"):
			case joaat("issi5"):
			case joaat("issi6"):
			case joaat("scarab"):
			case joaat("scarab2"):
			case joaat("scarab3"):
			case joaat("zr380"):
			case joaat("zr3802"):
			case joaat("zr3803"):
			case joaat("s80"):
			case joaat("yosemite2"):
			case joaat("squaddie"):
			case joaat("veto"):
			case joaat("veto2"):
			case joaat("lm87"):
			case joaat("draugur"):
				return 1;
				break;
			case joaat("greenwood"):
				if (iParam1 > 8)
				{
					return 1;
				}
				break;
			}
	}
	return 0;
}

int func_457(int iParam0)//Position - 0x1B49CD
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		switch (ENTITY::GET_ENTITY_MODEL(iParam0))
		{
			case joaat("penetrator"):
			case joaat("viseris"):
			case joaat("zr380"):
			case joaat("zr3802"):
			case joaat("zr3803"):
			case joaat("italirsx"):
				return 1;
				break;
			}
	}
	return 0;
}

int func_458(int iParam0)//Position - 0x1B4A16
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("bombushka"))
		{
			return 1;
		}
	}
	return 0;
}

int func_459(int iParam0)//Position - 0x1B4A3B
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("dune3") || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("freecrawler"))
		{
			return 1;
		}
	}
	return 0;
}

int func_460(int iParam0, int iParam1)//Position - 0x1B4A73
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		switch (ENTITY::GET_ENTITY_MODEL(iParam0))
		{
			case joaat("sabregt"):
			case joaat("dominator"):
			case joaat("asea"):
			case joaat("patriot"):
			case joaat("penetrator"):
			case joaat("turismo2"):
			case joaat("cheetah2"):
			case joaat("apc"):
			case joaat("halftrack"):
			case joaat("insurgent3"):
			case joaat("oppressor"):
			case joaat("retinue"):
			case joaat("rapidgt3"):
			case joaat("vigilante"):
			case joaat("deluxo"):
			case joaat("barrage"):
			case joaat("comet4"):
			case joaat("savestra"):
			case joaat("revolter"):
			case joaat("hustler"):
			case joaat("viseris"):
			case joaat("ellie"):
			case joaat("gb200"):
			case joaat("flashgt"):
			case joaat("jester3"):
			case joaat("speedo4"):
			case joaat("mule4"):
			case joaat("pounder2"):
			case joaat("patriot2"):
			case joaat("menacer"):
			case joaat("oppressor2"):
			case joaat("clique"):
			case joaat("schlagen"):
			case joaat("hellion"):
			case joaat("s80"):
			case joaat("zhaba"):
			case joaat("retinue2"):
			case joaat("minitank"):
			case joaat("seminole2"):
			case joaat("penumbra2"):
			case joaat("tigon"):
			case joaat("toreador"):
			case joaat("winky"):
			case joaat("squaddie"):
			case joaat("weevil"):
			case joaat("zr350"):
			case joaat("remus"):
			case joaat("calico"):
			case joaat("previon"):
			case joaat("futo2"):
			case joaat("growler"):
			case joaat("granger2"):
			case joaat("champion"):
			case joaat("patriot3"):
			case joaat("zentorno"):
			case joaat("draugur"):
			case joaat("picador"):
				return 1;
				break;
			case joaat("sentinel3"):
				if ((((((iParam1 == 0 || iParam1 == 1) || iParam1 == 2) || iParam1 == 3) || iParam1 == 8) || iParam1 == 9) || iParam1 == 10)
				{
					return 1;
				}
				break;
			case joaat("gauntlet3"):
				if (iParam1 == 1 || iParam1 == 2)
				{
					return 1;
				}
				break;
			case joaat("asbo"):
				if (iParam1 == 5 || iParam1 == 6)
				{
					return 1;
				}
				break;
			}
	}
	return 0;
}

int func_461(int iParam0)//Position - 0x1B4C7D
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		if (((((ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("t20") || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("italigtb2")) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("zr380")) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("zr3802")) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("zr3803")) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("manchez2"))
		{
			return 1;
		}
	}
	return 0;
}

int func_462(int iParam0)//Position - 0x1B4CFD
{
	struct<2> Var0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	if (!__LIB_1__::func_172(Local_124.f_406, &uVar4, &Var0, &uVar1, &uVar2, &uVar3))
	{
		return 0;
	}
	if (Var0.f_0 < -0.2f)
	{
		*iParam0 = 3;
		return 1;
	}
	if (Var0.f_0 > 0.2f)
	{
		*iParam0 = 4;
		return 1;
	}
	if (Var0.f_1 > 0f)
	{
		*iParam0 = 1;
		return 1;
	}
	if (Var0.f_1 < 0f)
	{
		*iParam0 = 2;
		return 1;
	}
	return 0;
}

int func_463(int iParam0)//Position - 0x1B4D6A
{
	int iVar0;
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
		switch (iVar0)
		{
			case joaat("tampa"):
			case joaat("scarab"):
			case joaat("scarab2"):
			case joaat("scarab3"):
			case joaat("peyote2"):
			case joaat("everon"):
			case joaat("yosemite3"):
			case joaat("patriot3"):
				return 1;
				break;
			case joaat("warrener2"):
			case joaat("jester4"):
			case joaat("vectre"):
			case joaat("cypher"):
			case joaat("dominator8"):
			case joaat("futo2"):
			case joaat("euros"):
				break;
			default:
				if (__LIB_1__::func_932(iVar0))
				{
					return 1;
				}
				break;
			}
	}
	return 0;
}

int func_464(int iParam0, char* sParam1, float fParam2)//Position - 0x1B4E3A
{
	float fVar0;
	int iVar1;
	struct<3> Var2;
	MISC::GET_GROUND_Z_FOR_3D_COORD(ENTITY::GET_ENTITY_COORDS(iParam0, true), &fVar0, false, false);
	iVar1 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iParam0, sParam1);
	if (iVar1 == -1)
	{
		Var2 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
		*fParam2 = ((Var2.f_2 - fVar0) + 0.3f);
		return 0;
	}
	else
	{
		Var2 = { ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(iParam0, iVar1) };
	}
	*fParam2 = ((Var2.f_2 - fVar0) + 0.3f);
	return 1;
}

int func_465(int iParam0)//Position - 0x1B4EA1
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		switch (ENTITY::GET_ENTITY_MODEL(iParam0))
		{
			case joaat("fagaloa"):
			case joaat("asbo"):
			case joaat("gauntlet5"):
			case joaat("youga3"):
			case joaat("club"):
			case joaat("manana2"):
			case joaat("calico"):
			case joaat("comet6"):
			case joaat("warrener2"):
			case joaat("remus"):
			case joaat("vectre"):
			case joaat("dominator8"):
			case joaat("futo2"):
			case joaat("euros"):
			case joaat("greenwood"):
			case joaat("tenf2"):
			case joaat("postlude"):
			case joaat("brioso3"):
			case joaat("sentinel4"):
				return 1;
				break;
			}
	}
	return 0;
}

int func_466(int iParam0, float fParam1, float fParam2)//Position - 0x1B4F38
{
	float fVar0;
	struct<3> Var1;
	MISC::GET_GROUND_Z_FOR_3D_COORD(ENTITY::GET_ENTITY_COORDS(iParam0, true), &fVar0, false, false);
	Var1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, 0f, 0f, fParam1) };
	*fParam2 = (Var1.f_2 - fVar0);
	return 1;
}

int func_467()//Position - 0x1B5610
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 0;
	}
	if (Local_124.f_0 == 45)
	{
		if (Local_124.f_675 == 12)
		{
			return 1;
		}
	}
	return 0;
}

void func_468(int iParam0)//Position - 0x1B5708
{
	Local_124.f_116.f_31 = iParam0;
}

int func_469()//Position - 0x1B572E
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 0;
	}
	if (Local_124.f_0 == 45)
	{
		if (Local_124.f_675 == 10)
		{
			return 1;
		}
	}
	return 0;
}

int func_470(var uParam0)//Position - 0x1B57EC
{
	StringCopy(&(uParam0->f_11), "", 16);
	if (uParam0->f_16)
	{
		uParam0->f_16 = 0;
		return 1;
	}
	return 0;
}

int func_471()//Position - 0x1B5CF6
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 0;
	}
	if (Local_124.f_0 == 45)
	{
		if (Local_124.f_675 == 16)
		{
			return 1;
		}
	}
	return 0;
}

int func_472()//Position - 0x1B5D22
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 0;
	}
	if (Local_124.f_0 == 45)
	{
		if (Local_124.f_675 == 15)
		{
			return 1;
		}
	}
	return 0;
}

int func_473()//Position - 0x1B5D4E
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 0;
	}
	if (Local_124.f_0 == 45)
	{
		if (Local_124.f_675 == 14)
		{
			return 1;
		}
	}
	return 0;
}

int func_474(int iParam0)//Position - 0x1B6210
{
	int iVar0;
	var uVar1[10];
	int iVar2;
	int iVar3;
	iVar2 = PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uVar1, -1);
	iVar3 = 0;
	while (iVar3 < iVar2)
	{
		if ((ENTITY::DOES_ENTITY_EXIST(uVar1[iVar3]) && !PED::IS_PED_INJURED(uVar1[iVar3])) && PED::IS_PED_GETTING_INTO_A_VEHICLE(uVar1[iVar3]))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_ENTERING(uVar1[iVar3]);
			if (iVar0 == iParam0)
			{
				return 1;
			}
		}
		iVar3++;
	}
	return 0;
}

char* func_475(int iParam0, int iParam1)//Position - 0x1B64B9
{
	return "AW_UPG_VEHS";
}

int func_476(int iParam0, bool bParam1)//Position - 0x1B64C6
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
		{
			switch (ENTITY::GET_ENTITY_MODEL(iParam0))
			{
				case joaat("ratloader"):
				case joaat("ratloader2"):
				case joaat("deveste"):
				case joaat("issi3"):
				case joaat("slamvan"):
				case joaat("gargoyle"):
				case joaat("glendale"):
				case joaat("impaler"):
				case joaat("dominator"):
					if (bParam1)
					{
						return 1;
					}
					break;
				case joaat("monster3"):
				case joaat("bruiser"):
				case joaat("bruiser2"):
				case joaat("bruiser3"):
				case joaat("vamos"):
				case joaat("impaler2"):
				case joaat("impaler3"):
				case joaat("impaler4"):
				case joaat("issi4"):
				case joaat("deathbike"):
				case joaat("deathbike2"):
				case joaat("deathbike3"):
				case joaat("dominator2"):
				case joaat("dominator4"):
				case joaat("dominator5"):
				case joaat("dominator6"):
				case joaat("slamvan4"):
				case joaat("imperator"):
				case joaat("zr380"):
				case joaat("cerberus"):
				case joaat("scarab"):
				case joaat("brutus"):
				case joaat("imperator2"):
				case joaat("imperator3"):
				case joaat("zr3802"):
				case joaat("zr3803"):
				case joaat("cerberus2"):
				case joaat("scarab2"):
				case joaat("brutus2"):
				case joaat("cerberus3"):
				case joaat("scarab3"):
				case joaat("brutus3"):
				case joaat("slamvan5"):
				case joaat("slamvan6"):
				case joaat("monster4"):
				case joaat("monster5"):
				case joaat("issi5"):
				case joaat("issi6"):
					return 1;
					break;
				}
			}
	}
	return 0;
}

int func_477()//Position - 0x1B6A7A
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 0;
	}
	if (Local_124.f_0 == 45)
	{
		if (Local_124.f_675 == 19)
		{
			return 1;
		}
	}
	return 0;
}

bool func_478(bool bParam0)//Position - 0x1B6C2A
{
	if (Global_78319)
	{
		return __LIB_0__::func_154(PLAYER::PLAYER_ID(), bParam0, !func_2996(1));
	}
	return !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID());
}

bool func_479()//Position - 0x1B6C6A
{
	return BitTest(Global_2815059.f_1795, 4);
}

bool func_480()//Position - 0x1B76CB
{
	return Global_100493.f_5;
}

bool func_481(int iParam0)//Position - 0x1B7907
{
	return BitTest(Global_2689235[iParam0 /*453*/].f_197, 15);
}

int func_482(int iParam0, int iParam1, bool bParam2)//Position - 0x1B7CF0
{
	int iVar0;
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 1;
	}
	iVar0 = (Global_1835502.f_116[iParam1] - 1);
	if (iVar0 == iParam0)
	{
		return 1;
	}
	if (!bParam2)
	{
		if (iVar0 == -1)
		{
			return 1;
		}
	}
	return 0;
}

int func_483(int iParam0)//Position - 0x1B881A
{
	if (__LIB_0__::func_299(iParam0) == 0)
	{
		if (!Global_4539662)
		{
			return 0;
		}
	}
	return 1;
}

int func_484(int iParam0, int iParam1)//Position - 0x1B88CC
{
	if (iParam0 == 45)
	{
		if (iParam1 == 4 || iParam1 == 5)
		{
			return 1;
		}
	}
	return 0;
}

bool func_485()//Position - 0x1B8A2D
{
	return Global_4535620;
}

int func_486(int iParam0)//Position - 0x1B9163
{
	switch (iParam0)
	{
		case 21:
			return 0;
			break;
	}
	return 1;
}

int func_487(int iParam0)//Position - 0x1B91AA
{
	switch (iParam0)
	{
		case 46:
		case 47:
		case 48:
		case 49:
		case 52:
		case 53:
			return 1;
		default:
	}
	return 0;
}

float func_488(int iParam0)//Position - 0x1B93EB
{
	return Global_100493.f_314[iParam0];
}

bool func_489()//Position - 0x1BB1DA
{
	return Global_2714762.f_785.f_32;
}

void func_490(int iParam0)//Position - 0x1BBA68
{
	Global_100493.f_482 = iParam0;
}

void func_491(int iParam0, var uParam1)//Position - 0x1BBAB0
{
	if (iParam0 == 39)
	{
		*(uParam1[0 /*3*/]) = { -1105.5139f, -1975.695f, 12.0761f };
		uParam1->f_7[0] = 87.9293f;
		*(uParam1[1 /*3*/]) = { -1130.2709f, -1983.4476f, 12.1654f };
		uParam1->f_7[1] = 114.2586f;
		switch (uParam1->f_28)
		{
			case 0:
				uParam1->f_11[0 /*3*/] = { -1138.8019f, -1980.2128f, 12.727169f };
				uParam1->f_18[0 /*3*/] = { 9.925048f, -4.277269f, 164.13179f };
				uParam1->f_25[0] = 39.161556f;
				uParam1->f_11[1 /*3*/] = { -1138.644f, -1981.3275f, 12.727169f };
				uParam1->f_18[1 /*3*/] = { 9.925048f, -4.277269f, 164.13179f };
				uParam1->f_25[1] = 39.161556f;
				break;
			case 1:
				uParam1->f_11[0 /*3*/] = { -1149.804f, -2006.0593f, 14.513581f };
				uParam1->f_18[0 /*3*/] = { -13.841268f, -4.277272f, 89.836845f };
				uParam1->f_25[0] = 45f;
				uParam1->f_11[1 /*3*/] = { -1147.0095f, -2006.0665f, 15.202101f };
				uParam1->f_18[1 /*3*/] = { -13.841268f, -4.277272f, 89.836845f };
				uParam1->f_25[1] = 45f;
				break;
			case 2:
				uParam1->f_11[0 /*3*/] = { -1161.0115f, -2010.0587f, 13.641221f };
				uParam1->f_18[0 /*3*/] = { -0.605575f, 0f, 115.483505f };
				uParam1->f_25[0] = 45f;
				uParam1->f_11[1 /*3*/] = { -1159.1111f, -2009.1531f, 13.663468f };
				uParam1->f_18[1 /*3*/] = { -0.605575f, 0f, 115.483505f };
				uParam1->f_25[1] = 45f;
				break;
			}
	}
}

bool func_492()//Position - 0x1BE6E0
{
	return ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 189.68857f, 5187.038f, 10.300259f, 174.79237f, 5186.8535f, 15.074972f, 8.5f, false, true, 0);
}

int func_493()//Position - 0x1BE716
{
	int iVar0;
	int iVar1;
	if (ENTITY::DOES_ENTITY_EXIST(Local_124.f_406) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_124.f_406, false))
	{
		if (PED::IS_PED_BEING_JACKED(PLAYER::PLAYER_PED_ID()) || TASK::GET_IS_TASK_ACTIVE(PLAYER::PLAYER_PED_ID(), 2))
		{
			return 0;
		}
		iVar0 = 0;
		while (iVar0 < 32)
		{
			if (__LIB_0__::func_154(PLAYER::INT_TO_PLAYERINDEX(iVar0), 1, 1) && PLAYER::INT_TO_PLAYERINDEX(iVar0) != PLAYER::PLAYER_ID())
			{
				iVar1 = PLAYER::GET_PLAYER_PED(PLAYER::INT_TO_PLAYERINDEX(iVar0));
				if (PED::IS_PED_GETTING_INTO_A_VEHICLE(iVar1))
				{
					if (PED::GET_VEHICLE_PED_IS_ENTERING(iVar1) == Local_124.f_406)
					{
						return 0;
					}
				}
				if (PED::IS_PED_IN_VEHICLE(iVar1, Local_124.f_406, false))
				{
					if (TASK::GET_IS_TASK_ACTIVE(iVar1, 2))
					{
						return 0;
					}
				}
			}
			iVar0++;
		}
	}
	return 1;
}

float func_494(int iParam0, int iParam1)//Position - 0x1BE86E
{
	switch (iParam1)
	{
		case 1:
			switch (iParam0)
			{
				case 0:
					return 45.7253f;
				case 1:
					return 322.259f;
				case 2:
					return 233.4659f;
				case 3:
					return 113.599f;
				default:
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 0:
					return 26.3594f;
				case 1:
					return 149.3583f;
				case 2:
					return 218.6443f;
				case 3:
					return 189.8393f;
				case 4:
					return 313.1128f;
				case 5:
					return 72.4652f;
				default:
			}
			break;
	}
	return 0f;
}

Vector3 func_495(int iParam0, int iParam1)//Position - 0x1BE9A5
{
	switch (iParam1)
	{
		case 1:
			switch (iParam0)
			{
				case 0:
					return -1350.316f, 161.9409f, -100.1944f;
				case 1:
					return -1355.0747f, 162.4059f, -100.1944f;
				case 2:
					return -1354.9924f, 167.3427f, -100.1944f;
				case 3:
					return -1350.6805f, 166.9915f, -100.1944f;
				default:
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 0:
					return -1362.908f, 159.101f, -99.9944f;
				case 1:
					return -1362.0852f, 163.3715f, -99.9944f;
				case 2:
					return -1365.924f, 164.0357f, -99.9944f;
				case 3:
					return -1364.995f, 164.0697f, -99.9943f;
				case 4:
					return -1366.9978f, 158.8447f, -99.9944f;
				case 5:
					return -1360.8574f, 160.2747f, -99.9944f;
				default:
			}
			break;
	}
	return 0f, 0f, 0f;
}

int func_496(int iParam0)//Position - 0x1BEE26
{
	switch (iParam0)
	{
		case joaat("monster3"):
			return __LIB_0__::func_137(9482, -1);
			break;
		case joaat("monster4"):
			return __LIB_0__::func_137(9483, -1);
			break;
		case joaat("monster5"):
			return __LIB_0__::func_137(9484, -1);
			break;
		case joaat("cerberus"):
			return __LIB_0__::func_137(9485, -1);
			break;
		case joaat("cerberus2"):
			return __LIB_0__::func_137(9486, -1);
			break;
		case joaat("cerberus3"):
			return __LIB_0__::func_137(9487, -1);
			break;
		case joaat("bruiser"):
			return __LIB_0__::func_137(9488, -1);
			break;
		case joaat("bruiser2"):
			return __LIB_0__::func_137(9489, -1);
			break;
		case joaat("bruiser3"):
			return __LIB_0__::func_137(9490, -1);
			break;
		case joaat("slamvan4"):
			return __LIB_0__::func_137(9491, -1);
			break;
		case joaat("slamvan5"):
			return __LIB_0__::func_137(9492, -1);
			break;
		case joaat("slamvan6"):
			return __LIB_0__::func_137(9493, -1);
			break;
		case joaat("brutus"):
			return __LIB_0__::func_137(9494, -1);
			break;
		case joaat("brutus2"):
			return __LIB_0__::func_137(9495, -1);
			break;
		case joaat("brutus3"):
			return __LIB_0__::func_137(9496, -1);
			break;
		case joaat("scarab"):
			return __LIB_0__::func_137(9497, -1);
			break;
		case joaat("scarab2"):
			return __LIB_0__::func_137(9498, -1);
			break;
		case joaat("scarab3"):
			return __LIB_0__::func_137(9499, -1);
			break;
		case joaat("dominator4"):
			return __LIB_0__::func_137(9500, -1);
			break;
		case joaat("dominator5"):
			return __LIB_0__::func_137(9501, -1);
			break;
		case joaat("dominator6"):
			return __LIB_0__::func_137(9502, -1);
			break;
		case joaat("impaler2"):
			return __LIB_0__::func_137(9503, -1);
			break;
		case joaat("impaler3"):
			return __LIB_0__::func_137(9504, -1);
			break;
		case joaat("impaler4"):
			return __LIB_0__::func_137(9505, -1);
			break;
		case joaat("imperator"):
			return __LIB_0__::func_137(9506, -1);
			break;
		case joaat("imperator2"):
			return __LIB_0__::func_137(9507, -1);
			break;
		case joaat("imperator3"):
			return __LIB_0__::func_137(9508, -1);
			break;
		case joaat("zr380"):
			return __LIB_0__::func_137(9509, -1);
			break;
		case joaat("zr3802"):
			return __LIB_0__::func_137(9510, -1);
			break;
		case joaat("zr3803"):
			return __LIB_0__::func_137(9511, -1);
			break;
		case joaat("issi4"):
			return __LIB_0__::func_137(9512, -1);
			break;
		case joaat("issi5"):
			return __LIB_0__::func_137(9513, -1);
			break;
		case joaat("issi6"):
			return __LIB_0__::func_137(9514, -1);
			break;
		case joaat("deathbike"):
			return __LIB_0__::func_137(9515, -1);
			break;
		case joaat("deathbike2"):
			return __LIB_0__::func_137(9516, -1);
			break;
		case joaat("deathbike3"):
			return __LIB_0__::func_137(25135, -1);
			break;
	}
	return 0;
}

char* func_497(int iParam0, int iParam1)//Position - 0x1BF3B5
{
	int iVar0;
	char* sVar1;
	iVar0 = __LIB_1__::func_184(iParam0);
	if (iParam1 == 0)
	{
		if (iVar0 == -1)
		{
			sVar1 = "";
		}
	}
	else
	{
		iVar0 = iParam0;
	}
	if (iVar0 < 0)
	{
		sVar1 = "";
	}
	if (Global_43792[iVar0 /*32*/].f_6)
	{
		sVar1 = "";
	}
	if (!Global_43792[iVar0 /*32*/].f_12)
	{
		HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(&(Global_43792[iVar0 /*32*/].f_8));
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_43987);
		if (HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0))
		{
			sVar1 = __LIB_1__::func_192(&(Global_43792[iVar0 /*32*/].f_8));
		}
	}
	else
	{
		HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(&(Global_43792[iVar0 /*32*/].f_8));
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_43987);
		if (Global_43792[iVar0 /*32*/].f_30)
		{
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_43792[iVar0 /*32*/].f_13));
		}
		else
		{
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_43792[iVar0 /*32*/].f_13));
		}
		if (HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0))
		{
			sVar1 = __LIB_1__::func_192(&(Global_43792[iVar0 /*32*/].f_8));
		}
	}
	return sVar1;
}

int func_498()//Position - 0x1BF73C
{
	if (((((((((__LIB_0__::func_663() || func_3041()) || __LIB_1__::func_239()) || __LIB_0__::func_706()) || (func_3040() && !NETWORK::NETWORK_IS_ACTIVITY_SESSION())) || (func_3039() && !func_3038())) || Global_2656879) || Global_2656879.f_1 != 0) || Global_2656953 != 0) || (func_3037() == 2 && !NETWORK::NETWORK_IS_ACTIVITY_SESSION()))
	{
		return 1;
	}
	return 0;
}

int func_499()//Position - 0x1BFD97
{
	int iVar0;
	iVar0 = INTERIOR::GET_ROOM_KEY_FROM_ENTITY(PLAYER::PLAYER_PED_ID());
	switch (iVar0)
	{
		case joaat("ROOM_GF"):
		case joaat("ROOM_F1"):
		case joaat("ROOM_F2"):
			return 1;
			break;
	}
	return 0;
}

int func_500()//Position - 0x1C12D4
{
	if ((((((((PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0 /*PLAYER_CONTROL*/, 71 /*INPUT_VEH_ACCELERATE*/) != 0f || PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0 /*PLAYER_CONTROL*/, 72 /*INPUT_VEH_BRAKE*/) != 0f) || PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 71 /*INPUT_VEH_ACCELERATE*/)) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 71 /*INPUT_VEH_ACCELERATE*/)) || PAD::IS_DISABLED_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 71 /*INPUT_VEH_ACCELERATE*/)) || PAD::IS_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 72 /*INPUT_VEH_BRAKE*/)) || PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 72 /*INPUT_VEH_BRAKE*/)) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 72 /*INPUT_VEH_BRAKE*/)) || PAD::IS_DISABLED_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 72 /*INPUT_VEH_BRAKE*/))
	{
		return 1;
	}
	return 0;
}

int func_501()//Position - 0x1C1357
{
	if (Global_4282954 != -1 && Global_4282954 < 363)
	{
		if (BitTest(Global_1585857[Global_4282954 /*142*/].f_103, 12))
		{
			return 1;
		}
	}
	return 0;
}

bool func_502(int iParam0)//Position - 0x1C138C
{
	return BitTest(Global_2689235[iParam0 /*453*/].f_198, 8);
}

int func_503()//Position - 0x1C1581
{
	if (Local_103.f_15[iLocal_114] != -1)
	{
		return 1;
	}
	return 0;
}

int func_504()//Position - 0x1C159B
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		switch (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()))
		{
			case 1:
				return 500;
				break;
			case 2:
				return 2000;
				break;
			case 3:
				return 5000;
				break;
			case 4:
				return 10000;
				break;
			case 5:
				return 30000;
				break;
			}
	}
	return 0;
}

void func_505(bool bParam0)//Position - 0x1C1608
{
	if (bParam0)
	{
		MISC::SET_BIT(&Global_103905, 8);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_103905, 8);
	}
}

int func_506()//Position - 0x1C17FA
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (Global_1585153[iVar0] == 0)
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

int func_507()//Position - 0x1C1B6D
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (Global_78319)
		{
			if (NETWORK::NETWORK_IS_PLAYER_IN_MP_CUTSCENE(PLAYER::PLAYER_ID()))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_508(int iParam0, var uParam1, var uParam2, var uParam3)//Position - 0x1C1C1E
{
	*uParam1 = { 0f, 0f, 0f };
	*uParam2 = { 0f, 0f, 0f };
	*uParam3 = 0f;
	if (iParam0 == 39)
	{
		*uParam1 = { -1138.8121f, -1991.0653f, 12.166301f };
		*uParam2 = { -1145.7837f, -1983.8364f, 16.160961f };
		*uParam3 = 13.125f;
	}
	else if (iParam0 == 40)
	{
		*uParam1 = { 719.7279f, -1083.2728f, 20.440435f };
		*uParam2 = { 719.9546f, -1093.4456f, 25.324745f };
		*uParam3 = 9.5f;
	}
	else if (iParam0 == 41)
	{
		*uParam1 = { -357.79214f, -129.71326f, 37.679173f };
		*uParam2 = { -360.72888f, -137.64238f, 41.679173f };
		*uParam3 = 10.75f;
	}
	else if (iParam0 == 42)
	{
		*uParam1 = { 108.74273f, 6612.336f, 31.000193f };
		*uParam2 = { 119.62831f, 6623.331f, 34.958996f };
		*uParam3 = 10.4375f;
	}
	else if (iParam0 == 43)
	{
		*uParam1 = { 1188.1017f, 2649.3423f, 36.02266f };
		*uParam2 = { 1169.0382f, 2649.4377f, 40.851032f };
		*uParam3 = 10.75f;
	}
	else if (iParam0 == 44)
	{
		*uParam1 = { -202.15602f, -1307.1853f, 35.571644f };
		*uParam2 = { -208.43768f, -1307.2504f, 29.576435f };
		*uParam3 = 8f;
	}
	return *uParam3 != 0f;
}

int func_509(int iParam0)//Position - 0x1C3F1D
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return Global_100493.f_77[iParam0];
}

var func_510()//Position - 0x1C56D8
{
	return BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_197, 17);
}

void func_511(bool bParam0)//Position - 0x1C6464
{
	if (bParam0)
	{
		if (!BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_197, 12))
		{
			MISC::SET_BIT(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_197), 12);
		}
	}
	else if (BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_197, 12))
	{
		MISC::CLEAR_BIT(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_197), 12);
	}
}

void func_512()//Position - 0x1C6723
{
	int iVar0;
	bool bVar1;
	bVar1 = false;
	while (bVar1 < 32)
	{
		iVar0 = PLAYER::INT_TO_PLAYERINDEX(bVar1);
		if (__LIB_0__::func_154(iVar0, 0, 1))
		{
			if (NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar0))
			{
				if (BitTest(Local_104[iVar0 /*17*/].f_6, 2))
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::GET_PLAYER_PED(iVar0), joaat("SCRIPT_TASK_GO_STRAIGHT_TO_COORD")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(PLAYER::GET_PLAYER_PED(iVar0), joaat("SCRIPT_TASK_GO_STRAIGHT_TO_COORD")) != 0)
					{
						if (BitTest(Local_103.f_9, bVar1))
						{
							MISC::CLEAR_BIT(&(Local_103.f_9), bVar1);
						}
					}
				}
			}
		}
		bVar1++;
	}
}

bool func_513(int iParam0, int iParam1)//Position - 0x1C7F9C
{
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::GET_PLAYER_PED(iParam0), false) || !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::GET_PLAYER_PED(iParam1), false))
	{
		return 0;
	}
	return PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(iParam0), false) == PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(iParam1), false);
}

void func_514()//Position - 0x1C8091
{
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		Local_103.f_41 = NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(Local_103.f_40);
		if (Local_103.f_41 != -1)
		{
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_103.f_41))
			{
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_103.f_41) >= 0.98f)
				{
					Local_103.f_39 = 0;
					MISC::CLEAR_BIT(&(Local_103.f_8), 6);
				}
			}
		}
	}
}

void func_515()//Position - 0x1C8390
{
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		Local_103.f_41 = NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(Local_103.f_40);
		if (Local_103.f_41 != -1)
		{
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_103.f_41))
			{
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_103.f_41) >= 0.98f)
				{
					Local_103.f_39 = 2;
					MISC::CLEAR_BIT(&(Local_103.f_8), 8);
				}
			}
		}
	}
}

void func_516()//Position - 0x1C854A
{
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		Local_103.f_41 = NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(Local_103.f_40);
		if (Local_103.f_41 != -1)
		{
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_103.f_41))
			{
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_103.f_41) >= 0.98f)
				{
					Local_103.f_39 = 1;
					MISC::CLEAR_BIT(&(Local_103.f_8), 7);
				}
			}
		}
	}
}

bool func_517(int iParam0)//Position - 0x1C8D43
{
	return BitTest(Global_2689235[iParam0 /*453*/].f_197, 16);
}

void func_518()//Position - 0x1C8D59
{
	if (Global_2787744)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_124.f_12))
		{
			NETWORK::SET_ENTITY_LOCALLY_INVISIBLE(Local_124.f_12);
		}
	}
}

bool func_519()//Position - 0x1CA0DB
{
	return BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_197, 10);
}

void func_520(bool bParam0)//Position - 0x1CA0F3
{
	if (bParam0)
	{
		if (!BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_197, 10))
		{
			MISC::SET_BIT(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_197), 10);
		}
	}
	else if (BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_197, 10))
	{
		MISC::CLEAR_BIT(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_197), 10);
	}
}

int func_521()//Position - 0x1CA150
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0));
			if (BitTest(Global_2689235[iVar1 /*453*/].f_197, 10))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_522(int iParam0)//Position - 0x1CA4E8
{
	return (PED::IS_PED_IN_ANY_PLANE(PLAYER::GET_PLAYER_PED(iParam0)) || PED::IS_PED_IN_ANY_HELI(PLAYER::GET_PLAYER_PED(iParam0)));
}

int func_523()//Position - 0x1CA91C
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 0;
	}
	if (Local_124.f_0 == 45)
	{
		switch (Local_124.f_675)
		{
			case 1:
			case 2:
			case 3:
				return 1;
			}
		default:
	}
	return 0;
}

int func_524(int iParam0)//Position - 0x1CAD6C
{
	if ((((MISC::GET_HASH_KEY("v_carmod") == iParam0 || MISC::GET_HASH_KEY("v_lockup") == iParam0) || MISC::GET_HASH_KEY("v_carmod") == iParam0) || MISC::GET_HASH_KEY("v_carmod3") == iParam0) || MISC::GET_HASH_KEY("v_carmod3") == iParam0)
	{
		return 1;
	}
	return 0;
}

void func_525()//Position - 0x1CADCB
{
	int iVar0;
	if (iLocal_189 <= 0)
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		iLocal_189 = 0;
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		iLocal_189 = 0;
		return;
	}
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iLocal_189 = 0;
		return;
	}
	iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		iLocal_189 = 0;
		return;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
		{
			iLocal_189 = 0;
			return;
		}
	}
	iLocal_189 = (iLocal_189 - 1);
	if (iLocal_189 > 0)
	{
		VEHICLE::SET_FORCE_HD_VEHICLE(iVar0, true);
	}
	else
	{
		VEHICLE::SET_FORCE_HD_VEHICLE(iVar0, false);
		iLocal_189 = 0;
	}
}

void func_526()//Position - 0x1CBEE5
{
	if (iLocal_164)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_165) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_165, false))
		{
			VEHICLE::RELEASE_PRELOAD_MODS(iLocal_165);
		}
		iLocal_164 = 0;
		iLocal_165 = 0;
	}
}

int func_527(int iParam0)//Position - 0x1CC2EE
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < iLocal_168)
	{
		if (iLocal_168[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_528(var uParam0, var uParam1)//Position - 0x1CC445
{
	*uParam0 = PLAYER::GET_PLAYER_PED(Local_116.f_0);
	if (PED::IS_PED_IN_ANY_VEHICLE(*uParam0, false))
	{
		*uParam1 = PED::GET_VEHICLE_PED_IS_IN(*uParam0, false);
		if (*uParam1 != Local_116.f_6)
		{
			return 1;
		}
	}
	return 0;
}

bool func_529()//Position - 0x1CC47D
{
	return BitTest(Global_103905, 5);
}

int func_530()//Position - 0x1CC4A7
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 0;
	}
	if (Local_124.f_0 == 45)
	{
		if (Local_124.f_675 == 4 || Local_124.f_675 == 5)
		{
			return 1;
		}
	}
	return 0;
}

int func_531()//Position - 0x1CCF25
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 0;
	}
	if (Local_124.f_0 == 45)
	{
		if (Local_124.f_675 == 11)
		{
			return 1;
		}
	}
	return 0;
}

void func_532()//Position - 0x1CDB12
{
	if (BitTest(uLocal_202, 18))
	{
		HUD::DISABLE_FRONTEND_THIS_FRAME();
		HUD::SUPPRESS_FRONTEND_RENDERING_THIS_FRAME();
		if (!HUD::IS_WARNING_MESSAGE_ACTIVE())
		{
			PAD::SET_INPUT_EXCLUSIVE(0 /*PLAYER_CONTROL*/, 200 /*INPUT_FRONTEND_PAUSE_ALTERNATE*/);
			PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 200 /*INPUT_FRONTEND_PAUSE_ALTERNATE*/);
		}
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 200 /*INPUT_FRONTEND_PAUSE_ALTERNATE*/, true);
		PAD::DISABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 200 /*INPUT_FRONTEND_PAUSE_ALTERNATE*/, true);
	}
}

void func_533(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4)//Position - 0x1CEC44
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = joaat("prop_rub_stool");
			*uParam2 = { -1295.45f, -3006.93f, -49.25f };
			*uParam3 = { 0f, 0f, 70f };
			*uParam4 = 0;
			break;
		case 1:
			*uParam1 = joaat("prop_toolchest_01");
			*uParam2 = { -1295.26f, -3008.91f, -49.49f };
			*uParam3 = { 0f, 0f, 10f };
			*uParam4 = 1;
			break;
		case 2:
			*uParam1 = joaat("prop_tool_bench01");
			*uParam2 = { -1294.24f, -3007.32f, -49.48f };
			*uParam3 = { 0f, 0f, 60f };
			*uParam4 = 0;
			break;
		case 3:
			*uParam1 = joaat("prop_tool_blowtorch");
			*uParam2 = { -1294.32f, -3007.3f, -48.62f };
			*uParam3 = { 0f, 0f, 350f };
			*uParam4 = 0;
			break;
		case 4:
			*uParam1 = joaat("prop_tool_wrench");
			*uParam2 = { -1294.3f, -3007.2f, -48.61f };
			*uParam3 = { 90f, 0f, 40f };
			*uParam4 = 0;
			break;
		case 5:
			*uParam1 = joaat("prop_tool_adjspanner");
			*uParam2 = { -1296.11f, -3006.79f, -49.48f };
			*uParam3 = { 90f, 0f, 110f };
			*uParam4 = 0;
			break;
		case 6:
			*uParam1 = joaat("gr_prop_gr_tool_box_01a");
			*uParam2 = { -1292.62f, -3004.95f, -49.45f };
			*uParam3 = { 90f, 0f, -110f };
			*uParam4 = 1;
			break;
		case 7:
			*uParam1 = joaat("prop_toolchest_02");
			*uParam2 = { -1295.87f, -3007.93f, -49.49f };
			*uParam3 = { 0f, 0f, 130f };
			*uParam4 = 1;
			break;
	}
}

int func_534(int iParam0, int iParam1)//Position - 0x1CF7CF
{
	switch (iParam1)
	{
		case joaat("WEAPON_PISTOL"):
			return WEAPON::HAS_PED_GOT_WEAPON(iParam0, joaat("WEAPON_PISTOL_MK2"), false);
		case joaat("WEAPON_SMG"):
			return WEAPON::HAS_PED_GOT_WEAPON(iParam0, joaat("WEAPON_SMG_MK2"), false);
		case joaat("WEAPON_HEAVYSNIPER"):
			return WEAPON::HAS_PED_GOT_WEAPON(iParam0, joaat("WEAPON_HEAVYSNIPER_MK2"), false);
		case joaat("WEAPON_COMBATMG"):
			return WEAPON::HAS_PED_GOT_WEAPON(iParam0, joaat("WEAPON_COMBATMG_MK2"), false);
		case joaat("WEAPON_ASSAULTRIFLE"):
			return WEAPON::HAS_PED_GOT_WEAPON(iParam0, joaat("WEAPON_ASSAULTRIFLE_MK2"), false);
		case joaat("WEAPON_CARBINERIFLE"):
			return WEAPON::HAS_PED_GOT_WEAPON(iParam0, joaat("WEAPON_CARBINERIFLE_MK2"), false);
		case joaat("WEAPON_PUMPSHOTGUN"):
			return WEAPON::HAS_PED_GOT_WEAPON(iParam0, joaat("WEAPON_PUMPSHOTGUN_MK2"), false);
		case joaat("WEAPON_SPECIALCARBINE"):
			return WEAPON::HAS_PED_GOT_WEAPON(iParam0, joaat("WEAPON_SPECIALCARBINE_MK2"), false);
		case joaat("WEAPON_SNSPISTOL"):
			return WEAPON::HAS_PED_GOT_WEAPON(iParam0, joaat("WEAPON_SNSPISTOL_MK2"), false);
		case joaat("WEAPON_MARKSMANRIFLE"):
			return WEAPON::HAS_PED_GOT_WEAPON(iParam0, joaat("WEAPON_MARKSMANRIFLE_MK2"), false);
		case joaat("WEAPON_REVOLVER"):
			return WEAPON::HAS_PED_GOT_WEAPON(iParam0, joaat("WEAPON_REVOLVER_MK2"), false);
		case joaat("WEAPON_BULLPUPRIFLE"):
			return WEAPON::HAS_PED_GOT_WEAPON(iParam0, joaat("WEAPON_BULLPUPRIFLE_MK2"), false);
		default:
	}
	return 0;
}

int func_535()//Position - 0x1CF947
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0));
			if ((((__LIB_0__::func_154(iVar1, 1, 1) && Global_2689235[iVar1 /*453*/].f_318.f_6 != -1) && __LIB_0__::func_170(Global_2689235[iVar1 /*453*/].f_318.f_6) == 8) && Global_2689235[iVar1 /*453*/].f_318.f_9 == Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_9) && BitTest(Global_1853348[iVar1 /*834*/].f_267.f_277, 16))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_536()//Position - 0x1D01F5
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0));
			if ((((__LIB_0__::func_154(iVar1, 1, 1) && Global_2689235[iVar1 /*453*/].f_318.f_6 != -1) && __LIB_0__::func_170(Global_2689235[iVar1 /*453*/].f_318.f_6) == 5) && Global_2689235[iVar1 /*453*/].f_318.f_9 == Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_9) && BitTest(Global_1853348[iVar1 /*834*/].f_267.f_277, 16))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_537()//Position - 0x1D02A7
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 363)
	{
		switch (Global_1585857[iVar0 /*142*/].f_66)
		{
			case joaat("apc"):
			case joaat("dune3"):
			case joaat("halftrack"):
			case joaat("oppressor"):
			case joaat("tampa3"):
			case joaat("technical3"):
			case joaat("insurgent3"):
				return 1;
				break;
		}
		iVar0++;
	}
	return 0;
}

int func_538()//Position - 0x1D05A1
{
	return Global_2725426;
}

void func_539()//Position - 0x1D060C
{
	Global_2714762.f_785.f_4 = 0;
}

void func_540()//Position - 0x1D061E
{
	Global_2714762.f_785.f_4 = 1;
}

int func_541(int iParam0)//Position - 0x1D0B05
{
	if ((ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false)) && !MISC::IS_STRING_NULL_OR_EMPTY(&(Global_113386.f_20118.f_267)))
	{
		return MISC::GET_HASH_KEY(VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0)) == MISC::GET_HASH_KEY(&(Global_113386.f_20118.f_267));
	}
	return 0;
}

void func_542(var uParam0)//Position - 0x1D145F
{
	uParam0->f_1 = *uParam0;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		uParam0->f_3 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), 0);
	}
	else
	{
		uParam0->f_2 = MISC::GET_GAME_TIMER();
	}
	*uParam0 = -1;
}

int func_543()//Position - 0x1D1491
{
	int iVar0;
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar0 = ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false));
		if ((((((((((((iVar0 == joaat("adder") || iVar0 == joaat("bullet")) || iVar0 == joaat("carbonizzare")) || iVar0 == joaat("cheetah")) || iVar0 == joaat("cogcabrio")) || iVar0 == joaat("coquette")) || iVar0 == joaat("elegy2")) || iVar0 == joaat("feltzer2")) || iVar0 == joaat("entityxf")) || iVar0 == joaat("rapidgt2")) || iVar0 == joaat("stingergt")) || iVar0 == joaat("vacca")) || iVar0 == joaat("ztype"))
		{
			return 1;
		}
	}
	return 0;
}

int func_544(int iParam0)//Position - 0x1E4B69
{
	switch (iParam0)
	{
		case 39:
			return 1;
			break;
		case 40:
			return 2;
			break;
		case 41:
			return 3;
			break;
		case 42:
			return 4;
			break;
		case 43:
			return 5;
			break;
		case 44:
			return 6;
			break;
	}
	return 0;
}

void func_545(char* sParam0, char* sParam1)//Position - 0x1E4BC7
{
	int iVar0;
	float fVar1;
	iVar0 = Local_124.f_12;
	if ((((!ENTITY::DOES_ENTITY_EXIST(iVar0) || PED::IS_PED_INJURED(iVar0)) || !ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iVar0, true)) || !NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0)) || !STREAMING::DOES_ANIM_DICT_EXIST(sParam0))
	{
		Local_392.f_0 = 3;
	}
	switch (Local_392.f_0)
	{
		case 0:
			STREAMING::REQUEST_ANIM_DICT(sParam0);
			Local_392.f_0 = 1;
			break;
		case 1:
			STREAMING::REQUEST_ANIM_DICT(sParam0);
			if (STREAMING::HAS_ANIM_DICT_LOADED(sParam0))
			{
				TASK::TASK_PLAY_ANIM(iVar0, sParam0, sParam1, 4f, -4f, -1, 262152, 0f, false, false, false);
				Local_392.f_0 = 2;
			}
			break;
		case 2:
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(iVar0, sParam0, sParam1, 3))
			{
				fVar1 = ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iVar0, sParam0, sParam1);
				if (fVar1 > 0.99f)
				{
					STREAMING::REMOVE_ANIM_DICT(sParam0);
					Local_392.f_0 = 3;
				}
			}
			else
			{
				STREAMING::REMOVE_ANIM_DICT(sParam0);
				Local_392.f_0 = 3;
			}
			break;
		case 3:
			if (TASK::GET_SCRIPT_TASK_STATUS(iVar0, joaat("SCRIPT_TASK_PLAY_ANIM")) != 1)
			{
				Local_392.f_0 = 99;
				iLocal_533 = 99;
			}
			break;
	}
}

int func_546(int iParam0)//Position - 0x1E5CF7
{
	int iVar0;
	iVar0 = -1;
	if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MC_EntityID", 3))
	{
		if (DECORATOR::DECOR_EXIST_ON(iParam0, "MC_EntityID"))
		{
			iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "MC_EntityID");
		}
	}
	return iVar0;
}

int func_547(int iParam0)//Position - 0x1E6276
{
	int iVar0;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && __LIB_0__::func_702(PLAYER::PLAYER_ID(), 27))
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			if (__LIB_0__::func_154(PLAYER::INT_TO_PLAYERINDEX(iVar0), 1, 1) && func_2562(PLAYER::INT_TO_PLAYERINDEX(iVar0)))
			{
				if (Global_2689235[iVar0 /*453*/].f_244 == iParam0)
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (__LIB_1__::func_298(PLAYER::PLAYER_ID(), 5))
		{
			return 1;
		}
	}
	return 0;
}

int func_548(int iParam0)//Position - 0x1E68DF
{
	switch (iParam0)
	{
		case 0:
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
			return 1;
			break;
		case 44:
			break;
	}
	return 0;
}

int func_549(int iParam0)//Position - 0x1E6A07
{
	switch (iParam0)
	{
		case 0:
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
		case 12:
		case 13:
		case 21:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
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
		case 52:
		case 50:
		case 51:
		case 53:
		case 54:
		case 55:
		case 56:
		case 57:
			return 1;
			break;
	}
	return 0;
}

bool func_550()//Position - 0x1E7056
{
	return Global_55405.f_36 > 0;
}

int func_551(int iParam0)//Position - 0x1E71FF
{
	if (!Global_100493.f_16)
	{
		return 0;
	}
	if (!Global_100493.f_17)
	{
		return 0;
	}
	if (Global_78319)
	{
		if (!__LIB_0__::func_640(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
	}
	else if (iParam0->f_9 && iParam0->f_11 == 0)
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 82.34222f, -1310.2776f, 25.770123f, 142.89174f, -1274.1537f, 46.512486f, 62f, false, true, 0))
			{
				return 0;
			}
		}
	}
	if (__LIB_0__::func_134())
	{
		return 0;
	}
	return 1;
}

int func_552(int iParam0)//Position - 0x1E78BC
{
	switch (__LIB_0__::func_3())
	{
		case 0:
			if (Global_1853348[iParam0 /*834*/] == 2 || Global_1853348[iParam0 /*834*/] == 8)
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_553()//Position - 0x1E7FC0
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 0;
	}
	if (Local_124.f_0 == 45)
	{
		if (Local_124.f_675 == 17)
		{
			return 1;
		}
	}
	return 0;
}

int func_554()//Position - 0x1E7FF5
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 0;
	}
	if (Local_124.f_0 == 45)
	{
		switch (Local_124.f_675)
		{
			case 6:
			case 7:
			case 8:
			case 9:
				return 1;
			}
		default:
	}
	return 0;
}

void func_555()//Position - 0x1E8F34
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	bVar3 = false;
	while (bVar3 < 32)
	{
		iVar2 = PLAYER::INT_TO_PLAYERINDEX(bVar3);
		if (__LIB_0__::func_154(iVar2, 1, 1))
		{
			iVar1 = PLAYER::GET_PLAYER_PED(iVar2);
			if (((ENTITY::DOES_ENTITY_EXIST(iVar1) && !PED::IS_PED_INJURED(iVar1)) && PED::IS_PED_A_PLAYER(iVar1)) && iVar1 != PLAYER::PLAYER_PED_ID())
			{
				if (BitTest(uLocal_499, bVar3))
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(iVar1, false))
					{
						iVar0 = PED::GET_VEHICLE_PED_IS_IN(iVar1, false);
						if (ENTITY::DOES_ENTITY_EXIST(iVar0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
						{
							NETWORK::NETWORK_FADE_IN_ENTITY(iVar0, false, 1);
						}
					}
					NETWORK::NETWORK_FADE_IN_ENTITY(iVar1, false, 1);
					MISC::CLEAR_BIT(&uLocal_499, bVar3);
				}
			}
		}
		bVar3++;
	}
}

int func_556(int iParam0)//Position - 0x1E9564
{
	int iVar0;
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	if (VEHICLE::IS_THIS_MODEL_A_BOAT(iVar0))
	{
		return 0;
	}
	if (VEHICLE::IS_THIS_MODEL_A_HELI(iVar0))
	{
		return 0;
	}
	if (VEHICLE::IS_THIS_MODEL_A_PLANE(iVar0))
	{
		return 0;
	}
	if (VEHICLE::IS_THIS_MODEL_A_TRAIN(iVar0))
	{
		return 0;
	}
	if (__LIB_1__::func_185(iVar0))
	{
		return 0;
	}
	if (iVar0 == joaat("submersible"))
	{
		return 0;
	}
	if (iVar0 == joaat("apc"))
	{
		return 0;
	}
	if (iVar0 == joaat("insurgent") || iVar0 == joaat("insurgent2"))
	{
		return 0;
	}
	if (iVar0 == joaat("technical"))
	{
		return 0;
	}
	if (iVar0 == joaat("benson"))
	{
		return 0;
	}
	if (iVar0 == joaat("mesa"))
	{
		return 0;
	}
	if (iVar0 == joaat("mesa2"))
	{
		return 0;
	}
	if (iVar0 == joaat("mesa3"))
	{
		return 0;
	}
	if (iVar0 == joaat("maverick"))
	{
		return 0;
	}
	if (iVar0 == joaat("romero"))
	{
		return 0;
	}
	if (iVar0 == joaat("caddy2"))
	{
		return 0;
	}
	if (iVar0 == joaat("caddy3"))
	{
		return 0;
	}
	if (iVar0 == joaat("oppressor"))
	{
		return 0;
	}
	if (iVar0 == joaat("granger"))
	{
		return 0;
	}
	if (iVar0 == joaat("patriot"))
	{
		return 0;
	}
	if (iVar0 == joaat("tampa"))
	{
		return 0;
	}
	if (iVar0 == joaat("tampa2"))
	{
		return 0;
	}
	if (iVar0 == joaat("tampa3"))
	{
		return 0;
	}
	if (iVar0 == joaat("fbi"))
	{
		return 0;
	}
	if (iVar0 == joaat("dune4"))
	{
		return 0;
	}
	if (iVar0 == joaat("phantom2"))
	{
		return 0;
	}
	if (iVar0 == joaat("technical2"))
	{
		return 0;
	}
	if (iVar0 == joaat("blazer5"))
	{
		return 0;
	}
	if (iVar0 == joaat("boxville5"))
	{
		return 0;
	}
	if (iVar0 == joaat("wastelander"))
	{
		return 0;
	}
	if (iVar0 == joaat("ruiner2"))
	{
		return 0;
	}
	if (iVar0 == joaat("voltic2"))
	{
		return 0;
	}
	if (iVar0 == joaat("deluxo"))
	{
		return 0;
	}
	return 1;
}

var func_557()//Position - 0x1E99A3
{
	return Global_2714762.f_785.f_4;
}

void func_558(int iParam0, int iParam1)//Position - 0x1E9B68
{
	if (iParam1 == -1)
	{
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (BitTest(Global_1853348[iParam0 /*834*/].f_833, 4))
		{
			MISC::CLEAR_BIT(&(Global_1853348[iParam0 /*834*/].f_833), 4);
			Global_1853348[iParam0 /*834*/].f_203 = 0;
		}
	}
}

void func_559(int iParam0)//Position - 0x1E9E3F
{
	switch (iParam0)
	{
		case joaat("akula"):
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 101 /*INPUT_VEH_ROOF*/, true);
			break;
		case joaat("annihilator2"):
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 101 /*INPUT_VEH_ROOF*/, true);
			break;
	}
}

void func_560(var uParam0, int iParam1, var uParam2)//Position - 0x1EA149
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = iParam1;
	uParam0->f_7 = uParam2;
}

void func_561(int iParam0, bool bParam1)//Position - 0x1EA451
{
	if (bParam1)
	{
		if (iParam0 != __LIB_0__::func_160())
		{
			if (!BitTest(Global_2689235[iParam0 /*453*/].f_197, 22))
			{
				MISC::SET_BIT(&(Global_2689235[iParam0 /*453*/].f_197), 22);
			}
		}
	}
	else if (iParam0 != __LIB_0__::func_160())
	{
		if (BitTest(Global_2689235[iParam0 /*453*/].f_197, 22))
		{
			MISC::CLEAR_BIT(&(Global_2689235[iParam0 /*453*/].f_197), 22);
		}
	}
}

void func_562(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0x55C6
{
	uParam0->f_549 = iParam1;
	StringCopy(&(uParam0->f_550), sParam2, 16);
	StringCopy(&(uParam0->f_554), "", 16);
	uParam0->f_558 = iParam3;
	uParam0->f_559 = iParam4;
	uParam0->f_560 = iParam5;
	uParam0->f_561 = iParam6;
	uParam0->f_580 = iParam7;
}

void func_563(var uParam0, char* sParam1, char* sParam2, int iParam3)//Position - 0x5690
{
	StringCopy(&(uParam0->f_5), sParam1, 16);
	StringCopy(&(uParam0->f_13), sParam2, 64);
	uParam0->f_29 = iParam3;
	uParam0->f_11 = 0;
}

int func_564()//Position - 0xCC32
{
	if (Global_21605 == 0)
	{
		return 1;
	}
	return 0;
}

void func_565(int* iParam0)//Position - 0xE4AB
{
	if (__LIB_0__::func_736(iParam0))
	{
		if (!__LIB_1__::func_637(iParam0))
		{
			iParam0->f_2 = (__LIB_0__::func_484(BitTest(*iParam0, 4)) - iParam0->f_1);
			MISC::SET_BIT(iParam0, 2);
		}
	}
}

int func_566(var uParam0)//Position - 0x104A6
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam0, false))
	{
		if (((VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(*uParam0, 0, 7000) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(*uParam0, 3, 30000)) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(*uParam0, 2, 30000)) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(*uParam0, 1, 40000))
		{
			return 1;
		}
	}
	return 0;
}

float func_567(struct<3> Param0, bool bParam1)//Position - 0x15B1E
{
	return __LIB_1__::func_844(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), Param0, bParam1);
}

void func_568(int iParam0)//Position - 0x1D730
{
	if (!CAM::IS_SCREEN_FADED_IN())
	{
		CAM::DO_SCREEN_FADE_IN(iParam0);
		while (!CAM::IS_SCREEN_FADED_IN())
		{
			SYSTEM::WAIT(0);
		}
	}
}

void func_569(int iParam0, int iParam1)//Position - 0x20CA2
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Global_97772[iVar0]))
		{
			Global_97772[iVar0] = iParam0;
			Global_97782[iVar0] = iParam1;
			Global_97792[iVar0] = ENTITY::GET_ENTITY_MODEL(iParam0);
			if (VEHICLE::IS_THIS_MODEL_A_CAR(Global_97792[iVar0]))
			{
				Global_97820[iParam1 /*3*/][0] = -1;
			}
			else
			{
				Global_97820[iParam1 /*3*/][1] = -1;
			}
			iVar0 = 9;
		}
		if (iVar0 == 8)
		{
		}
		iVar0++;
	}
}

int func_570(int iParam0, int iParam1)//Position - 0x3CBB
{
	int iVar0;
	WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, true);
	if (iVar0 == joaat("WEAPON_PETROLCAN"))
	{
		if (PED::IS_PED_SHOOTING(iParam0))
		{
			if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(iParam0, true), ENTITY::GET_ENTITY_COORDS(iParam1, true)) < 2.5f)
			{
				if (PED::IS_PED_FACING_PED(iParam0, iParam1, 180f))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_571(int iParam0, int iParam1, var uParam2)//Position - 0x3D10
{
	if (WEAPON::IS_PED_ARMED(iParam0, 4))
	{
		if (PED::IS_PED_SHOOTING(iParam0) && !WEAPON::IS_PED_CURRENT_WEAPON_SILENCED(iParam0))
		{
			if (ENTITY::IS_ENTITY_AT_COORD(iParam1, ENTITY::GET_ENTITY_COORDS(iParam0, true), IntToFloat(uParam2->f_4), IntToFloat(uParam2->f_4), IntToFloat(uParam2->f_4), false, true, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

float func_572()//Position - 0x575C
{
	float fVar0;
	fVar0 = 0f;
	if (__LIB_0__::func_517(Global_113386.f_19963.f_1, 8192))
	{
		fVar0 = (fVar0 + 0.2f);
	}
	if (__LIB_0__::func_517(Global_113386.f_19963.f_1, 16384))
	{
		fVar0 = (fVar0 + 0.2f);
	}
	if (__LIB_0__::func_517(Global_113386.f_19963.f_1, 32768))
	{
		fVar0 = (fVar0 + 0.2f);
	}
	if (__LIB_0__::func_517(Global_113386.f_19963.f_1, 65536))
	{
		fVar0 = (fVar0 + 0.1f);
	}
	if (__LIB_0__::func_517(Global_113386.f_19963.f_1, 131072))
	{
		fVar0 = (fVar0 + 0.1f);
	}
	if (__LIB_0__::func_517(Global_113386.f_19963.f_1, 262144))
	{
		fVar0 = (fVar0 + 0.1f);
	}
	if (__LIB_0__::func_517(Global_113386.f_19963.f_1, 524288))
	{
		fVar0 = (fVar0 + 0.333f);
	}
	if (__LIB_0__::func_517(Global_113386.f_19963.f_1, 1048576))
	{
		fVar0 = (fVar0 + 0.333f);
	}
	if (__LIB_0__::func_517(Global_113386.f_19963.f_1, 2097152))
	{
		fVar0 = (fVar0 + 0.333f);
	}
	return fVar0;
}

void func_573(var uParam0)//Position - 0x5950
{
	if (uParam0->f_565 || uParam0->f_576 <= uParam0->f_562)
	{
		uParam0->f_565 = 0;
		uParam0->f_562 = (uParam0->f_576 - 1);
	}
}

void func_574(var uParam0, bool bParam1)//Position - 0x632B
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_4, "CLEAR_ALL");
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	if (MISC::IS_PC_VERSION())
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_4, "TOGGLE_MOUSE_BUTTONS");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_4, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
	__LIB_0__::func_514(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2 /*FRONTEND_CONTROL*/, 215 /*INPUT_FRONTEND_ENDSCREEN_ACCEPT*/, true));
	__LIB_0__::func_478("ES_HELP" /* GXT: Continue */);
	if (MISC::IS_PC_VERSION())
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(215);
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	if (bParam1)
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_4, "SET_DATA_SLOT");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
		__LIB_0__::func_514(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2 /*FRONTEND_CONTROL*/, 216 /*INPUT_FRONTEND_ENDSCREEN_EXPAND*/, true));
		__LIB_0__::func_478("ES_XPAND" /* GXT: Expand */);
		if (MISC::IS_PC_VERSION())
		{
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(216);
		}
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_4, "DRAW_INSTRUCTIONAL_BUTTONS");
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

float func_575(float fParam0)//Position - 0x7106
{
	return (fParam0 * 0.00078125f);
}

float func_576(float fParam0)//Position - 0x7FFA
{
	return (fParam0 * 0.025f);
}

float func_577(float fParam0)//Position - 0x800B
{
	return (fParam0 * 0.0009259259f);
}

float func_578(char* sParam0, char* sParam1)//Position - 0x81A7
{
	HUD::BEGIN_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(sParam0);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam1);
	return (HUD::END_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(true) / 2f);
}

float func_579(char* sParam0)//Position - 0x81C2
{
	HUD::BEGIN_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(sParam0);
	return (HUD::END_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(true) / 2f);
}

void func_580()//Position - 0x81D7
{
	GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(1);
	if (CAM::IS_SCREEN_FADING_OUT() || CAM::IS_SCREEN_FADED_OUT())
	{
		GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(7);
	}
	GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(false);
}

float func_581()//Position - 0x820D
{
	float fVar0;
	fVar0 = 1f;
	if (MISC::IS_PC_VERSION())
	{
	}
	return fVar0;
}

float func_582(float fParam0)//Position - 0x8221
{
	return (fParam0 * 0.0013888889f);
}

void func_583(var uParam0)//Position - 0x86B8
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_4, "CLEAR_ALL");
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	if (MISC::IS_PC_VERSION())
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_4, "TOGGLE_MOUSE_BUTTONS");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_4, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
	__LIB_0__::func_514(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2 /*FRONTEND_CONTROL*/, 188 /*INPUT_FRONTEND_UP*/, true));
	__LIB_0__::func_478("ES_HELP_TU" /* GXT: Like */);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_4, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
	__LIB_0__::func_514(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2 /*FRONTEND_CONTROL*/, 187 /*INPUT_FRONTEND_DOWN*/, true));
	__LIB_0__::func_478("ES_HELP_TD" /* GXT: Dislike */);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_4, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
	__LIB_0__::func_514(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/, true));
	__LIB_0__::func_478("ES_HELP_AB" /* GXT: Don't Vote */);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_4, "DRAW_INSTRUCTIONAL_BUTTONS");
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_584(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0x8E68
{
	int iVar0;
	if (uParam0->f_56 == 13)
	{
		return;
	}
	iVar0 = uParam0->f_56;
	uParam0->f_57[iVar0] = iParam1;
	StringCopy(&(uParam0->f_71[iVar0 /*16*/]), sParam2, 64);
	StringCopy(&(uParam0->f_280[iVar0 /*16*/]), sParam3, 64);
	uParam0->f_489[iVar0] = iParam4;
	uParam0->f_503[iVar0] = iParam5;
	uParam0->f_517[iVar0] = iParam6;
	uParam0->f_531[iVar0] = iParam7;
	uParam0->f_56++;
}

int func_585()//Position - 0x1631C
{
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if (VEHICLE::IS_VEHICLE_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), joaat("taxi")))
		{
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), -1, false) != PLAYER::PLAYER_PED_ID())
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_586(int iParam0)//Position - 0x188A1
{
	CAM::DO_SCREEN_FADE_OUT(iParam0);
	while (!CAM::IS_SCREEN_FADED_OUT())
	{
		SYSTEM::WAIT(0);
	}
	return 1;
}

Vector3 func_587(int iParam0)//Position - 0x20FE6
{
	switch (iParam0)
	{
		case 0:
			return -1704.4268f, -1077.3157f, 12.1111f;
		case 1:
			return -700.429f, -916.7467f, 18.2143f;
		case 2:
			return 214.1641f, -852.8006f, 29.3929f;
		case 3:
			return -21.9871f, -107.4823f, 55.997f;
		case 4:
			return 806.1469f, -1070.2103f, 27.3361f;
		default:
	}
	return 0f, 0f, 0f;
}

void func_588(var uParam0)//Position - 0x4FBC
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	fVar0 = 0f;
	HUD::SET_TEXT_JUSTIFICATION(0);
	HUD::SET_TEXT_SCALE(1f, __LIB_10__::func_576(16f));
	if (uParam0->f_31 == 0)
	{
		if (uParam0->f_29)
		{
			HUD::BEGIN_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT("STRING");
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(uParam0->f_13));
			fVar0 = HUD::END_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(true);
		}
		else
		{
			HUD::BEGIN_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(&(uParam0->f_13));
			fVar0 = HUD::END_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(true);
		}
	}
	else
	{
		HUD::BEGIN_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT("STRING");
		iVar1 = 0;
		iVar2 = 0;
		iVar3 = 0;
		iVar3 = 0;
		while (iVar3 < uParam0->f_31)
		{
			switch (uParam0->f_32[iVar3])
			{
				case 0:
					HUD::ADD_TEXT_COMPONENT_INTEGER(uParam0->f_53[iVar1]);
					iVar1++;
					break;
				case 1:
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(uParam0->f_36[iVar2 /*16*/]));
					iVar2++;
					break;
				case 2:
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(uParam0->f_36[iVar2 /*16*/]));
					iVar2++;
					break;
			}
			iVar3++;
		}
		fVar0 = HUD::END_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(true);
	}
	if (fVar0 > ((0.1125f * 2f) - (0.006f * 2f)))
	{
		*uParam0 = ((fVar0 / 2f) + (0.006f * 2f));
	}
}

float func_589(int iParam0, bool bParam1)//Position - 0xB818
{
	return __LIB_0__::func_76(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), iParam0, bParam1);
}

int func_590(int iParam0)//Position - 0xBD6C
{
	int iVar0;
	int iVar1;
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
		{
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, -1, false) != 0)
			{
				if (WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar0, true))
				{
					if (iVar0 == joaat("WEAPON_STICKYBOMB"))
					{
						if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), iParam0, 1) < 40f)
						{
							if (PLAYER::GET_ENTITY_PLAYER_IS_FREE_AIMING_AT(PLAYER::PLAYER_ID(), &iVar1))
							{
								if ((ENTITY::IS_ENTITY_A_VEHICLE(iVar1) && ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iVar1) == iParam0) || (ENTITY::IS_ENTITY_A_PED(iVar1) && ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1) == VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, -1, false)))
								{
									if ((PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID()) && PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 24 /*INPUT_ATTACK*/)) || (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 69 /*INPUT_VEH_ATTACK*/)))
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
	return 0;
}

int func_591(var uParam0)//Position - 0x16F38
{
	bool bVar0;
	bVar0 = false;
	while (bVar0 < 10)
	{
		if (BitTest(uParam0, bVar0))
		{
			return bVar0;
		}
		bVar0++;
	}
	return -1;
}

void func_592(var uParam0, bool bParam1, int iParam2, char* sParam3, int iParam4)//Position - 0x16FF1
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (BitTest((*uParam0)[iVar0 /*18*/], 30))
		{
			if (BitTest((*uParam0)[iVar0 /*18*/], bParam1))
			{
				if (iParam2 != -1)
				{
					if ((uParam0[iVar0 /*18*/])->f_1 == iParam2)
					{
						return;
					}
				}
				if (bParam1 != 4)
				{
					if (!MISC::ARE_STRINGS_EQUAL(sParam3, "NULL"))
					{
						if (MISC::ARE_STRINGS_EQUAL(&((uParam0[iVar0 /*18*/])->f_2), sParam3))
						{
							return;
						}
					}
				}
				if (bParam1 == 9)
				{
					return;
				}
			}
		}
		iVar0++;
	}
	if (!uParam0->f_271)
	{
		uParam0->f_271 = 1;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (!BitTest((*uParam0)[iVar0 /*18*/], 30))
		{
			StringCopy(&((uParam0[iVar0 /*18*/])->f_2), sParam3, 64);
			(uParam0[iVar0 /*18*/])->f_1 = iParam2;
			(*uParam0)[iVar0 /*18*/] = iParam4;
			MISC::SET_BIT(uParam0[iVar0 /*18*/], bParam1);
			MISC::SET_BIT(uParam0[iVar0 /*18*/], 30);
			return;
		}
		iVar0++;
	}
}

int func_593(var uParam0)//Position - 0x17434
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (MISC::IS_STRING_NULL((*uParam0)[iVar0]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_594(var uParam0)//Position - 0x18A91
{
	if (uParam0->f_270)
	{
		return 1;
	}
	return 0;
}

void func_595(var uParam0)//Position - 0x20767
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	StringCopy(&(uParam0->f_2), "NULL", 64);
}

void func_596(var uParam0, var uParam1)//Position - 0xC47D
{
	if (uParam0->f_5 != 0)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_1))
		{
			uParam1->f_1 = VEHICLE::CREATE_VEHICLE(uParam0->f_5, uParam0->f_9, uParam0->f_12, true, true, false);
			if (uParam0->f_274 == 1)
			{
				VEHICLE::SET_VEHICLE_EXTRA(uParam1->f_1, 2, true);
				VEHICLE::REMOVE_VEHICLE_WINDOW(uParam1->f_1, 1);
				VEHICLE::REMOVE_VEHICLE_WINDOW(uParam1->f_1, 0);
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(uParam1->f_1, 3);
			}
			else if (uParam0->f_274 == 0)
			{
				ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(uParam1->f_1, true, 1);
				VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(uParam1->f_1, 0);
			}
			VEHICLE::ADD_VEHICLE_UPSIDEDOWN_CHECK(uParam1->f_1);
			if (uParam0->f_267 == 1)
			{
				if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_1))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam1->f_1, false))
					{
						if (!PED::IS_PED_INJURED(*uParam1))
						{
							PED::SET_PED_INTO_VEHICLE(*uParam1, uParam1->f_1, -1);
						}
					}
				}
			}
		}
	}
}

void func_597(var uParam0, struct<3> Param1, var uParam2)//Position - 0xC6EA
{
	if (HUD::DOES_BLIP_EXIST(*uParam0))
	{
		Global_112422 = *uParam0;
		Global_112427 = { Param1 };
		Global_112431 = uParam2;
	}
}

void func_598(int* iParam0, char* sParam1, int iParam2)//Position - 0x20316
{
	if (BitTest(*iParam0, 30))
	{
		switch (__LIB_10__::func_591(*iParam0))
		{
			case 0:
				STREAMING::REQUEST_MODEL(iParam2);
				break;
			case 1:
				STREAMING::REQUEST_ANIM_DICT(sParam1);
				break;
			case 2:
				STREAMING::REQUEST_CLIP_SET(sParam1);
				break;
			case 3:
				GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(sParam1, BitTest(*iParam0, 28));
				break;
			case 4:
				VEHICLE::REQUEST_VEHICLE_RECORDING(iParam2, sParam1);
				break;
			case 5:
				TASK::REQUEST_WAYPOINT_RECORDING(sParam1);
				break;
			case 6:
				AUDIO::REQUEST_SCRIPT_AUDIO_BANK(sParam1, BitTest(*iParam0, 27), -1);
				break;
			case 7:
				SCRIPT::REQUEST_SCRIPT_WITH_NAME_HASH(iParam2);
				break;
			case 8:
				HUD::REQUEST_ADDITIONAL_TEXT(sParam1, iParam2);
				break;
			case 9:
				STREAMING::REQUEST_PTFX_ASSET();
				break;
			default:
				break;
		}
		MISC::SET_BIT(iParam0, 29);
	}
}

void func_599()//Position - 0x16FC1
{
	CAM::DO_SCREEN_FADE_IN(1000);
	while (!CAM::IS_SCREEN_FADED_IN())
	{
		SYSTEM::WAIT(0);
	}
}

void func_600(int iParam0, struct<3> Param1, float fParam2)//Position - 0x1851D
{
	if (HUD::DOES_BLIP_EXIST(*iParam0))
	{
		Global_112422 = *iParam0;
		Global_112427 = { Param1 };
		Global_112431 = fParam2;
	}
}

char* func_601(int iParam0)//Position - 0x35C9
{
	switch (iParam0)
	{
		case 31:
			return "ACCNA_SIM" /* GXT: Simeon Yetarian */;
			break;
		case 32:
			return "ACCNA_LES" /* GXT: Lester Crest */;
			break;
		case 33:
			return "ACCNA_AMA" /* GXT: Amanda De Santa */;
			break;
		case 34:
			return "ACCNA_JIM" /* GXT: Jimmy De Santa */;
			break;
		case 35:
			return "ACCNA_TRA" /* GXT: Tracey De Santa */;
			break;
		case 36:
			return "ACCNA_OSC" /* GXT: Oscar Guzman */;
			break;
		case 37:
			return "ACCNA_ABI" /* GXT: Abigail Mathers */;
			break;
		case 38:
			return "ACCNA_BUR" /* GXT: Dario Bottino */;
			break;
		case 3:
			return "ACCNA_MIKE" /* GXT: Michael De Santa */;
			break;
		case 24:
			return "ACCNA_DRFR" /* GXT: Dr. Friedlander Clinical Services */;
			break;
		case 25:
			return "ACCNA_STRP" /* GXT: Vanilla Unicorn */;
			break;
		case 39:
			return "ACCNA_MRSPOKE" /* GXT: Mr Spoke bike rental */;
			break;
		case 40:
			return "ACCNA_GOL_CLU" /* GXT: Los Santos Golf Club */;
			break;
		case 4:
			return "ACCNA_CBELL" /* GXT: Cluckin' Bell */;
			break;
		case 5:
			return "ACCNA_WHIZZ" /* GXT: Whiz Phone Services */;
			break;
		case 6:
			return "ACCNA_MCHON" /* GXT: Madam Chong's Massage Parlor */;
			break;
		case 7:
			return "ACCNA_DSACH" /* GXT: Didier Sachs Clothing */;
			break;
		case 8:
			return "ACCNA_LSANH" /* GXT: Los Santos Hospital */;
			break;
		case 9:
			return "ACCNA_CRAPKI" /* GXT: Krapea Furniture */;
			break;
		case 10:
			return "ACCNA_VCLEAN" /* GXT: Los Santos Customs */;
			break;
		case 11:
			return "ACCNA_CSUX" /* GXT: CandySuxx Mobile Internet */;
			break;
		case 12:
			return "ACCNA_VBEU" /* GXT: Vinewood Beauty Treatments */;
			break;
		case 13:
			return "ACCNA_ANAT" /* GXT: Ammu-Nation Weaponry */;
			break;
		case 14:
			return "ACCNA_BAHAMA" /* GXT: Bahama Mamas West */;
			break;
		case 15:
			return "ACCNA_BAR_BY" /* GXT: Bay Bar */;
			break;
		case 16:
			return "ACCNA_BAR_BI" /* GXT: Lost Holdings */;
			break;
		case 17:
			return "ACCNA_BAR_HI" /* GXT: Himen */;
			break;
		case 18:
			return "ACCNA_BAR_MO" /* GXT: Mojitos */;
			break;
		case 19:
			return "ACCNA_BAR_SH" /* GXT: Shenanigans */;
			break;
		case 20:
			return "ACCNA_BAR_SI" /* GXT: Singletons */;
			break;
		case 21:
			return "ACCNA_TAXI" /* GXT: Downtown Cab Co. */;
			break;
		case 22:
			return "ACCNA_DTRAF" /* GXT: Delivery Job */;
			break;
		case 23:
			return "ACCNA_REPO" /* GXT: Car Reposession Pay */;
			break;
		case 26:
			return "ACCNA_HUNT" /* GXT: Hunting Pay */;
			break;
		case 27:
			return "ACCNA_RANGE" /* GXT: Gun Club Shooting Range */;
			break;
		case 28:
			return "ACCNA_RACES" /* GXT: Offroad Races */;
			break;
		case 29:
			return "ACCNA_EPS_ST" /* GXT: Epsilon Group voluntary donation */;
			break;
		case 30:
			return "ACCNA_EPS_RB" /* GXT: Epsilon Group retail */;
			break;
		case 2:
			return "ACCNA_BROKERA" /* GXT: Stock Brokerage */;
			break;
		case 85:
			return "ACCNA_CARSITE" /* GXT: Legendary Motorsport */;
			break;
		case 86:
			return "ACCNA_ARMYSITE" /* GXT: Cache and Carry */;
			break;
		case 87:
			return "ACCNA_PLANESITE" /* GXT: Elitas Travel Solutions */;
			break;
		case 88:
			return "ACCNA_BOATSITE" /* GXT: Docktease Sales */;
			break;
		case 89:
			return "ACCNA_BIKESITE" /* GXT: Pedal And Metal Sales */;
			break;
		case 90:
			return "ACCNA_AUTOSITE" /* GXT: SSA Super Autos Sales */;
			break;
		case 91:
			return "ACCNA_LOSSSITE";
			break;
		case 92:
			return "ACCNA_ARENASITE";
			break;
		case 96:
			return "ACCNA_CASHDEP" /* GXT: Cash Deposit */;
			break;
		case 95:
			return "ACCNA_BAILBONDS" /* GXT: Canine Renditions */;
			break;
		case 97:
			return "ACCNA_HOFFSHORE" /* GXT: Coymin Offshore PLC */;
			break;
		case 98:
			return "ACCNA_SNACK" /* GXT: Snacks */;
			break;
		case 41:
			return "S_H_01" /* GXT: Bob Mulét Hair & Beauty */;
			break;
		case 42:
			return "S_H_02" /* GXT: Herr Kutz Barber */;
			break;
		case 43:
			return "S_H_03" /* GXT: Beachcombover Barbers */;
			break;
		case 44:
			return "S_H_04" /* GXT: O'Sheas Barbers */;
			break;
		case 45:
			return "S_H_05" /* GXT: Herr Kutz Barber */;
			break;
		case 46:
			return "S_H_06" /* GXT: Hair On Hawick Barbers */;
			break;
		case 47:
			return "S_H_07" /* GXT: Herr Kutz Barber */;
			break;
		case 48:
			return "S_CL_01" /* GXT: Discount Store */;
			break;
		case 49:
			return "S_CL_02" /* GXT: Discount Store */;
			break;
		case 50:
			return "S_CL_03" /* GXT: Binco Clothing */;
			break;
		case 51:
			return "S_CL_04" /* GXT: Discount Store */;
			break;
		case 52:
			return "S_CL_05" /* GXT: Discount Store */;
			break;
		case 53:
			return "S_CL_06" /* GXT: Binco Clothing */;
			break;
		case 54:
			return "S_CL_07" /* GXT: Discount Store */;
			break;
		case 55:
			return "S_CM_01" /* GXT: Suburban */;
			break;
		case 56:
			return "S_CM_03" /* GXT: Suburban */;
			break;
		case 57:
			return "S_CM_04" /* GXT: Suburban */;
			break;
		case 58:
			return "S_CM_05" /* GXT: Suburban */;
			break;
		case 59:
			return "S_CH_01" /* GXT: Ponsonbys */;
			break;
		case 60:
			return "S_CH_02" /* GXT: Ponsonbys */;
			break;
		case 61:
			return "S_CH_03" /* GXT: Ponsonbys */;
			break;
		case 62:
			return "S_CA_01" /* GXT: Vespucci Movie Masks */;
			break;
		case 63:
			return "S_T_01" /* GXT: Blazing Tattoo */;
			break;
		case 64:
			return "S_T_02" /* GXT: Alamo Tattoo Studio */;
			break;
		case 65:
			return "S_T_03" /* GXT: Paleto Tattoo Studio */;
			break;
		case 66:
			return "S_T_04" /* GXT: The Pit */;
			break;
		case 67:
			return "S_T_05" /* GXT: Los Santos Tattoos */;
			break;
		case 68:
			return "S_T_06" /* GXT: Ink Inc Tattoos */;
			break;
		case 69:
			return "S_G_01" /* GXT: Ammu-Nation */;
			break;
		case 70:
			return "S_G_02" /* GXT: Ammu-Nation */;
			break;
		case 71:
			return "S_G_03" /* GXT: Ammu-Nation */;
			break;
		case 72:
			return "S_G_04" /* GXT: Ammu-Nation */;
			break;
		case 73:
			return "S_G_05" /* GXT: Ammu-Nation */;
			break;
		case 74:
			return "S_G_06" /* GXT: Ammu-Nation */;
			break;
		case 75:
			return "S_G_07" /* GXT: Ammu-Nation */;
			break;
		case 76:
			return "S_G_08" /* GXT: Ammu-Nation */;
			break;
		case 77:
			return "S_G_09" /* GXT: Ammu-Nation */;
			break;
		case 78:
			return "S_G_10" /* GXT: Ammu-Nation */;
			break;
		case 79:
			return "S_G_11" /* GXT: Ammu-Nation */;
			break;
		case 80:
			return "S_MO_01" /* GXT: Los Santos Customs */;
			break;
		case 81:
			return "S_MO_05" /* GXT: Los Santos Customs */;
			break;
		case 82:
			return "S_MO_06" /* GXT: Los Santos Customs */;
			break;
		case 83:
			return "S_MO_07" /* GXT: Beeker's Garage */;
			break;
		case 84:
			return "S_MO_08" /* GXT: Los Santos Customs */;
			break;
		case 131:
			return "S_MO_09" /* GXT: Benny's Original Motor Works */;
			break;
		case 99:
			return "ACCNA_TOWING" /* GXT: Towing Impound */;
			break;
		case 100:
			return "ACCNA_TAXI_LOT" /* GXT: Downtown Cab Co. */;
			break;
		case 101:
			return "ACCNA_ARMS" /* GXT: McKenzie Field Hangar */;
			break;
		case 102:
			return "ACCNA_SONAR" /* GXT: Sonar Collections Dock */;
			break;
		case 103:
			return "ACCNA_CARMOD" /* GXT: Los Santos Customs */;
			break;
		case 104:
			return "ACCNA_VCINEMA" /* GXT: Cinema Doppler */;
			break;
		case 105:
			return "ACCNA_DCINEMA" /* GXT: Ten Cent Theater */;
			break;
		case 106:
			return "ACCNA_MCINEMA" /* GXT: Tivoli Cinema */;
			break;
		case 107:
			return "ACCNA_GOLF" /* GXT: Los Santos Golf Club */;
			break;
		case 108:
			return "ACCNA_CSCRAP" /* GXT: Car Scrapyard */;
			break;
		case 109:
			return "ACCNA_SMOKE" /* GXT: Smoke on the Water */;
			break;
		case 110:
			return "ACCNA_TEQUILA" /* GXT: Tequi-la-la */;
			break;
		case 111:
			return "ACCNA_PITCHERS" /* GXT: Pitchers */;
			break;
		case 112:
			return "ACCNA_HEN" /* GXT: The Hen House */;
			break;
		case 113:
			return "ACCNA_HOOKIES" /* GXT: Hookies */;
			break;
		case 114:
			return "ACCNA_MARINA" /* GXT: Marina */;
			break;
		case 115:
			return "ACCNA_HANGAR" /* GXT: Hangar */;
			break;
		case 116:
			return "ACCNA_HELIPAD" /* GXT: Helipad */;
			break;
		case 117:
			return "ACCNA_GARAGE" /* GXT: Garage */;
			break;
		case 118:
			return "ACCNA_PD_VB" /* GXT: Vespucci Beach PD Bail */;
			break;
		case 119:
			return "ACCNA_PD_SC" /* GXT: South Central PD Bail */;
			break;
		case 120:
			return "ACCNA_PD_DT" /* GXT: Downtown PD Bail */;
			break;
		case 121:
			return "ACCNA_PD_RH" /* GXT: Rockford Hills PD Bail */;
			break;
		case 122:
			return "ACCNA_PD_SS" /* GXT: Sandy Shores PD Bail */;
			break;
		case 123:
			return "ACCNA_PD_PB" /* GXT: Paleto Bay PD Bail */;
			break;
		case 124:
			return "ACCNA_PD_HW" /* GXT: Vinewood PD Bail */;
			break;
		case 125:
			return "ACCNA_H_RH" /* GXT: Rockford Hills Hospital */;
			break;
		case 126:
			return "ACCNA_H_SC" /* GXT: South Central Hospital */;
			break;
		case 127:
			return "ACCNA_H_DT" /* GXT: Downtown Hospital */;
			break;
		case 128:
			return "ACCNA_H_SS" /* GXT: Sandy Shores Hospital */;
			break;
		case 129:
			return "ACCNA_H_PB" /* GXT: Paleto Bay Hospital */;
			break;
		case 93:
			return "ACCNA_CONSIT" /* GXT: International Money Transfer */;
			break;
		case 94:
			return "ACCNA_TRMSITE" /* GXT: The Reality Mill Subscription */;
			break;
		case 130:
			return "ACCNA_DYNPROP";
			break;
	}
	return "";
}

void func_602()//Position - 0x5860
{
	if (Global_75486)
	{
	}
	Global_75486 = 0;
}

int func_603(int iParam0, int iParam1, char* sParam2, int iParam3)//Position - 0x4FEE
{
	StringCopy(sParam2, "", 32);
	switch (iParam0)
	{
		case 0:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Michael - Beverly Hills", 32);
				*iParam3 = 0;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*iParam3 = 1;
				return 1;
			}
			break;
		case 1:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Franklin - Aunt", 32);
				*iParam3 = 5;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Franklin - Hills", 32);
				*iParam3 = 6;
				return 1;
			}
			break;
		case 2:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*iParam3 = 2;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - City", 32);
				*iParam3 = 3;
				return 1;
			}
			else if (iParam1 == 2)
			{
				StringCopy(sParam2, "Trevor - Stripclub", 32);
				*iParam3 = 4;
				return 1;
			}
			break;
	}
	return 0;
}

void func_604(int iParam0, bool bParam1, bool bParam2)//Position - 0x5149
{
	int iVar0;
	int iVar1;
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return;
	}
	if (!bParam2)
	{
		iVar1 = BitTest(Global_32338[iVar0 /*23*/].f_11, 15);
		if (iVar1 == bParam1)
		{
			return;
		}
	}
	if (bParam1 != BitTest(Global_32338[iVar0 /*23*/].f_11, 0))
	{
		MISC::SET_BIT(&(Global_32338[iVar0 /*23*/].f_11), 18);
		if (Global_32335 == 1)
		{
			Global_32336 = 1;
		}
		Global_32335 = 1;
	}
	if (bParam1)
	{
		MISC::SET_BIT(&(Global_32338[iVar0 /*23*/].f_11), 0);
		MISC::SET_BIT(&(Global_32338[iVar0 /*23*/].f_11), 15);
		MISC::SET_BIT(&(Global_32338[iVar0 /*23*/].f_11), 3);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_32338[iVar0 /*23*/].f_11), 0);
		MISC::CLEAR_BIT(&(Global_32338[iVar0 /*23*/].f_11), 15);
	}
	if (!BitTest(Global_32338[iVar0 /*23*/].f_11, 0))
	{
		if (HUD::DOES_BLIP_EXIST(Global_32338[iVar0 /*23*/].f_19))
		{
			MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
			HUD::REMOVE_BLIP(&(Global_32338[iVar0 /*23*/].f_19));
			MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(false);
		}
	}
}

bool func_605(int iParam0, char* sParam1)//Position - 0x54E2
{
	StringCopy(sParam1, "", 32);
	switch (iParam0)
	{
		case 0:
			StringCopy(sParam1, "v_michael", 32);
			break;
		case 5:
			StringCopy(sParam1, "v_franklins", 32);
			break;
		case 6:
			StringCopy(sParam1, "v_franklinshouse", 32);
			break;
		case 2:
		case 1:
			if (STREAMING::IS_IPL_ACTIVE("TrevorsTrailer"))
			{
				StringCopy(sParam1, "v_trailer", 32);
			}
			else if (STREAMING::IS_IPL_ACTIVE("TrevorsTrailerTidy"))
			{
				StringCopy(sParam1, "V_TrailerTIDY", 32);
			}
			else if (STREAMING::IS_IPL_ACTIVE("TrevorsTrailerTrash"))
			{
				StringCopy(sParam1, "V_TrailerTRASH", 32);
			}
			break;
		case 3:
			StringCopy(sParam1, "v_trevors", 32);
			break;
		case 4:
			StringCopy(sParam1, "v_strip3", 32);
			break;
		case 8:
		case 7:
		case 9:
			StringCopy(sParam1, "v_psycheoffice", 32);
			break;
	}
	return !MISC::ARE_STRINGS_EQUAL(sParam1, "");
}

Vector3 func_606(var uParam0)//Position - 0x1A51
{
	return uParam0->f_16[uParam0->f_9 /*14*/];
}

int func_607(int iParam0)//Position - 0x217F
{
	switch (iParam0)
	{
		case 1:
			return 1;
		case 2:
			return 0;
		case 3:
			return 2;
		case 4:
			return 3;
		default:
	}
	return 0;
}

int func_608(int iParam0)//Position - 0x21B7
{
	switch (iParam0)
	{
		case 2:
		case 3:
		case 6:
		case 7:
			if (Global_100493.f_374 == joaat("Apart_Cin_Room"))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_609(int iParam0)//Position - 0x2320
{
	if (iParam0 != 4)
	{
		return 0;
	}
	return Global_262145.f_26915 /* Tunable: VC_PENTHOUSE_DISABLE_HOTTUB */;
}

bool func_610(var uParam0)//Position - 0x2361
{
	Stack.Push(!__LIB_0__::func_492(&(uParam0->f_7), 5));
	Stack.Push(&(uParam0->f_16[uParam0->f_9 /*14*/]));
	Stack.Push(uParam0->f_9);
	Call_Loc(*uParam0);
	return (StackVal || StackVal);
}

bool func_611(var uParam0)//Position - 0x2506
{
	return uParam0->f_7 & 31 > 0;
}

int func_612(int iParam0, struct<3> Param1, int iParam2)//Position - 0x2517
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (iParam2 == 3 || iParam2 == 4)
		{
			if (__LIB_2__::func_336(ENTITY::GET_ENTITY_HEADING(iParam0), (Param1.f_2 - 180f), 45f))
			{
				return 1;
			}
		}
		else if (__LIB_2__::func_336(ENTITY::GET_ENTITY_HEADING(iParam0), Param1.f_2, 45f))
		{
			return 1;
		}
	}
	return 0;
}

bool func_613(int iParam0, var uParam1)//Position - 0x2577
{
	return ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, uParam1->f_6.f_1, uParam1->f_6.f_4, uParam1->f_6, false, true, 0);
}

void func_614(var uParam0, int iParam1)//Position - 0x2607
{
	uParam0->f_13 = iParam1;
}

float func_615(int iParam0, float fParam1)//Position - 0x2FF2
{
	switch (iParam0)
	{
		case 1:
		case 2:
			return fParam1;
		case 4:
		case 3:
			return (fParam1 - 180f);
		default:
	}
	return fParam1;
}

Vector3 func_616(int iParam0, int iParam1)//Position - 0x2C85D
{
	int iVar0;
	if (iParam1 == 7)
	{
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 7);
		iParam1 = iVar0;
	}
	if (iParam1 == 0)
	{
		return ENTITY::GET_ENTITY_COORDS(iParam0, true);
	}
	else if (iParam1 == 1)
	{
		return PED::GET_PED_BONE_COORDS(iParam0, 31086, 0f, 0f, 0f);
	}
	else if (iParam1 == 2)
	{
		return PED::GET_PED_BONE_COORDS(iParam0, 39317, 0f, 0f, 0f);
	}
	else if (iParam1 == 3)
	{
		return PED::GET_PED_BONE_COORDS(iParam0, 18905, 0f, 0f, 0f);
	}
	else if (iParam1 == 4)
	{
		return PED::GET_PED_BONE_COORDS(iParam0, 57005, 0f, 0f, 0f);
	}
	else if (iParam1 == 5)
	{
		return PED::GET_PED_BONE_COORDS(iParam0, 63931, 0f, 0f, 0f);
	}
	else if (iParam1 == 6)
	{
		return PED::GET_PED_BONE_COORDS(iParam0, 36864, 0f, 0f, 0f);
	}
	return ENTITY::GET_ENTITY_COORDS(iParam0, true);
}

void func_617(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5)//Position - 0x2D8C3
{
	__LIB_0__::func_391(uParam0, 145, sParam1, iParam4, iParam5, 0);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	MISC::SET_BIT(&Global_20471, 0);
	Global_21608 = iParam3;
	StringCopy(&Global_21595, sParam2, 24);
}

void func_618(int iParam0, int iParam1, float fParam2, float fParam3, int iParam4)//Position - 0x2DFBE
{
	int iVar0;
	float fVar1;
	float fVar2;
	fVar2 = (fParam2 * fParam3);
	if (HUD::DOES_BLIP_EXIST(iParam0))
	{
		if ((ENTITY::DOES_ENTITY_EXIST(iParam1) && ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (ENTITY::IS_ENTITY_A_VEHICLE(iParam1))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iParam1), false))
				{
					fVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iParam1, true), true);
					if (fVar1 >= fVar2 || iParam4)
					{
						iVar0 = SYSTEM::ROUND((255f * ((fVar1 - fVar2) / (fParam2 - fVar2))));
						if (iVar0 <= 0)
						{
							iVar0 = 0;
						}
						if (iVar0 >= 255)
						{
							iVar0 = 255;
						}
						HUD::SET_BLIP_FLASHES(iParam0, true);
						HUD::SET_BLIP_ALPHA(iParam0, (255 - iVar0));
					}
					else
					{
						HUD::SET_BLIP_FLASHES(iParam0, false);
						HUD::SET_BLIP_ALPHA(iParam0, 255);
					}
				}
			}
			else if (ENTITY::IS_ENTITY_A_PED(iParam1))
			{
				if (!PED::IS_PED_INJURED(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1)))
				{
					fVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iParam1, true), true);
					if (fVar1 >= fVar2 || iParam4)
					{
						iVar0 = SYSTEM::ROUND(((255f * (fVar1 - fVar2)) / (fParam2 - fVar2)));
						if (iVar0 <= 0)
						{
							iVar0 = 0;
						}
						if (iVar0 >= 255)
						{
							iVar0 = 255;
						}
						HUD::SET_BLIP_FLASHES(iParam0, true);
						HUD::SET_BLIP_ALPHA(iParam0, (255 - iVar0));
					}
					else
					{
						HUD::SET_BLIP_FLASHES(iParam0, false);
						HUD::SET_BLIP_ALPHA(iParam0, 255);
					}
				}
			}
		}
	}
}

int func_619(int iParam0, struct<3> Param1, float fParam2, int iParam3)//Position - 0x2F344
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	Var0 = { __LIB_0__::func_79(Param1 - ENTITY::GET_ENTITY_COORDS(iParam0, true)) };
	if (fParam2 < 0.1f || fParam2 > 360f)
	{
		return 1;
	}
	if (iParam3 == 0)
	{
		Var1 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0) };
	}
	else
	{
		Var1 = { __LIB_0__::func_79(PED::GET_PED_BONE_COORDS(iParam0, 31086, 0f, 5f, 0f) - PED::GET_PED_BONE_COORDS(iParam0, 31086, 0f, 0f, 0f)) };
	}
	fVar2 = __LIB_0__::func_156(Var1, Var0);
	if (fVar2 <= SYSTEM::COS((fParam2 / 2f)))
	{
		return 0;
	}
	return 1;
}

int func_620(int iParam0, bool bParam1, float fParam2, float fParam3)//Position - 0x2F3D2
{
	if (bParam1)
	{
		if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
		{
			if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iParam0, fParam3, fParam3, fParam3, false, true, 0))
			{
				return 1;
			}
		}
	}
	if (MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(iParam0, true), fParam2, true))
	{
		return 1;
	}
	return 0;
}

int func_621(int iParam0)//Position - 0x2F4A8
{
	if (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iParam0) && WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
	{
		return 1;
	}
	return 0;
}

int func_622()//Position - 0x3938A
{
	if ((((Global_100441.f_11 == 0 || Global_100441.f_11 == 1) || Global_100441.f_11 == 2) || Global_100441.f_11 == 6) || Global_100441.f_11 == 3)
	{
		return 1;
	}
	if (Global_100441.f_11 == 5)
	{
		if (__LIB_0__::func_125(&(Global_100441.f_3)) > -1)
		{
			return 1;
		}
	}
	return 0;
}

bool func_623(struct<3> Param0, var* uParam1, float fParam2, bool bParam3)//Position - 0x71E
{
	var uVar0;
	struct<3> Var1;
	Var1 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Param0, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f), 0f, fParam2, 0f) };
	if (MISC::GET_GROUND_Z_FOR_3D_COORD(Var1, &uVar0, false, false))
	{
		Var1.f_2 = uVar0;
	}
	*uParam1 = { Var1 };
	return PATHFIND::GET_SAFE_COORD_FOR_PED(Var1, bParam3, uParam1, 0);
}

void func_624(int iParam0, struct<2> Param1, Vector3 vParam2)//Position - 0xA40
{
	struct<3> Var0;
	float fVar1;
	float fVar2;
	float fVar3;
	Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
	fVar2 = (Param1.f_0 - Var0.f_0);
	fVar3 = (Param1.f_1 - Var0.f_1);
	if (fVar3 != 0f)
	{
		fVar1 = MISC::ATAN2(fVar2, fVar3);
	}
	else if (fVar2 < 0f)
	{
		fVar1 = -90f;
	}
	else
	{
		fVar1 = 90f;
	}
	fVar1 = (fVar1 * -1f);
	ENTITY::SET_ENTITY_HEADING(iParam0, fVar1);
}

char* func_625()//Position - 0x11C8
{
	return "special_ped@maude@base";
}

int func_626()//Position - 0x1283
{
	return joaat("prop_radio_01");
}

float func_627()//Position - 0x1290
{
	return -92.17f;
}

Vector3 func_628()//Position - 0x129D
{
	return 2727.4f, 4145.56f, 43.68f;
}

int func_629()//Position - 0x12B4
{
	return joaat("prop_table_03b");
}

char* func_630()//Position - 0x13AD
{
	return "base_chair";
}

char* func_631()//Position - 0x13B8
{
	return "base";
}

Vector3 func_632()//Position - 0x13C3
{
	return 0f, 0f, -92.17f;
}

void func_633(int iParam0, bool bParam1)//Position - 0x146B
{
	if (iParam0 != 0)
	{
		if (bParam1)
		{
			if (STREAMING::HAS_MODEL_LOADED(iParam0))
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iParam0);
			}
		}
		else
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iParam0);
		}
	}
}

int func_634(int iParam0)//Position - 0x1496
{
	if (iParam0 == 0)
	{
		return 1;
	}
	STREAMING::REQUEST_MODEL(iParam0);
	if (STREAMING::HAS_MODEL_LOADED(iParam0))
	{
		return 1;
	}
	return 0;
}

char* func_635()//Position - 0x1D89
{
	return "female_Flee_Table_Left_Maude";
}

char* func_636()//Position - 0x2C14
{
	return "Female_Flee_Table_Left_Maude_Chair";
}

char* func_637()//Position - 0x2C20
{
	return "special_ped@maude@exit_flee";
}

bool func_638(int iParam0, int iParam1)//Position - 0x316A
{
	return (MISC::GET_GAME_TIMER() - iParam0) > iParam1;
}

int func_639(int iParam0)//Position - 0x3971
{
	int iVar0;
	switch (iParam0)
	{
		case 0:
			iVar0 = 149;
			break;
		case 1:
			iVar0 = 150;
			break;
		case 2:
			iVar0 = 152;
			break;
		case 3:
			iVar0 = 151;
			break;
	}
	return iVar0;
}

void func_640(int iParam0)//Position - 0x3CBB
{
	iLocal_58 = iParam0;
	iLocal_60 = 0;
}

Vector3 func_641()//Position - 0xAEF4
{
	return 3.01f, 11.01f, 6.01f;
}

int func_642(var uParam0, var uParam1, var uParam2)//Position - 0xAF0B
{
	*uParam0 = { 2728.995f, 4143.165f, 41.02986f };
	*uParam1 = { 2719.126f, 4144.6914f, 47.88543f };
	*uParam2 = 13f;
	return 1;
}

int func_643(var uParam0)//Position - 0x296F2
{
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(*uParam0, false))
		{
			if (PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false) == PED::GET_VEHICLE_PED_IS_IN(*uParam0, false))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_644(int iParam0, struct<3> Param1, int iParam2, float fParam3)//Position - 0x2986C
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	int iVar5;
	fVar1 = 64f;
	fVar2 = 625f;
	fVar3 = 16000f;
	fVar4 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam0, true), Param1);
	iVar5 = (MISC::GET_GAME_TIMER() - iParam2);
	fParam3 = (fParam3 * IntToFloat(iVar5));
	if (fVar4 > fVar3 && ENTITY::IS_ENTITY_OCCLUDED(iParam0))
	{
		fVar0 = 1f;
	}
	else if (fVar4 > fVar2)
	{
		if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			fVar0 = 1.7f;
			fVar0 = (fVar0 - fParam3);
			if (fVar0 < 1.5f)
			{
				fVar0 = 1.5f;
			}
		}
		else
		{
			fVar0 = 2f;
		}
	}
	else if (fVar4 < fVar1)
	{
		fVar0 = 2.4f;
		fVar0 = (fVar0 - fParam3);
		if (fVar0 < 1.5f)
		{
			fVar0 = 1.5f;
		}
	}
	else
	{
		fVar0 = 2f;
		fVar0 = (fVar0 - fParam3);
		if (fVar0 < 1.5f)
		{
			fVar0 = 1.5f;
		}
	}
	PED::SET_PED_MAX_MOVE_BLEND_RATIO(iParam0, fVar0);
}

int func_645(int iParam0, struct<3> Param1, float fParam2, float fParam3)//Position - 0x29CB1
{
	if (__LIB_0__::func_530(iParam0, Param1, fParam2, 1))
	{
		if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
		{
			if (MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(iParam0, true), fParam3, true))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_646(int iParam0, struct<3> Param1)//Position - 0x29CEA
{
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if (PLAYER::GET_TIME_SINCE_PLAYER_HIT_PED(PLAYER::PLAYER_ID()) >= 0 && PLAYER::GET_TIME_SINCE_PLAYER_HIT_PED(PLAYER::PLAYER_ID()) < 500)
		{
			if (__LIB_0__::func_530(iParam0, Param1, 3.5f, 1) || ENTITY::IS_ENTITY_TOUCHING_ENTITY(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_647(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5)//Position - 0x2ADBD
{
	if (HUD::DOES_BLIP_EXIST(*uParam0))
	{
		if ((MISC::GET_GAME_TIMER() - *iParam3) > 500)
		{
			if (HUD::GET_BLIP_COLOUR(*uParam0) == 1)
			{
				HUD::SET_BLIP_COLOUR(*uParam0, 3);
				HUD::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam0, "BLIP_FRIEND" /* GXT: Friend */);
				if ((MISC::GET_GAME_TIMER() - iParam4) < 7500 && iParam5)
				{
					if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || __LIB_0__::func_405(sParam1, 0, 0))
					{
						__LIB_0__::func_210(sParam2, 7500, 0);
					}
				}
				*iParam3 = MISC::GET_GAME_TIMER();
			}
			else
			{
				HUD::SET_BLIP_COLOUR(*uParam0, 1);
				HUD::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam0, "BLIP_ENEMY" /* GXT: Enemy */);
				if ((MISC::GET_GAME_TIMER() - iParam4) < 7500 && iParam5)
				{
					if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || __LIB_0__::func_405(sParam2, 0, 0))
					{
						__LIB_0__::func_210(sParam1, 7500, 0);
					}
				}
				*iParam3 = MISC::GET_GAME_TIMER();
			}
		}
	}
	if ((MISC::GET_GAME_TIMER() - iParam4) > 7500)
	{
		if (__LIB_0__::func_405(sParam1, 0, 0))
		{
			HUD::CLEAR_THIS_PRINT(sParam1);
		}
		if (__LIB_0__::func_405(sParam2, 0, 0))
		{
			HUD::CLEAR_THIS_PRINT(sParam2);
		}
	}
}

void func_648(var* uParam0, struct<3> Param1)//Position - 0x2AF59
{
	struct<3> Var0;
	struct<3> Var1;
	Var0 = { Param1 - Vector(7f, 7f, 7f) };
	Var1 = { Param1 + Vector(7f, 7f, 7f) };
	if (MISC::IS_PROJECTILE_IN_AREA(Var0, Var1, false))
	{
		if (MISC::GET_COORDS_OF_PROJECTILE_TYPE_IN_AREA(Var0, Var1, joaat("WEAPON_GRENADE"), uParam0, false))
		{
		}
		else if (MISC::GET_COORDS_OF_PROJECTILE_TYPE_IN_AREA(Var0, Var1, joaat("WEAPON_MOLOTOV"), uParam0, false))
		{
		}
		else if (MISC::GET_COORDS_OF_PROJECTILE_TYPE_IN_AREA(Var0, Var1, joaat("WEAPON_SMOKEGRENADE"), uParam0, false))
		{
		}
		else if (MISC::GET_COORDS_OF_PROJECTILE_TYPE_IN_AREA(Var0, Var1, joaat("WEAPON_BZGAS"), uParam0, false))
		{
		}
		else if (MISC::GET_COORDS_OF_PROJECTILE_TYPE_IN_AREA(Var0, Var1, joaat("WEAPON_STICKYBOMB"), uParam0, false))
		{
		}
		else if (MISC::GET_COORDS_OF_PROJECTILE_TYPE_IN_AREA(Var0, Var1, joaat("WEAPON_FLARE"), uParam0, false))
		{
		}
		else
		{
			*uParam0 = { 0f, 0f, 0f };
		}
	}
	else
	{
		*uParam0 = { 0f, 0f, 0f };
	}
}

bool func_649(int iParam0, int iParam1)//Position - 0x2C1AA
{
	return (MISC::GET_FRAME_COUNT() - iParam0) > iParam1;
}

int func_650(bool bParam0, bool bParam1, bool bParam2)//Position - 0x2C476
{
	int iVar0;
	WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar0, true);
	switch (iVar0)
	{
		case joaat("WEAPON_PISTOL"):
		case joaat("WEAPON_COMBATPISTOL"):
		case joaat("WEAPON_APPISTOL"):
		case joaat("WEAPON_MICROSMG"):
		case joaat("WEAPON_SMG"):
		case joaat("WEAPON_ASSAULTRIFLE"):
		case joaat("WEAPON_CARBINERIFLE"):
		case joaat("WEAPON_SPECIALCARBINE"):
		case joaat("WEAPON_ADVANCEDRIFLE"):
		case joaat("WEAPON_MG"):
		case joaat("WEAPON_COMBATMG"):
		case joaat("WEAPON_PUMPSHOTGUN"):
		case joaat("WEAPON_SAWNOFFSHOTGUN"):
		case joaat("WEAPON_ASSAULTSHOTGUN"):
		case joaat("WEAPON_SNIPERRIFLE"):
		case joaat("WEAPON_HEAVYSNIPER"):
		case joaat("WEAPON_REMOTESNIPER"):
		case joaat("WEAPON_GRENADELAUNCHER"):
		case joaat("WEAPON_RPG"):
		case joaat("WEAPON_SNSPISTOL"):
		case joaat("WEAPON_MINIGUN"):
			return 1;
		default:
	}
	if (bParam0)
	{
		switch (iVar0)
		{
			case joaat("WEAPON_GRENADE"):
			case joaat("WEAPON_STICKYBOMB"):
			case joaat("WEAPON_MOLOTOV"):
				return 1;
			}
		default:
	}
	if (bParam1)
	{
		switch (iVar0)
		{
			case joaat("WEAPON_KNIFE"):
			case joaat("WEAPON_HAMMER"):
			case joaat("WEAPON_CROWBAR"):
			case joaat("WEAPON_BOTTLE"):
			case default:
			}
	}
	if (bParam2)
	{
		if (iVar0 == joaat("WEAPON_STUNGUN"))
		{
			return 1;
		}
	}
	return 0;
}

int func_651(float fParam0, float fParam1, float fParam2)//Position - 0x2C56D
{
	if (MISC::ABSF((fParam0 - fParam1)) <= fParam2)
	{
		return 1;
	}
	return 0;
}

char* func_652()//Position - 0x2C589
{
	return "move_m@bail_bond_not_tazered";
}

char* func_653()//Position - 0x2C595
{
	return "move_m@bail_bond_tazered";
}

void func_654(var uParam0, bool bParam1)//Position - 0x2C5D6
{
	if (PED::IS_PED_BEING_STUNNED(*uParam0, 0))
	{
		*bParam1 = 1;
	}
}

int func_655()//Position - 0x2C8CB
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Local_56.f_0)
	{
		if ((Local_56[iVar0 /*4*/] == 0 && Local_56[iVar0 /*4*/].f_1 == 0) && Local_56[iVar0 /*4*/].f_2 == 0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_656(int iParam0, int iParam1)//Position - 0x2C9C7
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Local_56.f_0)
	{
		if (Local_56[iVar0 /*4*/].f_1 == iParam0 && Local_56[iVar0 /*4*/].f_2 == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_657(char* sParam0, bool bParam1)//Position - 0x2D27D
{
	if (__LIB_0__::func_1(sParam0))
	{
		HUD::CLEAR_HELP(bParam1);
	}
}

int func_658(struct<3> Param0, int iParam1, bool bParam2)//Position - 0x2D8A3
{
	int iVar0;
	iVar0 = 0;
	iVar0 = HUD::ADD_BLIP_FOR_COORD(Param0);
	HUD::SET_BLIP_PRIORITY(iVar0, iParam1);
	HUD::SET_BLIP_SCALE(iVar0, 1f);
	HUD::SET_BLIP_ROUTE(iVar0, bParam2);
	return iVar0;
}

void func_659(bool bParam0, var uParam1)//Position - 0x2DDB7
{
	struct<3> Var0;
	struct<3> Var1;
	Var0 = { 2711.1978f, 4134.4253f, 32.90168f };
	Var1 = { 2739.9814f, 4155.2207f, 50.28859f };
	if (bParam0)
	{
		*uParam1 = PED::ADD_SCENARIO_BLOCKING_AREA(Var0, Var1, false, true, true, true);
		PED::SET_PED_NON_CREATION_AREA(Var0, Var1);
		VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Var0, Var1, false, true);
		VEHICLE::REMOVE_VEHICLES_FROM_GENERATORS_IN_AREA(Var0, Var1, 0);
		PATHFIND::SET_ROADS_IN_AREA(2697.2224f, 4119.8936f, 42.79107f, 2746.0396f, 4162.9736f, 43.62732f, false, true);
		MISC::CLEAR_AREA(2728.3328f, 4144.778f, 43.29292f, 7.5f, true, false, false, false);
	}
	else
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA(*uParam1, false);
		PED::CLEAR_PED_NON_CREATION_AREA();
		VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Var0, Var1, true, true);
		PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(2697.2224f, 4119.8936f, 42.79107f, 2746.0396f, 4162.9736f, 43.62732f, 1);
	}
}

int func_660(int iParam0, struct<3> Param1, float fParam2)//Position - 0x2EAC2
{
	struct<3> Var0;
	float fVar1;
	Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, false) };
	fVar1 = MISC::ABSF((Var0.f_2 - Param1.f_2));
	if (fVar1 <= fParam2)
	{
		return 1;
	}
	return 0;
}

char* func_661(int iParam0)//Position - 0x2EDB2
{
	switch (iParam0)
	{
		case 0:
			return "BB1_TE";
		case 1:
			return "BB2_TE";
		case 2:
			return "BB3_TE";
		case 3:
			return "BB4_TE";
		default:
	}
	return "NULL";
}

char* func_662(int iParam0)//Position - 0x2EDF7
{
	switch (iParam0)
	{
		case 0:
			return "BB1AUD";
		case 1:
			return "BB2AUD";
		case 2:
			return "BB3AUD";
		case 3:
			return "BB4AUD";
		default:
	}
	return "NULL";
}

int func_663(int iParam0)//Position - 0x2EF24
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = 0;
	iVar1 = -1;
	iVar2 = -1;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (Global_53557[iVar0 /*203*/].f_2 == iParam0)
		{
			if (Global_53557[iVar0 /*203*/].f_1 > iVar2)
			{
				iVar2 = Global_53557[iVar0 /*203*/].f_1;
				iVar1 = iVar0;
			}
		}
		iVar0++;
	}
	if (iVar1 != -1 && iVar2 != -1)
	{
		return iVar1;
	}
	return -1;
}

int func_664(int iParam0)//Position - 0x2EF88
{
	switch (iParam0)
	{
		case 0:
			return 75;
		case 1:
			return 76;
		case 2:
			return 77;
		case 3:
			return 78;
		default:
	}
	return 79;
}

void func_665(bool bParam0)//Position - 0x2FA6E
{
	if (bParam0)
	{
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, joaat("PLAYER"), joaat("AMBIENT_GANG_MEXICAN"));
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, joaat("PLAYER"), joaat("AMBIENT_GANG_FAMILY"));
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, joaat("PLAYER"), joaat("AMBIENT_GANG_MARABUNTE"));
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, joaat("PLAYER"), joaat("AMBIENT_GANG_CULT"));
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, joaat("PLAYER"), joaat("AMBIENT_GANG_SALVA"));
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, joaat("PLAYER"), joaat("AMBIENT_GANG_WEICHENG"));
		PLAYER::SET_PLAYER_CAN_BE_HASSLED_BY_GANGS(PLAYER::PLAYER_ID(), false);
	}
	else
	{
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(255, joaat("PLAYER"), joaat("AMBIENT_GANG_MEXICAN"));
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(255, joaat("PLAYER"), joaat("AMBIENT_GANG_FAMILY"));
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(255, joaat("PLAYER"), joaat("AMBIENT_GANG_MARABUNTE"));
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(255, joaat("PLAYER"), joaat("AMBIENT_GANG_CULT"));
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(255, joaat("PLAYER"), joaat("AMBIENT_GANG_SALVA"));
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(255, joaat("PLAYER"), joaat("AMBIENT_GANG_WEICHENG"));
		PLAYER::SET_PLAYER_CAN_BE_HASSLED_BY_GANGS(PLAYER::PLAYER_ID(), true);
	}
}

int func_666(int iParam0)//Position - 0x35D87
{
	if (!__LIB_0__::func_114() && func_516(iParam0))
	{
		return 1;
	}
	return 0;
}

void func_667(int iParam0, char* sParam1, int iParam2)//Position - 0x36827
{
	char cVar0[16];
	StringCopy(&cVar0, sParam1, 16);
	StringIntConCat(&cVar0, iParam2, 16);
	PED::SET_PED_NAME_DEBUG(iParam0, &cVar0);
}

Vector3 func_668(struct<5> Param0, var uParam1, var uParam2, var uParam3)//Position - 0x36B9A
{
	switch (Param0.f_4)
	{
		case 0:
			return 2956.7854f, 2824.5942f, 45.1931f;
		case 1:
			return 197.6706f, 2333.7725f, 105.647f;
		case 2:
			return 535.9079f, 5518.3228f, 772.5947f;
		case 3:
			return 1446.7683f, 6361.9297f, 26.9007f;
		default:
	}
	return 0f, 0f, 0f;
}

Vector3 func_669(struct<5> Param0, var uParam1, var uParam2, var uParam3)//Position - 0x36C0E
{
	switch (Param0.f_4)
	{
		case 0:
			return 2929.6653f, 2782.219f, 34.8822f;
		case 1:
			return 145.6927f, 2266.8862f, 70.4983f;
		case 2:
			return 491.7797f, 5485.706f, 736.4918f;
		case 3:
			return 1414.2113f, 6326.607f, 20.8036f;
		default:
	}
	return 0f, 0f, 0f;
}

float func_670()//Position - 0x370CD
{
	return 75.15f;
}

Vector3 func_671()//Position - 0x370DA
{
	return 2727.29f, 4145.9f, 44.16f;
}

float func_672()//Position - 0x370F1
{
	return 71f;
}

Vector3 func_673()//Position - 0x370FE
{
	return 2727.686f, 4145.715f, 44.08f;
}

int func_674()//Position - 0x37115
{
	return joaat("prop_laptop_01a");
}

float func_675()//Position - 0x37122
{
	return -91.28f;
}

Vector3 func_676()//Position - 0x3712F
{
	return 2728.35f, 4145.59f, 43.3f;
}

int func_677()//Position - 0x37146
{
	return joaat("prop_table_03_chr");
}

float func_678()//Position - 0x37153
{
	return 89.19f;
}

Vector3 func_679()//Position - 0x37160
{
	return 2728.33f, 4145.6f, 43.89f;
}

int func_680(var uParam0, int iParam1, struct<3> Param2, float fParam3, bool bParam4)//Position - 0x1435
{
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		if (__LIB_10__::func_634(iParam1))
		{
			*uParam0 = OBJECT::CREATE_OBJECT(iParam1, Param2, true, true, false);
			if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
			{
				ENTITY::SET_ENTITY_HEADING(*uParam0, fParam3);
				OBJECT::SET_ACTIVATE_OBJECT_PHYSICS_AS_SOON_AS_IT_IS_UNFROZEN(*uParam0, true);
				if (bParam4)
				{
					__LIB_10__::func_633(iParam1, 1);
				}
				return 1;
			}
		}
	}
	else
	{
		if (bParam4)
		{
			__LIB_10__::func_633(iParam1, 0);
		}
		return 1;
	}
	return 0;
}

void func_681(int iParam0)//Position - 0x3000
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= (iParam0 - 1))
	{
		__LIB_0__::func_489(&(Local_69[iVar0 /*20*/].f_6));
		iVar0++;
	}
}

int func_682()//Position - 0x2C905
{
	STREAMING::REQUEST_ANIM_SET(__LIB_10__::func_652());
	STREAMING::REQUEST_ANIM_SET(__LIB_10__::func_653());
	if (STREAMING::HAS_CLIP_SET_LOADED(__LIB_10__::func_652()) && STREAMING::HAS_CLIP_SET_LOADED(__LIB_10__::func_653()))
	{
		return 1;
	}
	return 0;
}

int func_683(var uParam0)//Position - 0x2E9AC
{
	if (!__LIB_10__::func_649(*uParam0, 10))
	{
		return 1;
	}
	return 0;
}

void func_684()//Position - 0x2F957
{
	STREAMING::REMOVE_ANIM_SET(__LIB_10__::func_652());
	STREAMING::REMOVE_ANIM_SET(__LIB_10__::func_653());
}

int func_685(var uParam0, int iParam1, struct<3> Param2, int iParam3, int iParam4, bool bParam5)//Position - 0x36830
{
	if (!OBJECT::DOES_PICKUP_EXIST(*uParam0))
	{
		if (__LIB_10__::func_634(iParam4))
		{
			*uParam0 = OBJECT::CREATE_PICKUP(iParam1, Param2, iParam3, -1, true, iParam4);
			if (OBJECT::DOES_PICKUP_EXIST(*uParam0))
			{
				if (OBJECT::DOES_PICKUP_OBJECT_EXIST(*uParam0))
				{
					if (bParam5)
					{
						__LIB_10__::func_633(iParam4, 1);
					}
					return 1;
				}
			}
		}
	}
	else if (OBJECT::DOES_PICKUP_OBJECT_EXIST(*uParam0))
	{
		if (bParam5)
		{
			__LIB_10__::func_633(iParam4, 0);
		}
		return 1;
	}
	return 0;
}

void func_686()//Position - 0x2F4CB
{
	if (bLocal_103)
	{
		if (((iLocal_58 != 9 && iLocal_58 != 4) && iLocal_58 != 5) && iLocal_58 != 8)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_68.f_9))
			{
				if (ENTITY::IS_ENTITY_DEAD(Local_68.f_9, false) || PED::IS_PED_INJURED(Local_68.f_9))
				{
					__LIB_10__::func_640(8);
				}
			}
		}
	}
}

void func_687(int iParam0)//Position - 0x984
{
	Global_44252[Global_44256] = iParam0;
	Global_22663 = 1;
	Global_22662 = iParam0;
	Global_44256++;
	if (Global_44256 == 3)
	{
		Global_44256 = 0;
	}
}

char* func_688(int iParam0)//Position - 0x9B2
{
	switch (iParam0)
	{
		case 0:
			return "EMSTR_0" /* GXT: Mike */;
		case 3:
			return "EMSTR_3" /* GXT: Jimmy */;
		case 1:
			return "EMSTR_6" /* GXT: Franklin */;
		case 2:
			return "EMSTR_9" /* GXT: Trevor */;
		case 4:
			return "EMSTR_12" /* GXT: Marnie */;
		case 5:
			return "EMSTR_29" /* GXT: Epsilon Store */;
		case 6:
			return "EMSTR_36" /* GXT: Maude */;
		case 7:
			return "EMSTR_39" /* GXT: Lester */;
		case 8:
			return "EMSTR_52" /* GXT: Maze Bank */;
		case 9:
			return "EMSTR_55" /* GXT: Fleeca */;
		case 10:
			return "EMSTR_58" /* GXT: Bank of Liberty */;
		case 11:
			return "EMSTR_78" /* GXT: Legendary Motorsport Sales */;
		case 12:
			return "EMSTR_81" /* GXT: Elitas Sales */;
		case 13:
			return "EMSTR_84" /* GXT: Cache & Carry */;
		case 14:
			return "EMSTR_87" /* GXT: Dock Tease */;
		case 15:
			return "EMSTR_106" /* GXT: LSC */;
		case 16:
			return "EMSTR_114" /* GXT: AMMU-NATION */;
		case 17:
			return "EMSTR_142" /* GXT: Christian Feltz */;
		case 18:
			return "EMSTR_145" /* GXT: Paige Harris */;
		case 19:
			return "EMSTR_152" /* GXT: Los Santos Tourist Info */;
		case 20:
			return "EMSTR_157" /* GXT: Rickie Luckens */;
		case 21:
			return "EMSTR_163" /* GXT: Minotaur Property Management */;
		case 22:
			return "EMSTR_182" /* GXT: Saeeda Kadam */;
		case 23:
			return "EMSTR_187" /* GXT: Vanilla Unicorn */;
		case 24:
			return "EMSTR_190" /* GXT: Dr Isiah Friedlander */;
		case 25:
			return "EMSTR_206" /* GXT: TRACEYHEARTSTEALER */;
		case 26:
			return "EMSTR_219" /* GXT: Dave Norton */;
		case 27:
			return "EMSTR_226" /* GXT: Amanda De Santa */;
		case 28:
			return "EMSTR_233" /* GXT: Donald Percival */;
		case 29:
			return "EMSTR_242" /* GXT: Ron */;
		case 30:
			return "EMSTR_249" /* GXT: Tanisha Marks */;
		case 31:
			return "EMSTR_262" /* GXT: Denise */;
		case 32:
			return "EMSTR_269" /* GXT: Lamar Davis */;
		case 33:
			return "EMSTR_319" /* GXT: Brad */;
		case 34:
			return "EMSTR_340" /* GXT: Patricia Madrazo */;
		case 35:
			return "EMSTR_348" /* GXT: Eileen Haworth */;
		case 36:
			return "EMSTR_182" /* GXT: Saeeda Kadam */;
		case 37:
			return "EMSTR_357" /* GXT: Gray Nicholson */;
		case 38:
			return "EMSTR_360" /* GXT: Nigel */;
		case 39:
			return "EMSTR_369" /* GXT: Hookies */;
		case 40:
			return "EMSTR_376" /* GXT: Towing Impound */;
		case 41:
			return "EMSTR_379" /* GXT: Downtown Cab Co, */;
		case 42:
			return "EMSTR_382" /* GXT: McKenzie Field Hangar */;
		case 43:
			return "EMSTR_384" /* GXT: Sonar Collections Dock */;
		case 44:
			return "EMSTR_387" /* GXT: Los Santos Customs */;
		case 45:
			return "EMSTR_390" /* GXT: Cinema Doppler */;
		case 46:
			return "EMSTR_393" /* GXT: Ten Cent Theater */;
		case 47:
			return "EMSTR_396" /* GXT: Tivoli Cinema */;
		case 48:
			return "EMSTR_399" /* GXT: Los Santos Golf Club */;
		case 49:
			return "EMSTR_402" /* GXT: Car Scrap Yard */;
		case 50:
			return "EMSTR_405" /* GXT: Smoke on the Water */;
		case 51:
			return "EMSTR_408" /* GXT: Tequi-la-la */;
		case 52:
			return "EMSTR_411" /* GXT: Pitchers */;
		case 53:
			return "EMSTR_414" /* GXT: The Hen House */;
		case 54:
			return "EMSTR_465" /* GXT: Pedal & Metal Sales */;
		case 55:
			return "EMSTR_468" /* GXT: SSA Super Autos Sales */;
		case 56:
			return "EMSTR_489" /* GXT: Hush Smush */;
		case 57:
			return "EMSTR_492" /* GXT: foxymama21 */;
		case 58:
			return "EMSTR_495" /* GXT: Altarego12 */;
		case 59:
			return "EMSTR_498" /* GXT: BadKitty11 */;
		case 60:
			return "EMSTR_501" /* GXT: 7yearbitch */;
		case 61:
			return "EMSTR_504" /* GXT: Froggy69 */;
		case 62:
			return "EMSTR_507" /* GXT: Misscuddles */;
		case 63:
			return "EMSTR_640" /* GXT: Offroad Events */;
		case 64:
			return "EMSTR_643" /* GXT: Dock Tease */;
		case 65:
			return "EMSTR_652" /* GXT: Brother Adrian */;
		default:
	}
	return "NULL";
}

char* func_689(int iParam0, int iParam1)//Position - 0xD1B
{
	*iParam1 = 1;
	switch (iParam0)
	{
		case 0:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_1998[0 /*29*/].f_7));
		case 1:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_1998[1 /*29*/].f_7));
		case 2:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_1998[2 /*29*/].f_7));
		case 7:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_1998[12 /*29*/].f_7));
		case 4:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_1998[60 /*29*/].f_7));
		case 6:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_1998[62 /*29*/].f_7));
		case 3:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_1998[14 /*29*/].f_7));
		case 16:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_1998[97 /*29*/].f_7));
		case 19:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_1998[99 /*29*/].f_7));
		case 15:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_1998[96 /*29*/].f_7));
		case 63:
			return "CHAR_CARSITE2";
		case 64:
			return "CHAR_BOATSITE";
		case 8:
			return "CHAR_BANK_MAZE";
		case 9:
			return "CHAR_BANK_FLEECA";
		case 10:
			return "CHAR_BANK_BOL";
		case 21:
			return "CHAR_MINOTAUR";
		case 25:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_1998[15 /*29*/].f_7));
		case 26:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_1998[30 /*29*/].f_7));
		case 27:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_1998[17 /*29*/].f_7));
		case 29:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_1998[20 /*29*/].f_7));
		case 30:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_1998[43 /*29*/].f_7));
		case 31:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_1998[44 /*29*/].f_7));
		case 32:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_1998[19 /*29*/].f_7));
		case 34:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_1998[40 /*29*/].f_7));
		case 36:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("CELL_E_381" /* GXT: CHAR_SAEEDA */);
		case 38:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_1998[64 /*29*/].f_7));
		case 5:
			return "CHAR_EPSILON";
		case 13:
			return "CHAR_MILSITE";
		case 11:
			return "CHAR_CARSITE";
		case 14:
			return "CHAR_BOATSITE";
		case 12:
			return "CHAR_PLANESITE";
		case 24:
			return "CHAR_DR_FRIEDLANDER";
		case 55:
			return "CHAR_CARSITE2";
		case 54:
			return "CHAR_BIKESITE";
		case 39:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_1998[122 /*29*/].f_7));
		case 40:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_1998[125 /*29*/].f_7));
		case 41:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_1998[113 /*29*/].f_7));
		case 42:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_1998[126 /*29*/].f_7));
		case 43:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_1998[127 /*29*/].f_7));
		case 44:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_1998[124 /*29*/].f_7));
		case 45:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_1998[114 /*29*/].f_7));
		case 46:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_1998[115 /*29*/].f_7));
		case 47:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_1998[116 /*29*/].f_7));
		case 48:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_1998[123 /*29*/].f_7));
		case 49:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_1998[117 /*29*/].f_7));
		case 50:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_1998[118 /*29*/].f_7));
		case 51:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_1998[119 /*29*/].f_7));
		case 52:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_1998[120 /*29*/].f_7));
		case 53:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_1998[121 /*29*/].f_7));
		default:
	}
	*iParam1 = 0;
	return "ERROR!";
}

struct<16> func_690(int iParam0)//Position - 0x10E6
{
	struct<16> Var0;
	struct<16> Var1;
	if (iParam0 > -1)
	{
		StringCopy(&Var0, "EMSTR_", 64);
		StringIntConCat(&Var0, iParam0, 64);
		return Var0;
	}
	StringCopy(&Var1, "FAIL", 64);
	return Var1;
}

int func_691()//Position - 0x2FBF0
{
	return Global_103950.f_4;
}

void func_692(var uParam0, int iParam1)//Position - 0x314FE
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		if (iParam1 == 1)
		{
			__LIB_0__::func_0(uParam0[iVar0]);
		}
		else
		{
			__LIB_0__::func_124(uParam0[iVar0], 0, 1, 0);
		}
		iVar0++;
	}
}

void func_693(var uParam0)//Position - 0x31748
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
}

int func_694()//Position - 0x259A3
{
	if ((__LIB_0__::func_3() == -1 || __LIB_0__::func_3() == 999) && !func_262() == 0)
	{
		return 1;
	}
	return 0;
}

void func_695(var uParam0)//Position - 0x2ABCD
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		switch (iVar0)
		{
			case 0:
				STATS::STAT_SET_INT(joaat("SP0_WEAP_PURCH_0"), uParam0->f_2244[iVar0 /*32*/][0], true);
				STATS::STAT_SET_INT(joaat("SP0_WEAP_PURCH_1"), uParam0->f_2244[iVar0 /*32*/][1], true);
				STATS::STAT_SET_INT(joaat("SP0_WEAP_ADDON_PURCH_0"), uParam0->f_2244[iVar0 /*32*/].f_5[0], true);
				STATS::STAT_SET_INT(joaat("SP0_WEAP_ADDON_PURCH_1"), uParam0->f_2244[iVar0 /*32*/].f_5[1], true);
				STATS::STAT_SET_INT(joaat("SP0_WEAP_ADDON_PURCH_2"), uParam0->f_2244[iVar0 /*32*/].f_5[2], true);
				STATS::STAT_SET_INT(joaat("SP0_WEAP_ADDON_PURCH_3"), uParam0->f_2244[iVar0 /*32*/].f_5[3], true);
				STATS::STAT_SET_INT(joaat("SP0_WEAP_ADDON_PURCH_4"), uParam0->f_2244[iVar0 /*32*/].f_5[4], true);
				STATS::STAT_SET_INT(joaat("SP0_WEAP_TINT_PURCH_0"), uParam0->f_2244[iVar0 /*32*/].f_16[0], true);
				STATS::STAT_SET_INT(joaat("SP0_WEAP_TINT_PURCH_1"), uParam0->f_2244[iVar0 /*32*/].f_16[1], true);
				STATS::STAT_SET_INT(joaat("SP0_WEAP_TINT_PURCH_2"), uParam0->f_2244[iVar0 /*32*/].f_16[2], true);
				STATS::STAT_SET_INT(joaat("SP0_WEAP_TINT_PURCH_3"), uParam0->f_2244[iVar0 /*32*/].f_16[3], true);
				STATS::STAT_SET_INT(joaat("SP0_WEAP_TINT_PURCH_4"), uParam0->f_2244[iVar0 /*32*/].f_16[4], true);
				STATS::STAT_SET_INT(joaat("SP0_WEAP_TINT_PURCH_5"), uParam0->f_2244[iVar0 /*32*/].f_16[5], true);
				STATS::STAT_SET_INT(joaat("SP0_WEAP_TINT_PURCH_6"), uParam0->f_2244[iVar0 /*32*/].f_16[6], true);
				STATS::STAT_SET_INT(joaat("SP0_WEAP_TINT_PURCH_7"), uParam0->f_2244[iVar0 /*32*/].f_16[7], true);
				STATS::STAT_SET_INT(joaat("SP0_WEAP_TINT_PURCH_8"), uParam0->f_2244[iVar0 /*32*/].f_16[8], true);
				STATS::STAT_SET_INT(joaat("SP0_WEAP_TINT_PURCH_9"), uParam0->f_2244[iVar0 /*32*/].f_16[9], true);
				STATS::STAT_SET_INT(joaat("SP0_WEAP_TINT_PURCH_10"), uParam0->f_2244[iVar0 /*32*/].f_16[10], true);
				STATS::STAT_SET_INT(joaat("SP0_WEAP_TINT_PURCH_11"), uParam0->f_2244[iVar0 /*32*/].f_16[11], true);
				break;
			case 1:
				STATS::STAT_SET_INT(joaat("SP1_WEAP_PURCH_0"), uParam0->f_2244[iVar0 /*32*/][0], true);
				STATS::STAT_SET_INT(joaat("SP1_WEAP_PURCH_1"), uParam0->f_2244[iVar0 /*32*/][1], true);
				STATS::STAT_SET_INT(joaat("SP1_WEAP_ADDON_PURCH_0"), uParam0->f_2244[iVar0 /*32*/].f_5[0], true);
				STATS::STAT_SET_INT(joaat("SP1_WEAP_ADDON_PURCH_1"), uParam0->f_2244[iVar0 /*32*/].f_5[1], true);
				STATS::STAT_SET_INT(joaat("SP1_WEAP_ADDON_PURCH_2"), uParam0->f_2244[iVar0 /*32*/].f_5[2], true);
				STATS::STAT_SET_INT(joaat("SP1_WEAP_ADDON_PURCH_3"), uParam0->f_2244[iVar0 /*32*/].f_5[3], true);
				STATS::STAT_SET_INT(joaat("SP1_WEAP_ADDON_PURCH_4"), uParam0->f_2244[iVar0 /*32*/].f_5[4], true);
				STATS::STAT_SET_INT(joaat("SP1_WEAP_TINT_PURCH_0"), uParam0->f_2244[iVar0 /*32*/].f_16[0], true);
				STATS::STAT_SET_INT(joaat("SP1_WEAP_TINT_PURCH_1"), uParam0->f_2244[iVar0 /*32*/].f_16[1], true);
				STATS::STAT_SET_INT(joaat("SP1_WEAP_TINT_PURCH_2"), uParam0->f_2244[iVar0 /*32*/].f_16[2], true);
				STATS::STAT_SET_INT(joaat("SP1_WEAP_TINT_PURCH_3"), uParam0->f_2244[iVar0 /*32*/].f_16[3], true);
				STATS::STAT_SET_INT(joaat("SP1_WEAP_TINT_PURCH_4"), uParam0->f_2244[iVar0 /*32*/].f_16[4], true);
				STATS::STAT_SET_INT(joaat("SP1_WEAP_TINT_PURCH_5"), uParam0->f_2244[iVar0 /*32*/].f_16[5], true);
				STATS::STAT_SET_INT(joaat("SP1_WEAP_TINT_PURCH_6"), uParam0->f_2244[iVar0 /*32*/].f_16[6], true);
				STATS::STAT_SET_INT(joaat("SP1_WEAP_TINT_PURCH_7"), uParam0->f_2244[iVar0 /*32*/].f_16[7], true);
				STATS::STAT_SET_INT(joaat("SP1_WEAP_TINT_PURCH_8"), uParam0->f_2244[iVar0 /*32*/].f_16[8], true);
				STATS::STAT_SET_INT(joaat("SP1_WEAP_TINT_PURCH_9"), uParam0->f_2244[iVar0 /*32*/].f_16[9], true);
				STATS::STAT_SET_INT(joaat("SP1_WEAP_TINT_PURCH_10"), uParam0->f_2244[iVar0 /*32*/].f_16[10], true);
				STATS::STAT_SET_INT(joaat("SP1_WEAP_TINT_PURCH_11"), uParam0->f_2244[iVar0 /*32*/].f_16[11], true);
				break;
			case 2:
				STATS::STAT_SET_INT(joaat("SP2_WEAP_PURCH_0"), uParam0->f_2244[iVar0 /*32*/][0], true);
				STATS::STAT_SET_INT(joaat("SP2_WEAP_PURCH_1"), uParam0->f_2244[iVar0 /*32*/][1], true);
				STATS::STAT_SET_INT(joaat("SP2_WEAP_ADDON_PURCH_0"), uParam0->f_2244[iVar0 /*32*/].f_5[0], true);
				STATS::STAT_SET_INT(joaat("SP2_WEAP_ADDON_PURCH_1"), uParam0->f_2244[iVar0 /*32*/].f_5[1], true);
				STATS::STAT_SET_INT(joaat("SP2_WEAP_ADDON_PURCH_2"), uParam0->f_2244[iVar0 /*32*/].f_5[2], true);
				STATS::STAT_SET_INT(joaat("SP2_WEAP_ADDON_PURCH_3"), uParam0->f_2244[iVar0 /*32*/].f_5[3], true);
				STATS::STAT_SET_INT(joaat("SP2_WEAP_ADDON_PURCH_4"), uParam0->f_2244[iVar0 /*32*/].f_5[4], true);
				STATS::STAT_SET_INT(joaat("SP2_WEAP_TINT_PURCH_0"), uParam0->f_2244[iVar0 /*32*/].f_16[0], true);
				STATS::STAT_SET_INT(joaat("SP2_WEAP_TINT_PURCH_1"), uParam0->f_2244[iVar0 /*32*/].f_16[1], true);
				STATS::STAT_SET_INT(joaat("SP2_WEAP_TINT_PURCH_2"), uParam0->f_2244[iVar0 /*32*/].f_16[2], true);
				STATS::STAT_SET_INT(joaat("SP2_WEAP_TINT_PURCH_3"), uParam0->f_2244[iVar0 /*32*/].f_16[3], true);
				STATS::STAT_SET_INT(joaat("SP2_WEAP_TINT_PURCH_4"), uParam0->f_2244[iVar0 /*32*/].f_16[4], true);
				STATS::STAT_SET_INT(joaat("SP2_WEAP_TINT_PURCH_5"), uParam0->f_2244[iVar0 /*32*/].f_16[5], true);
				STATS::STAT_SET_INT(joaat("SP2_WEAP_TINT_PURCH_6"), uParam0->f_2244[iVar0 /*32*/].f_16[6], true);
				STATS::STAT_SET_INT(joaat("SP2_WEAP_TINT_PURCH_7"), uParam0->f_2244[iVar0 /*32*/].f_16[7], true);
				STATS::STAT_SET_INT(joaat("SP2_WEAP_TINT_PURCH_8"), uParam0->f_2244[iVar0 /*32*/].f_16[8], true);
				STATS::STAT_SET_INT(joaat("SP2_WEAP_TINT_PURCH_9"), uParam0->f_2244[iVar0 /*32*/].f_16[9], true);
				STATS::STAT_SET_INT(joaat("SP2_WEAP_TINT_PURCH_10"), uParam0->f_2244[iVar0 /*32*/].f_16[10], true);
				STATS::STAT_SET_INT(joaat("SP2_WEAP_TINT_PURCH_11"), uParam0->f_2244[iVar0 /*32*/].f_16[11], true);
				break;
		}
		iVar0++;
	}
}

void func_696(int iParam0, bool bParam1)//Position - 0x2B1F9
{
	if (CAM::IS_SCREEN_FADED_IN())
	{
		if (!CAM::IS_SCREEN_FADING_OUT())
		{
			CAM::DO_SCREEN_FADE_OUT(iParam0);
			if (bParam1)
			{
				while (!CAM::IS_SCREEN_FADED_OUT())
				{
					SYSTEM::WAIT(0);
				}
			}
		}
	}
}

void func_697(int* iParam0, int iParam1, struct<3> Param2, float fParam3)//Position - 0x2B25B
{
	__LIB_0__::func_123(iParam0);
	*iParam0 = OBJECT::CREATE_OBJECT(iParam1, Param2, true, true, false);
	ENTITY::SET_ENTITY_HEADING(*iParam0, fParam3);
}

Vector3 func_698(int iParam0, struct<3> Param1)//Position - 0x2B282
{
	var uVar0;
	Param1.f_2 = (Param1.f_2 + 0.15f);
	if (MISC::GET_GROUND_Z_FOR_3D_COORD(Param1, &uVar0, false, false))
	{
		Param1.f_2 = uVar0;
	}
	if (__LIB_0__::func_524(iParam0))
	{
		ENTITY::SET_ENTITY_COORDS(iParam0, Param1, true, false, false, true);
	}
	return Param1;
}

void func_699()//Position - 0x3344A
{
	iLocal_34 = MISC::GET_GAME_TIMER();
}

void func_700(var uParam0, bool bParam1, bool bParam2)//Position - 0x336AC
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (__LIB_0__::func_121(uParam0->f_28[iVar0]))
		{
			ENTITY::SET_ENTITY_PROOFS(uParam0->f_28[iVar0], bParam1, bParam1, bParam1, bParam1, bParam1, false, false, false);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (__LIB_0__::func_121(uParam0->f_35[iVar0]))
		{
			ENTITY::SET_ENTITY_PROOFS(uParam0->f_35[iVar0], bParam1, bParam1, bParam1, bParam1, bParam1, false, false, false);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (__LIB_0__::func_121(uParam0->f_41[iVar0]))
		{
			ENTITY::SET_ENTITY_PROOFS(uParam0->f_41[iVar0], bParam1, bParam1, bParam1, bParam1, bParam1, false, false, false);
		}
		iVar0++;
	}
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		ENTITY::SET_ENTITY_PROOFS(PLAYER::PLAYER_PED_ID(), bParam1, bParam1, bParam1, bParam1, bParam1, false, false, false);
		ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), bParam1);
		if (bParam2)
		{
			WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), true);
		}
	}
}

int func_701(int iParam0, struct<3> Param1, float fParam2, bool bParam3, bool bParam4)//Position - 0x33C0D
{
	bool bVar0;
	float fVar1;
	bVar0 = false;
	if (__LIB_0__::func_121(iParam0))
	{
		if (bParam3 == 1)
		{
			fVar1 = 0f;
			bVar0 = MISC::GET_GROUND_Z_FOR_3D_COORD(Param1, &fVar1, false, false);
			if (bVar0)
			{
				Param1.f_2 = fVar1;
			}
		}
		ENTITY::SET_ENTITY_COORDS(iParam0, Param1, true, false, false, bParam4);
		ENTITY::SET_ENTITY_HEADING(iParam0, fParam2);
		if (bParam3)
		{
			return bVar0;
		}
		return 1;
	}
	return 0;
}

int func_702(var uParam0, bool bParam1)//Position - 0x33FFA
{
	if (BitTest(uParam0->f_114, bParam1))
	{
		return 1;
	}
	if ((*uParam0)[bParam1 /*7*/] == 0)
	{
		return 1;
	}
	if (!BitTest(uParam0->f_113, bParam1))
	{
		return 0;
	}
	if (MISC::GET_GAME_TIMER() > (uParam0[bParam1 /*7*/])->f_6)
	{
		uParam0->f_117 = 1;
		return 1;
	}
	switch ((*uParam0)[bParam1 /*7*/])
	{
		case 0:
			return 1;
		case 1:
			if (!PED::HAS_ACTION_MODE_ASSET_LOADED((uParam0[bParam1 /*7*/])->f_3))
			{
				return 0;
			}
			break;
		case 2:
			if (!STREAMING::HAS_ANIM_DICT_LOADED((uParam0[bParam1 /*7*/])->f_3))
			{
				return 0;
			}
			break;
		case 3:
			if (!STREAMING::HAS_ANIM_SET_LOADED((uParam0[bParam1 /*7*/])->f_3))
			{
				return 0;
			}
			break;
		case 4:
			if (!AUDIO::REQUEST_SCRIPT_AUDIO_BANK((uParam0[bParam1 /*7*/])->f_3, false, -1))
			{
				return 0;
			}
			break;
		case 5:
			if (!AUDIO::LOAD_STREAM((uParam0[bParam1 /*7*/])->f_3, 0))
			{
				return 0;
			}
			break;
		case 6:
			if (!STREAMING::HAS_MODEL_LOADED((uParam0[bParam1 /*7*/])->f_1))
			{
				return 0;
			}
			break;
		case 7:
			if (!STREAMING::HAS_PTFX_ASSET_LOADED())
			{
				return 0;
			}
			break;
		case 8:
			if (!HUD::HAS_ADDITIONAL_TEXT_LOADED((uParam0[bParam1 /*7*/])->f_5))
			{
				return 0;
			}
			break;
		case 9:
			if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED((uParam0[bParam1 /*7*/])->f_3))
			{
				return 0;
			}
			break;
		case 10:
			if (!VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED((uParam0[bParam1 /*7*/])->f_5, (uParam0[bParam1 /*7*/])->f_3))
			{
				return 0;
			}
			break;
		case 11:
			if (!TASK::GET_IS_WAYPOINT_RECORDING_LOADED((uParam0[bParam1 /*7*/])->f_3))
			{
				return 0;
			}
			break;
		case 12:
			if (!WEAPON::HAS_WEAPON_ASSET_LOADED((uParam0[bParam1 /*7*/])->f_2))
			{
				return 0;
			}
			break;
		default:
			return 0;
	}
	MISC::SET_BIT(&(uParam0->f_114), bParam1);
	switch ((*uParam0)[bParam1 /*7*/])
	{
		case 6:
			break;
		case 7:
			break;
		case 8:
			break;
		case 12:
			break;
		default:
			break;
	}
	return 1;
}

int func_703(var uParam0, int iParam1)//Position - 0x341FB
{
	if (BitTest(uParam0->f_113, iParam1) || BitTest(uParam0->f_114, iParam1))
	{
		return 1;
	}
	switch ((*uParam0)[iParam1 /*7*/])
	{
		case 1:
			PED::REQUEST_ACTION_MODE_ASSET((uParam0[iParam1 /*7*/])->f_3);
			break;
		case 2:
			STREAMING::REQUEST_ANIM_DICT((uParam0[iParam1 /*7*/])->f_3);
			break;
		case 3:
			STREAMING::REQUEST_ANIM_SET((uParam0[iParam1 /*7*/])->f_3);
			break;
		case 4:
			AUDIO::REQUEST_SCRIPT_AUDIO_BANK((uParam0[iParam1 /*7*/])->f_3, false, -1);
			break;
		case 5:
			AUDIO::LOAD_STREAM((uParam0[iParam1 /*7*/])->f_3, (uParam0[iParam1 /*7*/])->f_4);
			break;
		case 6:
			STREAMING::REQUEST_MODEL((uParam0[iParam1 /*7*/])->f_1);
			break;
		case 7:
			STREAMING::REQUEST_PTFX_ASSET();
			break;
		case 8:
			HUD::REQUEST_ADDITIONAL_TEXT((uParam0[iParam1 /*7*/])->f_3, (uParam0[iParam1 /*7*/])->f_5);
			break;
		case 9:
			GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT((uParam0[iParam1 /*7*/])->f_3, false);
			break;
		case 10:
			VEHICLE::REQUEST_VEHICLE_RECORDING((uParam0[iParam1 /*7*/])->f_5, (uParam0[iParam1 /*7*/])->f_3);
			break;
		case 11:
			TASK::REQUEST_WAYPOINT_RECORDING((uParam0[iParam1 /*7*/])->f_3);
			break;
		case 12:
			WEAPON::REQUEST_WEAPON_ASSET((uParam0[iParam1 /*7*/])->f_2, 31, 0);
			break;
		default:
			return 0;
	}
	switch ((*uParam0)[iParam1 /*7*/])
	{
		case 6:
			break;
		case 7:
			break;
		case 8:
			break;
		case 12:
			break;
		default:
			break;
	}
	uParam0->f_117 = 0;
	(uParam0[iParam1 /*7*/])->f_6 = MISC::GET_GAME_TIMER() + 10000;
	MISC::SET_BIT(&(uParam0->f_113), iParam1);
	return 1;
}

int func_704(var uParam0, int iParam1, char* sParam2, int iParam3)//Position - 0x34AB4
{
	if (BitTest(uParam0->f_113, iParam1) || BitTest(uParam0->f_114, iParam1))
	{
		return 1;
	}
	__LIB_10__::func_693(uParam0[iParam1 /*7*/]);
	(*uParam0)[iParam1 /*7*/] = 8;
	(uParam0[iParam1 /*7*/])->f_3 = sParam2;
	(uParam0[iParam1 /*7*/])->f_5 = iParam3;
	return 1;
}

int func_705(var uParam0, int iParam1, int iParam2)//Position - 0x34AFE
{
	if (BitTest(uParam0->f_113, iParam1) || BitTest(uParam0->f_114, iParam1))
	{
		return 1;
	}
	if (iParam2 == 0)
	{
		return 0;
	}
	__LIB_10__::func_693(uParam0[iParam1 /*7*/]);
	(*uParam0)[iParam1 /*7*/] = 6;
	(uParam0[iParam1 /*7*/])->f_1 = iParam2;
	return 1;
}

int func_706(var uParam0, int iParam1, int iParam2, char* sParam3, char* sParam4)//Position - 0x34B47
{
	if (BitTest(uParam0->f_113, iParam1) || BitTest(uParam0->f_114, iParam1))
	{
		return 1;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
	{
		return 0;
	}
	switch (iParam2)
	{
		case 1:
			PED::REQUEST_ACTION_MODE_ASSET(sParam3);
			break;
		case 2:
			STREAMING::REQUEST_ANIM_DICT(sParam3);
			break;
		case 3:
			STREAMING::REQUEST_ANIM_SET(sParam3);
			break;
		case 4:
			AUDIO::REQUEST_SCRIPT_AUDIO_BANK(sParam3, false, -1);
			break;
		case 5:
			AUDIO::LOAD_STREAM(sParam3, sParam4);
			break;
		case 9:
			GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(sParam3, false);
			break;
		case 11:
			TASK::REQUEST_WAYPOINT_RECORDING(sParam3);
			break;
		default:
			return 0;
	}
	__LIB_10__::func_693(uParam0[iParam1 /*7*/]);
	(*uParam0)[iParam1 /*7*/] = iParam2;
	(uParam0[iParam1 /*7*/])->f_3 = sParam3;
	(uParam0[iParam1 /*7*/])->f_4 = sParam4;
	return 1;
}

void func_707(int iParam0, int iParam1)//Position - 0x34C19
{
	STREAMING::SET_PED_POPULATION_BUDGET(0);
	STREAMING::SET_REDUCE_PED_MODEL_BUDGET(true);
	STREAMING::SET_VEHICLE_POPULATION_BUDGET(0);
	STREAMING::SET_REDUCE_VEHICLE_MODEL_BUDGET(true);
	PLAYER::SET_DISPATCH_COPS_FOR_PLAYER(PLAYER::PLAYER_ID(), false);
	PED::SET_CREATE_RANDOM_COPS(false);
	VEHICLE::SET_ENABLE_VEHICLE_SLIPSTREAMING(true);
	*iParam0 = PED::ADD_SCENARIO_BLOCKING_AREA(-7000f, -7000f, -100f, 7000f, 7000f, 315f, false, true, true, true);
	TASK::SET_SCENARIO_TYPE_ENABLED("DRIVE", false);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(-7000f, -7000f, -100f, 7000f, 7000f, 315f, false, true);
	VEHICLE::REMOVE_VEHICLES_FROM_GENERATORS_IN_AREA(-7000f, -7000f, -100f, 7000f, 7000f, 315f, 0);
	if (__LIB_0__::func_524(PLAYER::PLAYER_PED_ID()) && iParam1 == 1)
	{
		MISC::CLEAR_AREA_OF_PEDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 500f, 0);
	}
}

void func_708(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x3B0AA
{
	if (iParam0 == 1)
	{
		STREAMING::SET_PED_POPULATION_BUDGET(1);
		PED::SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(1f);
		PED::SET_SCENARIO_PED_DENSITY_MULTIPLIER_THIS_FRAME(1f, 1f);
	}
	else
	{
		STREAMING::SET_PED_POPULATION_BUDGET(0);
		PED::SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f);
		PED::SET_SCENARIO_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f, 0f);
	}
	if (iParam1 == 1)
	{
		STREAMING::SET_VEHICLE_POPULATION_BUDGET(1);
		VEHICLE::SET_RANDOM_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(1f);
		VEHICLE::SET_PARKED_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(1f);
	}
	else
	{
		STREAMING::SET_VEHICLE_POPULATION_BUDGET(0);
		VEHICLE::SET_RANDOM_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
		VEHICLE::SET_PARKED_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	}
	if (__LIB_0__::func_524(PLAYER::PLAYER_PED_ID()))
	{
		if (iParam2 == 1)
		{
			MISC::CLEAR_AREA_OF_PEDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 100f, 0);
		}
		if (iParam3 == 1)
		{
			MISC::CLEAR_AREA_OF_VEHICLES(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 100f, false, false, false, false, false, false, 0);
		}
	}
}

int func_709(char* sParam0, int iParam1)//Position - 0x3B368
{
	int iVar0;
	iVar0 = MISC::GET_GAME_TIMER() + 7500;
	STREAMING::REQUEST_ANIM_DICT(sParam0);
	if (STREAMING::HAS_ANIM_DICT_LOADED(sParam0))
	{
		return 1;
	}
	if (iParam1 == 0)
	{
		return 1;
	}
	while (!STREAMING::HAS_ANIM_DICT_LOADED(sParam0))
	{
		SYSTEM::WAIT(0);
		if (MISC::GET_GAME_TIMER() > iVar0 && !STREAMING::HAS_ANIM_DICT_LOADED(sParam0))
		{
			return 0;
		}
	}
	return 1;
}

bool func_710(struct<3> Param0, float fParam1, int iParam2, bool bParam3)//Position - 0x3B6B2
{
	return MISC::IS_POSITION_OCCUPIED(Param0, fParam1, false, false, true, false, false, iParam2, bParam3);
}

int func_711(int iParam0, bool bParam1, bool bParam2, int iParam3)//Position - 0x3C007
{
	int iVar0;
	bool bVar1;
	iVar0 = 0;
	bVar1 = true;
	if (bVar1)
	{
		if (__LIB_0__::func_121(iParam0))
		{
			iVar0 = HUD::ADD_BLIP_FOR_ENTITY(iParam0);
			HUD::SET_BLIP_AS_FRIENDLY(iVar0, bParam2);
			HUD::SET_BLIP_PRIORITY(iVar0, iParam3);
			HUD::SET_BLIP_SCALE(iVar0, 0.7f);
			if (!bParam1)
			{
				HUD::SET_BLIP_SCALE(iVar0, 0.5f);
			}
		}
	}
	return iVar0;
}

void func_712(int iParam0, int iParam1, int iParam2)//Position - 0x3C327
{
	if (*iParam2 >= 8)
	{
		return;
	}
	ENTITY::SET_ENTITY_ALPHA(iParam0, iParam1, false);
	*iParam2++;
}

void func_713()//Position - 0x3D87E
{
	PED::SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	PED::SET_SCENARIO_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f, 0f);
	VEHICLE::SET_RANDOM_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	VEHICLE::SET_PARKED_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
}

void func_714(struct<3> Param0, float fParam1, var uParam2, var uParam3)//Position - 0x3E307
{
	struct<3> Var0;
	Var0 = { fParam1, fParam1, fParam1 };
	*uParam2 = { Param0 - Var0 };
	*uParam3 = { Param0 + Var0 };
}

int func_715(var uParam0)//Position - 0x3F01C
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(*uParam0) || MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_1))
	{
		return 0;
	}
	return 1;
}

int func_716(int iParam0)//Position - 0x3F041
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= (*iParam0 - 1))
	{
		if (!STREAMING::HAS_MODEL_LOADED((*iParam0)[iVar0]))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

void func_717(var uParam0, char* sParam1, char* sParam2, char* sParam3)//Position - 0x3F072
{
	*uParam0 = sParam1;
	uParam0->f_1 = sParam2;
	uParam0->f_2 = sParam3;
	STREAMING::REQUEST_ANIM_DICT(*uParam0);
	uParam0->f_5 = { 0f, 0f, 0f };
	uParam0->f_8 = { 0f, 0f, 0f };
	uParam0->f_3 = 1;
	uParam0->f_4 = 0;
}

void func_718(bool bParam0)//Position - 0x3F598
{
	MISC::ENABLE_DISPATCH_SERVICE(2, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(3, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(4, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(5, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(6, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(7, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(8, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(9, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(10, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(11, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(12, bParam0);
}

void func_719(var uParam0, struct<3> Param1, struct<3> Param2, float fParam3)//Position - 0x3F792
{
	*(uParam0[0 /*3*/]) = { Param1 };
	*(uParam0[1 /*3*/]) = { Param2 };
	uParam0->f_7 = fParam3;
}

void func_720(int iParam0)//Position - 0x3F8CC
{
	STREAMING::SET_REDUCE_PED_MODEL_BUDGET(false);
	STREAMING::SET_PED_POPULATION_BUDGET(3);
	STREAMING::SET_REDUCE_VEHICLE_MODEL_BUDGET(false);
	STREAMING::SET_VEHICLE_POPULATION_BUDGET(3);
	PLAYER::SET_DISPATCH_COPS_FOR_PLAYER(PLAYER::PLAYER_ID(), true);
	PED::SET_CREATE_RANDOM_COPS(true);
	VEHICLE::SET_ENABLE_VEHICLE_SLIPSTREAMING(false);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(iParam0, false);
	TASK::SET_SCENARIO_TYPE_ENABLED("DRIVE", true);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(-7000f, -7000f, -100f, 7000f, 7000f, 315f, true, true);
}

int func_721(var uParam0, bool bParam1)//Position - 0x3F955
{
	if (!BitTest(uParam0->f_114, bParam1) || (*uParam0)[bParam1 /*7*/] == 0)
	{
		return 1;
	}
	switch ((*uParam0)[bParam1 /*7*/])
	{
		case 1:
			if (PED::HAS_ACTION_MODE_ASSET_LOADED((uParam0[bParam1 /*7*/])->f_3))
			{
				PED::REMOVE_ACTION_MODE_ASSET((uParam0[bParam1 /*7*/])->f_3);
			}
			break;
		case 2:
			if (STREAMING::HAS_ANIM_DICT_LOADED((uParam0[bParam1 /*7*/])->f_3))
			{
				STREAMING::REMOVE_ANIM_DICT((uParam0[bParam1 /*7*/])->f_3);
			}
			break;
		case 3:
			if (STREAMING::HAS_ANIM_SET_LOADED((uParam0[bParam1 /*7*/])->f_3))
			{
				STREAMING::REMOVE_ANIM_SET((uParam0[bParam1 /*7*/])->f_3);
			}
			break;
		case 4:
			AUDIO::RELEASE_SCRIPT_AUDIO_BANK();
			break;
		case 5:
			break;
		case 6:
			if (STREAMING::HAS_MODEL_LOADED((uParam0[bParam1 /*7*/])->f_1))
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED((uParam0[bParam1 /*7*/])->f_1);
			}
			break;
		case 7:
			if (STREAMING::HAS_PTFX_ASSET_LOADED())
			{
				STREAMING::REMOVE_PTFX_ASSET();
			}
			break;
		case 8:
			if (HUD::HAS_ADDITIONAL_TEXT_LOADED((uParam0[bParam1 /*7*/])->f_5))
			{
				HUD::CLEAR_ADDITIONAL_TEXT((uParam0[bParam1 /*7*/])->f_5, false);
			}
			break;
		case 9:
			if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED((uParam0[bParam1 /*7*/])->f_3))
			{
				GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED((uParam0[bParam1 /*7*/])->f_3);
			}
			break;
		case 10:
			if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED((uParam0[bParam1 /*7*/])->f_5, (uParam0[bParam1 /*7*/])->f_3))
			{
				VEHICLE::REMOVE_VEHICLE_RECORDING((uParam0[bParam1 /*7*/])->f_5, (uParam0[bParam1 /*7*/])->f_3);
			}
			break;
		case 11:
			if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED((uParam0[bParam1 /*7*/])->f_3))
			{
				TASK::REMOVE_WAYPOINT_RECORDING((uParam0[bParam1 /*7*/])->f_3);
			}
			break;
		case 12:
			if (WEAPON::HAS_WEAPON_ASSET_LOADED((uParam0[bParam1 /*7*/])->f_2))
			{
				WEAPON::REMOVE_WEAPON_ASSET((uParam0[bParam1 /*7*/])->f_2);
			}
			break;
		default:
			return 0;
	}
	switch ((*uParam0)[bParam1 /*7*/])
	{
		case 6:
			break;
		case 7:
			break;
		case 8:
			break;
		case 12:
			break;
		default:
			break;
	}
	__LIB_10__::func_693(uParam0[bParam1 /*7*/]);
	return 1;
}

bool func_722()//Position - 0x27EEC
{
	return BitTest(Global_2815059.f_836, 2);
}

int func_723()//Position - 0x2B008
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Local_35.f_0)
	{
		if ((Local_35[iVar0 /*4*/] == 0 && Local_35[iVar0 /*4*/].f_1 == 0) && Local_35[iVar0 /*4*/].f_2 == 0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_724(int iParam0, int iParam1)//Position - 0x2B06D
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Local_35.f_0)
	{
		if (Local_35[iVar0 /*4*/].f_1 == iParam0 && Local_35[iVar0 /*4*/].f_2 == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_725(int iParam0, int iParam1, float fParam2)//Position - 0x2B0D4
{
	struct<3> Var0;
	struct<3> Var1;
	Var0 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0) };
	Var1 = { ENTITY::GET_ENTITY_COORDS(iParam1, true) - ENTITY::GET_ENTITY_COORDS(iParam0, true) };
	return (((Var0.f_0 * Var1.f_0) + (Var0.f_1 * Var1.f_1)) / SYSTEM::VDIST(Var1, 0f, 0f, 0f)) > SYSTEM::COS(fParam2);
}

int func_726()//Position - 0x22B65
{
	if ((__LIB_0__::func_3() == -1 || __LIB_0__::func_3() == 999) && !func_189() == 0)
	{
		return 1;
	}
	return 0;
}

int func_727(int iParam0, bool bParam1, int iParam2)//Position - 0x26CE6
{
	int iVar0;
	iVar0 = 0;
	if (__LIB_0__::func_121(iParam0))
	{
		iVar0 = HUD::ADD_BLIP_FOR_ENTITY(iParam0);
		HUD::SET_BLIP_AS_FRIENDLY(iVar0, bParam1);
		HUD::SET_BLIP_PRIORITY(iVar0, iParam2);
		HUD::SET_BLIP_SCALE(iVar0, 1f);
	}
	return iVar0;
}

void func_728(var uParam0, int iParam1)//Position - 0x36EAC
{
	Global_100441.f_22[iParam1] = uParam0;
}

void func_729(var uParam0, var uParam1)//Position - 0x36EC0
{
	*uParam0 = *uParam1;
	*uParam1 = 0;
}

void func_730(var uParam0, bool bParam1)//Position - 0x38012
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		if (bParam1)
		{
			__LIB_0__::func_123(uParam0[iVar0]);
		}
		else
		{
			__LIB_0__::func_122(uParam0[iVar0], 0);
		}
		iVar0++;
	}
}

void func_731(var uParam0)//Position - 0x8AD
{
	if ((MISC::GET_PROFILE_SETTING(203) != 0 && *uParam0 != 1) && AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		*uParam0 = 1;
	}
}

void func_732()//Position - 0x37616
{
	if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
	{
		if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
		{
			PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, false);
			PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
		}
	}
}

Vector3 func_733(char* sParam0, int iParam1)//Position - 0x389A5
{
	struct<3> Var0;
	Var0.f_2 = sParam0;
	Var0.f_0 = iParam1;
	Var0.f_1 = 0;
	return Var0;
}

void func_734(int iParam0, var uParam1)//Position - 0x38AD7
{
	*iParam0 = *uParam1;
	*uParam1 = 0;
}

bool func_735(int iParam0, int iParam1, int iParam2)//Position - 0x9369
{
	return __LIB_10__::func_25(iParam0, iParam1, iParam2) != -1;
}

bool func_736(int iParam0, int iParam1)//Position - 0xA8D35
{
	return __LIB_10__::func_62(&Global_1585237, iParam0, &Global_1585268, iParam1);
}

void func_737(var uParam0)//Position - 0xB1E12
{
	if (Global_2815059.f_5140)
	{
		*uParam0 = { Global_2815059.f_5141 };
	}
	__LIB_10__::func_64(joaat("MPPLY_LAST_TIME_THRESH_CROSS"), *uParam0);
}

int func_738(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4)//Position - 0xB23B4
{
	int iVar0;
	int iVar1;
	if (!Global_262145.f_20189 /* Tunable: -1205783322 */)
	{
		return 0;
	}
	if (Global_262145.f_20195 /* Tunable: 110328217 */)
	{
		iVar1 = MISC::GET_HASH_KEY(&uParam0);
		iVar0 = 0;
		while (iVar0 < 5)
		{
			if (Global_1585126[iVar0] == iVar1)
			{
				return 1;
			}
			iVar0++;
		}
		if (bParam4)
		{
			if (__LIB_10__::func_68(&Global_1585132, iVar1))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_739(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4)//Position - 0xB2C54
{
	int iVar0;
	int iVar1;
	if (!Global_262145.f_20189 /* Tunable: -1205783322 */)
	{
		return 0;
	}
	if (Global_262145.f_20193 /* Tunable: -1015620074 */)
	{
		iVar1 = MISC::GET_HASH_KEY(&uParam0);
		iVar0 = 0;
		while (iVar0 < 5)
		{
			if (Global_1585098[iVar0] == iVar1)
			{
				return 1;
			}
			iVar0++;
		}
		if (bParam4)
		{
			if (__LIB_10__::func_68(&Global_1585104, iVar1))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_740(struct<4> Param0, int iParam1)//Position - 0xB2D68
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = Global_1585857[iParam1 /*142*/].f_141;
	iVar1 = 2147483647;
	iVar2 = 0;
	while (iVar2 < 363)
	{
		if (iVar2 != iParam1)
		{
			if (Global_1585857[iVar2 /*142*/].f_66 != 0)
			{
				if (__LIB_10__::func_63(Param0, Global_1585857[iVar2 /*142*/].f_1))
				{
					if (Global_1585857[iVar2 /*142*/].f_141 < iVar1)
					{
						iVar1 = Global_1585857[iVar2 /*142*/].f_141;
					}
				}
			}
		}
		iVar2++;
	}
	if (iVar0 > iVar1)
	{
		return 0;
	}
	return 1;
}

int func_741(int iParam0)//Position - 0x10299B
{
	int iVar0;
	iVar0 = __LIB_0__::func_228(__LIB_9__::func_916(iParam0), -1);
	if (Global_2789625.f_9[iVar0] - 1) != __LIB_0__::func_228(__LIB_10__::func_132(iParam0), -1)
	{
		return 0;
	}
	return 1;
}

int func_742(int iParam0)//Position - 0x1059CD
{
	switch (iParam0)
	{
		case joaat("sultanrs"):
		case joaat("banshee2"):
		case joaat("zr350"):
		case joaat("calico"):
		case joaat("jester4"):
		case joaat("warrener2"):
		case joaat("remus"):
		case joaat("vectre"):
		case joaat("rt3000"):
		case joaat("sultan3"):
		case joaat("tailgater2"):
		case joaat("dominator8"):
		case joaat("futo2"):
		case joaat("euros"):
		case joaat("growler"):
		case joaat("previon"):
		case joaat("kanjosj"):
		case joaat("postlude"):
		case joaat("sentinel4"):
			return 1;
			break;
	}
	if (__LIB_10__::func_109())
	{
		return 1;
	}
	return 0;
}

int func_743(int iParam0)//Position - 0x105DFD
{
	int iVar0;
	iVar0 = __LIB_0__::func_228(__LIB_9__::func_918(iParam0), -1);
	switch (iVar0)
	{
		case 18:
			if (!VEHICLE::IS_TOGGLE_MOD_ON(Local_124.f_406, 18))
			{
				return 0;
			}
			if (Global_2789625.f_9[iVar0] == 0)
			{
				return 0;
			}
			break;
		case 11:
			if (Global_2789625.f_9[iVar0] != (__LIB_0__::func_228(__LIB_10__::func_148(iParam0), -1) - 1))
			{
				return 0;
			}
			break;
		default:
			if (Global_2789625.f_9[iVar0] != __LIB_0__::func_228(__LIB_10__::func_148(iParam0), -1))
			{
				return 0;
			}
			break;
	}
	return 1;
}

int func_744()//Position - 0x107731
{
	if ((Local_124.f_676 - 1) < 0 || (Local_124.f_676 - 1) >= 2)
	{
		return 0;
	}
	if (Global_2789412[(Local_124.f_676 - 1) /*106*/].f_5 != __LIB_10__::func_128((__LIB_0__::func_228(func_1857((Local_124.f_676 - 1)), -1) - 1)))
	{
		return 0;
	}
	return 1;
}

int func_745(int iParam0)//Position - 0x10788D
{
	int iVar0;
	if ((Local_124.f_676 - 1) < 0 || (Local_124.f_676 - 1) >= 2)
	{
		return 0;
	}
	iVar0 = __LIB_0__::func_228(__LIB_9__::func_921((Local_124.f_676 - 1), iParam0), -1);
	if (Global_2789412[(Local_124.f_676 - 1) /*106*/].f_9[iVar0] - 1) != __LIB_0__::func_228(__LIB_10__::func_152((Local_124.f_676 - 1), iParam0), -1)
	{
		return 0;
	}
	return 1;
}

int func_746(int iParam0)//Position - 0x107A28
{
	int iVar0;
	if ((Local_124.f_676 - 1) < 0 || (Local_124.f_676 - 1) >= 2)
	{
		return 0;
	}
	iVar0 = __LIB_0__::func_228(__LIB_9__::func_922((Local_124.f_676 - 1), iParam0), -1);
	switch (iVar0)
	{
		case 18:
			if (!VEHICLE::IS_TOGGLE_MOD_ON(Local_124.f_406, 18))
			{
				return 0;
			}
			if (Global_2789412[(Local_124.f_676 - 1) /*106*/].f_9[iVar0] == 0)
			{
				return 0;
			}
			break;
		case 11:
			if (Global_2789412[(Local_124.f_676 - 1) /*106*/].f_9[iVar0] != (__LIB_0__::func_228(__LIB_10__::func_153((Local_124.f_676 - 1), iParam0), -1) - 1))
			{
				return 0;
			}
			break;
		default:
			if (Global_2789412[(Local_124.f_676 - 1) /*106*/].f_9[iVar0] != __LIB_0__::func_228(__LIB_10__::func_153((Local_124.f_676 - 1), iParam0), -1))
			{
				return 0;
			}
			break;
	}
	return 1;
}

int func_747()//Position - 0x107BD0
{
	if ((Local_124.f_676 - 1) < 0 || (Local_124.f_676 - 1) >= 2)
	{
		return 0;
	}
	if (Global_2789412[(Local_124.f_676 - 1) /*106*/].f_69 != __LIB_0__::func_228(__LIB_9__::func_920((Local_124.f_676 - 1)), -1))
	{
		return 0;
	}
	if (Global_2789412[(Local_124.f_676 - 1) /*106*/].f_9[23] - 1) != __LIB_0__::func_228(__LIB_10__::func_151((Local_124.f_676 - 1)), -1)
	{
		return 0;
	}
	return 1;
}

int func_748()//Position - 0x10D752
{
	int iVar0;
	int iVar1;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 123)
	{
		if (__LIB_10__::func_31(iVar0))
		{
			iVar1++;
			if (iVar1 > 1)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_749()//Position - 0x110097
{
	if (Local_124.f_443 == 61 && __LIB_10__::func_103(ENTITY::GET_ENTITY_MODEL(Local_124.f_406)))
	{
		return 1;
	}
	return 0;
}

int func_750(int iParam0, int iParam1, int iParam2)//Position - 0x12FE75
{
	int iVar0;
	switch (iParam0)
	{
		case joaat("tailgater2"):
		case joaat("euros"):
		case joaat("rt3000"):
		case joaat("zr350"):
		case joaat("warrener2"):
		case joaat("calico"):
		case joaat("remus"):
		case joaat("jester4"):
		case joaat("futo2"):
		case joaat("dominator8"):
			if (iParam1 == 48)
			{
				iVar0 = __LIB_10__::func_188(iParam0, iParam2);
				if (iVar0 != 0)
				{
					if (!__LIB_0__::func_137(__LIB_4__::func_995(iVar0), -1))
					{
						return 1;
					}
				}
			}
			break;
	}
	return 0;
}

int func_751(int iParam0, int iParam1, var uParam2)//Position - 0x133BD1
{
	int iVar0;
	if (iParam0 == 12)
	{
		iVar0 = __LIB_10__::func_198(iParam0, iParam1);
		if (iVar0 != 0)
		{
			if (!__LIB_0__::func_137(__LIB_4__::func_995(iVar0), -1))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_752(int iParam0)//Position - 0x138F3F
{
	if (iParam0 == -1)
	{
		return 0;
	}
	if (__LIB_10__::func_31(iParam0))
	{
		Local_124.f_116.f_1 = iParam0;
		__LIB_2__::func_562(Local_124.f_116.f_1, 1, 1);
		Local_124.f_452[Local_124.f_446] = iParam0;
		Local_124.f_460[Local_124.f_446] = __LIB_3__::func_979();
		return 1;
	}
	return 0;
}

int func_753(int iParam0, bool bParam1)//Position - 0x139F1A
{
	int iVar0;
	if (__LIB_10__::func_186(ENTITY::GET_ENTITY_MODEL(Local_124.f_406)))
	{
		return 0;
	}
	iVar0 = 0;
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() || bLocal_496)
	{
		return 0;
	}
	if (__LIB_10__::func_185(ENTITY::GET_ENTITY_MODEL(Local_124.f_406)))
	{
		return 0;
	}
	if (bParam1 == 0)
	{
		iVar0 = 10;
		if (iParam0 == 2)
		{
			return 0;
		}
	}
	if (iParam0 == 1)
	{
		return BitTest(uLocal_497, iVar0);
	}
	if (iParam0 == 0)
	{
		return BitTest(uLocal_497, iVar0 + 1);
	}
	if (iParam0 == 5)
	{
		return BitTest(uLocal_497, iVar0 + 3);
	}
	if (iParam0 == 4)
	{
		return BitTest(uLocal_497, iVar0 + 5);
	}
	if (iParam0 == 3)
	{
		return BitTest(uLocal_497, iVar0 + 4);
	}
	if (iParam0 == 2)
	{
		return BitTest(uLocal_497, iVar0 + 2);
	}
	return 0;
}

int func_754(int iParam0)//Position - 0x13B687
{
	switch (__LIB_10__::func_228(iParam0))
	{
		case 1:
			return Global_262145.f_31121 /* Tunable: -1005682561 */;
		case 2:
			return Global_262145.f_31122 /* Tunable: 350142857 */;
		case 3:
			return Global_262145.f_31123 /* Tunable: -1478347612 */;
		default:
	}
	return 0;
}

int func_755(int iParam0)//Position - 0x13B6CB
{
	switch (__LIB_10__::func_228(iParam0))
	{
		case 1:
			return Global_262145.f_31117 /* Tunable: 611336286 */;
		case 2:
			return Global_262145.f_31118 /* Tunable: 834538446 */;
		case 3:
			return Global_262145.f_31119 /* Tunable: 455266744 */;
		default:
	}
	return 0;
}

int func_756(int iParam0)//Position - 0x13B8CC
{
	switch (__LIB_10__::func_228(iParam0))
	{
		case 1:
			return 1;
		case 2:
			switch (iParam0)
			{
				case joaat("sentinel"):
					return 1;
				case joaat("dominator3"):
					return 0;
				case joaat("vamos"):
					return 1;
				case joaat("hermes"):
					return 1;
				case joaat("coquette3"):
					return 0;
				case joaat("riata"):
					return 1;
				case joaat("everon"):
					return 0;
				case joaat("glendale2"):
					return 1;
				case joaat("schafter3"):
					return 0;
				case joaat("warrener"):
					return 1;
				case joaat("primo2"):
					return 1;
				case joaat("seminole2"):
					return 1;
				case joaat("rebla"):
					return 0;
				case joaat("swinger"):
					return 0;
				case joaat("flashgt"):
					return 1;
				case joaat("raiden"):
					return 0;
				case joaat("surano"):
					return 0;
				case joaat("penumbra2"):
					return 1;
				case joaat("vstr"):
					return 0;
				case joaat("jugular"):
					return 0;
				default:
			}
			break;
		case 3:
			return 0;
	}
	return -1;
}

int func_757(int iParam0)//Position - 0x142831
{
	if (__LIB_10__::func_136())
	{
		return 1;
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		switch (ENTITY::GET_ENTITY_MODEL(iParam0))
		{
			case joaat("peyote3"):
			case joaat("glendale2"):
				return 1;
			}
		default:
	}
	return 0;
}

int func_758(int iParam0)//Position - 0x14286A
{
	if (__LIB_10__::func_136())
	{
		return 1;
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		switch (ENTITY::GET_ENTITY_MODEL(iParam0))
		{
			case joaat("peyote3"):
			case joaat("manana2"):
			case joaat("glendale2"):
			case joaat("yosemite3"):
			case joaat("calico"):
			case joaat("comet6"):
			case joaat("cypher"):
			case joaat("dominator7"):
			case joaat("jester4"):
			case joaat("remus"):
			case joaat("vectre"):
			case joaat("zr350"):
			case joaat("warrener2"):
			case joaat("rt3000"):
			case joaat("sultan3"):
			case joaat("previon"):
			case joaat("tailgater2"):
			case joaat("euros"):
			case joaat("futo2"):
				return 1;
			}
		default:
	}
	return 0;
}

bool func_759(int iParam0)//Position - 0x143209
{
	if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(iParam0)))
	{
		return (__LIB_10__::func_102(iParam0, 23) != -1 && __LIB_10__::func_102(iParam0, 24) != -1);
	}
	return (VEHICLE::IS_THIS_MODEL_A_CAR(ENTITY::GET_ENTITY_MODEL(iParam0)) && __LIB_10__::func_102(iParam0, 23) != -1);
}

int func_760(int iParam0, int iParam1)//Position - 0x143426
{
	char* sVar0;
	__LIB_10__::func_131(&sVar0, iParam1, iParam0, 0);
	if (ENTITY::GET_ENTITY_MODEL(Local_124.f_406) == joaat("prairie"))
	{
		if (!Global_262145.f_24225 /* Tunable: ENABLE_PRAIRIE_MODS */ || !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			switch (Local_124.f_443)
			{
				case 46:
					if (iParam0 > 2)
					{
						return 0;
					}
					break;
				case 26:
				case 8:
				case 12:
				case 44:
					if (iParam0 > 1)
					{
						return 0;
					}
					break;
			}
			switch (iParam1)
			{
				case 0:
					if (iParam0 > 2)
					{
						return 0;
					}
					break;
				case 7:
				case 1:
				case 2:
				case 4:
				case 3:
					if (iParam0 > 1)
					{
						return 0;
					}
					break;
				}
			}
	}
	switch (iParam1)
	{
		case 0:
			if ((((MISC::ARE_STRINGS_EQUAL(&sVar0, "HSW_WING1" /* GXT: HSW Street Wing */) || MISC::ARE_STRINGS_EQUAL(&sVar0, "HSW_WING2" /* GXT: HSW Race Wing */)) || MISC::ARE_STRINGS_EQUAL(&sVar0, "VIG_HSWWING_15" /* GXT: HSW F.C. Aftermarket Spoiler */)) || MISC::ARE_STRINGS_EQUAL(&sVar0, "VIG_HSWWING_16" /* GXT: HSW F.C. Low Level GT Wing */)) || MISC::ARE_STRINGS_EQUAL(&sVar0, "VIG_HSWWING_17" /* GXT: HSW F.C. High Level GT Wing */))
			{
				if ((!__LIB_9__::func_911(Local_124.f_406) || !__LIB_10__::func_12()) || func_203(Local_124.f_406, iParam1, iParam0))
				{
					return 0;
				}
			}
			break;
	}
	return 1;
}

int func_761(var uParam0, int iParam1, int iParam2)//Position - 0x14B65C
{
	int iVar0;
	if (__LIB_10__::func_186(ENTITY::GET_ENTITY_MODEL(uParam0->f_406)))
	{
		return 1;
	}
	iVar0 = iParam1;
	if (iVar0 < 0 || iVar0 >= 13)
	{
		return 1;
	}
	if (iParam2 < 0 || (iParam2 > 31 && iParam1 != 6))
	{
		return 1;
	}
	if (iParam1 == 6)
	{
		if (iParam2 > 31 && iParam2 < 64)
		{
			iParam2 = (iParam2 - 32);
			iVar0 = 8;
		}
		else if (iParam2 >= 64 && iParam2 < 75)
		{
			iParam2 = (iParam2 - 64);
			iVar0 = 9;
		}
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return BitTest(uParam0->f_636[iVar0], iParam2);
	}
	return 1;
}

int func_762(int iParam0, int iParam1, int iParam2, bool bParam3, var uParam4)//Position - 0x150AC9
{
	int iVar0;
	int iVar1;
	char* sVar2;
	int iVar3;
	int iVar4;
	iVar0 = 0;
	while (__LIB_10__::func_84(iVar0, &sVar2, &iVar1, &iVar3, &iVar4))
	{
		if ((iParam0 == iVar3 && (!bParam3 || iParam1 == iVar4)) && ((iParam2 == iVar1 || iParam2 == -1) || iParam2 == 255))
		{
			*uParam4 = iVar0;
			return 1;
		}
		iVar0++;
	}
	iParam0 = -1;
	iParam1 = -1;
	*uParam4 = -1;
	return 0;
}

void func_763()//Position - 0x15D256
{
	if (Local_124.f_116.f_1 == -1)
	{
		return;
	}
	__LIB_10__::func_121(1);
	switch (Local_124.f_116.f_1)
	{
		case 0:
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
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
			if (Local_470.f_9[8] == Local_124.f_116.f_1)
			{
				__LIB_10__::func_121(0);
			}
			break;
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
			if (Local_470.f_9[9] == (Local_124.f_116.f_1 - 21))
			{
				__LIB_10__::func_121(0);
			}
			break;
	}
	iLocal_426 = 1;
}

int func_764(int iParam0, int iParam1, int iParam2)//Position - 0x161162
{
	int iVar0;
	iVar0 = __LIB_10__::func_287(Local_124.f_406, iParam0);
	return ((iParam1 % iVar0) + (iParam2 * iVar0));
}

void func_765()//Position - 0x163200
{
	int iVar0;
	var uVar1;
	VEHICLE::GET_VEHICLE_EXTRA_COLOURS(Local_124.f_406, &iVar0, &uVar1);
	switch (ENTITY::GET_ENTITY_MODEL(Local_124.f_406))
	{
		case joaat("dominator4"):
		case joaat("dominator6"):
		case joaat("impaler2"):
		case joaat("issi4"):
		case joaat("issi6"):
		case joaat("slamvan4"):
		case joaat("slamvan6"):
		case joaat("monster3"):
		case joaat("monster5"):
		case joaat("bruiser"):
		case joaat("bruiser3"):
			VEHICLE::SET_VEHICLE_EXTRA_COLOURS(Local_124.f_406, iVar0, 160);
			break;
		case joaat("impaler4"):
			VEHICLE::SET_VEHICLE_EXTRA_COLOURS(Local_124.f_406, iVar0, 156);
			break;
		case joaat("deathbike"):
			VEHICLE::SET_VEHICLE_EXTRA_COLOURS(Local_124.f_406, iVar0, 145);
			break;
		case joaat("deathbike2"):
			VEHICLE::SET_VEHICLE_EXTRA_COLOURS(Local_124.f_406, iVar0, 160);
			break;
		case joaat("deathbike3"):
			VEHICLE::SET_VEHICLE_EXTRA_COLOURS(Local_124.f_406, iVar0, 160);
			break;
		default:
			if (__LIB_10__::func_262(Local_124.f_406) && !VEHICLE::IS_VEHICLE_MODEL(Local_124.f_406, joaat("deathbike2")))
			{
				VEHICLE::SET_VEHICLE_EXTRA_COLOURS(Local_124.f_406, iVar0, 160);
			}
			break;
	}
}

int func_766(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x16333C
{
	int iVar0;
	iVar0 = __LIB_10__::func_287(Local_124.f_406, iParam0);
	if (iParam2 > iVar0 && iParam3 != 0)
	{
		if ((iParam2 % iVar0) == (iParam3 % iVar0) && iParam0 == iParam1)
		{
			return 1;
		}
	}
	if (iParam2 == iParam3 && iParam0 == iParam1)
	{
		return 1;
	}
	return 0;
}

int func_767(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x163396
{
	int iVar0;
	if (iParam0 == 0)
	{
		return 1;
	}
	switch (iParam1)
	{
		case 10:
			switch (iParam2)
			{
				case 0:
					if (__LIB_1__::func_926(ENTITY::GET_ENTITY_MODEL(Local_124.f_406)) || __LIB_10__::func_221())
					{
						switch (iParam0)
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
							case 12:
							case 13:
							case 14:
							case 15:
							case 16:
							case 17:
							case 18:
							case 19:
							case 20:
								return 1;
								break;
							default:
								return 0;
								break;
						}
					}
					else
					{
						switch (iParam0)
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
								return 1;
								break;
							default:
								return 0;
								break;
							}
					}
					break;
				case 1:
					return 0;
					break;
			}
			break;
		case 8:
		case 9:
		case 11:
		case 12:
			switch (iParam2)
			{
				case 0:
					switch (iParam0)
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
							return 1;
						case 31:
							if (iParam1 == 11 && __LIB_10__::func_221())
							{
								return 0;
							}
							if (iParam1 == 12)
							{
								return 0;
							}
							return 1;
							break;
						default:
							return 0;
							break;
					}
					break;
				case 1:
					return 0;
					break;
			}
			break;
	}
	iVar0 = __LIB_10__::func_261(iParam1);
	switch (iParam2)
	{
		case 0:
			if (ENTITY::DOES_ENTITY_EXIST(Local_124.f_406))
			{
				if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(Local_124.f_406)))
				{
					if (iParam0 <= 13 || ((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && iParam0 >= 27) && iParam0 <= 49))
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
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
					{
						if (iParam1 == 4)
						{
							if (iParam0 > 10 && iParam0 < 21)
							{
								return 0;
							}
							else
							{
								return 1;
							}
						}
					}
					return iParam0 <= iVar0;
				}
			}
			break;
		case 1:
			if (ENTITY::DOES_ENTITY_EXIST(Local_124.f_406))
			{
				if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(Local_124.f_406)))
				{
					if ((iParam0 > 13 && iParam0 < 27) || (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && iParam0 > 49))
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
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
					{
						if (iParam1 == 4)
						{
							if (iParam0 > 20 || iParam0 < 11)
							{
								return 0;
							}
							else
							{
								return 1;
							}
						}
					}
					return iParam0 > iVar0;
				}
			}
			break;
	}
	return 1;
}

void func_768()//Position - 0x164BAB
{
	if (Local_124.f_116.f_1 == -1)
	{
		return;
	}
	__LIB_10__::func_121(1);
	switch (Local_124.f_116.f_1)
	{
		case 0:
			if (Local_470.f_9[18] == 0)
			{
				__LIB_10__::func_121(0);
			}
			break;
		case 1:
			if (Local_470.f_9[18] == 1)
			{
				__LIB_10__::func_121(0);
			}
			break;
	}
	iLocal_426 = 1;
}

int func_769(int iParam0, int iParam1)//Position - 0x1652C3
{
	if (__LIB_4__::func_566(ENTITY::GET_ENTITY_MODEL(Local_124.f_406)) && !func_203(Local_124.f_406, iParam0, iParam1))
	{
		if (!__LIB_10__::func_12())
		{
			return 0;
		}
		if (!__LIB_9__::func_911(Local_124.f_406))
		{
			return 0;
		}
	}
	return 1;
}

int func_770(int iParam0)//Position - 0x165977
{
	int iVar0;
	iVar0 = ENTITY::GET_ENTITY_MODEL(Local_124.f_406);
	if (__LIB_4__::func_566(iVar0) && !func_203(Local_124.f_406, 15, iParam0))
	{
		if (!__LIB_10__::func_12())
		{
			switch (iVar0)
			{
				case joaat("deveste"):
					if (iParam0 < 2)
					{
						return 1;
					}
					break;
				case joaat("brioso"):
				case joaat("ignus2"):
				case joaat("astron2"):
					if (iParam0 < 4)
					{
						return 1;
					}
					break;
				default:
					if (iParam0 < 5)
					{
						return 1;
					}
					break;
			}
			return 0;
		}
		if (!__LIB_9__::func_911(Local_124.f_406))
		{
			switch (iVar0)
			{
				case joaat("deveste"):
					if (iParam0 < 2)
					{
						return 1;
					}
					break;
				case joaat("brioso"):
				case joaat("ignus2"):
				case joaat("astron2"):
					if (iParam0 < 4)
					{
						return 1;
					}
					break;
				default:
					if (iParam0 < 5)
					{
						return 1;
					}
					break;
			}
			return 0;
		}
	}
	return 1;
}

int func_771(int iParam0)//Position - 0x1686C4
{
	if (__LIB_10__::func_66(iParam0))
	{
		return 366;
	}
	return 365;
}

void func_772()//Position - 0x175BF4
{
	int iVar0;
	switch (Local_124.f_443)
	{
		case 82:
			if (__LIB_1__::func_323(ENTITY::GET_ENTITY_MODEL(Local_124.f_406)))
			{
				iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
				if (iVar0 == 0)
				{
					__LIB_10__::func_94("ARENAMECH_ADDWEAPON", "SPEECH_PARAMS_FORCE");
				}
				else
				{
					__LIB_10__::func_94("ARENAMECH_GUNS", "SPEECH_PARAMS_FORCE");
				}
				iLocal_532 = -1;
			}
			else
			{
				__LIB_10__::func_94("ARENAMECH_NEWVISUAL", "SPEECH_PARAMS_FORCE");
				iLocal_532 = -1;
			}
			break;
		case 79:
			if (__LIB_1__::func_323(ENTITY::GET_ENTITY_MODEL(Local_124.f_406)))
			{
				iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
				if (iVar0 == 0)
				{
					__LIB_10__::func_94("ARENAMECH_SCOOP", "SPEECH_PARAMS_FORCE");
				}
				else
				{
					__LIB_10__::func_94("ARENAMECH_RAMBARS", "SPEECH_PARAMS_FORCE");
				}
				iLocal_532 = -1;
			}
			else
			{
				__LIB_10__::func_94("ARENAMECH_NEWVISUAL", "SPEECH_PARAMS_FORCE");
				iLocal_532 = -1;
			}
			break;
		case 81:
			if (__LIB_1__::func_323(ENTITY::GET_ENTITY_MODEL(Local_124.f_406)))
			{
				__LIB_10__::func_94("ARENAMECH_BLADES", "SPEECH_PARAMS_FORCE");
				iLocal_532 = -1;
			}
			else
			{
				__LIB_10__::func_94("ARENAMECH_NEWVISUAL", "SPEECH_PARAMS_FORCE");
				iLocal_532 = -1;
			}
			break;
		case 80:
			if (__LIB_1__::func_323(ENTITY::GET_ENTITY_MODEL(Local_124.f_406)))
			{
				__LIB_10__::func_94("ARENAMECH_SPIKES", "SPEECH_PARAMS_FORCE");
				iLocal_532 = -1;
			}
			else
			{
				__LIB_10__::func_94("ARENAMECH_NEWVISUAL", "SPEECH_PARAMS_FORCE");
				iLocal_532 = -1;
			}
			break;
		case 77:
			if (__LIB_1__::func_323(ENTITY::GET_ENTITY_MODEL(Local_124.f_406)))
			{
				if (Local_124.f_116.f_1 >= 1 && Local_124.f_116.f_1 < 4)
				{
					__LIB_10__::func_94("ARENAMECH_BOOST", "SPEECH_PARAMS_FORCE");
				}
				else if (Local_124.f_116.f_1 == 4)
				{
					__LIB_10__::func_94("ARENAMECH_SHUNT", "SPEECH_PARAMS_FORCE");
				}
				iLocal_532 = -1;
			}
			break;
		case 78:
			if ((__LIB_1__::func_323(ENTITY::GET_ENTITY_MODEL(Local_124.f_406)) || ENTITY::GET_ENTITY_MODEL(Local_124.f_406) == joaat("rcbandito")) || ENTITY::GET_ENTITY_MODEL(Local_124.f_406) == joaat("minitank"))
			{
				__LIB_10__::func_94("ARENAMECH_JUMP", "SPEECH_PARAMS_FORCE");
				iLocal_532 = -1;
			}
			else
			{
				__LIB_10__::func_94("ARENAMECH_NEWVISUAL", "SPEECH_PARAMS_FORCE");
				iLocal_532 = -1;
			}
			break;
		default:
			__LIB_10__::func_94("ARENAMECH_NEWVISUAL", "SPEECH_PARAMS_FORCE");
			iLocal_532 = -1;
			break;
	}
}

bool func_773(int iParam0, var uParam1, var uParam2)//Position - 0x189DC4
{
	var uVar0;
	char* sVar1;
	__LIB_10__::func_84(iParam0, &sVar1, &uVar0, uParam1, uParam2);
	return (*uParam1 != -1 && *uParam2 != -1);
}

int func_774(int iParam0, bool bParam1)//Position - 0x18BD03
{
	int iVar0;
	int iVar1;
	int iVar2;
	char* sVar3;
	__LIB_10__::func_84(iParam0, &sVar3, &iVar0, &iVar1, &iVar2);
	if (bParam1)
	{
		if (iVar0 == 0)
		{
			return 650;
		}
		else if (iVar0 == 1)
		{
			return 400;
		}
		else if (iVar0 == 2)
		{
			return 1000;
		}
		else if (iVar0 == 3)
		{
			return 900;
		}
		else if (iVar0 == 4)
		{
			return 1200;
		}
	}
	else if (iVar0 == 0)
	{
		return 375;
	}
	else if (iVar0 == 1)
	{
		return 200;
	}
	else if (iVar0 == 2)
	{
		return 500;
	}
	else if (iVar0 == 3)
	{
		return 450;
	}
	else if (iVar0 == 4)
	{
		return 600;
	}
	return 0;
}

int func_775(var uParam0)//Position - 0x1A4A5E
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 363)
	{
		if (Global_1585857[iVar1 /*142*/].f_66 != 0)
		{
			if (__LIB_10__::func_71(Global_1585857[iVar1 /*142*/].f_1, *uParam0))
			{
				iVar0++;
			}
		}
		iVar1++;
	}
	return iVar0;
}

void func_776(var uParam0)//Position - 0x1A4BC0
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		__LIB_10__::func_290(uParam0, 0, iVar0);
		__LIB_10__::func_290(uParam0, 1, iVar0);
		__LIB_10__::func_290(uParam0, 2, iVar0);
		__LIB_10__::func_290(uParam0, 6, iVar0);
		__LIB_10__::func_290(uParam0, 3, iVar0);
		__LIB_10__::func_290(uParam0, 4, iVar0);
		__LIB_10__::func_290(uParam0, 5, iVar0);
		__LIB_10__::func_290(uParam0, 7, iVar0);
		iVar0++;
	}
	__LIB_10__::func_280(uParam0, 0, 1);
	__LIB_10__::func_280(uParam0, 1, 1);
	__LIB_10__::func_280(uParam0, 4, 1);
	__LIB_10__::func_280(uParam0, 6, 1);
	__LIB_10__::func_280(uParam0, 7, 1);
	__LIB_10__::func_280(uParam0, 9, 1);
	__LIB_10__::func_280(uParam0, 12, 1);
	__LIB_10__::func_280(uParam0, 15, 1);
	__LIB_10__::func_280(uParam0, 18, 1);
	__LIB_10__::func_280(uParam0, 21, 1);
	__LIB_10__::func_280(uParam0, 25, 1);
	__LIB_10__::func_280(uParam0, 29, 1);
	__LIB_10__::func_280(uParam0, 30, 1);
	__LIB_10__::func_280(uParam0, 34, 1);
	__LIB_10__::func_280(uParam0, 35, 1);
	__LIB_10__::func_280(uParam0, 39, 1);
}

int func_777()//Position - 0x1B66F7
{
	if (Global_78319)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_124.f_406) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_124.f_406, false))
		{
			Local_395.f_0 = 1;
			Local_395.f_1 = ENTITY::GET_ENTITY_MODEL(Local_124.f_406);
			STREAMING::REQUEST_MODEL(Local_395.f_1);
		}
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_435) && !MISC::IS_STRING_NULL_OR_EMPTY(sLocal_434))
	{
		Local_395.f_5 = 1;
		TASK::REQUEST_WAYPOINT_RECORDING(sLocal_434);
		TASK::REQUEST_WAYPOINT_RECORDING(sLocal_435);
	}
	if (Local_124.f_0 != 45)
	{
		Local_395.f_3 = 1;
		STREAMING::REQUEST_MODEL(__LIB_10__::func_39(Local_124.f_0));
	}
	if (((!Local_395.f_0 || STREAMING::HAS_MODEL_LOADED(Local_395.f_1)) && ((!Local_395.f_3 || STREAMING::HAS_MODEL_LOADED(__LIB_10__::func_39(Local_124.f_0))) || Local_124.f_0 == 45)) && (!Local_395.f_5 || (TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sLocal_434) && TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sLocal_435))))
	{
		return 1;
	}
	return 0;
}

void func_778()//Position - 0x1B6AA6
{
	if (!__LIB_10__::func_12())
	{
		return;
	}
	switch (Local_124.f_676)
	{
		case 0:
			sLocal_435 = "carmod_CARMEET_intro";
			sLocal_434 = "carmod_CARMEET_outro";
			break;
		case 1:
			sLocal_435 = "carmod_CARMEET_intro_2";
			sLocal_434 = "carmod_CARMEET_outro_2";
			break;
		case 2:
			sLocal_435 = "carmod_CARMEET_intro_3";
			sLocal_434 = "carmod_CARMEET_outro_3";
			break;
		case 3:
			sLocal_435 = "carmod_CARMEET_intro_4";
			sLocal_434 = "carmod_CARMEET_outro_4";
			break;
	}
}

int func_779()//Position - 0x1BF1BE
{
	if (__LIB_10__::func_12())
	{
		if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
		{
			if (PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 58 /*INPUT_THROW_GRENADE*/))
			{
				return 1;
			}
		}
		else if (PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 51 /*INPUT_CONTEXT*/))
		{
			return 1;
		}
	}
	else if (__LIB_10__::func_477())
	{
		if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			return 0;
		}
		if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
		{
			if (PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 138 /*INPUT_VEH_PUSHBIKE_FRONT_BRAKE*/))
			{
				HUD::CLEAR_HELP(true);
				return 1;
			}
		}
		else if (PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 190 /*INPUT_FRONTEND_RIGHT*/))
		{
			HUD::CLEAR_HELP(true);
			return 1;
		}
	}
	return 0;
}

int func_780()//Position - 0x1BF36C
{
	if (__LIB_10__::func_12())
	{
		return 0;
	}
	if (__LIB_10__::func_477())
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
		{
			return 0;
		}
	}
	return 1;
}

int func_781()//Position - 0x1BF3A1
{
	if (__LIB_10__::func_12())
	{
		return 1;
	}
	return 0;
}

int func_782()//Position - 0x1C0F12
{
	if (ENTITY::DOES_ENTITY_EXIST(__LIB_10__::func_309()) && !ENTITY::IS_ENTITY_DEAD(__LIB_10__::func_309(), false))
	{
		if (INTERIOR::GET_ROOM_KEY_FROM_ENTITY(__LIB_10__::func_309()) != joaat("bunker_ModRoom") && !__LIB_10__::func_145())
		{
			return 0;
		}
	}
	if ((((((((PED::GET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 113) || __LIB_0__::func_661()) || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true)) || __LIB_2__::func_465(PLAYER::PLAYER_PED_ID(), 1)) || INTERIOR::GET_ROOM_KEY_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) != joaat("bunker_ModRoom")) || __LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), Local_124.f_12, 1) > 2f) || PLAYER::PLAYER_ID() != Global_1853186) || (!func_265(PLAYER::PLAYER_ID()) && !__LIB_10__::func_145())) || func_3078(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	return 1;
}

int func_783()//Position - 0x1C1014
{
	if ((PED::GET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 113) || __LIB_0__::func_661()) || Global_262145.f_21128 /* Tunable: -34518592 */)
	{
		return 0;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if ((((((((((((((((!VEHICLE::GET_IS_VEHICLE_ENGINE_RUNNING(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)) || __LIB_0__::func_661()) || PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0 /*PLAYER_CONTROL*/, 71 /*INPUT_VEH_ACCELERATE*/) != 0f) || PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0 /*PLAYER_CONTROL*/, 72 /*INPUT_VEH_BRAKE*/) != 0f) || PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 71 /*INPUT_VEH_ACCELERATE*/)) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 71 /*INPUT_VEH_ACCELERATE*/)) || PAD::IS_DISABLED_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 71 /*INPUT_VEH_ACCELERATE*/)) || PAD::IS_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 72 /*INPUT_VEH_BRAKE*/)) || PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 72 /*INPUT_VEH_BRAKE*/)) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 72 /*INPUT_VEH_BRAKE*/)) || PAD::IS_DISABLED_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 72 /*INPUT_VEH_BRAKE*/)) || ENTITY::GET_ENTITY_SPEED(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)) > 0.1f) || INTERIOR::GET_ROOM_KEY_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) != joaat("GtaMloRoom001")) || __LIB_3__::func_315()) || !__LIB_0__::func_293(PLAYER::PLAYER_ID(), -1)) || !func_1957(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false))) || !__LIB_10__::func_51(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 1))
		{
			return 0;
		}
	}
	return 1;
}

int func_784(char* sParam0, var uParam1, var uParam2, var uParam3)//Position - 0x1C1718
{
	char* sVar0;
	__LIB_10__::func_73(&sParam0);
	sVar0 = HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME(&sParam0, 0, 1);
	if (!__LIB_10__::func_76(sVar0))
	{
		return 0;
	}
	sVar0 = HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME(&sParam0, 1, 2);
	if (__LIB_10__::func_76(sVar0))
	{
		return 0;
	}
	sVar0 = HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME(&sParam0, 2, 3);
	if (__LIB_10__::func_76(sVar0))
	{
		return 0;
	}
	sVar0 = HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME(&sParam0, 3, 4);
	if (__LIB_10__::func_76(sVar0))
	{
		return 0;
	}
	sVar0 = HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME(&sParam0, 4, 5);
	if (__LIB_10__::func_76(sVar0))
	{
		return 0;
	}
	sVar0 = HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME(&sParam0, 5, 6);
	if (!__LIB_10__::func_76(sVar0))
	{
		return 0;
	}
	sVar0 = HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME(&sParam0, 6, 7);
	if (!__LIB_10__::func_76(sVar0))
	{
		return 0;
	}
	sVar0 = HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME(&sParam0, 7, 8);
	if (!__LIB_10__::func_76(sVar0))
	{
		return 0;
	}
	return 1;
}

int func_785(int iParam0)//Position - 0x1C1D8A
{
	int iVar0;
	struct<3> Var1;
	struct<2> Var2;
	struct<2> Var3;
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		iVar0 = __LIB_10__::func_15(Local_124.f_0, 0);
		if (iVar0 != 226)
		{
			Var1 = { __LIB_0__::func_347(iVar0) };
			MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(iParam0), &Var2, &Var3);
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (Local_103.f_5 || ((Local_124.f_0 == 44 && !iLocal_563) && Global_100493.f_1551))
				{
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(Var1, ENTITY::GET_ENTITY_COORDS(iParam0, true), true) <= (Var3.f_1 - Var2.f_1))
					{
						if ((Local_124.f_0 == 44 && !iLocal_563) && Global_100493.f_1551)
						{
							iLocal_563 = 1;
						}
						return 1;
					}
				}
			}
			else if (MISC::GET_DISTANCE_BETWEEN_COORDS(Var1, ENTITY::GET_ENTITY_COORDS(iParam0, true), true) <= (Var3.f_1 - Var2.f_1) && OBJECT::DOOR_SYSTEM_GET_OPEN_RATIO(__LIB_10__::func_16(Local_124.f_0, 0)) > 0.1f)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_786()//Position - 0x1C3453
{
	if (__LIB_10__::func_395())
	{
		return joaat("p_amb_clipboard_01");
	}
	return joaat("imp_prop_impexp_tablet");
}

void func_787(int iParam0, int iParam1, int iParam2)//Position - 0x1E5371
{
	if (iParam0 != -1)
	{
		Global_100493.f_377[__LIB_10__::func_544(iParam0) /*5*/][iParam1] = iParam2;
	}
}

void func_788(int iParam0, int iParam1)//Position - 0x1E5394
{
	if (iParam0 != -1)
	{
		Global_100493.f_413[__LIB_10__::func_544(iParam0)] = iParam1;
	}
}

int func_789(int iParam0)//Position - 0x1E53D5
{
	if (iParam0 != -1)
	{
		return Global_100493.f_413[__LIB_10__::func_544(iParam0)];
	}
	return 0;
}

void func_790(int iParam0, int iParam1)//Position - 0x1E53F6
{
	if (iParam0 != -1 && iParam1 != 0)
	{
		if (Global_100493.f_377[__LIB_10__::func_544(iParam0) /*5*/][iParam1] == 2)
		{
			Global_100493.f_377[__LIB_10__::func_544(iParam0) /*5*/][iParam1] = 4;
		}
		else
		{
			Global_100493.f_377[__LIB_10__::func_544(iParam0) /*5*/][iParam1] = 0;
		}
		if (Global_100493.f_413[__LIB_10__::func_544(iParam0)] == iParam1)
		{
			Global_100493.f_413[__LIB_10__::func_544(iParam0)] = 0;
		}
	}
}

int func_791(int iParam0, int iParam1)//Position - 0x1E5474
{
	if (iParam0 != -1 && iParam1 != 0)
	{
		return Global_100493.f_377[__LIB_10__::func_544(iParam0) /*5*/][iParam1];
	}
	return 0;
}

int func_792(int iParam0)//Position - 0x1E6884
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar1 = 0;
	while (iVar1 < 2)
	{
		iVar0 = __LIB_10__::func_16(iParam0, iVar1);
		if (iVar0 != 0)
		{
			if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iVar0))
			{
				iVar2 = OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iVar0);
				if ((iVar2 == 1 || iVar2 == 4) || iVar2 == 2)
				{
					return 1;
				}
			}
		}
		iVar1++;
	}
	return 0;
}

void func_793(int iParam0)//Position - 0x1E6F33
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() || NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0))
			{
				AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(iParam0, "GENERIC_SHOCKED_HIGH", "SPEECH_PARAMS_FORCE", 1);
				__LIB_10__::func_18("Telling shop keeper to cower", -1);
				TASK::CLEAR_PED_TASKS(iParam0);
				PED::SET_PED_CONFIG_FLAG(iParam0, 185, false);
				PED::SET_PED_CONFIG_FLAG(iParam0, 150, true);
				PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iParam0, true);
				TASK::TASK_COWER(iParam0, -1);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, false);
				PED::SET_PED_KEEP_TASK(iParam0, true);
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iParam0);
			}
			else
			{
				__LIB_10__::func_18("Bypass telling shop keeper to cower, network doesn't have control of entity", -1);
			}
		}
	}
}

int func_794(int iParam0)//Position - 0x1E7075
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			if (FIRE::IS_ENTITY_ON_FIRE(iParam0))
			{
				__LIB_10__::func_18("Staff on fire!", -1);
				return 1;
			}
			if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 7))
			{
				if ((PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iParam0) && PED::IS_PED_FACING_PED(iParam0, PLAYER::PLAYER_PED_ID(), 90f)) && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iParam0, true), true) < 40f)
				{
					TASK::TASK_LOOK_AT_ENTITY(iParam0, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, false);
					__LIB_10__::func_18("Free aiming at shop ped!", -1);
					return 1;
				}
			}
			if (PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()) && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iParam0, true), true) < 4f)
			{
				TASK::TASK_LOOK_AT_ENTITY(iParam0, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, false);
				__LIB_10__::func_18("Melee combat near shop ped!", -1);
				return 1;
			}
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, PLAYER::PLAYER_PED_ID(), true))
			{
				__LIB_10__::func_18("Player damaged shop ped!", -1);
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iParam0);
				}
				else if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0))
				{
					ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iParam0);
				}
				return 1;
			}
			if (MISC::HAS_BULLET_IMPACTED_IN_AREA(ENTITY::GET_ENTITY_COORDS(iParam0, false), 5f, false, false))
			{
				__LIB_10__::func_18("Bullet near shop ped!", -1);
				return 1;
			}
			if (MISC::IS_PROJECTILE_IN_AREA(ENTITY::GET_ENTITY_COORDS(iParam0, false) - Vector(3.5f, 7.5f, 7.5f), ENTITY::GET_ENTITY_COORDS(iParam0, false) + Vector(3.5f, 7.5f, 7.5f), false))
			{
				__LIB_10__::func_18("Projectile near shop ped!", -1);
				return 1;
			}
		}
	}
	return 0;
}

void func_795(int iParam0)//Position - 0x1EA19A
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return;
	}
	if (!NETWORK::CAN_REGISTER_MISSION_DOORS(2))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		iVar1 = __LIB_10__::func_15(iParam0, iVar0);
		if (iVar1 != 226)
		{
			Var2 = { __LIB_0__::func_347(iVar1) };
			if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(Var2.f_5))
			{
				OBJECT::ADD_DOOR_TO_SYSTEM(Var2.f_5, Var2.f_3, Var2, false, true, false);
				if (iParam0 == 44)
				{
				}
			}
		}
		iVar0++;
	}
}

int func_796(int iParam0)//Position - 0x11F9
{
	if (iParam0 >= 11)
	{
		return 0;
	}
	else if (iParam0 >= 9)
	{
		return 0;
	}
	else if (iParam0 >= 7)
	{
		return 0;
	}
	else if (iParam0 >= 4)
	{
		return 0;
	}
	else if (iParam0 > 1)
	{
		return 2;
	}
	return 0;
}

bool func_797(int iParam0)//Position - 0x17C5
{
	return ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, 355.60925f, 4832.486f, -59.99951f, 338.4763f, 4841.36f, -56.999474f, 15f, false, true, 0);
}

Vector3 func_798()//Position - 0x1A6F
{
	return 345.0041f, 4842.001f, -59.9997f;
}

bool func_799(var uParam0)//Position - 0xAED
{
	return __LIB_0__::func_492(&(uParam0->f_57), 9);
}

Vector3 func_800(var uParam0)//Position - 0xF28
{
	return (uParam0[uParam0->f_57.f_2 /*14*/])->f_8;
}

void func_801(var uParam0, char* sParam1)//Position - 0xF3E
{
	switch (uParam0->f_57.f_8.f_2)
	{
		case 0:
			StringCopy(sParam1, "IDLE_A", 16);
			break;
		case 1:
			StringCopy(sParam1, "IDLE_B", 16);
			break;
		case 2:
			StringCopy(sParam1, "IDLE_C", 16);
			break;
		case 3:
			StringCopy(sParam1, "ENTER", 16);
			break;
		case 5:
			StringCopy(sParam1, "BASE", 16);
			break;
		case 4:
			StringCopy(sParam1, "EXIT", 16);
			break;
		case 7:
			StringCopy(sParam1, "A_TO_B", 16);
			break;
		case 8:
			StringCopy(sParam1, "B_TO_C", 16);
			break;
		case 9:
			StringCopy(sParam1, "C_TO_D", 16);
			break;
		case 10:
			StringCopy(sParam1, "D_TO_E", 16);
			break;
		case 12:
			StringCopy(sParam1, "B_TO_E", 16);
			break;
		case 13:
			StringCopy(sParam1, "C_TO_A", 16);
			break;
		case 14:
			StringCopy(sParam1, "D_TO_A", 16);
			break;
		case 15:
			StringCopy(sParam1, "E_TO_A", 16);
			break;
		default:
			StringCopy(sParam1, "invalid_clip", 16);
	}
}

bool func_802(var uParam0)//Position - 0x136D
{
	Stack.Push(!__LIB_0__::func_492(&(uParam0->f_57), 5));
	Stack.Push(uParam0[uParam0->f_57.f_2 /*14*/]);
	Stack.Push(uParam0->f_57.f_2);
	Call_Loc(uParam0->f_57.f_13);
	return (StackVal || StackVal);
}

bool func_803(var uParam0)//Position - 0x1467
{
	return uParam0->f_57 & 31 > 0;
}

int func_804(var uParam0)//Position - 0x149D
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (__LIB_9__::func_898(PLAYER::PLAYER_PED_ID(), uParam0[uParam0->f_57.f_2 /*14*/]))
		{
			return 1;
		}
		else
		{
			uParam0->f_57.f_2 = (uParam0->f_57.f_2 + 1 % 4);
		}
		iVar0++;
	}
	return 0;
}

void func_805(var uParam0, int iParam1)//Position - 0x14E4
{
	uParam0->f_57.f_4 = iParam1;
}

float func_806(var uParam0)//Position - 0x1588
{
	switch ((*uParam0)[uParam0->f_57.f_2 /*14*/])
	{
		case 12:
		case 10:
		case 6:
			return 0.24f;
		case 2:
			return 0.16f;
		case 3:
			return 0.18f;
		default:
	}
	return 0.13f;
}

bool func_807(int iParam0)//Position - 0x17C5
{
	return ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, 451.6327f, 4829.453f, -54.97165f, 499.98096f, 4842.0337f, -50.679607f, 30.75f, false, true, 0);
}

Vector3 func_808(int iParam0)//Position - 0x1937
{
	switch (iParam0)
	{
		case 0:
			return (-1.42f / 2f), ((0.87f / 2f) - 1.74f), 2f;
		case 1:
			return (1.42f / 2f), ((0.87f / 2f) - 1.74f), 2f;
		default:
	}
	return 0f, 0f, 0f;
}

Vector3 func_809(int iParam0)//Position - 0x1985
{
	switch (iParam0)
	{
		case 0:
			return (-1.42f / 2f), (0.87f / 2f), 0f;
		case 1:
			return (1.42f / 2f), (0.87f / 2f), 0f;
		default:
	}
	return 0f, 0f, 0f;
}

void func_810(int iParam0, var uParam1, var uParam2)//Position - 0x1A86
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { 116.985f, -16.656f, 5f };
			*uParam2 = 81f;
			break;
		case 1:
			*uParam1 = { 148.822f, -8.126f, 5f };
			*uParam2 = -51f;
			break;
		case 2:
			*uParam1 = { 41.997f, -8.832f, 0f };
			*uParam2 = -2.5f;
			break;
		case 3:
			*uParam1 = { 47.215f, -8.946f, 0f };
			*uParam2 = 0f;
			break;
		case 4:
			*uParam1 = { 68.813f, -8.955f, 0f };
			*uParam2 = 0f;
			break;
		case 5:
			*uParam1 = { 0.521f, 3.241f, 0f };
			*uParam2 = -27f;
			break;
		case 6:
			*uParam1 = { 11.391f, -4.387f, 0f };
			*uParam2 = -105f;
			break;
		case 7:
			*uParam1 = { 18.427f, 6.559f, -3.588f };
			*uParam2 = (-19f - 180f);
			break;
		case 8:
			*uParam1 = { 24.092f, 4.763f, -3.588f };
			*uParam2 = (-16f - 180f);
			break;
		case 9:
			*uParam1 = { 17.343f, 3.485f, -3.588f };
			*uParam2 = -19f;
			break;
		case 10:
			*uParam1 = { 23.17f, 1.637f, -3.588f };
			*uParam2 = -16f;
			break;
		default:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
	}
	*uParam1 = { *uParam1 + __LIB_10__::func_798() };
}

bool func_811(int iParam0)//Position - 0x19D0
{
	return ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, 354.43747f, 4877.1997f, -62.34054f, 345.1211f, 4864.095f, -55.111866f, 16f, false, true, 0);
}

void func_812(int* iParam0, int iParam1)//Position - 0x1B6FF5
{
	MISC::SET_BIT(iParam0, 0);
	__LIB_9__::func_89(iParam0, iParam1, iParam1);
	GRAPHICS::ENABLE_MOVIE_SUBTITLES(true);
	__LIB_0__::func_651();
	MISC::SET_BIT(&(iParam0->f_28), 5);
	iParam0->f_8 = 0;
	Global_2789733 = 1;
}

void func_813(int* iParam0, int iParam1)//Position - 0x1B8BAC
{
	__LIB_9__::func_89(iParam0, iParam1, iParam1);
	MISC::SET_BIT(&(iParam0->f_28), 4);
	Global_1579066 = 0;
}

void func_814(int* iParam0, int iParam1)//Position - 0x1B8BCC
{
	__LIB_9__::func_89(iParam0, iParam1, iParam1);
	MISC::SET_BIT(&(iParam0->f_28), 3);
	Global_1579066 = 1;
}

bool func_815(int iParam0)//Position - 0x1BCBCF
{
	return __LIB_0__::func_529(iParam0, 366.03583f, 4841.735f, -59.994076f, 1) <= 70f;
}

bool func_816(int iParam0)//Position - 0x17C5
{
	return ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, 362.01877f, 4823.182f, -59.98693f, 374.75598f, 4823.0957f, -56.230595f, 9f, false, true, 0);
}

Vector3 func_817()//Position - 0x192A
{
	return -0.67f, -1.66f, 0.7f;
}

Vector3 func_818()//Position - 0x1941
{
	return -0.67f, 0f, -1.3f;
}

Vector3 func_819()//Position - 0x19C3
{
	return 361.89f, 4842.36f, -59.25f;
}

void func_820(int iParam0, var uParam1, var uParam2)//Position - 0x19DA
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { 361.89f, 4842.36f, -59.25f };
			*uParam2 = (180f + -66.83f);
			break;
		case 1:
			*uParam1 = { 366.28f, 4839.91f, -59.25f };
			*uParam2 = (180f + 28.31f);
			break;
		case 2:
			*uParam1 = { 367.33f, 4827.37f, -59.25f };
			*uParam2 = (180f - 163.69f);
			break;
		case 3:
			*uParam1 = { 370.58f, 4827.01f, -59.25f };
			*uParam2 = (180f + 163.74f);
			break;
	}
}

Vector3 func_821()//Position - 0x1B30
{
	return 0f, -1.74f, 2f;
}

Vector3 func_822()//Position - 0x1B6F
{
	return 364.74f, 4846.2f, -60f;
}

void func_823(int iParam0, var uParam1, var uParam2)//Position - 0x1B86
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { 364.74f, 4846.2f, -60f };
			*uParam2 = 4f;
			break;
		case 1:
			*uParam1 = { 367.39f, 4845.325f, -60f };
			*uParam2 = -46f;
			break;
		case 2:
			*uParam1 = { 369.965f, 4827.239f, -60f };
			*uParam2 = -16f;
			break;
		case 3:
			*uParam1 = { 366.7f, 4827.23f, -60f };
			*uParam2 = 15f;
			break;
	}
}

bool func_824(int iParam0)//Position - 0x17C5
{
	return ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, 416.24573f, 4826.312f, -59.999702f, 376.93875f, 4827.6587f, -56.954235f, 15f, false, true, 0);
}

char* func_825(int iParam0, int iParam1)//Position - 0x22F
{
	iParam1 = iParam1;
	switch (iParam0)
	{
		case 1:
			return "FBR_BLK_CLEAN";
			break;
		case 2:
			return "FBR_BLK_RNNNG" /* GXT: feature is already running */;
			break;
		case 13:
			return "FBR_BLK_DEAD" /* GXT: dead */;
			break;
		case 3:
			return "FBR_BLK_MISS" /* GXT: playing a mission */;
			break;
		case 5:
			return "FBR_BLK_SHOP" /* GXT: browsing a shop */;
			break;
		case 4:
			return "FBR_BLK_CUTS" /* GXT: watching a cutscene */;
			break;
		case 6:
			return "FBR_BLK_WANT" /* GXT: wanted */;
			break;
		case 7:
			return "FBR_BLK_ONLI" /* GXT: playing GTA Online */;
			break;
		case 8:
			return "FBR_BLK_ACT" /* GXT: performing this action */;
			break;
		case 9:
			return "FBR_BLK_LOC" /* GXT: in this location */;
			break;
		case 10:
			return "FBR_BLK_VEH" /* GXT: in a vehicle */;
			break;
		case 11:
			return "FBR_BLK_PARA" /* GXT: skydiving */;
			break;
		case 12:
			return "FBR_BLK_FALL" /* GXT: falling */;
			break;
		default:
			return "ERROR";
			break;
	}
	return "ERROR";
}

void func_826(int iParam0, int iParam1, var uParam2)//Position - 0x8CF9
{
	switch (iParam0)
	{
		case 0:
			if (iParam1 == 0)
			{
				uParam2->f_2 = 71.47866f;
			}
			else if (iParam1 == 1)
			{
				uParam2->f_2 = 31.39692f;
			}
			break;
		case 1:
			if (iParam1 == 0)
			{
				uParam2->f_2 = 29.65688f;
			}
			else if (iParam1 == 1)
			{
				uParam2->f_2 = 175.02774f;
			}
			break;
		case 2:
			if (iParam1 == 0)
			{
				uParam2->f_2 = 31.39692f;
			}
			else if (iParam1 == 1)
			{
				uParam2->f_2 = 3.24864f;
			}
			else if (iParam1 == 2)
			{
			}
			break;
	}
}

int func_827(int iParam0)//Position - 0x6CD71
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (iParam0 >= Global_78588.f_12526[iVar0 /*2*/] && iParam0 <= Global_78588.f_12526[iVar0 /*2*/].f_1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_828()//Position - 0x6D14D
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_113386.f_21037[iVar0 /*103*/] = Global_53195[iVar0 /*120*/];
		iVar1 = 0;
		iVar1 = 0;
		while (iVar1 < 16)
		{
			Global_113386.f_21037[iVar0 /*103*/].f_1[iVar1] = Global_53195[iVar0 /*120*/].f_1[iVar1];
			Global_113386.f_21037[iVar0 /*103*/].f_18[iVar1] = Global_53195[iVar0 /*120*/].f_18[iVar1];
			Global_113386.f_21037[iVar0 /*103*/].f_35[iVar1] = Global_53195[iVar0 /*120*/].f_35[iVar1];
			Global_113386.f_21037[iVar0 /*103*/].f_52[iVar1] = Global_53195[iVar0 /*120*/].f_52[iVar1];
			Global_113386.f_21037[iVar0 /*103*/].f_69[iVar1] = Global_53195[iVar0 /*120*/].f_69[iVar1];
			Global_113386.f_21037[iVar0 /*103*/].f_86[iVar1] = Global_53195[iVar0 /*120*/].f_86[iVar1];
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		Global_113386.f_21037.f_311[iVar0 /*203*/] = Global_53557[iVar0 /*203*/].f_2;
		Global_113386.f_21037.f_311[iVar0 /*203*/].f_1 = Global_53557[iVar0 /*203*/].f_1;
		Global_113386.f_21037.f_311[iVar0 /*203*/].f_2 = Global_53557[iVar0 /*203*/];
		Global_113386.f_21037.f_311[iVar0 /*203*/].f_3 = Global_53557[iVar0 /*203*/].f_3;
		iVar2 = 0;
		iVar2 = 0;
		while (iVar2 < 4)
		{
			Global_113386.f_21037.f_311[iVar0 /*203*/].f_4[iVar2] = Global_53557[iVar0 /*203*/].f_4[iVar2];
			iVar2++;
		}
		Global_113386.f_21037.f_311[iVar0 /*203*/].f_9 = Global_53557[iVar0 /*203*/].f_9;
		iVar2 = 0;
		iVar2 = 0;
		while (iVar2 < 4)
		{
			Global_113386.f_21037.f_311[iVar0 /*203*/].f_10[iVar2 /*48*/] = Global_53557[iVar0 /*203*/].f_10[iVar2 /*48*/];
			Global_113386.f_21037.f_311[iVar0 /*203*/].f_10[iVar2 /*48*/].f_1 = Global_53557[iVar0 /*203*/].f_10[iVar2 /*48*/].f_1;
			Global_113386.f_21037.f_311[iVar0 /*203*/].f_10[iVar2 /*48*/].f_2 = { Global_53557[iVar0 /*203*/].f_10[iVar2 /*48*/].f_2 };
			Global_113386.f_21037.f_311[iVar0 /*203*/].f_10[iVar2 /*48*/].f_6 = Global_53557[iVar0 /*203*/].f_10[iVar2 /*48*/].f_6;
			iVar3 = 0;
			iVar3 = 0;
			while (iVar3 < 10)
			{
				Global_113386.f_21037.f_311[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[iVar3 /*4*/] = { Global_53557[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[iVar3 /*4*/] };
				iVar3++;
			}
			iVar2++;
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 122)
	{
		Global_113386.f_21037.f_1733[iVar0 /*14*/] = Global_47582[iVar0 /*46*/];
		Global_113386.f_21037.f_1733[iVar0 /*14*/].f_1 = Global_47582[iVar0 /*46*/].f_1;
		Global_113386.f_21037.f_1733[iVar0 /*14*/].f_2 = Global_47582[iVar0 /*46*/].f_45;
		Global_113386.f_21037.f_1733[iVar0 /*14*/].f_3 = Global_47582[iVar0 /*46*/].f_31;
		iVar4 = 0;
		while (iVar4 < 9)
		{
			if (iVar4 < Global_47582[iVar0 /*46*/].f_42)
			{
				Global_113386.f_21037.f_1733[iVar0 /*14*/].f_4[iVar4] = Global_47582[iVar0 /*46*/].f_32[iVar4] + 1;
			}
			else
			{
				Global_113386.f_21037.f_1733[iVar0 /*14*/].f_4[iVar4] = -1;
			}
			iVar4++;
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		Global_113386.f_21037.f_3442[iVar0 /*53*/] = Global_54980[iVar0 /*53*/];
		Global_113386.f_21037.f_3442[iVar0 /*53*/].f_1 = Global_54980[iVar0 /*53*/].f_1;
		Global_113386.f_21037.f_3442[iVar0 /*53*/].f_2 = Global_54980[iVar0 /*53*/].f_2;
		Global_113386.f_21037.f_3442[iVar0 /*53*/].f_5 = Global_54980[iVar0 /*53*/].f_5;
		Global_113386.f_21037.f_3442[iVar0 /*53*/].f_6 = { Global_54980[iVar0 /*53*/].f_6 };
		Global_113386.f_21037.f_3442[iVar0 /*53*/].f_10 = Global_54980[iVar0 /*53*/].f_10;
		iVar5 = 0;
		iVar5 = 0;
		while (iVar5 < 10)
		{
			Global_113386.f_21037.f_3442[iVar0 /*53*/].f_11[iVar5 /*4*/] = { Global_54980[iVar0 /*53*/].f_11[iVar5 /*4*/] };
			iVar5++;
		}
		Global_113386.f_21037.f_3442[iVar0 /*53*/].f_52 = Global_54980[iVar0 /*53*/].f_52;
		iVar0++;
	}
}

bool func_829(int iParam0)//Position - 0x70DAC
{
	return __LIB_6__::func_837(iParam0, 0, 1);
}

int func_830(int iParam0)//Position - 0x73708
{
	if (iParam0 >= 19)
	{
		return 0;
	}
	else if (iParam0 <= -1)
	{
		return 0;
	}
	return 1;
}

bool func_831()//Position - 0x76D6A
{
	return BitTest(Global_78567, 9);
}

bool func_832()//Position - 0x76D79
{
	return BitTest(Global_78567, 8);
}

int func_833()//Position - 0x76D88
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (((((((((((((((ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "misshair_shop@barbers", "player_intro", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "misshair_shop@barbers", "player_base", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "misshair_shop@barbers", "player_enterchair", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "misshair_shop@barbers", "player_exitchair", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "misshair_shop@barbers", "player_idle_a", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "misshair_shop@barbers", "player_idle_b", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "misshair_shop@barbers", "player_idle_c", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "misshair_shop@barbers", "player_idle_d", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "misshair_shop@hair_dressers", "player_intro", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "misshair_shop@hair_dressers", "player_base", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "misshair_shop@hair_dressers", "player_enterchair", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "misshair_shop@hair_dressers", "player_exitchair", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "misshair_shop@hair_dressers", "player_idle_a", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "misshair_shop@hair_dressers", "player_idle_b", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "misshair_shop@hair_dressers", "player_idle_c", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "misshair_shop@hair_dressers", "player_idle_d", 3))
		{
			return 1;
		}
	}
	return 0;
}

bool func_834()//Position - 0x76FD4
{
	return Global_78586;
}

void func_835(var uParam0, bool bParam1)//Position - 0xD24
{
	if (CAM::DOES_CAM_EXIST(*uParam0))
	{
		CAM::RENDER_SCRIPT_CAMS(false, bParam1, 3000, true, false, 0);
		CAM::SET_CAM_ACTIVE(*uParam0, false);
		CAM::DESTROY_CAM(*uParam0, false);
		*uParam0 = 0;
	}
}

void func_836(var uParam0)//Position - 0xE18
{
	if (CAM::DOES_CAM_EXIST(uParam0->f_10))
	{
		CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
		CAM::SET_CAM_ACTIVE(uParam0->f_10, false);
	}
}

void func_837(var uParam0, bool bParam1)//Position - 0xFF3
{
	*uParam0 = 1;
	uParam0->f_1 = 1;
	uParam0->f_9 = PLAYER::PLAYER_PED_ID();
	uParam0->f_11 = 0f;
	uParam0->f_12 = 0f;
	if (bParam1)
	{
		uParam0->f_15 = 1;
	}
}

void func_838(var uParam0, struct<3> Param1, struct<3> Param2, float fParam3, var uParam4, var uParam5, int iParam6, int iParam7, int iParam8, int iParam9, float fParam10, bool bParam11)//Position - 0x1020
{
	uParam0->f_1 = { Param1 };
	uParam0->f_4 = { Param2 };
	uParam0->f_7 = fParam3;
	uParam0->f_20 = uParam4;
	uParam0->f_21 = uParam5;
	uParam0->f_22 = iParam6;
	uParam0->f_8 = { 0f, 0f, 0f };
	uParam0->f_11 = { 0f, 0f, 0f };
	uParam0->f_14 = { 0f, 0f, 0f };
	uParam0->f_17 = fParam3;
	uParam0->f_18 = fParam3;
	uParam0->f_23 = iParam8;
	uParam0->f_19 = iParam7;
	*uParam0 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", false);
	CAM::SET_CAM_ACTIVE(*uParam0, true);
	CAM::SET_CAM_PARAMS(*uParam0, uParam0->f_1, uParam0->f_4, uParam0->f_7, 0, 1, 1, 2);
	if (!bParam11)
	{
		CAM::SHAKE_CAM(*uParam0, "HAND_SHAKE", 0.19f);
	}
	CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
	if (fParam10 > 0f)
	{
		CAM::SET_CAM_NEAR_CLIP(*uParam0, fParam10);
	}
	if (uParam0->f_23)
	{
		HUD::LOCK_MINIMAP_ANGLE(iParam9);
	}
	uParam0->f_24 = 0;
	uParam0->f_25 = 0;
	uParam0->f_29 = 0f;
	uParam0->f_30 = 0f;
	uParam0->f_26 = 0;
	uParam0->f_28 = 0;
	uParam0->f_27 = 0;
}

void func_839(var uParam0)//Position - 0x1D71
{
	*uParam0 = 0;
	uParam0->f_1[0 /*3*/] = { 0f, 0f, 0f };
	uParam0->f_1[1 /*3*/] = { 0f, 0f, 0f };
	uParam0->f_8[0 /*3*/] = { 0f, 0f, 0f };
	uParam0->f_8[1 /*3*/] = { 0f, 0f, 0f };
	uParam0->f_15[0] = 50f;
	uParam0->f_15[1] = 0f;
	uParam0->f_21 = 0;
	uParam0->f_20 = 0;
}

void func_840(int* iParam0)//Position - 0x2BAC
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
	{
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(iParam0);
		*iParam0 = 0;
	}
}

void func_841(bool bParam0)//Position - 0x3711
{
	if ((Global_43052 == 9 || Global_43052 == 10) || Global_43052 == 5)
	{
		Global_112035 = bParam0;
		if (bParam0)
		{
		}
	}
	else
	{
		if (bParam0)
		{
		}
		Global_112035 = 0;
	}
}

void func_842(var uParam0, int iParam1)//Position - 0x3D8D
{
	*uParam0 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = iParam1;
	AUDIO::REQUEST_SCRIPT_AUDIO_BANK("OFFMISSION_WASTED", false, -1);
}

var func_843(var uParam0)//Position - 0x21591
{
	return uParam0->f_4;
}

void func_844(var uParam0, var uParam1)//Position - 0x2491B
{
	uParam0->f_1 = uParam1;
}

void func_845(var uParam0, struct<3> Param1)//Position - 0x2601F
{
	uParam0->f_52 = { Param1 };
}

void func_846(var uParam0, char* sParam1)//Position - 0x2618D
{
	uParam0->f_4 = sParam1;
}

void func_847(var uParam0, struct<3> Param1)//Position - 0x261F4
{
	uParam0->f_9 = { Param1 };
}

void func_848()//Position - 0x14750
{
	__LIB_0__::func_779(joaat("MPPLY_CAS_24H_GMBLNG_PX"), NETWORK::GET_CLOUD_TIME_AS_INT());
}

void func_849()//Position - 0x14765
{
	__LIB_0__::func_779(joaat("MPPLY_CAS_GMBLNG_L24"), 0);
	__LIB_0__::func_779(joaat("MPPLY_CAS_GMBLNG_L24_1"), 0);
	__LIB_0__::func_779(joaat("MPPLY_CAS_GMBLNG_L24_2"), 0);
	__LIB_0__::func_779(joaat("MPPLY_CAS_GMBLNG_L24_3"), 0);
	__LIB_0__::func_779(joaat("MPPLY_CAS_GMBLNG_L24_4"), 0);
	__LIB_0__::func_779(joaat("MPPLY_CAS_GMBLNG_L24_5"), 0);
	__LIB_0__::func_779(joaat("MPPLY_CAS_GMBLNG_L24_6"), 0);
	__LIB_0__::func_779(joaat("MPPLY_CAS_GMBLNG_L24_7"), 0);
	__LIB_0__::func_779(joaat("MPPLY_CAS_GMBLNG_L24_8"), 0);
	__LIB_0__::func_779(joaat("MPPLY_CAS_CUR_GMBLNG_HR"), 0);
	__LIB_0__::func_779(joaat("MPPLY_CAS_24H_GMBLNG_PX"), 0);
}

bool func_850()//Position - 0x147DB
{
	return Global_1966132;
}

void func_851(int iParam0)//Position - 0x14812
{
	Global_1966126 = iParam0;
}

void func_852()//Position - 0x14820
{
	__LIB_0__::func_779(joaat("MPPLY_CAS_CUR_GMBLNG_PX"), NETWORK::GET_CLOUD_TIME_AS_INT());
}

bool func_853()//Position - 0x14835
{
	return __LIB_0__::func_714(joaat("MPPLY_CASINO_GMBLNG_GD")) != 0;
}

void func_854(var uParam0, int iParam1, int iParam2, int iParam3)//Position - 0x149EA
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
	iVar2 = (iParam1 + 1 * iParam2);
	iVar3 = (iVar2 - iParam2);
	iVar4 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar3) / 32f));
	iVar5 = SYSTEM::CEIL((SYSTEM::TO_FLOAT((((iVar3 % 32) + iParam2) - 32)) / 32f)) + 1;
	if (((iVar4 - 1) + iVar5) >= *uParam0)
	{
		return;
	}
	bVar6 = false;
	iVar7 = (iVar3 % 32);
	iVar0 = 0;
	while (iVar0 < iVar5)
	{
		iVar8 = (32 - iVar7);
		if (iVar8 > (iParam2 - bVar6))
		{
			iVar8 = (iParam2 - bVar6);
		}
		iVar1 = iVar7;
		while (iVar1 <= ((iVar7 + iVar8) - 1))
		{
			if (BitTest(iParam3, bVar6))
			{
				MISC::SET_BIT(uParam0[(iVar4 + iVar0)], iVar1);
			}
			else
			{
				MISC::CLEAR_BIT(uParam0[(iVar4 + iVar0)], iVar1);
			}
			bVar6++;
			iVar1++;
		}
		if (iVar7 > 0)
		{
			iVar7 = 0;
		}
		else
		{
			iVar7 = (iVar7 + iVar8);
		}
		iVar0++;
	}
}

int func_855(var uParam0, int iParam1, int iParam2)//Position - 0x14AD1
{
	int iVar0;
	bool bVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	iVar3 = (iParam1 + 1 * iParam2);
	iVar4 = (iVar3 - iParam2);
	iVar5 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar4) / 32f));
	iVar6 = SYSTEM::CEIL((SYSTEM::TO_FLOAT((((iVar4 % 32) + iParam2) - 32)) / 32f)) + 1;
	if (((iVar5 - 1) + iVar6) >= *uParam0)
	{
		return 0;
	}
	iVar7 = 0;
	iVar8 = (iVar4 % 32);
	iVar0 = 0;
	while (iVar0 < iVar6)
	{
		iVar9 = (32 - iVar8);
		if (iVar9 > (iParam2 - iVar7))
		{
			iVar9 = (iParam2 - iVar7);
		}
		bVar1 = iVar8;
		while (bVar1 <= ((iVar8 + iVar9) - 1))
		{
			if (BitTest((*uParam0)[(iVar5 + iVar0)], bVar1))
			{
				MISC::SET_BIT(&uVar2, iVar7);
			}
			iVar7++;
			bVar1++;
		}
		if (iVar8 > 0)
		{
			iVar8 = 0;
		}
		else
		{
			iVar8 = (iVar8 + iVar9);
		}
		iVar0++;
	}
	return uVar2;
}

int func_856(int iParam0)//Position - 0x14BA9
{
	char cVar0[24];
	StringCopy(&cVar0, "MPPLY_CAS_GMBLNG_L24", 24);
	if (iParam0 > 0)
	{
		StringConCat(&cVar0, "_", 24);
		StringIntConCat(&cVar0, iParam0, 24);
	}
	return MISC::GET_HASH_KEY(&cVar0);
}

int func_857()//Position - 0x14BD3
{
	return __LIB_0__::func_714(joaat("MPPLY_CAS_CUR_GMBLNG_HR"));
}

bool func_858()//Position - 0x1A0A5
{
	return Global_4535599 == 1;
}

bool func_859()//Position - 0x1ACCA
{
	return Global_1966125 != 0;
}

var func_860()//Position - 0x21B8A
{
	return BitTest(Global_1946250.f_3, 2);
}

bool func_861(int iParam0)//Position - 0xA85
{
	int iVar0;
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return 0;
	}
	return HUD::DOES_BLIP_EXIST(Global_32338[iVar0 /*23*/].f_19);
}

int func_862(int iParam0)//Position - 0x2627
{
	switch (iParam0)
	{
		case -1:
			return 263;
			break;
		case 0:
			return 19;
			break;
		case 1:
			return 20;
			break;
		case 2:
			return 21;
			break;
		case 3:
			return 22;
			break;
		case 4:
			return 23;
			break;
		case 5:
			return 24;
			break;
		case 6:
			return 25;
			break;
		case 7:
			return 26;
			break;
		case 8:
			return 27;
			break;
		case 9:
			return 28;
			break;
		case 10:
			return 29;
			break;
		case 11:
			return 30;
			break;
		case 12:
			return 31;
			break;
		case 13:
			return 32;
			break;
		case 14:
			return 33;
			break;
		case 15:
			return 35;
			break;
		case 16:
			return 36;
			break;
		case 17:
			return 37;
			break;
		case 18:
			return 38;
			break;
		case 19:
			return 39;
			break;
		case 20:
			return 40;
			break;
		case 21:
			return 41;
			break;
		case 22:
			return 42;
			break;
		case 23:
			return 43;
			break;
		case 24:
			return 44;
			break;
		case 25:
			return 45;
			break;
		case 26:
			return 46;
			break;
		case 27:
			return 47;
			break;
		case 28:
			return 48;
			break;
		case 29:
			return 49;
			break;
		case 30:
			return 50;
			break;
		case 31:
			return 51;
			break;
		case 32:
			return 52;
			break;
		case 33:
			return 53;
			break;
		case 34:
			return 54;
			break;
		case 35:
			return 55;
			break;
		case 36:
			return 56;
			break;
		case 37:
			return 57;
			break;
		case 38:
			return 58;
			break;
		case 39:
			return 59;
			break;
		case 40:
			return 60;
			break;
		case 41:
			return 61;
			break;
		case 42:
			return 62;
			break;
		case 43:
			return 63;
			break;
		case 44:
			return 64;
			break;
		case 45:
			return 64;
			break;
		case 46:
			return 48;
			break;
		case 47:
			return 48;
			break;
		case 48:
			return 48;
			break;
		case 49:
			return 48;
			break;
		case 52:
			return 48;
			break;
		case 50:
			return 25;
			break;
		case 51:
			return 40;
			break;
		case 53:
			return 48;
			break;
		case 54:
			return 42;
			break;
		case 55:
			return 40;
			break;
		case 56:
			return 48;
			break;
		case 57:
			return 40;
			break;
		default:
			break;
	}
	return 263;
}

int func_863()//Position - 0x7E1
{
	if (Global_21655)
	{
		return 1;
	}
	return 0;
}

char* func_864(int iParam0)//Position - 0x18EB
{
	switch (iParam0)
	{
		case 0:
			return "Juliet";
			break;
		case 1:
			return "Nikki";
			break;
		case 2:
			return "Chastity";
			break;
		case 3:
			return "Cheetah" /* GXT: Cheetah */;
			break;
		case 4:
			return "Sapphire";
			break;
		case 5:
			return "Infernus" /* GXT: Infernus */;
			break;
		case 6:
			return "Fufu";
			break;
		case 7:
			return "Peach";
			break;
		case 8:
			return "TaxiLiz";
			break;
		case 9:
			return "REHH2Hiker";
			break;
	}
	return "Invalid name";
}

void func_865(int iParam0)//Position - 0x20CE
{
	if (*iParam0 == -1)
	{
		return;
	}
	if (!*iParam0 == Global_43014)
	{
		*iParam0 = -1;
		return;
	}
	*iParam0 = -1;
	Global_43013 = 0;
	Global_43015 = 0;
	Global_43052 = 15;
	Global_63151 = 0;
	Global_63152 = 0;
}

int func_866()//Position - 0x66AE1
{
	return 500;
}

int func_867(int iParam0)//Position - 0x70BF6
{
	int iVar0;
	iVar0 = iParam0;
	if (iVar0 <= 0 || iVar0 >= 11)
	{
		return 0;
	}
	return 1;
}

void func_868(int iParam0)//Position - 0x7E2A6
{
	if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("Not_Allow_As_Saved_Veh", 3))
	{
		if (!DECORATOR::DECOR_EXIST_ON(iParam0, "Not_Allow_As_Saved_Veh"))
		{
			DECORATOR::DECOR_SET_INT(iParam0, "Not_Allow_As_Saved_Veh", 1);
		}
	}
}

int func_869(int iParam0)//Position - 0xA5B1E
{
	return 10;
}

int func_870(int iParam0)//Position - 0xA5F9B
{
	if ((((((((((iParam0 == joaat("technical") || iParam0 == joaat("insurgent")) || iParam0 == joaat("insurgent2")) || iParam0 == joaat("limo2")) || iParam0 == joaat("technical2")) || iParam0 == joaat("boxville5")) || iParam0 == joaat("insurgent3")) || iParam0 == joaat("technical3")) || iParam0 == joaat("barrage")) || iParam0 == joaat("caracara")) || iParam0 == joaat("halftrack"))
	{
		return 1;
	}
	return 0;
}

int func_871(int iParam0, int iParam1)//Position - 0xACAB2
{
	if (iParam1 == 0)
	{
		if (ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iParam0, "door_dside_f") != -1)
		{
			return 1;
		}
	}
	if (iParam1 == 1)
	{
		if (ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iParam0, "door_pside_f") != -1)
		{
			return 1;
		}
	}
	if (iParam1 == 2)
	{
		if (ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iParam0, "door_dside_r") != -1)
		{
			return 1;
		}
	}
	if (iParam1 == 3)
	{
		if (ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iParam0, "door_pside_r") != -1)
		{
			return 1;
		}
	}
	if (iParam1 == 4)
	{
		if (ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iParam0, "bonnet") != -1)
		{
			return 1;
		}
	}
	if (iParam1 == 5)
	{
		if (ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iParam0, "boot") != -1)
		{
			return 1;
		}
	}
	return 0;
}

bool func_872(int iParam0)//Position - 0xB38CE
{
	return __LIB_1__::func_424(iParam0, 19);
}

int func_873(int iParam0)//Position - 0xC0D07
{
	return (__LIB_9__::func_504(iParam0) / 5);
}

float func_874()//Position - 0xCCF63
{
	return 500f;
}

int func_875(struct<3> Param0, struct<3> Param1)//Position - 0xDCDD4
{
	if (!__LIB_6__::func_489(Param0))
	{
		return 0;
	}
	if (Param0.f_0 == Param1.f_0 && Param0.f_2 == Param1.f_2)
	{
		return 1;
	}
	return 0;
}

bool func_876(var uParam0)//Position - 0xDE47E
{
	return BitTest(*uParam0, 0);
}

char* func_877()//Position - 0xDE750
{
	return "tvscreen";
}

void func_878(int iParam0)//Position - 0xE7A5F
{
	Global_2726836 = iParam0;
}

void func_879(int iParam0)//Position - 0xE7ED5
{
	MISC::CLEAR_BIT(&Global_1835493, iParam0);
}

void func_880(int iParam0)//Position - 0xE7EFE
{
	MISC::SET_BIT(&Global_1835493, iParam0);
}

bool func_881(int iParam0)//Position - 0xE7F10
{
	return BitTest(Global_1835493, iParam0);
}

int func_882()//Position - 0xEB365
{
	if (CAM::IS_SCREEN_FADED_IN() && Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_230 == 99)
	{
		return 1;
	}
	return 0;
}

void func_883(int* iParam0, bool bParam1, bool bParam2)//Position - 0xEEC91
{
	int iVar0;
	if (bParam1)
	{
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 15);
		if (iVar0 == 0)
		{
			StringCopy(&(iParam0->f_14), "GR_PWD_RA" /* GXT: RAILGUNS */, 24);
		}
		else if (iVar0 == 1)
		{
			StringCopy(&(iParam0->f_14), "GR_PWD_PA" /* GXT: PASSWORD */, 24);
		}
		else if (iVar0 == 2)
		{
			StringCopy(&(iParam0->f_14), "GR_PWD_PE" /* GXT: PERCIVAL */, 24);
		}
		else if (iVar0 == 3)
		{
			StringCopy(&(iParam0->f_14), "GR_PWD_GE" /* GXT: GENETICS */, 24);
		}
		else if (iVar0 == 4)
		{
			StringCopy(&(iParam0->f_14), "GR_PWD_CH" /* GXT: CHEMICAL */, 24);
		}
		else if (iVar0 == 5)
		{
			StringCopy(&(iParam0->f_14), "GR_PWD_FI" /* GXT: FIREWALL */, 24);
		}
		else if (iVar0 == 6)
		{
			StringCopy(&(iParam0->f_14), "GR_PWD_PR" /* GXT: PROTOCOL */, 24);
		}
		else if (iVar0 == 7)
		{
			StringCopy(&(iParam0->f_14), "GR_PWD_UN" /* GXT: UNLOCKED */, 24);
		}
		else if (iVar0 == 8)
		{
			StringCopy(&(iParam0->f_14), "GR_PWD_DE" /* GXT: DECIPHER */, 24);
		}
		else if (iVar0 == 9)
		{
			StringCopy(&(iParam0->f_14), "GR_PWD_FO" /* GXT: FORTRESS */, 24);
		}
		else if (iVar0 == 10)
		{
			StringCopy(&(iParam0->f_14), "GR_PWD_AR" /* GXT: ARMAMENT */, 24);
		}
		else if (iVar0 == 11)
		{
			StringCopy(&(iParam0->f_14), "GR_PWD_TO" /* GXT: TOXICANT */, 24);
		}
		else if (iVar0 == 12)
		{
			StringCopy(&(iParam0->f_14), "GR_PWD_IN" /* GXT: INHUMANE */, 24);
		}
		else if (iVar0 == 13)
		{
			StringCopy(&(iParam0->f_14), "GR_PWD_PRI" /* GXT: PRIMATES */, 24);
		}
		else if (iVar0 == 14)
		{
			StringCopy(&(iParam0->f_14), "GR_PWD_LA" /* GXT: LAUNCHER */, 24);
		}
		else
		{
			StringCopy(&(iParam0->f_14), "GR_PWD_PA" /* GXT: PASSWORD */, 24);
		}
	}
	else if (bParam2)
	{
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
		if (iVar0 == 0)
		{
			StringCopy(&(iParam0->f_14), "DG_PWD_0", 24);
		}
		else if (iVar0 == 1)
		{
			StringCopy(&(iParam0->f_14), "DG_PWD_1", 24);
		}
		else if (iVar0 == 2)
		{
			StringCopy(&(iParam0->f_14), "DG_PWD_2", 24);
		}
		else if (iVar0 == 3)
		{
			StringCopy(&(iParam0->f_14), "DG_PWD_3", 24);
		}
	}
	else
	{
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 8);
		if (iVar0 == 0)
		{
			StringCopy(&(iParam0->f_14), "PASSWORD", 24);
		}
		else if (iVar0 == 1)
		{
			StringCopy(&(iParam0->f_14), "PETSNAME", 24);
		}
		else if (iVar0 == 2)
		{
			StringCopy(&(iParam0->f_14), "DYNAMITE", 24);
		}
		else if (iVar0 == 3)
		{
			StringCopy(&(iParam0->f_14), "BACKDOOR", 24);
		}
		else if (iVar0 == 4)
		{
			StringCopy(&(iParam0->f_14), "MORPHEUS", 24);
		}
		else if (iVar0 == 5)
		{
			StringCopy(&(iParam0->f_14), "CREAMPIE", 24);
		}
		else if (iVar0 == 6)
		{
			StringCopy(&(iParam0->f_14), "WORMSIGN", 24);
		}
		else if (iVar0 == 7)
		{
			StringCopy(&(iParam0->f_14), "UNLOCKED", 24);
		}
		else if (iVar0 == 8)
		{
			StringCopy(&(iParam0->f_14), "BLUEBOOK", 24);
		}
		else if (iVar0 == 9)
		{
			StringCopy(&(iParam0->f_14), "DECIPHER", 24);
		}
		else if (iVar0 == 10)
		{
			StringCopy(&(iParam0->f_14), "JUNKYARD", 24);
		}
		else
		{
			StringCopy(&(iParam0->f_14), "PASSWORD", 24);
		}
	}
}

void func_884(int iParam0, var uParam1, var uParam2, var uParam3)//Position - 0xEF0B8
{
	*uParam1 = ((iParam0 % 3600000) / 60000);
	*uParam2 = (((iParam0 % 3600000) % 60000) / 1000);
	*uParam3 = (((iParam0 % 3600000) % 60000) % 1000);
}

void func_885()//Position - 0xF7C3F
{
	if (BitTest(Global_2815059.f_4624, 1))
	{
		MISC::CLEAR_BIT(&(Global_2815059.f_4624), 1);
	}
	if (BitTest(Global_2815059.f_4624, 4))
	{
		MISC::CLEAR_BIT(&(Global_2815059.f_4624), 4);
	}
	if (BitTest(Global_2815059.f_4624, 6))
	{
		MISC::CLEAR_BIT(&(Global_2815059.f_4624), 6);
	}
	MISC::CLEAR_BIT(&(Global_2815059.f_4624), 0);
	MISC::CLEAR_BIT(&(Global_2815059.f_4624), 2);
	MISC::CLEAR_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_833), 17);
	if (Global_2815059.f_4626 > 0)
	{
		PLAYER::SET_MAX_WANTED_LEVEL(Global_2815059.f_4626);
	}
	Global_2815059.f_4625 = 0;
}

int func_886(int iParam0, int* iParam1, bool bParam2)//Position - 0xFA90C
{
	if (BitTest(*iParam1, bParam2))
	{
		if (SCRIPT::IS_THREAD_ACTIVE(iParam0))
		{
			return 1;
		}
		else
		{
			MISC::CLEAR_BIT(iParam1, bParam2);
		}
	}
	return 0;
}

bool func_887()//Position - 0xFBF23
{
	return Global_1946250.f_4519 != -1;
}

int func_888()//Position - 0xFD457
{
	int iVar0;
	iVar0 = MISC::GET_GAME_TIMER();
	if (Global_21605 == 0)
	{
		if ((iVar0 - Global_22627) > 3000)
		{
			if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING() == 0)
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
	return 0;
}

void func_889(bool bParam0)//Position - 0xFD617
{
	if (bParam0)
	{
		Global_21661 = 1;
	}
	else
	{
		Global_21661 = 0;
	}
}

void func_890(char* sParam0, char* sParam1, char* sParam2, int iParam3)//Position - 0x100D12
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam2);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam3);
}

int func_891(int iParam0)//Position - 0x12D91D
{
	if (__LIB_0__::func_740(iParam0))
	{
		return 1;
	}
	if (__LIB_3__::func_804(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_892(int iParam0)//Position - 0x1330FE
{
	switch (iParam0)
	{
		case 262:
			return 1;
		default:
	}
	return 0;
}

int func_893(int iParam0)//Position - 0x133118
{
	switch (iParam0)
	{
		case 263:
			return 1;
		default:
	}
	return 0;
}

int func_894(int iParam0)//Position - 0x133132
{
	switch (iParam0)
	{
		case 264:
			return 1;
		default:
	}
	return 0;
}

int func_895(int iParam0)//Position - 0x134587
{
	switch (iParam0)
	{
		case 194:
		case 193:
		case 189:
		case 153:
			return 1;
		default:
	}
	return 0;
}

void func_896(int iParam0, var uParam1, var uParam2)//Position - 0x134711
{
	*uParam1 = Global_1892703[iParam0 /*599*/].f_10.f_8[0];
	*uParam2 = Global_1892703[iParam0 /*599*/].f_10.f_8[1];
}

float func_897()//Position - 0x13B780
{
	return 0.1f;
}

int func_898(int iParam0)//Position - 0x143ECB
{
	if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("PYV_Owner", 3))
	{
		if (DECORATOR::DECOR_EXIST_ON(iParam0, "PYV_Owner"))
		{
			return 1;
		}
	}
	return 0;
}

void func_899()//Position - 0x14951B
{
	struct<29> Var0;
	Global_1944754 = { Var0 };
}

int func_900(int iParam0)//Position - 0x14952F
{
	switch (iParam0)
	{
		case 0:
			return -996199159;
		case 1:
			return 1351684416;
		case 2:
			return 80063766;
		default:
	}
	return -1;
}

int func_901(int iParam0)//Position - 0x1495A3
{
	switch (iParam0)
	{
		case 0:
			return -2118247256;
		case 1:
			return 1203690123;
		case 2:
			return 270501699;
		case 3:
			return 1117148689;
		case 4:
			return 372411449;
		case 5:
			return 1263185141;
		default:
	}
	return -1;
}

int func_902(int iParam0)//Position - 0x14963C
{
	switch (iParam0)
	{
		case 0:
			return -550162297;
		case 1:
			return 1867392996;
		case 2:
			return 1178478598;
		case 3:
			return 1733853200;
		case 4:
			return 122463526;
		case 5:
			return -11921007;
		case 6:
			return 1857889391;
		case 7:
			return -175123167;
		default:
	}
	return -1;
}

int func_903(int iParam0)//Position - 0x1496DA
{
	switch (iParam0)
	{
		case 0:
			return -652378470;
		case 1:
			return -1721915175;
		case 2:
			return 1943926012;
		case 3:
			return 1889811088;
		case 4:
			return 2056605795;
		case 5:
			return 1160295559;
		default:
	}
	return -1;
}

void func_904()//Position - 0x149770
{
	struct<34> Var0;
	Global_1944685 = { Var0 };
}

void func_905()//Position - 0x149798
{
	struct<21> Var0;
	Global_1944664 = { Var0 };
}

void func_906()//Position - 0x1497C6
{
	struct<35> Var0;
	Global_1944552 = { Var0 };
	Global_1944552.f_23 = 0;
	Global_1944552.f_22 = 0;
	Global_1944552.f_21 = 0;
}

void func_907()//Position - 0x149809
{
	struct<36> Var0;
	Global_1944465 = { Var0 };
	Global_1944465.f_23 = 0;
	Global_1944465.f_22 = 0;
	Global_1944465.f_21 = 0;
}

void func_908()//Position - 0x1498B9
{
	struct<54> Var0;
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_13 = -1;
	Var0.f_14 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_20 = -1;
	Var0.f_21 = -1;
	Var0.f_22 = -1;
	Var0.f_23 = -1;
	Var0.f_24 = -1;
	Var0.f_25 = -1;
	Var0.f_26 = -1;
	Var0.f_27 = -1;
	Var0.f_29 = -1;
	Var0.f_32 = -1;
	Var0.f_33 = -1;
	Var0.f_34 = -1;
	Var0.f_35 = -1;
	Var0.f_40 = -1;
	Var0.f_41 = -1;
	Var0.f_42 = -1;
	Var0.f_43 = -1;
	Var0.f_44 = -1;
	Var0.f_45 = -1;
	Var0.f_46 = -1;
	Var0.f_47 = -1;
	Var0.f_48 = -1;
	Var0.f_49 = -1;
	Var0.f_50 = -1;
	Var0.f_51 = -1;
	Var0.f_52 = -1;
	Global_1944249 = { Var0 };
}

int func_909(int iParam0)//Position - 0x1499E2
{
	if (iParam0 == 237)
	{
		return 1;
	}
	return 0;
}

void func_910()//Position - 0x149A0A
{
	struct<42> Var0;
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_13 = -1;
	Var0.f_14 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_20 = -1;
	Var0.f_21 = -1;
	Var0.f_22 = -1;
	Var0.f_23 = -1;
	Var0.f_24 = -1;
	Var0.f_25 = -1;
	Var0.f_26 = -1;
	Var0.f_27 = -1;
	Var0.f_29 = -1;
	Var0.f_30 = -1;
	Var0.f_32 = -1;
	Var0.f_33 = -1;
	Var0.f_34 = -1;
	Var0.f_35 = -1;
	Var0.f_36 = -1;
	Var0.f_37 = -1;
	Var0.f_38 = -1;
	Global_1944303 = { Var0 };
}

int func_911(int iParam0)//Position - 0x149AFD
{
	switch (iParam0)
	{
		case 250:
		case 299:
		case 237:
			if (Global_1944303.f_41 == 0)
			{
				return 89;
			}
			else
			{
				return Global_1944303.f_41;
			}
			break;
		case 301:
			return 90;
		case 300:
			return 91;
		case 242:
		case 244:
		case 248:
		case 241:
		case 239:
		case 240:
			return 92;
		case 238:
			return 93;
		case 249:
			return 94;
	}
	return 89;
}

void func_912()//Position - 0x149C12
{
	struct<46> Var0;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_13 = -1;
	Var0.f_14 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_20 = -1;
	Var0.f_21 = -1;
	Var0.f_22 = -1;
	Var0.f_23 = -1;
	Var0.f_24 = -1;
	Var0.f_25 = -1;
	Var0.f_26 = -1;
	Var0.f_27 = -1;
	Var0.f_28 = -1;
	Var0.f_29 = -1;
	Var0.f_30 = -1;
	Var0.f_31 = -1;
	Var0.f_32 = -1;
	Var0.f_33 = -1;
	Var0.f_34 = -1;
	Var0.f_35 = -1;
	Var0.f_36 = -1;
	Var0.f_37 = -1;
	Var0.f_38 = -1;
	Var0.f_39 = -1;
	Var0.f_40 = -1;
	Var0.f_41 = -1;
	Var0.f_42 = -1;
	Var0.f_43 = -1;
	Var0.f_44 = -1;
	Var0.f_45 = -1;
	Global_1944167 = { Var0 };
	Global_1944167.f_16 = 0;
}

void func_913()//Position - 0x149D34
{
	struct<54> Var0;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_13 = -1;
	Var0.f_14 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_20 = -1;
	Var0.f_21 = -1;
	Var0.f_22 = -1;
	Var0.f_23 = -1;
	Var0.f_24 = -1;
	Var0.f_25 = -1;
	Var0.f_26 = -1;
	Var0.f_27 = -1;
	Var0.f_28 = -1;
	Var0.f_29 = -1;
	Var0.f_30 = -1;
	Var0.f_31 = -1;
	Var0.f_32 = -1;
	Var0.f_33 = -1;
	Var0.f_34 = -1;
	Var0.f_35 = -1;
	Var0.f_36 = -1;
	Var0.f_37 = -1;
	Var0.f_38 = -1;
	Var0.f_39 = -1;
	Var0.f_40 = -1;
	Var0.f_41 = -1;
	Var0.f_42 = -1;
	Var0.f_43 = -1;
	Var0.f_44 = -1;
	Var0.f_45 = -1;
	Var0.f_46 = -1;
	Var0.f_47 = -1;
	Var0.f_48 = -1;
	Var0.f_49 = -1;
	Var0.f_50 = -1;
	Var0.f_51 = -1;
	Var0.f_52 = -1;
	Var0.f_53 = -1;
	Global_1944113 = { Var0 };
	Global_1944113.f_23 = 0;
	Global_1944113.f_24 = 0;
	Global_1944113.f_16 = 0;
}

void func_914()//Position - 0x14A032
{
	struct<47> Var0;
	Global_1944066 = { Var0 };
	Global_1944066.f_23 = 0;
	Global_1944066.f_24 = 0;
	Global_1944066.f_16 = 0;
}

void func_915()//Position - 0x14A221
{
	struct<63> Var0;
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_20 = -1;
	Var0.f_21 = -1;
	Var0.f_22 = -1;
	Var0.f_23 = -1;
	Var0.f_24 = -1;
	Var0.f_25 = -1;
	Var0.f_26 = -1;
	Var0.f_27 = -1;
	Var0.f_28 = -1;
	Var0.f_29 = -1;
	Var0.f_30 = -1;
	Var0.f_31 = -1;
	Var0.f_32 = -1;
	Var0.f_33 = -1;
	Var0.f_34 = -1;
	Var0.f_35 = -1;
	Var0.f_36 = -1;
	Var0.f_37 = -1;
	Var0.f_38 = -1;
	Var0.f_39 = -1;
	Var0.f_40 = -1;
	Var0.f_41 = -1;
	Var0.f_42 = -1;
	Var0.f_43 = -1;
	Var0.f_44 = -1;
	Var0.f_45 = -1;
	Var0.f_46 = -1;
	Var0.f_47 = -1;
	Var0.f_48 = -1;
	Var0.f_49 = -1;
	Var0.f_50 = -1;
	Var0.f_51 = -1;
	Var0.f_52 = -1;
	Var0.f_53 = -1;
	Var0.f_54 = -1;
	Var0.f_55 = -1;
	Var0.f_56 = -1;
	Var0.f_57 = -1;
	Var0.f_58 = -1;
	Var0.f_59 = -1;
	Var0.f_60 = -1;
	Var0.f_61 = -1;
	Var0.f_62 = -1;
	Global_1944003 = { Var0 };
	Global_1944003.f_24 = 0;
	Global_1944003.f_25 = 0;
	Global_1944003.f_17 = 0;
}

void func_916()//Position - 0x14A3A5
{
	struct<56> Var0;
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_20 = -1;
	Var0.f_21 = -1;
	Var0.f_22 = -1;
	Var0.f_23 = -1;
	Var0.f_24 = -1;
	Var0.f_25 = -1;
	Var0.f_26 = -1;
	Var0.f_27 = -1;
	Var0.f_28 = -1;
	Var0.f_29 = -1;
	Var0.f_30 = -1;
	Var0.f_31 = -1;
	Var0.f_32 = -1;
	Var0.f_33 = -1;
	Var0.f_34 = -1;
	Var0.f_35 = -1;
	Var0.f_36 = -1;
	Var0.f_37 = -1;
	Var0.f_38 = -1;
	Var0.f_39 = -1;
	Var0.f_40 = -1;
	Var0.f_41 = -1;
	Var0.f_42 = -1;
	Var0.f_43 = -1;
	Var0.f_44 = -1;
	Var0.f_45 = -1;
	Var0.f_46 = -1;
	Var0.f_47 = -1;
	Var0.f_48 = -1;
	Var0.f_49 = -1;
	Var0.f_50 = -1;
	Var0.f_51 = -1;
	Var0.f_52 = -1;
	Var0.f_53 = -1;
	Global_1943947 = { Var0 };
	Global_1943947.f_29 = 0;
	Global_1943947.f_30 = 0;
	Global_1943947.f_17 = 0;
}

void func_917()//Position - 0x14A78D
{
	struct<36> Var0;
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_13 = -1;
	Var0.f_14 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_20 = -1;
	Var0.f_21 = -1;
	Var0.f_22 = -1;
	Var0.f_23 = -1;
	Var0.f_24 = -1;
	Var0.f_25 = -1;
	Var0.f_26 = -1;
	Var0.f_27 = -1;
	Var0.f_29 = -1;
	Var0.f_30 = -1;
	Var0.f_31 = -1;
	Var0.f_32 = -1;
	Var0.f_33 = -1;
	Var0.f_34 = -1;
	Global_1944213 = { Var0 };
}

int func_918(int iParam0, int iParam1)//Position - 0x14AA60
{
	if (__LIB_3__::func_803(iParam0) == iParam1)
	{
		return __LIB_2__::func_234(iParam0);
	}
	return -1;
}

int func_919(int iParam0)//Position - 0x14AAF2
{
	if (__LIB_3__::func_803(PLAYER::PLAYER_ID()) == 237 || __LIB_3__::func_803(PLAYER::PLAYER_ID()) == 250)
	{
		return Global_1892703[iParam0 /*599*/].f_10.f_476;
	}
	return -1;
}

Vector3 func_920(int iParam0)//Position - 0x6814
{
	switch (iParam0)
	{
		case 684:
			return 729.8204f, -1291.1603f, 25.2842f;
		case 685:
			return 333.4431f, -997.5615f, 28.1407f;
		case 686:
			return -164.0211f, -1296.2214f, 30.0465f;
		case 687:
			return -22.2784f, 216.376f, 105.5677f;
		case 688:
			return 909.1575f, -2093.4443f, 29.494f;
		case 689:
			return -673.6822f, -2391.0134f, 12.8934f;
		case 690:
			return 227.6459f, -3133.4133f, 4.7903f;
		case 691:
			return 381.5496f, 227.2289f, 102.0405f;
		case 692:
			return -1232.4862f, -691.7514f, 22.6646f;
		case 693:
			return -1172.481f, -1177.2576f, 4.6235f;
		case 694:
			return 873.6871f, -2194.6482f, 29.5193f;
		case 695:
			return -1276.6959f, -1356.844f, 3.3046f;
		case 696:
			return 21.1183f, 82.7228f, 73.6689f;
		case 697:
			return -322.2558f, -1400.9172f, 30.7681f;
		case 698:
			return -1421.8895f, -240.855f, 45.3791f;
		case 699:
			return 917.248f, 3567.433f, 32.7733f;
		case 700:
			return -107.0892f, 2795.575f, 52.2975f;
		case 701:
			return -230.9694f, 6350.8164f, 31.426f;
		case 702:
			return 1374.142f, -2217.4348f, 59.6957f;
		case 703:
			return 2508.8855f, 4215.857f, 38.9267f;
		default:
	}
	return 0f, 0f, 0f;
}

int func_921(int iParam0)//Position - 0x6D2C
{
	switch (iParam0)
	{
		case 102:
			return 684;
		case 103:
			return 685;
		case 104:
			return 686;
		case 105:
			return 687;
		case 106:
			return 688;
		case 107:
			return 689;
		case 108:
			return 690;
		case 109:
			return 691;
		case 110:
			return 692;
		case 111:
			return 693;
		default:
	}
	return 0;
}

void func_922(int iParam0)//Position - 0x220D5
{
	Local_130.f_9 = iParam0;
}

int func_923()//Position - 0x220E3
{
	if (Global_2815059.f_5195.f_42)
	{
		Global_2815059.f_5195.f_42 = 0;
		return 1;
	}
	return 0;
}

bool func_924(int iParam0)//Position - 0x19C4F3
{
	int iVar0;
	int iVar1;
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return BitTest(Global_2815059.f_5195.f_26[iVar0], iVar1);
}

int func_925(int iParam0)//Position - 0x19CEF9
{
	switch (iParam0)
	{
		case 0:
			return 7222;
		case 1:
			return 7223;
		case 2:
			return 7224;
		case 3:
			return 7225;
		case 4:
			return 7226;
		case 5:
			return 7227;
		case 6:
			return 7228;
		default:
	}
	return 13122;
}

int func_926(int iParam0, int iParam1)//Position - 0x19CF86
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		switch (iParam1)
		{
			case 2:
				return Global_4718592.f_162510.f_13;
				break;
			case 4:
				return Global_4718592.f_162510.f_12;
				break;
			case 3:
				return Global_4718592.f_162510.f_11;
				break;
			case 5:
				return Global_4718592.f_162510.f_10;
				break;
			case 6:
				return Global_4718592.f_162510.f_9;
				break;
		}
		return 0;
	}
	if (iParam0 == __LIB_0__::func_160() || !__LIB_4__::func_926(iParam1))
	{
		return 0;
	}
	return Global_1853348[iParam0 /*834*/].f_267.f_295.f_8[iParam1];
}

int func_927(int iParam0)//Position - 0x19DC65
{
	char cVar0[64];
	switch (iParam0)
	{
		case 0:
			StringCopy(&cVar0, "MP_STAT_HUB_PROD_TOTAL_0_v0", 64);
			break;
		case 1:
			StringCopy(&cVar0, "MP_STAT_HUB_PROD_TOTAL_1_v0", 64);
			break;
		case 2:
			StringCopy(&cVar0, "MP_STAT_HUB_PROD_TOTAL_2_v0", 64);
			break;
		case 3:
			StringCopy(&cVar0, "MP_STAT_HUB_PROD_TOTAL_3_v0", 64);
			break;
		case 4:
			StringCopy(&cVar0, "MP_STAT_HUB_PROD_TOTAL_4_v0", 64);
			break;
		case 5:
			StringCopy(&cVar0, "MP_STAT_HUB_PROD_TOTAL_5_v0", 64);
			break;
		case 6:
			StringCopy(&cVar0, "MP_STAT_HUB_PROD_TOTAL_6_v0", 64);
			break;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar0))
	{
		return -1;
	}
	return MISC::GET_HASH_KEY(&cVar0);
}

int func_928(int iParam0)//Position - 0x19E754
{
	int iVar0;
	if (iParam0 == -1 || iParam0 == 7)
	{
		return 0;
	}
	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = 50;
			break;
		case 1:
			iVar0 = 100;
			break;
		case 2:
			iVar0 = 10;
			break;
		case 3:
			iVar0 = 20;
			break;
		case 4:
			iVar0 = 80;
			break;
		case 5:
			iVar0 = 60;
			break;
		case 6:
			iVar0 = 40;
			break;
	}
	return iVar0;
}

int func_929(int iParam0)//Position - 0x1ABD5A
{
	switch (iParam0)
	{
		case 179:
		case 180:
		case 148:
			if (Global_1853348[PLAYER::PLAYER_ID() /*834*/] == 148 && __LIB_0__::func_249(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_35, 1))
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		case 182:
		case 183:
		case 185:
		case 186:
		case 189:
		case 190:
		case 191:
		case 192:
		case 193:
		case 194:
		case 195:
		case 197:
		case 198:
		case 199:
		case 200:
		case 201:
		case 205:
		case 207:
		case 208:
		case 209:
		case 210:
		case 211:
			return 1;
	}
	return 0;
}

int func_930(int iParam0)//Position - 0x1ABED2
{
	switch (iParam0)
	{
		case 179:
		case 201:
		case 200:
		case 148:
			return 1;
		default:
	}
	return 0;
}

int func_931(int iParam0)//Position - 0x1ACE50
{
	switch (iParam0)
	{
		case 142:
			return 25;
		case 157:
			return 22;
		case 159:
			return 21;
		case 151:
			return 33;
		case 148:
			return 23;
		case 164:
			return 24;
		case 152:
			return 26;
		case 153:
			return 30;
		case 154:
			return 32;
		case 155:
			return 28;
		case 160:
			return 29;
		case 162:
			return 31;
		case 163:
			return 27;
		case 166:
			return 38;
		case 170:
			return 34;
		case 171:
			return 35;
		case 172:
			return 36;
		case 173:
			return 37;
		case 179:
			return 23;
		default:
	}
	return 0;
}

int func_932(int iParam0)//Position - 0x1ACF31
{
	int iVar0;
	iVar0 = 1;
	switch (iParam0)
	{
		case 167:
			iVar0 = 0;
			break;
		case 169:
			iVar0 = 0;
			break;
		case 168:
			iVar0 = 0;
			break;
		case 166:
			iVar0 = 0;
			break;
		case 190:
			iVar0 = 0;
			break;
		case 191:
			iVar0 = 0;
			break;
		case 192:
			iVar0 = 0;
			break;
	}
	return iVar0;
}

struct<2> func_933()//Position - 0x1AE4EF
{
	return Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_194;
}

int func_934(int iParam0)//Position - 0x1B06E9
{
	float fVar0;
	float fVar1;
	fVar0 = SYSTEM::TO_FLOAT(iParam0);
	fVar1 = (fVar0 * Global_262145.f_24524 /* Tunable: -1002770353 */);
	if (fVar1 > 100000f)
	{
		fVar1 = 100000f;
	}
	return SYSTEM::ROUND(fVar1);
}

int func_935(int iParam0, int iParam1, int iParam2, var uParam3, int iParam4)//Position - 0x1B071D
{
	int iVar0;
	float fVar1;
	float fVar2;
	if (iParam2 == iParam1)
	{
		return uParam3;
	}
	iVar0 = uParam3;
	if ((iParam0 == 1 || iParam0 == 2) || iParam0 == 3)
	{
		iVar0 = (iVar0 - iParam4);
	}
	fVar1 = (SYSTEM::TO_FLOAT(iParam2) / SYSTEM::TO_FLOAT(iParam1));
	fVar2 = SYSTEM::TO_FLOAT(iVar0);
	return SYSTEM::FLOOR((fVar2 * fVar1));
}

int func_936(int iParam0)//Position - 0x1B0979
{
	float fVar0;
	float fVar1;
	fVar0 = SYSTEM::TO_FLOAT(iParam0);
	fVar1 = (fVar0 * Global_262145.f_22821 /* Tunable: 1232447926 */);
	if (fVar1 > SYSTEM::TO_FLOAT(Global_262145.f_22822 /* Tunable: -7028792 */))
	{
		fVar1 = SYSTEM::TO_FLOAT(Global_262145.f_22822 /* Tunable: -7028792 */);
	}
	return SYSTEM::ROUND(fVar1);
}

int func_937(int iParam0)//Position - 0x1B1C4B
{
	switch (iParam0)
	{
		case 1:
			return 100000;
			break;
		case 2:
			return 300000;
			break;
		case 3:
			return 500000;
			break;
	}
	return 0;
}

int func_938(int iParam0)//Position - 0x1B2753
{
	switch (iParam0)
	{
		case 1:
			return Global_262145.f_16789 /* Tunable: EXEC_OFFICE_MONEY_PILES_THRESHOLD1 */;
			break;
		case 2:
			return Global_262145.f_16790 /* Tunable: EXEC_OFFICE_MONEY_PILES_THRESHOLD2 */;
			break;
		case 3:
			return Global_262145.f_16791 /* Tunable: EXEC_OFFICE_MONEY_PILES_THRESHOLD3 */;
			break;
		case 4:
			return Global_262145.f_16792 /* Tunable: EXEC_OFFICE_MONEY_PILES_THRESHOLD4 */;
			break;
		case 5:
			return Global_262145.f_16793 /* Tunable: EXEC_OFFICE_MONEY_PILES_THRESHOLD5 */;
			break;
		case 6:
			return Global_262145.f_16794 /* Tunable: EXEC_OFFICE_MONEY_PILES_THRESHOLD6 */;
			break;
		case 7:
			return Global_262145.f_16795 /* Tunable: EXEC_OFFICE_MONEY_PILES_THRESHOLD7 */;
			break;
		case 8:
			return Global_262145.f_16796 /* Tunable: EXEC_OFFICE_MONEY_PILES_THRESHOLD8 */;
			break;
		case 9:
			return Global_262145.f_16797 /* Tunable: EXEC_OFFICE_MONEY_PILES_THRESHOLD9 */;
			break;
		case 10:
			return Global_262145.f_16798 /* Tunable: EXEC_OFFICE_MONEY_PILES_THRESHOLD10 */;
			break;
		case 11:
			return Global_262145.f_16799 /* Tunable: EXEC_OFFICE_MONEY_PILES_THRESHOLD11 */;
			break;
		case 12:
			return Global_262145.f_16800 /* Tunable: EXEC_OFFICE_MONEY_PILES_THRESHOLD12 */;
			break;
		case 13:
			return Global_262145.f_16801 /* Tunable: EXEC_OFFICE_MONEY_PILES_THRESHOLD13 */;
			break;
		case 14:
			return Global_262145.f_16802 /* Tunable: EXEC_OFFICE_MONEY_PILES_THRESHOLD14 */;
			break;
		case 15:
			return Global_262145.f_16803 /* Tunable: EXEC_OFFICE_MONEY_PILES_THRESHOLD15 */;
			break;
		case 16:
			return Global_262145.f_16804 /* Tunable: EXEC_OFFICE_MONEY_PILES_THRESHOLD16 */;
			break;
		case 17:
			return Global_262145.f_16805 /* Tunable: EXEC_OFFICE_MONEY_PILES_THRESHOLD17 */;
			break;
		case 18:
			return Global_262145.f_16806 /* Tunable: EXEC_OFFICE_MONEY_PILES_THRESHOLD18 */;
			break;
		case 19:
			return Global_262145.f_16807 /* Tunable: EXEC_OFFICE_MONEY_PILES_THRESHOLD19 */;
			break;
		case 20:
			return Global_262145.f_16808 /* Tunable: EXEC_OFFICE_MONEY_PILES_THRESHOLD20 */;
			break;
		case 21:
			return Global_262145.f_16809 /* Tunable: EXEC_OFFICE_MONEY_PILES_THRESHOLD21 */;
			break;
		case 22:
			return Global_262145.f_16810 /* Tunable: EXEC_OFFICE_MONEY_PILES_THRESHOLD22 */;
			break;
		case 23:
			return Global_262145.f_16811 /* Tunable: EXEC_OFFICE_MONEY_PILES_THRESHOLD23 */;
			break;
		case 24:
			return Global_262145.f_16812 /* Tunable: EXEC_OFFICE_MONEY_PILES_THRESHOLD24 */;
			break;
	}
	return 0;
}

void func_939()//Position - 0x1B2E01
{
	if (__LIB_2__::func_232())
	{
		Global_2715699.f_3076.f_134 = 0;
		Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_427 = Global_2715699.f_3076.f_134;
	}
}

int func_940(int iParam0)//Position - 0x1B2EC6
{
	return Global_1892703[iParam0 /*599*/].f_10.f_28;
}

int func_941(int iParam0, bool bParam1)//Position - 0x1B30F2
{
	if (bParam1)
	{
		return Global_262145.f_18798 /* Tunable: BIKER_DEATHMATCH_CASH_REWARD */;
	}
	switch (iParam0)
	{
		case 142:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12978 /* Tunable: GB_SIGHTSEER_DEFAULT_CASH_REWARD */) * Global_262145.f_12983 /* Tunable: GB_SIGHTSEER_EVENT_MULTIPLIER_CASH */));
		case 157:
			return 0;
		case 159:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12928 /* Tunable: GB_ASSAULT_DEFAULT_CASH_REWARD */) * Global_262145.f_12933 /* Tunable: GB_ASSAULT_EVENT_MULTIPLIER_CASH */));
		case 151:
			return 0;
		case 148:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12955 /* Tunable: GB_BOSSVSBOSSDM_DEFAULT_CASH_REWARD */) * Global_262145.f_12959 /* Tunable: GB_BOSSVSBOSSDM_EVENT_MULTIPLIER_CASH */));
		case 164:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12968 /* Tunable: GB_HUNTBOSS_DEFAULT_CASH_REWARD */) * Global_262145.f_12972 /* Tunable: GB_HUNTBOSS_EVENT_MULTIPLIER_CASH */));
		case 152:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12990 /* Tunable: GB_YACHTATTACK_DEFAULT_CASH_REWARD */) * Global_262145.f_12995 /* Tunable: GB_YACHTATTACK_EVENT_MULTIPLIER_CASH */));
		case 153:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_13152 /* Tunable: GB_MOSTWANTED_DEFAULT_CASH_REWARD */) * Global_262145.f_13153 /* Tunable: GB_MOSTWANTED_EVENT_MULTIPLIER_CASH */));
		case 154:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_13158 /* Tunable: GB_SMASHANDGRAB_DEFAULT_CASH_REWARD */) * Global_262145.f_13159 /* Tunable: GB_SMASHANDGRAB_EVENT_MULTIPLIER_CASH */));
		case 155:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_13156 /* Tunable: GB_PROTECTIONRACKET_DEFAULT_CASH_REWARD */) * Global_262145.f_13157 /* Tunable: GB_PROTECTIONRACKET_EVENT_MULTIPLIER_CASH */));
		case 160:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_13150 /* Tunable: GB_FINDERS_KEEPERS_DEFAULT_CASH_REWARD */) * Global_262145.f_13151 /* Tunable: GB_FINDERS_KEEPERS_EVENT_MULTIPLIER_CASH */));
		case 162:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_13154 /* Tunable: GB_POINTTOPOINT_DEFAULT_CASH_REWARD */) * Global_262145.f_13155 /* Tunable: GB_POINTTOPOINT_EVENT_MULTIPLIER_CASH */));
		case 163:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_13148 /* Tunable: GB_CARJACKING_DEFAULT_CASH_REWARD */) * Global_262145.f_13149 /* Tunable: GB_CARJACKING_EVENT_MULTIPLIER_CASH */));
		case 170:
			return 0;
		case 171:
			return Global_262145.f_15565 /* Tunable: EXEC_CASHING_CASH_BONUS */;
		case 172:
			return Global_262145.f_15581 /* Tunable: EXEC_SALVAGE_CASH_BONUS */;
		case 173:
			return Global_262145.f_15524 /* Tunable: EXEC_FGOODS_CASH_REWARD */;
		case 166:
			return 0;
		case 179:
			return Global_262145.f_18806 /* Tunable: BIKER_JOUST_CASH_REWARD */;
		case 180:
			return Global_262145.f_18681 /* Tunable: BIKER_GUNRUNNING_CASH_REWARD */;
		case 182:
			return 0;
		case 183:
			return Global_262145.f_18689 /* Tunable: BIKER_POW_CASH_REWARD */;
		case 185:
			return Global_262145.f_18698 /* Tunable: BIKER_GUNS_FOR_HIRE_CASH_REWARD */;
		case 186:
			return 0;
		case 189:
			return Global_262145.f_18894 /* Tunable: BIKER_RACE_CASH_REWARD */;
		case 190:
			return 0;
		case 191:
			return 0;
		case 192:
			return 0;
		case 193:
			return Global_262145.f_18911 /* Tunable: BIKER_HIT_AND_RIDE_CASH_REWARD */;
		case 194:
			return 0;
		case 195:
			return 0;
		case 197:
			return Global_262145.f_18758 /* Tunable: BIKER_JAILBREAK_CASH_REWARD */;
		case 198:
			return 0;
		case 199:
			return Global_262145.f_18942 /* Tunable: BIKER_SEARCH_AND_DESTROY_CASH_REWARD */;
		case 200:
			return 0;
		case 201:
			return Global_262145.f_18820 /* Tunable: BIKER_STAND_YOUR_GROUND_CASH_REWARD */;
		case 205:
			return Global_262145.f_18929 /* Tunable: BIKER_MISCHIEF_CASH_REWARD */;
		case 207:
			return 0;
		case 208:
			return Global_262145.f_18787 /* Tunable: BIKER_TORCHED_CASH_REWARD */;
		case 209:
			return 0;
		case 210:
			return Global_262145.f_18924 /* Tunable: BIKER_WHEELIE_RIDER_CASH_REWARD */;
		case 211:
			return Global_262145.f_18888 /* Tunable: BIKER_ON_THE_RUN_CASH_REWARD */;
		case 214:
			return Global_262145.f_19482 /* Tunable: IMPEXP_PLOWED_CASH_REWARD */;
		case 215:
			return Global_262145.f_19492 /* Tunable: IMPEXP_FULLY_LOADED_CASH_REWARD */;
		case 216:
			return Global_262145.f_19502 /* Tunable: IMPEXP_AMPHIBIOUS_ASSAULT_CASH_REWARD */;
		case 217:
			return Global_262145.f_19511 /* Tunable: IMPEXP_TRANSPORTER_CASH_REWARD */;
		case 218:
			return Global_262145.f_19520 /* Tunable: IMPEXP_FORTIFIED_CASH_REWARD */;
		case 219:
			return Global_262145.f_19536 /* Tunable: IMPEXP_VELOCITY_CASH_REWARD */;
		case 241:
			return Global_262145.f_24640 /* Tunable: -1488651458 */;
		case 242:
			return Global_262145.f_24636 /* Tunable: -918416046 */;
		case 248:
			return Global_262145.f_24639 /* Tunable: -937767423 */;
		case 244:
			return Global_262145.f_24637 /* Tunable: -60663099 */;
		case 239:
			return Global_262145.f_24641 /* Tunable: -1479714568 */;
		case 240:
			return Global_262145.f_24642 /* Tunable: 957581095 */;
		case 243:
			return Global_262145.f_27078 /* Tunable: VC_WORK_CASH_REWARD */;
		default:
	}
	return 0;
}

int func_942(int iParam0)//Position - 0x1B3F50
{
	switch (iParam0)
	{
		case 160:
		case 162:
		case 153:
		case 154:
		case 155:
		case 163:
		case 171:
		case 172:
			return 1;
		default:
	}
	return 0;
}

int func_943(int iParam0)//Position - 0x1B77E9
{
	switch (iParam0)
	{
		case 216:
		case 218:
		case 215:
		case 120:
		case 214:
		case 220:
		case 221:
		case 217:
		case 219:
			return 1;
		default:
	}
	return 0;
}

char* func_944(int iParam0)//Position - 0x1B791B
{
	switch (iParam0)
	{
		case 216:
		case 218:
		case 215:
		case 120:
		case 214:
		case 220:
		case 221:
		case 217:
		case 219:
		case 225:
		case 226:
		case 227:
		case 229:
		case 230:
		case 233:
		case 237:
		case 238:
		case 239:
		case 240:
		case 241:
		case 242:
		case 244:
		case 248:
		case 249:
		case 250:
		case 236:
		case 150:
		case 243:
		case 158:
		case 256:
		case 258:
			return "IE_COUNTDOWN_30S_KILL";
		default:
	}
	if (__LIB_0__::func_684(iParam0) != -1)
	{
		return "IE_COUNTDOWN_30S_KILL";
	}
	return "FM_COUNTDOWN_30S_KILL";
}

Vector3 func_945(int iParam0, bool bParam1)//Position - 0x1B99FD
{
	if (bParam1)
	{
		switch (iParam0)
		{
			case 0:
				return Global_1853212.f_3;
			case 1:
				return -698.9466f, -2190.777f, 4.993f;
			case 2:
				return -676.1598f, 801.8092f, 198.0056f;
			case 3:
				return -781.0425f, 295.9095f, 84.7941f;
			case 4:
				return -94.7277f, 411.7616f, 112.9154f;
			case 5:
				return -717.8513f, 108.5211f, 54.9659f;
			case 6:
				return -532.0779f, 239.837f, 81.9592f;
			case 7:
				return -438.7394f, 116.5008f, 63.7482f;
			case 8:
				return -7.893f, 174.2921f, 96.8028f;
			case 9:
				return -1128.2778f, -165.7158f, 37.8867f;
			case 10:
				return -775.0145f, -290.7435f, 36.0903f;
			case 11:
				return 50.2802f, -273.0716f, 46.5692f;
			case 12:
				return 138.9762f, -307.1303f, 44.0117f;
			case 13:
				return -0.0213f, -293.0234f, 45.9858f;
			case 14:
				return 75.3515f, -684.156f, 30.6389f;
			case 15:
				return 44.9296f, -891.8996f, 29.1511f;
			case 16:
				return 113.9429f, -1063.45f, 28.1924f;
			case 17:
				return 76.5337f, -1120.0416f, 28.1479f;
			case 18:
				return 136.6247f, -1308.9088f, 27.9963f;
			case 19:
				return 409.1932f, -1027.7372f, 28.3834f;
			case 20:
				return 762.2985f, -986.969f, 25.225f;
			case 21:
				return 885.5315f, -868.501f, 25.1094f;
			case 22:
				return -1297.0823f, -938.5742f, 10.2924f;
			case 23:
				return -1191.3982f, -1215.9083f, 6.6249f;
			case 24:
				return -682.6684f, -1096.2461f, 13.5268f;
			case 25:
				return -1997f, 451f, 103f;
			case 26:
				return -739f, 447f, 107f;
			case 27:
				return 758f, -2551f, 11f;
			case 28:
				return 1306f, -1099f, 40f;
			case 29:
				return 450f, -2939f, 6f;
			case 30:
				return -1241f, -685f, 26f;
			case 31:
				return -1210f, -720f, 21f;
			case 32:
				return -201f, 141f, 70f;
			case 33:
				return 493f, -1975f, 23f;
			case 34:
				return -688.1f, -2281f, 14f;
			case 35:
				return -853.4f, -2655.1f, 14f;
			case 36:
				return -1130.6395f, -1585.2343f, 3.3893f;
			case 37:
				return -653.14124f, -550.3342f, 25.057026f;
			case 38:
				return 891.6f, -1049.9f, 32.8f;
			case 39:
				return 884.7175f, -992.0203f, 31.4746f;
			case 40:
				return 784.7905f, -1284.1609f, 25.3132f;
			case 41:
				return -1306.0088f, -1367.7142f, 3.515f;
			case 42:
				return -898.8569f, 139.0219f, 62.1318f;
			case 43:
				return -1547.8931f, -581.5151f, 32.9337f;
			case 44:
				return 2485.9688f, -384.049f, 92.7355f;
			case 45:
				return -179.6299f, -584.0938f, 179.3362f;
			case 46:
				return -604.2457f, -595.2758f, 24.7538f;
			case 47:
				return 431.3916f, -269.8411f, 68.9958f;
			case 48:
				return -441.9041f, -406.2004f, 32.1633f;
			case 49:
				return -1801.8364f, -375.35f, 61.7153f;
			case 50:
				return -1853.4937f, -333.7117f, 56.0778f;
			case 51:
				return 274.159f, -1124.4122f, 28.2336f;
			case 52:
				return -725.6843f, -2227.119f, 4.8666f;
			case 53:
				return -24.1538f, -282.991f, 45.5614f;
			case 54:
				return 1852.2083f, 2238.8848f, 54.0273f;
			default:
		}
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				return -119.6602f, 173.4259f, 84.7985f;
			case 1:
				return -1301.4706f, -1396.0881f, 3.4049f;
			case 2:
				return -619f, -2291f, 6f;
			case 3:
				return -1022.4f, -1132.9f, 2.1f;
			case 4:
				return 2618.1016f, 512.4345f, 98.3183f;
			case 5:
				return 187.6497f, -1314.7031f, 28.3245f;
			case 6:
				return 8.8556f, 151.1365f, 92.5344f;
			case 7:
				return 1662.771f, 0.9329f, 172.7748f;
			case 8:
				return 1532.182f, 3779.0774f, 33.5135f;
			case 9:
				return -1219.1398f, -2758.6216f, 17.9496f;
			case 10:
				return -1430.5273f, -271.6259f, 45.2077f;
			case 11:
				return 1036.8506f, -2020.639f, 48.7138f;
			case 12:
				return -1035.2751f, -227.6079f, 38.0144f;
			case 13:
				return 1532.287f, 3777.7498f, 33.513f;
			case 14:
				return 709.944f, -1027.9087f, 21.2097f;
			case 15:
				return 9.0182f, -649.6122f, 15.0881f;
			case 16:
				return -1036.008f, -1010.9324f, 1.1413f;
			case 17:
				return -1157.8728f, -936.9564f, 1.6258f;
			case 18:
				return 413.566f, -57.7203f, 72.2851f;
			case 19:
				return -699.982f, -2228.9436f, 4.9366f;
			case 20:
				return 109.4907f, -626.8596f, 257.1491f;
			case 21:
				return -679.8203f, 309.2502f, 82.0842f;
			case 22:
				return -910.9194f, -1412.2283f, 6.6792f;
			case 23:
				return -58.9558f, -403.6268f, 36.4628f;
			case 24:
				return 18.152f, -654.808f, 30.7696f;
			case 25:
				return 18.152f, -654.808f, 30.7696f;
			case 26:
				return -766.8397f, -2224.669f, 4.7958f;
			case 27:
				return -1218.8651f, -700.056f, 21.636f;
			case 28:
				return -1167.0728f, -2188.1309f, 12.1956f;
			case 29:
				return -1533.0021f, -567.9569f, 32.5431f;
			case 30:
				return -1433.4f, -3021.2f, 14.3f;
			case 31:
				return -1981.5684f, -311.2646f, 43.106f;
			case 32:
				return 1136.9983f, -1545.3331f, 47.1451f;
			case 33:
				return -3165.8032f, 1061.5834f, 19.84f;
			case 34:
				return 339.5394f, -575.9473f, 70.2263f;
			case 35:
				return 170.2666f, -717.2795f, 46.077f;
			case 36:
				return 170.2666f, -717.2795f, 46.077f;
			case 37:
				return 170.2666f, -717.2795f, 46.077f;
			case 38:
				return 170.2666f, -717.2795f, 46.077f;
			case 39:
				return -1464.9921f, -235.6491f, 48.6664f;
			}
		default:
	}
	return 0f, 0f, 0f;
}

int func_946(int iParam0)//Position - 0x1BD77E
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		if (VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, -1, false))
		{
			return 1;
		}
		if (VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, 0, false))
		{
			return 1;
		}
		if (VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, 1, false))
		{
			return 1;
		}
		if (VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, 2, false))
		{
			return 1;
		}
	}
	return 0;
}

float func_947()//Position - 0x1BD7CE
{
	return 10f;
}

void func_948(int iParam0, int iParam1, int iParam2, int iParam3, float fParam4, float fParam5, bool bParam6, bool bParam7, float fParam8, float fParam9)//Position - 0x1BF126
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	float fVar4;
	float fVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	if (ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		iVar7 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
		if (!PED::IS_PED_INJURED(iVar7))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(iVar7, false))
			{
				iVar8 = PED::GET_VEHICLE_PED_IS_IN(iVar7, false);
				if (!VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(iVar8)))
				{
					iParam0 = iVar8;
				}
			}
		}
	}
	fVar4 = 0.5f;
	iVar6 = ENTITY::GET_ENTITY_MODEL(iParam0);
	Var3 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
	fVar5 = ENTITY::GET_ENTITY_HEADING(iParam0);
	MISC::GET_MODEL_DIMENSIONS(iVar6, &Var0, &Var1);
	fVar9 = ((Var1.f_2 - Var0.f_2) / 2f);
	fVar10 = (Var1.f_2 - fVar9);
	if (fVar4 <= (fVar10 + 0.1f))
	{
		fVar4 = ((fVar10 + fParam4) - 0.1f);
	}
	switch (iVar6)
	{
		case joaat("seven70"):
		case joaat("raptor"):
		case joaat("issi3"):
		case joaat("comet3"):
		case joaat("specter2"):
		case joaat("hermes"):
		case joaat("dominator3"):
		case joaat("jugular"):
		case joaat("remus"):
		case joaat("tailgater2"):
		case joaat("mesa3"):
			fVar4 = (fVar4 + 0.25f);
			break;
		case joaat("insurgent2"):
			fVar4 = (fVar4 + 0.75f);
			break;
	}
	fVar4 = (fVar4 + fParam5);
	fVar11 = 0f;
	if (bParam6)
	{
		Var2 = { Var3 - Vector((((Var1.f_2 - Var0.f_2) / 2f) + fVar4), 0f, 0f) };
		fVar11 = 180f;
	}
	else
	{
		Var2 = { Var3 + Vector((((Var1.f_2 - Var0.f_2) / 2f) + fVar4), 0f, 0f) };
	}
	if (iVar6 == joaat("imp_prop_impexp_boxpile_02"))
	{
		Var2 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Var3, fVar5, -1.45f, 0.5f, 0f) + Vector((((Var1.f_2 - Var0.f_2) / 2f) + fVar4), 0f, 0f) };
	}
	else if (iVar6 == joaat("tr_prop_tr_break_dev_01a"))
	{
		Var2 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Var3, fVar5, 0f, -0.3f, (Var1.f_2 + 0.17f)) };
	}
	if (fParam9 != 0f)
	{
		Var2 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Var3, fVar5, 0f, fParam9, Var1.f_2) };
	}
	GRAPHICS::DRAW_MARKER(2, Var2, 0f, 0f, 0f, 180f, fVar11, fParam8, fParam4, fParam4, fParam4, iParam1, iParam2, iParam3, 100, true, bParam7, 2, false, 0, 0, false);
}

void func_949(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24, int iParam25, int iParam26, int iParam27, int iParam28, int iParam29, int iParam30, int iParam31, int iParam32, int iParam33, int iParam34, int iParam35, int iParam36)//Position - 0x1C228E
{
	int iVar0;
	int iVar1;
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (__LIB_0__::func_667(0, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1649593.f_1 = 1;
		__LIB_0__::func_666(0, iVar0);
		Global_1649593.f_1177[iVar0] = uParam0;
		Global_1649593.f_1177.f_11[iVar0] = iParam1;
		StringCopy(&(Global_1649593.f_1177.f_22[iVar0 /*16*/]), sParam2, 64);
		Global_1649593.f_1177.f_194[iVar0] = iParam3;
		Global_1649593.f_1177.f_183[iVar0] = iParam4;
		Global_1649593.f_1177.f_216[iVar0] = iParam5;
		Global_1649593.f_1177.f_227[iVar0 /*3*/] = iParam6;
		Global_1649593.f_1177.f_227[iVar0 /*3*/].f_1 = iParam7;
		Global_1649593.f_1177.f_258[iVar0] = iParam8;
		Global_1649593.f_1177.f_269[iVar0] = iParam9;
		Global_1649593.f_1177.f_312[iVar0] = iParam10;
		Global_1649593.f_1177.f_323[iVar0] = iParam11;
		Global_1649593.f_1177.f_334[iVar0] = iParam12;
		Global_1649593.f_1177.f_345[iVar0] = iParam13;
		Global_1649593.f_1172 = 1;
		Global_1649593.f_1177.f_356[iVar0] = iParam14;
		Global_1649593.f_1177.f_367[iVar0] = iParam15;
		Global_1649593.f_1177.f_378[iVar0] = iParam16;
		Global_1649593.f_1177.f_389[iVar0] = iParam17;
		Global_1649593.f_1177.f_400[iVar0] = iParam18;
		Global_1649593.f_1177.f_411[iVar0] = iParam19;
		Global_1649593.f_1177.f_422[iVar0] = iParam20;
		Global_1649593.f_1177.f_433[iVar0] = iParam21;
		Global_1649593.f_1177.f_444[iVar0] = iParam22;
		Global_1649593.f_1177.f_455[iVar0] = iParam23;
		Global_1649593.f_1177.f_466[iVar0] = iParam24;
		Global_1649593.f_1177.f_205[iVar0] = iParam25;
		Global_1649593.f_1177.f_477[iVar0] = iParam26;
		Global_1649593.f_1177.f_488[iVar0] = iParam27;
		Global_1649593.f_1177.f_499[iVar0] = iParam28;
		Global_1649593.f_1177.f_510[iVar0] = iParam29;
		Global_1649593.f_1177.f_521[iVar0] = iParam30;
		Global_1649593.f_1177.f_532[iVar0] = iParam31;
		Global_1649593.f_1177.f_543[iVar0] = iParam32;
		Global_1649593.f_1177.f_554[iVar0] = iParam33;
		Global_1649593.f_1177.f_565[iVar0] = iParam34;
		Global_1649593.f_1177.f_576[iVar0] = iParam35;
		Global_1649593.f_1177.f_587[iVar0] = iParam36;
	}
}

int func_950()//Position - 0x1CF7CE
{
	int iVar0;
	iVar0 = __LIB_0__::func_582();
	if (iVar0 != __LIB_0__::func_160())
	{
		return Global_1892703[iVar0 /*599*/].f_10.f_99;
	}
	return 0;
}

void func_951()//Position - 0x1D0727
{
	MISC::SET_BIT(&(Global_2815059.f_5194), 0);
}

int func_952(int iParam0)//Position - 0x1D76F3
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if ((PED::GET_PED_TYPE(iParam0) == 6 || PED::GET_PED_TYPE(iParam0) == 29) || PED::GET_PED_TYPE(iParam0) == 27)
		{
			return 1;
		}
	}
	return 0;
}

void func_953(var uParam0, struct<3> Param1, bool bParam2, var uParam3)//Position - 0x1D7C08
{
	if (*uParam0 == -1 || !MISC::DOES_POP_MULTIPLIER_AREA_EXIST(*uParam0))
	{
		*uParam0 = MISC::ADD_POP_MULTIPLIER_AREA(Param1 - Vector(uParam3, uParam3, uParam3), Param1 + Vector(uParam3, uParam3, uParam3), 1f, 0.25f, bParam2, true);
	}
}

void func_954(int iParam0)//Position - 0x1D837D
{
	int iVar0;
	int iVar1;
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::SET_BIT(&(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_205[iVar0]), iVar1);
}

int func_955(int iParam0, int iParam1)//Position - 0x1D88D4
{
	switch (iParam0)
	{
		case 148:
		case 164:
		case 152:
		case 153:
		case 160:
			return 1;
		case 168:
			if ((iParam1 != 2 && iParam1 != 10) && iParam1 != 7)
			{
				return 1;
			}
			break;
		case 170:
		case 166:
		case 173:
			return 1;
		case 179:
		case 183:
		case 181:
		case 189:
		case 191:
		case 192:
		case 193:
		case 194:
		case 186:
		case 199:
		case 185:
		case 201:
		case 198:
		case 195:
		case 180:
		case 207:
		case 208:
		case 209:
		case 210:
		case 214:
		case 217:
		case 218:
		case 215:
		case 216:
		case 219:
		case 220:
		case 221:
		case 237:
		case 238:
		case 239:
		case 240:
		case 241:
		case 242:
		case 244:
		case 248:
		case 249:
		case 250:
		case 227:
			return 1;
		case 190:
			if (((iParam1 != 6 && iParam1 != 9) && iParam1 != 7) && iParam1 != 1)
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_956(int iParam0)//Position - 0x1D8A5B
{
	switch (iParam0)
	{
		case 152:
		case 142:
		case 164:
		case 151:
		case 160:
		case 166:
		case 173:
		case 183:
		case 185:
		case 197:
		case 186:
		case 201:
		case 191:
		case 198:
		case 207:
		case 208:
		case 209:
		case 200:
		case 195:
		case 180:
		case 216:
		case 218:
		case 215:
		case 214:
		case 220:
		case 221:
		case 217:
		case 219:
		case 227:
		case 237:
		case 238:
		case 239:
		case 240:
		case 241:
		case 242:
		case 244:
		case 248:
		case 249:
		case 250:
			return 1;
		default:
	}
	return 0;
}

float func_957(int iParam0)//Position - 0x1D8C1C
{
	switch (iParam0)
	{
		case 142:
		case 157:
		case 159:
		case 151:
		case 148:
		case 164:
		case 152:
		case 153:
		case 154:
		case 155:
		case 160:
		case 162:
		case 166:
		case 173:
		case 169:
		case 167:
		case 168:
		case 170:
		case 178:
		case 179:
		case 189:
		case 180:
		case 182:
		case 183:
		case 190:
		case 191:
		case 192:
		case 193:
		case 194:
		case 199:
		case 201:
		case 185:
		case 197:
		case 186:
		case 198:
		case 195:
		case 205:
		case 207:
		case 208:
		case 209:
		case 216:
		case 218:
		case 215:
		case 214:
		case 220:
		case 221:
		case 217:
		case 219:
		case 225:
		case 226:
		case 227:
		case 229:
		case 230:
		case 233:
		case 237:
		case 238:
		case 239:
		case 240:
		case 241:
		case 242:
		case 244:
		case 248:
		case 249:
		case 250:
		case 243:
		case 158:
		case 181:
		case 256:
		case 258:
			return 0f;
		default:
	}
	if (__LIB_0__::func_684(iParam0) == 0)
	{
		return 0f;
	}
	return 1f;
}

int func_958(int iParam0)//Position - 0x1D8DDC
{
	switch (iParam0)
	{
		case 152:
		case 164:
		case 151:
		case 170:
		case 169:
		case 201:
		case 191:
		case 198:
		case 180:
		case 200:
		case 208:
		case 216:
		case 218:
		case 215:
		case 214:
		case 220:
		case 221:
		case 217:
		case 219:
		case 227:
		case 237:
		case 238:
		case 239:
		case 240:
		case 241:
		case 242:
		case 244:
		case 248:
		case 249:
		case 250:
			return 1;
		default:
	}
	return 0;
}

void func_959(int iParam0)//Position - 0x1D8F70
{
	int iVar0;
	iVar0 = PLAYER::PLAYER_ID();
	if (Global_1892703[iVar0 /*599*/].f_10.f_182 != iParam0)
	{
		Global_1892703[iVar0 /*599*/].f_10.f_182 = iParam0;
	}
}

bool func_960()//Position - 0x22273E
{
	return BitTest(Global_2815059.f_5194, 1);
}

void func_961(int iParam0)//Position - 0x222E58
{
	int iVar0;
	int iVar1;
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::CLEAR_BIT(&(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_205[iVar0]), iVar1);
}

void func_962(var uParam0, bool bParam1)//Position - 0x223031
{
	if (MISC::DOES_POP_MULTIPLIER_AREA_EXIST(*uParam0))
	{
		MISC::REMOVE_POP_MULTIPLIER_AREA(*uParam0, bParam1);
	}
}

char* func_963(int iParam0)//Position - 0x22357C
{
	switch (iParam0)
	{
		case 219:
			return "DLC_IE_VIP_Velocity_Vehicle_Scene";
		case 221:
			return "DLC_IE_VIP_Stockpiling_Vehicle_Scene";
		case 220:
			return "DLC_IE_VIP_Ramped_Up_Vehicle_Scene";
		case 214:
			return "DLC_IE_VIP_Plowed_Vehicle_Scene";
		case 217:
			return "DLC_IE_VIP_Transporter_Vehicle_Scene";
		case 218:
			return "DLC_IE_VIP_Fortified_Vehicle_Scene";
		case 215:
			return "DLC_IE_VIP_Fully_Loaded_Vehicle_Scene";
		case 216:
			return "DLC_IE_VIP_Amphibious_Assault_Vehicle_Scene";
		default:
	}
	return "";
}

int func_964(int iParam0)//Position - 0x223A32
{
	if ((iParam0 == 191 || iParam0 == 190) || iParam0 == 192)
	{
		return 1;
	}
	return 0;
}

int func_965(int iParam0, int iParam1, bool bParam2)//Position - 0x2240DB
{
	if (bParam2)
	{
		if ((!__LIB_1__::func_424(PLAYER::PLAYER_ID(), 19) && !__LIB_1__::func_424(PLAYER::PLAYER_ID(), 20)) && !__LIB_1__::func_424(PLAYER::PLAYER_ID(), 9))
		{
			return 0;
		}
	}
	if (Global_2789228.f_93[iParam0] == 1 && __LIB_0__::func_649(&(Global_2789228[iParam0 /*2*/])))
	{
		if (__LIB_1__::func_295(&(Global_2789228[iParam0 /*2*/]), 1, 0) < iParam1)
		{
			Global_2789228.f_93[iParam0] = 0;
			return 1;
		}
		return 0;
	}
	return 1;
}

void func_966()//Position - 0x224C10
{
	struct<20> Var0;
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Global_1836068 = { Var0 };
	Global_1836068.f_13 = __LIB_0__::func_160();
	if (BitTest(Global_1835493, 3))
	{
		MISC::CLEAR_BIT(&Global_1835493, 3);
	}
}

void func_967(int iParam0, bool bParam1, bool bParam2)//Position - 0x225878
{
	if (bParam2)
	{
		__LIB_0__::func_521(15384, bParam1, -1);
		return;
	}
	__LIB_0__::func_521(__LIB_9__::func_533(iParam0), bParam1, -1);
}

int func_968(int iParam0)//Position - 0x22800B
{
	if (__LIB_3__::func_803(PLAYER::PLAYER_ID()) == 238 || __LIB_3__::func_803(PLAYER::PLAYER_ID()) == 249)
	{
		return Global_1892703[iParam0 /*599*/].f_10.f_477;
	}
	return -1;
}

void func_969()//Position - 0x22827A
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		Global_1637407.f_534[iVar0 /*42*/].f_1 = __LIB_0__::func_160();
		Global_1637407.f_534[iVar0 /*42*/].f_9 = 0;
		iVar0++;
	}
}

bool func_970(int iParam0)//Position - 0x228532
{
	int iVar0;
	int iVar1;
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return BitTest(Global_2815059.f_5195.f_14[iVar0], iVar1);
}

void func_971(int iParam0)//Position - 0x228582
{
	int iVar0;
	int iVar1;
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::CLEAR_BIT(&(Global_2815059.f_5195.f_35[iVar0]), iVar1);
}

bool func_972(int iParam0)//Position - 0x2285AB
{
	int iVar0;
	int iVar1;
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return BitTest(Global_2815059.f_5195.f_35[iVar0], iVar1);
}

void func_973(int iParam0)//Position - 0x2285F4
{
	int iVar0;
	int iVar1;
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::CLEAR_BIT(&(Global_2815059.f_5195.f_33[iVar0]), iVar1);
}

var func_974(int iParam0)//Position - 0x228653
{
	int iVar0;
	int iVar1;
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return BitTest(Global_2815059.f_5195.f_33[iVar0], iVar1);
}

var func_975(int iParam0)//Position - 0x2286FB
{
	int iVar0;
	int iVar1;
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return BitTest(Global_2815059.f_5195.f_31[iVar0], iVar1);
}

void func_976(int iParam0)//Position - 0x2288A0
{
	int iVar0;
	int iVar1;
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::CLEAR_BIT(&(Global_2815059.f_5195.f_26[iVar0]), iVar1);
}

void func_977()//Position - 0x228DF4
{
	struct<14> Var0;
	Global_1943929 = { Var0 };
	Global_1943929.f_14 = 0;
	Global_1943929.f_15 = 0;
}

int func_978()//Position - 0xF8E
{
	return 2000;
}

Vector3 func_979(int iParam0)//Position - 0x22A4
{
	int iVar0;
	iVar0 = iParam0;
	return Global_32338[iVar0 /*23*/][0 /*3*/];
}

void func_980(int iParam0)//Position - 0x7753
{
	if (Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_463 != iParam0)
	{
		Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_463 = iParam0;
	}
}

bool func_981(var uParam0, bool bParam1)//Position - 0x181A7
{
	return BitTest(uParam0->f_268, bParam1);
}

void func_982(var uParam0, bool bParam1, int iParam2, int iParam3)//Position - 0x181B7
{
	(uParam0[bParam1 /*52*/])->f_6[iParam2] = iParam3;
}

var func_983(var uParam0, int iParam1)//Position - 0x181E1
{
	return (uParam0[iParam1 /*52*/])->f_5;
}

int func_984(var uParam0, bool bParam1, int iParam2)//Position - 0x1821C
{
	return (*uParam0[bParam1 /*52*/])[iParam2];
}

var func_985(var uParam0, int iParam1, int iParam2)//Position - 0x1822E
{
	return (uParam0[iParam1 /*52*/])->f_6[iParam2];
}

void func_986(var uParam0)//Position - 0x1834E
{
	if (BitTest(uParam0->f_269, 1))
	{
		MISC::CLEAR_BIT(&(uParam0->f_269), 1);
	}
}

void func_987(var uParam0)//Position - 0x1836A
{
	if (!BitTest(uParam0->f_269, 1))
	{
		MISC::SET_BIT(&(uParam0->f_269), 1);
	}
}

void func_988(var uParam0, bool bParam1)//Position - 0x1842C
{
	if (BitTest(uParam0->f_269, bParam1))
	{
		MISC::CLEAR_BIT(&(uParam0->f_269), bParam1);
	}
}

void func_989(var uParam0, int iParam1, int iParam2, int iParam3)//Position - 0x1896C
{
	int iVar0;
	iVar0 = NETWORK::NET_TO_PED((*uParam0[iParam2 /*52*/])[iParam3]);
	if (iParam1 == joaat("G_M_ImportExport_01"))
	{
		switch ((iParam2 % 5))
		{
			case 0:
				switch (iParam3)
				{
					case 0:
						PED::SET_PED_COMPONENT_VARIATION(iVar0, 0, 0, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(iVar0, 2, 0, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(iVar0, 3, 0, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(iVar0, 4, 0, 2, 0);
						PED::SET_PED_PROP_INDEX(iVar0, 0, 0, 0, false);
						break;
					case 1:
						PED::SET_PED_COMPONENT_VARIATION(iVar0, 0, 1, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(iVar0, 2, 1, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(iVar0, 3, 1, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(iVar0, 4, 1, 0, 0);
						PED::SET_PED_PROP_INDEX(iVar0, 1, 0, 0, false);
						break;
					default:
						PED::SET_PED_COMPONENT_VARIATION(iVar0, 0, 2, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(iVar0, 2, 2, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(iVar0, 3, 2, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(iVar0, 4, 2, 0, 0);
						break;
				}
				break;
			case 1:
				switch (iParam3)
				{
					case 0:
						PED::SET_PED_COMPONENT_VARIATION(iVar0, 0, 2, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(iVar0, 2, 2, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(iVar0, 3, 2, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(iVar0, 4, 2, 0, 0);
						break;
					case 1:
						PED::SET_PED_COMPONENT_VARIATION(iVar0, 0, 3, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(iVar0, 2, 3, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(iVar0, 3, 3, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(iVar0, 4, 3, 0, 0);
						break;
					default:
						PED::SET_PED_COMPONENT_VARIATION(iVar0, 0, 4, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(iVar0, 2, 4, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(iVar0, 3, 4, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(iVar0, 4, 4, 0, 0);
						PED::SET_PED_PROP_INDEX(iVar0, 0, 1, 0, false);
						break;
				}
				break;
			case 2:
				switch (iParam3)
				{
					case 0:
						PED::SET_PED_COMPONENT_VARIATION(iVar0, 0, 4, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(iVar0, 2, 4, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(iVar0, 3, 4, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(iVar0, 4, 4, 0, 0);
						PED::SET_PED_PROP_INDEX(iVar0, 0, 1, 0, false);
						break;
					case 1:
						PED::SET_PED_COMPONENT_VARIATION(iVar0, 0, 0, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(iVar0, 2, 0, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(iVar0, 3, 0, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(iVar0, 4, 0, 2, 0);
						PED::SET_PED_PROP_INDEX(iVar0, 0, 0, 0, false);
						break;
					default:
						PED::SET_PED_COMPONENT_VARIATION(iVar0, 0, 1, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(iVar0, 2, 1, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(iVar0, 3, 1, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(iVar0, 4, 1, 0, 0);
						PED::SET_PED_PROP_INDEX(iVar0, 1, 0, 0, false);
						break;
				}
				break;
			case 3:
				switch (iParam3)
				{
					case 0:
						PED::SET_PED_COMPONENT_VARIATION(iVar0, 0, 1, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(iVar0, 2, 1, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(iVar0, 3, 1, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(iVar0, 4, 1, 0, 0);
						PED::SET_PED_PROP_INDEX(iVar0, 1, 0, 0, false);
						break;
					case 1:
						PED::SET_PED_COMPONENT_VARIATION(iVar0, 0, 2, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(iVar0, 2, 2, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(iVar0, 3, 2, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(iVar0, 4, 2, 0, 0);
						break;
					default:
						PED::SET_PED_COMPONENT_VARIATION(iVar0, 0, 3, 2, 0);
						PED::SET_PED_COMPONENT_VARIATION(iVar0, 2, 3, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(iVar0, 3, 3, 2, 0);
						PED::SET_PED_COMPONENT_VARIATION(iVar0, 4, 3, 0, 0);
						break;
				}
				break;
			case 4:
				switch (iParam3)
				{
					case 0:
						PED::SET_PED_COMPONENT_VARIATION(iVar0, 0, 3, 2, 0);
						PED::SET_PED_COMPONENT_VARIATION(iVar0, 2, 3, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(iVar0, 3, 3, 2, 0);
						PED::SET_PED_COMPONENT_VARIATION(iVar0, 4, 3, 0, 0);
						break;
					case 1:
						PED::SET_PED_COMPONENT_VARIATION(iVar0, 0, 0, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(iVar0, 2, 0, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(iVar0, 3, 0, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(iVar0, 4, 0, 2, 0);
						PED::SET_PED_PROP_INDEX(iVar0, 0, 0, 0, false);
						break;
					default:
						PED::SET_PED_COMPONENT_VARIATION(iVar0, 0, 4, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(iVar0, 2, 4, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(iVar0, 3, 4, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(iVar0, 4, 4, 0, 0);
						PED::SET_PED_PROP_INDEX(iVar0, 0, 1, 0, false);
						break;
				}
				break;
		}
	}
	else if (iParam1 == joaat("G_F_ImportExport_01"))
	{
		switch ((iParam2 % 5))
		{
			case 0:
				switch (iParam3)
				{
					case 0:
						PED::SET_PED_COMPONENT_VARIATION(iVar0, 0, 0, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(iVar0, 2, 0, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(iVar0, 3, 0, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(iVar0, 4, 0, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(iVar0, 8, 0, 0, 0);
						break;
					case 1:
						PED::SET_PED_COMPONENT_VARIATION(iVar0, 0, 1, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(iVar0, 2, 1, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(iVar0, 3, 1, 1, 0);
						PED::SET_PED_COMPONENT_VARIATION(iVar0, 4, 1, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(iVar0, 8, 1, 0, 0);
						break;
					default:
						PED::SET_PED_COMPONENT_VARIATION(iVar0, 0, 2, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(iVar0, 2, 2, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(iVar0, 3, 2, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(iVar0, 4, 2, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(iVar0, 8, 2, 0, 0);
						break;
				}
				break;
			case 1:
				switch (iParam3)
				{
					case 0:
						PED::SET_PED_COMPONENT_VARIATION(iVar0, 0, 2, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(iVar0, 2, 2, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(iVar0, 3, 2, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(iVar0, 4, 2, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(iVar0, 8, 2, 0, 0);
						break;
					case 1:
						PED::SET_PED_COMPONENT_VARIATION(iVar0, 0, 3, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(iVar0, 2, 3, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(iVar0, 3, 3, 3, 0);
						PED::SET_PED_COMPONENT_VARIATION(iVar0, 4, 3, 3, 0);
						PED::SET_PED_COMPONENT_VARIATION(iVar0, 8, 3, 0, 0);
						break;
					default:
						PED::SET_PED_COMPONENT_VARIATION(iVar0, 0, 4, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(iVar0, 2, 4, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(iVar0, 3, 4, 1, 0);
						PED::SET_PED_COMPONENT_VARIATION(iVar0, 4, 4, 2, 0);
						PED::SET_PED_COMPONENT_VARIATION(iVar0, 8, 4, 0, 0);
						break;
				}
				break;
			case 2:
				switch (iParam3)
				{
					case 0:
						PED::SET_PED_COMPONENT_VARIATION(iVar0, 0, 4, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(iVar0, 2, 4, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(iVar0, 3, 4, 1, 0);
						PED::SET_PED_COMPONENT_VARIATION(iVar0, 4, 4, 2, 0);
						PED::SET_PED_COMPONENT_VARIATION(iVar0, 8, 4, 0, 0);
						break;
					case 1:
						PED::SET_PED_COMPONENT_VARIATION(iVar0, 0, 0, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(iVar0, 2, 0, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(iVar0, 3, 0, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(iVar0, 4, 0, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(iVar0, 8, 0, 0, 0);
						break;
					default:
						PED::SET_PED_COMPONENT_VARIATION(iVar0, 0, 1, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(iVar0, 2, 1, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(iVar0, 3, 1, 1, 0);
						PED::SET_PED_COMPONENT_VARIATION(iVar0, 4, 1, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(iVar0, 8, 1, 0, 0);
						break;
				}
				break;
			case 3:
				switch (iParam3)
				{
					case 0:
						PED::SET_PED_COMPONENT_VARIATION(iVar0, 0, 1, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(iVar0, 2, 1, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(iVar0, 3, 1, 1, 0);
						PED::SET_PED_COMPONENT_VARIATION(iVar0, 4, 1, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(iVar0, 8, 1, 0, 0);
						break;
					case 1:
						PED::SET_PED_COMPONENT_VARIATION(iVar0, 0, 2, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(iVar0, 2, 2, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(iVar0, 3, 2, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(iVar0, 4, 2, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(iVar0, 8, 2, 0, 0);
						break;
					default:
						PED::SET_PED_COMPONENT_VARIATION(iVar0, 0, 3, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(iVar0, 2, 3, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(iVar0, 3, 3, 3, 0);
						PED::SET_PED_COMPONENT_VARIATION(iVar0, 4, 3, 3, 0);
						PED::SET_PED_COMPONENT_VARIATION(iVar0, 8, 3, 0, 0);
						break;
				}
				break;
			case 4:
				switch (iParam3)
				{
					case 0:
						PED::SET_PED_COMPONENT_VARIATION(iVar0, 0, 3, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(iVar0, 2, 3, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(iVar0, 3, 3, 3, 0);
						PED::SET_PED_COMPONENT_VARIATION(iVar0, 4, 3, 3, 0);
						PED::SET_PED_COMPONENT_VARIATION(iVar0, 8, 3, 0, 0);
						break;
					case 1:
						PED::SET_PED_COMPONENT_VARIATION(iVar0, 0, 0, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(iVar0, 2, 0, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(iVar0, 3, 0, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(iVar0, 4, 0, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(iVar0, 8, 0, 0, 0);
						break;
					default:
						PED::SET_PED_COMPONENT_VARIATION(iVar0, 0, 4, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(iVar0, 2, 4, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(iVar0, 3, 4, 1, 0);
						PED::SET_PED_COMPONENT_VARIATION(iVar0, 4, 4, 2, 0);
						PED::SET_PED_COMPONENT_VARIATION(iVar0, 8, 4, 0, 0);
						break;
				}
				break;
			}
	}
}

bool func_990(var uParam0, int iParam1)//Position - 0x19259
{
	return BitTest(uParam0->f_285, iParam1);
}

void func_991(int iParam0, int iParam1)//Position - 0x192F1
{
	int iVar0;
	int iVar1;
	iVar0 = (iParam1 % 2);
	iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
	switch (iVar1)
	{
		case joaat("banshee2"):
			VEHICLE::SET_VEHICLE_MOD_KIT(iParam0, 0);
			switch (iVar0)
			{
				case 0:
					VEHICLE::SET_VEHICLE_COLOURS(iParam0, 27, 27);
					VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iParam0, 27, 156);
					VEHICLE::SET_VEHICLE_EXTRA_COLOUR_5(iParam0, 31);
					VEHICLE::SET_VEHICLE_EXTRA_COLOUR_6(iParam0, 134);
					VEHICLE::SET_VEHICLE_MOD(iParam0, 0, 2, false);
					VEHICLE::SET_VEHICLE_MOD(iParam0, 1, 1, false);
					VEHICLE::SET_VEHICLE_MOD(iParam0, 48, 2, false);
					VEHICLE::SET_VEHICLE_MOD(iParam0, 23, 40, false);
					break;
				case 1:
					VEHICLE::SET_VEHICLE_COLOURS(iParam0, 36, 36);
					VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iParam0, 88, 156);
					VEHICLE::SET_VEHICLE_EXTRA_COLOUR_5(iParam0, 31);
					VEHICLE::SET_VEHICLE_EXTRA_COLOUR_6(iParam0, 134);
					VEHICLE::SET_VEHICLE_MOD(iParam0, 0, 1, false);
					VEHICLE::SET_VEHICLE_MOD(iParam0, 3, 1, false);
					VEHICLE::SET_VEHICLE_MOD(iParam0, 1, 2, false);
					VEHICLE::SET_VEHICLE_MOD(iParam0, 48, 5, false);
					VEHICLE::SET_VEHICLE_MOD(iParam0, 23, 46, false);
					break;
			}
			break;
		case joaat("sultanrs"):
			VEHICLE::SET_VEHICLE_MOD_KIT(iParam0, 0);
			switch (iVar0)
			{
				case 0:
					VEHICLE::SET_VEHICLE_COLOURS(iParam0, 92, 92);
					VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iParam0, 88, 158);
					VEHICLE::SET_VEHICLE_EXTRA_COLOUR_5(iParam0, 31);
					VEHICLE::SET_VEHICLE_EXTRA_COLOUR_6(iParam0, 134);
					VEHICLE::SET_VEHICLE_MOD(iParam0, 0, 10, false);
					VEHICLE::SET_VEHICLE_MOD(iParam0, 7, 0, false);
					VEHICLE::SET_VEHICLE_MOD(iParam0, 1, 8, false);
					VEHICLE::SET_VEHICLE_MOD(iParam0, 23, 28, false);
					VEHICLE::SET_VEHICLE_MOD(iParam0, 48, 3, false);
					break;
				case 1:
					VEHICLE::SET_VEHICLE_COLOURS(iParam0, 28, 28);
					VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iParam0, 27, 0);
					VEHICLE::SET_VEHICLE_EXTRA_COLOUR_5(iParam0, 31);
					VEHICLE::SET_VEHICLE_EXTRA_COLOUR_6(iParam0, 134);
					VEHICLE::SET_VEHICLE_MOD(iParam0, 0, 11, false);
					VEHICLE::SET_VEHICLE_MOD(iParam0, 7, 7, false);
					VEHICLE::SET_VEHICLE_MOD(iParam0, 1, 10, false);
					VEHICLE::SET_VEHICLE_MOD(iParam0, 23, 1, false);
					VEHICLE::SET_VEHICLE_MOD(iParam0, 48, 4, false);
					break;
			}
			break;
	}
}

var func_992(var uParam0, var uParam1)//Position - 0x19737
{
	int iVar0;
	iVar0 = uParam0->f_267;
	if (uParam1->f_46[iVar0] > 0)
	{
		return uParam1->f_46[iVar0];
	}
	return uParam1->f_2;
}

var func_993(var uParam0, var uParam1)//Position - 0x19761
{
	int iVar0;
	switch (uParam0->f_270)
	{
		case 0:
			iVar0 = uParam0->f_267;
			if (uParam1->f_35[iVar0] != 0)
			{
				if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
				{
					if (uParam0->f_293 != uParam1->f_35[iVar0])
					{
						uParam0->f_293 = uParam1->f_35[iVar0];
					}
				}
				return uParam1->f_35[iVar0];
			}
			else
			{
				return uParam1->f_29;
			}
			break;
		case 1:
			return uParam1->f_30;
	}
	return uParam1->f_29;
}

int func_994(var uParam0)//Position - 0x197D9
{
	int iVar0;
	int iVar1;
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (iVar1 == -1)
		{
			if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID((uParam0[iVar0 /*52*/])->f_5))
			{
				if (!BitTest((uParam0[iVar0 /*52*/])->f_11, 0))
				{
					iVar1 = iVar0;
				}
			}
		}
		iVar0++;
	}
	return iVar1;
}

int func_995(var uParam0, int iParam1)//Position - 0x19820
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if ((uParam0[iVar0 /*52*/])->f_13 == iParam1)
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

int func_996(var uParam0)//Position - 0x19A40
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	iVar1 = -1;
	fVar4 = 1E+10f;
	iVar0 = 0;
	while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		iVar2 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar0);
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar2))
		{
			iVar3 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar2);
			fVar5 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iVar3), false), (uParam0[0 /*52*/])->f_14);
			if (fVar5 < fVar4)
			{
				fVar4 = fVar5;
				iVar1 = iVar0;
			}
		}
		iVar0++;
	}
	return iVar1;
}

int func_997(var uParam0)//Position - 0x19AAC
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	iVar1 = -1;
	fVar4 = 1E+10f;
	iVar0 = 0;
	while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		iVar2 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar0);
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar2))
		{
			iVar3 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar2);
			fVar5 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iVar3), false), ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(uParam0->f_274), false));
			if (fVar5 < fVar4)
			{
				fVar4 = fVar5;
				iVar1 = iVar0;
			}
		}
		iVar0++;
	}
	return iVar1;
}

int func_998(var uParam0)//Position - 0x19B1D
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	iVar1 = -1;
	fVar4 = 1E+10f;
	iVar0 = 0;
	while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		iVar2 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar0);
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar2))
		{
			iVar3 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar2);
			fVar5 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iVar3), false), ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_PED(uParam0->f_273), false));
			if (fVar5 < fVar4)
			{
				fVar4 = fVar5;
				iVar1 = iVar0;
			}
		}
		iVar0++;
	}
	return iVar1;
}

void func_999(var uParam0, var uParam1)//Position - 0x19BE4
{
	int iVar0;
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(uParam1->f_32))
	{
		if (uParam0->f_273 != uParam1->f_32)
		{
			uParam0->f_273 = uParam1->f_32;
		}
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(uParam1->f_33))
	{
		if (uParam0->f_274 != uParam1->f_33)
		{
			uParam0->f_274 = uParam1->f_33;
		}
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (!__LIB_0__::func_78(uParam1->f_10[iVar0 /*3*/], 0f, 0f, 0f, 0))
		{
			if (!__LIB_0__::func_78(uParam1->f_10[iVar0 /*3*/], (uParam0[iVar0 /*52*/])->f_14, 0))
			{
				(uParam0[iVar0 /*52*/])->f_14 = { uParam1->f_10[iVar0 /*3*/] };
			}
		}
		iVar0++;
	}
	if (!__LIB_0__::func_78(uParam1->f_26, 0f, 0f, 0f, 0))
	{
		if (!__LIB_0__::func_78(uParam1->f_26, uParam0->f_275, 0))
		{
			uParam0->f_275 = { uParam1->f_26 };
		}
	}
	if (uParam1->f_5 > 0)
	{
		if (uParam0->f_271 != uParam1->f_5)
		{
			uParam0->f_271 = uParam1->f_5;
		}
	}
	if (uParam1->f_29 != 0)
	{
		if (uParam0->f_294 != uParam1->f_29)
		{
			uParam0->f_294 = uParam1->f_29;
		}
	}
	if (uParam0->f_285 != uParam1->f_52)
	{
		uParam0->f_285 = uParam1->f_52;
	}
	if (uParam0->f_281 != uParam1->f_9)
	{
		uParam0->f_281 = uParam1->f_9;
	}
}

}